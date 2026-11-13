#include "lifted.h"

void fn1_a0314(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038584084));
  /* a0314: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a0318: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* a031c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a0320: stp x28, x27, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* a0324: stp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* a0328: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* a032c: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a0330: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a0334: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* a0338: cmp x4, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 4), UINT64_C(0));
  /* a033c: add x8, x3, x2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) + ARC_X_R(c, 2)));
  /* a0340: csel x22, x2, x4, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 2)) : ARC_X_R(c, 4)));
  /* a0344: cmn x3, #1 */
  (void)arc_add64(c, ARC_X_R(c, 3), UINT64_C(1), 0);
  /* a0348: csinv x27, x8, xzr, ne */
  ARC_X_W(c, 27, (ARC_COND(c, 1) ? (ARC_X_R(c, 8)) : (~(uint64_t)(ARC_X_R(c, 31)))));
  /* a034c: str x22, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 22));
  /* a0350: cmp x22, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 27));
  /* a0354: b.hs #0xa0498 */
  if (ARC_COND(c, 2)) goto L_a0498;
  /* a0358: mov x21, x6 */
  ARC_X_W(c, 21, ARC_X_R(c, 6));
  /* a035c: mov x19, x5 */
  ARC_X_W(c, 19, ARC_X_R(c, 5));
  /* a0360: mov x23, x2 */
  ARC_X_W(c, 23, ARC_X_R(c, 2));
  /* a0364: mov x24, x1 */
  ARC_X_W(c, 24, ARC_X_R(c, 1));
  /* a0368: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a036c: b #0xa037c */
  goto L_a037c;
L_a0370:;
  /* a0370: cmp x22, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 27));
  /* a0374: str x22, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 22));
  /* a0378: b.hs #0xa0498 */
  if (ARC_COND(c, 2)) goto L_a0498;
L_a037c:;
  /* a037c: mov x8, x22 */
  ARC_X_W(c, 8, ARC_X_R(c, 22));
  /* a0380: mov x26, x22 */
  ARC_X_W(c, 26, ARC_X_R(c, 22));
  /* a0384: ldr w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    ARC_W_W(c, 9, arc_ld32(_a));
  }
  /* a0388: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* a038c: cmn w9, #1 */
  (void)arc_add32(c, ARC_W_R(c, 9), UINT64_C(1), 0);
  /* a0390: b.ne #0xa03a0 */
  if (ARC_COND(c, 1)) goto L_a03a0;
  /* a0394: ldur x9, [x26, #4] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(4))));
  /* a0398: add x8, x26, #0xc */
  ARC_X_W(c, 8, (ARC_X_R(c, 26) + UINT64_C(12)));
  /* a039c: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
L_a03a0:;
  /* a03a0: cbz x9, #0xa0498 */
  if ((ARC_X_R(c, 9)) == 0) goto L_a0498;
  /* a03a4: ldr w10, [x8] */
  ARC_W_W(c, 10, arc_ld32(ARC_X_R(c, 8)));
  /* a03a8: add x22, x8, x9 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* a03ac: cbz w10, #0xa0370 */
  if ((ARC_W_R(c, 10)) == 0) goto L_a0370;
  /* a03b0: sub x1, x8, x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) - ARC_X_R(c, 10)));
  /* a03b4: cmp x23, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 1));
  /* a03b8: b.hi #0xa0370 */
  if (ARC_COND(c, 8)) goto L_a0370;
  /* a03bc: cmp x1, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 27));
  /* a03c0: b.hs #0xa0370 */
  if (ARC_COND(c, 2)) goto L_a0370;
  /* a03c4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a03c8: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* a03cc: bl #0x9d2f4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(656336));
  fn1_9d2f4(c);
  /* a03d0: cbnz x0, #0xa0370 */
  if ((ARC_X_R(c, 0)) != 0) goto L_a0370;
  /* a03d4: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* a03d8: ldrb w3, [x21, #0x18] */
  ARC_W_W(c, 3, arc_ld8((ARC_X_R(c, 21) + INT64_C(24))));
  /* a03dc: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* a03e0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a03e4: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* a03e8: mov x4, xzr */
  ARC_X_W(c, 4, ARC_X_R(c, 31));
  /* a03ec: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* a03f0: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* a03f4: bl #0x9eecc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(656376));
  fn1_9eecc(c);
  /* a03f8: ldrb w8, [x21, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 21) + INT64_C(24))));
  /* a03fc: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* a0400: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* a0404: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a0408: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* a040c: mov x4, xzr */
  ARC_X_W(c, 4, ARC_X_R(c, 31));
  /* a0410: and w3, w8, #0xf */
  ARC_W_W(c, 3, (ARC_W_R(c, 8) & UINT64_C(15)));
  /* a0414: bl #0x9eecc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(656408));
  fn1_9eecc(c);
  /* a0418: cmp x25, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 24));
  /* a041c: b.hs #0xa0370 */
  if (ARC_COND(c, 2)) goto L_a0370;
  /* a0420: add x28, x0, x25 */
  ARC_X_W(c, 28, (ARC_X_R(c, 0) + ARC_X_R(c, 25)));
  /* a0424: cmp x24, x28 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 28));
  /* a0428: b.hi #0xa0370 */
  if (ARC_COND(c, 8)) goto L_a0370;
  /* a042c: ldrb w8, [x21, #0x31] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 21) + INT64_C(49))));
  /* a0430: str xzr, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), ARC_X_R(c, 31));
  /* a0434: tbz w8, #0, #0xa04c0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_a04c0;
  /* a0438: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* a043c: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* a0440: bl #0x9f258 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(656452));
  fn1_9f258(c);
  /* a0444: ldrb w8, [x21, #0x19] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 21) + INT64_C(25))));
  /* a0448: ldr x24, [sp, #8] */
  ARC_X_W(c, 24, arc_ld64(((c)->sp + INT64_C(8))));
  /* a044c: cmp w8, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(255));
  /* a0450: add x23, x24, x0 */
  ARC_X_W(c, 23, (ARC_X_R(c, 24) + ARC_X_R(c, 0)));
  /* a0454: b.eq #0xa04c4 */
  if (ARC_COND(c, 0)) goto L_a04c4;
  /* a0458: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* a045c: and w3, w8, #0xf */
  ARC_W_W(c, 3, (ARC_W_R(c, 8) & UINT64_C(15)));
  /* a0460: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a0464: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* a0468: mov x4, xzr */
  ARC_X_W(c, 4, ARC_X_R(c, 31));
  /* a046c: bl #0x9eecc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(656496));
  fn1_9eecc(c);
  /* a0470: cbz x0, #0xa04c4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a04c4;
  /* a0474: ldrb w3, [x21, #0x19] */
  ARC_W_W(c, 3, arc_ld8((ARC_X_R(c, 21) + INT64_C(25))));
  /* a0478: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* a047c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a0480: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* a0484: mov x4, xzr */
  ARC_X_W(c, 4, ARC_X_R(c, 31));
  /* a0488: str x24, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 24));
  /* a048c: bl #0x9eecc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(656528));
  fn1_9eecc(c);
  /* a0490: str x0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), ARC_X_R(c, 0));
  /* a0494: b #0xa04c4 */
  goto L_a04c4;
L_a0498:;
  /* a0498: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
L_a049c:;
  /* a049c: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a04a0: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a04a4: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* a04a8: ldp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* a04ac: ldp x28, x27, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* a04b0: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a04b4: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* a04b8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a04bc: ret  */
  return;
L_a04c0:;
  /* a04c0: ldr x23, [sp, #8] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(8))));
L_a04c4:;
  /* a04c4: sub x8, x22, x26 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) - ARC_X_R(c, 26)));
  /* a04c8: stp x23, x25, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* a04cc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* a04d0: stp x26, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* a04d4: str x28, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 28));
  /* a04d8: b #0xa049c */
  goto L_a049c;
}

void fn1_a2190(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038591888));
  /* a2190: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a2194: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a2198: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* a219c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a21a0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a21a4: bl #0x142650 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(663976));
  fn1_142650(c);
  /* a21a8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a21ac: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* a21b0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* a21b4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a21b8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a21bc: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_a7670(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038613616));
  /* a7670: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a7674: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a7678: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* a767c: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a7680: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a7684: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a7688: ldp x21, x8, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 21, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* a768c: cmp x21, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* a7690: b.ne #0xa771c */
  if (ARC_COND(c, 1)) goto L_a771c;
  /* a7694: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* a7698: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* a769c: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* a76a0: ldr x20, [x8], #0x18 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(24));
    ARC_X_W(c, 20, arc_ld64(_a));
  }
  /* a76a4: sub x19, x21, x20 */
  ARC_X_W(c, 19, (ARC_X_R(c, 21) - ARC_X_R(c, 20)));
  /* a76a8: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* a76ac: lsl x1, x19, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 19)) << ((UINT64_C(1)) & 63)));
  /* a76b0: b.eq #0xa76d0 */
  if (ARC_COND(c, 0)) goto L_a76d0;
  /* a76b4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a76b8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(685756));
  fn1_142878(c);
  /* a76bc: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* a76c0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* a76c4: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* a76c8: cbnz x8, #0xa7708 */
  if ((ARC_X_R(c, 8)) != 0) goto L_a7708;
  /* a76cc: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(685776));
  fn1_1427b8(c);
L_a76d0:;
  /* a76d0: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* a76d4: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(685784));
  fn1_1428a8(c);
  /* a76d8: cbz x0, #0xa7740 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a7740;
  /* a76dc: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* a76e0: cmp x21, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 20));
  /* a76e4: b.eq #0xa7700 */
  if (ARC_COND(c, 0)) goto L_a7700;
  /* a76e8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* a76ec: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* a76f0: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* a76f4: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* a76f8: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(685820));
  fn1_1449f0(c);
  /* a76fc: mov x8, x21 */
  ARC_X_W(c, 8, ARC_X_R(c, 21));
L_a7700:;
  /* a7700: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* a7704: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
L_a7708:;
  /* a7708: asr x9, x19, #2 */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 19)) >> ((UINT64_C(2)) & 63))));
  /* a770c: add x21, x8, x19 */
  ARC_X_W(c, 21, (ARC_X_R(c, 8) + ARC_X_R(c, 19)));
  /* a7710: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* a7714: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* a7718: str x9, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 9));
L_a771c:;
  /* a771c: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* a7720: str x8, [x21], #8 */
  { const uint64_t _a = ARC_X_R(c, 21);
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a7724: str x21, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 21));
  /* a7728: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a772c: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* a7730: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a7734: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a7738: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a773c: ret  */
  return;
L_a7740:;
  /* a7740: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(685892));
  fn1_1427b8(c);
}

void fn1_acdd8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038635992));
L_acdd8:;
  /* acdd8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* acddc: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* acde0: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* acde4: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* acde8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* acdec: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* acdf0: ldp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* acdf4: subs x9, x9, x8 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8)));
  /* acdf8: b.eq #0xacec0 */
  if (ARC_COND(c, 0)) goto L_acec0;
  /* acdfc: cmp x9, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(2));
  /* ace00: b.lo #0xacec0 */
  if (ARC_COND(c, 3)) goto L_acec0;
  /* ace04: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* ace08: cmp w9, #0x64 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(100));
  /* ace0c: b.ne #0xacec0 */
  if (ARC_COND(c, 1)) goto L_acec0;
  /* ace10: ldrb w9, [x8, #1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(1))));
  /* ace14: cmp w9, #0x58 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(88));
  /* ace18: b.eq #0xacf74 */
  if (ARC_COND(c, 0)) goto L_acf74;
  /* ace1c: cmp w9, #0x78 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(120));
  /* ace20: b.eq #0xaced8 */
  if (ARC_COND(c, 0)) goto L_aced8;
  /* ace24: cmp w9, #0x69 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(105));
  /* ace28: b.ne #0xacec0 */
  if (ARC_COND(c, 1)) goto L_acec0;
  /* ace2c: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* ace30: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ace34: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* ace38: bl #0xa8930 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(708156));
  fn1_a8930(c);
  /* ace3c: cbz x0, #0xad018 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ad018;
  /* ace40: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ace44: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ace48: bl #0xacdd8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(708172));
  fn1_acdd8(c);
  /* ace4c: cbz x0, #0xad018 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ad018;
  /* ace50: ldr x22, [x21, #0x1330] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 21) + INT64_C(4912))));
  /* ace54: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ace58: ldr x8, [x22, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* ace5c: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* ace60: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* ace64: b.hi #0xace84 */
  if (ARC_COND(c, 8)) goto L_ace84;
  /* ace68: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* ace6c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(708208));
  fn1_1428a8(c);
  /* ace70: cbz x0, #0xad030 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ad030;
  /* ace74: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ace78: stp x22, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ace7c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* ace80: str x0, [x21, #0x1330] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(4912)), ARC_X_R(c, 0));
L_ace84:;
  /* ace84: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* ace88: add x0, x22, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* ace8c: adrp x8, #0x14a000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1351680)));
  /* ace90: add x8, x8, #0xff0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4080)));
  /* ace94: str x9, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 9));
  /* ace98: mov w9, #0x51 */
  ARC_W_W(c, 9, UINT64_C(81));
  /* ace9c: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* acea0: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* acea4: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* acea8: mov w9, #0x540 */
  ARC_W_W(c, 9, UINT64_C(1344));
  /* aceac: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* aceb0: stp x19, x20, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* aceb4: orr w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 9)));
  /* aceb8: strb wzr, [x0, #0x20] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(32)), ARC_W_R(c, 31));
  /* acebc: b #0xad014 */
  goto L_ad014;
L_acec0:;
  /* acec0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* acec4: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* acec8: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* acecc: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* aced0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* aced4: b #0xaa69c */
  fn1_aa69c(c); return;
L_aced8:;
  /* aced8: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* acedc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* acee0: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* acee4: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(708328));
  fn1_aa69c(c);
  /* acee8: cbz x0, #0xad018 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ad018;
  /* aceec: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* acef0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* acef4: bl #0xacdd8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(708344));
  fn1_acdd8(c);
  /* acef8: cbz x0, #0xad018 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ad018;
  /* acefc: ldr x22, [x21, #0x1330] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 21) + INT64_C(4912))));
  /* acf00: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* acf04: ldr x8, [x22, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* acf08: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* acf0c: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* acf10: b.hi #0xacf30 */
  if (ARC_COND(c, 8)) goto L_acf30;
  /* acf14: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* acf18: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(708380));
  fn1_1428a8(c);
  /* acf1c: cbz x0, #0xad030 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ad030;
  /* acf20: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* acf24: stp x22, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* acf28: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* acf2c: str x0, [x21, #0x1330] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(4912)), ARC_X_R(c, 0));
L_acf30:;
  /* acf30: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* acf34: add x0, x22, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* acf38: adrp x8, #0x14a000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1351680)));
  /* acf3c: add x8, x8, #0xff0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4080)));
  /* acf40: str x9, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 9));
  /* acf44: mov w9, #0x51 */
  ARC_W_W(c, 9, UINT64_C(81));
  /* acf48: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* acf4c: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* acf50: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* acf54: mov w9, #0x540 */
  ARC_W_W(c, 9, UINT64_C(1344));
  /* acf58: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* acf5c: stp x19, x20, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* acf60: orr w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 9)));
  /* acf64: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* acf68: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* acf6c: strb w9, [x0, #0x20] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(32)), ARC_W_R(c, 9));
  /* acf70: b #0xad018 */
  goto L_ad018;
L_acf74:;
  /* acf74: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* acf78: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* acf7c: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* acf80: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(708484));
  fn1_aa69c(c);
  /* acf84: cbz x0, #0xad018 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ad018;
  /* acf88: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* acf8c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* acf90: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(708500));
  fn1_aa69c(c);
  /* acf94: cbz x0, #0xad018 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ad018;
  /* acf98: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* acf9c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* acfa0: bl #0xacdd8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(708516));
  fn1_acdd8(c);
  /* acfa4: cbz x0, #0xad018 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ad018;
  /* acfa8: ldr x23, [x22, #0x1330] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 22) + INT64_C(4912))));
  /* acfac: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* acfb0: ldr x8, [x23, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* acfb4: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* acfb8: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* acfbc: b.hi #0xacfdc */
  if (ARC_COND(c, 8)) goto L_acfdc;
  /* acfc0: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* acfc4: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(708552));
  fn1_1428a8(c);
  /* acfc8: cbz x0, #0xad030 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ad030;
  /* acfcc: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* acfd0: stp x23, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* acfd4: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* acfd8: str x0, [x22, #0x1330] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(4912)), ARC_X_R(c, 0));
L_acfdc:;
  /* acfdc: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* acfe0: add x0, x23, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + ARC_X_R(c, 8)));
  /* acfe4: adrp x8, #0x14b000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1355776)));
  /* acfe8: add x8, x8, #0x68 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(104)));
  /* acfec: str x9, [x23, #8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(8)), ARC_X_R(c, 9));
  /* acff0: mov w9, #0x52 */
  ARC_W_W(c, 9, UINT64_C(82));
  /* acff4: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* acff8: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* acffc: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* ad000: mov w9, #0x540 */
  ARC_W_W(c, 9, UINT64_C(1344));
  /* ad004: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* ad008: stp x19, x20, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* ad00c: orr w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 9)));
  /* ad010: str x21, [x0, #0x20] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(32)), ARC_X_R(c, 21));
L_ad014:;
  /* ad014: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
L_ad018:;
  /* ad018: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ad01c: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* ad020: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ad024: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ad028: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ad02c: ret  */
  return;
L_ad030:;
  /* ad030: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(708660));
  fn1_142488(c);
}

void fn1_b2f58(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038660952));
  /* b2f58: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b2f5c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b2f60: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b2f64: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b2f68: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b2f6c: ldp x9, x10, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b2f70: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b2f74: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* b2f78: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b2f7c: add x11, x9, #8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(8)));
  /* b2f80: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* b2f84: b.ls #0xb2fb4 */
  if (ARC_COND(c, 9)) goto L_b2fb4;
  /* b2f88: lsl x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b2f8c: add x9, x9, #0x3e8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1000)));
  /* b2f90: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* b2f94: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b2f98: csel x1, x10, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* b2f9c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b2fa0: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(733092));
  fn1_142878(c);
  /* b2fa4: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b2fa8: cbz x0, #0xb3094 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b3094;
  /* b2fac: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b2fb0: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
L_b2fb4:;
  /* b2fb4: mov x10, #0x7527 */
  ARC_X_W(c, 10, UINT64_C(29991));
  /* b2fb8: movk x10, #0x6e6e, lsl #16 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1852702720)));
  /* b2fbc: movk x10, #0x6d61, lsl #32 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446462603027808255)) | UINT64_C(120263379255296)));
  /* b2fc0: movk x10, #0x6465, lsl #48 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(281474976710655)) | UINT64_C(7234188376440569856)));
  /* b2fc4: str x10, [x8, x9] */
  arc_st64((ARC_X_R(c, 8) + ARC_X_R(c, 9)), ARC_X_R(c, 10));
  /* b2fc8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b2fcc: add x8, x8, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* b2fd0: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b2fd4: ldr x20, [x21, #0x18] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 21) + INT64_C(24))));
  /* b2fd8: cbz x20, #0xb3034 */
  if ((ARC_X_R(c, 20)) == 0) goto L_b3034;
  /* b2fdc: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b2fe0: add x9, x20, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* b2fe4: ldr x21, [x21, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* b2fe8: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b2fec: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b2ff0: b.ls #0xb3018 */
  if (ARC_COND(c, 9)) goto L_b3018;
  /* b2ff4: lsl x8, x10, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b2ff8: add x9, x9, #0x3e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(992)));
  /* b2ffc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b3000: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* b3004: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b3008: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(733196));
  fn1_142878(c);
  /* b300c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b3010: cbz x0, #0xb309c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b309c;
  /* b3014: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b3018:;
  /* b3018: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b301c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* b3020: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* b3024: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(733224));
  fn1_1449d8(c);
  /* b3028: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b302c: add x8, x8, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 20)));
  /* b3030: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_b3034:;
  /* b3034: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b3038: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b303c: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b3040: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b3044: b.ls #0xb306c */
  if (ARC_COND(c, 9)) goto L_b306c;
  /* b3048: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b304c: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b3050: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b3054: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b3058: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b305c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(733280));
  fn1_142878(c);
  /* b3060: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b3064: cbz x0, #0xb3098 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b3098;
  /* b3068: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b306c:;
  /* b306c: mov w9, #0x27 */
  ARC_W_W(c, 9, UINT64_C(39));
  /* b3070: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b3074: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b3078: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b307c: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b3080: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b3084: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b3088: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b308c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b3090: ret  */
  return;
L_b3094:;
  /* b3094: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(733336));
  fn1_1427b8(c);
L_b3098:;
  /* b3098: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(733340));
  fn1_1427b8(c);
L_b309c:;
  /* b309c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(733344));
  fn1_1427b8(c);
}

void fn1_b6b98(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038676376));
  /* b6b98: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b6b9c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b6ba0: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b6ba4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b6ba8: ldp x9, x10, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b6bac: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* b6bb0: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* b6bb4: add x11, x9, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* b6bb8: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* b6bbc: b.ls #0xb6bf8 */
  if (ARC_COND(c, 9)) goto L_b6bf8;
  /* b6bc0: lsl x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b6bc4: add x9, x9, #0x3e1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(993)));
  /* b6bc8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* b6bcc: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* b6bd0: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b6bd4: csel x9, x10, x9, hi */
  ARC_X_W(c, 9, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* b6bd8: str x9, [x1, #0x10] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(16)), ARC_X_R(c, 9));
  /* b6bdc: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* b6be0: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(748516));
  fn1_142878(c);
  /* b6be4: str x0, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 0));
  /* b6be8: cbz x0, #0xb6c28 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b6c28;
  /* b6bec: ldr x9, [x20, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* b6bf0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* b6bf4: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
L_b6bf8:;
  /* b6bf8: mov w10, #0x7e */
  ARC_W_W(c, 10, UINT64_C(126));
  /* b6bfc: strb w10, [x8, x9] */
  arc_st8((ARC_X_R(c, 8) + ARC_X_R(c, 9)), ARC_W_R(c, 10));
  /* b6c00: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b6c04: ldr x8, [x1, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* b6c08: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* b6c0c: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b6c10: str x8, [x1, #8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(8)), ARC_X_R(c, 8));
  /* b6c14: ldr x16, [x9, #0x20] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* b6c18: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b6c1c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b6c20: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b6c24: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_b6c28:;
  /* b6c28: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(748588));
  fn1_1427b8(c);
}

void fn1_b8c8c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038684812));
  /* b8c8c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b8c90: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b8c94: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b8c98: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b8c9c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b8ca0: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* b8ca4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b8ca8: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b8cac: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b8cb0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b8cb4: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b8cb8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(756924));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b8cbc: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* b8cc0: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b8cc4: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b8cc8: b.eq #0xb8ce0 */
  if (ARC_COND(c, 0)) goto L_b8ce0;
  /* b8ccc: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b8cd0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b8cd4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b8cd8: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b8cdc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(756960));
  arc_dispatch(c, ARC_X_R(c, 8));
L_b8ce0:;
  /* b8ce0: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b8ce4: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b8ce8: add x10, x8, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* b8cec: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b8cf0: b.ls #0xb8d18 */
  if (ARC_COND(c, 9)) goto L_b8d18;
  /* b8cf4: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b8cf8: add x8, x8, #0x3e2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(994)));
  /* b8cfc: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b8d00: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b8d04: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b8d08: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(757004));
  fn1_142878(c);
  /* b8d0c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b8d10: cbz x0, #0xb8dec */
  if ((ARC_X_R(c, 0)) == 0) goto L_b8dec;
  /* b8d14: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b8d18:;
  /* b8d18: mov w9, #0x2820 */
  ARC_W_W(c, 9, UINT64_C(10272));
  /* b8d1c: strh w9, [x0, x8] */
  arc_st16((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b8d20: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b8d24: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* b8d28: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b8d2c: ldr x21, [x20, #0x20] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* b8d30: cbz x21, #0xb8d8c */
  if ((ARC_X_R(c, 21)) == 0) goto L_b8d8c;
  /* b8d34: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b8d38: add x9, x21, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* b8d3c: ldr x20, [x20, #0x18] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* b8d40: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b8d44: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b8d48: b.ls #0xb8d70 */
  if (ARC_COND(c, 9)) goto L_b8d70;
  /* b8d4c: lsl x8, x10, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b8d50: add x9, x9, #0x3e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(992)));
  /* b8d54: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b8d58: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* b8d5c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b8d60: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(757092));
  fn1_142878(c);
  /* b8d64: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b8d68: cbz x0, #0xb8df4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b8df4;
  /* b8d6c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b8d70:;
  /* b8d70: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b8d74: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* b8d78: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* b8d7c: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(757120));
  fn1_1449d8(c);
  /* b8d80: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b8d84: add x8, x8, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* b8d88: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_b8d8c:;
  /* b8d8c: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b8d90: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b8d94: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b8d98: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b8d9c: b.ls #0xb8dc4 */
  if (ARC_COND(c, 9)) goto L_b8dc4;
  /* b8da0: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b8da4: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b8da8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b8dac: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b8db0: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b8db4: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(757176));
  fn1_142878(c);
  /* b8db8: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b8dbc: cbz x0, #0xb8df0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b8df0;
  /* b8dc0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b8dc4:;
  /* b8dc4: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* b8dc8: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b8dcc: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b8dd0: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b8dd4: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b8dd8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b8ddc: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b8de0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b8de4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b8de8: ret  */
  return;
L_b8dec:;
  /* b8dec: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(757232));
  fn1_1427b8(c);
L_b8df0:;
  /* b8df0: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(757236));
  fn1_1427b8(c);
L_b8df4:;
  /* b8df4: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(757240));
  fn1_1427b8(c);
}

void fn1_bc970(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038700400));
  /* bc970: bti c */
  /* bti: no architectural effect here */
  /* bc974: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* bc978: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_bf250(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038710864));
  /* bf250: bti c */
  /* bti: no architectural effect here */
  /* bf254: stp q1, q0, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* bf258: ldp x9, x8, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* bf25c: mov x13, #0x7fff000000000000 */
  ARC_X_W(c, 13, UINT64_C(9223090561878065152));
  /* bf260: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* bf264: and x12, x8, #0x7fffffffffffffff */
  ARC_X_W(c, 12, (ARC_X_R(c, 8) & UINT64_C(9223372036854775807)));
  /* bf268: cmp xzr, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 31), ARC_X_R(c, 9));
  /* bf26c: sbcs xzr, x13, x12 */
  ARC_X_W(c, 31, arc_add64(c, ARC_X_R(c, 13), ((uint64_t)~(uint64_t)(ARC_X_R(c, 12))), (c)->cf));
  /* bf270: b.lo #0xbf2e8 */
  if (ARC_COND(c, 3)) goto L_bf2e8;
  /* bf274: ldp x11, x10, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* bf278: and x14, x10, #0x7fffffffffffffff */
  ARC_X_W(c, 14, (ARC_X_R(c, 10) & UINT64_C(9223372036854775807)));
  /* bf27c: cmp xzr, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 31), ARC_X_R(c, 11));
  /* bf280: sbcs xzr, x13, x14 */
  ARC_X_W(c, 31, arc_add64(c, ARC_X_R(c, 13), ((uint64_t)~(uint64_t)(ARC_X_R(c, 14))), (c)->cf));
  /* bf284: b.lo #0xbf2e8 */
  if (ARC_COND(c, 3)) goto L_bf2e8;
  /* bf288: orr x13, x11, x9 */
  ARC_X_W(c, 13, (ARC_X_R(c, 11) | ARC_X_R(c, 9)));
  /* bf28c: orr x12, x14, x12 */
  ARC_X_W(c, 12, (ARC_X_R(c, 14) | ARC_X_R(c, 12)));
  /* bf290: orr x12, x13, x12 */
  ARC_X_W(c, 12, (ARC_X_R(c, 13) | ARC_X_R(c, 12)));
  /* bf294: cbz x12, #0xbf2b8 */
  if ((ARC_X_R(c, 12)) == 0) goto L_bf2b8;
  /* bf298: tst x10, x8 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 10) & ARC_X_R(c, 8)));
  /* bf29c: b.lt #0xbf2c4 */
  if (ARC_COND(c, 11)) goto L_bf2c4;
  /* bf2a0: cmp x9, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 11));
  /* bf2a4: sbcs xzr, x8, x10 */
  ARC_X_W(c, 31, arc_add64(c, ARC_X_R(c, 8), ((uint64_t)~(uint64_t)(ARC_X_R(c, 10))), (c)->cf));
  /* bf2a8: b.ge #0xbf2dc */
  if (ARC_COND(c, 10)) goto L_bf2dc;
  /* bf2ac: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* bf2b0: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* bf2b4: ret  */
  return;
L_bf2b8:;
  /* bf2b8: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* bf2bc: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* bf2c0: ret  */
  return;
L_bf2c4:;
  /* bf2c4: cmp x11, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 9));
  /* bf2c8: sbcs xzr, x10, x8 */
  ARC_X_W(c, 31, arc_add64(c, ARC_X_R(c, 10), ((uint64_t)~(uint64_t)(ARC_X_R(c, 8))), (c)->cf));
  /* bf2cc: b.ge #0xbf2dc */
  if (ARC_COND(c, 10)) goto L_bf2dc;
  /* bf2d0: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* bf2d4: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* bf2d8: ret  */
  return;
L_bf2dc:;
  /* bf2dc: cmp x9, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 11));
  /* bf2e0: ccmp x8, x10, #0, eq */
  if (ARC_COND(c, 0)) { (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* bf2e4: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
L_bf2e8:;
  /* bf2e8: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* bf2ec: ret  */
  return;
}

void fn1_d5a90(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038803088));
  /* d5a90: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d5a94: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d5a98: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d5a9c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* d5aa0: fmov x8, d0 */
  ARC_X_W(c, 8, ARC_DU_R(c, 0));
  /* d5aa4: tbnz x8, #0x3f, #0xd5ab0 */
  if (((ARC_X_R(c, 8)) >> 63 & 1) != 0) goto L_d5ab0;
  /* d5aa8: mov x9, x8 */
  ARC_X_W(c, 9, ARC_X_R(c, 8));
  /* d5aac: b #0xd5ac8 */
  goto L_d5ac8;
L_d5ab0:;
  /* d5ab0: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* d5ab4: b.eq #0xd5c40 */
  if (ARC_COND(c, 0)) goto L_d5c40;
  /* d5ab8: fabs d0, d0 */
  arc_d_w(c, 0, (double)(fabs(ARC_D_R(c, 0))));
  /* d5abc: mov w9, #0x2d */
  ARC_W_W(c, 9, UINT64_C(45));
  /* d5ac0: strb w9, [x0], #1 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* d5ac4: fmov x9, d0 */
  ARC_X_W(c, 9, ARC_DU_R(c, 0));
L_d5ac8:;
  /* d5ac8: mov x10, #0x7ff0000000000000 */
  ARC_X_W(c, 10, UINT64_C(9218868437227405312));
  /* d5acc: bics xzr, x10, x9 */
  { uint64_t _r = (uint64_t)(ARC_X_R(c, 10) & (~ARC_X_R(c, 9)));
    arc_flags_logical64(c, _r);
    ARC_X_W(c, 31, _r); }
  /* d5ad0: b.ne #0xd5afc */
  if (ARC_COND(c, 1)) goto L_d5afc;
  /* d5ad4: ands x10, x9, #0xfffffffffffff */
  { uint64_t _r = (uint64_t)(ARC_X_R(c, 9) & UINT64_C(4503599627370495));
    arc_flags_logical64(c, _r);
    ARC_X_W(c, 10, _r); }
  /* d5ad8: b.eq #0xd5c30 */
  if (ARC_COND(c, 0)) goto L_d5c30;
  /* d5adc: tbz x8, #0x3f, #0xd5c4c */
  if (((ARC_X_R(c, 8)) >> 63 & 1) == 0) goto L_d5c4c;
  /* d5ae0: mov x8, #0x8000000000000 */
  ARC_X_W(c, 8, UINT64_C(2251799813685248));
  /* d5ae4: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* d5ae8: b.ne #0xd5c4c */
  if (ARC_COND(c, 1)) goto L_d5c4c;
  /* d5aec: adrp x8, #0x4f000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(323584)));
  /* d5af0: add x8, x8, #0xa91 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2705)));
  /* d5af4: mov w19, #8 */
  ARC_W_W(c, 19, UINT64_C(8));
  /* d5af8: b #0xd5c70 */
  goto L_d5c70;
L_d5afc:;
  /* d5afc: cmp w2, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 2), UINT64_C(4));
  /* d5b00: b.ne #0xd5c20 */
  if (ARC_COND(c, 1)) goto L_d5c20;
  /* d5b04: fmov x8, d0 */
  ARC_X_W(c, 8, ARC_DU_R(c, 0));
  /* d5b08: cbz x8, #0xd5cbc */
  if ((ARC_X_R(c, 8)) == 0) goto L_d5cbc;
  /* d5b0c: lsr x11, x8, #0x34 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(52)) & 63)));
  /* d5b10: mov w10, #-0x3fe */
  ARC_W_W(c, 10, UINT64_C(18446744073709550594));
  /* d5b14: sub w9, w11, #0x3ff */
  ARC_W_W(c, 9, (ARC_W_R(c, 11) - UINT64_C(1023)));
  /* d5b18: cmp x11, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(0));
  /* d5b1c: csel w10, w10, w9, eq */
  ARC_W_W(c, 10, (ARC_COND(c, 0) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* d5b20: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* d5b24: b.eq #0xd5c7c */
  if (ARC_COND(c, 0)) goto L_d5c7c;
  /* d5b28: cmp x11, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(0));
  /* d5b2c: mov w11, #0x30 */
  ARC_W_W(c, 11, UINT64_C(48));
  /* d5b30: and x12, x8, #0xfffffffffffff */
  ARC_X_W(c, 12, (ARC_X_R(c, 8) & UINT64_C(4503599627370495)));
  /* d5b34: cinc w8, w11, ne */
  ARC_W_W(c, 8, (ARC_COND(c, 1) ? (ARC_W_R(c, 11)) + 1 : (ARC_W_R(c, 11))));
  /* d5b38: mov x11, x0 */
  ARC_X_W(c, 11, ARC_X_R(c, 0));
  /* d5b3c: strb w8, [x11], #1 */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* d5b40: cbz x12, #0xd5b90 */
  if ((ARC_X_R(c, 12)) == 0) goto L_d5b90;
  /* d5b44: cmp x11, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 1));
  /* d5b48: b.eq #0xd5c7c */
  if (ARC_COND(c, 0)) goto L_d5c7c;
  /* d5b4c: mov w14, #0x2e */
  ARC_W_W(c, 14, UINT64_C(46));
  /* d5b50: add x11, x0, #2 */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + UINT64_C(2)));
  /* d5b54: mov w13, #0x30 */
  ARC_W_W(c, 13, UINT64_C(48));
  /* d5b58: mov w8, #0x4b */
  ARC_W_W(c, 8, UINT64_C(75));
  /* d5b5c: strb w14, [x0, #1] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 14));
  /* d5b60: nop  */
  /* nop: no architectural effect here */
  /* d5b64: adr x14, #0x5460d */
  ARC_X_W(c, 14, (arc_image_bases[1] + UINT64_C(345613)));
  /* d5b68: mov x15, #-1 */
  ARC_X_W(c, 15, UINT64_C(18446744073709551615));
L_d5b6c:;
  /* d5b6c: cmp x11, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 1));
  /* d5b70: b.eq #0xd5ce0 */
  if (ARC_COND(c, 0)) goto L_d5ce0;
  /* d5b74: lsr x16, x12, x13 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 12)) >> ((ARC_X_R(c, 13)) & 63)));
  /* d5b78: lsl x17, x15, x13 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 15)) << ((ARC_X_R(c, 13)) & 63)));
  /* d5b7c: sub w13, w13, #4 */
  ARC_W_W(c, 13, (ARC_W_R(c, 13) - UINT64_C(4)));
  /* d5b80: ldrb w16, [x14, w16, uxtw] */
  ARC_W_W(c, 16, arc_ld8((ARC_X_R(c, 14) + ((uint64_t)(uint32_t)(ARC_W_R(c, 16))))));
  /* d5b84: bic x12, x12, x17 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) & (~ARC_X_R(c, 17))));
  /* d5b88: strb w16, [x11], #1 */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 16));
  }
  /* d5b8c: cbnz x12, #0xd5b6c */
  if ((ARC_X_R(c, 12)) != 0) goto L_d5b6c;
L_d5b90:;
  /* d5b90: sub x8, x1, x11 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) - ARC_X_R(c, 11)));
  /* d5b94: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* d5b98: b.lt #0xd5c7c */
  if (ARC_COND(c, 11)) goto L_d5c7c;
  /* d5b9c: mov w8, #0x70 */
  ARC_W_W(c, 8, UINT64_C(112));
  /* d5ba0: add x0, x11, #2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 11) + UINT64_C(2)));
  /* d5ba4: cmp w10, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(0));
  /* d5ba8: strb w8, [x11] */
  arc_st8(ARC_X_R(c, 11), ARC_W_R(c, 8));
  /* d5bac: mov w8, #0x2b */
  ARC_W_W(c, 8, UINT64_C(43));
  /* d5bb0: mov w13, #0x2d */
  ARC_W_W(c, 13, UINT64_C(45));
  /* d5bb4: sub x12, x1, x0 */
  ARC_X_W(c, 12, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* d5bb8: csel w13, w13, w8, lt */
  ARC_W_W(c, 13, (ARC_COND(c, 11) ? (ARC_W_R(c, 13)) : ARC_W_R(c, 8)));
  /* d5bbc: csneg w8, w9, w10, ge */
  ARC_W_W(c, 8, (ARC_COND(c, 10) ? (ARC_W_R(c, 9)) : ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 10)))));
  /* d5bc0: cmp x12, #9 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(9));
  /* d5bc4: strb w13, [x11, #1] */
  arc_st8((ARC_X_R(c, 11) + INT64_C(1)), ARC_W_R(c, 13));
  /* d5bc8: b.gt #0xd5c0c */
  if (ARC_COND(c, 12)) goto L_d5c0c;
  /* d5bcc: orr w9, w8, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) | UINT64_C(1)));
  /* d5bd0: mov w10, #0x20 */
  ARC_W_W(c, 10, UINT64_C(32));
  /* d5bd4: clz w9, w9 */
  ARC_W_W(c, 9, arc_clz32(ARC_W_R(c, 9)));
  /* d5bd8: sub w9, w10, w9 */
  ARC_W_W(c, 9, (ARC_W_R(c, 10) - ARC_W_R(c, 9)));
  /* d5bdc: mov w10, #0x4d1 */
  ARC_W_W(c, 10, UINT64_C(1233));
  /* d5be0: mul w9, w9, w10 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) * (uint32_t)(ARC_W_R(c, 10))));
  /* d5be4: nop  */
  /* nop: no architectural effect here */
  /* d5be8: adr x10, #0x54634 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(345652)));
  /* d5bec: lsr w9, w9, #0xc */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(12)) & 31)));
  /* d5bf0: ldr w10, [x10, w9, uxtw #2] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 10) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 9)))) << 2))));
  /* d5bf4: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* d5bf8: cset w10, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? 1 : 0));
  /* d5bfc: sub w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) - ARC_W_R(c, 10)));
  /* d5c00: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* d5c04: cmp x12, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 9));
  /* d5c08: b.lt #0xd5c7c */
  if (ARC_COND(c, 11)) goto L_d5c7c;
L_d5c0c:;
  /* d5c0c: mov w1, w8 */
  ARC_W_W(c, 1, ARC_W_R(c, 8));
  /* d5c10: bl #0xd4eb8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(875540));
  fn1_d4eb8(c);
  /* d5c14: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* d5c18: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* d5c1c: b #0xd5ca8 */
  goto L_d5ca8;
L_d5c20:;
  /* d5c20: bl #0xddc14 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(875556));
  fn1_ddc14(c);
  /* d5c24: and x9, x1, #0xffffffff00000000 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) & UINT64_C(18446744069414584320)));
  /* d5c28: mov w8, w1 */
  ARC_W_W(c, 8, ARC_W_R(c, 1));
  /* d5c2c: b #0xd5ca8 */
  goto L_d5ca8;
L_d5c30:;
  /* d5c30: nop  */
  /* nop: no architectural effect here */
  /* d5c34: adr x8, #0x50992 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(330130)));
  /* d5c38: mov w19, #3 */
  ARC_W_W(c, 19, UINT64_C(3));
  /* d5c3c: b #0xd5c70 */
  goto L_d5c70;
L_d5c40:;
  /* d5c40: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* d5c44: mov w8, #0x4b */
  ARC_W_W(c, 8, UINT64_C(75));
  /* d5c48: b #0xd5ca8 */
  goto L_d5ca8;
L_d5c4c:;
  /* d5c4c: adrp x8, #0x51000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(331776)));
  /* d5c50: add x8, x8, #0xea3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3747)));
  /* d5c54: adrp x10, #0x50000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(327680)));
  /* d5c58: add x10, x10, #0xf0d */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(3853)));
  /* d5c5c: tst x9, #0x8000000000000 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(2251799813685248)));
  /* d5c60: mov w9, #3 */
  ARC_W_W(c, 9, UINT64_C(3));
  /* d5c64: mov w11, #9 */
  ARC_W_W(c, 11, UINT64_C(9));
  /* d5c68: csel x8, x10, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* d5c6c: csel x19, x11, x9, eq */
  ARC_X_W(c, 19, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 9)));
L_d5c70:;
  /* d5c70: sub x9, x1, x0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* d5c74: cmp x9, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 19));
  /* d5c78: b.ge #0xd5c8c */
  if (ARC_COND(c, 10)) goto L_d5c8c;
L_d5c7c:;
  /* d5c7c: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* d5c80: mov w8, #0x4b */
  ARC_W_W(c, 8, UINT64_C(75));
  /* d5c84: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* d5c88: b #0xd5ca8 */
  goto L_d5ca8;
L_d5c8c:;
  /* d5c8c: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* d5c90: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* d5c94: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* d5c98: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(875676));
  fn1_1449d8(c);
  /* d5c9c: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* d5ca0: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* d5ca4: add x0, x20, x19 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + ARC_X_R(c, 19)));
L_d5ca8:;
  /* d5ca8: orr x1, x9, x8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) | ARC_X_R(c, 8)));
  /* d5cac: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d5cb0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d5cb4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d5cb8: ret  */
  return;
L_d5cbc:;
  /* d5cbc: sub x8, x1, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* d5cc0: cmp x8, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(4));
  /* d5cc4: b.lt #0xd5c7c */
  if (ARC_COND(c, 11)) goto L_d5c7c;
  /* d5cc8: mov w10, #0x7030 */
  ARC_W_W(c, 10, UINT64_C(28720));
  /* d5ccc: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* d5cd0: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* d5cd4: movk w10, #0x302b, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(808124416)));
  /* d5cd8: str w10, [x0], #4 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 10));
  }
  /* d5cdc: b #0xd5ca8 */
  goto L_d5ca8;
L_d5ce0:;
  /* d5ce0: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* d5ce4: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* d5ce8: b #0xd5ca8 */
  goto L_d5ca8;
  /* d5cec: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(875760));
  fn1_a1454(c);
}

void fn1_d9e7c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038820476));
  /* d9e7c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d9e80: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* d9e84: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d9e88: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* d9e8c: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d9e90: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* d9e94: ldr x8, [x0, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* d9e98: ldr q0, [x0, #0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(32))), arc_ld64((ARC_X_R(c, 0) + INT64_C(32)) + 8));
  /* d9e9c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d9ea0: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* d9ea4: ldp x11, x10, [x8, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(8));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* d9ea8: str q0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* d9eac: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* d9eb0: lsr x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* d9eb4: csinc x8, x10, x8, ne */
  ARC_X_W(c, 8, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 8)) + 1)));
  /* d9eb8: ldrb w10, [x0, #0x30] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 0) + INT64_C(48))));
  /* d9ebc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* d9ec0: csel x9, x9, x11, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 11)));
  /* d9ec4: stp x8, x9, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* d9ec8: strb w10, [sp, #0x20] */
  arc_st8(((c)->sp + INT64_C(32)), ARC_W_R(c, 10));
  /* d9ecc: bl #0xda370 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(892624));
  fn1_da370(c);
  /* d9ed0: ldrb w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(32))));
  /* d9ed4: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* d9ed8: ldr q0, [sp, #0x10] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(16))), arc_ld64(((c)->sp + INT64_C(16)) + 8));
  /* d9edc: nop  */
  /* nop: no architectural effect here */
  /* d9ee0: adr x1, #0x5018e */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(328078)));
  /* d9ee4: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* d9ee8: strb w8, [x19, #0x30] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(48)), ARC_W_R(c, 8));
  /* d9eec: lsl w8, w9, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 9)) << ((ARC_W_R(c, 8)) & 31)));
  /* d9ef0: mov w9, #0x62 */
  ARC_W_W(c, 9, UINT64_C(98));
  /* d9ef4: str q0, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)) + 8, (c)->q[0].u64[1]);
  /* d9ef8: tst w8, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 9)));
  /* d9efc: b.ne #0xd9f7c */
  if (ARC_COND(c, 1)) goto L_d9f7c;
  /* d9f00: mov w9, #0x14 */
  ARC_W_W(c, 9, UINT64_C(20));
  /* d9f04: tst w8, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 9)));
  /* d9f08: b.eq #0xd9f58 */
  if (ARC_COND(c, 0)) goto L_d9f58;
  /* d9f0c: ldr x20, [sp, #0x18] */
  ARC_X_W(c, 20, arc_ld64(((c)->sp + INT64_C(24))));
  /* d9f10: cmn x20, #8 */
  (void)arc_add64(c, ARC_X_R(c, 20), UINT64_C(8), 0);
  /* d9f14: b.hs #0xd9fe4 */
  if (ARC_COND(c, 2)) goto L_d9fe4;
  /* d9f18: ldr x1, [sp, #0x10] */
  ARC_X_W(c, 1, arc_ld64(((c)->sp + INT64_C(16))));
  /* d9f1c: cmp x20, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(23));
  /* d9f20: b.lo #0xd9f7c */
  if (ARC_COND(c, 3)) goto L_d9f7c;
  /* d9f24: orr x8, x20, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) | UINT64_C(7)));
  /* d9f28: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* d9f2c: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* d9f30: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* d9f34: csinc x22, x9, x8, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* d9f38: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* d9f3c: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(892736));
  fn1_1428f0(c);
  /* d9f40: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* d9f44: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* d9f48: orr x8, x22, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) | UINT64_C(1)));
  /* d9f4c: stp x20, x0, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* d9f50: stur x8, [x29, #-0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-24)), ARC_X_R(c, 8));
  /* d9f54: b #0xd9f90 */
  goto L_d9f90;
L_d9f58:;
  /* d9f58: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* d9f5c: nop  */
  /* nop: no architectural effect here */
  /* d9f60: adr x9, #0x5004e */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(327758)));
  /* d9f64: nop  */
  /* nop: no architectural effect here */
  /* d9f68: adr x10, #0x501db */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(328155)));
  /* d9f6c: mov w20, #1 */
  ARC_W_W(c, 20, UINT64_C(1));
  /* d9f70: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* d9f74: cmp w8, #0x5c */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(92));
  /* d9f78: csel x1, x10, x9, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
L_d9f7c:;
  /* d9f7c: lsl w8, w20, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 20)) << ((UINT64_C(1)) & 31)));
  /* d9f80: sub x9, x29, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* d9f84: orr x21, x9, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* d9f88: sturb w8, [x29, #-0x18] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-24)), ARC_W_R(c, 8));
  /* d9f8c: cbz x20, #0xd9f9c */
  if ((ARC_X_R(c, 20)) == 0) goto L_d9f9c;
L_d9f90:;
  /* d9f90: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* d9f94: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* d9f98: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(892828));
  fn1_1449f0(c);
L_d9f9c:;
  /* d9f9c: strb wzr, [x21, x20] */
  arc_st8((ARC_X_R(c, 21) + ARC_X_R(c, 20)), ARC_W_R(c, 31));
  /* d9fa0: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* d9fa4: tbz w8, #0, #0xd9fb8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_d9fb8;
  /* d9fa8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* d9fac: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* d9fb0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* d9fb4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(892856));
  fn1_142608(c);
L_d9fb8:;
  /* d9fb8: ldur q0, [x29, #-0x18] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-24))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-24)) + 8));
  /* d9fbc: ldur x8, [x29, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* d9fc0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d9fc4: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* d9fc8: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* d9fcc: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d9fd0: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* d9fd4: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d9fd8: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* d9fdc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d9fe0: ret  */
  return;
L_d9fe4:;
  /* d9fe4: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(892904));
  fn1_d7d54(c);
}

void fn1_dc26c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038829676));
  /* dc26c: bti c */
  /* bti: no architectural effect here */
  /* dc270: cmp x2, #0x11 */
  (void)arc_sub64(c, ARC_X_R(c, 2), UINT64_C(17));
  /* dc274: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* dc278: b.lo #0xdc284 */
  if (ARC_COND(c, 3)) goto L_dc284;
  /* dc27c: mov x1, x2 */
  ARC_X_W(c, 1, ARC_X_R(c, 2));
  /* dc280: b #0x142908 */
  fn1_142908(c); return;
L_dc284:;
  /* dc284: b #0x1428f0 */
  fn1_1428f0(c); return;
}

void fn1_e0d08(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038848776));
  /* e0d08: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e0d0c: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e0d10: str x27, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 27));
  /* e0d14: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* e0d18: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e0d1c: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e0d20: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e0d24: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e0d28: mov x8, #-9 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551607));
  /* e0d2c: sub x8, x8, x1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 1)));
  /* e0d30: cmp x2, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 8));
  /* e0d34: b.hi #0xe0e24 */
  if (ARC_COND(c, 8)) goto L_e0e24;
  /* e0d38: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e0d3c: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e0d40: mov x22, x6 */
  ARC_X_W(c, 22, ARC_X_R(c, 6));
  /* e0d44: mov x21, x5 */
  ARC_X_W(c, 21, ARC_X_R(c, 5));
  /* e0d48: mov x23, x4 */
  ARC_X_W(c, 23, ARC_X_R(c, 4));
  /* e0d4c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* e0d50: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e0d54: mov x8, #-0xe */
  ARC_X_W(c, 8, UINT64_C(18446744073709551602));
  /* e0d58: mov x25, x3 */
  ARC_X_W(c, 25, ARC_X_R(c, 3));
  /* e0d5c: movk x8, #0x7fff, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(9223090561878065152)));
  /* e0d60: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e0d64: csinc x24, x9, x0, ne */
  ARC_X_W(c, 24, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 0)) + 1)));
  /* e0d68: cmp x1, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 8));
  /* e0d6c: b.hi #0xe0da0 */
  if (ARC_COND(c, 8)) goto L_e0da0;
  /* e0d70: lsl x8, x20, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 20)) << ((UINT64_C(1)) & 63)));
  /* e0d74: add x9, x2, x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 2) + ARC_X_R(c, 20)));
  /* e0d78: mov w10, #0x1a */
  ARC_W_W(c, 10, UINT64_C(26));
  /* e0d7c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* e0d80: csel x8, x9, x8, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* e0d84: orr x9, x8, #7 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) | UINT64_C(7)));
  /* e0d88: cmp x9, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(23));
  /* e0d8c: csinc x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 9)) + 1)));
  /* e0d90: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* e0d94: mov w8, #0x17 */
  ARC_W_W(c, 8, UINT64_C(23));
  /* e0d98: csel x26, x8, x9, lo */
  ARC_X_W(c, 26, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* e0d9c: b #0xe0da4 */
  goto L_e0da4;
L_e0da0:;
  /* e0da0: mov x26, #-9 */
  ARC_X_W(c, 26, UINT64_C(18446744073709551607));
L_e0da4:;
  /* e0da4: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* e0da8: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(921004));
  fn1_1428f0(c);
  /* e0dac: mov x27, x0 */
  ARC_X_W(c, 27, ARC_X_R(c, 0));
  /* e0db0: cbz x23, #0xe0dc4 */
  if ((ARC_X_R(c, 23)) == 0) goto L_e0dc4;
  /* e0db4: mov x0, x27 */
  ARC_X_W(c, 0, ARC_X_R(c, 27));
  /* e0db8: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* e0dbc: mov x2, x23 */
  ARC_X_W(c, 2, ARC_X_R(c, 23));
  /* e0dc0: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(921028));
  fn1_1449f0(c);
L_e0dc4:;
  /* e0dc4: add x8, x21, x23 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) + ARC_X_R(c, 23)));
  /* e0dc8: subs x2, x25, x8 */
  ARC_X_W(c, 2, arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 8)));
  /* e0dcc: b.eq #0xe0de4 */
  if (ARC_COND(c, 0)) goto L_e0de4;
  /* e0dd0: add x8, x24, x23 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + ARC_X_R(c, 23)));
  /* e0dd4: add x9, x27, x23 */
  ARC_X_W(c, 9, (ARC_X_R(c, 27) + ARC_X_R(c, 23)));
  /* e0dd8: add x0, x9, x22 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) + ARC_X_R(c, 22)));
  /* e0ddc: add x1, x8, x21 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* e0de0: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(921060));
  fn1_1449f0(c);
L_e0de4:;
  /* e0de4: add x1, x20, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(1)));
  /* e0de8: cmp x1, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(23));
  /* e0dec: b.eq #0xe0df8 */
  if (ARC_COND(c, 0)) goto L_e0df8;
  /* e0df0: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* e0df4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(921080));
  fn1_142608(c);
L_e0df8:;
  /* e0df8: orr x8, x26, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 26) | UINT64_C(1)));
  /* e0dfc: str x27, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 27));
  /* e0e00: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* e0e04: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e0e08: ldr x27, [sp, #0x10] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(16))));
  /* e0e0c: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e0e10: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e0e14: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* e0e18: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e0e1c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e0e20: ret  */
  return;
L_e0e24:;
  /* e0e24: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(921128));
  fn1_d7d54(c);
}

void fn1_e38bc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038859964));
  /* e38bc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e38c0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e38c4: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e38c8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e38cc: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e38d0: ldr x9, [x0, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* e38d4: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e38d8: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e38dc: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e38e0: cmn x4, #1 */
  (void)arc_add64(c, ARC_X_R(c, 4), UINT64_C(1), 0);
  /* e38e4: b.eq #0xe3948 */
  if (ARC_COND(c, 0)) goto L_e3948;
  /* e38e8: subs x9, x9, x1 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 1)));
  /* e38ec: b.lo #0xe3948 */
  if (ARC_COND(c, 3)) goto L_e3948;
  /* e38f0: cmp x9, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 2));
  /* e38f4: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* e38f8: csel x20, x9, x2, lo */
  ARC_X_W(c, 20, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 2)));
  /* e38fc: cmp x4, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 4), ARC_X_R(c, 20));
  /* e3900: csel x2, x4, x20, lo */
  ARC_X_W(c, 2, (ARC_COND(c, 3) ? (ARC_X_R(c, 4)) : ARC_X_R(c, 20)));
  /* e3904: cbz x2, #0xe392c */
  if ((ARC_X_R(c, 2)) == 0) goto L_e392c;
  /* e3908: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e390c: add x10, x0, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 0) + UINT64_C(4)));
  /* e3910: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e3914: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e3918: add x0, x8, x1, lsl #2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 1)) << 2)));
  /* e391c: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* e3920: bl #0x142e60 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(932132));
  fn1_142e60(c);
  /* e3924: cbz w0, #0xe392c */
  if ((ARC_W_R(c, 0)) == 0) goto L_e392c;
  /* e3928: b #0xe3938 */
  goto L_e3938;
L_e392c:;
  /* e392c: cmp x20, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 19));
  /* e3930: cset w8, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? 1 : 0));
  /* e3934: csinv w0, w8, wzr, hs */
  ARC_W_W(c, 0, (ARC_COND(c, 2) ? (ARC_W_R(c, 8)) : (~(uint32_t)(ARC_W_R(c, 31)))));
L_e3938:;
  /* e3938: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e393c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e3940: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e3944: ret  */
  return;
L_e3948:;
  /* e3948: bl #0xe1f80 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(932172));
  fn1_e1f80(c);
}

void fn1_e7db8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038877624));
  /* e7db8: bti c */
  /* bti: no architectural effect here */
  /* e7dbc: ldr x9, [x0, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* e7dc0: ldr w1, [x0] */
  ARC_W_W(c, 1, arc_ld32(ARC_X_R(c, 0)));
  /* e7dc4: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* e7dc8: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
  /* e7dcc: ldr x16, [x10, #0x30] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 10) + INT64_C(48))));
  /* e7dd0: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_ea7ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038888428));
  /* ea7ec: bti c */
  /* bti: no architectural effect here */
  /* ea7f0: ldr x0, [x0] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 0)));
  /* ea7f4: cbz x0, #0xea7fc */
  if ((ARC_X_R(c, 0)) == 0) goto L_ea7fc;
  /* ea7f8: b #0x143160 */
  fn1_143160(c); return;
L_ea7fc:;
  /* ea7fc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ea800: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ea804: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ea808: mov w0, #3 */
  ARC_W_W(c, 0, UINT64_C(3));
  /* ea80c: bl #0xe9be0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960528));
  fn1_e9be0(c);
}

void fn1_ebf9c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038894492));
  /* ebf9c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ebfa0: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ebfa4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ebfa8: nop  */
  /* nop: no architectural effect here */
  /* ebfac: adr x8, #0x15d260 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1430112)));
  /* ebfb0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* ebfb4: tbz w8, #0, #0xebfcc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_ebfcc;
L_ebfb8:;
  /* ebfb8: nop  */
  /* nop: no architectural effect here */
  /* ebfbc: adr x0, #0x156d50 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1404240)));
  /* ebfc0: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ebfc4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ebfc8: ret  */
  return;
L_ebfcc:;
  /* ebfcc: nop  */
  /* nop: no architectural effect here */
  /* ebfd0: adr x0, #0x15d260 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1430112)));
  /* ebfd4: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(966616));
  fn1_1424b8(c);
  /* ebfd8: cbz w0, #0xebfb8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_ebfb8;
  /* ebfdc: nop  */
  /* nop: no architectural effect here */
  /* ebfe0: adr x0, #0x15d260 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1430112)));
  /* ebfe4: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(966632));
  fn1_1424d0(c);
  /* ebfe8: b #0xebfb8 */
  goto L_ebfb8;
}

void fn1_ed9e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038901220));
  /* ed9e4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ed9e8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ed9ec: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* ed9f0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ed9f4: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* ed9f8: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* ed9fc: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* eda00: ldr x9, [x1, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* eda04: str xzr, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 31));
  /* eda08: mov x1, x2 */
  ARC_X_W(c, 1, ARC_X_R(c, 2));
  /* eda0c: str x9, [x0, x8] */
  arc_st64((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_X_R(c, 9));
  /* eda10: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* eda14: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* eda18: add x19, x0, x8 */
  ARC_X_W(c, 19, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* eda1c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eda20: bl #0x1433d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(973348));
  fn1_1433d0(c);
  /* eda24: mov w8, #-1 */
  ARC_W_W(c, 8, UINT64_C(18446744073709551615));
  /* eda28: str xzr, [x19, #0x88] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(136)), ARC_X_R(c, 31));
  /* eda2c: str w8, [x19, #0x90] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(144)), ARC_W_R(c, 8));
  /* eda30: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* eda34: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eda38: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eda3c: ret  */
  return;
}

void fn1_f21cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038919628));
  /* f21cc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f21d0: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* f21d4: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f21d8: stp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* f21dc: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* f21e0: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f21e4: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f21e8: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* f21ec: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* f21f0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f21f4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f21f8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f21fc: bl #0x143610 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(991744));
  fn1_143610(c);
  /* f2200: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* f2204: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f2208: b.ne #0xf2348 */
  if (ARC_COND(c, 1)) goto L_f2348;
  /* f220c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f2210: nop  */
  /* nop: no architectural effect here */
  /* f2214: adr x26, #0x15dc40 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f2218: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f221c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f2220: ldr x22, [x8, #0x30] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f2224: cmp x22, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 26));
  /* f2228: stur x22, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 22));
  /* f222c: b.eq #0xf223c */
  if (ARC_COND(c, 0)) goto L_f223c;
  /* f2230: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f2234: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f2238: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(991804));
  fn1_db2e0(c);
L_f223c:;
  /* f223c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f2240: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* f2244: ldr x1, [x1, #0xb50] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2896))));
  /* f2248: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(991820));
  fn1_143748(c);
  /* f224c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* f2250: cmp x22, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 26));
  /* f2254: b.eq #0xf2278 */
  if (ARC_COND(c, 0)) goto L_f2278;
  /* f2258: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f225c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f2260: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(991844));
  fn1_bd950(c);
  /* f2264: cbnz x0, #0xf2278 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f2278;
  /* f2268: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f226c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* f2270: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f2274: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(991864));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f2278:;
  /* f2278: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f227c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f2280: add x22, x19, x8 */
  ARC_X_W(c, 22, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f2284: ldr w3, [x22, #0x90] */
  ARC_W_W(c, 3, arc_ld32((ARC_X_R(c, 22) + INT64_C(144))));
  /* f2288: ldr x23, [x22, #0x28] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 22) + INT64_C(40))));
  /* f228c: cmn w3, #1 */
  (void)arc_add32(c, ARC_W_R(c, 3), UINT64_C(1), 0);
  /* f2290: b.ne #0xf2304 */
  if (ARC_COND(c, 1)) goto L_f2304;
  /* f2294: ldr x24, [x22, #0x30] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 22) + INT64_C(48))));
  /* f2298: cmp x24, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 26));
  /* f229c: stur x24, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 24));
  /* f22a0: b.eq #0xf22b0 */
  if (ARC_COND(c, 0)) goto L_f22b0;
  /* f22a4: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f22a8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f22ac: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(991920));
  fn1_db2e0(c);
L_f22b0:;
  /* f22b0: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f22b4: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* f22b8: ldr x1, [x1, #0xb40] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2880))));
  /* f22bc: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(991936));
  fn1_143748(c);
  /* f22c0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f22c4: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* f22c8: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* f22cc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(991952));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f22d0: mov w25, w0 */
  ARC_W_W(c, 25, ARC_W_R(c, 0));
  /* f22d4: cmp x24, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 26));
  /* f22d8: b.eq #0xf22fc */
  if (ARC_COND(c, 0)) goto L_f22fc;
  /* f22dc: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f22e0: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f22e4: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(991976));
  fn1_bd950(c);
  /* f22e8: cbnz x0, #0xf22fc */
  if ((ARC_X_R(c, 0)) != 0) goto L_f22fc;
  /* f22ec: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f22f0: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f22f4: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f22f8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(991996));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f22fc:;
  /* f22fc: and w3, w25, #0xff */
  ARC_W_W(c, 3, (ARC_W_R(c, 25) & UINT64_C(255)));
  /* f2300: str w3, [x22, #0x90] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(144)), ARC_W_R(c, 3));
L_f2304:;
  /* f2304: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* f2308: ldr x8, [x8, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f230c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f2310: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* f2314: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* f2318: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* f231c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(992032));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f2320: cbnz x0, #0xf2348 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f2348;
  /* f2324: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f2328: mov w10, #5 */
  ARC_W_W(c, 10, UINT64_C(5));
  /* f232c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f2330: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f2334: ldp w9, w11, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* f2338: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* f233c: tst w11, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & ARC_W_R(c, 9)));
  /* f2340: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f2344: b.ne #0xf2374 */
  if (ARC_COND(c, 1)) goto L_f2374;
L_f2348:;
  /* f2348: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f234c: bl #0x143628 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(992080));
  fn1_143628(c);
L_f2350:;
  /* f2350: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f2354: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f2358: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f235c: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* f2360: ldp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* f2364: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f2368: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* f236c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f2370: ret  */
  return;
L_f2374:;
  /* f2374: nop  */
  /* nop: no architectural effect here */
  /* f2378: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f237c: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(992128));
  fn1_ec720(c);
  /* f2380: b #0xf23ac */
  goto L_f23ac;
  /* f2384: cmp x24, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 26));
  /* f2388: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f238c: b.eq #0xf23e0 */
  if (ARC_COND(c, 0)) goto L_f23e0;
  /* f2390: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f2394: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f2398: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(992156));
  fn1_bd950(c);
  /* f239c: cbnz x0, #0xf23e0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f23e0;
  /* f23a0: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f23a4: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f23a8: b #0xf23d8 */
  goto L_f23d8;
L_f23ac:;
  /* f23ac: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f23b0: b #0xf23e0 */
  goto L_f23e0;
  /* f23b4: cmp x22, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 26));
  /* f23b8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f23bc: b.eq #0xf23e0 */
  if (ARC_COND(c, 0)) goto L_f23e0;
  /* f23c0: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f23c4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f23c8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(992204));
  fn1_bd950(c);
  /* f23cc: cbnz x0, #0xf23e0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f23e0;
  /* f23d0: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f23d4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
L_f23d8:;
  /* f23d8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f23dc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(992224));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f23e0:;
  /* f23e0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f23e4: bl #0x143628 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(992232));
  fn1_143628(c);
  /* f23e8: b #0xf23f0 */
  goto L_f23f0;
  /* f23ec: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_f23f0:;
  /* f23f0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f23f4: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(992248));
  fn1_142548(c);
  /* f23f8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f23fc: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f2400: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f2404: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* f2408: ldrb w10, [x8, #0x24] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f240c: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f2410: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f2414: tbnz w10, #0, #0xf2420 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_f2420;
  /* f2418: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(992284));
  fn1_142980(c);
  /* f241c: b #0xf2350 */
  goto L_f2350;
L_f2420:;
  /* f2420: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(992292));
  fn1_1429b0(c);
  /* f2424: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f2428: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(992300));
  fn1_142980(c);
  /* f242c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f2430: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(992308));
  fn1_9cc20(c);
  /* f2434: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(992312));
  fn1_a1454(c);
}

void fn1_f4420(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038928416));
  /* f4420: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f4424: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f4428: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* f442c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f4430: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* f4434: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* f4438: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f443c: ldr x9, [x1, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* f4440: str xzr, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 31));
  /* f4444: mov x1, x2 */
  ARC_X_W(c, 1, ARC_X_R(c, 2));
  /* f4448: str x9, [x0, x8] */
  arc_st64((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_X_R(c, 9));
  /* f444c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f4450: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f4454: add x19, x0, x8 */
  ARC_X_W(c, 19, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* f4458: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f445c: bl #0x1433d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1000544));
  fn1_1433d0(c);
  /* f4460: mov w8, #-1 */
  ARC_W_W(c, 8, UINT64_C(18446744073709551615));
  /* f4464: str xzr, [x19, #0x88] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(136)), ARC_X_R(c, 31));
  /* f4468: str w8, [x19, #0x90] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(144)), ARC_W_R(c, 8));
  /* f446c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f4470: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f4474: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f4478: ret  */
  return;
}

void fn1_f8c24(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038946852));
  /* f8c24: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f8c28: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* f8c2c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f8c30: str x25, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 25));
  /* f8c34: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* f8c38: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f8c3c: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f8c40: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f8c44: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* f8c48: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f8c4c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f8c50: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f8c54: bl #0x143688 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1018968));
  fn1_143688(c);
  /* f8c58: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* f8c5c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f8c60: b.ne #0xf8da8 */
  if (ARC_COND(c, 1)) goto L_f8da8;
  /* f8c64: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f8c68: nop  */
  /* nop: no architectural effect here */
  /* f8c6c: adr x25, #0x15dc40 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f8c70: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f8c74: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f8c78: ldr x22, [x8, #0x30] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f8c7c: cmp x22, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 25));
  /* f8c80: str x22, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 22));
  /* f8c84: b.eq #0xf8c94 */
  if (ARC_COND(c, 0)) goto L_f8c94;
  /* f8c88: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f8c8c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f8c90: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1019028));
  fn1_db2e0(c);
L_f8c94:;
  /* f8c94: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f8c98: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* f8c9c: ldr x1, [x1, #0xb68] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2920))));
  /* f8ca0: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1019044));
  fn1_143748(c);
  /* f8ca4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* f8ca8: cmp x22, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 25));
  /* f8cac: b.eq #0xf8cd0 */
  if (ARC_COND(c, 0)) goto L_f8cd0;
  /* f8cb0: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f8cb4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f8cb8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1019068));
  fn1_bd950(c);
  /* f8cbc: cbnz x0, #0xf8cd0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f8cd0;
  /* f8cc0: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f8cc4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* f8cc8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f8ccc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1019088));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f8cd0:;
  /* f8cd0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f8cd4: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f8cd8: add x22, x19, x8 */
  ARC_X_W(c, 22, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f8cdc: ldr w3, [x22, #0x90] */
  ARC_W_W(c, 3, arc_ld32((ARC_X_R(c, 22) + INT64_C(144))));
  /* f8ce0: ldr x23, [x22, #0x28] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 22) + INT64_C(40))));
  /* f8ce4: cmn w3, #1 */
  (void)arc_add32(c, ARC_W_R(c, 3), UINT64_C(1), 0);
  /* f8ce8: b.ne #0xf8d64 */
  if (ARC_COND(c, 1)) goto L_f8d64;
  /* f8cec: ldr x24, [x22, #0x30] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 22) + INT64_C(48))));
  /* f8cf0: cmp x24, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 25));
  /* f8cf4: str x24, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 24));
  /* f8cf8: b.eq #0xf8d08 */
  if (ARC_COND(c, 0)) goto L_f8d08;
  /* f8cfc: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f8d00: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f8d04: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1019144));
  fn1_db2e0(c);
L_f8d08:;
  /* f8d08: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f8d0c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* f8d10: ldr x1, [x1, #0xb58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2904))));
  /* f8d14: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1019160));
  fn1_143748(c);
  /* f8d18: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f8d1c: ldr x8, [x8, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* f8d20: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* f8d24: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1019176));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f8d28: mov w3, w0 */
  ARC_W_W(c, 3, ARC_W_R(c, 0));
  /* f8d2c: cmp x24, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 25));
  /* f8d30: b.eq #0xf8d60 */
  if (ARC_COND(c, 0)) goto L_f8d60;
  /* f8d34: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f8d38: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f8d3c: mov w25, w3 */
  ARC_W_W(c, 25, ARC_W_R(c, 3));
  /* f8d40: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1019204));
  fn1_bd950(c);
  /* f8d44: mov w3, w25 */
  ARC_W_W(c, 3, ARC_W_R(c, 25));
  /* f8d48: cbnz x0, #0xf8d60 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f8d60;
  /* f8d4c: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f8d50: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f8d54: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f8d58: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1019228));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f8d5c: mov w3, w25 */
  ARC_W_W(c, 3, ARC_W_R(c, 25));
L_f8d60:;
  /* f8d60: str w3, [x22, #0x90] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(144)), ARC_W_R(c, 3));
L_f8d64:;
  /* f8d64: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* f8d68: ldr x8, [x8, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f8d6c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f8d70: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* f8d74: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* f8d78: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* f8d7c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1019264));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f8d80: cbnz x0, #0xf8da8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f8da8;
  /* f8d84: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f8d88: mov w10, #5 */
  ARC_W_W(c, 10, UINT64_C(5));
  /* f8d8c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f8d90: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f8d94: ldp w9, w11, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* f8d98: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* f8d9c: tst w11, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & ARC_W_R(c, 9)));
  /* f8da0: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f8da4: b.ne #0xf8dd4 */
  if (ARC_COND(c, 1)) goto L_f8dd4;
L_f8da8:;
  /* f8da8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f8dac: bl #0x1436a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1019312));
  fn1_1436a0(c);
L_f8db0:;
  /* f8db0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f8db4: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f8db8: ldr x25, [sp, #0x20] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(32))));
  /* f8dbc: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f8dc0: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* f8dc4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f8dc8: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* f8dcc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f8dd0: ret  */
  return;
L_f8dd4:;
  /* f8dd4: nop  */
  /* nop: no architectural effect here */
  /* f8dd8: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f8ddc: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1019360));
  fn1_ec720(c);
  /* f8de0: b #0xf8e0c */
  goto L_f8e0c;
  /* f8de4: cmp x24, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 25));
  /* f8de8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f8dec: b.eq #0xf8e40 */
  if (ARC_COND(c, 0)) goto L_f8e40;
  /* f8df0: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f8df4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f8df8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1019388));
  fn1_bd950(c);
  /* f8dfc: cbnz x0, #0xf8e40 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f8e40;
  /* f8e00: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f8e04: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f8e08: b #0xf8e38 */
  goto L_f8e38;
L_f8e0c:;
  /* f8e0c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f8e10: b #0xf8e40 */
  goto L_f8e40;
  /* f8e14: cmp x22, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 25));
  /* f8e18: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f8e1c: b.eq #0xf8e40 */
  if (ARC_COND(c, 0)) goto L_f8e40;
  /* f8e20: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f8e24: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f8e28: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1019436));
  fn1_bd950(c);
  /* f8e2c: cbnz x0, #0xf8e40 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f8e40;
  /* f8e30: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f8e34: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
L_f8e38:;
  /* f8e38: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f8e3c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1019456));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f8e40:;
  /* f8e40: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f8e44: bl #0x1436a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1019464));
  fn1_1436a0(c);
  /* f8e48: b #0xf8e50 */
  goto L_f8e50;
  /* f8e4c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_f8e50:;
  /* f8e50: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f8e54: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1019480));
  fn1_142548(c);
  /* f8e58: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f8e5c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f8e60: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f8e64: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* f8e68: ldrb w10, [x8, #0x24] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f8e6c: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f8e70: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f8e74: tbnz w10, #0, #0xf8e80 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_f8e80;
  /* f8e78: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1019516));
  fn1_142980(c);
  /* f8e7c: b #0xf8db0 */
  goto L_f8db0;
L_f8e80:;
  /* f8e80: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1019524));
  fn1_1429b0(c);
  /* f8e84: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f8e88: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1019532));
  fn1_142980(c);
  /* f8e8c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f8e90: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1019540));
  fn1_9cc20(c);
  /* f8e94: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1019544));
  fn1_a1454(c);
}

void fn1_fd72c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038966060));
  /* fd72c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fd730: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fd734: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* fd738: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fd73c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fd740: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fd744: ldr x8, [x8, #0xb10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2832))));
  /* fd748: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* fd74c: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* fd750: add x10, x8, #0x18 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* fd754: add x8, x8, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* fd758: add x19, x0, x9 */
  ARC_X_W(c, 19, (ARC_X_R(c, 0) + ARC_X_R(c, 9)));
  /* fd75c: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fd760: ldr x9, [x9, #0xae0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2784))));
  /* fd764: str x10, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 10));
  /* fd768: mov x20, x19 */
  ARC_X_W(c, 20, ARC_X_R(c, 19));
  /* fd76c: ldrb w10, [x19, #0x50] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 19) + INT64_C(80))));
  /* fd770: str x8, [x20, #0x78]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(120));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(120));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* fd774: add x8, x9, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* fd778: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* fd77c: tbz w10, #0, #0xfd790 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) == 0) goto L_fd790;
  /* fd780: ldr x8, [x19, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(80))));
  /* fd784: ldr x0, [x19, #0x60] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(96))));
  /* fd788: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* fd78c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1038224));
  fn1_142608(c);
L_fd790:;
  /* fd790: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fd794: nop  */
  /* nop: no architectural effect here */
  /* fd798: adr x9, #0x15dc40 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1432640)));
  /* fd79c: ldr x8, [x8, #0xaa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2728))));
  /* fd7a0: ldr x21, [x19, #0x18] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* fd7a4: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* fd7a8: cmp x21, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 9));
  /* fd7ac: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* fd7b0: b.eq #0xfd7d4 */
  if (ARC_COND(c, 0)) goto L_fd7d4;
  /* fd7b4: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* fd7b8: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fd7bc: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1038272));
  fn1_bd950(c);
  /* fd7c0: cbnz x0, #0xfd7d4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_fd7d4;
  /* fd7c4: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* fd7c8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* fd7cc: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fd7d0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1038292));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fd7d4:;
  /* fd7d4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fd7d8: bl #0x1433b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1038300));
  fn1_1433b8(c);
  /* fd7dc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fd7e0: mov w1, #0x110 */
  ARC_W_W(c, 1, UINT64_C(272));
  /* fd7e4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fd7e8: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* fd7ec: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fd7f0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fd7f4: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_104cd8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038996184));
  /* 104cd8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 104cdc: sub sp, sp, #0x1e0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(480)));
  /* 104ce0: stp x29, x30, [sp, #0x180] */
  { const uint64_t _pa = ((c)->sp + INT64_C(384));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 104ce4: stp x28, x27, [sp, #0x190] */
  { const uint64_t _pa = ((c)->sp + INT64_C(400));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 104ce8: stp x26, x25, [sp, #0x1a0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(416));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 104cec: stp x24, x23, [sp, #0x1b0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(432));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 104cf0: stp x22, x21, [sp, #0x1c0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(448));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 104cf4: stp x20, x19, [sp, #0x1d0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(464));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 104cf8: add x29, sp, #0x180 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(384)));
  /* 104cfc: ldr w8, [x3, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 3) + INT64_C(8))));
  /* 104d00: mov w9, #0x4a */
  ARC_W_W(c, 9, UINT64_C(74));
  /* 104d04: mov x24, x3 */
  ARC_X_W(c, 24, ARC_X_R(c, 3));
  /* 104d08: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 104d0c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 104d10: sub x26, x29, #0xb0 */
  ARC_X_W(c, 26, (ARC_X_R(c, 29) - UINT64_C(176)));
  /* 104d14: ands w8, w8, w9 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 9));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 8, _r); }
  /* 104d18: str x5, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 5));
  /* 104d1c: b.eq #0x104d40 */
  if (ARC_COND(c, 0)) goto L_104d40;
  /* 104d20: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* 104d24: b.eq #0x104d38 */
  if (ARC_COND(c, 0)) goto L_104d38;
  /* 104d28: cmp w8, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(8));
  /* 104d2c: b.ne #0x104d48 */
  if (ARC_COND(c, 1)) goto L_104d48;
  /* 104d30: mov w23, #0x10 */
  ARC_W_W(c, 23, UINT64_C(16));
  /* 104d34: b #0x104d4c */
  goto L_104d4c;
L_104d38:;
  /* 104d38: mov w23, #8 */
  ARC_W_W(c, 23, UINT64_C(8));
  /* 104d3c: b #0x104d4c */
  goto L_104d4c;
L_104d40:;
  /* 104d40: mov w23, wzr */
  ARC_W_W(c, 23, ARC_W_R(c, 31));
  /* 104d44: b #0x104d4c */
  goto L_104d4c;
L_104d48:;
  /* 104d48: mov w23, #0xa */
  ARC_W_W(c, 23, UINT64_C(10));
L_104d4c:;
  /* 104d4c: sub x1, x29, #0x74 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(116)));
  /* 104d50: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 104d54: str x4, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 4));
  /* 104d58: sub x27, x29, #0x74 */
  ARC_X_W(c, 27, (ARC_X_R(c, 29) - UINT64_C(116)));
  /* 104d5c: bl #0x136534 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1068384));
  fn1_136534(c);
  /* 104d60: sub x8, x29, #0x90 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(144)));
  /* 104d64: sub x1, x29, #0xc */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(12)));
  /* 104d68: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 104d6c: bl #0x1366c4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1068400));
  fn1_1366c4(c);
  /* 104d70: stp xzr, xzr, [x26, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 26) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 104d74: str xzr, [x26, #0x18] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(24)), ARC_X_R(c, 31));
  /* 104d78: sub x0, x29, #0xa8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(168)));
  /* 104d7c: mov w1, #0x16 */
  ARC_W_W(c, 1, UINT64_C(22));
  /* 104d80: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 104d84: sub x20, x29, #0xa8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 29) - UINT64_C(168)));
  /* 104d88: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1068428));
  fn1_142d10(c);
  /* 104d8c: ldurb w8, [x29, #-0xa8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-168))));
  /* 104d90: ldr x9, [x26, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 104d94: add x10, sp, #0x30 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(48)));
  /* 104d98: orr x28, x20, #1 */
  ARC_X_W(c, 28, (ARC_X_R(c, 20) | UINT64_C(1)));
  /* 104d9c: add x22, sp, #0x28 */
  ARC_X_W(c, 22, ((c)->sp + UINT64_C(40)));
  /* 104da0: str x10, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 10));
  /* 104da4: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 104da8: str wzr, [sp, #0x24] */
  arc_st32(((c)->sp + INT64_C(36)), ARC_W_R(c, 31));
  /* 104dac: csinc x24, x9, x20, ne */
  ARC_X_W(c, 24, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 20)) + 1)));
  /* 104db0: mov w20, #0x16 */
  ARC_W_W(c, 20, UINT64_C(22));
  /* 104db4: str x24, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 24));
  /* 104db8: b #0x104dc4 */
  goto L_104dc4;
L_104dbc:;
  /* 104dbc: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 104dc0: str x8, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 8));
L_104dc4:;
  /* 104dc4: cbz x19, #0x104ddc */
  if ((ARC_X_R(c, 19)) == 0) goto L_104ddc;
  /* 104dc8: ldp x8, x9, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 104dcc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 104dd0: b.eq #0x104de8 */
  if (ARC_COND(c, 0)) goto L_104de8;
  /* 104dd4: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 104dd8: b #0x104df8 */
  goto L_104df8;
L_104ddc:;
  /* 104ddc: cbz x21, #0x104f94 */
  if ((ARC_X_R(c, 21)) == 0) goto L_104f94;
  /* 104de0: mov w25, #1 */
  ARC_W_W(c, 25, UINT64_C(1));
  /* 104de4: b #0x104e0c */
  goto L_104e0c;
L_104de8:;
  /* 104de8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 104dec: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 104df0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 104df4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1068536));
  arc_dispatch(c, ARC_X_R(c, 8));
L_104df8:;
  /* 104df8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 104dfc: cset w25, eq */
  ARC_W_W(c, 25, (ARC_COND(c, 0) ? 1 : 0));
  /* 104e00: csel x8, xzr, x19, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 19)));
  /* 104e04: cbz x21, #0x104e48 */
  if ((ARC_X_R(c, 21)) == 0) goto L_104e48;
  /* 104e08: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
L_104e0c:;
  /* 104e0c: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 104e10: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 104e14: b.eq #0x104e20 */
  if (ARC_COND(c, 0)) goto L_104e20;
  /* 104e18: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 104e1c: b #0x104e30 */
  goto L_104e30;
L_104e20:;
  /* 104e20: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 104e24: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 104e28: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 104e2c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1068592));
  arc_dispatch(c, ARC_X_R(c, 8));
L_104e30:;
  /* 104e30: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 104e34: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 104e38: csel x21, xzr, x21, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 21)));
  /* 104e3c: cmp w25, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 25), ARC_W_R(c, 8));
  /* 104e40: b.ne #0x104e50 */
  if (ARC_COND(c, 1)) goto L_104e50;
  /* 104e44: b #0x104fa0 */
  goto L_104fa0;
L_104e48:;
  /* 104e48: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 104e4c: b.eq #0x104f9c */
  if (ARC_COND(c, 0)) goto L_104f9c;
L_104e50:;
  /* 104e50: ldurb w8, [x29, #-0xa8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-168))));
  /* 104e54: ldr x9, [x26, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(16))));
  /* 104e58: ldr x11, [x26] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 26)));
  /* 104e5c: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 104e60: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 104e64: csel x25, x10, x9, eq */
  ARC_X_W(c, 25, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 104e68: add x9, x24, x25 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + ARC_X_R(c, 25)));
  /* 104e6c: cmp x11, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 9));
  /* 104e70: b.ne #0x104f28 */
  if (ARC_COND(c, 1)) goto L_104f28;
  /* 104e74: cmp x25, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 25), UINT64_C(1));
  /* 104e78: b.lt #0x104e90 */
  if (ARC_COND(c, 11)) goto L_104e90;
  /* 104e7c: sub x0, x29, #0xa8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(168)));
  /* 104e80: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 104e84: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 104e88: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1068684));
  fn1_142d10(c);
  /* 104e8c: b #0x104eb4 */
  goto L_104eb4;
L_104e90:;
  /* 104e90: lsl x9, x25, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 25)) << ((UINT64_C(1)) & 63)));
  /* 104e94: tbnz w8, #0, #0x104ea8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_104ea8;
  /* 104e98: lsl w8, w9, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 9)) << ((UINT64_C(1)) & 31)));
  /* 104e9c: sturb w8, [x29, #-0xa8] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-168)), ARC_W_R(c, 8));
  /* 104ea0: mov x8, x28 */
  ARC_X_W(c, 8, ARC_X_R(c, 28));
  /* 104ea4: b #0x104eb0 */
  goto L_104eb0;
L_104ea8:;
  /* 104ea8: ldr x8, [x26, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 104eac: str x9, [x26, #0x10] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(16)), ARC_X_R(c, 9));
L_104eb0:;
  /* 104eb0: strb wzr, [x8, x9] */
  arc_st8((ARC_X_R(c, 8) + ARC_X_R(c, 9)), ARC_W_R(c, 31));
L_104eb4:;
  /* 104eb4: ldp x9, x10, [x26, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 26) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 104eb8: ldurb w8, [x29, #-0xa8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-168))));
  /* 104ebc: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 104ec0: and x11, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 104ec4: ubfx x12, x9, #1, #7 */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 9)) >> 1) & UINT64_C(127)));
  /* 104ec8: sub x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* 104ecc: csel x8, x20, x11, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 20)) : ARC_X_R(c, 11)));
  /* 104ed0: tst x9, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(1)));
  /* 104ed4: csel x10, x12, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* 104ed8: subs x1, x8, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10)));
  /* 104edc: b.ls #0x104ef0 */
  if (ARC_COND(c, 9)) goto L_104ef0;
  /* 104ee0: sub x0, x29, #0xa8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(168)));
  /* 104ee4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 104ee8: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1068780));
  fn1_142d10(c);
  /* 104eec: b #0x104f10 */
  goto L_104f10;
L_104ef0:;
  /* 104ef0: tbnz w9, #0, #0x104f04 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_104f04;
  /* 104ef4: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* 104ef8: sturb w9, [x29, #-0xa8] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-168)), ARC_W_R(c, 9));
  /* 104efc: mov x9, x28 */
  ARC_X_W(c, 9, ARC_X_R(c, 28));
  /* 104f00: b #0x104f0c */
  goto L_104f0c;
L_104f04:;
  /* 104f04: ldr x9, [x26, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 104f08: str x8, [x26, #0x10] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(16)), ARC_X_R(c, 8));
L_104f0c:;
  /* 104f0c: strb wzr, [x9, x8] */
  arc_st8((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_W_R(c, 31));
L_104f10:;
  /* 104f10: ldurb w8, [x29, #-0xa8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-168))));
  /* 104f14: ldr x9, [x26, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 104f18: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 104f1c: csel x24, x28, x9, eq */
  ARC_X_W(c, 24, (ARC_COND(c, 0) ? (ARC_X_R(c, 28)) : ARC_X_R(c, 9)));
  /* 104f20: add x8, x24, x25 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + ARC_X_R(c, 25)));
  /* 104f24: str x8, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 8));
L_104f28:;
  /* 104f28: ldp x8, x9, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 104f2c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 104f30: b.eq #0x104f3c */
  if (ARC_COND(c, 0)) goto L_104f3c;
  /* 104f34: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 104f38: b #0x104f4c */
  goto L_104f4c;
L_104f3c:;
  /* 104f3c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 104f40: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 104f44: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 104f48: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1068876));
  arc_dispatch(c, ARC_X_R(c, 8));
L_104f4c:;
  /* 104f4c: ldur w5, [x29, #-0xc] */
  ARC_W_W(c, 5, arc_ld32((ARC_X_R(c, 29) + INT64_C(-12))));
  /* 104f50: sub x3, x29, #0xb0 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(176)));
  /* 104f54: add x4, sp, #0x24 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(36)));
  /* 104f58: sub x6, x29, #0x90 */
  ARC_X_W(c, 6, (ARC_X_R(c, 29) - UINT64_C(144)));
  /* 104f5c: add x7, sp, #0x30 */
  ARC_X_W(c, 7, ((c)->sp + UINT64_C(48)));
  /* 104f60: mov w1, w23 */
  ARC_W_W(c, 1, ARC_W_R(c, 23));
  /* 104f64: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 104f68: stp x22, x27, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 104f6c: bl #0x143880 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1068912));
  fn1_143880(c);
  /* 104f70: cbnz w0, #0x104fa0 */
  if ((ARC_W_R(c, 0)) != 0) goto L_104fa0;
  /* 104f74: ldp x8, x9, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 104f78: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 104f7c: b.ne #0x104dbc */
  if (ARC_COND(c, 1)) goto L_104dbc;
  /* 104f80: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 104f84: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 104f88: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 104f8c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1068944));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 104f90: b #0x104dc4 */
  goto L_104dc4;
L_104f94:;
  /* 104f94: mov x21, x19 */
  ARC_X_W(c, 21, ARC_X_R(c, 19));
  /* 104f98: b #0x104fa0 */
  goto L_104fa0;
L_104f9c:;
  /* 104f9c: mov x19, x21 */
  ARC_X_W(c, 19, ARC_X_R(c, 21));
L_104fa0:;
  /* 104fa0: ldurb w8, [x29, #-0x90] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 104fa4: ldr x9, [x26, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(40))));
  /* 104fa8: ldr x22, [sp, #0x18] */
  ARC_X_W(c, 22, arc_ld64(((c)->sp + INT64_C(24))));
  /* 104fac: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 104fb0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 104fb4: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 104fb8: cbz x8, #0x104fdc */
  if ((ARC_X_R(c, 8)) == 0) goto L_104fdc;
  /* 104fbc: ldr x8, [sp, #0x28] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(40))));
  /* 104fc0: add x9, sp, #0x30 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(48)));
  /* 104fc4: sub x9, x8, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* 104fc8: cmp x9, #0x9f */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(159));
  /* 104fcc: b.gt #0x104fdc */
  if (ARC_COND(c, 12)) goto L_104fdc;
  /* 104fd0: ldr w9, [sp, #0x24] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(36))));
  /* 104fd4: str w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 9));
  }
  /* 104fd8: str x8, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 8));
L_104fdc:;
  /* 104fdc: ldr x1, [x26] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 26)));
  /* 104fe0: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 104fe4: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 104fe8: mov w3, w23 */
  ARC_W_W(c, 3, ARC_W_R(c, 23));
  /* 104fec: bl #0x13599c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1069040));
  fn1_13599c(c);
  /* 104ff0: ldurb w10, [x29, #-0x90] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 104ff4: ldr x12, [sp, #0x28] */
  ARC_X_W(c, 12, arc_ld64(((c)->sp + INT64_C(40))));
  /* 104ff8: add x11, sp, #0x30 */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(48)));
  /* 104ffc: ldr x8, [x26, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(40))));
  /* 105000: lsr x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* 105004: ands w13, w10, #1 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 13, _r); }
  /* 105008: sub x11, x12, x11 */
  ARC_X_W(c, 11, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* 10500c: csel x8, x9, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 105010: ldr x9, [sp, #0x10] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(16))));
  /* 105014: cmp x11, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(5));
  /* 105018: str x0, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 0));
  /* 10501c: b.lt #0x10517c */
  if (ARC_COND(c, 11)) goto L_10517c;
  /* 105020: cbz x8, #0x10517c */
  if ((ARC_X_R(c, 8)) == 0) goto L_10517c;
  /* 105024: sub x8, x12, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 12) - UINT64_C(4)));
  /* 105028: add x9, sp, #0x30 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(48)));
  /* 10502c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 105030: cset w11, lo */
  ARC_W_W(c, 11, (ARC_COND(c, 3) ? 1 : 0));
  /* 105034: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* 105038: b.eq #0x1050e8 */
  if (ARC_COND(c, 0)) goto L_1050e8;
  /* 10503c: cbz w11, #0x1050e8 */
  if ((ARC_W_R(c, 11)) == 0) goto L_1050e8;
  /* 105040: add x10, sp, #0x30 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(48)));
  /* 105044: sub x14, x12, #8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) - UINT64_C(8)));
  /* 105048: add x11, x10, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 10504c: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 105050: csel x13, x14, x11, hi */
  ARC_X_W(c, 13, (ARC_COND(c, 8) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* 105054: sub x13, x13, #4 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(4)));
  /* 105058: cmp x13, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 10));
  /* 10505c: cinc x15, x10, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
  /* 105060: cmp x13, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 10));
  /* 105064: sub x15, x13, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) - ARC_X_R(c, 15)));
  /* 105068: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* 10506c: cinc x13, x15, ne */
  ARC_X_W(c, 13, (ARC_COND(c, 1) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* 105070: cmp x13, #0x13 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(19));
  /* 105074: b.lo #0x1050bc */
  if (ARC_COND(c, 3)) goto L_1050bc;
  /* 105078: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 10507c: csel x14, x14, x11, hi */
  ARC_X_W(c, 14, (ARC_COND(c, 8) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* 105080: sub x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(4)));
  /* 105084: cmp x14, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 10));
  /* 105088: cinc x15, x10, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
  /* 10508c: cmp x14, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 10));
  /* 105090: sub x15, x14, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 14) - ARC_X_R(c, 15)));
  /* 105094: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* 105098: cinc x14, x15, ne */
  ARC_X_W(c, 14, (ARC_COND(c, 1) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* 10509c: cmp x10, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 12));
  /* 1050a0: b.hs #0x10526c */
  if (ARC_COND(c, 2)) goto L_10526c;
  /* 1050a4: lsl x14, x14, #2 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(2)) & 63)));
  /* 1050a8: sub x15, x12, x14 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ARC_X_R(c, 14)));
  /* 1050ac: add x11, x11, x14 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ARC_X_R(c, 14)));
  /* 1050b0: sub x14, x15, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) - UINT64_C(4)));
  /* 1050b4: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 1050b8: b.hs #0x10526c */
  if (ARC_COND(c, 2)) goto L_10526c;
L_1050bc:;
  /* 1050bc: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
L_1050c0:;
  /* 1050c0: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
L_1050c4:;
  /* 1050c4: ldr w12, [x11] */
  ARC_W_W(c, 12, arc_ld32(ARC_X_R(c, 11)));
  /* 1050c8: ldur w13, [x10, #-4] */
  ARC_W_W(c, 13, arc_ld32((ARC_X_R(c, 10) + INT64_C(-4))));
  /* 1050cc: stur w12, [x10, #-4] */
  arc_st32((ARC_X_R(c, 10) + INT64_C(-4)), ARC_W_R(c, 12));
  /* 1050d0: str w13, [x11], #0xfffffffffffffffc */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(-4));
    arc_st32(_a, ARC_W_R(c, 13));
  }
  /* 1050d4: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 1050d8: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 1050dc: b.lo #0x1050c4 */
  if (ARC_COND(c, 3)) goto L_1050c4;
L_1050e0:;
  /* 1050e0: ldurb w10, [x29, #-0x90] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 1050e4: and w13, w10, #1 */
  ARC_W_W(c, 13, (ARC_W_R(c, 10) & UINT64_C(1)));
L_1050e8:;
  /* 1050e8: ldr x11, [x26, #0x30] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 26) + INT64_C(48))));
  /* 1050ec: cmp w13, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(0));
  /* 1050f0: sub x12, x29, #0x90 */
  ARC_X_W(c, 12, (ARC_X_R(c, 29) - UINT64_C(144)));
  /* 1050f4: csinc x11, x11, x12, ne */
  ARC_X_W(c, 11, (ARC_COND(c, 1) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 12)) + 1)));
  /* 1050f8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 1050fc: b.hs #0x105154 */
  if (ARC_COND(c, 2)) goto L_105154;
  /* 105100: lsr w9, w10, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 10)) >> ((UINT64_C(1)) & 31)));
  /* 105104: ldr x10, [x26, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 26) + INT64_C(40))));
  /* 105108: cmp w13, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(0));
  /* 10510c: csel x9, x9, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* 105110: add x10, sp, #0x30 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(48)));
  /* 105114: add x9, x11, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) + ARC_X_R(c, 9)));
  /* 105118: b #0x105134 */
  goto L_105134;
L_10511c:;
  /* 10511c: sub x12, x9, x11 */
  ARC_X_W(c, 12, (ARC_X_R(c, 9) - ARC_X_R(c, 11)));
  /* 105120: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 105124: cmp x12, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(1));
  /* 105128: cinc x11, x11, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 11)) + 1 : (ARC_X_R(c, 11))));
  /* 10512c: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* 105130: b.hs #0x105154 */
  if (ARC_COND(c, 2)) goto L_105154;
L_105134:;
  /* 105134: ldrb w12, [x11] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 11)));
  /* 105138: cbz w12, #0x10511c */
  if ((ARC_W_R(c, 12)) == 0) goto L_10511c;
  /* 10513c: cmp w12, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(255));
  /* 105140: b.eq #0x10511c */
  if (ARC_COND(c, 0)) goto L_10511c;
  /* 105144: ldr w13, [x10] */
  ARC_W_W(c, 13, arc_ld32(ARC_X_R(c, 10)));
  /* 105148: cmp w13, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 12));
  /* 10514c: b.eq #0x10511c */
  if (ARC_COND(c, 0)) goto L_10511c;
  /* 105150: b #0x105174 */
  goto L_105174;
L_105154:;
  /* 105154: ldrb w9, [x11] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 11)));
  /* 105158: cbz w9, #0x10517c */
  if ((ARC_W_R(c, 9)) == 0) goto L_10517c;
  /* 10515c: cmp w9, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(255));
  /* 105160: b.eq #0x10517c */
  if (ARC_COND(c, 0)) goto L_10517c;
  /* 105164: ldr w8, [x8] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 8)));
  /* 105168: sub w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* 10516c: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* 105170: b.lo #0x10517c */
  if (ARC_COND(c, 3)) goto L_10517c;
L_105174:;
  /* 105174: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 105178: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_10517c:;
  /* 10517c: cbz x19, #0x105194 */
  if ((ARC_X_R(c, 19)) == 0) goto L_105194;
  /* 105180: ldp x8, x9, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 105184: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 105188: b.eq #0x1051a0 */
  if (ARC_COND(c, 0)) goto L_1051a0;
  /* 10518c: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 105190: b #0x1051b0 */
  goto L_1051b0;
L_105194:;
  /* 105194: cbz x21, #0x105208 */
  if ((ARC_X_R(c, 21)) == 0) goto L_105208;
  /* 105198: mov w20, #1 */
  ARC_W_W(c, 20, UINT64_C(1));
  /* 10519c: b #0x1051c4 */
  goto L_1051c4;
L_1051a0:;
  /* 1051a0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1051a4: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1051a8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1051ac: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1069488));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1051b0:;
  /* 1051b0: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1051b4: cset w20, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? 1 : 0));
  /* 1051b8: csel x8, xzr, x19, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 19)));
  /* 1051bc: cbz x21, #0x1051fc */
  if ((ARC_X_R(c, 21)) == 0) goto L_1051fc;
  /* 1051c0: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
L_1051c4:;
  /* 1051c4: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1051c8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1051cc: b.eq #0x1051d8 */
  if (ARC_COND(c, 0)) goto L_1051d8;
  /* 1051d0: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 1051d4: b #0x1051e8 */
  goto L_1051e8;
L_1051d8:;
  /* 1051d8: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 1051dc: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1051e0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1051e4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1069544));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1051e8:;
  /* 1051e8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1051ec: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 1051f0: eor w8, w20, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 20) ^ ARC_W_R(c, 8)));
  /* 1051f4: tbz w8, #0, #0x105208 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_105208;
  /* 1051f8: b #0x105214 */
  goto L_105214;
L_1051fc:;
  /* 1051fc: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 105200: b.ne #0x105214 */
  if (ARC_COND(c, 1)) goto L_105214;
  /* 105204: mov x19, xzr */
  ARC_X_W(c, 19, ARC_X_R(c, 31));
L_105208:;
  /* 105208: ldr w8, [x22] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 22)));
  /* 10520c: orr w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(2)));
  /* 105210: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_105214:;
  /* 105214: ldurb w8, [x29, #-0xa8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-168))));
  /* 105218: tbz w8, #0, #0x10522c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10522c;
  /* 10521c: ldr x8, [x26, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(8))));
  /* 105220: ldr x0, [x26, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 105224: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 105228: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1069612));
  fn1_142608(c);
L_10522c:;
  /* 10522c: ldurb w8, [x29, #-0x90] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 105230: tbz w8, #0, #0x105244 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_105244;
  /* 105234: ldr x8, [x26, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(32))));
  /* 105238: ldr x0, [x26, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(48))));
  /* 10523c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 105240: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1069636));
  fn1_142608(c);
L_105244:;
  /* 105244: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 105248: ldp x20, x19, [sp, #0x1d0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(464));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 10524c: ldp x22, x21, [sp, #0x1c0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(448));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 105250: ldp x24, x23, [sp, #0x1b0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(432));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 105254: ldp x26, x25, [sp, #0x1a0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(416));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 105258: ldp x28, x27, [sp, #0x190] */
  { const uint64_t _pa = ((c)->sp + INT64_C(400));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 10525c: ldp x29, x30, [sp, #0x180] */
  { const uint64_t _pa = ((c)->sp + INT64_C(384));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 105260: add sp, sp, #0x1e0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(480)));
  /* 105264: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 105268: ret  */
  return;
L_10526c:;
  /* 10526c: add x13, x13, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(1)));
  /* 105270: add x15, sp, #0x30 */
  ARC_X_W(c, 15, ((c)->sp + UINT64_C(48)));
  /* 105274: sub x12, x12, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(16)));
  /* 105278: and x14, x13, #0x7ffffffffffffff8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 13) & UINT64_C(9223372036854775800)));
  /* 10527c: lsl x10, x14, #2 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(2)) & 63)));
  /* 105280: mov x16, x14 */
  ARC_X_W(c, 16, ARC_X_R(c, 14));
  /* 105284: sub x11, x8, x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) - ARC_X_R(c, 10)));
  /* 105288: add x10, x15, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 15) + ARC_X_R(c, 10)));
  /* 10528c: add x15, x15, #0x10 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(16)));
L_105290:;
  /* 105290: ldp q1, q0, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 105294: sub x16, x16, #8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) - UINT64_C(8)));
  /* 105298: ldp q2, q3, [x15, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 15) + INT64_C(-16));
    arc_q_w(c, 2, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 3, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 10529c: rev64 v0.4s, v0.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[0].u32[1];
    _t.u32[1] = (c)->q[0].u32[0];
    _t.u32[2] = (c)->q[0].u32[3];
    _t.u32[3] = (c)->q[0].u32[2];
    (c)->q[0] = _t; }
  /* 1052a0: rev64 v1.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[1].u32[1];
    _t.u32[1] = (c)->q[1].u32[0];
    _t.u32[2] = (c)->q[1].u32[3];
    _t.u32[3] = (c)->q[1].u32[2];
    (c)->q[1] = _t; }
  /* 1052a4: rev64 v2.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[2].u32[1];
    _t.u32[1] = (c)->q[2].u32[0];
    _t.u32[2] = (c)->q[2].u32[3];
    _t.u32[3] = (c)->q[2].u32[2];
    (c)->q[2] = _t; }
  /* 1052a8: rev64 v3.4s, v3.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[3].u32[1];
    _t.u32[1] = (c)->q[3].u32[0];
    _t.u32[2] = (c)->q[3].u32[3];
    _t.u32[3] = (c)->q[3].u32[2];
    (c)->q[3] = _t; }
  /* 1052ac: ext v0.16b, v0.16b, v0.16b, #8 */
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
  /* 1052b0: ext v1.16b, v1.16b, v1.16b, #8 */
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
  /* 1052b4: ext v2.16b, v2.16b, v2.16b, #8 */
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
  /* 1052b8: ext v3.16b, v3.16b, v3.16b, #8 */
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
  /* 1052bc: stp q0, q1, [x15, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 15) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 1052c0: add x15, x15, #0x20 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(32)));
  /* 1052c4: stp q3, q2, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_st64(_pa, (c)->q[3].u64[0]);
    arc_st64(_pa + 8, (c)->q[3].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* 1052c8: sub x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(32)));
  /* 1052cc: cbnz x16, #0x105290 */
  if ((ARC_X_R(c, 16)) != 0) goto L_105290;
  /* 1052d0: cmp x13, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 14));
  /* 1052d4: b.eq #0x1050e0 */
  if (ARC_COND(c, 0)) goto L_1050e0;
  /* 1052d8: b #0x1050c0 */
  goto L_1050c0;
  /* 1052dc: b #0x1052e8 */
  goto L_1052e8;
  /* 1052e0: b #0x1052e8 */
  goto L_1052e8;
  /* 1052e4: b #0x1052e8 */
  goto L_1052e8;
L_1052e8:;
  /* 1052e8: ldurb w8, [x29, #-0xa8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-168))));
  /* 1052ec: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1052f0: tbnz w8, #0, #0x105304 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_105304;
  /* 1052f4: ldurb w8, [x29, #-0x90] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 1052f8: tbnz w8, #0, #0x10531c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_10531c;
L_1052fc:;
  /* 1052fc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 105300: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1069828));
  fn1_9cc20(c);
L_105304:;
  /* 105304: ldr x8, [x26, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(8))));
  /* 105308: ldr x0, [x26, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 10530c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 105310: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1069844));
  fn1_142608(c);
  /* 105314: ldurb w8, [x29, #-0x90] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 105318: tbz w8, #0, #0x1052fc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1052fc;
L_10531c:;
  /* 10531c: ldr x8, [x26, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(32))));
  /* 105320: ldr x0, [x26, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(48))));
  /* 105324: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 105328: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1069868));
  fn1_142608(c);
  /* 10532c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 105330: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1069876));
  fn1_9cc20(c);
}

void fn1_11111c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039046428));
  /* 11111c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 111120: sub sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(144)));
  /* 111124: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 111128: stp x28, x27, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 11112c: stp x26, x25, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 111130: stp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 111134: stp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 111138: stp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 11113c: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 111140: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 111144: stp x3, x0, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 3));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 111148: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 11114c: add x1, x3, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 3) + UINT64_C(48)));
  /* 111150: mov x22, x7 */
  ARC_X_W(c, 22, ARC_X_R(c, 7));
  /* 111154: mov x26, x6 */
  ARC_X_W(c, 26, ARC_X_R(c, 6));
  /* 111158: mov x25, x5 */
  ARC_X_W(c, 25, ARC_X_R(c, 5));
  /* 11115c: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* 111160: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 111164: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1118568));
  fn1_143460(c);
  /* 111168: adrp x24, #0x151000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11116c: ldr x24, [x24, #0xb58] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(2904))));
  /* 111170: ldr x23, [sp, #0x18] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(24))));
  /* 111174: ldar x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 111178: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11117c: b.eq #0x111238 */
  if (ARC_COND(c, 0)) goto L_111238;
  /* 111180: nop  */
  /* nop: no architectural effect here */
  /* 111184: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 111188: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1118604));
  fn1_142518(c);
  /* 11118c: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 111190: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 111194: b.ne #0x1111c0 */
  if (ARC_COND(c, 1)) goto L_1111c0;
  /* 111198: nop  */
  /* nop: no architectural effect here */
  /* 11119c: adr x27, #0x15791c */
  ARC_X_W(c, 27, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 1111a0: nop  */
  /* nop: no architectural effect here */
  /* 1111a4: adr x28, #0x1578f4 */
  ARC_X_W(c, 28, (arc_image_bases[1] + UINT64_C(1407220)));
L_1111a8:;
  /* 1111a8: mov x0, x27 */
  ARC_X_W(c, 0, ARC_X_R(c, 27));
  /* 1111ac: mov x1, x28 */
  ARC_X_W(c, 1, ARC_X_R(c, 28));
  /* 1111b0: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1118644));
  fn1_142530(c);
  /* 1111b4: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 1111b8: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1111bc: b.eq #0x1111a8 */
  if (ARC_COND(c, 0)) goto L_1111a8;
L_1111c0:;
  /* 1111c0: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 1111c4: cbz x8, #0x1111d8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1111d8;
  /* 1111c8: nop  */
  /* nop: no architectural effect here */
  /* 1111cc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1111d0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1118676));
  fn1_142560(c);
  /* 1111d4: b #0x111238 */
  goto L_111238;
L_1111d8:;
  /* 1111d8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 1111dc: stur x24, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 24));
  /* 1111e0: sturb wzr, [x29, #-8] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-8)), ARC_W_R(c, 31));
  /* 1111e4: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 1111e8: nop  */
  /* nop: no architectural effect here */
  /* 1111ec: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1111f0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1118708));
  fn1_142560(c);
  /* 1111f4: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1111f8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1111fc: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 111200: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1118724));
  fn1_a2030(c);
  /* 111204: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 111208: str w8, [x24, #8] */
  arc_st32((ARC_X_R(c, 24) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11120c: nop  */
  /* nop: no architectural effect here */
  /* 111210: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 111214: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1118744));
  fn1_142518(c);
  /* 111218: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11121c: stlr x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 111220: nop  */
  /* nop: no architectural effect here */
  /* 111224: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 111228: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1118764));
  fn1_142560(c);
  /* 11122c: nop  */
  /* nop: no architectural effect here */
  /* 111230: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 111234: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1118776));
  fn1_142578(c);
L_111238:;
  /* 111238: ldp x8, x10, [x23, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 11123c: ldrsw x9, [x24, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 24) + INT64_C(8)))));
  /* 111240: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 111244: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 111248: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 11124c: b.hs #0x1116e0 */
  if (ARC_COND(c, 2)) goto L_1116e0;
  /* 111250: ldr x27, [x8, x9, lsl #3] */
  ARC_X_W(c, 27, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 111254: cbz x27, #0x1116e0 */
  if ((ARC_X_R(c, 27)) == 0) goto L_1116e0;
  /* 111258: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 11125c: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1118816));
  fn1_143478(c);
  /* 111260: cmp x26, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 22));
  /* 111264: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* 111268: b.eq #0x111620 */
  if (ARC_COND(c, 0)) goto L_111620;
  /* 11126c: mov x24, x25 */
  ARC_X_W(c, 24, ARC_X_R(c, 25));
  /* 111270: ldr x25, [sp, #8] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(8))));
L_111274:;
  /* 111274: cbz x20, #0x11128c */
  if ((ARC_X_R(c, 20)) == 0) goto L_11128c;
  /* 111278: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11127c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 111280: b.eq #0x111298 */
  if (ARC_COND(c, 0)) goto L_111298;
  /* 111284: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 111288: b #0x1112a8 */
  goto L_1112a8;
L_11128c:;
  /* 11128c: cbz x21, #0x11160c */
  if ((ARC_X_R(c, 21)) == 0) goto L_11160c;
  /* 111290: mov w23, #1 */
  ARC_W_W(c, 23, UINT64_C(1));
  /* 111294: b #0x1112bc */
  goto L_1112bc;
L_111298:;
  /* 111298: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 11129c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1112a0: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1112a4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1118888));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1112a8:;
  /* 1112a8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1112ac: cset w23, eq */
  ARC_W_W(c, 23, (ARC_COND(c, 0) ? 1 : 0));
  /* 1112b0: csel x8, xzr, x20, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 20)));
  /* 1112b4: cbz x21, #0x1112fc */
  if ((ARC_X_R(c, 21)) == 0) goto L_1112fc;
  /* 1112b8: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
L_1112bc:;
  /* 1112bc: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1112c0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1112c4: b.eq #0x1112d0 */
  if (ARC_COND(c, 0)) goto L_1112d0;
  /* 1112c8: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 1112cc: b #0x1112e0 */
  goto L_1112e0;
L_1112d0:;
  /* 1112d0: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 1112d4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1112d8: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1112dc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1118944));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1112e0:;
  /* 1112e0: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1112e4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1112e8: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 1112ec: csel x21, xzr, x21, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 21)));
  /* 1112f0: eor w8, w23, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 23) ^ ARC_W_R(c, 8)));
  /* 1112f4: tbnz w8, #0, #0x111308 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_111308;
  /* 1112f8: b #0x111614 */
  goto L_111614;
L_1112fc:;
  /* 1112fc: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 111300: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 111304: b.eq #0x111614 */
  if (ARC_COND(c, 0)) goto L_111614;
L_111308:;
  /* 111308: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 11130c: ldr w1, [x26] */
  ARC_W_W(c, 1, arc_ld32(ARC_X_R(c, 26)));
  /* 111310: mov x0, x27 */
  ARC_X_W(c, 0, ARC_X_R(c, 27));
  /* 111314: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 111318: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* 11131c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1119008));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 111320: and w8, w0, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) & UINT64_C(255)));
  /* 111324: cmp w8, #0x25 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(37));
  /* 111328: b.ne #0x11139c */
  if (ARC_COND(c, 1)) goto L_11139c;
  /* 11132c: add x8, x26, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 26) + UINT64_C(4)));
  /* 111330: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* 111334: b.eq #0x111604 */
  if (ARC_COND(c, 0)) goto L_111604;
  /* 111338: ldr x9, [x27] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 27)));
  /* 11133c: ldr w1, [x8] */
  ARC_W_W(c, 1, arc_ld32(ARC_X_R(c, 8)));
  /* 111340: mov x0, x27 */
  ARC_X_W(c, 0, ARC_X_R(c, 27));
  /* 111344: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 111348: ldr x8, [x9, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(104))));
  /* 11134c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1119056));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 111350: and w8, w0, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) & UINT64_C(255)));
  /* 111354: mov w28, w0 */
  ARC_W_W(c, 28, ARC_W_R(c, 0));
  /* 111358: cmp w8, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(69));
  /* 11135c: b.eq #0x111368 */
  if (ARC_COND(c, 0)) goto L_111368;
  /* 111360: cmp w8, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(48));
  /* 111364: b.ne #0x1114f8 */
  if (ARC_COND(c, 1)) goto L_1114f8;
L_111368:;
  /* 111368: add x8, x26, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 26) + UINT64_C(8)));
  /* 11136c: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* 111370: b.eq #0x111604 */
  if (ARC_COND(c, 0)) goto L_111604;
  /* 111374: ldr x9, [x27] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 27)));
  /* 111378: ldr w1, [x8] */
  ARC_W_W(c, 1, arc_ld32(ARC_X_R(c, 8)));
  /* 11137c: mov x0, x27 */
  ARC_X_W(c, 0, ARC_X_R(c, 27));
  /* 111380: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 111384: ldr x8, [x9, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(104))));
  /* 111388: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1119116));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11138c: mov w7, w28 */
  ARC_W_W(c, 7, ARC_W_R(c, 28));
  /* 111390: mov w28, w0 */
  ARC_W_W(c, 28, ARC_W_R(c, 0));
  /* 111394: mov w8, #8 */
  ARC_W_W(c, 8, UINT64_C(8));
  /* 111398: b #0x111500 */
  goto L_111500;
L_11139c:;
  /* 11139c: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 1113a0: ldr w2, [x26] */
  ARC_W_W(c, 2, arc_ld32(ARC_X_R(c, 26)));
  /* 1113a4: mov x0, x27 */
  ARC_X_W(c, 0, ARC_X_R(c, 27));
  /* 1113a8: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 1113ac: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 1113b0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1119156));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1113b4: tbz w0, #0, #0x1114e4 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_1114e4;
  /* 1113b8: add x23, x26, #4 */
  ARC_X_W(c, 23, (ARC_X_R(c, 26) + UINT64_C(4)));
L_1113bc:;
  /* 1113bc: mov x26, x23 */
  ARC_X_W(c, 26, ARC_X_R(c, 23));
  /* 1113c0: cmp x23, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 22));
  /* 1113c4: b.eq #0x1113fc */
  if (ARC_COND(c, 0)) goto L_1113fc;
  /* 1113c8: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 1113cc: mov x23, x26 */
  ARC_X_W(c, 23, ARC_X_R(c, 26));
  /* 1113d0: mov x0, x27 */
  ARC_X_W(c, 0, ARC_X_R(c, 27));
  /* 1113d4: ldr w2, [x23], #4 */
  { const uint64_t _a = ARC_X_R(c, 23);
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(4));
    ARC_W_W(c, 2, arc_ld32(_a));
  }
  /* 1113d8: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 1113dc: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 1113e0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1119204));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1113e4: tbnz w0, #0, #0x1113bc */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_1113bc;
  /* 1113e8: b #0x1113fc */
  goto L_1113fc;
L_1113ec:;
  /* 1113ec: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1113f0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1113f4: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 1113f8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1119228));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1113fc:;
  /* 1113fc: cbz x20, #0x111448 */
  if ((ARC_X_R(c, 20)) == 0) goto L_111448;
L_111400:;
  /* 111400: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 111404: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 111408: b.eq #0x111414 */
  if (ARC_COND(c, 0)) goto L_111414;
  /* 11140c: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 111410: b #0x111424 */
  goto L_111424;
L_111414:;
  /* 111414: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 111418: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11141c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 111420: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1119268));
  arc_dispatch(c, ARC_X_R(c, 8));
L_111424:;
  /* 111424: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 111428: cset w23, eq */
  ARC_W_W(c, 23, (ARC_COND(c, 0) ? 1 : 0));
  /* 11142c: csel x8, xzr, x20, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 20)));
  /* 111430: cbz x21, #0x11143c */
  if ((ARC_X_R(c, 21)) == 0) goto L_11143c;
  /* 111434: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 111438: b #0x111450 */
  goto L_111450;
L_11143c:;
  /* 11143c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 111440: b.ne #0x111488 */
  if (ARC_COND(c, 1)) goto L_111488;
  /* 111444: b #0x1115f4 */
  goto L_1115f4;
L_111448:;
  /* 111448: cbz x21, #0x1115dc */
  if ((ARC_X_R(c, 21)) == 0) goto L_1115dc;
  /* 11144c: mov w23, #1 */
  ARC_W_W(c, 23, UINT64_C(1));
L_111450:;
  /* 111450: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 111454: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 111458: b.eq #0x111464 */
  if (ARC_COND(c, 0)) goto L_111464;
  /* 11145c: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 111460: b #0x111474 */
  goto L_111474;
L_111464:;
  /* 111464: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 111468: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11146c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 111470: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1119348));
  arc_dispatch(c, ARC_X_R(c, 8));
L_111474:;
  /* 111474: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 111478: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 11147c: csel x21, xzr, x21, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 21)));
  /* 111480: cmp w23, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 23), ARC_W_R(c, 8));
  /* 111484: b.eq #0x1115e0 */
  if (ARC_COND(c, 0)) goto L_1115e0;
L_111488:;
  /* 111488: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11148c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 111490: b.eq #0x11149c */
  if (ARC_COND(c, 0)) goto L_11149c;
  /* 111494: ldr w2, [x8] */
  ARC_W_W(c, 2, arc_ld32(ARC_X_R(c, 8)));
  /* 111498: b #0x1114b0 */
  goto L_1114b0;
L_11149c:;
  /* 11149c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1114a0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1114a4: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1114a8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1119404));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1114ac: mov w2, w0 */
  ARC_W_W(c, 2, ARC_W_R(c, 0));
L_1114b0:;
  /* 1114b0: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 1114b4: mov x0, x27 */
  ARC_X_W(c, 0, ARC_X_R(c, 27));
  /* 1114b8: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 1114bc: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 1114c0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1119428));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1114c4: tbz w0, #0, #0x1115e0 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_1115e0;
  /* 1114c8: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1114cc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1114d0: b.eq #0x1113ec */
  if (ARC_COND(c, 0)) goto L_1113ec;
  /* 1114d4: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 1114d8: str x8, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 8));
  /* 1114dc: cbnz x20, #0x111400 */
  if ((ARC_X_R(c, 20)) != 0) goto L_111400;
  /* 1114e0: b #0x111448 */
  goto L_111448;
L_1114e4:;
  /* 1114e4: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1114e8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1114ec: b.eq #0x111540 */
  if (ARC_COND(c, 0)) goto L_111540;
  /* 1114f0: ldr w1, [x8] */
  ARC_W_W(c, 1, arc_ld32(ARC_X_R(c, 8)));
  /* 1114f4: b #0x111554 */
  goto L_111554;
L_1114f8:;
  /* 1114f8: mov w7, wzr */
  ARC_W_W(c, 7, ARC_W_R(c, 31));
  /* 1114fc: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
L_111500:;
  /* 111500: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* 111504: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 111508: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 11150c: mov x3, x25 */
  ARC_X_W(c, 3, ARC_X_R(c, 25));
  /* 111510: mov x4, x19 */
  ARC_X_W(c, 4, ARC_X_R(c, 19));
  /* 111514: mov x5, x24 */
  ARC_X_W(c, 5, ARC_X_R(c, 24));
  /* 111518: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* 11151c: mov w6, w28 */
  ARC_W_W(c, 6, ARC_W_R(c, 28));
  /* 111520: add x23, x26, x8 */
  ARC_X_W(c, 23, (ARC_X_R(c, 26) + ARC_X_R(c, 8)));
  /* 111524: ldr x9, [x9, #0x48] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(72))));
  /* 111528: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1119532));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 11152c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 111530: add x26, x23, #4 */
  ARC_X_W(c, 26, (ARC_X_R(c, 23) + UINT64_C(4)));
  /* 111534: cmp x26, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 22));
  /* 111538: b.ne #0x1115e8 */
  if (ARC_COND(c, 1)) goto L_1115e8;
  /* 11153c: b #0x111620 */
  goto L_111620;
L_111540:;
  /* 111540: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 111544: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 111548: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 11154c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1119568));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 111550: mov w1, w0 */
  ARC_W_W(c, 1, ARC_W_R(c, 0));
L_111554:;
  /* 111554: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 111558: mov x0, x27 */
  ARC_X_W(c, 0, ARC_X_R(c, 27));
  /* 11155c: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* 111560: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1119588));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 111564: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 111568: ldr w1, [x26] */
  ARC_W_W(c, 1, arc_ld32(ARC_X_R(c, 26)));
  /* 11156c: mov w28, w0 */
  ARC_W_W(c, 28, ARC_W_R(c, 0));
  /* 111570: mov x0, x27 */
  ARC_X_W(c, 0, ARC_X_R(c, 27));
  /* 111574: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* 111578: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1119612));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11157c: cmp w28, w0 */
  (void)arc_sub32(c, ARC_W_R(c, 28), ARC_W_R(c, 0));
  /* 111580: b.ne #0x1115a8 */
  if (ARC_COND(c, 1)) goto L_1115a8;
  /* 111584: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 111588: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 11158c: b.eq #0x1115bc */
  if (ARC_COND(c, 0)) goto L_1115bc;
  /* 111590: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 111594: add x26, x26, #4 */
  ARC_X_W(c, 26, (ARC_X_R(c, 26) + UINT64_C(4)));
  /* 111598: str x8, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 8));
  /* 11159c: cmp x26, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 22));
  /* 1115a0: b.ne #0x1115e8 */
  if (ARC_COND(c, 1)) goto L_1115e8;
  /* 1115a4: b #0x111620 */
  goto L_111620;
L_1115a8:;
  /* 1115a8: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 1115ac: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 1115b0: cmp x26, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 22));
  /* 1115b4: b.ne #0x1115e8 */
  if (ARC_COND(c, 1)) goto L_1115e8;
  /* 1115b8: b #0x111620 */
  goto L_111620;
L_1115bc:;
  /* 1115bc: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1115c0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1115c4: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 1115c8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1119692));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1115cc: add x26, x26, #4 */
  ARC_X_W(c, 26, (ARC_X_R(c, 26) + UINT64_C(4)));
  /* 1115d0: cmp x26, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 22));
  /* 1115d4: b.ne #0x1115e8 */
  if (ARC_COND(c, 1)) goto L_1115e8;
  /* 1115d8: b #0x111620 */
  goto L_111620;
L_1115dc:;
  /* 1115dc: mov x21, x20 */
  ARC_X_W(c, 21, ARC_X_R(c, 20));
L_1115e0:;
  /* 1115e0: cmp x26, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 22));
  /* 1115e4: b.eq #0x111620 */
  if (ARC_COND(c, 0)) goto L_111620;
L_1115e8:;
  /* 1115e8: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* 1115ec: cbz w8, #0x111274 */
  if ((ARC_W_R(c, 8)) == 0) goto L_111274;
  /* 1115f0: b #0x111620 */
  goto L_111620;
L_1115f4:;
  /* 1115f4: mov x20, x21 */
  ARC_X_W(c, 20, ARC_X_R(c, 21));
  /* 1115f8: cmp x26, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 22));
  /* 1115fc: b.ne #0x1115e8 */
  if (ARC_COND(c, 1)) goto L_1115e8;
  /* 111600: b #0x111620 */
  goto L_111620;
L_111604:;
  /* 111604: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 111608: b #0x111614 */
  goto L_111614;
L_11160c:;
  /* 11160c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 111610: mov x21, x20 */
  ARC_X_W(c, 21, ARC_X_R(c, 20));
L_111614:;
  /* 111614: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 111618: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11161c: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_111620:;
  /* 111620: cbz x20, #0x111638 */
  if ((ARC_X_R(c, 20)) == 0) goto L_111638;
  /* 111624: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 111628: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 11162c: b.eq #0x111644 */
  if (ARC_COND(c, 0)) goto L_111644;
  /* 111630: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 111634: b #0x111654 */
  goto L_111654;
L_111638:;
  /* 111638: cbz x21, #0x1116ac */
  if ((ARC_X_R(c, 21)) == 0) goto L_1116ac;
  /* 11163c: mov w22, #1 */
  ARC_W_W(c, 22, UINT64_C(1));
  /* 111640: b #0x111668 */
  goto L_111668;
L_111644:;
  /* 111644: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 111648: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11164c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 111650: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1119828));
  arc_dispatch(c, ARC_X_R(c, 8));
L_111654:;
  /* 111654: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 111658: cset w22, eq */
  ARC_W_W(c, 22, (ARC_COND(c, 0) ? 1 : 0));
  /* 11165c: csel x8, xzr, x20, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 20)));
  /* 111660: cbz x21, #0x11167c */
  if ((ARC_X_R(c, 21)) == 0) goto L_11167c;
  /* 111664: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
L_111668:;
  /* 111668: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11166c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 111670: b.eq #0x11168c */
  if (ARC_COND(c, 0)) goto L_11168c;
  /* 111674: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 111678: b #0x11169c */
  goto L_11169c;
L_11167c:;
  /* 11167c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 111680: b.ne #0x1116b8 */
  if (ARC_COND(c, 1)) goto L_1116b8;
  /* 111684: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 111688: b #0x1116ac */
  goto L_1116ac;
L_11168c:;
  /* 11168c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 111690: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 111694: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 111698: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1119900));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11169c:;
  /* 11169c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1116a0: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 1116a4: eor w8, w22, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 22) ^ ARC_W_R(c, 8)));
  /* 1116a8: tbnz w8, #0, #0x1116b8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1116b8;
L_1116ac:;
  /* 1116ac: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* 1116b0: orr w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(2)));
  /* 1116b4: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_1116b8:;
  /* 1116b8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1116bc: ldp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1116c0: ldp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1116c4: ldp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1116c8: ldp x26, x25, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 1116cc: ldp x28, x27, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 1116d0: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1116d4: add sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(144)));
  /* 1116d8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1116dc: ret  */
  return;
L_1116e0:;
  /* 1116e0: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1119972));
  fn1_fc3b8(c);
  /* 1116e4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1116e8: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 1116ec: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1119984));
  fn1_d2a78(c);
  /* 1116f0: b #0x1116fc */
  goto L_1116fc;
  /* 1116f4: b #0x1116f8 */
  goto L_1116f8;
L_1116f8:;
  /* 1116f8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_1116fc:;
  /* 1116fc: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 111700: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1120004));
  fn1_143478(c);
  /* 111704: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 111708: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1120012));
  fn1_9cc20(c);
}

void fn1_113db8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057848));
  /* 113db8: bti c */
  /* bti: no architectural effect here */
  /* 113dbc: mov w0, #0x302 */
  ARC_W_W(c, 0, UINT64_C(770));
  /* 113dc0: movk w0, #0x400, lsl #16 */
  ARC_W_W(c, 0, ((ARC_W_R(c, 0) & UINT64_C(18446744069414649855)) | UINT64_C(67108864)));
  /* 113dc4: ret  */
  return;
}

void fn1_11ad7c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039086460));
  /* 11ad7c: bti c */
  /* bti: no architectural effect here */
  /* 11ad80: b #0x143d78 */
  fn1_143d78(c); return;
}

void fn1_12578c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039129996));
  /* 12578c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 125790: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 125794: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 125798: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12579c: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 1257a0: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1257a4: sub x9, x2, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 2) - UINT64_C(1)));
  /* 1257a8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1257ac: ldr x8, [x8, #0xc60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3168))));
  /* 1257b0: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1257b4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1257b8: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 1257bc: stp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1257c0: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 1257c4: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1202120));
  fn1_1441e0(c);
  /* 1257c8: str x0, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 0));
  /* 1257cc: cbz x0, #0x1257e4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1257e4;
  /* 1257d0: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1257d4: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1257d8: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1257dc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1257e0: ret  */
  return;
L_1257e4:;
  /* 1257e4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1257e8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1257ec: bl #0x11dda8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1202160));
  fn1_11dda8(c);
  /* 1257f0: adrp x0, #0x50000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(327680)));
  /* 1257f4: add x0, x0, #0x6e1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1761)));
  /* 1257f8: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* 1257fc: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 125800: add x19, sp, #0x18 */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(24)));
  /* 125804: bl #0x125878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1202184));
  fn1_125878(c);
  /* 125808: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* 12580c: ldr x9, [sp, #0x28] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(40))));
  /* 125810: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 125814: csinc x0, x9, x19, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* 125818: bl #0x142c98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1202204));
  fn1_142c98(c);
  /* 12581c: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* 125820: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 125824: tbnz w8, #0, #0x125838 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_125838;
  /* 125828: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 12582c: tbnz w8, #0, #0x125860 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_125860;
L_125830:;
  /* 125830: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 125834: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1202232));
  fn1_9cc20(c);
L_125838:;
  /* 125838: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 12583c: ldr x0, [sp, #0x28] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(40))));
  /* 125840: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 125844: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1202248));
  fn1_142608(c);
  /* 125848: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 12584c: tbz w8, #0, #0x125830 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_125830;
  /* 125850: b #0x125860 */
  goto L_125860;
  /* 125854: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 125858: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 12585c: tbz w8, #0, #0x125830 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_125830;
L_125860:;
  /* 125860: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 125864: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* 125868: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 12586c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1202288));
  fn1_142608(c);
  /* 125870: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 125874: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1202296));
  fn1_9cc20(c);
}

void fn1_127e40(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039139904));
  /* 127e40: bti c */
  /* bti: no architectural effect here */
  /* 127e44: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 127e48: ret  */
  return;
}

void fn1_129fe4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039148516));
  /* 129fe4: bti c */
  /* bti: no architectural effect here */
  /* 129fe8: sub x8, x3, x2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) - ARC_X_R(c, 2)));
  /* 129fec: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* 129ff0: mov x8, x2 */
  ARC_X_W(c, 8, ARC_X_R(c, 2));
  /* 129ff4: b.lt #0x12a038 */
  if (ARC_COND(c, 11)) goto L_12a038;
  /* 129ff8: ldr w9, [x0, #0x18] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 0) + INT64_C(24))));
  /* 129ffc: mov x8, x2 */
  ARC_X_W(c, 8, ARC_X_R(c, 2));
  /* 12a000: tbz w9, #2, #0x12a038 */
  if (((ARC_W_R(c, 9)) >> 2 & 1) == 0) goto L_12a038;
  /* 12a004: ldrb w8, [x2] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 2)));
  /* 12a008: cmp w8, #0xef */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(239));
  /* 12a00c: mov x8, x2 */
  ARC_X_W(c, 8, ARC_X_R(c, 2));
  /* 12a010: b.ne #0x12a038 */
  if (ARC_COND(c, 1)) goto L_12a038;
  /* 12a014: ldrb w8, [x2, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 2) + INT64_C(1))));
  /* 12a018: cmp w8, #0xbb */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(187));
  /* 12a01c: mov x8, x2 */
  ARC_X_W(c, 8, ARC_X_R(c, 2));
  /* 12a020: b.ne #0x12a038 */
  if (ARC_COND(c, 1)) goto L_12a038;
  /* 12a024: ldrb w8, [x2, #2] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 2) + INT64_C(2))));
  /* 12a028: cmp w8, #0xbf */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(191));
  /* 12a02c: mov w8, #3 */
  ARC_W_W(c, 8, UINT64_C(3));
  /* 12a030: csel x8, x8, xzr, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 31)));
  /* 12a034: add x8, x2, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 2) + ARC_X_R(c, 8)));
L_12a038:;
  /* 12a038: cbz x4, #0x12a150 */
  if ((ARC_X_R(c, 4)) == 0) goto L_12a150;
  /* 12a03c: cmp x8, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 3));
  /* 12a040: b.hs #0x12a150 */
  if (ARC_COND(c, 2)) goto L_12a150;
  /* 12a044: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 12a048: mov w10, #1 */
  ARC_W_W(c, 10, UINT64_C(1));
L_12a04c:;
  /* 12a04c: ldrsb w11, [x8] */
  ARC_W_W(c, 11, ((int32_t)(int8_t)arc_ld8(ARC_X_R(c, 8))));
  /* 12a050: tbnz w11, #0x1f, #0x12a070 */
  if (((ARC_W_R(c, 11)) >> 31 & 1) != 0) goto L_12a070;
  /* 12a054: and x11, x11, #0xff */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) & UINT64_C(255)));
  /* 12a058: cmp x9, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 11));
  /* 12a05c: b.lo #0x12a150 */
  if (ARC_COND(c, 3)) goto L_12a150;
  /* 12a060: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 12a064: cmp x8, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 3));
  /* 12a068: b.lo #0x12a144 */
  if (ARC_COND(c, 3)) goto L_12a144;
  /* 12a06c: b #0x12a150 */
  goto L_12a150;
L_12a070:;
  /* 12a070: and w11, w11, #0xff */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) & UINT64_C(255)));
  /* 12a074: cmp w11, #0xc2 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(194));
  /* 12a078: b.lo #0x12a150 */
  if (ARC_COND(c, 3)) goto L_12a150;
  /* 12a07c: cmp w11, #0xdf */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(223));
  /* 12a080: b.hi #0x12a0c0 */
  if (ARC_COND(c, 8)) goto L_12a0c0;
  /* 12a084: sub x12, x3, x8 */
  ARC_X_W(c, 12, (ARC_X_R(c, 3) - ARC_X_R(c, 8)));
  /* 12a088: cmp x12, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(2));
  /* 12a08c: b.lt #0x12a150 */
  if (ARC_COND(c, 11)) goto L_12a150;
  /* 12a090: ldrb w12, [x8, #1] */
  ARC_W_W(c, 12, arc_ld8((ARC_X_R(c, 8) + INT64_C(1))));
  /* 12a094: and w13, w12, #0xc0 */
  ARC_W_W(c, 13, (ARC_W_R(c, 12) & UINT64_C(192)));
  /* 12a098: cmp w13, #0x80 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(128));
  /* 12a09c: b.ne #0x12a150 */
  if (ARC_COND(c, 1)) goto L_12a150;
  /* 12a0a0: and w12, w12, #0x3f */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) & UINT64_C(63)));
  /* 12a0a4: bfi w12, w11, #6, #5 */
  ARC_W_W(c, 12, (((uint32_t)(ARC_W_R(c, 12)) & UINT64_C(4294965311)) | ((((uint32_t)(ARC_W_R(c, 11))) & UINT64_C(31)) << 6)));
  /* 12a0a8: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* 12a0ac: b.lo #0x12a150 */
  if (ARC_COND(c, 3)) goto L_12a150;
  /* 12a0b0: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* 12a0b4: cmp x8, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 3));
  /* 12a0b8: b.lo #0x12a144 */
  if (ARC_COND(c, 3)) goto L_12a144;
  /* 12a0bc: b #0x12a150 */
  goto L_12a150;
L_12a0c0:;
  /* 12a0c0: cmp w11, #0xef */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(239));
  /* 12a0c4: b.hi #0x12a150 */
  if (ARC_COND(c, 8)) goto L_12a150;
  /* 12a0c8: sub x12, x3, x8 */
  ARC_X_W(c, 12, (ARC_X_R(c, 3) - ARC_X_R(c, 8)));
  /* 12a0cc: cmp x12, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(3));
  /* 12a0d0: b.lt #0x12a150 */
  if (ARC_COND(c, 11)) goto L_12a150;
  /* 12a0d4: ldrb w13, [x8, #1] */
  ARC_W_W(c, 13, arc_ld8((ARC_X_R(c, 8) + INT64_C(1))));
  /* 12a0d8: ldrb w12, [x8, #2] */
  ARC_W_W(c, 12, arc_ld8((ARC_X_R(c, 8) + INT64_C(2))));
  /* 12a0dc: cmp w11, #0xed */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(237));
  /* 12a0e0: b.eq #0x12a0fc */
  if (ARC_COND(c, 0)) goto L_12a0fc;
  /* 12a0e4: cmp w11, #0xe0 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(224));
  /* 12a0e8: b.ne #0x12a10c */
  if (ARC_COND(c, 1)) goto L_12a10c;
  /* 12a0ec: and w14, w13, #0xe0 */
  ARC_W_W(c, 14, (ARC_W_R(c, 13) & UINT64_C(224)));
  /* 12a0f0: cmp w14, #0xa0 */
  (void)arc_sub32(c, ARC_W_R(c, 14), UINT64_C(160));
  /* 12a0f4: b.eq #0x12a118 */
  if (ARC_COND(c, 0)) goto L_12a118;
  /* 12a0f8: b #0x12a150 */
  goto L_12a150;
L_12a0fc:;
  /* 12a0fc: sxtb w14, w13 */
  ARC_W_W(c, 14, ((int32_t)(int8_t)(ARC_W_R(c, 13))));
  /* 12a100: cmn w14, #0x60 */
  (void)arc_add32(c, ARC_W_R(c, 14), UINT64_C(96), 0);
  /* 12a104: b.lt #0x12a118 */
  if (ARC_COND(c, 11)) goto L_12a118;
  /* 12a108: b #0x12a150 */
  goto L_12a150;
L_12a10c:;
  /* 12a10c: sxtb w14, w13 */
  ARC_W_W(c, 14, ((int32_t)(int8_t)(ARC_W_R(c, 13))));
  /* 12a110: cmn w14, #0x41 */
  (void)arc_add32(c, ARC_W_R(c, 14), UINT64_C(65), 0);
  /* 12a114: b.gt #0x12a150 */
  if (ARC_COND(c, 12)) goto L_12a150;
L_12a118:;
  /* 12a118: and w14, w12, #0xc0 */
  ARC_W_W(c, 14, (ARC_W_R(c, 12) & UINT64_C(192)));
  /* 12a11c: cmp w14, #0x80 */
  (void)arc_sub32(c, ARC_W_R(c, 14), UINT64_C(128));
  /* 12a120: b.ne #0x12a150 */
  if (ARC_COND(c, 1)) goto L_12a150;
  /* 12a124: ubfiz w11, w11, #0xc, #4 */
  ARC_W_W(c, 11, ((uint32_t)((((uint32_t)(ARC_W_R(c, 11))) & UINT64_C(15))) << 12));
  /* 12a128: bfi w11, w13, #6, #6 */
  ARC_W_W(c, 11, (((uint32_t)(ARC_W_R(c, 11)) & UINT64_C(4294963263)) | ((((uint32_t)(ARC_W_R(c, 13))) & UINT64_C(63)) << 6)));
  /* 12a12c: bfxil w11, w12, #0, #6 */
  ARC_W_W(c, 11, (((uint32_t)(ARC_W_R(c, 11)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 12))) >> 0) & UINT64_C(63))));
  /* 12a130: cmp x9, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 11));
  /* 12a134: b.lo #0x12a150 */
  if (ARC_COND(c, 3)) goto L_12a150;
  /* 12a138: add x8, x8, #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3)));
  /* 12a13c: cmp x8, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 3));
  /* 12a140: b.hs #0x12a150 */
  if (ARC_COND(c, 2)) goto L_12a150;
L_12a144:;
  /* 12a144: cmp x10, x4 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 4));
  /* 12a148: add x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* 12a14c: b.lo #0x12a04c */
  if (ARC_COND(c, 3)) goto L_12a04c;
L_12a150:;
  /* 12a150: sub w0, w8, w2 */
  ARC_W_W(c, 0, (ARC_W_R(c, 8) - ARC_W_R(c, 2)));
  /* 12a154: ret  */
  return;
}

void fn1_12b990(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039155088));
  /* 12b990: bti c */
  /* bti: no architectural effect here */
  /* 12b994: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 12b998: ret  */
  return;
}

void fn1_12e430(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039166000));
  /* 12e430: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12e434: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 12e438: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12e43c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12e440: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 12e444: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 12e448: ldr x9, [x1, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* 12e44c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 12e450: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 12e454: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 12e458: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 12e45c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 12e460: csinc x1, x9, x1, ne */
  ARC_X_W(c, 1, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 1)) + 1)));
  /* 12e464: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1238120));
  fn1_1441e0(c);
  /* 12e468: str x0, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 0));
  /* 12e46c: cbz x0, #0x12e484 */
  if ((ARC_X_R(c, 0)) == 0) goto L_12e484;
  /* 12e470: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12e474: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12e478: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 12e47c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12e480: ret  */
  return;
L_12e484:;
  /* 12e484: adrp x0, #0x51000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(331776)));
  /* 12e488: add x0, x0, #0x6e6 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1766)));
  /* 12e48c: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 12e490: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 12e494: add x19, sp, #8 */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(8)));
  /* 12e498: bl #0x142de8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1238172));
  fn1_142de8(c);
  /* 12e49c: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 12e4a0: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
  /* 12e4a4: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 12e4a8: csinc x0, x9, x19, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* 12e4ac: bl #0x142c98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1238192));
  fn1_142c98(c);
  /* 12e4b0: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 12e4b4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12e4b8: tbz w8, #0, #0x12e4cc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12e4cc;
  /* 12e4bc: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 12e4c0: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 12e4c4: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 12e4c8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1238220));
  fn1_142608(c);
L_12e4cc:;
  /* 12e4cc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12e4d0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1238228));
  fn1_9cc20(c);
}

void fn1_134ae4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192292));
  /* 134ae4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 134ae8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 134aec: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 134af0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 134af4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 134af8: add x0, x0, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* 134afc: bl #0x136b34 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1264384));
  fn1_136b34(c);
  /* 134b00: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 134b04: mov w1, #0x440 */
  ARC_W_W(c, 1, UINT64_C(1088));
  /* 134b08: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 134b0c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 134b10: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 134b14: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_135fe4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039197668));
  /* 135fe4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 135fe8: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 135fec: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 135ff0: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 135ff4: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 135ff8: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 135ffc: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 136000: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 136004: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* 136008: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 13600c: b.eq #0x1360a4 */
  if (ARC_COND(c, 0)) goto L_1360a4;
  /* 136010: ldrb w24, [x0] */
  ARC_W_W(c, 24, arc_ld8(ARC_X_R(c, 0)));
  /* 136014: mov w21, w3 */
  ARC_W_W(c, 21, ARC_W_R(c, 3));
  /* 136018: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 13601c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 136020: cmp w24, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 24), UINT64_C(45));
  /* 136024: b.ne #0x136034 */
  if (ARC_COND(c, 1)) goto L_136034;
  /* 136028: add x22, x22, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* 13602c: cmp x22, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 20));
  /* 136030: b.eq #0x1360a4 */
  if (ARC_COND(c, 0)) goto L_1360a4;
L_136034:;
  /* 136034: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1269816));
  fn1_142a58(c);
  /* 136038: ldr w25, [x0] */
  ARC_W_W(c, 25, arc_ld32(ARC_X_R(c, 0)));
  /* 13603c: str wzr, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 31));
  /* 136040: nop  */
  /* nop: no architectural effect here */
  /* 136044: adr x8, #0x15dc38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 136048: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 13604c: adrp x26, #0x15d000 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 136050: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 136054: tbz w8, #0, #0x1360dc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1360dc;
L_136058:;
  /* 136058: ldr x3, [x26, #0xc30] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 26) + INT64_C(3120))));
  /* 13605c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 136060: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 136064: mov w2, w21 */
  ARC_W_W(c, 2, ARC_W_R(c, 21));
  /* 136068: bl #0x1444f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1269868));
  fn1_1444f8(c);
  /* 13606c: ldr w8, [x23] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 23)));
  /* 136070: cbz w8, #0x136094 */
  if ((ARC_W_R(c, 8)) == 0) goto L_136094;
  /* 136074: ldr x9, [sp, #8] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(8))));
  /* 136078: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* 13607c: b.ne #0x1360a4 */
  if (ARC_COND(c, 1)) goto L_1360a4;
  /* 136080: cmp w8, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(34));
  /* 136084: b.ne #0x1360d0 */
  if (ARC_COND(c, 1)) goto L_1360d0;
  /* 136088: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 13608c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 136090: b #0x1360ac */
  goto L_1360ac;
L_136094:;
  /* 136094: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 136098: str w25, [x23] */
  arc_st32(ARC_X_R(c, 23), ARC_W_R(c, 25));
  /* 13609c: cmp x8, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* 1360a0: b.eq #0x1360d0 */
  if (ARC_COND(c, 0)) goto L_1360d0;
L_1360a4:;
  /* 1360a4: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 1360a8: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
L_1360ac:;
  /* 1360ac: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_1360b0:;
  /* 1360b0: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1360b4: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1360b8: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1360bc: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 1360c0: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1360c4: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 1360c8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1360cc: ret  */
  return;
L_1360d0:;
  /* 1360d0: cmp w24, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 24), UINT64_C(45));
  /* 1360d4: cneg x0, x0, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? ((uint64_t)0 - (uint64_t)(ARC_X_R(c, 0))) : (ARC_X_R(c, 0))));
  /* 1360d8: b #0x1360b0 */
  goto L_1360b0;
L_1360dc:;
  /* 1360dc: nop  */
  /* nop: no architectural effect here */
  /* 1360e0: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 1360e4: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1269992));
  fn1_1424b8(c);
  /* 1360e8: cbz w0, #0x136058 */
  if ((ARC_W_R(c, 0)) == 0) goto L_136058;
  /* 1360ec: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 1360f0: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 1360f4: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 1360f8: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1360fc: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1270016));
  fn1_1441e0(c);
  /* 136100: str x0, [x26, #0xc30] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 136104: nop  */
  /* nop: no architectural effect here */
  /* 136108: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 13610c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1270032));
  fn1_1424d0(c);
  /* 136110: b #0x136058 */
  goto L_136058;
  /* 136114: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 136118: nop  */
  /* nop: no architectural effect here */
  /* 13611c: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 136120: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1270052));
  fn1_1424e8(c);
  /* 136124: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 136128: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1270060));
  fn1_9cc20(c);
}

void fn1_1391ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039210476));
  /* 1391ec: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1391f0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1391f4: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1391f8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1391fc: ldr x19, [x0, #8] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* 139200: cbz x19, #0x139214 */
  if ((ARC_X_R(c, 19)) == 0) goto L_139214;
  /* 139204: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 139208: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 13920c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1282576));
  fn1_bd950(c);
  /* 139210: cbz x0, #0x139224 */
  if ((ARC_X_R(c, 0)) == 0) goto L_139224;
L_139214:;
  /* 139214: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 139218: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13921c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 139220: ret  */
  return;
L_139224:;
  /* 139224: mov x20, x19 */
  ARC_X_W(c, 20, ARC_X_R(c, 19));
  /* 139228: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13922c: ldr x8, [x20], #0x10 */
  { const uint64_t _a = ARC_X_R(c, 20);
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 139230: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 139234: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1282616));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 139238: ldar x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 13923c: cbz x8, #0x139250 */
  if ((ARC_X_R(c, 8)) == 0) goto L_139250;
  /* 139240: add x1, x19, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* 139244: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 139248: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1282636));
  fn1_bd950(c);
  /* 13924c: cbnz x0, #0x139214 */
  if ((ARC_X_R(c, 0)) != 0) goto L_139214;
L_139250:;
  /* 139250: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 139254: ldr x16, [x8, #0x20] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 139258: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13925c: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 139260: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 139264: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 139268: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_13ef30(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039234352));
  /* 13ef30: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13ef34: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 13ef38: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13ef3c: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* 13ef40: adrp x8, #0x51000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(331776)));
  /* 13ef44: add x8, x8, #0x93 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(147)));
  /* 13ef48: stp x0, x1, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 13ef4c: stp x8, x2, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 13ef50: cbz x2, #0x13ef74 */
  if ((ARC_X_R(c, 2)) == 0) goto L_13ef74;
  /* 13ef54: str wzr, [x2] */
  arc_st32(ARC_X_R(c, 2), ARC_W_R(c, 31));
  /* 13ef58: nop  */
  /* nop: no architectural effect here */
  /* 13ef5c: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13ef60: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13ef64: tbz w8, #0, #0x13efe0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13efe0;
L_13ef68:;
  /* 13ef68: nop  */
  /* nop: no architectural effect here */
  /* 13ef6c: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13ef70: str x8, [x2, #8] */
  arc_st64((ARC_X_R(c, 2) + INT64_C(8)), ARC_X_R(c, 8));
L_13ef74:;
  /* 13ef74: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* 13ef78: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 13ef7c: ldrb w10, [x1] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 1)));
  /* 13ef80: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 13ef84: ldr x8, [x1, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* 13ef88: csinc x0, x9, x0, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 0)) + 1)));
  /* 13ef8c: tst w10, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1)));
  /* 13ef90: csinc x1, x8, x1, ne */
  ARC_X_W(c, 1, (ARC_COND(c, 1) ? (ARC_X_R(c, 8)) : ((ARC_X_R(c, 1)) + 1)));
  /* 13ef94: bl #0x144918 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1306520));
  fn1_144918(c);
  /* 13ef98: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 13ef9c: b.ne #0x13efd0 */
  if (ARC_COND(c, 1)) goto L_13efd0;
  /* 13efa0: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1306532));
  fn1_142a58(c);
  /* 13efa4: nop  */
  /* nop: no architectural effect here */
  /* 13efa8: adr x9, #0x159208 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13efac: ldr w8, [x0] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 0)));
  /* 13efb0: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 13efb4: tbz w9, #0, #0x13f020 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_13f020;
L_13efb8:;
  /* 13efb8: nop  */
  /* nop: no architectural effect here */
  /* 13efbc: adr x9, #0x156d38 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13efc0: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 13efc4: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 13efc8: stp x8, x9, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 13efcc: bl #0x139ad0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1306576));
  fn1_139ad0(c);
L_13efd0:;
  /* 13efd0: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13efd4: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 13efd8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13efdc: ret  */
  return;
L_13efe0:;
  /* 13efe0: nop  */
  /* nop: no architectural effect here */
  /* 13efe4: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13efe8: stp x1, x0, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 13efec: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 13eff0: str x2, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 2));
  /* 13eff4: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1306616));
  fn1_1424b8(c);
  /* 13eff8: ldp x2, x1, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 13effc: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 13f000: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 13f004: cbz w8, #0x13ef68 */
  if ((ARC_W_R(c, 8)) == 0) goto L_13ef68;
  /* 13f008: nop  */
  /* nop: no architectural effect here */
  /* 13f00c: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13f010: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1306644));
  fn1_1424d0(c);
  /* 13f014: ldp x2, x1, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 13f018: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 13f01c: b #0x13ef68 */
  goto L_13ef68;
L_13f020:;
  /* 13f020: nop  */
  /* nop: no architectural effect here */
  /* 13f024: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13f028: str x8, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 8));
  /* 13f02c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1306672));
  fn1_1424b8(c);
  /* 13f030: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 13f034: cbz w0, #0x13efb8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13efb8;
  /* 13f038: nop  */
  /* nop: no architectural effect here */
  /* 13f03c: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13f040: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1306692));
  fn1_1424d0(c);
  /* 13f044: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 13f048: b #0x13efb8 */
  goto L_13efb8;
}

void fn1_1426e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248608));
  /* 1426e0: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1426e4: ldr x17, [x16, #0xf80] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3968))));
  /* 1426e8: add x16, x16, #0xf80 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3968)));
  /* 1426ec: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1426f0: nop  */
  /* nop: no architectural effect here */
  /* 1426f4: nop  */
  /* nop: no architectural effect here */
}

void fn1_142ce0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250144));
  /* 142ce0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142ce4: ldr x17, [x16, #0x180] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(384))));
  /* 142ce8: add x16, x16, #0x180 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(384)));
  /* 142cec: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142cf0: nop  */
  /* nop: no architectural effect here */
  /* 142cf4: nop  */
  /* nop: no architectural effect here */
}

void fn1_1432e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251680));
  /* 1432e0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1432e4: ldr x17, [x16, #0x380] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(896))));
  /* 1432e8: add x16, x16, #0x380 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(896)));
  /* 1432ec: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1432f0: nop  */
  /* nop: no architectural effect here */
  /* 1432f4: nop  */
  /* nop: no architectural effect here */
}

void fn1_1438e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253216));
  /* 1438e0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1438e4: ldr x17, [x16, #0x580] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1408))));
  /* 1438e8: add x16, x16, #0x580 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1408)));
  /* 1438ec: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1438f0: nop  */
  /* nop: no architectural effect here */
  /* 1438f4: nop  */
  /* nop: no architectural effect here */
}

void fn1_143ee0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254752));
  /* 143ee0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143ee4: ldr x17, [x16, #0x780] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1920))));
  /* 143ee8: add x16, x16, #0x780 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1920)));
  /* 143eec: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143ef0: nop  */
  /* nop: no architectural effect here */
  /* 143ef4: nop  */
  /* nop: no architectural effect here */
}

void fn1_1444e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256288));
  /* 1444e0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1444e4: ldr x17, [x16, #0x980] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2432))));
  /* 1444e8: add x16, x16, #0x980 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2432)));
  /* 1444ec: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1444f0: nop  */
  /* nop: no architectural effect here */
  /* 1444f4: nop  */
  /* nop: no architectural effect here */
}

void fn1_144ae0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039257824));
  /* 144ae0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144ae4: ldr x17, [x16, #0xb80] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2944))));
  /* 144ae8: add x16, x16, #0xb80 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2944)));
  /* 144aec: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144af0: nop  */
  /* nop: no architectural effect here */
  /* 144af4: nop  */
  /* nop: no architectural effect here */
}

