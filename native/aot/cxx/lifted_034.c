#include "lifted.h"

void fn1_9d7ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038573036));
  /* 9d7ec: bti c */
  /* bti: no architectural effect here */
  /* 9d7f0: add x8, x0, w1, sxtw #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ((uint64_t)(((uint64_t)(int64_t)(int32_t)(ARC_W_R(c, 1)))) << 3)));
  /* 9d7f4: stur d0, [x8, #-0xe0] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(-224)), (c)->q[0].u64[0]);
  /* 9d7f8: ret  */
  return;
}

void fn1_a1ed4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038591188));
  /* a1ed4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a1ed8: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a1edc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a1ee0: adrp x0, #0x51000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(331776)));
  /* a1ee4: add x0, x0, #0x4e8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1256)));
  /* a1ee8: bl #0xa23d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(663276));
  fn1_a23d8(c);
}

void fn1_a32dc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038596316));
  /* a32dc: bti c */
  /* bti: no architectural effect here */
  /* a32e0: cbz x1, #0xa3358 */
  if ((ARC_X_R(c, 1)) == 0) goto L_a3358;
  /* a32e4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a32e8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a32ec: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* a32f0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a32f4: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a32f8: adrp x2, #0x151000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a32fc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a3300: ldr x8, [x8, #0x9a8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2472))));
  /* a3304: ldr x2, [x2, #0x9d0] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 2) + INT64_C(2512))));
  /* a3308: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* a330c: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* a3310: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* a3314: bl #0x142830 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(668440));
  fn1_142830(c);
  /* a3318: cbz x0, #0xa3348 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a3348;
  /* a331c: ldr w8, [x19, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(16))));
  /* a3320: ldr w9, [x0, #0x10] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* a3324: bics wzr, w9, w8 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 9) & (~ARC_W_R(c, 8)));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 31, _r); }
  /* a3328: b.ne #0xa3344 */
  if (ARC_COND(c, 1)) goto L_a3344;
  /* a332c: ldr x8, [x19, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* a3330: ldr x9, [x0, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* a3334: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* a3338: ldr x9, [x9, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* a333c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a3340: b.eq #0xa3360 */
  if (ARC_COND(c, 0)) goto L_a3360;
L_a3344:;
  /* a3344: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
L_a3348:;
  /* a3348: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* a334c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a3350: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a3354: ret  */
  return;
L_a3358:;
  /* a3358: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* a335c: ret  */
  return;
L_a3360:;
  /* a3360: ldr x8, [x19, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* a3364: ldr x9, [x0, #0x20] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(32))));
  /* a3368: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* a336c: ldr x9, [x9, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* a3370: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a3374: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* a3378: b #0xa3348 */
  goto L_a3348;
}

void fn1_aa410(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038625296));
  /* aa410: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* aa414: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* aa418: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* aa41c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* aa420: ldrb w19, [x0, #0x20] */
  ARC_W_W(c, 19, arc_ld8((ARC_X_R(c, 0) + INT64_C(32))));
  /* aa424: tbz w19, #0, #0xaa430 */
  if (((ARC_W_R(c, 19)) >> 0 & 1) == 0) goto L_aa430;
  /* aa428: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
  /* aa42c: b #0xaa478 */
  goto L_aa478;
L_aa430:;
  /* aa430: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* aa434: ldr x8, [x0, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* aa438: strb w9, [x0, #0x20] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(32)), ARC_W_R(c, 9));
  /* aa43c: ldurh w9, [x8, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 8) + INT64_C(9))));
  /* aa440: sxtb w10, w9 */
  ARC_W_W(c, 10, ((int32_t)(int8_t)(ARC_W_R(c, 9))));
  /* aa444: cmn w10, #0x40 */
  (void)arc_add32(c, ARC_W_R(c, 10), UINT64_C(64), 0);
  /* aa448: b.ge #0xaa46c */
  if (ARC_COND(c, 10)) goto L_aa46c;
  /* aa44c: ldr x9, [x8] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 8)));
  /* aa450: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* aa454: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* aa458: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* aa45c: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(697440));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* aa460: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* aa464: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* aa468: b #0xaa474 */
  goto L_aa474;
L_aa46c:;
  /* aa46c: tst w9, #0xc0 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(192)));
  /* aa470: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
L_aa474:;
  /* aa474: strb w19, [x0, #0x20] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(32)), ARC_W_R(c, 19));
L_aa478:;
  /* aa478: and w0, w8, #1 */
  ARC_W_W(c, 0, (ARC_W_R(c, 8) & UINT64_C(1)));
  /* aa47c: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* aa480: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* aa484: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* aa488: ret  */
  return;
  /* aa48c: strb w19, [x20, #0x20] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(32)), ARC_W_R(c, 19));
  /* aa490: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(697492));
  fn1_9cc20(c);
}

void fn1_b16f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038654704));
  /* b16f0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b16f4: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b16f8: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b16fc: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b1700: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b1704: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* b1708: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b170c: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* b1710: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* b1714: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b1718: b.hi #0xb173c */
  if (ARC_COND(c, 8)) goto L_b173c;
  /* b171c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b1720: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b1724: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(726824));
  fn1_1428a8(c);
  /* b1728: cbz x0, #0xb178c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b178c;
  /* b172c: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b1730: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b1734: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b1738: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_b173c:;
  /* b173c: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* b1740: add x0, x21, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* b1744: adrp x8, #0x14a000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1351680)));
  /* b1748: add x8, x8, #0xd98 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3480)));
  /* b174c: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* b1750: mov w9, #0x4b */
  ARC_W_W(c, 9, UINT64_C(75));
  /* b1754: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* b1758: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* b175c: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* b1760: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* b1764: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* b1768: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* b176c: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* b1770: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* b1774: str x9, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 9));
  /* b1778: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b177c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b1780: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b1784: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b1788: ret  */
  return;
L_b178c:;
  /* b178c: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(726928));
  fn1_142488(c);
}

void fn1_b58e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038671588));
  /* b58e4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b58e8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b58ec: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b58f0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b58f4: ldp x9, x10, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b58f8: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b58fc: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* b5900: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b5904: add x11, x9, #0xa */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(10)));
  /* b5908: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* b590c: b.ls #0xb593c */
  if (ARC_COND(c, 9)) goto L_b593c;
  /* b5910: lsl x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b5914: add x9, x9, #0x3ea */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1002)));
  /* b5918: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* b591c: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b5920: csel x1, x10, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* b5924: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b5928: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(743724));
  fn1_142878(c);
  /* b592c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b5930: cbz x0, #0xb59f8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b59f8;
  /* b5934: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b5938: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
L_b593c:;
  /* b593c: adrp x10, #0x52000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(335872)));
  /* b5940: add x10, x10, #0x30b */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(779)));
  /* b5944: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* b5948: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* b594c: mov w9, #0x2073 */
  ARC_W_W(c, 9, UINT64_C(8307));
  /* b5950: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b5954: strh w9, [x8, #8] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 9));
  /* b5958: str x10, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* b595c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b5960: ldr x20, [x20, #0x10] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* b5964: add x8, x8, #0xa */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(10)));
  /* b5968: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* b596c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b5970: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b5974: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* b5978: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(743804));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b597c: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b5980: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b5984: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b5988: b.eq #0xb59a0 */
  if (ARC_COND(c, 0)) goto L_b59a0;
  /* b598c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b5990: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b5994: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b5998: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b599c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(743840));
  arc_dispatch(c, ARC_X_R(c, 8));
L_b59a0:;
  /* b59a0: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b59a4: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b59a8: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b59ac: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b59b0: b.ls #0xb59dc */
  if (ARC_COND(c, 9)) goto L_b59dc;
  /* b59b4: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b59b8: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b59bc: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b59c0: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b59c4: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b59c8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(743884));
  fn1_142878(c);
  /* b59cc: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b59d0: cbz x0, #0xb59fc */
  if ((ARC_X_R(c, 0)) == 0) goto L_b59fc;
  /* b59d4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b59d8: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b59dc:;
  /* b59dc: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b59e0: mov w9, #0x3b */
  ARC_W_W(c, 9, UINT64_C(59));
  /* b59e4: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b59e8: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b59ec: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b59f0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b59f4: ret  */
  return;
L_b59f8:;
  /* b59f8: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(743932));
  fn1_1427b8(c);
L_b59fc:;
  /* b59fc: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(743936));
  fn1_1427b8(c);
}

void fn1_b8320(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038682400));
  /* b8320: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b8324: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b8328: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b832c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b8330: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b8334: ldp x8, x9, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b8338: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b833c: ldr x0, [x1] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* b8340: ldr w21, [x1, #0x20] */
  ARC_W_W(c, 21, arc_ld32((ARC_X_R(c, 1) + INT64_C(32))));
  /* b8344: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b8348: str wzr, [x1, #0x20] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(32)), ARC_W_R(c, 31));
  /* b834c: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b8350: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b8354: b.ls #0xb837c */
  if (ARC_COND(c, 9)) goto L_b837c;
  /* b8358: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b835c: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b8360: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b8364: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b8368: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b836c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(754544));
  fn1_142878(c);
  /* b8370: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b8374: cbz x0, #0xb8400 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b8400;
  /* b8378: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b837c:;
  /* b837c: mov w9, #0x3c */
  ARC_W_W(c, 9, UINT64_C(60));
  /* b8380: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b8384: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b8388: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b838c: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b8390: add x0, x20, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(16)));
  /* b8394: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b8398: bl #0xafa48 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(754588));
  fn1_afa48(c);
  /* b839c: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b83a0: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b83a4: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b83a8: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b83ac: b.ls #0xb83d4 */
  if (ARC_COND(c, 9)) goto L_b83d4;
  /* b83b0: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b83b4: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b83b8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b83bc: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b83c0: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b83c4: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(754632));
  fn1_142878(c);
  /* b83c8: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b83cc: cbz x0, #0xb8404 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b8404;
  /* b83d0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b83d4:;
  /* b83d4: mov w9, #0x3e */
  ARC_W_W(c, 9, UINT64_C(62));
  /* b83d8: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b83dc: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b83e0: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b83e4: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b83e8: str w21, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 21));
  /* b83ec: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b83f0: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b83f4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b83f8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b83fc: ret  */
  return;
L_b8400:;
  /* b8400: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(754692));
  fn1_1427b8(c);
L_b8404:;
  /* b8404: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(754696));
  fn1_1427b8(c);
  /* b8408: str w21, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 21));
  /* b840c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(754704));
  fn1_9cc20(c);
}

void fn1_bb6f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038695664));
  /* bb6f0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bb6f4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bb6f8: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bb6fc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bb700: ldp x9, x10, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* bb704: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* bb708: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* bb70c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* bb710: add x11, x9, #6 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(6)));
  /* bb714: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* bb718: b.ls #0xbb748 */
  if (ARC_COND(c, 9)) goto L_bb748;
  /* bb71c: lsl x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* bb720: add x9, x9, #0x3e6 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(998)));
  /* bb724: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* bb728: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* bb72c: csel x1, x10, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* bb730: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bb734: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(767800));
  fn1_142878(c);
  /* bb738: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bb73c: cbz x0, #0xbb7c4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bb7c4;
  /* bb740: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bb744: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
L_bb748:;
  /* bb748: mov w10, #0x465f */
  ARC_W_W(c, 10, UINT64_C(18015));
  /* bb74c: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* bb750: mov w9, #0x7461 */
  ARC_W_W(c, 9, UINT64_C(29793));
  /* bb754: movk w10, #0x6f6c, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1869348864)));
  /* bb758: strh w9, [x8, #4] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(4)), ARC_W_R(c, 9));
  /* bb75c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bb760: str w10, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* bb764: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bb768: ldr x20, [x20, #0x10] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* bb76c: add x8, x8, #6 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(6)));
  /* bb770: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* bb774: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* bb778: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* bb77c: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* bb780: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(767876));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bb784: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* bb788: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* bb78c: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* bb790: b.ne #0xbb7a4 */
  if (ARC_COND(c, 1)) goto L_bb7a4;
  /* bb794: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bb798: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bb79c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bb7a0: ret  */
  return;
L_bb7a4:;
  /* bb7a4: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* bb7a8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* bb7ac: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* bb7b0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bb7b4: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bb7b8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bb7bc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bb7c0: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_bb7c4:;
  /* bb7c4: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(767944));
  fn1_1427b8(c);
}

void fn1_bdec8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038705864));
  /* bdec8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bdecc: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bded0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bded4: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(777944));
  fn1_142548(c);
  /* bded8: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(777948));
  fn1_142488(c);
}

void fn1_d292c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038790444));
  /* d292c: bti c */
  /* bti: no architectural effect here */
  /* d2930: nop  */
  /* nop: no architectural effect here */
  /* d2934: adr x0, #0x5080d */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(329741)));
  /* d2938: ret  */
  return;
}

void fn1_d7ec0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038812352));
  /* d7ec0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d7ec4: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d7ec8: str x25, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 25));
  /* d7ecc: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* d7ed0: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* d7ed4: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d7ed8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* d7edc: cbz x1, #0xd7ff4 */
  if ((ARC_X_R(c, 1)) == 0) goto L_d7ff4;
  /* d7ee0: ldp x8, x10, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* d7ee4: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* d7ee8: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* d7eec: mov w9, #0x16 */
  ARC_W_W(c, 9, UINT64_C(22));
  /* d7ef0: and x11, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* d7ef4: ubfx x12, x8, #1, #7 */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 8)) >> 1) & UINT64_C(127)));
  /* d7ef8: sub x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* d7efc: csel x24, x9, x11, eq */
  ARC_X_W(c, 24, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 11)));
  /* d7f00: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* d7f04: and w8, w8, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(255)));
  /* d7f08: csel x19, x12, x10, eq */
  ARC_X_W(c, 19, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* d7f0c: sub x9, x24, x19 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) - ARC_X_R(c, 19)));
  /* d7f10: cmp x9, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 1));
  /* d7f14: b.hs #0xd7f7c */
  if (ARC_COND(c, 2)) goto L_d7f7c;
  /* d7f18: add x23, x19, x1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 19) + ARC_X_R(c, 1)));
  /* d7f1c: mov x9, #-9 */
  ARC_X_W(c, 9, UINT64_C(18446744073709551607));
  /* d7f20: sub x10, x23, x24 */
  ARC_X_W(c, 10, (ARC_X_R(c, 23) - ARC_X_R(c, 24)));
  /* d7f24: sub x9, x9, x24 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 24)));
  /* d7f28: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* d7f2c: b.hi #0xd8010 */
  if (ARC_COND(c, 8)) goto L_d8010;
  /* d7f30: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* d7f34: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* d7f38: mov x8, #-0xe */
  ARC_X_W(c, 8, UINT64_C(18446744073709551602));
  /* d7f3c: movk x8, #0x7fff, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(9223090561878065152)));
  /* d7f40: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* d7f44: csinc x20, x9, x0, ne */
  ARC_X_W(c, 20, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 0)) + 1)));
  /* d7f48: cmp x24, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* d7f4c: b.hi #0xd7f88 */
  if (ARC_COND(c, 8)) goto L_d7f88;
  /* d7f50: lsl x8, x24, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 24)) << ((UINT64_C(1)) & 63)));
  /* d7f54: mov w10, #0x1a */
  ARC_W_W(c, 10, UINT64_C(26));
  /* d7f58: cmp x23, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* d7f5c: csel x8, x23, x8, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 23)) : ARC_X_R(c, 8)));
  /* d7f60: orr x9, x8, #7 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) | UINT64_C(7)));
  /* d7f64: cmp x9, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(23));
  /* d7f68: csinc x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 9)) + 1)));
  /* d7f6c: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* d7f70: mov w8, #0x17 */
  ARC_W_W(c, 8, UINT64_C(23));
  /* d7f74: csel x22, x8, x9, lo */
  ARC_X_W(c, 22, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d7f78: b #0xd7f8c */
  goto L_d7f8c;
L_d7f7c:;
  /* d7f7c: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* d7f80: add x23, x19, x1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 19) + ARC_X_R(c, 1)));
  /* d7f84: b #0xd7fd4 */
  goto L_d7fd4;
L_d7f88:;
  /* d7f88: mov x22, #-9 */
  ARC_X_W(c, 22, UINT64_C(18446744073709551607));
L_d7f8c:;
  /* d7f8c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* d7f90: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(884628));
  fn1_1428f0(c);
  /* d7f94: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* d7f98: cbz x19, #0xd7fac */
  if ((ARC_X_R(c, 19)) == 0) goto L_d7fac;
  /* d7f9c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* d7fa0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* d7fa4: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* d7fa8: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(884652));
  fn1_1449f0(c);
L_d7fac:;
  /* d7fac: add x1, x24, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(1)));
  /* d7fb0: cmp x1, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(23));
  /* d7fb4: b.eq #0xd7fc0 */
  if (ARC_COND(c, 0)) goto L_d7fc0;
  /* d7fb8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* d7fbc: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(884672));
  fn1_142608(c);
L_d7fc0:;
  /* d7fc0: orr x8, x22, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) | UINT64_C(1)));
  /* d7fc4: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* d7fc8: stp x19, x21, [x25, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* d7fcc: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* d7fd0: and w8, w8, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(255)));
L_d7fd4:;
  /* d7fd4: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* d7fd8: csinc x9, x21, x0, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 21)) : ((ARC_X_R(c, 0)) + 1)));
  /* d7fdc: tbnz w8, #0, #0xd7fec */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_d7fec;
  /* d7fe0: lsl w8, w23, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 23)) << ((UINT64_C(1)) & 31)));
  /* d7fe4: strb w8, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* d7fe8: b #0xd7ff0 */
  goto L_d7ff0;
L_d7fec:;
  /* d7fec: str x23, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 23));
L_d7ff0:;
  /* d7ff0: strb wzr, [x9, x23] */
  arc_st8((ARC_X_R(c, 9) + ARC_X_R(c, 23)), ARC_W_R(c, 31));
L_d7ff4:;
  /* d7ff4: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d7ff8: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* d7ffc: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* d8000: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* d8004: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d8008: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d800c: ret  */
  return;
L_d8010:;
  /* d8010: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(884756));
  fn1_d7d54(c);
}

void fn1_db960(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038827360));
  /* db960: bti c */
  /* bti: no architectural effect here */
  /* db964: ldp w9, w0, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 0, arc_ld32(_pa + 4));
  }
  /* db968: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* db96c: add w9, w9, #2 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(2)));
  /* db970: lsl x1, x8, x9 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 8)) << ((ARC_X_R(c, 9)) & 63)));
  /* db974: ret  */
  return;
}

void fn1_e0188(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038845832));
  /* e0188: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e018c: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e0190: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* e0194: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e0198: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e019c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e01a0: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e01a4: ldp x9, x11, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* e01a8: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e01ac: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e01b0: csinc x21, x11, x0, ne */
  ARC_X_W(c, 21, (ARC_COND(c, 1) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 0)) + 1)));
  /* e01b4: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e01b8: subs x23, x8, x2 */
  ARC_X_W(c, 23, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 2)));
  /* e01bc: b.ls #0xe01f0 */
  if (ARC_COND(c, 9)) goto L_e01f0;
  /* e01c0: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* e01c4: add x22, x21, x2 */
  ARC_X_W(c, 22, (ARC_X_R(c, 21) + ARC_X_R(c, 2)));
  /* e01c8: cbz x3, #0xe01f8 */
  if ((ARC_X_R(c, 3)) == 0) goto L_e01f8;
  /* e01cc: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
L_e01d0:;
  /* e01d0: ldrb w1, [x22] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 22)));
  /* e01d4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e01d8: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* e01dc: bl #0x1428d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(917984));
  fn1_1428d8(c);
  /* e01e0: cbz x0, #0xe01f8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_e01f8;
  /* e01e4: subs x23, x23, #1 */
  ARC_X_W(c, 23, arc_sub64(c, ARC_X_R(c, 23), UINT64_C(1)));
  /* e01e8: add x22, x22, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* e01ec: b.ne #0xe01d0 */
  if (ARC_COND(c, 1)) goto L_e01d0;
L_e01f0:;
  /* e01f0: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* e01f4: b #0xe01fc */
  goto L_e01fc;
L_e01f8:;
  /* e01f8: sub x0, x22, x21 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) - ARC_X_R(c, 21)));
L_e01fc:;
  /* e01fc: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e0200: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* e0204: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e0208: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e020c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e0210: ret  */
  return;
}

void fn1_e2b7c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038856572));
  /* e2b7c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e2b80: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e2b84: str x25, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 25));
  /* e2b88: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e2b8c: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e2b90: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e2b94: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e2b98: mov x8, #0x3ffffffffffffff8 */
  ARC_X_W(c, 8, UINT64_C(4611686018427387896));
  /* e2b9c: cmp x1, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 8));
  /* e2ba0: b.hs #0xe2cc8 */
  if (ARC_COND(c, 2)) goto L_e2cc8;
  /* e2ba4: ldr x21, [x0] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 0)));
  /* e2ba8: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* e2bac: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e2bb0: and x8, x21, #0xfffffffffffffffe */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) & UINT64_C(18446744073709551614)));
  /* e2bb4: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e2bb8: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* e2bbc: sub x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* e2bc0: csel x9, x9, x8, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* e2bc4: cmp x1, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 9));
  /* e2bc8: b.ls #0xe2c80 */
  if (ARC_COND(c, 9)) goto L_e2c80;
  /* e2bcc: orr x9, x1, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) | UINT64_C(1)));
  /* e2bd0: mov w10, #7 */
  ARC_W_W(c, 10, UINT64_C(7));
  /* e2bd4: ldr x11, [x19, #8] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* e2bd8: cmp x9, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(5));
  /* e2bdc: ubfx x12, x21, #1, #7 */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 21)) >> 1) & UINT64_C(127)));
  /* e2be0: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e2be4: cmp x1, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(4));
  /* e2be8: mov w10, #4 */
  ARC_W_W(c, 10, UINT64_C(4));
  /* e2bec: csel x23, x9, x10, hi */
  ARC_X_W(c, 23, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* e2bf0: tst w21, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 21) & UINT64_C(1)));
  /* e2bf4: csel x24, x10, x8, eq */
  ARC_X_W(c, 24, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* e2bf8: csel x22, x12, x11, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* e2bfc: cmp x23, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 23), UINT64_C(4));
  /* e2c00: b.ls #0xe2c1c */
  if (ARC_COND(c, 9)) goto L_e2c1c;
  /* e2c04: lsl x8, x23, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 23)) << ((UINT64_C(2)) & 63)));
  /* e2c08: cmp x23, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 24));
  /* e2c0c: b.ls #0xe2c9c */
  if (ARC_COND(c, 9)) goto L_e2c9c;
  /* e2c10: add x0, x8, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* e2c14: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(928792));
  fn1_1428f0(c);
  /* e2c18: b #0xe2ca4 */
  goto L_e2ca4;
L_e2c1c:;
  /* e2c1c: ldr x21, [x19, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* e2c20: add x20, x19, #4 */
  ARC_X_W(c, 20, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* e2c24: mov w25, #1 */
  ARC_W_W(c, 25, UINT64_C(1));
  /* e2c28: adds x8, x22, #1 */
  ARC_X_W(c, 8, arc_add64(c, ARC_X_R(c, 22), UINT64_C(1), 0));
  /* e2c2c: b.hs #0xe2c40 */
  if (ARC_COND(c, 2)) goto L_e2c40;
L_e2c30:;
  /* e2c30: lsl x2, x8, #2 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* e2c34: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e2c38: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* e2c3c: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(928832));
  fn1_1449f0(c);
L_e2c40:;
  /* e2c40: tbnz w25, #0, #0xe2c60 */
  if (((ARC_W_R(c, 25)) >> 0 & 1) != 0) goto L_e2c60;
  /* e2c44: cmp x23, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 23), UINT64_C(5));
  /* e2c48: b.lo #0xe2c78 */
  if (ARC_COND(c, 3)) goto L_e2c78;
L_e2c4c:;
  /* e2c4c: add x8, x23, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* e2c50: str x20, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 20));
  /* e2c54: orr x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(1)));
  /* e2c58: stp x8, x22, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* e2c5c: b #0xe2c80 */
  goto L_e2c80;
L_e2c60:;
  /* e2c60: lsl x8, x24, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 24)) << ((UINT64_C(2)) & 63)));
  /* e2c64: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e2c68: add x1, x8, #4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* e2c6c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(928880));
  fn1_142608(c);
  /* e2c70: cmp x23, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 23), UINT64_C(5));
  /* e2c74: b.hs #0xe2c4c */
  if (ARC_COND(c, 2)) goto L_e2c4c;
L_e2c78:;
  /* e2c78: lsl w8, w22, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 22)) << ((UINT64_C(1)) & 31)));
  /* e2c7c: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_e2c80:;
  /* e2c80: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e2c84: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* e2c88: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e2c8c: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e2c90: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e2c94: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e2c98: ret  */
  return;
L_e2c9c:;
  /* e2c9c: add x0, x8, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* e2ca0: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(928932));
  fn1_1428f0(c);
L_e2ca4:;
  /* e2ca4: and w8, w21, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 21) & UINT64_C(255)));
  /* e2ca8: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* e2cac: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e2cb0: ands w25, w8, #1 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 25, _r); }
  /* e2cb4: add x8, x19, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* e2cb8: csel x21, x8, x9, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* e2cbc: adds x8, x22, #1 */
  ARC_X_W(c, 8, arc_add64(c, ARC_X_R(c, 22), UINT64_C(1), 0));
  /* e2cc0: b.lo #0xe2c30 */
  if (ARC_COND(c, 3)) goto L_e2c30;
  /* e2cc4: b #0xe2c40 */
  goto L_e2c40;
L_e2cc8:;
  /* e2cc8: bl #0xe2274 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(928972));
  fn1_e2274(c);
  /* e2ccc: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(928976));
  fn1_142548(c);
  /* e2cd0: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e2cd4: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* e2cd8: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e2cdc: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e2ce0: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e2ce4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e2ce8: b #0x142980 */
  fn1_142980(c); return;
}

void fn1_e6f10(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038873872));
  /* e6f10: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e6f14: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* e6f18: str d8, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), (c)->q[8].u64[0]);
  /* e6f1c: stp x29, x30, [sp, #0x28] */
  { const uint64_t _pa = ((c)->sp + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e6f20: str x23, [sp, #0x38] */
  arc_st64(((c)->sp + INT64_C(56)), ARC_X_R(c, 23));
  /* e6f24: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e6f28: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e6f2c: add x29, sp, #0x28 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(40)));
  /* e6f30: fmov s8, s0 */
  arc_su_w(c, 8, (uint32_t)(ARC_SU_R(c, 0)));
  /* e6f34: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* e6f38: stp xzr, xzr, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* e6f3c: str xzr, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 31));
  /* e6f40: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* e6f44: mov w1, #0x16 */
  ARC_W_W(c, 1, UINT64_C(22));
  /* e6f48: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* e6f4c: add x20, sp, #8 */
  ARC_X_W(c, 20, ((c)->sp + UINT64_C(8)));
  /* e6f50: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(946004));
  fn1_142d10(c);
  /* e6f54: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* e6f58: fcvt d8, s8 */
  arc_d_w(c, 8, (double)(ARC_S_R(c, 8)));
  /* e6f5c: ldr x9, [sp, #0x10] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(16))));
  /* e6f60: orr x21, x20, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 20) | UINT64_C(1)));
  /* e6f64: adrp x20, #0x4f000 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(323584)));
  /* e6f68: add x20, x20, #0x918 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(2328)));
  /* e6f6c: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e6f70: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e6f74: mov w22, #1 */
  ARC_W_W(c, 22, UINT64_C(1));
  /* e6f78: csel x23, x10, x9, eq */
  ARC_X_W(c, 23, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e6f7c: b #0xe6f90 */
  goto L_e6f90;
L_e6f80:;
  /* e6f80: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* e6f84: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* e6f88: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(946060));
  fn1_142d10(c);
L_e6f8c:;
  /* e6f8c: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
L_e6f90:;
  /* e6f90: fmov d0, d8 */
  arc_du_w(c, 0, (uint64_t)(ARC_DU_R(c, 8)));
  /* e6f94: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
  /* e6f98: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e6f9c: add x1, x23, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* e6fa0: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* e6fa4: csel x0, x21, x9, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 21)) : ARC_X_R(c, 9)));
  /* e6fa8: bl #0x1428c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(946092));
  fn1_1428c0(c);
  /* e6fac: tbnz w0, #0x1f, #0xe6fc4 */
  if (((ARC_W_R(c, 0)) >> 31 & 1) != 0) goto L_e6fc4;
  /* e6fb0: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* e6fb4: cmp x23, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* e6fb8: b.hs #0xe7008 */
  if (ARC_COND(c, 2)) goto L_e7008;
  /* e6fbc: mov x23, x8 */
  ARC_X_W(c, 23, ARC_X_R(c, 8));
  /* e6fc0: b #0xe6fc8 */
  goto L_e6fc8;
L_e6fc4:;
  /* e6fc4: orr x23, x22, x23, lsl #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 22) | ((uint64_t)(ARC_X_R(c, 23)) << 1)));
L_e6fc8:;
  /* e6fc8: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* e6fcc: ldr x9, [sp, #0x10] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(16))));
  /* e6fd0: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e6fd4: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e6fd8: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e6fdc: subs x1, x23, x9 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 9)));
  /* e6fe0: b.hi #0xe6f80 */
  if (ARC_COND(c, 8)) goto L_e6f80;
  /* e6fe4: tbnz w8, #0, #0xe6ff8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_e6ff8;
  /* e6fe8: lsl w8, w23, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 23)) << ((UINT64_C(1)) & 31)));
  /* e6fec: strb w8, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 8));
  /* e6ff0: mov x8, x21 */
  ARC_X_W(c, 8, ARC_X_R(c, 21));
  /* e6ff4: b #0xe7000 */
  goto L_e7000;
L_e6ff8:;
  /* e6ff8: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* e6ffc: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
L_e7000:;
  /* e7000: strb wzr, [x8, x23] */
  arc_st8((ARC_X_R(c, 8) + ARC_X_R(c, 23)), ARC_W_R(c, 31));
  /* e7004: b #0xe6f8c */
  goto L_e6f8c;
L_e7008:;
  /* e7008: ldrb w9, [sp, #8] */
  ARC_W_W(c, 9, arc_ld8(((c)->sp + INT64_C(8))));
  /* e700c: ldr x10, [sp, #0x10] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(16))));
  /* e7010: lsr x11, x9, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* e7014: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e7018: csel x10, x11, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* e701c: subs x1, x8, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10)));
  /* e7020: b.ls #0xe7034 */
  if (ARC_COND(c, 9)) goto L_e7034;
  /* e7024: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* e7028: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* e702c: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(946224));
  fn1_142d10(c);
  /* e7030: b #0xe7050 */
  goto L_e7050;
L_e7034:;
  /* e7034: tbnz w9, #0, #0xe7044 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_e7044;
  /* e7038: lsl w9, w0, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 0)) << ((UINT64_C(1)) & 31)));
  /* e703c: strb w9, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 9));
  /* e7040: b #0xe704c */
  goto L_e704c;
L_e7044:;
  /* e7044: ldr x21, [sp, #0x18] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(24))));
  /* e7048: str x8, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 8));
L_e704c:;
  /* e704c: strb wzr, [x21, x8] */
  arc_st8((ARC_X_R(c, 21) + ARC_X_R(c, 8)), ARC_W_R(c, 31));
L_e7050:;
  /* e7050: ldur q0, [sp, #8] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))), arc_ld64(((c)->sp + INT64_C(8)) + 8));
  /* e7054: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* e7058: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* e705c: stp xzr, xzr, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* e7060: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* e7064: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* e7068: str xzr, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 31));
  /* e706c: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(946288));
  fn1_142e00(c);
  /* e7070: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e7074: ldr x23, [sp, #0x38] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(56))));
  /* e7078: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e707c: ldr d8, [sp, #0x20] */
  arc_du_w(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
  /* e7080: ldp x29, x30, [sp, #0x28] */
  { const uint64_t _pa = ((c)->sp + INT64_C(40));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e7084: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* e7088: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e708c: ret  */
  return;
  /* e7090: b #0xe7098 */
  goto L_e7098;
  /* e7094: b #0xe7098 */
  goto L_e7098;
L_e7098:;
  /* e7098: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e709c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* e70a0: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(946340));
  fn1_142e00(c);
  /* e70a4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e70a8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(946348));
  fn1_9cc20(c);
}

void fn1_e9b10(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038885136));
  /* e9b10: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e9b14: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e9b18: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* e9b1c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e9b20: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e9b24: bl #0x1431f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(957224));
  fn1_1431f0(c);
  /* e9b28: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e9b2c: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* e9b30: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* e9b34: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e9b38: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e9b3c: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_eb830(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038892592));
  /* eb830: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eb834: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eb838: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* eb83c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eb840: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* eb844: ldr x0, [x0] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 0)));
  /* eb848: cbz x0, #0xeb868 */
  if ((ARC_X_R(c, 0)) == 0) goto L_eb868;
  /* eb84c: bl #0x143328 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964688));
  fn1_143328(c);
  /* eb850: cbnz w0, #0xeb86c */
  if ((ARC_W_R(c, 0)) != 0) goto L_eb86c;
  /* eb854: str xzr, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 31));
  /* eb858: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* eb85c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eb860: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eb864: ret  */
  return;
L_eb868:;
  /* eb868: mov w0, #0x16 */
  ARC_W_W(c, 0, UINT64_C(22));
L_eb86c:;
  /* eb86c: adrp x1, #0x50000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(327680)));
  /* eb870: add x1, x1, #0xb8c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2956)));
  /* eb874: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964728));
  fn1_142a40(c);
}

void fn1_ed538(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038900024));
  /* ed538: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ed53c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ed540: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ed544: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ed548: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ed54c: ldr x8, [x1, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* ed550: nop  */
  /* nop: no architectural effect here */
  /* ed554: adr x22, #0x15dc40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432640)));
  /* ed558: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* ed55c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ed560: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* ed564: b.eq #0xed574 */
  if (ARC_COND(c, 0)) goto L_ed574;
  /* ed568: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* ed56c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ed570: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(972148));
  fn1_db2e0(c);
L_ed574:;
  /* ed574: ldr x21, [x20, #8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* ed578: cmp x21, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 22));
  /* ed57c: b.eq #0xed5a0 */
  if (ARC_COND(c, 0)) goto L_ed5a0;
  /* ed580: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* ed584: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ed588: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(972172));
  fn1_bd950(c);
  /* ed58c: cbnz x0, #0xed5a0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_ed5a0;
  /* ed590: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* ed594: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ed598: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ed59c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(972192));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ed5a0:;
  /* ed5a0: ldur q0, [x19, #8] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))), arc_ld64((ARC_X_R(c, 19) + INT64_C(8)) + 8));
  /* ed5a4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ed5a8: stur q0, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)) + 8, (c)->q[0].u64[1]);
  /* ed5ac: ldur q0, [x19, #0x18] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))), arc_ld64((ARC_X_R(c, 19) + INT64_C(24)) + 8));
  /* ed5b0: stur q0, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)) + 8, (c)->q[0].u64[1]);
  /* ed5b4: ldur q0, [x19, #0x28] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(40))), arc_ld64((ARC_X_R(c, 19) + INT64_C(40)) + 8));
  /* ed5b8: stur q0, [x20, #0x28] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* ed5bc: ldr x8, [x19, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(56))));
  /* ed5c0: str x8, [x20, #0x38] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(56)), ARC_X_R(c, 8));
  /* ed5c4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ed5c8: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ed5cc: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ed5d0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ed5d4: ret  */
  return;
}

void fn1_f0ff8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038915064));
  /* f0ff8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f0ffc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f1000: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* f1004: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f1008: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f100c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f1010: ldr x8, [x8, #0xab8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2744))));
  /* f1014: str xzr, [x0, #0x38] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(56)), ARC_X_R(c, 31));
  /* f1018: add x9, x8, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* f101c: add x8, x8, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* f1020: str x9, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 9));
  /* f1024: str x8, [x0, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* f1028: bl #0x1433d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(987180));
  fn1_1433d0(c);
  /* f102c: mov w8, #-1 */
  ARC_W_W(c, 8, UINT64_C(18446744073709551615));
  /* f1030: str xzr, [x19, #0x90] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(144)), ARC_X_R(c, 31));
  /* f1034: str w8, [x19, #0x98] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(152)), ARC_W_R(c, 8));
  /* f1038: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f103c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f1040: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f1044: ret  */
  return;
}

void fn1_f3f68(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038927208));
  /* f3f68: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f3f6c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f3f70: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f3f74: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f3f78: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f3f7c: ldr x8, [x1, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* f3f80: nop  */
  /* nop: no architectural effect here */
  /* f3f84: adr x22, #0x15dc40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f3f88: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* f3f8c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f3f90: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* f3f94: b.eq #0xf3fa4 */
  if (ARC_COND(c, 0)) goto L_f3fa4;
  /* f3f98: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* f3f9c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f3fa0: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(999332));
  fn1_db2e0(c);
L_f3fa4:;
  /* f3fa4: ldr x21, [x20, #8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* f3fa8: cmp x21, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 22));
  /* f3fac: b.eq #0xf3fd0 */
  if (ARC_COND(c, 0)) goto L_f3fd0;
  /* f3fb0: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* f3fb4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f3fb8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(999356));
  fn1_bd950(c);
  /* f3fbc: cbnz x0, #0xf3fd0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f3fd0;
  /* f3fc0: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* f3fc4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f3fc8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f3fcc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(999376));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f3fd0:;
  /* f3fd0: ldur q0, [x19, #8] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))), arc_ld64((ARC_X_R(c, 19) + INT64_C(8)) + 8));
  /* f3fd4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f3fd8: stur q0, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)) + 8, (c)->q[0].u64[1]);
  /* f3fdc: ldur q0, [x19, #0x18] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))), arc_ld64((ARC_X_R(c, 19) + INT64_C(24)) + 8));
  /* f3fe0: stur q0, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)) + 8, (c)->q[0].u64[1]);
  /* f3fe4: ldur q0, [x19, #0x28] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(40))), arc_ld64((ARC_X_R(c, 19) + INT64_C(40)) + 8));
  /* f3fe8: stur q0, [x20, #0x28] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* f3fec: ldr x8, [x19, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(56))));
  /* f3ff0: str x8, [x20, #0x38] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(56)), ARC_X_R(c, 8));
  /* f3ff4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f3ff8: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f3ffc: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f4000: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f4004: ret  */
  return;
}

void fn1_f7a30(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038942256));
  /* f7a30: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f7a34: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f7a38: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* f7a3c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f7a40: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f7a44: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f7a48: ldr x8, [x8, #0xad8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2776))));
  /* f7a4c: str xzr, [x0, #0x38] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(56)), ARC_X_R(c, 31));
  /* f7a50: add x9, x8, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* f7a54: add x8, x8, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* f7a58: str x9, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 9));
  /* f7a5c: str x8, [x0, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* f7a60: bl #0x1433d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1014372));
  fn1_1433d0(c);
  /* f7a64: mov w8, #-1 */
  ARC_W_W(c, 8, UINT64_C(18446744073709551615));
  /* f7a68: str xzr, [x19, #0x90] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(144)), ARC_X_R(c, 31));
  /* f7a6c: str w8, [x19, #0x98] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(152)), ARC_W_R(c, 8));
  /* f7a70: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f7a74: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f7a78: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f7a7c: ret  */
  return;
}

void fn1_fc94c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038962508));
  /* fc94c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fc950: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fc954: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* fc958: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fc95c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fc960: ldr x8, [x0, #0x78] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(120))));
  /* fc964: cbz x8, #0xfc980 */
  if ((ARC_X_R(c, 8)) == 0) goto L_fc980;
  /* fc968: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fc96c: ldr x0, [x0, #0x80] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(128))));
  /* fc970: cbz x0, #0xfcb10 */
  if ((ARC_X_R(c, 0)) == 0) goto L_fcb10;
  /* fc974: ldr w8, [x19, #0x9c] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(156))));
  /* fc978: tbnz w8, #4, #0xfc988 */
  if (((ARC_W_R(c, 8)) >> 4 & 1) != 0) goto L_fc988;
  /* fc97c: tbnz w8, #3, #0xfca1c */
  if (((ARC_W_R(c, 8)) >> 3 & 1) != 0) goto L_fca1c;
L_fc980:;
  /* fc980: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* fc984: b #0xfcad4 */
  goto L_fcad4;
L_fc988:;
  /* fc988: ldp x9, x8, [x19, #0x28] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(40));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* fc98c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* fc990: b.eq #0xfc9b0 */
  if (ARC_COND(c, 0)) goto L_fc9b0;
  /* fc994: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* fc998: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fc99c: mov w1, #-1 */
  ARC_W_W(c, 1, UINT64_C(18446744073709551615));
  /* fc9a0: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* fc9a4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1034664));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* fc9a8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* fc9ac: b.eq #0xfcad4 */
  if (ARC_COND(c, 0)) goto L_fcad4;
L_fc9b0:;
  /* fc9b0: ldr x0, [x19, #0x80] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(128))));
  /* fc9b4: ldr x2, [x19, #0x40] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* fc9b8: add x1, x19, #0x88 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(136)));
  /* fc9bc: ldr x9, [x19, #0x60] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(96))));
  /* fc9c0: add x4, x29, #0x18 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* fc9c4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* fc9c8: add x3, x2, x9 */
  ARC_X_W(c, 3, (ARC_X_R(c, 2) + ARC_X_R(c, 9)));
  /* fc9cc: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* fc9d0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1034708));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* fc9d4: mov w20, w0 */
  ARC_W_W(c, 20, ARC_W_R(c, 0));
  /* fc9d8: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* fc9dc: ldr x0, [x19, #0x40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* fc9e0: ldr x3, [x19, #0x78] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 19) + INT64_C(120))));
  /* fc9e4: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* fc9e8: sub x21, x8, x0 */
  ARC_X_W(c, 21, (ARC_X_R(c, 8) - ARC_X_R(c, 0)));
  /* fc9ec: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* fc9f0: bl #0x1427d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1034740));
  fn1_1427d0(c);
  /* fc9f4: cmp x0, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 21));
  /* fc9f8: b.ne #0xfcad0 */
  if (ARC_COND(c, 1)) goto L_fcad0;
  /* fc9fc: cmp w20, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 20), UINT64_C(1));
  /* fca00: b.eq #0xfc9b0 */
  if (ARC_COND(c, 0)) goto L_fc9b0;
  /* fca04: cmp w20, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 20), UINT64_C(2));
  /* fca08: b.eq #0xfcad0 */
  if (ARC_COND(c, 0)) goto L_fcad0;
  /* fca0c: ldr x0, [x19, #0x78] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(120))));
  /* fca10: bl #0x143730 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1034772));
  fn1_143730(c);
  /* fca14: cbnz w0, #0xfcad0 */
  if ((ARC_W_R(c, 0)) != 0) goto L_fcad0;
  /* fca18: b #0xfcad4 */
  goto L_fcad4;
L_fca1c:;
  /* fca1c: ldrb w8, [x19, #0xa2] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(162))));
  /* fca20: ldr x9, [x19, #0x90] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(144))));
  /* fca24: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* fca28: str x9, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 9));
  /* fca2c: b.ne #0xfca40 */
  if (ARC_COND(c, 1)) goto L_fca40;
  /* fca30: ldp x9, x8, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* fca34: mov w21, wzr */
  ARC_W_W(c, 21, ARC_W_R(c, 31));
  /* fca38: sub x20, x8, x9 */
  ARC_X_W(c, 20, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* fca3c: b #0xfcabc */
  goto L_fcabc;
L_fca40:;
  /* fca40: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* fca44: ldr x8, [x8, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* fca48: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1034828));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* fca4c: ldp x3, x8, [x19, #0x48] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(72));
    ARC_X_W(c, 3, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* fca50: cmp w0, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(1));
  /* fca54: sub x20, x8, x3 */
  ARC_X_W(c, 20, (ARC_X_R(c, 8) - ARC_X_R(c, 3)));
  /* fca58: b.lt #0xfca74 */
  if (ARC_COND(c, 11)) goto L_fca74;
  /* fca5c: ldp x9, x8, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* fca60: mov w10, w0 */
  ARC_W_W(c, 10, ARC_W_R(c, 0));
  /* fca64: mov w21, wzr */
  ARC_W_W(c, 21, ARC_W_R(c, 31));
  /* fca68: sub x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* fca6c: madd x20, x8, x10, x20 */
  ARC_X_W(c, 20, ((uint64_t)(ARC_X_R(c, 20)) + ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 10)))));
  /* fca70: b #0xfcabc */
  goto L_fcabc;
L_fca74:;
  /* fca74: ldp x8, x9, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* fca78: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* fca7c: b.eq #0xfcab8 */
  if (ARC_COND(c, 0)) goto L_fcab8;
  /* fca80: ldr x0, [x19, #0x80] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(128))));
  /* fca84: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* fca88: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* fca8c: ldr x2, [x19, #0x40] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* fca90: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* fca94: sub x4, x8, x10 */
  ARC_X_W(c, 4, (ARC_X_R(c, 8) - ARC_X_R(c, 10)));
  /* fca98: ldr x9, [x9, #0x40] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(64))));
  /* fca9c: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1034912));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* fcaa0: ldp x8, x9, [x19, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(64));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* fcaa4: mov w21, #1 */
  ARC_W_W(c, 21, UINT64_C(1));
  /* fcaa8: add x8, x8, w0, sxtw */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)(int64_t)(int32_t)(ARC_W_R(c, 0)))));
  /* fcaac: add x9, x20, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) + ARC_X_R(c, 9)));
  /* fcab0: sub x20, x9, x8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* fcab4: b #0xfcabc */
  goto L_fcabc;
L_fcab8:;
  /* fcab8: mov w21, wzr */
  ARC_W_W(c, 21, ARC_W_R(c, 31));
L_fcabc:;
  /* fcabc: ldr x0, [x19, #0x78] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(120))));
  /* fcac0: neg x1, x20 */
  ARC_X_W(c, 1, ((uint64_t)0 - (uint64_t)(ARC_X_R(c, 20))));
  /* fcac4: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* fcac8: bl #0x1437a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1034956));
  fn1_1437a8(c);
  /* fcacc: cbz w0, #0xfcae8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_fcae8;
L_fcad0:;
  /* fcad0: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
L_fcad4:;
  /* fcad4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fcad8: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* fcadc: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fcae0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fcae4: ret  */
  return;
L_fcae8:;
  /* fcae8: cbz w21, #0xfcaf4 */
  if ((ARC_W_R(c, 21)) == 0) goto L_fcaf4;
  /* fcaec: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* fcaf0: str x8, [x19, #0x88] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(136)), ARC_X_R(c, 8));
L_fcaf4:;
  /* fcaf4: ldr x8, [x19, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* fcaf8: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* fcafc: str wzr, [x19, #0x9c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(156)), ARC_W_R(c, 31));
  /* fcb00: stp xzr, xzr, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* fcb04: stp x8, x8, [x19, #0x48] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(72));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* fcb08: str xzr, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 31));
  /* fcb0c: b #0xfcad4 */
  goto L_fcad4;
L_fcb10:;
  /* fcb10: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1035028));
  fn1_fc3b8(c);
}

void fn1_ff5c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038973888));
  /* ff5c0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ff5c4: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ff5c8: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* ff5cc: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ff5d0: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ff5d4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ff5d8: sub x19, x2, x1 */
  ARC_X_W(c, 19, (ARC_X_R(c, 2) - ARC_X_R(c, 1)));
  /* ff5dc: mov x9, #0x3ffffffffffffff8 */
  ARC_X_W(c, 9, UINT64_C(4611686018427387896));
  /* ff5e0: asr x22, x19, #2 */
  ARC_X_W(c, 22, ((uint64_t)((int64_t)(ARC_X_R(c, 19)) >> ((UINT64_C(2)) & 63))));
  /* ff5e4: cmp x22, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 9));
  /* ff5e8: b.hs #0xff674 */
  if (ARC_COND(c, 2)) goto L_ff674;
  /* ff5ec: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* ff5f0: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* ff5f4: cmp x22, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 22), UINT64_C(4));
  /* ff5f8: b.hi #0xff614 */
  if (ARC_COND(c, 8)) goto L_ff614;
  /* ff5fc: lsr w8, w19, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 19)) >> ((UINT64_C(1)) & 31)));
  /* ff600: and w8, w8, #0xfe */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(254)));
  /* ff604: strb w8, [x20], #4 */
  { const uint64_t _a = ARC_X_R(c, 20);
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* ff608: cmp x21, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 1));
  /* ff60c: b.ne #0xff64c */
  if (ARC_COND(c, 1)) goto L_ff64c;
  /* ff610: b #0xff658 */
  goto L_ff658;
L_ff614:;
  /* ff614: orr x8, x22, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) | UINT64_C(1)));
  /* ff618: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* ff61c: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* ff620: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* ff624: csinc x24, x9, x8, eq */
  ARC_X_W(c, 24, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* ff628: lsl x0, x24, #2 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 24)) << ((UINT64_C(2)) & 63)));
  /* ff62c: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1046064));
  fn1_1428f0(c);
  /* ff630: orr x8, x24, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) | UINT64_C(1)));
  /* ff634: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* ff638: stp x22, x0, [x20, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* ff63c: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* ff640: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ff644: cmp x21, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 1));
  /* ff648: b.eq #0xff658 */
  if (ARC_COND(c, 0)) goto L_ff658;
L_ff64c:;
  /* ff64c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ff650: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* ff654: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1046104));
  fn1_1449d8(c);
L_ff658:;
  /* ff658: str wzr, [x20, x19] */
  arc_st32((ARC_X_R(c, 20) + ARC_X_R(c, 19)), ARC_W_R(c, 31));
  /* ff65c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ff660: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ff664: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* ff668: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ff66c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ff670: ret  */
  return;
L_ff674:;
  /* ff674: bl #0xe2274 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1046136));
  fn1_e2274(c);
}

void fn1_10f960(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039040352));
  /* 10f960: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 10f964: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 10f968: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 10f96c: stp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 10f970: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 10f974: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 10f978: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 10f97c: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 10f980: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 10f984: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 10f988: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 10f98c: add x1, x3, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 3) + UINT64_C(48)));
  /* 10f990: mov x19, x5 */
  ARC_X_W(c, 19, ARC_X_R(c, 5));
  /* 10f994: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 10f998: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 10f99c: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1112480));
  fn1_143460(c);
  /* 10f9a0: adrp x26, #0x151000 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 10f9a4: ldr x26, [x26, #0xb40] */
  ARC_X_W(c, 26, arc_ld64((ARC_X_R(c, 26) + INT64_C(2880))));
  /* 10f9a8: ldr x25, [sp] */
  ARC_X_W(c, 25, arc_ld64((c)->sp));
  /* 10f9ac: ldar x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 10f9b0: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 10f9b4: b.eq #0x10fa70 */
  if (ARC_COND(c, 0)) goto L_10fa70;
  /* 10f9b8: nop  */
  /* nop: no architectural effect here */
  /* 10f9bc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10f9c0: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1112516));
  fn1_142518(c);
  /* 10f9c4: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 10f9c8: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 10f9cc: b.ne #0x10f9f8 */
  if (ARC_COND(c, 1)) goto L_10f9f8;
  /* 10f9d0: nop  */
  /* nop: no architectural effect here */
  /* 10f9d4: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 10f9d8: nop  */
  /* nop: no architectural effect here */
  /* 10f9dc: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_10f9e0:;
  /* 10f9e0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 10f9e4: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 10f9e8: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1112556));
  fn1_142530(c);
  /* 10f9ec: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 10f9f0: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 10f9f4: b.eq #0x10f9e0 */
  if (ARC_COND(c, 0)) goto L_10f9e0;
L_10f9f8:;
  /* 10f9f8: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 10f9fc: cbz x8, #0x10fa10 */
  if ((ARC_X_R(c, 8)) == 0) goto L_10fa10;
  /* 10fa00: nop  */
  /* nop: no architectural effect here */
  /* 10fa04: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10fa08: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1112588));
  fn1_142560(c);
  /* 10fa0c: b #0x10fa70 */
  goto L_10fa70;
L_10fa10:;
  /* 10fa10: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 10fa14: str x26, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 26));
  /* 10fa18: strb wzr, [sp, #0x18] */
  arc_st8(((c)->sp + INT64_C(24)), ARC_W_R(c, 31));
  /* 10fa1c: str x8, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 8));
  /* 10fa20: nop  */
  /* nop: no architectural effect here */
  /* 10fa24: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10fa28: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1112620));
  fn1_142560(c);
  /* 10fa2c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 10fa30: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 10fa34: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 10fa38: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1112636));
  fn1_a2030(c);
  /* 10fa3c: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 10fa40: str w8, [x26, #8] */
  arc_st32((ARC_X_R(c, 26) + INT64_C(8)), ARC_W_R(c, 8));
  /* 10fa44: nop  */
  /* nop: no architectural effect here */
  /* 10fa48: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10fa4c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1112656));
  fn1_142518(c);
  /* 10fa50: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 10fa54: stlr x8, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 8));
  /* 10fa58: nop  */
  /* nop: no architectural effect here */
  /* 10fa5c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10fa60: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1112676));
  fn1_142560(c);
  /* 10fa64: nop  */
  /* nop: no architectural effect here */
  /* 10fa68: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 10fa6c: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1112688));
  fn1_142578(c);
L_10fa70:;
  /* 10fa70: ldp x8, x10, [x25, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 10fa74: ldrsw x9, [x26, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 26) + INT64_C(8)))));
  /* 10fa78: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 10fa7c: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 10fa80: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 10fa84: b.hs #0x10fb2c */
  if (ARC_COND(c, 2)) goto L_10fb2c;
  /* 10fa88: ldr x23, [x8, x9, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 10fa8c: cbz x23, #0x10fb2c */
  if ((ARC_X_R(c, 23)) == 0) goto L_10fb2c;
  /* 10fa90: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 10fa94: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1112728));
  fn1_143478(c);
  /* 10fa98: ldr x8, [x22, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 22) + INT64_C(16));
    ARC_X_W(c, 22, ARC_X_R(c, 22) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 10fa9c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 10faa0: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 10faa4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1112744));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10faa8: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 10faac: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 10fab0: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 10fab4: add x3, x22, #0x240 */
  ARC_X_W(c, 3, (ARC_X_R(c, 22) + UINT64_C(576)));
  /* 10fab8: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 10fabc: mov x4, x23 */
  ARC_X_W(c, 4, ARC_X_R(c, 23));
  /* 10fac0: mov x5, x20 */
  ARC_X_W(c, 5, ARC_X_R(c, 20));
  /* 10fac4: mov w6, wzr */
  ARC_W_W(c, 6, ARC_W_R(c, 31));
  /* 10fac8: bl #0xffa98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1112780));
  fn1_ffa98(c);
  /* 10facc: sub x8, x0, x22 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) - ARC_X_R(c, 22)));
  /* 10fad0: cmp x8, #0x23f */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(575));
  /* 10fad4: b.gt #0x10fb08 */
  if (ARC_COND(c, 12)) goto L_10fb08;
  /* 10fad8: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* 10fadc: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* 10fae0: movk x9, #0xaaab */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744073709486080)) | UINT64_C(43691)));
  /* 10fae4: mul x8, x8, x9 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9))));
  /* 10fae8: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* 10faec: eor x9, x9, #0x8000000000000001 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) ^ UINT64_C(9223372036854775809)));
  /* 10faf0: smulh x9, x8, x9 */
  ARC_X_W(c, 9, arc_smulh(ARC_X_R(c, 8), ARC_X_R(c, 9)));
  /* 10faf4: lsr x10, x9, #0x3f */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(63)) & 63)));
  /* 10faf8: add w9, w10, w9, lsr #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 10) + ((uint32_t)(ARC_W_R(c, 9)) >> 1)));
  /* 10fafc: mov w10, #0xc */
  ARC_W_W(c, 10, UINT64_C(12));
  /* 10fb00: msub w8, w9, w10, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) - ((uint32_t)(ARC_W_R(c, 9)) * (uint32_t)(ARC_W_R(c, 10)))));
  /* 10fb04: str w8, [x19, #0x10] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(16)), ARC_W_R(c, 8));
L_10fb08:;
  /* 10fb08: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 10fb0c: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 10fb10: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 10fb14: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 10fb18: ldp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 10fb1c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 10fb20: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 10fb24: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 10fb28: ret  */
  return;
L_10fb2c:;
  /* 10fb2c: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1112880));
  fn1_fc3b8(c);
  /* 10fb30: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10fb34: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 10fb38: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1112892));
  fn1_d2a78(c);
  /* 10fb3c: b #0x10fb48 */
  goto L_10fb48;
  /* 10fb40: b #0x10fb44 */
  goto L_10fb44;
L_10fb44:;
  /* 10fb44: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_10fb48:;
  /* 10fb48: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 10fb4c: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1112912));
  fn1_143478(c);
  /* 10fb50: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10fb54: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1112920));
  fn1_9cc20(c);
}

void fn1_113c98(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057560));
  /* 113c98: bti c */
  /* bti: no architectural effect here */
  /* 113c9c: mov w0, #0x302 */
  ARC_W_W(c, 0, UINT64_C(770));
  /* 113ca0: movk w0, #0x400, lsl #16 */
  ARC_W_W(c, 0, ((ARC_W_R(c, 0) & UINT64_C(18446744069414649855)) | UINT64_C(67108864)));
  /* 113ca4: ret  */
  return;
}

void fn1_117df8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039074296));
  /* 117df8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 117dfc: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 117e00: stp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 117e04: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 117e08: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 117e0c: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 117e10: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 117e14: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 117e18: sub sp, sp, #0x220 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(544)));
  /* 117e1c: sub x8, x29, #0x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 117e20: str x5, [sp, #0x38] */
  arc_st64(((c)->sp + INT64_C(56)), ARC_X_R(c, 5));
  /* 117e24: add x27, sp, #0x68 */
  ARC_X_W(c, 27, ((c)->sp + UINT64_C(104)));
  /* 117e28: str x1, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* 117e2c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 117e30: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 117e34: ldr x8, [x8, #0xbc8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3016))));
  /* 117e38: add x1, x4, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 4) + UINT64_C(48)));
  /* 117e3c: mov x21, x6 */
  ARC_X_W(c, 21, ARC_X_R(c, 6));
  /* 117e40: mov x24, x4 */
  ARC_X_W(c, 24, ARC_X_R(c, 4));
  /* 117e44: mov w22, w3 */
  ARC_W_W(c, 22, ARC_W_R(c, 3));
  /* 117e48: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 117e4c: sub x19, x29, #0x28 */
  ARC_X_W(c, 19, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 117e50: stp x27, x8, [sp, #0x58] */
  { const uint64_t _pa = ((c)->sp + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 27));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 117e54: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1146456));
  fn1_143460(c);
  /* 117e58: adrp x28, #0x151000 */
  ARC_X_W(c, 28, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 117e5c: ldr x28, [x28, #0xb58] */
  ARC_X_W(c, 28, arc_ld64((ARC_X_R(c, 28) + INT64_C(2904))));
  /* 117e60: ldr x26, [sp, #0x48] */
  ARC_X_W(c, 26, arc_ld64(((c)->sp + INT64_C(72))));
  /* 117e64: ldar x8, [x28] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 28)));
  /* 117e68: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 117e6c: b.eq #0x117f28 */
  if (ARC_COND(c, 0)) goto L_117f28;
  /* 117e70: nop  */
  /* nop: no architectural effect here */
  /* 117e74: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 117e78: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1146492));
  fn1_142518(c);
  /* 117e7c: ldr x8, [x28] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 28)));
  /* 117e80: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 117e84: b.ne #0x117eb0 */
  if (ARC_COND(c, 1)) goto L_117eb0;
  /* 117e88: nop  */
  /* nop: no architectural effect here */
  /* 117e8c: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 117e90: nop  */
  /* nop: no architectural effect here */
  /* 117e94: adr x25, #0x1578f4 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1407220)));
L_117e98:;
  /* 117e98: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 117e9c: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 117ea0: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1146532));
  fn1_142530(c);
  /* 117ea4: ldr x8, [x28] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 28)));
  /* 117ea8: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 117eac: b.eq #0x117e98 */
  if (ARC_COND(c, 0)) goto L_117e98;
L_117eb0:;
  /* 117eb0: ldr x8, [x28] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 28)));
  /* 117eb4: cbz x8, #0x117ec8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_117ec8;
  /* 117eb8: nop  */
  /* nop: no architectural effect here */
  /* 117ebc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 117ec0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1146564));
  fn1_142560(c);
  /* 117ec4: b #0x117f28 */
  goto L_117f28;
L_117ec8:;
  /* 117ec8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 117ecc: str x28, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 28));
  /* 117ed0: sturb wzr, [x29, #-0x18] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-24)), ARC_W_R(c, 31));
  /* 117ed4: str x8, [x28] */
  arc_st64(ARC_X_R(c, 28), ARC_X_R(c, 8));
  /* 117ed8: nop  */
  /* nop: no architectural effect here */
  /* 117edc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 117ee0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1146596));
  fn1_142560(c);
  /* 117ee4: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 117ee8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 117eec: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 117ef0: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1146612));
  fn1_a2030(c);
  /* 117ef4: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 117ef8: str w8, [x28, #8] */
  arc_st32((ARC_X_R(c, 28) + INT64_C(8)), ARC_W_R(c, 8));
  /* 117efc: nop  */
  /* nop: no architectural effect here */
  /* 117f00: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 117f04: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1146632));
  fn1_142518(c);
  /* 117f08: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 117f0c: stlr x8, [x28] */
  arc_st64(ARC_X_R(c, 28), ARC_X_R(c, 8));
  /* 117f10: nop  */
  /* nop: no architectural effect here */
  /* 117f14: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 117f18: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1146652));
  fn1_142560(c);
  /* 117f1c: nop  */
  /* nop: no architectural effect here */
  /* 117f20: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 117f24: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1146664));
  fn1_142578(c);
L_117f28:;
  /* 117f28: ldp x8, x10, [x26, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 26) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 117f2c: ldrsw x9, [x28, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 28) + INT64_C(8)))));
  /* 117f30: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 117f34: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 117f38: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 117f3c: b.hs #0x118390 */
  if (ARC_COND(c, 2)) goto L_118390;
  /* 117f40: ldr x23, [x8, x9, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 117f44: cbz x23, #0x118390 */
  if ((ARC_X_R(c, 23)) == 0) goto L_118390;
  /* 117f48: ldr w4, [x24, #8] */
  ARC_W_W(c, 4, arc_ld32((ARC_X_R(c, 24) + INT64_C(8))));
  /* 117f4c: add x10, x27, #0x190 */
  ARC_X_W(c, 10, (ARC_X_R(c, 27) + UINT64_C(400)));
  /* 117f50: strb wzr, [sp, #0x44] */
  arc_st8(((c)->sp + INT64_C(68)), ARC_W_R(c, 31));
  /* 117f54: ldr x5, [sp, #0x38] */
  ARC_X_W(c, 5, arc_ld64(((c)->sp + INT64_C(56))));
  /* 117f58: add x8, sp, #0x50 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(80)));
  /* 117f5c: add x9, sp, #0x58 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(88)));
  /* 117f60: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 117f64: and w2, w22, #1 */
  ARC_W_W(c, 2, (ARC_W_R(c, 22) & UINT64_C(1)));
  /* 117f68: add x3, sp, #0x48 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(72)));
  /* 117f6c: add x6, sp, #0x44 */
  ARC_X_W(c, 6, ((c)->sp + UINT64_C(68)));
  /* 117f70: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 117f74: mov x7, x23 */
  ARC_X_W(c, 7, ARC_X_R(c, 23));
  /* 117f78: stp x8, x10, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 117f7c: str x9, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 9));
  /* 117f80: bl #0x143a30 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1146756));
  fn1_143a30(c);
  /* 117f84: sub x27, x29, #0x28 */
  ARC_X_W(c, 27, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 117f88: tbz w0, #0, #0x1182b0 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_1182b0;
  /* 117f8c: ldrb w8, [x21] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 21)));
  /* 117f90: tbnz w8, #0, #0x117fa0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_117fa0;
  /* 117f94: str wzr, [x21, #4] */
  arc_st32((ARC_X_R(c, 21) + INT64_C(4)), ARC_W_R(c, 31));
  /* 117f98: strb wzr, [x21] */
  arc_st8(ARC_X_R(c, 21), ARC_W_R(c, 31));
  /* 117f9c: b #0x117fac */
  goto L_117fac;
L_117fa0:;
  /* 117fa0: ldr x8, [x21, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 117fa4: str wzr, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 31));
  /* 117fa8: str xzr, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 31));
L_117fac:;
  /* 117fac: ldrb w8, [sp, #0x44] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(68))));
  /* 117fb0: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 117fb4: b.ne #0x118048 */
  if (ARC_COND(c, 1)) goto L_118048;
  /* 117fb8: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 117fbc: ldr x8, [x8, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* 117fc0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 117fc4: mov w1, #0x2d */
  ARC_W_W(c, 1, UINT64_C(45));
  /* 117fc8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1146828));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 117fcc: ldrb w9, [x21] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 21)));
  /* 117fd0: mov w22, w0 */
  ARC_W_W(c, 22, ARC_W_R(c, 0));
  /* 117fd4: tbnz w9, #0, #0x117fe8 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_117fe8;
  /* 117fd8: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* 117fdc: b.ne #0x118030 */
  if (ARC_COND(c, 1)) goto L_118030;
  /* 117fe0: mov w24, #4 */
  ARC_W_W(c, 24, UINT64_C(4));
  /* 117fe4: b #0x117ffc */
  goto L_117ffc;
L_117fe8:;
  /* 117fe8: ldp x9, x8, [x21] */
  { const uint64_t _pa = ARC_X_R(c, 21);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 117fec: and x9, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 117ff0: sub x24, x9, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 117ff4: cmp x8, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 24));
  /* 117ff8: b.ne #0x118020 */
  if (ARC_COND(c, 1)) goto L_118020;
L_117ffc:;
  /* 117ffc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 118000: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 118004: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 118008: mov x3, x24 */
  ARC_X_W(c, 3, ARC_X_R(c, 24));
  /* 11800c: mov x4, x24 */
  ARC_X_W(c, 4, ARC_X_R(c, 24));
  /* 118010: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 118014: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 118018: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1146908));
  fn1_142da0(c);
  /* 11801c: mov x8, x24 */
  ARC_X_W(c, 8, ARC_X_R(c, 24));
L_118020:;
  /* 118020: ldr x9, [x21, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 118024: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 118028: str x10, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 10));
  /* 11802c: b #0x118040 */
  goto L_118040;
L_118030:;
  /* 118030: lsr x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 118034: add w10, w9, #2 */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) + UINT64_C(2)));
  /* 118038: mov x9, x21 */
  ARC_X_W(c, 9, ARC_X_R(c, 21));
  /* 11803c: strb w10, [x9], #4 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 10));
  }
L_118040:;
  /* 118040: add x8, x9, x8, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 2)));
  /* 118044: stp w22, wzr, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st32(_pa, ARC_W_R(c, 22));
    arc_st32(_pa + 4, ARC_W_R(c, 31));
  }
L_118048:;
  /* 118048: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11804c: ldr x8, [x8, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* 118050: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 118054: mov w1, #0x30 */
  ARC_W_W(c, 1, UINT64_C(48));
  /* 118058: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1146972));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11805c: ldp x8, x22, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 22, arc_ld64(_pa + 8));
  }
  /* 118060: sub x9, x8, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4)));
  /* 118064: cmp x22, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 9));
  /* 118068: b.hs #0x118084 */
  if (ARC_COND(c, 2)) goto L_118084;
L_11806c:;
  /* 11806c: ldr w10, [x22] */
  ARC_W_W(c, 10, arc_ld32(ARC_X_R(c, 22)));
  /* 118070: cmp w10, w0 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 0));
  /* 118074: b.ne #0x118084 */
  if (ARC_COND(c, 1)) goto L_118084;
  /* 118078: add x22, x22, #4 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(4)));
  /* 11807c: cmp x22, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 9));
  /* 118080: b.lo #0x11806c */
  if (ARC_COND(c, 3)) goto L_11806c;
L_118084:;
  /* 118084: ldp x28, x26, [x21] */
  { const uint64_t _pa = ARC_X_R(c, 21);
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 26, arc_ld64(_pa + 8));
  }
  /* 118088: ldrb w9, [x21] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 21)));
  /* 11808c: lsr x10, x9, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 118090: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 118094: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 118098: and x11, x28, #0xfffffffffffffffe */
  ARC_X_W(c, 11, (ARC_X_R(c, 28) & UINT64_C(18446744073709551614)));
  /* 11809c: sub x19, x11, #1 */
  ARC_X_W(c, 19, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* 1180a0: csel x24, x10, x26, eq */
  ARC_X_W(c, 24, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 26)));
  /* 1180a4: csel x1, x9, x19, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 19)));
  /* 1180a8: subs x23, x8, x22 */
  ARC_X_W(c, 23, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22)));
  /* 1180ac: b.eq #0x1182b0 */
  if (ARC_COND(c, 0)) goto L_1182b0;
  /* 1180b0: ldr x11, [x21, #0x10] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 1180b4: ands w12, w28, #1 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 28) & UINT64_C(1));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 12, _r); }
  /* 1180b8: add x10, x21, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 21) + UINT64_C(4)));
  /* 1180bc: ubfx x25, x28, #1, #7 */
  ARC_X_W(c, 25, (((uint64_t)(ARC_X_R(c, 28)) >> 1) & UINT64_C(127)));
  /* 1180c0: asr x27, x23, #2 */
  ARC_X_W(c, 27, ((uint64_t)((int64_t)(ARC_X_R(c, 23)) >> ((UINT64_C(2)) & 63))));
  /* 1180c4: csel x8, x10, x11, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 11)));
  /* 1180c8: csel x9, x25, x26, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 25)) : ARC_X_R(c, 26)));
  /* 1180cc: cmp x22, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* 1180d0: b.lo #0x118118 */
  if (ARC_COND(c, 3)) goto L_118118;
  /* 1180d4: add x8, x8, x9, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 2)));
  /* 1180d8: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 1180dc: cmp x22, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* 1180e0: b.hs #0x118118 */
  if (ARC_COND(c, 2)) goto L_118118;
  /* 1180e4: mov x8, #0x3ffffffffffffff8 */
  ARC_X_W(c, 8, UINT64_C(4611686018427387896));
  /* 1180e8: cmp x27, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 27), ARC_X_R(c, 8));
  /* 1180ec: b.hs #0x118394 */
  if (ARC_COND(c, 2)) goto L_118394;
  /* 1180f0: cmp x27, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 27), UINT64_C(4));
  /* 1180f4: str w12, [sp, #0x34] */
  arc_st32(((c)->sp + INT64_C(52)), ARC_W_R(c, 12));
  /* 1180f8: stp x11, x10, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 1180fc: b.hi #0x11819c */
  if (ARC_COND(c, 8)) goto L_11819c;
  /* 118100: lsr w8, w23, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 23)) >> ((UINT64_C(1)) & 31)));
  /* 118104: sub x9, x29, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 118108: orr x24, x9, #4 */
  ARC_X_W(c, 24, (ARC_X_R(c, 9) | UINT64_C(4)));
  /* 11810c: and w8, w8, #0xfe */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(254)));
  /* 118110: sturb w8, [x29, #-0x20] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-32)), ARC_W_R(c, 8));
  /* 118114: b #0x1181d0 */
  goto L_1181d0;
L_118118:;
  /* 118118: sub x8, x1, x24 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) - ARC_X_R(c, 24)));
  /* 11811c: add x19, x24, x27 */
  ARC_X_W(c, 19, (ARC_X_R(c, 24) + ARC_X_R(c, 27)));
  /* 118120: cmp x8, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 27));
  /* 118124: b.hs #0x11815c */
  if (ARC_COND(c, 2)) goto L_11815c;
  /* 118128: mov x25, x10 */
  ARC_X_W(c, 25, ARC_X_R(c, 10));
  /* 11812c: sub x2, x19, x1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 19) - ARC_X_R(c, 1)));
  /* 118130: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 118134: mov x3, x24 */
  ARC_X_W(c, 3, ARC_X_R(c, 24));
  /* 118138: mov x4, x24 */
  ARC_X_W(c, 4, ARC_X_R(c, 24));
  /* 11813c: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 118140: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 118144: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1147208));
  fn1_142da0(c);
  /* 118148: ldrb w8, [x21] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 21)));
  /* 11814c: ldr x11, [x21, #0x10] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 118150: mov x10, x25 */
  ARC_X_W(c, 10, ARC_X_R(c, 25));
  /* 118154: str x24, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 24));
  /* 118158: and w12, w8, #1 */
  ARC_W_W(c, 12, (ARC_W_R(c, 8) & UINT64_C(1)));
L_11815c:;
  /* 11815c: cmp w12, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(0));
  /* 118160: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 118164: mov x2, x23 */
  ARC_X_W(c, 2, ARC_X_R(c, 23));
  /* 118168: csel x8, x10, x11, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 11)));
  /* 11816c: add x24, x8, x24, lsl #2 */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 2)));
  /* 118170: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 118174: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1147256));
  fn1_1449f0(c);
  /* 118178: str wzr, [x24, x23] */
  arc_st32((ARC_X_R(c, 24) + ARC_X_R(c, 23)), ARC_W_R(c, 31));
  /* 11817c: sub x27, x29, #0x28 */
  ARC_X_W(c, 27, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 118180: ldrb w8, [x21] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 21)));
  /* 118184: tbnz w8, #0, #0x118194 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_118194;
  /* 118188: lsl w8, w19, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 19)) << ((UINT64_C(1)) & 31)));
  /* 11818c: strb w8, [x21] */
  arc_st8(ARC_X_R(c, 21), ARC_W_R(c, 8));
  /* 118190: b #0x1182b0 */
  goto L_1182b0;
L_118194:;
  /* 118194: str x19, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 19));
  /* 118198: b #0x1182b0 */
  goto L_1182b0;
L_11819c:;
  /* 11819c: orr x8, x27, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 27) | UINT64_C(1)));
  /* 1181a0: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* 1181a4: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* 1181a8: csinc x8, x9, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* 1181ac: lsl x0, x8, #2 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 1181b0: str x8, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 8));
  /* 1181b4: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1147320));
  fn1_1428f0(c);
  /* 1181b8: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 1181bc: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 1181c0: sub x9, x29, #0x28 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 1181c4: stp x27, x0, [x9, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 27));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 1181c8: orr x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(1)));
  /* 1181cc: str x8, [x9, #8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(8)), ARC_X_R(c, 8));
L_1181d0:;
  /* 1181d0: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 1181d4: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 1181d8: mov x2, x23 */
  ARC_X_W(c, 2, ARC_X_R(c, 23));
  /* 1181dc: sub x27, x29, #0x28 */
  ARC_X_W(c, 27, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 1181e0: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1147364));
  fn1_1449d8(c);
  /* 1181e4: str wzr, [x24, x23] */
  arc_st32((ARC_X_R(c, 24) + ARC_X_R(c, 23)), ARC_W_R(c, 31));
  /* 1181e8: sub x9, x29, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 1181ec: ldurb w8, [x29, #-0x20] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 1181f0: ldp x11, x10, [x27, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 27) + INT64_C(16));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 1181f4: orr x9, x9, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) | UINT64_C(4)));
  /* 1181f8: ands w23, w8, #1 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 23, _r); }
  /* 1181fc: lsr x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 118200: csel x7, x9, x10, eq */
  ARC_X_W(c, 7, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* 118204: csel x6, x8, x11, eq */
  ARC_X_W(c, 6, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 11)));
  /* 118208: ldr w8, [sp, #0x34] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(52))));
  /* 11820c: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 118210: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 118214: csel x1, x8, x19, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 19)));
  /* 118218: tst x28, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 28) & UINT64_C(1)));
  /* 11821c: csel x22, x25, x26, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 25)) : ARC_X_R(c, 26)));
  /* 118220: sub x8, x1, x22 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) - ARC_X_R(c, 22)));
  /* 118224: cmp x8, x6 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 6));
  /* 118228: b.hs #0x118254 */
  if (ARC_COND(c, 2)) goto L_118254;
  /* 11822c: sub x8, x22, x1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) - ARC_X_R(c, 1)));
  /* 118230: add x2, x8, x6 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) + ARC_X_R(c, 6)));
  /* 118234: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 118238: mov x3, x22 */
  ARC_X_W(c, 3, ARC_X_R(c, 22));
  /* 11823c: mov x4, x22 */
  ARC_X_W(c, 4, ARC_X_R(c, 22));
  /* 118240: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 118244: bl #0x142d40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1147464));
  fn1_142d40(c);
  /* 118248: ldurb w8, [x29, #-0x20] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 11824c: and w23, w8, #1 */
  ARC_W_W(c, 23, (ARC_W_R(c, 8) & UINT64_C(1)));
  /* 118250: b #0x118298 */
  goto L_118298;
L_118254:;
  /* 118254: cbz x6, #0x118298 */
  if ((ARC_X_R(c, 6)) == 0) goto L_118298;
  /* 118258: ldp x9, x8, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 11825c: tst x28, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 28) & UINT64_C(1)));
  /* 118260: lsl x2, x6, #2 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 6)) << ((UINT64_C(2)) & 63)));
  /* 118264: mov x1, x7 */
  ARC_X_W(c, 1, ARC_X_R(c, 7));
  /* 118268: mov x24, x6 */
  ARC_X_W(c, 24, ARC_X_R(c, 6));
  /* 11826c: csel x19, x8, x9, eq */
  ARC_X_W(c, 19, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* 118270: add x0, x19, x22, lsl #2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 22)) << 2)));
  /* 118274: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1147512));
  fn1_1449f0(c);
  /* 118278: ldrb w9, [x21] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 21)));
  /* 11827c: add x8, x24, x22 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + ARC_X_R(c, 22)));
  /* 118280: tbnz w9, #0, #0x118290 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_118290;
  /* 118284: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* 118288: strb w9, [x21] */
  arc_st8(ARC_X_R(c, 21), ARC_W_R(c, 9));
  /* 11828c: b #0x118294 */
  goto L_118294;
L_118290:;
  /* 118290: str x8, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 8));
L_118294:;
  /* 118294: str wzr, [x19, x8, lsl #2] */
  arc_st32((ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 8)) << 2)), ARC_W_R(c, 31));
L_118298:;
  /* 118298: cbz w23, #0x1182b0 */
  if ((ARC_W_R(c, 23)) == 0) goto L_1182b0;
  /* 11829c: ldr x8, [x27, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 27) + INT64_C(8))));
  /* 1182a0: ldr x0, [x27, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 27) + INT64_C(24))));
  /* 1182a4: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 1182a8: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 1182ac: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1147568));
  fn1_142608(c);
L_1182b0:;
  /* 1182b0: ldr x0, [x27] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 27)));
  /* 1182b4: cbz x0, #0x1182fc */
  if ((ARC_X_R(c, 0)) == 0) goto L_1182fc;
  /* 1182b8: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1182bc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1182c0: b.eq #0x1182cc */
  if (ARC_COND(c, 0)) goto L_1182cc;
  /* 1182c4: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 1182c8: b #0x1182d8 */
  goto L_1182d8;
L_1182cc:;
  /* 1182cc: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1182d0: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1182d4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1147608));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1182d8:;
  /* 1182d8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1182dc: b.eq #0x1182f8 */
  if (ARC_COND(c, 0)) goto L_1182f8;
  /* 1182e0: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 1182e4: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 1182e8: cset w19, eq */
  ARC_W_W(c, 19, (ARC_COND(c, 0) ? 1 : 0));
  /* 1182ec: cbnz x20, #0x118304 */
  if ((ARC_X_R(c, 20)) != 0) goto L_118304;
L_1182f0:;
  /* 1182f0: tbnz w19, #0, #0x118338 */
  if (((ARC_W_R(c, 19)) >> 0 & 1) != 0) goto L_118338;
  /* 1182f4: b #0x118348 */
  goto L_118348;
L_1182f8:;
  /* 1182f8: str xzr, [x27] */
  arc_st64(ARC_X_R(c, 27), ARC_X_R(c, 31));
L_1182fc:;
  /* 1182fc: mov w19, #1 */
  ARC_W_W(c, 19, UINT64_C(1));
  /* 118300: cbz x20, #0x1182f0 */
  if ((ARC_X_R(c, 20)) == 0) goto L_1182f0;
L_118304:;
  /* 118304: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 118308: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 11830c: b.eq #0x118318 */
  if (ARC_COND(c, 0)) goto L_118318;
  /* 118310: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 118314: b #0x118328 */
  goto L_118328;
L_118318:;
  /* 118318: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 11831c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 118320: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 118324: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1147688));
  arc_dispatch(c, ARC_X_R(c, 8));
L_118328:;
  /* 118328: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 11832c: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 118330: eor w8, w19, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 19) ^ ARC_W_R(c, 8)));
  /* 118334: tbnz w8, #0, #0x118348 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_118348;
L_118338:;
  /* 118338: ldr x9, [sp, #0x38] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(56))));
  /* 11833c: ldr w8, [x9] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 9)));
  /* 118340: orr w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(2)));
  /* 118344: str w8, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 8));
L_118348:;
  /* 118348: ldr x19, [x27] */
  ARC_X_W(c, 19, arc_ld64(ARC_X_R(c, 27)));
  /* 11834c: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 118350: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1147732));
  fn1_143478(c);
  /* 118354: ldr x0, [sp, #0x58] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(88))));
  /* 118358: str xzr, [sp, #0x58] */
  arc_st64(((c)->sp + INT64_C(88)), ARC_X_R(c, 31));
  /* 11835c: cbz x0, #0x118368 */
  if ((ARC_X_R(c, 0)) == 0) goto L_118368;
  /* 118360: ldr x8, [sp, #0x60] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(96))));
  /* 118364: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1147752));
  arc_dispatch(c, ARC_X_R(c, 8));
L_118368:;
  /* 118368: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11836c: add sp, sp, #0x220 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(544)));
  /* 118370: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 118374: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 118378: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 11837c: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 118380: ldp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 118384: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 118388: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 11838c: ret  */
  return;
L_118390:;
  /* 118390: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1147796));
  fn1_fc3b8(c);
L_118394:;
  /* 118394: bl #0xe2274 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1147800));
  fn1_e2274(c);
  /* 118398: ldurb w8, [x29, #-0x20] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 11839c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1183a0: tbz w8, #0, #0x1183e8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1183e8;
  /* 1183a4: sub x9, x29, #0x28 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 1183a8: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 1183ac: ldr x0, [x9, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(24))));
  /* 1183b0: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 1183b4: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 1183b8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1147836));
  fn1_142608(c);
  /* 1183bc: b #0x1183e8 */
  goto L_1183e8;
  /* 1183c0: b #0x1183e4 */
  goto L_1183e4;
  /* 1183c4: b #0x1183e4 */
  goto L_1183e4;
  /* 1183c8: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1147852));
  fn1_a1454(c);
  /* 1183cc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1183d0: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 1183d4: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1147864));
  fn1_d2a78(c);
  /* 1183d8: b #0x1183e8 */
  goto L_1183e8;
  /* 1183dc: b #0x1183e4 */
  goto L_1183e4;
  /* 1183e0: b #0x1183e4 */
  goto L_1183e4;
L_1183e4:;
  /* 1183e4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_1183e8:;
  /* 1183e8: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 1183ec: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1147888));
  fn1_143478(c);
  /* 1183f0: ldr x0, [sp, #0x58] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(88))));
  /* 1183f4: str xzr, [sp, #0x58] */
  arc_st64(((c)->sp + INT64_C(88)), ARC_X_R(c, 31));
  /* 1183f8: cbz x0, #0x118404 */
  if ((ARC_X_R(c, 0)) == 0) goto L_118404;
  /* 1183fc: ldr x8, [sp, #0x60] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(96))));
  /* 118400: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1147908));
  arc_dispatch(c, ARC_X_R(c, 8));
L_118404:;
  /* 118404: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 118408: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1147916));
  fn1_9cc20(c);
  /* 11840c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1147920));
  fn1_a1454(c);
}

void fn1_12480c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039126028));
  /* 12480c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 124810: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 124814: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 124818: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12481c: nop  */
  /* nop: no architectural effect here */
  /* 124820: adr x8, #0x15dd90 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 124824: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 124828: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 12482c: tbz w8, #0, #0x124868 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_124868;
L_124830:;
  /* 124830: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 124834: nop  */
  /* nop: no architectural effect here */
  /* 124838: adr x9, #0x15dc40 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1432640)));
  /* 12483c: ldr x8, [x8, #0xd88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3464))));
  /* 124840: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 124844: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 124848: b.eq #0x124858 */
  if (ARC_COND(c, 0)) goto L_124858;
  /* 12484c: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* 124850: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 124854: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1198168));
  fn1_db2e0(c);
L_124858:;
  /* 124858: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12485c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 124860: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 124864: ret  */
  return;
L_124868:;
  /* 124868: nop  */
  /* nop: no architectural effect here */
  /* 12486c: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 124870: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1198196));
  fn1_1424b8(c);
  /* 124874: cbz w0, #0x124830 */
  if ((ARC_W_R(c, 0)) == 0) goto L_124830;
  /* 124878: bl #0x143ac0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1198204));
  fn1_143ac0(c);
  /* 12487c: nop  */
  /* nop: no architectural effect here */
  /* 124880: adr x0, #0x15dd88 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432968)));
  /* 124884: nop  */
  /* nop: no architectural effect here */
  /* 124888: adr x1, #0x15dd78 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1432952)));
  /* 12488c: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1198224));
  fn1_143460(c);
  /* 124890: nop  */
  /* nop: no architectural effect here */
  /* 124894: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 124898: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1198236));
  fn1_1424d0(c);
  /* 12489c: b #0x124830 */
  goto L_124830;
  /* 1248a0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1248a4: nop  */
  /* nop: no architectural effect here */
  /* 1248a8: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 1248ac: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1198256));
  fn1_1424e8(c);
  /* 1248b0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1248b4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1198264));
  fn1_a1454(c);
}

void fn1_127474(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039137396));
  /* 127474: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 127478: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 12747c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 127480: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 127484: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 127488: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 12748c: sub x9, x2, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 2) - UINT64_C(1)));
  /* 127490: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 127494: ldr x8, [x8, #0xc80] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3200))));
  /* 127498: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12749c: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 1274a0: stp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1274a4: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 1274a8: ldr x9, [x1, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* 1274ac: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1274b0: csinc x1, x9, x1, ne */
  ARC_X_W(c, 1, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 1)) + 1)));
  /* 1274b4: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 1274b8: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1274bc: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1209536));
  fn1_1441e0(c);
  /* 1274c0: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* 1274c4: cbz x0, #0x1274dc */
  if ((ARC_X_R(c, 0)) == 0) goto L_1274dc;
  /* 1274c8: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1274cc: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1274d0: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1274d4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1274d8: ret  */
  return;
L_1274dc:;
  /* 1274dc: adrp x0, #0x52000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(335872)));
  /* 1274e0: add x0, x0, #0x1b6 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(438)));
  /* 1274e4: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 1274e8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1274ec: add x20, sp, #8 */
  ARC_X_W(c, 20, ((c)->sp + UINT64_C(8)));
  /* 1274f0: bl #0x142de8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1209588));
  fn1_142de8(c);
  /* 1274f4: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 1274f8: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
  /* 1274fc: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 127500: csinc x0, x9, x20, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 20)) + 1)));
  /* 127504: bl #0x142c98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1209608));
  fn1_142c98(c);
  /* 127508: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 12750c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 127510: tbz w8, #0, #0x127530 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_127530;
  /* 127514: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 127518: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 12751c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 127520: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1209636));
  fn1_142608(c);
  /* 127524: b #0x127530 */
  goto L_127530;
  /* 127528: b #0x12752c */
  goto L_12752c;
L_12752c:;
  /* 12752c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_127530:;
  /* 127530: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 127534: bl #0x143ec8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1209656));
  fn1_143ec8(c);
  /* 127538: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12753c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1209664));
  fn1_9cc20(c);
}

void fn1_129b28(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039147304));
  /* 129b28: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 129b2c: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 129b30: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 129b34: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 129b38: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 129b3c: mov x8, x5 */
  ARC_X_W(c, 8, ARC_X_R(c, 5));
  /* 129b40: mov x19, x7 */
  ARC_X_W(c, 19, ARC_X_R(c, 7));
  /* 129b44: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 129b48: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 129b4c: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 129b50: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 129b54: mov x5, sp */
  ARC_X_W(c, 5, (c)->sp);
  /* 129b58: mov x3, x8 */
  ARC_X_W(c, 3, ARC_X_R(c, 8));
  /* 129b5c: mov x4, x6 */
  ARC_X_W(c, 4, ARC_X_R(c, 6));
  /* 129b60: mov w6, #0x10ffff */
  ARC_W_W(c, 6, UINT64_C(1114111));
  /* 129b64: mov w7, wzr */
  ARC_W_W(c, 7, ARC_W_R(c, 31));
  /* 129b68: bl #0x12955c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1219436));
  fn1_12955c(c);
  /* 129b6c: ldp x9, x8, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 129b70: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 129b74: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* 129b78: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 129b7c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 129b80: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 129b84: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 129b88: ret  */
  return;
}

void fn1_12b1b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039153072));
  /* 12b1b0: bti c */
  /* bti: no architectural effect here */
  /* 12b1b4: mov w0, #3 */
  ARC_W_W(c, 0, UINT64_C(3));
  /* 12b1b8: str x2, [x4] */
  arc_st64(ARC_X_R(c, 4), ARC_X_R(c, 2));
  /* 12b1bc: ret  */
  return;
}

void fn1_12ccd0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039160016));
  /* 12ccd0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12ccd4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12ccd8: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12ccdc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12cce0: nop  */
  /* nop: no architectural effect here */
  /* 12cce4: adr x8, #0x15e1e8 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1434088)));
  /* 12cce8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 12ccec: tbz w8, #0, #0x12cf6c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12cf6c;
L_12ccf0:;
  /* 12ccf0: nop  */
  /* nop: no architectural effect here */
  /* 12ccf4: adr x19, #0x15e098 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1433752)));
  /* 12ccf8: adrp x1, #0x75000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(479232)));
  /* 12ccfc: add x1, x1, #0x9c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(156)));
  /* 12cd00: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12cd04: mov w2, #6 */
  ARC_W_W(c, 2, UINT64_C(6));
  /* 12cd08: mov w20, #6 */
  ARC_W_W(c, 20, UINT64_C(6));
  /* 12cd0c: bl #0xe2ab4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1232144));
  fn1_e2ab4(c);
  /* 12cd10: adrp x1, #0x75000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(479232)));
  /* 12cd14: add x1, x1, #0x1ec */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(492)));
  /* 12cd18: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 12cd1c: mov w2, #6 */
  ARC_W_W(c, 2, UINT64_C(6));
  /* 12cd20: bl #0xe2ab4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1232164));
  fn1_e2ab4(c);
  /* 12cd24: adrp x1, #0x74000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(475136)));
  /* 12cd28: add x1, x1, #0xf58 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3928)));
  /* 12cd2c: add x0, x19, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(48)));
  /* 12cd30: mov w2, #7 */
  ARC_W_W(c, 2, UINT64_C(7));
  /* 12cd34: bl #0xe2ab4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1232184));
  fn1_e2ab4(c);
  /* 12cd38: adrp x1, #0x75000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(479232)));
  /* 12cd3c: add x1, x1, #0x22c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(556)));
  /* 12cd40: add x0, x19, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(72)));
  /* 12cd44: mov w2, #9 */
  ARC_W_W(c, 2, UINT64_C(9));
  /* 12cd48: bl #0xe2ab4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1232204));
  fn1_e2ab4(c);
  /* 12cd4c: adrp x1, #0x75000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(479232)));
  /* 12cd50: add x1, x1, #0x14c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(332)));
  /* 12cd54: add x0, x19, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(96)));
  /* 12cd58: mov w2, #8 */
  ARC_W_W(c, 2, UINT64_C(8));
  /* 12cd5c: bl #0xe2ab4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1232224));
  fn1_e2ab4(c);
  /* 12cd60: adrp x1, #0x75000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(479232)));
  /* 12cd64: add x1, x1, #0xdc */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(220)));
  /* 12cd68: add x0, x19, #0x78 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(120)));
  /* 12cd6c: mov w2, #6 */
  ARC_W_W(c, 2, UINT64_C(6));
  /* 12cd70: bl #0xe2ab4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1232244));
  fn1_e2ab4(c);
  /* 12cd74: adrp x1, #0x75000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(479232)));
  /* 12cd78: add x1, x1, #0x170 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(368)));
  /* 12cd7c: add x0, x19, #0x90 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(144)));
  /* 12cd80: mov w2, #8 */
  ARC_W_W(c, 2, UINT64_C(8));
  /* 12cd84: bl #0xe2ab4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1232264));
  fn1_e2ab4(c);
  /* 12cd88: ldrb w8, [x19, #0xa8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(168))));
  /* 12cd8c: tbnz w8, #0, #0x12cda0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12cda0;
  /* 12cd90: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12cd94: add x8, x8, #0x140 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(320)));
  /* 12cd98: strb w20, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 20));
  }
  /* 12cd9c: b #0x12cdb4 */
  goto L_12cdb4;
L_12cda0:;
  /* 12cda0: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12cda4: add x9, x9, #0x148 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(328)));
  /* 12cda8: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12cdac: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12cdb0: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12cdb4:;
  /* 12cdb4: mov x9, #0x53 */
  ARC_X_W(c, 9, UINT64_C(83));
  /* 12cdb8: mov w10, #0x6e */
  ARC_W_W(c, 10, UINT64_C(110));
  /* 12cdbc: movk x9, #0x75, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(502511173632)));
  /* 12cdc0: stp x9, x10, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 12cdc4: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12cdc8: ldrb w8, [x8, #0x158] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(344))));
  /* 12cdcc: tbnz w8, #0, #0x12cde4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12cde4;
  /* 12cdd0: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12cdd4: add x8, x8, #0x158 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(344)));
  /* 12cdd8: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* 12cddc: strb w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12cde0: b #0x12cdf8 */
  goto L_12cdf8;
L_12cde4:;
  /* 12cde4: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12cde8: add x9, x9, #0x160 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(352)));
  /* 12cdec: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12cdf0: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12cdf4: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12cdf8:;
  /* 12cdf8: mov x9, #0x4d */
  ARC_X_W(c, 9, UINT64_C(77));
  /* 12cdfc: mov w10, #0x6e */
  ARC_W_W(c, 10, UINT64_C(110));
  /* 12ce00: movk x9, #0x6f, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(476741369856)));
  /* 12ce04: stp x9, x10, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 12ce08: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12ce0c: ldrb w8, [x8, #0x170] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(368))));
  /* 12ce10: tbnz w8, #0, #0x12ce28 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12ce28;
  /* 12ce14: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12ce18: add x8, x8, #0x170 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(368)));
  /* 12ce1c: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* 12ce20: strb w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12ce24: b #0x12ce3c */
  goto L_12ce3c;
L_12ce28:;
  /* 12ce28: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12ce2c: add x9, x9, #0x178 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(376)));
  /* 12ce30: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12ce34: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12ce38: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12ce3c:;
  /* 12ce3c: mov x9, #0x54 */
  ARC_X_W(c, 9, UINT64_C(84));
  /* 12ce40: mov w10, #0x65 */
  ARC_W_W(c, 10, UINT64_C(101));
  /* 12ce44: movk x9, #0x75, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(502511173632)));
  /* 12ce48: stp x9, x10, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 12ce4c: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12ce50: ldrb w8, [x8, #0x188] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(392))));
  /* 12ce54: tbnz w8, #0, #0x12ce6c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12ce6c;
  /* 12ce58: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12ce5c: add x8, x8, #0x188 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(392)));
  /* 12ce60: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* 12ce64: strb w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12ce68: b #0x12ce80 */
  goto L_12ce80;
L_12ce6c:;
  /* 12ce6c: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12ce70: add x9, x9, #0x190 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(400)));
  /* 12ce74: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12ce78: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12ce7c: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12ce80:;
  /* 12ce80: mov x9, #0x57 */
  ARC_X_W(c, 9, UINT64_C(87));
  /* 12ce84: mov w10, #0x64 */
  ARC_W_W(c, 10, UINT64_C(100));
  /* 12ce88: movk x9, #0x65, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(433791696896)));
  /* 12ce8c: stp x9, x10, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 12ce90: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12ce94: ldrb w8, [x8, #0x1a0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(416))));
  /* 12ce98: tbnz w8, #0, #0x12ceb0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12ceb0;
  /* 12ce9c: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12cea0: add x8, x8, #0x1a0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(416)));
  /* 12cea4: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* 12cea8: strb w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12ceac: b #0x12cec4 */
  goto L_12cec4;
L_12ceb0:;
  /* 12ceb0: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12ceb4: add x9, x9, #0x1a8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(424)));
  /* 12ceb8: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12cebc: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12cec0: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12cec4:;
  /* 12cec4: mov x9, #0x54 */
  ARC_X_W(c, 9, UINT64_C(84));
  /* 12cec8: mov w10, #0x75 */
  ARC_W_W(c, 10, UINT64_C(117));
  /* 12cecc: movk x9, #0x68, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(446676598784)));
  /* 12ced0: stp x9, x10, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 12ced4: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12ced8: ldrb w8, [x8, #0x1b8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(440))));
  /* 12cedc: tbnz w8, #0, #0x12cef4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12cef4;
  /* 12cee0: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12cee4: add x8, x8, #0x1b8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(440)));
  /* 12cee8: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* 12ceec: strb w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12cef0: b #0x12cf08 */
  goto L_12cf08;
L_12cef4:;
  /* 12cef4: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12cef8: add x9, x9, #0x1c0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(448)));
  /* 12cefc: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12cf00: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12cf04: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12cf08:;
  /* 12cf08: mov x9, #0x46 */
  ARC_X_W(c, 9, UINT64_C(70));
  /* 12cf0c: mov w10, #0x69 */
  ARC_W_W(c, 10, UINT64_C(105));
  /* 12cf10: movk x9, #0x72, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(489626271744)));
  /* 12cf14: stp x9, x10, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 12cf18: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12cf1c: ldrb w8, [x8, #0x1d0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(464))));
  /* 12cf20: tbnz w8, #0, #0x12cf38 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12cf38;
  /* 12cf24: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12cf28: add x8, x8, #0x1d0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(464)));
  /* 12cf2c: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* 12cf30: strb w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12cf34: b #0x12cf4c */
  goto L_12cf4c;
L_12cf38:;
  /* 12cf38: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12cf3c: add x9, x9, #0x1d8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(472)));
  /* 12cf40: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12cf44: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12cf48: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12cf4c:;
  /* 12cf4c: mov x9, #0x53 */
  ARC_X_W(c, 9, UINT64_C(83));
  /* 12cf50: mov w10, #0x74 */
  ARC_W_W(c, 10, UINT64_C(116));
  /* 12cf54: movk x9, #0x61, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(416611827712)));
  /* 12cf58: stp x9, x10, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 12cf5c: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12cf60: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12cf64: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12cf68: ret  */
  return;
L_12cf6c:;
  /* 12cf6c: nop  */
  /* nop: no architectural effect here */
  /* 12cf70: adr x0, #0x15e1e8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1434088)));
  /* 12cf74: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1232760));
  fn1_1424b8(c);
  /* 12cf78: cbz w0, #0x12ccf0 */
  if ((ARC_W_R(c, 0)) == 0) goto L_12ccf0;
  /* 12cf7c: adrp x0, #0x135000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1265664)));
  /* 12cf80: add x0, x0, #0x4a8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1192)));
  /* 12cf84: nop  */
  /* nop: no architectural effect here */
  /* 12cf88: adr x2, #0x148af8 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1346296)));
  /* 12cf8c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 12cf90: bl #0x1423f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1232788));
  fn1_1423f8(c);
  /* 12cf94: nop  */
  /* nop: no architectural effect here */
  /* 12cf98: adr x0, #0x15e1e8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1434088)));
  /* 12cf9c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1232800));
  fn1_1424d0(c);
  /* 12cfa0: b #0x12ccf0 */
  goto L_12ccf0;
}

void fn1_1349e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192036));
  /* 1349e4: bti c */
  /* bti: no architectural effect here */
  /* 1349e8: add x0, x0, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* 1349ec: b #0x1369ec */
  fn1_1369ec(c); return;
}

void fn1_1352bc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039194300));
  /* 1352bc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1352c0: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1352c4: stp x26, x25, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 1352c8: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1352cc: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1352d0: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1352d4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1352d8: ldp x21, x8, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 21, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 1352dc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1352e0: sub x9, x8, x21 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - ARC_X_R(c, 21)));
  /* 1352e4: cmp x1, x9, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 3)));
  /* 1352e8: b.ls #0x13534c */
  if (ARC_COND(c, 9)) goto L_13534c;
  /* 1352ec: ldr x20, [x19] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 19)));
  /* 1352f0: sub x21, x21, x20 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) - ARC_X_R(c, 20)));
  /* 1352f4: asr x24, x21, #3 */
  ARC_X_W(c, 24, ((uint64_t)((int64_t)(ARC_X_R(c, 21)) >> ((UINT64_C(3)) & 63))));
  /* 1352f8: add x9, x24, x1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + ARC_X_R(c, 1)));
  /* 1352fc: lsr x10, x9, #0x3d */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(61)) & 63)));
  /* 135300: cbnz x10, #0x135420 */
  if ((ARC_X_R(c, 10)) != 0) goto L_135420;
  /* 135304: sub x8, x8, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 20)));
  /* 135308: mov x11, #0x7ffffffffffffff8 */
  ARC_X_W(c, 11, UINT64_C(9223372036854775800));
  /* 13530c: add x25, x19, #0x18 */
  ARC_X_W(c, 25, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 135310: asr x10, x8, #2 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* 135314: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* 135318: csel x9, x10, x9, hi */
  ARC_X_W(c, 9, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 13531c: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* 135320: mov x8, #0x1fffffffffffffff */
  ARC_X_W(c, 8, UINT64_C(2305843009213693951));
  /* 135324: csel x22, x9, x8, lo */
  ARC_X_W(c, 22, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 135328: cbz x22, #0x135370 */
  if ((ARC_X_R(c, 22)) == 0) goto L_135370;
  /* 13532c: cmp x22, #0x1e */
  (void)arc_sub64(c, ARC_X_R(c, 22), UINT64_C(30));
  /* 135330: b.hi #0x135378 */
  if (ARC_COND(c, 8)) goto L_135378;
  /* 135334: ldrb w8, [x19, #0x108] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(264))));
  /* 135338: tbnz w8, #0, #0x135378 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_135378;
  /* 13533c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 135340: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 135344: strb w8, [x19, #0x108] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(264)), ARC_W_R(c, 8));
  /* 135348: b #0x135390 */
  goto L_135390;
L_13534c:;
  /* 13534c: cbz x1, #0x135368 */
  if ((ARC_X_R(c, 1)) == 0) goto L_135368;
  /* 135350: lsl x20, x1, #3 */
  ARC_X_W(c, 20, ((uint64_t)(ARC_X_R(c, 1)) << ((UINT64_C(3)) & 63)));
  /* 135354: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 135358: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 13535c: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 135360: bl #0x144a20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1266532));
  fn1_144a20(c);
  /* 135364: add x21, x21, x20 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + ARC_X_R(c, 20)));
L_135368:;
  /* 135368: str x21, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 21));
  /* 13536c: b #0x135404 */
  goto L_135404;
L_135370:;
  /* 135370: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 135374: b #0x135390 */
  goto L_135390;
L_135378:;
  /* 135378: lsr x8, x22, #0x3d */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 22)) >> ((UINT64_C(61)) & 63)));
  /* 13537c: cbnz x8, #0x135424 */
  if ((ARC_X_R(c, 8)) != 0) goto L_135424;
  /* 135380: lsl x0, x22, #3 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 22)) << ((UINT64_C(3)) & 63)));
  /* 135384: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* 135388: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1266572));
  fn1_1428f0(c);
  /* 13538c: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
L_135390:;
  /* 135390: add x26, x0, x22, lsl #3 */
  ARC_X_W(c, 26, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 22)) << 3)));
  /* 135394: lsl x22, x1, #3 */
  ARC_X_W(c, 22, ((uint64_t)(ARC_X_R(c, 1)) << ((UINT64_C(3)) & 63)));
  /* 135398: add x23, x0, x21 */
  ARC_X_W(c, 23, (ARC_X_R(c, 0) + ARC_X_R(c, 21)));
  /* 13539c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1353a0: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1353a4: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 1353a8: bl #0x144a20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1266604));
  fn1_144a20(c);
  /* 1353ac: sub x24, x23, x24, lsl #3 */
  ARC_X_W(c, 24, (ARC_X_R(c, 23) - ((uint64_t)(ARC_X_R(c, 24)) << 3)));
  /* 1353b0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1353b4: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1353b8: add x22, x23, x22 */
  ARC_X_W(c, 22, (ARC_X_R(c, 23) + ARC_X_R(c, 22)));
  /* 1353bc: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 1353c0: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1266628));
  fn1_1449d8(c);
  /* 1353c4: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* 1353c8: ldr x8, [x19, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 1353cc: stp x24, x22, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* 1353d0: str x26, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 26));
  /* 1353d4: cbz x0, #0x135404 */
  if ((ARC_X_R(c, 0)) == 0) goto L_135404;
  /* 1353d8: cmp x0, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 25));
  /* 1353dc: b.eq #0x135400 */
  if (ARC_COND(c, 0)) goto L_135400;
  /* 1353e0: sub x1, x8, x0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) - ARC_X_R(c, 0)));
  /* 1353e4: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1353e8: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1353ec: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1353f0: ldp x26, x25, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 1353f4: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1353f8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1353fc: b #0x142608 */
  fn1_142608(c); return;
L_135400:;
  /* 135400: strb wzr, [x19, #0x108] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(264)), ARC_W_R(c, 31));
L_135404:;
  /* 135404: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 135408: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 13540c: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 135410: ldp x26, x25, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 135414: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 135418: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13541c: ret  */
  return;
L_135420:;
  /* 135420: bl #0x135104 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1266724));
  fn1_135104(c);
L_135424:;
  /* 135424: bl #0xd9fe8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1266728));
  fn1_d9fe8(c);
}

void fn1_1382b4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039206580));
  /* 1382b4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1382b8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1382bc: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1382c0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1382c4: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1382c8: ldr x8, [x8, #0xe50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3664))));
  /* 1382cc: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* 1382d0: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* 1382d4: add x10, x8, #0x18 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* 1382d8: add x8, x8, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* 1382dc: add x19, x0, x9 */
  ARC_X_W(c, 19, (ARC_X_R(c, 0) + ARC_X_R(c, 9)));
  /* 1382e0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1382e4: str x8, [x19, #0x68]! */
  { const uint64_t _a = (ARC_X_R(c, 19) + INT64_C(104));
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(104));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 1382e8: str x10, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 10));
  }
  /* 1382ec: bl #0x144558 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1278704));
  fn1_144558(c);
  /* 1382f0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1382f4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1382f8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1382fc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 138300: b #0x1433b8 */
  fn1_1433b8(c); return;
}

void fn1_13ca60(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039224928));
  /* 13ca60: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13ca64: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 13ca68: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13ca6c: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 13ca70: nop  */
  /* nop: no architectural effect here */
  /* 13ca74: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13ca78: ldr w9, [x1] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 1)));
  /* 13ca7c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13ca80: tbz w8, #0, #0x13caa8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13caa8;
L_13ca84:;
  /* 13ca84: nop  */
  /* nop: no architectural effect here */
  /* 13ca88: adr x8, #0x156d38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13ca8c: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 13ca90: stp x9, x8, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 13ca94: bl #0x139ad0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1297048));
  fn1_139ad0(c);
  /* 13ca98: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13ca9c: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 13caa0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13caa4: ret  */
  return;
L_13caa8:;
  /* 13caa8: nop  */
  /* nop: no architectural effect here */
  /* 13caac: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13cab0: stp x9, x0, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 13cab4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 13cab8: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1297084));
  fn1_1424b8(c);
  /* 13cabc: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 13cac0: ldp x9, x0, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 0, arc_ld64(_pa + 8));
  }
  /* 13cac4: cbz w8, #0x13ca84 */
  if ((ARC_W_R(c, 8)) == 0) goto L_13ca84;
  /* 13cac8: nop  */
  /* nop: no architectural effect here */
  /* 13cacc: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13cad0: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1297108));
  fn1_1424d0(c);
  /* 13cad4: ldp x9, x0, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 0, arc_ld64(_pa + 8));
  }
  /* 13cad8: b #0x13ca84 */
  goto L_13ca84;
}

void fn1_142530(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248176));
  /* 142530: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 142534: ldr x17, [x16, #0xef0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3824))));
  /* 142538: add x16, x16, #0xef0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3824)));
  /* 14253c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142540: nop  */
  /* nop: no architectural effect here */
  /* 142544: nop  */
  /* nop: no architectural effect here */
}

void fn1_142b30(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249712));
  /* 142b30: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142b34: ldr x17, [x16, #0xf0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(240))));
  /* 142b38: add x16, x16, #0xf0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(240)));
  /* 142b3c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142b40: nop  */
  /* nop: no architectural effect here */
  /* 142b44: nop  */
  /* nop: no architectural effect here */
}

void fn1_143130(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251248));
  /* 143130: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143134: ldr x17, [x16, #0x2f0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(752))));
  /* 143138: add x16, x16, #0x2f0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(752)));
  /* 14313c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143140: nop  */
  /* nop: no architectural effect here */
  /* 143144: nop  */
  /* nop: no architectural effect here */
}

void fn1_143730(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252784));
  /* 143730: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143734: ldr x17, [x16, #0x4f0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1264))));
  /* 143738: add x16, x16, #0x4f0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1264)));
  /* 14373c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143740: nop  */
  /* nop: no architectural effect here */
  /* 143744: nop  */
  /* nop: no architectural effect here */
}

void fn1_143d30(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254320));
  /* 143d30: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143d34: ldr x17, [x16, #0x6f0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1776))));
  /* 143d38: add x16, x16, #0x6f0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1776)));
  /* 143d3c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143d40: nop  */
  /* nop: no architectural effect here */
  /* 143d44: nop  */
  /* nop: no architectural effect here */
}

void fn1_144330(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255856));
  /* 144330: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144334: ldr x17, [x16, #0x8f0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2288))));
  /* 144338: add x16, x16, #0x8f0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2288)));
  /* 14433c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144340: nop  */
  /* nop: no architectural effect here */
  /* 144344: nop  */
  /* nop: no architectural effect here */
}

void fn1_144930(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039257392));
  /* 144930: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144934: ldr x17, [x16, #0xaf0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2800))));
  /* 144938: add x16, x16, #0xaf0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2800)));
  /* 14493c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144940: nop  */
  /* nop: no architectural effect here */
  /* 144944: nop  */
  /* nop: no architectural effect here */
}

