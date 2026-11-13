#include "lifted.h"

void fn1_a04dc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038584540));
  /* a04dc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a04e0: sub sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(160)));
  /* a04e4: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a04e8: stp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* a04ec: stp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* a04f0: stp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* a04f4: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a04f8: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a04fc: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* a0500: add x24, x2, w3, uxtw */
  ARC_X_W(c, 24, (ARC_X_R(c, 2) + ((uint64_t)(uint32_t)(ARC_W_R(c, 3)))));
  /* a0504: mov x23, x2 */
  ARC_X_W(c, 23, ARC_X_R(c, 2));
  /* a0508: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* a050c: add x3, sp, #0x20 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(32)));
  /* a0510: mov x1, x2 */
  ARC_X_W(c, 1, ARC_X_R(c, 2));
  /* a0514: mov x21, x5 */
  ARC_X_W(c, 21, ARC_X_R(c, 5));
  /* a0518: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* a051c: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* a0520: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* a0524: bl #0xa01f4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(656680));
  fn1_a01f4(c);
  /* a0528: tbz w0, #0, #0xa061c */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_a061c;
  /* a052c: ldr x8, [sp, #0x28] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(40))));
  /* a0530: cbz x8, #0xa061c */
  if ((ARC_X_R(c, 8)) == 0) goto L_a061c;
  /* a0534: ldrb w0, [sp, #0x38] */
  ARC_W_W(c, 0, arc_ld8(((c)->sp + INT64_C(56))));
  /* a0538: stp x21, x19, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a053c: bl #0xa0644 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(656704));
  fn1_a0644(c);
  /* a0540: ldr x27, [sp, #0x28] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(40))));
  /* a0544: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* a0548: mov x26, xzr */
  ARC_X_W(c, 26, ARC_X_R(c, 31));
L_a054c:;
  /* a054c: cmp x27, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 27), UINT64_C(1));
  /* a0550: b.ls #0xa059c */
  if (ARC_COND(c, 9)) goto L_a059c;
  /* a0554: lsr x21, x27, #1 */
  ARC_X_W(c, 21, ((uint64_t)(ARC_X_R(c, 27)) >> ((UINT64_C(1)) & 63)));
  /* a0558: ldr x8, [sp, #0x30] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(48))));
  /* a055c: ldrb w3, [sp, #0x38] */
  ARC_W_W(c, 3, arc_ld8(((c)->sp + INT64_C(56))));
  /* a0560: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* a0564: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* a0568: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* a056c: add x19, x21, x26 */
  ARC_X_W(c, 19, (ARC_X_R(c, 21) + ARC_X_R(c, 26)));
  /* a0570: mov x4, x23 */
  ARC_X_W(c, 4, ARC_X_R(c, 23));
  /* a0574: mul x28, x19, x25 */
  ARC_X_W(c, 28, ((uint64_t)(ARC_X_R(c, 19)) * (uint64_t)(ARC_X_R(c, 25))));
  /* a0578: add x8, x8, x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 28)));
  /* a057c: str x8, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 8));
  /* a0580: bl #0x9eecc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(656772));
  fn1_9eecc(c);
  /* a0584: sub x8, x27, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 27) - ARC_X_R(c, 21)));
  /* a0588: cmp x0, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 20));
  /* a058c: csel x26, x26, x19, hs */
  ARC_X_W(c, 26, (ARC_COND(c, 2) ? (ARC_X_R(c, 26)) : ARC_X_R(c, 19)));
  /* a0590: csel x27, x21, x8, hs */
  ARC_X_W(c, 27, (ARC_COND(c, 2) ? (ARC_X_R(c, 21)) : ARC_X_R(c, 8)));
  /* a0594: b.ne #0xa054c */
  if (ARC_COND(c, 1)) goto L_a054c;
  /* a0598: b #0xa05a0 */
  goto L_a05a0;
L_a059c:;
  /* a059c: mul x28, x26, x25 */
  ARC_X_W(c, 28, ((uint64_t)(ARC_X_R(c, 26)) * (uint64_t)(ARC_X_R(c, 25))));
L_a05a0:;
  /* a05a0: ldr x8, [sp, #0x30] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(48))));
  /* a05a4: ldrb w25, [sp, #0x38] */
  ARC_W_W(c, 25, arc_ld8(((c)->sp + INT64_C(56))));
  /* a05a8: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* a05ac: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* a05b0: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* a05b4: mov x4, x23 */
  ARC_X_W(c, 4, ARC_X_R(c, 23));
  /* a05b8: add x8, x8, x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 28)));
  /* a05bc: mov w3, w25 */
  ARC_W_W(c, 3, ARC_W_R(c, 25));
  /* a05c0: str x8, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 8));
  /* a05c4: bl #0x9eecc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(656840));
  fn1_9eecc(c);
  /* a05c8: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* a05cc: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* a05d0: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* a05d4: mov w3, w25 */
  ARC_W_W(c, 3, ARC_W_R(c, 25));
  /* a05d8: mov x4, x23 */
  ARC_X_W(c, 4, ARC_X_R(c, 23));
  /* a05dc: bl #0x9eecc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(656864));
  fn1_9eecc(c);
  /* a05e0: ldp x3, x19, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 3, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a05e4: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* a05e8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* a05ec: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* a05f0: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* a05f4: bl #0x9d15c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(656888));
  fn1_9d15c(c);
  /* a05f8: cbnz x0, #0xa061c */
  if ((ARC_X_R(c, 0)) != 0) goto L_a061c;
  /* a05fc: ldr x8, [x19, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* a0600: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* a0604: b.lo #0xa061c */
  if (ARC_COND(c, 3)) goto L_a061c;
  /* a0608: ldr x8, [x19, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* a060c: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* a0610: b.hs #0xa061c */
  if (ARC_COND(c, 2)) goto L_a061c;
  /* a0614: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* a0618: b #0xa0620 */
  goto L_a0620;
L_a061c:;
  /* a061c: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
L_a0620:;
  /* a0620: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a0624: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a0628: ldp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* a062c: ldp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* a0630: ldp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* a0634: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a0638: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* a063c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a0640: ret  */
  return;
}

void fn1_a21c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038591936));
  /* a21c0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a21c4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a21c8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* a21cc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a21d0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a21d4: bl #0x142668 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(664024));
  fn1_142668(c);
  /* a21d8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a21dc: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* a21e0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* a21e4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a21e8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a21ec: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_a7744(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038613828));
  /* a7744: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a7748: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a774c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* a7750: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a7754: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a7758: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* a775c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* a7760: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* a7764: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* a7768: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a776c: b.hi #0xa7790 */
  if (ARC_COND(c, 8)) goto L_a7790;
  /* a7770: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a7774: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a7778: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(685948));
  fn1_1428a8(c);
  /* a777c: cbz x0, #0xa77e0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a77e0;
  /* a7780: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a7784: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a7788: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a778c: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_a7790:;
  /* a7790: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* a7794: add x0, x21, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* a7798: adrp x8, #0x14b000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1355776)));
  /* a779c: add x8, x8, #0xe78 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3704)));
  /* a77a0: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* a77a4: mov w9, #0xa */
  ARC_W_W(c, 9, UINT64_C(10));
  /* a77a8: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a77ac: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* a77b0: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* a77b4: mov w9, #0x540 */
  ARC_W_W(c, 9, UINT64_C(1344));
  /* a77b8: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* a77bc: ldr q0, [x19] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 19)), arc_ld64(ARC_X_R(c, 19) + 8));
  /* a77c0: orr w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 9)));
  /* a77c4: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* a77c8: str q0, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* a77cc: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a77d0: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* a77d4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a77d8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a77dc: ret  */
  return;
L_a77e0:;
  /* a77e0: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(686052));
  fn1_142488(c);
}

void fn1_ad034(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038636596));
  /* ad034: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ad038: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ad03c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* ad040: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ad044: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ad048: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* ad04c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* ad050: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* ad054: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* ad058: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* ad05c: b.hi #0xad080 */
  if (ARC_COND(c, 8)) goto L_ad080;
  /* ad060: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ad064: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* ad068: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(708716));
  fn1_1428a8(c);
  /* ad06c: cbz x0, #0xad0d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ad0d4;
  /* ad070: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ad074: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ad078: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ad07c: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_ad080:;
  /* ad080: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* ad084: add x0, x21, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* ad088: adrp x8, #0x14b000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1355776)));
  /* ad08c: add x8, x8, #0xe0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(224)));
  /* ad090: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* ad094: mov w9, #0x46 */
  ARC_W_W(c, 9, UINT64_C(70));
  /* ad098: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* ad09c: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* ad0a0: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* ad0a4: mov w9, #0x540 */
  ARC_W_W(c, 9, UINT64_C(1344));
  /* ad0a8: str xzr, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 31));
  /* ad0ac: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* ad0b0: ldr q0, [x19] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 19)), arc_ld64(ARC_X_R(c, 19) + 8));
  /* ad0b4: orr w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 9)));
  /* ad0b8: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* ad0bc: stur q0, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)) + 8, (c)->q[0].u64[1]);
  /* ad0c0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ad0c4: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* ad0c8: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ad0cc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ad0d0: ret  */
  return;
L_ad0d4:;
  /* ad0d4: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(708824));
  fn1_142488(c);
}

void fn1_b30a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038661280));
  /* b30a0: bti c */
  /* bti: no architectural effect here */
  /* b30a4: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* b30a8: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b6c2c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038676524));
  /* b6c2c: bti c */
  /* bti: no architectural effect here */
  /* b6c30: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* b6c34: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b8df8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038685176));
  /* b8df8: bti c */
  /* bti: no architectural effect here */
  /* b8dfc: mov w1, #0x28 */
  ARC_W_W(c, 1, UINT64_C(40));
  /* b8e00: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_bc97c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038700412));
  /* bc97c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bc980: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bc984: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* bc988: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bc98c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bc990: ldr x22, [x0, #0x1330] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* bc994: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* bc998: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* bc99c: ldr x8, [x22, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* bc9a0: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* bc9a4: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* bc9a8: b.hi #0xbc9cc */
  if (ARC_COND(c, 8)) goto L_bc9cc;
  /* bc9ac: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* bc9b0: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* bc9b4: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(772536));
  fn1_1428a8(c);
  /* bc9b8: cbz x0, #0xbca2c */
  if ((ARC_X_R(c, 0)) == 0) goto L_bca2c;
  /* bc9bc: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* bc9c0: stp x22, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* bc9c4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* bc9c8: str x0, [x21, #0x1330] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(4912)), ARC_X_R(c, 0));
L_bc9cc:;
  /* bc9cc: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* bc9d0: ldr x10, [x20] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 20)));
  /* bc9d4: add x0, x22, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* bc9d8: str x9, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 9));
  /* bc9dc: adrp x8, #0x14c000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1359872)));
  /* bc9e0: add x8, x8, #0x670 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1648)));
  /* bc9e4: ldurh w9, [x10, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 10) + INT64_C(9))));
  /* bc9e8: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* bc9ec: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* bc9f0: mov w11, #0x500 */
  ARC_W_W(c, 11, UINT64_C(1280));
  /* bc9f4: ldr x12, [x19] */
  ARC_X_W(c, 12, arc_ld64(ARC_X_R(c, 19)));
  /* bc9f8: and w9, w9, #0xc0 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(192)));
  /* bc9fc: orr w9, w9, w11 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 11)));
  /* bca00: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* bca04: mov w11, #0xe */
  ARC_W_W(c, 11, UINT64_C(14));
  /* bca08: orr w8, w9, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) | ARC_W_R(c, 8)));
  /* bca0c: strb w11, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 11));
  /* bca10: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* bca14: stp x12, x10, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 12));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* bca18: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bca1c: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* bca20: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bca24: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bca28: ret  */
  return;
L_bca2c:;
  /* bca2c: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(772656));
  fn1_142488(c);
}

void fn1_bf2f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038711024));
  /* bf2f0: bti c */
  /* bti: no architectural effect here */
  /* bf2f4: sub x9, x1, x0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* bf2f8: mov w8, #0x7e */
  ARC_W_W(c, 8, UINT64_C(126));
  /* bf2fc: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* bf300: clz x9, x9 */
  ARC_X_W(c, 9, arc_clz64(ARC_X_R(c, 9)));
  /* bf304: sub x2, x8, x9, lsl #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) - ((uint64_t)(ARC_X_R(c, 9)) << 1)));
  /* bf308: b #0xbf30c */
  fn1_bf30c(c); return;
}

void fn1_d5cf0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038803696));
  /* d5cf0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d5cf4: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d5cf8: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* d5cfc: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d5d00: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* d5d04: mov w19, w2 */
  ARC_W_W(c, 19, ARC_W_R(c, 2));
  /* d5d08: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* d5d0c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* d5d10: bl #0xd2ad4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(875796));
  fn1_d2ad4(c);
  /* d5d14: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* d5d18: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* d5d1c: mov w2, w19 */
  ARC_W_W(c, 2, ARC_W_R(c, 19));
  /* d5d20: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d5d24: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* d5d28: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d5d2c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d5d30: b #0xd5a90 */
  fn1_d5a90(c); return;
}

void fn1_d9fe8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038820840));
  /* d9fe8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d9fec: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d9ff0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* d9ff4: mov w0, #8 */
  ARC_W_W(c, 0, UINT64_C(8));
  /* d9ff8: bl #0x142410 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(892924));
  fn1_142410(c);
  /* d9ffc: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* da000: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* da004: adrp x2, #0x151000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1380352)));
  /* da008: ldr x8, [x8, #0x8d8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2264))));
  /* da00c: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* da010: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* da014: ldr x1, [x1, #0x8a8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2216))));
  /* da018: ldr x2, [x2, #0x890] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 2) + INT64_C(2192))));
  /* da01c: bl #0x142440 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(892960));
  fn1_142440(c);
}

void fn1_dc288(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038829704));
  /* dc288: bti c */
  /* bti: no architectural effect here */
  /* dc28c: cmp x3, #0x11 */
  (void)arc_sub64(c, ARC_X_R(c, 3), UINT64_C(17));
  /* dc290: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* dc294: mov x1, x2 */
  ARC_X_W(c, 1, ARC_X_R(c, 2));
  /* dc298: b.lo #0xdc2a4 */
  if (ARC_COND(c, 3)) goto L_dc2a4;
  /* dc29c: mov x2, x3 */
  ARC_X_W(c, 2, ARC_X_R(c, 3));
  /* dc2a0: b #0x142950 */
  fn1_142950(c); return;
L_dc2a4:;
  /* dc2a4: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_e0e28(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038849064));
  /* e0e28: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e0e2c: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e0e30: str x25, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 25));
  /* e0e34: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e0e38: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e0e3c: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e0e40: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e0e44: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e0e48: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e0e4c: mov w19, w1 */
  ARC_W_W(c, 19, ARC_W_R(c, 1));
  /* e0e50: tbnz w8, #0, #0xe0e6c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_e0e6c;
  /* e0e54: cmp w8, #0x2c */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(44));
  /* e0e58: b.ne #0xe0ec4 */
  if (ARC_COND(c, 1)) goto L_e0ec4;
  /* e0e5c: add x21, x20, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 20) + UINT64_C(1)));
  /* e0e60: mov w23, #0x30 */
  ARC_W_W(c, 23, UINT64_C(48));
  /* e0e64: mov w8, #0x16 */
  ARC_W_W(c, 8, UINT64_C(22));
  /* e0e68: b #0xe0ebc */
  goto L_e0ebc;
L_e0e6c:;
  /* e0e6c: ldp x8, x22, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 22, arc_ld64(_pa + 8));
  }
  /* e0e70: and x24, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* e0e74: sub x8, x24, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) - UINT64_C(1)));
  /* e0e78: cmp x22, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* e0e7c: b.ne #0xe0f18 */
  if (ARC_COND(c, 1)) goto L_e0f18;
  /* e0e80: cmn x24, #8 */
  (void)arc_add64(c, ARC_X_R(c, 24), UINT64_C(8), 0);
  /* e0e84: b.eq #0xe0f4c */
  if (ARC_COND(c, 0)) goto L_e0f4c;
  /* e0e88: mov x9, #-0xe */
  ARC_X_W(c, 9, UINT64_C(18446744073709551602));
  /* e0e8c: ldr x21, [x20, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* e0e90: movk x9, #0x7fff, lsl #48 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(281474976710655)) | UINT64_C(9223090561878065152)));
  /* e0e94: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* e0e98: b.hi #0xe0ed8 */
  if (ARC_COND(c, 8)) goto L_e0ed8;
  /* e0e9c: lsl x9, x8, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(1)) & 63)));
  /* e0ea0: mov w10, #0x1a */
  ARC_W_W(c, 10, UINT64_C(26));
  /* e0ea4: orr x9, x9, #7 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) | UINT64_C(7)));
  /* e0ea8: cmp x9, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(23));
  /* e0eac: csinc x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 9)) + 1)));
  /* e0eb0: cmp x8, #0xc */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(12));
  /* e0eb4: mov w10, #0x17 */
  ARC_W_W(c, 10, UINT64_C(23));
  /* e0eb8: csel x23, x10, x9, lo */
  ARC_X_W(c, 23, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
L_e0ebc:;
  /* e0ebc: add x24, x8, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* e0ec0: b #0xe0edc */
  goto L_e0edc;
L_e0ec4:;
  /* e0ec4: lsr x22, x8, #1 */
  ARC_X_W(c, 22, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e0ec8: add w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(2)));
  /* e0ecc: strb w8, [x20], #1 */
  { const uint64_t _a = ARC_X_R(c, 20);
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* e0ed0: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* e0ed4: b #0xe0f24 */
  goto L_e0f24;
L_e0ed8:;
  /* e0ed8: mov x23, #-9 */
  ARC_X_W(c, 23, UINT64_C(18446744073709551607));
L_e0edc:;
  /* e0edc: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* e0ee0: mov x22, x8 */
  ARC_X_W(c, 22, ARC_X_R(c, 8));
  /* e0ee4: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(921320));
  fn1_1428f0(c);
  /* e0ee8: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* e0eec: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* e0ef0: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* e0ef4: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(921336));
  fn1_1449f0(c);
  /* e0ef8: cmp x24, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 24), UINT64_C(23));
  /* e0efc: b.eq #0xe0f0c */
  if (ARC_COND(c, 0)) goto L_e0f0c;
  /* e0f00: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e0f04: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* e0f08: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(921356));
  fn1_142608(c);
L_e0f0c:;
  /* e0f0c: orr x8, x23, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) | UINT64_C(1)));
  /* e0f10: str x25, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 25));
  /* e0f14: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
L_e0f18:;
  /* e0f18: ldr x8, [x20, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* e0f1c: add x9, x22, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* e0f20: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
L_e0f24:;
  /* e0f24: add x8, x8, x22 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 22)));
  /* e0f28: strb w19, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 19));
  /* e0f2c: strb wzr, [x8, #1] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(1)), ARC_W_R(c, 31));
  /* e0f30: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e0f34: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* e0f38: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e0f3c: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e0f40: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e0f44: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e0f48: ret  */
  return;
L_e0f4c:;
  /* e0f4c: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(921424));
  fn1_d7d54(c);
}

void fn1_e394c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038860108));
  /* e394c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e3950: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e3954: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* e3958: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e395c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e3960: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e3964: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* e3968: mov x0, x3 */
  ARC_X_W(c, 0, ARC_X_R(c, 3));
  /* e396c: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* e3970: mov x23, x2 */
  ARC_X_W(c, 23, ARC_X_R(c, 2));
  /* e3974: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* e3978: bl #0x142e30 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(932220));
  fn1_142e30(c);
  /* e397c: ldrb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* e3980: ldr x9, [x22, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* e3984: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e3988: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e398c: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e3990: cmn x0, #1 */
  (void)arc_add64(c, ARC_X_R(c, 0), UINT64_C(1), 0);
  /* e3994: b.eq #0xe3a00 */
  if (ARC_COND(c, 0)) goto L_e3a00;
  /* e3998: subs x9, x9, x21 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 21)));
  /* e399c: b.lo #0xe3a00 */
  if (ARC_COND(c, 3)) goto L_e3a00;
  /* e39a0: cmp x9, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 23));
  /* e39a4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e39a8: csel x23, x9, x23, lo */
  ARC_X_W(c, 23, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 23)));
  /* e39ac: cmp x0, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 23));
  /* e39b0: csel x2, x0, x23, lo */
  ARC_X_W(c, 2, (ARC_COND(c, 3) ? (ARC_X_R(c, 0)) : ARC_X_R(c, 23)));
  /* e39b4: cbz x2, #0xe39dc */
  if ((ARC_X_R(c, 2)) == 0) goto L_e39dc;
  /* e39b8: ldr x9, [x22, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* e39bc: add x10, x22, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 22) + UINT64_C(4)));
  /* e39c0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e39c4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* e39c8: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e39cc: add x0, x8, x21, lsl #2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 21)) << 2)));
  /* e39d0: bl #0x142e60 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(932308));
  fn1_142e60(c);
  /* e39d4: cbz w0, #0xe39dc */
  if ((ARC_W_R(c, 0)) == 0) goto L_e39dc;
  /* e39d8: b #0xe39e8 */
  goto L_e39e8;
L_e39dc:;
  /* e39dc: cmp x23, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 20));
  /* e39e0: cset w8, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? 1 : 0));
  /* e39e4: csinv w0, w8, wzr, hs */
  ARC_W_W(c, 0, (ARC_COND(c, 2) ? (ARC_W_R(c, 8)) : (~(uint32_t)(ARC_W_R(c, 31)))));
L_e39e8:;
  /* e39e8: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e39ec: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* e39f0: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e39f4: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e39f8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e39fc: ret  */
  return;
L_e3a00:;
  /* e3a00: bl #0xe1f80 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(932356));
  fn1_e1f80(c);
}

void fn1_e7dd4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038877652));
  /* e7dd4: bti c */
  /* bti: no architectural effect here */
  /* e7dd8: ldr x9, [x0, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* e7ddc: ldr w1, [x0] */
  ARC_W_W(c, 1, arc_ld32(ARC_X_R(c, 0)));
  /* e7de0: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* e7de4: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
  /* e7de8: ldr x16, [x10, #0x30] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 10) + INT64_C(48))));
  /* e7dec: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_ea810(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038888464));
  /* ea810: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ea814: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* ea818: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ea81c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ea820: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* ea824: ldr x20, [x0] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 0)));
  /* ea828: cbz x20, #0xea8c8 */
  if ((ARC_X_R(c, 20)) == 0) goto L_ea8c8;
  /* ea82c: ldr x19, [x1] */
  ARC_X_W(c, 19, arc_ld64(ARC_X_R(c, 1)));
  /* ea830: str x19, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 19));
  /* ea834: cbz x19, #0xea844 */
  if ((ARC_X_R(c, 19)) == 0) goto L_ea844;
  /* ea838: sub x1, x19, #0x78 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) - UINT64_C(120)));
  /* ea83c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ea840: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960580));
  fn1_bd950(c);
L_ea844:;
  /* ea844: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* ea848: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ea84c: bl #0x143190 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960592));
  fn1_143190(c);
  /* ea850: cbz x19, #0xea8a0 */
  if ((ARC_X_R(c, 19)) == 0) goto L_ea8a0;
  /* ea854: sub x1, x19, #0x78 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) - UINT64_C(120)));
  /* ea858: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ea85c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960608));
  fn1_bd950(c);
  /* ea860: cmp x0, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(1));
  /* ea864: b.ne #0xea8a0 */
  if (ARC_COND(c, 1)) goto L_ea8a0;
  /* ea868: ldur x8, [x19, #-0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(-104))));
  /* ea86c: cbz x8, #0xea878 */
  if ((ARC_X_R(c, 8)) == 0) goto L_ea878;
  /* ea870: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ea874: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960632));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ea878:;
  /* ea878: sub x0, x19, #0x80 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) - UINT64_C(128)));
  /* ea87c: nop  */
  /* nop: no architectural effect here */
  /* ea880: adr x8, #0x1576e0 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1406688)));
  /* ea884: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* ea888: b.lo #0xea8b4 */
  if (ARC_COND(c, 3)) goto L_ea8b4;
  /* ea88c: adrp x8, #0x157000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404928)));
  /* ea890: add x8, x8, #0x8e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2272)));
  /* ea894: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* ea898: b.hs #0xea8b4 */
  if (ARC_COND(c, 2)) goto L_ea8b4;
  /* ea89c: bl #0xa2664 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960672));
  fn1_a2664(c);
L_ea8a0:;
  /* ea8a0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ea8a4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ea8a8: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* ea8ac: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ea8b0: ret  */
  return;
L_ea8b4:;
  /* ea8b4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ea8b8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ea8bc: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* ea8c0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ea8c4: b #0x142800 */
  fn1_142800(c); return;
L_ea8c8:;
  /* ea8c8: mov w0, #3 */
  ARC_W_W(c, 0, UINT64_C(3));
  /* ea8cc: bl #0xe9be0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960720));
  fn1_e9be0(c);
  /* ea8d0: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960724));
  fn1_a1454(c);
  /* ea8d4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960728));
  fn1_a1454(c);
  /* ea8d8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ea8dc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* ea8e0: bl #0x142aa0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960740));
  fn1_142aa0(c);
  /* ea8e4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ea8e8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960748));
  fn1_9cc20(c);
}

void fn1_ebfec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038894572));
  /* ebfec: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ebff0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ebff4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* ebff8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ebffc: mov x3, x1 */
  ARC_X_W(c, 3, ARC_X_R(c, 1));
  /* ec000: ldp x1, x2, [x2] */
  { const uint64_t _pa = ARC_X_R(c, 2);
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* ec004: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ec008: bl #0x143010 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(966668));
  fn1_143010(c);
  /* ec00c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* ec010: ldr x8, [x8, #0xa80] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2688))));
  /* ec014: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* ec018: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* ec01c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* ec020: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ec024: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ec028: ret  */
  return;
}

void fn1_eda40(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038901312));
  /* eda40: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eda44: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eda48: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* eda4c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eda50: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* eda54: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* eda58: ldr x8, [x8, #0xab0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2736))));
  /* eda5c: str xzr, [x0, #0x40] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(64)), ARC_X_R(c, 31));
  /* eda60: add x9, x8, #0x40 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* eda64: add x8, x8, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* eda68: str x9, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* eda6c: stp x8, xzr, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* eda70: bl #0x1433d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(973428));
  fn1_1433d0(c);
  /* eda74: mov w8, #-1 */
  ARC_W_W(c, 8, UINT64_C(18446744073709551615));
  /* eda78: str xzr, [x19, #0x98] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(152)), ARC_X_R(c, 31));
  /* eda7c: str w8, [x19, #0xa0] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(160)), ARC_W_R(c, 8));
  /* eda80: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* eda84: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eda88: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eda8c: ret  */
  return;
}

void fn1_f2438(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038920248));
  /* f2438: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f243c: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* f2440: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f2444: stp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* f2448: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* f244c: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f2450: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f2454: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* f2458: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* f245c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f2460: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f2464: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f2468: bl #0x143610 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(992364));
  fn1_143610(c);
  /* f246c: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* f2470: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f2474: b.ne #0xf25b4 */
  if (ARC_COND(c, 1)) goto L_f25b4;
  /* f2478: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f247c: nop  */
  /* nop: no architectural effect here */
  /* f2480: adr x26, #0x15dc40 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f2484: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f2488: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f248c: ldr x22, [x8, #0x30] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f2490: cmp x22, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 26));
  /* f2494: stur x22, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 22));
  /* f2498: b.eq #0xf24a8 */
  if (ARC_COND(c, 0)) goto L_f24a8;
  /* f249c: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f24a0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f24a4: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(992424));
  fn1_db2e0(c);
L_f24a8:;
  /* f24a8: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f24ac: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* f24b0: ldr x1, [x1, #0xb50] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2896))));
  /* f24b4: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(992440));
  fn1_143748(c);
  /* f24b8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* f24bc: cmp x22, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 26));
  /* f24c0: b.eq #0xf24e4 */
  if (ARC_COND(c, 0)) goto L_f24e4;
  /* f24c4: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f24c8: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f24cc: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(992464));
  fn1_bd950(c);
  /* f24d0: cbnz x0, #0xf24e4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f24e4;
  /* f24d4: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f24d8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* f24dc: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f24e0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(992484));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f24e4:;
  /* f24e4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f24e8: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f24ec: add x22, x19, x8 */
  ARC_X_W(c, 22, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f24f0: ldr w3, [x22, #0x90] */
  ARC_W_W(c, 3, arc_ld32((ARC_X_R(c, 22) + INT64_C(144))));
  /* f24f4: ldr x23, [x22, #0x28] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 22) + INT64_C(40))));
  /* f24f8: cmn w3, #1 */
  (void)arc_add32(c, ARC_W_R(c, 3), UINT64_C(1), 0);
  /* f24fc: b.ne #0xf2570 */
  if (ARC_COND(c, 1)) goto L_f2570;
  /* f2500: ldr x24, [x22, #0x30] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 22) + INT64_C(48))));
  /* f2504: cmp x24, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 26));
  /* f2508: stur x24, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 24));
  /* f250c: b.eq #0xf251c */
  if (ARC_COND(c, 0)) goto L_f251c;
  /* f2510: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f2514: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f2518: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(992540));
  fn1_db2e0(c);
L_f251c:;
  /* f251c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f2520: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* f2524: ldr x1, [x1, #0xb40] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2880))));
  /* f2528: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(992556));
  fn1_143748(c);
  /* f252c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f2530: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* f2534: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* f2538: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(992572));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f253c: mov w25, w0 */
  ARC_W_W(c, 25, ARC_W_R(c, 0));
  /* f2540: cmp x24, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 26));
  /* f2544: b.eq #0xf2568 */
  if (ARC_COND(c, 0)) goto L_f2568;
  /* f2548: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f254c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f2550: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(992596));
  fn1_bd950(c);
  /* f2554: cbnz x0, #0xf2568 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f2568;
  /* f2558: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f255c: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f2560: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f2564: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(992616));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f2568:;
  /* f2568: and w3, w25, #0xff */
  ARC_W_W(c, 3, (ARC_W_R(c, 25) & UINT64_C(255)));
  /* f256c: str w3, [x22, #0x90] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(144)), ARC_W_R(c, 3));
L_f2570:;
  /* f2570: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* f2574: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f2578: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f257c: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* f2580: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* f2584: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* f2588: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(992652));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f258c: cbnz x0, #0xf25b4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f25b4;
  /* f2590: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f2594: mov w10, #5 */
  ARC_W_W(c, 10, UINT64_C(5));
  /* f2598: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f259c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f25a0: ldp w9, w11, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* f25a4: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* f25a8: tst w11, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & ARC_W_R(c, 9)));
  /* f25ac: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f25b0: b.ne #0xf25e0 */
  if (ARC_COND(c, 1)) goto L_f25e0;
L_f25b4:;
  /* f25b4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f25b8: bl #0x143628 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(992700));
  fn1_143628(c);
L_f25bc:;
  /* f25bc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f25c0: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f25c4: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f25c8: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* f25cc: ldp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* f25d0: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f25d4: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* f25d8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f25dc: ret  */
  return;
L_f25e0:;
  /* f25e0: nop  */
  /* nop: no architectural effect here */
  /* f25e4: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f25e8: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(992748));
  fn1_ec720(c);
  /* f25ec: b #0xf2618 */
  goto L_f2618;
  /* f25f0: cmp x24, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 26));
  /* f25f4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f25f8: b.eq #0xf264c */
  if (ARC_COND(c, 0)) goto L_f264c;
  /* f25fc: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f2600: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f2604: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(992776));
  fn1_bd950(c);
  /* f2608: cbnz x0, #0xf264c */
  if ((ARC_X_R(c, 0)) != 0) goto L_f264c;
  /* f260c: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f2610: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f2614: b #0xf2644 */
  goto L_f2644;
L_f2618:;
  /* f2618: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f261c: b #0xf264c */
  goto L_f264c;
  /* f2620: cmp x22, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 26));
  /* f2624: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f2628: b.eq #0xf264c */
  if (ARC_COND(c, 0)) goto L_f264c;
  /* f262c: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f2630: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f2634: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(992824));
  fn1_bd950(c);
  /* f2638: cbnz x0, #0xf264c */
  if ((ARC_X_R(c, 0)) != 0) goto L_f264c;
  /* f263c: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f2640: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
L_f2644:;
  /* f2644: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f2648: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(992844));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f264c:;
  /* f264c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f2650: bl #0x143628 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(992852));
  fn1_143628(c);
  /* f2654: b #0xf265c */
  goto L_f265c;
  /* f2658: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_f265c:;
  /* f265c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f2660: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(992868));
  fn1_142548(c);
  /* f2664: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f2668: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f266c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f2670: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* f2674: ldrb w10, [x8, #0x24] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f2678: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f267c: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f2680: tbnz w10, #0, #0xf268c */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_f268c;
  /* f2684: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(992904));
  fn1_142980(c);
  /* f2688: b #0xf25bc */
  goto L_f25bc;
L_f268c:;
  /* f268c: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(992912));
  fn1_1429b0(c);
  /* f2690: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f2694: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(992920));
  fn1_142980(c);
  /* f2698: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f269c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(992928));
  fn1_9cc20(c);
  /* f26a0: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(992932));
  fn1_a1454(c);
}

void fn1_f447c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038928508));
  /* f447c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f4480: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f4484: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* f4488: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f448c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f4490: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f4494: ldr x8, [x8, #0xad0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2768))));
  /* f4498: str xzr, [x0, #0x40] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(64)), ARC_X_R(c, 31));
  /* f449c: add x9, x8, #0x40 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* f44a0: add x8, x8, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* f44a4: str x9, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* f44a8: stp x8, xzr, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* f44ac: bl #0x1433d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1000624));
  fn1_1433d0(c);
  /* f44b0: mov w8, #-1 */
  ARC_W_W(c, 8, UINT64_C(18446744073709551615));
  /* f44b4: str xzr, [x19, #0x98] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(152)), ARC_X_R(c, 31));
  /* f44b8: str w8, [x19, #0xa0] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(160)), ARC_W_R(c, 8));
  /* f44bc: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f44c0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f44c4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f44c8: ret  */
  return;
}

void fn1_f8e98(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038947480));
  /* f8e98: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f8e9c: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* f8ea0: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f8ea4: str x25, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 25));
  /* f8ea8: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* f8eac: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f8eb0: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f8eb4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f8eb8: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* f8ebc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f8ec0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f8ec4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f8ec8: bl #0x143688 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1019596));
  fn1_143688(c);
  /* f8ecc: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* f8ed0: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f8ed4: b.ne #0xf901c */
  if (ARC_COND(c, 1)) goto L_f901c;
  /* f8ed8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f8edc: nop  */
  /* nop: no architectural effect here */
  /* f8ee0: adr x25, #0x15dc40 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f8ee4: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f8ee8: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f8eec: ldr x22, [x8, #0x30] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f8ef0: cmp x22, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 25));
  /* f8ef4: str x22, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 22));
  /* f8ef8: b.eq #0xf8f08 */
  if (ARC_COND(c, 0)) goto L_f8f08;
  /* f8efc: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f8f00: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f8f04: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1019656));
  fn1_db2e0(c);
L_f8f08:;
  /* f8f08: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f8f0c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* f8f10: ldr x1, [x1, #0xb68] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2920))));
  /* f8f14: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1019672));
  fn1_143748(c);
  /* f8f18: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* f8f1c: cmp x22, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 25));
  /* f8f20: b.eq #0xf8f44 */
  if (ARC_COND(c, 0)) goto L_f8f44;
  /* f8f24: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f8f28: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f8f2c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1019696));
  fn1_bd950(c);
  /* f8f30: cbnz x0, #0xf8f44 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f8f44;
  /* f8f34: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f8f38: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* f8f3c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f8f40: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1019716));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f8f44:;
  /* f8f44: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f8f48: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f8f4c: add x22, x19, x8 */
  ARC_X_W(c, 22, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f8f50: ldr w3, [x22, #0x90] */
  ARC_W_W(c, 3, arc_ld32((ARC_X_R(c, 22) + INT64_C(144))));
  /* f8f54: ldr x23, [x22, #0x28] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 22) + INT64_C(40))));
  /* f8f58: cmn w3, #1 */
  (void)arc_add32(c, ARC_W_R(c, 3), UINT64_C(1), 0);
  /* f8f5c: b.ne #0xf8fd8 */
  if (ARC_COND(c, 1)) goto L_f8fd8;
  /* f8f60: ldr x24, [x22, #0x30] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 22) + INT64_C(48))));
  /* f8f64: cmp x24, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 25));
  /* f8f68: str x24, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 24));
  /* f8f6c: b.eq #0xf8f7c */
  if (ARC_COND(c, 0)) goto L_f8f7c;
  /* f8f70: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f8f74: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f8f78: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1019772));
  fn1_db2e0(c);
L_f8f7c:;
  /* f8f7c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f8f80: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* f8f84: ldr x1, [x1, #0xb58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2904))));
  /* f8f88: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1019788));
  fn1_143748(c);
  /* f8f8c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f8f90: ldr x8, [x8, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* f8f94: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* f8f98: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1019804));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f8f9c: mov w3, w0 */
  ARC_W_W(c, 3, ARC_W_R(c, 0));
  /* f8fa0: cmp x24, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 25));
  /* f8fa4: b.eq #0xf8fd4 */
  if (ARC_COND(c, 0)) goto L_f8fd4;
  /* f8fa8: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f8fac: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f8fb0: mov w25, w3 */
  ARC_W_W(c, 25, ARC_W_R(c, 3));
  /* f8fb4: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1019832));
  fn1_bd950(c);
  /* f8fb8: mov w3, w25 */
  ARC_W_W(c, 3, ARC_W_R(c, 25));
  /* f8fbc: cbnz x0, #0xf8fd4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f8fd4;
  /* f8fc0: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f8fc4: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f8fc8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f8fcc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1019856));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f8fd0: mov w3, w25 */
  ARC_W_W(c, 3, ARC_W_R(c, 25));
L_f8fd4:;
  /* f8fd4: str w3, [x22, #0x90] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(144)), ARC_W_R(c, 3));
L_f8fd8:;
  /* f8fd8: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* f8fdc: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f8fe0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f8fe4: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* f8fe8: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* f8fec: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* f8ff0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1019892));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f8ff4: cbnz x0, #0xf901c */
  if ((ARC_X_R(c, 0)) != 0) goto L_f901c;
  /* f8ff8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f8ffc: mov w10, #5 */
  ARC_W_W(c, 10, UINT64_C(5));
  /* f9000: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f9004: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f9008: ldp w9, w11, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* f900c: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* f9010: tst w11, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & ARC_W_R(c, 9)));
  /* f9014: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f9018: b.ne #0xf9048 */
  if (ARC_COND(c, 1)) goto L_f9048;
L_f901c:;
  /* f901c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f9020: bl #0x1436a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1019940));
  fn1_1436a0(c);
L_f9024:;
  /* f9024: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f9028: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f902c: ldr x25, [sp, #0x20] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(32))));
  /* f9030: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f9034: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* f9038: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f903c: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* f9040: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f9044: ret  */
  return;
L_f9048:;
  /* f9048: nop  */
  /* nop: no architectural effect here */
  /* f904c: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f9050: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1019988));
  fn1_ec720(c);
  /* f9054: b #0xf9080 */
  goto L_f9080;
  /* f9058: cmp x24, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 25));
  /* f905c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f9060: b.eq #0xf90b4 */
  if (ARC_COND(c, 0)) goto L_f90b4;
  /* f9064: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f9068: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f906c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1020016));
  fn1_bd950(c);
  /* f9070: cbnz x0, #0xf90b4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f90b4;
  /* f9074: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f9078: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f907c: b #0xf90ac */
  goto L_f90ac;
L_f9080:;
  /* f9080: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f9084: b #0xf90b4 */
  goto L_f90b4;
  /* f9088: cmp x22, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 25));
  /* f908c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f9090: b.eq #0xf90b4 */
  if (ARC_COND(c, 0)) goto L_f90b4;
  /* f9094: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f9098: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f909c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1020064));
  fn1_bd950(c);
  /* f90a0: cbnz x0, #0xf90b4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f90b4;
  /* f90a4: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f90a8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
L_f90ac:;
  /* f90ac: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f90b0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1020084));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f90b4:;
  /* f90b4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f90b8: bl #0x1436a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1020092));
  fn1_1436a0(c);
  /* f90bc: b #0xf90c4 */
  goto L_f90c4;
  /* f90c0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_f90c4:;
  /* f90c4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f90c8: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1020108));
  fn1_142548(c);
  /* f90cc: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f90d0: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f90d4: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f90d8: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* f90dc: ldrb w10, [x8, #0x24] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f90e0: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f90e4: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f90e8: tbnz w10, #0, #0xf90f4 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_f90f4;
  /* f90ec: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1020144));
  fn1_142980(c);
  /* f90f0: b #0xf9024 */
  goto L_f9024;
L_f90f4:;
  /* f90f4: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1020152));
  fn1_1429b0(c);
  /* f90f8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f90fc: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1020160));
  fn1_142980(c);
  /* f9100: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f9104: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1020168));
  fn1_9cc20(c);
  /* f9108: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1020172));
  fn1_a1454(c);
}

void fn1_fd7f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038966264));
  /* fd7f8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fd7fc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fd800: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* fd804: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fd808: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fd80c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fd810: ldr x8, [x8, #0xb18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2840))));
  /* fd814: add x9, x8, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* fd818: add x8, x8, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* fd81c: str x9, [x0], #0x10 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* fd820: str x8, [x19, #0xb8]! */
  { const uint64_t _a = (ARC_X_R(c, 19) + INT64_C(184));
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(184));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* fd824: bl #0x1436d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1038376));
  fn1_1436d0(c);
  /* fd828: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fd82c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* fd830: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fd834: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fd838: b #0x1433b8 */
  fn1_1433b8(c); return;
}

void fn1_105334(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038997812));
  /* 105334: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 105338: sub sp, sp, #0x1e0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(480)));
  /* 10533c: stp x29, x30, [sp, #0x180] */
  { const uint64_t _pa = ((c)->sp + INT64_C(384));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 105340: stp x28, x27, [sp, #0x190] */
  { const uint64_t _pa = ((c)->sp + INT64_C(400));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 105344: stp x26, x25, [sp, #0x1a0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(416));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 105348: stp x24, x23, [sp, #0x1b0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(432));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 10534c: stp x22, x21, [sp, #0x1c0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(448));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 105350: stp x20, x19, [sp, #0x1d0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(464));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 105354: add x29, sp, #0x180 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(384)));
  /* 105358: ldr w8, [x3, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 3) + INT64_C(8))));
  /* 10535c: mov w9, #0x4a */
  ARC_W_W(c, 9, UINT64_C(74));
  /* 105360: mov x24, x3 */
  ARC_X_W(c, 24, ARC_X_R(c, 3));
  /* 105364: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 105368: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 10536c: sub x26, x29, #0xb0 */
  ARC_X_W(c, 26, (ARC_X_R(c, 29) - UINT64_C(176)));
  /* 105370: ands w8, w8, w9 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 9));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 8, _r); }
  /* 105374: str x5, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 5));
  /* 105378: b.eq #0x10539c */
  if (ARC_COND(c, 0)) goto L_10539c;
  /* 10537c: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* 105380: b.eq #0x105394 */
  if (ARC_COND(c, 0)) goto L_105394;
  /* 105384: cmp w8, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(8));
  /* 105388: b.ne #0x1053a4 */
  if (ARC_COND(c, 1)) goto L_1053a4;
  /* 10538c: mov w23, #0x10 */
  ARC_W_W(c, 23, UINT64_C(16));
  /* 105390: b #0x1053a8 */
  goto L_1053a8;
L_105394:;
  /* 105394: mov w23, #8 */
  ARC_W_W(c, 23, UINT64_C(8));
  /* 105398: b #0x1053a8 */
  goto L_1053a8;
L_10539c:;
  /* 10539c: mov w23, wzr */
  ARC_W_W(c, 23, ARC_W_R(c, 31));
  /* 1053a0: b #0x1053a8 */
  goto L_1053a8;
L_1053a4:;
  /* 1053a4: mov w23, #0xa */
  ARC_W_W(c, 23, UINT64_C(10));
L_1053a8:;
  /* 1053a8: sub x1, x29, #0x74 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(116)));
  /* 1053ac: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 1053b0: str x4, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 4));
  /* 1053b4: sub x27, x29, #0x74 */
  ARC_X_W(c, 27, (ARC_X_R(c, 29) - UINT64_C(116)));
  /* 1053b8: bl #0x136534 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1070012));
  fn1_136534(c);
  /* 1053bc: sub x8, x29, #0x90 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(144)));
  /* 1053c0: sub x1, x29, #0xc */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(12)));
  /* 1053c4: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 1053c8: bl #0x1366c4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1070028));
  fn1_1366c4(c);
  /* 1053cc: stp xzr, xzr, [x26, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 26) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1053d0: str xzr, [x26, #0x18] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(24)), ARC_X_R(c, 31));
  /* 1053d4: sub x0, x29, #0xa8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(168)));
  /* 1053d8: mov w1, #0x16 */
  ARC_W_W(c, 1, UINT64_C(22));
  /* 1053dc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1053e0: sub x20, x29, #0xa8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 29) - UINT64_C(168)));
  /* 1053e4: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1070056));
  fn1_142d10(c);
  /* 1053e8: ldurb w8, [x29, #-0xa8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-168))));
  /* 1053ec: ldr x9, [x26, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 1053f0: add x10, sp, #0x30 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(48)));
  /* 1053f4: orr x28, x20, #1 */
  ARC_X_W(c, 28, (ARC_X_R(c, 20) | UINT64_C(1)));
  /* 1053f8: add x22, sp, #0x28 */
  ARC_X_W(c, 22, ((c)->sp + UINT64_C(40)));
  /* 1053fc: str x10, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 10));
  /* 105400: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 105404: str wzr, [sp, #0x24] */
  arc_st32(((c)->sp + INT64_C(36)), ARC_W_R(c, 31));
  /* 105408: csinc x24, x9, x20, ne */
  ARC_X_W(c, 24, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 20)) + 1)));
  /* 10540c: mov w20, #0x16 */
  ARC_W_W(c, 20, UINT64_C(22));
  /* 105410: str x24, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 24));
  /* 105414: b #0x105420 */
  goto L_105420;
L_105418:;
  /* 105418: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 10541c: str x8, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 8));
L_105420:;
  /* 105420: cbz x19, #0x105438 */
  if ((ARC_X_R(c, 19)) == 0) goto L_105438;
  /* 105424: ldp x8, x9, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 105428: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 10542c: b.eq #0x105444 */
  if (ARC_COND(c, 0)) goto L_105444;
  /* 105430: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 105434: b #0x105454 */
  goto L_105454;
L_105438:;
  /* 105438: cbz x21, #0x1055f0 */
  if ((ARC_X_R(c, 21)) == 0) goto L_1055f0;
  /* 10543c: mov w25, #1 */
  ARC_W_W(c, 25, UINT64_C(1));
  /* 105440: b #0x105468 */
  goto L_105468;
L_105444:;
  /* 105444: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 105448: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 10544c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 105450: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1070164));
  arc_dispatch(c, ARC_X_R(c, 8));
L_105454:;
  /* 105454: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 105458: cset w25, eq */
  ARC_W_W(c, 25, (ARC_COND(c, 0) ? 1 : 0));
  /* 10545c: csel x8, xzr, x19, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 19)));
  /* 105460: cbz x21, #0x1054a4 */
  if ((ARC_X_R(c, 21)) == 0) goto L_1054a4;
  /* 105464: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
L_105468:;
  /* 105468: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 10546c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 105470: b.eq #0x10547c */
  if (ARC_COND(c, 0)) goto L_10547c;
  /* 105474: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 105478: b #0x10548c */
  goto L_10548c;
L_10547c:;
  /* 10547c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 105480: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 105484: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 105488: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1070220));
  arc_dispatch(c, ARC_X_R(c, 8));
L_10548c:;
  /* 10548c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 105490: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 105494: csel x21, xzr, x21, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 21)));
  /* 105498: cmp w25, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 25), ARC_W_R(c, 8));
  /* 10549c: b.ne #0x1054ac */
  if (ARC_COND(c, 1)) goto L_1054ac;
  /* 1054a0: b #0x1055fc */
  goto L_1055fc;
L_1054a4:;
  /* 1054a4: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1054a8: b.eq #0x1055f8 */
  if (ARC_COND(c, 0)) goto L_1055f8;
L_1054ac:;
  /* 1054ac: ldurb w8, [x29, #-0xa8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-168))));
  /* 1054b0: ldr x9, [x26, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(16))));
  /* 1054b4: ldr x11, [x26] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 26)));
  /* 1054b8: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 1054bc: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1054c0: csel x25, x10, x9, eq */
  ARC_X_W(c, 25, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 1054c4: add x9, x24, x25 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + ARC_X_R(c, 25)));
  /* 1054c8: cmp x11, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 9));
  /* 1054cc: b.ne #0x105584 */
  if (ARC_COND(c, 1)) goto L_105584;
  /* 1054d0: cmp x25, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 25), UINT64_C(1));
  /* 1054d4: b.lt #0x1054ec */
  if (ARC_COND(c, 11)) goto L_1054ec;
  /* 1054d8: sub x0, x29, #0xa8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(168)));
  /* 1054dc: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 1054e0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1054e4: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1070312));
  fn1_142d10(c);
  /* 1054e8: b #0x105510 */
  goto L_105510;
L_1054ec:;
  /* 1054ec: lsl x9, x25, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 25)) << ((UINT64_C(1)) & 63)));
  /* 1054f0: tbnz w8, #0, #0x105504 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_105504;
  /* 1054f4: lsl w8, w9, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 9)) << ((UINT64_C(1)) & 31)));
  /* 1054f8: sturb w8, [x29, #-0xa8] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-168)), ARC_W_R(c, 8));
  /* 1054fc: mov x8, x28 */
  ARC_X_W(c, 8, ARC_X_R(c, 28));
  /* 105500: b #0x10550c */
  goto L_10550c;
L_105504:;
  /* 105504: ldr x8, [x26, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 105508: str x9, [x26, #0x10] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(16)), ARC_X_R(c, 9));
L_10550c:;
  /* 10550c: strb wzr, [x8, x9] */
  arc_st8((ARC_X_R(c, 8) + ARC_X_R(c, 9)), ARC_W_R(c, 31));
L_105510:;
  /* 105510: ldp x9, x10, [x26, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 26) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 105514: ldurb w8, [x29, #-0xa8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-168))));
  /* 105518: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 10551c: and x11, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 105520: ubfx x12, x9, #1, #7 */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 9)) >> 1) & UINT64_C(127)));
  /* 105524: sub x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* 105528: csel x8, x20, x11, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 20)) : ARC_X_R(c, 11)));
  /* 10552c: tst x9, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(1)));
  /* 105530: csel x10, x12, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* 105534: subs x1, x8, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10)));
  /* 105538: b.ls #0x10554c */
  if (ARC_COND(c, 9)) goto L_10554c;
  /* 10553c: sub x0, x29, #0xa8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(168)));
  /* 105540: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 105544: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1070408));
  fn1_142d10(c);
  /* 105548: b #0x10556c */
  goto L_10556c;
L_10554c:;
  /* 10554c: tbnz w9, #0, #0x105560 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_105560;
  /* 105550: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* 105554: sturb w9, [x29, #-0xa8] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-168)), ARC_W_R(c, 9));
  /* 105558: mov x9, x28 */
  ARC_X_W(c, 9, ARC_X_R(c, 28));
  /* 10555c: b #0x105568 */
  goto L_105568;
L_105560:;
  /* 105560: ldr x9, [x26, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 105564: str x8, [x26, #0x10] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(16)), ARC_X_R(c, 8));
L_105568:;
  /* 105568: strb wzr, [x9, x8] */
  arc_st8((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_W_R(c, 31));
L_10556c:;
  /* 10556c: ldurb w8, [x29, #-0xa8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-168))));
  /* 105570: ldr x9, [x26, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 105574: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 105578: csel x24, x28, x9, eq */
  ARC_X_W(c, 24, (ARC_COND(c, 0) ? (ARC_X_R(c, 28)) : ARC_X_R(c, 9)));
  /* 10557c: add x8, x24, x25 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + ARC_X_R(c, 25)));
  /* 105580: str x8, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 8));
L_105584:;
  /* 105584: ldp x8, x9, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 105588: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 10558c: b.eq #0x105598 */
  if (ARC_COND(c, 0)) goto L_105598;
  /* 105590: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 105594: b #0x1055a8 */
  goto L_1055a8;
L_105598:;
  /* 105598: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 10559c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1055a0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1055a4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1070504));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1055a8:;
  /* 1055a8: ldur w5, [x29, #-0xc] */
  ARC_W_W(c, 5, arc_ld32((ARC_X_R(c, 29) + INT64_C(-12))));
  /* 1055ac: sub x3, x29, #0xb0 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(176)));
  /* 1055b0: add x4, sp, #0x24 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(36)));
  /* 1055b4: sub x6, x29, #0x90 */
  ARC_X_W(c, 6, (ARC_X_R(c, 29) - UINT64_C(144)));
  /* 1055b8: add x7, sp, #0x30 */
  ARC_X_W(c, 7, ((c)->sp + UINT64_C(48)));
  /* 1055bc: mov w1, w23 */
  ARC_W_W(c, 1, ARC_W_R(c, 23));
  /* 1055c0: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 1055c4: stp x22, x27, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 1055c8: bl #0x143880 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1070540));
  fn1_143880(c);
  /* 1055cc: cbnz w0, #0x1055fc */
  if ((ARC_W_R(c, 0)) != 0) goto L_1055fc;
  /* 1055d0: ldp x8, x9, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1055d4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1055d8: b.ne #0x105418 */
  if (ARC_COND(c, 1)) goto L_105418;
  /* 1055dc: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1055e0: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 1055e4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1055e8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1070572));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1055ec: b #0x105420 */
  goto L_105420;
L_1055f0:;
  /* 1055f0: mov x21, x19 */
  ARC_X_W(c, 21, ARC_X_R(c, 19));
  /* 1055f4: b #0x1055fc */
  goto L_1055fc;
L_1055f8:;
  /* 1055f8: mov x19, x21 */
  ARC_X_W(c, 19, ARC_X_R(c, 21));
L_1055fc:;
  /* 1055fc: ldurb w8, [x29, #-0x90] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 105600: ldr x9, [x26, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(40))));
  /* 105604: ldr x22, [sp, #0x18] */
  ARC_X_W(c, 22, arc_ld64(((c)->sp + INT64_C(24))));
  /* 105608: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 10560c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 105610: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 105614: cbz x8, #0x105638 */
  if ((ARC_X_R(c, 8)) == 0) goto L_105638;
  /* 105618: ldr x8, [sp, #0x28] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(40))));
  /* 10561c: add x9, sp, #0x30 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(48)));
  /* 105620: sub x9, x8, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* 105624: cmp x9, #0x9f */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(159));
  /* 105628: b.gt #0x105638 */
  if (ARC_COND(c, 12)) goto L_105638;
  /* 10562c: ldr w9, [sp, #0x24] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(36))));
  /* 105630: str w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 9));
  }
  /* 105634: str x8, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 8));
L_105638:;
  /* 105638: ldr x1, [x26] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 26)));
  /* 10563c: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 105640: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 105644: mov w3, w23 */
  ARC_W_W(c, 3, ARC_W_R(c, 23));
  /* 105648: bl #0x135ac4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1070668));
  fn1_135ac4(c);
  /* 10564c: ldurb w10, [x29, #-0x90] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 105650: ldr x12, [sp, #0x28] */
  ARC_X_W(c, 12, arc_ld64(((c)->sp + INT64_C(40))));
  /* 105654: add x11, sp, #0x30 */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(48)));
  /* 105658: ldr x8, [x26, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(40))));
  /* 10565c: lsr x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* 105660: ands w13, w10, #1 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 13, _r); }
  /* 105664: sub x11, x12, x11 */
  ARC_X_W(c, 11, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* 105668: csel x8, x9, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 10566c: ldr x9, [sp, #0x10] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(16))));
  /* 105670: cmp x11, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(5));
  /* 105674: str x0, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 0));
  /* 105678: b.lt #0x1057d8 */
  if (ARC_COND(c, 11)) goto L_1057d8;
  /* 10567c: cbz x8, #0x1057d8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1057d8;
  /* 105680: sub x8, x12, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 12) - UINT64_C(4)));
  /* 105684: add x9, sp, #0x30 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(48)));
  /* 105688: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 10568c: cset w11, lo */
  ARC_W_W(c, 11, (ARC_COND(c, 3) ? 1 : 0));
  /* 105690: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* 105694: b.eq #0x105744 */
  if (ARC_COND(c, 0)) goto L_105744;
  /* 105698: cbz w11, #0x105744 */
  if ((ARC_W_R(c, 11)) == 0) goto L_105744;
  /* 10569c: add x10, sp, #0x30 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(48)));
  /* 1056a0: sub x14, x12, #8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) - UINT64_C(8)));
  /* 1056a4: add x11, x10, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 1056a8: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 1056ac: csel x13, x14, x11, hi */
  ARC_X_W(c, 13, (ARC_COND(c, 8) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* 1056b0: sub x13, x13, #4 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(4)));
  /* 1056b4: cmp x13, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 10));
  /* 1056b8: cinc x15, x10, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
  /* 1056bc: cmp x13, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 10));
  /* 1056c0: sub x15, x13, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) - ARC_X_R(c, 15)));
  /* 1056c4: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* 1056c8: cinc x13, x15, ne */
  ARC_X_W(c, 13, (ARC_COND(c, 1) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* 1056cc: cmp x13, #0x13 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(19));
  /* 1056d0: b.lo #0x105718 */
  if (ARC_COND(c, 3)) goto L_105718;
  /* 1056d4: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 1056d8: csel x14, x14, x11, hi */
  ARC_X_W(c, 14, (ARC_COND(c, 8) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* 1056dc: sub x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(4)));
  /* 1056e0: cmp x14, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 10));
  /* 1056e4: cinc x15, x10, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
  /* 1056e8: cmp x14, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 10));
  /* 1056ec: sub x15, x14, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 14) - ARC_X_R(c, 15)));
  /* 1056f0: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* 1056f4: cinc x14, x15, ne */
  ARC_X_W(c, 14, (ARC_COND(c, 1) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* 1056f8: cmp x10, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 12));
  /* 1056fc: b.hs #0x1058c8 */
  if (ARC_COND(c, 2)) goto L_1058c8;
  /* 105700: lsl x14, x14, #2 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(2)) & 63)));
  /* 105704: sub x15, x12, x14 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ARC_X_R(c, 14)));
  /* 105708: add x11, x11, x14 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ARC_X_R(c, 14)));
  /* 10570c: sub x14, x15, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) - UINT64_C(4)));
  /* 105710: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 105714: b.hs #0x1058c8 */
  if (ARC_COND(c, 2)) goto L_1058c8;
L_105718:;
  /* 105718: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
L_10571c:;
  /* 10571c: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
L_105720:;
  /* 105720: ldr w12, [x11] */
  ARC_W_W(c, 12, arc_ld32(ARC_X_R(c, 11)));
  /* 105724: ldur w13, [x10, #-4] */
  ARC_W_W(c, 13, arc_ld32((ARC_X_R(c, 10) + INT64_C(-4))));
  /* 105728: stur w12, [x10, #-4] */
  arc_st32((ARC_X_R(c, 10) + INT64_C(-4)), ARC_W_R(c, 12));
  /* 10572c: str w13, [x11], #0xfffffffffffffffc */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(-4));
    arc_st32(_a, ARC_W_R(c, 13));
  }
  /* 105730: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 105734: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 105738: b.lo #0x105720 */
  if (ARC_COND(c, 3)) goto L_105720;
L_10573c:;
  /* 10573c: ldurb w10, [x29, #-0x90] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 105740: and w13, w10, #1 */
  ARC_W_W(c, 13, (ARC_W_R(c, 10) & UINT64_C(1)));
L_105744:;
  /* 105744: ldr x11, [x26, #0x30] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 26) + INT64_C(48))));
  /* 105748: cmp w13, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(0));
  /* 10574c: sub x12, x29, #0x90 */
  ARC_X_W(c, 12, (ARC_X_R(c, 29) - UINT64_C(144)));
  /* 105750: csinc x11, x11, x12, ne */
  ARC_X_W(c, 11, (ARC_COND(c, 1) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 12)) + 1)));
  /* 105754: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 105758: b.hs #0x1057b0 */
  if (ARC_COND(c, 2)) goto L_1057b0;
  /* 10575c: lsr w9, w10, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 10)) >> ((UINT64_C(1)) & 31)));
  /* 105760: ldr x10, [x26, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 26) + INT64_C(40))));
  /* 105764: cmp w13, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(0));
  /* 105768: csel x9, x9, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* 10576c: add x10, sp, #0x30 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(48)));
  /* 105770: add x9, x11, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) + ARC_X_R(c, 9)));
  /* 105774: b #0x105790 */
  goto L_105790;
L_105778:;
  /* 105778: sub x12, x9, x11 */
  ARC_X_W(c, 12, (ARC_X_R(c, 9) - ARC_X_R(c, 11)));
  /* 10577c: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 105780: cmp x12, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(1));
  /* 105784: cinc x11, x11, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 11)) + 1 : (ARC_X_R(c, 11))));
  /* 105788: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* 10578c: b.hs #0x1057b0 */
  if (ARC_COND(c, 2)) goto L_1057b0;
L_105790:;
  /* 105790: ldrb w12, [x11] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 11)));
  /* 105794: cbz w12, #0x105778 */
  if ((ARC_W_R(c, 12)) == 0) goto L_105778;
  /* 105798: cmp w12, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(255));
  /* 10579c: b.eq #0x105778 */
  if (ARC_COND(c, 0)) goto L_105778;
  /* 1057a0: ldr w13, [x10] */
  ARC_W_W(c, 13, arc_ld32(ARC_X_R(c, 10)));
  /* 1057a4: cmp w13, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 12));
  /* 1057a8: b.eq #0x105778 */
  if (ARC_COND(c, 0)) goto L_105778;
  /* 1057ac: b #0x1057d0 */
  goto L_1057d0;
L_1057b0:;
  /* 1057b0: ldrb w9, [x11] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 11)));
  /* 1057b4: cbz w9, #0x1057d8 */
  if ((ARC_W_R(c, 9)) == 0) goto L_1057d8;
  /* 1057b8: cmp w9, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(255));
  /* 1057bc: b.eq #0x1057d8 */
  if (ARC_COND(c, 0)) goto L_1057d8;
  /* 1057c0: ldr w8, [x8] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 8)));
  /* 1057c4: sub w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* 1057c8: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* 1057cc: b.lo #0x1057d8 */
  if (ARC_COND(c, 3)) goto L_1057d8;
L_1057d0:;
  /* 1057d0: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 1057d4: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_1057d8:;
  /* 1057d8: cbz x19, #0x1057f0 */
  if ((ARC_X_R(c, 19)) == 0) goto L_1057f0;
  /* 1057dc: ldp x8, x9, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1057e0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1057e4: b.eq #0x1057fc */
  if (ARC_COND(c, 0)) goto L_1057fc;
  /* 1057e8: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 1057ec: b #0x10580c */
  goto L_10580c;
L_1057f0:;
  /* 1057f0: cbz x21, #0x105864 */
  if ((ARC_X_R(c, 21)) == 0) goto L_105864;
  /* 1057f4: mov w20, #1 */
  ARC_W_W(c, 20, UINT64_C(1));
  /* 1057f8: b #0x105820 */
  goto L_105820;
L_1057fc:;
  /* 1057fc: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 105800: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 105804: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 105808: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1071116));
  arc_dispatch(c, ARC_X_R(c, 8));
L_10580c:;
  /* 10580c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 105810: cset w20, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? 1 : 0));
  /* 105814: csel x8, xzr, x19, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 19)));
  /* 105818: cbz x21, #0x105858 */
  if ((ARC_X_R(c, 21)) == 0) goto L_105858;
  /* 10581c: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
L_105820:;
  /* 105820: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 105824: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 105828: b.eq #0x105834 */
  if (ARC_COND(c, 0)) goto L_105834;
  /* 10582c: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 105830: b #0x105844 */
  goto L_105844;
L_105834:;
  /* 105834: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 105838: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 10583c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 105840: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1071172));
  arc_dispatch(c, ARC_X_R(c, 8));
L_105844:;
  /* 105844: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 105848: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 10584c: eor w8, w20, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 20) ^ ARC_W_R(c, 8)));
  /* 105850: tbz w8, #0, #0x105864 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_105864;
  /* 105854: b #0x105870 */
  goto L_105870;
L_105858:;
  /* 105858: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 10585c: b.ne #0x105870 */
  if (ARC_COND(c, 1)) goto L_105870;
  /* 105860: mov x19, xzr */
  ARC_X_W(c, 19, ARC_X_R(c, 31));
L_105864:;
  /* 105864: ldr w8, [x22] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 22)));
  /* 105868: orr w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(2)));
  /* 10586c: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_105870:;
  /* 105870: ldurb w8, [x29, #-0xa8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-168))));
  /* 105874: tbz w8, #0, #0x105888 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_105888;
  /* 105878: ldr x8, [x26, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(8))));
  /* 10587c: ldr x0, [x26, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 105880: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 105884: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1071240));
  fn1_142608(c);
L_105888:;
  /* 105888: ldurb w8, [x29, #-0x90] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 10588c: tbz w8, #0, #0x1058a0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1058a0;
  /* 105890: ldr x8, [x26, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(32))));
  /* 105894: ldr x0, [x26, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(48))));
  /* 105898: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 10589c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1071264));
  fn1_142608(c);
L_1058a0:;
  /* 1058a0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1058a4: ldp x20, x19, [sp, #0x1d0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(464));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1058a8: ldp x22, x21, [sp, #0x1c0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(448));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1058ac: ldp x24, x23, [sp, #0x1b0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(432));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1058b0: ldp x26, x25, [sp, #0x1a0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(416));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 1058b4: ldp x28, x27, [sp, #0x190] */
  { const uint64_t _pa = ((c)->sp + INT64_C(400));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 1058b8: ldp x29, x30, [sp, #0x180] */
  { const uint64_t _pa = ((c)->sp + INT64_C(384));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1058bc: add sp, sp, #0x1e0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(480)));
  /* 1058c0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1058c4: ret  */
  return;
L_1058c8:;
  /* 1058c8: add x13, x13, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(1)));
  /* 1058cc: add x15, sp, #0x30 */
  ARC_X_W(c, 15, ((c)->sp + UINT64_C(48)));
  /* 1058d0: sub x12, x12, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(16)));
  /* 1058d4: and x14, x13, #0x7ffffffffffffff8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 13) & UINT64_C(9223372036854775800)));
  /* 1058d8: lsl x10, x14, #2 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(2)) & 63)));
  /* 1058dc: mov x16, x14 */
  ARC_X_W(c, 16, ARC_X_R(c, 14));
  /* 1058e0: sub x11, x8, x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) - ARC_X_R(c, 10)));
  /* 1058e4: add x10, x15, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 15) + ARC_X_R(c, 10)));
  /* 1058e8: add x15, x15, #0x10 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(16)));
L_1058ec:;
  /* 1058ec: ldp q1, q0, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 1058f0: sub x16, x16, #8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) - UINT64_C(8)));
  /* 1058f4: ldp q2, q3, [x15, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 15) + INT64_C(-16));
    arc_q_w(c, 2, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 3, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 1058f8: rev64 v0.4s, v0.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[0].u32[1];
    _t.u32[1] = (c)->q[0].u32[0];
    _t.u32[2] = (c)->q[0].u32[3];
    _t.u32[3] = (c)->q[0].u32[2];
    (c)->q[0] = _t; }
  /* 1058fc: rev64 v1.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[1].u32[1];
    _t.u32[1] = (c)->q[1].u32[0];
    _t.u32[2] = (c)->q[1].u32[3];
    _t.u32[3] = (c)->q[1].u32[2];
    (c)->q[1] = _t; }
  /* 105900: rev64 v2.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[2].u32[1];
    _t.u32[1] = (c)->q[2].u32[0];
    _t.u32[2] = (c)->q[2].u32[3];
    _t.u32[3] = (c)->q[2].u32[2];
    (c)->q[2] = _t; }
  /* 105904: rev64 v3.4s, v3.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[3].u32[1];
    _t.u32[1] = (c)->q[3].u32[0];
    _t.u32[2] = (c)->q[3].u32[3];
    _t.u32[3] = (c)->q[3].u32[2];
    (c)->q[3] = _t; }
  /* 105908: ext v0.16b, v0.16b, v0.16b, #8 */
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
  /* 10590c: ext v1.16b, v1.16b, v1.16b, #8 */
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
  /* 105910: ext v2.16b, v2.16b, v2.16b, #8 */
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
  /* 105914: ext v3.16b, v3.16b, v3.16b, #8 */
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
  /* 105918: stp q0, q1, [x15, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 15) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 10591c: add x15, x15, #0x20 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(32)));
  /* 105920: stp q3, q2, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_st64(_pa, (c)->q[3].u64[0]);
    arc_st64(_pa + 8, (c)->q[3].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* 105924: sub x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(32)));
  /* 105928: cbnz x16, #0x1058ec */
  if ((ARC_X_R(c, 16)) != 0) goto L_1058ec;
  /* 10592c: cmp x13, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 14));
  /* 105930: b.eq #0x10573c */
  if (ARC_COND(c, 0)) goto L_10573c;
  /* 105934: b #0x10571c */
  goto L_10571c;
  /* 105938: b #0x105944 */
  goto L_105944;
  /* 10593c: b #0x105944 */
  goto L_105944;
  /* 105940: b #0x105944 */
  goto L_105944;
L_105944:;
  /* 105944: ldurb w8, [x29, #-0xa8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-168))));
  /* 105948: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10594c: tbnz w8, #0, #0x105960 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_105960;
  /* 105950: ldurb w8, [x29, #-0x90] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 105954: tbnz w8, #0, #0x105978 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_105978;
L_105958:;
  /* 105958: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10595c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1071456));
  fn1_9cc20(c);
L_105960:;
  /* 105960: ldr x8, [x26, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(8))));
  /* 105964: ldr x0, [x26, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 105968: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 10596c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1071472));
  fn1_142608(c);
  /* 105970: ldurb w8, [x29, #-0x90] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 105974: tbz w8, #0, #0x105958 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_105958;
L_105978:;
  /* 105978: ldr x8, [x26, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(32))));
  /* 10597c: ldr x0, [x26, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(48))));
  /* 105980: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 105984: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1071496));
  fn1_142608(c);
  /* 105988: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10598c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1071504));
  fn1_9cc20(c);
}

void fn1_11170c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039047948));
  /* 11170c: bti c */
  /* bti: no architectural effect here */
  /* 111710: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
  /* 111714: ret  */
  return;
}

void fn1_113dc8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057864));
  /* 113dc8: bti c */
  /* bti: no architectural effect here */
  /* 113dcc: mov w0, #0x302 */
  ARC_W_W(c, 0, UINT64_C(770));
  /* 113dd0: movk w0, #0x400, lsl #16 */
  ARC_W_W(c, 0, ((ARC_W_R(c, 0) & UINT64_C(18446744069414649855)) | UINT64_C(67108864)));
  /* 113dd4: ret  */
  return;
}

void fn1_11ad84(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039086468));
  /* 11ad84: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 11ad88: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 11ad8c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 11ad90: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 11ad94: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 11ad98: bl #0x143dd8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1158556));
  fn1_143dd8(c);
  /* 11ad9c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11ada0: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* 11ada4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 11ada8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 11adac: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 11adb0: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_125878(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039130232));
  /* 125878: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12587c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 125880: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 125884: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 125888: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12588c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 125890: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 125894: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 125898: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1202332));
  fn1_142860(c);
  /* 12589c: mov x3, x0 */
  ARC_X_W(c, 3, ARC_X_R(c, 0));
  /* 1258a0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1258a4: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1258a8: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1258ac: bl #0x142cf8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1202352));
  fn1_142cf8(c);
  /* 1258b0: ldr q0, [x0] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 0)), arc_ld64(ARC_X_R(c, 0) + 8));
  /* 1258b4: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1258b8: stp xzr, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1258bc: str q0, [x21] */
  arc_st64(ARC_X_R(c, 21), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 21) + 8, (c)->q[0].u64[1]);
  /* 1258c0: str x8, [x21, #0x10] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(16)), ARC_X_R(c, 8));
  /* 1258c4: str xzr, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 31));
  /* 1258c8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1258cc: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1258d0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1258d4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1258d8: ret  */
  return;
}

void fn1_127e4c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039139916));
  /* 127e4c: bti c */
  /* bti: no architectural effect here */
  /* 127e50: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 127e54: ret  */
  return;
}

void fn1_12a158(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039148888));
  /* 12a158: bti c */
  /* bti: no architectural effect here */
  /* 12a15c: ldrb w9, [x0, #0x18] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12a160: mov w8, #6 */
  ARC_W_W(c, 8, UINT64_C(6));
  /* 12a164: tst w9, #4 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(4)));
  /* 12a168: mov w9, #3 */
  ARC_W_W(c, 9, UINT64_C(3));
  /* 12a16c: csel w0, w9, w8, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* 12a170: ret  */
  return;
}

void fn1_12b99c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039155100));
  /* 12b99c: bti c */
  /* bti: no architectural effect here */
  /* 12b9a0: ldr w8, [x0, #0x18] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12b9a4: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 12b9a8: ldr x3, [x0, #0x10] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 12b9ac: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 12b9b0: mov x2, x4 */
  ARC_X_W(c, 2, ARC_X_R(c, 4));
  /* 12b9b4: mov w4, w8 */
  ARC_W_W(c, 4, ARC_W_R(c, 8));
  /* 12b9b8: b #0x128eb8 */
  fn1_128eb8(c); return;
}

void fn1_12e4d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039166164));
  /* 12e4d4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12e4d8: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12e4dc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12e4e0: ldr x0, [x0] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 0)));
  /* 12e4e4: bl #0x144210 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1238248));
  fn1_144210(c);
  /* 12e4e8: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12e4ec: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12e4f0: ret  */
  return;
  /* 12e4f4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1238264));
  fn1_a1454(c);
}

void fn1_134b18(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192344));
  /* 134b18: bti c */
  /* bti: no architectural effect here */
  /* 134b1c: add x0, x0, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* 134b20: b #0x143cd0 */
  fn1_143cd0(c); return;
}

void fn1_13612c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039197996));
  /* 13612c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 136130: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 136134: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* 136138: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13613c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 136140: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 136144: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* 136148: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 13614c: b.eq #0x1361ac */
  if (ARC_COND(c, 0)) goto L_1361ac;
  /* 136150: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 136154: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 136158: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1270108));
  fn1_142a58(c);
  /* 13615c: ldr w23, [x0] */
  ARC_W_W(c, 23, arc_ld32(ARC_X_R(c, 0)));
  /* 136160: str wzr, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 31));
  /* 136164: nop  */
  /* nop: no architectural effect here */
  /* 136168: adr x8, #0x15dc38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 13616c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 136170: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 136174: tbz w8, #0, #0x1361f0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1361f0;
L_136178:;
  /* 136178: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 13617c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 136180: bl #0x142ed8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1270148));
  fn1_142ed8(c);
  /* 136184: ldr w8, [x21] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 21)));
  /* 136188: cbz w8, #0x1361b8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1361b8;
  /* 13618c: movi d1, #0000000000000000 */
  arc_v_clear(c, 1);
  /* 136190: ldr x9, [x29, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 136194: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* 136198: b.ne #0x1361cc */
  if (ARC_COND(c, 1)) goto L_1361cc;
  /* 13619c: fmov s1, s0 */
  arc_su_w(c, 1, (uint32_t)(ARC_SU_R(c, 0)));
  /* 1361a0: cmp w8, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(34));
  /* 1361a4: b.eq #0x1361cc */
  if (ARC_COND(c, 0)) goto L_1361cc;
  /* 1361a8: b #0x1361d8 */
  goto L_1361d8;
L_1361ac:;
  /* 1361ac: movi d0, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 1361b0: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 1361b4: b #0x1361d4 */
  goto L_1361d4;
L_1361b8:;
  /* 1361b8: movi d1, #0000000000000000 */
  arc_v_clear(c, 1);
  /* 1361bc: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1361c0: str w23, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 23));
  /* 1361c4: cmp x8, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* 1361c8: b.eq #0x1361d8 */
  if (ARC_COND(c, 0)) goto L_1361d8;
L_1361cc:;
  /* 1361cc: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 1361d0: fmov s0, s1 */
  arc_su_w(c, 0, (uint32_t)(ARC_SU_R(c, 1)));
L_1361d4:;
  /* 1361d4: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_1361d8:;
  /* 1361d8: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1361dc: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1361e0: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1361e4: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1361e8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1361ec: ret  */
  return;
L_1361f0:;
  /* 1361f0: nop  */
  /* nop: no architectural effect here */
  /* 1361f4: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 1361f8: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1270268));
  fn1_1424b8(c);
  /* 1361fc: cbz w0, #0x136178 */
  if ((ARC_W_R(c, 0)) == 0) goto L_136178;
  /* 136200: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 136204: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 136208: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 13620c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 136210: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1270292));
  fn1_1441e0(c);
  /* 136214: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 136218: str x0, [x8, #0xc30] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 13621c: nop  */
  /* nop: no architectural effect here */
  /* 136220: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 136224: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1270312));
  fn1_1424d0(c);
  /* 136228: b #0x136178 */
  goto L_136178;
  /* 13622c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 136230: nop  */
  /* nop: no architectural effect here */
  /* 136234: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 136238: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1270332));
  fn1_1424e8(c);
  /* 13623c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 136240: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1270340));
  fn1_9cc20(c);
}

void fn1_13926c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039210604));
  /* 13926c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 139270: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 139274: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* 139278: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13927c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 139280: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 139284: mov w0, #0x60 */
  ARC_W_W(c, 0, UINT64_C(96));
  /* 139288: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 13928c: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* 139290: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 139294: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1282712));
  fn1_1428f0(c);
  /* 139298: ldrb w8, [x23] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 23)));
  /* 13929c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1392a0: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1392a4: add x9, x9, #0x5a8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1448)));
  /* 1392a8: add x21, x0, #0x18 */
  ARC_X_W(c, 21, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* 1392ac: stp xzr, xzr, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1392b0: str x9, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 9));
  /* 1392b4: tbnz w8, #0, #0x1392cc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1392cc;
  /* 1392b8: ldr q0, [x23] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 23)), arc_ld64(ARC_X_R(c, 23) + 8));
  /* 1392bc: ldr x8, [x23, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 23) + INT64_C(16))));
  /* 1392c0: str q0, [x21] */
  arc_st64(ARC_X_R(c, 21), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 21) + 8, (c)->q[0].u64[1]);
  /* 1392c4: str x8, [x21, #0x10] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(16)), ARC_X_R(c, 8));
  /* 1392c8: b #0x1392d8 */
  goto L_1392d8;
L_1392cc:;
  /* 1392cc: ldp x2, x1, [x23, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(8));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 1392d0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1392d4: bl #0xda588 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1282776));
  fn1_da588(c);
L_1392d8:;
  /* 1392d8: ldrb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 1392dc: tbnz w8, #0, #0x1392f4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1392f4;
  /* 1392e0: ldr q0, [x22] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 22)), arc_ld64(ARC_X_R(c, 22) + 8));
  /* 1392e4: ldr x8, [x22, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 1392e8: stur q0, [x19, #0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)) + 8, (c)->q[0].u64[1]);
  /* 1392ec: stur x8, [x19, #0x40] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(64)), ARC_X_R(c, 8));
  /* 1392f0: b #0x139300 */
  goto L_139300;
L_1392f4:;
  /* 1392f4: ldp x2, x1, [x22, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 22) + INT64_C(8));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 1392f8: add x0, x19, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(48)));
  /* 1392fc: bl #0xda588 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1282816));
  fn1_da588(c);
L_139300:;
  /* 139300: stp xzr, xzr, [x19, #0x48] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(72));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 139304: str xzr, [x19, #0x58] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(88)), ARC_X_R(c, 31));
  /* 139308: stp x21, x19, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13930c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 139310: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 139314: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 139318: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13931c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 139320: ret  */
  return;
  /* 139324: ldrb w8, [x21] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 21)));
  /* 139328: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 13932c: tbz w8, #0, #0x139348 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_139348;
  /* 139330: ldr x8, [x19, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* 139334: ldr x0, [x19, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(40))));
  /* 139338: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13933c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1282880));
  fn1_142608(c);
  /* 139340: b #0x139348 */
  goto L_139348;
  /* 139344: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_139348:;
  /* 139348: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13934c: mov w1, #0x60 */
  ARC_W_W(c, 1, UINT64_C(96));
  /* 139350: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1282900));
  fn1_142608(c);
  /* 139354: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 139358: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1282908));
  fn1_9cc20(c);
}

void fn1_13f04c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039234636));
  /* 13f04c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13f050: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 13f054: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13f058: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13f05c: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13f060: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 13f064: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 13f068: adrp x8, #0x50000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(327680)));
  /* 13f06c: add x8, x8, #0x8ce */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2254)));
  /* 13f070: stp xzr, xzr, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13f074: stp x8, x0, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 13f078: cbz x0, #0x13f09c */
  if ((ARC_X_R(c, 0)) == 0) goto L_13f09c;
  /* 13f07c: str wzr, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 31));
  /* 13f080: nop  */
  /* nop: no architectural effect here */
  /* 13f084: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13f088: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13f08c: tbz w8, #0, #0x13f1a0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13f1a0;
L_13f090:;
  /* 13f090: nop  */
  /* nop: no architectural effect here */
  /* 13f094: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13f098: str x8, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 8));
L_13f09c:;
  /* 13f09c: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1306784));
  fn1_142a58(c);
  /* 13f0a0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 13f0a4: str wzr, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 31));
  /* 13f0a8: adrp x0, #0x50000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(327680)));
  /* 13f0ac: add x0, x0, #0x1d9 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(473)));
  /* 13f0b0: mov w1, #5 */
  ARC_W_W(c, 1, UINT64_C(5));
  /* 13f0b4: bl #0x1447c8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1306808));
  fn1_1447c8(c);
  /* 13f0b8: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 13f0bc: cmn x0, #1 */
  (void)arc_add64(c, ARC_X_R(c, 0), UINT64_C(1), 0);
  /* 13f0c0: b.eq #0x13f100 */
  if (ARC_COND(c, 0)) goto L_13f100;
L_13f0c4:;
  /* 13f0c4: add x0, x22, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* 13f0c8: bl #0x142590 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1306828));
  fn1_142590(c);
  /* 13f0cc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 13f0d0: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 13f0d4: bl #0x1447e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1306840));
  fn1_1447e0(c);
  /* 13f0d8: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 13f0dc: cbz x1, #0x13f140 */
  if ((ARC_X_R(c, 1)) == 0) goto L_13f140;
  /* 13f0e0: sub x2, x1, #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 1) - UINT64_C(1)));
  /* 13f0e4: stp xzr, xzr, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13f0e8: str xzr, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 31));
L_13f0ec:;
  /* 13f0ec: ldrb w8, [x2, #1]! */
  { const uint64_t _a = (ARC_X_R(c, 2) + INT64_C(1));
    ARC_X_W(c, 2, ARC_X_R(c, 2) + INT64_C(1));
    ARC_W_W(c, 8, arc_ld8(_a));
  }
  /* 13f0f0: cbnz w8, #0x13f0ec */
  if ((ARC_W_R(c, 8)) != 0) goto L_13f0ec;
  /* 13f0f4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13f0f8: bl #0xda784 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1306876));
  fn1_da784(c);
  /* 13f0fc: b #0x13f178 */
  goto L_13f178;
L_13f100:;
  /* 13f100: ldr w20, [x21] */
  ARC_W_W(c, 20, arc_ld32(ARC_X_R(c, 21)));
  /* 13f104: cbz w20, #0x13f198 */
  if ((ARC_W_R(c, 20)) == 0) goto L_13f198;
  /* 13f108: nop  */
  /* nop: no architectural effect here */
  /* 13f10c: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13f110: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13f114: tbz w8, #0, #0x13f1f4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13f1f4;
L_13f118:;
  /* 13f118: nop  */
  /* nop: no architectural effect here */
  /* 13f11c: adr x8, #0x156d38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13f120: adrp x2, #0x50000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(327680)));
  /* 13f124: add x2, x2, #0xcd3 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(3283)));
  /* 13f128: stp x20, x8, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 13f12c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 13f130: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 13f134: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* 13f138: bl #0x13f24c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1306940));
  fn1_13f24c(c);
  /* 13f13c: b #0x13f180 */
  goto L_13f180;
L_13f140:;
  /* 13f140: nop  */
  /* nop: no architectural effect here */
  /* 13f144: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13f148: ldr w21, [x21] */
  ARC_W_W(c, 21, arc_ld32(ARC_X_R(c, 21)));
  /* 13f14c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13f150: tbz w8, #0, #0x13f1d4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13f1d4;
L_13f154:;
  /* 13f154: nop  */
  /* nop: no architectural effect here */
  /* 13f158: adr x8, #0x156d38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13f15c: stp x21, x8, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 13f160: adrp x2, #0x4f000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(323584)));
  /* 13f164: add x2, x2, #0x94e */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2382)));
  /* 13f168: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 13f16c: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 13f170: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* 13f174: bl #0x13f24c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1307000));
  fn1_13f24c(c);
L_13f178:;
  /* 13f178: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13f17c: bl #0x1425a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1307008));
  fn1_1425a8(c);
L_13f180:;
  /* 13f180: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13f184: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 13f188: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13f18c: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 13f190: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13f194: ret  */
  return;
L_13f198:;
  /* 13f198: mov w22, #0x1001 */
  ARC_W_W(c, 22, UINT64_C(4097));
  /* 13f19c: b #0x13f0c4 */
  goto L_13f0c4;
L_13f1a0:;
  /* 13f1a0: nop  */
  /* nop: no architectural effect here */
  /* 13f1a4: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13f1a8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 13f1ac: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 13f1b0: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1307060));
  fn1_1424b8(c);
  /* 13f1b4: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 13f1b8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13f1bc: cbz w8, #0x13f090 */
  if ((ARC_W_R(c, 8)) == 0) goto L_13f090;
  /* 13f1c0: nop  */
  /* nop: no architectural effect here */
  /* 13f1c4: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13f1c8: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1307084));
  fn1_1424d0(c);
  /* 13f1cc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13f1d0: b #0x13f090 */
  goto L_13f090;
L_13f1d4:;
  /* 13f1d4: nop  */
  /* nop: no architectural effect here */
  /* 13f1d8: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13f1dc: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1307104));
  fn1_1424b8(c);
  /* 13f1e0: cbz w0, #0x13f154 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13f154;
  /* 13f1e4: nop  */
  /* nop: no architectural effect here */
  /* 13f1e8: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13f1ec: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1307120));
  fn1_1424d0(c);
  /* 13f1f0: b #0x13f154 */
  goto L_13f154;
L_13f1f4:;
  /* 13f1f4: nop  */
  /* nop: no architectural effect here */
  /* 13f1f8: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13f1fc: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1307136));
  fn1_1424b8(c);
  /* 13f200: cbz w0, #0x13f118 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13f118;
  /* 13f204: nop  */
  /* nop: no architectural effect here */
  /* 13f208: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13f20c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1307152));
  fn1_1424d0(c);
  /* 13f210: b #0x13f118 */
  goto L_13f118;
  /* 13f214: b #0x13f238 */
  goto L_13f238;
  /* 13f218: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 13f21c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 13f220: tbz w8, #0, #0x13f23c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13f23c;
  /* 13f224: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 13f228: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 13f22c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13f230: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1307188));
  fn1_142608(c);
  /* 13f234: b #0x13f23c */
  goto L_13f23c;
L_13f238:;
  /* 13f238: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
L_13f23c:;
  /* 13f23c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13f240: bl #0x1425a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1307204));
  fn1_1425a8(c);
  /* 13f244: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 13f248: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1307212));
  fn1_9cc20(c);
}

void fn1_1426f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248632));
  /* 1426f8: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1426fc: ldr x17, [x16, #0xf88] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3976))));
  /* 142700: add x16, x16, #0xf88 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3976)));
  /* 142704: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142708: nop  */
  /* nop: no architectural effect here */
  /* 14270c: nop  */
  /* nop: no architectural effect here */
}

void fn1_142cf8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250168));
  /* 142cf8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142cfc: ldr x17, [x16, #0x188] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(392))));
  /* 142d00: add x16, x16, #0x188 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(392)));
  /* 142d04: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142d08: nop  */
  /* nop: no architectural effect here */
  /* 142d0c: nop  */
  /* nop: no architectural effect here */
}

void fn1_1432f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251704));
  /* 1432f8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1432fc: ldr x17, [x16, #0x388] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(904))));
  /* 143300: add x16, x16, #0x388 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(904)));
  /* 143304: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143308: nop  */
  /* nop: no architectural effect here */
  /* 14330c: nop  */
  /* nop: no architectural effect here */
}

void fn1_1438f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253240));
  /* 1438f8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1438fc: ldr x17, [x16, #0x588] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1416))));
  /* 143900: add x16, x16, #0x588 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1416)));
  /* 143904: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143908: nop  */
  /* nop: no architectural effect here */
  /* 14390c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143ef8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254776));
  /* 143ef8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143efc: ldr x17, [x16, #0x788] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1928))));
  /* 143f00: add x16, x16, #0x788 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1928)));
  /* 143f04: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143f08: nop  */
  /* nop: no architectural effect here */
  /* 143f0c: nop  */
  /* nop: no architectural effect here */
}

void fn1_1444f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256312));
  /* 1444f8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1444fc: ldr x17, [x16, #0x988] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2440))));
  /* 144500: add x16, x16, #0x988 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2440)));
  /* 144504: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144508: nop  */
  /* nop: no architectural effect here */
  /* 14450c: nop  */
  /* nop: no architectural effect here */
}

void fn1_a0810(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038585360));
  /* a0810: bti jc */
  /* bti: no architectural effect here */
  /* a0814: stp x0, x1, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* a0818: stp x2, x3, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 2));
    arc_st64(_pa + 8, ARC_X_R(c, 3));
  }
  /* a081c: stp x4, x5, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 4));
    arc_st64(_pa + 8, ARC_X_R(c, 5));
  }
  /* a0820: stp x6, x7, [x0, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 6));
    arc_st64(_pa + 8, ARC_X_R(c, 7));
  }
  /* a0824: stp x8, x9, [x0, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* a0828: stp x10, x11, [x0, #0x50] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 11));
  }
  /* a082c: stp x12, x13, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 12));
    arc_st64(_pa + 8, ARC_X_R(c, 13));
  }
  /* a0830: stp x14, x15, [x0, #0x70] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 14));
    arc_st64(_pa + 8, ARC_X_R(c, 15));
  }
  /* a0834: stp x16, x17, [x0, #0x80] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 16));
    arc_st64(_pa + 8, ARC_X_R(c, 17));
  }
  /* a0838: stp x18, x19, [x0, #0x90] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 18));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a083c: stp x20, x21, [x0, #0xa0] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a0840: stp x22, x23, [x0, #0xb0] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* a0844: stp x24, x25, [x0, #0xc0] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* a0848: stp x26, x27, [x0, #0xd0] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* a084c: stp x28, x29, [x0, #0xe0] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 29));
  }
  /* a0850: str x30, [x0, #0xf0] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(240)), ARC_X_R(c, 30));
  /* a0854: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* a0858: str x1, [x0, #0xf8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(248)), ARC_X_R(c, 1));
  /* a085c: str x30, [x0, #0x100] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(256)), ARC_X_R(c, 30));
  /* a0860: stp d0, d1, [x0, #0x110] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(272));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64((_pa + 8), (c)->q[1].u64[0]);
  }
  /* a0864: stp d2, d3, [x0, #0x120] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(288));
    arc_st64(_pa, (c)->q[2].u64[0]);
    arc_st64((_pa + 8), (c)->q[3].u64[0]);
  }
  /* a0868: stp d4, d5, [x0, #0x130] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(304));
    arc_st64(_pa, (c)->q[4].u64[0]);
    arc_st64((_pa + 8), (c)->q[5].u64[0]);
  }
  /* a086c: stp d6, d7, [x0, #0x140] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(320));
    arc_st64(_pa, (c)->q[6].u64[0]);
    arc_st64((_pa + 8), (c)->q[7].u64[0]);
  }
  /* a0870: stp d8, d9, [x0, #0x150] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(336));
    arc_st64(_pa, (c)->q[8].u64[0]);
    arc_st64((_pa + 8), (c)->q[9].u64[0]);
  }
  /* a0874: stp d10, d11, [x0, #0x160] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(352));
    arc_st64(_pa, (c)->q[10].u64[0]);
    arc_st64((_pa + 8), (c)->q[11].u64[0]);
  }
  /* a0878: stp d12, d13, [x0, #0x170] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(368));
    arc_st64(_pa, (c)->q[12].u64[0]);
    arc_st64((_pa + 8), (c)->q[13].u64[0]);
  }
  /* a087c: stp d14, d15, [x0, #0x180] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(384));
    arc_st64(_pa, (c)->q[14].u64[0]);
    arc_st64((_pa + 8), (c)->q[15].u64[0]);
  }
  /* a0880: stp d16, d17, [x0, #0x190] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(400));
    arc_st64(_pa, (c)->q[16].u64[0]);
    arc_st64((_pa + 8), (c)->q[17].u64[0]);
  }
  /* a0884: stp d18, d19, [x0, #0x1a0] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(416));
    arc_st64(_pa, (c)->q[18].u64[0]);
    arc_st64((_pa + 8), (c)->q[19].u64[0]);
  }
  /* a0888: stp d20, d21, [x0, #0x1b0] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(432));
    arc_st64(_pa, (c)->q[20].u64[0]);
    arc_st64((_pa + 8), (c)->q[21].u64[0]);
  }
  /* a088c: stp d22, d23, [x0, #0x1c0] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(448));
    arc_st64(_pa, (c)->q[22].u64[0]);
    arc_st64((_pa + 8), (c)->q[23].u64[0]);
  }
  /* a0890: stp d24, d25, [x0, #0x1d0] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(464));
    arc_st64(_pa, (c)->q[24].u64[0]);
    arc_st64((_pa + 8), (c)->q[25].u64[0]);
  }
  /* a0894: stp d26, d27, [x0, #0x1e0] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(480));
    arc_st64(_pa, (c)->q[26].u64[0]);
    arc_st64((_pa + 8), (c)->q[27].u64[0]);
  }
  /* a0898: stp d28, d29, [x0, #0x1f0] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(496));
    arc_st64(_pa, (c)->q[28].u64[0]);
    arc_st64((_pa + 8), (c)->q[29].u64[0]);
  }
  /* a089c: str d30, [x0, #0x200] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(512)), (c)->q[30].u64[0]);
  /* a08a0: str d31, [x0, #0x208] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(520)), (c)->q[31].u64[0]);
  /* a08a4: mov x0, #0 */
  ARC_X_W(c, 0, UINT64_C(0));
  /* a08a8: ret  */
  return;
}

