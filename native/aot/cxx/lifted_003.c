#include "lifted.h"

void fn1_a1090(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038587536));
  /* a1090: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a1094: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a1098: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a109c: adrp x8, #0x156000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1400832)));
  /* a10a0: adrp x9, #0x50000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(327680)));
  /* a10a4: add x9, x9, #0xe6a */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3690)));
  /* a10a8: str x9, [x8, #0xba0] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(2976)), ARC_X_R(c, 9));
  /* a10ac: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(659632));
  fn1_142488(c);
}

void fn1_a2398(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038592408));
  /* a2398: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a239c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a23a0: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* a23a4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a23a8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a23ac: bl #0x142458 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(664496));
  fn1_142458(c);
  /* a23b0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a23b4: mov w1, #8 */
  ARC_W_W(c, 1, UINT64_C(8));
  /* a23b8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* a23bc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a23c0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a23c4: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_a8400(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038617088));
  /* a8400: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a8404: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a8408: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* a840c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a8410: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a8414: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* a8418: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* a841c: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* a8420: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* a8424: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a8428: b.hi #0xa844c */
  if (ARC_COND(c, 8)) goto L_a844c;
  /* a842c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a8430: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a8434: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(689208));
  fn1_1428a8(c);
  /* a8438: cbz x0, #0xa84ac */
  if ((ARC_X_R(c, 0)) == 0) goto L_a84ac;
  /* a843c: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a8440: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a8444: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a8448: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_a844c:;
  /* a844c: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* a8450: add x0, x21, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* a8454: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a8458: add x8, x8, #0xb10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2832)));
  /* a845c: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* a8460: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a8464: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a8468: ldurh w9, [x0, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* a846c: mov w8, #0x15 */
  ARC_W_W(c, 8, UINT64_C(21));
  /* a8470: mov w11, #0x18 */
  ARC_W_W(c, 11, UINT64_C(24));
  /* a8474: strb w8, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 8));
  /* a8478: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* a847c: add x8, x8, #0x4b4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1204)));
  /* a8480: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* a8484: str x8, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 8));
  /* a8488: orr w8, w9, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* a848c: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* a8490: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* a8494: stp x11, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* a8498: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a849c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* a84a0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a84a4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a84a8: ret  */
  return;
L_a84ac:;
  /* a84ac: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(689328));
  fn1_142488(c);
}

void fn1_ae694(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038642324));
  /* ae694: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ae698: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ae69c: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* ae6a0: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ae6a4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ae6a8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ae6ac: ldr w8, [x1, #0x20] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + INT64_C(32))));
  /* ae6b0: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* ae6b4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ae6b8: cbz w8, #0xaeaec */
  if ((ARC_W_R(c, 8)) == 0) goto L_aeaec;
L_ae6bc:;
  /* ae6bc: mov w23, wzr */
  ARC_W_W(c, 23, ARC_W_R(c, 31));
L_ae6c0:;
  /* ae6c0: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* ae6c4: ldr x21, [x20, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* ae6c8: mov w10, #0x4400 */
  ARC_W_W(c, 10, UINT64_C(17408));
  /* ae6cc: lsl w24, w8, #0xa */
  ARC_W_W(c, 24, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(10)) & 31)));
  /* ae6d0: sbfx w8, w8, #0, #6 */
  ARC_W_W(c, 8, arc_sext32((((uint32_t)(ARC_W_R(c, 8)) >> 0) & UINT64_C(63)), 6));
  /* ae6d4: ldurh w11, [x21, #9] */
  ARC_W_W(c, 11, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* ae6d8: and w9, w24, #0xfc00 */
  ARC_W_W(c, 9, (ARC_W_R(c, 24) & UINT64_C(64512)));
  /* ae6dc: cmp w9, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 10));
  /* ae6e0: mov w9, #0xf */
  ARC_W_W(c, 9, UINT64_C(15));
  /* ae6e4: csel w8, w9, w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* ae6e8: lsl w9, w11, #0x1a */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 11)) << ((UINT64_C(26)) & 31)));
  /* ae6ec: cinc w8, w8, ne */
  ARC_W_W(c, 8, (ARC_COND(c, 1) ? (ARC_W_R(c, 8)) + 1 : (ARC_W_R(c, 8))));
  /* ae6f0: cmp w8, w9, asr #26 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ((uint32_t)((int32_t)(ARC_W_R(c, 9)) >> 26)));
  /* ae6f4: b.ls #0xae734 */
  if (ARC_COND(c, 9)) goto L_ae734;
  /* ae6f8: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* ae6fc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ae700: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* ae704: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* ae708: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(714508));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ae70c: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* ae710: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* ae714: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* ae718: b.eq #0xae814 */
  if (ARC_COND(c, 0)) goto L_ae814;
  /* ae71c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* ae720: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ae724: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* ae728: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* ae72c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(714544));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ae730: b #0xae814 */
  goto L_ae814;
L_ae734:;
  /* ae734: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* ae738: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* ae73c: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* ae740: add w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* ae744: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* ae748: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* ae74c: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* ae750: b.ls #0xae77c */
  if (ARC_COND(c, 9)) goto L_ae77c;
  /* ae754: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* ae758: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* ae75c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* ae760: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* ae764: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* ae768: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(714604));
  fn1_142878(c);
  /* ae76c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* ae770: cbz x0, #0xaeb84 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aeb84;
  /* ae774: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* ae778: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_ae77c:;
  /* ae77c: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* ae780: ldr x9, [x21] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 21)));
  /* ae784: mov w10, #0x28 */
  ARC_W_W(c, 10, UINT64_C(40));
  /* ae788: strb w10, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 10));
  /* ae78c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ae790: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* ae794: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* ae798: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(714652));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ae79c: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* ae7a0: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* ae7a4: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* ae7a8: b.eq #0xae7c0 */
  if (ARC_COND(c, 0)) goto L_ae7c0;
  /* ae7ac: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* ae7b0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ae7b4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* ae7b8: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* ae7bc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(714688));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ae7c0:;
  /* ae7c0: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* ae7c4: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* ae7c8: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* ae7cc: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* ae7d0: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* ae7d4: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* ae7d8: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* ae7dc: b.ls #0xae808 */
  if (ARC_COND(c, 9)) goto L_ae808;
  /* ae7e0: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* ae7e4: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* ae7e8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* ae7ec: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* ae7f0: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* ae7f4: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(714744));
  fn1_142878(c);
  /* ae7f8: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* ae7fc: cbz x0, #0xaeb88 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aeb88;
  /* ae800: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* ae804: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_ae808:;
  /* ae808: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* ae80c: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* ae810: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
L_ae814:;
  /* ae814: ldr x8, [x20, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* ae818: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* ae81c: b.ne #0xae83c */
  if (ARC_COND(c, 1)) goto L_ae83c;
  /* ae820: ldr x21, [x20, #0x18] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* ae824: ldrb w8, [x21] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 21)));
  /* ae828: cmp w8, #0x2c */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(44));
  /* ae82c: b.ne #0xae83c */
  if (ARC_COND(c, 1)) goto L_ae83c;
  /* ae830: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* ae834: mov w22, #1 */
  ARC_W_W(c, 22, UINT64_C(1));
  /* ae838: b #0xae894 */
  goto L_ae894;
L_ae83c:;
  /* ae83c: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ae840: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* ae844: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* ae848: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* ae84c: b.ls #0xae874 */
  if (ARC_COND(c, 9)) goto L_ae874;
  /* ae850: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* ae854: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* ae858: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* ae85c: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* ae860: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* ae864: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(714856));
  fn1_142878(c);
  /* ae868: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* ae86c: cbz x0, #0xaeb7c */
  if ((ARC_X_R(c, 0)) == 0) goto L_aeb7c;
  /* ae870: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_ae874:;
  /* ae874: mov w9, #0x20 */
  ARC_W_W(c, 9, UINT64_C(32));
  /* ae878: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* ae87c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* ae880: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* ae884: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* ae888: ldr x22, [x20, #0x20] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* ae88c: cbz x22, #0xae8e8 */
  if ((ARC_X_R(c, 22)) == 0) goto L_ae8e8;
  /* ae890: ldr x21, [x20, #0x18] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
L_ae894:;
  /* ae894: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* ae898: add x9, x8, x22 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ARC_X_R(c, 22)));
  /* ae89c: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* ae8a0: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* ae8a4: b.ls #0xae8cc */
  if (ARC_COND(c, 9)) goto L_ae8cc;
  /* ae8a8: lsl x8, x10, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* ae8ac: add x9, x9, #0x3e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(992)));
  /* ae8b0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ae8b4: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* ae8b8: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* ae8bc: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(714944));
  fn1_142878(c);
  /* ae8c0: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* ae8c4: cbz x0, #0xaeb80 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aeb80;
  /* ae8c8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_ae8cc:;
  /* ae8cc: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* ae8d0: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* ae8d4: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* ae8d8: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(714972));
  fn1_1449d8(c);
  /* ae8dc: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* ae8e0: add x8, x8, x22 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 22)));
  /* ae8e4: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_ae8e8:;
  /* ae8e8: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* ae8ec: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* ae8f0: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* ae8f4: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* ae8f8: b.ls #0xae920 */
  if (ARC_COND(c, 9)) goto L_ae920;
  /* ae8fc: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* ae900: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* ae904: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* ae908: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* ae90c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* ae910: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(715028));
  fn1_142878(c);
  /* ae914: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* ae918: cbz x0, #0xaeb78 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aeb78;
  /* ae91c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_ae920:;
  /* ae920: mov w9, #0x20 */
  ARC_W_W(c, 9, UINT64_C(32));
  /* ae924: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* ae928: mov w12, #0x4400 */
  ARC_W_W(c, 12, UINT64_C(17408));
  /* ae92c: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* ae930: ldr x21, [x20, #0x28] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(40))));
  /* ae934: cmp w12, w24, uxth */
  (void)arc_sub32(c, ARC_W_R(c, 12), ((uint64_t)(uint16_t)(ARC_W_R(c, 24))));
  /* ae938: add x8, x9, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* ae93c: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* ae940: ldurh w10, [x20, #9] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* ae944: ldurh w11, [x21, #9] */
  ARC_W_W(c, 11, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* ae948: sbfx w10, w10, #0, #6 */
  ARC_W_W(c, 10, arc_sext32((((uint32_t)(ARC_W_R(c, 10)) >> 0) & UINT64_C(63)), 6));
  /* ae94c: lsl w11, w11, #0x1a */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 11)) << ((UINT64_C(26)) & 31)));
  /* ae950: cinc w10, w10, eq */
  ARC_W_W(c, 10, (ARC_COND(c, 0) ? (ARC_W_R(c, 10)) + 1 : (ARC_W_R(c, 10))));
  /* ae954: cmp w10, w11, asr #26 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ((uint32_t)((int32_t)(ARC_W_R(c, 11)) >> 26)));
  /* ae958: b.ls #0xae99c */
  if (ARC_COND(c, 9)) goto L_ae99c;
  /* ae95c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* ae960: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ae964: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* ae968: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* ae96c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(715120));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ae970: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* ae974: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* ae978: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* ae97c: b.eq #0xae994 */
  if (ARC_COND(c, 0)) goto L_ae994;
  /* ae980: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* ae984: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ae988: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* ae98c: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* ae990: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(715156));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ae994:;
  /* ae994: cbnz w23, #0xaea80 */
  if ((ARC_W_R(c, 23)) != 0) goto L_aea80;
  /* ae998: b #0xaead4 */
  goto L_aead4;
L_ae99c:;
  /* ae99c: ldr w12, [x19, #0x20] */
  ARC_W_W(c, 12, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* ae9a0: ldr x11, [x19, #0x10] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* ae9a4: add x10, x9, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* ae9a8: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* ae9ac: add w12, w12, #1 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) + UINT64_C(1)));
  /* ae9b0: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* ae9b4: str w12, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 12));
  /* ae9b8: b.ls #0xae9e4 */
  if (ARC_COND(c, 9)) goto L_ae9e4;
  /* ae9bc: lsl x8, x11, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 11)) << ((UINT64_C(1)) & 63)));
  /* ae9c0: add x9, x9, #0x3e2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(994)));
  /* ae9c4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ae9c8: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* ae9cc: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* ae9d0: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(715220));
  fn1_142878(c);
  /* ae9d4: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* ae9d8: cbz x0, #0xaeb8c */
  if ((ARC_X_R(c, 0)) == 0) goto L_aeb8c;
  /* ae9dc: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* ae9e0: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
L_ae9e4:;
  /* ae9e4: ldr x9, [x21] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 21)));
  /* ae9e8: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* ae9ec: mov w10, #0x28 */
  ARC_W_W(c, 10, UINT64_C(40));
  /* ae9f0: strb w10, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 10));
  /* ae9f4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ae9f8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* ae9fc: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* aea00: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(715268));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* aea04: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* aea08: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* aea0c: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* aea10: b.eq #0xaea28 */
  if (ARC_COND(c, 0)) goto L_aea28;
  /* aea14: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* aea18: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* aea1c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* aea20: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* aea24: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(715304));
  arc_dispatch(c, ARC_X_R(c, 8));
L_aea28:;
  /* aea28: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* aea2c: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* aea30: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* aea34: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* aea38: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* aea3c: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* aea40: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* aea44: b.ls #0xaea70 */
  if (ARC_COND(c, 9)) goto L_aea70;
  /* aea48: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* aea4c: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* aea50: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* aea54: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* aea58: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* aea5c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(715360));
  fn1_142878(c);
  /* aea60: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* aea64: cbz x0, #0xaeb90 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aeb90;
  /* aea68: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* aea6c: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_aea70:;
  /* aea70: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* aea74: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* aea78: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* aea7c: cbz w23, #0xaead4 */
  if ((ARC_W_R(c, 23)) == 0) goto L_aead4;
L_aea80:;
  /* aea80: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* aea84: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* aea88: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* aea8c: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* aea90: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* aea94: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* aea98: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* aea9c: b.ls #0xaeac8 */
  if (ARC_COND(c, 9)) goto L_aeac8;
  /* aeaa0: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* aeaa4: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* aeaa8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* aeaac: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* aeab0: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* aeab4: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(715448));
  fn1_142878(c);
  /* aeab8: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* aeabc: cbz x0, #0xaeb94 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aeb94;
  /* aeac0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* aeac4: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_aeac8:;
  /* aeac8: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* aeacc: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* aead0: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
L_aead4:;
  /* aead4: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* aead8: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* aeadc: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* aeae0: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* aeae4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* aeae8: ret  */
  return;
L_aeaec:;
  /* aeaec: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* aeaf0: cmp x9, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(2));
  /* aeaf4: b.eq #0xaeb10 */
  if (ARC_COND(c, 0)) goto L_aeb10;
  /* aeaf8: cmp x9, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(1));
  /* aeafc: b.ne #0xae6bc */
  if (ARC_COND(c, 1)) goto L_ae6bc;
  /* aeb00: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* aeb04: cmp w8, #0x3e */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(62));
  /* aeb08: b.ne #0xae6bc */
  if (ARC_COND(c, 1)) goto L_ae6bc;
  /* aeb0c: b #0xaeb20 */
  goto L_aeb20;
L_aeb10:;
  /* aeb10: ldrh w8, [x8] */
  ARC_W_W(c, 8, arc_ld16(ARC_X_R(c, 8)));
  /* aeb14: mov w9, #0x3e3e */
  ARC_W_W(c, 9, UINT64_C(15934));
  /* aeb18: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* aeb1c: b.ne #0xae6bc */
  if (ARC_COND(c, 1)) goto L_ae6bc;
L_aeb20:;
  /* aeb20: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* aeb24: mov w11, #1 */
  ARC_W_W(c, 11, UINT64_C(1));
  /* aeb28: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* aeb2c: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* aeb30: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* aeb34: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* aeb38: b.ls #0xaeb64 */
  if (ARC_COND(c, 9)) goto L_aeb64;
  /* aeb3c: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* aeb40: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* aeb44: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* aeb48: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* aeb4c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* aeb50: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(715604));
  fn1_142878(c);
  /* aeb54: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* aeb58: cbz x0, #0xaeb98 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aeb98;
  /* aeb5c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* aeb60: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_aeb64:;
  /* aeb64: mov w23, #1 */
  ARC_W_W(c, 23, UINT64_C(1));
  /* aeb68: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* aeb6c: mov w9, #0x28 */
  ARC_W_W(c, 9, UINT64_C(40));
  /* aeb70: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* aeb74: b #0xae6c0 */
  goto L_ae6c0;
L_aeb78:;
  /* aeb78: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(715644));
  fn1_1427b8(c);
L_aeb7c:;
  /* aeb7c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(715648));
  fn1_1427b8(c);
L_aeb80:;
  /* aeb80: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(715652));
  fn1_1427b8(c);
L_aeb84:;
  /* aeb84: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(715656));
  fn1_1427b8(c);
L_aeb88:;
  /* aeb88: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(715660));
  fn1_1427b8(c);
L_aeb8c:;
  /* aeb8c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(715664));
  fn1_1427b8(c);
L_aeb90:;
  /* aeb90: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(715668));
  fn1_1427b8(c);
L_aeb94:;
  /* aeb94: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(715672));
  fn1_1427b8(c);
L_aeb98:;
  /* aeb98: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(715676));
  fn1_1427b8(c);
}

void fn1_b37e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038663136));
  /* b37e0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b37e4: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b37e8: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b37ec: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b37f0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b37f4: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* b37f8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b37fc: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b3800: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b3804: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b3808: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b380c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(735248));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b3810: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* b3814: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b3818: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b381c: b.eq #0xb3834 */
  if (ARC_COND(c, 0)) goto L_b3834;
  /* b3820: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b3824: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b3828: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b382c: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b3830: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(735284));
  arc_dispatch(c, ARC_X_R(c, 8));
L_b3834:;
  /* b3834: ldr x8, [x20, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(40))));
  /* b3838: cbz x8, #0xb38c4 */
  if ((ARC_X_R(c, 8)) == 0) goto L_b38c4;
  /* b383c: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b3840: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b3844: add x10, x8, #0xa */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(10)));
  /* b3848: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b384c: b.ls #0xb3874 */
  if (ARC_COND(c, 9)) goto L_b3874;
  /* b3850: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b3854: add x8, x8, #0x3ea */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1002)));
  /* b3858: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b385c: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b3860: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b3864: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(735336));
  fn1_142878(c);
  /* b3868: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b386c: cbz x0, #0xb38fc */
  if ((ARC_X_R(c, 0)) == 0) goto L_b38fc;
  /* b3870: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b3874:;
  /* b3874: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* b3878: add x9, x9, #0x30b */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(779)));
  /* b387c: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b3880: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* b3884: mov w10, #0x2073 */
  ARC_W_W(c, 10, UINT64_C(8307));
  /* b3888: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b388c: strh w10, [x8, #8] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 10));
  /* b3890: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b3894: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b3898: ldr x20, [x20, #0x28] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(40))));
  /* b389c: add x8, x8, #0xa */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(10)));
  /* b38a0: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* b38a4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b38a8: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b38ac: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* b38b0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(735412));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b38b4: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b38b8: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b38bc: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b38c0: b.ne #0xb38d8 */
  if (ARC_COND(c, 1)) goto L_b38d8;
L_b38c4:;
  /* b38c4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b38c8: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b38cc: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b38d0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b38d4: ret  */
  return;
L_b38d8:;
  /* b38d8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b38dc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b38e0: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b38e4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b38e8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b38ec: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b38f0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b38f4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b38f8: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_b38fc:;
  /* b38fc: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(735488));
  fn1_1427b8(c);
}

void fn1_b7574(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038678900));
  /* b7574: bti c */
  /* bti: no architectural effect here */
  /* b7578: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* b757c: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b9edc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038689500));
  /* b9edc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b9ee0: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b9ee4: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b9ee8: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b9eec: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b9ef0: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* b9ef4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b9ef8: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* b9efc: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* b9f00: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b9f04: b.hi #0xb9f28 */
  if (ARC_COND(c, 8)) goto L_b9f28;
  /* b9f08: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b9f0c: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b9f10: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(761620));
  fn1_1428a8(c);
  /* b9f14: cbz x0, #0xb9f84 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b9f84;
  /* b9f18: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b9f1c: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b9f20: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b9f24: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_b9f28:;
  /* b9f28: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* b9f2c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b9f30: add x20, x21, x8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* b9f34: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* b9f38: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(761660));
  fn1_142860(c);
  /* b9f3c: adrp x9, #0x149000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1347584)));
  /* b9f40: add x9, x9, #0xc10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3088)));
  /* b9f44: mov w11, #0x540 */
  ARC_W_W(c, 11, UINT64_C(1344));
  /* b9f48: str x9, [x20, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* b9f4c: ldurh w9, [x20, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b9f50: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* b9f54: mov w10, #8 */
  ARC_W_W(c, 10, UINT64_C(8));
  /* b9f58: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* b9f5c: strb w10, [x20, #8] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(8)), ARC_W_R(c, 10));
  /* b9f60: orr w9, w9, w11 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 11)));
  /* b9f64: stp x19, x8, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* b9f68: sturh w9, [x20, #9] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(9)), ARC_W_R(c, 9));
  /* b9f6c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b9f70: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b9f74: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b9f78: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b9f7c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b9f80: ret  */
  return;
L_b9f84:;
  /* b9f84: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(761736));
  fn1_142488(c);
}

void fn1_bd66c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038703724));
  /* bd66c: bti c */
  /* bti: no architectural effect here */
  /* bd670: ret  */
  return;
}

void fn1_c8980(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038749568));
  /* c8980: bti c */
  /* bti: no architectural effect here */
  /* c8984: sub x9, x1, x0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* c8988: mov w8, #0x7e */
  ARC_W_W(c, 8, UINT64_C(126));
  /* c898c: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* c8990: asr x9, x9, #2 */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(2)) & 63))));
  /* c8994: clz x9, x9 */
  ARC_X_W(c, 9, arc_clz64(ARC_X_R(c, 9)));
  /* c8998: sub x2, x8, x9, lsl #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) - ((uint64_t)(ARC_X_R(c, 9)) << 1)));
  /* c899c: b #0xc89a0 */
  fn1_c89a0(c); return;
}

void fn1_d7354(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038809428));
  /* d7354: bti c */
  /* bti: no architectural effect here */
  /* d7358: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* d735c: ldr x8, [x8, #0x9f0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2544))));
  /* d7360: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* d7364: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* d7368: ret  */
  return;
}

void fn1_db25c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038825564));
  /* db25c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* db260: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* db264: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* db268: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* db26c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* db270: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* db274: ldr x8, [x8, #0x910] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2320))));
  /* db278: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* db27c: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* db280: mov w0, #0x2e */
  ARC_W_W(c, 0, UINT64_C(46));
  /* db284: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(897672));
  fn1_1428f0(c);
  /* db288: nop  */
  /* nop: no architectural effect here */
  /* db28c: adr x8, #0x51d0a */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335114)));
  /* db290: mov w9, #0x15 */
  ARC_W_W(c, 9, UINT64_C(21));
  /* db294: ldr q0, [x8] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 8)), arc_ld64(ARC_X_R(c, 8) + 8));
  /* db298: str wzr, [x0, #0x10] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(16)), ARC_W_R(c, 31));
  /* db29c: ldur x8, [x8, #0xe] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(14))));
  /* db2a0: stur q0, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)) + 8, (c)->q[0].u64[1]);
  /* db2a4: dup v0.2d, x9 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 9));
    _t.u64[1] = (ARC_X_R(c, 9));
    (c)->q[0] = _t; }
  /* db2a8: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* db2ac: ldr x9, [x9, #0x950] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2384))));
  /* db2b0: stur x8, [x0, #0x26] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(38)), ARC_X_R(c, 8));
  /* db2b4: add x8, x0, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* db2b8: add x9, x9, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* db2bc: str q0, [x0] */
  arc_st64(ARC_X_R(c, 0), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 0) + 8, (c)->q[0].u64[1]);
  /* db2c0: stp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* db2c4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* db2c8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* db2cc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* db2d0: ret  */
  return;
}

void fn1_dc428(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038830120));
  /* dc428: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* dc42c: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* dc430: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* dc434: nop  */
  /* nop: no architectural effect here */
  /* dc438: adr x0, #0x157e50 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1408592)));
  /* dc43c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(902208));
  fn1_142518(c);
  /* dc440: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* dc444: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* dc448: ldr x8, [x8, #0xa38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2616))));
  /* dc44c: str w9, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* dc450: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* dc454: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* dc458: ret  */
  return;
}

void fn1_e1784(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038851460));
  /* e1784: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e1788: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e178c: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e1790: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e1794: ldrb w8, [x3] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 3)));
  /* e1798: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* e179c: ldr x13, [x0, #8] */
  ARC_X_W(c, 13, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* e17a0: ldp x11, x10, [x3, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 3) + INT64_C(8));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* e17a4: lsr x12, x8, #1 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e17a8: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e17ac: lsr x14, x9, #1 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* e17b0: csinc x8, x10, x3, ne */
  ARC_X_W(c, 8, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 3)) + 1)));
  /* e17b4: csel x10, x12, x11, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* e17b8: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e17bc: csel x11, x14, x13, eq */
  ARC_X_W(c, 11, (ARC_COND(c, 0) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 13)));
  /* e17c0: subs x11, x11, x1 */
  ARC_X_W(c, 11, arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 1)));
  /* e17c4: b.lo #0xe1828 */
  if (ARC_COND(c, 3)) goto L_e1828;
  /* e17c8: cmp x11, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 2));
  /* e17cc: csel x19, x11, x2, lo */
  ARC_X_W(c, 19, (ARC_COND(c, 3) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 2)));
  /* e17d0: subs x10, x10, x4 */
  ARC_X_W(c, 10, arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 4)));
  /* e17d4: b.lo #0xe1828 */
  if (ARC_COND(c, 3)) goto L_e1828;
  /* e17d8: ldr x11, [x0, #0x10] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e17dc: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e17e0: csinc x9, x11, x0, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 0)) + 1)));
  /* e17e4: cmp x10, x5 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 5));
  /* e17e8: csel x20, x10, x5, lo */
  ARC_X_W(c, 20, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 5)));
  /* e17ec: add x0, x9, x1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) + ARC_X_R(c, 1)));
  /* e17f0: add x1, x8, x4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + ARC_X_R(c, 4)));
  /* e17f4: cmp x20, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 19));
  /* e17f8: csel x2, x20, x19, lo */
  ARC_X_W(c, 2, (ARC_COND(c, 3) ? (ARC_X_R(c, 20)) : ARC_X_R(c, 19)));
  /* e17fc: bl #0x142890 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(923648));
  fn1_142890(c);
  /* e1800: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* e1804: mov w8, #-1 */
  ARC_W_W(c, 8, UINT64_C(18446744073709551615));
  /* e1808: cneg w8, w8, hs */
  ARC_W_W(c, 8, (ARC_COND(c, 2) ? ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 8))) : (ARC_W_R(c, 8))));
  /* e180c: csel w8, wzr, w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? (ARC_W_R(c, 31)) : ARC_W_R(c, 8)));
  /* e1810: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* e1814: csel w0, w0, w8, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? (ARC_W_R(c, 0)) : ARC_W_R(c, 8)));
  /* e1818: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e181c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e1820: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e1824: ret  */
  return;
L_e1828:;
  /* e1828: adrp x0, #0x50000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(327680)));
  /* e182c: add x0, x0, #0xc97 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3223)));
  /* e1830: bl #0xda038 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(923700));
  fn1_da038(c);
}

void fn1_e41c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038862272));
  /* e41c0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e41c4: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e41c8: stp x26, x25, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* e41cc: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e41d0: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e41d4: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e41d8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e41dc: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* e41e0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e41e4: mov x23, x8 */
  ARC_X_W(c, 23, ARC_X_R(c, 8));
  /* e41e8: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(934380));
  fn1_142860(c);
  /* e41ec: ldrb w25, [x19] */
  ARC_W_W(c, 25, arc_ld8(ARC_X_R(c, 19)));
  /* e41f0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* e41f4: lsr x9, x25, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 25)) >> ((UINT64_C(1)) & 63)));
  /* e41f8: tst w25, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 25) & UINT64_C(1)));
  /* e41fc: csel x20, x9, x8, eq */
  ARC_X_W(c, 20, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* e4200: add x26, x20, x0 */
  ARC_X_W(c, 26, (ARC_X_R(c, 20) + ARC_X_R(c, 0)));
  /* e4204: cmn x26, #8 */
  (void)arc_add64(c, ARC_X_R(c, 26), UINT64_C(8), 0);
  /* e4208: b.hs #0xe42b4 */
  if (ARC_COND(c, 2)) goto L_e42b4;
  /* e420c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* e4210: cmp x26, #0x16 */
  (void)arc_sub64(c, ARC_X_R(c, 26), UINT64_C(22));
  /* e4214: b.hi #0xe4230 */
  if (ARC_COND(c, 8)) goto L_e4230;
  /* e4218: lsl w8, w26, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 26)) << ((UINT64_C(1)) & 31)));
  /* e421c: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* e4220: stp xzr, xzr, [x23] */
  { const uint64_t _pa = ARC_X_R(c, 23);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* e4224: str xzr, [x23, #0x10] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(16)), ARC_X_R(c, 31));
  /* e4228: strb w8, [x23] */
  arc_st8(ARC_X_R(c, 23), ARC_W_R(c, 8));
  /* e422c: b #0xe4258 */
  goto L_e4258;
L_e4230:;
  /* e4230: orr x8, x26, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 26) | UINT64_C(7)));
  /* e4234: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* e4238: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* e423c: csinc x24, x9, x8, eq */
  ARC_X_W(c, 24, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* e4240: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* e4244: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(934472));
  fn1_1428f0(c);
  /* e4248: orr x8, x24, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) | UINT64_C(1)));
  /* e424c: stp x26, x0, [x23, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* e4250: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* e4254: and w8, w8, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(255)));
L_e4258:;
  /* e4258: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e425c: csinc x23, x0, x23, ne */
  ARC_X_W(c, 23, (ARC_COND(c, 1) ? (ARC_X_R(c, 0)) : ((ARC_X_R(c, 23)) + 1)));
  /* e4260: cbz x22, #0xe4274 */
  if ((ARC_X_R(c, 22)) == 0) goto L_e4274;
  /* e4264: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* e4268: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* e426c: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* e4270: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(934516));
  fn1_1449d8(c);
L_e4274:;
  /* e4274: add x21, x23, x22 */
  ARC_X_W(c, 21, (ARC_X_R(c, 23) + ARC_X_R(c, 22)));
  /* e4278: cbz x20, #0xe4294 */
  if ((ARC_X_R(c, 20)) == 0) goto L_e4294;
  /* e427c: ldr x8, [x19, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* e4280: tst w25, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 25) & UINT64_C(1)));
  /* e4284: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e4288: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* e428c: csinc x1, x8, x19, ne */
  ARC_X_W(c, 1, (ARC_COND(c, 1) ? (ARC_X_R(c, 8)) : ((ARC_X_R(c, 19)) + 1)));
  /* e4290: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(934548));
  fn1_1449f0(c);
L_e4294:;
  /* e4294: strb wzr, [x21, x20] */
  arc_st8((ARC_X_R(c, 21) + ARC_X_R(c, 20)), ARC_W_R(c, 31));
  /* e4298: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e429c: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e42a0: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e42a4: ldp x26, x25, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* e42a8: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e42ac: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e42b0: ret  */
  return;
L_e42b4:;
  /* e42b4: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(934584));
  fn1_d7d54(c);
}

void fn1_e8958(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038880600));
  /* e8958: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e895c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e8960: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* e8964: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e8968: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e896c: stp xzr, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* e8970: cbz x1, #0xe89a8 */
  if ((ARC_X_R(c, 1)) == 0) goto L_e89a8;
  /* e8974: lsr x8, x1, #0x3d */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 1)) >> ((UINT64_C(61)) & 63)));
  /* e8978: cbnz x8, #0xe89bc */
  if ((ARC_X_R(c, 8)) != 0) goto L_e89bc;
  /* e897c: lsl x20, x1, #3 */
  ARC_X_W(c, 20, ((uint64_t)(ARC_X_R(c, 1)) << ((UINT64_C(3)) & 63)));
  /* e8980: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e8984: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e8988: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(952716));
  fn1_1428f0(c);
  /* e898c: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* e8990: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* e8994: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e8998: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* e899c: bl #0x144a20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(952736));
  fn1_144a20(c);
  /* e89a0: add x8, x21, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) + ARC_X_R(c, 20)));
  /* e89a4: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_e89a8:;
  /* e89a8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e89ac: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* e89b0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e89b4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e89b8: ret  */
  return;
L_e89bc:;
  /* e89bc: bl #0xd9fe8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(952768));
  fn1_d9fe8(c);
}

void fn1_ead74(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038889844));
  /* ead74: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ead78: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ead7c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ead80: bl #0x143220 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961924));
  fn1_143220(c);
  /* ead84: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ead88: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ead8c: ret  */
  return;
  /* ead90: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961940));
  fn1_a1454(c);
}

void fn1_ec720(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038896416));
  /* ec720: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ec724: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* ec728: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ec72c: str x21, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 21));
  /* ec730: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ec734: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* ec738: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ec73c: str xzr, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 31));
  /* ec740: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* ec744: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* ec748: mov w2, #0xa0 */
  ARC_W_W(c, 2, UINT64_C(160));
  /* ec74c: bl #0x142818 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(968528));
  fn1_142818(c);
  /* ec750: ldr x20, [sp] */
  ARC_X_W(c, 20, arc_ld64((c)->sp));
  /* ec754: cbnz x20, #0xec76c */
  if ((ARC_X_R(c, 20)) != 0) goto L_ec76c;
  /* ec758: mov w0, #0xa0 */
  ARC_W_W(c, 0, UINT64_C(160));
  /* ec75c: bl #0xa24dc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(968544));
  fn1_a24dc(c);
  /* ec760: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ec764: cbnz x0, #0xec76c */
  if ((ARC_X_R(c, 0)) != 0) goto L_ec76c;
  /* ec768: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(968556));
  fn1_142488(c);
L_ec76c:;
  /* ec76c: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* ec770: mov x21, x20 */
  ARC_X_W(c, 21, ARC_X_R(c, 20));
  /* ec774: nop  */
  /* nop: no architectural effect here */
  /* ec778: adr x8, #0x15d260 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1430112)));
  /* ec77c: str q0, [x20, #0x90] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(144)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(144)) + 8, (c)->q[0].u64[1]);
  /* ec780: stp q0, q0, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* ec784: stp q0, q0, [x20, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* ec788: stp q0, q0, [x20, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(64));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* ec78c: stp q0, q0, [x20, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(96));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* ec790: str q0, [x21, #0x80]! */
  arc_st64((ARC_X_R(c, 21) + INT64_C(128)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 21) + INT64_C(128)) + 8, (c)->q[0].u64[1]);
  ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(128));
  /* ec794: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* ec798: tbz w8, #0, #0xec7d4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_ec7d4;
L_ec79c:;
  /* ec79c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* ec7a0: nop  */
  /* nop: no architectural effect here */
  /* ec7a4: adr x9, #0x156d50 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404240)));
  /* ec7a8: stp x8, x9, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* ec7ac: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* ec7b0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ec7b4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* ec7b8: bl #0x143418 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(968636));
  fn1_143418(c);
  /* ec7bc: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* ec7c0: adrp x2, #0x151000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1380352)));
  /* ec7c4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ec7c8: ldr x1, [x1, #0xa98] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2712))));
  /* ec7cc: ldr x2, [x2, #0xaa0] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 2) + INT64_C(2720))));
  /* ec7d0: bl #0x142440 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(968660));
  fn1_142440(c);
L_ec7d4:;
  /* ec7d4: nop  */
  /* nop: no architectural effect here */
  /* ec7d8: adr x0, #0x15d260 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1430112)));
  /* ec7dc: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(968672));
  fn1_1424b8(c);
  /* ec7e0: cbz w0, #0xec79c */
  if ((ARC_W_R(c, 0)) == 0) goto L_ec79c;
  /* ec7e4: nop  */
  /* nop: no architectural effect here */
  /* ec7e8: adr x0, #0x15d260 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1430112)));
  /* ec7ec: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(968688));
  fn1_1424d0(c);
  /* ec7f0: b #0xec79c */
  goto L_ec79c;
  /* ec7f4: nop  */
  /* nop: no architectural effect here */
  /* ec7f8: adr x8, #0x1576e0 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1406688)));
  /* ec7fc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ec800: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* ec804: b.lo #0xec828 */
  if (ARC_COND(c, 3)) goto L_ec828;
  /* ec808: adrp x8, #0x157000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404928)));
  /* ec80c: add x8, x8, #0x8e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2272)));
  /* ec810: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* ec814: b.hs #0xec828 */
  if (ARC_COND(c, 2)) goto L_ec828;
  /* ec818: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ec81c: bl #0xa2664 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(968736));
  fn1_a2664(c);
  /* ec820: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ec824: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(968744));
  fn1_9cc20(c);
L_ec828:;
  /* ec828: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ec82c: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(968752));
  fn1_142800(c);
  /* ec830: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ec834: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(968760));
  fn1_9cc20(c);
  /* ec838: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(968764));
  fn1_a1454(c);
  /* ec83c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(968768));
  fn1_a1454(c);
}

void fn1_ee320(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038903584));
  /* ee320: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ee324: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* ee328: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ee32c: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ee330: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ee334: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* ee338: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ee33c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* ee340: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* ee344: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* ee348: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* ee34c: stur wzr, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 31));
  /* ee350: bl #0x1435f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(975700));
  fn1_1435f8(c);
  /* ee354: ldurb w8, [x29, #-8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-8))));
  /* ee358: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* ee35c: b.ne #0xee464 */
  if (ARC_COND(c, 1)) goto L_ee464;
  /* ee360: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ee364: nop  */
  /* nop: no architectural effect here */
  /* ee368: adr x22, #0x15dc40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432640)));
  /* ee36c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ee370: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ee374: ldr x21, [x8, #0x30] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* ee378: cmp x21, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 22));
  /* ee37c: str x21, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 21));
  /* ee380: b.eq #0xee390 */
  if (ARC_COND(c, 0)) goto L_ee390;
  /* ee384: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* ee388: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ee38c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(975760));
  fn1_db2e0(c);
L_ee390:;
  /* ee390: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* ee394: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* ee398: ldr x1, [x1, #0xb48] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2888))));
  /* ee39c: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(975776));
  fn1_143748(c);
  /* ee3a0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ee3a4: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* ee3a8: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ee3ac: add x3, x19, x8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ee3b0: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* ee3b4: ldr x1, [x3, #0x28] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 3) + INT64_C(40))));
  /* ee3b8: sub x4, x29, #4 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* ee3bc: add x5, sp, #0x10 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(16)));
  /* ee3c0: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* ee3c4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(975816));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ee3c8: cmp x21, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 22));
  /* ee3cc: b.eq #0xee3f0 */
  if (ARC_COND(c, 0)) goto L_ee3f0;
  /* ee3d0: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* ee3d4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ee3d8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(975836));
  fn1_bd950(c);
  /* ee3dc: cbnz x0, #0xee3f0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_ee3f0;
  /* ee3e0: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* ee3e4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ee3e8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ee3ec: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(975856));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ee3f0:;
  /* ee3f0: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* ee3f4: mov x9, #-0x8001 */
  ARC_X_W(c, 9, UINT64_C(18446744073709518847));
  /* ee3f8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ee3fc: b.gt #0xee40c */
  if (ARC_COND(c, 12)) goto L_ee40c;
  /* ee400: ldur w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* ee404: mov w9, #0x8000 */
  ARC_W_W(c, 9, UINT64_C(32768));
  /* ee408: b #0xee41c */
  goto L_ee41c;
L_ee40c:;
  /* ee40c: cmp x8, #8, lsl #12 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(32768));
  /* ee410: b.lt #0xee42c */
  if (ARC_COND(c, 11)) goto L_ee42c;
  /* ee414: ldur w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* ee418: mov w9, #0x7fff */
  ARC_W_W(c, 9, UINT64_C(32767));
L_ee41c:;
  /* ee41c: orr w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* ee420: stur w8, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 8));
  /* ee424: strh w9, [x20] */
  arc_st16(ARC_X_R(c, 20), ARC_W_R(c, 9));
  /* ee428: b #0xee430 */
  goto L_ee430;
L_ee42c:;
  /* ee42c: strh w8, [x20] */
  arc_st16(ARC_X_R(c, 20), ARC_W_R(c, 8));
L_ee430:;
  /* ee430: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ee434: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* ee438: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ee43c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ee440: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* ee444: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* ee448: ldp w11, w9, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* ee44c: orr w10, w11, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* ee450: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* ee454: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* ee458: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* ee45c: str w10, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 10));
  /* ee460: b.ne #0xee480 */
  if (ARC_COND(c, 1)) goto L_ee480;
L_ee464:;
  /* ee464: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ee468: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ee46c: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ee470: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ee474: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* ee478: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ee47c: ret  */
  return;
L_ee480:;
  /* ee480: nop  */
  /* nop: no architectural effect here */
  /* ee484: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* ee488: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(976012));
  fn1_ec720(c);
  /* ee48c: cmp x21, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 22));
  /* ee490: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ee494: b.eq #0xee4b8 */
  if (ARC_COND(c, 0)) goto L_ee4b8;
  /* ee498: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* ee49c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ee4a0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(976036));
  fn1_bd950(c);
  /* ee4a4: cbnz x0, #0xee4b8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_ee4b8;
  /* ee4a8: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* ee4ac: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ee4b0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ee4b4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(976056));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ee4b8:;
  /* ee4b8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ee4bc: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(976064));
  fn1_142548(c);
  /* ee4c0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ee4c4: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* ee4c8: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ee4cc: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* ee4d0: stur w10, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 10));
  /* ee4d4: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* ee4d8: ldr w11, [x9, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* ee4dc: orr w11, w11, w10 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* ee4e0: str w11, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 11));
  /* ee4e4: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ee4e8: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ee4ec: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* ee4f0: tbnz w8, #0, #0xee4fc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_ee4fc;
  /* ee4f4: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(976120));
  fn1_142980(c);
  /* ee4f8: b #0xee430 */
  goto L_ee430;
L_ee4fc:;
  /* ee4fc: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(976128));
  fn1_1429b0(c);
  /* ee500: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ee504: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(976136));
  fn1_142980(c);
  /* ee508: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ee50c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(976144));
  fn1_9cc20(c);
  /* ee510: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(976148));
  fn1_a1454(c);
}

void fn1_f37a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038925224));
  /* f37a8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f37ac: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f37b0: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f37b4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f37b8: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f37bc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f37c0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f37c4: ldr x8, [x8, #0xaf8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2808))));
  /* f37c8: str xzr, [x0, #0x48] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(72)), ARC_X_R(c, 31));
  /* f37cc: add x9, x8, #0x40 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* f37d0: add x8, x8, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* f37d4: str x9, [x20, #0x18]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(24));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* f37d8: stp x8, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* f37dc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f37e0: bl #0x1433d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(997348));
  fn1_1433d0(c);
  /* f37e4: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f37e8: mov w9, #-1 */
  ARC_W_W(c, 9, UINT64_C(18446744073709551615));
  /* f37ec: ldr x8, [x8, #0xac0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2752))));
  /* f37f0: str w9, [x19, #0xa8] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(168)), ARC_W_R(c, 9));
  /* f37f4: str xzr, [x19, #0xa0] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(160)), ARC_X_R(c, 31));
  /* f37f8: add x9, x8, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* f37fc: add x10, x8, #0x68 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(104)));
  /* f3800: add x8, x8, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* f3804: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* f3808: str x10, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 10));
  /* f380c: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* f3810: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f3814: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f3818: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f381c: ret  */
  return;
}

void fn1_f4d54(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038930772));
  /* f4d54: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f4d58: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* f4d5c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f4d60: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f4d64: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f4d68: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* f4d6c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f4d70: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* f4d74: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* f4d78: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f4d7c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* f4d80: stur wzr, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 31));
  /* f4d84: bl #0x143670 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1002888));
  fn1_143670(c);
  /* f4d88: ldurb w8, [x29, #-8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-8))));
  /* f4d8c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f4d90: b.ne #0xf4e98 */
  if (ARC_COND(c, 1)) goto L_f4e98;
  /* f4d94: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f4d98: nop  */
  /* nop: no architectural effect here */
  /* f4d9c: adr x22, #0x15dc40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f4da0: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f4da4: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f4da8: ldr x21, [x8, #0x30] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f4dac: cmp x21, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 22));
  /* f4db0: str x21, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 21));
  /* f4db4: b.eq #0xf4dc4 */
  if (ARC_COND(c, 0)) goto L_f4dc4;
  /* f4db8: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* f4dbc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f4dc0: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1002948));
  fn1_db2e0(c);
L_f4dc4:;
  /* f4dc4: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f4dc8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f4dcc: ldr x1, [x1, #0xb60] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2912))));
  /* f4dd0: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1002964));
  fn1_143748(c);
  /* f4dd4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f4dd8: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* f4ddc: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f4de0: add x3, x19, x8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f4de4: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* f4de8: ldr x1, [x3, #0x28] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 3) + INT64_C(40))));
  /* f4dec: sub x4, x29, #4 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* f4df0: add x5, sp, #0x10 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(16)));
  /* f4df4: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* f4df8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1003004));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f4dfc: cmp x21, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 22));
  /* f4e00: b.eq #0xf4e24 */
  if (ARC_COND(c, 0)) goto L_f4e24;
  /* f4e04: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* f4e08: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f4e0c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1003024));
  fn1_bd950(c);
  /* f4e10: cbnz x0, #0xf4e24 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f4e24;
  /* f4e14: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* f4e18: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f4e1c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f4e20: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1003044));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f4e24:;
  /* f4e24: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* f4e28: mov x9, #-0x8001 */
  ARC_X_W(c, 9, UINT64_C(18446744073709518847));
  /* f4e2c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* f4e30: b.gt #0xf4e40 */
  if (ARC_COND(c, 12)) goto L_f4e40;
  /* f4e34: ldur w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* f4e38: mov w9, #0x8000 */
  ARC_W_W(c, 9, UINT64_C(32768));
  /* f4e3c: b #0xf4e50 */
  goto L_f4e50;
L_f4e40:;
  /* f4e40: cmp x8, #8, lsl #12 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(32768));
  /* f4e44: b.lt #0xf4e60 */
  if (ARC_COND(c, 11)) goto L_f4e60;
  /* f4e48: ldur w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* f4e4c: mov w9, #0x7fff */
  ARC_W_W(c, 9, UINT64_C(32767));
L_f4e50:;
  /* f4e50: orr w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* f4e54: stur w8, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 8));
  /* f4e58: strh w9, [x20] */
  arc_st16(ARC_X_R(c, 20), ARC_W_R(c, 9));
  /* f4e5c: b #0xf4e64 */
  goto L_f4e64;
L_f4e60:;
  /* f4e60: strh w8, [x20] */
  arc_st16(ARC_X_R(c, 20), ARC_W_R(c, 8));
L_f4e64:;
  /* f4e64: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f4e68: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* f4e6c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f4e70: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f4e74: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f4e78: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* f4e7c: ldp w11, w9, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* f4e80: orr w10, w11, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* f4e84: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* f4e88: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* f4e8c: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* f4e90: str w10, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 10));
  /* f4e94: b.ne #0xf4eb4 */
  if (ARC_COND(c, 1)) goto L_f4eb4;
L_f4e98:;
  /* f4e98: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f4e9c: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f4ea0: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f4ea4: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f4ea8: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* f4eac: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f4eb0: ret  */
  return;
L_f4eb4:;
  /* f4eb4: nop  */
  /* nop: no architectural effect here */
  /* f4eb8: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f4ebc: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1003200));
  fn1_ec720(c);
  /* f4ec0: cmp x21, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 22));
  /* f4ec4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f4ec8: b.eq #0xf4eec */
  if (ARC_COND(c, 0)) goto L_f4eec;
  /* f4ecc: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* f4ed0: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f4ed4: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1003224));
  fn1_bd950(c);
  /* f4ed8: cbnz x0, #0xf4eec */
  if ((ARC_X_R(c, 0)) != 0) goto L_f4eec;
  /* f4edc: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* f4ee0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f4ee4: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f4ee8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1003244));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f4eec:;
  /* f4eec: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f4ef0: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1003252));
  fn1_142548(c);
  /* f4ef4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f4ef8: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* f4efc: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f4f00: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* f4f04: stur w10, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 10));
  /* f4f08: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f4f0c: ldr w11, [x9, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f4f10: orr w11, w11, w10 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* f4f14: str w11, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 11));
  /* f4f18: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f4f1c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f4f20: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f4f24: tbnz w8, #0, #0xf4f30 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_f4f30;
  /* f4f28: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1003308));
  fn1_142980(c);
  /* f4f2c: b #0xf4e64 */
  goto L_f4e64;
L_f4f30:;
  /* f4f30: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1003316));
  fn1_1429b0(c);
  /* f4f34: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f4f38: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1003324));
  fn1_142980(c);
  /* f4f3c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f4f40: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1003332));
  fn1_9cc20(c);
  /* f4f44: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1003336));
  fn1_a1454(c);
}

void fn1_fa50c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038953228));
  /* fa50c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fa510: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* fa514: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fa518: stp x28, x27, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* fa51c: stp x26, x25, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* fa520: stp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* fa524: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* fa528: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fa52c: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* fa530: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* fa534: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* fa538: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* fa53c: ldrb w8, [x21, #0x40]! */
  { const uint64_t _a = (ARC_X_R(c, 21) + INT64_C(64));
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(64));
    ARC_W_W(c, 8, arc_ld8(_a));
  }
  /* fa540: ldr x10, [x21, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* fa544: ldur x9, [x21, #-0x30] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 21) + INT64_C(-48))));
  /* fa548: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* fa54c: csinc x8, x10, x21, ne */
  ARC_X_W(c, 8, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 21)) + 1)));
  /* fa550: cbz x9, #0xfa580 */
  if ((ARC_X_R(c, 9)) == 0) goto L_fa580;
  /* fa554: ldp x10, x11, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* fa558: sub x26, x9, x8 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* fa55c: sub x27, x10, x8 */
  ARC_X_W(c, 27, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* fa560: sub x25, x11, x8 */
  ARC_X_W(c, 25, (ARC_X_R(c, 11) - ARC_X_R(c, 8)));
  /* fa564: ldr x9, [x20, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(40))));
  /* fa568: cbz x9, #0xfa594 */
  if ((ARC_X_R(c, 9)) == 0) goto L_fa594;
L_fa56c:;
  /* fa56c: ldp x10, x11, [x20, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(48));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* fa570: sub x22, x9, x8 */
  ARC_X_W(c, 22, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* fa574: sub x0, x10, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* fa578: sub x24, x11, x8 */
  ARC_X_W(c, 24, (ARC_X_R(c, 11) - ARC_X_R(c, 8)));
  /* fa57c: b #0xfa5a0 */
  goto L_fa5a0;
L_fa580:;
  /* fa580: mov x25, #-1 */
  ARC_X_W(c, 25, UINT64_C(18446744073709551615));
  /* fa584: mov x27, #-1 */
  ARC_X_W(c, 27, UINT64_C(18446744073709551615));
  /* fa588: mov x26, #-1 */
  ARC_X_W(c, 26, UINT64_C(18446744073709551615));
  /* fa58c: ldr x9, [x20, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(40))));
  /* fa590: cbnz x9, #0xfa56c */
  if ((ARC_X_R(c, 9)) != 0) goto L_fa56c;
L_fa594:;
  /* fa594: mov x22, #-1 */
  ARC_X_W(c, 22, UINT64_C(18446744073709551615));
  /* fa598: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fa59c: mov x24, #-1 */
  ARC_X_W(c, 24, UINT64_C(18446744073709551615));
L_fa5a0:;
  /* fa5a0: ldr x9, [x20, #0x58] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(88))));
  /* fa5a4: mov x19, x23 */
  ARC_X_W(c, 19, ARC_X_R(c, 23));
  /* fa5a8: add x28, x21, #1 */
  ARC_X_W(c, 28, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* fa5ac: ldrb w10, [x19, #0x40]! */
  { const uint64_t _a = (ARC_X_R(c, 19) + INT64_C(64));
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(64));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* fa5b0: sub x8, x9, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* fa5b4: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* fa5b8: csinv x1, x8, xzr, ne */
  ARC_X_W(c, 1, (ARC_COND(c, 1) ? (ARC_X_R(c, 8)) : (~(uint64_t)(ARC_X_R(c, 31)))));
  /* fa5bc: tbz w10, #0, #0xfa5d8 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) == 0) goto L_fa5d8;
  /* fa5c0: ldr x8, [x23, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 23) + INT64_C(64))));
  /* fa5c4: stp x1, x0, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* fa5c8: ldr x0, [x23, #0x50] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 23) + INT64_C(80))));
  /* fa5cc: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* fa5d0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1025492));
  fn1_142608(c);
  /* fa5d4: ldp x1, x0, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 0, arc_ld64(_pa + 8));
  }
L_fa5d8:;
  /* fa5d8: ldr x8, [x21, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* fa5dc: ldr q0, [x21] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 21)), arc_ld64(ARC_X_R(c, 21) + 8));
  /* fa5e0: add x10, x23, #0x41 */
  ARC_X_W(c, 10, (ARC_X_R(c, 23) + UINT64_C(65)));
  /* fa5e4: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* fa5e8: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* fa5ec: strh wzr, [x20, #0x40] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(64)), ARC_W_R(c, 31));
  /* fa5f0: ldrb w8, [x23, #0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 23) + INT64_C(64))));
  /* fa5f4: ldr x9, [x23, #0x50] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 23) + INT64_C(80))));
  /* fa5f8: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* fa5fc: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* fa600: cmn x26, #1 */
  (void)arc_add64(c, ARC_X_R(c, 26), UINT64_C(1), 0);
  /* fa604: add x9, x8, x26 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ARC_X_R(c, 26)));
  /* fa608: add x10, x8, x27 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + ARC_X_R(c, 27)));
  /* fa60c: add x11, x8, x25 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) + ARC_X_R(c, 25)));
  /* fa610: csel x9, xzr, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 9)));
  /* fa614: csel x10, xzr, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 10)));
  /* fa618: add x12, x8, x22 */
  ARC_X_W(c, 12, (ARC_X_R(c, 8) + ARC_X_R(c, 22)));
  /* fa61c: stp x9, x10, [x23, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* fa620: csel x9, xzr, x11, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 11)));
  /* fa624: cmn x22, #1 */
  (void)arc_add64(c, ARC_X_R(c, 22), UINT64_C(1), 0);
  /* fa628: csel x11, xzr, x12, eq */
  ARC_X_W(c, 11, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 12)));
  /* fa62c: add x10, x12, x0 */
  ARC_X_W(c, 10, (ARC_X_R(c, 12) + ARC_X_R(c, 0)));
  /* fa630: nop  */
  /* nop: no architectural effect here */
  /* fa634: adr x22, #0x15dc40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432640)));
  /* fa638: stp x9, x11, [x23, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 11));
  }
  /* fa63c: add x9, x8, x24 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ARC_X_R(c, 24)));
  /* fa640: csel x10, xzr, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 10)));
  /* fa644: ldr w11, [x20, #0x60] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 20) + INT64_C(96))));
  /* fa648: csel x9, xzr, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 9)));
  /* fa64c: add x8, x8, x1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 1)));
  /* fa650: cmn x1, #1 */
  (void)arc_add64(c, ARC_X_R(c, 1), UINT64_C(1), 0);
  /* fa654: stp x10, x9, [x23, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* fa658: csel x8, xzr, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 8)));
  /* fa65c: str w11, [x23, #0x60] */
  arc_st32((ARC_X_R(c, 23) + INT64_C(96)), ARC_W_R(c, 11));
  /* fa660: str x8, [x23, #0x58] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(88)), ARC_X_R(c, 8));
  /* fa664: ldrb w8, [x20, #0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(64))));
  /* fa668: ldr x9, [x20, #0x50] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(80))));
  /* fa66c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* fa670: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* fa674: csel x9, x28, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 28)) : ARC_X_R(c, 9)));
  /* fa678: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* fa67c: stp x9, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* fa680: stp x9, x9, [x20, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* fa684: stp x9, x9, [x20, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* fa688: str x9, [x20, #0x58] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(88)), ARC_X_R(c, 9));
  /* fa68c: stur x8, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 8));
  /* fa690: b.eq #0xfa6a0 */
  if (ARC_COND(c, 0)) goto L_fa6a0;
  /* fa694: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* fa698: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* fa69c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1025696));
  fn1_db2e0(c);
L_fa6a0:;
  /* fa6a0: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* fa6a4: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fa6a8: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* fa6ac: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* fa6b0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1025716));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* fa6b4: ldr x20, [x23, #8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* fa6b8: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* fa6bc: b.eq #0xfa6cc */
  if (ARC_COND(c, 0)) goto L_fa6cc;
  /* fa6c0: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* fa6c4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* fa6c8: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1025740));
  fn1_db2e0(c);
L_fa6cc:;
  /* fa6cc: ldur x8, [x29, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* fa6d0: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* fa6d4: b.eq #0xfa6e4 */
  if (ARC_COND(c, 0)) goto L_fa6e4;
  /* fa6d8: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* fa6dc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* fa6e0: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1025764));
  fn1_db2e0(c);
L_fa6e4:;
  /* fa6e4: ldr x21, [x23, #8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* fa6e8: cmp x21, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 22));
  /* fa6ec: b.eq #0xfa710 */
  if (ARC_COND(c, 0)) goto L_fa710;
  /* fa6f0: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* fa6f4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fa6f8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1025788));
  fn1_bd950(c);
  /* fa6fc: cbnz x0, #0xfa710 */
  if ((ARC_X_R(c, 0)) != 0) goto L_fa710;
  /* fa700: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* fa704: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* fa708: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fa70c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1025808));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fa710:;
  /* fa710: ldur x21, [x29, #-8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* fa714: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* fa718: str x21, [x23, #8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(8)), ARC_X_R(c, 21));
  /* fa71c: b.eq #0xfa744 */
  if (ARC_COND(c, 0)) goto L_fa744;
  /* fa720: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* fa724: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fa728: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1025836));
  fn1_bd950(c);
  /* fa72c: cbnz x0, #0xfa740 */
  if ((ARC_X_R(c, 0)) != 0) goto L_fa740;
  /* fa730: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* fa734: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fa738: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fa73c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1025856));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fa740:;
  /* fa740: ldur x21, [x29, #-8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
L_fa744:;
  /* fa744: cmp x21, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 22));
  /* fa748: b.eq #0xfa76c */
  if (ARC_COND(c, 0)) goto L_fa76c;
  /* fa74c: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* fa750: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fa754: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1025880));
  fn1_bd950(c);
  /* fa758: cbnz x0, #0xfa76c */
  if ((ARC_X_R(c, 0)) != 0) goto L_fa76c;
  /* fa75c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* fa760: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* fa764: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fa768: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1025900));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fa76c:;
  /* fa76c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* fa770: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fa774: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* fa778: ldp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* fa77c: ldp x26, x25, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* fa780: ldp x28, x27, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* fa784: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fa788: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* fa78c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fa790: ret  */
  return;
  /* fa794: ldur x20, [x29, #-8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* fa798: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fa79c: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* fa7a0: b.eq #0xfa7c4 */
  if (ARC_COND(c, 0)) goto L_fa7c4;
  /* fa7a4: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* fa7a8: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fa7ac: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1025968));
  fn1_bd950(c);
  /* fa7b0: cbnz x0, #0xfa7c4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_fa7c4;
  /* fa7b4: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* fa7b8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fa7bc: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fa7c0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1025988));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fa7c4:;
  /* fa7c4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fa7c8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1025996));
  fn1_9cc20(c);
}

void fn1_fe1f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038968824));
  /* fe1f8: bti c */
  /* bti: no architectural effect here */
  /* fe1fc: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* fe200: b #0xfe338 */
  fn1_fe338(c); return;
}

void fn1_1099ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039015916));
  /* 1099ec: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1099f0: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1099f4: stp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 1099f8: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 1099fc: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 109a00: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 109a04: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 109a08: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 109a0c: ldp x21, x20, [x29, #0x68] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(104));
    ARC_X_W(c, 21, arc_ld64(_pa));
    ARC_X_W(c, 20, arc_ld64(_pa + 8));
  }
  /* 109a10: cmp w0, w5 */
  (void)arc_sub32(c, ARC_W_R(c, 0), ARC_W_R(c, 5));
  /* 109a14: ldr x22, [x29, #0x60] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 29) + INT64_C(96))));
  /* 109a18: b.ne #0x109a7c */
  if (ARC_COND(c, 1)) goto L_109a7c;
  /* 109a1c: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 109a20: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 109a24: b.ne #0x109b14 */
  if (ARC_COND(c, 1)) goto L_109b14;
  /* 109a28: ldr x8, [x4] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 4)));
  /* 109a2c: mov w10, #0x2e */
  ARC_W_W(c, 10, UINT64_C(46));
  /* 109a30: strb wzr, [x1] */
  arc_st8(ARC_X_R(c, 1), ARC_W_R(c, 31));
  /* 109a34: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 109a38: str x9, [x4] */
  arc_st64(ARC_X_R(c, 4), ARC_X_R(c, 9));
  /* 109a3c: strb w10, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* 109a40: ldrb w8, [x7] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 7)));
  /* 109a44: ldr x9, [x7, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 7) + INT64_C(8))));
  /* 109a48: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 109a4c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 109a50: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 109a54: cbz x8, #0x109b1c */
  if ((ARC_X_R(c, 8)) == 0) goto L_109b1c;
  /* 109a58: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 109a5c: sub x9, x8, x22 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - ARC_X_R(c, 22)));
  /* 109a60: cmp x9, #0x9f */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(159));
  /* 109a64: b.gt #0x109b1c */
  if (ARC_COND(c, 12)) goto L_109b1c;
  /* 109a68: ldr w9, [x20] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 20)));
  /* 109a6c: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 109a70: str w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 9));
  }
  /* 109a74: str x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* 109a78: b #0x109c40 */
  goto L_109c40;
L_109a7c:;
  /* 109a7c: cmp w0, w6 */
  (void)arc_sub32(c, ARC_W_R(c, 0), ARC_W_R(c, 6));
  /* 109a80: b.ne #0x109ad0 */
  if (ARC_COND(c, 1)) goto L_109ad0;
  /* 109a84: ldrb w8, [x7] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 7)));
  /* 109a88: ldr x9, [x7, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 7) + INT64_C(8))));
  /* 109a8c: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 109a90: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 109a94: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 109a98: cbz x8, #0x109ad0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_109ad0;
  /* 109a9c: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 109aa0: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 109aa4: b.ne #0x109b14 */
  if (ARC_COND(c, 1)) goto L_109b14;
  /* 109aa8: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 109aac: sub x9, x8, x22 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - ARC_X_R(c, 22)));
  /* 109ab0: cmp x9, #0x9f */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(159));
  /* 109ab4: b.gt #0x109b1c */
  if (ARC_COND(c, 12)) goto L_109b1c;
  /* 109ab8: ldr w9, [x20] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 20)));
  /* 109abc: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 109ac0: str w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 9));
  }
  /* 109ac4: str x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* 109ac8: str wzr, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 31));
  /* 109acc: b #0x109c40 */
  goto L_109c40;
L_109ad0:;
  /* 109ad0: ldr x19, [x29, #0x78] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 29) + INT64_C(120))));
  /* 109ad4: mov x24, x1 */
  ARC_X_W(c, 24, ARC_X_R(c, 1));
  /* 109ad8: mov x25, x2 */
  ARC_X_W(c, 25, ARC_X_R(c, 2));
  /* 109adc: mov w1, w0 */
  ARC_W_W(c, 1, ARC_W_R(c, 0));
  /* 109ae0: mov w2, #0x1c */
  ARC_W_W(c, 2, UINT64_C(28));
  /* 109ae4: mov x26, x3 */
  ARC_X_W(c, 26, ARC_X_R(c, 3));
  /* 109ae8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 109aec: mov x23, x7 */
  ARC_X_W(c, 23, ARC_X_R(c, 7));
  /* 109af0: mov x27, x4 */
  ARC_X_W(c, 27, ARC_X_R(c, 4));
  /* 109af4: add x28, x19, #0x70 */
  ARC_X_W(c, 28, (ARC_X_R(c, 19) + UINT64_C(112)));
  /* 109af8: bl #0x142e48 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1088252));
  fn1_142e48(c);
  /* 109afc: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* 109b00: csel x8, x28, x0, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 28)) : ARC_X_R(c, 0)));
  /* 109b04: sub x8, x8, x19 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 19)));
  /* 109b08: asr x10, x8, #2 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* 109b0c: cmp x10, #0x1b */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(27));
  /* 109b10: b.le #0x109b24 */
  if (ARC_COND(c, 13)) goto L_109b24;
L_109b14:;
  /* 109b14: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* 109b18: b #0x109c40 */
  goto L_109c40;
L_109b1c:;
  /* 109b1c: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 109b20: b #0x109c40 */
  goto L_109c40;
L_109b24:;
  /* 109b24: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 109b28: and x11, x8, #0xfffffffffffffffb */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) & UINT64_C(18446744073709551611)));
  /* 109b2c: ldr x9, [x9, #0xbe0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(3040))));
  /* 109b30: cmp x11, #0x58 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(88));
  /* 109b34: ldrb w8, [x9, x10] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + ARC_X_R(c, 10))));
  /* 109b38: mov x9, x27 */
  ARC_X_W(c, 9, ARC_X_R(c, 27));
  /* 109b3c: b.eq #0x109b98 */
  if (ARC_COND(c, 0)) goto L_109b98;
  /* 109b40: cmp x11, #0x60 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(96));
  /* 109b44: b.ne #0x109ba4 */
  if (ARC_COND(c, 1)) goto L_109ba4;
  /* 109b48: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* 109b4c: cmp x10, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 26));
  /* 109b50: b.eq #0x109b84 */
  if (ARC_COND(c, 0)) goto L_109b84;
  /* 109b54: ldurb w11, [x10, #-1] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 10) + INT64_C(-1))));
  /* 109b58: ldrb w12, [x25] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 25)));
  /* 109b5c: sub w13, w11, #0x7b */
  ARC_W_W(c, 13, (ARC_W_R(c, 11) - UINT64_C(123)));
  /* 109b60: eor w14, w11, #0x20 */
  ARC_W_W(c, 14, (ARC_W_R(c, 11) ^ UINT64_C(32)));
  /* 109b64: cmn w13, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 13), UINT64_C(26), 0);
  /* 109b68: sub w13, w12, #0x7b */
  ARC_W_W(c, 13, (ARC_W_R(c, 12) - UINT64_C(123)));
  /* 109b6c: csel w11, w11, w14, lo */
  ARC_W_W(c, 11, (ARC_COND(c, 3) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 14)));
  /* 109b70: eor w14, w12, #0x20 */
  ARC_W_W(c, 14, (ARC_W_R(c, 12) ^ UINT64_C(32)));
  /* 109b74: cmn w13, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 13), UINT64_C(26), 0);
  /* 109b78: csel w12, w12, w14, lo */
  ARC_W_W(c, 12, (ARC_COND(c, 3) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 14)));
  /* 109b7c: cmp w11, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 12));
  /* 109b80: b.ne #0x109b14 */
  if (ARC_COND(c, 1)) goto L_109b14;
L_109b84:;
  /* 109b84: add x11, x10, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* 109b88: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 109b8c: str x11, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 11));
  /* 109b90: strb w8, [x10] */
  arc_st8(ARC_X_R(c, 10), ARC_W_R(c, 8));
  /* 109b94: b #0x109c40 */
  goto L_109c40;
L_109b98:;
  /* 109b98: mov w11, #0x50 */
  ARC_W_W(c, 11, UINT64_C(80));
  /* 109b9c: strb w11, [x25] */
  arc_st8(ARC_X_R(c, 25), ARC_W_R(c, 11));
  /* 109ba0: b #0x109c18 */
  goto L_109c18;
L_109ba4:;
  /* 109ba4: sub w11, w8, #0x7b */
  ARC_W_W(c, 11, (ARC_W_R(c, 8) - UINT64_C(123)));
  /* 109ba8: eor w12, w8, #0x20 */
  ARC_W_W(c, 12, (ARC_W_R(c, 8) ^ UINT64_C(32)));
  /* 109bac: cmn w11, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 11), UINT64_C(26), 0);
  /* 109bb0: ldrb w11, [x25] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 25)));
  /* 109bb4: csel w12, w8, w12, lo */
  ARC_W_W(c, 12, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 12)));
  /* 109bb8: cmp w12, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 11));
  /* 109bbc: b.ne #0x109c18 */
  if (ARC_COND(c, 1)) goto L_109c18;
  /* 109bc0: sub w12, w12, #0x5b */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) - UINT64_C(91)));
  /* 109bc4: orr w13, w11, #0x20 */
  ARC_W_W(c, 13, (ARC_W_R(c, 11) | UINT64_C(32)));
  /* 109bc8: cmn w12, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 12), UINT64_C(26), 0);
  /* 109bcc: csel w11, w11, w13, lo */
  ARC_W_W(c, 11, (ARC_COND(c, 3) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 13)));
  /* 109bd0: strb w11, [x25] */
  arc_st8(ARC_X_R(c, 25), ARC_W_R(c, 11));
  /* 109bd4: ldrb w11, [x24] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 24)));
  /* 109bd8: cmp w11, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(1));
  /* 109bdc: b.ne #0x109c18 */
  if (ARC_COND(c, 1)) goto L_109c18;
  /* 109be0: strb wzr, [x24] */
  arc_st8(ARC_X_R(c, 24), ARC_W_R(c, 31));
  /* 109be4: ldrb w11, [x23] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 23)));
  /* 109be8: ldr x12, [x23, #8] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* 109bec: lsr x13, x11, #1 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(1)) & 63)));
  /* 109bf0: tst w11, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & UINT64_C(1)));
  /* 109bf4: csel x11, x13, x12, eq */
  ARC_X_W(c, 11, (ARC_COND(c, 0) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 12)));
  /* 109bf8: cbz x11, #0x109c18 */
  if ((ARC_X_R(c, 11)) == 0) goto L_109c18;
  /* 109bfc: ldr x11, [x21] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 21)));
  /* 109c00: sub x12, x11, x22 */
  ARC_X_W(c, 12, (ARC_X_R(c, 11) - ARC_X_R(c, 22)));
  /* 109c04: cmp x12, #0x9f */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(159));
  /* 109c08: b.gt #0x109c18 */
  if (ARC_COND(c, 12)) goto L_109c18;
  /* 109c0c: ldr w12, [x20] */
  ARC_W_W(c, 12, arc_ld32(ARC_X_R(c, 20)));
  /* 109c10: str w12, [x11], #4 */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 12));
  }
  /* 109c14: str x11, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 11));
L_109c18:;
  /* 109c18: ldr x11, [x9] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 9)));
  /* 109c1c: cmp x10, #0x15 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(21));
  /* 109c20: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 109c24: add x12, x11, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 11) + UINT64_C(1)));
  /* 109c28: str x12, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* 109c2c: strb w8, [x11] */
  arc_st8(ARC_X_R(c, 11), ARC_W_R(c, 8));
  /* 109c30: b.gt #0x109c40 */
  if (ARC_COND(c, 12)) goto L_109c40;
  /* 109c34: ldr w8, [x20] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 20)));
  /* 109c38: add w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* 109c3c: str w8, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 8));
L_109c40:;
  /* 109c40: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 109c44: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 109c48: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 109c4c: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 109c50: ldp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 109c54: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 109c58: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 109c5c: ret  */
  return;
}

void fn1_112818(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039052312));
  /* 112818: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 11281c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 112820: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 112824: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 112828: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* 11282c: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 112830: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 112834: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 112838: mov x2, x4 */
  ARC_X_W(c, 2, ARC_X_R(c, 4));
  /* 11283c: mov x3, x5 */
  ARC_X_W(c, 3, ARC_X_R(c, 5));
  /* 112840: mov w4, #2 */
  ARC_W_W(c, 4, UINT64_C(2));
  /* 112844: bl #0x112ec0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1124424));
  fn1_112ec0(c);
  /* 112848: ldr w9, [x19] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 19)));
  /* 11284c: sub w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) - UINT64_C(1)));
  /* 112850: cmp w8, #0xb */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(11));
  /* 112854: b.hi #0x112864 */
  if (ARC_COND(c, 8)) goto L_112864;
  /* 112858: tbnz w9, #2, #0x112864 */
  if (((ARC_W_R(c, 9)) >> 2 & 1) != 0) goto L_112864;
  /* 11285c: str w8, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 8));
  /* 112860: b #0x11286c */
  goto L_11286c;
L_112864:;
  /* 112864: orr w8, w9, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) | UINT64_C(4)));
  /* 112868: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_11286c:;
  /* 11286c: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 112870: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 112874: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 112878: ret  */
  return;
}

void fn1_113f4c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039058252));
  /* 113f4c: bti c */
  /* bti: no architectural effect here */
  /* 113f50: mov x9, x0 */
  ARC_X_W(c, 9, ARC_X_R(c, 0));
  /* 113f54: ldrb w10, [x9, #0x48]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(72));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(72));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* 113f58: tbnz w10, #0, #0x113f70 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_113f70;
  /* 113f5c: ldr q0, [x9] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 9)), arc_ld64(ARC_X_R(c, 9) + 8));
  /* 113f60: ldr x9, [x9, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(16))));
  /* 113f64: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* 113f68: str x9, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 9));
  /* 113f6c: ret  */
  return;
L_113f70:;
  /* 113f70: ldp x2, x1, [x0, #0x50] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(80));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 113f74: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 113f78: b #0xda588 */
  fn1_da588(c); return;
}

void fn1_11e5bc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039100860));
  /* 11e5bc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 11e5c0: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 11e5c4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 11e5c8: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 11e5cc: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 11e5d0: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 11e5d4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 11e5d8: adrp x23, #0x151000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11e5dc: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 11e5e0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11e5e4: ldr x23, [x23, #0xbd0] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 23) + INT64_C(3024))));
  /* 11e5e8: ldar x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11e5ec: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11e5f0: b.eq #0x11e6ac */
  if (ARC_COND(c, 0)) goto L_11e6ac;
  /* 11e5f4: nop  */
  /* nop: no architectural effect here */
  /* 11e5f8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11e5fc: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1172992));
  fn1_142518(c);
  /* 11e600: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11e604: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11e608: b.ne #0x11e634 */
  if (ARC_COND(c, 1)) goto L_11e634;
  /* 11e60c: nop  */
  /* nop: no architectural effect here */
  /* 11e610: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11e614: nop  */
  /* nop: no architectural effect here */
  /* 11e618: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_11e61c:;
  /* 11e61c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11e620: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 11e624: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1173032));
  fn1_142530(c);
  /* 11e628: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11e62c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11e630: b.eq #0x11e61c */
  if (ARC_COND(c, 0)) goto L_11e61c;
L_11e634:;
  /* 11e634: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11e638: cbz x8, #0x11e64c */
  if ((ARC_X_R(c, 8)) == 0) goto L_11e64c;
  /* 11e63c: nop  */
  /* nop: no architectural effect here */
  /* 11e640: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11e644: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1173064));
  fn1_142560(c);
  /* 11e648: b #0x11e6ac */
  goto L_11e6ac;
L_11e64c:;
  /* 11e64c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11e650: str x23, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 23));
  /* 11e654: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11e658: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 11e65c: nop  */
  /* nop: no architectural effect here */
  /* 11e660: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11e664: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1173096));
  fn1_142560(c);
  /* 11e668: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11e66c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11e670: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11e674: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1173112));
  fn1_a2030(c);
  /* 11e678: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11e67c: str w8, [x23, #8] */
  arc_st32((ARC_X_R(c, 23) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11e680: nop  */
  /* nop: no architectural effect here */
  /* 11e684: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11e688: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1173132));
  fn1_142518(c);
  /* 11e68c: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11e690: stlr x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 11e694: nop  */
  /* nop: no architectural effect here */
  /* 11e698: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11e69c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1173152));
  fn1_142560(c);
  /* 11e6a0: nop  */
  /* nop: no architectural effect here */
  /* 11e6a4: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11e6a8: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1173164));
  fn1_142578(c);
L_11e6ac:;
  /* 11e6ac: ldrsw x8, [x23, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 23) + INT64_C(8)))));
  /* 11e6b0: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 11e6b4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11e6b8: sub x22, x8, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11e6bc: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1173184));
  fn1_db2e0(c);
  /* 11e6c0: mov x21, x20 */
  ARC_X_W(c, 21, ARC_X_R(c, 20));
  /* 11e6c4: ldp x8, x9, [x21, #0x10]! */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11e6c8: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11e6cc: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11e6d0: cmp x10, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 22));
  /* 11e6d4: b.hi #0x11e700 */
  if (ARC_COND(c, 8)) goto L_11e700;
  /* 11e6d8: add x9, x22, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* 11e6dc: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11e6e0: b.ls #0x11e6f4 */
  if (ARC_COND(c, 9)) goto L_11e6f4;
  /* 11e6e4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11e6e8: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1173228));
  fn1_1352bc(c);
  /* 11e6ec: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11e6f0: b #0x11e700 */
  goto L_11e700;
L_11e6f4:;
  /* 11e6f4: b.hs #0x11e700 */
  if (ARC_COND(c, 2)) goto L_11e700;
  /* 11e6f8: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11e6fc: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11e700:;
  /* 11e700: ldr x20, [x8, x22, lsl #3] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3))));
  /* 11e704: cbz x20, #0x11e728 */
  if ((ARC_X_R(c, 20)) == 0) goto L_11e728;
  /* 11e708: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 11e70c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11e710: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1173268));
  fn1_bd950(c);
  /* 11e714: cbnz x0, #0x11e728 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11e728;
  /* 11e718: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 11e71c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11e720: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11e724: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1173288));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11e728:;
  /* 11e728: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11e72c: str x19, [x8, x22, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3)), ARC_X_R(c, 19));
  /* 11e730: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 11e734: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 11e738: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 11e73c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 11e740: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 11e744: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 11e748: ret  */
  return;
  /* 11e74c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11e750: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 11e754: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11e758: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1173340));
  fn1_bd950(c);
  /* 11e75c: cbnz x0, #0x11e784 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11e784;
  /* 11e760: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11e764: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11e768: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11e76c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1173360));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11e770: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11e774: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1173368));
  fn1_9cc20(c);
  /* 11e778: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11e77c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 11e780: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1173380));
  fn1_d2a78(c);
L_11e784:;
  /* 11e784: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11e788: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1173388));
  fn1_9cc20(c);
}

void fn1_126424(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039133220));
  /* 126424: bti c */
  /* bti: no architectural effect here */
  /* 126428: nop  */
  /* nop: no architectural effect here */
  /* 12642c: adr x0, #0x75c10 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(482320)));
  /* 126430: ret  */
  return;
}

void fn1_1288ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039142636));
  /* 1288ec: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1288f0: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1288f4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1288f8: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1288fc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 128900: mov x8, x5 */
  ARC_X_W(c, 8, ARC_X_R(c, 5));
  /* 128904: mov x19, x7 */
  ARC_X_W(c, 19, ARC_X_R(c, 7));
  /* 128908: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 12890c: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 128910: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 128914: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 128918: mov x5, sp */
  ARC_X_W(c, 5, (c)->sp);
  /* 12891c: mov x3, x8 */
  ARC_X_W(c, 3, ARC_X_R(c, 8));
  /* 128920: mov x4, x6 */
  ARC_X_W(c, 4, ARC_X_R(c, 6));
  /* 128924: mov w6, #0x10ffff */
  ARC_W_W(c, 6, UINT64_C(1114111));
  /* 128928: mov w7, wzr */
  ARC_W_W(c, 7, ARC_W_R(c, 31));
  /* 12892c: bl #0x128950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1214768));
  fn1_128950(c);
  /* 128930: ldp x9, x8, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 128934: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 128938: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* 12893c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 128940: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 128944: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 128948: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12894c: ret  */
  return;
}

void fn1_12a598(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039149976));
  /* 12a598: bti c */
  /* bti: no architectural effect here */
  /* 12a59c: ldrb w9, [x0, #0x20] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(32))));
  /* 12a5a0: mov w8, #6 */
  ARC_W_W(c, 8, UINT64_C(6));
  /* 12a5a4: tst w9, #4 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(4)));
  /* 12a5a8: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 12a5ac: csel w0, w9, w8, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* 12a5b0: ret  */
  return;
}

void fn1_12bbf8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039155704));
  /* 12bbf8: bti c */
  /* bti: no architectural effect here */
  /* 12bbfc: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 12bc00: adrp x8, #0x53000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(339968)));
  /* 12bc04: sub x10, x1, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 1) - UINT64_C(1)));
  /* 12bc08: ldr x9, [x9, #0xcc8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(3272))));
  /* 12bc0c: ldr d0, [x8, #0x2f0] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(752))));
  /* 12bc10: stp xzr, xzr, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 12bc14: str xzr, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 31));
  /* 12bc18: add x8, x9, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* 12bc1c: str d0, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), (c)->q[0].u64[0]);
  /* 12bc20: stp x8, x10, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 12bc24: ret  */
  return;
}

void fn1_131fb0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039181232));
  /* 131fb0: bti c */
  /* bti: no architectural effect here */
  /* 131fb4: ldrb w9, [x0, #0x3f8] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(1016))));
  /* 131fb8: ldr x8, [x0, #0x400] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(1024))));
  /* 131fbc: ldr x11, [x0, #0x408] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 0) + INT64_C(1032))));
  /* 131fc0: lsr x10, x9, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 131fc4: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 131fc8: csel x8, x10, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* 131fcc: cbz x8, #0x132004 */
  if ((ARC_X_R(c, 8)) == 0) goto L_132004;
  /* 131fd0: add x12, x0, #0x3fc */
  ARC_X_W(c, 12, (ARC_X_R(c, 0) + UINT64_C(1020)));
  /* 131fd4: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 131fd8: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
  /* 131fdc: mov w13, wzr */
  ARC_W_W(c, 13, ARC_W_R(c, 31));
  /* 131fe0: csel x12, x12, x11, eq */
  ARC_X_W(c, 12, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
L_131fe4:;
  /* 131fe4: ldr w10, [x12, x10, lsl #2] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 10)) << 2))));
  /* 131fe8: cmp w10, #0x25 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(37));
  /* 131fec: b.eq #0x13200c */
  if (ARC_COND(c, 0)) goto L_13200c;
  /* 131ff0: add w10, w13, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 13) + UINT64_C(1)));
  /* 131ff4: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 131ff8: mov w13, w10 */
  ARC_W_W(c, 13, ARC_W_R(c, 10));
  /* 131ffc: b.hi #0x131fe4 */
  if (ARC_COND(c, 8)) goto L_131fe4;
  /* 132000: b #0x132010 */
  goto L_132010;
L_132004:;
  /* 132004: mov w10, wzr */
  ARC_W_W(c, 10, ARC_W_R(c, 31));
  /* 132008: b #0x132010 */
  goto L_132010;
L_13200c:;
  /* 13200c: mov w10, w13 */
  ARC_W_W(c, 10, ARC_W_R(c, 13));
L_132010:;
  /* 132010: add x12, x0, #0x3fc */
  ARC_X_W(c, 12, (ARC_X_R(c, 0) + UINT64_C(1020)));
  /* 132014: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 132018: add w13, w10, #1 */
  ARC_W_W(c, 13, (ARC_W_R(c, 10) + UINT64_C(1)));
  /* 13201c: csel x9, x12, x11, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* 132020: ldr w11, [x9, w13, uxtw #2] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 13)))) << 2))));
  /* 132024: cmp w11, #0x6c */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(108));
  /* 132028: b.gt #0x1320bc */
  if (ARC_COND(c, 12)) goto L_1320bc;
  /* 13202c: cmp w11, #0x59 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(89));
  /* 132030: b.eq #0x1320cc */
  if (ARC_COND(c, 0)) goto L_1320cc;
  /* 132034: cmp w11, #0x64 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(100));
  /* 132038: b.ne #0x132240 */
  if (ARC_COND(c, 1)) goto L_132240;
  /* 13203c: add w10, w10, #2 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(2)));
  /* 132040: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 132044: b.ls #0x132060 */
  if (ARC_COND(c, 9)) goto L_132060;
L_132048:;
  /* 132048: ldr w11, [x9, x10, lsl #2] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 10)) << 2))));
  /* 13204c: cmp w11, #0x25 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(37));
  /* 132050: b.eq #0x132060 */
  if (ARC_COND(c, 0)) goto L_132060;
  /* 132054: add w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(1)));
  /* 132058: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 13205c: b.hi #0x132048 */
  if (ARC_COND(c, 8)) goto L_132048;
L_132060:;
  /* 132060: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 132064: b.eq #0x132240 */
  if (ARC_COND(c, 0)) goto L_132240;
  /* 132068: add w11, w10, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 10) + UINT64_C(1)));
  /* 13206c: ldr w11, [x9, w11, uxtw #2] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 11)))) << 2))));
  /* 132070: cmp w11, #0x6d */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(109));
  /* 132074: b.ne #0x132240 */
  if (ARC_COND(c, 1)) goto L_132240;
  /* 132078: add w10, w10, #2 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(2)));
  /* 13207c: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 132080: b.ls #0x13209c */
  if (ARC_COND(c, 9)) goto L_13209c;
L_132084:;
  /* 132084: ldr w11, [x9, x10, lsl #2] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 10)) << 2))));
  /* 132088: cmp w11, #0x25 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(37));
  /* 13208c: b.eq #0x13209c */
  if (ARC_COND(c, 0)) goto L_13209c;
  /* 132090: add w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(1)));
  /* 132094: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 132098: b.hi #0x132084 */
  if (ARC_COND(c, 8)) goto L_132084;
L_13209c:;
  /* 13209c: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 1320a0: b.eq #0x132240 */
  if (ARC_COND(c, 0)) goto L_132240;
  /* 1320a4: add w8, w10, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 10) + UINT64_C(1)));
  /* 1320a8: ldr w10, [x9, w8, uxtw #2] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 2))));
  /* 1320ac: cmp w10, #0x79 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(121));
  /* 1320b0: b.ne #0x132218 */
  if (ARC_COND(c, 1)) goto L_132218;
  /* 1320b4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1320b8: ret  */
  return;
L_1320bc:;
  /* 1320bc: cmp w11, #0x6d */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(109));
  /* 1320c0: b.eq #0x132154 */
  if (ARC_COND(c, 0)) goto L_132154;
  /* 1320c4: cmp w11, #0x79 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(121));
  /* 1320c8: b.ne #0x132240 */
  if (ARC_COND(c, 1)) goto L_132240;
L_1320cc:;
  /* 1320cc: add w10, w10, #2 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(2)));
  /* 1320d0: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 1320d4: b.ls #0x1320f0 */
  if (ARC_COND(c, 9)) goto L_1320f0;
L_1320d8:;
  /* 1320d8: ldr w11, [x9, x10, lsl #2] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 10)) << 2))));
  /* 1320dc: cmp w11, #0x25 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(37));
  /* 1320e0: b.eq #0x1320f0 */
  if (ARC_COND(c, 0)) goto L_1320f0;
  /* 1320e4: add w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(1)));
  /* 1320e8: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 1320ec: b.hi #0x1320d8 */
  if (ARC_COND(c, 8)) goto L_1320d8;
L_1320f0:;
  /* 1320f0: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 1320f4: b.eq #0x132240 */
  if (ARC_COND(c, 0)) goto L_132240;
  /* 1320f8: add w11, w10, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 10) + UINT64_C(1)));
  /* 1320fc: ldr w11, [x9, w11, uxtw #2] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 11)))) << 2))));
  /* 132100: cmp w11, #0x64 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(100));
  /* 132104: b.eq #0x1321d4 */
  if (ARC_COND(c, 0)) goto L_1321d4;
  /* 132108: cmp w11, #0x6d */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(109));
  /* 13210c: b.ne #0x132240 */
  if (ARC_COND(c, 1)) goto L_132240;
  /* 132110: add w10, w10, #2 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(2)));
  /* 132114: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 132118: b.ls #0x132134 */
  if (ARC_COND(c, 9)) goto L_132134;
L_13211c:;
  /* 13211c: ldr w11, [x9, x10, lsl #2] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 10)) << 2))));
  /* 132120: cmp w11, #0x25 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(37));
  /* 132124: b.eq #0x132134 */
  if (ARC_COND(c, 0)) goto L_132134;
  /* 132128: add w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(1)));
  /* 13212c: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 132130: b.hi #0x13211c */
  if (ARC_COND(c, 8)) goto L_13211c;
L_132134:;
  /* 132134: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 132138: b.eq #0x132240 */
  if (ARC_COND(c, 0)) goto L_132240;
  /* 13213c: add w8, w10, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 10) + UINT64_C(1)));
  /* 132140: ldr w8, [x9, w8, uxtw #2] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 9) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 2))));
  /* 132144: cmp w8, #0x64 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(100));
  /* 132148: b.ne #0x132240 */
  if (ARC_COND(c, 1)) goto L_132240;
  /* 13214c: mov w0, #3 */
  ARC_W_W(c, 0, UINT64_C(3));
  /* 132150: ret  */
  return;
L_132154:;
  /* 132154: add w10, w10, #2 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(2)));
  /* 132158: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 13215c: b.ls #0x132178 */
  if (ARC_COND(c, 9)) goto L_132178;
L_132160:;
  /* 132160: ldr w11, [x9, x10, lsl #2] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 10)) << 2))));
  /* 132164: cmp w11, #0x25 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(37));
  /* 132168: b.eq #0x132178 */
  if (ARC_COND(c, 0)) goto L_132178;
  /* 13216c: add w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(1)));
  /* 132170: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 132174: b.hi #0x132160 */
  if (ARC_COND(c, 8)) goto L_132160;
L_132178:;
  /* 132178: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 13217c: b.eq #0x132240 */
  if (ARC_COND(c, 0)) goto L_132240;
  /* 132180: add w11, w10, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 10) + UINT64_C(1)));
  /* 132184: ldr w11, [x9, w11, uxtw #2] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 11)))) << 2))));
  /* 132188: cmp w11, #0x64 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(100));
  /* 13218c: b.ne #0x132240 */
  if (ARC_COND(c, 1)) goto L_132240;
  /* 132190: add w10, w10, #2 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(2)));
  /* 132194: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 132198: b.ls #0x1321b4 */
  if (ARC_COND(c, 9)) goto L_1321b4;
L_13219c:;
  /* 13219c: ldr w11, [x9, x10, lsl #2] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 10)) << 2))));
  /* 1321a0: cmp w11, #0x25 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(37));
  /* 1321a4: b.eq #0x1321b4 */
  if (ARC_COND(c, 0)) goto L_1321b4;
  /* 1321a8: add w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(1)));
  /* 1321ac: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 1321b0: b.hi #0x13219c */
  if (ARC_COND(c, 8)) goto L_13219c;
L_1321b4:;
  /* 1321b4: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 1321b8: b.eq #0x132240 */
  if (ARC_COND(c, 0)) goto L_132240;
  /* 1321bc: add w8, w10, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 10) + UINT64_C(1)));
  /* 1321c0: ldr w10, [x9, w8, uxtw #2] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 2))));
  /* 1321c4: cmp w10, #0x79 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(121));
  /* 1321c8: b.ne #0x13222c */
  if (ARC_COND(c, 1)) goto L_13222c;
  /* 1321cc: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
  /* 1321d0: ret  */
  return;
L_1321d4:;
  /* 1321d4: add w10, w10, #2 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(2)));
  /* 1321d8: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 1321dc: b.ls #0x1321f8 */
  if (ARC_COND(c, 9)) goto L_1321f8;
L_1321e0:;
  /* 1321e0: ldr w11, [x9, x10, lsl #2] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 10)) << 2))));
  /* 1321e4: cmp w11, #0x25 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(37));
  /* 1321e8: b.eq #0x1321f8 */
  if (ARC_COND(c, 0)) goto L_1321f8;
  /* 1321ec: add w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(1)));
  /* 1321f0: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 1321f4: b.hi #0x1321e0 */
  if (ARC_COND(c, 8)) goto L_1321e0;
L_1321f8:;
  /* 1321f8: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 1321fc: b.eq #0x132240 */
  if (ARC_COND(c, 0)) goto L_132240;
  /* 132200: add w8, w10, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 10) + UINT64_C(1)));
  /* 132204: ldr w8, [x9, w8, uxtw #2] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 9) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 2))));
  /* 132208: cmp w8, #0x6d */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(109));
  /* 13220c: b.ne #0x132240 */
  if (ARC_COND(c, 1)) goto L_132240;
  /* 132210: mov w0, #4 */
  ARC_W_W(c, 0, UINT64_C(4));
  /* 132214: ret  */
  return;
L_132218:;
  /* 132218: ldr w8, [x9, w8, uxtw #2] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 9) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 2))));
  /* 13221c: cmp w8, #0x59 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(89));
  /* 132220: b.ne #0x132240 */
  if (ARC_COND(c, 1)) goto L_132240;
  /* 132224: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 132228: ret  */
  return;
L_13222c:;
  /* 13222c: ldr w8, [x9, w8, uxtw #2] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 9) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 2))));
  /* 132230: cmp w8, #0x59 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(89));
  /* 132234: b.ne #0x132240 */
  if (ARC_COND(c, 1)) goto L_132240;
  /* 132238: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
  /* 13223c: ret  */
  return;
L_132240:;
  /* 132240: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 132244: ret  */
  return;
}

void fn1_134bc0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192512));
  /* 134bc0: bti c */
  /* bti: no architectural effect here */
  /* 134bc4: add x0, x0, #0x418 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1048)));
  /* 134bc8: ret  */
  return;
}

void fn1_136e64(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039201380));
  /* 136e64: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 136e68: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 136e6c: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 136e70: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 136e74: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 136e78: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 136e7c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 136e80: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 136e84: mov w22, #0x6f */
  ARC_W_W(c, 22, UINT64_C(111));
  /* 136e88: nop  */
  /* nop: no architectural effect here */
  /* 136e8c: adr x21, #0x150960 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1378656)));
L_136e90:;
  /* 136e90: lsr x23, x22, #1 */
  ARC_X_W(c, 23, ((uint64_t)(ARC_X_R(c, 22)) >> ((UINT64_C(1)) & 63)));
  /* 136e94: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 136e98: add x24, x21, x23, lsl #4 */
  ARC_X_W(c, 24, (ARC_X_R(c, 21) + ((uint64_t)(ARC_X_R(c, 23)) << 4)));
  /* 136e9c: ldr x0, [x24], #0x10 */
  { const uint64_t _a = ARC_X_R(c, 24);
    ARC_X_W(c, 24, ARC_X_R(c, 24) + INT64_C(16));
    ARC_X_W(c, 0, arc_ld64(_a));
  }
  /* 136ea0: bl #0x142848 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1273508));
  fn1_142848(c);
  /* 136ea4: mvn x8, x23 */
  ARC_X_W(c, 8, (~(uint64_t)(ARC_X_R(c, 23))));
  /* 136ea8: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* 136eac: add x8, x22, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* 136eb0: csel x21, x24, x21, lt */
  ARC_X_W(c, 21, (ARC_COND(c, 11) ? (ARC_X_R(c, 24)) : ARC_X_R(c, 21)));
  /* 136eb4: csel x22, x8, x23, lt */
  ARC_X_W(c, 22, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 23)));
  /* 136eb8: cbnz x22, #0x136e90 */
  if ((ARC_X_R(c, 22)) != 0) goto L_136e90;
  /* 136ebc: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 136ec0: add x8, x8, #0x50 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(80)));
  /* 136ec4: stp xzr, xzr, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 136ec8: cmp x21, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* 136ecc: str xzr, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 31));
  /* 136ed0: b.eq #0x136ef4 */
  if (ARC_COND(c, 0)) goto L_136ef4;
  /* 136ed4: ldr x1, [x21] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 21)));
  /* 136ed8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 136edc: bl #0x142848 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1273568));
  fn1_142848(c);
  /* 136ee0: cbnz w0, #0x136ef4 */
  if ((ARC_W_R(c, 0)) != 0) goto L_136ef4;
  /* 136ee4: ldrb w8, [x21, #8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 21) + INT64_C(8))));
  /* 136ee8: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* 136eec: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* 136ef0: strb w8, [x19, #1] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(1)), ARC_W_R(c, 8));
L_136ef4:;
  /* 136ef4: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 136ef8: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 136efc: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 136f00: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 136f04: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 136f08: ret  */
  return;
}

void fn1_13a058(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039214168));
  /* 13a058: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13a05c: sub sp, sp, #0xe0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(224)));
  /* 13a060: stp x29, x30, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13a064: stp x22, x21, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13a068: stp x20, x19, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13a06c: add x29, sp, #0xb0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(176)));
  /* 13a070: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 13a074: mov w20, w2 */
  ARC_W_W(c, 20, ARC_W_R(c, 2));
  /* 13a078: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13a07c: strb w8, [x0, #0x10] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(16)), ARC_W_R(c, 8));
  /* 13a080: adrp x8, #0x51000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(331776)));
  /* 13a084: add x8, x8, #0xf0b */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3851)));
  /* 13a088: stp x8, x3, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 3));
  }
  /* 13a08c: nop  */
  /* nop: no architectural effect here */
  /* 13a090: adr x21, #0x156d40 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13a094: nop  */
  /* nop: no architectural effect here */
  /* 13a098: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13a09c: stp xzr, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13a0a0: stp x1, xzr, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13a0a4: cbz x3, #0x13a0bc */
  if ((ARC_X_R(c, 3)) == 0) goto L_13a0bc;
  /* 13a0a8: str wzr, [x3] */
  arc_st32(ARC_X_R(c, 3), ARC_W_R(c, 31));
  /* 13a0ac: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13a0b0: tbz w8, #0, #0x13a2b8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13a2b8;
L_13a0b4:;
  /* 13a0b4: str x21, [x3, #8] */
  arc_st64((ARC_X_R(c, 3) + INT64_C(8)), ARC_X_R(c, 21));
  /* 13a0b8: b #0x13a0c4 */
  goto L_13a0c4;
L_13a0bc:;
  /* 13a0bc: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13a0c0: tbz w8, #0, #0x13a2e4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13a2e4;
L_13a0c4:;
  /* 13a0c4: stur wzr, [x29, #-0x30] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-48)), ARC_W_R(c, 31));
  /* 13a0c8: stur x21, [x29, #-0x28] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-40)), ARC_X_R(c, 21));
  /* 13a0cc: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 13a0d0: sub x3, x29, #0x30 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13a0d4: mov w2, w20 */
  ARC_W_W(c, 2, ARC_W_R(c, 20));
  /* 13a0d8: bl #0x13a384 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1286364));
  fn1_13a384(c);
  /* 13a0dc: ldur w8, [x29, #-0x30] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 29) + INT64_C(-48))));
  /* 13a0e0: cbz w8, #0x13a10c */
  if ((ARC_W_R(c, 8)) == 0) goto L_13a10c;
  /* 13a0e4: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 13a0e8: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13a0ec: bl #0x139ad0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1286384));
  fn1_139ad0(c);
  /* 13a0f0: ldur w8, [x29, #-0x30] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 29) + INT64_C(-48))));
  /* 13a0f4: cbz w8, #0x13a10c */
  if ((ARC_W_R(c, 8)) == 0) goto L_13a10c;
  /* 13a0f8: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* 13a0fc: cbz x0, #0x13a270 */
  if ((ARC_X_R(c, 0)) == 0) goto L_13a270;
  /* 13a100: bl #0x144618 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1286404));
  fn1_144618(c);
  /* 13a104: str xzr, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 31));
  /* 13a108: b #0x13a270 */
  goto L_13a270;
L_13a10c:;
  /* 13a10c: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* 13a110: cbz x8, #0x13a270 */
  if ((ARC_X_R(c, 8)) == 0) goto L_13a270;
  /* 13a114: mov w0, #0x50 */
  ARC_W_W(c, 0, UINT64_C(80));
  /* 13a118: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1286428));
  fn1_1428f0(c);
  /* 13a11c: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 13a120: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 13a124: add x8, x8, #0x648 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1608)));
  /* 13a128: ldr x21, [x19, #8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 13a12c: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 13a130: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* 13a134: stp xzr, xzr, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13a138: str xzr, [x0, #0x48] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(72)), ARC_X_R(c, 31));
  /* 13a13c: stur q0, [x0, #0x28] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* 13a140: stur q0, [x0, #0x38] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* 13a144: str q0, [x8, #0x18]! */
  arc_st64((ARC_X_R(c, 8) + INT64_C(24)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 8) + INT64_C(24)) + 8, (c)->q[0].u64[1]);
  ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(24));
  /* 13a148: stp x8, x0, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 13a14c: cbz x21, #0x13a19c */
  if ((ARC_X_R(c, 21)) == 0) goto L_13a19c;
  /* 13a150: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 13a154: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 13a158: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1286492));
  fn1_bd950(c);
  /* 13a15c: cbnz x0, #0x13a19c */
  if ((ARC_X_R(c, 0)) != 0) goto L_13a19c;
  /* 13a160: mov x22, x21 */
  ARC_X_W(c, 22, ARC_X_R(c, 21));
  /* 13a164: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 13a168: ldr x8, [x22], #0x10 */
  { const uint64_t _a = ARC_X_R(c, 22);
    ARC_X_W(c, 22, ARC_X_R(c, 22) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 13a16c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 13a170: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1286516));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 13a174: ldar x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 13a178: cbz x8, #0x13a18c */
  if ((ARC_X_R(c, 8)) == 0) goto L_13a18c;
  /* 13a17c: add x1, x21, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(16)));
  /* 13a180: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 13a184: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1286536));
  fn1_bd950(c);
  /* 13a188: cbnz x0, #0x13a19c */
  if ((ARC_X_R(c, 0)) != 0) goto L_13a19c;
L_13a18c:;
  /* 13a18c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 13a190: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 13a194: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 13a198: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1286556));
  arc_dispatch(c, ARC_X_R(c, 8));
L_13a19c:;
  /* 13a19c: ldr x21, [x19] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 19)));
  /* 13a1a0: mov w11, #0x24 */
  ARC_W_W(c, 11, UINT64_C(36));
  /* 13a1a4: mov x12, #-1 */
  ARC_X_W(c, 12, UINT64_C(18446744073709551615));
  /* 13a1a8: ldp x8, x9, [x21, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 13a1ac: strb w20, [x21, #0x30] */
  arc_st8((ARC_X_R(c, 21) + INT64_C(48)), ARC_W_R(c, 20));
  /* 13a1b0: subs x10, x9, x8 */
  ARC_X_W(c, 10, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8)));
  /* 13a1b4: asr x10, x10, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(3)) & 63))));
  /* 13a1b8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 13a1bc: madd x10, x10, x11, x12 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 12)) + ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 11)))));
  /* 13a1c0: ldp x11, x12, [x21, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(32));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 12, arc_ld64(_pa + 8));
  }
  /* 13a1c4: add x9, x12, x11 */
  ARC_X_W(c, 9, (ARC_X_R(c, 12) + ARC_X_R(c, 11)));
  /* 13a1c8: csel x10, xzr, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 10)));
  /* 13a1cc: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* 13a1d0: b.ne #0x13a1e8 */
  if (ARC_COND(c, 1)) goto L_13a1e8;
  /* 13a1d4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 13a1d8: bl #0x13b4b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1286620));
  fn1_13b4b0(c);
  /* 13a1dc: ldp x9, x10, [x21, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(32));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 13a1e0: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* 13a1e4: add x9, x10, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + ARC_X_R(c, 9)));
L_13a1e8:;
  /* 13a1e8: mov x10, #0xe38f */
  ARC_X_W(c, 10, UINT64_C(58255));
  /* 13a1ec: mov w11, #0x24 */
  ARC_W_W(c, 11, UINT64_C(36));
  /* 13a1f0: movk x10, #0x8e38, lsl #16 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(2386034688)));
  /* 13a1f4: movk x10, #0x38e3, lsl #32 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446462603027808255)) | UINT64_C(62547608731648)));
  /* 13a1f8: movk x10, #0xe38e, lsl #48 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(281474976710655)) | UINT64_C(16397043293302554624)));
  /* 13a1fc: umulh x10, x9, x10 */
  ARC_X_W(c, 10, arc_umulh(ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 13a200: lsr x10, x10, #5 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(5)) & 63)));
  /* 13a204: msub x9, x10, x11, x9 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) - ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 11)))));
  /* 13a208: mov w11, #0x70 */
  ARC_W_W(c, 11, UINT64_C(112));
  /* 13a20c: ldr x8, [x8, x10, lsl #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 10)) << 3))));
  /* 13a210: nop  */
  /* nop: no architectural effect here */
  /* 13a214: madd x8, x9, x11, x8 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) + ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 11)))));
  /* 13a218: ldr x9, [sp, #0x10] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(16))));
  /* 13a21c: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 13a220: ldr x9, [sp, #0x28] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(40))));
  /* 13a224: ldur q0, [sp, #0x18] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(24))), arc_ld64(((c)->sp + INT64_C(24)) + 8));
  /* 13a228: str x9, [x8, #0x18] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(24)), ARC_X_R(c, 9));
  /* 13a22c: stur q0, [x8, #8] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(8)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 8) + INT64_C(8)) + 8, (c)->q[0].u64[1]);
  /* 13a230: ldr q0, [sp, #0x30] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(48))), arc_ld64(((c)->sp + INT64_C(48)) + 8));
  /* 13a234: ldr x9, [sp, #0x40] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(64))));
  /* 13a238: stp xzr, xzr, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13a23c: str xzr, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 31));
  /* 13a240: str q0, [x8, #0x20] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(32)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 8) + INT64_C(32)) + 8, (c)->q[0].u64[1]);
  /* 13a244: str x9, [x8, #0x30] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(48)), ARC_X_R(c, 9));
  /* 13a248: ldp q1, q0, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 13a24c: ldr q2, [sp, #0x50] */
  arc_q_w(c, 2, arc_ld64(((c)->sp + INT64_C(80))), arc_ld64(((c)->sp + INT64_C(80)) + 8));
  /* 13a250: stp xzr, xzr, [sp, #0x38] */
  { const uint64_t _pa = ((c)->sp + INT64_C(56));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13a254: str xzr, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 31));
  /* 13a258: stp q1, q0, [x8, #0x50] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(80));
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 13a25c: str q2, [x8, #0x40] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(64)), (c)->q[2].u64[0]);
  arc_st64((ARC_X_R(c, 8) + INT64_C(64)) + 8, (c)->q[2].u64[1]);
  /* 13a260: ldr x8, [x21, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(40))));
  /* 13a264: str xzr, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 31));
  /* 13a268: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 13a26c: str x8, [x21, #0x28] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(40)), ARC_X_R(c, 8));
L_13a270:;
  /* 13a270: ldrb w8, [sp, #0x30] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(48))));
  /* 13a274: tbz w8, #0, #0x13a288 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13a288;
  /* 13a278: ldr x8, [sp, #0x30] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(48))));
  /* 13a27c: ldr x0, [sp, #0x40] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(64))));
  /* 13a280: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13a284: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1286792));
  fn1_142608(c);
L_13a288:;
  /* 13a288: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* 13a28c: tbz w8, #0, #0x13a2a0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13a2a0;
  /* 13a290: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 13a294: ldr x0, [sp, #0x28] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(40))));
  /* 13a298: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13a29c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1286816));
  fn1_142608(c);
L_13a2a0:;
  /* 13a2a0: ldp x20, x19, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13a2a4: ldp x22, x21, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 13a2a8: ldp x29, x30, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13a2ac: add sp, sp, #0xe0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(224)));
  /* 13a2b0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13a2b4: ret  */
  return;
L_13a2b8:;
  /* 13a2b8: nop  */
  /* nop: no architectural effect here */
  /* 13a2bc: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13a2c0: stp x3, x1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 3));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 13a2c4: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1286856));
  fn1_1424b8(c);
  /* 13a2c8: ldp x3, x1, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 3, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 13a2cc: cbz w0, #0x13a0b4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13a0b4;
  /* 13a2d0: nop  */
  /* nop: no architectural effect here */
  /* 13a2d4: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13a2d8: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1286876));
  fn1_1424d0(c);
  /* 13a2dc: ldp x3, x1, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 3, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 13a2e0: b #0x13a0b4 */
  goto L_13a0b4;
L_13a2e4:;
  /* 13a2e4: nop  */
  /* nop: no architectural effect here */
  /* 13a2e8: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13a2ec: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 13a2f0: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1286900));
  fn1_1424b8(c);
  /* 13a2f4: ldr x1, [sp, #8] */
  ARC_X_W(c, 1, arc_ld64(((c)->sp + INT64_C(8))));
  /* 13a2f8: cbz w0, #0x13a0c4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13a0c4;
  /* 13a2fc: nop  */
  /* nop: no architectural effect here */
  /* 13a300: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13a304: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1286920));
  fn1_1424d0(c);
  /* 13a308: ldr x1, [sp, #8] */
  ARC_X_W(c, 1, arc_ld64(((c)->sp + INT64_C(8))));
  /* 13a30c: b #0x13a0c4 */
  goto L_13a0c4;
  /* 13a310: b #0x13a314 */
  goto L_13a314;
L_13a314:;
  /* 13a314: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 13a318: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 13a31c: bl #0x13a560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1286944));
  fn1_13a560(c);
  /* 13a320: b #0x13a328 */
  goto L_13a328;
  /* 13a324: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_13a328:;
  /* 13a328: ldr x19, [x19, #8] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 13a32c: cbz x19, #0x13a37c */
  if ((ARC_X_R(c, 19)) == 0) goto L_13a37c;
  /* 13a330: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 13a334: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 13a338: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1286972));
  fn1_bd950(c);
  /* 13a33c: cbnz x0, #0x13a37c */
  if ((ARC_X_R(c, 0)) != 0) goto L_13a37c;
  /* 13a340: mov x21, x19 */
  ARC_X_W(c, 21, ARC_X_R(c, 19));
  /* 13a344: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13a348: ldr x8, [x21], #0x10 */
  { const uint64_t _a = ARC_X_R(c, 21);
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 13a34c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 13a350: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1286996));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 13a354: ldar x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 13a358: cbz x8, #0x13a36c */
  if ((ARC_X_R(c, 8)) == 0) goto L_13a36c;
  /* 13a35c: add x1, x19, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* 13a360: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 13a364: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1287016));
  fn1_bd950(c);
  /* 13a368: cbnz x0, #0x13a37c */
  if ((ARC_X_R(c, 0)) != 0) goto L_13a37c;
L_13a36c:;
  /* 13a36c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 13a370: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13a374: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 13a378: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1287036));
  arc_dispatch(c, ARC_X_R(c, 8));
L_13a37c:;
  /* 13a37c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13a380: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1287044));
  fn1_9cc20(c);
}

void fn1_140da8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039242152));
  /* 140da8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 140dac: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 140db0: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 140db4: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* 140db8: adrp x8, #0x4f000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(323584)));
  /* 140dbc: add x8, x8, #0xf77 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3959)));
  /* 140dc0: stp x0, x1, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 140dc4: stp x8, x2, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 140dc8: cbz x2, #0x140dec */
  if ((ARC_X_R(c, 2)) == 0) goto L_140dec;
  /* 140dcc: str wzr, [x2] */
  arc_st32(ARC_X_R(c, 2), ARC_W_R(c, 31));
  /* 140dd0: nop  */
  /* nop: no architectural effect here */
  /* 140dd4: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 140dd8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 140ddc: tbz w8, #0, #0x140e58 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_140e58;
L_140de0:;
  /* 140de0: nop  */
  /* nop: no architectural effect here */
  /* 140de4: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 140de8: str x8, [x2, #8] */
  arc_st64((ARC_X_R(c, 2) + INT64_C(8)), ARC_X_R(c, 8));
L_140dec:;
  /* 140dec: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* 140df0: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 140df4: ldrb w10, [x1] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 1)));
  /* 140df8: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 140dfc: ldr x8, [x1, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* 140e00: csinc x0, x9, x0, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 0)) + 1)));
  /* 140e04: tst w10, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1)));
  /* 140e08: csinc x1, x8, x1, ne */
  ARC_X_W(c, 1, (ARC_COND(c, 1) ? (ARC_X_R(c, 8)) : ((ARC_X_R(c, 1)) + 1)));
  /* 140e0c: bl #0x144858 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1314320));
  fn1_144858(c);
  /* 140e10: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 140e14: b.ne #0x140e48 */
  if (ARC_COND(c, 1)) goto L_140e48;
  /* 140e18: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1314332));
  fn1_142a58(c);
  /* 140e1c: nop  */
  /* nop: no architectural effect here */
  /* 140e20: adr x9, #0x159208 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 140e24: ldr w8, [x0] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 0)));
  /* 140e28: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 140e2c: tbz w9, #0, #0x140e98 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_140e98;
L_140e30:;
  /* 140e30: nop  */
  /* nop: no architectural effect here */
  /* 140e34: adr x9, #0x156d38 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 140e38: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 140e3c: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 140e40: stp x8, x9, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 140e44: bl #0x139ad0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1314376));
  fn1_139ad0(c);
L_140e48:;
  /* 140e48: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 140e4c: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 140e50: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 140e54: ret  */
  return;
L_140e58:;
  /* 140e58: nop  */
  /* nop: no architectural effect here */
  /* 140e5c: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 140e60: stp x1, x0, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 140e64: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 140e68: str x2, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 2));
  /* 140e6c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1314416));
  fn1_1424b8(c);
  /* 140e70: ldp x2, x1, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 140e74: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 140e78: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 140e7c: cbz w8, #0x140de0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_140de0;
  /* 140e80: nop  */
  /* nop: no architectural effect here */
  /* 140e84: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 140e88: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1314444));
  fn1_1424d0(c);
  /* 140e8c: ldp x2, x1, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 140e90: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 140e94: b #0x140de0 */
  goto L_140de0;
L_140e98:;
  /* 140e98: nop  */
  /* nop: no architectural effect here */
  /* 140e9c: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 140ea0: str x8, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 8));
  /* 140ea4: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1314472));
  fn1_1424b8(c);
  /* 140ea8: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 140eac: cbz w0, #0x140e30 */
  if ((ARC_W_R(c, 0)) == 0) goto L_140e30;
  /* 140eb0: nop  */
  /* nop: no architectural effect here */
  /* 140eb4: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 140eb8: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1314492));
  fn1_1424d0(c);
  /* 140ebc: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 140ec0: b #0x140e30 */
  goto L_140e30;
}

void fn1_142848(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248968));
  /* 142848: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 14284c: ldr x17, [x16, #0xff8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(4088))));
  /* 142850: add x16, x16, #0xff8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(4088)));
  /* 142854: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142858: nop  */
  /* nop: no architectural effect here */
  /* 14285c: nop  */
  /* nop: no architectural effect here */
}

void fn1_142e48(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250504));
  /* 142e48: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142e4c: ldr x17, [x16, #0x1f8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(504))));
  /* 142e50: add x16, x16, #0x1f8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(504)));
  /* 142e54: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142e58: nop  */
  /* nop: no architectural effect here */
  /* 142e5c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143448(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252040));
  /* 143448: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14344c: ldr x17, [x16, #0x3f8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1016))));
  /* 143450: add x16, x16, #0x3f8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1016)));
  /* 143454: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143458: nop  */
  /* nop: no architectural effect here */
  /* 14345c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143a48(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253576));
  /* 143a48: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143a4c: ldr x17, [x16, #0x5f8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1528))));
  /* 143a50: add x16, x16, #0x5f8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1528)));
  /* 143a54: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143a58: nop  */
  /* nop: no architectural effect here */
  /* 143a5c: nop  */
  /* nop: no architectural effect here */
}

void fn1_144048(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255112));
  /* 144048: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14404c: ldr x17, [x16, #0x7f8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2040))));
  /* 144050: add x16, x16, #0x7f8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2040)));
  /* 144054: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144058: nop  */
  /* nop: no architectural effect here */
  /* 14405c: nop  */
  /* nop: no architectural effect here */
}

void fn1_144648(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256648));
  /* 144648: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14464c: ldr x17, [x16, #0x9f8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2552))));
  /* 144650: add x16, x16, #0x9f8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2552)));
  /* 144654: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144658: nop  */
  /* nop: no architectural effect here */
  /* 14465c: nop  */
  /* nop: no architectural effect here */
}

