#include "lifted.h"

void fn1_9d610(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038572560));
  /* 9d610: bti c */
  /* bti: no architectural effect here */
  /* 9d614: cmp w1, #0x1d */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(29));
  /* 9d618: b.le #0x9d638 */
  if (ARC_COND(c, 13)) goto L_9d638;
  /* 9d61c: cmp w1, #0x1f */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(31));
  /* 9d620: b.gt #0x9d65c */
  if (ARC_COND(c, 12)) goto L_9d65c;
  /* 9d624: cmp w1, #0x1e */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(30));
  /* 9d628: b.eq #0x9d69c */
  if (ARC_COND(c, 0)) goto L_9d69c;
  /* 9d62c: cmp w1, #0x1f */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(31));
  /* 9d630: b.eq #0x9d678 */
  if (ARC_COND(c, 0)) goto L_9d678;
  /* 9d634: b #0x9d684 */
  goto L_9d684;
L_9d638:;
  /* 9d638: cmn w1, #2 */
  (void)arc_add32(c, ARC_W_R(c, 1), UINT64_C(2), 0);
  /* 9d63c: b.eq #0x9d678 */
  if (ARC_COND(c, 0)) goto L_9d678;
  /* 9d640: cmn w1, #1 */
  (void)arc_add32(c, ARC_W_R(c, 1), UINT64_C(1), 0);
  /* 9d644: b.eq #0x9d66c */
  if (ARC_COND(c, 0)) goto L_9d66c;
  /* 9d648: cmp w1, #0x1d */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(29));
  /* 9d64c: b.ne #0x9d684 */
  if (ARC_COND(c, 1)) goto L_9d684;
  /* 9d650: add x8, x0, #0xf8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(248)));
  /* 9d654: ldr x0, [x8] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 8)));
  /* 9d658: ret  */
  return;
L_9d65c:;
  /* 9d65c: cmp w1, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(34));
  /* 9d660: b.eq #0x9d6a8 */
  if (ARC_COND(c, 0)) goto L_9d6a8;
  /* 9d664: cmp w1, #0x20 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(32));
  /* 9d668: b.ne #0x9d684 */
  if (ARC_COND(c, 1)) goto L_9d684;
L_9d66c:;
  /* 9d66c: add x8, x0, #0x110 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(272)));
  /* 9d670: ldr x0, [x8] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 8)));
  /* 9d674: ret  */
  return;
L_9d678:;
  /* 9d678: add x8, x0, #0x108 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(264)));
  /* 9d67c: ldr x0, [x8] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 8)));
  /* 9d680: ret  */
  return;
L_9d684:;
  /* 9d684: cmp w1, #0x1c */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(28));
  /* 9d688: b.hi #0x9d6b4 */
  if (ARC_COND(c, 8)) goto L_9d6b4;
  /* 9d68c: add x8, x0, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* 9d690: add x8, x8, w1, uxtw #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 1)))) << 3)));
  /* 9d694: ldr x0, [x8] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 8)));
  /* 9d698: ret  */
  return;
L_9d69c:;
  /* 9d69c: add x8, x0, #0x100 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(256)));
  /* 9d6a0: ldr x0, [x8] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 8)));
  /* 9d6a4: ret  */
  return;
L_9d6a8:;
  /* 9d6a8: add x8, x0, #0x118 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(280)));
  /* 9d6ac: ldr x0, [x8] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 8)));
  /* 9d6b0: ret  */
  return;
L_9d6b4:;
  /* 9d6b4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 9d6b8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 9d6bc: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 9d6c0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 9d6c4: adrp x19, #0x151000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9d6c8: nop  */
  /* nop: no architectural effect here */
  /* 9d6cc: adr x1, #0x4f83f */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(325695)));
  /* 9d6d0: ldr x19, [x19, #0x998] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(2456))));
  /* 9d6d4: adrp x2, #0x50000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(327680)));
  /* 9d6d8: add x2, x2, #0xbee */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(3054)));
  /* 9d6dc: adrp x3, #0x50000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(327680)));
  /* 9d6e0: add x3, x3, #0x412 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(1042)));
  /* 9d6e4: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9d6e8: bl #0x144a38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(644844));
  fn1_144a38(c);
  /* 9d6ec: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9d6f0: bl #0x143730 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(644852));
  fn1_143730(c);
  /* 9d6f4: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(644856));
  fn1_1427b8(c);
}

void fn1_a1c80(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038590592));
  /* a1c80: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a1c84: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* a1c88: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a1c8c: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* a1c90: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a1c94: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a1c98: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* a1c9c: cbz x0, #0xa1d2c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a1d2c;
  /* a1ca0: sub x19, x0, x2 */
  ARC_X_W(c, 19, (ARC_X_R(c, 0) - ARC_X_R(c, 2)));
  /* a1ca4: cbz x2, #0xa1d24 */
  if ((ARC_X_R(c, 2)) == 0) goto L_a1d24;
  /* a1ca8: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* a1cac: cbz x3, #0xa1d24 */
  if ((ARC_X_R(c, 3)) == 0) goto L_a1d24;
  /* a1cb0: sub x8, x29, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* a1cb4: ldur x22, [x0, #-8] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 0) + INT64_C(-8))));
  /* a1cb8: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* a1cbc: stp x0, x8, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* a1cc0: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* a1cc4: mov x21, x4 */
  ARC_X_W(c, 21, ARC_X_R(c, 4));
  /* a1cc8: strb w8, [sp, #0x20] */
  arc_st8(((c)->sp + INT64_C(32)), ARC_W_R(c, 8));
  /* a1ccc: nop  */
  /* nop: no architectural effect here */
  /* a1cd0: adr x8, #0x156bb8 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1403832)));
  /* a1cd4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* a1cd8: stur x22, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 22));
  /* a1cdc: mov x24, x1 */
  ARC_X_W(c, 24, ARC_X_R(c, 1));
  /* a1ce0: stp x1, x20, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* a1ce4: bl #0x144ac8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(662760));
  fn1_144ac8(c);
  /* a1ce8: sub x8, x22, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) - UINT64_C(1)));
  /* a1cec: madd x9, x24, x8, x23 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 23)) + ((uint64_t)(ARC_X_R(c, 24)) * (uint64_t)(ARC_X_R(c, 8)))));
  /* a1cf0: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* a1cf4: neg x23, x24 */
  ARC_X_W(c, 23, ((uint64_t)0 - (uint64_t)(ARC_X_R(c, 24))));
  /* a1cf8: ldr w22, [x8, #8] */
  ARC_W_W(c, 22, arc_ld32((ARC_X_R(c, 8) + INT64_C(8))));
  /* a1cfc: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
L_a1d00:;
  /* a1d00: ldur x8, [x29, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* a1d04: sub x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* a1d08: stur x9, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 9));
  /* a1d0c: cbz x8, #0xa1d20 */
  if ((ARC_X_R(c, 8)) == 0) goto L_a1d20;
  /* a1d10: add x24, x0, x23 */
  ARC_X_W(c, 24, (ARC_X_R(c, 0) + ARC_X_R(c, 23)));
  /* a1d14: blr x20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(662808));
  arc_dispatch(c, ARC_X_R(c, 20));
  /* a1d18: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* a1d1c: b #0xa1d00 */
  goto L_a1d00;
L_a1d20:;
  /* a1d20: mov x4, x21 */
  ARC_X_W(c, 4, ARC_X_R(c, 21));
L_a1d24:;
  /* a1d24: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a1d28: blr x4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(662828));
  arc_dispatch(c, ARC_X_R(c, 4));
L_a1d2c:;
  /* a1d2c: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a1d30: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a1d34: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* a1d38: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a1d3c: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* a1d40: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a1d44: ret  */
  return;
  /* a1d48: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(662860));
  fn1_a1454(c);
  /* a1d4c: cbnz w22, #0xa1d6c */
  if ((ARC_W_R(c, 22)) != 0) goto L_a1d6c;
  /* a1d50: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a1d54: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* a1d58: bl #0xa1a0c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(662876));
  fn1_a1a0c(c);
  /* a1d5c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a1d60: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(662884));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* a1d64: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a1d68: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(662892));
  fn1_9cc20(c);
L_a1d6c:;
  /* a1d6c: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(662896));
  fn1_142488(c);
  /* a1d70: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(662900));
  fn1_a1454(c);
}

void fn1_a2c5c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038594652));
  /* a2c5c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a2c60: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a2c64: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* a2c68: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a2c6c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a2c70: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a2c74: ldr x8, [x1, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* a2c78: ldr x9, [x0, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* a2c7c: mov w20, w3 */
  ARC_W_W(c, 20, ARC_W_R(c, 3));
  /* a2c80: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* a2c84: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* a2c88: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* a2c8c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* a2c90: b.eq #0xa2cbc */
  if (ARC_COND(c, 0)) goto L_a2cbc;
  /* a2c94: ldrb w9, [x19, #0x4f] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 19) + INT64_C(79))));
  /* a2c98: ldr w24, [x0, #0x14] */
  ARC_W_W(c, 24, arc_ld32((ARC_X_R(c, 0) + INT64_C(20))));
  /* a2c9c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* a2ca0: ldr x8, [x0, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(32))));
  /* a2ca4: cmp w9, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(1));
  /* a2ca8: b.ne #0xa2cfc */
  if (ARC_COND(c, 1)) goto L_a2cfc;
  /* a2cac: asr x9, x8, #8 */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(8)) & 63))));
  /* a2cb0: tbnz w8, #0, #0xa2d0c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_a2d0c;
  /* a2cb4: mov x10, x21 */
  ARC_X_W(c, 10, ARC_X_R(c, 21));
  /* a2cb8: b #0xa2d30 */
  goto L_a2d30;
L_a2cbc:;
  /* a2cbc: ldr w8, [x19, #0x3c] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(60))));
  /* a2cc0: cbz w8, #0xa2df4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_a2df4;
  /* a2cc4: ldr x9, [x19, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(40))));
  /* a2cc8: ldr x10, [x19, #0x50] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(80))));
  /* a2ccc: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* a2cd0: b.ne #0xa2ce0 */
  if (ARC_COND(c, 1)) goto L_a2ce0;
  /* a2cd4: ldr x9, [x19, #0x20] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* a2cd8: cmp x9, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 21));
  /* a2cdc: b.eq #0xa2e20 */
  if (ARC_COND(c, 0)) goto L_a2e20;
L_a2ce0:;
  /* a2ce0: add w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* a2ce4: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* a2ce8: str w8, [x19, #0x3c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(60)), ARC_W_R(c, 8));
  /* a2cec: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* a2cf0: str w9, [x19, #0x30] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(48)), ARC_W_R(c, 9));
  /* a2cf4: strb w8, [x19, #0x4e] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(78)), ARC_W_R(c, 8));
  /* a2cf8: b #0xa2e08 */
  goto L_a2e08;
L_a2cfc:;
  /* a2cfc: tbnz w8, #0, #0xa2d1c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_a2d1c;
  /* a2d00: asr x9, x8, #8 */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(8)) & 63))));
  /* a2d04: mov x10, x21 */
  ARC_X_W(c, 10, ARC_X_R(c, 21));
  /* a2d08: b #0xa2d30 */
  goto L_a2d30;
L_a2d0c:;
  /* a2d0c: ldr x10, [x21] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 21)));
  /* a2d10: ldr x9, [x10, x9] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 10) + ARC_X_R(c, 9))));
  /* a2d14: mov x10, x21 */
  ARC_X_W(c, 10, ARC_X_R(c, 21));
  /* a2d18: b #0xa2d30 */
  goto L_a2d30;
L_a2d1c:;
  /* a2d1c: ldr x11, [x22, #0x18] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 22) + INT64_C(24))));
  /* a2d20: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* a2d24: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
  /* a2d28: ldr x11, [x11, #8] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 11) + INT64_C(8))));
  /* a2d2c: str x11, [x19, #0x50] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(80)), ARC_X_R(c, 11));
L_a2d30:;
  /* a2d30: ldr x0, [x22, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 22) + INT64_C(24))));
  /* a2d34: tst x8, #2 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 8) & UINT64_C(2)));
  /* a2d38: mov w23, #2 */
  ARC_W_W(c, 23, UINT64_C(2));
  /* a2d3c: csel w3, w23, w20, eq */
  ARC_W_W(c, 3, (ARC_COND(c, 0) ? (ARC_W_R(c, 23)) : ARC_W_R(c, 20)));
  /* a2d40: add x2, x9, x10 */
  ARC_X_W(c, 2, (ARC_X_R(c, 9) + ARC_X_R(c, 10)));
  /* a2d44: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* a2d48: ldr x11, [x0] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 0)));
  /* a2d4c: ldr x8, [x11, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 11) + INT64_C(56))));
  /* a2d50: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(666964));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* a2d54: cmp w24, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 24), UINT64_C(2));
  /* a2d58: b.lo #0xa2e08 */
  if (ARC_COND(c, 3)) goto L_a2e08;
  /* a2d5c: add x8, x22, x24, lsl #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) + ((uint64_t)(ARC_X_R(c, 24)) << 4)));
  /* a2d60: add x22, x22, #0x38 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(56)));
  /* a2d64: add x24, x8, #0x18 */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) + UINT64_C(24)));
L_a2d68:;
  /* a2d68: ldrb w9, [x19, #0x4f] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 19) + INT64_C(79))));
  /* a2d6c: ldur x8, [x22, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(-8))));
  /* a2d70: cmp w9, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(1));
  /* a2d74: b.ne #0xa2d88 */
  if (ARC_COND(c, 1)) goto L_a2d88;
  /* a2d78: asr x9, x8, #8 */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(8)) & 63))));
  /* a2d7c: tbnz w8, #0, #0xa2d98 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_a2d98;
  /* a2d80: mov x10, x21 */
  ARC_X_W(c, 10, ARC_X_R(c, 21));
  /* a2d84: b #0xa2dbc */
  goto L_a2dbc;
L_a2d88:;
  /* a2d88: tbnz w8, #0, #0xa2da8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_a2da8;
  /* a2d8c: asr x9, x8, #8 */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(8)) & 63))));
  /* a2d90: mov x10, x21 */
  ARC_X_W(c, 10, ARC_X_R(c, 21));
  /* a2d94: b #0xa2dbc */
  goto L_a2dbc;
L_a2d98:;
  /* a2d98: ldr x10, [x21] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 21)));
  /* a2d9c: ldr x9, [x10, x9] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 10) + ARC_X_R(c, 9))));
  /* a2da0: mov x10, x21 */
  ARC_X_W(c, 10, ARC_X_R(c, 21));
  /* a2da4: b #0xa2dbc */
  goto L_a2dbc;
L_a2da8:;
  /* a2da8: ldur x11, [x22, #-0x10] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 22) + INT64_C(-16))));
  /* a2dac: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* a2db0: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
  /* a2db4: ldr x11, [x11, #8] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 11) + INT64_C(8))));
  /* a2db8: str x11, [x19, #0x50] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(80)), ARC_X_R(c, 11));
L_a2dbc:;
  /* a2dbc: ldur x0, [x22, #-0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 22) + INT64_C(-16))));
  /* a2dc0: tst x8, #2 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 8) & UINT64_C(2)));
  /* a2dc4: add x2, x9, x10 */
  ARC_X_W(c, 2, (ARC_X_R(c, 9) + ARC_X_R(c, 10)));
  /* a2dc8: csel w3, w23, w20, eq */
  ARC_W_W(c, 3, (ARC_COND(c, 0) ? (ARC_W_R(c, 23)) : ARC_W_R(c, 20)));
  /* a2dcc: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* a2dd0: ldr x11, [x0] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 0)));
  /* a2dd4: ldr x8, [x11, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 11) + INT64_C(56))));
  /* a2dd8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(667100));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* a2ddc: ldrb w8, [x19, #0x4e] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(78))));
  /* a2de0: tbnz w8, #0, #0xa2e08 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_a2e08;
  /* a2de4: cmp x22, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 24));
  /* a2de8: add x22, x22, #0x10 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(16)));
  /* a2dec: b.lo #0xa2d68 */
  if (ARC_COND(c, 3)) goto L_a2d68;
  /* a2df0: b #0xa2e08 */
  goto L_a2e08;
L_a2df4:;
  /* a2df4: ldr x8, [x19, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(80))));
  /* a2df8: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* a2dfc: str w20, [x19, #0x30] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(48)), ARC_W_R(c, 20));
  /* a2e00: str w9, [x19, #0x3c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(60)), ARC_W_R(c, 9));
  /* a2e04: stp x21, x8, [x19, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
L_a2e08:;
  /* a2e08: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a2e0c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a2e10: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* a2e14: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a2e18: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a2e1c: ret  */
  return;
L_a2e20:;
  /* a2e20: ldr w8, [x19, #0x30] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(48))));
  /* a2e24: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* a2e28: b.ne #0xa2e08 */
  if (ARC_COND(c, 1)) goto L_a2e08;
  /* a2e2c: str w20, [x19, #0x30] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(48)), ARC_W_R(c, 20));
  /* a2e30: b #0xa2e08 */
  goto L_a2e08;
}

void fn1_a9c94(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038623380));
  /* a9c94: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a9c98: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* a9c9c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a9ca0: str x27, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 27));
  /* a9ca4: stp x26, x25, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* a9ca8: stp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* a9cac: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a9cb0: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a9cb4: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* a9cb8: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* a9cbc: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* a9cc0: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* a9cc4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a9cc8: stp x3, x2, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 3));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* a9ccc: bl #0xa84b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(695504));
  fn1_a84b0(c);
  /* a9cd0: tbz w0, #0, #0xa9cdc */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_a9cdc;
L_a9cd4:;
  /* a9cd4: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* a9cd8: b #0xa9f94 */
  goto L_a9f94;
L_a9cdc:;
  /* a9cdc: ldp x8, x9, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* a9ce0: cbz x19, #0xa9d10 */
  if ((ARC_X_R(c, 19)) == 0) goto L_a9d10;
  /* a9ce4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a9ce8: b.eq #0xa9d58 */
  if (ARC_COND(c, 0)) goto L_a9d58;
  /* a9cec: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* a9cf0: cmp w10, #0x46 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(70));
  /* a9cf4: b.ne #0xa9d10 */
  if (ARC_COND(c, 1)) goto L_a9d10;
  /* a9cf8: mov w26, wzr */
  ARC_W_W(c, 26, ARC_W_R(c, 31));
  /* a9cfc: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a9d00: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* a9d04: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a9d08: b.ne #0xa9d1c */
  if (ARC_COND(c, 1)) goto L_a9d1c;
  /* a9d0c: b #0xa9d30 */
  goto L_a9d30;
L_a9d10:;
  /* a9d10: mov w26, #1 */
  ARC_W_W(c, 26, UINT64_C(1));
  /* a9d14: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a9d18: b.eq #0xa9d30 */
  if (ARC_COND(c, 0)) goto L_a9d30;
L_a9d1c:;
  /* a9d1c: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* a9d20: cmp w10, #0x4c */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(76));
  /* a9d24: b.ne #0xa9d30 */
  if (ARC_COND(c, 1)) goto L_a9d30;
  /* a9d28: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a9d2c: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
L_a9d30:;
  /* a9d30: subs x11, x9, x8 */
  ARC_X_W(c, 11, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8)));
  /* a9d34: b.eq #0xa9e14 */
  if (ARC_COND(c, 0)) goto L_a9e14;
  /* a9d38: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* a9d3c: cmp w10, #0x31 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(49));
  /* a9d40: b.lo #0xa9d78 */
  if (ARC_COND(c, 3)) goto L_a9d78;
  /* a9d44: cmp w10, #0x39 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(57));
  /* a9d48: b.hi #0xa9d60 */
  if (ARC_COND(c, 8)) goto L_a9d60;
  /* a9d4c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a9d50: bl #0xa8930 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(695636));
  fn1_a8930(c);
  /* a9d54: b #0xa9e20 */
  goto L_a9e20;
L_a9d58:;
  /* a9d58: mov w26, #1 */
  ARC_W_W(c, 26, UINT64_C(1));
  /* a9d5c: b #0xa9e14 */
  goto L_a9e14;
L_a9d60:;
  /* a9d60: cmp w10, #0x55 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(85));
  /* a9d64: b.ne #0xa9d78 */
  if (ARC_COND(c, 1)) goto L_a9d78;
  /* a9d68: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a9d6c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* a9d70: bl #0xb0f70 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(695668));
  fn1_b0f70(c);
  /* a9d74: b #0xa9e20 */
  goto L_a9e20;
L_a9d78:;
  /* a9d78: cmp x11, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(2));
  /* a9d7c: b.lo #0xa9d90 */
  if (ARC_COND(c, 3)) goto L_a9d90;
  /* a9d80: ldrh w11, [x8] */
  ARC_W_W(c, 11, arc_ld16(ARC_X_R(c, 8)));
  /* a9d84: mov w12, #0x4344 */
  ARC_W_W(c, 12, UINT64_C(17220));
  /* a9d88: cmp w11, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 12));
  /* a9d8c: b.eq #0xa9fb8 */
  if (ARC_COND(c, 0)) goto L_a9fb8;
L_a9d90:;
  /* a9d90: sub w10, w10, #0x43 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) - UINT64_C(67)));
  /* a9d94: cmp w10, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(1));
  /* a9d98: b.hi #0xa9e14 */
  if (ARC_COND(c, 8)) goto L_a9e14;
  /* a9d9c: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* a9da0: cbz x19, #0xa9f94 */
  if ((ARC_X_R(c, 19)) == 0) goto L_a9f94;
  /* a9da4: ldr x10, [sp, #8] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(8))));
  /* a9da8: cbnz x10, #0xa9f94 */
  if ((ARC_X_R(c, 10)) != 0) goto L_a9f94;
  /* a9dac: ldrb w10, [x19, #8] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 19) + INT64_C(8))));
  /* a9db0: cmp w10, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(48));
  /* a9db4: b.ne #0xa9dd4 */
  if (ARC_COND(c, 1)) goto L_a9dd4;
  /* a9db8: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* a9dbc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a9dc0: str x19, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 19));
  /* a9dc4: bl #0xb77e4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(695752));
  fn1_b77e4(c);
  /* a9dc8: ldp x8, x9, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* a9dcc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a9dd0: str x0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 0));
L_a9dd4:;
  /* a9dd4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a9dd8: b.eq #0xa9cd4 */
  if (ARC_COND(c, 0)) goto L_a9cd4;
  /* a9ddc: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* a9de0: cmp w10, #0x43 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(67));
  /* a9de4: b.ne #0xaa110 */
  if (ARC_COND(c, 1)) goto L_aa110;
  /* a9de8: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a9dec: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* a9df0: str x10, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 10));
  /* a9df4: b.eq #0xaa174 */
  if (ARC_COND(c, 0)) goto L_aa174;
  /* a9df8: ldrb w11, [x10] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 10)));
  /* a9dfc: cmp w11, #0x49 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(73));
  /* a9e00: b.ne #0xaa174 */
  if (ARC_COND(c, 1)) goto L_aa174;
  /* a9e04: add x10, x8, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* a9e08: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* a9e0c: str x10, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 10));
  /* a9e10: b #0xaa178 */
  goto L_aa178;
L_a9e14:;
  /* a9e14: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a9e18: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* a9e1c: bl #0xb6824 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(695840));
  fn1_b6824(c);
L_a9e20:;
  /* a9e20: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
L_a9e24:;
  /* a9e24: cbz x21, #0xa9ea0 */
  if ((ARC_X_R(c, 21)) == 0) goto L_a9ea0;
  /* a9e28: ldr x22, [sp, #8] */
  ARC_X_W(c, 22, arc_ld64(((c)->sp + INT64_C(8))));
  /* a9e2c: cbz x22, #0xa9ea0 */
  if ((ARC_X_R(c, 22)) == 0) goto L_a9ea0;
  /* a9e30: ldr x23, [x20, #0x1330] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 20) + INT64_C(4912))));
  /* a9e34: ldr x8, [x23, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* a9e38: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* a9e3c: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a9e40: b.hi #0xa9e60 */
  if (ARC_COND(c, 8)) goto L_a9e60;
  /* a9e44: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a9e48: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(695884));
  fn1_1428a8(c);
  /* a9e4c: cbz x0, #0xaa1e4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa1e4;
  /* a9e50: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a9e54: stp x23, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a9e58: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* a9e5c: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_a9e60:;
  /* a9e60: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* a9e64: add x8, x23, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) + ARC_X_R(c, 8)));
  /* a9e68: adrp x10, #0x14b000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(1355776)));
  /* a9e6c: add x10, x10, #0xa40 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(2624)));
  /* a9e70: str x9, [x23, #8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(8)), ARC_X_R(c, 9));
  /* a9e74: mov w11, #0x540 */
  ARC_W_W(c, 11, UINT64_C(1344));
  /* a9e78: str x10, [x8, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(16));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 10));
  }
  /* a9e7c: ldurh w9, [x8, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 8) + INT64_C(9))));
  /* a9e80: mov w10, #0x1c */
  ARC_W_W(c, 10, UINT64_C(28));
  /* a9e84: stp x22, x21, [x8, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a9e88: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* a9e8c: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* a9e90: strb w10, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 10));
  /* a9e94: orr w9, w9, w11 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 11)));
  /* a9e98: sturh w9, [x8, #9] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(9)), ARC_W_R(c, 9));
  /* a9e9c: b #0xa9ea4 */
  goto L_a9ea4;
L_a9ea0:;
  /* a9ea0: cbz x21, #0xa9cd4 */
  if ((ARC_X_R(c, 21)) == 0) goto L_a9cd4;
L_a9ea4:;
  /* a9ea4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a9ea8: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* a9eac: bl #0xb6ef4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(695984));
  fn1_b6ef4(c);
  /* a9eb0: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* a9eb4: csinc w8, w26, wzr, ne */
  ARC_W_W(c, 8, (ARC_COND(c, 1) ? (ARC_W_R(c, 26)) : ((ARC_W_R(c, 31)) + 1)));
  /* a9eb8: tbz w8, #0, #0xa9f00 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_a9f00;
  /* a9ebc: cbz x19, #0xa9f94 */
  if ((ARC_X_R(c, 19)) == 0) goto L_a9f94;
  /* a9ec0: cbz x0, #0xa9f94 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a9f94;
  /* a9ec4: ldr x21, [x20, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(4912))));
  /* a9ec8: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* a9ecc: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* a9ed0: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a9ed4: b.hi #0xa9f58 */
  if (ARC_COND(c, 8)) goto L_a9f58;
  /* a9ed8: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* a9edc: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a9ee0: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(696036));
  fn1_1428a8(c);
  /* a9ee4: cbz x0, #0xaa1e4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa1e4;
  /* a9ee8: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a9eec: adrp x9, #0x14b000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1355776)));
  /* a9ef0: add x9, x9, #0xb30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2864)));
  /* a9ef4: mov w10, #0x18 */
  ARC_W_W(c, 10, UINT64_C(24));
  /* a9ef8: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a9efc: b #0xa9f38 */
  goto L_a9f38;
L_a9f00:;
  /* a9f00: ldr x21, [x20, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(4912))));
  /* a9f04: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* a9f08: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* a9f0c: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a9f10: b.hi #0xa9f48 */
  if (ARC_COND(c, 8)) goto L_a9f48;
  /* a9f14: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* a9f18: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a9f1c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(696096));
  fn1_1428a8(c);
  /* a9f20: cbz x0, #0xaa1e4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa1e4;
  /* a9f24: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a9f28: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a9f2c: adrp x9, #0x14b000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1355776)));
  /* a9f30: add x9, x9, #0xab8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2744)));
  /* a9f34: mov w10, #0x19 */
  ARC_W_W(c, 10, UINT64_C(25));
L_a9f38:;
  /* a9f38: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a9f3c: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
  /* a9f40: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* a9f44: b #0xa9f64 */
  goto L_a9f64;
L_a9f48:;
  /* a9f48: adrp x9, #0x14b000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1355776)));
  /* a9f4c: add x9, x9, #0xab8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2744)));
  /* a9f50: mov w10, #0x19 */
  ARC_W_W(c, 10, UINT64_C(25));
  /* a9f54: b #0xa9f64 */
  goto L_a9f64;
L_a9f58:;
  /* a9f58: adrp x9, #0x14b000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1355776)));
  /* a9f5c: add x9, x9, #0xb30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2864)));
  /* a9f60: mov w10, #0x18 */
  ARC_W_W(c, 10, UINT64_C(24));
L_a9f64:;
  /* a9f64: add x11, x8, #0x20 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* a9f68: add x8, x21, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* a9f6c: str x11, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 11));
  /* a9f70: mov w11, #0x540 */
  ARC_W_W(c, 11, UINT64_C(1344));
  /* a9f74: str x9, [x8, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(16));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* a9f78: ldurh w9, [x8, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 8) + INT64_C(9))));
  /* a9f7c: stp x19, x0, [x8, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* a9f80: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* a9f84: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* a9f88: strb w10, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 10));
  /* a9f8c: orr w9, w9, w11 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 11)));
  /* a9f90: sturh w9, [x8, #9] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(9)), ARC_W_R(c, 9));
L_a9f94:;
  /* a9f94: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a9f98: ldr x27, [sp, #0x30] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(48))));
  /* a9f9c: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a9fa0: ldp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* a9fa4: ldp x26, x25, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* a9fa8: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a9fac: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* a9fb0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a9fb4: ret  */
  return;
L_a9fb8:;
  /* a9fb8: ldp x23, x21, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 23, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a9fbc: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* a9fc0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a9fc4: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* a9fc8: bl #0xa8930 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(696268));
  fn1_a8930(c);
  /* a9fcc: cbz x0, #0xa9f94 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a9f94;
  /* a9fd0: sub x8, x21, x23 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) - ARC_X_R(c, 23)));
  /* a9fd4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* a9fd8: add x27, x20, #0x28 */
  ARC_X_W(c, 27, (ARC_X_R(c, 20) + UINT64_C(40)));
  /* a9fdc: asr x21, x8, #3 */
  ARC_X_W(c, 21, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* a9fe0: b #0xa9ff8 */
  goto L_a9ff8;
L_a9fe4:;
  /* a9fe4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a9fe8: bl #0xa8930 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(696300));
  fn1_a8930(c);
  /* a9fec: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* a9ff0: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* a9ff4: cbz x22, #0xa9f94 */
  if ((ARC_X_R(c, 22)) == 0) goto L_a9f94;
L_a9ff8:;
  /* a9ff8: ldp x25, x8, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 25, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* a9ffc: cmp x25, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* aa000: b.ne #0xaa068 */
  if (ARC_COND(c, 1)) goto L_aa068;
  /* aa004: ldr x24, [x20, #0x10] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* aa008: sub x23, x25, x24 */
  ARC_X_W(c, 23, (ARC_X_R(c, 25) - ARC_X_R(c, 24)));
  /* aa00c: cmp x24, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 27));
  /* aa010: lsl x1, x23, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 23)) << ((UINT64_C(1)) & 63)));
  /* aa014: b.eq #0xaa02c */
  if (ARC_COND(c, 0)) goto L_aa02c;
  /* aa018: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* aa01c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(696352));
  fn1_142878(c);
  /* aa020: str x0, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 0));
  /* aa024: cbnz x0, #0xaa058 */
  if ((ARC_X_R(c, 0)) != 0) goto L_aa058;
  /* aa028: b #0xaa1e8 */
  goto L_aa1e8;
L_aa02c:;
  /* aa02c: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* aa030: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(696372));
  fn1_1428a8(c);
  /* aa034: cbz x0, #0xaa1ec */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa1ec;
  /* aa038: cmp x25, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 27));
  /* aa03c: b.eq #0xaa054 */
  if (ARC_COND(c, 0)) goto L_aa054;
  /* aa040: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* aa044: mov x2, x23 */
  ARC_X_W(c, 2, ARC_X_R(c, 23));
  /* aa048: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* aa04c: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(696400));
  fn1_1449f0(c);
  /* aa050: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
L_aa054:;
  /* aa054: str x0, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 0));
L_aa058:;
  /* aa058: asr x8, x23, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 23)) >> ((UINT64_C(2)) & 63))));
  /* aa05c: add x25, x0, x23 */
  ARC_X_W(c, 25, (ARC_X_R(c, 0) + ARC_X_R(c, 23)));
  /* aa060: add x8, x0, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* aa064: str x8, [x20, #0x20] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(32)), ARC_X_R(c, 8));
L_aa068:;
  /* aa068: str x22, [x25], #8 */
  { const uint64_t _a = ARC_X_R(c, 25);
    ARC_X_W(c, 25, ARC_X_R(c, 25) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* aa06c: ldp x8, x9, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* aa070: str x25, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 25));
  /* aa074: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* aa078: b.eq #0xa9fe4 */
  if (ARC_COND(c, 0)) goto L_a9fe4;
  /* aa07c: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* aa080: cmp w9, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(69));
  /* aa084: b.ne #0xa9fe4 */
  if (ARC_COND(c, 1)) goto L_a9fe4;
  /* aa088: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* aa08c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* aa090: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* aa094: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* aa098: bl #0xa77e4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(696476));
  fn1_a77e4(c);
  /* aa09c: ldr x24, [x20, #0x1330] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 20) + INT64_C(4912))));
  /* aa0a0: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* aa0a4: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* aa0a8: ldr x8, [x24, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 24) + INT64_C(8))));
  /* aa0ac: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* aa0b0: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* aa0b4: b.hi #0xaa0d4 */
  if (ARC_COND(c, 8)) goto L_aa0d4;
  /* aa0b8: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* aa0bc: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(696512));
  fn1_1428a8(c);
  /* aa0c0: cbz x0, #0xaa1e4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa1e4;
  /* aa0c4: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* aa0c8: stp x24, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* aa0cc: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* aa0d0: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_aa0d4:;
  /* aa0d4: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* aa0d8: add x21, x24, x8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 24) + ARC_X_R(c, 8)));
  /* aa0dc: adrp x8, #0x14b000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1355776)));
  /* aa0e0: add x8, x8, #0x950 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2384)));
  /* aa0e4: str x9, [x24, #8] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(8)), ARC_X_R(c, 9));
  /* aa0e8: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* aa0ec: str x8, [x21, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* aa0f0: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* aa0f4: mov w9, #0x35 */
  ARC_W_W(c, 9, UINT64_C(53));
  /* aa0f8: stp x22, x23, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* aa0fc: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* aa100: strb w9, [x21, #8] */
  arc_st8((ARC_X_R(c, 21) + INT64_C(8)), ARC_W_R(c, 9));
  /* aa104: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* aa108: sturh w8, [x21, #9] */
  arc_st16((ARC_X_R(c, 21) + INT64_C(9)), ARC_W_R(c, 8));
  /* aa10c: b #0xa9e24 */
  goto L_a9e24;
L_aa110:;
  /* aa110: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* aa114: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* aa118: cmp x9, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(2));
  /* aa11c: b.lo #0xa9f94 */
  if (ARC_COND(c, 3)) goto L_a9f94;
  /* aa120: cmp w10, #0x44 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(68));
  /* aa124: b.ne #0xa9f94 */
  if (ARC_COND(c, 1)) goto L_a9f94;
  /* aa128: ldrb w9, [x8, #1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(1))));
  /* aa12c: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* aa130: cmp w9, #0x35 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(53));
  /* aa134: b.hi #0xa9f94 */
  if (ARC_COND(c, 8)) goto L_a9f94;
  /* aa138: mov w10, #1 */
  ARC_W_W(c, 10, UINT64_C(1));
  /* aa13c: mov x11, #0x37000000000000 */
  ARC_X_W(c, 11, UINT64_C(15481123719086080));
  /* aa140: lsl x10, x10, x9 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) << ((ARC_X_R(c, 9)) & 63)));
  /* aa144: tst x10, x11 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 10) & ARC_X_R(c, 11)));
  /* aa148: b.eq #0xa9f94 */
  if (ARC_COND(c, 0)) goto L_a9f94;
  /* aa14c: sub w9, w9, #0x30 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) - UINT64_C(48)));
  /* aa150: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* aa154: str w9, [x29, #0x18] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(24)), ARC_W_R(c, 9));
  /* aa158: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* aa15c: cbz x21, #0xaa168 */
  if ((ARC_X_R(c, 21)) == 0) goto L_aa168;
  /* aa160: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* aa164: strb w8, [x21] */
  arc_st8(ARC_X_R(c, 21), ARC_W_R(c, 8));
L_aa168:;
  /* aa168: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* aa16c: sturb w8, [x29, #-4] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 8));
  /* aa170: b #0xaa1c4 */
  goto L_aa1c4;
L_aa174:;
  /* aa174: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
L_aa178:;
  /* aa178: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* aa17c: b.eq #0xa9cd4 */
  if (ARC_COND(c, 0)) goto L_a9cd4;
  /* aa180: ldrb w9, [x10] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 10)));
  /* aa184: sub w11, w9, #0x31 */
  ARC_W_W(c, 11, (ARC_W_R(c, 9) - UINT64_C(49)));
  /* aa188: cmp w11, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(4));
  /* aa18c: b.hi #0xa9cd4 */
  if (ARC_COND(c, 8)) goto L_a9cd4;
  /* aa190: sub w9, w9, #0x30 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) - UINT64_C(48)));
  /* aa194: add x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* aa198: str w9, [x29, #0x18] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(24)), ARC_W_R(c, 9));
  /* aa19c: str x10, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 10));
  /* aa1a0: cbz x21, #0xaa1ac */
  if ((ARC_X_R(c, 21)) == 0) goto L_aa1ac;
  /* aa1a4: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* aa1a8: strb w9, [x21] */
  arc_st8(ARC_X_R(c, 21), ARC_W_R(c, 9));
L_aa1ac:;
  /* aa1ac: cbz w8, #0xaa1c0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_aa1c0;
  /* aa1b0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* aa1b4: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* aa1b8: bl #0xa6c18 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(696764));
  fn1_a6c18(c);
  /* aa1bc: cbz x0, #0xaa1dc */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa1dc;
L_aa1c0:;
  /* aa1c0: sturb wzr, [x29, #-4] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 31));
L_aa1c4:;
  /* aa1c4: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* aa1c8: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* aa1cc: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* aa1d0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* aa1d4: bl #0xb7888 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(696792));
  fn1_b7888(c);
  /* aa1d8: b #0xa9e20 */
  goto L_a9e20;
L_aa1dc:;
  /* aa1dc: mov x21, xzr */
  ARC_X_W(c, 21, ARC_X_R(c, 31));
  /* aa1e0: b #0xa9e24 */
  goto L_a9e24;
L_aa1e4:;
  /* aa1e4: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(696808));
  fn1_142488(c);
L_aa1e8:;
  /* aa1e8: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(696812));
  fn1_1427b8(c);
L_aa1ec:;
  /* aa1ec: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(696816));
  fn1_1427b8(c);
}

void fn1_b0d7c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038652284));
  /* b0d7c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b0d80: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b0d84: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b0d88: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b0d8c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b0d90: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* b0d94: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b0d98: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* b0d9c: sub x9, x8, #0xfe0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4064)));
  /* b0da0: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b0da4: b.hi #0xb0dc8 */
  if (ARC_COND(c, 8)) goto L_b0dc8;
  /* b0da8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b0dac: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b0db0: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(724404));
  fn1_1428a8(c);
  /* b0db4: cbz x0, #0xb0e20 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b0e20;
  /* b0db8: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b0dbc: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b0dc0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b0dc4: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_b0dc8:;
  /* b0dc8: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* b0dcc: ldr w10, [x19] */
  ARC_W_W(c, 10, arc_ld32(ARC_X_R(c, 19)));
  /* b0dd0: mov w11, #0x540 */
  ARC_W_W(c, 11, UINT64_C(1344));
  /* b0dd4: str x8, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 8));
  /* b0dd8: add x0, x8, x21 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* b0ddc: mov w8, #0x49 */
  ARC_W_W(c, 8, UINT64_C(73));
  /* b0de0: ldurh w9, [x0, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* b0de4: strb w8, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 8));
  /* b0de8: adrp x8, #0x14a000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1351680)));
  /* b0dec: add x8, x8, #0x780 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1920)));
  /* b0df0: cmp w10, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(0));
  /* b0df4: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* b0df8: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* b0dfc: orr w8, w9, w11 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) | ARC_W_R(c, 11)));
  /* b0e00: cset w9, ne */
  ARC_W_W(c, 9, (ARC_COND(c, 1) ? 1 : 0));
  /* b0e04: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* b0e08: strb w9, [x0, #0xb] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(11)), ARC_W_R(c, 9));
  /* b0e0c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b0e10: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b0e14: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b0e18: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b0e1c: ret  */
  return;
L_b0e20:;
  /* b0e20: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(724516));
  fn1_142488(c);
}

void fn1_b54cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038670540));
  /* b54cc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b54d0: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b54d4: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b54d8: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b54dc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b54e0: ldp x9, x10, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b54e4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b54e8: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* b54ec: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b54f0: add x11, x9, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* b54f4: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* b54f8: b.ls #0xb5528 */
  if (ARC_COND(c, 9)) goto L_b5528;
  /* b54fc: lsl x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b5500: add x9, x9, #0x3e1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(993)));
  /* b5504: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* b5508: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b550c: csel x1, x10, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* b5510: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b5514: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(742680));
  fn1_142878(c);
  /* b5518: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b551c: cbz x0, #0xb5798 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b5798;
  /* b5520: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b5524: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
L_b5528:;
  /* b5528: mov w10, #0x20 */
  ARC_W_W(c, 10, UINT64_C(32));
  /* b552c: strb w10, [x8, x9] */
  arc_st8((ARC_X_R(c, 8) + ARC_X_R(c, 9)), ARC_W_R(c, 10));
  /* b5530: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b5534: ldrb w10, [x20, #0x18] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 20) + INT64_C(24))));
  /* b5538: add x8, x9, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* b553c: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b5540: tbnz w10, #0, #0xb554c */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_b554c;
  /* b5544: ldr x10, [x20, #0x20] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* b5548: cbz x10, #0xb55a0 */
  if ((ARC_X_R(c, 10)) == 0) goto L_b55a0;
L_b554c:;
  /* b554c: ldr w12, [x19, #0x20] */
  ARC_W_W(c, 12, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b5550: ldr x11, [x19, #0x10] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b5554: add x10, x9, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* b5558: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b555c: add w12, w12, #1 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) + UINT64_C(1)));
  /* b5560: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* b5564: str w12, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 12));
  /* b5568: b.ls #0xb5594 */
  if (ARC_COND(c, 9)) goto L_b5594;
  /* b556c: lsl x8, x11, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 11)) << ((UINT64_C(1)) & 63)));
  /* b5570: add x9, x9, #0x3e2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(994)));
  /* b5574: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b5578: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* b557c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b5580: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(742788));
  fn1_142878(c);
  /* b5584: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b5588: cbz x0, #0xb57a0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b57a0;
  /* b558c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b5590: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b5594:;
  /* b5594: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* b5598: mov w9, #0x7b */
  ARC_W_W(c, 9, UINT64_C(123));
  /* b559c: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
L_b55a0:;
  /* b55a0: ldr x21, [x20, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* b55a4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b55a8: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b55ac: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b55b0: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b55b4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(742840));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b55b8: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* b55bc: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b55c0: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b55c4: b.eq #0xb55dc */
  if (ARC_COND(c, 0)) goto L_b55dc;
  /* b55c8: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b55cc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b55d0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b55d4: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b55d8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(742876));
  arc_dispatch(c, ARC_X_R(c, 8));
L_b55dc:;
  /* b55dc: ldrb w8, [x20, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(24))));
  /* b55e0: tbnz w8, #0, #0xb55ec */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_b55ec;
  /* b55e4: ldr x8, [x20, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* b55e8: cbz x8, #0xb573c */
  if ((ARC_X_R(c, 8)) == 0) goto L_b573c;
L_b55ec:;
  /* b55ec: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b55f0: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b55f4: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b55f8: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* b55fc: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b5600: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* b5604: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b5608: b.ls #0xb5634 */
  if (ARC_COND(c, 9)) goto L_b5634;
  /* b560c: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b5610: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b5614: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b5618: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b561c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b5620: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(742948));
  fn1_142878(c);
  /* b5624: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b5628: cbz x0, #0xb57a4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b57a4;
  /* b562c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b5630: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b5634:;
  /* b5634: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b5638: mov w9, #0x7d */
  ARC_W_W(c, 9, UINT64_C(125));
  /* b563c: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b5640: ldrb w8, [x20, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(24))));
  /* b5644: tbz w8, #0, #0xb56a8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_b56a8;
  /* b5648: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b564c: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b5650: add x10, x8, #9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(9)));
  /* b5654: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b5658: b.ls #0xb5680 */
  if (ARC_COND(c, 9)) goto L_b5680;
  /* b565c: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b5660: add x8, x8, #0x3e9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1001)));
  /* b5664: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b5668: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b566c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b5670: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(743028));
  fn1_142878(c);
  /* b5674: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b5678: cbz x0, #0xb57ac */
  if ((ARC_X_R(c, 0)) == 0) goto L_b57ac;
  /* b567c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b5680:;
  /* b5680: adrp x9, #0x50000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(327680)));
  /* b5684: add x9, x9, #0xec6 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3782)));
  /* b5688: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b568c: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* b5690: mov w10, #0x74 */
  ARC_W_W(c, 10, UINT64_C(116));
  /* b5694: strb w10, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 10));
  /* b5698: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b569c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b56a0: add x8, x8, #9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(9)));
  /* b56a4: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_b56a8:;
  /* b56a8: ldr x8, [x20, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* b56ac: cbz x8, #0xb573c */
  if ((ARC_X_R(c, 8)) == 0) goto L_b573c;
  /* b56b0: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b56b4: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b56b8: add x10, x8, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* b56bc: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b56c0: b.ls #0xb56e8 */
  if (ARC_COND(c, 9)) goto L_b56e8;
  /* b56c4: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b56c8: add x8, x8, #0x3e4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(996)));
  /* b56cc: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b56d0: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b56d4: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b56d8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(743132));
  fn1_142878(c);
  /* b56dc: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b56e0: cbz x0, #0xb57a8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b57a8;
  /* b56e4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b56e8:;
  /* b56e8: mov w9, #0x2d20 */
  ARC_W_W(c, 9, UINT64_C(11552));
  /* b56ec: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b56f0: movk w9, #0x203e, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(540934144)));
  /* b56f4: str w9, [x0, x8] */
  arc_st32((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b56f8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b56fc: ldr x20, [x20, #0x20] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* b5700: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* b5704: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* b5708: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b570c: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b5710: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* b5714: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(743192));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b5718: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b571c: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b5720: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b5724: b.eq #0xb573c */
  if (ARC_COND(c, 0)) goto L_b573c;
  /* b5728: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b572c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b5730: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b5734: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b5738: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(743228));
  arc_dispatch(c, ARC_X_R(c, 8));
L_b573c:;
  /* b573c: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b5740: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b5744: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b5748: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b574c: b.ls #0xb5778 */
  if (ARC_COND(c, 9)) goto L_b5778;
  /* b5750: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b5754: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b5758: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b575c: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b5760: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b5764: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(743272));
  fn1_142878(c);
  /* b5768: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b576c: cbz x0, #0xb579c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b579c;
  /* b5770: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b5774: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b5778:;
  /* b5778: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b577c: mov w9, #0x3b */
  ARC_W_W(c, 9, UINT64_C(59));
  /* b5780: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b5784: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b5788: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b578c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b5790: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b5794: ret  */
  return;
L_b5798:;
  /* b5798: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(743324));
  fn1_1427b8(c);
L_b579c:;
  /* b579c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(743328));
  fn1_1427b8(c);
L_b57a0:;
  /* b57a0: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(743332));
  fn1_1427b8(c);
L_b57a4:;
  /* b57a4: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(743336));
  fn1_1427b8(c);
L_b57a8:;
  /* b57a8: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(743340));
  fn1_1427b8(c);
L_b57ac:;
  /* b57ac: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(743344));
  fn1_1427b8(c);
}

void fn1_b8230(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038682160));
  /* b8230: bti c */
  /* bti: no architectural effect here */
  /* b8234: ldr w8, [x1, #0x1c] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + INT64_C(28))));
  /* b8238: cmn w8, #1 */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(1), 0);
  /* b823c: b.eq #0xb8264 */
  if (ARC_COND(c, 0)) goto L_b8264;
  /* b8240: ldr w8, [x1, #0x18] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + INT64_C(24))));
  /* b8244: ldr x9, [x0, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* b8248: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b824c: b.ls #0xb8278 */
  if (ARC_COND(c, 9)) goto L_b8278;
L_b8250:;
  /* b8250: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* b8254: ldr x0, [x9, x8, lsl #3] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 3))));
  /* b8258: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* b825c: ldr x16, [x8, #0x18] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* b8260: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_b8264:;
  /* b8264: ldr x9, [x0, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* b8268: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b826c: stp wzr, w9, [x1, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(24));
    arc_st32(_pa, ARC_W_R(c, 31));
    arc_st32(_pa + 4, ARC_W_R(c, 9));
  }
  /* b8270: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b8274: b.hi #0xb8250 */
  if (ARC_COND(c, 8)) goto L_b8250;
L_b8278:;
  /* b8278: ret  */
  return;
}

void fn1_bb558(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038695256));
  /* bb558: bti c */
  /* bti: no architectural effect here */
  /* bb55c: ldr x0, [x0, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* bb560: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* bb564: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* bb568: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_bdcc0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038705344));
  /* bdcc0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bdcc4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bdcc8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* bdccc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bdcd0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* bdcd4: add x0, x0, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(96)));
  /* bdcd8: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(777436));
  fn1_142548(c);
  /* bdcdc: ldr x0, [x19, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(40))));
  /* bdce0: bl #0xa1518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(777444));
  fn1_a1518(c);
}

void fn1_d1bd0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038787024));
  /* d1bd0: bti c */
  /* bti: no architectural effect here */
  /* d1bd4: sub x8, x1, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* d1bd8: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* d1bdc: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* d1be0: b.gt #0xd1bf0 */
  if (ARC_COND(c, 12)) goto L_d1bf0;
  /* d1be4: b.hs #0xd1cc4 */
  if (ARC_COND(c, 2)) goto L_d1cc4;
L_d1be8:;
  /* d1be8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d1bec: ret  */
  return;
L_d1bf0:;
  /* d1bf0: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* d1bf4: b.eq #0xd1cec */
  if (ARC_COND(c, 0)) goto L_d1cec;
  /* d1bf8: cmp x8, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(4));
  /* d1bfc: b.eq #0xd1df0 */
  if (ARC_COND(c, 0)) goto L_d1df0;
  /* d1c00: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* d1c04: b.ne #0xd1d38 */
  if (ARC_COND(c, 1)) goto L_d1d38;
  /* d1c08: ldp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* d1c0c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* d1c10: csel x10, x8, x9, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d1c14: csel x8, x8, x9, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d1c18: stp x8, x10, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* d1c1c: ldr x8, [x0, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* d1c20: ldur x9, [x1, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d1c24: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* d1c28: csel x10, x8, x9, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d1c2c: csel x8, x8, x9, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d1c30: stur x10, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), ARC_X_R(c, 10));
  /* d1c34: str x8, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 8));
  /* d1c38: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* d1c3c: ldur x8, [x1, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d1c40: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* d1c44: csel x10, x8, x9, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d1c48: csel x8, x8, x9, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d1c4c: stur x10, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), ARC_X_R(c, 10));
  /* d1c50: ldp x9, x10, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* d1c54: ldr x11, [x0, #8] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* d1c58: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* d1c5c: csel x9, x9, x10, lo */
  ARC_X_W(c, 9, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* d1c60: csel x8, x8, x10, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* d1c64: stp x9, x8, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* d1c68: ldur x8, [x1, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d1c6c: cmp x11, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 8));
  /* d1c70: csel x9, x11, x8, hi */
  ARC_X_W(c, 9, (ARC_COND(c, 8) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 8)));
  /* d1c74: csel x8, x11, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 8)));
  /* d1c78: stur x9, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), ARC_X_R(c, 9));
  /* d1c7c: ldp x11, x10, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* d1c80: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* d1c84: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* d1c88: csel x12, x10, x9, lo */
  ARC_X_W(c, 12, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* d1c8c: csel x10, x10, x9, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* d1c90: cmp x12, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 11));
  /* d1c94: csel x9, x9, x11, lo */
  ARC_X_W(c, 9, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 11)));
  /* d1c98: csel x11, x12, x11, hi */
  ARC_X_W(c, 11, (ARC_COND(c, 8) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* d1c9c: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* d1ca0: csel x12, x10, x8, lo */
  ARC_X_W(c, 12, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* d1ca4: csel x10, x10, x8, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* d1ca8: cmp x12, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 11));
  /* d1cac: csel x8, x8, x11, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 11)));
  /* d1cb0: stp x9, x8, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* d1cb4: csel x8, x12, x11, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* d1cb8: stp x8, x10, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* d1cbc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d1cc0: ret  */
  return;
L_d1cc4:;
  /* d1cc4: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* d1cc8: b.ne #0xd1d38 */
  if (ARC_COND(c, 1)) goto L_d1d38;
  /* d1ccc: ldur x9, [x1, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d1cd0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* d1cd4: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* d1cd8: b.hs #0xd1be8 */
  if (ARC_COND(c, 2)) goto L_d1be8;
  /* d1cdc: str x9, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 9));
  /* d1ce0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d1ce4: stur x8, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), ARC_X_R(c, 8));
  /* d1ce8: ret  */
  return;
L_d1cec:;
  /* d1cec: ldr x8, [x0, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* d1cf0: ldur x9, [x1, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d1cf4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* d1cf8: csel x10, x8, x9, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d1cfc: csel x8, x8, x9, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d1d00: stur x10, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), ARC_X_R(c, 10));
  /* d1d04: str x8, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 8));
  /* d1d08: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* d1d0c: ldur x8, [x1, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d1d10: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* d1d14: csel x10, x8, x9, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d1d18: csel x8, x8, x9, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d1d1c: stur x10, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), ARC_X_R(c, 10));
  /* d1d20: ldp x9, x10, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* d1d24: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* d1d28: csel x9, x9, x10, lo */
  ARC_X_W(c, 9, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* d1d2c: csel x8, x8, x10, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* d1d30: str x9, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 9));
  /* d1d34: b #0xd1e60 */
  goto L_d1e60;
L_d1d38:;
  /* d1d38: mov x11, x0 */
  ARC_X_W(c, 11, ARC_X_R(c, 0));
  /* d1d3c: ldp x10, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* d1d40: ldr x8, [x11, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 11) + INT64_C(16));
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* d1d44: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* d1d48: csel x12, x9, x8, hi */
  ARC_X_W(c, 12, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* d1d4c: csel x9, x9, x8, lo */
  ARC_X_W(c, 9, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* d1d50: cmp x12, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 10));
  /* d1d54: csel x8, x12, x10, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* d1d58: csel x13, x12, x10, lo */
  ARC_X_W(c, 13, (ARC_COND(c, 3) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* d1d5c: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* d1d60: str x8, [x11] */
  arc_st64(ARC_X_R(c, 11), ARC_X_R(c, 8));
  /* d1d64: add x8, x0, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* d1d68: csel x10, x10, x9, lo */
  ARC_X_W(c, 10, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* d1d6c: csel x9, x9, x13, lo */
  ARC_X_W(c, 9, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 13)));
  /* d1d70: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* d1d74: stp x10, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* d1d78: b.eq #0xd1be8 */
  if (ARC_COND(c, 0)) goto L_d1be8;
  /* d1d7c: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* d1d80: mov w10, #0x18 */
  ARC_W_W(c, 10, UINT64_C(24));
  /* d1d84: b #0xd1db4 */
  goto L_d1db4;
L_d1d88:;
  /* d1d88: mov x11, x0 */
  ARC_X_W(c, 11, ARC_X_R(c, 0));
L_d1d8c:;
  /* d1d8c: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* d1d90: str x12, [x11] */
  arc_st64(ARC_X_R(c, 11), ARC_X_R(c, 12));
  /* d1d94: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* d1d98: b.eq #0xd1e6c */
  if (ARC_COND(c, 0)) goto L_d1e6c;
L_d1d9c:;
  /* d1d9c: add x12, x8, #8 */
  ARC_X_W(c, 12, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* d1da0: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
  /* d1da4: add x10, x10, #8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(8)));
  /* d1da8: cmp x12, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 1));
  /* d1dac: mov x8, x12 */
  ARC_X_W(c, 8, ARC_X_R(c, 12));
  /* d1db0: b.eq #0xd1be8 */
  if (ARC_COND(c, 0)) goto L_d1be8;
L_d1db4:;
  /* d1db4: ldr x12, [x8] */
  ARC_X_W(c, 12, arc_ld64(ARC_X_R(c, 8)));
  /* d1db8: ldr x11, [x11] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 11)));
  /* d1dbc: cmp x12, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 11));
  /* d1dc0: b.hs #0xd1d9c */
  if (ARC_COND(c, 2)) goto L_d1d9c;
  /* d1dc4: mov x14, x10 */
  ARC_X_W(c, 14, ARC_X_R(c, 10));
L_d1dc8:;
  /* d1dc8: subs x13, x14, #8 */
  ARC_X_W(c, 13, arc_sub64(c, ARC_X_R(c, 14), UINT64_C(8)));
  /* d1dcc: str x11, [x0, x14] */
  arc_st64((ARC_X_R(c, 0) + ARC_X_R(c, 14)), ARC_X_R(c, 11));
  /* d1dd0: b.eq #0xd1d88 */
  if (ARC_COND(c, 0)) goto L_d1d88;
  /* d1dd4: add x11, x0, x14 */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + ARC_X_R(c, 14)));
  /* d1dd8: mov x14, x13 */
  ARC_X_W(c, 14, ARC_X_R(c, 13));
  /* d1ddc: ldur x11, [x11, #-0x10] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 11) + INT64_C(-16))));
  /* d1de0: cmp x12, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 11));
  /* d1de4: b.lo #0xd1dc8 */
  if (ARC_COND(c, 3)) goto L_d1dc8;
  /* d1de8: add x11, x0, x13 */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + ARC_X_R(c, 13)));
  /* d1dec: b #0xd1d8c */
  goto L_d1d8c;
L_d1df0:;
  /* d1df0: ldp x10, x8, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* d1df4: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* d1df8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* d1dfc: csel x11, x9, x8, hi */
  ARC_X_W(c, 11, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* d1e00: csel x8, x9, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* d1e04: str x11, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 11));
  /* d1e08: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* d1e0c: ldur x8, [x1, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d1e10: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* d1e14: csel x9, x10, x8, hi */
  ARC_X_W(c, 9, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* d1e18: csel x8, x10, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* d1e1c: stur x9, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), ARC_X_R(c, 9));
  /* d1e20: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* d1e24: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* d1e28: csel x10, x9, x8, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* d1e2c: csel x8, x9, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* d1e30: stp x8, x10, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* d1e34: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* d1e38: ldur x9, [x1, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d1e3c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* d1e40: csel x10, x8, x9, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d1e44: csel x8, x8, x9, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d1e48: stur x10, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), ARC_X_R(c, 10));
  /* d1e4c: ldr x10, [x0, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* d1e50: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* d1e54: csel x9, x10, x8, hi */
  ARC_X_W(c, 9, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* d1e58: csel x8, x10, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* d1e5c: str x9, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 9));
L_d1e60:;
  /* d1e60: str x8, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 8));
  /* d1e64: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d1e68: ret  */
  return;
L_d1e6c:;
  /* d1e6c: add x8, x8, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* d1e70: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* d1e74: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* d1e78: ret  */
  return;
}

void fn1_d7c14(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038811668));
  /* d7c14: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d7c18: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d7c1c: str x25, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 25));
  /* d7c20: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* d7c24: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* d7c28: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d7c2c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* d7c30: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* d7c34: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* d7c38: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* d7c3c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* d7c40: and x10, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* d7c44: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* d7c48: mov w9, #0x16 */
  ARC_W_W(c, 9, UINT64_C(22));
  /* d7c4c: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* d7c50: and w8, w8, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(255)));
  /* d7c54: csel x25, x9, x10, eq */
  ARC_X_W(c, 25, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* d7c58: subs x9, x2, x25 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 25)));
  /* d7c5c: b.ls #0xd7cbc */
  if (ARC_COND(c, 9)) goto L_d7cbc;
  /* d7c60: mov x10, #-0xa */
  ARC_X_W(c, 10, UINT64_C(18446744073709551606));
  /* d7c64: sub x10, x10, x25 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 25)));
  /* d7c68: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* d7c6c: b.hi #0xd7d50 */
  if (ARC_COND(c, 8)) goto L_d7d50;
  /* d7c70: ldr x9, [x20, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* d7c74: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* d7c78: mov x8, #-0xe */
  ARC_X_W(c, 8, UINT64_C(18446744073709551602));
  /* d7c7c: movk x8, #0x7fff, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(9223090561878065152)));
  /* d7c80: mov x24, x1 */
  ARC_X_W(c, 24, ARC_X_R(c, 1));
  /* d7c84: csinc x22, x9, x20, ne */
  ARC_X_W(c, 22, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 20)) + 1)));
  /* d7c88: cmp x25, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* d7c8c: b.hi #0xd7cec */
  if (ARC_COND(c, 8)) goto L_d7cec;
  /* d7c90: lsl x8, x25, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 25)) << ((UINT64_C(1)) & 63)));
  /* d7c94: mov w10, #0x1a */
  ARC_W_W(c, 10, UINT64_C(26));
  /* d7c98: cmp x19, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* d7c9c: csel x8, x19, x8, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 19)) : ARC_X_R(c, 8)));
  /* d7ca0: orr x9, x8, #7 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) | UINT64_C(7)));
  /* d7ca4: cmp x9, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(23));
  /* d7ca8: csinc x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 9)) + 1)));
  /* d7cac: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* d7cb0: mov w8, #0x17 */
  ARC_W_W(c, 8, UINT64_C(23));
  /* d7cb4: csel x23, x8, x9, lo */
  ARC_X_W(c, 23, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d7cb8: b #0xd7cf0 */
  goto L_d7cf0;
L_d7cbc:;
  /* d7cbc: ldr x9, [x20, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* d7cc0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* d7cc4: csinc x21, x9, x20, ne */
  ARC_X_W(c, 21, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 20)) + 1)));
  /* d7cc8: cbz x19, #0xd7cdc */
  if ((ARC_X_R(c, 19)) == 0) goto L_d7cdc;
  /* d7ccc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* d7cd0: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* d7cd4: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(883928));
  fn1_1449f0(c);
  /* d7cd8: ldrb w8, [x20] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 20)));
L_d7cdc:;
  /* d7cdc: tbnz w8, #0, #0xd7d28 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_d7d28;
  /* d7ce0: lsl w8, w19, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 19)) << ((UINT64_C(1)) & 31)));
  /* d7ce4: strb w8, [x20] */
  arc_st8(ARC_X_R(c, 20), ARC_W_R(c, 8));
  /* d7ce8: b #0xd7d2c */
  goto L_d7d2c;
L_d7cec:;
  /* d7cec: mov x23, #-9 */
  ARC_X_W(c, 23, UINT64_C(18446744073709551607));
L_d7cf0:;
  /* d7cf0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* d7cf4: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(883960));
  fn1_1428f0(c);
  /* d7cf8: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* d7cfc: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* d7d00: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* d7d04: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(883976));
  fn1_1449d8(c);
  /* d7d08: add x1, x25, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 25) + UINT64_C(1)));
  /* d7d0c: cmp x1, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(23));
  /* d7d10: b.eq #0xd7d1c */
  if (ARC_COND(c, 0)) goto L_d7d1c;
  /* d7d14: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* d7d18: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(883996));
  fn1_142608(c);
L_d7d1c:;
  /* d7d1c: orr x8, x23, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) | UINT64_C(1)));
  /* d7d20: str x21, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 21));
  /* d7d24: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
L_d7d28:;
  /* d7d28: str x19, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 19));
L_d7d2c:;
  /* d7d2c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* d7d30: strb wzr, [x21, x19] */
  arc_st8((ARC_X_R(c, 21) + ARC_X_R(c, 19)), ARC_W_R(c, 31));
  /* d7d34: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d7d38: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* d7d3c: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* d7d40: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* d7d44: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d7d48: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d7d4c: ret  */
  return;
L_d7d50:;
  /* d7d50: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(884052));
  fn1_d7d54(c);
}

void fn1_db858(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038827096));
  /* db858: bti c */
  /* bti: no architectural effect here */
  /* db85c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* db860: add w9, w1, #3 */
  ARC_W_W(c, 9, (ARC_W_R(c, 1) + UINT64_C(3)));
  /* db864: lsl x0, x8, x9 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 8)) << ((ARC_X_R(c, 9)) & 63)));
  /* db868: ret  */
  return;
}

void fn1_e0064(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038845540));
  /* e0064: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e0068: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e006c: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e0070: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e0074: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e0078: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* e007c: mov x0, x3 */
  ARC_X_W(c, 0, ARC_X_R(c, 3));
  /* e0080: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* e0084: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* e0088: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* e008c: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(917648));
  fn1_142860(c);
  /* e0090: mov x4, x0 */
  ARC_X_W(c, 4, ARC_X_R(c, 0));
  /* e0094: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* e0098: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* e009c: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* e00a0: mov x3, x19 */
  ARC_X_W(c, 3, ARC_X_R(c, 19));
  /* e00a4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e00a8: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e00ac: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e00b0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e00b4: b #0x142cc8 */
  fn1_142cc8(c); return;
}

void fn1_e289c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038855836));
  /* e289c: bti c */
  /* bti: no architectural effect here */
  /* e28a0: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* e28a4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* e28a8: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* e28ac: ldp x11, x10, [x8, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(8));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* e28b0: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* e28b4: lsr x12, x9, #1 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* e28b8: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e28bc: csel x8, x8, x10, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* e28c0: csel x9, x12, x11, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* e28c4: cbz x3, #0xe2920 */
  if ((ARC_X_R(c, 3)) == 0) goto L_e2920;
  /* e28c8: cmp x2, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 9));
  /* e28cc: b.hs #0xe2920 */
  if (ARC_COND(c, 2)) goto L_e2920;
  /* e28d0: add x9, x8, x9, lsl #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 2)));
  /* e28d4: add x10, x8, x2, lsl #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 2)) << 2)));
  /* e28d8: lsl x11, x3, #2 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 3)) << ((UINT64_C(2)) & 63)));
L_e28dc:;
  /* e28dc: ldr w12, [x10] */
  ARC_W_W(c, 12, arc_ld32(ARC_X_R(c, 10)));
  /* e28e0: mov x13, x11 */
  ARC_X_W(c, 13, ARC_X_R(c, 11));
  /* e28e4: mov x14, x1 */
  ARC_X_W(c, 14, ARC_X_R(c, 1));
L_e28e8:;
  /* e28e8: ldr w15, [x14] */
  ARC_W_W(c, 15, arc_ld32(ARC_X_R(c, 14)));
  /* e28ec: cmp w12, w15 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 15));
  /* e28f0: b.eq #0xe2910 */
  if (ARC_COND(c, 0)) goto L_e2910;
  /* e28f4: subs x13, x13, #4 */
  ARC_X_W(c, 13, arc_sub64(c, ARC_X_R(c, 13), UINT64_C(4)));
  /* e28f8: add x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(4)));
  /* e28fc: b.ne #0xe28e8 */
  if (ARC_COND(c, 1)) goto L_e28e8;
  /* e2900: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* e2904: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* e2908: b.ne #0xe28dc */
  if (ARC_COND(c, 1)) goto L_e28dc;
  /* e290c: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
L_e2910:;
  /* e2910: sub x8, x10, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* e2914: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* e2918: asr x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* e291c: csinv x0, x8, xzr, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 8)) : (~(uint64_t)(ARC_X_R(c, 31)))));
L_e2920:;
  /* e2920: ret  */
  return;
}

void fn1_e6650(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038871632));
  /* e6650: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e6654: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* e6658: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e665c: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e6660: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e6664: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* e6668: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e666c: add x0, sp, #0xc */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(12)));
  /* e6670: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* e6674: add x20, x0, #0x14 */
  ARC_X_W(c, 20, (ARC_X_R(c, 0) + UINT64_C(20)));
  /* e6678: tbz x21, #0x3f, #0xe668c */
  if (((ARC_X_R(c, 21)) >> 63 & 1) == 0) goto L_e668c;
  /* e667c: mov w8, #0x2d */
  ARC_W_W(c, 8, UINT64_C(45));
  /* e6680: orr x0, x0, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) | UINT64_C(1)));
  /* e6684: neg x21, x21 */
  ARC_X_W(c, 21, ((uint64_t)0 - (uint64_t)(ARC_X_R(c, 21))));
  /* e6688: strb w8, [sp, #0xc] */
  arc_st8(((c)->sp + INT64_C(12)), ARC_W_R(c, 8));
L_e668c:;
  /* e668c: sub x8, x20, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) - ARC_X_R(c, 0)));
  /* e6690: cmp x8, #0x13 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(19));
  /* e6694: b.gt #0xe66d8 */
  if (ARC_COND(c, 12)) goto L_e66d8;
  /* e6698: orr x9, x21, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 21) | UINT64_C(1)));
  /* e669c: mov w10, #0x40 */
  ARC_W_W(c, 10, UINT64_C(64));
  /* e66a0: clz x9, x9 */
  ARC_X_W(c, 9, arc_clz64(ARC_X_R(c, 9)));
  /* e66a4: sub w9, w10, w9 */
  ARC_W_W(c, 9, (ARC_W_R(c, 10) - ARC_W_R(c, 9)));
  /* e66a8: mov w10, #0x4d1 */
  ARC_W_W(c, 10, UINT64_C(1233));
  /* e66ac: mul w9, w9, w10 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) * (uint32_t)(ARC_W_R(c, 10))));
  /* e66b0: nop  */
  /* nop: no architectural effect here */
  /* e66b4: adr x10, #0x75298 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(479896)));
  /* e66b8: lsr w9, w9, #0xc */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(12)) & 31)));
  /* e66bc: ldr x10, [x10, w9, uxtw #3] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 9)))) << 3))));
  /* e66c0: cmp x21, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 10));
  /* e66c4: cset w10, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? 1 : 0));
  /* e66c8: sub w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) - ARC_W_R(c, 10)));
  /* e66cc: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* e66d0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* e66d4: b.lt #0xe67d4 */
  if (ARC_COND(c, 11)) goto L_e67d4;
L_e66d8:;
  /* e66d8: lsr x8, x21, #0x20 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 21)) >> ((UINT64_C(32)) & 63)));
  /* e66dc: cbnz x8, #0xe66f0 */
  if ((ARC_X_R(c, 8)) != 0) goto L_e66f0;
  /* e66e0: mov w1, w21 */
  ARC_W_W(c, 1, ARC_W_R(c, 21));
  /* e66e4: bl #0xd4eb8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(943848));
  fn1_d4eb8(c);
  /* e66e8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e66ec: b #0xe67d4 */
  goto L_e67d4;
L_e66f0:;
  /* e66f0: mov x22, #0xe3ff */
  ARC_X_W(c, 22, UINT64_C(58367));
  /* e66f4: movk x22, #0x540b, lsl #16 */
  ARC_X_W(c, 22, ((ARC_X_R(c, 22) & UINT64_C(18446744069414649855)) | UINT64_C(1410007040)));
  /* e66f8: movk x22, #2, lsl #32 */
  ARC_X_W(c, 22, ((ARC_X_R(c, 22) & UINT64_C(18446462603027808255)) | UINT64_C(8589934592)));
  /* e66fc: cmp x21, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 22));
  /* e6700: b.ls #0xe672c */
  if (ARC_COND(c, 9)) goto L_e672c;
  /* e6704: mov x8, #0xd5bf */
  ARC_X_W(c, 8, UINT64_C(54719));
  /* e6708: movk x8, #0xbded, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(3186425856)));
  /* e670c: movk x8, #0xfece, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(280160716718080)));
  /* e6710: movk x8, #0xdbe6, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(15845352338949668864)));
  /* e6714: umulh x8, x21, x8 */
  ARC_X_W(c, 8, arc_umulh(ARC_X_R(c, 21), ARC_X_R(c, 8)));
  /* e6718: lsr x20, x8, #0x21 */
  ARC_X_W(c, 20, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(33)) & 63)));
  /* e671c: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* e6720: bl #0xd4eb8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(943908));
  fn1_d4eb8(c);
  /* e6724: madd x8, x20, x22, x20 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 20)) + ((uint64_t)(ARC_X_R(c, 20)) * (uint64_t)(ARC_X_R(c, 22)))));
  /* e6728: sub x21, x21, x8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) - ARC_X_R(c, 8)));
L_e672c:;
  /* e672c: mov x8, #0xcefd */
  ARC_X_W(c, 8, UINT64_C(52989));
  /* e6730: mov w9, #0xe100 */
  ARC_W_W(c, 9, UINT64_C(57600));
  /* e6734: mov w10, #0xde83 */
  ARC_W_W(c, 10, UINT64_C(56963));
  /* e6738: movk x8, #0x8461, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(2220949504)));
  /* e673c: movk w9, #0x5f5, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(99942400)));
  /* e6740: movk w10, #0x431b, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1125842944)));
  /* e6744: movk x8, #0x7711, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(130914898149376)));
  /* e6748: mov w11, #0x4240 */
  ARC_W_W(c, 11, UINT64_C(16960));
  /* e674c: mov w12, #0x2710 */
  ARC_W_W(c, 12, UINT64_C(10000));
  /* e6750: movk x8, #0xabcc, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(12379269475734650880)));
  /* e6754: movk w11, #0xf, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(983040)));
  /* e6758: add x20, x0, #0xa */
  ARC_X_W(c, 20, (ARC_X_R(c, 0) + UINT64_C(10)));
  /* e675c: umulh x8, x21, x8 */
  ARC_X_W(c, 8, arc_umulh(ARC_X_R(c, 21), ARC_X_R(c, 8)));
  /* e6760: lsr x8, x8, #0x1a */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(26)) & 63)));
  /* e6764: msub w9, w8, w9, w21 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 21)) - ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 9)))));
  /* e6768: umull x10, w9, w10 */
  ARC_X_W(c, 10, (((uint64_t)(uint32_t)(ARC_W_R(c, 9))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 10)))));
  /* e676c: lsr x10, x10, #0x32 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(50)) & 63)));
  /* e6770: msub w9, w10, w11, w9 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) - ((uint32_t)(ARC_W_R(c, 10)) * (uint32_t)(ARC_W_R(c, 11)))));
  /* e6774: mov w11, #0x1759 */
  ARC_W_W(c, 11, UINT64_C(5977));
  /* e6778: movk w11, #0xd1b7, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(3518431232)));
  /* e677c: umull x11, w9, w11 */
  ARC_X_W(c, 11, (((uint64_t)(uint32_t)(ARC_W_R(c, 9))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 11)))));
  /* e6780: lsr x11, x11, #0x2d */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(45)) & 63)));
  /* e6784: msub w9, w11, w12, w9 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) - ((uint32_t)(ARC_W_R(c, 11)) * (uint32_t)(ARC_W_R(c, 12)))));
  /* e6788: nop  */
  /* nop: no architectural effect here */
  /* e678c: adr x12, #0x58470 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(361584)));
  /* e6790: ldrh w8, [x12, x8, lsl #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 8)) << 1))));
  /* e6794: ubfx w13, w9, #2, #0xe */
  ARC_W_W(c, 13, (((uint32_t)(ARC_W_R(c, 9)) >> 2) & UINT64_C(16383)));
  /* e6798: strh w8, [x0] */
  arc_st16(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* e679c: mov w8, #0x147b */
  ARC_W_W(c, 8, UINT64_C(5243));
  /* e67a0: ldrh w10, [x12, x10, lsl #1] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 10)) << 1))));
  /* e67a4: mul w8, w13, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 13)) * (uint32_t)(ARC_W_R(c, 8))));
  /* e67a8: strh w10, [x0, #2] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 10));
  /* e67ac: ldrh w10, [x12, x11, lsl #1] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 11)) << 1))));
  /* e67b0: mov w11, #0x64 */
  ARC_W_W(c, 11, UINT64_C(100));
  /* e67b4: lsr w8, w8, #0x11 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(17)) & 31)));
  /* e67b8: strh w10, [x0, #4] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(4)), ARC_W_R(c, 10));
  /* e67bc: msub w9, w8, w11, w9 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) - ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 11)))));
  /* e67c0: ldrh w8, [x12, w8, uxtw #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 1))));
  /* e67c4: strh w8, [x0, #6] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(6)), ARC_W_R(c, 8));
  /* e67c8: and x8, x9, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) & UINT64_C(65535)));
  /* e67cc: ldrh w8, [x12, x8, lsl #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 8)) << 1))));
  /* e67d0: strh w8, [x0, #8] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 8));
L_e67d4:;
  /* e67d4: add x8, sp, #0xc */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(12)));
  /* e67d8: sub x21, x20, x8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 20) - ARC_X_R(c, 8)));
  /* e67dc: mov x8, #0x3ffffffffffffff8 */
  ARC_X_W(c, 8, UINT64_C(4611686018427387896));
  /* e67e0: cmp x21, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* e67e4: b.hs #0xe68fc */
  if (ARC_COND(c, 2)) goto L_e68fc;
  /* e67e8: cmp x21, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(4));
  /* e67ec: b.hi #0xe67fc */
  if (ARC_COND(c, 8)) goto L_e67fc;
  /* e67f0: lsl w8, w21, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 21)) << ((UINT64_C(1)) & 31)));
  /* e67f4: strb w8, [x19], #4 */
  { const uint64_t _a = ARC_X_R(c, 19);
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* e67f8: b #0xe6824 */
  goto L_e6824;
L_e67fc:;
  /* e67fc: orr x8, x21, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) | UINT64_C(1)));
  /* e6800: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* e6804: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* e6808: csinc x22, x9, x8, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* e680c: lsl x0, x22, #2 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 22)) << ((UINT64_C(2)) & 63)));
  /* e6810: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(944148));
  fn1_1428f0(c);
  /* e6814: orr x8, x22, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) | UINT64_C(1)));
  /* e6818: stp x21, x0, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* e681c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* e6820: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_e6824:;
  /* e6824: add x8, sp, #0xc */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(12)));
  /* e6828: cmp x8, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* e682c: b.eq #0xe6848 */
  if (ARC_COND(c, 0)) goto L_e6848;
  /* e6830: cmp x21, #0x20 */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(32));
  /* e6834: add x11, sp, #0xc */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(12)));
  /* e6838: b.hs #0xe6850 */
  if (ARC_COND(c, 2)) goto L_e6850;
  /* e683c: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* e6840: add x9, sp, #0xc */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(12)));
  /* e6844: b #0xe68d0 */
  goto L_e68d0;
L_e6848:;
  /* e6848: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* e684c: b #0xe68e0 */
  goto L_e68e0;
L_e6850:;
  /* e6850: adrp x12, #0x52000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(335872)));
  /* e6854: and x10, x21, #0x3fffffffffffffe0 */
  ARC_X_W(c, 10, (ARC_X_R(c, 21) & UINT64_C(4611686018427387872)));
  /* e6858: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* e685c: ldr q0, [x12, #0xb70] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 12) + INT64_C(2928))), arc_ld64((ARC_X_R(c, 12) + INT64_C(2928)) + 8));
  /* e6860: adrp x12, #0x52000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(335872)));
  /* e6864: adrp x14, #0x52000 */
  ARC_X_W(c, 14, (arc_image_bases[1] + UINT64_C(335872)));
  /* e6868: add x8, x19, x10, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 10)) << 2)));
  /* e686c: ldr q1, [x13, #0xd40] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 13) + INT64_C(3392))), arc_ld64((ARC_X_R(c, 13) + INT64_C(3392)) + 8));
  /* e6870: ldr q2, [x12, #0xc50] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 12) + INT64_C(3152))), arc_ld64((ARC_X_R(c, 12) + INT64_C(3152)) + 8));
  /* e6874: ldr q3, [x14, #0x940] */
  arc_q_w(c, 3, arc_ld64((ARC_X_R(c, 14) + INT64_C(2368))), arc_ld64((ARC_X_R(c, 14) + INT64_C(2368)) + 8));
  /* e6878: add x9, x11, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) + ARC_X_R(c, 10)));
  /* e687c: add x11, x11, #0x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(16)));
  /* e6880: add x12, x19, #0x40 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + UINT64_C(64)));
  /* e6884: mov x13, x10 */
  ARC_X_W(c, 13, ARC_X_R(c, 10));
L_e6888:;
  /* e6888: ldp q4, q5, [x11, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(-16));
    arc_q_w(c, 4, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 5, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* e688c: subs x13, x13, #0x20 */
  ARC_X_W(c, 13, arc_sub64(c, ARC_X_R(c, 13), UINT64_C(32)));
  /* e6890: add x11, x11, #0x20 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(32)));
  /* e6894: tbl v6.16b, {v4.16b}, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 4, 1, (c)->q[3].u8[0]);
    _t.u8[1] = arc_tbl(c, 4, 1, (c)->q[3].u8[1]);
    _t.u8[2] = arc_tbl(c, 4, 1, (c)->q[3].u8[2]);
    _t.u8[3] = arc_tbl(c, 4, 1, (c)->q[3].u8[3]);
    _t.u8[4] = arc_tbl(c, 4, 1, (c)->q[3].u8[4]);
    _t.u8[5] = arc_tbl(c, 4, 1, (c)->q[3].u8[5]);
    _t.u8[6] = arc_tbl(c, 4, 1, (c)->q[3].u8[6]);
    _t.u8[7] = arc_tbl(c, 4, 1, (c)->q[3].u8[7]);
    _t.u8[8] = arc_tbl(c, 4, 1, (c)->q[3].u8[8]);
    _t.u8[9] = arc_tbl(c, 4, 1, (c)->q[3].u8[9]);
    _t.u8[10] = arc_tbl(c, 4, 1, (c)->q[3].u8[10]);
    _t.u8[11] = arc_tbl(c, 4, 1, (c)->q[3].u8[11]);
    _t.u8[12] = arc_tbl(c, 4, 1, (c)->q[3].u8[12]);
    _t.u8[13] = arc_tbl(c, 4, 1, (c)->q[3].u8[13]);
    _t.u8[14] = arc_tbl(c, 4, 1, (c)->q[3].u8[14]);
    _t.u8[15] = arc_tbl(c, 4, 1, (c)->q[3].u8[15]);
    (c)->q[6] = _t; }
  /* e6898: tbl v7.16b, {v4.16b}, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 4, 1, (c)->q[2].u8[0]);
    _t.u8[1] = arc_tbl(c, 4, 1, (c)->q[2].u8[1]);
    _t.u8[2] = arc_tbl(c, 4, 1, (c)->q[2].u8[2]);
    _t.u8[3] = arc_tbl(c, 4, 1, (c)->q[2].u8[3]);
    _t.u8[4] = arc_tbl(c, 4, 1, (c)->q[2].u8[4]);
    _t.u8[5] = arc_tbl(c, 4, 1, (c)->q[2].u8[5]);
    _t.u8[6] = arc_tbl(c, 4, 1, (c)->q[2].u8[6]);
    _t.u8[7] = arc_tbl(c, 4, 1, (c)->q[2].u8[7]);
    _t.u8[8] = arc_tbl(c, 4, 1, (c)->q[2].u8[8]);
    _t.u8[9] = arc_tbl(c, 4, 1, (c)->q[2].u8[9]);
    _t.u8[10] = arc_tbl(c, 4, 1, (c)->q[2].u8[10]);
    _t.u8[11] = arc_tbl(c, 4, 1, (c)->q[2].u8[11]);
    _t.u8[12] = arc_tbl(c, 4, 1, (c)->q[2].u8[12]);
    _t.u8[13] = arc_tbl(c, 4, 1, (c)->q[2].u8[13]);
    _t.u8[14] = arc_tbl(c, 4, 1, (c)->q[2].u8[14]);
    _t.u8[15] = arc_tbl(c, 4, 1, (c)->q[2].u8[15]);
    (c)->q[7] = _t; }
  /* e689c: tbl v16.16b, {v4.16b}, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 4, 1, (c)->q[1].u8[0]);
    _t.u8[1] = arc_tbl(c, 4, 1, (c)->q[1].u8[1]);
    _t.u8[2] = arc_tbl(c, 4, 1, (c)->q[1].u8[2]);
    _t.u8[3] = arc_tbl(c, 4, 1, (c)->q[1].u8[3]);
    _t.u8[4] = arc_tbl(c, 4, 1, (c)->q[1].u8[4]);
    _t.u8[5] = arc_tbl(c, 4, 1, (c)->q[1].u8[5]);
    _t.u8[6] = arc_tbl(c, 4, 1, (c)->q[1].u8[6]);
    _t.u8[7] = arc_tbl(c, 4, 1, (c)->q[1].u8[7]);
    _t.u8[8] = arc_tbl(c, 4, 1, (c)->q[1].u8[8]);
    _t.u8[9] = arc_tbl(c, 4, 1, (c)->q[1].u8[9]);
    _t.u8[10] = arc_tbl(c, 4, 1, (c)->q[1].u8[10]);
    _t.u8[11] = arc_tbl(c, 4, 1, (c)->q[1].u8[11]);
    _t.u8[12] = arc_tbl(c, 4, 1, (c)->q[1].u8[12]);
    _t.u8[13] = arc_tbl(c, 4, 1, (c)->q[1].u8[13]);
    _t.u8[14] = arc_tbl(c, 4, 1, (c)->q[1].u8[14]);
    _t.u8[15] = arc_tbl(c, 4, 1, (c)->q[1].u8[15]);
    (c)->q[16] = _t; }
  /* e68a0: tbl v4.16b, {v4.16b}, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 4, 1, (c)->q[0].u8[0]);
    _t.u8[1] = arc_tbl(c, 4, 1, (c)->q[0].u8[1]);
    _t.u8[2] = arc_tbl(c, 4, 1, (c)->q[0].u8[2]);
    _t.u8[3] = arc_tbl(c, 4, 1, (c)->q[0].u8[3]);
    _t.u8[4] = arc_tbl(c, 4, 1, (c)->q[0].u8[4]);
    _t.u8[5] = arc_tbl(c, 4, 1, (c)->q[0].u8[5]);
    _t.u8[6] = arc_tbl(c, 4, 1, (c)->q[0].u8[6]);
    _t.u8[7] = arc_tbl(c, 4, 1, (c)->q[0].u8[7]);
    _t.u8[8] = arc_tbl(c, 4, 1, (c)->q[0].u8[8]);
    _t.u8[9] = arc_tbl(c, 4, 1, (c)->q[0].u8[9]);
    _t.u8[10] = arc_tbl(c, 4, 1, (c)->q[0].u8[10]);
    _t.u8[11] = arc_tbl(c, 4, 1, (c)->q[0].u8[11]);
    _t.u8[12] = arc_tbl(c, 4, 1, (c)->q[0].u8[12]);
    _t.u8[13] = arc_tbl(c, 4, 1, (c)->q[0].u8[13]);
    _t.u8[14] = arc_tbl(c, 4, 1, (c)->q[0].u8[14]);
    _t.u8[15] = arc_tbl(c, 4, 1, (c)->q[0].u8[15]);
    (c)->q[4] = _t; }
  /* e68a4: tbl v17.16b, {v5.16b}, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 5, 1, (c)->q[3].u8[0]);
    _t.u8[1] = arc_tbl(c, 5, 1, (c)->q[3].u8[1]);
    _t.u8[2] = arc_tbl(c, 5, 1, (c)->q[3].u8[2]);
    _t.u8[3] = arc_tbl(c, 5, 1, (c)->q[3].u8[3]);
    _t.u8[4] = arc_tbl(c, 5, 1, (c)->q[3].u8[4]);
    _t.u8[5] = arc_tbl(c, 5, 1, (c)->q[3].u8[5]);
    _t.u8[6] = arc_tbl(c, 5, 1, (c)->q[3].u8[6]);
    _t.u8[7] = arc_tbl(c, 5, 1, (c)->q[3].u8[7]);
    _t.u8[8] = arc_tbl(c, 5, 1, (c)->q[3].u8[8]);
    _t.u8[9] = arc_tbl(c, 5, 1, (c)->q[3].u8[9]);
    _t.u8[10] = arc_tbl(c, 5, 1, (c)->q[3].u8[10]);
    _t.u8[11] = arc_tbl(c, 5, 1, (c)->q[3].u8[11]);
    _t.u8[12] = arc_tbl(c, 5, 1, (c)->q[3].u8[12]);
    _t.u8[13] = arc_tbl(c, 5, 1, (c)->q[3].u8[13]);
    _t.u8[14] = arc_tbl(c, 5, 1, (c)->q[3].u8[14]);
    _t.u8[15] = arc_tbl(c, 5, 1, (c)->q[3].u8[15]);
    (c)->q[17] = _t; }
  /* e68a8: stp q7, q6, [x12, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-32));
    arc_st64(_pa, (c)->q[7].u64[0]);
    arc_st64(_pa + 8, (c)->q[7].u64[1]);
    arc_st64((_pa + 16), (c)->q[6].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[6].u64[1]);
  }
  /* e68ac: tbl v6.16b, {v5.16b}, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 5, 1, (c)->q[2].u8[0]);
    _t.u8[1] = arc_tbl(c, 5, 1, (c)->q[2].u8[1]);
    _t.u8[2] = arc_tbl(c, 5, 1, (c)->q[2].u8[2]);
    _t.u8[3] = arc_tbl(c, 5, 1, (c)->q[2].u8[3]);
    _t.u8[4] = arc_tbl(c, 5, 1, (c)->q[2].u8[4]);
    _t.u8[5] = arc_tbl(c, 5, 1, (c)->q[2].u8[5]);
    _t.u8[6] = arc_tbl(c, 5, 1, (c)->q[2].u8[6]);
    _t.u8[7] = arc_tbl(c, 5, 1, (c)->q[2].u8[7]);
    _t.u8[8] = arc_tbl(c, 5, 1, (c)->q[2].u8[8]);
    _t.u8[9] = arc_tbl(c, 5, 1, (c)->q[2].u8[9]);
    _t.u8[10] = arc_tbl(c, 5, 1, (c)->q[2].u8[10]);
    _t.u8[11] = arc_tbl(c, 5, 1, (c)->q[2].u8[11]);
    _t.u8[12] = arc_tbl(c, 5, 1, (c)->q[2].u8[12]);
    _t.u8[13] = arc_tbl(c, 5, 1, (c)->q[2].u8[13]);
    _t.u8[14] = arc_tbl(c, 5, 1, (c)->q[2].u8[14]);
    _t.u8[15] = arc_tbl(c, 5, 1, (c)->q[2].u8[15]);
    (c)->q[6] = _t; }
  /* e68b0: tbl v7.16b, {v5.16b}, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 5, 1, (c)->q[1].u8[0]);
    _t.u8[1] = arc_tbl(c, 5, 1, (c)->q[1].u8[1]);
    _t.u8[2] = arc_tbl(c, 5, 1, (c)->q[1].u8[2]);
    _t.u8[3] = arc_tbl(c, 5, 1, (c)->q[1].u8[3]);
    _t.u8[4] = arc_tbl(c, 5, 1, (c)->q[1].u8[4]);
    _t.u8[5] = arc_tbl(c, 5, 1, (c)->q[1].u8[5]);
    _t.u8[6] = arc_tbl(c, 5, 1, (c)->q[1].u8[6]);
    _t.u8[7] = arc_tbl(c, 5, 1, (c)->q[1].u8[7]);
    _t.u8[8] = arc_tbl(c, 5, 1, (c)->q[1].u8[8]);
    _t.u8[9] = arc_tbl(c, 5, 1, (c)->q[1].u8[9]);
    _t.u8[10] = arc_tbl(c, 5, 1, (c)->q[1].u8[10]);
    _t.u8[11] = arc_tbl(c, 5, 1, (c)->q[1].u8[11]);
    _t.u8[12] = arc_tbl(c, 5, 1, (c)->q[1].u8[12]);
    _t.u8[13] = arc_tbl(c, 5, 1, (c)->q[1].u8[13]);
    _t.u8[14] = arc_tbl(c, 5, 1, (c)->q[1].u8[14]);
    _t.u8[15] = arc_tbl(c, 5, 1, (c)->q[1].u8[15]);
    (c)->q[7] = _t; }
  /* e68b4: tbl v5.16b, {v5.16b}, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 5, 1, (c)->q[0].u8[0]);
    _t.u8[1] = arc_tbl(c, 5, 1, (c)->q[0].u8[1]);
    _t.u8[2] = arc_tbl(c, 5, 1, (c)->q[0].u8[2]);
    _t.u8[3] = arc_tbl(c, 5, 1, (c)->q[0].u8[3]);
    _t.u8[4] = arc_tbl(c, 5, 1, (c)->q[0].u8[4]);
    _t.u8[5] = arc_tbl(c, 5, 1, (c)->q[0].u8[5]);
    _t.u8[6] = arc_tbl(c, 5, 1, (c)->q[0].u8[6]);
    _t.u8[7] = arc_tbl(c, 5, 1, (c)->q[0].u8[7]);
    _t.u8[8] = arc_tbl(c, 5, 1, (c)->q[0].u8[8]);
    _t.u8[9] = arc_tbl(c, 5, 1, (c)->q[0].u8[9]);
    _t.u8[10] = arc_tbl(c, 5, 1, (c)->q[0].u8[10]);
    _t.u8[11] = arc_tbl(c, 5, 1, (c)->q[0].u8[11]);
    _t.u8[12] = arc_tbl(c, 5, 1, (c)->q[0].u8[12]);
    _t.u8[13] = arc_tbl(c, 5, 1, (c)->q[0].u8[13]);
    _t.u8[14] = arc_tbl(c, 5, 1, (c)->q[0].u8[14]);
    _t.u8[15] = arc_tbl(c, 5, 1, (c)->q[0].u8[15]);
    (c)->q[5] = _t; }
  /* e68b8: stp q4, q16, [x12, #-0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-64));
    arc_st64(_pa, (c)->q[4].u64[0]);
    arc_st64(_pa + 8, (c)->q[4].u64[1]);
    arc_st64((_pa + 16), (c)->q[16].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[16].u64[1]);
  }
  /* e68bc: stp q6, q17, [x12, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(32));
    arc_st64(_pa, (c)->q[6].u64[0]);
    arc_st64(_pa + 8, (c)->q[6].u64[1]);
    arc_st64((_pa + 16), (c)->q[17].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[17].u64[1]);
  }
  /* e68c0: stp q5, q7, [x12], #0x80 */
  { const uint64_t _pa = ARC_X_R(c, 12);
    ARC_X_W(c, 12, ARC_X_R(c, 12) + INT64_C(128));
    arc_st64(_pa, (c)->q[5].u64[0]);
    arc_st64(_pa + 8, (c)->q[5].u64[1]);
    arc_st64((_pa + 16), (c)->q[7].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[7].u64[1]);
  }
  /* e68c4: b.ne #0xe6888 */
  if (ARC_COND(c, 1)) goto L_e6888;
  /* e68c8: cmp x21, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 10));
  /* e68cc: b.eq #0xe68e0 */
  if (ARC_COND(c, 0)) goto L_e68e0;
L_e68d0:;
  /* e68d0: ldrb w10, [x9], #1 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(1));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* e68d4: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* e68d8: str w10, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 10));
  }
  /* e68dc: b.ne #0xe68d0 */
  if (ARC_COND(c, 1)) goto L_e68d0;
L_e68e0:;
  /* e68e0: str wzr, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 31));
  /* e68e4: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e68e8: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e68ec: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e68f0: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* e68f4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e68f8: ret  */
  return;
L_e68fc:;
  /* e68fc: bl #0xe2274 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(944384));
  fn1_e2274(c);
}

void fn1_e97e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038884320));
  /* e97e0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e97e4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e97e8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* e97ec: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e97f0: cmp w1, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(1));
  /* e97f4: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* e97f8: b.le #0xe9818 */
  if (ARC_COND(c, 13)) goto L_e9818;
  /* e97fc: cmp w1, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(2));
  /* e9800: b.eq #0xe98ac */
  if (ARC_COND(c, 0)) goto L_e98ac;
  /* e9804: cmp w1, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(3));
  /* e9808: b.eq #0xe98e4 */
  if (ARC_COND(c, 0)) goto L_e98e4;
  /* e980c: cmp w1, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(4));
  /* e9810: b.eq #0xe9864 */
  if (ARC_COND(c, 0)) goto L_e9864;
  /* e9814: b #0xe9920 */
  goto L_e9920;
L_e9818:;
  /* e9818: cbz w1, #0xe9864 */
  if ((ARC_W_R(c, 1)) == 0) goto L_e9864;
  /* e981c: cmp w1, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(1));
  /* e9820: b.ne #0xe9920 */
  if (ARC_COND(c, 1)) goto L_e9920;
  /* e9824: mov w0, #0x50 */
  ARC_W_W(c, 0, UINT64_C(80));
  /* e9828: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(956460));
  fn1_1428f0(c);
  /* e982c: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* e9830: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* e9834: ldr q0, [x8, #0xbd0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3024))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3024)) + 8));
  /* e9838: adrp x8, #0x4f000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(323584)));
  /* e983c: add x8, x8, #0xc66 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3174)));
  /* e9840: ldr x9, [x8, #0x40] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* e9844: strb wzr, [x0, #0x48] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(72)), ARC_W_R(c, 31));
  /* e9848: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* e984c: ldp q0, q1, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* e9850: str x9, [x0, #0x40] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(64)), ARC_X_R(c, 9));
  /* e9854: stp q0, q1, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* e9858: ldp q1, q0, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* e985c: stp q1, q0, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* e9860: b #0xe9954 */
  goto L_e9954;
L_e9864:;
  /* e9864: mov w0, #0x60 */
  ARC_W_W(c, 0, UINT64_C(96));
  /* e9868: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(956524));
  fn1_1428f0(c);
  /* e986c: adrp x8, #0x50000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(327680)));
  /* e9870: add x8, x8, #0x533 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1331)));
  /* e9874: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* e9878: ldp q0, q1, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* e987c: ldr q2, [x9, #0xb80] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 9) + INT64_C(2944))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2944)) + 8));
  /* e9880: ldr x9, [x8, #0x50] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* e9884: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* e9888: str q2, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[2].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[2].u64[1]);
  /* e988c: stp q0, q1, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* e9890: ldr q0, [x8, #0x40] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))), arc_ld64((ARC_X_R(c, 8) + INT64_C(64)) + 8));
  /* e9894: str x9, [x0, #0x50] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(80)), ARC_X_R(c, 9));
  /* e9898: str q0, [x0, #0x40] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(64)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(64)) + 8, (c)->q[0].u64[1]);
  /* e989c: ldp q0, q1, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* e98a0: strb wzr, [x0, #0x58] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(88)), ARC_W_R(c, 31));
  /* e98a4: stp q0, q1, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* e98a8: b #0xe9954 */
  goto L_e9954;
L_e98ac:;
  /* e98ac: mov w0, #0x30 */
  ARC_W_W(c, 0, UINT64_C(48));
  /* e98b0: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(956596));
  fn1_1428f0(c);
  /* e98b4: adrp x8, #0x51000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(331776)));
  /* e98b8: add x8, x8, #0x6b5 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1717)));
  /* e98bc: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* e98c0: ldp q0, q1, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* e98c4: ldr q2, [x9, #0xa90] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 9) + INT64_C(2704))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2704)) + 8));
  /* e98c8: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* e98cc: str q2, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[2].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[2].u64[1]);
  /* e98d0: stp q0, q1, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* e98d4: ldur q0, [x8, #0x1e] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(30))), arc_ld64((ARC_X_R(c, 8) + INT64_C(30)) + 8));
  /* e98d8: strb wzr, [x0, #0x2e] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(46)), ARC_W_R(c, 31));
  /* e98dc: stur q0, [x0, #0x1e] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(30)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(30)) + 8, (c)->q[0].u64[1]);
  /* e98e0: b #0xe9954 */
  goto L_e9954;
L_e98e4:;
  /* e98e4: mov w0, #0x48 */
  ARC_W_W(c, 0, UINT64_C(72));
  /* e98e8: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(956652));
  fn1_1428f0(c);
  /* e98ec: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* e98f0: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* e98f4: ldr q0, [x8, #0xc90] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3216))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3216)) + 8));
  /* e98f8: mov w8, #0x2e */
  ARC_W_W(c, 8, UINT64_C(46));
  /* e98fc: strh w8, [x0, #0x40] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(64)), ARC_W_R(c, 8));
  /* e9900: adrp x8, #0x4f000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(323584)));
  /* e9904: add x8, x8, #0xcaf */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3247)));
  /* e9908: ldp q1, q2, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 2, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* e990c: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* e9910: stp q1, q2, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* e9914: ldp q0, q1, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* e9918: stp q0, q1, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* e991c: b #0xe9954 */
  goto L_e9954;
L_e9920:;
  /* e9920: mov w0, #0x20 */
  ARC_W_W(c, 0, UINT64_C(32));
  /* e9924: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(956712));
  fn1_1428f0(c);
  /* e9928: adrp x8, #0x50000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(327680)));
  /* e992c: add x8, x8, #0xcaf */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3247)));
  /* e9930: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* e9934: ldr q0, [x8] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 8)), arc_ld64(ARC_X_R(c, 8) + 8));
  /* e9938: ldur q1, [x8, #0xe] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 8) + INT64_C(14))), arc_ld64((ARC_X_R(c, 8) + INT64_C(14)) + 8));
  /* e993c: ldr q2, [x9, #0x9c0] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 9) + INT64_C(2496))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2496)) + 8));
  /* e9940: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* e9944: str q0, [x0] */
  arc_st64(ARC_X_R(c, 0), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 0) + 8, (c)->q[0].u64[1]);
  /* e9948: stur q1, [x0, #0xe] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(14)), (c)->q[1].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(14)) + 8, (c)->q[1].u64[1]);
  /* e994c: str q2, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[2].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[2].u64[1]);
  /* e9950: strb wzr, [x0, #0x1e] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(30)), ARC_W_R(c, 31));
L_e9954:;
  /* e9954: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* e9958: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e995c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e9960: ret  */
  return;
}

void fn1_eb754(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038892372));
  /* eb754: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eb758: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eb75c: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* eb760: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eb764: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* eb768: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964460));
  fn1_142518(c);
  /* eb76c: cbnz w0, #0xeb7ac */
  if ((ARC_W_R(c, 0)) != 0) goto L_eb7ac;
  /* eb770: ldr w20, [x19, #0x88] */
  ARC_W_W(c, 20, arc_ld32((ARC_X_R(c, 19) + INT64_C(136))));
  /* eb774: mov w8, #0x7ffffffe */
  ARC_W_W(c, 8, UINT64_C(2147483646));
  /* eb778: cmp w20, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 20), ARC_W_R(c, 8));
  /* eb77c: b.hi #0xeb788 */
  if (ARC_COND(c, 8)) goto L_eb788;
  /* eb780: add w8, w20, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 20) + UINT64_C(1)));
  /* eb784: str w8, [x19, #0x88] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(136)), ARC_W_R(c, 8));
L_eb788:;
  /* eb788: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eb78c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964496));
  fn1_142560(c);
  /* eb790: mov w8, #0x7fffffff */
  ARC_W_W(c, 8, UINT64_C(2147483647));
  /* eb794: cmp w20, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 20), ARC_W_R(c, 8));
  /* eb798: cset w0, lo */
  ARC_W_W(c, 0, (ARC_COND(c, 3) ? 1 : 0));
  /* eb79c: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* eb7a0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eb7a4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eb7a8: ret  */
  return;
L_eb7ac:;
  /* eb7ac: nop  */
  /* nop: no architectural effect here */
  /* eb7b0: adr x1, #0x50f67 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331623)));
  /* eb7b4: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964536));
  fn1_142a40(c);
  /* eb7b8: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964540));
  fn1_a1454(c);
}

void fn1_ed3a4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038899620));
  /* ed3a4: bti c */
  /* bti: no architectural effect here */
  /* ed3a8: ldp x9, x10, [x0, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(48));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* ed3ac: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* ed3b0: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* ed3b4: b.eq #0xed3cc */
  if (ARC_COND(c, 0)) goto L_ed3cc;
  /* ed3b8: add x10, x9, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* ed3bc: and w0, w1, #0xff */
  ARC_W_W(c, 0, (ARC_W_R(c, 1) & UINT64_C(255)));
  /* ed3c0: str x10, [x8, #0x30] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(48)), ARC_X_R(c, 10));
  /* ed3c4: strb w1, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 1));
  /* ed3c8: ret  */
  return;
L_ed3cc:;
  /* ed3cc: ldr x9, [x8] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 8)));
  /* ed3d0: and w1, w1, #0xff */
  ARC_W_W(c, 1, (ARC_W_R(c, 1) & UINT64_C(255)));
  /* ed3d4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* ed3d8: ldr x16, [x9, #0x68] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 9) + INT64_C(104))));
  /* ed3dc: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_f0c00(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038914048));
  /* f0c00: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f0c04: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f0c08: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* f0c0c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f0c10: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f0c14: add x0, x29, #0x1c */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(28)));
  /* f0c18: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* f0c1c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f0c20: bl #0x1435f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(986148));
  fn1_1435f8(c);
  /* f0c24: ldrb w8, [x29, #0x1c] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(28))));
  /* f0c28: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f0c2c: b.ne #0xf0c98 */
  if (ARC_COND(c, 1)) goto L_f0c98;
  /* f0c30: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f0c34: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f0c38: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f0c3c: ldr x0, [x8, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f0c40: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f0c44: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* f0c48: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* f0c4c: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* f0c50: mov w3, #8 */
  ARC_W_W(c, 3, UINT64_C(8));
  /* f0c54: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(986200));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f0c58: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
L_f0c5c:;
  /* f0c5c: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* f0c60: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* f0c64: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f0c68: ldr x10, [x9, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 9) + INT64_C(40))));
  /* f0c6c: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* f0c70: ldp w11, w10, [x9, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(32));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* f0c74: orr w8, w11, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 11) | ARC_W_R(c, 8)));
  /* f0c78: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* f0c7c: orr w8, w8, w11 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 11)));
  /* f0c80: tst w8, w10 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 10)));
  /* f0c84: str w8, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 8));
  /* f0c88: b.eq #0xf0ca0 */
  if (ARC_COND(c, 0)) goto L_f0ca0;
  /* f0c8c: nop  */
  /* nop: no architectural effect here */
  /* f0c90: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f0c94: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(986264));
  fn1_ec720(c);
L_f0c98:;
  /* f0c98: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* f0c9c: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
L_f0ca0:;
  /* f0ca0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f0ca4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f0ca8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f0cac: ret  */
  return;
  /* f0cb0: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(986292));
  fn1_142548(c);
  /* f0cb4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f0cb8: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f0cbc: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f0cc0: ldr w10, [x9, #0x20] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f0cc4: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* f0cc8: str w10, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 10));
  /* f0ccc: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f0cd0: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f0cd4: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f0cd8: tbnz w8, #0, #0xf0cf0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_f0cf0;
  /* f0cdc: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(986336));
  fn1_142980(c);
  /* f0ce0: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* f0ce4: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* f0ce8: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* f0cec: b #0xf0c5c */
  goto L_f0c5c;
L_f0cf0:;
  /* f0cf0: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(986356));
  fn1_1429b0(c);
  /* f0cf4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f0cf8: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(986364));
  fn1_142980(c);
  /* f0cfc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f0d00: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(986372));
  fn1_9cc20(c);
  /* f0d04: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(986376));
  fn1_a1454(c);
}

void fn1_f3ddc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038926812));
  /* f3ddc: bti c */
  /* bti: no architectural effect here */
  /* f3de0: ldp x9, x10, [x0, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(48));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* f3de4: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* f3de8: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* f3dec: b.eq #0xf3e00 */
  if (ARC_COND(c, 0)) goto L_f3e00;
  /* f3df0: mov w0, w1 */
  ARC_W_W(c, 0, ARC_W_R(c, 1));
  /* f3df4: str w1, [x9], #4 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 1));
  }
  /* f3df8: str x9, [x8, #0x30] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(48)), ARC_X_R(c, 9));
  /* f3dfc: ret  */
  return;
L_f3e00:;
  /* f3e00: ldr x9, [x8] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 8)));
  /* f3e04: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* f3e08: ldr x16, [x9, #0x68] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 9) + INT64_C(104))));
  /* f3e0c: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_f7638(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038941240));
  /* f7638: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f763c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f7640: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* f7644: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f7648: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f764c: add x0, x29, #0x1c */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(28)));
  /* f7650: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* f7654: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f7658: bl #0x143670 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1013340));
  fn1_143670(c);
  /* f765c: ldrb w8, [x29, #0x1c] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(28))));
  /* f7660: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f7664: b.ne #0xf76d0 */
  if (ARC_COND(c, 1)) goto L_f76d0;
  /* f7668: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f766c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f7670: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f7674: ldr x0, [x8, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f7678: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f767c: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* f7680: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* f7684: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* f7688: mov w3, #8 */
  ARC_W_W(c, 3, UINT64_C(8));
  /* f768c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1013392));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f7690: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
L_f7694:;
  /* f7694: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* f7698: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* f769c: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f76a0: ldr x10, [x9, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 9) + INT64_C(40))));
  /* f76a4: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* f76a8: ldp w11, w10, [x9, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(32));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* f76ac: orr w8, w11, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 11) | ARC_W_R(c, 8)));
  /* f76b0: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* f76b4: orr w8, w8, w11 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 11)));
  /* f76b8: tst w8, w10 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 10)));
  /* f76bc: str w8, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 8));
  /* f76c0: b.eq #0xf76d8 */
  if (ARC_COND(c, 0)) goto L_f76d8;
  /* f76c4: nop  */
  /* nop: no architectural effect here */
  /* f76c8: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f76cc: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1013456));
  fn1_ec720(c);
L_f76d0:;
  /* f76d0: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* f76d4: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
L_f76d8:;
  /* f76d8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f76dc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f76e0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f76e4: ret  */
  return;
  /* f76e8: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1013484));
  fn1_142548(c);
  /* f76ec: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f76f0: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f76f4: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f76f8: ldr w10, [x9, #0x20] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f76fc: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* f7700: str w10, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 10));
  /* f7704: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f7708: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f770c: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f7710: tbnz w8, #0, #0xf7728 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_f7728;
  /* f7714: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1013528));
  fn1_142980(c);
  /* f7718: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* f771c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* f7720: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* f7724: b #0xf7694 */
  goto L_f7694;
L_f7728:;
  /* f7728: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1013548));
  fn1_1429b0(c);
  /* f772c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f7730: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1013556));
  fn1_142980(c);
  /* f7734: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f7738: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1013564));
  fn1_9cc20(c);
  /* f773c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1013568));
  fn1_a1454(c);
}

void fn1_fc64c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038961740));
  /* fc64c: bti c */
  /* bti: no architectural effect here */
  /* fc650: ldrb w8, [x0, #0x9c] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(156))));
  /* fc654: tbnz w8, #4, #0xfc6b8 */
  if (((ARC_W_R(c, 8)) >> 4 & 1) != 0) goto L_fc6b8;
  /* fc658: ldr x8, [x0, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(96))));
  /* fc65c: stp xzr, xzr, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* fc660: str xzr, [x0, #0x20] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(32)), ARC_X_R(c, 31));
  /* fc664: cmp x8, #9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(9));
  /* fc668: b.lo #0xfc690 */
  if (ARC_COND(c, 3)) goto L_fc690;
  /* fc66c: ldrb w9, [x0, #0xa2] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(162))));
  /* fc670: cmp w9, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(1));
  /* fc674: b.ne #0xfc69c */
  if (ARC_COND(c, 1)) goto L_fc69c;
  /* fc678: ldr x9, [x0, #0x40] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(64))));
  /* fc67c: add x8, x9, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ARC_X_R(c, 8)));
  /* fc680: stp x9, x9, [x0, #0x28] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* fc684: sub x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* fc688: str x8, [x0, #0x38] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(56)), ARC_X_R(c, 8));
  /* fc68c: b #0xfc6b0 */
  goto L_fc6b0;
L_fc690:;
  /* fc690: stp xzr, xzr, [x0, #0x28] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* fc694: str xzr, [x0, #0x38] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(56)), ARC_X_R(c, 31));
  /* fc698: b #0xfc6b0 */
  goto L_fc6b0;
L_fc69c:;
  /* fc69c: ldp x8, x9, [x0, #0x68] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(104));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* fc6a0: add x9, x8, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* fc6a4: stp x8, x8, [x0, #0x28] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* fc6a8: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* fc6ac: str x9, [x0, #0x38] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(56)), ARC_X_R(c, 9));
L_fc6b0:;
  /* fc6b0: mov w8, #0x10 */
  ARC_W_W(c, 8, UINT64_C(16));
  /* fc6b4: str w8, [x0, #0x9c] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(156)), ARC_W_R(c, 8));
L_fc6b8:;
  /* fc6b8: ret  */
  return;
}

void fn1_ff4f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038973688));
  /* ff4f8: bti c */
  /* bti: no architectural effect here */
  /* ff4fc: cmp x1, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 2));
  /* ff500: b.eq #0xff528 */
  if (ARC_COND(c, 0)) goto L_ff528;
  /* ff504: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
L_ff508:;
  /* ff508: ldrb w8, [x1], #1 */
  { const uint64_t _a = ARC_X_R(c, 1);
    ARC_X_W(c, 1, ARC_X_R(c, 1) + INT64_C(1));
    ARC_W_W(c, 8, arc_ld8(_a));
  }
  /* ff50c: cmp x1, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 2));
  /* ff510: add x8, x8, x0, lsl #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 0)) << 4)));
  /* ff514: and x9, x8, #0xf000000000000000 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) & UINT64_C(17293822569102704640)));
  /* ff518: bfxil x9, x9, #0x38, #8 */
  ARC_X_W(c, 9, (((uint64_t)(ARC_X_R(c, 9)) & UINT64_C(18446744073709551360)) | ((((uint64_t)(ARC_X_R(c, 9))) >> 56) & UINT64_C(255))));
  /* ff51c: eor x0, x9, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) ^ ARC_X_R(c, 8)));
  /* ff520: b.ne #0xff508 */
  if (ARC_COND(c, 1)) goto L_ff508;
  /* ff524: ret  */
  return;
L_ff528:;
  /* ff528: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* ff52c: ret  */
  return;
}

void fn1_10f5d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039039440));
  /* 10f5d0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 10f5d4: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 10f5d8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 10f5dc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 10f5e0: mov x8, #0x4825 */
  ARC_X_W(c, 8, UINT64_C(18469));
  /* 10f5e4: add x6, sp, #8 */
  ARC_X_W(c, 6, ((c)->sp + UINT64_C(8)));
  /* 10f5e8: movk x8, #0x253a, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(624558080)));
  /* 10f5ec: movk x8, #0x3a4d, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(64102386892800)));
  /* 10f5f0: movk x8, #0x5325, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(5991194879286312960)));
  /* 10f5f4: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* 10f5f8: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 10f5fc: add x7, x8, #8 */
  ARC_X_W(c, 7, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* 10f600: bl #0x143958 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1111556));
  fn1_143958(c);
  /* 10f604: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 10f608: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 10f60c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 10f610: ret  */
  return;
}

void fn1_113c58(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057496));
  /* 113c58: bti c */
  /* bti: no architectural effect here */
  /* 113c5c: stp xzr, xzr, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 113c60: str xzr, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 31));
  /* 113c64: ret  */
  return;
}

void fn1_1160c4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039066820));
  /* 1160c4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1160c8: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* 1160cc: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1160d0: stp x28, x27, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 1160d4: stp x26, x25, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 1160d8: stp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1160dc: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1160e0: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1160e4: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1160e8: ldr x27, [x29, #0x60] */
  ARC_X_W(c, 27, arc_ld64((ARC_X_R(c, 29) + INT64_C(96))));
  /* 1160ec: ldr x28, [x1] */
  ARC_X_W(c, 28, arc_ld64(ARC_X_R(c, 1)));
  /* 1160f0: mov x23, x7 */
  ARC_X_W(c, 23, ARC_X_R(c, 7));
  /* 1160f4: mov x19, x6 */
  ARC_X_W(c, 19, ARC_X_R(c, 6));
  /* 1160f8: mov x20, x5 */
  ARC_X_W(c, 20, ARC_X_R(c, 5));
  /* 1160fc: mov x22, x4 */
  ARC_X_W(c, 22, ARC_X_R(c, 4));
  /* 116100: mov x25, x2 */
  ARC_X_W(c, 25, ARC_X_R(c, 2));
  /* 116104: str x3, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 3));
  /* 116108: tbz w0, #0, #0x1161cc */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_1161cc;
  /* 11610c: adrp x21, #0x151000 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 116110: ldr x21, [x21, #0xc10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 21) + INT64_C(3088))));
  /* 116114: ldar x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 116118: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11611c: b.eq #0x116298 */
  if (ARC_COND(c, 0)) goto L_116298;
  /* 116120: nop  */
  /* nop: no architectural effect here */
  /* 116124: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 116128: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1138988));
  fn1_142518(c);
  /* 11612c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 116130: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 116134: b.ne #0x116160 */
  if (ARC_COND(c, 1)) goto L_116160;
  /* 116138: nop  */
  /* nop: no architectural effect here */
  /* 11613c: adr x24, #0x15791c */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 116140: nop  */
  /* nop: no architectural effect here */
  /* 116144: adr x26, #0x1578f4 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1407220)));
L_116148:;
  /* 116148: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 11614c: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 116150: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1139028));
  fn1_142530(c);
  /* 116154: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 116158: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11615c: b.eq #0x116148 */
  if (ARC_COND(c, 0)) goto L_116148;
L_116160:;
  /* 116160: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 116164: cbnz x8, #0x116228 */
  if ((ARC_X_R(c, 8)) != 0) goto L_116228;
  /* 116168: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11616c: str x21, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 21));
  /* 116170: strb wzr, [sp, #0x10] */
  arc_st8(((c)->sp + INT64_C(16)), ARC_W_R(c, 31));
  /* 116174: str x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* 116178: nop  */
  /* nop: no architectural effect here */
  /* 11617c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 116180: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1139076));
  fn1_142560(c);
  /* 116184: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 116188: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11618c: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 116190: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1139092));
  fn1_a2030(c);
  /* 116194: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 116198: str w8, [x21, #8] */
  arc_st32((ARC_X_R(c, 21) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11619c: nop  */
  /* nop: no architectural effect here */
  /* 1161a0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1161a4: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1139112));
  fn1_142518(c);
  /* 1161a8: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 1161ac: stlr x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* 1161b0: nop  */
  /* nop: no architectural effect here */
  /* 1161b4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1161b8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1139132));
  fn1_142560(c);
  /* 1161bc: nop  */
  /* nop: no architectural effect here */
  /* 1161c0: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 1161c4: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1139144));
  fn1_142578(c);
  /* 1161c8: b #0x116298 */
  goto L_116298;
L_1161cc:;
  /* 1161cc: adrp x21, #0x151000 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1161d0: ldr x21, [x21, #0xc08] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 21) + INT64_C(3080))));
  /* 1161d4: ldar x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 1161d8: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 1161dc: b.eq #0x116298 */
  if (ARC_COND(c, 0)) goto L_116298;
  /* 1161e0: nop  */
  /* nop: no architectural effect here */
  /* 1161e4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1161e8: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1139180));
  fn1_142518(c);
  /* 1161ec: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 1161f0: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1161f4: b.ne #0x116220 */
  if (ARC_COND(c, 1)) goto L_116220;
  /* 1161f8: nop  */
  /* nop: no architectural effect here */
  /* 1161fc: adr x24, #0x15791c */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 116200: nop  */
  /* nop: no architectural effect here */
  /* 116204: adr x26, #0x1578f4 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1407220)));
L_116208:;
  /* 116208: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 11620c: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 116210: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1139220));
  fn1_142530(c);
  /* 116214: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 116218: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11621c: b.eq #0x116208 */
  if (ARC_COND(c, 0)) goto L_116208;
L_116220:;
  /* 116220: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 116224: cbz x8, #0x116238 */
  if ((ARC_X_R(c, 8)) == 0) goto L_116238;
L_116228:;
  /* 116228: nop  */
  /* nop: no architectural effect here */
  /* 11622c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 116230: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1139252));
  fn1_142560(c);
  /* 116234: b #0x116298 */
  goto L_116298;
L_116238:;
  /* 116238: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11623c: str x21, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 21));
  /* 116240: strb wzr, [sp, #0x10] */
  arc_st8(((c)->sp + INT64_C(16)), ARC_W_R(c, 31));
  /* 116244: str x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* 116248: nop  */
  /* nop: no architectural effect here */
  /* 11624c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 116250: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1139284));
  fn1_142560(c);
  /* 116254: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 116258: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11625c: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 116260: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1139300));
  fn1_a2030(c);
  /* 116264: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 116268: str w8, [x21, #8] */
  arc_st32((ARC_X_R(c, 21) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11626c: nop  */
  /* nop: no architectural effect here */
  /* 116270: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 116274: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1139320));
  fn1_142518(c);
  /* 116278: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11627c: stlr x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* 116280: nop  */
  /* nop: no architectural effect here */
  /* 116284: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 116288: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1139340));
  fn1_142560(c);
  /* 11628c: nop  */
  /* nop: no architectural effect here */
  /* 116290: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 116294: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1139352));
  fn1_142578(c);
L_116298:;
  /* 116298: ldp x8, x10, [x28, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 28) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 11629c: ldrsw x9, [x21, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 21) + INT64_C(8)))));
  /* 1162a0: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 1162a4: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 1162a8: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 1162ac: b.hs #0x116424 */
  if (ARC_COND(c, 2)) goto L_116424;
  /* 1162b0: ldr x24, [x8, x9, lsl #3] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 1162b4: cbz x24, #0x116424 */
  if ((ARC_X_R(c, 24)) == 0) goto L_116424;
  /* 1162b8: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 1162bc: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 1162c0: ldr x8, [x8, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* 1162c4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1139400));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1162c8: str w0, [x25] */
  arc_st32(ARC_X_R(c, 25), ARC_W_R(c, 0));
  /* 1162cc: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 1162d0: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 1162d4: ldr x9, [x8, #0x40] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 1162d8: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 1162dc: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1139424));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 1162e0: ldrb w8, [x27] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 27)));
  /* 1162e4: tbz w8, #0, #0x1162f8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1162f8;
  /* 1162e8: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 1162ec: ldr x0, [x27, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 27) + INT64_C(16))));
  /* 1162f0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1162f4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1139448));
  fn1_142608(c);
L_1162f8:;
  /* 1162f8: ldur q0, [sp, #8] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))), arc_ld64(((c)->sp + INT64_C(8)) + 8));
  /* 1162fc: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 116300: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 116304: str q0, [x27] */
  arc_st64(ARC_X_R(c, 27), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 27) + 8, (c)->q[0].u64[1]);
  /* 116308: str x8, [x27, #0x10] */
  arc_st64((ARC_X_R(c, 27) + INT64_C(16)), ARC_X_R(c, 8));
  /* 11630c: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 116310: ldr x9, [x8, #0x38] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* 116314: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 116318: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1139484));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 11631c: ldrb w8, [x23] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 23)));
  /* 116320: tbz w8, #0, #0x116334 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_116334;
  /* 116324: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 116328: ldr x0, [x23, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 23) + INT64_C(16))));
  /* 11632c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 116330: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1139508));
  fn1_142608(c);
L_116334:;
  /* 116334: ldur q0, [sp, #8] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))), arc_ld64(((c)->sp + INT64_C(8)) + 8));
  /* 116338: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 11633c: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 116340: str q0, [x23] */
  arc_st64(ARC_X_R(c, 23), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 23) + 8, (c)->q[0].u64[1]);
  /* 116344: str x8, [x23, #0x10] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(16)), ARC_X_R(c, 8));
  /* 116348: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11634c: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 116350: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1139540));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 116354: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 116358: strb w0, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 0));
  /* 11635c: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 116360: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 116364: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 116368: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1139564));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11636c: strb w0, [x22] */
  arc_st8(ARC_X_R(c, 22), ARC_W_R(c, 0));
  /* 116370: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 116374: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 116378: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* 11637c: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 116380: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1139588));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 116384: ldrb w8, [x20] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 20)));
  /* 116388: tbz w8, #0, #0x11639c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_11639c;
  /* 11638c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 116390: ldr x0, [x20, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 116394: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 116398: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1139612));
  fn1_142608(c);
L_11639c:;
  /* 11639c: ldur q0, [sp, #8] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))), arc_ld64(((c)->sp + INT64_C(8)) + 8));
  /* 1163a0: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 1163a4: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 1163a8: str q0, [x20] */
  arc_st64(ARC_X_R(c, 20), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 20) + 8, (c)->q[0].u64[1]);
  /* 1163ac: str x8, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 8));
  /* 1163b0: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 1163b4: ldr x9, [x8, #0x30] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* 1163b8: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 1163bc: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1139648));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 1163c0: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 1163c4: tbz w8, #0, #0x1163d8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1163d8;
  /* 1163c8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1163cc: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 1163d0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1163d4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1139672));
  fn1_142608(c);
L_1163d8:;
  /* 1163d8: ldur q0, [sp, #8] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))), arc_ld64(((c)->sp + INT64_C(8)) + 8));
  /* 1163dc: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 1163e0: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 1163e4: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* 1163e8: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* 1163ec: ldr x19, [x29, #0x68] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 29) + INT64_C(104))));
  /* 1163f0: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 1163f4: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1163f8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1139708));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1163fc: str w0, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 0));
  /* 116400: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 116404: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 116408: ldp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 11640c: ldp x26, x25, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 116410: ldp x28, x27, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 116414: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 116418: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* 11641c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 116420: ret  */
  return;
L_116424:;
  /* 116424: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1139752));
  fn1_fc3b8(c);
  /* 116428: b #0x11642c */
  goto L_11642c;
L_11642c:;
  /* 11642c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 116430: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 116434: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1139768));
  fn1_d2a78(c);
  /* 116438: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11643c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1139776));
  fn1_9cc20(c);
}

void fn1_121820(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039113760));
  /* 121820: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 121824: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 121828: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12182c: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 121830: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 121834: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 121838: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12183c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 121840: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 121844: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 121848: adrp x9, #0x14e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1368064)));
  /* 12184c: add x9, x9, #0x248 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(584)));
  /* 121850: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 121854: mov w22, w3 */
  ARC_W_W(c, 22, ARC_W_R(c, 3));
  /* 121858: stp x9, x8, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 12185c: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* 121860: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* 121864: str x9, [x0, #0x118] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(280)), ARC_X_R(c, 9));
  /* 121868: add x9, x0, #0x118 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + UINT64_C(280)));
  /* 12186c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 121870: str q0, [x8, #0x28]! */
  arc_st64((ARC_X_R(c, 8) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 8) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(40));
  /* 121874: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 121878: str x8, [x19, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 12187c: stur q0, [x0, #0x38] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* 121880: stur q0, [x0, #0x48] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* 121884: stur q0, [x0, #0x58] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(88)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(88)) + 8, (c)->q[0].u64[1]);
  /* 121888: stur q0, [x0, #0x68] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(104)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(104)) + 8, (c)->q[0].u64[1]);
  /* 12188c: stur q0, [x0, #0x78] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(120)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(120)) + 8, (c)->q[0].u64[1]);
  /* 121890: stur q0, [x0, #0x88] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(136)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(136)) + 8, (c)->q[0].u64[1]);
  /* 121894: stur q0, [x0, #0x98] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(152)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(152)) + 8, (c)->q[0].u64[1]);
  /* 121898: stur q0, [x0, #0xa8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(168)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(168)) + 8, (c)->q[0].u64[1]);
  /* 12189c: stur q0, [x0, #0xb8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(184)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(184)) + 8, (c)->q[0].u64[1]);
  /* 1218a0: stur q0, [x0, #0xc8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(200)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(200)) + 8, (c)->q[0].u64[1]);
  /* 1218a4: stur q0, [x0, #0xd8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(216)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(216)) + 8, (c)->q[0].u64[1]);
  /* 1218a8: stur q0, [x0, #0xe8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(232)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(232)) + 8, (c)->q[0].u64[1]);
  /* 1218ac: stur q0, [x0, #0xf8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(248)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(248)) + 8, (c)->q[0].u64[1]);
  /* 1218b0: str q0, [x8, #0xe0] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(224)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 8) + INT64_C(224)) + 8, (c)->q[0].u64[1]);
  /* 1218b4: stp x9, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1218b8: ldrb w24, [x1, #0x120] */
  ARC_W_W(c, 24, arc_ld8((ARC_X_R(c, 1) + INT64_C(288))));
  /* 1218bc: ldr x23, [x1, #0x128] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 1) + INT64_C(296))));
  /* 1218c0: ubfx w8, w24, #1, #7 */
  ARC_W_W(c, 8, (((uint32_t)(ARC_W_R(c, 24)) >> 1) & UINT64_C(127)));
  /* 1218c4: tst w24, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 24) & UINT64_C(1)));
  /* 1218c8: csel x8, x8, x23, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 23)));
  /* 1218cc: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1218d0: b.ne #0x1218f0 */
  if (ARC_COND(c, 1)) goto L_1218f0;
  /* 1218d4: ldr x9, [x1, #0x130] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(304))));
  /* 1218d8: add x10, x1, #0x121 */
  ARC_X_W(c, 10, (ARC_X_R(c, 1) + UINT64_C(289)));
  /* 1218dc: tst w24, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 24) & UINT64_C(1)));
  /* 1218e0: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 1218e4: ldrb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 1218e8: cmp w9, #0x2a */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(42));
  /* 1218ec: b.eq #0x12196c */
  if (ARC_COND(c, 0)) goto L_12196c;
L_1218f0:;
  /* 1218f0: ldrb w9, [x21, #0x120] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 21) + INT64_C(288))));
  /* 1218f4: ldr x10, [x21, #0x128] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 21) + INT64_C(296))));
  /* 1218f8: ubfx w11, w9, #1, #7 */
  ARC_W_W(c, 11, (((uint32_t)(ARC_W_R(c, 9)) >> 1) & UINT64_C(127)));
  /* 1218fc: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 121900: csel x10, x11, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 121904: cmp x10, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(1));
  /* 121908: b.ne #0x121928 */
  if (ARC_COND(c, 1)) goto L_121928;
  /* 12190c: ldr x11, [x21, #0x130] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 21) + INT64_C(304))));
  /* 121910: add x12, x21, #0x121 */
  ARC_X_W(c, 12, (ARC_X_R(c, 21) + UINT64_C(289)));
  /* 121914: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 121918: csel x11, x12, x11, eq */
  ARC_X_W(c, 11, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* 12191c: ldrb w11, [x11] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 11)));
  /* 121920: cmp w11, #0x2a */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(42));
  /* 121924: b.eq #0x12196c */
  if (ARC_COND(c, 0)) goto L_12196c;
L_121928:;
  /* 121928: cbz w22, #0x121a50 */
  if ((ARC_W_R(c, 22)) == 0) goto L_121a50;
  /* 12192c: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 121930: b.ne #0x12196c */
  if (ARC_COND(c, 1)) goto L_12196c;
  /* 121934: ldr x10, [x1, #0x130] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 1) + INT64_C(304))));
  /* 121938: add x11, x1, #0x121 */
  ARC_X_W(c, 11, (ARC_X_R(c, 1) + UINT64_C(289)));
  /* 12193c: tst w24, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 24) & UINT64_C(1)));
  /* 121940: ldr x12, [x21, #0x130] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 21) + INT64_C(304))));
  /* 121944: mov x25, x1 */
  ARC_X_W(c, 25, ARC_X_R(c, 1));
  /* 121948: mov x2, x8 */
  ARC_X_W(c, 2, ARC_X_R(c, 8));
  /* 12194c: csel x0, x11, x10, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 121950: add x10, x21, #0x121 */
  ARC_X_W(c, 10, (ARC_X_R(c, 21) + UINT64_C(289)));
  /* 121954: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 121958: csel x9, x10, x12, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 12)));
  /* 12195c: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 121960: bl #0x142890 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1186148));
  fn1_142890(c);
  /* 121964: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 121968: cbz w0, #0x121a50 */
  if ((ARC_W_R(c, 0)) == 0) goto L_121a50;
L_12196c:;
  /* 12196c: mov w8, #0x2a02 */
  ARC_W_W(c, 8, UINT64_C(10754));
  /* 121970: strb wzr, [x20, #0x122] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(290)), ARC_W_R(c, 31));
  /* 121974: strh w8, [x20, #0x120] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(288)), ARC_W_R(c, 8));
L_121978:;
  /* 121978: cmp x20, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 1));
  /* 12197c: b.eq #0x121998 */
  if (ARC_COND(c, 0)) goto L_121998;
  /* 121980: ldp x8, x2, [x1, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 121984: sub x9, x2, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 2) - ARC_X_R(c, 8)));
  /* 121988: asr x3, x9, #3 */
  ARC_X_W(c, 3, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 12198c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 121990: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* 121994: bl #0x135150 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1186200));
  fn1_135150(c);
L_121998:;
  /* 121998: ldp x9, x8, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12199c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1219a0: b.eq #0x1219e0 */
  if (ARC_COND(c, 0)) goto L_1219e0;
  /* 1219a4: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
  /* 1219a8: mov w23, #1 */
  ARC_W_W(c, 23, UINT64_C(1));
  /* 1219ac: b #0x1219c4 */
  goto L_1219c4;
L_1219b0:;
  /* 1219b0: mov w10, w23 */
  ARC_W_W(c, 10, ARC_W_R(c, 23));
  /* 1219b4: sub x11, x8, x9 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* 1219b8: add w23, w23, #1 */
  ARC_W_W(c, 23, (ARC_W_R(c, 23) + UINT64_C(1)));
  /* 1219bc: cmp x10, x11, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ((uint64_t)((int64_t)(ARC_X_R(c, 11)) >> 3)));
  /* 1219c0: b.hs #0x1219e0 */
  if (ARC_COND(c, 2)) goto L_1219e0;
L_1219c4:;
  /* 1219c4: ldr x10, [x9, x10, lsl #3] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 10)) << 3))));
  /* 1219c8: cbz x10, #0x1219b0 */
  if ((ARC_X_R(c, 10)) == 0) goto L_1219b0;
  /* 1219cc: add x1, x10, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 10) + UINT64_C(8)));
  /* 1219d0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1219d4: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1186264));
  fn1_db2e0(c);
  /* 1219d8: ldp x9, x8, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 1219dc: b #0x1219b0 */
  goto L_1219b0;
L_1219e0:;
  /* 1219e0: tbz w22, #3, #0x121ce4 */
  if (((ARC_W_R(c, 22)) >> 3 & 1) == 0) goto L_121ce4;
  /* 1219e4: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1219e8: ldr x25, [x25, #0xbd0] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(3024))));
  /* 1219ec: ldar x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 1219f0: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 1219f4: b.eq #0x121ae8 */
  if (ARC_COND(c, 0)) goto L_121ae8;
  /* 1219f8: nop  */
  /* nop: no architectural effect here */
  /* 1219fc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 121a00: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1186308));
  fn1_142518(c);
  /* 121a04: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 121a08: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 121a0c: b.ne #0x121a38 */
  if (ARC_COND(c, 1)) goto L_121a38;
  /* 121a10: nop  */
  /* nop: no architectural effect here */
  /* 121a14: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 121a18: nop  */
  /* nop: no architectural effect here */
  /* 121a1c: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_121a20:;
  /* 121a20: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 121a24: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 121a28: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1186348));
  fn1_142530(c);
  /* 121a2c: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 121a30: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 121a34: b.eq #0x121a20 */
  if (ARC_COND(c, 0)) goto L_121a20;
L_121a38:;
  /* 121a38: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 121a3c: cbz x8, #0x121a88 */
  if ((ARC_X_R(c, 8)) == 0) goto L_121a88;
  /* 121a40: nop  */
  /* nop: no architectural effect here */
  /* 121a44: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 121a48: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1186380));
  fn1_142560(c);
  /* 121a4c: b #0x121ae8 */
  goto L_121ae8;
L_121a50:;
  /* 121a50: tbnz w24, #0, #0x121a68 */
  if (((ARC_W_R(c, 24)) >> 0 & 1) != 0) goto L_121a68;
  /* 121a54: ldr x8, [x1, #0x130] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(304))));
  /* 121a58: ldr q0, [x1, #0x120] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 1) + INT64_C(288))), arc_ld64((ARC_X_R(c, 1) + INT64_C(288)) + 8));
  /* 121a5c: str x8, [x20, #0x130] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(304)), ARC_X_R(c, 8));
  /* 121a60: str q0, [x20, #0x120] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(288)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(288)) + 8, (c)->q[0].u64[1]);
  /* 121a64: b #0x121978 */
  goto L_121978;
L_121a68:;
  /* 121a68: ldr x8, [x1, #0x130] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(304))));
  /* 121a6c: add x0, x20, #0x120 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(288)));
  /* 121a70: mov x24, x1 */
  ARC_X_W(c, 24, ARC_X_R(c, 1));
  /* 121a74: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* 121a78: mov x2, x23 */
  ARC_X_W(c, 2, ARC_X_R(c, 23));
  /* 121a7c: bl #0xda588 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1186432));
  fn1_da588(c);
  /* 121a80: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 121a84: b #0x121978 */
  goto L_121978;
L_121a88:;
  /* 121a88: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 121a8c: str x25, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 25));
  /* 121a90: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 121a94: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 121a98: nop  */
  /* nop: no architectural effect here */
  /* 121a9c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 121aa0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1186468));
  fn1_142560(c);
  /* 121aa4: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 121aa8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 121aac: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 121ab0: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1186484));
  fn1_a2030(c);
  /* 121ab4: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 121ab8: str w8, [x25, #8] */
  arc_st32((ARC_X_R(c, 25) + INT64_C(8)), ARC_W_R(c, 8));
  /* 121abc: nop  */
  /* nop: no architectural effect here */
  /* 121ac0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 121ac4: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1186504));
  fn1_142518(c);
  /* 121ac8: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 121acc: stlr x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 121ad0: nop  */
  /* nop: no architectural effect here */
  /* 121ad4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 121ad8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1186524));
  fn1_142560(c);
  /* 121adc: nop  */
  /* nop: no architectural effect here */
  /* 121ae0: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 121ae4: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1186536));
  fn1_142578(c);
L_121ae8:;
  /* 121ae8: ldp x8, x10, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 121aec: ldrsw x9, [x25, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 25) + INT64_C(8)))));
  /* 121af0: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 121af4: sub x9, x10, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 121af8: cmp x26, x9, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 3)));
  /* 121afc: b.hs #0x124408 */
  if (ARC_COND(c, 2)) goto L_124408;
  /* 121b00: ldr x23, [x8, x26, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 121b04: cbz x23, #0x124408 */
  if ((ARC_X_R(c, 23)) == 0) goto L_124408;
  /* 121b08: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* 121b0c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 121b10: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1186580));
  fn1_db2e0(c);
  /* 121b14: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 121b18: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 121b1c: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 121b20: cmp x10, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 26));
  /* 121b24: b.hi #0x121b50 */
  if (ARC_COND(c, 8)) goto L_121b50;
  /* 121b28: add x9, x26, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 26) + UINT64_C(1)));
  /* 121b2c: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 121b30: b.ls #0x121b44 */
  if (ARC_COND(c, 9)) goto L_121b44;
  /* 121b34: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 121b38: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1186620));
  fn1_1352bc(c);
  /* 121b3c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 121b40: b #0x121b50 */
  goto L_121b50;
L_121b44:;
  /* 121b44: b.hs #0x121b50 */
  if (ARC_COND(c, 2)) goto L_121b50;
  /* 121b48: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 121b4c: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_121b50:;
  /* 121b50: ldr x24, [x8, x26, lsl #3] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 121b54: cbz x24, #0x121b78 */
  if ((ARC_X_R(c, 24)) == 0) goto L_121b78;
  /* 121b58: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 121b5c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 121b60: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1186660));
  fn1_bd950(c);
  /* 121b64: cbnz x0, #0x121b78 */
  if ((ARC_X_R(c, 0)) != 0) goto L_121b78;
  /* 121b68: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 121b6c: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 121b70: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 121b74: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1186680));
  arc_dispatch(c, ARC_X_R(c, 8));
L_121b78:;
  /* 121b78: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 121b7c: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 121b80: ldr x25, [x25, #0xbd8] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(3032))));
  /* 121b84: str x23, [x8, x26, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3)), ARC_X_R(c, 23));
  /* 121b88: ldar x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 121b8c: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 121b90: b.eq #0x121c4c */
  if (ARC_COND(c, 0)) goto L_121c4c;
  /* 121b94: nop  */
  /* nop: no architectural effect here */
  /* 121b98: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 121b9c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1186720));
  fn1_142518(c);
  /* 121ba0: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 121ba4: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 121ba8: b.ne #0x121bd4 */
  if (ARC_COND(c, 1)) goto L_121bd4;
  /* 121bac: nop  */
  /* nop: no architectural effect here */
  /* 121bb0: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 121bb4: nop  */
  /* nop: no architectural effect here */
  /* 121bb8: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_121bbc:;
  /* 121bbc: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 121bc0: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 121bc4: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1186760));
  fn1_142530(c);
  /* 121bc8: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 121bcc: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 121bd0: b.eq #0x121bbc */
  if (ARC_COND(c, 0)) goto L_121bbc;
L_121bd4:;
  /* 121bd4: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 121bd8: cbz x8, #0x121bec */
  if ((ARC_X_R(c, 8)) == 0) goto L_121bec;
  /* 121bdc: nop  */
  /* nop: no architectural effect here */
  /* 121be0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 121be4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1186792));
  fn1_142560(c);
  /* 121be8: b #0x121c4c */
  goto L_121c4c;
L_121bec:;
  /* 121bec: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 121bf0: str x25, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 25));
  /* 121bf4: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 121bf8: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 121bfc: nop  */
  /* nop: no architectural effect here */
  /* 121c00: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 121c04: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1186824));
  fn1_142560(c);
  /* 121c08: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 121c0c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 121c10: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 121c14: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1186840));
  fn1_a2030(c);
  /* 121c18: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 121c1c: str w8, [x25, #8] */
  arc_st32((ARC_X_R(c, 25) + INT64_C(8)), ARC_W_R(c, 8));
  /* 121c20: nop  */
  /* nop: no architectural effect here */
  /* 121c24: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 121c28: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1186860));
  fn1_142518(c);
  /* 121c2c: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 121c30: stlr x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 121c34: nop  */
  /* nop: no architectural effect here */
  /* 121c38: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 121c3c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1186880));
  fn1_142560(c);
  /* 121c40: nop  */
  /* nop: no architectural effect here */
  /* 121c44: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 121c48: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1186892));
  fn1_142578(c);
L_121c4c:;
  /* 121c4c: ldp x8, x10, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 121c50: ldrsw x9, [x25, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 25) + INT64_C(8)))));
  /* 121c54: sub x25, x9, #1 */
  ARC_X_W(c, 25, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 121c58: sub x9, x10, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 121c5c: cmp x25, x9, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 3)));
  /* 121c60: b.hs #0x124408 */
  if (ARC_COND(c, 2)) goto L_124408;
  /* 121c64: ldr x23, [x8, x25, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 25)) << 3))));
  /* 121c68: cbz x23, #0x124408 */
  if ((ARC_X_R(c, 23)) == 0) goto L_124408;
  /* 121c6c: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* 121c70: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 121c74: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1186936));
  fn1_db2e0(c);
  /* 121c78: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 121c7c: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 121c80: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 121c84: cmp x10, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 25));
  /* 121c88: b.hi #0x121cb4 */
  if (ARC_COND(c, 8)) goto L_121cb4;
  /* 121c8c: add x9, x25, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 25) + UINT64_C(1)));
  /* 121c90: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 121c94: b.ls #0x121ca8 */
  if (ARC_COND(c, 9)) goto L_121ca8;
  /* 121c98: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 121c9c: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1186976));
  fn1_1352bc(c);
  /* 121ca0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 121ca4: b #0x121cb4 */
  goto L_121cb4;
L_121ca8:;
  /* 121ca8: b.hs #0x121cb4 */
  if (ARC_COND(c, 2)) goto L_121cb4;
  /* 121cac: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 121cb0: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_121cb4:;
  /* 121cb4: ldr x24, [x8, x25, lsl #3] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 25)) << 3))));
  /* 121cb8: cbz x24, #0x121cdc */
  if ((ARC_X_R(c, 24)) == 0) goto L_121cdc;
  /* 121cbc: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 121cc0: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 121cc4: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1187016));
  fn1_bd950(c);
  /* 121cc8: cbnz x0, #0x121cdc */
  if ((ARC_X_R(c, 0)) != 0) goto L_121cdc;
  /* 121ccc: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 121cd0: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 121cd4: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 121cd8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1187036));
  arc_dispatch(c, ARC_X_R(c, 8));
L_121cdc:;
  /* 121cdc: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 121ce0: str x23, [x8, x25, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 25)) << 3)), ARC_X_R(c, 23));
L_121ce4:;
  /* 121ce4: tbz w22, #0, #0x122808 */
  if (((ARC_W_R(c, 22)) >> 0 & 1) == 0) goto L_122808;
  /* 121ce8: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 121cec: ldr x25, [x25, #0xb40] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(2880))));
  /* 121cf0: ldar x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 121cf4: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 121cf8: b.eq #0x121db4 */
  if (ARC_COND(c, 0)) goto L_121db4;
  /* 121cfc: nop  */
  /* nop: no architectural effect here */
  /* 121d00: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 121d04: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1187080));
  fn1_142518(c);
  /* 121d08: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 121d0c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 121d10: b.ne #0x121d3c */
  if (ARC_COND(c, 1)) goto L_121d3c;
  /* 121d14: nop  */
  /* nop: no architectural effect here */
  /* 121d18: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 121d1c: nop  */
  /* nop: no architectural effect here */
  /* 121d20: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_121d24:;
  /* 121d24: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 121d28: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 121d2c: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1187120));
  fn1_142530(c);
  /* 121d30: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 121d34: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 121d38: b.eq #0x121d24 */
  if (ARC_COND(c, 0)) goto L_121d24;
L_121d3c:;
  /* 121d3c: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 121d40: cbz x8, #0x121d54 */
  if ((ARC_X_R(c, 8)) == 0) goto L_121d54;
  /* 121d44: nop  */
  /* nop: no architectural effect here */
  /* 121d48: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 121d4c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1187152));
  fn1_142560(c);
  /* 121d50: b #0x121db4 */
  goto L_121db4;
L_121d54:;
  /* 121d54: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 121d58: str x25, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 25));
  /* 121d5c: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 121d60: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 121d64: nop  */
  /* nop: no architectural effect here */
  /* 121d68: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 121d6c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1187184));
  fn1_142560(c);
  /* 121d70: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 121d74: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 121d78: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 121d7c: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1187200));
  fn1_a2030(c);
  /* 121d80: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 121d84: str w8, [x25, #8] */
  arc_st32((ARC_X_R(c, 25) + INT64_C(8)), ARC_W_R(c, 8));
  /* 121d88: nop  */
  /* nop: no architectural effect here */
  /* 121d8c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 121d90: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1187220));
  fn1_142518(c);
  /* 121d94: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 121d98: stlr x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 121d9c: nop  */
  /* nop: no architectural effect here */
  /* 121da0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 121da4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1187240));
  fn1_142560(c);
  /* 121da8: nop  */
  /* nop: no architectural effect here */
  /* 121dac: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 121db0: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1187252));
  fn1_142578(c);
L_121db4:;
  /* 121db4: ldp x8, x10, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 121db8: ldrsw x9, [x25, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 25) + INT64_C(8)))));
  /* 121dbc: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 121dc0: sub x9, x10, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 121dc4: cmp x26, x9, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 3)));
  /* 121dc8: b.hs #0x124408 */
  if (ARC_COND(c, 2)) goto L_124408;
  /* 121dcc: ldr x23, [x8, x26, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 121dd0: cbz x23, #0x124408 */
  if ((ARC_X_R(c, 23)) == 0) goto L_124408;
  /* 121dd4: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* 121dd8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 121ddc: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1187296));
  fn1_db2e0(c);
  /* 121de0: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 121de4: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 121de8: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 121dec: cmp x10, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 26));
  /* 121df0: b.hi #0x121e1c */
  if (ARC_COND(c, 8)) goto L_121e1c;
  /* 121df4: add x9, x26, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 26) + UINT64_C(1)));
  /* 121df8: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 121dfc: b.ls #0x121e10 */
  if (ARC_COND(c, 9)) goto L_121e10;
  /* 121e00: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 121e04: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1187336));
  fn1_1352bc(c);
  /* 121e08: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 121e0c: b #0x121e1c */
  goto L_121e1c;
L_121e10:;
  /* 121e10: b.hs #0x121e1c */
  if (ARC_COND(c, 2)) goto L_121e1c;
  /* 121e14: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 121e18: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_121e1c:;
  /* 121e1c: ldr x24, [x8, x26, lsl #3] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 121e20: cbz x24, #0x121e44 */
  if ((ARC_X_R(c, 24)) == 0) goto L_121e44;
  /* 121e24: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 121e28: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 121e2c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1187376));
  fn1_bd950(c);
  /* 121e30: cbnz x0, #0x121e44 */
  if ((ARC_X_R(c, 0)) != 0) goto L_121e44;
  /* 121e34: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 121e38: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 121e3c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 121e40: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1187396));
  arc_dispatch(c, ARC_X_R(c, 8));
L_121e44:;
  /* 121e44: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 121e48: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 121e4c: ldr x25, [x25, #0xb58] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(2904))));
  /* 121e50: str x23, [x8, x26, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3)), ARC_X_R(c, 23));
  /* 121e54: ldar x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 121e58: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 121e5c: b.eq #0x121f18 */
  if (ARC_COND(c, 0)) goto L_121f18;
  /* 121e60: nop  */
  /* nop: no architectural effect here */
  /* 121e64: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 121e68: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1187436));
  fn1_142518(c);
  /* 121e6c: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 121e70: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 121e74: b.ne #0x121ea0 */
  if (ARC_COND(c, 1)) goto L_121ea0;
  /* 121e78: nop  */
  /* nop: no architectural effect here */
  /* 121e7c: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 121e80: nop  */
  /* nop: no architectural effect here */
  /* 121e84: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_121e88:;
  /* 121e88: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 121e8c: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 121e90: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1187476));
  fn1_142530(c);
  /* 121e94: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 121e98: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 121e9c: b.eq #0x121e88 */
  if (ARC_COND(c, 0)) goto L_121e88;
L_121ea0:;
  /* 121ea0: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 121ea4: cbz x8, #0x121eb8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_121eb8;
  /* 121ea8: nop  */
  /* nop: no architectural effect here */
  /* 121eac: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 121eb0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1187508));
  fn1_142560(c);
  /* 121eb4: b #0x121f18 */
  goto L_121f18;
L_121eb8:;
  /* 121eb8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 121ebc: str x25, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 25));
  /* 121ec0: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 121ec4: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 121ec8: nop  */
  /* nop: no architectural effect here */
  /* 121ecc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 121ed0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1187540));
  fn1_142560(c);
  /* 121ed4: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 121ed8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 121edc: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 121ee0: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1187556));
  fn1_a2030(c);
  /* 121ee4: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 121ee8: str w8, [x25, #8] */
  arc_st32((ARC_X_R(c, 25) + INT64_C(8)), ARC_W_R(c, 8));
  /* 121eec: nop  */
  /* nop: no architectural effect here */
  /* 121ef0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 121ef4: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1187576));
  fn1_142518(c);
  /* 121ef8: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 121efc: stlr x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 121f00: nop  */
  /* nop: no architectural effect here */
  /* 121f04: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 121f08: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1187596));
  fn1_142560(c);
  /* 121f0c: nop  */
  /* nop: no architectural effect here */
  /* 121f10: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 121f14: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1187608));
  fn1_142578(c);
L_121f18:;
  /* 121f18: ldp x8, x10, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 121f1c: ldrsw x9, [x25, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 25) + INT64_C(8)))));
  /* 121f20: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 121f24: sub x9, x10, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 121f28: cmp x26, x9, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 3)));
  /* 121f2c: b.hs #0x124408 */
  if (ARC_COND(c, 2)) goto L_124408;
  /* 121f30: ldr x23, [x8, x26, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 121f34: cbz x23, #0x124408 */
  if ((ARC_X_R(c, 23)) == 0) goto L_124408;
  /* 121f38: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* 121f3c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 121f40: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1187652));
  fn1_db2e0(c);
  /* 121f44: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 121f48: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 121f4c: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 121f50: cmp x10, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 26));
  /* 121f54: b.hi #0x121f80 */
  if (ARC_COND(c, 8)) goto L_121f80;
  /* 121f58: add x9, x26, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 26) + UINT64_C(1)));
  /* 121f5c: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 121f60: b.ls #0x121f74 */
  if (ARC_COND(c, 9)) goto L_121f74;
  /* 121f64: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 121f68: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1187692));
  fn1_1352bc(c);
  /* 121f6c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 121f70: b #0x121f80 */
  goto L_121f80;
L_121f74:;
  /* 121f74: b.hs #0x121f80 */
  if (ARC_COND(c, 2)) goto L_121f80;
  /* 121f78: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 121f7c: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_121f80:;
  /* 121f80: ldr x24, [x8, x26, lsl #3] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 121f84: cbz x24, #0x121fa8 */
  if ((ARC_X_R(c, 24)) == 0) goto L_121fa8;
  /* 121f88: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 121f8c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 121f90: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1187732));
  fn1_bd950(c);
  /* 121f94: cbnz x0, #0x121fa8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_121fa8;
  /* 121f98: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 121f9c: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 121fa0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 121fa4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1187752));
  arc_dispatch(c, ARC_X_R(c, 8));
L_121fa8:;
  /* 121fa8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 121fac: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 121fb0: ldr x25, [x25, #0xb70] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(2928))));
  /* 121fb4: str x23, [x8, x26, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3)), ARC_X_R(c, 23));
  /* 121fb8: ldar x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 121fbc: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 121fc0: b.eq #0x12207c */
  if (ARC_COND(c, 0)) goto L_12207c;
  /* 121fc4: nop  */
  /* nop: no architectural effect here */
  /* 121fc8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 121fcc: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1187792));
  fn1_142518(c);
  /* 121fd0: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 121fd4: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 121fd8: b.ne #0x122004 */
  if (ARC_COND(c, 1)) goto L_122004;
  /* 121fdc: nop  */
  /* nop: no architectural effect here */
  /* 121fe0: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 121fe4: nop  */
  /* nop: no architectural effect here */
  /* 121fe8: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_121fec:;
  /* 121fec: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 121ff0: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 121ff4: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1187832));
  fn1_142530(c);
  /* 121ff8: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 121ffc: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 122000: b.eq #0x121fec */
  if (ARC_COND(c, 0)) goto L_121fec;
L_122004:;
  /* 122004: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 122008: cbz x8, #0x12201c */
  if ((ARC_X_R(c, 8)) == 0) goto L_12201c;
  /* 12200c: nop  */
  /* nop: no architectural effect here */
  /* 122010: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122014: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1187864));
  fn1_142560(c);
  /* 122018: b #0x12207c */
  goto L_12207c;
L_12201c:;
  /* 12201c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 122020: str x25, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 25));
  /* 122024: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 122028: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 12202c: nop  */
  /* nop: no architectural effect here */
  /* 122030: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122034: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1187896));
  fn1_142560(c);
  /* 122038: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 12203c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 122040: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 122044: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1187912));
  fn1_a2030(c);
  /* 122048: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 12204c: str w8, [x25, #8] */
  arc_st32((ARC_X_R(c, 25) + INT64_C(8)), ARC_W_R(c, 8));
  /* 122050: nop  */
  /* nop: no architectural effect here */
  /* 122054: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122058: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1187932));
  fn1_142518(c);
  /* 12205c: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 122060: stlr x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 122064: nop  */
  /* nop: no architectural effect here */
  /* 122068: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 12206c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1187952));
  fn1_142560(c);
  /* 122070: nop  */
  /* nop: no architectural effect here */
  /* 122074: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 122078: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1187964));
  fn1_142578(c);
L_12207c:;
  /* 12207c: ldp x8, x10, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 122080: ldrsw x9, [x25, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 25) + INT64_C(8)))));
  /* 122084: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 122088: sub x9, x10, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 12208c: cmp x26, x9, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 3)));
  /* 122090: b.hs #0x124408 */
  if (ARC_COND(c, 2)) goto L_124408;
  /* 122094: ldr x23, [x8, x26, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 122098: cbz x23, #0x124408 */
  if ((ARC_X_R(c, 23)) == 0) goto L_124408;
  /* 12209c: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* 1220a0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1220a4: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1188008));
  fn1_db2e0(c);
  /* 1220a8: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1220ac: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 1220b0: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 1220b4: cmp x10, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 26));
  /* 1220b8: b.hi #0x1220e4 */
  if (ARC_COND(c, 8)) goto L_1220e4;
  /* 1220bc: add x9, x26, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 26) + UINT64_C(1)));
  /* 1220c0: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 1220c4: b.ls #0x1220d8 */
  if (ARC_COND(c, 9)) goto L_1220d8;
  /* 1220c8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1220cc: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1188048));
  fn1_1352bc(c);
  /* 1220d0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1220d4: b #0x1220e4 */
  goto L_1220e4;
L_1220d8:;
  /* 1220d8: b.hs #0x1220e4 */
  if (ARC_COND(c, 2)) goto L_1220e4;
  /* 1220dc: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 1220e0: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_1220e4:;
  /* 1220e4: ldr x24, [x8, x26, lsl #3] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 1220e8: cbz x24, #0x12210c */
  if ((ARC_X_R(c, 24)) == 0) goto L_12210c;
  /* 1220ec: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 1220f0: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 1220f4: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1188088));
  fn1_bd950(c);
  /* 1220f8: cbnz x0, #0x12210c */
  if ((ARC_X_R(c, 0)) != 0) goto L_12210c;
  /* 1220fc: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 122100: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 122104: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 122108: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1188108));
  arc_dispatch(c, ARC_X_R(c, 8));
L_12210c:;
  /* 12210c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 122110: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 122114: ldr x25, [x25, #0xc90] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(3216))));
  /* 122118: str x23, [x8, x26, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3)), ARC_X_R(c, 23));
  /* 12211c: ldar x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 122120: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 122124: b.eq #0x1221e0 */
  if (ARC_COND(c, 0)) goto L_1221e0;
  /* 122128: nop  */
  /* nop: no architectural effect here */
  /* 12212c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122130: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1188148));
  fn1_142518(c);
  /* 122134: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 122138: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 12213c: b.ne #0x122168 */
  if (ARC_COND(c, 1)) goto L_122168;
  /* 122140: nop  */
  /* nop: no architectural effect here */
  /* 122144: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 122148: nop  */
  /* nop: no architectural effect here */
  /* 12214c: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_122150:;
  /* 122150: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 122154: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 122158: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1188188));
  fn1_142530(c);
  /* 12215c: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 122160: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 122164: b.eq #0x122150 */
  if (ARC_COND(c, 0)) goto L_122150;
L_122168:;
  /* 122168: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 12216c: cbz x8, #0x122180 */
  if ((ARC_X_R(c, 8)) == 0) goto L_122180;
  /* 122170: nop  */
  /* nop: no architectural effect here */
  /* 122174: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122178: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1188220));
  fn1_142560(c);
  /* 12217c: b #0x1221e0 */
  goto L_1221e0;
L_122180:;
  /* 122180: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 122184: str x25, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 25));
  /* 122188: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 12218c: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 122190: nop  */
  /* nop: no architectural effect here */
  /* 122194: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122198: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1188252));
  fn1_142560(c);
  /* 12219c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1221a0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1221a4: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 1221a8: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1188268));
  fn1_a2030(c);
  /* 1221ac: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 1221b0: str w8, [x25, #8] */
  arc_st32((ARC_X_R(c, 25) + INT64_C(8)), ARC_W_R(c, 8));
  /* 1221b4: nop  */
  /* nop: no architectural effect here */
  /* 1221b8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1221bc: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1188288));
  fn1_142518(c);
  /* 1221c0: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 1221c4: stlr x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 1221c8: nop  */
  /* nop: no architectural effect here */
  /* 1221cc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1221d0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1188308));
  fn1_142560(c);
  /* 1221d4: nop  */
  /* nop: no architectural effect here */
  /* 1221d8: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 1221dc: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1188320));
  fn1_142578(c);
L_1221e0:;
  /* 1221e0: ldp x8, x10, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 1221e4: ldrsw x9, [x25, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 25) + INT64_C(8)))));
  /* 1221e8: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 1221ec: sub x9, x10, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 1221f0: cmp x26, x9, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 3)));
  /* 1221f4: b.hs #0x124408 */
  if (ARC_COND(c, 2)) goto L_124408;
  /* 1221f8: ldr x23, [x8, x26, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 1221fc: cbz x23, #0x124408 */
  if ((ARC_X_R(c, 23)) == 0) goto L_124408;
  /* 122200: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* 122204: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 122208: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1188364));
  fn1_db2e0(c);
  /* 12220c: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 122210: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 122214: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 122218: cmp x10, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 26));
  /* 12221c: b.hi #0x122248 */
  if (ARC_COND(c, 8)) goto L_122248;
  /* 122220: add x9, x26, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 26) + UINT64_C(1)));
  /* 122224: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 122228: b.ls #0x12223c */
  if (ARC_COND(c, 9)) goto L_12223c;
  /* 12222c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 122230: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1188404));
  fn1_1352bc(c);
  /* 122234: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 122238: b #0x122248 */
  goto L_122248;
L_12223c:;
  /* 12223c: b.hs #0x122248 */
  if (ARC_COND(c, 2)) goto L_122248;
  /* 122240: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 122244: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_122248:;
  /* 122248: ldr x24, [x8, x26, lsl #3] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 12224c: cbz x24, #0x122270 */
  if ((ARC_X_R(c, 24)) == 0) goto L_122270;
  /* 122250: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 122254: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 122258: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1188444));
  fn1_bd950(c);
  /* 12225c: cbnz x0, #0x122270 */
  if ((ARC_X_R(c, 0)) != 0) goto L_122270;
  /* 122260: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 122264: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 122268: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 12226c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1188464));
  arc_dispatch(c, ARC_X_R(c, 8));
L_122270:;
  /* 122270: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 122274: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 122278: ldr x25, [x25, #0xca0] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(3232))));
  /* 12227c: str x23, [x8, x26, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3)), ARC_X_R(c, 23));
  /* 122280: ldar x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 122284: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 122288: b.eq #0x122344 */
  if (ARC_COND(c, 0)) goto L_122344;
  /* 12228c: nop  */
  /* nop: no architectural effect here */
  /* 122290: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122294: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1188504));
  fn1_142518(c);
  /* 122298: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 12229c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1222a0: b.ne #0x1222cc */
  if (ARC_COND(c, 1)) goto L_1222cc;
  /* 1222a4: nop  */
  /* nop: no architectural effect here */
  /* 1222a8: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 1222ac: nop  */
  /* nop: no architectural effect here */
  /* 1222b0: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_1222b4:;
  /* 1222b4: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1222b8: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 1222bc: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1188544));
  fn1_142530(c);
  /* 1222c0: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 1222c4: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1222c8: b.eq #0x1222b4 */
  if (ARC_COND(c, 0)) goto L_1222b4;
L_1222cc:;
  /* 1222cc: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 1222d0: cbz x8, #0x1222e4 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1222e4;
  /* 1222d4: nop  */
  /* nop: no architectural effect here */
  /* 1222d8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1222dc: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1188576));
  fn1_142560(c);
  /* 1222e0: b #0x122344 */
  goto L_122344;
L_1222e4:;
  /* 1222e4: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 1222e8: str x25, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 25));
  /* 1222ec: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 1222f0: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 1222f4: nop  */
  /* nop: no architectural effect here */
  /* 1222f8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1222fc: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1188608));
  fn1_142560(c);
  /* 122300: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 122304: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 122308: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 12230c: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1188624));
  fn1_a2030(c);
  /* 122310: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 122314: str w8, [x25, #8] */
  arc_st32((ARC_X_R(c, 25) + INT64_C(8)), ARC_W_R(c, 8));
  /* 122318: nop  */
  /* nop: no architectural effect here */
  /* 12231c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122320: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1188644));
  fn1_142518(c);
  /* 122324: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 122328: stlr x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 12232c: nop  */
  /* nop: no architectural effect here */
  /* 122330: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122334: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1188664));
  fn1_142560(c);
  /* 122338: nop  */
  /* nop: no architectural effect here */
  /* 12233c: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 122340: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1188676));
  fn1_142578(c);
L_122344:;
  /* 122344: ldp x8, x10, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 122348: ldrsw x9, [x25, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 25) + INT64_C(8)))));
  /* 12234c: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 122350: sub x9, x10, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 122354: cmp x26, x9, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 3)));
  /* 122358: b.hs #0x124408 */
  if (ARC_COND(c, 2)) goto L_124408;
  /* 12235c: ldr x23, [x8, x26, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 122360: cbz x23, #0x124408 */
  if ((ARC_X_R(c, 23)) == 0) goto L_124408;
  /* 122364: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* 122368: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 12236c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1188720));
  fn1_db2e0(c);
  /* 122370: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 122374: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 122378: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 12237c: cmp x10, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 26));
  /* 122380: b.hi #0x1223ac */
  if (ARC_COND(c, 8)) goto L_1223ac;
  /* 122384: add x9, x26, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 26) + UINT64_C(1)));
  /* 122388: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 12238c: b.ls #0x1223a0 */
  if (ARC_COND(c, 9)) goto L_1223a0;
  /* 122390: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 122394: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1188760));
  fn1_1352bc(c);
  /* 122398: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 12239c: b #0x1223ac */
  goto L_1223ac;
L_1223a0:;
  /* 1223a0: b.hs #0x1223ac */
  if (ARC_COND(c, 2)) goto L_1223ac;
  /* 1223a4: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 1223a8: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_1223ac:;
  /* 1223ac: ldr x24, [x8, x26, lsl #3] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 1223b0: cbz x24, #0x1223d4 */
  if ((ARC_X_R(c, 24)) == 0) goto L_1223d4;
  /* 1223b4: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 1223b8: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 1223bc: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1188800));
  fn1_bd950(c);
  /* 1223c0: cbnz x0, #0x1223d4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_1223d4;
  /* 1223c4: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 1223c8: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 1223cc: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 1223d0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1188820));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1223d4:;
  /* 1223d4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1223d8: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1223dc: ldr x25, [x25, #0xc98] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(3224))));
  /* 1223e0: str x23, [x8, x26, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3)), ARC_X_R(c, 23));
  /* 1223e4: ldar x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 1223e8: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 1223ec: b.eq #0x1224a8 */
  if (ARC_COND(c, 0)) goto L_1224a8;
  /* 1223f0: nop  */
  /* nop: no architectural effect here */
  /* 1223f4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1223f8: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1188860));
  fn1_142518(c);
  /* 1223fc: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 122400: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 122404: b.ne #0x122430 */
  if (ARC_COND(c, 1)) goto L_122430;
  /* 122408: nop  */
  /* nop: no architectural effect here */
  /* 12240c: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 122410: nop  */
  /* nop: no architectural effect here */
  /* 122414: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_122418:;
  /* 122418: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 12241c: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 122420: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1188900));
  fn1_142530(c);
  /* 122424: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 122428: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 12242c: b.eq #0x122418 */
  if (ARC_COND(c, 0)) goto L_122418;
L_122430:;
  /* 122430: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 122434: cbz x8, #0x122448 */
  if ((ARC_X_R(c, 8)) == 0) goto L_122448;
  /* 122438: nop  */
  /* nop: no architectural effect here */
  /* 12243c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122440: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1188932));
  fn1_142560(c);
  /* 122444: b #0x1224a8 */
  goto L_1224a8;
L_122448:;
  /* 122448: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 12244c: str x25, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 25));
  /* 122450: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 122454: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 122458: nop  */
  /* nop: no architectural effect here */
  /* 12245c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122460: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1188964));
  fn1_142560(c);
  /* 122464: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 122468: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 12246c: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 122470: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1188980));
  fn1_a2030(c);
  /* 122474: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 122478: str w8, [x25, #8] */
  arc_st32((ARC_X_R(c, 25) + INT64_C(8)), ARC_W_R(c, 8));
  /* 12247c: nop  */
  /* nop: no architectural effect here */
  /* 122480: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122484: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1189000));
  fn1_142518(c);
  /* 122488: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 12248c: stlr x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 122490: nop  */
  /* nop: no architectural effect here */
  /* 122494: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122498: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1189020));
  fn1_142560(c);
  /* 12249c: nop  */
  /* nop: no architectural effect here */
  /* 1224a0: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 1224a4: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1189032));
  fn1_142578(c);
L_1224a8:;
  /* 1224a8: ldp x8, x10, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 1224ac: ldrsw x9, [x25, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 25) + INT64_C(8)))));
  /* 1224b0: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 1224b4: sub x9, x10, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 1224b8: cmp x26, x9, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 3)));
  /* 1224bc: b.hs #0x124408 */
  if (ARC_COND(c, 2)) goto L_124408;
  /* 1224c0: ldr x23, [x8, x26, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 1224c4: cbz x23, #0x124408 */
  if ((ARC_X_R(c, 23)) == 0) goto L_124408;
  /* 1224c8: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* 1224cc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1224d0: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1189076));
  fn1_db2e0(c);
  /* 1224d4: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1224d8: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 1224dc: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 1224e0: cmp x10, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 26));
  /* 1224e4: b.hi #0x122510 */
  if (ARC_COND(c, 8)) goto L_122510;
  /* 1224e8: add x9, x26, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 26) + UINT64_C(1)));
  /* 1224ec: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 1224f0: b.ls #0x122504 */
  if (ARC_COND(c, 9)) goto L_122504;
  /* 1224f4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1224f8: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1189116));
  fn1_1352bc(c);
  /* 1224fc: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 122500: b #0x122510 */
  goto L_122510;
L_122504:;
  /* 122504: b.hs #0x122510 */
  if (ARC_COND(c, 2)) goto L_122510;
  /* 122508: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 12250c: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_122510:;
  /* 122510: ldr x24, [x8, x26, lsl #3] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 122514: cbz x24, #0x122538 */
  if ((ARC_X_R(c, 24)) == 0) goto L_122538;
  /* 122518: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 12251c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 122520: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1189156));
  fn1_bd950(c);
  /* 122524: cbnz x0, #0x122538 */
  if ((ARC_X_R(c, 0)) != 0) goto L_122538;
  /* 122528: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 12252c: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 122530: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 122534: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1189176));
  arc_dispatch(c, ARC_X_R(c, 8));
L_122538:;
  /* 122538: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 12253c: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 122540: ldr x25, [x25, #0xca8] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(3240))));
  /* 122544: str x23, [x8, x26, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3)), ARC_X_R(c, 23));
  /* 122548: ldar x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 12254c: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 122550: b.eq #0x12260c */
  if (ARC_COND(c, 0)) goto L_12260c;
  /* 122554: nop  */
  /* nop: no architectural effect here */
  /* 122558: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 12255c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1189216));
  fn1_142518(c);
  /* 122560: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 122564: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 122568: b.ne #0x122594 */
  if (ARC_COND(c, 1)) goto L_122594;
  /* 12256c: nop  */
  /* nop: no architectural effect here */
  /* 122570: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 122574: nop  */
  /* nop: no architectural effect here */
  /* 122578: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_12257c:;
  /* 12257c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 122580: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 122584: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1189256));
  fn1_142530(c);
  /* 122588: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 12258c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 122590: b.eq #0x12257c */
  if (ARC_COND(c, 0)) goto L_12257c;
L_122594:;
  /* 122594: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 122598: cbz x8, #0x1225ac */
  if ((ARC_X_R(c, 8)) == 0) goto L_1225ac;
  /* 12259c: nop  */
  /* nop: no architectural effect here */
  /* 1225a0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1225a4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1189288));
  fn1_142560(c);
  /* 1225a8: b #0x12260c */
  goto L_12260c;
L_1225ac:;
  /* 1225ac: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 1225b0: str x25, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 25));
  /* 1225b4: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 1225b8: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 1225bc: nop  */
  /* nop: no architectural effect here */
  /* 1225c0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1225c4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1189320));
  fn1_142560(c);
  /* 1225c8: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1225cc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1225d0: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 1225d4: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1189336));
  fn1_a2030(c);
  /* 1225d8: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 1225dc: str w8, [x25, #8] */
  arc_st32((ARC_X_R(c, 25) + INT64_C(8)), ARC_W_R(c, 8));
  /* 1225e0: nop  */
  /* nop: no architectural effect here */
  /* 1225e4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1225e8: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1189356));
  fn1_142518(c);
  /* 1225ec: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 1225f0: stlr x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 1225f4: nop  */
  /* nop: no architectural effect here */
  /* 1225f8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1225fc: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1189376));
  fn1_142560(c);
  /* 122600: nop  */
  /* nop: no architectural effect here */
  /* 122604: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 122608: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1189388));
  fn1_142578(c);
L_12260c:;
  /* 12260c: ldp x8, x10, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 122610: ldrsw x9, [x25, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 25) + INT64_C(8)))));
  /* 122614: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 122618: sub x9, x10, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 12261c: cmp x26, x9, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 3)));
  /* 122620: b.hs #0x124408 */
  if (ARC_COND(c, 2)) goto L_124408;
  /* 122624: ldr x23, [x8, x26, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 122628: cbz x23, #0x124408 */
  if ((ARC_X_R(c, 23)) == 0) goto L_124408;
  /* 12262c: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* 122630: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 122634: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1189432));
  fn1_db2e0(c);
  /* 122638: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 12263c: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 122640: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 122644: cmp x10, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 26));
  /* 122648: b.hi #0x122674 */
  if (ARC_COND(c, 8)) goto L_122674;
  /* 12264c: add x9, x26, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 26) + UINT64_C(1)));
  /* 122650: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 122654: b.ls #0x122668 */
  if (ARC_COND(c, 9)) goto L_122668;
  /* 122658: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12265c: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1189472));
  fn1_1352bc(c);
  /* 122660: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 122664: b #0x122674 */
  goto L_122674;
L_122668:;
  /* 122668: b.hs #0x122674 */
  if (ARC_COND(c, 2)) goto L_122674;
  /* 12266c: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 122670: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_122674:;
  /* 122674: ldr x24, [x8, x26, lsl #3] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 122678: cbz x24, #0x12269c */
  if ((ARC_X_R(c, 24)) == 0) goto L_12269c;
  /* 12267c: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 122680: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 122684: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1189512));
  fn1_bd950(c);
  /* 122688: cbnz x0, #0x12269c */
  if ((ARC_X_R(c, 0)) != 0) goto L_12269c;
  /* 12268c: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 122690: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 122694: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 122698: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1189532));
  arc_dispatch(c, ARC_X_R(c, 8));
L_12269c:;
  /* 12269c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1226a0: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1226a4: ldr x25, [x25, #0xbc0] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(3008))));
  /* 1226a8: str x23, [x8, x26, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3)), ARC_X_R(c, 23));
  /* 1226ac: ldar x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 1226b0: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 1226b4: b.eq #0x122770 */
  if (ARC_COND(c, 0)) goto L_122770;
  /* 1226b8: nop  */
  /* nop: no architectural effect here */
  /* 1226bc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1226c0: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1189572));
  fn1_142518(c);
  /* 1226c4: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 1226c8: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1226cc: b.ne #0x1226f8 */
  if (ARC_COND(c, 1)) goto L_1226f8;
  /* 1226d0: nop  */
  /* nop: no architectural effect here */
  /* 1226d4: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 1226d8: nop  */
  /* nop: no architectural effect here */
  /* 1226dc: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_1226e0:;
  /* 1226e0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1226e4: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 1226e8: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1189612));
  fn1_142530(c);
  /* 1226ec: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 1226f0: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1226f4: b.eq #0x1226e0 */
  if (ARC_COND(c, 0)) goto L_1226e0;
L_1226f8:;
  /* 1226f8: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 1226fc: cbz x8, #0x122710 */
  if ((ARC_X_R(c, 8)) == 0) goto L_122710;
  /* 122700: nop  */
  /* nop: no architectural effect here */
  /* 122704: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122708: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1189644));
  fn1_142560(c);
  /* 12270c: b #0x122770 */
  goto L_122770;
L_122710:;
  /* 122710: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 122714: str x25, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 25));
  /* 122718: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 12271c: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 122720: nop  */
  /* nop: no architectural effect here */
  /* 122724: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122728: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1189676));
  fn1_142560(c);
  /* 12272c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 122730: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 122734: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 122738: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1189692));
  fn1_a2030(c);
  /* 12273c: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 122740: str w8, [x25, #8] */
  arc_st32((ARC_X_R(c, 25) + INT64_C(8)), ARC_W_R(c, 8));
  /* 122744: nop  */
  /* nop: no architectural effect here */
  /* 122748: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 12274c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1189712));
  fn1_142518(c);
  /* 122750: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 122754: stlr x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 122758: nop  */
  /* nop: no architectural effect here */
  /* 12275c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122760: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1189732));
  fn1_142560(c);
  /* 122764: nop  */
  /* nop: no architectural effect here */
  /* 122768: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 12276c: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1189744));
  fn1_142578(c);
L_122770:;
  /* 122770: ldp x8, x10, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 122774: ldrsw x9, [x25, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 25) + INT64_C(8)))));
  /* 122778: sub x25, x9, #1 */
  ARC_X_W(c, 25, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 12277c: sub x9, x10, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 122780: cmp x25, x9, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 3)));
  /* 122784: b.hs #0x124408 */
  if (ARC_COND(c, 2)) goto L_124408;
  /* 122788: ldr x23, [x8, x25, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 25)) << 3))));
  /* 12278c: cbz x23, #0x124408 */
  if ((ARC_X_R(c, 23)) == 0) goto L_124408;
  /* 122790: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* 122794: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 122798: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1189788));
  fn1_db2e0(c);
  /* 12279c: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1227a0: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 1227a4: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 1227a8: cmp x10, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 25));
  /* 1227ac: b.hi #0x1227d8 */
  if (ARC_COND(c, 8)) goto L_1227d8;
  /* 1227b0: add x9, x25, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 25) + UINT64_C(1)));
  /* 1227b4: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 1227b8: b.ls #0x1227cc */
  if (ARC_COND(c, 9)) goto L_1227cc;
  /* 1227bc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1227c0: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1189828));
  fn1_1352bc(c);
  /* 1227c4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1227c8: b #0x1227d8 */
  goto L_1227d8;
L_1227cc:;
  /* 1227cc: b.hs #0x1227d8 */
  if (ARC_COND(c, 2)) goto L_1227d8;
  /* 1227d0: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 1227d4: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_1227d8:;
  /* 1227d8: ldr x24, [x8, x25, lsl #3] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 25)) << 3))));
  /* 1227dc: cbz x24, #0x122800 */
  if ((ARC_X_R(c, 24)) == 0) goto L_122800;
  /* 1227e0: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 1227e4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 1227e8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1189868));
  fn1_bd950(c);
  /* 1227ec: cbnz x0, #0x122800 */
  if ((ARC_X_R(c, 0)) != 0) goto L_122800;
  /* 1227f0: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 1227f4: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 1227f8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 1227fc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1189888));
  arc_dispatch(c, ARC_X_R(c, 8));
L_122800:;
  /* 122800: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 122804: str x23, [x8, x25, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 25)) << 3)), ARC_X_R(c, 23));
L_122808:;
  /* 122808: tbz w22, #4, #0x12332c */
  if (((ARC_W_R(c, 22)) >> 4 & 1) == 0) goto L_12332c;
  /* 12280c: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 122810: ldr x25, [x25, #0xc08] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(3080))));
  /* 122814: ldar x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 122818: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 12281c: b.eq #0x1228d8 */
  if (ARC_COND(c, 0)) goto L_1228d8;
  /* 122820: nop  */
  /* nop: no architectural effect here */
  /* 122824: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122828: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1189932));
  fn1_142518(c);
  /* 12282c: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 122830: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 122834: b.ne #0x122860 */
  if (ARC_COND(c, 1)) goto L_122860;
  /* 122838: nop  */
  /* nop: no architectural effect here */
  /* 12283c: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 122840: nop  */
  /* nop: no architectural effect here */
  /* 122844: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_122848:;
  /* 122848: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 12284c: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 122850: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1189972));
  fn1_142530(c);
  /* 122854: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 122858: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 12285c: b.eq #0x122848 */
  if (ARC_COND(c, 0)) goto L_122848;
L_122860:;
  /* 122860: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 122864: cbz x8, #0x122878 */
  if ((ARC_X_R(c, 8)) == 0) goto L_122878;
  /* 122868: nop  */
  /* nop: no architectural effect here */
  /* 12286c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122870: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1190004));
  fn1_142560(c);
  /* 122874: b #0x1228d8 */
  goto L_1228d8;
L_122878:;
  /* 122878: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 12287c: str x25, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 25));
  /* 122880: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 122884: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 122888: nop  */
  /* nop: no architectural effect here */
  /* 12288c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122890: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1190036));
  fn1_142560(c);
  /* 122894: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 122898: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 12289c: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 1228a0: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1190052));
  fn1_a2030(c);
  /* 1228a4: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 1228a8: str w8, [x25, #8] */
  arc_st32((ARC_X_R(c, 25) + INT64_C(8)), ARC_W_R(c, 8));
  /* 1228ac: nop  */
  /* nop: no architectural effect here */
  /* 1228b0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1228b4: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1190072));
  fn1_142518(c);
  /* 1228b8: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 1228bc: stlr x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 1228c0: nop  */
  /* nop: no architectural effect here */
  /* 1228c4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1228c8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1190092));
  fn1_142560(c);
  /* 1228cc: nop  */
  /* nop: no architectural effect here */
  /* 1228d0: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 1228d4: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1190104));
  fn1_142578(c);
L_1228d8:;
  /* 1228d8: ldp x8, x10, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 1228dc: ldrsw x9, [x25, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 25) + INT64_C(8)))));
  /* 1228e0: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 1228e4: sub x9, x10, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 1228e8: cmp x26, x9, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 3)));
  /* 1228ec: b.hs #0x124408 */
  if (ARC_COND(c, 2)) goto L_124408;
  /* 1228f0: ldr x23, [x8, x26, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 1228f4: cbz x23, #0x124408 */
  if ((ARC_X_R(c, 23)) == 0) goto L_124408;
  /* 1228f8: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* 1228fc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 122900: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1190148));
  fn1_db2e0(c);
  /* 122904: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 122908: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 12290c: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 122910: cmp x10, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 26));
  /* 122914: b.hi #0x122940 */
  if (ARC_COND(c, 8)) goto L_122940;
  /* 122918: add x9, x26, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 26) + UINT64_C(1)));
  /* 12291c: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 122920: b.ls #0x122934 */
  if (ARC_COND(c, 9)) goto L_122934;
  /* 122924: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 122928: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1190188));
  fn1_1352bc(c);
  /* 12292c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 122930: b #0x122940 */
  goto L_122940;
L_122934:;
  /* 122934: b.hs #0x122940 */
  if (ARC_COND(c, 2)) goto L_122940;
  /* 122938: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 12293c: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_122940:;
  /* 122940: ldr x24, [x8, x26, lsl #3] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 122944: cbz x24, #0x122968 */
  if ((ARC_X_R(c, 24)) == 0) goto L_122968;
  /* 122948: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 12294c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 122950: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1190228));
  fn1_bd950(c);
  /* 122954: cbnz x0, #0x122968 */
  if ((ARC_X_R(c, 0)) != 0) goto L_122968;
  /* 122958: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 12295c: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 122960: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 122964: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1190248));
  arc_dispatch(c, ARC_X_R(c, 8));
L_122968:;
  /* 122968: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 12296c: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 122970: ldr x25, [x25, #0xc10] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(3088))));
  /* 122974: str x23, [x8, x26, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3)), ARC_X_R(c, 23));
  /* 122978: ldar x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 12297c: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 122980: b.eq #0x122a3c */
  if (ARC_COND(c, 0)) goto L_122a3c;
  /* 122984: nop  */
  /* nop: no architectural effect here */
  /* 122988: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 12298c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1190288));
  fn1_142518(c);
  /* 122990: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 122994: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 122998: b.ne #0x1229c4 */
  if (ARC_COND(c, 1)) goto L_1229c4;
  /* 12299c: nop  */
  /* nop: no architectural effect here */
  /* 1229a0: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 1229a4: nop  */
  /* nop: no architectural effect here */
  /* 1229a8: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_1229ac:;
  /* 1229ac: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1229b0: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 1229b4: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1190328));
  fn1_142530(c);
  /* 1229b8: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 1229bc: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1229c0: b.eq #0x1229ac */
  if (ARC_COND(c, 0)) goto L_1229ac;
L_1229c4:;
  /* 1229c4: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 1229c8: cbz x8, #0x1229dc */
  if ((ARC_X_R(c, 8)) == 0) goto L_1229dc;
  /* 1229cc: nop  */
  /* nop: no architectural effect here */
  /* 1229d0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1229d4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1190360));
  fn1_142560(c);
  /* 1229d8: b #0x122a3c */
  goto L_122a3c;
L_1229dc:;
  /* 1229dc: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 1229e0: str x25, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 25));
  /* 1229e4: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 1229e8: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 1229ec: nop  */
  /* nop: no architectural effect here */
  /* 1229f0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1229f4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1190392));
  fn1_142560(c);
  /* 1229f8: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1229fc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 122a00: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 122a04: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1190408));
  fn1_a2030(c);
  /* 122a08: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 122a0c: str w8, [x25, #8] */
  arc_st32((ARC_X_R(c, 25) + INT64_C(8)), ARC_W_R(c, 8));
  /* 122a10: nop  */
  /* nop: no architectural effect here */
  /* 122a14: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122a18: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1190428));
  fn1_142518(c);
  /* 122a1c: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 122a20: stlr x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 122a24: nop  */
  /* nop: no architectural effect here */
  /* 122a28: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122a2c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1190448));
  fn1_142560(c);
  /* 122a30: nop  */
  /* nop: no architectural effect here */
  /* 122a34: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 122a38: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1190460));
  fn1_142578(c);
L_122a3c:;
  /* 122a3c: ldp x8, x10, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 122a40: ldrsw x9, [x25, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 25) + INT64_C(8)))));
  /* 122a44: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 122a48: sub x9, x10, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 122a4c: cmp x26, x9, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 3)));
  /* 122a50: b.hs #0x124408 */
  if (ARC_COND(c, 2)) goto L_124408;
  /* 122a54: ldr x23, [x8, x26, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 122a58: cbz x23, #0x124408 */
  if ((ARC_X_R(c, 23)) == 0) goto L_124408;
  /* 122a5c: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* 122a60: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 122a64: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1190504));
  fn1_db2e0(c);
  /* 122a68: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 122a6c: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 122a70: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 122a74: cmp x10, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 26));
  /* 122a78: b.hi #0x122aa4 */
  if (ARC_COND(c, 8)) goto L_122aa4;
  /* 122a7c: add x9, x26, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 26) + UINT64_C(1)));
  /* 122a80: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 122a84: b.ls #0x122a98 */
  if (ARC_COND(c, 9)) goto L_122a98;
  /* 122a88: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 122a8c: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1190544));
  fn1_1352bc(c);
  /* 122a90: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 122a94: b #0x122aa4 */
  goto L_122aa4;
L_122a98:;
  /* 122a98: b.hs #0x122aa4 */
  if (ARC_COND(c, 2)) goto L_122aa4;
  /* 122a9c: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 122aa0: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_122aa4:;
  /* 122aa4: ldr x24, [x8, x26, lsl #3] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 122aa8: cbz x24, #0x122acc */
  if ((ARC_X_R(c, 24)) == 0) goto L_122acc;
  /* 122aac: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 122ab0: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 122ab4: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1190584));
  fn1_bd950(c);
  /* 122ab8: cbnz x0, #0x122acc */
  if ((ARC_X_R(c, 0)) != 0) goto L_122acc;
  /* 122abc: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 122ac0: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 122ac4: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 122ac8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1190604));
  arc_dispatch(c, ARC_X_R(c, 8));
L_122acc:;
  /* 122acc: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 122ad0: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 122ad4: ldr x25, [x25, #0xc18] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(3096))));
  /* 122ad8: str x23, [x8, x26, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3)), ARC_X_R(c, 23));
  /* 122adc: ldar x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 122ae0: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 122ae4: b.eq #0x122ba0 */
  if (ARC_COND(c, 0)) goto L_122ba0;
  /* 122ae8: nop  */
  /* nop: no architectural effect here */
  /* 122aec: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122af0: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1190644));
  fn1_142518(c);
  /* 122af4: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 122af8: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 122afc: b.ne #0x122b28 */
  if (ARC_COND(c, 1)) goto L_122b28;
  /* 122b00: nop  */
  /* nop: no architectural effect here */
  /* 122b04: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 122b08: nop  */
  /* nop: no architectural effect here */
  /* 122b0c: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_122b10:;
  /* 122b10: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 122b14: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 122b18: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1190684));
  fn1_142530(c);
  /* 122b1c: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 122b20: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 122b24: b.eq #0x122b10 */
  if (ARC_COND(c, 0)) goto L_122b10;
L_122b28:;
  /* 122b28: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 122b2c: cbz x8, #0x122b40 */
  if ((ARC_X_R(c, 8)) == 0) goto L_122b40;
  /* 122b30: nop  */
  /* nop: no architectural effect here */
  /* 122b34: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122b38: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1190716));
  fn1_142560(c);
  /* 122b3c: b #0x122ba0 */
  goto L_122ba0;
L_122b40:;
  /* 122b40: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 122b44: str x25, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 25));
  /* 122b48: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 122b4c: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 122b50: nop  */
  /* nop: no architectural effect here */
  /* 122b54: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122b58: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1190748));
  fn1_142560(c);
  /* 122b5c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 122b60: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 122b64: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 122b68: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1190764));
  fn1_a2030(c);
  /* 122b6c: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 122b70: str w8, [x25, #8] */
  arc_st32((ARC_X_R(c, 25) + INT64_C(8)), ARC_W_R(c, 8));
  /* 122b74: nop  */
  /* nop: no architectural effect here */
  /* 122b78: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122b7c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1190784));
  fn1_142518(c);
  /* 122b80: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 122b84: stlr x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 122b88: nop  */
  /* nop: no architectural effect here */
  /* 122b8c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122b90: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1190804));
  fn1_142560(c);
  /* 122b94: nop  */
  /* nop: no architectural effect here */
  /* 122b98: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 122b9c: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1190816));
  fn1_142578(c);
L_122ba0:;
  /* 122ba0: ldp x8, x10, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 122ba4: ldrsw x9, [x25, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 25) + INT64_C(8)))));
  /* 122ba8: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 122bac: sub x9, x10, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 122bb0: cmp x26, x9, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 3)));
  /* 122bb4: b.hs #0x124408 */
  if (ARC_COND(c, 2)) goto L_124408;
  /* 122bb8: ldr x23, [x8, x26, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 122bbc: cbz x23, #0x124408 */
  if ((ARC_X_R(c, 23)) == 0) goto L_124408;
  /* 122bc0: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* 122bc4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 122bc8: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1190860));
  fn1_db2e0(c);
  /* 122bcc: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 122bd0: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 122bd4: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 122bd8: cmp x10, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 26));
  /* 122bdc: b.hi #0x122c08 */
  if (ARC_COND(c, 8)) goto L_122c08;
  /* 122be0: add x9, x26, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 26) + UINT64_C(1)));
  /* 122be4: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 122be8: b.ls #0x122bfc */
  if (ARC_COND(c, 9)) goto L_122bfc;
  /* 122bec: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 122bf0: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1190900));
  fn1_1352bc(c);
  /* 122bf4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 122bf8: b #0x122c08 */
  goto L_122c08;
L_122bfc:;
  /* 122bfc: b.hs #0x122c08 */
  if (ARC_COND(c, 2)) goto L_122c08;
  /* 122c00: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 122c04: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_122c08:;
  /* 122c08: ldr x24, [x8, x26, lsl #3] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 122c0c: cbz x24, #0x122c30 */
  if ((ARC_X_R(c, 24)) == 0) goto L_122c30;
  /* 122c10: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 122c14: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 122c18: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1190940));
  fn1_bd950(c);
  /* 122c1c: cbnz x0, #0x122c30 */
  if ((ARC_X_R(c, 0)) != 0) goto L_122c30;
  /* 122c20: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 122c24: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 122c28: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 122c2c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1190960));
  arc_dispatch(c, ARC_X_R(c, 8));
L_122c30:;
  /* 122c30: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 122c34: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 122c38: ldr x25, [x25, #0xc20] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(3104))));
  /* 122c3c: str x23, [x8, x26, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3)), ARC_X_R(c, 23));
  /* 122c40: ldar x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 122c44: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 122c48: b.eq #0x122d04 */
  if (ARC_COND(c, 0)) goto L_122d04;
  /* 122c4c: nop  */
  /* nop: no architectural effect here */
  /* 122c50: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122c54: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1191000));
  fn1_142518(c);
  /* 122c58: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 122c5c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 122c60: b.ne #0x122c8c */
  if (ARC_COND(c, 1)) goto L_122c8c;
  /* 122c64: nop  */
  /* nop: no architectural effect here */
  /* 122c68: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 122c6c: nop  */
  /* nop: no architectural effect here */
  /* 122c70: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_122c74:;
  /* 122c74: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 122c78: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 122c7c: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1191040));
  fn1_142530(c);
  /* 122c80: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 122c84: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 122c88: b.eq #0x122c74 */
  if (ARC_COND(c, 0)) goto L_122c74;
L_122c8c:;
  /* 122c8c: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 122c90: cbz x8, #0x122ca4 */
  if ((ARC_X_R(c, 8)) == 0) goto L_122ca4;
  /* 122c94: nop  */
  /* nop: no architectural effect here */
  /* 122c98: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122c9c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1191072));
  fn1_142560(c);
  /* 122ca0: b #0x122d04 */
  goto L_122d04;
L_122ca4:;
  /* 122ca4: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 122ca8: str x25, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 25));
  /* 122cac: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 122cb0: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 122cb4: nop  */
  /* nop: no architectural effect here */
  /* 122cb8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122cbc: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1191104));
  fn1_142560(c);
  /* 122cc0: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 122cc4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 122cc8: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 122ccc: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1191120));
  fn1_a2030(c);
  /* 122cd0: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 122cd4: str w8, [x25, #8] */
  arc_st32((ARC_X_R(c, 25) + INT64_C(8)), ARC_W_R(c, 8));
  /* 122cd8: nop  */
  /* nop: no architectural effect here */
  /* 122cdc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122ce0: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1191140));
  fn1_142518(c);
  /* 122ce4: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 122ce8: stlr x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 122cec: nop  */
  /* nop: no architectural effect here */
  /* 122cf0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122cf4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1191160));
  fn1_142560(c);
  /* 122cf8: nop  */
  /* nop: no architectural effect here */
  /* 122cfc: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 122d00: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1191172));
  fn1_142578(c);
L_122d04:;
  /* 122d04: ldp x8, x10, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 122d08: ldrsw x9, [x25, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 25) + INT64_C(8)))));
  /* 122d0c: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 122d10: sub x9, x10, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 122d14: cmp x26, x9, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 3)));
  /* 122d18: b.hs #0x124408 */
  if (ARC_COND(c, 2)) goto L_124408;
  /* 122d1c: ldr x23, [x8, x26, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 122d20: cbz x23, #0x124408 */
  if ((ARC_X_R(c, 23)) == 0) goto L_124408;
  /* 122d24: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* 122d28: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 122d2c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1191216));
  fn1_db2e0(c);
  /* 122d30: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 122d34: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 122d38: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 122d3c: cmp x10, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 26));
  /* 122d40: b.hi #0x122d6c */
  if (ARC_COND(c, 8)) goto L_122d6c;
  /* 122d44: add x9, x26, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 26) + UINT64_C(1)));
  /* 122d48: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 122d4c: b.ls #0x122d60 */
  if (ARC_COND(c, 9)) goto L_122d60;
  /* 122d50: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 122d54: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1191256));
  fn1_1352bc(c);
  /* 122d58: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 122d5c: b #0x122d6c */
  goto L_122d6c;
L_122d60:;
  /* 122d60: b.hs #0x122d6c */
  if (ARC_COND(c, 2)) goto L_122d6c;
  /* 122d64: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 122d68: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_122d6c:;
  /* 122d6c: ldr x24, [x8, x26, lsl #3] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 122d70: cbz x24, #0x122d94 */
  if ((ARC_X_R(c, 24)) == 0) goto L_122d94;
  /* 122d74: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 122d78: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 122d7c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1191296));
  fn1_bd950(c);
  /* 122d80: cbnz x0, #0x122d94 */
  if ((ARC_X_R(c, 0)) != 0) goto L_122d94;
  /* 122d84: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 122d88: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 122d8c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 122d90: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1191316));
  arc_dispatch(c, ARC_X_R(c, 8));
L_122d94:;
  /* 122d94: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 122d98: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 122d9c: ldr x25, [x25, #0xc28] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(3112))));
  /* 122da0: str x23, [x8, x26, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3)), ARC_X_R(c, 23));
  /* 122da4: ldar x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 122da8: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 122dac: b.eq #0x122e68 */
  if (ARC_COND(c, 0)) goto L_122e68;
  /* 122db0: nop  */
  /* nop: no architectural effect here */
  /* 122db4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122db8: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1191356));
  fn1_142518(c);
  /* 122dbc: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 122dc0: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 122dc4: b.ne #0x122df0 */
  if (ARC_COND(c, 1)) goto L_122df0;
  /* 122dc8: nop  */
  /* nop: no architectural effect here */
  /* 122dcc: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 122dd0: nop  */
  /* nop: no architectural effect here */
  /* 122dd4: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_122dd8:;
  /* 122dd8: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 122ddc: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 122de0: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1191396));
  fn1_142530(c);
  /* 122de4: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 122de8: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 122dec: b.eq #0x122dd8 */
  if (ARC_COND(c, 0)) goto L_122dd8;
L_122df0:;
  /* 122df0: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 122df4: cbz x8, #0x122e08 */
  if ((ARC_X_R(c, 8)) == 0) goto L_122e08;
  /* 122df8: nop  */
  /* nop: no architectural effect here */
  /* 122dfc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122e00: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1191428));
  fn1_142560(c);
  /* 122e04: b #0x122e68 */
  goto L_122e68;
L_122e08:;
  /* 122e08: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 122e0c: str x25, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 25));
  /* 122e10: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 122e14: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 122e18: nop  */
  /* nop: no architectural effect here */
  /* 122e1c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122e20: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1191460));
  fn1_142560(c);
  /* 122e24: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 122e28: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 122e2c: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 122e30: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1191476));
  fn1_a2030(c);
  /* 122e34: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 122e38: str w8, [x25, #8] */
  arc_st32((ARC_X_R(c, 25) + INT64_C(8)), ARC_W_R(c, 8));
  /* 122e3c: nop  */
  /* nop: no architectural effect here */
  /* 122e40: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122e44: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1191496));
  fn1_142518(c);
  /* 122e48: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 122e4c: stlr x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 122e50: nop  */
  /* nop: no architectural effect here */
  /* 122e54: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122e58: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1191516));
  fn1_142560(c);
  /* 122e5c: nop  */
  /* nop: no architectural effect here */
  /* 122e60: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 122e64: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1191528));
  fn1_142578(c);
L_122e68:;
  /* 122e68: ldp x8, x10, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 122e6c: ldrsw x9, [x25, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 25) + INT64_C(8)))));
  /* 122e70: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 122e74: sub x9, x10, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 122e78: cmp x26, x9, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 3)));
  /* 122e7c: b.hs #0x124408 */
  if (ARC_COND(c, 2)) goto L_124408;
  /* 122e80: ldr x23, [x8, x26, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 122e84: cbz x23, #0x124408 */
  if ((ARC_X_R(c, 23)) == 0) goto L_124408;
  /* 122e88: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* 122e8c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 122e90: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1191572));
  fn1_db2e0(c);
  /* 122e94: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 122e98: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 122e9c: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 122ea0: cmp x10, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 26));
  /* 122ea4: b.hi #0x122ed0 */
  if (ARC_COND(c, 8)) goto L_122ed0;
  /* 122ea8: add x9, x26, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 26) + UINT64_C(1)));
  /* 122eac: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 122eb0: b.ls #0x122ec4 */
  if (ARC_COND(c, 9)) goto L_122ec4;
  /* 122eb4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 122eb8: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1191612));
  fn1_1352bc(c);
  /* 122ebc: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 122ec0: b #0x122ed0 */
  goto L_122ed0;
L_122ec4:;
  /* 122ec4: b.hs #0x122ed0 */
  if (ARC_COND(c, 2)) goto L_122ed0;
  /* 122ec8: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 122ecc: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_122ed0:;
  /* 122ed0: ldr x24, [x8, x26, lsl #3] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 122ed4: cbz x24, #0x122ef8 */
  if ((ARC_X_R(c, 24)) == 0) goto L_122ef8;
  /* 122ed8: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 122edc: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 122ee0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1191652));
  fn1_bd950(c);
  /* 122ee4: cbnz x0, #0x122ef8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_122ef8;
  /* 122ee8: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 122eec: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 122ef0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 122ef4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1191672));
  arc_dispatch(c, ARC_X_R(c, 8));
L_122ef8:;
  /* 122ef8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 122efc: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 122f00: ldr x25, [x25, #0xc30] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(3120))));
  /* 122f04: str x23, [x8, x26, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3)), ARC_X_R(c, 23));
  /* 122f08: ldar x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 122f0c: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 122f10: b.eq #0x122fcc */
  if (ARC_COND(c, 0)) goto L_122fcc;
  /* 122f14: nop  */
  /* nop: no architectural effect here */
  /* 122f18: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122f1c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1191712));
  fn1_142518(c);
  /* 122f20: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 122f24: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 122f28: b.ne #0x122f54 */
  if (ARC_COND(c, 1)) goto L_122f54;
  /* 122f2c: nop  */
  /* nop: no architectural effect here */
  /* 122f30: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 122f34: nop  */
  /* nop: no architectural effect here */
  /* 122f38: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_122f3c:;
  /* 122f3c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 122f40: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 122f44: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1191752));
  fn1_142530(c);
  /* 122f48: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 122f4c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 122f50: b.eq #0x122f3c */
  if (ARC_COND(c, 0)) goto L_122f3c;
L_122f54:;
  /* 122f54: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 122f58: cbz x8, #0x122f6c */
  if ((ARC_X_R(c, 8)) == 0) goto L_122f6c;
  /* 122f5c: nop  */
  /* nop: no architectural effect here */
  /* 122f60: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122f64: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1191784));
  fn1_142560(c);
  /* 122f68: b #0x122fcc */
  goto L_122fcc;
L_122f6c:;
  /* 122f6c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 122f70: str x25, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 25));
  /* 122f74: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 122f78: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 122f7c: nop  */
  /* nop: no architectural effect here */
  /* 122f80: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122f84: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1191816));
  fn1_142560(c);
  /* 122f88: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 122f8c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 122f90: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 122f94: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1191832));
  fn1_a2030(c);
  /* 122f98: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 122f9c: str w8, [x25, #8] */
  arc_st32((ARC_X_R(c, 25) + INT64_C(8)), ARC_W_R(c, 8));
  /* 122fa0: nop  */
  /* nop: no architectural effect here */
  /* 122fa4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122fa8: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1191852));
  fn1_142518(c);
  /* 122fac: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 122fb0: stlr x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 122fb4: nop  */
  /* nop: no architectural effect here */
  /* 122fb8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 122fbc: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1191872));
  fn1_142560(c);
  /* 122fc0: nop  */
  /* nop: no architectural effect here */
  /* 122fc4: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 122fc8: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1191884));
  fn1_142578(c);
L_122fcc:;
  /* 122fcc: ldp x8, x10, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 122fd0: ldrsw x9, [x25, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 25) + INT64_C(8)))));
  /* 122fd4: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 122fd8: sub x9, x10, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 122fdc: cmp x26, x9, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 3)));
  /* 122fe0: b.hs #0x124408 */
  if (ARC_COND(c, 2)) goto L_124408;
  /* 122fe4: ldr x23, [x8, x26, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 122fe8: cbz x23, #0x124408 */
  if ((ARC_X_R(c, 23)) == 0) goto L_124408;
  /* 122fec: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* 122ff0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 122ff4: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1191928));
  fn1_db2e0(c);
  /* 122ff8: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 122ffc: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 123000: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 123004: cmp x10, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 26));
  /* 123008: b.hi #0x123034 */
  if (ARC_COND(c, 8)) goto L_123034;
  /* 12300c: add x9, x26, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 26) + UINT64_C(1)));
  /* 123010: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 123014: b.ls #0x123028 */
  if (ARC_COND(c, 9)) goto L_123028;
  /* 123018: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12301c: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1191968));
  fn1_1352bc(c);
  /* 123020: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 123024: b #0x123034 */
  goto L_123034;
L_123028:;
  /* 123028: b.hs #0x123034 */
  if (ARC_COND(c, 2)) goto L_123034;
  /* 12302c: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 123030: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_123034:;
  /* 123034: ldr x24, [x8, x26, lsl #3] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 123038: cbz x24, #0x12305c */
  if ((ARC_X_R(c, 24)) == 0) goto L_12305c;
  /* 12303c: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 123040: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 123044: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1192008));
  fn1_bd950(c);
  /* 123048: cbnz x0, #0x12305c */
  if ((ARC_X_R(c, 0)) != 0) goto L_12305c;
  /* 12304c: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 123050: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 123054: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 123058: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1192028));
  arc_dispatch(c, ARC_X_R(c, 8));
L_12305c:;
  /* 12305c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 123060: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 123064: ldr x25, [x25, #0xc38] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(3128))));
  /* 123068: str x23, [x8, x26, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3)), ARC_X_R(c, 23));
  /* 12306c: ldar x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 123070: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 123074: b.eq #0x123130 */
  if (ARC_COND(c, 0)) goto L_123130;
  /* 123078: nop  */
  /* nop: no architectural effect here */
  /* 12307c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 123080: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1192068));
  fn1_142518(c);
  /* 123084: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 123088: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 12308c: b.ne #0x1230b8 */
  if (ARC_COND(c, 1)) goto L_1230b8;
  /* 123090: nop  */
  /* nop: no architectural effect here */
  /* 123094: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 123098: nop  */
  /* nop: no architectural effect here */
  /* 12309c: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_1230a0:;
  /* 1230a0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1230a4: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 1230a8: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1192108));
  fn1_142530(c);
  /* 1230ac: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 1230b0: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1230b4: b.eq #0x1230a0 */
  if (ARC_COND(c, 0)) goto L_1230a0;
L_1230b8:;
  /* 1230b8: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 1230bc: cbz x8, #0x1230d0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1230d0;
  /* 1230c0: nop  */
  /* nop: no architectural effect here */
  /* 1230c4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1230c8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1192140));
  fn1_142560(c);
  /* 1230cc: b #0x123130 */
  goto L_123130;
L_1230d0:;
  /* 1230d0: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 1230d4: str x25, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 25));
  /* 1230d8: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 1230dc: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 1230e0: nop  */
  /* nop: no architectural effect here */
  /* 1230e4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1230e8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1192172));
  fn1_142560(c);
  /* 1230ec: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1230f0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1230f4: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 1230f8: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1192188));
  fn1_a2030(c);
  /* 1230fc: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 123100: str w8, [x25, #8] */
  arc_st32((ARC_X_R(c, 25) + INT64_C(8)), ARC_W_R(c, 8));
  /* 123104: nop  */
  /* nop: no architectural effect here */
  /* 123108: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 12310c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1192208));
  fn1_142518(c);
  /* 123110: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 123114: stlr x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 123118: nop  */
  /* nop: no architectural effect here */
  /* 12311c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 123120: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1192228));
  fn1_142560(c);
  /* 123124: nop  */
  /* nop: no architectural effect here */
  /* 123128: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 12312c: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1192240));
  fn1_142578(c);
L_123130:;
  /* 123130: ldp x8, x10, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 123134: ldrsw x9, [x25, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 25) + INT64_C(8)))));
  /* 123138: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 12313c: sub x9, x10, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 123140: cmp x26, x9, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 3)));
  /* 123144: b.hs #0x124408 */
  if (ARC_COND(c, 2)) goto L_124408;
  /* 123148: ldr x23, [x8, x26, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 12314c: cbz x23, #0x124408 */
  if ((ARC_X_R(c, 23)) == 0) goto L_124408;
  /* 123150: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* 123154: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 123158: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1192284));
  fn1_db2e0(c);
  /* 12315c: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 123160: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 123164: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 123168: cmp x10, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 26));
  /* 12316c: b.hi #0x123198 */
  if (ARC_COND(c, 8)) goto L_123198;
  /* 123170: add x9, x26, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 26) + UINT64_C(1)));
  /* 123174: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 123178: b.ls #0x12318c */
  if (ARC_COND(c, 9)) goto L_12318c;
  /* 12317c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 123180: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1192324));
  fn1_1352bc(c);
  /* 123184: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 123188: b #0x123198 */
  goto L_123198;
L_12318c:;
  /* 12318c: b.hs #0x123198 */
  if (ARC_COND(c, 2)) goto L_123198;
  /* 123190: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 123194: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_123198:;
  /* 123198: ldr x24, [x8, x26, lsl #3] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 12319c: cbz x24, #0x1231c0 */
  if ((ARC_X_R(c, 24)) == 0) goto L_1231c0;
  /* 1231a0: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 1231a4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 1231a8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1192364));
  fn1_bd950(c);
  /* 1231ac: cbnz x0, #0x1231c0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_1231c0;
  /* 1231b0: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 1231b4: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 1231b8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 1231bc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1192384));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1231c0:;
  /* 1231c0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1231c4: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1231c8: ldr x25, [x25, #0xc40] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(3136))));
  /* 1231cc: str x23, [x8, x26, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3)), ARC_X_R(c, 23));
  /* 1231d0: ldar x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 1231d4: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 1231d8: b.eq #0x123294 */
  if (ARC_COND(c, 0)) goto L_123294;
  /* 1231dc: nop  */
  /* nop: no architectural effect here */
  /* 1231e0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1231e4: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1192424));
  fn1_142518(c);
  /* 1231e8: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 1231ec: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1231f0: b.ne #0x12321c */
  if (ARC_COND(c, 1)) goto L_12321c;
  /* 1231f4: nop  */
  /* nop: no architectural effect here */
  /* 1231f8: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 1231fc: nop  */
  /* nop: no architectural effect here */
  /* 123200: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_123204:;
  /* 123204: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 123208: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 12320c: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1192464));
  fn1_142530(c);
  /* 123210: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 123214: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 123218: b.eq #0x123204 */
  if (ARC_COND(c, 0)) goto L_123204;
L_12321c:;
  /* 12321c: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 123220: cbz x8, #0x123234 */
  if ((ARC_X_R(c, 8)) == 0) goto L_123234;
  /* 123224: nop  */
  /* nop: no architectural effect here */
  /* 123228: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 12322c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1192496));
  fn1_142560(c);
  /* 123230: b #0x123294 */
  goto L_123294;
L_123234:;
  /* 123234: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 123238: str x25, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 25));
  /* 12323c: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 123240: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 123244: nop  */
  /* nop: no architectural effect here */
  /* 123248: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 12324c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1192528));
  fn1_142560(c);
  /* 123250: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 123254: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 123258: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 12325c: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1192544));
  fn1_a2030(c);
  /* 123260: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 123264: str w8, [x25, #8] */
  arc_st32((ARC_X_R(c, 25) + INT64_C(8)), ARC_W_R(c, 8));
  /* 123268: nop  */
  /* nop: no architectural effect here */
  /* 12326c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 123270: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1192564));
  fn1_142518(c);
  /* 123274: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 123278: stlr x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 12327c: nop  */
  /* nop: no architectural effect here */
  /* 123280: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 123284: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1192584));
  fn1_142560(c);
  /* 123288: nop  */
  /* nop: no architectural effect here */
  /* 12328c: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 123290: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1192596));
  fn1_142578(c);
L_123294:;
  /* 123294: ldp x8, x10, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 123298: ldrsw x9, [x25, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 25) + INT64_C(8)))));
  /* 12329c: sub x25, x9, #1 */
  ARC_X_W(c, 25, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 1232a0: sub x9, x10, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 1232a4: cmp x25, x9, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 3)));
  /* 1232a8: b.hs #0x124408 */
  if (ARC_COND(c, 2)) goto L_124408;
  /* 1232ac: ldr x23, [x8, x25, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 25)) << 3))));
  /* 1232b0: cbz x23, #0x124408 */
  if ((ARC_X_R(c, 23)) == 0) goto L_124408;
  /* 1232b4: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* 1232b8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1232bc: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1192640));
  fn1_db2e0(c);
  /* 1232c0: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1232c4: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 1232c8: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 1232cc: cmp x10, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 25));
  /* 1232d0: b.hi #0x1232fc */
  if (ARC_COND(c, 8)) goto L_1232fc;
  /* 1232d4: add x9, x25, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 25) + UINT64_C(1)));
  /* 1232d8: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 1232dc: b.ls #0x1232f0 */
  if (ARC_COND(c, 9)) goto L_1232f0;
  /* 1232e0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1232e4: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1192680));
  fn1_1352bc(c);
  /* 1232e8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1232ec: b #0x1232fc */
  goto L_1232fc;
L_1232f0:;
  /* 1232f0: b.hs #0x1232fc */
  if (ARC_COND(c, 2)) goto L_1232fc;
  /* 1232f4: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 1232f8: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_1232fc:;
  /* 1232fc: ldr x24, [x8, x25, lsl #3] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 25)) << 3))));
  /* 123300: cbz x24, #0x123324 */
  if ((ARC_X_R(c, 24)) == 0) goto L_123324;
  /* 123304: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 123308: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 12330c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1192720));
  fn1_bd950(c);
  /* 123310: cbnz x0, #0x123324 */
  if ((ARC_X_R(c, 0)) != 0) goto L_123324;
  /* 123314: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 123318: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 12331c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 123320: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1192740));
  arc_dispatch(c, ARC_X_R(c, 8));
L_123324:;
  /* 123324: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 123328: str x23, [x8, x25, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 25)) << 3)), ARC_X_R(c, 23));
L_12332c:;
  /* 12332c: tbz w22, #1, #0x123b88 */
  if (((ARC_W_R(c, 22)) >> 1 & 1) == 0) goto L_123b88;
  /* 123330: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 123334: ldr x25, [x25, #0xcb0] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(3248))));
  /* 123338: ldar x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 12333c: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 123340: b.eq #0x1233fc */
  if (ARC_COND(c, 0)) goto L_1233fc;
  /* 123344: nop  */
  /* nop: no architectural effect here */
  /* 123348: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 12334c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1192784));
  fn1_142518(c);
  /* 123350: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 123354: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 123358: b.ne #0x123384 */
  if (ARC_COND(c, 1)) goto L_123384;
  /* 12335c: nop  */
  /* nop: no architectural effect here */
  /* 123360: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 123364: nop  */
  /* nop: no architectural effect here */
  /* 123368: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_12336c:;
  /* 12336c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 123370: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 123374: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1192824));
  fn1_142530(c);
  /* 123378: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 12337c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 123380: b.eq #0x12336c */
  if (ARC_COND(c, 0)) goto L_12336c;
L_123384:;
  /* 123384: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 123388: cbz x8, #0x12339c */
  if ((ARC_X_R(c, 8)) == 0) goto L_12339c;
  /* 12338c: nop  */
  /* nop: no architectural effect here */
  /* 123390: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 123394: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1192856));
  fn1_142560(c);
  /* 123398: b #0x1233fc */
  goto L_1233fc;
L_12339c:;
  /* 12339c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 1233a0: str x25, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 25));
  /* 1233a4: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 1233a8: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 1233ac: nop  */
  /* nop: no architectural effect here */
  /* 1233b0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1233b4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1192888));
  fn1_142560(c);
  /* 1233b8: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1233bc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1233c0: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 1233c4: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1192904));
  fn1_a2030(c);
  /* 1233c8: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 1233cc: str w8, [x25, #8] */
  arc_st32((ARC_X_R(c, 25) + INT64_C(8)), ARC_W_R(c, 8));
  /* 1233d0: nop  */
  /* nop: no architectural effect here */
  /* 1233d4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1233d8: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1192924));
  fn1_142518(c);
  /* 1233dc: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 1233e0: stlr x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 1233e4: nop  */
  /* nop: no architectural effect here */
  /* 1233e8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1233ec: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1192944));
  fn1_142560(c);
  /* 1233f0: nop  */
  /* nop: no architectural effect here */
  /* 1233f4: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 1233f8: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1192956));
  fn1_142578(c);
L_1233fc:;
  /* 1233fc: ldp x8, x10, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 123400: ldrsw x9, [x25, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 25) + INT64_C(8)))));
  /* 123404: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 123408: sub x9, x10, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 12340c: cmp x26, x9, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 3)));
  /* 123410: b.hs #0x124408 */
  if (ARC_COND(c, 2)) goto L_124408;
  /* 123414: ldr x23, [x8, x26, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 123418: cbz x23, #0x124408 */
  if ((ARC_X_R(c, 23)) == 0) goto L_124408;
  /* 12341c: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* 123420: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 123424: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1193000));
  fn1_db2e0(c);
  /* 123428: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 12342c: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 123430: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 123434: cmp x10, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 26));
  /* 123438: b.hi #0x123464 */
  if (ARC_COND(c, 8)) goto L_123464;
  /* 12343c: add x9, x26, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 26) + UINT64_C(1)));
  /* 123440: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 123444: b.ls #0x123458 */
  if (ARC_COND(c, 9)) goto L_123458;
  /* 123448: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12344c: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1193040));
  fn1_1352bc(c);
  /* 123450: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 123454: b #0x123464 */
  goto L_123464;
L_123458:;
  /* 123458: b.hs #0x123464 */
  if (ARC_COND(c, 2)) goto L_123464;
  /* 12345c: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 123460: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_123464:;
  /* 123464: ldr x24, [x8, x26, lsl #3] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 123468: cbz x24, #0x12348c */
  if ((ARC_X_R(c, 24)) == 0) goto L_12348c;
  /* 12346c: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 123470: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 123474: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1193080));
  fn1_bd950(c);
  /* 123478: cbnz x0, #0x12348c */
  if ((ARC_X_R(c, 0)) != 0) goto L_12348c;
  /* 12347c: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 123480: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 123484: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 123488: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1193100));
  arc_dispatch(c, ARC_X_R(c, 8));
L_12348c:;
  /* 12348c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 123490: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 123494: ldr x25, [x25, #0xcb8] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(3256))));
  /* 123498: str x23, [x8, x26, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3)), ARC_X_R(c, 23));
  /* 12349c: ldar x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 1234a0: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 1234a4: b.eq #0x123560 */
  if (ARC_COND(c, 0)) goto L_123560;
  /* 1234a8: nop  */
  /* nop: no architectural effect here */
  /* 1234ac: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1234b0: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1193140));
  fn1_142518(c);
  /* 1234b4: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 1234b8: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1234bc: b.ne #0x1234e8 */
  if (ARC_COND(c, 1)) goto L_1234e8;
  /* 1234c0: nop  */
  /* nop: no architectural effect here */
  /* 1234c4: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 1234c8: nop  */
  /* nop: no architectural effect here */
  /* 1234cc: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_1234d0:;
  /* 1234d0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1234d4: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 1234d8: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1193180));
  fn1_142530(c);
  /* 1234dc: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 1234e0: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1234e4: b.eq #0x1234d0 */
  if (ARC_COND(c, 0)) goto L_1234d0;
L_1234e8:;
  /* 1234e8: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 1234ec: cbz x8, #0x123500 */
  if ((ARC_X_R(c, 8)) == 0) goto L_123500;
  /* 1234f0: nop  */
  /* nop: no architectural effect here */
  /* 1234f4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1234f8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1193212));
  fn1_142560(c);
  /* 1234fc: b #0x123560 */
  goto L_123560;
L_123500:;
  /* 123500: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 123504: str x25, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 25));
  /* 123508: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 12350c: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 123510: nop  */
  /* nop: no architectural effect here */
  /* 123514: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 123518: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1193244));
  fn1_142560(c);
  /* 12351c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 123520: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 123524: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 123528: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1193260));
  fn1_a2030(c);
  /* 12352c: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 123530: str w8, [x25, #8] */
  arc_st32((ARC_X_R(c, 25) + INT64_C(8)), ARC_W_R(c, 8));
  /* 123534: nop  */
  /* nop: no architectural effect here */
  /* 123538: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 12353c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1193280));
  fn1_142518(c);
  /* 123540: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 123544: stlr x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 123548: nop  */
  /* nop: no architectural effect here */
  /* 12354c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 123550: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1193300));
  fn1_142560(c);
  /* 123554: nop  */
  /* nop: no architectural effect here */
  /* 123558: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 12355c: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1193312));
  fn1_142578(c);
L_123560:;
  /* 123560: ldp x8, x10, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 123564: ldrsw x9, [x25, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 25) + INT64_C(8)))));
  /* 123568: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 12356c: sub x9, x10, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 123570: cmp x26, x9, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 3)));
  /* 123574: b.hs #0x124408 */
  if (ARC_COND(c, 2)) goto L_124408;
  /* 123578: ldr x23, [x8, x26, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 12357c: cbz x23, #0x124408 */
  if ((ARC_X_R(c, 23)) == 0) goto L_124408;
  /* 123580: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* 123584: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 123588: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1193356));
  fn1_db2e0(c);
  /* 12358c: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 123590: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 123594: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 123598: cmp x10, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 26));
  /* 12359c: b.hi #0x1235c8 */
  if (ARC_COND(c, 8)) goto L_1235c8;
  /* 1235a0: add x9, x26, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 26) + UINT64_C(1)));
  /* 1235a4: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 1235a8: b.ls #0x1235bc */
  if (ARC_COND(c, 9)) goto L_1235bc;
  /* 1235ac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1235b0: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1193396));
  fn1_1352bc(c);
  /* 1235b4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1235b8: b #0x1235c8 */
  goto L_1235c8;
L_1235bc:;
  /* 1235bc: b.hs #0x1235c8 */
  if (ARC_COND(c, 2)) goto L_1235c8;
  /* 1235c0: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 1235c4: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_1235c8:;
  /* 1235c8: ldr x24, [x8, x26, lsl #3] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 1235cc: cbz x24, #0x1235f0 */
  if ((ARC_X_R(c, 24)) == 0) goto L_1235f0;
  /* 1235d0: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 1235d4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 1235d8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1193436));
  fn1_bd950(c);
  /* 1235dc: cbnz x0, #0x1235f0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_1235f0;
  /* 1235e0: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 1235e4: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 1235e8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 1235ec: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1193456));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1235f0:;
  /* 1235f0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1235f4: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1235f8: ldr x25, [x25, #0xb48] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(2888))));
  /* 1235fc: str x23, [x8, x26, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3)), ARC_X_R(c, 23));
  /* 123600: ldar x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 123604: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 123608: b.eq #0x1236c4 */
  if (ARC_COND(c, 0)) goto L_1236c4;
  /* 12360c: nop  */
  /* nop: no architectural effect here */
  /* 123610: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 123614: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1193496));
  fn1_142518(c);
  /* 123618: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 12361c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 123620: b.ne #0x12364c */
  if (ARC_COND(c, 1)) goto L_12364c;
  /* 123624: nop  */
  /* nop: no architectural effect here */
  /* 123628: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 12362c: nop  */
  /* nop: no architectural effect here */
  /* 123630: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_123634:;
  /* 123634: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 123638: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 12363c: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1193536));
  fn1_142530(c);
  /* 123640: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 123644: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 123648: b.eq #0x123634 */
  if (ARC_COND(c, 0)) goto L_123634;
L_12364c:;
  /* 12364c: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 123650: cbz x8, #0x123664 */
  if ((ARC_X_R(c, 8)) == 0) goto L_123664;
  /* 123654: nop  */
  /* nop: no architectural effect here */
  /* 123658: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 12365c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1193568));
  fn1_142560(c);
  /* 123660: b #0x1236c4 */
  goto L_1236c4;
L_123664:;
  /* 123664: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 123668: str x25, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 25));
  /* 12366c: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 123670: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 123674: nop  */
  /* nop: no architectural effect here */
  /* 123678: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 12367c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1193600));
  fn1_142560(c);
  /* 123680: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 123684: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 123688: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 12368c: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1193616));
  fn1_a2030(c);
  /* 123690: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 123694: str w8, [x25, #8] */
  arc_st32((ARC_X_R(c, 25) + INT64_C(8)), ARC_W_R(c, 8));
  /* 123698: nop  */
  /* nop: no architectural effect here */
  /* 12369c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1236a0: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1193636));
  fn1_142518(c);
  /* 1236a4: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 1236a8: stlr x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 1236ac: nop  */
  /* nop: no architectural effect here */
  /* 1236b0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1236b4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1193656));
  fn1_142560(c);
  /* 1236b8: nop  */
  /* nop: no architectural effect here */
  /* 1236bc: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 1236c0: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1193668));
  fn1_142578(c);
L_1236c4:;
  /* 1236c4: ldp x8, x10, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 1236c8: ldrsw x9, [x25, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 25) + INT64_C(8)))));
  /* 1236cc: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 1236d0: sub x9, x10, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 1236d4: cmp x26, x9, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 3)));
  /* 1236d8: b.hs #0x124408 */
  if (ARC_COND(c, 2)) goto L_124408;
  /* 1236dc: ldr x23, [x8, x26, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 1236e0: cbz x23, #0x124408 */
  if ((ARC_X_R(c, 23)) == 0) goto L_124408;
  /* 1236e4: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* 1236e8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1236ec: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1193712));
  fn1_db2e0(c);
  /* 1236f0: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1236f4: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 1236f8: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 1236fc: cmp x10, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 26));
  /* 123700: b.hi #0x12372c */
  if (ARC_COND(c, 8)) goto L_12372c;
  /* 123704: add x9, x26, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 26) + UINT64_C(1)));
  /* 123708: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 12370c: b.ls #0x123720 */
  if (ARC_COND(c, 9)) goto L_123720;
  /* 123710: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 123714: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1193752));
  fn1_1352bc(c);
  /* 123718: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 12371c: b #0x12372c */
  goto L_12372c;
L_123720:;
  /* 123720: b.hs #0x12372c */
  if (ARC_COND(c, 2)) goto L_12372c;
  /* 123724: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 123728: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_12372c:;
  /* 12372c: ldr x24, [x8, x26, lsl #3] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 123730: cbz x24, #0x123754 */
  if ((ARC_X_R(c, 24)) == 0) goto L_123754;
  /* 123734: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 123738: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 12373c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1193792));
  fn1_bd950(c);
  /* 123740: cbnz x0, #0x123754 */
  if ((ARC_X_R(c, 0)) != 0) goto L_123754;
  /* 123744: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 123748: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 12374c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 123750: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1193812));
  arc_dispatch(c, ARC_X_R(c, 8));
L_123754:;
  /* 123754: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 123758: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 12375c: ldr x25, [x25, #0xb60] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(2912))));
  /* 123760: str x23, [x8, x26, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3)), ARC_X_R(c, 23));
  /* 123764: ldar x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 123768: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 12376c: b.eq #0x123828 */
  if (ARC_COND(c, 0)) goto L_123828;
  /* 123770: nop  */
  /* nop: no architectural effect here */
  /* 123774: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 123778: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1193852));
  fn1_142518(c);
  /* 12377c: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 123780: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 123784: b.ne #0x1237b0 */
  if (ARC_COND(c, 1)) goto L_1237b0;
  /* 123788: nop  */
  /* nop: no architectural effect here */
  /* 12378c: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 123790: nop  */
  /* nop: no architectural effect here */
  /* 123794: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_123798:;
  /* 123798: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 12379c: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 1237a0: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1193892));
  fn1_142530(c);
  /* 1237a4: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 1237a8: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1237ac: b.eq #0x123798 */
  if (ARC_COND(c, 0)) goto L_123798;
L_1237b0:;
  /* 1237b0: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 1237b4: cbz x8, #0x1237c8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1237c8;
  /* 1237b8: nop  */
  /* nop: no architectural effect here */
  /* 1237bc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1237c0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1193924));
  fn1_142560(c);
  /* 1237c4: b #0x123828 */
  goto L_123828;
L_1237c8:;
  /* 1237c8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 1237cc: str x25, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 25));
  /* 1237d0: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 1237d4: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 1237d8: nop  */
  /* nop: no architectural effect here */
  /* 1237dc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1237e0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1193956));
  fn1_142560(c);
  /* 1237e4: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1237e8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1237ec: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 1237f0: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1193972));
  fn1_a2030(c);
  /* 1237f4: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 1237f8: str w8, [x25, #8] */
  arc_st32((ARC_X_R(c, 25) + INT64_C(8)), ARC_W_R(c, 8));
  /* 1237fc: nop  */
  /* nop: no architectural effect here */
  /* 123800: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 123804: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1193992));
  fn1_142518(c);
  /* 123808: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 12380c: stlr x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 123810: nop  */
  /* nop: no architectural effect here */
  /* 123814: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 123818: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1194012));
  fn1_142560(c);
  /* 12381c: nop  */
  /* nop: no architectural effect here */
  /* 123820: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 123824: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1194024));
  fn1_142578(c);
L_123828:;
  /* 123828: ldp x8, x10, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 12382c: ldrsw x9, [x25, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 25) + INT64_C(8)))));
  /* 123830: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 123834: sub x9, x10, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 123838: cmp x26, x9, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 3)));
  /* 12383c: b.hs #0x124408 */
  if (ARC_COND(c, 2)) goto L_124408;
  /* 123840: ldr x23, [x8, x26, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 123844: cbz x23, #0x124408 */
  if ((ARC_X_R(c, 23)) == 0) goto L_124408;
  /* 123848: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* 12384c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 123850: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1194068));
  fn1_db2e0(c);
  /* 123854: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 123858: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 12385c: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 123860: cmp x10, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 26));
  /* 123864: b.hi #0x123890 */
  if (ARC_COND(c, 8)) goto L_123890;
  /* 123868: add x9, x26, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 26) + UINT64_C(1)));
  /* 12386c: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 123870: b.ls #0x123884 */
  if (ARC_COND(c, 9)) goto L_123884;
  /* 123874: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 123878: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1194108));
  fn1_1352bc(c);
  /* 12387c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 123880: b #0x123890 */
  goto L_123890;
L_123884:;
  /* 123884: b.hs #0x123890 */
  if (ARC_COND(c, 2)) goto L_123890;
  /* 123888: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 12388c: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_123890:;
  /* 123890: ldr x24, [x8, x26, lsl #3] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 123894: cbz x24, #0x1238b8 */
  if ((ARC_X_R(c, 24)) == 0) goto L_1238b8;
  /* 123898: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 12389c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 1238a0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1194148));
  fn1_bd950(c);
  /* 1238a4: cbnz x0, #0x1238b8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_1238b8;
  /* 1238a8: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 1238ac: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 1238b0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 1238b4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1194168));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1238b8:;
  /* 1238b8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1238bc: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1238c0: ldr x25, [x25, #0xb50] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(2896))));
  /* 1238c4: str x23, [x8, x26, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3)), ARC_X_R(c, 23));
  /* 1238c8: ldar x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 1238cc: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 1238d0: b.eq #0x12398c */
  if (ARC_COND(c, 0)) goto L_12398c;
  /* 1238d4: nop  */
  /* nop: no architectural effect here */
  /* 1238d8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1238dc: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1194208));
  fn1_142518(c);
  /* 1238e0: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 1238e4: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1238e8: b.ne #0x123914 */
  if (ARC_COND(c, 1)) goto L_123914;
  /* 1238ec: nop  */
  /* nop: no architectural effect here */
  /* 1238f0: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 1238f4: nop  */
  /* nop: no architectural effect here */
  /* 1238f8: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_1238fc:;
  /* 1238fc: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 123900: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 123904: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1194248));
  fn1_142530(c);
  /* 123908: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 12390c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 123910: b.eq #0x1238fc */
  if (ARC_COND(c, 0)) goto L_1238fc;
L_123914:;
  /* 123914: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 123918: cbz x8, #0x12392c */
  if ((ARC_X_R(c, 8)) == 0) goto L_12392c;
  /* 12391c: nop  */
  /* nop: no architectural effect here */
  /* 123920: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 123924: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1194280));
  fn1_142560(c);
  /* 123928: b #0x12398c */
  goto L_12398c;
L_12392c:;
  /* 12392c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 123930: str x25, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 25));
  /* 123934: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 123938: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 12393c: nop  */
  /* nop: no architectural effect here */
  /* 123940: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 123944: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1194312));
  fn1_142560(c);
  /* 123948: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 12394c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 123950: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 123954: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1194328));
  fn1_a2030(c);
  /* 123958: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 12395c: str w8, [x25, #8] */
  arc_st32((ARC_X_R(c, 25) + INT64_C(8)), ARC_W_R(c, 8));
  /* 123960: nop  */
  /* nop: no architectural effect here */
  /* 123964: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 123968: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1194348));
  fn1_142518(c);
  /* 12396c: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 123970: stlr x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 123974: nop  */
  /* nop: no architectural effect here */
  /* 123978: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 12397c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1194368));
  fn1_142560(c);
  /* 123980: nop  */
  /* nop: no architectural effect here */
  /* 123984: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 123988: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1194380));
  fn1_142578(c);
L_12398c:;
  /* 12398c: ldp x8, x10, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 123990: ldrsw x9, [x25, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 25) + INT64_C(8)))));
  /* 123994: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 123998: sub x9, x10, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 12399c: cmp x26, x9, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 3)));
  /* 1239a0: b.hs #0x124408 */
  if (ARC_COND(c, 2)) goto L_124408;
  /* 1239a4: ldr x23, [x8, x26, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 1239a8: cbz x23, #0x124408 */
  if ((ARC_X_R(c, 23)) == 0) goto L_124408;
  /* 1239ac: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* 1239b0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1239b4: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1194424));
  fn1_db2e0(c);
  /* 1239b8: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1239bc: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 1239c0: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 1239c4: cmp x10, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 26));
  /* 1239c8: b.hi #0x1239f4 */
  if (ARC_COND(c, 8)) goto L_1239f4;
  /* 1239cc: add x9, x26, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 26) + UINT64_C(1)));
  /* 1239d0: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 1239d4: b.ls #0x1239e8 */
  if (ARC_COND(c, 9)) goto L_1239e8;
  /* 1239d8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1239dc: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1194464));
  fn1_1352bc(c);
  /* 1239e0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1239e4: b #0x1239f4 */
  goto L_1239f4;
L_1239e8:;
  /* 1239e8: b.hs #0x1239f4 */
  if (ARC_COND(c, 2)) goto L_1239f4;
  /* 1239ec: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 1239f0: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_1239f4:;
  /* 1239f4: ldr x24, [x8, x26, lsl #3] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 1239f8: cbz x24, #0x123a1c */
  if ((ARC_X_R(c, 24)) == 0) goto L_123a1c;
  /* 1239fc: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 123a00: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 123a04: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1194504));
  fn1_bd950(c);
  /* 123a08: cbnz x0, #0x123a1c */
  if ((ARC_X_R(c, 0)) != 0) goto L_123a1c;
  /* 123a0c: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 123a10: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 123a14: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 123a18: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1194524));
  arc_dispatch(c, ARC_X_R(c, 8));
L_123a1c:;
  /* 123a1c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 123a20: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 123a24: ldr x25, [x25, #0xb68] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(2920))));
  /* 123a28: str x23, [x8, x26, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3)), ARC_X_R(c, 23));
  /* 123a2c: ldar x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 123a30: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 123a34: b.eq #0x123af0 */
  if (ARC_COND(c, 0)) goto L_123af0;
  /* 123a38: nop  */
  /* nop: no architectural effect here */
  /* 123a3c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 123a40: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1194564));
  fn1_142518(c);
  /* 123a44: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 123a48: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 123a4c: b.ne #0x123a78 */
  if (ARC_COND(c, 1)) goto L_123a78;
  /* 123a50: nop  */
  /* nop: no architectural effect here */
  /* 123a54: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 123a58: nop  */
  /* nop: no architectural effect here */
  /* 123a5c: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_123a60:;
  /* 123a60: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 123a64: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 123a68: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1194604));
  fn1_142530(c);
  /* 123a6c: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 123a70: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 123a74: b.eq #0x123a60 */
  if (ARC_COND(c, 0)) goto L_123a60;
L_123a78:;
  /* 123a78: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 123a7c: cbz x8, #0x123a90 */
  if ((ARC_X_R(c, 8)) == 0) goto L_123a90;
  /* 123a80: nop  */
  /* nop: no architectural effect here */
  /* 123a84: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 123a88: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1194636));
  fn1_142560(c);
  /* 123a8c: b #0x123af0 */
  goto L_123af0;
L_123a90:;
  /* 123a90: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 123a94: str x25, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 25));
  /* 123a98: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 123a9c: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 123aa0: nop  */
  /* nop: no architectural effect here */
  /* 123aa4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 123aa8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1194668));
  fn1_142560(c);
  /* 123aac: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 123ab0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 123ab4: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 123ab8: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1194684));
  fn1_a2030(c);
  /* 123abc: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 123ac0: str w8, [x25, #8] */
  arc_st32((ARC_X_R(c, 25) + INT64_C(8)), ARC_W_R(c, 8));
  /* 123ac4: nop  */
  /* nop: no architectural effect here */
  /* 123ac8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 123acc: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1194704));
  fn1_142518(c);
  /* 123ad0: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 123ad4: stlr x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 123ad8: nop  */
  /* nop: no architectural effect here */
  /* 123adc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 123ae0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1194724));
  fn1_142560(c);
  /* 123ae4: nop  */
  /* nop: no architectural effect here */
  /* 123ae8: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 123aec: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1194736));
  fn1_142578(c);
L_123af0:;
  /* 123af0: ldp x8, x10, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 123af4: ldrsw x9, [x25, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 25) + INT64_C(8)))));
  /* 123af8: sub x25, x9, #1 */
  ARC_X_W(c, 25, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 123afc: sub x9, x10, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 123b00: cmp x25, x9, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 3)));
  /* 123b04: b.hs #0x124408 */
  if (ARC_COND(c, 2)) goto L_124408;
  /* 123b08: ldr x23, [x8, x25, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 25)) << 3))));
  /* 123b0c: cbz x23, #0x124408 */
  if ((ARC_X_R(c, 23)) == 0) goto L_124408;
  /* 123b10: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* 123b14: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 123b18: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1194780));
  fn1_db2e0(c);
  /* 123b1c: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 123b20: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 123b24: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 123b28: cmp x10, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 25));
  /* 123b2c: b.hi #0x123b58 */
  if (ARC_COND(c, 8)) goto L_123b58;
  /* 123b30: add x9, x25, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 25) + UINT64_C(1)));
  /* 123b34: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 123b38: b.ls #0x123b4c */
  if (ARC_COND(c, 9)) goto L_123b4c;
  /* 123b3c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 123b40: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1194820));
  fn1_1352bc(c);
  /* 123b44: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 123b48: b #0x123b58 */
  goto L_123b58;
L_123b4c:;
  /* 123b4c: b.hs #0x123b58 */
  if (ARC_COND(c, 2)) goto L_123b58;
  /* 123b50: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 123b54: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_123b58:;
  /* 123b58: ldr x24, [x8, x25, lsl #3] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 25)) << 3))));
  /* 123b5c: cbz x24, #0x123b80 */
  if ((ARC_X_R(c, 24)) == 0) goto L_123b80;
  /* 123b60: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 123b64: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 123b68: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1194860));
  fn1_bd950(c);
  /* 123b6c: cbnz x0, #0x123b80 */
  if ((ARC_X_R(c, 0)) != 0) goto L_123b80;
  /* 123b70: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 123b74: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 123b78: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 123b7c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1194880));
  arc_dispatch(c, ARC_X_R(c, 8));
L_123b80:;
  /* 123b80: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 123b84: str x23, [x8, x25, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 25)) << 3)), ARC_X_R(c, 23));
L_123b88:;
  /* 123b88: tbz w22, #2, #0x12411c */
  if (((ARC_W_R(c, 22)) >> 2 & 1) == 0) goto L_12411c;
  /* 123b8c: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 123b90: ldr x25, [x25, #0xbe8] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(3048))));
  /* 123b94: ldar x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 123b98: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 123b9c: b.eq #0x123c58 */
  if (ARC_COND(c, 0)) goto L_123c58;
  /* 123ba0: nop  */
  /* nop: no architectural effect here */
  /* 123ba4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 123ba8: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1194924));
  fn1_142518(c);
  /* 123bac: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 123bb0: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 123bb4: b.ne #0x123be0 */
  if (ARC_COND(c, 1)) goto L_123be0;
  /* 123bb8: nop  */
  /* nop: no architectural effect here */
  /* 123bbc: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 123bc0: nop  */
  /* nop: no architectural effect here */
  /* 123bc4: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_123bc8:;
  /* 123bc8: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 123bcc: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 123bd0: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1194964));
  fn1_142530(c);
  /* 123bd4: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 123bd8: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 123bdc: b.eq #0x123bc8 */
  if (ARC_COND(c, 0)) goto L_123bc8;
L_123be0:;
  /* 123be0: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 123be4: cbz x8, #0x123bf8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_123bf8;
  /* 123be8: nop  */
  /* nop: no architectural effect here */
  /* 123bec: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 123bf0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1194996));
  fn1_142560(c);
  /* 123bf4: b #0x123c58 */
  goto L_123c58;
L_123bf8:;
  /* 123bf8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 123bfc: str x25, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 25));
  /* 123c00: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 123c04: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 123c08: nop  */
  /* nop: no architectural effect here */
  /* 123c0c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 123c10: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1195028));
  fn1_142560(c);
  /* 123c14: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 123c18: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 123c1c: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 123c20: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1195044));
  fn1_a2030(c);
  /* 123c24: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 123c28: str w8, [x25, #8] */
  arc_st32((ARC_X_R(c, 25) + INT64_C(8)), ARC_W_R(c, 8));
  /* 123c2c: nop  */
  /* nop: no architectural effect here */
  /* 123c30: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 123c34: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1195064));
  fn1_142518(c);
  /* 123c38: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 123c3c: stlr x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 123c40: nop  */
  /* nop: no architectural effect here */
  /* 123c44: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 123c48: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1195084));
  fn1_142560(c);
  /* 123c4c: nop  */
  /* nop: no architectural effect here */
  /* 123c50: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 123c54: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1195096));
  fn1_142578(c);
L_123c58:;
  /* 123c58: ldp x8, x10, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 123c5c: ldrsw x9, [x25, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 25) + INT64_C(8)))));
  /* 123c60: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 123c64: sub x9, x10, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 123c68: cmp x26, x9, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 3)));
  /* 123c6c: b.hs #0x124408 */
  if (ARC_COND(c, 2)) goto L_124408;
  /* 123c70: ldr x23, [x8, x26, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 123c74: cbz x23, #0x124408 */
  if ((ARC_X_R(c, 23)) == 0) goto L_124408;
  /* 123c78: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* 123c7c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 123c80: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1195140));
  fn1_db2e0(c);
  /* 123c84: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 123c88: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 123c8c: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 123c90: cmp x10, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 26));
  /* 123c94: b.hi #0x123cc0 */
  if (ARC_COND(c, 8)) goto L_123cc0;
  /* 123c98: add x9, x26, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 26) + UINT64_C(1)));
  /* 123c9c: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 123ca0: b.ls #0x123cb4 */
  if (ARC_COND(c, 9)) goto L_123cb4;
  /* 123ca4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 123ca8: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1195180));
  fn1_1352bc(c);
  /* 123cac: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 123cb0: b #0x123cc0 */
  goto L_123cc0;
L_123cb4:;
  /* 123cb4: b.hs #0x123cc0 */
  if (ARC_COND(c, 2)) goto L_123cc0;
  /* 123cb8: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 123cbc: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_123cc0:;
  /* 123cc0: ldr x24, [x8, x26, lsl #3] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 123cc4: cbz x24, #0x123ce8 */
  if ((ARC_X_R(c, 24)) == 0) goto L_123ce8;
  /* 123cc8: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 123ccc: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 123cd0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1195220));
  fn1_bd950(c);
  /* 123cd4: cbnz x0, #0x123ce8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_123ce8;
  /* 123cd8: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 123cdc: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 123ce0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 123ce4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1195240));
  arc_dispatch(c, ARC_X_R(c, 8));
L_123ce8:;
  /* 123ce8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 123cec: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 123cf0: ldr x25, [x25, #0xbf0] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(3056))));
  /* 123cf4: str x23, [x8, x26, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3)), ARC_X_R(c, 23));
  /* 123cf8: ldar x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 123cfc: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 123d00: b.eq #0x123dbc */
  if (ARC_COND(c, 0)) goto L_123dbc;
  /* 123d04: nop  */
  /* nop: no architectural effect here */
  /* 123d08: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 123d0c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1195280));
  fn1_142518(c);
  /* 123d10: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 123d14: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 123d18: b.ne #0x123d44 */
  if (ARC_COND(c, 1)) goto L_123d44;
  /* 123d1c: nop  */
  /* nop: no architectural effect here */
  /* 123d20: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 123d24: nop  */
  /* nop: no architectural effect here */
  /* 123d28: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_123d2c:;
  /* 123d2c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 123d30: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 123d34: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1195320));
  fn1_142530(c);
  /* 123d38: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 123d3c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 123d40: b.eq #0x123d2c */
  if (ARC_COND(c, 0)) goto L_123d2c;
L_123d44:;
  /* 123d44: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 123d48: cbz x8, #0x123d5c */
  if ((ARC_X_R(c, 8)) == 0) goto L_123d5c;
  /* 123d4c: nop  */
  /* nop: no architectural effect here */
  /* 123d50: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 123d54: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1195352));
  fn1_142560(c);
  /* 123d58: b #0x123dbc */
  goto L_123dbc;
L_123d5c:;
  /* 123d5c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 123d60: str x25, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 25));
  /* 123d64: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 123d68: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 123d6c: nop  */
  /* nop: no architectural effect here */
  /* 123d70: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 123d74: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1195384));
  fn1_142560(c);
  /* 123d78: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 123d7c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 123d80: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 123d84: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1195400));
  fn1_a2030(c);
  /* 123d88: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 123d8c: str w8, [x25, #8] */
  arc_st32((ARC_X_R(c, 25) + INT64_C(8)), ARC_W_R(c, 8));
  /* 123d90: nop  */
  /* nop: no architectural effect here */
  /* 123d94: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 123d98: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1195420));
  fn1_142518(c);
  /* 123d9c: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 123da0: stlr x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 123da4: nop  */
  /* nop: no architectural effect here */
  /* 123da8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 123dac: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1195440));
  fn1_142560(c);
  /* 123db0: nop  */
  /* nop: no architectural effect here */
  /* 123db4: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 123db8: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1195452));
  fn1_142578(c);
L_123dbc:;
  /* 123dbc: ldp x8, x10, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 123dc0: ldrsw x9, [x25, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 25) + INT64_C(8)))));
  /* 123dc4: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 123dc8: sub x9, x10, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 123dcc: cmp x26, x9, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 3)));
  /* 123dd0: b.hs #0x124408 */
  if (ARC_COND(c, 2)) goto L_124408;
  /* 123dd4: ldr x23, [x8, x26, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 123dd8: cbz x23, #0x124408 */
  if ((ARC_X_R(c, 23)) == 0) goto L_124408;
  /* 123ddc: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* 123de0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 123de4: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1195496));
  fn1_db2e0(c);
  /* 123de8: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 123dec: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 123df0: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 123df4: cmp x10, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 26));
  /* 123df8: b.hi #0x123e24 */
  if (ARC_COND(c, 8)) goto L_123e24;
  /* 123dfc: add x9, x26, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 26) + UINT64_C(1)));
  /* 123e00: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 123e04: b.ls #0x123e18 */
  if (ARC_COND(c, 9)) goto L_123e18;
  /* 123e08: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 123e0c: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1195536));
  fn1_1352bc(c);
  /* 123e10: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 123e14: b #0x123e24 */
  goto L_123e24;
L_123e18:;
  /* 123e18: b.hs #0x123e24 */
  if (ARC_COND(c, 2)) goto L_123e24;
  /* 123e1c: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 123e20: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_123e24:;
  /* 123e24: ldr x24, [x8, x26, lsl #3] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 123e28: cbz x24, #0x123e4c */
  if ((ARC_X_R(c, 24)) == 0) goto L_123e4c;
  /* 123e2c: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 123e30: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 123e34: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1195576));
  fn1_bd950(c);
  /* 123e38: cbnz x0, #0x123e4c */
  if ((ARC_X_R(c, 0)) != 0) goto L_123e4c;
  /* 123e3c: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 123e40: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 123e44: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 123e48: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1195596));
  arc_dispatch(c, ARC_X_R(c, 8));
L_123e4c:;
  /* 123e4c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 123e50: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 123e54: ldr x25, [x25, #0xbf8] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(3064))));
  /* 123e58: str x23, [x8, x26, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3)), ARC_X_R(c, 23));
  /* 123e5c: ldar x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 123e60: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 123e64: b.eq #0x123f20 */
  if (ARC_COND(c, 0)) goto L_123f20;
  /* 123e68: nop  */
  /* nop: no architectural effect here */
  /* 123e6c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 123e70: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1195636));
  fn1_142518(c);
  /* 123e74: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 123e78: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 123e7c: b.ne #0x123ea8 */
  if (ARC_COND(c, 1)) goto L_123ea8;
  /* 123e80: nop  */
  /* nop: no architectural effect here */
  /* 123e84: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 123e88: nop  */
  /* nop: no architectural effect here */
  /* 123e8c: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_123e90:;
  /* 123e90: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 123e94: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 123e98: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1195676));
  fn1_142530(c);
  /* 123e9c: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 123ea0: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 123ea4: b.eq #0x123e90 */
  if (ARC_COND(c, 0)) goto L_123e90;
L_123ea8:;
  /* 123ea8: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 123eac: cbz x8, #0x123ec0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_123ec0;
  /* 123eb0: nop  */
  /* nop: no architectural effect here */
  /* 123eb4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 123eb8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1195708));
  fn1_142560(c);
  /* 123ebc: b #0x123f20 */
  goto L_123f20;
L_123ec0:;
  /* 123ec0: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 123ec4: str x25, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 25));
  /* 123ec8: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 123ecc: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 123ed0: nop  */
  /* nop: no architectural effect here */
  /* 123ed4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 123ed8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1195740));
  fn1_142560(c);
  /* 123edc: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 123ee0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 123ee4: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 123ee8: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1195756));
  fn1_a2030(c);
  /* 123eec: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 123ef0: str w8, [x25, #8] */
  arc_st32((ARC_X_R(c, 25) + INT64_C(8)), ARC_W_R(c, 8));
  /* 123ef4: nop  */
  /* nop: no architectural effect here */
  /* 123ef8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 123efc: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1195776));
  fn1_142518(c);
  /* 123f00: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 123f04: stlr x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 123f08: nop  */
  /* nop: no architectural effect here */
  /* 123f0c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 123f10: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1195796));
  fn1_142560(c);
  /* 123f14: nop  */
  /* nop: no architectural effect here */
  /* 123f18: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 123f1c: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1195808));
  fn1_142578(c);
L_123f20:;
  /* 123f20: ldp x8, x10, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 123f24: ldrsw x9, [x25, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 25) + INT64_C(8)))));
  /* 123f28: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 123f2c: sub x9, x10, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 123f30: cmp x26, x9, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 3)));
  /* 123f34: b.hs #0x124408 */
  if (ARC_COND(c, 2)) goto L_124408;
  /* 123f38: ldr x23, [x8, x26, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 123f3c: cbz x23, #0x124408 */
  if ((ARC_X_R(c, 23)) == 0) goto L_124408;
  /* 123f40: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* 123f44: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 123f48: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1195852));
  fn1_db2e0(c);
  /* 123f4c: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 123f50: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 123f54: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 123f58: cmp x10, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 26));
  /* 123f5c: b.hi #0x123f88 */
  if (ARC_COND(c, 8)) goto L_123f88;
  /* 123f60: add x9, x26, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 26) + UINT64_C(1)));
  /* 123f64: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 123f68: b.ls #0x123f7c */
  if (ARC_COND(c, 9)) goto L_123f7c;
  /* 123f6c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 123f70: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1195892));
  fn1_1352bc(c);
  /* 123f74: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 123f78: b #0x123f88 */
  goto L_123f88;
L_123f7c:;
  /* 123f7c: b.hs #0x123f88 */
  if (ARC_COND(c, 2)) goto L_123f88;
  /* 123f80: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 123f84: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_123f88:;
  /* 123f88: ldr x24, [x8, x26, lsl #3] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3))));
  /* 123f8c: cbz x24, #0x123fb0 */
  if ((ARC_X_R(c, 24)) == 0) goto L_123fb0;
  /* 123f90: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 123f94: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 123f98: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1195932));
  fn1_bd950(c);
  /* 123f9c: cbnz x0, #0x123fb0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_123fb0;
  /* 123fa0: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 123fa4: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 123fa8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 123fac: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1195952));
  arc_dispatch(c, ARC_X_R(c, 8));
L_123fb0:;
  /* 123fb0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 123fb4: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 123fb8: ldr x25, [x25, #0xc00] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(3072))));
  /* 123fbc: str x23, [x8, x26, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 3)), ARC_X_R(c, 23));
  /* 123fc0: ldar x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 123fc4: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 123fc8: b.eq #0x124084 */
  if (ARC_COND(c, 0)) goto L_124084;
  /* 123fcc: nop  */
  /* nop: no architectural effect here */
  /* 123fd0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 123fd4: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1195992));
  fn1_142518(c);
  /* 123fd8: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 123fdc: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 123fe0: b.ne #0x12400c */
  if (ARC_COND(c, 1)) goto L_12400c;
  /* 123fe4: nop  */
  /* nop: no architectural effect here */
  /* 123fe8: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 123fec: nop  */
  /* nop: no architectural effect here */
  /* 123ff0: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_123ff4:;
  /* 123ff4: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 123ff8: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 123ffc: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1196032));
  fn1_142530(c);
  /* 124000: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 124004: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 124008: b.eq #0x123ff4 */
  if (ARC_COND(c, 0)) goto L_123ff4;
L_12400c:;
  /* 12400c: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 124010: cbz x8, #0x124024 */
  if ((ARC_X_R(c, 8)) == 0) goto L_124024;
  /* 124014: nop  */
  /* nop: no architectural effect here */
  /* 124018: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 12401c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1196064));
  fn1_142560(c);
  /* 124020: b #0x124084 */
  goto L_124084;
L_124024:;
  /* 124024: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 124028: str x25, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 25));
  /* 12402c: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 124030: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 124034: nop  */
  /* nop: no architectural effect here */
  /* 124038: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 12403c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1196096));
  fn1_142560(c);
  /* 124040: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 124044: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 124048: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 12404c: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1196112));
  fn1_a2030(c);
  /* 124050: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 124054: str w8, [x25, #8] */
  arc_st32((ARC_X_R(c, 25) + INT64_C(8)), ARC_W_R(c, 8));
  /* 124058: nop  */
  /* nop: no architectural effect here */
  /* 12405c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 124060: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1196132));
  fn1_142518(c);
  /* 124064: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 124068: stlr x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 12406c: nop  */
  /* nop: no architectural effect here */
  /* 124070: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 124074: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1196152));
  fn1_142560(c);
  /* 124078: nop  */
  /* nop: no architectural effect here */
  /* 12407c: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 124080: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1196164));
  fn1_142578(c);
L_124084:;
  /* 124084: ldp x8, x10, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 124088: ldrsw x9, [x25, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 25) + INT64_C(8)))));
  /* 12408c: sub x25, x9, #1 */
  ARC_X_W(c, 25, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 124090: sub x9, x10, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 124094: cmp x25, x9, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 3)));
  /* 124098: b.hs #0x124408 */
  if (ARC_COND(c, 2)) goto L_124408;
  /* 12409c: ldr x23, [x8, x25, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 25)) << 3))));
  /* 1240a0: cbz x23, #0x124408 */
  if ((ARC_X_R(c, 23)) == 0) goto L_124408;
  /* 1240a4: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* 1240a8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1240ac: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1196208));
  fn1_db2e0(c);
  /* 1240b0: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1240b4: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 1240b8: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 1240bc: cmp x10, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 25));
  /* 1240c0: b.hi #0x1240ec */
  if (ARC_COND(c, 8)) goto L_1240ec;
  /* 1240c4: add x9, x25, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 25) + UINT64_C(1)));
  /* 1240c8: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 1240cc: b.ls #0x1240e0 */
  if (ARC_COND(c, 9)) goto L_1240e0;
  /* 1240d0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1240d4: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1196248));
  fn1_1352bc(c);
  /* 1240d8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1240dc: b #0x1240ec */
  goto L_1240ec;
L_1240e0:;
  /* 1240e0: b.hs #0x1240ec */
  if (ARC_COND(c, 2)) goto L_1240ec;
  /* 1240e4: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 1240e8: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_1240ec:;
  /* 1240ec: ldr x24, [x8, x25, lsl #3] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 25)) << 3))));
  /* 1240f0: cbz x24, #0x124114 */
  if ((ARC_X_R(c, 24)) == 0) goto L_124114;
  /* 1240f4: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 1240f8: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 1240fc: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1196288));
  fn1_bd950(c);
  /* 124100: cbnz x0, #0x124114 */
  if ((ARC_X_R(c, 0)) != 0) goto L_124114;
  /* 124104: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 124108: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 12410c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 124110: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1196308));
  arc_dispatch(c, ARC_X_R(c, 8));
L_124114:;
  /* 124114: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 124118: str x23, [x8, x25, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 25)) << 3)), ARC_X_R(c, 23));
L_12411c:;
  /* 12411c: tbz w22, #5, #0x1243e8 */
  if (((ARC_W_R(c, 22)) >> 5 & 1) == 0) goto L_1243e8;
  /* 124120: adrp x24, #0x151000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 124124: ldr x24, [x24, #0xc48] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(3144))));
  /* 124128: ldar x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 12412c: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 124130: b.eq #0x1241ec */
  if (ARC_COND(c, 0)) goto L_1241ec;
  /* 124134: nop  */
  /* nop: no architectural effect here */
  /* 124138: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 12413c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1196352));
  fn1_142518(c);
  /* 124140: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 124144: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 124148: b.ne #0x124174 */
  if (ARC_COND(c, 1)) goto L_124174;
  /* 12414c: nop  */
  /* nop: no architectural effect here */
  /* 124150: adr x22, #0x15791c */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 124154: nop  */
  /* nop: no architectural effect here */
  /* 124158: adr x23, #0x1578f4 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407220)));
L_12415c:;
  /* 12415c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 124160: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 124164: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1196392));
  fn1_142530(c);
  /* 124168: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 12416c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 124170: b.eq #0x12415c */
  if (ARC_COND(c, 0)) goto L_12415c;
L_124174:;
  /* 124174: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 124178: cbz x8, #0x12418c */
  if ((ARC_X_R(c, 8)) == 0) goto L_12418c;
  /* 12417c: nop  */
  /* nop: no architectural effect here */
  /* 124180: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 124184: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1196424));
  fn1_142560(c);
  /* 124188: b #0x1241ec */
  goto L_1241ec;
L_12418c:;
  /* 12418c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 124190: str x24, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 24));
  /* 124194: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 124198: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 12419c: nop  */
  /* nop: no architectural effect here */
  /* 1241a0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1241a4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1196456));
  fn1_142560(c);
  /* 1241a8: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1241ac: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1241b0: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 1241b4: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1196472));
  fn1_a2030(c);
  /* 1241b8: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 1241bc: str w8, [x24, #8] */
  arc_st32((ARC_X_R(c, 24) + INT64_C(8)), ARC_W_R(c, 8));
  /* 1241c0: nop  */
  /* nop: no architectural effect here */
  /* 1241c4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1241c8: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1196492));
  fn1_142518(c);
  /* 1241cc: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 1241d0: stlr x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 1241d4: nop  */
  /* nop: no architectural effect here */
  /* 1241d8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1241dc: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1196512));
  fn1_142560(c);
  /* 1241e0: nop  */
  /* nop: no architectural effect here */
  /* 1241e4: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 1241e8: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1196524));
  fn1_142578(c);
L_1241ec:;
  /* 1241ec: ldp x8, x10, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 1241f0: ldrsw x9, [x24, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 24) + INT64_C(8)))));
  /* 1241f4: sub x25, x9, #1 */
  ARC_X_W(c, 25, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 1241f8: sub x9, x10, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 1241fc: cmp x25, x9, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 3)));
  /* 124200: b.hs #0x124408 */
  if (ARC_COND(c, 2)) goto L_124408;
  /* 124204: ldr x22, [x8, x25, lsl #3] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 25)) << 3))));
  /* 124208: cbz x22, #0x124408 */
  if ((ARC_X_R(c, 22)) == 0) goto L_124408;
  /* 12420c: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* 124210: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 124214: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1196568));
  fn1_db2e0(c);
  /* 124218: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 12421c: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 124220: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 124224: cmp x10, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 25));
  /* 124228: b.hi #0x124254 */
  if (ARC_COND(c, 8)) goto L_124254;
  /* 12422c: add x9, x25, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 25) + UINT64_C(1)));
  /* 124230: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 124234: b.ls #0x124248 */
  if (ARC_COND(c, 9)) goto L_124248;
  /* 124238: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12423c: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1196608));
  fn1_1352bc(c);
  /* 124240: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 124244: b #0x124254 */
  goto L_124254;
L_124248:;
  /* 124248: b.hs #0x124254 */
  if (ARC_COND(c, 2)) goto L_124254;
  /* 12424c: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 124250: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_124254:;
  /* 124254: ldr x23, [x8, x25, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 25)) << 3))));
  /* 124258: cbz x23, #0x12427c */
  if ((ARC_X_R(c, 23)) == 0) goto L_12427c;
  /* 12425c: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* 124260: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 124264: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1196648));
  fn1_bd950(c);
  /* 124268: cbnz x0, #0x12427c */
  if ((ARC_X_R(c, 0)) != 0) goto L_12427c;
  /* 12426c: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 124270: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 124274: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 124278: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1196668));
  arc_dispatch(c, ARC_X_R(c, 8));
L_12427c:;
  /* 12427c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 124280: adrp x24, #0x151000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 124284: ldr x24, [x24, #0xc50] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(3152))));
  /* 124288: str x22, [x8, x25, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 25)) << 3)), ARC_X_R(c, 22));
  /* 12428c: ldar x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 124290: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 124294: b.eq #0x124350 */
  if (ARC_COND(c, 0)) goto L_124350;
  /* 124298: nop  */
  /* nop: no architectural effect here */
  /* 12429c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1242a0: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1196708));
  fn1_142518(c);
  /* 1242a4: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 1242a8: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1242ac: b.ne #0x1242d8 */
  if (ARC_COND(c, 1)) goto L_1242d8;
  /* 1242b0: nop  */
  /* nop: no architectural effect here */
  /* 1242b4: adr x22, #0x15791c */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 1242b8: nop  */
  /* nop: no architectural effect here */
  /* 1242bc: adr x23, #0x1578f4 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407220)));
L_1242c0:;
  /* 1242c0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1242c4: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 1242c8: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1196748));
  fn1_142530(c);
  /* 1242cc: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 1242d0: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1242d4: b.eq #0x1242c0 */
  if (ARC_COND(c, 0)) goto L_1242c0;
L_1242d8:;
  /* 1242d8: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 1242dc: cbz x8, #0x1242f0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1242f0;
  /* 1242e0: nop  */
  /* nop: no architectural effect here */
  /* 1242e4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1242e8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1196780));
  fn1_142560(c);
  /* 1242ec: b #0x124350 */
  goto L_124350;
L_1242f0:;
  /* 1242f0: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 1242f4: str x24, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 24));
  /* 1242f8: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 1242fc: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 124300: nop  */
  /* nop: no architectural effect here */
  /* 124304: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 124308: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1196812));
  fn1_142560(c);
  /* 12430c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 124310: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 124314: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 124318: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1196828));
  fn1_a2030(c);
  /* 12431c: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 124320: str w8, [x24, #8] */
  arc_st32((ARC_X_R(c, 24) + INT64_C(8)), ARC_W_R(c, 8));
  /* 124324: nop  */
  /* nop: no architectural effect here */
  /* 124328: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 12432c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1196848));
  fn1_142518(c);
  /* 124330: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 124334: stlr x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 124338: nop  */
  /* nop: no architectural effect here */
  /* 12433c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 124340: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1196868));
  fn1_142560(c);
  /* 124344: nop  */
  /* nop: no architectural effect here */
  /* 124348: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 12434c: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1196880));
  fn1_142578(c);
L_124350:;
  /* 124350: ldp x8, x10, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 124354: ldrsw x9, [x24, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 24) + INT64_C(8)))));
  /* 124358: sub x21, x9, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 12435c: sub x9, x10, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 124360: cmp x21, x9, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 3)));
  /* 124364: b.hs #0x124408 */
  if (ARC_COND(c, 2)) goto L_124408;
  /* 124368: ldr x22, [x8, x21, lsl #3] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 21)) << 3))));
  /* 12436c: cbz x22, #0x124408 */
  if ((ARC_X_R(c, 22)) == 0) goto L_124408;
  /* 124370: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* 124374: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 124378: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1196924));
  fn1_db2e0(c);
  /* 12437c: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 124380: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 124384: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 124388: cmp x10, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 21));
  /* 12438c: b.hi #0x1243b8 */
  if (ARC_COND(c, 8)) goto L_1243b8;
  /* 124390: add x9, x21, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* 124394: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 124398: b.ls #0x1243ac */
  if (ARC_COND(c, 9)) goto L_1243ac;
  /* 12439c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1243a0: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1196964));
  fn1_1352bc(c);
  /* 1243a4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1243a8: b #0x1243b8 */
  goto L_1243b8;
L_1243ac:;
  /* 1243ac: b.hs #0x1243b8 */
  if (ARC_COND(c, 2)) goto L_1243b8;
  /* 1243b0: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 1243b4: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_1243b8:;
  /* 1243b8: ldr x20, [x8, x21, lsl #3] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 21)) << 3))));
  /* 1243bc: cbz x20, #0x1243e0 */
  if ((ARC_X_R(c, 20)) == 0) goto L_1243e0;
  /* 1243c0: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 1243c4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 1243c8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1197004));
  fn1_bd950(c);
  /* 1243cc: cbnz x0, #0x1243e0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_1243e0;
  /* 1243d0: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1243d4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1243d8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 1243dc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1197024));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1243e0:;
  /* 1243e0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1243e4: str x22, [x8, x21, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 21)) << 3)), ARC_X_R(c, 22));
L_1243e8:;
  /* 1243e8: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1243ec: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1243f0: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1243f4: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 1243f8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1243fc: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 124400: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 124404: ret  */
  return;
L_124408:;
  /* 124408: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1197068));
  fn1_fc3b8(c);
  /* 12440c: b #0x124414 */
  goto L_124414;
  /* 124410: b #0x12449c */
  goto L_12449c;
L_124414:;
  /* 124414: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 124418: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* 12441c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 124420: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1197092));
  fn1_bd950(c);
  /* 124424: cbnz x0, #0x1245d4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_1245d4;
  /* 124428: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 12442c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 124430: b #0x1244b8 */
  goto L_1244b8;
  /* 124434: b #0x12449c */
  goto L_12449c;
  /* 124438: b #0x12449c */
  goto L_12449c;
  /* 12443c: b #0x12449c */
  goto L_12449c;
  /* 124440: b #0x12449c */
  goto L_12449c;
  /* 124444: b #0x12449c */
  goto L_12449c;
  /* 124448: b #0x12449c */
  goto L_12449c;
  /* 12444c: b #0x12449c */
  goto L_12449c;
  /* 124450: b #0x12449c */
  goto L_12449c;
  /* 124454: b #0x12449c */
  goto L_12449c;
  /* 124458: b #0x12449c */
  goto L_12449c;
  /* 12445c: b #0x12449c */
  goto L_12449c;
  /* 124460: b #0x12449c */
  goto L_12449c;
  /* 124464: b #0x12449c */
  goto L_12449c;
  /* 124468: b #0x12449c */
  goto L_12449c;
  /* 12446c: b #0x12449c */
  goto L_12449c;
  /* 124470: b #0x12449c */
  goto L_12449c;
  /* 124474: b #0x12449c */
  goto L_12449c;
  /* 124478: b #0x12449c */
  goto L_12449c;
  /* 12447c: b #0x12449c */
  goto L_12449c;
  /* 124480: b #0x12449c */
  goto L_12449c;
  /* 124484: b #0x12449c */
  goto L_12449c;
  /* 124488: b #0x12449c */
  goto L_12449c;
  /* 12448c: b #0x12449c */
  goto L_12449c;
  /* 124490: b #0x12449c */
  goto L_12449c;
  /* 124494: b #0x12449c */
  goto L_12449c;
  /* 124498: b #0x12449c */
  goto L_12449c;
L_12449c:;
  /* 12449c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1244a0: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* 1244a4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 1244a8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1197228));
  fn1_bd950(c);
  /* 1244ac: cbnz x0, #0x1245d4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_1245d4;
  /* 1244b0: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 1244b4: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
L_1244b8:;
  /* 1244b8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 1244bc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1197248));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1244c0: b #0x1245d4 */
  goto L_1245d4;
  /* 1244c4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1244c8: b #0x12465c */
  goto L_12465c;
  /* 1244cc: b #0x124540 */
  goto L_124540;
  /* 1244d0: b #0x124540 */
  goto L_124540;
  /* 1244d4: b #0x124540 */
  goto L_124540;
  /* 1244d8: b #0x124540 */
  goto L_124540;
  /* 1244dc: b #0x124540 */
  goto L_124540;
  /* 1244e0: b #0x124540 */
  goto L_124540;
  /* 1244e4: b #0x124540 */
  goto L_124540;
  /* 1244e8: b #0x124540 */
  goto L_124540;
  /* 1244ec: b #0x124540 */
  goto L_124540;
  /* 1244f0: b #0x124540 */
  goto L_124540;
  /* 1244f4: b #0x124540 */
  goto L_124540;
  /* 1244f8: b #0x124540 */
  goto L_124540;
  /* 1244fc: b #0x124540 */
  goto L_124540;
  /* 124500: b #0x124540 */
  goto L_124540;
  /* 124504: b #0x124540 */
  goto L_124540;
  /* 124508: b #0x124540 */
  goto L_124540;
  /* 12450c: b #0x124540 */
  goto L_124540;
  /* 124510: b #0x124540 */
  goto L_124540;
  /* 124514: b #0x124540 */
  goto L_124540;
  /* 124518: b #0x124540 */
  goto L_124540;
  /* 12451c: b #0x124540 */
  goto L_124540;
  /* 124520: b #0x124540 */
  goto L_124540;
  /* 124524: b #0x124540 */
  goto L_124540;
  /* 124528: b #0x124540 */
  goto L_124540;
  /* 12452c: b #0x124540 */
  goto L_124540;
  /* 124530: b #0x124540 */
  goto L_124540;
  /* 124534: b #0x124540 */
  goto L_124540;
  /* 124538: b #0x124540 */
  goto L_124540;
  /* 12453c: b #0x124540 */
  goto L_124540;
L_124540:;
  /* 124540: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 124544: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 124548: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1197388));
  fn1_d2a78(c);
  /* 12454c: b #0x1245d4 */
  goto L_1245d4;
  /* 124550: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 124554: b #0x124644 */
  goto L_124644;
  /* 124558: b #0x1245d0 */
  goto L_1245d0;
  /* 12455c: b #0x1245d0 */
  goto L_1245d0;
  /* 124560: b #0x1245d0 */
  goto L_1245d0;
  /* 124564: b #0x1245d0 */
  goto L_1245d0;
  /* 124568: b #0x1245d0 */
  goto L_1245d0;
  /* 12456c: b #0x1245d0 */
  goto L_1245d0;
  /* 124570: b #0x1245d0 */
  goto L_1245d0;
  /* 124574: b #0x1245d0 */
  goto L_1245d0;
  /* 124578: b #0x1245d0 */
  goto L_1245d0;
  /* 12457c: b #0x1245d0 */
  goto L_1245d0;
  /* 124580: b #0x1245d0 */
  goto L_1245d0;
  /* 124584: b #0x1245d0 */
  goto L_1245d0;
  /* 124588: b #0x1245d0 */
  goto L_1245d0;
  /* 12458c: b #0x1245d0 */
  goto L_1245d0;
  /* 124590: b #0x1245d0 */
  goto L_1245d0;
  /* 124594: b #0x1245d0 */
  goto L_1245d0;
  /* 124598: b #0x1245d0 */
  goto L_1245d0;
  /* 12459c: b #0x1245d0 */
  goto L_1245d0;
  /* 1245a0: b #0x1245d0 */
  goto L_1245d0;
  /* 1245a4: b #0x1245d0 */
  goto L_1245d0;
  /* 1245a8: b #0x1245d0 */
  goto L_1245d0;
  /* 1245ac: b #0x1245d0 */
  goto L_1245d0;
  /* 1245b0: b #0x1245d0 */
  goto L_1245d0;
  /* 1245b4: b #0x1245d0 */
  goto L_1245d0;
  /* 1245b8: b #0x1245d0 */
  goto L_1245d0;
  /* 1245bc: b #0x1245d0 */
  goto L_1245d0;
  /* 1245c0: b #0x1245d0 */
  goto L_1245d0;
  /* 1245c4: b #0x1245d0 */
  goto L_1245d0;
  /* 1245c8: b #0x1245d0 */
  goto L_1245d0;
  /* 1245cc: b #0x1245d0 */
  goto L_1245d0;
L_1245d0:;
  /* 1245d0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
L_1245d4:;
  /* 1245d4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1245d8: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1197532));
  fn1_142548(c);
  /* 1245dc: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1245e0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 1245e4: b.ne #0x1245ec */
  if (ARC_COND(c, 1)) goto L_1245ec;
L_1245e8:;
  /* 1245e8: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1197548));
  fn1_1429b0(c);
L_1245ec:;
  /* 1245ec: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* 1245f0: mov w22, #1 */
  ARC_W_W(c, 22, UINT64_C(1));
  /* 1245f4: b #0x124610 */
  goto L_124610;
L_1245f8:;
  /* 1245f8: ldp x8, x10, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 1245fc: mov w9, w22 */
  ARC_W_W(c, 9, ARC_W_R(c, 22));
  /* 124600: add w22, w22, #1 */
  ARC_W_W(c, 22, (ARC_W_R(c, 22) + UINT64_C(1)));
  /* 124604: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 124608: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 12460c: b.hs #0x1245e8 */
  if (ARC_COND(c, 2)) goto L_1245e8;
L_124610:;
  /* 124610: ldr x21, [x8, x9, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 124614: cbz x21, #0x1245f8 */
  if ((ARC_X_R(c, 21)) == 0) goto L_1245f8;
  /* 124618: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 12461c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 124620: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1197604));
  fn1_bd950(c);
  /* 124624: cbnz x0, #0x1245f8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_1245f8;
  /* 124628: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 12462c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 124630: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 124634: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1197624));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 124638: b #0x1245f8 */
  goto L_1245f8;
  /* 12463c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 124640: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1197636));
  fn1_142980(c);
L_124644:;
  /* 124644: ldrb w8, [x20, #0x120] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(288))));
  /* 124648: tbz w8, #0, #0x12465c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12465c;
  /* 12464c: ldr x8, [x20, #0x120] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(288))));
  /* 124650: ldr x0, [x20, #0x130] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(304))));
  /* 124654: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 124658: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1197660));
  fn1_142608(c);
L_12465c:;
  /* 12465c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 124660: bl #0x11de44 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1197668));
  fn1_11de44(c);
  /* 124664: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 124668: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1197676));
  fn1_9cc20(c);
  /* 12466c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1197680));
  fn1_a1454(c);
}

void fn1_127118(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039136536));
  /* 127118: bti c */
  /* bti: no architectural effect here */
  /* 12711c: cmp x1, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 2));
  /* 127120: b.eq #0x127138 */
  if (ARC_COND(c, 0)) goto L_127138;
  /* 127124: sub x8, x2, x1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 2) - ARC_X_R(c, 1)));
  /* 127128: cmp x8, #0x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(32));
  /* 12712c: b.hs #0x127140 */
  if (ARC_COND(c, 2)) goto L_127140;
  /* 127130: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 127134: b #0x127220 */
  goto L_127220;
L_127138:;
  /* 127138: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 12713c: ret  */
  return;
L_127140:;
  /* 127140: adrp x10, #0x52000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(335872)));
  /* 127144: movi v0.16b, #0x20 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = UINT64_C(32);
    _t.u8[1] = UINT64_C(32);
    _t.u8[2] = UINT64_C(32);
    _t.u8[3] = UINT64_C(32);
    _t.u8[4] = UINT64_C(32);
    _t.u8[5] = UINT64_C(32);
    _t.u8[6] = UINT64_C(32);
    _t.u8[7] = UINT64_C(32);
    _t.u8[8] = UINT64_C(32);
    _t.u8[9] = UINT64_C(32);
    _t.u8[10] = UINT64_C(32);
    _t.u8[11] = UINT64_C(32);
    _t.u8[12] = UINT64_C(32);
    _t.u8[13] = UINT64_C(32);
    _t.u8[14] = UINT64_C(32);
    _t.u8[15] = UINT64_C(32);
    (c)->q[0] = _t; }
  /* 127148: adrp x11, #0x52000 */
  ARC_X_W(c, 11, (arc_image_bases[1] + UINT64_C(335872)));
  /* 12714c: adrp x12, #0x52000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(335872)));
  /* 127150: ldr q1, [x10, #0x940] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 10) + INT64_C(2368))), arc_ld64((ARC_X_R(c, 10) + INT64_C(2368)) + 8));
  /* 127154: adrp x10, #0x52000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(335872)));
  /* 127158: mvni v2.4s, #0x7a */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = UINT64_C(4294967173);
    _t.u32[1] = UINT64_C(4294967173);
    _t.u32[2] = UINT64_C(4294967173);
    _t.u32[3] = UINT64_C(4294967173);
    (c)->q[2] = _t; }
  /* 12715c: mvni v3.4s, #0x19 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = UINT64_C(4294967270);
    _t.u32[1] = UINT64_C(4294967270);
    _t.u32[2] = UINT64_C(4294967270);
    _t.u32[3] = UINT64_C(4294967270);
    (c)->q[3] = _t; }
  /* 127160: and x9, x8, #0xffffffffffffffe0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) & UINT64_C(18446744073709551584)));
  /* 127164: ldr q4, [x11, #0xc50] */
  arc_q_w(c, 4, arc_ld64((ARC_X_R(c, 11) + INT64_C(3152))), arc_ld64((ARC_X_R(c, 11) + INT64_C(3152)) + 8));
  /* 127168: ldr q5, [x12, #0xd40] */
  arc_q_w(c, 5, arc_ld64((ARC_X_R(c, 12) + INT64_C(3392))), arc_ld64((ARC_X_R(c, 12) + INT64_C(3392)) + 8));
  /* 12716c: ldr q6, [x10, #0xb70] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 10) + INT64_C(2928))), arc_ld64((ARC_X_R(c, 10) + INT64_C(2928)) + 8));
  /* 127170: add x0, x1, x9 */
  ARC_X_W(c, 0, (ARC_X_R(c, 1) + ARC_X_R(c, 9)));
  /* 127174: add x10, x1, #0x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 1) + UINT64_C(16)));
  /* 127178: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
L_12717c:;
  /* 12717c: ldp q7, q16, [x10, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 10) + INT64_C(-16));
    arc_q_w(c, 7, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 16, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 127180: subs x11, x11, #0x20 */
  ARC_X_W(c, 11, arc_sub64(c, ARC_X_R(c, 11), UINT64_C(32)));
  /* 127184: tbl v17.16b, {v7.16b}, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 7, 1, (c)->q[1].u8[0]);
    _t.u8[1] = arc_tbl(c, 7, 1, (c)->q[1].u8[1]);
    _t.u8[2] = arc_tbl(c, 7, 1, (c)->q[1].u8[2]);
    _t.u8[3] = arc_tbl(c, 7, 1, (c)->q[1].u8[3]);
    _t.u8[4] = arc_tbl(c, 7, 1, (c)->q[1].u8[4]);
    _t.u8[5] = arc_tbl(c, 7, 1, (c)->q[1].u8[5]);
    _t.u8[6] = arc_tbl(c, 7, 1, (c)->q[1].u8[6]);
    _t.u8[7] = arc_tbl(c, 7, 1, (c)->q[1].u8[7]);
    _t.u8[8] = arc_tbl(c, 7, 1, (c)->q[1].u8[8]);
    _t.u8[9] = arc_tbl(c, 7, 1, (c)->q[1].u8[9]);
    _t.u8[10] = arc_tbl(c, 7, 1, (c)->q[1].u8[10]);
    _t.u8[11] = arc_tbl(c, 7, 1, (c)->q[1].u8[11]);
    _t.u8[12] = arc_tbl(c, 7, 1, (c)->q[1].u8[12]);
    _t.u8[13] = arc_tbl(c, 7, 1, (c)->q[1].u8[13]);
    _t.u8[14] = arc_tbl(c, 7, 1, (c)->q[1].u8[14]);
    _t.u8[15] = arc_tbl(c, 7, 1, (c)->q[1].u8[15]);
    (c)->q[17] = _t; }
  /* 127188: tbl v18.16b, {v7.16b}, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 7, 1, (c)->q[4].u8[0]);
    _t.u8[1] = arc_tbl(c, 7, 1, (c)->q[4].u8[1]);
    _t.u8[2] = arc_tbl(c, 7, 1, (c)->q[4].u8[2]);
    _t.u8[3] = arc_tbl(c, 7, 1, (c)->q[4].u8[3]);
    _t.u8[4] = arc_tbl(c, 7, 1, (c)->q[4].u8[4]);
    _t.u8[5] = arc_tbl(c, 7, 1, (c)->q[4].u8[5]);
    _t.u8[6] = arc_tbl(c, 7, 1, (c)->q[4].u8[6]);
    _t.u8[7] = arc_tbl(c, 7, 1, (c)->q[4].u8[7]);
    _t.u8[8] = arc_tbl(c, 7, 1, (c)->q[4].u8[8]);
    _t.u8[9] = arc_tbl(c, 7, 1, (c)->q[4].u8[9]);
    _t.u8[10] = arc_tbl(c, 7, 1, (c)->q[4].u8[10]);
    _t.u8[11] = arc_tbl(c, 7, 1, (c)->q[4].u8[11]);
    _t.u8[12] = arc_tbl(c, 7, 1, (c)->q[4].u8[12]);
    _t.u8[13] = arc_tbl(c, 7, 1, (c)->q[4].u8[13]);
    _t.u8[14] = arc_tbl(c, 7, 1, (c)->q[4].u8[14]);
    _t.u8[15] = arc_tbl(c, 7, 1, (c)->q[4].u8[15]);
    (c)->q[18] = _t; }
  /* 12718c: tbl v19.16b, {v7.16b}, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 7, 1, (c)->q[5].u8[0]);
    _t.u8[1] = arc_tbl(c, 7, 1, (c)->q[5].u8[1]);
    _t.u8[2] = arc_tbl(c, 7, 1, (c)->q[5].u8[2]);
    _t.u8[3] = arc_tbl(c, 7, 1, (c)->q[5].u8[3]);
    _t.u8[4] = arc_tbl(c, 7, 1, (c)->q[5].u8[4]);
    _t.u8[5] = arc_tbl(c, 7, 1, (c)->q[5].u8[5]);
    _t.u8[6] = arc_tbl(c, 7, 1, (c)->q[5].u8[6]);
    _t.u8[7] = arc_tbl(c, 7, 1, (c)->q[5].u8[7]);
    _t.u8[8] = arc_tbl(c, 7, 1, (c)->q[5].u8[8]);
    _t.u8[9] = arc_tbl(c, 7, 1, (c)->q[5].u8[9]);
    _t.u8[10] = arc_tbl(c, 7, 1, (c)->q[5].u8[10]);
    _t.u8[11] = arc_tbl(c, 7, 1, (c)->q[5].u8[11]);
    _t.u8[12] = arc_tbl(c, 7, 1, (c)->q[5].u8[12]);
    _t.u8[13] = arc_tbl(c, 7, 1, (c)->q[5].u8[13]);
    _t.u8[14] = arc_tbl(c, 7, 1, (c)->q[5].u8[14]);
    _t.u8[15] = arc_tbl(c, 7, 1, (c)->q[5].u8[15]);
    (c)->q[19] = _t; }
  /* 127190: tbl v20.16b, {v7.16b}, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 7, 1, (c)->q[6].u8[0]);
    _t.u8[1] = arc_tbl(c, 7, 1, (c)->q[6].u8[1]);
    _t.u8[2] = arc_tbl(c, 7, 1, (c)->q[6].u8[2]);
    _t.u8[3] = arc_tbl(c, 7, 1, (c)->q[6].u8[3]);
    _t.u8[4] = arc_tbl(c, 7, 1, (c)->q[6].u8[4]);
    _t.u8[5] = arc_tbl(c, 7, 1, (c)->q[6].u8[5]);
    _t.u8[6] = arc_tbl(c, 7, 1, (c)->q[6].u8[6]);
    _t.u8[7] = arc_tbl(c, 7, 1, (c)->q[6].u8[7]);
    _t.u8[8] = arc_tbl(c, 7, 1, (c)->q[6].u8[8]);
    _t.u8[9] = arc_tbl(c, 7, 1, (c)->q[6].u8[9]);
    _t.u8[10] = arc_tbl(c, 7, 1, (c)->q[6].u8[10]);
    _t.u8[11] = arc_tbl(c, 7, 1, (c)->q[6].u8[11]);
    _t.u8[12] = arc_tbl(c, 7, 1, (c)->q[6].u8[12]);
    _t.u8[13] = arc_tbl(c, 7, 1, (c)->q[6].u8[13]);
    _t.u8[14] = arc_tbl(c, 7, 1, (c)->q[6].u8[14]);
    _t.u8[15] = arc_tbl(c, 7, 1, (c)->q[6].u8[15]);
    (c)->q[20] = _t; }
  /* 127194: tbl v21.16b, {v16.16b}, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 16, 1, (c)->q[1].u8[0]);
    _t.u8[1] = arc_tbl(c, 16, 1, (c)->q[1].u8[1]);
    _t.u8[2] = arc_tbl(c, 16, 1, (c)->q[1].u8[2]);
    _t.u8[3] = arc_tbl(c, 16, 1, (c)->q[1].u8[3]);
    _t.u8[4] = arc_tbl(c, 16, 1, (c)->q[1].u8[4]);
    _t.u8[5] = arc_tbl(c, 16, 1, (c)->q[1].u8[5]);
    _t.u8[6] = arc_tbl(c, 16, 1, (c)->q[1].u8[6]);
    _t.u8[7] = arc_tbl(c, 16, 1, (c)->q[1].u8[7]);
    _t.u8[8] = arc_tbl(c, 16, 1, (c)->q[1].u8[8]);
    _t.u8[9] = arc_tbl(c, 16, 1, (c)->q[1].u8[9]);
    _t.u8[10] = arc_tbl(c, 16, 1, (c)->q[1].u8[10]);
    _t.u8[11] = arc_tbl(c, 16, 1, (c)->q[1].u8[11]);
    _t.u8[12] = arc_tbl(c, 16, 1, (c)->q[1].u8[12]);
    _t.u8[13] = arc_tbl(c, 16, 1, (c)->q[1].u8[13]);
    _t.u8[14] = arc_tbl(c, 16, 1, (c)->q[1].u8[14]);
    _t.u8[15] = arc_tbl(c, 16, 1, (c)->q[1].u8[15]);
    (c)->q[21] = _t; }
  /* 127198: tbl v22.16b, {v16.16b}, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 16, 1, (c)->q[4].u8[0]);
    _t.u8[1] = arc_tbl(c, 16, 1, (c)->q[4].u8[1]);
    _t.u8[2] = arc_tbl(c, 16, 1, (c)->q[4].u8[2]);
    _t.u8[3] = arc_tbl(c, 16, 1, (c)->q[4].u8[3]);
    _t.u8[4] = arc_tbl(c, 16, 1, (c)->q[4].u8[4]);
    _t.u8[5] = arc_tbl(c, 16, 1, (c)->q[4].u8[5]);
    _t.u8[6] = arc_tbl(c, 16, 1, (c)->q[4].u8[6]);
    _t.u8[7] = arc_tbl(c, 16, 1, (c)->q[4].u8[7]);
    _t.u8[8] = arc_tbl(c, 16, 1, (c)->q[4].u8[8]);
    _t.u8[9] = arc_tbl(c, 16, 1, (c)->q[4].u8[9]);
    _t.u8[10] = arc_tbl(c, 16, 1, (c)->q[4].u8[10]);
    _t.u8[11] = arc_tbl(c, 16, 1, (c)->q[4].u8[11]);
    _t.u8[12] = arc_tbl(c, 16, 1, (c)->q[4].u8[12]);
    _t.u8[13] = arc_tbl(c, 16, 1, (c)->q[4].u8[13]);
    _t.u8[14] = arc_tbl(c, 16, 1, (c)->q[4].u8[14]);
    _t.u8[15] = arc_tbl(c, 16, 1, (c)->q[4].u8[15]);
    (c)->q[22] = _t; }
  /* 12719c: tbl v23.16b, {v16.16b}, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 16, 1, (c)->q[5].u8[0]);
    _t.u8[1] = arc_tbl(c, 16, 1, (c)->q[5].u8[1]);
    _t.u8[2] = arc_tbl(c, 16, 1, (c)->q[5].u8[2]);
    _t.u8[3] = arc_tbl(c, 16, 1, (c)->q[5].u8[3]);
    _t.u8[4] = arc_tbl(c, 16, 1, (c)->q[5].u8[4]);
    _t.u8[5] = arc_tbl(c, 16, 1, (c)->q[5].u8[5]);
    _t.u8[6] = arc_tbl(c, 16, 1, (c)->q[5].u8[6]);
    _t.u8[7] = arc_tbl(c, 16, 1, (c)->q[5].u8[7]);
    _t.u8[8] = arc_tbl(c, 16, 1, (c)->q[5].u8[8]);
    _t.u8[9] = arc_tbl(c, 16, 1, (c)->q[5].u8[9]);
    _t.u8[10] = arc_tbl(c, 16, 1, (c)->q[5].u8[10]);
    _t.u8[11] = arc_tbl(c, 16, 1, (c)->q[5].u8[11]);
    _t.u8[12] = arc_tbl(c, 16, 1, (c)->q[5].u8[12]);
    _t.u8[13] = arc_tbl(c, 16, 1, (c)->q[5].u8[13]);
    _t.u8[14] = arc_tbl(c, 16, 1, (c)->q[5].u8[14]);
    _t.u8[15] = arc_tbl(c, 16, 1, (c)->q[5].u8[15]);
    (c)->q[23] = _t; }
  /* 1271a0: tbl v24.16b, {v16.16b}, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 16, 1, (c)->q[6].u8[0]);
    _t.u8[1] = arc_tbl(c, 16, 1, (c)->q[6].u8[1]);
    _t.u8[2] = arc_tbl(c, 16, 1, (c)->q[6].u8[2]);
    _t.u8[3] = arc_tbl(c, 16, 1, (c)->q[6].u8[3]);
    _t.u8[4] = arc_tbl(c, 16, 1, (c)->q[6].u8[4]);
    _t.u8[5] = arc_tbl(c, 16, 1, (c)->q[6].u8[5]);
    _t.u8[6] = arc_tbl(c, 16, 1, (c)->q[6].u8[6]);
    _t.u8[7] = arc_tbl(c, 16, 1, (c)->q[6].u8[7]);
    _t.u8[8] = arc_tbl(c, 16, 1, (c)->q[6].u8[8]);
    _t.u8[9] = arc_tbl(c, 16, 1, (c)->q[6].u8[9]);
    _t.u8[10] = arc_tbl(c, 16, 1, (c)->q[6].u8[10]);
    _t.u8[11] = arc_tbl(c, 16, 1, (c)->q[6].u8[11]);
    _t.u8[12] = arc_tbl(c, 16, 1, (c)->q[6].u8[12]);
    _t.u8[13] = arc_tbl(c, 16, 1, (c)->q[6].u8[13]);
    _t.u8[14] = arc_tbl(c, 16, 1, (c)->q[6].u8[14]);
    _t.u8[15] = arc_tbl(c, 16, 1, (c)->q[6].u8[15]);
    (c)->q[24] = _t; }
  /* 1271a4: add v18.4s, v18.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[18].u32[0] + (c)->q[2].u32[0];
    _t.u32[1] = (c)->q[18].u32[1] + (c)->q[2].u32[1];
    _t.u32[2] = (c)->q[18].u32[2] + (c)->q[2].u32[2];
    _t.u32[3] = (c)->q[18].u32[3] + (c)->q[2].u32[3];
    (c)->q[18] = _t; }
  /* 1271a8: add v17.4s, v17.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[17].u32[0] + (c)->q[2].u32[0];
    _t.u32[1] = (c)->q[17].u32[1] + (c)->q[2].u32[1];
    _t.u32[2] = (c)->q[17].u32[2] + (c)->q[2].u32[2];
    _t.u32[3] = (c)->q[17].u32[3] + (c)->q[2].u32[3];
    (c)->q[17] = _t; }
  /* 1271ac: add v19.4s, v19.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[19].u32[0] + (c)->q[2].u32[0];
    _t.u32[1] = (c)->q[19].u32[1] + (c)->q[2].u32[1];
    _t.u32[2] = (c)->q[19].u32[2] + (c)->q[2].u32[2];
    _t.u32[3] = (c)->q[19].u32[3] + (c)->q[2].u32[3];
    (c)->q[19] = _t; }
  /* 1271b0: add v20.4s, v20.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[20].u32[0] + (c)->q[2].u32[0];
    _t.u32[1] = (c)->q[20].u32[1] + (c)->q[2].u32[1];
    _t.u32[2] = (c)->q[20].u32[2] + (c)->q[2].u32[2];
    _t.u32[3] = (c)->q[20].u32[3] + (c)->q[2].u32[3];
    (c)->q[20] = _t; }
  /* 1271b4: add v21.4s, v21.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[21].u32[0] + (c)->q[2].u32[0];
    _t.u32[1] = (c)->q[21].u32[1] + (c)->q[2].u32[1];
    _t.u32[2] = (c)->q[21].u32[2] + (c)->q[2].u32[2];
    _t.u32[3] = (c)->q[21].u32[3] + (c)->q[2].u32[3];
    (c)->q[21] = _t; }
  /* 1271b8: add v22.4s, v22.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[22].u32[0] + (c)->q[2].u32[0];
    _t.u32[1] = (c)->q[22].u32[1] + (c)->q[2].u32[1];
    _t.u32[2] = (c)->q[22].u32[2] + (c)->q[2].u32[2];
    _t.u32[3] = (c)->q[22].u32[3] + (c)->q[2].u32[3];
    (c)->q[22] = _t; }
  /* 1271bc: add v24.4s, v24.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[24].u32[0] + (c)->q[2].u32[0];
    _t.u32[1] = (c)->q[24].u32[1] + (c)->q[2].u32[1];
    _t.u32[2] = (c)->q[24].u32[2] + (c)->q[2].u32[2];
    _t.u32[3] = (c)->q[24].u32[3] + (c)->q[2].u32[3];
    (c)->q[24] = _t; }
  /* 1271c0: add v23.4s, v23.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[23].u32[0] + (c)->q[2].u32[0];
    _t.u32[1] = (c)->q[23].u32[1] + (c)->q[2].u32[1];
    _t.u32[2] = (c)->q[23].u32[2] + (c)->q[2].u32[2];
    _t.u32[3] = (c)->q[23].u32[3] + (c)->q[2].u32[3];
    (c)->q[23] = _t; }
  /* 1271c4: cmhi v17.4s, v3.4s, v17.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[3].u32[0] > (c)->q[17].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[3].u32[1] > (c)->q[17].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[3].u32[2] > (c)->q[17].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[3].u32[3] > (c)->q[17].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[17] = _t; }
  /* 1271c8: cmhi v18.4s, v3.4s, v18.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[3].u32[0] > (c)->q[18].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[3].u32[1] > (c)->q[18].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[3].u32[2] > (c)->q[18].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[3].u32[3] > (c)->q[18].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[18] = _t; }
  /* 1271cc: cmhi v19.4s, v3.4s, v19.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[3].u32[0] > (c)->q[19].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[3].u32[1] > (c)->q[19].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[3].u32[2] > (c)->q[19].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[3].u32[3] > (c)->q[19].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[19] = _t; }
  /* 1271d0: cmhi v20.4s, v3.4s, v20.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[3].u32[0] > (c)->q[20].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[3].u32[1] > (c)->q[20].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[3].u32[2] > (c)->q[20].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[3].u32[3] > (c)->q[20].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[20] = _t; }
  /* 1271d4: cmhi v21.4s, v3.4s, v21.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[3].u32[0] > (c)->q[21].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[3].u32[1] > (c)->q[21].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[3].u32[2] > (c)->q[21].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[3].u32[3] > (c)->q[21].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[21] = _t; }
  /* 1271d8: cmhi v22.4s, v3.4s, v22.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[3].u32[0] > (c)->q[22].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[3].u32[1] > (c)->q[22].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[3].u32[2] > (c)->q[22].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[3].u32[3] > (c)->q[22].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[22] = _t; }
  /* 1271dc: cmhi v23.4s, v3.4s, v23.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[3].u32[0] > (c)->q[23].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[3].u32[1] > (c)->q[23].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[3].u32[2] > (c)->q[23].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[3].u32[3] > (c)->q[23].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[23] = _t; }
  /* 1271e0: cmhi v24.4s, v3.4s, v24.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[3].u32[0] > (c)->q[24].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[3].u32[1] > (c)->q[24].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[3].u32[2] > (c)->q[24].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[3].u32[3] > (c)->q[24].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[24] = _t; }
  /* 1271e4: uzp1 v17.8h, v18.8h, v17.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (c)->q[18].u16[0];
    _t.u16[1] = (c)->q[18].u16[2];
    _t.u16[2] = (c)->q[18].u16[4];
    _t.u16[3] = (c)->q[18].u16[6];
    _t.u16[4] = (c)->q[17].u16[0];
    _t.u16[5] = (c)->q[17].u16[2];
    _t.u16[6] = (c)->q[17].u16[4];
    _t.u16[7] = (c)->q[17].u16[6];
    (c)->q[17] = _t; }
  /* 1271e8: uzp1 v18.8h, v20.8h, v19.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (c)->q[20].u16[0];
    _t.u16[1] = (c)->q[20].u16[2];
    _t.u16[2] = (c)->q[20].u16[4];
    _t.u16[3] = (c)->q[20].u16[6];
    _t.u16[4] = (c)->q[19].u16[0];
    _t.u16[5] = (c)->q[19].u16[2];
    _t.u16[6] = (c)->q[19].u16[4];
    _t.u16[7] = (c)->q[19].u16[6];
    (c)->q[18] = _t; }
  /* 1271ec: uzp1 v19.8h, v22.8h, v21.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (c)->q[22].u16[0];
    _t.u16[1] = (c)->q[22].u16[2];
    _t.u16[2] = (c)->q[22].u16[4];
    _t.u16[3] = (c)->q[22].u16[6];
    _t.u16[4] = (c)->q[21].u16[0];
    _t.u16[5] = (c)->q[21].u16[2];
    _t.u16[6] = (c)->q[21].u16[4];
    _t.u16[7] = (c)->q[21].u16[6];
    (c)->q[19] = _t; }
  /* 1271f0: uzp1 v20.8h, v24.8h, v23.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (c)->q[24].u16[0];
    _t.u16[1] = (c)->q[24].u16[2];
    _t.u16[2] = (c)->q[24].u16[4];
    _t.u16[3] = (c)->q[24].u16[6];
    _t.u16[4] = (c)->q[23].u16[0];
    _t.u16[5] = (c)->q[23].u16[2];
    _t.u16[6] = (c)->q[23].u16[4];
    _t.u16[7] = (c)->q[23].u16[6];
    (c)->q[20] = _t; }
  /* 1271f4: uzp1 v17.16b, v18.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[18].u8[2];
    _t.u8[2] = (c)->q[18].u8[4];
    _t.u8[3] = (c)->q[18].u8[6];
    _t.u8[4] = (c)->q[18].u8[8];
    _t.u8[5] = (c)->q[18].u8[10];
    _t.u8[6] = (c)->q[18].u8[12];
    _t.u8[7] = (c)->q[18].u8[14];
    _t.u8[8] = (c)->q[17].u8[0];
    _t.u8[9] = (c)->q[17].u8[2];
    _t.u8[10] = (c)->q[17].u8[4];
    _t.u8[11] = (c)->q[17].u8[6];
    _t.u8[12] = (c)->q[17].u8[8];
    _t.u8[13] = (c)->q[17].u8[10];
    _t.u8[14] = (c)->q[17].u8[12];
    _t.u8[15] = (c)->q[17].u8[14];
    (c)->q[17] = _t; }
  /* 1271f8: eor v18.16b, v7.16b, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] ^ (c)->q[0].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] ^ (c)->q[0].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] ^ (c)->q[0].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] ^ (c)->q[0].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] ^ (c)->q[0].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] ^ (c)->q[0].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] ^ (c)->q[0].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] ^ (c)->q[0].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] ^ (c)->q[0].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] ^ (c)->q[0].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] ^ (c)->q[0].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] ^ (c)->q[0].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] ^ (c)->q[0].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] ^ (c)->q[0].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] ^ (c)->q[0].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] ^ (c)->q[0].u8[15];
    (c)->q[18] = _t; }
  /* 1271fc: uzp1 v19.16b, v20.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0];
    _t.u8[1] = (c)->q[20].u8[2];
    _t.u8[2] = (c)->q[20].u8[4];
    _t.u8[3] = (c)->q[20].u8[6];
    _t.u8[4] = (c)->q[20].u8[8];
    _t.u8[5] = (c)->q[20].u8[10];
    _t.u8[6] = (c)->q[20].u8[12];
    _t.u8[7] = (c)->q[20].u8[14];
    _t.u8[8] = (c)->q[19].u8[0];
    _t.u8[9] = (c)->q[19].u8[2];
    _t.u8[10] = (c)->q[19].u8[4];
    _t.u8[11] = (c)->q[19].u8[6];
    _t.u8[12] = (c)->q[19].u8[8];
    _t.u8[13] = (c)->q[19].u8[10];
    _t.u8[14] = (c)->q[19].u8[12];
    _t.u8[15] = (c)->q[19].u8[14];
    (c)->q[19] = _t; }
  /* 127200: eor v20.16b, v16.16b, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] ^ (c)->q[0].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] ^ (c)->q[0].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] ^ (c)->q[0].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] ^ (c)->q[0].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] ^ (c)->q[0].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] ^ (c)->q[0].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] ^ (c)->q[0].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] ^ (c)->q[0].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] ^ (c)->q[0].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] ^ (c)->q[0].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] ^ (c)->q[0].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] ^ (c)->q[0].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] ^ (c)->q[0].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] ^ (c)->q[0].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] ^ (c)->q[0].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] ^ (c)->q[0].u8[15];
    (c)->q[20] = _t; }
  /* 127204: bif v7.16b, v18.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[7].u8[0] ^ (((c)->q[18].u8[0] ^ (c)->q[7].u8[0]) & ~(c)->q[17].u8[0]));
    _t.u8[1] = ((c)->q[7].u8[1] ^ (((c)->q[18].u8[1] ^ (c)->q[7].u8[1]) & ~(c)->q[17].u8[1]));
    _t.u8[2] = ((c)->q[7].u8[2] ^ (((c)->q[18].u8[2] ^ (c)->q[7].u8[2]) & ~(c)->q[17].u8[2]));
    _t.u8[3] = ((c)->q[7].u8[3] ^ (((c)->q[18].u8[3] ^ (c)->q[7].u8[3]) & ~(c)->q[17].u8[3]));
    _t.u8[4] = ((c)->q[7].u8[4] ^ (((c)->q[18].u8[4] ^ (c)->q[7].u8[4]) & ~(c)->q[17].u8[4]));
    _t.u8[5] = ((c)->q[7].u8[5] ^ (((c)->q[18].u8[5] ^ (c)->q[7].u8[5]) & ~(c)->q[17].u8[5]));
    _t.u8[6] = ((c)->q[7].u8[6] ^ (((c)->q[18].u8[6] ^ (c)->q[7].u8[6]) & ~(c)->q[17].u8[6]));
    _t.u8[7] = ((c)->q[7].u8[7] ^ (((c)->q[18].u8[7] ^ (c)->q[7].u8[7]) & ~(c)->q[17].u8[7]));
    _t.u8[8] = ((c)->q[7].u8[8] ^ (((c)->q[18].u8[8] ^ (c)->q[7].u8[8]) & ~(c)->q[17].u8[8]));
    _t.u8[9] = ((c)->q[7].u8[9] ^ (((c)->q[18].u8[9] ^ (c)->q[7].u8[9]) & ~(c)->q[17].u8[9]));
    _t.u8[10] = ((c)->q[7].u8[10] ^ (((c)->q[18].u8[10] ^ (c)->q[7].u8[10]) & ~(c)->q[17].u8[10]));
    _t.u8[11] = ((c)->q[7].u8[11] ^ (((c)->q[18].u8[11] ^ (c)->q[7].u8[11]) & ~(c)->q[17].u8[11]));
    _t.u8[12] = ((c)->q[7].u8[12] ^ (((c)->q[18].u8[12] ^ (c)->q[7].u8[12]) & ~(c)->q[17].u8[12]));
    _t.u8[13] = ((c)->q[7].u8[13] ^ (((c)->q[18].u8[13] ^ (c)->q[7].u8[13]) & ~(c)->q[17].u8[13]));
    _t.u8[14] = ((c)->q[7].u8[14] ^ (((c)->q[18].u8[14] ^ (c)->q[7].u8[14]) & ~(c)->q[17].u8[14]));
    _t.u8[15] = ((c)->q[7].u8[15] ^ (((c)->q[18].u8[15] ^ (c)->q[7].u8[15]) & ~(c)->q[17].u8[15]));
    (c)->q[7] = _t; }
  /* 127208: bif v16.16b, v20.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[16].u8[0] ^ (((c)->q[20].u8[0] ^ (c)->q[16].u8[0]) & ~(c)->q[19].u8[0]));
    _t.u8[1] = ((c)->q[16].u8[1] ^ (((c)->q[20].u8[1] ^ (c)->q[16].u8[1]) & ~(c)->q[19].u8[1]));
    _t.u8[2] = ((c)->q[16].u8[2] ^ (((c)->q[20].u8[2] ^ (c)->q[16].u8[2]) & ~(c)->q[19].u8[2]));
    _t.u8[3] = ((c)->q[16].u8[3] ^ (((c)->q[20].u8[3] ^ (c)->q[16].u8[3]) & ~(c)->q[19].u8[3]));
    _t.u8[4] = ((c)->q[16].u8[4] ^ (((c)->q[20].u8[4] ^ (c)->q[16].u8[4]) & ~(c)->q[19].u8[4]));
    _t.u8[5] = ((c)->q[16].u8[5] ^ (((c)->q[20].u8[5] ^ (c)->q[16].u8[5]) & ~(c)->q[19].u8[5]));
    _t.u8[6] = ((c)->q[16].u8[6] ^ (((c)->q[20].u8[6] ^ (c)->q[16].u8[6]) & ~(c)->q[19].u8[6]));
    _t.u8[7] = ((c)->q[16].u8[7] ^ (((c)->q[20].u8[7] ^ (c)->q[16].u8[7]) & ~(c)->q[19].u8[7]));
    _t.u8[8] = ((c)->q[16].u8[8] ^ (((c)->q[20].u8[8] ^ (c)->q[16].u8[8]) & ~(c)->q[19].u8[8]));
    _t.u8[9] = ((c)->q[16].u8[9] ^ (((c)->q[20].u8[9] ^ (c)->q[16].u8[9]) & ~(c)->q[19].u8[9]));
    _t.u8[10] = ((c)->q[16].u8[10] ^ (((c)->q[20].u8[10] ^ (c)->q[16].u8[10]) & ~(c)->q[19].u8[10]));
    _t.u8[11] = ((c)->q[16].u8[11] ^ (((c)->q[20].u8[11] ^ (c)->q[16].u8[11]) & ~(c)->q[19].u8[11]));
    _t.u8[12] = ((c)->q[16].u8[12] ^ (((c)->q[20].u8[12] ^ (c)->q[16].u8[12]) & ~(c)->q[19].u8[12]));
    _t.u8[13] = ((c)->q[16].u8[13] ^ (((c)->q[20].u8[13] ^ (c)->q[16].u8[13]) & ~(c)->q[19].u8[13]));
    _t.u8[14] = ((c)->q[16].u8[14] ^ (((c)->q[20].u8[14] ^ (c)->q[16].u8[14]) & ~(c)->q[19].u8[14]));
    _t.u8[15] = ((c)->q[16].u8[15] ^ (((c)->q[20].u8[15] ^ (c)->q[16].u8[15]) & ~(c)->q[19].u8[15]));
    (c)->q[16] = _t; }
  /* 12720c: stp q7, q16, [x10, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 10) + INT64_C(-16));
    arc_st64(_pa, (c)->q[7].u64[0]);
    arc_st64(_pa + 8, (c)->q[7].u64[1]);
    arc_st64((_pa + 16), (c)->q[16].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[16].u64[1]);
  }
  /* 127210: add x10, x10, #0x20 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(32)));
  /* 127214: b.ne #0x12717c */
  if (ARC_COND(c, 1)) goto L_12717c;
  /* 127218: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 12721c: b.eq #0x127240 */
  if (ARC_COND(c, 0)) goto L_127240;
L_127220:;
  /* 127220: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* 127224: sub w9, w8, #0x7b */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) - UINT64_C(123)));
  /* 127228: eor w10, w8, #0x20 */
  ARC_W_W(c, 10, (ARC_W_R(c, 8) ^ UINT64_C(32)));
  /* 12722c: cmn w9, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 9), UINT64_C(26), 0);
  /* 127230: csel w8, w8, w10, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* 127234: strb w8, [x0], #1 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* 127238: cmp x0, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 2));
  /* 12723c: b.ne #0x127220 */
  if (ARC_COND(c, 1)) goto L_127220;
L_127240:;
  /* 127240: ret  */
  return;
}

void fn1_1297d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039146448));
  /* 1297d0: bti c */
  /* bti: no architectural effect here */
  /* 1297d4: sub x8, x1, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* 1297d8: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* 1297dc: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* 1297e0: b.lt #0x129820 */
  if (ARC_COND(c, 11)) goto L_129820;
  /* 1297e4: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* 1297e8: tbz w4, #2, #0x129820 */
  if (((ARC_W_R(c, 4)) >> 2 & 1) == 0) goto L_129820;
  /* 1297ec: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* 1297f0: cmp w8, #0xef */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(239));
  /* 1297f4: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* 1297f8: b.ne #0x129820 */
  if (ARC_COND(c, 1)) goto L_129820;
  /* 1297fc: ldrb w8, [x0, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(1))));
  /* 129800: cmp w8, #0xbb */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(187));
  /* 129804: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* 129808: b.ne #0x129820 */
  if (ARC_COND(c, 1)) goto L_129820;
  /* 12980c: ldrb w8, [x0, #2] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(2))));
  /* 129810: cmp w8, #0xbf */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(191));
  /* 129814: mov w8, #3 */
  ARC_W_W(c, 8, UINT64_C(3));
  /* 129818: csel x8, x8, xzr, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 31)));
  /* 12981c: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
L_129820:;
  /* 129820: cbz x2, #0x1299bc */
  if ((ARC_X_R(c, 2)) == 0) goto L_1299bc;
  /* 129824: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* 129828: b.hs #0x1299bc */
  if (ARC_COND(c, 2)) goto L_1299bc;
  /* 12982c: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
L_129830:;
  /* 129830: ldrsb w10, [x8] */
  ARC_W_W(c, 10, ((int32_t)(int8_t)arc_ld8(ARC_X_R(c, 8))));
  /* 129834: tbnz w10, #0x1f, #0x12984c */
  if (((ARC_W_R(c, 10)) >> 31 & 1) != 0) goto L_12984c;
  /* 129838: and x10, x10, #0xff */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) & UINT64_C(255)));
  /* 12983c: cmp x3, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 3), ARC_X_R(c, 10));
  /* 129840: b.lo #0x1299bc */
  if (ARC_COND(c, 3)) goto L_1299bc;
  /* 129844: mov w10, #1 */
  ARC_W_W(c, 10, UINT64_C(1));
  /* 129848: b #0x1299a4 */
  goto L_1299a4;
L_12984c:;
  /* 12984c: and w10, w10, #0xff */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) & UINT64_C(255)));
  /* 129850: cmp w10, #0xc2 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(194));
  /* 129854: b.lo #0x1299bc */
  if (ARC_COND(c, 3)) goto L_1299bc;
  /* 129858: cmp w10, #0xdf */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(223));
  /* 12985c: b.hi #0x129894 */
  if (ARC_COND(c, 8)) goto L_129894;
  /* 129860: sub x11, x1, x8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 1) - ARC_X_R(c, 8)));
  /* 129864: cmp x11, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(2));
  /* 129868: b.lt #0x1299bc */
  if (ARC_COND(c, 11)) goto L_1299bc;
  /* 12986c: ldrb w11, [x8, #1] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 8) + INT64_C(1))));
  /* 129870: and w12, w11, #0xc0 */
  ARC_W_W(c, 12, (ARC_W_R(c, 11) & UINT64_C(192)));
  /* 129874: cmp w12, #0x80 */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(128));
  /* 129878: b.ne #0x1299bc */
  if (ARC_COND(c, 1)) goto L_1299bc;
  /* 12987c: and w11, w11, #0x3f */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) & UINT64_C(63)));
  /* 129880: bfi w11, w10, #6, #5 */
  ARC_W_W(c, 11, (((uint32_t)(ARC_W_R(c, 11)) & UINT64_C(4294965311)) | ((((uint32_t)(ARC_W_R(c, 10))) & UINT64_C(31)) << 6)));
  /* 129884: cmp x3, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 3), ARC_X_R(c, 11));
  /* 129888: b.lo #0x1299bc */
  if (ARC_COND(c, 3)) goto L_1299bc;
  /* 12988c: mov w10, #2 */
  ARC_W_W(c, 10, UINT64_C(2));
  /* 129890: b #0x1299a4 */
  goto L_1299a4;
L_129894:;
  /* 129894: cmp w10, #0xef */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(239));
  /* 129898: b.hi #0x1298d0 */
  if (ARC_COND(c, 8)) goto L_1298d0;
  /* 12989c: sub x11, x1, x8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 1) - ARC_X_R(c, 8)));
  /* 1298a0: cmp x11, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(3));
  /* 1298a4: b.lt #0x1299bc */
  if (ARC_COND(c, 11)) goto L_1299bc;
  /* 1298a8: ldrb w12, [x8, #1] */
  ARC_W_W(c, 12, arc_ld8((ARC_X_R(c, 8) + INT64_C(1))));
  /* 1298ac: ldrb w11, [x8, #2] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 8) + INT64_C(2))));
  /* 1298b0: cmp w10, #0xed */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(237));
  /* 1298b4: b.eq #0x129910 */
  if (ARC_COND(c, 0)) goto L_129910;
  /* 1298b8: cmp w10, #0xe0 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(224));
  /* 1298bc: b.ne #0x129920 */
  if (ARC_COND(c, 1)) goto L_129920;
  /* 1298c0: and w13, w12, #0xe0 */
  ARC_W_W(c, 13, (ARC_W_R(c, 12) & UINT64_C(224)));
  /* 1298c4: cmp w13, #0xa0 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(160));
  /* 1298c8: b.eq #0x12992c */
  if (ARC_COND(c, 0)) goto L_12992c;
  /* 1298cc: b #0x1299bc */
  goto L_1299bc;
L_1298d0:;
  /* 1298d0: cmp w10, #0xf4 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(244));
  /* 1298d4: b.hi #0x1299bc */
  if (ARC_COND(c, 8)) goto L_1299bc;
  /* 1298d8: sub x11, x1, x8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 1) - ARC_X_R(c, 8)));
  /* 1298dc: cmp x11, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(4));
  /* 1298e0: b.lt #0x1299bc */
  if (ARC_COND(c, 11)) goto L_1299bc;
  /* 1298e4: ldrb w12, [x8, #1] */
  ARC_W_W(c, 12, arc_ld8((ARC_X_R(c, 8) + INT64_C(1))));
  /* 1298e8: ldrb w11, [x8, #2] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 8) + INT64_C(2))));
  /* 1298ec: cmp w10, #0xf4 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(244));
  /* 1298f0: ldrb w13, [x8, #3] */
  ARC_W_W(c, 13, arc_ld8((ARC_X_R(c, 8) + INT64_C(3))));
  /* 1298f4: b.eq #0x129954 */
  if (ARC_COND(c, 0)) goto L_129954;
  /* 1298f8: cmp w10, #0xf0 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(240));
  /* 1298fc: b.ne #0x129964 */
  if (ARC_COND(c, 1)) goto L_129964;
  /* 129900: sub w14, w12, #0x90 */
  ARC_W_W(c, 14, (ARC_W_R(c, 12) - UINT64_C(144)));
  /* 129904: cmp w14, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 14), UINT64_C(48));
  /* 129908: b.lo #0x129970 */
  if (ARC_COND(c, 3)) goto L_129970;
  /* 12990c: b #0x1299bc */
  goto L_1299bc;
L_129910:;
  /* 129910: sxtb w13, w12 */
  ARC_W_W(c, 13, ((int32_t)(int8_t)(ARC_W_R(c, 12))));
  /* 129914: cmn w13, #0x60 */
  (void)arc_add32(c, ARC_W_R(c, 13), UINT64_C(96), 0);
  /* 129918: b.lt #0x12992c */
  if (ARC_COND(c, 11)) goto L_12992c;
  /* 12991c: b #0x1299bc */
  goto L_1299bc;
L_129920:;
  /* 129920: sxtb w13, w12 */
  ARC_W_W(c, 13, ((int32_t)(int8_t)(ARC_W_R(c, 12))));
  /* 129924: cmn w13, #0x41 */
  (void)arc_add32(c, ARC_W_R(c, 13), UINT64_C(65), 0);
  /* 129928: b.gt #0x1299bc */
  if (ARC_COND(c, 12)) goto L_1299bc;
L_12992c:;
  /* 12992c: and w13, w11, #0xc0 */
  ARC_W_W(c, 13, (ARC_W_R(c, 11) & UINT64_C(192)));
  /* 129930: cmp w13, #0x80 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(128));
  /* 129934: b.ne #0x1299bc */
  if (ARC_COND(c, 1)) goto L_1299bc;
  /* 129938: ubfiz w10, w10, #0xc, #4 */
  ARC_W_W(c, 10, ((uint32_t)((((uint32_t)(ARC_W_R(c, 10))) & UINT64_C(15))) << 12));
  /* 12993c: bfi w10, w12, #6, #6 */
  ARC_W_W(c, 10, (((uint32_t)(ARC_W_R(c, 10)) & UINT64_C(4294963263)) | ((((uint32_t)(ARC_W_R(c, 12))) & UINT64_C(63)) << 6)));
  /* 129940: bfxil w10, w11, #0, #6 */
  ARC_W_W(c, 10, (((uint32_t)(ARC_W_R(c, 10)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 11))) >> 0) & UINT64_C(63))));
  /* 129944: cmp x3, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 3), ARC_X_R(c, 10));
  /* 129948: b.lo #0x1299bc */
  if (ARC_COND(c, 3)) goto L_1299bc;
  /* 12994c: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 129950: b #0x1299a4 */
  goto L_1299a4;
L_129954:;
  /* 129954: sxtb w14, w12 */
  ARC_W_W(c, 14, ((int32_t)(int8_t)(ARC_W_R(c, 12))));
  /* 129958: cmn w14, #0x70 */
  (void)arc_add32(c, ARC_W_R(c, 14), UINT64_C(112), 0);
  /* 12995c: b.lt #0x129970 */
  if (ARC_COND(c, 11)) goto L_129970;
  /* 129960: b #0x1299bc */
  goto L_1299bc;
L_129964:;
  /* 129964: sxtb w14, w12 */
  ARC_W_W(c, 14, ((int32_t)(int8_t)(ARC_W_R(c, 12))));
  /* 129968: cmn w14, #0x41 */
  (void)arc_add32(c, ARC_W_R(c, 14), UINT64_C(65), 0);
  /* 12996c: b.gt #0x1299bc */
  if (ARC_COND(c, 12)) goto L_1299bc;
L_129970:;
  /* 129970: and w14, w11, #0xc0 */
  ARC_W_W(c, 14, (ARC_W_R(c, 11) & UINT64_C(192)));
  /* 129974: cmp w14, #0x80 */
  (void)arc_sub32(c, ARC_W_R(c, 14), UINT64_C(128));
  /* 129978: b.ne #0x1299bc */
  if (ARC_COND(c, 1)) goto L_1299bc;
  /* 12997c: and w14, w13, #0xc0 */
  ARC_W_W(c, 14, (ARC_W_R(c, 13) & UINT64_C(192)));
  /* 129980: cmp w14, #0x80 */
  (void)arc_sub32(c, ARC_W_R(c, 14), UINT64_C(128));
  /* 129984: b.ne #0x1299bc */
  if (ARC_COND(c, 1)) goto L_1299bc;
  /* 129988: ubfiz w10, w10, #0x12, #3 */
  ARC_W_W(c, 10, ((uint32_t)((((uint32_t)(ARC_W_R(c, 10))) & UINT64_C(7))) << 18));
  /* 12998c: bfi w10, w12, #0xc, #6 */
  ARC_W_W(c, 10, (((uint32_t)(ARC_W_R(c, 10)) & UINT64_C(4294709247)) | ((((uint32_t)(ARC_W_R(c, 12))) & UINT64_C(63)) << 12)));
  /* 129990: bfi w10, w11, #6, #6 */
  ARC_W_W(c, 10, (((uint32_t)(ARC_W_R(c, 10)) & UINT64_C(4294963263)) | ((((uint32_t)(ARC_W_R(c, 11))) & UINT64_C(63)) << 6)));
  /* 129994: bfxil w10, w13, #0, #6 */
  ARC_W_W(c, 10, (((uint32_t)(ARC_W_R(c, 10)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 13))) >> 0) & UINT64_C(63))));
  /* 129998: cmp x3, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 3), ARC_X_R(c, 10));
  /* 12999c: b.lo #0x1299bc */
  if (ARC_COND(c, 3)) goto L_1299bc;
  /* 1299a0: mov w10, #4 */
  ARC_W_W(c, 10, UINT64_C(4));
L_1299a4:;
  /* 1299a4: add x8, x8, x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 10)));
  /* 1299a8: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* 1299ac: b.hs #0x1299bc */
  if (ARC_COND(c, 2)) goto L_1299bc;
  /* 1299b0: cmp x9, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 2));
  /* 1299b4: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 1299b8: b.lo #0x129830 */
  if (ARC_COND(c, 3)) goto L_129830;
L_1299bc:;
  /* 1299bc: sub w0, w8, w0 */
  ARC_W_W(c, 0, (ARC_W_R(c, 8) - ARC_W_R(c, 0)));
  /* 1299c0: ret  */
  return;
}

void fn1_12aecc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039152332));
  /* 12aecc: bti c */
  /* bti: no architectural effect here */
  /* 12aed0: sub x8, x3, x2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) - ARC_X_R(c, 2)));
  /* 12aed4: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* 12aed8: mov x8, x2 */
  ARC_X_W(c, 8, ARC_X_R(c, 2));
  /* 12aedc: b.lt #0x12af0c */
  if (ARC_COND(c, 11)) goto L_12af0c;
  /* 12aee0: ldr w9, [x0, #0x18] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12aee4: mov x8, x2 */
  ARC_X_W(c, 8, ARC_X_R(c, 2));
  /* 12aee8: tbz w9, #2, #0x12af0c */
  if (((ARC_W_R(c, 9)) >> 2 & 1) == 0) goto L_12af0c;
  /* 12aeec: ldrb w8, [x2] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 2)));
  /* 12aef0: cmp w8, #0xfe */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(254));
  /* 12aef4: mov x8, x2 */
  ARC_X_W(c, 8, ARC_X_R(c, 2));
  /* 12aef8: b.ne #0x12af0c */
  if (ARC_COND(c, 1)) goto L_12af0c;
  /* 12aefc: ldrb w8, [x2, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 2) + INT64_C(1))));
  /* 12af00: cmp w8, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(255));
  /* 12af04: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 12af08: add x8, x2, w8, uxtw #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 2) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 1)));
L_12af0c:;
  /* 12af0c: cbz x4, #0x12afb8 */
  if ((ARC_X_R(c, 4)) == 0) goto L_12afb8;
  /* 12af10: sub x9, x3, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 3) - UINT64_C(1)));
  /* 12af14: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 12af18: b.hs #0x12afb8 */
  if (ARC_COND(c, 2)) goto L_12afb8;
  /* 12af1c: ldr x10, [x0, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 12af20: mov w11, #1 */
  ARC_W_W(c, 11, UINT64_C(1));
  /* 12af24: mov w12, #0xd800 */
  ARC_W_W(c, 12, UINT64_C(55296));
  /* 12af28: mov w13, #0xdc00 */
  ARC_W_W(c, 13, UINT64_C(56320));
L_12af2c:;
  /* 12af2c: ldrb w16, [x8] */
  ARC_W_W(c, 16, arc_ld8(ARC_X_R(c, 8)));
  /* 12af30: ldrb w14, [x8, #1] */
  ARC_W_W(c, 14, arc_ld8((ARC_X_R(c, 8) + INT64_C(1))));
  /* 12af34: lsl w15, w16, #8 */
  ARC_W_W(c, 15, ((uint32_t)(ARC_W_R(c, 16)) << ((UINT64_C(8)) & 31)));
  /* 12af38: bfi w14, w16, #8, #8 */
  ARC_W_W(c, 14, (((uint32_t)(ARC_W_R(c, 14)) & UINT64_C(4294902015)) | ((((uint32_t)(ARC_W_R(c, 16))) & UINT64_C(255)) << 8)));
  /* 12af3c: and w15, w15, #0xfc00 */
  ARC_W_W(c, 15, (ARC_W_R(c, 15) & UINT64_C(64512)));
  /* 12af40: cmp w15, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 12));
  /* 12af44: b.eq #0x12af6c */
  if (ARC_COND(c, 0)) goto L_12af6c;
  /* 12af48: cmp w15, w13 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 13));
  /* 12af4c: b.eq #0x12afb8 */
  if (ARC_COND(c, 0)) goto L_12afb8;
  /* 12af50: cmp x10, w14, uxtw */
  (void)arc_sub64(c, ARC_X_R(c, 10), ((uint64_t)(uint32_t)(ARC_W_R(c, 14))));
  /* 12af54: cset w14, hs */
  ARC_W_W(c, 14, (ARC_COND(c, 2) ? 1 : 0));
  /* 12af58: add x8, x8, w14, uxtw #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 14)))) << 1)));
  /* 12af5c: b.lo #0x12afb8 */
  if (ARC_COND(c, 3)) goto L_12afb8;
  /* 12af60: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 12af64: b.lo #0x12afac */
  if (ARC_COND(c, 3)) goto L_12afac;
  /* 12af68: b #0x12afb8 */
  goto L_12afb8;
L_12af6c:;
  /* 12af6c: sub x15, x3, x8 */
  ARC_X_W(c, 15, (ARC_X_R(c, 3) - ARC_X_R(c, 8)));
  /* 12af70: cmp x15, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(4));
  /* 12af74: b.lt #0x12afb8 */
  if (ARC_COND(c, 11)) goto L_12afb8;
  /* 12af78: ldrb w15, [x8, #2] */
  ARC_W_W(c, 15, arc_ld8((ARC_X_R(c, 8) + INT64_C(2))));
  /* 12af7c: and w16, w15, #0xfc */
  ARC_W_W(c, 16, (ARC_W_R(c, 15) & UINT64_C(252)));
  /* 12af80: cmp w16, #0xdc */
  (void)arc_sub32(c, ARC_W_R(c, 16), UINT64_C(220));
  /* 12af84: b.ne #0x12afb8 */
  if (ARC_COND(c, 1)) goto L_12afb8;
  /* 12af88: ldrb w16, [x8, #3] */
  ARC_W_W(c, 16, arc_ld8((ARC_X_R(c, 8) + INT64_C(3))));
  /* 12af8c: bfi w16, w15, #8, #2 */
  ARC_W_W(c, 16, (((uint32_t)(ARC_W_R(c, 16)) & UINT64_C(4294966527)) | ((((uint32_t)(ARC_W_R(c, 15))) & UINT64_C(3)) << 8)));
  /* 12af90: bfi w16, w14, #0xa, #0xa */
  ARC_W_W(c, 16, (((uint32_t)(ARC_W_R(c, 16)) & UINT64_C(4293919743)) | ((((uint32_t)(ARC_W_R(c, 14))) & UINT64_C(1023)) << 10)));
  /* 12af94: add w14, w16, #0x10, lsl #12 */
  ARC_W_W(c, 14, (ARC_W_R(c, 16) + UINT64_C(65536)));
  /* 12af98: cmp x10, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 14));
  /* 12af9c: b.lo #0x12afb8 */
  if (ARC_COND(c, 3)) goto L_12afb8;
  /* 12afa0: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 12afa4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 12afa8: b.hs #0x12afb8 */
  if (ARC_COND(c, 2)) goto L_12afb8;
L_12afac:;
  /* 12afac: cmp x11, x4 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 4));
  /* 12afb0: add x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(1)));
  /* 12afb4: b.lo #0x12af2c */
  if (ARC_COND(c, 3)) goto L_12af2c;
L_12afb8:;
  /* 12afb8: sub w0, w8, w2 */
  ARC_W_W(c, 0, (ARC_W_R(c, 8) - ARC_W_R(c, 2)));
  /* 12afbc: ret  */
  return;
}

void fn1_12c6f4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039158516));
  /* 12c6f4: bti c */
  /* bti: no architectural effect here */
  /* 12c6f8: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* 12c6fc: tbz w2, #0xb, #0x12c708 */
  if (((ARC_W_R(c, 2)) >> 11 & 1) == 0) goto L_12c708;
  /* 12c700: mov w9, #0x2b */
  ARC_W_W(c, 9, UINT64_C(43));
  /* 12c704: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
L_12c708:;
  /* 12c708: tbz w2, #0xa, #0x12c714 */
  if (((ARC_W_R(c, 2)) >> 10 & 1) == 0) goto L_12c714;
  /* 12c70c: mov w9, #0x23 */
  ARC_W_W(c, 9, UINT64_C(35));
  /* 12c710: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
L_12c714:;
  /* 12c714: mov w9, #0x104 */
  ARC_W_W(c, 9, UINT64_C(260));
  /* 12c718: and w9, w2, w9 */
  ARC_W_W(c, 9, (ARC_W_R(c, 2) & ARC_W_R(c, 9)));
  /* 12c71c: cmp w9, #0x104 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(260));
  /* 12c720: b.eq #0x12c72c */
  if (ARC_COND(c, 0)) goto L_12c72c;
  /* 12c724: mov w10, #0x2a2e */
  ARC_W_W(c, 10, UINT64_C(10798));
  /* 12c728: strh w10, [x8], #2 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(2));
    arc_st16(_a, ARC_W_R(c, 10));
  }
L_12c72c:;
  /* 12c72c: ldrb w10, [x1] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 1)));
  /* 12c730: cbz w10, #0x12c744 */
  if ((ARC_W_R(c, 10)) == 0) goto L_12c744;
  /* 12c734: add x11, x1, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 1) + UINT64_C(1)));
L_12c738:;
  /* 12c738: strb w10, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 10));
  }
  /* 12c73c: ldrb w10, [x11], #1 */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(1));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* 12c740: cbnz w10, #0x12c738 */
  if ((ARC_W_R(c, 10)) != 0) goto L_12c738;
L_12c744:;
  /* 12c744: cmp w9, #0x100 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(256));
  /* 12c748: b.eq #0x12c764 */
  if (ARC_COND(c, 0)) goto L_12c764;
  /* 12c74c: cmp w9, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(4));
  /* 12c750: b.ne #0x12c774 */
  if (ARC_COND(c, 1)) goto L_12c774;
  /* 12c754: tst w2, #0x4000 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 2) & UINT64_C(16384)));
  /* 12c758: mov w10, #0x46 */
  ARC_W_W(c, 10, UINT64_C(70));
  /* 12c75c: mov w11, #0x66 */
  ARC_W_W(c, 11, UINT64_C(102));
  /* 12c760: b #0x12c798 */
  goto L_12c798;
L_12c764:;
  /* 12c764: tst w2, #0x4000 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 2) & UINT64_C(16384)));
  /* 12c768: mov w10, #0x45 */
  ARC_W_W(c, 10, UINT64_C(69));
  /* 12c76c: mov w11, #0x65 */
  ARC_W_W(c, 11, UINT64_C(101));
  /* 12c770: b #0x12c798 */
  goto L_12c798;
L_12c774:;
  /* 12c774: cmp w9, #0x104 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(260));
  /* 12c778: b.eq #0x12c78c */
  if (ARC_COND(c, 0)) goto L_12c78c;
  /* 12c77c: tst w2, #0x4000 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 2) & UINT64_C(16384)));
  /* 12c780: mov w10, #0x47 */
  ARC_W_W(c, 10, UINT64_C(71));
  /* 12c784: mov w11, #0x67 */
  ARC_W_W(c, 11, UINT64_C(103));
  /* 12c788: b #0x12c798 */
  goto L_12c798;
L_12c78c:;
  /* 12c78c: tst w2, #0x4000 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 2) & UINT64_C(16384)));
  /* 12c790: mov w10, #0x41 */
  ARC_W_W(c, 10, UINT64_C(65));
  /* 12c794: mov w11, #0x61 */
  ARC_W_W(c, 11, UINT64_C(97));
L_12c798:;
  /* 12c798: csel w10, w11, w10, eq */
  ARC_W_W(c, 10, (ARC_COND(c, 0) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 10)));
  /* 12c79c: cmp w9, #0x104 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(260));
  /* 12c7a0: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 12c7a4: strb w10, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* 12c7a8: ret  */
  return;
}

void fn1_1349bc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039191996));
  /* 1349bc: bti c */
  /* bti: no architectural effect here */
  /* 1349c0: ret  */
  return;
}

void fn1_1350f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039193848));
  /* 1350f8: bti c */
  /* bti: no architectural effect here */
  /* 1350fc: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* 135100: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_13819c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039206300));
  /* 13819c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1381a0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1381a4: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1381a8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1381ac: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1381b0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1381b4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1381b8: ldr x8, [x8, #0xe48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3656))));
  /* 1381bc: add x9, x8, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* 1381c0: add x8, x8, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* 1381c4: str x9, [x0], #0x10 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* 1381c8: str x8, [x20, #0x70]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(112));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(112));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 1381cc: bl #0x144558 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1278416));
  fn1_144558(c);
  /* 1381d0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1381d4: bl #0x1433b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1278424));
  fn1_1433b8(c);
  /* 1381d8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1381dc: mov w1, #0x108 */
  ARC_W_W(c, 1, UINT64_C(264));
  /* 1381e0: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1381e4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1381e8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1381ec: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_13beb4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039221940));
  /* 13beb4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13beb8: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 13bebc: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13bec0: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13bec4: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13bec8: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 13becc: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 13bed0: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 13bed4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 13bed8: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 13bedc: cbz x2, #0x13bf00 */
  if ((ARC_X_R(c, 2)) == 0) goto L_13bf00;
  /* 13bee0: str wzr, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 31));
  /* 13bee4: nop  */
  /* nop: no architectural effect here */
  /* 13bee8: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13beec: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13bef0: tbz w8, #0, #0x13c024 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13c024;
L_13bef4:;
  /* 13bef4: nop  */
  /* nop: no architectural effect here */
  /* 13bef8: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13befc: str x8, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 8));
L_13bf00:;
  /* 13bf00: ldrb w8, [x20] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 20)));
  /* 13bf04: ldp x10, x9, [x20, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 13bf08: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 13bf0c: stp xzr, xzr, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13bf10: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 13bf14: lsr x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 13bf18: csinc x9, x9, x20, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 20)) + 1)));
  /* 13bf1c: csel x8, x8, x10, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* 13bf20: stp x9, x8, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 13bf24: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* 13bf28: strb w9, [sp, #0x28] */
  arc_st8(((c)->sp + INT64_C(40)), ARC_W_R(c, 9));
  /* 13bf2c: bl #0xda18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1294128));
  fn1_da18c(c);
  /* 13bf30: ldrb w8, [sp, #0x28] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(40))));
  /* 13bf34: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 13bf38: b.ne #0x13bf48 */
  if (ARC_COND(c, 1)) goto L_13bf48;
  /* 13bf3c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 13bf40: bl #0xda18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1294148));
  fn1_da18c(c);
  /* 13bf44: ldrb w8, [sp, #0x28] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(40))));
L_13bf48:;
  /* 13bf48: cmp w8, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(3));
  /* 13bf4c: b.ne #0x13bf6c */
  if (ARC_COND(c, 1)) goto L_13bf6c;
  /* 13bf50: ldrb w8, [x20] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 20)));
  /* 13bf54: tbnz w8, #0, #0x13bfd4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_13bfd4;
  /* 13bf58: ldr q0, [x20] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 20)), arc_ld64(ARC_X_R(c, 20) + 8));
  /* 13bf5c: ldr x8, [x20, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 13bf60: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* 13bf64: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* 13bf68: b #0x13c00c */
  goto L_13c00c;
L_13bf6c:;
  /* 13bf6c: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 13bf70: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 13bf74: bl #0x144768 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1294200));
  fn1_144768(c);
  /* 13bf78: ldrb w8, [x21] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 21)));
  /* 13bf7c: tbz w8, #0, #0x13bf90 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13bf90;
  /* 13bf80: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 13bf84: ldr x0, [x21, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 13bf88: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13bf8c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1294224));
  fn1_142608(c);
L_13bf90:;
  /* 13bf90: ldur q0, [sp, #8] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))), arc_ld64(((c)->sp + INT64_C(8)) + 8));
  /* 13bf94: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 13bf98: str q0, [x21] */
  arc_st64(ARC_X_R(c, 21), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 21) + 8, (c)->q[0].u64[1]);
  /* 13bf9c: str x8, [x21, #0x10] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(16)), ARC_X_R(c, 8));
  /* 13bfa0: cbz x22, #0x13bfb8 */
  if ((ARC_X_R(c, 22)) == 0) goto L_13bfb8;
  /* 13bfa4: ldr w8, [x22] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 22)));
  /* 13bfa8: cbz w8, #0x13bfb8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_13bfb8;
  /* 13bfac: stp xzr, xzr, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13bfb0: str xzr, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 31));
  /* 13bfb4: b #0x13c00c */
  goto L_13c00c;
L_13bfb8:;
  /* 13bfb8: ldrb w8, [x21] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 21)));
  /* 13bfbc: tbnz w8, #0, #0x13bff4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_13bff4;
  /* 13bfc0: ldr q0, [x21] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 21)), arc_ld64(ARC_X_R(c, 21) + 8));
  /* 13bfc4: ldr x8, [x21, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 13bfc8: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* 13bfcc: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* 13bfd0: b #0x13c000 */
  goto L_13c000;
L_13bfd4:;
  /* 13bfd4: ldp x2, x1, [x20, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(8));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 13bfd8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13bfdc: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13bfe0: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 13bfe4: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13bfe8: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 13bfec: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13bff0: b #0xda588 */
  fn1_da588(c); return;
L_13bff4:;
  /* 13bff4: ldp x2, x1, [x21, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(8));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 13bff8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13bffc: bl #0xda588 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1294336));
  fn1_da588(c);
L_13c000:;
  /* 13c000: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13c004: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 13c008: bl #0x13b0f4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1294348));
  fn1_13b0f4(c);
L_13c00c:;
  /* 13c00c: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13c010: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 13c014: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13c018: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 13c01c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13c020: ret  */
  return;
L_13c024:;
  /* 13c024: nop  */
  /* nop: no architectural effect here */
  /* 13c028: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13c02c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1294384));
  fn1_1424b8(c);
  /* 13c030: cbz w0, #0x13bef4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13bef4;
  /* 13c034: nop  */
  /* nop: no architectural effect here */
  /* 13c038: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13c03c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1294400));
  fn1_1424d0(c);
  /* 13c040: b #0x13bef4 */
  goto L_13bef4;
  /* 13c044: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 13c048: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 13c04c: tbz w8, #0, #0x13c060 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13c060;
  /* 13c050: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 13c054: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 13c058: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13c05c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1294432));
  fn1_142608(c);
L_13c060:;
  /* 13c060: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13c064: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1294440));
  fn1_9cc20(c);
}

void fn1_1424d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248080));
  /* 1424d0: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1424d4: ldr x17, [x16, #0xed0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3792))));
  /* 1424d8: add x16, x16, #0xed0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3792)));
  /* 1424dc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1424e0: nop  */
  /* nop: no architectural effect here */
  /* 1424e4: nop  */
  /* nop: no architectural effect here */
}

void fn1_142ad0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249616));
  /* 142ad0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142ad4: ldr x17, [x16, #0xd0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(208))));
  /* 142ad8: add x16, x16, #0xd0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(208)));
  /* 142adc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142ae0: nop  */
  /* nop: no architectural effect here */
  /* 142ae4: nop  */
  /* nop: no architectural effect here */
}

void fn1_1430d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251152));
  /* 1430d0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1430d4: ldr x17, [x16, #0x2d0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(720))));
  /* 1430d8: add x16, x16, #0x2d0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(720)));
  /* 1430dc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1430e0: nop  */
  /* nop: no architectural effect here */
  /* 1430e4: nop  */
  /* nop: no architectural effect here */
}

void fn1_1436d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252688));
  /* 1436d0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1436d4: ldr x17, [x16, #0x4d0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1232))));
  /* 1436d8: add x16, x16, #0x4d0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1232)));
  /* 1436dc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1436e0: nop  */
  /* nop: no architectural effect here */
  /* 1436e4: nop  */
  /* nop: no architectural effect here */
}

void fn1_143cd0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254224));
  /* 143cd0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143cd4: ldr x17, [x16, #0x6d0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1744))));
  /* 143cd8: add x16, x16, #0x6d0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1744)));
  /* 143cdc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143ce0: nop  */
  /* nop: no architectural effect here */
  /* 143ce4: nop  */
  /* nop: no architectural effect here */
}

void fn1_1442d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255760));
  /* 1442d0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1442d4: ldr x17, [x16, #0x8d0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2256))));
  /* 1442d8: add x16, x16, #0x8d0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2256)));
  /* 1442dc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1442e0: nop  */
  /* nop: no architectural effect here */
  /* 1442e4: nop  */
  /* nop: no architectural effect here */
}

void fn1_1448d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039257296));
  /* 1448d0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1448d4: ldr x17, [x16, #0xad0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2768))));
  /* 1448d8: add x16, x16, #0xad0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2768)));
  /* 1448dc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1448e0: nop  */
  /* nop: no architectural effect here */
  /* 1448e4: nop  */
  /* nop: no architectural effect here */
}

