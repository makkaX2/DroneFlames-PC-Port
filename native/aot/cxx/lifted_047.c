#include "lifted.h"

void fn1_9f258(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038579800));
  /* 9f258: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 9f25c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 9f260: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 9f264: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 9f268: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* 9f26c: cmp x9, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 1));
  /* 9f270: b.eq #0x9f3b8 */
  if (ARC_COND(c, 0)) goto L_9f3b8;
  /* 9f274: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* 9f278: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* 9f27c: ldrb w11, [x10], #1 */
  { const uint64_t _a = ARC_X_R(c, 10);
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(1));
    ARC_W_W(c, 11, arc_ld8(_a));
  }
  /* 9f280: and x0, x11, #0x7f */
  ARC_X_W(c, 0, (ARC_X_R(c, 11) & UINT64_C(127)));
  /* 9f284: tbnz w11, #7, #0x9f29c */
  if (((ARC_W_R(c, 11)) >> 7 & 1) != 0) goto L_9f29c;
L_9f288:;
  /* 9f288: str x10, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 9f28c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 9f290: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9f294: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 9f298: ret  */
  return;
L_9f29c:;
  /* 9f29c: cmp x10, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 1));
  /* 9f2a0: b.eq #0x9f3b8 */
  if (ARC_COND(c, 0)) goto L_9f3b8;
  /* 9f2a4: ldrsb w11, [x9, #1] */
  ARC_W_W(c, 11, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 9) + INT64_C(1)))));
  /* 9f2a8: and w10, w11, #0x7f */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) & UINT64_C(127)));
  /* 9f2ac: orr x0, x0, x10, lsl #7 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) | ((uint64_t)(ARC_X_R(c, 10)) << 7)));
  /* 9f2b0: add x10, x9, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* 9f2b4: tbz w11, #0x1f, #0x9f288 */
  if (((ARC_W_R(c, 11)) >> 31 & 1) == 0) goto L_9f288;
  /* 9f2b8: cmp x10, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 1));
  /* 9f2bc: b.eq #0x9f3b8 */
  if (ARC_COND(c, 0)) goto L_9f3b8;
  /* 9f2c0: ldrsb w11, [x9, #2] */
  ARC_W_W(c, 11, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 9) + INT64_C(2)))));
  /* 9f2c4: and w10, w11, #0x7f */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) & UINT64_C(127)));
  /* 9f2c8: orr x0, x0, x10, lsl #14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) | ((uint64_t)(ARC_X_R(c, 10)) << 14)));
  /* 9f2cc: add x10, x9, #3 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(3)));
  /* 9f2d0: tbz w11, #0x1f, #0x9f288 */
  if (((ARC_W_R(c, 11)) >> 31 & 1) == 0) goto L_9f288;
  /* 9f2d4: cmp x10, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 1));
  /* 9f2d8: b.eq #0x9f3b8 */
  if (ARC_COND(c, 0)) goto L_9f3b8;
  /* 9f2dc: ldrsb w11, [x9, #3] */
  ARC_W_W(c, 11, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 9) + INT64_C(3)))));
  /* 9f2e0: and w10, w11, #0x7f */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) & UINT64_C(127)));
  /* 9f2e4: orr x0, x0, x10, lsl #21 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) | ((uint64_t)(ARC_X_R(c, 10)) << 21)));
  /* 9f2e8: add x10, x9, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(4)));
  /* 9f2ec: tbz w11, #0x1f, #0x9f288 */
  if (((ARC_W_R(c, 11)) >> 31 & 1) == 0) goto L_9f288;
  /* 9f2f0: cmp x10, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 1));
  /* 9f2f4: b.eq #0x9f3b8 */
  if (ARC_COND(c, 0)) goto L_9f3b8;
  /* 9f2f8: ldrsb w11, [x9, #4] */
  ARC_W_W(c, 11, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 9) + INT64_C(4)))));
  /* 9f2fc: and w10, w11, #0x7f */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) & UINT64_C(127)));
  /* 9f300: orr x0, x0, x10, lsl #28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) | ((uint64_t)(ARC_X_R(c, 10)) << 28)));
  /* 9f304: add x10, x9, #5 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(5)));
  /* 9f308: tbz w11, #0x1f, #0x9f288 */
  if (((ARC_W_R(c, 11)) >> 31 & 1) == 0) goto L_9f288;
  /* 9f30c: cmp x10, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 1));
  /* 9f310: b.eq #0x9f3b8 */
  if (ARC_COND(c, 0)) goto L_9f3b8;
  /* 9f314: ldrsb w11, [x9, #5] */
  ARC_W_W(c, 11, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 9) + INT64_C(5)))));
  /* 9f318: and w10, w11, #0x7f */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) & UINT64_C(127)));
  /* 9f31c: orr x0, x0, x10, lsl #35 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) | ((uint64_t)(ARC_X_R(c, 10)) << 35)));
  /* 9f320: add x10, x9, #6 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(6)));
  /* 9f324: tbz w11, #0x1f, #0x9f288 */
  if (((ARC_W_R(c, 11)) >> 31 & 1) == 0) goto L_9f288;
  /* 9f328: cmp x10, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 1));
  /* 9f32c: b.eq #0x9f3b8 */
  if (ARC_COND(c, 0)) goto L_9f3b8;
  /* 9f330: ldrsb w11, [x9, #6] */
  ARC_W_W(c, 11, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 9) + INT64_C(6)))));
  /* 9f334: and w10, w11, #0x7f */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) & UINT64_C(127)));
  /* 9f338: orr x0, x0, x10, lsl #42 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) | ((uint64_t)(ARC_X_R(c, 10)) << 42)));
  /* 9f33c: add x10, x9, #7 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(7)));
  /* 9f340: tbz w11, #0x1f, #0x9f288 */
  if (((ARC_W_R(c, 11)) >> 31 & 1) == 0) goto L_9f288;
  /* 9f344: cmp x10, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 1));
  /* 9f348: b.eq #0x9f3b8 */
  if (ARC_COND(c, 0)) goto L_9f3b8;
  /* 9f34c: ldrsb w11, [x9, #7] */
  ARC_W_W(c, 11, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 9) + INT64_C(7)))));
  /* 9f350: and w10, w11, #0x7f */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) & UINT64_C(127)));
  /* 9f354: orr x0, x0, x10, lsl #49 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) | ((uint64_t)(ARC_X_R(c, 10)) << 49)));
  /* 9f358: add x10, x9, #8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(8)));
  /* 9f35c: tbz w11, #0x1f, #0x9f288 */
  if (((ARC_W_R(c, 11)) >> 31 & 1) == 0) goto L_9f288;
  /* 9f360: cmp x10, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 1));
  /* 9f364: b.eq #0x9f3b8 */
  if (ARC_COND(c, 0)) goto L_9f3b8;
  /* 9f368: ldrsb w11, [x9, #8] */
  ARC_W_W(c, 11, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 9) + INT64_C(8)))));
  /* 9f36c: and w10, w11, #0x7f */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) & UINT64_C(127)));
  /* 9f370: orr x0, x0, x10, lsl #56 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) | ((uint64_t)(ARC_X_R(c, 10)) << 56)));
  /* 9f374: add x10, x9, #9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(9)));
  /* 9f378: tbz w11, #0x1f, #0x9f288 */
  if (((ARC_W_R(c, 11)) >> 31 & 1) == 0) goto L_9f288;
  /* 9f37c: cmp x10, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 1));
  /* 9f380: b.eq #0x9f3b8 */
  if (ARC_COND(c, 0)) goto L_9f3b8;
  /* 9f384: ldrb w11, [x10] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 10)));
  /* 9f388: tst w11, #0x7e */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & UINT64_C(126)));
  /* 9f38c: b.ne #0x9f3ec */
  if (ARC_COND(c, 1)) goto L_9f3ec;
  /* 9f390: add x10, x9, #0xa */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(10)));
  /* 9f394: tbnz w11, #7, #0x9f3b0 */
  if (((ARC_W_R(c, 11)) >> 7 & 1) != 0) goto L_9f3b0;
  /* 9f398: orr x0, x0, x11, lsl #63 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) | ((uint64_t)(ARC_X_R(c, 11)) << 63)));
  /* 9f39c: str x10, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 9f3a0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 9f3a4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9f3a8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 9f3ac: ret  */
  return;
L_9f3b0:;
  /* 9f3b0: cmp x10, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 1));
  /* 9f3b4: b.ne #0x9f3ec */
  if (ARC_COND(c, 1)) goto L_9f3ec;
L_9f3b8:;
  /* 9f3b8: adrp x19, #0x151000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9f3bc: nop  */
  /* nop: no architectural effect here */
  /* 9f3c0: adr x1, #0x4f83f */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(325695)));
  /* 9f3c4: ldr x19, [x19, #0x998] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(2456))));
  /* 9f3c8: adrp x2, #0x4f000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(323584)));
  /* 9f3cc: add x2, x2, #0xf82 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(3970)));
  /* 9f3d0: adrp x3, #0x50000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(327680)));
  /* 9f3d4: add x3, x3, #0x263 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(611)));
  /* 9f3d8: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9f3dc: bl #0x144a38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(652256));
  fn1_144a38(c);
  /* 9f3e0: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9f3e4: bl #0x143730 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(652264));
  fn1_143730(c);
  /* 9f3e8: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(652268));
  fn1_1427b8(c);
L_9f3ec:;
  /* 9f3ec: adrp x19, #0x151000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9f3f0: nop  */
  /* nop: no architectural effect here */
  /* 9f3f4: adr x1, #0x4f83f */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(325695)));
  /* 9f3f8: ldr x19, [x19, #0x998] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(2456))));
  /* 9f3fc: adrp x2, #0x4f000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(323584)));
  /* 9f400: add x2, x2, #0xf82 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(3970)));
  /* 9f404: adrp x3, #0x50000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(327680)));
  /* 9f408: add x3, x3, #0x8fa */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2298)));
  /* 9f40c: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9f410: bl #0x144a38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(652308));
  fn1_144a38(c);
  /* 9f414: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9f418: bl #0x143730 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(652316));
  fn1_143730(c);
  /* 9f41c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(652320));
  fn1_1427b8(c);
}

void fn1_a20bc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038591676));
  /* a20bc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a20c0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a20c4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* a20c8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a20cc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a20d0: bl #0x142620 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(663764));
  fn1_142620(c);
  /* a20d4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a20d8: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* a20dc: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* a20e0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a20e4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a20e8: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_a51fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038604284));
  /* a51fc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a5200: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a5204: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a5208: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a520c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a5210: ldr x22, [x0, #0x1330] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* a5214: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* a5218: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* a521c: ldr x8, [x22, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* a5220: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* a5224: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a5228: b.hi #0xa524c */
  if (ARC_COND(c, 8)) goto L_a524c;
  /* a522c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a5230: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a5234: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(676408));
  fn1_1428a8(c);
  /* a5238: cbz x0, #0xa52ac */
  if ((ARC_X_R(c, 0)) == 0) goto L_a52ac;
  /* a523c: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a5240: stp x22, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a5244: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* a5248: str x0, [x21, #0x1330] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(4912)), ARC_X_R(c, 0));
L_a524c:;
  /* a524c: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* a5250: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a5254: add x21, x22, x8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* a5258: str x9, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 9));
  /* a525c: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(676448));
  fn1_142860(c);
  /* a5260: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a5264: add x8, x8, #0xb10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2832)));
  /* a5268: ldr x10, [x19] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 19)));
  /* a526c: str x8, [x21, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a5270: ldurh w9, [x21, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* a5274: mov w8, #0x15 */
  ARC_W_W(c, 8, UINT64_C(21));
  /* a5278: str x20, [x21, #0x10] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(16)), ARC_X_R(c, 20));
  /* a527c: strb w8, [x21, #8] */
  arc_st8((ARC_X_R(c, 21) + INT64_C(8)), ARC_W_R(c, 8));
  /* a5280: and w8, w9, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* a5284: mov w9, #0x540 */
  ARC_W_W(c, 9, UINT64_C(1344));
  /* a5288: orr w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 9)));
  /* a528c: stp x0, x10, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* a5290: sturh w8, [x21, #9] */
  arc_st16((ARC_X_R(c, 21) + INT64_C(9)), ARC_W_R(c, 8));
  /* a5294: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* a5298: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a529c: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a52a0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a52a4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a52a8: ret  */
  return;
L_a52ac:;
  /* a52ac: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(676528));
  fn1_142488(c);
}

void fn1_abe3c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038631996));
  /* abe3c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* abe40: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* abe44: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* abe48: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* abe4c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* abe50: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* abe54: ldr x23, [x0, #0x1330] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* abe58: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* abe5c: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* abe60: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* abe64: ldr x8, [x23, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* abe68: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* abe6c: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* abe70: b.hi #0xabe94 */
  if (ARC_COND(c, 8)) goto L_abe94;
  /* abe74: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* abe78: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* abe7c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(704128));
  fn1_1428a8(c);
  /* abe80: cbz x0, #0xabef8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_abef8;
  /* abe84: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* abe88: stp x23, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* abe8c: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* abe90: str x0, [x22, #0x1330] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(4912)), ARC_X_R(c, 0));
L_abe94:;
  /* abe94: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* abe98: add x0, x23, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + ARC_X_R(c, 8)));
  /* abe9c: adrp x8, #0x14a000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1351680)));
  /* abea0: add x8, x8, #0x528 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1320)));
  /* abea4: str x9, [x23, #8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(8)), ARC_X_R(c, 9));
  /* abea8: ldr x10, [x21] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 21)));
  /* abeac: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* abeb0: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* abeb4: ldrh w9, [x20] */
  ARC_W_W(c, 9, arc_ld16(ARC_X_R(c, 20)));
  /* abeb8: mov w11, #0x44 */
  ARC_W_W(c, 11, UINT64_C(68));
  /* abebc: str x10, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 10));
  /* abec0: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* abec4: strb w11, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 11));
  /* abec8: bfxil w8, w9, #0, #6 */
  ARC_W_W(c, 8, (((uint32_t)(ARC_W_R(c, 8)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 9))) >> 0) & UINT64_C(63))));
  /* abecc: mov w9, #0x540 */
  ARC_W_W(c, 9, UINT64_C(1344));
  /* abed0: ldr q0, [x19] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 19)), arc_ld64(ARC_X_R(c, 19) + 8));
  /* abed4: orr w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 9)));
  /* abed8: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* abedc: stur q0, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)) + 8, (c)->q[0].u64[1]);
  /* abee0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* abee4: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* abee8: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* abeec: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* abef0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* abef4: ret  */
  return;
L_abef8:;
  /* abef8: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(704252));
  fn1_142488(c);
}

void fn1_b23f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038658040));
  /* b23f8: bti c */
  /* bti: no architectural effect here */
  /* b23fc: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* b2400: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b6470(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038674544));
  /* b6470: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b6474: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b6478: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b647c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b6480: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b6484: ldp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b6488: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* b648c: subs x10, x9, x8 */
  ARC_X_W(c, 10, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8)));
  /* b6490: b.eq #0xb64d4 */
  if (ARC_COND(c, 0)) goto L_b64d4;
  /* b6494: ldrb w11, [x8] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 8)));
  /* b6498: sub w11, w11, #0x3a */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(58)));
  /* b649c: cmn w11, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 11), UINT64_C(10), 0);
  /* b64a0: b.hs #0xb64e8 */
  if (ARC_COND(c, 2)) goto L_b64e8;
  /* b64a4: cmp x10, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(2));
  /* b64a8: b.lo #0xb64d4 */
  if (ARC_COND(c, 3)) goto L_b64d4;
  /* b64ac: ldrh w10, [x8] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 8)));
  /* b64b0: mov w11, #0x6e64 */
  ARC_W_W(c, 11, UINT64_C(28260));
  /* b64b4: cmp w10, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 11));
  /* b64b8: b.eq #0xb6598 */
  if (ARC_COND(c, 0)) goto L_b6598;
  /* b64bc: ldrh w9, [x8] */
  ARC_W_W(c, 9, arc_ld16(ARC_X_R(c, 8)));
  /* b64c0: mov w10, #0x6e6f */
  ARC_W_W(c, 10, UINT64_C(28271));
  /* b64c4: cmp w9, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 10));
  /* b64c8: b.ne #0xb64d4 */
  if (ARC_COND(c, 1)) goto L_b64d4;
  /* b64cc: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* b64d0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_b64d4:;
  /* b64d4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b64d8: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* b64dc: bl #0xb6824 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(746720));
  fn1_b6824(c);
  /* b64e0: cbnz x0, #0xb64f4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_b64f4;
  /* b64e4: b #0xb6638 */
  goto L_b6638;
L_b64e8:;
  /* b64e8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b64ec: bl #0xa8930 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(746736));
  fn1_a8930(c);
  /* b64f0: cbz x0, #0xb6638 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b6638;
L_b64f4:;
  /* b64f4: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b64f8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b64fc: b.eq #0xb6638 */
  if (ARC_COND(c, 0)) goto L_b6638;
  /* b6500: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* b6504: cmp w8, #0x49 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(73));
  /* b6508: b.ne #0xb6638 */
  if (ARC_COND(c, 1)) goto L_b6638;
  /* b650c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b6510: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b6514: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* b6518: bl #0xa8f88 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(746780));
  fn1_a8f88(c);
  /* b651c: cbz x0, #0xb6638 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b6638;
  /* b6520: ldr x21, [x19, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* b6524: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* b6528: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* b652c: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b6530: b.hi #0xb6558 */
  if (ARC_COND(c, 8)) goto L_b6558;
  /* b6534: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* b6538: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b653c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(746816));
  fn1_1428a8(c);
  /* b6540: cbz x0, #0xb66fc */
  if ((ARC_X_R(c, 0)) == 0) goto L_b66fc;
  /* b6544: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b6548: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b654c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b6550: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
  /* b6554: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
L_b6558:;
  /* b6558: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* b655c: add x8, x21, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* b6560: adrp x10, #0x14b000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(1355776)));
  /* b6564: add x10, x10, #0xd10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(3344)));
  /* b6568: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* b656c: mov w11, #0x540 */
  ARC_W_W(c, 11, UINT64_C(1344));
  /* b6570: str x10, [x8, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(16));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 10));
  }
  /* b6574: ldurh w9, [x8, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 8) + INT64_C(9))));
  /* b6578: mov w10, #0x2d */
  ARC_W_W(c, 10, UINT64_C(45));
  /* b657c: stp x20, x0, [x8, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* b6580: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* b6584: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* b6588: strb w10, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 10));
  /* b658c: orr w9, w9, w11 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 11)));
  /* b6590: sturh w9, [x8, #9] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(9)), ARC_W_R(c, 9));
  /* b6594: b #0xb6638 */
  goto L_b6638;
L_b6598:;
  /* b6598: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* b659c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b65a0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* b65a4: b.eq #0xb65b8 */
  if (ARC_COND(c, 0)) goto L_b65b8;
  /* b65a8: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* b65ac: sub w8, w8, #0x3a */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(58)));
  /* b65b0: cmn w8, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(10), 0);
  /* b65b4: b.hs #0xb664c */
  if (ARC_COND(c, 2)) goto L_b664c;
L_b65b8:;
  /* b65b8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b65bc: bl #0xb62fc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(746944));
  fn1_b62fc(c);
  /* b65c0: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* b65c4: cbz x0, #0xb6638 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b6638;
L_b65c8:;
  /* b65c8: ldr x20, [x19, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* b65cc: ldr x9, [x20, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* b65d0: sub x10, x9, #0xfd0 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) - UINT64_C(4048)));
  /* b65d4: cmn x10, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 10), UINT64_C(4081), 0);
  /* b65d8: b.hi #0xb6600 */
  if (ARC_COND(c, 8)) goto L_b6600;
  /* b65dc: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b65e0: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* b65e4: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(746984));
  fn1_1428a8(c);
  /* b65e8: cbz x0, #0xb66fc */
  if ((ARC_X_R(c, 0)) == 0) goto L_b66fc;
  /* b65ec: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* b65f0: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b65f4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b65f8: mov x8, x21 */
  ARC_X_W(c, 8, ARC_X_R(c, 21));
  /* b65fc: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_b6600:;
  /* b6600: add x10, x9, #0x20 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(32)));
  /* b6604: add x0, x20, x9 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + ARC_X_R(c, 9)));
  /* b6608: adrp x9, #0x14b000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1355776)));
  /* b660c: add x9, x9, #0x608 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1544)));
  /* b6610: str x10, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 10));
  /* b6614: mov w11, #0x540 */
  ARC_W_W(c, 11, UINT64_C(1344));
  /* b6618: str x9, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* b661c: ldurh w9, [x0, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* b6620: mov w10, #0x32 */
  ARC_W_W(c, 10, UINT64_C(50));
  /* b6624: str x8, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 8));
  /* b6628: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* b662c: strb w10, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 10));
  /* b6630: orr w9, w9, w11 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 11)));
  /* b6634: sturh w9, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 9));
L_b6638:;
  /* b6638: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b663c: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* b6640: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b6644: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b6648: ret  */
  return;
L_b664c:;
  /* b664c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b6650: bl #0xa8930 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(747092));
  fn1_a8930(c);
  /* b6654: cbz x0, #0xb6638 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b6638;
  /* b6658: ldp x9, x10, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b665c: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* b6660: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b6664: b.eq #0xb65c8 */
  if (ARC_COND(c, 0)) goto L_b65c8;
  /* b6668: ldrb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* b666c: cmp w9, #0x49 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(73));
  /* b6670: b.ne #0xb65c8 */
  if (ARC_COND(c, 1)) goto L_b65c8;
  /* b6674: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b6678: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* b667c: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* b6680: bl #0xa8f88 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(747140));
  fn1_a8f88(c);
  /* b6684: cbz x0, #0xb6638 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b6638;
  /* b6688: ldr x21, [x19, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* b668c: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* b6690: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* b6694: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b6698: b.hi #0xb66c0 */
  if (ARC_COND(c, 8)) goto L_b66c0;
  /* b669c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* b66a0: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b66a4: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(747176));
  fn1_1428a8(c);
  /* b66a8: cbz x0, #0xb66fc */
  if ((ARC_X_R(c, 0)) == 0) goto L_b66fc;
  /* b66ac: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b66b0: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b66b4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b66b8: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
  /* b66bc: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
L_b66c0:;
  /* b66c0: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* b66c4: add x8, x21, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* b66c8: adrp x10, #0x14b000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(1355776)));
  /* b66cc: add x10, x10, #0xd10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(3344)));
  /* b66d0: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* b66d4: mov w11, #0x540 */
  ARC_W_W(c, 11, UINT64_C(1344));
  /* b66d8: str x10, [x8, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(16));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 10));
  }
  /* b66dc: ldurh w9, [x8, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 8) + INT64_C(9))));
  /* b66e0: mov w10, #0x2d */
  ARC_W_W(c, 10, UINT64_C(45));
  /* b66e4: stp x20, x0, [x8, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* b66e8: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* b66ec: strb w10, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 10));
  /* b66f0: orr w9, w9, w11 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 11)));
  /* b66f4: sturh w9, [x8, #9] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(9)), ARC_W_R(c, 9));
  /* b66f8: b #0xb65c8 */
  goto L_b65c8;
L_b66fc:;
  /* b66fc: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(747264));
  fn1_142488(c);
}

void fn1_b875c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038683484));
  /* b875c: bti c */
  /* bti: no architectural effect here */
  /* b8760: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* b8764: ret  */
  return;
}

void fn1_bbfe8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038697960));
  /* bbfe8: bti c */
  /* bti: no architectural effect here */
  /* bbfec: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* bbff0: ret  */
  return;
}

void fn1_bef18(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038710040));
  /* bef18: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bef1c: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* bef20: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bef24: stp x28, x27, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* bef28: stp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* bef2c: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* bef30: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* bef34: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bef38: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* bef3c: str x5, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 5));
  /* bef40: cbz x1, #0xbf020 */
  if ((ARC_X_R(c, 1)) == 0) goto L_bf020;
  /* bef44: mov w24, w2 */
  ARC_W_W(c, 24, ARC_W_R(c, 2));
  /* bef48: mov w10, #0x1c1d */
  ARC_W_W(c, 10, UINT64_C(7197));
  /* bef4c: mvn x11, x0 */
  ARC_X_W(c, 11, (~(uint64_t)(ARC_X_R(c, 0))));
  /* bef50: and x25, x24, #0xf */
  ARC_X_W(c, 25, (ARC_X_R(c, 24) & UINT64_C(15)));
  /* bef54: mov x20, x6 */
  ARC_X_W(c, 20, ARC_X_R(c, 6));
  /* bef58: mov x21, x4 */
  ARC_X_W(c, 21, ARC_X_R(c, 4));
  /* bef5c: lsr w26, w10, w25 */
  ARC_W_W(c, 26, ((uint32_t)(ARC_W_R(c, 10)) >> ((ARC_W_R(c, 25)) & 31)));
  /* bef60: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* bef64: mov x23, x3 */
  ARC_X_W(c, 23, ARC_X_R(c, 3));
  /* bef68: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* bef6c: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* bef70: add x27, x1, x11 */
  ARC_X_W(c, 27, (ARC_X_R(c, 1) + ARC_X_R(c, 11)));
  /* bef74: nop  */
  /* nop: no architectural effect here */
  /* bef78: adr x28, #0x54550 */
  ARC_X_W(c, 28, (arc_image_bases[1] + UINT64_C(345424)));
L_bef7c:;
  /* bef7c: ldrb w10, [x27], #1 */
  { const uint64_t _a = ARC_X_R(c, 27);
    ARC_X_W(c, 27, ARC_X_R(c, 27) + INT64_C(1));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* bef80: and x11, x10, #0x7f */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) & UINT64_C(127)));
  /* bef84: lsl x11, x11, x8 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 11)) << ((ARC_X_R(c, 8)) & 63)));
  /* bef88: add x8, x8, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(7)));
  /* bef8c: orr x19, x11, x9 */
  ARC_X_W(c, 19, (ARC_X_R(c, 11) | ARC_X_R(c, 9)));
  /* bef90: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
  /* bef94: tbnz w10, #7, #0xbef7c */
  if (((ARC_W_R(c, 10)) >> 7 & 1) != 0) goto L_bef7c;
  /* bef98: cbz x19, #0xbefe8 */
  if ((ARC_X_R(c, 19)) == 0) goto L_befe8;
  /* bef9c: cmp w25, #0xc */
  (void)arc_sub32(c, ARC_W_R(c, 25), UINT64_C(12));
  /* befa0: b.hi #0xbf014 */
  if (ARC_COND(c, 8)) goto L_bf014;
  /* befa4: tbz w26, #0, #0xbf014 */
  if (((ARC_W_R(c, 26)) >> 0 & 1) == 0) goto L_bf014;
  /* befa8: ldr x8, [x28, x25, lsl #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 28) + ((uint64_t)(ARC_X_R(c, 25)) << 3))));
  /* befac: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* befb0: mov w1, w24 */
  ARC_W_W(c, 1, ARC_W_R(c, 24));
  /* befb4: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* befb8: madd x8, x8, x19, x22 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 22)) + ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 19)))));
  /* befbc: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* befc0: bl #0xbed70 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(782276));
  fn1_bed70(c);
  /* befc4: str x21, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 21));
  /* befc8: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* befcc: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* befd0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* befd4: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* befd8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(782300));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* befdc: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* befe0: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* befe4: tbz w0, #0, #0xbef7c */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_bef7c;
L_befe8:;
  /* befe8: cmp x19, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 19), UINT64_C(0));
  /* befec: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* beff0: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* beff4: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* beff8: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* beffc: ldp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* bf000: ldp x28, x27, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* bf004: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bf008: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* bf00c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bf010: ret  */
  return;
L_bf014:;
  /* bf014: ldr x1, [sp] */
  ARC_X_W(c, 1, arc_ld64((c)->sp));
  /* bf018: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* bf01c: bl #0xbecd4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(782368));
  fn1_becd4(c);
L_bf020:;
  /* bf020: ldr x0, [sp] */
  ARC_X_W(c, 0, arc_ld64((c)->sp));
  /* bf024: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(782376));
  fn1_142548(c);
  /* bf028: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(782380));
  fn1_142488(c);
}

void fn1_d53b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038801328));
  /* d53b0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d53b4: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d53b8: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* d53bc: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d53c0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* d53c4: fmov w8, s0 */
  ARC_W_W(c, 8, ARC_SU_R(c, 0));
  /* d53c8: tbnz w8, #0x1f, #0xd53d4 */
  if (((ARC_W_R(c, 8)) >> 31 & 1) != 0) goto L_d53d4;
  /* d53cc: mov w9, w8 */
  ARC_W_W(c, 9, ARC_W_R(c, 8));
  /* d53d0: b #0xd53ec */
  goto L_d53ec;
L_d53d4:;
  /* d53d4: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* d53d8: b.eq #0xd5490 */
  if (ARC_COND(c, 0)) goto L_d5490;
  /* d53dc: fabs s0, s0 */
  arc_s_w(c, 0, (float)(fabsf(ARC_S_R(c, 0))));
  /* d53e0: mov w9, #0x2d */
  ARC_W_W(c, 9, UINT64_C(45));
  /* d53e4: strb w9, [x0], #1 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* d53e8: fmov w9, s0 */
  ARC_W_W(c, 9, ARC_SU_R(c, 0));
L_d53ec:;
  /* d53ec: mov w10, #0x7f800000 */
  ARC_W_W(c, 10, UINT64_C(2139095040));
  /* d53f0: bics wzr, w10, w9 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 10) & (~ARC_W_R(c, 9)));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 31, _r); }
  /* d53f4: b.ne #0xd541c */
  if (ARC_COND(c, 1)) goto L_d541c;
  /* d53f8: ands w10, w9, #0x7fffff */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 9) & UINT64_C(8388607));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 10, _r); }
  /* d53fc: b.eq #0xd5464 */
  if (ARC_COND(c, 0)) goto L_d5464;
  /* d5400: tbz w8, #0x1f, #0xd549c */
  if (((ARC_W_R(c, 8)) >> 31 & 1) == 0) goto L_d549c;
  /* d5404: cmp w10, #0x400, lsl #12 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(4194304));
  /* d5408: b.ne #0xd549c */
  if (ARC_COND(c, 1)) goto L_d549c;
  /* d540c: adrp x8, #0x4f000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(323584)));
  /* d5410: add x8, x8, #0xa91 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2705)));
  /* d5414: mov w19, #8 */
  ARC_W_W(c, 19, UINT64_C(8));
  /* d5418: b #0xd54c0 */
  goto L_d54c0;
L_d541c:;
  /* d541c: fmov w21, s0 */
  ARC_W_W(c, 21, ARC_SU_R(c, 0));
  /* d5420: cbz w21, #0xd5474 */
  if ((ARC_W_R(c, 21)) == 0) goto L_d5474;
  /* d5424: lsr w19, w21, #0x17 */
  ARC_W_W(c, 19, ((uint32_t)(ARC_W_R(c, 21)) >> ((UINT64_C(23)) & 31)));
  /* d5428: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* d542c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* d5430: and w0, w21, #0x7fffff */
  ARC_W_W(c, 0, (ARC_W_R(c, 21) & UINT64_C(8388607)));
  /* d5434: mov w1, w19 */
  ARC_W_W(c, 1, ARC_W_R(c, 19));
  /* d5438: bl #0xded60 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(873532));
  fn1_ded60(c);
  /* d543c: mov x2, x0 */
  ARC_X_W(c, 2, ARC_X_R(c, 0));
  /* d5440: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* d5444: and w4, w21, #0x7fffff */
  ARC_W_W(c, 4, (ARC_W_R(c, 21) & UINT64_C(8388607)));
  /* d5448: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* d544c: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* d5450: mov w5, w19 */
  ARC_W_W(c, 5, ARC_W_R(c, 19));
  /* d5454: bl #0xdf358 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(873560));
  fn1_df358(c);
  /* d5458: and x8, x1, #0xffffffff00000000 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) & UINT64_C(18446744069414584320)));
  /* d545c: mov w9, w1 */
  ARC_W_W(c, 9, ARC_W_R(c, 1));
  /* d5460: b #0xd54f8 */
  goto L_d54f8;
L_d5464:;
  /* d5464: nop  */
  /* nop: no architectural effect here */
  /* d5468: adr x8, #0x50992 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(330130)));
  /* d546c: mov w19, #3 */
  ARC_W_W(c, 19, UINT64_C(3));
  /* d5470: b #0xd54c0 */
  goto L_d54c0;
L_d5474:;
  /* d5474: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* d5478: b.eq #0xd54cc */
  if (ARC_COND(c, 0)) goto L_d54cc;
  /* d547c: mov w10, #0x30 */
  ARC_W_W(c, 10, UINT64_C(48));
  /* d5480: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* d5484: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* d5488: strb w10, [x0], #1 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 10));
  }
  /* d548c: b #0xd54f8 */
  goto L_d54f8;
L_d5490:;
  /* d5490: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* d5494: mov w9, #0x4b */
  ARC_W_W(c, 9, UINT64_C(75));
  /* d5498: b #0xd54f8 */
  goto L_d54f8;
L_d549c:;
  /* d549c: adrp x8, #0x51000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(331776)));
  /* d54a0: add x8, x8, #0xea3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3747)));
  /* d54a4: adrp x10, #0x50000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(327680)));
  /* d54a8: add x10, x10, #0xf0d */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(3853)));
  /* d54ac: tst w9, #0x400000 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(4194304)));
  /* d54b0: mov w9, #3 */
  ARC_W_W(c, 9, UINT64_C(3));
  /* d54b4: mov w11, #9 */
  ARC_W_W(c, 11, UINT64_C(9));
  /* d54b8: csel x8, x10, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* d54bc: csel x19, x11, x9, eq */
  ARC_X_W(c, 19, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 9)));
L_d54c0:;
  /* d54c0: sub x9, x1, x0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* d54c4: cmp x9, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 19));
  /* d54c8: b.ge #0xd54dc */
  if (ARC_COND(c, 10)) goto L_d54dc;
L_d54cc:;
  /* d54cc: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* d54d0: mov w9, #0x4b */
  ARC_W_W(c, 9, UINT64_C(75));
  /* d54d4: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* d54d8: b #0xd54f8 */
  goto L_d54f8;
L_d54dc:;
  /* d54dc: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* d54e0: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* d54e4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* d54e8: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(873708));
  fn1_1449d8(c);
  /* d54ec: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* d54f0: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* d54f4: add x0, x20, x19 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + ARC_X_R(c, 19)));
L_d54f8:;
  /* d54f8: orr x1, x8, x9 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) | ARC_X_R(c, 9)));
  /* d54fc: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d5500: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* d5504: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d5508: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d550c: ret  */
  return;
  /* d5510: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(873748));
  fn1_a1454(c);
}

void fn1_d93f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038817776));
  /* d93f0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d93f4: sub sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(144)));
  /* d93f8: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d93fc: str x23, [sp, #0x60] */
  arc_st64(((c)->sp + INT64_C(96)), ARC_X_R(c, 23));
  /* d9400: stp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* d9404: stp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d9408: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* d940c: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* d9410: ldp x10, x9, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* d9414: mov w21, #1 */
  ARC_W_W(c, 21, UINT64_C(1));
  /* d9418: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* d941c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* d9420: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* d9424: lsr x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* d9428: stp xzr, xzr, [sp, #0x38] */
  { const uint64_t _pa = ((c)->sp + INT64_C(56));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* d942c: csinc x9, x9, x0, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 0)) + 1)));
  /* d9430: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* d9434: strb w21, [sp, #0x48] */
  arc_st8(((c)->sp + INT64_C(72)), ARC_W_R(c, 21));
  /* d9438: csel x8, x8, x10, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* d943c: stp x9, x8, [sp, #0x28] */
  { const uint64_t _pa = ((c)->sp + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* d9440: bl #0xda18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(889924));
  fn1_da18c(c);
  /* d9444: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* d9448: stp x20, x19, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d944c: stp xzr, xzr, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* d9450: strb w21, [sp, #0x20] */
  arc_st8(((c)->sp + INT64_C(32)), ARC_W_R(c, 21));
  /* d9454: bl #0xda18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(889944));
  fn1_da18c(c);
  /* d9458: ldrb w20, [sp, #0x48] */
  ARC_W_W(c, 20, arc_ld8(((c)->sp + INT64_C(72))));
  /* d945c: cmp w20, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 20), UINT64_C(2));
  /* d9460: b.ne #0xd9484 */
  if (ARC_COND(c, 1)) goto L_d9484;
  /* d9464: ldrb w19, [sp, #0x20] */
  ARC_W_W(c, 19, arc_ld8(((c)->sp + INT64_C(32))));
  /* d9468: ldp x0, x21, [sp, #0x38] */
  { const uint64_t _pa = ((c)->sp + INT64_C(56));
    ARC_X_W(c, 0, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* d946c: cmp w19, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 19), UINT64_C(2));
  /* d9470: b.eq #0xd949c */
  if (ARC_COND(c, 0)) goto L_d949c;
  /* d9474: mov x22, xzr */
  ARC_X_W(c, 22, ARC_X_R(c, 31));
  /* d9478: nop  */
  /* nop: no architectural effect here */
  /* d947c: adr x1, #0x5018e */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(328078)));
  /* d9480: b #0xd94a4 */
  goto L_d94a4;
L_d9484:;
  /* d9484: ldrb w19, [sp, #0x20] */
  ARC_W_W(c, 19, arc_ld8(((c)->sp + INT64_C(32))));
  /* d9488: cmp w19, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 19), UINT64_C(2));
  /* d948c: b.ne #0xd9540 */
  if (ARC_COND(c, 1)) goto L_d9540;
  /* d9490: mov x21, xzr */
  ARC_X_W(c, 21, ARC_X_R(c, 31));
  /* d9494: nop  */
  /* nop: no architectural effect here */
  /* d9498: adr x0, #0x5018e */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328078)));
L_d949c:;
  /* d949c: ldp x1, x22, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 22, arc_ld64(_pa + 8));
  }
  /* d94a0: mov w19, #2 */
  ARC_W_W(c, 19, UINT64_C(2));
L_d94a4:;
  /* d94a4: cmp x22, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 21));
  /* d94a8: csel x2, x22, x21, lo */
  ARC_X_W(c, 2, (ARC_COND(c, 3) ? (ARC_X_R(c, 22)) : ARC_X_R(c, 21)));
  /* d94ac: bl #0x142890 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(890032));
  fn1_142890(c);
  /* d94b0: cbz w0, #0xd94ec */
  if ((ARC_W_R(c, 0)) == 0) goto L_d94ec;
  /* d94b4: cmp w20, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 20), UINT64_C(2));
  /* d94b8: b.hi #0xd9514 */
  if (ARC_COND(c, 8)) goto L_d9514;
L_d94bc:;
  /* d94bc: mov w20, w0 */
  ARC_W_W(c, 20, ARC_W_R(c, 0));
L_d94c0:;
  /* d94c0: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* d94c4: bl #0xda18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(890056));
  fn1_da18c(c);
  /* d94c8: ldrb w8, [sp, #0x48] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(72))));
  /* d94cc: cmp w8, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(3));
  /* d94d0: b.lo #0xd94c0 */
  if (ARC_COND(c, 3)) goto L_d94c0;
  /* d94d4: ldrb w19, [sp, #0x20] */
  ARC_W_W(c, 19, arc_ld8(((c)->sp + INT64_C(32))));
  /* d94d8: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* d94dc: cmp w19, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 19), UINT64_C(2));
  /* d94e0: b.ls #0xd951c */
  if (ARC_COND(c, 9)) goto L_d951c;
L_d94e4:;
  /* d94e4: cbnz w0, #0xd96cc */
  if ((ARC_W_R(c, 0)) != 0) goto L_d96cc;
  /* d94e8: b #0xd953c */
  goto L_d953c;
L_d94ec:;
  /* d94ec: cmp x21, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 22));
  /* d94f0: b.ne #0xd9504 */
  if (ARC_COND(c, 1)) goto L_d9504;
  /* d94f4: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* d94f8: cmp w20, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 20), UINT64_C(2));
  /* d94fc: b.hi #0xd9514 */
  if (ARC_COND(c, 8)) goto L_d9514;
  /* d9500: b #0xd94bc */
  goto L_d94bc;
L_d9504:;
  /* d9504: mov w8, #-1 */
  ARC_W_W(c, 8, UINT64_C(18446744073709551615));
  /* d9508: cneg w0, w8, hs */
  ARC_W_W(c, 0, (ARC_COND(c, 2) ? ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 8))) : (ARC_W_R(c, 8))));
  /* d950c: cmp w20, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 20), UINT64_C(2));
  /* d9510: b.ls #0xd94bc */
  if (ARC_COND(c, 9)) goto L_d94bc;
L_d9514:;
  /* d9514: cmp w19, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 19), UINT64_C(2));
  /* d9518: b.hi #0xd94e4 */
  if (ARC_COND(c, 8)) goto L_d94e4;
L_d951c:;
  /* d951c: mov w20, w0 */
  ARC_W_W(c, 20, ARC_W_R(c, 0));
L_d9520:;
  /* d9520: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* d9524: bl #0xda18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(890152));
  fn1_da18c(c);
  /* d9528: ldrb w19, [sp, #0x20] */
  ARC_W_W(c, 19, arc_ld8(((c)->sp + INT64_C(32))));
  /* d952c: cmp w19, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 19), UINT64_C(3));
  /* d9530: b.lo #0xd9520 */
  if (ARC_COND(c, 3)) goto L_d9520;
  /* d9534: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* d9538: cbnz w0, #0xd96cc */
  if ((ARC_W_R(c, 0)) != 0) goto L_d96cc;
L_d953c:;
  /* d953c: ldrb w20, [sp, #0x48] */
  ARC_W_W(c, 20, arc_ld8(((c)->sp + INT64_C(72))));
L_d9540:;
  /* d9540: cmp w20, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 20), UINT64_C(3));
  /* d9544: b.ne #0xd9554 */
  if (ARC_COND(c, 1)) goto L_d9554;
  /* d9548: cmp w19, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 19), UINT64_C(3));
  /* d954c: b.eq #0xd9564 */
  if (ARC_COND(c, 0)) goto L_d9564;
  /* d9550: b #0xd96b4 */
  goto L_d96b4;
L_d9554:;
  /* d9554: cmp w19, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 19), UINT64_C(3));
  /* d9558: b.eq #0xd96a4 */
  if (ARC_COND(c, 0)) goto L_d96a4;
  /* d955c: cmp w20, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 20), UINT64_C(3));
  /* d9560: b.hi #0xd957c */
  if (ARC_COND(c, 8)) goto L_d957c;
L_d9564:;
  /* d9564: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* d9568: bl #0xda18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(890220));
  fn1_da18c(c);
  /* d956c: ldrb w8, [sp, #0x48] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(72))));
  /* d9570: cmp w8, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(4));
  /* d9574: b.lo #0xd9564 */
  if (ARC_COND(c, 3)) goto L_d9564;
  /* d9578: ldrb w19, [sp, #0x20] */
  ARC_W_W(c, 19, arc_ld8(((c)->sp + INT64_C(32))));
L_d957c:;
  /* d957c: cmp w19, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 19), UINT64_C(3));
  /* d9580: b.hi #0xd9598 */
  if (ARC_COND(c, 8)) goto L_d9598;
L_d9584:;
  /* d9584: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* d9588: bl #0xda18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(890252));
  fn1_da18c(c);
  /* d958c: ldrb w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(32))));
  /* d9590: cmp w8, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(4));
  /* d9594: b.lo #0xd9584 */
  if (ARC_COND(c, 3)) goto L_d9584;
L_d9598:;
  /* d9598: nop  */
  /* nop: no architectural effect here */
  /* d959c: adr x19, #0x5018e */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(328078)));
  /* d95a0: nop  */
  /* nop: no architectural effect here */
  /* d95a4: adr x20, #0x5004e */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(327758)));
  /* d95a8: nop  */
  /* nop: no architectural effect here */
  /* d95ac: adr x21, #0x501db */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(328155)));
L_d95b0:;
  /* d95b0: ldrb w9, [sp, #0x48] */
  ARC_W_W(c, 9, arc_ld8(((c)->sp + INT64_C(72))));
  /* d95b4: cmp w9, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(1));
  /* d95b8: b.eq #0xd9690 */
  if (ARC_COND(c, 0)) goto L_d9690;
  /* d95bc: cmp w9, #6 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(6));
  /* d95c0: b.eq #0xd9690 */
  if (ARC_COND(c, 0)) goto L_d9690;
  /* d95c4: ldrb w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(32))));
  /* d95c8: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* d95cc: b.eq #0xd9694 */
  if (ARC_COND(c, 0)) goto L_d9694;
  /* d95d0: cmp w8, #6 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(6));
  /* d95d4: b.eq #0xd9694 */
  if (ARC_COND(c, 0)) goto L_d9694;
  /* d95d8: cmp w9, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(3));
  /* d95dc: b.gt #0xd9618 */
  if (ARC_COND(c, 12)) goto L_d9618;
  /* d95e0: cmp w9, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(2));
  /* d95e4: b.eq #0xd9620 */
  if (ARC_COND(c, 0)) goto L_d9620;
  /* d95e8: ldr x9, [sp, #0x38] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(56))));
  /* d95ec: mov w22, #1 */
  ARC_W_W(c, 22, UINT64_C(1));
  /* d95f0: ldrb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* d95f4: cmp w9, #0x5c */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(92));
  /* d95f8: csel x0, x21, x20, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 21)) : ARC_X_R(c, 20)));
  /* d95fc: cmp w8, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(3));
  /* d9600: b.le #0xd962c */
  if (ARC_COND(c, 13)) goto L_d962c;
L_d9604:;
  /* d9604: cmp w8, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(4));
  /* d9608: b.eq #0xd9634 */
  if (ARC_COND(c, 0)) goto L_d9634;
  /* d960c: mov x23, xzr */
  ARC_X_W(c, 23, ARC_X_R(c, 31));
  /* d9610: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* d9614: b #0xd9664 */
  goto L_d9664;
L_d9618:;
  /* d9618: cmp w9, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(4));
  /* d961c: b.ne #0xd963c */
  if (ARC_COND(c, 1)) goto L_d963c;
L_d9620:;
  /* d9620: ldp x0, x22, [sp, #0x38] */
  { const uint64_t _pa = ((c)->sp + INT64_C(56));
    ARC_X_W(c, 0, arc_ld64(_pa));
    ARC_X_W(c, 22, arc_ld64(_pa + 8));
  }
  /* d9624: cmp w8, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(3));
  /* d9628: b.gt #0xd9604 */
  if (ARC_COND(c, 12)) goto L_d9604;
L_d962c:;
  /* d962c: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* d9630: b.ne #0xd9650 */
  if (ARC_COND(c, 1)) goto L_d9650;
L_d9634:;
  /* d9634: ldp x1, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* d9638: b #0xd9664 */
  goto L_d9664;
L_d963c:;
  /* d963c: mov x22, xzr */
  ARC_X_W(c, 22, ARC_X_R(c, 31));
  /* d9640: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d9644: cmp w8, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(3));
  /* d9648: b.le #0xd962c */
  if (ARC_COND(c, 13)) goto L_d962c;
  /* d964c: b #0xd9604 */
  goto L_d9604;
L_d9650:;
  /* d9650: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* d9654: mov w23, #1 */
  ARC_W_W(c, 23, UINT64_C(1));
  /* d9658: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* d965c: cmp w8, #0x5c */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(92));
  /* d9660: csel x1, x21, x20, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 21)) : ARC_X_R(c, 20)));
L_d9664:;
  /* d9664: cmp x23, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 22));
  /* d9668: csel x2, x23, x22, lo */
  ARC_X_W(c, 2, (ARC_COND(c, 3) ? (ARC_X_R(c, 23)) : ARC_X_R(c, 22)));
  /* d966c: bl #0x142890 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(890480));
  fn1_142890(c);
  /* d9670: cbnz w0, #0xd96cc */
  if ((ARC_W_R(c, 0)) != 0) goto L_d96cc;
  /* d9674: cmp x22, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 23));
  /* d9678: b.ne #0xd96c4 */
  if (ARC_COND(c, 1)) goto L_d96c4;
  /* d967c: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* d9680: bl #0xda18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(890500));
  fn1_da18c(c);
  /* d9684: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* d9688: bl #0xda18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(890508));
  fn1_da18c(c);
  /* d968c: b #0xd95b0 */
  goto L_d95b0;
L_d9690:;
  /* d9690: ldrb w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(32))));
L_d9694:;
  /* d9694: cmp w9, #6 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(6));
  /* d9698: b.ne #0xd96ac */
  if (ARC_COND(c, 1)) goto L_d96ac;
  /* d969c: cmp w8, #6 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(6));
  /* d96a0: b.eq #0xd96bc */
  if (ARC_COND(c, 0)) goto L_d96bc;
L_d96a4:;
  /* d96a4: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* d96a8: b #0xd96cc */
  goto L_d96cc;
L_d96ac:;
  /* d96ac: cmp w8, #6 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(6));
  /* d96b0: b.ne #0xd96bc */
  if (ARC_COND(c, 1)) goto L_d96bc;
L_d96b4:;
  /* d96b4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d96b8: b #0xd96cc */
  goto L_d96cc;
L_d96bc:;
  /* d96bc: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* d96c0: b #0xd96cc */
  goto L_d96cc;
L_d96c4:;
  /* d96c4: mov w8, #-1 */
  ARC_W_W(c, 8, UINT64_C(18446744073709551615));
  /* d96c8: cneg w0, w8, hs */
  ARC_W_W(c, 0, (ARC_COND(c, 2) ? ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 8))) : (ARC_W_R(c, 8))));
L_d96cc:;
  /* d96cc: ldp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d96d0: ldr x23, [sp, #0x60] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(96))));
  /* d96d4: ldp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* d96d8: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d96dc: add sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(144)));
  /* d96e0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d96e4: ret  */
  return;
}

void fn1_dc088(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038829192));
  /* dc088: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* dc08c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* dc090: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* dc094: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* dc098: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* dc09c: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* dc0a0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* dc0a4: ldr x8, [x8, #0xa30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2608))));
  /* dc0a8: ldr x9, [x9, #0xa20] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2592))));
  /* dc0ac: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* dc0b0: add x9, x9, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* dc0b4: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* dc0b8: str x9, [x0, #0x30]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(48));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(48));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* dc0bc: bl #0x142bf0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(901312));
  fn1_142bf0(c);
  /* dc0c0: add x0, x19, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* dc0c4: bl #0x143220 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(901320));
  fn1_143220(c);
  /* dc0c8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* dc0cc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* dc0d0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* dc0d4: ret  */
  return;
  /* dc0d8: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(901340));
  fn1_a1454(c);
  /* dc0dc: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(901344));
  fn1_a1454(c);
}

void fn1_e0a64(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038848100));
  /* e0a64: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e0a68: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e0a6c: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* e0a70: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e0a74: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e0a78: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e0a7c: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* e0a80: ldr x9, [x1, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* e0a84: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e0a88: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e0a8c: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e0a90: subs x9, x9, x2 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 2)));
  /* e0a94: b.lo #0xe0b28 */
  if (ARC_COND(c, 3)) goto L_e0b28;
  /* e0a98: ldr x10, [x1, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* e0a9c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e0aa0: csinc x23, x10, x1, ne */
  ARC_X_W(c, 23, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 1)) + 1)));
  /* e0aa4: cmp x9, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 3));
  /* e0aa8: csel x21, x9, x3, lo */
  ARC_X_W(c, 21, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 3)));
  /* e0aac: cmn x21, #8 */
  (void)arc_add64(c, ARC_X_R(c, 21), UINT64_C(8), 0);
  /* e0ab0: b.hs #0xe0b2c */
  if (ARC_COND(c, 2)) goto L_e0b2c;
  /* e0ab4: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* e0ab8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e0abc: cmp x21, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(23));
  /* e0ac0: b.hs #0xe0ad4 */
  if (ARC_COND(c, 2)) goto L_e0ad4;
  /* e0ac4: lsl w8, w21, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 21)) << ((UINT64_C(1)) & 31)));
  /* e0ac8: strb w8, [x20], #1 */
  { const uint64_t _a = ARC_X_R(c, 20);
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* e0acc: cbnz x21, #0xe0afc */
  if ((ARC_X_R(c, 21)) != 0) goto L_e0afc;
  /* e0ad0: b #0xe0b0c */
  goto L_e0b0c;
L_e0ad4:;
  /* e0ad4: orr x8, x21, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) | UINT64_C(7)));
  /* e0ad8: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* e0adc: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* e0ae0: csinc x22, x9, x8, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* e0ae4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* e0ae8: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(920300));
  fn1_1428f0(c);
  /* e0aec: orr x8, x22, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) | UINT64_C(1)));
  /* e0af0: stp x21, x0, [x20, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* e0af4: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* e0af8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_e0afc:;
  /* e0afc: add x1, x23, x19 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + ARC_X_R(c, 19)));
  /* e0b00: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e0b04: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* e0b08: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(920332));
  fn1_1449f0(c);
L_e0b0c:;
  /* e0b0c: strb wzr, [x20, x21] */
  arc_st8((ARC_X_R(c, 20) + ARC_X_R(c, 21)), ARC_W_R(c, 31));
  /* e0b10: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e0b14: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* e0b18: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e0b1c: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e0b20: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e0b24: ret  */
  return;
L_e0b28:;
  /* e0b28: bl #0xda020 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(920364));
  fn1_da020(c);
L_e0b2c:;
  /* e0b2c: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(920368));
  fn1_d7d54(c);
}

void fn1_e34f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038858992));
  /* e34f0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e34f4: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e34f8: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* e34fc: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e3500: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e3504: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* e3508: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* e350c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* e3510: mov w20, w2 */
  ARC_W_W(c, 20, ARC_W_R(c, 2));
  /* e3514: and x10, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* e3518: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e351c: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* e3520: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* e3524: csel x1, x9, x10, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* e3528: and w9, w8, #0xff */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) & UINT64_C(255)));
  /* e352c: subs x2, x19, x1 */
  ARC_X_W(c, 2, arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 1)));
  /* e3530: b.ls #0xe3578 */
  if (ARC_COND(c, 9)) goto L_e3578;
  /* e3534: ubfx x8, x8, #1, #7 */
  ARC_X_W(c, 8, (((uint64_t)(ARC_X_R(c, 8)) >> 1) & UINT64_C(127)));
  /* e3538: ldr x10, [x0, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* e353c: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e3540: mov x4, xzr */
  ARC_X_W(c, 4, ARC_X_R(c, 31));
  /* e3544: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* e3548: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e354c: csel x3, x8, x10, eq */
  ARC_X_W(c, 3, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* e3550: mov x5, x3 */
  ARC_X_W(c, 5, ARC_X_R(c, 3));
  /* e3554: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(931160));
  fn1_142da0(c);
  /* e3558: ldrb w8, [x21] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 21)));
  /* e355c: ldr x9, [x21, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* e3560: add x10, x21, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 21) + UINT64_C(4)));
  /* e3564: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e3568: str xzr, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 31));
  /* e356c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e3570: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e3574: b #0xe358c */
  goto L_e358c;
L_e3578:;
  /* e3578: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e357c: add x10, x0, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 0) + UINT64_C(4)));
  /* e3580: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e3584: csel x8, x10, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* e3588: cbz x19, #0xe35dc */
  if ((ARC_X_R(c, 19)) == 0) goto L_e35dc;
L_e358c:;
  /* e358c: cmp x19, #8 */
  (void)arc_sub64(c, ARC_X_R(c, 19), UINT64_C(8));
  /* e3590: mov x9, x8 */
  ARC_X_W(c, 9, ARC_X_R(c, 8));
  /* e3594: mov x10, x19 */
  ARC_X_W(c, 10, ARC_X_R(c, 19));
  /* e3598: b.lo #0xe35cc */
  if (ARC_COND(c, 3)) goto L_e35cc;
  /* e359c: and x11, x19, #0xfffffffffffffff8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 19) & UINT64_C(18446744073709551608)));
  /* e35a0: dup v0.4s, w20 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (ARC_W_R(c, 20));
    _t.u32[1] = (ARC_W_R(c, 20));
    _t.u32[2] = (ARC_W_R(c, 20));
    _t.u32[3] = (ARC_W_R(c, 20));
    (c)->q[0] = _t; }
  /* e35a4: and x10, x19, #7 */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) & UINT64_C(7)));
  /* e35a8: add x9, x8, x11, lsl #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 11)) << 2)));
  /* e35ac: add x12, x8, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* e35b0: mov x13, x11 */
  ARC_X_W(c, 13, ARC_X_R(c, 11));
L_e35b4:;
  /* e35b4: subs x13, x13, #8 */
  ARC_X_W(c, 13, arc_sub64(c, ARC_X_R(c, 13), UINT64_C(8)));
  /* e35b8: stp q0, q0, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* e35bc: add x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(32)));
  /* e35c0: b.ne #0xe35b4 */
  if (ARC_COND(c, 1)) goto L_e35b4;
  /* e35c4: cmp x19, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 11));
  /* e35c8: b.eq #0xe35d8 */
  if (ARC_COND(c, 0)) goto L_e35d8;
L_e35cc:;
  /* e35cc: subs x10, x10, #1 */
  ARC_X_W(c, 10, arc_sub64(c, ARC_X_R(c, 10), UINT64_C(1)));
  /* e35d0: str w20, [x9], #4 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 20));
  }
  /* e35d4: b.ne #0xe35cc */
  if (ARC_COND(c, 1)) goto L_e35cc;
L_e35d8:;
  /* e35d8: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
L_e35dc:;
  /* e35dc: tbnz w9, #0, #0xe35ec */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_e35ec;
  /* e35e0: lsl w9, w19, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 19)) << ((UINT64_C(1)) & 31)));
  /* e35e4: strb w9, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* e35e8: b #0xe35f0 */
  goto L_e35f0;
L_e35ec:;
  /* e35ec: str x19, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 19));
L_e35f0:;
  /* e35f0: str wzr, [x8, x19, lsl #2] */
  arc_st32((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 19)) << 2)), ARC_W_R(c, 31));
  /* e35f4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e35f8: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* e35fc: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e3600: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e3604: ret  */
  return;
}

void fn1_e7c80(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038877312));
  /* e7c80: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e7c84: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e7c88: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e7c8c: nop  */
  /* nop: no architectural effect here */
  /* e7c90: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* e7c94: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* e7c98: tbz w8, #0, #0xe7cb0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_e7cb0;
L_e7c9c:;
  /* e7c9c: nop  */
  /* nop: no architectural effect here */
  /* e7ca0: adr x0, #0x156d38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1404216)));
  /* e7ca4: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e7ca8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e7cac: ret  */
  return;
L_e7cb0:;
  /* e7cb0: nop  */
  /* nop: no architectural effect here */
  /* e7cb4: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* e7cb8: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(949436));
  fn1_1424b8(c);
  /* e7cbc: cbz w0, #0xe7c9c */
  if ((ARC_W_R(c, 0)) == 0) goto L_e7c9c;
  /* e7cc0: nop  */
  /* nop: no architectural effect here */
  /* e7cc4: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* e7cc8: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(949452));
  fn1_1424d0(c);
  /* e7ccc: b #0xe7c9c */
  goto L_e7c9c;
}

void fn1_ea468(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038887528));
  /* ea468: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ea46c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ea470: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* ea474: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ea478: ldr x19, [x0] */
  ARC_X_W(c, 19, arc_ld64(ARC_X_R(c, 0)));
  /* ea47c: cbz x19, #0xea490 */
  if ((ARC_X_R(c, 19)) == 0) goto L_ea490;
  /* ea480: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* ea484: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ea488: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959628));
  fn1_bd950(c);
  /* ea48c: cbz x0, #0xea4a0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ea4a0;
L_ea490:;
  /* ea490: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* ea494: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ea498: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ea49c: ret  */
  return;
L_ea4a0:;
  /* ea4a0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ea4a4: ldr x16, [x8, #0x10] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ea4a8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ea4ac: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* ea4b0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ea4b4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ea4b8: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_ebe08(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038894088));
  /* ebe08: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ebe0c: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ebe10: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ebe14: ldr w0, [x0] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 0)));
  /* ebe18: bl #0x143370 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(966172));
  fn1_143370(c);
  /* ebe1c: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ebe20: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ebe24: ret  */
  return;
  /* ebe28: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(966188));
  fn1_a1454(c);
}

void fn1_ed8a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038900904));
  /* ed8a8: bti c */
  /* bti: no architectural effect here */
  /* ed8ac: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* ed8b0: ret  */
  return;
}

void fn1_f1558(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038916440));
  /* f1558: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f155c: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* f1560: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f1564: str x27, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 27));
  /* f1568: stp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* f156c: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* f1570: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f1574: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f1578: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f157c: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* f1580: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f1584: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f1588: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f158c: bl #0x143610 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(988560));
  fn1_143610(c);
  /* f1590: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* f1594: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f1598: b.ne #0xf16fc */
  if (ARC_COND(c, 1)) goto L_f16fc;
  /* f159c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f15a0: nop  */
  /* nop: no architectural effect here */
  /* f15a4: adr x27, #0x15dc40 */
  ARC_X_W(c, 27, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f15a8: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f15ac: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f15b0: ldr x22, [x8, #0x30] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f15b4: ldr w26, [x8, #8] */
  ARC_W_W(c, 26, arc_ld32((ARC_X_R(c, 8) + INT64_C(8))));
  /* f15b8: cmp x22, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 27));
  /* f15bc: str x22, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 22));
  /* f15c0: b.eq #0xf15d0 */
  if (ARC_COND(c, 0)) goto L_f15d0;
  /* f15c4: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f15c8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f15cc: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(988624));
  fn1_db2e0(c);
L_f15d0:;
  /* f15d0: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f15d4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* f15d8: ldr x1, [x1, #0xb50] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2896))));
  /* f15dc: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(988640));
  fn1_143748(c);
  /* f15e0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* f15e4: cmp x22, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 27));
  /* f15e8: b.eq #0xf160c */
  if (ARC_COND(c, 0)) goto L_f160c;
  /* f15ec: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f15f0: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f15f4: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(988664));
  fn1_bd950(c);
  /* f15f8: cbnz x0, #0xf160c */
  if ((ARC_X_R(c, 0)) != 0) goto L_f160c;
  /* f15fc: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f1600: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* f1604: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f1608: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(988684));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f160c:;
  /* f160c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f1610: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f1614: add x22, x19, x8 */
  ARC_X_W(c, 22, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f1618: ldr w3, [x22, #0x90] */
  ARC_W_W(c, 3, arc_ld32((ARC_X_R(c, 22) + INT64_C(144))));
  /* f161c: ldr x23, [x22, #0x28] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 22) + INT64_C(40))));
  /* f1620: cmn w3, #1 */
  (void)arc_add32(c, ARC_W_R(c, 3), UINT64_C(1), 0);
  /* f1624: b.ne #0xf1698 */
  if (ARC_COND(c, 1)) goto L_f1698;
  /* f1628: ldr x24, [x22, #0x30] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 22) + INT64_C(48))));
  /* f162c: cmp x24, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 27));
  /* f1630: str x24, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 24));
  /* f1634: b.eq #0xf1644 */
  if (ARC_COND(c, 0)) goto L_f1644;
  /* f1638: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f163c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f1640: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(988740));
  fn1_db2e0(c);
L_f1644:;
  /* f1644: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f1648: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* f164c: ldr x1, [x1, #0xb40] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2880))));
  /* f1650: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(988756));
  fn1_143748(c);
  /* f1654: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f1658: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* f165c: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* f1660: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(988772));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f1664: mov w25, w0 */
  ARC_W_W(c, 25, ARC_W_R(c, 0));
  /* f1668: cmp x24, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 27));
  /* f166c: b.eq #0xf1690 */
  if (ARC_COND(c, 0)) goto L_f1690;
  /* f1670: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f1674: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f1678: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(988796));
  fn1_bd950(c);
  /* f167c: cbnz x0, #0xf1690 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f1690;
  /* f1680: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f1684: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f1688: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f168c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(988816));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f1690:;
  /* f1690: and w3, w25, #0xff */
  ARC_W_W(c, 3, (ARC_W_R(c, 25) & UINT64_C(255)));
  /* f1694: str w3, [x22, #0x90] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(144)), ARC_W_R(c, 3));
L_f1698:;
  /* f1698: mov w8, #0x4a */
  ARC_W_W(c, 8, UINT64_C(74));
  /* f169c: and w8, w26, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 26) & ARC_W_R(c, 8)));
  /* f16a0: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* f16a4: b.eq #0xf16b0 */
  if (ARC_COND(c, 0)) goto L_f16b0;
  /* f16a8: cmp w8, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(8));
  /* f16ac: b.ne #0xf16b8 */
  if (ARC_COND(c, 1)) goto L_f16b8;
L_f16b0:;
  /* f16b0: and x4, x20, #0xffff */
  ARC_X_W(c, 4, (ARC_X_R(c, 20) & UINT64_C(65535)));
  /* f16b4: b #0xf16bc */
  goto L_f16bc;
L_f16b8:;
  /* f16b8: sxth x4, w20 */
  ARC_X_W(c, 4, ((int64_t)(int16_t)(ARC_W_R(c, 20))));
L_f16bc:;
  /* f16bc: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* f16c0: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* f16c4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f16c8: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* f16cc: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* f16d0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(988884));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f16d4: cbnz x0, #0xf16fc */
  if ((ARC_X_R(c, 0)) != 0) goto L_f16fc;
  /* f16d8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f16dc: mov w10, #5 */
  ARC_W_W(c, 10, UINT64_C(5));
  /* f16e0: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f16e4: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f16e8: ldp w9, w11, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* f16ec: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* f16f0: tst w11, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & ARC_W_R(c, 9)));
  /* f16f4: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f16f8: b.ne #0xf172c */
  if (ARC_COND(c, 1)) goto L_f172c;
L_f16fc:;
  /* f16fc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f1700: bl #0x143628 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(988932));
  fn1_143628(c);
L_f1704:;
  /* f1704: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f1708: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f170c: ldr x27, [sp, #0x20] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(32))));
  /* f1710: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f1714: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* f1718: ldp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* f171c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f1720: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* f1724: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f1728: ret  */
  return;
L_f172c:;
  /* f172c: nop  */
  /* nop: no architectural effect here */
  /* f1730: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f1734: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(988984));
  fn1_ec720(c);
  /* f1738: b #0xf1764 */
  goto L_f1764;
  /* f173c: cmp x24, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 27));
  /* f1740: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f1744: b.eq #0xf1798 */
  if (ARC_COND(c, 0)) goto L_f1798;
  /* f1748: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f174c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f1750: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(989012));
  fn1_bd950(c);
  /* f1754: cbnz x0, #0xf1798 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f1798;
  /* f1758: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f175c: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f1760: b #0xf1790 */
  goto L_f1790;
L_f1764:;
  /* f1764: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f1768: b #0xf1798 */
  goto L_f1798;
  /* f176c: cmp x22, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 27));
  /* f1770: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f1774: b.eq #0xf1798 */
  if (ARC_COND(c, 0)) goto L_f1798;
  /* f1778: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f177c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f1780: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(989060));
  fn1_bd950(c);
  /* f1784: cbnz x0, #0xf1798 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f1798;
  /* f1788: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f178c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
L_f1790:;
  /* f1790: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f1794: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(989080));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f1798:;
  /* f1798: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f179c: bl #0x143628 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(989088));
  fn1_143628(c);
  /* f17a0: b #0xf17a8 */
  goto L_f17a8;
  /* f17a4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_f17a8:;
  /* f17a8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f17ac: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(989104));
  fn1_142548(c);
  /* f17b0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f17b4: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f17b8: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f17bc: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* f17c0: ldrb w10, [x8, #0x24] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f17c4: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f17c8: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f17cc: tbnz w10, #0, #0xf17d8 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_f17d8;
  /* f17d0: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(989140));
  fn1_142980(c);
  /* f17d4: b #0xf1704 */
  goto L_f1704;
L_f17d8:;
  /* f17d8: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(989148));
  fn1_1429b0(c);
  /* f17dc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f17e0: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(989156));
  fn1_142980(c);
  /* f17e4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f17e8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(989164));
  fn1_9cc20(c);
  /* f17ec: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(989168));
  fn1_a1454(c);
}

void fn1_f42e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038928096));
  /* f42e0: bti c */
  /* bti: no architectural effect here */
  /* f42e4: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* f42e8: ret  */
  return;
}

void fn1_f7f98(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038943640));
  /* f7f98: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f7f9c: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* f7fa0: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f7fa4: stp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* f7fa8: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* f7fac: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f7fb0: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f7fb4: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* f7fb8: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* f7fbc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f7fc0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f7fc4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f7fc8: bl #0x143688 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1015756));
  fn1_143688(c);
  /* f7fcc: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* f7fd0: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f7fd4: b.ne #0xf8140 */
  if (ARC_COND(c, 1)) goto L_f8140;
  /* f7fd8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f7fdc: nop  */
  /* nop: no architectural effect here */
  /* f7fe0: adr x26, #0x15dc40 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f7fe4: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f7fe8: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f7fec: ldr x22, [x8, #0x30] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f7ff0: ldr w25, [x8, #8] */
  ARC_W_W(c, 25, arc_ld32((ARC_X_R(c, 8) + INT64_C(8))));
  /* f7ff4: cmp x22, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 26));
  /* f7ff8: stur x22, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 22));
  /* f7ffc: b.eq #0xf800c */
  if (ARC_COND(c, 0)) goto L_f800c;
  /* f8000: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f8004: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f8008: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1015820));
  fn1_db2e0(c);
L_f800c:;
  /* f800c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f8010: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* f8014: ldr x1, [x1, #0xb68] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2920))));
  /* f8018: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1015836));
  fn1_143748(c);
  /* f801c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* f8020: cmp x22, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 26));
  /* f8024: b.eq #0xf8048 */
  if (ARC_COND(c, 0)) goto L_f8048;
  /* f8028: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f802c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f8030: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1015860));
  fn1_bd950(c);
  /* f8034: cbnz x0, #0xf8048 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f8048;
  /* f8038: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f803c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* f8040: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f8044: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1015880));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f8048:;
  /* f8048: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f804c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f8050: add x22, x19, x8 */
  ARC_X_W(c, 22, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f8054: ldr w3, [x22, #0x90] */
  ARC_W_W(c, 3, arc_ld32((ARC_X_R(c, 22) + INT64_C(144))));
  /* f8058: ldr x23, [x22, #0x28] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 22) + INT64_C(40))));
  /* f805c: cmn w3, #1 */
  (void)arc_add32(c, ARC_W_R(c, 3), UINT64_C(1), 0);
  /* f8060: b.ne #0xf80dc */
  if (ARC_COND(c, 1)) goto L_f80dc;
  /* f8064: ldr x24, [x22, #0x30] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 22) + INT64_C(48))));
  /* f8068: cmp x24, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 26));
  /* f806c: stur x24, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 24));
  /* f8070: b.eq #0xf8080 */
  if (ARC_COND(c, 0)) goto L_f8080;
  /* f8074: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f8078: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f807c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1015936));
  fn1_db2e0(c);
L_f8080:;
  /* f8080: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f8084: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* f8088: ldr x1, [x1, #0xb58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2904))));
  /* f808c: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1015952));
  fn1_143748(c);
  /* f8090: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f8094: ldr x8, [x8, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* f8098: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* f809c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1015968));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f80a0: mov w3, w0 */
  ARC_W_W(c, 3, ARC_W_R(c, 0));
  /* f80a4: cmp x24, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 26));
  /* f80a8: b.eq #0xf80d8 */
  if (ARC_COND(c, 0)) goto L_f80d8;
  /* f80ac: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f80b0: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f80b4: mov w26, w3 */
  ARC_W_W(c, 26, ARC_W_R(c, 3));
  /* f80b8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1015996));
  fn1_bd950(c);
  /* f80bc: mov w3, w26 */
  ARC_W_W(c, 3, ARC_W_R(c, 26));
  /* f80c0: cbnz x0, #0xf80d8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f80d8;
  /* f80c4: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f80c8: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f80cc: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f80d0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1016020));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f80d4: mov w3, w26 */
  ARC_W_W(c, 3, ARC_W_R(c, 26));
L_f80d8:;
  /* f80d8: str w3, [x22, #0x90] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(144)), ARC_W_R(c, 3));
L_f80dc:;
  /* f80dc: mov w8, #0x4a */
  ARC_W_W(c, 8, UINT64_C(74));
  /* f80e0: and w8, w25, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 25) & ARC_W_R(c, 8)));
  /* f80e4: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* f80e8: b.eq #0xf80f4 */
  if (ARC_COND(c, 0)) goto L_f80f4;
  /* f80ec: cmp w8, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(8));
  /* f80f0: b.ne #0xf80fc */
  if (ARC_COND(c, 1)) goto L_f80fc;
L_f80f4:;
  /* f80f4: and x4, x20, #0xffff */
  ARC_X_W(c, 4, (ARC_X_R(c, 20) & UINT64_C(65535)));
  /* f80f8: b #0xf8100 */
  goto L_f8100;
L_f80fc:;
  /* f80fc: sxth x4, w20 */
  ARC_X_W(c, 4, ((int64_t)(int16_t)(ARC_W_R(c, 20))));
L_f8100:;
  /* f8100: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* f8104: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* f8108: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f810c: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* f8110: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* f8114: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1016088));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f8118: cbnz x0, #0xf8140 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f8140;
  /* f811c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f8120: mov w10, #5 */
  ARC_W_W(c, 10, UINT64_C(5));
  /* f8124: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f8128: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f812c: ldp w9, w11, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* f8130: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* f8134: tst w11, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & ARC_W_R(c, 9)));
  /* f8138: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f813c: b.ne #0xf816c */
  if (ARC_COND(c, 1)) goto L_f816c;
L_f8140:;
  /* f8140: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f8144: bl #0x1436a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1016136));
  fn1_1436a0(c);
L_f8148:;
  /* f8148: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f814c: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f8150: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f8154: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* f8158: ldp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* f815c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f8160: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* f8164: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f8168: ret  */
  return;
L_f816c:;
  /* f816c: nop  */
  /* nop: no architectural effect here */
  /* f8170: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f8174: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1016184));
  fn1_ec720(c);
  /* f8178: b #0xf81a4 */
  goto L_f81a4;
  /* f817c: cmp x24, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 26));
  /* f8180: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f8184: b.eq #0xf81d8 */
  if (ARC_COND(c, 0)) goto L_f81d8;
  /* f8188: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f818c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f8190: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1016212));
  fn1_bd950(c);
  /* f8194: cbnz x0, #0xf81d8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f81d8;
  /* f8198: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f819c: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f81a0: b #0xf81d0 */
  goto L_f81d0;
L_f81a4:;
  /* f81a4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f81a8: b #0xf81d8 */
  goto L_f81d8;
  /* f81ac: cmp x22, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 26));
  /* f81b0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f81b4: b.eq #0xf81d8 */
  if (ARC_COND(c, 0)) goto L_f81d8;
  /* f81b8: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f81bc: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f81c0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1016260));
  fn1_bd950(c);
  /* f81c4: cbnz x0, #0xf81d8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f81d8;
  /* f81c8: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f81cc: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
L_f81d0:;
  /* f81d0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f81d4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1016280));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f81d8:;
  /* f81d8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f81dc: bl #0x1436a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1016288));
  fn1_1436a0(c);
  /* f81e0: b #0xf81e8 */
  goto L_f81e8;
  /* f81e4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_f81e8:;
  /* f81e8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f81ec: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1016304));
  fn1_142548(c);
  /* f81f0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f81f4: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f81f8: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f81fc: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* f8200: ldrb w10, [x8, #0x24] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f8204: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f8208: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f820c: tbnz w10, #0, #0xf8218 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_f8218;
  /* f8210: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1016340));
  fn1_142980(c);
  /* f8214: b #0xf8148 */
  goto L_f8148;
L_f8218:;
  /* f8218: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1016348));
  fn1_1429b0(c);
  /* f821c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f8220: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1016356));
  fn1_142980(c);
  /* f8224: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f8228: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1016364));
  fn1_9cc20(c);
  /* f822c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1016368));
  fn1_a1454(c);
}

void fn1_fd36c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038965100));
  /* fd36c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fd370: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fd374: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* fd378: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fd37c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fd380: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* fd384: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fd388: adrp x10, #0x151000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fd38c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* fd390: ldr x9, [x9, #0xb08] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2824))));
  /* fd394: ldr x10, [x10, #0xae0] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2784))));
  /* fd398: add x21, x0, x8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* fd39c: add x8, x9, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(24)));
  /* fd3a0: add x9, x9, #0x40 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(64)));
  /* fd3a4: mov x19, x21 */
  ARC_X_W(c, 19, ARC_X_R(c, 21));
  /* fd3a8: ldrb w11, [x21, #0x48] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 21) + INT64_C(72))));
  /* fd3ac: str x9, [x19, #0x70]! */
  { const uint64_t _a = (ARC_X_R(c, 19) + INT64_C(112));
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(112));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* fd3b0: add x9, x10, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(16)));
  /* fd3b4: stp x8, x9, [x21] */
  { const uint64_t _pa = ARC_X_R(c, 21);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* fd3b8: tbz w11, #0, #0xfd3cc */
  if (((ARC_W_R(c, 11)) >> 0 & 1) == 0) goto L_fd3cc;
  /* fd3bc: ldr x8, [x21, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(72))));
  /* fd3c0: ldr x0, [x21, #0x58] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + INT64_C(88))));
  /* fd3c4: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* fd3c8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1037260));
  fn1_142608(c);
L_fd3cc:;
  /* fd3cc: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fd3d0: nop  */
  /* nop: no architectural effect here */
  /* fd3d4: adr x9, #0x15dc40 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1432640)));
  /* fd3d8: ldr x8, [x8, #0xaa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2728))));
  /* fd3dc: ldr x20, [x21, #0x10] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* fd3e0: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* fd3e4: cmp x20, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 9));
  /* fd3e8: str x8, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 8));
  /* fd3ec: b.eq #0xfd410 */
  if (ARC_COND(c, 0)) goto L_fd410;
  /* fd3f0: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* fd3f4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fd3f8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1037308));
  fn1_bd950(c);
  /* fd3fc: cbnz x0, #0xfd410 */
  if ((ARC_X_R(c, 0)) != 0) goto L_fd410;
  /* fd400: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* fd404: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fd408: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fd40c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1037328));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fd410:;
  /* fd410: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fd414: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fd418: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* fd41c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fd420: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fd424: b #0x1433b8 */
  fn1_1433b8(c); return;
}

void fn1_103bf8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038991864));
  /* 103bf8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 103bfc: sub sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(176)));
  /* 103c00: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 103c04: stp x28, x27, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 103c08: stp x26, x25, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 103c0c: stp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 103c10: stp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 103c14: stp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 103c18: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* 103c1c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 103c20: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 103c24: add x1, x3, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 3) + UINT64_C(48)));
  /* 103c28: mov x26, x5 */
  ARC_X_W(c, 26, ARC_X_R(c, 5));
  /* 103c2c: mov x25, x4 */
  ARC_X_W(c, 25, ARC_X_R(c, 4));
  /* 103c30: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 103c34: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1063992));
  fn1_143460(c);
  /* 103c38: adrp x22, #0x151000 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 103c3c: ldr x22, [x22, #0xb40] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 22) + INT64_C(2880))));
  /* 103c40: ldr x19, [sp, #0x28] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(40))));
  /* 103c44: ldar x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 103c48: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 103c4c: b.eq #0x103d08 */
  if (ARC_COND(c, 0)) goto L_103d08;
  /* 103c50: nop  */
  /* nop: no architectural effect here */
  /* 103c54: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 103c58: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1064028));
  fn1_142518(c);
  /* 103c5c: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 103c60: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 103c64: b.ne #0x103c90 */
  if (ARC_COND(c, 1)) goto L_103c90;
  /* 103c68: nop  */
  /* nop: no architectural effect here */
  /* 103c6c: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 103c70: nop  */
  /* nop: no architectural effect here */
  /* 103c74: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_103c78:;
  /* 103c78: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 103c7c: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 103c80: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1064068));
  fn1_142530(c);
  /* 103c84: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 103c88: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 103c8c: b.eq #0x103c78 */
  if (ARC_COND(c, 0)) goto L_103c78;
L_103c90:;
  /* 103c90: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 103c94: cbz x8, #0x103ca8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_103ca8;
  /* 103c98: nop  */
  /* nop: no architectural effect here */
  /* 103c9c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 103ca0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1064100));
  fn1_142560(c);
  /* 103ca4: b #0x103d08 */
  goto L_103d08;
L_103ca8:;
  /* 103ca8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 103cac: str x22, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 22));
  /* 103cb0: strb wzr, [sp, #0x18] */
  arc_st8(((c)->sp + INT64_C(24)), ARC_W_R(c, 31));
  /* 103cb4: str x8, [x22] */
  arc_st64(ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* 103cb8: nop  */
  /* nop: no architectural effect here */
  /* 103cbc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 103cc0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1064132));
  fn1_142560(c);
  /* 103cc4: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 103cc8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 103ccc: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 103cd0: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1064148));
  fn1_a2030(c);
  /* 103cd4: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 103cd8: str w8, [x22, #8] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(8)), ARC_W_R(c, 8));
  /* 103cdc: nop  */
  /* nop: no architectural effect here */
  /* 103ce0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 103ce4: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1064168));
  fn1_142518(c);
  /* 103ce8: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 103cec: stlr x8, [x22] */
  arc_st64(ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* 103cf0: nop  */
  /* nop: no architectural effect here */
  /* 103cf4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 103cf8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1064188));
  fn1_142560(c);
  /* 103cfc: nop  */
  /* nop: no architectural effect here */
  /* 103d00: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 103d04: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1064200));
  fn1_142578(c);
L_103d08:;
  /* 103d08: ldp x8, x10, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 103d0c: ldrsw x9, [x22, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 22) + INT64_C(8)))));
  /* 103d10: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 103d14: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 103d18: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 103d1c: b.hs #0x104180 */
  if (ARC_COND(c, 2)) goto L_104180;
  /* 103d20: ldr x0, [x8, x9, lsl #3] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 103d24: cbz x0, #0x104180 */
  if ((ARC_X_R(c, 0)) == 0) goto L_104180;
  /* 103d28: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 103d2c: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 103d30: adrp x23, #0x151000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 103d34: sub x3, x29, #0x1a */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(26)));
  /* 103d38: ldr x23, [x23, #0xbe0] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 23) + INT64_C(3040))));
  /* 103d3c: add x2, x23, #0x1a */
  ARC_X_W(c, 2, (ARC_X_R(c, 23) + UINT64_C(26)));
  /* 103d40: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 103d44: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1064264));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 103d48: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 103d4c: stp x26, x25, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 103d50: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1064276));
  fn1_143478(c);
  /* 103d54: stp xzr, xzr, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 103d58: str xzr, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 31));
  /* 103d5c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 103d60: mov w1, #0x16 */
  ARC_W_W(c, 1, UINT64_C(22));
  /* 103d64: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 103d68: add x19, sp, #0x10 */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(16)));
  /* 103d6c: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1064304));
  fn1_142d10(c);
  /* 103d70: ldrb w8, [sp, #0x10] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(16))));
  /* 103d74: ldr x9, [sp, #0x20] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(32))));
  /* 103d78: sub x26, x29, #0x1a */
  ARC_X_W(c, 26, (ARC_X_R(c, 29) - UINT64_C(26)));
  /* 103d7c: orr x25, x19, #1 */
  ARC_X_W(c, 25, (ARC_X_R(c, 19) | UINT64_C(1)));
  /* 103d80: add x27, x26, #0x1a */
  ARC_X_W(c, 27, (ARC_X_R(c, 26) + UINT64_C(26)));
  /* 103d84: mov w28, #0x16 */
  ARC_W_W(c, 28, UINT64_C(22));
  /* 103d88: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 103d8c: csinc x22, x9, x19, ne */
  ARC_X_W(c, 22, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* 103d90: mov x19, x22 */
  ARC_X_W(c, 19, ARC_X_R(c, 22));
  /* 103d94: b #0x103da0 */
  goto L_103da0;
L_103d98:;
  /* 103d98: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 103d9c: str x8, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 8));
L_103da0:;
  /* 103da0: cbz x20, #0x103dc8 */
  if ((ARC_X_R(c, 20)) == 0) goto L_103dc8;
  /* 103da4: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 103da8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 103dac: b.eq #0x103de4 */
  if (ARC_COND(c, 0)) goto L_103de4;
  /* 103db0: cbz x21, #0x103e40 */
  if ((ARC_X_R(c, 21)) == 0) goto L_103e40;
  /* 103db4: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 103db8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 103dbc: b.ne #0x103fec */
  if (ARC_COND(c, 1)) goto L_103fec;
  /* 103dc0: mov w24, wzr */
  ARC_W_W(c, 24, ARC_W_R(c, 31));
  /* 103dc4: b #0x103e1c */
  goto L_103e1c;
L_103dc8:;
  /* 103dc8: cbz x21, #0x103fe8 */
  if ((ARC_X_R(c, 21)) == 0) goto L_103fe8;
  /* 103dcc: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 103dd0: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 103dd4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 103dd8: b.ne #0x103e40 */
  if (ARC_COND(c, 1)) goto L_103e40;
  /* 103ddc: mov w24, #1 */
  ARC_W_W(c, 24, UINT64_C(1));
  /* 103de0: b #0x103e1c */
  goto L_103e1c;
L_103de4:;
  /* 103de4: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 103de8: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 103dec: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 103df0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1064436));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 103df4: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 103df8: cset w24, eq */
  ARC_W_W(c, 24, (ARC_COND(c, 0) ? 1 : 0));
  /* 103dfc: csel x20, xzr, x20, eq */
  ARC_X_W(c, 20, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 20)));
  /* 103e00: cbz x21, #0x103e94 */
  if ((ARC_X_R(c, 21)) == 0) goto L_103e94;
  /* 103e04: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 103e08: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 103e0c: b.eq #0x103e1c */
  if (ARC_COND(c, 0)) goto L_103e1c;
  /* 103e10: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 103e14: b.eq #0x103e40 */
  if (ARC_COND(c, 0)) goto L_103e40;
  /* 103e18: b #0x103fec */
  goto L_103fec;
L_103e1c:;
  /* 103e1c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 103e20: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 103e24: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 103e28: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1064492));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 103e2c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 103e30: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 103e34: csel x21, xzr, x21, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 21)));
  /* 103e38: cmp w24, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 24), ARC_W_R(c, 8));
  /* 103e3c: b.eq #0x103fec */
  if (ARC_COND(c, 0)) goto L_103fec;
L_103e40:;
  /* 103e40: ldrb w8, [sp, #0x10] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(16))));
  /* 103e44: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
  /* 103e48: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 103e4c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 103e50: csel x24, x10, x9, eq */
  ARC_X_W(c, 24, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 103e54: add x9, x19, x24 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 24)));
  /* 103e58: cmp x22, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 9));
  /* 103e5c: b.ne #0x103f1c */
  if (ARC_COND(c, 1)) goto L_103f1c;
  /* 103e60: cmp x24, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 24), UINT64_C(1));
  /* 103e64: b.lt #0x103e7c */
  if (ARC_COND(c, 11)) goto L_103e7c;
  /* 103e68: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 103e6c: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 103e70: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 103e74: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1064568));
  fn1_142d10(c);
  /* 103e78: b #0x103eac */
  goto L_103eac;
L_103e7c:;
  /* 103e7c: lsl x9, x24, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 24)) << ((UINT64_C(1)) & 63)));
  /* 103e80: tbnz w8, #0, #0x103ea0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_103ea0;
  /* 103e84: lsl w8, w9, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 9)) << ((UINT64_C(1)) & 31)));
  /* 103e88: strb w8, [sp, #0x10] */
  arc_st8(((c)->sp + INT64_C(16)), ARC_W_R(c, 8));
  /* 103e8c: mov x8, x25 */
  ARC_X_W(c, 8, ARC_X_R(c, 25));
  /* 103e90: b #0x103ea8 */
  goto L_103ea8;
L_103e94:;
  /* 103e94: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 103e98: b.ne #0x103e40 */
  if (ARC_COND(c, 1)) goto L_103e40;
  /* 103e9c: b #0x103fec */
  goto L_103fec;
L_103ea0:;
  /* 103ea0: ldr x8, [sp, #0x20] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
  /* 103ea4: str x9, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 9));
L_103ea8:;
  /* 103ea8: strb wzr, [x8, x9] */
  arc_st8((ARC_X_R(c, 8) + ARC_X_R(c, 9)), ARC_W_R(c, 31));
L_103eac:;
  /* 103eac: ldp x9, x10, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 103eb0: ldrb w8, [sp, #0x10] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(16))));
  /* 103eb4: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 103eb8: and x11, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 103ebc: ubfx x12, x9, #1, #7 */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 9)) >> 1) & UINT64_C(127)));
  /* 103ec0: sub x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* 103ec4: csel x8, x28, x11, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 28)) : ARC_X_R(c, 11)));
  /* 103ec8: tst x9, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(1)));
  /* 103ecc: csel x10, x12, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* 103ed0: subs x1, x8, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10)));
  /* 103ed4: b.ls #0x103ee8 */
  if (ARC_COND(c, 9)) goto L_103ee8;
  /* 103ed8: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 103edc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 103ee0: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1064676));
  fn1_142d10(c);
  /* 103ee4: b #0x103f08 */
  goto L_103f08;
L_103ee8:;
  /* 103ee8: tbnz w9, #0, #0x103efc */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_103efc;
  /* 103eec: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* 103ef0: strb w9, [sp, #0x10] */
  arc_st8(((c)->sp + INT64_C(16)), ARC_W_R(c, 9));
  /* 103ef4: mov x9, x25 */
  ARC_X_W(c, 9, ARC_X_R(c, 25));
  /* 103ef8: b #0x103f04 */
  goto L_103f04;
L_103efc:;
  /* 103efc: ldr x9, [sp, #0x20] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(32))));
  /* 103f00: str x8, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 8));
L_103f04:;
  /* 103f04: strb wzr, [x9, x8] */
  arc_st8((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_W_R(c, 31));
L_103f08:;
  /* 103f08: ldrb w8, [sp, #0x10] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(16))));
  /* 103f0c: ldr x9, [sp, #0x20] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(32))));
  /* 103f10: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 103f14: csel x19, x25, x9, eq */
  ARC_X_W(c, 19, (ARC_COND(c, 0) ? (ARC_X_R(c, 25)) : ARC_X_R(c, 9)));
  /* 103f18: add x22, x19, x24 */
  ARC_X_W(c, 22, (ARC_X_R(c, 19) + ARC_X_R(c, 24)));
L_103f1c:;
  /* 103f1c: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 103f20: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 103f24: b.eq #0x103f38 */
  if (ARC_COND(c, 0)) goto L_103f38;
  /* 103f28: ldrb w1, [x8] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 8)));
  /* 103f2c: cmp x22, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 19));
  /* 103f30: b.ne #0x103f7c */
  if (ARC_COND(c, 1)) goto L_103f7c;
  /* 103f34: b #0x103f54 */
  goto L_103f54;
L_103f38:;
  /* 103f38: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 103f3c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 103f40: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 103f44: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1064776));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 103f48: and w1, w0, #0xff */
  ARC_W_W(c, 1, (ARC_W_R(c, 0) & UINT64_C(255)));
  /* 103f4c: cmp x22, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 19));
  /* 103f50: b.ne #0x103f7c */
  if (ARC_COND(c, 1)) goto L_103f7c;
L_103f54:;
  /* 103f54: ldurb w8, [x29, #-2] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-2))));
  /* 103f58: cmp w1, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 1), ARC_W_R(c, 8));
  /* 103f5c: b.ne #0x103f68 */
  if (ARC_COND(c, 1)) goto L_103f68;
  /* 103f60: mov w8, #0x2b */
  ARC_W_W(c, 8, UINT64_C(43));
  /* 103f64: b #0x103fc4 */
  goto L_103fc4;
L_103f68:;
  /* 103f68: ldurb w8, [x29, #-1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-1))));
  /* 103f6c: cmp w1, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 1), ARC_W_R(c, 8));
  /* 103f70: b.ne #0x103f7c */
  if (ARC_COND(c, 1)) goto L_103f7c;
  /* 103f74: mov w8, #0x2d */
  ARC_W_W(c, 8, UINT64_C(45));
  /* 103f78: b #0x103fc4 */
  goto L_103fc4;
L_103f7c:;
  /* 103f7c: sub x0, x29, #0x1a */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(26)));
  /* 103f80: mov w2, #0x1a */
  ARC_W_W(c, 2, UINT64_C(26));
  /* 103f84: bl #0x1428d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1064840));
  fn1_1428d8(c);
  /* 103f88: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* 103f8c: csel x8, x27, x0, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 27)) : ARC_X_R(c, 0)));
  /* 103f90: sub x8, x8, x26 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 26)));
  /* 103f94: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* 103f98: b.gt #0x103fec */
  if (ARC_COND(c, 12)) goto L_103fec;
  /* 103f9c: cmp x8, #0x16 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(22));
  /* 103fa0: b.lt #0x103fc0 */
  if (ARC_COND(c, 11)) goto L_103fc0;
  /* 103fa4: subs x9, x22, x19 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 19)));
  /* 103fa8: b.eq #0x103fec */
  if (ARC_COND(c, 0)) goto L_103fec;
  /* 103fac: cmp x9, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(2));
  /* 103fb0: b.gt #0x103fec */
  if (ARC_COND(c, 12)) goto L_103fec;
  /* 103fb4: ldurb w9, [x22, #-1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 22) + INT64_C(-1))));
  /* 103fb8: cmp w9, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(48));
  /* 103fbc: b.ne #0x103fec */
  if (ARC_COND(c, 1)) goto L_103fec;
L_103fc0:;
  /* 103fc0: ldrb w8, [x23, x8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 23) + ARC_X_R(c, 8))));
L_103fc4:;
  /* 103fc4: strb w8, [x22], #1 */
  { const uint64_t _a = ARC_X_R(c, 22);
    ARC_X_W(c, 22, ARC_X_R(c, 22) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* 103fc8: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 103fcc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 103fd0: b.ne #0x103d98 */
  if (ARC_COND(c, 1)) goto L_103d98;
  /* 103fd4: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 103fd8: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 103fdc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 103fe0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1064932));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 103fe4: b #0x103da0 */
  goto L_103da0;
L_103fe8:;
  /* 103fe8: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
L_103fec:;
  /* 103fec: ldrb w9, [sp, #0x10] */
  ARC_W_W(c, 9, arc_ld8(((c)->sp + INT64_C(16))));
  /* 103ff0: ldr x10, [sp, #0x18] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(24))));
  /* 103ff4: sub x8, x22, x19 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) - ARC_X_R(c, 19)));
  /* 103ff8: ldp x24, x22, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 22, arc_ld64(_pa + 8));
  }
  /* 103ffc: lsr x11, x9, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 104000: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 104004: csel x10, x11, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 104008: subs x1, x8, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10)));
  /* 10400c: b.ls #0x104020 */
  if (ARC_COND(c, 9)) goto L_104020;
  /* 104010: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 104014: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 104018: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1064988));
  fn1_142d10(c);
  /* 10401c: b #0x104040 */
  goto L_104040;
L_104020:;
  /* 104020: tbnz w9, #0, #0x104034 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_104034;
  /* 104024: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* 104028: strb w9, [sp, #0x10] */
  arc_st8(((c)->sp + INT64_C(16)), ARC_W_R(c, 9));
  /* 10402c: mov x9, x25 */
  ARC_X_W(c, 9, ARC_X_R(c, 25));
  /* 104030: b #0x10403c */
  goto L_10403c;
L_104034:;
  /* 104034: ldr x9, [sp, #0x20] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(32))));
  /* 104038: str x8, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 8));
L_10403c:;
  /* 10403c: strb wzr, [x9, x8] */
  arc_st8((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_W_R(c, 31));
L_104040:;
  /* 104040: ldrb w8, [sp, #0x10] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(16))));
  /* 104044: ldr x9, [sp, #0x20] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(32))));
  /* 104048: nop  */
  /* nop: no architectural effect here */
  /* 10404c: adr x10, #0x15dc38 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 104050: adrp x19, #0x15d000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 104054: ldarb w10, [x10] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 10)));
  /* 104058: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 10405c: csel x23, x25, x9, eq */
  ARC_X_W(c, 23, (ARC_COND(c, 0) ? (ARC_X_R(c, 25)) : ARC_X_R(c, 9)));
  /* 104060: tbz w10, #0, #0x104184 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) == 0) goto L_104184;
L_104064:;
  /* 104064: ldr x1, [x19, #0xc30] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(3120))));
  /* 104068: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 10406c: mov x3, x24 */
  ARC_X_W(c, 3, ARC_X_R(c, 24));
  /* 104070: bl #0x136480 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1065076));
  fn1_136480(c);
  /* 104074: cmp w0, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(1));
  /* 104078: b.eq #0x104084 */
  if (ARC_COND(c, 0)) goto L_104084;
  /* 10407c: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 104080: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_104084:;
  /* 104084: cbz x20, #0x1040ac */
  if ((ARC_X_R(c, 20)) == 0) goto L_1040ac;
  /* 104088: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 10408c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 104090: b.eq #0x1040c8 */
  if (ARC_COND(c, 0)) goto L_1040c8;
  /* 104094: cbz x21, #0x104134 */
  if ((ARC_X_R(c, 21)) == 0) goto L_104134;
  /* 104098: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 10409c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1040a0: b.ne #0x104128 */
  if (ARC_COND(c, 1)) goto L_104128;
  /* 1040a4: mov w19, wzr */
  ARC_W_W(c, 19, ARC_W_R(c, 31));
  /* 1040a8: b #0x104100 */
  goto L_104100;
L_1040ac:;
  /* 1040ac: cbz x21, #0x104124 */
  if ((ARC_X_R(c, 21)) == 0) goto L_104124;
  /* 1040b0: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1040b4: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 1040b8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1040bc: b.ne #0x104134 */
  if (ARC_COND(c, 1)) goto L_104134;
  /* 1040c0: mov w19, #1 */
  ARC_W_W(c, 19, UINT64_C(1));
  /* 1040c4: b #0x104100 */
  goto L_104100;
L_1040c8:;
  /* 1040c8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1040cc: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1040d0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1040d4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1065176));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1040d8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1040dc: cset w19, eq */
  ARC_W_W(c, 19, (ARC_COND(c, 0) ? 1 : 0));
  /* 1040e0: csel x20, xzr, x20, eq */
  ARC_X_W(c, 20, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 20)));
  /* 1040e4: cbz x21, #0x104174 */
  if ((ARC_X_R(c, 21)) == 0) goto L_104174;
  /* 1040e8: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1040ec: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1040f0: b.eq #0x104100 */
  if (ARC_COND(c, 0)) goto L_104100;
  /* 1040f4: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1040f8: b.ne #0x104128 */
  if (ARC_COND(c, 1)) goto L_104128;
  /* 1040fc: b #0x104134 */
  goto L_104134;
L_104100:;
  /* 104100: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 104104: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 104108: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 10410c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1065232));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 104110: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 104114: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 104118: eor w8, w19, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 19) ^ ARC_W_R(c, 8)));
  /* 10411c: tbz w8, #0, #0x104128 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_104128;
  /* 104120: b #0x104134 */
  goto L_104134;
L_104124:;
  /* 104124: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
L_104128:;
  /* 104128: ldr w8, [x22] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 22)));
  /* 10412c: orr w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(2)));
  /* 104130: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_104134:;
  /* 104134: ldrb w8, [sp, #0x10] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(16))));
  /* 104138: tbz w8, #0, #0x10414c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10414c;
  /* 10413c: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* 104140: ldr x0, [sp, #0x20] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(32))));
  /* 104144: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 104148: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1065292));
  fn1_142608(c);
L_10414c:;
  /* 10414c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 104150: ldp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 104154: ldp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 104158: ldp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 10415c: ldp x26, x25, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 104160: ldp x28, x27, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 104164: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 104168: add sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(176)));
  /* 10416c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 104170: ret  */
  return;
L_104174:;
  /* 104174: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 104178: b.ne #0x104134 */
  if (ARC_COND(c, 1)) goto L_104134;
  /* 10417c: b #0x104128 */
  goto L_104128;
L_104180:;
  /* 104180: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1065348));
  fn1_fc3b8(c);
L_104184:;
  /* 104184: nop  */
  /* nop: no architectural effect here */
  /* 104188: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10418c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1065360));
  fn1_1424b8(c);
  /* 104190: cbz w0, #0x104064 */
  if ((ARC_W_R(c, 0)) == 0) goto L_104064;
  /* 104194: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 104198: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 10419c: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 1041a0: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1041a4: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1065384));
  fn1_1441e0(c);
  /* 1041a8: str x0, [x19, #0xc30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 1041ac: nop  */
  /* nop: no architectural effect here */
  /* 1041b0: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 1041b4: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1065400));
  fn1_1424d0(c);
  /* 1041b8: ldp x24, x22, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 22, arc_ld64(_pa + 8));
  }
  /* 1041bc: b #0x104064 */
  goto L_104064;
  /* 1041c0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1041c4: nop  */
  /* nop: no architectural effect here */
  /* 1041c8: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 1041cc: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1065424));
  fn1_1424e8(c);
  /* 1041d0: b #0x104210 */
  goto L_104210;
  /* 1041d4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1041d8: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1041dc: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1065440));
  fn1_d2a78(c);
  /* 1041e0: b #0x1041fc */
  goto L_1041fc;
  /* 1041e4: b #0x10420c */
  goto L_10420c;
  /* 1041e8: b #0x10420c */
  goto L_10420c;
  /* 1041ec: b #0x10420c */
  goto L_10420c;
  /* 1041f0: b #0x1041f8 */
  goto L_1041f8;
  /* 1041f4: b #0x10420c */
  goto L_10420c;
L_1041f8:;
  /* 1041f8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_1041fc:;
  /* 1041fc: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 104200: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1065476));
  fn1_143478(c);
  /* 104204: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 104208: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1065484));
  fn1_9cc20(c);
L_10420c:;
  /* 10420c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_104210:;
  /* 104210: ldrb w8, [sp, #0x10] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(16))));
  /* 104214: tbz w8, #0, #0x104228 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_104228;
  /* 104218: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* 10421c: ldr x0, [sp, #0x20] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(32))));
  /* 104220: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 104224: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1065512));
  fn1_142608(c);
L_104228:;
  /* 104228: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10422c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1065520));
  fn1_9cc20(c);
}

void fn1_110a8c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039044748));
  /* 110a8c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 110a90: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 110a94: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 110a98: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 110a9c: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* 110aa0: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 110aa4: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 110aa8: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 110aac: mov x2, x4 */
  ARC_X_W(c, 2, ARC_X_R(c, 4));
  /* 110ab0: mov x3, x5 */
  ARC_X_W(c, 3, ARC_X_R(c, 5));
  /* 110ab4: mov w4, #2 */
  ARC_W_W(c, 4, UINT64_C(2));
  /* 110ab8: bl #0x110db0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1116860));
  fn1_110db0(c);
  /* 110abc: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* 110ac0: cmp w0, #0x3c */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(60));
  /* 110ac4: b.gt #0x110ad4 */
  if (ARC_COND(c, 12)) goto L_110ad4;
  /* 110ac8: tbnz w8, #2, #0x110ad4 */
  if (((ARC_W_R(c, 8)) >> 2 & 1) != 0) goto L_110ad4;
  /* 110acc: str w0, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 0));
  /* 110ad0: b #0x110adc */
  goto L_110adc;
L_110ad4:;
  /* 110ad4: orr w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* 110ad8: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_110adc:;
  /* 110adc: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 110ae0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 110ae4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 110ae8: ret  */
  return;
}

void fn1_113d60(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057760));
  /* 113d60: bti c */
  /* bti: no architectural effect here */
  /* 113d64: stp xzr, xzr, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 113d68: str xzr, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 31));
  /* 113d6c: ret  */
  return;
}

void fn1_11ad04(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039086340));
  /* 11ad04: bti c */
  /* bti: no architectural effect here */
  /* 11ad08: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11ad0c: ret  */
  return;
}

void fn1_125448(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039129160));
  /* 125448: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12544c: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 125450: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 125454: str x21, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 21));
  /* 125458: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12545c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 125460: ldar x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 125464: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 125468: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 12546c: b.eq #0x125528 */
  if (ARC_COND(c, 0)) goto L_125528;
  /* 125470: nop  */
  /* nop: no architectural effect here */
  /* 125474: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 125478: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1201276));
  fn1_142518(c);
  /* 12547c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 125480: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 125484: b.ne #0x1254b0 */
  if (ARC_COND(c, 1)) goto L_1254b0;
  /* 125488: nop  */
  /* nop: no architectural effect here */
  /* 12548c: adr x20, #0x15791c */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 125490: nop  */
  /* nop: no architectural effect here */
  /* 125494: adr x21, #0x1578f4 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407220)));
L_125498:;
  /* 125498: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12549c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1254a0: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1201316));
  fn1_142530(c);
  /* 1254a4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1254a8: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1254ac: b.eq #0x125498 */
  if (ARC_COND(c, 0)) goto L_125498;
L_1254b0:;
  /* 1254b0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1254b4: cbz x8, #0x1254c8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1254c8;
  /* 1254b8: nop  */
  /* nop: no architectural effect here */
  /* 1254bc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1254c0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1201348));
  fn1_142560(c);
  /* 1254c4: b #0x125528 */
  goto L_125528;
L_1254c8:;
  /* 1254c8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 1254cc: str x19, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 19));
  /* 1254d0: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 1254d4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 1254d8: nop  */
  /* nop: no architectural effect here */
  /* 1254dc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1254e0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1201380));
  fn1_142560(c);
  /* 1254e4: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1254e8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1254ec: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 1254f0: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1201396));
  fn1_a2030(c);
  /* 1254f4: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 1254f8: str w8, [x19, #8] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(8)), ARC_W_R(c, 8));
  /* 1254fc: nop  */
  /* nop: no architectural effect here */
  /* 125500: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 125504: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1201416));
  fn1_142518(c);
  /* 125508: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 12550c: stlr x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 125510: nop  */
  /* nop: no architectural effect here */
  /* 125514: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 125518: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1201436));
  fn1_142560(c);
  /* 12551c: nop  */
  /* nop: no architectural effect here */
  /* 125520: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 125524: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1201448));
  fn1_142578(c);
L_125528:;
  /* 125528: ldrsw x8, [x19, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 19) + INT64_C(8)))));
  /* 12552c: sub x0, x8, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 125530: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 125534: ldr x21, [sp, #0x20] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(32))));
  /* 125538: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12553c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 125540: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 125544: ret  */
  return;
  /* 125548: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12554c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 125550: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1201492));
  fn1_d2a78(c);
  /* 125554: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 125558: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1201500));
  fn1_9cc20(c);
}

void fn1_127d1c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039139612));
  /* 127d1c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 127d20: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 127d24: str x25, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 25));
  /* 127d28: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 127d2c: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 127d30: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 127d34: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 127d38: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 127d3c: cmp x1, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 2));
  /* 127d40: b.eq #0x127da0 */
  if (ARC_COND(c, 0)) goto L_127da0;
  /* 127d44: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 127d48: mov w21, w3 */
  ARC_W_W(c, 21, ARC_W_R(c, 3));
  /* 127d4c: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 127d50: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 127d54: b #0x127d70 */
  goto L_127d70;
L_127d58:;
  /* 127d58: cmn w24, #1 */
  (void)arc_add32(c, ARC_W_R(c, 24), UINT64_C(1), 0);
  /* 127d5c: add x19, x19, #4 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* 127d60: csel w8, w21, w24, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? (ARC_W_R(c, 21)) : ARC_W_R(c, 24)));
  /* 127d64: cmp x19, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 22));
  /* 127d68: strb w8, [x20], #1 */
  { const uint64_t _a = ARC_X_R(c, 20);
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* 127d6c: b.eq #0x127da0 */
  if (ARC_COND(c, 0)) goto L_127da0;
L_127d70:;
  /* 127d70: ldr x0, [x23, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 23) + INT64_C(16))));
  /* 127d74: ldr w24, [x19] */
  ARC_W_W(c, 24, arc_ld32(ARC_X_R(c, 19)));
  /* 127d78: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1211772));
  fn1_1443c0(c);
  /* 127d7c: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* 127d80: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* 127d84: mov w0, w24 */
  ARC_W_W(c, 0, ARC_W_R(c, 24));
  /* 127d88: bl #0x1443d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1211788));
  fn1_1443d8(c);
  /* 127d8c: mov w24, w0 */
  ARC_W_W(c, 24, ARC_W_R(c, 0));
  /* 127d90: cbz x25, #0x127d58 */
  if ((ARC_X_R(c, 25)) == 0) goto L_127d58;
  /* 127d94: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 127d98: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1211804));
  fn1_1443c0(c);
  /* 127d9c: b #0x127d58 */
  goto L_127d58;
L_127da0:;
  /* 127da0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 127da4: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 127da8: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* 127dac: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 127db0: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 127db4: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 127db8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 127dbc: ret  */
  return;
  /* 127dc0: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1211844));
  fn1_a1454(c);
  /* 127dc4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 127dc8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 127dcc: bl #0x135428 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1211856));
  fn1_135428(c);
  /* 127dd0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 127dd4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1211864));
  fn1_9cc20(c);
}

void fn1_129d10(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039147792));
  /* 129d10: bti c */
  /* bti: no architectural effect here */
  /* 129d14: ldrb w9, [x0, #0x18] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(24))));
  /* 129d18: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 129d1c: tbz w9, #1, #0x129d4c */
  if (((ARC_W_R(c, 9)) >> 1 & 1) == 0) goto L_129d4c;
  /* 129d20: sub x9, x6, x5 */
  ARC_X_W(c, 9, (ARC_X_R(c, 6) - ARC_X_R(c, 5)));
  /* 129d24: cmp x9, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(3));
  /* 129d28: b.ge #0x129d34 */
  if (ARC_COND(c, 10)) goto L_129d34;
L_129d2c:;
  /* 129d2c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 129d30: b #0x129e10 */
  goto L_129e10;
L_129d34:;
  /* 129d34: mov w9, #0xbbef */
  ARC_W_W(c, 9, UINT64_C(48111));
  /* 129d38: mov w10, #0xbf */
  ARC_W_W(c, 10, UINT64_C(191));
  /* 129d3c: strh w9, [x5] */
  arc_st16(ARC_X_R(c, 5), ARC_W_R(c, 9));
  /* 129d40: add x9, x5, #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 5) + UINT64_C(3)));
  /* 129d44: strb w10, [x5, #2] */
  arc_st8((ARC_X_R(c, 5) + INT64_C(2)), ARC_W_R(c, 10));
  /* 129d48: mov x5, x9 */
  ARC_X_W(c, 5, ARC_X_R(c, 9));
L_129d4c:;
  /* 129d4c: cmp x2, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 3));
  /* 129d50: b.hs #0x129e04 */
  if (ARC_COND(c, 2)) goto L_129e04;
  /* 129d54: mov w9, #0xd800 */
  ARC_W_W(c, 9, UINT64_C(55296));
  /* 129d58: b #0x129d6c */
  goto L_129d6c;
L_129d5c:;
  /* 129d5c: mov x5, x10 */
  ARC_X_W(c, 5, ARC_X_R(c, 10));
L_129d60:;
  /* 129d60: add x2, x2, #2 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2)));
  /* 129d64: cmp x2, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 3));
  /* 129d68: b.hs #0x129e04 */
  if (ARC_COND(c, 2)) goto L_129e04;
L_129d6c:;
  /* 129d6c: ldrh w10, [x2] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 2)));
  /* 129d70: and w11, w10, #0xf800 */
  ARC_W_W(c, 11, (ARC_W_R(c, 10) & UINT64_C(63488)));
  /* 129d74: cmp w11, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 9));
  /* 129d78: ccmp x8, x10, #0, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* 129d7c: b.lo #0x129e0c */
  if (ARC_COND(c, 3)) goto L_129e0c;
  /* 129d80: cmp w10, #0x7f */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(127));
  /* 129d84: b.hi #0x129d9c */
  if (ARC_COND(c, 8)) goto L_129d9c;
  /* 129d88: sub x11, x6, x5 */
  ARC_X_W(c, 11, (ARC_X_R(c, 6) - ARC_X_R(c, 5)));
  /* 129d8c: cmp x11, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(1));
  /* 129d90: b.lt #0x129d2c */
  if (ARC_COND(c, 11)) goto L_129d2c;
  /* 129d94: strb w10, [x5], #1 */
  { const uint64_t _a = ARC_X_R(c, 5);
    ARC_X_W(c, 5, ARC_X_R(c, 5) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 10));
  }
  /* 129d98: b #0x129d60 */
  goto L_129d60;
L_129d9c:;
  /* 129d9c: cmp w10, #0x7ff */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(2047));
  /* 129da0: sub x11, x6, x5 */
  ARC_X_W(c, 11, (ARC_X_R(c, 6) - ARC_X_R(c, 5)));
  /* 129da4: b.hi #0x129dd0 */
  if (ARC_COND(c, 8)) goto L_129dd0;
  /* 129da8: cmp x11, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(2));
  /* 129dac: b.lt #0x129d2c */
  if (ARC_COND(c, 11)) goto L_129d2c;
  /* 129db0: lsr w11, w10, #6 */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 10)) >> ((UINT64_C(6)) & 31)));
  /* 129db4: mov w12, #0x80 */
  ARC_W_W(c, 12, UINT64_C(128));
  /* 129db8: bfxil w12, w10, #0, #6 */
  ARC_W_W(c, 12, (((uint32_t)(ARC_W_R(c, 12)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 10))) >> 0) & UINT64_C(63))));
  /* 129dbc: add x10, x5, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 5) + UINT64_C(2)));
  /* 129dc0: orr w11, w11, #0xc0 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) | UINT64_C(192)));
  /* 129dc4: strb w11, [x5] */
  arc_st8(ARC_X_R(c, 5), ARC_W_R(c, 11));
  /* 129dc8: strb w12, [x5, #1] */
  arc_st8((ARC_X_R(c, 5) + INT64_C(1)), ARC_W_R(c, 12));
  /* 129dcc: b #0x129d5c */
  goto L_129d5c;
L_129dd0:;
  /* 129dd0: cmp x11, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(3));
  /* 129dd4: b.lt #0x129d2c */
  if (ARC_COND(c, 11)) goto L_129d2c;
  /* 129dd8: lsr w11, w10, #0xc */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 10)) >> ((UINT64_C(12)) & 31)));
  /* 129ddc: mov w12, #0x80 */
  ARC_W_W(c, 12, UINT64_C(128));
  /* 129de0: mov w13, #0x80 */
  ARC_W_W(c, 13, UINT64_C(128));
  /* 129de4: bfxil w12, w10, #6, #6 */
  ARC_W_W(c, 12, (((uint32_t)(ARC_W_R(c, 12)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 10))) >> 6) & UINT64_C(63))));
  /* 129de8: bfxil w13, w10, #0, #6 */
  ARC_W_W(c, 13, (((uint32_t)(ARC_W_R(c, 13)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 10))) >> 0) & UINT64_C(63))));
  /* 129dec: add x10, x5, #3 */
  ARC_X_W(c, 10, (ARC_X_R(c, 5) + UINT64_C(3)));
  /* 129df0: orr w11, w11, #0xe0 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) | UINT64_C(224)));
  /* 129df4: strb w11, [x5] */
  arc_st8(ARC_X_R(c, 5), ARC_W_R(c, 11));
  /* 129df8: strb w12, [x5, #1] */
  arc_st8((ARC_X_R(c, 5) + INT64_C(1)), ARC_W_R(c, 12));
  /* 129dfc: strb w13, [x5, #2] */
  arc_st8((ARC_X_R(c, 5) + INT64_C(2)), ARC_W_R(c, 13));
  /* 129e00: b #0x129d5c */
  goto L_129d5c;
L_129e04:;
  /* 129e04: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 129e08: b #0x129e10 */
  goto L_129e10;
L_129e0c:;
  /* 129e0c: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
L_129e10:;
  /* 129e10: str x2, [x4] */
  arc_st64(ARC_X_R(c, 4), ARC_X_R(c, 2));
  /* 129e14: str x5, [x7] */
  arc_st64(ARC_X_R(c, 7), ARC_X_R(c, 5));
  /* 129e18: ret  */
  return;
}

void fn1_12b888(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039154824));
  /* 12b888: bti c */
  /* bti: no architectural effect here */
  /* 12b88c: ldrb w9, [x0, #0x20] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(32))));
  /* 12b890: mov w8, #7 */
  ARC_W_W(c, 8, UINT64_C(7));
  /* 12b894: tst w9, #4 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(4)));
  /* 12b898: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 12b89c: csel w0, w9, w8, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* 12b8a0: ret  */
  return;
}

void fn1_12e140(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039165248));
  /* 12e140: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12e144: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12e148: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12e14c: nop  */
  /* nop: no architectural effect here */
  /* 12e150: adr x8, #0x15def0 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433328)));
  /* 12e154: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 12e158: tbz w8, #0, #0x12e170 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12e170;
L_12e15c:;
  /* 12e15c: nop  */
  /* nop: no architectural effect here */
  /* 12e160: adr x0, #0x156d90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1404304)));
  /* 12e164: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12e168: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12e16c: ret  */
  return;
L_12e170:;
  /* 12e170: nop  */
  /* nop: no architectural effect here */
  /* 12e174: adr x0, #0x15def0 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433328)));
  /* 12e178: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1237372));
  fn1_1424b8(c);
  /* 12e17c: cbz w0, #0x12e15c */
  if ((ARC_W_R(c, 0)) == 0) goto L_12e15c;
  /* 12e180: adrp x0, #0x151000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 12e184: nop  */
  /* nop: no architectural effect here */
  /* 12e188: adr x1, #0x156d90 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1404304)));
  /* 12e18c: ldr x0, [x0, #0xa40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(2624))));
  /* 12e190: nop  */
  /* nop: no architectural effect here */
  /* 12e194: adr x2, #0x148af8 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1346296)));
  /* 12e198: bl #0x1423f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1237404));
  fn1_1423f8(c);
  /* 12e19c: nop  */
  /* nop: no architectural effect here */
  /* 12e1a0: adr x0, #0x15def0 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433328)));
  /* 12e1a4: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1237416));
  fn1_1424d0(c);
  /* 12e1a8: b #0x12e15c */
  goto L_12e15c;
}

void fn1_134aa8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192232));
  /* 134aa8: bti c */
  /* bti: no architectural effect here */
  /* 134aac: add x0, x0, #0x3d0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(976)));
  /* 134ab0: ret  */
  return;
}

void fn1_13599c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039196060));
  /* 13599c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1359a0: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1359a4: str x25, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 25));
  /* 1359a8: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1359ac: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1359b0: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1359b4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1359b8: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* 1359bc: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 1359c0: b.eq #0x135a4c */
  if (ARC_COND(c, 0)) goto L_135a4c;
  /* 1359c4: mov w22, w3 */
  ARC_W_W(c, 22, ARC_W_R(c, 3));
  /* 1359c8: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1359cc: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1359d0: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1268180));
  fn1_142a58(c);
  /* 1359d4: ldr w24, [x0] */
  ARC_W_W(c, 24, arc_ld32(ARC_X_R(c, 0)));
  /* 1359d8: str wzr, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 31));
  /* 1359dc: nop  */
  /* nop: no architectural effect here */
  /* 1359e0: adr x8, #0x15dc38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 1359e4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1359e8: adrp x25, #0x15d000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 1359ec: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1359f0: tbz w8, #0, #0x135a74 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_135a74;
L_1359f4:;
  /* 1359f4: ldr x3, [x25, #0xc30] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 25) + INT64_C(3120))));
  /* 1359f8: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1359fc: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 135a00: mov w2, w22 */
  ARC_W_W(c, 2, ARC_W_R(c, 22));
  /* 135a04: bl #0x1444e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1268232));
  fn1_1444e0(c);
  /* 135a08: ldr w8, [x21] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 21)));
  /* 135a0c: cbz w8, #0x135a3c */
  if ((ARC_W_R(c, 8)) == 0) goto L_135a3c;
  /* 135a10: ldr x9, [x29, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 135a14: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* 135a18: b.ne #0x135a4c */
  if (ARC_COND(c, 1)) goto L_135a4c;
  /* 135a1c: cmp w8, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(34));
  /* 135a20: b.ne #0x135a58 */
  if (ARC_COND(c, 1)) goto L_135a58;
  /* 135a24: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 135a28: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* 135a2c: mov x9, #0x7fffffffffffffff */
  ARC_X_W(c, 9, UINT64_C(9223372036854775807));
  /* 135a30: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 135a34: cinv x0, x9, le */
  ARC_X_W(c, 0, (ARC_COND(c, 13) ? (~(uint64_t)(ARC_X_R(c, 9))) : (ARC_X_R(c, 9))));
  /* 135a38: b #0x135a58 */
  goto L_135a58;
L_135a3c:;
  /* 135a3c: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 135a40: str w24, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 24));
  /* 135a44: cmp x8, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* 135a48: b.eq #0x135a58 */
  if (ARC_COND(c, 0)) goto L_135a58;
L_135a4c:;
  /* 135a4c: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 135a50: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 135a54: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_135a58:;
  /* 135a58: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 135a5c: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* 135a60: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 135a64: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 135a68: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 135a6c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 135a70: ret  */
  return;
L_135a74:;
  /* 135a74: nop  */
  /* nop: no architectural effect here */
  /* 135a78: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 135a7c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1268352));
  fn1_1424b8(c);
  /* 135a80: cbz w0, #0x1359f4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_1359f4;
  /* 135a84: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 135a88: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 135a8c: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 135a90: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 135a94: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1268376));
  fn1_1441e0(c);
  /* 135a98: str x0, [x25, #0xc30] */
  arc_st64((ARC_X_R(c, 25) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 135a9c: nop  */
  /* nop: no architectural effect here */
  /* 135aa0: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 135aa4: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1268392));
  fn1_1424d0(c);
  /* 135aa8: b #0x1359f4 */
  goto L_1359f4;
  /* 135aac: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 135ab0: nop  */
  /* nop: no architectural effect here */
  /* 135ab4: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 135ab8: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1268412));
  fn1_1424e8(c);
  /* 135abc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 135ac0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1268420));
  fn1_9cc20(c);
}

void fn1_138b40(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039208768));
  /* 138b40: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 138b44: sub sp, sp, #0xf0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(240)));
  /* 138b48: stp x29, x30, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 138b4c: stp x20, x19, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 138b50: add x29, sp, #0xd0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(208)));
  /* 138b54: ldr x8, [x0, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* 138b58: cbz x8, #0x138b78 */
  if ((ARC_X_R(c, 8)) == 0) goto L_138b78;
  /* 138b5c: ldr q0, [x1] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 1)), arc_ld64(ARC_X_R(c, 1) + 8));
  /* 138b60: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* 138b64: ldp x20, x19, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 138b68: ldp x29, x30, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 138b6c: add sp, sp, #0xf0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(240)));
  /* 138b70: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 138b74: ret  */
  return;
L_138b78:;
  /* 138b78: stp x1, x2, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 138b7c: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 138b80: add x1, x1, #0x597 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1431)));
  /* 138b84: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 138b88: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* 138b8c: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* 138b90: bl #0x11dda8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1280916));
  fn1_11dda8(c);
  /* 138b94: ldr x1, [x20] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 20)));
  /* 138b98: str x20, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 20));
  /* 138b9c: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* 138ba0: bl #0x142b78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1280932));
  fn1_142b78(c);
  /* 138ba4: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 138ba8: ldr q0, [x0] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 0)), arc_ld64(ARC_X_R(c, 0) + 8));
  /* 138bac: stur x8, [x29, #-0x50] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-80)), ARC_X_R(c, 8));
  /* 138bb0: stur q0, [x29, #-0x60] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-96)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-96)) + 8, (c)->q[0].u64[1]);
  /* 138bb4: stp xzr, xzr, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 138bb8: str xzr, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 31));
  /* 138bbc: adrp x1, #0x52000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(335872)));
  /* 138bc0: add x1, x1, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(48)));
  /* 138bc4: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 138bc8: bl #0x142b78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1280972));
  fn1_142b78(c);
  /* 138bcc: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 138bd0: ldr q0, [x0] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 0)), arc_ld64(ARC_X_R(c, 0) + 8));
  /* 138bd4: stur x8, [x29, #-0x30] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-48)), ARC_X_R(c, 8));
  /* 138bd8: stur q0, [x29, #-0x40] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-64)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-64)) + 8, (c)->q[0].u64[1]);
  /* 138bdc: stp xzr, xzr, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 138be0: str xzr, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 31));
  /* 138be4: ldp q0, q1, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 138be8: stp q0, q1, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 138bec: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 138bf0: add x8, sp, #0x40 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(64)));
  /* 138bf4: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 138bf8: bl #0xd7b2c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1281020));
  fn1_d7b2c(c);
  /* 138bfc: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 138c00: add x1, sp, #0x40 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(64)));
  /* 138c04: bl #0xd8234 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1281032));
  fn1_d8234(c);
  /* 138c08: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 138c0c: ldr q0, [x0] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 0)), arc_ld64(ARC_X_R(c, 0) + 8));
  /* 138c10: stur x8, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 8));
  /* 138c14: stur q0, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)) + 8, (c)->q[0].u64[1]);
  /* 138c18: stp xzr, xzr, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 138c1c: str xzr, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 31));
  /* 138c20: ldrb w8, [sp, #0x40] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(64))));
  /* 138c24: tbnz w8, #0, #0x138c80 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_138c80;
  /* 138c28: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 138c2c: tbnz w8, #0, #0x138c98 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_138c98;
L_138c30:;
  /* 138c30: ldurb w8, [x29, #-0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 138c34: tbnz w8, #0, #0x138cb0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_138cb0;
L_138c38:;
  /* 138c38: ldrb w8, [sp, #0x58] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(88))));
  /* 138c3c: tbz w8, #0, #0x138c50 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_138c50;
L_138c40:;
  /* 138c40: ldr x8, [sp, #0x58] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(88))));
  /* 138c44: ldr x0, [sp, #0x68] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(104))));
  /* 138c48: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 138c4c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1281104));
  fn1_142608(c);
L_138c50:;
  /* 138c50: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 138c54: ldp x1, x2, [x8, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(16));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 138c58: cmp x1, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(0));
  /* 138c5c: cset w8, ne */
  ARC_W_W(c, 8, (ARC_COND(c, 1) ? 1 : 0));
  /* 138c60: cmp x2, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 2), UINT64_C(0));
  /* 138c64: cinc w8, w8, ne */
  ARC_W_W(c, 8, (ARC_COND(c, 1) ? (ARC_W_R(c, 8)) + 1 : (ARC_W_R(c, 8))));
  /* 138c68: cbz w8, #0x138ccc */
  if ((ARC_W_R(c, 8)) == 0) goto L_138ccc;
  /* 138c6c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 138c70: b.ne #0x138cd8 */
  if (ARC_COND(c, 1)) goto L_138cd8;
  /* 138c74: ldr x2, [sp, #0x10] */
  ARC_X_W(c, 2, arc_ld64(((c)->sp + INT64_C(16))));
  /* 138c78: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 138c7c: bl #0x138e98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1281152));
  fn1_138e98(c);
L_138c80:;
  /* 138c80: ldr x8, [sp, #0x40] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(64))));
  /* 138c84: ldr x0, [sp, #0x50] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(80))));
  /* 138c88: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 138c8c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1281168));
  fn1_142608(c);
  /* 138c90: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 138c94: tbz w8, #0, #0x138c30 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_138c30;
L_138c98:;
  /* 138c98: ldur x8, [x29, #-0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 138c9c: ldur x0, [x29, #-0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-48))));
  /* 138ca0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 138ca4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1281192));
  fn1_142608(c);
  /* 138ca8: ldurb w8, [x29, #-0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 138cac: tbz w8, #0, #0x138c38 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_138c38;
L_138cb0:;
  /* 138cb0: ldur x8, [x29, #-0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 138cb4: ldur x0, [x29, #-0x50] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-80))));
  /* 138cb8: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 138cbc: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1281216));
  fn1_142608(c);
  /* 138cc0: ldrb w8, [sp, #0x58] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(88))));
  /* 138cc4: tbnz w8, #0, #0x138c40 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_138c40;
  /* 138cc8: b #0x138c50 */
  goto L_138c50;
L_138ccc:;
  /* 138ccc: ldr x1, [sp, #0x10] */
  ARC_X_W(c, 1, arc_ld64(((c)->sp + INT64_C(16))));
  /* 138cd0: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 138cd4: bl #0x138db4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1281240));
  fn1_138db4(c);
L_138cd8:;
  /* 138cd8: ldr x3, [sp, #0x10] */
  ARC_X_W(c, 3, arc_ld64(((c)->sp + INT64_C(16))));
  /* 138cdc: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 138ce0: bl #0x138f84 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1281252));
  fn1_138f84(c);
  /* 138ce4: ldurb w8, [x29, #-0x20] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 138ce8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 138cec: tbz w8, #0, #0x138dac */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_138dac;
  /* 138cf0: ldur x0, [x29, #-0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 138cf4: ldur x8, [x29, #-0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 138cf8: b #0x138da4 */
  goto L_138da4;
  /* 138cfc: ldrb w8, [sp, #0x40] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(64))));
  /* 138d00: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 138d04: tbnz w8, #0, #0x138d24 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_138d24;
  /* 138d08: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 138d0c: tbnz w8, #0, #0x138d4c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_138d4c;
L_138d10:;
  /* 138d10: ldurb w8, [x29, #-0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 138d14: tbnz w8, #0, #0x138d74 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_138d74;
L_138d18:;
  /* 138d18: ldrb w8, [sp, #0x58] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(88))));
  /* 138d1c: tbnz w8, #0, #0x138d9c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_138d9c;
  /* 138d20: b #0x138dac */
  goto L_138dac;
L_138d24:;
  /* 138d24: ldr x8, [sp, #0x40] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(64))));
  /* 138d28: ldr x0, [sp, #0x50] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(80))));
  /* 138d2c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 138d30: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1281332));
  fn1_142608(c);
  /* 138d34: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 138d38: tbz w8, #0, #0x138d10 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_138d10;
  /* 138d3c: b #0x138d4c */
  goto L_138d4c;
  /* 138d40: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 138d44: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 138d48: tbz w8, #0, #0x138d10 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_138d10;
L_138d4c:;
  /* 138d4c: ldur x8, [x29, #-0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 138d50: ldur x0, [x29, #-0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-48))));
  /* 138d54: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 138d58: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1281372));
  fn1_142608(c);
  /* 138d5c: ldurb w8, [x29, #-0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 138d60: tbz w8, #0, #0x138d18 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_138d18;
  /* 138d64: b #0x138d74 */
  goto L_138d74;
  /* 138d68: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 138d6c: ldurb w8, [x29, #-0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 138d70: tbz w8, #0, #0x138d18 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_138d18;
L_138d74:;
  /* 138d74: ldur x8, [x29, #-0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 138d78: ldur x0, [x29, #-0x50] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-80))));
  /* 138d7c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 138d80: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1281412));
  fn1_142608(c);
  /* 138d84: ldrb w8, [sp, #0x58] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(88))));
  /* 138d88: tbnz w8, #0, #0x138d9c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_138d9c;
  /* 138d8c: b #0x138dac */
  goto L_138dac;
  /* 138d90: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 138d94: ldrb w8, [sp, #0x58] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(88))));
  /* 138d98: tbz w8, #0, #0x138dac */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_138dac;
L_138d9c:;
  /* 138d9c: ldr x0, [sp, #0x68] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(104))));
  /* 138da0: ldr x8, [sp, #0x58] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(88))));
L_138da4:;
  /* 138da4: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 138da8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1281452));
  fn1_142608(c);
L_138dac:;
  /* 138dac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 138db0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1281460));
  fn1_9cc20(c);
}

void fn1_13e3d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039231440));
  /* 13e3d0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13e3d4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13e3d8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 13e3dc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 13e3e0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13e3e4: ldr w0, [x0, #8] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(8))));
  /* 13e3e8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 13e3ec: b.eq #0x13e3f4 */
  if (ARC_COND(c, 0)) goto L_13e3f4;
  /* 13e3f0: bl #0x143370 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303540));
  fn1_143370(c);
L_13e3f4:;
  /* 13e3f4: mov w8, #-1 */
  ARC_W_W(c, 8, UINT64_C(18446744073709551615));
  /* 13e3f8: str w8, [x19, #8] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(8)), ARC_W_R(c, 8));
  /* 13e3fc: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 13e400: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13e404: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13e408: ret  */
  return;
  /* 13e40c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303568));
  fn1_a1454(c);
}

void fn1_142668(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248488));
  /* 142668: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 14266c: ldr x17, [x16, #0xf58] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3928))));
  /* 142670: add x16, x16, #0xf58 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3928)));
  /* 142674: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142678: nop  */
  /* nop: no architectural effect here */
  /* 14267c: nop  */
  /* nop: no architectural effect here */
}

void fn1_142c68(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250024));
  /* 142c68: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142c6c: ldr x17, [x16, #0x158] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(344))));
  /* 142c70: add x16, x16, #0x158 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(344)));
  /* 142c74: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142c78: nop  */
  /* nop: no architectural effect here */
  /* 142c7c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143268(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251560));
  /* 143268: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14326c: ldr x17, [x16, #0x358] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(856))));
  /* 143270: add x16, x16, #0x358 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(856)));
  /* 143274: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143278: nop  */
  /* nop: no architectural effect here */
  /* 14327c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143868(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253096));
  /* 143868: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14386c: ldr x17, [x16, #0x558] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1368))));
  /* 143870: add x16, x16, #0x558 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1368)));
  /* 143874: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143878: nop  */
  /* nop: no architectural effect here */
  /* 14387c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143e68(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254632));
  /* 143e68: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143e6c: ldr x17, [x16, #0x758] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1880))));
  /* 143e70: add x16, x16, #0x758 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1880)));
  /* 143e74: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143e78: nop  */
  /* nop: no architectural effect here */
  /* 143e7c: nop  */
  /* nop: no architectural effect here */
}

void fn1_144468(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256168));
  /* 144468: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14446c: ldr x17, [x16, #0x958] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2392))));
  /* 144470: add x16, x16, #0x958 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2392)));
  /* 144474: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144478: nop  */
  /* nop: no architectural effect here */
  /* 14447c: nop  */
  /* nop: no architectural effect here */
}

void fn1_144a68(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039257704));
  /* 144a68: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144a6c: ldr x17, [x16, #0xb58] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2904))));
  /* 144a70: add x16, x16, #0xb58 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2904)));
  /* 144a74: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144a78: nop  */
  /* nop: no architectural effect here */
  /* 144a7c: nop  */
  /* nop: no architectural effect here */
}

