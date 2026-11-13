#include "lifted.h"

void fn1_9eb88(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038578056));
  /* 9eb88: bti c */
  /* bti: no architectural effect here */
  /* 9eb8c: ldr w8, [x1] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 1)));
  /* 9eb90: cmp w8, #0x1d */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(29));
  /* 9eb94: b.gt #0x9ebb0 */
  if (ARC_COND(c, 12)) goto L_9ebb0;
  /* 9eb98: tbz w8, #0x1f, #0x9ebdc */
  if (((ARC_W_R(c, 8)) >> 31 & 1) == 0) goto L_9ebdc;
  /* 9eb9c: cmn w8, #2 */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(2), 0);
  /* 9eba0: b.eq #0x9ebc8 */
  if (ARC_COND(c, 0)) goto L_9ebc8;
  /* 9eba4: cmn w8, #1 */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(1), 0);
  /* 9eba8: b.eq #0x9ec0c */
  if (ARC_COND(c, 0)) goto L_9ec0c;
  /* 9ebac: b #0x9ec5c */
  goto L_9ec5c;
L_9ebb0:;
  /* 9ebb0: cmp w8, #0x1f */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(31));
  /* 9ebb4: b.gt #0x9ebfc */
  if (ARC_COND(c, 12)) goto L_9ebfc;
  /* 9ebb8: cmp w8, #0x1e */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(30));
  /* 9ebbc: b.eq #0x9ec20 */
  if (ARC_COND(c, 0)) goto L_9ec20;
  /* 9ebc0: cmp w8, #0x1f */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(31));
  /* 9ebc4: b.ne #0x9ec5c */
  if (ARC_COND(c, 1)) goto L_9ec5c;
L_9ebc8:;
  /* 9ebc8: add x8, x2, #0xf8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 2) + UINT64_C(248)));
  /* 9ebcc: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 9ebd0: ldrsw x9, [x1, #4] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 1) + INT64_C(4)))));
  /* 9ebd4: add x0, x8, x9 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* 9ebd8: ret  */
  return;
L_9ebdc:;
  /* 9ebdc: cbz w8, #0x9ec34 */
  if ((ARC_W_R(c, 8)) == 0) goto L_9ec34;
  /* 9ebe0: cmp w8, #0x1d */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(29));
  /* 9ebe4: b.ne #0x9ec5c */
  if (ARC_COND(c, 1)) goto L_9ec5c;
  /* 9ebe8: add x8, x2, #0xe8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 2) + UINT64_C(232)));
  /* 9ebec: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 9ebf0: ldrsw x9, [x1, #4] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 1) + INT64_C(4)))));
  /* 9ebf4: add x0, x8, x9 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* 9ebf8: ret  */
  return;
L_9ebfc:;
  /* 9ebfc: cmp w8, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(34));
  /* 9ec00: b.eq #0x9ec48 */
  if (ARC_COND(c, 0)) goto L_9ec48;
  /* 9ec04: cmp w8, #0x20 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(32));
  /* 9ec08: b.ne #0x9ec5c */
  if (ARC_COND(c, 1)) goto L_9ec5c;
L_9ec0c:;
  /* 9ec0c: add x8, x2, #0x100 */
  ARC_X_W(c, 8, (ARC_X_R(c, 2) + UINT64_C(256)));
  /* 9ec10: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 9ec14: ldrsw x9, [x1, #4] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 1) + INT64_C(4)))));
  /* 9ec18: add x0, x8, x9 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* 9ec1c: ret  */
  return;
L_9ec20:;
  /* 9ec20: add x8, x2, #0xf0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 2) + UINT64_C(240)));
  /* 9ec24: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 9ec28: ldrsw x9, [x1, #4] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 1) + INT64_C(4)))));
  /* 9ec2c: add x0, x8, x9 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* 9ec30: ret  */
  return;
L_9ec34:;
  /* 9ec34: ldr x8, [x1, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* 9ec38: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 9ec3c: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 9ec40: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 9ec44: b #0x9f420 */
  fn1_9f420(c); return;
L_9ec48:;
  /* 9ec48: add x8, x2, #0x108 */
  ARC_X_W(c, 8, (ARC_X_R(c, 2) + UINT64_C(264)));
  /* 9ec4c: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 9ec50: ldrsw x9, [x1, #4] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 1) + INT64_C(4)))));
  /* 9ec54: add x0, x8, x9 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* 9ec58: ret  */
  return;
L_9ec5c:;
  /* 9ec5c: cmp w8, #0x1c */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(28));
  /* 9ec60: b.hi #0x9ec78 */
  if (ARC_COND(c, 8)) goto L_9ec78;
  /* 9ec64: add x8, x2, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 2) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* 9ec68: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 9ec6c: ldrsw x9, [x1, #4] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 1) + INT64_C(4)))));
  /* 9ec70: add x0, x8, x9 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* 9ec74: ret  */
  return;
L_9ec78:;
  /* 9ec78: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 9ec7c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 9ec80: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 9ec84: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 9ec88: adrp x19, #0x151000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9ec8c: nop  */
  /* nop: no architectural effect here */
  /* 9ec90: adr x1, #0x4f83f */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(325695)));
  /* 9ec94: ldr x19, [x19, #0x998] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(2456))));
  /* 9ec98: adrp x2, #0x50000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(327680)));
  /* 9ec9c: add x2, x2, #0xbee */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(3054)));
  /* 9eca0: adrp x3, #0x50000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(327680)));
  /* 9eca4: add x3, x3, #0x412 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(1042)));
  /* 9eca8: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9ecac: bl #0x144a38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(650416));
  fn1_144a38(c);
  /* 9ecb0: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9ecb4: bl #0x143730 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(650424));
  fn1_143730(c);
  /* 9ecb8: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(650428));
  fn1_1427b8(c);
}

void fn1_a1fe4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038591460));
  /* a1fe4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a1fe8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a1fec: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* a1ff0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a1ff4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a1ff8: bl #0x142470 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(663548));
  fn1_142470(c);
  /* a1ffc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a2000: mov w1, #8 */
  ARC_W_W(c, 1, UINT64_C(8));
  /* a2004: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* a2008: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a200c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a2010: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_a468c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038601356));
  /* a468c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a4690: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a4694: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* a4698: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a469c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a46a0: ldp x19, x8, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 19, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* a46a4: sub x8, x8, x19 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 19)));
  /* a46a8: cmp x2, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 8));
  /* a46ac: b.hi #0xa46c4 */
  if (ARC_COND(c, 8)) goto L_a46c4;
  /* a46b0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a46b4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a46b8: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* a46bc: bl #0x142890 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(673472));
  fn1_142890(c);
  /* a46c0: cbz w0, #0xa46dc */
  if ((ARC_W_R(c, 0)) == 0) goto L_a46dc;
L_a46c4:;
  /* a46c4: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
L_a46c8:;
  /* a46c8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a46cc: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* a46d0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a46d4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a46d8: ret  */
  return;
L_a46dc:;
  /* a46dc: add x8, x19, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 21)));
  /* a46e0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* a46e4: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* a46e8: b #0xa46c8 */
  goto L_a46c8;
}

void fn1_abbb8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038631352));
  /* abbb8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* abbbc: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* abbc0: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* abbc4: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* abbc8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* abbcc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* abbd0: ldr x24, [x0, #0x1330] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* abbd4: mov x21, x4 */
  ARC_X_W(c, 21, ARC_X_R(c, 4));
  /* abbd8: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* abbdc: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* abbe0: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* abbe4: ldr x8, [x24, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 24) + INT64_C(8))));
  /* abbe8: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* abbec: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* abbf0: b.hi #0xabc14 */
  if (ARC_COND(c, 8)) goto L_abc14;
  /* abbf4: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* abbf8: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* abbfc: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(703488));
  fn1_1428a8(c);
  /* abc00: cbz x0, #0xabc80 */
  if ((ARC_X_R(c, 0)) == 0) goto L_abc80;
  /* abc04: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* abc08: stp x24, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* abc0c: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* abc10: str x0, [x23, #0x1330] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(4912)), ARC_X_R(c, 0));
L_abc14:;
  /* abc14: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* abc18: add x0, x24, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + ARC_X_R(c, 8)));
  /* abc1c: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* abc20: str x9, [x24, #8] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(8)), ARC_X_R(c, 9));
  /* abc24: adrp x9, #0x14a000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1351680)));
  /* abc28: add x9, x9, #0x348 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(840)));
  /* abc2c: str x9, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* abc30: ldurh w9, [x0, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* abc34: mov w10, #0x3a */
  ARC_W_W(c, 10, UINT64_C(58));
  /* abc38: ldrh w11, [x21] */
  ARC_W_W(c, 11, arc_ld16(ARC_X_R(c, 21)));
  /* abc3c: strb w10, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 10));
  /* abc40: ldr x10, [x20] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 20)));
  /* abc44: str x8, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 8));
  /* abc48: and w8, w9, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* abc4c: mov w9, #0x540 */
  ARC_W_W(c, 9, UINT64_C(1344));
  /* abc50: bfxil w8, w11, #0, #6 */
  ARC_W_W(c, 8, (((uint32_t)(ARC_W_R(c, 8)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 11))) >> 0) & UINT64_C(63))));
  /* abc54: ldr q0, [x19] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 19)), arc_ld64(ARC_X_R(c, 19) + 8));
  /* abc58: orr w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 9)));
  /* abc5c: stur q0, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)) + 8, (c)->q[0].u64[1]);
  /* abc60: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* abc64: str x10, [x0, #0x28] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(40)), ARC_X_R(c, 10));
  /* abc68: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* abc6c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* abc70: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* abc74: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* abc78: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* abc7c: ret  */
  return;
L_abc80:;
  /* abc80: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(703620));
  fn1_142488(c);
}

void fn1_b20c4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038657220));
  /* b20c4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b20c8: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* b20cc: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b20d0: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b20d4: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* b20d8: ldr x8, [x0, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* b20dc: cmp x8, #0x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(32));
  /* b20e0: b.lo #0xb22c8 */
  if (ARC_COND(c, 3)) goto L_b22c8;
  /* b20e4: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* b20e8: sub x8, x29, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* b20ec: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b20f0: add x10, x9, #0x20 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(32)));
  /* b20f4: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* b20f8: b.hs #0xb2174 */
  if (ARC_COND(c, 2)) goto L_b2174;
  /* b20fc: add x10, x8, #0x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* b2100: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b2104: b.hs #0xb2174 */
  if (ARC_COND(c, 2)) goto L_b2174;
  /* b2108: movi v0.2s, #0xc6 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = UINT64_C(198);
    _t.u32[1] = UINT64_C(198);
    (c)->q[0] = _t; }
  /* b210c: movi d1, #0x0000ff000000ff */
  arc_du_w(c, 1, UINT64_C(1095216660735));
  /* b2110: adrp x8, #0x53000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(339968)));
  /* b2114: movi v2.2s, #0xf6 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = UINT64_C(246);
    _t.u32[1] = UINT64_C(246);
    (c)->q[2] = _t; }
  /* b2118: adrp x11, #0x53000 */
  ARC_X_W(c, 11, (arc_image_bases[1] + UINT64_C(339968)));
  /* b211c: sub x12, x29, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* b2120: ldr d3, [x8, #0x2d0] */
  arc_du_w(c, 3, arc_ld64((ARC_X_R(c, 8) + INT64_C(720))));
  /* b2124: ldr d4, [x11, #0x2e0] */
  arc_du_w(c, 4, arc_ld64((ARC_X_R(c, 11) + INT64_C(736))));
  /* b2128: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
  /* b212c: sub x8, x12, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 12) - UINT64_C(1)));
L_b2130:;
  /* b2130: add x11, x9, x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + ARC_X_R(c, 10)));
  /* b2134: add x10, x10, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(2)));
  /* b2138: ld1 {v5.b}[0], [x11] */
  { const uint64_t _pa = ARC_X_R(c, 11);
    (c)->q[5].u8[0] = arc_ld8(_pa + 0);
  }
  /* b213c: add x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(1)));
  /* b2140: cmp x10, #0x20 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(32));
  /* b2144: ld1 {v5.b}[4], [x11] */
  { const uint64_t _pa = ARC_X_R(c, 11);
    (c)->q[5].u8[4] = arc_ld8(_pa + 0);
  }
  /* b2148: add v6.2s, v5.2s, v0.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[5].u32[0] + (c)->q[0].u32[0];
    _t.u32[1] = (c)->q[5].u32[1] + (c)->q[0].u32[1];
    (c)->q[6] = _t; }
  /* b214c: and v6.8b, v6.8b, v1.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] & (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[6].u8[1] & (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[6].u8[2] & (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[6].u8[3] & (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[6].u8[4] & (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[6].u8[5] & (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[6].u8[6] & (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[6].u8[7] & (c)->q[1].u8[7];
    (c)->q[6] = _t; }
  /* b2150: cmhi v6.2s, v2.2s, v6.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[2].u32[0] > (c)->q[6].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[2].u32[1] > (c)->q[6].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[6] = _t; }
  /* b2154: bsl v6.8b, v4.8b, v3.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (((c)->q[6].u8[0] & (c)->q[4].u8[0]) | (~(c)->q[6].u8[0] & (c)->q[3].u8[0]));
    _t.u8[1] = (((c)->q[6].u8[1] & (c)->q[4].u8[1]) | (~(c)->q[6].u8[1] & (c)->q[3].u8[1]));
    _t.u8[2] = (((c)->q[6].u8[2] & (c)->q[4].u8[2]) | (~(c)->q[6].u8[2] & (c)->q[3].u8[2]));
    _t.u8[3] = (((c)->q[6].u8[3] & (c)->q[4].u8[3]) | (~(c)->q[6].u8[3] & (c)->q[3].u8[3]));
    _t.u8[4] = (((c)->q[6].u8[4] & (c)->q[4].u8[4]) | (~(c)->q[6].u8[4] & (c)->q[3].u8[4]));
    _t.u8[5] = (((c)->q[6].u8[5] & (c)->q[4].u8[5]) | (~(c)->q[6].u8[5] & (c)->q[3].u8[5]));
    _t.u8[6] = (((c)->q[6].u8[6] & (c)->q[4].u8[6]) | (~(c)->q[6].u8[6] & (c)->q[3].u8[6]));
    _t.u8[7] = (((c)->q[6].u8[7] & (c)->q[4].u8[7]) | (~(c)->q[6].u8[7] & (c)->q[3].u8[7]));
    (c)->q[6] = _t; }
  /* b2158: add v5.2s, v6.2s, v5.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[6].u32[0] + (c)->q[5].u32[0];
    _t.u32[1] = (c)->q[6].u32[1] + (c)->q[5].u32[1];
    (c)->q[5] = _t; }
  /* b215c: mov w11, v5.s[1] */
  ARC_W_W(c, 11, (c)->q[5].u32[1]);
  /* b2160: fmov w12, s5 */
  ARC_W_W(c, 12, ARC_SU_R(c, 5));
  /* b2164: add w11, w11, w12, lsl #4 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + ((uint32_t)(ARC_W_R(c, 12)) << 4)));
  /* b2168: strb w11, [x8, #1]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(1));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 11));
  }
  /* b216c: b.ne #0xb2130 */
  if (ARC_COND(c, 1)) goto L_b2130;
  /* b2170: b #0xb21c0 */
  goto L_b21c0;
L_b2174:;
  /* b2174: ld2 {v0.16b, v1.16b}, [x9] */
  { const uint64_t _pa = ARC_X_R(c, 9);
    (c)->q[0].u8[0] = arc_ld8(_pa + 0);
    (c)->q[0].u8[1] = arc_ld8(_pa + 2);
    (c)->q[0].u8[2] = arc_ld8(_pa + 4);
    (c)->q[0].u8[3] = arc_ld8(_pa + 6);
    (c)->q[0].u8[4] = arc_ld8(_pa + 8);
    (c)->q[0].u8[5] = arc_ld8(_pa + 10);
    (c)->q[0].u8[6] = arc_ld8(_pa + 12);
    (c)->q[0].u8[7] = arc_ld8(_pa + 14);
    (c)->q[0].u8[8] = arc_ld8(_pa + 16);
    (c)->q[0].u8[9] = arc_ld8(_pa + 18);
    (c)->q[0].u8[10] = arc_ld8(_pa + 20);
    (c)->q[0].u8[11] = arc_ld8(_pa + 22);
    (c)->q[0].u8[12] = arc_ld8(_pa + 24);
    (c)->q[0].u8[13] = arc_ld8(_pa + 26);
    (c)->q[0].u8[14] = arc_ld8(_pa + 28);
    (c)->q[0].u8[15] = arc_ld8(_pa + 30);
    (c)->q[1].u8[0] = arc_ld8(_pa + 1);
    (c)->q[1].u8[1] = arc_ld8(_pa + 3);
    (c)->q[1].u8[2] = arc_ld8(_pa + 5);
    (c)->q[1].u8[3] = arc_ld8(_pa + 7);
    (c)->q[1].u8[4] = arc_ld8(_pa + 9);
    (c)->q[1].u8[5] = arc_ld8(_pa + 11);
    (c)->q[1].u8[6] = arc_ld8(_pa + 13);
    (c)->q[1].u8[7] = arc_ld8(_pa + 15);
    (c)->q[1].u8[8] = arc_ld8(_pa + 17);
    (c)->q[1].u8[9] = arc_ld8(_pa + 19);
    (c)->q[1].u8[10] = arc_ld8(_pa + 21);
    (c)->q[1].u8[11] = arc_ld8(_pa + 23);
    (c)->q[1].u8[12] = arc_ld8(_pa + 25);
    (c)->q[1].u8[13] = arc_ld8(_pa + 27);
    (c)->q[1].u8[14] = arc_ld8(_pa + 29);
    (c)->q[1].u8[15] = arc_ld8(_pa + 31);
  }
  /* b2178: movi v2.16b, #0xc6 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = UINT64_C(198);
    _t.u8[1] = UINT64_C(198);
    _t.u8[2] = UINT64_C(198);
    _t.u8[3] = UINT64_C(198);
    _t.u8[4] = UINT64_C(198);
    _t.u8[5] = UINT64_C(198);
    _t.u8[6] = UINT64_C(198);
    _t.u8[7] = UINT64_C(198);
    _t.u8[8] = UINT64_C(198);
    _t.u8[9] = UINT64_C(198);
    _t.u8[10] = UINT64_C(198);
    _t.u8[11] = UINT64_C(198);
    _t.u8[12] = UINT64_C(198);
    _t.u8[13] = UINT64_C(198);
    _t.u8[14] = UINT64_C(198);
    _t.u8[15] = UINT64_C(198);
    (c)->q[2] = _t; }
  /* b217c: movi v3.16b, #0xf6 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = UINT64_C(246);
    _t.u8[1] = UINT64_C(246);
    _t.u8[2] = UINT64_C(246);
    _t.u8[3] = UINT64_C(246);
    _t.u8[4] = UINT64_C(246);
    _t.u8[5] = UINT64_C(246);
    _t.u8[6] = UINT64_C(246);
    _t.u8[7] = UINT64_C(246);
    _t.u8[8] = UINT64_C(246);
    _t.u8[9] = UINT64_C(246);
    _t.u8[10] = UINT64_C(246);
    _t.u8[11] = UINT64_C(246);
    _t.u8[12] = UINT64_C(246);
    _t.u8[13] = UINT64_C(246);
    _t.u8[14] = UINT64_C(246);
    _t.u8[15] = UINT64_C(246);
    (c)->q[3] = _t; }
  /* b2180: movi v5.16b, #9 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = UINT64_C(9);
    _t.u8[1] = UINT64_C(9);
    _t.u8[2] = UINT64_C(9);
    _t.u8[3] = UINT64_C(9);
    _t.u8[4] = UINT64_C(9);
    _t.u8[5] = UINT64_C(9);
    _t.u8[6] = UINT64_C(9);
    _t.u8[7] = UINT64_C(9);
    _t.u8[8] = UINT64_C(9);
    _t.u8[9] = UINT64_C(9);
    _t.u8[10] = UINT64_C(9);
    _t.u8[11] = UINT64_C(9);
    _t.u8[12] = UINT64_C(9);
    _t.u8[13] = UINT64_C(9);
    _t.u8[14] = UINT64_C(9);
    _t.u8[15] = UINT64_C(9);
    (c)->q[5] = _t; }
  /* b2184: movi v6.16b, #0xd0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = UINT64_C(208);
    _t.u8[1] = UINT64_C(208);
    _t.u8[2] = UINT64_C(208);
    _t.u8[3] = UINT64_C(208);
    _t.u8[4] = UINT64_C(208);
    _t.u8[5] = UINT64_C(208);
    _t.u8[6] = UINT64_C(208);
    _t.u8[7] = UINT64_C(208);
    _t.u8[8] = UINT64_C(208);
    _t.u8[9] = UINT64_C(208);
    _t.u8[10] = UINT64_C(208);
    _t.u8[11] = UINT64_C(208);
    _t.u8[12] = UINT64_C(208);
    _t.u8[13] = UINT64_C(208);
    _t.u8[14] = UINT64_C(208);
    _t.u8[15] = UINT64_C(208);
    (c)->q[6] = _t; }
  /* b2188: movi v7.16b, #0xa9 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = UINT64_C(169);
    _t.u8[1] = UINT64_C(169);
    _t.u8[2] = UINT64_C(169);
    _t.u8[3] = UINT64_C(169);
    _t.u8[4] = UINT64_C(169);
    _t.u8[5] = UINT64_C(169);
    _t.u8[6] = UINT64_C(169);
    _t.u8[7] = UINT64_C(169);
    _t.u8[8] = UINT64_C(169);
    _t.u8[9] = UINT64_C(169);
    _t.u8[10] = UINT64_C(169);
    _t.u8[11] = UINT64_C(169);
    _t.u8[12] = UINT64_C(169);
    _t.u8[13] = UINT64_C(169);
    _t.u8[14] = UINT64_C(169);
    _t.u8[15] = UINT64_C(169);
    (c)->q[7] = _t; }
  /* b218c: orr x8, x8, #0xf */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(15)));
  /* b2190: add v4.16b, v0.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[0] + (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[0].u8[1] + (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[0].u8[2] + (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[0].u8[3] + (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[0].u8[4] + (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[0].u8[5] + (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[0].u8[6] + (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[0].u8[7] + (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[0].u8[8] + (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[0].u8[9] + (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[0].u8[10] + (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[0].u8[11] + (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[0].u8[12] + (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[0].u8[13] + (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[0].u8[14] + (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[0].u8[15] + (c)->q[2].u8[15];
    (c)->q[4] = _t; }
  /* b2194: add v2.16b, v1.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[0] + (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[1].u8[1] + (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[1].u8[2] + (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[1].u8[3] + (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[1].u8[4] + (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[1].u8[5] + (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[1].u8[6] + (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[1].u8[7] + (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[1].u8[8] + (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[1].u8[9] + (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[1].u8[10] + (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[1].u8[11] + (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[1].u8[12] + (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[1].u8[13] + (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[1].u8[14] + (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[1].u8[15] + (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* b2198: cmhi v4.16b, v3.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[3].u8[0] > (c)->q[4].u8[0]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[1] = ((c)->q[3].u8[1] > (c)->q[4].u8[1]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[2] = ((c)->q[3].u8[2] > (c)->q[4].u8[2]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[3] = ((c)->q[3].u8[3] > (c)->q[4].u8[3]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[4] = ((c)->q[3].u8[4] > (c)->q[4].u8[4]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[5] = ((c)->q[3].u8[5] > (c)->q[4].u8[5]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[6] = ((c)->q[3].u8[6] > (c)->q[4].u8[6]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[7] = ((c)->q[3].u8[7] > (c)->q[4].u8[7]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[8] = ((c)->q[3].u8[8] > (c)->q[4].u8[8]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[9] = ((c)->q[3].u8[9] > (c)->q[4].u8[9]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[10] = ((c)->q[3].u8[10] > (c)->q[4].u8[10]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[11] = ((c)->q[3].u8[11] > (c)->q[4].u8[11]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[12] = ((c)->q[3].u8[12] > (c)->q[4].u8[12]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[13] = ((c)->q[3].u8[13] > (c)->q[4].u8[13]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[14] = ((c)->q[3].u8[14] > (c)->q[4].u8[14]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[15] = ((c)->q[3].u8[15] > (c)->q[4].u8[15]) ? (uint8_t)~(uint8_t)0 : 0;
    (c)->q[4] = _t; }
  /* b219c: cmhi v2.16b, v3.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[3].u8[0] > (c)->q[2].u8[0]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[1] = ((c)->q[3].u8[1] > (c)->q[2].u8[1]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[2] = ((c)->q[3].u8[2] > (c)->q[2].u8[2]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[3] = ((c)->q[3].u8[3] > (c)->q[2].u8[3]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[4] = ((c)->q[3].u8[4] > (c)->q[2].u8[4]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[5] = ((c)->q[3].u8[5] > (c)->q[2].u8[5]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[6] = ((c)->q[3].u8[6] > (c)->q[2].u8[6]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[7] = ((c)->q[3].u8[7] > (c)->q[2].u8[7]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[8] = ((c)->q[3].u8[8] > (c)->q[2].u8[8]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[9] = ((c)->q[3].u8[9] > (c)->q[2].u8[9]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[10] = ((c)->q[3].u8[10] > (c)->q[2].u8[10]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[11] = ((c)->q[3].u8[11] > (c)->q[2].u8[11]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[12] = ((c)->q[3].u8[12] > (c)->q[2].u8[12]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[13] = ((c)->q[3].u8[13] > (c)->q[2].u8[13]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[14] = ((c)->q[3].u8[14] > (c)->q[2].u8[14]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[15] = ((c)->q[3].u8[15] > (c)->q[2].u8[15]) ? (uint8_t)~(uint8_t)0 : 0;
    (c)->q[2] = _t; }
  /* b21a0: and v3.16b, v4.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] & (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] & (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] & (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] & (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] & (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] & (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] & (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] & (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] & (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] & (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] & (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] & (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] & (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] & (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] & (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] & (c)->q[5].u8[15];
    (c)->q[3] = _t; }
  /* b21a4: bsl v2.16b, v7.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (((c)->q[2].u8[0] & (c)->q[7].u8[0]) | (~(c)->q[2].u8[0] & (c)->q[6].u8[0]));
    _t.u8[1] = (((c)->q[2].u8[1] & (c)->q[7].u8[1]) | (~(c)->q[2].u8[1] & (c)->q[6].u8[1]));
    _t.u8[2] = (((c)->q[2].u8[2] & (c)->q[7].u8[2]) | (~(c)->q[2].u8[2] & (c)->q[6].u8[2]));
    _t.u8[3] = (((c)->q[2].u8[3] & (c)->q[7].u8[3]) | (~(c)->q[2].u8[3] & (c)->q[6].u8[3]));
    _t.u8[4] = (((c)->q[2].u8[4] & (c)->q[7].u8[4]) | (~(c)->q[2].u8[4] & (c)->q[6].u8[4]));
    _t.u8[5] = (((c)->q[2].u8[5] & (c)->q[7].u8[5]) | (~(c)->q[2].u8[5] & (c)->q[6].u8[5]));
    _t.u8[6] = (((c)->q[2].u8[6] & (c)->q[7].u8[6]) | (~(c)->q[2].u8[6] & (c)->q[6].u8[6]));
    _t.u8[7] = (((c)->q[2].u8[7] & (c)->q[7].u8[7]) | (~(c)->q[2].u8[7] & (c)->q[6].u8[7]));
    _t.u8[8] = (((c)->q[2].u8[8] & (c)->q[7].u8[8]) | (~(c)->q[2].u8[8] & (c)->q[6].u8[8]));
    _t.u8[9] = (((c)->q[2].u8[9] & (c)->q[7].u8[9]) | (~(c)->q[2].u8[9] & (c)->q[6].u8[9]));
    _t.u8[10] = (((c)->q[2].u8[10] & (c)->q[7].u8[10]) | (~(c)->q[2].u8[10] & (c)->q[6].u8[10]));
    _t.u8[11] = (((c)->q[2].u8[11] & (c)->q[7].u8[11]) | (~(c)->q[2].u8[11] & (c)->q[6].u8[11]));
    _t.u8[12] = (((c)->q[2].u8[12] & (c)->q[7].u8[12]) | (~(c)->q[2].u8[12] & (c)->q[6].u8[12]));
    _t.u8[13] = (((c)->q[2].u8[13] & (c)->q[7].u8[13]) | (~(c)->q[2].u8[13] & (c)->q[6].u8[13]));
    _t.u8[14] = (((c)->q[2].u8[14] & (c)->q[7].u8[14]) | (~(c)->q[2].u8[14] & (c)->q[6].u8[14]));
    _t.u8[15] = (((c)->q[2].u8[15] & (c)->q[7].u8[15]) | (~(c)->q[2].u8[15] & (c)->q[6].u8[15]));
    (c)->q[2] = _t; }
  /* b21a8: add v3.16b, v3.16b, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[3].u8[0] + (c)->q[0].u8[0];
    _t.u8[1] = (c)->q[3].u8[1] + (c)->q[0].u8[1];
    _t.u8[2] = (c)->q[3].u8[2] + (c)->q[0].u8[2];
    _t.u8[3] = (c)->q[3].u8[3] + (c)->q[0].u8[3];
    _t.u8[4] = (c)->q[3].u8[4] + (c)->q[0].u8[4];
    _t.u8[5] = (c)->q[3].u8[5] + (c)->q[0].u8[5];
    _t.u8[6] = (c)->q[3].u8[6] + (c)->q[0].u8[6];
    _t.u8[7] = (c)->q[3].u8[7] + (c)->q[0].u8[7];
    _t.u8[8] = (c)->q[3].u8[8] + (c)->q[0].u8[8];
    _t.u8[9] = (c)->q[3].u8[9] + (c)->q[0].u8[9];
    _t.u8[10] = (c)->q[3].u8[10] + (c)->q[0].u8[10];
    _t.u8[11] = (c)->q[3].u8[11] + (c)->q[0].u8[11];
    _t.u8[12] = (c)->q[3].u8[12] + (c)->q[0].u8[12];
    _t.u8[13] = (c)->q[3].u8[13] + (c)->q[0].u8[13];
    _t.u8[14] = (c)->q[3].u8[14] + (c)->q[0].u8[14];
    _t.u8[15] = (c)->q[3].u8[15] + (c)->q[0].u8[15];
    (c)->q[3] = _t; }
  /* b21ac: add v0.16b, v2.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] + (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] + (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] + (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] + (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] + (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] + (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] + (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] + (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[2].u8[8] + (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[2].u8[9] + (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[2].u8[10] + (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[2].u8[11] + (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[2].u8[12] + (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[2].u8[13] + (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[2].u8[14] + (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[2].u8[15] + (c)->q[1].u8[15];
    (c)->q[0] = _t; }
  /* b21b0: shl v1.16b, v3.16b, #4 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (uint8_t)((c)->q[3].u8[0] << 4);
    _t.u8[1] = (uint8_t)((c)->q[3].u8[1] << 4);
    _t.u8[2] = (uint8_t)((c)->q[3].u8[2] << 4);
    _t.u8[3] = (uint8_t)((c)->q[3].u8[3] << 4);
    _t.u8[4] = (uint8_t)((c)->q[3].u8[4] << 4);
    _t.u8[5] = (uint8_t)((c)->q[3].u8[5] << 4);
    _t.u8[6] = (uint8_t)((c)->q[3].u8[6] << 4);
    _t.u8[7] = (uint8_t)((c)->q[3].u8[7] << 4);
    _t.u8[8] = (uint8_t)((c)->q[3].u8[8] << 4);
    _t.u8[9] = (uint8_t)((c)->q[3].u8[9] << 4);
    _t.u8[10] = (uint8_t)((c)->q[3].u8[10] << 4);
    _t.u8[11] = (uint8_t)((c)->q[3].u8[11] << 4);
    _t.u8[12] = (uint8_t)((c)->q[3].u8[12] << 4);
    _t.u8[13] = (uint8_t)((c)->q[3].u8[13] << 4);
    _t.u8[14] = (uint8_t)((c)->q[3].u8[14] << 4);
    _t.u8[15] = (uint8_t)((c)->q[3].u8[15] << 4);
    (c)->q[1] = _t; }
  /* b21b4: add v0.16b, v0.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[0] + (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[0].u8[1] + (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[0].u8[2] + (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[0].u8[3] + (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[0].u8[4] + (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[0].u8[5] + (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[0].u8[6] + (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[0].u8[7] + (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[0].u8[8] + (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[0].u8[9] + (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[0].u8[10] + (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[0].u8[11] + (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[0].u8[12] + (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[0].u8[13] + (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[0].u8[14] + (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[0].u8[15] + (c)->q[1].u8[15];
    (c)->q[0] = _t; }
  /* b21b8: umov w11, v0.b[0xf] */
  ARC_W_W(c, 11, (c)->q[0].u8[15]);
  /* b21bc: stur q0, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)) + 8, (c)->q[0].u64[1]);
L_b21c0:;
  /* b21c0: sub x9, x29, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* b21c4: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b21c8: b.hs #0xb2248 */
  if (ARC_COND(c, 2)) goto L_b2248;
  /* b21cc: ldurb w9, [x29, #-0x10] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 29) + INT64_C(-16))));
  /* b21d0: sturb w11, [x29, #-0x10] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-16)), ARC_W_R(c, 11));
  /* b21d4: ldurb w10, [x8, #-1] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(-1))));
  /* b21d8: strb w9, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* b21dc: ldurb w9, [x29, #-0xf] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 29) + INT64_C(-15))));
  /* b21e0: sturb w10, [x29, #-0xf] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-15)), ARC_W_R(c, 10));
  /* b21e4: ldurb w10, [x8, #-2] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(-2))));
  /* b21e8: sturb w9, [x8, #-1] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(-1)), ARC_W_R(c, 9));
  /* b21ec: ldurb w9, [x29, #-0xe] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 29) + INT64_C(-14))));
  /* b21f0: sturb w10, [x29, #-0xe] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-14)), ARC_W_R(c, 10));
  /* b21f4: ldurb w10, [x8, #-3] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(-3))));
  /* b21f8: sturb w9, [x8, #-2] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(-2)), ARC_W_R(c, 9));
  /* b21fc: ldurb w9, [x29, #-0xd] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 29) + INT64_C(-13))));
  /* b2200: sturb w10, [x29, #-0xd] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-13)), ARC_W_R(c, 10));
  /* b2204: ldurb w10, [x8, #-4] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(-4))));
  /* b2208: sturb w9, [x8, #-3] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(-3)), ARC_W_R(c, 9));
  /* b220c: ldurb w9, [x29, #-0xc] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 29) + INT64_C(-12))));
  /* b2210: sturb w10, [x29, #-0xc] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-12)), ARC_W_R(c, 10));
  /* b2214: ldurb w10, [x8, #-5] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(-5))));
  /* b2218: sturb w9, [x8, #-4] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(-4)), ARC_W_R(c, 9));
  /* b221c: ldurb w9, [x29, #-0xb] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 29) + INT64_C(-11))));
  /* b2220: sturb w10, [x29, #-0xb] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-11)), ARC_W_R(c, 10));
  /* b2224: ldurb w10, [x8, #-6] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(-6))));
  /* b2228: sturb w9, [x8, #-5] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(-5)), ARC_W_R(c, 9));
  /* b222c: ldurb w9, [x29, #-0xa] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 29) + INT64_C(-10))));
  /* b2230: sturb w10, [x29, #-0xa] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-10)), ARC_W_R(c, 10));
  /* b2234: ldurb w10, [x8, #-7] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(-7))));
  /* b2238: sturb w9, [x8, #-6] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(-6)), ARC_W_R(c, 9));
  /* b223c: ldurb w9, [x29, #-9] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 29) + INT64_C(-9))));
  /* b2240: sturb w10, [x29, #-9] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-9)), ARC_W_R(c, 10));
  /* b2244: sturb w9, [x8, #-7] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(-7)), ARC_W_R(c, 9));
L_b2248:;
  /* b2248: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* b224c: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* b2250: adrp x2, #0x51000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(331776)));
  /* b2254: add x2, x2, #0xa12 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2578)));
  /* b2258: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* b225c: mov w1, #0x2a */
  ARC_W_W(c, 1, UINT64_C(42));
  /* b2260: stur q1, [sp, #0x1a] */
  arc_st64(((c)->sp + INT64_C(26)), (c)->q[1].u64[0]);
  arc_st64(((c)->sp + INT64_C(26)) + 8, (c)->q[1].u64[1]);
  /* b2264: stp q1, q1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* b2268: bl #0x1428c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(729708));
  fn1_1428c0(c);
  /* b226c: cbz w0, #0xb22c8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_b22c8;
  /* b2270: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b2274: sxtw x20, w0 */
  ARC_X_W(c, 20, ((int64_t)(int32_t)(ARC_W_R(c, 0))));
  /* b2278: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b227c: add x10, x8, x20 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + ARC_X_R(c, 20)));
  /* b2280: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b2284: b.ls #0xb22ac */
  if (ARC_COND(c, 9)) goto L_b22ac;
  /* b2288: lsl x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b228c: add x9, x10, #0x3e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(992)));
  /* b2290: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b2294: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* b2298: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b229c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(729760));
  fn1_142878(c);
  /* b22a0: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b22a4: cbz x0, #0xb22dc */
  if ((ARC_X_R(c, 0)) == 0) goto L_b22dc;
  /* b22a8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b22ac:;
  /* b22ac: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b22b0: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* b22b4: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* b22b8: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(729788));
  fn1_1449d8(c);
  /* b22bc: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b22c0: add x8, x8, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 20)));
  /* b22c4: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_b22c8:;
  /* b22c8: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b22cc: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b22d0: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* b22d4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b22d8: ret  */
  return;
L_b22dc:;
  /* b22dc: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(729824));
  fn1_1427b8(c);
}

void fn1_b6218(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038673944));
  /* b6218: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b621c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b6220: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b6224: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b6228: ldp x9, x10, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b622c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b6230: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* b6234: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b6238: add x11, x9, #6 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(6)));
  /* b623c: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* b6240: b.ls #0xb6270 */
  if (ARC_COND(c, 9)) goto L_b6270;
  /* b6244: lsl x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b6248: add x9, x9, #0x3e6 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(998)));
  /* b624c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* b6250: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b6254: csel x1, x10, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* b6258: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b625c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(746080));
  fn1_142878(c);
  /* b6260: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b6264: cbz x0, #0xb62ec */
  if ((ARC_X_R(c, 0)) == 0) goto L_b62ec;
  /* b6268: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b626c: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
L_b6270:;
  /* b6270: mov w10, #0x6874 */
  ARC_W_W(c, 10, UINT64_C(26740));
  /* b6274: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* b6278: mov w9, #0x2077 */
  ARC_W_W(c, 9, UINT64_C(8311));
  /* b627c: movk w10, #0x6f72, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1869742080)));
  /* b6280: strh w9, [x8, #4] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(4)), ARC_W_R(c, 9));
  /* b6284: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b6288: str w10, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* b628c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b6290: ldr x20, [x20, #0x10] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* b6294: add x8, x8, #6 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(6)));
  /* b6298: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* b629c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b62a0: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b62a4: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* b62a8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(746156));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b62ac: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b62b0: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b62b4: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b62b8: b.ne #0xb62cc */
  if (ARC_COND(c, 1)) goto L_b62cc;
  /* b62bc: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b62c0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b62c4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b62c8: ret  */
  return;
L_b62cc:;
  /* b62cc: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b62d0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b62d4: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b62d8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b62dc: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b62e0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b62e4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b62e8: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_b62ec:;
  /* b62ec: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(746224));
  fn1_1427b8(c);
}

void fn1_b866c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038683244));
  /* b866c: bti c */
  /* bti: no architectural effect here */
  /* b8670: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* b8674: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_bbde4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038697444));
  /* bbde4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bbde8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bbdec: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* bbdf0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bbdf4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bbdf8: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* bbdfc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* bbe00: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* bbe04: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* bbe08: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* bbe0c: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* bbe10: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(769556));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bbe14: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* bbe18: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* bbe1c: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* bbe20: b.eq #0xbbe38 */
  if (ARC_COND(c, 0)) goto L_bbe38;
  /* bbe24: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* bbe28: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* bbe2c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bbe30: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* bbe34: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(769592));
  arc_dispatch(c, ARC_X_R(c, 8));
L_bbe38:;
  /* bbe38: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* bbe3c: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* bbe40: add x10, x8, #8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* bbe44: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* bbe48: b.ls #0xbbe70 */
  if (ARC_COND(c, 9)) goto L_bbe70;
  /* bbe4c: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* bbe50: add x8, x8, #0x3e8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1000)));
  /* bbe54: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bbe58: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bbe5c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bbe60: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(769636));
  fn1_142878(c);
  /* bbe64: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bbe68: cbz x0, #0xbbf30 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bbf30;
  /* bbe6c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_bbe70:;
  /* bbe70: mov x9, #0x7620 */
  ARC_X_W(c, 9, UINT64_C(30240));
  /* bbe74: movk x9, #0x6365, lsl #16 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1667563520)));
  /* bbe78: movk x9, #0x6f74, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(122544006889472)));
  /* bbe7c: movk x9, #0x5b72, lsl #48 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(281474976710655)) | UINT64_C(6589329204796456960)));
  /* bbe80: str x9, [x0, x8] */
  arc_st64((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_X_R(c, 9));
  /* bbe84: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bbe88: ldr x20, [x20, #0x18] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* bbe8c: add x8, x8, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* bbe90: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* bbe94: cbz x20, #0xbbed0 */
  if ((ARC_X_R(c, 20)) == 0) goto L_bbed0;
  /* bbe98: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* bbe9c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* bbea0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bbea4: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* bbea8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(769708));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bbeac: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* bbeb0: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* bbeb4: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* bbeb8: b.eq #0xbbed0 */
  if (ARC_COND(c, 0)) goto L_bbed0;
  /* bbebc: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* bbec0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* bbec4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bbec8: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* bbecc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(769744));
  arc_dispatch(c, ARC_X_R(c, 8));
L_bbed0:;
  /* bbed0: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* bbed4: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* bbed8: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bbedc: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* bbee0: b.ls #0xbbf08 */
  if (ARC_COND(c, 9)) goto L_bbf08;
  /* bbee4: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* bbee8: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* bbeec: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bbef0: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bbef4: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bbef8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(769788));
  fn1_142878(c);
  /* bbefc: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bbf00: cbz x0, #0xbbf34 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bbf34;
  /* bbf04: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_bbf08:;
  /* bbf08: mov w9, #0x5d */
  ARC_W_W(c, 9, UINT64_C(93));
  /* bbf0c: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* bbf10: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bbf14: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bbf18: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* bbf1c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bbf20: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* bbf24: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bbf28: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bbf2c: ret  */
  return;
L_bbf30:;
  /* bbf30: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(769844));
  fn1_1427b8(c);
L_bbf34:;
  /* bbf34: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(769848));
  fn1_1427b8(c);
}

void fn1_be8c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038708424));
  /* be8c8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* be8cc: sub sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(176)));
  /* be8d0: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* be8d4: stp x28, x27, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* be8d8: stp x26, x25, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* be8dc: stp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* be8e0: stp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* be8e4: stp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* be8e8: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* be8ec: cbnz x0, #0xbe8f8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_be8f8;
  /* be8f0: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(780532));
  fn1_142548(c);
L_be8f4:;
  /* be8f4: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(780536));
  fn1_142488(c);
L_be8f8:;
  /* be8f8: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* be8fc: nop  */
  /* nop: no architectural effect here */
  /* be900: adr x0, #0x156bb8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1403832)));
  /* be904: bl #0x144ac8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(780552));
  fn1_144ac8(c);
  /* be908: mov x9, #0x2b2b */
  ARC_X_W(c, 9, UINT64_C(11051));
  /* be90c: mov x25, x24 */
  ARC_X_W(c, 25, ARC_X_R(c, 24));
  /* be910: mov x26, x0 */
  ARC_X_W(c, 26, ARC_X_R(c, 0));
  /* be914: movk x9, #0x4743, lsl #16 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1195573248)));
  /* be918: ldr x8, [x25], #0xffffffffffffffa0 */
  { const uint64_t _a = ARC_X_R(c, 25);
    ARC_X_W(c, 25, ARC_X_R(c, 25) + INT64_C(-96));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* be91c: movk x9, #0x4c4e, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(83897891160064)));
  /* be920: movk x9, #0x43, lsl #48 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(281474976710655)) | UINT64_C(18858823439613952)));
  /* be924: cmp x9, x8, lsr #8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)(ARC_X_R(c, 8)) >> 8));
  /* be928: b.ne #0xbe964 */
  if (ARC_COND(c, 1)) goto L_be964;
  /* be92c: ldur w8, [x24, #-0x28] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 24) + INT64_C(-40))));
  /* be930: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* be934: cneg w8, w8, mi */
  ARC_W_W(c, 8, (ARC_COND(c, 4) ? ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 8))) : (ARC_W_R(c, 8))));
  /* be938: add w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* be93c: stur w8, [x24, #-0x28] */
  arc_st32((ARC_X_R(c, 24) + INT64_C(-40)), ARC_W_R(c, 8));
  /* be940: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* be944: cmp x25, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* be948: b.eq #0xbe954 */
  if (ARC_COND(c, 0)) goto L_be954;
  /* be94c: stur x8, [x24, #-0x30] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(-48)), ARC_X_R(c, 8));
  /* be950: str x25, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 25));
L_be954:;
  /* be954: ldr w8, [x26, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 26) + INT64_C(8))));
  /* be958: sub w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* be95c: str w8, [x26, #8] */
  arc_st32((ARC_X_R(c, 26) + INT64_C(8)), ARC_W_R(c, 8));
  /* be960: b #0xbe970 */
  goto L_be970;
L_be964:;
  /* be964: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* be968: cbnz x8, #0xbe8f4 */
  if ((ARC_X_R(c, 8)) != 0) goto L_be8f4;
  /* be96c: str x25, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 25));
L_be970:;
  /* be970: mov x20, #0x2b00 */
  ARC_X_W(c, 20, UINT64_C(11008));
  /* be974: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* be978: movk x20, #0x432b, lsl #16 */
  ARC_X_W(c, 20, ((ARC_X_R(c, 20) & UINT64_C(18446744069414649855)) | UINT64_C(1126891520)));
  /* be97c: movk x20, #0x4e47, lsl #32 */
  ARC_X_W(c, 20, ((ARC_X_R(c, 20) & UINT64_C(18446462603027808255)) | UINT64_C(86066849644544)));
  /* be980: and x22, x8, #0xffffffffffffff00 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) & UINT64_C(18446744073709551360)));
  /* be984: movk x20, #0x434c, lsl #48 */
  ARC_X_W(c, 20, ((ARC_X_R(c, 20) & UINT64_C(281474976710655)) | UINT64_C(4849250898771181568)));
  /* be988: cmp x22, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 20));
  /* be98c: b.ne #0xbe9a8 */
  if (ARC_COND(c, 1)) goto L_be9a8;
  /* be990: ldur w8, [x24, #-0x24] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 24) + INT64_C(-36))));
  /* be994: ldp x0, x28, [x24, #-0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 24) + INT64_C(-64));
    ARC_X_W(c, 0, arc_ld64(_pa));
    ARC_X_W(c, 28, arc_ld64(_pa + 8));
  }
  /* be998: ldp x19, x21, [x24, #-0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 24) + INT64_C(-24));
    ARC_X_W(c, 19, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* be99c: mvn w8, w8 */
  ARC_W_W(c, 8, (~(uint32_t)(ARC_W_R(c, 8))));
  /* be9a0: sxtw x27, w8 */
  ARC_X_W(c, 27, ((int64_t)(int32_t)(ARC_W_R(c, 8))));
  /* be9a4: b #0xbe9c8 */
  goto L_be9c8;
L_be9a8:;
  /* be9a8: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* be9ac: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* be9b0: mov x21, xzr */
  ARC_X_W(c, 21, ARC_X_R(c, 31));
  /* be9b4: ldr x8, [x8, #0x8b0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2224))));
  /* be9b8: ldr x9, [x9, #0x8b8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2232))));
  /* be9bc: mov x25, xzr */
  ARC_X_W(c, 25, ARC_X_R(c, 31));
  /* be9c0: ldar x28, [x8] */
  ARC_X_W(c, 28, arc_ld64(ARC_X_R(c, 8)));
  /* be9c4: ldar x0, [x9] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 9)));
L_be9c8:;
  /* be9c8: bl #0xa14cc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(780748));
  fn1_a14cc(c);
  /* be9cc: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* be9d0: ldr x9, [x8], #0xffffffffffffffa0 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-96));
    ARC_X_W(c, 9, arc_ld64(_a));
  }
  /* be9d4: and x9, x9, #0xffffffffffffff00 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551360)));
  /* be9d8: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* be9dc: b.ne #0xbea20 */
  if (ARC_COND(c, 1)) goto L_bea20;
  /* be9e0: ldur w9, [x0, #-0x28] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 0) + INT64_C(-40))));
  /* be9e4: cmp w9, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(0));
  /* be9e8: cneg w9, w9, mi */
  ARC_W_W(c, 9, (ARC_COND(c, 4) ? ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 9))) : (ARC_W_R(c, 9))));
  /* be9ec: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* be9f0: stur w9, [x0, #-0x28] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(-40)), ARC_W_R(c, 9));
  /* be9f4: ldr x9, [x26] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 26)));
  /* be9f8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* be9fc: b.eq #0xbea08 */
  if (ARC_COND(c, 0)) goto L_bea08;
  /* bea00: stur x9, [x0, #-0x30] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(-48)), ARC_X_R(c, 9));
  /* bea04: str x8, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 8));
L_bea08:;
  /* bea08: ldr w8, [x26, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 26) + INT64_C(8))));
  /* bea0c: sub w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* bea10: str w8, [x26, #8] */
  arc_st32((ARC_X_R(c, 26) + INT64_C(8)), ARC_W_R(c, 8));
  /* bea14: cmp x22, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 20));
  /* bea18: b.eq #0xbea34 */
  if (ARC_COND(c, 0)) goto L_bea34;
  /* bea1c: b #0xbec48 */
  goto L_bec48;
L_bea20:;
  /* bea20: ldr x9, [x26] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 26)));
  /* bea24: cbnz x9, #0xbe8f4 */
  if ((ARC_X_R(c, 9)) != 0) goto L_be8f4;
  /* bea28: str x8, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 8));
  /* bea2c: cmp x22, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 20));
  /* bea30: b.ne #0xbec48 */
  if (ARC_COND(c, 1)) goto L_bec48;
L_bea34:;
  /* bea34: ldrb w1, [x19], #1 */
  { const uint64_t _a = ARC_X_R(c, 19);
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(1));
    ARC_W_W(c, 1, arc_ld8(_a));
  }
  /* bea38: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* bea3c: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* bea40: stur x19, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 19));
  /* bea44: bl #0xbed70 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(780872));
  fn1_bed70(c);
  /* bea48: ldur x9, [x29, #-0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* bea4c: ldrb w23, [x9] */
  ARC_W_W(c, 23, arc_ld8(ARC_X_R(c, 9)));
  /* bea50: cmp x23, #0xff */
  (void)arc_sub64(c, ARC_X_R(c, 23), UINT64_C(255));
  /* bea54: b.eq #0xbea94 */
  if (ARC_COND(c, 0)) goto L_bea94;
  /* bea58: str x27, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 27));
  /* bea5c: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* bea60: add x27, x9, #1 */
  ARC_X_W(c, 27, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* bea64: stur x26, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), ARC_X_R(c, 26));
  /* bea68: mov x26, xzr */
  ARC_X_W(c, 26, ARC_X_R(c, 31));
L_bea6c:;
  /* bea6c: ldrb w9, [x27], #1 */
  { const uint64_t _a = ARC_X_R(c, 27);
    ARC_X_W(c, 27, ARC_X_R(c, 27) + INT64_C(1));
    ARC_W_W(c, 9, arc_ld8(_a));
  }
  /* bea70: and x10, x9, #0x7f */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) & UINT64_C(127)));
  /* bea74: lsl x10, x10, x8 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) << ((ARC_X_R(c, 8)) & 63)));
  /* bea78: add x8, x8, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(7)));
  /* bea7c: orr x26, x10, x26 */
  ARC_X_W(c, 26, (ARC_X_R(c, 10) | ARC_X_R(c, 26)));
  /* bea80: tbnz w9, #7, #0xbea6c */
  if (((ARC_W_R(c, 9)) >> 7 & 1) != 0) goto L_bea6c;
  /* bea84: ldur x8, [x29, #-0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))));
  /* bea88: stur x27, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 27));
  /* bea8c: ldr x11, [x8] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 8)));
  /* bea90: cbnz x11, #0xbea9c */
  if ((ARC_X_R(c, 11)) != 0) goto L_bea9c;
L_bea94:;
  /* bea94: mov x0, x28 */
  ARC_X_W(c, 0, ARC_X_R(c, 28));
  /* bea98: bl #0xa1518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(780956));
  fn1_a1518(c);
L_bea9c:;
  /* bea9c: mov x10, x11 */
  ARC_X_W(c, 10, ARC_X_R(c, 11));
  /* beaa0: stp x28, x24, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 24));
  }
  /* beaa4: add x28, x27, x26 */
  ARC_X_W(c, 28, (ARC_X_R(c, 27) + ARC_X_R(c, 26)));
  /* beaa8: ldr x8, [x10, #0x60]! */
  { const uint64_t _a = (ARC_X_R(c, 10) + INT64_C(96));
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(96));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* beaac: and x9, x8, #0xffffffffffffff00 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) & UINT64_C(18446744073709551360)));
  /* beab0: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* beab4: b.ne #0xbeadc */
  if (ARC_COND(c, 1)) goto L_beadc;
  /* beab8: cmp x11, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 25));
  /* beabc: b.eq #0xbeadc */
  if (ARC_COND(c, 0)) goto L_beadc;
  /* beac0: add x9, x20, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) + UINT64_C(1)));
  /* beac4: ldr x25, [x11, #0x10] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 11) + INT64_C(16))));
  /* beac8: stp x10, x11, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 11));
  }
  /* beacc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* bead0: b.ne #0xbeb98 */
  if (ARC_COND(c, 1)) goto L_beb98;
  /* bead4: ldr x22, [x11, #8] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 11) + INT64_C(8))));
  /* bead8: b #0xbeb9c */
  goto L_beb9c;
L_beadc:;
  /* beadc: and w20, w23, #0xf */
  ARC_W_W(c, 20, (ARC_W_R(c, 23) & UINT64_C(15)));
L_beae0:;
  /* beae0: mov w10, #0x1c1d */
  ARC_W_W(c, 10, UINT64_C(7197));
  /* beae4: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* beae8: adrp x22, #0x151000 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1380352)));
  /* beaec: ldr x25, [x25, #0x8e0] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(2272))));
  /* beaf0: ldr x22, [x22, #0x8e8] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 22) + INT64_C(2280))));
  /* beaf4: lsr w19, w10, w20 */
  ARC_W_W(c, 19, ((uint32_t)(ARC_W_R(c, 10)) >> ((ARC_W_R(c, 20)) & 31)));
  /* beaf8: ldr x10, [sp, #0x28] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(40))));
  /* beafc: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* beb00: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* beb04: add x11, x25, #0x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 25) + UINT64_C(16)));
  /* beb08: mov w20, w20 */
  ARC_W_W(c, 20, ARC_W_R(c, 20));
  /* beb0c: add x24, x10, x26 */
  ARC_X_W(c, 24, (ARC_X_R(c, 10) + ARC_X_R(c, 26)));
  /* beb10: sub x26, x29, #0x18 */
  ARC_X_W(c, 26, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* beb14: stur x11, [x29, #-0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-24)), ARC_X_R(c, 11));
  /* beb18: b #0xbeb24 */
  goto L_beb24;
L_beb1c:;
  /* beb1c: add x9, x9, #7 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(7)));
  /* beb20: add x24, x24, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 24) + UINT64_C(1)));
L_beb24:;
  /* beb24: ldrb w10, [x27, x24] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 27) + ARC_X_R(c, 24))));
  /* beb28: and x11, x10, #0x7f */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) & UINT64_C(127)));
  /* beb2c: lsl x11, x11, x9 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 11)) << ((ARC_X_R(c, 9)) & 63)));
  /* beb30: orr x8, x11, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 11) | ARC_X_R(c, 8)));
  /* beb34: tbnz w10, #7, #0xbeb1c */
  if (((ARC_W_R(c, 10)) >> 7 & 1) != 0) goto L_beb1c;
  /* beb38: cbz x8, #0xbec44 */
  if ((ARC_X_R(c, 8)) == 0) goto L_bec44;
  /* beb3c: cmp w20, #0xc */
  (void)arc_sub32(c, ARC_W_R(c, 20), UINT64_C(12));
  /* beb40: b.hi #0xbec38 */
  if (ARC_COND(c, 8)) goto L_bec38;
  /* beb44: tbz w19, #0, #0xbec38 */
  if (((ARC_W_R(c, 19)) >> 0 & 1) == 0) goto L_bec38;
  /* beb48: nop  */
  /* nop: no architectural effect here */
  /* beb4c: adr x9, #0x54550 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(345424)));
  /* beb50: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* beb54: ldr x9, [x9, x20, lsl #3] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 20)) << 3))));
  /* beb58: mov w1, w23 */
  ARC_W_W(c, 1, ARC_W_R(c, 23));
  /* beb5c: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* beb60: madd x8, x9, x8, x28 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 28)) + ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 8)))));
  /* beb64: stur x8, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 8));
  /* beb68: bl #0xbed70 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(781164));
  fn1_bed70(c);
  /* beb6c: stur x26, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 26));
  /* beb70: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* beb74: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* beb78: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* beb7c: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* beb80: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(781188));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* beb84: tbnz w0, #0, #0xbec54 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_bec54;
  /* beb88: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* beb8c: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* beb90: add x24, x24, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 24) + UINT64_C(1)));
  /* beb94: b #0xbeb24 */
  goto L_beb24;
L_beb98:;
  /* beb98: add x22, x11, #0x80 */
  ARC_X_W(c, 22, (ARC_X_R(c, 11) + UINT64_C(128)));
L_beb9c:;
  /* beb9c: and x20, x23, #0xf */
  ARC_X_W(c, 20, (ARC_X_R(c, 23) & UINT64_C(15)));
  /* beba0: mov w10, #0x1c1d */
  ARC_W_W(c, 10, UINT64_C(7197));
  /* beba4: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* beba8: lsr w19, w10, w20 */
  ARC_W_W(c, 19, ((uint32_t)(ARC_W_R(c, 10)) >> ((ARC_W_R(c, 20)) & 31)));
  /* bebac: ldr x10, [sp, #0x28] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(40))));
  /* bebb0: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* bebb4: add x24, x10, x26 */
  ARC_X_W(c, 24, (ARC_X_R(c, 10) + ARC_X_R(c, 26)));
  /* bebb8: b #0xbebc4 */
  goto L_bebc4;
L_bebbc:;
  /* bebbc: add x9, x9, #7 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(7)));
  /* bebc0: add x24, x24, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 24) + UINT64_C(1)));
L_bebc4:;
  /* bebc4: ldrb w10, [x27, x24] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 27) + ARC_X_R(c, 24))));
  /* bebc8: and x11, x10, #0x7f */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) & UINT64_C(127)));
  /* bebcc: lsl x11, x11, x9 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 11)) << ((ARC_X_R(c, 9)) & 63)));
  /* bebd0: orr x8, x11, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 11) | ARC_X_R(c, 8)));
  /* bebd4: tbnz w10, #7, #0xbebbc */
  if (((ARC_W_R(c, 10)) >> 7 & 1) != 0) goto L_bebbc;
  /* bebd8: cbz x8, #0xbeae0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_beae0;
  /* bebdc: cmp w20, #0xc */
  (void)arc_sub32(c, ARC_W_R(c, 20), UINT64_C(12));
  /* bebe0: b.hi #0xbec38 */
  if (ARC_COND(c, 8)) goto L_bec38;
  /* bebe4: tbz w19, #0, #0xbec38 */
  if (((ARC_W_R(c, 19)) >> 0 & 1) == 0) goto L_bec38;
  /* bebe8: nop  */
  /* nop: no architectural effect here */
  /* bebec: adr x9, #0x54550 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(345424)));
  /* bebf0: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* bebf4: ldr x9, [x9, x20, lsl #3] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 20)) << 3))));
  /* bebf8: mov w1, w23 */
  ARC_W_W(c, 1, ARC_W_R(c, 23));
  /* bebfc: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* bec00: madd x8, x9, x8, x28 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 28)) + ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 8)))));
  /* bec04: stur x8, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 8));
  /* bec08: bl #0xbed70 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(781324));
  fn1_bed70(c);
  /* bec0c: stur x22, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 22));
  /* bec10: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* bec14: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* bec18: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* bec1c: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* bec20: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(781348));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bec24: tbnz w0, #0, #0xbec80 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_bec80;
  /* bec28: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* bec2c: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* bec30: add x24, x24, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 24) + UINT64_C(1)));
  /* bec34: b #0xbebc4 */
  goto L_bebc4;
L_bec38:;
  /* bec38: ldr x1, [sp, #0x20] */
  ARC_X_W(c, 1, arc_ld64(((c)->sp + INT64_C(32))));
  /* bec3c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* bec40: bl #0xbecd4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(781380));
  fn1_becd4(c);
L_bec44:;
  /* bec44: ldr x28, [sp, #0x18] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(24))));
L_bec48:;
  /* bec48: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(781388));
  fn1_142980(c);
  /* bec4c: mov x0, x28 */
  ARC_X_W(c, 0, ARC_X_R(c, 28));
  /* bec50: bl #0xa1518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(781396));
  fn1_a1518(c);
L_bec54:;
  /* bec54: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(781400));
  fn1_142980(c);
  /* bec58: mov w0, #8 */
  ARC_W_W(c, 0, UINT64_C(8));
  /* bec5c: bl #0x142410 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(781408));
  fn1_142410(c);
  /* bec60: add x8, x25, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 25) + UINT64_C(16)));
  /* bec64: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* bec68: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* bec6c: adrp x2, #0x151000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1380352)));
  /* bec70: ldr x1, [x1, #0x8e8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2280))));
  /* bec74: ldr x2, [x2, #0x8f8] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 2) + INT64_C(2296))));
  /* bec78: bl #0x142440 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(781436));
  fn1_142440(c);
  /* bec7c: b #0xbecb4 */
  goto L_becb4;
L_bec80:;
  /* bec80: ldr x11, [sp, #0x10] */
  ARC_X_W(c, 11, arc_ld64(((c)->sp + INT64_C(16))));
  /* bec84: ldur x10, [x29, #-0x20] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))));
  /* bec88: ldr w8, [x11, #0x38] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 11) + INT64_C(56))));
  /* bec8c: ldr w9, [x10, #8] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 10) + INT64_C(8))));
  /* bec90: neg w8, w8 */
  ARC_W_W(c, 8, ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 8))));
  /* bec94: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* bec98: str w8, [x11, #0x38] */
  arc_st32((ARC_X_R(c, 11) + INT64_C(56)), ARC_W_R(c, 8));
  /* bec9c: str w9, [x10, #8] */
  arc_st32((ARC_X_R(c, 10) + INT64_C(8)), ARC_W_R(c, 9));
  /* beca0: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(781476));
  fn1_142980(c);
  /* beca4: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(781480));
  fn1_142980(c);
  /* beca8: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* becac: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(781488));
  fn1_142548(c);
  /* becb0: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(781492));
  fn1_1429b0(c);
L_becb4:;
  /* becb4: b #0xbecc0 */
  goto L_becc0;
  /* becb8: b #0xbecc0 */
  goto L_becc0;
  /* becbc: b #0xbecc0 */
  goto L_becc0;
L_becc0:;
  /* becc0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* becc4: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(781512));
  fn1_142980(c);
  /* becc8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* beccc: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(781520));
  fn1_9cc20(c);
  /* becd0: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(781524));
  fn1_a1454(c);
}

void fn1_d4ea4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038800036));
  /* d4ea4: bti c */
  /* bti: no architectural effect here */
  /* d4ea8: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* d4eac: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* d4eb0: mov w1, w8 */
  ARC_W_W(c, 1, ARC_W_R(c, 8));
  /* d4eb4: b #0xd4eb8 */
  fn1_d4eb8(c); return;
}

void fn1_d88d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038814932));
  /* d88d4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d88d8: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d88dc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* d88e0: bl #0x142b30 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(887012));
  fn1_142b30(c);
  /* d88e4: cbz x1, #0xd8908 */
  if ((ARC_X_R(c, 1)) == 0) goto L_d8908;
  /* d88e8: cmp x1, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(2));
  /* d88ec: b.eq #0xd8914 */
  if (ARC_COND(c, 0)) goto L_d8914;
  /* d88f0: cmp x1, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(1));
  /* d88f4: b.ne #0xd8924 */
  if (ARC_COND(c, 1)) goto L_d8924;
  /* d88f8: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* d88fc: cmp w8, #0x2e */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(46));
  /* d8900: b.ne #0xd8924 */
  if (ARC_COND(c, 1)) goto L_d8924;
L_d8904:;
  /* d8904: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
L_d8908:;
  /* d8908: nop  */
  /* nop: no architectural effect here */
  /* d890c: adr x0, #0x5018e */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328078)));
  /* d8910: b #0xd8978 */
  goto L_d8978;
L_d8914:;
  /* d8914: ldrh w8, [x0] */
  ARC_W_W(c, 8, arc_ld16(ARC_X_R(c, 0)));
  /* d8918: mov w9, #0x2e2e */
  ARC_W_W(c, 9, UINT64_C(11822));
  /* d891c: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d8920: b.eq #0xd8904 */
  if (ARC_COND(c, 0)) goto L_d8904;
L_d8924:;
  /* d8924: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* d8928: add x9, x0, x1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + ARC_X_R(c, 1)));
  /* d892c: neg x10, x1 */
  ARC_X_W(c, 10, ((uint64_t)0 - (uint64_t)(ARC_X_R(c, 1))));
L_d8930:;
  /* d8930: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* d8934: b.eq #0xd895c */
  if (ARC_COND(c, 0)) goto L_d895c;
  /* d8938: add x11, x9, x8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + ARC_X_R(c, 8)));
  /* d893c: sub x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* d8940: ldurb w11, [x11, #-1] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 11) + INT64_C(-1))));
  /* d8944: cmp w11, #0x2e */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(46));
  /* d8948: b.ne #0xd8930 */
  if (ARC_COND(c, 1)) goto L_d8930;
  /* d894c: add x10, x1, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 1) + ARC_X_R(c, 8)));
  /* d8950: add x11, x10, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* d8954: cmp x11, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(2));
  /* d8958: b.hs #0xd8968 */
  if (ARC_COND(c, 2)) goto L_d8968;
L_d895c:;
  /* d895c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* d8960: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* d8964: b #0xd8978 */
  goto L_d8978;
L_d8968:;
  /* d8968: cmp x10, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 1));
  /* d896c: b.hi #0xd8984 */
  if (ARC_COND(c, 8)) goto L_d8984;
  /* d8970: add x0, x9, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) + ARC_X_R(c, 8)));
  /* d8974: neg x1, x8 */
  ARC_X_W(c, 1, ((uint64_t)0 - (uint64_t)(ARC_X_R(c, 8))));
L_d8978:;
  /* d8978: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d897c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d8980: ret  */
  return;
L_d8984:;
  /* d8984: adrp x0, #0x50000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(327680)));
  /* d8988: add x0, x0, #0xc97 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3223)));
  /* d898c: bl #0xda038 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(887184));
  fn1_da038(c);
}

void fn1_dc004(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038829060));
  /* dc004: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* dc008: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* dc00c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* dc010: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* dc014: ldr x8, [x8, #0xa20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2592))));
  /* dc018: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* dc01c: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* dc020: bl #0x142bf0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(901156));
  fn1_142bf0(c);
  /* dc024: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* dc028: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* dc02c: ret  */
  return;
  /* dc030: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(901172));
  fn1_a1454(c);
}

void fn1_e08d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038847696));
  /* e08d0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e08d4: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e08d8: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e08dc: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e08e0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e08e4: ldp x9, x11, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* e08e8: mov w8, #0x16 */
  ARC_W_W(c, 8, UINT64_C(22));
  /* e08ec: ldrb w10, [x0] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 0)));
  /* e08f0: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* e08f4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e08f8: mov x7, x1 */
  ARC_X_W(c, 7, ARC_X_R(c, 1));
  /* e08fc: and x12, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 12, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* e0900: tst w10, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1)));
  /* e0904: ubfx x10, x9, #1, #7 */
  ARC_X_W(c, 10, (((uint64_t)(ARC_X_R(c, 9)) >> 1) & UINT64_C(127)));
  /* e0908: sub x12, x12, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(1)));
  /* e090c: csel x8, x8, x12, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 12)));
  /* e0910: tst x9, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(1)));
  /* e0914: csel x21, x10, x11, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 11)));
  /* e0918: sub x10, x8, x21 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) - ARC_X_R(c, 21)));
  /* e091c: cmp x10, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 2));
  /* e0920: b.hs #0xe094c */
  if (ARC_COND(c, 2)) goto L_e094c;
  /* e0924: sub x9, x20, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) - ARC_X_R(c, 8)));
  /* e0928: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e092c: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* e0930: add x2, x9, x21 */
  ARC_X_W(c, 2, (ARC_X_R(c, 9) + ARC_X_R(c, 21)));
  /* e0934: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* e0938: mov x4, x21 */
  ARC_X_W(c, 4, ARC_X_R(c, 21));
  /* e093c: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* e0940: mov x6, x20 */
  ARC_X_W(c, 6, ARC_X_R(c, 20));
  /* e0944: bl #0x142b90 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(919880));
  fn1_142b90(c);
  /* e0948: b #0xe098c */
  goto L_e098c;
L_e094c:;
  /* e094c: cbz x20, #0xe098c */
  if ((ARC_X_R(c, 20)) == 0) goto L_e098c;
  /* e0950: ldr x8, [x19, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* e0954: tst x9, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(1)));
  /* e0958: mov x1, x7 */
  ARC_X_W(c, 1, ARC_X_R(c, 7));
  /* e095c: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* e0960: csinc x22, x8, x19, ne */
  ARC_X_W(c, 22, (ARC_COND(c, 1) ? (ARC_X_R(c, 8)) : ((ARC_X_R(c, 19)) + 1)));
  /* e0964: add x0, x22, x21 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + ARC_X_R(c, 21)));
  /* e0968: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(919916));
  fn1_1449f0(c);
  /* e096c: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* e0970: add x8, x21, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) + ARC_X_R(c, 20)));
  /* e0974: tbnz w9, #0, #0xe0984 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_e0984;
  /* e0978: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* e097c: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* e0980: b #0xe0988 */
  goto L_e0988;
L_e0984:;
  /* e0984: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_e0988:;
  /* e0988: strb wzr, [x22, x8] */
  arc_st8((ARC_X_R(c, 22) + ARC_X_R(c, 8)), ARC_W_R(c, 31));
L_e098c:;
  /* e098c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e0990: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e0994: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e0998: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e099c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e09a0: ret  */
  return;
}

void fn1_e32c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038858440));
  /* e32c8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e32cc: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e32d0: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* e32d4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e32d8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e32dc: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* e32e0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e32e4: mov w19, w1 */
  ARC_W_W(c, 19, ARC_W_R(c, 1));
  /* e32e8: tbnz w9, #0, #0xe32fc */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_e32fc;
  /* e32ec: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* e32f0: b.ne #0xe3344 */
  if (ARC_COND(c, 1)) goto L_e3344;
  /* e32f4: mov w21, #4 */
  ARC_W_W(c, 21, UINT64_C(4));
  /* e32f8: b #0xe3310 */
  goto L_e3310;
L_e32fc:;
  /* e32fc: ldp x9, x8, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* e3300: and x9, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* e3304: sub x21, x9, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* e3308: cmp x8, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 21));
  /* e330c: b.ne #0xe3334 */
  if (ARC_COND(c, 1)) goto L_e3334;
L_e3310:;
  /* e3310: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e3314: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* e3318: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* e331c: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* e3320: mov x4, x21 */
  ARC_X_W(c, 4, ARC_X_R(c, 21));
  /* e3324: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* e3328: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* e332c: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(930608));
  fn1_142da0(c);
  /* e3330: mov x8, x21 */
  ARC_X_W(c, 8, ARC_X_R(c, 21));
L_e3334:;
  /* e3334: ldr x9, [x20, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* e3338: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* e333c: str x10, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 10));
  /* e3340: b #0xe3354 */
  goto L_e3354;
L_e3344:;
  /* e3344: lsr x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* e3348: add w9, w9, #2 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(2)));
  /* e334c: strb w9, [x20], #4 */
  { const uint64_t _a = ARC_X_R(c, 20);
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* e3350: mov x9, x20 */
  ARC_X_W(c, 9, ARC_X_R(c, 20));
L_e3354:;
  /* e3354: add x8, x9, x8, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 2)));
  /* e3358: stp w19, wzr, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st32(_pa, ARC_W_R(c, 19));
    arc_st32(_pa + 4, ARC_W_R(c, 31));
  }
  /* e335c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e3360: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* e3364: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e3368: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e336c: ret  */
  return;
}

void fn1_e7af0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038876912));
  /* e7af0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e7af4: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e7af8: stp x28, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e7afc: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e7b00: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e7b04: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e7b08: sub sp, sp, #0x400 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(1024)));
  /* e7b0c: mov w22, w1 */
  ARC_W_W(c, 22, ARC_W_R(c, 1));
  /* e7b10: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* e7b14: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(949016));
  fn1_142a58(c);
  /* e7b18: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e7b1c: ldr w23, [x0] */
  ARC_W_W(c, 23, arc_ld32(ARC_X_R(c, 0)));
  /* e7b20: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* e7b24: mov w0, w22 */
  ARC_W_W(c, 0, ARC_W_R(c, 22));
  /* e7b28: mov w2, #0x400 */
  ARC_W_W(c, 2, UINT64_C(1024));
  /* e7b2c: mov x20, sp */
  ARC_X_W(c, 20, (c)->sp);
  /* e7b30: bl #0x143070 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(949044));
  fn1_143070(c);
  /* e7b34: cbz w0, #0xe7b54 */
  if ((ARC_W_R(c, 0)) == 0) goto L_e7b54;
  /* e7b38: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* e7b3c: b.ne #0xe7b44 */
  if (ARC_COND(c, 1)) goto L_e7b44;
  /* e7b40: ldr w0, [x21] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 21)));
L_e7b44:;
  /* e7b44: cmp w0, #0x16 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(22));
  /* e7b48: b.ne #0xe7c04 */
  if (ARC_COND(c, 1)) goto L_e7c04;
  /* e7b4c: nop  */
  /* nop: no architectural effect here */
  /* e7b50: adr x20, #0x5018e */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(328078)));
L_e7b54:;
  /* e7b54: ldrb w8, [x20] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 20)));
  /* e7b58: cbnz w8, #0xe7b78 */
  if ((ARC_W_R(c, 8)) != 0) goto L_e7b78;
  /* e7b5c: nop  */
  /* nop: no architectural effect here */
  /* e7b60: adr x2, #0x5181f */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(333855)));
  /* e7b64: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e7b68: mov w1, #0x400 */
  ARC_W_W(c, 1, UINT64_C(1024));
  /* e7b6c: mov w3, w22 */
  ARC_W_W(c, 3, ARC_W_R(c, 22));
  /* e7b70: mov x20, sp */
  ARC_X_W(c, 20, (c)->sp);
  /* e7b74: bl #0x1428c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(949112));
  fn1_1428c0(c);
L_e7b78:;
  /* e7b78: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e7b7c: str w23, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 23));
  /* e7b80: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(949124));
  fn1_142860(c);
  /* e7b84: cmn x0, #8 */
  (void)arc_add64(c, ARC_X_R(c, 0), UINT64_C(8), 0);
  /* e7b88: b.hs #0xe7c00 */
  if (ARC_COND(c, 2)) goto L_e7c00;
  /* e7b8c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e7b90: cmp x0, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(23));
  /* e7b94: b.hs #0xe7ba8 */
  if (ARC_COND(c, 2)) goto L_e7ba8;
  /* e7b98: lsl w8, w21, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 21)) << ((UINT64_C(1)) & 31)));
  /* e7b9c: strb w8, [x19], #1 */
  { const uint64_t _a = ARC_X_R(c, 19);
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* e7ba0: cbnz x21, #0xe7bd0 */
  if ((ARC_X_R(c, 21)) != 0) goto L_e7bd0;
  /* e7ba4: b #0xe7be0 */
  goto L_e7be0;
L_e7ba8:;
  /* e7ba8: orr x8, x21, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) | UINT64_C(7)));
  /* e7bac: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* e7bb0: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* e7bb4: csinc x22, x9, x8, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* e7bb8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* e7bbc: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(949184));
  fn1_1428f0(c);
  /* e7bc0: orr x8, x22, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) | UINT64_C(1)));
  /* e7bc4: stp x21, x0, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* e7bc8: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* e7bcc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_e7bd0:;
  /* e7bd0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e7bd4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* e7bd8: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* e7bdc: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(949216));
  fn1_1449f0(c);
L_e7be0:;
  /* e7be0: strb wzr, [x19, x21] */
  arc_st8((ARC_X_R(c, 19) + ARC_X_R(c, 21)), ARC_W_R(c, 31));
  /* e7be4: add sp, sp, #0x400 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(1024)));
  /* e7be8: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e7bec: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e7bf0: ldp x28, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e7bf4: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e7bf8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e7bfc: ret  */
  return;
L_e7c00:;
  /* e7c00: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(949252));
  fn1_d7d54(c);
L_e7c04:;
  /* e7c04: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(949256));
  fn1_1427b8(c);
}

void fn1_ea31c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038887196));
  /* ea31c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ea320: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ea324: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* ea328: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ea32c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ea330: add x0, x0, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* ea334: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959288));
  fn1_142518(c);
  /* ea338: cbnz w0, #0xea3b0 */
  if ((ARC_W_R(c, 0)) != 0) goto L_ea3b0;
  /* ea33c: ldr w8, [x19, #0x70] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(112))));
  /* ea340: tbnz w8, #2, #0xea360 */
  if (((ARC_W_R(c, 8)) >> 2 & 1) != 0) goto L_ea360;
  /* ea344: tbnz w8, #3, #0xea378 */
  if (((ARC_W_R(c, 8)) >> 3 & 1) != 0) goto L_ea378;
L_ea348:;
  /* ea348: add x0, x19, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(64)));
  /* ea34c: add x1, x19, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* ea350: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959316));
  fn1_142530(c);
  /* ea354: cbnz w0, #0xea3a4 */
  if ((ARC_W_R(c, 0)) != 0) goto L_ea3a4;
  /* ea358: ldrb w8, [x19, #0x70] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(112))));
  /* ea35c: tbz w8, #2, #0xea348 */
  if (((ARC_W_R(c, 8)) >> 2 & 1) == 0) goto L_ea348;
L_ea360:;
  /* ea360: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* ea364: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959336));
  fn1_142560(c);
  /* ea368: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* ea36c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ea370: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ea374: ret  */
  return;
L_ea378:;
  /* ea378: and w8, w8, #0xfffffff3 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(4294967283)));
  /* ea37c: str w8, [x19, #0x70] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(112)), ARC_W_R(c, 8));
  /* ea380: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* ea384: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959368));
  fn1_142560(c);
  /* ea388: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ea38c: ldr x16, [x8, #0x18] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* ea390: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ea394: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* ea398: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ea39c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ea3a0: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_ea3a4:;
  /* ea3a4: nop  */
  /* nop: no architectural effect here */
  /* ea3a8: adr x1, #0x50514 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(328980)));
  /* ea3ac: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959408));
  fn1_142a40(c);
L_ea3b0:;
  /* ea3b0: nop  */
  /* nop: no architectural effect here */
  /* ea3b4: adr x1, #0x50f67 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331623)));
  /* ea3b8: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959420));
  fn1_142a40(c);
  /* ea3bc: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959424));
  fn1_a1454(c);
  /* ea3c0: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959428));
  fn1_a1454(c);
  /* ea3c4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959432));
  fn1_a1454(c);
  /* ea3c8: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959436));
  fn1_a1454(c);
}

void fn1_ebd08(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038893832));
  /* ebd08: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ebd0c: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ebd10: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ebd14: nop  */
  /* nop: no architectural effect here */
  /* ebd18: adr x0, #0x518c9 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(334025)));
  /* ebd1c: bl #0xd7d6c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(965920));
  fn1_d7d6c(c);
}

void fn1_ed7c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038900672));
  /* ed7c0: bti c */
  /* bti: no architectural effect here */
  /* ed7c4: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* ed7c8: ret  */
  return;
}

void fn1_f127c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038915708));
  /* f127c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f1280: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f1284: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* f1288: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f128c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f1290: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f1294: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f1298: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* f129c: blr x1 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(987808));
  arc_dispatch(c, ARC_X_R(c, 1));
  /* f12a0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f12a4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f12a8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f12ac: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f12b0: ret  */
  return;
}

void fn1_f41f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038927856));
  /* f41f0: bti c */
  /* bti: no architectural effect here */
  /* f41f4: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* f41f8: ret  */
  return;
}

void fn1_f7cb4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038942900));
  /* f7cb4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f7cb8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f7cbc: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* f7cc0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f7cc4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f7cc8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f7ccc: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f7cd0: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* f7cd4: blr x1 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1015000));
  arc_dispatch(c, ARC_X_R(c, 1));
  /* f7cd8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f7cdc: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f7ce0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f7ce4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f7ce8: ret  */
  return;
}

void fn1_fd128(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038964520));
  /* fd128: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fd12c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fd130: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* fd134: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fd138: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fd13c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fd140: adrp x10, #0x151000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fd144: ldr x8, [x8, #0xb00] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2816))));
  /* fd148: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* fd14c: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* fd150: ldr x10, [x10, #0xae0] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2784))));
  /* fd154: add x11, x8, #0x18 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* fd158: add x19, x0, x9 */
  ARC_X_W(c, 19, (ARC_X_R(c, 0) + ARC_X_R(c, 9)));
  /* fd15c: add x9, x8, #0x68 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(104)));
  /* fd160: add x8, x8, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* fd164: mov x20, x19 */
  ARC_X_W(c, 20, ARC_X_R(c, 19));
  /* fd168: add x10, x10, #0x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(16)));
  /* fd16c: str x11, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 11));
  /* fd170: str x9, [x20, #0x80]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(128));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(128));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* fd174: ldrb w9, [x19, #0x58] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 19) + INT64_C(88))));
  /* fd178: stp x8, x10, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* fd17c: tbz w9, #0, #0xfd190 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_fd190;
  /* fd180: ldr x8, [x19, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(88))));
  /* fd184: ldr x0, [x19, #0x68] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(104))));
  /* fd188: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* fd18c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1036688));
  fn1_142608(c);
L_fd190:;
  /* fd190: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fd194: nop  */
  /* nop: no architectural effect here */
  /* fd198: adr x9, #0x15dc40 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1432640)));
  /* fd19c: ldr x8, [x8, #0xaa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2728))));
  /* fd1a0: ldr x21, [x19, #0x20] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* fd1a4: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* fd1a8: cmp x21, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 9));
  /* fd1ac: str x8, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 8));
  /* fd1b0: b.eq #0xfd1d4 */
  if (ARC_COND(c, 0)) goto L_fd1d4;
  /* fd1b4: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* fd1b8: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fd1bc: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1036736));
  fn1_bd950(c);
  /* fd1c0: cbnz x0, #0xfd1d4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_fd1d4;
  /* fd1c4: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* fd1c8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* fd1cc: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fd1d0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1036756));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fd1d4:;
  /* fd1d4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fd1d8: bl #0x1433b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1036764));
  fn1_1433b8(c);
  /* fd1dc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fd1e0: mov w1, #0x118 */
  ARC_W_W(c, 1, UINT64_C(280));
  /* fd1e4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fd1e8: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* fd1ec: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fd1f0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fd1f4: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_1026c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038986440));
  /* 1026c8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1026cc: sub sp, sp, #0x1b0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(432)));
  /* 1026d0: stp x29, x30, [sp, #0x150] */
  { const uint64_t _pa = ((c)->sp + INT64_C(336));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1026d4: stp x28, x27, [sp, #0x160] */
  { const uint64_t _pa = ((c)->sp + INT64_C(352));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 1026d8: stp x26, x25, [sp, #0x170] */
  { const uint64_t _pa = ((c)->sp + INT64_C(368));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 1026dc: stp x24, x23, [sp, #0x180] */
  { const uint64_t _pa = ((c)->sp + INT64_C(384));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1026e0: stp x22, x21, [sp, #0x190] */
  { const uint64_t _pa = ((c)->sp + INT64_C(400));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1026e4: stp x20, x19, [sp, #0x1a0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(416));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1026e8: add x29, sp, #0x150 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(336)));
  /* 1026ec: mov x0, x3 */
  ARC_X_W(c, 0, ARC_X_R(c, 3));
  /* 1026f0: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 1026f4: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1026f8: sub x8, x29, #0x48 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1026fc: sub x1, x29, #0x24 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(36)));
  /* 102700: sub x2, x29, #0x28 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 102704: sub x3, x29, #0x2c */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(44)));
  /* 102708: stp x5, x4, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 5));
    arc_st64(_pa + 8, ARC_X_R(c, 4));
  }
  /* 10270c: sub x25, x29, #0x68 */
  ARC_X_W(c, 25, (ARC_X_R(c, 29) - UINT64_C(104)));
  /* 102710: bl #0x143898 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1058580));
  fn1_143898(c);
  /* 102714: stp xzr, xzr, [x25, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 102718: str xzr, [x25, #0x18] */
  arc_st64((ARC_X_R(c, 25) + INT64_C(24)), ARC_X_R(c, 31));
  /* 10271c: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 102720: mov w1, #0x16 */
  ARC_W_W(c, 1, UINT64_C(22));
  /* 102724: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 102728: sub x19, x29, #0x60 */
  ARC_X_W(c, 19, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 10272c: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1058608));
  fn1_142d10(c);
  /* 102730: ldurb w8, [x29, #-0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 102734: ldr x9, [x25, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 25) + INT64_C(24))));
  /* 102738: mov w26, wzr */
  ARC_W_W(c, 26, ARC_W_R(c, 31));
  /* 10273c: add x27, sp, #0x48 */
  ARC_X_W(c, 27, ((c)->sp + UINT64_C(72)));
  /* 102740: mov w10, #1 */
  ARC_W_W(c, 10, UINT64_C(1));
  /* 102744: orr x28, x19, #1 */
  ARC_X_W(c, 28, (ARC_X_R(c, 19) | UINT64_C(1)));
  /* 102748: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 10274c: mov w8, #0x45 */
  ARC_W_W(c, 8, UINT64_C(69));
  /* 102750: add x22, sp, #0x3c */
  ARC_X_W(c, 22, ((c)->sp + UINT64_C(60)));
  /* 102754: csinc x23, x9, x19, ne */
  ARC_X_W(c, 23, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* 102758: add x19, sp, #0x40 */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(64)));
  /* 10275c: str wzr, [sp, #0x3c] */
  arc_st32(((c)->sp + INT64_C(60)), ARC_W_R(c, 31));
  /* 102760: str x27, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 27));
  /* 102764: strb w10, [sp, #0x38] */
  arc_st8(((c)->sp + INT64_C(56)), ARC_W_R(c, 10));
  /* 102768: strb w8, [sp, #0x34] */
  arc_st8(((c)->sp + INT64_C(52)), ARC_W_R(c, 8));
  /* 10276c: str x23, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 23));
  /* 102770: b #0x10277c */
  goto L_10277c;
L_102774:;
  /* 102774: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 102778: str x8, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 8));
L_10277c:;
  /* 10277c: cbz x20, #0x1027a4 */
  if ((ARC_X_R(c, 20)) == 0) goto L_1027a4;
  /* 102780: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 102784: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 102788: b.eq #0x1027c0 */
  if (ARC_COND(c, 0)) goto L_1027c0;
  /* 10278c: cbz x21, #0x102830 */
  if ((ARC_X_R(c, 21)) == 0) goto L_102830;
  /* 102790: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 102794: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 102798: b.ne #0x102a0c */
  if (ARC_COND(c, 1)) goto L_102a0c;
  /* 10279c: mov w24, wzr */
  ARC_W_W(c, 24, ARC_W_R(c, 31));
  /* 1027a0: b #0x10280c */
  goto L_10280c;
L_1027a4:;
  /* 1027a4: cbz x21, #0x102a08 */
  if ((ARC_X_R(c, 21)) == 0) goto L_102a08;
  /* 1027a8: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1027ac: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 1027b0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1027b4: b.ne #0x102830 */
  if (ARC_COND(c, 1)) goto L_102830;
  /* 1027b8: mov w24, #1 */
  ARC_W_W(c, 24, UINT64_C(1));
  /* 1027bc: b #0x10280c */
  goto L_10280c;
L_1027c0:;
  /* 1027c0: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1027c4: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1027c8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1027cc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1058768));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1027d0: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1027d4: cset w24, eq */
  ARC_W_W(c, 24, (ARC_COND(c, 0) ? 1 : 0));
  /* 1027d8: cbz x21, #0x1027fc */
  if ((ARC_X_R(c, 21)) == 0) goto L_1027fc;
  /* 1027dc: ldp x9, x10, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 1027e0: csel x8, xzr, x20, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 20)));
  /* 1027e4: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 1027e8: b.eq #0x102808 */
  if (ARC_COND(c, 0)) goto L_102808;
  /* 1027ec: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1027f0: b.ne #0x102a0c */
  if (ARC_COND(c, 1)) goto L_102a0c;
  /* 1027f4: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 1027f8: b #0x102830 */
  goto L_102830;
L_1027fc:;
  /* 1027fc: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 102800: b.ne #0x102830 */
  if (ARC_COND(c, 1)) goto L_102830;
  /* 102804: b #0x102d78 */
  goto L_102d78;
L_102808:;
  /* 102808: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
L_10280c:;
  /* 10280c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 102810: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 102814: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 102818: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1058844));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10281c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 102820: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 102824: csel x21, xzr, x21, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 21)));
  /* 102828: cmp w24, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 24), ARC_W_R(c, 8));
  /* 10282c: b.eq #0x102a0c */
  if (ARC_COND(c, 0)) goto L_102a0c;
L_102830:;
  /* 102830: ldurb w8, [x29, #-0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 102834: ldr x9, [x25, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 25) + INT64_C(16))));
  /* 102838: ldr x11, [x25] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 25)));
  /* 10283c: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 102840: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 102844: csel x24, x10, x9, eq */
  ARC_X_W(c, 24, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 102848: add x9, x23, x24 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) + ARC_X_R(c, 24)));
  /* 10284c: cmp x11, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 9));
  /* 102850: b.ne #0x10290c */
  if (ARC_COND(c, 1)) goto L_10290c;
  /* 102854: cmp x24, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 24), UINT64_C(1));
  /* 102858: b.lt #0x102870 */
  if (ARC_COND(c, 11)) goto L_102870;
  /* 10285c: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 102860: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 102864: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 102868: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1058924));
  fn1_142d10(c);
  /* 10286c: b #0x102894 */
  goto L_102894;
L_102870:;
  /* 102870: lsl x9, x24, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 24)) << ((UINT64_C(1)) & 63)));
  /* 102874: tbnz w8, #0, #0x102888 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_102888;
  /* 102878: lsl w8, w9, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 9)) << ((UINT64_C(1)) & 31)));
  /* 10287c: sturb w8, [x29, #-0x60] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-96)), ARC_W_R(c, 8));
  /* 102880: mov x8, x28 */
  ARC_X_W(c, 8, ARC_X_R(c, 28));
  /* 102884: b #0x102890 */
  goto L_102890;
L_102888:;
  /* 102888: ldr x8, [x25, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(24))));
  /* 10288c: str x9, [x25, #0x10] */
  arc_st64((ARC_X_R(c, 25) + INT64_C(16)), ARC_X_R(c, 9));
L_102890:;
  /* 102890: strb wzr, [x8, x9] */
  arc_st8((ARC_X_R(c, 8) + ARC_X_R(c, 9)), ARC_W_R(c, 31));
L_102894:;
  /* 102894: ldp x9, x10, [x25, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 102898: ldurb w8, [x29, #-0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 10289c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1028a0: mov w8, #0x16 */
  ARC_W_W(c, 8, UINT64_C(22));
  /* 1028a4: and x11, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 1028a8: ubfx x12, x9, #1, #7 */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 9)) >> 1) & UINT64_C(127)));
  /* 1028ac: sub x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* 1028b0: csel x8, x8, x11, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 11)));
  /* 1028b4: tst x9, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(1)));
  /* 1028b8: csel x10, x12, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* 1028bc: subs x1, x8, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10)));
  /* 1028c0: b.ls #0x1028d4 */
  if (ARC_COND(c, 9)) goto L_1028d4;
  /* 1028c4: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 1028c8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1028cc: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1059024));
  fn1_142d10(c);
  /* 1028d0: b #0x1028f4 */
  goto L_1028f4;
L_1028d4:;
  /* 1028d4: tbnz w9, #0, #0x1028e8 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_1028e8;
  /* 1028d8: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* 1028dc: sturb w9, [x29, #-0x60] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-96)), ARC_W_R(c, 9));
  /* 1028e0: mov x9, x28 */
  ARC_X_W(c, 9, ARC_X_R(c, 28));
  /* 1028e4: b #0x1028f0 */
  goto L_1028f0;
L_1028e8:;
  /* 1028e8: ldr x9, [x25, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 25) + INT64_C(24))));
  /* 1028ec: str x8, [x25, #0x10] */
  arc_st64((ARC_X_R(c, 25) + INT64_C(16)), ARC_X_R(c, 8));
L_1028f0:;
  /* 1028f0: strb wzr, [x9, x8] */
  arc_st8((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_W_R(c, 31));
L_1028f4:;
  /* 1028f4: ldurb w8, [x29, #-0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 1028f8: ldr x9, [x25, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 25) + INT64_C(24))));
  /* 1028fc: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 102900: csel x23, x28, x9, eq */
  ARC_X_W(c, 23, (ARC_COND(c, 0) ? (ARC_X_R(c, 28)) : ARC_X_R(c, 9)));
  /* 102904: add x8, x23, x24 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) + ARC_X_R(c, 24)));
  /* 102908: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
L_10290c:;
  /* 10290c: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 102910: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 102914: b.eq #0x102920 */
  if (ARC_COND(c, 0)) goto L_102920;
  /* 102918: ldrb w0, [x8] */
  ARC_W_W(c, 0, arc_ld8(ARC_X_R(c, 8)));
  /* 10291c: b #0x102930 */
  goto L_102930;
L_102920:;
  /* 102920: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 102924: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 102928: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 10292c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1059120));
  arc_dispatch(c, ARC_X_R(c, 8));
L_102930:;
  /* 102930: ldurb w6, [x29, #-0x2c] */
  ARC_W_W(c, 6, arc_ld8((ARC_X_R(c, 29) + INT64_C(-44))));
  /* 102934: ldurb w5, [x29, #-0x28] */
  ARC_W_W(c, 5, arc_ld8((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 102938: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* 10293c: sub x8, x29, #0x24 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(36)));
  /* 102940: add x2, sp, #0x34 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(52)));
  /* 102944: sub x4, x29, #0x68 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(104)));
  /* 102948: sub x7, x29, #0x48 */
  ARC_X_W(c, 7, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 10294c: mov x3, x23 */
  ARC_X_W(c, 3, ARC_X_R(c, 23));
  /* 102950: stp x22, x8, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 102954: stp x27, x19, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 27));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 102958: bl #0x1438b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1059164));
  fn1_1438b0(c);
  /* 10295c: cbnz w0, #0x102a0c */
  if ((ARC_W_R(c, 0)) != 0) goto L_102a0c;
  /* 102960: tbz w26, #0, #0x10296c */
  if (((ARC_W_R(c, 26)) >> 0 & 1) == 0) goto L_10296c;
  /* 102964: mov w26, #1 */
  ARC_W_W(c, 26, UINT64_C(1));
  /* 102968: b #0x1029cc */
  goto L_1029cc;
L_10296c:;
  /* 10296c: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 102970: sub x9, x8, x23 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - ARC_X_R(c, 23)));
  /* 102974: cmp x9, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(1));
  /* 102978: b.lt #0x1029c8 */
  if (ARC_COND(c, 11)) goto L_1029c8;
  /* 10297c: ldrb w8, [x23] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 23)));
  /* 102980: cmp w8, #0x2b */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(43));
  /* 102984: b.eq #0x102990 */
  if (ARC_COND(c, 0)) goto L_102990;
  /* 102988: cmp w8, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(45));
  /* 10298c: b.ne #0x1029ec */
  if (ARC_COND(c, 1)) goto L_1029ec;
L_102990:;
  /* 102990: cmp x9, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(1));
  /* 102994: b.eq #0x1029c8 */
  if (ARC_COND(c, 0)) goto L_1029c8;
  /* 102998: cmp w8, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(45));
  /* 10299c: b.eq #0x1029a8 */
  if (ARC_COND(c, 0)) goto L_1029a8;
  /* 1029a0: cmp w8, #0x2b */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(43));
  /* 1029a4: b.ne #0x1029c8 */
  if (ARC_COND(c, 1)) goto L_1029c8;
L_1029a8:;
  /* 1029a8: ldrb w8, [x23, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 23) + INT64_C(1))));
  /* 1029ac: mov w26, #1 */
  ARC_W_W(c, 26, UINT64_C(1));
  /* 1029b0: cmp w8, #0x2e */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(46));
  /* 1029b4: b.eq #0x1029cc */
  if (ARC_COND(c, 0)) goto L_1029cc;
  /* 1029b8: sub w8, w8, #0x30 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* 1029bc: cmp w8, #9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(9));
  /* 1029c0: b.ls #0x1029cc */
  if (ARC_COND(c, 9)) goto L_1029cc;
  /* 1029c4: b #0x102a0c */
  goto L_102a0c;
L_1029c8:;
  /* 1029c8: mov w26, wzr */
  ARC_W_W(c, 26, ARC_W_R(c, 31));
L_1029cc:;
  /* 1029cc: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1029d0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1029d4: b.ne #0x102774 */
  if (ARC_COND(c, 1)) goto L_102774;
  /* 1029d8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1029dc: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 1029e0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1029e4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1059304));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1029e8: b #0x10277c */
  goto L_10277c;
L_1029ec:;
  /* 1029ec: cmp w8, #0x2e */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(46));
  /* 1029f0: mov w26, #1 */
  ARC_W_W(c, 26, UINT64_C(1));
  /* 1029f4: b.eq #0x1029cc */
  if (ARC_COND(c, 0)) goto L_1029cc;
  /* 1029f8: sub w8, w8, #0x30 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* 1029fc: cmp w8, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(10));
  /* 102a00: b.lo #0x1029cc */
  if (ARC_COND(c, 3)) goto L_1029cc;
  /* 102a04: b #0x102a0c */
  goto L_102a0c;
L_102a08:;
  /* 102a08: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
L_102a0c:;
  /* 102a0c: ldurb w8, [x29, #-0x48] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-72))));
  /* 102a10: ldr x9, [x25, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 25) + INT64_C(40))));
  /* 102a14: ldr x22, [sp, #0x28] */
  ARC_X_W(c, 22, arc_ld64(((c)->sp + INT64_C(40))));
  /* 102a18: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 102a1c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 102a20: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 102a24: cbz x8, #0x102a54 */
  if ((ARC_X_R(c, 8)) == 0) goto L_102a54;
  /* 102a28: ldrb w8, [sp, #0x38] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(56))));
  /* 102a2c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 102a30: b.ne #0x102a54 */
  if (ARC_COND(c, 1)) goto L_102a54;
  /* 102a34: ldr x8, [sp, #0x40] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(64))));
  /* 102a38: add x9, sp, #0x48 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(72)));
  /* 102a3c: sub x9, x8, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* 102a40: cmp x9, #0x9f */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(159));
  /* 102a44: b.gt #0x102a54 */
  if (ARC_COND(c, 12)) goto L_102a54;
  /* 102a48: ldr w9, [sp, #0x3c] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(60))));
  /* 102a4c: str w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 9));
  }
  /* 102a50: str x8, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 8));
L_102a54:;
  /* 102a54: ldr x1, [x25] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 25)));
  /* 102a58: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 102a5c: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 102a60: bl #0x13612c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1059428));
  fn1_13612c(c);
  /* 102a64: ldurb w10, [x29, #-0x48] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-72))));
  /* 102a68: ldr x12, [sp, #0x40] */
  ARC_X_W(c, 12, arc_ld64(((c)->sp + INT64_C(64))));
  /* 102a6c: add x11, sp, #0x48 */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(72)));
  /* 102a70: ldr x8, [x25, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(40))));
  /* 102a74: lsr x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* 102a78: ands w13, w10, #1 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 13, _r); }
  /* 102a7c: sub x11, x12, x11 */
  ARC_X_W(c, 11, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* 102a80: csel x8, x9, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 102a84: ldr x9, [sp, #0x20] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(32))));
  /* 102a88: cmp x11, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(5));
  /* 102a8c: str s0, [x9] */
  arc_st32(ARC_X_R(c, 9), (c)->q[0].u32[0]);
  /* 102a90: b.lt #0x102bf0 */
  if (ARC_COND(c, 11)) goto L_102bf0;
  /* 102a94: cbz x8, #0x102bf0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_102bf0;
  /* 102a98: sub x8, x12, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 12) - UINT64_C(4)));
  /* 102a9c: add x9, sp, #0x48 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(72)));
  /* 102aa0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 102aa4: cset w11, lo */
  ARC_W_W(c, 11, (ARC_COND(c, 3) ? 1 : 0));
  /* 102aa8: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* 102aac: b.eq #0x102b5c */
  if (ARC_COND(c, 0)) goto L_102b5c;
  /* 102ab0: cbz w11, #0x102b5c */
  if ((ARC_W_R(c, 11)) == 0) goto L_102b5c;
  /* 102ab4: add x10, sp, #0x48 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(72)));
  /* 102ab8: sub x14, x12, #8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) - UINT64_C(8)));
  /* 102abc: add x11, x10, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 102ac0: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 102ac4: csel x13, x14, x11, hi */
  ARC_X_W(c, 13, (ARC_COND(c, 8) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* 102ac8: sub x13, x13, #4 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(4)));
  /* 102acc: cmp x13, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 10));
  /* 102ad0: cinc x15, x10, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
  /* 102ad4: cmp x13, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 10));
  /* 102ad8: sub x15, x13, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) - ARC_X_R(c, 15)));
  /* 102adc: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* 102ae0: cinc x13, x15, ne */
  ARC_X_W(c, 13, (ARC_COND(c, 1) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* 102ae4: cmp x13, #0x13 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(19));
  /* 102ae8: b.lo #0x102b30 */
  if (ARC_COND(c, 3)) goto L_102b30;
  /* 102aec: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 102af0: csel x14, x14, x11, hi */
  ARC_X_W(c, 14, (ARC_COND(c, 8) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* 102af4: sub x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(4)));
  /* 102af8: cmp x14, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 10));
  /* 102afc: cinc x15, x10, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
  /* 102b00: cmp x14, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 10));
  /* 102b04: sub x15, x14, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 14) - ARC_X_R(c, 15)));
  /* 102b08: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* 102b0c: cinc x14, x15, ne */
  ARC_X_W(c, 14, (ARC_COND(c, 1) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* 102b10: cmp x10, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 12));
  /* 102b14: b.hs #0x102c80 */
  if (ARC_COND(c, 2)) goto L_102c80;
  /* 102b18: lsl x14, x14, #2 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(2)) & 63)));
  /* 102b1c: sub x15, x12, x14 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ARC_X_R(c, 14)));
  /* 102b20: add x11, x11, x14 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ARC_X_R(c, 14)));
  /* 102b24: sub x14, x15, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) - UINT64_C(4)));
  /* 102b28: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 102b2c: b.hs #0x102c80 */
  if (ARC_COND(c, 2)) goto L_102c80;
L_102b30:;
  /* 102b30: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
L_102b34:;
  /* 102b34: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
L_102b38:;
  /* 102b38: ldr w12, [x11] */
  ARC_W_W(c, 12, arc_ld32(ARC_X_R(c, 11)));
  /* 102b3c: ldur w13, [x10, #-4] */
  ARC_W_W(c, 13, arc_ld32((ARC_X_R(c, 10) + INT64_C(-4))));
  /* 102b40: stur w12, [x10, #-4] */
  arc_st32((ARC_X_R(c, 10) + INT64_C(-4)), ARC_W_R(c, 12));
  /* 102b44: str w13, [x11], #0xfffffffffffffffc */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(-4));
    arc_st32(_a, ARC_W_R(c, 13));
  }
  /* 102b48: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 102b4c: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 102b50: b.lo #0x102b38 */
  if (ARC_COND(c, 3)) goto L_102b38;
L_102b54:;
  /* 102b54: ldurb w10, [x29, #-0x48] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-72))));
  /* 102b58: and w13, w10, #1 */
  ARC_W_W(c, 13, (ARC_W_R(c, 10) & UINT64_C(1)));
L_102b5c:;
  /* 102b5c: ldr x11, [x25, #0x30] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 25) + INT64_C(48))));
  /* 102b60: cmp w13, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(0));
  /* 102b64: sub x12, x29, #0x48 */
  ARC_X_W(c, 12, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 102b68: csinc x11, x11, x12, ne */
  ARC_X_W(c, 11, (ARC_COND(c, 1) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 12)) + 1)));
  /* 102b6c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 102b70: b.hs #0x102bc8 */
  if (ARC_COND(c, 2)) goto L_102bc8;
  /* 102b74: lsr w9, w10, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 10)) >> ((UINT64_C(1)) & 31)));
  /* 102b78: ldr x10, [x25, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 25) + INT64_C(40))));
  /* 102b7c: cmp w13, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(0));
  /* 102b80: csel x9, x9, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* 102b84: add x10, sp, #0x48 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(72)));
  /* 102b88: add x9, x11, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) + ARC_X_R(c, 9)));
  /* 102b8c: b #0x102ba8 */
  goto L_102ba8;
L_102b90:;
  /* 102b90: sub x12, x9, x11 */
  ARC_X_W(c, 12, (ARC_X_R(c, 9) - ARC_X_R(c, 11)));
  /* 102b94: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 102b98: cmp x12, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(1));
  /* 102b9c: cinc x11, x11, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 11)) + 1 : (ARC_X_R(c, 11))));
  /* 102ba0: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* 102ba4: b.hs #0x102bc8 */
  if (ARC_COND(c, 2)) goto L_102bc8;
L_102ba8:;
  /* 102ba8: ldrb w12, [x11] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 11)));
  /* 102bac: cbz w12, #0x102b90 */
  if ((ARC_W_R(c, 12)) == 0) goto L_102b90;
  /* 102bb0: cmp w12, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(255));
  /* 102bb4: b.eq #0x102b90 */
  if (ARC_COND(c, 0)) goto L_102b90;
  /* 102bb8: ldr w13, [x10] */
  ARC_W_W(c, 13, arc_ld32(ARC_X_R(c, 10)));
  /* 102bbc: cmp w13, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 12));
  /* 102bc0: b.eq #0x102b90 */
  if (ARC_COND(c, 0)) goto L_102b90;
  /* 102bc4: b #0x102be8 */
  goto L_102be8;
L_102bc8:;
  /* 102bc8: ldrb w9, [x11] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 11)));
  /* 102bcc: cbz w9, #0x102bf0 */
  if ((ARC_W_R(c, 9)) == 0) goto L_102bf0;
  /* 102bd0: cmp w9, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(255));
  /* 102bd4: b.eq #0x102bf0 */
  if (ARC_COND(c, 0)) goto L_102bf0;
  /* 102bd8: ldr w8, [x8] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 8)));
  /* 102bdc: sub w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* 102be0: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* 102be4: b.lo #0x102bf0 */
  if (ARC_COND(c, 3)) goto L_102bf0;
L_102be8:;
  /* 102be8: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 102bec: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_102bf0:;
  /* 102bf0: cbz x20, #0x102c18 */
  if ((ARC_X_R(c, 20)) == 0) goto L_102c18;
  /* 102bf4: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 102bf8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 102bfc: b.eq #0x102c34 */
  if (ARC_COND(c, 0)) goto L_102c34;
  /* 102c00: cbz x21, #0x102d20 */
  if ((ARC_X_R(c, 21)) == 0) goto L_102d20;
  /* 102c04: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 102c08: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 102c0c: b.ne #0x102d14 */
  if (ARC_COND(c, 1)) goto L_102d14;
  /* 102c10: mov w19, wzr */
  ARC_W_W(c, 19, ARC_W_R(c, 31));
  /* 102c14: b #0x102cf4 */
  goto L_102cf4;
L_102c18:;
  /* 102c18: cbz x21, #0x102c78 */
  if ((ARC_X_R(c, 21)) == 0) goto L_102c78;
  /* 102c1c: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 102c20: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 102c24: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 102c28: b.ne #0x102d20 */
  if (ARC_COND(c, 1)) goto L_102d20;
  /* 102c2c: mov w19, #1 */
  ARC_W_W(c, 19, UINT64_C(1));
  /* 102c30: b #0x102cf4 */
  goto L_102cf4;
L_102c34:;
  /* 102c34: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 102c38: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 102c3c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 102c40: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1059908));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 102c44: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 102c48: cset w19, eq */
  ARC_W_W(c, 19, (ARC_COND(c, 0) ? 1 : 0));
  /* 102c4c: cbz x21, #0x102c70 */
  if ((ARC_X_R(c, 21)) == 0) goto L_102c70;
  /* 102c50: ldp x9, x10, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 102c54: csel x8, xzr, x20, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 20)));
  /* 102c58: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 102c5c: b.eq #0x102cf0 */
  if (ARC_COND(c, 0)) goto L_102cf0;
  /* 102c60: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 102c64: b.ne #0x102d14 */
  if (ARC_COND(c, 1)) goto L_102d14;
  /* 102c68: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 102c6c: b #0x102d20 */
  goto L_102d20;
L_102c70:;
  /* 102c70: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 102c74: b.ne #0x102d20 */
  if (ARC_COND(c, 1)) goto L_102d20;
L_102c78:;
  /* 102c78: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 102c7c: b #0x102d14 */
  goto L_102d14;
L_102c80:;
  /* 102c80: add x13, x13, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(1)));
  /* 102c84: add x15, sp, #0x48 */
  ARC_X_W(c, 15, ((c)->sp + UINT64_C(72)));
  /* 102c88: sub x12, x12, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(16)));
  /* 102c8c: and x14, x13, #0x7ffffffffffffff8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 13) & UINT64_C(9223372036854775800)));
  /* 102c90: lsl x10, x14, #2 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(2)) & 63)));
  /* 102c94: mov x16, x14 */
  ARC_X_W(c, 16, ARC_X_R(c, 14));
  /* 102c98: sub x11, x8, x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) - ARC_X_R(c, 10)));
  /* 102c9c: add x10, x15, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 15) + ARC_X_R(c, 10)));
  /* 102ca0: add x15, x15, #0x10 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(16)));
L_102ca4:;
  /* 102ca4: ldp q1, q0, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 102ca8: sub x16, x16, #8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) - UINT64_C(8)));
  /* 102cac: ldp q2, q3, [x15, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 15) + INT64_C(-16));
    arc_q_w(c, 2, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 3, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 102cb0: rev64 v0.4s, v0.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[0].u32[1];
    _t.u32[1] = (c)->q[0].u32[0];
    _t.u32[2] = (c)->q[0].u32[3];
    _t.u32[3] = (c)->q[0].u32[2];
    (c)->q[0] = _t; }
  /* 102cb4: rev64 v1.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[1].u32[1];
    _t.u32[1] = (c)->q[1].u32[0];
    _t.u32[2] = (c)->q[1].u32[3];
    _t.u32[3] = (c)->q[1].u32[2];
    (c)->q[1] = _t; }
  /* 102cb8: rev64 v2.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[2].u32[1];
    _t.u32[1] = (c)->q[2].u32[0];
    _t.u32[2] = (c)->q[2].u32[3];
    _t.u32[3] = (c)->q[2].u32[2];
    (c)->q[2] = _t; }
  /* 102cbc: rev64 v3.4s, v3.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[3].u32[1];
    _t.u32[1] = (c)->q[3].u32[0];
    _t.u32[2] = (c)->q[3].u32[3];
    _t.u32[3] = (c)->q[3].u32[2];
    (c)->q[3] = _t; }
  /* 102cc0: ext v0.16b, v0.16b, v0.16b, #8 */
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
  /* 102cc4: ext v1.16b, v1.16b, v1.16b, #8 */
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
  /* 102cc8: ext v2.16b, v2.16b, v2.16b, #8 */
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
  /* 102ccc: ext v3.16b, v3.16b, v3.16b, #8 */
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
  /* 102cd0: stp q0, q1, [x15, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 15) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 102cd4: add x15, x15, #0x20 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(32)));
  /* 102cd8: stp q3, q2, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_st64(_pa, (c)->q[3].u64[0]);
    arc_st64(_pa + 8, (c)->q[3].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* 102cdc: sub x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(32)));
  /* 102ce0: cbnz x16, #0x102ca4 */
  if ((ARC_X_R(c, 16)) != 0) goto L_102ca4;
  /* 102ce4: cmp x13, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 14));
  /* 102ce8: b.eq #0x102b54 */
  if (ARC_COND(c, 0)) goto L_102b54;
  /* 102cec: b #0x102b34 */
  goto L_102b34;
L_102cf0:;
  /* 102cf0: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
L_102cf4:;
  /* 102cf4: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 102cf8: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 102cfc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 102d00: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1060100));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 102d04: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 102d08: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 102d0c: eor w8, w19, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 19) ^ ARC_W_R(c, 8)));
  /* 102d10: tbnz w8, #0, #0x102d20 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_102d20;
L_102d14:;
  /* 102d14: ldr w8, [x22] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 22)));
  /* 102d18: orr w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(2)));
  /* 102d1c: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_102d20:;
  /* 102d20: ldurb w8, [x29, #-0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 102d24: tbz w8, #0, #0x102d38 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_102d38;
  /* 102d28: ldr x8, [x25, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(8))));
  /* 102d2c: ldr x0, [x25, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 25) + INT64_C(24))));
  /* 102d30: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 102d34: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1060152));
  fn1_142608(c);
L_102d38:;
  /* 102d38: ldurb w8, [x29, #-0x48] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-72))));
  /* 102d3c: tbz w8, #0, #0x102d50 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_102d50;
  /* 102d40: ldr x8, [x25, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(32))));
  /* 102d44: ldr x0, [x25, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 25) + INT64_C(48))));
  /* 102d48: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 102d4c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1060176));
  fn1_142608(c);
L_102d50:;
  /* 102d50: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 102d54: ldp x20, x19, [sp, #0x1a0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(416));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 102d58: ldp x22, x21, [sp, #0x190] */
  { const uint64_t _pa = ((c)->sp + INT64_C(400));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 102d5c: ldp x24, x23, [sp, #0x180] */
  { const uint64_t _pa = ((c)->sp + INT64_C(384));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 102d60: ldp x26, x25, [sp, #0x170] */
  { const uint64_t _pa = ((c)->sp + INT64_C(368));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 102d64: ldp x28, x27, [sp, #0x160] */
  { const uint64_t _pa = ((c)->sp + INT64_C(352));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 102d68: ldp x29, x30, [sp, #0x150] */
  { const uint64_t _pa = ((c)->sp + INT64_C(336));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 102d6c: add sp, sp, #0x1b0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(432)));
  /* 102d70: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 102d74: ret  */
  return;
L_102d78:;
  /* 102d78: mov x20, x21 */
  ARC_X_W(c, 20, ARC_X_R(c, 21));
  /* 102d7c: b #0x102a0c */
  goto L_102a0c;
  /* 102d80: b #0x102d8c */
  goto L_102d8c;
  /* 102d84: b #0x102d8c */
  goto L_102d8c;
  /* 102d88: b #0x102d8c */
  goto L_102d8c;
L_102d8c:;
  /* 102d8c: ldurb w8, [x29, #-0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 102d90: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 102d94: tbnz w8, #0, #0x102da8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_102da8;
  /* 102d98: ldurb w8, [x29, #-0x48] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-72))));
  /* 102d9c: tbnz w8, #0, #0x102dc0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_102dc0;
L_102da0:;
  /* 102da0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 102da4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1060264));
  fn1_9cc20(c);
L_102da8:;
  /* 102da8: ldr x8, [x25, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(8))));
  /* 102dac: ldr x0, [x25, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 25) + INT64_C(24))));
  /* 102db0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 102db4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1060280));
  fn1_142608(c);
  /* 102db8: ldurb w8, [x29, #-0x48] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-72))));
  /* 102dbc: tbz w8, #0, #0x102da0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_102da0;
L_102dc0:;
  /* 102dc0: ldr x8, [x25, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(32))));
  /* 102dc4: ldr x0, [x25, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 25) + INT64_C(48))));
  /* 102dc8: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 102dcc: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1060304));
  fn1_142608(c);
  /* 102dd0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 102dd4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1060312));
  fn1_9cc20(c);
}

void fn1_110744(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039043908));
  /* 110744: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 110748: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 11074c: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 110750: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 110754: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* 110758: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 11075c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 110760: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 110764: mov x2, x4 */
  ARC_X_W(c, 2, ARC_X_R(c, 4));
  /* 110768: mov x3, x5 */
  ARC_X_W(c, 3, ARC_X_R(c, 5));
  /* 11076c: mov w4, #2 */
  ARC_W_W(c, 4, UINT64_C(2));
  /* 110770: bl #0x110db0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1116020));
  fn1_110db0(c);
  /* 110774: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* 110778: cmp w0, #0x3b */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(59));
  /* 11077c: b.gt #0x11078c */
  if (ARC_COND(c, 12)) goto L_11078c;
  /* 110780: tbnz w8, #2, #0x11078c */
  if (((ARC_W_R(c, 8)) >> 2 & 1) != 0) goto L_11078c;
  /* 110784: str w0, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 0));
  /* 110788: b #0x110794 */
  goto L_110794;
L_11078c:;
  /* 11078c: orr w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* 110790: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_110794:;
  /* 110794: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 110798: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 11079c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1107a0: ret  */
  return;
}

void fn1_113d38(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057720));
  /* 113d38: bti c */
  /* bti: no architectural effect here */
  /* 113d3c: mov w0, #0x302 */
  ARC_W_W(c, 0, UINT64_C(770));
  /* 113d40: movk w0, #0x400, lsl #16 */
  ARC_W_W(c, 0, ((ARC_W_R(c, 0) & UINT64_C(18446744069414649855)) | UINT64_C(67108864)));
  /* 113d44: ret  */
  return;
}

void fn1_11acc4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039086276));
  /* 11acc4: bti c */
  /* bti: no architectural effect here */
  /* 11acc8: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11accc: ret  */
  return;
}

void fn1_124e08(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039127560));
  /* 124e08: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 124e0c: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 124e10: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 124e14: str x27, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 27));
  /* 124e18: stp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 124e1c: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 124e20: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 124e24: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 124e28: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 124e2c: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 124e30: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 124e34: cbz x2, #0x124eb8 */
  if ((ARC_X_R(c, 2)) == 0) goto L_124eb8;
  /* 124e38: mov w0, #0x138 */
  ARC_W_W(c, 0, UINT64_C(312));
  /* 124e3c: mov x23, x3 */
  ARC_X_W(c, 23, ARC_X_R(c, 3));
  /* 124e40: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 124e44: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1199688));
  fn1_1428f0(c);
  /* 124e48: ldr x26, [x21] */
  ARC_X_W(c, 26, arc_ld64(ARC_X_R(c, 21)));
  /* 124e4c: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 124e50: adrp x11, #0x14e000 */
  ARC_X_W(c, 11, (arc_image_bases[1] + UINT64_C(1368064)));
  /* 124e54: add x11, x11, #0x248 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(584)));
  /* 124e58: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 124e5c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 124e60: ldp x10, x9, [x26, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 26) + INT64_C(16));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 124e64: stp x11, x8, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 124e68: mov w11, #0x1e */
  ARC_W_W(c, 11, UINT64_C(30));
  /* 124e6c: str xzr, [x21, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 31));
  }
  /* 124e70: stp xzr, xzr, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 124e74: sub x8, x9, x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) - ARC_X_R(c, 10)));
  /* 124e78: str xzr, [x0, #0x118] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(280)), ARC_X_R(c, 31));
  /* 124e7c: asr x9, x8, #3 */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* 124e80: str x21, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 21));
  /* 124e84: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 124e88: add x8, x9, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 124e8c: lsr x10, x8, #0x3d */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(61)) & 63)));
  /* 124e90: cmp x8, #0x1e */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(30));
  /* 124e94: csinc x27, x11, x9, ls */
  ARC_X_W(c, 27, (ARC_COND(c, 9) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 9)) + 1)));
  /* 124e98: cbnz x10, #0x125054 */
  if ((ARC_X_R(c, 10)) != 0) goto L_125054;
  /* 124e9c: cmp x8, #0x1e */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(30));
  /* 124ea0: b.ls #0x124ed4 */
  if (ARC_COND(c, 9)) goto L_124ed4;
  /* 124ea4: lsl x24, x8, #3 */
  ARC_X_W(c, 24, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(3)) & 63)));
  /* 124ea8: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 124eac: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1199792));
  fn1_1428f0(c);
  /* 124eb0: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* 124eb4: b #0x124ee4 */
  goto L_124ee4;
L_124eb8:;
  /* 124eb8: ldr x19, [x21] */
  ARC_X_W(c, 19, arc_ld64(ARC_X_R(c, 21)));
  /* 124ebc: nop  */
  /* nop: no architectural effect here */
  /* 124ec0: adr x8, #0x15dc40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432640)));
  /* 124ec4: cmp x19, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 124ec8: str x19, [x22] */
  arc_st64(ARC_X_R(c, 22), ARC_X_R(c, 19));
  /* 124ecc: b.ne #0x125024 */
  if (ARC_COND(c, 1)) goto L_125024;
  /* 124ed0: b #0x125030 */
  goto L_125030;
L_124ed4:;
  /* 124ed4: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 124ed8: add x25, x19, #0x28 */
  ARC_X_W(c, 25, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* 124edc: mov w24, #0xf0 */
  ARC_W_W(c, 24, UINT64_C(240));
  /* 124ee0: strb w8, [x19, #0x118] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(280)), ARC_W_R(c, 8));
L_124ee4:;
  /* 124ee4: add x8, x25, x27, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 25) + ((uint64_t)(ARC_X_R(c, 27)) << 3)));
  /* 124ee8: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 124eec: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 124ef0: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 124ef4: str x25, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 25));
  /* 124ef8: str x8, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 8));
  /* 124efc: bl #0x144a20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1199872));
  fn1_144a20(c);
  /* 124f00: add x8, x25, x24 */
  ARC_X_W(c, 8, (ARC_X_R(c, 25) + ARC_X_R(c, 24)));
  /* 124f04: mov w9, #0x2a02 */
  ARC_W_W(c, 9, UINT64_C(10754));
  /* 124f08: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 124f0c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 124f10: str x8, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 8));
  /* 124f14: strh w9, [x19, #0x120] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(288)), ARC_W_R(c, 9));
  /* 124f18: strb wzr, [x19, #0x122] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(290)), ARC_W_R(c, 31));
  /* 124f1c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1199904));
  fn1_db2e0(c);
  /* 124f20: cmp x19, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 26));
  /* 124f24: b.eq #0x124f3c */
  if (ARC_COND(c, 0)) goto L_124f3c;
  /* 124f28: ldp x1, x2, [x26, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 26) + INT64_C(16));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 124f2c: sub x8, x2, x1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 2) - ARC_X_R(c, 1)));
  /* 124f30: asr x3, x8, #3 */
  ARC_X_W(c, 3, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* 124f34: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 124f38: bl #0x135150 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1199932));
  fn1_135150(c);
L_124f3c:;
  /* 124f3c: ldp x9, x8, [x26, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 26) + INT64_C(16));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 124f40: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 124f44: b.eq #0x124f88 */
  if (ARC_COND(c, 0)) goto L_124f88;
  /* 124f48: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
  /* 124f4c: mov w24, #1 */
  ARC_W_W(c, 24, UINT64_C(1));
  /* 124f50: b #0x124f68 */
  goto L_124f68;
L_124f54:;
  /* 124f54: mov w10, w24 */
  ARC_W_W(c, 10, ARC_W_R(c, 24));
  /* 124f58: sub x11, x8, x9 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* 124f5c: add w24, w24, #1 */
  ARC_W_W(c, 24, (ARC_W_R(c, 24) + UINT64_C(1)));
  /* 124f60: cmp x10, x11, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ((uint64_t)((int64_t)(ARC_X_R(c, 11)) >> 3)));
  /* 124f64: b.hs #0x124f88 */
  if (ARC_COND(c, 2)) goto L_124f88;
L_124f68:;
  /* 124f68: ldr x11, [x21] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 21)));
  /* 124f6c: ldr x10, [x11, x10, lsl #3] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 10)) << 3))));
  /* 124f70: cbz x10, #0x124f54 */
  if ((ARC_X_R(c, 10)) == 0) goto L_124f54;
  /* 124f74: add x1, x10, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 10) + UINT64_C(8)));
  /* 124f78: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 124f7c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1200000));
  fn1_db2e0(c);
  /* 124f80: ldp x9, x8, [x26, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 26) + INT64_C(16));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 124f84: b #0x124f54 */
  goto L_124f54;
L_124f88:;
  /* 124f88: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 124f8c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 124f90: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1200020));
  fn1_db2e0(c);
  /* 124f94: ldp x8, x9, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 124f98: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 124f9c: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 124fa0: cmp x23, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 10));
  /* 124fa4: b.lo #0x124fd0 */
  if (ARC_COND(c, 3)) goto L_124fd0;
  /* 124fa8: add x9, x23, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* 124fac: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 124fb0: b.ls #0x124fc4 */
  if (ARC_COND(c, 9)) goto L_124fc4;
  /* 124fb4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 124fb8: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1200060));
  fn1_1352bc(c);
  /* 124fbc: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 124fc0: b #0x124fd0 */
  goto L_124fd0;
L_124fc4:;
  /* 124fc4: b.hs #0x124fd0 */
  if (ARC_COND(c, 2)) goto L_124fd0;
  /* 124fc8: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 124fcc: str x9, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 9));
L_124fd0:;
  /* 124fd0: ldr x24, [x8, x23, lsl #3] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 23)) << 3))));
  /* 124fd4: cbz x24, #0x124ff8 */
  if ((ARC_X_R(c, 24)) == 0) goto L_124ff8;
  /* 124fd8: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 124fdc: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 124fe0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1200100));
  fn1_bd950(c);
  /* 124fe4: cbnz x0, #0x124ff8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_124ff8;
  /* 124fe8: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 124fec: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 124ff0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 124ff4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1200120));
  arc_dispatch(c, ARC_X_R(c, 8));
L_124ff8:;
  /* 124ff8: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 124ffc: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 125000: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 125004: str x20, [x8, x23, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 23)) << 3)), ARC_X_R(c, 20));
  /* 125008: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1200140));
  fn1_bd950(c);
  /* 12500c: cbnz x0, #0x125020 */
  if ((ARC_X_R(c, 0)) != 0) goto L_125020;
  /* 125010: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 125014: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 125018: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 12501c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1200160));
  arc_dispatch(c, ARC_X_R(c, 8));
L_125020:;
  /* 125020: str x19, [x22] */
  arc_st64(ARC_X_R(c, 22), ARC_X_R(c, 19));
L_125024:;
  /* 125024: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 125028: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 12502c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1200176));
  fn1_db2e0(c);
L_125030:;
  /* 125030: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 125034: ldr x27, [sp, #0x20] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(32))));
  /* 125038: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 12503c: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 125040: ldp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 125044: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 125048: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 12504c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 125050: ret  */
  return;
L_125054:;
  /* 125054: bl #0x135104 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1200216));
  fn1_135104(c);
  /* 125058: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 12505c: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 125060: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 125064: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1200232));
  fn1_bd950(c);
  /* 125068: cbnz x0, #0x125084 */
  if ((ARC_X_R(c, 0)) != 0) goto L_125084;
  /* 12506c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 125070: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 125074: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 125078: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1200252));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 12507c: b #0x125084 */
  goto L_125084;
  /* 125080: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
L_125084:;
  /* 125084: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 125088: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 12508c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1200272));
  fn1_bd950(c);
  /* 125090: cbnz x0, #0x1250a4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_1250a4;
  /* 125094: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 125098: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12509c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 1250a0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1200292));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1250a4:;
  /* 1250a4: ldrb w8, [x19, #0x120] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(288))));
  /* 1250a8: tbz w8, #0, #0x1250bc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1250bc;
  /* 1250ac: ldr x8, [x19, #0x120] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(288))));
  /* 1250b0: ldr x0, [x19, #0x130] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(304))));
  /* 1250b4: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1250b8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1200316));
  fn1_142608(c);
L_1250bc:;
  /* 1250bc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1250c0: bl #0x11de44 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1200324));
  fn1_11de44(c);
  /* 1250c4: b #0x1250d4 */
  goto L_1250d4;
  /* 1250c8: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1250cc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1250d0: bl #0x13511c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1200340));
  fn1_13511c(c);
L_1250d4:;
  /* 1250d4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1250d8: mov w1, #0x138 */
  ARC_W_W(c, 1, UINT64_C(312));
  /* 1250dc: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1200352));
  fn1_142608(c);
  /* 1250e0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1250e4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1200360));
  fn1_9cc20(c);
}

void fn1_127b84(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039139204));
  /* 127b84: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 127b88: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 127b8c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 127b90: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 127b94: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 127b98: ldr x0, [x0, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 127b9c: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* 127ba0: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1211300));
  fn1_1443c0(c);
  /* 127ba4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 127ba8: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* 127bac: and w0, w20, #0xff */
  ARC_W_W(c, 0, (ARC_W_R(c, 20) & UINT64_C(255)));
  /* 127bb0: bl #0x1443a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1211316));
  fn1_1443a8(c);
  /* 127bb4: mov w20, w0 */
  ARC_W_W(c, 20, ARC_W_R(c, 0));
  /* 127bb8: cbz x19, #0x127bc4 */
  if ((ARC_X_R(c, 19)) == 0) goto L_127bc4;
  /* 127bbc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 127bc0: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1211332));
  fn1_1443c0(c);
L_127bc4:;
  /* 127bc4: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 127bc8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 127bcc: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 127bd0: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 127bd4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 127bd8: ret  */
  return;
  /* 127bdc: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1211360));
  fn1_a1454(c);
  /* 127be0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 127be4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 127be8: bl #0x135428 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1211372));
  fn1_135428(c);
  /* 127bec: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 127bf0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1211380));
  fn1_9cc20(c);
}

void fn1_129cc8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039147720));
  /* 129cc8: bti c */
  /* bti: no architectural effect here */
  /* 129ccc: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 129cd0: ret  */
  return;
}

void fn1_12b850(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039154768));
  /* 12b850: bti c */
  /* bti: no architectural effect here */
  /* 12b854: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 12b858: ret  */
  return;
}

void fn1_12df94(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039164820));
  /* 12df94: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12df98: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12df9c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 12dfa0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12dfa4: nop  */
  /* nop: no architectural effect here */
  /* 12dfa8: adr x8, #0x15dec0 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433280)));
  /* 12dfac: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 12dfb0: tbz w8, #0, #0x12dfcc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12dfcc;
L_12dfb4:;
  /* 12dfb4: nop  */
  /* nop: no architectural effect here */
  /* 12dfb8: adr x0, #0x15dea8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433256)));
  /* 12dfbc: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12dfc0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12dfc4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12dfc8: ret  */
  return;
L_12dfcc:;
  /* 12dfcc: nop  */
  /* nop: no architectural effect here */
  /* 12dfd0: adr x0, #0x15dec0 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433280)));
  /* 12dfd4: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1236952));
  fn1_1424b8(c);
  /* 12dfd8: cbz w0, #0x12dfb4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_12dfb4;
  /* 12dfdc: nop  */
  /* nop: no architectural effect here */
  /* 12dfe0: adr x0, #0x15dea8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433256)));
  /* 12dfe4: adrp x1, #0x75000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(479232)));
  /* 12dfe8: add x1, x1, #0x208 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(520)));
  /* 12dfec: bl #0x12bdc4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1236976));
  fn1_12bdc4(c);
  /* 12dff0: adrp x0, #0x151000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 12dff4: nop  */
  /* nop: no architectural effect here */
  /* 12dff8: adr x1, #0x15dea8 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433256)));
  /* 12dffc: ldr x0, [x0, #0xa48] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(2632))));
  /* 12e000: nop  */
  /* nop: no architectural effect here */
  /* 12e004: adr x2, #0x148af8 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1346296)));
  /* 12e008: bl #0x1423f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1237004));
  fn1_1423f8(c);
  /* 12e00c: nop  */
  /* nop: no architectural effect here */
  /* 12e010: adr x0, #0x15dec0 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433280)));
  /* 12e014: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1237016));
  fn1_1424d0(c);
  /* 12e018: b #0x12dfb4 */
  goto L_12dfb4;
  /* 12e01c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12e020: nop  */
  /* nop: no architectural effect here */
  /* 12e024: adr x0, #0x15dec0 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433280)));
  /* 12e028: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1237036));
  fn1_1424e8(c);
  /* 12e02c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12e030: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1237044));
  fn1_9cc20(c);
}

void fn1_134a84(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192196));
  /* 134a84: bti c */
  /* bti: no architectural effect here */
  /* 134a88: add x0, x0, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* 134a8c: ret  */
  return;
}

void fn1_135748(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039195464));
  /* 135748: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13574c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 135750: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 135754: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 135758: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* 13575c: ldp x10, x9, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 135760: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 135764: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 135768: lsr x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 13576c: csinc x9, x9, x0, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 0)) + 1)));
  /* 135770: csel x8, x8, x10, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* 135774: sub x1, x1, x9 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) - ARC_X_R(c, 9)));
  /* 135778: cmp x1, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 8));
  /* 13577c: b.hi #0x13579c */
  if (ARC_COND(c, 8)) goto L_13579c;
  /* 135780: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 135784: bl #0xe12d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1267592));
  fn1_e12d8(c);
  /* 135788: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13578c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 135790: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 135794: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 135798: ret  */
  return;
L_13579c:;
  /* 13579c: bl #0xda020 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1267616));
  fn1_da020(c);
}

void fn1_138600(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039207424));
  /* 138600: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 138604: sub sp, sp, #0xf0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(240)));
  /* 138608: stp x29, x30, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13860c: str x21, [sp, #0xd0] */
  arc_st64(((c)->sp + INT64_C(208)), ARC_X_R(c, 21));
  /* 138610: stp x20, x19, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 138614: add x29, sp, #0xc0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(192)));
  /* 138618: movi d0, #0x00ffff0000ffff */
  arc_du_w(c, 0, UINT64_C(281470681808895));
  /* 13861c: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 138620: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 138624: mov x9, #-0x8000000000000000 */
  ARC_X_W(c, 9, UINT64_C(9223372036854775808));
  /* 138628: str x8, [x20, #0x20]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(32));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(32));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 13862c: stp xzr, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 138630: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 138634: strh wzr, [x20, #0x28] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(40)), ARC_W_R(c, 31));
  /* 138638: str d0, [x20, #0x20] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(32)), (c)->q[0].u64[0]);
  /* 13863c: str x8, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 8));
  /* 138640: nop  */
  /* nop: no architectural effect here */
  /* 138644: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 138648: stur wzr, [x29, #-0x20] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-32)), ARC_W_R(c, 31));
  /* 13864c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 138650: tbz w8, #0, #0x138878 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_138878;
L_138654:;
  /* 138654: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 138658: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 13865c: nop  */
  /* nop: no architectural effect here */
  /* 138660: adr x21, #0x156d40 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 138664: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 138668: stur wzr, [x29, #-0x10] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-16)), ARC_W_R(c, 31));
  /* 13866c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 138670: stur x21, [x29, #-0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-24)), ARC_X_R(c, 21));
  /* 138674: csinc x0, x9, x19, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* 138678: stur x21, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 21));
  /* 13867c: bl #0x144570 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1279616));
  fn1_144570(c);
  /* 138680: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 138684: b.ne #0x1386ac */
  if (ARC_COND(c, 1)) goto L_1386ac;
  /* 138688: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1279628));
  fn1_142a58(c);
  /* 13868c: nop  */
  /* nop: no architectural effect here */
  /* 138690: adr x9, #0x159208 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 138694: ldr w8, [x0] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 0)));
  /* 138698: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 13869c: tbz w9, #0, #0x138898 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_138898;
L_1386a0:;
  /* 1386a0: nop  */
  /* nop: no architectural effect here */
  /* 1386a4: adr x9, #0x156d38 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 1386a8: stp x8, x9, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
L_1386ac:;
  /* 1386ac: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1386b0: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 1386b4: add x2, sp, #0x20 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(32)));
  /* 1386b8: sub x3, x29, #0x20 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 1386bc: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1386c0: bl #0x1388e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1279684));
  fn1_1388e8(c);
  /* 1386c4: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1386c8: and w10, w8, #0xff */
  ARC_W_W(c, 10, (ARC_W_R(c, 8) & UINT64_C(255)));
  /* 1386cc: lsr x9, x8, #0x20 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(32)) & 63)));
  /* 1386d0: cmp w10, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(3));
  /* 1386d4: b.eq #0x138700 */
  if (ARC_COND(c, 0)) goto L_138700;
  /* 1386d8: cbnz w10, #0x138798 */
  if ((ARC_W_R(c, 10)) != 0) goto L_138798;
  /* 1386dc: movi d0, #0x00ffff0000ffff */
  arc_du_w(c, 0, UINT64_C(281470681808895));
  /* 1386e0: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 1386e4: mov x9, #-0x8000000000000000 */
  ARC_X_W(c, 9, UINT64_C(9223372036854775808));
  /* 1386e8: stp x8, x8, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 1386ec: ldp x8, x1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 1386f0: strh wzr, [x19, #0x48] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(72)), ARC_W_R(c, 31));
  /* 1386f4: stp xzr, x9, [x19, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1386f8: str d0, [x19, #0x40] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(64)), (c)->q[0].u64[0]);
  /* 1386fc: b #0x138854 */
  goto L_138854;
L_138700:;
  /* 138700: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 138704: str w9, [x19, #0x40] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(64)), ARC_W_R(c, 9));
  /* 138708: add x10, x19, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* 13870c: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 138710: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 138714: str wzr, [sp, #0x10] */
  arc_st32(((c)->sp + INT64_C(16)), ARC_W_R(c, 31));
  /* 138718: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 13871c: str x21, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 21));
  /* 138720: csel x0, x10, x9, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 138724: stur wzr, [x29, #-0x10] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-16)), ARC_W_R(c, 31));
  /* 138728: stur x21, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 21));
  /* 13872c: bl #0x144588 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1279792));
  fn1_144588(c);
  /* 138730: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 138734: b.ne #0x13875c */
  if (ARC_COND(c, 1)) goto L_13875c;
  /* 138738: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1279804));
  fn1_142a58(c);
  /* 13873c: nop  */
  /* nop: no architectural effect here */
  /* 138740: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 138744: ldr w21, [x0] */
  ARC_W_W(c, 21, arc_ld32(ARC_X_R(c, 0)));
  /* 138748: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13874c: tbz w8, #0, #0x1388c4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1388c4;
L_138750:;
  /* 138750: nop  */
  /* nop: no architectural effect here */
  /* 138754: adr x8, #0x156d38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 138758: stp x21, x8, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
L_13875c:;
  /* 13875c: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 138760: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 138764: add x2, sp, #0x20 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(32)));
  /* 138768: add x3, sp, #0x10 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(16)));
  /* 13876c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 138770: bl #0x1388e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1279860));
  fn1_1388e8(c);
  /* 138774: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 138778: lsr x9, x8, #0x20 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(32)) & 63)));
  /* 13877c: tst x8, #0xff */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 8) & UINT64_C(255)));
  /* 138780: strb w8, [x19, #0x48] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(72)), ARC_W_R(c, 8));
  /* 138784: str w9, [x19, #0x44] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(68)), ARC_W_R(c, 9));
  /* 138788: b.eq #0x138814 */
  if (ARC_COND(c, 0)) goto L_138814;
  /* 13878c: mov w9, #3 */
  ARC_W_W(c, 9, UINT64_C(3));
  /* 138790: strb w9, [x19, #0x49] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(73)), ARC_W_R(c, 9));
  /* 138794: b #0x1387a8 */
  goto L_1387a8;
L_138798:;
  /* 138798: mov w10, #5 */
  ARC_W_W(c, 10, UINT64_C(5));
  /* 13879c: strb w8, [x19, #0x48] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(72)), ARC_W_R(c, 8));
  /* 1387a0: strb w10, [x19, #0x49] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(73)), ARC_W_R(c, 10));
  /* 1387a4: str w9, [x19, #0x44] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(68)), ARC_W_R(c, 9));
L_1387a8:;
  /* 1387a8: and x9, x8, #0xff */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) & UINT64_C(255)));
  /* 1387ac: cmp x9, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(1));
  /* 1387b0: b.ne #0x1387bc */
  if (ARC_COND(c, 1)) goto L_1387bc;
  /* 1387b4: ldr x9, [sp, #0x50] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(80))));
  /* 1387b8: str x9, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 9));
L_1387bc:;
  /* 1387bc: ands w8, w8, #0xff */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 8) & UINT64_C(255));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 8, _r); }
  /* 1387c0: b.eq #0x138850 */
  if (ARC_COND(c, 0)) goto L_138850;
  /* 1387c4: cmp w8, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(255));
  /* 1387c8: b.eq #0x138850 */
  if (ARC_COND(c, 0)) goto L_138850;
  /* 1387cc: ldp x9, x8, [sp, #0x78] */
  { const uint64_t _pa = ((c)->sp + INT64_C(120));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 1387d0: ldr w10, [sp, #0x34] */
  ARC_W_W(c, 10, arc_ld32(((c)->sp + INT64_C(52))));
  /* 1387d4: str x10, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), ARC_X_R(c, 10));
  /* 1387d8: tbz x9, #0x3f, #0x138830 */
  if (((ARC_X_R(c, 9)) >> 63 & 1) == 0) goto L_138830;
  /* 1387dc: cbz x8, #0x138830 */
  if ((ARC_X_R(c, 8)) == 0) goto L_138830;
  /* 1387e0: mov w10, #0xca00 */
  ARC_W_W(c, 10, UINT64_C(51712));
  /* 1387e4: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 1387e8: movk w10, #0x3b9a, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(999948288)));
  /* 1387ec: mul x11, x9, x10 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 10))));
  /* 1387f0: smulh x9, x9, x10 */
  ARC_X_W(c, 9, arc_smulh(ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 1387f4: asr x10, x8, #0x3f */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(63)) & 63))));
  /* 1387f8: adds x8, x8, x11 */
  ARC_X_W(c, 8, arc_add64(c, ARC_X_R(c, 8), ARC_X_R(c, 11), 0));
  /* 1387fc: mov x11, #-0xca00 */
  ARC_X_W(c, 11, UINT64_C(18446744073709499904));
  /* 138800: movk x11, #0xc465, lsl #16 */
  ARC_X_W(c, 11, ((ARC_X_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(3294953472)));
  /* 138804: adc x9, x10, x9 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) + (uint64_t)(ARC_X_R(c, 9)) + (c)->cf));
  /* 138808: adds x8, x8, x11 */
  ARC_X_W(c, 8, arc_add64(c, ARC_X_R(c, 8), ARC_X_R(c, 11), 0));
  /* 13880c: mov x10, #-1 */
  ARC_X_W(c, 10, UINT64_C(18446744073709551615));
  /* 138810: b #0x138848 */
  goto L_138848;
L_138814:;
  /* 138814: mov w10, #4 */
  ARC_W_W(c, 10, UINT64_C(4));
  /* 138818: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* 13881c: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* 138820: strb w10, [x19, #0x49] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(73)), ARC_W_R(c, 10));
  /* 138824: nop  */
  /* nop: no architectural effect here */
  /* 138828: adr x1, #0x156d40 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13882c: b #0x138858 */
  goto L_138858;
L_138830:;
  /* 138830: mov w10, #0xca00 */
  ARC_W_W(c, 10, UINT64_C(51712));
  /* 138834: movk w10, #0x3b9a, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(999948288)));
  /* 138838: mul x11, x9, x10 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 10))));
  /* 13883c: smulh x9, x9, x10 */
  ARC_X_W(c, 9, arc_smulh(ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 138840: asr x10, x8, #0x3f */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(63)) & 63))));
  /* 138844: adds x8, x11, x8 */
  ARC_X_W(c, 8, arc_add64(c, ARC_X_R(c, 11), ARC_X_R(c, 8), 0));
L_138848:;
  /* 138848: adc x9, x9, x10 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) + (uint64_t)(ARC_X_R(c, 10)) + (c)->cf));
  /* 13884c: stp x8, x9, [x19, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
L_138850:;
  /* 138850: ldp x8, x1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
L_138854:;
  /* 138854: and x9, x8, #0xffffffff00000000 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) & UINT64_C(18446744069414584320)));
L_138858:;
  /* 138858: mov w8, w8 */
  ARC_W_W(c, 8, ARC_W_R(c, 8));
  /* 13885c: orr x0, x9, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) | ARC_X_R(c, 8)));
  /* 138860: ldp x20, x19, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 138864: ldr x21, [sp, #0xd0] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(208))));
  /* 138868: ldp x29, x30, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13886c: add sp, sp, #0xf0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(240)));
  /* 138870: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 138874: ret  */
  return;
L_138878:;
  /* 138878: nop  */
  /* nop: no architectural effect here */
  /* 13887c: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 138880: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1280132));
  fn1_1424b8(c);
  /* 138884: cbz w0, #0x138654 */
  if ((ARC_W_R(c, 0)) == 0) goto L_138654;
  /* 138888: nop  */
  /* nop: no architectural effect here */
  /* 13888c: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 138890: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1280148));
  fn1_1424d0(c);
  /* 138894: b #0x138654 */
  goto L_138654;
L_138898:;
  /* 138898: nop  */
  /* nop: no architectural effect here */
  /* 13889c: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 1388a0: str x8, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 8));
  /* 1388a4: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1280168));
  fn1_1424b8(c);
  /* 1388a8: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 1388ac: cbz w0, #0x1386a0 */
  if ((ARC_W_R(c, 0)) == 0) goto L_1386a0;
  /* 1388b0: nop  */
  /* nop: no architectural effect here */
  /* 1388b4: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 1388b8: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1280188));
  fn1_1424d0(c);
  /* 1388bc: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 1388c0: b #0x1386a0 */
  goto L_1386a0;
L_1388c4:;
  /* 1388c4: nop  */
  /* nop: no architectural effect here */
  /* 1388c8: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 1388cc: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1280208));
  fn1_1424b8(c);
  /* 1388d0: cbz w0, #0x138750 */
  if ((ARC_W_R(c, 0)) == 0) goto L_138750;
  /* 1388d4: nop  */
  /* nop: no architectural effect here */
  /* 1388d8: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 1388dc: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1280224));
  fn1_1424d0(c);
  /* 1388e0: b #0x138750 */
  goto L_138750;
  /* 1388e4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1280232));
  fn1_a1454(c);
}

void fn1_13da48(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039229000));
  /* 13da48: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13da4c: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 13da50: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13da54: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13da58: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 13da5c: ldr w0, [x0, #8] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(8))));
  /* 13da60: ldr w1, [x1, #0x10] */
  ARC_W_W(c, 1, arc_ld32((ARC_X_R(c, 1) + INT64_C(16))));
  /* 13da64: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 13da68: bl #0x1448b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1301100));
  fn1_1448b8(c);
  /* 13da6c: mov w20, w0 */
  ARC_W_W(c, 20, ARC_W_R(c, 0));
  /* 13da70: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 13da74: b.eq #0x13da98 */
  if (ARC_COND(c, 0)) goto L_13da98;
  /* 13da78: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* 13da7c: nop  */
  /* nop: no architectural effect here */
  /* 13da80: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13da84: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13da88: tbz w8, #0, #0x13dadc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13dadc;
L_13da8c:;
  /* 13da8c: nop  */
  /* nop: no architectural effect here */
  /* 13da90: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13da94: b #0x13dabc */
  goto L_13dabc;
L_13da98:;
  /* 13da98: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1301148));
  fn1_142a58(c);
  /* 13da9c: nop  */
  /* nop: no architectural effect here */
  /* 13daa0: adr x9, #0x159208 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13daa4: ldr w8, [x0] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 0)));
  /* 13daa8: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 13daac: tbz w9, #0, #0x13dafc */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_13dafc;
L_13dab0:;
  /* 13dab0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 13dab4: nop  */
  /* nop: no architectural effect here */
  /* 13dab8: adr x8, #0x156d38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404216)));
L_13dabc:;
  /* 13dabc: cmn w20, #1 */
  (void)arc_add32(c, ARC_W_R(c, 20), UINT64_C(1), 0);
  /* 13dac0: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* 13dac4: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* 13dac8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13dacc: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13dad0: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 13dad4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13dad8: ret  */
  return;
L_13dadc:;
  /* 13dadc: nop  */
  /* nop: no architectural effect here */
  /* 13dae0: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13dae4: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1301224));
  fn1_1424b8(c);
  /* 13dae8: cbz w0, #0x13da8c */
  if ((ARC_W_R(c, 0)) == 0) goto L_13da8c;
  /* 13daec: nop  */
  /* nop: no architectural effect here */
  /* 13daf0: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13daf4: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1301240));
  fn1_1424d0(c);
  /* 13daf8: b #0x13da8c */
  goto L_13da8c;
L_13dafc:;
  /* 13dafc: nop  */
  /* nop: no architectural effect here */
  /* 13db00: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13db04: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* 13db08: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1301260));
  fn1_1424b8(c);
  /* 13db0c: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 13db10: cbz w0, #0x13dab0 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13dab0;
  /* 13db14: nop  */
  /* nop: no architectural effect here */
  /* 13db18: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13db1c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1301280));
  fn1_1424d0(c);
  /* 13db20: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 13db24: b #0x13dab0 */
  goto L_13dab0;
}

void fn1_142620(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248416));
  /* 142620: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 142624: ldr x17, [x16, #0xf40] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3904))));
  /* 142628: add x16, x16, #0xf40 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3904)));
  /* 14262c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142630: nop  */
  /* nop: no architectural effect here */
  /* 142634: nop  */
  /* nop: no architectural effect here */
}

void fn1_142c20(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249952));
  /* 142c20: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142c24: ldr x17, [x16, #0x140] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(320))));
  /* 142c28: add x16, x16, #0x140 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(320)));
  /* 142c2c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142c30: nop  */
  /* nop: no architectural effect here */
  /* 142c34: nop  */
  /* nop: no architectural effect here */
}

void fn1_143220(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251488));
  /* 143220: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143224: ldr x17, [x16, #0x340] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(832))));
  /* 143228: add x16, x16, #0x340 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(832)));
  /* 14322c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143230: nop  */
  /* nop: no architectural effect here */
  /* 143234: nop  */
  /* nop: no architectural effect here */
}

void fn1_143820(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253024));
  /* 143820: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143824: ldr x17, [x16, #0x540] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1344))));
  /* 143828: add x16, x16, #0x540 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1344)));
  /* 14382c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143830: nop  */
  /* nop: no architectural effect here */
  /* 143834: nop  */
  /* nop: no architectural effect here */
}

void fn1_143e20(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254560));
  /* 143e20: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143e24: ldr x17, [x16, #0x740] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1856))));
  /* 143e28: add x16, x16, #0x740 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1856)));
  /* 143e2c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143e30: nop  */
  /* nop: no architectural effect here */
  /* 143e34: nop  */
  /* nop: no architectural effect here */
}

void fn1_144420(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256096));
  /* 144420: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144424: ldr x17, [x16, #0x940] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2368))));
  /* 144428: add x16, x16, #0x940 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2368)));
  /* 14442c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144430: nop  */
  /* nop: no architectural effect here */
  /* 144434: nop  */
  /* nop: no architectural effect here */
}

void fn1_144a20(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039257632));
  /* 144a20: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144a24: ldr x17, [x16, #0xb40] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2880))));
  /* 144a28: add x16, x16, #0xb40 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2880)));
  /* 144a2c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144a30: nop  */
  /* nop: no architectural effect here */
  /* 144a34: nop  */
  /* nop: no architectural effect here */
}

