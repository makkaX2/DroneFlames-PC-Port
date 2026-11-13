#include "lifted.h"

void fn1_9ecbc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038578364));
  /* 9ecbc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 9ecc0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 9ecc4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 9ecc8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 9eccc: ldr w9, [x3] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 3)));
  /* 9ecd0: mov x8, x2 */
  ARC_X_W(c, 8, ARC_X_R(c, 2));
  /* 9ecd4: cmp w9, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(4));
  /* 9ecd8: b.gt #0x9ed0c */
  if (ARC_COND(c, 12)) goto L_9ed0c;
  /* 9ecdc: cmp w9, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(1));
  /* 9ece0: b.eq #0x9ed64 */
  if (ARC_COND(c, 0)) goto L_9ed64;
  /* 9ece4: cmp w9, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(2));
  /* 9ece8: b.eq #0x9ecf4 */
  if (ARC_COND(c, 0)) goto L_9ecf4;
  /* 9ecec: cmp w9, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(3));
  /* 9ecf0: b.ne #0x9ee64 */
  if (ARC_COND(c, 1)) goto L_9ee64;
L_9ecf4:;
  /* 9ecf4: ldr x9, [x3, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 3) + INT64_C(8))));
  /* 9ecf8: ldr x0, [x9, x8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + ARC_X_R(c, 8))));
  /* 9ecfc: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 9ed00: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9ed04: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 9ed08: ret  */
  return;
L_9ed0c:;
  /* 9ed0c: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 9ed10: cmp w9, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(5));
  /* 9ed14: b.eq #0x9ed78 */
  if (ARC_COND(c, 0)) goto L_9ed78;
  /* 9ed18: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 9ed1c: cmp w9, #6 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(6));
  /* 9ed20: b.eq #0x9ed44 */
  if (ARC_COND(c, 0)) goto L_9ed44;
  /* 9ed24: cmp w9, #7 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(7));
  /* 9ed28: b.ne #0x9ee64 */
  if (ARC_COND(c, 1)) goto L_9ee64;
  /* 9ed2c: ldr x0, [x3, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 3) + INT64_C(8))));
  /* 9ed30: mov x3, x8 */
  ARC_X_W(c, 3, ARC_X_R(c, 8));
  /* 9ed34: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 9ed38: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9ed3c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 9ed40: b #0x9f420 */
  fn1_9f420(c); return;
L_9ed44:;
  /* 9ed44: ldr x0, [x3, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 3) + INT64_C(8))));
  /* 9ed48: mov x3, x8 */
  ARC_X_W(c, 3, ARC_X_R(c, 8));
  /* 9ed4c: bl #0x9f420 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(650576));
  fn1_9f420(c);
  /* 9ed50: ldr x0, [x0] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 0)));
  /* 9ed54: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 9ed58: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9ed5c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 9ed60: ret  */
  return;
L_9ed64:;
  /* 9ed64: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 9ed68: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 9ed6c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9ed70: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 9ed74: ret  */
  return;
L_9ed78:;
  /* 9ed78: ldr x8, [x3, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 3) + INT64_C(8))));
  /* 9ed7c: cmp w8, #0x1d */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(29));
  /* 9ed80: b.le #0x9eda0 */
  if (ARC_COND(c, 13)) goto L_9eda0;
  /* 9ed84: cmp w8, #0x1f */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(31));
  /* 9ed88: b.gt #0x9edd0 */
  if (ARC_COND(c, 12)) goto L_9edd0;
  /* 9ed8c: cmp w8, #0x1e */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(30));
  /* 9ed90: b.eq #0x9ee34 */
  if (ARC_COND(c, 0)) goto L_9ee34;
  /* 9ed94: cmp w8, #0x1f */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(31));
  /* 9ed98: b.eq #0x9edf8 */
  if (ARC_COND(c, 0)) goto L_9edf8;
  /* 9ed9c: b #0x9ee10 */
  goto L_9ee10;
L_9eda0:;
  /* 9eda0: cmn w8, #2 */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(2), 0);
  /* 9eda4: b.eq #0x9edf8 */
  if (ARC_COND(c, 0)) goto L_9edf8;
  /* 9eda8: cmn w8, #1 */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(1), 0);
  /* 9edac: b.eq #0x9ede0 */
  if (ARC_COND(c, 0)) goto L_9ede0;
  /* 9edb0: cmp w8, #0x1d */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(29));
  /* 9edb4: b.ne #0x9ee10 */
  if (ARC_COND(c, 1)) goto L_9ee10;
  /* 9edb8: add x8, x2, #0xe8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 2) + UINT64_C(232)));
  /* 9edbc: ldr x0, [x8] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 8)));
  /* 9edc0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 9edc4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9edc8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 9edcc: ret  */
  return;
L_9edd0:;
  /* 9edd0: cmp w8, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(34));
  /* 9edd4: b.eq #0x9ee4c */
  if (ARC_COND(c, 0)) goto L_9ee4c;
  /* 9edd8: cmp w8, #0x20 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(32));
  /* 9eddc: b.ne #0x9ee10 */
  if (ARC_COND(c, 1)) goto L_9ee10;
L_9ede0:;
  /* 9ede0: add x8, x2, #0x100 */
  ARC_X_W(c, 8, (ARC_X_R(c, 2) + UINT64_C(256)));
  /* 9ede4: ldr x0, [x8] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 8)));
  /* 9ede8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 9edec: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9edf0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 9edf4: ret  */
  return;
L_9edf8:;
  /* 9edf8: add x8, x2, #0xf8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 2) + UINT64_C(248)));
  /* 9edfc: ldr x0, [x8] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 8)));
  /* 9ee00: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 9ee04: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9ee08: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 9ee0c: ret  */
  return;
L_9ee10:;
  /* 9ee10: cmp w8, #0x1c */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(28));
  /* 9ee14: b.hi #0x9ee98 */
  if (ARC_COND(c, 8)) goto L_9ee98;
  /* 9ee18: and x8, x8, #0x1f */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(31)));
  /* 9ee1c: add x8, x2, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 2) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* 9ee20: ldr x0, [x8] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 8)));
  /* 9ee24: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 9ee28: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9ee2c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 9ee30: ret  */
  return;
L_9ee34:;
  /* 9ee34: add x8, x2, #0xf0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 2) + UINT64_C(240)));
  /* 9ee38: ldr x0, [x8] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 8)));
  /* 9ee3c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 9ee40: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9ee44: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 9ee48: ret  */
  return;
L_9ee4c:;
  /* 9ee4c: add x8, x2, #0x108 */
  ARC_X_W(c, 8, (ARC_X_R(c, 2) + UINT64_C(264)));
  /* 9ee50: ldr x0, [x8] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 8)));
  /* 9ee54: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 9ee58: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9ee5c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 9ee60: ret  */
  return;
L_9ee64:;
  /* 9ee64: adrp x19, #0x151000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9ee68: nop  */
  /* nop: no architectural effect here */
  /* 9ee6c: adr x1, #0x4f83f */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(325695)));
  /* 9ee70: ldr x19, [x19, #0x998] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(2456))));
  /* 9ee74: adrp x2, #0x50000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(327680)));
  /* 9ee78: add x2, x2, #0xad6 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2774)));
  /* 9ee7c: adrp x3, #0x50000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(327680)));
  /* 9ee80: add x3, x3, #0x42d */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(1069)));
  /* 9ee84: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9ee88: bl #0x144a38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(650892));
  fn1_144a38(c);
  /* 9ee8c: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9ee90: bl #0x143730 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(650900));
  fn1_143730(c);
  /* 9ee94: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(650904));
  fn1_1427b8(c);
L_9ee98:;
  /* 9ee98: adrp x19, #0x151000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9ee9c: nop  */
  /* nop: no architectural effect here */
  /* 9eea0: adr x1, #0x4f83f */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(325695)));
  /* 9eea4: ldr x19, [x19, #0x998] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(2456))));
  /* 9eea8: adrp x2, #0x50000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(327680)));
  /* 9eeac: add x2, x2, #0xbee */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(3054)));
  /* 9eeb0: adrp x3, #0x50000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(327680)));
  /* 9eeb4: add x3, x3, #0x412 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(1042)));
  /* 9eeb8: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9eebc: bl #0x144a38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(650944));
  fn1_144a38(c);
  /* 9eec0: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9eec4: bl #0x143730 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(650952));
  fn1_143730(c);
  /* 9eec8: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(650956));
  fn1_1427b8(c);
}

void fn1_a2014(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038591508));
  /* a2014: bti c */
  /* bti: no architectural effect here */
  /* a2018: adrp x0, #0x4f000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(323584)));
  /* a201c: add x0, x0, #0xe22 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3618)));
  /* a2020: ret  */
  return;
}

void fn1_a46ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038601452));
L_a46ec:;
  /* a46ec: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a46f0: sub sp, sp, #0x150 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(336)));
  /* a46f4: stp x29, x30, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a46f8: stp x28, x27, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* a46fc: stp x26, x25, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* a4700: stp x24, x23, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* a4704: stp x22, x21, [sp, #0x130] */
  { const uint64_t _pa = ((c)->sp + INT64_C(304));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a4708: stp x20, x19, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a470c: add x29, sp, #0xf0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(240)));
  /* a4710: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a4714: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* a4718: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* a471c: bl #0xa6a54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(673568));
  fn1_a6a54(c);
  /* a4720: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* a4724: subs x10, x9, x8 */
  ARC_X_W(c, 10, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8)));
  /* a4728: b.eq #0xa47b8 */
  if (ARC_COND(c, 0)) goto L_a47b8;
  /* a472c: ldrb w11, [x8] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 8)));
  /* a4730: cmp w11, #0x47 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(71));
  /* a4734: b.eq #0xa4908 */
  if (ARC_COND(c, 0)) goto L_a4908;
  /* a4738: cmp w11, #0x54 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(84));
  /* a473c: b.ne #0xa47b8 */
  if (ARC_COND(c, 1)) goto L_a47b8;
  /* a4740: cmp x10, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(2));
  /* a4744: b.lo #0xa4c1c */
  if (ARC_COND(c, 3)) goto L_a4c1c;
  /* a4748: ldrb w10, [x8, #1] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(1))));
  /* a474c: cmp w10, #0x52 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(82));
  /* a4750: b.le #0xa49b8 */
  if (ARC_COND(c, 13)) goto L_a49b8;
  /* a4754: cmp w10, #0x55 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(85));
  /* a4758: b.le #0xa4be0 */
  if (ARC_COND(c, 13)) goto L_a4be0;
  /* a475c: cmp w10, #0x56 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(86));
  /* a4760: b.eq #0xa4cdc */
  if (ARC_COND(c, 0)) goto L_a4cdc;
  /* a4764: cmp w10, #0x57 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(87));
  /* a4768: b.eq #0xa4d34 */
  if (ARC_COND(c, 0)) goto L_a4d34;
  /* a476c: cmp w10, #0x63 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(99));
  /* a4770: b.ne #0xa4c1c */
  if (ARC_COND(c, 1)) goto L_a4c1c;
  /* a4774: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* a4778: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a477c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a4780: bl #0xa7e98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(673668));
  fn1_a7e98(c);
  /* a4784: tbnz w0, #0, #0xa5048 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_a5048;
  /* a4788: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a478c: bl #0xa7e98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(673680));
  fn1_a7e98(c);
  /* a4790: tbnz w0, #0, #0xa5048 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_a5048;
  /* a4794: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a4798: bl #0xa46ec */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(673692));
  fn1_a46ec(c);
  /* a479c: str x0, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 0));
  /* a47a0: cbz x0, #0xa5048 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a5048;
  /* a47a4: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* a47a8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a47ac: bl #0xa809c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(673712));
  fn1_a809c(c);
  /* a47b0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a47b4: b #0xa504c */
  goto L_a504c;
L_a47b8:;
  /* a47b8: ldr x8, [x19, #0x2d8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(728))));
  /* a47bc: ldr x9, [x19, #0x2d0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(720))));
  /* a47c0: strh wzr, [sp, #0x30] */
  arc_st16(((c)->sp + INT64_C(48)), ARC_W_R(c, 31));
  /* a47c4: str wzr, [sp, #0x34] */
  arc_st32(((c)->sp + INT64_C(52)), ARC_W_R(c, 31));
  /* a47c8: sub x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* a47cc: strb wzr, [sp, #0x38] */
  arc_st8(((c)->sp + INT64_C(56)), ARC_W_R(c, 31));
  /* a47d0: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* a47d4: strb wzr, [sp, #0x48] */
  arc_st8(((c)->sp + INT64_C(72)), ARC_W_R(c, 31));
  /* a47d8: str x8, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 8));
  /* a47dc: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* a47e0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a47e4: bl #0xa6c18 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(673768));
  fn1_a6c18(c);
  /* a47e8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a47ec: cbz x0, #0xa504c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a504c;
  /* a47f0: ldr x9, [x19, #0x2d8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(728))));
  /* a47f4: ldr x8, [x19, #0x2d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(720))));
  /* a47f8: sub x10, x9, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* a47fc: ldr x9, [sp, #0x40] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(64))));
  /* a4800: asr x10, x10, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(3)) & 63))));
  /* a4804: subs x11, x10, x9 */
  ARC_X_W(c, 11, arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9)));
  /* a4808: b.ls #0xa4858 */
  if (ARC_COND(c, 9)) goto L_a4858;
  /* a480c: ldr x12, [x19, #0x298] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 19) + INT64_C(664))));
  /* a4810: ldr x13, [x19, #0x2a0] */
  ARC_X_W(c, 13, arc_ld64((ARC_X_R(c, 19) + INT64_C(672))));
  /* a4814: cmp x12, x13 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 13));
  /* a4818: b.eq #0xa5048 */
  if (ARC_COND(c, 0)) goto L_a5048;
  /* a481c: ldr x12, [x12] */
  ARC_X_W(c, 12, arc_ld64(ARC_X_R(c, 12)));
  /* a4820: cbz x12, #0xa5048 */
  if ((ARC_X_R(c, 12)) == 0) goto L_a5048;
  /* a4824: ldp x12, x13, [x12] */
  { const uint64_t _pa = ARC_X_R(c, 12);
    ARC_X_W(c, 12, arc_ld64(_pa));
    ARC_X_W(c, 13, arc_ld64(_pa + 8));
  }
  /* a4828: add x14, x8, x9, lsl #3 */
  ARC_X_W(c, 14, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* a482c: sub x13, x13, x12 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - ARC_X_R(c, 12)));
  /* a4830: asr x13, x13, #3 */
  ARC_X_W(c, 13, ((uint64_t)((int64_t)(ARC_X_R(c, 13)) >> ((UINT64_C(3)) & 63))));
L_a4834:;
  /* a4834: ldr x15, [x14] */
  ARC_X_W(c, 15, arc_ld64(ARC_X_R(c, 14)));
  /* a4838: ldr x16, [x15, #0x10] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 15) + INT64_C(16))));
  /* a483c: cmp x16, x13 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 13));
  /* a4840: b.hs #0xa5048 */
  if (ARC_COND(c, 2)) goto L_a5048;
  /* a4844: ldr x16, [x12, x16, lsl #3] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 16)) << 3))));
  /* a4848: subs x11, x11, #1 */
  ARC_X_W(c, 11, arc_sub64(c, ARC_X_R(c, 11), UINT64_C(1)));
  /* a484c: add x14, x14, #8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(8)));
  /* a4850: str x16, [x15, #0x18] */
  arc_st64((ARC_X_R(c, 15) + INT64_C(24)), ARC_X_R(c, 16));
  /* a4854: b.ne #0xa4834 */
  if (ARC_COND(c, 1)) goto L_a4834;
L_a4858:;
  /* a4858: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* a485c: b.lo #0xa5104 */
  if (ARC_COND(c, 3)) goto L_a5104;
  /* a4860: ldp x11, x10, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* a4864: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* a4868: str x9, [x19, #0x2d8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(728)), ARC_X_R(c, 9));
  /* a486c: subs x8, x10, x11 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11)));
  /* a4870: b.eq #0xa504c */
  if (ARC_COND(c, 0)) goto L_a504c;
  /* a4874: ldrb w9, [x11] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 11)));
  /* a4878: sub w9, w9, #0x2e */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) - UINT64_C(46)));
  /* a487c: cmp w9, #0x31 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(49));
  /* a4880: b.hi #0xa48a0 */
  if (ARC_COND(c, 8)) goto L_a48a0;
  /* a4884: mov w12, #1 */
  ARC_W_W(c, 12, UINT64_C(1));
  /* a4888: lsl x9, x12, x9 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 12)) << ((ARC_X_R(c, 9)) & 63)));
  /* a488c: mov x12, #1 */
  ARC_X_W(c, 12, UINT64_C(1));
  /* a4890: movk x12, #0x80, lsl #16 */
  ARC_X_W(c, 12, ((ARC_X_R(c, 12) & UINT64_C(18446744069414649855)) | UINT64_C(8388608)));
  /* a4894: movk x12, #2, lsl #48 */
  ARC_X_W(c, 12, ((ARC_X_R(c, 12) & UINT64_C(281474976710655)) | UINT64_C(562949953421312)));
  /* a4898: tst x9, x12 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & ARC_X_R(c, 12)));
  /* a489c: b.ne #0xa504c */
  if (ARC_COND(c, 1)) goto L_a504c;
L_a48a0:;
  /* a48a0: cmp x8, #0xd */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(13));
  /* a48a4: b.lo #0xa48dc */
  if (ARC_COND(c, 3)) goto L_a48dc;
  /* a48a8: mov x12, #0x6155 */
  ARC_X_W(c, 12, UINT64_C(24917));
  /* a48ac: ldr x8, [x11] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 11)));
  /* a48b0: ldur x9, [x11, #5] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 11) + INT64_C(5))));
  /* a48b4: movk x12, #0x6539, lsl #16 */
  ARC_X_W(c, 12, ((ARC_X_R(c, 12) & UINT64_C(18446744069414649855)) | UINT64_C(1698234368)));
  /* a48b8: movk x12, #0x616e, lsl #32 */
  ARC_X_W(c, 12, ((ARC_X_R(c, 12) & UINT64_C(18446462603027808255)) | UINT64_C(107125074296832)));
  /* a48bc: movk x12, #0x6c62, lsl #48 */
  ARC_X_W(c, 12, ((ARC_X_R(c, 12) & UINT64_C(281474976710655)) | UINT64_C(7809804703813861376)));
  /* a48c0: cmp x8, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 12));
  /* a48c4: mov x8, #0x6261 */
  ARC_X_W(c, 8, UINT64_C(25185));
  /* a48c8: movk x8, #0x656c, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(1701576704)));
  /* a48cc: movk x8, #0x695f, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(115856742809600)));
  /* a48d0: movk x8, #0x4966, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(5288914812393226240)));
  /* a48d4: ccmp x9, x8, #0, eq */
  if (ARC_COND(c, 0)) { (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* a48d8: b.eq #0xa4d6c */
  if (ARC_COND(c, 0)) goto L_a4d6c;
L_a48dc:;
  /* a48dc: mov x22, xzr */
  ARC_X_W(c, 22, ARC_X_R(c, 31));
  /* a48e0: ldrb w8, [sp, #0x30] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(48))));
  /* a48e4: tbnz w8, #0, #0xa4e5c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_a4e5c;
L_a48e8:;
  /* a48e8: ldrb w8, [sp, #0x31] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(49))));
  /* a48ec: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* a48f0: b.ne #0xa4e5c */
  if (ARC_COND(c, 1)) goto L_a4e5c;
  /* a48f4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a48f8: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(674044));
  fn1_a52b0(c);
  /* a48fc: mov x26, x0 */
  ARC_X_W(c, 26, ARC_X_R(c, 0));
  /* a4900: cbnz x0, #0xa4e60 */
  if ((ARC_X_R(c, 0)) != 0) goto L_a4e60;
  /* a4904: b #0xa5048 */
  goto L_a5048;
L_a4908:;
  /* a4908: cmp x10, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(2));
  /* a490c: b.lo #0xa5048 */
  if (ARC_COND(c, 3)) goto L_a5048;
  /* a4910: ldrb w9, [x8, #1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(1))));
  /* a4914: cmp w9, #0x49 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(73));
  /* a4918: b.eq #0xa4b00 */
  if (ARC_COND(c, 0)) goto L_a4b00;
  /* a491c: cmp w9, #0x52 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(82));
  /* a4920: b.eq #0xa4a40 */
  if (ARC_COND(c, 0)) goto L_a4a40;
  /* a4924: cmp w9, #0x56 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(86));
  /* a4928: b.ne #0xa5048 */
  if (ARC_COND(c, 1)) goto L_a5048;
  /* a492c: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* a4930: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a4934: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a4938: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* a493c: bl #0xa6c18 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(674112));
  fn1_a6c18(c);
  /* a4940: cbz x0, #0xa5048 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a5048;
  /* a4944: ldr x21, [x19, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* a4948: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* a494c: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* a4950: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a4954: b.hi #0xa497c */
  if (ARC_COND(c, 8)) goto L_a497c;
  /* a4958: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a495c: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a4960: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(674148));
  fn1_1428a8(c);
  /* a4964: cbz x0, #0xa5124 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a5124;
  /* a4968: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a496c: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a4970: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a4974: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
  /* a4978: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
L_a497c:;
  /* a497c: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* a4980: add x20, x21, x8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* a4984: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a4988: add x8, x8, #0xb10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2832)));
  /* a498c: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* a4990: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a4994: str x8, [x20, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a4998: ldurh w9, [x20, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* a499c: mov w8, #0x15 */
  ARC_W_W(c, 8, UINT64_C(21));
  /* a49a0: mov w11, #0x13 */
  ARC_W_W(c, 11, UINT64_C(19));
  /* a49a4: str x0, [x20, #0x20] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(32)), ARC_X_R(c, 0));
  /* a49a8: strb w8, [x20, #8] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(8)), ARC_W_R(c, 8));
  /* a49ac: adrp x8, #0x50000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(327680)));
  /* a49b0: add x8, x8, #0xd4e */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3406)));
  /* a49b4: b #0xa4b90 */
  goto L_a4b90;
L_a49b8:;
  /* a49b8: cmp w10, #0x47 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(71));
  /* a49bc: b.gt #0xa4ba4 */
  if (ARC_COND(c, 12)) goto L_a4ba4;
  /* a49c0: cmp w10, #0x41 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(65));
  /* a49c4: b.eq #0xa4c80 */
  if (ARC_COND(c, 0)) goto L_a4c80;
  /* a49c8: cmp w10, #0x43 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(67));
  /* a49cc: b.ne #0xa4c1c */
  if (ARC_COND(c, 1)) goto L_a4c1c;
  /* a49d0: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* a49d4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a49d8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a49dc: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(674272));
  fn1_a52b0(c);
  /* a49e0: str x0, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 0));
  /* a49e4: cbz x0, #0xa5048 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a5048;
  /* a49e8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a49ec: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* a49f0: bl #0xa5170 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(674292));
  fn1_a5170(c);
  /* a49f4: cbz x1, #0xa5048 */
  if ((ARC_X_R(c, 1)) == 0) goto L_a5048;
  /* a49f8: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* a49fc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a4a00: b.eq #0xa5048 */
  if (ARC_COND(c, 0)) goto L_a5048;
  /* a4a04: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* a4a08: cmp w9, #0x5f */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(95));
  /* a4a0c: b.ne #0xa5048 */
  if (ARC_COND(c, 1)) goto L_a5048;
  /* a4a10: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a4a14: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a4a18: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a4a1c: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(674336));
  fn1_a52b0(c);
  /* a4a20: str x0, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 0));
  /* a4a24: cbz x0, #0xa5048 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a5048;
  /* a4a28: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* a4a2c: add x2, sp, #0x30 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(48)));
  /* a4a30: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a4a34: bl #0xa814c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(674360));
  fn1_a814c(c);
  /* a4a38: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a4a3c: b #0xa504c */
  goto L_a504c;
L_a4a40:;
  /* a4a40: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* a4a44: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a4a48: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a4a4c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* a4a50: bl #0xa6c18 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(674388));
  fn1_a6c18(c);
  /* a4a54: str x0, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 0));
  /* a4a58: cbz x0, #0xa5048 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a5048;
  /* a4a5c: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* a4a60: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* a4a64: b.eq #0xa4a88 */
  if (ARC_COND(c, 0)) goto L_a4a88;
  /* a4a68: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* a4a6c: cmp w10, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(48));
  /* a4a70: b.lo #0xa4a88 */
  if (ARC_COND(c, 3)) goto L_a4a88;
  /* a4a74: cmp w10, #0x3a */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(58));
  /* a4a78: b.lo #0xa4abc */
  if (ARC_COND(c, 3)) goto L_a4abc;
  /* a4a7c: sub w10, w10, #0x41 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) - UINT64_C(65)));
  /* a4a80: cmp w10, #0x19 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(25));
  /* a4a84: b.ls #0xa4abc */
  if (ARC_COND(c, 9)) goto L_a4abc;
L_a4a88:;
  /* a4a88: mov w10, #1 */
  ARC_W_W(c, 10, UINT64_C(1));
  /* a4a8c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a4a90: b.eq #0xa4ae8 */
  if (ARC_COND(c, 0)) goto L_a4ae8;
L_a4a94:;
  /* a4a94: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* a4a98: cmp w9, #0x5f */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(95));
  /* a4a9c: b.ne #0xa4ae8 */
  if (ARC_COND(c, 1)) goto L_a4ae8;
  /* a4aa0: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a4aa4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a4aa8: b #0xa4aec */
  goto L_a4aec;
L_a4aac:;
  /* a4aac: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a4ab0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a4ab4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a4ab8: b.eq #0xa4adc */
  if (ARC_COND(c, 0)) goto L_a4adc;
L_a4abc:;
  /* a4abc: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* a4ac0: cmp w10, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(48));
  /* a4ac4: b.lo #0xa4adc */
  if (ARC_COND(c, 3)) goto L_a4adc;
  /* a4ac8: cmp w10, #0x3a */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(58));
  /* a4acc: b.lo #0xa4aac */
  if (ARC_COND(c, 3)) goto L_a4aac;
  /* a4ad0: sub w10, w10, #0x41 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) - UINT64_C(65)));
  /* a4ad4: cmp w10, #0x19 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(25));
  /* a4ad8: b.ls #0xa4aac */
  if (ARC_COND(c, 9)) goto L_a4aac;
L_a4adc:;
  /* a4adc: mov w10, wzr */
  ARC_W_W(c, 10, ARC_W_R(c, 31));
  /* a4ae0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a4ae4: b.ne #0xa4a94 */
  if (ARC_COND(c, 1)) goto L_a4a94;
L_a4ae8:;
  /* a4ae8: cbz w10, #0xa5048 */
  if ((ARC_W_R(c, 10)) == 0) goto L_a5048;
L_a4aec:;
  /* a4aec: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* a4af0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a4af4: bl #0xa8400 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(674552));
  fn1_a8400(c);
  /* a4af8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a4afc: b #0xa504c */
  goto L_a504c;
L_a4b00:;
  /* a4b00: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* a4b04: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* a4b08: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a4b0c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a4b10: str xzr, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 31));
  /* a4b14: bl #0xa84b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(674584));
  fn1_a84b0(c);
  /* a4b18: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* a4b1c: tbnz w0, #0, #0xa504c */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_a504c;
  /* a4b20: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* a4b24: cbz x21, #0xa504c */
  if ((ARC_X_R(c, 21)) == 0) goto L_a504c;
  /* a4b28: ldr x22, [x19, #0x1330] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* a4b2c: ldr x8, [x22, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* a4b30: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* a4b34: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a4b38: b.hi #0xa4b58 */
  if (ARC_COND(c, 8)) goto L_a4b58;
  /* a4b3c: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a4b40: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(674628));
  fn1_1428a8(c);
  /* a4b44: cbz x0, #0xa5124 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a5124;
  /* a4b48: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a4b4c: stp x22, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a4b50: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* a4b54: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_a4b58:;
  /* a4b58: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* a4b5c: add x20, x22, x8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* a4b60: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a4b64: add x8, x8, #0xb10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2832)));
  /* a4b68: str x9, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 9));
  /* a4b6c: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a4b70: str x8, [x20, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a4b74: ldurh w9, [x20, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* a4b78: mov w8, #0x15 */
  ARC_W_W(c, 8, UINT64_C(21));
  /* a4b7c: mov w11, #0x17 */
  ARC_W_W(c, 11, UINT64_C(23));
  /* a4b80: str x21, [x20, #0x20] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(32)), ARC_X_R(c, 21));
  /* a4b84: strb w8, [x20, #8] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(8)), ARC_W_R(c, 8));
  /* a4b88: adrp x8, #0x50000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(327680)));
  /* a4b8c: add x8, x8, #0xc16 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3094)));
L_a4b90:;
  /* a4b90: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* a4b94: stp x8, x11, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 11));
  }
  /* a4b98: orr w8, w9, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* a4b9c: sturh w8, [x20, #9] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(9)), ARC_W_R(c, 8));
  /* a4ba0: b #0xa504c */
  goto L_a504c;
L_a4ba4:;
  /* a4ba4: cmp w10, #0x48 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(72));
  /* a4ba8: b.eq #0xa4cac */
  if (ARC_COND(c, 0)) goto L_a4cac;
  /* a4bac: cmp w10, #0x49 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(73));
  /* a4bb0: b.ne #0xa4c1c */
  if (ARC_COND(c, 1)) goto L_a4c1c;
  /* a4bb4: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* a4bb8: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a4bbc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a4bc0: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(674756));
  fn1_a52b0(c);
  /* a4bc4: str x0, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 0));
  /* a4bc8: cbz x0, #0xa5048 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a5048;
  /* a4bcc: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* a4bd0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a4bd4: bl #0xa7d38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(674776));
  fn1_a7d38(c);
  /* a4bd8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a4bdc: b #0xa504c */
  goto L_a504c;
L_a4be0:;
  /* a4be0: cmp w10, #0x53 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(83));
  /* a4be4: b.eq #0xa4d08 */
  if (ARC_COND(c, 0)) goto L_a4d08;
  /* a4be8: cmp w10, #0x54 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(84));
  /* a4bec: b.ne #0xa4c1c */
  if (ARC_COND(c, 1)) goto L_a4c1c;
  /* a4bf0: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* a4bf4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a4bf8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a4bfc: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(674816));
  fn1_a52b0(c);
  /* a4c00: str x0, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 0));
  /* a4c04: cbz x0, #0xa5048 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a5048;
  /* a4c08: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* a4c0c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a4c10: bl #0xa7c88 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(674836));
  fn1_a7c88(c);
  /* a4c14: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a4c18: b #0xa504c */
  goto L_a504c;
L_a4c1c:;
  /* a4c1c: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a4c20: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* a4c24: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a4c28: b.eq #0xa4c3c */
  if (ARC_COND(c, 0)) goto L_a4c3c;
  /* a4c2c: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* a4c30: cmp w8, #0x76 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(118));
  /* a4c34: cset w20, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? 1 : 0));
  /* a4c38: b #0xa4c40 */
  goto L_a4c40;
L_a4c3c:;
  /* a4c3c: mov w20, wzr */
  ARC_W_W(c, 20, ARC_W_R(c, 31));
L_a4c40:;
  /* a4c40: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a4c44: bl #0xa7e98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(674888));
  fn1_a7e98(c);
  /* a4c48: tbnz w0, #0, #0xa5048 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_a5048;
  /* a4c4c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a4c50: bl #0xa46ec */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(674900));
  fn1_a46ec(c);
  /* a4c54: str x0, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 0));
  /* a4c58: cbz x0, #0xa5048 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a5048;
  /* a4c5c: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* a4c60: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a4c64: cbz w20, #0xa4c74 */
  if ((ARC_W_R(c, 20)) == 0) goto L_a4c74;
  /* a4c68: bl #0xa82a4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(674924));
  fn1_a82a4(c);
  /* a4c6c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a4c70: b #0xa504c */
  goto L_a504c;
L_a4c74:;
  /* a4c74: bl #0xa8354 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(674936));
  fn1_a8354(c);
  /* a4c78: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a4c7c: b #0xa504c */
  goto L_a504c;
L_a4c80:;
  /* a4c80: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* a4c84: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a4c88: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a4c8c: bl #0xa7338 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(674960));
  fn1_a7338(c);
  /* a4c90: str x0, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 0));
  /* a4c94: cbz x0, #0xa5048 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a5048;
  /* a4c98: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* a4c9c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a4ca0: bl #0xa7b28 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(674980));
  fn1_a7b28(c);
  /* a4ca4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a4ca8: b #0xa504c */
  goto L_a504c;
L_a4cac:;
  /* a4cac: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* a4cb0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a4cb4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a4cb8: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* a4cbc: bl #0xa6c18 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(675008));
  fn1_a6c18(c);
  /* a4cc0: str x0, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 0));
  /* a4cc4: cbz x0, #0xa5048 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a5048;
  /* a4cc8: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* a4ccc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a4cd0: bl #0xa81f4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(675028));
  fn1_a81f4(c);
  /* a4cd4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a4cd8: b #0xa504c */
  goto L_a504c;
L_a4cdc:;
  /* a4cdc: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* a4ce0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a4ce4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a4ce8: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(675052));
  fn1_a52b0(c);
  /* a4cec: str x0, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 0));
  /* a4cf0: cbz x0, #0xa5048 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a5048;
  /* a4cf4: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* a4cf8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a4cfc: bl #0xa7bd8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(675072));
  fn1_a7bd8(c);
  /* a4d00: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a4d04: b #0xa504c */
  goto L_a504c;
L_a4d08:;
  /* a4d08: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* a4d0c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a4d10: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a4d14: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(675096));
  fn1_a52b0(c);
  /* a4d18: str x0, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 0));
  /* a4d1c: cbz x0, #0xa5048 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a5048;
  /* a4d20: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* a4d24: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a4d28: bl #0xa7de8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(675116));
  fn1_a7de8(c);
  /* a4d2c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a4d30: b #0xa504c */
  goto L_a504c;
L_a4d34:;
  /* a4d34: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* a4d38: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a4d3c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a4d40: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* a4d44: bl #0xa6c18 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(675144));
  fn1_a6c18(c);
  /* a4d48: str x0, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 0));
  /* a4d4c: cbz x0, #0xa5048 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a5048;
  /* a4d50: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* a4d54: add x1, x1, #0x663 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1635)));
  /* a4d58: add x2, sp, #0x30 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(48)));
  /* a4d5c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a4d60: bl #0xa51fc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(675172));
  fn1_a51fc(c);
  /* a4d64: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a4d68: b #0xa504c */
  goto L_a504c;
L_a4d6c:;
  /* a4d6c: ldp x9, x8, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* a4d70: add x25, x19, #0x28 */
  ARC_X_W(c, 25, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* a4d74: sub x9, x8, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* a4d78: add x8, x11, #0xd */
  ARC_X_W(c, 8, (ARC_X_R(c, 11) + UINT64_C(13)));
  /* a4d7c: asr x21, x9, #3 */
  ARC_X_W(c, 21, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* a4d80: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a4d84: b #0xa4db8 */
  goto L_a4db8;
L_a4d88:;
  /* a4d88: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* a4d8c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(675216));
  fn1_142878(c);
  /* a4d90: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* a4d94: cbz x0, #0xa5128 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a5128;
L_a4d98:;
  /* a4d98: asr x8, x22, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 22)) >> ((UINT64_C(2)) & 63))));
  /* a4d9c: add x24, x0, x22 */
  ARC_X_W(c, 24, (ARC_X_R(c, 0) + ARC_X_R(c, 22)));
  /* a4da0: add x8, x0, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* a4da4: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* a4da8: str x8, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 8));
L_a4dac:;
  /* a4dac: str x0, [x24], #8 */
  { const uint64_t _a = ARC_X_R(c, 24);
    ARC_X_W(c, 24, ARC_X_R(c, 24) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 0));
  }
  /* a4db0: ldp x8, x10, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* a4db4: str x24, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 24));
L_a4db8:;
  /* a4db8: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* a4dbc: b.eq #0xa4dcc */
  if (ARC_COND(c, 0)) goto L_a4dcc;
  /* a4dc0: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* a4dc4: cmp w9, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(69));
  /* a4dc8: b.eq #0xa4e2c */
  if (ARC_COND(c, 0)) goto L_a4e2c;
L_a4dcc:;
  /* a4dcc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a4dd0: bl #0xa7338 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(675284));
  fn1_a7338(c);
  /* a4dd4: cbz x0, #0xa5048 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a5048;
  /* a4dd8: ldp x24, x8, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* a4ddc: cmp x24, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* a4de0: b.ne #0xa4dac */
  if (ARC_COND(c, 1)) goto L_a4dac;
  /* a4de4: ldr x23, [x19, #0x10] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* a4de8: mov x26, x0 */
  ARC_X_W(c, 26, ARC_X_R(c, 0));
  /* a4dec: sub x22, x24, x23 */
  ARC_X_W(c, 22, (ARC_X_R(c, 24) - ARC_X_R(c, 23)));
  /* a4df0: cmp x23, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 25));
  /* a4df4: lsl x1, x22, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 22)) << ((UINT64_C(1)) & 63)));
  /* a4df8: b.ne #0xa4d88 */
  if (ARC_COND(c, 1)) goto L_a4d88;
  /* a4dfc: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* a4e00: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(675332));
  fn1_1428a8(c);
  /* a4e04: cbz x0, #0xa5130 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a5130;
  /* a4e08: cmp x24, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 25));
  /* a4e0c: b.eq #0xa4e24 */
  if (ARC_COND(c, 0)) goto L_a4e24;
  /* a4e10: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* a4e14: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* a4e18: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* a4e1c: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(675360));
  fn1_1449f0(c);
  /* a4e20: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
L_a4e24:;
  /* a4e24: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* a4e28: b #0xa4d98 */
  goto L_a4d98;
L_a4e2c:;
  /* a4e2c: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a4e30: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a4e34: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a4e38: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* a4e3c: bl #0xa77e4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(675392));
  fn1_a77e4(c);
  /* a4e40: stp x0, x1, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* a4e44: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* a4e48: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a4e4c: bl #0xa7744 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(675408));
  fn1_a7744(c);
  /* a4e50: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* a4e54: ldrb w8, [sp, #0x30] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(48))));
  /* a4e58: tbz w8, #0, #0xa48e8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_a48e8;
L_a4e5c:;
  /* a4e5c: mov x26, xzr */
  ARC_X_W(c, 26, ARC_X_R(c, 31));
L_a4e60:;
  /* a4e60: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* a4e64: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* a4e68: b.eq #0xa4e8c */
  if (ARC_COND(c, 0)) goto L_a4e8c;
  /* a4e6c: ldrb w10, [x9] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 9)));
  /* a4e70: cmp w10, #0x76 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(118));
  /* a4e74: b.ne #0xa4e8c */
  if (ARC_COND(c, 1)) goto L_a4e8c;
  /* a4e78: mov x23, xzr */
  ARC_X_W(c, 23, ARC_X_R(c, 31));
  /* a4e7c: mov x24, xzr */
  ARC_X_W(c, 24, ARC_X_R(c, 31));
  /* a4e80: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* a4e84: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* a4e88: b #0xa500c */
  goto L_a500c;
L_a4e8c:;
  /* a4e8c: ldp x9, x8, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* a4e90: add x21, x19, #0x28 */
  ARC_X_W(c, 21, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* a4e94: stp x26, x22, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* a4e98: mov x22, #1 */
  ARC_X_W(c, 22, UINT64_C(1));
  /* a4e9c: mov w23, #1 */
  ARC_W_W(c, 23, UINT64_C(1));
  /* a4ea0: movk x22, #0x80, lsl #16 */
  ARC_X_W(c, 22, ((ARC_X_R(c, 22) & UINT64_C(18446744069414649855)) | UINT64_C(8388608)));
  /* a4ea4: sub x28, x8, x9 */
  ARC_X_W(c, 28, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* a4ea8: movk x22, #8, lsl #32 */
  ARC_X_W(c, 22, ((ARC_X_R(c, 22) & UINT64_C(18446462603027808255)) | UINT64_C(34359738368)));
  /* a4eac: asr x8, x28, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 28)) >> ((UINT64_C(3)) & 63))));
  /* a4eb0: movk x22, #2, lsl #48 */
  ARC_X_W(c, 22, ((ARC_X_R(c, 22) & UINT64_C(281474976710655)) | UINT64_C(562949953421312)));
  /* a4eb4: str x8, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 8));
L_a4eb8:;
  /* a4eb8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a4ebc: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(675520));
  fn1_a52b0(c);
  /* a4ec0: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* a4ec4: cbz x0, #0xa5048 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a5048;
  /* a4ec8: ldp x8, x27, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* a4ecc: sub x8, x27, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 27) - ARC_X_R(c, 8)));
  /* a4ed0: cmp x28, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 28), ARC_X_R(c, 8));
  /* a4ed4: b.ne #0xa4f50 */
  if (ARC_COND(c, 1)) goto L_a4f50;
  /* a4ed8: ldrb w8, [sp, #0x48] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(72))));
  /* a4edc: tbz w8, #0, #0xa4f50 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_a4f50;
  /* a4ee0: ldr x25, [x19, #0x1330] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* a4ee4: ldr x8, [x25, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(8))));
  /* a4ee8: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* a4eec: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a4ef0: b.hi #0xa4f10 */
  if (ARC_COND(c, 8)) goto L_a4f10;
  /* a4ef4: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a4ef8: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(675580));
  fn1_1428a8(c);
  /* a4efc: cbz x0, #0xa5124 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a5124;
  /* a4f00: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a4f04: stp x25, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 25));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a4f08: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* a4f0c: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_a4f10:;
  /* a4f10: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* a4f14: add x8, x25, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 25) + ARC_X_R(c, 8)));
  /* a4f18: mov w10, #0x57 */
  ARC_W_W(c, 10, UINT64_C(87));
  /* a4f1c: str x9, [x25, #8] */
  arc_st64((ARC_X_R(c, 25) + INT64_C(8)), ARC_X_R(c, 9));
  /* a4f20: adrp x9, #0x14b000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1355776)));
  /* a4f24: add x9, x9, #0xef0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3824)));
  /* a4f28: str x9, [x8, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(16));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* a4f2c: ldurh w9, [x8, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 8) + INT64_C(9))));
  /* a4f30: strb w10, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 10));
  /* a4f34: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a4f38: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* a4f3c: str x24, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 24));
  /* a4f40: mov x24, x8 */
  ARC_X_W(c, 24, ARC_X_R(c, 8));
  /* a4f44: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* a4f48: sturh w9, [x8, #9] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(9)), ARC_W_R(c, 9));
  /* a4f4c: ldr x27, [x19, #0x18] */
  ARC_X_W(c, 27, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
L_a4f50:;
  /* a4f50: ldr x8, [x19, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* a4f54: cmp x27, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 27), ARC_X_R(c, 8));
  /* a4f58: b.ne #0xa4fc0 */
  if (ARC_COND(c, 1)) goto L_a4fc0;
  /* a4f5c: ldr x26, [x19, #0x10] */
  ARC_X_W(c, 26, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* a4f60: sub x25, x27, x26 */
  ARC_X_W(c, 25, (ARC_X_R(c, 27) - ARC_X_R(c, 26)));
  /* a4f64: cmp x26, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 21));
  /* a4f68: lsl x1, x25, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 25)) << ((UINT64_C(1)) & 63)));
  /* a4f6c: b.eq #0xa4f84 */
  if (ARC_COND(c, 0)) goto L_a4f84;
  /* a4f70: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* a4f74: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(675704));
  fn1_142878(c);
  /* a4f78: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* a4f7c: cbnz x0, #0xa4fb0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_a4fb0;
  /* a4f80: b #0xa512c */
  goto L_a512c;
L_a4f84:;
  /* a4f84: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* a4f88: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(675724));
  fn1_1428a8(c);
  /* a4f8c: cbz x0, #0xa5134 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a5134;
  /* a4f90: cmp x27, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 27), ARC_X_R(c, 21));
  /* a4f94: b.eq #0xa4fac */
  if (ARC_COND(c, 0)) goto L_a4fac;
  /* a4f98: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* a4f9c: mov x2, x25 */
  ARC_X_W(c, 2, ARC_X_R(c, 25));
  /* a4fa0: mov x27, x0 */
  ARC_X_W(c, 27, ARC_X_R(c, 0));
  /* a4fa4: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(675752));
  fn1_1449f0(c);
  /* a4fa8: mov x0, x27 */
  ARC_X_W(c, 0, ARC_X_R(c, 27));
L_a4fac:;
  /* a4fac: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
L_a4fb0:;
  /* a4fb0: asr x8, x25, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 25)) >> ((UINT64_C(2)) & 63))));
  /* a4fb4: add x27, x0, x25 */
  ARC_X_W(c, 27, (ARC_X_R(c, 0) + ARC_X_R(c, 25)));
  /* a4fb8: add x8, x0, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* a4fbc: str x8, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 8));
L_a4fc0:;
  /* a4fc0: str x24, [x27], #8 */
  { const uint64_t _a = ARC_X_R(c, 27);
    ARC_X_W(c, 27, ARC_X_R(c, 27) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 24));
  }
  /* a4fc4: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* a4fc8: str x27, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 27));
  /* a4fcc: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* a4fd0: b.eq #0xa4ff0 */
  if (ARC_COND(c, 0)) goto L_a4ff0;
  /* a4fd4: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* a4fd8: sub w8, w8, #0x2e */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(46)));
  /* a4fdc: cmp w8, #0x31 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(49));
  /* a4fe0: b.hi #0xa4eb8 */
  if (ARC_COND(c, 8)) goto L_a4eb8;
  /* a4fe4: lsl x8, x23, x8 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 23)) << ((ARC_X_R(c, 8)) & 63)));
  /* a4fe8: tst x8, x22 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 8) & ARC_X_R(c, 22)));
  /* a4fec: b.eq #0xa4eb8 */
  if (ARC_COND(c, 0)) goto L_a4eb8;
L_a4ff0:;
  /* a4ff0: ldr x1, [sp, #0x18] */
  ARC_X_W(c, 1, arc_ld64(((c)->sp + INT64_C(24))));
  /* a4ff4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a4ff8: bl #0xa77e4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(675836));
  fn1_a77e4(c);
  /* a4ffc: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* a5000: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* a5004: ldp x26, x22, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 22, arc_ld64(_pa + 8));
  }
  /* a5008: mov x24, x1 */
  ARC_X_W(c, 24, ARC_X_R(c, 1));
L_a500c:;
  /* a500c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* a5010: b.eq #0xa507c */
  if (ARC_COND(c, 0)) goto L_a507c;
  /* a5014: ldrb w8, [x9] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 9)));
  /* a5018: cmp w8, #0x51 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(81));
  /* a501c: b.ne #0xa507c */
  if (ARC_COND(c, 1)) goto L_a507c;
  /* a5020: ldrb w21, [x19, #0x30a] */
  ARC_W_W(c, 21, arc_ld8((ARC_X_R(c, 19) + INT64_C(778))));
  /* a5024: add x8, x9, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* a5028: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* a502c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a5030: strb w9, [x19, #0x30a] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(778)), ARC_W_R(c, 9));
  /* a5034: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a5038: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(675900));
  fn1_aa69c(c);
  /* a503c: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* a5040: strb w21, [x19, #0x30a] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(778)), ARC_W_R(c, 21));
  /* a5044: cbnz x0, #0xa5080 */
  if ((ARC_X_R(c, 0)) != 0) goto L_a5080;
L_a5048:;
  /* a5048: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
L_a504c:;
  /* a504c: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* a5050: bl #0xa7940 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(675924));
  fn1_a7940(c);
  /* a5054: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a5058: ldp x20, x19, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a505c: ldp x22, x21, [sp, #0x130] */
  { const uint64_t _pa = ((c)->sp + INT64_C(304));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a5060: ldp x24, x23, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* a5064: ldp x26, x25, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* a5068: ldp x28, x27, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* a506c: ldp x29, x30, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a5070: add sp, sp, #0x150 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(336)));
  /* a5074: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a5078: ret  */
  return;
L_a507c:;
  /* a507c: mov x25, xzr */
  ARC_X_W(c, 25, ARC_X_R(c, 31));
L_a5080:;
  /* a5080: ldr x21, [x19, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* a5084: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* a5088: sub x9, x8, #0xfa0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4000)));
  /* a508c: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a5090: b.hi #0xa50b0 */
  if (ARC_COND(c, 8)) goto L_a50b0;
  /* a5094: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a5098: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(675996));
  fn1_1428a8(c);
  /* a509c: cbz x0, #0xa5124 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a5124;
  /* a50a0: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a50a4: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a50a8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a50ac: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_a50b0:;
  /* a50b0: add x9, x8, #0x50 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(80)));
  /* a50b4: adrp x10, #0x14b000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(1355776)));
  /* a50b8: add x10, x10, #0xf68 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(3944)));
  /* a50bc: add x8, x21, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* a50c0: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* a50c4: mov w11, #0x13 */
  ARC_W_W(c, 11, UINT64_C(19));
  /* a50c8: str x10, [x8, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(16));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 10));
  }
  /* a50cc: ldurh w9, [x8, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 8) + INT64_C(9))));
  /* a50d0: ldr w10, [sp, #0x34] */
  ARC_W_W(c, 10, arc_ld32(((c)->sp + INT64_C(52))));
  /* a50d4: ldrb w12, [sp, #0x38] */
  ARC_W_W(c, 12, arc_ld8(((c)->sp + INT64_C(56))));
  /* a50d8: strb w11, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 11));
  /* a50dc: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* a50e0: stp x26, x20, [x8, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* a50e4: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* a50e8: orr w9, w9, #0x100 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(256)));
  /* a50ec: stp x23, x24, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 24));
  }
  /* a50f0: sturh w9, [x8, #9] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(9)), ARC_W_R(c, 9));
  /* a50f4: stp x22, x25, [x8, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* a50f8: str w10, [x8, #0x40] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(64)), ARC_W_R(c, 10));
  /* a50fc: strb w12, [x8, #0x44] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(68)), ARC_W_R(c, 12));
  /* a5100: b #0xa504c */
  goto L_a504c;
L_a5104:;
  /* a5104: adrp x0, #0x4f000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(323584)));
  /* a5108: add x0, x0, #0x8a6 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2214)));
  /* a510c: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* a5110: add x1, x1, #0x10b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(267)));
  /* a5114: adrp x3, #0x51000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(331776)));
  /* a5118: add x3, x3, #0x145 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(325)));
  /* a511c: mov w2, #0x86 */
  ARC_W_W(c, 2, UINT64_C(134));
  /* a5120: bl #0xa23d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(676132));
  fn1_a23d8(c);
L_a5124:;
  /* a5124: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(676136));
  fn1_142488(c);
L_a5128:;
  /* a5128: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(676140));
  fn1_1427b8(c);
L_a512c:;
  /* a512c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(676144));
  fn1_1427b8(c);
L_a5130:;
  /* a5130: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(676148));
  fn1_1427b8(c);
L_a5134:;
  /* a5134: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(676152));
  fn1_1427b8(c);
  /* a5138: b #0xa515c */
  goto L_a515c;
  /* a513c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a5140: strb w21, [x19, #0x30a] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(778)), ARC_W_R(c, 21));
  /* a5144: b #0xa5160 */
  goto L_a5160;
  /* a5148: b #0xa515c */
  goto L_a515c;
  /* a514c: b #0xa515c */
  goto L_a515c;
  /* a5150: b #0xa515c */
  goto L_a515c;
  /* a5154: b #0xa515c */
  goto L_a515c;
  /* a5158: b #0xa515c */
  goto L_a515c;
L_a515c:;
  /* a515c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_a5160:;
  /* a5160: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* a5164: bl #0xa7940 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(676200));
  fn1_a7940(c);
  /* a5168: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a516c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(676208));
  fn1_9cc20(c);
}

void fn1_abc84(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038631556));
  /* abc84: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* abc88: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* abc8c: stp x26, x25, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* abc90: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* abc94: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* abc98: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* abc9c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* abca0: ldr x26, [x0, #0x1330] */
  ARC_X_W(c, 26, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* abca4: mov x22, x6 */
  ARC_X_W(c, 22, ARC_X_R(c, 6));
  /* abca8: mov x20, x5 */
  ARC_X_W(c, 20, ARC_X_R(c, 5));
  /* abcac: mov x21, x4 */
  ARC_X_W(c, 21, ARC_X_R(c, 4));
  /* abcb0: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* abcb4: mov x24, x2 */
  ARC_X_W(c, 24, ARC_X_R(c, 2));
  /* abcb8: ldr x8, [x26, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(8))));
  /* abcbc: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* abcc0: sub x9, x8, #0xfb0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4016)));
  /* abcc4: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* abcc8: b.hi #0xabcec */
  if (ARC_COND(c, 8)) goto L_abcec;
  /* abccc: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* abcd0: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* abcd4: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(703704));
  fn1_1428a8(c);
  /* abcd8: cbz x0, #0xabd6c */
  if ((ARC_X_R(c, 0)) == 0) goto L_abd6c;
  /* abcdc: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* abce0: stp x26, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* abce4: mov x26, x0 */
  ARC_X_W(c, 26, ARC_X_R(c, 0));
  /* abce8: str x0, [x25, #0x1330] */
  arc_st64((ARC_X_R(c, 25) + INT64_C(4912)), ARC_X_R(c, 0));
L_abcec:;
  /* abcec: add x9, x8, #0x40 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* abcf0: add x0, x26, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 26) + ARC_X_R(c, 8)));
  /* abcf4: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* abcf8: str x9, [x26, #8] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(8)), ARC_X_R(c, 9));
  /* abcfc: adrp x9, #0x14a000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1351680)));
  /* abd00: add x9, x9, #0x3c0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(960)));
  /* abd04: str x9, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* abd08: mov w9, #0x40 */
  ARC_W_W(c, 9, UINT64_C(64));
  /* abd0c: ldrh w10, [x22] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 22)));
  /* abd10: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* abd14: ldurh w9, [x0, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* abd18: ldr q0, [x23] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 23)), arc_ld64(ARC_X_R(c, 23) + 8));
  /* abd1c: str x8, [x0, #0x20] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(32)), ARC_X_R(c, 8));
  /* abd20: ldrb w11, [x21] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 21)));
  /* abd24: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* abd28: ldrb w12, [x20] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 20)));
  /* abd2c: ldr q1, [x19] */
  arc_q_w(c, 1, arc_ld64(ARC_X_R(c, 19)), arc_ld64(ARC_X_R(c, 19) + 8));
  /* abd30: bfxil w9, w10, #0, #6 */
  ARC_W_W(c, 9, (((uint32_t)(ARC_W_R(c, 9)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 10))) >> 0) & UINT64_C(63))));
  /* abd34: mov w8, #0x540 */
  ARC_W_W(c, 8, UINT64_C(1344));
  /* abd38: str q0, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* abd3c: strb w11, [x0, #0x38] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(56)), ARC_W_R(c, 11));
  /* abd40: orr w8, w9, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) | ARC_W_R(c, 8)));
  /* abd44: stur q1, [x0, #0x28] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(40)), (c)->q[1].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(40)) + 8, (c)->q[1].u64[1]);
  /* abd48: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* abd4c: strb w12, [x0, #0x39] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(57)), ARC_W_R(c, 12));
  /* abd50: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* abd54: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* abd58: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* abd5c: ldp x26, x25, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* abd60: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* abd64: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* abd68: ret  */
  return;
L_abd6c:;
  /* abd6c: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(703856));
  fn1_142488(c);
}

void fn1_b22e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038657760));
  /* b22e0: bti c */
  /* bti: no architectural effect here */
  /* b22e4: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* b22e8: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b62f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038674160));
  /* b62f0: bti c */
  /* bti: no architectural effect here */
  /* b62f4: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* b62f8: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b8678(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038683256));
  /* b8678: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b867c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b8680: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b8684: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b8688: ldp x9, x10, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b868c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b8690: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* b8694: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b8698: add x11, x9, #5 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(5)));
  /* b869c: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* b86a0: b.ls #0xb86d0 */
  if (ARC_COND(c, 9)) goto L_b86d0;
  /* b86a4: lsl x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b86a8: add x9, x9, #0x3e5 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(997)));
  /* b86ac: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* b86b0: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b86b4: csel x1, x10, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* b86b8: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b86bc: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(755392));
  fn1_142878(c);
  /* b86c0: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b86c4: cbz x0, #0xb874c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b874c;
  /* b86c8: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b86cc: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
L_b86d0:;
  /* b86d0: mov w10, #0x6874 */
  ARC_W_W(c, 10, UINT64_C(26740));
  /* b86d4: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* b86d8: mov w9, #0x20 */
  ARC_W_W(c, 9, UINT64_C(32));
  /* b86dc: movk w10, #0x7369, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1936261120)));
  /* b86e0: strb w9, [x8, #4] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(4)), ARC_W_R(c, 9));
  /* b86e4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b86e8: str w10, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* b86ec: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b86f0: ldr x20, [x20, #0x10] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* b86f4: add x8, x8, #5 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(5)));
  /* b86f8: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* b86fc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b8700: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b8704: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* b8708: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(755468));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b870c: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b8710: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b8714: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b8718: b.ne #0xb872c */
  if (ARC_COND(c, 1)) goto L_b872c;
  /* b871c: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b8720: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b8724: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b8728: ret  */
  return;
L_b872c:;
  /* b872c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b8730: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b8734: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b8738: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b873c: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b8740: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b8744: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b8748: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_b874c:;
  /* b874c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(755536));
  fn1_1427b8(c);
}

void fn1_bbf38(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038697784));
  /* bbf38: bti c */
  /* bti: no architectural effect here */
  /* bbf3c: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* bbf40: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_becd4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038709460));
  /* becd4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* becd8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* becdc: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bece0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bece4: mov w20, w0 */
  ARC_W_W(c, 20, ARC_W_R(c, 0));
  /* bece8: nop  */
  /* nop: no architectural effect here */
  /* becec: adr x0, #0x156bb8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1403832)));
  /* becf0: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* becf4: bl #0x144ac8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(781560));
  fn1_144ac8(c);
  /* becf8: mov x10, #0x2b2b */
  ARC_X_W(c, 10, UINT64_C(11051));
  /* becfc: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* bed00: movk x10, #0x4743, lsl #16 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1195573248)));
  /* bed04: ldr x9, [x8], #0xffffffffffffffa0 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-96));
    ARC_X_W(c, 9, arc_ld64(_a));
  }
  /* bed08: movk x10, #0x4c4e, lsl #32 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446462603027808255)) | UINT64_C(83897891160064)));
  /* bed0c: movk x10, #0x43, lsl #48 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(281474976710655)) | UINT64_C(18858823439613952)));
  /* bed10: cmp x10, x9, lsr #8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ((uint64_t)(ARC_X_R(c, 9)) >> 8));
  /* bed14: b.ne #0xbed54 */
  if (ARC_COND(c, 1)) goto L_bed54;
  /* bed18: ldur w10, [x19, #-0x28] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 19) + INT64_C(-40))));
  /* bed1c: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* bed20: cmp w10, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(0));
  /* bed24: cneg w10, w10, mi */
  ARC_W_W(c, 10, (ARC_COND(c, 4) ? ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 10))) : (ARC_W_R(c, 10))));
  /* bed28: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* bed2c: add w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(1)));
  /* bed30: stur w10, [x19, #-0x28] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(-40)), ARC_W_R(c, 10));
  /* bed34: b.eq #0xbed40 */
  if (ARC_COND(c, 0)) goto L_bed40;
  /* bed38: stur x9, [x19, #-0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(-48)), ARC_X_R(c, 9));
  /* bed3c: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
L_bed40:;
  /* bed40: ldr w8, [x0, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(8))));
  /* bed44: sub w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* bed48: str w8, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 8));
  /* bed4c: tbnz w20, #0, #0xbed64 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) != 0) goto L_bed64;
  /* bed50: b #0xbed6c */
  goto L_bed6c;
L_bed54:;
  /* bed54: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* bed58: cbnz x9, #0xbed6c */
  if ((ARC_X_R(c, 9)) != 0) goto L_bed6c;
  /* bed5c: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* bed60: tbz w20, #0, #0xbed6c */
  if (((ARC_W_R(c, 20)) >> 0 & 1) == 0) goto L_bed6c;
L_bed64:;
  /* bed64: ldur x0, [x19, #-0x38] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(-56))));
  /* bed68: bl #0xa1518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(781676));
  fn1_a1518(c);
L_bed6c:;
  /* bed6c: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(781680));
  fn1_142488(c);
}

void fn1_d4eb8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038800056));
  /* d4eb8: bti c */
  /* bti: no architectural effect here */
  /* d4ebc: mov w8, #0x4240 */
  ARC_W_W(c, 8, UINT64_C(16960));
  /* d4ec0: movk w8, #0xf, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(983040)));
  /* d4ec4: cmp w1, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 1), ARC_W_R(c, 8));
  /* d4ec8: b.hs #0xd4efc */
  if (ARC_COND(c, 2)) goto L_d4efc;
  /* d4ecc: lsr w8, w1, #4 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 1)) >> ((UINT64_C(4)) & 31)));
  /* d4ed0: cmp w8, #0x270 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(624));
  /* d4ed4: b.hi #0xd4f98 */
  if (ARC_COND(c, 8)) goto L_d4f98;
  /* d4ed8: cmp w1, #0x63 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(99));
  /* d4edc: b.hi #0xd50a8 */
  if (ARC_COND(c, 8)) goto L_d50a8;
  /* d4ee0: cmp w1, #9 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(9));
  /* d4ee4: b.hi #0xd522c */
  if (ARC_COND(c, 8)) goto L_d522c;
  /* d4ee8: orr w8, w1, #0x30 */
  ARC_W_W(c, 8, (ARC_W_R(c, 1) | UINT64_C(48)));
  /* d4eec: strb w8, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* d4ef0: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* d4ef4: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* d4ef8: ret  */
  return;
L_d4efc:;
  /* d4efc: mov w10, #0xe100 */
  ARC_W_W(c, 10, UINT64_C(57600));
  /* d4f00: movk w10, #0x5f5, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(99942400)));
  /* d4f04: cmp w1, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 1), ARC_W_R(c, 10));
  /* d4f08: b.hs #0xd5000 */
  if (ARC_COND(c, 2)) goto L_d5000;
  /* d4f0c: mov w9, #0xde83 */
  ARC_W_W(c, 9, UINT64_C(56963));
  /* d4f10: mov w10, #0x967f */
  ARC_W_W(c, 10, UINT64_C(38527));
  /* d4f14: movk w9, #0x431b, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1125842944)));
  /* d4f18: movk w10, #0x98, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(9961472)));
  /* d4f1c: umull x9, w1, w9 */
  ARC_X_W(c, 9, (((uint64_t)(uint32_t)(ARC_W_R(c, 1))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 9)))));
  /* d4f20: cmp w1, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 1), ARC_W_R(c, 10));
  /* d4f24: lsr x9, x9, #0x32 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(50)) & 63)));
  /* d4f28: msub w8, w9, w8, w1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 1)) - ((uint32_t)(ARC_W_R(c, 9)) * (uint32_t)(ARC_W_R(c, 8)))));
  /* d4f2c: b.hi #0xd50f0 */
  if (ARC_COND(c, 8)) goto L_d50f0;
  /* d4f30: mov w10, #0x8db9 */
  ARC_W_W(c, 10, UINT64_C(36281));
  /* d4f34: mov w11, #0x2710 */
  ARC_W_W(c, 11, UINT64_C(10000));
  /* d4f38: mov w12, #0x147b */
  ARC_W_W(c, 12, UINT64_C(5243));
  /* d4f3c: movk w10, #6, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(393216)));
  /* d4f40: add w9, w9, #0x30 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(48)));
  /* d4f44: umull x10, w8, w10 */
  ARC_X_W(c, 10, (((uint64_t)(uint32_t)(ARC_W_R(c, 8))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 10)))));
  /* d4f48: strb w9, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* d4f4c: nop  */
  /* nop: no architectural effect here */
  /* d4f50: adr x9, #0x58470 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(361584)));
  /* d4f54: lsr x10, x10, #0x20 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(32)) & 63)));
  /* d4f58: msub w8, w10, w11, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) - ((uint32_t)(ARC_W_R(c, 10)) * (uint32_t)(ARC_W_R(c, 11)))));
  /* d4f5c: ldrh w10, [x9, x10, lsl #1] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 10)) << 1))));
  /* d4f60: sturh w10, [x0, #1] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 10));
  /* d4f64: ubfx w11, w8, #2, #0xe */
  ARC_W_W(c, 11, (((uint32_t)(ARC_W_R(c, 8)) >> 2) & UINT64_C(16383)));
  /* d4f68: mul w11, w11, w12 */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 11)) * (uint32_t)(ARC_W_R(c, 12))));
  /* d4f6c: mov w12, #0x64 */
  ARC_W_W(c, 12, UINT64_C(100));
  /* d4f70: lsr w11, w11, #0x11 */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 11)) >> ((UINT64_C(17)) & 31)));
  /* d4f74: msub w8, w11, w12, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) - ((uint32_t)(ARC_W_R(c, 11)) * (uint32_t)(ARC_W_R(c, 12)))));
  /* d4f78: ldrh w10, [x9, w11, uxtw #1] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 9) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 11)))) << 1))));
  /* d4f7c: sturh w10, [x0, #3] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 10));
  /* d4f80: and x8, x8, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(65535)));
  /* d4f84: ldrh w8, [x9, x8, lsl #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 1))));
  /* d4f88: sturh w8, [x0, #5] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(5)), ARC_W_R(c, 8));
  /* d4f8c: mov w8, #7 */
  ARC_W_W(c, 8, UINT64_C(7));
  /* d4f90: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* d4f94: ret  */
  return;
L_d4f98:;
  /* d4f98: mov w8, #0x1759 */
  ARC_W_W(c, 8, UINT64_C(5977));
  /* d4f9c: lsr w9, w1, #5 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 1)) >> ((UINT64_C(5)) & 31)));
  /* d4fa0: movk w8, #0xd1b7, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(3518431232)));
  /* d4fa4: umull x8, w1, w8 */
  ARC_X_W(c, 8, (((uint64_t)(uint32_t)(ARC_W_R(c, 1))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 8)))));
  /* d4fa8: cmp w9, #0xc34 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(3124));
  /* d4fac: lsr x8, x8, #0x2d */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(45)) & 63)));
  /* d4fb0: b.hi #0xd5158 */
  if (ARC_COND(c, 8)) goto L_d5158;
  /* d4fb4: mov w9, #0x2710 */
  ARC_W_W(c, 9, UINT64_C(10000));
  /* d4fb8: mov w10, #0x147b */
  ARC_W_W(c, 10, UINT64_C(5243));
  /* d4fbc: mov w11, #0x64 */
  ARC_W_W(c, 11, UINT64_C(100));
  /* d4fc0: msub w9, w8, w9, w1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 1)) - ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 9)))));
  /* d4fc4: orr w8, w8, #0x30 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(48)));
  /* d4fc8: strb w8, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* d4fcc: mul w10, w9, w10 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 9)) * (uint32_t)(ARC_W_R(c, 10))));
  /* d4fd0: lsr w10, w10, #0x13 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 10)) >> ((UINT64_C(19)) & 31)));
  /* d4fd4: msub w8, w10, w11, w9 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 9)) - ((uint32_t)(ARC_W_R(c, 10)) * (uint32_t)(ARC_W_R(c, 11)))));
  /* d4fd8: nop  */
  /* nop: no architectural effect here */
  /* d4fdc: adr x9, #0x58470 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(361584)));
  /* d4fe0: ldrh w10, [x9, w10, uxtw #1] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 9) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 10)))) << 1))));
  /* d4fe4: sturh w10, [x0, #1] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 10));
  /* d4fe8: and x8, x8, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(65535)));
  /* d4fec: ldrh w8, [x9, x8, lsl #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 1))));
  /* d4ff0: sturh w8, [x0, #3] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 8));
  /* d4ff4: mov w8, #5 */
  ARC_W_W(c, 8, UINT64_C(5));
  /* d4ff8: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* d4ffc: ret  */
  return;
L_d5000:;
  /* d5000: mov w9, #0x3b89 */
  ARC_W_W(c, 9, UINT64_C(15241));
  /* d5004: mov w11, #0xc9ff */
  ARC_W_W(c, 11, UINT64_C(51711));
  /* d5008: movk w9, #0x55e6, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1441136640)));
  /* d500c: movk w11, #0x3b9a, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(999948288)));
  /* d5010: umull x9, w1, w9 */
  ARC_X_W(c, 9, (((uint64_t)(uint32_t)(ARC_W_R(c, 1))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 9)))));
  /* d5014: cmp w1, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 1), ARC_W_R(c, 11));
  /* d5018: lsr x9, x9, #0x39 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(57)) & 63)));
  /* d501c: msub w10, w9, w10, w1 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 1)) - ((uint32_t)(ARC_W_R(c, 9)) * (uint32_t)(ARC_W_R(c, 10)))));
  /* d5020: b.hi #0xd51a8 */
  if (ARC_COND(c, 8)) goto L_d51a8;
  /* d5024: mov w11, #0x7bd1 */
  ARC_W_W(c, 11, UINT64_C(31697));
  /* d5028: mov w12, #0x2710 */
  ARC_W_W(c, 12, UINT64_C(10000));
  /* d502c: orr w9, w9, #0x30 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(48)));
  /* d5030: movk w11, #0x863, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(140705792)));
  /* d5034: mov w13, #0x147b */
  ARC_W_W(c, 13, UINT64_C(5243));
  /* d5038: strb w9, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* d503c: umull x11, w10, w11 */
  ARC_X_W(c, 11, (((uint64_t)(uint32_t)(ARC_W_R(c, 10))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 11)))));
  /* d5040: lsr x11, x11, #0x2f */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(47)) & 63)));
  /* d5044: msub w8, w11, w8, w10 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 10)) - ((uint32_t)(ARC_W_R(c, 11)) * (uint32_t)(ARC_W_R(c, 8)))));
  /* d5048: mov w10, #0x1759 */
  ARC_W_W(c, 10, UINT64_C(5977));
  /* d504c: movk w10, #0xd1b7, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(3518431232)));
  /* d5050: umull x10, w8, w10 */
  ARC_X_W(c, 10, (((uint64_t)(uint32_t)(ARC_W_R(c, 8))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 10)))));
  /* d5054: lsr x10, x10, #0x2d */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(45)) & 63)));
  /* d5058: msub w8, w10, w12, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) - ((uint32_t)(ARC_W_R(c, 10)) * (uint32_t)(ARC_W_R(c, 12)))));
  /* d505c: ubfx w12, w8, #2, #0xe */
  ARC_W_W(c, 12, (((uint32_t)(ARC_W_R(c, 8)) >> 2) & UINT64_C(16383)));
  /* d5060: mul w9, w12, w13 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 12)) * (uint32_t)(ARC_W_R(c, 13))));
  /* d5064: nop  */
  /* nop: no architectural effect here */
  /* d5068: adr x12, #0x58470 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(361584)));
  /* d506c: ldrh w11, [x12, x11, lsl #1] */
  ARC_W_W(c, 11, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 11)) << 1))));
  /* d5070: sturh w11, [x0, #1] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 11));
  /* d5074: lsr w9, w9, #0x11 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(17)) & 31)));
  /* d5078: mov w11, #0x64 */
  ARC_W_W(c, 11, UINT64_C(100));
  /* d507c: ldrh w10, [x12, x10, lsl #1] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 10)) << 1))));
  /* d5080: msub w8, w9, w11, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) - ((uint32_t)(ARC_W_R(c, 9)) * (uint32_t)(ARC_W_R(c, 11)))));
  /* d5084: sturh w10, [x0, #3] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 10));
  /* d5088: ldrh w9, [x12, w9, uxtw #1] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 9)))) << 1))));
  /* d508c: and x8, x8, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(65535)));
  /* d5090: sturh w9, [x0, #5] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(5)), ARC_W_R(c, 9));
  /* d5094: ldrh w8, [x12, x8, lsl #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 8)) << 1))));
  /* d5098: sturh w8, [x0, #7] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(7)), ARC_W_R(c, 8));
  /* d509c: mov w8, #9 */
  ARC_W_W(c, 8, UINT64_C(9));
  /* d50a0: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* d50a4: ret  */
  return;
L_d50a8:;
  /* d50a8: ubfx w8, w1, #2, #0xe */
  ARC_W_W(c, 8, (((uint32_t)(ARC_W_R(c, 1)) >> 2) & UINT64_C(16383)));
  /* d50ac: mov w9, #0x147b */
  ARC_W_W(c, 9, UINT64_C(5243));
  /* d50b0: cmp w1, #0x3e7 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(999));
  /* d50b4: mul w8, w8, w9 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 9))));
  /* d50b8: mov w9, #0x64 */
  ARC_W_W(c, 9, UINT64_C(100));
  /* d50bc: lsr w8, w8, #0x11 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(17)) & 31)));
  /* d50c0: msub w9, w8, w9, w1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 1)) - ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 9)))));
  /* d50c4: b.hi #0xd5248 */
  if (ARC_COND(c, 8)) goto L_d5248;
  /* d50c8: orr w8, w8, #0x30 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(48)));
  /* d50cc: strb w8, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* d50d0: and x8, x9, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) & UINT64_C(65535)));
  /* d50d4: nop  */
  /* nop: no architectural effect here */
  /* d50d8: adr x9, #0x58470 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(361584)));
  /* d50dc: ldrh w8, [x9, x8, lsl #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 1))));
  /* d50e0: sturh w8, [x0, #1] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 8));
  /* d50e4: mov w8, #3 */
  ARC_W_W(c, 8, UINT64_C(3));
  /* d50e8: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* d50ec: ret  */
  return;
L_d50f0:;
  /* d50f0: mov w10, #0x1759 */
  ARC_W_W(c, 10, UINT64_C(5977));
  /* d50f4: mov w11, #0x2710 */
  ARC_W_W(c, 11, UINT64_C(10000));
  /* d50f8: mov w12, #0x147b */
  ARC_W_W(c, 12, UINT64_C(5243));
  /* d50fc: movk w10, #0xd1b7, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(3518431232)));
  /* d5100: umull x10, w8, w10 */
  ARC_X_W(c, 10, (((uint64_t)(uint32_t)(ARC_W_R(c, 8))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 10)))));
  /* d5104: lsr x10, x10, #0x2d */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(45)) & 63)));
  /* d5108: msub w8, w10, w11, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) - ((uint32_t)(ARC_W_R(c, 10)) * (uint32_t)(ARC_W_R(c, 11)))));
  /* d510c: ubfx w11, w8, #2, #0xe */
  ARC_W_W(c, 11, (((uint32_t)(ARC_W_R(c, 8)) >> 2) & UINT64_C(16383)));
  /* d5110: mul w11, w11, w12 */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 11)) * (uint32_t)(ARC_W_R(c, 12))));
  /* d5114: nop  */
  /* nop: no architectural effect here */
  /* d5118: adr x12, #0x58470 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(361584)));
  /* d511c: ldrh w9, [x12, w9, uxtw #1] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 9)))) << 1))));
  /* d5120: strh w9, [x0] */
  arc_st16(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* d5124: ldrh w9, [x12, x10, lsl #1] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 10)) << 1))));
  /* d5128: lsr w10, w11, #0x11 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 11)) >> ((UINT64_C(17)) & 31)));
  /* d512c: mov w11, #0x64 */
  ARC_W_W(c, 11, UINT64_C(100));
  /* d5130: strh w9, [x0, #2] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 9));
  /* d5134: msub w8, w10, w11, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) - ((uint32_t)(ARC_W_R(c, 10)) * (uint32_t)(ARC_W_R(c, 11)))));
  /* d5138: ldrh w9, [x12, w10, uxtw #1] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 10)))) << 1))));
  /* d513c: strh w9, [x0, #4] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(4)), ARC_W_R(c, 9));
  /* d5140: and x8, x8, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(65535)));
  /* d5144: ldrh w8, [x12, x8, lsl #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 8)) << 1))));
  /* d5148: strh w8, [x0, #6] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(6)), ARC_W_R(c, 8));
  /* d514c: mov w8, #8 */
  ARC_W_W(c, 8, UINT64_C(8));
  /* d5150: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* d5154: ret  */
  return;
L_d5158:;
  /* d5158: mov w9, #0x2710 */
  ARC_W_W(c, 9, UINT64_C(10000));
  /* d515c: mov w11, #0x147b */
  ARC_W_W(c, 11, UINT64_C(5243));
  /* d5160: mov w12, #0x64 */
  ARC_W_W(c, 12, UINT64_C(100));
  /* d5164: msub w9, w8, w9, w1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 1)) - ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 9)))));
  /* d5168: ubfx w10, w9, #2, #0xe */
  ARC_W_W(c, 10, (((uint32_t)(ARC_W_R(c, 9)) >> 2) & UINT64_C(16383)));
  /* d516c: mul w10, w10, w11 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 10)) * (uint32_t)(ARC_W_R(c, 11))));
  /* d5170: nop  */
  /* nop: no architectural effect here */
  /* d5174: adr x11, #0x58470 */
  ARC_X_W(c, 11, (arc_image_bases[1] + UINT64_C(361584)));
  /* d5178: ldrh w8, [x11, w8, uxtw #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 11) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 1))));
  /* d517c: lsr w10, w10, #0x11 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 10)) >> ((UINT64_C(17)) & 31)));
  /* d5180: strh w8, [x0] */
  arc_st16(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* d5184: msub w8, w10, w12, w9 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 9)) - ((uint32_t)(ARC_W_R(c, 10)) * (uint32_t)(ARC_W_R(c, 12)))));
  /* d5188: ldrh w9, [x11, w10, uxtw #1] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 11) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 10)))) << 1))));
  /* d518c: strh w9, [x0, #2] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 9));
  /* d5190: and x8, x8, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(65535)));
  /* d5194: ldrh w8, [x11, x8, lsl #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 8)) << 1))));
  /* d5198: strh w8, [x0, #4] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(4)), ARC_W_R(c, 8));
  /* d519c: mov w8, #6 */
  ARC_W_W(c, 8, UINT64_C(6));
  /* d51a0: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* d51a4: ret  */
  return;
L_d51a8:;
  /* d51a8: mov w11, #0xde83 */
  ARC_W_W(c, 11, UINT64_C(56963));
  /* d51ac: mov w12, #0x2710 */
  ARC_W_W(c, 12, UINT64_C(10000));
  /* d51b0: movk w11, #0x431b, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(1125842944)));
  /* d51b4: umull x11, w10, w11 */
  ARC_X_W(c, 11, (((uint64_t)(uint32_t)(ARC_W_R(c, 10))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 11)))));
  /* d51b8: lsr x11, x11, #0x32 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(50)) & 63)));
  /* d51bc: msub w8, w11, w8, w10 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 10)) - ((uint32_t)(ARC_W_R(c, 11)) * (uint32_t)(ARC_W_R(c, 8)))));
  /* d51c0: mov w10, #0x1759 */
  ARC_W_W(c, 10, UINT64_C(5977));
  /* d51c4: movk w10, #0xd1b7, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(3518431232)));
  /* d51c8: umull x10, w8, w10 */
  ARC_X_W(c, 10, (((uint64_t)(uint32_t)(ARC_W_R(c, 8))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 10)))));
  /* d51cc: lsr x10, x10, #0x2d */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(45)) & 63)));
  /* d51d0: msub w8, w10, w12, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) - ((uint32_t)(ARC_W_R(c, 10)) * (uint32_t)(ARC_W_R(c, 12)))));
  /* d51d4: nop  */
  /* nop: no architectural effect here */
  /* d51d8: adr x12, #0x58470 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(361584)));
  /* d51dc: ldrh w9, [x12, w9, uxtw #1] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 9)))) << 1))));
  /* d51e0: ubfx w13, w8, #2, #0xe */
  ARC_W_W(c, 13, (((uint32_t)(ARC_W_R(c, 8)) >> 2) & UINT64_C(16383)));
  /* d51e4: strh w9, [x0] */
  arc_st16(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* d51e8: mov w9, #0x147b */
  ARC_W_W(c, 9, UINT64_C(5243));
  /* d51ec: ldrh w11, [x12, x11, lsl #1] */
  ARC_W_W(c, 11, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 11)) << 1))));
  /* d51f0: mul w9, w13, w9 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 13)) * (uint32_t)(ARC_W_R(c, 9))));
  /* d51f4: strh w11, [x0, #2] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 11));
  /* d51f8: mov w11, #0x64 */
  ARC_W_W(c, 11, UINT64_C(100));
  /* d51fc: ldrh w10, [x12, x10, lsl #1] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 10)) << 1))));
  /* d5200: lsr w9, w9, #0x11 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(17)) & 31)));
  /* d5204: strh w10, [x0, #4] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(4)), ARC_W_R(c, 10));
  /* d5208: msub w8, w9, w11, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) - ((uint32_t)(ARC_W_R(c, 9)) * (uint32_t)(ARC_W_R(c, 11)))));
  /* d520c: ldrh w9, [x12, w9, uxtw #1] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 9)))) << 1))));
  /* d5210: strh w9, [x0, #6] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(6)), ARC_W_R(c, 9));
  /* d5214: and x8, x8, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(65535)));
  /* d5218: ldrh w8, [x12, x8, lsl #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 8)) << 1))));
  /* d521c: strh w8, [x0, #8] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 8));
  /* d5220: mov w8, #0xa */
  ARC_W_W(c, 8, UINT64_C(10));
  /* d5224: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* d5228: ret  */
  return;
L_d522c:;
  /* d522c: nop  */
  /* nop: no architectural effect here */
  /* d5230: adr x8, #0x58470 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(361584)));
  /* d5234: ldrh w8, [x8, w1, uxtw #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 8) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 1)))) << 1))));
  /* d5238: strh w8, [x0] */
  arc_st16(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* d523c: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
  /* d5240: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* d5244: ret  */
  return;
L_d5248:;
  /* d5248: nop  */
  /* nop: no architectural effect here */
  /* d524c: adr x10, #0x58470 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(361584)));
  /* d5250: ldrh w8, [x10, w8, uxtw #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 10) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 1))));
  /* d5254: strh w8, [x0] */
  arc_st16(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* d5258: and x8, x9, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) & UINT64_C(65535)));
  /* d525c: ldrh w8, [x10, x8, lsl #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 8)) << 1))));
  /* d5260: strh w8, [x0, #2] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 8));
  /* d5264: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* d5268: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* d526c: ret  */
  return;
}

void fn1_d8990(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038815120));
  /* d8990: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d8994: sub sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(144)));
  /* d8998: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d899c: stp x28, x27, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* d89a0: stp x26, x25, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* d89a4: stp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* d89a8: stp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* d89ac: stp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d89b0: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* d89b4: ldrb w22, [x0] */
  ARC_W_W(c, 22, arc_ld8(ARC_X_R(c, 0)));
  /* d89b8: ldr x2, [x0, #8] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* d89bc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* d89c0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* d89c4: lsr x9, x22, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 22)) >> ((UINT64_C(1)) & 63)));
  /* d89c8: tst w22, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 22) & UINT64_C(1)));
  /* d89cc: csel x19, x9, x2, eq */
  ARC_X_W(c, 19, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 2)));
  /* d89d0: cbz x19, #0xd8cd8 */
  if ((ARC_X_R(c, 19)) == 0) goto L_d8cd8;
  /* d89d4: str x0, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 0));
  /* d89d8: mov x20, #-0x5555555555555556 */
  ARC_X_W(c, 20, UINT64_C(12297829382473034410));
  /* d89dc: mov w0, #0x300 */
  ARC_W_W(c, 0, UINT64_C(768));
  /* d89e0: movk x20, #0xaaa, lsl #48 */
  ARC_X_W(c, 20, ((ARC_X_R(c, 20) & UINT64_C(281474976710655)) | UINT64_C(768426686420090880)));
  /* d89e4: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(887272));
  fn1_1428f0(c);
  /* d89e8: ldr x8, [x21, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* d89ec: tst w22, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 22) & UINT64_C(1)));
  /* d89f0: mov x26, x0 */
  ARC_X_W(c, 26, ARC_X_R(c, 0));
  /* d89f4: add x23, x0, #0x300 */
  ARC_X_W(c, 23, (ARC_X_R(c, 0) + UINT64_C(768)));
  /* d89f8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d89fc: stp xzr, xzr, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* d8a00: csinc x8, x8, x21, ne */
  ARC_X_W(c, 8, (ARC_COND(c, 1) ? (ARC_X_R(c, 8)) : ((ARC_X_R(c, 21)) + 1)));
  /* d8a04: stp x8, x19, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d8a08: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* d8a0c: strb w8, [sp, #0x28] */
  arc_st8(((c)->sp + INT64_C(40)), ARC_W_R(c, 8));
  /* d8a10: bl #0xda18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(887316));
  fn1_da18c(c);
  /* d8a14: mov x27, xzr */
  ARC_X_W(c, 27, ARC_X_R(c, 31));
  /* d8a18: mov w21, wzr */
  ARC_W_W(c, 21, ARC_W_R(c, 31));
  /* d8a1c: mov x19, x26 */
  ARC_X_W(c, 19, ARC_X_R(c, 26));
  /* d8a20: b #0xd8a40 */
  goto L_d8a40;
L_d8a24:;
  /* d8a24: cmp w8, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(4));
  /* d8a28: b.eq #0xd8a80 */
  if (ARC_COND(c, 0)) goto L_d8a80;
  /* d8a2c: cmp w8, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(5));
  /* d8a30: b.ne #0xd8cbc */
  if (ARC_COND(c, 1)) goto L_d8cbc;
L_d8a34:;
  /* d8a34: mov w21, #1 */
  ARC_W_W(c, 21, UINT64_C(1));
L_d8a38:;
  /* d8a38: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d8a3c: bl #0xda18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(887360));
  fn1_da18c(c);
L_d8a40:;
  /* d8a40: ldrb w8, [sp, #0x28] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(40))));
  /* d8a44: cmp w8, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(3));
  /* d8a48: b.gt #0xd8a24 */
  if (ARC_COND(c, 12)) goto L_d8a24;
  /* d8a4c: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* d8a50: b.eq #0xd8a80 */
  if (ARC_COND(c, 0)) goto L_d8a80;
  /* d8a54: cmp w8, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(3));
  /* d8a58: b.ne #0xd8cbc */
  if (ARC_COND(c, 1)) goto L_d8cbc;
  /* d8a5c: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* d8a60: nop  */
  /* nop: no architectural effect here */
  /* d8a64: adr x9, #0x501db */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(328155)));
  /* d8a68: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* d8a6c: cmp w8, #0x5c */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(92));
  /* d8a70: nop  */
  /* nop: no architectural effect here */
  /* d8a74: adr x8, #0x5004e */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(327758)));
  /* d8a78: csel x28, x9, x8, eq */
  ARC_X_W(c, 28, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* d8a7c: b #0xd8a9c */
  goto L_d8a9c;
L_d8a80:;
  /* d8a80: ldr x25, [sp, #0x20] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(32))));
  /* d8a84: cbz x25, #0xd8a34 */
  if ((ARC_X_R(c, 25)) == 0) goto L_d8a34;
  /* d8a88: ldr x28, [sp, #0x18] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(24))));
  /* d8a8c: cmp x25, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 25), UINT64_C(2));
  /* d8a90: b.eq #0xd8abc */
  if (ARC_COND(c, 0)) goto L_d8abc;
  /* d8a94: cmp x25, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 25), UINT64_C(1));
  /* d8a98: b.ne #0xd8ad0 */
  if (ARC_COND(c, 1)) goto L_d8ad0;
L_d8a9c:;
  /* d8a9c: ldrb w8, [x28] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 28)));
  /* d8aa0: cmp w8, #0x2e */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(46));
  /* d8aa4: b.eq #0xd8a34 */
  if (ARC_COND(c, 0)) goto L_d8a34;
  /* d8aa8: cmp w8, #0x2f */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(47));
  /* d8aac: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* d8ab0: mov w25, #1 */
  ARC_W_W(c, 25, UINT64_C(1));
  /* d8ab4: cinc w24, w8, ne */
  ARC_W_W(c, 24, (ARC_COND(c, 1) ? (ARC_W_R(c, 8)) + 1 : (ARC_W_R(c, 8))));
  /* d8ab8: b #0xd8ad4 */
  goto L_d8ad4;
L_d8abc:;
  /* d8abc: ldrh w8, [x28] */
  ARC_W_W(c, 8, arc_ld16(ARC_X_R(c, 28)));
  /* d8ac0: mov w9, #0x2e2e */
  ARC_W_W(c, 9, UINT64_C(11822));
  /* d8ac4: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d8ac8: b.eq #0xd8bbc */
  if (ARC_COND(c, 0)) goto L_d8bbc;
  /* d8acc: mov w25, #2 */
  ARC_W_W(c, 25, UINT64_C(2));
L_d8ad0:;
  /* d8ad0: mov w24, #2 */
  ARC_W_W(c, 24, UINT64_C(2));
L_d8ad4:;
  /* d8ad4: cmp x19, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 23));
  /* d8ad8: add x27, x25, x27 */
  ARC_X_W(c, 27, (ARC_X_R(c, 25) + ARC_X_R(c, 27)));
  /* d8adc: b.hs #0xd8af4 */
  if (ARC_COND(c, 2)) goto L_d8af4;
  /* d8ae0: mov w21, wzr */
  ARC_W_W(c, 21, ARC_W_R(c, 31));
  /* d8ae4: stp x28, x25, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* d8ae8: strb w24, [x19, #0x10] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(16)), ARC_W_R(c, 24));
L_d8aec:;
  /* d8aec: add x19, x19, #0x18 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* d8af0: b #0xd8a38 */
  goto L_d8a38;
L_d8af4:;
  /* d8af4: sub x21, x19, x26 */
  ARC_X_W(c, 21, (ARC_X_R(c, 19) - ARC_X_R(c, 26)));
  /* d8af8: mov x10, #-0x5555555555555556 */
  ARC_X_W(c, 10, UINT64_C(12297829382473034410));
  /* d8afc: mov x9, #1 */
  ARC_X_W(c, 9, UINT64_C(1));
  /* d8b00: asr x8, x21, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 21)) >> ((UINT64_C(3)) & 63))));
  /* d8b04: movk x10, #0xaaab */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446744073709486080)) | UINT64_C(43691)));
  /* d8b08: madd x8, x8, x10, x9 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) + ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 10)))));
  /* d8b0c: cmp x8, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* d8b10: b.hi #0xd8e58 */
  if (ARC_COND(c, 8)) goto L_d8e58;
  /* d8b14: sub x22, x23, x26 */
  ARC_X_W(c, 22, (ARC_X_R(c, 23) - ARC_X_R(c, 26)));
  /* d8b18: asr x9, x22, #3 */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 22)) >> ((UINT64_C(3)) & 63))));
  /* d8b1c: mul x9, x9, x10 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 10))));
  /* d8b20: lsl x10, x9, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* d8b24: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* d8b28: csel x8, x10, x8, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* d8b2c: mov x10, #0x5555555555555555 */
  ARC_X_W(c, 10, UINT64_C(6148914691236517205));
  /* d8b30: movk x10, #0x555, lsl #48 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(281474976710655)) | UINT64_C(384213343210045440)));
  /* d8b34: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* d8b38: csel x19, x8, x20, lo */
  ARC_X_W(c, 19, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 20)));
  /* d8b3c: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* d8b40: b.hi #0xd8e54 */
  if (ARC_COND(c, 8)) goto L_d8e54;
  /* d8b44: add x8, x19, x19, lsl #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 19)) << 1)));
  /* d8b48: lsl x0, x8, #3 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(3)) & 63)));
  /* d8b4c: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(887632));
  fn1_1428f0(c);
  /* d8b50: mov x8, #0x5555555555555555 */
  ARC_X_W(c, 8, UINT64_C(6148914691236517205));
  /* d8b54: mov w10, #0x18 */
  ARC_W_W(c, 10, UINT64_C(24));
  /* d8b58: movk x8, #0xd555, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(15372192903099056128)));
  /* d8b5c: madd x20, x19, x10, x0 */
  ARC_X_W(c, 20, ((uint64_t)(ARC_X_R(c, 0)) + ((uint64_t)(ARC_X_R(c, 19)) * (uint64_t)(ARC_X_R(c, 10)))));
  /* d8b60: smulh x8, x21, x8 */
  ARC_X_W(c, 8, arc_smulh(ARC_X_R(c, 21), ARC_X_R(c, 8)));
  /* d8b64: lsr x9, x8, #2 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63)));
  /* d8b68: add x8, x9, x8, lsr #63 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) >> 63)));
  /* d8b6c: add x9, x0, x21 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + ARC_X_R(c, 21)));
  /* d8b70: stp x28, x25, [x9] */
  { const uint64_t _pa = ARC_X_R(c, 9);
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* d8b74: nop  */
  /* nop: no architectural effect here */
  /* d8b78: madd x23, x8, x10, x9 */
  ARC_X_W(c, 23, ((uint64_t)(ARC_X_R(c, 9)) + ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 10)))));
  /* d8b7c: strb w24, [x9, #0x10] */
  arc_st8((ARC_X_R(c, 9) + INT64_C(16)), ARC_W_R(c, 24));
L_d8b80:;
  /* d8b80: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* d8b84: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* d8b88: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* d8b8c: add x19, x9, #0x18 */
  ARC_X_W(c, 19, (ARC_X_R(c, 9) + UINT64_C(24)));
  /* d8b90: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(887700));
  fn1_1449d8(c);
  /* d8b94: cbz x26, #0xd8ba4 */
  if ((ARC_X_R(c, 26)) == 0) goto L_d8ba4;
  /* d8b98: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* d8b9c: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* d8ba0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(887716));
  fn1_142608(c);
L_d8ba4:;
  /* d8ba4: mov x26, x23 */
  ARC_X_W(c, 26, ARC_X_R(c, 23));
  /* d8ba8: mov x23, x20 */
  ARC_X_W(c, 23, ARC_X_R(c, 20));
  /* d8bac: mov x20, #-0x5555555555555556 */
  ARC_X_W(c, 20, UINT64_C(12297829382473034410));
  /* d8bb0: mov w21, wzr */
  ARC_W_W(c, 21, ARC_W_R(c, 31));
  /* d8bb4: movk x20, #0xaaa, lsl #48 */
  ARC_X_W(c, 20, ((ARC_X_R(c, 20) & UINT64_C(281474976710655)) | UINT64_C(768426686420090880)));
  /* d8bb8: b #0xd8a38 */
  goto L_d8a38;
L_d8bbc:;
  /* d8bbc: cmp x26, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 19));
  /* d8bc0: b.eq #0xd8bec */
  if (ARC_COND(c, 0)) goto L_d8bec;
  /* d8bc4: ldurb w8, [x19, #-8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(-8))));
  /* d8bc8: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* d8bcc: b.eq #0xd8cb4 */
  if (ARC_COND(c, 0)) goto L_d8cb4;
  /* d8bd0: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* d8bd4: b.ne #0xd8bec */
  if (ARC_COND(c, 1)) goto L_d8bec;
  /* d8bd8: ldur x8, [x19, #-0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(-16))));
  /* d8bdc: sub x19, x19, #0x18 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) - UINT64_C(24)));
  /* d8be0: mov w21, #1 */
  ARC_W_W(c, 21, UINT64_C(1));
  /* d8be4: sub x27, x27, x8 */
  ARC_X_W(c, 27, (ARC_X_R(c, 27) - ARC_X_R(c, 8)));
  /* d8be8: b #0xd8a38 */
  goto L_d8a38;
L_d8bec:;
  /* d8bec: cmp x19, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 23));
  /* d8bf0: add x27, x27, #2 */
  ARC_X_W(c, 27, (ARC_X_R(c, 27) + UINT64_C(2)));
  /* d8bf4: b.hs #0xd8c18 */
  if (ARC_COND(c, 2)) goto L_d8c18;
  /* d8bf8: adrp x8, #0x50000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(327680)));
  /* d8bfc: add x9, x8, #0xc94 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(3220)));
  /* d8c00: mov w21, wzr */
  ARC_W_W(c, 21, ARC_W_R(c, 31));
  /* d8c04: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
  /* d8c08: stp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* d8c0c: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* d8c10: strb w8, [x19, #0x10] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(16)), ARC_W_R(c, 8));
  /* d8c14: b #0xd8aec */
  goto L_d8aec;
L_d8c18:;
  /* d8c18: sub x21, x19, x26 */
  ARC_X_W(c, 21, (ARC_X_R(c, 19) - ARC_X_R(c, 26)));
  /* d8c1c: mov x10, #-0x5555555555555556 */
  ARC_X_W(c, 10, UINT64_C(12297829382473034410));
  /* d8c20: mov x9, #1 */
  ARC_X_W(c, 9, UINT64_C(1));
  /* d8c24: asr x8, x21, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 21)) >> ((UINT64_C(3)) & 63))));
  /* d8c28: movk x10, #0xaaab */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446744073709486080)) | UINT64_C(43691)));
  /* d8c2c: madd x8, x8, x10, x9 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) + ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 10)))));
  /* d8c30: cmp x8, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* d8c34: b.hi #0xd8e5c */
  if (ARC_COND(c, 8)) goto L_d8e5c;
  /* d8c38: sub x22, x23, x26 */
  ARC_X_W(c, 22, (ARC_X_R(c, 23) - ARC_X_R(c, 26)));
  /* d8c3c: asr x9, x22, #3 */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 22)) >> ((UINT64_C(3)) & 63))));
  /* d8c40: mul x9, x9, x10 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 10))));
  /* d8c44: lsl x10, x9, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* d8c48: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* d8c4c: csel x8, x10, x8, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* d8c50: mov x10, #0x5555555555555555 */
  ARC_X_W(c, 10, UINT64_C(6148914691236517205));
  /* d8c54: movk x10, #0x555, lsl #48 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(281474976710655)) | UINT64_C(384213343210045440)));
  /* d8c58: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* d8c5c: csel x19, x8, x20, lo */
  ARC_X_W(c, 19, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 20)));
  /* d8c60: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* d8c64: b.hi #0xd8e60 */
  if (ARC_COND(c, 8)) goto L_d8e60;
  /* d8c68: add x8, x19, x19, lsl #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 19)) << 1)));
  /* d8c6c: lsl x0, x8, #3 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(3)) & 63)));
  /* d8c70: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(887924));
  fn1_1428f0(c);
  /* d8c74: mov x8, #0x5555555555555555 */
  ARC_X_W(c, 8, UINT64_C(6148914691236517205));
  /* d8c78: mov w10, #0x18 */
  ARC_W_W(c, 10, UINT64_C(24));
  /* d8c7c: movk x8, #0xd555, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(15372192903099056128)));
  /* d8c80: madd x20, x19, x10, x0 */
  ARC_X_W(c, 20, ((uint64_t)(ARC_X_R(c, 0)) + ((uint64_t)(ARC_X_R(c, 19)) * (uint64_t)(ARC_X_R(c, 10)))));
  /* d8c84: smulh x8, x21, x8 */
  ARC_X_W(c, 8, arc_smulh(ARC_X_R(c, 21), ARC_X_R(c, 8)));
  /* d8c88: lsr x9, x8, #2 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63)));
  /* d8c8c: add x8, x9, x8, lsr #63 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) >> 63)));
  /* d8c90: add x9, x0, x21 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + ARC_X_R(c, 21)));
  /* d8c94: madd x23, x8, x10, x9 */
  ARC_X_W(c, 23, ((uint64_t)(ARC_X_R(c, 9)) + ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 10)))));
  /* d8c98: adrp x8, #0x50000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(327680)));
  /* d8c9c: add x10, x8, #0xc94 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(3220)));
  /* d8ca0: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
  /* d8ca4: stp x10, x8, [x9] */
  { const uint64_t _pa = ARC_X_R(c, 9);
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* d8ca8: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* d8cac: strb w8, [x9, #0x10] */
  arc_st8((ARC_X_R(c, 9) + INT64_C(16)), ARC_W_R(c, 8));
  /* d8cb0: b #0xd8b80 */
  goto L_d8b80;
L_d8cb4:;
  /* d8cb4: mov w21, wzr */
  ARC_W_W(c, 21, ARC_W_R(c, 31));
  /* d8cb8: b #0xd8a38 */
  goto L_d8a38;
L_d8cbc:;
  /* d8cbc: cmp x26, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 19));
  /* d8cc0: b.eq #0xd8cf0 */
  if (ARC_COND(c, 0)) goto L_d8cf0;
  /* d8cc4: tbz w21, #0, #0xd8d14 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) == 0) goto L_d8d14;
  /* d8cc8: ldurb w8, [x19, #-8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(-8))));
  /* d8ccc: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* d8cd0: cset w21, eq */
  ARC_W_W(c, 21, (ARC_COND(c, 0) ? 1 : 0));
  /* d8cd4: b #0xd8d18 */
  goto L_d8d18;
L_d8cd8:;
  /* d8cd8: tbnz w22, #0, #0xd8e2c */
  if (((ARC_W_R(c, 22)) >> 0 & 1) != 0) goto L_d8e2c;
  /* d8cdc: ldr q0, [x21] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 21)), arc_ld64(ARC_X_R(c, 21) + 8));
  /* d8ce0: ldr x8, [x21, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* d8ce4: str q0, [x0] */
  arc_st64(ARC_X_R(c, 0), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 0) + 8, (c)->q[0].u64[1]);
  /* d8ce8: str x8, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 8));
  /* d8cec: b #0xd8e08 */
  goto L_d8e08;
L_d8cf0:;
  /* d8cf0: ldr x19, [sp] */
  ARC_X_W(c, 19, arc_ld64((c)->sp));
  /* d8cf4: stp xzr, xzr, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* d8cf8: str xzr, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 31));
  /* d8cfc: nop  */
  /* nop: no architectural effect here */
  /* d8d00: adr x1, #0x501d9 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(328153)));
  /* d8d04: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d8d08: add x2, x1, #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 1) + UINT64_C(1)));
  /* d8d0c: bl #0xda784 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(888080));
  fn1_da784(c);
  /* d8d10: b #0xd8df8 */
  goto L_d8df8;
L_d8d14:;
  /* d8d14: mov w21, wzr */
  ARC_W_W(c, 21, ARC_W_R(c, 31));
L_d8d18:;
  /* d8d18: sub x8, x19, x26 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) - ARC_X_R(c, 26)));
  /* d8d1c: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* d8d20: ldr x20, [sp] */
  ARC_X_W(c, 20, arc_ld64((c)->sp));
  /* d8d24: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* d8d28: movk x9, #0xaaab */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744073709486080)) | UINT64_C(43691)));
  /* d8d2c: stp xzr, xzr, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* d8d30: nop  */
  /* nop: no architectural effect here */
  /* d8d34: madd x8, x8, x9, x27 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 27)) + ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9)))));
  /* d8d38: str xzr, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 31));
  /* d8d3c: add x8, x8, w21, uxtw */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)(uint32_t)(ARC_W_R(c, 21)))));
  /* d8d40: cmn x8, #8 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(8), 0);
  /* d8d44: b.hs #0xd8e64 */
  if (ARC_COND(c, 2)) goto L_d8e64;
  /* d8d48: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* d8d4c: mov x22, x26 */
  ARC_X_W(c, 22, ARC_X_R(c, 26));
  /* d8d50: b.lo #0xd8d70 */
  if (ARC_COND(c, 3)) goto L_d8d70;
  /* d8d54: orr x8, x8, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(7)));
  /* d8d58: mov w9, #0x19 */
  ARC_W_W(c, 9, UINT64_C(25));
  /* d8d5c: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* d8d60: csel x1, x9, x8, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* d8d64: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* d8d68: bl #0xda620 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(888172));
  fn1_da620(c);
  /* d8d6c: mov x22, x26 */
  ARC_X_W(c, 22, ARC_X_R(c, 26));
L_d8d70:;
  /* d8d70: ldr x8, [x22, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* d8d74: cbz x8, #0xd8d98 */
  if ((ARC_X_R(c, 8)) == 0) goto L_d8d98;
  /* d8d78: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* d8d7c: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* d8d80: cmp w8, #0x2f */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(47));
  /* d8d84: b.ne #0xd8d98 */
  if (ARC_COND(c, 1)) goto L_d8d98;
  /* d8d88: ldrb w8, [x20] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 20)));
  /* d8d8c: tbnz w8, #0, #0xd8db4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_d8db4;
  /* d8d90: strh wzr, [x20] */
  arc_st16(ARC_X_R(c, 20), ARC_W_R(c, 31));
  /* d8d94: b #0xd8dc0 */
  goto L_d8dc0;
L_d8d98:;
  /* d8d98: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* d8d9c: bl #0x142b30 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(888224));
  fn1_142b30(c);
  /* d8da0: cbz x1, #0xd8dc0 */
  if ((ARC_X_R(c, 1)) == 0) goto L_d8dc0;
  /* d8da4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* d8da8: mov w1, #0x2f */
  ARC_W_W(c, 1, UINT64_C(47));
  /* d8dac: bl #0x142ba8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(888240));
  fn1_142ba8(c);
  /* d8db0: b #0xd8dc0 */
  goto L_d8dc0;
L_d8db4:;
  /* d8db4: ldr x8, [x20, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* d8db8: strb wzr, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 31));
  /* d8dbc: str xzr, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 31));
L_d8dc0:;
  /* d8dc0: ldp x1, x8, [x22] */
  { const uint64_t _pa = ARC_X_R(c, 22);
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* d8dc4: add x2, x1, x8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 1) + ARC_X_R(c, 8)));
  /* d8dc8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* d8dcc: bl #0xda784 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(888272));
  fn1_da784(c);
  /* d8dd0: add x22, x22, #0x18 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(24)));
  /* d8dd4: cmp x22, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 19));
  /* d8dd8: b.ne #0xd8d70 */
  if (ARC_COND(c, 1)) goto L_d8d70;
  /* d8ddc: tbz w21, #0, #0xd8df8 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) == 0) goto L_d8df8;
  /* d8de0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* d8de4: bl #0x142b30 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(888296));
  fn1_142b30(c);
  /* d8de8: cbz x1, #0xd8df8 */
  if ((ARC_X_R(c, 1)) == 0) goto L_d8df8;
  /* d8dec: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* d8df0: mov w1, #0x2f */
  ARC_W_W(c, 1, UINT64_C(47));
  /* d8df4: bl #0x142ba8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(888312));
  fn1_142ba8(c);
L_d8df8:;
  /* d8df8: cbz x26, #0xd8e08 */
  if ((ARC_X_R(c, 26)) == 0) goto L_d8e08;
  /* d8dfc: sub x1, x23, x26 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) - ARC_X_R(c, 26)));
  /* d8e00: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* d8e04: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(888328));
  fn1_142608(c);
L_d8e08:;
  /* d8e08: ldp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d8e0c: ldp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* d8e10: ldp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* d8e14: ldp x26, x25, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* d8e18: ldp x28, x27, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* d8e1c: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d8e20: add sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(144)));
  /* d8e24: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d8e28: ret  */
  return;
L_d8e2c:;
  /* d8e2c: ldr x1, [x21, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* d8e30: ldp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d8e34: ldp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* d8e38: ldp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* d8e3c: ldp x26, x25, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* d8e40: ldp x28, x27, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* d8e44: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d8e48: add sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(144)));
  /* d8e4c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d8e50: b #0xda588 */
  fn1_da588(c); return;
L_d8e54:;
  /* d8e54: bl #0xd9fe8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(888408));
  fn1_d9fe8(c);
L_d8e58:;
  /* d8e58: bl #0xda608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(888412));
  fn1_da608(c);
L_d8e5c:;
  /* d8e5c: bl #0xda608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(888416));
  fn1_da608(c);
L_d8e60:;
  /* d8e60: bl #0xd9fe8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(888420));
  fn1_d9fe8(c);
L_d8e64:;
  /* d8e64: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(888424));
  fn1_d7d54(c);
  /* d8e68: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* d8e6c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* d8e70: tbnz w8, #0, #0xd8ea0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_d8ea0;
  /* d8e74: b #0xd8eb4 */
  goto L_d8eb4;
  /* d8e78: b #0xd8e88 */
  goto L_d8e88;
  /* d8e7c: b #0xd8e90 */
  goto L_d8e90;
  /* d8e80: b #0xd8e88 */
  goto L_d8e88;
  /* d8e84: b #0xd8e88 */
  goto L_d8e88;
L_d8e88:;
  /* d8e88: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* d8e8c: b #0xd8eb4 */
  goto L_d8eb4;
L_d8e90:;
  /* d8e90: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* d8e94: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* d8e98: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* d8e9c: tbz w8, #0, #0xd8eb4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_d8eb4;
L_d8ea0:;
  /* d8ea0: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* d8ea4: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* d8ea8: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* d8eac: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* d8eb0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(888500));
  fn1_142608(c);
L_d8eb4:;
  /* d8eb4: cbz x26, #0xd8ec4 */
  if ((ARC_X_R(c, 26)) == 0) goto L_d8ec4;
  /* d8eb8: sub x1, x23, x26 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) - ARC_X_R(c, 26)));
  /* d8ebc: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* d8ec0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(888516));
  fn1_142608(c);
L_d8ec4:;
  /* d8ec4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* d8ec8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(888524));
  fn1_9cc20(c);
}

void fn1_dc034(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038829108));
  /* dc034: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* dc038: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* dc03c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* dc040: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* dc044: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* dc048: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* dc04c: ldr x8, [x8, #0xa20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2592))));
  /* dc050: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* dc054: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* dc058: bl #0x142bf0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(901212));
  fn1_142bf0(c);
  /* dc05c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* dc060: mov w1, #0x28 */
  ARC_W_W(c, 1, UINT64_C(40));
  /* dc064: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* dc068: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* dc06c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* dc070: b #0x142608 */
  fn1_142608(c); return;
  /* dc074: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(901240));
  fn1_a1454(c);
}

void fn1_e09a4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038847908));
  /* e09a4: bti c */
  /* bti: no architectural effect here */
  /* e09a8: ldrb w9, [x1] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 1)));
  /* e09ac: ldr x8, [x1, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* e09b0: lsr x10, x9, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* e09b4: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e09b8: csel x8, x10, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* e09bc: subs x8, x8, x2 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 2)));
  /* e09c0: b.lo #0xe09e4 */
  if (ARC_COND(c, 3)) goto L_e09e4;
  /* e09c4: cmp x8, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 3));
  /* e09c8: ldr x10, [x1, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* e09cc: csel x8, x8, x3, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 3)));
  /* e09d0: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e09d4: csinc x9, x10, x1, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 1)) + 1)));
  /* e09d8: add x1, x9, x2 */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) + ARC_X_R(c, 2)));
  /* e09dc: mov x2, x8 */
  ARC_X_W(c, 2, ARC_X_R(c, 8));
  /* e09e0: b #0xd7c14 */
  fn1_d7c14(c); return;
L_e09e4:;
  /* e09e4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e09e8: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e09ec: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e09f0: bl #0xda020 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(920052));
  fn1_da020(c);
}

void fn1_e3370(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038858608));
  /* e3370: bti c */
  /* bti: no architectural effect here */
  /* e3374: cbz x1, #0xe3494 */
  if ((ARC_X_R(c, 1)) == 0) goto L_e3494;
  /* e3378: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e337c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e3380: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e3384: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e3388: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e338c: ldp x9, x10, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* e3390: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e3394: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e3398: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* e339c: and x11, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* e33a0: ubfx x12, x9, #1, #7 */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 9)) >> 1) & UINT64_C(127)));
  /* e33a4: sub x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* e33a8: csel x8, x8, x11, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 11)));
  /* e33ac: ands w9, w9, #1 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 9, _r); }
  /* e33b0: csel x19, x12, x10, eq */
  ARC_X_W(c, 19, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* e33b4: sub x10, x8, x19 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) - ARC_X_R(c, 19)));
  /* e33b8: cmp x10, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 1));
  /* e33bc: b.hs #0xe3404 */
  if (ARC_COND(c, 2)) goto L_e3404;
  /* e33c0: sub x9, x1, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) - ARC_X_R(c, 8)));
  /* e33c4: mov w21, w2 */
  ARC_W_W(c, 21, ARC_W_R(c, 2));
  /* e33c8: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* e33cc: add x2, x9, x19 */
  ARC_X_W(c, 2, (ARC_X_R(c, 9) + ARC_X_R(c, 19)));
  /* e33d0: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* e33d4: mov x3, x19 */
  ARC_X_W(c, 3, ARC_X_R(c, 19));
  /* e33d8: mov x4, x19 */
  ARC_X_W(c, 4, ARC_X_R(c, 19));
  /* e33dc: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* e33e0: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* e33e4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e33e8: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(930796));
  fn1_142da0(c);
  /* e33ec: ldrb w8, [x20] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 20)));
  /* e33f0: mov w2, w21 */
  ARC_W_W(c, 2, ARC_W_R(c, 21));
  /* e33f4: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* e33f8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e33fc: str x19, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 19));
  /* e3400: and w9, w8, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) & UINT64_C(1)));
L_e3404:;
  /* e3404: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e3408: add x10, x0, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 0) + UINT64_C(4)));
  /* e340c: cmp w9, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(0));
  /* e3410: csel x8, x10, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* e3414: cmp x1, #8 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(8));
  /* e3418: mov x10, x1 */
  ARC_X_W(c, 10, ARC_X_R(c, 1));
  /* e341c: add x12, x8, x19, lsl #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 19)) << 2)));
  /* e3420: mov x9, x12 */
  ARC_X_W(c, 9, ARC_X_R(c, 12));
  /* e3424: b.lo #0xe3458 */
  if (ARC_COND(c, 3)) goto L_e3458;
  /* e3428: and x11, x1, #0xfffffffffffffff8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 1) & UINT64_C(18446744073709551608)));
  /* e342c: dup v0.4s, w2 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (ARC_W_R(c, 2));
    _t.u32[1] = (ARC_W_R(c, 2));
    _t.u32[2] = (ARC_W_R(c, 2));
    _t.u32[3] = (ARC_W_R(c, 2));
    (c)->q[0] = _t; }
  /* e3430: and x10, x1, #7 */
  ARC_X_W(c, 10, (ARC_X_R(c, 1) & UINT64_C(7)));
  /* e3434: add x9, x12, x11, lsl #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 11)) << 2)));
  /* e3438: add x12, x12, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(16)));
  /* e343c: mov x13, x11 */
  ARC_X_W(c, 13, ARC_X_R(c, 11));
L_e3440:;
  /* e3440: subs x13, x13, #8 */
  ARC_X_W(c, 13, arc_sub64(c, ARC_X_R(c, 13), UINT64_C(8)));
  /* e3444: stp q0, q0, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* e3448: add x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(32)));
  /* e344c: b.ne #0xe3440 */
  if (ARC_COND(c, 1)) goto L_e3440;
  /* e3450: cmp x1, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 11));
  /* e3454: b.eq #0xe3464 */
  if (ARC_COND(c, 0)) goto L_e3464;
L_e3458:;
  /* e3458: subs x10, x10, #1 */
  ARC_X_W(c, 10, arc_sub64(c, ARC_X_R(c, 10), UINT64_C(1)));
  /* e345c: str w2, [x9], #4 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 2));
  }
  /* e3460: b.ne #0xe3458 */
  if (ARC_COND(c, 1)) goto L_e3458;
L_e3464:;
  /* e3464: ldrb w10, [x0] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 0)));
  /* e3468: add x9, x19, x1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 1)));
  /* e346c: tbnz w10, #0, #0xe347c */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_e347c;
  /* e3470: lsl w10, w9, #1 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 9)) << ((UINT64_C(1)) & 31)));
  /* e3474: strb w10, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 10));
  /* e3478: b #0xe3480 */
  goto L_e3480;
L_e347c:;
  /* e347c: str x9, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 9));
L_e3480:;
  /* e3480: str wzr, [x8, x9, lsl #2] */
  arc_st32((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 2)), ARC_W_R(c, 31));
  /* e3484: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e3488: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e348c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e3490: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
L_e3494:;
  /* e3494: ret  */
  return;
}

void fn1_e7c08(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038877192));
  /* e7c08: bti c */
  /* bti: no architectural effect here */
  /* e7c0c: nop  */
  /* nop: no architectural effect here */
  /* e7c10: adr x0, #0x5252f */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(337199)));
  /* e7c14: ret  */
  return;
}

void fn1_ea3cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038887372));
  /* ea3cc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ea3d0: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ea3d4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ea3d8: mov w0, #3 */
  ARC_W_W(c, 0, UINT64_C(3));
  /* ea3dc: bl #0xe9be0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959456));
  fn1_e9be0(c);
}

void fn1_ebd20(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038893856));
  /* ebd20: bti c */
  /* bti: no architectural effect here */
  /* ebd24: cbz x0, #0xebd58 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ebd58;
  /* ebd28: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ebd2c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ebd30: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* ebd34: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ebd38: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ebd3c: bl #0x1432e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(965952));
  fn1_1432e0(c);
  /* ebd40: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ebd44: mov w1, #8 */
  ARC_W_W(c, 1, UINT64_C(8));
  /* ebd48: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* ebd4c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ebd50: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ebd54: b #0x142608 */
  fn1_142608(c); return;
L_ebd58:;
  /* ebd58: ret  */
  return;
}

void fn1_ed7cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038900684));
  /* ed7cc: bti c */
  /* bti: no architectural effect here */
  /* ed7d0: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* ed7d4: ret  */
  return;
}

void fn1_f12b4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038915764));
  /* f12b4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f12b8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f12bc: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* f12c0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f12c4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f12c8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f12cc: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f12d0: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* f12d4: blr x1 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(987864));
  arc_dispatch(c, ARC_X_R(c, 1));
  /* f12d8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f12dc: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f12e0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f12e4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f12e8: ret  */
  return;
}

void fn1_f41fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038927868));
  /* f41fc: bti c */
  /* bti: no architectural effect here */
  /* f4200: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* f4204: ret  */
  return;
}

void fn1_f7cec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038942956));
  /* f7cec: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f7cf0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f7cf4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* f7cf8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f7cfc: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f7d00: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f7d04: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f7d08: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* f7d0c: blr x1 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1015056));
  arc_dispatch(c, ARC_X_R(c, 1));
  /* f7d10: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f7d14: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f7d18: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f7d1c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f7d20: ret  */
  return;
}

void fn1_fd1f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038964728));
  /* fd1f8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fd1fc: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fd200: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* fd204: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fd208: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fd20c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fd210: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fd214: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* fd218: ldr x8, [x8, #0xb08] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2824))));
  /* fd21c: ldr x9, [x9, #0xae0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2784))));
  /* fd220: ldrb w10, [x0, #0x48] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 0) + INT64_C(72))));
  /* fd224: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fd228: add x11, x8, #0x40 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* fd22c: add x8, x8, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* fd230: add x9, x9, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* fd234: str x11, [x19, #0x70]! */
  { const uint64_t _a = (ARC_X_R(c, 19) + INT64_C(112));
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(112));
    arc_st64(_a, ARC_X_R(c, 11));
  }
  /* fd238: stp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* fd23c: tbz w10, #0, #0xfd250 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) == 0) goto L_fd250;
  /* fd240: ldr x8, [x20, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(72))));
  /* fd244: ldr x0, [x20, #0x58] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(88))));
  /* fd248: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* fd24c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1036880));
  fn1_142608(c);
L_fd250:;
  /* fd250: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fd254: nop  */
  /* nop: no architectural effect here */
  /* fd258: adr x9, #0x15dc40 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1432640)));
  /* fd25c: ldr x8, [x8, #0xaa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2728))));
  /* fd260: ldr x21, [x20, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* fd264: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* fd268: cmp x21, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 9));
  /* fd26c: str x8, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 8));
  /* fd270: b.eq #0xfd294 */
  if (ARC_COND(c, 0)) goto L_fd294;
  /* fd274: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* fd278: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fd27c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1036928));
  fn1_bd950(c);
  /* fd280: cbnz x0, #0xfd294 */
  if ((ARC_X_R(c, 0)) != 0) goto L_fd294;
  /* fd284: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* fd288: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* fd28c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fd290: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1036948));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fd294:;
  /* fd294: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fd298: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fd29c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* fd2a0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fd2a4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fd2a8: b #0x1433b8 */
  fn1_1433b8(c); return;
}

void fn1_102dd8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038988248));
  /* 102dd8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 102ddc: sub sp, sp, #0x1b0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(432)));
  /* 102de0: stp x29, x30, [sp, #0x150] */
  { const uint64_t _pa = ((c)->sp + INT64_C(336));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 102de4: stp x28, x27, [sp, #0x160] */
  { const uint64_t _pa = ((c)->sp + INT64_C(352));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 102de8: stp x26, x25, [sp, #0x170] */
  { const uint64_t _pa = ((c)->sp + INT64_C(368));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 102dec: stp x24, x23, [sp, #0x180] */
  { const uint64_t _pa = ((c)->sp + INT64_C(384));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 102df0: stp x22, x21, [sp, #0x190] */
  { const uint64_t _pa = ((c)->sp + INT64_C(400));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 102df4: stp x20, x19, [sp, #0x1a0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(416));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 102df8: add x29, sp, #0x150 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(336)));
  /* 102dfc: mov x0, x3 */
  ARC_X_W(c, 0, ARC_X_R(c, 3));
  /* 102e00: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 102e04: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 102e08: sub x8, x29, #0x48 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 102e0c: sub x1, x29, #0x24 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(36)));
  /* 102e10: sub x2, x29, #0x28 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 102e14: sub x3, x29, #0x2c */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(44)));
  /* 102e18: stp x5, x4, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 5));
    arc_st64(_pa + 8, ARC_X_R(c, 4));
  }
  /* 102e1c: sub x25, x29, #0x68 */
  ARC_X_W(c, 25, (ARC_X_R(c, 29) - UINT64_C(104)));
  /* 102e20: bl #0x143898 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1060388));
  fn1_143898(c);
  /* 102e24: stp xzr, xzr, [x25, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 102e28: str xzr, [x25, #0x18] */
  arc_st64((ARC_X_R(c, 25) + INT64_C(24)), ARC_X_R(c, 31));
  /* 102e2c: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 102e30: mov w1, #0x16 */
  ARC_W_W(c, 1, UINT64_C(22));
  /* 102e34: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 102e38: sub x19, x29, #0x60 */
  ARC_X_W(c, 19, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 102e3c: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1060416));
  fn1_142d10(c);
  /* 102e40: ldurb w8, [x29, #-0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 102e44: ldr x9, [x25, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 25) + INT64_C(24))));
  /* 102e48: mov w26, wzr */
  ARC_W_W(c, 26, ARC_W_R(c, 31));
  /* 102e4c: add x27, sp, #0x48 */
  ARC_X_W(c, 27, ((c)->sp + UINT64_C(72)));
  /* 102e50: mov w10, #1 */
  ARC_W_W(c, 10, UINT64_C(1));
  /* 102e54: orr x28, x19, #1 */
  ARC_X_W(c, 28, (ARC_X_R(c, 19) | UINT64_C(1)));
  /* 102e58: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 102e5c: mov w8, #0x45 */
  ARC_W_W(c, 8, UINT64_C(69));
  /* 102e60: add x22, sp, #0x3c */
  ARC_X_W(c, 22, ((c)->sp + UINT64_C(60)));
  /* 102e64: csinc x23, x9, x19, ne */
  ARC_X_W(c, 23, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* 102e68: add x19, sp, #0x40 */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(64)));
  /* 102e6c: str wzr, [sp, #0x3c] */
  arc_st32(((c)->sp + INT64_C(60)), ARC_W_R(c, 31));
  /* 102e70: str x27, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 27));
  /* 102e74: strb w10, [sp, #0x38] */
  arc_st8(((c)->sp + INT64_C(56)), ARC_W_R(c, 10));
  /* 102e78: strb w8, [sp, #0x34] */
  arc_st8(((c)->sp + INT64_C(52)), ARC_W_R(c, 8));
  /* 102e7c: str x23, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 23));
  /* 102e80: b #0x102e8c */
  goto L_102e8c;
L_102e84:;
  /* 102e84: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 102e88: str x8, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 8));
L_102e8c:;
  /* 102e8c: cbz x20, #0x102eb4 */
  if ((ARC_X_R(c, 20)) == 0) goto L_102eb4;
  /* 102e90: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 102e94: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 102e98: b.eq #0x102ed0 */
  if (ARC_COND(c, 0)) goto L_102ed0;
  /* 102e9c: cbz x21, #0x102f40 */
  if ((ARC_X_R(c, 21)) == 0) goto L_102f40;
  /* 102ea0: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 102ea4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 102ea8: b.ne #0x10311c */
  if (ARC_COND(c, 1)) goto L_10311c;
  /* 102eac: mov w24, wzr */
  ARC_W_W(c, 24, ARC_W_R(c, 31));
  /* 102eb0: b #0x102f1c */
  goto L_102f1c;
L_102eb4:;
  /* 102eb4: cbz x21, #0x103118 */
  if ((ARC_X_R(c, 21)) == 0) goto L_103118;
  /* 102eb8: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 102ebc: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 102ec0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 102ec4: b.ne #0x102f40 */
  if (ARC_COND(c, 1)) goto L_102f40;
  /* 102ec8: mov w24, #1 */
  ARC_W_W(c, 24, UINT64_C(1));
  /* 102ecc: b #0x102f1c */
  goto L_102f1c;
L_102ed0:;
  /* 102ed0: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 102ed4: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 102ed8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 102edc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1060576));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 102ee0: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 102ee4: cset w24, eq */
  ARC_W_W(c, 24, (ARC_COND(c, 0) ? 1 : 0));
  /* 102ee8: cbz x21, #0x102f0c */
  if ((ARC_X_R(c, 21)) == 0) goto L_102f0c;
  /* 102eec: ldp x9, x10, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 102ef0: csel x8, xzr, x20, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 20)));
  /* 102ef4: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 102ef8: b.eq #0x102f18 */
  if (ARC_COND(c, 0)) goto L_102f18;
  /* 102efc: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 102f00: b.ne #0x10311c */
  if (ARC_COND(c, 1)) goto L_10311c;
  /* 102f04: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 102f08: b #0x102f40 */
  goto L_102f40;
L_102f0c:;
  /* 102f0c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 102f10: b.ne #0x102f40 */
  if (ARC_COND(c, 1)) goto L_102f40;
  /* 102f14: b #0x103488 */
  goto L_103488;
L_102f18:;
  /* 102f18: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
L_102f1c:;
  /* 102f1c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 102f20: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 102f24: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 102f28: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1060652));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 102f2c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 102f30: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 102f34: csel x21, xzr, x21, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 21)));
  /* 102f38: cmp w24, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 24), ARC_W_R(c, 8));
  /* 102f3c: b.eq #0x10311c */
  if (ARC_COND(c, 0)) goto L_10311c;
L_102f40:;
  /* 102f40: ldurb w8, [x29, #-0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 102f44: ldr x9, [x25, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 25) + INT64_C(16))));
  /* 102f48: ldr x11, [x25] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 25)));
  /* 102f4c: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 102f50: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 102f54: csel x24, x10, x9, eq */
  ARC_X_W(c, 24, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 102f58: add x9, x23, x24 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) + ARC_X_R(c, 24)));
  /* 102f5c: cmp x11, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 9));
  /* 102f60: b.ne #0x10301c */
  if (ARC_COND(c, 1)) goto L_10301c;
  /* 102f64: cmp x24, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 24), UINT64_C(1));
  /* 102f68: b.lt #0x102f80 */
  if (ARC_COND(c, 11)) goto L_102f80;
  /* 102f6c: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 102f70: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 102f74: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 102f78: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1060732));
  fn1_142d10(c);
  /* 102f7c: b #0x102fa4 */
  goto L_102fa4;
L_102f80:;
  /* 102f80: lsl x9, x24, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 24)) << ((UINT64_C(1)) & 63)));
  /* 102f84: tbnz w8, #0, #0x102f98 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_102f98;
  /* 102f88: lsl w8, w9, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 9)) << ((UINT64_C(1)) & 31)));
  /* 102f8c: sturb w8, [x29, #-0x60] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-96)), ARC_W_R(c, 8));
  /* 102f90: mov x8, x28 */
  ARC_X_W(c, 8, ARC_X_R(c, 28));
  /* 102f94: b #0x102fa0 */
  goto L_102fa0;
L_102f98:;
  /* 102f98: ldr x8, [x25, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(24))));
  /* 102f9c: str x9, [x25, #0x10] */
  arc_st64((ARC_X_R(c, 25) + INT64_C(16)), ARC_X_R(c, 9));
L_102fa0:;
  /* 102fa0: strb wzr, [x8, x9] */
  arc_st8((ARC_X_R(c, 8) + ARC_X_R(c, 9)), ARC_W_R(c, 31));
L_102fa4:;
  /* 102fa4: ldp x9, x10, [x25, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 102fa8: ldurb w8, [x29, #-0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 102fac: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 102fb0: mov w8, #0x16 */
  ARC_W_W(c, 8, UINT64_C(22));
  /* 102fb4: and x11, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 102fb8: ubfx x12, x9, #1, #7 */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 9)) >> 1) & UINT64_C(127)));
  /* 102fbc: sub x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* 102fc0: csel x8, x8, x11, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 11)));
  /* 102fc4: tst x9, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(1)));
  /* 102fc8: csel x10, x12, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* 102fcc: subs x1, x8, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10)));
  /* 102fd0: b.ls #0x102fe4 */
  if (ARC_COND(c, 9)) goto L_102fe4;
  /* 102fd4: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 102fd8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 102fdc: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1060832));
  fn1_142d10(c);
  /* 102fe0: b #0x103004 */
  goto L_103004;
L_102fe4:;
  /* 102fe4: tbnz w9, #0, #0x102ff8 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_102ff8;
  /* 102fe8: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* 102fec: sturb w9, [x29, #-0x60] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-96)), ARC_W_R(c, 9));
  /* 102ff0: mov x9, x28 */
  ARC_X_W(c, 9, ARC_X_R(c, 28));
  /* 102ff4: b #0x103000 */
  goto L_103000;
L_102ff8:;
  /* 102ff8: ldr x9, [x25, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 25) + INT64_C(24))));
  /* 102ffc: str x8, [x25, #0x10] */
  arc_st64((ARC_X_R(c, 25) + INT64_C(16)), ARC_X_R(c, 8));
L_103000:;
  /* 103000: strb wzr, [x9, x8] */
  arc_st8((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_W_R(c, 31));
L_103004:;
  /* 103004: ldurb w8, [x29, #-0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 103008: ldr x9, [x25, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 25) + INT64_C(24))));
  /* 10300c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 103010: csel x23, x28, x9, eq */
  ARC_X_W(c, 23, (ARC_COND(c, 0) ? (ARC_X_R(c, 28)) : ARC_X_R(c, 9)));
  /* 103014: add x8, x23, x24 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) + ARC_X_R(c, 24)));
  /* 103018: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
L_10301c:;
  /* 10301c: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 103020: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 103024: b.eq #0x103030 */
  if (ARC_COND(c, 0)) goto L_103030;
  /* 103028: ldrb w0, [x8] */
  ARC_W_W(c, 0, arc_ld8(ARC_X_R(c, 8)));
  /* 10302c: b #0x103040 */
  goto L_103040;
L_103030:;
  /* 103030: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 103034: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 103038: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 10303c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1060928));
  arc_dispatch(c, ARC_X_R(c, 8));
L_103040:;
  /* 103040: ldurb w6, [x29, #-0x2c] */
  ARC_W_W(c, 6, arc_ld8((ARC_X_R(c, 29) + INT64_C(-44))));
  /* 103044: ldurb w5, [x29, #-0x28] */
  ARC_W_W(c, 5, arc_ld8((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 103048: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* 10304c: sub x8, x29, #0x24 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(36)));
  /* 103050: add x2, sp, #0x34 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(52)));
  /* 103054: sub x4, x29, #0x68 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(104)));
  /* 103058: sub x7, x29, #0x48 */
  ARC_X_W(c, 7, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 10305c: mov x3, x23 */
  ARC_X_W(c, 3, ARC_X_R(c, 23));
  /* 103060: stp x22, x8, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 103064: stp x27, x19, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 27));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 103068: bl #0x1438b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1060972));
  fn1_1438b0(c);
  /* 10306c: cbnz w0, #0x10311c */
  if ((ARC_W_R(c, 0)) != 0) goto L_10311c;
  /* 103070: tbz w26, #0, #0x10307c */
  if (((ARC_W_R(c, 26)) >> 0 & 1) == 0) goto L_10307c;
  /* 103074: mov w26, #1 */
  ARC_W_W(c, 26, UINT64_C(1));
  /* 103078: b #0x1030dc */
  goto L_1030dc;
L_10307c:;
  /* 10307c: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 103080: sub x9, x8, x23 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - ARC_X_R(c, 23)));
  /* 103084: cmp x9, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(1));
  /* 103088: b.lt #0x1030d8 */
  if (ARC_COND(c, 11)) goto L_1030d8;
  /* 10308c: ldrb w8, [x23] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 23)));
  /* 103090: cmp w8, #0x2b */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(43));
  /* 103094: b.eq #0x1030a0 */
  if (ARC_COND(c, 0)) goto L_1030a0;
  /* 103098: cmp w8, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(45));
  /* 10309c: b.ne #0x1030fc */
  if (ARC_COND(c, 1)) goto L_1030fc;
L_1030a0:;
  /* 1030a0: cmp x9, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(1));
  /* 1030a4: b.eq #0x1030d8 */
  if (ARC_COND(c, 0)) goto L_1030d8;
  /* 1030a8: cmp w8, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(45));
  /* 1030ac: b.eq #0x1030b8 */
  if (ARC_COND(c, 0)) goto L_1030b8;
  /* 1030b0: cmp w8, #0x2b */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(43));
  /* 1030b4: b.ne #0x1030d8 */
  if (ARC_COND(c, 1)) goto L_1030d8;
L_1030b8:;
  /* 1030b8: ldrb w8, [x23, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 23) + INT64_C(1))));
  /* 1030bc: mov w26, #1 */
  ARC_W_W(c, 26, UINT64_C(1));
  /* 1030c0: cmp w8, #0x2e */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(46));
  /* 1030c4: b.eq #0x1030dc */
  if (ARC_COND(c, 0)) goto L_1030dc;
  /* 1030c8: sub w8, w8, #0x30 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* 1030cc: cmp w8, #9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(9));
  /* 1030d0: b.ls #0x1030dc */
  if (ARC_COND(c, 9)) goto L_1030dc;
  /* 1030d4: b #0x10311c */
  goto L_10311c;
L_1030d8:;
  /* 1030d8: mov w26, wzr */
  ARC_W_W(c, 26, ARC_W_R(c, 31));
L_1030dc:;
  /* 1030dc: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1030e0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1030e4: b.ne #0x102e84 */
  if (ARC_COND(c, 1)) goto L_102e84;
  /* 1030e8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1030ec: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 1030f0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1030f4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1061112));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1030f8: b #0x102e8c */
  goto L_102e8c;
L_1030fc:;
  /* 1030fc: cmp w8, #0x2e */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(46));
  /* 103100: mov w26, #1 */
  ARC_W_W(c, 26, UINT64_C(1));
  /* 103104: b.eq #0x1030dc */
  if (ARC_COND(c, 0)) goto L_1030dc;
  /* 103108: sub w8, w8, #0x30 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* 10310c: cmp w8, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(10));
  /* 103110: b.lo #0x1030dc */
  if (ARC_COND(c, 3)) goto L_1030dc;
  /* 103114: b #0x10311c */
  goto L_10311c;
L_103118:;
  /* 103118: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
L_10311c:;
  /* 10311c: ldurb w8, [x29, #-0x48] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-72))));
  /* 103120: ldr x9, [x25, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 25) + INT64_C(40))));
  /* 103124: ldr x22, [sp, #0x28] */
  ARC_X_W(c, 22, arc_ld64(((c)->sp + INT64_C(40))));
  /* 103128: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 10312c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 103130: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 103134: cbz x8, #0x103164 */
  if ((ARC_X_R(c, 8)) == 0) goto L_103164;
  /* 103138: ldrb w8, [sp, #0x38] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(56))));
  /* 10313c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 103140: b.ne #0x103164 */
  if (ARC_COND(c, 1)) goto L_103164;
  /* 103144: ldr x8, [sp, #0x40] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(64))));
  /* 103148: add x9, sp, #0x48 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(72)));
  /* 10314c: sub x9, x8, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* 103150: cmp x9, #0x9f */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(159));
  /* 103154: b.gt #0x103164 */
  if (ARC_COND(c, 12)) goto L_103164;
  /* 103158: ldr w9, [sp, #0x3c] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(60))));
  /* 10315c: str w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 9));
  }
  /* 103160: str x8, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 8));
L_103164:;
  /* 103164: ldr x1, [x25] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 25)));
  /* 103168: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 10316c: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 103170: bl #0x136244 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1061236));
  fn1_136244(c);
  /* 103174: ldurb w10, [x29, #-0x48] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-72))));
  /* 103178: ldr x12, [sp, #0x40] */
  ARC_X_W(c, 12, arc_ld64(((c)->sp + INT64_C(64))));
  /* 10317c: add x11, sp, #0x48 */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(72)));
  /* 103180: ldr x8, [x25, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(40))));
  /* 103184: lsr x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* 103188: ands w13, w10, #1 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 13, _r); }
  /* 10318c: sub x11, x12, x11 */
  ARC_X_W(c, 11, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* 103190: csel x8, x9, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 103194: ldr x9, [sp, #0x20] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(32))));
  /* 103198: cmp x11, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(5));
  /* 10319c: str d0, [x9] */
  arc_st64(ARC_X_R(c, 9), (c)->q[0].u64[0]);
  /* 1031a0: b.lt #0x103300 */
  if (ARC_COND(c, 11)) goto L_103300;
  /* 1031a4: cbz x8, #0x103300 */
  if ((ARC_X_R(c, 8)) == 0) goto L_103300;
  /* 1031a8: sub x8, x12, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 12) - UINT64_C(4)));
  /* 1031ac: add x9, sp, #0x48 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(72)));
  /* 1031b0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 1031b4: cset w11, lo */
  ARC_W_W(c, 11, (ARC_COND(c, 3) ? 1 : 0));
  /* 1031b8: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* 1031bc: b.eq #0x10326c */
  if (ARC_COND(c, 0)) goto L_10326c;
  /* 1031c0: cbz w11, #0x10326c */
  if ((ARC_W_R(c, 11)) == 0) goto L_10326c;
  /* 1031c4: add x10, sp, #0x48 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(72)));
  /* 1031c8: sub x14, x12, #8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) - UINT64_C(8)));
  /* 1031cc: add x11, x10, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 1031d0: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 1031d4: csel x13, x14, x11, hi */
  ARC_X_W(c, 13, (ARC_COND(c, 8) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* 1031d8: sub x13, x13, #4 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(4)));
  /* 1031dc: cmp x13, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 10));
  /* 1031e0: cinc x15, x10, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
  /* 1031e4: cmp x13, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 10));
  /* 1031e8: sub x15, x13, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) - ARC_X_R(c, 15)));
  /* 1031ec: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* 1031f0: cinc x13, x15, ne */
  ARC_X_W(c, 13, (ARC_COND(c, 1) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* 1031f4: cmp x13, #0x13 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(19));
  /* 1031f8: b.lo #0x103240 */
  if (ARC_COND(c, 3)) goto L_103240;
  /* 1031fc: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 103200: csel x14, x14, x11, hi */
  ARC_X_W(c, 14, (ARC_COND(c, 8) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* 103204: sub x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(4)));
  /* 103208: cmp x14, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 10));
  /* 10320c: cinc x15, x10, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
  /* 103210: cmp x14, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 10));
  /* 103214: sub x15, x14, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 14) - ARC_X_R(c, 15)));
  /* 103218: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* 10321c: cinc x14, x15, ne */
  ARC_X_W(c, 14, (ARC_COND(c, 1) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* 103220: cmp x10, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 12));
  /* 103224: b.hs #0x103390 */
  if (ARC_COND(c, 2)) goto L_103390;
  /* 103228: lsl x14, x14, #2 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(2)) & 63)));
  /* 10322c: sub x15, x12, x14 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ARC_X_R(c, 14)));
  /* 103230: add x11, x11, x14 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ARC_X_R(c, 14)));
  /* 103234: sub x14, x15, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) - UINT64_C(4)));
  /* 103238: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 10323c: b.hs #0x103390 */
  if (ARC_COND(c, 2)) goto L_103390;
L_103240:;
  /* 103240: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
L_103244:;
  /* 103244: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
L_103248:;
  /* 103248: ldr w12, [x11] */
  ARC_W_W(c, 12, arc_ld32(ARC_X_R(c, 11)));
  /* 10324c: ldur w13, [x10, #-4] */
  ARC_W_W(c, 13, arc_ld32((ARC_X_R(c, 10) + INT64_C(-4))));
  /* 103250: stur w12, [x10, #-4] */
  arc_st32((ARC_X_R(c, 10) + INT64_C(-4)), ARC_W_R(c, 12));
  /* 103254: str w13, [x11], #0xfffffffffffffffc */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(-4));
    arc_st32(_a, ARC_W_R(c, 13));
  }
  /* 103258: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 10325c: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 103260: b.lo #0x103248 */
  if (ARC_COND(c, 3)) goto L_103248;
L_103264:;
  /* 103264: ldurb w10, [x29, #-0x48] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-72))));
  /* 103268: and w13, w10, #1 */
  ARC_W_W(c, 13, (ARC_W_R(c, 10) & UINT64_C(1)));
L_10326c:;
  /* 10326c: ldr x11, [x25, #0x30] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 25) + INT64_C(48))));
  /* 103270: cmp w13, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(0));
  /* 103274: sub x12, x29, #0x48 */
  ARC_X_W(c, 12, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 103278: csinc x11, x11, x12, ne */
  ARC_X_W(c, 11, (ARC_COND(c, 1) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 12)) + 1)));
  /* 10327c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 103280: b.hs #0x1032d8 */
  if (ARC_COND(c, 2)) goto L_1032d8;
  /* 103284: lsr w9, w10, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 10)) >> ((UINT64_C(1)) & 31)));
  /* 103288: ldr x10, [x25, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 25) + INT64_C(40))));
  /* 10328c: cmp w13, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(0));
  /* 103290: csel x9, x9, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* 103294: add x10, sp, #0x48 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(72)));
  /* 103298: add x9, x11, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) + ARC_X_R(c, 9)));
  /* 10329c: b #0x1032b8 */
  goto L_1032b8;
L_1032a0:;
  /* 1032a0: sub x12, x9, x11 */
  ARC_X_W(c, 12, (ARC_X_R(c, 9) - ARC_X_R(c, 11)));
  /* 1032a4: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 1032a8: cmp x12, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(1));
  /* 1032ac: cinc x11, x11, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 11)) + 1 : (ARC_X_R(c, 11))));
  /* 1032b0: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* 1032b4: b.hs #0x1032d8 */
  if (ARC_COND(c, 2)) goto L_1032d8;
L_1032b8:;
  /* 1032b8: ldrb w12, [x11] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 11)));
  /* 1032bc: cbz w12, #0x1032a0 */
  if ((ARC_W_R(c, 12)) == 0) goto L_1032a0;
  /* 1032c0: cmp w12, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(255));
  /* 1032c4: b.eq #0x1032a0 */
  if (ARC_COND(c, 0)) goto L_1032a0;
  /* 1032c8: ldr w13, [x10] */
  ARC_W_W(c, 13, arc_ld32(ARC_X_R(c, 10)));
  /* 1032cc: cmp w13, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 12));
  /* 1032d0: b.eq #0x1032a0 */
  if (ARC_COND(c, 0)) goto L_1032a0;
  /* 1032d4: b #0x1032f8 */
  goto L_1032f8;
L_1032d8:;
  /* 1032d8: ldrb w9, [x11] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 11)));
  /* 1032dc: cbz w9, #0x103300 */
  if ((ARC_W_R(c, 9)) == 0) goto L_103300;
  /* 1032e0: cmp w9, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(255));
  /* 1032e4: b.eq #0x103300 */
  if (ARC_COND(c, 0)) goto L_103300;
  /* 1032e8: ldr w8, [x8] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 8)));
  /* 1032ec: sub w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* 1032f0: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* 1032f4: b.lo #0x103300 */
  if (ARC_COND(c, 3)) goto L_103300;
L_1032f8:;
  /* 1032f8: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 1032fc: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_103300:;
  /* 103300: cbz x20, #0x103328 */
  if ((ARC_X_R(c, 20)) == 0) goto L_103328;
  /* 103304: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 103308: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 10330c: b.eq #0x103344 */
  if (ARC_COND(c, 0)) goto L_103344;
  /* 103310: cbz x21, #0x103430 */
  if ((ARC_X_R(c, 21)) == 0) goto L_103430;
  /* 103314: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 103318: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 10331c: b.ne #0x103424 */
  if (ARC_COND(c, 1)) goto L_103424;
  /* 103320: mov w19, wzr */
  ARC_W_W(c, 19, ARC_W_R(c, 31));
  /* 103324: b #0x103404 */
  goto L_103404;
L_103328:;
  /* 103328: cbz x21, #0x103388 */
  if ((ARC_X_R(c, 21)) == 0) goto L_103388;
  /* 10332c: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 103330: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 103334: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 103338: b.ne #0x103430 */
  if (ARC_COND(c, 1)) goto L_103430;
  /* 10333c: mov w19, #1 */
  ARC_W_W(c, 19, UINT64_C(1));
  /* 103340: b #0x103404 */
  goto L_103404;
L_103344:;
  /* 103344: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 103348: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 10334c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 103350: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1061716));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 103354: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 103358: cset w19, eq */
  ARC_W_W(c, 19, (ARC_COND(c, 0) ? 1 : 0));
  /* 10335c: cbz x21, #0x103380 */
  if ((ARC_X_R(c, 21)) == 0) goto L_103380;
  /* 103360: ldp x9, x10, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 103364: csel x8, xzr, x20, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 20)));
  /* 103368: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 10336c: b.eq #0x103400 */
  if (ARC_COND(c, 0)) goto L_103400;
  /* 103370: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 103374: b.ne #0x103424 */
  if (ARC_COND(c, 1)) goto L_103424;
  /* 103378: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 10337c: b #0x103430 */
  goto L_103430;
L_103380:;
  /* 103380: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 103384: b.ne #0x103430 */
  if (ARC_COND(c, 1)) goto L_103430;
L_103388:;
  /* 103388: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 10338c: b #0x103424 */
  goto L_103424;
L_103390:;
  /* 103390: add x13, x13, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(1)));
  /* 103394: add x15, sp, #0x48 */
  ARC_X_W(c, 15, ((c)->sp + UINT64_C(72)));
  /* 103398: sub x12, x12, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(16)));
  /* 10339c: and x14, x13, #0x7ffffffffffffff8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 13) & UINT64_C(9223372036854775800)));
  /* 1033a0: lsl x10, x14, #2 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(2)) & 63)));
  /* 1033a4: mov x16, x14 */
  ARC_X_W(c, 16, ARC_X_R(c, 14));
  /* 1033a8: sub x11, x8, x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) - ARC_X_R(c, 10)));
  /* 1033ac: add x10, x15, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 15) + ARC_X_R(c, 10)));
  /* 1033b0: add x15, x15, #0x10 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(16)));
L_1033b4:;
  /* 1033b4: ldp q1, q0, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 1033b8: sub x16, x16, #8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) - UINT64_C(8)));
  /* 1033bc: ldp q2, q3, [x15, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 15) + INT64_C(-16));
    arc_q_w(c, 2, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 3, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 1033c0: rev64 v0.4s, v0.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[0].u32[1];
    _t.u32[1] = (c)->q[0].u32[0];
    _t.u32[2] = (c)->q[0].u32[3];
    _t.u32[3] = (c)->q[0].u32[2];
    (c)->q[0] = _t; }
  /* 1033c4: rev64 v1.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[1].u32[1];
    _t.u32[1] = (c)->q[1].u32[0];
    _t.u32[2] = (c)->q[1].u32[3];
    _t.u32[3] = (c)->q[1].u32[2];
    (c)->q[1] = _t; }
  /* 1033c8: rev64 v2.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[2].u32[1];
    _t.u32[1] = (c)->q[2].u32[0];
    _t.u32[2] = (c)->q[2].u32[3];
    _t.u32[3] = (c)->q[2].u32[2];
    (c)->q[2] = _t; }
  /* 1033cc: rev64 v3.4s, v3.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[3].u32[1];
    _t.u32[1] = (c)->q[3].u32[0];
    _t.u32[2] = (c)->q[3].u32[3];
    _t.u32[3] = (c)->q[3].u32[2];
    (c)->q[3] = _t; }
  /* 1033d0: ext v0.16b, v0.16b, v0.16b, #8 */
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
  /* 1033d4: ext v1.16b, v1.16b, v1.16b, #8 */
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
  /* 1033d8: ext v2.16b, v2.16b, v2.16b, #8 */
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
  /* 1033dc: ext v3.16b, v3.16b, v3.16b, #8 */
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
  /* 1033e0: stp q0, q1, [x15, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 15) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 1033e4: add x15, x15, #0x20 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(32)));
  /* 1033e8: stp q3, q2, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_st64(_pa, (c)->q[3].u64[0]);
    arc_st64(_pa + 8, (c)->q[3].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* 1033ec: sub x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(32)));
  /* 1033f0: cbnz x16, #0x1033b4 */
  if ((ARC_X_R(c, 16)) != 0) goto L_1033b4;
  /* 1033f4: cmp x13, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 14));
  /* 1033f8: b.eq #0x103264 */
  if (ARC_COND(c, 0)) goto L_103264;
  /* 1033fc: b #0x103244 */
  goto L_103244;
L_103400:;
  /* 103400: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
L_103404:;
  /* 103404: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 103408: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 10340c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 103410: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1061908));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 103414: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 103418: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 10341c: eor w8, w19, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 19) ^ ARC_W_R(c, 8)));
  /* 103420: tbnz w8, #0, #0x103430 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_103430;
L_103424:;
  /* 103424: ldr w8, [x22] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 22)));
  /* 103428: orr w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(2)));
  /* 10342c: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_103430:;
  /* 103430: ldurb w8, [x29, #-0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 103434: tbz w8, #0, #0x103448 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_103448;
  /* 103438: ldr x8, [x25, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(8))));
  /* 10343c: ldr x0, [x25, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 25) + INT64_C(24))));
  /* 103440: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 103444: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1061960));
  fn1_142608(c);
L_103448:;
  /* 103448: ldurb w8, [x29, #-0x48] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-72))));
  /* 10344c: tbz w8, #0, #0x103460 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_103460;
  /* 103450: ldr x8, [x25, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(32))));
  /* 103454: ldr x0, [x25, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 25) + INT64_C(48))));
  /* 103458: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 10345c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1061984));
  fn1_142608(c);
L_103460:;
  /* 103460: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 103464: ldp x20, x19, [sp, #0x1a0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(416));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 103468: ldp x22, x21, [sp, #0x190] */
  { const uint64_t _pa = ((c)->sp + INT64_C(400));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 10346c: ldp x24, x23, [sp, #0x180] */
  { const uint64_t _pa = ((c)->sp + INT64_C(384));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 103470: ldp x26, x25, [sp, #0x170] */
  { const uint64_t _pa = ((c)->sp + INT64_C(368));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 103474: ldp x28, x27, [sp, #0x160] */
  { const uint64_t _pa = ((c)->sp + INT64_C(352));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 103478: ldp x29, x30, [sp, #0x150] */
  { const uint64_t _pa = ((c)->sp + INT64_C(336));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 10347c: add sp, sp, #0x1b0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(432)));
  /* 103480: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 103484: ret  */
  return;
L_103488:;
  /* 103488: mov x20, x21 */
  ARC_X_W(c, 20, ARC_X_R(c, 21));
  /* 10348c: b #0x10311c */
  goto L_10311c;
  /* 103490: b #0x10349c */
  goto L_10349c;
  /* 103494: b #0x10349c */
  goto L_10349c;
  /* 103498: b #0x10349c */
  goto L_10349c;
L_10349c:;
  /* 10349c: ldurb w8, [x29, #-0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 1034a0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1034a4: tbnz w8, #0, #0x1034b8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1034b8;
  /* 1034a8: ldurb w8, [x29, #-0x48] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-72))));
  /* 1034ac: tbnz w8, #0, #0x1034d0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1034d0;
L_1034b0:;
  /* 1034b0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1034b4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1062072));
  fn1_9cc20(c);
L_1034b8:;
  /* 1034b8: ldr x8, [x25, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(8))));
  /* 1034bc: ldr x0, [x25, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 25) + INT64_C(24))));
  /* 1034c0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1034c4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1062088));
  fn1_142608(c);
  /* 1034c8: ldurb w8, [x29, #-0x48] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-72))));
  /* 1034cc: tbz w8, #0, #0x1034b0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1034b0;
L_1034d0:;
  /* 1034d0: ldr x8, [x25, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(32))));
  /* 1034d4: ldr x0, [x25, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 25) + INT64_C(48))));
  /* 1034d8: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1034dc: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1062112));
  fn1_142608(c);
  /* 1034e0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1034e4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1062120));
  fn1_9cc20(c);
}

void fn1_1107a4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039044004));
  /* 1107a4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1107a8: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1107ac: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* 1107b0: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1107b4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1107b8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1107bc: mov x22, x4 */
  ARC_X_W(c, 22, ARC_X_R(c, 4));
  /* 1107c0: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* 1107c4: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 1107c8: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 1107cc: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 1107d0: cbnz x0, #0x1107e8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_1107e8;
  /* 1107d4: b #0x110840 */
  goto L_110840;
L_1107d8:;
  /* 1107d8: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 1107dc: str x8, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 8));
  /* 1107e0: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 1107e4: cbz x0, #0x110840 */
  if ((ARC_X_R(c, 0)) == 0) goto L_110840;
L_1107e8:;
  /* 1107e8: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1107ec: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1107f0: b.eq #0x11080c */
  if (ARC_COND(c, 0)) goto L_11080c;
  /* 1107f4: cbz x20, #0x110888 */
  if ((ARC_X_R(c, 20)) == 0) goto L_110888;
  /* 1107f8: ldp x10, x11, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* 1107fc: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 110800: b.ne #0x1108f4 */
  if (ARC_COND(c, 1)) goto L_1108f4;
  /* 110804: mov w23, wzr */
  ARC_W_W(c, 23, ARC_W_R(c, 31));
  /* 110808: b #0x11085c */
  goto L_11085c;
L_11080c:;
  /* 11080c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 110810: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 110814: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1116184));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 110818: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 11081c: b.eq #0x110838 */
  if (ARC_COND(c, 0)) goto L_110838;
  /* 110820: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 110824: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* 110828: cset w23, eq */
  ARC_W_W(c, 23, (ARC_COND(c, 0) ? 1 : 0));
  /* 11082c: cbnz x20, #0x110848 */
  if ((ARC_X_R(c, 20)) != 0) goto L_110848;
L_110830:;
  /* 110830: tbz w23, #0, #0x110888 */
  if (((ARC_W_R(c, 23)) >> 0 & 1) == 0) goto L_110888;
  /* 110834: b #0x1108ec */
  goto L_1108ec;
L_110838:;
  /* 110838: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 11083c: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
L_110840:;
  /* 110840: mov w23, #1 */
  ARC_W_W(c, 23, UINT64_C(1));
  /* 110844: cbz x20, #0x110830 */
  if ((ARC_X_R(c, 20)) == 0) goto L_110830;
L_110848:;
  /* 110848: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11084c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 110850: b.eq #0x11085c */
  if (ARC_COND(c, 0)) goto L_11085c;
  /* 110854: tbnz w23, #0, #0x110888 */
  if (((ARC_W_R(c, 23)) >> 0 & 1) != 0) goto L_110888;
  /* 110858: b #0x1108ec */
  goto L_1108ec;
L_11085c:;
  /* 11085c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 110860: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 110864: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 110868: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1116268));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11086c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 110870: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 110874: cmn w8, #1 */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(1), 0);
  /* 110878: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 11087c: csel x20, xzr, x20, eq */
  ARC_X_W(c, 20, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 20)));
  /* 110880: cmp w23, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 23), ARC_W_R(c, 8));
  /* 110884: b.eq #0x1108ec */
  if (ARC_COND(c, 0)) goto L_1108ec;
L_110888:;
  /* 110888: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11088c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 110890: b.eq #0x1108a0 */
  if (ARC_COND(c, 0)) goto L_1108a0;
  /* 110894: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 110898: tbz w8, #7, #0x1108b4 */
  if (((ARC_W_R(c, 8)) >> 7 & 1) == 0) goto L_1108b4;
  /* 11089c: b #0x1108e8 */
  goto L_1108e8;
L_1108a0:;
  /* 1108a0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1108a4: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1108a8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1116332));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1108ac: and x8, x0, #0xff */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) & UINT64_C(255)));
  /* 1108b0: tbnz w8, #7, #0x1108e8 */
  if (((ARC_W_R(c, 8)) >> 7 & 1) != 0) goto L_1108e8;
L_1108b4:;
  /* 1108b4: ldr x9, [x22, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 1108b8: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 1108bc: ldr x8, [x9, x8, lsl #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 3))));
  /* 1108c0: tbz w8, #0, #0x1108ec */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1108ec;
  /* 1108c4: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1108c8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1108cc: b.ne #0x1107d8 */
  if (ARC_COND(c, 1)) goto L_1107d8;
  /* 1108d0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1108d4: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 1108d8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1116380));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1108dc: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 1108e0: cbnz x0, #0x1107e8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_1107e8;
  /* 1108e4: b #0x110840 */
  goto L_110840;
L_1108e8:;
  /* 1108e8: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
L_1108ec:;
  /* 1108ec: cbz x0, #0x110944 */
  if ((ARC_X_R(c, 0)) == 0) goto L_110944;
  /* 1108f0: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
L_1108f4:;
  /* 1108f4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1108f8: b.eq #0x110914 */
  if (ARC_COND(c, 0)) goto L_110914;
  /* 1108fc: cbz x20, #0x11098c */
  if ((ARC_X_R(c, 20)) == 0) goto L_11098c;
  /* 110900: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 110904: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 110908: b.ne #0x110980 */
  if (ARC_COND(c, 1)) goto L_110980;
  /* 11090c: mov w21, wzr */
  ARC_W_W(c, 21, ARC_W_R(c, 31));
  /* 110910: b #0x110960 */
  goto L_110960;
L_110914:;
  /* 110914: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 110918: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 11091c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1116448));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 110920: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 110924: b.eq #0x110940 */
  if (ARC_COND(c, 0)) goto L_110940;
  /* 110928: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11092c: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 110930: cset w21, eq */
  ARC_W_W(c, 21, (ARC_COND(c, 0) ? 1 : 0));
  /* 110934: cbnz x20, #0x11094c */
  if ((ARC_X_R(c, 20)) != 0) goto L_11094c;
L_110938:;
  /* 110938: tbnz w21, #0, #0x110980 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) != 0) goto L_110980;
  /* 11093c: b #0x11098c */
  goto L_11098c;
L_110940:;
  /* 110940: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
L_110944:;
  /* 110944: mov w21, #1 */
  ARC_W_W(c, 21, UINT64_C(1));
  /* 110948: cbz x20, #0x110938 */
  if ((ARC_X_R(c, 20)) == 0) goto L_110938;
L_11094c:;
  /* 11094c: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 110950: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 110954: b.eq #0x110960 */
  if (ARC_COND(c, 0)) goto L_110960;
  /* 110958: tbz w21, #0, #0x110980 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) == 0) goto L_110980;
  /* 11095c: b #0x11098c */
  goto L_11098c;
L_110960:;
  /* 110960: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 110964: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 110968: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 11096c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1116528));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 110970: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 110974: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 110978: eor w8, w21, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 21) ^ ARC_W_R(c, 8)));
  /* 11097c: tbnz w8, #0, #0x11098c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_11098c;
L_110980:;
  /* 110980: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* 110984: orr w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(2)));
  /* 110988: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_11098c:;
  /* 11098c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 110990: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 110994: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 110998: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 11099c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1109a0: ret  */
  return;
}

void fn1_113d48(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057736));
  /* 113d48: bti c */
  /* bti: no architectural effect here */
  /* 113d4c: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* 113d50: ret  */
  return;
}

void fn1_11acd0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039086288));
  /* 11acd0: bti c */
  /* bti: no architectural effect here */
  /* 11acd4: ldrb w9, [x4] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 4)));
  /* 11acd8: tbnz w9, #0, #0x11acf0 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_11acf0;
  /* 11acdc: ldr q0, [x4] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 4)), arc_ld64(ARC_X_R(c, 4) + 8));
  /* 11ace0: ldr x9, [x4, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 4) + INT64_C(16))));
  /* 11ace4: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* 11ace8: str x9, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 9));
  /* 11acec: ret  */
  return;
L_11acf0:;
  /* 11acf0: ldp x2, x1, [x4, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 4) + INT64_C(8));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 11acf4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 11acf8: b #0xda588 */
  fn1_da588(c); return;
}

void fn1_1250e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039128296));
  /* 1250e8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1250ec: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 1250f0: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1250f4: str x23, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 23));
  /* 1250f8: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1250fc: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 125100: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 125104: nop  */
  /* nop: no architectural effect here */
  /* 125108: adr x9, #0x15dd90 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 12510c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 125110: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 125114: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 125118: tbz w9, #0, #0x125284 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_125284;
L_12511c:;
  /* 12511c: nop  */
  /* nop: no architectural effect here */
  /* 125120: adr x1, #0x15dd88 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1432968)));
  /* 125124: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 125128: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1200428));
  fn1_143460(c);
  /* 12512c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 125130: nop  */
  /* nop: no architectural effect here */
  /* 125134: adr x23, #0x15dc40 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1432640)));
  /* 125138: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* 12513c: b.eq #0x12514c */
  if (ARC_COND(c, 0)) goto L_12514c;
  /* 125140: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* 125144: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 125148: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1200460));
  fn1_db2e0(c);
L_12514c:;
  /* 12514c: adrp x22, #0x15d000 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 125150: ldr x21, [x22, #0xd88] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 22) + INT64_C(3464))));
  /* 125154: cmp x21, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 23));
  /* 125158: b.eq #0x12517c */
  if (ARC_COND(c, 0)) goto L_12517c;
  /* 12515c: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 125160: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 125164: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1200488));
  fn1_bd950(c);
  /* 125168: cbnz x0, #0x12517c */
  if ((ARC_X_R(c, 0)) != 0) goto L_12517c;
  /* 12516c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 125170: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 125174: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 125178: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1200508));
  arc_dispatch(c, ARC_X_R(c, 8));
L_12517c:;
  /* 12517c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 125180: ldrb w9, [x8, #0x120] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(288))));
  /* 125184: str x8, [x22, #0xd88] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(3464)), ARC_X_R(c, 8));
  /* 125188: tbnz w9, #0, #0x1251a0 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_1251a0;
  /* 12518c: ldr q0, [x8, #0x120] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(288))), arc_ld64((ARC_X_R(c, 8) + INT64_C(288)) + 8));
  /* 125190: ldr x8, [x8, #0x130] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(304))));
  /* 125194: str q0, [sp] */
  arc_st64((c)->sp, (c)->q[0].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[0].u64[1]);
  /* 125198: str x8, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 8));
  /* 12519c: b #0x1251ac */
  goto L_1251ac;
L_1251a0:;
  /* 1251a0: ldp x2, x1, [x8, #0x128] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(296));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 1251a4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1251a8: bl #0xda588 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1200556));
  fn1_da588(c);
L_1251ac:;
  /* 1251ac: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 1251b0: ldr x9, [sp, #8] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1251b4: ubfx w10, w8, #1, #7 */
  ARC_W_W(c, 10, (((uint32_t)(ARC_W_R(c, 8)) >> 1) & UINT64_C(127)));
  /* 1251b8: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1251bc: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 1251c0: cmp x9, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(1));
  /* 1251c4: b.ne #0x1251ec */
  if (ARC_COND(c, 1)) goto L_1251ec;
  /* 1251c8: ldr x9, [sp, #0x10] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1251cc: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1251d0: mov x10, sp */
  ARC_X_W(c, 10, (c)->sp);
  /* 1251d4: csinc x9, x9, x10, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 10)) + 1)));
  /* 1251d8: ldrb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 1251dc: cmp w9, #0x2a */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(42));
  /* 1251e0: cset w20, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? 1 : 0));
  /* 1251e4: tbnz w8, #0, #0x1251f4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1251f4;
  /* 1251e8: b #0x125204 */
  goto L_125204;
L_1251ec:;
  /* 1251ec: mov w20, wzr */
  ARC_W_W(c, 20, ARC_W_R(c, 31));
  /* 1251f0: tbz w8, #0, #0x125204 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_125204;
L_1251f4:;
  /* 1251f4: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 1251f8: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1251fc: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 125200: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1200644));
  fn1_142608(c);
L_125204:;
  /* 125204: tbnz w20, #0, #0x125268 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) != 0) goto L_125268;
  /* 125208: ldr x8, [x22, #0xd88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(3464))));
  /* 12520c: ldrb w9, [x8, #0x120] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(288))));
  /* 125210: tbnz w9, #0, #0x125228 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_125228;
  /* 125214: ldr q0, [x8, #0x120] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(288))), arc_ld64((ARC_X_R(c, 8) + INT64_C(288)) + 8));
  /* 125218: ldr x8, [x8, #0x130] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(304))));
  /* 12521c: str q0, [sp] */
  arc_st64((c)->sp, (c)->q[0].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[0].u64[1]);
  /* 125220: str x8, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 8));
  /* 125224: b #0x125234 */
  goto L_125234;
L_125228:;
  /* 125228: ldp x2, x1, [x8, #0x128] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(296));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 12522c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 125230: bl #0xda588 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1200692));
  fn1_da588(c);
L_125234:;
  /* 125234: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 125238: ldr x9, [sp, #0x10] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12523c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 125240: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* 125244: csinc x1, x9, x8, ne */
  ARC_X_W(c, 1, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* 125248: mov w0, #6 */
  ARC_W_W(c, 0, UINT64_C(6));
  /* 12524c: bl #0x1441f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1200720));
  fn1_1441f8(c);
  /* 125250: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 125254: tbz w8, #0, #0x125268 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_125268;
  /* 125258: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 12525c: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* 125260: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 125264: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1200744));
  fn1_142608(c);
L_125268:;
  /* 125268: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12526c: ldr x23, [sp, #0x30] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(48))));
  /* 125270: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 125274: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 125278: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 12527c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 125280: ret  */
  return;
L_125284:;
  /* 125284: nop  */
  /* nop: no architectural effect here */
  /* 125288: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 12528c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1200784));
  fn1_1424b8(c);
  /* 125290: cbz w0, #0x12511c */
  if ((ARC_W_R(c, 0)) == 0) goto L_12511c;
  /* 125294: bl #0x143ac0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1200792));
  fn1_143ac0(c);
  /* 125298: nop  */
  /* nop: no architectural effect here */
  /* 12529c: adr x0, #0x15dd88 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432968)));
  /* 1252a0: nop  */
  /* nop: no architectural effect here */
  /* 1252a4: adr x1, #0x15dd78 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1432952)));
  /* 1252a8: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1200812));
  fn1_143460(c);
  /* 1252ac: nop  */
  /* nop: no architectural effect here */
  /* 1252b0: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 1252b4: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1200824));
  fn1_1424d0(c);
  /* 1252b8: b #0x12511c */
  goto L_12511c;
  /* 1252bc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1252c0: nop  */
  /* nop: no architectural effect here */
  /* 1252c4: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 1252c8: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1200844));
  fn1_1424e8(c);
  /* 1252cc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1252d0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1200852));
  fn1_9cc20(c);
  /* 1252d4: b #0x1252f8 */
  goto L_1252f8;
  /* 1252d8: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 1252dc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1252e0: tbz w8, #0, #0x1252fc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1252fc;
  /* 1252e4: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 1252e8: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1252ec: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1252f0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1200884));
  fn1_142608(c);
  /* 1252f4: b #0x1252fc */
  goto L_1252fc;
L_1252f8:;
  /* 1252f8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_1252fc:;
  /* 1252fc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 125300: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1200900));
  fn1_143478(c);
  /* 125304: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 125308: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1200908));
  fn1_9cc20(c);
}

void fn1_127bf4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039139316));
  /* 127bf4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 127bf8: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 127bfc: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 127c00: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 127c04: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 127c08: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 127c0c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 127c10: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 127c14: cmp x1, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 2));
  /* 127c18: b.eq #0x127c6c */
  if (ARC_COND(c, 0)) goto L_127c6c;
  /* 127c1c: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* 127c20: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 127c24: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 127c28: b #0x127c3c */
  goto L_127c3c;
L_127c2c:;
  /* 127c2c: add x19, x19, #1 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* 127c30: str w23, [x20], #4 */
  { const uint64_t _a = ARC_X_R(c, 20);
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 23));
  }
  /* 127c34: cmp x19, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 21));
  /* 127c38: b.eq #0x127c6c */
  if (ARC_COND(c, 0)) goto L_127c6c;
L_127c3c:;
  /* 127c3c: ldr x0, [x22, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 127c40: ldrb w23, [x19] */
  ARC_W_W(c, 23, arc_ld8(ARC_X_R(c, 19)));
  /* 127c44: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1211464));
  fn1_1443c0(c);
  /* 127c48: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 127c4c: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* 127c50: mov w0, w23 */
  ARC_W_W(c, 0, ARC_W_R(c, 23));
  /* 127c54: bl #0x1443a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1211480));
  fn1_1443a8(c);
  /* 127c58: mov w23, w0 */
  ARC_W_W(c, 23, ARC_W_R(c, 0));
  /* 127c5c: cbz x24, #0x127c2c */
  if ((ARC_X_R(c, 24)) == 0) goto L_127c2c;
  /* 127c60: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 127c64: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1211496));
  fn1_1443c0(c);
  /* 127c68: b #0x127c2c */
  goto L_127c2c;
L_127c6c:;
  /* 127c6c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 127c70: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 127c74: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 127c78: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 127c7c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 127c80: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 127c84: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 127c88: ret  */
  return;
  /* 127c8c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1211536));
  fn1_a1454(c);
  /* 127c90: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 127c94: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 127c98: bl #0x135428 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1211548));
  fn1_135428(c);
  /* 127c9c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 127ca0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1211556));
  fn1_9cc20(c);
}

void fn1_129cd4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039147732));
  /* 129cd4: bti c */
  /* bti: no architectural effect here */
  /* 129cd8: ldr w8, [x0, #0x20] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(32))));
  /* 129cdc: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 129ce0: ldr x3, [x0, #0x18] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* 129ce4: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 129ce8: mov x2, x4 */
  ARC_X_W(c, 2, ARC_X_R(c, 4));
  /* 129cec: mov w4, w8 */
  ARC_W_W(c, 4, ARC_W_R(c, 8));
  /* 129cf0: b #0x1297d0 */
  fn1_1297d0(c); return;
}

void fn1_12b85c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039154780));
  /* 12b85c: bti c */
  /* bti: no architectural effect here */
  /* 12b860: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 12b864: ret  */
  return;
}

void fn1_12e034(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039164980));
  /* 12e034: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12e038: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12e03c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12e040: nop  */
  /* nop: no architectural effect here */
  /* 12e044: adr x8, #0x15dec8 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433288)));
  /* 12e048: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 12e04c: tbz w8, #0, #0x12e064 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12e064;
L_12e050:;
  /* 12e050: nop  */
  /* nop: no architectural effect here */
  /* 12e054: adr x0, #0x156d78 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1404280)));
  /* 12e058: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12e05c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12e060: ret  */
  return;
L_12e064:;
  /* 12e064: nop  */
  /* nop: no architectural effect here */
  /* 12e068: adr x0, #0x15dec8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433288)));
  /* 12e06c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1237104));
  fn1_1424b8(c);
  /* 12e070: cbz w0, #0x12e050 */
  if ((ARC_W_R(c, 0)) == 0) goto L_12e050;
  /* 12e074: adrp x0, #0x151000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 12e078: nop  */
  /* nop: no architectural effect here */
  /* 12e07c: adr x1, #0x156d78 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1404280)));
  /* 12e080: ldr x0, [x0, #0xa40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(2624))));
  /* 12e084: nop  */
  /* nop: no architectural effect here */
  /* 12e088: adr x2, #0x148af8 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1346296)));
  /* 12e08c: bl #0x1423f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1237136));
  fn1_1423f8(c);
  /* 12e090: nop  */
  /* nop: no architectural effect here */
  /* 12e094: adr x0, #0x15dec8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433288)));
  /* 12e098: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1237148));
  fn1_1424d0(c);
  /* 12e09c: b #0x12e050 */
  goto L_12e050;
}

void fn1_134a90(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192208));
  /* 134a90: bti c */
  /* bti: no architectural effect here */
  /* 134a94: add x0, x0, #0x160 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(352)));
  /* 134a98: ret  */
  return;
}

void fn1_1357a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039195552));
  /* 1357a0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1357a4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1357a8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1357ac: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1357b0: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* 1357b4: ldp x11, x9, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1357b8: add x10, x0, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 0) + UINT64_C(4)));
  /* 1357bc: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1357c0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1357c4: lsr x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 1357c8: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 1357cc: sub x9, x1, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) - ARC_X_R(c, 9)));
  /* 1357d0: csel x8, x8, x11, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 11)));
  /* 1357d4: asr x1, x9, #2 */
  ARC_X_W(c, 1, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(2)) & 63))));
  /* 1357d8: cmp x1, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 8));
  /* 1357dc: b.hi #0x1357fc */
  if (ARC_COND(c, 8)) goto L_1357fc;
  /* 1357e0: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 1357e4: bl #0xe3680 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1267688));
  fn1_e3680(c);
  /* 1357e8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1357ec: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1357f0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1357f4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1357f8: ret  */
  return;
L_1357fc:;
  /* 1357fc: bl #0xe1f80 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1267712));
  fn1_e1f80(c);
}

void fn1_1388e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039208168));
  /* 1388e8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1388ec: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 1388f0: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1388f4: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1388f8: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1388fc: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 138900: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 138904: mov x9, x1 */
  ARC_X_W(c, 9, ARC_X_R(c, 1));
  /* 138908: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 13890c: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 138910: cbz x3, #0x13891c */
  if ((ARC_X_R(c, 3)) == 0) goto L_13891c;
  /* 138914: ldr q0, [x20] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 20)), arc_ld64(ARC_X_R(c, 20) + 8));
  /* 138918: str q0, [x3] */
  arc_st64(ARC_X_R(c, 3), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 3) + 8, (c)->q[0].u64[1]);
L_13891c:;
  /* 13891c: ldr w1, [x20] */
  ARC_W_W(c, 1, arc_ld32(ARC_X_R(c, 20)));
  /* 138920: cbz w1, #0x138a24 */
  if ((ARC_W_R(c, 1)) == 0) goto L_138a24;
  /* 138924: nop  */
  /* nop: no architectural effect here */
  /* 138928: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13892c: mov x23, x2 */
  ARC_X_W(c, 23, ARC_X_R(c, 2));
  /* 138930: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 138934: mov x21, x9 */
  ARC_X_W(c, 21, ARC_X_R(c, 9));
  /* 138938: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* 13893c: tbz w8, #0, #0x138a7c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_138a7c;
L_138940:;
  /* 138940: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
  /* 138944: nop  */
  /* nop: no architectural effect here */
  /* 138948: adr x24, #0x156d38 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13894c: ldr x0, [x20, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* 138950: stp x8, x24, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 24));
  }
  /* 138954: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 138958: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 13895c: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 138960: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1280356));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 138964: tbnz w0, #0, #0x1389c4 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_1389c4;
  /* 138968: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 13896c: ldr w2, [sp] */
  ARC_W_W(c, 2, arc_ld32((c)->sp));
  /* 138970: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 138974: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 138978: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* 13897c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1280384));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 138980: tbnz w0, #0, #0x1389c4 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_1389c4;
  /* 138984: mov w8, #0x14 */
  ARC_W_W(c, 8, UINT64_C(20));
  /* 138988: ldr x0, [x20, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* 13898c: ldr w1, [x20] */
  ARC_W_W(c, 1, arc_ld32(ARC_X_R(c, 20)));
  /* 138990: stp x8, x24, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 24));
  }
  /* 138994: sub x2, x29, #0x10 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 138998: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 13899c: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 1389a0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1280420));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1389a4: tbnz w0, #0, #0x1389c4 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_1389c4;
  /* 1389a8: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 1389ac: ldur w2, [x29, #-0x10] */
  ARC_W_W(c, 2, arc_ld32((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 1389b0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1389b4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1389b8: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* 1389bc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1280448));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1389c0: tbz w0, #0, #0x1389d8 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_1389d8;
L_1389c4:;
  /* 1389c4: mov w8, #0xff */
  ARC_W_W(c, 8, UINT64_C(255));
  /* 1389c8: mov w9, #0xffff */
  ARC_W_W(c, 9, UINT64_C(65535));
  /* 1389cc: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 1389d0: str w9, [x19, #4] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(4)), ARC_W_R(c, 9));
  /* 1389d4: b #0x138a60 */
  goto L_138a60;
L_1389d8:;
  /* 1389d8: ldr w8, [x20] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 20)));
  /* 1389dc: mov x2, x23 */
  ARC_X_W(c, 2, ARC_X_R(c, 23));
  /* 1389e0: cbz w8, #0x138a24 */
  if ((ARC_W_R(c, 8)) == 0) goto L_138a24;
  /* 1389e4: nop  */
  /* nop: no architectural effect here */
  /* 1389e8: adr x8, #0x5105d */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(331869)));
  /* 1389ec: stp x21, xzr, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1389f0: stp x8, x22, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* 1389f4: cbz x22, #0x138a04 */
  if ((ARC_X_R(c, 22)) == 0) goto L_138a04;
  /* 1389f8: str wzr, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 31));
  /* 1389fc: bl #0x142ff8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1280512));
  fn1_142ff8(c);
  /* 138a00: str x0, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 0));
L_138a04:;
  /* 138a04: adrp x2, #0x52000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(335872)));
  /* 138a08: add x2, x2, #0x212 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(530)));
  /* 138a0c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 138a10: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 138a14: bl #0x138aa8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1280536));
  fn1_138aa8(c);
  /* 138a18: strb wzr, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* 138a1c: mov w8, #0xffff */
  ARC_W_W(c, 8, UINT64_C(65535));
  /* 138a20: b #0x138a5c */
  goto L_138a5c;
L_138a24:;
  /* 138a24: ldr w8, [x2, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 2) + INT64_C(16))));
  /* 138a28: and w9, w8, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* 138a2c: sub w9, w9, #1, lsl #12 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) - UINT64_C(4096)));
  /* 138a30: lsr w10, w9, #0xe */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(14)) & 31)));
  /* 138a34: cmp w10, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(2));
  /* 138a38: b.hi #0x138a50 */
  if (ARC_COND(c, 8)) goto L_138a50;
  /* 138a3c: lsr x9, x9, #0xc */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(12)) & 63)));
  /* 138a40: nop  */
  /* nop: no architectural effect here */
  /* 138a44: adr x10, #0x77368 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(488296)));
  /* 138a48: ldrb w9, [x10, x9] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 10) + ARC_X_R(c, 9))));
  /* 138a4c: b #0x138a54 */
  goto L_138a54;
L_138a50:;
  /* 138a50: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
L_138a54:;
  /* 138a54: and w8, w8, #0xfff */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(4095)));
  /* 138a58: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
L_138a5c:;
  /* 138a5c: str w8, [x19, #4] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(4)), ARC_W_R(c, 8));
L_138a60:;
  /* 138a60: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 138a64: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 138a68: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 138a6c: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 138a70: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 138a74: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 138a78: ret  */
  return;
L_138a7c:;
  /* 138a7c: nop  */
  /* nop: no architectural effect here */
  /* 138a80: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 138a84: mov w24, w1 */
  ARC_W_W(c, 24, ARC_W_R(c, 1));
  /* 138a88: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1280652));
  fn1_1424b8(c);
  /* 138a8c: mov w1, w24 */
  ARC_W_W(c, 1, ARC_W_R(c, 24));
  /* 138a90: cbz w0, #0x138940 */
  if ((ARC_W_R(c, 0)) == 0) goto L_138940;
  /* 138a94: nop  */
  /* nop: no architectural effect here */
  /* 138a98: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 138a9c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1280672));
  fn1_1424d0(c);
  /* 138aa0: mov w1, w24 */
  ARC_W_W(c, 1, ARC_W_R(c, 24));
  /* 138aa4: b #0x138940 */
  goto L_138940;
}

void fn1_13db28(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039229224));
  /* 13db28: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13db2c: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 13db30: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13db34: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13db38: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 13db3c: ldr w0, [x0, #8] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(8))));
  /* 13db40: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 13db44: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 13db48: bl #0x1448d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1301324));
  fn1_1448d0(c);
  /* 13db4c: mov w20, w0 */
  ARC_W_W(c, 20, ARC_W_R(c, 0));
  /* 13db50: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 13db54: b.eq #0x13db78 */
  if (ARC_COND(c, 0)) goto L_13db78;
  /* 13db58: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* 13db5c: nop  */
  /* nop: no architectural effect here */
  /* 13db60: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13db64: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13db68: tbz w8, #0, #0x13dbbc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13dbbc;
L_13db6c:;
  /* 13db6c: nop  */
  /* nop: no architectural effect here */
  /* 13db70: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13db74: b #0x13db9c */
  goto L_13db9c;
L_13db78:;
  /* 13db78: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1301372));
  fn1_142a58(c);
  /* 13db7c: nop  */
  /* nop: no architectural effect here */
  /* 13db80: adr x9, #0x159208 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13db84: ldr w8, [x0] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 0)));
  /* 13db88: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 13db8c: tbz w9, #0, #0x13dbdc */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_13dbdc;
L_13db90:;
  /* 13db90: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 13db94: nop  */
  /* nop: no architectural effect here */
  /* 13db98: adr x8, #0x156d38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404216)));
L_13db9c:;
  /* 13db9c: cmn w20, #1 */
  (void)arc_add32(c, ARC_W_R(c, 20), UINT64_C(1), 0);
  /* 13dba0: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* 13dba4: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* 13dba8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13dbac: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13dbb0: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 13dbb4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13dbb8: ret  */
  return;
L_13dbbc:;
  /* 13dbbc: nop  */
  /* nop: no architectural effect here */
  /* 13dbc0: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13dbc4: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1301448));
  fn1_1424b8(c);
  /* 13dbc8: cbz w0, #0x13db6c */
  if ((ARC_W_R(c, 0)) == 0) goto L_13db6c;
  /* 13dbcc: nop  */
  /* nop: no architectural effect here */
  /* 13dbd0: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13dbd4: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1301464));
  fn1_1424d0(c);
  /* 13dbd8: b #0x13db6c */
  goto L_13db6c;
L_13dbdc:;
  /* 13dbdc: nop  */
  /* nop: no architectural effect here */
  /* 13dbe0: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13dbe4: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* 13dbe8: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1301484));
  fn1_1424b8(c);
  /* 13dbec: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 13dbf0: cbz w0, #0x13db90 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13db90;
  /* 13dbf4: nop  */
  /* nop: no architectural effect here */
  /* 13dbf8: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13dbfc: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1301504));
  fn1_1424d0(c);
  /* 13dc00: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 13dc04: b #0x13db90 */
  goto L_13db90;
}

void fn1_142638(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248440));
  /* 142638: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 14263c: ldr x17, [x16, #0xf48] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3912))));
  /* 142640: add x16, x16, #0xf48 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3912)));
  /* 142644: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142648: nop  */
  /* nop: no architectural effect here */
  /* 14264c: nop  */
  /* nop: no architectural effect here */
}

void fn1_142c38(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249976));
  /* 142c38: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142c3c: ldr x17, [x16, #0x148] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(328))));
  /* 142c40: add x16, x16, #0x148 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(328)));
  /* 142c44: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142c48: nop  */
  /* nop: no architectural effect here */
  /* 142c4c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143238(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251512));
  /* 143238: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14323c: ldr x17, [x16, #0x348] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(840))));
  /* 143240: add x16, x16, #0x348 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(840)));
  /* 143244: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143248: nop  */
  /* nop: no architectural effect here */
  /* 14324c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143838(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253048));
  /* 143838: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14383c: ldr x17, [x16, #0x548] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1352))));
  /* 143840: add x16, x16, #0x548 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1352)));
  /* 143844: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143848: nop  */
  /* nop: no architectural effect here */
  /* 14384c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143e38(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254584));
  /* 143e38: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143e3c: ldr x17, [x16, #0x748] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1864))));
  /* 143e40: add x16, x16, #0x748 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1864)));
  /* 143e44: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143e48: nop  */
  /* nop: no architectural effect here */
  /* 143e4c: nop  */
  /* nop: no architectural effect here */
}

void fn1_144438(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256120));
  /* 144438: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14443c: ldr x17, [x16, #0x948] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2376))));
  /* 144440: add x16, x16, #0x948 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2376)));
  /* 144444: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144448: nop  */
  /* nop: no architectural effect here */
  /* 14444c: nop  */
  /* nop: no architectural effect here */
}

void fn1_144a38(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039257656));
  /* 144a38: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144a3c: ldr x17, [x16, #0xb48] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2888))));
  /* 144a40: add x16, x16, #0xb48 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2888)));
  /* 144a44: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144a48: nop  */
  /* nop: no architectural effect here */
  /* 144a4c: nop  */
  /* nop: no architectural effect here */
}

