#include "lifted.h"
#include "df_lse.h"

void fn2_9a230(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076487216));
  /* 9a230: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 9a234: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 9a238: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 9a23c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 9a240: bl #0x9a12c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(631364));
  fn2_9a12c(c);
  /* 9a244: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 9a248: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 9a24c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9a250: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_9d914(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076501268));
  /* 9d914: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 9d918: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 9d91c: stp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 9d920: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 9d924: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 9d928: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 9d92c: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 9d930: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 9d934: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9d938: mov w23, w4 */
  ARC_W_W(c, 23, ARC_W_R(c, 4));
  /* 9d93c: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* 9d940: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 9d944: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* 9d948: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 9d94c: stur xzr, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 31));
  /* 9d950: bl #0xaec88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645460));
  fn2_aec88(c);
  /* 9d954: ldur x25, [x29, #-8] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 9d958: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 9d95c: bl #0x2258f4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645472));
  fn2_2258f4(c);
  /* 9d960: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 9d964: ldr x0, [x25, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 25) + INT64_C(24))));
  /* 9d968: tbz w8, #0, #0x9d988 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_9d988;
  /* 9d96c: cmp x0, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 25));
  /* 9d970: b.eq #0x9d9c4 */
  if (ARC_COND(c, 0)) goto L_9d9c4;
  /* 9d974: mov x26, x25 */
  ARC_X_W(c, 26, ARC_X_R(c, 25));
  /* 9d978: cbnz x0, #0x9d990 */
  if ((ARC_X_R(c, 0)) != 0) goto L_9d990;
  /* 9d97c: str x25, [x25, #0x18] */
  arc_st64((ARC_X_R(c, 25) + INT64_C(24)), ARC_X_R(c, 25));
  /* 9d980: mov x26, x25 */
  ARC_X_W(c, 26, ARC_X_R(c, 25));
  /* 9d984: b #0x9d9b8 */
  goto L_9d9b8;
L_9d988:;
  /* 9d988: cbz x0, #0x9d9e4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_9d9e4;
  /* 9d98c: mov x26, xzr */
  ARC_X_W(c, 26, ARC_X_R(c, 31));
L_9d990:;
  /* 9d990: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645524));
  fn2_225abc(c);
  /* 9d994: tbz w0, #0, #0x9d9b0 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_9d9b0;
  /* 9d998: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 9d99c: ldr x8, [x25, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(24))));
  /* 9d9a0: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* 9d9a4: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 9d9a8: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 9d9ac: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645552));
  arc_dispatch(c, ARC_X_R(c, 9));
L_9d9b0:;
  /* 9d9b0: str x26, [x25, #0x18] */
  arc_st64((ARC_X_R(c, 25) + INT64_C(24)), ARC_X_R(c, 26));
  /* 9d9b4: cbz x26, #0x9d9e4 */
  if ((ARC_X_R(c, 26)) == 0) goto L_9d9e4;
L_9d9b8:;
  /* 9d9b8: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 9d9bc: bl #0x2259d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645568));
  fn2_2259d8(c);
  /* 9d9c0: mov x25, x26 */
  ARC_X_W(c, 25, ARC_X_R(c, 26));
L_9d9c4:;
  /* 9d9c4: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 9d9c8: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645580));
  fn2_225abc(c);
  /* 9d9cc: tbz w0, #0, #0x9d9e4 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_9d9e4;
  /* 9d9d0: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 9d9d4: ldr x8, [x8, #0xfb0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4016))));
  /* 9d9d8: ldr x0, [x25, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 25) + INT64_C(16))));
  /* 9d9dc: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 9d9e0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645604));
  arc_dispatch(c, ARC_X_R(c, 8));
L_9d9e4:;
  /* 9d9e4: ldur x1, [x29, #-8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 9d9e8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 9d9ec: bl #0x9c4d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645616));
  fn2_9c4d8(c);
  /* 9d9f0: and w4, w23, #1 */
  ARC_W_W(c, 4, (ARC_W_R(c, 23) & UINT64_C(1)));
  /* 9d9f4: add x5, sp, #8 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(8)));
  /* 9d9f8: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 9d9fc: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 9da00: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 9da04: mov x3, x20 */
  ARC_X_W(c, 3, ARC_X_R(c, 20));
  /* 9da08: bl #0x9c5d4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645644));
  fn2_9c5d4(c);
  /* 9da0c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 9da10: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645652));
  fn2_1d79fc(c);
  /* 9da14: ldur x20, [x29, #-8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 9da18: adrp x1, #0x2b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(176128)));
  /* 9da1c: add x1, x1, #0x419 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1049)));
  /* 9da20: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 9da24: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 9da28: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645676));
  fn2_1b8fd4(c);
  /* 9da2c: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 9da30: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 9da34: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 9da38: bl #0x1d85d0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645692));
  fn2_1d85d0(c);
  /* 9da3c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 9da40: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645700));
  fn2_1d2d24(c);
  /* 9da44: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 9da48: cbz x0, #0x9da6c */
  if ((ARC_X_R(c, 0)) == 0) goto L_9da6c;
  /* 9da4c: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645712));
  fn2_225abc(c);
  /* 9da50: tbz w0, #0, #0x9da6c */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_9da6c;
  /* 9da54: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 9da58: ldur x8, [x29, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 9da5c: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* 9da60: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 9da64: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 9da68: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645740));
  arc_dispatch(c, ARC_X_R(c, 9));
L_9da6c:;
  /* 9da6c: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 9da70: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 9da74: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 9da78: ldp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 9da7c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9da80: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 9da84: ret  */
  return;
}

void fn2_a0684(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076512900));
  /* a0684: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* a0688: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a068c: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* a0690: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a0694: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a0698: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* a069c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* a06a0: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* a06a4: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* a06a8: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* a06ac: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* a06b0: stur xzr, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 31));
  /* a06b4: bl #0xaec88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(657080));
  fn2_aec88(c);
  /* a06b8: ldur x23, [x29, #-8] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* a06bc: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* a06c0: bl #0x2258f4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(657092));
  fn2_2258f4(c);
  /* a06c4: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* a06c8: ldr x0, [x23, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 23) + INT64_C(24))));
  /* a06cc: tbz w8, #0, #0xa06ec */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_a06ec;
  /* a06d0: cmp x0, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 23));
  /* a06d4: b.eq #0xa0728 */
  if (ARC_COND(c, 0)) goto L_a0728;
  /* a06d8: mov x24, x23 */
  ARC_X_W(c, 24, ARC_X_R(c, 23));
  /* a06dc: cbnz x0, #0xa06f4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_a06f4;
  /* a06e0: str x23, [x23, #0x18] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(24)), ARC_X_R(c, 23));
  /* a06e4: mov x24, x23 */
  ARC_X_W(c, 24, ARC_X_R(c, 23));
  /* a06e8: b #0xa071c */
  goto L_a071c;
L_a06ec:;
  /* a06ec: cbz x0, #0xa0748 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a0748;
  /* a06f0: mov x24, xzr */
  ARC_X_W(c, 24, ARC_X_R(c, 31));
L_a06f4:;
  /* a06f4: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(657144));
  fn2_225abc(c);
  /* a06f8: tbz w0, #0, #0xa0714 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_a0714;
  /* a06fc: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* a0700: ldr x8, [x23, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 23) + INT64_C(24))));
  /* a0704: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* a0708: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* a070c: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* a0710: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(657172));
  arc_dispatch(c, ARC_X_R(c, 9));
L_a0714:;
  /* a0714: str x24, [x23, #0x18] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(24)), ARC_X_R(c, 24));
  /* a0718: cbz x24, #0xa0748 */
  if ((ARC_X_R(c, 24)) == 0) goto L_a0748;
L_a071c:;
  /* a071c: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* a0720: bl #0x2259d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(657188));
  fn2_2259d8(c);
  /* a0724: mov x23, x24 */
  ARC_X_W(c, 23, ARC_X_R(c, 24));
L_a0728:;
  /* a0728: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* a072c: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(657200));
  fn2_225abc(c);
  /* a0730: tbz w0, #0, #0xa0748 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_a0748;
  /* a0734: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* a0738: ldr x8, [x8, #0xfb0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4016))));
  /* a073c: ldr x0, [x23, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 23) + INT64_C(16))));
  /* a0740: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* a0744: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(657224));
  arc_dispatch(c, ARC_X_R(c, 8));
L_a0748:;
  /* a0748: ldur x1, [x29, #-8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* a074c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* a0750: bl #0x9c4d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(657236));
  fn2_9c4d8(c);
  /* a0754: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* a0758: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* a075c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* a0760: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* a0764: bl #0xa07e0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(657256));
  fn2_a07e0(c);
  /* a0768: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* a076c: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(657264));
  fn2_1d79fc(c);
  /* a0770: ldur x20, [x29, #-8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* a0774: adrp x1, #0x2b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(176128)));
  /* a0778: add x1, x1, #0x419 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1049)));
  /* a077c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* a0780: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* a0784: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(657288));
  fn2_1b8fd4(c);
  /* a0788: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* a078c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a0790: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* a0794: bl #0x1d85d0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(657304));
  fn2_1d85d0(c);
  /* a0798: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* a079c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(657312));
  fn2_1d2d24(c);
  /* a07a0: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* a07a4: cbz x0, #0xa07c8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a07c8;
  /* a07a8: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(657324));
  fn2_225abc(c);
  /* a07ac: tbz w0, #0, #0xa07c8 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_a07c8;
  /* a07b0: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* a07b4: ldur x8, [x29, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* a07b8: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* a07bc: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* a07c0: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* a07c4: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(657352));
  arc_dispatch(c, ARC_X_R(c, 9));
L_a07c8:;
  /* a07c8: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a07cc: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a07d0: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* a07d4: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a07d8: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* a07dc: ret  */
  return;
}

void fn2_a793c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076542268));
  /* a793c: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* a7940: cbz x0, #0xa7974 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a7974;
  /* a7944: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a7948: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a794c: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* a7950: ldr x8, [x8, #0xff8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4088))));
  /* a7954: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* a7958: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(686428));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* a795c: cbz x0, #0xa796c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a796c;
  /* a7960: bl #0x1b62dc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(686436));
  fn2_1b62dc(c);
  /* a7964: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* a7968: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
L_a796c:;
  /* a796c: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a7970: ret  */
  return;
L_a7974:;
  /* a7974: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* a7978: ret  */
  return;
}

void fn2_a8b08(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076546824));
  /* a8b08: adrp x0, #0xa8000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(688128)));
  /* a8b0c: add x0, x0, #0xb60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2912)));
  /* a8b10: ret  */
  return;
}

void fn2_a9adc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076550876));
  /* a9adc: lsr x8, x0, #0x20 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(32)) & 63)));
  /* a9ae0: eor w0, w8, w0 */
  ARC_W_W(c, 0, (ARC_W_R(c, 8) ^ ARC_W_R(c, 0)));
  /* a9ae4: ret  */
  return;
}

void fn2_aa300(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076552960));
  /* aa300: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* aa304: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* aa308: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* aa30c: adrp x8, #0x24f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2420736)));
  /* aa310: add x8, x8, #0xf00 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3840)));
  /* aa314: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* aa318: str x8, [x0], #0x18 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(24));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* aa31c: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(697120));
  fn2_1d79fc(c);
  /* aa320: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* aa324: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* aa328: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* aa32c: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_aadc4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076555716));
  /* aadc4: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* aadc8: add x8, x8, #0x68 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(104)));
  /* aadcc: str x8, [x0], #0x18 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(24));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* aadd0: b #0x1d79fc */
  fn2_1d79fc(c); return;
}

void fn2_abc18(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076559384));
  /* abc18: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* abc1c: ret  */
  return;
}

void fn2_ac79c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076562332));
  /* ac79c: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* ac7a0: cset w0, lo */
  ARC_W_W(c, 0, (ARC_COND(c, 3) ? 1 : 0));
  /* ac7a4: ret  */
  return;
}

void fn2_ad2ac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076565164));
  /* ad2ac: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* ad2b0: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* ad2b4: ret  */
  return;
}

void fn2_ade78(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076568184));
  /* ade78: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ade7c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ade80: adrp x8, #0x25c000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2473984)));
  /* ade84: add x8, x8, #0xcf8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3320)));
  /* ade88: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* ade8c: tbnz w8, #0, #0xadebc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_adebc;
  /* ade90: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* ade94: add x0, x0, #0xcf8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3320)));
  /* ade98: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(712348));
  fn2_24b710(c);
  /* ade9c: cbz w0, #0xadebc */
  if ((ARC_W_R(c, 0)) == 0) goto L_adebc;
  /* adea0: nop  */
  /* nop: no architectural effect here */
  /* adea4: adr x0, #0xb00b0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(721072)));
  /* adea8: bl #0x1aff64 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(712364));
  fn2_1aff64(c);
  /* adeac: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* adeb0: add x0, x0, #0xcf8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3320)));
  /* adeb4: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* adeb8: b #0x24b720 */
  fn2_24b720(c); return;
L_adebc:;
  /* adebc: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* adec0: ret  */
  return;
}

void fn2_ae970(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076570992));
  /* ae970: add x1, x0, #0x44 */
  ARC_X_W(c, 1, (ARC_X_R(c, 0) + UINT64_C(68)));
  /* ae974: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* ae978: b #0x1d9754 */
  fn2_1d9754(c); return;
}

void fn2_af094(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076572820));
  /* af094: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* af098: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* af09c: str x23, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 23));
  /* af0a0: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* af0a4: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* af0a8: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* af0ac: add x2, x29, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* af0b0: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* af0b4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* af0b8: str wzr, [x29, #0x18] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(24)), ARC_W_R(c, 31));
  /* af0bc: bl #0xaf3a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(716992));
  fn2_af3a4(c);
  /* af0c0: tbz w0, #0, #0xaf0d0 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_af0d0;
  /* af0c4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* af0c8: ldr w9, [x29, #0x18] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 29) + INT64_C(24))));
  /* af0cc: b #0xaf140 */
  goto L_af140;
L_af0d0:;
  /* af0d0: ldr w8, [x19, #0x28] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(40))));
  /* af0d4: nop  */
  /* nop: no architectural effect here */
  /* af0d8: adr x22, #0x3668c */
  ARC_X_W(c, 22, (arc_image_bases[2] + UINT64_C(222860)));
  /* af0dc: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* af0e0: ldr w20, [x22, x8, lsl #2] */
  ARC_W_W(c, 20, arc_ld32((ARC_X_R(c, 22) + ((uint64_t)(ARC_X_R(c, 8)) << 2))));
  /* af0e4: cbz x9, #0xaf320 */
  if ((ARC_X_R(c, 9)) == 0) goto L_af320;
L_af0e8:;
  /* af0e8: add x2, x29, #0x1c */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) + UINT64_C(28)));
  /* af0ec: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* af0f0: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* af0f4: str wzr, [x29, #0x1c] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(28)), ARC_W_R(c, 31));
  /* af0f8: bl #0xaf3a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(717052));
  fn2_af3a4(c);
  /* af0fc: tbz w0, #0, #0xaf148 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_af148;
  /* af100: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* af104: ldr w9, [x29, #0x1c] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 29) + INT64_C(28))));
  /* af108: ldr x20, [x8, x9, lsl #3] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* af10c: ldr x0, [x20, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* af110: cbz x0, #0xaf304 */
  if ((ARC_X_R(c, 0)) == 0) goto L_af304;
  /* af114: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(717080));
  fn2_225abc(c);
  /* af118: tbz w0, #0, #0xaf134 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_af134;
  /* af11c: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* af120: ldr x8, [x20, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* af124: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* af128: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* af12c: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* af130: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(717108));
  arc_dispatch(c, ARC_X_R(c, 9));
L_af134:;
  /* af134: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* af138: ldr w9, [x29, #0x1c] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 29) + INT64_C(28))));
  /* af13c: str xzr, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 31));
L_af140:;
  /* af140: ldr x20, [x8, x9, lsl #3] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* af144: b #0xaf304 */
  goto L_af304;
L_af148:;
  /* af148: ucvtf s0, w20 */
  arc_s_w(c, 0, (float)(((uint32_t)(ARC_W_R(c, 20)))));
  /* af14c: ldr w8, [x19, #0x2c] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(44))));
  /* af150: fmov s1, #0.75000000 */
  arc_s_w(c, 1, (float)(0.75));
  /* af154: add w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* af158: ucvtf s2, w8 */
  arc_s_w(c, 2, (float)(((uint32_t)(ARC_W_R(c, 8)))));
  /* af15c: fmul s0, s0, s1 */
  arc_s_w(c, 0, (float)(arc_fmul32(ARC_S_R(c, 0), ARC_S_R(c, 1))));
  /* af160: fcmp s0, s2 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 2)));
  /* af164: b.pl #0xaf180 */
  if (ARC_COND(c, 5)) goto L_af180;
  /* af168: ldr w8, [x19, #0x28] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(40))));
  /* af16c: add w1, w8, #1 */
  ARC_W_W(c, 1, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* af170: cmp w1, #0x1d */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(29));
  /* af174: b.eq #0xaf36c */
  if (ARC_COND(c, 0)) goto L_af36c;
  /* af178: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* af17c: bl #0xaf4c8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(717184));
  fn2_af4c8(c);
L_af180:;
  /* af180: mov x23, sp */
  ARC_X_W(c, 23, (c)->sp);
  /* af184: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* af188: stp xzr, xzr, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* af18c: add x0, x23, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + UINT64_C(16)));
  /* af190: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(717204));
  fn2_1d2c40(c);
  /* af194: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* af198: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* af19c: mov w0, #0x20 */
  ARC_W_W(c, 0, UINT64_C(32));
  /* af1a0: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* af1a4: str xzr, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 31));
  /* af1a8: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(717228));
  fn2_1b5d1c(c);
  /* af1ac: ldr q0, [sp] */
  arc_q_w(c, 0, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* af1b0: add x1, x23, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(16)));
  /* af1b4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* af1b8: str q0, [x0], #0x10 */
  arc_st64(ARC_X_R(c, 0), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 0) + 8, (c)->q[0].u64[1]);
  ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
  /* af1bc: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(717248));
  fn2_1d2c40(c);
  /* af1c0: str xzr, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 31));
  /* af1c4: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* af1c8: cbz x0, #0xaf1fc */
  if ((ARC_X_R(c, 0)) == 0) goto L_af1fc;
  /* af1cc: str x0, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 0));
  /* af1d0: bl #0x2259d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(717268));
  fn2_2259d8(c);
  /* af1d4: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* af1d8: cbz x0, #0xaf1fc */
  if ((ARC_X_R(c, 0)) == 0) goto L_af1fc;
  /* af1dc: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(717280));
  fn2_225abc(c);
  /* af1e0: tbz w0, #0, #0xaf1fc */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_af1fc;
  /* af1e4: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* af1e8: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* af1ec: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* af1f0: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* af1f4: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* af1f8: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(717308));
  arc_dispatch(c, ARC_X_R(c, 9));
L_af1fc:;
  /* af1fc: add x0, x23, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + UINT64_C(16)));
  /* af200: str xzr, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 31));
  /* af204: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(717320));
  fn2_1d2d24(c);
  /* af208: ldr x8, [x19, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* af20c: cbz x8, #0xaf2cc */
  if ((ARC_X_R(c, 8)) == 0) goto L_af2cc;
  /* af210: str x20, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* af214: str x8, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 8));
  /* af218: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* af21c: str x20, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 20));
  /* af220: bl #0x1d4e80 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(717348));
  fn2_1d4e80(c);
  /* af224: cbz w0, #0xaf2dc */
  if ((ARC_W_R(c, 0)) == 0) goto L_af2dc;
L_af228:;
  /* af228: and x8, x0, #0xffffffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) & UINT64_C(4294967295)));
L_af22c:;
  /* af22c: ldr w9, [x19, #0x28] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 19) + INT64_C(40))));
  /* af230: nop  */
  /* nop: no architectural effect here */
  /* af234: adr x10, #0x36700 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(222976)));
  /* af238: ldr x10, [x10, x9, lsl #3] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* af23c: ldr w11, [x22, x9, lsl #2] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 22) + ((uint64_t)(ARC_X_R(c, 9)) << 2))));
  /* af240: mul x12, x10, x8 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 8))));
  /* af244: umulh x9, x12, x11 */
  ARC_X_W(c, 9, arc_umulh(ARC_X_R(c, 12), ARC_X_R(c, 11)));
  /* af248: ldr x12, [x19, #0x10] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* af24c: add x16, x12, x9, lsl #2 */
  ARC_X_W(c, 16, (ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 9)) << 2)));
  /* af250: ldr w15, [x16] */
  ARC_W_W(c, 15, arc_ld32(ARC_X_R(c, 16)));
  /* af254: cbz w15, #0xaf2e4 */
  if ((ARC_W_R(c, 15)) == 0) goto L_af2e4;
  /* af258: mov w17, wzr */
  ARC_W_W(c, 17, ARC_W_R(c, 31));
  /* af25c: mov w13, w11 */
  ARC_W_W(c, 13, ARC_W_R(c, 11));
  /* af260: mov x14, x20 */
  ARC_X_W(c, 14, ARC_X_R(c, 20));
  /* af264: b #0xaf2a4 */
  goto L_af2a4;
L_af268:;
  /* af268: ldr x12, [x19, #8] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* af26c: lsl x17, x9, #3 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(3)) & 63)));
  /* af270: str w8, [x16] */
  arc_st32(ARC_X_R(c, 16), ARC_W_R(c, 8));
  /* af274: mov x8, x15 */
  ARC_X_W(c, 8, ARC_X_R(c, 15));
  /* af278: ldr x1, [x12, x17] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 12) + ARC_X_R(c, 17))));
  /* af27c: str x14, [x12, x17] */
  arc_st64((ARC_X_R(c, 12) + ARC_X_R(c, 17)), ARC_X_R(c, 14));
  /* af280: ldr x12, [x19, #0x10] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* af284: mov x14, x1 */
  ARC_X_W(c, 14, ARC_X_R(c, 1));
L_af288:;
  /* af288: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* af28c: add w17, w0, #1 */
  ARC_W_W(c, 17, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* af290: mul x9, x10, x9 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 9))));
  /* af294: umulh x9, x9, x13 */
  ARC_X_W(c, 9, arc_umulh(ARC_X_R(c, 9), ARC_X_R(c, 13)));
  /* af298: add x16, x12, x9, lsl #2 */
  ARC_X_W(c, 16, (ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 9)) << 2)));
  /* af29c: ldr w15, [x16] */
  ARC_W_W(c, 15, arc_ld32(ARC_X_R(c, 16)));
  /* af2a0: cbz w15, #0xaf2e8 */
  if ((ARC_W_R(c, 15)) == 0) goto L_af2e8;
L_af2a4:;
  /* af2a4: mul x0, x10, x15 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 15))));
  /* af2a8: add w1, w9, w11 */
  ARC_W_W(c, 1, (ARC_W_R(c, 9) + ARC_W_R(c, 11)));
  /* af2ac: umulh x0, x0, x13 */
  ARC_X_W(c, 0, arc_umulh(ARC_X_R(c, 0), ARC_X_R(c, 13)));
  /* af2b0: sub w0, w1, w0 */
  ARC_W_W(c, 0, (ARC_W_R(c, 1) - ARC_W_R(c, 0)));
  /* af2b4: mul x0, x10, x0 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 0))));
  /* af2b8: umulh x0, x0, x13 */
  ARC_X_W(c, 0, arc_umulh(ARC_X_R(c, 0), ARC_X_R(c, 13)));
  /* af2bc: cmp w17, w0 */
  (void)arc_sub32(c, ARC_W_R(c, 17), ARC_W_R(c, 0));
  /* af2c0: b.hi #0xaf268 */
  if (ARC_COND(c, 8)) goto L_af268;
  /* af2c4: mov w0, w17 */
  ARC_W_W(c, 0, ARC_W_R(c, 17));
  /* af2c8: b #0xaf288 */
  goto L_af288;
L_af2cc:;
  /* af2cc: stp x20, x20, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* af2d0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* af2d4: bl #0x1d4e80 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(717528));
  fn2_1d4e80(c);
  /* af2d8: cbnz w0, #0xaf228 */
  if ((ARC_W_R(c, 0)) != 0) goto L_af228;
L_af2dc:;
  /* af2dc: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* af2e0: b #0xaf22c */
  goto L_af22c;
L_af2e4:;
  /* af2e4: mov x14, x20 */
  ARC_X_W(c, 14, ARC_X_R(c, 20));
L_af2e8:;
  /* af2e8: ldr x10, [x19, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* af2ec: str x14, [x10, x9, lsl #3] */
  arc_st64((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 9)) << 3)), ARC_X_R(c, 14));
  /* af2f0: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* af2f4: str w8, [x10, x9, lsl #2] */
  arc_st32((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 9)) << 2)), ARC_W_R(c, 8));
  /* af2f8: ldr w8, [x19, #0x2c] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(44))));
  /* af2fc: add w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* af300: str w8, [x19, #0x2c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(44)), ARC_W_R(c, 8));
L_af304:;
  /* af304: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* af308: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* af30c: ldr x23, [sp, #0x30] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(48))));
  /* af310: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* af314: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* af318: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* af31c: ret  */
  return;
L_af320:;
  /* af320: lsl x0, x20, #2 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 20)) << ((UINT64_C(2)) & 63)));
  /* af324: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* af328: bl #0x1b5b60 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(717612));
  fn2_1b5b60(c);
  /* af32c: lsl x8, x20, #3 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 20)) << ((UINT64_C(3)) & 63)));
  /* af330: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* af334: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* af338: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* af33c: bl #0x1b5b60 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(717632));
  fn2_1b5b60(c);
  /* af340: cmp w20, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 20), UINT64_C(1));
  /* af344: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* af348: str x0, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 0));
  /* af34c: csinc w9, w20, wzr, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 20)) : ((ARC_W_R(c, 31)) + 1)));
L_af350:;
  /* af350: ldp x11, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* af354: str wzr, [x10, x8, lsl #2] */
  arc_st32((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 8)) << 2)), ARC_W_R(c, 31));
  /* af358: str xzr, [x11, x8, lsl #3] */
  arc_st64((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 8)) << 3)), ARC_X_R(c, 31));
  /* af35c: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* af360: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* af364: b.ne #0xaf350 */
  if (ARC_COND(c, 1)) goto L_af350;
  /* af368: b #0xaf0e8 */
  goto L_af0e8;
L_af36c:;
  /* af36c: adrp x0, #0x2a000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(172032)));
  /* af370: add x0, x0, #0x96d */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2413)));
  /* af374: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* af378: add x1, x1, #0x166 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(358)));
  /* af37c: adrp x3, #0x21000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(135168)));
  /* af380: add x3, x3, #0x67b */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(1659)));
  /* af384: adrp x4, #0x26000 */
  ARC_X_W(c, 4, (arc_image_bases[2] + UINT64_C(155648)));
  /* af388: add x4, x4, #0xf63 */
  ARC_X_W(c, 4, (ARC_X_R(c, 4) + UINT64_C(3939)));
  /* af38c: mov w2, #0xdd */
  ARC_W_W(c, 2, UINT64_C(221));
  /* af390: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* af394: mov w6, wzr */
  ARC_W_W(c, 6, ARC_W_R(c, 31));
  /* af398: bl #0x1b5598 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(717724));
  fn2_1b5598(c);
  /* af39c: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* af3a0: b #0xaf304 */
  goto L_af304;
}

void fn2_aff04(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076576516));
  /* aff04: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* aff08: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* aff0c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* aff10: adrp x8, #0x25c000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2473984)));
  /* aff14: add x8, x8, #0xda0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3488)));
  /* aff18: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* aff1c: tbz w8, #0, #0xaff3c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_aff3c;
L_aff20:;
  /* aff20: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* aff24: add x0, x0, #0xd98 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3480)));
  /* aff28: adrp x1, #0x250000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2424832)));
  /* aff2c: add x1, x1, #0x750 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1872)));
  /* aff30: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* aff34: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* aff38: b #0x1b00bc */
  fn2_1b00bc(c); return;
L_aff3c:;
  /* aff3c: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* aff40: add x0, x0, #0xda0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3488)));
  /* aff44: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(720712));
  fn2_24b710(c);
  /* aff48: cbz w0, #0xaff20 */
  if ((ARC_W_R(c, 0)) == 0) goto L_aff20;
  /* aff4c: adrp x19, #0x25c000 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2473984)));
  /* aff50: add x19, x19, #0xd98 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + UINT64_C(3480)));
  /* aff54: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* aff58: add x1, x1, #0x63 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(99)));
  /* aff5c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* aff60: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* aff64: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(720744));
  fn2_1b8fd4(c);
  /* aff68: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* aff6c: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* aff70: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* aff74: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* aff78: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* aff7c: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(720768));
  fn2_24b6f0(c);
  /* aff80: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* aff84: add x0, x0, #0xda0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3488)));
  /* aff88: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(720780));
  fn2_24b720(c);
  /* aff8c: b #0xaff20 */
  goto L_aff20;
}

void fn2_b0988(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076579208));
  /* b0988: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* b098c: ret  */
  return;
}

void fn2_b16ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076582636));
  /* b16ec: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b16f0: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* b16f4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b16f8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* b16fc: bl #0x1b6040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(726784));
  fn2_1b6040(c);
  /* b1700: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b1704: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* b1708: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b170c: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_b2788(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076586888));
  /* b2788: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b278c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b2790: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b2794: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b2798: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* b279c: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* b27a0: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* b27a4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b27a8: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* b27ac: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* b27b0: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(731060));
  fn2_1b5d1c(c);
  /* b27b4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* b27b8: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* b27bc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* b27c0: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* b27c4: str w9, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* b27c8: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* b27cc: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* b27d0: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(731092));
  fn2_1d2c2c(c);
  /* b27d4: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* b27d8: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(731100));
  fn2_1d2c2c(c);
  /* b27dc: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* b27e0: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* b27e4: add x8, x8, #0xca0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3232)));
  /* b27e8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b27ec: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* b27f0: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* b27f4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* b27f8: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b27fc: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* b2800: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* b2804: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* b2808: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* b280c: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(731152));
  fn2_1b5e68(c);
  /* b2810: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b2814: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* b2818: str wzr, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 31));
  /* b281c: bl #0x1b5d9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(731168));
  fn2_1b5d9c(c);
  /* b2820: adrp x8, #0x25c000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2473984)));
  /* b2824: add x8, x8, #0xdb0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3504)));
  /* b2828: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* b282c: tbz w8, #0, #0xb2868 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_b2868;
L_b2830:;
  /* b2830: adrp x1, #0x25c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2473984)));
  /* b2834: add x1, x1, #0xda8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3496)));
  /* b2838: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* b283c: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(731200));
  fn2_1d2c40(c);
  /* b2840: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* b2844: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* b2848: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(731212));
  fn2_1d5dc0(c);
  /* b284c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* b2850: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(731220));
  fn2_1d2d24(c);
  /* b2854: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b2858: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b285c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b2860: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b2864: ret  */
  return;
L_b2868:;
  /* b2868: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* b286c: add x0, x0, #0xdb0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3504)));
  /* b2870: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(731252));
  fn2_24b710(c);
  /* b2874: cbz w0, #0xb2830 */
  if ((ARC_W_R(c, 0)) == 0) goto L_b2830;
  /* b2878: adrp x20, #0x25c000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2473984)));
  /* b287c: add x20, x20, #0xda8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(3496)));
  /* b2880: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* b2884: add x1, x1, #0x51c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1308)));
  /* b2888: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b288c: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(731280));
  fn2_1b907c(c);
  /* b2890: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* b2894: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* b2898: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* b289c: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* b28a0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* b28a4: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(731304));
  fn2_24b6f0(c);
  /* b28a8: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* b28ac: add x0, x0, #0xdb0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3504)));
  /* b28b0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(731316));
  fn2_24b720(c);
  /* b28b4: b #0xb2830 */
  goto L_b2830;
}

void fn2_b3a7c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076591740));
  /* b3a7c: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b3a80: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* b3a84: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b3a88: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b3a8c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b3a90: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* b3a94: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* b3a98: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* b3a9c: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* b3aa0: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* b3aa4: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* b3aa8: mov x24, x8 */
  ARC_X_W(c, 24, ARC_X_R(c, 8));
  /* b3aac: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(735920));
  fn2_1bc084(c);
  /* b3ab0: ldp x1, x2, [x23, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(96));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* b3ab4: add x7, x23, #0x48 */
  ARC_X_W(c, 7, (ARC_X_R(c, 23) + UINT64_C(72)));
  /* b3ab8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* b3abc: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* b3ac0: mov w4, w20 */
  ARC_W_W(c, 4, ARC_W_R(c, 20));
  /* b3ac4: mov x5, x24 */
  ARC_X_W(c, 5, ARC_X_R(c, 24));
  /* b3ac8: mov x6, x19 */
  ARC_X_W(c, 6, ARC_X_R(c, 19));
  /* b3acc: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b3ad0: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* b3ad4: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* b3ad8: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b3adc: b #0xb3b7c */
  fn2_b3b7c(c); return;
}

void fn2_b4f8c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076597132));
  /* b4f8c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b4f90: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* b4f94: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b4f98: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* b4f9c: bl #0x1b6040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(741280));
  fn2_1b6040(c);
  /* b4fa0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b4fa4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* b4fa8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b4fac: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_b61b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076601784));
  /* b61b8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b61bc: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* b61c0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b61c4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* b61c8: bl #0x1b6040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(745932));
  fn2_1b6040(c);
  /* b61cc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b61d0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* b61d4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b61d8: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_b71bc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076605884));
  /* b71bc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b71c0: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* b71c4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b71c8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* b71cc: bl #0x1b6040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(750032));
  fn2_1b6040(c);
  /* b71d0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b71d4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* b71d8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b71dc: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_b82fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076610300));
  /* b82fc: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* b8300: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b8304: str x19, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 19));
  /* b8308: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* b830c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* b8310: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* b8314: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(754456));
  fn2_1db4a4(c);
  /* b8318: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* b831c: add x1, x1, #0xba0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2976)));
  /* b8320: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* b8324: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(754472));
  fn2_1b7d24(c);
  /* b8328: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b832c: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* b8330: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(754484));
  fn2_1bc2f8(c);
  /* b8334: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* b8338: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(754492));
  fn2_1ccd9c(c);
  /* b833c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* b8340: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b8344: bl #0x1db920 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(754504));
  fn2_1db920(c);
  /* b8348: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b834c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(754512));
  fn2_1bc620(c);
  /* b8350: adrp x1, #0x1d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(118784)));
  /* b8354: add x1, x1, #0x40c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1036)));
  /* b8358: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* b835c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(754528));
  fn2_1b7d24(c);
  /* b8360: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b8364: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* b8368: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(754540));
  fn2_1bc2f8(c);
  /* b836c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* b8370: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(754548));
  fn2_1ccd9c(c);
  /* b8374: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* b8378: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b837c: bl #0x1db920 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(754560));
  fn2_1db920(c);
  /* b8380: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b8384: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(754568));
  fn2_1bc620(c);
  /* b8388: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* b838c: add x1, x1, #0xf9e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3998)));
  /* b8390: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* b8394: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(754584));
  fn2_1b7d24(c);
  /* b8398: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b839c: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* b83a0: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(754596));
  fn2_1bc2f8(c);
  /* b83a4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* b83a8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(754604));
  fn2_1ccd9c(c);
  /* b83ac: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* b83b0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b83b4: bl #0x1db920 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(754616));
  fn2_1db920(c);
  /* b83b8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b83bc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(754624));
  fn2_1bc620(c);
  /* b83c0: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b83c4: ldr x19, [sp, #0x30] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(48))));
  /* b83c8: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* b83cc: ret  */
  return;
}

void fn2_bcbe4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076628964));
  /* bcbe4: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* bcbe8: ret  */
  return;
}

void fn2_bd374(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076630900));
  /* bd374: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* bd378: cset w0, lo */
  ARC_W_W(c, 0, (ARC_COND(c, 3) ? 1 : 0));
  /* bd37c: ret  */
  return;
}

void fn2_bdc74(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076633204));
  /* bdc74: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* bdc78: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* bdc7c: ret  */
  return;
}

void fn2_bedc4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076637636));
  /* bedc4: sub sp, sp, #0xf0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(240)));
  /* bedc8: stp x29, x30, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bedcc: stp x26, x25, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* bedd0: stp x24, x23, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* bedd4: stp x22, x21, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* bedd8: stp x20, x19, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* beddc: add x29, sp, #0xa0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(160)));
  /* bede0: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* bede4: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* bede8: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* bedec: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* bedf0: mov x19, x6 */
  ARC_X_W(c, 19, ARC_X_R(c, 6));
  /* bedf4: mov x20, x5 */
  ARC_X_W(c, 20, ARC_X_R(c, 5));
  /* bedf8: mov w21, w4 */
  ARC_W_W(c, 21, ARC_W_R(c, 4));
  /* bedfc: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* bee00: add x26, sp, #0x28 */
  ARC_X_W(c, 26, ((c)->sp + UINT64_C(40)));
  /* bee04: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(781832));
  fn2_1bc0b8(c);
  /* bee08: add x25, x26, #0x18 */
  ARC_X_W(c, 25, (ARC_X_R(c, 26) + UINT64_C(24)));
  /* bee0c: mov w1, w21 */
  ARC_W_W(c, 1, ARC_W_R(c, 21));
  /* bee10: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* bee14: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(781848));
  fn2_1bc25c(c);
  /* bee18: add x21, x26, #0x30 */
  ARC_X_W(c, 21, (ARC_X_R(c, 26) + UINT64_C(48)));
  /* bee1c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* bee20: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* bee24: bl #0x1bc558 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(781864));
  fn2_1bc558(c);
  /* bee28: add x20, x26, #0x48 */
  ARC_X_W(c, 20, (ARC_X_R(c, 26) + UINT64_C(72)));
  /* bee2c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bee30: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* bee34: bl #0x1bc5bc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(781880));
  fn2_1bc5bc(c);
  /* bee38: add x0, x26, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 26) + UINT64_C(96)));
  /* bee3c: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(781888));
  fn2_1bc084(c);
  /* bee40: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* bee44: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* bee48: stp x26, x25, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* bee4c: stp x21, x20, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* bee50: bl #0xc1480 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(781908));
  fn2_c1480(c);
  /* bee54: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* bee58: mov x3, sp */
  ARC_X_W(c, 3, (c)->sp);
  /* bee5c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* bee60: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* bee64: mov w4, #4 */
  ARC_W_W(c, 4, UINT64_C(4));
  /* bee68: bl #0x1b0eac */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(781932));
  fn2_1b0eac(c);
  /* bee6c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* bee70: add x0, x26, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 26) + UINT64_C(96)));
  /* bee74: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(781944));
  fn2_1bc620(c);
  /* bee78: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* bee7c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(781952));
  fn2_1bc620(c);
  /* bee80: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* bee84: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(781960));
  fn2_1bc620(c);
  /* bee88: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* bee8c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(781968));
  fn2_1bc620(c);
  /* bee90: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* bee94: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(781976));
  fn2_1bc620(c);
  /* bee98: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* bee9c: ldp x20, x19, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* beea0: ldp x22, x21, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* beea4: ldp x24, x23, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* beea8: ldp x26, x25, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* beeac: ldp x29, x30, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* beeb0: add sp, sp, #0xf0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(240)));
  /* beeb4: ret  */
  return;
}

void fn2_bf8f4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076640500));
  /* bf8f4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bf8f8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* bf8fc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bf900: adrp x8, #0x25c000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2473984)));
  /* bf904: add x8, x8, #0xfb8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4024)));
  /* bf908: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* bf90c: tbz w8, #0, #0xbf92c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_bf92c;
L_bf910:;
  /* bf910: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* bf914: add x0, x0, #0xfb0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(4016)));
  /* bf918: adrp x1, #0x251000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2428928)));
  /* bf91c: add x1, x1, #0x610 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1552)));
  /* bf920: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* bf924: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bf928: b #0x1b00bc */
  fn2_1b00bc(c); return;
L_bf92c:;
  /* bf92c: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* bf930: add x0, x0, #0xfb8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(4024)));
  /* bf934: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(784696));
  fn2_24b710(c);
  /* bf938: cbz w0, #0xbf910 */
  if ((ARC_W_R(c, 0)) == 0) goto L_bf910;
  /* bf93c: adrp x19, #0x25c000 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2473984)));
  /* bf940: add x19, x19, #0xfb0 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + UINT64_C(4016)));
  /* bf944: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* bf948: add x1, x1, #0x97 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(151)));
  /* bf94c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* bf950: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* bf954: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(784728));
  fn2_1b8fd4(c);
  /* bf958: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* bf95c: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* bf960: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* bf964: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* bf968: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bf96c: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(784752));
  fn2_24b6f0(c);
  /* bf970: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* bf974: add x0, x0, #0xfb8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(4024)));
  /* bf978: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(784764));
  fn2_24b720(c);
  /* bf97c: b #0xbf910 */
  goto L_bf910;
}

void fn2_c02c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076643008));
  /* c02c0: b #0xc03a8 */
  fn2_c03a8(c); return;
}

void fn2_c0fa4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076646308));
  /* c0fa4: cmp w1, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(0));
  /* c0fa8: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* c0fac: cset w9, eq */
  ARC_W_W(c, 9, (ARC_COND(c, 0) ? 1 : 0));
  /* c0fb0: cmp w1, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(2));
  /* c0fb4: lsl w9, w9, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) << ((UINT64_C(1)) & 31)));
  /* c0fb8: csel w0, w9, w8, lo */
  ARC_W_W(c, 0, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* c0fbc: ret  */
  return;
}

void fn2_c2760(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076652384));
  /* c2760: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* c2764: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* c2768: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* c276c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* c2770: bl #0xc269c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(796532));
  fn2_c269c(c);
  /* c2774: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* c2778: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* c277c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* c2780: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_c6064(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076666980));
  /* c6064: lsr x8, x0, #0x20 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(32)) & 63)));
  /* c6068: eor w0, w8, w0 */
  ARC_W_W(c, 0, (ARC_W_R(c, 8) ^ ARC_W_R(c, 0)));
  /* c606c: ret  */
  return;
}

void fn2_c7340(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076671808));
  /* c7340: add x0, x0, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(32)));
  /* c7344: b #0x1dc718 */
  fn2_1dc718(c); return;
}

void fn2_c8344(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076675908));
  /* c8344: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* c8348: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* c834c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* c8350: ldp x8, x9, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* c8354: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* c8358: add x0, x1, x9, asr #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 1) + ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 1))));
  /* c835c: tbz w9, #0, #0xc8368 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_c8368;
  /* c8360: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* c8364: ldr x8, [x9, x8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + ARC_X_R(c, 8))));
L_c8368:;
  /* c8368: ldr x9, [x2] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 2)));
  /* c836c: ldr x1, [x9] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 9)));
  /* c8370: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(820084));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* c8374: and w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) & UINT64_C(1)));
  /* c8378: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* c837c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* c8380: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* c8384: ret  */
  return;
}

void fn2_c982c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076681260));
  /* c982c: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* c9830: ldr x8, [x8, #0xfa0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4000))));
  /* c9834: ldr x0, [x8] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 8)));
  /* c9838: cbz x0, #0xc9840 */
  if ((ARC_X_R(c, 0)) == 0) goto L_c9840;
  /* c983c: b #0x1a4c08 */
  fn2_1a4c08(c); return;
L_c9840:;
  /* c9840: ret  */
  return;
}

void fn2_cc6ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076693228));
  /* cc6ec: adrp x0, #0xcc000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(835584)));
  /* cc6f0: add x0, x0, #0x744 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1860)));
  /* cc6f4: ret  */
  return;
}

void fn2_cd6c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076697288));
  /* cd6c8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* cd6cc: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* cd6d0: add x1, x1, #0x37b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(891)));
  /* cd6d4: b #0x1b7d24 */
  fn2_1b7d24(c); return;
}

void fn2_cded4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076699348));
  /* cded4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* cded8: ret  */
  return;
}

void fn2_cf194(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076704148));
  /* cf194: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* cf198: ret  */
  return;
}

void fn2_d07a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076709792));
  /* d07a0: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* d07a4: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d07a8: str x21, [sp, #0x60] */
  arc_st64(((c)->sp + INT64_C(96)), ARC_X_R(c, 21));
  /* d07ac: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d07b0: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* d07b4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* d07b8: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* d07bc: bl #0xd0964 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(853952));
  fn2_d0964(c);
  /* d07c0: tbnz x0, #0x3f, #0xd08d4 */
  if (((ARC_X_R(c, 0)) >> 63 & 1) != 0) goto L_d08d4;
  /* d07c4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* d07c8: ldr x0, [x21, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + INT64_C(24))));
  /* d07cc: cbz x0, #0xd0834 */
  if ((ARC_X_R(c, 0)) == 0) goto L_d0834;
  /* d07d0: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* d07d4: ldr x8, [x8, #0xff8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4088))));
  /* d07d8: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* d07dc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(853984));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* d07e0: cbz x0, #0xd0834 */
  if ((ARC_X_R(c, 0)) == 0) goto L_d0834;
  /* d07e4: bl #0x1b62dc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(853992));
  fn2_1b62dc(c);
  /* d07e8: cbz x0, #0xd0834 */
  if ((ARC_X_R(c, 0)) == 0) goto L_d0834;
  /* d07ec: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* d07f0: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* d07f4: add x1, x1, #0x440 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1088)));
  /* d07f8: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* d07fc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* d0800: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(854020));
  fn2_1b8fd4(c);
  /* d0804: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* d0808: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* d080c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* d0810: bl #0x21fe38 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(854036));
  fn2_21fe38(c);
  /* d0814: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* d0818: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* d081c: bl #0x1bccc4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(854048));
  fn2_1bccc4(c);
  /* d0820: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* d0824: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(854056));
  fn2_1bc620(c);
  /* d0828: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* d082c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(854064));
  fn2_1d2d24(c);
  /* d0830: b #0xd083c */
  goto L_d083c;
L_d0834:;
  /* d0834: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* d0838: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(854076));
  fn2_1db4a4(c);
L_d083c:;
  /* d083c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* d0840: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* d0844: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(854088));
  fn2_1bbf48(c);
  /* d0848: sub x8, x29, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* d084c: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(854096));
  fn2_1bccb8(c);
  /* d0850: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* d0854: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(854104));
  fn2_1db788(c);
  /* d0858: adrp x1, #0x2a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(172032)));
  /* d085c: add x1, x1, #0x9cf */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2511)));
  /* d0860: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* d0864: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(854120));
  fn2_1b7d24(c);
  /* d0868: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* d086c: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* d0870: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(854132));
  fn2_1bc2f8(c);
  /* d0874: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* d0878: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(854140));
  fn2_1ccd9c(c);
  /* d087c: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* d0880: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* d0884: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* d0888: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(854156));
  fn2_1b7d24(c);
  /* d088c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* d0890: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* d0894: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(854168));
  fn2_1bc2f8(c);
  /* d0898: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* d089c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(854176));
  fn2_1ccd9c(c);
  /* d08a0: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* d08a4: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* d08a8: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* d08ac: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* d08b0: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(854196));
  fn2_1d9c5c(c);
  /* d08b4: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* d08b8: bl #0x1bcc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(854204));
  fn2_1bcc90(c);
  /* d08bc: cmp w0, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(4));
  /* d08c0: b.ne #0xd08f4 */
  if (ARC_COND(c, 1)) goto L_d08f4;
  /* d08c4: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* d08c8: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* d08cc: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(854224));
  fn2_1bc84c(c);
  /* d08d0: b #0xd0930 */
  goto L_d0930;
L_d08d4:;
  /* d08d4: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* d08d8: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* d08dc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d08e0: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d08e4: ldr x21, [sp, #0x60] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(96))));
  /* d08e8: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d08ec: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* d08f0: b #0x1b7d24 */
  fn2_1b7d24(c); return;
L_d08f4:;
  /* d08f4: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* d08f8: bl #0x1bcc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(854268));
  fn2_1bcc90(c);
  /* d08fc: cmp w0, #0x15 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(21));
  /* d0900: b.ne #0xd0928 */
  if (ARC_COND(c, 1)) goto L_d0928;
  /* d0904: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* d0908: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* d090c: bl #0x1bcb98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(854288));
  fn2_1bcb98(c);
  /* d0910: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* d0914: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d0918: bl #0x1cccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(854300));
  fn2_1cccb8(c);
  /* d091c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* d0920: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(854308));
  fn2_1d2d24(c);
  /* d0924: b #0xd0930 */
  goto L_d0930;
L_d0928:;
  /* d0928: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d092c: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(854320));
  fn2_1ccc74(c);
L_d0930:;
  /* d0930: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* d0934: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(854328));
  fn2_1bc620(c);
  /* d0938: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* d093c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(854336));
  fn2_1bc620(c);
  /* d0940: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* d0944: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(854344));
  fn2_1bc620(c);
  /* d0948: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* d094c: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(854352));
  fn2_1d97fc(c);
  /* d0950: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d0954: ldr x21, [sp, #0x60] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(96))));
  /* d0958: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d095c: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* d0960: ret  */
  return;
}

void fn2_d519c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076728732));
  /* d519c: sub sp, sp, #0x100 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(256)));
  /* d51a0: stp x29, x30, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d51a4: stp x24, x23, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* d51a8: stp x22, x21, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* d51ac: stp x20, x19, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d51b0: add x29, sp, #0xc0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(192)));
  /* d51b4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d51b8: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* d51bc: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* d51c0: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* d51c4: bl #0x1bcc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(872904));
  fn2_1bcc90(c);
  /* d51c8: cmp w0, #0x1b */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(27));
  /* d51cc: b.ne #0xd57dc */
  if (ARC_COND(c, 1)) goto L_d57dc;
  /* d51d0: sub x8, x29, #0x48 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d51d4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* d51d8: bl #0x24aa1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(872924));
  fn2_24aa1c(c);
  /* d51dc: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d51e0: bl #0x1dde90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(872932));
  fn2_1dde90(c);
  /* d51e4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* d51e8: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d51ec: bl #0x1dde08 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(872944));
  fn2_1dde08(c);
  /* d51f0: cmp x20, #0x708 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(1800));
  /* d51f4: b.gt #0xd57dc */
  if (ARC_COND(c, 12)) goto L_d57dc;
  /* d51f8: ldr x0, [x19, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* d51fc: cbz x0, #0xd57dc */
  if ((ARC_X_R(c, 0)) == 0) goto L_d57dc;
  /* d5200: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* d5204: ldr x8, [x8, #0xff8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4088))));
  /* d5208: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* d520c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(872976));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* d5210: cbz x0, #0xd57dc */
  if ((ARC_X_R(c, 0)) == 0) goto L_d57dc;
  /* d5214: bl #0x1b62dc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(872984));
  fn2_1b62dc(c);
  /* d5218: cbz x0, #0xd57dc */
  if ((ARC_X_R(c, 0)) == 0) goto L_d57dc;
  /* d521c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* d5220: add x8, sp, #0x58 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(88)));
  /* d5224: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* d5228: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873004));
  fn2_1bccb8(c);
  /* d522c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* d5230: bl #0xd50e0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873012));
  fn2_d50e0(c);
  /* d5234: cmp x21, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(2));
  /* d5238: mov w22, w0 */
  ARC_W_W(c, 22, ARC_W_R(c, 0));
  /* d523c: b.lt #0xd5340 */
  if (ARC_COND(c, 11)) goto L_d5340;
  /* d5240: tbz w22, #0, #0xd5340 */
  if (((ARC_W_R(c, 22)) >> 0 & 1) == 0) goto L_d5340;
  /* d5244: adrp x1, #0x34000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(212992)));
  /* d5248: add x1, x1, #0x30c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(780)));
  /* d524c: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* d5250: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* d5254: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873048));
  fn2_1b8fd4(c);
  /* d5258: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d525c: add x1, sp, #0x50 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(80)));
  /* d5260: sub x24, x29, #0x48 */
  ARC_X_W(c, 24, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d5264: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873064));
  fn2_1bc44c(c);
  /* d5268: add x23, x24, #0x18 */
  ARC_X_W(c, 23, (ARC_X_R(c, 24) + UINT64_C(24)));
  /* d526c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* d5270: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* d5274: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873080));
  fn2_1bc290(c);
  /* d5278: add x8, sp, #0x60 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(96)));
  /* d527c: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* d5280: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* d5284: mov w2, #2 */
  ARC_W_W(c, 2, UINT64_C(2));
  /* d5288: stp x24, x23, [sp, #0x38] */
  { const uint64_t _pa = ((c)->sp + INT64_C(56));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* d528c: bl #0x221308 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873104));
  fn2_221308(c);
  /* d5290: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* d5294: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873112));
  fn2_1bc620(c);
  /* d5298: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d529c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873120));
  fn2_1bc620(c);
  /* d52a0: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* d52a4: bl #0xd0db4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873128));
  fn2_d0db4(c);
  /* d52a8: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* d52ac: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* d52b0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873140));
  fn2_1bc620(c);
  /* d52b4: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* d52b8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873148));
  fn2_1d2d24(c);
  /* d52bc: tbnz x23, #0x3f, #0xd57d4 */
  if (((ARC_X_R(c, 23)) >> 63 & 1) != 0) goto L_d57d4;
  /* d52c0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d52c4: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* d52c8: bl #0xd0f94 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873164));
  fn2_d0f94(c);
  /* d52cc: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* d52d0: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* d52d4: add x1, x1, #0xf1f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3871)));
  /* d52d8: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d52dc: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873184));
  fn2_1b7d24(c);
  /* d52e0: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* d52e4: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d52e8: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873196));
  fn2_1bc2f8(c);
  /* d52ec: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d52f0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873204));
  fn2_1ccd9c(c);
  /* d52f4: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* d52f8: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* d52fc: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873216));
  fn2_1bc290(c);
  /* d5300: sub x8, x29, #0x48 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d5304: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* d5308: add x1, sp, #0x60 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(96)));
  /* d530c: add x2, sp, #0x38 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(56)));
  /* d5310: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873236));
  fn2_1d9c5c(c);
  /* d5314: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d5318: bl #0xd0db4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873244));
  fn2_d0db4(c);
  /* d531c: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* d5320: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d5324: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873256));
  fn2_1bc620(c);
  /* d5328: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* d532c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873264));
  fn2_1bc620(c);
  /* d5330: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* d5334: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873272));
  fn2_1bc620(c);
  /* d5338: cmp x23, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 24));
  /* d533c: b.ne #0xd57d4 */
  if (ARC_COND(c, 1)) goto L_d57d4;
L_d5340:;
  /* d5340: tbz w22, #0, #0xd544c */
  if (((ARC_W_R(c, 22)) >> 0 & 1) == 0) goto L_d544c;
  /* d5344: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* d5348: add x1, x1, #0xfdb */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(4059)));
  /* d534c: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d5350: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873300));
  fn2_1b7d24(c);
  /* d5354: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* d5358: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d535c: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873312));
  fn2_1bc2f8(c);
  /* d5360: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d5364: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873320));
  fn2_1ccd9c(c);
  /* d5368: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* d536c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* d5370: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873332));
  fn2_1bc290(c);
  /* d5374: sub x8, x29, #0x48 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d5378: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* d537c: add x1, sp, #0x60 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(96)));
  /* d5380: add x2, sp, #0x38 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(56)));
  /* d5384: sub x24, x29, #0x48 */
  ARC_X_W(c, 24, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d5388: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873356));
  fn2_1d9c5c(c);
  /* d538c: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d5390: bl #0xd0db4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873364));
  fn2_d0db4(c);
  /* d5394: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* d5398: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d539c: bl #0xd10dc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873376));
  fn2_d10dc(c);
  /* d53a0: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* d53a4: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d53a8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873388));
  fn2_1bc620(c);
  /* d53ac: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* d53b0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873396));
  fn2_1bc620(c);
  /* d53b4: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* d53b8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873404));
  fn2_1bc620(c);
  /* d53bc: cmp x22, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 23));
  /* d53c0: b.eq #0xd5454 */
  if (ARC_COND(c, 0)) goto L_d5454;
  /* d53c4: adrp x1, #0x28000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(163840)));
  /* d53c8: add x1, x1, #0x742 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1858)));
  /* d53cc: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* d53d0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* d53d4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873432));
  fn2_1b8fd4(c);
  /* d53d8: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d53dc: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* d53e0: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873444));
  fn2_1bc44c(c);
  /* d53e4: add x19, x24, #0x18 */
  ARC_X_W(c, 19, (ARC_X_R(c, 24) + UINT64_C(24)));
  /* d53e8: add x1, sp, #0x58 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(88)));
  /* d53ec: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d53f0: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873460));
  fn2_1bc530(c);
  /* d53f4: add x22, x24, #0x30 */
  ARC_X_W(c, 22, (ARC_X_R(c, 24) + UINT64_C(48)));
  /* d53f8: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* d53fc: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* d5400: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873476));
  fn2_1bc290(c);
  /* d5404: add x8, sp, #0x20 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(32)));
  /* d5408: add x1, sp, #0x60 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(96)));
  /* d540c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* d5410: mov w2, #3 */
  ARC_W_W(c, 2, UINT64_C(3));
  /* d5414: stp x24, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d5418: str x22, [sp, #0x70] */
  arc_st64(((c)->sp + INT64_C(112)), ARC_X_R(c, 22));
  /* d541c: bl #0x221308 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873504));
  fn2_221308(c);
  /* d5420: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* d5424: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873512));
  fn2_1bc620(c);
  /* d5428: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d542c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873520));
  fn2_1bc620(c);
  /* d5430: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d5434: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873528));
  fn2_1bc620(c);
  /* d5438: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* d543c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873536));
  fn2_1bc620(c);
  /* d5440: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* d5444: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873544));
  fn2_1d2d24(c);
  /* d5448: b #0xd57d4 */
  goto L_d57d4;
L_d544c:;
  /* d544c: cmp x21, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(1));
  /* d5450: b.ne #0xd57d4 */
  if (ARC_COND(c, 1)) goto L_d57d4;
L_d5454:;
  /* d5454: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* d5458: add x1, x1, #0xfdb */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(4059)));
  /* d545c: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d5460: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873572));
  fn2_1b7d24(c);
  /* d5464: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* d5468: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d546c: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873584));
  fn2_1bc2f8(c);
  /* d5470: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d5474: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873592));
  fn2_1ccd9c(c);
  /* d5478: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* d547c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* d5480: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873604));
  fn2_1bc290(c);
  /* d5484: sub x8, x29, #0x48 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d5488: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* d548c: add x1, sp, #0x60 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(96)));
  /* d5490: add x2, sp, #0x38 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(56)));
  /* d5494: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873624));
  fn2_1d9c5c(c);
  /* d5498: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d549c: bl #0xd0db4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873632));
  fn2_d0db4(c);
  /* d54a0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* d54a4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d54a8: bl #0xd10dc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873644));
  fn2_d10dc(c);
  /* d54ac: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* d54b0: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d54b4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873656));
  fn2_1bc620(c);
  /* d54b8: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* d54bc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873664));
  fn2_1bc620(c);
  /* d54c0: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* d54c4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873672));
  fn2_1bc620(c);
  /* d54c8: cmp x21, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 22));
  /* d54cc: b.ne #0xd57d4 */
  if (ARC_COND(c, 1)) goto L_d57d4;
  /* d54d0: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* d54d4: add x1, x1, #0xf1f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3871)));
  /* d54d8: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d54dc: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873696));
  fn2_1b7d24(c);
  /* d54e0: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* d54e4: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d54e8: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873708));
  fn2_1bc2f8(c);
  /* d54ec: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d54f0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873716));
  fn2_1ccd9c(c);
  /* d54f4: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* d54f8: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* d54fc: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873728));
  fn2_1bc290(c);
  /* d5500: sub x8, x29, #0x48 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d5504: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* d5508: add x1, sp, #0x60 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(96)));
  /* d550c: add x2, sp, #0x38 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(56)));
  /* d5510: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873748));
  fn2_1d9c5c(c);
  /* d5514: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d5518: bl #0xd0db4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873756));
  fn2_d0db4(c);
  /* d551c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* d5520: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d5524: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873768));
  fn2_1bc620(c);
  /* d5528: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* d552c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873776));
  fn2_1bc620(c);
  /* d5530: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* d5534: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873784));
  fn2_1bc620(c);
  /* d5538: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d553c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* d5540: bl #0xd57f4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873796));
  fn2_d57f4(c);
  /* d5544: tbnz x0, #0x3f, #0xd57d4 */
  if (((ARC_X_R(c, 0)) >> 63 & 1) != 0) goto L_d57d4;
  /* d5548: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* d554c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d5550: bl #0xd0f04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873812));
  fn2_d0f04(c);
  /* d5554: tbz w0, #0, #0xd5674 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_d5674;
  /* d5558: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* d555c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* d5560: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873828));
  fn2_1bc290(c);
  /* d5564: add x0, sp, #0x14 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(20)));
  /* d5568: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873836));
  fn2_1db4a4(c);
  /* d556c: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* d5570: add x1, sp, #0x14 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(20)));
  /* d5574: bl #0x1bc544 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873848));
  fn2_1bc544(c);
  /* d5578: sub x8, x29, #0x48 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d557c: add x0, x19, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(72)));
  /* d5580: add x1, sp, #0x60 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(96)));
  /* d5584: add x2, sp, #0x38 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(56)));
  /* d5588: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873868));
  fn2_1d9c5c(c);
  /* d558c: add x8, sp, #0x50 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(80)));
  /* d5590: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d5594: bl #0x1bccc4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873880));
  fn2_1bccc4(c);
  /* d5598: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d559c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873888));
  fn2_1bc620(c);
  /* d55a0: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* d55a4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873896));
  fn2_1bc620(c);
  /* d55a8: add x0, sp, #0x14 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(20)));
  /* d55ac: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873904));
  fn2_1db788(c);
  /* d55b0: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* d55b4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873912));
  fn2_1bc620(c);
  /* d55b8: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* d55bc: bl #0x1db794 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873920));
  fn2_1db794(c);
  /* d55c0: cmp x0, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(3));
  /* d55c4: b.gt #0xd5668 */
  if (ARC_COND(c, 12)) goto L_d5668;
  /* d55c8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d55cc: bl #0xd5f08 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873936));
  fn2_d5f08(c);
  /* d55d0: cmp x0, #0xb */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(11));
  /* d55d4: b.gt #0xd5668 */
  if (ARC_COND(c, 12)) goto L_d5668;
  /* d55d8: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d55dc: add x1, sp, #0x58 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(88)));
  /* d55e0: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873956));
  fn2_1bc530(c);
  /* d55e4: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* d55e8: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d55ec: bl #0x1db988 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873968));
  fn2_1db988(c);
  /* d55f0: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d55f4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873976));
  fn2_1bc620(c);
  /* d55f8: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d55fc: add x1, sp, #0x50 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(80)));
  /* d5600: bl #0x1bc544 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(873988));
  fn2_1bc544(c);
  /* d5604: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* d5608: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* d560c: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(874000));
  fn2_1bc290(c);
  /* d5610: add x0, x19, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(72)));
  /* d5614: add x1, sp, #0x60 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(96)));
  /* d5618: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(874012));
  fn2_1bbfa0(c);
  /* d561c: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d5620: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(874020));
  fn2_1bcf04(c);
  /* d5624: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* d5628: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(874028));
  fn2_1bc620(c);
  /* d562c: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d5630: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(874036));
  fn2_1bc620(c);
  /* d5634: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d5638: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* d563c: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(874048));
  fn2_1bc290(c);
  /* d5640: add x0, x19, #0x50 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(80)));
  /* d5644: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d5648: bl #0x1d998c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(874060));
  fn2_1d998c(c);
  /* d564c: mov w20, w0 */
  ARC_W_W(c, 20, ARC_W_R(c, 0));
  /* d5650: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d5654: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(874072));
  fn2_1bc620(c);
  /* d5658: tbnz w20, #0, #0xd5668 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) != 0) goto L_d5668;
  /* d565c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d5660: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* d5664: bl #0xd5fb4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(874088));
  fn2_d5fb4(c);
L_d5668:;
  /* d5668: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* d566c: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(874096));
  fn2_1db788(c);
  /* d5670: b #0xd57d4 */
  goto L_d57d4;
L_d5674:;
  /* d5674: adrp x1, #0x2f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(192512)));
  /* d5678: add x1, x1, #0x62e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1582)));
  /* d567c: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* d5680: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* d5684: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(874120));
  fn2_1b8fd4(c);
  /* d5688: sub x8, x29, #0x48 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d568c: add x1, sp, #0x60 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(96)));
  /* d5690: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* d5694: bl #0x21fe38 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(874136));
  fn2_21fe38(c);
  /* d5698: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d569c: bl #0xd0db4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(874144));
  fn2_d0db4(c);
  /* d56a0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* d56a4: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d56a8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(874156));
  fn2_1bc620(c);
  /* d56ac: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* d56b0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(874164));
  fn2_1d2d24(c);
  /* d56b4: cmp x20, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(1));
  /* d56b8: b.ne #0xd57d4 */
  if (ARC_COND(c, 1)) goto L_d57d4;
  /* d56bc: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* d56c0: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* d56c4: add x1, x1, #0x1db */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(475)));
  /* d56c8: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* d56cc: strb w8, [sp, #0x1c] */
  arc_st8(((c)->sp + INT64_C(28)), ARC_W_R(c, 8));
  /* d56d0: bl #0xda8a8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(874196));
  fn2_da8a8(c);
  /* d56d4: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* d56d8: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* d56dc: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* d56e0: bl #0xda8a8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(874212));
  fn2_da8a8(c);
  /* d56e4: sub x8, x29, #0x48 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d56e8: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* d56ec: add x1, sp, #0x60 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(96)));
  /* d56f0: add x2, sp, #0x38 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(56)));
  /* d56f4: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(874232));
  fn2_1d9c5c(c);
  /* d56f8: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* d56fc: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d5700: add x2, sp, #0x1c */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(28)));
  /* d5704: bl #0xd0ae8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(874248));
  fn2_d0ae8(c);
  /* d5708: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d570c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(874256));
  fn2_1bc620(c);
  /* d5710: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* d5714: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(874264));
  fn2_1bc620(c);
  /* d5718: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* d571c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(874272));
  fn2_1bc620(c);
  /* d5720: ldrb w8, [sp, #0x1c] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(28))));
  /* d5724: cbz w8, #0xd57cc */
  if ((ARC_W_R(c, 8)) == 0) goto L_d57cc;
  /* d5728: add x8, sp, #0x38 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(56)));
  /* d572c: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* d5730: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* d5734: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* d5738: bl #0x1cde7c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(874300));
  fn2_1cde7c(c);
  /* d573c: adrp x1, #0x27000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(159744)));
  /* d5740: add x1, x1, #0x95b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2395)));
  /* d5744: add x0, sp, #0x14 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(20)));
  /* d5748: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(874316));
  fn2_1b7d24(c);
  /* d574c: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* d5750: add x1, x1, #0x3fd */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1021)));
  /* d5754: add x0, sp, #0xc */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(12)));
  /* d5758: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(874332));
  fn2_1b7d24(c);
  /* d575c: add x8, sp, #0x60 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(96)));
  /* d5760: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* d5764: add x1, sp, #0x14 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(20)));
  /* d5768: add x2, sp, #0xc */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(12)));
  /* d576c: bl #0x1cd4d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(874352));
  fn2_1cd4d8(c);
  /* d5770: sub x8, x29, #0x48 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d5774: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* d5778: mov w1, #0x190 */
  ARC_W_W(c, 1, UINT64_C(400));
  /* d577c: bl #0x1cdd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(874368));
  fn2_1cdd9c(c);
  /* d5780: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* d5784: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(874376));
  fn2_1d9740(c);
  /* d5788: sub x2, x29, #0x48 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d578c: add x3, sp, #4 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(4)));
  /* d5790: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d5794: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* d5798: bl #0xd5990 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(874396));
  fn2_d5990(c);
  /* d579c: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* d57a0: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(874404));
  fn2_1d97fc(c);
  /* d57a4: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* d57a8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(874412));
  fn2_1ccd9c(c);
  /* d57ac: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* d57b0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(874420));
  fn2_1ccd9c(c);
  /* d57b4: add x0, sp, #0xc */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(12)));
  /* d57b8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(874428));
  fn2_1ccd9c(c);
  /* d57bc: add x0, sp, #0x14 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(20)));
  /* d57c0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(874436));
  fn2_1ccd9c(c);
  /* d57c4: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* d57c8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(874444));
  fn2_1ccd9c(c);
L_d57cc:;
  /* d57cc: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* d57d0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(874452));
  fn2_1ccd9c(c);
L_d57d4:;
  /* d57d4: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* d57d8: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(874460));
  fn2_1d97fc(c);
L_d57dc:;
  /* d57dc: ldp x20, x19, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d57e0: ldp x22, x21, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* d57e4: ldp x24, x23, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* d57e8: ldp x29, x30, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d57ec: add sp, sp, #0x100 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(256)));
  /* d57f0: ret  */
  return;
}

void fn2_daeec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076752620));
  /* daeec: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* daef0: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* daef4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* daef8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* daefc: bl #0xdae08 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(896768));
  fn2_dae08(c);
  /* daf00: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* daf04: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* daf08: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* daf0c: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_dc904(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076759300));
  /* dc904: cmp w1, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(0));
  /* dc908: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* dc90c: lsl w8, w8, #2 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(2)) & 31)));
  /* dc910: csel w0, wzr, w8, lt */
  ARC_W_W(c, 0, (ARC_COND(c, 11) ? (ARC_W_R(c, 31)) : ARC_W_R(c, 8)));
  /* dc914: ret  */
  return;
}

void fn2_ddc60(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076764256));
  /* ddc60: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ddc64: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* ddc68: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ddc6c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ddc70: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* ddc74: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* ddc78: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* ddc7c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ddc80: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* ddc84: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* ddc88: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(908428));
  fn2_1b5d1c(c);
  /* ddc8c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* ddc90: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* ddc94: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ddc98: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* ddc9c: str w9, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* ddca0: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* ddca4: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* ddca8: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(908460));
  fn2_1d2c2c(c);
  /* ddcac: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* ddcb0: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(908468));
  fn2_1d2c2c(c);
  /* ddcb4: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* ddcb8: adrp x8, #0x252000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2433024)));
  /* ddcbc: add x8, x8, #0xaa8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2728)));
  /* ddcc0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ddcc4: mov w1, #2 */
  ARC_W_W(c, 1, UINT64_C(2));
  /* ddcc8: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* ddccc: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* ddcd0: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ddcd4: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* ddcd8: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* ddcdc: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* ddce0: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* ddce4: mov w20, #2 */
  ARC_W_W(c, 20, UINT64_C(2));
  /* ddce8: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(908524));
  fn2_1b5e68(c);
  /* ddcec: str w20, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 20));
  /* ddcf0: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* ddcf4: add x8, x8, #0x88 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(136)));
  /* ddcf8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* ddcfc: tbz w8, #0, #0xddd38 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_ddd38;
L_ddd00:;
  /* ddd00: adrp x1, #0x25d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478080)));
  /* ddd04: add x1, x1, #0x80 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(128)));
  /* ddd08: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* ddd0c: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(908560));
  fn2_1d2c40(c);
  /* ddd10: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* ddd14: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* ddd18: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(908572));
  fn2_1d5dc0(c);
  /* ddd1c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* ddd20: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(908580));
  fn2_1d2d24(c);
  /* ddd24: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ddd28: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ddd2c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* ddd30: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ddd34: ret  */
  return;
L_ddd38:;
  /* ddd38: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* ddd3c: add x0, x0, #0x88 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(136)));
  /* ddd40: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(908612));
  fn2_24b710(c);
  /* ddd44: cbz w0, #0xddd00 */
  if ((ARC_W_R(c, 0)) == 0) goto L_ddd00;
  /* ddd48: adrp x20, #0x25d000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478080)));
  /* ddd4c: add x20, x20, #0x80 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(128)));
  /* ddd50: nop  */
  /* nop: no architectural effect here */
  /* ddd54: adr x1, #0x36644 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(222788)));
  /* ddd58: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ddd5c: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(908640));
  fn2_1b907c(c);
  /* ddd60: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* ddd64: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* ddd68: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* ddd6c: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* ddd70: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* ddd74: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(908664));
  fn2_24b6f0(c);
  /* ddd78: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* ddd7c: add x0, x0, #0x88 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(136)));
  /* ddd80: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(908676));
  fn2_24b720(c);
  /* ddd84: b #0xddd00 */
  goto L_ddd00;
}

void fn2_defc4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076769220));
  /* defc4: sub sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(160)));
  /* defc8: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* defcc: stp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* defd0: stp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* defd4: stp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* defd8: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* defdc: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* defe0: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* defe4: ldp x28, x27, [x7] */
  { const uint64_t _pa = ARC_X_R(c, 7);
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* defe8: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* defec: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* deff0: mov x24, x7 */
  ARC_X_W(c, 24, ARC_X_R(c, 7));
  /* deff4: mov x21, x6 */
  ARC_X_W(c, 21, ARC_X_R(c, 6));
  /* deff8: mov x19, x5 */
  ARC_X_W(c, 19, ARC_X_R(c, 5));
  /* deffc: mov w26, w4 */
  ARC_W_W(c, 26, ARC_W_R(c, 4));
  /* df000: mov x25, x3 */
  ARC_X_W(c, 25, ARC_X_R(c, 3));
  /* df004: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* df008: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* df00c: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(913424));
  fn2_1bc084(c);
  /* df010: cmp w26, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 26), UINT64_C(1));
  /* df014: b.lt #0xdf0b4 */
  if (ARC_COND(c, 11)) goto L_df0b4;
  /* df018: ldr x1, [x25] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 25)));
  /* df01c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* df020: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(913444));
  fn2_1bc09c(c);
  /* df024: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* df028: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* df02c: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(913456));
  fn2_1bcf04(c);
  /* df030: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* df034: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(913464));
  fn2_1bc620(c);
  /* df038: add x23, x23, x22, asr #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + ((uint64_t)((int64_t)(ARC_X_R(c, 22)) >> 1))));
  /* df03c: str wzr, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 31));
  /* df040: tbz w22, #0, #0xdf04c */
  if (((ARC_W_R(c, 22)) >> 0 & 1) == 0) goto L_df04c;
L_df044:;
  /* df044: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* df048: ldr x20, [x8, x20] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 20))));
L_df04c:;
  /* df04c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* df050: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(913492));
  fn2_1bc668(c);
  /* df054: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* df058: add x8, sp, #0x20 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(32)));
  /* df05c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* df060: blr x20 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(913508));
  arc_dispatch(c, ARC_X_R(c, 20));
  /* df064: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* df068: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* df06c: bl #0x1bc544 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(913520));
  fn2_1bc544(c);
  /* df070: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* df074: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* df078: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(913532));
  fn2_1bcf04(c);
  /* df07c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* df080: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(913540));
  fn2_1bc620(c);
  /* df084: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* df088: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(913548));
  fn2_1db788(c);
  /* df08c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* df090: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(913556));
  fn2_1bc620(c);
  /* df094: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* df098: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* df09c: ldp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* df0a0: ldp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* df0a4: ldp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* df0a8: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* df0ac: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* df0b0: ret  */
  return;
L_df0b4:;
  /* df0b4: sub x8, x27, x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 27) - ARC_X_R(c, 28)));
  /* df0b8: mov w9, #0xaaab */
  ARC_W_W(c, 9, UINT64_C(43691));
  /* df0bc: mov w10, #-1 */
  ARC_W_W(c, 10, UINT64_C(18446744073709551615));
  /* df0c0: lsr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63)));
  /* df0c4: movk w9, #0xaaaa, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(2863267840)));
  /* df0c8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* df0cc: madd w8, w8, w9, w10 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 10)) + ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 9)))));
  /* df0d0: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* df0d4: ldr x10, [x24] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 24)));
  /* df0d8: nop  */
  /* nop: no architectural effect here */
  /* df0dc: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* df0e0: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(913636));
  fn2_1bce10(c);
  /* df0e4: add x23, x23, x22, asr #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + ((uint64_t)((int64_t)(ARC_X_R(c, 22)) >> 1))));
  /* df0e8: str wzr, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 31));
  /* df0ec: tbnz w22, #0, #0xdf044 */
  if (((ARC_W_R(c, 22)) >> 0 & 1) != 0) goto L_df044;
  /* df0f0: b #0xdf04c */
  goto L_df04c;
}

void fn2_e2c1c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076784668));
  /* e2c1c: ldp x2, x8, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* e2c20: add x0, x1, x8, asr #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 1) + ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> 1))));
  /* e2c24: tbz w8, #0, #0xe2c30 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_e2c30;
  /* e2c28: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* e2c2c: ldr x2, [x8, x2] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 2))));
L_e2c30:;
  /* e2c30: br x2 */
  arc_dispatch(c, ARC_X_R(c, 2)); return;
}

void fn2_e4234(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076790324));
  /* e4234: sub sp, sp, #0xe0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(224)));
  /* e4238: stp x29, x30, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e423c: str x25, [sp, #0xa0] */
  arc_st64(((c)->sp + INT64_C(160)), ARC_X_R(c, 25));
  /* e4240: stp x24, x23, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e4244: stp x22, x21, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e4248: stp x20, x19, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e424c: add x29, sp, #0x90 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(144)));
  /* e4250: ldrb w8, [x0, #0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(96))));
  /* e4254: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e4258: cbz w8, #0xe4380 */
  if ((ARC_W_R(c, 8)) == 0) goto L_e4380;
  /* e425c: ldr d1, [x19, #0x58] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(88))));
  /* e4260: fsub d0, d1, d0 */
  arc_d_w(c, 0, (double)(arc_fsub64(ARC_D_R(c, 1), ARC_D_R(c, 0))));
  /* e4264: fcmp d0, #0.0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(0.0));
  /* e4268: str d0, [x19, #0x58] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(88)), (c)->q[0].u64[0]);
  /* e426c: b.hi #0xe42c4 */
  if (ARC_COND(c, 8)) goto L_e42c4;
  /* e4270: ldr x20, [x19, #0x50] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(80))));
  /* e4274: add x0, x19, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(64)));
  /* e4278: bl #0x1e479c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934524));
  fn2_1e479c(c);
  /* e427c: cmp x20, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 0));
  /* e4280: b.lt #0xe42c4 */
  if (ARC_COND(c, 11)) goto L_e42c4;
  /* e4284: mov x8, #0x4008000000000000 */
  ARC_X_W(c, 8, UINT64_C(4613937818241073152));
  /* e4288: str x8, [x19, #0x58] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(88)), ARC_X_R(c, 8));
  /* e428c: bl #0x20e37c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934544));
  fn2_20e37c(c);
  /* e4290: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e4294: bl #0x20ed84 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934552));
  fn2_20ed84(c);
  /* e4298: add x8, sp, #0x40 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(64)));
  /* e429c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e42a0: bl #0xe3d8c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934564));
  fn2_e3d8c(c);
  /* e42a4: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e42a8: bl #0x1e46f4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934572));
  fn2_1e46f4(c);
  /* e42ac: add x0, x19, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(64)));
  /* e42b0: add x1, sp, #0x40 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(64)));
  /* e42b4: bl #0x1e4e48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934584));
  fn2_1e4e48(c);
  /* e42b8: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* e42bc: bl #0x1e46f4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934592));
  fn2_1e46f4(c);
  /* e42c0: str xzr, [x19, #0x50] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(80)), ARC_X_R(c, 31));
L_e42c4:;
  /* e42c4: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* e42c8: add x1, x1, #0xc5d */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3165)));
  /* e42cc: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* e42d0: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934612));
  fn2_1b7d24(c);
  /* e42d4: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e42d8: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* e42dc: bl #0x1cf0b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934624));
  fn2_1cf0b0(c);
  /* e42e0: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* e42e4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934632));
  fn2_1ccd9c(c);
  /* e42e8: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* e42ec: add x0, x19, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(64)));
  /* e42f0: ldr x8, [x8, #0xfa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4008))));
  /* e42f4: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* e42f8: ldr w20, [x8, #0x1c] */
  ARC_W_W(c, 20, arc_ld32((ARC_X_R(c, 8) + INT64_C(28))));
  /* e42fc: bl #0x1e479c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934656));
  fn2_1e479c(c);
  /* e4300: ldr x8, [x19, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(80))));
  /* e4304: sub x23, x0, x8 */
  ARC_X_W(c, 23, (ARC_X_R(c, 0) - ARC_X_R(c, 8)));
  /* e4308: mov w8, #0x40 */
  ARC_W_W(c, 8, UINT64_C(64));
  /* e430c: cmp x23, #0x40 */
  (void)arc_sub64(c, ARC_X_R(c, 23), UINT64_C(64));
  /* e4310: csel x22, x23, x8, lt */
  ARC_X_W(c, 22, (ARC_COND(c, 11) ? (ARC_X_R(c, 23)) : ARC_X_R(c, 8)));
  /* e4314: cmp x23, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 23), UINT64_C(1));
  /* e4318: b.lt #0xe4378 */
  if (ARC_COND(c, 11)) goto L_e4378;
  /* e431c: cmp x22, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 22), UINT64_C(1));
  /* e4320: mov x24, xzr */
  ARC_X_W(c, 24, ARC_X_R(c, 31));
  /* e4324: csinc x25, x22, xzr, gt */
  ARC_X_W(c, 25, (ARC_COND(c, 12) ? (ARC_X_R(c, 22)) : ((ARC_X_R(c, 31)) + 1)));
L_e4328:;
  /* e4328: ldr x8, [x19, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(80))));
  /* e432c: ldr x21, [x19, #0x20] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* e4330: add x0, x19, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(64)));
  /* e4334: add x1, x24, x8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + ARC_X_R(c, 8)));
  /* e4338: bl #0x1bbe28 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934716));
  fn2_1bbe28(c);
  /* e433c: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* e4340: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e4344: mov w2, w20 */
  ARC_W_W(c, 2, ARC_W_R(c, 20));
  /* e4348: bl #0x223dc4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934732));
  fn2_223dc4(c);
  /* e434c: ldr x0, [x19, #0x20] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* e4350: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e4354: bl #0x223030 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934744));
  fn2_223030(c);
  /* e4358: add x24, x24, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 24) + UINT64_C(1)));
  /* e435c: cmp x25, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 24));
  /* e4360: b.ne #0xe4328 */
  if (ARC_COND(c, 1)) goto L_e4328;
  /* e4364: cmp x23, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 23), UINT64_C(0));
  /* e4368: b.le #0xe4378 */
  if (ARC_COND(c, 13)) goto L_e4378;
  /* e436c: ldr x8, [x19, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(80))));
  /* e4370: add x8, x8, x22 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 22)));
  /* e4374: str x8, [x19, #0x50] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(80)), ARC_X_R(c, 8));
L_e4378:;
  /* e4378: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e437c: bl #0x1dde08 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934784));
  fn2_1dde08(c);
L_e4380:;
  /* e4380: ldr x0, [x19, #0x20] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* e4384: bl #0x223204 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934792));
  fn2_223204(c);
  /* e4388: cmp w0, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(1));
  /* e438c: b.lt #0xe4508 */
  if (ARC_COND(c, 11)) goto L_e4508;
  /* e4390: mov w24, wzr */
  ARC_W_W(c, 24, ARC_W_R(c, 31));
  /* e4394: adrp x20, #0x1b000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(110592)));
  /* e4398: add x20, x20, #0x4d7 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(1239)));
  /* e439c: adrp x21, #0x1e000 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(122880)));
  /* e43a0: add x21, x21, #0xb6f */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(2927)));
  /* e43a4: adrp x22, #0x34000 */
  ARC_X_W(c, 22, (arc_image_bases[2] + UINT64_C(212992)));
  /* e43a8: add x22, x22, #0xf1e */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(3870)));
  /* e43ac: b #0xe43e0 */
  goto L_e43e0;
L_e43b0:;
  /* e43b0: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* e43b4: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934840));
  fn2_1d97fc(c);
L_e43b8:;
  /* e43b8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e43bc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934848));
  fn2_1bc620(c);
  /* e43c0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* e43c4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934856));
  fn2_1ccd9c(c);
  /* e43c8: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* e43cc: bl #0x1dde08 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934864));
  fn2_1dde08(c);
  /* e43d0: ldr x0, [x19, #0x20] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* e43d4: bl #0x223204 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934872));
  fn2_223204(c);
  /* e43d8: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* e43dc: b.le #0xe450c */
  if (ARC_COND(c, 13)) goto L_e450c;
L_e43e0:;
  /* e43e0: ldr x0, [x19, #0x20] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* e43e4: sub x8, x29, #0x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* e43e8: bl #0x222f2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934892));
  fn2_222f2c(c);
  /* e43ec: ldr x0, [x19, #0x20] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* e43f0: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* e43f4: bl #0x223b08 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934904));
  fn2_223b08(c);
  /* e43f8: add x8, sp, #0x40 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(64)));
  /* e43fc: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* e4400: bl #0x1de3b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934916));
  fn2_1de3b0(c);
  /* e4404: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e4408: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* e440c: bl #0x20f224 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934928));
  fn2_20f224(c);
  /* e4410: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* e4414: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934936));
  fn2_1ccd9c(c);
  /* e4418: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e441c: bl #0x1bcc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934944));
  fn2_1bcc90(c);
  /* e4420: cmp w0, #0x1b */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(27));
  /* e4424: b.ne #0xe43b8 */
  if (ARC_COND(c, 1)) goto L_e43b8;
  /* e4428: sub x8, x29, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* e442c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e4430: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934964));
  fn2_1bccb8(c);
  /* e4434: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* e4438: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* e443c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934976));
  fn2_1b7d24(c);
  /* e4440: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* e4444: add x1, sp, #0x40 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(64)));
  /* e4448: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934988));
  fn2_1bc2f8(c);
  /* e444c: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* e4450: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934996));
  fn2_1ccd9c(c);
  /* e4454: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* e4458: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* e445c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(935008));
  fn2_1b7d24(c);
  /* e4460: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* e4464: add x1, sp, #0x40 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(64)));
  /* e4468: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(935020));
  fn2_1bc2f8(c);
  /* e446c: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* e4470: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(935028));
  fn2_1ccd9c(c);
  /* e4474: add x8, sp, #0x40 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(64)));
  /* e4478: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* e447c: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* e4480: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* e4484: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(935048));
  fn2_1d9c5c(c);
  /* e4488: sub x8, x29, #0x38 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* e448c: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* e4490: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(935060));
  fn2_1bc84c(c);
  /* e4494: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* e4498: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* e449c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(935072));
  fn2_1b7d24(c);
  /* e44a0: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* e44a4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* e44a8: bl #0x1cf764 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(935084));
  fn2_1cf764(c);
  /* e44ac: mov w23, w0 */
  ARC_W_W(c, 23, ARC_W_R(c, 0));
  /* e44b0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* e44b4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(935096));
  fn2_1ccd9c(c);
  /* e44b8: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* e44bc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(935104));
  fn2_1ccd9c(c);
  /* e44c0: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* e44c4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(935112));
  fn2_1bc620(c);
  /* e44c8: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* e44cc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(935120));
  fn2_1bc620(c);
  /* e44d0: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* e44d4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(935128));
  fn2_1bc620(c);
  /* e44d8: tbnz w23, #0, #0xe43b0 */
  if (((ARC_W_R(c, 23)) >> 0 & 1) != 0) goto L_e43b0;
  /* e44dc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e44e0: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* e44e4: bl #0x1d9754 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(935144));
  fn2_1d9754(c);
  /* e44e8: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* e44ec: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* e44f0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e44f4: bl #0xe4a90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(935160));
  fn2_e4a90(c);
  /* e44f8: orr w24, w0, w24 */
  ARC_W_W(c, 24, (ARC_W_R(c, 0) | ARC_W_R(c, 24)));
  /* e44fc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e4500: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(935172));
  fn2_1d97fc(c);
  /* e4504: b #0xe43b0 */
  goto L_e43b0;
L_e4508:;
  /* e4508: mov w24, wzr */
  ARC_W_W(c, 24, ARC_W_R(c, 31));
L_e450c:;
  /* e450c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e4510: bl #0xe4d04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(935188));
  fn2_e4d04(c);
  /* e4514: tbnz w0, #0, #0xe451c */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_e451c;
  /* e4518: tbz w24, #0, #0xe4564 */
  if (((ARC_W_R(c, 24)) >> 0 & 1) == 0) goto L_e4564;
L_e451c:;
  /* e451c: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* e4520: add x1, x1, #0xec6 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3782)));
  /* e4524: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* e4528: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* e452c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(935216));
  fn2_1b8fd4(c);
  /* e4530: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e4534: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* e4538: sub x20, x29, #0x18 */
  ARC_X_W(c, 20, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e453c: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(935232));
  fn2_1bc44c(c);
  /* e4540: add x1, sp, #0x40 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(64)));
  /* e4544: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e4548: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* e454c: str x20, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 20));
  /* e4550: bl #0x221204 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(935252));
  fn2_221204(c);
  /* e4554: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e4558: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(935260));
  fn2_1bc620(c);
  /* e455c: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* e4560: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(935268));
  fn2_1d2d24(c);
L_e4564:;
  /* e4564: ldp x20, x19, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e4568: ldr x25, [sp, #0xa0] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(160))));
  /* e456c: ldp x22, x21, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e4570: ldp x24, x23, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e4574: ldp x29, x30, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e4578: add sp, sp, #0xe0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(224)));
  /* e457c: ret  */
  return;
}

void fn2_e6c84(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076801156));
  /* e6c84: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e6c88: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* e6c8c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e6c90: ldr x8, [x2] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 2)));
  /* e6c94: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* e6c98: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* e6c9c: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* e6ca0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(945316));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* e6ca4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e6ca8: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* e6cac: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* e6cb0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e6cb4: b #0x1b5ce8 */
  fn2_1b5ce8(c); return;
}

void fn2_e7c2c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076805164));
  /* e7c2c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e7c30: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* e7c34: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e7c38: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e7c3c: bl #0x1b6040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(949312));
  fn2_1b6040(c);
  /* e7c40: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e7c44: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* e7c48: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e7c4c: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_eac24(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076817444));
  /* eac24: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* eac28: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eac2c: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* eac30: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* eac34: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* eac38: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* eac3c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* eac40: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* eac44: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* eac48: add x22, sp, #0x10 */
  ARC_X_W(c, 22, ((c)->sp + UINT64_C(16)));
  /* eac4c: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(961616));
  fn2_1bc44c(c);
  /* eac50: ldr x1, [x19] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 19)));
  /* eac54: add x19, x22, #0x18 */
  ARC_X_W(c, 19, (ARC_X_R(c, 22) + UINT64_C(24)));
  /* eac58: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eac5c: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(961632));
  fn2_1bc290(c);
  /* eac60: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* eac64: mov x8, x21 */
  ARC_X_W(c, 8, ARC_X_R(c, 21));
  /* eac68: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* eac6c: mov w2, #2 */
  ARC_W_W(c, 2, UINT64_C(2));
  /* eac70: stp x22, x19, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* eac74: bl #0x221308 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(961656));
  fn2_221308(c);
  /* eac78: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eac7c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(961664));
  fn2_1bc620(c);
  /* eac80: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* eac84: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(961672));
  fn2_1bc620(c);
  /* eac88: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* eac8c: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* eac90: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eac94: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* eac98: ret  */
  return;
}

void fn2_ec684(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076824196));
  /* ec684: sub sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(192)));
  /* ec688: stp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ec68c: stp x24, x23, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* ec690: stp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ec694: stp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ec698: add x29, sp, #0x80 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(128)));
  /* ec69c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* ec6a0: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* ec6a4: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* ec6a8: bl #0xec4b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(968364));
  fn2_ec4b8(c);
  /* ec6ac: cbz x0, #0xec760 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ec760;
  /* ec6b0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ec6b4: adrp x1, #0x1c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(114688)));
  /* ec6b8: add x1, x1, #0xa3 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(163)));
  /* ec6bc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* ec6c0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* ec6c4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(968392));
  fn2_1b8fd4(c);
  /* ec6c8: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* ec6cc: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* ec6d0: add x24, sp, #0x38 */
  ARC_X_W(c, 24, ((c)->sp + UINT64_C(56)));
  /* ec6d4: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(968408));
  fn2_1bc44c(c);
  /* ec6d8: add x23, x24, #0x18 */
  ARC_X_W(c, 23, (ARC_X_R(c, 24) + UINT64_C(24)));
  /* ec6dc: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* ec6e0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* ec6e4: bl #0x1bc544 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(968424));
  fn2_1bc544(c);
  /* ec6e8: add x22, x24, #0x30 */
  ARC_X_W(c, 22, (ARC_X_R(c, 24) + UINT64_C(48)));
  /* ec6ec: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* ec6f0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* ec6f4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(968440));
  fn2_1bc2f8(c);
  /* ec6f8: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* ec6fc: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* ec700: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ec704: mov w2, #3 */
  ARC_W_W(c, 2, UINT64_C(3));
  /* ec708: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* ec70c: str x22, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 22));
  /* ec710: bl #0x221308 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(968468));
  fn2_221308(c);
  /* ec714: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* ec718: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(968476));
  fn2_1bc620(c);
  /* ec71c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* ec720: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(968484));
  fn2_1bc620(c);
  /* ec724: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* ec728: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(968492));
  fn2_1bc620(c);
  /* ec72c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* ec730: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* ec734: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(968504));
  fn2_1bc84c(c);
  /* ec738: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
L_ec73c:;
  /* ec73c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(968512));
  fn2_1bc620(c);
  /* ec740: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* ec744: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(968520));
  fn2_1d2d24(c);
  /* ec748: ldp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ec74c: ldp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ec750: ldp x24, x23, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* ec754: ldp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ec758: add sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(192)));
  /* ec75c: ret  */
  return;
L_ec760:;
  /* ec760: bl #0x205d68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(968548));
  fn2_205d68(c);
  /* ec764: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ec768: adrp x1, #0x30000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(196608)));
  /* ec76c: add x1, x1, #0x236 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(566)));
  /* ec770: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* ec774: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* ec778: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(968572));
  fn2_1b8fd4(c);
  /* ec77c: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* ec780: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ec784: bl #0x2075e8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(968584));
  fn2_2075e8(c);
  /* ec788: tbz w0, #0, #0xec83c */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_ec83c;
  /* ec78c: bl #0x205d68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(968592));
  fn2_205d68(c);
  /* ec790: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ec794: adrp x1, #0x30000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(196608)));
  /* ec798: add x1, x1, #0x236 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(566)));
  /* ec79c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* ec7a0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* ec7a4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(968616));
  fn2_1b8fd4(c);
  /* ec7a8: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* ec7ac: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ec7b0: bl #0x2076e8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(968628));
  fn2_2076e8(c);
  /* ec7b4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ec7b8: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* ec7bc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(968640));
  fn2_1d2d24(c);
  /* ec7c0: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* ec7c4: add x23, sp, #0x38 */
  ARC_X_W(c, 23, ((c)->sp + UINT64_C(56)));
  /* ec7c8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(968652));
  fn2_1d2d24(c);
  /* ec7cc: cbz x21, #0xec844 */
  if ((ARC_X_R(c, 21)) == 0) goto L_ec844;
  /* ec7d0: adrp x1, #0x30000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(196608)));
  /* ec7d4: add x1, x1, #0x1f0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(496)));
  /* ec7d8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* ec7dc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* ec7e0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(968676));
  fn2_1b8fd4(c);
  /* ec7e4: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* ec7e8: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* ec7ec: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(968688));
  fn2_1bc44c(c);
  /* ec7f0: add x22, x23, #0x18 */
  ARC_X_W(c, 22, (ARC_X_R(c, 23) + UINT64_C(24)));
  /* ec7f4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* ec7f8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* ec7fc: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(968704));
  fn2_1bc2f8(c);
  /* ec800: add x8, sp, #0x20 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(32)));
  /* ec804: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* ec808: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ec80c: mov w2, #2 */
  ARC_W_W(c, 2, UINT64_C(2));
  /* ec810: stp x23, x22, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* ec814: bl #0x221308 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(968728));
  fn2_221308(c);
  /* ec818: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* ec81c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(968736));
  fn2_1bc620(c);
  /* ec820: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* ec824: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(968744));
  fn2_1bc620(c);
  /* ec828: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* ec82c: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* ec830: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(968756));
  fn2_1bc84c(c);
  /* ec834: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* ec838: b #0xec73c */
  goto L_ec73c;
L_ec83c:;
  /* ec83c: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* ec840: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(968772));
  fn2_1d2d24(c);
L_ec844:;
  /* ec844: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ec848: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* ec84c: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(968784));
  fn2_1ccc88(c);
  /* ec850: ldp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ec854: ldp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ec858: ldp x24, x23, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* ec85c: ldp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ec860: add sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(192)));
  /* ec864: ret  */
  return;
}

void fn2_f3a48(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076853832));
  /* f3a48: ldr w0, [x0, #0x20] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(32))));
  /* f3a4c: ret  */
  return;
}

void fn2_f41a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076855712));
  /* f41a0: mov w0, #4 */
  ARC_W_W(c, 0, UINT64_C(4));
  /* f41a4: ret  */
  return;
}

void fn2_f52dc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076860124));
  /* f52dc: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f52e0: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* f52e4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f52e8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f52ec: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* f52f0: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* f52f4: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* f52f8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* f52fc: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* f5300: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* f5304: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1004296));
  fn2_1b5d1c(c);
  /* f5308: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* f530c: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* f5310: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f5314: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* f5318: str w9, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* f531c: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* f5320: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* f5324: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1004328));
  fn2_1d2c2c(c);
  /* f5328: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* f532c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1004336));
  fn2_1d2c2c(c);
  /* f5330: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* f5334: adrp x8, #0x253000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2437120)));
  /* f5338: add x8, x8, #0x408 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1032)));
  /* f533c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f5340: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* f5344: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* f5348: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* f534c: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f5350: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* f5354: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* f5358: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* f535c: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* f5360: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1004388));
  fn2_1b5e68(c);
  /* f5364: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f5368: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* f536c: str wzr, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 31));
  /* f5370: bl #0x1b5d9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1004404));
  fn2_1b5d9c(c);
  /* f5374: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f5378: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* f537c: bl #0x1b5d8c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1004416));
  fn2_1b5d8c(c);
  /* f5380: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* f5384: add x8, x8, #0x148 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(328)));
  /* f5388: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* f538c: tbz w8, #0, #0xf53c8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_f53c8;
L_f5390:;
  /* f5390: adrp x1, #0x25d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478080)));
  /* f5394: add x1, x1, #0x140 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(320)));
  /* f5398: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* f539c: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1004448));
  fn2_1d2c40(c);
  /* f53a0: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* f53a4: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* f53a8: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1004460));
  fn2_1d5dc0(c);
  /* f53ac: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* f53b0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1004468));
  fn2_1d2d24(c);
  /* f53b4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f53b8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f53bc: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* f53c0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f53c4: ret  */
  return;
L_f53c8:;
  /* f53c8: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* f53cc: add x0, x0, #0x148 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(328)));
  /* f53d0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1004500));
  fn2_24b710(c);
  /* f53d4: cbz w0, #0xf5390 */
  if ((ARC_W_R(c, 0)) == 0) goto L_f5390;
  /* f53d8: adrp x20, #0x25d000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478080)));
  /* f53dc: add x20, x20, #0x140 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(320)));
  /* f53e0: nop  */
  /* nop: no architectural effect here */
  /* f53e4: adr x1, #0x365bc */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(222652)));
  /* f53e8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f53ec: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1004528));
  fn2_1b907c(c);
  /* f53f0: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* f53f4: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* f53f8: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* f53fc: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* f5400: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* f5404: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1004552));
  fn2_24b6f0(c);
  /* f5408: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* f540c: add x0, x0, #0x148 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(328)));
  /* f5410: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1004564));
  fn2_24b720(c);
  /* f5414: b #0xf5390 */
  goto L_f5390;
}

void fn2_f6c94(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076866708));
  /* f6c94: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f6c98: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f6c9c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f6ca0: ldr x20, [x0, #0x18] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* f6ca4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f6ca8: adrp x8, #0x253000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2437120)));
  /* f6cac: add x8, x8, #0x528 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1320)));
  /* f6cb0: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* f6cb4: cbz x20, #0xf6cd0 */
  if ((ARC_X_R(c, 20)) == 0) goto L_f6cd0;
  /* f6cb8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f6cbc: bl #0xfc520 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1010880));
  fn2_fc520(c);
  /* f6cc0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f6cc4: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* f6cc8: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1010892));
  fn2_1b5ce8(c);
  /* f6ccc: str xzr, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 31));
L_f6cd0:;
  /* f6cd0: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* f6cd4: ldr x9, [x8, #0x160] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(352))));
  /* f6cd8: cmp x9, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 19));
  /* f6cdc: b.eq #0xf6d00 */
  if (ARC_COND(c, 0)) goto L_f6d00;
  /* f6ce0: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* f6ce4: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* f6ce8: add x8, x8, #0x5e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1504)));
  /* f6cec: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* f6cf0: cbnz x0, #0xf6d18 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f6d18;
L_f6cf4:;
  /* f6cf4: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f6cf8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f6cfc: ret  */
  return;
L_f6d00:;
  /* f6d00: str xzr, [x8, #0x160] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(352)), ARC_X_R(c, 31));
  /* f6d04: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* f6d08: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* f6d0c: add x8, x8, #0x5e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1504)));
  /* f6d10: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* f6d14: cbz x0, #0xf6cf4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_f6cf4;
L_f6d18:;
  /* f6d18: ldr x1, [x0] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 0)));
  /* f6d1c: cbz x1, #0xf6d48 */
  if ((ARC_X_R(c, 1)) == 0) goto L_f6d48;
  /* f6d20: bl #0xaeb74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1010980));
  fn2_aeb74(c);
  /* f6d24: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* f6d28: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* f6d2c: cbnz w8, #0xf6d18 */
  if ((ARC_W_R(c, 8)) != 0) goto L_f6d18;
  /* f6d30: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* f6d34: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1011000));
  fn2_1b5ce8(c);
  /* f6d38: str xzr, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 31));
  /* f6d3c: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f6d40: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f6d44: ret  */
  return;
L_f6d48:;
  /* f6d48: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* f6d4c: cbnz w8, #0xf6d60 */
  if ((ARC_W_R(c, 8)) != 0) goto L_f6d60;
  /* f6d50: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* f6d54: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f6d58: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f6d5c: b #0x1b5ce8 */
  fn2_1b5ce8(c); return;
L_f6d60:;
  /* f6d60: adrp x0, #0x29000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(167936)));
  /* f6d64: add x0, x0, #0x23f */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(575)));
  /* f6d68: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* f6d6c: add x1, x1, #0x30a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(778)));
  /* f6d70: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* f6d74: add x3, x3, #0xbb4 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2996)));
  /* f6d78: mov w2, #0x317 */
  ARC_W_W(c, 2, UINT64_C(791));
  /* f6d7c: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* f6d80: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* f6d84: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f6d88: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f6d8c: b #0x1b54b0 */
  fn2_1b54b0(c); return;
}

void fn2_fd390(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076893072));
  /* fd390: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* fd394: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fd398: str x21, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 21));
  /* fd39c: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fd3a0: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* fd3a4: ldp x21, x8, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 21, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* fd3a8: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* fd3ac: add x20, x1, x8, asr #1 */
  ARC_X_W(c, 20, (ARC_X_R(c, 1) + ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> 1))));
  /* fd3b0: tbz w8, #0, #0xfd3bc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_fd3bc;
  /* fd3b4: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* fd3b8: ldr x21, [x8, x21] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 21))));
L_fd3bc:;
  /* fd3bc: ldr x1, [x2] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 2)));
  /* fd3c0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* fd3c4: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1037256));
  fn2_1bc0b8(c);
  /* fd3c8: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* fd3cc: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* fd3d0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fd3d4: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1037272));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* fd3d8: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* fd3dc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fd3e0: bl #0x1da22c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1037284));
  fn2_1da22c(c);
  /* fd3e4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* fd3e8: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1037292));
  fn2_1d97fc(c);
  /* fd3ec: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* fd3f0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1037300));
  fn2_1bc620(c);
  /* fd3f4: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fd3f8: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* fd3fc: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fd400: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* fd404: ret  */
  return;
}

void fn2_129168(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077072744));
  /* 129168: sub sp, sp, #0x120 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(288)));
  /* 12916c: stp x29, x30, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 129170: stp x28, x27, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 129174: stp x26, x25, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 129178: stp x24, x23, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 12917c: stp x22, x21, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 129180: stp x20, x19, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 129184: add x29, sp, #0xc0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(192)));
  /* 129188: mov x25, x1 */
  ARC_X_W(c, 25, ARC_X_R(c, 1));
  /* 12918c: sxtw x1, w3 */
  ARC_X_W(c, 1, ((int64_t)(int32_t)(ARC_W_R(c, 3))));
  /* 129190: mov x26, x0 */
  ARC_X_W(c, 26, ARC_X_R(c, 0));
  /* 129194: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 129198: mov x21, x7 */
  ARC_X_W(c, 21, ARC_X_R(c, 7));
  /* 12919c: mov x22, x6 */
  ARC_X_W(c, 22, ARC_X_R(c, 6));
  /* 1291a0: mov x23, x5 */
  ARC_X_W(c, 23, ARC_X_R(c, 5));
  /* 1291a4: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 1291a8: mov x24, x2 */
  ARC_X_W(c, 24, ARC_X_R(c, 2));
  /* 1291ac: add x27, sp, #0x30 */
  ARC_X_W(c, 27, ((c)->sp + UINT64_C(48)));
  /* 1291b0: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1216948));
  fn2_1bc290(c);
  /* 1291b4: add x19, x27, #0x18 */
  ARC_X_W(c, 19, (ARC_X_R(c, 27) + UINT64_C(24)));
  /* 1291b8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1291bc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1291c0: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1216964));
  fn2_1bc2f8(c);
  /* 1291c4: add x20, x27, #0x30 */
  ARC_X_W(c, 20, (ARC_X_R(c, 27) + UINT64_C(48)));
  /* 1291c8: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 1291cc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1291d0: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1216980));
  fn2_1bc530(c);
  /* 1291d4: add x23, x27, #0x48 */
  ARC_X_W(c, 23, (ARC_X_R(c, 27) + UINT64_C(72)));
  /* 1291d8: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 1291dc: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1291e0: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1216996));
  fn2_1bc2f8(c);
  /* 1291e4: add x22, x27, #0x60 */
  ARC_X_W(c, 22, (ARC_X_R(c, 27) + UINT64_C(96)));
  /* 1291e8: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1291ec: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1291f0: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1217012));
  fn2_1bc2f8(c);
  /* 1291f4: add x0, x27, #0x78 */
  ARC_X_W(c, 0, (ARC_X_R(c, 27) + UINT64_C(120)));
  /* 1291f8: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1217020));
  fn2_1bc084(c);
  /* 1291fc: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 129200: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 129204: stp x27, x19, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 27));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 129208: stp x20, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 12920c: str x22, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 22));
  /* 129210: bl #0x132268 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1217044));
  fn2_132268(c);
  /* 129214: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 129218: mov x3, sp */
  ARC_X_W(c, 3, (c)->sp);
  /* 12921c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 129220: mov x2, x26 */
  ARC_X_W(c, 2, ARC_X_R(c, 26));
  /* 129224: mov w4, #5 */
  ARC_W_W(c, 4, UINT64_C(5));
  /* 129228: bl #0x1b0eac */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1217068));
  fn2_1b0eac(c);
  /* 12922c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 129230: add x0, x27, #0x78 */
  ARC_X_W(c, 0, (ARC_X_R(c, 27) + UINT64_C(120)));
  /* 129234: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1217080));
  fn2_1bc620(c);
  /* 129238: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 12923c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1217088));
  fn2_1bc620(c);
  /* 129240: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 129244: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1217096));
  fn2_1bc620(c);
  /* 129248: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12924c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1217104));
  fn2_1bc620(c);
  /* 129250: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 129254: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1217112));
  fn2_1bc620(c);
  /* 129258: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 12925c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1217120));
  fn2_1bc620(c);
  /* 129260: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 129264: ldp x20, x19, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 129268: ldp x22, x21, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 12926c: ldp x24, x23, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 129270: ldp x26, x25, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 129274: ldp x28, x27, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 129278: ldp x29, x30, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12927c: add sp, sp, #0x120 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(288)));
  /* 129280: ret  */
  return;
}

void fn2_12996c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077074796));
  /* 12996c: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 129970: strb w8, [x0, #0x88] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(136)), ARC_W_R(c, 8));
  /* 129974: ret  */
  return;
}

void fn2_129ab0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077075120));
  /* 129ab0: add x0, x0, #0xf8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(248)));
  /* 129ab4: b #0x1dc718 */
  fn2_1dc718(c); return;
}

void fn2_129bf0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077075440));
  /* 129bf0: add x0, x0, #0x178 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(376)));
  /* 129bf4: b #0x1da22c */
  fn2_1da22c(c); return;
}

void fn2_129d2c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077075756));
  /* 129d2c: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 129d30: strb w8, [x0, #0x1d5] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(469)), ARC_W_R(c, 8));
  /* 129d34: ret  */
  return;
}

void fn2_129e70(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077076080));
  /* 129e70: add x0, x0, #0x250 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(592)));
  /* 129e74: b #0x1da22c */
  fn2_1da22c(c); return;
}

void fn2_129fb0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077076400));
  /* 129fb0: add x0, x0, #0x2e8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(744)));
  /* 129fb4: b #0x1d06b8 */
  fn2_1d06b8(c); return;
}

void fn2_12a0ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077076716));
  /* 12a0ec: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* 12a0f0: str x8, [x0, #0x368] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(872)), ARC_X_R(c, 8));
  /* 12a0f4: ret  */
  return;
}

void fn2_12a22c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077077036));
  /* 12a22c: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* 12a230: str x8, [x0, #0x3e8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(1000)), ARC_X_R(c, 8));
  /* 12a234: ret  */
  return;
}

void fn2_12a568(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077077864));
  /* 12a568: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12a56c: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12a570: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12a574: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 12a578: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 12a57c: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 12a580: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* 12a584: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 12a588: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1222028));
  fn2_1b5d1c(c);
  /* 12a58c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 12a590: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 12a594: bl #0x1afdf8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1222040));
  fn2_1afdf8(c);
  /* 12a598: adrp x8, #0x253000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2437120)));
  /* 12a59c: add x8, x8, #0xbc0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3008)));
  /* 12a5a0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12a5a4: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 12a5a8: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12a5ac: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12a5b0: ret  */
  return;
}

void fn2_12b1f4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077081076));
  /* 12b1f4: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12b1f8: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 12b1fc: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12b200: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12b204: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 12b208: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 12b20c: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 12b210: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 12b214: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* 12b218: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 12b21c: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1225248));
  fn2_1b5d1c(c);
  /* 12b220: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 12b224: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* 12b228: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12b22c: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 12b230: str w9, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* 12b234: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 12b238: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 12b23c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1225280));
  fn2_1d2c2c(c);
  /* 12b240: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 12b244: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1225288));
  fn2_1d2c2c(c);
  /* 12b248: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 12b24c: adrp x8, #0x251000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2428928)));
  /* 12b250: add x8, x8, #0x60 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(96)));
  /* 12b254: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12b258: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 12b25c: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* 12b260: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 12b264: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 12b268: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* 12b26c: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* 12b270: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* 12b274: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* 12b278: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1225340));
  fn2_1b5e68(c);
  /* 12b27c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12b280: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 12b284: str wzr, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 31));
  /* 12b288: bl #0x1b5d9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1225356));
  fn2_1b5d9c(c);
  /* 12b28c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12b290: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 12b294: bl #0x1b5d8c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1225368));
  fn2_1b5d8c(c);
  /* 12b298: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12b29c: add x8, x8, #0x1c8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(456)));
  /* 12b2a0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 12b2a4: tbz w8, #0, #0x12b2e0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12b2e0;
L_12b2a8:;
  /* 12b2a8: adrp x1, #0x25d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12b2ac: add x1, x1, #0x1bc */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(444)));
  /* 12b2b0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 12b2b4: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1225400));
  fn2_1d2c40(c);
  /* 12b2b8: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 12b2bc: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 12b2c0: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1225412));
  fn2_1d5dc0(c);
  /* 12b2c4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 12b2c8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1225420));
  fn2_1d2d24(c);
  /* 12b2cc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12b2d0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12b2d4: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12b2d8: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12b2dc: ret  */
  return;
L_12b2e0:;
  /* 12b2e0: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12b2e4: add x0, x0, #0x1c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(456)));
  /* 12b2e8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1225452));
  fn2_24b710(c);
  /* 12b2ec: cbz w0, #0x12b2a8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_12b2a8;
  /* 12b2f0: adrp x20, #0x25d000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12b2f4: add x20, x20, #0x1bc */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(444)));
  /* 12b2f8: nop  */
  /* nop: no architectural effect here */
  /* 12b2fc: adr x1, #0x363e8 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(222184)));
  /* 12b300: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12b304: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1225480));
  fn2_1b907c(c);
  /* 12b308: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 12b30c: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* 12b310: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* 12b314: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 12b318: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 12b31c: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1225504));
  fn2_24b6f0(c);
  /* 12b320: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12b324: add x0, x0, #0x1c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(456)));
  /* 12b328: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1225516));
  fn2_24b720(c);
  /* 12b32c: b #0x12b2a8 */
  goto L_12b2a8;
}

void fn2_12c784(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077086596));
  /* 12c784: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 12c788: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12c78c: str x21, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 21));
  /* 12c790: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12c794: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 12c798: ldr w8, [x1] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 1)));
  /* 12c79c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 12c7a0: cmp w8, w0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 0));
  /* 12c7a4: b.ne #0x12c810 */
  if (ARC_COND(c, 1)) goto L_12c810;
  /* 12c7a8: add x8, sp, #0xc */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(12)));
  /* 12c7ac: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 12c7b0: add x21, sp, #0xc */
  ARC_X_W(c, 21, ((c)->sp + UINT64_C(12)));
  /* 12c7b4: bl #0x12c82c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1230776));
  fn2_12c82c(c);
  /* 12c7b8: ldr w8, [sp, #0xc] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(12))));
  /* 12c7bc: add x0, x20, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(4)));
  /* 12c7c0: add x1, x21, #4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(4)));
  /* 12c7c4: str w8, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 8));
  /* 12c7c8: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1230796));
  fn2_1d2b98(c);
  /* 12c7cc: add x0, x20, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(12)));
  /* 12c7d0: add x1, x21, #0xc */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(12)));
  /* 12c7d4: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1230808));
  fn2_1d2b98(c);
  /* 12c7d8: ldr w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(32))));
  /* 12c7dc: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 12c7e0: add x1, x21, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* 12c7e4: str w8, [x20, #0x14] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(20)), ARC_W_R(c, 8));
  /* 12c7e8: bl #0x1d0708 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1230828));
  fn2_1d0708(c);
  /* 12c7ec: ldr w8, [sp, #0x2c] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(44))));
  /* 12c7f0: add x0, x21, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* 12c7f4: str w8, [x20, #0x20] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(32)), ARC_W_R(c, 8));
  /* 12c7f8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1230844));
  fn2_1ccd9c(c);
  /* 12c7fc: add x0, x21, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(12)));
  /* 12c800: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1230852));
  fn2_1d2d24(c);
  /* 12c804: add x0, x21, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(4)));
  /* 12c808: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1230860));
  fn2_1d2d24(c);
  /* 12c80c: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
L_12c810:;
  /* 12c810: add w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* 12c814: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 12c818: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12c81c: ldr x21, [sp, #0x40] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(64))));
  /* 12c820: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12c824: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 12c828: ret  */
  return;
}

void fn2_12dc58(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077091928));
  /* 12dc58: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 12dc5c: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12dc60: str x21, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 21));
  /* 12dc64: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12dc68: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 12dc6c: add x0, x8, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 12dc70: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* 12dc74: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 12dc78: str wzr, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 31));
  /* 12dc7c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1236096));
  fn2_1d2c2c(c);
  /* 12dc80: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 12dc84: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1236104));
  fn2_1d2c2c(c);
  /* 12dc88: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 12dc8c: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* 12dc90: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1236116));
  fn2_1ccc74(c);
  /* 12dc94: mov w21, #6 */
  ARC_W_W(c, 21, UINT64_C(6));
  /* 12dc98: cmp w20, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 20), UINT64_C(2));
  /* 12dc9c: str w21, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 21));
  /* 12dca0: b.hi #0x12dcec */
  if (ARC_COND(c, 8)) goto L_12dcec;
  /* 12dca4: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 12dca8: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 12dcac: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 12dcb0: str wzr, [sp] */
  arc_st32((c)->sp, ARC_W_R(c, 31));
  /* 12dcb4: bl #0xb1d4c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1236152));
  fn2_b1d4c(c);
  /* 12dcb8: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 12dcbc: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 12dcc0: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 12dcc4: bl #0xb2de4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1236168));
  fn2_b2de4(c);
  /* 12dcc8: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 12dccc: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 12dcd0: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 12dcd4: bl #0xb1d4c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1236184));
  fn2_b1d4c(c);
  /* 12dcd8: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12dcdc: ldr x21, [sp, #0x40] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(64))));
  /* 12dce0: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12dce4: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 12dce8: ret  */
  return;
L_12dcec:;
  /* 12dcec: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 12dcf0: mov x20, sp */
  ARC_X_W(c, 20, (c)->sp);
  /* 12dcf4: str wzr, [sp, #0x20] */
  arc_st32(((c)->sp + INT64_C(32)), ARC_W_R(c, 31));
  /* 12dcf8: orr x0, x20, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(4)));
  /* 12dcfc: stp q0, q0, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 12dd00: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1236228));
  fn2_1d2c2c(c);
  /* 12dd04: orr x0, x20, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(12)));
  /* 12dd08: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1236236));
  fn2_1d2c2c(c);
  /* 12dd0c: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 12dd10: str wzr, [sp, #0x14] */
  arc_st32(((c)->sp + INT64_C(20)), ARC_W_R(c, 31));
  /* 12dd14: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1236248));
  fn2_1ccc74(c);
  /* 12dd18: ldr w8, [sp] */
  ARC_W_W(c, 8, arc_ld32((c)->sp));
  /* 12dd1c: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* 12dd20: orr x1, x20, #4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) | UINT64_C(4)));
  /* 12dd24: str w21, [sp, #0x20] */
  arc_st32(((c)->sp + INT64_C(32)), ARC_W_R(c, 21));
  /* 12dd28: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 12dd2c: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1236272));
  fn2_1d2b98(c);
  /* 12dd30: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 12dd34: orr x1, x20, #0xc */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) | UINT64_C(12)));
  /* 12dd38: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1236284));
  fn2_1d2b98(c);
  /* 12dd3c: ldr w8, [sp, #0x14] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(20))));
  /* 12dd40: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 12dd44: add x1, x20, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 12dd48: str w8, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 8));
  /* 12dd4c: bl #0x1d0708 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1236304));
  fn2_1d0708(c);
  /* 12dd50: ldr w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(32))));
  /* 12dd54: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 12dd58: str w8, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 8));
  /* 12dd5c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1236320));
  fn2_1ccd9c(c);
  /* 12dd60: orr x0, x20, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(12)));
  /* 12dd64: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1236328));
  fn2_1d2d24(c);
  /* 12dd68: orr x0, x20, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(4)));
  /* 12dd6c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1236336));
  fn2_1d2d24(c);
  /* 12dd70: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12dd74: ldr x21, [sp, #0x40] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(64))));
  /* 12dd78: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12dd7c: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 12dd80: ret  */
  return;
}

void fn2_12f068(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077097064));
  /* 12f068: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12f06c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 12f070: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12f074: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12f078: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 12f07c: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 12f080: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 12f084: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 12f088: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* 12f08c: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 12f090: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1241236));
  fn2_1b5d1c(c);
  /* 12f094: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 12f098: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* 12f09c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12f0a0: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 12f0a4: str w9, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* 12f0a8: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 12f0ac: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 12f0b0: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1241268));
  fn2_1d2c2c(c);
  /* 12f0b4: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 12f0b8: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1241276));
  fn2_1d2c2c(c);
  /* 12f0bc: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 12f0c0: adrp x8, #0x254000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2441216)));
  /* 12f0c4: add x8, x8, #0x138 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(312)));
  /* 12f0c8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12f0cc: mov w1, #2 */
  ARC_W_W(c, 1, UINT64_C(2));
  /* 12f0d0: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* 12f0d4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 12f0d8: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 12f0dc: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* 12f0e0: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* 12f0e4: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* 12f0e8: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* 12f0ec: mov w20, #2 */
  ARC_W_W(c, 20, UINT64_C(2));
  /* 12f0f0: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1241332));
  fn2_1b5e68(c);
  /* 12f0f4: str w20, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 20));
  /* 12f0f8: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12f0fc: add x8, x8, #0x1c8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(456)));
  /* 12f100: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 12f104: tbz w8, #0, #0x12f140 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12f140;
L_12f108:;
  /* 12f108: adrp x1, #0x25d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12f10c: add x1, x1, #0x1bc */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(444)));
  /* 12f110: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 12f114: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1241368));
  fn2_1d2c40(c);
  /* 12f118: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 12f11c: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 12f120: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1241380));
  fn2_1d5dc0(c);
  /* 12f124: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 12f128: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1241388));
  fn2_1d2d24(c);
  /* 12f12c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12f130: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12f134: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12f138: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12f13c: ret  */
  return;
L_12f140:;
  /* 12f140: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12f144: add x0, x0, #0x1c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(456)));
  /* 12f148: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1241420));
  fn2_24b710(c);
  /* 12f14c: cbz w0, #0x12f108 */
  if ((ARC_W_R(c, 0)) == 0) goto L_12f108;
  /* 12f150: adrp x20, #0x25d000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12f154: add x20, x20, #0x1bc */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(444)));
  /* 12f158: nop  */
  /* nop: no architectural effect here */
  /* 12f15c: adr x1, #0x363e8 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(222184)));
  /* 12f160: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12f164: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1241448));
  fn2_1b907c(c);
  /* 12f168: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 12f16c: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* 12f170: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* 12f174: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 12f178: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 12f17c: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1241472));
  fn2_24b6f0(c);
  /* 12f180: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12f184: add x0, x0, #0x1c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(456)));
  /* 12f188: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1241484));
  fn2_24b720(c);
  /* 12f18c: b #0x12f108 */
  goto L_12f108;
}

void fn2_130320(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077101856));
  /* 130320: ldp x3, x8, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 3, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 130324: add x0, x1, x8, asr #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 1) + ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> 1))));
  /* 130328: tbz w8, #0, #0x130334 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_130334;
  /* 13032c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 130330: ldr x3, [x8, x3] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 3))));
L_130334:;
  /* 130334: ldr x8, [x2] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 2)));
  /* 130338: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13033c: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 130340: cset w1, ne */
  ARC_W_W(c, 1, (ARC_COND(c, 1) ? 1 : 0));
  /* 130344: br x3 */
  arc_dispatch(c, ARC_X_R(c, 3)); return;
}

void fn2_131c18(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077108248));
  /* 131c18: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 131c1c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 131c20: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 131c24: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 131c28: bl #0x1b6040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1252396));
  fn2_1b6040(c);
  /* 131c2c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 131c30: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 131c34: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 131c38: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_133324(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077114148));
  /* 133324: cmp w1, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(2));
  /* 133328: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 13332c: lsl w0, w8, #2 */
  ARC_W_W(c, 0, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(2)) & 31)));
  /* 133330: ret  */
  return;
}

void fn2_134ae0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077120224));
  /* 134ae0: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 134ae4: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 134ae8: str x21, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 21));
  /* 134aec: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 134af0: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 134af4: add x0, x8, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 134af8: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* 134afc: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 134b00: str wzr, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 31));
  /* 134b04: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1264392));
  fn2_1d2c2c(c);
  /* 134b08: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 134b0c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1264400));
  fn2_1d2c2c(c);
  /* 134b10: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 134b14: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* 134b18: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1264412));
  fn2_1ccc74(c);
  /* 134b1c: mov w21, #6 */
  ARC_W_W(c, 21, UINT64_C(6));
  /* 134b20: cmp w20, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 20), UINT64_C(3));
  /* 134b24: str w21, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 21));
  /* 134b28: b.hi #0x134b84 */
  if (ARC_COND(c, 8)) goto L_134b84;
  /* 134b2c: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 134b30: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 134b34: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 134b38: str wzr, [sp] */
  arc_st32((c)->sp, ARC_W_R(c, 31));
  /* 134b3c: bl #0xb2de4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1264448));
  fn2_b2de4(c);
  /* 134b40: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 134b44: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 134b48: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 134b4c: bl #0xb2de4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1264464));
  fn2_b2de4(c);
  /* 134b50: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 134b54: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 134b58: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 134b5c: bl #0xb8078 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1264480));
  fn2_b8078(c);
  /* 134b60: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 134b64: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 134b68: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 134b6c: bl #0x134128 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1264496));
  fn2_134128(c);
  /* 134b70: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 134b74: ldr x21, [sp, #0x40] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(64))));
  /* 134b78: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 134b7c: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 134b80: ret  */
  return;
L_134b84:;
  /* 134b84: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 134b88: mov x20, sp */
  ARC_X_W(c, 20, (c)->sp);
  /* 134b8c: str wzr, [sp, #0x20] */
  arc_st32(((c)->sp + INT64_C(32)), ARC_W_R(c, 31));
  /* 134b90: orr x0, x20, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(4)));
  /* 134b94: stp q0, q0, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 134b98: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1264540));
  fn2_1d2c2c(c);
  /* 134b9c: orr x0, x20, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(12)));
  /* 134ba0: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1264548));
  fn2_1d2c2c(c);
  /* 134ba4: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 134ba8: str wzr, [sp, #0x14] */
  arc_st32(((c)->sp + INT64_C(20)), ARC_W_R(c, 31));
  /* 134bac: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1264560));
  fn2_1ccc74(c);
  /* 134bb0: ldr w8, [sp] */
  ARC_W_W(c, 8, arc_ld32((c)->sp));
  /* 134bb4: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* 134bb8: orr x1, x20, #4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) | UINT64_C(4)));
  /* 134bbc: str w21, [sp, #0x20] */
  arc_st32(((c)->sp + INT64_C(32)), ARC_W_R(c, 21));
  /* 134bc0: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 134bc4: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1264584));
  fn2_1d2b98(c);
  /* 134bc8: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 134bcc: orr x1, x20, #0xc */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) | UINT64_C(12)));
  /* 134bd0: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1264596));
  fn2_1d2b98(c);
  /* 134bd4: ldr w8, [sp, #0x14] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(20))));
  /* 134bd8: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 134bdc: add x1, x20, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 134be0: str w8, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 8));
  /* 134be4: bl #0x1d0708 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1264616));
  fn2_1d0708(c);
  /* 134be8: ldr w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(32))));
  /* 134bec: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 134bf0: str w8, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 8));
  /* 134bf4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1264632));
  fn2_1ccd9c(c);
  /* 134bf8: orr x0, x20, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(12)));
  /* 134bfc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1264640));
  fn2_1d2d24(c);
  /* 134c00: orr x0, x20, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(4)));
  /* 134c04: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1264648));
  fn2_1d2d24(c);
  /* 134c08: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 134c0c: ldr x21, [sp, #0x40] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(64))));
  /* 134c10: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 134c14: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 134c18: ret  */
  return;
}

void fn2_135de8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077125096));
  /* 135de8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 135dec: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 135df0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 135df4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 135df8: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 135dfc: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 135e00: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 135e04: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 135e08: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* 135e0c: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 135e10: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1269268));
  fn2_1b5d1c(c);
  /* 135e14: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 135e18: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* 135e1c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 135e20: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 135e24: str w9, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* 135e28: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 135e2c: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 135e30: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1269300));
  fn2_1d2c2c(c);
  /* 135e34: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 135e38: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1269308));
  fn2_1d2c2c(c);
  /* 135e3c: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 135e40: adrp x8, #0x254000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2441216)));
  /* 135e44: add x8, x8, #0x7f8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2040)));
  /* 135e48: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 135e4c: mov w1, #3 */
  ARC_W_W(c, 1, UINT64_C(3));
  /* 135e50: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* 135e54: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 135e58: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 135e5c: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* 135e60: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* 135e64: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* 135e68: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* 135e6c: mov w20, #3 */
  ARC_W_W(c, 20, UINT64_C(3));
  /* 135e70: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1269364));
  fn2_1b5e68(c);
  /* 135e74: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 135e78: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 135e7c: str w20, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 20));
  /* 135e80: bl #0x1b5d9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1269380));
  fn2_1b5d9c(c);
  /* 135e84: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 135e88: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 135e8c: bl #0x1b5d8c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1269392));
  fn2_1b5d8c(c);
  /* 135e90: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 135e94: add x8, x8, #0x1c8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(456)));
  /* 135e98: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 135e9c: tbz w8, #0, #0x135ed8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_135ed8;
L_135ea0:;
  /* 135ea0: adrp x1, #0x25d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 135ea4: add x1, x1, #0x1bc */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(444)));
  /* 135ea8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 135eac: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1269424));
  fn2_1d2c40(c);
  /* 135eb0: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 135eb4: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 135eb8: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1269436));
  fn2_1d5dc0(c);
  /* 135ebc: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 135ec0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1269444));
  fn2_1d2d24(c);
  /* 135ec4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 135ec8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 135ecc: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 135ed0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 135ed4: ret  */
  return;
L_135ed8:;
  /* 135ed8: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 135edc: add x0, x0, #0x1c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(456)));
  /* 135ee0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1269476));
  fn2_24b710(c);
  /* 135ee4: cbz w0, #0x135ea0 */
  if ((ARC_W_R(c, 0)) == 0) goto L_135ea0;
  /* 135ee8: adrp x20, #0x25d000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 135eec: add x20, x20, #0x1bc */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(444)));
  /* 135ef0: nop  */
  /* nop: no architectural effect here */
  /* 135ef4: adr x1, #0x363e8 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(222184)));
  /* 135ef8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 135efc: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1269504));
  fn2_1b907c(c);
  /* 135f00: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 135f04: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* 135f08: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* 135f0c: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 135f10: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 135f14: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1269528));
  fn2_24b6f0(c);
  /* 135f18: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 135f1c: add x0, x0, #0x1c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(456)));
  /* 135f20: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1269540));
  fn2_24b720(c);
  /* 135f24: b #0x135ea0 */
  goto L_135ea0;
}

void fn2_1370d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077129944));
  /* 1370d8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1370dc: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1370e0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1370e4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1370e8: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1370ec: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1370f0: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 1370f4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1370f8: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* 1370fc: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 137100: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1274116));
  fn2_1b5d1c(c);
  /* 137104: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 137108: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* 13710c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 137110: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 137114: str w9, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* 137118: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 13711c: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 137120: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1274148));
  fn2_1d2c2c(c);
  /* 137124: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 137128: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1274156));
  fn2_1d2c2c(c);
  /* 13712c: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 137130: adrp x8, #0x254000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2441216)));
  /* 137134: add x8, x8, #0x978 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2424)));
  /* 137138: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13713c: mov w1, #4 */
  ARC_W_W(c, 1, UINT64_C(4));
  /* 137140: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* 137144: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 137148: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13714c: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* 137150: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* 137154: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* 137158: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* 13715c: mov w20, #4 */
  ARC_W_W(c, 20, UINT64_C(4));
  /* 137160: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1274212));
  fn2_1b5e68(c);
  /* 137164: str w20, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 20));
  /* 137168: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 13716c: add x8, x8, #0x1c8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(456)));
  /* 137170: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 137174: tbz w8, #0, #0x1371b0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1371b0;
L_137178:;
  /* 137178: adrp x1, #0x25d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 13717c: add x1, x1, #0x1bc */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(444)));
  /* 137180: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 137184: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1274248));
  fn2_1d2c40(c);
  /* 137188: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 13718c: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 137190: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1274260));
  fn2_1d5dc0(c);
  /* 137194: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 137198: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1274268));
  fn2_1d2d24(c);
  /* 13719c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1371a0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1371a4: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1371a8: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1371ac: ret  */
  return;
L_1371b0:;
  /* 1371b0: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1371b4: add x0, x0, #0x1c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(456)));
  /* 1371b8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1274300));
  fn2_24b710(c);
  /* 1371bc: cbz w0, #0x137178 */
  if ((ARC_W_R(c, 0)) == 0) goto L_137178;
  /* 1371c0: adrp x20, #0x25d000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1371c4: add x20, x20, #0x1bc */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(444)));
  /* 1371c8: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 1371cc: add x1, x1, #0x3e8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1000)));
  /* 1371d0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1371d4: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1274328));
  fn2_1b907c(c);
  /* 1371d8: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 1371dc: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* 1371e0: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* 1371e4: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 1371e8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1371ec: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1274352));
  fn2_24b6f0(c);
  /* 1371f0: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1371f4: add x0, x0, #0x1c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(456)));
  /* 1371f8: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1274364));
  fn2_24b720(c);
  /* 1371fc: b #0x137178 */
  goto L_137178;
}

void fn2_138408(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077134856));
  /* 138408: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13840c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 138410: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 138414: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 138418: bl #0x1b6040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1279004));
  fn2_1b6040(c);
  /* 13841c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 138420: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 138424: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 138428: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_139a54(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077140564));
  /* 139a54: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 139a58: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 139a5c: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 139a60: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 139a64: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 139a68: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 139a6c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 139a70: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* 139a74: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* 139a78: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 139a7c: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* 139a80: mov x24, x8 */
  ARC_X_W(c, 24, ARC_X_R(c, 8));
  /* 139a84: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1284744));
  fn2_1bc084(c);
  /* 139a88: ldp x1, x2, [x23, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(96));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 139a8c: add x7, x23, #0x48 */
  ARC_X_W(c, 7, (ARC_X_R(c, 23) + UINT64_C(72)));
  /* 139a90: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 139a94: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* 139a98: mov w4, w20 */
  ARC_W_W(c, 4, ARC_W_R(c, 20));
  /* 139a9c: mov x5, x24 */
  ARC_X_W(c, 5, ARC_X_R(c, 24));
  /* 139aa0: mov x6, x19 */
  ARC_X_W(c, 6, ARC_X_R(c, 19));
  /* 139aa4: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 139aa8: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 139aac: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 139ab0: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 139ab4: b #0x139af8 */
  fn2_139af8(c); return;
}

void fn2_13ae08(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077145608));
  /* 13ae08: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 13ae0c: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13ae10: str x21, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 21));
  /* 13ae14: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13ae18: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 13ae1c: add x0, x8, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 13ae20: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* 13ae24: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 13ae28: str wzr, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 31));
  /* 13ae2c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1289776));
  fn2_1d2c2c(c);
  /* 13ae30: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 13ae34: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1289784));
  fn2_1d2c2c(c);
  /* 13ae38: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 13ae3c: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* 13ae40: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1289796));
  fn2_1ccc74(c);
  /* 13ae44: mov w21, #6 */
  ARC_W_W(c, 21, UINT64_C(6));
  /* 13ae48: cmp w20, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 20), UINT64_C(2));
  /* 13ae4c: str w21, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 21));
  /* 13ae50: b.hi #0x13ae9c */
  if (ARC_COND(c, 8)) goto L_13ae9c;
  /* 13ae54: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 13ae58: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 13ae5c: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 13ae60: str wzr, [sp] */
  arc_st32((c)->sp, ARC_W_R(c, 31));
  /* 13ae64: bl #0xc1814 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1289832));
  fn2_c1814(c);
  /* 13ae68: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 13ae6c: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 13ae70: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 13ae74: bl #0xb4168 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1289848));
  fn2_b4168(c);
  /* 13ae78: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 13ae7c: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 13ae80: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 13ae84: bl #0x134128 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1289864));
  fn2_134128(c);
  /* 13ae88: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13ae8c: ldr x21, [sp, #0x40] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(64))));
  /* 13ae90: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13ae94: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 13ae98: ret  */
  return;
L_13ae9c:;
  /* 13ae9c: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 13aea0: mov x20, sp */
  ARC_X_W(c, 20, (c)->sp);
  /* 13aea4: str wzr, [sp, #0x20] */
  arc_st32(((c)->sp + INT64_C(32)), ARC_W_R(c, 31));
  /* 13aea8: orr x0, x20, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(4)));
  /* 13aeac: stp q0, q0, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 13aeb0: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1289908));
  fn2_1d2c2c(c);
  /* 13aeb4: orr x0, x20, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(12)));
  /* 13aeb8: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1289916));
  fn2_1d2c2c(c);
  /* 13aebc: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 13aec0: str wzr, [sp, #0x14] */
  arc_st32(((c)->sp + INT64_C(20)), ARC_W_R(c, 31));
  /* 13aec4: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1289928));
  fn2_1ccc74(c);
  /* 13aec8: ldr w8, [sp] */
  ARC_W_W(c, 8, arc_ld32((c)->sp));
  /* 13aecc: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* 13aed0: orr x1, x20, #4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) | UINT64_C(4)));
  /* 13aed4: str w21, [sp, #0x20] */
  arc_st32(((c)->sp + INT64_C(32)), ARC_W_R(c, 21));
  /* 13aed8: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 13aedc: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1289952));
  fn2_1d2b98(c);
  /* 13aee0: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 13aee4: orr x1, x20, #0xc */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) | UINT64_C(12)));
  /* 13aee8: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1289964));
  fn2_1d2b98(c);
  /* 13aeec: ldr w8, [sp, #0x14] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(20))));
  /* 13aef0: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 13aef4: add x1, x20, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 13aef8: str w8, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 8));
  /* 13aefc: bl #0x1d0708 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1289984));
  fn2_1d0708(c);
  /* 13af00: ldr w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(32))));
  /* 13af04: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 13af08: str w8, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 8));
  /* 13af0c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1290000));
  fn2_1ccd9c(c);
  /* 13af10: orr x0, x20, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(12)));
  /* 13af14: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1290008));
  fn2_1d2d24(c);
  /* 13af18: orr x0, x20, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(4)));
  /* 13af1c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1290016));
  fn2_1d2d24(c);
  /* 13af20: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13af24: ldr x21, [sp, #0x40] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(64))));
  /* 13af28: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13af2c: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 13af30: ret  */
  return;
}

void fn2_13c300(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077150976));
  /* 13c300: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13c304: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 13c308: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 13c30c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13c310: bl #0x1b6040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1295124));
  fn2_1b6040(c);
  /* 13c314: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13c318: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 13c31c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13c320: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_13d84c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077156428));
  /* 13d84c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13d850: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 13d854: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 13d858: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13d85c: bl #0x1b6040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1300576));
  fn2_1b6040(c);
  /* 13d860: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13d864: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 13d868: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13d86c: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_1445f4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077184500));
  /* 1445f4: sub sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(160)));
  /* 1445f8: stp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1445fc: str x21, [sp, #0x80] */
  arc_st64(((c)->sp + INT64_C(128)), ARC_X_R(c, 21));
  /* 144600: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 144604: add x29, sp, #0x70 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(112)));
  /* 144608: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 14460c: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* 144610: add x1, x1, #0x3ea */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1002)));
  /* 144614: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 144618: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 14461c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328672));
  fn2_1b7d24(c);
  /* 144620: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 144624: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 144628: bl #0x1cd2d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328684));
  fn2_1cd2d8(c);
  /* 14462c: mov w21, w0 */
  ARC_W_W(c, 21, ARC_W_R(c, 0));
  /* 144630: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 144634: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328696));
  fn2_1ccd9c(c);
  /* 144638: tbz w21, #0, #0x144728 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) == 0) goto L_144728;
  /* 14463c: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* 144640: add x1, x1, #0x3ea */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1002)));
  /* 144644: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 144648: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328716));
  fn2_1b7d24(c);
  /* 14464c: sub x8, x29, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 144650: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 144654: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 144658: bl #0x1cef88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328732));
  fn2_1cef88(c);
  /* 14465c: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 144660: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 144664: bl #0x20f224 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328744));
  fn2_20f224(c);
  /* 144668: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 14466c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328752));
  fn2_1ccd9c(c);
  /* 144670: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 144674: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328760));
  fn2_1ccd9c(c);
  /* 144678: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 14467c: bl #0x1bcc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328768));
  fn2_1bcc90(c);
  /* 144680: cmp w0, #0x1b */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(27));
  /* 144684: b.ne #0x1448ec */
  if (ARC_COND(c, 1)) goto L_1448ec;
  /* 144688: add x8, sp, #0x38 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(56)));
  /* 14468c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 144690: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328788));
  fn2_1bccb8(c);
  /* 144694: adrp x1, #0x2a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(172032)));
  /* 144698: add x1, x1, #0x9e9 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2537)));
  /* 14469c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1446a0: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328804));
  fn2_1b7d24(c);
  /* 1446a4: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1446a8: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1446ac: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328816));
  fn2_1bc2f8(c);
  /* 1446b0: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1446b4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328824));
  fn2_1ccd9c(c);
  /* 1446b8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1446bc: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328832));
  fn2_1db4a4(c);
  /* 1446c0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1446c4: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1446c8: bl #0x1bc544 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328844));
  fn2_1bc544(c);
  /* 1446cc: sub x8, x29, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1446d0: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 1446d4: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 1446d8: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 1446dc: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328864));
  fn2_1d9c5c(c);
  /* 1446e0: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1446e4: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1446e8: bl #0x1bccc4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328876));
  fn2_1bccc4(c);
  /* 1446ec: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1446f0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328884));
  fn2_1bc620(c);
  /* 1446f4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1446f8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328892));
  fn2_1bc620(c);
  /* 1446fc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 144700: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328900));
  fn2_1db788(c);
  /* 144704: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 144708: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328908));
  fn2_1bc620(c);
  /* 14470c: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 144710: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328916));
  fn2_1d97fc(c);
  /* 144714: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 144718: bl #0x1bcc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328924));
  fn2_1bcc90(c);
  /* 14471c: cmp w0, #0x1b */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(27));
  /* 144720: b.eq #0x144904 */
  if (ARC_COND(c, 0)) goto L_144904;
  /* 144724: b #0x14493c */
  goto L_14493c;
L_144728:;
  /* 144728: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 14472c: add x1, x1, #0xa9c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2716)));
  /* 144730: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 144734: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328952));
  fn2_1b7d24(c);
  /* 144738: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 14473c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 144740: bl #0x1cd2d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328964));
  fn2_1cd2d8(c);
  /* 144744: mov w21, w0 */
  ARC_W_W(c, 21, ARC_W_R(c, 0));
  /* 144748: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 14474c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328976));
  fn2_1ccd9c(c);
  /* 144750: tbz w21, #0, #0x14498c */
  if (((ARC_W_R(c, 21)) >> 0 & 1) == 0) goto L_14498c;
  /* 144754: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 144758: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328988));
  fn2_1d9740(c);
  /* 14475c: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 144760: add x1, x1, #0xa9c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2716)));
  /* 144764: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 144768: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329004));
  fn2_1b7d24(c);
  /* 14476c: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 144770: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* 144774: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 144778: bl #0x1cef88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329020));
  fn2_1cef88(c);
  /* 14477c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 144780: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 144784: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329032));
  fn2_1bc2f8(c);
  /* 144788: adrp x1, #0x2a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(172032)));
  /* 14478c: add x1, x1, #0xa7c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2684)));
  /* 144790: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 144794: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329048));
  fn2_1b7d24(c);
  /* 144798: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 14479c: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 1447a0: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329060));
  fn2_1bc2f8(c);
  /* 1447a4: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1447a8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329068));
  fn2_1ccd9c(c);
  /* 1447ac: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1447b0: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1447b4: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329080));
  fn2_1bbfa0(c);
  /* 1447b8: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1447bc: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329088));
  fn2_1bcf04(c);
  /* 1447c0: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1447c4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329096));
  fn2_1bc620(c);
  /* 1447c8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1447cc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329104));
  fn2_1bc620(c);
  /* 1447d0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1447d4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329112));
  fn2_1ccd9c(c);
  /* 1447d8: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 1447dc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329120));
  fn2_1ccd9c(c);
  /* 1447e0: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 1447e4: ldr x8, [x8, #0xfa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4008))));
  /* 1447e8: ldr x0, [x8] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 8)));
  /* 1447ec: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1447f0: bl #0xec3a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329140));
  fn2_ec3a4(c);
  /* 1447f4: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1447f8: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1447fc: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329152));
  fn2_1bc2f8(c);
  /* 144800: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 144804: add x1, x1, #0xc42 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3138)));
  /* 144808: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 14480c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329168));
  fn2_1b7d24(c);
  /* 144810: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 144814: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 144818: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329180));
  fn2_1bc2f8(c);
  /* 14481c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 144820: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329188));
  fn2_1ccd9c(c);
  /* 144824: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 144828: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 14482c: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329200));
  fn2_1bbfa0(c);
  /* 144830: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 144834: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329208));
  fn2_1bcf04(c);
  /* 144838: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 14483c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329216));
  fn2_1bc620(c);
  /* 144840: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 144844: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329224));
  fn2_1bc620(c);
  /* 144848: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 14484c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329232));
  fn2_1ccd9c(c);
  /* 144850: adrp x1, #0x30000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(196608)));
  /* 144854: add x1, x1, #0x236 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(566)));
  /* 144858: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 14485c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 144860: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329252));
  fn2_1b8fd4(c);
  /* 144864: adrp x1, #0x27000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(159744)));
  /* 144868: add x1, x1, #0xa7 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(167)));
  /* 14486c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 144870: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 144874: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329272));
  fn2_1b8fd4(c);
  /* 144878: adrp x0, #0x1c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(114688)));
  /* 14487c: add x0, x0, #0x21e */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(542)));
  /* 144880: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 144884: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* 144888: bl #0x1b7d74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329292));
  fn2_1b7d74(c);
  /* 14488c: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 144890: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 144894: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 144898: add x2, x29, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 14489c: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 1448a0: bl #0x149c60 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329316));
  fn2_149c60(c);
  /* 1448a4: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1448a8: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* 1448ac: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329328));
  fn2_1bc84c(c);
  /* 1448b0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1448b4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329336));
  fn2_1bc620(c);
  /* 1448b8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1448bc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329344));
  fn2_1ccd9c(c);
  /* 1448c0: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1448c4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329352));
  fn2_1d2d24(c);
  /* 1448c8: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1448cc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329360));
  fn2_1d2d24(c);
  /* 1448d0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1448d4: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329368));
  fn2_1d97fc(c);
  /* 1448d8: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1448dc: ldr x21, [sp, #0x80] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(128))));
  /* 1448e0: ldp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1448e4: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* 1448e8: ret  */
  return;
L_1448ec:;
  /* 1448ec: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1448f0: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329396));
  fn2_1db4a4(c);
  /* 1448f4: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1448f8: bl #0x1bcc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329404));
  fn2_1bcc90(c);
  /* 1448fc: cmp w0, #0x1b */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(27));
  /* 144900: b.ne #0x14493c */
  if (ARC_COND(c, 1)) goto L_14493c;
L_144904:;
  /* 144904: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 144908: adrp x1, #0x19000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(102400)));
  /* 14490c: add x1, x1, #0xf40 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3904)));
  /* 144910: ldr x8, [x8, #0xfa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4008))));
  /* 144914: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 144918: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 14491c: ldr x20, [x8] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 8)));
  /* 144920: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329444));
  fn2_1b8fd4(c);
  /* 144924: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 144928: sub x2, x29, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 14492c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 144930: bl #0x220a1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329460));
  fn2_220a1c(c);
  /* 144934: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 144938: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329468));
  fn2_1d2d24(c);
L_14493c:;
  /* 14493c: adrp x0, #0x34000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(212992)));
  /* 144940: add x0, x0, #0x4dc */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1244)));
  /* 144944: sub x8, x29, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 144948: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* 14494c: bl #0x1b7d74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329488));
  fn2_1b7d74(c);
  /* 144950: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 144954: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 144958: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* 14495c: bl #0xec684 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329504));
  fn2_ec684(c);
  /* 144960: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 144964: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329512));
  fn2_1ccd9c(c);
  /* 144968: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 14496c: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329520));
  fn2_1db788(c);
  /* 144970: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 144974: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329528));
  fn2_1bc620(c);
  /* 144978: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 14497c: ldr x21, [sp, #0x80] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(128))));
  /* 144980: ldp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 144984: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* 144988: ret  */
  return;
L_14498c:;
  /* 14498c: adrp x1, #0x1c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(114688)));
  /* 144990: add x1, x1, #0x216 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(534)));
  /* 144994: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 144998: bl #0x1b865c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329564));
  fn2_1b865c(c);
  /* 14499c: tbz w0, #0, #0x1449d4 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_1449d4;
  /* 1449a0: adrp x1, #0x30000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(196608)));
  /* 1449a4: add x1, x1, #0x236 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(566)));
  /* 1449a8: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1449ac: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1449b0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329588));
  fn2_1b8fd4(c);
  /* 1449b4: adrp x1, #0x30000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(196608)));
  /* 1449b8: add x1, x1, #0x1f0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(496)));
  /* 1449bc: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1449c0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1449c4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329608));
  fn2_1b8fd4(c);
  /* 1449c8: adrp x0, #0x26000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(155648)));
  /* 1449cc: add x0, x0, #0x87b */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2171)));
  /* 1449d0: b #0x144a60 */
  goto L_144a60;
L_1449d4:;
  /* 1449d4: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* 1449d8: add x1, x1, #0xdee */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3566)));
  /* 1449dc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1449e0: bl #0x1b865c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329636));
  fn2_1b865c(c);
  /* 1449e4: tbz w0, #0, #0x144a1c */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_144a1c;
  /* 1449e8: adrp x1, #0x30000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(196608)));
  /* 1449ec: add x1, x1, #0x236 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(566)));
  /* 1449f0: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1449f4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1449f8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329660));
  fn2_1b8fd4(c);
  /* 1449fc: adrp x1, #0x30000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(196608)));
  /* 144a00: add x1, x1, #0x1f0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(496)));
  /* 144a04: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 144a08: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 144a0c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329680));
  fn2_1b8fd4(c);
  /* 144a10: adrp x0, #0x2e000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(188416)));
  /* 144a14: add x0, x0, #0x2cf */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(719)));
  /* 144a18: b #0x144a60 */
  goto L_144a60;
L_144a1c:;
  /* 144a1c: adrp x1, #0x19000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(102400)));
  /* 144a20: add x1, x1, #0xe03 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3587)));
  /* 144a24: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 144a28: bl #0x1b865c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329708));
  fn2_1b865c(c);
  /* 144a2c: tbz w0, #0, #0x144ac0 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_144ac0;
  /* 144a30: adrp x1, #0x30000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(196608)));
  /* 144a34: add x1, x1, #0x236 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(566)));
  /* 144a38: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 144a3c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 144a40: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329732));
  fn2_1b8fd4(c);
  /* 144a44: adrp x1, #0x30000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(196608)));
  /* 144a48: add x1, x1, #0x1f0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(496)));
  /* 144a4c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 144a50: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 144a54: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329752));
  fn2_1b8fd4(c);
  /* 144a58: adrp x0, #0x23000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(143360)));
  /* 144a5c: add x0, x0, #0xe01 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3585)));
L_144a60:;
  /* 144a60: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 144a64: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* 144a68: bl #0x1b7d74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329772));
  fn2_1b7d74(c);
  /* 144a6c: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 144a70: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 144a74: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 144a78: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 144a7c: bl #0x149e90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329792));
  fn2_149e90(c);
  /* 144a80: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 144a84: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* 144a88: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329804));
  fn2_1bc84c(c);
  /* 144a8c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 144a90: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329812));
  fn2_1bc620(c);
  /* 144a94: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 144a98: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329820));
  fn2_1ccd9c(c);
  /* 144a9c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 144aa0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329828));
  fn2_1d2d24(c);
  /* 144aa4: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 144aa8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329836));
  fn2_1d2d24(c);
  /* 144aac: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 144ab0: ldr x21, [sp, #0x80] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(128))));
  /* 144ab4: ldp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 144ab8: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* 144abc: ret  */
  return;
L_144ac0:;
  /* 144ac0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 144ac4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 144ac8: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1329868));
  fn2_1ccc88(c);
  /* 144acc: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 144ad0: ldr x21, [sp, #0x80] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(128))));
  /* 144ad4: ldp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 144ad8: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* 144adc: ret  */
  return;
}

void fn2_149838(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077205560));
  /* 149838: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 14983c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 149840: str x21, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 21));
  /* 149844: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 149848: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 14984c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 149850: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 149854: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 149858: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 14985c: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1349728));
  fn2_1db4a4(c);
  /* 149860: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 149864: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 149868: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1349740));
  fn2_1bc290(c);
  /* 14986c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 149870: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 149874: bl #0x1db988 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1349752));
  fn2_1db988(c);
  /* 149878: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 14987c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1349760));
  fn2_1bc620(c);
  /* 149880: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 149884: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 149888: bl #0x1db4b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1349772));
  fn2_1db4b8(c);
  /* 14988c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 149890: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 149894: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1349784));
  fn2_1bc290(c);
  /* 149898: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 14989c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1498a0: bl #0x1db988 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1349796));
  fn2_1db988(c);
  /* 1498a4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1498a8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1349804));
  fn2_1bc620(c);
  /* 1498ac: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1498b0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1498b4: bl #0x1db704 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1349816));
  fn2_1db704(c);
  /* 1498b8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1498bc: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1349824));
  fn2_1db788(c);
  /* 1498c0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1498c4: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1349832));
  fn2_1db788(c);
  /* 1498c8: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1498cc: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* 1498d0: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1498d4: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1498d8: ret  */
  return;
}

void fn2_14b59c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077213084));
  /* 14b59c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 14b5a0: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 14b5a4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 14b5a8: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 14b5ac: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 14b5b0: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 14b5b4: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* 14b5b8: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 14b5bc: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1357248));
  fn2_1b5d1c(c);
  /* 14b5c0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 14b5c4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 14b5c8: bl #0x1afdf8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1357260));
  fn2_1afdf8(c);
  /* 14b5cc: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 14b5d0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 14b5d4: ldr x8, [x8, #0x610] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1552))));
  /* 14b5d8: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 14b5dc: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 14b5e0: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 14b5e4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 14b5e8: ret  */
  return;
}

void fn2_1516ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077237996));
  /* 1516ec: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1516f0: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1516f4: str x19, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 19));
  /* 1516f8: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 1516fc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 151700: add x0, x0, #0xc8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(200)));
  /* 151704: bl #0x1d983c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1382152));
  fn2_1d983c(c);
  /* 151708: tbnz w0, #0, #0x151778 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_151778;
  /* 15170c: adrp x1, #0x28000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(163840)));
  /* 151710: add x1, x1, #0x7aa */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1962)));
  /* 151714: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 151718: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1382172));
  fn2_1b7d24(c);
  /* 15171c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 151720: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 151724: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1382184));
  fn2_1bc2f8(c);
  /* 151728: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 15172c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1382192));
  fn2_1ccd9c(c);
  /* 151730: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 151734: add x1, x1, #0x8dc */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2268)));
  /* 151738: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 15173c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1382208));
  fn2_1b7d24(c);
  /* 151740: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 151744: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 151748: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1382220));
  fn2_1bc2f8(c);
  /* 15174c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 151750: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1382228));
  fn2_1ccd9c(c);
  /* 151754: add x0, x19, #0xc8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(200)));
  /* 151758: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 15175c: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1382240));
  fn2_1bbfa0(c);
  /* 151760: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 151764: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1382248));
  fn2_1bcf04(c);
  /* 151768: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 15176c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1382256));
  fn2_1bc620(c);
  /* 151770: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 151774: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1382264));
  fn2_1bc620(c);
L_151778:;
  /* 151778: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 15177c: adrp x0, #0x34000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(212992)));
  /* 151780: add x0, x0, #0x541 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1345)));
  /* 151784: strb w8, [x19, #0x370] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(880)), ARC_W_R(c, 8));
  /* 151788: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* 15178c: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* 151790: bl #0x1b7d74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1382292));
  fn2_1b7d74(c);
  /* 151794: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 151798: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 15179c: bl #0x14c268 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1382304));
  fn2_14c268(c);
  /* 1517a0: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1517a4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1382312));
  fn2_1ccd9c(c);
  /* 1517a8: adrp x0, #0x23000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(143360)));
  /* 1517ac: add x0, x0, #0x249 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(585)));
  /* 1517b0: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* 1517b4: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* 1517b8: bl #0x1b7d74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1382332));
  fn2_1b7d74(c);
  /* 1517bc: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 1517c0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1517c4: bl #0xfe7b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1382344));
  fn2_fe7b8(c);
  /* 1517c8: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1517cc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1382352));
  fn2_1ccd9c(c);
  /* 1517d0: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1517d4: ldr x19, [sp, #0x40] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(64))));
  /* 1517d8: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1517dc: ret  */
  return;
}

void fn2_15743c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077261884));
  /* 15743c: sub sp, sp, #0x120 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(288)));
  /* 157440: str d8, [sp, #0xb0] */
  arc_st64(((c)->sp + INT64_C(176)), (c)->q[8].u64[0]);
  /* 157444: stp x29, x30, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 157448: stp x28, x27, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 15744c: stp x26, x25, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 157450: stp x24, x23, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 157454: stp x22, x21, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 157458: stp x20, x19, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 15745c: add x29, sp, #0xc0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(192)));
  /* 157460: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 157464: fmov d8, d0 */
  arc_du_w(c, 8, (uint64_t)(ARC_DU_R(c, 0)));
  /* 157468: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 15746c: ldr x8, [x8, #0xfa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4008))));
  /* 157470: ldr x20, [x8] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 8)));
  /* 157474: bl #0x13f928 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406072));
  fn2_13f928(c);
  /* 157478: fmov d0, d8 */
  arc_du_w(c, 0, (uint64_t)(ARC_DU_R(c, 8)));
  /* 15747c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 157480: bl #0x13f63c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406084));
  fn2_13f63c(c);
  /* 157484: ldrb w8, [x19, #0x89] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(137))));
  /* 157488: cbz w8, #0x1574f4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1574f4;
  /* 15748c: fmov d0, d8 */
  arc_du_w(c, 0, (uint64_t)(ARC_DU_R(c, 8)));
  /* 157490: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 157494: bl #0x13da70 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406104));
  fn2_13da70(c);
L_157498:;
  /* 157498: ldrb w9, [x19, #0x190] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 19) + INT64_C(400))));
  /* 15749c: ldrb w8, [x19, #0x69] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(105))));
  /* 1574a0: cbz w9, #0x157554 */
  if ((ARC_W_R(c, 9)) == 0) goto L_157554;
  /* 1574a4: cbz w8, #0x157554 */
  if ((ARC_W_R(c, 8)) == 0) goto L_157554;
  /* 1574a8: ldrb w8, [x19, #0x68] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(104))));
  /* 1574ac: cbz w8, #0x15754c */
  if ((ARC_W_R(c, 8)) == 0) goto L_15754c;
  /* 1574b0: ldrb w9, [x19, #0x288] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 19) + INT64_C(648))));
  /* 1574b4: cbnz w9, #0x15754c */
  if ((ARC_W_R(c, 9)) != 0) goto L_15754c;
  /* 1574b8: ldr d0, [x19, #0x198] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(408))));
  /* 1574bc: mov x8, #0x800000000000 */
  ARC_X_W(c, 8, UINT64_C(140737488355328));
  /* 1574c0: movk x8, #0x4066, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(4640396466051874816)));
  /* 1574c4: fadd d0, d0, d8 */
  arc_d_w(c, 0, (double)(arc_fadd64(ARC_D_R(c, 0), ARC_D_R(c, 8))));
  /* 1574c8: fmov d1, x8 */
  arc_du_w(c, 1, (uint64_t)(ARC_X_R(c, 8)));
  /* 1574cc: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* 1574d0: str d0, [x19, #0x198] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(408)), (c)->q[0].u64[0]);
  /* 1574d4: b.le #0x157960 */
  if (ARC_COND(c, 13)) goto L_157960;
  /* 1574d8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1574dc: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 1574e0: bl #0x163490 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406180));
  fn2_163490(c);
  /* 1574e4: ldrb w8, [x19, #0x69] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(105))));
  /* 1574e8: ldrb w9, [x19, #0x68] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 19) + INT64_C(104))));
  /* 1574ec: cbnz w9, #0x15755c */
  if ((ARC_W_R(c, 9)) != 0) goto L_15755c;
  /* 1574f0: b #0x15797c */
  goto L_15797c;
L_1574f4:;
  /* 1574f4: ldrb w8, [x19, #0x8a] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(138))));
  /* 1574f8: cbz w8, #0x1578c4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1578c4;
  /* 1574fc: ldr d0, [x19, #0xb8] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(184))));
  /* 157500: movi d1, #0000000000000000 */
  arc_v_clear(c, 1);
  /* 157504: ldrb w8, [x19, #0x288] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(648))));
  /* 157508: fmov d2, #20.00000000 */
  arc_d_w(c, 2, (double)(20.0));
  /* 15750c: fadd d0, d0, d8 */
  arc_d_w(c, 0, (double)(arc_fadd64(ARC_D_R(c, 0), ARC_D_R(c, 8))));
  /* 157510: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 157514: mov x8, #0x800000000000 */
  ARC_X_W(c, 8, UINT64_C(140737488355328));
  /* 157518: movk x8, #0x4066, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(4640396466051874816)));
  /* 15751c: fcsel d0, d0, d1, eq */
  arc_d_w(c, 0, (double)((ARC_COND(c, 0) ? ARC_D_R(c, 0) : ARC_D_R(c, 1))));
  /* 157520: ldr d1, [x19, #0x398] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(920))));
  /* 157524: fadd d1, d1, d8 */
  arc_d_w(c, 1, (double)(arc_fadd64(ARC_D_R(c, 1), ARC_D_R(c, 8))));
  /* 157528: fcmp d0, d2 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 2)));
  /* 15752c: fmov d2, x8 */
  arc_du_w(c, 2, (uint64_t)(ARC_X_R(c, 8)));
  /* 157530: str d0, [x19, #0xb8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(184)), (c)->q[0].u64[0]);
  /* 157534: fccmp d1, d2, #0, le */
  if (ARC_COND(c, 13)) { arc_fcmp(c, (double)(ARC_D_R(c, 1)), (double)(ARC_D_R(c, 2))); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* 157538: str d1, [x19, #0x398] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(920)), (c)->q[1].u64[0]);
  /* 15753c: b.le #0x157498 */
  if (ARC_COND(c, 13)) goto L_157498;
  /* 157540: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 157544: bl #0x13d870 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406280));
  fn2_13d870(c);
  /* 157548: b #0x157498 */
  goto L_157498;
L_15754c:;
  /* 15754c: cbz w8, #0x157a90 */
  if ((ARC_W_R(c, 8)) == 0) goto L_157a90;
  /* 157550: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
L_157554:;
  /* 157554: ldrb w9, [x19, #0x68] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 19) + INT64_C(104))));
  /* 157558: cbz w9, #0x15797c */
  if ((ARC_W_R(c, 9)) == 0) goto L_15797c;
L_15755c:;
  /* 15755c: cbz w8, #0x15797c */
  if ((ARC_W_R(c, 8)) == 0) goto L_15797c;
  /* 157560: ldrb w8, [x19, #0x148] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(328))));
  /* 157564: cbnz w8, #0x15797c */
  if ((ARC_W_R(c, 8)) != 0) goto L_15797c;
  /* 157568: ldr d0, [x19, #0x358] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(856))));
  /* 15756c: fcmp d0, #0.0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(0.0));
  /* 157570: b.lt #0x15797c */
  if (ARC_COND(c, 11)) goto L_15797c;
  /* 157574: fadd d0, d0, d8 */
  arc_d_w(c, 0, (double)(arc_fadd64(ARC_D_R(c, 0), ARC_D_R(c, 8))));
  /* 157578: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 15757c: str d0, [x19, #0x358] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(856)), (c)->q[0].u64[0]);
  /* 157580: fmov d0, d8 */
  arc_du_w(c, 0, (uint64_t)(ARC_DU_R(c, 8)));
  /* 157584: bl #0x148408 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406344));
  fn2_148408(c);
  /* 157588: mov x8, #0x404e000000000000 */
  ARC_X_W(c, 8, UINT64_C(4633641066610819072));
  /* 15758c: ldr d0, [x19, #0x358] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(856))));
  /* 157590: fmov d1, x8 */
  arc_du_w(c, 1, (uint64_t)(ARC_X_R(c, 8)));
  /* 157594: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* 157598: b.le #0x15797c */
  if (ARC_COND(c, 13)) goto L_15797c;
  /* 15759c: add x0, x19, #0x6a */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(106)));
  /* 1575a0: bl #0x1db794 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406372));
  fn2_1db794(c);
  /* 1575a4: cmp x0, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(2));
  /* 1575a8: b.lt #0x157970 */
  if (ARC_COND(c, 11)) goto L_157970;
  /* 1575ac: adrp x21, #0x34000 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(212992)));
  /* 1575b0: add x21, x21, #0xfb6 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(4022)));
  /* 1575b4: adrp x22, #0x26000 */
  ARC_X_W(c, 22, (arc_image_bases[2] + UINT64_C(155648)));
  /* 1575b8: add x22, x22, #0x6cc */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(1740)));
  /* 1575bc: adrp x24, #0x20000 */
  ARC_X_W(c, 24, (arc_image_bases[2] + UINT64_C(131072)));
  /* 1575c0: add x24, x24, #0x2a5 */
  ARC_X_W(c, 24, (ARC_X_R(c, 24) + UINT64_C(677)));
  /* 1575c4: adrp x25, #0x1f000 */
  ARC_X_W(c, 25, (arc_image_bases[2] + UINT64_C(126976)));
  /* 1575c8: add x25, x25, #0x90c */
  ARC_X_W(c, 25, (ARC_X_R(c, 25) + UINT64_C(2316)));
  /* 1575cc: adrp x26, #0x20000 */
  ARC_X_W(c, 26, (arc_image_bases[2] + UINT64_C(131072)));
  /* 1575d0: add x26, x26, #0x2e */
  ARC_X_W(c, 26, (ARC_X_R(c, 26) + UINT64_C(46)));
  /* 1575d4: mov w27, #1 */
  ARC_W_W(c, 27, UINT64_C(1));
  /* 1575d8: adrp x28, #0x2b000 */
  ARC_X_W(c, 28, (arc_image_bases[2] + UINT64_C(176128)));
  /* 1575dc: add x28, x28, #0x75a */
  ARC_X_W(c, 28, (ARC_X_R(c, 28) + UINT64_C(1882)));
  /* 1575e0: b #0x157610 */
  goto L_157610;
L_1575e4:;
  /* 1575e4: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* 1575e8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406444));
  fn2_1bc620(c);
  /* 1575ec: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 1575f0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406452));
  fn2_1bc620(c);
L_1575f4:;
  /* 1575f4: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1575f8: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406460));
  fn2_1d97fc(c);
  /* 1575fc: add x0, x19, #0x6a */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(106)));
  /* 157600: add x27, x27, #1 */
  ARC_X_W(c, 27, (ARC_X_R(c, 27) + UINT64_C(1)));
  /* 157604: bl #0x1db794 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406472));
  fn2_1db794(c);
  /* 157608: cmp x27, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 27), ARC_X_R(c, 0));
  /* 15760c: b.ge #0x157970 */
  if (ARC_COND(c, 10)) goto L_157970;
L_157610:;
  /* 157610: add x0, x19, #0x6a */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(106)));
  /* 157614: mov x1, x27 */
  ARC_X_W(c, 1, ARC_X_R(c, 27));
  /* 157618: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406492));
  fn2_1bbf48(c);
  /* 15761c: sub x8, x29, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 157620: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406500));
  fn2_1bccb8(c);
  /* 157624: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 157628: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 15762c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406512));
  fn2_1b7d24(c);
  /* 157630: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 157634: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* 157638: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406524));
  fn2_1bc2f8(c);
  /* 15763c: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 157640: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406532));
  fn2_1ccd9c(c);
  /* 157644: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 157648: add x1, sp, #0x48 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(72)));
  /* 15764c: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406544));
  fn2_1bbfa0(c);
  /* 157650: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406548));
  fn2_1bc668(c);
  /* 157654: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 157658: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* 15765c: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406560));
  fn2_1bc290(c);
  /* 157660: add x0, x19, #0x289 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(649)));
  /* 157664: add x1, sp, #0x60 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(96)));
  /* 157668: bl #0x1d998c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406572));
  fn2_1d998c(c);
  /* 15766c: tbnz w0, #0, #0x1575e4 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_1575e4;
  /* 157670: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 157674: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 157678: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406588));
  fn2_1b7d24(c);
  /* 15767c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 157680: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* 157684: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406600));
  fn2_1bc2f8(c);
  /* 157688: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 15768c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406608));
  fn2_1ccd9c(c);
  /* 157690: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 157694: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 157698: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406620));
  fn2_1bc25c(c);
  /* 15769c: add x8, sp, #0x30 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(48)));
  /* 1576a0: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1576a4: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 1576a8: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 1576ac: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406640));
  fn2_1d9c5c(c);
  /* 1576b0: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 1576b4: bl #0x1bc630 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406648));
  fn2_1bc630(c);
  /* 1576b8: mov w23, w0 */
  ARC_W_W(c, 23, ARC_W_R(c, 0));
  /* 1576bc: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 1576c0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406660));
  fn2_1bc620(c);
  /* 1576c4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1576c8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406668));
  fn2_1bc620(c);
  /* 1576cc: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1576d0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406676));
  fn2_1bc620(c);
  /* 1576d4: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* 1576d8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406684));
  fn2_1bc620(c);
  /* 1576dc: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 1576e0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406692));
  fn2_1bc620(c);
  /* 1576e4: tbnz w23, #0, #0x1575f4 */
  if (((ARC_W_R(c, 23)) >> 0 & 1) != 0) goto L_1575f4;
  /* 1576e8: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* 1576ec: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 1576f0: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406708));
  fn2_1bc25c(c);
  /* 1576f4: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 1576f8: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 1576fc: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406720));
  fn2_1b7d24(c);
  /* 157700: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 157704: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* 157708: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406732));
  fn2_1bc2f8(c);
  /* 15770c: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 157710: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406740));
  fn2_1ccd9c(c);
  /* 157714: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 157718: add x1, sp, #0x48 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(72)));
  /* 15771c: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406752));
  fn2_1bbfa0(c);
  /* 157720: add x1, sp, #0x60 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(96)));
  /* 157724: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406760));
  fn2_1bcf04(c);
  /* 157728: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 15772c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406768));
  fn2_1bc620(c);
  /* 157730: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* 157734: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406776));
  fn2_1bc620(c);
  /* 157738: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 15773c: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406784));
  fn2_1d9740(c);
  /* 157740: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 157744: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* 157748: add x1, x1, #0x3e7 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(999)));
  /* 15774c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406800));
  fn2_1b7d24(c);
  /* 157750: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* 157754: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 157758: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406812));
  fn2_1bc2f8(c);
  /* 15775c: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 157760: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 157764: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406824));
  fn2_1b7d24(c);
  /* 157768: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 15776c: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* 157770: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406836));
  fn2_1bc2f8(c);
  /* 157774: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 157778: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406844));
  fn2_1ccd9c(c);
  /* 15777c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 157780: add x1, sp, #0x48 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(72)));
  /* 157784: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406856));
  fn2_1bbfa0(c);
  /* 157788: add x1, sp, #0x60 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(96)));
  /* 15778c: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406864));
  fn2_1bcf04(c);
  /* 157790: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 157794: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406872));
  fn2_1bc620(c);
  /* 157798: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* 15779c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406880));
  fn2_1bc620(c);
  /* 1577a0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1577a4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406888));
  fn2_1ccd9c(c);
  /* 1577a8: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* 1577ac: add x1, x27, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 27) + UINT64_C(1)));
  /* 1577b0: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406900));
  fn2_1bc290(c);
  /* 1577b4: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 1577b8: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 1577bc: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406912));
  fn2_1b7d24(c);
  /* 1577c0: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 1577c4: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* 1577c8: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406924));
  fn2_1bc2f8(c);
  /* 1577cc: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 1577d0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406932));
  fn2_1ccd9c(c);
  /* 1577d4: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1577d8: add x1, sp, #0x48 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(72)));
  /* 1577dc: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406944));
  fn2_1bbfa0(c);
  /* 1577e0: add x1, sp, #0x60 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(96)));
  /* 1577e4: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406952));
  fn2_1bcf04(c);
  /* 1577e8: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 1577ec: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406960));
  fn2_1bc620(c);
  /* 1577f0: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* 1577f4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406968));
  fn2_1bc620(c);
  /* 1577f8: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* 1577fc: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* 157800: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406980));
  fn2_1bc290(c);
  /* 157804: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 157808: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 15780c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406992));
  fn2_1b7d24(c);
  /* 157810: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 157814: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* 157818: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407004));
  fn2_1bc2f8(c);
  /* 15781c: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 157820: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407012));
  fn2_1ccd9c(c);
  /* 157824: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 157828: add x1, sp, #0x48 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(72)));
  /* 15782c: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407024));
  fn2_1bbfa0(c);
  /* 157830: add x1, sp, #0x60 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(96)));
  /* 157834: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407032));
  fn2_1bcf04(c);
  /* 157838: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 15783c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407040));
  fn2_1bc620(c);
  /* 157840: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* 157844: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407048));
  fn2_1bc620(c);
  /* 157848: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* 15784c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 157850: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407060));
  fn2_1bc290(c);
  /* 157854: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 157858: mov x1, x28 */
  ARC_X_W(c, 1, ARC_X_R(c, 28));
  /* 15785c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407072));
  fn2_1b7d24(c);
  /* 157860: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 157864: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* 157868: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407084));
  fn2_1bc2f8(c);
  /* 15786c: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 157870: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407092));
  fn2_1ccd9c(c);
  /* 157874: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 157878: add x1, sp, #0x48 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(72)));
  /* 15787c: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407104));
  fn2_1bbfa0(c);
  /* 157880: add x1, sp, #0x60 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(96)));
  /* 157884: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407112));
  fn2_1bcf04(c);
  /* 157888: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 15788c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407120));
  fn2_1bc620(c);
  /* 157890: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* 157894: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407128));
  fn2_1bc620(c);
  /* 157898: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* 15789c: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 1578a0: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407140));
  fn2_1bc530(c);
  /* 1578a4: add x0, x19, #0x220 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(544)));
  /* 1578a8: add x1, sp, #0x60 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(96)));
  /* 1578ac: bl #0x1db988 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407152));
  fn2_1db988(c);
  /* 1578b0: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* 1578b4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407160));
  fn2_1bc620(c);
  /* 1578b8: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1578bc: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407168));
  fn2_1d97fc(c);
  /* 1578c0: b #0x1575f4 */
  goto L_1575f4;
L_1578c4:;
  /* 1578c4: ldrb w8, [x19, #0x69] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(105))));
  /* 1578c8: cbz w8, #0x157498 */
  if ((ARC_W_R(c, 8)) == 0) goto L_157498;
  /* 1578cc: ldrb w8, [x19, #0x148] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(328))));
  /* 1578d0: cbz w8, #0x157498 */
  if ((ARC_W_R(c, 8)) == 0) goto L_157498;
  /* 1578d4: ldrb w8, [x19, #0x68] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(104))));
  /* 1578d8: cbnz w8, #0x157498 */
  if ((ARC_W_R(c, 8)) != 0) goto L_157498;
  /* 1578dc: add x0, x19, #0xc8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(200)));
  /* 1578e0: bl #0x1d983c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407204));
  fn2_1d983c(c);
  /* 1578e4: tbnz w0, #0, #0x157498 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_157498;
  /* 1578e8: ldr d0, [x19, #0xc0] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(192))));
  /* 1578ec: mov x8, #0x404e000000000000 */
  ARC_X_W(c, 8, UINT64_C(4633641066610819072));
  /* 1578f0: fmov d1, x8 */
  arc_du_w(c, 1, (uint64_t)(ARC_X_R(c, 8)));
  /* 1578f4: fadd d0, d0, d8 */
  arc_d_w(c, 0, (double)(arc_fadd64(ARC_D_R(c, 0), ARC_D_R(c, 8))));
  /* 1578f8: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* 1578fc: str d0, [x19, #0xc0] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(192)), (c)->q[0].u64[0]);
  /* 157900: b.le #0x157498 */
  if (ARC_COND(c, 13)) goto L_157498;
  /* 157904: fmov d1, #1.00000000 */
  arc_d_w(c, 1, (double)(1.0));
  /* 157908: ldr d0, [x19, #0x378] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(888))));
  /* 15790c: str xzr, [x19, #0xc0] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(192)), ARC_X_R(c, 31));
  /* 157910: bl #0x246f74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407252));
  fn2_246f74(c);
  /* 157914: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* 157918: bl #0x1bc2c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407260));
  fn2_1bc2c4(c);
  /* 15791c: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* 157920: add x1, x1, #0x769 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1897)));
  /* 157924: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 157928: bl #0xda8a8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407276));
  fn2_da8a8(c);
  /* 15792c: add x0, x19, #0xc8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(200)));
  /* 157930: add x1, sp, #0x48 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(72)));
  /* 157934: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407288));
  fn2_1bbfa0(c);
  /* 157938: add x1, sp, #0x60 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(96)));
  /* 15793c: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407296));
  fn2_1bcf04(c);
  /* 157940: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 157944: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407304));
  fn2_1bc620(c);
  /* 157948: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* 15794c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407312));
  fn2_1bc620(c);
  /* 157950: add x1, x19, #0xc8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(200)));
  /* 157954: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 157958: bl #0xecb5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407324));
  fn2_ecb5c(c);
  /* 15795c: b #0x157498 */
  goto L_157498;
L_157960:;
  /* 157960: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 157964: ldrb w9, [x19, #0x68] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 19) + INT64_C(104))));
  /* 157968: cbnz w9, #0x15755c */
  if ((ARC_W_R(c, 9)) != 0) goto L_15755c;
  /* 15796c: b #0x15797c */
  goto L_15797c;
L_157970:;
  /* 157970: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 157974: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* 157978: bl #0x146930 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407356));
  fn2_146930(c);
L_15797c:;
  /* 15797c: ldr d0, [x19, #0x1d8] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(472))));
  /* 157980: fcmp d0, #0.0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(0.0));
  /* 157984: b.lt #0x1579d8 */
  if (ARC_COND(c, 11)) goto L_1579d8;
  /* 157988: fsub d0, d0, d8 */
  arc_d_w(c, 0, (double)(arc_fsub64(ARC_D_R(c, 0), ARC_D_R(c, 8))));
  /* 15798c: fcmp d0, #0.0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(0.0));
  /* 157990: str d0, [x19, #0x1d8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(472)), (c)->q[0].u64[0]);
  /* 157994: b.pl #0x1579d8 */
  if (ARC_COND(c, 5)) goto L_1579d8;
  /* 157998: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 15799c: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1579a0: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 1579a4: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1579a8: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 1579ac: bl #0x14d1a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407408));
  fn2_14d1a4(c);
  /* 1579b0: adrp x0, #0x25000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(151552)));
  /* 1579b4: add x0, x0, #0xef0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3824)));
  /* 1579b8: add x8, sp, #0x60 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(96)));
  /* 1579bc: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* 1579c0: bl #0x1b7d74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407428));
  fn2_1b7d74(c);
  /* 1579c4: add x1, sp, #0x60 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(96)));
  /* 1579c8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1579cc: bl #0x14c268 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407440));
  fn2_14c268(c);
  /* 1579d0: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* 1579d4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407448));
  fn2_1ccd9c(c);
L_1579d8:;
  /* 1579d8: ldr d0, [x19, #0x200] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(512))));
  /* 1579dc: fcmp d0, #0.0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(0.0));
  /* 1579e0: b.lt #0x157a18 */
  if (ARC_COND(c, 11)) goto L_157a18;
  /* 1579e4: ldrb w8, [x19, #0x68] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(104))));
  /* 1579e8: cbz w8, #0x157a18 */
  if ((ARC_W_R(c, 8)) == 0) goto L_157a18;
  /* 1579ec: ldrb w8, [x19, #0x69] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(105))));
  /* 1579f0: cbz w8, #0x157a18 */
  if ((ARC_W_R(c, 8)) == 0) goto L_157a18;
  /* 1579f4: fsub d0, d0, d8 */
  arc_d_w(c, 0, (double)(arc_fsub64(ARC_D_R(c, 0), ARC_D_R(c, 8))));
  /* 1579f8: fcmp d0, #0.0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(0.0));
  /* 1579fc: str d0, [x19, #0x200] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(512)), (c)->q[0].u64[0]);
  /* 157a00: b.pl #0x157a18 */
  if (ARC_COND(c, 5)) goto L_157a18;
  /* 157a04: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 157a08: bl #0x14cf9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407500));
  fn2_14cf9c(c);
  /* 157a0c: tbz w0, #0, #0x157a18 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_157a18;
  /* 157a10: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 157a14: bl #0x14f6d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407512));
  fn2_14f6d8(c);
L_157a18:;
  /* 157a18: ldrb w8, [x19, #0x69] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(105))));
  /* 157a1c: cbz w8, #0x157bb4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_157bb4;
  /* 157a20: ldrb w8, [x19, #0x148] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(328))));
  /* 157a24: cbz w8, #0x157bb4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_157bb4;
  /* 157a28: ldrb w8, [x19, #0x68] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(104))));
  /* 157a2c: cbz w8, #0x157a64 */
  if ((ARC_W_R(c, 8)) == 0) goto L_157a64;
  /* 157a30: ldr d0, [x20, #0x28] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(40))));
  /* 157a34: fmul d8, d0, d8 */
  arc_d_w(c, 8, (double)(arc_fmul64(ARC_D_R(c, 0), ARC_D_R(c, 8))));
L_157a38:;
  /* 157a38: fmov d0, d8 */
  arc_du_w(c, 0, (uint64_t)(ARC_DU_R(c, 8)));
  /* 157a3c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 157a40: bl #0x157bd8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407556));
  fn2_157bd8(c);
  /* 157a44: ldr d0, [x19, #0x2d0] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(720))));
  /* 157a48: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 157a4c: scvtf d0, d0 */
  arc_d_w(c, 0, (double)(((int64_t)(ARC_DU_R(c, 0)))));
  /* 157a50: fmul d0, d8, d0 */
  arc_d_w(c, 0, (double)(arc_fmul64(ARC_D_R(c, 8), ARC_D_R(c, 0))));
  /* 157a54: bl #0x158248 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407576));
  fn2_158248(c);
  /* 157a58: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 157a5c: bl #0x158548 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407584));
  fn2_158548(c);
  /* 157a60: b #0x157b40 */
  goto L_157b40;
L_157a64:;
  /* 157a64: ldr d0, [x19, #0x180] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(384))));
  /* 157a68: mov x8, #0x3333333333333333 */
  ARC_X_W(c, 8, UINT64_C(3689348814741910323));
  /* 157a6c: movk x8, #0x3fd3, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(4599019644475408384)));
  /* 157a70: fadd d0, d0, d8 */
  arc_d_w(c, 0, (double)(arc_fadd64(ARC_D_R(c, 0), ARC_D_R(c, 8))));
  /* 157a74: fmov d1, x8 */
  arc_du_w(c, 1, (uint64_t)(ARC_X_R(c, 8)));
  /* 157a78: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* 157a7c: str d0, [x19, #0x180] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(384)), (c)->q[0].u64[0]);
  /* 157a80: b.ge #0x157aa4 */
  if (ARC_COND(c, 10)) goto L_157aa4;
  /* 157a84: ldr d0, [x20, #0x28] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(40))));
  /* 157a88: fmul d8, d0, d8 */
  arc_d_w(c, 8, (double)(arc_fmul64(ARC_D_R(c, 0), ARC_D_R(c, 8))));
  /* 157a8c: b #0x157b40 */
  goto L_157b40;
L_157a90:;
  /* 157a90: ldr d0, [x19, #0x198] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(408))));
  /* 157a94: str xzr, [x19, #0x130] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(304)), ARC_X_R(c, 31));
  /* 157a98: fadd d0, d0, d8 */
  arc_d_w(c, 0, (double)(arc_fadd64(ARC_D_R(c, 0), ARC_D_R(c, 8))));
  /* 157a9c: str d0, [x19, #0x198] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(408)), (c)->q[0].u64[0]);
  /* 157aa0: b #0x157bb4 */
  goto L_157bb4;
L_157aa4:;
  /* 157aa4: adrp x1, #0x24000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(147456)));
  /* 157aa8: add x1, x1, #0x9ae */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2478)));
  /* 157aac: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 157ab0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 157ab4: str xzr, [x19, #0x180] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(384)), ARC_X_R(c, 31));
  /* 157ab8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407676));
  fn2_1b8fd4(c);
  /* 157abc: ldp x8, x9, [x19, #0x110] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(272));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 157ac0: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* 157ac4: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 157ac8: add x24, sp, #0x60 */
  ARC_X_W(c, 24, ((c)->sp + UINT64_C(96)));
  /* 157acc: sub x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* 157ad0: bic x21, x8, x8, asr #63 */
  ARC_X_W(c, 21, (ARC_X_R(c, 8) & (~((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> 63)))));
  /* 157ad4: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407704));
  fn2_1bc290(c);
  /* 157ad8: add x22, x24, #0x18 */
  ARC_X_W(c, 22, (ARC_X_R(c, 24) + UINT64_C(24)));
  /* 157adc: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* 157ae0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 157ae4: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407720));
  fn2_1bc44c(c);
  /* 157ae8: add x23, x24, #0x30 */
  ARC_X_W(c, 23, (ARC_X_R(c, 24) + UINT64_C(48)));
  /* 157aec: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 157af0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 157af4: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407736));
  fn2_1bc290(c);
  /* 157af8: add x1, sp, #0x48 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(72)));
  /* 157afc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 157b00: mov w2, #3 */
  ARC_W_W(c, 2, UINT64_C(3));
  /* 157b04: stp x24, x22, [sp, #0x48] */
  { const uint64_t _pa = ((c)->sp + INT64_C(72));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* 157b08: str x23, [sp, #0x58] */
  arc_st64(((c)->sp + INT64_C(88)), ARC_X_R(c, 23));
  /* 157b0c: bl #0x219208 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407760));
  fn2_219208(c);
  /* 157b10: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 157b14: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407768));
  fn2_1bc620(c);
  /* 157b18: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 157b1c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407776));
  fn2_1bc620(c);
  /* 157b20: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* 157b24: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407784));
  fn2_1bc620(c);
  /* 157b28: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 157b2c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407792));
  fn2_1d2d24(c);
  /* 157b30: ldr d0, [x20, #0x28] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(40))));
  /* 157b34: ldrb w8, [x19, #0x68] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(104))));
  /* 157b38: fmul d8, d0, d8 */
  arc_d_w(c, 8, (double)(arc_fmul64(ARC_D_R(c, 0), ARC_D_R(c, 8))));
  /* 157b3c: cbnz w8, #0x157a38 */
  if ((ARC_W_R(c, 8)) != 0) goto L_157a38;
L_157b40:;
  /* 157b40: ldrb w8, [x19, #0x288] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(648))));
  /* 157b44: ldrb w9, [x19, #0x8a] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 19) + INT64_C(138))));
  /* 157b48: orr w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 9)));
  /* 157b4c: cbnz w8, #0x157bb4 */
  if ((ARC_W_R(c, 8)) != 0) goto L_157bb4;
  /* 157b50: ldr d0, [x19, #0x2d0] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(720))));
  /* 157b54: fmov d1, d8 */
  arc_du_w(c, 1, (uint64_t)(ARC_DU_R(c, 8)));
  /* 157b58: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 157b5c: scvtf d0, d0 */
  arc_d_w(c, 0, (double)(((int64_t)(ARC_DU_R(c, 0)))));
  /* 157b60: fmul d0, d8, d0 */
  arc_d_w(c, 0, (double)(arc_fmul64(ARC_D_R(c, 8), ARC_D_R(c, 0))));
  /* 157b64: bl #0x158a54 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407848));
  fn2_158a54(c);
  /* 157b68: ldrb w8, [x19, #0x68] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(104))));
  /* 157b6c: tbnz w8, #0, #0x157bb4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_157bb4;
  /* 157b70: ldrb w8, [x19, #0x128] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(296))));
  /* 157b74: cbz w8, #0x157bb4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_157bb4;
  /* 157b78: fmov d0, #15.00000000 */
  arc_d_w(c, 0, (double)(15.0));
  /* 157b7c: ldr d1, [x19, #0x130] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(304))));
  /* 157b80: fcmp d1, d0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 1)), (double)(ARC_D_R(c, 0)));
  /* 157b84: b.le #0x157bb4 */
  if (ARC_COND(c, 13)) goto L_157bb4;
  /* 157b88: add x0, x19, #0xc8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(200)));
  /* 157b8c: bl #0x1d983c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407888));
  fn2_1d983c(c);
  /* 157b90: tbnz w0, #0, #0x157bb4 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_157bb4;
  /* 157b94: add x0, x19, #0x270 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(624)));
  /* 157b98: bl #0x1d983c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407900));
  fn2_1d983c(c);
  /* 157b9c: tbz w0, #0, #0x157bb4 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_157bb4;
  /* 157ba0: add x0, x19, #0x278 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(632)));
  /* 157ba4: bl #0x1db7c8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407912));
  fn2_1db7c8(c);
  /* 157ba8: tbz w0, #0, #0x157bb4 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_157bb4;
  /* 157bac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 157bb0: bl #0x13d870 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1407924));
  fn2_13d870(c);
L_157bb4:;
  /* 157bb4: ldp x20, x19, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 157bb8: ldr d8, [sp, #0xb0] */
  arc_du_w(c, 8, arc_ld64(((c)->sp + INT64_C(176))));
  /* 157bbc: ldp x22, x21, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 157bc0: ldp x24, x23, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 157bc4: ldp x26, x25, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 157bc8: ldp x28, x27, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 157bcc: ldp x29, x30, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 157bd0: add sp, sp, #0x120 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(288)));
  /* 157bd4: ret  */
  return;
}

void fn2_15f91c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077295900));
  /* 15f91c: sub sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(176)));
  /* 15f920: stp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 15f924: stp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 15f928: stp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 15f92c: stp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 15f930: add x29, sp, #0x70 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(112)));
  /* 15f934: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 15f938: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 15f93c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 15f940: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 15f944: bl #0x205d68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1440072));
  fn2_205d68(c);
  /* 15f948: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 15f94c: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 15f950: bl #0x2075e8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1440084));
  fn2_2075e8(c);
  /* 15f954: tbz w0, #0, #0x15f99c */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_15f99c;
  /* 15f958: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 15f95c: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 15f960: bl #0x2076e8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1440100));
  fn2_2076e8(c);
  /* 15f964: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 15f968: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 15f96c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 15f970: add x21, sp, #0x28 */
  ARC_X_W(c, 21, ((c)->sp + UINT64_C(40)));
  /* 15f974: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1440120));
  fn2_1bc44c(c);
  /* 15f978: ldrsw x1, [x20] */
  ARC_X_W(c, 1, ((int64_t)(int32_t)arc_ld32(ARC_X_R(c, 20))));
  /* 15f97c: add x20, x21, #0x18 */
  ARC_X_W(c, 20, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* 15f980: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 15f984: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1440136));
  fn2_1bc290(c);
  /* 15f988: stp x21, x20, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* 15f98c: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 15f990: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* 15f994: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 15f998: b #0x15fa4c */
  goto L_15fa4c;
L_15f99c:;
  /* 15f99c: bl #0x1e98c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1440160));
  fn2_1e98c4(c);
  /* 15f9a0: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 15f9a4: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 15f9a8: bl #0x1e9e44 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1440172));
  fn2_1e9e44(c);
  /* 15f9ac: tbz w0, #0, #0x15fa0c */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_15fa0c;
  /* 15f9b0: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 15f9b4: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 15f9b8: add x24, sp, #0x28 */
  ARC_X_W(c, 24, ((c)->sp + UINT64_C(40)));
  /* 15f9bc: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1440192));
  fn2_1bc44c(c);
  /* 15f9c0: add x22, x24, #0x18 */
  ARC_X_W(c, 22, (ARC_X_R(c, 24) + UINT64_C(24)));
  /* 15f9c4: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 15f9c8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 15f9cc: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1440208));
  fn2_1bc44c(c);
  /* 15f9d0: ldrsw x1, [x20] */
  ARC_X_W(c, 1, ((int64_t)(int32_t)arc_ld32(ARC_X_R(c, 20))));
  /* 15f9d4: add x20, x24, #0x30 */
  ARC_X_W(c, 20, (ARC_X_R(c, 24) + UINT64_C(48)));
  /* 15f9d8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 15f9dc: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1440224));
  fn2_1bc290(c);
  /* 15f9e0: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 15f9e4: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* 15f9e8: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 15f9ec: mov w2, #3 */
  ARC_W_W(c, 2, UINT64_C(3));
  /* 15f9f0: stp x24, x22, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* 15f9f4: str x20, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 20));
  /* 15f9f8: bl #0x1eb0c8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1440252));
  fn2_1eb0c8(c);
  /* 15f9fc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 15fa00: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1440260));
  fn2_1bc620(c);
  /* 15fa04: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 15fa08: b #0x15fa58 */
  goto L_15fa58;
L_15fa0c:;
  /* 15fa0c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 15fa10: bl #0xae4cc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1440276));
  fn2_ae4cc(c);
  /* 15fa14: cbz x0, #0x15fa7c */
  if ((ARC_X_R(c, 0)) == 0) goto L_15fa7c;
  /* 15fa18: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 15fa1c: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 15fa20: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 15fa24: add x21, sp, #0x28 */
  ARC_X_W(c, 21, ((c)->sp + UINT64_C(40)));
  /* 15fa28: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1440300));
  fn2_1bc44c(c);
  /* 15fa2c: ldrsw x1, [x20] */
  ARC_X_W(c, 1, ((int64_t)(int32_t)arc_ld32(ARC_X_R(c, 20))));
  /* 15fa30: add x20, x21, #0x18 */
  ARC_X_W(c, 20, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* 15fa34: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 15fa38: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1440316));
  fn2_1bc290(c);
  /* 15fa3c: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 15fa40: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* 15fa44: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 15fa48: stp x21, x20, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
L_15fa4c:;
  /* 15fa4c: mov w2, #2 */
  ARC_W_W(c, 2, UINT64_C(2));
  /* 15fa50: bl #0x221308 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1440340));
  fn2_221308(c);
  /* 15fa54: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
L_15fa58:;
  /* 15fa58: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1440348));
  fn2_1bc620(c);
  /* 15fa5c: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 15fa60: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1440356));
  fn2_1bc620(c);
  /* 15fa64: ldp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 15fa68: ldp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 15fa6c: ldp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 15fa70: ldp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 15fa74: add sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(176)));
  /* 15fa78: ret  */
  return;
L_15fa7c:;
  /* 15fa7c: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 15fa80: add x1, x1, #0xabd */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2749)));
  /* 15fa84: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 15fa88: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1440396));
  fn2_1b7d24(c);
  /* 15fa8c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 15fa90: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 15fa94: bl #0x1cccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1440408));
  fn2_1cccb8(c);
  /* 15fa98: add x8, sp, #0x28 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(40)));
  /* 15fa9c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 15faa0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 15faa4: bl #0x1cf868 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1440424));
  fn2_1cf868(c);
  /* 15faa8: adrp x0, #0x23000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(143360)));
  /* 15faac: add x0, x0, #0xe9b */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3739)));
  /* 15fab0: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 15fab4: add x1, x1, #0x4e9 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1257)));
  /* 15fab8: adrp x3, #0x19000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(102400)));
  /* 15fabc: add x3, x3, #0xf4a */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(3914)));
  /* 15fac0: add x4, sp, #0x28 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(40)));
  /* 15fac4: mov w2, #0x4c */
  ARC_W_W(c, 2, UINT64_C(76));
  /* 15fac8: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 15facc: mov w6, wzr */
  ARC_W_W(c, 6, ARC_W_R(c, 31));
  /* 15fad0: bl #0x1b5698 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1440468));
  fn2_1b5698(c);
  /* 15fad4: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 15fad8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1440476));
  fn2_1ccd9c(c);
  /* 15fadc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 15fae0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1440484));
  fn2_1ccd9c(c);
  /* 15fae4: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 15fae8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1440492));
  fn2_1ccd9c(c);
  /* 15faec: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 15faf0: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1440500));
  fn2_1bc084(c);
  /* 15faf4: ldp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 15faf8: ldp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 15fafc: ldp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 15fb00: ldp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 15fb04: add sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(176)));
  /* 15fb08: ret  */
  return;
}

void fn2_167d40(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077329728));
  /* 167d40: sub sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(160)));
  /* 167d44: stp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 167d48: str x23, [sp, #0x70] */
  arc_st64(((c)->sp + INT64_C(112)), ARC_X_R(c, 23));
  /* 167d4c: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 167d50: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 167d54: add x29, sp, #0x60 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(96)));
  /* 167d58: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 167d5c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 167d60: mov x21, x3 */
  ARC_X_W(c, 21, ARC_X_R(c, 3));
  /* 167d64: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 167d68: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 167d6c: mov x23, sp */
  ARC_X_W(c, 23, (c)->sp);
  /* 167d70: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1473908));
  fn2_1bc2f8(c);
  /* 167d74: add x0, x23, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + UINT64_C(24)));
  /* 167d78: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 167d7c: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1473920));
  fn2_1bc2f8(c);
  /* 167d80: add x0, x23, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + UINT64_C(48)));
  /* 167d84: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 167d88: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1473932));
  fn2_1bc2f8(c);
  /* 167d8c: add x0, x23, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + UINT64_C(72)));
  /* 167d90: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1473940));
  fn2_1bc084(c);
  /* 167d94: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 167d98: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1473948));
  fn2_1db4a4(c);
  /* 167d9c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 167da0: mov w1, #3 */
  ARC_W_W(c, 1, UINT64_C(3));
  /* 167da4: bl #0x1db9f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1473960));
  fn2_1db9f0(c);
  /* 167da8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 167dac: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 167db0: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1473972));
  fn2_1bbf48(c);
  /* 167db4: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 167db8: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1473980));
  fn2_1bce10(c);
  /* 167dbc: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 167dc0: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 167dc4: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1473992));
  fn2_1bbf48(c);
  /* 167dc8: add x1, x23, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(24)));
  /* 167dcc: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1474000));
  fn2_1bce10(c);
  /* 167dd0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 167dd4: mov w1, #2 */
  ARC_W_W(c, 1, UINT64_C(2));
  /* 167dd8: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1474012));
  fn2_1bbf48(c);
  /* 167ddc: add x1, x23, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(48)));
  /* 167de0: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1474020));
  fn2_1bce10(c);
  /* 167de4: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 167de8: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* 167dec: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 167df0: bl #0x1d0298 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1474036));
  fn2_1d0298(c);
  /* 167df4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 167df8: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1474044));
  fn2_1db788(c);
  /* 167dfc: add x0, x23, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + UINT64_C(72)));
  /* 167e00: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1474052));
  fn2_1bc620(c);
  /* 167e04: add x0, x23, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + UINT64_C(48)));
  /* 167e08: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1474060));
  fn2_1bc620(c);
  /* 167e0c: add x0, x23, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + UINT64_C(24)));
  /* 167e10: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1474068));
  fn2_1bc620(c);
  /* 167e14: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 167e18: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1474076));
  fn2_1bc620(c);
  /* 167e1c: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 167e20: ldr x23, [sp, #0x70] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(112))));
  /* 167e24: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 167e28: ldp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 167e2c: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* 167e30: ret  */
  return;
}

void fn2_16ef98(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077359000));
  /* 16ef98: sub sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(192)));
  /* 16ef9c: stp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 16efa0: stp x24, x23, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 16efa4: stp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 16efa8: stp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 16efac: add x29, sp, #0x80 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(128)));
  /* 16efb0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 16efb4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 16efb8: mov x21, x4 */
  ARC_X_W(c, 21, ARC_X_R(c, 4));
  /* 16efbc: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* 16efc0: mov x23, x2 */
  ARC_X_W(c, 23, ARC_X_R(c, 2));
  /* 16efc4: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 16efc8: mov x24, sp */
  ARC_X_W(c, 24, (c)->sp);
  /* 16efcc: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1503184));
  fn2_1bc290(c);
  /* 16efd0: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 16efd4: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 16efd8: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1503196));
  fn2_1b7d24(c);
  /* 16efdc: add x0, x24, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(24)));
  /* 16efe0: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 16efe4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1503208));
  fn2_1bc2f8(c);
  /* 16efe8: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 16efec: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1503216));
  fn2_1ccd9c(c);
  /* 16eff0: add x0, x24, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(48)));
  /* 16eff4: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 16eff8: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1503228));
  fn2_1bc2f8(c);
  /* 16effc: add x0, x24, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(72)));
  /* 16f000: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 16f004: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1503240));
  fn2_1bc2f8(c);
  /* 16f008: add x0, x24, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(96)));
  /* 16f00c: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1503248));
  fn2_1bc084(c);
  /* 16f010: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 16f014: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1503256));
  fn2_1db4a4(c);
  /* 16f018: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 16f01c: mov w1, #4 */
  ARC_W_W(c, 1, UINT64_C(4));
  /* 16f020: bl #0x1db9f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1503268));
  fn2_1db9f0(c);
  /* 16f024: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 16f028: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 16f02c: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1503280));
  fn2_1bbf48(c);
  /* 16f030: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 16f034: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1503288));
  fn2_1bce10(c);
  /* 16f038: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 16f03c: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 16f040: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1503300));
  fn2_1bbf48(c);
  /* 16f044: add x1, x24, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(24)));
  /* 16f048: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1503308));
  fn2_1bce10(c);
  /* 16f04c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 16f050: mov w1, #2 */
  ARC_W_W(c, 1, UINT64_C(2));
  /* 16f054: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1503320));
  fn2_1bbf48(c);
  /* 16f058: add x1, x24, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(48)));
  /* 16f05c: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1503328));
  fn2_1bce10(c);
  /* 16f060: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 16f064: mov w1, #3 */
  ARC_W_W(c, 1, UINT64_C(3));
  /* 16f068: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1503340));
  fn2_1bbf48(c);
  /* 16f06c: add x1, x24, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(72)));
  /* 16f070: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1503348));
  fn2_1bce10(c);
  /* 16f074: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 16f078: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* 16f07c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 16f080: bl #0x1d0298 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1503364));
  fn2_1d0298(c);
  /* 16f084: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 16f088: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1503372));
  fn2_1db788(c);
  /* 16f08c: add x0, x24, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(96)));
  /* 16f090: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1503380));
  fn2_1bc620(c);
  /* 16f094: add x0, x24, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(72)));
  /* 16f098: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1503388));
  fn2_1bc620(c);
  /* 16f09c: add x0, x24, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(48)));
  /* 16f0a0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1503396));
  fn2_1bc620(c);
  /* 16f0a4: add x0, x24, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(24)));
  /* 16f0a8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1503404));
  fn2_1bc620(c);
  /* 16f0ac: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 16f0b0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1503412));
  fn2_1bc620(c);
  /* 16f0b4: ldp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 16f0b8: ldp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 16f0bc: ldp x24, x23, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 16f0c0: ldp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 16f0c4: add sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(192)));
  /* 16f0c8: ret  */
  return;
}

void fn2_1709d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077365716));
  /* 1709d4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1709d8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1709dc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1709e0: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1709e4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1709e8: ldr x9, [x8, #0x2b8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(696))));
  /* 1709ec: cmp x9, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 0));
  /* 1709f0: adrp x9, #0x255000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2445312)));
  /* 1709f4: add x9, x9, #0x270 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(624)));
  /* 1709f8: str x9, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 9));
  /* 1709fc: b.ne #0x170a04 */
  if (ARC_COND(c, 1)) goto L_170a04;
  /* 170a00: str xzr, [x8, #0x2b8] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(696)), ARC_X_R(c, 31));
L_170a04:;
  /* 170a04: add x0, x19, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(48)));
  /* 170a08: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1509900));
  fn2_1d97fc(c);
  /* 170a0c: ldr x0, [x19, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(40))));
  /* 170a10: cbz x0, #0x170a34 */
  if ((ARC_X_R(c, 0)) == 0) goto L_170a34;
  /* 170a14: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1509912));
  fn2_225abc(c);
  /* 170a18: tbz w0, #0, #0x170a34 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_170a34;
  /* 170a1c: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 170a20: ldr x8, [x19, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(40))));
  /* 170a24: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* 170a28: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 170a2c: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 170a30: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1509940));
  arc_dispatch(c, ARC_X_R(c, 9));
L_170a34:;
  /* 170a34: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 170a38: str xzr, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), ARC_X_R(c, 31));
  /* 170a3c: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1509952));
  fn2_1db788(c);
  /* 170a40: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 170a44: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* 170a48: add x8, x8, #0x5e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1504)));
  /* 170a4c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 170a50: cbz x0, #0x170a78 */
  if ((ARC_X_R(c, 0)) == 0) goto L_170a78;
L_170a54:;
  /* 170a54: ldr x1, [x0] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 0)));
  /* 170a58: cbz x1, #0x170a84 */
  if ((ARC_X_R(c, 1)) == 0) goto L_170a84;
  /* 170a5c: bl #0xaeb74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1509984));
  fn2_aeb74(c);
  /* 170a60: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 170a64: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 170a68: cbnz w8, #0x170a54 */
  if ((ARC_W_R(c, 8)) != 0) goto L_170a54;
  /* 170a6c: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 170a70: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1510004));
  fn2_1b5ce8(c);
  /* 170a74: str xzr, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 31));
L_170a78:;
  /* 170a78: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 170a7c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 170a80: ret  */
  return;
L_170a84:;
  /* 170a84: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 170a88: cbnz w8, #0x170a9c */
  if ((ARC_W_R(c, 8)) != 0) goto L_170a9c;
  /* 170a8c: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 170a90: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 170a94: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 170a98: b #0x1b5ce8 */
  fn2_1b5ce8(c); return;
L_170a9c:;
  /* 170a9c: adrp x0, #0x29000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(167936)));
  /* 170aa0: add x0, x0, #0x23f */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(575)));
  /* 170aa4: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 170aa8: add x1, x1, #0x30a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(778)));
  /* 170aac: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* 170ab0: add x3, x3, #0xbb4 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2996)));
  /* 170ab4: mov w2, #0x317 */
  ARC_W_W(c, 2, UINT64_C(791));
  /* 170ab8: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 170abc: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 170ac0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 170ac4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 170ac8: b #0x1b54b0 */
  fn2_1b54b0(c); return;
}

void fn2_17570c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077385484));
  /* 17570c: ldrb w0, [x0, #0x38] */
  ARC_W_W(c, 0, arc_ld8((ARC_X_R(c, 0) + INT64_C(56))));
  /* 175710: ret  */
  return;
}

void fn2_176350(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077388624));
  /* 176350: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 176354: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 176358: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 17635c: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 176360: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 176364: ldp x22, x8, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 176368: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* 17636c: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 176370: add x20, x1, x8, asr #1 */
  ARC_X_W(c, 20, (ARC_X_R(c, 1) + ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> 1))));
  /* 176374: tbz w8, #0, #0x176380 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_176380;
  /* 176378: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 17637c: ldr x22, [x8, x22] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 22))));
L_176380:;
  /* 176380: ldr x1, [x21] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 21)));
  /* 176384: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 176388: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1532812));
  fn2_1ccc88(c);
  /* 17638c: ldp x8, x9, [x21, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 176390: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 176394: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 176398: ldr x2, [x8] */
  ARC_X_W(c, 2, arc_ld64(ARC_X_R(c, 8)));
  /* 17639c: ldr x3, [x9] */
  ARC_X_W(c, 3, arc_ld64(ARC_X_R(c, 9)));
  /* 1763a0: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* 1763a4: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1532840));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 1763a8: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1763ac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1763b0: bl #0x1d8a64 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1532852));
  fn2_1d8a64(c);
  /* 1763b4: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1763b8: bl #0x1d8710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1532860));
  fn2_1d8710(c);
  /* 1763bc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1763c0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1532868));
  fn2_1ccd9c(c);
  /* 1763c4: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1763c8: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1763cc: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1763d0: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1763d4: ret  */
  return;
}

void fn2_178e40(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077399616));
  /* 178e40: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 178e44: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 178e48: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 178e4c: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 178e50: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 178e54: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 178e58: cmp w0, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(2));
  /* 178e5c: b.ne #0x178f18 */
  if (ARC_COND(c, 1)) goto L_178f18;
  /* 178e60: adrp x21, #0x25d000 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 178e64: ldr w8, [x21, #0x300] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 21) + INT64_C(768))));
  /* 178e68: cbz w8, #0x178ef4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_178ef4;
  /* 178e6c: adrp x22, #0x257000 */
  ARC_X_W(c, 22, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 178e70: adrp x23, #0x25d000 */
  ARC_X_W(c, 23, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 178e74: ldr x22, [x22, #0xfb0] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 22) + INT64_C(4016))));
L_178e78:;
  /* 178e78: ldr w4, [x21, #0x300] */
  ARC_W_W(c, 4, arc_ld32((ARC_X_R(c, 21) + INT64_C(768))));
  /* 178e7c: sub x24, x8, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 178e80: cmp w4, w24 */
  (void)arc_sub32(c, ARC_W_R(c, 4), ARC_W_R(c, 24));
  /* 178e84: b.ls #0x178f30 */
  if (ARC_COND(c, 9)) goto L_178f30;
  /* 178e88: ldr x8, [x23, #0x308] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 23) + INT64_C(776))));
  /* 178e8c: ldr x19, [x8, w24, uxtw #3] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 24)))) << 3))));
  /* 178e90: bl #0x205d68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543828));
  fn2_205d68(c);
  /* 178e94: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 178e98: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* 178e9c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 178ea0: bl #0x21fb2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543844));
  fn2_21fb2c(c);
  /* 178ea4: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 178ea8: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 178eac: bl #0x1d2c70 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543856));
  fn2_1d2c70(c);
  /* 178eb0: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 178eb4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 178eb8: bl #0x2078fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543868));
  fn2_2078fc(c);
  /* 178ebc: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 178ec0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543876));
  fn2_1d2d24(c);
  /* 178ec4: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 178ec8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543884));
  fn2_1ccd9c(c);
  /* 178ecc: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 178ed0: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 178ed4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543896));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 178ed8: add x8, x24, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + UINT64_C(1)));
  /* 178edc: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 178ee0: mov x8, x24 */
  ARC_X_W(c, 8, ARC_X_R(c, 24));
  /* 178ee4: b.hi #0x178e78 */
  if (ARC_COND(c, 8)) goto L_178e78;
  /* 178ee8: ldr w8, [x21, #0x300] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 21) + INT64_C(768))));
  /* 178eec: cbz w8, #0x178ef4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_178ef4;
  /* 178ef0: str wzr, [x21, #0x300] */
  arc_st32((ARC_X_R(c, 21) + INT64_C(768)), ARC_W_R(c, 31));
L_178ef4:;
  /* 178ef4: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 178ef8: ldr x0, [x8, #0x308] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(776))));
  /* 178efc: cbz x0, #0x178f18 */
  if ((ARC_X_R(c, 0)) == 0) goto L_178f18;
  /* 178f00: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 178f04: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543944));
  fn2_1b5ce8(c);
  /* 178f08: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 178f0c: add x8, x8, #0x304 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(772)));
  /* 178f10: stur xzr, [x8, #4] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(4)), ARC_X_R(c, 31));
  /* 178f14: str wzr, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 31));
L_178f18:;
  /* 178f18: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 178f1c: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 178f20: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 178f24: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 178f28: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 178f2c: ret  */
  return;
L_178f30:;
  /* 178f30: sub w3, w8, #1 */
  ARC_W_W(c, 3, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* 178f34: adrp x0, #0x20000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(131072)));
  /* 178f38: add x0, x0, #0xd0d */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3341)));
  /* 178f3c: adrp x1, #0x23000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(143360)));
  /* 178f40: add x1, x1, #0x74 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(116)));
  /* 178f44: adrp x5, #0x25000 */
  ARC_X_W(c, 5, (arc_image_bases[2] + UINT64_C(151552)));
  /* 178f48: add x5, x5, #0x33c */
  ARC_X_W(c, 5, (ARC_X_R(c, 5) + UINT64_C(828)));
  /* 178f4c: adrp x6, #0x1b000 */
  ARC_X_W(c, 6, (arc_image_bases[2] + UINT64_C(110592)));
  /* 178f50: add x6, x6, #0x3b7 */
  ARC_X_W(c, 6, (ARC_X_R(c, 6) + UINT64_C(951)));
  /* 178f54: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 178f58: adrp x7, #0x1e000 */
  ARC_X_W(c, 7, (arc_image_bases[2] + UINT64_C(122880)));
  /* 178f5c: add x7, x7, #0xb6f */
  ARC_X_W(c, 7, (ARC_X_R(c, 7) + UINT64_C(2927)));
  /* 178f60: mov w2, #0xb3 */
  ARC_W_W(c, 2, UINT64_C(179));
  /* 178f64: strb w8, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 8));
  /* 178f68: strb wzr, [sp] */
  arc_st8((c)->sp, ARC_W_R(c, 31));
  /* 178f6c: bl #0x1b5870 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1544048));
  fn2_1b5870(c);
  /* 178f70: bl #0x1b5b50 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1544052));
  fn2_1b5b50(c);
  /* 178f74: brk #1 */
  arc_trap(c, "brk");
}

void fn2_17b178(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077408632));
L_17b178:;
  /* 17b178: cbz x1, #0x17b1c0 */
  if ((ARC_X_R(c, 1)) == 0) goto L_17b1c0;
  /* 17b17c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 17b180: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 17b184: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 17b188: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* 17b18c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 17b190: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 17b194: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* 17b198: bl #0x17b178 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1552796));
  fn2_17b178(c);
  /* 17b19c: ldr x1, [x20, #8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* 17b1a0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 17b1a4: bl #0x17b178 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1552808));
  fn2_17b178(c);
  /* 17b1a8: add x0, x20, #0x19 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(25)));
  /* 17b1ac: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1552816));
  fn2_1d2d24(c);
  /* 17b1b0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 17b1b4: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 17b1b8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 17b1bc: b #0x24b730 */
  fn2_24b730(c); return;
L_17b1c0:;
  /* 17b1c0: ret  */
  return;
}

void fn2_17cfb8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077416376));
  /* 17cfb8: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 17cfbc: ret  */
  return;
}

void fn2_17da74(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077419124));
  /* 17da74: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 17da78: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 17da7c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 17da80: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 17da84: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* 17da88: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* 17da8c: add x8, x8, #0x5e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1504)));
  /* 17da90: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 17da94: cbz x0, #0x17dac4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_17dac4;
L_17da98:;
  /* 17da98: ldr x1, [x0] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 0)));
  /* 17da9c: cbz x1, #0x17dab4 */
  if ((ARC_X_R(c, 1)) == 0) goto L_17dab4;
  /* 17daa0: bl #0xaeb74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1563300));
  fn2_aeb74(c);
  /* 17daa4: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 17daa8: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 17daac: cbnz w8, #0x17da98 */
  if ((ARC_W_R(c, 8)) != 0) goto L_17da98;
  /* 17dab0: b #0x17dabc */
  goto L_17dabc;
L_17dab4:;
  /* 17dab4: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 17dab8: cbnz w8, #0x17dad4 */
  if ((ARC_W_R(c, 8)) != 0) goto L_17dad4;
L_17dabc:;
  /* 17dabc: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 17dac0: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1563332));
  fn2_1b5ce8(c);
L_17dac4:;
  /* 17dac4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 17dac8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 17dacc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 17dad0: b #0x24b730 */
  fn2_24b730(c); return;
L_17dad4:;
  /* 17dad4: adrp x0, #0x29000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(167936)));
  /* 17dad8: add x0, x0, #0x23f */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(575)));
  /* 17dadc: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 17dae0: add x1, x1, #0x30a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(778)));
  /* 17dae4: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* 17dae8: add x3, x3, #0xbb4 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2996)));
  /* 17daec: mov w2, #0x317 */
  ARC_W_W(c, 2, UINT64_C(791));
  /* 17daf0: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 17daf4: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 17daf8: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1563388));
  fn2_1b54b0(c);
  /* 17dafc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 17db00: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 17db04: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 17db08: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_17e9cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077423052));
  /* 17e9cc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 17e9d0: ret  */
  return;
}

void fn2_17f894(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077426836));
  /* 17f894: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 17f898: ret  */
  return;
}

void fn2_18075c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077430620));
  /* 18075c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 180760: ret  */
  return;
}

void fn2_181624(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077434404));
  /* 181624: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 181628: ret  */
  return;
}

void fn2_18335c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077441884));
  /* 18335c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 183360: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 183364: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 183368: ldp x9, x10, [x1] */
  { const uint64_t _pa = ARC_X_R(c, 1);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 18336c: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 183370: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 183374: ldr x11, [x8, #0x18] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 183378: ldr x8, [x10] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 10)));
  /* 18337c: ldr x1, [x9] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 9)));
  /* 183380: mov x2, x8 */
  ARC_X_W(c, 2, ARC_X_R(c, 8));
  /* 183384: blr x11 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1586056));
  arc_dispatch(c, ARC_X_R(c, 11));
  /* 183388: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 18338c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 183390: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 183394: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 183398: ret  */
  return;
}

void fn2_183dc0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077444544));
  /* 183dc0: cbz x1, #0x183df8 */
  if ((ARC_X_R(c, 1)) == 0) goto L_183df8;
  /* 183dc4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 183dc8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 183dcc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 183dd0: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* 183dd4: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 183dd8: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 183ddc: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 183de0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1588708));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 183de4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 183de8: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 183dec: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 183df0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 183df4: b #0x1b5ce8 */
  fn2_1b5ce8(c); return;
L_183df8:;
  /* 183df8: ret  */
  return;
}

void fn2_184cf8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077448440));
  /* 184cf8: cbz x0, #0x184d00 */
  if ((ARC_X_R(c, 0)) == 0) goto L_184d00;
  /* 184cfc: b #0x18e5a4 */
  fn2_18e5a4(c); return;
L_184d00:;
  /* 184d00: ret  */
  return;
}

void fn2_185c80(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077452416));
  /* 185c80: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 185c84: ret  */
  return;
}

void fn2_18672c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077455148));
  /* 18672c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 186730: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 186734: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 186738: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 18673c: bl #0x186660 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1599296));
  fn2_186660(c);
  /* 186740: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 186744: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 186748: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 18674c: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_18bde0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077477344));
  /* 18bde0: sub sp, sp, #0xf0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(240)));
  /* 18bde4: stp x29, x30, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 18bde8: stp x26, x25, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 18bdec: stp x24, x23, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 18bdf0: stp x22, x21, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 18bdf4: stp x20, x19, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 18bdf8: add x29, sp, #0xa0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(160)));
  /* 18bdfc: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 18be00: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 18be04: mov x19, x5 */
  ARC_X_W(c, 19, ARC_X_R(c, 5));
  /* 18be08: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 18be0c: mov x21, x3 */
  ARC_X_W(c, 21, ARC_X_R(c, 3));
  /* 18be10: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 18be14: mov x24, x8 */
  ARC_X_W(c, 24, ARC_X_R(c, 8));
  /* 18be18: add x26, sp, #0x28 */
  ARC_X_W(c, 26, ((c)->sp + UINT64_C(40)));
  /* 18be1c: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1621536));
  fn2_1bc44c(c);
  /* 18be20: add x25, x26, #0x18 */
  ARC_X_W(c, 25, (ARC_X_R(c, 26) + UINT64_C(24)));
  /* 18be24: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 18be28: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 18be2c: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1621552));
  fn2_1bc2f8(c);
  /* 18be30: add x22, x26, #0x30 */
  ARC_X_W(c, 22, (ARC_X_R(c, 26) + UINT64_C(48)));
  /* 18be34: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 18be38: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 18be3c: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1621568));
  fn2_1bc2f8(c);
  /* 18be40: add x21, x26, #0x48 */
  ARC_X_W(c, 21, (ARC_X_R(c, 26) + UINT64_C(72)));
  /* 18be44: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 18be48: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 18be4c: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1621584));
  fn2_1bc0b8(c);
  /* 18be50: ldrb w1, [x19] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 19)));
  /* 18be54: add x19, x26, #0x60 */
  ARC_X_W(c, 19, (ARC_X_R(c, 26) + UINT64_C(96)));
  /* 18be58: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 18be5c: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1621600));
  fn2_1bc25c(c);
  /* 18be60: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 18be64: mov x8, x24 */
  ARC_X_W(c, 8, ARC_X_R(c, 24));
  /* 18be68: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 18be6c: mov w2, #5 */
  ARC_W_W(c, 2, UINT64_C(5));
  /* 18be70: stp x26, x25, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 18be74: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 18be78: str x19, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 19));
  /* 18be7c: bl #0x221308 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1621632));
  fn2_221308(c);
  /* 18be80: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 18be84: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1621640));
  fn2_1bc620(c);
  /* 18be88: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 18be8c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1621648));
  fn2_1bc620(c);
  /* 18be90: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 18be94: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1621656));
  fn2_1bc620(c);
  /* 18be98: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 18be9c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1621664));
  fn2_1bc620(c);
  /* 18bea0: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 18bea4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1621672));
  fn2_1bc620(c);
  /* 18bea8: ldp x20, x19, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 18beac: ldp x22, x21, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 18beb0: ldp x24, x23, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 18beb4: ldp x26, x25, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 18beb8: ldp x29, x30, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 18bebc: add sp, sp, #0xf0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(240)));
  /* 18bec0: ret  */
  return;
}

void fn2_18c90c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077480204));
  /* 18c90c: mov x8, x1 */
  ARC_X_W(c, 8, ARC_X_R(c, 1));
  /* 18c910: ldp x1, x9, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 18c914: mov x4, x3 */
  ARC_X_W(c, 4, ARC_X_R(c, 3));
  /* 18c918: mov x3, x2 */
  ARC_X_W(c, 3, ARC_X_R(c, 2));
  /* 18c91c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 18c920: mov x2, x9 */
  ARC_X_W(c, 2, ARC_X_R(c, 9));
  /* 18c924: b #0x18cc3c */
  fn2_18cc3c(c); return;
}

void fn2_18e2a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077486752));
  /* 18e2a0: cmp w1, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(1));
  /* 18e2a4: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 18e2a8: cmp w1, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(0));
  /* 18e2ac: lsl w8, w8, #2 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(2)) & 31)));
  /* 18e2b0: csel w0, wzr, w8, lt */
  ARC_W_W(c, 0, (ARC_COND(c, 11) ? (ARC_W_R(c, 31)) : ARC_W_R(c, 8)));
  /* 18e2b4: ret  */
  return;
}

void fn2_1917c4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077500356));
  /* 1917c4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1917c8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1917cc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1917d0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1917d4: bl #0x19161c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1644504));
  fn2_19161c(c);
  /* 1917d8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1917dc: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1917e0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1917e4: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_193cf0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077509872));
  /* 193cf0: sub sp, sp, #0xe0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(224)));
  /* 193cf4: stp x29, x30, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 193cf8: stp x26, x25, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 193cfc: stp x24, x23, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 193d00: stp x22, x21, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 193d04: stp x20, x19, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 193d08: add x29, sp, #0x90 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(144)));
  /* 193d0c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 193d10: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 193d14: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 193d18: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 193d1c: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654048));
  fn2_1bc290(c);
  /* 193d20: add x0, x20, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(48)));
  /* 193d24: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 193d28: bl #0x1d998c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654060));
  fn2_1d998c(c);
  /* 193d2c: mov w22, w0 */
  ARC_W_W(c, 22, ARC_W_R(c, 0));
  /* 193d30: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 193d34: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654072));
  fn2_1bc620(c);
  /* 193d38: tbz w22, #0, #0x193d84 */
  if (((ARC_W_R(c, 22)) >> 0 & 1) == 0) goto L_193d84;
  /* 193d3c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 193d40: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 193d44: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654088));
  fn2_1bc290(c);
  /* 193d48: add x0, x20, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(48)));
  /* 193d4c: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 193d50: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654100));
  fn2_1bbfa0(c);
  /* 193d54: str xzr, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 31));
  /* 193d58: bl #0x1bcbbc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654108));
  fn2_1bcbbc(c);
  /* 193d5c: cbz x0, #0x193d78 */
  if ((ARC_X_R(c, 0)) == 0) goto L_193d78;
  /* 193d60: bl #0x19e9d4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654116));
  fn2_19e9d4(c);
  /* 193d64: cbz x0, #0x193d78 */
  if ((ARC_X_R(c, 0)) == 0) goto L_193d78;
  /* 193d68: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 193d6c: bl #0x2259d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654128));
  fn2_2259d8(c);
  /* 193d70: tbz w0, #0, #0x193d78 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_193d78;
  /* 193d74: str x20, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 20));
L_193d78:;
  /* 193d78: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 193d7c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654144));
  fn2_1bc620(c);
  /* 193d80: b #0x194160 */
  goto L_194160;
L_193d84:;
  /* 193d84: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 193d88: stur xzr, [x29, #-0x38] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-56)), ARC_X_R(c, 31));
  /* 193d8c: bl #0x19e88c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654160));
  fn2_19e88c(c);
  /* 193d90: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 193d94: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654168));
  fn2_1d9740(c);
  /* 193d98: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 193d9c: add x1, x20, #0x28 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(40)));
  /* 193da0: sub x25, x29, #0x30 */
  ARC_X_W(c, 25, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 193da4: bl #0x1bc544 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654184));
  fn2_1bc544(c);
  /* 193da8: adrp x1, #0x2a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(172032)));
  /* 193dac: add x1, x1, #0x2a1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(673)));
  /* 193db0: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 193db4: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654200));
  fn2_1b7d24(c);
  /* 193db8: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 193dbc: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 193dc0: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654212));
  fn2_1bc2f8(c);
  /* 193dc4: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 193dc8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654220));
  fn2_1ccd9c(c);
  /* 193dcc: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 193dd0: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* 193dd4: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654232));
  fn2_1bbfa0(c);
  /* 193dd8: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 193ddc: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654240));
  fn2_1bcf04(c);
  /* 193de0: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 193de4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654248));
  fn2_1bc620(c);
  /* 193de8: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 193dec: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654256));
  fn2_1bc620(c);
  /* 193df0: ldur x0, [x29, #-0x38] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-56))));
  /* 193df4: sub x1, x29, #0x40 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 193df8: bl #0x230f10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654268));
  fn2_230f10(c);
  /* 193dfc: cbz w0, #0x193f10 */
  if ((ARC_W_R(c, 0)) == 0) goto L_193f10;
  /* 193e00: mov w22, w0 */
  ARC_W_W(c, 22, ARC_W_R(c, 0));
  /* 193e04: adrp x1, #0x1c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(114688)));
  /* 193e08: add x1, x1, #0xd2e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3374)));
  /* 193e0c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 193e10: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 193e14: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654296));
  fn2_1b8fd4(c);
  /* 193e18: adrp x0, #0x2a000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(172032)));
  /* 193e1c: add x0, x0, #0xd85 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3461)));
  /* 193e20: add x8, sp, #0x28 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(40)));
  /* 193e24: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* 193e28: bl #0x1b7d74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654316));
  fn2_1b7d74(c);
  /* 193e2c: add x8, sp, #0x30 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(48)));
  /* 193e30: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 193e34: bl #0xae0d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654328));
  fn2_ae0d8(c);
  /* 193e38: mov w0, w22 */
  ARC_W_W(c, 0, ARC_W_R(c, 22));
  /* 193e3c: add x8, sp, #0x20 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(32)));
  /* 193e40: bl #0x249f84 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654340));
  fn2_249f84(c);
  /* 193e44: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 193e48: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 193e4c: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654352));
  fn2_1bc2f8(c);
  /* 193e50: add x22, x25, #0x18 */
  ARC_X_W(c, 22, (ARC_X_R(c, 25) + UINT64_C(24)));
  /* 193e54: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 193e58: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654364));
  fn2_1bc084(c);
  /* 193e5c: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 193e60: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654372));
  fn2_1db4a4(c);
  /* 193e64: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 193e68: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 193e6c: bl #0x1db9f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654384));
  fn2_1db9f0(c);
  /* 193e70: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 193e74: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 193e78: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654396));
  fn2_1bbf48(c);
  /* 193e7c: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 193e80: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654404));
  fn2_1bce10(c);
  /* 193e84: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* 193e88: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 193e8c: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* 193e90: bl #0x1d0298 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654420));
  fn2_1d0298(c);
  /* 193e94: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 193e98: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654428));
  fn2_1db788(c);
  /* 193e9c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 193ea0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654436));
  fn2_1bc620(c);
  /* 193ea4: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 193ea8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654444));
  fn2_1bc620(c);
  /* 193eac: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 193eb0: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 193eb4: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654456));
  fn2_1bc44c(c);
  /* 193eb8: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 193ebc: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 193ec0: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654468));
  fn2_1bc2f8(c);
  /* 193ec4: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* 193ec8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 193ecc: mov w2, #2 */
  ARC_W_W(c, 2, UINT64_C(2));
  /* 193ed0: stp x25, x22, [sp, #0x38] */
  { const uint64_t _pa = ((c)->sp + INT64_C(56));
    arc_st64(_pa, ARC_X_R(c, 25));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* 193ed4: bl #0x221204 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654488));
  fn2_221204(c);
  /* 193ed8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 193edc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654496));
  fn2_1bc620(c);
  /* 193ee0: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 193ee4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654504));
  fn2_1bc620(c);
  /* 193ee8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 193eec: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654512));
  fn2_1ccd9c(c);
  /* 193ef0: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 193ef4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654520));
  fn2_1ccd9c(c);
  /* 193ef8: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 193efc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654528));
  fn2_1ccd9c(c);
  /* 193f00: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 193f04: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654536));
  fn2_1ccd9c(c);
  /* 193f08: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 193f0c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654544));
  fn2_1d2d24(c);
L_193f10:;
  /* 193f10: ldur x23, [x29, #-0x38] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 29) + INT64_C(-56))));
  /* 193f14: adrp x1, #0x27000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(159744)));
  /* 193f18: add x1, x1, #0x2b6 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(694)));
  /* 193f1c: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 193f20: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 193f24: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654568));
  fn2_1b8fd4(c);
  /* 193f28: adrp x22, #0x1e000 */
  ARC_X_W(c, 22, (arc_image_bases[2] + UINT64_C(122880)));
  /* 193f2c: add x22, x22, #0xb6f */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(2927)));
  /* 193f30: mov w0, #0x30 */
  ARC_W_W(c, 0, UINT64_C(48));
  /* 193f34: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 193f38: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 193f3c: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654592));
  fn2_1b5d1c(c);
  /* 193f40: adrp x8, #0x256000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2449408)));
  /* 193f44: add x8, x8, #0xd0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(208)));
  /* 193f48: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 193f4c: stp x8, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 193f50: nop  */
  /* nop: no architectural effect here */
  /* 193f54: adr x8, #0x198fb8 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(1675192)));
  /* 193f58: mov w2, #0x18 */
  ARC_W_W(c, 2, UINT64_C(24));
  /* 193f5c: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 193f60: stp x8, xzr, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 193f64: str x20, [x1, #0x18]! */
  { const uint64_t _a = (ARC_X_R(c, 1) + INT64_C(24));
    ARC_X_W(c, 1, ARC_X_R(c, 1) + INT64_C(24));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 193f68: bl #0x1b7894 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654636));
  fn2_1b7894(c);
  /* 193f6c: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* 193f70: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 193f74: bl #0x1b793c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654648));
  fn2_1b793c(c);
  /* 193f78: ldur x0, [x29, #-0x38] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-56))));
  /* 193f7c: bl #0x220748 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654656));
  fn2_220748(c);
  /* 193f80: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 193f84: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 193f88: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654668));
  fn2_1bc290(c);
  /* 193f8c: add x24, x25, #0x18 */
  ARC_X_W(c, 24, (ARC_X_R(c, 25) + UINT64_C(24)));
  /* 193f90: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 193f94: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 193f98: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654684));
  fn2_1bc290(c);
  /* 193f9c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 193fa0: stp x25, x24, [sp, #0x38] */
  { const uint64_t _pa = ((c)->sp + INT64_C(56));
    arc_st64(_pa, ARC_X_R(c, 25));
    arc_st64(_pa + 8, ARC_X_R(c, 24));
  }
  /* 193fa4: bl #0x1d7878 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654696));
  fn2_1d7878(c);
  /* 193fa8: adrp x26, #0x257000 */
  ARC_X_W(c, 26, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 193fac: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 193fb0: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* 193fb4: ldr x26, [x26, #0xfb8] */
  ARC_X_W(c, 26, arc_ld64((ARC_X_R(c, 26) + INT64_C(4024))));
  /* 193fb8: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 193fbc: mov w3, #2 */
  ARC_W_W(c, 3, UINT64_C(2));
  /* 193fc0: ldr x8, [x26, #0xc8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(200))));
  /* 193fc4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654728));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 193fc8: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 193fcc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654736));
  fn2_1bc620(c);
  /* 193fd0: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 193fd4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654744));
  fn2_1bc620(c);
  /* 193fd8: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* 193fdc: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 193fe0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 193fe4: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 193fe8: bl #0x221ca0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654764));
  fn2_221ca0(c);
  /* 193fec: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 193ff0: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654772));
  fn2_1d79fc(c);
  /* 193ff4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 193ff8: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654780));
  fn2_1d79fc(c);
  /* 193ffc: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 194000: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654788));
  fn2_1d2d24(c);
  /* 194004: ldur x23, [x29, #-0x38] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 29) + INT64_C(-56))));
  /* 194008: adrp x1, #0x24000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(147456)));
  /* 19400c: add x1, x1, #0xd1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(209)));
  /* 194010: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 194014: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 194018: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654812));
  fn2_1b8fd4(c);
  /* 19401c: mov w0, #0x30 */
  ARC_W_W(c, 0, UINT64_C(48));
  /* 194020: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 194024: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 194028: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654828));
  fn2_1b5d1c(c);
  /* 19402c: adrp x8, #0x256000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2449408)));
  /* 194030: add x8, x8, #0x120 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(288)));
  /* 194034: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 194038: stp x8, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 19403c: nop  */
  /* nop: no architectural effect here */
  /* 194040: adr x8, #0x199160 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(1675616)));
  /* 194044: mov w2, #0x18 */
  ARC_W_W(c, 2, UINT64_C(24));
  /* 194048: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 19404c: stp x8, xzr, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 194050: str x20, [x1, #0x18]! */
  { const uint64_t _a = (ARC_X_R(c, 1) + INT64_C(24));
    ARC_X_W(c, 1, ARC_X_R(c, 1) + INT64_C(24));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 194054: bl #0x1b7894 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654872));
  fn2_1b7894(c);
  /* 194058: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* 19405c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 194060: bl #0x1b793c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654884));
  fn2_1b793c(c);
  /* 194064: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 194068: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 19406c: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654896));
  fn2_1bc290(c);
  /* 194070: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 194074: str x25, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 25));
  /* 194078: bl #0x1d7878 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654908));
  fn2_1d7878(c);
  /* 19407c: ldr x8, [x26, #0xc8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(200))));
  /* 194080: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 194084: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 194088: add x2, sp, #0x38 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(56)));
  /* 19408c: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 194090: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654932));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 194094: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 194098: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654940));
  fn2_1bc620(c);
  /* 19409c: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* 1940a0: add x2, sp, #0x38 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(56)));
  /* 1940a4: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1940a8: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1940ac: bl #0x221ca0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654960));
  fn2_221ca0(c);
  /* 1940b0: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 1940b4: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654968));
  fn2_1d79fc(c);
  /* 1940b8: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1940bc: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654976));
  fn2_1d79fc(c);
  /* 1940c0: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 1940c4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1654984));
  fn2_1d2d24(c);
  /* 1940c8: ldr x0, [x20, #0xc8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(200))));
  /* 1940cc: cbz x0, #0x19417c */
  if ((ARC_X_R(c, 0)) == 0) goto L_19417c;
  /* 1940d0: sub x1, x29, #0x38 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 1940d4: mov w2, w21 */
  ARC_W_W(c, 2, ARC_W_R(c, 21));
  /* 1940d8: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1940dc: bl #0x230840 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1655008));
  fn2_230840(c);
  /* 1940e0: ldur x1, [x29, #-0x38] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-56))));
  /* 1940e4: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1940e8: bl #0x1bc488 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1655020));
  fn2_1bc488(c);
  /* 1940ec: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 1940f0: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1940f4: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1655032));
  fn2_1bc290(c);
  /* 1940f8: add x0, x20, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(48)));
  /* 1940fc: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* 194100: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1655044));
  fn2_1bbfa0(c);
  /* 194104: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 194108: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1655052));
  fn2_1bcf04(c);
  /* 19410c: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 194110: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1655060));
  fn2_1bc620(c);
  /* 194114: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 194118: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1655068));
  fn2_1bc620(c);
  /* 19411c: ldur x0, [x29, #-0x38] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-56))));
  /* 194120: str xzr, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 31));
  /* 194124: cbz x0, #0x194130 */
  if ((ARC_X_R(c, 0)) == 0) goto L_194130;
  /* 194128: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* 19412c: bl #0x2259d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1655088));
  fn2_2259d8(c);
L_194130:;
  /* 194130: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 194134: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1655096));
  fn2_1d97fc(c);
  /* 194138: ldur x0, [x29, #-0x38] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-56))));
  /* 19413c: cbz x0, #0x194160 */
  if ((ARC_X_R(c, 0)) == 0) goto L_194160;
L_194140:;
  /* 194140: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1655108));
  fn2_225abc(c);
  /* 194144: tbz w0, #0, #0x194160 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_194160;
  /* 194148: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 19414c: ldur x8, [x29, #-0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-56))));
  /* 194150: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* 194154: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 194158: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 19415c: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1655136));
  arc_dispatch(c, ARC_X_R(c, 9));
L_194160:;
  /* 194160: ldp x20, x19, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 194164: ldp x22, x21, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 194168: ldp x24, x23, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 19416c: ldp x26, x25, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 194170: ldp x29, x30, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 194174: add sp, sp, #0xe0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(224)));
  /* 194178: ret  */
  return;
L_19417c:;
  /* 19417c: adrp x0, #0x1c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(114688)));
  /* 194180: add x0, x0, #0x4d9 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1241)));
  /* 194184: adrp x1, #0x27000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(159744)));
  /* 194188: add x1, x1, #0x29b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(667)));
  /* 19418c: adrp x3, #0x27000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(159744)));
  /* 194190: add x3, x3, #0xda7 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(3495)));
  /* 194194: adrp x4, #0x27000 */
  ARC_X_W(c, 4, (arc_image_bases[2] + UINT64_C(159744)));
  /* 194198: add x4, x4, #0xdf2 */
  ARC_X_W(c, 4, (ARC_X_R(c, 4) + UINT64_C(3570)));
  /* 19419c: mov w2, #0x340 */
  ARC_W_W(c, 2, UINT64_C(832));
  /* 1941a0: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 1941a4: mov w6, wzr */
  ARC_W_W(c, 6, ARC_W_R(c, 31));
  /* 1941a8: bl #0x1b5598 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1655212));
  fn2_1b5598(c);
  /* 1941ac: str xzr, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 31));
  /* 1941b0: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 1941b4: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1655224));
  fn2_1d97fc(c);
  /* 1941b8: ldur x0, [x29, #-0x38] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-56))));
  /* 1941bc: cbnz x0, #0x194140 */
  if ((ARC_X_R(c, 0)) != 0) goto L_194140;
  /* 1941c0: b #0x194160 */
  goto L_194160;
}

void fn2_19dc4c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077550668));
  /* 19dc4c: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 19dc50: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 19dc54: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 19dc58: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 19dc5c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 19dc60: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 19dc64: add x20, sp, #8 */
  ARC_X_W(c, 20, ((c)->sp + UINT64_C(8)));
  /* 19dc68: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1694828));
  fn2_1bc44c(c);
  /* 19dc6c: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 19dc70: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 19dc74: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 19dc78: str x20, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 20));
  /* 19dc7c: bl #0x221204 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1694848));
  fn2_221204(c);
  /* 19dc80: mov w19, w0 */
  ARC_W_W(c, 19, ARC_W_R(c, 0));
  /* 19dc84: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 19dc88: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1694860));
  fn2_1bc620(c);
  /* 19dc8c: mov w0, w19 */
  ARC_W_W(c, 0, ARC_W_R(c, 19));
  /* 19dc90: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 19dc94: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 19dc98: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 19dc9c: ret  */
  return;
}

void fn2_19ec70(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077554800));
  /* 19ec70: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* 19ec74: str x8, [x0, #0xf0] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(240)), ARC_X_R(c, 8));
  /* 19ec78: ret  */
  return;
}

void fn2_19ff34(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077559604));
  /* 19ff34: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* 19ff38: cbz x9, #0x19ff80 */
  if ((ARC_X_R(c, 9)) == 0) goto L_19ff80;
  /* 19ff3c: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 19ff40: str x25, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 25));
  /* 19ff44: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 19ff48: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 19ff4c: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 19ff50: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 19ff54: sub x9, x9, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(16)));
  /* 19ff58: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* 19ff5c: ldar x0, [x9] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 9)));
  /* 19ff60: cmp x0, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(2));
  /* 19ff64: b.hs #0x19ff88 */
  if (ARC_COND(c, 2)) goto L_19ff88;
  /* 19ff68: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 19ff6c: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* 19ff70: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 19ff74: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 19ff78: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 19ff7c: ret  */
  return;
L_19ff80:;
  /* 19ff80: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 19ff84: ret  */
  return;
L_19ff88:;
  /* 19ff88: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 19ff8c: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 19ff90: ldur x20, [x8, #-8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(-8))));
  /* 19ff94: add x8, x20, x20, lsl #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + ((uint64_t)(ARC_X_R(c, 20)) << 1)));
  /* 19ff98: lsl x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(3)) & 63)));
  /* 19ff9c: cbz x8, #0x19ffc4 */
  if ((ARC_X_R(c, 8)) == 0) goto L_19ffc4;
  /* 19ffa0: sub x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 19ffa4: orr x8, x8, x8, lsr #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 1)));
  /* 19ffa8: orr x8, x8, x8, lsr #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 2)));
  /* 19ffac: orr x8, x8, x8, lsr #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 4)));
  /* 19ffb0: orr x8, x8, x8, lsr #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 8)));
  /* 19ffb4: orr x8, x8, x8, lsr #16 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 16)));
  /* 19ffb8: orr x8, x8, x8, lsr #32 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 32)));
  /* 19ffbc: add x0, x8, #0x11 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(17)));
  /* 19ffc0: b #0x19ffc8 */
  goto L_19ffc8;
L_19ffc4:;
  /* 19ffc4: mov w0, #0x10 */
  ARC_W_W(c, 0, UINT64_C(16));
L_19ffc8:;
  /* 19ffc8: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 19ffcc: bl #0x1b5b60 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1703888));
  fn2_1b5b60(c);
  /* 19ffd0: cbz x0, #0x1a0060 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1a0060;
  /* 19ffd4: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 19ffd8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 19ffdc: add x22, x0, #0x10 */
  ARC_X_W(c, 22, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* 19ffe0: stlr x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 19ffe4: mov x8, x21 */
  ARC_X_W(c, 8, ARC_X_R(c, 21));
  /* 19ffe8: str x20, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 20));
  /* 19ffec: cbz x20, #0x1a0034 */
  if ((ARC_X_R(c, 20)) == 0) goto L_1a0034;
  /* 19fff0: mov x23, xzr */
  ARC_X_W(c, 23, ARC_X_R(c, 31));
  /* 19fff4: b #0x1a0010 */
  goto L_1a0010;
L_19fff8:;
  /* 19fff8: add x9, x25, x23 */
  ARC_X_W(c, 9, (ARC_X_R(c, 25) + ARC_X_R(c, 23)));
  /* 19fffc: subs x20, x20, #1 */
  ARC_X_W(c, 20, arc_sub64(c, ARC_X_R(c, 20), UINT64_C(1)));
  /* 1a0000: add x23, x23, #0x18 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(24)));
  /* 1a0004: ldur q0, [x9, #8] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))), arc_ld64((ARC_X_R(c, 9) + INT64_C(8)) + 8));
  /* 1a0008: stur q0, [x24, #0x18] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(24)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 24) + INT64_C(24)) + 8, (c)->q[0].u64[1]);
  /* 1a000c: b.eq #0x1a0034 */
  if (ARC_COND(c, 0)) goto L_1a0034;
L_1a0010:;
  /* 1a0010: add x24, x19, x23 */
  ARC_X_W(c, 24, (ARC_X_R(c, 19) + ARC_X_R(c, 23)));
  /* 1a0014: ldr x25, [x8] */
  ARC_X_W(c, 25, arc_ld64(ARC_X_R(c, 8)));
  /* 1a0018: str xzr, [x24, #0x10] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(16)), ARC_X_R(c, 31));
  /* 1a001c: ldr x0, [x25, x23] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 25) + ARC_X_R(c, 23))));
  /* 1a0020: cbz x0, #0x19fff8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_19fff8;
  /* 1a0024: str x0, [x24, #0x10] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(16)), ARC_X_R(c, 0));
  /* 1a0028: bl #0x2259d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1703980));
  fn2_2259d8(c);
  /* 1a002c: mov x8, x21 */
  ARC_X_W(c, 8, ARC_X_R(c, 21));
  /* 1a0030: b #0x19fff8 */
  goto L_19fff8;
L_1a0034:;
  /* 1a0034: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1a0038: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 1a003c: bl #0x19f28c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1704000));
  fn2_19f28c(c);
  /* 1a0040: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1a0044: str x22, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 22));
  /* 1a0048: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1a004c: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1a0050: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1a0054: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1a0058: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1a005c: ret  */
  return;
L_1a0060:;
  /* 1a0060: adrp x0, #0x1b000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(110592)));
  /* 1a0064: add x0, x0, #0x4ba */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1210)));
  /* 1a0068: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 1a006c: add x1, x1, #0x446 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1094)));
  /* 1a0070: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* 1a0074: add x3, x3, #0xca8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(3240)));
  /* 1a0078: mov w2, #0x140 */
  ARC_W_W(c, 2, UINT64_C(320));
  /* 1a007c: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 1a0080: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 1a0084: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1704072));
  fn2_1b54b0(c);
  /* 1a0088: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 1a008c: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1a0090: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1a0094: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1a0098: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1a009c: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1a00a0: ret  */
  return;
}

void fn2_1a0c74(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077562996));
  /* 1a0c74: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1a0c78: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1a0c7c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1a0c80: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1a0c84: bl #0x1b6040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1707144));
  fn2_1b6040(c);
  /* 1a0c88: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1a0c8c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1a0c90: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1a0c94: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_1a229c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077568668));
  /* 1a229c: cmp w1, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(0));
  /* 1a22a0: mov w8, #0x1b */
  ARC_W_W(c, 8, UINT64_C(27));
  /* 1a22a4: cset w9, eq */
  ARC_W_W(c, 9, (ARC_COND(c, 0) ? 1 : 0));
  /* 1a22a8: cmp w1, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(1));
  /* 1a22ac: lsl w9, w9, #2 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) << ((UINT64_C(2)) & 31)));
  /* 1a22b0: csel w8, w8, w9, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* 1a22b4: cmp w1, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(2));
  /* 1a22b8: csel w0, w8, wzr, lo */
  ARC_W_W(c, 0, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 31)));
  /* 1a22bc: ret  */
  return;
}

void fn2_1a3880(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077574272));
  /* 1a3880: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1a3884: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1a3888: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1a388c: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1a3890: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1a3894: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 1a3898: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1a389c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1a38a0: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 1a38a4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1718440));
  fn2_1b8fd4(c);
  /* 1a38a8: nop  */
  /* nop: no architectural effect here */
  /* 1a38ac: adr x8, #0x25d3a8 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2479016)));
  /* 1a38b0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1a38b4: tbz w8, #0, #0x1a3978 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1a3978;
L_1a38b8:;
  /* 1a38b8: nop  */
  /* nop: no architectural effect here */
  /* 1a38bc: adr x1, #0x25d3a0 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2479008)));
  /* 1a38c0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1a38c4: bl #0x1cccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1718472));
  fn2_1cccb8(c);
  /* 1a38c8: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1a38cc: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 1a38d0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1a38d4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1a38d8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1718492));
  fn2_1b8fd4(c);
  /* 1a38dc: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* 1a38e0: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* 1a38e4: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1718504));
  fn2_1d2c2c(c);
  /* 1a38e8: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 1a38ec: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1718512));
  fn2_1d2c2c(c);
  /* 1a38f0: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 1a38f4: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* 1a38f8: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1718524));
  fn2_1ccc74(c);
  /* 1a38fc: mov w20, #6 */
  ARC_W_W(c, 20, UINT64_C(6));
  /* 1a3900: mov w8, #0x18 */
  ARC_W_W(c, 8, UINT64_C(24));
  /* 1a3904: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* 1a3908: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1a390c: str w20, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 20));
  /* 1a3910: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 1a3914: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1718552));
  fn2_1d5dc0(c);
  /* 1a3918: mov w8, #0x11 */
  ARC_W_W(c, 8, UINT64_C(17));
  /* 1a391c: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 1a3920: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1a3924: str w8, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 8));
  /* 1a3928: bl #0x1d06b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1718572));
  fn2_1d06b8(c);
  /* 1a392c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1a3930: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1a3934: str w20, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 20));
  /* 1a3938: bl #0x1d2c70 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1718588));
  fn2_1d2c70(c);
  /* 1a393c: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 1a3940: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1a3944: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1718600));
  fn2_1d2b98(c);
  /* 1a3948: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1a394c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1718608));
  fn2_1d2d24(c);
  /* 1a3950: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1a3954: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1718616));
  fn2_1d2d24(c);
  /* 1a3958: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1a395c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1718624));
  fn2_1ccd9c(c);
  /* 1a3960: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1a3964: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1718632));
  fn2_1d2d24(c);
  /* 1a3968: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1a396c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1a3970: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1a3974: ret  */
  return;
L_1a3978:;
  /* 1a3978: nop  */
  /* nop: no architectural effect here */
  /* 1a397c: adr x0, #0x25d3a8 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2479016)));
  /* 1a3980: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1718660));
  fn2_24b710(c);
  /* 1a3984: cbz w0, #0x1a38b8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_1a38b8;
  /* 1a3988: nop  */
  /* nop: no architectural effect here */
  /* 1a398c: adr x20, #0x25d3a0 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2479008)));
  /* 1a3990: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* 1a3994: add x1, x1, #0x760 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1888)));
  /* 1a3998: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1a399c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1a39a0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1718692));
  fn2_1b8fd4(c);
  /* 1a39a4: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 1a39a8: nop  */
  /* nop: no architectural effect here */
  /* 1a39ac: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 1a39b0: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 1a39b4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1a39b8: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1718716));
  fn2_24b6f0(c);
  /* 1a39bc: nop  */
  /* nop: no architectural effect here */
  /* 1a39c0: adr x0, #0x25d3a8 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2479016)));
  /* 1a39c4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1718728));
  fn2_24b720(c);
  /* 1a39c8: b #0x1a38b8 */
  goto L_1a38b8;
}

void fn2_1a6c34(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077587508));
  /* 1a6c34: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* 1a6c38: cbz x0, #0x1a6c6c */
  if ((ARC_X_R(c, 0)) == 0) goto L_1a6c6c;
  /* 1a6c3c: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1a6c40: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1a6c44: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 1a6c48: ldr x8, [x8, #0xff8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4088))));
  /* 1a6c4c: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1a6c50: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1731668));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1a6c54: cbz x0, #0x1a6c64 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1a6c64;
  /* 1a6c58: bl #0x1b62dc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1731676));
  fn2_1b62dc(c);
  /* 1a6c5c: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* 1a6c60: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
L_1a6c64:;
  /* 1a6c64: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1a6c68: ret  */
  return;
L_1a6c6c:;
  /* 1a6c6c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1a6c70: ret  */
  return;
}

void fn2_1a8a9c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077595292));
  /* 1a8a9c: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
  /* 1a8aa0: ret  */
  return;
}

void fn2_1aa710(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077602576));
  /* 1aa710: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 1aa714: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1aa718: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1aa71c: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1aa720: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* 1aa724: ldr w8, [x1] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 1)));
  /* 1aa728: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1aa72c: cmp w8, w0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 0));
  /* 1aa730: b.ne #0x1aa83c */
  if (ARC_COND(c, 1)) goto L_1aa83c;
  /* 1aa734: adrp x21, #0x1e000 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1aa738: add x21, x21, #0xb6f */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(2927)));
  /* 1aa73c: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 1aa740: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1aa744: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1aa748: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1aa74c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1746768));
  fn2_1b8fd4(c);
  /* 1aa750: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 1aa754: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1aa758: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1746780));
  fn2_1b7d24(c);
  /* 1aa75c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1aa760: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1aa764: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1aa768: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1746796));
  fn2_1b8fd4(c);
  /* 1aa76c: add x21, sp, #4 */
  ARC_X_W(c, 21, ((c)->sp + UINT64_C(4)));
  /* 1aa770: str wzr, [sp, #4] */
  arc_st32(((c)->sp + INT64_C(4)), ARC_W_R(c, 31));
  /* 1aa774: add x0, x21, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(4)));
  /* 1aa778: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1746812));
  fn2_1d2c2c(c);
  /* 1aa77c: add x0, x21, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(12)));
  /* 1aa780: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1746820));
  fn2_1d2c2c(c);
  /* 1aa784: add x0, x21, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* 1aa788: str wzr, [sp, #0x18] */
  arc_st32(((c)->sp + INT64_C(24)), ARC_W_R(c, 31));
  /* 1aa78c: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1746832));
  fn2_1ccc74(c);
  /* 1aa790: mov w22, #6 */
  ARC_W_W(c, 22, UINT64_C(6));
  /* 1aa794: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
  /* 1aa798: add x0, x21, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(4)));
  /* 1aa79c: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1aa7a0: str w22, [sp, #0x24] */
  arc_st32(((c)->sp + INT64_C(36)), ARC_W_R(c, 22));
  /* 1aa7a4: str w8, [sp, #4] */
  arc_st32(((c)->sp + INT64_C(4)), ARC_W_R(c, 8));
  /* 1aa7a8: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1746860));
  fn2_1d5dc0(c);
  /* 1aa7ac: add x0, x21, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* 1aa7b0: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 1aa7b4: str wzr, [sp, #0x18] */
  arc_st32(((c)->sp + INT64_C(24)), ARC_W_R(c, 31));
  /* 1aa7b8: bl #0x1d06b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1746876));
  fn2_1d06b8(c);
  /* 1aa7bc: add x0, x21, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(12)));
  /* 1aa7c0: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1aa7c4: str w22, [sp, #0x24] */
  arc_st32(((c)->sp + INT64_C(36)), ARC_W_R(c, 22));
  /* 1aa7c8: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1746892));
  fn2_1d5dc0(c);
  /* 1aa7cc: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1aa7d0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1746900));
  fn2_1d2d24(c);
  /* 1aa7d4: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 1aa7d8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1746908));
  fn2_1ccd9c(c);
  /* 1aa7dc: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1aa7e0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1746916));
  fn2_1d2d24(c);
  /* 1aa7e4: ldr w8, [sp, #4] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(4))));
  /* 1aa7e8: add x0, x20, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(4)));
  /* 1aa7ec: add x1, x21, #4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(4)));
  /* 1aa7f0: str w8, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 8));
  /* 1aa7f4: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1746936));
  fn2_1d2b98(c);
  /* 1aa7f8: add x0, x20, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(12)));
  /* 1aa7fc: add x1, x21, #0xc */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(12)));
  /* 1aa800: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1746948));
  fn2_1d2b98(c);
  /* 1aa804: ldr w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(24))));
  /* 1aa808: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 1aa80c: add x1, x21, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* 1aa810: str w8, [x20, #0x14] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(20)), ARC_W_R(c, 8));
  /* 1aa814: bl #0x1d0708 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1746968));
  fn2_1d0708(c);
  /* 1aa818: ldr w8, [sp, #0x24] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(36))));
  /* 1aa81c: add x0, x21, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* 1aa820: str w8, [x20, #0x20] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(32)), ARC_W_R(c, 8));
  /* 1aa824: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1746984));
  fn2_1ccd9c(c);
  /* 1aa828: add x0, x21, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(12)));
  /* 1aa82c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1746992));
  fn2_1d2d24(c);
  /* 1aa830: add x0, x21, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(4)));
  /* 1aa834: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1747000));
  fn2_1d2d24(c);
  /* 1aa838: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
L_1aa83c:;
  /* 1aa83c: add w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* 1aa840: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 1aa844: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1aa848: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1aa84c: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1aa850: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 1aa854: ret  */
  return;
}

void fn2_1aed6c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077620588));
  /* 1aed6c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1aed70: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1aed74: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1aed78: cmp w1, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(4));
  /* 1aed7c: b.ge #0x1aede4 */
  if (ARC_COND(c, 10)) goto L_1aede4;
  /* 1aed80: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1aed84: mov w19, w1 */
  ARC_W_W(c, 19, ARC_W_R(c, 1));
  /* 1aed88: ldr x8, [x8, #0x620] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1568))));
  /* 1aed8c: str w1, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 1));
  /* 1aed90: cbz x0, #0x1aeda4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1aeda4;
  /* 1aed94: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1aed98: cbz x8, #0x1aeda4 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1aeda4;
  /* 1aed9c: mov w0, w19 */
  ARC_W_W(c, 0, ARC_W_R(c, 19));
  /* 1aeda0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1764772));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1aeda4:;
  /* 1aeda4: ubfiz x8, x19, #2, #0x20 */
  ARC_X_W(c, 8, ((uint64_t)((((uint64_t)(ARC_X_R(c, 19))) & UINT64_C(4294967295))) << 2));
  /* 1aeda8: nop  */
  /* nop: no architectural effect here */
  /* 1aedac: adr x9, #0x25d92c */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2480428)));
  /* 1aedb0: ldr w10, [x9, x8] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + ARC_X_R(c, 8))));
  /* 1aedb4: subs w10, w10, #1 */
  ARC_W_W(c, 10, arc_sub32(c, ARC_W_R(c, 10), UINT64_C(1)));
  /* 1aedb8: str w10, [x9, x8] */
  arc_st32((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_W_R(c, 10));
  /* 1aedbc: b.eq #0x1aedcc */
  if (ARC_COND(c, 0)) goto L_1aedcc;
  /* 1aedc0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1aedc4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1aedc8: ret  */
  return;
L_1aedcc:;
  /* 1aedcc: mov w0, w19 */
  ARC_W_W(c, 0, ARC_W_R(c, 19));
  /* 1aedd0: bl #0x1af340 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1764820));
  fn2_1af340(c);
  /* 1aedd4: mov w0, w19 */
  ARC_W_W(c, 0, ARC_W_R(c, 19));
  /* 1aedd8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1aeddc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1aede0: b #0x1b2b2c */
  fn2_1b2b2c(c); return;
L_1aede4:;
  /* 1aede4: adrp x0, #0x35000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(217088)));
  /* 1aede8: add x0, x0, #0x6a9 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1705)));
  /* 1aedec: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 1aedf0: add x1, x1, #0xc80 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3200)));
  /* 1aedf4: adrp x3, #0x2f000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(192512)));
  /* 1aedf8: add x3, x3, #0xc4e */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(3150)));
  /* 1aedfc: mov w2, #0x224 */
  ARC_W_W(c, 2, UINT64_C(548));
  /* 1aee00: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 1aee04: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 1aee08: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1aee0c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1aee10: b #0x1b54b0 */
  fn2_1b54b0(c); return;
}

void fn2_1aff64(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077625188));
  /* 1aff64: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1aff68: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1aff6c: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1aff70: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1aff74: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1aff78: nop  */
  /* nop: no architectural effect here */
  /* 1aff7c: adr x8, #0x25d980 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2480512)));
  /* 1aff80: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1aff84: tbz w8, #0, #0x1b005c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1b005c;
L_1aff88:;
  /* 1aff88: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1aff8c: add x8, x8, #0x990 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2448)));
  /* 1aff90: ldp x22, x8, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 1aff94: cmp x22, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* 1aff98: b.hs #0x1affa4 */
  if (ARC_COND(c, 2)) goto L_1affa4;
  /* 1aff9c: str x0, [x22], #8 */
  { const uint64_t _a = ARC_X_R(c, 22);
    ARC_X_W(c, 22, ARC_X_R(c, 22) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 0));
  }
  /* 1affa0: b #0x1b0040 */
  goto L_1b0040;
L_1affa4:;
  /* 1affa4: adrp x9, #0x25d000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1affa8: ldr x19, [x9, #0x988] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 9) + INT64_C(2440))));
  /* 1affac: sub x20, x22, x19 */
  ARC_X_W(c, 20, (ARC_X_R(c, 22) - ARC_X_R(c, 19)));
  /* 1affb0: asr x22, x20, #3 */
  ARC_X_W(c, 22, ((uint64_t)((int64_t)(ARC_X_R(c, 20)) >> ((UINT64_C(3)) & 63))));
  /* 1affb4: add x9, x22, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* 1affb8: lsr x10, x9, #0x3d */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(61)) & 63)));
  /* 1affbc: cbnz x10, #0x1b00ac */
  if ((ARC_X_R(c, 10)) != 0) goto L_1b00ac;
  /* 1affc0: sub x8, x8, x19 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 19)));
  /* 1affc4: mov x11, #0x7ffffffffffffff8 */
  ARC_X_W(c, 11, UINT64_C(9223372036854775800));
  /* 1affc8: asr x10, x8, #2 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* 1affcc: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* 1affd0: csel x9, x10, x9, hi */
  ARC_X_W(c, 9, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 1affd4: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* 1affd8: mov x8, #0x1fffffffffffffff */
  ARC_X_W(c, 8, UINT64_C(2305843009213693951));
  /* 1affdc: csel x23, x9, x8, lo */
  ARC_X_W(c, 23, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 1affe0: cbz x23, #0x1b0004 */
  if ((ARC_X_R(c, 23)) == 0) goto L_1b0004;
  /* 1affe4: lsr x8, x23, #0x3d */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 23)) >> ((UINT64_C(61)) & 63)));
  /* 1affe8: cbnz x8, #0x1b00b8 */
  if ((ARC_X_R(c, 8)) != 0) goto L_1b00b8;
  /* 1affec: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 1afff0: lsl x0, x23, #3 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 23)) << ((UINT64_C(3)) & 63)));
  /* 1afff4: bl #0x24b750 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1769464));
  fn2_24b750(c);
  /* 1afff8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1afffc: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 1b0000: b #0x1b0008 */
  goto L_1b0008;
L_1b0004:;
  /* 1b0004: mov x21, xzr */
  ARC_X_W(c, 21, ARC_X_R(c, 31));
L_1b0008:;
  /* 1b0008: add x22, x21, x22, lsl #3 */
  ARC_X_W(c, 22, (ARC_X_R(c, 21) + ((uint64_t)(ARC_X_R(c, 22)) << 3)));
  /* 1b000c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1b0010: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1b0014: add x23, x21, x23, lsl #3 */
  ARC_X_W(c, 23, (ARC_X_R(c, 21) + ((uint64_t)(ARC_X_R(c, 23)) << 3)));
  /* 1b0018: str x0, [x22], #8 */
  { const uint64_t _a = ARC_X_R(c, 22);
    ARC_X_W(c, 22, ARC_X_R(c, 22) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 0));
  }
  /* 1b001c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1b0020: bl #0x24b7a0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1769508));
  fn2_24b7a0(c);
  /* 1b0024: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1b0028: add x8, x8, #0x988 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2440)));
  /* 1b002c: stp x21, x22, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* 1b0030: str x23, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 23));
  /* 1b0034: cbz x19, #0x1b0040 */
  if ((ARC_X_R(c, 19)) == 0) goto L_1b0040;
  /* 1b0038: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1b003c: bl #0x24b730 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1769536));
  fn2_24b730(c);
L_1b0040:;
  /* 1b0040: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1b0044: str x22, [x8, #0x990] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(2448)), ARC_X_R(c, 22));
  /* 1b0048: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1b004c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1b0050: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1b0054: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b0058: ret  */
  return;
L_1b005c:;
  /* 1b005c: nop  */
  /* nop: no architectural effect here */
  /* 1b0060: adr x19, #0x25d980 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2480512)));
  /* 1b0064: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1b0068: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1b006c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1769584));
  fn2_24b710(c);
  /* 1b0070: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1b0074: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1b0078: cbz w8, #0x1aff88 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1aff88;
  /* 1b007c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1b0080: nop  */
  /* nop: no architectural effect here */
  /* 1b0084: adr x0, #0x1b01a4 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(1769892)));
  /* 1b0088: nop  */
  /* nop: no architectural effect here */
  /* 1b008c: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 1b0090: stp xzr, xzr, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1b0094: str xzr, [x1, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 1, ARC_X_R(c, 1) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 31));
  }
  /* 1b0098: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1769628));
  fn2_24b6f0(c);
  /* 1b009c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1b00a0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1769636));
  fn2_24b720(c);
  /* 1b00a4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1b00a8: b #0x1aff88 */
  goto L_1aff88;
L_1b00ac:;
  /* 1b00ac: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1b00b0: add x0, x0, #0x988 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2440)));
  /* 1b00b4: bl #0x1b01bc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1769656));
  fn2_1b01bc(c);
L_1b00b8:;
  /* 1b00b8: bl #0x179cc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1769660));
  fn2_179cc0(c);
}

void fn2_1b3338(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077638456));
  /* 1b3338: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1b333c: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1b3340: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1b3344: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 1b3348: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1b334c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1b3350: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1b3354: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1782616));
  fn2_1db4a4(c);
  /* 1b3358: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1b335c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1b3360: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1782628));
  fn2_1d2c40(c);
  /* 1b3364: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1b3368: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1b336c: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1782640));
  fn2_1bc44c(c);
  /* 1b3370: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1b3374: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 1b3378: bl #0x1db988 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1782652));
  fn2_1db988(c);
  /* 1b337c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1b3380: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1782660));
  fn2_1bc620(c);
  /* 1b3384: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1b3388: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1b338c: bl #0x1db704 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1782672));
  fn2_1db704(c);
  /* 1b3390: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1b3394: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1782680));
  fn2_1d2d24(c);
  /* 1b3398: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1b339c: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1782688));
  fn2_1db788(c);
  /* 1b33a0: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1b33a4: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b33a8: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1b33ac: ret  */
  return;
}

void fn2_1b55d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077647320));
  /* 1b55d8: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1b55dc: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1b55e0: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1b55e4: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1b55e8: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1b55ec: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1b55f0: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 1b55f4: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 1b55f8: mov x0, x3 */
  ARC_X_W(c, 0, ARC_X_R(c, 3));
  /* 1b55fc: mov w19, w6 */
  ARC_W_W(c, 19, ARC_W_R(c, 6));
  /* 1b5600: mov w20, w5 */
  ARC_W_W(c, 20, ARC_W_R(c, 5));
  /* 1b5604: mov x21, x4 */
  ARC_X_W(c, 21, ARC_X_R(c, 4));
  /* 1b5608: mov w22, w2 */
  ARC_W_W(c, 22, ARC_W_R(c, 2));
  /* 1b560c: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* 1b5610: bl #0x1b7fd0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1791508));
  fn2_1b7fd0(c);
  /* 1b5614: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1b5618: bl #0x1b7b34 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1791516));
  fn2_1b7b34(c);
  /* 1b561c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1b5620: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1b5624: tst w19, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 19) & UINT64_C(1)));
  /* 1b5628: ldr x8, [x8, #0x6a0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1696))));
  /* 1b562c: ldr x9, [x9, #0x690] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(1680))));
  /* 1b5630: and w5, w20, #1 */
  ARC_W_W(c, 5, (ARC_W_R(c, 20) & UINT64_C(1)));
  /* 1b5634: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1b5638: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 1b563c: mov x3, x23 */
  ARC_X_W(c, 3, ARC_X_R(c, 23));
  /* 1b5640: csel x8, x8, x9, ne */
  ARC_X_W(c, 8, (ARC_COND(c, 1) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* 1b5644: mov w4, w22 */
  ARC_W_W(c, 4, ARC_W_R(c, 22));
  /* 1b5648: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1b564c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1791568));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1b5650: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1b5654: cbz x8, #0x1b5680 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1b5680;
  /* 1b5658: sub x1, x8, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) - UINT64_C(16)));
  /* 1b565c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 1b5660: bl #0x24b680 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1791588));
  fn2_24b680(c);
  /* 1b5664: cmp x0, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(1));
  /* 1b5668: b.ne #0x1b5680 */
  if (ARC_COND(c, 1)) goto L_1b5680;
  /* 1b566c: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1b5670: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1b5674: str xzr, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 31));
  /* 1b5678: sub x0, x8, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) - UINT64_C(16)));
  /* 1b567c: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1791616));
  fn2_1b5ce8(c);
L_1b5680:;
  /* 1b5680: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1b5684: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1b5688: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1b568c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b5690: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1b5694: ret  */
  return;
}

void fn2_1b6c8c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077653132));
  /* 1b6c8c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1b6c90: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1b6c94: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1b6c98: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1b6c9c: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1797280));
  fn2_1d2c40(c);
  /* 1b6ca0: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 1b6ca4: str wzr, [x19, #8] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(8)), ARC_W_R(c, 31));
  /* 1b6ca8: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1797292));
  fn2_1d2c2c(c);
  /* 1b6cac: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 1b6cb0: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1797300));
  fn2_1d2c2c(c);
  /* 1b6cb4: add x0, x19, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(32)));
  /* 1b6cb8: str wzr, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 31));
  /* 1b6cbc: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1797312));
  fn2_1ccc74(c);
  /* 1b6cc0: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* 1b6cc4: adrp x8, #0x37000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(225280)));
  /* 1b6cc8: str wzr, [x19, #0x30] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(48)), ARC_W_R(c, 31));
  /* 1b6ccc: ldr d0, [x8, #0x708] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(1800))));
  /* 1b6cd0: stp xzr, xzr, [x19, #0x78] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(120));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1b6cd4: str xzr, [x19, #0x70] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(112)), ARC_X_R(c, 31));
  /* 1b6cd8: str d0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  /* 1b6cdc: stur q1, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[1].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[1].u64[1]);
  /* 1b6ce0: stur q1, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[1].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[1].u64[1]);
  /* 1b6ce4: stur q1, [x19, #0x58] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(88)), (c)->q[1].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(88)) + 8, (c)->q[1].u64[1]);
  /* 1b6ce8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1b6cec: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b6cf0: ret  */
  return;
}

void fn2_1b7c2c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077657132));
  /* 1b7c2c: ldr x0, [x0] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 0)));
  /* 1b7c30: cbz x0, #0x1b7c48 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1b7c48;
  /* 1b7c34: ldur x4, [x0, #-8] */
  ARC_X_W(c, 4, arc_ld64((ARC_X_R(c, 0) + INT64_C(-8))));
  /* 1b7c38: cbz x4, #0x1b7c48 */
  if ((ARC_X_R(c, 4)) == 0) goto L_1b7c48;
  /* 1b7c3c: cmp x4, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 4), UINT64_C(0));
  /* 1b7c40: b.le #0x1b7c54 */
  if (ARC_COND(c, 13)) goto L_1b7c54;
  /* 1b7c44: ret  */
  return;
L_1b7c48:;
  /* 1b7c48: adrp x0, #0x36000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(221184)));
  /* 1b7c4c: add x0, x0, #0x3e4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(996)));
  /* 1b7c50: ret  */
  return;
L_1b7c54:;
  /* 1b7c54: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1b7c58: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1b7c5c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1b7c60: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1b7c64: adrp x0, #0x20000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(131072)));
  /* 1b7c68: add x0, x0, #0xf9e */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3998)));
  /* 1b7c6c: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 1b7c70: add x1, x1, #0x446 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1094)));
  /* 1b7c74: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 1b7c78: adrp x5, #0x25000 */
  ARC_X_W(c, 5, (arc_image_bases[2] + UINT64_C(151552)));
  /* 1b7c7c: add x5, x5, #0x33c */
  ARC_X_W(c, 5, (ARC_X_R(c, 5) + UINT64_C(828)));
  /* 1b7c80: adrp x6, #0x20000 */
  ARC_X_W(c, 6, (arc_image_bases[2] + UINT64_C(131072)));
  /* 1b7c84: add x6, x6, #0xcfc */
  ARC_X_W(c, 6, (ARC_X_R(c, 6) + UINT64_C(3324)));
  /* 1b7c88: adrp x7, #0x1e000 */
  ARC_X_W(c, 7, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1b7c8c: add x7, x7, #0xb6f */
  ARC_X_W(c, 7, (ARC_X_R(c, 7) + UINT64_C(2927)));
  /* 1b7c90: mov w2, #0xe1 */
  ARC_W_W(c, 2, UINT64_C(225));
  /* 1b7c94: strb w8, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 8));
  /* 1b7c98: strb wzr, [sp] */
  arc_st8((c)->sp, ARC_W_R(c, 31));
  /* 1b7c9c: bl #0x1b5870 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1801376));
  fn2_1b5870(c);
  /* 1b7ca0: bl #0x1b5b50 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1801380));
  fn2_1b5b50(c);
  /* 1b7ca4: brk #1 */
  arc_trap(c, "brk");
}

void fn2_1b883c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077660220));
  /* 1b883c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1b8840: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1b8844: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1b8848: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1b884c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1b8850: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1b8854: ldr x8, [x8, #0x810] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2064))));
  /* 1b8858: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* 1b885c: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1b8860: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1804388));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1b8864: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1b8868: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1b886c: bl #0x1cf764 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1804400));
  fn2_1cf764(c);
  /* 1b8870: mov w19, w0 */
  ARC_W_W(c, 19, ARC_W_R(c, 0));
  /* 1b8874: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1b8878: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1804412));
  fn2_1ccd9c(c);
  /* 1b887c: and w0, w19, #1 */
  ARC_W_W(c, 0, (ARC_W_R(c, 19) & UINT64_C(1)));
  /* 1b8880: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1b8884: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b8888: ret  */
  return;
}

void fn2_1b90c4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077662404));
  /* 1b90c4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1b90c8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1b90cc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1b90d0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1b90d4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1b90d8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1b90dc: ldr x8, [x8, #0x808] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2056))));
  /* 1b90e0: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* 1b90e4: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1b90e8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1806572));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1b90ec: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1b90f0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1b90f4: bl #0x1d6494 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1806584));
  fn2_1d6494(c);
  /* 1b90f8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1b90fc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1806592));
  fn2_1ccd9c(c);
  /* 1b9100: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1b9104: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b9108: ret  */
  return;
}

void fn2_1ba01c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077666332));
  /* 1ba01c: str xzr, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 31));
  /* 1ba020: ret  */
  return;
}

void fn2_1bae40(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077669952));
  /* 1bae40: b #0x1bae44 */
  fn2_1bae44(c); return;
}

void fn2_1bbcf8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077673720));
  /* 1bbcf8: nop  */
  /* nop: no architectural effect here */
  /* 1bbcfc: adr x8, #0x25d718 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2479896)));
  /* 1bbd00: ldr x2, [x8] */
  ARC_X_W(c, 2, arc_ld64(ARC_X_R(c, 8)));
  /* 1bbd04: br x2 */
  arc_dispatch(c, ARC_X_R(c, 2)); return;
}

void fn2_1bbf38(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077674296));
  /* 1bbf38: nop  */
  /* nop: no architectural effect here */
  /* 1bbf3c: adr x8, #0x25d798 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2480024)));
  /* 1bbf40: ldr x2, [x8] */
  ARC_X_W(c, 2, arc_ld64(ARC_X_R(c, 8)));
  /* 1bbf44: br x2 */
  arc_dispatch(c, ARC_X_R(c, 2)); return;
}

void fn2_1bc438(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077675576));
  /* 1bc438: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1bc43c: stp xzr, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1bc440: str xzr, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 31));
  /* 1bc444: ldr x2, [x8, #0xb00] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 8) + INT64_C(2816))));
  /* 1bc448: br x2 */
  arc_dispatch(c, ARC_X_R(c, 2)); return;
}

void fn2_1bc84c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077676620));
  /* 1bc84c: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 1bc850: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1bc854: b #0x1ccc64 */
  fn2_1ccc64(c); return;
}

void fn2_1bcd0c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077677836));
  /* 1bcd0c: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 1bcd10: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1bcd14: b #0x1e456c */
  fn2_1e456c(c); return;
}

void fn2_1bd9dc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077681116));
  /* 1bd9dc: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1bd9e0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1bd9e4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1bd9e8: ldr x8, [x8, #0x740] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1856))));
  /* 1bd9ec: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1bd9f0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1825268));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1bd9f4: tst w0, #0xff */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 0) & UINT64_C(255)));
  /* 1bd9f8: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1bd9fc: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1bda00: ret  */
  return;
}

void fn2_1beaa4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077685412));
  /* 1beaa4: fmov s6, #1.00000000 */
  arc_s_w(c, 6, (float)(1.0));
  /* 1beaa8: tst w1, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 1) & UINT64_C(1)));
  /* 1beaac: fcsel s6, s6, s1, ne */
  arc_s_w(c, 6, (float)((ARC_COND(c, 1) ? ARC_S_R(c, 6) : ARC_S_R(c, 1))));
  /* 1beab0: fmul s0, s6, s0 */
  arc_s_w(c, 0, (float)(arc_fmul32(ARC_S_R(c, 6), ARC_S_R(c, 0))));
  /* 1beab4: fmov s6, #0.50000000 */
  arc_s_w(c, 6, (float)(0.5));
  /* 1beab8: fdiv s1, s0, s1 */
  arc_s_w(c, 1, (float)(arc_fdiv32(ARC_S_R(c, 0), ARC_S_R(c, 1))));
  /* 1beabc: fmul s7, s0, s6 */
  arc_s_w(c, 7, (float)(arc_fmul32(ARC_S_R(c, 0), ARC_S_R(c, 6))));
  /* 1beac0: fsub s0, s2, s7 */
  arc_s_w(c, 0, (float)(arc_fsub32(ARC_S_R(c, 2), ARC_S_R(c, 7))));
  /* 1beac4: fmul s6, s1, s6 */
  arc_s_w(c, 6, (float)(arc_fmul32(ARC_S_R(c, 1), ARC_S_R(c, 6))));
  /* 1beac8: fadd s1, s2, s7 */
  arc_s_w(c, 1, (float)(arc_fadd32(ARC_S_R(c, 2), ARC_S_R(c, 7))));
  /* 1beacc: fsub s2, s3, s6 */
  arc_s_w(c, 2, (float)(arc_fsub32(ARC_S_R(c, 3), ARC_S_R(c, 6))));
  /* 1bead0: fadd s3, s3, s6 */
  arc_s_w(c, 3, (float)(arc_fadd32(ARC_S_R(c, 3), ARC_S_R(c, 6))));
  /* 1bead4: b #0x1be938 */
  fn2_1be938(c); return;
}

void fn2_1c12bc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077695676));
  /* 1c12bc: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1c12c0: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1c12c4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1c12c8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1c12cc: tbnz x1, #0x3f, #0x1c1538 */
  if (((ARC_X_R(c, 1)) >> 63 & 1) != 0) goto L_1c1538;
  /* 1c12d0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1c12d4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1c12d8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1c12dc: cbz x8, #0x1c12f0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1c12f0;
  /* 1c12e0: ldur x21, [x8, #-8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(-8))));
  /* 1c12e4: cmp x21, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 19));
  /* 1c12e8: b.ne #0x1c12fc */
  if (ARC_COND(c, 1)) goto L_1c12fc;
  /* 1c12ec: b #0x1c1470 */
  goto L_1c1470;
L_1c12f0:;
  /* 1c12f0: mov x21, xzr */
  ARC_X_W(c, 21, ARC_X_R(c, 31));
  /* 1c12f4: cmp xzr, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 31), ARC_X_R(c, 19));
  /* 1c12f8: b.eq #0x1c1470 */
  if (ARC_COND(c, 0)) goto L_1c1470;
L_1c12fc:;
  /* 1c12fc: cbz x19, #0x1c133c */
  if ((ARC_X_R(c, 19)) == 0) goto L_1c133c;
  /* 1c1300: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1c1304: bl #0x1c15b4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1839880));
  fn2_1c15b4(c);
  /* 1c1308: lsl x8, x21, #4 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 21)) << ((UINT64_C(4)) & 63)));
  /* 1c130c: cbz x8, #0x1c137c */
  if ((ARC_X_R(c, 8)) == 0) goto L_1c137c;
  /* 1c1310: sub x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 1c1314: orr x8, x8, x8, lsr #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 1)));
  /* 1c1318: orr x8, x8, x8, lsr #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 2)));
  /* 1c131c: orr x8, x8, x8, lsr #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 4)));
  /* 1c1320: orr x8, x8, x8, lsr #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 8)));
  /* 1c1324: orr x8, x8, x8, lsr #16 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 16)));
  /* 1c1328: orr x8, x8, x8, lsr #32 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 32)));
  /* 1c132c: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 1c1330: lsl x8, x19, #4 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 19)) << ((UINT64_C(4)) & 63)));
  /* 1c1334: cbnz x8, #0x1c1388 */
  if ((ARC_X_R(c, 8)) != 0) goto L_1c1388;
  /* 1c1338: b #0x1c13dc */
  goto L_1c13dc;
L_1c133c:;
  /* 1c133c: cbz x8, #0x1c1470 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1c1470;
  /* 1c1340: sub x1, x8, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) - UINT64_C(16)));
  /* 1c1344: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 1c1348: bl #0x24b680 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1839948));
  fn2_24b680(c);
  /* 1c134c: cmp x0, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(1));
  /* 1c1350: b.ne #0x1c1484 */
  if (ARC_COND(c, 1)) goto L_1c1484;
  /* 1c1354: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1c1358: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1c135c: str xzr, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 31));
  /* 1c1360: sub x0, x8, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) - UINT64_C(16)));
  /* 1c1364: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1839976));
  fn2_1b5ce8(c);
  /* 1c1368: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 1c136c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1c1370: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1c1374: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1c1378: ret  */
  return;
L_1c137c:;
  /* 1c137c: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* 1c1380: lsl x8, x19, #4 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 19)) << ((UINT64_C(4)) & 63)));
  /* 1c1384: cbz x8, #0x1c13dc */
  if ((ARC_X_R(c, 8)) == 0) goto L_1c13dc;
L_1c1388:;
  /* 1c1388: sub x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 1c138c: orr x8, x8, x8, lsr #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 1)));
  /* 1c1390: orr x8, x8, x8, lsr #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 2)));
  /* 1c1394: orr x8, x8, x8, lsr #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 4)));
  /* 1c1398: orr x8, x8, x8, lsr #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 8)));
  /* 1c139c: orr x8, x8, x8, lsr #16 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 16)));
  /* 1c13a0: orr x8, x8, x8, lsr #32 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 32)));
  /* 1c13a4: adds x11, x8, #1 */
  ARC_X_W(c, 11, arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0));
  /* 1c13a8: b.hs #0x1c13dc */
  if (ARC_COND(c, 2)) goto L_1c13dc;
  /* 1c13ac: cmp x21, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 19));
  /* 1c13b0: b.ge #0x1c1418 */
  if (ARC_COND(c, 10)) goto L_1c1418;
  /* 1c13b4: cmp x11, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 9));
  /* 1c13b8: b.ne #0x1c149c */
  if (ARC_COND(c, 1)) goto L_1c149c;
  /* 1c13bc: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* 1c13c0: sub x8, x9, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) - UINT64_C(8)));
  /* 1c13c4: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* 1c13c8: csel x8, xzr, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 8)));
  /* 1c13cc: ldr x11, [x8] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 8)));
  /* 1c13d0: subs x10, x19, x11 */
  ARC_X_W(c, 10, arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 11)));
  /* 1c13d4: b.gt #0x1c1504 */
  if (ARC_COND(c, 12)) goto L_1c1504;
  /* 1c13d8: b #0x1c1520 */
  goto L_1c1520;
L_1c13dc:;
  /* 1c13dc: adrp x0, #0x1a000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(106496)));
  /* 1c13e0: add x0, x0, #0x91b */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2331)));
  /* 1c13e4: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 1c13e8: add x1, x1, #0x446 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1094)));
  /* 1c13ec: adrp x3, #0x22000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(139264)));
  /* 1c13f0: add x3, x3, #0xf5e */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(3934)));
  /* 1c13f4: mov w2, #0x170 */
  ARC_W_W(c, 2, UINT64_C(368));
L_1c13f8:;
  /* 1c13f8: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 1c13fc: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 1c1400: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1840132));
  fn2_1b54b0(c);
  /* 1c1404: mov w0, #6 */
  ARC_W_W(c, 0, UINT64_C(6));
  /* 1c1408: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1c140c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1c1410: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1c1414: ret  */
  return;
L_1c1418:;
  /* 1c1418: b.ls #0x1c1470 */
  if (ARC_COND(c, 9)) goto L_1c1470;
  /* 1c141c: ldr x10, [x20] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 20)));
  /* 1c1420: cmp x11, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 9));
  /* 1c1424: b.eq #0x1c144c */
  if (ARC_COND(c, 0)) goto L_1c144c;
  /* 1c1428: sub x0, x10, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 10) - UINT64_C(16)));
  /* 1c142c: add x1, x8, #0x11 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(17)));
  /* 1c1430: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1c1434: bl #0x1b5bd8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1840184));
  fn2_1b5bd8(c);
  /* 1c1438: cbz x0, #0x1c1574 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1c1574;
  /* 1c143c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 1c1440: add x10, x0, #0x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* 1c1444: stlr x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 1c1448: str x10, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 10));
L_1c144c:;
  /* 1c144c: sub x8, x10, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) - UINT64_C(8)));
  /* 1c1450: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* 1c1454: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 1c1458: csel x8, xzr, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 8)));
  /* 1c145c: str x19, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 19));
  /* 1c1460: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1c1464: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1c1468: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1c146c: ret  */
  return;
L_1c1470:;
  /* 1c1470: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 1c1474: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1c1478: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1c147c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1c1480: ret  */
  return;
L_1c1484:;
  /* 1c1484: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 1c1488: str xzr, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 31));
  /* 1c148c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1c1490: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1c1494: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1c1498: ret  */
  return;
L_1c149c:;
  /* 1c149c: cbz x21, #0x1c14c8 */
  if ((ARC_X_R(c, 21)) == 0) goto L_1c14c8;
  /* 1c14a0: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* 1c14a4: add x1, x8, #0x11 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(17)));
  /* 1c14a8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1c14ac: sub x0, x9, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) - UINT64_C(16)));
  /* 1c14b0: bl #0x1b5bd8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1840308));
  fn2_1b5bd8(c);
  /* 1c14b4: cbz x0, #0x1c1574 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1c1574;
  /* 1c14b8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 1c14bc: add x9, x0, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* 1c14c0: stlr x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 1c14c4: b #0x1c14e8 */
  goto L_1c14e8;
L_1c14c8:;
  /* 1c14c8: add x0, x8, #0x11 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(17)));
  /* 1c14cc: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1c14d0: bl #0x1b5b60 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1840340));
  fn2_1b5b60(c);
  /* 1c14d4: cbz x0, #0x1c1594 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1c1594;
  /* 1c14d8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 1c14dc: add x9, x0, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* 1c14e0: stlr x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 1c14e4: str xzr, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 31));
L_1c14e8:;
  /* 1c14e8: str x9, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 9));
  /* 1c14ec: sub x8, x9, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) - UINT64_C(8)));
  /* 1c14f0: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* 1c14f4: csel x8, xzr, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 8)));
  /* 1c14f8: ldr x11, [x8] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 8)));
  /* 1c14fc: subs x10, x19, x11 */
  ARC_X_W(c, 10, arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 11)));
  /* 1c1500: b.le #0x1c1520 */
  if (ARC_COND(c, 13)) goto L_1c1520;
L_1c1504:;
  /* 1c1504: add x9, x9, x11, lsl #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 11)) << 4)));
L_1c1508:;
  /* 1c1508: str wzr, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 31));
  /* 1c150c: subs x10, x10, #1 */
  ARC_X_W(c, 10, arc_sub64(c, ARC_X_R(c, 10), UINT64_C(1)));
  /* 1c1510: stur xzr, [x9, #4] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(4)), ARC_X_R(c, 31));
  /* 1c1514: str wzr, [x9, #0xc] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(12)), ARC_W_R(c, 31));
  /* 1c1518: add x9, x9, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* 1c151c: b.ne #0x1c1508 */
  if (ARC_COND(c, 1)) goto L_1c1508;
L_1c1520:;
  /* 1c1520: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 1c1524: str x19, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 19));
  /* 1c1528: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1c152c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1c1530: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1c1534: ret  */
  return;
L_1c1538:;
  /* 1c1538: adrp x0, #0x1a000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(106496)));
  /* 1c153c: add x0, x0, #0x91b */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2331)));
  /* 1c1540: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 1c1544: add x1, x1, #0x446 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1094)));
  /* 1c1548: adrp x3, #0x25000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(151552)));
  /* 1c154c: add x3, x3, #0xcb8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(3256)));
  /* 1c1550: mov w2, #0x15d */
  ARC_W_W(c, 2, UINT64_C(349));
  /* 1c1554: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 1c1558: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 1c155c: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1840480));
  fn2_1b54b0(c);
  /* 1c1560: mov w0, #0x1f */
  ARC_W_W(c, 0, UINT64_C(31));
  /* 1c1564: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1c1568: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1c156c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1c1570: ret  */
  return;
L_1c1574:;
  /* 1c1574: adrp x0, #0x29000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(167936)));
  /* 1c1578: add x0, x0, #0xebd */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3773)));
  /* 1c157c: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 1c1580: add x1, x1, #0x446 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1094)));
  /* 1c1584: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* 1c1588: add x3, x3, #0xca8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(3240)));
  /* 1c158c: mov w2, #0x1af */
  ARC_W_W(c, 2, UINT64_C(431));
  /* 1c1590: b #0x1c13f8 */
  goto L_1c13f8;
L_1c1594:;
  /* 1c1594: adrp x0, #0x1a000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(106496)));
  /* 1c1598: add x0, x0, #0x91b */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2331)));
  /* 1c159c: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 1c15a0: add x1, x1, #0x446 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1094)));
  /* 1c15a4: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* 1c15a8: add x3, x3, #0xca8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(3240)));
  /* 1c15ac: mov w2, #0x177 */
  ARC_W_W(c, 2, UINT64_C(375));
  /* 1c15b0: b #0x1c13f8 */
  goto L_1c13f8;
}

void fn2_1c2fe8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077703144));
  /* 1c2fe8: ldp s1, s2, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_su_w(c, 1, arc_ld32(_pa));
    arc_su_w(c, 2, arc_ld32((_pa + 4)));
  }
  /* 1c2fec: movi d0, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 1c2ff0: str wzr, [x8, #0xc] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(12)), ARC_W_R(c, 31));
  /* 1c2ff4: str wzr, [x8, #0x1c] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(28)), ARC_W_R(c, 31));
  /* 1c2ff8: str s1, [x8] */
  arc_st32(ARC_X_R(c, 8), (c)->q[1].u32[0]);
  /* 1c2ffc: ldr s1, [x0, #8] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 0) + INT64_C(8))));
  /* 1c3000: str s2, [x8, #0x10] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(16)), (c)->q[2].u32[0]);
  /* 1c3004: stur d0, [x8, #4] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(4)), (c)->q[0].u64[0]);
  /* 1c3008: stur d0, [x8, #0x14] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(20)), (c)->q[0].u64[0]);
  /* 1c300c: str s1, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), (c)->q[1].u32[0]);
  /* 1c3010: ret  */
  return;
}

void fn2_1c5b1c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077714204));
  /* 1c5b1c: ldp s1, s2, [x1] */
  { const uint64_t _pa = ARC_X_R(c, 1);
    arc_su_w(c, 1, arc_ld32(_pa));
    arc_su_w(c, 2, arc_ld32((_pa + 4)));
  }
  /* 1c5b20: fmov s0, #2.00000000 */
  arc_s_w(c, 0, (float)(2.0));
  /* 1c5b24: ldp s5, s6, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    arc_su_w(c, 5, arc_ld32(_pa));
    arc_su_w(c, 6, arc_ld32((_pa + 4)));
  }
  /* 1c5b28: fmov s19, #1.00000000 */
  arc_s_w(c, 19, (float)(1.0));
  /* 1c5b2c: fmul s3, s1, s1 */
  arc_s_w(c, 3, (float)(arc_fmul32(ARC_S_R(c, 1), ARC_S_R(c, 1))));
  /* 1c5b30: fmul s4, s2, s2 */
  arc_s_w(c, 4, (float)(arc_fmul32(ARC_S_R(c, 2), ARC_S_R(c, 2))));
  /* 1c5b34: fmul s7, s5, s5 */
  arc_s_w(c, 7, (float)(arc_fmul32(ARC_S_R(c, 5), ARC_S_R(c, 5))));
  /* 1c5b38: fadd s3, s3, s4 */
  arc_s_w(c, 3, (float)(arc_fadd32(ARC_S_R(c, 3), ARC_S_R(c, 4))));
  /* 1c5b3c: fmul s4, s6, s6 */
  arc_s_w(c, 4, (float)(arc_fmul32(ARC_S_R(c, 6), ARC_S_R(c, 6))));
  /* 1c5b40: fadd s3, s3, s7 */
  arc_s_w(c, 3, (float)(arc_fadd32(ARC_S_R(c, 3), ARC_S_R(c, 7))));
  /* 1c5b44: fadd s3, s3, s4 */
  arc_s_w(c, 3, (float)(arc_fadd32(ARC_S_R(c, 3), ARC_S_R(c, 4))));
  /* 1c5b48: fdiv s0, s0, s3 */
  arc_s_w(c, 0, (float)(arc_fdiv32(ARC_S_R(c, 0), ARC_S_R(c, 3))));
  /* 1c5b4c: fmul s3, s2, s0 */
  arc_s_w(c, 3, (float)(arc_fmul32(ARC_S_R(c, 2), ARC_S_R(c, 0))));
  /* 1c5b50: fmul s4, s5, s0 */
  arc_s_w(c, 4, (float)(arc_fmul32(ARC_S_R(c, 5), ARC_S_R(c, 0))));
  /* 1c5b54: fmul s0, s1, s0 */
  arc_s_w(c, 0, (float)(arc_fmul32(ARC_S_R(c, 1), ARC_S_R(c, 0))));
  /* 1c5b58: fmul s7, s6, s3 */
  arc_s_w(c, 7, (float)(arc_fmul32(ARC_S_R(c, 6), ARC_S_R(c, 3))));
  /* 1c5b5c: fmul s16, s1, s4 */
  arc_s_w(c, 16, (float)(arc_fmul32(ARC_S_R(c, 1), ARC_S_R(c, 4))));
  /* 1c5b60: fmul s17, s2, s3 */
  arc_s_w(c, 17, (float)(arc_fmul32(ARC_S_R(c, 2), ARC_S_R(c, 3))));
  /* 1c5b64: fmul s5, s5, s4 */
  arc_s_w(c, 5, (float)(arc_fmul32(ARC_S_R(c, 5), ARC_S_R(c, 4))));
  /* 1c5b68: fmul s3, s1, s3 */
  arc_s_w(c, 3, (float)(arc_fmul32(ARC_S_R(c, 1), ARC_S_R(c, 3))));
  /* 1c5b6c: fmul s1, s1, s0 */
  arc_s_w(c, 1, (float)(arc_fmul32(ARC_S_R(c, 1), ARC_S_R(c, 0))));
  /* 1c5b70: fmul s18, s6, s4 */
  arc_s_w(c, 18, (float)(arc_fmul32(ARC_S_R(c, 6), ARC_S_R(c, 4))));
  /* 1c5b74: fmul s0, s6, s0 */
  arc_s_w(c, 0, (float)(arc_fmul32(ARC_S_R(c, 6), ARC_S_R(c, 0))));
  /* 1c5b78: fmul s2, s2, s4 */
  arc_s_w(c, 2, (float)(arc_fmul32(ARC_S_R(c, 2), ARC_S_R(c, 4))));
  /* 1c5b7c: fadd s6, s16, s7 */
  arc_s_w(c, 6, (float)(arc_fadd32(ARC_S_R(c, 16), ARC_S_R(c, 7))));
  /* 1c5b80: fsub s7, s16, s7 */
  arc_s_w(c, 7, (float)(arc_fsub32(ARC_S_R(c, 16), ARC_S_R(c, 7))));
  /* 1c5b84: fadd s4, s17, s5 */
  arc_s_w(c, 4, (float)(arc_fadd32(ARC_S_R(c, 17), ARC_S_R(c, 5))));
  /* 1c5b88: fadd s5, s1, s5 */
  arc_s_w(c, 5, (float)(arc_fadd32(ARC_S_R(c, 1), ARC_S_R(c, 5))));
  /* 1c5b8c: fadd s1, s1, s17 */
  arc_s_w(c, 1, (float)(arc_fadd32(ARC_S_R(c, 1), ARC_S_R(c, 17))));
  /* 1c5b90: fadd s20, s3, s18 */
  arc_s_w(c, 20, (float)(arc_fadd32(ARC_S_R(c, 3), ARC_S_R(c, 18))));
  /* 1c5b94: fsub s3, s3, s18 */
  arc_s_w(c, 3, (float)(arc_fsub32(ARC_S_R(c, 3), ARC_S_R(c, 18))));
  /* 1c5b98: fadd s16, s2, s0 */
  arc_s_w(c, 16, (float)(arc_fadd32(ARC_S_R(c, 2), ARC_S_R(c, 0))));
  /* 1c5b9c: fsub s0, s2, s0 */
  arc_s_w(c, 0, (float)(arc_fsub32(ARC_S_R(c, 2), ARC_S_R(c, 0))));
  /* 1c5ba0: fsub s4, s19, s4 */
  arc_s_w(c, 4, (float)(arc_fsub32(ARC_S_R(c, 19), ARC_S_R(c, 4))));
  /* 1c5ba4: fsub s5, s19, s5 */
  arc_s_w(c, 5, (float)(arc_fsub32(ARC_S_R(c, 19), ARC_S_R(c, 5))));
  /* 1c5ba8: fsub s1, s19, s1 */
  arc_s_w(c, 1, (float)(arc_fsub32(ARC_S_R(c, 19), ARC_S_R(c, 1))));
  /* 1c5bac: stp s6, s20, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_st32(_pa, (c)->q[6].u32[0]);
    arc_st32((_pa + 4), (c)->q[20].u32[0]);
  }
  /* 1c5bb0: stp s7, s16, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    arc_st32(_pa, (c)->q[7].u32[0]);
    arc_st32((_pa + 4), (c)->q[16].u32[0]);
  }
  /* 1c5bb4: stp s4, s3, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st32(_pa, (c)->q[4].u32[0]);
    arc_st32((_pa + 4), (c)->q[3].u32[0]);
  }
  /* 1c5bb8: stp s5, s0, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st32(_pa, (c)->q[5].u32[0]);
    arc_st32((_pa + 4), (c)->q[0].u32[0]);
  }
  /* 1c5bbc: str s1, [x0, #0x20] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(32)), (c)->q[1].u32[0]);
  /* 1c5bc0: ret  */
  return;
}

void fn2_1c8b28(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077726504));
  /* 1c8b28: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1c8b2c: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1c8b30: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1c8b34: adrp x19, #0x258000 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1c8b38: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1c8b3c: ldr x19, [x19, #0x7b0] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(1968))));
  /* 1c8b40: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1c8b44: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1870664));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1c8b48: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1c8b4c: adrp x20, #0x25d000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1c8b50: add x20, x20, #0xd08 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(3336)));
  /* 1c8b54: str x0, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 0));
  /* 1c8b58: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
  /* 1c8b5c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1870688));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1c8b60: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1c8b64: str x0, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 0));
  /* 1c8b68: mov w0, #3 */
  ARC_W_W(c, 0, UINT64_C(3));
  /* 1c8b6c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1870704));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1c8b70: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1c8b74: str x0, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 0));
  /* 1c8b78: mov w0, #4 */
  ARC_W_W(c, 0, UINT64_C(4));
  /* 1c8b7c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1870720));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1c8b80: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1c8b84: str x0, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 0));
  /* 1c8b88: mov w0, #5 */
  ARC_W_W(c, 0, UINT64_C(5));
  /* 1c8b8c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1870736));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1c8b90: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1c8b94: str x0, [x20, #0x20] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(32)), ARC_X_R(c, 0));
  /* 1c8b98: mov w0, #6 */
  ARC_W_W(c, 0, UINT64_C(6));
  /* 1c8b9c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1870752));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1c8ba0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1c8ba4: str x0, [x20, #0x28] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(40)), ARC_X_R(c, 0));
  /* 1c8ba8: mov w0, #7 */
  ARC_W_W(c, 0, UINT64_C(7));
  /* 1c8bac: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1870768));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1c8bb0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1c8bb4: str x0, [x20, #0x30] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(48)), ARC_X_R(c, 0));
  /* 1c8bb8: mov w0, #8 */
  ARC_W_W(c, 0, UINT64_C(8));
  /* 1c8bbc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1870784));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1c8bc0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1c8bc4: str x0, [x20, #0x38] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(56)), ARC_X_R(c, 0));
  /* 1c8bc8: mov w0, #9 */
  ARC_W_W(c, 0, UINT64_C(9));
  /* 1c8bcc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1870800));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1c8bd0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1c8bd4: str x0, [x20, #0x40] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(64)), ARC_X_R(c, 0));
  /* 1c8bd8: mov w0, #0xa */
  ARC_W_W(c, 0, UINT64_C(10));
  /* 1c8bdc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1870816));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1c8be0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1c8be4: str x0, [x20, #0x48] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(72)), ARC_X_R(c, 0));
  /* 1c8be8: mov w0, #0xb */
  ARC_W_W(c, 0, UINT64_C(11));
  /* 1c8bec: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1870832));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1c8bf0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1c8bf4: str x0, [x20, #0x50] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(80)), ARC_X_R(c, 0));
  /* 1c8bf8: mov w0, #0xc */
  ARC_W_W(c, 0, UINT64_C(12));
  /* 1c8bfc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1870848));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1c8c00: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1c8c04: str x0, [x20, #0x58] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(88)), ARC_X_R(c, 0));
  /* 1c8c08: mov w0, #0xd */
  ARC_W_W(c, 0, UINT64_C(13));
  /* 1c8c0c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1870864));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1c8c10: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1c8c14: str x0, [x20, #0x60] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(96)), ARC_X_R(c, 0));
  /* 1c8c18: mov w0, #0xe */
  ARC_W_W(c, 0, UINT64_C(14));
  /* 1c8c1c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1870880));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1c8c20: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1c8c24: str x0, [x20, #0x68] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(104)), ARC_X_R(c, 0));
  /* 1c8c28: mov w0, #0xf */
  ARC_W_W(c, 0, UINT64_C(15));
  /* 1c8c2c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1870896));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1c8c30: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1c8c34: str x0, [x20, #0x70] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(112)), ARC_X_R(c, 0));
  /* 1c8c38: mov w0, #0x10 */
  ARC_W_W(c, 0, UINT64_C(16));
  /* 1c8c3c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1870912));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1c8c40: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1c8c44: str x0, [x20, #0x78] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(120)), ARC_X_R(c, 0));
  /* 1c8c48: mov w0, #0x11 */
  ARC_W_W(c, 0, UINT64_C(17));
  /* 1c8c4c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1870928));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1c8c50: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1c8c54: str x0, [x20, #0x80] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(128)), ARC_X_R(c, 0));
  /* 1c8c58: mov w0, #0x12 */
  ARC_W_W(c, 0, UINT64_C(18));
  /* 1c8c5c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1870944));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1c8c60: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1c8c64: str x0, [x20, #0x88] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(136)), ARC_X_R(c, 0));
  /* 1c8c68: mov w0, #0x13 */
  ARC_W_W(c, 0, UINT64_C(19));
  /* 1c8c6c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1870960));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1c8c70: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1c8c74: str x0, [x20, #0x90] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(144)), ARC_X_R(c, 0));
  /* 1c8c78: mov w0, #0x14 */
  ARC_W_W(c, 0, UINT64_C(20));
  /* 1c8c7c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1870976));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1c8c80: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1c8c84: str x0, [x20, #0x98] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(152)), ARC_X_R(c, 0));
  /* 1c8c88: mov w0, #0x15 */
  ARC_W_W(c, 0, UINT64_C(21));
  /* 1c8c8c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1870992));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1c8c90: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1c8c94: str x0, [x20, #0xa0] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(160)), ARC_X_R(c, 0));
  /* 1c8c98: mov w0, #0x16 */
  ARC_W_W(c, 0, UINT64_C(22));
  /* 1c8c9c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1871008));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1c8ca0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1c8ca4: str x0, [x20, #0xa8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(168)), ARC_X_R(c, 0));
  /* 1c8ca8: mov w0, #0x17 */
  ARC_W_W(c, 0, UINT64_C(23));
  /* 1c8cac: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1871024));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1c8cb0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1c8cb4: str x0, [x20, #0xb0] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(176)), ARC_X_R(c, 0));
  /* 1c8cb8: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* 1c8cbc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1871040));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1c8cc0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1c8cc4: str x0, [x20, #0xb8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(184)), ARC_X_R(c, 0));
  /* 1c8cc8: mov w0, #0x19 */
  ARC_W_W(c, 0, UINT64_C(25));
  /* 1c8ccc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1871056));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1c8cd0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1c8cd4: str x0, [x20, #0xc0] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(192)), ARC_X_R(c, 0));
  /* 1c8cd8: mov w0, #0x1a */
  ARC_W_W(c, 0, UINT64_C(26));
  /* 1c8cdc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1871072));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1c8ce0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1c8ce4: str x0, [x20, #0xc8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(200)), ARC_X_R(c, 0));
  /* 1c8ce8: mov w0, #0x1b */
  ARC_W_W(c, 0, UINT64_C(27));
  /* 1c8cec: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1871088));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1c8cf0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1c8cf4: str x0, [x20, #0xd0] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(208)), ARC_X_R(c, 0));
  /* 1c8cf8: mov w0, #0x1c */
  ARC_W_W(c, 0, UINT64_C(28));
  /* 1c8cfc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1871104));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1c8d00: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1c8d04: str x0, [x20, #0xd8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(216)), ARC_X_R(c, 0));
  /* 1c8d08: mov w0, #0x1d */
  ARC_W_W(c, 0, UINT64_C(29));
  /* 1c8d0c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1871120));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1c8d10: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1c8d14: str x0, [x20, #0xe0] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(224)), ARC_X_R(c, 0));
  /* 1c8d18: mov w0, #0x1e */
  ARC_W_W(c, 0, UINT64_C(30));
  /* 1c8d1c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1871136));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1c8d20: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1c8d24: str x0, [x20, #0xe8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(232)), ARC_X_R(c, 0));
  /* 1c8d28: mov w0, #0x1f */
  ARC_W_W(c, 0, UINT64_C(31));
  /* 1c8d2c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1871152));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1c8d30: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1c8d34: str x0, [x20, #0xf0] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(240)), ARC_X_R(c, 0));
  /* 1c8d38: mov w0, #0x20 */
  ARC_W_W(c, 0, UINT64_C(32));
  /* 1c8d3c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1871168));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1c8d40: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1c8d44: str x0, [x20, #0xf8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(248)), ARC_X_R(c, 0));
  /* 1c8d48: mov w0, #0x21 */
  ARC_W_W(c, 0, UINT64_C(33));
  /* 1c8d4c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1871184));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1c8d50: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1c8d54: str x0, [x20, #0x100] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(256)), ARC_X_R(c, 0));
  /* 1c8d58: mov w0, #0x22 */
  ARC_W_W(c, 0, UINT64_C(34));
  /* 1c8d5c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1871200));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1c8d60: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1c8d64: str x0, [x20, #0x108] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(264)), ARC_X_R(c, 0));
  /* 1c8d68: mov w0, #0x23 */
  ARC_W_W(c, 0, UINT64_C(35));
  /* 1c8d6c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1871216));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1c8d70: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1c8d74: str x0, [x20, #0x110] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(272)), ARC_X_R(c, 0));
  /* 1c8d78: mov w0, #0x24 */
  ARC_W_W(c, 0, UINT64_C(36));
  /* 1c8d7c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1871232));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1c8d80: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1c8d84: str x0, [x20, #0x118] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(280)), ARC_X_R(c, 0));
  /* 1c8d88: mov w0, #0x25 */
  ARC_W_W(c, 0, UINT64_C(37));
  /* 1c8d8c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1871248));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1c8d90: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1c8d94: str x0, [x20, #0x120] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(288)), ARC_X_R(c, 0));
  /* 1c8d98: mov w0, #0x26 */
  ARC_W_W(c, 0, UINT64_C(38));
  /* 1c8d9c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1871264));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1c8da0: str x0, [x20, #0x128] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(296)), ARC_X_R(c, 0));
  /* 1c8da4: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1c8da8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1c8dac: ret  */
  return;
}

void fn2_1c9b28(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077730600));
  /* 1c9b28: ldr q1, [x1] */
  arc_q_w(c, 1, arc_ld64(ARC_X_R(c, 1)), arc_ld64(ARC_X_R(c, 1) + 8));
  /* 1c9b2c: ldr q2, [x0] */
  arc_q_w(c, 2, arc_ld64(ARC_X_R(c, 0)), arc_ld64(ARC_X_R(c, 0) + 8));
  /* 1c9b30: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 1c9b34: fsub v1.4s, v1.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fsub32((c)->q[1].f32[0], (c)->q[2].f32[0]);
    _t.f32[1] = arc_fsub32((c)->q[1].f32[1], (c)->q[2].f32[1]);
    _t.f32[2] = arc_fsub32((c)->q[1].f32[2], (c)->q[2].f32[2]);
    _t.f32[3] = arc_fsub32((c)->q[1].f32[3], (c)->q[2].f32[3]);
    (c)->q[1] = _t; }
  /* 1c9b38: fmul v2.4s, v1.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[1].f32[0], (c)->q[1].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[1].f32[1], (c)->q[1].f32[1]);
    _t.f32[2] = arc_fmul32((c)->q[1].f32[2], (c)->q[1].f32[2]);
    _t.f32[3] = arc_fmul32((c)->q[1].f32[3], (c)->q[1].f32[3]);
    (c)->q[2] = _t; }
  /* 1c9b3c: dup v3.2s, v2.s[1] */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[2].u32[1]);
    _t.u32[1] = ((c)->q[2].u32[1]);
    (c)->q[3] = _t; }
  /* 1c9b40: ext v4.16b, v2.16b, v2.16b, #8 */
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
    (c)->q[4] = _t; }
  /* 1c9b44: fadd v3.2s, v2.2s, v3.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fadd32((c)->q[2].f32[0], (c)->q[3].f32[0]);
    _t.f32[1] = arc_fadd32((c)->q[2].f32[1], (c)->q[3].f32[1]);
    (c)->q[3] = _t; }
  /* 1c9b48: dup v2.2s, v2.s[3] */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[2].u32[3]);
    _t.u32[1] = ((c)->q[2].u32[3]);
    (c)->q[2] = _t; }
  /* 1c9b4c: fadd v3.2s, v3.2s, v4.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fadd32((c)->q[3].f32[0], (c)->q[4].f32[0]);
    _t.f32[1] = arc_fadd32((c)->q[3].f32[1], (c)->q[4].f32[1]);
    (c)->q[3] = _t; }
  /* 1c9b50: fadd v2.2s, v3.2s, v2.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fadd32((c)->q[3].f32[0], (c)->q[2].f32[0]);
    _t.f32[1] = arc_fadd32((c)->q[3].f32[1], (c)->q[2].f32[1]);
    (c)->q[2] = _t; }
  /* 1c9b54: fcmp s2, #0.0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 2)), (double)(0.0));
  /* 1c9b58: b.ne #0x1c9b6c */
  if (ARC_COND(c, 1)) goto L_1c9b6c;
  /* 1c9b5c: mov s1, v0.s[1] */
  arc_su_w(c, 1, (c)->q[0].u32[1]);
  /* 1c9b60: mov s2, v0.s[2] */
  arc_su_w(c, 2, (c)->q[0].u32[2]);
  /* 1c9b64: mov s3, v0.s[3] */
  arc_su_w(c, 3, (c)->q[0].u32[3]);
  /* 1c9b68: ret  */
  return;
L_1c9b6c:;
  /* 1c9b6c: fsqrt s0, s2 */
  arc_s_w(c, 0, (float)(arc_fsqrt32(ARC_S_R(c, 2))));
  /* 1c9b70: dup v0.4s, v0.s[0] */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0]);
    _t.u32[1] = ((c)->q[0].u32[0]);
    _t.u32[2] = ((c)->q[0].u32[0]);
    _t.u32[3] = ((c)->q[0].u32[0]);
    (c)->q[0] = _t; }
  /* 1c9b74: fdiv v0.4s, v1.4s, v0.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fdiv32((c)->q[1].f32[0], (c)->q[0].f32[0]);
    _t.f32[1] = arc_fdiv32((c)->q[1].f32[1], (c)->q[0].f32[1]);
    _t.f32[2] = arc_fdiv32((c)->q[1].f32[2], (c)->q[0].f32[2]);
    _t.f32[3] = arc_fdiv32((c)->q[1].f32[3], (c)->q[0].f32[3]);
    (c)->q[0] = _t; }
  /* 1c9b78: mov s1, v0.s[1] */
  arc_su_w(c, 1, (c)->q[0].u32[1]);
  /* 1c9b7c: mov s2, v0.s[2] */
  arc_su_w(c, 2, (c)->q[0].u32[2]);
  /* 1c9b80: mov s3, v0.s[3] */
  arc_su_w(c, 3, (c)->q[0].u32[3]);
  /* 1c9b84: ret  */
  return;
}

void fn2_1cce50(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077743696));
  /* 1cce50: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1cce54: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1cce58: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1cce5c: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1cce60: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 1cce64: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1cce68: ldr x8, [x8, #0xe80] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3712))));
  /* 1cce6c: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 1cce70: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1cce74: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1887864));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1cce78: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1cce7c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1cce80: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1cce84: ret  */
  return;
}

void fn2_1cd8d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077746388));
  /* 1cd8d4: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1cd8d8: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1cd8dc: str x21, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 21));
  /* 1cd8e0: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1cd8e4: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1cd8e8: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1cd8ec: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1cd8f0: add x8, x8, #0xe40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3648)));
  /* 1cd8f4: ldr x21, [x8, #0x140] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(320))));
  /* 1cd8f8: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1cd8fc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1cd900: str x1, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 1));
  /* 1cd904: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1cd908: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1cd90c: str x2, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 2));
  /* 1cd910: str xzr, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 31));
  /* 1cd914: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1890584));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1cd918: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1cd91c: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 1cd920: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1cd924: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1cd928: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1cd92c: mov w3, #2 */
  ARC_W_W(c, 3, UINT64_C(2));
  /* 1cd930: stp x8, x9, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1cd934: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1890616));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 1cd938: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1cd93c: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* 1cd940: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1cd944: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1cd948: ret  */
  return;
}

void fn2_1ce4e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077749472));
  /* 1ce4e0: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1ce4e4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1ce4e8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1ce4ec: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1ce4f0: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 1ce4f4: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1ce4f8: ldr x8, [x8, #0x80] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(128))));
  /* 1ce4fc: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1ce500: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1ce504: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1893640));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1ce508: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1ce50c: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1ce510: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1ce514: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1ce518: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1ce51c: ret  */
  return;
}

void fn2_1ceea8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077751976));
  /* 1ceea8: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1ceeac: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1ceeb0: str x21, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 21));
  /* 1ceeb4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1ceeb8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1ceebc: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1ceec0: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1ceec4: add x8, x8, #0xe40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3648)));
  /* 1ceec8: ldr x21, [x8, #0x340] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(832))));
  /* 1ceecc: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1ceed0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1ceed4: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 1ceed8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1ceedc: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1ceee0: str xzr, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 31));
  /* 1ceee4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1896168));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1ceee8: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 1ceeec: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1ceef0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1ceef4: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1ceef8: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1ceefc: str x8, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 8));
  /* 1cef00: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1896196));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 1cef04: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1cef08: ldr x21, [sp, #0x20] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1cef0c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1cef10: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1cef14: ret  */
  return;
}

void fn2_1cf928(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077754664));
  /* 1cf928: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1cf92c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1cf930: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1cf934: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1cf938: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 1cf93c: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1cf940: add x8, x8, #0xe40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3648)));
  /* 1cf944: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1cf948: ldr x0, [x8, #0x458] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(1112))));
  /* 1cf94c: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1cf950: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1cf954: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1cf958: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
  /* 1cf95c: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* 1cf960: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1cf964: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1898856));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1cf968: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1cf96c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1cf970: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1cf974: ldr x3, [x29, #0x18] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1cf978: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1cf97c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1cf980: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1cf984: br x3 */
  arc_dispatch(c, ARC_X_R(c, 3)); return;
}

void fn2_1d04d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077757656));
  /* 1d04d8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d04dc: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1d04e0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1d04e4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1d04e8: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 1d04ec: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1d04f0: add x8, x8, #0xe40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3648)));
  /* 1d04f4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1d04f8: ldr x0, [x8, #0x578] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(1400))));
  /* 1d04fc: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1d0500: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1d0504: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1d0508: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
  /* 1d050c: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* 1d0510: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1d0514: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1901848));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d0518: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1d051c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1d0520: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1d0524: ldr x3, [x29, #0x18] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1d0528: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1d052c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1d0530: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d0534: br x3 */
  arc_dispatch(c, ARC_X_R(c, 3)); return;
}

void fn2_1d3170(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077769072));
  /* 1d3170: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1d3174: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d3178: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1d317c: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d3180: stp x2, x1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 2));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 1d3184: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* 1d3188: ldr x8, [x8, #0x490] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1168))));
  /* 1d318c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1d3190: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1d3194: mov w3, #2 */
  ARC_W_W(c, 3, UINT64_C(2));
  /* 1d3198: str x9, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 9));
  /* 1d319c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1913248));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d31a0: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 1d31a4: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d31a8: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1d31ac: ret  */
  return;
}

void fn2_1d3c24(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077771812));
  /* 1d3c24: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1d3c28: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d3c2c: str x21, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 21));
  /* 1d3c30: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1d3c34: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1d3c38: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1d3c3c: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d3c40: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1d3c44: ldr x21, [x8, #0x590] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(1424))));
  /* 1d3c48: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1d3c4c: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 1d3c50: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1915988));
  fn2_1ccc74(c);
  /* 1d3c54: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 1d3c58: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1d3c5c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1d3c60: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1d3c64: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1d3c68: str x8, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 8));
  /* 1d3c6c: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1916016));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 1d3c70: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1d3c74: ldr x21, [sp, #0x20] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1d3c78: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d3c7c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1d3c80: ret  */
  return;
}

void fn2_1d461c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077774364));
  /* 1d461c: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1d4620: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d4624: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1d4628: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1d462c: adrp x9, #0x25e000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d4630: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1d4634: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1d4638: ldr x0, [x9, #0x690] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(1680))));
  /* 1d463c: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* 1d4640: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1d4644: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1918536));
  fn2_1ccc74(c);
  /* 1d4648: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1d464c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1d4650: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1d4654: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1d4658: ldr x4, [sp, #8] */
  ARC_X_W(c, 4, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1d465c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1d4660: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d4664: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1d4668: br x4 */
  arc_dispatch(c, ARC_X_R(c, 4)); return;
}

void fn2_1d4f1c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077776668));
  /* 1d4f1c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d4f20: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1d4f24: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1d4f28: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1d4f2c: adrp x9, #0x25e000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d4f30: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1d4f34: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1d4f38: ldr x0, [x9, #0x790] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(1936))));
  /* 1d4f3c: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 1d4f40: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* 1d4f44: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1d4f48: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1920844));
  fn2_1ccc74(c);
  /* 1d4f4c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1d4f50: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1d4f54: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1d4f58: ldr x3, [x29, #0x18] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1d4f5c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1d4f60: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1d4f64: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d4f68: br x3 */
  arc_dispatch(c, ARC_X_R(c, 3)); return;
}

void fn2_1d5818(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077778968));
  /* 1d5818: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d581c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1d5820: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1d5824: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1d5828: adrp x9, #0x25e000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d582c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1d5830: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1d5834: ldr x0, [x9, #0x898] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2200))));
  /* 1d5838: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 1d583c: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* 1d5840: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1d5844: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1923144));
  fn2_1ccc74(c);
  /* 1d5848: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1d584c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1d5850: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1d5854: ldr x3, [x29, #0x18] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1d5858: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1d585c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1d5860: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d5864: br x3 */
  arc_dispatch(c, ARC_X_R(c, 3)); return;
}

void fn2_1d6658(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077782616));
  /* 1d6658: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1d665c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d6660: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1d6664: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d6668: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 1d666c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1d6670: ldr x8, [x8, #0x998] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2456))));
  /* 1d6674: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1d6678: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1926780));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d667c: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1d6680: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d6684: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1d6688: ret  */
  return;
}

void fn2_1d7058(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077785176));
  /* 1d7058: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 1d705c: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* 1d7060: strb w8, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* 1d7064: strb w9, [x1] */
  arc_st8(ARC_X_R(c, 1), ARC_W_R(c, 9));
  /* 1d7068: ldrb w8, [x1, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(1))));
  /* 1d706c: ldrb w9, [x0, #1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(1))));
  /* 1d7070: strb w8, [x0, #1] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 8));
  /* 1d7074: strb w9, [x1, #1] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(1)), ARC_W_R(c, 9));
  /* 1d7078: ldrb w8, [x1, #2] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(2))));
  /* 1d707c: ldrb w9, [x0, #2] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(2))));
  /* 1d7080: strb w8, [x0, #2] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 8));
  /* 1d7084: strb w9, [x1, #2] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(2)), ARC_W_R(c, 9));
  /* 1d7088: ldrb w8, [x1, #3] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(3))));
  /* 1d708c: ldrb w9, [x0, #3] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(3))));
  /* 1d7090: strb w8, [x0, #3] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 8));
  /* 1d7094: strb w9, [x1, #3] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(3)), ARC_W_R(c, 9));
  /* 1d7098: ldrb w8, [x1, #4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(4))));
  /* 1d709c: ldrb w9, [x0, #4] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(4))));
  /* 1d70a0: strb w8, [x0, #4] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(4)), ARC_W_R(c, 8));
  /* 1d70a4: strb w9, [x1, #4] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(4)), ARC_W_R(c, 9));
  /* 1d70a8: ldrb w8, [x1, #5] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(5))));
  /* 1d70ac: ldrb w9, [x0, #5] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(5))));
  /* 1d70b0: strb w8, [x0, #5] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(5)), ARC_W_R(c, 8));
  /* 1d70b4: strb w9, [x1, #5] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(5)), ARC_W_R(c, 9));
  /* 1d70b8: ldrb w8, [x1, #6] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(6))));
  /* 1d70bc: ldrb w9, [x0, #6] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(6))));
  /* 1d70c0: strb w8, [x0, #6] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(6)), ARC_W_R(c, 8));
  /* 1d70c4: strb w9, [x1, #6] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(6)), ARC_W_R(c, 9));
  /* 1d70c8: ldrb w8, [x1, #7] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(7))));
  /* 1d70cc: ldrb w9, [x0, #7] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(7))));
  /* 1d70d0: strb w8, [x0, #7] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(7)), ARC_W_R(c, 8));
  /* 1d70d4: strb w9, [x1, #7] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(7)), ARC_W_R(c, 9));
  /* 1d70d8: ret  */
  return;
}

void fn2_1d80dc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077789404));
  /* 1d80dc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d80e0: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1d80e4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1d80e8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1d80ec: mov w0, #0x1a */
  ARC_W_W(c, 0, UINT64_C(26));
  /* 1d80f0: ldr x8, [x8, #0x7a8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1960))));
  /* 1d80f4: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1d80f8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1933564));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d80fc: adrp x19, #0x258000 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1d8100: nop  */
  /* nop: no architectural effect here */
  /* 1d8104: adr x20, #0x25eb90 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2485136)));
  /* 1d8108: ldr x19, [x19, #0x7c8] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(1992))));
  /* 1d810c: str x0, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 0));
  /* 1d8110: mov w0, #0x1a */
  ARC_W_W(c, 0, UINT64_C(26));
  /* 1d8114: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1d8118: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1d811c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1933600));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d8120: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1d8124: str x0, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 0));
  /* 1d8128: mov w0, #0x1a */
  ARC_W_W(c, 0, UINT64_C(26));
  /* 1d812c: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 1d8130: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1933620));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d8134: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1d8138: str x0, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 0));
  /* 1d813c: mov w0, #0x1a */
  ARC_W_W(c, 0, UINT64_C(26));
  /* 1d8140: mov w1, #2 */
  ARC_W_W(c, 1, UINT64_C(2));
  /* 1d8144: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1933640));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d8148: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1d814c: ldr x8, [x8, #0x7d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2000))));
  /* 1d8150: str x0, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 0));
  /* 1d8154: mov w0, #0x1a */
  ARC_W_W(c, 0, UINT64_C(26));
  /* 1d8158: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1d815c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1933664));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d8160: str x0, [x20, #0x20] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(32)), ARC_X_R(c, 0));
  /* 1d8164: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1d8168: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d816c: ret  */
  return;
}

void fn2_1d9808(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077795336));
  /* 1d9808: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1d980c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d9810: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1d9814: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d9818: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 1d981c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1d9820: ldr x8, [x8, #0xc68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3176))));
  /* 1d9824: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1d9828: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1939500));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d982c: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1d9830: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d9834: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1d9838: ret  */
  return;
}

void fn2_1da0a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077797536));
  /* 1da0a0: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1da0a4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1da0a8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1da0ac: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1da0b0: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1da0b4: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1da0b8: ldr x8, [x8, #0xd68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3432))));
  /* 1da0bc: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1da0c0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1941700));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1da0c4: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1da0c8: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1da0cc: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1da0d0: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1da0d4: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1da0d8: ret  */
  return;
}

void fn2_1db884(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077803652));
  /* 1db884: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1db888: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1db88c: str x21, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 21));
  /* 1db890: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1db894: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1db898: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1db89c: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1db8a0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1db8a4: ldr x21, [x8, #0xe78] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(3704))));
  /* 1db8a8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1db8ac: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 1db8b0: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1947828));
  fn2_1bc084(c);
  /* 1db8b4: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 1db8b8: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1db8bc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1db8c0: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1db8c4: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1db8c8: str x8, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 8));
  /* 1db8cc: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1947856));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 1db8d0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1db8d4: ldr x21, [sp, #0x20] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1db8d8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1db8dc: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1db8e0: ret  */
  return;
}

void fn2_1dc0dc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077805788));
  /* 1dc0dc: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1dc0e0: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1dc0e4: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1dc0e8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1dc0ec: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1dc0f0: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 1dc0f4: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1dc0f8: add x8, x8, #0xde0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3552)));
  /* 1dc0fc: ldr x22, [x8, #0x198] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + INT64_C(408))));
  /* 1dc100: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1dc104: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1dc108: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1dc10c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1dc110: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1dc114: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
  /* 1dc118: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1949980));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1dc11c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1dc120: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1dc124: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1dc128: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1dc12c: str x19, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 19));
  /* 1dc130: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1950004));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 1dc134: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1dc138: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1dc13c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1dc140: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1dc144: ret  */
  return;
}

void fn2_1ddd04(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077812996));
  /* 1ddd04: stp xzr, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1ddd08: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 1ddd0c: strb w8, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* 1ddd10: strb wzr, [x1] */
  arc_st8(ARC_X_R(c, 1), ARC_W_R(c, 31));
  /* 1ddd14: ldrb w8, [x1, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(1))));
  /* 1ddd18: ldrb w9, [x0, #1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(1))));
  /* 1ddd1c: strb w8, [x0, #1] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 8));
  /* 1ddd20: strb w9, [x1, #1] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(1)), ARC_W_R(c, 9));
  /* 1ddd24: ldrb w8, [x1, #2] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(2))));
  /* 1ddd28: ldrb w9, [x0, #2] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(2))));
  /* 1ddd2c: strb w8, [x0, #2] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 8));
  /* 1ddd30: strb w9, [x1, #2] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(2)), ARC_W_R(c, 9));
  /* 1ddd34: ldrb w8, [x1, #3] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(3))));
  /* 1ddd38: ldrb w9, [x0, #3] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(3))));
  /* 1ddd3c: strb w8, [x0, #3] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 8));
  /* 1ddd40: strb w9, [x1, #3] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(3)), ARC_W_R(c, 9));
  /* 1ddd44: ldrb w8, [x1, #4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(4))));
  /* 1ddd48: ldrb w9, [x0, #4] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(4))));
  /* 1ddd4c: strb w8, [x0, #4] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(4)), ARC_W_R(c, 8));
  /* 1ddd50: strb w9, [x1, #4] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(4)), ARC_W_R(c, 9));
  /* 1ddd54: ldrb w8, [x1, #5] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(5))));
  /* 1ddd58: ldrb w9, [x0, #5] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(5))));
  /* 1ddd5c: strb w8, [x0, #5] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(5)), ARC_W_R(c, 8));
  /* 1ddd60: strb w9, [x1, #5] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(5)), ARC_W_R(c, 9));
  /* 1ddd64: ldrb w8, [x1, #6] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(6))));
  /* 1ddd68: ldrb w9, [x0, #6] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(6))));
  /* 1ddd6c: strb w8, [x0, #6] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(6)), ARC_W_R(c, 8));
  /* 1ddd70: strb w9, [x1, #6] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(6)), ARC_W_R(c, 9));
  /* 1ddd74: ldrb w8, [x1, #7] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(7))));
  /* 1ddd78: ldrb w9, [x0, #7] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(7))));
  /* 1ddd7c: strb w8, [x0, #7] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(7)), ARC_W_R(c, 8));
  /* 1ddd80: strb w9, [x1, #7] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(7)), ARC_W_R(c, 9));
  /* 1ddd84: ldrb w8, [x1, #8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(8))));
  /* 1ddd88: ldrb w9, [x0, #8] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(8))));
  /* 1ddd8c: strb w8, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 8));
  /* 1ddd90: strb w9, [x1, #8] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(8)), ARC_W_R(c, 9));
  /* 1ddd94: ldrb w8, [x1, #9] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(9))));
  /* 1ddd98: ldrb w9, [x0, #9] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(9))));
  /* 1ddd9c: strb w8, [x0, #9] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* 1ddda0: strb w9, [x1, #9] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(9)), ARC_W_R(c, 9));
  /* 1ddda4: ldrb w8, [x1, #0xa] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(10))));
  /* 1ddda8: ldrb w9, [x0, #0xa] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(10))));
  /* 1dddac: strb w8, [x0, #0xa] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(10)), ARC_W_R(c, 8));
  /* 1dddb0: strb w9, [x1, #0xa] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(10)), ARC_W_R(c, 9));
  /* 1dddb4: ldrb w8, [x1, #0xb] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(11))));
  /* 1dddb8: ldrb w9, [x0, #0xb] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(11))));
  /* 1dddbc: strb w8, [x0, #0xb] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(11)), ARC_W_R(c, 8));
  /* 1dddc0: strb w9, [x1, #0xb] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(11)), ARC_W_R(c, 9));
  /* 1dddc4: ldrb w8, [x1, #0xc] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(12))));
  /* 1dddc8: ldrb w9, [x0, #0xc] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(12))));
  /* 1dddcc: strb w8, [x0, #0xc] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(12)), ARC_W_R(c, 8));
  /* 1dddd0: strb w9, [x1, #0xc] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(12)), ARC_W_R(c, 9));
  /* 1dddd4: ldrb w8, [x1, #0xd] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(13))));
  /* 1dddd8: ldrb w9, [x0, #0xd] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(13))));
  /* 1ddddc: strb w8, [x0, #0xd] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(13)), ARC_W_R(c, 8));
  /* 1ddde0: strb w9, [x1, #0xd] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(13)), ARC_W_R(c, 9));
  /* 1ddde4: ldrb w8, [x1, #0xe] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(14))));
  /* 1ddde8: ldrb w9, [x0, #0xe] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(14))));
  /* 1dddec: strb w8, [x0, #0xe] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(14)), ARC_W_R(c, 8));
  /* 1dddf0: strb w9, [x1, #0xe] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(14)), ARC_W_R(c, 9));
  /* 1dddf4: ldrb w8, [x1, #0xf] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(15))));
  /* 1dddf8: ldrb w9, [x0, #0xf] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(15))));
  /* 1dddfc: strb w8, [x0, #0xf] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(15)), ARC_W_R(c, 8));
  /* 1dde00: strb w9, [x1, #0xf] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(15)), ARC_W_R(c, 9));
  /* 1dde04: ret  */
  return;
}

void fn2_1de60c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077815308));
  /* 1de60c: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1de610: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1de614: str x21, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 21));
  /* 1de618: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1de61c: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1de620: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1de624: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1de628: add x8, x8, #0x60 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(96)));
  /* 1de62c: ldr x21, [x8, #0x110] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(272))));
  /* 1de630: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1de634: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1de638: str x1, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 1));
  /* 1de63c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1de640: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1de644: str x2, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 2));
  /* 1de648: stp xzr, xzr, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1de64c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1959504));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1de650: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1de654: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 1de658: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1de65c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1de660: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1de664: mov w3, #2 */
  ARC_W_W(c, 3, UINT64_C(2));
  /* 1de668: stp x8, x9, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1de66c: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1959536));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 1de670: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1de674: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* 1de678: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1de67c: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1de680: ret  */
  return;
}

void fn2_1def10(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077817616));
  /* 1def10: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1def14: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1def18: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1def1c: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1def20: stp x2, x1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 2));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 1def24: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 1def28: ldr x8, [x8, #0x270] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(624))));
  /* 1def2c: mov x10, sp */
  ARC_X_W(c, 10, (c)->sp);
  /* 1def30: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1def34: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1def38: mov w3, #2 */
  ARC_W_W(c, 3, UINT64_C(2));
  /* 1def3c: stp x9, x10, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 1def40: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1961796));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1def44: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1def48: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1def4c: ret  */
  return;
}

void fn2_1dffb4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077821876));
  /* 1dffb4: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1dffb8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1dffbc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1dffc0: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1dffc4: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* 1dffc8: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1dffcc: ldr x8, [x8, #0x368] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(872))));
  /* 1dffd0: stp x1, x9, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1dffd4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1dffd8: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1dffdc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1966048));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1dffe0: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1dffe4: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1dffe8: ret  */
  return;
}

void fn2_1e1054(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077826132));
  /* 1e1054: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1e1058: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e105c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1e1060: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e1064: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 1e1068: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1e106c: ldr x8, [x8, #0x460] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1120))));
  /* 1e1070: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1e1074: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1970296));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e1078: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1e107c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e1080: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1e1084: ret  */
  return;
}

void fn2_1e209c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077830300));
  /* 1e209c: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e20a0: stp xzr, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1e20a4: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1e20a8: ldr x2, [x8, #0x560] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 8) + INT64_C(1376))));
  /* 1e20ac: br x2 */
  arc_dispatch(c, ARC_X_R(c, 2)); return;
}

void fn2_1e28b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077832376));
  /* 1e28b8: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1e28bc: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e28c0: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1e28c4: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e28c8: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1e28cc: ldr x8, [x8, #0x678] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1656))));
  /* 1e28d0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1976532));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e28d4: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1e28d8: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1e28dc: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1e28e0: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e28e4: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1e28e8: ret  */
  return;
}

void fn2_1e3984(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077836676));
  /* 1e3984: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1e3988: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e398c: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 1e3990: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e3994: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 1e3998: add x9, sp, #0x10 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(16)));
  /* 1e399c: ldr x8, [x8, #0x750] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1872))));
  /* 1e39a0: add x10, sp, #8 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(8)));
  /* 1e39a4: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 1e39a8: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1e39ac: mov w3, #2 */
  ARC_W_W(c, 3, UINT64_C(2));
  /* 1e39b0: str d0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), (c)->q[0].u64[0]);
  /* 1e39b4: stp x9, x10, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 1e39b8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1980860));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e39bc: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 1e39c0: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e39c4: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1e39c8: ret  */
  return;
}

void fn2_1e4a00(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077840896));
  /* 1e4a00: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e4a04: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1e4a08: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1e4a0c: ldr x4, [x8, #0x848] */
  ARC_X_W(c, 4, arc_ld64((ARC_X_R(c, 8) + INT64_C(2120))));
  /* 1e4a10: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1e4a14: br x4 */
  arc_dispatch(c, ARC_X_R(c, 4)); return;
}

void fn2_1e5ac0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077845184));
  /* 1e5ac0: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1e5ac4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e5ac8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1e5acc: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e5ad0: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 1e5ad4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1e5ad8: ldr x8, [x8, #0x940] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2368))));
  /* 1e5adc: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1e5ae0: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1e5ae4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1989352));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e5ae8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e5aec: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1e5af0: ret  */
  return;
}

void fn2_1e6ad8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077849304));
  /* 1e6ad8: stp xzr, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1e6adc: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 1e6ae0: strb w8, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* 1e6ae4: strb wzr, [x1] */
  arc_st8(ARC_X_R(c, 1), ARC_W_R(c, 31));
  /* 1e6ae8: ldrb w8, [x1, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(1))));
  /* 1e6aec: ldrb w9, [x0, #1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(1))));
  /* 1e6af0: strb w8, [x0, #1] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 8));
  /* 1e6af4: strb w9, [x1, #1] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(1)), ARC_W_R(c, 9));
  /* 1e6af8: ldrb w8, [x1, #2] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(2))));
  /* 1e6afc: ldrb w9, [x0, #2] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(2))));
  /* 1e6b00: strb w8, [x0, #2] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 8));
  /* 1e6b04: strb w9, [x1, #2] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(2)), ARC_W_R(c, 9));
  /* 1e6b08: ldrb w8, [x1, #3] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(3))));
  /* 1e6b0c: ldrb w9, [x0, #3] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(3))));
  /* 1e6b10: strb w8, [x0, #3] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 8));
  /* 1e6b14: strb w9, [x1, #3] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(3)), ARC_W_R(c, 9));
  /* 1e6b18: ldrb w8, [x1, #4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(4))));
  /* 1e6b1c: ldrb w9, [x0, #4] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(4))));
  /* 1e6b20: strb w8, [x0, #4] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(4)), ARC_W_R(c, 8));
  /* 1e6b24: strb w9, [x1, #4] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(4)), ARC_W_R(c, 9));
  /* 1e6b28: ldrb w8, [x1, #5] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(5))));
  /* 1e6b2c: ldrb w9, [x0, #5] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(5))));
  /* 1e6b30: strb w8, [x0, #5] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(5)), ARC_W_R(c, 8));
  /* 1e6b34: strb w9, [x1, #5] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(5)), ARC_W_R(c, 9));
  /* 1e6b38: ldrb w8, [x1, #6] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(6))));
  /* 1e6b3c: ldrb w9, [x0, #6] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(6))));
  /* 1e6b40: strb w8, [x0, #6] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(6)), ARC_W_R(c, 8));
  /* 1e6b44: strb w9, [x1, #6] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(6)), ARC_W_R(c, 9));
  /* 1e6b48: ldrb w8, [x1, #7] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(7))));
  /* 1e6b4c: ldrb w9, [x0, #7] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(7))));
  /* 1e6b50: strb w8, [x0, #7] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(7)), ARC_W_R(c, 8));
  /* 1e6b54: strb w9, [x1, #7] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(7)), ARC_W_R(c, 9));
  /* 1e6b58: ldrb w8, [x1, #8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(8))));
  /* 1e6b5c: ldrb w9, [x0, #8] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(8))));
  /* 1e6b60: strb w8, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 8));
  /* 1e6b64: strb w9, [x1, #8] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(8)), ARC_W_R(c, 9));
  /* 1e6b68: ldrb w8, [x1, #9] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(9))));
  /* 1e6b6c: ldrb w9, [x0, #9] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(9))));
  /* 1e6b70: strb w8, [x0, #9] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* 1e6b74: strb w9, [x1, #9] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(9)), ARC_W_R(c, 9));
  /* 1e6b78: ldrb w8, [x1, #0xa] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(10))));
  /* 1e6b7c: ldrb w9, [x0, #0xa] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(10))));
  /* 1e6b80: strb w8, [x0, #0xa] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(10)), ARC_W_R(c, 8));
  /* 1e6b84: strb w9, [x1, #0xa] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(10)), ARC_W_R(c, 9));
  /* 1e6b88: ldrb w8, [x1, #0xb] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(11))));
  /* 1e6b8c: ldrb w9, [x0, #0xb] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(11))));
  /* 1e6b90: strb w8, [x0, #0xb] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(11)), ARC_W_R(c, 8));
  /* 1e6b94: strb w9, [x1, #0xb] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(11)), ARC_W_R(c, 9));
  /* 1e6b98: ldrb w8, [x1, #0xc] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(12))));
  /* 1e6b9c: ldrb w9, [x0, #0xc] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(12))));
  /* 1e6ba0: strb w8, [x0, #0xc] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(12)), ARC_W_R(c, 8));
  /* 1e6ba4: strb w9, [x1, #0xc] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(12)), ARC_W_R(c, 9));
  /* 1e6ba8: ldrb w8, [x1, #0xd] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(13))));
  /* 1e6bac: ldrb w9, [x0, #0xd] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(13))));
  /* 1e6bb0: strb w8, [x0, #0xd] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(13)), ARC_W_R(c, 8));
  /* 1e6bb4: strb w9, [x1, #0xd] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(13)), ARC_W_R(c, 9));
  /* 1e6bb8: ldrb w8, [x1, #0xe] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(14))));
  /* 1e6bbc: ldrb w9, [x0, #0xe] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(14))));
  /* 1e6bc0: strb w8, [x0, #0xe] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(14)), ARC_W_R(c, 8));
  /* 1e6bc4: strb w9, [x1, #0xe] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(14)), ARC_W_R(c, 9));
  /* 1e6bc8: ldrb w8, [x1, #0xf] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(15))));
  /* 1e6bcc: ldrb w9, [x0, #0xf] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(15))));
  /* 1e6bd0: strb w8, [x0, #0xf] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(15)), ARC_W_R(c, 8));
  /* 1e6bd4: strb w9, [x1, #0xf] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(15)), ARC_W_R(c, 9));
  /* 1e6bd8: ret  */
  return;
}

void fn2_1e7328(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077851432));
  /* 1e7328: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e732c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1e7330: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1e7334: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1e7338: adrp x21, #0x25f000 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e733c: add x21, x21, #0xa30 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(2608)));
  /* 1e7340: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1e7344: ldr x8, [x21, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 1e7348: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1e734c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1995600));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e7350: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 1e7354: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1e7358: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1e735c: str x19, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 19));
  /* 1e7360: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1995620));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e7364: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1e7368: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1e736c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1e7370: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e7374: ret  */
  return;
}

void fn2_1e83a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077855656));
  /* 1e83a8: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1e83ac: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e83b0: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1e83b4: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e83b8: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 1e83bc: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1e83c0: ldr x8, [x8, #0xc30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3120))));
  /* 1e83c4: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1e83c8: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1e83cc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1999824));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e83d0: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1e83d4: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1e83d8: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1e83dc: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e83e0: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1e83e4: ret  */
  return;
}

void fn2_1e9408(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077859848));
  /* 1e9408: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1e940c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e9410: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1e9414: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1e9418: adrp x9, #0x25f000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e941c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1e9420: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1e9424: ldr x0, [x9, #0xd28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(3368))));
  /* 1e9428: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* 1e942c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1e9430: bl #0x1ddc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2004020));
  fn2_1ddc90(c);
  /* 1e9434: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1e9438: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1e943c: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1e9440: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1e9444: ldr x4, [sp, #8] */
  ARC_X_W(c, 4, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1e9448: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1e944c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e9450: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1e9454: br x4 */
  arc_dispatch(c, ARC_X_R(c, 4)); return;
}

void fn2_1ea8d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077865176));
  /* 1ea8d8: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 1ea8dc: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1ea8e0: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1ea8e4: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1ea8e8: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1ea8ec: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1ea8f0: adrp x9, #0x25f000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1ea8f4: add x9, x9, #0xe98 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3736)));
  /* 1ea8f8: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 1ea8fc: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 1ea900: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 1ea904: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 1ea908: tbz w9, #0, #0x1ea970 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_1ea970;
L_1ea90c:;
  /* 1ea90c: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1ea910: ldr x23, [x0, #0x10] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1ea914: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1ea918: ldr x22, [x8, #0xe90] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + INT64_C(3728))));
  /* 1ea91c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2009376));
  fn2_1d2c2c(c);
  /* 1ea920: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1ea924: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 1ea928: sub x3, x29, #8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1ea92c: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 1ea930: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1ea934: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 1ea938: stp x21, x20, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* 1ea93c: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1ea940: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2009412));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1ea944: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1ea948: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1ea94c: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2009424));
  fn2_1d2c40(c);
  /* 1ea950: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1ea954: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2009432));
  fn2_1d2d24(c);
  /* 1ea958: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1ea95c: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1ea960: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1ea964: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1ea968: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 1ea96c: ret  */
  return;
L_1ea970:;
  /* 1ea970: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1ea974: add x8, x8, #0xe98 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3736)));
  /* 1ea978: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1ea97c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1ea980: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2009476));
  fn2_24b710(c);
  /* 1ea984: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1ea988: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1ea98c: cbz w8, #0x1ea90c */
  if ((ARC_W_R(c, 8)) == 0) goto L_1ea90c;
  /* 1ea990: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1ea994: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1ea998: ldr x24, [x8] */
  ARC_X_W(c, 24, arc_ld64(ARC_X_R(c, 8)));
  /* 1ea99c: bl #0x1ebc08 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2009504));
  fn2_1ebc08(c);
  /* 1ea9a0: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1ea9a4: adrp x1, #0x28000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(163840)));
  /* 1ea9a8: add x1, x1, #0x157 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(343)));
  /* 1ea9ac: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1ea9b0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1ea9b4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2009528));
  fn2_1b8fd4(c);
  /* 1ea9b8: mov w2, #0x5702 */
  ARC_W_W(c, 2, UINT64_C(22274));
  /* 1ea9bc: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1ea9c0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1ea9c4: movk w2, #0xe0c2, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3770810368)));
  /* 1ea9c8: blr x24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2009548));
  arc_dispatch(c, ARC_X_R(c, 24));
  /* 1ea9cc: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1ea9d0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1ea9d4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2009560));
  fn2_1d2d24(c);
  /* 1ea9d8: adrp x0, #0x25f000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1ea9dc: add x0, x0, #0xe90 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3728)));
  /* 1ea9e0: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 1ea9e4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2009576));
  fn2_24b720(c);
  /* 1ea9e8: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1ea9ec: b #0x1ea90c */
  goto L_1ea90c;
}

void fn2_1ece0c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077874700));
  /* 1ece0c: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1ece10: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1ece14: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1ece18: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1ece1c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1ece20: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1ece24: add x8, x8, #0x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(40)));
  /* 1ece28: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1ece2c: tbz w8, #0, #0x1ece78 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1ece78;
L_1ece30:;
  /* 1ece30: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1ece34: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1ece38: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 1ece3c: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 1ece40: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 1ece44: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1ece48: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 1ece4c: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 1ece50: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 1ece54: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1ece58: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 1ece5c: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2018912));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 1ece60: ldr w0, [sp, #8] */
  ARC_W_W(c, 0, arc_ld32(((c)->sp + INT64_C(8))));
  /* 1ece64: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1ece68: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1ece6c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1ece70: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1ece74: ret  */
  return;
L_1ece78:;
  /* 1ece78: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1ece7c: add x8, x8, #0x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(40)));
  /* 1ece80: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1ece84: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1ece88: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1ece8c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2018960));
  fn2_24b710(c);
  /* 1ece90: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1ece94: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1ece98: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1ece9c: cbz w8, #0x1ece30 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1ece30;
  /* 1ecea0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1ecea4: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1ecea8: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 1eceac: bl #0x1ed700 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2018992));
  fn2_1ed700(c);
  /* 1eceb0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1eceb4: adrp x1, #0x1d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(118784)));
  /* 1eceb8: add x1, x1, #0x13f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(319)));
  /* 1ecebc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1ecec0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1ecec4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2019016));
  fn2_1b8fd4(c);
  /* 1ecec8: mov w2, #0xfb5b */
  ARC_W_W(c, 2, UINT64_C(64347));
  /* 1ececc: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1eced0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1eced4: movk w2, #0x9e4, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(165937152)));
  /* 1eced8: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2019036));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 1ecedc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1ecee0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1ecee4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2019048));
  fn2_1d2d24(c);
  /* 1ecee8: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1eceec: add x0, x0, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(32)));
  /* 1ecef0: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 1ecef4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2019064));
  fn2_24b720(c);
  /* 1ecef8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1ecefc: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1ecf00: b #0x1ece30 */
  goto L_1ece30;
}

void fn2_1eea94(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077882004));
  /* 1eea94: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1eea98: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1eea9c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1eeaa0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1eeaa4: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1eeaa8: add x8, x8, #0x1c8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(456)));
  /* 1eeaac: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1eeab0: tbz w8, #0, #0x1eeaec */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1eeaec;
L_1eeab4:;
  /* 1eeab4: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1eeab8: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1eeabc: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1eeac0: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 1eeac4: ldr x8, [x8, #0x1c0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(448))));
  /* 1eeac8: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1eeacc: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1eead0: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 1eead4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1eead8: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2026204));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 1eeadc: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1eeae0: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1eeae4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1eeae8: ret  */
  return;
L_1eeaec:;
  /* 1eeaec: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1eeaf0: add x8, x8, #0x1c8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(456)));
  /* 1eeaf4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1eeaf8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1eeafc: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2026240));
  fn2_24b710(c);
  /* 1eeb00: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1eeb04: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1eeb08: cbz w8, #0x1eeab4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1eeab4;
  /* 1eeb0c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1eeb10: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1eeb14: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 1eeb18: bl #0x1f0cc4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2026268));
  fn2_1f0cc4(c);
  /* 1eeb1c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1eeb20: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* 1eeb24: add x1, x1, #0xac0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2752)));
  /* 1eeb28: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1eeb2c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1eeb30: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2026292));
  fn2_1b8fd4(c);
  /* 1eeb34: mov w2, #0x6d64 */
  ARC_W_W(c, 2, UINT64_C(28004));
  /* 1eeb38: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1eeb3c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1eeb40: movk w2, #0xbfdd, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3218931712)));
  /* 1eeb44: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2026312));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 1eeb48: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1eeb4c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1eeb50: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2026324));
  fn2_1d2d24(c);
  /* 1eeb54: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1eeb58: add x0, x0, #0x1c0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(448)));
  /* 1eeb5c: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 1eeb60: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2026340));
  fn2_24b720(c);
  /* 1eeb64: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1eeb68: b #0x1eeab4 */
  goto L_1eeab4;
}

void fn2_1f09ac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077889964));
  /* 1f09ac: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1f09b0: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1f09b4: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1f09b8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1f09bc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1f09c0: adrp x9, #0x260000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f09c4: add x9, x9, #0x3c8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(968)));
  /* 1f09c8: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 1f09cc: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 1f09d0: tbz w9, #0, #0x1f0a30 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_1f0a30;
L_1f09d4:;
  /* 1f09d4: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f09d8: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1f09dc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1f09e0: ldr x20, [x8, #0x3c0] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(960))));
  /* 1f09e4: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2034152));
  fn2_1ccc74(c);
  /* 1f09e8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f09ec: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 1f09f0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1f09f4: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 1f09f8: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1f09fc: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1f0a00: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1f0a04: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2034184));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1f0a08: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1f0a0c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f0a10: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2034196));
  fn2_1ccc88(c);
  /* 1f0a14: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1f0a18: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2034204));
  fn2_1ccd9c(c);
  /* 1f0a1c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1f0a20: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1f0a24: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1f0a28: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1f0a2c: ret  */
  return;
L_1f0a30:;
  /* 1f0a30: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f0a34: add x8, x8, #0x3c8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(968)));
  /* 1f0a38: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1f0a3c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f0a40: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2034244));
  fn2_24b710(c);
  /* 1f0a44: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1f0a48: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1f0a4c: cbz w8, #0x1f09d4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1f09d4;
  /* 1f0a50: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f0a54: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1f0a58: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 1f0a5c: bl #0x1f0cc4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2034272));
  fn2_1f0cc4(c);
  /* 1f0a60: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1f0a64: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* 1f0a68: add x1, x1, #0xcfa */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3322)));
  /* 1f0a6c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1f0a70: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1f0a74: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2034296));
  fn2_1b8fd4(c);
  /* 1f0a78: mov w2, #0x3dd0 */
  ARC_W_W(c, 2, UINT64_C(15824));
  /* 1f0a7c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1f0a80: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1f0a84: movk w2, #0xc05, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(201654272)));
  /* 1f0a88: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2034316));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 1f0a8c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1f0a90: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1f0a94: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2034328));
  fn2_1d2d24(c);
  /* 1f0a98: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f0a9c: add x0, x0, #0x3c0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(960)));
  /* 1f0aa0: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 1f0aa4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2034344));
  fn2_24b720(c);
  /* 1f0aa8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1f0aac: b #0x1f09d4 */
  goto L_1f09d4;
}

void fn2_1f2e40(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077899328));
  /* 1f2e40: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 1f2e44: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1f2e48: str x23, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 23));
  /* 1f2e4c: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1f2e50: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1f2e54: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1f2e58: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f2e5c: add x8, x8, #0x5c0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1472)));
  /* 1f2e60: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1f2e64: tbz w8, #0, #0x1f2ec4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1f2ec4;
L_1f2e68:;
  /* 1f2e68: adrp x11, #0x258000 */
  ARC_X_W(c, 11, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f2e6c: sxtw x9, w2 */
  ARC_X_W(c, 9, ((int64_t)(int32_t)(ARC_W_R(c, 2))));
  /* 1f2e70: adrp x10, #0x260000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f2e74: ldr x11, [x11, #0x980] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 11) + INT64_C(2432))));
  /* 1f2e78: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1f2e7c: ldr x0, [x10, #0x5b8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 10) + INT64_C(1464))));
  /* 1f2e80: stp x9, x1, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 1f2e84: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 1f2e88: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 1f2e8c: ldr x10, [x11] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 11)));
  /* 1f2e90: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1f2e94: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* 1f2e98: str x9, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 9));
  /* 1f2e9c: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2043552));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 1f2ea0: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1f2ea4: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 1f2ea8: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1f2eac: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1f2eb0: ldr x23, [sp, #0x30] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(48))));
  /* 1f2eb4: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1f2eb8: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1f2ebc: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 1f2ec0: ret  */
  return;
L_1f2ec4:;
  /* 1f2ec4: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f2ec8: add x8, x8, #0x5c0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1472)));
  /* 1f2ecc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1f2ed0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f2ed4: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1f2ed8: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 1f2edc: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2043616));
  fn2_24b710(c);
  /* 1f2ee0: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1f2ee4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1f2ee8: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1f2eec: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f2ef0: cbz w8, #0x1f2e68 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1f2e68;
  /* 1f2ef4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f2ef8: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1f2efc: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 1f2f00: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2043652));
  fn2_20293c(c);
  /* 1f2f04: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1f2f08: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 1f2f0c: add x1, x1, #0xb12 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2834)));
  /* 1f2f10: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1f2f14: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1f2f18: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2043676));
  fn2_1b8fd4(c);
  /* 1f2f1c: mov w2, #0xc232 */
  ARC_W_W(c, 2, UINT64_C(49714));
  /* 1f2f20: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1f2f24: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1f2f28: movk w2, #0xd14c, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3511418880)));
  /* 1f2f2c: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2043696));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 1f2f30: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1f2f34: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1f2f38: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2043708));
  fn2_1d2d24(c);
  /* 1f2f3c: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f2f40: add x0, x0, #0x5b8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1464)));
  /* 1f2f44: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 1f2f48: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2043724));
  fn2_24b720(c);
  /* 1f2f4c: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1f2f50: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f2f54: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1f2f58: b #0x1f2e68 */
  goto L_1f2e68;
}

void fn2_1f519c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077908380));
  /* 1f519c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1f51a0: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1f51a4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1f51a8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1f51ac: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f51b0: add x8, x8, #0x7c0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1984)));
  /* 1f51b4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1f51b8: tbz w8, #0, #0x1f51f4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1f51f4;
L_1f51bc:;
  /* 1f51bc: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f51c0: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f51c4: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1f51c8: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 1f51cc: ldr x8, [x8, #0x7b8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1976))));
  /* 1f51d0: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1f51d4: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1f51d8: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 1f51dc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f51e0: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2052580));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 1f51e4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1f51e8: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1f51ec: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1f51f0: ret  */
  return;
L_1f51f4:;
  /* 1f51f4: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f51f8: add x8, x8, #0x7c0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1984)));
  /* 1f51fc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1f5200: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f5204: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2052616));
  fn2_24b710(c);
  /* 1f5208: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1f520c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f5210: cbz w8, #0x1f51bc */
  if ((ARC_W_R(c, 8)) == 0) goto L_1f51bc;
  /* 1f5214: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f5218: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1f521c: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 1f5220: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2052644));
  fn2_20293c(c);
  /* 1f5224: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1f5228: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1f522c: add x1, x1, #0x817 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2071)));
  /* 1f5230: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1f5234: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1f5238: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2052668));
  fn2_1b8fd4(c);
  /* 1f523c: mov w2, #0x6d64 */
  ARC_W_W(c, 2, UINT64_C(28004));
  /* 1f5240: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1f5244: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1f5248: movk w2, #0xbfdd, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3218931712)));
  /* 1f524c: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2052688));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 1f5250: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1f5254: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1f5258: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2052700));
  fn2_1d2d24(c);
  /* 1f525c: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f5260: add x0, x0, #0x7b8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1976)));
  /* 1f5264: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 1f5268: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2052716));
  fn2_24b720(c);
  /* 1f526c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f5270: b #0x1f51bc */
  goto L_1f51bc;
}

void fn2_1f6f48(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077915976));
  /* 1f6f48: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1f6f4c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1f6f50: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1f6f54: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1f6f58: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f6f5c: add x8, x8, #0x9c0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2496)));
  /* 1f6f60: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1f6f64: tbz w8, #0, #0x1f6fac */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1f6fac;
L_1f6f68:;
  /* 1f6f68: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f6f6c: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f6f70: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1f6f74: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 1f6f78: ldr x8, [x8, #0x9b8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2488))));
  /* 1f6f7c: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1f6f80: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1f6f84: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 1f6f88: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f6f8c: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2060176));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 1f6f90: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1f6f94: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 1f6f98: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1f6f9c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1f6fa0: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1f6fa4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1f6fa8: ret  */
  return;
L_1f6fac:;
  /* 1f6fac: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f6fb0: add x8, x8, #0x9c0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2496)));
  /* 1f6fb4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1f6fb8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f6fbc: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2060224));
  fn2_24b710(c);
  /* 1f6fc0: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1f6fc4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f6fc8: cbz w8, #0x1f6f68 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1f6f68;
  /* 1f6fcc: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f6fd0: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1f6fd4: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 1f6fd8: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2060252));
  fn2_20293c(c);
  /* 1f6fdc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1f6fe0: adrp x1, #0x35000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(217088)));
  /* 1f6fe4: add x1, x1, #0x867 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2151)));
  /* 1f6fe8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1f6fec: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1f6ff0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2060276));
  fn2_1b8fd4(c);
  /* 1f6ff4: mov w2, #0xa5e1 */
  ARC_W_W(c, 2, UINT64_C(42465));
  /* 1f6ff8: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1f6ffc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1f7000: movk w2, #0x232, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(36831232)));
  /* 1f7004: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2060296));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 1f7008: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1f700c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1f7010: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2060308));
  fn2_1d2d24(c);
  /* 1f7014: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f7018: add x0, x0, #0x9b8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2488)));
  /* 1f701c: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 1f7020: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2060324));
  fn2_24b720(c);
  /* 1f7024: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f7028: b #0x1f6f68 */
  goto L_1f6f68;
}

void fn2_1f8fd8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077924312));
  /* 1f8fd8: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1f8fdc: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1f8fe0: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1f8fe4: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1f8fe8: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1f8fec: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f8ff0: add x8, x8, #0xbc0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3008)));
  /* 1f8ff4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1f8ff8: tbz w8, #0, #0x1f9048 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1f9048;
L_1f8ffc:;
  /* 1f8ffc: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f9000: adrp x9, #0x260000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f9004: sxtw x11, w1 */
  ARC_X_W(c, 11, ((int64_t)(int32_t)(ARC_W_R(c, 1))));
  /* 1f9008: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 1f900c: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1f9010: ldr x0, [x9, #0xbb8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(3000))));
  /* 1f9014: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 1f9018: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 1f901c: sub x3, x29, #8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1f9020: ldr x9, [x10] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 10)));
  /* 1f9024: stur xzr, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 31));
  /* 1f9028: stp x11, x8, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 1f902c: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2068528));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 1f9030: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 1f9034: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1f9038: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1f903c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1f9040: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1f9044: ret  */
  return;
L_1f9048:;
  /* 1f9048: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f904c: add x8, x8, #0xbc0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3008)));
  /* 1f9050: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1f9054: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f9058: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1f905c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2068576));
  fn2_24b710(c);
  /* 1f9060: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1f9064: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1f9068: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f906c: cbz w8, #0x1f8ffc */
  if ((ARC_W_R(c, 8)) == 0) goto L_1f8ffc;
  /* 1f9070: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f9074: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1f9078: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 1f907c: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2068608));
  fn2_20293c(c);
  /* 1f9080: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1f9084: adrp x1, #0x21000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(135168)));
  /* 1f9088: add x1, x1, #0xf47 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3911)));
  /* 1f908c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1f9090: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1f9094: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2068632));
  fn2_1b8fd4(c);
  /* 1f9098: mov w2, #0x89c6 */
  ARC_W_W(c, 2, UINT64_C(35270));
  /* 1f909c: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1f90a0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1f90a4: movk w2, #0x2d88, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(763887616)));
  /* 1f90a8: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2068652));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 1f90ac: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1f90b0: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1f90b4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2068664));
  fn2_1d2d24(c);
  /* 1f90b8: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f90bc: add x0, x0, #0xbb8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3000)));
  /* 1f90c0: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 1f90c4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2068680));
  fn2_24b720(c);
  /* 1f90c8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1f90cc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f90d0: b #0x1f8ffc */
  goto L_1f8ffc;
}

void fn2_1fb098(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077932696));
  /* 1fb098: sub sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(144)));
  /* 1fb09c: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1fb0a0: str x25, [sp, #0x50] */
  arc_st64(((c)->sp + INT64_C(80)), ARC_X_R(c, 25));
  /* 1fb0a4: stp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1fb0a8: stp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1fb0ac: stp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1fb0b0: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* 1fb0b4: adrp x9, #0x260000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fb0b8: add x9, x9, #0xdc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3520)));
  /* 1fb0bc: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 1fb0c0: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 1fb0c4: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 1fb0c8: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 1fb0cc: tbz w9, #0, #0x1fb14c */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_1fb14c;
L_1fb0d0:;
  /* 1fb0d0: fcvt d0, s0 */
  arc_d_w(c, 0, (double)(ARC_S_R(c, 0)));
  /* 1fb0d4: sxtw x8, w3 */
  ARC_X_W(c, 8, ((int64_t)(int32_t)(ARC_W_R(c, 3))));
  /* 1fb0d8: adrp x9, #0x260000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fb0dc: ldr x22, [x0, #0x10] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1fb0e0: ldr x23, [x9, #0xdb8] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 9) + INT64_C(3512))));
  /* 1fb0e4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1fb0e8: str x8, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 8));
  /* 1fb0ec: str d0, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), (c)->q[0].u64[0]);
  /* 1fb0f0: bl #0x1d6d14 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2076916));
  fn2_1d6d14(c);
  /* 1fb0f4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1fb0f8: add x9, sp, #0x18 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(24)));
  /* 1fb0fc: add x10, sp, #0x10 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(16)));
  /* 1fb100: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 1fb104: add x2, sp, #0x20 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(32)));
  /* 1fb108: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1fb10c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1fb110: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 1fb114: stp x21, x20, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* 1fb118: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1fb11c: stp x9, x10, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 1fb120: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2076964));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1fb124: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1fb128: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1fb12c: bl #0x1d6d28 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2076976));
  fn2_1d6d28(c);
  /* 1fb130: ldp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1fb134: ldr x25, [sp, #0x50] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(80))));
  /* 1fb138: ldp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1fb13c: ldp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1fb140: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1fb144: add sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(144)));
  /* 1fb148: ret  */
  return;
L_1fb14c:;
  /* 1fb14c: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fb150: add x8, x8, #0xdc0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3520)));
  /* 1fb154: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1fb158: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1fb15c: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* 1fb160: str s0, [sp, #0xc] */
  arc_st32(((c)->sp + INT64_C(12)), (c)->q[0].u32[0]);
  /* 1fb164: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2077032));
  fn2_24b710(c);
  /* 1fb168: ldr s0, [sp, #0xc] */
  arc_su_w(c, 0, arc_ld32(((c)->sp + INT64_C(12))));
  /* 1fb16c: mov x3, x22 */
  ARC_X_W(c, 3, ARC_X_R(c, 22));
  /* 1fb170: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1fb174: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1fb178: cbz w8, #0x1fb0d0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1fb0d0;
  /* 1fb17c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1fb180: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1fb184: ldr x25, [x8] */
  ARC_X_W(c, 25, arc_ld64(ARC_X_R(c, 8)));
  /* 1fb188: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2077068));
  fn2_20293c(c);
  /* 1fb18c: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 1fb190: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* 1fb194: add x1, x1, #0xd5f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3423)));
  /* 1fb198: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1fb19c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1fb1a0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2077092));
  fn2_1b8fd4(c);
  /* 1fb1a4: mov w2, #0xf1d7 */
  ARC_W_W(c, 2, UINT64_C(61911));
  /* 1fb1a8: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 1fb1ac: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 1fb1b0: movk w2, #0xc666, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3328573440)));
  /* 1fb1b4: blr x25 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2077112));
  arc_dispatch(c, ARC_X_R(c, 25));
  /* 1fb1b8: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 1fb1bc: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1fb1c0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2077124));
  fn2_1d2d24(c);
  /* 1fb1c4: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fb1c8: add x0, x0, #0xdb8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3512)));
  /* 1fb1cc: str x24, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 24));
  }
  /* 1fb1d0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2077140));
  fn2_24b720(c);
  /* 1fb1d4: ldr s0, [sp, #0xc] */
  arc_su_w(c, 0, arc_ld32(((c)->sp + INT64_C(12))));
  /* 1fb1d8: mov x3, x22 */
  ARC_X_W(c, 3, ARC_X_R(c, 22));
  /* 1fb1dc: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1fb1e0: b #0x1fb0d0 */
  goto L_1fb0d0;
}

void fn2_1fd220(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077941280));
  /* 1fd220: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 1fd224: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1fd228: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1fd22c: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1fd230: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1fd234: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1fd238: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fd23c: add x8, x8, #0xfc0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4032)));
  /* 1fd240: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1fd244: tbz w8, #0, #0x1fd298 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1fd298;
L_1fd248:;
  /* 1fd248: sxtw x8, w2 */
  ARC_X_W(c, 8, ((int64_t)(int32_t)(ARC_W_R(c, 2))));
  /* 1fd24c: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1fd250: adrp x9, #0x260000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fd254: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 1fd258: mov x11, sp */
  ARC_X_W(c, 11, (c)->sp);
  /* 1fd25c: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 1fd260: stp x8, x1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 1fd264: ldr x8, [x9, #0xfb8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(4024))));
  /* 1fd268: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1fd26c: ldr x9, [x10] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 10)));
  /* 1fd270: stp x11, x3, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 3));
  }
  /* 1fd274: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1fd278: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1fd27c: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2085504));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 1fd280: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1fd284: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1fd288: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1fd28c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1fd290: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 1fd294: ret  */
  return;
L_1fd298:;
  /* 1fd298: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fd29c: add x8, x8, #0xfc0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4032)));
  /* 1fd2a0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1fd2a4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1fd2a8: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* 1fd2ac: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 1fd2b0: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 1fd2b4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2085560));
  fn2_24b710(c);
  /* 1fd2b8: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 1fd2bc: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1fd2c0: mov x3, x20 */
  ARC_X_W(c, 3, ARC_X_R(c, 20));
  /* 1fd2c4: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1fd2c8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1fd2cc: cbz w8, #0x1fd248 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1fd248;
  /* 1fd2d0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1fd2d4: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1fd2d8: ldr x24, [x8] */
  ARC_X_W(c, 24, arc_ld64(ARC_X_R(c, 8)));
  /* 1fd2dc: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2085600));
  fn2_20293c(c);
  /* 1fd2e0: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1fd2e4: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 1fd2e8: add x1, x1, #0xbfd */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3069)));
  /* 1fd2ec: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1fd2f0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1fd2f4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2085624));
  fn2_1b8fd4(c);
  /* 1fd2f8: mov w2, #0xdb1 */
  ARC_W_W(c, 2, UINT64_C(3505));
  /* 1fd2fc: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1fd300: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1fd304: movk w2, #0xf78c, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(4153147392)));
  /* 1fd308: blr x24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2085644));
  arc_dispatch(c, ARC_X_R(c, 24));
  /* 1fd30c: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1fd310: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1fd314: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2085656));
  fn2_1d2d24(c);
  /* 1fd318: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fd31c: add x0, x0, #0xfb8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(4024)));
  /* 1fd320: str x23, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 23));
  }
  /* 1fd324: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2085672));
  fn2_24b720(c);
  /* 1fd328: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 1fd32c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1fd330: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1fd334: mov x3, x20 */
  ARC_X_W(c, 3, ARC_X_R(c, 20));
  /* 1fd338: b #0x1fd248 */
  goto L_1fd248;
}

void fn2_1ff4d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077950160));
  /* 1ff4d0: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1ff4d4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1ff4d8: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 1ff4dc: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1ff4e0: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1ff4e4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1ff4e8: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 1ff4ec: add x8, x8, #0x1c0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(448)));
  /* 1ff4f0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1ff4f4: tbz w8, #0, #0x1ff540 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1ff540;
L_1ff4f8:;
  /* 1ff4f8: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1ff4fc: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 1ff500: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1ff504: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 1ff508: ldr x8, [x8, #0x1b8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(440))));
  /* 1ff50c: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1ff510: stp x1, x2, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 1ff514: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 1ff518: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 1ff51c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1ff520: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 1ff524: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2094376));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 1ff528: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1ff52c: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1ff530: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1ff534: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1ff538: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1ff53c: ret  */
  return;
L_1ff540:;
  /* 1ff540: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 1ff544: add x8, x8, #0x1c0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(448)));
  /* 1ff548: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1ff54c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1ff550: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 1ff554: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 1ff558: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2094428));
  fn2_24b710(c);
  /* 1ff55c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1ff560: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1ff564: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1ff568: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1ff56c: cbz w8, #0x1ff4f8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1ff4f8;
  /* 1ff570: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1ff574: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1ff578: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 1ff57c: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2094464));
  fn2_20293c(c);
  /* 1ff580: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1ff584: adrp x1, #0x21000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(135168)));
  /* 1ff588: add x1, x1, #0xf8e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3982)));
  /* 1ff58c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1ff590: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1ff594: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2094488));
  fn2_1b8fd4(c);
  /* 1ff598: mov w2, #0x9a24 */
  ARC_W_W(c, 2, UINT64_C(39460));
  /* 1ff59c: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1ff5a0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1ff5a4: movk w2, #0xa27d, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2726100992)));
  /* 1ff5a8: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2094508));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 1ff5ac: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1ff5b0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1ff5b4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2094520));
  fn2_1d2d24(c);
  /* 1ff5b8: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 1ff5bc: add x0, x0, #0x1b8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(440)));
  /* 1ff5c0: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 1ff5c4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2094536));
  fn2_24b720(c);
  /* 1ff5c8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1ff5cc: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1ff5d0: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1ff5d4: b #0x1ff4f8 */
  goto L_1ff4f8;
}

void fn2_2015a4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077958564));
  /* 2015a4: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2015a8: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 2015ac: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 2015b0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 2015b4: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 2015b8: add x8, x8, #0x3c0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(960)));
  /* 2015bc: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 2015c0: tbz w8, #0, #0x2015fc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_2015fc;
L_2015c4:;
  /* 2015c4: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2015c8: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 2015cc: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 2015d0: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 2015d4: ldr x8, [x8, #0x3b8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(952))));
  /* 2015d8: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 2015dc: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 2015e0: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 2015e4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2015e8: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2102764));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 2015ec: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 2015f0: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 2015f4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 2015f8: ret  */
  return;
L_2015fc:;
  /* 2015fc: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 201600: add x8, x8, #0x3c0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(960)));
  /* 201604: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 201608: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 20160c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2102800));
  fn2_24b710(c);
  /* 201610: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 201614: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 201618: cbz w8, #0x2015c4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_2015c4;
  /* 20161c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 201620: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 201624: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 201628: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2102828));
  fn2_20293c(c);
  /* 20162c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 201630: adrp x1, #0x21000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(135168)));
  /* 201634: add x1, x1, #0x407 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1031)));
  /* 201638: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 20163c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 201640: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2102852));
  fn2_1b8fd4(c);
  /* 201644: mov w2, #0x6d64 */
  ARC_W_W(c, 2, UINT64_C(28004));
  /* 201648: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 20164c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 201650: movk w2, #0xbfdd, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3218931712)));
  /* 201654: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2102872));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 201658: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 20165c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 201660: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2102884));
  fn2_1d2d24(c);
  /* 201664: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 201668: add x0, x0, #0x3b8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(952)));
  /* 20166c: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 201670: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2102900));
  fn2_24b720(c);
  /* 201674: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 201678: b #0x2015c4 */
  goto L_2015c4;
}

void fn2_202de4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077964772));
  /* 202de4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 202de8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 202dec: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 202df0: ldr x8, [x2] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 2)));
  /* 202df4: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 202df8: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 202dfc: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 202e00: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2108932));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 202e04: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 202e08: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 202e0c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 202e10: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 202e14: b #0x1b5ce8 */
  fn2_1b5ce8(c); return;
}

void fn2_204ab8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077972152));
  /* 204ab8: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 204abc: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 204ac0: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 204ac4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 204ac8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 204acc: adrp x9, #0x261000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 204ad0: add x9, x9, #0x690 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1680)));
  /* 204ad4: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 204ad8: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 204adc: tbz w9, #0, #0x204b30 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_204b30;
L_204ae0:;
  /* 204ae0: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 204ae4: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 204ae8: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 204aec: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 204af0: ldr x8, [x8, #0x688] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1672))));
  /* 204af4: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 204af8: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 204afc: str xzr, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 31));
  /* 204b00: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 204b04: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 204b08: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2116364));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 204b0c: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 204b10: cbz x0, #0x204b18 */
  if ((ARC_X_R(c, 0)) == 0) goto L_204b18;
  /* 204b14: bl #0x1b62dc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2116376));
  fn2_1b62dc(c);
L_204b18:;
  /* 204b18: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* 204b1c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 204b20: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 204b24: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 204b28: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 204b2c: ret  */
  return;
L_204b30:;
  /* 204b30: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 204b34: add x8, x8, #0x690 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1680)));
  /* 204b38: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 204b3c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 204b40: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2116420));
  fn2_24b710(c);
  /* 204b44: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 204b48: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 204b4c: cbz w8, #0x204ae0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_204ae0;
  /* 204b50: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 204b54: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 204b58: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 204b5c: bl #0x204cc4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2116448));
  fn2_204cc4(c);
  /* 204b60: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 204b64: adrp x1, #0x1d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(118784)));
  /* 204b68: add x1, x1, #0x243 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(579)));
  /* 204b6c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 204b70: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 204b74: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2116472));
  fn2_1b8fd4(c);
  /* 204b78: mov w2, #0x74e6 */
  ARC_W_W(c, 2, UINT64_C(29926));
  /* 204b7c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 204b80: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 204b84: movk w2, #0xf492, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(4103208960)));
  /* 204b88: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2116492));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 204b8c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 204b90: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 204b94: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2116504));
  fn2_1d2d24(c);
  /* 204b98: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 204b9c: add x0, x0, #0x688 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1672)));
  /* 204ba0: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 204ba4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2116520));
  fn2_24b720(c);
  /* 204ba8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 204bac: b #0x204ae0 */
  goto L_204ae0;
}

void fn2_2067e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077979624));
  /* 2067e8: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 2067ec: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2067f0: str x21, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 21));
  /* 2067f4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 2067f8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 2067fc: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 206800: add x8, x8, #0x868 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2152)));
  /* 206804: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 206808: tbz w8, #0, #0x206854 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_206854;
L_20680c:;
  /* 20680c: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 206810: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 206814: add x10, sp, #8 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(8)));
  /* 206818: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 20681c: ldr x8, [x8, #0x860] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2144))));
  /* 206820: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 206824: add x2, x29, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 206828: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 20682c: str d0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), (c)->q[0].u64[0]);
  /* 206830: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 206834: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 206838: str x10, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 10));
  /* 20683c: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2123840));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 206840: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 206844: ldr x21, [sp, #0x20] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(32))));
  /* 206848: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 20684c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 206850: ret  */
  return;
L_206854:;
  /* 206854: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 206858: add x8, x8, #0x868 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2152)));
  /* 20685c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 206860: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 206864: str d0, [sp] */
  arc_st64((c)->sp, (c)->q[0].u64[0]);
  /* 206868: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2123884));
  fn2_24b710(c);
  /* 20686c: ldr d0, [sp] */
  arc_du_w(c, 0, arc_ld64((c)->sp));
  /* 206870: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 206874: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 206878: cbz w8, #0x20680c */
  if ((ARC_W_R(c, 8)) == 0) goto L_20680c;
  /* 20687c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 206880: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 206884: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 206888: bl #0x2086f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2123916));
  fn2_2086f8(c);
  /* 20688c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 206890: adrp x1, #0x2f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(192512)));
  /* 206894: add x1, x1, #0xf45 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3909)));
  /* 206898: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 20689c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2068a0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2123940));
  fn2_1b8fd4(c);
  /* 2068a4: mov w2, #0xd661 */
  ARC_W_W(c, 2, UINT64_C(54881));
  /* 2068a8: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2068ac: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 2068b0: movk w2, #0x1647, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(373751808)));
  /* 2068b4: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2123960));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 2068b8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 2068bc: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2068c0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2123972));
  fn2_1d2d24(c);
  /* 2068c4: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 2068c8: add x0, x0, #0x860 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2144)));
  /* 2068cc: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 2068d0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2123988));
  fn2_24b720(c);
  /* 2068d4: ldr d0, [sp] */
  arc_du_w(c, 0, arc_ld64((c)->sp));
  /* 2068d8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2068dc: b #0x20680c */
  goto L_20680c;
}

void fn2_208660(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077987424));
  /* 208660: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 208664: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 208668: nop  */
  /* nop: no architectural effect here */
  /* 20866c: adr x8, #0x2617b0 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2496432)));
  /* 208670: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 208674: tbnz w8, #0, #0x2086a4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_2086a4;
  /* 208678: nop  */
  /* nop: no architectural effect here */
  /* 20867c: adr x0, #0x2617b0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2496432)));
  /* 208680: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2131588));
  fn2_24b710(c);
  /* 208684: cbz w0, #0x2086a4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_2086a4;
  /* 208688: nop  */
  /* nop: no architectural effect here */
  /* 20868c: adr x0, #0x2088e0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2132192)));
  /* 208690: bl #0x1aff64 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2131604));
  fn2_1aff64(c);
  /* 208694: nop  */
  /* nop: no architectural effect here */
  /* 208698: adr x0, #0x2617b0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2496432)));
  /* 20869c: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 2086a0: b #0x24b720 */
  fn2_24b720(c); return;
L_2086a4:;
  /* 2086a4: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 2086a8: ret  */
  return;
}

void fn2_209e1c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077993500));
  /* 209e1c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 209e20: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 209e24: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 209e28: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 209e2c: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 209e30: add x8, x8, #0xba8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2984)));
  /* 209e34: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 209e38: tbz w8, #0, #0x209e78 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_209e78;
L_209e3c:;
  /* 209e3c: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 209e40: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 209e44: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 209e48: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 209e4c: ldr x8, [x8, #0xba0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2976))));
  /* 209e50: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 209e54: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 209e58: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 209e5c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 209e60: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2137700));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 209e64: ldrb w0, [x29, #0x18] */
  ARC_W_W(c, 0, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* 209e68: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 209e6c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 209e70: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 209e74: ret  */
  return;
L_209e78:;
  /* 209e78: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 209e7c: add x8, x8, #0xba8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2984)));
  /* 209e80: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 209e84: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 209e88: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2137740));
  fn2_24b710(c);
  /* 209e8c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 209e90: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 209e94: cbz w8, #0x209e3c */
  if ((ARC_W_R(c, 8)) == 0) goto L_209e3c;
  /* 209e98: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 209e9c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 209ea0: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 209ea4: bl #0x20c8c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2137768));
  fn2_20c8c4(c);
  /* 209ea8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 209eac: adrp x1, #0x1f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(126976)));
  /* 209eb0: add x1, x1, #0x5ed */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1517)));
  /* 209eb4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 209eb8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 209ebc: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2137792));
  fn2_1b8fd4(c);
  /* 209ec0: mov w2, #0x525a */
  ARC_W_W(c, 2, UINT64_C(21082));
  /* 209ec4: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 209ec8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 209ecc: movk w2, #0xe8c5, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3905224704)));
  /* 209ed0: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2137812));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 209ed4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 209ed8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 209edc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2137824));
  fn2_1d2d24(c);
  /* 209ee0: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 209ee4: add x0, x0, #0xba0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2976)));
  /* 209ee8: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 209eec: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2137840));
  fn2_24b720(c);
  /* 209ef0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 209ef4: b #0x209e3c */
  goto L_209e3c;
}

void fn2_20bd88(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078001544));
  /* 20bd88: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 20bd8c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 20bd90: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 20bd94: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 20bd98: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 20bd9c: adrp x9, #0x261000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20bda0: add x9, x9, #0xda8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3496)));
  /* 20bda4: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 20bda8: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 20bdac: tbz w9, #0, #0x20be0c */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_20be0c;
L_20bdb0:;
  /* 20bdb0: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20bdb4: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 20bdb8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 20bdbc: ldr x20, [x8, #0xda0] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(3488))));
  /* 20bdc0: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2145732));
  fn2_1ccc74(c);
  /* 20bdc4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20bdc8: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 20bdcc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 20bdd0: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 20bdd4: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 20bdd8: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 20bddc: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 20bde0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2145764));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 20bde4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 20bde8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20bdec: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2145776));
  fn2_1ccc88(c);
  /* 20bdf0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 20bdf4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2145784));
  fn2_1ccd9c(c);
  /* 20bdf8: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 20bdfc: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 20be00: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 20be04: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 20be08: ret  */
  return;
L_20be0c:;
  /* 20be0c: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20be10: add x8, x8, #0xda8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3496)));
  /* 20be14: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 20be18: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 20be1c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2145824));
  fn2_24b710(c);
  /* 20be20: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 20be24: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 20be28: cbz w8, #0x20bdb0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_20bdb0;
  /* 20be2c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20be30: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 20be34: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 20be38: bl #0x20c8c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2145852));
  fn2_20c8c4(c);
  /* 20be3c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 20be40: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 20be44: add x1, x1, #0x64d */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1613)));
  /* 20be48: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 20be4c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 20be50: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2145876));
  fn2_1b8fd4(c);
  /* 20be54: mov w2, #0x46ab */
  ARC_W_W(c, 2, UINT64_C(18091));
  /* 20be58: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 20be5c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 20be60: movk w2, #0xa959, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2841182208)));
  /* 20be64: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2145896));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 20be68: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 20be6c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 20be70: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2145908));
  fn2_1d2d24(c);
  /* 20be74: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20be78: add x0, x0, #0xda0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3488)));
  /* 20be7c: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 20be80: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2145924));
  fn2_24b720(c);
  /* 20be84: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 20be88: b #0x20bdb0 */
  goto L_20bdb0;
}

void fn2_20db68(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078009192));
  /* 20db68: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 20db6c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 20db70: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 20db74: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 20db78: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 20db7c: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20db80: add x8, x8, #0xf98 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3992)));
  /* 20db84: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 20db88: tbz w8, #0, #0x20dbd4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_20dbd4;
L_20db8c:;
  /* 20db8c: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20db90: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20db94: sxtw x11, w1 */
  ARC_X_W(c, 11, ((int64_t)(int32_t)(ARC_W_R(c, 1))));
  /* 20db98: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 20db9c: ldr x8, [x8, #0xf90] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3984))));
  /* 20dba0: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 20dba4: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* 20dba8: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 20dbac: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 20dbb0: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 20dbb4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 20dbb8: stp x11, x9, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 20dbbc: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2153408));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 20dbc0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 20dbc4: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 20dbc8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 20dbcc: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 20dbd0: ret  */
  return;
L_20dbd4:;
  /* 20dbd4: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20dbd8: add x8, x8, #0xf98 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3992)));
  /* 20dbdc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 20dbe0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 20dbe4: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 20dbe8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2153452));
  fn2_24b710(c);
  /* 20dbec: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 20dbf0: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 20dbf4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20dbf8: cbz w8, #0x20db8c */
  if ((ARC_W_R(c, 8)) == 0) goto L_20db8c;
  /* 20dbfc: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20dc00: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 20dc04: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 20dc08: bl #0x20df5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2153484));
  fn2_20df5c(c);
  /* 20dc0c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 20dc10: adrp x1, #0x24000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(147456)));
  /* 20dc14: add x1, x1, #0xfeb */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(4075)));
  /* 20dc18: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 20dc1c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 20dc20: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2153508));
  fn2_1b8fd4(c);
  /* 20dc24: mov w2, #0x1009 */
  ARC_W_W(c, 2, UINT64_C(4105));
  /* 20dc28: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 20dc2c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 20dc30: movk w2, #0x4cad, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1286406144)));
  /* 20dc34: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2153528));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 20dc38: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 20dc3c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 20dc40: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2153540));
  fn2_1d2d24(c);
  /* 20dc44: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20dc48: add x0, x0, #0xf90 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3984)));
  /* 20dc4c: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 20dc50: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2153556));
  fn2_24b720(c);
  /* 20dc54: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 20dc58: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20dc5c: b #0x20db8c */
  goto L_20db8c;
}

void fn2_20fa20(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078017056));
  /* 20fa20: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 20fa24: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 20fa28: str x23, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 23));
  /* 20fa2c: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 20fa30: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 20fa34: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 20fa38: adrp x9, #0x262000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 20fa3c: add x9, x9, #0x140 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(320)));
  /* 20fa40: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 20fa44: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 20fa48: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 20fa4c: tbz w9, #0, #0x20fabc */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_20fabc;
L_20fa50:;
  /* 20fa50: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 20fa54: and w9, w1, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 1) & UINT64_C(1)));
  /* 20fa58: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 20fa5c: ldr x21, [x8, #0x138] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(312))));
  /* 20fa60: strb w9, [x29, #0x1c] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(28)), ARC_W_R(c, 9));
  /* 20fa64: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2161256));
  fn2_1bc084(c);
  /* 20fa68: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20fa6c: add x9, x29, #0x1c */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) + UINT64_C(28)));
  /* 20fa70: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 20fa74: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 20fa78: add x3, sp, #0x18 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(24)));
  /* 20fa7c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 20fa80: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 20fa84: stp x20, x9, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 20fa88: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 20fa8c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2161296));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 20fa90: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 20fa94: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20fa98: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2161308));
  fn2_1bc0b8(c);
  /* 20fa9c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 20faa0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2161316));
  fn2_1bc620(c);
  /* 20faa4: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 20faa8: ldr x23, [sp, #0x40] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(64))));
  /* 20faac: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 20fab0: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 20fab4: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 20fab8: ret  */
  return;
L_20fabc:;
  /* 20fabc: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 20fac0: add x0, x0, #0x140 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(320)));
  /* 20fac4: mov w21, w1 */
  ARC_W_W(c, 21, ARC_W_R(c, 1));
  /* 20fac8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2161356));
  fn2_24b710(c);
  /* 20facc: mov w1, w21 */
  ARC_W_W(c, 1, ARC_W_R(c, 21));
  /* 20fad0: cbz w0, #0x20fa50 */
  if ((ARC_W_R(c, 0)) == 0) goto L_20fa50;
  /* 20fad4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20fad8: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 20fadc: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 20fae0: bl #0x20fb34 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2161380));
  fn2_20fb34(c);
  /* 20fae4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 20fae8: adrp x1, #0x34000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(212992)));
  /* 20faec: add x1, x1, #0xcc0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3264)));
  /* 20faf0: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 20faf4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 20faf8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2161404));
  fn2_1b8fd4(c);
  /* 20fafc: mov w2, #0x1bbc */
  ARC_W_W(c, 2, UINT64_C(7100));
  /* 20fb00: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 20fb04: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 20fb08: movk w2, #0xb0a3, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2963472384)));
  /* 20fb0c: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2161424));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 20fb10: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 20fb14: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 20fb18: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2161436));
  fn2_1d2d24(c);
  /* 20fb1c: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 20fb20: add x0, x0, #0x138 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(312)));
  /* 20fb24: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 20fb28: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2161452));
  fn2_24b720(c);
  /* 20fb2c: mov w1, w21 */
  ARC_W_W(c, 1, ARC_W_R(c, 21));
  /* 20fb30: b #0x20fa50 */
  goto L_20fa50;
}

void fn2_2113f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078023672));
  /* 2113f8: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 2113fc: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 211400: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 211404: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 211408: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 21140c: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 211410: add x8, x8, #0x298 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(664)));
  /* 211414: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 211418: tbz w8, #0, #0x211464 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_211464;
L_21141c:;
  /* 21141c: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 211420: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 211424: sxtw x11, w1 */
  ARC_X_W(c, 11, ((int64_t)(int32_t)(ARC_W_R(c, 1))));
  /* 211428: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 21142c: ldr x8, [x8, #0x290] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(656))));
  /* 211430: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 211434: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* 211438: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 21143c: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 211440: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 211444: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 211448: stp x11, x9, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 21144c: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2167888));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 211450: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 211454: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 211458: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 21145c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 211460: ret  */
  return;
L_211464:;
  /* 211464: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 211468: add x8, x8, #0x298 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(664)));
  /* 21146c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 211470: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 211474: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 211478: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2167932));
  fn2_24b710(c);
  /* 21147c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 211480: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 211484: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 211488: cbz w8, #0x21141c */
  if ((ARC_W_R(c, 8)) == 0) goto L_21141c;
  /* 21148c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 211490: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 211494: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 211498: bl #0x21234c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2167964));
  fn2_21234c(c);
  /* 21149c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 2114a0: adrp x1, #0x27000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(159744)));
  /* 2114a4: add x1, x1, #0x6ca */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1738)));
  /* 2114a8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 2114ac: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2114b0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2167988));
  fn2_1b8fd4(c);
  /* 2114b4: mov w2, #0x1009 */
  ARC_W_W(c, 2, UINT64_C(4105));
  /* 2114b8: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 2114bc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 2114c0: movk w2, #0x4cad, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1286406144)));
  /* 2114c4: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2168008));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 2114c8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 2114cc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 2114d0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2168020));
  fn2_1d2d24(c);
  /* 2114d4: nop  */
  /* nop: no architectural effect here */
  /* 2114d8: adr x0, #0x262290 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2499216)));
  /* 2114dc: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 2114e0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2168036));
  fn2_24b720(c);
  /* 2114e4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 2114e8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2114ec: b #0x21141c */
  goto L_21141c;
}

void fn2_212444(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078027844));
  /* 212444: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 212448: ret  */
  return;
}

void fn2_213b68(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078033768));
  /* 213b68: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 213b6c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 213b70: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 213b74: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 213b78: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 213b7c: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 213b80: add x8, x8, #0x548 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1352)));
  /* 213b84: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 213b88: tbz w8, #0, #0x213be4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_213be4;
L_213b8c:;
  /* 213b8c: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 213b90: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 213b94: add x10, x1, #0x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 1) + UINT64_C(16)));
  /* 213b98: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 213b9c: ldr x8, [x8, #0x540] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1344))));
  /* 213ba0: cmp x1, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(0));
  /* 213ba4: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 213ba8: csel x10, xzr, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 10)));
  /* 213bac: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 213bb0: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 213bb4: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 213bb8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 213bbc: str x10, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 10));
  /* 213bc0: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2177988));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 213bc4: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 213bc8: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 213bcc: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 213bd0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 213bd4: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 213bd8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 213bdc: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 213be0: ret  */
  return;
L_213be4:;
  /* 213be4: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 213be8: add x8, x8, #0x548 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1352)));
  /* 213bec: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 213bf0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 213bf4: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 213bf8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2178044));
  fn2_24b710(c);
  /* 213bfc: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 213c00: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 213c04: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 213c08: cbz w8, #0x213b8c */
  if ((ARC_W_R(c, 8)) == 0) goto L_213b8c;
  /* 213c0c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 213c10: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 213c14: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 213c18: bl #0x219a98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2178076));
  fn2_219a98(c);
  /* 213c1c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 213c20: adrp x1, #0x27000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(159744)));
  /* 213c24: add x1, x1, #0x6df */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1759)));
  /* 213c28: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 213c2c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 213c30: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2178100));
  fn2_1b8fd4(c);
  /* 213c34: mov w2, #0x952 */
  ARC_W_W(c, 2, UINT64_C(2386));
  /* 213c38: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 213c3c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 213c40: movk w2, #0xb86a, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3093954560)));
  /* 213c44: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2178120));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 213c48: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 213c4c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 213c50: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2178132));
  fn2_1d2d24(c);
  /* 213c54: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 213c58: add x0, x0, #0x540 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1344)));
  /* 213c5c: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 213c60: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2178148));
  fn2_24b720(c);
  /* 213c64: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 213c68: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 213c6c: b #0x213b8c */
  goto L_213b8c;
}

void fn2_215a68(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078041704));
  /* 215a68: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 215a6c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 215a70: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 215a74: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 215a78: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 215a7c: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 215a80: add x8, x8, #0x748 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1864)));
  /* 215a84: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 215a88: tbz w8, #0, #0x215ad8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_215ad8;
L_215a8c:;
  /* 215a8c: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 215a90: and w8, w1, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 1) & UINT64_C(1)));
  /* 215a94: adrp x9, #0x262000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 215a98: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 215a9c: strb w8, [sp, #4] */
  arc_st8(((c)->sp + INT64_C(4)), ARC_W_R(c, 8));
  /* 215aa0: ldr x8, [x9, #0x740] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(1856))));
  /* 215aa4: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 215aa8: add x9, sp, #4 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(4)));
  /* 215aac: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 215ab0: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 215ab4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 215ab8: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 215abc: str x9, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 9));
  /* 215ac0: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2185924));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 215ac4: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 215ac8: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 215acc: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 215ad0: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 215ad4: ret  */
  return;
L_215ad8:;
  /* 215ad8: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 215adc: add x8, x8, #0x748 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1864)));
  /* 215ae0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 215ae4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 215ae8: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* 215aec: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2185968));
  fn2_24b710(c);
  /* 215af0: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 215af4: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 215af8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 215afc: cbz w8, #0x215a8c */
  if ((ARC_W_R(c, 8)) == 0) goto L_215a8c;
  /* 215b00: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 215b04: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 215b08: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 215b0c: bl #0x219a98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2186000));
  fn2_219a98(c);
  /* 215b10: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 215b14: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* 215b18: add x1, x1, #0xa48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2632)));
  /* 215b1c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 215b20: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 215b24: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2186024));
  fn2_1b8fd4(c);
  /* 215b28: mov w2, #0x76c2 */
  ARC_W_W(c, 2, UINT64_C(30402));
  /* 215b2c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 215b30: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 215b34: movk w2, #0x9a29, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2586378240)));
  /* 215b38: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2186044));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 215b3c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 215b40: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 215b44: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2186056));
  fn2_1d2d24(c);
  /* 215b48: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 215b4c: add x0, x0, #0x740 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1856)));
  /* 215b50: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 215b54: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2186072));
  fn2_24b720(c);
  /* 215b58: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 215b5c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 215b60: b #0x215a8c */
  goto L_215a8c;
}

void fn2_2177a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078049192));
  /* 2177a8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2177ac: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 2177b0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 2177b4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 2177b8: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 2177bc: add x8, x8, #0x948 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2376)));
  /* 2177c0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 2177c4: tbz w8, #0, #0x217810 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_217810;
L_2177c8:;
  /* 2177c8: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2177cc: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 2177d0: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2177d4: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 2177d8: ldr x8, [x8, #0x940] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2368))));
  /* 2177dc: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 2177e0: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 2177e4: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* 2177e8: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 2177ec: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2177f0: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2193396));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 2177f4: ldr x0, [x29, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 2177f8: cbz x0, #0x217800 */
  if ((ARC_X_R(c, 0)) == 0) goto L_217800;
  /* 2177fc: bl #0x1b62dc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2193408));
  fn2_1b62dc(c);
L_217800:;
  /* 217800: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 217804: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 217808: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 21780c: ret  */
  return;
L_217810:;
  /* 217810: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 217814: add x8, x8, #0x948 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2376)));
  /* 217818: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 21781c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 217820: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2193444));
  fn2_24b710(c);
  /* 217824: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 217828: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 21782c: cbz w8, #0x2177c8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_2177c8;
  /* 217830: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 217834: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 217838: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 21783c: bl #0x219a98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2193472));
  fn2_219a98(c);
  /* 217840: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 217844: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 217848: add x1, x1, #0xd08 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3336)));
  /* 21784c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 217850: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 217854: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2193496));
  fn2_1b8fd4(c);
  /* 217858: mov w2, #0x79ed */
  ARC_W_W(c, 2, UINT64_C(31213));
  /* 21785c: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 217860: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 217864: movk w2, #0x68bc, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1757151232)));
  /* 217868: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2193516));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 21786c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 217870: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 217874: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2193528));
  fn2_1d2d24(c);
  /* 217878: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21787c: add x0, x0, #0x940 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2368)));
  /* 217880: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 217884: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2193544));
  fn2_24b720(c);
  /* 217888: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 21788c: b #0x2177c8 */
  goto L_2177c8;
}

void fn2_2196d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078057172));
  /* 2196d4: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 2196d8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2196dc: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 2196e0: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 2196e4: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 2196e8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 2196ec: adrp x9, #0x262000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 2196f0: add x9, x9, #0xb48 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2888)));
  /* 2196f4: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 2196f8: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 2196fc: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 219700: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 219704: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 219708: tbz w9, #0, #0x219758 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_219758;
L_21970c:;
  /* 21970c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 219710: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2201364));
  fn2_1bc084(c);
  /* 219714: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 219718: adrp x9, #0x262000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21971c: add x5, sp, #4 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(4)));
  /* 219720: ldr x8, [x8, #0x978] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2424))));
  /* 219724: ldr x0, [x9, #0xb40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2880))));
  /* 219728: ldr x1, [x22, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 21972c: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 219730: mov x3, x19 */
  ARC_X_W(c, 3, ARC_X_R(c, 19));
  /* 219734: mov x4, x21 */
  ARC_X_W(c, 4, ARC_X_R(c, 21));
  /* 219738: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 21973c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2201408));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 219740: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 219744: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 219748: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 21974c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 219750: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 219754: ret  */
  return;
L_219758:;
  /* 219758: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21975c: add x0, x0, #0xb48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2888)));
  /* 219760: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2201444));
  fn2_24b710(c);
  /* 219764: cbz w0, #0x21970c */
  if ((ARC_W_R(c, 0)) == 0) goto L_21970c;
  /* 219768: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21976c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 219770: ldr x24, [x8] */
  ARC_X_W(c, 24, arc_ld64(ARC_X_R(c, 8)));
  /* 219774: bl #0x219a98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2201464));
  fn2_219a98(c);
  /* 219778: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 21977c: adrp x1, #0x24000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(147456)));
  /* 219780: add x1, x1, #0x505 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1285)));
  /* 219784: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* 219788: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 21978c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2201488));
  fn2_1b8fd4(c);
  /* 219790: mov w2, #0x5af5 */
  ARC_W_W(c, 2, UINT64_C(23285));
  /* 219794: add x1, sp, #4 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(4)));
  /* 219798: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 21979c: movk w2, #0xcaae, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3400400896)));
  /* 2197a0: blr x24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2201508));
  arc_dispatch(c, ARC_X_R(c, 24));
  /* 2197a4: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 2197a8: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* 2197ac: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2201520));
  fn2_1d2d24(c);
  /* 2197b0: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 2197b4: add x0, x0, #0xb40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2880)));
  /* 2197b8: str x23, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 23));
  }
  /* 2197bc: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2201536));
  fn2_24b720(c);
  /* 2197c0: b #0x21970c */
  goto L_21970c;
}

void fn2_21a298(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078060184));
  /* 21a298: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 21a29c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 21a2a0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 21a2a4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 21a2a8: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* 21a2ac: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* 21a2b0: add x8, x8, #0x5e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1504)));
  /* 21a2b4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 21a2b8: cbz x0, #0x21a2e8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_21a2e8;
L_21a2bc:;
  /* 21a2bc: ldr x1, [x0] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 0)));
  /* 21a2c0: cbz x1, #0x21a2d8 */
  if ((ARC_X_R(c, 1)) == 0) goto L_21a2d8;
  /* 21a2c4: bl #0xaeb74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2204360));
  fn2_aeb74(c);
  /* 21a2c8: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 21a2cc: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 21a2d0: cbnz w8, #0x21a2bc */
  if ((ARC_W_R(c, 8)) != 0) goto L_21a2bc;
  /* 21a2d4: b #0x21a2e0 */
  goto L_21a2e0;
L_21a2d8:;
  /* 21a2d8: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 21a2dc: cbnz w8, #0x21a2f8 */
  if ((ARC_W_R(c, 8)) != 0) goto L_21a2f8;
L_21a2e0:;
  /* 21a2e0: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 21a2e4: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2204392));
  fn2_1b5ce8(c);
L_21a2e8:;
  /* 21a2e8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 21a2ec: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 21a2f0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 21a2f4: b #0x24b730 */
  fn2_24b730(c); return;
L_21a2f8:;
  /* 21a2f8: adrp x0, #0x29000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(167936)));
  /* 21a2fc: add x0, x0, #0x23f */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(575)));
  /* 21a300: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 21a304: add x1, x1, #0x30a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(778)));
  /* 21a308: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* 21a30c: add x3, x3, #0xbb4 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2996)));
  /* 21a310: mov w2, #0x317 */
  ARC_W_W(c, 2, UINT64_C(791));
  /* 21a314: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 21a318: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 21a31c: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2204448));
  fn2_1b54b0(c);
  /* 21a320: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 21a324: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 21a328: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 21a32c: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_21c254(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078068308));
  /* 21c254: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 21c258: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 21c25c: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 21c260: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 21c264: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 21c268: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 21c26c: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21c270: add x8, x8, #0xd50 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3408)));
  /* 21c274: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 21c278: tbz w8, #0, #0x21c2c8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_21c2c8;
L_21c27c:;
  /* 21c27c: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21c280: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21c284: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 21c288: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 21c28c: ldr x8, [x8, #0xd48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3400))));
  /* 21c290: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 21c294: stp x1, x2, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 21c298: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 21c29c: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 21c2a0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 21c2a4: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 21c2a8: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2212524));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 21c2ac: ldr w0, [x29, #0x18] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(24))));
  /* 21c2b0: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 21c2b4: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 21c2b8: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 21c2bc: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 21c2c0: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 21c2c4: ret  */
  return;
L_21c2c8:;
  /* 21c2c8: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21c2cc: add x8, x8, #0xd50 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3408)));
  /* 21c2d0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 21c2d4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 21c2d8: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 21c2dc: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 21c2e0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2212580));
  fn2_24b710(c);
  /* 21c2e4: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 21c2e8: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 21c2ec: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 21c2f0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 21c2f4: cbz w8, #0x21c27c */
  if ((ARC_W_R(c, 8)) == 0) goto L_21c27c;
  /* 21c2f8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21c2fc: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 21c300: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 21c304: bl #0x21f8e0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2212616));
  fn2_21f8e0(c);
  /* 21c308: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 21c30c: adrp x1, #0x25000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(151552)));
  /* 21c310: add x1, x1, #0xace */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2766)));
  /* 21c314: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 21c318: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 21c31c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2212640));
  fn2_1b8fd4(c);
  /* 21c320: mov w2, #0xff43 */
  ARC_W_W(c, 2, UINT64_C(65347));
  /* 21c324: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 21c328: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 21c32c: movk w2, #0xa9c4, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2848194560)));
  /* 21c330: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2212660));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 21c334: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 21c338: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 21c33c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2212672));
  fn2_1d2d24(c);
  /* 21c340: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21c344: add x0, x0, #0xd48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3400)));
  /* 21c348: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 21c34c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2212688));
  fn2_24b720(c);
  /* 21c350: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 21c354: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 21c358: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 21c35c: b #0x21c27c */
  goto L_21c27c;
}

void fn2_21e1d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078076368));
  /* 21e1d0: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 21e1d4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 21e1d8: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 21e1dc: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 21e1e0: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 21e1e4: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21e1e8: add x8, x8, #0xf50 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3920)));
  /* 21e1ec: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 21e1f0: tbz w8, #0, #0x21e23c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_21e23c;
L_21e1f4:;
  /* 21e1f4: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21e1f8: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21e1fc: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 21e200: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 21e204: ldr x8, [x8, #0xf48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3912))));
  /* 21e208: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 21e20c: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 21e210: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 21e214: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 21e218: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 21e21c: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 21e220: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2220580));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 21e224: ldr w0, [sp, #8] */
  ARC_W_W(c, 0, arc_ld32(((c)->sp + INT64_C(8))));
  /* 21e228: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 21e22c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 21e230: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 21e234: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 21e238: ret  */
  return;
L_21e23c:;
  /* 21e23c: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21e240: add x8, x8, #0xf50 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3920)));
  /* 21e244: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 21e248: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 21e24c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 21e250: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2220628));
  fn2_24b710(c);
  /* 21e254: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 21e258: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 21e25c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 21e260: cbz w8, #0x21e1f4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_21e1f4;
  /* 21e264: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21e268: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 21e26c: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 21e270: bl #0x21f8e0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2220660));
  fn2_21f8e0(c);
  /* 21e274: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 21e278: adrp x1, #0x35000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(217088)));
  /* 21e27c: add x1, x1, #0xa2a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2602)));
  /* 21e280: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 21e284: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 21e288: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2220684));
  fn2_1b8fd4(c);
  /* 21e28c: mov w2, #0xc027 */
  ARC_W_W(c, 2, UINT64_C(49191));
  /* 21e290: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 21e294: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 21e298: movk w2, #0x7df6, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2113273856)));
  /* 21e29c: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2220704));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 21e2a0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 21e2a4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 21e2a8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2220716));
  fn2_1d2d24(c);
  /* 21e2ac: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21e2b0: add x0, x0, #0xf48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3912)));
  /* 21e2b4: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 21e2b8: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2220732));
  fn2_24b720(c);
  /* 21e2bc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 21e2c0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 21e2c4: b #0x21e1f4 */
  goto L_21e1f4;
}

void fn2_21fb2c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078082860));
  /* 21fb2c: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 21fb30: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 21fb34: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 21fb38: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 21fb3c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 21fb40: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 21fb44: add x9, x9, #0xd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(208)));
  /* 21fb48: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 21fb4c: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 21fb50: tbz w9, #0, #0x21fbb0 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_21fbb0;
L_21fb54:;
  /* 21fb54: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 21fb58: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 21fb5c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 21fb60: ldr x20, [x8, #0xc8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(200))));
  /* 21fb64: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2227048));
  fn2_1ccc74(c);
  /* 21fb68: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21fb6c: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 21fb70: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 21fb74: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 21fb78: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 21fb7c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 21fb80: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 21fb84: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2227080));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 21fb88: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 21fb8c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 21fb90: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2227092));
  fn2_1ccc88(c);
  /* 21fb94: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 21fb98: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2227100));
  fn2_1ccd9c(c);
  /* 21fb9c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 21fba0: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 21fba4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 21fba8: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 21fbac: ret  */
  return;
L_21fbb0:;
  /* 21fbb0: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 21fbb4: add x8, x8, #0xd0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(208)));
  /* 21fbb8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 21fbbc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 21fbc0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2227140));
  fn2_24b710(c);
  /* 21fbc4: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 21fbc8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 21fbcc: cbz w8, #0x21fb54 */
  if ((ARC_W_R(c, 8)) == 0) goto L_21fb54;
  /* 21fbd0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21fbd4: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 21fbd8: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 21fbdc: bl #0x222b84 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2227168));
  fn2_222b84(c);
  /* 21fbe0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 21fbe4: adrp x1, #0x34000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(212992)));
  /* 21fbe8: add x1, x1, #0xd43 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3395)));
  /* 21fbec: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 21fbf0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 21fbf4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2227192));
  fn2_1b8fd4(c);
  /* 21fbf8: mov w2, #0x3dd0 */
  ARC_W_W(c, 2, UINT64_C(15824));
  /* 21fbfc: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 21fc00: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 21fc04: movk w2, #0xc05, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(201654272)));
  /* 21fc08: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2227212));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 21fc0c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 21fc10: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 21fc14: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2227224));
  fn2_1d2d24(c);
  /* 21fc18: nop  */
  /* nop: no architectural effect here */
  /* 21fc1c: adr x0, #0x2630c8 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502856)));
  /* 21fc20: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 21fc24: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2227240));
  fn2_24b720(c);
  /* 21fc28: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 21fc2c: b #0x21fb54 */
  goto L_21fb54;
}

void fn2_221ad8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078090968));
  /* 221ad8: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 221adc: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* 221ae0: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 221ae4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 221ae8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 221aec: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 221af0: add x9, x9, #0x2d0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(720)));
  /* 221af4: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 221af8: tbz w9, #0, #0x221b30 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_221b30;
L_221afc:;
  /* 221afc: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 221b00: ldr x10, [x0, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 221b04: str x1, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 1));
  /* 221b08: ldr x9, [x9, #0x2c8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(712))));
  /* 221b0c: add x2, x29, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 221b10: mov x1, x10 */
  ARC_X_W(c, 1, ARC_X_R(c, 10));
  /* 221b14: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
  /* 221b18: bl #0x222c18 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2235164));
  fn2_222c18(c);
  /* 221b1c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 221b20: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 221b24: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 221b28: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 221b2c: ret  */
  return;
L_221b30:;
  /* 221b30: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 221b34: add x9, x9, #0x2d0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(720)));
  /* 221b38: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 221b3c: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
  /* 221b40: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 221b44: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 221b48: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2235212));
  fn2_24b710(c);
  /* 221b4c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 221b50: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* 221b54: mov w9, w0 */
  ARC_W_W(c, 9, ARC_W_R(c, 0));
  /* 221b58: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 221b5c: cbz w9, #0x221afc */
  if ((ARC_W_R(c, 9)) == 0) goto L_221afc;
  /* 221b60: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 221b64: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 221b68: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 221b6c: bl #0x222b84 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2235248));
  fn2_222b84(c);
  /* 221b70: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 221b74: adrp x1, #0x2e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(188416)));
  /* 221b78: add x1, x1, #0xab9 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2745)));
  /* 221b7c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 221b80: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 221b84: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2235272));
  fn2_1b8fd4(c);
  /* 221b88: mov w2, #0xd7cc */
  ARC_W_W(c, 2, UINT64_C(55244));
  /* 221b8c: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 221b90: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 221b94: movk w2, #0xbb9f, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3147759616)));
  /* 221b98: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2235292));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 221b9c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 221ba0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 221ba4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2235304));
  fn2_1d2d24(c);
  /* 221ba8: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 221bac: add x0, x0, #0x2c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(712)));
  /* 221bb0: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 221bb4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2235320));
  fn2_24b720(c);
  /* 221bb8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 221bbc: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 221bc0: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* 221bc4: b #0x221afc */
  goto L_221afc;
}

void fn2_223910(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078098704));
  /* 223910: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 223914: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 223918: str x23, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 23));
  /* 22391c: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 223920: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 223924: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 223928: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22392c: add x8, x8, #0x4a0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1184)));
  /* 223930: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 223934: tbz w8, #0, #0x22398c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_22398c;
L_223938:;
  /* 223938: adrp x11, #0x258000 */
  ARC_X_W(c, 11, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22393c: sxtw x9, w2 */
  ARC_X_W(c, 9, ((int64_t)(int32_t)(ARC_W_R(c, 2))));
  /* 223940: adrp x10, #0x263000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 223944: ldr x11, [x11, #0x980] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 11) + INT64_C(2432))));
  /* 223948: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 22394c: ldr x0, [x10, #0x498] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 10) + INT64_C(1176))));
  /* 223950: stp x9, x1, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 223954: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 223958: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 22395c: ldr x10, [x11] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 11)));
  /* 223960: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 223964: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* 223968: str x9, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 9));
  /* 22396c: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2242928));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 223970: ldr w0, [x29, #0x18] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(24))));
  /* 223974: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 223978: ldr x23, [sp, #0x30] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(48))));
  /* 22397c: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 223980: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 223984: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 223988: ret  */
  return;
L_22398c:;
  /* 22398c: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 223990: add x8, x8, #0x4a0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1184)));
  /* 223994: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 223998: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 22399c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 2239a0: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 2239a4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2242984));
  fn2_24b710(c);
  /* 2239a8: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 2239ac: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 2239b0: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 2239b4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2239b8: cbz w8, #0x223938 */
  if ((ARC_W_R(c, 8)) == 0) goto L_223938;
  /* 2239bc: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2239c0: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 2239c4: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 2239c8: bl #0x2241ec */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2243020));
  fn2_2241ec(c);
  /* 2239cc: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 2239d0: adrp x1, #0x2a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(172032)));
  /* 2239d4: add x1, x1, #0x68f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1679)));
  /* 2239d8: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 2239dc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2239e0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2243044));
  fn2_1b8fd4(c);
  /* 2239e4: mov w2, #0xf33d */
  ARC_W_W(c, 2, UINT64_C(62269));
  /* 2239e8: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 2239ec: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 2239f0: movk w2, #0x3b3d, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(993853440)));
  /* 2239f4: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2243064));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 2239f8: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 2239fc: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 223a00: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2243076));
  fn2_1d2d24(c);
  /* 223a04: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 223a08: add x0, x0, #0x498 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1176)));
  /* 223a0c: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 223a10: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2243092));
  fn2_24b720(c);
  /* 223a14: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 223a18: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 223a1c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 223a20: b #0x223938 */
  goto L_223938;
}

void fn2_225860(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078106720));
  /* 225860: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 225864: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 225868: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 22586c: nop  */
  /* nop: no architectural effect here */
  /* 225870: adr x8, #0x25cdf0 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2477552)));
  /* 225874: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 225878: tbz w8, #0, #0x225890 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_225890;
L_22587c:;
  /* 22587c: nop  */
  /* nop: no architectural effect here */
  /* 225880: adr x0, #0x25cde8 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2477544)));
  /* 225884: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 225888: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 22588c: ret  */
  return;
L_225890:;
  /* 225890: nop  */
  /* nop: no architectural effect here */
  /* 225894: adr x0, #0x25cdf0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2477552)));
  /* 225898: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2250908));
  fn2_24b710(c);
  /* 22589c: cbz w0, #0x22587c */
  if ((ARC_W_R(c, 0)) == 0) goto L_22587c;
  /* 2258a0: nop  */
  /* nop: no architectural effect here */
  /* 2258a4: adr x19, #0x25cde8 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2477544)));
  /* 2258a8: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 2258ac: add x1, x1, #0x8b5 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2229)));
  /* 2258b0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2258b4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2258b8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2250940));
  fn2_1b8fd4(c);
  /* 2258bc: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 2258c0: nop  */
  /* nop: no architectural effect here */
  /* 2258c4: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 2258c8: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 2258cc: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 2258d0: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2250964));
  fn2_24b6f0(c);
  /* 2258d4: nop  */
  /* nop: no architectural effect here */
  /* 2258d8: adr x0, #0x25cdf0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2477552)));
  /* 2258dc: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2250976));
  fn2_24b720(c);
  /* 2258e0: nop  */
  /* nop: no architectural effect here */
  /* 2258e4: adr x0, #0x25cde8 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2477544)));
  /* 2258e8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 2258ec: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 2258f0: ret  */
  return;
}

void fn2_22774c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078114636));
  /* 22774c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 227750: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 227754: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 227758: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 22775c: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 227760: add x8, x8, #0x828 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2088)));
  /* 227764: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 227768: tbz w8, #0, #0x2277b0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_2277b0;
L_22776c:;
  /* 22776c: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 227770: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 227774: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 227778: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 22777c: ldr x8, [x8, #0x820] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2080))));
  /* 227780: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 227784: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 227788: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 22778c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 227790: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2258836));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 227794: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* 227798: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 22779c: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 2277a0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 2277a4: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 2277a8: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 2277ac: ret  */
  return;
L_2277b0:;
  /* 2277b0: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 2277b4: add x8, x8, #0x828 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2088)));
  /* 2277b8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 2277bc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2277c0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2258884));
  fn2_24b710(c);
  /* 2277c4: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 2277c8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2277cc: cbz w8, #0x22776c */
  if ((ARC_W_R(c, 8)) == 0) goto L_22776c;
  /* 2277d0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2277d4: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 2277d8: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 2277dc: bl #0x227e2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2258912));
  fn2_227e2c(c);
  /* 2277e0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 2277e4: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 2277e8: add x1, x1, #0xd3 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(211)));
  /* 2277ec: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2277f0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2277f4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2258936));
  fn2_1b8fd4(c);
  /* 2277f8: mov w2, #0xa5e1 */
  ARC_W_W(c, 2, UINT64_C(42465));
  /* 2277fc: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 227800: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 227804: movk w2, #0x232, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(36831232)));
  /* 227808: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2258956));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 22780c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 227810: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 227814: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2258968));
  fn2_1d2d24(c);
  /* 227818: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22781c: add x0, x0, #0x820 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2080)));
  /* 227820: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 227824: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2258984));
  fn2_24b720(c);
  /* 227828: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22782c: b #0x22776c */
  goto L_22776c;
}

void fn2_2291a4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078121380));
  /* 2291a4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2291a8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 2291ac: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 2291b0: nop  */
  /* nop: no architectural effect here */
  /* 2291b4: adr x8, #0x263990 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2505104)));
  /* 2291b8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 2291bc: tbz w8, #0, #0x2291dc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_2291dc;
L_2291c0:;
  /* 2291c0: nop  */
  /* nop: no architectural effect here */
  /* 2291c4: adr x0, #0x263988 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2505096)));
  /* 2291c8: nop  */
  /* nop: no architectural effect here */
  /* 2291cc: adr x1, #0x257008 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2453512)));
  /* 2291d0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 2291d4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 2291d8: b #0x1b00bc */
  fn2_1b00bc(c); return;
L_2291dc:;
  /* 2291dc: nop  */
  /* nop: no architectural effect here */
  /* 2291e0: adr x0, #0x263990 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2505104)));
  /* 2291e4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2265576));
  fn2_24b710(c);
  /* 2291e8: cbz w0, #0x2291c0 */
  if ((ARC_W_R(c, 0)) == 0) goto L_2291c0;
  /* 2291ec: nop  */
  /* nop: no architectural effect here */
  /* 2291f0: adr x19, #0x263988 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2505096)));
  /* 2291f4: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 2291f8: add x1, x1, #0x6eb */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1771)));
  /* 2291fc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 229200: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 229204: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2265608));
  fn2_1b8fd4(c);
  /* 229208: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 22920c: nop  */
  /* nop: no architectural effect here */
  /* 229210: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 229214: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 229218: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 22921c: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2265632));
  fn2_24b6f0(c);
  /* 229220: nop  */
  /* nop: no architectural effect here */
  /* 229224: adr x0, #0x263990 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2505104)));
  /* 229228: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2265644));
  fn2_24b720(c);
  /* 22922c: b #0x2291c0 */
  goto L_2291c0;
}

void fn2_22a2a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078125728));
  /* 22a2a0: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 22a2a4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 22a2a8: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 22a2ac: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 22a2b0: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 22a2b4: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22a2b8: add x8, x8, #0xac0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2752)));
  /* 22a2bc: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 22a2c0: tbz w8, #0, #0x22a310 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_22a310;
L_22a2c4:;
  /* 22a2c4: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22a2c8: and w8, w1, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 1) & UINT64_C(1)));
  /* 22a2cc: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22a2d0: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 22a2d4: strb w8, [sp, #4] */
  arc_st8(((c)->sp + INT64_C(4)), ARC_W_R(c, 8));
  /* 22a2d8: ldr x8, [x9, #0xab8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(2744))));
  /* 22a2dc: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 22a2e0: add x9, sp, #4 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(4)));
  /* 22a2e4: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 22a2e8: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 22a2ec: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 22a2f0: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 22a2f4: str x9, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 9));
  /* 22a2f8: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2269948));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 22a2fc: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 22a300: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 22a304: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 22a308: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 22a30c: ret  */
  return;
L_22a310:;
  /* 22a310: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22a314: add x8, x8, #0xac0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2752)));
  /* 22a318: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 22a31c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 22a320: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* 22a324: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2269992));
  fn2_24b710(c);
  /* 22a328: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 22a32c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 22a330: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22a334: cbz w8, #0x22a2c4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_22a2c4;
  /* 22a338: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22a33c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 22a340: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 22a344: bl #0x22c080 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2270024));
  fn2_22c080(c);
  /* 22a348: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 22a34c: adrp x1, #0x25000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(151552)));
  /* 22a350: add x1, x1, #0xca */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(202)));
  /* 22a354: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 22a358: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 22a35c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2270048));
  fn2_1b8fd4(c);
  /* 22a360: mov w2, #0x76c2 */
  ARC_W_W(c, 2, UINT64_C(30402));
  /* 22a364: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 22a368: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 22a36c: movk w2, #0x9a29, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2586378240)));
  /* 22a370: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2270068));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 22a374: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 22a378: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 22a37c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2270080));
  fn2_1d2d24(c);
  /* 22a380: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22a384: add x0, x0, #0xab8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2744)));
  /* 22a388: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 22a38c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2270096));
  fn2_24b720(c);
  /* 22a390: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 22a394: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22a398: b #0x22a2c4 */
  goto L_22a2c4;
}

void fn2_22c114(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078133524));
  /* 22c114: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 22c118: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 22c11c: str x21, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 21));
  /* 22c120: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 22c124: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 22c128: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 22c12c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 22c130: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 22c134: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 22c138: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2277692));
  fn2_1db4a4(c);
  /* 22c13c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22c140: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 22c144: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 22c148: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 22c14c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 22c150: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 22c154: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 22c158: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2277724));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 22c15c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22c160: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2277732));
  fn2_1db4a4(c);
  /* 22c164: nop  */
  /* nop: no architectural effect here */
  /* 22c168: adr x8, #0x2623d8 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2499544)));
  /* 22c16c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 22c170: tbz w8, #0, #0x22c208 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_22c208;
L_22c174:;
  /* 22c174: nop  */
  /* nop: no architectural effect here */
  /* 22c178: adr x1, #0x2623d0 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2499536)));
  /* 22c17c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 22c180: bl #0x1cccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2277764));
  fn2_1cccb8(c);
  /* 22c184: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22c188: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 22c18c: bl #0x1d2c70 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2277776));
  fn2_1d2c70(c);
  /* 22c190: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 22c194: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2277784));
  fn2_1bc084(c);
  /* 22c198: add x2, x29, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22c19c: add x3, sp, #0x10 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(16)));
  /* 22c1a0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22c1a4: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* 22c1a8: bl #0x1bbf58 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2277804));
  fn2_1bbf58(c);
  /* 22c1ac: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 22c1b0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2277812));
  fn2_1bc620(c);
  /* 22c1b4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22c1b8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2277820));
  fn2_1d2d24(c);
  /* 22c1bc: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 22c1c0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2277828));
  fn2_1ccd9c(c);
  /* 22c1c4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 22c1c8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22c1cc: bl #0x1dc378 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2277840));
  fn2_1dc378(c);
  /* 22c1d0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 22c1d4: tbz w0, #0, #0x22c1e4 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_22c1e4;
  /* 22c1d8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22c1dc: bl #0x1dc718 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2277856));
  fn2_1dc718(c);
  /* 22c1e0: b #0x22c1ec */
  goto L_22c1ec;
L_22c1e4:;
  /* 22c1e4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22c1e8: bl #0x1db850 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2277868));
  fn2_1db850(c);
L_22c1ec:;
  /* 22c1ec: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 22c1f0: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2277876));
  fn2_1db788(c);
  /* 22c1f4: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 22c1f8: ldr x21, [sp, #0x40] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(64))));
  /* 22c1fc: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 22c200: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 22c204: ret  */
  return;
L_22c208:;
  /* 22c208: nop  */
  /* nop: no architectural effect here */
  /* 22c20c: adr x0, #0x2623d8 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2499544)));
  /* 22c210: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2277908));
  fn2_24b710(c);
  /* 22c214: cbz w0, #0x22c174 */
  if ((ARC_W_R(c, 0)) == 0) goto L_22c174;
  /* 22c218: nop  */
  /* nop: no architectural effect here */
  /* 22c21c: adr x20, #0x2623d0 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2499536)));
  /* 22c220: adrp x1, #0x1f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(126976)));
  /* 22c224: add x1, x1, #0xf18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3864)));
  /* 22c228: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 22c22c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 22c230: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2277940));
  fn2_1b8fd4(c);
  /* 22c234: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 22c238: nop  */
  /* nop: no architectural effect here */
  /* 22c23c: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 22c240: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 22c244: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 22c248: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2277964));
  fn2_24b6f0(c);
  /* 22c24c: nop  */
  /* nop: no architectural effect here */
  /* 22c250: adr x0, #0x2623d8 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2499544)));
  /* 22c254: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2277976));
  fn2_24b720(c);
  /* 22c258: b #0x22c174 */
  goto L_22c174;
}

void fn2_22dd14(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078140692));
  /* 22dd14: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 22dd18: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 22dd1c: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 22dd20: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 22dd24: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 22dd28: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22dd2c: add x9, x9, #0xe20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3616)));
  /* 22dd30: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 22dd34: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 22dd38: tbz w9, #0, #0x22dd8c */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_22dd8c;
L_22dd3c:;
  /* 22dd3c: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22dd40: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22dd44: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 22dd48: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 22dd4c: ldr x8, [x8, #0xe18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3608))));
  /* 22dd50: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 22dd54: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 22dd58: str xzr, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 31));
  /* 22dd5c: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 22dd60: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 22dd64: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2284904));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 22dd68: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 22dd6c: cbz x0, #0x22dd74 */
  if ((ARC_X_R(c, 0)) == 0) goto L_22dd74;
  /* 22dd70: bl #0x1b62dc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2284916));
  fn2_1b62dc(c);
L_22dd74:;
  /* 22dd74: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* 22dd78: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 22dd7c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 22dd80: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 22dd84: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 22dd88: ret  */
  return;
L_22dd8c:;
  /* 22dd8c: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22dd90: add x8, x8, #0xe20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3616)));
  /* 22dd94: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 22dd98: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 22dd9c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2284960));
  fn2_24b710(c);
  /* 22dda0: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 22dda4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 22dda8: cbz w8, #0x22dd3c */
  if ((ARC_W_R(c, 8)) == 0) goto L_22dd3c;
  /* 22ddac: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22ddb0: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 22ddb4: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 22ddb8: bl #0x22dffc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2284988));
  fn2_22dffc(c);
  /* 22ddbc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 22ddc0: adrp x1, #0x21000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(135168)));
  /* 22ddc4: add x1, x1, #0x533 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1331)));
  /* 22ddc8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 22ddcc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 22ddd0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2285012));
  fn2_1b8fd4(c);
  /* 22ddd4: mov w2, #0xaa37 */
  ARC_W_W(c, 2, UINT64_C(43575));
  /* 22ddd8: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 22dddc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 22dde0: movk w2, #0x42cc, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1120665600)));
  /* 22dde4: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2285032));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 22dde8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 22ddec: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 22ddf0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2285044));
  fn2_1d2d24(c);
  /* 22ddf4: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22ddf8: add x0, x0, #0xe18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3608)));
  /* 22ddfc: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 22de00: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2285060));
  fn2_24b720(c);
  /* 22de04: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 22de08: b #0x22dd3c */
  goto L_22dd3c;
}

void fn2_22f5ac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078146988));
  /* 22f5ac: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 22f5b0: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 22f5b4: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 22f5b8: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 22f5bc: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 22f5c0: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 22f5c4: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22f5c8: add x9, x9, #0xf58 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3928)));
  /* 22f5cc: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 22f5d0: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 22f5d4: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 22f5d8: tbz w9, #0, #0x22f64c */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_22f64c;
L_22f5dc:;
  /* 22f5dc: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22f5e0: and w9, w2, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 2) & UINT64_C(1)));
  /* 22f5e4: ldr x22, [x0, #0x10] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 22f5e8: ldr x21, [x8, #0xf50] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(3920))));
  /* 22f5ec: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 22f5f0: strb w9, [sp, #4] */
  arc_st8(((c)->sp + INT64_C(4)), ARC_W_R(c, 9));
  /* 22f5f4: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2291192));
  fn2_1ccc74(c);
  /* 22f5f8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22f5fc: add x9, sp, #4 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(4)));
  /* 22f600: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 22f604: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 22f608: sub x3, x29, #8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 22f60c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 22f610: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 22f614: stp x20, x9, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 22f618: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 22f61c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2291232));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 22f620: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 22f624: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22f628: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2291244));
  fn2_1ccc88(c);
  /* 22f62c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 22f630: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2291252));
  fn2_1ccd9c(c);
  /* 22f634: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 22f638: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 22f63c: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 22f640: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 22f644: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 22f648: ret  */
  return;
L_22f64c:;
  /* 22f64c: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22f650: add x8, x8, #0xf58 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3928)));
  /* 22f654: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 22f658: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 22f65c: mov w21, w2 */
  ARC_W_W(c, 21, ARC_W_R(c, 2));
  /* 22f660: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2291300));
  fn2_24b710(c);
  /* 22f664: mov w2, w21 */
  ARC_W_W(c, 2, ARC_W_R(c, 21));
  /* 22f668: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 22f66c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 22f670: cbz w8, #0x22f5dc */
  if ((ARC_W_R(c, 8)) == 0) goto L_22f5dc;
  /* 22f674: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22f678: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 22f67c: ldr x24, [x8] */
  ARC_X_W(c, 24, arc_ld64(ARC_X_R(c, 8)));
  /* 22f680: bl #0x23048c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2291332));
  fn2_23048c(c);
  /* 22f684: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 22f688: adrp x1, #0x23000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(143360)));
  /* 22f68c: add x1, x1, #0xace */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2766)));
  /* 22f690: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 22f694: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 22f698: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2291356));
  fn2_1b8fd4(c);
  /* 22f69c: mov w2, #0x11ba */
  ARC_W_W(c, 2, UINT64_C(4538));
  /* 22f6a0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 22f6a4: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 22f6a8: movk w2, #0x7123, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1898119168)));
  /* 22f6ac: blr x24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2291376));
  arc_dispatch(c, ARC_X_R(c, 24));
  /* 22f6b0: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 22f6b4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 22f6b8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2291388));
  fn2_1d2d24(c);
  /* 22f6bc: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22f6c0: add x0, x0, #0xf50 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3920)));
  /* 22f6c4: str x23, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 23));
  }
  /* 22f6c8: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2291404));
  fn2_24b720(c);
  /* 22f6cc: mov w2, w21 */
  ARC_W_W(c, 2, ARC_W_R(c, 21));
  /* 22f6d0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 22f6d4: b #0x22f5dc */
  goto L_22f5dc;
}

void fn2_231618(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078155288));
  /* 231618: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 23161c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 231620: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 231624: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 231628: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23162c: add x8, x8, #0x158 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(344)));
  /* 231630: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 231634: tbz w8, #0, #0x231670 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_231670;
L_231638:;
  /* 231638: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23163c: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 231640: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 231644: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 231648: ldr x8, [x8, #0x150] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(336))));
  /* 23164c: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 231650: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 231654: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 231658: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 23165c: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2299488));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 231660: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 231664: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 231668: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 23166c: ret  */
  return;
L_231670:;
  /* 231670: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 231674: add x8, x8, #0x158 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(344)));
  /* 231678: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 23167c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 231680: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2299524));
  fn2_24b710(c);
  /* 231684: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 231688: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23168c: cbz w8, #0x231638 */
  if ((ARC_W_R(c, 8)) == 0) goto L_231638;
  /* 231690: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 231694: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 231698: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 23169c: bl #0x2319d0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2299552));
  fn2_2319d0(c);
  /* 2316a0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 2316a4: adrp x1, #0x21000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(135168)));
  /* 2316a8: add x1, x1, #0x8b5 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2229)));
  /* 2316ac: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2316b0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2316b4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2299576));
  fn2_1b8fd4(c);
  /* 2316b8: mov w2, #0x6d64 */
  ARC_W_W(c, 2, UINT64_C(28004));
  /* 2316bc: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2316c0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 2316c4: movk w2, #0xbfdd, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3218931712)));
  /* 2316c8: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2299596));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 2316cc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 2316d0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2316d4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2299608));
  fn2_1d2d24(c);
  /* 2316d8: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 2316dc: add x0, x0, #0x150 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(336)));
  /* 2316e0: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 2316e4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2299624));
  fn2_24b720(c);
  /* 2316e8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2316ec: b #0x231638 */
  goto L_231638;
}

void fn2_233054(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078162004));
  /* 233054: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 233058: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 23305c: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 233060: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 233064: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 233068: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23306c: add x8, x8, #0x308 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(776)));
  /* 233070: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 233074: tbz w8, #0, #0x2330c0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_2330c0;
L_233078:;
  /* 233078: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23307c: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 233080: sxtw x11, w1 */
  ARC_X_W(c, 11, ((int64_t)(int32_t)(ARC_W_R(c, 1))));
  /* 233084: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 233088: ldr x8, [x8, #0x300] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(768))));
  /* 23308c: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 233090: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* 233094: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 233098: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 23309c: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 2330a0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2330a4: stp x11, x9, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 2330a8: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2306220));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 2330ac: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 2330b0: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 2330b4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 2330b8: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 2330bc: ret  */
  return;
L_2330c0:;
  /* 2330c0: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 2330c4: add x8, x8, #0x308 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(776)));
  /* 2330c8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 2330cc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2330d0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 2330d4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2306264));
  fn2_24b710(c);
  /* 2330d8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 2330dc: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 2330e0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2330e4: cbz w8, #0x233078 */
  if ((ARC_W_R(c, 8)) == 0) goto L_233078;
  /* 2330e8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2330ec: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 2330f0: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 2330f4: bl #0x233714 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2306296));
  fn2_233714(c);
  /* 2330f8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 2330fc: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 233100: add x1, x1, #0x183 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(387)));
  /* 233104: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 233108: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 23310c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2306320));
  fn2_1b8fd4(c);
  /* 233110: mov w2, #0x1009 */
  ARC_W_W(c, 2, UINT64_C(4105));
  /* 233114: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 233118: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 23311c: movk w2, #0x4cad, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1286406144)));
  /* 233120: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2306340));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 233124: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 233128: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 23312c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2306352));
  fn2_1d2d24(c);
  /* 233130: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 233134: add x0, x0, #0x300 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(768)));
  /* 233138: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 23313c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2306368));
  fn2_24b720(c);
  /* 233140: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 233144: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 233148: b #0x233078 */
  goto L_233078;
}

void fn2_2349b4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078168500));
  /* 2349b4: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 2349b8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2349bc: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 2349c0: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 2349c4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 2349c8: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 2349cc: add x8, x8, #0x518 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1304)));
  /* 2349d0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 2349d4: tbz w8, #0, #0x234a20 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_234a20;
L_2349d8:;
  /* 2349d8: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2349dc: adrp x9, #0x264000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 2349e0: mov w11, w1 */
  ARC_W_W(c, 11, ARC_W_R(c, 1));
  /* 2349e4: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 2349e8: ldr x8, [x9, #0x510] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(1296))));
  /* 2349ec: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 2349f0: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* 2349f4: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 2349f8: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 2349fc: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 234a00: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 234a04: stp x11, x9, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 234a08: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2312716));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 234a0c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 234a10: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 234a14: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 234a18: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 234a1c: ret  */
  return;
L_234a20:;
  /* 234a20: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 234a24: add x8, x8, #0x518 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1304)));
  /* 234a28: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 234a2c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 234a30: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* 234a34: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2312760));
  fn2_24b710(c);
  /* 234a38: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 234a3c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 234a40: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 234a44: cbz w8, #0x2349d8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_2349d8;
  /* 234a48: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 234a4c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 234a50: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 234a54: bl #0x23b340 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2312792));
  fn2_23b340(c);
  /* 234a58: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 234a5c: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 234a60: add x1, x1, #0x762 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1890)));
  /* 234a64: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 234a68: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 234a6c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2312816));
  fn2_1b8fd4(c);
  /* 234a70: mov w2, #0x8fb3 */
  ARC_W_W(c, 2, UINT64_C(36787));
  /* 234a74: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 234a78: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 234a7c: movk w2, #0xb87d, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3095199744)));
  /* 234a80: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2312836));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 234a84: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 234a88: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 234a8c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2312848));
  fn2_1d2d24(c);
  /* 234a90: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 234a94: add x0, x0, #0x510 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1296)));
  /* 234a98: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 234a9c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2312864));
  fn2_24b720(c);
  /* 234aa0: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 234aa4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 234aa8: b #0x2349d8 */
  goto L_2349d8;
}

void fn2_236738(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078176056));
  /* 236738: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 23673c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 236740: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 236744: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 236748: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23674c: add x8, x8, #0x718 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1816)));
  /* 236750: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 236754: tbz w8, #0, #0x236794 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_236794;
L_236758:;
  /* 236758: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23675c: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 236760: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 236764: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 236768: ldr x8, [x8, #0x710] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1808))));
  /* 23676c: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 236770: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 236774: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 236778: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 23677c: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2320256));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 236780: ldr w0, [x29, #0x18] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(24))));
  /* 236784: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 236788: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 23678c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 236790: ret  */
  return;
L_236794:;
  /* 236794: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 236798: add x8, x8, #0x718 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1816)));
  /* 23679c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 2367a0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2367a4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2320296));
  fn2_24b710(c);
  /* 2367a8: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 2367ac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2367b0: cbz w8, #0x236758 */
  if ((ARC_W_R(c, 8)) == 0) goto L_236758;
  /* 2367b4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2367b8: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 2367bc: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 2367c0: bl #0x23b340 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2320324));
  fn2_23b340(c);
  /* 2367c4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 2367c8: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 2367cc: add x1, x1, #0x784 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1924)));
  /* 2367d0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2367d4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2367d8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2320348));
  fn2_1b8fd4(c);
  /* 2367dc: mov w2, #0x984e */
  ARC_W_W(c, 2, UINT64_C(38990));
  /* 2367e0: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2367e4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 2367e8: movk w2, #0x9a1, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(161546240)));
  /* 2367ec: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2320368));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 2367f0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 2367f4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2367f8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2320380));
  fn2_1d2d24(c);
  /* 2367fc: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 236800: add x0, x0, #0x710 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1808)));
  /* 236804: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 236808: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2320396));
  fn2_24b720(c);
  /* 23680c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 236810: b #0x236758 */
  goto L_236758;
}

void fn2_2385ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078183916));
  /* 2385ec: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 2385f0: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2385f4: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 2385f8: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 2385fc: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 238600: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 238604: adrp x9, #0x264000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 238608: add x9, x9, #0x918 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2328)));
  /* 23860c: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 238610: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 238614: tbz w9, #0, #0x238674 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_238674;
L_238618:;
  /* 238618: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23861c: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 238620: sub x3, x29, #8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 238624: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 238628: ldr x8, [x8, #0x910] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2320))));
  /* 23862c: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 238630: stp x1, x2, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 238634: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 238638: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 23863c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 238640: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 238644: stur xzr, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 31));
  /* 238648: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2328140));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 23864c: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 238650: cbz x0, #0x238658 */
  if ((ARC_X_R(c, 0)) == 0) goto L_238658;
  /* 238654: bl #0x1b62dc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2328152));
  fn2_1b62dc(c);
L_238658:;
  /* 238658: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* 23865c: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 238660: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 238664: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 238668: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 23866c: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 238670: ret  */
  return;
L_238674:;
  /* 238674: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 238678: add x8, x8, #0x918 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2328)));
  /* 23867c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 238680: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 238684: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 238688: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* 23868c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2328208));
  fn2_24b710(c);
  /* 238690: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 238694: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 238698: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 23869c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 2386a0: cbz w8, #0x238618 */
  if ((ARC_W_R(c, 8)) == 0) goto L_238618;
  /* 2386a4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2386a8: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 2386ac: ldr x24, [x8] */
  ARC_X_W(c, 24, arc_ld64(ARC_X_R(c, 8)));
  /* 2386b0: bl #0x23b340 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2328244));
  fn2_23b340(c);
  /* 2386b4: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 2386b8: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* 2386bc: add x1, x1, #0x204 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(516)));
  /* 2386c0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 2386c4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2386c8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2328268));
  fn2_1b8fd4(c);
  /* 2386cc: mov w2, #0x6743 */
  ARC_W_W(c, 2, UINT64_C(26435));
  /* 2386d0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 2386d4: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 2386d8: movk w2, #0xbc96, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3163947008)));
  /* 2386dc: blr x24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2328288));
  arc_dispatch(c, ARC_X_R(c, 24));
  /* 2386e0: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 2386e4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 2386e8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2328300));
  fn2_1d2d24(c);
  /* 2386ec: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 2386f0: add x0, x0, #0x910 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2320)));
  /* 2386f4: str x23, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 23));
  }
  /* 2386f8: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2328316));
  fn2_24b720(c);
  /* 2386fc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 238700: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 238704: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 238708: b #0x238618 */
  goto L_238618;
}

void fn2_23a5dc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078192092));
  /* 23a5dc: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 23a5e0: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 23a5e4: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 23a5e8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 23a5ec: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 23a5f0: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23a5f4: add x8, x8, #0xb18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2840)));
  /* 23a5f8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 23a5fc: tbz w8, #0, #0x23a64c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_23a64c;
L_23a600:;
  /* 23a600: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23a604: and w8, w1, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 1) & UINT64_C(1)));
  /* 23a608: adrp x9, #0x264000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23a60c: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 23a610: strb w8, [sp, #4] */
  arc_st8(((c)->sp + INT64_C(4)), ARC_W_R(c, 8));
  /* 23a614: ldr x8, [x9, #0xb10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(2832))));
  /* 23a618: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 23a61c: add x9, sp, #4 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(4)));
  /* 23a620: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 23a624: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 23a628: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 23a62c: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 23a630: str x9, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 9));
  /* 23a634: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2336312));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 23a638: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 23a63c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 23a640: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 23a644: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 23a648: ret  */
  return;
L_23a64c:;
  /* 23a64c: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23a650: add x8, x8, #0xb18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2840)));
  /* 23a654: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 23a658: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 23a65c: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* 23a660: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2336356));
  fn2_24b710(c);
  /* 23a664: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 23a668: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 23a66c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23a670: cbz w8, #0x23a600 */
  if ((ARC_W_R(c, 8)) == 0) goto L_23a600;
  /* 23a674: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23a678: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 23a67c: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 23a680: bl #0x23b340 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2336388));
  fn2_23b340(c);
  /* 23a684: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 23a688: adrp x1, #0x28000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(163840)));
  /* 23a68c: add x1, x1, #0x4e6 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1254)));
  /* 23a690: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 23a694: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 23a698: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2336412));
  fn2_1b8fd4(c);
  /* 23a69c: mov w2, #0x76c2 */
  ARC_W_W(c, 2, UINT64_C(30402));
  /* 23a6a0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 23a6a4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 23a6a8: movk w2, #0x9a29, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2586378240)));
  /* 23a6ac: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2336432));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 23a6b0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 23a6b4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 23a6b8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2336444));
  fn2_1d2d24(c);
  /* 23a6bc: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23a6c0: add x0, x0, #0xb10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2832)));
  /* 23a6c4: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 23a6c8: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2336460));
  fn2_24b720(c);
  /* 23a6cc: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 23a6d0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23a6d4: b #0x23a600 */
  goto L_23a600;
}

void fn2_23b8d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078196948));
  /* 23b8d4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 23b8d8: ret  */
  return;
}

void fn2_23cb80(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078201728));
  /* 23cb80: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 23cb84: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 23cb88: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 23cb8c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 23cb90: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23cb94: add x8, x8, #0xda8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3496)));
  /* 23cb98: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 23cb9c: tbz w8, #0, #0x23cbd8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_23cbd8;
L_23cba0:;
  /* 23cba0: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23cba4: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23cba8: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 23cbac: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 23cbb0: ldr x8, [x8, #0xda0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3488))));
  /* 23cbb4: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 23cbb8: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 23cbbc: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 23cbc0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 23cbc4: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2345928));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 23cbc8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 23cbcc: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 23cbd0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 23cbd4: ret  */
  return;
L_23cbd8:;
  /* 23cbd8: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23cbdc: add x8, x8, #0xda8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3496)));
  /* 23cbe0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 23cbe4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 23cbe8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2345964));
  fn2_24b710(c);
  /* 23cbec: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 23cbf0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23cbf4: cbz w8, #0x23cba0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_23cba0;
  /* 23cbf8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23cbfc: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 23cc00: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 23cc04: bl #0x242738 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2345992));
  fn2_242738(c);
  /* 23cc08: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 23cc0c: adrp x1, #0x1c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(114688)));
  /* 23cc10: add x1, x1, #0xa36 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2614)));
  /* 23cc14: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 23cc18: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 23cc1c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2346016));
  fn2_1b8fd4(c);
  /* 23cc20: mov w2, #0x6d64 */
  ARC_W_W(c, 2, UINT64_C(28004));
  /* 23cc24: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 23cc28: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 23cc2c: movk w2, #0xbfdd, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3218931712)));
  /* 23cc30: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2346036));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 23cc34: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 23cc38: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 23cc3c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2346048));
  fn2_1d2d24(c);
  /* 23cc40: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23cc44: add x0, x0, #0xda0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3488)));
  /* 23cc48: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 23cc4c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2346064));
  fn2_24b720(c);
  /* 23cc50: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23cc54: b #0x23cba0 */
  goto L_23cba0;
}

void fn2_23ee9c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078210716));
  /* 23ee9c: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 23eea0: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 23eea4: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 23eea8: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 23eeac: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 23eeb0: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 23eeb4: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23eeb8: add x8, x8, #0xfa8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4008)));
  /* 23eebc: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 23eec0: tbz w8, #0, #0x23ef14 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_23ef14;
L_23eec4:;
  /* 23eec4: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* 23eec8: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23eecc: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 23eed0: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 23eed4: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 23eed8: add x10, x8, #0x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 23eedc: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 23eee0: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23eee4: csel x10, xzr, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 10)));
  /* 23eee8: ldr x0, [x8, #0xfa0] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(4000))));
  /* 23eeec: ldr x8, [x9] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 9)));
  /* 23eef0: stp x10, x2, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 23eef4: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 23eef8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2354940));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 23eefc: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 23ef00: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 23ef04: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 23ef08: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 23ef0c: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 23ef10: ret  */
  return;
L_23ef14:;
  /* 23ef14: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23ef18: add x8, x8, #0xfa8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4008)));
  /* 23ef1c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 23ef20: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 23ef24: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 23ef28: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 23ef2c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2354992));
  fn2_24b710(c);
  /* 23ef30: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 23ef34: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 23ef38: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 23ef3c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23ef40: cbz w8, #0x23eec4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_23eec4;
  /* 23ef44: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23ef48: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 23ef4c: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 23ef50: bl #0x242738 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2355028));
  fn2_242738(c);
  /* 23ef54: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 23ef58: adrp x1, #0x1d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(118784)));
  /* 23ef5c: add x1, x1, #0xefd */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3837)));
  /* 23ef60: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 23ef64: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 23ef68: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2355052));
  fn2_1b8fd4(c);
  /* 23ef6c: mov w2, #0x199b */
  ARC_W_W(c, 2, UINT64_C(6555));
  /* 23ef70: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 23ef74: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 23ef78: movk w2, #0x1723, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(388169728)));
  /* 23ef7c: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2355072));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 23ef80: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 23ef84: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 23ef88: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2355084));
  fn2_1d2d24(c);
  /* 23ef8c: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23ef90: add x0, x0, #0xfa0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(4000)));
  /* 23ef94: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 23ef98: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2355100));
  fn2_24b720(c);
  /* 23ef9c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 23efa0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23efa4: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 23efa8: b #0x23eec4 */
  goto L_23eec4;
}

void fn2_24136c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078220140));
  /* 24136c: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 241370: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 241374: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 241378: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 24137c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 241380: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 241384: add x8, x8, #0x1a8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(424)));
  /* 241388: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 24138c: tbz w8, #0, #0x2413dc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_2413dc;
L_241390:;
  /* 241390: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 241394: and w8, w1, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 1) & UINT64_C(1)));
  /* 241398: adrp x9, #0x265000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 24139c: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 2413a0: strb w8, [sp, #4] */
  arc_st8(((c)->sp + INT64_C(4)), ARC_W_R(c, 8));
  /* 2413a4: ldr x8, [x9, #0x1a0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(416))));
  /* 2413a8: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 2413ac: add x9, sp, #4 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(4)));
  /* 2413b0: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 2413b4: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 2413b8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2413bc: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 2413c0: str x9, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 9));
  /* 2413c4: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2364360));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 2413c8: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 2413cc: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 2413d0: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 2413d4: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 2413d8: ret  */
  return;
L_2413dc:;
  /* 2413dc: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 2413e0: add x8, x8, #0x1a8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(424)));
  /* 2413e4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 2413e8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2413ec: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* 2413f0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2364404));
  fn2_24b710(c);
  /* 2413f4: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 2413f8: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 2413fc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 241400: cbz w8, #0x241390 */
  if ((ARC_W_R(c, 8)) == 0) goto L_241390;
  /* 241404: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 241408: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 24140c: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 241410: bl #0x242738 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2364436));
  fn2_242738(c);
  /* 241414: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 241418: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* 24141c: add x1, x1, #0xedc */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3804)));
  /* 241420: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 241424: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 241428: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2364460));
  fn2_1b8fd4(c);
  /* 24142c: mov w2, #0x76c2 */
  ARC_W_W(c, 2, UINT64_C(30402));
  /* 241430: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 241434: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 241438: movk w2, #0x9a29, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2586378240)));
  /* 24143c: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2364480));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 241440: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 241444: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 241448: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2364492));
  fn2_1d2d24(c);
  /* 24144c: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 241450: add x0, x0, #0x1a0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(416)));
  /* 241454: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 241458: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2364508));
  fn2_24b720(c);
  /* 24145c: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 241460: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 241464: b #0x241390 */
  goto L_241390;
}

void fn2_242978(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078225784));
  /* 242978: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 24297c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 242980: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 242984: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 242988: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* 24298c: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* 242990: add x8, x8, #0x5e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1504)));
  /* 242994: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 242998: cbz x0, #0x2429c8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_2429c8;
L_24299c:;
  /* 24299c: ldr x1, [x0] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 0)));
  /* 2429a0: cbz x1, #0x2429b8 */
  if ((ARC_X_R(c, 1)) == 0) goto L_2429b8;
  /* 2429a4: bl #0xaeb74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2369960));
  fn2_aeb74(c);
  /* 2429a8: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 2429ac: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 2429b0: cbnz w8, #0x24299c */
  if ((ARC_W_R(c, 8)) != 0) goto L_24299c;
  /* 2429b4: b #0x2429c0 */
  goto L_2429c0;
L_2429b8:;
  /* 2429b8: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 2429bc: cbnz w8, #0x2429d8 */
  if ((ARC_W_R(c, 8)) != 0) goto L_2429d8;
L_2429c0:;
  /* 2429c0: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 2429c4: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2369992));
  fn2_1b5ce8(c);
L_2429c8:;
  /* 2429c8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2429cc: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 2429d0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 2429d4: b #0x24b730 */
  fn2_24b730(c); return;
L_2429d8:;
  /* 2429d8: adrp x0, #0x29000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(167936)));
  /* 2429dc: add x0, x0, #0x23f */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(575)));
  /* 2429e0: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 2429e4: add x1, x1, #0x30a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(778)));
  /* 2429e8: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* 2429ec: add x3, x3, #0xbb4 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2996)));
  /* 2429f0: mov w2, #0x317 */
  ARC_W_W(c, 2, UINT64_C(791));
  /* 2429f4: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 2429f8: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 2429fc: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2370048));
  fn2_1b54b0(c);
  /* 242a00: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 242a04: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 242a08: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 242a0c: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_2436f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078229232));
  /* 2436f0: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 2436f4: ret  */
  return;
}

void fn2_244720(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078233376));
  /* 244720: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 244724: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 244728: nop  */
  /* nop: no architectural effect here */
  /* 24472c: adr x8, #0x265338 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2511672)));
  /* 244730: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 244734: tbnz w8, #0, #0x244764 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_244764;
  /* 244738: nop  */
  /* nop: no architectural effect here */
  /* 24473c: adr x0, #0x265338 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2511672)));
  /* 244740: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2377540));
  fn2_24b710(c);
  /* 244744: cbz w0, #0x244764 */
  if ((ARC_W_R(c, 0)) == 0) goto L_244764;
  /* 244748: nop  */
  /* nop: no architectural effect here */
  /* 24474c: adr x0, #0x244a50 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2378320)));
  /* 244750: bl #0x1aff64 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2377556));
  fn2_1aff64(c);
  /* 244754: nop  */
  /* nop: no architectural effect here */
  /* 244758: adr x0, #0x265338 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2511672)));
  /* 24475c: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 244760: b #0x24b720 */
  fn2_24b720(c); return;
L_244764:;
  /* 244764: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 244768: ret  */
  return;
}

void fn2_245580(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078237056));
  /* 245580: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 245584: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 245588: str x19, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 19));
  /* 24558c: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 245590: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 245594: add x8, x8, #0x4d8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1240)));
  /* 245598: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 24559c: tbz w8, #0, #0x2455d8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_2455d8;
L_2455a0:;
  /* 2455a0: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 2455a4: add x9, sp, #0x10 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(16)));
  /* 2455a8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2455ac: ldr x8, [x8, #0x4d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1232))));
  /* 2455b0: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 2455b4: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 2455b8: str d0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), (c)->q[0].u64[0]);
  /* 2455bc: stur x9, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 9));
  /* 2455c0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2381252));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 2455c4: ldr d0, [x29, #0x18] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 2455c8: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 2455cc: ldr x19, [sp, #0x30] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(48))));
  /* 2455d0: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 2455d4: ret  */
  return;
L_2455d8:;
  /* 2455d8: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 2455dc: add x0, x0, #0x4d8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1240)));
  /* 2455e0: str d0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), (c)->q[0].u64[0]);
  /* 2455e4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2381288));
  fn2_24b710(c);
  /* 2455e8: ldr d0, [sp, #8] */
  arc_du_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 2455ec: cbz w0, #0x2455a0 */
  if ((ARC_W_R(c, 0)) == 0) goto L_2455a0;
  /* 2455f0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2455f4: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* 2455f8: add x1, x1, #0xdef */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3567)));
  /* 2455fc: ldr x8, [x8, #0x800] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2048))));
  /* 245600: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 245604: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 245608: ldr x19, [x8] */
  ARC_X_W(c, 19, arc_ld64(ARC_X_R(c, 8)));
  /* 24560c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2381328));
  fn2_1b8fd4(c);
  /* 245610: mov w1, #0x90b3 */
  ARC_W_W(c, 1, UINT64_C(37043));
  /* 245614: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 245618: movk w1, #0x7f8e, lsl #16 */
  ARC_W_W(c, 1, ((ARC_W_R(c, 1) & UINT64_C(18446744069414649855)) | UINT64_C(2140012544)));
  /* 24561c: blr x19 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2381344));
  arc_dispatch(c, ARC_X_R(c, 19));
  /* 245620: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 245624: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 245628: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2381356));
  fn2_1d2d24(c);
  /* 24562c: nop  */
  /* nop: no architectural effect here */
  /* 245630: adr x0, #0x2654d0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2512080)));
  /* 245634: str x19, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 19));
  }
  /* 245638: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2381372));
  fn2_24b720(c);
  /* 24563c: ldr d0, [sp, #8] */
  arc_du_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 245640: b #0x2455a0 */
  goto L_2455a0;
}

void fn2_246e98(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078243480));
  /* 246e98: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 246e9c: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 246ea0: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 246ea4: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 246ea8: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 246eac: adrp x9, #0x265000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 246eb0: add x9, x9, #0x6d8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1752)));
  /* 246eb4: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 246eb8: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 246ebc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 246ec0: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 246ec4: tbz w9, #0, #0x246f14 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_246f14;
L_246ec8:;
  /* 246ec8: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 246ecc: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 246ed0: ldr x22, [x8, #0x6d0] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + INT64_C(1744))));
  /* 246ed4: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2387672));
  fn2_1bc084(c);
  /* 246ed8: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 246edc: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 246ee0: mov w2, #2 */
  ARC_W_W(c, 2, UINT64_C(2));
  /* 246ee4: stp x21, x20, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* 246ee8: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2387692));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 246eec: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 246ef0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 246ef4: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2387704));
  fn2_1bc0b8(c);
  /* 246ef8: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 246efc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2387712));
  fn2_1bc620(c);
  /* 246f00: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 246f04: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 246f08: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 246f0c: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 246f10: ret  */
  return;
L_246f14:;
  /* 246f14: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 246f18: add x0, x0, #0x6d8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1752)));
  /* 246f1c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2387744));
  fn2_24b710(c);
  /* 246f20: cbz w0, #0x246ec8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_246ec8;
  /* 246f24: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 246f28: adrp x1, #0x27000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(159744)));
  /* 246f2c: add x1, x1, #0x8a2 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2210)));
  /* 246f30: ldr x8, [x8, #0x800] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2048))));
  /* 246f34: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 246f38: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 246f3c: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 246f40: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2387780));
  fn2_1b8fd4(c);
  /* 246f44: mov w1, #0xbdd0 */
  ARC_W_W(c, 1, UINT64_C(48592));
  /* 246f48: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 246f4c: movk w1, #0x1b69, lsl #16 */
  ARC_W_W(c, 1, ((ARC_W_R(c, 1) & UINT64_C(18446744069414649855)) | UINT64_C(459866112)));
  /* 246f50: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2387796));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 246f54: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 246f58: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 246f5c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2387808));
  fn2_1d2d24(c);
  /* 246f60: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 246f64: add x0, x0, #0x6d0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1744)));
  /* 246f68: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 246f6c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2387824));
  fn2_24b720(c);
  /* 246f70: b #0x246ec8 */
  goto L_246ec8;
}

void fn2_248a28(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078250536));
  /* 248a28: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 248a2c: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 248a30: str x23, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 23));
  /* 248a34: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 248a38: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 248a3c: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 248a40: adrp x9, #0x265000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 248a44: add x9, x9, #0x8d8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2264)));
  /* 248a48: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 248a4c: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 248a50: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 248a54: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 248a58: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 248a5c: tbz w9, #0, #0x248ab4 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_248ab4;
L_248a60:;
  /* 248a60: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 248a64: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 248a68: ldr x23, [x8, #0x8d0] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + INT64_C(2256))));
  /* 248a6c: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2394736));
  fn2_1bc084(c);
  /* 248a70: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 248a74: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 248a78: mov w2, #3 */
  ARC_W_W(c, 2, UINT64_C(3));
  /* 248a7c: stp x22, x21, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 248a80: str x20, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 20));
  /* 248a84: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2394760));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 248a88: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 248a8c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 248a90: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2394772));
  fn2_1bc0b8(c);
  /* 248a94: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 248a98: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2394780));
  fn2_1bc620(c);
  /* 248a9c: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 248aa0: ldr x23, [sp, #0x40] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(64))));
  /* 248aa4: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 248aa8: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 248aac: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 248ab0: ret  */
  return;
L_248ab4:;
  /* 248ab4: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 248ab8: add x0, x0, #0x8d8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2264)));
  /* 248abc: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2394816));
  fn2_24b710(c);
  /* 248ac0: cbz w0, #0x248a60 */
  if ((ARC_W_R(c, 0)) == 0) goto L_248a60;
  /* 248ac4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 248ac8: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* 248acc: add x1, x1, #0xdfe */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3582)));
  /* 248ad0: ldr x8, [x8, #0x800] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2048))));
  /* 248ad4: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 248ad8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 248adc: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 248ae0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2394852));
  fn2_1b8fd4(c);
  /* 248ae4: mov w1, #0x616e */
  ARC_W_W(c, 1, UINT64_C(24942));
  /* 248ae8: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 248aec: movk w1, #0xca0d, lsl #16 */
  ARC_W_W(c, 1, ((ARC_W_R(c, 1) & UINT64_C(18446744069414649855)) | UINT64_C(3389849600)));
  /* 248af0: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2394868));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 248af4: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 248af8: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 248afc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2394880));
  fn2_1d2d24(c);
  /* 248b00: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 248b04: add x0, x0, #0x8d0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2256)));
  /* 248b08: str x23, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 23));
  }
  /* 248b0c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2394896));
  fn2_24b720(c);
  /* 248b10: b #0x248a60 */
  goto L_248a60;
}

void fn2_24a484(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078257284));
  /* 24a484: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 24a488: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 24a48c: str x21, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 21));
  /* 24a490: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 24a494: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 24a498: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 24a49c: add x8, x8, #0xad8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2776)));
  /* 24a4a0: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 24a4a4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 24a4a8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 24a4ac: tbz w8, #0, #0x24a4ec */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_24a4ec;
L_24a4b0:;
  /* 24a4b0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 24a4b4: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2401464));
  fn2_1bc084(c);
  /* 24a4b8: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 24a4bc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 24a4c0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 24a4c4: ldr x8, [x8, #0xad0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2768))));
  /* 24a4c8: mov w2, w19 */
  ARC_W_W(c, 2, ARC_W_R(c, 19));
  /* 24a4cc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2401488));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 24a4d0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 24a4d4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2401496));
  fn2_1bc620(c);
  /* 24a4d8: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 24a4dc: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* 24a4e0: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 24a4e4: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 24a4e8: ret  */
  return;
L_24a4ec:;
  /* 24a4ec: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 24a4f0: add x0, x0, #0xad8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2776)));
  /* 24a4f4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2401528));
  fn2_24b710(c);
  /* 24a4f8: cbz w0, #0x24a4b0 */
  if ((ARC_W_R(c, 0)) == 0) goto L_24a4b0;
  /* 24a4fc: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 24a500: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 24a504: add x1, x1, #0x1c4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(452)));
  /* 24a508: ldr x8, [x8, #0x800] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2048))));
  /* 24a50c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 24a510: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 24a514: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 24a518: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2401564));
  fn2_1b8fd4(c);
  /* 24a51c: mov w1, #0x16e */
  ARC_W_W(c, 1, UINT64_C(366));
  /* 24a520: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 24a524: movk w1, #0x9de0, lsl #16 */
  ARC_W_W(c, 1, ((ARC_W_R(c, 1) & UINT64_C(18446744069414649855)) | UINT64_C(2648702976)));
  /* 24a528: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2401580));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 24a52c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 24a530: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 24a534: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2401592));
  fn2_1d2d24(c);
  /* 24a538: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 24a53c: add x0, x0, #0xad0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2768)));
  /* 24a540: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 24a544: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2401608));
  fn2_24b720(c);
  /* 24a548: b #0x24a4b0 */
  goto L_24a4b0;
}

void fn2_24b760(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078262112));
  /* 24b760: adrp x16, #0x258000 */
  ARC_X_W(c, 16, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 24b764: ldr x17, [x16, #0xaf8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2808))));
  /* 24b768: add x16, x16, #0xaf8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2808)));
  /* 24b76c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
}

void fn2_24b960(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078262624));
  /* 24b960: adrp x16, #0x258000 */
  ARC_X_W(c, 16, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 24b964: ldr x17, [x16, #0xbf8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3064))));
  /* 24b968: add x16, x16, #0xbf8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3064)));
  /* 24b96c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
}

