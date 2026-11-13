#include "lifted.h"

void fn1_9d918(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038573336));
  /* 9d918: bti c */
  /* bti: no architectural effect here */
  /* 9d91c: ldrb w8, [x0, #0x268] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(616))));
  /* 9d920: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 9d924: b.ne #0x9d93c */
  if (ARC_COND(c, 1)) goto L_9d93c;
  /* 9d928: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 9d92c: str xzr, [x1, #0x40] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(64)), ARC_X_R(c, 31));
  /* 9d930: stp q0, q0, [x1] */
  { const uint64_t _pa = ARC_X_R(c, 1);
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 9d934: stp q0, q0, [x1, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 9d938: ret  */
  return;
L_9d93c:;
  /* 9d93c: ldr q0, [x0, #0x220] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(544))), arc_ld64((ARC_X_R(c, 0) + INT64_C(544)) + 8));
  /* 9d940: str q0, [x1] */
  arc_st64(ARC_X_R(c, 1), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 1) + 8, (c)->q[0].u64[1]);
  /* 9d944: ldp q2, q0, [x0, #0x240] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(576));
    arc_q_w(c, 2, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 9d948: ldr x8, [x0, #0x260] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(608))));
  /* 9d94c: ldr q1, [x0, #0x230] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(560))), arc_ld64((ARC_X_R(c, 0) + INT64_C(560)) + 8));
  /* 9d950: str x8, [x1, #0x40] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(64)), ARC_X_R(c, 8));
  /* 9d954: stp q2, q0, [x1, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(32));
    arc_st64(_pa, (c)->q[2].u64[0]);
    arc_st64(_pa + 8, (c)->q[2].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 9d958: str q1, [x1, #0x10] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(16)), (c)->q[1].u64[0]);
  arc_st64((ARC_X_R(c, 1) + INT64_C(16)) + 8, (c)->q[1].u64[1]);
  /* 9d95c: ret  */
  return;
}

void fn1_a1ef4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038591220));
  /* a1ef4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a1ef8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a1efc: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* a1f00: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a1f04: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a1f08: bl #0x1425c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(663308));
  fn1_1425c0(c);
  /* a1f0c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a1f10: mov w1, #8 */
  ARC_W_W(c, 1, UINT64_C(8));
  /* a1f14: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* a1f18: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a1f1c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a1f20: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_a34e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038596840));
  /* a34e8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a34ec: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a34f0: str x27, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 27));
  /* a34f4: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* a34f8: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* a34fc: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a3500: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a3504: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a3508: ldr x8, [x1, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* a350c: mov w21, w4 */
  ARC_W_W(c, 21, ARC_W_R(c, 4));
  /* a3510: mov w22, w3 */
  ARC_W_W(c, 22, ARC_W_R(c, 3));
  /* a3514: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* a3518: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* a351c: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* a3520: tbz w4, #0, #0xa35a8 */
  if (((ARC_W_R(c, 4)) >> 0 & 1) == 0) goto L_a35a8;
  /* a3524: cmp x23, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* a3528: b.eq #0xa3684 */
  if (ARC_COND(c, 0)) goto L_a3684;
  /* a352c: ldr x24, [x23, #8] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* a3530: ldr x1, [x8, #8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* a3534: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* a3538: bl #0x142848 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(668988));
  fn1_142848(c);
  /* a353c: cbz w0, #0xa3684 */
  if ((ARC_W_R(c, 0)) == 0) goto L_a3684;
  /* a3540: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* a3544: cmp x23, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* a3548: b.eq #0xa355c */
  if (ARC_COND(c, 0)) goto L_a355c;
  /* a354c: ldr x1, [x8, #8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* a3550: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* a3554: bl #0x142848 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(669016));
  fn1_142848(c);
  /* a3558: cbnz w0, #0xa35c8 */
  if ((ARC_W_R(c, 0)) != 0) goto L_a35c8;
L_a355c:;
  /* a355c: ldr x8, [x19, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* a3560: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* a3564: b.eq #0xa3740 */
  if (ARC_COND(c, 0)) goto L_a3740;
  /* a3568: ldr x8, [x19, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(40))));
  /* a356c: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* a3570: b.eq #0xa3740 */
  if (ARC_COND(c, 0)) goto L_a3740;
  /* a3574: ldr w8, [x19, #0x44] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(68))));
  /* a3578: str w22, [x19, #0x38] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(56)), ARC_W_R(c, 22));
  /* a357c: cmp w8, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(4));
  /* a3580: b.eq #0xa383c */
  if (ARC_COND(c, 0)) goto L_a383c;
  /* a3584: ldr w8, [x23, #0x14] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 23) + INT64_C(20))));
  /* a3588: cbz w8, #0xa3834 */
  if ((ARC_W_R(c, 8)) == 0) goto L_a3834;
  /* a358c: add x8, x23, x8, lsl #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) + ((uint64_t)(ARC_X_R(c, 8)) << 4)));
  /* a3590: mov w22, wzr */
  ARC_W_W(c, 22, ARC_W_R(c, 31));
  /* a3594: mov w27, wzr */
  ARC_W_W(c, 27, ARC_W_R(c, 31));
  /* a3598: add x25, x23, #0x18 */
  ARC_X_W(c, 25, (ARC_X_R(c, 23) + UINT64_C(24)));
  /* a359c: mov w26, #1 */
  ARC_W_W(c, 26, UINT64_C(1));
  /* a35a0: add x24, x8, #0x18 */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* a35a4: b #0xa36b0 */
  goto L_a36b0;
L_a35a8:;
  /* a35a8: ldr x9, [x23, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* a35ac: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* a35b0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* a35b4: b.eq #0xa3684 */
  if (ARC_COND(c, 0)) goto L_a3684;
  /* a35b8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* a35bc: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* a35c0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* a35c4: b.eq #0xa355c */
  if (ARC_COND(c, 0)) goto L_a355c;
L_a35c8:;
  /* a35c8: ldr x9, [x23, #0x20] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 23) + INT64_C(32))));
  /* a35cc: ldr w24, [x23, #0x14] */
  ARC_W_W(c, 24, arc_ld32((ARC_X_R(c, 23) + INT64_C(20))));
  /* a35d0: asr x8, x9, #8 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(8)) & 63))));
  /* a35d4: tbz w9, #0, #0xa35e0 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_a35e0;
  /* a35d8: ldr x10, [x20] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 20)));
  /* a35dc: ldr x8, [x10, x8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 10) + ARC_X_R(c, 8))));
L_a35e0:;
  /* a35e0: ldr x0, [x23, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 23) + INT64_C(24))));
  /* a35e4: tst x9, #2 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(2)));
  /* a35e8: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* a35ec: csel w3, w9, w22, eq */
  ARC_W_W(c, 3, (ARC_COND(c, 0) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 22)));
  /* a35f0: add x2, x20, x8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* a35f4: and w4, w21, #1 */
  ARC_W_W(c, 4, (ARC_W_R(c, 21) & UINT64_C(1)));
  /* a35f8: ldr x10, [x0] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 0)));
  /* a35fc: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* a3600: ldr x10, [x10, #0x30] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(48))));
  /* a3604: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(669192));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* a3608: cmp w24, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 24), UINT64_C(2));
  /* a360c: b.lo #0xa3884 */
  if (ARC_COND(c, 3)) goto L_a3884;
  /* a3610: add x9, x23, x24, lsl #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) + ((uint64_t)(ARC_X_R(c, 24)) << 4)));
  /* a3614: ldr w8, [x23, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 23) + INT64_C(16))));
  /* a3618: add x23, x23, #0x28 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(40)));
  /* a361c: add x24, x9, #0x18 */
  ARC_X_W(c, 24, (ARC_X_R(c, 9) + UINT64_C(24)));
  /* a3620: tbnz w8, #1, #0xa3630 */
  if (((ARC_W_R(c, 8)) >> 1 & 1) != 0) goto L_a3630;
  /* a3624: ldr w9, [x19, #0x3c] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 19) + INT64_C(60))));
  /* a3628: cmp w9, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(1));
  /* a362c: b.ne #0xa3754 */
  if (ARC_COND(c, 1)) goto L_a3754;
L_a3630:;
  /* a3630: mov w25, #2 */
  ARC_W_W(c, 25, UINT64_C(2));
  /* a3634: b #0xa3664 */
  goto L_a3664;
L_a3638:;
  /* a3638: ldr x0, [x23], #0x10 */
  { const uint64_t _a = ARC_X_R(c, 23);
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(16));
    ARC_X_W(c, 0, arc_ld64(_a));
  }
  /* a363c: tst x9, #2 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(2)));
  /* a3640: csel w3, w25, w22, eq */
  ARC_W_W(c, 3, (ARC_COND(c, 0) ? (ARC_W_R(c, 25)) : ARC_W_R(c, 22)));
  /* a3644: add x2, x20, x8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* a3648: and w4, w21, #1 */
  ARC_W_W(c, 4, (ARC_W_R(c, 21) & UINT64_C(1)));
  /* a364c: ldr x10, [x0] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 0)));
  /* a3650: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* a3654: ldr x9, [x10, #0x30] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 10) + INT64_C(48))));
  /* a3658: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(669276));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* a365c: cmp x23, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 24));
  /* a3660: b.hs #0xa3884 */
  if (ARC_COND(c, 2)) goto L_a3884;
L_a3664:;
  /* a3664: ldrb w8, [x19, #0x4e] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(78))));
  /* a3668: tbnz w8, #0, #0xa3884 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_a3884;
  /* a366c: ldr x9, [x23, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* a3670: asr x8, x9, #8 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(8)) & 63))));
  /* a3674: tbz w9, #0, #0xa3638 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_a3638;
  /* a3678: ldr x10, [x20] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 20)));
  /* a367c: ldr x8, [x10, x8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 10) + ARC_X_R(c, 8))));
  /* a3680: b #0xa3638 */
  goto L_a3638;
L_a3684:;
  /* a3684: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* a3688: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* a368c: b.ne #0xa3884 */
  if (ARC_COND(c, 1)) goto L_a3884;
  /* a3690: ldr w8, [x19, #0x34] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(52))));
  /* a3694: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* a3698: b.eq #0xa3884 */
  if (ARC_COND(c, 0)) goto L_a3884;
  /* a369c: str w22, [x19, #0x34] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(52)), ARC_W_R(c, 22));
  /* a36a0: b #0xa3884 */
  goto L_a3884;
L_a36a4:;
  /* a36a4: add x25, x25, #0x10 */
  ARC_X_W(c, 25, (ARC_X_R(c, 25) + UINT64_C(16)));
  /* a36a8: cmp x25, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 24));
  /* a36ac: b.hs #0xa381c */
  if (ARC_COND(c, 2)) goto L_a381c;
L_a36b0:;
  /* a36b0: strh wzr, [x19, #0x4c] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(76)), ARC_W_R(c, 31));
  /* a36b4: ldr x9, [x25, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 25) + INT64_C(8))));
  /* a36b8: asr x8, x9, #8 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(8)) & 63))));
  /* a36bc: tbz w9, #0, #0xa36c8 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_a36c8;
  /* a36c0: ldr x10, [x20] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 20)));
  /* a36c4: ldr x8, [x10, x8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 10) + ARC_X_R(c, 8))));
L_a36c8:;
  /* a36c8: ldr x0, [x25] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 25)));
  /* a36cc: tst x9, #2 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(2)));
  /* a36d0: add x3, x20, x8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* a36d4: cinc w4, w26, eq */
  ARC_W_W(c, 4, (ARC_COND(c, 0) ? (ARC_W_R(c, 26)) + 1 : (ARC_W_R(c, 26))));
  /* a36d8: and w5, w21, #1 */
  ARC_W_W(c, 5, (ARC_W_R(c, 21) & UINT64_C(1)));
  /* a36dc: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* a36e0: ldr x10, [x0] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 0)));
  /* a36e4: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* a36e8: ldr x9, [x10, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 10) + INT64_C(40))));
  /* a36ec: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(669424));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* a36f0: ldrb w8, [x19, #0x4e] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(78))));
  /* a36f4: tbnz w8, #0, #0xa381c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_a381c;
  /* a36f8: ldrb w8, [x19, #0x4d] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(77))));
  /* a36fc: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* a3700: b.ne #0xa36a4 */
  if (ARC_COND(c, 1)) goto L_a36a4;
  /* a3704: ldrb w8, [x19, #0x4c] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(76))));
  /* a3708: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* a370c: b.ne #0xa3730 */
  if (ARC_COND(c, 1)) goto L_a3730;
  /* a3710: ldr w8, [x19, #0x30] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(48))));
  /* a3714: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* a3718: b.eq #0xa386c */
  if (ARC_COND(c, 0)) goto L_a386c;
  /* a371c: ldrb w8, [x23, #0x10] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 23) + INT64_C(16))));
  /* a3720: tbz w8, #1, #0xa386c */
  if (((ARC_W_R(c, 8)) >> 1 & 1) == 0) goto L_a386c;
  /* a3724: mov w27, #1 */
  ARC_W_W(c, 27, UINT64_C(1));
  /* a3728: mov w22, #1 */
  ARC_W_W(c, 22, UINT64_C(1));
  /* a372c: b #0xa36a4 */
  goto L_a36a4;
L_a3730:;
  /* a3730: ldrb w8, [x23, #0x10] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 23) + INT64_C(16))));
  /* a3734: tbz w8, #0, #0xa3878 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_a3878;
  /* a3738: mov w27, #1 */
  ARC_W_W(c, 27, UINT64_C(1));
  /* a373c: b #0xa36a4 */
  goto L_a36a4;
L_a3740:;
  /* a3740: cmp w22, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(1));
  /* a3744: b.ne #0xa3884 */
  if (ARC_COND(c, 1)) goto L_a3884;
  /* a3748: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* a374c: str w8, [x19, #0x38] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(56)), ARC_W_R(c, 8));
  /* a3750: b #0xa3884 */
  goto L_a3884;
L_a3754:;
  /* a3754: mov w25, #2 */
  ARC_W_W(c, 25, UINT64_C(2));
  /* a3758: tbnz w8, #0, #0xa378c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_a378c;
  /* a375c: b #0xa37f0 */
  goto L_a37f0;
L_a3760:;
  /* a3760: ldr x0, [x23], #0x10 */
  { const uint64_t _a = ARC_X_R(c, 23);
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(16));
    ARC_X_W(c, 0, arc_ld64(_a));
  }
  /* a3764: tst x9, #2 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(2)));
  /* a3768: csel w3, w25, w22, eq */
  ARC_W_W(c, 3, (ARC_COND(c, 0) ? (ARC_W_R(c, 25)) : ARC_W_R(c, 22)));
  /* a376c: add x2, x20, x8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* a3770: and w4, w21, #1 */
  ARC_W_W(c, 4, (ARC_W_R(c, 21) & UINT64_C(1)));
  /* a3774: ldr x10, [x0] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 0)));
  /* a3778: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* a377c: ldr x9, [x10, #0x30] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 10) + INT64_C(48))));
  /* a3780: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(669572));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* a3784: cmp x23, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 24));
  /* a3788: b.hs #0xa3884 */
  if (ARC_COND(c, 2)) goto L_a3884;
L_a378c:;
  /* a378c: ldrb w8, [x19, #0x4e] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(78))));
  /* a3790: tbnz w8, #0, #0xa3884 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_a3884;
  /* a3794: ldr w8, [x19, #0x3c] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(60))));
  /* a3798: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* a379c: b.ne #0xa37ac */
  if (ARC_COND(c, 1)) goto L_a37ac;
  /* a37a0: ldr w8, [x19, #0x30] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(48))));
  /* a37a4: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* a37a8: b.eq #0xa3884 */
  if (ARC_COND(c, 0)) goto L_a3884;
L_a37ac:;
  /* a37ac: ldr x9, [x23, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* a37b0: asr x8, x9, #8 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(8)) & 63))));
  /* a37b4: tbz w9, #0, #0xa3760 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_a3760;
  /* a37b8: ldr x10, [x20] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 20)));
  /* a37bc: ldr x8, [x10, x8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 10) + ARC_X_R(c, 8))));
  /* a37c0: b #0xa3760 */
  goto L_a3760;
L_a37c4:;
  /* a37c4: ldr x0, [x23], #0x10 */
  { const uint64_t _a = ARC_X_R(c, 23);
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(16));
    ARC_X_W(c, 0, arc_ld64(_a));
  }
  /* a37c8: tst x9, #2 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(2)));
  /* a37cc: csel w3, w25, w22, eq */
  ARC_W_W(c, 3, (ARC_COND(c, 0) ? (ARC_W_R(c, 25)) : ARC_W_R(c, 22)));
  /* a37d0: add x2, x20, x8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* a37d4: and w4, w21, #1 */
  ARC_W_W(c, 4, (ARC_W_R(c, 21) & UINT64_C(1)));
  /* a37d8: ldr x10, [x0] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 0)));
  /* a37dc: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* a37e0: ldr x9, [x10, #0x30] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 10) + INT64_C(48))));
  /* a37e4: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(669672));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* a37e8: cmp x23, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 24));
  /* a37ec: b.hs #0xa3884 */
  if (ARC_COND(c, 2)) goto L_a3884;
L_a37f0:;
  /* a37f0: ldrb w8, [x19, #0x4e] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(78))));
  /* a37f4: tbnz w8, #0, #0xa3884 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_a3884;
  /* a37f8: ldr w8, [x19, #0x3c] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(60))));
  /* a37fc: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* a3800: b.eq #0xa3884 */
  if (ARC_COND(c, 0)) goto L_a3884;
  /* a3804: ldr x9, [x23, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* a3808: asr x8, x9, #8 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(8)) & 63))));
  /* a380c: tbz w9, #0, #0xa37c4 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_a37c4;
  /* a3810: ldr x10, [x20] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 20)));
  /* a3814: ldr x8, [x10, x8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 10) + ARC_X_R(c, 8))));
  /* a3818: b #0xa37c4 */
  goto L_a37c4;
L_a381c:;
  /* a381c: tst w27, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 27) & UINT64_C(1)));
  /* a3820: mov w8, #3 */
  ARC_W_W(c, 8, UINT64_C(3));
  /* a3824: cinc w8, w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? (ARC_W_R(c, 8)) + 1 : (ARC_W_R(c, 8))));
  /* a3828: str w8, [x19, #0x44] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(68)), ARC_W_R(c, 8));
  /* a382c: tbz w22, #0, #0xa383c */
  if (((ARC_W_R(c, 22)) >> 0 & 1) == 0) goto L_a383c;
  /* a3830: b #0xa3884 */
  goto L_a3884;
L_a3834:;
  /* a3834: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* a3838: str w8, [x19, #0x44] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(68)), ARC_W_R(c, 8));
L_a383c:;
  /* a383c: ldp w9, w8, [x19, #0x3c] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(60));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 8, arc_ld32(_pa + 4));
  }
  /* a3840: str x20, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), ARC_X_R(c, 20));
  /* a3844: add w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* a3848: cmp w9, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(1));
  /* a384c: str w8, [x19, #0x40] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(64)), ARC_W_R(c, 8));
  /* a3850: b.ne #0xa3884 */
  if (ARC_COND(c, 1)) goto L_a3884;
  /* a3854: ldr w8, [x19, #0x30] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(48))));
  /* a3858: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* a385c: b.ne #0xa3884 */
  if (ARC_COND(c, 1)) goto L_a3884;
  /* a3860: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* a3864: strb w8, [x19, #0x4e] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(78)), ARC_W_R(c, 8));
  /* a3868: b #0xa3884 */
  goto L_a3884;
L_a386c:;
  /* a386c: mov w8, #3 */
  ARC_W_W(c, 8, UINT64_C(3));
  /* a3870: str w8, [x19, #0x44] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(68)), ARC_W_R(c, 8));
  /* a3874: b #0xa3884 */
  goto L_a3884;
L_a3878:;
  /* a3878: mov w8, #3 */
  ARC_W_W(c, 8, UINT64_C(3));
  /* a387c: str w8, [x19, #0x44] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(68)), ARC_W_R(c, 8));
  /* a3880: tbz w22, #0, #0xa383c */
  if (((ARC_W_R(c, 22)) >> 0 & 1) == 0) goto L_a383c;
L_a3884:;
  /* a3884: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a3888: ldr x27, [sp, #0x10] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(16))));
  /* a388c: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a3890: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* a3894: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* a3898: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a389c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a38a0: ret  */
  return;
}

void fn1_aa518(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038625560));
  /* aa518: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* aa51c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* aa520: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* aa524: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* aa528: ldrb w19, [x0, #0x20] */
  ARC_W_W(c, 19, arc_ld8((ARC_X_R(c, 0) + INT64_C(32))));
  /* aa52c: tbz w19, #0, #0xaa538 */
  if (((ARC_W_R(c, 19)) >> 0 & 1) == 0) goto L_aa538;
  /* aa530: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
  /* aa534: b #0xaa580 */
  goto L_aa580;
L_aa538:;
  /* aa538: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* aa53c: ldr x8, [x0, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* aa540: strb w9, [x0, #0x20] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(32)), ARC_W_R(c, 9));
  /* aa544: ldurh w9, [x8, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 8) + INT64_C(9))));
  /* aa548: ubfx w9, w9, #0xa, #2 */
  ARC_W_W(c, 9, (((uint32_t)(ARC_W_R(c, 9)) >> 10) & UINT64_C(3)));
  /* aa54c: cmp w9, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(2));
  /* aa550: b.ne #0xaa574 */
  if (ARC_COND(c, 1)) goto L_aa574;
  /* aa554: ldr x9, [x8] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 8)));
  /* aa558: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* aa55c: ldr x9, [x9, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(16))));
  /* aa560: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* aa564: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(697704));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* aa568: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* aa56c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* aa570: b #0xaa57c */
  goto L_aa57c;
L_aa574:;
  /* aa574: cmp w9, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(0));
  /* aa578: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
L_aa57c:;
  /* aa57c: strb w19, [x0, #0x20] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(32)), ARC_W_R(c, 19));
L_aa580:;
  /* aa580: and w0, w8, #1 */
  ARC_W_W(c, 0, (ARC_W_R(c, 8) & UINT64_C(1)));
  /* aa584: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* aa588: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* aa58c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* aa590: ret  */
  return;
  /* aa594: strb w19, [x20, #0x20] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(32)), ARC_W_R(c, 19));
  /* aa598: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(697756));
  fn1_9cc20(c);
}

void fn1_b183c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038655036));
  /* b183c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b1840: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b1844: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b1848: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b184c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b1850: ldr x8, [x0, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* b1854: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b1858: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b185c: cmp x8, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(4));
  /* b1860: b.lo #0xb1970 */
  if (ARC_COND(c, 3)) goto L_b1970;
  /* b1864: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b1868: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b186c: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b1870: add w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* b1874: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b1878: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* b187c: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b1880: b.ls #0xb18ac */
  if (ARC_COND(c, 9)) goto L_b18ac;
  /* b1884: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b1888: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b188c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b1890: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b1894: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b1898: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(727196));
  fn1_142878(c);
  /* b189c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b18a0: cbz x0, #0xb1b04 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b1b04;
  /* b18a4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b18a8: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b18ac:;
  /* b18ac: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b18b0: mov w9, #0x28 */
  ARC_W_W(c, 9, UINT64_C(40));
  /* b18b4: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b18b8: ldr x21, [x20, #0x18] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* b18bc: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b18c0: cbz x21, #0xb191c */
  if ((ARC_X_R(c, 21)) == 0) goto L_b191c;
  /* b18c4: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b18c8: add x9, x8, x21 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* b18cc: ldr x22, [x20, #0x10] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* b18d0: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b18d4: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b18d8: b.ls #0xb1900 */
  if (ARC_COND(c, 9)) goto L_b1900;
  /* b18dc: lsl x8, x10, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b18e0: add x9, x9, #0x3e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(992)));
  /* b18e4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b18e8: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* b18ec: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b18f0: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(727284));
  fn1_142878(c);
  /* b18f4: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b18f8: cbz x0, #0xb1b10 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b1b10;
  /* b18fc: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b1900:;
  /* b1900: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b1904: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* b1908: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* b190c: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(727312));
  fn1_1449d8(c);
  /* b1910: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b1914: add x8, x8, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* b1918: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_b191c:;
  /* b191c: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b1920: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b1924: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b1928: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b192c: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* b1930: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b1934: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* b1938: b.ls #0xb1964 */
  if (ARC_COND(c, 9)) goto L_b1964;
  /* b193c: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b1940: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b1944: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b1948: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b194c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b1950: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(727380));
  fn1_142878(c);
  /* b1954: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b1958: cbz x0, #0xb1b0c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b1b0c;
  /* b195c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b1960: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b1964:;
  /* b1964: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b1968: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* b196c: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
L_b1970:;
  /* b1970: ldr x21, [x20, #0x20] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* b1974: ldrb w8, [x21] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 21)));
  /* b1978: cmp w8, #0x6e */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(110));
  /* b197c: b.ne #0xb1a2c */
  if (ARC_COND(c, 1)) goto L_b1a2c;
  /* b1980: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b1984: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b1988: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b198c: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b1990: b.ls #0xb19bc */
  if (ARC_COND(c, 9)) goto L_b19bc;
  /* b1994: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b1998: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b199c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b19a0: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b19a4: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b19a8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(727468));
  fn1_142878(c);
  /* b19ac: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b19b0: cbz x0, #0xb1b08 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b1b08;
  /* b19b4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b19b8: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b19bc:;
  /* b19bc: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b19c0: mov w9, #0x2d */
  ARC_W_W(c, 9, UINT64_C(45));
  /* b19c4: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b19c8: ldr x8, [x20, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(40))));
  /* b19cc: subs x21, x8, #1 */
  ARC_X_W(c, 21, arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1)));
  /* b19d0: b.eq #0xb1a88 */
  if (ARC_COND(c, 0)) goto L_b1a88;
  /* b19d4: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b19d8: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b19dc: ldr x22, [x20, #0x20] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* b19e0: add x10, x8, x21 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* b19e4: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b19e8: b.ls #0xb1a10 */
  if (ARC_COND(c, 9)) goto L_b1a10;
  /* b19ec: lsl x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b19f0: add x9, x10, #0x3e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(992)));
  /* b19f4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b19f8: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* b19fc: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b1a00: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(727556));
  fn1_142878(c);
  /* b1a04: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b1a08: cbz x0, #0xb1b18 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b1b18;
  /* b1a0c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b1a10:;
  /* b1a10: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b1a14: add x1, x22, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* b1a18: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* b1a1c: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(727584));
  fn1_1449d8(c);
  /* b1a20: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b1a24: add x8, x8, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* b1a28: b #0xb1a84 */
  goto L_b1a84;
L_b1a2c:;
  /* b1a2c: ldr x22, [x20, #0x28] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 20) + INT64_C(40))));
  /* b1a30: cbz x22, #0xb1a88 */
  if ((ARC_X_R(c, 22)) == 0) goto L_b1a88;
  /* b1a34: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b1a38: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b1a3c: add x10, x8, x22 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + ARC_X_R(c, 22)));
  /* b1a40: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b1a44: b.ls #0xb1a6c */
  if (ARC_COND(c, 9)) goto L_b1a6c;
  /* b1a48: lsl x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b1a4c: add x9, x10, #0x3e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(992)));
  /* b1a50: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b1a54: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* b1a58: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b1a5c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(727648));
  fn1_142878(c);
  /* b1a60: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b1a64: cbz x0, #0xb1b14 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b1b14;
  /* b1a68: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b1a6c:;
  /* b1a6c: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b1a70: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* b1a74: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* b1a78: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(727676));
  fn1_1449d8(c);
  /* b1a7c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b1a80: add x8, x8, x22 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 22)));
L_b1a84:;
  /* b1a84: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_b1a88:;
  /* b1a88: ldr x21, [x20, #0x18] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* b1a8c: cmp x21, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(3));
  /* b1a90: b.hi #0xb1af0 */
  if (ARC_COND(c, 8)) goto L_b1af0;
  /* b1a94: cbz x21, #0xb1af0 */
  if ((ARC_X_R(c, 21)) == 0) goto L_b1af0;
  /* b1a98: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b1a9c: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b1aa0: ldr x20, [x20, #0x10] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* b1aa4: add x10, x8, x21 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* b1aa8: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b1aac: b.ls #0xb1ad4 */
  if (ARC_COND(c, 9)) goto L_b1ad4;
  /* b1ab0: lsl x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b1ab4: add x9, x10, #0x3e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(992)));
  /* b1ab8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b1abc: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* b1ac0: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b1ac4: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(727752));
  fn1_142878(c);
  /* b1ac8: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b1acc: cbz x0, #0xb1b1c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b1b1c;
  /* b1ad0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b1ad4:;
  /* b1ad4: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b1ad8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* b1adc: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* b1ae0: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(727780));
  fn1_1449d8(c);
  /* b1ae4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b1ae8: add x8, x8, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* b1aec: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_b1af0:;
  /* b1af0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b1af4: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* b1af8: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b1afc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b1b00: ret  */
  return;
L_b1b04:;
  /* b1b04: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(727816));
  fn1_1427b8(c);
L_b1b08:;
  /* b1b08: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(727820));
  fn1_1427b8(c);
L_b1b0c:;
  /* b1b0c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(727824));
  fn1_1427b8(c);
L_b1b10:;
  /* b1b10: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(727828));
  fn1_1427b8(c);
L_b1b14:;
  /* b1b14: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(727832));
  fn1_1427b8(c);
L_b1b18:;
  /* b1b18: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(727836));
  fn1_1427b8(c);
L_b1b1c:;
  /* b1b1c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(727840));
  fn1_1427b8(c);
}

void fn1_b5a0c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038671884));
  /* b5a0c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b5a10: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b5a14: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b5a18: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b5a1c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b5a20: ldp x9, x10, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b5a24: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b5a28: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* b5a2c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b5a30: add x11, x9, #8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(8)));
  /* b5a34: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* b5a38: b.ls #0xb5a68 */
  if (ARC_COND(c, 9)) goto L_b5a68;
  /* b5a3c: lsl x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b5a40: add x9, x9, #0x3e8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1000)));
  /* b5a44: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* b5a48: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b5a4c: csel x1, x10, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* b5a50: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b5a54: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(744024));
  fn1_142878(c);
  /* b5a58: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b5a5c: cbz x0, #0xb5d3c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b5d3c;
  /* b5a60: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b5a64: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
L_b5a68:;
  /* b5a68: mov x10, #0x6572 */
  ARC_X_W(c, 10, UINT64_C(25970));
  /* b5a6c: movk x10, #0x7571, lsl #16 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1970339840)));
  /* b5a70: movk x10, #0x7269, lsl #32 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446462603027808255)) | UINT64_C(125795297132544)));
  /* b5a74: movk x10, #0x7365, lsl #48 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(281474976710655)) | UINT64_C(8315052287009488896)));
  /* b5a78: str x10, [x8, x9] */
  arc_st64((ARC_X_R(c, 8) + ARC_X_R(c, 9)), ARC_X_R(c, 10));
  /* b5a7c: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b5a80: ldr x10, [x20, #0x18] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* b5a84: add x8, x9, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(8)));
  /* b5a88: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b5a8c: cbz x10, #0xb5b90 */
  if ((ARC_X_R(c, 10)) == 0) goto L_b5b90;
  /* b5a90: ldr x11, [x19, #0x10] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b5a94: add x10, x9, #9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(9)));
  /* b5a98: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b5a9c: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* b5aa0: b.ls #0xb5acc */
  if (ARC_COND(c, 9)) goto L_b5acc;
  /* b5aa4: lsl x8, x11, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 11)) << ((UINT64_C(1)) & 63)));
  /* b5aa8: add x9, x9, #0x3e9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1001)));
  /* b5aac: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b5ab0: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* b5ab4: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b5ab8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(744124));
  fn1_142878(c);
  /* b5abc: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b5ac0: cbz x0, #0xb5d50 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b5d50;
  /* b5ac4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b5ac8: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b5acc:;
  /* b5acc: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* b5ad0: mov w9, #0x20 */
  ARC_W_W(c, 9, UINT64_C(32));
  /* b5ad4: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b5ad8: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b5adc: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b5ae0: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b5ae4: add w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* b5ae8: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b5aec: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* b5af0: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b5af4: b.ls #0xb5b20 */
  if (ARC_COND(c, 9)) goto L_b5b20;
  /* b5af8: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b5afc: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b5b00: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b5b04: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b5b08: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b5b0c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(744208));
  fn1_142878(c);
  /* b5b10: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b5b14: cbz x0, #0xb5d54 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b5d54;
  /* b5b18: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b5b1c: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b5b20:;
  /* b5b20: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b5b24: mov w9, #0x28 */
  ARC_W_W(c, 9, UINT64_C(40));
  /* b5b28: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b5b2c: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b5b30: add x0, x20, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(16)));
  /* b5b34: bl #0xafa48 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(744248));
  fn1_afa48(c);
  /* b5b38: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b5b3c: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b5b40: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b5b44: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* b5b48: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b5b4c: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* b5b50: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b5b54: b.ls #0xb5b80 */
  if (ARC_COND(c, 9)) goto L_b5b80;
  /* b5b58: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b5b5c: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b5b60: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b5b64: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b5b68: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b5b6c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(744304));
  fn1_142878(c);
  /* b5b70: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b5b74: cbz x0, #0xb5d58 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b5d58;
  /* b5b78: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b5b7c: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b5b80:;
  /* b5b80: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b5b84: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* b5b88: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b5b8c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b5b90:;
  /* b5b90: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b5b94: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b5b98: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b5b9c: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b5ba0: b.ls #0xb5bcc */
  if (ARC_COND(c, 9)) goto L_b5bcc;
  /* b5ba4: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b5ba8: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b5bac: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b5bb0: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b5bb4: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b5bb8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(744380));
  fn1_142878(c);
  /* b5bbc: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b5bc0: cbz x0, #0xb5d40 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b5d40;
  /* b5bc4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b5bc8: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b5bcc:;
  /* b5bcc: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b5bd0: mov w9, #0x20 */
  ARC_W_W(c, 9, UINT64_C(32));
  /* b5bd4: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b5bd8: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b5bdc: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b5be0: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b5be4: add w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* b5be8: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b5bec: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* b5bf0: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b5bf4: b.ls #0xb5c20 */
  if (ARC_COND(c, 9)) goto L_b5c20;
  /* b5bf8: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b5bfc: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b5c00: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b5c04: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b5c08: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b5c0c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(744464));
  fn1_142878(c);
  /* b5c10: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b5c14: cbz x0, #0xb5d44 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b5d44;
  /* b5c18: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b5c1c: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b5c20:;
  /* b5c20: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b5c24: mov w9, #0x7b */
  ARC_W_W(c, 9, UINT64_C(123));
  /* b5c28: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b5c2c: ldr x8, [x20, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(40))));
  /* b5c30: cbz x8, #0xb5c8c */
  if ((ARC_X_R(c, 8)) == 0) goto L_b5c8c;
  /* b5c34: ldr x21, [x20, #0x20] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* b5c38: lsl x22, x8, #3 */
  ARC_X_W(c, 22, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(3)) & 63)));
  /* b5c3c: b #0xb5c4c */
  goto L_b5c4c;
L_b5c40:;
  /* b5c40: subs x22, x22, #8 */
  ARC_X_W(c, 22, arc_sub64(c, ARC_X_R(c, 22), UINT64_C(8)));
  /* b5c44: add x21, x21, #8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* b5c48: b.eq #0xb5c8c */
  if (ARC_COND(c, 0)) goto L_b5c8c;
L_b5c4c:;
  /* b5c4c: ldr x20, [x21] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 21)));
  /* b5c50: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b5c54: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b5c58: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b5c5c: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b5c60: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(744548));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b5c64: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b5c68: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b5c6c: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b5c70: b.eq #0xb5c40 */
  if (ARC_COND(c, 0)) goto L_b5c40;
  /* b5c74: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b5c78: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b5c7c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b5c80: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b5c84: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(744584));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b5c88: b #0xb5c40 */
  goto L_b5c40;
L_b5c8c:;
  /* b5c8c: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b5c90: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b5c94: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b5c98: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b5c9c: b.ls #0xb5cc8 */
  if (ARC_COND(c, 9)) goto L_b5cc8;
  /* b5ca0: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b5ca4: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b5ca8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b5cac: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b5cb0: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b5cb4: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(744632));
  fn1_142878(c);
  /* b5cb8: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b5cbc: cbz x0, #0xb5d48 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b5d48;
  /* b5cc0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b5cc4: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b5cc8:;
  /* b5cc8: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b5ccc: mov w9, #0x20 */
  ARC_W_W(c, 9, UINT64_C(32));
  /* b5cd0: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b5cd4: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b5cd8: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b5cdc: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b5ce0: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* b5ce4: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b5ce8: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* b5cec: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b5cf0: b.ls #0xb5d1c */
  if (ARC_COND(c, 9)) goto L_b5d1c;
  /* b5cf4: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b5cf8: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b5cfc: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b5d00: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b5d04: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b5d08: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(744716));
  fn1_142878(c);
  /* b5d0c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b5d10: cbz x0, #0xb5d4c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b5d4c;
  /* b5d14: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b5d18: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b5d1c:;
  /* b5d1c: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b5d20: mov w9, #0x7d */
  ARC_W_W(c, 9, UINT64_C(125));
  /* b5d24: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b5d28: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b5d2c: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* b5d30: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b5d34: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b5d38: ret  */
  return;
L_b5d3c:;
  /* b5d3c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(744768));
  fn1_1427b8(c);
L_b5d40:;
  /* b5d40: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(744772));
  fn1_1427b8(c);
L_b5d44:;
  /* b5d44: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(744776));
  fn1_1427b8(c);
L_b5d48:;
  /* b5d48: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(744780));
  fn1_1427b8(c);
L_b5d4c:;
  /* b5d4c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(744784));
  fn1_1427b8(c);
L_b5d50:;
  /* b5d50: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(744788));
  fn1_1427b8(c);
L_b5d54:;
  /* b5d54: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(744792));
  fn1_1427b8(c);
L_b5d58:;
  /* b5d58: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(744796));
  fn1_1427b8(c);
}

void fn1_b841c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038682652));
  /* b841c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b8420: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b8424: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b8428: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b842c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b8430: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* b8434: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b8438: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b843c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b8440: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b8444: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b8448: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(754764));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b844c: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* b8450: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b8454: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b8458: b.eq #0xb8470 */
  if (ARC_COND(c, 0)) goto L_b8470;
  /* b845c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b8460: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b8464: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b8468: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b846c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(754800));
  arc_dispatch(c, ARC_X_R(c, 8));
L_b8470:;
  /* b8470: ldr x20, [x20, #0x18] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* b8474: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b8478: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b847c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b8480: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b8484: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(754824));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b8488: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b848c: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b8490: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b8494: b.ne #0xb84ac */
  if (ARC_COND(c, 1)) goto L_b84ac;
  /* b8498: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b849c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b84a0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b84a4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b84a8: ret  */
  return;
L_b84ac:;
  /* b84ac: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b84b0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b84b4: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b84b8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b84bc: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b84c0: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b84c4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b84c8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b84cc: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_bb7d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038695892));
  /* bb7d4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bb7d8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bb7dc: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bb7e0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bb7e4: ldrb w9, [x0, #0x18] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(24))));
  /* bb7e8: ldr x8, [x1, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* bb7ec: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* bb7f0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* bb7f4: tbnz w9, #0, #0xbb858 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_bb858;
  /* bb7f8: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* bb7fc: add x10, x8, #9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(9)));
  /* bb800: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* bb804: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* bb808: b.ls #0xbb830 */
  if (ARC_COND(c, 9)) goto L_bb830;
  /* bb80c: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* bb810: add x8, x8, #0x3e9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1001)));
  /* bb814: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bb818: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bb81c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bb820: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(768036));
  fn1_142878(c);
  /* bb824: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bb828: cbz x0, #0xbbaa8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bbaa8;
  /* bb82c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_bb830:;
  /* bb830: adrp x9, #0x50000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(327680)));
  /* bb834: add x9, x9, #0x1b7 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(439)));
  /* bb838: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* bb83c: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* bb840: mov w10, #0x20 */
  ARC_W_W(c, 10, UINT64_C(32));
  /* bb844: strb w10, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 10));
  /* bb848: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* bb84c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bb850: add x8, x8, #9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(9)));
  /* bb854: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_bb858:;
  /* bb858: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* bb85c: add x10, x8, #7 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(7)));
  /* bb860: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* bb864: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* bb868: b.ls #0xbb890 */
  if (ARC_COND(c, 9)) goto L_bb890;
  /* bb86c: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* bb870: add x8, x8, #0x3e7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(999)));
  /* bb874: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bb878: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bb87c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bb880: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(768132));
  fn1_142878(c);
  /* bb884: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bb888: cbz x0, #0xbba9c */
  if ((ARC_X_R(c, 0)) == 0) goto L_bba9c;
  /* bb88c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_bb890:;
  /* bb890: mov w9, #0x4974 */
  ARC_W_W(c, 9, UINT64_C(18804));
  /* bb894: mov w10, #0x425f */
  ARC_W_W(c, 10, UINT64_C(16991));
  /* bb898: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* bb89c: movk w9, #0x746e, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1953366016)));
  /* bb8a0: movk w10, #0x7469, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1953038336)));
  /* bb8a4: stur w9, [x8, #3] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(3)), ARC_W_R(c, 9));
  /* bb8a8: str w10, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* bb8ac: ldp x10, x11, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* bb8b0: ldr w8, [x19, #0x20] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* bb8b4: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* bb8b8: add w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* bb8bc: add x9, x10, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(8)));
  /* bb8c0: str w8, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 8));
  /* bb8c4: add x8, x10, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + UINT64_C(7)));
  /* bb8c8: cmp x9, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 11));
  /* bb8cc: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* bb8d0: b.ls #0xbb8fc */
  if (ARC_COND(c, 9)) goto L_bb8fc;
  /* bb8d4: lsl x8, x11, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 11)) << ((UINT64_C(1)) & 63)));
  /* bb8d8: add x9, x10, #0x3e8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(1000)));
  /* bb8dc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* bb8e0: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* bb8e4: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bb8e8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(768236));
  fn1_142878(c);
  /* bb8ec: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bb8f0: cbz x0, #0xbbaa0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bbaa0;
  /* bb8f4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bb8f8: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_bb8fc:;
  /* bb8fc: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* bb900: mov w9, #0x28 */
  ARC_W_W(c, 9, UINT64_C(40));
  /* bb904: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* bb908: ldr x20, [x20, #0x10] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* bb90c: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* bb910: and w8, w8, #0x3f */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(63)));
  /* bb914: cmp w8, #0x13 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(19));
  /* bb918: b.hs #0xbb958 */
  if (ARC_COND(c, 2)) goto L_bb958;
  /* bb91c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* bb920: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* bb924: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bb928: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* bb92c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(768304));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bb930: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* bb934: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* bb938: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* bb93c: b.eq #0xbba38 */
  if (ARC_COND(c, 0)) goto L_bba38;
  /* bb940: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* bb944: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* bb948: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bb94c: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* bb950: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(768340));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bb954: b #0xbba38 */
  goto L_bba38;
L_bb958:;
  /* bb958: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* bb95c: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* bb960: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* bb964: add w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* bb968: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bb96c: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* bb970: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* bb974: b.ls #0xbb9a0 */
  if (ARC_COND(c, 9)) goto L_bb9a0;
  /* bb978: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* bb97c: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* bb980: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bb984: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bb988: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bb98c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(768400));
  fn1_142878(c);
  /* bb990: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bb994: cbz x0, #0xbbaac */
  if ((ARC_X_R(c, 0)) == 0) goto L_bbaac;
  /* bb998: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bb99c: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_bb9a0:;
  /* bb9a0: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* bb9a4: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* bb9a8: mov w10, #0x28 */
  ARC_W_W(c, 10, UINT64_C(40));
  /* bb9ac: strb w10, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 10));
  /* bb9b0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* bb9b4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bb9b8: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* bb9bc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(768448));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bb9c0: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* bb9c4: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* bb9c8: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* bb9cc: b.eq #0xbb9e4 */
  if (ARC_COND(c, 0)) goto L_bb9e4;
  /* bb9d0: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* bb9d4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* bb9d8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bb9dc: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* bb9e0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(768484));
  arc_dispatch(c, ARC_X_R(c, 8));
L_bb9e4:;
  /* bb9e4: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* bb9e8: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* bb9ec: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* bb9f0: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* bb9f4: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bb9f8: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* bb9fc: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* bba00: b.ls #0xbba2c */
  if (ARC_COND(c, 9)) goto L_bba2c;
  /* bba04: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* bba08: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* bba0c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bba10: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bba14: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bba18: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(768540));
  fn1_142878(c);
  /* bba1c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bba20: cbz x0, #0xbbab0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bbab0;
  /* bba24: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bba28: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_bba2c:;
  /* bba2c: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* bba30: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* bba34: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
L_bba38:;
  /* bba38: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* bba3c: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* bba40: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* bba44: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* bba48: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bba4c: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* bba50: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* bba54: b.ls #0xbba80 */
  if (ARC_COND(c, 9)) goto L_bba80;
  /* bba58: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* bba5c: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* bba60: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bba64: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bba68: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bba6c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(768624));
  fn1_142878(c);
  /* bba70: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bba74: cbz x0, #0xbbaa4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bbaa4;
  /* bba78: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bba7c: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_bba80:;
  /* bba80: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* bba84: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* bba88: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* bba8c: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bba90: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bba94: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bba98: ret  */
  return;
L_bba9c:;
  /* bba9c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(768672));
  fn1_1427b8(c);
L_bbaa0:;
  /* bbaa0: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(768676));
  fn1_1427b8(c);
L_bbaa4:;
  /* bbaa4: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(768680));
  fn1_1427b8(c);
L_bbaa8:;
  /* bbaa8: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(768684));
  fn1_1427b8(c);
L_bbaac:;
  /* bbaac: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(768688));
  fn1_1427b8(c);
L_bbab0:;
  /* bbab0: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(768692));
  fn1_1427b8(c);
}

void fn1_bdf30(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038705968));
  /* bdf30: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bdf34: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bdf38: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* bdf3c: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* bdf40: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bdf44: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bdf48: nop  */
  /* nop: no architectural effect here */
  /* bdf4c: adr x0, #0x156bb8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1403832)));
  /* bdf50: bl #0x144ac8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(778068));
  fn1_144ac8(c);
  /* bdf54: ldr x21, [x0] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 0)));
  /* bdf58: cbz x21, #0xbe018 */
  if ((ARC_X_R(c, 21)) == 0) goto L_be018;
  /* bdf5c: mov x20, x21 */
  ARC_X_W(c, 20, ARC_X_R(c, 21));
  /* bdf60: mov x22, #0x2b00 */
  ARC_X_W(c, 22, UINT64_C(11008));
  /* bdf64: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* bdf68: ldr x8, [x20, #0x60]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(96));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(96));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* bdf6c: movk x22, #0x432b, lsl #16 */
  ARC_X_W(c, 22, ((ARC_X_R(c, 22) & UINT64_C(18446744069414649855)) | UINT64_C(1126891520)));
  /* bdf70: movk x22, #0x4e47, lsl #32 */
  ARC_X_W(c, 22, ((ARC_X_R(c, 22) & UINT64_C(18446462603027808255)) | UINT64_C(86066849644544)));
  /* bdf74: movk x22, #0x434c, lsl #48 */
  ARC_X_W(c, 22, ((ARC_X_R(c, 22) & UINT64_C(281474976710655)) | UINT64_C(4849250898771181568)));
  /* bdf78: and x23, x8, #0xffffffffffffff00 */
  ARC_X_W(c, 23, (ARC_X_R(c, 8) & UINT64_C(18446744073709551360)));
  /* bdf7c: cmp x23, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 22));
  /* bdf80: b.ne #0xbdfa0 */
  if (ARC_COND(c, 1)) goto L_bdfa0;
  /* bdf84: ldr w8, [x21, #0x38] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 21) + INT64_C(56))));
  /* bdf88: ldr w9, [x19, #8] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 19) + INT64_C(8))));
  /* bdf8c: neg w8, w8 */
  ARC_W_W(c, 8, ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 8))));
  /* bdf90: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* bdf94: str w8, [x21, #0x38] */
  arc_st32((ARC_X_R(c, 21) + INT64_C(56)), ARC_W_R(c, 8));
  /* bdf98: str w9, [x19, #8] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(8)), ARC_W_R(c, 9));
  /* bdf9c: b #0xbdfa4 */
  goto L_bdfa4;
L_bdfa0:;
  /* bdfa0: str xzr, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 31));
L_bdfa4:;
  /* bdfa4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* bdfa8: bl #0x9c8d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(778156));
  fn1_9c8d0(c);
  /* bdfac: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* bdfb0: and x8, x8, #0xffffffffffffff00 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(18446744073709551360)));
  /* bdfb4: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* bdfb8: b.ne #0xbdffc */
  if (ARC_COND(c, 1)) goto L_bdffc;
  /* bdfbc: ldr w9, [x21, #0x38] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 21) + INT64_C(56))));
  /* bdfc0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* bdfc4: cmp w9, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(0));
  /* bdfc8: cneg w9, w9, mi */
  ARC_W_W(c, 9, (ARC_COND(c, 4) ? ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 9))) : (ARC_W_R(c, 9))));
  /* bdfcc: cmp x21, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* bdfd0: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* bdfd4: str w9, [x21, #0x38] */
  arc_st32((ARC_X_R(c, 21) + INT64_C(56)), ARC_W_R(c, 9));
  /* bdfd8: b.eq #0xbdfe4 */
  if (ARC_COND(c, 0)) goto L_bdfe4;
  /* bdfdc: str x8, [x21, #0x30] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(48)), ARC_X_R(c, 8));
  /* bdfe0: str x21, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 21));
L_bdfe4:;
  /* bdfe4: ldr w8, [x19, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(8))));
  /* bdfe8: sub w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* bdfec: str w8, [x19, #8] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(8)), ARC_W_R(c, 8));
  /* bdff0: cmp x23, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 22));
  /* bdff4: b.eq #0xbe010 */
  if (ARC_COND(c, 0)) goto L_be010;
  /* bdff8: b #0xbe018 */
  goto L_be018;
L_bdffc:;
  /* bdffc: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* be000: cbnz x8, #0xbe018 */
  if ((ARC_X_R(c, 8)) != 0) goto L_be018;
  /* be004: str x21, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 21));
  /* be008: cmp x23, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 22));
  /* be00c: b.ne #0xbe018 */
  if (ARC_COND(c, 1)) goto L_be018;
L_be010:;
  /* be010: ldr x0, [x21, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + INT64_C(40))));
  /* be014: bl #0xa1518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(778264));
  fn1_a1518(c);
L_be018:;
  /* be018: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(778268));
  fn1_142488(c);
}

void fn1_d294c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038790476));
  /* d294c: bti c */
  /* bti: no architectural effect here */
  /* d2950: mov w1, #8 */
  ARC_W_W(c, 1, UINT64_C(8));
  /* d2954: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_d8234(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038813236));
  /* d8234: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d8238: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d823c: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* d8240: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d8244: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* d8248: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* d824c: ldp x11, x10, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* d8250: ldrb w13, [x0] */
  ARC_W_W(c, 13, arc_ld8(ARC_X_R(c, 0)));
  /* d8254: mov w9, #0x16 */
  ARC_W_W(c, 9, UINT64_C(22));
  /* d8258: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d825c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* d8260: lsr x12, x8, #1 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* d8264: csinc x7, x10, x1, ne */
  ARC_X_W(c, 7, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 1)) + 1)));
  /* d8268: ldp x8, x10, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* d826c: csel x6, x12, x11, eq */
  ARC_X_W(c, 6, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* d8270: tst w13, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 13) & UINT64_C(1)));
  /* d8274: and x11, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* d8278: ubfx x12, x8, #1, #7 */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 8)) >> 1) & UINT64_C(127)));
  /* d827c: sub x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* d8280: csel x1, x9, x11, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 11)));
  /* d8284: tst x8, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 8) & UINT64_C(1)));
  /* d8288: csel x20, x12, x10, eq */
  ARC_X_W(c, 20, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* d828c: sub x9, x1, x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) - ARC_X_R(c, 20)));
  /* d8290: cmp x9, x6 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 6));
  /* d8294: b.hs #0xd82b8 */
  if (ARC_COND(c, 2)) goto L_d82b8;
  /* d8298: sub x8, x6, x1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 6) - ARC_X_R(c, 1)));
  /* d829c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d82a0: mov x3, x20 */
  ARC_X_W(c, 3, ARC_X_R(c, 20));
  /* d82a4: add x2, x8, x20 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) + ARC_X_R(c, 20)));
  /* d82a8: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* d82ac: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* d82b0: bl #0x142b90 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(885428));
  fn1_142b90(c);
  /* d82b4: b #0xd82fc */
  goto L_d82fc;
L_d82b8:;
  /* d82b8: cbz x6, #0xd82fc */
  if ((ARC_X_R(c, 6)) == 0) goto L_d82fc;
  /* d82bc: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* d82c0: tst x8, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 8) & UINT64_C(1)));
  /* d82c4: mov x1, x7 */
  ARC_X_W(c, 1, ARC_X_R(c, 7));
  /* d82c8: mov x2, x6 */
  ARC_X_W(c, 2, ARC_X_R(c, 6));
  /* d82cc: mov x22, x6 */
  ARC_X_W(c, 22, ARC_X_R(c, 6));
  /* d82d0: csinc x21, x9, x19, ne */
  ARC_X_W(c, 21, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* d82d4: add x0, x21, x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ARC_X_R(c, 20)));
  /* d82d8: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(885468));
  fn1_1449f0(c);
  /* d82dc: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* d82e0: add x8, x20, x22 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + ARC_X_R(c, 22)));
  /* d82e4: tbnz w9, #0, #0xd82f4 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_d82f4;
  /* d82e8: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* d82ec: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* d82f0: b #0xd82f8 */
  goto L_d82f8;
L_d82f4:;
  /* d82f4: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_d82f8:;
  /* d82f8: strb wzr, [x21, x8] */
  arc_st8((ARC_X_R(c, 21) + ARC_X_R(c, 8)), ARC_W_R(c, 31));
L_d82fc:;
  /* d82fc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d8300: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d8304: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* d8308: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d830c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d8310: ret  */
  return;
}

void fn1_dba7c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038827644));
  /* dba7c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* dba80: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* dba84: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* dba88: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* dba8c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* dba90: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* dba94: cmp x2, #0x10 */
  (void)arc_sub64(c, ARC_X_R(c, 2), UINT64_C(16));
  /* dba98: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* dba9c: b.hi #0xdbaf8 */
  if (ARC_COND(c, 8)) goto L_dbaf8;
  /* dbaa0: ldr w8, [x19, #0x20] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* dbaa4: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* dbaa8: lsl x9, x9, x8 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((ARC_X_R(c, 8)) & 63)));
  /* dbaac: cmp x1, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 9));
  /* dbab0: b.hi #0xdbaf8 */
  if (ARC_COND(c, 8)) goto L_dbaf8;
  /* dbab4: cmp x1, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 2));
  /* dbab8: sxtw x8, w8 */
  ARC_X_W(c, 8, ((int64_t)(int32_t)(ARC_W_R(c, 8))));
  /* dbabc: csel x9, x1, x2, hi */
  ARC_X_W(c, 9, (ARC_COND(c, 8) ? (ARC_X_R(c, 1)) : ARC_X_R(c, 2)));
  /* dbac0: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* dbac4: cmp x9, #8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(8));
  /* dbac8: b.hs #0xdbad4 */
  if (ARC_COND(c, 2)) goto L_dbad4;
  /* dbacc: mov w21, wzr */
  ARC_W_W(c, 21, ARC_W_R(c, 31));
  /* dbad0: b #0xdbaf0 */
  goto L_dbaf0;
L_dbad4:;
  /* dbad4: lsr x9, x9, #3 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63)));
  /* dbad8: mov w21, wzr */
  ARC_W_W(c, 21, ARC_W_R(c, 31));
L_dbadc:;
  /* dbadc: lsr x10, x9, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* dbae0: cmp x9, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(1));
  /* dbae4: add w21, w21, #1 */
  ARC_W_W(c, 21, (ARC_W_R(c, 21) + UINT64_C(1)));
  /* dbae8: mov x9, x10 */
  ARC_X_W(c, 9, ARC_X_R(c, 10));
  /* dbaec: b.hi #0xdbadc */
  if (ARC_COND(c, 8)) goto L_dbadc;
L_dbaf0:;
  /* dbaf0: cmp w21, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 21), ARC_W_R(c, 8));
  /* dbaf4: b.ne #0xdbb48 */
  if (ARC_COND(c, 1)) goto L_dbb48;
L_dbaf8:;
  /* dbaf8: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* dbafc: add x9, x1, #7 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) + UINT64_C(7)));
  /* dbb00: cmp x2, #8 */
  (void)arc_sub64(c, ARC_X_R(c, 2), UINT64_C(8));
  /* dbb04: mov w10, #8 */
  ARC_W_W(c, 10, UINT64_C(8));
  /* dbb08: and x22, x9, #0xfffffffffffffff8 */
  ARC_X_W(c, 22, (ARC_X_R(c, 9) & UINT64_C(18446744073709551608)));
  /* dbb0c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* dbb10: csel x20, x2, x10, hi */
  ARC_X_W(c, 20, (ARC_COND(c, 8) ? (ARC_X_R(c, 2)) : ARC_X_R(c, 10)));
  /* dbb14: add x21, x22, #0x18 */
  ARC_X_W(c, 21, (ARC_X_R(c, 22) + UINT64_C(24)));
  /* dbb18: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* dbb1c: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* dbb20: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* dbb24: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(899880));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* dbb28: ldr x8, [x19, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* dbb2c: add x9, x0, x22 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + ARC_X_R(c, 22)));
  /* dbb30: add x10, x0, x21 */
  ARC_X_W(c, 10, (ARC_X_R(c, 0) + ARC_X_R(c, 21)));
  /* dbb34: stur x0, [x10, #-0x10] */
  arc_st64((ARC_X_R(c, 10) + INT64_C(-16)), ARC_X_R(c, 0));
  /* dbb38: str x8, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* dbb3c: str x20, [x9, #0x10] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(16)), ARC_X_R(c, 20));
  /* dbb40: str x9, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 9));
  /* dbb44: b #0xdbc84 */
  goto L_dbc84;
L_dbb48:;
  /* dbb48: ldr x0, [x19, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* dbb4c: cbnz x0, #0xdbb84 */
  if ((ARC_X_R(c, 0)) != 0) goto L_dbb84;
  /* dbb50: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* dbb54: lsl x1, x8, #4 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(4)) & 63)));
  /* dbb58: mov w2, #8 */
  ARC_W_W(c, 2, UINT64_C(8));
  /* dbb5c: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* dbb60: ldr x8, [x9, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(16))));
  /* dbb64: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(899944));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* dbb68: ldrsw x8, [x19, #0x20] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 19) + INT64_C(32)))));
  /* dbb6c: str x0, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 0));
  /* dbb70: cbz w8, #0xdbb84 */
  if ((ARC_W_R(c, 8)) == 0) goto L_dbb84;
  /* dbb74: lsl x2, x8, #4 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(4)) & 63)));
  /* dbb78: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* dbb7c: bl #0x144a20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(899968));
  fn1_144a20(c);
  /* dbb80: ldr x0, [x19, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
L_dbb84:;
  /* dbb84: add x20, x0, w21, sxtw #4 */
  ARC_X_W(c, 20, (ARC_X_R(c, 0) + ((uint64_t)(((uint64_t)(int64_t)(int32_t)(ARC_W_R(c, 21)))) << 4)));
  /* dbb88: ldr x0, [x20, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* dbb8c: cbz x0, #0xdbb98 */
  if ((ARC_X_R(c, 0)) == 0) goto L_dbb98;
  /* dbb90: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* dbb94: b #0xdbc80 */
  goto L_dbc80;
L_dbb98:;
  /* dbb98: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* dbb9c: cbz x8, #0xdbbac */
  if ((ARC_X_R(c, 8)) == 0) goto L_dbbac;
  /* dbba0: ldr x9, [x8, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* dbba4: sub x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* dbba8: add x8, x8, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(24)));
L_dbbac:;
  /* dbbac: add w9, w21, #3 */
  ARC_W_W(c, 9, (ARC_W_R(c, 21) + UINT64_C(3)));
  /* dbbb0: mov w10, #0x400 */
  ARC_W_W(c, 10, UINT64_C(1024));
  /* dbbb4: mov w11, #0x10 */
  ARC_W_W(c, 11, UINT64_C(16));
  /* dbbb8: lsr x10, x10, x9 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((ARC_X_R(c, 9)) & 63)));
  /* dbbbc: lsr x8, x8, x9 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((ARC_X_R(c, 9)) & 63)));
  /* dbbc0: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* dbbc4: mov w2, #0x10 */
  ARC_W_W(c, 2, UINT64_C(16));
  /* dbbc8: mov w24, #0x10 */
  ARC_W_W(c, 24, UINT64_C(16));
  /* dbbcc: cmp x10, #0x10 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(16));
  /* dbbd0: add x12, x8, x8, lsr #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 8)) >> 2)));
  /* dbbd4: csel x10, x10, x11, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 11)));
  /* dbbd8: ldr w11, [x19, #0x24] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(36))));
  /* dbbdc: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* dbbe0: mov w8, #0x40000000 */
  ARC_W_W(c, 8, UINT64_C(1073741824));
  /* dbbe4: csel x10, x12, x10, ne */
  ARC_X_W(c, 10, (ARC_COND(c, 1) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* dbbe8: mov w12, #0x100000 */
  ARC_W_W(c, 12, UINT64_C(1048576));
  /* dbbec: lsr x8, x8, x9 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((ARC_X_R(c, 9)) & 63)));
  /* dbbf0: cmp w11, #0x100, lsl #12 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(1048576));
  /* dbbf4: csel w11, w11, w12, lo */
  ARC_W_W(c, 11, (ARC_COND(c, 3) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 12)));
  /* dbbf8: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* dbbfc: csel x8, x8, x11, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 11)));
  /* dbc00: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* dbc04: csel x8, x10, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* dbc08: mov w10, #1 */
  ARC_W_W(c, 10, UINT64_C(1));
  /* dbc0c: lsl x21, x8, x9 */
  ARC_X_W(c, 21, ((uint64_t)(ARC_X_R(c, 8)) << ((ARC_X_R(c, 9)) & 63)));
  /* dbc10: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* dbc14: lsl x22, x10, x9 */
  ARC_X_W(c, 22, ((uint64_t)(ARC_X_R(c, 10)) << ((ARC_X_R(c, 9)) & 63)));
  /* dbc18: add x11, x21, #7 */
  ARC_X_W(c, 11, (ARC_X_R(c, 21) + UINT64_C(7)));
  /* dbc1c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* dbc20: and x23, x11, #0xfffffffffffffff8 */
  ARC_X_W(c, 23, (ARC_X_R(c, 11) & UINT64_C(18446744073709551608)));
  /* dbc24: add x19, x23, #0x18 */
  ARC_X_W(c, 19, (ARC_X_R(c, 23) + UINT64_C(24)));
  /* dbc28: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* dbc2c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(900144));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* dbc30: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* dbc34: add x9, x0, x23 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + ARC_X_R(c, 23)));
  /* dbc38: add x10, x0, x19 */
  ARC_X_W(c, 10, (ARC_X_R(c, 0) + ARC_X_R(c, 19)));
  /* dbc3c: cmp x21, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 22));
  /* dbc40: stur x0, [x10, #-0x10] */
  arc_st64((ARC_X_R(c, 10) + INT64_C(-16)), ARC_X_R(c, 0));
  /* dbc44: str x8, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* dbc48: str x24, [x9, #0x10] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(16)), ARC_X_R(c, 24));
  /* dbc4c: str x9, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 9));
  /* dbc50: b.ls #0xdbc84 */
  if (ARC_COND(c, 9)) goto L_dbc84;
  /* dbc54: ldr x9, [x20, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* dbc58: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* dbc5c: mov x10, x22 */
  ARC_X_W(c, 10, ARC_X_R(c, 22));
L_dbc60:;
  /* dbc60: sub x21, x21, x22 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) - ARC_X_R(c, 22)));
  /* dbc64: add x11, x0, x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + ARC_X_R(c, 10)));
  /* dbc68: add x8, x8, x22 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 22)));
  /* dbc6c: cmp x22, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 21));
  /* dbc70: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* dbc74: add x10, x10, x22 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + ARC_X_R(c, 22)));
  /* dbc78: mov x9, x11 */
  ARC_X_W(c, 9, ARC_X_R(c, 11));
  /* dbc7c: b.ne #0xdbc60 */
  if (ARC_COND(c, 1)) goto L_dbc60;
L_dbc80:;
  /* dbc80: str x8, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 8));
L_dbc84:;
  /* dbc84: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* dbc88: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* dbc8c: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* dbc90: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* dbc94: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* dbc98: ret  */
  return;
}

void fn1_e03c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038846408));
  /* e03c8: bti c */
  /* bti: no architectural effect here */
  /* e03cc: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e03d0: tbnz w8, #0, #0xe03e4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_e03e4;
  /* e03d4: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* e03d8: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* e03dc: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* e03e0: b #0xe03f0 */
  goto L_e03f0;
L_e03e4:;
  /* e03e4: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e03e8: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* e03ec: str x9, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 9));
L_e03f0:;
  /* e03f0: strb w1, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 1));
  /* e03f4: strb wzr, [x8, #1] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(1)), ARC_W_R(c, 31));
  /* e03f8: ret  */
  return;
}

void fn1_e2dc4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038857156));
  /* e2dc4: bti c */
  /* bti: no architectural effect here */
  /* e2dc8: ldrb w9, [x1] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 1)));
  /* e2dcc: ldr x8, [x1, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* e2dd0: lsr x10, x9, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* e2dd4: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e2dd8: csel x8, x10, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* e2ddc: subs x8, x8, x2 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 2)));
  /* e2de0: b.lo #0xe2e08 */
  if (ARC_COND(c, 3)) goto L_e2e08;
  /* e2de4: cmp x8, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 3));
  /* e2de8: ldr x10, [x1, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* e2dec: add x11, x1, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 1) + UINT64_C(4)));
  /* e2df0: csel x8, x8, x3, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 3)));
  /* e2df4: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e2df8: csel x9, x11, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* e2dfc: add x1, x9, x2, lsl #2 */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 2)) << 2)));
  /* e2e00: mov x2, x8 */
  ARC_X_W(c, 2, ARC_X_R(c, 8));
  /* e2e04: b #0xe2ab4 */
  fn1_e2ab4(c); return;
L_e2e08:;
  /* e2e08: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e2e0c: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e2e10: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e2e14: bl #0xe1f80 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(929304));
  fn1_e1f80(c);
}

void fn1_e7244(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038874692));
  /* e7244: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e7248: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* e724c: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e7250: str x23, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 23));
  /* e7254: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e7258: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e725c: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* e7260: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* e7264: str q0, [sp] */
  arc_st64((c)->sp, (c)->q[0].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[0].u64[1]);
  /* e7268: stp xzr, xzr, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* e726c: str xzr, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 31));
  /* e7270: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e7274: mov w1, #0x16 */
  ARC_W_W(c, 1, UINT64_C(22));
  /* e7278: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* e727c: add x20, sp, #0x18 */
  ARC_X_W(c, 20, ((c)->sp + UINT64_C(24)));
  /* e7280: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(946820));
  fn1_142d10(c);
  /* e7284: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* e7288: ldr x9, [sp, #0x20] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(32))));
  /* e728c: orr x21, x20, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 20) | UINT64_C(1)));
  /* e7290: adrp x20, #0x50000 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(327680)));
  /* e7294: add x20, x20, #0xcab */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(3243)));
  /* e7298: mov w22, #1 */
  ARC_W_W(c, 22, UINT64_C(1));
  /* e729c: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e72a0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e72a4: csel x23, x10, x9, eq */
  ARC_X_W(c, 23, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e72a8: b #0xe72bc */
  goto L_e72bc;
L_e72ac:;
  /* e72ac: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e72b0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* e72b4: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(946872));
  fn1_142d10(c);
L_e72b8:;
  /* e72b8: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
L_e72bc:;
  /* e72bc: ldr x9, [sp, #0x28] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(40))));
  /* e72c0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e72c4: ldr q0, [sp] */
  arc_q_w(c, 0, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* e72c8: add x1, x23, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* e72cc: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* e72d0: csel x0, x21, x9, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 21)) : ARC_X_R(c, 9)));
  /* e72d4: bl #0x1428c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(946904));
  fn1_1428c0(c);
  /* e72d8: tbnz w0, #0x1f, #0xe72f0 */
  if (((ARC_W_R(c, 0)) >> 31 & 1) != 0) goto L_e72f0;
  /* e72dc: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* e72e0: cmp x23, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* e72e4: b.hs #0xe7334 */
  if (ARC_COND(c, 2)) goto L_e7334;
  /* e72e8: mov x23, x8 */
  ARC_X_W(c, 23, ARC_X_R(c, 8));
  /* e72ec: b #0xe72f4 */
  goto L_e72f4;
L_e72f0:;
  /* e72f0: orr x23, x22, x23, lsl #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 22) | ((uint64_t)(ARC_X_R(c, 23)) << 1)));
L_e72f4:;
  /* e72f4: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* e72f8: ldr x9, [sp, #0x20] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(32))));
  /* e72fc: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e7300: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e7304: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e7308: subs x1, x23, x9 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 9)));
  /* e730c: b.hi #0xe72ac */
  if (ARC_COND(c, 8)) goto L_e72ac;
  /* e7310: tbnz w8, #0, #0xe7324 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_e7324;
  /* e7314: lsl w8, w23, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 23)) << ((UINT64_C(1)) & 31)));
  /* e7318: strb w8, [sp, #0x18] */
  arc_st8(((c)->sp + INT64_C(24)), ARC_W_R(c, 8));
  /* e731c: mov x8, x21 */
  ARC_X_W(c, 8, ARC_X_R(c, 21));
  /* e7320: b #0xe732c */
  goto L_e732c;
L_e7324:;
  /* e7324: ldr x8, [sp, #0x28] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(40))));
  /* e7328: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
L_e732c:;
  /* e732c: strb wzr, [x8, x23] */
  arc_st8((ARC_X_R(c, 8) + ARC_X_R(c, 23)), ARC_W_R(c, 31));
  /* e7330: b #0xe72b8 */
  goto L_e72b8;
L_e7334:;
  /* e7334: ldrb w9, [sp, #0x18] */
  ARC_W_W(c, 9, arc_ld8(((c)->sp + INT64_C(24))));
  /* e7338: ldr x10, [sp, #0x20] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(32))));
  /* e733c: lsr x11, x9, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* e7340: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e7344: csel x10, x11, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* e7348: subs x1, x8, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10)));
  /* e734c: b.ls #0xe7360 */
  if (ARC_COND(c, 9)) goto L_e7360;
  /* e7350: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e7354: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* e7358: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(947036));
  fn1_142d10(c);
  /* e735c: b #0xe737c */
  goto L_e737c;
L_e7360:;
  /* e7360: tbnz w9, #0, #0xe7370 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_e7370;
  /* e7364: lsl w9, w0, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 0)) << ((UINT64_C(1)) & 31)));
  /* e7368: strb w9, [sp, #0x18] */
  arc_st8(((c)->sp + INT64_C(24)), ARC_W_R(c, 9));
  /* e736c: b #0xe7378 */
  goto L_e7378;
L_e7370:;
  /* e7370: ldr x21, [sp, #0x28] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(40))));
  /* e7374: str x8, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 8));
L_e7378:;
  /* e7378: strb wzr, [x21, x8] */
  arc_st8((ARC_X_R(c, 21) + ARC_X_R(c, 8)), ARC_W_R(c, 31));
L_e737c:;
  /* e737c: ldur q0, [sp, #0x18] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(24))), arc_ld64(((c)->sp + INT64_C(24)) + 8));
  /* e7380: ldr x8, [sp, #0x28] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(40))));
  /* e7384: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e7388: stp xzr, xzr, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* e738c: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* e7390: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* e7394: str xzr, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 31));
  /* e7398: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(947100));
  fn1_142e00(c);
  /* e739c: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e73a0: ldr x23, [sp, #0x40] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(64))));
  /* e73a4: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e73a8: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e73ac: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* e73b0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e73b4: ret  */
  return;
  /* e73b8: b #0xe73c0 */
  goto L_e73c0;
  /* e73bc: b #0xe73c0 */
  goto L_e73c0;
L_e73c0:;
  /* e73c0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e73c4: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e73c8: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(947148));
  fn1_142e00(c);
  /* e73cc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e73d0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(947156));
  fn1_9cc20(c);
}

void fn1_e9b50(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038885200));
  /* e9b50: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e9b54: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e9b58: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e9b5c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e9b60: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e9b64: add x0, x0, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* e9b68: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(957292));
  fn1_142518(c);
  /* e9b6c: cbnz w0, #0xe9bac */
  if ((ARC_W_R(c, 0)) != 0) goto L_e9bac;
  /* e9b70: ldr w8, [x19, #0x70] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(112))));
  /* e9b74: tbnz w8, #0, #0xe9bb8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_e9bb8;
  /* e9b78: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* e9b7c: cbnz x9, #0xe9bb8 */
  if ((ARC_X_R(c, 9)) != 0) goto L_e9bb8;
  /* e9b80: mov w9, #5 */
  ARC_W_W(c, 9, UINT64_C(5));
  /* e9b84: orr w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 9)));
  /* e9b88: str w8, [x19, #0x70] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(112)), ARC_W_R(c, 8));
  /* e9b8c: add x0, x19, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(64)));
  /* e9b90: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(957332));
  fn1_142578(c);
  /* e9b94: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* e9b98: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(957340));
  fn1_142560(c);
  /* e9b9c: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e9ba0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e9ba4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e9ba8: ret  */
  return;
L_e9bac:;
  /* e9bac: nop  */
  /* nop: no architectural effect here */
  /* e9bb0: adr x1, #0x50f67 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331623)));
  /* e9bb4: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(957368));
  fn1_142a40(c);
L_e9bb8:;
  /* e9bb8: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
  /* e9bbc: bl #0xe9be0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(957376));
  fn1_e9be0(c);
  /* e9bc0: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(957380));
  fn1_a1454(c);
  /* e9bc4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(957384));
  fn1_a1454(c);
  /* e9bc8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e9bcc: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* e9bd0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(957396));
  fn1_142560(c);
  /* e9bd4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e9bd8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(957404));
  fn1_9cc20(c);
  /* e9bdc: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(957408));
  fn1_a1454(c);
}

void fn1_eb8a4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038892708));
  /* eb8a4: bti c */
  /* bti: no architectural effect here */
  /* eb8a8: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* eb8ac: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* eb8b0: b.lt #0xeb920 */
  if (ARC_COND(c, 11)) goto L_eb920;
  /* eb8b4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eb8b8: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* eb8bc: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eb8c0: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* eb8c4: mov x10, #0x5a53 */
  ARC_X_W(c, 10, UINT64_C(23123));
  /* eb8c8: lsr x9, x8, #9 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(9)) & 63)));
  /* eb8cc: movk x10, #0xa09b, lsl #16 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(2694512640)));
  /* eb8d0: movk x10, #0xb82f, lsl #32 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446462603027808255)) | UINT64_C(202512002973696)));
  /* eb8d4: movk x10, #0x44, lsl #48 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(281474976710655)) | UINT64_C(19140298416324608)));
  /* eb8d8: umulh x9, x9, x10 */
  ARC_X_W(c, 9, arc_umulh(ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* eb8dc: mov x10, #-0xca00 */
  ARC_X_W(c, 10, UINT64_C(18446744073709499904));
  /* eb8e0: movk x10, #0xc465, lsl #16 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(3294953472)));
  /* eb8e4: lsr x9, x9, #0xb */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(11)) & 63)));
  /* eb8e8: madd x8, x9, x10, x8 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) + ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 10)))));
  /* eb8ec: stp x9, x8, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
L_eb8f0:;
  /* eb8f0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* eb8f4: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* eb8f8: bl #0x143340 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964860));
  fn1_143340(c);
  /* eb8fc: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* eb900: b.ne #0xeb914 */
  if (ARC_COND(c, 1)) goto L_eb914;
  /* eb904: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964872));
  fn1_142a58(c);
  /* eb908: ldr w8, [x0] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 0)));
  /* eb90c: cmp w8, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(4));
  /* eb910: b.eq #0xeb8f0 */
  if (ARC_COND(c, 0)) goto L_eb8f0;
L_eb914:;
  /* eb914: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eb918: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* eb91c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
L_eb920:;
  /* eb920: ret  */
  return;
}

void fn1_ed748(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038900552));
  /* ed748: bti c */
  /* bti: no architectural effect here */
  /* ed74c: ldr x8, [x0, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* ed750: add x8, x8, w1, sxtw */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)(int64_t)(int32_t)(ARC_W_R(c, 1)))));
  /* ed754: str x8, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 8));
  /* ed758: ret  */
  return;
}

void fn1_f1050(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038915152));
  /* f1050: bti c */
  /* bti: no architectural effect here */
  /* f1054: add x0, x0, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(8)));
  /* f1058: b #0x1433b8 */
  fn1_1433b8(c); return;
}

void fn1_f4178(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038927736));
  /* f4178: bti c */
  /* bti: no architectural effect here */
  /* f417c: ldr x8, [x0, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* f4180: add x8, x8, w1, sxtw #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)(((uint64_t)(int64_t)(int32_t)(ARC_W_R(c, 1)))) << 2)));
  /* f4184: str x8, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 8));
  /* f4188: ret  */
  return;
}

void fn1_f7a88(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038942344));
  /* f7a88: bti c */
  /* bti: no architectural effect here */
  /* f7a8c: add x0, x0, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(8)));
  /* f7a90: b #0x1433b8 */
  fn1_1433b8(c); return;
}

void fn1_fcc0c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038963212));
  /* fcc0c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fcc10: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fcc14: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fcc18: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fcc1c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fcc20: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fcc24: ldr x8, [x8, #0xae0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2784))));
  /* fcc28: ldrb w9, [x0, #0x40] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(64))));
  /* fcc2c: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* fcc30: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* fcc34: tbz w9, #0, #0xfcc48 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_fcc48;
  /* fcc38: ldr x8, [x19, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* fcc3c: ldr x0, [x19, #0x50] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(80))));
  /* fcc40: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* fcc44: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1035336));
  fn1_142608(c);
L_fcc48:;
  /* fcc48: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fcc4c: nop  */
  /* nop: no architectural effect here */
  /* fcc50: adr x9, #0x15dc40 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1432640)));
  /* fcc54: ldr x8, [x8, #0xaa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2728))));
  /* fcc58: ldr x20, [x19, #8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* fcc5c: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* fcc60: cmp x20, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 9));
  /* fcc64: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* fcc68: b.eq #0xfcc7c */
  if (ARC_COND(c, 0)) goto L_fcc7c;
  /* fcc6c: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* fcc70: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fcc74: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1035384));
  fn1_bd950(c);
  /* fcc78: cbz x0, #0xfcc8c */
  if ((ARC_X_R(c, 0)) == 0) goto L_fcc8c;
L_fcc7c:;
  /* fcc7c: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fcc80: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fcc84: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fcc88: ret  */
  return;
L_fcc8c:;
  /* fcc8c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* fcc90: ldr x16, [x8, #0x10] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fcc94: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fcc98: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fcc9c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fcca0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fcca4: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_ff6b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038974128));
  /* ff6b0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ff6b4: sub sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(144)));
  /* ff6b8: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ff6bc: stp x26, x25, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* ff6c0: stp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* ff6c4: stp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ff6c8: stp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ff6cc: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* ff6d0: ldrb w8, [x3, #8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 3) + INT64_C(8))));
  /* ff6d4: mov x19, x5 */
  ARC_X_W(c, 19, ARC_X_R(c, 5));
  /* ff6d8: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* ff6dc: stur x1, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 1));
  /* ff6e0: tbnz w8, #0, #0xff718 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_ff718;
  /* ff6e4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* ff6e8: mov x9, #-1 */
  ARC_X_W(c, 9, UINT64_C(18446744073709551615));
  /* ff6ec: mov x5, sp */
  ARC_X_W(c, 5, (c)->sp);
  /* ff6f0: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* ff6f4: str x9, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 9));
  /* ff6f8: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* ff6fc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1046272));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ff700: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* ff704: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* ff708: b.eq #0xff79c */
  if (ARC_COND(c, 0)) goto L_ff79c;
  /* ff70c: cbnz x8, #0xff7a4 */
  if ((ARC_X_R(c, 8)) != 0) goto L_ff7a4;
  /* ff710: strb wzr, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* ff714: b #0xff9ec */
  goto L_ff9ec;
L_ff718:;
  /* ff718: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* ff71c: add x1, x3, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 3) + UINT64_C(48)));
  /* ff720: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* ff724: mov x24, x3 */
  ARC_X_W(c, 24, ARC_X_R(c, 3));
  /* ff728: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1046316));
  fn1_143460(c);
  /* ff72c: adrp x26, #0x151000 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1380352)));
  /* ff730: ldr x26, [x26, #0xb40] */
  ARC_X_W(c, 26, arc_ld64((ARC_X_R(c, 26) + INT64_C(2880))));
  /* ff734: ldur x25, [x29, #-0x10] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* ff738: ldar x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* ff73c: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* ff740: b.eq #0xff818 */
  if (ARC_COND(c, 0)) goto L_ff818;
  /* ff744: nop  */
  /* nop: no architectural effect here */
  /* ff748: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* ff74c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1046352));
  fn1_142518(c);
  /* ff750: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* ff754: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* ff758: b.ne #0xff784 */
  if (ARC_COND(c, 1)) goto L_ff784;
  /* ff75c: nop  */
  /* nop: no architectural effect here */
  /* ff760: adr x22, #0x15791c */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407260)));
  /* ff764: nop  */
  /* nop: no architectural effect here */
  /* ff768: adr x23, #0x1578f4 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407220)));
L_ff76c:;
  /* ff76c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* ff770: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* ff774: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1046392));
  fn1_142530(c);
  /* ff778: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* ff77c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* ff780: b.eq #0xff76c */
  if (ARC_COND(c, 0)) goto L_ff76c;
L_ff784:;
  /* ff784: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* ff788: cbz x8, #0xff7b8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_ff7b8;
  /* ff78c: nop  */
  /* nop: no architectural effect here */
  /* ff790: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* ff794: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1046424));
  fn1_142560(c);
  /* ff798: b #0xff818 */
  goto L_ff818;
L_ff79c:;
  /* ff79c: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* ff7a0: b #0xff9ec */
  goto L_ff9ec;
L_ff7a4:;
  /* ff7a4: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* ff7a8: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* ff7ac: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* ff7b0: str w9, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 9));
  /* ff7b4: b #0xff9ec */
  goto L_ff9ec;
L_ff7b8:;
  /* ff7b8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* ff7bc: str x26, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 26));
  /* ff7c0: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* ff7c4: str x8, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 8));
  /* ff7c8: nop  */
  /* nop: no architectural effect here */
  /* ff7cc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* ff7d0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1046484));
  fn1_142560(c);
  /* ff7d4: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* ff7d8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ff7dc: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* ff7e0: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1046500));
  fn1_a2030(c);
  /* ff7e4: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* ff7e8: str w8, [x26, #8] */
  arc_st32((ARC_X_R(c, 26) + INT64_C(8)), ARC_W_R(c, 8));
  /* ff7ec: nop  */
  /* nop: no architectural effect here */
  /* ff7f0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* ff7f4: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1046520));
  fn1_142518(c);
  /* ff7f8: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* ff7fc: stlr x8, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 8));
  /* ff800: nop  */
  /* nop: no architectural effect here */
  /* ff804: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* ff808: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1046540));
  fn1_142560(c);
  /* ff80c: nop  */
  /* nop: no architectural effect here */
  /* ff810: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* ff814: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1046552));
  fn1_142578(c);
L_ff818:;
  /* ff818: ldp x8, x10, [x25, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* ff81c: ldrsw x9, [x26, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 26) + INT64_C(8)))));
  /* ff820: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* ff824: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* ff828: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* ff82c: b.hs #0xffa0c */
  if (ARC_COND(c, 2)) goto L_ffa0c;
  /* ff830: ldr x22, [x8, x9, lsl #3] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* ff834: cbz x22, #0xffa0c */
  if ((ARC_X_R(c, 22)) == 0) goto L_ffa0c;
  /* ff838: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* ff83c: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1046592));
  fn1_143478(c);
  /* ff840: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* ff844: add x1, x24, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(48)));
  /* ff848: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1046604));
  fn1_143460(c);
  /* ff84c: adrp x26, #0x151000 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1380352)));
  /* ff850: ldr x26, [x26, #0xcb0] */
  ARC_X_W(c, 26, arc_ld64((ARC_X_R(c, 26) + INT64_C(3248))));
  /* ff854: ldur x25, [x29, #-0x10] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* ff858: ldar x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* ff85c: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* ff860: b.eq #0xff91c */
  if (ARC_COND(c, 0)) goto L_ff91c;
  /* ff864: nop  */
  /* nop: no architectural effect here */
  /* ff868: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* ff86c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1046640));
  fn1_142518(c);
  /* ff870: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* ff874: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* ff878: b.ne #0xff8a4 */
  if (ARC_COND(c, 1)) goto L_ff8a4;
  /* ff87c: nop  */
  /* nop: no architectural effect here */
  /* ff880: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* ff884: nop  */
  /* nop: no architectural effect here */
  /* ff888: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_ff88c:;
  /* ff88c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* ff890: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* ff894: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1046680));
  fn1_142530(c);
  /* ff898: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* ff89c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* ff8a0: b.eq #0xff88c */
  if (ARC_COND(c, 0)) goto L_ff88c;
L_ff8a4:;
  /* ff8a4: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* ff8a8: cbz x8, #0xff8bc */
  if ((ARC_X_R(c, 8)) == 0) goto L_ff8bc;
  /* ff8ac: nop  */
  /* nop: no architectural effect here */
  /* ff8b0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* ff8b4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1046712));
  fn1_142560(c);
  /* ff8b8: b #0xff91c */
  goto L_ff91c;
L_ff8bc:;
  /* ff8bc: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* ff8c0: str x26, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 26));
  /* ff8c4: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* ff8c8: str x8, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 8));
  /* ff8cc: nop  */
  /* nop: no architectural effect here */
  /* ff8d0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* ff8d4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1046744));
  fn1_142560(c);
  /* ff8d8: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* ff8dc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ff8e0: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* ff8e4: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1046760));
  fn1_a2030(c);
  /* ff8e8: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* ff8ec: str w8, [x26, #8] */
  arc_st32((ARC_X_R(c, 26) + INT64_C(8)), ARC_W_R(c, 8));
  /* ff8f0: nop  */
  /* nop: no architectural effect here */
  /* ff8f4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* ff8f8: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1046780));
  fn1_142518(c);
  /* ff8fc: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* ff900: stlr x8, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 8));
  /* ff904: nop  */
  /* nop: no architectural effect here */
  /* ff908: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* ff90c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1046800));
  fn1_142560(c);
  /* ff910: nop  */
  /* nop: no architectural effect here */
  /* ff914: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* ff918: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1046812));
  fn1_142578(c);
L_ff91c:;
  /* ff91c: ldp x8, x10, [x25, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* ff920: ldrsw x9, [x26, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 26) + INT64_C(8)))));
  /* ff924: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* ff928: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* ff92c: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* ff930: b.hs #0xffa10 */
  if (ARC_COND(c, 2)) goto L_ffa10;
  /* ff934: ldr x23, [x8, x9, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* ff938: cbz x23, #0xffa10 */
  if ((ARC_X_R(c, 23)) == 0) goto L_ffa10;
  /* ff93c: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* ff940: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1046852));
  fn1_143478(c);
  /* ff944: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* ff948: ldr x9, [x8, #0x30] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* ff94c: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* ff950: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* ff954: mov x24, sp */
  ARC_X_W(c, 24, (c)->sp);
  /* ff958: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1046876));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* ff95c: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* ff960: ldr x9, [x8, #0x38] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* ff964: add x8, x24, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + UINT64_C(24)));
  /* ff968: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* ff96c: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1046896));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* ff970: mov x23, sp */
  ARC_X_W(c, 23, (c)->sp);
  /* ff974: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* ff978: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* ff97c: add x3, x23, #0x30 */
  ARC_X_W(c, 3, (ARC_X_R(c, 23) + UINT64_C(48)));
  /* ff980: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* ff984: mov x4, x22 */
  ARC_X_W(c, 4, ARC_X_R(c, 22));
  /* ff988: mov x5, x20 */
  ARC_X_W(c, 5, ARC_X_R(c, 20));
  /* ff98c: mov w6, #1 */
  ARC_W_W(c, 6, UINT64_C(1));
  /* ff990: bl #0xffa98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1046932));
  fn1_ffa98(c);
  /* ff994: cmp x0, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 23));
  /* ff998: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* ff99c: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* ff9a0: cset w9, eq */
  ARC_W_W(c, 9, (ARC_COND(c, 0) ? 1 : 0));
  /* ff9a4: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* ff9a8: tbz w8, #0, #0xff9c8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_ff9c8;
  /* ff9ac: ldr x8, [sp, #0x28] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(40))));
  /* ff9b0: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
  /* ff9b4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ff9b8: and x1, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* ff9bc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* ff9c0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1046980));
  fn1_142608(c);
  /* ff9c4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
L_ff9c8:;
  /* ff9c8: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* ff9cc: tbz w8, #0, #0xff9ec */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_ff9ec;
  /* ff9d0: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* ff9d4: ldr x9, [sp] */
  ARC_X_W(c, 9, arc_ld64((c)->sp));
  /* ff9d8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ff9dc: and x1, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* ff9e0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* ff9e4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1047016));
  fn1_142608(c);
  /* ff9e8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
L_ff9ec:;
  /* ff9ec: ldp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ff9f0: ldp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ff9f4: ldp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* ff9f8: ldp x26, x25, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* ff9fc: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ffa00: add sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(144)));
  /* ffa04: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ffa08: ret  */
  return;
L_ffa0c:;
  /* ffa0c: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1047056));
  fn1_fc3b8(c);
L_ffa10:;
  /* ffa10: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1047060));
  fn1_fc3b8(c);
  /* ffa14: b #0xffa18 */
  goto L_ffa18;
L_ffa18:;
  /* ffa18: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ffa1c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* ffa20: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1047076));
  fn1_d2a78(c);
  /* ffa24: b #0xffa88 */
  goto L_ffa88;
  /* ffa28: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* ffa2c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ffa30: tbz w8, #0, #0xffa44 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_ffa44;
  /* ffa34: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* ffa38: ldr x0, [sp, #0x28] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(40))));
  /* ffa3c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* ffa40: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1047108));
  fn1_142608(c);
L_ffa44:;
  /* ffa44: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* ffa48: tbnz w8, #0, #0xffa5c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_ffa5c;
  /* ffa4c: b #0xffa6c */
  goto L_ffa6c;
  /* ffa50: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* ffa54: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ffa58: tbz w8, #0, #0xffa6c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_ffa6c;
L_ffa5c:;
  /* ffa5c: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* ffa60: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* ffa64: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* ffa68: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1047148));
  fn1_142608(c);
L_ffa6c:;
  /* ffa6c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ffa70: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1047156));
  fn1_9cc20(c);
  /* ffa74: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1047160));
  fn1_9cc20(c);
  /* ffa78: b #0xffa84 */
  goto L_ffa84;
  /* ffa7c: b #0xffa84 */
  goto L_ffa84;
  /* ffa80: b #0xffa84 */
  goto L_ffa84;
L_ffa84:;
  /* ffa84: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_ffa88:;
  /* ffa88: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* ffa8c: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1047184));
  fn1_143478(c);
  /* ffa90: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ffa94: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1047192));
  fn1_9cc20(c);
}

void fn1_10fc08(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039041032));
  /* 10fc08: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 10fc0c: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 10fc10: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 10fc14: str x25, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 25));
  /* 10fc18: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 10fc1c: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 10fc20: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 10fc24: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 10fc28: str x1, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 1));
  /* 10fc2c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 10fc30: add x1, x3, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 3) + UINT64_C(48)));
  /* 10fc34: mov x19, x5 */
  ARC_X_W(c, 19, ARC_X_R(c, 5));
  /* 10fc38: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 10fc3c: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 10fc40: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1113156));
  fn1_143460(c);
  /* 10fc44: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 10fc48: ldr x25, [x25, #0xb40] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(2880))));
  /* 10fc4c: ldr x24, [sp, #8] */
  ARC_X_W(c, 24, arc_ld64(((c)->sp + INT64_C(8))));
  /* 10fc50: ldar x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 10fc54: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 10fc58: b.eq #0x10fd14 */
  if (ARC_COND(c, 0)) goto L_10fd14;
  /* 10fc5c: nop  */
  /* nop: no architectural effect here */
  /* 10fc60: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10fc64: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1113192));
  fn1_142518(c);
  /* 10fc68: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 10fc6c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 10fc70: b.ne #0x10fc9c */
  if (ARC_COND(c, 1)) goto L_10fc9c;
  /* 10fc74: nop  */
  /* nop: no architectural effect here */
  /* 10fc78: adr x22, #0x15791c */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 10fc7c: nop  */
  /* nop: no architectural effect here */
  /* 10fc80: adr x23, #0x1578f4 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407220)));
L_10fc84:;
  /* 10fc84: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 10fc88: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 10fc8c: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1113232));
  fn1_142530(c);
  /* 10fc90: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 10fc94: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 10fc98: b.eq #0x10fc84 */
  if (ARC_COND(c, 0)) goto L_10fc84;
L_10fc9c:;
  /* 10fc9c: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 10fca0: cbz x8, #0x10fcb4 */
  if ((ARC_X_R(c, 8)) == 0) goto L_10fcb4;
  /* 10fca4: nop  */
  /* nop: no architectural effect here */
  /* 10fca8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10fcac: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1113264));
  fn1_142560(c);
  /* 10fcb0: b #0x10fd14 */
  goto L_10fd14;
L_10fcb4:;
  /* 10fcb4: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 10fcb8: str x25, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 25));
  /* 10fcbc: strb wzr, [sp, #0x18] */
  arc_st8(((c)->sp + INT64_C(24)), ARC_W_R(c, 31));
  /* 10fcc0: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 10fcc4: nop  */
  /* nop: no architectural effect here */
  /* 10fcc8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10fccc: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1113296));
  fn1_142560(c);
  /* 10fcd0: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 10fcd4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 10fcd8: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 10fcdc: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1113312));
  fn1_a2030(c);
  /* 10fce0: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 10fce4: str w8, [x25, #8] */
  arc_st32((ARC_X_R(c, 25) + INT64_C(8)), ARC_W_R(c, 8));
  /* 10fce8: nop  */
  /* nop: no architectural effect here */
  /* 10fcec: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10fcf0: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1113332));
  fn1_142518(c);
  /* 10fcf4: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 10fcf8: stlr x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 10fcfc: nop  */
  /* nop: no architectural effect here */
  /* 10fd00: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10fd04: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1113352));
  fn1_142560(c);
  /* 10fd08: nop  */
  /* nop: no architectural effect here */
  /* 10fd0c: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 10fd10: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1113364));
  fn1_142578(c);
L_10fd14:;
  /* 10fd14: ldp x8, x10, [x24, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 24) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 10fd18: ldrsw x9, [x25, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 25) + INT64_C(8)))));
  /* 10fd1c: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 10fd20: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 10fd24: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 10fd28: b.hs #0x10fda0 */
  if (ARC_COND(c, 2)) goto L_10fda0;
  /* 10fd2c: ldr x22, [x8, x9, lsl #3] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 10fd30: cbz x22, #0x10fda0 */
  if ((ARC_X_R(c, 22)) == 0) goto L_10fda0;
  /* 10fd34: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 10fd38: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1113404));
  fn1_143478(c);
  /* 10fd3c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 10fd40: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 10fd44: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 10fd48: mov x3, x22 */
  ARC_X_W(c, 3, ARC_X_R(c, 22));
  /* 10fd4c: mov w4, #4 */
  ARC_W_W(c, 4, UINT64_C(4));
  /* 10fd50: bl #0x110db0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1113428));
  fn1_110db0(c);
  /* 10fd54: ldrb w8, [x20] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 20)));
  /* 10fd58: tbnz w8, #2, #0x10fd7c */
  if (((ARC_W_R(c, 8)) >> 2 & 1) != 0) goto L_10fd7c;
  /* 10fd5c: add w8, w0, #0x76c */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1900)));
  /* 10fd60: cmp w0, #0x64 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(100));
  /* 10fd64: add w9, w0, #0x7d0 */
  ARC_W_W(c, 9, (ARC_W_R(c, 0) + UINT64_C(2000)));
  /* 10fd68: csel w8, w8, w0, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 0)));
  /* 10fd6c: cmp w0, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(69));
  /* 10fd70: csel w8, w9, w8, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* 10fd74: sub w8, w8, #0x76c */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1900)));
  /* 10fd78: str w8, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 8));
L_10fd7c:;
  /* 10fd7c: ldr x0, [x29, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 10fd80: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 10fd84: ldr x25, [sp, #0x30] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(48))));
  /* 10fd88: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 10fd8c: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 10fd90: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 10fd94: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 10fd98: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 10fd9c: ret  */
  return;
L_10fda0:;
  /* 10fda0: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1113508));
  fn1_fc3b8(c);
  /* 10fda4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10fda8: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 10fdac: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1113520));
  fn1_d2a78(c);
  /* 10fdb0: b #0x10fdbc */
  goto L_10fdbc;
  /* 10fdb4: b #0x10fdb8 */
  goto L_10fdb8;
L_10fdb8:;
  /* 10fdb8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_10fdbc:;
  /* 10fdbc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 10fdc0: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1113540));
  fn1_143478(c);
  /* 10fdc4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10fdc8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1113548));
  fn1_9cc20(c);
}

void fn1_113cb8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057592));
  /* 113cb8: bti c */
  /* bti: no architectural effect here */
  /* 113cbc: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* 113cc0: ret  */
  return;
}

void fn1_118798(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039076760));
  /* 118798: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 11879c: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1187a0: stp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 1187a4: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 1187a8: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1187ac: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1187b0: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1187b4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1187b8: sub sp, sp, #0x210 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(528)));
  /* 1187bc: mov w25, w2 */
  ARC_W_W(c, 25, ARC_W_R(c, 2));
  /* 1187c0: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* 1187c4: sub x8, x29, #0x6c */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(108)));
  /* 1187c8: adrp x2, #0x50000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(327680)));
  /* 1187cc: add x2, x2, #0xf79 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(3961)));
  /* 1187d0: sub x0, x29, #0x6c */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(108)));
  /* 1187d4: mov w1, #0x64 */
  ARC_W_W(c, 1, UINT64_C(100));
  /* 1187d8: mov w21, w4 */
  ARC_W_W(c, 21, ARC_W_R(c, 4));
  /* 1187dc: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* 1187e0: stur x8, [x29, #-0x78] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-120)), ARC_X_R(c, 8));
  /* 1187e4: str q0, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(64)) + 8, (c)->q[0].u64[1]);
  /* 1187e8: bl #0x1428c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1148908));
  fn1_1428c0(c);
  /* 1187ec: cmp w0, #0x64 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(100));
  /* 1187f0: str x23, [sp, #0x38] */
  arc_st64(((c)->sp + INT64_C(56)), ARC_X_R(c, 23));
  /* 1187f4: b.lo #0x118858 */
  if (ARC_COND(c, 3)) goto L_118858;
  /* 1187f8: nop  */
  /* nop: no architectural effect here */
  /* 1187fc: adr x8, #0x15dc38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 118800: adrp x19, #0x15d000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 118804: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 118808: tbz w8, #0, #0x118bc0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_118bc0;
L_11880c:;
  /* 11880c: ldr x1, [x19, #0xc30] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(3120))));
  /* 118810: ldr q0, [sp, #0x40] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(64))), arc_ld64(((c)->sp + INT64_C(64)) + 8));
  /* 118814: adrp x2, #0x50000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(327680)));
  /* 118818: add x2, x2, #0xf79 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(3961)));
  /* 11881c: sub x0, x29, #0x78 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(120)));
  /* 118820: mov x19, xzr */
  ARC_X_W(c, 19, ARC_X_R(c, 31));
  /* 118824: bl #0x136920 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1148968));
  fn1_136920(c);
  /* 118828: mov w26, w0 */
  ARC_W_W(c, 26, ARC_W_R(c, 0));
  /* 11882c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 118830: b.eq #0x118bf8 */
  if (ARC_COND(c, 0)) goto L_118bf8;
  /* 118834: sxtw x0, w26 */
  ARC_X_W(c, 0, ((int64_t)(int32_t)(ARC_W_R(c, 26))));
  /* 118838: ldur x19, [x29, #-0x78] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 29) + INT64_C(-120))));
  /* 11883c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1148992));
  fn1_1428a8(c);
  /* 118840: cbz x0, #0x118c00 */
  if ((ARC_X_R(c, 0)) == 0) goto L_118c00;
  /* 118844: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 118848: str x19, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 19));
  /* 11884c: mov w19, w21 */
  ARC_W_W(c, 19, ARC_W_R(c, 21));
  /* 118850: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 118854: b #0x11886c */
  goto L_11886c;
L_118858:;
  /* 118858: mov w26, w0 */
  ARC_W_W(c, 26, ARC_W_R(c, 0));
  /* 11885c: mov w19, w21 */
  ARC_W_W(c, 19, ARC_W_R(c, 21));
  /* 118860: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 118864: sub x24, x29, #0xdc */
  ARC_X_W(c, 24, (ARC_X_R(c, 29) - UINT64_C(220)));
  /* 118868: str xzr, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 31));
L_11886c:;
  /* 11886c: sub x0, x29, #0xe8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(232)));
  /* 118870: add x1, x22, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(48)));
  /* 118874: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1149048));
  fn1_143460(c);
  /* 118878: adrp x23, #0x151000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11887c: ldr x23, [x23, #0xb40] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 23) + INT64_C(2880))));
  /* 118880: ldur x21, [x29, #-0xe8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 29) + INT64_C(-232))));
  /* 118884: ldar x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 118888: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11888c: b.eq #0x118948 */
  if (ARC_COND(c, 0)) goto L_118948;
  /* 118890: nop  */
  /* nop: no architectural effect here */
  /* 118894: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 118898: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1149084));
  fn1_142518(c);
  /* 11889c: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 1188a0: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1188a4: b.ne #0x1188d0 */
  if (ARC_COND(c, 1)) goto L_1188d0;
  /* 1188a8: nop  */
  /* nop: no architectural effect here */
  /* 1188ac: adr x27, #0x15791c */
  ARC_X_W(c, 27, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 1188b0: nop  */
  /* nop: no architectural effect here */
  /* 1188b4: adr x28, #0x1578f4 */
  ARC_X_W(c, 28, (arc_image_bases[1] + UINT64_C(1407220)));
L_1188b8:;
  /* 1188b8: mov x0, x27 */
  ARC_X_W(c, 0, ARC_X_R(c, 27));
  /* 1188bc: mov x1, x28 */
  ARC_X_W(c, 1, ARC_X_R(c, 28));
  /* 1188c0: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1149124));
  fn1_142530(c);
  /* 1188c4: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 1188c8: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1188cc: b.eq #0x1188b8 */
  if (ARC_COND(c, 0)) goto L_1188b8;
L_1188d0:;
  /* 1188d0: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 1188d4: cbz x8, #0x1188e8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1188e8;
  /* 1188d8: nop  */
  /* nop: no architectural effect here */
  /* 1188dc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1188e0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1149156));
  fn1_142560(c);
  /* 1188e4: b #0x118948 */
  goto L_118948;
L_1188e8:;
  /* 1188e8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 1188ec: str x23, [sp, #0x68] */
  arc_st64(((c)->sp + INT64_C(104)), ARC_X_R(c, 23));
  /* 1188f0: strb wzr, [sp, #0x70] */
  arc_st8(((c)->sp + INT64_C(112)), ARC_W_R(c, 31));
  /* 1188f4: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 1188f8: nop  */
  /* nop: no architectural effect here */
  /* 1188fc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 118900: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1149188));
  fn1_142560(c);
  /* 118904: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 118908: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11890c: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 118910: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1149204));
  fn1_a2030(c);
  /* 118914: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 118918: str w8, [x23, #8] */
  arc_st32((ARC_X_R(c, 23) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11891c: nop  */
  /* nop: no architectural effect here */
  /* 118920: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 118924: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1149224));
  fn1_142518(c);
  /* 118928: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11892c: stlr x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 118930: nop  */
  /* nop: no architectural effect here */
  /* 118934: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 118938: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1149244));
  fn1_142560(c);
  /* 11893c: nop  */
  /* nop: no architectural effect here */
  /* 118940: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 118944: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1149256));
  fn1_142578(c);
L_118948:;
  /* 118948: ldp x8, x10, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 11894c: ldrsw x9, [x23, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 23) + INT64_C(8)))));
  /* 118950: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 118954: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 118958: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 11895c: b.hs #0x118bbc */
  if (ARC_COND(c, 2)) goto L_118bbc;
  /* 118960: ldr x27, [x8, x9, lsl #3] */
  ARC_X_W(c, 27, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 118964: cbz x27, #0x118bbc */
  if ((ARC_X_R(c, 27)) == 0) goto L_118bbc;
  /* 118968: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 11896c: ldur x1, [x29, #-0x78] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-120))));
  /* 118970: sxtw x21, w26 */
  ARC_X_W(c, 21, ((int64_t)(int32_t)(ARC_W_R(c, 26))));
  /* 118974: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 118978: add x2, x1, x21 */
  ARC_X_W(c, 2, (ARC_X_R(c, 1) + ARC_X_R(c, 21)));
  /* 11897c: mov x0, x27 */
  ARC_X_W(c, 0, ARC_X_R(c, 27));
  /* 118980: mov x3, x24 */
  ARC_X_W(c, 3, ARC_X_R(c, 24));
  /* 118984: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1149320));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 118988: cmp w26, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 26), UINT64_C(1));
  /* 11898c: b.lt #0x1189a4 */
  if (ARC_COND(c, 11)) goto L_1189a4;
  /* 118990: ldur x8, [x29, #-0x78] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-120))));
  /* 118994: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 118998: cmp w8, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(45));
  /* 11899c: cset w28, eq */
  ARC_W_W(c, 28, (ARC_COND(c, 0) ? 1 : 0));
  /* 1189a0: b #0x1189a8 */
  goto L_1189a8;
L_1189a4:;
  /* 1189a4: mov w28, wzr */
  ARC_W_W(c, 28, ARC_W_R(c, 31));
L_1189a8:;
  /* 1189a8: stp xzr, xzr, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1189ac: str xzr, [sp, #0x110] */
  arc_st64(((c)->sp + INT64_C(272)), ARC_X_R(c, 31));
  /* 1189b0: stp xzr, xzr, [sp, #0xe8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(232));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1189b4: str xzr, [sp, #0xf8] */
  arc_st64(((c)->sp + INT64_C(248)), ARC_X_R(c, 31));
  /* 1189b8: stp xzr, xzr, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1189bc: str xzr, [sp, #0xe0] */
  arc_st64(((c)->sp + INT64_C(224)), ARC_X_R(c, 31));
  /* 1189c0: add x8, sp, #0xcc */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(204)));
  /* 1189c4: add x9, sp, #0xd0 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(208)));
  /* 1189c8: and w0, w25, #1 */
  ARC_W_W(c, 0, (ARC_W_R(c, 25) & UINT64_C(1)));
  /* 1189cc: sub x2, x29, #0xe8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(232)));
  /* 1189d0: sub x3, x29, #0xec */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(236)));
  /* 1189d4: sub x4, x29, #0xf0 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(240)));
  /* 1189d8: sub x5, x29, #0xf4 */
  ARC_X_W(c, 5, (ARC_X_R(c, 29) - UINT64_C(244)));
  /* 1189dc: add x6, sp, #0x100 */
  ARC_X_W(c, 6, ((c)->sp + UINT64_C(256)));
  /* 1189e0: add x7, sp, #0xe8 */
  ARC_X_W(c, 7, ((c)->sp + UINT64_C(232)));
  /* 1189e4: mov w1, w28 */
  ARC_W_W(c, 1, ARC_W_R(c, 28));
  /* 1189e8: stp x9, x8, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 1189ec: bl #0x143a60 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1149424));
  fn1_143a60(c);
  /* 1189f0: ldrsw x23, [sp, #0xcc] */
  ARC_X_W(c, 23, ((int64_t)(int32_t)arc_ld32(((c)->sp + INT64_C(204)))));
  /* 1189f4: cmp w26, w23 */
  (void)arc_sub32(c, ARC_W_R(c, 26), ARC_W_R(c, 23));
  /* 1189f8: b.le #0x118a4c */
  if (ARC_COND(c, 13)) goto L_118a4c;
  /* 1189fc: ldrb w8, [sp, #0xd0] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(208))));
  /* 118a00: ldrb w9, [sp, #0xe8] */
  ARC_W_W(c, 9, arc_ld8(((c)->sp + INT64_C(232))));
  /* 118a04: ldr x10, [sp, #0xd8] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(216))));
  /* 118a08: lsr x11, x8, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 118a0c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 118a10: ldr x8, [sp, #0xf0] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(240))));
  /* 118a14: lsr x12, x9, #1 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 118a18: csel x10, x11, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 118a1c: sub x11, x21, x23 */
  ARC_X_W(c, 11, (ARC_X_R(c, 21) - ARC_X_R(c, 23)));
  /* 118a20: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 118a24: csel x8, x12, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 8)));
  /* 118a28: add x9, x23, x11, lsl #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) + ((uint64_t)(ARC_X_R(c, 11)) << 1)));
  /* 118a2c: add x8, x10, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + ARC_X_R(c, 8)));
  /* 118a30: add x8, x9, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ARC_X_R(c, 8)));
  /* 118a34: add x0, x8, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 118a38: cmp x0, #0x65 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(101));
  /* 118a3c: b.hs #0x118a88 */
  if (ARC_COND(c, 2)) goto L_118a88;
L_118a40:;
  /* 118a40: mov x25, xzr */
  ARC_X_W(c, 25, ARC_X_R(c, 31));
  /* 118a44: add x26, sp, #0x68 */
  ARC_X_W(c, 26, ((c)->sp + UINT64_C(104)));
  /* 118a48: b #0x118a98 */
  goto L_118a98;
L_118a4c:;
  /* 118a4c: ldrb w8, [sp, #0xd0] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(208))));
  /* 118a50: ldrb w9, [sp, #0xe8] */
  ARC_W_W(c, 9, arc_ld8(((c)->sp + INT64_C(232))));
  /* 118a54: ldr x10, [sp, #0xd8] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(216))));
  /* 118a58: lsr x11, x8, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 118a5c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 118a60: ldr x8, [sp, #0xf0] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(240))));
  /* 118a64: lsr x12, x9, #1 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 118a68: csel x10, x11, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 118a6c: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 118a70: csel x8, x12, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 8)));
  /* 118a74: add x9, x23, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) + ARC_X_R(c, 10)));
  /* 118a78: add x8, x9, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ARC_X_R(c, 8)));
  /* 118a7c: add x0, x8, #2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* 118a80: cmp x0, #0x65 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(101));
  /* 118a84: b.lo #0x118a40 */
  if (ARC_COND(c, 3)) goto L_118a40;
L_118a88:;
  /* 118a88: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1149580));
  fn1_1428a8(c);
  /* 118a8c: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* 118a90: mov x26, x0 */
  ARC_X_W(c, 26, ARC_X_R(c, 0));
  /* 118a94: cbz x0, #0x118c04 */
  if ((ARC_X_R(c, 0)) == 0) goto L_118c04;
L_118a98:;
  /* 118a98: ldr w3, [x22, #8] */
  ARC_W_W(c, 3, arc_ld32((ARC_X_R(c, 22) + INT64_C(8))));
  /* 118a9c: ldurb w8, [x29, #-0xf0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-240))));
  /* 118aa0: ldurb w9, [x29, #-0xf4] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 29) + INT64_C(-244))));
  /* 118aa4: add x10, sp, #0xd0 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(208)));
  /* 118aa8: add x11, sp, #0xe8 */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(232)));
  /* 118aac: add x1, sp, #0x60 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(96)));
  /* 118ab0: stp x11, x10, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 118ab4: add x10, sp, #0x100 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(256)));
  /* 118ab8: sub x11, x29, #0xec */
  ARC_X_W(c, 11, (ARC_X_R(c, 29) - UINT64_C(236)));
  /* 118abc: add x2, sp, #0x58 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(88)));
  /* 118ac0: add x5, x24, x21 */
  ARC_X_W(c, 5, (ARC_X_R(c, 24) + ARC_X_R(c, 21)));
  /* 118ac4: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 118ac8: mov x4, x24 */
  ARC_X_W(c, 4, ARC_X_R(c, 24));
  /* 118acc: mov x6, x27 */
  ARC_X_W(c, 6, ARC_X_R(c, 27));
  /* 118ad0: mov w7, w28 */
  ARC_W_W(c, 7, ARC_W_R(c, 28));
  /* 118ad4: str w23, [sp, #0x30] */
  arc_st32(((c)->sp + INT64_C(48)), ARC_W_R(c, 23));
  /* 118ad8: str x10, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 10));
  /* 118adc: strb w9, [sp, #0x10] */
  arc_st8(((c)->sp + INT64_C(16)), ARC_W_R(c, 9));
  /* 118ae0: strb w8, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 8));
  /* 118ae4: str x11, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 11));
  /* 118ae8: bl #0x143a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1149676));
  fn1_143a78(c);
  /* 118aec: ldp x3, x2, [sp, #0x58] */
  { const uint64_t _pa = ((c)->sp + INT64_C(88));
    ARC_X_W(c, 3, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 118af0: ldr x0, [sp, #0x38] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(56))));
  /* 118af4: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 118af8: mov x4, x22 */
  ARC_X_W(c, 4, ARC_X_R(c, 22));
  /* 118afc: mov w5, w19 */
  ARC_W_W(c, 5, ARC_W_R(c, 19));
  /* 118b00: bl #0x10b5d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1149700));
  fn1_10b5d8(c);
  /* 118b04: ldr x19, [sp, #0x40] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(64))));
  /* 118b08: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 118b0c: cbz x25, #0x118b18 */
  if ((ARC_X_R(c, 25)) == 0) goto L_118b18;
  /* 118b10: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 118b14: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1149720));
  fn1_142800(c);
L_118b18:;
  /* 118b18: ldrb w8, [sp, #0xd0] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(208))));
  /* 118b1c: tbnz w8, #0, #0x118b88 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_118b88;
  /* 118b20: ldrb w8, [sp, #0xe8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(232))));
  /* 118b24: tbnz w8, #0, #0x118ba0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_118ba0;
L_118b28:;
  /* 118b28: ldrb w8, [sp, #0x100] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(256))));
  /* 118b2c: tbz w8, #0, #0x118b40 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_118b40;
L_118b30:;
  /* 118b30: ldr x8, [sp, #0x100] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(256))));
  /* 118b34: ldr x0, [sp, #0x110] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(272))));
  /* 118b38: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 118b3c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1149760));
  fn1_142608(c);
L_118b40:;
  /* 118b40: sub x0, x29, #0xe8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(232)));
  /* 118b44: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1149768));
  fn1_143478(c);
  /* 118b48: cbz x20, #0x118b54 */
  if ((ARC_X_R(c, 20)) == 0) goto L_118b54;
  /* 118b4c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 118b50: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1149780));
  fn1_142800(c);
L_118b54:;
  /* 118b54: cbz x19, #0x118b60 */
  if ((ARC_X_R(c, 19)) == 0) goto L_118b60;
  /* 118b58: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 118b5c: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1149792));
  fn1_142800(c);
L_118b60:;
  /* 118b60: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 118b64: add sp, sp, #0x210 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(528)));
  /* 118b68: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 118b6c: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 118b70: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 118b74: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 118b78: ldp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 118b7c: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 118b80: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 118b84: ret  */
  return;
L_118b88:;
  /* 118b88: ldr x8, [sp, #0xd0] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(208))));
  /* 118b8c: ldr x0, [sp, #0xe0] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(224))));
  /* 118b90: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 118b94: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1149848));
  fn1_142608(c);
  /* 118b98: ldrb w8, [sp, #0xe8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(232))));
  /* 118b9c: tbz w8, #0, #0x118b28 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_118b28;
L_118ba0:;
  /* 118ba0: ldr x8, [sp, #0xe8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(232))));
  /* 118ba4: ldr x0, [sp, #0xf8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(248))));
  /* 118ba8: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 118bac: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1149872));
  fn1_142608(c);
  /* 118bb0: ldrb w8, [sp, #0x100] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(256))));
  /* 118bb4: tbnz w8, #0, #0x118b30 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_118b30;
  /* 118bb8: b #0x118b40 */
  goto L_118b40;
L_118bbc:;
  /* 118bbc: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1149888));
  fn1_fc3b8(c);
L_118bc0:;
  /* 118bc0: nop  */
  /* nop: no architectural effect here */
  /* 118bc4: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 118bc8: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1149900));
  fn1_1424b8(c);
  /* 118bcc: cbz w0, #0x11880c */
  if ((ARC_W_R(c, 0)) == 0) goto L_11880c;
  /* 118bd0: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 118bd4: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 118bd8: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 118bdc: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 118be0: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1149924));
  fn1_1441e0(c);
  /* 118be4: str x0, [x19, #0xc30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 118be8: nop  */
  /* nop: no architectural effect here */
  /* 118bec: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 118bf0: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1149940));
  fn1_1424d0(c);
  /* 118bf4: b #0x11880c */
  goto L_11880c;
L_118bf8:;
  /* 118bf8: mov x19, xzr */
  ARC_X_W(c, 19, ARC_X_R(c, 31));
  /* 118bfc: bl #0x142c08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1149952));
  fn1_142c08(c);
L_118c00:;
  /* 118c00: bl #0x142c08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1149956));
  fn1_142c08(c);
L_118c04:;
  /* 118c04: bl #0x142c08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1149960));
  fn1_142c08(c);
  /* 118c08: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 118c0c: nop  */
  /* nop: no architectural effect here */
  /* 118c10: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 118c14: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1149976));
  fn1_1424e8(c);
  /* 118c18: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 118c1c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1149984));
  fn1_9cc20(c);
  /* 118c20: b #0x118c34 */
  goto L_118c34;
  /* 118c24: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 118c28: add x0, sp, #0x68 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(104)));
  /* 118c2c: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1150000));
  fn1_d2a78(c);
  /* 118c30: b #0x118cd8 */
  goto L_118cd8;
L_118c34:;
  /* 118c34: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 118c38: ldrb w8, [sp, #0xd0] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(208))));
  /* 118c3c: tbz w8, #0, #0x118c98 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_118c98;
L_118c40:;
  /* 118c40: ldr x8, [sp, #0xd0] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(208))));
  /* 118c44: ldr x0, [sp, #0xe0] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(224))));
  /* 118c48: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 118c4c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1150032));
  fn1_142608(c);
  /* 118c50: ldrb w8, [sp, #0xe8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(232))));
  /* 118c54: tbz w8, #0, #0x118ca0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_118ca0;
L_118c58:;
  /* 118c58: ldr x8, [sp, #0xe8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(232))));
  /* 118c5c: ldr x0, [sp, #0xf8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(248))));
  /* 118c60: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 118c64: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1150056));
  fn1_142608(c);
  /* 118c68: ldrb w8, [sp, #0x100] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(256))));
  /* 118c6c: tbz w8, #0, #0x118cd8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_118cd8;
  /* 118c70: b #0x118ca8 */
  goto L_118ca8;
  /* 118c74: str x19, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 19));
  /* 118c78: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 118c7c: ldr x8, [sp, #0x40] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(64))));
  /* 118c80: cbz x8, #0x118cec */
  if ((ARC_X_R(c, 8)) == 0) goto L_118cec;
  /* 118c84: b #0x118d04 */
  goto L_118d04;
  /* 118c88: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 118c8c: cbnz x25, #0x118cbc */
  if ((ARC_X_R(c, 25)) != 0) goto L_118cbc;
  /* 118c90: ldrb w8, [sp, #0xd0] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(208))));
  /* 118c94: tbnz w8, #0, #0x118c40 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_118c40;
L_118c98:;
  /* 118c98: ldrb w8, [sp, #0xe8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(232))));
  /* 118c9c: tbnz w8, #0, #0x118c58 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_118c58;
L_118ca0:;
  /* 118ca0: ldrb w8, [sp, #0x100] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(256))));
  /* 118ca4: tbz w8, #0, #0x118cd8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_118cd8;
L_118ca8:;
  /* 118ca8: ldr x8, [sp, #0x100] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(256))));
  /* 118cac: ldr x0, [sp, #0x110] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(272))));
  /* 118cb0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 118cb4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1150136));
  fn1_142608(c);
  /* 118cb8: b #0x118cd8 */
  goto L_118cd8;
L_118cbc:;
  /* 118cbc: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 118cc0: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1150148));
  fn1_142800(c);
  /* 118cc4: ldrb w8, [sp, #0xd0] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(208))));
  /* 118cc8: tbz w8, #0, #0x118c98 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_118c98;
  /* 118ccc: b #0x118c40 */
  goto L_118c40;
  /* 118cd0: b #0x118cd4 */
  goto L_118cd4;
L_118cd4:;
  /* 118cd4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
L_118cd8:;
  /* 118cd8: sub x0, x29, #0xe8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(232)));
  /* 118cdc: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1150176));
  fn1_143478(c);
  /* 118ce0: cbnz x20, #0x118cf4 */
  if ((ARC_X_R(c, 20)) != 0) goto L_118cf4;
  /* 118ce4: ldr x8, [sp, #0x40] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(64))));
  /* 118ce8: cbnz x8, #0x118d04 */
  if ((ARC_X_R(c, 8)) != 0) goto L_118d04;
L_118cec:;
  /* 118cec: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 118cf0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1150196));
  fn1_9cc20(c);
L_118cf4:;
  /* 118cf4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 118cf8: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1150204));
  fn1_142800(c);
  /* 118cfc: ldr x8, [sp, #0x40] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(64))));
  /* 118d00: cbz x8, #0x118cec */
  if ((ARC_X_R(c, 8)) == 0) goto L_118cec;
L_118d04:;
  /* 118d04: ldr x0, [sp, #0x40] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(64))));
  /* 118d08: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1150220));
  fn1_142800(c);
  /* 118d0c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 118d10: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1150228));
  fn1_9cc20(c);
}

void fn1_1248f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039126264));
  /* 1248f8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1248fc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 124900: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 124904: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 124908: ldr x19, [x0] */
  ARC_X_W(c, 19, arc_ld64(ARC_X_R(c, 0)));
  /* 12490c: nop  */
  /* nop: no architectural effect here */
  /* 124910: adr x8, #0x15dc40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432640)));
  /* 124914: cmp x19, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 124918: b.eq #0x12492c */
  if (ARC_COND(c, 0)) goto L_12492c;
  /* 12491c: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 124920: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 124924: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1198376));
  fn1_bd950(c);
  /* 124928: cbz x0, #0x12493c */
  if ((ARC_X_R(c, 0)) == 0) goto L_12493c;
L_12492c:;
  /* 12492c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 124930: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 124934: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 124938: ret  */
  return;
L_12493c:;
  /* 12493c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 124940: ldr x16, [x8, #0x10] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 124944: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 124948: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12494c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 124950: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 124954: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_127570(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039137648));
  /* 127570: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 127574: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 127578: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 12757c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 127580: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 127584: mov w19, w2 */
  ARC_W_W(c, 19, ARC_W_R(c, 2));
  /* 127588: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* 12758c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 127590: tbnz w22, #0, #0x1275a0 */
  if (((ARC_W_R(c, 22)) >> 0 & 1) != 0) goto L_1275a0;
  /* 127594: mov w20, wzr */
  ARC_W_W(c, 20, ARC_W_R(c, 31));
  /* 127598: tbnz w22, #1, #0x1275b8 */
  if (((ARC_W_R(c, 22)) >> 1 & 1) != 0) goto L_1275b8;
  /* 12759c: b #0x1275cc */
  goto L_1275cc;
L_1275a0:;
  /* 1275a0: ldr x1, [x21, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 1275a4: mov w0, w19 */
  ARC_W_W(c, 0, ARC_W_R(c, 19));
  /* 1275a8: bl #0x1442a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1209772));
  fn1_1442a0(c);
  /* 1275ac: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* 1275b0: cset w20, ne */
  ARC_W_W(c, 20, (ARC_COND(c, 1) ? 1 : 0));
  /* 1275b4: tbz w22, #1, #0x1275cc */
  if (((ARC_W_R(c, 22)) >> 1 & 1) == 0) goto L_1275cc;
L_1275b8:;
  /* 1275b8: ldr x1, [x21, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 1275bc: mov w0, w19 */
  ARC_W_W(c, 0, ARC_W_R(c, 19));
  /* 1275c0: bl #0x1442b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1209796));
  fn1_1442b8(c);
  /* 1275c4: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* 1275c8: csinc w20, w20, wzr, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? (ARC_W_R(c, 20)) : ((ARC_W_R(c, 31)) + 1)));
L_1275cc:;
  /* 1275cc: tbnz w22, #2, #0x127618 */
  if (((ARC_W_R(c, 22)) >> 2 & 1) != 0) goto L_127618;
  /* 1275d0: tbnz w22, #3, #0x127630 */
  if (((ARC_W_R(c, 22)) >> 3 & 1) != 0) goto L_127630;
L_1275d4:;
  /* 1275d4: tbnz w22, #4, #0x127648 */
  if (((ARC_W_R(c, 22)) >> 4 & 1) != 0) goto L_127648;
L_1275d8:;
  /* 1275d8: tbnz w22, #5, #0x127660 */
  if (((ARC_W_R(c, 22)) >> 5 & 1) != 0) goto L_127660;
L_1275dc:;
  /* 1275dc: tbnz w22, #6, #0x127678 */
  if (((ARC_W_R(c, 22)) >> 6 & 1) != 0) goto L_127678;
L_1275e0:;
  /* 1275e0: tbnz w22, #7, #0x127690 */
  if (((ARC_W_R(c, 22)) >> 7 & 1) != 0) goto L_127690;
L_1275e4:;
  /* 1275e4: tbnz w22, #8, #0x1276a8 */
  if (((ARC_W_R(c, 22)) >> 8 & 1) != 0) goto L_1276a8;
L_1275e8:;
  /* 1275e8: tbz w22, #9, #0x127600 */
  if (((ARC_W_R(c, 22)) >> 9 & 1) == 0) goto L_127600;
L_1275ec:;
  /* 1275ec: ldr x1, [x21, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 1275f0: mov w0, w19 */
  ARC_W_W(c, 0, ARC_W_R(c, 19));
  /* 1275f4: bl #0x144360 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1209848));
  fn1_144360(c);
  /* 1275f8: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* 1275fc: csinc w20, w20, wzr, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? (ARC_W_R(c, 20)) : ((ARC_W_R(c, 31)) + 1)));
L_127600:;
  /* 127600: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 127604: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 127608: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 12760c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 127610: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 127614: ret  */
  return;
L_127618:;
  /* 127618: ldr x1, [x21, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 12761c: mov w0, w19 */
  ARC_W_W(c, 0, ARC_W_R(c, 19));
  /* 127620: bl #0x1442d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1209892));
  fn1_1442d0(c);
  /* 127624: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* 127628: csinc w20, w20, wzr, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? (ARC_W_R(c, 20)) : ((ARC_W_R(c, 31)) + 1)));
  /* 12762c: tbz w22, #3, #0x1275d4 */
  if (((ARC_W_R(c, 22)) >> 3 & 1) == 0) goto L_1275d4;
L_127630:;
  /* 127630: ldr x1, [x21, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 127634: mov w0, w19 */
  ARC_W_W(c, 0, ARC_W_R(c, 19));
  /* 127638: bl #0x1442e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1209916));
  fn1_1442e8(c);
  /* 12763c: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* 127640: csinc w20, w20, wzr, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? (ARC_W_R(c, 20)) : ((ARC_W_R(c, 31)) + 1)));
  /* 127644: tbz w22, #4, #0x1275d8 */
  if (((ARC_W_R(c, 22)) >> 4 & 1) == 0) goto L_1275d8;
L_127648:;
  /* 127648: ldr x1, [x21, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 12764c: mov w0, w19 */
  ARC_W_W(c, 0, ARC_W_R(c, 19));
  /* 127650: bl #0x144288 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1209940));
  fn1_144288(c);
  /* 127654: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* 127658: csinc w20, w20, wzr, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? (ARC_W_R(c, 20)) : ((ARC_W_R(c, 31)) + 1)));
  /* 12765c: tbz w22, #5, #0x1275dc */
  if (((ARC_W_R(c, 22)) >> 5 & 1) == 0) goto L_1275dc;
L_127660:;
  /* 127660: ldr x1, [x21, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 127664: mov w0, w19 */
  ARC_W_W(c, 0, ARC_W_R(c, 19));
  /* 127668: bl #0x144300 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1209964));
  fn1_144300(c);
  /* 12766c: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* 127670: csinc w20, w20, wzr, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? (ARC_W_R(c, 20)) : ((ARC_W_R(c, 31)) + 1)));
  /* 127674: tbz w22, #6, #0x1275e0 */
  if (((ARC_W_R(c, 22)) >> 6 & 1) == 0) goto L_1275e0;
L_127678:;
  /* 127678: ldr x1, [x21, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 12767c: mov w0, w19 */
  ARC_W_W(c, 0, ARC_W_R(c, 19));
  /* 127680: bl #0x144318 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1209988));
  fn1_144318(c);
  /* 127684: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* 127688: csinc w20, w20, wzr, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? (ARC_W_R(c, 20)) : ((ARC_W_R(c, 31)) + 1)));
  /* 12768c: tbz w22, #7, #0x1275e4 */
  if (((ARC_W_R(c, 22)) >> 7 & 1) == 0) goto L_1275e4;
L_127690:;
  /* 127690: ldr x1, [x21, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 127694: mov w0, w19 */
  ARC_W_W(c, 0, ARC_W_R(c, 19));
  /* 127698: bl #0x144330 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1210012));
  fn1_144330(c);
  /* 12769c: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* 1276a0: csinc w20, w20, wzr, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? (ARC_W_R(c, 20)) : ((ARC_W_R(c, 31)) + 1)));
  /* 1276a4: tbz w22, #8, #0x1275e8 */
  if (((ARC_W_R(c, 22)) >> 8 & 1) == 0) goto L_1275e8;
L_1276a8:;
  /* 1276a8: ldr x1, [x21, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 1276ac: mov w0, w19 */
  ARC_W_W(c, 0, ARC_W_R(c, 19));
  /* 1276b0: bl #0x144348 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1210036));
  fn1_144348(c);
  /* 1276b4: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* 1276b8: csinc w20, w20, wzr, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? (ARC_W_R(c, 20)) : ((ARC_W_R(c, 31)) + 1)));
  /* 1276bc: tbnz w22, #9, #0x1275ec */
  if (((ARC_W_R(c, 22)) >> 9 & 1) != 0) goto L_1275ec;
  /* 1276c0: b #0x127600 */
  goto L_127600;
}

void fn1_129b9c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039147420));
  /* 129b9c: bti c */
  /* bti: no architectural effect here */
  /* 129ba0: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 129ba4: ret  */
  return;
}

void fn1_12b1cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039153100));
  /* 12b1cc: bti c */
  /* bti: no architectural effect here */
  /* 12b1d0: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 12b1d4: ret  */
  return;
}

void fn1_12d010(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039160848));
  /* 12d010: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12d014: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12d018: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12d01c: nop  */
  /* nop: no architectural effect here */
  /* 12d020: adr x8, #0x15e430 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1434672)));
  /* 12d024: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 12d028: tbz w8, #0, #0x12d6ac */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12d6ac;
L_12d02c:;
  /* 12d02c: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d030: ldrb w8, [x8, #0x1f0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(496))));
  /* 12d034: tbnz w8, #0, #0x12d04c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12d04c;
  /* 12d038: nop  */
  /* nop: no architectural effect here */
  /* 12d03c: adr x8, #0x15e1f0 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1434096)));
  /* 12d040: mov w9, #0xe */
  ARC_W_W(c, 9, UINT64_C(14));
  /* 12d044: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12d048: b #0x12d060 */
  goto L_12d060;
L_12d04c:;
  /* 12d04c: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d050: add x9, x9, #0x1f8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(504)));
  /* 12d054: mov w10, #7 */
  ARC_W_W(c, 10, UINT64_C(7));
  /* 12d058: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12d05c: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12d060:;
  /* 12d060: mov w9, #0x6175 */
  ARC_W_W(c, 9, UINT64_C(24949));
  /* 12d064: mov w10, #0x614a */
  ARC_W_W(c, 10, UINT64_C(24906));
  /* 12d068: strb wzr, [x8, #7] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(7)), ARC_W_R(c, 31));
  /* 12d06c: movk w9, #0x7972, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(2037514240)));
  /* 12d070: movk w10, #0x756e, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1970143232)));
  /* 12d074: stur w9, [x8, #3] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(3)), ARC_W_R(c, 9));
  /* 12d078: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d07c: str w10, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* 12d080: ldrb w8, [x9, #0x208] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + INT64_C(520))));
  /* 12d084: tbnz w8, #0, #0x12d09c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12d09c;
  /* 12d088: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d08c: add x8, x8, #0x208 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(520)));
  /* 12d090: mov w9, #0x10 */
  ARC_W_W(c, 9, UINT64_C(16));
  /* 12d094: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12d098: b #0x12d0b0 */
  goto L_12d0b0;
L_12d09c:;
  /* 12d09c: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d0a0: add x9, x9, #0x210 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(528)));
  /* 12d0a4: mov w10, #8 */
  ARC_W_W(c, 10, UINT64_C(8));
  /* 12d0a8: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12d0ac: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12d0b0:;
  /* 12d0b0: mov x9, #0x6546 */
  ARC_X_W(c, 9, UINT64_C(25926));
  /* 12d0b4: strb wzr, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 31));
  /* 12d0b8: movk x9, #0x7262, lsl #16 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1919025152)));
  /* 12d0bc: movk x9, #0x6175, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(107155139067904)));
  /* 12d0c0: movk x9, #0x7972, lsl #48 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(281474976710655)) | UINT64_C(8751057025934295040)));
  /* 12d0c4: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 12d0c8: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d0cc: ldrb w8, [x8, #0x220] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(544))));
  /* 12d0d0: tbnz w8, #0, #0x12d0e8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12d0e8;
  /* 12d0d4: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d0d8: add x8, x8, #0x220 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(544)));
  /* 12d0dc: mov w9, #0xa */
  ARC_W_W(c, 9, UINT64_C(10));
  /* 12d0e0: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12d0e4: b #0x12d0fc */
  goto L_12d0fc;
L_12d0e8:;
  /* 12d0e8: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d0ec: add x9, x9, #0x228 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(552)));
  /* 12d0f0: mov w10, #5 */
  ARC_W_W(c, 10, UINT64_C(5));
  /* 12d0f4: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12d0f8: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12d0fc:;
  /* 12d0fc: mov w9, #0x614d */
  ARC_W_W(c, 9, UINT64_C(24909));
  /* 12d100: mov w10, #0x68 */
  ARC_W_W(c, 10, UINT64_C(104));
  /* 12d104: movk w9, #0x6372, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1668415488)));
  /* 12d108: strh w10, [x8, #4] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(4)), ARC_W_R(c, 10));
  /* 12d10c: str w9, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 12d110: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d114: ldrb w8, [x8, #0x238] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(568))));
  /* 12d118: tbnz w8, #0, #0x12d130 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12d130;
  /* 12d11c: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d120: add x8, x8, #0x238 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(568)));
  /* 12d124: mov w9, #0xa */
  ARC_W_W(c, 9, UINT64_C(10));
  /* 12d128: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12d12c: b #0x12d144 */
  goto L_12d144;
L_12d130:;
  /* 12d130: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d134: add x9, x9, #0x240 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(576)));
  /* 12d138: mov w10, #5 */
  ARC_W_W(c, 10, UINT64_C(5));
  /* 12d13c: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12d140: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12d144:;
  /* 12d144: mov w9, #0x7041 */
  ARC_W_W(c, 9, UINT64_C(28737));
  /* 12d148: mov w10, #0x6c */
  ARC_W_W(c, 10, UINT64_C(108));
  /* 12d14c: movk w9, #0x6972, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1769078784)));
  /* 12d150: strh w10, [x8, #4] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(4)), ARC_W_R(c, 10));
  /* 12d154: str w9, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 12d158: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d15c: ldrb w8, [x8, #0x250] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(592))));
  /* 12d160: tbnz w8, #0, #0x12d178 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12d178;
  /* 12d164: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d168: add x8, x8, #0x250 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(592)));
  /* 12d16c: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* 12d170: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12d174: b #0x12d18c */
  goto L_12d18c;
L_12d178:;
  /* 12d178: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d17c: add x9, x9, #0x258 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(600)));
  /* 12d180: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12d184: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12d188: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12d18c:;
  /* 12d18c: mov w9, #0x614d */
  ARC_W_W(c, 9, UINT64_C(24909));
  /* 12d190: movk w9, #0x79, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(7929856)));
  /* 12d194: str w9, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 12d198: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d19c: ldrb w8, [x8, #0x268] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(616))));
  /* 12d1a0: tbnz w8, #0, #0x12d1b8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12d1b8;
  /* 12d1a4: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d1a8: add x8, x8, #0x268 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(616)));
  /* 12d1ac: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* 12d1b0: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12d1b4: b #0x12d1cc */
  goto L_12d1cc;
L_12d1b8:;
  /* 12d1b8: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d1bc: add x9, x9, #0x270 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(624)));
  /* 12d1c0: mov w10, #4 */
  ARC_W_W(c, 10, UINT64_C(4));
  /* 12d1c4: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12d1c8: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12d1cc:;
  /* 12d1cc: mov w9, #0x754a */
  ARC_W_W(c, 9, UINT64_C(30026));
  /* 12d1d0: strb wzr, [x8, #4] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(4)), ARC_W_R(c, 31));
  /* 12d1d4: movk w9, #0x656e, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1701707776)));
  /* 12d1d8: str w9, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 12d1dc: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d1e0: ldrb w8, [x8, #0x280] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(640))));
  /* 12d1e4: tbnz w8, #0, #0x12d1fc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12d1fc;
  /* 12d1e8: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d1ec: add x8, x8, #0x280 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(640)));
  /* 12d1f0: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* 12d1f4: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12d1f8: b #0x12d210 */
  goto L_12d210;
L_12d1fc:;
  /* 12d1fc: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d200: add x9, x9, #0x288 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(648)));
  /* 12d204: mov w10, #4 */
  ARC_W_W(c, 10, UINT64_C(4));
  /* 12d208: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12d20c: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12d210:;
  /* 12d210: mov w9, #0x754a */
  ARC_W_W(c, 9, UINT64_C(30026));
  /* 12d214: strb wzr, [x8, #4] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(4)), ARC_W_R(c, 31));
  /* 12d218: movk w9, #0x796c, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(2037121024)));
  /* 12d21c: str w9, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 12d220: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d224: ldrb w8, [x8, #0x298] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(664))));
  /* 12d228: tbnz w8, #0, #0x12d240 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12d240;
  /* 12d22c: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d230: add x8, x8, #0x298 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(664)));
  /* 12d234: mov w9, #0xc */
  ARC_W_W(c, 9, UINT64_C(12));
  /* 12d238: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12d23c: b #0x12d254 */
  goto L_12d254;
L_12d240:;
  /* 12d240: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d244: add x9, x9, #0x2a0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(672)));
  /* 12d248: mov w10, #6 */
  ARC_W_W(c, 10, UINT64_C(6));
  /* 12d24c: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12d250: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12d254:;
  /* 12d254: mov w10, #0x7541 */
  ARC_W_W(c, 10, UINT64_C(30017));
  /* 12d258: mov w9, #0x7473 */
  ARC_W_W(c, 9, UINT64_C(29811));
  /* 12d25c: strb wzr, [x8, #6] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(6)), ARC_W_R(c, 31));
  /* 12d260: movk w10, #0x7567, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1969684480)));
  /* 12d264: strh w9, [x8, #4] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(4)), ARC_W_R(c, 9));
  /* 12d268: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d26c: str w10, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* 12d270: ldrb w8, [x9, #0x2b0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + INT64_C(688))));
  /* 12d274: tbnz w8, #0, #0x12d28c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12d28c;
  /* 12d278: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d27c: add x8, x8, #0x2b0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(688)));
  /* 12d280: mov w9, #0x12 */
  ARC_W_W(c, 9, UINT64_C(18));
  /* 12d284: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12d288: b #0x12d2a0 */
  goto L_12d2a0;
L_12d28c:;
  /* 12d28c: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d290: add x9, x9, #0x2b8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(696)));
  /* 12d294: mov w10, #9 */
  ARC_W_W(c, 10, UINT64_C(9));
  /* 12d298: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12d29c: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12d2a0:;
  /* 12d2a0: adrp x10, #0x4f000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(323584)));
  /* 12d2a4: add x10, x10, #0x91b */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(2331)));
  /* 12d2a8: mov w9, #0x72 */
  ARC_W_W(c, 9, UINT64_C(114));
  /* 12d2ac: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 12d2b0: strh w9, [x8, #8] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 9));
  /* 12d2b4: str x10, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 12d2b8: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d2bc: ldrb w8, [x8, #0x2c8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(712))));
  /* 12d2c0: tbnz w8, #0, #0x12d2d8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12d2d8;
  /* 12d2c4: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d2c8: add x8, x8, #0x2c8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(712)));
  /* 12d2cc: mov w9, #0xe */
  ARC_W_W(c, 9, UINT64_C(14));
  /* 12d2d0: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12d2d4: b #0x12d2ec */
  goto L_12d2ec;
L_12d2d8:;
  /* 12d2d8: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d2dc: add x9, x9, #0x2d0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(720)));
  /* 12d2e0: mov w10, #7 */
  ARC_W_W(c, 10, UINT64_C(7));
  /* 12d2e4: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12d2e8: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12d2ec:;
  /* 12d2ec: mov w9, #0x626f */
  ARC_W_W(c, 9, UINT64_C(25199));
  /* 12d2f0: mov w10, #0x634f */
  ARC_W_W(c, 10, UINT64_C(25423));
  /* 12d2f4: strb wzr, [x8, #7] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(7)), ARC_W_R(c, 31));
  /* 12d2f8: movk w9, #0x7265, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1919221760)));
  /* 12d2fc: movk w10, #0x6f74, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1869873152)));
  /* 12d300: stur w9, [x8, #3] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(3)), ARC_W_R(c, 9));
  /* 12d304: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d308: str w10, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* 12d30c: ldrb w8, [x9, #0x2e0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + INT64_C(736))));
  /* 12d310: tbnz w8, #0, #0x12d328 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12d328;
  /* 12d314: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d318: add x8, x8, #0x2e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(736)));
  /* 12d31c: mov w9, #0x10 */
  ARC_W_W(c, 9, UINT64_C(16));
  /* 12d320: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12d324: b #0x12d33c */
  goto L_12d33c;
L_12d328:;
  /* 12d328: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d32c: add x9, x9, #0x2e8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(744)));
  /* 12d330: mov w10, #8 */
  ARC_W_W(c, 10, UINT64_C(8));
  /* 12d334: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12d338: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12d33c:;
  /* 12d33c: mov x9, #0x6f4e */
  ARC_X_W(c, 9, UINT64_C(28494));
  /* 12d340: strb wzr, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 31));
  /* 12d344: movk x9, #0x6576, lsl #16 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1702232064)));
  /* 12d348: movk x9, #0x626d, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(108220290957312)));
  /* 12d34c: movk x9, #0x7265, lsl #48 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(281474976710655)) | UINT64_C(8242994692971560960)));
  /* 12d350: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 12d354: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d358: ldrb w8, [x8, #0x2f8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(760))));
  /* 12d35c: tbnz w8, #0, #0x12d374 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12d374;
  /* 12d360: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d364: add x8, x8, #0x2f8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(760)));
  /* 12d368: mov w9, #0x10 */
  ARC_W_W(c, 9, UINT64_C(16));
  /* 12d36c: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12d370: b #0x12d388 */
  goto L_12d388;
L_12d374:;
  /* 12d374: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d378: add x9, x9, #0x300 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(768)));
  /* 12d37c: mov w10, #8 */
  ARC_W_W(c, 10, UINT64_C(8));
  /* 12d380: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12d384: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12d388:;
  /* 12d388: mov x9, #0x6544 */
  ARC_X_W(c, 9, UINT64_C(25924));
  /* 12d38c: strb wzr, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 31));
  /* 12d390: movk x9, #0x6563, lsl #16 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1700986880)));
  /* 12d394: movk x9, #0x626d, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(108220290957312)));
  /* 12d398: movk x9, #0x7265, lsl #48 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(281474976710655)) | UINT64_C(8242994692971560960)));
  /* 12d39c: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 12d3a0: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d3a4: ldrb w8, [x8, #0x310] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(784))));
  /* 12d3a8: tbnz w8, #0, #0x12d3c0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12d3c0;
  /* 12d3ac: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d3b0: add x8, x8, #0x310 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(784)));
  /* 12d3b4: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* 12d3b8: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12d3bc: b #0x12d3d4 */
  goto L_12d3d4;
L_12d3c0:;
  /* 12d3c0: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d3c4: add x9, x9, #0x318 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(792)));
  /* 12d3c8: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12d3cc: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12d3d0: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12d3d4:;
  /* 12d3d4: mov w9, #0x614a */
  ARC_W_W(c, 9, UINT64_C(24906));
  /* 12d3d8: movk w9, #0x6e, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(7208960)));
  /* 12d3dc: str w9, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 12d3e0: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d3e4: ldrb w8, [x8, #0x328] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(808))));
  /* 12d3e8: tbnz w8, #0, #0x12d400 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12d400;
  /* 12d3ec: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d3f0: add x8, x8, #0x328 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(808)));
  /* 12d3f4: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* 12d3f8: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12d3fc: b #0x12d414 */
  goto L_12d414;
L_12d400:;
  /* 12d400: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d404: add x9, x9, #0x330 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(816)));
  /* 12d408: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12d40c: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12d410: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12d414:;
  /* 12d414: mov w9, #0x6546 */
  ARC_W_W(c, 9, UINT64_C(25926));
  /* 12d418: movk w9, #0x62, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(6422528)));
  /* 12d41c: str w9, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 12d420: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d424: ldrb w8, [x8, #0x340] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(832))));
  /* 12d428: tbnz w8, #0, #0x12d440 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12d440;
  /* 12d42c: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d430: add x8, x8, #0x340 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(832)));
  /* 12d434: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* 12d438: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12d43c: b #0x12d454 */
  goto L_12d454;
L_12d440:;
  /* 12d440: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d444: add x9, x9, #0x348 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(840)));
  /* 12d448: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12d44c: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12d450: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12d454:;
  /* 12d454: mov w9, #0x614d */
  ARC_W_W(c, 9, UINT64_C(24909));
  /* 12d458: movk w9, #0x72, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(7471104)));
  /* 12d45c: str w9, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 12d460: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d464: ldrb w8, [x8, #0x358] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(856))));
  /* 12d468: tbnz w8, #0, #0x12d480 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12d480;
  /* 12d46c: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d470: add x8, x8, #0x358 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(856)));
  /* 12d474: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* 12d478: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12d47c: b #0x12d494 */
  goto L_12d494;
L_12d480:;
  /* 12d480: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d484: add x9, x9, #0x360 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(864)));
  /* 12d488: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12d48c: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12d490: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12d494:;
  /* 12d494: mov w9, #0x7041 */
  ARC_W_W(c, 9, UINT64_C(28737));
  /* 12d498: movk w9, #0x72, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(7471104)));
  /* 12d49c: str w9, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 12d4a0: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d4a4: ldrb w8, [x8, #0x370] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(880))));
  /* 12d4a8: tbnz w8, #0, #0x12d4c0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12d4c0;
  /* 12d4ac: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d4b0: add x8, x8, #0x370 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(880)));
  /* 12d4b4: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* 12d4b8: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12d4bc: b #0x12d4d4 */
  goto L_12d4d4;
L_12d4c0:;
  /* 12d4c0: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d4c4: add x9, x9, #0x378 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(888)));
  /* 12d4c8: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12d4cc: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12d4d0: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12d4d4:;
  /* 12d4d4: mov w9, #0x614d */
  ARC_W_W(c, 9, UINT64_C(24909));
  /* 12d4d8: movk w9, #0x79, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(7929856)));
  /* 12d4dc: str w9, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 12d4e0: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d4e4: ldrb w8, [x8, #0x388] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(904))));
  /* 12d4e8: tbnz w8, #0, #0x12d500 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12d500;
  /* 12d4ec: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d4f0: add x8, x8, #0x388 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(904)));
  /* 12d4f4: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* 12d4f8: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12d4fc: b #0x12d514 */
  goto L_12d514;
L_12d500:;
  /* 12d500: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d504: add x9, x9, #0x390 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(912)));
  /* 12d508: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12d50c: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12d510: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12d514:;
  /* 12d514: mov w9, #0x754a */
  ARC_W_W(c, 9, UINT64_C(30026));
  /* 12d518: movk w9, #0x6e, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(7208960)));
  /* 12d51c: str w9, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 12d520: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d524: ldrb w8, [x8, #0x3a0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(928))));
  /* 12d528: tbnz w8, #0, #0x12d540 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12d540;
  /* 12d52c: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d530: add x8, x8, #0x3a0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(928)));
  /* 12d534: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* 12d538: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12d53c: b #0x12d554 */
  goto L_12d554;
L_12d540:;
  /* 12d540: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d544: add x9, x9, #0x3a8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(936)));
  /* 12d548: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12d54c: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12d550: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12d554:;
  /* 12d554: mov w9, #0x754a */
  ARC_W_W(c, 9, UINT64_C(30026));
  /* 12d558: movk w9, #0x6c, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(7077888)));
  /* 12d55c: str w9, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 12d560: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d564: ldrb w8, [x8, #0x3b8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(952))));
  /* 12d568: tbnz w8, #0, #0x12d580 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12d580;
  /* 12d56c: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d570: add x8, x8, #0x3b8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(952)));
  /* 12d574: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* 12d578: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12d57c: b #0x12d594 */
  goto L_12d594;
L_12d580:;
  /* 12d580: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d584: add x9, x9, #0x3c0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(960)));
  /* 12d588: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12d58c: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12d590: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12d594:;
  /* 12d594: mov w9, #0x7541 */
  ARC_W_W(c, 9, UINT64_C(30017));
  /* 12d598: movk w9, #0x67, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(6750208)));
  /* 12d59c: str w9, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 12d5a0: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d5a4: ldrb w8, [x8, #0x3d0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(976))));
  /* 12d5a8: tbnz w8, #0, #0x12d5c0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12d5c0;
  /* 12d5ac: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d5b0: add x8, x8, #0x3d0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(976)));
  /* 12d5b4: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* 12d5b8: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12d5bc: b #0x12d5d4 */
  goto L_12d5d4;
L_12d5c0:;
  /* 12d5c0: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d5c4: add x9, x9, #0x3d8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(984)));
  /* 12d5c8: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12d5cc: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12d5d0: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12d5d4:;
  /* 12d5d4: mov w9, #0x6553 */
  ARC_W_W(c, 9, UINT64_C(25939));
  /* 12d5d8: movk w9, #0x70, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(7340032)));
  /* 12d5dc: str w9, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 12d5e0: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d5e4: ldrb w8, [x8, #0x3e8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(1000))));
  /* 12d5e8: tbnz w8, #0, #0x12d600 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12d600;
  /* 12d5ec: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d5f0: add x8, x8, #0x3e8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1000)));
  /* 12d5f4: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* 12d5f8: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12d5fc: b #0x12d614 */
  goto L_12d614;
L_12d600:;
  /* 12d600: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d604: add x9, x9, #0x3f0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1008)));
  /* 12d608: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12d60c: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12d610: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12d614:;
  /* 12d614: mov w9, #0x634f */
  ARC_W_W(c, 9, UINT64_C(25423));
  /* 12d618: movk w9, #0x74, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(7602176)));
  /* 12d61c: str w9, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 12d620: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d624: ldrb w8, [x8, #0x400] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(1024))));
  /* 12d628: tbnz w8, #0, #0x12d640 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12d640;
  /* 12d62c: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d630: add x8, x8, #0x400 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1024)));
  /* 12d634: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* 12d638: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12d63c: b #0x12d654 */
  goto L_12d654;
L_12d640:;
  /* 12d640: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d644: add x9, x9, #0x408 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1032)));
  /* 12d648: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12d64c: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12d650: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12d654:;
  /* 12d654: mov w9, #0x6f4e */
  ARC_W_W(c, 9, UINT64_C(28494));
  /* 12d658: movk w9, #0x76, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(7733248)));
  /* 12d65c: str w9, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 12d660: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d664: ldrb w8, [x8, #0x418] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(1048))));
  /* 12d668: tbnz w8, #0, #0x12d680 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12d680;
  /* 12d66c: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d670: add x8, x8, #0x418 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1048)));
  /* 12d674: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* 12d678: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12d67c: b #0x12d694 */
  goto L_12d694;
L_12d680:;
  /* 12d680: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d684: add x9, x9, #0x420 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1056)));
  /* 12d688: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12d68c: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12d690: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12d694:;
  /* 12d694: mov w9, #0x6544 */
  ARC_W_W(c, 9, UINT64_C(25924));
  /* 12d698: movk w9, #0x63, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(6488064)));
  /* 12d69c: str w9, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 12d6a0: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12d6a4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12d6a8: ret  */
  return;
L_12d6ac:;
  /* 12d6ac: nop  */
  /* nop: no architectural effect here */
  /* 12d6b0: adr x0, #0x15e430 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1434672)));
  /* 12d6b4: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1234616));
  fn1_1424b8(c);
  /* 12d6b8: cbz w0, #0x12d02c */
  if ((ARC_W_R(c, 0)) == 0) goto L_12d02c;
  /* 12d6bc: adrp x0, #0x135000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1265664)));
  /* 12d6c0: add x0, x0, #0x504 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1284)));
  /* 12d6c4: nop  */
  /* nop: no architectural effect here */
  /* 12d6c8: adr x2, #0x148af8 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1346296)));
  /* 12d6cc: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 12d6d0: bl #0x1423f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1234644));
  fn1_1423f8(c);
  /* 12d6d4: nop  */
  /* nop: no architectural effect here */
  /* 12d6d8: adr x0, #0x15e430 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1434672)));
  /* 12d6dc: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1234656));
  fn1_1424d0(c);
  /* 12d6e0: b #0x12d02c */
  goto L_12d02c;
}

void fn1_134a24(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192100));
  /* 134a24: bti c */
  /* bti: no architectural effect here */
  /* 134a28: add x0, x0, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* 134a2c: b #0x143cb8 */
  fn1_143cb8(c); return;
}

void fn1_135450(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039194704));
  /* 135450: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 135454: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 135458: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13545c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 135460: adrp x19, #0x15e000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 135464: add x19, x19, #0x78 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + UINT64_C(120)));
  /* 135468: mov x20, #-0x150 */
  ARC_X_W(c, 20, UINT64_C(18446744073709551280));
  /* 13546c: b #0x13547c */
  goto L_13547c;
L_135470:;
  /* 135470: adds x20, x20, #0x18 */
  ARC_X_W(c, 20, arc_add64(c, ARC_X_R(c, 20), UINT64_C(24), 0));
  /* 135474: sub x19, x19, #0x18 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) - UINT64_C(24)));
  /* 135478: b.eq #0x135498 */
  if (ARC_COND(c, 0)) goto L_135498;
L_13547c:;
  /* 13547c: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 135480: tbz w8, #0, #0x135470 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_135470;
  /* 135484: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 135488: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 13548c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 135490: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1266836));
  fn1_142608(c);
  /* 135494: b #0x135470 */
  goto L_135470;
L_135498:;
  /* 135498: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13549c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1354a0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1354a4: ret  */
  return;
}

void fn1_138358(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039206744));
  /* 138358: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13835c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 138360: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 138364: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 138368: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 13836c: ldr x8, [x8, #0xe50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3664))));
  /* 138370: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* 138374: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* 138378: add x19, x0, x9 */
  ARC_X_W(c, 19, (ARC_X_R(c, 0) + ARC_X_R(c, 9)));
  /* 13837c: add x9, x8, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* 138380: add x8, x8, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* 138384: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 138388: mov x20, x19 */
  ARC_X_W(c, 20, ARC_X_R(c, 19));
  /* 13838c: str x9, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* 138390: str x8, [x20, #0x68]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(104));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(104));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 138394: bl #0x144558 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1278872));
  fn1_144558(c);
  /* 138398: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13839c: bl #0x1433b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1278880));
  fn1_1433b8(c);
  /* 1383a0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1383a4: mov w1, #0x100 */
  ARC_W_W(c, 1, UINT64_C(256));
  /* 1383a8: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1383ac: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1383b0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1383b4: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_13cb70(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039225200));
  /* 13cb70: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13cb74: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 13cb78: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13cb7c: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* 13cb80: adrp x8, #0x4f000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(323584)));
  /* 13cb84: add x8, x8, #0xd76 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3446)));
  /* 13cb88: stp x0, x1, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 13cb8c: stp x8, x2, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 13cb90: cbz x2, #0x13cbb4 */
  if ((ARC_X_R(c, 2)) == 0) goto L_13cbb4;
  /* 13cb94: str wzr, [x2] */
  arc_st32(ARC_X_R(c, 2), ARC_W_R(c, 31));
  /* 13cb98: nop  */
  /* nop: no architectural effect here */
  /* 13cb9c: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13cba0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13cba4: tbz w8, #0, #0x13cc20 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13cc20;
L_13cba8:;
  /* 13cba8: nop  */
  /* nop: no architectural effect here */
  /* 13cbac: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13cbb0: str x8, [x2, #8] */
  arc_st64((ARC_X_R(c, 2) + INT64_C(8)), ARC_X_R(c, 8));
L_13cbb4:;
  /* 13cbb4: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* 13cbb8: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 13cbbc: ldrb w10, [x1] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 1)));
  /* 13cbc0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 13cbc4: ldr x8, [x1, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* 13cbc8: csinc x0, x9, x0, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 0)) + 1)));
  /* 13cbcc: tst w10, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1)));
  /* 13cbd0: csinc x1, x8, x1, ne */
  ARC_X_W(c, 1, (ARC_COND(c, 1) ? (ARC_X_R(c, 8)) : ((ARC_X_R(c, 1)) + 1)));
  /* 13cbd4: bl #0x144918 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1297368));
  fn1_144918(c);
  /* 13cbd8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 13cbdc: b.ne #0x13cc10 */
  if (ARC_COND(c, 1)) goto L_13cc10;
  /* 13cbe0: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1297380));
  fn1_142a58(c);
  /* 13cbe4: nop  */
  /* nop: no architectural effect here */
  /* 13cbe8: adr x9, #0x159208 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13cbec: ldr w8, [x0] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 0)));
  /* 13cbf0: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 13cbf4: tbz w9, #0, #0x13cc60 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_13cc60;
L_13cbf8:;
  /* 13cbf8: nop  */
  /* nop: no architectural effect here */
  /* 13cbfc: adr x9, #0x156d38 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13cc00: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 13cc04: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 13cc08: stp x8, x9, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 13cc0c: bl #0x139ad0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1297424));
  fn1_139ad0(c);
L_13cc10:;
  /* 13cc10: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13cc14: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 13cc18: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13cc1c: ret  */
  return;
L_13cc20:;
  /* 13cc20: nop  */
  /* nop: no architectural effect here */
  /* 13cc24: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13cc28: stp x1, x0, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 13cc2c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 13cc30: str x2, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 2));
  /* 13cc34: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1297464));
  fn1_1424b8(c);
  /* 13cc38: ldp x2, x1, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 13cc3c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 13cc40: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 13cc44: cbz w8, #0x13cba8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_13cba8;
  /* 13cc48: nop  */
  /* nop: no architectural effect here */
  /* 13cc4c: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13cc50: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1297492));
  fn1_1424d0(c);
  /* 13cc54: ldp x2, x1, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 13cc58: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 13cc5c: b #0x13cba8 */
  goto L_13cba8;
L_13cc60:;
  /* 13cc60: nop  */
  /* nop: no architectural effect here */
  /* 13cc64: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13cc68: str x8, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 8));
  /* 13cc6c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1297520));
  fn1_1424b8(c);
  /* 13cc70: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 13cc74: cbz w0, #0x13cbf8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13cbf8;
  /* 13cc78: nop  */
  /* nop: no architectural effect here */
  /* 13cc7c: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13cc80: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1297540));
  fn1_1424d0(c);
  /* 13cc84: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 13cc88: b #0x13cbf8 */
  goto L_13cbf8;
}

void fn1_142560(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248224));
  /* 142560: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 142564: ldr x17, [x16, #0xf00] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3840))));
  /* 142568: add x16, x16, #0xf00 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3840)));
  /* 14256c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142570: nop  */
  /* nop: no architectural effect here */
  /* 142574: nop  */
  /* nop: no architectural effect here */
}

void fn1_142b60(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249760));
  /* 142b60: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142b64: ldr x17, [x16, #0x100] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(256))));
  /* 142b68: add x16, x16, #0x100 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(256)));
  /* 142b6c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142b70: nop  */
  /* nop: no architectural effect here */
  /* 142b74: nop  */
  /* nop: no architectural effect here */
}

void fn1_143160(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251296));
  /* 143160: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143164: ldr x17, [x16, #0x300] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(768))));
  /* 143168: add x16, x16, #0x300 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(768)));
  /* 14316c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143170: nop  */
  /* nop: no architectural effect here */
  /* 143174: nop  */
  /* nop: no architectural effect here */
}

void fn1_143760(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252832));
  /* 143760: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143764: ldr x17, [x16, #0x500] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1280))));
  /* 143768: add x16, x16, #0x500 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1280)));
  /* 14376c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143770: nop  */
  /* nop: no architectural effect here */
  /* 143774: nop  */
  /* nop: no architectural effect here */
}

void fn1_143d60(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254368));
  /* 143d60: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143d64: ldr x17, [x16, #0x700] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1792))));
  /* 143d68: add x16, x16, #0x700 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1792)));
  /* 143d6c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143d70: nop  */
  /* nop: no architectural effect here */
  /* 143d74: nop  */
  /* nop: no architectural effect here */
}

void fn1_144360(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255904));
  /* 144360: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144364: ldr x17, [x16, #0x900] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2304))));
  /* 144368: add x16, x16, #0x900 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2304)));
  /* 14436c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144370: nop  */
  /* nop: no architectural effect here */
  /* 144374: nop  */
  /* nop: no architectural effect here */
}

void fn1_144960(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039257440));
  /* 144960: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144964: ldr x17, [x16, #0xb00] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2816))));
  /* 144968: add x16, x16, #0xb00 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2816)));
  /* 14496c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144970: nop  */
  /* nop: no architectural effect here */
  /* 144974: nop  */
  /* nop: no architectural effect here */
}

