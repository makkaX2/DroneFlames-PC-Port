#include "lifted.h"

void fn1_a01f4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038583796));
  /* a01f4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a01f8: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a01fc: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* a0200: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a0204: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a0208: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a020c: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* a0210: sub x3, x2, x1 */
  ARC_X_W(c, 3, (ARC_X_R(c, 2) - ARC_X_R(c, 1)));
  /* a0214: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* a0218: cmp x3, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 3), UINT64_C(3));
  /* a021c: b.hi #0xa0248 */
  if (ARC_COND(c, 8)) goto L_a0248;
  /* a0220: cmp x2, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 19));
  /* a0224: b.eq #0xa02d0 */
  if (ARC_COND(c, 0)) goto L_a02d0;
  /* a0228: adrp x20, #0x151000 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a022c: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* a0230: add x1, x1, #0x348 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(840)));
  /* a0234: ldr x20, [x20, #0x998] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(2456))));
  /* a0238: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* a023c: add x0, x20, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(304)));
  /* a0240: bl #0x144a38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(655940));
  fn1_144a38(c);
  /* a0244: b #0xa02c8 */
  goto L_a02c8;
L_a0248:;
  /* a0248: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* a024c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* a0250: b.ne #0xa02a8 */
  if (ARC_COND(c, 1)) goto L_a02a8;
  /* a0254: add x8, x19, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* a0258: ldrb w21, [x19, #2] */
  ARC_W_W(c, 21, arc_ld8((ARC_X_R(c, 19) + INT64_C(2))));
  /* a025c: ldrb w3, [x19, #1] */
  ARC_W_W(c, 3, arc_ld8((ARC_X_R(c, 19) + INT64_C(1))));
  /* a0260: str x8, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 8));
  /* a0264: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* a0268: mov x4, x19 */
  ARC_X_W(c, 4, ARC_X_R(c, 19));
  /* a026c: ldrb w8, [x19, #3] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(3))));
  /* a0270: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* a0274: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* a0278: strb w8, [x20, #0x18] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(24)), ARC_W_R(c, 8));
  /* a027c: bl #0x9eecc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(656000));
  fn1_9eecc(c);
  /* a0280: cmp w21, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 21), UINT64_C(255));
  /* a0284: str x0, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 0));
  /* a0288: b.eq #0xa02ec */
  if (ARC_COND(c, 0)) goto L_a02ec;
  /* a028c: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* a0290: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* a0294: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* a0298: mov w3, w21 */
  ARC_W_W(c, 3, ARC_W_R(c, 21));
  /* a029c: mov x4, x19 */
  ARC_X_W(c, 4, ARC_X_R(c, 19));
  /* a02a0: bl #0x9eecc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(656036));
  fn1_9eecc(c);
  /* a02a4: b #0xa02f0 */
  goto L_a02f0;
L_a02a8:;
  /* a02a8: adrp x20, #0x151000 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a02ac: adrp x1, #0x50000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(327680)));
  /* a02b0: add x1, x1, #0x280 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(640)));
  /* a02b4: ldr x20, [x20, #0x998] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(2456))));
  /* a02b8: mov w2, w8 */
  ARC_W_W(c, 2, ARC_W_R(c, 8));
  /* a02bc: mov x3, x19 */
  ARC_X_W(c, 3, ARC_X_R(c, 19));
  /* a02c0: add x0, x20, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(304)));
  /* a02c4: bl #0x144a38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(656072));
  fn1_144a38(c);
L_a02c8:;
  /* a02c8: add x0, x20, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(304)));
  /* a02cc: bl #0x143730 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(656080));
  fn1_143730(c);
L_a02d0:;
  /* a02d0: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* a02d4: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a02d8: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* a02dc: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a02e0: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a02e4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a02e8: ret  */
  return;
L_a02ec:;
  /* a02ec: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
L_a02f0:;
  /* a02f0: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* a02f4: stp x0, x8, [x20, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* a02f8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* a02fc: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a0300: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* a0304: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a0308: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a030c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a0310: ret  */
  return;
}

void fn1_a2184(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038591876));
  /* a2184: bti c */
  /* bti: no architectural effect here */
  /* a2188: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* a218c: ret  */
  return;
}

void fn1_a7338(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038612792));
L_a7338:;
  /* a7338: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a733c: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a7340: str x25, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 25));
  /* a7344: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* a7348: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a734c: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a7350: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a7354: ldp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* a7358: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a735c: subs x10, x9, x8 */
  ARC_X_W(c, 10, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8)));
  /* a7360: b.eq #0xa7370 */
  if (ARC_COND(c, 0)) goto L_a7370;
  /* a7364: ldrb w11, [x8] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 8)));
  /* a7368: sub w11, w11, #0x4a */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(74)));
  /* a736c: b #0xa7374 */
  goto L_a7374;
L_a7370:;
  /* a7370: mov w11, #-0x4a */
  ARC_W_W(c, 11, UINT64_C(18446744073709551542));
L_a7374:;
  /* a7374: ror w11, w11, #1 */
  ARC_W_W(c, 11, arc_ror32(ARC_W_R(c, 11), ((UINT64_C(1)) & 31)));
  /* a7378: cmp w11, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(4));
  /* a737c: b.gt #0xa73b8 */
  if (ARC_COND(c, 12)) goto L_a73b8;
  /* a7380: cbz w11, #0xa7400 */
  if ((ARC_W_R(c, 11)) == 0) goto L_a7400;
  /* a7384: cmp w11, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(1));
  /* a7388: b.ne #0xa7644 */
  if (ARC_COND(c, 1)) goto L_a7644;
  /* a738c: cmp x10, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(2));
  /* a7390: b.lo #0xa74e4 */
  if (ARC_COND(c, 3)) goto L_a74e4;
  /* a7394: ldrb w9, [x8, #1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(1))));
  /* a7398: cmp w9, #0x5a */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(90));
  /* a739c: b.ne #0xa74e4 */
  if (ARC_COND(c, 1)) goto L_a74e4;
  /* a73a0: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* a73a4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a73a8: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a73ac: bl #0xa46ec */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(684976));
  fn1_a46ec(c);
  /* a73b0: cbnz x0, #0xa73dc */
  if ((ARC_X_R(c, 0)) != 0) goto L_a73dc;
  /* a73b4: b #0xa7590 */
  goto L_a7590;
L_a73b8:;
  /* a73b8: cmp w11, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(5));
  /* a73bc: b.eq #0xa74c0 */
  if (ARC_COND(c, 0)) goto L_a74c0;
  /* a73c0: cmp w11, #7 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(7));
  /* a73c4: b.ne #0xa7644 */
  if (ARC_COND(c, 1)) goto L_a7644;
  /* a73c8: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a73cc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a73d0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a73d4: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(685016));
  fn1_aa69c(c);
  /* a73d8: cbz x0, #0xa7590 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a7590;
L_a73dc:;
  /* a73dc: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* a73e0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a73e4: b.eq #0xa7504 */
  if (ARC_COND(c, 0)) goto L_a7504;
  /* a73e8: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* a73ec: cmp w9, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(69));
  /* a73f0: b.ne #0xa7504 */
  if (ARC_COND(c, 1)) goto L_a7504;
  /* a73f4: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a73f8: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a73fc: b #0xa7590 */
  goto L_a7590;
L_a7400:;
  /* a7400: ldp x11, x10, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* a7404: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a7408: add x24, x19, #0x28 */
  ARC_X_W(c, 24, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* a740c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a7410: sub x10, x10, x11 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 11)));
  /* a7414: asr x20, x10, #3 */
  ARC_X_W(c, 20, ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(3)) & 63))));
  /* a7418: b #0xa744c */
  goto L_a744c;
L_a741c:;
  /* a741c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* a7420: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(685092));
  fn1_142878(c);
  /* a7424: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* a7428: cbz x0, #0xa7664 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a7664;
L_a742c:;
  /* a742c: asr x8, x21, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 21)) >> ((UINT64_C(2)) & 63))));
  /* a7430: add x23, x0, x21 */
  ARC_X_W(c, 23, (ARC_X_R(c, 0) + ARC_X_R(c, 21)));
  /* a7434: add x8, x0, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* a7438: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* a743c: str x8, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 8));
L_a7440:;
  /* a7440: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* a7444: str x0, [x23], #8 */
  { const uint64_t _a = ARC_X_R(c, 23);
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 0));
  }
  /* a7448: str x23, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 23));
L_a744c:;
  /* a744c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a7450: b.eq #0xa7460 */
  if (ARC_COND(c, 0)) goto L_a7460;
  /* a7454: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* a7458: cmp w9, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(69));
  /* a745c: b.eq #0xa750c */
  if (ARC_COND(c, 0)) goto L_a750c;
L_a7460:;
  /* a7460: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a7464: bl #0xa7338 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(685160));
  fn1_a7338(c);
  /* a7468: cbz x0, #0xa7590 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a7590;
  /* a746c: ldp x23, x8, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 23, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* a7470: cmp x23, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* a7474: b.ne #0xa7440 */
  if (ARC_COND(c, 1)) goto L_a7440;
  /* a7478: ldr x22, [x19, #0x10] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* a747c: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* a7480: sub x21, x23, x22 */
  ARC_X_W(c, 21, (ARC_X_R(c, 23) - ARC_X_R(c, 22)));
  /* a7484: cmp x22, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 24));
  /* a7488: lsl x1, x21, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 21)) << ((UINT64_C(1)) & 63)));
  /* a748c: b.ne #0xa741c */
  if (ARC_COND(c, 1)) goto L_a741c;
  /* a7490: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* a7494: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(685208));
  fn1_1428a8(c);
  /* a7498: cbz x0, #0xa7668 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a7668;
  /* a749c: cmp x23, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 24));
  /* a74a0: b.eq #0xa74b8 */
  if (ARC_COND(c, 0)) goto L_a74b8;
  /* a74a4: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* a74a8: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* a74ac: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* a74b0: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(685236));
  fn1_1449f0(c);
  /* a74b4: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
L_a74b8:;
  /* a74b8: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* a74bc: b #0xa742c */
  goto L_a742c;
L_a74c0:;
  /* a74c0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* a74c4: b.eq #0xa7644 */
  if (ARC_COND(c, 0)) goto L_a7644;
  /* a74c8: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* a74cc: cmp w9, #0x54 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(84));
  /* a74d0: b.ne #0xa7644 */
  if (ARC_COND(c, 1)) goto L_a7644;
  /* a74d4: cmp x10, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(2));
  /* a74d8: b.lo #0xa75ac */
  if (ARC_COND(c, 3)) goto L_a75ac;
  /* a74dc: ldrb w1, [x8, #1] */
  ARC_W_W(c, 1, arc_ld8((ARC_X_R(c, 8) + INT64_C(1))));
  /* a74e0: b #0xa75b0 */
  goto L_a75b0;
L_a74e4:;
  /* a74e4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a74e8: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a74ec: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* a74f0: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a74f4: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* a74f8: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a74fc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a7500: b #0xac08c */
  fn1_ac08c(c); return;
L_a7504:;
  /* a7504: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* a7508: b #0xa7590 */
  goto L_a7590;
L_a750c:;
  /* a750c: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a7510: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a7514: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* a7518: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a751c: bl #0xa77e4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(685344));
  fn1_a77e4(c);
  /* a7520: ldr x22, [x19, #0x1330] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* a7524: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a7528: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* a752c: ldr x8, [x22, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* a7530: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* a7534: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a7538: b.hi #0xa7558 */
  if (ARC_COND(c, 8)) goto L_a7558;
  /* a753c: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a7540: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(685380));
  fn1_1428a8(c);
  /* a7544: cbz x0, #0xa766c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a766c;
  /* a7548: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a754c: stp x22, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a7550: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* a7554: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_a7558:;
  /* a7558: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* a755c: add x0, x22, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* a7560: adrp x8, #0x14b000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1355776)));
  /* a7564: add x8, x8, #0xd88 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3464)));
  /* a7568: str x9, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 9));
  /* a756c: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
L_a7570:;
  /* a7570: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a7574: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* a7578: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a757c: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* a7580: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* a7584: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* a7588: stp x20, x21, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a758c: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
L_a7590:;
  /* a7590: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a7594: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* a7598: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a759c: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* a75a0: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a75a4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a75a8: ret  */
  return;
L_a75ac:;
  /* a75ac: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
L_a75b0:;
  /* a75b0: adrp x20, #0x4f000 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(323584)));
  /* a75b4: add x20, x20, #0xe95 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(3733)));
  /* a75b8: mov w2, #5 */
  ARC_W_W(c, 2, UINT64_C(5));
  /* a75bc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a75c0: bl #0x1428d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(685508));
  fn1_1428d8(c);
  /* a75c4: cbz x0, #0xa7644 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a7644;
  /* a75c8: sub x8, x0, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) - ARC_X_R(c, 20)));
  /* a75cc: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* a75d0: b.eq #0xa7644 */
  if (ARC_COND(c, 0)) goto L_a7644;
  /* a75d4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a75d8: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* a75dc: bl #0xb2404 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(685536));
  fn1_b2404(c);
  /* a75e0: cbz x0, #0xa7590 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a7590;
  /* a75e4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a75e8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a75ec: bl #0xa7338 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(685552));
  fn1_a7338(c);
  /* a75f0: cbz x0, #0xa7590 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a7590;
  /* a75f4: ldr x22, [x19, #0x1330] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* a75f8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a75fc: ldr x8, [x22, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* a7600: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* a7604: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a7608: b.hi #0xa7628 */
  if (ARC_COND(c, 8)) goto L_a7628;
  /* a760c: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a7610: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(685588));
  fn1_1428a8(c);
  /* a7614: cbz x0, #0xa766c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a766c;
  /* a7618: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a761c: stp x22, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a7620: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* a7624: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_a7628:;
  /* a7628: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* a762c: add x0, x22, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* a7630: adrp x8, #0x14b000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1355776)));
  /* a7634: add x8, x8, #0xe00 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3584)));
  /* a7638: str x9, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 9));
  /* a763c: mov w9, #0x22 */
  ARC_W_W(c, 9, UINT64_C(34));
  /* a7640: b #0xa7570 */
  goto L_a7570;
L_a7644:;
  /* a7644: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a7648: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a764c: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* a7650: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a7654: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* a7658: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a765c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a7660: b #0xa52b0 */
  fn1_a52b0(c); return;
L_a7664:;
  /* a7664: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(685672));
  fn1_1427b8(c);
L_a7668:;
  /* a7668: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(685676));
  fn1_1427b8(c);
L_a766c:;
  /* a766c: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(685680));
  fn1_142488(c);
}

void fn1_aca14(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038635028));
  /* aca14: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* aca18: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* aca1c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* aca20: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* aca24: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* aca28: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* aca2c: ldp x10, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* aca30: sub x8, x9, x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) - ARC_X_R(c, 10)));
  /* aca34: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* aca38: b.hs #0xaca48 */
  if (ARC_COND(c, 2)) goto L_aca48;
  /* aca3c: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* aca40: b.eq #0xaca64 */
  if (ARC_COND(c, 0)) goto L_aca64;
  /* aca44: b #0xacdb4 */
  goto L_acdb4;
L_aca48:;
  /* aca48: ldrh w8, [x10] */
  ARC_W_W(c, 8, arc_ld16(ARC_X_R(c, 10)));
  /* aca4c: ldrb w11, [x10, #2] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 10) + INT64_C(2))));
  /* aca50: mov w12, #0x7066 */
  ARC_W_W(c, 12, UINT64_C(28774));
  /* aca54: cmp w8, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 12));
  /* aca58: mov w8, #0x54 */
  ARC_W_W(c, 8, UINT64_C(84));
  /* aca5c: ccmp w11, w8, #0, eq */
  if (ARC_COND(c, 0)) { (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 8)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* aca60: b.eq #0xacb58 */
  if (ARC_COND(c, 0)) goto L_acb58;
L_aca64:;
  /* aca64: ldrh w8, [x10] */
  ARC_W_W(c, 8, arc_ld16(ARC_X_R(c, 10)));
  /* aca68: mov w11, #0x7066 */
  ARC_W_W(c, 11, UINT64_C(28774));
  /* aca6c: cmp w8, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 11));
  /* aca70: b.eq #0xacad0 */
  if (ARC_COND(c, 0)) goto L_acad0;
  /* aca74: ldrh w8, [x10] */
  ARC_W_W(c, 8, arc_ld16(ARC_X_R(c, 10)));
  /* aca78: mov w11, #0x4c66 */
  ARC_W_W(c, 11, UINT64_C(19558));
  /* aca7c: cmp w8, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 11));
  /* aca80: b.ne #0xacdb4 */
  if (ARC_COND(c, 1)) goto L_acdb4;
  /* aca84: add x11, x10, #2 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) + UINT64_C(2)));
  /* aca88: cmp x9, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 11));
  /* aca8c: str x11, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 11));
  /* aca90: b.eq #0xacdb4 */
  if (ARC_COND(c, 0)) goto L_acdb4;
  /* aca94: ldrb w8, [x11] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 11)));
  /* aca98: sub w8, w8, #0x3a */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(58)));
  /* aca9c: cmn w8, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(10), 0);
  /* acaa0: b.lo #0xacdb4 */
  if (ARC_COND(c, 3)) goto L_acdb4;
  /* acaa4: mov x10, x11 */
  ARC_X_W(c, 10, ARC_X_R(c, 11));
L_acaa8:;
  /* acaa8: ldrb w8, [x10] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 10)));
  /* acaac: sub w8, w8, #0x3a */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(58)));
  /* acab0: cmn w8, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(10), 0);
  /* acab4: b.lo #0xacca4 */
  if (ARC_COND(c, 3)) goto L_acca4;
  /* acab8: add x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* acabc: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* acac0: str x10, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 10));
  /* acac4: b.ne #0xacaa8 */
  if (ARC_COND(c, 1)) goto L_acaa8;
  /* acac8: mov x12, x9 */
  ARC_X_W(c, 12, ARC_X_R(c, 9));
  /* acacc: b #0xacca8 */
  goto L_acca8;
L_acad0:;
  /* acad0: add x8, x10, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + UINT64_C(2)));
  /* acad4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* acad8: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* acadc: b.eq #0xacaf4 */
  if (ARC_COND(c, 0)) goto L_acaf4;
  /* acae0: ldrb w11, [x8] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 8)));
  /* acae4: cmp w11, #0x72 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(114));
  /* acae8: b.ne #0xacaf4 */
  if (ARC_COND(c, 1)) goto L_acaf4;
  /* acaec: add x8, x10, #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + UINT64_C(3)));
  /* acaf0: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
L_acaf4:;
  /* acaf4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* acaf8: b.eq #0xacb10 */
  if (ARC_COND(c, 0)) goto L_acb10;
  /* acafc: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* acb00: cmp w10, #0x56 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(86));
  /* acb04: b.ne #0xacb10 */
  if (ARC_COND(c, 1)) goto L_acb10;
  /* acb08: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* acb0c: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
L_acb10:;
  /* acb10: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* acb14: b.eq #0xacb2c */
  if (ARC_COND(c, 0)) goto L_acb2c;
  /* acb18: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* acb1c: cmp w10, #0x4b */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(75));
  /* acb20: b.ne #0xacb2c */
  if (ARC_COND(c, 1)) goto L_acb2c;
  /* acb24: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* acb28: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
L_acb2c:;
  /* acb2c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* acb30: b.eq #0xacb44 */
  if (ARC_COND(c, 0)) goto L_acb44;
  /* acb34: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* acb38: sub w10, w10, #0x3a */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) - UINT64_C(58)));
  /* acb3c: cmn w10, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 10), UINT64_C(10), 0);
  /* acb40: b.hs #0xacbdc */
  if (ARC_COND(c, 2)) goto L_acbdc;
L_acb44:;
  /* acb44: mov x19, xzr */
  ARC_X_W(c, 19, ARC_X_R(c, 31));
  /* acb48: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* acb4c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* acb50: b.ne #0xacc20 */
  if (ARC_COND(c, 1)) goto L_acc20;
  /* acb54: b #0xacdb4 */
  goto L_acdb4;
L_acb58:;
  /* acb58: ldr x19, [x0, #0x1330] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* acb5c: add x10, x10, #3 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(3)));
  /* acb60: str x10, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 10));
  /* acb64: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* acb68: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* acb6c: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* acb70: b.hi #0xacb94 */
  if (ARC_COND(c, 8)) goto L_acb94;
  /* acb74: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* acb78: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* acb7c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(707456));
  fn1_1428a8(c);
  /* acb80: cbz x0, #0xacdd4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_acdd4;
  /* acb84: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* acb88: stp x19, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* acb8c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* acb90: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_acb94:;
  /* acb94: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* acb98: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* acb9c: adrp x10, #0x149000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(1347584)));
  /* acba0: add x10, x10, #0xc10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(3088)));
  /* acba4: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* acba8: mov w11, #0x540 */
  ARC_W_W(c, 11, UINT64_C(1344));
  /* acbac: str x10, [x8, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(16));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 10));
  }
  /* acbb0: ldurh w9, [x8, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 8) + INT64_C(9))));
  /* acbb4: mov w10, #8 */
  ARC_W_W(c, 10, UINT64_C(8));
  /* acbb8: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* acbbc: strb w10, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 10));
  /* acbc0: adrp x10, #0x52000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(335872)));
  /* acbc4: add x10, x10, #0x316 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(790)));
  /* acbc8: orr w9, w9, w11 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 11)));
  /* acbcc: sturh w9, [x8, #9] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(9)), ARC_W_R(c, 9));
  /* acbd0: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* acbd4: stp x10, x9, [x8, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* acbd8: b #0xacdb8 */
  goto L_acdb8;
L_acbdc:;
  /* acbdc: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
  /* acbe0: mov x10, x8 */
  ARC_X_W(c, 10, ARC_X_R(c, 8));
L_acbe4:;
  /* acbe4: ldrb w12, [x10] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 10)));
  /* acbe8: sub w12, w12, #0x3a */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) - UINT64_C(58)));
  /* acbec: cmn w12, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 12), UINT64_C(10), 0);
  /* acbf0: b.lo #0xacc0c */
  if (ARC_COND(c, 3)) goto L_acc0c;
  /* acbf4: add x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* acbf8: add x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(1)));
  /* acbfc: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* acc00: str x10, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 10));
  /* acc04: b.ne #0xacbe4 */
  if (ARC_COND(c, 1)) goto L_acbe4;
  /* acc08: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
L_acc0c:;
  /* acc0c: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* acc10: sub x20, x11, x8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 11) - ARC_X_R(c, 8)));
  /* acc14: mov x8, x10 */
  ARC_X_W(c, 8, ARC_X_R(c, 10));
  /* acc18: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* acc1c: b.eq #0xacdb4 */
  if (ARC_COND(c, 0)) goto L_acdb4;
L_acc20:;
  /* acc20: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* acc24: cmp w9, #0x5f */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(95));
  /* acc28: b.ne #0xacdb4 */
  if (ARC_COND(c, 1)) goto L_acdb4;
  /* acc2c: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* acc30: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* acc34: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* acc38: ldr x9, [x21, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* acc3c: sub x10, x9, #0xfd0 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) - UINT64_C(4048)));
  /* acc40: cmn x10, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 10), UINT64_C(4081), 0);
  /* acc44: b.hi #0xacc68 */
  if (ARC_COND(c, 8)) goto L_acc68;
  /* acc48: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* acc4c: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* acc50: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(707668));
  fn1_1428a8(c);
  /* acc54: cbz x0, #0xacdd4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_acdd4;
  /* acc58: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* acc5c: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* acc60: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* acc64: str x0, [x22, #0x1330] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(4912)), ARC_X_R(c, 0));
L_acc68:;
  /* acc68: add x10, x9, #0x20 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(32)));
  /* acc6c: add x8, x21, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) + ARC_X_R(c, 9)));
  /* acc70: adrp x9, #0x14a000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1351680)));
  /* acc74: add x9, x9, #0xe88 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3720)));
  /* acc78: str x10, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 10));
  /* acc7c: mov w11, #0x540 */
  ARC_W_W(c, 11, UINT64_C(1344));
  /* acc80: str x9, [x8, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(16));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* acc84: ldurh w9, [x8, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 8) + INT64_C(9))));
  /* acc88: mov w10, #0x43 */
  ARC_W_W(c, 10, UINT64_C(67));
  /* acc8c: stp x19, x20, [x8, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* acc90: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* acc94: strb w10, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 10));
  /* acc98: orr w9, w9, w11 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 11)));
  /* acc9c: sturh w9, [x8, #9] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(9)), ARC_W_R(c, 9));
  /* acca0: b #0xacdb8 */
  goto L_acdb8;
L_acca4:;
  /* acca4: mov x12, x10 */
  ARC_X_W(c, 12, ARC_X_R(c, 10));
L_acca8:;
  /* acca8: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* accac: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* accb0: b.eq #0xacdb8 */
  if (ARC_COND(c, 0)) goto L_acdb8;
  /* accb4: cmp x12, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 11));
  /* accb8: b.eq #0xacdb8 */
  if (ARC_COND(c, 0)) goto L_acdb8;
  /* accbc: ldrb w8, [x10] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 10)));
  /* accc0: cmp w8, #0x70 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(112));
  /* accc4: b.ne #0xacdb4 */
  if (ARC_COND(c, 1)) goto L_acdb4;
  /* accc8: add x8, x10, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* acccc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* accd0: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* accd4: b.eq #0xaccec */
  if (ARC_COND(c, 0)) goto L_accec;
  /* accd8: ldrb w11, [x8] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 8)));
  /* accdc: cmp w11, #0x72 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(114));
  /* acce0: b.ne #0xaccec */
  if (ARC_COND(c, 1)) goto L_accec;
  /* acce4: add x8, x10, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + UINT64_C(2)));
  /* acce8: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
L_accec:;
  /* accec: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* accf0: b.eq #0xacd08 */
  if (ARC_COND(c, 0)) goto L_acd08;
  /* accf4: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* accf8: cmp w10, #0x56 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(86));
  /* accfc: b.ne #0xacd08 */
  if (ARC_COND(c, 1)) goto L_acd08;
  /* acd00: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* acd04: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
L_acd08:;
  /* acd08: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* acd0c: b.eq #0xacd24 */
  if (ARC_COND(c, 0)) goto L_acd24;
  /* acd10: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* acd14: cmp w10, #0x4b */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(75));
  /* acd18: b.ne #0xacd24 */
  if (ARC_COND(c, 1)) goto L_acd24;
  /* acd1c: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* acd20: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
L_acd24:;
  /* acd24: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* acd28: b.eq #0xacd3c */
  if (ARC_COND(c, 0)) goto L_acd3c;
  /* acd2c: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* acd30: sub w10, w10, #0x3a */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) - UINT64_C(58)));
  /* acd34: cmn w10, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 10), UINT64_C(10), 0);
  /* acd38: b.hs #0xacd48 */
  if (ARC_COND(c, 2)) goto L_acd48;
L_acd3c:;
  /* acd3c: mov x12, xzr */
  ARC_X_W(c, 12, ARC_X_R(c, 31));
  /* acd40: mov x11, xzr */
  ARC_X_W(c, 11, ARC_X_R(c, 31));
  /* acd44: b #0xacd84 */
  goto L_acd84;
L_acd48:;
  /* acd48: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
  /* acd4c: mov x10, x8 */
  ARC_X_W(c, 10, ARC_X_R(c, 8));
L_acd50:;
  /* acd50: ldrb w12, [x10] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 10)));
  /* acd54: sub w12, w12, #0x3a */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) - UINT64_C(58)));
  /* acd58: cmn w12, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 12), UINT64_C(10), 0);
  /* acd5c: b.lo #0xacd78 */
  if (ARC_COND(c, 3)) goto L_acd78;
  /* acd60: add x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* acd64: add x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(1)));
  /* acd68: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* acd6c: str x10, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 10));
  /* acd70: b.ne #0xacd50 */
  if (ARC_COND(c, 1)) goto L_acd50;
  /* acd74: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
L_acd78:;
  /* acd78: mov x12, x8 */
  ARC_X_W(c, 12, ARC_X_R(c, 8));
  /* acd7c: sub x11, x11, x8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - ARC_X_R(c, 8)));
  /* acd80: mov x8, x10 */
  ARC_X_W(c, 8, ARC_X_R(c, 10));
L_acd84:;
  /* acd84: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* acd88: stp x12, x11, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 12));
    arc_st64(_pa + 8, ARC_X_R(c, 11));
  }
  /* acd8c: b.eq #0xacdb4 */
  if (ARC_COND(c, 0)) goto L_acdb4;
  /* acd90: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* acd94: cmp w9, #0x5f */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(95));
  /* acd98: b.ne #0xacdb4 */
  if (ARC_COND(c, 1)) goto L_acdb4;
  /* acd9c: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* acda0: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* acda4: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* acda8: bl #0xb41c8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(708012));
  fn1_b41c8(c);
  /* acdac: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* acdb0: b #0xacdb8 */
  goto L_acdb8;
L_acdb4:;
  /* acdb4: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
L_acdb8:;
  /* acdb8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* acdbc: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* acdc0: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* acdc4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* acdc8: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* acdcc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* acdd0: ret  */
  return;
L_acdd4:;
  /* acdd4: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(708056));
  fn1_142488(c);
}

void fn1_b2eac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038660780));
  /* b2eac: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b2eb0: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b2eb4: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b2eb8: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b2ebc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b2ec0: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* b2ec4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b2ec8: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* b2ecc: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* b2ed0: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b2ed4: b.hi #0xb2ef8 */
  if (ARC_COND(c, 8)) goto L_b2ef8;
  /* b2ed8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b2edc: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b2ee0: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(732900));
  fn1_1428a8(c);
  /* b2ee4: cbz x0, #0xb2f54 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b2f54;
  /* b2ee8: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b2eec: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b2ef0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b2ef4: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_b2ef8:;
  /* b2ef8: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* b2efc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b2f00: add x20, x21, x8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* b2f04: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* b2f08: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(732940));
  fn1_142860(c);
  /* b2f0c: adrp x9, #0x149000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1347584)));
  /* b2f10: add x9, x9, #0xc10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3088)));
  /* b2f14: mov w11, #0x540 */
  ARC_W_W(c, 11, UINT64_C(1344));
  /* b2f18: str x9, [x20, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* b2f1c: ldurh w9, [x20, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b2f20: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* b2f24: mov w10, #8 */
  ARC_W_W(c, 10, UINT64_C(8));
  /* b2f28: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* b2f2c: strb w10, [x20, #8] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(8)), ARC_W_R(c, 10));
  /* b2f30: orr w9, w9, w11 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 11)));
  /* b2f34: stp x19, x8, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* b2f38: sturh w9, [x20, #9] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(9)), ARC_W_R(c, 9));
  /* b2f3c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b2f40: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b2f44: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b2f48: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b2f4c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b2f50: ret  */
  return;
L_b2f54:;
  /* b2f54: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(733016));
  fn1_142488(c);
}

void fn1_b6824(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038675492));
  /* b6824: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b6828: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b682c: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* b6830: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b6834: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b6838: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b683c: ldp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b6840: sub x10, x9, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* b6844: cmp x10, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(2));
  /* b6848: b.lo #0xb69a0 */
  if (ARC_COND(c, 3)) goto L_b69a0;
  /* b684c: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* b6850: mov x11, xzr */
  ARC_X_W(c, 11, ARC_X_R(c, 31));
  /* b6854: mov w13, #0x3e */
  ARC_W_W(c, 13, UINT64_C(62));
  /* b6858: nop  */
  /* nop: no architectural effect here */
  /* b685c: adr x12, #0x149d68 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(1351016)));
  /* b6860: b #0xb6870 */
  goto L_b6870;
L_b6864:;
  /* b6864: add x11, x14, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 14) + UINT64_C(1)));
L_b6868:;
  /* b6868: cmp x13, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 11));
  /* b686c: b.eq #0xb68b0 */
  if (ARC_COND(c, 0)) goto L_b68b0;
L_b6870:;
  /* b6870: add x14, x11, x13 */
  ARC_X_W(c, 14, (ARC_X_R(c, 11) + ARC_X_R(c, 13)));
  /* b6874: lsr x14, x14, #1 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 14)) >> ((UINT64_C(1)) & 63)));
  /* b6878: add x15, x12, x14, lsl #4 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 14)) << 4)));
  /* b687c: ldrb w16, [x15] */
  ARC_W_W(c, 16, arc_ld8(ARC_X_R(c, 15)));
  /* b6880: cmp w16, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 16), ARC_W_R(c, 10));
  /* b6884: b.lo #0xb6864 */
  if (ARC_COND(c, 3)) goto L_b6864;
  /* b6888: b.ne #0xb68a8 */
  if (ARC_COND(c, 1)) goto L_b68a8;
  /* b688c: ldrb w15, [x15, #1] */
  ARC_W_W(c, 15, arc_ld8((ARC_X_R(c, 15) + INT64_C(1))));
  /* b6890: ldrb w16, [x8, #1] */
  ARC_W_W(c, 16, arc_ld8((ARC_X_R(c, 8) + INT64_C(1))));
  /* b6894: and w15, w15, #0xff */
  ARC_W_W(c, 15, (ARC_W_R(c, 15) & UINT64_C(255)));
  /* b6898: cmp w15, w16, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 15), ((uint64_t)(uint8_t)(ARC_W_R(c, 16))));
  /* b689c: csinc x11, x11, x14, hs */
  ARC_X_W(c, 11, (ARC_COND(c, 2) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 14)) + 1)));
  /* b68a0: csel x13, x13, x14, lo */
  ARC_X_W(c, 13, (ARC_COND(c, 3) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 14)));
  /* b68a4: b #0xb6868 */
  goto L_b6868;
L_b68a8:;
  /* b68a8: mov x13, x14 */
  ARC_X_W(c, 13, ARC_X_R(c, 14));
  /* b68ac: b #0xb6868 */
  goto L_b6868;
L_b68b0:;
  /* b68b0: add x11, x12, x11, lsl #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 11)) << 4)));
  /* b68b4: ldrb w12, [x11] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 11)));
  /* b68b8: cmp w12, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 10));
  /* b68bc: b.ne #0xb6990 */
  if (ARC_COND(c, 1)) goto L_b6990;
  /* b68c0: ldrb w10, [x11, #1] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 11) + INT64_C(1))));
  /* b68c4: ldrb w12, [x8, #1] */
  ARC_W_W(c, 12, arc_ld8((ARC_X_R(c, 8) + INT64_C(1))));
  /* b68c8: cmp w10, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 12));
  /* b68cc: b.ne #0xb6990 */
  if (ARC_COND(c, 1)) goto L_b6990;
  /* b68d0: ldrb w9, [x11, #2] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 11) + INT64_C(2))));
  /* b68d4: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* b68d8: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* b68dc: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* b68e0: b.ne #0xb6abc */
  if (ARC_COND(c, 1)) goto L_b6abc;
  /* b68e4: ldrb w20, [x0, #0x309] */
  ARC_W_W(c, 20, arc_ld8((ARC_X_R(c, 0) + INT64_C(777))));
  /* b68e8: cmp x1, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(0));
  /* b68ec: ldrb w21, [x0, #0x308] */
  ARC_W_W(c, 21, arc_ld8((ARC_X_R(c, 0) + INT64_C(776))));
  /* b68f0: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* b68f4: strb wzr, [x0, #0x308] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(776)), ARC_W_R(c, 31));
  /* b68f8: csinc w8, w20, wzr, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? (ARC_W_R(c, 20)) : ((ARC_W_R(c, 31)) + 1)));
  /* b68fc: strb w8, [x0, #0x309] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(777)), ARC_W_R(c, 8));
  /* b6900: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* b6904: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(747784));
  fn1_a52b0(c);
  /* b6908: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* b690c: cbz x0, #0xb6b74 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b6b74;
  /* b6910: mov x8, x22 */
  ARC_X_W(c, 8, ARC_X_R(c, 22));
  /* b6914: cbz x23, #0xb6920 */
  if ((ARC_X_R(c, 23)) == 0) goto L_b6920;
  /* b6918: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* b691c: strb w9, [x23] */
  arc_st8(ARC_X_R(c, 23), ARC_W_R(c, 9));
L_b6920:;
  /* b6920: ldr x23, [x8, #0x1330] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + INT64_C(4912))));
  /* b6924: ldr x9, [x23, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* b6928: sub x10, x9, #0xfd0 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) - UINT64_C(4048)));
  /* b692c: cmn x10, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 10), UINT64_C(4081), 0);
  /* b6930: b.hi #0xb6954 */
  if (ARC_COND(c, 8)) goto L_b6954;
  /* b6934: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b6938: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(747836));
  fn1_1428a8(c);
  /* b693c: cbz x0, #0xb6b88 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b6b88;
  /* b6940: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* b6944: stp x23, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b6948: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* b694c: mov x8, x22 */
  ARC_X_W(c, 8, ARC_X_R(c, 22));
  /* b6950: str x0, [x22, #0x1330] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(4912)), ARC_X_R(c, 0));
L_b6954:;
  /* b6954: add x10, x9, #0x20 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(32)));
  /* b6958: add x0, x23, x9 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + ARC_X_R(c, 9)));
  /* b695c: adrp x9, #0x14b000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1355776)));
  /* b6960: add x9, x9, #0x680 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1664)));
  /* b6964: str x10, [x23, #8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(8)), ARC_X_R(c, 10));
  /* b6968: mov w11, #0x540 */
  ARC_W_W(c, 11, UINT64_C(1344));
  /* b696c: str x9, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* b6970: ldurh w9, [x0, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* b6974: mov w10, #4 */
  ARC_W_W(c, 10, UINT64_C(4));
  /* b6978: str x19, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 19));
  /* b697c: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* b6980: strb w10, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 10));
  /* b6984: orr w9, w9, w11 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 11)));
  /* b6988: sturh w9, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 9));
  /* b698c: b #0xb6b7c */
  goto L_b6b7c;
L_b6990:;
  /* b6990: ldrh w10, [x8] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 8)));
  /* b6994: mov w11, #0x696c */
  ARC_W_W(c, 11, UINT64_C(26988));
  /* b6998: cmp w10, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 11));
  /* b699c: b.eq #0xb6a38 */
  if (ARC_COND(c, 0)) goto L_b6a38;
L_b69a0:;
  /* b69a0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b69a4: b.eq #0xb6ac4 */
  if (ARC_COND(c, 0)) goto L_b6ac4;
  /* b69a8: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* b69ac: cmp w10, #0x76 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(118));
  /* b69b0: b.ne #0xb6ac4 */
  if (ARC_COND(c, 1)) goto L_b6ac4;
  /* b69b4: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b69b8: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b69bc: str x10, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 10));
  /* b69c0: b.eq #0xb6ac4 */
  if (ARC_COND(c, 0)) goto L_b6ac4;
  /* b69c4: ldrb w9, [x10] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 10)));
  /* b69c8: sub w9, w9, #0x30 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) - UINT64_C(48)));
  /* b69cc: cmp w9, #9 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(9));
  /* b69d0: b.hi #0xb6ac4 */
  if (ARC_COND(c, 8)) goto L_b6ac4;
  /* b69d4: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* b69d8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b69dc: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* b69e0: bl #0xa8930 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(748004));
  fn1_a8930(c);
  /* b69e4: cbz x0, #0xb6ac8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b6ac8;
  /* b69e8: ldr x20, [x21, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 21) + INT64_C(4912))));
  /* b69ec: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* b69f0: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* b69f4: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* b69f8: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b69fc: b.hi #0xb6a1c */
  if (ARC_COND(c, 8)) goto L_b6a1c;
  /* b6a00: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b6a04: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(748040));
  fn1_1428a8(c);
  /* b6a08: cbz x0, #0xb6b88 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b6b88;
  /* b6a0c: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b6a10: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b6a14: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b6a18: str x0, [x21, #0x1330] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(4912)), ARC_X_R(c, 0));
L_b6a1c:;
  /* b6a1c: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* b6a20: add x0, x20, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* b6a24: adrp x8, #0x14b000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1355776)));
  /* b6a28: add x8, x8, #0x680 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1664)));
  /* b6a2c: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
  /* b6a30: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* b6a34: b #0xb6a98 */
  goto L_b6a98;
L_b6a38:;
  /* b6a38: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* b6a3c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b6a40: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* b6a44: bl #0xa8930 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(748104));
  fn1_a8930(c);
  /* b6a48: cbz x0, #0xb6ac8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b6ac8;
  /* b6a4c: ldr x20, [x21, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 21) + INT64_C(4912))));
  /* b6a50: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* b6a54: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* b6a58: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* b6a5c: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b6a60: b.hi #0xb6a80 */
  if (ARC_COND(c, 8)) goto L_b6a80;
  /* b6a64: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b6a68: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(748140));
  fn1_1428a8(c);
  /* b6a6c: cbz x0, #0xb6b88 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b6b88;
  /* b6a70: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b6a74: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b6a78: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b6a7c: str x0, [x21, #0x1330] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(4912)), ARC_X_R(c, 0));
L_b6a80:;
  /* b6a80: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* b6a84: add x0, x20, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* b6a88: adrp x8, #0x14b000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1355776)));
  /* b6a8c: add x8, x8, #0x6f8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1784)));
  /* b6a90: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
  /* b6a94: mov w9, #0x14 */
  ARC_W_W(c, 9, UINT64_C(20));
L_b6a98:;
  /* b6a98: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* b6a9c: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* b6aa0: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* b6aa4: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* b6aa8: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* b6aac: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* b6ab0: str x19, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 19));
  /* b6ab4: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* b6ab8: b #0xb6ac8 */
  goto L_b6ac8;
L_b6abc:;
  /* b6abc: cmp w9, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(10));
  /* b6ac0: b.ls #0xb6ae0 */
  if (ARC_COND(c, 9)) goto L_b6ae0;
L_b6ac4:;
  /* b6ac4: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
L_b6ac8:;
  /* b6ac8: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b6acc: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* b6ad0: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* b6ad4: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b6ad8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b6adc: ret  */
  return;
L_b6ae0:;
  /* b6ae0: cmp w9, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(4));
  /* b6ae4: b.ne #0xb6af0 */
  if (ARC_COND(c, 1)) goto L_b6af0;
  /* b6ae8: ldrb w8, [x11, #3] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 11) + INT64_C(3))));
  /* b6aec: tbz w8, #0, #0xb6ac4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_b6ac4;
L_b6af0:;
  /* b6af0: ldr x19, [x11, #8] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 11) + INT64_C(8))));
  /* b6af4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b6af8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b6afc: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(748288));
  fn1_142860(c);
  /* b6b00: ldr x21, [x20, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(4912))));
  /* b6b04: mov x22, x20 */
  ARC_X_W(c, 22, ARC_X_R(c, 20));
  /* b6b08: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b6b0c: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* b6b10: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* b6b14: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b6b18: b.hi #0xb6b38 */
  if (ARC_COND(c, 8)) goto L_b6b38;
  /* b6b1c: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b6b20: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(748324));
  fn1_1428a8(c);
  /* b6b24: cbz x0, #0xb6b88 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b6b88;
  /* b6b28: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b6b2c: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b6b30: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b6b34: str x0, [x22, #0x1330] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(4912)), ARC_X_R(c, 0));
L_b6b38:;
  /* b6b38: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* b6b3c: add x0, x21, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* b6b40: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* b6b44: add x8, x8, #0xc10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3088)));
  /* b6b48: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* b6b4c: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* b6b50: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* b6b54: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* b6b58: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* b6b5c: stp x19, x20, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* b6b60: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* b6b64: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* b6b68: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* b6b6c: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* b6b70: b #0xb6ac8 */
  goto L_b6ac8;
L_b6b74:;
  /* b6b74: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* b6b78: mov x8, x22 */
  ARC_X_W(c, 8, ARC_X_R(c, 22));
L_b6b7c:;
  /* b6b7c: strb w20, [x8, #0x309] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(777)), ARC_W_R(c, 20));
  /* b6b80: strb w21, [x8, #0x308] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(776)), ARC_W_R(c, 21));
  /* b6b84: b #0xb6ac8 */
  goto L_b6ac8;
L_b6b88:;
  /* b6b88: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(748428));
  fn1_142488(c);
  /* b6b8c: strb w20, [x22, #0x309] */
  arc_st8((ARC_X_R(c, 22) + INT64_C(777)), ARC_W_R(c, 20));
  /* b6b90: strb w21, [x22, #0x308] */
  arc_st8((ARC_X_R(c, 22) + INT64_C(776)), ARC_W_R(c, 21));
  /* b6b94: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(748440));
  fn1_9cc20(c);
}

void fn1_b8c80(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038684800));
  /* b8c80: bti c */
  /* bti: no architectural effect here */
  /* b8c84: mov w1, #0x48 */
  ARC_W_W(c, 1, UINT64_C(72));
  /* b8c88: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_bc1b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038698424));
  /* bc1b8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bc1bc: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bc1c0: stp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* bc1c4: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* bc1c8: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* bc1cc: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* bc1d0: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bc1d4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bc1d8: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* bc1dc: ldrb w9, [x8, #8] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(8))));
  /* bc1e0: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* bc1e4: b.ne #0xbc20c */
  if (ARC_COND(c, 1)) goto L_bc20c;
  /* bc1e8: ldr x9, [x8, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* bc1ec: cmp x9, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(4));
  /* bc1f0: b.ne #0xbc20c */
  if (ARC_COND(c, 1)) goto L_bc20c;
  /* bc1f4: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* bc1f8: mov w9, #0x6863 */
  ARC_W_W(c, 9, UINT64_C(26723));
  /* bc1fc: movk w9, #0x7261, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1918959616)));
  /* bc200: ldr w8, [x8] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 8)));
  /* bc204: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* bc208: b.eq #0xbc230 */
  if (ARC_COND(c, 0)) goto L_bc230;
L_bc20c:;
  /* bc20c: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
L_bc210:;
  /* bc210: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bc214: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* bc218: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* bc21c: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* bc220: ldp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* bc224: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bc228: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bc22c: ret  */
  return;
L_bc230:;
  /* bc230: ldp x20, x9, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* bc234: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* bc238: ldr x0, [x1] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* bc23c: add x8, x20, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + UINT64_C(1)));
  /* bc240: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* bc244: b.ls #0xbc284 */
  if (ARC_COND(c, 9)) goto L_bc284;
  /* bc248: lsl x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* bc24c: add x9, x20, #0x3e1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) + UINT64_C(993)));
  /* bc250: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* bc254: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* bc258: csel x8, x8, x9, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* bc25c: str x8, [x1, #0x10] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(16)), ARC_X_R(c, 8));
  /* bc260: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* bc264: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(770664));
  fn1_142878(c);
  /* bc268: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bc26c: cbz x0, #0xbc92c */
  if ((ARC_X_R(c, 0)) == 0) goto L_bc92c;
  /* bc270: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bc274: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bc278: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* bc27c: add x8, x9, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* bc280: b #0xbc288 */
  goto L_bc288;
L_bc284:;
  /* bc284: mov x9, x20 */
  ARC_X_W(c, 9, ARC_X_R(c, 20));
L_bc288:;
  /* bc288: str x8, [x1, #8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(8)), ARC_X_R(c, 8));
  /* bc28c: mov w8, #0x22 */
  ARC_W_W(c, 8, UINT64_C(34));
  /* bc290: strb w8, [x0, x9] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 9)), ARC_W_R(c, 8));
  /* bc294: ldr x9, [x2, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 2) + INT64_C(8))));
  /* bc298: cbz x9, #0xbc8d4 */
  if ((ARC_X_R(c, 9)) == 0) goto L_bc8d4;
  /* bc29c: ldr x21, [x2] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 2)));
  /* bc2a0: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
  /* bc2a4: mov w22, #0x2222 */
  ARC_W_W(c, 22, UINT64_C(8738));
  /* bc2a8: mov w24, #0x615c */
  ARC_W_W(c, 24, UINT64_C(24924));
  /* bc2ac: mov w28, #0x225c */
  ARC_W_W(c, 28, UINT64_C(8796));
  /* bc2b0: mov w25, #0x5c5c */
  ARC_W_W(c, 25, UINT64_C(23644));
  /* bc2b4: add x27, x21, x9, lsl #3 */
  ARC_X_W(c, 27, (ARC_X_R(c, 21) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* bc2b8: mov w26, #0xa */
  ARC_W_W(c, 26, UINT64_C(10));
L_bc2bc:;
  /* bc2bc: ldr x10, [x21] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 21)));
  /* bc2c0: ldrb w9, [x10, #8] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 10) + INT64_C(8))));
  /* bc2c4: cmp w9, #0x4d */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(77));
  /* bc2c8: b.ne #0xbc8c8 */
  if (ARC_COND(c, 1)) goto L_bc8c8;
  /* bc2cc: ldr x9, [x10, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 10) + INT64_C(40))));
  /* bc2d0: cbz x9, #0xbc39c */
  if ((ARC_X_R(c, 9)) == 0) goto L_bc39c;
  /* bc2d4: ldr x10, [x10, #0x20] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(32))));
  /* bc2d8: mov w23, wzr */
  ARC_W_W(c, 23, ARC_W_R(c, 31));
L_bc2dc:;
  /* bc2dc: cmp w23, #0x19 */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(25));
  /* bc2e0: b.gt #0xbc8c8 */
  if (ARC_COND(c, 12)) goto L_bc8c8;
  /* bc2e4: ldrb w11, [x10] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 10)));
  /* bc2e8: sub w12, w11, #0x30 */
  ARC_W_W(c, 12, (ARC_W_R(c, 11) - UINT64_C(48)));
  /* bc2ec: cmp w12, #9 */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(9));
  /* bc2f0: b.hi #0xbc8c8 */
  if (ARC_COND(c, 8)) goto L_bc8c8;
  /* bc2f4: madd w11, w23, w26, w11 */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 11)) + ((uint32_t)(ARC_W_R(c, 23)) * (uint32_t)(ARC_W_R(c, 26)))));
  /* bc2f8: subs x9, x9, #1 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 9), UINT64_C(1)));
  /* bc2fc: add x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* bc300: sub w23, w11, #0x30 */
  ARC_W_W(c, 23, (ARC_W_R(c, 11) - UINT64_C(48)));
  /* bc304: b.ne #0xbc2dc */
  if (ARC_COND(c, 1)) goto L_bc2dc;
  /* bc308: cmp w23, #0x100 */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(256));
  /* bc30c: b.ge #0xbc8c8 */
  if (ARC_COND(c, 10)) goto L_bc8c8;
  /* bc310: tbz w8, #0, #0xbc3a4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_bc3a4;
L_bc314:;
  /* bc314: sub w8, w23, #0x30 */
  ARC_W_W(c, 8, (ARC_W_R(c, 23) - UINT64_C(48)));
  /* bc318: cmp w8, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(10));
  /* bc31c: b.lo #0xbc340 */
  if (ARC_COND(c, 3)) goto L_bc340;
  /* bc320: cmp w23, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(64));
  /* bc324: b.le #0xbc418 */
  if (ARC_COND(c, 13)) goto L_bc418;
  /* bc328: sub w8, w23, #0x41 */
  ARC_W_W(c, 8, (ARC_W_R(c, 23) - UINT64_C(65)));
  /* bc32c: cmp w8, #6 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(6));
  /* bc330: b.lo #0xbc340 */
  if (ARC_COND(c, 3)) goto L_bc340;
  /* bc334: sub w8, w23, #0x61 */
  ARC_W_W(c, 8, (ARC_W_R(c, 23) - UINT64_C(97)));
  /* bc338: cmp w8, #6 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(6));
  /* bc33c: b.hs #0xbc3c4 */
  if (ARC_COND(c, 2)) goto L_bc3c4;
L_bc340:;
  /* bc340: ldp x8, x9, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* bc344: ldr x0, [x1] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* bc348: add x10, x8, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* bc34c: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* bc350: b.ls #0xbc380 */
  if (ARC_COND(c, 9)) goto L_bc380;
  /* bc354: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* bc358: add x8, x8, #0x3e2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(994)));
  /* bc35c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bc360: csel x8, x9, x8, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bc364: str x8, [x1, #0x10] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(16)), ARC_X_R(c, 8));
  /* bc368: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* bc36c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(770928));
  fn1_142878(c);
  /* bc370: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bc374: cbz x0, #0xbc930 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bc930;
  /* bc378: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bc37c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
L_bc380:;
  /* bc380: strh w22, [x0, x8] */
  arc_st16((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 22));
  /* bc384: ldr x8, [x1, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* bc388: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* bc38c: str x8, [x1, #8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(8)), ARC_X_R(c, 8));
  /* bc390: cmp w23, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(10));
  /* bc394: b.gt #0xbc3ac */
  if (ARC_COND(c, 12)) goto L_bc3ac;
  /* bc398: b #0xbc420 */
  goto L_bc420;
L_bc39c:;
  /* bc39c: mov w23, wzr */
  ARC_W_W(c, 23, ARC_W_R(c, 31));
  /* bc3a0: tbnz w8, #0, #0xbc314 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_bc314;
L_bc3a4:;
  /* bc3a4: cmp w23, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(10));
  /* bc3a8: b.le #0xbc420 */
  if (ARC_COND(c, 13)) goto L_bc420;
L_bc3ac:;
  /* bc3ac: cmp w23, #0xc */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(12));
  /* bc3b0: b.le #0xbc580 */
  if (ARC_COND(c, 13)) goto L_bc580;
  /* bc3b4: cmp w23, #0xd */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(13));
  /* bc3b8: b.eq #0xbc684 */
  if (ARC_COND(c, 0)) goto L_bc684;
  /* bc3bc: cmp w23, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(34));
  /* bc3c0: b.eq #0xbc638 */
  if (ARC_COND(c, 0)) goto L_bc638;
L_bc3c4:;
  /* bc3c4: cmp w23, #0x5c */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(92));
  /* bc3c8: b.ne #0xbc6ec */
  if (ARC_COND(c, 1)) goto L_bc6ec;
  /* bc3cc: ldp x9, x8, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* bc3d0: ldr x0, [x1] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* bc3d4: add x10, x9, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* bc3d8: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* bc3dc: b.ls #0xbc40c */
  if (ARC_COND(c, 9)) goto L_bc40c;
  /* bc3e0: lsl x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(1)) & 63)));
  /* bc3e4: add x9, x9, #0x3e2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(994)));
  /* bc3e8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* bc3ec: csel x8, x8, x9, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* bc3f0: str x8, [x1, #0x10] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(16)), ARC_X_R(c, 8));
  /* bc3f4: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* bc3f8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(771068));
  fn1_142878(c);
  /* bc3fc: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bc400: cbz x0, #0xbc938 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bc938;
  /* bc404: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bc408: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
L_bc40c:;
  /* bc40c: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
  /* bc410: strh w25, [x0, x9] */
  arc_st16((ARC_X_R(c, 0) + ARC_X_R(c, 9)), ARC_W_R(c, 25));
  /* bc414: b #0xbc6d0 */
  goto L_bc6d0;
L_bc418:;
  /* bc418: cmp w23, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(10));
  /* bc41c: b.gt #0xbc578 */
  if (ARC_COND(c, 12)) goto L_bc578;
L_bc420:;
  /* bc420: cmp w23, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(8));
  /* bc424: b.gt #0xbc484 */
  if (ARC_COND(c, 12)) goto L_bc484;
  /* bc428: cmp w23, #7 */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(7));
  /* bc42c: b.eq #0xbc4e0 */
  if (ARC_COND(c, 0)) goto L_bc4e0;
  /* bc430: cmp w23, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(8));
  /* bc434: b.ne #0xbc6ec */
  if (ARC_COND(c, 1)) goto L_bc6ec;
  /* bc438: ldp x9, x8, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* bc43c: ldr x0, [x1] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* bc440: add x10, x9, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* bc444: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* bc448: b.ls #0xbc478 */
  if (ARC_COND(c, 9)) goto L_bc478;
  /* bc44c: lsl x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(1)) & 63)));
  /* bc450: add x9, x9, #0x3e2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(994)));
  /* bc454: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* bc458: csel x8, x8, x9, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* bc45c: str x8, [x1, #0x10] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(16)), ARC_X_R(c, 8));
  /* bc460: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* bc464: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(771176));
  fn1_142878(c);
  /* bc468: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bc46c: cbz x0, #0xbc954 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bc954;
  /* bc470: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bc474: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
L_bc478:;
  /* bc478: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
  /* bc47c: mov w10, #0x625c */
  ARC_W_W(c, 10, UINT64_C(25180));
  /* bc480: b #0xbc6cc */
  goto L_bc6cc;
L_bc484:;
  /* bc484: cmp w23, #9 */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(9));
  /* bc488: b.eq #0xbc52c */
  if (ARC_COND(c, 0)) goto L_bc52c;
  /* bc48c: cmp w23, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(10));
  /* bc490: b.ne #0xbc6ec */
  if (ARC_COND(c, 1)) goto L_bc6ec;
  /* bc494: ldp x9, x8, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* bc498: ldr x0, [x1] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* bc49c: add x10, x9, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* bc4a0: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* bc4a4: b.ls #0xbc4d4 */
  if (ARC_COND(c, 9)) goto L_bc4d4;
  /* bc4a8: lsl x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(1)) & 63)));
  /* bc4ac: add x9, x9, #0x3e2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(994)));
  /* bc4b0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* bc4b4: csel x8, x8, x9, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* bc4b8: str x8, [x1, #0x10] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(16)), ARC_X_R(c, 8));
  /* bc4bc: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* bc4c0: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(771268));
  fn1_142878(c);
  /* bc4c4: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bc4c8: cbz x0, #0xbc94c */
  if ((ARC_X_R(c, 0)) == 0) goto L_bc94c;
  /* bc4cc: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bc4d0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
L_bc4d4:;
  /* bc4d4: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
  /* bc4d8: mov w10, #0x6e5c */
  ARC_W_W(c, 10, UINT64_C(28252));
  /* bc4dc: b #0xbc6cc */
  goto L_bc6cc;
L_bc4e0:;
  /* bc4e0: ldp x9, x8, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* bc4e4: ldr x0, [x1] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* bc4e8: add x10, x9, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* bc4ec: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* bc4f0: b.ls #0xbc520 */
  if (ARC_COND(c, 9)) goto L_bc520;
  /* bc4f4: lsl x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(1)) & 63)));
  /* bc4f8: add x9, x9, #0x3e2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(994)));
  /* bc4fc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* bc500: csel x8, x8, x9, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* bc504: str x8, [x1, #0x10] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(16)), ARC_X_R(c, 8));
  /* bc508: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* bc50c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(771344));
  fn1_142878(c);
  /* bc510: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bc514: cbz x0, #0xbc958 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bc958;
  /* bc518: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bc51c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
L_bc520:;
  /* bc520: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
  /* bc524: strh w24, [x0, x9] */
  arc_st16((ARC_X_R(c, 0) + ARC_X_R(c, 9)), ARC_W_R(c, 24));
  /* bc528: b #0xbc6d0 */
  goto L_bc6d0;
L_bc52c:;
  /* bc52c: ldp x9, x8, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* bc530: ldr x0, [x1] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* bc534: add x10, x9, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* bc538: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* bc53c: b.ls #0xbc56c */
  if (ARC_COND(c, 9)) goto L_bc56c;
  /* bc540: lsl x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(1)) & 63)));
  /* bc544: add x9, x9, #0x3e2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(994)));
  /* bc548: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* bc54c: csel x8, x8, x9, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* bc550: str x8, [x1, #0x10] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(16)), ARC_X_R(c, 8));
  /* bc554: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* bc558: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(771420));
  fn1_142878(c);
  /* bc55c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bc560: cbz x0, #0xbc950 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bc950;
  /* bc564: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bc568: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
L_bc56c:;
  /* bc56c: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
  /* bc570: mov w10, #0x745c */
  ARC_W_W(c, 10, UINT64_C(29788));
  /* bc574: b #0xbc6cc */
  goto L_bc6cc;
L_bc578:;
  /* bc578: cmp w23, #0xc */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(12));
  /* bc57c: b.gt #0xbc628 */
  if (ARC_COND(c, 12)) goto L_bc628;
L_bc580:;
  /* bc580: cmp w23, #0xb */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(11));
  /* bc584: b.eq #0xbc5dc */
  if (ARC_COND(c, 0)) goto L_bc5dc;
  /* bc588: cmp w23, #0xc */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(12));
  /* bc58c: b.ne #0xbc6ec */
  if (ARC_COND(c, 1)) goto L_bc6ec;
  /* bc590: ldp x9, x8, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* bc594: ldr x0, [x1] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* bc598: add x10, x9, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* bc59c: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* bc5a0: b.ls #0xbc5d0 */
  if (ARC_COND(c, 9)) goto L_bc5d0;
  /* bc5a4: lsl x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(1)) & 63)));
  /* bc5a8: add x9, x9, #0x3e2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(994)));
  /* bc5ac: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* bc5b0: csel x8, x8, x9, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* bc5b4: str x8, [x1, #0x10] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(16)), ARC_X_R(c, 8));
  /* bc5b8: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* bc5bc: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(771520));
  fn1_142878(c);
  /* bc5c0: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bc5c4: cbz x0, #0xbc944 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bc944;
  /* bc5c8: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bc5cc: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
L_bc5d0:;
  /* bc5d0: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
  /* bc5d4: mov w10, #0x665c */
  ARC_W_W(c, 10, UINT64_C(26204));
  /* bc5d8: b #0xbc6cc */
  goto L_bc6cc;
L_bc5dc:;
  /* bc5dc: ldp x9, x8, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* bc5e0: ldr x0, [x1] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* bc5e4: add x10, x9, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* bc5e8: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* bc5ec: b.ls #0xbc61c */
  if (ARC_COND(c, 9)) goto L_bc61c;
  /* bc5f0: lsl x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(1)) & 63)));
  /* bc5f4: add x9, x9, #0x3e2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(994)));
  /* bc5f8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* bc5fc: csel x8, x8, x9, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* bc600: str x8, [x1, #0x10] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(16)), ARC_X_R(c, 8));
  /* bc604: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* bc608: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(771596));
  fn1_142878(c);
  /* bc60c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bc610: cbz x0, #0xbc948 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bc948;
  /* bc614: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bc618: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
L_bc61c:;
  /* bc61c: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
  /* bc620: mov w10, #0x765c */
  ARC_W_W(c, 10, UINT64_C(30300));
  /* bc624: b #0xbc6cc */
  goto L_bc6cc;
L_bc628:;
  /* bc628: cmp w23, #0xd */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(13));
  /* bc62c: b.eq #0xbc684 */
  if (ARC_COND(c, 0)) goto L_bc684;
  /* bc630: cmp w23, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(34));
  /* bc634: b.ne #0xbc6ec */
  if (ARC_COND(c, 1)) goto L_bc6ec;
L_bc638:;
  /* bc638: ldp x9, x8, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* bc63c: ldr x0, [x1] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* bc640: add x10, x9, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* bc644: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* bc648: b.ls #0xbc678 */
  if (ARC_COND(c, 9)) goto L_bc678;
  /* bc64c: lsl x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(1)) & 63)));
  /* bc650: add x9, x9, #0x3e2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(994)));
  /* bc654: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* bc658: csel x8, x8, x9, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* bc65c: str x8, [x1, #0x10] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(16)), ARC_X_R(c, 8));
  /* bc660: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* bc664: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(771688));
  fn1_142878(c);
  /* bc668: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bc66c: cbz x0, #0xbc93c */
  if ((ARC_X_R(c, 0)) == 0) goto L_bc93c;
  /* bc670: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bc674: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
L_bc678:;
  /* bc678: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
  /* bc67c: strh w28, [x0, x9] */
  arc_st16((ARC_X_R(c, 0) + ARC_X_R(c, 9)), ARC_W_R(c, 28));
  /* bc680: b #0xbc6d0 */
  goto L_bc6d0;
L_bc684:;
  /* bc684: ldp x9, x8, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* bc688: ldr x0, [x1] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* bc68c: add x10, x9, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* bc690: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* bc694: b.ls #0xbc6c4 */
  if (ARC_COND(c, 9)) goto L_bc6c4;
  /* bc698: lsl x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(1)) & 63)));
  /* bc69c: add x9, x9, #0x3e2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(994)));
  /* bc6a0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* bc6a4: csel x8, x8, x9, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* bc6a8: str x8, [x1, #0x10] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(16)), ARC_X_R(c, 8));
  /* bc6ac: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* bc6b0: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(771764));
  fn1_142878(c);
  /* bc6b4: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bc6b8: cbz x0, #0xbc940 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bc940;
  /* bc6bc: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bc6c0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
L_bc6c4:;
  /* bc6c4: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
  /* bc6c8: mov w10, #0x725c */
  ARC_W_W(c, 10, UINT64_C(29276));
L_bc6cc:;
  /* bc6cc: strh w10, [x0, x9] */
  arc_st16((ARC_X_R(c, 0) + ARC_X_R(c, 9)), ARC_W_R(c, 10));
L_bc6d0:;
  /* bc6d0: ldr x9, [x1, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* bc6d4: add x9, x9, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* bc6d8: str x9, [x1, #8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(8)), ARC_X_R(c, 9));
L_bc6dc:;
  /* bc6dc: add x21, x21, #8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* bc6e0: cmp x21, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 27));
  /* bc6e4: b.ne #0xbc2bc */
  if (ARC_COND(c, 1)) goto L_bc2bc;
  /* bc6e8: b #0xbc8d4 */
  goto L_bc8d4;
L_bc6ec:;
  /* bc6ec: cmp w23, #0x20 */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(32));
  /* bc6f0: b.lt #0xbc750 */
  if (ARC_COND(c, 11)) goto L_bc750;
  /* bc6f4: cmp w23, #0x7f */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(127));
  /* bc6f8: b.eq #0xbc750 */
  if (ARC_COND(c, 0)) goto L_bc750;
  /* bc6fc: ldp x9, x8, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* bc700: ldr x0, [x1] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* bc704: add x10, x9, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* bc708: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* bc70c: b.ls #0xbc740 */
  if (ARC_COND(c, 9)) goto L_bc740;
  /* bc710: lsl x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(1)) & 63)));
  /* bc714: add x9, x9, #0x3e1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(993)));
  /* bc718: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* bc71c: csel x8, x8, x9, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* bc720: str x8, [x1, #0x10] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(16)), ARC_X_R(c, 8));
  /* bc724: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* bc728: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(771884));
  fn1_142878(c);
  /* bc72c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bc730: cbz x0, #0xbc95c */
  if ((ARC_X_R(c, 0)) == 0) goto L_bc95c;
  /* bc734: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bc738: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bc73c: add x10, x9, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(1)));
L_bc740:;
  /* bc740: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
  /* bc744: str x10, [x1, #8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(8)), ARC_X_R(c, 10));
  /* bc748: strb w23, [x0, x9] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 9)), ARC_W_R(c, 23));
  /* bc74c: b #0xbc6dc */
  goto L_bc6dc;
L_bc750:;
  /* bc750: ldp x8, x10, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* bc754: ldr x0, [x1] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* bc758: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bc75c: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* bc760: b.ls #0xbc794 */
  if (ARC_COND(c, 9)) goto L_bc794;
  /* bc764: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* bc768: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* bc76c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bc770: csel x8, x9, x8, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bc774: str x8, [x1, #0x10] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(16)), ARC_X_R(c, 8));
  /* bc778: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* bc77c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(771968));
  fn1_142878(c);
  /* bc780: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bc784: cbz x0, #0xbc964 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bc964;
  /* bc788: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bc78c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bc790: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_bc794:;
  /* bc794: cmp w23, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(8));
  /* bc798: str x9, [x1, #8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(8)), ARC_X_R(c, 9));
  /* bc79c: mov w9, #0x5c */
  ARC_W_W(c, 9, UINT64_C(92));
  /* bc7a0: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* bc7a4: b.lt #0xbc864 */
  if (ARC_COND(c, 11)) goto L_bc864;
  /* bc7a8: ldp x8, x10, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* bc7ac: ldr x0, [x1] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* bc7b0: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bc7b4: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* bc7b8: b.ls #0xbc7ec */
  if (ARC_COND(c, 9)) goto L_bc7ec;
  /* bc7bc: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* bc7c0: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* bc7c4: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bc7c8: csel x8, x9, x8, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bc7cc: str x8, [x1, #0x10] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(16)), ARC_X_R(c, 8));
  /* bc7d0: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* bc7d4: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(772056));
  fn1_142878(c);
  /* bc7d8: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bc7dc: cbz x0, #0xbc968 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bc968;
  /* bc7e0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bc7e4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bc7e8: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_bc7ec:;
  /* bc7ec: cmp w23, #0x10 */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(16));
  /* bc7f0: str x9, [x1, #8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(8)), ARC_X_R(c, 9));
  /* bc7f4: mov w9, #0x78 */
  ARC_W_W(c, 9, UINT64_C(120));
  /* bc7f8: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* bc7fc: b.lo #0xbc864 */
  if (ARC_COND(c, 3)) goto L_bc864;
  /* bc800: mov w9, w23 */
  ARC_W_W(c, 9, ARC_W_R(c, 23));
  /* bc804: ldp x8, x10, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* bc808: lsr x11, x9, #4 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(4)) & 63)));
  /* bc80c: adrp x12, #0x4f000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(323584)));
  /* bc810: add x12, x12, #0xa80 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(2688)));
  /* bc814: ldr x0, [x1] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* bc818: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bc81c: ldrb w24, [x12, x11] */
  ARC_W_W(c, 24, arc_ld8((ARC_X_R(c, 12) + ARC_X_R(c, 11))));
  /* bc820: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* bc824: b.ls #0xbc858 */
  if (ARC_COND(c, 9)) goto L_bc858;
  /* bc828: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* bc82c: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* bc830: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bc834: csel x8, x9, x8, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bc838: str x8, [x1, #0x10] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(16)), ARC_X_R(c, 8));
  /* bc83c: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* bc840: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(772164));
  fn1_142878(c);
  /* bc844: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bc848: cbz x0, #0xbc96c */
  if ((ARC_X_R(c, 0)) == 0) goto L_bc96c;
  /* bc84c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bc850: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bc854: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_bc858:;
  /* bc858: str x9, [x1, #8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(8)), ARC_X_R(c, 9));
  /* bc85c: strb w24, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 24));
  /* bc860: mov w24, #0x615c */
  ARC_W_W(c, 24, UINT64_C(24924));
L_bc864:;
  /* bc864: ldp x9, x10, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* bc868: and x11, x23, #0xf */
  ARC_X_W(c, 11, (ARC_X_R(c, 23) & UINT64_C(15)));
  /* bc86c: adrp x12, #0x4f000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(323584)));
  /* bc870: add x12, x12, #0xa80 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(2688)));
  /* bc874: ldr x0, [x1] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* bc878: ldrb w23, [x12, x11] */
  ARC_W_W(c, 23, arc_ld8((ARC_X_R(c, 12) + ARC_X_R(c, 11))));
  /* bc87c: add x8, x9, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* bc880: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* bc884: b.ls #0xbc8b8 */
  if (ARC_COND(c, 9)) goto L_bc8b8;
  /* bc888: lsl x8, x10, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* bc88c: add x9, x9, #0x3e1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(993)));
  /* bc890: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* bc894: csel x8, x8, x9, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* bc898: str x8, [x1, #0x10] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(16)), ARC_X_R(c, 8));
  /* bc89c: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* bc8a0: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(772260));
  fn1_142878(c);
  /* bc8a4: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bc8a8: cbz x0, #0xbc960 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bc960;
  /* bc8ac: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bc8b0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bc8b4: add x8, x9, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(1)));
L_bc8b8:;
  /* bc8b8: str x8, [x1, #8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(8)), ARC_X_R(c, 8));
  /* bc8bc: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* bc8c0: strb w23, [x0, x9] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 9)), ARC_W_R(c, 23));
  /* bc8c4: b #0xbc6dc */
  goto L_bc6dc;
L_bc8c8:;
  /* bc8c8: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* bc8cc: str x20, [x1, #8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(8)), ARC_X_R(c, 20));
  /* bc8d0: b #0xbc210 */
  goto L_bc210;
L_bc8d4:;
  /* bc8d4: ldp x8, x10, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* bc8d8: ldr x0, [x1] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* bc8dc: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bc8e0: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* bc8e4: b.ls #0xbc918 */
  if (ARC_COND(c, 9)) goto L_bc918;
  /* bc8e8: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* bc8ec: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* bc8f0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bc8f4: csel x8, x9, x8, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bc8f8: str x8, [x1, #0x10] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(16)), ARC_X_R(c, 8));
  /* bc8fc: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* bc900: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(772356));
  fn1_142878(c);
  /* bc904: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bc908: cbz x0, #0xbc934 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bc934;
  /* bc90c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bc910: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bc914: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_bc918:;
  /* bc918: str x9, [x1, #8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(8)), ARC_X_R(c, 9));
  /* bc91c: mov w9, #0x22 */
  ARC_W_W(c, 9, UINT64_C(34));
  /* bc920: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* bc924: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* bc928: b #0xbc210 */
  goto L_bc210;
L_bc92c:;
  /* bc92c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(772400));
  fn1_1427b8(c);
L_bc930:;
  /* bc930: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(772404));
  fn1_1427b8(c);
L_bc934:;
  /* bc934: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(772408));
  fn1_1427b8(c);
L_bc938:;
  /* bc938: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(772412));
  fn1_1427b8(c);
L_bc93c:;
  /* bc93c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(772416));
  fn1_1427b8(c);
L_bc940:;
  /* bc940: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(772420));
  fn1_1427b8(c);
L_bc944:;
  /* bc944: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(772424));
  fn1_1427b8(c);
L_bc948:;
  /* bc948: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(772428));
  fn1_1427b8(c);
L_bc94c:;
  /* bc94c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(772432));
  fn1_1427b8(c);
L_bc950:;
  /* bc950: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(772436));
  fn1_1427b8(c);
L_bc954:;
  /* bc954: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(772440));
  fn1_1427b8(c);
L_bc958:;
  /* bc958: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(772444));
  fn1_1427b8(c);
L_bc95c:;
  /* bc95c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(772448));
  fn1_1427b8(c);
L_bc960:;
  /* bc960: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(772452));
  fn1_1427b8(c);
L_bc964:;
  /* bc964: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(772456));
  fn1_1427b8(c);
L_bc968:;
  /* bc968: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(772460));
  fn1_1427b8(c);
L_bc96c:;
  /* bc96c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(772464));
  fn1_1427b8(c);
}

void fn1_bf1e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038710760));
  /* bf1e8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bf1ec: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bf1f0: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bf1f4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bf1f8: nop  */
  /* nop: no architectural effect here */
  /* bf1fc: adr x0, #0x156c00 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1403904)));
  /* bf200: bl #0x144ac8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(782852));
  fn1_144ac8(c);
  /* bf204: ldr x20, [x0] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 0)));
  /* bf208: cbz x20, #0xbf230 */
  if ((ARC_X_R(c, 20)) == 0) goto L_bf230;
  /* bf20c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_bf210:;
  /* bf210: ldp x0, x8, [x20, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(8));
    ARC_X_W(c, 0, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* bf214: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* bf218: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* bf21c: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(782880));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* bf220: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* bf224: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(782888));
  fn1_142800(c);
  /* bf228: ldr x20, [x19] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 19)));
  /* bf22c: cbnz x20, #0xbf210 */
  if ((ARC_X_R(c, 20)) != 0) goto L_bf210;
L_bf230:;
  /* bf230: nop  */
  /* nop: no architectural effect here */
  /* bf234: adr x0, #0x156be0 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1403872)));
  /* bf238: bl #0x144ac8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(782908));
  fn1_144ac8(c);
  /* bf23c: strb wzr, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 31));
  /* bf240: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bf244: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bf248: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bf24c: ret  */
  return;
}

void fn1_d5a88(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038803080));
  /* d5a88: bti c */
  /* bti: no architectural effect here */
  /* d5a8c: b #0xd5a90 */
  fn1_d5a90(c); return;
}

void fn1_d9d10(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038820112));
  /* d9d10: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d9d14: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* d9d18: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d9d1c: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* d9d20: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d9d24: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* d9d28: ldr x8, [x0, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* d9d2c: ldr q0, [x0, #0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(32))), arc_ld64((ARC_X_R(c, 0) + INT64_C(32)) + 8));
  /* d9d30: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d9d34: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* d9d38: ldp x11, x10, [x8, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(8));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* d9d3c: str q0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* d9d40: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* d9d44: lsr x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* d9d48: csinc x8, x10, x8, ne */
  ARC_X_W(c, 8, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 8)) + 1)));
  /* d9d4c: ldrb w10, [x0, #0x30] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 0) + INT64_C(48))));
  /* d9d50: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* d9d54: csel x9, x9, x11, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 11)));
  /* d9d58: stp x8, x9, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* d9d5c: strb w10, [sp, #0x20] */
  arc_st8(((c)->sp + INT64_C(32)), ARC_W_R(c, 10));
  /* d9d60: bl #0xda18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(892260));
  fn1_da18c(c);
  /* d9d64: ldrb w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(32))));
  /* d9d68: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* d9d6c: ldr q0, [sp, #0x10] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(16))), arc_ld64(((c)->sp + INT64_C(16)) + 8));
  /* d9d70: nop  */
  /* nop: no architectural effect here */
  /* d9d74: adr x1, #0x5018e */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(328078)));
  /* d9d78: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* d9d7c: strb w8, [x19, #0x30] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(48)), ARC_W_R(c, 8));
  /* d9d80: lsl w8, w9, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 9)) << ((ARC_W_R(c, 8)) & 31)));
  /* d9d84: mov w9, #0x62 */
  ARC_W_W(c, 9, UINT64_C(98));
  /* d9d88: str q0, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)) + 8, (c)->q[0].u64[1]);
  /* d9d8c: tst w8, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 9)));
  /* d9d90: b.ne #0xd9e10 */
  if (ARC_COND(c, 1)) goto L_d9e10;
  /* d9d94: mov w9, #0x14 */
  ARC_W_W(c, 9, UINT64_C(20));
  /* d9d98: tst w8, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 9)));
  /* d9d9c: b.eq #0xd9dec */
  if (ARC_COND(c, 0)) goto L_d9dec;
  /* d9da0: ldr x20, [sp, #0x18] */
  ARC_X_W(c, 20, arc_ld64(((c)->sp + INT64_C(24))));
  /* d9da4: cmn x20, #8 */
  (void)arc_add64(c, ARC_X_R(c, 20), UINT64_C(8), 0);
  /* d9da8: b.hs #0xd9e78 */
  if (ARC_COND(c, 2)) goto L_d9e78;
  /* d9dac: ldr x1, [sp, #0x10] */
  ARC_X_W(c, 1, arc_ld64(((c)->sp + INT64_C(16))));
  /* d9db0: cmp x20, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(23));
  /* d9db4: b.lo #0xd9e10 */
  if (ARC_COND(c, 3)) goto L_d9e10;
  /* d9db8: orr x8, x20, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) | UINT64_C(7)));
  /* d9dbc: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* d9dc0: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* d9dc4: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* d9dc8: csinc x22, x9, x8, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* d9dcc: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* d9dd0: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(892372));
  fn1_1428f0(c);
  /* d9dd4: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* d9dd8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* d9ddc: orr x8, x22, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) | UINT64_C(1)));
  /* d9de0: stp x20, x0, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* d9de4: stur x8, [x29, #-0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-24)), ARC_X_R(c, 8));
  /* d9de8: b #0xd9e24 */
  goto L_d9e24;
L_d9dec:;
  /* d9dec: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* d9df0: nop  */
  /* nop: no architectural effect here */
  /* d9df4: adr x9, #0x5004e */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(327758)));
  /* d9df8: nop  */
  /* nop: no architectural effect here */
  /* d9dfc: adr x10, #0x501db */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(328155)));
  /* d9e00: mov w20, #1 */
  ARC_W_W(c, 20, UINT64_C(1));
  /* d9e04: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* d9e08: cmp w8, #0x5c */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(92));
  /* d9e0c: csel x1, x10, x9, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
L_d9e10:;
  /* d9e10: lsl w8, w20, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 20)) << ((UINT64_C(1)) & 31)));
  /* d9e14: sub x9, x29, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* d9e18: orr x21, x9, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* d9e1c: sturb w8, [x29, #-0x18] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-24)), ARC_W_R(c, 8));
  /* d9e20: cbz x20, #0xd9e30 */
  if ((ARC_X_R(c, 20)) == 0) goto L_d9e30;
L_d9e24:;
  /* d9e24: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* d9e28: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* d9e2c: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(892464));
  fn1_1449f0(c);
L_d9e30:;
  /* d9e30: strb wzr, [x21, x20] */
  arc_st8((ARC_X_R(c, 21) + ARC_X_R(c, 20)), ARC_W_R(c, 31));
  /* d9e34: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* d9e38: tbz w8, #0, #0xd9e4c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_d9e4c;
  /* d9e3c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* d9e40: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* d9e44: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* d9e48: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(892492));
  fn1_142608(c);
L_d9e4c:;
  /* d9e4c: ldur q0, [x29, #-0x18] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-24))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-24)) + 8));
  /* d9e50: ldur x8, [x29, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* d9e54: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d9e58: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* d9e5c: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* d9e60: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d9e64: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* d9e68: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d9e6c: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* d9e70: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d9e74: ret  */
  return;
L_d9e78:;
  /* d9e78: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(892540));
  fn1_d7d54(c);
}

void fn1_dc260(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038829664));
  /* dc260: bti c */
  /* bti: no architectural effect here */
  /* dc264: mov w1, #8 */
  ARC_W_W(c, 1, UINT64_C(8));
  /* dc268: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_e0c80(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038848640));
  /* e0c80: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e0c84: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e0c88: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e0c8c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e0c90: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e0c94: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* e0c98: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e0c9c: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e0ca0: csinc x8, x8, x0, ne */
  ARC_X_W(c, 8, (ARC_COND(c, 1) ? (ARC_X_R(c, 8)) : ((ARC_X_R(c, 0)) + 1)));
  /* e0ca4: cbz x3, #0xe0cec */
  if ((ARC_X_R(c, 3)) == 0) goto L_e0cec;
  /* e0ca8: lsr x10, x9, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* e0cac: ldr x11, [x0, #8] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* e0cb0: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e0cb4: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* e0cb8: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* e0cbc: sub x22, x8, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* e0cc0: csel x9, x10, x11, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 11)));
  /* e0cc4: cmp x2, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 9));
  /* e0cc8: csinc x21, x9, x2, hs */
  ARC_X_W(c, 21, (ARC_COND(c, 2) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 2)) + 1)));
L_e0ccc:;
  /* e0ccc: cbz x21, #0xe0cec */
  if ((ARC_X_R(c, 21)) == 0) goto L_e0cec;
  /* e0cd0: ldrb w1, [x22, x21] */
  ARC_W_W(c, 1, arc_ld8((ARC_X_R(c, 22) + ARC_X_R(c, 21))));
  /* e0cd4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e0cd8: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* e0cdc: bl #0x1428d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(920800));
  fn1_1428d8(c);
  /* e0ce0: sub x21, x21, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) - UINT64_C(1)));
  /* e0ce4: cbz x0, #0xe0ccc */
  if ((ARC_X_R(c, 0)) == 0) goto L_e0ccc;
  /* e0ce8: b #0xe0cf0 */
  goto L_e0cf0;
L_e0cec:;
  /* e0cec: mov x21, #-1 */
  ARC_X_W(c, 21, UINT64_C(18446744073709551615));
L_e0cf0:;
  /* e0cf0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e0cf4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e0cf8: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e0cfc: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e0d00: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e0d04: ret  */
  return;
}

void fn1_e3824(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038859812));
  /* e3824: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e3828: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e382c: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e3830: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e3834: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e3838: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e383c: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* e3840: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* e3844: bl #0x142e30 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(931912));
  fn1_142e30(c);
  /* e3848: ldrb w8, [x21] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 21)));
  /* e384c: ldr x9, [x21, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* e3850: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e3854: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e3858: csel x22, x10, x9, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e385c: cmn x0, #1 */
  (void)arc_add64(c, ARC_X_R(c, 0), UINT64_C(1), 0);
  /* e3860: b.eq #0xe38b4 */
  if (ARC_COND(c, 0)) goto L_e38b4;
  /* e3864: cmp x0, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 22));
  /* e3868: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e386c: csel x2, x0, x22, lo */
  ARC_X_W(c, 2, (ARC_COND(c, 3) ? (ARC_X_R(c, 0)) : ARC_X_R(c, 22)));
  /* e3870: cbz x2, #0xe3894 */
  if ((ARC_X_R(c, 2)) == 0) goto L_e3894;
  /* e3874: ldr x9, [x21, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* e3878: add x10, x21, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 21) + UINT64_C(4)));
  /* e387c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e3880: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* e3884: csel x0, x10, x9, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e3888: bl #0x142e60 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(931980));
  fn1_142e60(c);
  /* e388c: cbz w0, #0xe3894 */
  if ((ARC_W_R(c, 0)) == 0) goto L_e3894;
  /* e3890: b #0xe38a0 */
  goto L_e38a0;
L_e3894:;
  /* e3894: cmp x22, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 19));
  /* e3898: cset w8, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? 1 : 0));
  /* e389c: csinv w0, w8, wzr, hs */
  ARC_W_W(c, 0, (ARC_COND(c, 2) ? (ARC_W_R(c, 8)) : (~(uint32_t)(ARC_W_R(c, 31)))));
L_e38a0:;
  /* e38a0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e38a4: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e38a8: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e38ac: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e38b0: ret  */
  return;
L_e38b4:;
  /* e38b4: bl #0xe1f80 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(932024));
  fn1_e1f80(c);
  /* e38b8: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(932028));
  fn1_a1454(c);
}

void fn1_e7d68(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038877544));
  /* e7d68: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e7d6c: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e7d70: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e7d74: nop  */
  /* nop: no architectural effect here */
  /* e7d78: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* e7d7c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* e7d80: tbz w8, #0, #0xe7d98 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_e7d98;
L_e7d84:;
  /* e7d84: nop  */
  /* nop: no architectural effect here */
  /* e7d88: adr x0, #0x156d40 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1404224)));
  /* e7d8c: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e7d90: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e7d94: ret  */
  return;
L_e7d98:;
  /* e7d98: nop  */
  /* nop: no architectural effect here */
  /* e7d9c: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* e7da0: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(949668));
  fn1_1424b8(c);
  /* e7da4: cbz w0, #0xe7d84 */
  if ((ARC_W_R(c, 0)) == 0) goto L_e7d84;
  /* e7da8: nop  */
  /* nop: no architectural effect here */
  /* e7dac: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* e7db0: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(949684));
  fn1_1424d0(c);
  /* e7db4: b #0xe7d84 */
  goto L_e7d84;
}

void fn1_ea7c4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038888388));
  /* ea7c4: bti c */
  /* bti: no architectural effect here */
  /* ea7c8: ldr x1, [x0] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 0)));
  /* ea7cc: cbz x1, #0xea7d8 */
  if ((ARC_X_R(c, 1)) == 0) goto L_ea7d8;
  /* ea7d0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* ea7d4: b #0x143208 */
  fn1_143208(c); return;
L_ea7d8:;
  /* ea7d8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ea7dc: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ea7e0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ea7e4: mov w0, #3 */
  ARC_W_W(c, 0, UINT64_C(3));
  /* ea7e8: bl #0xe9be0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960492));
  fn1_e9be0(c);
}

void fn1_ebf28(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038894376));
  /* ebf28: bti c */
  /* bti: no architectural effect here */
  /* ebf2c: cmp w1, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(1));
  /* ebf30: b.eq #0xebf40 */
  if (ARC_COND(c, 0)) goto L_ebf40;
  /* ebf34: cmp w1, #0xfff */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(4095));
  /* ebf38: b.gt #0xebf40 */
  if (ARC_COND(c, 12)) goto L_ebf40;
  /* ebf3c: b #0xe7af0 */
  fn1_e7af0(c); return;
L_ebf40:;
  /* ebf40: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ebf44: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ebf48: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* ebf4c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ebf50: mov w0, #0x28 */
  ARC_W_W(c, 0, UINT64_C(40));
  /* ebf54: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* ebf58: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(966492));
  fn1_1428f0(c);
  /* ebf5c: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* ebf60: mov w9, #0x7272 */
  ARC_W_W(c, 9, UINT64_C(29298));
  /* ebf64: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* ebf68: ldr q0, [x8, #0xac0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2752))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2752)) + 8));
  /* ebf6c: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* ebf70: add x8, x8, #0x7e */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(126)));
  /* ebf74: ldp q1, q2, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 2, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* ebf78: movk w9, #0x726f, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1919877120)));
  /* ebf7c: stur w9, [x0, #0x1f] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(31)), ARC_W_R(c, 9));
  /* ebf80: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* ebf84: stp q1, q2, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* ebf88: strb wzr, [x0, #0x23] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(35)), ARC_W_R(c, 31));
  /* ebf8c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* ebf90: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ebf94: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ebf98: ret  */
  return;
}

void fn1_ed9d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038901208));
  /* ed9d8: bti c */
  /* bti: no architectural effect here */
  /* ed9dc: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* ed9e0: ret  */
  return;
}

void fn1_f1f60(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038919008));
  /* f1f60: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f1f64: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* f1f68: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f1f6c: stp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* f1f70: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* f1f74: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f1f78: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f1f7c: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* f1f80: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* f1f84: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f1f88: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f1f8c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f1f90: bl #0x143610 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(991124));
  fn1_143610(c);
  /* f1f94: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* f1f98: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f1f9c: b.ne #0xf20dc */
  if (ARC_COND(c, 1)) goto L_f20dc;
  /* f1fa0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f1fa4: nop  */
  /* nop: no architectural effect here */
  /* f1fa8: adr x26, #0x15dc40 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f1fac: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f1fb0: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f1fb4: ldr x22, [x8, #0x30] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f1fb8: cmp x22, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 26));
  /* f1fbc: stur x22, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 22));
  /* f1fc0: b.eq #0xf1fd0 */
  if (ARC_COND(c, 0)) goto L_f1fd0;
  /* f1fc4: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f1fc8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f1fcc: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(991184));
  fn1_db2e0(c);
L_f1fd0:;
  /* f1fd0: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f1fd4: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* f1fd8: ldr x1, [x1, #0xb50] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2896))));
  /* f1fdc: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(991200));
  fn1_143748(c);
  /* f1fe0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* f1fe4: cmp x22, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 26));
  /* f1fe8: b.eq #0xf200c */
  if (ARC_COND(c, 0)) goto L_f200c;
  /* f1fec: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f1ff0: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f1ff4: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(991224));
  fn1_bd950(c);
  /* f1ff8: cbnz x0, #0xf200c */
  if ((ARC_X_R(c, 0)) != 0) goto L_f200c;
  /* f1ffc: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f2000: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* f2004: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f2008: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(991244));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f200c:;
  /* f200c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f2010: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f2014: add x22, x19, x8 */
  ARC_X_W(c, 22, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f2018: ldr w3, [x22, #0x90] */
  ARC_W_W(c, 3, arc_ld32((ARC_X_R(c, 22) + INT64_C(144))));
  /* f201c: ldr x23, [x22, #0x28] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 22) + INT64_C(40))));
  /* f2020: cmn w3, #1 */
  (void)arc_add32(c, ARC_W_R(c, 3), UINT64_C(1), 0);
  /* f2024: b.ne #0xf2098 */
  if (ARC_COND(c, 1)) goto L_f2098;
  /* f2028: ldr x24, [x22, #0x30] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 22) + INT64_C(48))));
  /* f202c: cmp x24, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 26));
  /* f2030: stur x24, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 24));
  /* f2034: b.eq #0xf2044 */
  if (ARC_COND(c, 0)) goto L_f2044;
  /* f2038: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f203c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f2040: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(991300));
  fn1_db2e0(c);
L_f2044:;
  /* f2044: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f2048: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* f204c: ldr x1, [x1, #0xb40] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2880))));
  /* f2050: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(991316));
  fn1_143748(c);
  /* f2054: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f2058: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* f205c: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* f2060: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(991332));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f2064: mov w25, w0 */
  ARC_W_W(c, 25, ARC_W_R(c, 0));
  /* f2068: cmp x24, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 26));
  /* f206c: b.eq #0xf2090 */
  if (ARC_COND(c, 0)) goto L_f2090;
  /* f2070: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f2074: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f2078: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(991356));
  fn1_bd950(c);
  /* f207c: cbnz x0, #0xf2090 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f2090;
  /* f2080: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f2084: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f2088: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f208c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(991376));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f2090:;
  /* f2090: and w3, w25, #0xff */
  ARC_W_W(c, 3, (ARC_W_R(c, 25) & UINT64_C(255)));
  /* f2094: str w3, [x22, #0x90] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(144)), ARC_W_R(c, 3));
L_f2098:;
  /* f2098: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* f209c: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* f20a0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f20a4: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* f20a8: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* f20ac: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* f20b0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(991412));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f20b4: cbnz x0, #0xf20dc */
  if ((ARC_X_R(c, 0)) != 0) goto L_f20dc;
  /* f20b8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f20bc: mov w10, #5 */
  ARC_W_W(c, 10, UINT64_C(5));
  /* f20c0: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f20c4: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f20c8: ldp w9, w11, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* f20cc: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* f20d0: tst w11, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & ARC_W_R(c, 9)));
  /* f20d4: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f20d8: b.ne #0xf2108 */
  if (ARC_COND(c, 1)) goto L_f2108;
L_f20dc:;
  /* f20dc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f20e0: bl #0x143628 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(991460));
  fn1_143628(c);
L_f20e4:;
  /* f20e4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f20e8: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f20ec: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f20f0: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* f20f4: ldp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* f20f8: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f20fc: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* f2100: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f2104: ret  */
  return;
L_f2108:;
  /* f2108: nop  */
  /* nop: no architectural effect here */
  /* f210c: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f2110: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(991508));
  fn1_ec720(c);
  /* f2114: b #0xf2140 */
  goto L_f2140;
  /* f2118: cmp x24, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 26));
  /* f211c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f2120: b.eq #0xf2174 */
  if (ARC_COND(c, 0)) goto L_f2174;
  /* f2124: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f2128: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f212c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(991536));
  fn1_bd950(c);
  /* f2130: cbnz x0, #0xf2174 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f2174;
  /* f2134: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f2138: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f213c: b #0xf216c */
  goto L_f216c;
L_f2140:;
  /* f2140: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f2144: b #0xf2174 */
  goto L_f2174;
  /* f2148: cmp x22, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 26));
  /* f214c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f2150: b.eq #0xf2174 */
  if (ARC_COND(c, 0)) goto L_f2174;
  /* f2154: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f2158: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f215c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(991584));
  fn1_bd950(c);
  /* f2160: cbnz x0, #0xf2174 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f2174;
  /* f2164: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f2168: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
L_f216c:;
  /* f216c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f2170: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(991604));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f2174:;
  /* f2174: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f2178: bl #0x143628 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(991612));
  fn1_143628(c);
  /* f217c: b #0xf2184 */
  goto L_f2184;
  /* f2180: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_f2184:;
  /* f2184: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f2188: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(991628));
  fn1_142548(c);
  /* f218c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f2190: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f2194: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f2198: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* f219c: ldrb w10, [x8, #0x24] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f21a0: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f21a4: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f21a8: tbnz w10, #0, #0xf21b4 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_f21b4;
  /* f21ac: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(991664));
  fn1_142980(c);
  /* f21b0: b #0xf20e4 */
  goto L_f20e4;
L_f21b4:;
  /* f21b4: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(991672));
  fn1_1429b0(c);
  /* f21b8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f21bc: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(991680));
  fn1_142980(c);
  /* f21c0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f21c4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(991688));
  fn1_9cc20(c);
  /* f21c8: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(991692));
  fn1_a1454(c);
}

void fn1_f4414(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038928404));
  /* f4414: bti c */
  /* bti: no architectural effect here */
  /* f4418: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* f441c: ret  */
  return;
}

void fn1_f89b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038946224));
  /* f89b0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f89b4: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* f89b8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f89bc: str x25, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 25));
  /* f89c0: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* f89c4: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f89c8: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f89cc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f89d0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* f89d4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f89d8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f89dc: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f89e0: bl #0x143688 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1018340));
  fn1_143688(c);
  /* f89e4: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* f89e8: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f89ec: b.ne #0xf8b34 */
  if (ARC_COND(c, 1)) goto L_f8b34;
  /* f89f0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f89f4: nop  */
  /* nop: no architectural effect here */
  /* f89f8: adr x25, #0x15dc40 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f89fc: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f8a00: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f8a04: ldr x22, [x8, #0x30] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f8a08: cmp x22, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 25));
  /* f8a0c: str x22, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 22));
  /* f8a10: b.eq #0xf8a20 */
  if (ARC_COND(c, 0)) goto L_f8a20;
  /* f8a14: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f8a18: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f8a1c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1018400));
  fn1_db2e0(c);
L_f8a20:;
  /* f8a20: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f8a24: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* f8a28: ldr x1, [x1, #0xb68] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2920))));
  /* f8a2c: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1018416));
  fn1_143748(c);
  /* f8a30: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* f8a34: cmp x22, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 25));
  /* f8a38: b.eq #0xf8a5c */
  if (ARC_COND(c, 0)) goto L_f8a5c;
  /* f8a3c: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f8a40: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f8a44: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1018440));
  fn1_bd950(c);
  /* f8a48: cbnz x0, #0xf8a5c */
  if ((ARC_X_R(c, 0)) != 0) goto L_f8a5c;
  /* f8a4c: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f8a50: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* f8a54: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f8a58: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1018460));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f8a5c:;
  /* f8a5c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f8a60: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f8a64: add x22, x19, x8 */
  ARC_X_W(c, 22, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f8a68: ldr w3, [x22, #0x90] */
  ARC_W_W(c, 3, arc_ld32((ARC_X_R(c, 22) + INT64_C(144))));
  /* f8a6c: ldr x23, [x22, #0x28] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 22) + INT64_C(40))));
  /* f8a70: cmn w3, #1 */
  (void)arc_add32(c, ARC_W_R(c, 3), UINT64_C(1), 0);
  /* f8a74: b.ne #0xf8af0 */
  if (ARC_COND(c, 1)) goto L_f8af0;
  /* f8a78: ldr x24, [x22, #0x30] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 22) + INT64_C(48))));
  /* f8a7c: cmp x24, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 25));
  /* f8a80: str x24, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 24));
  /* f8a84: b.eq #0xf8a94 */
  if (ARC_COND(c, 0)) goto L_f8a94;
  /* f8a88: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f8a8c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f8a90: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1018516));
  fn1_db2e0(c);
L_f8a94:;
  /* f8a94: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f8a98: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* f8a9c: ldr x1, [x1, #0xb58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2904))));
  /* f8aa0: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1018532));
  fn1_143748(c);
  /* f8aa4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f8aa8: ldr x8, [x8, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* f8aac: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* f8ab0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1018548));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f8ab4: mov w3, w0 */
  ARC_W_W(c, 3, ARC_W_R(c, 0));
  /* f8ab8: cmp x24, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 25));
  /* f8abc: b.eq #0xf8aec */
  if (ARC_COND(c, 0)) goto L_f8aec;
  /* f8ac0: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f8ac4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f8ac8: mov w25, w3 */
  ARC_W_W(c, 25, ARC_W_R(c, 3));
  /* f8acc: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1018576));
  fn1_bd950(c);
  /* f8ad0: mov w3, w25 */
  ARC_W_W(c, 3, ARC_W_R(c, 25));
  /* f8ad4: cbnz x0, #0xf8aec */
  if ((ARC_X_R(c, 0)) != 0) goto L_f8aec;
  /* f8ad8: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f8adc: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f8ae0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f8ae4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1018600));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f8ae8: mov w3, w25 */
  ARC_W_W(c, 3, ARC_W_R(c, 25));
L_f8aec:;
  /* f8aec: str w3, [x22, #0x90] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(144)), ARC_W_R(c, 3));
L_f8af0:;
  /* f8af0: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* f8af4: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* f8af8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f8afc: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* f8b00: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* f8b04: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* f8b08: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1018636));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f8b0c: cbnz x0, #0xf8b34 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f8b34;
  /* f8b10: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f8b14: mov w10, #5 */
  ARC_W_W(c, 10, UINT64_C(5));
  /* f8b18: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f8b1c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f8b20: ldp w9, w11, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* f8b24: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* f8b28: tst w11, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & ARC_W_R(c, 9)));
  /* f8b2c: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f8b30: b.ne #0xf8b60 */
  if (ARC_COND(c, 1)) goto L_f8b60;
L_f8b34:;
  /* f8b34: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f8b38: bl #0x1436a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1018684));
  fn1_1436a0(c);
L_f8b3c:;
  /* f8b3c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f8b40: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f8b44: ldr x25, [sp, #0x20] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(32))));
  /* f8b48: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f8b4c: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* f8b50: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f8b54: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* f8b58: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f8b5c: ret  */
  return;
L_f8b60:;
  /* f8b60: nop  */
  /* nop: no architectural effect here */
  /* f8b64: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f8b68: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1018732));
  fn1_ec720(c);
  /* f8b6c: b #0xf8b98 */
  goto L_f8b98;
  /* f8b70: cmp x24, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 25));
  /* f8b74: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f8b78: b.eq #0xf8bcc */
  if (ARC_COND(c, 0)) goto L_f8bcc;
  /* f8b7c: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f8b80: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f8b84: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1018760));
  fn1_bd950(c);
  /* f8b88: cbnz x0, #0xf8bcc */
  if ((ARC_X_R(c, 0)) != 0) goto L_f8bcc;
  /* f8b8c: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f8b90: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f8b94: b #0xf8bc4 */
  goto L_f8bc4;
L_f8b98:;
  /* f8b98: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f8b9c: b #0xf8bcc */
  goto L_f8bcc;
  /* f8ba0: cmp x22, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 25));
  /* f8ba4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f8ba8: b.eq #0xf8bcc */
  if (ARC_COND(c, 0)) goto L_f8bcc;
  /* f8bac: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f8bb0: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f8bb4: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1018808));
  fn1_bd950(c);
  /* f8bb8: cbnz x0, #0xf8bcc */
  if ((ARC_X_R(c, 0)) != 0) goto L_f8bcc;
  /* f8bbc: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f8bc0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
L_f8bc4:;
  /* f8bc4: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f8bc8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1018828));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f8bcc:;
  /* f8bcc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f8bd0: bl #0x1436a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1018836));
  fn1_1436a0(c);
  /* f8bd4: b #0xf8bdc */
  goto L_f8bdc;
  /* f8bd8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_f8bdc:;
  /* f8bdc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f8be0: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1018852));
  fn1_142548(c);
  /* f8be4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f8be8: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f8bec: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f8bf0: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* f8bf4: ldrb w10, [x8, #0x24] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f8bf8: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f8bfc: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f8c00: tbnz w10, #0, #0xf8c0c */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_f8c0c;
  /* f8c04: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1018888));
  fn1_142980(c);
  /* f8c08: b #0xf8b3c */
  goto L_f8b3c;
L_f8c0c:;
  /* f8c0c: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1018896));
  fn1_1429b0(c);
  /* f8c10: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f8c14: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1018904));
  fn1_142980(c);
  /* f8c18: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f8c1c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1018912));
  fn1_9cc20(c);
  /* f8c20: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1018916));
  fn1_a1454(c);
}

void fn1_fd66c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038965868));
  /* fd66c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fd670: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fd674: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* fd678: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fd67c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fd680: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fd684: ldr x8, [x8, #0xb10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2832))));
  /* fd688: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* fd68c: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* fd690: add x10, x8, #0x18 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* fd694: add x8, x8, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* fd698: add x21, x0, x9 */
  ARC_X_W(c, 21, (ARC_X_R(c, 0) + ARC_X_R(c, 9)));
  /* fd69c: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fd6a0: ldr x9, [x9, #0xae0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2784))));
  /* fd6a4: str x10, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 10));
  /* fd6a8: mov x19, x21 */
  ARC_X_W(c, 19, ARC_X_R(c, 21));
  /* fd6ac: ldrb w10, [x21, #0x50] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 21) + INT64_C(80))));
  /* fd6b0: str x8, [x19, #0x78]! */
  { const uint64_t _a = (ARC_X_R(c, 19) + INT64_C(120));
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(120));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* fd6b4: add x8, x9, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* fd6b8: str x8, [x21, #0x10] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(16)), ARC_X_R(c, 8));
  /* fd6bc: tbz w10, #0, #0xfd6d0 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) == 0) goto L_fd6d0;
  /* fd6c0: ldr x8, [x21, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(80))));
  /* fd6c4: ldr x0, [x21, #0x60] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + INT64_C(96))));
  /* fd6c8: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* fd6cc: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1038032));
  fn1_142608(c);
L_fd6d0:;
  /* fd6d0: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fd6d4: nop  */
  /* nop: no architectural effect here */
  /* fd6d8: adr x9, #0x15dc40 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1432640)));
  /* fd6dc: ldr x8, [x8, #0xaa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2728))));
  /* fd6e0: ldr x20, [x21, #0x18] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 21) + INT64_C(24))));
  /* fd6e4: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* fd6e8: cmp x20, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 9));
  /* fd6ec: str x8, [x21, #0x10] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(16)), ARC_X_R(c, 8));
  /* fd6f0: b.eq #0xfd714 */
  if (ARC_COND(c, 0)) goto L_fd714;
  /* fd6f4: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* fd6f8: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fd6fc: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1038080));
  fn1_bd950(c);
  /* fd700: cbnz x0, #0xfd714 */
  if ((ARC_X_R(c, 0)) != 0) goto L_fd714;
  /* fd704: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* fd708: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fd70c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fd710: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1038100));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fd714:;
  /* fd714: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fd718: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fd71c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* fd720: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fd724: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fd728: b #0x1433b8 */
  fn1_1433b8(c); return;
}

void fn1_104878(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038995064));
  /* 104878: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 10487c: sub sp, sp, #0x100 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(256)));
  /* 104880: stp x29, x30, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 104884: stp x28, x27, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 104888: stp x26, x25, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 10488c: stp x24, x23, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 104890: stp x22, x21, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 104894: stp x20, x19, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 104898: add x29, sp, #0xa0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(160)));
  /* 10489c: sub x8, x3, x2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) - ARC_X_R(c, 2)));
  /* 1048a0: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* 1048a4: mov x19, x5 */
  ARC_X_W(c, 19, ARC_X_R(c, 5));
  /* 1048a8: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* 1048ac: movk x9, #0xaaab */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744073709486080)) | UINT64_C(43691)));
  /* 1048b0: mov x26, x4 */
  ARC_X_W(c, 26, ARC_X_R(c, 4));
  /* 1048b4: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* 1048b8: mov x23, x2 */
  ARC_X_W(c, 23, ARC_X_R(c, 2));
  /* 1048bc: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1048c0: mul x27, x8, x9 */
  ARC_X_W(c, 27, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9))));
  /* 1048c4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1048c8: str w6, [sp, #0x38] */
  arc_st32(((c)->sp + INT64_C(56)), ARC_W_R(c, 6));
  /* 1048cc: cmp x27, #0x65 */
  (void)arc_sub64(c, ARC_X_R(c, 27), UINT64_C(101));
  /* 1048d0: b.lo #0x1048ec */
  if (ARC_COND(c, 3)) goto L_1048ec;
  /* 1048d4: mov x0, x27 */
  ARC_X_W(c, 0, ARC_X_R(c, 27));
  /* 1048d8: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1067228));
  fn1_1428a8(c);
  /* 1048dc: str x0, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 0));
  /* 1048e0: str x0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 0));
  /* 1048e4: cbnz x0, #0x1048f8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_1048f8;
  /* 1048e8: bl #0x142c08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1067244));
  fn1_142c08(c);
L_1048ec:;
  /* 1048ec: add x8, sp, #0x3c */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(60)));
  /* 1048f0: str xzr, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 31));
  /* 1048f4: str x8, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 8));
L_1048f8:;
  /* 1048f8: cmp x23, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 22));
  /* 1048fc: stp x21, x20, [sp, #0x28] */
  { const uint64_t _pa = ((c)->sp + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* 104900: str x19, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 19));
  /* 104904: b.eq #0x104954 */
  if (ARC_COND(c, 0)) goto L_104954;
  /* 104908: ldr x10, [sp, #0x20] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(32))));
  /* 10490c: mov x21, xzr */
  ARC_X_W(c, 21, ARC_X_R(c, 31));
  /* 104910: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 104914: mov x9, x23 */
  ARC_X_W(c, 9, ARC_X_R(c, 23));
L_104918:;
  /* 104918: ldrb w11, [x9] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 9)));
  /* 10491c: ldr x12, [x9, #8] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 104920: add x9, x9, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(24)));
  /* 104924: lsr x13, x11, #1 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(1)) & 63)));
  /* 104928: tst w11, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & UINT64_C(1)));
  /* 10492c: csel x11, x13, x12, eq */
  ARC_X_W(c, 11, (ARC_COND(c, 0) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 12)));
  /* 104930: cmp x11, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(0));
  /* 104934: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* 104938: cinc w12, w8, eq */
  ARC_W_W(c, 12, (ARC_COND(c, 0) ? (ARC_W_R(c, 8)) + 1 : (ARC_W_R(c, 8))));
  /* 10493c: cinc x21, x21, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 21)) + 1 : (ARC_X_R(c, 21))));
  /* 104940: cmp x9, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 22));
  /* 104944: sub x27, x27, x11 */
  ARC_X_W(c, 27, (ARC_X_R(c, 27) - ARC_X_R(c, 11)));
  /* 104948: strb w12, [x10], #1 */
  { const uint64_t _a = ARC_X_R(c, 10);
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 12));
  }
  /* 10494c: b.ne #0x104918 */
  if (ARC_COND(c, 1)) goto L_104918;
  /* 104950: b #0x10495c */
  goto L_10495c;
L_104954:;
  /* 104954: mov x27, xzr */
  ARC_X_W(c, 27, ARC_X_R(c, 31));
  /* 104958: mov x21, xzr */
  ARC_X_W(c, 21, ARC_X_R(c, 31));
L_10495c:;
  /* 10495c: mov x24, xzr */
  ARC_X_W(c, 24, ARC_X_R(c, 31));
  /* 104960: str x23, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 23));
L_104964:;
  /* 104964: ldr x25, [sp, #0x28] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(40))));
  /* 104968: mov x19, x24 */
  ARC_X_W(c, 19, ARC_X_R(c, 24));
  /* 10496c: ldr x0, [x25] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 25)));
  /* 104970: cbz x0, #0x10498c */
  if ((ARC_X_R(c, 0)) == 0) goto L_10498c;
  /* 104974: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 104978: ldr x24, [sp, #0x30] */
  ARC_X_W(c, 24, arc_ld64(((c)->sp + INT64_C(48))));
  /* 10497c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 104980: b.eq #0x1049a0 */
  if (ARC_COND(c, 0)) goto L_1049a0;
  /* 104984: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 104988: b #0x1049ac */
  goto L_1049ac;
L_10498c:;
  /* 10498c: ldr x24, [sp, #0x30] */
  ARC_X_W(c, 24, arc_ld64(((c)->sp + INT64_C(48))));
  /* 104990: mov w20, #1 */
  ARC_W_W(c, 20, UINT64_C(1));
  /* 104994: cbnz x24, #0x1049c4 */
  if ((ARC_X_R(c, 24)) != 0) goto L_1049c4;
L_104998:;
  /* 104998: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 10499c: b #0x1049f4 */
  goto L_1049f4;
L_1049a0:;
  /* 1049a0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1049a4: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1049a8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1067436));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1049ac:;
  /* 1049ac: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1049b0: b.eq #0x104b28 */
  if (ARC_COND(c, 0)) goto L_104b28;
  /* 1049b4: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 1049b8: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 1049bc: cset w20, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? 1 : 0));
  /* 1049c0: cbz x24, #0x104998 */
  if ((ARC_X_R(c, 24)) == 0) goto L_104998;
L_1049c4:;
  /* 1049c4: ldp x8, x9, [x24, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 24) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1049c8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1049cc: b.eq #0x1049d8 */
  if (ARC_COND(c, 0)) goto L_1049d8;
  /* 1049d0: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 1049d4: b #0x1049e8 */
  goto L_1049e8;
L_1049d8:;
  /* 1049d8: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 1049dc: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1049e0: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 1049e4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1067496));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1049e8:;
  /* 1049e8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1049ec: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 1049f0: csel x24, xzr, x24, eq */
  ARC_X_W(c, 24, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 24)));
L_1049f4:;
  /* 1049f4: ldr x0, [x25] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 25)));
  /* 1049f8: cmp w20, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 20), ARC_W_R(c, 8));
  /* 1049fc: b.eq #0x104ba0 */
  if (ARC_COND(c, 0)) goto L_104ba0;
  /* 104a00: cbz x27, #0x104ba0 */
  if ((ARC_X_R(c, 27)) == 0) goto L_104ba0;
  /* 104a04: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 104a08: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 104a0c: b.eq #0x104a18 */
  if (ARC_COND(c, 0)) goto L_104a18;
  /* 104a10: ldr w28, [x8] */
  ARC_W_W(c, 28, arc_ld32(ARC_X_R(c, 8)));
  /* 104a14: b #0x104a28 */
  goto L_104a28;
L_104a18:;
  /* 104a18: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 104a1c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 104a20: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1067556));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 104a24: mov w28, w0 */
  ARC_W_W(c, 28, ARC_W_R(c, 0));
L_104a28:;
  /* 104a28: ldr w8, [sp, #0x38] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(56))));
  /* 104a2c: str x24, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 24));
  /* 104a30: tbnz w8, #0, #0x104a4c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_104a4c;
  /* 104a34: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 104a38: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* 104a3c: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 104a40: mov w1, w28 */
  ARC_W_W(c, 1, ARC_W_R(c, 28));
  /* 104a44: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1067592));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 104a48: mov w28, w0 */
  ARC_W_W(c, 28, ARC_W_R(c, 0));
L_104a4c:;
  /* 104a4c: cmp x23, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 22));
  /* 104a50: add x24, x19, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* 104a54: b.eq #0x104964 */
  if (ARC_COND(c, 0)) goto L_104964;
  /* 104a58: mov x20, x23 */
  ARC_X_W(c, 20, ARC_X_R(c, 23));
  /* 104a5c: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 104a60: mov w25, wzr */
  ARC_W_W(c, 25, ARC_W_R(c, 31));
  /* 104a64: b #0x104a80 */
  goto L_104a80;
L_104a68:;
  /* 104a68: sub x27, x27, #1 */
  ARC_X_W(c, 27, (ARC_X_R(c, 27) - UINT64_C(1)));
  /* 104a6c: strb wzr, [x23] */
  arc_st8(ARC_X_R(c, 23), ARC_W_R(c, 31));
L_104a70:;
  /* 104a70: add x20, x20, #0x18 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 104a74: add x23, x23, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* 104a78: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* 104a7c: b.eq #0x104afc */
  if (ARC_COND(c, 0)) goto L_104afc;
L_104a80:;
  /* 104a80: ldrb w8, [x23] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 23)));
  /* 104a84: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 104a88: b.ne #0x104a70 */
  if (ARC_COND(c, 1)) goto L_104a70;
  /* 104a8c: ldrb w8, [x20] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 20)));
  /* 104a90: ldr x9, [x20, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 104a94: add x10, x20, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 20) + UINT64_C(4)));
  /* 104a98: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 104a9c: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 104aa0: ldr w1, [x8, x19, lsl #2] */
  ARC_W_W(c, 1, arc_ld32((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 19)) << 2))));
  /* 104aa4: ldr w8, [sp, #0x38] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(56))));
  /* 104aa8: tbnz w8, #0, #0x104ac0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_104ac0;
  /* 104aac: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 104ab0: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* 104ab4: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 104ab8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1067708));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 104abc: mov w1, w0 */
  ARC_W_W(c, 1, ARC_W_R(c, 0));
L_104ac0:;
  /* 104ac0: cmp w28, w1 */
  (void)arc_sub32(c, ARC_W_R(c, 28), ARC_W_R(c, 1));
  /* 104ac4: b.ne #0x104a68 */
  if (ARC_COND(c, 1)) goto L_104a68;
  /* 104ac8: ldrb w8, [x20] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 20)));
  /* 104acc: ldr x9, [x20, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* 104ad0: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 104ad4: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 104ad8: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 104adc: cmp x8, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 24));
  /* 104ae0: b.ne #0x104af4 */
  if (ARC_COND(c, 1)) goto L_104af4;
  /* 104ae4: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
  /* 104ae8: sub x27, x27, #1 */
  ARC_X_W(c, 27, (ARC_X_R(c, 27) - UINT64_C(1)));
  /* 104aec: add x21, x21, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* 104af0: strb w8, [x23] */
  arc_st8(ARC_X_R(c, 23), ARC_W_R(c, 8));
L_104af4:;
  /* 104af4: mov w25, #1 */
  ARC_W_W(c, 25, UINT64_C(1));
  /* 104af8: b #0x104a70 */
  goto L_104a70;
L_104afc:;
  /* 104afc: ldr x23, [sp, #0x18] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(24))));
  /* 104b00: tbz w25, #0, #0x104964 */
  if (((ARC_W_R(c, 25)) >> 0 & 1) == 0) goto L_104964;
  /* 104b04: ldr x8, [sp, #0x28] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(40))));
  /* 104b08: ldr x0, [x8] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 8)));
  /* 104b0c: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 104b10: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 104b14: b.eq #0x104b38 */
  if (ARC_COND(c, 0)) goto L_104b38;
  /* 104b18: ldr x9, [sp, #0x20] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(32))));
  /* 104b1c: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 104b20: str x8, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 8));
  /* 104b24: b #0x104b48 */
  goto L_104b48;
L_104b28:;
  /* 104b28: mov w20, #1 */
  ARC_W_W(c, 20, UINT64_C(1));
  /* 104b2c: str xzr, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 31));
  /* 104b30: cbnz x24, #0x1049c4 */
  if ((ARC_X_R(c, 24)) != 0) goto L_1049c4;
  /* 104b34: b #0x104998 */
  goto L_104998;
L_104b38:;
  /* 104b38: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 104b3c: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 104b40: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1067844));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 104b44: ldr x9, [sp, #0x20] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(32))));
L_104b48:;
  /* 104b48: add x8, x21, x27 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) + ARC_X_R(c, 27)));
  /* 104b4c: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* 104b50: mov x8, x23 */
  ARC_X_W(c, 8, ARC_X_R(c, 23));
  /* 104b54: b.lo #0x104964 */
  if (ARC_COND(c, 3)) goto L_104964;
  /* 104b58: b #0x104b6c */
  goto L_104b6c;
L_104b5c:;
  /* 104b5c: add x8, x8, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* 104b60: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 104b64: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* 104b68: b.eq #0x104964 */
  if (ARC_COND(c, 0)) goto L_104964;
L_104b6c:;
  /* 104b6c: ldrb w10, [x9] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 9)));
  /* 104b70: cmp w10, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(2));
  /* 104b74: b.ne #0x104b5c */
  if (ARC_COND(c, 1)) goto L_104b5c;
  /* 104b78: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* 104b7c: ldr x11, [x8, #8] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 104b80: lsr x12, x10, #1 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* 104b84: tst w10, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1)));
  /* 104b88: csel x10, x12, x11, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* 104b8c: cmp x10, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 24));
  /* 104b90: b.eq #0x104b5c */
  if (ARC_COND(c, 0)) goto L_104b5c;
  /* 104b94: sub x21, x21, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) - UINT64_C(1)));
  /* 104b98: strb wzr, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 31));
  /* 104b9c: b #0x104b5c */
  goto L_104b5c;
L_104ba0:;
  /* 104ba0: cbz x0, #0x104bbc */
  if ((ARC_X_R(c, 0)) == 0) goto L_104bbc;
  /* 104ba4: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 104ba8: ldr x20, [sp, #8] */
  ARC_X_W(c, 20, arc_ld64(((c)->sp + INT64_C(8))));
  /* 104bac: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 104bb0: b.eq #0x104bd0 */
  if (ARC_COND(c, 0)) goto L_104bd0;
  /* 104bb4: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 104bb8: b #0x104bdc */
  goto L_104bdc;
L_104bbc:;
  /* 104bbc: ldr x20, [sp, #8] */
  ARC_X_W(c, 20, arc_ld64(((c)->sp + INT64_C(8))));
  /* 104bc0: mov w19, #1 */
  ARC_W_W(c, 19, UINT64_C(1));
  /* 104bc4: cbnz x24, #0x104bf4 */
  if ((ARC_X_R(c, 24)) != 0) goto L_104bf4;
L_104bc8:;
  /* 104bc8: tbnz w19, #0, #0x104c28 */
  if (((ARC_W_R(c, 19)) >> 0 & 1) != 0) goto L_104c28;
  /* 104bcc: b #0x104c34 */
  goto L_104c34;
L_104bd0:;
  /* 104bd0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 104bd4: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 104bd8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1067996));
  arc_dispatch(c, ARC_X_R(c, 8));
L_104bdc:;
  /* 104bdc: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 104be0: b.eq #0x104c9c */
  if (ARC_COND(c, 0)) goto L_104c9c;
  /* 104be4: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 104be8: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 104bec: cset w19, eq */
  ARC_W_W(c, 19, (ARC_COND(c, 0) ? 1 : 0));
  /* 104bf0: cbz x24, #0x104bc8 */
  if ((ARC_X_R(c, 24)) == 0) goto L_104bc8;
L_104bf4:;
  /* 104bf4: ldp x8, x9, [x24, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 24) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 104bf8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 104bfc: b.eq #0x104c08 */
  if (ARC_COND(c, 0)) goto L_104c08;
  /* 104c00: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 104c04: b #0x104c18 */
  goto L_104c18;
L_104c08:;
  /* 104c08: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 104c0c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 104c10: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 104c14: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1068056));
  arc_dispatch(c, ARC_X_R(c, 8));
L_104c18:;
  /* 104c18: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 104c1c: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 104c20: eor w8, w19, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 19) ^ ARC_W_R(c, 8)));
  /* 104c24: tbnz w8, #0, #0x104c34 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_104c34;
L_104c28:;
  /* 104c28: ldr w8, [x20] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 20)));
  /* 104c2c: orr w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(2)));
  /* 104c30: str w8, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 8));
L_104c34:;
  /* 104c34: cmp x23, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 22));
  /* 104c38: b.eq #0x104c5c */
  if (ARC_COND(c, 0)) goto L_104c5c;
  /* 104c3c: ldr x9, [sp, #0x20] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(32))));
L_104c40:;
  /* 104c40: ldrb w8, [x9] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 9)));
  /* 104c44: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 104c48: b.eq #0x104c68 */
  if (ARC_COND(c, 0)) goto L_104c68;
  /* 104c4c: add x23, x23, #0x18 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(24)));
  /* 104c50: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 104c54: cmp x23, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 22));
  /* 104c58: b.ne #0x104c40 */
  if (ARC_COND(c, 1)) goto L_104c40;
L_104c5c:;
  /* 104c5c: ldr w8, [x20] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 20)));
  /* 104c60: orr w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* 104c64: str w8, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 8));
L_104c68:;
  /* 104c68: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* 104c6c: cbz x0, #0x104c74 */
  if ((ARC_X_R(c, 0)) == 0) goto L_104c74;
  /* 104c70: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1068148));
  fn1_142800(c);
L_104c74:;
  /* 104c74: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 104c78: ldp x20, x19, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 104c7c: ldp x22, x21, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 104c80: ldp x24, x23, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 104c84: ldp x26, x25, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 104c88: ldp x28, x27, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 104c8c: ldp x29, x30, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 104c90: add sp, sp, #0x100 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(256)));
  /* 104c94: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 104c98: ret  */
  return;
L_104c9c:;
  /* 104c9c: mov w19, #1 */
  ARC_W_W(c, 19, UINT64_C(1));
  /* 104ca0: str xzr, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 31));
  /* 104ca4: cbnz x24, #0x104bf4 */
  if ((ARC_X_R(c, 24)) != 0) goto L_104bf4;
  /* 104ca8: b #0x104bc8 */
  goto L_104bc8;
  /* 104cac: b #0x104cbc */
  goto L_104cbc;
  /* 104cb0: b #0x104cbc */
  goto L_104cbc;
  /* 104cb4: b #0x104cbc */
  goto L_104cbc;
  /* 104cb8: b #0x104cbc */
  goto L_104cbc;
L_104cbc:;
  /* 104cbc: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* 104cc0: cbz x8, #0x104cd4 */
  if ((ARC_X_R(c, 8)) == 0) goto L_104cd4;
  /* 104cc4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 104cc8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 104ccc: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1068240));
  fn1_142800(c);
  /* 104cd0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
L_104cd4:;
  /* 104cd4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1068248));
  fn1_9cc20(c);
}

void fn1_110db0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039045552));
  /* 110db0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 110db4: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 110db8: stp x26, x25, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 110dbc: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 110dc0: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 110dc4: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 110dc8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 110dcc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 110dd0: ldr x0, [x0] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 0)));
  /* 110dd4: mov w22, w4 */
  ARC_W_W(c, 22, ARC_W_R(c, 4));
  /* 110dd8: mov x23, x3 */
  ARC_X_W(c, 23, ARC_X_R(c, 3));
  /* 110ddc: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 110de0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 110de4: cbz x0, #0x110e44 */
  if ((ARC_X_R(c, 0)) == 0) goto L_110e44;
  /* 110de8: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 110dec: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 110df0: b.eq #0x110e0c */
  if (ARC_COND(c, 0)) goto L_110e0c;
  /* 110df4: cbz x20, #0x110e8c */
  if ((ARC_X_R(c, 20)) == 0) goto L_110e8c;
  /* 110df8: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 110dfc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 110e00: b.ne #0x110ea4 */
  if (ARC_COND(c, 1)) goto L_110ea4;
  /* 110e04: mov w24, wzr */
  ARC_W_W(c, 24, ARC_W_R(c, 31));
  /* 110e08: b #0x110e60 */
  goto L_110e60;
L_110e0c:;
  /* 110e0c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 110e10: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 110e14: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1117720));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 110e18: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 110e1c: b.eq #0x110e3c */
  if (ARC_COND(c, 0)) goto L_110e3c;
  /* 110e20: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 110e24: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* 110e28: cset w24, eq */
  ARC_W_W(c, 24, (ARC_COND(c, 0) ? 1 : 0));
  /* 110e2c: cbnz x20, #0x110e4c */
  if ((ARC_X_R(c, 20)) != 0) goto L_110e4c;
L_110e30:;
  /* 110e30: tbnz w24, #0, #0x110ea4 */
  if (((ARC_W_R(c, 24)) >> 0 & 1) != 0) goto L_110ea4;
  /* 110e34: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 110e38: b #0x110e8c */
  goto L_110e8c;
L_110e3c:;
  /* 110e3c: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 110e40: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
L_110e44:;
  /* 110e44: mov w24, #1 */
  ARC_W_W(c, 24, UINT64_C(1));
  /* 110e48: cbz x20, #0x110e30 */
  if ((ARC_X_R(c, 20)) == 0) goto L_110e30;
L_110e4c:;
  /* 110e4c: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 110e50: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 110e54: b.eq #0x110e60 */
  if (ARC_COND(c, 0)) goto L_110e60;
  /* 110e58: tbnz w24, #0, #0x110e8c */
  if (((ARC_W_R(c, 24)) >> 0 & 1) != 0) goto L_110e8c;
  /* 110e5c: b #0x110ea4 */
  goto L_110ea4;
L_110e60:;
  /* 110e60: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 110e64: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 110e68: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 110e6c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1117808));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 110e70: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 110e74: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 110e78: cmp w24, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 24), ARC_W_R(c, 8));
  /* 110e7c: b.eq #0x110ea4 */
  if (ARC_COND(c, 0)) goto L_110ea4;
  /* 110e80: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 110e84: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 110e88: csel x20, xzr, x20, eq */
  ARC_X_W(c, 20, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 20)));
L_110e8c:;
  /* 110e8c: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 110e90: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 110e94: b.eq #0x110eb0 */
  if (ARC_COND(c, 0)) goto L_110eb0;
  /* 110e98: ldrb w1, [x8] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 8)));
  /* 110e9c: tbz w1, #7, #0x110ec4 */
  if (((ARC_W_R(c, 1)) >> 7 & 1) == 0) goto L_110ec4;
  /* 110ea0: b #0x110ed4 */
  goto L_110ed4;
L_110ea4:;
  /* 110ea4: mov w24, wzr */
  ARC_W_W(c, 24, ARC_W_R(c, 31));
  /* 110ea8: mov w8, #6 */
  ARC_W_W(c, 8, UINT64_C(6));
  /* 110eac: b #0x110edc */
  goto L_110edc;
L_110eb0:;
  /* 110eb0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 110eb4: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 110eb8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1117884));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 110ebc: mov w1, w0 */
  ARC_W_W(c, 1, ARC_W_R(c, 0));
  /* 110ec0: tbnz w1, #7, #0x110ed4 */
  if (((ARC_W_R(c, 1)) >> 7 & 1) != 0) goto L_110ed4;
L_110ec4:;
  /* 110ec4: ldr x8, [x23, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 23) + INT64_C(16))));
  /* 110ec8: and x9, x1, #0xff */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) & UINT64_C(255)));
  /* 110ecc: ldr x8, [x8, x9, lsl #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 110ed0: tbnz w8, #6, #0x110f08 */
  if (((ARC_W_R(c, 8)) >> 6 & 1) != 0) goto L_110f08;
L_110ed4:;
  /* 110ed4: mov w24, wzr */
  ARC_W_W(c, 24, ARC_W_R(c, 31));
  /* 110ed8: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
L_110edc:;
  /* 110edc: ldr w9, [x19] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 19)));
  /* 110ee0: orr w8, w9, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) | ARC_W_R(c, 8)));
  /* 110ee4: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_110ee8:;
  /* 110ee8: mov w0, w24 */
  ARC_W_W(c, 0, ARC_W_R(c, 24));
  /* 110eec: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 110ef0: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 110ef4: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 110ef8: ldp x26, x25, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 110efc: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 110f00: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 110f04: ret  */
  return;
L_110f08:;
  /* 110f08: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 110f0c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 110f10: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 110f14: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 110f18: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1117980));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 110f1c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 110f20: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 110f24: and w24, w8, #0xff */
  ARC_W_W(c, 24, (ARC_W_R(c, 8) & UINT64_C(255)));
  /* 110f28: ldp x9, x10, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 110f2c: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 110f30: b.eq #0x110f40 */
  if (ARC_COND(c, 0)) goto L_110f40;
  /* 110f34: add x8, x9, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 110f38: str x8, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 8));
  /* 110f3c: b #0x110f4c */
  goto L_110f4c;
L_110f40:;
  /* 110f40: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 110f44: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 110f48: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1118028));
  arc_dispatch(c, ARC_X_R(c, 8));
L_110f4c:;
  /* 110f4c: mov w26, #0xa */
  ARC_W_W(c, 26, UINT64_C(10));
  /* 110f50: b #0x110f68 */
  goto L_110f68;
L_110f54:;
  /* 110f54: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 110f58: str x9, [x8, #0x18] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(24)), ARC_X_R(c, 9));
L_110f5c:;
  /* 110f5c: mul w8, w24, w26 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 24)) * (uint32_t)(ARC_W_R(c, 26))));
  /* 110f60: sub w22, w22, #1 */
  ARC_W_W(c, 22, (ARC_W_R(c, 22) - UINT64_C(1)));
  /* 110f64: add w24, w8, w25, uxtb */
  ARC_W_W(c, 24, (ARC_W_R(c, 8) + ((uint64_t)(uint8_t)(ARC_W_R(c, 25)))));
L_110f68:;
  /* 110f68: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 110f6c: cbz x0, #0x110fb8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_110fb8;
  /* 110f70: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 110f74: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 110f78: b.eq #0x110f88 */
  if (ARC_COND(c, 0)) goto L_110f88;
  /* 110f7c: mov w25, wzr */
  ARC_W_W(c, 25, ARC_W_R(c, 31));
  /* 110f80: cbnz x20, #0x110fc0 */
  if ((ARC_X_R(c, 20)) != 0) goto L_110fc0;
  /* 110f84: b #0x110fac */
  goto L_110fac;
L_110f88:;
  /* 110f88: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 110f8c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 110f90: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1118100));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 110f94: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 110f98: b.eq #0x110fb4 */
  if (ARC_COND(c, 0)) goto L_110fb4;
  /* 110f9c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 110fa0: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 110fa4: cset w25, eq */
  ARC_W_W(c, 25, (ARC_COND(c, 0) ? 1 : 0));
  /* 110fa8: cbnz x20, #0x110fc0 */
  if ((ARC_X_R(c, 20)) != 0) goto L_110fc0;
L_110fac:;
  /* 110fac: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 110fb0: b #0x110ff0 */
  goto L_110ff0;
L_110fb4:;
  /* 110fb4: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
L_110fb8:;
  /* 110fb8: mov w25, #1 */
  ARC_W_W(c, 25, UINT64_C(1));
  /* 110fbc: cbz x20, #0x110fac */
  if ((ARC_X_R(c, 20)) == 0) goto L_110fac;
L_110fc0:;
  /* 110fc0: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 110fc4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 110fc8: b.eq #0x110fd4 */
  if (ARC_COND(c, 0)) goto L_110fd4;
  /* 110fcc: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
  /* 110fd0: b #0x110ff0 */
  goto L_110ff0;
L_110fd4:;
  /* 110fd4: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 110fd8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 110fdc: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 110fe0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1118180));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 110fe4: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 110fe8: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 110fec: csel x20, xzr, x20, eq */
  ARC_X_W(c, 20, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 20)));
L_110ff0:;
  /* 110ff0: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 110ff4: cmp w25, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 25), ARC_W_R(c, 8));
  /* 110ff8: sub w24, w24, #0x30 */
  ARC_W_W(c, 24, (ARC_W_R(c, 24) - UINT64_C(48)));
  /* 110ffc: b.eq #0x111080 */
  if (ARC_COND(c, 0)) goto L_111080;
  /* 111000: cmp w22, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(2));
  /* 111004: b.lo #0x111080 */
  if (ARC_COND(c, 3)) goto L_111080;
  /* 111008: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11100c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 111010: b.eq #0x111020 */
  if (ARC_COND(c, 0)) goto L_111020;
  /* 111014: ldrb w1, [x8] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 8)));
  /* 111018: tbz w1, #7, #0x111034 */
  if (((ARC_W_R(c, 1)) >> 7 & 1) == 0) goto L_111034;
  /* 11101c: b #0x110ee8 */
  goto L_110ee8;
L_111020:;
  /* 111020: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 111024: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 111028: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1118252));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11102c: mov w1, w0 */
  ARC_W_W(c, 1, ARC_W_R(c, 0));
  /* 111030: tbnz w1, #7, #0x110ee8 */
  if (((ARC_W_R(c, 1)) >> 7 & 1) != 0) goto L_110ee8;
L_111034:;
  /* 111034: ldr x8, [x23, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 23) + INT64_C(16))));
  /* 111038: and x9, x1, #0xff */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) & UINT64_C(255)));
  /* 11103c: ldr x8, [x8, x9, lsl #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 111040: tbz w8, #6, #0x110ee8 */
  if (((ARC_W_R(c, 8)) >> 6 & 1) == 0) goto L_110ee8;
  /* 111044: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 111048: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 11104c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 111050: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 111054: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1118296));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 111058: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11105c: mov w25, w0 */
  ARC_W_W(c, 25, ARC_W_R(c, 0));
  /* 111060: ldp x9, x10, [x8, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 111064: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 111068: b.ne #0x110f54 */
  if (ARC_COND(c, 1)) goto L_110f54;
  /* 11106c: ldr x9, [x8] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 8)));
  /* 111070: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 111074: ldr x9, [x9, #0x50] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(80))));
  /* 111078: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1118332));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 11107c: b #0x110f5c */
  goto L_110f5c;
L_111080:;
  /* 111080: cbz x0, #0x1110d0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1110d0;
  /* 111084: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 111088: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 11108c: b.eq #0x1110a8 */
  if (ARC_COND(c, 0)) goto L_1110a8;
  /* 111090: cbz x20, #0x110ee8 */
  if ((ARC_X_R(c, 20)) == 0) goto L_110ee8;
  /* 111094: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 111098: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 11109c: b.ne #0x111114 */
  if (ARC_COND(c, 1)) goto L_111114;
  /* 1110a0: mov w21, wzr */
  ARC_W_W(c, 21, ARC_W_R(c, 31));
  /* 1110a4: b #0x1110ec */
  goto L_1110ec;
L_1110a8:;
  /* 1110a8: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1110ac: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1110b0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1118388));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1110b4: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1110b8: b.eq #0x1110cc */
  if (ARC_COND(c, 0)) goto L_1110cc;
  /* 1110bc: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 1110c0: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 1110c4: cset w21, eq */
  ARC_W_W(c, 21, (ARC_COND(c, 0) ? 1 : 0));
  /* 1110c8: b #0x1110d4 */
  goto L_1110d4;
L_1110cc:;
  /* 1110cc: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
L_1110d0:;
  /* 1110d0: mov w21, #1 */
  ARC_W_W(c, 21, UINT64_C(1));
L_1110d4:;
  /* 1110d4: cbz x20, #0x111110 */
  if ((ARC_X_R(c, 20)) == 0) goto L_111110;
  /* 1110d8: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1110dc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1110e0: b.eq #0x1110ec */
  if (ARC_COND(c, 0)) goto L_1110ec;
  /* 1110e4: tbnz w21, #0, #0x110ee8 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) != 0) goto L_110ee8;
  /* 1110e8: b #0x111114 */
  goto L_111114;
L_1110ec:;
  /* 1110ec: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1110f0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1110f4: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1110f8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1118460));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1110fc: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 111100: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 111104: eor w8, w21, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 21) ^ ARC_W_R(c, 8)));
  /* 111108: tbnz w8, #0, #0x110ee8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_110ee8;
  /* 11110c: b #0x111114 */
  goto L_111114;
L_111110:;
  /* 111110: tbz w21, #0, #0x110ee8 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) == 0) goto L_110ee8;
L_111114:;
  /* 111114: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
  /* 111118: b #0x110edc */
  goto L_110edc;
}

void fn1_113dac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057836));
  /* 113dac: bti c */
  /* bti: no architectural effect here */
  /* 113db0: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 113db4: ret  */
  return;
}

void fn1_11ad4c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039086412));
  /* 11ad4c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 11ad50: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 11ad54: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 11ad58: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 11ad5c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 11ad60: bl #0x143dc0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1158500));
  fn1_143dc0(c);
  /* 11ad64: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11ad68: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* 11ad6c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 11ad70: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 11ad74: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 11ad78: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_12577c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039129980));
  /* 12577c: bti c */
  /* bti: no architectural effect here */
  /* 125780: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 125784: ldr x16, [x8, #8] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 125788: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_127e30(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039139888));
  /* 127e30: bti c */
  /* bti: no architectural effect here */
  /* 127e34: mov w0, #3 */
  ARC_W_W(c, 0, UINT64_C(3));
  /* 127e38: str x2, [x4] */
  arc_st64(ARC_X_R(c, 4), ARC_X_R(c, 2));
  /* 127e3c: ret  */
  return;
}

void fn1_129fd8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039148504));
  /* 129fd8: bti c */
  /* bti: no architectural effect here */
  /* 129fdc: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 129fe0: ret  */
  return;
}

void fn1_12b984(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039155076));
  /* 12b984: bti c */
  /* bti: no architectural effect here */
  /* 12b988: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 12b98c: ret  */
  return;
}

void fn1_12e358(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039165784));
  /* 12e358: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12e35c: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 12e360: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12e364: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12e368: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 12e36c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 12e370: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 12e374: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 12e378: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 12e37c: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1237888));
  fn1_1441e0(c);
  /* 12e380: str x0, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 0));
  /* 12e384: cbz x0, #0x12e39c */
  if ((ARC_X_R(c, 0)) == 0) goto L_12e39c;
  /* 12e388: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12e38c: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12e390: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 12e394: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12e398: ret  */
  return;
L_12e39c:;
  /* 12e39c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 12e3a0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 12e3a4: bl #0x11dda8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1237928));
  fn1_11dda8(c);
  /* 12e3a8: adrp x0, #0x51000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(331776)));
  /* 12e3ac: add x0, x0, #0x6e6 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1766)));
  /* 12e3b0: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* 12e3b4: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 12e3b8: add x19, sp, #0x18 */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(24)));
  /* 12e3bc: bl #0x125878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1237952));
  fn1_125878(c);
  /* 12e3c0: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* 12e3c4: ldr x9, [sp, #0x28] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(40))));
  /* 12e3c8: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 12e3cc: csinc x0, x9, x19, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* 12e3d0: bl #0x142c98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1237972));
  fn1_142c98(c);
  /* 12e3d4: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* 12e3d8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12e3dc: tbnz w8, #0, #0x12e3f0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12e3f0;
  /* 12e3e0: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 12e3e4: tbnz w8, #0, #0x12e418 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12e418;
L_12e3e8:;
  /* 12e3e8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12e3ec: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1238000));
  fn1_9cc20(c);
L_12e3f0:;
  /* 12e3f0: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 12e3f4: ldr x0, [sp, #0x28] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(40))));
  /* 12e3f8: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 12e3fc: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1238016));
  fn1_142608(c);
  /* 12e400: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 12e404: tbz w8, #0, #0x12e3e8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12e3e8;
  /* 12e408: b #0x12e418 */
  goto L_12e418;
  /* 12e40c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12e410: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 12e414: tbz w8, #0, #0x12e3e8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12e3e8;
L_12e418:;
  /* 12e418: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 12e41c: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12e420: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 12e424: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1238056));
  fn1_142608(c);
  /* 12e428: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12e42c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1238064));
  fn1_9cc20(c);
}

void fn1_134ad8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192280));
  /* 134ad8: bti c */
  /* bti: no architectural effect here */
  /* 134adc: add x0, x0, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* 134ae0: b #0x136b34 */
  fn1_136b34(c); return;
}

void fn1_135e9c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039197340));
  /* 135e9c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 135ea0: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 135ea4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 135ea8: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 135eac: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 135eb0: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 135eb4: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 135eb8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 135ebc: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* 135ec0: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 135ec4: b.eq #0x135f5c */
  if (ARC_COND(c, 0)) goto L_135f5c;
  /* 135ec8: ldrb w24, [x0] */
  ARC_W_W(c, 24, arc_ld8(ARC_X_R(c, 0)));
  /* 135ecc: mov w21, w3 */
  ARC_W_W(c, 21, ARC_W_R(c, 3));
  /* 135ed0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 135ed4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 135ed8: cmp w24, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 24), UINT64_C(45));
  /* 135edc: b.ne #0x135eec */
  if (ARC_COND(c, 1)) goto L_135eec;
  /* 135ee0: add x22, x22, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* 135ee4: cmp x22, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 20));
  /* 135ee8: b.eq #0x135f5c */
  if (ARC_COND(c, 0)) goto L_135f5c;
L_135eec:;
  /* 135eec: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1269488));
  fn1_142a58(c);
  /* 135ef0: ldr w25, [x0] */
  ARC_W_W(c, 25, arc_ld32(ARC_X_R(c, 0)));
  /* 135ef4: str wzr, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 31));
  /* 135ef8: nop  */
  /* nop: no architectural effect here */
  /* 135efc: adr x8, #0x15dc38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 135f00: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 135f04: adrp x26, #0x15d000 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 135f08: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 135f0c: tbz w8, #0, #0x135f94 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_135f94;
L_135f10:;
  /* 135f10: ldr x3, [x26, #0xc30] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 26) + INT64_C(3120))));
  /* 135f14: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 135f18: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 135f1c: mov w2, w21 */
  ARC_W_W(c, 2, ARC_W_R(c, 21));
  /* 135f20: bl #0x1444f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1269540));
  fn1_1444f8(c);
  /* 135f24: ldr w8, [x23] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 23)));
  /* 135f28: cbz w8, #0x135f4c */
  if ((ARC_W_R(c, 8)) == 0) goto L_135f4c;
  /* 135f2c: ldr x9, [sp, #8] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(8))));
  /* 135f30: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* 135f34: b.ne #0x135f5c */
  if (ARC_COND(c, 1)) goto L_135f5c;
  /* 135f38: cmp w8, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(34));
  /* 135f3c: b.ne #0x135f88 */
  if (ARC_COND(c, 1)) goto L_135f88;
  /* 135f40: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 135f44: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 135f48: b #0x135f64 */
  goto L_135f64;
L_135f4c:;
  /* 135f4c: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 135f50: str w25, [x23] */
  arc_st32(ARC_X_R(c, 23), ARC_W_R(c, 25));
  /* 135f54: cmp x8, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* 135f58: b.eq #0x135f88 */
  if (ARC_COND(c, 0)) goto L_135f88;
L_135f5c:;
  /* 135f5c: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 135f60: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
L_135f64:;
  /* 135f64: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_135f68:;
  /* 135f68: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 135f6c: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 135f70: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 135f74: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 135f78: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 135f7c: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 135f80: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 135f84: ret  */
  return;
L_135f88:;
  /* 135f88: cmp w24, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 24), UINT64_C(45));
  /* 135f8c: cneg x0, x0, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? ((uint64_t)0 - (uint64_t)(ARC_X_R(c, 0))) : (ARC_X_R(c, 0))));
  /* 135f90: b #0x135f68 */
  goto L_135f68;
L_135f94:;
  /* 135f94: nop  */
  /* nop: no architectural effect here */
  /* 135f98: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 135f9c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1269664));
  fn1_1424b8(c);
  /* 135fa0: cbz w0, #0x135f10 */
  if ((ARC_W_R(c, 0)) == 0) goto L_135f10;
  /* 135fa4: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 135fa8: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 135fac: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 135fb0: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 135fb4: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1269688));
  fn1_1441e0(c);
  /* 135fb8: str x0, [x26, #0xc30] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 135fbc: nop  */
  /* nop: no architectural effect here */
  /* 135fc0: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 135fc4: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1269704));
  fn1_1424d0(c);
  /* 135fc8: b #0x135f10 */
  goto L_135f10;
  /* 135fcc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 135fd0: nop  */
  /* nop: no architectural effect here */
  /* 135fd4: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 135fd8: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1269724));
  fn1_1424e8(c);
  /* 135fdc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 135fe0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1269732));
  fn1_9cc20(c);
}

void fn1_13907c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039210108));
  /* 13907c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 139080: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 139084: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 139088: str x21, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 21));
  /* 13908c: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 139090: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 139094: mov x8, x1 */
  ARC_X_W(c, 8, ARC_X_R(c, 1));
  /* 139098: mov x1, x2 */
  ARC_X_W(c, 1, ARC_X_R(c, 2));
  /* 13909c: mov x2, x3 */
  ARC_X_W(c, 2, ARC_X_R(c, 3));
  /* 1390a0: mov x3, x8 */
  ARC_X_W(c, 3, ARC_X_R(c, 8));
  /* 1390a4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1390a8: bl #0x143010 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1282220));
  fn1_143010(c);
  /* 1390ac: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1390b0: mov x20, x19 */
  ARC_X_W(c, 20, ARC_X_R(c, 19));
  /* 1390b4: ldr x8, [x8, #0xa00] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2560))));
  /* 1390b8: stp xzr, xzr, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1390bc: str xzr, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 31));
  /* 1390c0: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 1390c4: stp xzr, xzr, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1390c8: str x8, [x20], #0x20 */
  { const uint64_t _a = ARC_X_R(c, 20);
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(32));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 1390cc: str xzr, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 31));
  /* 1390d0: add x0, x29, #0x1f */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(31)));
  /* 1390d4: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 1390d8: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 1390dc: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* 1390e0: bl #0x13926c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1282276));
  fn1_13926c(c);
  /* 1390e4: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 1390e8: tbz w8, #0, #0x1390fc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1390fc;
  /* 1390ec: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 1390f0: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1390f4: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1390f8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1282300));
  fn1_142608(c);
L_1390fc:;
  /* 1390fc: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* 139100: tbz w8, #0, #0x139114 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_139114;
  /* 139104: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 139108: ldr x0, [sp, #0x28] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(40))));
  /* 13910c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 139110: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1282324));
  fn1_142608(c);
L_139114:;
  /* 139114: ldr x1, [x19, #8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 139118: nop  */
  /* nop: no architectural effect here */
  /* 13911c: adr x0, #0x50de1 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(331233)));
  /* 139120: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* 139124: bl #0xd7a54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1282344));
  fn1_d7a54(c);
  /* 139128: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 13912c: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 139130: ldrb w9, [x19, #0x30]! */
  { const uint64_t _a = (ARC_X_R(c, 19) + INT64_C(48));
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(48));
    ARC_W_W(c, 9, arc_ld8(_a));
  }
  /* 139134: tbz w9, #0, #0x139148 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_139148;
  /* 139138: ldr x0, [x8, #0x40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 13913c: ldr x8, [x8, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* 139140: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 139144: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1282376));
  fn1_142608(c);
L_139148:;
  /* 139148: ldur q0, [sp, #0x18] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(24))), arc_ld64(((c)->sp + INT64_C(24)) + 8));
  /* 13914c: ldr x8, [sp, #0x28] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(40))));
  /* 139150: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* 139154: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* 139158: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13915c: ldr x21, [sp, #0x40] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(64))));
  /* 139160: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 139164: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 139168: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13916c: ret  */
  return;
  /* 139170: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 139174: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 139178: bl #0x1391ec */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1282428));
  fn1_1391ec(c);
  /* 13917c: b #0x1391b4 */
  goto L_1391b4;
  /* 139180: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 139184: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 139188: tbz w8, #0, #0x13919c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13919c;
  /* 13918c: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 139190: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* 139194: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 139198: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1282460));
  fn1_142608(c);
L_13919c:;
  /* 13919c: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* 1391a0: tbz w8, #0, #0x1391b4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1391b4;
  /* 1391a4: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 1391a8: ldr x0, [sp, #0x28] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(40))));
  /* 1391ac: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1391b0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1282484));
  fn1_142608(c);
L_1391b4:;
  /* 1391b4: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1391b8: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* 1391bc: ldr x8, [x8, #0x910] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2320))));
  /* 1391c0: ldr x20, [x19, #8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1391c4: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 1391c8: sub x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) - UINT64_C(8)));
  /* 1391cc: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 1391d0: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1282516));
  fn1_a2030(c);
  /* 1391d4: cmp w0, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(1));
  /* 1391d8: b.pl #0x1391e4 */
  if (ARC_COND(c, 5)) goto L_1391e4;
  /* 1391dc: sub x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) - UINT64_C(24)));
  /* 1391e0: bl #0x1426f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1282532));
  fn1_1426f8(c);
L_1391e4:;
  /* 1391e4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1391e8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1282540));
  fn1_9cc20(c);
}

void fn1_13ec14(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039233556));
  /* 13ec14: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13ec18: sub sp, sp, #0x1e0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(480)));
  /* 13ec1c: stp x29, x30, [sp, #0x1c0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(448));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13ec20: stp x28, x19, [sp, #0x1d0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(464));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13ec24: add x29, sp, #0x1c0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(448)));
  /* 13ec28: mov x8, #-0x28 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551576));
  /* 13ec2c: add x9, sp, #0x10 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(16)));
  /* 13ec30: add x10, sp, #0x98 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(152)));
  /* 13ec34: movk x8, #0xff80, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(280925220896768)));
  /* 13ec38: add x9, x9, #0x80 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(128)));
  /* 13ec3c: stp x3, x4, [sp, #0x98] */
  { const uint64_t _pa = ((c)->sp + INT64_C(152));
    arc_st64(_pa, ARC_X_R(c, 3));
    arc_st64(_pa + 8, ARC_X_R(c, 4));
  }
  /* 13ec40: stp x9, x8, [x29, #-0xc0] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-192));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 13ec44: add x8, x10, #0x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + UINT64_C(40)));
  /* 13ec48: add x9, x29, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) + UINT64_C(32)));
  /* 13ec4c: stp x5, x6, [sp, #0xa8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(168));
    arc_st64(_pa, ARC_X_R(c, 5));
    arc_st64(_pa + 8, ARC_X_R(c, 6));
  }
  /* 13ec50: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13ec54: str x7, [sp, #0xb8] */
  arc_st64(((c)->sp + INT64_C(184)), ARC_X_R(c, 7));
  /* 13ec58: stp q0, q1, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 13ec5c: stp q2, q3, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, (c)->q[2].u64[0]);
    arc_st64(_pa + 8, (c)->q[2].u64[1]);
    arc_st64((_pa + 16), (c)->q[3].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[3].u64[1]);
  }
  /* 13ec60: stp q4, q5, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, (c)->q[4].u64[0]);
    arc_st64(_pa + 8, (c)->q[4].u64[1]);
    arc_st64((_pa + 16), (c)->q[5].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[5].u64[1]);
  }
  /* 13ec64: stp q6, q7, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, (c)->q[6].u64[0]);
    arc_st64(_pa + 8, (c)->q[6].u64[1]);
    arc_st64((_pa + 16), (c)->q[7].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[7].u64[1]);
  }
  /* 13ec68: stp x9, x8, [x29, #-0xd0] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-208));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 13ec6c: nop  */
  /* nop: no architectural effect here */
  /* 13ec70: adr x9, #0x159208 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13ec74: ldr w8, [x1] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 1)));
  /* 13ec78: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 13ec7c: tbz w9, #0, #0x13ecb8 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_13ecb8;
L_13ec80:;
  /* 13ec80: nop  */
  /* nop: no architectural effect here */
  /* 13ec84: adr x9, #0x156d38 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13ec88: ldp q0, q1, [x29, #-0xd0] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-208));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 13ec8c: stp x8, x9, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 13ec90: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 13ec94: stp q0, q1, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 13ec98: cbz x8, #0x13ece4 */
  if ((ARC_X_R(c, 8)) == 0) goto L_13ece4;
  /* 13ec9c: ldr q0, [sp, #0xe0] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(224))), arc_ld64(((c)->sp + INT64_C(224)) + 8));
  /* 13eca0: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* 13eca4: ldp x28, x19, [sp, #0x1d0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(464));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13eca8: ldp x29, x30, [sp, #0x1c0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(448));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13ecac: add sp, sp, #0x1e0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(480)));
  /* 13ecb0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13ecb4: ret  */
  return;
L_13ecb8:;
  /* 13ecb8: nop  */
  /* nop: no architectural effect here */
  /* 13ecbc: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13ecc0: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* 13ecc4: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1305800));
  fn1_1424b8(c);
  /* 13ecc8: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 13eccc: cbz w0, #0x13ec80 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13ec80;
  /* 13ecd0: nop  */
  /* nop: no architectural effect here */
  /* 13ecd4: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13ecd8: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1305820));
  fn1_1424d0(c);
  /* 13ecdc: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 13ece0: b #0x13ec80 */
  goto L_13ec80;
L_13ece4:;
  /* 13ece4: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 13ece8: add x1, x1, #0x597 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1431)));
  /* 13ecec: sub x0, x29, #0x78 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(120)));
  /* 13ecf0: bl #0x11dda8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1305844));
  fn1_11dda8(c);
  /* 13ecf4: ldr x1, [x19] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 19)));
  /* 13ecf8: sub x0, x29, #0x78 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(120)));
  /* 13ecfc: bl #0x142b78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1305856));
  fn1_142b78(c);
  /* 13ed00: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 13ed04: ldr q0, [x0] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 0)), arc_ld64(ARC_X_R(c, 0) + 8));
  /* 13ed08: stur x8, [x29, #-0x50] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-80)), ARC_X_R(c, 8));
  /* 13ed0c: stur q0, [x29, #-0x60] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-96)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-96)) + 8, (c)->q[0].u64[1]);
  /* 13ed10: stp xzr, xzr, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13ed14: str xzr, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 31));
  /* 13ed18: adrp x1, #0x52000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(335872)));
  /* 13ed1c: add x1, x1, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(48)));
  /* 13ed20: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 13ed24: bl #0x142b78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1305896));
  fn1_142b78(c);
  /* 13ed28: ldr q0, [x0] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 0)), arc_ld64(ARC_X_R(c, 0) + 8));
  /* 13ed2c: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 13ed30: stur q0, [x29, #-0x40] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-64)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-64)) + 8, (c)->q[0].u64[1]);
  /* 13ed34: ldp q0, q1, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 13ed38: stur x8, [x29, #-0x30] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-48)), ARC_X_R(c, 8));
  /* 13ed3c: stp xzr, xzr, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13ed40: str xzr, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 31));
  /* 13ed44: stp q0, q1, [x29, #-0xb0] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-176));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 13ed48: adrp x0, #0x51000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(331776)));
  /* 13ed4c: add x0, x0, #0x59b */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1435)));
  /* 13ed50: sub x8, x29, #0x90 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(144)));
  /* 13ed54: sub x1, x29, #0xb0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(176)));
  /* 13ed58: bl #0xd7b2c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1305948));
  fn1_d7b2c(c);
  /* 13ed5c: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 13ed60: sub x1, x29, #0x90 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(144)));
  /* 13ed64: bl #0xd8234 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1305960));
  fn1_d8234(c);
  /* 13ed68: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 13ed6c: ldr q0, [x0] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 0)), arc_ld64(ARC_X_R(c, 0) + 8));
  /* 13ed70: stur x8, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 8));
  /* 13ed74: stur q0, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)) + 8, (c)->q[0].u64[1]);
  /* 13ed78: stp xzr, xzr, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13ed7c: str xzr, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 31));
  /* 13ed80: ldurb w8, [x29, #-0x90] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 13ed84: tbnz w8, #0, #0x13eddc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_13eddc;
  /* 13ed88: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 13ed8c: tbnz w8, #0, #0x13edf4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_13edf4;
L_13ed90:;
  /* 13ed90: ldurb w8, [x29, #-0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 13ed94: tbnz w8, #0, #0x13ee0c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_13ee0c;
L_13ed98:;
  /* 13ed98: ldurb w8, [x29, #-0x78] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-120))));
  /* 13ed9c: tbz w8, #0, #0x13edb0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13edb0;
L_13eda0:;
  /* 13eda0: ldur x8, [x29, #-0x78] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-120))));
  /* 13eda4: ldur x0, [x29, #-0x68] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-104))));
  /* 13eda8: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13edac: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1306032));
  fn1_142608(c);
L_13edb0:;
  /* 13edb0: ldp x1, x2, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 13edb4: cmp x1, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(0));
  /* 13edb8: cset w8, ne */
  ARC_W_W(c, 8, (ARC_COND(c, 1) ? 1 : 0));
  /* 13edbc: cmp x2, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 2), UINT64_C(0));
  /* 13edc0: cinc w8, w8, ne */
  ARC_W_W(c, 8, (ARC_COND(c, 1) ? (ARC_W_R(c, 8)) + 1 : (ARC_W_R(c, 8))));
  /* 13edc4: cbz w8, #0x13ee28 */
  if ((ARC_W_R(c, 8)) == 0) goto L_13ee28;
  /* 13edc8: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 13edcc: b.ne #0x13ee34 */
  if (ARC_COND(c, 1)) goto L_13ee34;
  /* 13edd0: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 13edd4: add x2, sp, #0xe0 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(224)));
  /* 13edd8: bl #0x138e98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1306076));
  fn1_138e98(c);
L_13eddc:;
  /* 13eddc: ldur x8, [x29, #-0x90] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 13ede0: ldur x0, [x29, #-0x80] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-128))));
  /* 13ede4: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13ede8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1306092));
  fn1_142608(c);
  /* 13edec: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 13edf0: tbz w8, #0, #0x13ed90 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13ed90;
L_13edf4:;
  /* 13edf4: ldur x8, [x29, #-0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 13edf8: ldur x0, [x29, #-0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-48))));
  /* 13edfc: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13ee00: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1306116));
  fn1_142608(c);
  /* 13ee04: ldurb w8, [x29, #-0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 13ee08: tbz w8, #0, #0x13ed98 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13ed98;
L_13ee0c:;
  /* 13ee0c: ldur x8, [x29, #-0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 13ee10: ldur x0, [x29, #-0x50] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-80))));
  /* 13ee14: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13ee18: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1306140));
  fn1_142608(c);
  /* 13ee1c: ldurb w8, [x29, #-0x78] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-120))));
  /* 13ee20: tbnz w8, #0, #0x13eda0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_13eda0;
  /* 13ee24: b #0x13edb0 */
  goto L_13edb0;
L_13ee28:;
  /* 13ee28: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 13ee2c: add x1, sp, #0xe0 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(224)));
  /* 13ee30: bl #0x138db4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1306164));
  fn1_138db4(c);
L_13ee34:;
  /* 13ee34: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 13ee38: add x3, sp, #0xe0 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(224)));
  /* 13ee3c: bl #0x138f84 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1306176));
  fn1_138f84(c);
  /* 13ee40: ldurb w8, [x29, #-0x20] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 13ee44: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13ee48: tbz w8, #0, #0x13ef10 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13ef10;
  /* 13ee4c: ldur x0, [x29, #-0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 13ee50: ldur x8, [x29, #-0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 13ee54: b #0x13ef00 */
  goto L_13ef00;
  /* 13ee58: ldurb w8, [x29, #-0x90] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 13ee5c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13ee60: tbnz w8, #0, #0x13ee80 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_13ee80;
  /* 13ee64: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 13ee68: tbnz w8, #0, #0x13eea8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_13eea8;
L_13ee6c:;
  /* 13ee6c: ldurb w8, [x29, #-0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 13ee70: tbnz w8, #0, #0x13eed0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_13eed0;
L_13ee74:;
  /* 13ee74: ldurb w8, [x29, #-0x78] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-120))));
  /* 13ee78: tbnz w8, #0, #0x13eef8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_13eef8;
  /* 13ee7c: b #0x13ef10 */
  goto L_13ef10;
L_13ee80:;
  /* 13ee80: ldur x8, [x29, #-0x90] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 13ee84: ldur x0, [x29, #-0x80] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-128))));
  /* 13ee88: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13ee8c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1306256));
  fn1_142608(c);
  /* 13ee90: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 13ee94: tbz w8, #0, #0x13ee6c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13ee6c;
  /* 13ee98: b #0x13eea8 */
  goto L_13eea8;
  /* 13ee9c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13eea0: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 13eea4: tbz w8, #0, #0x13ee6c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13ee6c;
L_13eea8:;
  /* 13eea8: ldur x8, [x29, #-0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 13eeac: ldur x0, [x29, #-0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-48))));
  /* 13eeb0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13eeb4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1306296));
  fn1_142608(c);
  /* 13eeb8: ldurb w8, [x29, #-0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 13eebc: tbz w8, #0, #0x13ee74 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13ee74;
  /* 13eec0: b #0x13eed0 */
  goto L_13eed0;
  /* 13eec4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13eec8: ldurb w8, [x29, #-0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 13eecc: tbz w8, #0, #0x13ee74 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13ee74;
L_13eed0:;
  /* 13eed0: ldur x8, [x29, #-0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 13eed4: ldur x0, [x29, #-0x50] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-80))));
  /* 13eed8: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13eedc: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1306336));
  fn1_142608(c);
  /* 13eee0: ldurb w8, [x29, #-0x78] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-120))));
  /* 13eee4: tbnz w8, #0, #0x13eef8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_13eef8;
  /* 13eee8: b #0x13ef10 */
  goto L_13ef10;
  /* 13eeec: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13eef0: ldurb w8, [x29, #-0x78] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-120))));
  /* 13eef4: tbz w8, #0, #0x13ef10 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13ef10;
L_13eef8:;
  /* 13eef8: ldur x0, [x29, #-0x68] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-104))));
  /* 13eefc: ldur x8, [x29, #-0x78] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-120))));
L_13ef00:;
  /* 13ef00: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13ef04: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1306376));
  fn1_142608(c);
  /* 13ef08: b #0x13ef10 */
  goto L_13ef10;
  /* 13ef0c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_13ef10:;
  /* 13ef10: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13ef14: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1306392));
  fn1_142548(c);
  /* 13ef18: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1306396));
  fn1_1429b0(c);
  /* 13ef1c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13ef20: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1306404));
  fn1_142980(c);
  /* 13ef24: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13ef28: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1306412));
  fn1_9cc20(c);
  /* 13ef2c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1306416));
  fn1_a1454(c);
}

void fn1_1426c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248584));
  /* 1426c8: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1426cc: ldr x17, [x16, #0xf78] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3960))));
  /* 1426d0: add x16, x16, #0xf78 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3960)));
  /* 1426d4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1426d8: nop  */
  /* nop: no architectural effect here */
  /* 1426dc: nop  */
  /* nop: no architectural effect here */
}

void fn1_142cc8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250120));
  /* 142cc8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142ccc: ldr x17, [x16, #0x178] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(376))));
  /* 142cd0: add x16, x16, #0x178 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(376)));
  /* 142cd4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142cd8: nop  */
  /* nop: no architectural effect here */
  /* 142cdc: nop  */
  /* nop: no architectural effect here */
}

void fn1_1432c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251656));
  /* 1432c8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1432cc: ldr x17, [x16, #0x378] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(888))));
  /* 1432d0: add x16, x16, #0x378 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(888)));
  /* 1432d4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1432d8: nop  */
  /* nop: no architectural effect here */
  /* 1432dc: nop  */
  /* nop: no architectural effect here */
}

void fn1_1438c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253192));
  /* 1438c8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1438cc: ldr x17, [x16, #0x578] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1400))));
  /* 1438d0: add x16, x16, #0x578 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1400)));
  /* 1438d4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1438d8: nop  */
  /* nop: no architectural effect here */
  /* 1438dc: nop  */
  /* nop: no architectural effect here */
}

void fn1_143ec8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254728));
  /* 143ec8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143ecc: ldr x17, [x16, #0x778] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1912))));
  /* 143ed0: add x16, x16, #0x778 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1912)));
  /* 143ed4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143ed8: nop  */
  /* nop: no architectural effect here */
  /* 143edc: nop  */
  /* nop: no architectural effect here */
}

void fn1_1444c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256264));
  /* 1444c8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1444cc: ldr x17, [x16, #0x978] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2424))));
  /* 1444d0: add x16, x16, #0x978 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2424)));
  /* 1444d4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1444d8: nop  */
  /* nop: no architectural effect here */
  /* 1444dc: nop  */
  /* nop: no architectural effect here */
}

void fn1_144ac8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039257800));
  /* 144ac8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144acc: ldr x17, [x16, #0xb78] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2936))));
  /* 144ad0: add x16, x16, #0xb78 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2936)));
  /* 144ad4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144ad8: nop  */
  /* nop: no architectural effect here */
  /* 144adc: nop  */
  /* nop: no architectural effect here */
}

