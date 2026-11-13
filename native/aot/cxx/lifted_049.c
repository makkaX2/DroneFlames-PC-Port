#include "lifted.h"

void fn1_9fde4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038582756));
  /* 9fde4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 9fde8: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 9fdec: stp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 9fdf0: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 9fdf4: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 9fdf8: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 9fdfc: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 9fe00: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 9fe04: sub sp, sp, #0x6a0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(1696)));
  /* 9fe08: mov w21, w3 */
  ARC_W_W(c, 21, ARC_W_R(c, 3));
  /* 9fe0c: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 9fe10: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* 9fe14: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 9fe18: cbz w3, #0x9fe3c */
  if ((ARC_W_R(c, 3)) == 0) goto L_9fe3c;
  /* 9fe1c: ldp x2, x3, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 3, arc_ld64(_pa + 8));
  }
  /* 9fe20: add x5, sp, #0x48 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(72)));
  /* 9fe24: ldr x0, [x20, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* 9fe28: add x6, sp, #0x10 */
  ARC_X_W(c, 6, ((c)->sp + UINT64_C(16)));
  /* 9fe2c: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 9fe30: add x4, x2, w21, uxtw */
  ARC_X_W(c, 4, (ARC_X_R(c, 2) + ((uint64_t)(uint32_t)(ARC_W_R(c, 21)))));
  /* 9fe34: bl #0xa0314 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(654904));
  fn1_a0314(c);
  /* 9fe38: tbnz w0, #0, #0x9ff54 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_9ff54;
L_9fe3c:;
  /* 9fe3c: ldr x2, [x19, #0x20] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* 9fe40: cbz x2, #0x9fe60 */
  if ((ARC_X_R(c, 2)) == 0) goto L_9fe60;
  /* 9fe44: ldr x0, [x20, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* 9fe48: ldr w3, [x19, #0x28] */
  ARC_W_W(c, 3, arc_ld32((ARC_X_R(c, 19) + INT64_C(40))));
  /* 9fe4c: add x4, sp, #0x48 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(72)));
  /* 9fe50: add x5, sp, #0x10 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(16)));
  /* 9fe54: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 9fe58: bl #0xa04dc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(654940));
  fn1_a04dc(c);
  /* 9fe5c: tbnz w0, #0, #0x9ff54 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_9ff54;
L_9fe60:;
  /* 9fe60: ldr x23, [x19] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 19)));
  /* 9fe64: nop  */
  /* nop: no architectural effect here */
  /* 9fe68: adr x0, #0x156dc4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1404356)));
  /* 9fe6c: bl #0x144a68 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(654960));
  fn1_144a68(c);
  /* 9fe70: adrp x8, #0x156000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1400832)));
  /* 9fe74: adrp x9, #0x156000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1400832)));
  /* 9fe78: ldr x8, [x8, #0xb88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2952))));
  /* 9fe7c: ldr x9, [x9, #0xb90] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2960))));
  /* 9fe80: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 9fe84: b.hs #0x9ff28 */
  if (ARC_COND(c, 2)) goto L_9ff28;
  /* 9fe88: cmn x23, #1 */
  (void)arc_add64(c, ARC_X_R(c, 23), UINT64_C(1), 0);
  /* 9fe8c: b.ne #0x9fea0 */
  if (ARC_COND(c, 1)) goto L_9fea0;
  /* 9fe90: b #0x9fed4 */
  goto L_9fed4;
L_9fe94:;
  /* 9fe94: add x8, x8, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* 9fe98: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 9fe9c: b.hs #0x9ff28 */
  if (ARC_COND(c, 2)) goto L_9ff28;
L_9fea0:;
  /* 9fea0: ldr x10, [x8] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 8)));
  /* 9fea4: cmp x23, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 10));
  /* 9fea8: b.ne #0x9fe94 */
  if (ARC_COND(c, 1)) goto L_9fe94;
  /* 9feac: ldr x10, [x8, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 9feb0: cmp x10, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 22));
  /* 9feb4: b.hi #0x9fe94 */
  if (ARC_COND(c, 8)) goto L_9fe94;
  /* 9feb8: ldr x10, [x8, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 9febc: cmp x22, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 10));
  /* 9fec0: b.hs #0x9fe94 */
  if (ARC_COND(c, 2)) goto L_9fe94;
  /* 9fec4: b #0x9feec */
  goto L_9feec;
L_9fec8:;
  /* 9fec8: add x8, x8, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* 9fecc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 9fed0: b.hs #0x9ff28 */
  if (ARC_COND(c, 2)) goto L_9ff28;
L_9fed4:;
  /* 9fed4: ldr x10, [x8, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 9fed8: cmp x10, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 22));
  /* 9fedc: b.hi #0x9fec8 */
  if (ARC_COND(c, 8)) goto L_9fec8;
  /* 9fee0: ldr x10, [x8, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 9fee4: cmp x22, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 10));
  /* 9fee8: b.hs #0x9fec8 */
  if (ARC_COND(c, 2)) goto L_9fec8;
L_9feec:;
  /* 9feec: ldr x23, [x8, #0x18] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 9fef0: nop  */
  /* nop: no architectural effect here */
  /* 9fef4: adr x0, #0x156dc4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1404356)));
  /* 9fef8: bl #0x1449c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(655100));
  fn1_1449c0(c);
  /* 9fefc: cbz x23, #0x9ff34 */
  if ((ARC_X_R(c, 23)) == 0) goto L_9ff34;
  /* 9ff00: ldp x2, x3, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 3, arc_ld64(_pa + 8));
  }
  /* 9ff04: add x5, sp, #0x48 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(72)));
  /* 9ff08: ldr x0, [x20, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* 9ff0c: add x6, sp, #0x10 */
  ARC_X_W(c, 6, ((c)->sp + UINT64_C(16)));
  /* 9ff10: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 9ff14: mov x4, x23 */
  ARC_X_W(c, 4, ARC_X_R(c, 23));
  /* 9ff18: bl #0xa0314 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(655132));
  fn1_a0314(c);
  /* 9ff1c: tbz w0, #0, #0x9ff34 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_9ff34;
  /* 9ff20: mov w24, wzr */
  ARC_W_W(c, 24, ARC_W_R(c, 31));
  /* 9ff24: b #0x9ff58 */
  goto L_9ff58;
L_9ff28:;
  /* 9ff28: nop  */
  /* nop: no architectural effect here */
  /* 9ff2c: adr x0, #0x156dc4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1404356)));
  /* 9ff30: bl #0x1449c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(655156));
  fn1_1449c0(c);
L_9ff34:;
  /* 9ff34: ldp x2, x3, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 3, arc_ld64(_pa + 8));
  }
  /* 9ff38: add x5, sp, #0x48 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(72)));
  /* 9ff3c: ldr x0, [x20, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* 9ff40: add x6, sp, #0x10 */
  ARC_X_W(c, 6, ((c)->sp + UINT64_C(16)));
  /* 9ff44: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 9ff48: mov x4, xzr */
  ARC_X_W(c, 4, ARC_X_R(c, 31));
  /* 9ff4c: bl #0xa0314 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(655184));
  fn1_a0314(c);
  /* 9ff50: tbz w0, #0, #0xa0090 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_a0090;
L_9ff54:;
  /* 9ff54: mov w24, #1 */
  ARC_W_W(c, 24, UINT64_C(1));
L_9ff58:;
  /* 9ff58: ldr x25, [x19] */
  ARC_X_W(c, 25, arc_ld64(ARC_X_R(c, 19)));
  /* 9ff5c: add x0, sp, #0x78 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(120)));
  /* 9ff60: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 9ff64: mov w2, #0x620 */
  ARC_W_W(c, 2, UINT64_C(1568));
  /* 9ff68: bl #0x144a20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(655212));
  fn1_144a20(c);
  /* 9ff6c: ldr x0, [x20, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* 9ff70: add x1, sp, #0x48 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(72)));
  /* 9ff74: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 9ff78: add x5, sp, #0x78 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(120)));
  /* 9ff7c: mov x3, x22 */
  ARC_X_W(c, 3, ARC_X_R(c, 22));
  /* 9ff80: mov w4, #4 */
  ARC_W_W(c, 4, UINT64_C(4));
  /* 9ff84: bl #0x9e0b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(655240));
  fn1_9e0b0(c);
  /* 9ff88: tbz w0, #0, #0xa0090 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_a0090;
  /* 9ff8c: ldur q0, [sp, #0x68] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(104))), arc_ld64(((c)->sp + INT64_C(104)) + 8));
  /* 9ff90: add x8, x20, #0x228 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + UINT64_C(552)));
  /* 9ff94: ldr x9, [sp, #0x30] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(48))));
  /* 9ff98: ldr x22, [sp, #0x60] */
  ARC_X_W(c, 22, arc_ld64(((c)->sp + INT64_C(96))));
  /* 9ff9c: cmp w21, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 21), UINT64_C(0));
  /* 9ffa0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 9ffa4: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* 9ffa8: ldr w8, [sp, #0x88] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(136))));
  /* 9ffac: str x9, [x20, #0x238] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(568)), ARC_X_R(c, 9));
  /* 9ffb0: eor w9, w24, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 24) ^ UINT64_C(1)));
  /* 9ffb4: str x8, [x20, #0x240] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(576)), ARC_X_R(c, 8));
  /* 9ffb8: mov w8, #0x3000000 */
  ARC_W_W(c, 8, UINT64_C(50331648));
  /* 9ffbc: str w8, [x20, #0x250] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(592)), ARC_W_R(c, 8));
  /* 9ffc0: ldp x23, x8, [sp, #0x48] */
  { const uint64_t _pa = ((c)->sp + INT64_C(72));
    ARC_X_W(c, 23, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 9ffc4: str x22, [x20, #0x220] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(544)), ARC_X_R(c, 22));
  /* 9ffc8: str xzr, [x20, #0x248] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(584)), ARC_X_R(c, 31));
  /* 9ffcc: str w8, [x20, #0x254] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(596)), ARC_W_R(c, 8));
  /* 9ffd0: csinc w8, w9, wzr, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? (ARC_W_R(c, 9)) : ((ARC_W_R(c, 31)) + 1)));
  /* 9ffd4: str x23, [x20, #0x258] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(600)), ARC_X_R(c, 23));
  /* 9ffd8: str x25, [x20, #0x260] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(608)), ARC_X_R(c, 25));
  /* 9ffdc: tbnz w8, #0, #0xa0094 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_a0094;
  /* 9ffe0: ldr x8, [x19, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* 9ffe4: cbnz x8, #0xa0094 */
  if ((ARC_X_R(c, 8)) != 0) goto L_a0094;
  /* 9ffe8: ldr x24, [x19] */
  ARC_X_W(c, 24, arc_ld64(ARC_X_R(c, 19)));
  /* 9ffec: nop  */
  /* nop: no architectural effect here */
  /* 9fff0: adr x0, #0x156dc4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1404356)));
  /* 9fff4: str q0, [sp] */
  arc_st64((c)->sp, (c)->q[0].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[0].u64[1]);
  /* 9fff8: bl #0x144ab0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(655356));
  fn1_144ab0(c);
  /* 9fffc: adrp x25, #0x156000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1400832)));
  /* a0000: adrp x26, #0x156000 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1400832)));
  /* a0004: ldr x8, [x25, #0xb90] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(2960))));
  /* a0008: ldr x9, [x26, #0xb98] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(2968))));
  /* a000c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a0010: b.lo #0xa0064 */
  if (ARC_COND(c, 3)) goto L_a0064;
  /* a0014: adrp x27, #0x156000 */
  ARC_X_W(c, 27, (arc_image_bases[1] + UINT64_C(1400832)));
  /* a0018: ldr x21, [x27, #0xb88] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 27) + INT64_C(2952))));
  /* a001c: sub x19, x9, x21 */
  ARC_X_W(c, 19, (ARC_X_R(c, 9) - ARC_X_R(c, 21)));
  /* a0020: lsl x0, x19, #2 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 19)) << ((UINT64_C(2)) & 63)));
  /* a0024: asr x28, x19, #3 */
  ARC_X_W(c, 28, ((uint64_t)((int64_t)(ARC_X_R(c, 19)) >> ((UINT64_C(3)) & 63))));
  /* a0028: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(655404));
  fn1_1428a8(c);
  /* a002c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* a0030: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* a0034: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a0038: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(655420));
  fn1_1449d8(c);
  /* a003c: nop  */
  /* nop: no architectural effect here */
  /* a0040: adr x8, #0x156e00 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404416)));
  /* a0044: cmp x21, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* a0048: b.eq #0xa0054 */
  if (ARC_COND(c, 0)) goto L_a0054;
  /* a004c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* a0050: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(655444));
  fn1_142800(c);
L_a0054:;
  /* a0054: add x9, x20, x28, lsl #5 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) + ((uint64_t)(ARC_X_R(c, 28)) << 5)));
  /* a0058: add x8, x20, x19 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + ARC_X_R(c, 19)));
  /* a005c: str x20, [x27, #0xb88] */
  arc_st64((ARC_X_R(c, 27) + INT64_C(2952)), ARC_X_R(c, 20));
  /* a0060: str x9, [x26, #0xb98] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(2968)), ARC_X_R(c, 9));
L_a0064:;
  /* a0064: ldr q0, [sp] */
  arc_q_w(c, 0, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* a0068: stp x24, x22, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* a006c: nop  */
  /* nop: no architectural effect here */
  /* a0070: adr x0, #0x156dc4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1404356)));
  /* a0074: str x23, [x8, #0x18] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(24)), ARC_X_R(c, 23));
  /* a0078: str d0, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), (c)->q[0].u64[0]);
  /* a007c: add x8, x8, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* a0080: str x8, [x25, #0xb90] */
  arc_st64((ARC_X_R(c, 25) + INT64_C(2960)), ARC_X_R(c, 8));
  /* a0084: bl #0x1449c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(655496));
  fn1_1449c0(c);
  /* a0088: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* a008c: b #0xa0094 */
  goto L_a0094;
L_a0090:;
  /* a0090: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
L_a0094:;
  /* a0094: add sp, sp, #0x6a0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(1696)));
  /* a0098: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a009c: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a00a0: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* a00a4: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* a00a8: ldp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* a00ac: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a00b0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a00b4: ret  */
  return;
}

void fn1_a20f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038591736));
  /* a20f8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a20fc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a2100: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* a2104: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a2108: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a210c: ldr x8, [x8, #0x910] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2320))));
  /* a2110: ldr x19, [x0, #8] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* a2114: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* a2118: sub x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) - UINT64_C(8)));
  /* a211c: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* a2120: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* a2124: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(663848));
  fn1_a2030(c);
  /* a2128: cmp w0, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(1));
  /* a212c: b.mi #0xa2140 */
  if (ARC_COND(c, 4)) goto L_a2140;
  /* a2130: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* a2134: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a2138: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a213c: ret  */
  return;
L_a2140:;
  /* a2140: sub x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) - UINT64_C(24)));
  /* a2144: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* a2148: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a214c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a2150: b #0x1426f8 */
  fn1_1426f8(c); return;
}

void fn1_a6a54(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038610516));
  /* a6a54: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a6a58: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a6a5c: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* a6a60: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a6a64: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a6a68: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a6a6c: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* a6a70: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* a6a74: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a6a78: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* a6a7c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a6a80: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* a6a84: add x8, x19, #0x2b0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + UINT64_C(688)));
  /* a6a88: add x24, x0, #0x98 */
  ARC_X_W(c, 24, (ARC_X_R(c, 0) + UINT64_C(152)));
  /* a6a8c: str q0, [x22, #0x20]! */
  arc_st64((ARC_X_R(c, 22) + INT64_C(32)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 22) + INT64_C(32)) + 8, (c)->q[0].u64[1]);
  ARC_X_W(c, 22, ARC_X_R(c, 22) + INT64_C(32));
  /* a6a90: stp x1, x22, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* a6a94: str q0, [x21, #0x58]! */
  arc_st64((ARC_X_R(c, 21) + INT64_C(88)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 21) + INT64_C(88)) + 8, (c)->q[0].u64[1]);
  ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(88));
  /* a6a98: str q0, [x0, #0x30] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(48)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(48)) + 8, (c)->q[0].u64[1]);
  /* a6a9c: stur q0, [x0, #0x68] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(104)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(104)) + 8, (c)->q[0].u64[1]);
  /* a6aa0: stur q0, [x0, #0x78] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(120)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(120)) + 8, (c)->q[0].u64[1]);
  /* a6aa4: stur q0, [x0, #0x88] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(136)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(136)) + 8, (c)->q[0].u64[1]);
  /* a6aa8: ldr x1, [x1, #0x298] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(664))));
  /* a6aac: str x21, [x23, #0x40]! */
  { const uint64_t _a = (ARC_X_R(c, 23) + INT64_C(64));
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(64));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* a6ab0: stp x22, x23, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* a6ab4: cmp x1, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 8));
  /* a6ab8: stp x21, x24, [x0, #0x48] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(72));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 24));
  }
  /* a6abc: b.eq #0xa6ae8 */
  if (ARC_COND(c, 0)) goto L_a6ae8;
  /* a6ac0: str x1, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 1));
  /* a6ac4: add x9, x19, #0x2d0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(720)));
  /* a6ac8: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* a6acc: ldr q0, [x19, #0x2a0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(672))), arc_ld64((ARC_X_R(c, 19) + INT64_C(672)) + 8));
  /* a6ad0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* a6ad4: str q0, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* a6ad8: str x8, [x19, #0x298] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(664)), ARC_X_R(c, 8));
  /* a6adc: str x8, [x19, #0x2a0] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(672)), ARC_X_R(c, 8));
  /* a6ae0: str x9, [x19, #0x2a8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(680)), ARC_X_R(c, 9));
  /* a6ae4: b #0xa6b24 */
  goto L_a6b24;
L_a6ae8:;
  /* a6ae8: ldr x8, [x19, #0x2a0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(672))));
  /* a6aec: subs x2, x8, x1 */
  ARC_X_W(c, 2, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1)));
  /* a6af0: b.eq #0xa6b0c */
  if (ARC_COND(c, 0)) goto L_a6b0c;
  /* a6af4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* a6af8: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(682748));
  fn1_1449f0(c);
  /* a6afc: ldr x8, [x19, #0x2a0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(672))));
  /* a6b00: ldr x1, [x19, #0x298] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(664))));
  /* a6b04: ldr x0, [x23] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 23)));
  /* a6b08: b #0xa6b14 */
  goto L_a6b14;
L_a6b0c:;
  /* a6b0c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* a6b10: mov x8, x1 */
  ARC_X_W(c, 8, ARC_X_R(c, 1));
L_a6b14:;
  /* a6b14: sub x8, x8, x1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 1)));
  /* a6b18: add x8, x22, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* a6b1c: str x8, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 8));
  /* a6b20: str x1, [x19, #0x2a0] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(672)), ARC_X_R(c, 1));
L_a6b24:;
  /* a6b24: ldr x8, [x19, #0x240] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(576))));
  /* a6b28: add x9, x19, #0x258 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(600)));
  /* a6b2c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a6b30: b.eq #0xa6b70 */
  if (ARC_COND(c, 0)) goto L_a6b70;
  /* a6b34: cmp x0, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 21));
  /* a6b38: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* a6b3c: b.eq #0xa6b8c */
  if (ARC_COND(c, 0)) goto L_a6b8c;
  /* a6b40: ldr x8, [x19, #0x248] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(584))));
  /* a6b44: str x0, [x19, #0x240] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(576)), ARC_X_R(c, 0));
  /* a6b48: ldr x9, [x20, #0x48] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(72))));
  /* a6b4c: str x8, [x20, #0x48] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(72)), ARC_X_R(c, 8));
  /* a6b50: ldr x8, [x19, #0x250] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(592))));
  /* a6b54: str x9, [x19, #0x248] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(584)), ARC_X_R(c, 9));
  /* a6b58: ldr x10, [x20, #0x50] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 20) + INT64_C(80))));
  /* a6b5c: str x8, [x20, #0x50] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(80)), ARC_X_R(c, 8));
  /* a6b60: ldr x9, [x19, #0x240] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(576))));
  /* a6b64: str x10, [x19, #0x250] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(592)), ARC_X_R(c, 10));
  /* a6b68: str x9, [x19, #0x248] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(584)), ARC_X_R(c, 9));
  /* a6b6c: b #0xa6bf8 */
  goto L_a6bf8;
L_a6b70:;
  /* a6b70: cmp x0, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 21));
  /* a6b74: b.eq #0xa6bac */
  if (ARC_COND(c, 0)) goto L_a6bac;
  /* a6b78: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(682876));
  fn1_142800(c);
  /* a6b7c: stp x21, x21, [x20, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a6b80: ldr x8, [x19, #0x240] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(576))));
  /* a6b84: str x24, [x20, #0x50] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(80)), ARC_X_R(c, 24));
  /* a6b88: b #0xa6bb0 */
  goto L_a6bb0;
L_a6b8c:;
  /* a6b8c: add x8, x19, #0x248 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + UINT64_C(584)));
  /* a6b90: ldr q0, [x8] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 8)), arc_ld64(ARC_X_R(c, 8) + 8));
  /* a6b94: add x8, x19, #0x298 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + UINT64_C(664)));
  /* a6b98: stur q0, [x20, #0x48] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* a6b9c: str x9, [x19, #0x240] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(576)), ARC_X_R(c, 9));
  /* a6ba0: str x9, [x19, #0x248] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(584)), ARC_X_R(c, 9));
  /* a6ba4: str x8, [x19, #0x250] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(592)), ARC_X_R(c, 8));
  /* a6ba8: b #0xa6bf8 */
  goto L_a6bf8;
L_a6bac:;
  /* a6bac: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
L_a6bb0:;
  /* a6bb0: ldr x9, [x19, #0x248] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(584))));
  /* a6bb4: subs x2, x9, x8 */
  ARC_X_W(c, 2, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8)));
  /* a6bb8: b.eq #0xa6bd8 */
  if (ARC_COND(c, 0)) goto L_a6bd8;
  /* a6bbc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* a6bc0: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* a6bc4: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(682952));
  fn1_1449f0(c);
  /* a6bc8: ldr x21, [x23] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 23)));
  /* a6bcc: ldr x9, [x19, #0x248] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(584))));
  /* a6bd0: ldr x8, [x19, #0x240] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(576))));
  /* a6bd4: b #0xa6bdc */
  goto L_a6bdc;
L_a6bd8:;
  /* a6bd8: mov x9, x8 */
  ARC_X_W(c, 9, ARC_X_R(c, 8));
L_a6bdc:;
  /* a6bdc: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* a6be0: add x9, x21, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 21) + ARC_X_R(c, 9)));
  /* a6be4: str x9, [x20, #0x48] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(72)), ARC_X_R(c, 9));
  /* a6be8: str x8, [x19, #0x248] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(584)), ARC_X_R(c, 8));
  /* a6bec: ldr x19, [x20] */
  ARC_X_W(c, 19, arc_ld64(ARC_X_R(c, 20)));
  /* a6bf0: ldr x1, [x19, #0x298] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(664))));
  /* a6bf4: ldr x9, [x19, #0x240] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(576))));
L_a6bf8:;
  /* a6bf8: str x1, [x19, #0x2a0] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(672)), ARC_X_R(c, 1));
  /* a6bfc: str x9, [x19, #0x248] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(584)), ARC_X_R(c, 9));
  /* a6c00: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a6c04: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a6c08: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* a6c0c: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a6c10: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a6c14: ret  */
  return;
}

void fn1_abfc4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038632388));
  /* abfc4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* abfc8: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* abfcc: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* abfd0: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* abfd4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* abfd8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* abfdc: ldr x24, [x0, #0x1330] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* abfe0: mov x21, x4 */
  ARC_X_W(c, 21, ARC_X_R(c, 4));
  /* abfe4: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* abfe8: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* abfec: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* abff0: ldr x8, [x24, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 24) + INT64_C(8))));
  /* abff4: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* abff8: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* abffc: b.hi #0xac020 */
  if (ARC_COND(c, 8)) goto L_ac020;
  /* ac000: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* ac004: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* ac008: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(704524));
  fn1_1428a8(c);
  /* ac00c: cbz x0, #0xac088 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ac088;
  /* ac010: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ac014: stp x24, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ac018: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* ac01c: str x0, [x23, #0x1330] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(4912)), ARC_X_R(c, 0));
L_ac020:;
  /* ac020: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* ac024: add x0, x24, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + ARC_X_R(c, 8)));
  /* ac028: adrp x8, #0x14a000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1351680)));
  /* ac02c: add x8, x8, #0x618 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1560)));
  /* ac030: str x9, [x24, #8] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(8)), ARC_X_R(c, 9));
  /* ac034: mov w9, #0x3d */
  ARC_W_W(c, 9, UINT64_C(61));
  /* ac038: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* ac03c: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* ac040: ldrh w10, [x21] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 21)));
  /* ac044: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* ac048: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* ac04c: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* ac050: ldr q0, [x22] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 22)), arc_ld64(ARC_X_R(c, 22) + 8));
  /* ac054: ldr x11, [x19] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 19)));
  /* ac058: bfxil w8, w10, #0, #6 */
  ARC_W_W(c, 8, (((uint32_t)(ARC_W_R(c, 8)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 10))) >> 0) & UINT64_C(63))));
  /* ac05c: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* ac060: str q0, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* ac064: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* ac068: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* ac06c: stp x9, x11, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 11));
  }
  /* ac070: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ac074: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ac078: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* ac07c: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ac080: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ac084: ret  */
  return;
L_ac088:;
  /* ac088: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(704652));
  fn1_142488(c);
}

void fn1_b2d50(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038660432));
  /* b2d50: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b2d54: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b2d58: str x25, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 25));
  /* b2d5c: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* b2d60: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b2d64: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b2d68: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b2d6c: ldr x25, [x0, #0x1330] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* b2d70: mov x19, x5 */
  ARC_X_W(c, 19, ARC_X_R(c, 5));
  /* b2d74: mov x21, x4 */
  ARC_X_W(c, 21, ARC_X_R(c, 4));
  /* b2d78: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* b2d7c: mov x23, x2 */
  ARC_X_W(c, 23, ARC_X_R(c, 2));
  /* b2d80: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* b2d84: ldr x8, [x25, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(8))));
  /* b2d88: sub x9, x8, #0xfa0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4000)));
  /* b2d8c: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b2d90: b.hi #0xb2db4 */
  if (ARC_COND(c, 8)) goto L_b2db4;
  /* b2d94: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* b2d98: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b2d9c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(732576));
  fn1_1428a8(c);
  /* b2da0: cbz x0, #0xb2e2c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b2e2c;
  /* b2da4: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b2da8: stp x25, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 25));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b2dac: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* b2db0: str x0, [x24, #0x1330] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(4912)), ARC_X_R(c, 0));
L_b2db4:;
  /* b2db4: add x9, x8, #0x50 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(80)));
  /* b2db8: add x0, x25, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 25) + ARC_X_R(c, 8)));
  /* b2dbc: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* b2dc0: str x9, [x25, #8] */
  arc_st64((ARC_X_R(c, 25) + INT64_C(8)), ARC_X_R(c, 9));
  /* b2dc4: adrp x9, #0x14a000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1351680)));
  /* b2dc8: add x9, x9, #0xd20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3360)));
  /* b2dcc: mov w10, #0x34 */
  ARC_W_W(c, 10, UINT64_C(52));
  /* b2dd0: str x9, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* b2dd4: ldr x11, [x21] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 21)));
  /* b2dd8: strb w10, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 10));
  /* b2ddc: ldurh w9, [x0, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* b2de0: ldr q0, [x22] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 22)), arc_ld64(ARC_X_R(c, 22) + 8));
  /* b2de4: str x8, [x0, #0x20] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(32)), ARC_X_R(c, 8));
  /* b2de8: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* b2dec: ldr q1, [x20] */
  arc_q_w(c, 1, arc_ld64(ARC_X_R(c, 20)), arc_ld64(ARC_X_R(c, 20) + 8));
  /* b2df0: str x11, [x0, #0x38] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(56)), ARC_X_R(c, 11));
  /* b2df4: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* b2df8: ldr q2, [x19] */
  arc_q_w(c, 2, arc_ld64(ARC_X_R(c, 19)), arc_ld64(ARC_X_R(c, 19) + 8));
  /* b2dfc: orr w8, w9, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* b2e00: str q0, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* b2e04: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* b2e08: stur q1, [x0, #0x28] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(40)), (c)->q[1].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(40)) + 8, (c)->q[1].u64[1]);
  /* b2e0c: str q2, [x0, #0x40] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(64)), (c)->q[2].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(64)) + 8, (c)->q[2].u64[1]);
  /* b2e10: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b2e14: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* b2e18: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* b2e1c: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* b2e20: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b2e24: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b2e28: ret  */
  return;
L_b2e2c:;
  /* b2e2c: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(732720));
  fn1_142488(c);
}

void fn1_b6804(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038675460));
  /* b6804: bti c */
  /* bti: no architectural effect here */
  /* b6808: ldr x0, [x0, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* b680c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* b6810: ldr x16, [x8, #0x38] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* b6814: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_b8774(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038683508));
  /* b8774: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b8778: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b877c: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b8780: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b8784: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b8788: ldr x0, [x0, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* b878c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b8790: cbz x0, #0xb8828 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b8828;
  /* b8794: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* b8798: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b879c: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b87a0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(755620));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b87a4: ldr x0, [x20, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* b87a8: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* b87ac: sxtb w9, w8 */
  ARC_W_W(c, 9, ((int32_t)(int8_t)(ARC_W_R(c, 8))));
  /* b87b0: cmn w9, #0x40 */
  (void)arc_add32(c, ARC_W_R(c, 9), UINT64_C(64), 0);
  /* b87b4: b.ge #0xb87d0 */
  if (ARC_COND(c, 10)) goto L_b87d0;
  /* b87b8: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* b87bc: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b87c0: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* b87c4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(755656));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b87c8: tbz w0, #0, #0xb87dc */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_b87dc;
  /* b87cc: b #0xb8828 */
  goto L_b8828;
L_b87d0:;
  /* b87d0: and w8, w8, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(255)));
  /* b87d4: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b87d8: b.lo #0xb8828 */
  if (ARC_COND(c, 3)) goto L_b8828;
L_b87dc:;
  /* b87dc: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b87e0: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b87e4: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b87e8: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b87ec: b.ls #0xb8814 */
  if (ARC_COND(c, 9)) goto L_b8814;
  /* b87f0: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b87f4: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b87f8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b87fc: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b8800: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b8804: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(755720));
  fn1_142878(c);
  /* b8808: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b880c: cbz x0, #0xb8880 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b8880;
  /* b8810: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b8814:;
  /* b8814: mov w9, #0x20 */
  ARC_W_W(c, 9, UINT64_C(32));
  /* b8818: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b881c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b8820: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b8824: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_b8828:;
  /* b8828: ldr x20, [x20, #0x18] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* b882c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b8830: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b8834: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b8838: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b883c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(755776));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b8840: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b8844: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b8848: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b884c: b.ne #0xb8860 */
  if (ARC_COND(c, 1)) goto L_b8860;
  /* b8850: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b8854: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b8858: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b885c: ret  */
  return;
L_b8860:;
  /* b8860: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b8864: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b8868: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b886c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b8870: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b8874: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b8878: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b887c: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_b8880:;
  /* b8880: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(755844));
  fn1_1427b8(c);
}

void fn1_bc000(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038697984));
  /* bc000: bti c */
  /* bti: no architectural effect here */
  /* bc004: ldr x0, [x0, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* bc008: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* bc00c: ldr x16, [x8, #0x20] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* bc010: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_bf140(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038710592));
  /* bf140: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bf144: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bf148: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bf14c: nop  */
  /* nop: no architectural effect here */
  /* bf150: adr x0, #0x1578f0 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407216)));
  /* bf154: nop  */
  /* nop: no architectural effect here */
  /* bf158: adr x1, #0xbf1e8 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(782824)));
  /* bf15c: bl #0x1429f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(782688));
  fn1_1429f8(c);
  /* bf160: cbnz w0, #0xbf170 */
  if ((ARC_W_R(c, 0)) != 0) goto L_bf170;
  /* bf164: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bf168: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bf16c: ret  */
  return;
L_bf170:;
  /* bf170: nop  */
  /* nop: no architectural effect here */
  /* bf174: adr x0, #0x51fca */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(335818)));
  /* bf178: bl #0xa23d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(782716));
  fn1_a23d8(c);
}

void fn1_d5624(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038801956));
  /* d5624: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d5628: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d562c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* d5630: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d5634: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* d5638: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* d563c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d5640: bl #0xd2ad4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(874052));
  fn1_d2ad4(c);
  /* d5644: fmov x8, d0 */
  ARC_X_W(c, 8, ARC_DU_R(c, 0));
  /* d5648: tbnz x8, #0x3f, #0xd5654 */
  if (((ARC_X_R(c, 8)) >> 63 & 1) != 0) goto L_d5654;
  /* d564c: mov x9, x8 */
  ARC_X_W(c, 9, ARC_X_R(c, 8));
  /* d5650: b #0xd566c */
  goto L_d566c;
L_d5654:;
  /* d5654: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* d5658: b.eq #0xd56d0 */
  if (ARC_COND(c, 0)) goto L_d56d0;
  /* d565c: fabs d0, d0 */
  arc_d_w(c, 0, (double)(fabs(ARC_D_R(c, 0))));
  /* d5660: mov w9, #0x2d */
  ARC_W_W(c, 9, UINT64_C(45));
  /* d5664: strb w9, [x19], #1 */
  { const uint64_t _a = ARC_X_R(c, 19);
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* d5668: fmov x9, d0 */
  ARC_X_W(c, 9, ARC_DU_R(c, 0));
L_d566c:;
  /* d566c: mov x10, #0x7ff0000000000000 */
  ARC_X_W(c, 10, UINT64_C(9218868437227405312));
  /* d5670: bics xzr, x10, x9 */
  { uint64_t _r = (uint64_t)(ARC_X_R(c, 10) & (~ARC_X_R(c, 9)));
    arc_flags_logical64(c, _r);
    ARC_X_W(c, 31, _r); }
  /* d5674: b.ne #0xd56a0 */
  if (ARC_COND(c, 1)) goto L_d56a0;
  /* d5678: ands x10, x9, #0xfffffffffffff */
  { uint64_t _r = (uint64_t)(ARC_X_R(c, 9) & UINT64_C(4503599627370495));
    arc_flags_logical64(c, _r);
    ARC_X_W(c, 10, _r); }
  /* d567c: b.eq #0xd56c0 */
  if (ARC_COND(c, 0)) goto L_d56c0;
  /* d5680: tbz x8, #0x3f, #0xd56dc */
  if (((ARC_X_R(c, 8)) >> 63 & 1) == 0) goto L_d56dc;
  /* d5684: mov x8, #0x8000000000000 */
  ARC_X_W(c, 8, UINT64_C(2251799813685248));
  /* d5688: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* d568c: b.ne #0xd56dc */
  if (ARC_COND(c, 1)) goto L_d56dc;
  /* d5690: adrp x1, #0x4f000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(323584)));
  /* d5694: add x1, x1, #0xa91 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2705)));
  /* d5698: mov w21, #8 */
  ARC_W_W(c, 21, UINT64_C(8));
  /* d569c: b #0xd5700 */
  goto L_d5700;
L_d56a0:;
  /* d56a0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d56a4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* d56a8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* d56ac: bl #0xddc14 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(874160));
  fn1_ddc14(c);
  /* d56b0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d56b4: and x8, x1, #0xffffffff00000000 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) & UINT64_C(18446744069414584320)));
  /* d56b8: mov w9, w1 */
  ARC_W_W(c, 9, ARC_W_R(c, 1));
  /* d56bc: b #0xd5734 */
  goto L_d5734;
L_d56c0:;
  /* d56c0: nop  */
  /* nop: no architectural effect here */
  /* d56c4: adr x1, #0x50992 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(330130)));
  /* d56c8: mov w21, #3 */
  ARC_W_W(c, 21, UINT64_C(3));
  /* d56cc: b #0xd5700 */
  goto L_d5700;
L_d56d0:;
  /* d56d0: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* d56d4: mov w9, #0x4b */
  ARC_W_W(c, 9, UINT64_C(75));
  /* d56d8: b #0xd5734 */
  goto L_d5734;
L_d56dc:;
  /* d56dc: adrp x8, #0x51000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(331776)));
  /* d56e0: add x8, x8, #0xea3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3747)));
  /* d56e4: adrp x10, #0x50000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(327680)));
  /* d56e8: add x10, x10, #0xf0d */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(3853)));
  /* d56ec: tst x9, #0x8000000000000 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(2251799813685248)));
  /* d56f0: mov w9, #3 */
  ARC_W_W(c, 9, UINT64_C(3));
  /* d56f4: mov w11, #9 */
  ARC_W_W(c, 11, UINT64_C(9));
  /* d56f8: csel x1, x10, x8, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* d56fc: csel x21, x11, x9, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 9)));
L_d5700:;
  /* d5700: sub x8, x20, x19 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) - ARC_X_R(c, 19)));
  /* d5704: cmp x8, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 21));
  /* d5708: b.ge #0xd571c */
  if (ARC_COND(c, 10)) goto L_d571c;
  /* d570c: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* d5710: mov w9, #0x4b */
  ARC_W_W(c, 9, UINT64_C(75));
  /* d5714: mov x19, x20 */
  ARC_X_W(c, 19, ARC_X_R(c, 20));
  /* d5718: b #0xd5734 */
  goto L_d5734;
L_d571c:;
  /* d571c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d5720: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* d5724: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(874280));
  fn1_1449d8(c);
  /* d5728: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* d572c: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* d5730: add x19, x19, x21 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + ARC_X_R(c, 21)));
L_d5734:;
  /* d5734: orr x1, x8, x9 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) | ARC_X_R(c, 9)));
  /* d5738: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d573c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d5740: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* d5744: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d5748: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d574c: ret  */
  return;
  /* d5750: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(874324));
  fn1_a1454(c);
}

void fn1_d9b80(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038819712));
  /* d9b80: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d9b84: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* d9b88: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d9b8c: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* d9b90: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d9b94: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* d9b98: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* d9b9c: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* d9ba0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* d9ba4: ldp x10, x9, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* d9ba8: mov w22, #1 */
  ARC_W_W(c, 22, UINT64_C(1));
  /* d9bac: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* d9bb0: lsr x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* d9bb4: stp xzr, xzr, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* d9bb8: strb w22, [sp, #0x20] */
  arc_st8(((c)->sp + INT64_C(32)), ARC_W_R(c, 22));
  /* d9bbc: csinc x9, x9, x0, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 0)) + 1)));
  /* d9bc0: csel x8, x8, x10, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* d9bc4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* d9bc8: stp x9, x8, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* d9bcc: bl #0xda18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(891856));
  fn1_da18c(c);
  /* d9bd0: ldrb w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(32))));
  /* d9bd4: ldr q0, [sp, #0x10] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(16))), arc_ld64(((c)->sp + INT64_C(16)) + 8));
  /* d9bd8: mov w10, #0x62 */
  ARC_W_W(c, 10, UINT64_C(98));
  /* d9bdc: nop  */
  /* nop: no architectural effect here */
  /* d9be0: adr x1, #0x5018e */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(328078)));
  /* d9be4: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* d9be8: lsl w9, w22, w8 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 22)) << ((ARC_W_R(c, 8)) & 31)));
  /* d9bec: stp xzr, xzr, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* d9bf0: stp xzr, x21, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* d9bf4: tst w9, w10 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & ARC_W_R(c, 10)));
  /* d9bf8: strb w8, [x19, #0x30] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(48)), ARC_W_R(c, 8));
  /* d9bfc: str q0, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)) + 8, (c)->q[0].u64[1]);
  /* d9c00: b.ne #0xd9c88 */
  if (ARC_COND(c, 1)) goto L_d9c88;
  /* d9c04: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* d9c08: lsl w8, w9, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 9)) << ((ARC_W_R(c, 8)) & 31)));
  /* d9c0c: mov w9, #0x14 */
  ARC_W_W(c, 9, UINT64_C(20));
  /* d9c10: tst w8, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 9)));
  /* d9c14: b.eq #0xd9c64 */
  if (ARC_COND(c, 0)) goto L_d9c64;
  /* d9c18: ldr x20, [sp, #0x18] */
  ARC_X_W(c, 20, arc_ld64(((c)->sp + INT64_C(24))));
  /* d9c1c: cmn x20, #8 */
  (void)arc_add64(c, ARC_X_R(c, 20), UINT64_C(8), 0);
  /* d9c20: b.hs #0xd9cec */
  if (ARC_COND(c, 2)) goto L_d9cec;
  /* d9c24: ldr x1, [sp, #0x10] */
  ARC_X_W(c, 1, arc_ld64(((c)->sp + INT64_C(16))));
  /* d9c28: cmp x20, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(23));
  /* d9c2c: b.lo #0xd9c88 */
  if (ARC_COND(c, 3)) goto L_d9c88;
  /* d9c30: orr x8, x20, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) | UINT64_C(7)));
  /* d9c34: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* d9c38: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* d9c3c: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* d9c40: csinc x22, x9, x8, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* d9c44: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* d9c48: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(891980));
  fn1_1428f0(c);
  /* d9c4c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* d9c50: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* d9c54: orr x8, x22, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) | UINT64_C(1)));
  /* d9c58: stp x20, x0, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* d9c5c: stur x8, [x29, #-0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-24)), ARC_X_R(c, 8));
  /* d9c60: b #0xd9c9c */
  goto L_d9c9c;
L_d9c64:;
  /* d9c64: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* d9c68: nop  */
  /* nop: no architectural effect here */
  /* d9c6c: adr x9, #0x5004e */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(327758)));
  /* d9c70: nop  */
  /* nop: no architectural effect here */
  /* d9c74: adr x10, #0x501db */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(328155)));
  /* d9c78: mov w20, #1 */
  ARC_W_W(c, 20, UINT64_C(1));
  /* d9c7c: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* d9c80: cmp w8, #0x5c */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(92));
  /* d9c84: csel x1, x10, x9, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
L_d9c88:;
  /* d9c88: lsl w8, w20, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 20)) << ((UINT64_C(1)) & 31)));
  /* d9c8c: sub x9, x29, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* d9c90: orr x21, x9, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* d9c94: sturb w8, [x29, #-0x18] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-24)), ARC_W_R(c, 8));
  /* d9c98: cbz x20, #0xd9ca8 */
  if ((ARC_X_R(c, 20)) == 0) goto L_d9ca8;
L_d9c9c:;
  /* d9c9c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* d9ca0: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* d9ca4: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(892072));
  fn1_1449f0(c);
L_d9ca8:;
  /* d9ca8: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* d9cac: strb wzr, [x21, x20] */
  arc_st8((ARC_X_R(c, 21) + ARC_X_R(c, 20)), ARC_W_R(c, 31));
  /* d9cb0: tbz w8, #0, #0xd9cc4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_d9cc4;
  /* d9cb4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* d9cb8: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* d9cbc: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* d9cc0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(892100));
  fn1_142608(c);
L_d9cc4:;
  /* d9cc4: ldur q0, [x29, #-0x18] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-24))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-24)) + 8));
  /* d9cc8: ldur x8, [x29, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* d9ccc: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* d9cd0: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* d9cd4: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d9cd8: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* d9cdc: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d9ce0: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* d9ce4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d9ce8: ret  */
  return;
L_d9cec:;
  /* d9cec: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(892144));
  fn1_d7d54(c);
}

void fn1_dc140(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038829376));
  /* dc140: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* dc144: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* dc148: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* dc14c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* dc150: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* dc154: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* dc158: add x0, x0, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(8)));
  /* dc15c: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* dc160: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* dc164: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(901480));
  fn1_142518(c);
  /* dc168: cbnz w0, #0xdc1a8 */
  if ((ARC_W_R(c, 0)) != 0) goto L_dc1a8;
  /* dc16c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* dc170: ldr x8, [x0, #0x30]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(48));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(48));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* dc174: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* dc178: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* dc17c: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* dc180: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(901508));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* dc184: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* dc188: add x0, x19, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* dc18c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(901520));
  fn1_142560(c);
  /* dc190: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* dc194: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* dc198: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* dc19c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* dc1a0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* dc1a4: ret  */
  return;
L_dc1a8:;
  /* dc1a8: nop  */
  /* nop: no architectural effect here */
  /* dc1ac: adr x1, #0x50f67 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331623)));
  /* dc1b0: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(901556));
  fn1_142a40(c);
  /* dc1b4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(901560));
  fn1_a1454(c);
  /* dc1b8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* dc1bc: add x0, x19, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* dc1c0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(901572));
  fn1_142560(c);
  /* dc1c4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* dc1c8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(901580));
  fn1_9cc20(c);
  /* dc1cc: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(901584));
  fn1_a1454(c);
}

void fn1_e0ba0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038848416));
  /* e0ba0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e0ba4: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e0ba8: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e0bac: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e0bb0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e0bb4: cmn x1, #8 */
  (void)arc_add64(c, ARC_X_R(c, 1), UINT64_C(8), 0);
  /* e0bb8: b.hs #0xe0c30 */
  if (ARC_COND(c, 2)) goto L_e0c30;
  /* e0bbc: mov w21, w2 */
  ARC_W_W(c, 21, ARC_W_R(c, 2));
  /* e0bc0: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* e0bc4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e0bc8: cmp x1, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(23));
  /* e0bcc: b.hs #0xe0be0 */
  if (ARC_COND(c, 2)) goto L_e0be0;
  /* e0bd0: lsl w8, w19, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 19)) << ((UINT64_C(1)) & 31)));
  /* e0bd4: strb w8, [x20], #1 */
  { const uint64_t _a = ARC_X_R(c, 20);
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* e0bd8: cbnz x19, #0xe0c08 */
  if ((ARC_X_R(c, 19)) != 0) goto L_e0c08;
  /* e0bdc: b #0xe0c18 */
  goto L_e0c18;
L_e0be0:;
  /* e0be0: orr x8, x19, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) | UINT64_C(7)));
  /* e0be4: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* e0be8: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* e0bec: csinc x22, x9, x8, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* e0bf0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* e0bf4: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(920568));
  fn1_1428f0(c);
  /* e0bf8: orr x8, x22, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) | UINT64_C(1)));
  /* e0bfc: stp x19, x0, [x20, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* e0c00: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* e0c04: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_e0c08:;
  /* e0c08: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e0c0c: mov w1, w21 */
  ARC_W_W(c, 1, ARC_W_R(c, 21));
  /* e0c10: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* e0c14: bl #0x144a20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(920600));
  fn1_144a20(c);
L_e0c18:;
  /* e0c18: strb wzr, [x20, x19] */
  arc_st8((ARC_X_R(c, 20) + ARC_X_R(c, 19)), ARC_W_R(c, 31));
  /* e0c1c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e0c20: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e0c24: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e0c28: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e0c2c: ret  */
  return;
L_e0c30:;
  /* e0c30: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(920628));
  fn1_d7d54(c);
}

void fn1_e3680(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038859392));
  /* e3680: bti c */
  /* bti: no architectural effect here */
  /* e3684: cbz x2, #0xe3718 */
  if ((ARC_X_R(c, 2)) == 0) goto L_e3718;
  /* e3688: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e368c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e3690: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e3694: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e3698: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e369c: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e36a0: ldp x10, x11, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* e36a4: lsr x9, x8, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e36a8: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e36ac: csel x20, x9, x10, eq */
  ARC_X_W(c, 20, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* e36b0: add x10, x0, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 0) + UINT64_C(4)));
  /* e36b4: sub x9, x20, x1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) - ARC_X_R(c, 1)));
  /* e36b8: csel x19, x10, x11, eq */
  ARC_X_W(c, 19, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 11)));
  /* e36bc: cmp x9, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 2));
  /* e36c0: csel x21, x9, x2, lo */
  ARC_X_W(c, 21, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 2)));
  /* e36c4: b.ls #0xe36ec */
  if (ARC_COND(c, 9)) goto L_e36ec;
  /* e36c8: add x8, x19, x1, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 1)) << 2)));
  /* e36cc: sub x9, x9, x21 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 21)));
  /* e36d0: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* e36d4: lsl x2, x9, #2 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(2)) & 63)));
  /* e36d8: add x1, x8, x21, lsl #2 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 21)) << 2)));
  /* e36dc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* e36e0: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(931556));
  fn1_1449f0(c);
  /* e36e4: ldrb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* e36e8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
L_e36ec:;
  /* e36ec: sub x9, x20, x21 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) - ARC_X_R(c, 21)));
  /* e36f0: tbnz w8, #0, #0xe3700 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_e3700;
  /* e36f4: lsl w8, w9, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 9)) << ((UINT64_C(1)) & 31)));
  /* e36f8: strb w8, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* e36fc: b #0xe3704 */
  goto L_e3704;
L_e3700:;
  /* e3700: str x9, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 9));
L_e3704:;
  /* e3704: str wzr, [x19, x9, lsl #2] */
  arc_st32((ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 9)) << 2)), ARC_W_R(c, 31));
  /* e3708: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e370c: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e3710: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e3714: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
L_e3718:;
  /* e3718: ret  */
  return;
}

void fn1_e7ce0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038877408));
  /* e7ce0: bti c */
  /* bti: no architectural effect here */
  /* e7ce4: cmp w1, #1, lsl #12 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(4096));
  /* e7ce8: b.lt #0xe7d40 */
  if (ARC_COND(c, 11)) goto L_e7d40;
  /* e7cec: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e7cf0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e7cf4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* e7cf8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e7cfc: mov w0, #0x28 */
  ARC_W_W(c, 0, UINT64_C(40));
  /* e7d00: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* e7d04: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(949512));
  fn1_1428f0(c);
  /* e7d08: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* e7d0c: mov w9, #0x72 */
  ARC_W_W(c, 9, UINT64_C(114));
  /* e7d10: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* e7d14: ldr q0, [x8, #0xab0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2736))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2736)) + 8));
  /* e7d18: adrp x8, #0x4f000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(323584)));
  /* e7d1c: add x8, x8, #0x71f */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1823)));
  /* e7d20: ldp q1, q2, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 2, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* e7d24: strh w9, [x0, #0x20] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(32)), ARC_W_R(c, 9));
  /* e7d28: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* e7d2c: stp q1, q2, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* e7d30: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* e7d34: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e7d38: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e7d3c: ret  */
  return;
L_e7d40:;
  /* e7d40: b #0xe7af0 */
  fn1_e7af0(c); return;
}

void fn1_ea548(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038887752));
  /* ea548: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ea54c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ea550: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* ea554: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ea558: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ea55c: mov w0, #0x78 */
  ARC_W_W(c, 0, UINT64_C(120));
  /* ea560: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959844));
  fn1_1428f0(c);
  /* ea564: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* ea568: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* ea56c: ldr x8, [x8, #0xa70] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2672))));
  /* ea570: str wzr, [x0, #0x70] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(112)), ARC_W_R(c, 31));
  /* ea574: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* ea578: stp x8, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ea57c: stp q0, q0, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* ea580: stp q0, q0, [x0, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(48));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* ea584: stp q0, q0, [x0, #0x50] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(80));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* ea588: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* ea58c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* ea590: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ea594: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ea598: ret  */
  return;
}

void fn1_ebec0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038894272));
  /* ebec0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ebec4: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* ebec8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ebecc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* ebed0: ldr w0, [x0] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 0)));
  /* ebed4: mov w1, #0x5200 */
  ARC_W_W(c, 1, UINT64_C(20992));
  /* ebed8: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* ebedc: movk w1, #0x8004, lsl #16 */
  ARC_W_W(c, 1, ((ARC_W_R(c, 1) & UINT64_C(18446744069414649855)) | UINT64_C(2147745792)));
  /* ebee0: bl #0x1433a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(966372));
  fn1_1433a0(c);
  /* ebee4: movi d0, #0000000000000000 */
  arc_v_clear(c, 0);
  /* ebee8: tbnz w0, #0x1f, #0xebf04 */
  if (((ARC_W_R(c, 0)) >> 31 & 1) != 0) goto L_ebf04;
  /* ebeec: ldur w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* ebef0: tbnz w8, #0x1f, #0xebf04 */
  if (((ARC_W_R(c, 8)) >> 31 & 1) != 0) goto L_ebf04;
  /* ebef4: cmp w8, #0x20 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(32));
  /* ebef8: mov w9, #0x20 */
  ARC_W_W(c, 9, UINT64_C(32));
  /* ebefc: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* ebf00: ucvtf d0, w8 */
  arc_d_w(c, 0, (double)(((uint32_t)(ARC_W_R(c, 8)))));
L_ebf04:;
  /* ebf04: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ebf08: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* ebf0c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ebf10: ret  */
  return;
  /* ebf14: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(966424));
  fn1_a1454(c);
}

void fn1_ed8fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038900988));
  /* ed8fc: bti c */
  /* bti: no architectural effect here */
  /* ed900: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* ed904: ret  */
  return;
}

void fn1_f1a5c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038917724));
  /* f1a5c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f1a60: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* f1a64: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f1a68: str x27, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 27));
  /* f1a6c: stp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* f1a70: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* f1a74: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f1a78: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f1a7c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f1a80: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* f1a84: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f1a88: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f1a8c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f1a90: bl #0x143610 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(989844));
  fn1_143610(c);
  /* f1a94: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* f1a98: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f1a9c: b.ne #0xf1c00 */
  if (ARC_COND(c, 1)) goto L_f1c00;
  /* f1aa0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f1aa4: nop  */
  /* nop: no architectural effect here */
  /* f1aa8: adr x27, #0x15dc40 */
  ARC_X_W(c, 27, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f1aac: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f1ab0: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f1ab4: ldr x22, [x8, #0x30] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f1ab8: ldr w26, [x8, #8] */
  ARC_W_W(c, 26, arc_ld32((ARC_X_R(c, 8) + INT64_C(8))));
  /* f1abc: cmp x22, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 27));
  /* f1ac0: str x22, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 22));
  /* f1ac4: b.eq #0xf1ad4 */
  if (ARC_COND(c, 0)) goto L_f1ad4;
  /* f1ac8: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f1acc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f1ad0: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(989908));
  fn1_db2e0(c);
L_f1ad4:;
  /* f1ad4: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f1ad8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* f1adc: ldr x1, [x1, #0xb50] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2896))));
  /* f1ae0: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(989924));
  fn1_143748(c);
  /* f1ae4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* f1ae8: cmp x22, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 27));
  /* f1aec: b.eq #0xf1b10 */
  if (ARC_COND(c, 0)) goto L_f1b10;
  /* f1af0: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f1af4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f1af8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(989948));
  fn1_bd950(c);
  /* f1afc: cbnz x0, #0xf1b10 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f1b10;
  /* f1b00: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f1b04: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* f1b08: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f1b0c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(989968));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f1b10:;
  /* f1b10: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f1b14: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f1b18: add x22, x19, x8 */
  ARC_X_W(c, 22, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f1b1c: ldr w3, [x22, #0x90] */
  ARC_W_W(c, 3, arc_ld32((ARC_X_R(c, 22) + INT64_C(144))));
  /* f1b20: ldr x23, [x22, #0x28] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 22) + INT64_C(40))));
  /* f1b24: cmn w3, #1 */
  (void)arc_add32(c, ARC_W_R(c, 3), UINT64_C(1), 0);
  /* f1b28: b.ne #0xf1b9c */
  if (ARC_COND(c, 1)) goto L_f1b9c;
  /* f1b2c: ldr x24, [x22, #0x30] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 22) + INT64_C(48))));
  /* f1b30: cmp x24, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 27));
  /* f1b34: str x24, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 24));
  /* f1b38: b.eq #0xf1b48 */
  if (ARC_COND(c, 0)) goto L_f1b48;
  /* f1b3c: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f1b40: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f1b44: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(990024));
  fn1_db2e0(c);
L_f1b48:;
  /* f1b48: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f1b4c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* f1b50: ldr x1, [x1, #0xb40] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2880))));
  /* f1b54: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(990040));
  fn1_143748(c);
  /* f1b58: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f1b5c: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* f1b60: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* f1b64: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(990056));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f1b68: mov w25, w0 */
  ARC_W_W(c, 25, ARC_W_R(c, 0));
  /* f1b6c: cmp x24, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 27));
  /* f1b70: b.eq #0xf1b94 */
  if (ARC_COND(c, 0)) goto L_f1b94;
  /* f1b74: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f1b78: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f1b7c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(990080));
  fn1_bd950(c);
  /* f1b80: cbnz x0, #0xf1b94 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f1b94;
  /* f1b84: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f1b88: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f1b8c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f1b90: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(990100));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f1b94:;
  /* f1b94: and w3, w25, #0xff */
  ARC_W_W(c, 3, (ARC_W_R(c, 25) & UINT64_C(255)));
  /* f1b98: str w3, [x22, #0x90] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(144)), ARC_W_R(c, 3));
L_f1b9c:;
  /* f1b9c: mov w8, #0x4a */
  ARC_W_W(c, 8, UINT64_C(74));
  /* f1ba0: and w8, w26, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 26) & ARC_W_R(c, 8)));
  /* f1ba4: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* f1ba8: b.eq #0xf1bb4 */
  if (ARC_COND(c, 0)) goto L_f1bb4;
  /* f1bac: cmp w8, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(8));
  /* f1bb0: b.ne #0xf1bbc */
  if (ARC_COND(c, 1)) goto L_f1bbc;
L_f1bb4:;
  /* f1bb4: mov w4, w20 */
  ARC_W_W(c, 4, ARC_W_R(c, 20));
  /* f1bb8: b #0xf1bc0 */
  goto L_f1bc0;
L_f1bbc:;
  /* f1bbc: sxtw x4, w20 */
  ARC_X_W(c, 4, ((int64_t)(int32_t)(ARC_W_R(c, 20))));
L_f1bc0:;
  /* f1bc0: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* f1bc4: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* f1bc8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f1bcc: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* f1bd0: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* f1bd4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(990168));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f1bd8: cbnz x0, #0xf1c00 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f1c00;
  /* f1bdc: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f1be0: mov w10, #5 */
  ARC_W_W(c, 10, UINT64_C(5));
  /* f1be4: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f1be8: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f1bec: ldp w9, w11, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* f1bf0: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* f1bf4: tst w11, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & ARC_W_R(c, 9)));
  /* f1bf8: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f1bfc: b.ne #0xf1c30 */
  if (ARC_COND(c, 1)) goto L_f1c30;
L_f1c00:;
  /* f1c00: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f1c04: bl #0x143628 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(990216));
  fn1_143628(c);
L_f1c08:;
  /* f1c08: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f1c0c: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f1c10: ldr x27, [sp, #0x20] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(32))));
  /* f1c14: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f1c18: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* f1c1c: ldp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* f1c20: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f1c24: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* f1c28: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f1c2c: ret  */
  return;
L_f1c30:;
  /* f1c30: nop  */
  /* nop: no architectural effect here */
  /* f1c34: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f1c38: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(990268));
  fn1_ec720(c);
  /* f1c3c: b #0xf1c68 */
  goto L_f1c68;
  /* f1c40: cmp x24, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 27));
  /* f1c44: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f1c48: b.eq #0xf1c9c */
  if (ARC_COND(c, 0)) goto L_f1c9c;
  /* f1c4c: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f1c50: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f1c54: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(990296));
  fn1_bd950(c);
  /* f1c58: cbnz x0, #0xf1c9c */
  if ((ARC_X_R(c, 0)) != 0) goto L_f1c9c;
  /* f1c5c: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f1c60: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f1c64: b #0xf1c94 */
  goto L_f1c94;
L_f1c68:;
  /* f1c68: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f1c6c: b #0xf1c9c */
  goto L_f1c9c;
  /* f1c70: cmp x22, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 27));
  /* f1c74: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f1c78: b.eq #0xf1c9c */
  if (ARC_COND(c, 0)) goto L_f1c9c;
  /* f1c7c: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f1c80: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f1c84: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(990344));
  fn1_bd950(c);
  /* f1c88: cbnz x0, #0xf1c9c */
  if ((ARC_X_R(c, 0)) != 0) goto L_f1c9c;
  /* f1c8c: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f1c90: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
L_f1c94:;
  /* f1c94: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f1c98: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(990364));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f1c9c:;
  /* f1c9c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f1ca0: bl #0x143628 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(990372));
  fn1_143628(c);
  /* f1ca4: b #0xf1cac */
  goto L_f1cac;
  /* f1ca8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_f1cac:;
  /* f1cac: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f1cb0: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(990388));
  fn1_142548(c);
  /* f1cb4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f1cb8: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f1cbc: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f1cc0: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* f1cc4: ldrb w10, [x8, #0x24] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f1cc8: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f1ccc: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f1cd0: tbnz w10, #0, #0xf1cdc */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_f1cdc;
  /* f1cd4: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(990424));
  fn1_142980(c);
  /* f1cd8: b #0xf1c08 */
  goto L_f1c08;
L_f1cdc:;
  /* f1cdc: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(990432));
  fn1_1429b0(c);
  /* f1ce0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f1ce4: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(990440));
  fn1_142980(c);
  /* f1ce8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f1cec: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(990448));
  fn1_9cc20(c);
  /* f1cf0: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(990452));
  fn1_a1454(c);
}

void fn1_f4330(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038928176));
  /* f4330: bti c */
  /* bti: no architectural effect here */
  /* f4334: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* f4338: ret  */
  return;
}

void fn1_f84a4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038944932));
  /* f84a4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f84a8: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* f84ac: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f84b0: stp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* f84b4: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* f84b8: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f84bc: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f84c0: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* f84c4: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* f84c8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f84cc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f84d0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f84d4: bl #0x143688 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1017048));
  fn1_143688(c);
  /* f84d8: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* f84dc: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f84e0: b.ne #0xf864c */
  if (ARC_COND(c, 1)) goto L_f864c;
  /* f84e4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f84e8: nop  */
  /* nop: no architectural effect here */
  /* f84ec: adr x26, #0x15dc40 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f84f0: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f84f4: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f84f8: ldr x22, [x8, #0x30] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f84fc: ldr w25, [x8, #8] */
  ARC_W_W(c, 25, arc_ld32((ARC_X_R(c, 8) + INT64_C(8))));
  /* f8500: cmp x22, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 26));
  /* f8504: stur x22, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 22));
  /* f8508: b.eq #0xf8518 */
  if (ARC_COND(c, 0)) goto L_f8518;
  /* f850c: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f8510: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f8514: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1017112));
  fn1_db2e0(c);
L_f8518:;
  /* f8518: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f851c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* f8520: ldr x1, [x1, #0xb68] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2920))));
  /* f8524: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1017128));
  fn1_143748(c);
  /* f8528: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* f852c: cmp x22, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 26));
  /* f8530: b.eq #0xf8554 */
  if (ARC_COND(c, 0)) goto L_f8554;
  /* f8534: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f8538: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f853c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1017152));
  fn1_bd950(c);
  /* f8540: cbnz x0, #0xf8554 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f8554;
  /* f8544: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f8548: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* f854c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f8550: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1017172));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f8554:;
  /* f8554: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f8558: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f855c: add x22, x19, x8 */
  ARC_X_W(c, 22, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f8560: ldr w3, [x22, #0x90] */
  ARC_W_W(c, 3, arc_ld32((ARC_X_R(c, 22) + INT64_C(144))));
  /* f8564: ldr x23, [x22, #0x28] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 22) + INT64_C(40))));
  /* f8568: cmn w3, #1 */
  (void)arc_add32(c, ARC_W_R(c, 3), UINT64_C(1), 0);
  /* f856c: b.ne #0xf85e8 */
  if (ARC_COND(c, 1)) goto L_f85e8;
  /* f8570: ldr x24, [x22, #0x30] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 22) + INT64_C(48))));
  /* f8574: cmp x24, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 26));
  /* f8578: stur x24, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 24));
  /* f857c: b.eq #0xf858c */
  if (ARC_COND(c, 0)) goto L_f858c;
  /* f8580: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f8584: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f8588: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1017228));
  fn1_db2e0(c);
L_f858c:;
  /* f858c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f8590: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* f8594: ldr x1, [x1, #0xb58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2904))));
  /* f8598: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1017244));
  fn1_143748(c);
  /* f859c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f85a0: ldr x8, [x8, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* f85a4: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* f85a8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1017260));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f85ac: mov w3, w0 */
  ARC_W_W(c, 3, ARC_W_R(c, 0));
  /* f85b0: cmp x24, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 26));
  /* f85b4: b.eq #0xf85e4 */
  if (ARC_COND(c, 0)) goto L_f85e4;
  /* f85b8: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f85bc: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f85c0: mov w26, w3 */
  ARC_W_W(c, 26, ARC_W_R(c, 3));
  /* f85c4: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1017288));
  fn1_bd950(c);
  /* f85c8: mov w3, w26 */
  ARC_W_W(c, 3, ARC_W_R(c, 26));
  /* f85cc: cbnz x0, #0xf85e4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f85e4;
  /* f85d0: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f85d4: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f85d8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f85dc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1017312));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f85e0: mov w3, w26 */
  ARC_W_W(c, 3, ARC_W_R(c, 26));
L_f85e4:;
  /* f85e4: str w3, [x22, #0x90] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(144)), ARC_W_R(c, 3));
L_f85e8:;
  /* f85e8: mov w8, #0x4a */
  ARC_W_W(c, 8, UINT64_C(74));
  /* f85ec: and w8, w25, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 25) & ARC_W_R(c, 8)));
  /* f85f0: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* f85f4: b.eq #0xf8600 */
  if (ARC_COND(c, 0)) goto L_f8600;
  /* f85f8: cmp w8, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(8));
  /* f85fc: b.ne #0xf8608 */
  if (ARC_COND(c, 1)) goto L_f8608;
L_f8600:;
  /* f8600: mov w4, w20 */
  ARC_W_W(c, 4, ARC_W_R(c, 20));
  /* f8604: b #0xf860c */
  goto L_f860c;
L_f8608:;
  /* f8608: sxtw x4, w20 */
  ARC_X_W(c, 4, ((int64_t)(int32_t)(ARC_W_R(c, 20))));
L_f860c:;
  /* f860c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* f8610: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* f8614: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f8618: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* f861c: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* f8620: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1017380));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f8624: cbnz x0, #0xf864c */
  if ((ARC_X_R(c, 0)) != 0) goto L_f864c;
  /* f8628: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f862c: mov w10, #5 */
  ARC_W_W(c, 10, UINT64_C(5));
  /* f8630: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f8634: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f8638: ldp w9, w11, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* f863c: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* f8640: tst w11, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & ARC_W_R(c, 9)));
  /* f8644: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f8648: b.ne #0xf8678 */
  if (ARC_COND(c, 1)) goto L_f8678;
L_f864c:;
  /* f864c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f8650: bl #0x1436a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1017428));
  fn1_1436a0(c);
L_f8654:;
  /* f8654: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f8658: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f865c: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f8660: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* f8664: ldp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* f8668: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f866c: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* f8670: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f8674: ret  */
  return;
L_f8678:;
  /* f8678: nop  */
  /* nop: no architectural effect here */
  /* f867c: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f8680: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1017476));
  fn1_ec720(c);
  /* f8684: b #0xf86b0 */
  goto L_f86b0;
  /* f8688: cmp x24, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 26));
  /* f868c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f8690: b.eq #0xf86e4 */
  if (ARC_COND(c, 0)) goto L_f86e4;
  /* f8694: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f8698: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f869c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1017504));
  fn1_bd950(c);
  /* f86a0: cbnz x0, #0xf86e4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f86e4;
  /* f86a4: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f86a8: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f86ac: b #0xf86dc */
  goto L_f86dc;
L_f86b0:;
  /* f86b0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f86b4: b #0xf86e4 */
  goto L_f86e4;
  /* f86b8: cmp x22, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 26));
  /* f86bc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f86c0: b.eq #0xf86e4 */
  if (ARC_COND(c, 0)) goto L_f86e4;
  /* f86c4: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f86c8: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f86cc: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1017552));
  fn1_bd950(c);
  /* f86d0: cbnz x0, #0xf86e4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f86e4;
  /* f86d4: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f86d8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
L_f86dc:;
  /* f86dc: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f86e0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1017572));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f86e4:;
  /* f86e4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f86e8: bl #0x1436a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1017580));
  fn1_1436a0(c);
  /* f86ec: b #0xf86f4 */
  goto L_f86f4;
  /* f86f0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_f86f4:;
  /* f86f4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f86f8: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1017596));
  fn1_142548(c);
  /* f86fc: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f8700: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f8704: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f8708: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* f870c: ldrb w10, [x8, #0x24] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f8710: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f8714: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f8718: tbnz w10, #0, #0xf8724 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_f8724;
  /* f871c: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1017632));
  fn1_142980(c);
  /* f8720: b #0xf8654 */
  goto L_f8654;
L_f8724:;
  /* f8724: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1017640));
  fn1_1429b0(c);
  /* f8728: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f872c: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1017648));
  fn1_142980(c);
  /* f8730: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f8734: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1017656));
  fn1_9cc20(c);
  /* f8738: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1017660));
  fn1_a1454(c);
}

void fn1_fd4f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038965488));
  /* fd4f0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fd4f4: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fd4f8: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* fd4fc: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fd500: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fd504: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fd508: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fd50c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fd510: ldr x8, [x8, #0xb10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2832))));
  /* fd514: ldr x9, [x9, #0xae0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2784))));
  /* fd518: ldrb w11, [x0, #0x50] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 0) + INT64_C(80))));
  /* fd51c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* fd520: add x10, x8, #0x18 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* fd524: add x8, x8, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* fd528: str x8, [x19, #0x78]! */
  { const uint64_t _a = (ARC_X_R(c, 19) + INT64_C(120));
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(120));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* fd52c: add x8, x9, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* fd530: str x10, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 10));
  /* fd534: str x8, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 8));
  /* fd538: tbz w11, #0, #0xfd54c */
  if (((ARC_W_R(c, 11)) >> 0 & 1) == 0) goto L_fd54c;
  /* fd53c: ldr x8, [x20, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(80))));
  /* fd540: ldr x0, [x20, #0x60] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(96))));
  /* fd544: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* fd548: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1037644));
  fn1_142608(c);
L_fd54c:;
  /* fd54c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fd550: nop  */
  /* nop: no architectural effect here */
  /* fd554: adr x9, #0x15dc40 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1432640)));
  /* fd558: ldr x8, [x8, #0xaa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2728))));
  /* fd55c: ldr x21, [x20, #0x18] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* fd560: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* fd564: cmp x21, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 9));
  /* fd568: str x8, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 8));
  /* fd56c: b.eq #0xfd590 */
  if (ARC_COND(c, 0)) goto L_fd590;
  /* fd570: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* fd574: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fd578: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1037692));
  fn1_bd950(c);
  /* fd57c: cbnz x0, #0xfd590 */
  if ((ARC_X_R(c, 0)) != 0) goto L_fd590;
  /* fd580: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* fd584: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* fd588: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fd58c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1037712));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fd590:;
  /* fd590: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fd594: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fd598: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* fd59c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fd5a0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fd5a4: b #0x1433b8 */
  fn1_1433b8(c); return;
}

void fn1_1043f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038993904));
  /* 1043f0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1043f4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1043f8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1043fc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 104400: nop  */
  /* nop: no architectural effect here */
  /* 104404: adr x8, #0x15dc38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 104408: adrp x19, #0x15d000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 10440c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 104410: tbz w8, #0, #0x104428 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_104428;
L_104414:;
  /* 104414: ldr x0, [x19, #0xc30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(3120))));
  /* 104418: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 10441c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 104420: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 104424: ret  */
  return;
L_104428:;
  /* 104428: nop  */
  /* nop: no architectural effect here */
  /* 10442c: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 104430: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1066036));
  fn1_1424b8(c);
  /* 104434: cbz w0, #0x104414 */
  if ((ARC_W_R(c, 0)) == 0) goto L_104414;
  /* 104438: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 10443c: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 104440: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 104444: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 104448: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1066060));
  fn1_1441e0(c);
  /* 10444c: str x0, [x19, #0xc30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 104450: nop  */
  /* nop: no architectural effect here */
  /* 104454: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 104458: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1066076));
  fn1_1424d0(c);
  /* 10445c: b #0x104414 */
  goto L_104414;
  /* 104460: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 104464: nop  */
  /* nop: no architectural effect here */
  /* 104468: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10446c: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1066096));
  fn1_1424e8(c);
  /* 104470: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 104474: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1066104));
  fn1_9cc20(c);
}

void fn1_110b4c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039044940));
  /* 110b4c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 110b50: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 110b54: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 110b58: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 110b5c: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 110b60: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 110b64: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 110b68: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 110b6c: mov x2, x4 */
  ARC_X_W(c, 2, ARC_X_R(c, 4));
  /* 110b70: mov x3, x5 */
  ARC_X_W(c, 3, ARC_X_R(c, 5));
  /* 110b74: mov w4, #4 */
  ARC_W_W(c, 4, UINT64_C(4));
  /* 110b78: bl #0x110db0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1117052));
  fn1_110db0(c);
  /* 110b7c: ldrb w8, [x20] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 20)));
  /* 110b80: tbnz w8, #2, #0x110b8c */
  if (((ARC_W_R(c, 8)) >> 2 & 1) != 0) goto L_110b8c;
  /* 110b84: sub w8, w0, #0x76c */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) - UINT64_C(1900)));
  /* 110b88: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_110b8c:;
  /* 110b8c: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 110b90: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 110b94: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 110b98: ret  */
  return;
}

void fn1_113d80(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057792));
  /* 113d80: bti c */
  /* bti: no architectural effect here */
  /* 113d84: stp xzr, xzr, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 113d88: str xzr, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 31));
  /* 113d8c: ret  */
  return;
}

void fn1_11ad3c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039086396));
  /* 11ad3c: bti c */
  /* bti: no architectural effect here */
  /* 11ad40: ret  */
  return;
}

void fn1_125690(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039129744));
  /* 125690: bti c */
  /* bti: no architectural effect here */
  /* 125694: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* 125698: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* 12569c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 1256a0: b.eq #0x125744 */
  if (ARC_COND(c, 0)) goto L_125744;
  /* 1256a4: ldrb w10, [x9, #0x120] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 9) + INT64_C(288))));
  /* 1256a8: ldr x11, [x9, #0x128] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 9) + INT64_C(296))));
  /* 1256ac: ubfx w12, w10, #1, #7 */
  ARC_W_W(c, 12, (((uint32_t)(ARC_W_R(c, 10)) >> 1) & UINT64_C(127)));
  /* 1256b0: tst w10, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1)));
  /* 1256b4: csel x2, x12, x11, eq */
  ARC_X_W(c, 2, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* 1256b8: cmp x2, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 2), UINT64_C(1));
  /* 1256bc: b.ne #0x1256dc */
  if (ARC_COND(c, 1)) goto L_1256dc;
  /* 1256c0: ldr x11, [x9, #0x130] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 9) + INT64_C(304))));
  /* 1256c4: add x12, x9, #0x121 */
  ARC_X_W(c, 12, (ARC_X_R(c, 9) + UINT64_C(289)));
  /* 1256c8: tst w10, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1)));
  /* 1256cc: csel x11, x12, x11, eq */
  ARC_X_W(c, 11, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* 1256d0: ldrb w11, [x11] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 11)));
  /* 1256d4: cmp w11, #0x2a */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(42));
  /* 1256d8: b.eq #0x12573c */
  if (ARC_COND(c, 0)) goto L_12573c;
L_1256dc:;
  /* 1256dc: ldrb w11, [x8, #0x120] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 8) + INT64_C(288))));
  /* 1256e0: ldr x12, [x8, #0x128] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 8) + INT64_C(296))));
  /* 1256e4: lsr x13, x11, #1 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(1)) & 63)));
  /* 1256e8: tst w11, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & UINT64_C(1)));
  /* 1256ec: csel x12, x13, x12, eq */
  ARC_X_W(c, 12, (ARC_COND(c, 0) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 12)));
  /* 1256f0: cmp x2, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 12));
  /* 1256f4: b.ne #0x12573c */
  if (ARC_COND(c, 1)) goto L_12573c;
  /* 1256f8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1256fc: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 125700: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 125704: ldr x12, [x9, #0x130] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 9) + INT64_C(304))));
  /* 125708: add x9, x9, #0x121 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(289)));
  /* 12570c: tst w10, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1)));
  /* 125710: ldr x10, [x8, #0x130] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 8) + INT64_C(304))));
  /* 125714: add x8, x8, #0x121 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(289)));
  /* 125718: csel x0, x9, x12, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 12)));
  /* 12571c: tst w11, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & UINT64_C(1)));
  /* 125720: csel x1, x8, x10, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* 125724: bl #0x142890 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1201960));
  fn1_142890(c);
  /* 125728: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* 12572c: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* 125730: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 125734: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 125738: ret  */
  return;
L_12573c:;
  /* 12573c: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 125740: ret  */
  return;
L_125744:;
  /* 125744: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 125748: ret  */
  return;
}

void fn1_127e08(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039139848));
  /* 127e08: bti c */
  /* bti: no architectural effect here */
  /* 127e0c: mov w0, #3 */
  ARC_W_W(c, 0, UINT64_C(3));
  /* 127e10: str x2, [x4] */
  arc_st64(ARC_X_R(c, 4), ARC_X_R(c, 2));
  /* 127e14: str x5, [x7] */
  arc_st64(ARC_X_R(c, 7), ARC_X_R(c, 5));
  /* 127e18: ret  */
  return;
}

void fn1_129fbc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039148476));
  /* 129fbc: bti c */
  /* bti: no architectural effect here */
  /* 129fc0: mov w0, #3 */
  ARC_W_W(c, 0, UINT64_C(3));
  /* 129fc4: str x2, [x4] */
  arc_st64(ARC_X_R(c, 4), ARC_X_R(c, 2));
  /* 129fc8: ret  */
  return;
}

void fn1_12b90c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039154956));
  /* 12b90c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12b910: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 12b914: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12b918: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12b91c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 12b920: mov x19, x7 */
  ARC_X_W(c, 19, ARC_X_R(c, 7));
  /* 12b924: mov x9, x6 */
  ARC_X_W(c, 9, ARC_X_R(c, 6));
  /* 12b928: mov x8, x5 */
  ARC_X_W(c, 8, ARC_X_R(c, 5));
  /* 12b92c: ldr x6, [x0, #0x10] */
  ARC_X_W(c, 6, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 12b930: ldr w7, [x0, #0x18] */
  ARC_W_W(c, 7, arc_ld32((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12b934: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 12b938: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 12b93c: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 12b940: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 12b944: mov x5, sp */
  ARC_X_W(c, 5, (c)->sp);
  /* 12b948: mov x3, x8 */
  ARC_X_W(c, 3, ARC_X_R(c, 8));
  /* 12b94c: mov x4, x9 */
  ARC_X_W(c, 4, ARC_X_R(c, 9));
  /* 12b950: bl #0x128c08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1227092));
  fn1_128c08(c);
  /* 12b954: ldp x9, x8, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12b958: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 12b95c: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* 12b960: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12b964: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12b968: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 12b96c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12b970: ret  */
  return;
}

void fn1_12e24c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039165516));
  /* 12e24c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12e250: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12e254: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12e258: nop  */
  /* nop: no architectural effect here */
  /* 12e25c: adr x8, #0x15df18 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433368)));
  /* 12e260: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 12e264: tbz w8, #0, #0x12e27c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12e27c;
L_12e268:;
  /* 12e268: nop  */
  /* nop: no architectural effect here */
  /* 12e26c: adr x0, #0x156da8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1404328)));
  /* 12e270: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12e274: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12e278: ret  */
  return;
L_12e27c:;
  /* 12e27c: nop  */
  /* nop: no architectural effect here */
  /* 12e280: adr x0, #0x15df18 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433368)));
  /* 12e284: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1237640));
  fn1_1424b8(c);
  /* 12e288: cbz w0, #0x12e268 */
  if ((ARC_W_R(c, 0)) == 0) goto L_12e268;
  /* 12e28c: adrp x0, #0x151000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 12e290: nop  */
  /* nop: no architectural effect here */
  /* 12e294: adr x1, #0x156da8 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1404328)));
  /* 12e298: ldr x0, [x0, #0xa40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(2624))));
  /* 12e29c: nop  */
  /* nop: no architectural effect here */
  /* 12e2a0: adr x2, #0x148af8 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1346296)));
  /* 12e2a4: bl #0x1423f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1237672));
  fn1_1423f8(c);
  /* 12e2a8: nop  */
  /* nop: no architectural effect here */
  /* 12e2ac: adr x0, #0x15df18 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433368)));
  /* 12e2b0: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1237684));
  fn1_1424d0(c);
  /* 12e2b4: b #0x12e268 */
  goto L_12e268;
}

void fn1_134ac0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192256));
  /* 134ac0: bti c */
  /* bti: no architectural effect here */
  /* 134ac4: add x0, x0, #0x400 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1024)));
  /* 134ac8: ret  */
  return;
}

void fn1_135bec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039196652));
  /* 135bec: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 135bf0: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 135bf4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 135bf8: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 135bfc: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 135c00: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 135c04: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 135c08: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 135c0c: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* 135c10: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 135c14: b.eq #0x135cb4 */
  if (ARC_COND(c, 0)) goto L_135cb4;
  /* 135c18: ldrb w24, [x0] */
  ARC_W_W(c, 24, arc_ld8(ARC_X_R(c, 0)));
  /* 135c1c: mov w21, w3 */
  ARC_W_W(c, 21, ARC_W_R(c, 3));
  /* 135c20: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 135c24: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 135c28: cmp w24, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 24), UINT64_C(45));
  /* 135c2c: b.ne #0x135c3c */
  if (ARC_COND(c, 1)) goto L_135c3c;
  /* 135c30: add x22, x22, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* 135c34: cmp x22, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 20));
  /* 135c38: b.eq #0x135cb4 */
  if (ARC_COND(c, 0)) goto L_135cb4;
L_135c3c:;
  /* 135c3c: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1268800));
  fn1_142a58(c);
  /* 135c40: ldr w25, [x0] */
  ARC_W_W(c, 25, arc_ld32(ARC_X_R(c, 0)));
  /* 135c44: str wzr, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 31));
  /* 135c48: nop  */
  /* nop: no architectural effect here */
  /* 135c4c: adr x8, #0x15dc38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 135c50: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 135c54: adrp x26, #0x15d000 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 135c58: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 135c5c: tbz w8, #0, #0x135cf4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_135cf4;
L_135c60:;
  /* 135c60: ldr x3, [x26, #0xc30] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 26) + INT64_C(3120))));
  /* 135c64: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 135c68: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 135c6c: mov w2, w21 */
  ARC_W_W(c, 2, ARC_W_R(c, 21));
  /* 135c70: bl #0x1444f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1268852));
  fn1_1444f8(c);
  /* 135c74: ldr w8, [x23] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 23)));
  /* 135c78: cbz w8, #0x135ca4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_135ca4;
  /* 135c7c: ldr x9, [sp, #8] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(8))));
  /* 135c80: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* 135c84: b.ne #0x135cb4 */
  if (ARC_COND(c, 1)) goto L_135cb4;
  /* 135c88: lsr x9, x0, #0x10 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(16)) & 63)));
  /* 135c8c: cbnz x9, #0x135ce8 */
  if ((ARC_X_R(c, 9)) != 0) goto L_135ce8;
  /* 135c90: cmp w8, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(34));
  /* 135c94: b.eq #0x135ce8 */
  if (ARC_COND(c, 0)) goto L_135ce8;
L_135c98:;
  /* 135c98: cmp w24, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 24), UINT64_C(45));
  /* 135c9c: cneg w0, w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 0))) : (ARC_W_R(c, 0))));
  /* 135ca0: b #0x135cc0 */
  goto L_135cc0;
L_135ca4:;
  /* 135ca4: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 135ca8: str w25, [x23] */
  arc_st32(ARC_X_R(c, 23), ARC_W_R(c, 25));
  /* 135cac: cmp x8, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* 135cb0: b.eq #0x135ce0 */
  if (ARC_COND(c, 0)) goto L_135ce0;
L_135cb4:;
  /* 135cb4: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 135cb8: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
L_135cbc:;
  /* 135cbc: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_135cc0:;
  /* 135cc0: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 135cc4: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 135cc8: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 135ccc: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 135cd0: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 135cd4: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 135cd8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 135cdc: ret  */
  return;
L_135ce0:;
  /* 135ce0: cmp x0, #0x10, lsl #12 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(65536));
  /* 135ce4: b.lo #0x135c98 */
  if (ARC_COND(c, 3)) goto L_135c98;
L_135ce8:;
  /* 135ce8: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 135cec: mov w0, #0xffff */
  ARC_W_W(c, 0, UINT64_C(65535));
  /* 135cf0: b #0x135cbc */
  goto L_135cbc;
L_135cf4:;
  /* 135cf4: nop  */
  /* nop: no architectural effect here */
  /* 135cf8: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 135cfc: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1268992));
  fn1_1424b8(c);
  /* 135d00: cbz w0, #0x135c60 */
  if ((ARC_W_R(c, 0)) == 0) goto L_135c60;
  /* 135d04: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 135d08: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 135d0c: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 135d10: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 135d14: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1269016));
  fn1_1441e0(c);
  /* 135d18: str x0, [x26, #0xc30] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 135d1c: nop  */
  /* nop: no architectural effect here */
  /* 135d20: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 135d24: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1269032));
  fn1_1424d0(c);
  /* 135d28: b #0x135c60 */
  goto L_135c60;
  /* 135d2c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 135d30: nop  */
  /* nop: no architectural effect here */
  /* 135d34: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 135d38: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1269052));
  fn1_1424e8(c);
  /* 135d3c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 135d40: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1269060));
  fn1_9cc20(c);
}

void fn1_138e98(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039209624));
  /* 138e98: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 138e9c: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 138ea0: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* 138ea4: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 138ea8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 138eac: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 138eb0: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 138eb4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 138eb8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 138ebc: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* 138ec0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 138ec4: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* 138ec8: mov w2, #0xb0 */
  ARC_W_W(c, 2, UINT64_C(176));
  /* 138ecc: bl #0x142818 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1281744));
  fn1_142818(c);
  /* 138ed0: ldr x20, [x29, #0x18] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 138ed4: cbnz x20, #0x138eec */
  if ((ARC_X_R(c, 20)) != 0) goto L_138eec;
  /* 138ed8: mov w0, #0xb0 */
  ARC_W_W(c, 0, UINT64_C(176));
  /* 138edc: bl #0xa24dc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1281760));
  fn1_a24dc(c);
  /* 138ee0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 138ee4: cbnz x0, #0x138eec */
  if ((ARC_X_R(c, 0)) != 0) goto L_138eec;
  /* 138ee8: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1281772));
  fn1_142488(c);
L_138eec:;
  /* 138eec: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 138ef0: mov x23, x20 */
  ARC_X_W(c, 23, ARC_X_R(c, 20));
  /* 138ef4: stp q0, q0, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 138ef8: stp q0, q0, [x20, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 138efc: stp q0, q0, [x20, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(64));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 138f00: stp q0, q0, [x20, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(96));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 138f04: stp q0, q0, [x20, #0x90] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(144));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 138f08: str q0, [x23, #0x80]! */
  arc_st64((ARC_X_R(c, 23) + INT64_C(128)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 23) + INT64_C(128)) + 8, (c)->q[0].u64[1]);
  ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(128));
  /* 138f0c: ldp x3, x4, [x22] */
  { const uint64_t _pa = ARC_X_R(c, 22);
    ARC_X_W(c, 3, arc_ld64(_pa));
    ARC_X_W(c, 4, arc_ld64(_pa + 8));
  }
  /* 138f10: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 138f14: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 138f18: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 138f1c: bl #0x139410 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1281824));
  fn1_139410(c);
  /* 138f20: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 138f24: adrp x2, #0x151000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 138f28: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 138f2c: ldr x1, [x1, #0xa08] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2568))));
  /* 138f30: ldr x2, [x2, #0xa10] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 2) + INT64_C(2576))));
  /* 138f34: bl #0x142440 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1281848));
  fn1_142440(c);
  /* 138f38: nop  */
  /* nop: no architectural effect here */
  /* 138f3c: adr x8, #0x1576e0 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1406688)));
  /* 138f40: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 138f44: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 138f48: b.lo #0x138f6c */
  if (ARC_COND(c, 3)) goto L_138f6c;
  /* 138f4c: adrp x8, #0x157000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404928)));
  /* 138f50: add x8, x8, #0x8e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2272)));
  /* 138f54: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 138f58: b.hs #0x138f6c */
  if (ARC_COND(c, 2)) goto L_138f6c;
  /* 138f5c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 138f60: bl #0xa2664 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1281892));
  fn1_a2664(c);
  /* 138f64: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 138f68: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1281900));
  fn1_9cc20(c);
L_138f6c:;
  /* 138f6c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 138f70: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1281908));
  fn1_142800(c);
  /* 138f74: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 138f78: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1281916));
  fn1_9cc20(c);
  /* 138f7c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1281920));
  fn1_a1454(c);
  /* 138f80: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1281924));
  fn1_a1454(c);
}

void fn1_13e5d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039231960));
  /* 13e5d8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13e5dc: sub sp, sp, #0x140 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(320)));
  /* 13e5e0: stp x29, x30, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13e5e4: stp x28, x25, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 13e5e8: stp x24, x23, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 13e5ec: stp x22, x21, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13e5f0: stp x20, x19, [sp, #0x130] */
  { const uint64_t _pa = ((c)->sp + INT64_C(304));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13e5f4: add x29, sp, #0xf0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(240)));
  /* 13e5f8: adrp x8, #0x50000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(327680)));
  /* 13e5fc: add x8, x8, #0xbdb */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3035)));
  /* 13e600: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 13e604: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13e608: nop  */
  /* nop: no architectural effect here */
  /* 13e60c: adr x25, #0x156d40 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13e610: stp x8, x1, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 13e614: nop  */
  /* nop: no architectural effect here */
  /* 13e618: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13e61c: stp x0, xzr, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13e620: cbz x1, #0x13e638 */
  if ((ARC_X_R(c, 1)) == 0) goto L_13e638;
  /* 13e624: str wzr, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 31));
  /* 13e628: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13e62c: tbz w8, #0, #0x13e924 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13e924;
L_13e630:;
  /* 13e630: str x25, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 25));
  /* 13e634: b #0x13e640 */
  goto L_13e640;
L_13e638:;
  /* 13e638: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13e63c: tbz w8, #0, #0x13e944 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13e944;
L_13e640:;
  /* 13e640: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 13e644: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 13e648: add x1, sp, #0x60 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(96)));
  /* 13e64c: str wzr, [sp, #0x30] */
  arc_st32(((c)->sp + INT64_C(48)), ARC_W_R(c, 31));
  /* 13e650: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 13e654: str x25, [sp, #0x38] */
  arc_st64(((c)->sp + INT64_C(56)), ARC_X_R(c, 25));
  /* 13e658: csinc x0, x9, x19, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* 13e65c: str wzr, [sp, #0x10] */
  arc_st32(((c)->sp + INT64_C(16)), ARC_W_R(c, 31));
  /* 13e660: str x25, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 25));
  /* 13e664: bl #0x144588 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1304168));
  fn1_144588(c);
  /* 13e668: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 13e66c: b.ne #0x13e694 */
  if (ARC_COND(c, 1)) goto L_13e694;
  /* 13e670: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1304180));
  fn1_142a58(c);
  /* 13e674: nop  */
  /* nop: no architectural effect here */
  /* 13e678: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13e67c: ldr w21, [x0] */
  ARC_W_W(c, 21, arc_ld32(ARC_X_R(c, 0)));
  /* 13e680: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13e684: tbz w8, #0, #0x13e964 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13e964;
L_13e688:;
  /* 13e688: nop  */
  /* nop: no architectural effect here */
  /* 13e68c: adr x8, #0x156d38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13e690: stp x21, x8, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
L_13e694:;
  /* 13e694: add x8, sp, #0x28 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(40)));
  /* 13e698: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 13e69c: add x2, sp, #0x60 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(96)));
  /* 13e6a0: add x3, sp, #0x30 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(48)));
  /* 13e6a4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 13e6a8: bl #0x1388e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1304236));
  fn1_1388e8(c);
  /* 13e6ac: ldrb w8, [sp, #0x28] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(40))));
  /* 13e6b0: cmp w8, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(255));
  /* 13e6b4: b.eq #0x13e6d0 */
  if (ARC_COND(c, 0)) goto L_13e6d0;
  /* 13e6b8: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 13e6bc: b.eq #0x13e734 */
  if (ARC_COND(c, 0)) goto L_13e734;
  /* 13e6c0: cbnz w8, #0x13e708 */
  if ((ARC_W_R(c, 8)) != 0) goto L_13e708;
  /* 13e6c4: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 13e6c8: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* 13e6cc: b #0x13e730 */
  goto L_13e730;
L_13e6d0:;
  /* 13e6d0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13e6d4: bl #0x142b18 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1304280));
  fn1_142b18(c);
  /* 13e6d8: cmn x1, #8 */
  (void)arc_add64(c, ARC_X_R(c, 1), UINT64_C(8), 0);
  /* 13e6dc: b.hs #0x13e984 */
  if (ARC_COND(c, 2)) goto L_13e984;
  /* 13e6e0: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 13e6e4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 13e6e8: cmp x1, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(23));
  /* 13e6ec: b.hs #0x13e75c */
  if (ARC_COND(c, 2)) goto L_13e75c;
  /* 13e6f0: lsl w8, w21, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 21)) << ((UINT64_C(1)) & 31)));
  /* 13e6f4: add x9, sp, #0x60 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(96)));
  /* 13e6f8: orr x23, x9, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* 13e6fc: strb w8, [sp, #0x60] */
  arc_st8(((c)->sp + INT64_C(96)), ARC_W_R(c, 8));
  /* 13e700: cbnz x21, #0x13e784 */
  if ((ARC_X_R(c, 21)) != 0) goto L_13e784;
  /* 13e704: b #0x13e794 */
  goto L_13e794;
L_13e708:;
  /* 13e708: nop  */
  /* nop: no architectural effect here */
  /* 13e70c: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13e710: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13e714: tbz w8, #0, #0x13e988 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13e988;
L_13e718:;
  /* 13e718: mov w8, #0x11 */
  ARC_W_W(c, 8, UINT64_C(17));
  /* 13e71c: nop  */
  /* nop: no architectural effect here */
  /* 13e720: adr x9, #0x156d38 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13e724: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 13e728: add x1, sp, #0x60 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(96)));
  /* 13e72c: stp x8, x9, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
L_13e730:;
  /* 13e730: bl #0x13d8bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1304372));
  fn1_13d8bc(c);
L_13e734:;
  /* 13e734: mov w19, wzr */
  ARC_W_W(c, 19, ARC_W_R(c, 31));
L_13e738:;
  /* 13e738: and w0, w19, #1 */
  ARC_W_W(c, 0, (ARC_W_R(c, 19) & UINT64_C(1)));
  /* 13e73c: ldp x20, x19, [sp, #0x130] */
  { const uint64_t _pa = ((c)->sp + INT64_C(304));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13e740: ldp x22, x21, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 13e744: ldp x24, x23, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 13e748: ldp x28, x25, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 13e74c: ldp x29, x30, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13e750: add sp, sp, #0x140 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(320)));
  /* 13e754: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13e758: ret  */
  return;
L_13e75c:;
  /* 13e75c: orr x8, x21, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) | UINT64_C(7)));
  /* 13e760: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* 13e764: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* 13e768: csinc x24, x9, x8, eq */
  ARC_X_W(c, 24, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* 13e76c: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 13e770: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1304436));
  fn1_1428f0(c);
  /* 13e774: orr x8, x24, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) | UINT64_C(1)));
  /* 13e778: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 13e77c: stp x21, x0, [sp, #0x68] */
  { const uint64_t _pa = ((c)->sp + INT64_C(104));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 13e780: str x8, [sp, #0x60] */
  arc_st64(((c)->sp + INT64_C(96)), ARC_X_R(c, 8));
L_13e784:;
  /* 13e784: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 13e788: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 13e78c: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 13e790: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1304468));
  fn1_1449f0(c);
L_13e794:;
  /* 13e794: strb wzr, [x23, x21] */
  arc_st8((ARC_X_R(c, 23) + ARC_X_R(c, 21)), ARC_W_R(c, 31));
  /* 13e798: ldr q0, [sp, #0x60] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(96))), arc_ld64(((c)->sp + INT64_C(96)) + 8));
  /* 13e79c: ldr x11, [sp, #0x70] */
  ARC_X_W(c, 11, arc_ld64(((c)->sp + INT64_C(112))));
  /* 13e7a0: str q0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* 13e7a4: ldrb w8, [sp, #0x10] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(16))));
  /* 13e7a8: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
  /* 13e7ac: str x11, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 11));
  /* 13e7b0: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 13e7b4: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 13e7b8: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 13e7bc: cbz x9, #0x13e88c */
  if ((ARC_X_R(c, 9)) == 0) goto L_13e88c;
  /* 13e7c0: ldr x9, [sp, #0x20] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(32))));
  /* 13e7c4: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 13e7c8: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* 13e7cc: add x1, sp, #0x60 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(96)));
  /* 13e7d0: stur wzr, [x29, #-0x10] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-16)), ARC_W_R(c, 31));
  /* 13e7d4: csinc x0, x9, x8, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* 13e7d8: stur x25, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 25));
  /* 13e7dc: bl #0x144588 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1304544));
  fn1_144588(c);
  /* 13e7e0: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 13e7e4: b.ne #0x13e80c */
  if (ARC_COND(c, 1)) goto L_13e80c;
  /* 13e7e8: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1304556));
  fn1_142a58(c);
  /* 13e7ec: nop  */
  /* nop: no architectural effect here */
  /* 13e7f0: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13e7f4: ldr w21, [x0] */
  ARC_W_W(c, 21, arc_ld32(ARC_X_R(c, 0)));
  /* 13e7f8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13e7fc: tbz w8, #0, #0x13e9a8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13e9a8;
L_13e800:;
  /* 13e800: nop  */
  /* nop: no architectural effect here */
  /* 13e804: adr x8, #0x156d38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13e808: stp x21, x8, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
L_13e80c:;
  /* 13e80c: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 13e810: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 13e814: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 13e818: add x2, sp, #0x60 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(96)));
  /* 13e81c: add x3, sp, #0x30 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(48)));
  /* 13e820: bl #0x1388e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1304612));
  fn1_1388e8(c);
  /* 13e824: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 13e828: cmp w8, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(255));
  /* 13e82c: b.eq #0x13e84c */
  if (ARC_COND(c, 0)) goto L_13e84c;
  /* 13e830: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 13e834: b.eq #0x13e88c */
  if (ARC_COND(c, 0)) goto L_13e88c;
  /* 13e838: cbnz w8, #0x13e8c0 */
  if ((ARC_W_R(c, 8)) != 0) goto L_13e8c0;
  /* 13e83c: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 13e840: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* 13e844: bl #0x13d8bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1304648));
  fn1_13d8bc(c);
  /* 13e848: b #0x13e904 */
  goto L_13e904;
L_13e84c:;
  /* 13e84c: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 13e850: ldp x10, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 13e854: add x12, x19, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* 13e858: lsr x11, x8, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 13e85c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 13e860: csel x1, x12, x9, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 9)));
  /* 13e864: csel x2, x11, x10, eq */
  ARC_X_W(c, 2, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 13e868: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 13e86c: bl #0x142b60 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1304688));
  fn1_142b60(c);
  /* 13e870: cbz w0, #0x13e8f0 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13e8f0;
  /* 13e874: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 13e878: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 13e87c: bl #0x144738 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1304704));
  fn1_144738(c);
  /* 13e880: cbz x20, #0x13e88c */
  if ((ARC_X_R(c, 20)) == 0) goto L_13e88c;
  /* 13e884: ldr w8, [x20] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 20)));
  /* 13e888: cbnz w8, #0x13e904 */
  if ((ARC_W_R(c, 8)) != 0) goto L_13e904;
L_13e88c:;
  /* 13e88c: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* 13e890: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13e894: bl #0x144750 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1304728));
  fn1_144750(c);
  /* 13e898: ldr w8, [sp, #0x30] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(48))));
  /* 13e89c: cbz w8, #0x13e8b0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_13e8b0;
  /* 13e8a0: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 13e8a4: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* 13e8a8: bl #0x13d8bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1304748));
  fn1_13d8bc(c);
  /* 13e8ac: b #0x13e904 */
  goto L_13e904;
L_13e8b0:;
  /* 13e8b0: mov w19, w0 */
  ARC_W_W(c, 19, ARC_W_R(c, 0));
  /* 13e8b4: ldrb w8, [sp, #0x10] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(16))));
  /* 13e8b8: tbz w8, #0, #0x13e738 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13e738;
  /* 13e8bc: b #0x13e910 */
  goto L_13e910;
L_13e8c0:;
  /* 13e8c0: nop  */
  /* nop: no architectural effect here */
  /* 13e8c4: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13e8c8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13e8cc: tbz w8, #0, #0x13e9c8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13e9c8;
L_13e8d0:;
  /* 13e8d0: mov w8, #0x14 */
  ARC_W_W(c, 8, UINT64_C(20));
  /* 13e8d4: nop  */
  /* nop: no architectural effect here */
  /* 13e8d8: adr x9, #0x156d38 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13e8dc: stp x8, x9, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 13e8e0: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 13e8e4: add x1, sp, #0x60 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(96)));
  /* 13e8e8: bl #0x13d8bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1304812));
  fn1_13d8bc(c);
  /* 13e8ec: b #0x13e904 */
  goto L_13e904;
L_13e8f0:;
  /* 13e8f0: mov w8, #0x16 */
  ARC_W_W(c, 8, UINT64_C(22));
  /* 13e8f4: str w8, [sp, #0x60] */
  arc_st32(((c)->sp + INT64_C(96)), ARC_W_R(c, 8));
  /* 13e8f8: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 13e8fc: add x1, sp, #0x60 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(96)));
  /* 13e900: bl #0x13d9cc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1304836));
  fn1_13d9cc(c);
L_13e904:;
  /* 13e904: mov w19, wzr */
  ARC_W_W(c, 19, ARC_W_R(c, 31));
  /* 13e908: ldrb w8, [sp, #0x10] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(16))));
  /* 13e90c: tbz w8, #0, #0x13e738 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13e738;
L_13e910:;
  /* 13e910: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* 13e914: ldr x0, [sp, #0x20] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(32))));
  /* 13e918: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13e91c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1304864));
  fn1_142608(c);
  /* 13e920: b #0x13e738 */
  goto L_13e738;
L_13e924:;
  /* 13e924: nop  */
  /* nop: no architectural effect here */
  /* 13e928: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13e92c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1304880));
  fn1_1424b8(c);
  /* 13e930: cbz w0, #0x13e630 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13e630;
  /* 13e934: nop  */
  /* nop: no architectural effect here */
  /* 13e938: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13e93c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1304896));
  fn1_1424d0(c);
  /* 13e940: b #0x13e630 */
  goto L_13e630;
L_13e944:;
  /* 13e944: nop  */
  /* nop: no architectural effect here */
  /* 13e948: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13e94c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1304912));
  fn1_1424b8(c);
  /* 13e950: cbz w0, #0x13e640 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13e640;
  /* 13e954: nop  */
  /* nop: no architectural effect here */
  /* 13e958: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13e95c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1304928));
  fn1_1424d0(c);
  /* 13e960: b #0x13e640 */
  goto L_13e640;
L_13e964:;
  /* 13e964: nop  */
  /* nop: no architectural effect here */
  /* 13e968: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13e96c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1304944));
  fn1_1424b8(c);
  /* 13e970: cbz w0, #0x13e688 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13e688;
  /* 13e974: nop  */
  /* nop: no architectural effect here */
  /* 13e978: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13e97c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1304960));
  fn1_1424d0(c);
  /* 13e980: b #0x13e688 */
  goto L_13e688;
L_13e984:;
  /* 13e984: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1304968));
  fn1_d7d54(c);
L_13e988:;
  /* 13e988: nop  */
  /* nop: no architectural effect here */
  /* 13e98c: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13e990: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1304980));
  fn1_1424b8(c);
  /* 13e994: cbz w0, #0x13e718 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13e718;
  /* 13e998: nop  */
  /* nop: no architectural effect here */
  /* 13e99c: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13e9a0: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1304996));
  fn1_1424d0(c);
  /* 13e9a4: b #0x13e718 */
  goto L_13e718;
L_13e9a8:;
  /* 13e9a8: nop  */
  /* nop: no architectural effect here */
  /* 13e9ac: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13e9b0: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1305012));
  fn1_1424b8(c);
  /* 13e9b4: cbz w0, #0x13e800 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13e800;
  /* 13e9b8: nop  */
  /* nop: no architectural effect here */
  /* 13e9bc: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13e9c0: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1305028));
  fn1_1424d0(c);
  /* 13e9c4: b #0x13e800 */
  goto L_13e800;
L_13e9c8:;
  /* 13e9c8: nop  */
  /* nop: no architectural effect here */
  /* 13e9cc: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13e9d0: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1305044));
  fn1_1424b8(c);
  /* 13e9d4: cbz w0, #0x13e8d0 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13e8d0;
  /* 13e9d8: nop  */
  /* nop: no architectural effect here */
  /* 13e9dc: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13e9e0: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1305060));
  fn1_1424d0(c);
  /* 13e9e4: b #0x13e8d0 */
  goto L_13e8d0;
  /* 13e9e8: b #0x13e9fc */
  goto L_13e9fc;
  /* 13e9ec: b #0x13e9fc */
  goto L_13e9fc;
  /* 13e9f0: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1305076));
  fn1_a1454(c);
  /* 13e9f4: b #0x13e9fc */
  goto L_13e9fc;
  /* 13e9f8: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1305084));
  fn1_a1454(c);
L_13e9fc:;
  /* 13e9fc: ldrb w8, [sp, #0x10] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(16))));
  /* 13ea00: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13ea04: tbz w8, #0, #0x13ea18 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13ea18;
  /* 13ea08: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* 13ea0c: ldr x0, [sp, #0x20] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(32))));
  /* 13ea10: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13ea14: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1305112));
  fn1_142608(c);
L_13ea18:;
  /* 13ea18: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13ea1c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1305120));
  fn1_9cc20(c);
}

void fn1_142698(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248536));
  /* 142698: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 14269c: ldr x17, [x16, #0xf68] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3944))));
  /* 1426a0: add x16, x16, #0xf68 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3944)));
  /* 1426a4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1426a8: nop  */
  /* nop: no architectural effect here */
  /* 1426ac: nop  */
  /* nop: no architectural effect here */
}

void fn1_142c98(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250072));
  /* 142c98: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142c9c: ldr x17, [x16, #0x168] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(360))));
  /* 142ca0: add x16, x16, #0x168 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(360)));
  /* 142ca4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142ca8: nop  */
  /* nop: no architectural effect here */
  /* 142cac: nop  */
  /* nop: no architectural effect here */
}

void fn1_143298(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251608));
  /* 143298: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14329c: ldr x17, [x16, #0x368] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(872))));
  /* 1432a0: add x16, x16, #0x368 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(872)));
  /* 1432a4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1432a8: nop  */
  /* nop: no architectural effect here */
  /* 1432ac: nop  */
  /* nop: no architectural effect here */
}

void fn1_143898(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253144));
  /* 143898: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14389c: ldr x17, [x16, #0x568] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1384))));
  /* 1438a0: add x16, x16, #0x568 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1384)));
  /* 1438a4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1438a8: nop  */
  /* nop: no architectural effect here */
  /* 1438ac: nop  */
  /* nop: no architectural effect here */
}

void fn1_143e98(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254680));
  /* 143e98: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143e9c: ldr x17, [x16, #0x768] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1896))));
  /* 143ea0: add x16, x16, #0x768 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1896)));
  /* 143ea4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143ea8: nop  */
  /* nop: no architectural effect here */
  /* 143eac: nop  */
  /* nop: no architectural effect here */
}

void fn1_144498(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256216));
  /* 144498: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14449c: ldr x17, [x16, #0x968] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2408))));
  /* 1444a0: add x16, x16, #0x968 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2408)));
  /* 1444a4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1444a8: nop  */
  /* nop: no architectural effect here */
  /* 1444ac: nop  */
  /* nop: no architectural effect here */
}

void fn1_144a98(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039257752));
  /* 144a98: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144a9c: ldr x17, [x16, #0xb68] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2920))));
  /* 144aa0: add x16, x16, #0xb68 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2920)));
  /* 144aa4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144aa8: nop  */
  /* nop: no architectural effect here */
  /* 144aac: nop  */
  /* nop: no architectural effect here */
}

