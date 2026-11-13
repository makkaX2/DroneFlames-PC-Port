#include "lifted.h"

void fn1_9d008(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038571016));
  /* 9d008: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 9d00c: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* 9d010: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 9d014: str x21, [sp, #0x60] */
  arc_st64(((c)->sp + INT64_C(96)), ARC_X_R(c, 21));
  /* 9d018: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 9d01c: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* 9d020: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 9d024: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 9d028: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 9d02c: mov w21, w1 */
  ARC_W_W(c, 21, ARC_W_R(c, 1));
  /* 9d030: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 9d034: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(643128));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 9d038: tbz w0, #0, #0x9d0d8 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_9d0d8;
  /* 9d03c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 9d040: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 9d044: mov w1, w21 */
  ARC_W_W(c, 1, ARC_W_R(c, 21));
  /* 9d048: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 9d04c: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 9d050: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(643156));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 9d054: cmn w21, #1 */
  (void)arc_add32(c, ARC_W_R(c, 21), UINT64_C(1), 0);
  /* 9d058: b.ne #0x9d0bc */
  if (ARC_COND(c, 1)) goto L_9d0bc;
  /* 9d05c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 9d060: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 9d064: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 9d068: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 9d06c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(643184));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 9d070: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 9d074: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 9d078: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 9d07c: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* 9d080: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(643204));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 9d084: ldr x8, [sp, #0x28] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(40))));
  /* 9d088: cbz x8, #0x9d0bc */
  if ((ARC_X_R(c, 8)) == 0) goto L_9d0bc;
  /* 9d08c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 9d090: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 9d094: mov w1, #-2 */
  ARC_W_W(c, 1, UINT64_C(18446744073709551614));
  /* 9d098: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 9d09c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(643232));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 9d0a0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 9d0a4: ldr x9, [sp, #0x28] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(40))));
  /* 9d0a8: mov w1, #-2 */
  ARC_W_W(c, 1, UINT64_C(18446744073709551614));
  /* 9d0ac: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 9d0b0: add x2, x9, x0 */
  ARC_X_W(c, 2, (ARC_X_R(c, 9) + ARC_X_R(c, 0)));
  /* 9d0b4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 9d0b8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(643260));
  arc_dispatch(c, ARC_X_R(c, 8));
L_9d0bc:;
  /* 9d0bc: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 9d0c0: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 9d0c4: ldr x21, [sp, #0x60] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(96))));
  /* 9d0c8: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9d0cc: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* 9d0d0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 9d0d4: ret  */
  return;
L_9d0d8:;
  /* 9d0d8: mov w0, #-0x198e */
  ARC_W_W(c, 0, UINT64_C(18446744073709545074));
  /* 9d0dc: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 9d0e0: ldr x21, [sp, #0x60] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(96))));
  /* 9d0e4: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9d0e8: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* 9d0ec: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 9d0f0: ret  */
  return;
}

void fn1_a15d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038588884));
  /* a15d4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a15d8: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* a15dc: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a15e0: str x25, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 25));
  /* a15e4: stp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* a15e8: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a15ec: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a15f0: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* a15f4: umulh x8, x0, x1 */
  ARC_X_W(c, 8, arc_umulh(ARC_X_R(c, 0), ARC_X_R(c, 1)));
  /* a15f8: cmp xzr, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 31), ARC_X_R(c, 8));
  /* a15fc: b.ne #0xa16a0 */
  if (ARC_COND(c, 1)) goto L_a16a0;
  /* a1600: mul x8, x0, x1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 0)) * (uint64_t)(ARC_X_R(c, 1))));
  /* a1604: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* a1608: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a160c: mov x25, x2 */
  ARC_X_W(c, 25, ARC_X_R(c, 2));
  /* a1610: adds x0, x8, x2 */
  ARC_X_W(c, 0, arc_add64(c, ARC_X_R(c, 8), ARC_X_R(c, 2), 0));
  /* a1614: b.hs #0xa16a0 */
  if (ARC_COND(c, 2)) goto L_a16a0;
  /* a1618: mov x24, x4 */
  ARC_X_W(c, 24, ARC_X_R(c, 4));
  /* a161c: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* a1620: bl #0x142590 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(661028));
  fn1_142590(c);
  /* a1624: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* a1628: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* a162c: cbz x25, #0xa1638 */
  if ((ARC_X_R(c, 25)) == 0) goto L_a1638;
  /* a1630: add x23, x22, x25 */
  ARC_X_W(c, 23, (ARC_X_R(c, 22) + ARC_X_R(c, 25)));
  /* a1634: stur x21, [x23, #-8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(-8)), ARC_X_R(c, 21));
L_a1638:;
  /* a1638: cbz x19, #0xa167c */
  if ((ARC_X_R(c, 19)) == 0) goto L_a167c;
  /* a163c: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* a1640: stp x20, x24, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 24));
  }
  /* a1644: stp x23, x8, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* a1648: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* a164c: strb w8, [sp, #0x28] */
  arc_st8(((c)->sp + INT64_C(40)), ARC_W_R(c, 8));
  /* a1650: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* a1654: cbz x21, #0xa167c */
  if ((ARC_X_R(c, 21)) == 0) goto L_a167c;
  /* a1658: mov x24, x23 */
  ARC_X_W(c, 24, ARC_X_R(c, 23));
L_a165c:;
  /* a165c: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* a1660: blr x19 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(661092));
  arc_dispatch(c, ARC_X_R(c, 19));
  /* a1664: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* a1668: add x24, x24, x20 */
  ARC_X_W(c, 24, (ARC_X_R(c, 24) + ARC_X_R(c, 20)));
  /* a166c: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a1670: cmp x8, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 21));
  /* a1674: str x8, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 8));
  /* a1678: b.lo #0xa165c */
  if (ARC_COND(c, 3)) goto L_a165c;
L_a167c:;
  /* a167c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* a1680: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a1684: ldr x25, [sp, #0x40] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(64))));
  /* a1688: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a168c: ldp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* a1690: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a1694: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* a1698: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a169c: ret  */
  return;
L_a16a0:;
  /* a16a0: bl #0xa1e84 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(661156));
  fn1_a1e84(c);
  /* a16a4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a16a8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* a16ac: bl #0xa1a0c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(661168));
  fn1_a1a0c(c);
  /* a16b0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* a16b4: bl #0x1425a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(661176));
  fn1_1425a8(c);
  /* a16b8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a16bc: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(661184));
  fn1_9cc20(c);
}

void fn1_a27f4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038593524));
  /* a27f4: bti c */
  /* bti: no architectural effect here */
  /* a27f8: mov w1, #0x28 */
  ARC_W_W(c, 1, UINT64_C(40));
  /* a27fc: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_a8ccc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038619340));
  /* a8ccc: bti c */
  /* bti: no architectural effect here */
  /* a8cd0: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* a8cd4: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b0058(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038648920));
  /* b0058: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b005c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b0060: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b0064: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b0068: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b006c: ldp x8, x10, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b0070: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b0074: ldr w11, [x1, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 1) + INT64_C(32))));
  /* b0078: ldr x0, [x1] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* b007c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b0080: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b0084: add w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* b0088: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b008c: str w11, [x1, #0x20] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(32)), ARC_W_R(c, 11));
  /* b0090: b.ls #0xb00bc */
  if (ARC_COND(c, 9)) goto L_b00bc;
  /* b0094: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b0098: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b009c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b00a0: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b00a4: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b00a8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(721068));
  fn1_142878(c);
  /* b00ac: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b00b0: cbz x0, #0xb0220 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b0220;
  /* b00b4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b00b8: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b00bc:;
  /* b00bc: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b00c0: mov w9, #0x28 */
  ARC_W_W(c, 9, UINT64_C(40));
  /* b00c4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b00c8: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b00cc: ldr x21, [x20, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* b00d0: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b00d4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b00d8: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b00dc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(721120));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b00e0: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* b00e4: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b00e8: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b00ec: b.eq #0xb0104 */
  if (ARC_COND(c, 0)) goto L_b0104;
  /* b00f0: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b00f4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b00f8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b00fc: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b0100: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(721156));
  arc_dispatch(c, ARC_X_R(c, 8));
L_b0104:;
  /* b0104: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b0108: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b010c: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b0110: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* b0114: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b0118: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* b011c: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b0120: b.ls #0xb014c */
  if (ARC_COND(c, 9)) goto L_b014c;
  /* b0124: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b0128: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b012c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b0130: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b0134: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b0138: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(721212));
  fn1_142878(c);
  /* b013c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b0140: cbz x0, #0xb0224 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b0224;
  /* b0144: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b0148: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b014c:;
  /* b014c: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b0150: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* b0154: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b0158: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b015c: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b0160: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b0164: add w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* b0168: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b016c: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* b0170: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b0174: b.ls #0xb01a0 */
  if (ARC_COND(c, 9)) goto L_b01a0;
  /* b0178: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b017c: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b0180: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b0184: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b0188: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b018c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(721296));
  fn1_142878(c);
  /* b0190: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b0194: cbz x0, #0xb0228 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b0228;
  /* b0198: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b019c: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b01a0:;
  /* b01a0: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b01a4: mov w9, #0x28 */
  ARC_W_W(c, 9, UINT64_C(40));
  /* b01a8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b01ac: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b01b0: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* b01b4: bl #0xafa48 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(721336));
  fn1_afa48(c);
  /* b01b8: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b01bc: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b01c0: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b01c4: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* b01c8: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b01cc: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* b01d0: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b01d4: b.ls #0xb0200 */
  if (ARC_COND(c, 9)) goto L_b0200;
  /* b01d8: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b01dc: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b01e0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b01e4: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b01e8: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b01ec: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(721392));
  fn1_142878(c);
  /* b01f0: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b01f4: cbz x0, #0xb022c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b022c;
  /* b01f8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b01fc: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b0200:;
  /* b0200: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b0204: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* b0208: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b020c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b0210: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b0214: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b0218: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b021c: ret  */
  return;
L_b0220:;
  /* b0220: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(721444));
  fn1_1427b8(c);
L_b0224:;
  /* b0224: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(721448));
  fn1_1427b8(c);
L_b0228:;
  /* b0228: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(721452));
  fn1_1427b8(c);
L_b022c:;
  /* b022c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(721456));
  fn1_1427b8(c);
}

void fn1_b4ca8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038668456));
  /* b4ca8: bti c */
  /* bti: no architectural effect here */
  /* b4cac: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* b4cb0: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b7dcc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038681036));
  /* b7dcc: bti c */
  /* bti: no architectural effect here */
  /* b7dd0: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* b7dd4: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_bb054(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038693972));
  /* bb054: bti c */
  /* bti: no architectural effect here */
  /* bb058: mov w1, #0x38 */
  ARC_W_W(c, 1, UINT64_C(56));
  /* bb05c: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_bd944(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038704452));
  /* bd944: bti c */
  /* bti: no architectural effect here */
  /* bd948: mov x1, x2 */
  ARC_X_W(c, 1, ARC_X_R(c, 2));
  /* bd94c: b #0x142968 */
  fn1_142968(c); return;
}

void fn1_d030c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038780684));
  /* d030c: bti c */
  /* bti: no architectural effect here */
  /* d0310: sub x8, x1, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* d0314: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* d0318: b.gt #0xd0328 */
  if (ARC_COND(c, 12)) goto L_d0328;
  /* d031c: b.hs #0xd0418 */
  if (ARC_COND(c, 2)) goto L_d0418;
L_d0320:;
  /* d0320: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d0324: ret  */
  return;
L_d0328:;
  /* d0328: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* d032c: b.eq #0xd0440 */
  if (ARC_COND(c, 0)) goto L_d0440;
  /* d0330: cmp x8, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(4));
  /* d0334: b.eq #0xd0550 */
  if (ARC_COND(c, 0)) goto L_d0550;
  /* d0338: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* d033c: b.ne #0xd0490 */
  if (ARC_COND(c, 1)) goto L_d0490;
  /* d0340: ldrsb w8, [x0] */
  ARC_W_W(c, 8, ((int32_t)(int8_t)arc_ld8(ARC_X_R(c, 0))));
  /* d0344: ldrsb w9, [x0, #1] */
  ARC_W_W(c, 9, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 0) + INT64_C(1)))));
  /* d0348: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d034c: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0350: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0354: strb w10, [x0, #1] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 10));
  /* d0358: strb w8, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* d035c: ldrsb w8, [x0, #3] */
  ARC_W_W(c, 8, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 0) + INT64_C(3)))));
  /* d0360: ldursb w9, [x1, #-1] */
  ARC_W_W(c, 9, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 1) + INT64_C(-1)))));
  /* d0364: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d0368: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d036c: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0370: sturb w10, [x1, #-1] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(-1)), ARC_W_R(c, 10));
  /* d0374: strb w8, [x0, #3] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 8));
  /* d0378: ldrsb w9, [x0, #2] */
  ARC_W_W(c, 9, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 0) + INT64_C(2)))));
  /* d037c: ldursb w8, [x1, #-1] */
  ARC_W_W(c, 8, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 1) + INT64_C(-1)))));
  /* d0380: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d0384: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0388: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d038c: sturb w10, [x1, #-1] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(-1)), ARC_W_R(c, 10));
  /* d0390: ldrsb w10, [x0, #3] */
  ARC_W_W(c, 10, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 0) + INT64_C(3)))));
  /* d0394: ldrb w9, [x0, #2] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(2))));
  /* d0398: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* d039c: csel w9, w9, w10, lt */
  ARC_W_W(c, 9, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* d03a0: csel w8, w8, w10, gt */
  ARC_W_W(c, 8, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* d03a4: strb w9, [x0, #2] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 9));
  /* d03a8: strb w8, [x0, #3] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 8));
  /* d03ac: ldrsb w8, [x0, #1] */
  ARC_W_W(c, 8, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 0) + INT64_C(1)))));
  /* d03b0: ldursb w9, [x1, #-1] */
  ARC_W_W(c, 9, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 1) + INT64_C(-1)))));
  /* d03b4: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d03b8: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d03bc: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d03c0: sturb w10, [x1, #-1] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(-1)), ARC_W_R(c, 10));
  /* d03c4: ldrsb w10, [x0, #3] */
  ARC_W_W(c, 10, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 0) + INT64_C(3)))));
  /* d03c8: ldrsb w11, [x0] */
  ARC_W_W(c, 11, ((int32_t)(int8_t)arc_ld8(ARC_X_R(c, 0))));
  /* d03cc: ldrsb w9, [x0, #2] */
  ARC_W_W(c, 9, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 0) + INT64_C(2)))));
  /* d03d0: cmp w10, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 11));
  /* d03d4: csel w12, w10, w11, lt */
  ARC_W_W(c, 12, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* d03d8: csel w10, w10, w11, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* d03dc: cmp w12, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 9));
  /* d03e0: csel w11, w11, w9, lt */
  ARC_W_W(c, 11, (ARC_COND(c, 11) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 9)));
  /* d03e4: csel w9, w12, w9, gt */
  ARC_W_W(c, 9, (ARC_COND(c, 12) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 9)));
  /* d03e8: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* d03ec: csel w12, w10, w8, lt */
  ARC_W_W(c, 12, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d03f0: csel w10, w10, w8, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d03f4: strb w11, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 11));
  /* d03f8: cmp w12, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 9));
  /* d03fc: strb w10, [x0, #3] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 10));
  /* d0400: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0404: csel w9, w12, w9, gt */
  ARC_W_W(c, 9, (ARC_COND(c, 12) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 9)));
  /* d0408: strb w8, [x0, #1] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 8));
  /* d040c: strb w9, [x0, #2] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 9));
  /* d0410: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d0414: ret  */
  return;
L_d0418:;
  /* d0418: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* d041c: b.ne #0xd0490 */
  if (ARC_COND(c, 1)) goto L_d0490;
  /* d0420: ldursb w9, [x1, #-1] */
  ARC_W_W(c, 9, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 1) + INT64_C(-1)))));
  /* d0424: ldrsb w8, [x0] */
  ARC_W_W(c, 8, ((int32_t)(int8_t)arc_ld8(ARC_X_R(c, 0))));
  /* d0428: cmp w9, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 8));
  /* d042c: b.ge #0xd0320 */
  if (ARC_COND(c, 10)) goto L_d0320;
  /* d0430: strb w9, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* d0434: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d0438: sturb w8, [x1, #-1] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(-1)), ARC_W_R(c, 8));
  /* d043c: ret  */
  return;
L_d0440:;
  /* d0440: ldrsb w8, [x0, #1] */
  ARC_W_W(c, 8, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 0) + INT64_C(1)))));
  /* d0444: ldursb w9, [x1, #-1] */
  ARC_W_W(c, 9, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 1) + INT64_C(-1)))));
  /* d0448: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d044c: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0450: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0454: sturb w10, [x1, #-1] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(-1)), ARC_W_R(c, 10));
  /* d0458: strb w8, [x0, #1] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 8));
  /* d045c: ldrsb w9, [x0] */
  ARC_W_W(c, 9, ((int32_t)(int8_t)arc_ld8(ARC_X_R(c, 0))));
  /* d0460: ldursb w8, [x1, #-1] */
  ARC_W_W(c, 8, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 1) + INT64_C(-1)))));
  /* d0464: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d0468: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d046c: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0470: sturb w10, [x1, #-1] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(-1)), ARC_W_R(c, 10));
  /* d0474: ldrsb w10, [x0, #1] */
  ARC_W_W(c, 10, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 0) + INT64_C(1)))));
  /* d0478: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* d047c: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* d0480: csel w9, w9, w10, lt */
  ARC_W_W(c, 9, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* d0484: csel w8, w8, w10, gt */
  ARC_W_W(c, 8, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* d0488: strb w9, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* d048c: b #0xd05c8 */
  goto L_d05c8;
L_d0490:;
  /* d0490: mov x11, x0 */
  ARC_X_W(c, 11, ARC_X_R(c, 0));
  /* d0494: ldrsb w8, [x0, #1] */
  ARC_W_W(c, 8, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 0) + INT64_C(1)))));
  /* d0498: ldrsb w10, [x0] */
  ARC_W_W(c, 10, ((int32_t)(int8_t)arc_ld8(ARC_X_R(c, 0))));
  /* d049c: ldrsb w9, [x11, #2]! */
  { const uint64_t _a = (ARC_X_R(c, 11) + INT64_C(2));
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(2));
    ARC_W_W(c, 9, ((int32_t)(int8_t)arc_ld8(_a)));
  }
  /* d04a0: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d04a4: csel w12, w8, w9, gt */
  ARC_W_W(c, 12, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d04a8: csel w9, w8, w9, lt */
  ARC_W_W(c, 9, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d04ac: cmp w12, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 10));
  /* d04b0: csel w8, w12, w10, gt */
  ARC_W_W(c, 8, (ARC_COND(c, 12) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 10)));
  /* d04b4: csel w13, w12, w10, lt */
  ARC_W_W(c, 13, (ARC_COND(c, 11) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 10)));
  /* d04b8: cmp w10, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 9));
  /* d04bc: strb w8, [x11] */
  arc_st8(ARC_X_R(c, 11), ARC_W_R(c, 8));
  /* d04c0: add x8, x0, #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(3)));
  /* d04c4: csel w10, w10, w9, lt */
  ARC_W_W(c, 10, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* d04c8: csel w9, w9, w13, lt */
  ARC_W_W(c, 9, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 13)));
  /* d04cc: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* d04d0: strb w10, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 10));
  /* d04d4: strb w9, [x0, #1] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 9));
  /* d04d8: b.eq #0xd0320 */
  if (ARC_COND(c, 0)) goto L_d0320;
  /* d04dc: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* d04e0: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* d04e4: b #0xd0514 */
  goto L_d0514;
L_d04e8:;
  /* d04e8: mov x11, x0 */
  ARC_X_W(c, 11, ARC_X_R(c, 0));
L_d04ec:;
  /* d04ec: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* d04f0: strb w12, [x11] */
  arc_st8(ARC_X_R(c, 11), ARC_W_R(c, 12));
  /* d04f4: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* d04f8: b.eq #0xd05d4 */
  if (ARC_COND(c, 0)) goto L_d05d4;
L_d04fc:;
  /* d04fc: add x12, x8, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* d0500: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
  /* d0504: add x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* d0508: cmp x12, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 1));
  /* d050c: mov x8, x12 */
  ARC_X_W(c, 8, ARC_X_R(c, 12));
  /* d0510: b.eq #0xd0320 */
  if (ARC_COND(c, 0)) goto L_d0320;
L_d0514:;
  /* d0514: ldrsb w12, [x8] */
  ARC_W_W(c, 12, ((int32_t)(int8_t)arc_ld8(ARC_X_R(c, 8))));
  /* d0518: ldrsb w11, [x11] */
  ARC_W_W(c, 11, ((int32_t)(int8_t)arc_ld8(ARC_X_R(c, 11))));
  /* d051c: cmp w12, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 11));
  /* d0520: b.ge #0xd04fc */
  if (ARC_COND(c, 10)) goto L_d04fc;
  /* d0524: mov x14, x10 */
  ARC_X_W(c, 14, ARC_X_R(c, 10));
L_d0528:;
  /* d0528: subs x13, x14, #1 */
  ARC_X_W(c, 13, arc_sub64(c, ARC_X_R(c, 14), UINT64_C(1)));
  /* d052c: strb w11, [x0, x14] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 14)), ARC_W_R(c, 11));
  /* d0530: b.eq #0xd04e8 */
  if (ARC_COND(c, 0)) goto L_d04e8;
  /* d0534: add x11, x0, x14 */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + ARC_X_R(c, 14)));
  /* d0538: mov x14, x13 */
  ARC_X_W(c, 14, ARC_X_R(c, 13));
  /* d053c: ldursb w11, [x11, #-2] */
  ARC_W_W(c, 11, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 11) + INT64_C(-2)))));
  /* d0540: cmp w12, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 11));
  /* d0544: b.lt #0xd0528 */
  if (ARC_COND(c, 11)) goto L_d0528;
  /* d0548: add x11, x0, x13 */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + ARC_X_R(c, 13)));
  /* d054c: b #0xd04ec */
  goto L_d04ec;
L_d0550:;
  /* d0550: ldrsb w8, [x0] */
  ARC_W_W(c, 8, ((int32_t)(int8_t)arc_ld8(ARC_X_R(c, 0))));
  /* d0554: ldrsb w9, [x0, #2] */
  ARC_W_W(c, 9, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 0) + INT64_C(2)))));
  /* d0558: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d055c: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0560: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0564: strb w10, [x0, #2] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 10));
  /* d0568: strb w8, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* d056c: ldrsb w8, [x0, #1] */
  ARC_W_W(c, 8, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 0) + INT64_C(1)))));
  /* d0570: ldursb w9, [x1, #-1] */
  ARC_W_W(c, 9, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 1) + INT64_C(-1)))));
  /* d0574: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d0578: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d057c: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0580: sturb w10, [x1, #-1] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(-1)), ARC_W_R(c, 10));
  /* d0584: ldrsb w10, [x0] */
  ARC_W_W(c, 10, ((int32_t)(int8_t)arc_ld8(ARC_X_R(c, 0))));
  /* d0588: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* d058c: csel w9, w10, w8, gt */
  ARC_W_W(c, 9, (ARC_COND(c, 12) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d0590: csel w8, w10, w8, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d0594: strb w9, [x0, #1] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 9));
  /* d0598: strb w8, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* d059c: ldrsb w8, [x0, #2] */
  ARC_W_W(c, 8, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 0) + INT64_C(2)))));
  /* d05a0: ldursb w9, [x1, #-1] */
  ARC_W_W(c, 9, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 1) + INT64_C(-1)))));
  /* d05a4: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d05a8: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d05ac: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d05b0: sturb w10, [x1, #-1] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(-1)), ARC_W_R(c, 10));
  /* d05b4: ldrsb w10, [x0, #1] */
  ARC_W_W(c, 10, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 0) + INT64_C(1)))));
  /* d05b8: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* d05bc: csel w9, w10, w8, gt */
  ARC_W_W(c, 9, (ARC_COND(c, 12) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d05c0: csel w8, w10, w8, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d05c4: strb w9, [x0, #2] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 9));
L_d05c8:;
  /* d05c8: strb w8, [x0, #1] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 8));
  /* d05cc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d05d0: ret  */
  return;
L_d05d4:;
  /* d05d4: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* d05d8: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* d05dc: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* d05e0: ret  */
  return;
}

void fn1_d77c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038810568));
  /* d77c8: bti c */
  /* bti: no architectural effect here */
  /* d77cc: nop  */
  /* nop: no architectural effect here */
  /* d77d0: adr x0, #0x4f8fc */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(325884)));
  /* d77d4: ret  */
  return;
}

void fn1_db63c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038826556));
  /* db63c: bti c */
  /* bti: no architectural effect here */
  /* db640: ldr x8, [x3] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 3)));
  /* db644: subs x9, x8, x1 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1)));
  /* db648: b.hs #0xdb654 */
  if (ARC_COND(c, 2)) goto L_db654;
  /* db64c: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* db650: ret  */
  return;
L_db654:;
  /* db654: ldr x10, [x2] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 2)));
  /* db658: neg x12, x0 */
  ARC_X_W(c, 12, ((uint64_t)0 - (uint64_t)(ARC_X_R(c, 0))));
  /* db65c: add x11, x10, x0 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) + ARC_X_R(c, 0)));
  /* db660: sub x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* db664: and x0, x11, x12 */
  ARC_X_W(c, 0, (ARC_X_R(c, 11) & ARC_X_R(c, 12)));
  /* db668: sub x10, x0, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 0) - ARC_X_R(c, 10)));
  /* db66c: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* db670: b.ls #0xdb67c */
  if (ARC_COND(c, 9)) goto L_db67c;
  /* db674: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* db678: ret  */
  return;
L_db67c:;
  /* db67c: sub x8, x8, x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 10)));
  /* db680: str x0, [x2] */
  arc_st64(ARC_X_R(c, 2), ARC_X_R(c, 0));
  /* db684: str x8, [x3] */
  arc_st64(ARC_X_R(c, 3), ARC_X_R(c, 8));
  /* db688: ret  */
  return;
}

void fn1_df9e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038843872));
  /* df9e0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* df9e4: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* df9e8: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* df9ec: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* df9f0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* df9f4: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* df9f8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* df9fc: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* dfa00: ldr x8, [x8, #0x910] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2320))));
  /* dfa04: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* dfa08: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* dfa0c: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* dfa10: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(915988));
  fn1_142860(c);
  /* dfa14: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* dfa18: add x0, x0, #0x19 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(25)));
  /* dfa1c: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(916000));
  fn1_1428f0(c);
  /* dfa20: add x22, x0, #0x18 */
  ARC_X_W(c, 22, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* dfa24: stp x21, x21, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* dfa28: add x2, x21, #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* dfa2c: str wzr, [x0, #0x10] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(16)), ARC_W_R(c, 31));
  /* dfa30: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* dfa34: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* dfa38: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(916028));
  fn1_1449d8(c);
  /* dfa3c: str x22, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 22));
  /* dfa40: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* dfa44: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* dfa48: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* dfa4c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* dfa50: ret  */
  return;
}

void fn1_e2394(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038854548));
  /* e2394: bti c */
  /* bti: no architectural effect here */
  /* e2398: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* e239c: tbnz w8, #0, #0xe23b4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_e23b4;
  /* e23a0: ldr x8, [x1, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* e23a4: ldr q0, [x1] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 1)), arc_ld64(ARC_X_R(c, 1) + 8));
  /* e23a8: str x8, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 8));
  /* e23ac: str q0, [x0] */
  arc_st64(ARC_X_R(c, 0), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 0) + 8, (c)->q[0].u64[1]);
  /* e23b0: ret  */
  return;
L_e23b4:;
  /* e23b4: ldp x2, x8, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* e23b8: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* e23bc: b #0xe22b8 */
  fn1_e22b8(c); return;
}

void fn1_e5724(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038867748));
  /* e5724: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e5728: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* e572c: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e5730: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e5734: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e5738: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* e573c: mov w8, #0xa */
  ARC_W_W(c, 8, UINT64_C(10));
  /* e5740: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* e5744: ldr x10, [x0, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e5748: strb w8, [sp, #0x18] */
  arc_st8(((c)->sp + INT64_C(24)), ARC_W_R(c, 8));
  /* e574c: mov w8, #0x7473 */
  ARC_W_W(c, 8, UINT64_C(29811));
  /* e5750: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* e5754: movk w8, #0x6c6f, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(1819213824)));
  /* e5758: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e575c: stur xzr, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), ARC_X_R(c, 31));
  /* e5760: stur w8, [sp, #0x19] */
  arc_st32(((c)->sp + INT64_C(25)), ARC_W_R(c, 8));
  /* e5764: mov w8, #0x64 */
  ARC_W_W(c, 8, UINT64_C(100));
  /* e5768: sturh w8, [sp, #0x1d] */
  arc_st16(((c)->sp + INT64_C(29)), ARC_W_R(c, 8));
  /* e576c: add x8, x0, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(4)));
  /* e5770: csel x20, x8, x10, eq */
  ARC_X_W(c, 20, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* e5774: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(939896));
  fn1_142a58(c);
  /* e5778: ldr w22, [x0] */
  ARC_W_W(c, 22, arc_ld32(ARC_X_R(c, 0)));
  /* e577c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e5780: str wzr, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 31));
  /* e5784: sub x1, x29, #0x20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* e5788: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e578c: bl #0x142fb0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(939920));
  fn1_142fb0(c);
  /* e5790: ldr w8, [x21] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 21)));
  /* e5794: str w22, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 22));
  /* e5798: cmp w8, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(34));
  /* e579c: b.eq #0xe57e0 */
  if (ARC_COND(c, 0)) goto L_e57e0;
  /* e57a0: ldur x8, [x29, #-0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))));
  /* e57a4: subs x8, x8, x20 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20)));
  /* e57a8: b.eq #0xe5824 */
  if (ARC_COND(c, 0)) goto L_e5824;
  /* e57ac: str q0, [sp] */
  arc_st64((c)->sp, (c)->q[0].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[0].u64[1]);
  /* e57b0: cbz x19, #0xe57bc */
  if ((ARC_X_R(c, 19)) == 0) goto L_e57bc;
  /* e57b4: asr x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* e57b8: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_e57bc:;
  /* e57bc: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e57c0: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(939972));
  fn1_142e00(c);
  /* e57c4: ldr q0, [sp] */
  arc_q_w(c, 0, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* e57c8: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e57cc: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e57d0: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e57d4: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* e57d8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e57dc: ret  */
  return;
L_e57e0:;
  /* e57e0: mov w9, #0x7473 */
  ARC_W_W(c, 9, UINT64_C(29811));
  /* e57e4: mov w8, #0x26 */
  ARC_W_W(c, 8, UINT64_C(38));
  /* e57e8: stur xzr, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 31));
  /* e57ec: movk w9, #0x6c6f, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1819213824)));
  /* e57f0: sturb w8, [x29, #-0x18] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-24)), ARC_W_R(c, 8));
  /* e57f4: mov w8, #0x64 */
  ARC_W_W(c, 8, UINT64_C(100));
  /* e57f8: stur w9, [x29, #-0x17] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-23)), ARC_W_R(c, 9));
  /* e57fc: adrp x9, #0x51000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(331776)));
  /* e5800: add x9, x9, #0xa7d */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2685)));
  /* e5804: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* e5808: sturb w8, [x29, #-0x13] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-19)), ARC_W_R(c, 8));
  /* e580c: ldur x8, [x9, #6] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(6))));
  /* e5810: sub x9, x29, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e5814: stur x10, [x29, #-0x12] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-18)), ARC_X_R(c, 10));
  /* e5818: stur x8, [x29, #-0xc] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-12)), ARC_X_R(c, 8));
  /* e581c: orr x0, x9, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* e5820: bl #0xda038 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(940068));
  fn1_da038(c);
L_e5824:;
  /* e5824: mov w9, #0x7473 */
  ARC_W_W(c, 9, UINT64_C(29811));
  /* e5828: mov w8, #0x28 */
  ARC_W_W(c, 8, UINT64_C(40));
  /* e582c: stur xzr, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 31));
  /* e5830: movk w9, #0x6c6f, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1819213824)));
  /* e5834: sturb w8, [x29, #-0x18] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-24)), ARC_W_R(c, 8));
  /* e5838: mov w8, #0x64 */
  ARC_W_W(c, 8, UINT64_C(100));
  /* e583c: stur w9, [x29, #-0x17] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-23)), ARC_W_R(c, 9));
  /* e5840: adrp x9, #0x50000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(327680)));
  /* e5844: add x9, x9, #0x1dd */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(477)));
  /* e5848: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* e584c: sturb w8, [x29, #-0x13] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-19)), ARC_W_R(c, 8));
  /* e5850: ldur x8, [x9, #7] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(7))));
  /* e5854: sub x9, x29, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e5858: stur x10, [x29, #-0x12] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-18)), ARC_X_R(c, 10));
  /* e585c: stur x8, [x29, #-0xb] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-11)), ARC_X_R(c, 8));
  /* e5860: orr x0, x9, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* e5864: bl #0xe78a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(940136));
  fn1_e78a0(c);
  /* e5868: b #0xe586c */
  goto L_e586c;
L_e586c:;
  /* e586c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e5870: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e5874: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(940152));
  fn1_142e00(c);
  /* e5878: b #0xe5880 */
  goto L_e5880;
  /* e587c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_e5880:;
  /* e5880: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e5884: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(940168));
  fn1_142e00(c);
  /* e5888: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e588c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(940176));
  fn1_9cc20(c);
}

void fn1_e93b4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038883252));
  /* e93b4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e93b8: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e93bc: str x27, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 27));
  /* e93c0: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* e93c4: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e93c8: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e93cc: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e93d0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e93d4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* e93d8: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* e93dc: cmp x22, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 22), UINT64_C(2));
  /* e93e0: b.hs #0xe93ec */
  if (ARC_COND(c, 2)) goto L_e93ec;
L_e93e4:;
  /* e93e4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* e93e8: b #0xe94bc */
  goto L_e94bc;
L_e93ec:;
  /* e93ec: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e93f0: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* e93f4: add w21, w1, #1 */
  ARC_W_W(c, 21, (ARC_W_R(c, 1) + UINT64_C(1)));
  /* e93f8: bl #0x1430b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(955388));
  fn1_1430b8(c);
  /* e93fc: add x8, x22, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* e9400: mov x23, xzr */
  ARC_X_W(c, 23, ARC_X_R(c, 31));
  /* e9404: asr x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63))));
  /* e9408: udiv x9, x0, x8 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 8)))));
  /* e940c: msub x8, x9, x8, x0 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 0)) - ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 8)))));
L_e9410:;
  /* e9410: add x24, x22, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* e9414: mov x26, x22 */
  ARC_X_W(c, 26, ARC_X_R(c, 22));
  /* e9418: lsr x22, x24, #1 */
  ARC_X_W(c, 22, ((uint64_t)(ARC_X_R(c, 24)) >> ((UINT64_C(1)) & 63)));
  /* e941c: sub x25, x22, #1 */
  ARC_X_W(c, 25, (ARC_X_R(c, 22) - UINT64_C(1)));
  /* e9420: b #0xe9444 */
  goto L_e9444;
L_e9424:;
  /* e9424: add x8, x9, x25, lsl #6 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 25)) << 6)));
  /* e9428: add w1, w20, #2 */
  ARC_W_W(c, 1, (ARC_W_R(c, 20) + UINT64_C(2)));
  /* e942c: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* e9430: add x2, x8, x23 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) + ARC_X_R(c, 23)));
  /* e9434: bl #0xe92e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(955448));
  fn1_e92e0(c);
  /* e9438: cmp w0, w20, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 0), ((uint64_t)(uint8_t)(ARC_W_R(c, 20))));
  /* e943c: b.eq #0xe94a4 */
  if (ARC_COND(c, 0)) goto L_e94a4;
L_e9440:;
  /* e9440: add x8, x27, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 27) + UINT64_C(1)));
L_e9444:;
  /* e9444: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* e9448: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* e944c: csel x27, xzr, x8, eq */
  ARC_X_W(c, 27, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 8)));
  /* e9450: tbz w26, #0, #0xe945c */
  if (((ARC_W_R(c, 26)) >> 0 & 1) == 0) goto L_e945c;
  /* e9454: cmp x27, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 27), ARC_X_R(c, 25));
  /* e9458: b.eq #0xe9424 */
  if (ARC_COND(c, 0)) goto L_e9424;
L_e945c:;
  /* e945c: add x8, x9, x27, lsl #6 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 27)) << 6)));
  /* e9460: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* e9464: mov w1, w21 */
  ARC_W_W(c, 1, ARC_W_R(c, 21));
  /* e9468: add x2, x8, x23 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) + ARC_X_R(c, 23)));
  /* e946c: bl #0xe92e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(955504));
  fn1_e92e0(c);
  /* e9470: cmp w0, w20, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 0), ((uint64_t)(uint8_t)(ARC_W_R(c, 20))));
  /* e9474: b.eq #0xe94b8 */
  if (ARC_COND(c, 0)) goto L_e94b8;
  /* e9478: cmp w0, w21, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 0), ((uint64_t)(uint8_t)(ARC_W_R(c, 21))));
  /* e947c: b.ne #0xe9440 */
  if (ARC_COND(c, 1)) goto L_e9440;
  /* e9480: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* e9484: add w1, w20, #2 */
  ARC_W_W(c, 1, (ARC_W_R(c, 20) + UINT64_C(2)));
  /* e9488: mov w0, w21 */
  ARC_W_W(c, 0, ARC_W_R(c, 21));
  /* e948c: add x8, x8, x27, lsl #6 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 27)) << 6)));
  /* e9490: add x2, x8, x23 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) + ARC_X_R(c, 23)));
  /* e9494: bl #0xe92e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(955544));
  fn1_e92e0(c);
  /* e9498: cmp w0, w21, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 0), ((uint64_t)(uint8_t)(ARC_W_R(c, 21))));
  /* e949c: b.ne #0xe9440 */
  if (ARC_COND(c, 1)) goto L_e9440;
  /* e94a0: mov x25, x27 */
  ARC_X_W(c, 25, ARC_X_R(c, 27));
L_e94a4:;
  /* e94a4: lsr x8, x25, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 25)) >> ((UINT64_C(1)) & 63)));
  /* e94a8: cmp x24, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 24), UINT64_C(3));
  /* e94ac: add x23, x23, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* e94b0: b.hi #0xe9410 */
  if (ARC_COND(c, 8)) goto L_e9410;
  /* e94b4: b #0xe93e4 */
  goto L_e93e4;
L_e94b8:;
  /* e94b8: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
L_e94bc:;
  /* e94bc: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e94c0: ldr x27, [sp, #0x10] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(16))));
  /* e94c4: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e94c8: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e94cc: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* e94d0: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e94d4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e94d8: ret  */
  return;
}

void fn1_eb36c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038891372));
  /* eb36c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eb370: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eb374: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* eb378: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eb37c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* eb380: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963460));
  fn1_142518(c);
  /* eb384: cbnz w0, #0xeb3ac */
  if ((ARC_W_R(c, 0)) != 0) goto L_eb3ac;
  /* eb388: str wzr, [x19, #0x88] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(136)), ARC_W_R(c, 31));
  /* eb38c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eb390: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963476));
  fn1_142560(c);
  /* eb394: add x0, x19, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* eb398: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963484));
  fn1_142578(c);
  /* eb39c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* eb3a0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eb3a4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eb3a8: ret  */
  return;
L_eb3ac:;
  /* eb3ac: nop  */
  /* nop: no architectural effect here */
  /* eb3b0: adr x1, #0x50f67 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331623)));
  /* eb3b4: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963512));
  fn1_142a40(c);
  /* eb3b8: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963516));
  fn1_a1454(c);
  /* eb3bc: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963520));
  fn1_a1454(c);
}

void fn1_ed214(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038899220));
  /* ed214: bti c */
  /* bti: no architectural effect here */
  /* ed218: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* ed21c: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* ed220: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_eff20(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038910752));
  /* eff20: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eff24: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* eff28: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eff2c: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* eff30: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* eff34: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* eff38: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* eff3c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* eff40: nop  */
  /* nop: no architectural effect here */
  /* eff44: adr x24, #0x15dc40 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1432640)));
  /* eff48: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* eff4c: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* eff50: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* eff54: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* eff58: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* eff5c: ldr x19, [x8, #0x30] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* eff60: cmp x19, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 24));
  /* eff64: str x19, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 19));
  /* eff68: b.eq #0xeff78 */
  if (ARC_COND(c, 0)) goto L_eff78;
  /* eff6c: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* eff70: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* eff74: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(982904));
  fn1_db2e0(c);
L_eff78:;
  /* eff78: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* eff7c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* eff80: ldr x1, [x1, #0xb40] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2880))));
  /* eff84: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(982920));
  fn1_143748(c);
  /* eff88: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* eff8c: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* eff90: mov w1, #0xa */
  ARC_W_W(c, 1, UINT64_C(10));
  /* eff94: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(982936));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* eff98: mov w23, w0 */
  ARC_W_W(c, 23, ARC_W_R(c, 0));
  /* eff9c: cmp x19, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 24));
  /* effa0: b.eq #0xeffc4 */
  if (ARC_COND(c, 0)) goto L_effc4;
  /* effa4: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* effa8: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* effac: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(982960));
  fn1_bd950(c);
  /* effb0: cbnz x0, #0xeffc4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_effc4;
  /* effb4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* effb8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* effbc: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* effc0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(982980));
  arc_dispatch(c, ARC_X_R(c, 8));
L_effc4:;
  /* effc4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* effc8: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* effcc: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* effd0: mov w3, w23 */
  ARC_W_W(c, 3, ARC_W_R(c, 23));
  /* effd4: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* effd8: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* effdc: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* effe0: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* effe4: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* effe8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* effec: b #0x1434f0 */
  fn1_1434f0(c); return;
  /* efff0: cmp x19, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 24));
  /* efff4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* efff8: b.eq #0xf001c */
  if (ARC_COND(c, 0)) goto L_f001c;
  /* efffc: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* f0000: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f0004: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(983048));
  fn1_bd950(c);
  /* f0008: cbnz x0, #0xf001c */
  if ((ARC_X_R(c, 0)) != 0) goto L_f001c;
  /* f000c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f0010: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f0014: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f0018: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(983068));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f001c:;
  /* f001c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f0020: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(983076));
  fn1_9cc20(c);
}

void fn1_f3c38(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038926392));
  /* f3c38: bti c */
  /* bti: no architectural effect here */
  /* f3c3c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f3c40: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f3c44: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_f6944(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038937924));
  /* f6944: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f6948: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* f694c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f6950: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* f6954: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f6958: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f695c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f6960: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f6964: nop  */
  /* nop: no architectural effect here */
  /* f6968: adr x24, #0x15dc40 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f696c: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* f6970: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* f6974: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* f6978: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f697c: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* f6980: ldr x19, [x8, #0x30] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f6984: cmp x19, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 24));
  /* f6988: str x19, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 19));
  /* f698c: b.eq #0xf699c */
  if (ARC_COND(c, 0)) goto L_f699c;
  /* f6990: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* f6994: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f6998: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1010076));
  fn1_db2e0(c);
L_f699c:;
  /* f699c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f69a0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f69a4: ldr x1, [x1, #0xb58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2904))));
  /* f69a8: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1010092));
  fn1_143748(c);
  /* f69ac: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f69b0: ldr x8, [x8, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* f69b4: mov w1, #0xa */
  ARC_W_W(c, 1, UINT64_C(10));
  /* f69b8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1010108));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f69bc: mov w23, w0 */
  ARC_W_W(c, 23, ARC_W_R(c, 0));
  /* f69c0: cmp x19, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 24));
  /* f69c4: b.eq #0xf69e8 */
  if (ARC_COND(c, 0)) goto L_f69e8;
  /* f69c8: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* f69cc: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f69d0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1010132));
  fn1_bd950(c);
  /* f69d4: cbnz x0, #0xf69e8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f69e8;
  /* f69d8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f69dc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f69e0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f69e4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1010152));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f69e8:;
  /* f69e8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* f69ec: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* f69f0: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* f69f4: mov w3, w23 */
  ARC_W_W(c, 3, ARC_W_R(c, 23));
  /* f69f8: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f69fc: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f6a00: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* f6a04: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f6a08: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* f6a0c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f6a10: b #0x143568 */
  fn1_143568(c); return;
  /* f6a14: cmp x19, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 24));
  /* f6a18: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f6a1c: b.eq #0xf6a40 */
  if (ARC_COND(c, 0)) goto L_f6a40;
  /* f6a20: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* f6a24: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f6a28: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1010220));
  fn1_bd950(c);
  /* f6a2c: cbnz x0, #0xf6a40 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f6a40;
  /* f6a30: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f6a34: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f6a38: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f6a3c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1010240));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f6a40:;
  /* f6a40: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f6a44: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1010248));
  fn1_9cc20(c);
}

void fn1_fbb88(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038958984));
  /* fbb88: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fbb8c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fbb90: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* fbb94: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fbb98: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fbb9c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fbba0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fbba4: ldr x8, [x8, #0xae8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2792))));
  /* fbba8: ldr x20, [x0, #0x78] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 0) + INT64_C(120))));
  /* fbbac: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* fbbb0: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* fbbb4: cbz x20, #0xfbbe4 */
  if ((ARC_X_R(c, 20)) == 0) goto L_fbbe4;
  /* fbbb8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fbbbc: bl #0x1435b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1031104));
  fn1_1435b0(c);
  /* fbbc0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fbbc4: bl #0x143700 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1031112));
  fn1_143700(c);
  /* fbbc8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* fbbcc: str xzr, [x19, #0x78] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(120)), ARC_X_R(c, 31));
  /* fbbd0: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* fbbd4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fbbd8: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* fbbdc: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* fbbe0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1031140));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fbbe4:;
  /* fbbe4: ldrb w8, [x19, #0xa0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(160))));
  /* fbbe8: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* fbbec: b.ne #0xfbbfc */
  if (ARC_COND(c, 1)) goto L_fbbfc;
  /* fbbf0: ldr x0, [x19, #0x40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* fbbf4: cbz x0, #0xfbbfc */
  if ((ARC_X_R(c, 0)) == 0) goto L_fbbfc;
  /* fbbf8: bl #0x1425a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1031164));
  fn1_1425a8(c);
L_fbbfc:;
  /* fbbfc: ldrb w8, [x19, #0xa1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(161))));
  /* fbc00: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* fbc04: b.ne #0xfbc14 */
  if (ARC_COND(c, 1)) goto L_fbc14;
  /* fbc08: ldr x0, [x19, #0x68] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(104))));
  /* fbc0c: cbz x0, #0xfbc14 */
  if ((ARC_X_R(c, 0)) == 0) goto L_fbc14;
  /* fbc10: bl #0x1425a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1031188));
  fn1_1425a8(c);
L_fbc14:;
  /* fbc14: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fbc18: nop  */
  /* nop: no architectural effect here */
  /* fbc1c: adr x9, #0x15dc40 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1432640)));
  /* fbc20: ldr x8, [x8, #0xaa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2728))));
  /* fbc24: ldr x20, [x19, #8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* fbc28: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* fbc2c: cmp x20, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 9));
  /* fbc30: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* fbc34: b.eq #0xfbc48 */
  if (ARC_COND(c, 0)) goto L_fbc48;
  /* fbc38: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* fbc3c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fbc40: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1031236));
  fn1_bd950(c);
  /* fbc44: cbz x0, #0xfbc5c */
  if ((ARC_X_R(c, 0)) == 0) goto L_fbc5c;
L_fbc48:;
  /* fbc48: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fbc4c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* fbc50: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fbc54: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fbc58: ret  */
  return;
L_fbc5c:;
  /* fbc5c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* fbc60: ldr x16, [x8, #0x10] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fbc64: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fbc68: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fbc6c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* fbc70: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fbc74: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fbc78: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
  /* fbc7c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* fbc80: b #0xfbc90 */
  goto L_fbc90;
  /* fbc84: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* fbc88: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fbc8c: bl #0x143700 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1031312));
  fn1_143700(c);
L_fbc90:;
  /* fbc90: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* fbc94: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1031320));
  fn1_142548(c);
  /* fbc98: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1031324));
  fn1_142980(c);
  /* fbc9c: b #0xfbbe4 */
  goto L_fbbe4;
  /* fbca0: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1031332));
  fn1_a1454(c);
}

void fn1_ff0a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038972576));
  /* ff0a0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ff0a4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ff0a8: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ff0ac: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ff0b0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* ff0b4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ff0b8: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* ff0bc: ldr x8, [x8, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* ff0c0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1044676));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ff0c4: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* ff0c8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ff0cc: ldr x1, [x1, #0xbc0] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3008))));
  /* ff0d0: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1044692));
  fn1_143748(c);
  /* ff0d4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* ff0d8: str x0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), ARC_X_R(c, 0));
  /* ff0dc: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* ff0e0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1044708));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ff0e4: and w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) & UINT64_C(1)));
  /* ff0e8: strb w8, [x19, #0x58] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(88)), ARC_W_R(c, 8));
  /* ff0ec: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ff0f0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ff0f4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ff0f8: ret  */
  return;
}

void fn1_10c6ac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039027372));
  /* 10c6ac: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 10c6b0: sub sp, sp, #0x1a0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(416)));
  /* 10c6b4: stp x29, x30, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 10c6b8: stp x28, x27, [sp, #0x150] */
  { const uint64_t _pa = ((c)->sp + INT64_C(336));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 10c6bc: stp x26, x25, [sp, #0x160] */
  { const uint64_t _pa = ((c)->sp + INT64_C(352));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 10c6c0: stp x24, x23, [sp, #0x170] */
  { const uint64_t _pa = ((c)->sp + INT64_C(368));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 10c6c4: stp x22, x21, [sp, #0x180] */
  { const uint64_t _pa = ((c)->sp + INT64_C(384));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 10c6c8: stp x20, x19, [sp, #0x190] */
  { const uint64_t _pa = ((c)->sp + INT64_C(400));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 10c6cc: add x29, sp, #0x140 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(320)));
  /* 10c6d0: ldr w9, [x2, #8] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 2) + INT64_C(8))));
  /* 10c6d4: mov w8, #0x25 */
  ARC_W_W(c, 8, UINT64_C(37));
  /* 10c6d8: mov w19, w3 */
  ARC_W_W(c, 19, ARC_W_R(c, 3));
  /* 10c6dc: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 10c6e0: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 10c6e4: stur x8, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 8));
  /* 10c6e8: sub x8, x29, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 10c6ec: str q0, [sp] */
  arc_st64((c)->sp, (c)->q[0].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[0].u64[1]);
  /* 10c6f0: tbnz w9, #0xb, #0x10c700 */
  if (((ARC_W_R(c, 9)) >> 11 & 1) != 0) goto L_10c700;
  /* 10c6f4: orr x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(1)));
  /* 10c6f8: tbnz w9, #0xa, #0x10c710 */
  if (((ARC_W_R(c, 9)) >> 10 & 1) != 0) goto L_10c710;
  /* 10c6fc: b #0x10c718 */
  goto L_10c718;
L_10c700:;
  /* 10c700: mov w10, #0x2b */
  ARC_W_W(c, 10, UINT64_C(43));
  /* 10c704: orr x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(2)));
  /* 10c708: sturb w10, [x29, #-7] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-7)), ARC_W_R(c, 10));
  /* 10c70c: tbz w9, #0xa, #0x10c718 */
  if (((ARC_W_R(c, 9)) >> 10 & 1) == 0) goto L_10c718;
L_10c710:;
  /* 10c710: mov w10, #0x23 */
  ARC_W_W(c, 10, UINT64_C(35));
  /* 10c714: strb w10, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 10));
  }
L_10c718:;
  /* 10c718: mov w10, #0x104 */
  ARC_W_W(c, 10, UINT64_C(260));
  /* 10c71c: nop  */
  /* nop: no architectural effect here */
  /* 10c720: adr x22, #0x15dc38 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10c724: and w10, w9, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) & ARC_W_R(c, 10)));
  /* 10c728: cmp w10, #0x104 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(260));
  /* 10c72c: b.ne #0x10c7a0 */
  if (ARC_COND(c, 1)) goto L_10c7a0;
  /* 10c730: mov w10, #0x4c */
  ARC_W_W(c, 10, UINT64_C(76));
  /* 10c734: tst w9, #0x4000 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(16384)));
  /* 10c738: mov w9, #0x41 */
  ARC_W_W(c, 9, UINT64_C(65));
  /* 10c73c: mov w11, #0x61 */
  ARC_W_W(c, 11, UINT64_C(97));
  /* 10c740: strb w10, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* 10c744: sub x10, x29, #0x26 */
  ARC_X_W(c, 10, (ARC_X_R(c, 29) - UINT64_C(38)));
  /* 10c748: csel w9, w11, w9, eq */
  ARC_W_W(c, 9, (ARC_COND(c, 0) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 9)));
  /* 10c74c: stur x10, [x29, #-0x30] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-48)), ARC_X_R(c, 10));
  /* 10c750: strb w9, [x8, #1] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(1)), ARC_W_R(c, 9));
  /* 10c754: ldarb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 10c758: tbz w8, #0, #0x10c990 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10c990;
L_10c75c:;
  /* 10c75c: adrp x23, #0x15d000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 10c760: ldr q0, [sp] */
  arc_q_w(c, 0, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* 10c764: sub x0, x29, #0x26 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(38)));
  /* 10c768: ldr x2, [x23, #0xc30] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 23) + INT64_C(3120))));
  /* 10c76c: sub x3, x29, #8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 10c770: mov w1, #0x1e */
  ARC_W_W(c, 1, UINT64_C(30));
  /* 10c774: bl #0x136860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1099640));
  fn1_136860(c);
  /* 10c778: cmp w0, #0x1d */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(29));
  /* 10c77c: b.le #0x10c85c */
  if (ARC_COND(c, 13)) goto L_10c85c;
  /* 10c780: ldarb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 10c784: tbz w8, #0, #0x10ca08 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10ca08;
L_10c788:;
  /* 10c788: ldr x1, [x23, #0xc30] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 23) + INT64_C(3120))));
  /* 10c78c: ldr q0, [sp] */
  arc_q_w(c, 0, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* 10c790: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 10c794: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 10c798: bl #0x136920 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1099676));
  fn1_136920(c);
  /* 10c79c: b #0x10c84c */
  goto L_10c84c;
L_10c7a0:;
  /* 10c7a0: mov w11, #0x2a2e */
  ARC_W_W(c, 11, UINT64_C(10798));
  /* 10c7a4: mov w12, #0x4c */
  ARC_W_W(c, 12, UINT64_C(76));
  /* 10c7a8: cmp w10, #0x100 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(256));
  /* 10c7ac: strh w11, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 11));
  /* 10c7b0: strb w12, [x8, #2] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(2)), ARC_W_R(c, 12));
  /* 10c7b4: b.eq #0x10c7d0 */
  if (ARC_COND(c, 0)) goto L_10c7d0;
  /* 10c7b8: cmp w10, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(4));
  /* 10c7bc: b.ne #0x10c7e0 */
  if (ARC_COND(c, 1)) goto L_10c7e0;
  /* 10c7c0: tst w9, #0x4000 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(16384)));
  /* 10c7c4: mov w9, #0x46 */
  ARC_W_W(c, 9, UINT64_C(70));
  /* 10c7c8: mov w10, #0x66 */
  ARC_W_W(c, 10, UINT64_C(102));
  /* 10c7cc: b #0x10c7ec */
  goto L_10c7ec;
L_10c7d0:;
  /* 10c7d0: tst w9, #0x4000 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(16384)));
  /* 10c7d4: mov w9, #0x45 */
  ARC_W_W(c, 9, UINT64_C(69));
  /* 10c7d8: mov w10, #0x65 */
  ARC_W_W(c, 10, UINT64_C(101));
  /* 10c7dc: b #0x10c7ec */
  goto L_10c7ec;
L_10c7e0:;
  /* 10c7e0: tst w9, #0x4000 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(16384)));
  /* 10c7e4: mov w9, #0x47 */
  ARC_W_W(c, 9, UINT64_C(71));
  /* 10c7e8: mov w10, #0x67 */
  ARC_W_W(c, 10, UINT64_C(103));
L_10c7ec:;
  /* 10c7ec: csel w9, w10, w9, eq */
  ARC_W_W(c, 9, (ARC_COND(c, 0) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* 10c7f0: adrp x23, #0x15d000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 10c7f4: strb w9, [x8, #3] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(3)), ARC_W_R(c, 9));
  /* 10c7f8: sub x8, x29, #0x26 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(38)));
  /* 10c7fc: stur x8, [x29, #-0x30] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-48)), ARC_X_R(c, 8));
  /* 10c800: ldarb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 10c804: tbz w8, #0, #0x10c9cc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10c9cc;
L_10c808:;
  /* 10c808: ldr x2, [x23, #0xc30] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 23) + INT64_C(3120))));
  /* 10c80c: ldr w4, [x20, #0x10] */
  ARC_W_W(c, 4, arc_ld32((ARC_X_R(c, 20) + INT64_C(16))));
  /* 10c810: sub x0, x29, #0x26 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(38)));
  /* 10c814: ldr q0, [sp] */
  arc_q_w(c, 0, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* 10c818: sub x3, x29, #8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 10c81c: mov w1, #0x1e */
  ARC_W_W(c, 1, UINT64_C(30));
  /* 10c820: bl #0x136860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1099812));
  fn1_136860(c);
  /* 10c824: cmp w0, #0x1d */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(29));
  /* 10c828: b.le #0x10c85c */
  if (ARC_COND(c, 13)) goto L_10c85c;
  /* 10c82c: ldarb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 10c830: tbz w8, #0, #0x10ca40 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10ca40;
L_10c834:;
  /* 10c834: ldr x1, [x23, #0xc30] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 23) + INT64_C(3120))));
  /* 10c838: ldr w3, [x20, #0x10] */
  ARC_W_W(c, 3, arc_ld32((ARC_X_R(c, 20) + INT64_C(16))));
  /* 10c83c: ldr q0, [sp] */
  arc_q_w(c, 0, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* 10c840: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 10c844: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 10c848: bl #0x136920 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1099852));
  fn1_136920(c);
L_10c84c:;
  /* 10c84c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 10c850: b.eq #0x10ca04 */
  if (ARC_COND(c, 0)) goto L_10ca04;
  /* 10c854: ldur x22, [x29, #-0x30] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 29) + INT64_C(-48))));
  /* 10c858: b #0x10c860 */
  goto L_10c860;
L_10c85c:;
  /* 10c85c: mov x22, xzr */
  ARC_X_W(c, 22, ARC_X_R(c, 31));
L_10c860:;
  /* 10c860: ldr w9, [x20, #8] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 20) + INT64_C(8))));
  /* 10c864: ldur x23, [x29, #-0x30] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 29) + INT64_C(-48))));
  /* 10c868: sxtw x8, w0 */
  ARC_X_W(c, 8, ((int64_t)(int32_t)(ARC_W_R(c, 0))));
  /* 10c86c: mov w10, #0xb0 */
  ARC_W_W(c, 10, UINT64_C(176));
  /* 10c870: and w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & ARC_W_R(c, 10)));
  /* 10c874: add x24, x23, x8 */
  ARC_X_W(c, 24, (ARC_X_R(c, 23) + ARC_X_R(c, 8)));
  /* 10c878: cmp w9, #0x20 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(32));
  /* 10c87c: mov x26, x24 */
  ARC_X_W(c, 26, ARC_X_R(c, 24));
  /* 10c880: b.eq #0x10c8d4 */
  if (ARC_COND(c, 0)) goto L_10c8d4;
  /* 10c884: cmp w9, #0x10 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(16));
  /* 10c888: b.ne #0x10c8d0 */
  if (ARC_COND(c, 1)) goto L_10c8d0;
  /* 10c88c: ldrb w9, [x23] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 23)));
  /* 10c890: cmp w9, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(45));
  /* 10c894: b.eq #0x10c8a0 */
  if (ARC_COND(c, 0)) goto L_10c8a0;
  /* 10c898: cmp w9, #0x2b */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(43));
  /* 10c89c: b.ne #0x10c8a8 */
  if (ARC_COND(c, 1)) goto L_10c8a8;
L_10c8a0:;
  /* 10c8a0: add x26, x23, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* 10c8a4: b #0x10c8d4 */
  goto L_10c8d4;
L_10c8a8:;
  /* 10c8a8: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 10c8ac: b.lt #0x10c8d0 */
  if (ARC_COND(c, 11)) goto L_10c8d0;
  /* 10c8b0: cmp w9, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(48));
  /* 10c8b4: b.ne #0x10c8d0 */
  if (ARC_COND(c, 1)) goto L_10c8d0;
  /* 10c8b8: ldrb w9, [x23, #1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 23) + INT64_C(1))));
  /* 10c8bc: orr w9, w9, #0x20 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(32)));
  /* 10c8c0: cmp w9, #0x78 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(120));
  /* 10c8c4: b.ne #0x10c8d0 */
  if (ARC_COND(c, 1)) goto L_10c8d0;
  /* 10c8c8: add x26, x23, #2 */
  ARC_X_W(c, 26, (ARC_X_R(c, 23) + UINT64_C(2)));
  /* 10c8cc: b #0x10c8d4 */
  goto L_10c8d4;
L_10c8d0:;
  /* 10c8d0: mov x26, x23 */
  ARC_X_W(c, 26, ARC_X_R(c, 23));
L_10c8d4:;
  /* 10c8d4: sub x9, x29, #0x26 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) - UINT64_C(38)));
  /* 10c8d8: cmp x23, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 9));
  /* 10c8dc: b.eq #0x10c8f8 */
  if (ARC_COND(c, 0)) goto L_10c8f8;
  /* 10c8e0: lsl x0, x8, #3 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(3)) & 63)));
  /* 10c8e4: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100008));
  fn1_1428a8(c);
  /* 10c8e8: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* 10c8ec: mov x27, x0 */
  ARC_X_W(c, 27, ARC_X_R(c, 0));
  /* 10c8f0: cbnz x0, #0x10c900 */
  if ((ARC_X_R(c, 0)) != 0) goto L_10c900;
  /* 10c8f4: bl #0x142c08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100024));
  fn1_142c08(c);
L_10c8f8:;
  /* 10c8f8: mov x25, xzr */
  ARC_X_W(c, 25, ARC_X_R(c, 31));
  /* 10c8fc: add x27, sp, #0x2c */
  ARC_X_W(c, 27, ((c)->sp + UINT64_C(44)));
L_10c900:;
  /* 10c900: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 10c904: add x1, x20, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(48)));
  /* 10c908: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100044));
  fn1_143460(c);
  /* 10c90c: add x4, sp, #0x20 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(32)));
  /* 10c910: add x5, sp, #0x18 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(24)));
  /* 10c914: add x6, sp, #0x10 */
  ARC_X_W(c, 6, ((c)->sp + UINT64_C(16)));
  /* 10c918: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 10c91c: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 10c920: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 10c924: mov x3, x27 */
  ARC_X_W(c, 3, ARC_X_R(c, 27));
  /* 10c928: bl #0x143940 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100076));
  fn1_143940(c);
  /* 10c92c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 10c930: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100084));
  fn1_143478(c);
  /* 10c934: ldp x3, x2, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    ARC_X_W(c, 3, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 10c938: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 10c93c: mov x1, x27 */
  ARC_X_W(c, 1, ARC_X_R(c, 27));
  /* 10c940: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* 10c944: mov w5, w19 */
  ARC_W_W(c, 5, ARC_W_R(c, 19));
  /* 10c948: bl #0x10cdc0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100108));
  fn1_10cdc0(c);
  /* 10c94c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10c950: cbz x25, #0x10c95c */
  if ((ARC_X_R(c, 25)) == 0) goto L_10c95c;
  /* 10c954: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 10c958: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100124));
  fn1_142800(c);
L_10c95c:;
  /* 10c95c: cbz x22, #0x10c968 */
  if ((ARC_X_R(c, 22)) == 0) goto L_10c968;
  /* 10c960: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 10c964: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100136));
  fn1_142800(c);
L_10c968:;
  /* 10c968: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10c96c: ldp x20, x19, [sp, #0x190] */
  { const uint64_t _pa = ((c)->sp + INT64_C(400));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 10c970: ldp x22, x21, [sp, #0x180] */
  { const uint64_t _pa = ((c)->sp + INT64_C(384));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 10c974: ldp x24, x23, [sp, #0x170] */
  { const uint64_t _pa = ((c)->sp + INT64_C(368));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 10c978: ldp x26, x25, [sp, #0x160] */
  { const uint64_t _pa = ((c)->sp + INT64_C(352));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 10c97c: ldp x28, x27, [sp, #0x150] */
  { const uint64_t _pa = ((c)->sp + INT64_C(336));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 10c980: ldp x29, x30, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 10c984: add sp, sp, #0x1a0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(416)));
  /* 10c988: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 10c98c: ret  */
  return;
L_10c990:;
  /* 10c990: nop  */
  /* nop: no architectural effect here */
  /* 10c994: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10c998: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100188));
  fn1_1424b8(c);
  /* 10c99c: cbz w0, #0x10c75c */
  if ((ARC_W_R(c, 0)) == 0) goto L_10c75c;
  /* 10c9a0: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 10c9a4: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 10c9a8: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 10c9ac: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 10c9b0: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100212));
  fn1_1441e0(c);
  /* 10c9b4: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 10c9b8: str x0, [x8, #0xc30] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 10c9bc: nop  */
  /* nop: no architectural effect here */
  /* 10c9c0: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10c9c4: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100232));
  fn1_1424d0(c);
  /* 10c9c8: b #0x10c75c */
  goto L_10c75c;
L_10c9cc:;
  /* 10c9cc: nop  */
  /* nop: no architectural effect here */
  /* 10c9d0: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10c9d4: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100248));
  fn1_1424b8(c);
  /* 10c9d8: cbz w0, #0x10c808 */
  if ((ARC_W_R(c, 0)) == 0) goto L_10c808;
  /* 10c9dc: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 10c9e0: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 10c9e4: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 10c9e8: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 10c9ec: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100272));
  fn1_1441e0(c);
  /* 10c9f0: str x0, [x23, #0xc30] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 10c9f4: nop  */
  /* nop: no architectural effect here */
  /* 10c9f8: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10c9fc: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100288));
  fn1_1424d0(c);
  /* 10ca00: b #0x10c808 */
  goto L_10c808;
L_10ca04:;
  /* 10ca04: bl #0x142c08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100296));
  fn1_142c08(c);
L_10ca08:;
  /* 10ca08: nop  */
  /* nop: no architectural effect here */
  /* 10ca0c: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10ca10: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100308));
  fn1_1424b8(c);
  /* 10ca14: cbz w0, #0x10c788 */
  if ((ARC_W_R(c, 0)) == 0) goto L_10c788;
  /* 10ca18: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 10ca1c: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 10ca20: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 10ca24: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 10ca28: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100332));
  fn1_1441e0(c);
  /* 10ca2c: str x0, [x23, #0xc30] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 10ca30: nop  */
  /* nop: no architectural effect here */
  /* 10ca34: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10ca38: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100348));
  fn1_1424d0(c);
  /* 10ca3c: b #0x10c788 */
  goto L_10c788;
L_10ca40:;
  /* 10ca40: nop  */
  /* nop: no architectural effect here */
  /* 10ca44: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10ca48: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100364));
  fn1_1424b8(c);
  /* 10ca4c: cbz w0, #0x10c834 */
  if ((ARC_W_R(c, 0)) == 0) goto L_10c834;
  /* 10ca50: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 10ca54: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 10ca58: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 10ca5c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 10ca60: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100388));
  fn1_1441e0(c);
  /* 10ca64: str x0, [x23, #0xc30] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 10ca68: nop  */
  /* nop: no architectural effect here */
  /* 10ca6c: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10ca70: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100404));
  fn1_1424d0(c);
  /* 10ca74: b #0x10c834 */
  goto L_10c834;
  /* 10ca78: b #0x10ca84 */
  goto L_10ca84;
  /* 10ca7c: b #0x10ca84 */
  goto L_10ca84;
  /* 10ca80: b #0x10ca84 */
  goto L_10ca84;
L_10ca84:;
  /* 10ca84: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10ca88: nop  */
  /* nop: no architectural effect here */
  /* 10ca8c: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10ca90: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100436));
  fn1_1424e8(c);
  /* 10ca94: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10ca98: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100444));
  fn1_9cc20(c);
  /* 10ca9c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100448));
  fn1_9cc20(c);
  /* 10caa0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10caa4: cbz x22, #0x10cacc */
  if ((ARC_X_R(c, 22)) == 0) goto L_10cacc;
  /* 10caa8: b #0x10cae0 */
  goto L_10cae0;
  /* 10caac: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100464));
  fn1_9cc20(c);
  /* 10cab0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10cab4: b #0x10cac4 */
  goto L_10cac4;
  /* 10cab8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10cabc: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 10cac0: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100484));
  fn1_143478(c);
L_10cac4:;
  /* 10cac4: cbnz x25, #0x10cad4 */
  if ((ARC_X_R(c, 25)) != 0) goto L_10cad4;
  /* 10cac8: cbnz x22, #0x10cae0 */
  if ((ARC_X_R(c, 22)) != 0) goto L_10cae0;
L_10cacc:;
  /* 10cacc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10cad0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100500));
  fn1_9cc20(c);
L_10cad4:;
  /* 10cad4: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 10cad8: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100508));
  fn1_142800(c);
  /* 10cadc: cbz x22, #0x10cacc */
  if ((ARC_X_R(c, 22)) == 0) goto L_10cacc;
L_10cae0:;
  /* 10cae0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 10cae4: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100520));
  fn1_142800(c);
  /* 10cae8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10caec: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100528));
  fn1_9cc20(c);
}

void fn1_113bd0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057360));
  /* 113bd0: bti c */
  /* bti: no architectural effect here */
  /* 113bd4: stp xzr, xzr, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 113bd8: str xzr, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 31));
  /* 113bdc: ret  */
  return;
}

void fn1_114144(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039058756));
  /* 114144: bti c */
  /* bti: no architectural effect here */
  /* 114148: mov x9, x0 */
  ARC_X_W(c, 9, ARC_X_R(c, 0));
  /* 11414c: ldrb w10, [x9, #0x48]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(72));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(72));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* 114150: tbnz w10, #0, #0x114168 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_114168;
  /* 114154: ldr q0, [x9] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 9)), arc_ld64(ARC_X_R(c, 9) + 8));
  /* 114158: ldr x9, [x9, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(16))));
  /* 11415c: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* 114160: str x9, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 9));
  /* 114164: ret  */
  return;
L_114168:;
  /* 114168: ldp x2, x1, [x0, #0x50] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(80));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 11416c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 114170: b #0xe22b8 */
  fn1_e22b8(c); return;
}

void fn1_120390(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039108496));
  /* 120390: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 120394: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 120398: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12039c: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 1203a0: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1203a4: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1203a8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1203ac: adrp x23, #0x151000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1203b0: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1203b4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1203b8: ldr x23, [x23, #0xc20] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 23) + INT64_C(3104))));
  /* 1203bc: ldar x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 1203c0: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 1203c4: b.eq #0x120480 */
  if (ARC_COND(c, 0)) goto L_120480;
  /* 1203c8: nop  */
  /* nop: no architectural effect here */
  /* 1203cc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1203d0: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1180628));
  fn1_142518(c);
  /* 1203d4: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 1203d8: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1203dc: b.ne #0x120408 */
  if (ARC_COND(c, 1)) goto L_120408;
  /* 1203e0: nop  */
  /* nop: no architectural effect here */
  /* 1203e4: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 1203e8: nop  */
  /* nop: no architectural effect here */
  /* 1203ec: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_1203f0:;
  /* 1203f0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1203f4: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 1203f8: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1180668));
  fn1_142530(c);
  /* 1203fc: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 120400: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 120404: b.eq #0x1203f0 */
  if (ARC_COND(c, 0)) goto L_1203f0;
L_120408:;
  /* 120408: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 12040c: cbz x8, #0x120420 */
  if ((ARC_X_R(c, 8)) == 0) goto L_120420;
  /* 120410: nop  */
  /* nop: no architectural effect here */
  /* 120414: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 120418: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1180700));
  fn1_142560(c);
  /* 12041c: b #0x120480 */
  goto L_120480;
L_120420:;
  /* 120420: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 120424: str x23, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 23));
  /* 120428: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 12042c: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 120430: nop  */
  /* nop: no architectural effect here */
  /* 120434: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 120438: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1180732));
  fn1_142560(c);
  /* 12043c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 120440: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 120444: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 120448: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1180748));
  fn1_a2030(c);
  /* 12044c: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 120450: str w8, [x23, #8] */
  arc_st32((ARC_X_R(c, 23) + INT64_C(8)), ARC_W_R(c, 8));
  /* 120454: nop  */
  /* nop: no architectural effect here */
  /* 120458: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 12045c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1180768));
  fn1_142518(c);
  /* 120460: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 120464: stlr x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 120468: nop  */
  /* nop: no architectural effect here */
  /* 12046c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 120470: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1180788));
  fn1_142560(c);
  /* 120474: nop  */
  /* nop: no architectural effect here */
  /* 120478: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 12047c: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1180800));
  fn1_142578(c);
L_120480:;
  /* 120480: ldrsw x8, [x23, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 23) + INT64_C(8)))));
  /* 120484: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 120488: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 12048c: sub x22, x8, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 120490: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1180820));
  fn1_db2e0(c);
  /* 120494: mov x21, x20 */
  ARC_X_W(c, 21, ARC_X_R(c, 20));
  /* 120498: ldp x8, x9, [x21, #0x10]! */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 12049c: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 1204a0: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 1204a4: cmp x10, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 22));
  /* 1204a8: b.hi #0x1204d4 */
  if (ARC_COND(c, 8)) goto L_1204d4;
  /* 1204ac: add x9, x22, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* 1204b0: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 1204b4: b.ls #0x1204c8 */
  if (ARC_COND(c, 9)) goto L_1204c8;
  /* 1204b8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1204bc: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1180864));
  fn1_1352bc(c);
  /* 1204c0: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 1204c4: b #0x1204d4 */
  goto L_1204d4;
L_1204c8:;
  /* 1204c8: b.hs #0x1204d4 */
  if (ARC_COND(c, 2)) goto L_1204d4;
  /* 1204cc: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 1204d0: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_1204d4:;
  /* 1204d4: ldr x20, [x8, x22, lsl #3] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3))));
  /* 1204d8: cbz x20, #0x1204fc */
  if ((ARC_X_R(c, 20)) == 0) goto L_1204fc;
  /* 1204dc: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 1204e0: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 1204e4: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1180904));
  fn1_bd950(c);
  /* 1204e8: cbnz x0, #0x1204fc */
  if ((ARC_X_R(c, 0)) != 0) goto L_1204fc;
  /* 1204ec: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1204f0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1204f4: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 1204f8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1180924));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1204fc:;
  /* 1204fc: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 120500: str x19, [x8, x22, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3)), ARC_X_R(c, 19));
  /* 120504: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 120508: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 12050c: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 120510: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 120514: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 120518: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12051c: ret  */
  return;
  /* 120520: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 120524: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 120528: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 12052c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1180976));
  fn1_bd950(c);
  /* 120530: cbnz x0, #0x120558 */
  if ((ARC_X_R(c, 0)) != 0) goto L_120558;
  /* 120534: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 120538: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12053c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 120540: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1180996));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 120544: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 120548: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1181004));
  fn1_9cc20(c);
  /* 12054c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 120550: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 120554: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1181016));
  fn1_d2a78(c);
L_120558:;
  /* 120558: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12055c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1181024));
  fn1_9cc20(c);
}

void fn1_126ca4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039135396));
  /* 126ca4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 126ca8: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 126cac: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* 126cb0: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 126cb4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 126cb8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 126cbc: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 126cc0: cmp x1, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 2));
  /* 126cc4: b.eq #0x126d40 */
  if (ARC_COND(c, 0)) goto L_126d40;
  /* 126cc8: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 126ccc: nop  */
  /* nop: no architectural effect here */
  /* 126cd0: adr x21, #0x15dc38 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 126cd4: adrp x22, #0x15d000 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 126cd8: b #0x126d00 */
  goto L_126d00;
L_126cdc:;
  /* 126cdc: sub w8, w23, #0x5b */
  ARC_W_W(c, 8, (ARC_W_R(c, 23) - UINT64_C(91)));
  /* 126ce0: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 126ce4: and w8, w8, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(255)));
  /* 126ce8: add w10, w9, #0x20 */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) + UINT64_C(32)));
  /* 126cec: cmp w8, #0xe6 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(230));
  /* 126cf0: csel w23, w9, w10, lo */
  ARC_W_W(c, 23, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
L_126cf4:;
  /* 126cf4: strb w23, [x19], #1 */
  { const uint64_t _a = ARC_X_R(c, 19);
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 23));
  }
  /* 126cf8: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* 126cfc: b.eq #0x126d40 */
  if (ARC_COND(c, 0)) goto L_126d40;
L_126d00:;
  /* 126d00: ldrsb w23, [x19] */
  ARC_W_W(c, 23, ((int32_t)(int8_t)arc_ld8(ARC_X_R(c, 19))));
  /* 126d04: tbnz w23, #0x1f, #0x126cf4 */
  if (((ARC_W_R(c, 23)) >> 31 & 1) != 0) goto L_126cf4;
  /* 126d08: ldarb w8, [x21] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 21)));
  /* 126d0c: tbnz w8, #0, #0x126cdc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_126cdc;
  /* 126d10: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 126d14: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1207576));
  fn1_1424b8(c);
  /* 126d18: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 126d1c: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 126d20: cbz w0, #0x126cdc */
  if ((ARC_W_R(c, 0)) == 0) goto L_126cdc;
  /* 126d24: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 126d28: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 126d2c: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1207600));
  fn1_1441e0(c);
  /* 126d30: str x0, [x22, #0xc30] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 126d34: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 126d38: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1207612));
  fn1_1424d0(c);
  /* 126d3c: b #0x126cdc */
  goto L_126cdc;
L_126d40:;
  /* 126d40: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 126d44: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 126d48: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 126d4c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 126d50: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 126d54: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 126d58: ret  */
  return;
  /* 126d5c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 126d60: nop  */
  /* nop: no architectural effect here */
  /* 126d64: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 126d68: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1207660));
  fn1_1424e8(c);
  /* 126d6c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 126d70: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1207668));
  fn1_9cc20(c);
}

void fn1_129218(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039144984));
  /* 129218: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12921c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 129220: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 129224: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 129228: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12922c: bl #0x144060 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1217072));
  fn1_144060(c);
  /* 129230: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 129234: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* 129238: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12923c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 129240: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 129244: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_12ac08(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039151624));
  /* 12ac08: bti c */
  /* bti: no architectural effect here */
  /* 12ac0c: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 12ac10: ret  */
  return;
}

void fn1_12c220(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039157280));
  /* 12c220: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12c224: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12c228: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12c22c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12c230: mov w8, #0x2c2e */
  ARC_W_W(c, 8, UINT64_C(11310));
  /* 12c234: str xzr, [x0, #0x28] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(40)), ARC_X_R(c, 31));
  /* 12c238: sub x9, x2, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 2) - UINT64_C(1)));
  /* 12c23c: strh w8, [x0, #0x10] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(16)), ARC_W_R(c, 8));
  /* 12c240: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 12c244: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12c248: ldr x8, [x8, #0xcd0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3280))));
  /* 12c24c: stp xzr, xzr, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 12c250: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 12c254: stp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 12c258: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 12c25c: ldr x9, [x1, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* 12c260: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 12c264: csinc x1, x9, x1, ne */
  ARC_X_W(c, 1, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 1)) + 1)));
  /* 12c268: bl #0x143b80 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229420));
  fn1_143b80(c);
  /* 12c26c: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12c270: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12c274: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12c278: ret  */
  return;
  /* 12c27c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 12c280: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12c284: bl #0x143b50 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229448));
  fn1_143b50(c);
  /* 12c288: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12c28c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229456));
  fn1_9cc20(c);
}

void fn1_134810(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039191568));
  /* 134810: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 134814: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 134818: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 13481c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 134820: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 134824: bl #0x144048 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1263656));
  fn1_144048(c);
  /* 134828: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13482c: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* 134830: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 134834: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 134838: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13483c: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_13506c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039193708));
  /* 13506c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 135070: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 135074: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 135078: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 13507c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 135080: bl #0x134fa8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1265796));
  fn1_134fa8(c);
  /* 135084: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 135088: mov w1, #0x88 */
  ARC_W_W(c, 1, UINT64_C(136));
  /* 13508c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 135090: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 135094: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 135098: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_137d2c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039205164));
  /* 137d2c: bti c */
  /* bti: no architectural effect here */
  /* 137d30: ldr w8, [x0, #0x30] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(48))));
  /* 137d34: ldr w9, [x0, #0x28] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 0) + INT64_C(40))));
  /* 137d38: sub w0, w8, w9 */
  ARC_W_W(c, 0, (ARC_W_R(c, 8) - ARC_W_R(c, 9)));
  /* 137d3c: ret  */
  return;
}

void fn1_13b2bc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039218876));
  /* 13b2bc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13b2c0: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13b2c4: str x25, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 25));
  /* 13b2c8: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 13b2cc: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13b2d0: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13b2d4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 13b2d8: ldp x20, x22, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 22, arc_ld64(_pa + 8));
  }
  /* 13b2dc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13b2e0: cmp x22, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 20));
  /* 13b2e4: b.eq #0x13b3c0 */
  if (ARC_COND(c, 0)) goto L_13b3c0;
  /* 13b2e8: mov x21, x19 */
  ARC_X_W(c, 21, ARC_X_R(c, 19));
  /* 13b2ec: mov x10, #0xe38f */
  ARC_X_W(c, 10, UINT64_C(58255));
  /* 13b2f0: mov w12, #0x24 */
  ARC_W_W(c, 12, UINT64_C(36));
  /* 13b2f4: ldr x8, [x21, #0x40]! */
  { const uint64_t _a = (ARC_X_R(c, 21) + INT64_C(64));
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(64));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 13b2f8: ldur x9, [x21, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 21) + INT64_C(-8))));
  /* 13b2fc: movk x10, #0x8e38, lsl #16 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(2386034688)));
  /* 13b300: movk x10, #0x38e3, lsl #32 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446462603027808255)) | UINT64_C(62547608731648)));
  /* 13b304: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* 13b308: movk x10, #0xe38e, lsl #48 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(281474976710655)) | UINT64_C(16397043293302554624)));
  /* 13b30c: umulh x11, x9, x10 */
  ARC_X_W(c, 11, arc_umulh(ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 13b310: umulh x10, x8, x10 */
  ARC_X_W(c, 10, arc_umulh(ARC_X_R(c, 8), ARC_X_R(c, 10)));
  /* 13b314: lsr x11, x11, #5 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(5)) & 63)));
  /* 13b318: lsr x10, x10, #5 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(5)) & 63)));
  /* 13b31c: msub x9, x11, x12, x9 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) - ((uint64_t)(ARC_X_R(c, 11)) * (uint64_t)(ARC_X_R(c, 12)))));
  /* 13b320: add x23, x20, x11, lsl #3 */
  ARC_X_W(c, 23, (ARC_X_R(c, 20) + ((uint64_t)(ARC_X_R(c, 11)) << 3)));
  /* 13b324: mov w11, #0x70 */
  ARC_W_W(c, 11, UINT64_C(112));
  /* 13b328: msub x8, x10, x12, x8 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) - ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 12)))));
  /* 13b32c: ldr x12, [x23] */
  ARC_X_W(c, 12, arc_ld64(ARC_X_R(c, 23)));
  /* 13b330: nop  */
  /* nop: no architectural effect here */
  /* 13b334: madd x25, x9, x11, x12 */
  ARC_X_W(c, 25, ((uint64_t)(ARC_X_R(c, 12)) + ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 11)))));
  /* 13b338: ldr x9, [x20, x10, lsl #3] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + ((uint64_t)(ARC_X_R(c, 10)) << 3))));
  /* 13b33c: nop  */
  /* nop: no architectural effect here */
  /* 13b340: madd x24, x8, x11, x9 */
  ARC_X_W(c, 24, ((uint64_t)(ARC_X_R(c, 9)) + ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 11)))));
  /* 13b344: cmp x25, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 24));
  /* 13b348: b.ne #0x13b358 */
  if (ARC_COND(c, 1)) goto L_13b358;
  /* 13b34c: b #0x13b3b8 */
  goto L_13b3b8;
L_13b350:;
  /* 13b350: cmp x25, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 24));
  /* 13b354: b.eq #0x13b3b4 */
  if (ARC_COND(c, 0)) goto L_13b3b4;
L_13b358:;
  /* 13b358: ldr x0, [x25] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 25)));
  /* 13b35c: cbz x0, #0x13b368 */
  if ((ARC_X_R(c, 0)) == 0) goto L_13b368;
  /* 13b360: bl #0x144618 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1291108));
  fn1_144618(c);
  /* 13b364: str xzr, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 31));
L_13b368:;
  /* 13b368: ldrb w8, [x25, #0x20] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 25) + INT64_C(32))));
  /* 13b36c: tbz w8, #0, #0x13b380 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13b380;
  /* 13b370: ldr x8, [x25, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(32))));
  /* 13b374: ldr x0, [x25, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 25) + INT64_C(48))));
  /* 13b378: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13b37c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1291136));
  fn1_142608(c);
L_13b380:;
  /* 13b380: ldrb w8, [x25, #8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 25) + INT64_C(8))));
  /* 13b384: tbz w8, #0, #0x13b398 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13b398;
  /* 13b388: ldr x8, [x25, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(8))));
  /* 13b38c: ldr x0, [x25, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 25) + INT64_C(24))));
  /* 13b390: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13b394: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1291160));
  fn1_142608(c);
L_13b398:;
  /* 13b398: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 13b39c: add x25, x25, #0x70 */
  ARC_X_W(c, 25, (ARC_X_R(c, 25) + UINT64_C(112)));
  /* 13b3a0: sub x8, x25, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 25) - ARC_X_R(c, 8)));
  /* 13b3a4: cmp x8, #0xfc0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(4032));
  /* 13b3a8: b.ne #0x13b350 */
  if (ARC_COND(c, 1)) goto L_13b350;
  /* 13b3ac: ldr x25, [x23, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 23) + INT64_C(8));
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(8));
    ARC_X_W(c, 25, arc_ld64(_a));
  }
  /* 13b3b0: b #0x13b350 */
  goto L_13b350;
L_13b3b4:;
  /* 13b3b4: ldp x20, x22, [x19, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 22, arc_ld64(_pa + 8));
  }
L_13b3b8:;
  /* 13b3b8: mov x8, x22 */
  ARC_X_W(c, 8, ARC_X_R(c, 22));
  /* 13b3bc: b #0x13b3c8 */
  goto L_13b3c8;
L_13b3c0:;
  /* 13b3c0: add x21, x19, #0x40 */
  ARC_X_W(c, 21, (ARC_X_R(c, 19) + UINT64_C(64)));
  /* 13b3c4: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
L_13b3c8:;
  /* 13b3c8: sub x8, x8, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 20)));
  /* 13b3cc: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
  /* 13b3d0: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* 13b3d4: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* 13b3d8: b.lo #0x13b404 */
  if (ARC_COND(c, 3)) goto L_13b404;
L_13b3dc:;
  /* 13b3dc: ldr x0, [x20] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 20)));
  /* 13b3e0: mov w1, #0xfc0 */
  ARC_W_W(c, 1, UINT64_C(4032));
  /* 13b3e4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1291240));
  fn1_142608(c);
  /* 13b3e8: ldp x8, x22, [x19, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(32));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 22, arc_ld64(_pa + 8));
  }
  /* 13b3ec: add x20, x8, #8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* 13b3f0: sub x8, x22, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) - ARC_X_R(c, 20)));
  /* 13b3f4: str x20, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 20));
  /* 13b3f8: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* 13b3fc: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* 13b400: b.hi #0x13b3dc */
  if (ARC_COND(c, 8)) goto L_13b3dc;
L_13b404:;
  /* 13b404: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 13b408: b.eq #0x13b41c */
  if (ARC_COND(c, 0)) goto L_13b41c;
  /* 13b40c: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* 13b410: b.ne #0x13b424 */
  if (ARC_COND(c, 1)) goto L_13b424;
  /* 13b414: mov w8, #0x24 */
  ARC_W_W(c, 8, UINT64_C(36));
  /* 13b418: b #0x13b420 */
  goto L_13b420;
L_13b41c:;
  /* 13b41c: mov w8, #0x12 */
  ARC_W_W(c, 8, UINT64_C(18));
L_13b420:;
  /* 13b420: str x8, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), ARC_X_R(c, 8));
L_13b424:;
  /* 13b424: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* 13b428: b.eq #0x13b45c */
  if (ARC_COND(c, 0)) goto L_13b45c;
L_13b42c:;
  /* 13b42c: ldr x0, [x20], #8 */
  { const uint64_t _a = ARC_X_R(c, 20);
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(8));
    ARC_X_W(c, 0, arc_ld64(_a));
  }
  /* 13b430: mov w1, #0xfc0 */
  ARC_W_W(c, 1, UINT64_C(4032));
  /* 13b434: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1291320));
  fn1_142608(c);
  /* 13b438: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* 13b43c: b.ne #0x13b42c */
  if (ARC_COND(c, 1)) goto L_13b42c;
  /* 13b440: ldp x9, x8, [x19, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(32));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 13b444: subs x9, x9, x8 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8)));
  /* 13b448: b.eq #0x13b45c */
  if (ARC_COND(c, 0)) goto L_13b45c;
  /* 13b44c: add x9, x9, #7 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(7)));
  /* 13b450: and x9, x9, #0xfffffffffffffff8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551608)));
  /* 13b454: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* 13b458: str x8, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), ARC_X_R(c, 8));
L_13b45c:;
  /* 13b45c: ldr x0, [x19, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* 13b460: cbz x0, #0x13b488 */
  if ((ARC_X_R(c, 0)) == 0) goto L_13b488;
  /* 13b464: ldr x8, [x19, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(48))));
  /* 13b468: sub x1, x8, x0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) - ARC_X_R(c, 0)));
  /* 13b46c: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13b470: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* 13b474: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 13b478: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 13b47c: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13b480: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13b484: b #0x142608 */
  fn1_142608(c); return;
L_13b488:;
  /* 13b488: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13b48c: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* 13b490: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 13b494: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 13b498: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13b49c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13b4a0: ret  */
  return;
}

void fn1_1423f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039247864));
  /* 1423f8: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1423fc: ldr x17, [x16, #0xe88] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3720))));
  /* 142400: add x16, x16, #0xe88 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3720)));
  /* 142404: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142408: nop  */
  /* nop: no architectural effect here */
  /* 14240c: nop  */
  /* nop: no architectural effect here */
}

void fn1_1429f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249400));
  /* 1429f8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1429fc: ldr x17, [x16, #0x88] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(136))));
  /* 142a00: add x16, x16, #0x88 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(136)));
  /* 142a04: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142a08: nop  */
  /* nop: no architectural effect here */
  /* 142a0c: nop  */
  /* nop: no architectural effect here */
}

void fn1_142ff8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250936));
  /* 142ff8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142ffc: ldr x17, [x16, #0x288] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(648))));
  /* 143000: add x16, x16, #0x288 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(648)));
  /* 143004: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143008: nop  */
  /* nop: no architectural effect here */
  /* 14300c: nop  */
  /* nop: no architectural effect here */
}

void fn1_1435f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252472));
  /* 1435f8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1435fc: ldr x17, [x16, #0x488] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1160))));
  /* 143600: add x16, x16, #0x488 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1160)));
  /* 143604: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143608: nop  */
  /* nop: no architectural effect here */
  /* 14360c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143bf8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254008));
  /* 143bf8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143bfc: ldr x17, [x16, #0x688] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1672))));
  /* 143c00: add x16, x16, #0x688 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1672)));
  /* 143c04: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143c08: nop  */
  /* nop: no architectural effect here */
  /* 143c0c: nop  */
  /* nop: no architectural effect here */
}

void fn1_1441f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255544));
  /* 1441f8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1441fc: ldr x17, [x16, #0x888] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2184))));
  /* 144200: add x16, x16, #0x888 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2184)));
  /* 144204: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144208: nop  */
  /* nop: no architectural effect here */
  /* 14420c: nop  */
  /* nop: no architectural effect here */
}

void fn1_1447f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039257080));
  /* 1447f8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1447fc: ldr x17, [x16, #0xa88] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2696))));
  /* 144800: add x16, x16, #0xa88 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2696)));
  /* 144804: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144808: nop  */
  /* nop: no architectural effect here */
  /* 14480c: nop  */
  /* nop: no architectural effect here */
}

