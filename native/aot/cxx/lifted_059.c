#include "lifted.h"

void fn1_a0954(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038585684));
  /* a0954: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a0958: str x30, [sp, #-0x40]! */
  { const uint64_t _a = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_a, ARC_X_R(c, 30));
  }
  /* a095c: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* a0960: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a0964: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a0968: add x8, x0, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* a096c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a0970: ldar x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* a0974: cbz x22, #0xa09d8 */
  if ((ARC_X_R(c, 22)) == 0) goto L_a09d8;
  /* a0978: adrp x23, #0x157000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1404928)));
  /* a097c: ldr w0, [x23, #0x604] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 23) + INT64_C(1540))));
  /* a0980: bl #0x143130 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(657796));
  fn1_143130(c);
  /* a0984: cbz x0, #0xa0a34 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a0a34;
L_a0988:;
  /* a0988: ldr x21, [x0, #8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* a098c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a0990: cmp x22, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 21));
  /* a0994: b.ls #0xa0a7c */
  if (ARC_COND(c, 9)) goto L_a0a7c;
  /* a0998: add x8, x22, #0x11 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) + UINT64_C(17)));
  /* a099c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a09a0: and x8, x8, #0xfffffffffffffff0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(18446744073709551600)));
  /* a09a4: sub x24, x8, #2 */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) - UINT64_C(2)));
  /* a09a8: lsl x8, x24, #3 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 24)) << ((UINT64_C(3)) & 63)));
  /* a09ac: add x1, x8, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* a09b0: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(657844));
  fn1_142878(c);
  /* a09b4: cbz x0, #0xa0b3c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a0b3c;
  /* a09b8: sub x8, x24, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) - ARC_X_R(c, 21)));
  /* a09bc: add x9, x0, x21, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 21)) << 3)));
  /* a09c0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a09c4: lsl x2, x8, #3 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(3)) & 63)));
  /* a09c8: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* a09cc: add x0, x9, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* a09d0: bl #0x144a20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(657876));
  fn1_144a20(c);
  /* a09d4: b #0xa0a6c */
  goto L_a0a6c;
L_a09d8:;
  /* a09d8: adrp x20, #0x157000 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(1404928)));
  /* a09dc: add x20, x20, #0x608 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(1544)));
  /* a09e0: nop  */
  /* nop: no architectural effect here */
  /* a09e4: adr x1, #0xa0b7c */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(658300)));
  /* a09e8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a09ec: bl #0x144a98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(657904));
  fn1_144a98(c);
  /* a09f0: add x0, x20, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(16)));
  /* a09f4: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(657912));
  fn1_142518(c);
  /* a09f8: ldr x22, [x19, #0x10] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* a09fc: cbnz x22, #0xa0a18 */
  if ((ARC_X_R(c, 22)) != 0) goto L_a0a18;
  /* a0a00: adrp x8, #0x157000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404928)));
  /* a0a04: ldr x9, [x8, #0x610] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(1552))));
  /* a0a08: add x22, x9, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* a0a0c: add x9, x19, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* a0a10: str x22, [x8, #0x610] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(1552)), ARC_X_R(c, 22));
  /* a0a14: stlr x22, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 22));
L_a0a18:;
  /* a0a18: adrp x0, #0x157000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1404928)));
  /* a0a1c: add x0, x0, #0x618 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1560)));
  /* a0a20: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(657956));
  fn1_142560(c);
  /* a0a24: adrp x23, #0x157000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1404928)));
  /* a0a28: ldr w0, [x23, #0x604] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 23) + INT64_C(1540))));
  /* a0a2c: bl #0x143130 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(657968));
  fn1_143130(c);
  /* a0a30: cbnz x0, #0xa0988 */
  if ((ARC_X_R(c, 0)) != 0) goto L_a0988;
L_a0a34:;
  /* a0a34: add x8, x22, #0x11 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) + UINT64_C(17)));
  /* a0a38: and x8, x8, #0xfffffffffffffff0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(18446744073709551600)));
  /* a0a3c: sub x24, x8, #2 */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) - UINT64_C(2)));
  /* a0a40: lsl x21, x24, #3 */
  ARC_X_W(c, 21, ((uint64_t)(ARC_X_R(c, 24)) << ((UINT64_C(3)) & 63)));
  /* a0a44: add x0, x21, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(16)));
  /* a0a48: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(657996));
  fn1_1428a8(c);
  /* a0a4c: cbz x0, #0xa0b30 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a0b30;
  /* a0a50: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a0a54: add x0, x0, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* a0a58: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* a0a5c: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* a0a60: bl #0x144a20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(658020));
  fn1_144a20(c);
  /* a0a64: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* a0a68: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
L_a0a6c:;
  /* a0a6c: ldr w0, [x23, #0x604] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 23) + INT64_C(1540))));
  /* a0a70: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* a0a74: str x24, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 24));
  /* a0a78: bl #0x142a10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(658044));
  fn1_142a10(c);
L_a0a7c:;
  /* a0a7c: sub x21, x22, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 22) - UINT64_C(1)));
  /* a0a80: add x22, x20, #0x10 */
  ARC_X_W(c, 22, (ARC_X_R(c, 20) + UINT64_C(16)));
  /* a0a84: ldr x0, [x22, x21, lsl #3] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 22) + ((uint64_t)(ARC_X_R(c, 21)) << 3))));
  /* a0a88: cbz x0, #0xa0aa4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a0aa4;
  /* a0a8c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a0a90: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a0a94: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* a0a98: ldr x30, [sp], #0x40 */
  { const uint64_t _a = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 30, arc_ld64(_a));
  }
  /* a0a9c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a0aa0: ret  */
  return;
L_a0aa4:;
  /* a0aa4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* a0aa8: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* a0aac: cmp x8, #8 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(8));
  /* a0ab0: csel x23, x8, x9, hi */
  ARC_X_W(c, 23, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* a0ab4: sub x8, x23, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) - UINT64_C(1)));
  /* a0ab8: tst x23, x8 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 23) & ARC_X_R(c, 8)));
  /* a0abc: b.ne #0xa0b34 */
  if (ARC_COND(c, 1)) goto L_a0b34;
  /* a0ac0: ldr x20, [x19] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 19)));
  /* a0ac4: add x24, x23, #7 */
  ARC_X_W(c, 24, (ARC_X_R(c, 23) + UINT64_C(7)));
  /* a0ac8: add x0, x24, x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + ARC_X_R(c, 20)));
  /* a0acc: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(658128));
  fn1_1428a8(c);
  /* a0ad0: cbz x0, #0xa0b38 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a0b38;
  /* a0ad4: add x8, x0, x24 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 24)));
  /* a0ad8: neg x9, x23 */
  ARC_X_W(c, 9, ((uint64_t)0 - (uint64_t)(ARC_X_R(c, 23))));
  /* a0adc: and x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & ARC_X_R(c, 9)));
  /* a0ae0: stur x0, [x8, #-8] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(-8)), ARC_X_R(c, 0));
  /* a0ae4: ldr x1, [x19, #0x18] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* a0ae8: cbz x1, #0xa0b00 */
  if ((ARC_X_R(c, 1)) == 0) goto L_a0b00;
  /* a0aec: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* a0af0: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* a0af4: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* a0af8: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(658172));
  fn1_1449d8(c);
  /* a0afc: b #0xa0b10 */
  goto L_a0b10;
L_a0b00:;
  /* a0b00: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* a0b04: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* a0b08: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* a0b0c: bl #0x144a20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(658192));
  fn1_144a20(c);
L_a0b10:;
  /* a0b10: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a0b14: str x19, [x22, x21, lsl #3] */
  arc_st64((ARC_X_R(c, 22) + ((uint64_t)(ARC_X_R(c, 21)) << 3)), ARC_X_R(c, 19));
  /* a0b18: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a0b1c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a0b20: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* a0b24: ldr x30, [sp], #0x40 */
  { const uint64_t _a = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 30, arc_ld64(_a));
  }
  /* a0b28: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a0b2c: ret  */
  return;
L_a0b30:;
  /* a0b30: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(658228));
  fn1_1427b8(c);
L_a0b34:;
  /* a0b34: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(658232));
  fn1_1427b8(c);
L_a0b38:;
  /* a0b38: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(658236));
  fn1_1427b8(c);
L_a0b3c:;
  /* a0b3c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(658240));
  fn1_1427b8(c);
}

void fn1_a22e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038592224));
  /* a22e0: bti c */
  /* bti: no architectural effect here */
  /* a22e4: ret  */
  return;
}

void fn1_a7d38(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038615352));
  /* a7d38: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a7d3c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a7d40: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* a7d44: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a7d48: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a7d4c: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* a7d50: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* a7d54: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* a7d58: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* a7d5c: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a7d60: b.hi #0xa7d84 */
  if (ARC_COND(c, 8)) goto L_a7d84;
  /* a7d64: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a7d68: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a7d6c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(687472));
  fn1_1428a8(c);
  /* a7d70: cbz x0, #0xa7de4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a7de4;
  /* a7d74: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a7d78: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a7d7c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a7d80: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_a7d84:;
  /* a7d84: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* a7d88: add x0, x21, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* a7d8c: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a7d90: add x8, x8, #0xb10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2832)));
  /* a7d94: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* a7d98: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a7d9c: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a7da0: ldurh w9, [x0, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* a7da4: mov w8, #0x15 */
  ARC_W_W(c, 8, UINT64_C(21));
  /* a7da8: mov w11, #0xd */
  ARC_W_W(c, 11, UINT64_C(13));
  /* a7dac: strb w8, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 8));
  /* a7db0: adrp x8, #0x51000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(331776)));
  /* a7db4: add x8, x8, #0xfd */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(253)));
  /* a7db8: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* a7dbc: str x8, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 8));
  /* a7dc0: orr w8, w9, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* a7dc4: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* a7dc8: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* a7dcc: stp x11, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* a7dd0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a7dd4: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* a7dd8: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a7ddc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a7de0: ret  */
  return;
L_a7de4:;
  /* a7de4: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(687592));
  fn1_142488(c);
}

void fn1_adbc8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038639560));
  /* adbc8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* adbcc: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* adbd0: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* adbd4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* adbd8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* adbdc: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* adbe0: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* adbe4: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* adbe8: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* adbec: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* adbf0: b.hi #0xadc14 */
  if (ARC_COND(c, 8)) goto L_adc14;
  /* adbf4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* adbf8: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* adbfc: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(711680));
  fn1_1428a8(c);
  /* adc00: cbz x0, #0xadc64 */
  if ((ARC_X_R(c, 0)) == 0) goto L_adc64;
  /* adc04: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* adc08: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* adc0c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* adc10: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_adc14:;
  /* adc14: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* adc18: add x0, x21, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* adc1c: adrp x8, #0x14b000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1355776)));
  /* adc20: add x8, x8, #0x428 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1064)));
  /* adc24: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* adc28: mov w9, #0x3e */
  ARC_W_W(c, 9, UINT64_C(62));
  /* adc2c: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* adc30: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* adc34: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* adc38: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* adc3c: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* adc40: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* adc44: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* adc48: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* adc4c: str x9, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 9));
  /* adc50: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* adc54: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* adc58: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* adc5c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* adc60: ret  */
  return;
L_adc64:;
  /* adc64: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(711784));
  fn1_142488(c);
}

void fn1_b3454(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038662228));
  /* b3454: bti c */
  /* bti: no architectural effect here */
  /* b3458: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* b345c: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b6ed4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038677204));
  /* b6ed4: bti c */
  /* bti: no architectural effect here */
  /* b6ed8: ldr x0, [x0, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* b6edc: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* b6ee0: ldr x16, [x8, #0x38] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* b6ee4: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_b9998(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038688152));
  /* b9998: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b999c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b99a0: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b99a4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b99a8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b99ac: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* b99b0: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b99b4: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* b99b8: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* b99bc: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b99c0: b.hi #0xb99e4 */
  if (ARC_COND(c, 8)) goto L_b99e4;
  /* b99c4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b99c8: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b99cc: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(760272));
  fn1_1428a8(c);
  /* b99d0: cbz x0, #0xb9a40 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b9a40;
  /* b99d4: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b99d8: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b99dc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b99e0: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_b99e4:;
  /* b99e4: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* b99e8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b99ec: add x20, x21, x8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* b99f0: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* b99f4: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(760312));
  fn1_142860(c);
  /* b99f8: adrp x9, #0x149000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1347584)));
  /* b99fc: add x9, x9, #0xc10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3088)));
  /* b9a00: mov w11, #0x540 */
  ARC_W_W(c, 11, UINT64_C(1344));
  /* b9a04: str x9, [x20, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* b9a08: ldurh w9, [x20, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b9a0c: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* b9a10: mov w10, #8 */
  ARC_W_W(c, 10, UINT64_C(8));
  /* b9a14: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* b9a18: strb w10, [x20, #8] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(8)), ARC_W_R(c, 10));
  /* b9a1c: orr w9, w9, w11 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 11)));
  /* b9a20: stp x19, x8, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* b9a24: sturh w9, [x20, #9] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(9)), ARC_W_R(c, 9));
  /* b9a28: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b9a2c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b9a30: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b9a34: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b9a38: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b9a3c: ret  */
  return;
L_b9a40:;
  /* b9a40: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(760388));
  fn1_142488(c);
}

void fn1_bce40(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038701632));
  /* bce40: bti c */
  /* bti: no architectural effect here */
  /* bce44: mov w1, #0x28 */
  ARC_W_W(c, 1, UINT64_C(40));
  /* bce48: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_c330c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038727436));
  /* c330c: bti c */
  /* bti: no architectural effect here */
  /* c3310: sub x9, x1, x0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* c3314: mov w8, #0x7e */
  ARC_W_W(c, 8, UINT64_C(126));
  /* c3318: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* c331c: clz x9, x9 */
  ARC_X_W(c, 9, arc_clz64(ARC_X_R(c, 9)));
  /* c3320: sub x2, x8, x9, lsl #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) - ((uint64_t)(ARC_X_R(c, 9)) << 1)));
  /* c3324: b #0xc3328 */
  fn1_c3328(c); return;
}

void fn1_d69b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038806968));
  /* d69b8: bti c */
  /* bti: no architectural effect here */
  /* d69bc: sub w8, w0, #0x31 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) - UINT64_C(49)));
  /* d69c0: and w9, w8, #0xff */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) & UINT64_C(255)));
  /* d69c4: cmp w9, #0x49 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(73));
  /* d69c8: b.hi #0xd69e0 */
  if (ARC_COND(c, 8)) goto L_d69e0;
  /* d69cc: and x8, x8, #0xff */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(255)));
  /* d69d0: nop  */
  /* nop: no architectural effect here */
  /* d69d4: adr x9, #0x58538 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(361784)));
  /* d69d8: ldr w0, [x9, x8, lsl #2] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 2))));
  /* d69dc: ret  */
  return;
L_d69e0:;
  /* d69e0: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* d69e4: ret  */
  return;
}

void fn1_da588(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038822280));
  /* da588: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* da58c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* da590: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* da594: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* da598: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* da59c: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* da5a0: cmp x2, #0x16 */
  (void)arc_sub64(c, ARC_X_R(c, 2), UINT64_C(22));
  /* da5a4: b.hi #0xda5b4 */
  if (ARC_COND(c, 8)) goto L_da5b4;
  /* da5a8: lsl w8, w19, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 19)) << ((UINT64_C(1)) & 31)));
  /* da5ac: strb w8, [x0], #1 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* da5b0: b #0xda5ec */
  goto L_da5ec;
L_da5b4:;
  /* da5b4: cmn x19, #8 */
  (void)arc_add64(c, ARC_X_R(c, 19), UINT64_C(8), 0);
  /* da5b8: b.hs #0xda604 */
  if (ARC_COND(c, 2)) goto L_da604;
  /* da5bc: orr x8, x19, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) | UINT64_C(7)));
  /* da5c0: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* da5c4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* da5c8: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* da5cc: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* da5d0: csinc x20, x9, x8, eq */
  ARC_X_W(c, 20, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* da5d4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* da5d8: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(894428));
  fn1_1428f0(c);
  /* da5dc: orr x8, x20, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) | UINT64_C(1)));
  /* da5e0: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* da5e4: stp x19, x0, [x22, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 22) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* da5e8: str x8, [x22] */
  arc_st64(ARC_X_R(c, 22), ARC_X_R(c, 8));
L_da5ec:;
  /* da5ec: add x2, x19, #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* da5f0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* da5f4: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* da5f8: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* da5fc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* da600: b #0x1449f0 */
  fn1_1449f0(c); return;
L_da604:;
  /* da604: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(894472));
  fn1_d7d54(c);
}

void fn1_dc2e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038829796));
  /* dc2e4: bti c */
  /* bti: no architectural effect here */
  /* dc2e8: cmp x1, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 0));
  /* dc2ec: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* dc2f0: ret  */
  return;
}

void fn1_e136c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038850412));
  /* e136c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e1370: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e1374: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e1378: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e137c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e1380: ldrb w9, [x1] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 1)));
  /* e1384: ldr x10, [x1, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* e1388: lsr x11, x9, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* e138c: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e1390: csel x10, x11, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* e1394: subs x11, x10, x2 */
  ARC_X_W(c, 11, arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 2)));
  /* e1398: b.lo #0xe146c */
  if (ARC_COND(c, 3)) goto L_e146c;
  /* e139c: ldp x10, x14, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 14, arc_ld64(_pa + 8));
  }
  /* e13a0: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e13a4: ldr x12, [x1, #0x10] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* e13a8: ldrb w13, [x0] */
  ARC_W_W(c, 13, arc_ld8(ARC_X_R(c, 0)));
  /* e13ac: mov x8, x2 */
  ARC_X_W(c, 8, ARC_X_R(c, 2));
  /* e13b0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e13b4: csinc x9, x12, x1, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 12)) : ((ARC_X_R(c, 1)) + 1)));
  /* e13b8: cmp x11, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 3));
  /* e13bc: and x12, x10, #0xfffffffffffffffe */
  ARC_X_W(c, 12, (ARC_X_R(c, 10) & UINT64_C(18446744073709551614)));
  /* e13c0: csel x6, x11, x3, lo */
  ARC_X_W(c, 6, (ARC_COND(c, 3) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 3)));
  /* e13c4: sub x11, x12, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 12) - UINT64_C(1)));
  /* e13c8: tst w13, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 13) & UINT64_C(1)));
  /* e13cc: mov w12, #0x16 */
  ARC_W_W(c, 12, UINT64_C(22));
  /* e13d0: ubfx x13, x10, #1, #7 */
  ARC_X_W(c, 13, (((uint64_t)(ARC_X_R(c, 10)) >> 1) & UINT64_C(127)));
  /* e13d4: csel x1, x12, x11, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* e13d8: tst x10, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 10) & UINT64_C(1)));
  /* e13dc: csel x20, x13, x14, eq */
  ARC_X_W(c, 20, (ARC_COND(c, 0) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 14)));
  /* e13e0: sub x11, x1, x20 */
  ARC_X_W(c, 11, (ARC_X_R(c, 1) - ARC_X_R(c, 20)));
  /* e13e4: cmp x11, x6 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 6));
  /* e13e8: b.hs #0xe1410 */
  if (ARC_COND(c, 2)) goto L_e1410;
  /* e13ec: sub x10, x6, x1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 6) - ARC_X_R(c, 1)));
  /* e13f0: add x7, x9, x8 */
  ARC_X_W(c, 7, (ARC_X_R(c, 9) + ARC_X_R(c, 8)));
  /* e13f4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e13f8: add x2, x10, x20 */
  ARC_X_W(c, 2, (ARC_X_R(c, 10) + ARC_X_R(c, 20)));
  /* e13fc: mov x3, x20 */
  ARC_X_W(c, 3, ARC_X_R(c, 20));
  /* e1400: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* e1404: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* e1408: bl #0x142b90 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(922636));
  fn1_142b90(c);
  /* e140c: b #0xe1454 */
  goto L_e1454;
L_e1410:;
  /* e1410: cbz x6, #0xe1454 */
  if ((ARC_X_R(c, 6)) == 0) goto L_e1454;
  /* e1414: ldr x11, [x19, #0x10] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* e1418: tst x10, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 10) & UINT64_C(1)));
  /* e141c: add x1, x9, x8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) + ARC_X_R(c, 8)));
  /* e1420: mov x2, x6 */
  ARC_X_W(c, 2, ARC_X_R(c, 6));
  /* e1424: mov x22, x6 */
  ARC_X_W(c, 22, ARC_X_R(c, 6));
  /* e1428: csinc x21, x11, x19, ne */
  ARC_X_W(c, 21, (ARC_COND(c, 1) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 19)) + 1)));
  /* e142c: add x0, x21, x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ARC_X_R(c, 20)));
  /* e1430: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(922676));
  fn1_1449f0(c);
  /* e1434: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* e1438: add x8, x20, x22 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + ARC_X_R(c, 22)));
  /* e143c: tbnz w9, #0, #0xe144c */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_e144c;
  /* e1440: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* e1444: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* e1448: b #0xe1450 */
  goto L_e1450;
L_e144c:;
  /* e144c: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_e1450:;
  /* e1450: strb wzr, [x21, x8] */
  arc_st8((ARC_X_R(c, 21) + ARC_X_R(c, 8)), ARC_W_R(c, 31));
L_e1454:;
  /* e1454: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e1458: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e145c: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e1460: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e1464: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e1468: ret  */
  return;
L_e146c:;
  /* e146c: bl #0xda020 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(922736));
  fn1_da020(c);
}

void fn1_e3c30(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038860848));
  /* e3c30: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e3c34: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e3c38: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e3c3c: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* e3c40: b.eq #0xe3c94 */
  if (ARC_COND(c, 0)) goto L_e3c94;
  /* e3c44: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* e3c48: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* e3c4c: tbnz w9, #0, #0xe3c68 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_e3c68;
  /* e3c50: tbnz w8, #0, #0xe3c88 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_e3c88;
  /* e3c54: ldr x8, [x1, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* e3c58: ldr q0, [x1] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 1)), arc_ld64(ARC_X_R(c, 1) + 8));
  /* e3c5c: str x8, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 8));
  /* e3c60: str q0, [x0] */
  arc_st64(ARC_X_R(c, 0), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 0) + 8, (c)->q[0].u64[1]);
  /* e3c64: b #0xe3c94 */
  goto L_e3c94;
L_e3c68:;
  /* e3c68: ldp x10, x9, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* e3c6c: lsr x11, x8, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e3c70: add x12, x1, #4 */
  ARC_X_W(c, 12, (ARC_X_R(c, 1) + UINT64_C(4)));
  /* e3c74: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e3c78: csel x1, x12, x9, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 9)));
  /* e3c7c: csel x2, x11, x10, eq */
  ARC_X_W(c, 2, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* e3c80: bl #0xe3d60 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(932996));
  fn1_e3d60(c);
  /* e3c84: b #0xe3c94 */
  goto L_e3c94;
L_e3c88:;
  /* e3c88: ldp x2, x8, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* e3c8c: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* e3c90: bl #0xe3ca0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(933012));
  fn1_e3ca0(c);
L_e3c94:;
  /* e3c94: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e3c98: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e3c9c: ret  */
  return;
}

void fn1_e84a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038879400));
  /* e84a8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e84ac: sub sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(144)));
  /* e84b0: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e84b4: stp x26, x25, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* e84b8: stp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e84bc: stp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e84c0: stp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e84c4: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* e84c8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e84cc: mov x0, x3 */
  ARC_X_W(c, 0, ARC_X_R(c, 3));
  /* e84d0: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* e84d4: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* e84d8: mov w21, w1 */
  ARC_W_W(c, 21, ARC_W_R(c, 1));
  /* e84dc: str w1, [sp, #0x18] */
  arc_st32(((c)->sp + INT64_C(24)), ARC_W_R(c, 1));
  /* e84e0: str x2, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 2));
  /* e84e4: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(951528));
  fn1_142860(c);
  /* e84e8: cmn x0, #8 */
  (void)arc_add64(c, ARC_X_R(c, 0), UINT64_C(8), 0);
  /* e84ec: b.hs #0xe861c */
  if (ARC_COND(c, 2)) goto L_e861c;
  /* e84f0: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* e84f4: cmp x0, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(23));
  /* e84f8: b.hs #0xe8514 */
  if (ARC_COND(c, 2)) goto L_e8514;
  /* e84fc: lsl w8, w23, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 23)) << ((UINT64_C(1)) & 31)));
  /* e8500: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* e8504: orr x24, x9, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* e8508: strb w8, [sp] */
  arc_st8((c)->sp, ARC_W_R(c, 8));
  /* e850c: cbnz x23, #0xe853c */
  if ((ARC_X_R(c, 23)) != 0) goto L_e853c;
  /* e8510: b #0xe854c */
  goto L_e854c;
L_e8514:;
  /* e8514: orr x8, x23, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) | UINT64_C(7)));
  /* e8518: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* e851c: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* e8520: csinc x25, x9, x8, eq */
  ARC_X_W(c, 25, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* e8524: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* e8528: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(951596));
  fn1_1428f0(c);
  /* e852c: orr x8, x25, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 25) | UINT64_C(1)));
  /* e8530: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* e8534: stp x23, x0, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* e8538: str x8, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 8));
L_e853c:;
  /* e853c: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* e8540: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* e8544: mov x2, x23 */
  ARC_X_W(c, 2, ARC_X_R(c, 23));
  /* e8548: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(951628));
  fn1_1449d8(c);
L_e854c:;
  /* e854c: strb wzr, [x24, x23] */
  arc_st8((ARC_X_R(c, 24) + ARC_X_R(c, 23)), ARC_W_R(c, 31));
  /* e8550: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e8554: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e8558: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* e855c: sub x23, x29, #0x18 */
  ARC_X_W(c, 23, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e8560: bl #0xe7f5c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(951652));
  fn1_e7f5c(c);
  /* e8564: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* e8568: ldr x8, [x8, #0x910] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2320))));
  /* e856c: ldurb w26, [x29, #-0x18] */
  ARC_W_W(c, 26, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* e8570: ldur x22, [x29, #-8] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* e8574: tst w26, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 26) & UINT64_C(1)));
  /* e8578: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* e857c: csinc x23, x22, x23, ne */
  ARC_X_W(c, 23, (ARC_COND(c, 1) ? (ARC_X_R(c, 22)) : ((ARC_X_R(c, 23)) + 1)));
  /* e8580: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* e8584: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* e8588: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(951692));
  fn1_142860(c);
  /* e858c: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* e8590: add x0, x0, #0x19 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(25)));
  /* e8594: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(951704));
  fn1_1428f0(c);
  /* e8598: add x25, x0, #0x18 */
  ARC_X_W(c, 25, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* e859c: stp x24, x24, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 24));
  }
  /* e85a0: add x2, x24, #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 24) + UINT64_C(1)));
  /* e85a4: str wzr, [x0, #0x10] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(16)), ARC_W_R(c, 31));
  /* e85a8: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* e85ac: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* e85b0: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(951732));
  fn1_1449d8(c);
  /* e85b4: str x25, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 25));
  /* e85b8: tbz w26, #0, #0xe85cc */
  if (((ARC_W_R(c, 26)) >> 0 & 1) == 0) goto L_e85cc;
  /* e85bc: ldur x8, [x29, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-24))));
  /* e85c0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* e85c4: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* e85c8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(951756));
  fn1_142608(c);
L_e85cc:;
  /* e85cc: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* e85d0: tbz w8, #0, #0xe85e4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_e85e4;
  /* e85d4: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* e85d8: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* e85dc: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* e85e0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(951780));
  fn1_142608(c);
L_e85e4:;
  /* e85e4: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* e85e8: ldr x8, [x8, #0xa50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2640))));
  /* e85ec: str w21, [x20, #0x10] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(16)), ARC_W_R(c, 21));
  /* e85f0: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* e85f4: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* e85f8: str x19, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 19));
  /* e85fc: ldp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e8600: ldp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e8604: ldp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e8608: ldp x26, x25, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* e860c: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e8610: add sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(144)));
  /* e8614: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e8618: ret  */
  return;
L_e861c:;
  /* e861c: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(951840));
  fn1_d7d54(c);
  /* e8620: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e8624: tbnz w26, #0, #0xe8638 */
  if (((ARC_W_R(c, 26)) >> 0 & 1) != 0) goto L_e8638;
  /* e8628: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* e862c: tbnz w8, #0, #0xe8660 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_e8660;
L_e8630:;
  /* e8630: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e8634: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(951864));
  fn1_9cc20(c);
L_e8638:;
  /* e8638: ldur x8, [x29, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-24))));
  /* e863c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* e8640: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* e8644: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(951880));
  fn1_142608(c);
  /* e8648: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* e864c: tbz w8, #0, #0xe8630 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_e8630;
  /* e8650: b #0xe8660 */
  goto L_e8660;
  /* e8654: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e8658: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* e865c: tbz w8, #0, #0xe8630 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_e8630;
L_e8660:;
  /* e8660: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* e8664: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* e8668: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* e866c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(951920));
  fn1_142608(c);
  /* e8670: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e8674: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(951928));
  fn1_9cc20(c);
}

void fn1_eab6c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038889324));
  /* eab6c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eab70: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eab74: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* eab78: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eab7c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* eab80: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* eab84: ldr x8, [x8, #0xa70] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2672))));
  /* eab88: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* eab8c: str x8, [x0], #0x40 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(64));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* eab90: bl #0x1430d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961428));
  fn1_1430d0(c);
  /* eab94: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* eab98: bl #0x143220 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961436));
  fn1_143220(c);
  /* eab9c: ldr x20, [x19, #0x10] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* eaba0: cbz x20, #0xeabf8 */
  if ((ARC_X_R(c, 20)) == 0) goto L_eabf8;
  /* eaba4: sub x1, x20, #0x78 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) - UINT64_C(120)));
  /* eaba8: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* eabac: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961456));
  fn1_bd950(c);
  /* eabb0: cmp x0, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(1));
  /* eabb4: b.ne #0xeabf8 */
  if (ARC_COND(c, 1)) goto L_eabf8;
  /* eabb8: ldur x8, [x20, #-0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-104))));
  /* eabbc: cbz x8, #0xeabc8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_eabc8;
  /* eabc0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* eabc4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961480));
  arc_dispatch(c, ARC_X_R(c, 8));
L_eabc8:;
  /* eabc8: sub x0, x20, #0x80 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) - UINT64_C(128)));
  /* eabcc: nop  */
  /* nop: no architectural effect here */
  /* eabd0: adr x8, #0x1576e0 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1406688)));
  /* eabd4: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* eabd8: b.lo #0xeabf4 */
  if (ARC_COND(c, 3)) goto L_eabf4;
  /* eabdc: adrp x8, #0x157000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404928)));
  /* eabe0: add x8, x8, #0x8e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2272)));
  /* eabe4: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* eabe8: b.hs #0xeabf4 */
  if (ARC_COND(c, 2)) goto L_eabf4;
  /* eabec: bl #0xa2664 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961520));
  fn1_a2664(c);
  /* eabf0: b #0xeabf8 */
  goto L_eabf8;
L_eabf4:;
  /* eabf4: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961528));
  fn1_142800(c);
L_eabf8:;
  /* eabf8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eabfc: mov w1, #0x78 */
  ARC_W_W(c, 1, UINT64_C(120));
  /* eac00: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* eac04: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eac08: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eac0c: b #0x142608 */
  fn1_142608(c); return;
  /* eac10: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961556));
  fn1_a1454(c);
  /* eac14: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961560));
  fn1_a1454(c);
  /* eac18: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961564));
  fn1_a1454(c);
  /* eac1c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961568));
  fn1_a1454(c);
}

void fn1_ec270(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038895216));
  /* ec270: bti c */
  /* bti: no architectural effect here */
  /* ec274: ldr x9, [x0, #0x30] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(48))));
  /* ec278: nop  */
  /* nop: no architectural effect here */
  /* ec27c: adr x10, #0x15dc40 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(1432640)));
  /* ec280: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* ec284: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ec288: b.eq #0xec2ac */
  if (ARC_COND(c, 0)) goto L_ec2ac;
  /* ec28c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ec290: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ec294: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ec298: add x1, x9, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) + UINT64_C(8)));
  /* ec29c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ec2a0: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(967332));
  fn1_db2e0(c);
  /* ec2a4: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ec2a8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
L_ec2ac:;
  /* ec2ac: ret  */
  return;
}

void fn1_edb2c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038901548));
  /* edb2c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* edb30: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* edb34: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* edb38: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* edb3c: ldp x11, x8, [x1] */
  { const uint64_t _pa = ARC_X_R(c, 1);
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* edb40: ldp x10, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* edb44: str x8, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 8));
  /* edb48: str x9, [x1, #8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(8)), ARC_X_R(c, 9));
  /* edb4c: ldur x8, [x10, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 10) + INT64_C(-24))));
  /* edb50: ldur x9, [x11, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 11) + INT64_C(-24))));
  /* edb54: add x19, x0, x8 */
  ARC_X_W(c, 19, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* edb58: add x20, x1, x9 */
  ARC_X_W(c, 20, (ARC_X_R(c, 1) + ARC_X_R(c, 9)));
  /* edb5c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* edb60: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* edb64: bl #0x143400 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(973672));
  fn1_143400(c);
  /* edb68: ldr x8, [x20, #0x88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(136))));
  /* edb6c: ldr x9, [x19, #0x88] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(136))));
  /* edb70: ldr w10, [x20, #0x90] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 20) + INT64_C(144))));
  /* edb74: str x8, [x19, #0x88] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(136)), ARC_X_R(c, 8));
  /* edb78: ldr w8, [x19, #0x90] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(144))));
  /* edb7c: str x9, [x20, #0x88] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(136)), ARC_X_R(c, 9));
  /* edb80: str w10, [x19, #0x90] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(144)), ARC_W_R(c, 10));
  /* edb84: str w8, [x20, #0x90] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(144)), ARC_W_R(c, 8));
  /* edb88: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* edb8c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* edb90: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* edb94: ret  */
  return;
}

void fn1_f2e04(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038922756));
  /* f2e04: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f2e08: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* f2e0c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f2e10: stp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* f2e14: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* f2e18: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f2e1c: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f2e20: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* f2e24: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* f2e28: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f2e2c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f2e30: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f2e34: bl #0x143610 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(994872));
  fn1_143610(c);
  /* f2e38: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* f2e3c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f2e40: b.ne #0xf2f80 */
  if (ARC_COND(c, 1)) goto L_f2f80;
  /* f2e44: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f2e48: nop  */
  /* nop: no architectural effect here */
  /* f2e4c: adr x26, #0x15dc40 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f2e50: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f2e54: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f2e58: ldr x22, [x8, #0x30] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f2e5c: cmp x22, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 26));
  /* f2e60: stur x22, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 22));
  /* f2e64: b.eq #0xf2e74 */
  if (ARC_COND(c, 0)) goto L_f2e74;
  /* f2e68: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f2e6c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f2e70: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(994932));
  fn1_db2e0(c);
L_f2e74:;
  /* f2e74: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f2e78: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* f2e7c: ldr x1, [x1, #0xb50] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2896))));
  /* f2e80: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(994948));
  fn1_143748(c);
  /* f2e84: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* f2e88: cmp x22, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 26));
  /* f2e8c: b.eq #0xf2eb0 */
  if (ARC_COND(c, 0)) goto L_f2eb0;
  /* f2e90: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f2e94: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f2e98: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(994972));
  fn1_bd950(c);
  /* f2e9c: cbnz x0, #0xf2eb0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f2eb0;
  /* f2ea0: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f2ea4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* f2ea8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f2eac: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(994992));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f2eb0:;
  /* f2eb0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f2eb4: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f2eb8: add x22, x19, x8 */
  ARC_X_W(c, 22, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f2ebc: ldr w3, [x22, #0x90] */
  ARC_W_W(c, 3, arc_ld32((ARC_X_R(c, 22) + INT64_C(144))));
  /* f2ec0: ldr x23, [x22, #0x28] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 22) + INT64_C(40))));
  /* f2ec4: cmn w3, #1 */
  (void)arc_add32(c, ARC_W_R(c, 3), UINT64_C(1), 0);
  /* f2ec8: b.ne #0xf2f3c */
  if (ARC_COND(c, 1)) goto L_f2f3c;
  /* f2ecc: ldr x24, [x22, #0x30] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 22) + INT64_C(48))));
  /* f2ed0: cmp x24, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 26));
  /* f2ed4: stur x24, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 24));
  /* f2ed8: b.eq #0xf2ee8 */
  if (ARC_COND(c, 0)) goto L_f2ee8;
  /* f2edc: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f2ee0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f2ee4: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(995048));
  fn1_db2e0(c);
L_f2ee8:;
  /* f2ee8: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f2eec: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* f2ef0: ldr x1, [x1, #0xb40] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2880))));
  /* f2ef4: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(995064));
  fn1_143748(c);
  /* f2ef8: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f2efc: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* f2f00: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* f2f04: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(995080));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f2f08: mov w25, w0 */
  ARC_W_W(c, 25, ARC_W_R(c, 0));
  /* f2f0c: cmp x24, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 26));
  /* f2f10: b.eq #0xf2f34 */
  if (ARC_COND(c, 0)) goto L_f2f34;
  /* f2f14: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f2f18: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f2f1c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(995104));
  fn1_bd950(c);
  /* f2f20: cbnz x0, #0xf2f34 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f2f34;
  /* f2f24: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f2f28: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f2f2c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f2f30: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(995124));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f2f34:;
  /* f2f34: and w3, w25, #0xff */
  ARC_W_W(c, 3, (ARC_W_R(c, 25) & UINT64_C(255)));
  /* f2f38: str w3, [x22, #0x90] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(144)), ARC_W_R(c, 3));
L_f2f3c:;
  /* f2f3c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* f2f40: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* f2f44: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f2f48: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* f2f4c: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* f2f50: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* f2f54: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(995160));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f2f58: cbnz x0, #0xf2f80 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f2f80;
  /* f2f5c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f2f60: mov w10, #5 */
  ARC_W_W(c, 10, UINT64_C(5));
  /* f2f64: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f2f68: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f2f6c: ldp w9, w11, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* f2f70: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* f2f74: tst w11, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & ARC_W_R(c, 9)));
  /* f2f78: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f2f7c: b.ne #0xf2fac */
  if (ARC_COND(c, 1)) goto L_f2fac;
L_f2f80:;
  /* f2f80: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f2f84: bl #0x143628 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(995208));
  fn1_143628(c);
L_f2f88:;
  /* f2f88: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f2f8c: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f2f90: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f2f94: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* f2f98: ldp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* f2f9c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f2fa0: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* f2fa4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f2fa8: ret  */
  return;
L_f2fac:;
  /* f2fac: nop  */
  /* nop: no architectural effect here */
  /* f2fb0: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f2fb4: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(995256));
  fn1_ec720(c);
  /* f2fb8: b #0xf2fe4 */
  goto L_f2fe4;
  /* f2fbc: cmp x24, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 26));
  /* f2fc0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f2fc4: b.eq #0xf3018 */
  if (ARC_COND(c, 0)) goto L_f3018;
  /* f2fc8: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f2fcc: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f2fd0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(995284));
  fn1_bd950(c);
  /* f2fd4: cbnz x0, #0xf3018 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f3018;
  /* f2fd8: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f2fdc: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f2fe0: b #0xf3010 */
  goto L_f3010;
L_f2fe4:;
  /* f2fe4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f2fe8: b #0xf3018 */
  goto L_f3018;
  /* f2fec: cmp x22, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 26));
  /* f2ff0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f2ff4: b.eq #0xf3018 */
  if (ARC_COND(c, 0)) goto L_f3018;
  /* f2ff8: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f2ffc: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f3000: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(995332));
  fn1_bd950(c);
  /* f3004: cbnz x0, #0xf3018 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f3018;
  /* f3008: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f300c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
L_f3010:;
  /* f3010: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f3014: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(995352));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f3018:;
  /* f3018: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f301c: bl #0x143628 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(995360));
  fn1_143628(c);
  /* f3020: b #0xf3028 */
  goto L_f3028;
  /* f3024: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_f3028:;
  /* f3028: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f302c: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(995376));
  fn1_142548(c);
  /* f3030: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f3034: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f3038: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f303c: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* f3040: ldrb w10, [x8, #0x24] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f3044: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f3048: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f304c: tbnz w10, #0, #0xf3058 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_f3058;
  /* f3050: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(995412));
  fn1_142980(c);
  /* f3054: b #0xf2f88 */
  goto L_f2f88;
L_f3058:;
  /* f3058: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(995420));
  fn1_1429b0(c);
  /* f305c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f3060: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(995428));
  fn1_142980(c);
  /* f3064: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f3068: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(995436));
  fn1_9cc20(c);
  /* f306c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(995440));
  fn1_a1454(c);
}

void fn1_f4568(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038928744));
  /* f4568: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f456c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f4570: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f4574: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f4578: ldp x11, x8, [x1] */
  { const uint64_t _pa = ARC_X_R(c, 1);
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* f457c: ldp x10, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f4580: str x8, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 8));
  /* f4584: str x9, [x1, #8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(8)), ARC_X_R(c, 9));
  /* f4588: ldur x8, [x10, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 10) + INT64_C(-24))));
  /* f458c: ldur x9, [x11, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 11) + INT64_C(-24))));
  /* f4590: add x19, x0, x8 */
  ARC_X_W(c, 19, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* f4594: add x20, x1, x9 */
  ARC_X_W(c, 20, (ARC_X_R(c, 1) + ARC_X_R(c, 9)));
  /* f4598: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f459c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* f45a0: bl #0x143400 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1000868));
  fn1_143400(c);
  /* f45a4: ldr x8, [x20, #0x88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(136))));
  /* f45a8: ldr x9, [x19, #0x88] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(136))));
  /* f45ac: ldr w10, [x20, #0x90] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 20) + INT64_C(144))));
  /* f45b0: str x8, [x19, #0x88] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(136)), ARC_X_R(c, 8));
  /* f45b4: ldr w8, [x19, #0x90] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(144))));
  /* f45b8: str x9, [x20, #0x88] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(136)), ARC_X_R(c, 9));
  /* f45bc: str w10, [x19, #0x90] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(144)), ARC_W_R(c, 10));
  /* f45c0: str w8, [x20, #0x90] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(144)), ARC_W_R(c, 8));
  /* f45c4: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f45c8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f45cc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f45d0: ret  */
  return;
}

void fn1_f9874(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038950004));
  /* f9874: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f9878: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* f987c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f9880: str x25, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 25));
  /* f9884: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* f9888: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f988c: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f9890: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f9894: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* f9898: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f989c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f98a0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f98a4: bl #0x143688 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1022120));
  fn1_143688(c);
  /* f98a8: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* f98ac: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f98b0: b.ne #0xf99f8 */
  if (ARC_COND(c, 1)) goto L_f99f8;
  /* f98b4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f98b8: nop  */
  /* nop: no architectural effect here */
  /* f98bc: adr x25, #0x15dc40 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f98c0: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f98c4: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f98c8: ldr x22, [x8, #0x30] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f98cc: cmp x22, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 25));
  /* f98d0: str x22, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 22));
  /* f98d4: b.eq #0xf98e4 */
  if (ARC_COND(c, 0)) goto L_f98e4;
  /* f98d8: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f98dc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f98e0: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1022180));
  fn1_db2e0(c);
L_f98e4:;
  /* f98e4: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f98e8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* f98ec: ldr x1, [x1, #0xb68] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2920))));
  /* f98f0: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1022196));
  fn1_143748(c);
  /* f98f4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* f98f8: cmp x22, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 25));
  /* f98fc: b.eq #0xf9920 */
  if (ARC_COND(c, 0)) goto L_f9920;
  /* f9900: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f9904: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f9908: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1022220));
  fn1_bd950(c);
  /* f990c: cbnz x0, #0xf9920 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f9920;
  /* f9910: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f9914: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* f9918: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f991c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1022240));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f9920:;
  /* f9920: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f9924: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f9928: add x22, x19, x8 */
  ARC_X_W(c, 22, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f992c: ldr w3, [x22, #0x90] */
  ARC_W_W(c, 3, arc_ld32((ARC_X_R(c, 22) + INT64_C(144))));
  /* f9930: ldr x23, [x22, #0x28] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 22) + INT64_C(40))));
  /* f9934: cmn w3, #1 */
  (void)arc_add32(c, ARC_W_R(c, 3), UINT64_C(1), 0);
  /* f9938: b.ne #0xf99b4 */
  if (ARC_COND(c, 1)) goto L_f99b4;
  /* f993c: ldr x24, [x22, #0x30] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 22) + INT64_C(48))));
  /* f9940: cmp x24, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 25));
  /* f9944: str x24, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 24));
  /* f9948: b.eq #0xf9958 */
  if (ARC_COND(c, 0)) goto L_f9958;
  /* f994c: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f9950: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f9954: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1022296));
  fn1_db2e0(c);
L_f9958:;
  /* f9958: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f995c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* f9960: ldr x1, [x1, #0xb58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2904))));
  /* f9964: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1022312));
  fn1_143748(c);
  /* f9968: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f996c: ldr x8, [x8, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* f9970: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* f9974: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1022328));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f9978: mov w3, w0 */
  ARC_W_W(c, 3, ARC_W_R(c, 0));
  /* f997c: cmp x24, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 25));
  /* f9980: b.eq #0xf99b0 */
  if (ARC_COND(c, 0)) goto L_f99b0;
  /* f9984: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f9988: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f998c: mov w25, w3 */
  ARC_W_W(c, 25, ARC_W_R(c, 3));
  /* f9990: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1022356));
  fn1_bd950(c);
  /* f9994: mov w3, w25 */
  ARC_W_W(c, 3, ARC_W_R(c, 25));
  /* f9998: cbnz x0, #0xf99b0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f99b0;
  /* f999c: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f99a0: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f99a4: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f99a8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1022380));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f99ac: mov w3, w25 */
  ARC_W_W(c, 3, ARC_W_R(c, 25));
L_f99b0:;
  /* f99b0: str w3, [x22, #0x90] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(144)), ARC_W_R(c, 3));
L_f99b4:;
  /* f99b4: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* f99b8: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* f99bc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f99c0: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* f99c4: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* f99c8: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* f99cc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1022416));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f99d0: cbnz x0, #0xf99f8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f99f8;
  /* f99d4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f99d8: mov w10, #5 */
  ARC_W_W(c, 10, UINT64_C(5));
  /* f99dc: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f99e0: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f99e4: ldp w9, w11, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* f99e8: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* f99ec: tst w11, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & ARC_W_R(c, 9)));
  /* f99f0: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f99f4: b.ne #0xf9a24 */
  if (ARC_COND(c, 1)) goto L_f9a24;
L_f99f8:;
  /* f99f8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f99fc: bl #0x1436a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1022464));
  fn1_1436a0(c);
L_f9a00:;
  /* f9a00: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f9a04: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f9a08: ldr x25, [sp, #0x20] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(32))));
  /* f9a0c: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f9a10: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* f9a14: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f9a18: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* f9a1c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f9a20: ret  */
  return;
L_f9a24:;
  /* f9a24: nop  */
  /* nop: no architectural effect here */
  /* f9a28: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f9a2c: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1022512));
  fn1_ec720(c);
  /* f9a30: b #0xf9a5c */
  goto L_f9a5c;
  /* f9a34: cmp x24, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 25));
  /* f9a38: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f9a3c: b.eq #0xf9a90 */
  if (ARC_COND(c, 0)) goto L_f9a90;
  /* f9a40: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f9a44: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f9a48: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1022540));
  fn1_bd950(c);
  /* f9a4c: cbnz x0, #0xf9a90 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f9a90;
  /* f9a50: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f9a54: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f9a58: b #0xf9a88 */
  goto L_f9a88;
L_f9a5c:;
  /* f9a5c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f9a60: b #0xf9a90 */
  goto L_f9a90;
  /* f9a64: cmp x22, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 25));
  /* f9a68: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f9a6c: b.eq #0xf9a90 */
  if (ARC_COND(c, 0)) goto L_f9a90;
  /* f9a70: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f9a74: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f9a78: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1022588));
  fn1_bd950(c);
  /* f9a7c: cbnz x0, #0xf9a90 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f9a90;
  /* f9a80: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f9a84: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
L_f9a88:;
  /* f9a88: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f9a8c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1022608));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f9a90:;
  /* f9a90: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f9a94: bl #0x1436a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1022616));
  fn1_1436a0(c);
  /* f9a98: b #0xf9aa0 */
  goto L_f9aa0;
  /* f9a9c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_f9aa0:;
  /* f9aa0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f9aa4: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1022632));
  fn1_142548(c);
  /* f9aa8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f9aac: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f9ab0: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f9ab4: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* f9ab8: ldrb w10, [x8, #0x24] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f9abc: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f9ac0: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f9ac4: tbnz w10, #0, #0xf9ad0 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_f9ad0;
  /* f9ac8: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1022668));
  fn1_142980(c);
  /* f9acc: b #0xf9a00 */
  goto L_f9a00;
L_f9ad0:;
  /* f9ad0: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1022676));
  fn1_1429b0(c);
  /* f9ad4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f9ad8: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1022684));
  fn1_142980(c);
  /* f9adc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f9ae0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1022692));
  fn1_9cc20(c);
  /* f9ae4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1022696));
  fn1_a1454(c);
}

void fn1_fd9d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038966744));
  /* fd9d8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fd9dc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fd9e0: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* fd9e4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fd9e8: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fd9ec: ldr x8, [x8, #0xb28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2856))));
  /* fd9f0: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* fd9f4: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* fd9f8: add x10, x8, #0x18 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* fd9fc: add x8, x8, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* fda00: add x19, x0, x9 */
  ARC_X_W(c, 19, (ARC_X_R(c, 0) + ARC_X_R(c, 9)));
  /* fda04: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fda08: str x8, [x19, #0xb0]! */
  { const uint64_t _a = (ARC_X_R(c, 19) + INT64_C(176));
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(176));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* fda0c: str x10, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 10));
  }
  /* fda10: bl #0x1436d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1038868));
  fn1_1436d0(c);
  /* fda14: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fda18: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* fda1c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fda20: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fda24: b #0x1433b8 */
  fn1_1433b8(c); return;
}

void fn1_1079bc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039007676));
  /* 1079bc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1079c0: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1079c4: stp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 1079c8: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 1079cc: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1079d0: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1079d4: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1079d8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1079dc: sub sp, sp, #0x1a0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(416)));
  /* 1079e0: mov x0, x3 */
  ARC_X_W(c, 0, ARC_X_R(c, 3));
  /* 1079e4: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 1079e8: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1079ec: sub x8, x29, #0x98 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(152)));
  /* 1079f0: sub x1, x29, #0x78 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(120)));
  /* 1079f4: sub x2, x29, #0x7c */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(124)));
  /* 1079f8: sub x3, x29, #0x80 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(128)));
  /* 1079fc: stp x5, x4, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 5));
    arc_st64(_pa + 8, ARC_X_R(c, 4));
  }
  /* 107a00: sub x25, x29, #0xb8 */
  ARC_X_W(c, 25, (ARC_X_R(c, 29) - UINT64_C(184)));
  /* 107a04: bl #0x1438c8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1079816));
  fn1_1438c8(c);
  /* 107a08: stp xzr, xzr, [x25, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 107a0c: str xzr, [x25, #0x18] */
  arc_st64((ARC_X_R(c, 25) + INT64_C(24)), ARC_X_R(c, 31));
  /* 107a10: sub x0, x29, #0xb0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(176)));
  /* 107a14: mov w1, #0x16 */
  ARC_W_W(c, 1, UINT64_C(22));
  /* 107a18: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 107a1c: sub x20, x29, #0xb0 */
  ARC_X_W(c, 20, (ARC_X_R(c, 29) - UINT64_C(176)));
  /* 107a20: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1079844));
  fn1_142d10(c);
  /* 107a24: ldurb w8, [x29, #-0xb0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-176))));
  /* 107a28: ldr x9, [x25, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 25) + INT64_C(24))));
  /* 107a2c: mov w26, wzr */
  ARC_W_W(c, 26, ARC_W_R(c, 31));
  /* 107a30: add x27, sp, #0x48 */
  ARC_X_W(c, 27, ((c)->sp + UINT64_C(72)));
  /* 107a34: mov w10, #1 */
  ARC_W_W(c, 10, UINT64_C(1));
  /* 107a38: orr x28, x20, #1 */
  ARC_X_W(c, 28, (ARC_X_R(c, 20) | UINT64_C(1)));
  /* 107a3c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 107a40: mov w8, #0x45 */
  ARC_W_W(c, 8, UINT64_C(69));
  /* 107a44: add x22, sp, #0x40 */
  ARC_X_W(c, 22, ((c)->sp + UINT64_C(64)));
  /* 107a48: csinc x23, x9, x20, ne */
  ARC_X_W(c, 23, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 20)) + 1)));
  /* 107a4c: add x20, sp, #0x3c */
  ARC_X_W(c, 20, ((c)->sp + UINT64_C(60)));
  /* 107a50: str wzr, [sp, #0x3c] */
  arc_st32(((c)->sp + INT64_C(60)), ARC_W_R(c, 31));
  /* 107a54: str x27, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 27));
  /* 107a58: strb w10, [sp, #0x38] */
  arc_st8(((c)->sp + INT64_C(56)), ARC_W_R(c, 10));
  /* 107a5c: strb w8, [sp, #0x34] */
  arc_st8(((c)->sp + INT64_C(52)), ARC_W_R(c, 8));
  /* 107a60: str x23, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 23));
  /* 107a64: b #0x107a70 */
  goto L_107a70;
L_107a68:;
  /* 107a68: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 107a6c: str x8, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 8));
L_107a70:;
  /* 107a70: cbz x19, #0x107a88 */
  if ((ARC_X_R(c, 19)) == 0) goto L_107a88;
  /* 107a74: ldp x8, x9, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 107a78: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 107a7c: b.eq #0x107a94 */
  if (ARC_COND(c, 0)) goto L_107a94;
  /* 107a80: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 107a84: b #0x107aa4 */
  goto L_107aa4;
L_107a88:;
  /* 107a88: cbz x21, #0x107cd0 */
  if ((ARC_X_R(c, 21)) == 0) goto L_107cd0;
  /* 107a8c: mov w24, #1 */
  ARC_W_W(c, 24, UINT64_C(1));
  /* 107a90: b #0x107ab8 */
  goto L_107ab8;
L_107a94:;
  /* 107a94: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 107a98: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 107a9c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 107aa0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1079972));
  arc_dispatch(c, ARC_X_R(c, 8));
L_107aa4:;
  /* 107aa4: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 107aa8: cset w24, eq */
  ARC_W_W(c, 24, (ARC_COND(c, 0) ? 1 : 0));
  /* 107aac: csel x8, xzr, x19, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 19)));
  /* 107ab0: cbz x21, #0x107af4 */
  if ((ARC_X_R(c, 21)) == 0) goto L_107af4;
  /* 107ab4: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
L_107ab8:;
  /* 107ab8: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 107abc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 107ac0: b.eq #0x107acc */
  if (ARC_COND(c, 0)) goto L_107acc;
  /* 107ac4: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 107ac8: b #0x107adc */
  goto L_107adc;
L_107acc:;
  /* 107acc: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 107ad0: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 107ad4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 107ad8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1080028));
  arc_dispatch(c, ARC_X_R(c, 8));
L_107adc:;
  /* 107adc: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 107ae0: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 107ae4: csel x21, xzr, x21, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 21)));
  /* 107ae8: cmp w24, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 24), ARC_W_R(c, 8));
  /* 107aec: b.ne #0x107afc */
  if (ARC_COND(c, 1)) goto L_107afc;
  /* 107af0: b #0x107cdc */
  goto L_107cdc;
L_107af4:;
  /* 107af4: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 107af8: b.eq #0x107cd8 */
  if (ARC_COND(c, 0)) goto L_107cd8;
L_107afc:;
  /* 107afc: ldurb w8, [x29, #-0xb0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-176))));
  /* 107b00: ldr x9, [x25, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 25) + INT64_C(16))));
  /* 107b04: ldr x11, [x25] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 25)));
  /* 107b08: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 107b0c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 107b10: csel x24, x10, x9, eq */
  ARC_X_W(c, 24, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 107b14: add x9, x23, x24 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) + ARC_X_R(c, 24)));
  /* 107b18: cmp x11, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 9));
  /* 107b1c: b.ne #0x107bd8 */
  if (ARC_COND(c, 1)) goto L_107bd8;
  /* 107b20: cmp x24, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 24), UINT64_C(1));
  /* 107b24: b.lt #0x107b3c */
  if (ARC_COND(c, 11)) goto L_107b3c;
  /* 107b28: sub x0, x29, #0xb0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(176)));
  /* 107b2c: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 107b30: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 107b34: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1080120));
  fn1_142d10(c);
  /* 107b38: b #0x107b60 */
  goto L_107b60;
L_107b3c:;
  /* 107b3c: lsl x9, x24, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 24)) << ((UINT64_C(1)) & 63)));
  /* 107b40: tbnz w8, #0, #0x107b54 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_107b54;
  /* 107b44: lsl w8, w9, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 9)) << ((UINT64_C(1)) & 31)));
  /* 107b48: sturb w8, [x29, #-0xb0] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-176)), ARC_W_R(c, 8));
  /* 107b4c: mov x8, x28 */
  ARC_X_W(c, 8, ARC_X_R(c, 28));
  /* 107b50: b #0x107b5c */
  goto L_107b5c;
L_107b54:;
  /* 107b54: ldr x8, [x25, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(24))));
  /* 107b58: str x9, [x25, #0x10] */
  arc_st64((ARC_X_R(c, 25) + INT64_C(16)), ARC_X_R(c, 9));
L_107b5c:;
  /* 107b5c: strb wzr, [x8, x9] */
  arc_st8((ARC_X_R(c, 8) + ARC_X_R(c, 9)), ARC_W_R(c, 31));
L_107b60:;
  /* 107b60: ldp x9, x10, [x25, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 107b64: ldurb w8, [x29, #-0xb0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-176))));
  /* 107b68: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 107b6c: mov w8, #0x16 */
  ARC_W_W(c, 8, UINT64_C(22));
  /* 107b70: and x11, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 107b74: ubfx x12, x9, #1, #7 */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 9)) >> 1) & UINT64_C(127)));
  /* 107b78: sub x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* 107b7c: csel x8, x8, x11, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 11)));
  /* 107b80: tst x9, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(1)));
  /* 107b84: csel x10, x12, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* 107b88: subs x1, x8, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10)));
  /* 107b8c: b.ls #0x107ba0 */
  if (ARC_COND(c, 9)) goto L_107ba0;
  /* 107b90: sub x0, x29, #0xb0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(176)));
  /* 107b94: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 107b98: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1080220));
  fn1_142d10(c);
  /* 107b9c: b #0x107bc0 */
  goto L_107bc0;
L_107ba0:;
  /* 107ba0: tbnz w9, #0, #0x107bb4 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_107bb4;
  /* 107ba4: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* 107ba8: sturb w9, [x29, #-0xb0] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-176)), ARC_W_R(c, 9));
  /* 107bac: mov x9, x28 */
  ARC_X_W(c, 9, ARC_X_R(c, 28));
  /* 107bb0: b #0x107bbc */
  goto L_107bbc;
L_107bb4:;
  /* 107bb4: ldr x9, [x25, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 25) + INT64_C(24))));
  /* 107bb8: str x8, [x25, #0x10] */
  arc_st64((ARC_X_R(c, 25) + INT64_C(16)), ARC_X_R(c, 8));
L_107bbc:;
  /* 107bbc: strb wzr, [x9, x8] */
  arc_st8((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_W_R(c, 31));
L_107bc0:;
  /* 107bc0: ldurb w8, [x29, #-0xb0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-176))));
  /* 107bc4: ldr x9, [x25, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 25) + INT64_C(24))));
  /* 107bc8: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 107bcc: csel x23, x28, x9, eq */
  ARC_X_W(c, 23, (ARC_COND(c, 0) ? (ARC_X_R(c, 28)) : ARC_X_R(c, 9)));
  /* 107bd0: add x8, x23, x24 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) + ARC_X_R(c, 24)));
  /* 107bd4: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
L_107bd8:;
  /* 107bd8: ldp x8, x9, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 107bdc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 107be0: b.eq #0x107bec */
  if (ARC_COND(c, 0)) goto L_107bec;
  /* 107be4: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 107be8: b #0x107bfc */
  goto L_107bfc;
L_107bec:;
  /* 107bec: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 107bf0: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 107bf4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 107bf8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1080316));
  arc_dispatch(c, ARC_X_R(c, 8));
L_107bfc:;
  /* 107bfc: ldp w6, w5, [x29, #-0x80] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-128));
    ARC_W_W(c, 6, arc_ld32(_pa));
    ARC_W_W(c, 5, arc_ld32(_pa + 4));
  }
  /* 107c00: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* 107c04: sub x8, x29, #0x78 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(120)));
  /* 107c08: add x2, sp, #0x34 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(52)));
  /* 107c0c: sub x4, x29, #0xb8 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(184)));
  /* 107c10: sub x7, x29, #0x98 */
  ARC_X_W(c, 7, (ARC_X_R(c, 29) - UINT64_C(152)));
  /* 107c14: mov x3, x23 */
  ARC_X_W(c, 3, ARC_X_R(c, 23));
  /* 107c18: stp x20, x8, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 107c1c: stp x27, x22, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 27));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* 107c20: bl #0x1438e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1080356));
  fn1_1438e0(c);
  /* 107c24: cbnz w0, #0x107cdc */
  if ((ARC_W_R(c, 0)) != 0) goto L_107cdc;
  /* 107c28: tbz w26, #0, #0x107c34 */
  if (((ARC_W_R(c, 26)) >> 0 & 1) == 0) goto L_107c34;
  /* 107c2c: mov w26, #1 */
  ARC_W_W(c, 26, UINT64_C(1));
  /* 107c30: b #0x107c94 */
  goto L_107c94;
L_107c34:;
  /* 107c34: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 107c38: sub x9, x8, x23 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - ARC_X_R(c, 23)));
  /* 107c3c: cmp x9, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(1));
  /* 107c40: b.lt #0x107c90 */
  if (ARC_COND(c, 11)) goto L_107c90;
  /* 107c44: ldrb w8, [x23] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 23)));
  /* 107c48: cmp w8, #0x2b */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(43));
  /* 107c4c: b.eq #0x107c58 */
  if (ARC_COND(c, 0)) goto L_107c58;
  /* 107c50: cmp w8, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(45));
  /* 107c54: b.ne #0x107cb4 */
  if (ARC_COND(c, 1)) goto L_107cb4;
L_107c58:;
  /* 107c58: cmp x9, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(1));
  /* 107c5c: b.eq #0x107c90 */
  if (ARC_COND(c, 0)) goto L_107c90;
  /* 107c60: cmp w8, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(45));
  /* 107c64: b.eq #0x107c70 */
  if (ARC_COND(c, 0)) goto L_107c70;
  /* 107c68: cmp w8, #0x2b */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(43));
  /* 107c6c: b.ne #0x107c90 */
  if (ARC_COND(c, 1)) goto L_107c90;
L_107c70:;
  /* 107c70: ldrb w8, [x23, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 23) + INT64_C(1))));
  /* 107c74: mov w26, #1 */
  ARC_W_W(c, 26, UINT64_C(1));
  /* 107c78: cmp w8, #0x2e */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(46));
  /* 107c7c: b.eq #0x107c94 */
  if (ARC_COND(c, 0)) goto L_107c94;
  /* 107c80: sub w8, w8, #0x30 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* 107c84: cmp w8, #9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(9));
  /* 107c88: b.ls #0x107c94 */
  if (ARC_COND(c, 9)) goto L_107c94;
  /* 107c8c: b #0x107cdc */
  goto L_107cdc;
L_107c90:;
  /* 107c90: mov w26, wzr */
  ARC_W_W(c, 26, ARC_W_R(c, 31));
L_107c94:;
  /* 107c94: ldp x8, x9, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 107c98: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 107c9c: b.ne #0x107a68 */
  if (ARC_COND(c, 1)) goto L_107a68;
  /* 107ca0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 107ca4: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 107ca8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 107cac: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1080496));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 107cb0: b #0x107a70 */
  goto L_107a70;
L_107cb4:;
  /* 107cb4: cmp w8, #0x2e */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(46));
  /* 107cb8: mov w26, #1 */
  ARC_W_W(c, 26, UINT64_C(1));
  /* 107cbc: b.eq #0x107c94 */
  if (ARC_COND(c, 0)) goto L_107c94;
  /* 107cc0: sub w8, w8, #0x30 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* 107cc4: cmp w8, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(10));
  /* 107cc8: b.lo #0x107c94 */
  if (ARC_COND(c, 3)) goto L_107c94;
  /* 107ccc: b #0x107cdc */
  goto L_107cdc;
L_107cd0:;
  /* 107cd0: mov x21, x19 */
  ARC_X_W(c, 21, ARC_X_R(c, 19));
  /* 107cd4: b #0x107cdc */
  goto L_107cdc;
L_107cd8:;
  /* 107cd8: mov x19, x21 */
  ARC_X_W(c, 19, ARC_X_R(c, 21));
L_107cdc:;
  /* 107cdc: ldurb w8, [x29, #-0x98] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-152))));
  /* 107ce0: ldr x9, [x25, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 25) + INT64_C(40))));
  /* 107ce4: ldr x22, [sp, #0x28] */
  ARC_X_W(c, 22, arc_ld64(((c)->sp + INT64_C(40))));
  /* 107ce8: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 107cec: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 107cf0: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 107cf4: cbz x8, #0x107d24 */
  if ((ARC_X_R(c, 8)) == 0) goto L_107d24;
  /* 107cf8: ldrb w8, [sp, #0x38] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(56))));
  /* 107cfc: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 107d00: b.ne #0x107d24 */
  if (ARC_COND(c, 1)) goto L_107d24;
  /* 107d04: ldr x8, [sp, #0x40] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(64))));
  /* 107d08: add x9, sp, #0x48 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(72)));
  /* 107d0c: sub x9, x8, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* 107d10: cmp x9, #0x9f */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(159));
  /* 107d14: b.gt #0x107d24 */
  if (ARC_COND(c, 12)) goto L_107d24;
  /* 107d18: ldr w9, [sp, #0x3c] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(60))));
  /* 107d1c: str w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 9));
  }
  /* 107d20: str x8, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 8));
L_107d24:;
  /* 107d24: ldr x1, [x25] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 25)));
  /* 107d28: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 107d2c: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 107d30: bl #0x136244 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1080628));
  fn1_136244(c);
  /* 107d34: ldurb w10, [x29, #-0x98] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-152))));
  /* 107d38: ldr x12, [sp, #0x40] */
  ARC_X_W(c, 12, arc_ld64(((c)->sp + INT64_C(64))));
  /* 107d3c: add x11, sp, #0x48 */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(72)));
  /* 107d40: ldr x8, [x25, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(40))));
  /* 107d44: lsr x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* 107d48: ands w13, w10, #1 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 13, _r); }
  /* 107d4c: sub x11, x12, x11 */
  ARC_X_W(c, 11, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* 107d50: csel x8, x9, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 107d54: ldr x9, [sp, #0x20] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(32))));
  /* 107d58: cmp x11, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(5));
  /* 107d5c: str d0, [x9] */
  arc_st64(ARC_X_R(c, 9), (c)->q[0].u64[0]);
  /* 107d60: b.lt #0x107ec0 */
  if (ARC_COND(c, 11)) goto L_107ec0;
  /* 107d64: cbz x8, #0x107ec0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_107ec0;
  /* 107d68: sub x8, x12, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 12) - UINT64_C(4)));
  /* 107d6c: add x9, sp, #0x48 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(72)));
  /* 107d70: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 107d74: cset w11, lo */
  ARC_W_W(c, 11, (ARC_COND(c, 3) ? 1 : 0));
  /* 107d78: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* 107d7c: b.eq #0x107e2c */
  if (ARC_COND(c, 0)) goto L_107e2c;
  /* 107d80: cbz w11, #0x107e2c */
  if ((ARC_W_R(c, 11)) == 0) goto L_107e2c;
  /* 107d84: add x10, sp, #0x48 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(72)));
  /* 107d88: sub x14, x12, #8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) - UINT64_C(8)));
  /* 107d8c: add x11, x10, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 107d90: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 107d94: csel x13, x14, x11, hi */
  ARC_X_W(c, 13, (ARC_COND(c, 8) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* 107d98: sub x13, x13, #4 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(4)));
  /* 107d9c: cmp x13, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 10));
  /* 107da0: cinc x15, x10, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
  /* 107da4: cmp x13, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 10));
  /* 107da8: sub x15, x13, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) - ARC_X_R(c, 15)));
  /* 107dac: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* 107db0: cinc x13, x15, ne */
  ARC_X_W(c, 13, (ARC_COND(c, 1) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* 107db4: cmp x13, #0x13 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(19));
  /* 107db8: b.lo #0x107e00 */
  if (ARC_COND(c, 3)) goto L_107e00;
  /* 107dbc: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 107dc0: csel x14, x14, x11, hi */
  ARC_X_W(c, 14, (ARC_COND(c, 8) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* 107dc4: sub x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(4)));
  /* 107dc8: cmp x14, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 10));
  /* 107dcc: cinc x15, x10, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
  /* 107dd0: cmp x14, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 10));
  /* 107dd4: sub x15, x14, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 14) - ARC_X_R(c, 15)));
  /* 107dd8: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* 107ddc: cinc x14, x15, ne */
  ARC_X_W(c, 14, (ARC_COND(c, 1) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* 107de0: cmp x10, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 12));
  /* 107de4: b.hs #0x107fb0 */
  if (ARC_COND(c, 2)) goto L_107fb0;
  /* 107de8: lsl x14, x14, #2 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(2)) & 63)));
  /* 107dec: sub x15, x12, x14 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ARC_X_R(c, 14)));
  /* 107df0: add x11, x11, x14 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ARC_X_R(c, 14)));
  /* 107df4: sub x14, x15, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) - UINT64_C(4)));
  /* 107df8: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 107dfc: b.hs #0x107fb0 */
  if (ARC_COND(c, 2)) goto L_107fb0;
L_107e00:;
  /* 107e00: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
L_107e04:;
  /* 107e04: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
L_107e08:;
  /* 107e08: ldr w12, [x11] */
  ARC_W_W(c, 12, arc_ld32(ARC_X_R(c, 11)));
  /* 107e0c: ldur w13, [x10, #-4] */
  ARC_W_W(c, 13, arc_ld32((ARC_X_R(c, 10) + INT64_C(-4))));
  /* 107e10: stur w12, [x10, #-4] */
  arc_st32((ARC_X_R(c, 10) + INT64_C(-4)), ARC_W_R(c, 12));
  /* 107e14: str w13, [x11], #0xfffffffffffffffc */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(-4));
    arc_st32(_a, ARC_W_R(c, 13));
  }
  /* 107e18: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 107e1c: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 107e20: b.lo #0x107e08 */
  if (ARC_COND(c, 3)) goto L_107e08;
L_107e24:;
  /* 107e24: ldurb w10, [x29, #-0x98] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-152))));
  /* 107e28: and w13, w10, #1 */
  ARC_W_W(c, 13, (ARC_W_R(c, 10) & UINT64_C(1)));
L_107e2c:;
  /* 107e2c: ldr x11, [x25, #0x30] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 25) + INT64_C(48))));
  /* 107e30: cmp w13, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(0));
  /* 107e34: sub x12, x29, #0x98 */
  ARC_X_W(c, 12, (ARC_X_R(c, 29) - UINT64_C(152)));
  /* 107e38: csinc x11, x11, x12, ne */
  ARC_X_W(c, 11, (ARC_COND(c, 1) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 12)) + 1)));
  /* 107e3c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 107e40: b.hs #0x107e98 */
  if (ARC_COND(c, 2)) goto L_107e98;
  /* 107e44: lsr w9, w10, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 10)) >> ((UINT64_C(1)) & 31)));
  /* 107e48: ldr x10, [x25, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 25) + INT64_C(40))));
  /* 107e4c: cmp w13, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(0));
  /* 107e50: csel x9, x9, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* 107e54: add x10, sp, #0x48 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(72)));
  /* 107e58: add x9, x11, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) + ARC_X_R(c, 9)));
  /* 107e5c: b #0x107e78 */
  goto L_107e78;
L_107e60:;
  /* 107e60: sub x12, x9, x11 */
  ARC_X_W(c, 12, (ARC_X_R(c, 9) - ARC_X_R(c, 11)));
  /* 107e64: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 107e68: cmp x12, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(1));
  /* 107e6c: cinc x11, x11, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 11)) + 1 : (ARC_X_R(c, 11))));
  /* 107e70: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* 107e74: b.hs #0x107e98 */
  if (ARC_COND(c, 2)) goto L_107e98;
L_107e78:;
  /* 107e78: ldrb w12, [x11] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 11)));
  /* 107e7c: cbz w12, #0x107e60 */
  if ((ARC_W_R(c, 12)) == 0) goto L_107e60;
  /* 107e80: cmp w12, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(255));
  /* 107e84: b.eq #0x107e60 */
  if (ARC_COND(c, 0)) goto L_107e60;
  /* 107e88: ldr w13, [x10] */
  ARC_W_W(c, 13, arc_ld32(ARC_X_R(c, 10)));
  /* 107e8c: cmp w13, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 12));
  /* 107e90: b.eq #0x107e60 */
  if (ARC_COND(c, 0)) goto L_107e60;
  /* 107e94: b #0x107eb8 */
  goto L_107eb8;
L_107e98:;
  /* 107e98: ldrb w9, [x11] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 11)));
  /* 107e9c: cbz w9, #0x107ec0 */
  if ((ARC_W_R(c, 9)) == 0) goto L_107ec0;
  /* 107ea0: cmp w9, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(255));
  /* 107ea4: b.eq #0x107ec0 */
  if (ARC_COND(c, 0)) goto L_107ec0;
  /* 107ea8: ldr w8, [x8] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 8)));
  /* 107eac: sub w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* 107eb0: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* 107eb4: b.lo #0x107ec0 */
  if (ARC_COND(c, 3)) goto L_107ec0;
L_107eb8:;
  /* 107eb8: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 107ebc: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_107ec0:;
  /* 107ec0: cbz x19, #0x107ed8 */
  if ((ARC_X_R(c, 19)) == 0) goto L_107ed8;
  /* 107ec4: ldp x8, x9, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 107ec8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 107ecc: b.eq #0x107ee4 */
  if (ARC_COND(c, 0)) goto L_107ee4;
  /* 107ed0: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 107ed4: b #0x107ef4 */
  goto L_107ef4;
L_107ed8:;
  /* 107ed8: cbz x21, #0x107f4c */
  if ((ARC_X_R(c, 21)) == 0) goto L_107f4c;
  /* 107edc: mov w20, #1 */
  ARC_W_W(c, 20, UINT64_C(1));
  /* 107ee0: b #0x107f08 */
  goto L_107f08;
L_107ee4:;
  /* 107ee4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 107ee8: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 107eec: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 107ef0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1081076));
  arc_dispatch(c, ARC_X_R(c, 8));
L_107ef4:;
  /* 107ef4: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 107ef8: cset w20, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? 1 : 0));
  /* 107efc: csel x8, xzr, x19, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 19)));
  /* 107f00: cbz x21, #0x107f40 */
  if ((ARC_X_R(c, 21)) == 0) goto L_107f40;
  /* 107f04: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
L_107f08:;
  /* 107f08: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 107f0c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 107f10: b.eq #0x107f1c */
  if (ARC_COND(c, 0)) goto L_107f1c;
  /* 107f14: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 107f18: b #0x107f2c */
  goto L_107f2c;
L_107f1c:;
  /* 107f1c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 107f20: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 107f24: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 107f28: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1081132));
  arc_dispatch(c, ARC_X_R(c, 8));
L_107f2c:;
  /* 107f2c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 107f30: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 107f34: eor w8, w20, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 20) ^ ARC_W_R(c, 8)));
  /* 107f38: tbz w8, #0, #0x107f4c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_107f4c;
  /* 107f3c: b #0x107f58 */
  goto L_107f58;
L_107f40:;
  /* 107f40: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 107f44: b.ne #0x107f58 */
  if (ARC_COND(c, 1)) goto L_107f58;
  /* 107f48: mov x19, xzr */
  ARC_X_W(c, 19, ARC_X_R(c, 31));
L_107f4c:;
  /* 107f4c: ldr w8, [x22] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 22)));
  /* 107f50: orr w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(2)));
  /* 107f54: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_107f58:;
  /* 107f58: ldurb w8, [x29, #-0xb0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-176))));
  /* 107f5c: tbz w8, #0, #0x107f70 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_107f70;
  /* 107f60: ldr x8, [x25, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(8))));
  /* 107f64: ldr x0, [x25, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 25) + INT64_C(24))));
  /* 107f68: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 107f6c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1081200));
  fn1_142608(c);
L_107f70:;
  /* 107f70: ldurb w8, [x29, #-0x98] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-152))));
  /* 107f74: tbz w8, #0, #0x107f88 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_107f88;
  /* 107f78: ldr x8, [x25, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(32))));
  /* 107f7c: ldr x0, [x25, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 25) + INT64_C(48))));
  /* 107f80: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 107f84: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1081224));
  fn1_142608(c);
L_107f88:;
  /* 107f88: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 107f8c: add sp, sp, #0x1a0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(416)));
  /* 107f90: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 107f94: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 107f98: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 107f9c: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 107fa0: ldp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 107fa4: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 107fa8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 107fac: ret  */
  return;
L_107fb0:;
  /* 107fb0: add x13, x13, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(1)));
  /* 107fb4: add x15, sp, #0x48 */
  ARC_X_W(c, 15, ((c)->sp + UINT64_C(72)));
  /* 107fb8: sub x12, x12, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(16)));
  /* 107fbc: and x14, x13, #0x7ffffffffffffff8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 13) & UINT64_C(9223372036854775800)));
  /* 107fc0: lsl x10, x14, #2 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(2)) & 63)));
  /* 107fc4: mov x16, x14 */
  ARC_X_W(c, 16, ARC_X_R(c, 14));
  /* 107fc8: sub x11, x8, x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) - ARC_X_R(c, 10)));
  /* 107fcc: add x10, x15, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 15) + ARC_X_R(c, 10)));
  /* 107fd0: add x15, x15, #0x10 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(16)));
L_107fd4:;
  /* 107fd4: ldp q1, q0, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 107fd8: sub x16, x16, #8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) - UINT64_C(8)));
  /* 107fdc: ldp q2, q3, [x15, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 15) + INT64_C(-16));
    arc_q_w(c, 2, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 3, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 107fe0: rev64 v0.4s, v0.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[0].u32[1];
    _t.u32[1] = (c)->q[0].u32[0];
    _t.u32[2] = (c)->q[0].u32[3];
    _t.u32[3] = (c)->q[0].u32[2];
    (c)->q[0] = _t; }
  /* 107fe4: rev64 v1.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[1].u32[1];
    _t.u32[1] = (c)->q[1].u32[0];
    _t.u32[2] = (c)->q[1].u32[3];
    _t.u32[3] = (c)->q[1].u32[2];
    (c)->q[1] = _t; }
  /* 107fe8: rev64 v2.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[2].u32[1];
    _t.u32[1] = (c)->q[2].u32[0];
    _t.u32[2] = (c)->q[2].u32[3];
    _t.u32[3] = (c)->q[2].u32[2];
    (c)->q[2] = _t; }
  /* 107fec: rev64 v3.4s, v3.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[3].u32[1];
    _t.u32[1] = (c)->q[3].u32[0];
    _t.u32[2] = (c)->q[3].u32[3];
    _t.u32[3] = (c)->q[3].u32[2];
    (c)->q[3] = _t; }
  /* 107ff0: ext v0.16b, v0.16b, v0.16b, #8 */
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
  /* 107ff4: ext v1.16b, v1.16b, v1.16b, #8 */
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
  /* 107ff8: ext v2.16b, v2.16b, v2.16b, #8 */
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
  /* 107ffc: ext v3.16b, v3.16b, v3.16b, #8 */
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
  /* 108000: stp q0, q1, [x15, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 15) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 108004: add x15, x15, #0x20 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(32)));
  /* 108008: stp q3, q2, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_st64(_pa, (c)->q[3].u64[0]);
    arc_st64(_pa + 8, (c)->q[3].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* 10800c: sub x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(32)));
  /* 108010: cbnz x16, #0x107fd4 */
  if ((ARC_X_R(c, 16)) != 0) goto L_107fd4;
  /* 108014: cmp x13, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 14));
  /* 108018: b.eq #0x107e24 */
  if (ARC_COND(c, 0)) goto L_107e24;
  /* 10801c: b #0x107e04 */
  goto L_107e04;
  /* 108020: b #0x10802c */
  goto L_10802c;
  /* 108024: b #0x10802c */
  goto L_10802c;
  /* 108028: b #0x10802c */
  goto L_10802c;
L_10802c:;
  /* 10802c: ldurb w8, [x29, #-0xb0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-176))));
  /* 108030: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 108034: tbnz w8, #0, #0x108048 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_108048;
  /* 108038: ldurb w8, [x29, #-0x98] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-152))));
  /* 10803c: tbnz w8, #0, #0x108060 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_108060;
L_108040:;
  /* 108040: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 108044: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1081416));
  fn1_9cc20(c);
L_108048:;
  /* 108048: ldr x8, [x25, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(8))));
  /* 10804c: ldr x0, [x25, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 25) + INT64_C(24))));
  /* 108050: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 108054: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1081432));
  fn1_142608(c);
  /* 108058: ldurb w8, [x29, #-0x98] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-152))));
  /* 10805c: tbz w8, #0, #0x108040 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_108040;
L_108060:;
  /* 108060: ldr x8, [x25, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(32))));
  /* 108064: ldr x0, [x25, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 25) + INT64_C(48))));
  /* 108068: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 10806c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1081456));
  fn1_142608(c);
  /* 108070: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 108074: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1081464));
  fn1_9cc20(c);
}

void fn1_111ca0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039049376));
  /* 111ca0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 111ca4: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 111ca8: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 111cac: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 111cb0: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 111cb4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 111cb8: ldr x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 111cbc: mov x20, x5 */
  ARC_X_W(c, 20, ARC_X_R(c, 5));
  /* 111cc0: mov x21, x4 */
  ARC_X_W(c, 21, ARC_X_R(c, 4));
  /* 111cc4: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* 111cc8: mov x23, x2 */
  ARC_X_W(c, 23, ARC_X_R(c, 2));
  /* 111ccc: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 111cd0: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 111cd4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1121496));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 111cd8: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 111cdc: add x3, x0, #0x240 */
  ARC_X_W(c, 3, (ARC_X_R(c, 0) + UINT64_C(576)));
  /* 111ce0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 111ce4: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 111ce8: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 111cec: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* 111cf0: mov x5, x21 */
  ARC_X_W(c, 5, ARC_X_R(c, 21));
  /* 111cf4: mov w6, wzr */
  ARC_W_W(c, 6, ARC_W_R(c, 31));
  /* 111cf8: bl #0x104878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1121532));
  fn1_104878(c);
  /* 111cfc: sub x8, x0, x24 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) - ARC_X_R(c, 24)));
  /* 111d00: cmp x8, #0x23f */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(575));
  /* 111d04: b.gt #0x111d38 */
  if (ARC_COND(c, 12)) goto L_111d38;
  /* 111d08: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* 111d0c: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* 111d10: movk x9, #0xaaab */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744073709486080)) | UINT64_C(43691)));
  /* 111d14: mul x8, x8, x9 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9))));
  /* 111d18: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* 111d1c: eor x9, x9, #0x8000000000000001 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) ^ UINT64_C(9223372036854775809)));
  /* 111d20: smulh x9, x8, x9 */
  ARC_X_W(c, 9, arc_smulh(ARC_X_R(c, 8), ARC_X_R(c, 9)));
  /* 111d24: lsr x10, x9, #0x3f */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(63)) & 63)));
  /* 111d28: add w9, w10, w9, lsr #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 10) + ((uint32_t)(ARC_W_R(c, 9)) >> 1)));
  /* 111d2c: mov w10, #0xc */
  ARC_W_W(c, 10, UINT64_C(12));
  /* 111d30: msub w8, w9, w10, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) - ((uint32_t)(ARC_W_R(c, 9)) * (uint32_t)(ARC_W_R(c, 10)))));
  /* 111d34: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_111d38:;
  /* 111d38: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 111d3c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 111d40: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 111d44: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 111d48: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 111d4c: ret  */
  return;
}

void fn1_113e80(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039058048));
  /* 113e80: bti c */
  /* bti: no architectural effect here */
  /* 113e84: mov x9, x0 */
  ARC_X_W(c, 9, ARC_X_R(c, 0));
  /* 113e88: ldrb w10, [x9, #0x60]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(96));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(96));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* 113e8c: tbnz w10, #0, #0x113ea4 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_113ea4;
  /* 113e90: ldr q0, [x9] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 9)), arc_ld64(ARC_X_R(c, 9) + 8));
  /* 113e94: ldr x9, [x9, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(16))));
  /* 113e98: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* 113e9c: str x9, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 9));
  /* 113ea0: ret  */
  return;
L_113ea4:;
  /* 113ea4: ldp x2, x1, [x0, #0x68] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(104));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 113ea8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 113eac: b #0xda588 */
  fn1_da588(c); return;
}

void fn1_11ae2c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039086636));
  /* 11ae2c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 11ae30: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 11ae34: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 11ae38: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 11ae3c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 11ae40: bl #0x143e20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1158724));
  fn1_143e20(c);
  /* 11ae44: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11ae48: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* 11ae4c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 11ae50: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 11ae54: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 11ae58: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_125dc4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039131588));
  /* 125dc4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 125dc8: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 125dcc: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 125dd0: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 125dd4: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 125dd8: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 125ddc: sub x9, x2, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 2) - UINT64_C(1)));
  /* 125de0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 125de4: ldr x8, [x8, #0xc68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3176))));
  /* 125de8: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 125dec: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 125df0: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 125df4: stp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 125df8: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 125dfc: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1203712));
  fn1_1441e0(c);
  /* 125e00: str x0, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 0));
  /* 125e04: cbz x0, #0x125e1c */
  if ((ARC_X_R(c, 0)) == 0) goto L_125e1c;
  /* 125e08: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 125e0c: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 125e10: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 125e14: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 125e18: ret  */
  return;
L_125e1c:;
  /* 125e1c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 125e20: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 125e24: bl #0x11dda8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1203752));
  fn1_11dda8(c);
  /* 125e28: adrp x0, #0x4f000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(323584)));
  /* 125e2c: add x0, x0, #0x753 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1875)));
  /* 125e30: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* 125e34: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 125e38: add x19, sp, #0x18 */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(24)));
  /* 125e3c: bl #0x125878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1203776));
  fn1_125878(c);
  /* 125e40: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* 125e44: ldr x9, [sp, #0x28] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(40))));
  /* 125e48: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 125e4c: csinc x0, x9, x19, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* 125e50: bl #0x142c98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1203796));
  fn1_142c98(c);
  /* 125e54: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* 125e58: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 125e5c: tbnz w8, #0, #0x125e70 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_125e70;
  /* 125e60: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 125e64: tbnz w8, #0, #0x125e98 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_125e98;
L_125e68:;
  /* 125e68: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 125e6c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1203824));
  fn1_9cc20(c);
L_125e70:;
  /* 125e70: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 125e74: ldr x0, [sp, #0x28] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(40))));
  /* 125e78: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 125e7c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1203840));
  fn1_142608(c);
  /* 125e80: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 125e84: tbz w8, #0, #0x125e68 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_125e68;
  /* 125e88: b #0x125e98 */
  goto L_125e98;
  /* 125e8c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 125e90: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 125e94: tbz w8, #0, #0x125e68 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_125e68;
L_125e98:;
  /* 125e98: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 125e9c: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* 125ea0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 125ea4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1203880));
  fn1_142608(c);
  /* 125ea8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 125eac: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1203888));
  fn1_9cc20(c);
}

void fn1_128038(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039140408));
  /* 128038: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12803c: sub sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(144)));
  /* 128040: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 128044: stp x28, x27, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 128048: stp x26, x25, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 12804c: stp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 128050: stp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 128054: stp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 128058: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 12805c: mov x20, x7 */
  ARC_X_W(c, 20, ARC_X_R(c, 7));
  /* 128060: mov x23, x6 */
  ARC_X_W(c, 23, ARC_X_R(c, 6));
  /* 128064: mov x26, x5 */
  ARC_X_W(c, 26, ARC_X_R(c, 5));
  /* 128068: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* 12806c: mov x24, x2 */
  ARC_X_W(c, 24, ARC_X_R(c, 2));
  /* 128070: mov x25, x1 */
  ARC_X_W(c, 25, ARC_X_R(c, 1));
  /* 128074: cmp x2, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 3));
  /* 128078: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 12807c: stp x0, x4, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 4));
  }
  /* 128080: b.eq #0x1280a0 */
  if (ARC_COND(c, 0)) goto L_1280a0;
  /* 128084: mov x22, x24 */
  ARC_X_W(c, 22, ARC_X_R(c, 24));
L_128088:;
  /* 128088: ldr w8, [x22] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 22)));
  /* 12808c: cbz w8, #0x1280a0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1280a0;
  /* 128090: add x22, x22, #4 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(4)));
  /* 128094: cmp x22, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 19));
  /* 128098: b.ne #0x128088 */
  if (ARC_COND(c, 1)) goto L_128088;
  /* 12809c: mov x22, x19 */
  ARC_X_W(c, 22, ARC_X_R(c, 19));
L_1280a0:;
  /* 1280a0: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1280a4: cmp x24, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 19));
  /* 1280a8: str x26, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 26));
  /* 1280ac: str x24, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 24));
  /* 1280b0: b.ne #0x1280c8 */
  if (ARC_COND(c, 1)) goto L_1280c8;
  /* 1280b4: b #0x1282a0 */
  goto L_1282a0;
L_1280b8:;
  /* 1280b8: mov x22, x8 */
  ARC_X_W(c, 22, ARC_X_R(c, 8));
L_1280bc:;
  /* 1280bc: ldr x26, [x20] */
  ARC_X_W(c, 26, arc_ld64(ARC_X_R(c, 20)));
  /* 1280c0: cmp x24, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 19));
  /* 1280c4: b.eq #0x1282a0 */
  if (ARC_COND(c, 0)) goto L_1282a0;
L_1280c8:;
  /* 1280c8: cmp x26, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 23));
  /* 1280cc: b.eq #0x1282a0 */
  if (ARC_COND(c, 0)) goto L_1282a0;
  /* 1280d0: sub x9, x22, x24 */
  ARC_X_W(c, 9, (ARC_X_R(c, 22) - ARC_X_R(c, 24)));
  /* 1280d4: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 1280d8: sub x21, x23, x26 */
  ARC_X_W(c, 21, (ARC_X_R(c, 23) - ARC_X_R(c, 26)));
  /* 1280dc: asr x27, x9, #2 */
  ARC_X_W(c, 27, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(2)) & 63))));
  /* 1280e0: ldr x9, [sp, #8] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1280e4: stur x8, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 8));
  /* 1280e8: ldr x0, [x9, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(16))));
  /* 1280ec: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1212656));
  fn1_1443c0(c);
  /* 1280f0: mov x28, x0 */
  ARC_X_W(c, 28, ARC_X_R(c, 0));
  /* 1280f4: stur x0, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 0));
  /* 1280f8: ldr x1, [sp, #0x10] */
  ARC_X_W(c, 1, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1280fc: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 128100: mov x2, x27 */
  ARC_X_W(c, 2, ARC_X_R(c, 27));
  /* 128104: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* 128108: mov x4, x25 */
  ARC_X_W(c, 4, ARC_X_R(c, 25));
  /* 12810c: bl #0x1443f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1212688));
  fn1_1443f0(c);
  /* 128110: mov x27, x0 */
  ARC_X_W(c, 27, ARC_X_R(c, 0));
  /* 128114: cbz x28, #0x128120 */
  if ((ARC_X_R(c, 28)) == 0) goto L_128120;
  /* 128118: mov x0, x28 */
  ARC_X_W(c, 0, ARC_X_R(c, 28));
  /* 12811c: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1212704));
  fn1_1443c0(c);
L_128120:;
  /* 128120: cbz x27, #0x12820c */
  if ((ARC_X_R(c, 27)) == 0) goto L_12820c;
  /* 128124: cmn x27, #1 */
  (void)arc_add64(c, ARC_X_R(c, 27), UINT64_C(1), 0);
  /* 128128: b.eq #0x128214 */
  if (ARC_COND(c, 0)) goto L_128214;
  /* 12812c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 128130: add x26, x8, x27 */
  ARC_X_W(c, 26, (ARC_X_R(c, 8) + ARC_X_R(c, 27)));
  /* 128134: cmp x26, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 23));
  /* 128138: str x26, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 26));
  /* 12813c: b.eq #0x128298 */
  if (ARC_COND(c, 0)) goto L_128298;
  /* 128140: cmp x22, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 19));
  /* 128144: b.eq #0x1281f4 */
  if (ARC_COND(c, 0)) goto L_1281f4;
  /* 128148: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 12814c: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 128150: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1212756));
  fn1_1443c0(c);
  /* 128154: mov x26, x0 */
  ARC_X_W(c, 26, ARC_X_R(c, 0));
  /* 128158: stur x0, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 0));
  /* 12815c: sub x0, x29, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(20)));
  /* 128160: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 128164: mov x2, x25 */
  ARC_X_W(c, 2, ARC_X_R(c, 25));
  /* 128168: bl #0x144408 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1212780));
  fn1_144408(c);
  /* 12816c: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 128170: cbz x26, #0x12817c */
  if ((ARC_X_R(c, 26)) == 0) goto L_12817c;
  /* 128174: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 128178: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1212796));
  fn1_1443c0(c);
L_12817c:;
  /* 12817c: cmn x24, #1 */
  (void)arc_add64(c, ARC_X_R(c, 24), UINT64_C(1), 0);
  /* 128180: b.eq #0x1282cc */
  if (ARC_COND(c, 0)) goto L_1282cc;
  /* 128184: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 128188: sub x8, x23, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) - ARC_X_R(c, 8)));
  /* 12818c: cmp x24, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 128190: b.hi #0x12820c */
  if (ARC_COND(c, 8)) goto L_12820c;
  /* 128194: cbz x24, #0x1281b8 */
  if ((ARC_X_R(c, 24)) == 0) goto L_1281b8;
  /* 128198: sub x8, x29, #0x14 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(20)));
L_12819c:;
  /* 12819c: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* 1281a0: ldrb w10, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* 1281a4: subs x24, x24, #1 */
  ARC_X_W(c, 24, arc_sub64(c, ARC_X_R(c, 24), UINT64_C(1)));
  /* 1281a8: add x11, x9, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 1281ac: str x11, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 11));
  /* 1281b0: strb w10, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 10));
  /* 1281b4: b.ne #0x12819c */
  if (ARC_COND(c, 1)) goto L_12819c;
L_1281b8:;
  /* 1281b8: ldr x9, [sp, #0x10] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1281bc: mov x22, x19 */
  ARC_X_W(c, 22, ARC_X_R(c, 19));
  /* 1281c0: ldr x8, [x9] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 9)));
  /* 1281c4: add x24, x8, #4 */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 1281c8: cmp x24, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 19));
  /* 1281cc: mov x8, x24 */
  ARC_X_W(c, 8, ARC_X_R(c, 24));
  /* 1281d0: str x24, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 24));
  /* 1281d4: b.eq #0x1280bc */
  if (ARC_COND(c, 0)) goto L_1280bc;
L_1281d8:;
  /* 1281d8: ldr w9, [x8] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 8)));
  /* 1281dc: cbz w9, #0x1280b8 */
  if ((ARC_W_R(c, 9)) == 0) goto L_1280b8;
  /* 1281e0: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 1281e4: cmp x8, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 19));
  /* 1281e8: b.ne #0x1281d8 */
  if (ARC_COND(c, 1)) goto L_1281d8;
  /* 1281ec: mov x22, x19 */
  ARC_X_W(c, 22, ARC_X_R(c, 19));
  /* 1281f0: b #0x1280bc */
  goto L_1280bc;
L_1281f4:;
  /* 1281f4: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1281f8: mov x22, x19 */
  ARC_X_W(c, 22, ARC_X_R(c, 19));
  /* 1281fc: ldr x24, [x8] */
  ARC_X_W(c, 24, arc_ld64(ARC_X_R(c, 8)));
  /* 128200: cmp x24, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 19));
  /* 128204: b.ne #0x1280c8 */
  if (ARC_COND(c, 1)) goto L_1280c8;
  /* 128208: b #0x1282a0 */
  goto L_1282a0;
L_12820c:;
  /* 12820c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 128210: b #0x1282a8 */
  goto L_1282a8;
L_128214:;
  /* 128214: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* 128218: str x26, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 26));
  /* 12821c: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 128220: cmp x24, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 128224: b.eq #0x128288 */
  if (ARC_COND(c, 0)) goto L_128288;
L_128228:;
  /* 128228: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 12822c: ldr w21, [x24] */
  ARC_W_W(c, 21, arc_ld32(ARC_X_R(c, 24)));
  /* 128230: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 128234: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1212984));
  fn1_1443c0(c);
  /* 128238: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 12823c: stur x0, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 0));
  /* 128240: sub x2, x29, #0x10 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 128244: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 128248: mov w1, w21 */
  ARC_W_W(c, 1, ARC_W_R(c, 21));
  /* 12824c: bl #0x144408 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1213008));
  fn1_144408(c);
  /* 128250: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 128254: cbz x22, #0x128260 */
  if ((ARC_X_R(c, 22)) == 0) goto L_128260;
  /* 128258: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 12825c: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1213024));
  fn1_1443c0(c);
L_128260:;
  /* 128260: cmn x23, #1 */
  (void)arc_add64(c, ARC_X_R(c, 23), UINT64_C(1), 0);
  /* 128264: b.eq #0x128288 */
  if (ARC_COND(c, 0)) goto L_128288;
  /* 128268: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 12826c: add x24, x24, #4 */
  ARC_X_W(c, 24, (ARC_X_R(c, 24) + UINT64_C(4)));
  /* 128270: add x26, x8, x23 */
  ARC_X_W(c, 26, (ARC_X_R(c, 8) + ARC_X_R(c, 23)));
  /* 128274: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* 128278: str x26, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 26));
  /* 12827c: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 128280: cmp x24, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 128284: b.ne #0x128228 */
  if (ARC_COND(c, 1)) goto L_128228;
L_128288:;
  /* 128288: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12828c: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
  /* 128290: str x24, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 24));
  /* 128294: b #0x1282a8 */
  goto L_1282a8;
L_128298:;
  /* 128298: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12829c: ldr x24, [x8] */
  ARC_X_W(c, 24, arc_ld64(ARC_X_R(c, 8)));
L_1282a0:;
  /* 1282a0: cmp x24, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 19));
  /* 1282a4: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
L_1282a8:;
  /* 1282a8: ldp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1282ac: ldp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1282b0: ldp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1282b4: ldp x26, x25, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 1282b8: ldp x28, x27, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 1282bc: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1282c0: add sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(144)));
  /* 1282c4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1282c8: ret  */
  return;
L_1282cc:;
  /* 1282cc: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
  /* 1282d0: b #0x1282a8 */
  goto L_1282a8;
  /* 1282d4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1213144));
  fn1_a1454(c);
  /* 1282d8: b #0x1282e8 */
  goto L_1282e8;
  /* 1282dc: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1213152));
  fn1_a1454(c);
  /* 1282e0: b #0x1282e8 */
  goto L_1282e8;
  /* 1282e4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1213160));
  fn1_a1454(c);
L_1282e8:;
  /* 1282e8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1282ec: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1282f0: bl #0x135428 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1213172));
  fn1_135428(c);
  /* 1282f4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1282f8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1213180));
  fn1_9cc20(c);
}

void fn1_12a26c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039149164));
  /* 12a26c: bti c */
  /* bti: no architectural effect here */
  /* 12a270: ldr w8, [x0, #0x18] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12a274: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 12a278: ldr x3, [x0, #0x10] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 12a27c: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 12a280: mov x2, x4 */
  ARC_X_W(c, 2, ARC_X_R(c, 4));
  /* 12a284: mov w4, w8 */
  ARC_W_W(c, 4, ARC_W_R(c, 8));
  /* 12a288: b #0x1297d0 */
  fn1_1297d0(c); return;
}

void fn1_12bac4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039155396));
  /* 12bac4: bti c */
  /* bti: no architectural effect here */
  /* 12bac8: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 12bacc: ret  */
  return;
}

void fn1_1309a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039175592));
  /* 1309a8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1309ac: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1309b0: stp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 1309b4: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 1309b8: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1309bc: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1309c0: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1309c4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1309c8: sub sp, sp, #0x270 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(624)));
  /* 1309cc: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 1309d0: add x26, sp, #0x3c */
  ARC_X_W(c, 26, ((c)->sp + UINT64_C(60)));
  /* 1309d4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1309d8: mov x25, xzr */
  ARC_X_W(c, 25, ARC_X_R(c, 31));
  /* 1309dc: sub x27, x29, #0xa4 */
  ARC_X_W(c, 27, (ARC_X_R(c, 29) - UINT64_C(164)));
  /* 1309e0: add x28, x0, #8 */
  ARC_X_W(c, 28, (ARC_X_R(c, 0) + UINT64_C(8)));
  /* 1309e4: add x20, x26, #0x10 */
  ARC_X_W(c, 20, (ARC_X_R(c, 26) + UINT64_C(16)));
  /* 1309e8: mov w21, #0x18 */
  ARC_W_W(c, 21, UINT64_C(24));
  /* 1309ec: mov w22, #4 */
  ARC_W_W(c, 22, UINT64_C(4));
  /* 1309f0: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 1309f4: stur xzr, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 31));
  /* 1309f8: str xzr, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 31));
  /* 1309fc: stp q0, q0, [x29, #-0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-48));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 130a00: stur q0, [x29, #-0x40] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-64)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-64)) + 8, (c)->q[0].u64[1]);
  /* 130a04: b #0x130a1c */
  goto L_130a1c;
L_130a08:;
  /* 130a08: lsl w8, w23, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 23)) << ((UINT64_C(1)) & 31)));
  /* 130a0c: strb w8, [x24] */
  arc_st8(ARC_X_R(c, 24), ARC_W_R(c, 8));
L_130a10:;
  /* 130a10: add x25, x25, #1 */
  ARC_X_W(c, 25, (ARC_X_R(c, 25) + UINT64_C(1)));
  /* 130a14: cmp x25, #7 */
  (void)arc_sub64(c, ARC_X_R(c, 25), UINT64_C(7));
  /* 130a18: b.eq #0x130cd0 */
  if (ARC_COND(c, 0)) goto L_130cd0;
L_130a1c:;
  /* 130a1c: ldr x4, [x19] */
  ARC_X_W(c, 4, arc_ld64(ARC_X_R(c, 19)));
  /* 130a20: sub x0, x29, #0xa4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(164)));
  /* 130a24: sub x3, x29, #0x40 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 130a28: mov w1, #0x64 */
  ARC_W_W(c, 1, UINT64_C(100));
  /* 130a2c: adrp x2, #0x51000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(331776)));
  /* 130a30: add x2, x2, #0x162 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(354)));
  /* 130a34: stur w25, [x29, #-0x28] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-40)), ARC_W_R(c, 25));
  /* 130a38: bl #0x1444b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1247804));
  fn1_1444b0(c);
  /* 130a3c: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* 130a40: stp x27, xzr, [sp, #0x28] */
  { const uint64_t _pa = ((c)->sp + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 27));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 130a44: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1247816));
  fn1_1443c0(c);
  /* 130a48: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 130a4c: str x0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 0));
  /* 130a50: add x0, sp, #0x3c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(60)));
  /* 130a54: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* 130a58: add x3, sp, #0x30 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(48)));
  /* 130a5c: mov w2, #0x64 */
  ARC_W_W(c, 2, UINT64_C(100));
  /* 130a60: bl #0x1444c8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1247844));
  fn1_1444c8(c);
  /* 130a64: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 130a68: cbz x24, #0x130a74 */
  if ((ARC_X_R(c, 24)) == 0) goto L_130a74;
  /* 130a6c: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 130a70: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1247860));
  fn1_1443c0(c);
L_130a74:;
  /* 130a74: add x8, x23, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* 130a78: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 130a7c: b.ls #0x131404 */
  if (ARC_COND(c, 9)) goto L_131404;
  /* 130a80: madd x24, x25, x21, x28 */
  ARC_X_W(c, 24, ((uint64_t)(ARC_X_R(c, 28)) + ((uint64_t)(ARC_X_R(c, 25)) * (uint64_t)(ARC_X_R(c, 21)))));
  /* 130a84: ldr x9, [x24] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 24)));
  /* 130a88: ldrb w8, [x24] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 24)));
  /* 130a8c: and x10, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 130a90: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 130a94: and w8, w9, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) & UINT64_C(255)));
  /* 130a98: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* 130a9c: csel x1, x22, x10, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 22)) : ARC_X_R(c, 10)));
  /* 130aa0: subs x2, x23, x1 */
  ARC_X_W(c, 2, arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 1)));
  /* 130aa4: b.ls #0x130ad4 */
  if (ARC_COND(c, 9)) goto L_130ad4;
  /* 130aa8: ldr x10, [x24, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 24) + INT64_C(8))));
  /* 130aac: ubfx x9, x9, #1, #7 */
  ARC_X_W(c, 9, (((uint64_t)(ARC_X_R(c, 9)) >> 1) & UINT64_C(127)));
  /* 130ab0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 130ab4: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 130ab8: mov x4, xzr */
  ARC_X_W(c, 4, ARC_X_R(c, 31));
  /* 130abc: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 130ac0: csel x3, x9, x10, eq */
  ARC_X_W(c, 3, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* 130ac4: mov x5, x3 */
  ARC_X_W(c, 5, ARC_X_R(c, 3));
  /* 130ac8: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1247948));
  fn1_142da0(c);
  /* 130acc: ldrb w8, [x24] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 24)));
  /* 130ad0: str xzr, [x24, #8] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(8)), ARC_X_R(c, 31));
L_130ad4:;
  /* 130ad4: ldr x10, [x24, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 24) + INT64_C(16))));
  /* 130ad8: sub x9, x23, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) - UINT64_C(1)));
  /* 130adc: add x11, x24, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 24) + UINT64_C(4)));
  /* 130ae0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 130ae4: and x9, x9, #0x3fffffffffffffff */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(4611686018427387903)));
  /* 130ae8: add x8, sp, #0x3c */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(60)));
  /* 130aec: csel x12, x11, x10, eq */
  ARC_X_W(c, 12, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 130af0: cmp x9, #7 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(7));
  /* 130af4: b.lo #0x130b48 */
  if (ARC_COND(c, 3)) goto L_130b48;
  /* 130af8: sub x10, x12, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 12) - ARC_X_R(c, 8)));
  /* 130afc: cmp x10, #0x20 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(32));
  /* 130b00: b.lo #0x130b48 */
  if (ARC_COND(c, 3)) goto L_130b48;
  /* 130b04: add x10, x9, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 130b08: mov x14, x20 */
  ARC_X_W(c, 14, ARC_X_R(c, 20));
  /* 130b0c: and x11, x10, #0x7ffffffffffffff8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) & UINT64_C(9223372036854775800)));
  /* 130b10: lsl x8, x11, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 11)) << ((UINT64_C(2)) & 63)));
  /* 130b14: mov x13, x11 */
  ARC_X_W(c, 13, ARC_X_R(c, 11));
  /* 130b18: add x9, x12, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 12) + ARC_X_R(c, 8)));
  /* 130b1c: add x8, x26, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 26) + ARC_X_R(c, 8)));
  /* 130b20: add x12, x12, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(16)));
L_130b24:;
  /* 130b24: ldp q0, q1, [x14, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 14) + INT64_C(-16));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 130b28: subs x13, x13, #8 */
  ARC_X_W(c, 13, arc_sub64(c, ARC_X_R(c, 13), UINT64_C(8)));
  /* 130b2c: add x14, x14, #0x20 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(32)));
  /* 130b30: stp q0, q1, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 130b34: add x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(32)));
  /* 130b38: b.ne #0x130b24 */
  if (ARC_COND(c, 1)) goto L_130b24;
  /* 130b3c: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 130b40: mov x12, x9 */
  ARC_X_W(c, 12, ARC_X_R(c, 9));
  /* 130b44: b.eq #0x130b60 */
  if (ARC_COND(c, 0)) goto L_130b60;
L_130b48:;
  /* 130b48: add x10, x26, x23, lsl #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 26) + ((uint64_t)(ARC_X_R(c, 23)) << 2)));
  /* 130b4c: mov x9, x12 */
  ARC_X_W(c, 9, ARC_X_R(c, 12));
L_130b50:;
  /* 130b50: ldr w11, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    ARC_W_W(c, 11, arc_ld32(_a));
  }
  /* 130b54: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 130b58: str w11, [x9], #4 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 11));
  }
  /* 130b5c: b.ne #0x130b50 */
  if (ARC_COND(c, 1)) goto L_130b50;
L_130b60:;
  /* 130b60: str wzr, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 31));
  /* 130b64: ldrb w8, [x24] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 24)));
  /* 130b68: tbnz w8, #0, #0x130b78 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_130b78;
  /* 130b6c: lsl w8, w23, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 23)) << ((UINT64_C(1)) & 31)));
  /* 130b70: strb w8, [x24] */
  arc_st8(ARC_X_R(c, 24), ARC_W_R(c, 8));
  /* 130b74: b #0x130b7c */
  goto L_130b7c;
L_130b78:;
  /* 130b78: str x23, [x24, #8] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(8)), ARC_X_R(c, 23));
L_130b7c:;
  /* 130b7c: ldr x4, [x19] */
  ARC_X_W(c, 4, arc_ld64(ARC_X_R(c, 19)));
  /* 130b80: sub x0, x29, #0xa4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(164)));
  /* 130b84: sub x3, x29, #0x40 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 130b88: mov w1, #0x64 */
  ARC_W_W(c, 1, UINT64_C(100));
  /* 130b8c: adrp x2, #0x50000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(327680)));
  /* 130b90: add x2, x2, #0x7ce */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(1998)));
  /* 130b94: bl #0x1444b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1248152));
  fn1_1444b0(c);
  /* 130b98: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* 130b9c: stp x27, xzr, [sp, #0x28] */
  { const uint64_t _pa = ((c)->sp + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 27));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 130ba0: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1248164));
  fn1_1443c0(c);
  /* 130ba4: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 130ba8: str x0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 0));
  /* 130bac: add x0, sp, #0x3c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(60)));
  /* 130bb0: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* 130bb4: add x3, sp, #0x30 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(48)));
  /* 130bb8: mov w2, #0x64 */
  ARC_W_W(c, 2, UINT64_C(100));
  /* 130bbc: bl #0x1444c8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1248192));
  fn1_1444c8(c);
  /* 130bc0: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 130bc4: cbz x24, #0x130bd0 */
  if ((ARC_X_R(c, 24)) == 0) goto L_130bd0;
  /* 130bc8: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 130bcc: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1248208));
  fn1_1443c0(c);
L_130bd0:;
  /* 130bd0: add x8, x23, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* 130bd4: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 130bd8: b.ls #0x131404 */
  if (ARC_COND(c, 9)) goto L_131404;
  /* 130bdc: madd x24, x25, x21, x28 */
  ARC_X_W(c, 24, ((uint64_t)(ARC_X_R(c, 28)) + ((uint64_t)(ARC_X_R(c, 25)) * (uint64_t)(ARC_X_R(c, 21)))));
  /* 130be0: ldrb w8, [x24, #0xa8]! */
  { const uint64_t _a = (ARC_X_R(c, 24) + INT64_C(168));
    ARC_X_W(c, 24, ARC_X_R(c, 24) + INT64_C(168));
    ARC_W_W(c, 8, arc_ld8(_a));
  }
  /* 130be4: ldr x9, [x24] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 24)));
  /* 130be8: and x10, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 130bec: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 130bf0: and w8, w9, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) & UINT64_C(255)));
  /* 130bf4: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* 130bf8: csel x1, x22, x10, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 22)) : ARC_X_R(c, 10)));
  /* 130bfc: subs x2, x23, x1 */
  ARC_X_W(c, 2, arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 1)));
  /* 130c00: b.ls #0x130c30 */
  if (ARC_COND(c, 9)) goto L_130c30;
  /* 130c04: ldr x10, [x24, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 24) + INT64_C(8))));
  /* 130c08: ubfx x9, x9, #1, #7 */
  ARC_X_W(c, 9, (((uint64_t)(ARC_X_R(c, 9)) >> 1) & UINT64_C(127)));
  /* 130c0c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 130c10: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 130c14: mov x4, xzr */
  ARC_X_W(c, 4, ARC_X_R(c, 31));
  /* 130c18: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 130c1c: csel x3, x9, x10, eq */
  ARC_X_W(c, 3, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* 130c20: mov x5, x3 */
  ARC_X_W(c, 5, ARC_X_R(c, 3));
  /* 130c24: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1248296));
  fn1_142da0(c);
  /* 130c28: ldrb w8, [x24] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 24)));
  /* 130c2c: str xzr, [x24, #8] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(8)), ARC_X_R(c, 31));
L_130c30:;
  /* 130c30: ldr x10, [x24, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 24) + INT64_C(16))));
  /* 130c34: sub x9, x23, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) - UINT64_C(1)));
  /* 130c38: add x11, x24, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 24) + UINT64_C(4)));
  /* 130c3c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 130c40: and x9, x9, #0x3fffffffffffffff */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(4611686018427387903)));
  /* 130c44: add x8, sp, #0x3c */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(60)));
  /* 130c48: csel x12, x11, x10, eq */
  ARC_X_W(c, 12, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 130c4c: cmp x9, #7 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(7));
  /* 130c50: b.lo #0x130ca4 */
  if (ARC_COND(c, 3)) goto L_130ca4;
  /* 130c54: sub x10, x12, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 12) - ARC_X_R(c, 8)));
  /* 130c58: cmp x10, #0x20 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(32));
  /* 130c5c: b.lo #0x130ca4 */
  if (ARC_COND(c, 3)) goto L_130ca4;
  /* 130c60: add x10, x9, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 130c64: mov x14, x20 */
  ARC_X_W(c, 14, ARC_X_R(c, 20));
  /* 130c68: and x11, x10, #0x7ffffffffffffff8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) & UINT64_C(9223372036854775800)));
  /* 130c6c: lsl x8, x11, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 11)) << ((UINT64_C(2)) & 63)));
  /* 130c70: mov x13, x11 */
  ARC_X_W(c, 13, ARC_X_R(c, 11));
  /* 130c74: add x9, x12, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 12) + ARC_X_R(c, 8)));
  /* 130c78: add x8, x26, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 26) + ARC_X_R(c, 8)));
  /* 130c7c: add x12, x12, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(16)));
L_130c80:;
  /* 130c80: ldp q0, q1, [x14, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 14) + INT64_C(-16));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 130c84: subs x13, x13, #8 */
  ARC_X_W(c, 13, arc_sub64(c, ARC_X_R(c, 13), UINT64_C(8)));
  /* 130c88: add x14, x14, #0x20 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(32)));
  /* 130c8c: stp q0, q1, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 130c90: add x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(32)));
  /* 130c94: b.ne #0x130c80 */
  if (ARC_COND(c, 1)) goto L_130c80;
  /* 130c98: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 130c9c: mov x12, x9 */
  ARC_X_W(c, 12, ARC_X_R(c, 9));
  /* 130ca0: b.eq #0x130cbc */
  if (ARC_COND(c, 0)) goto L_130cbc;
L_130ca4:;
  /* 130ca4: add x10, x26, x23, lsl #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 26) + ((uint64_t)(ARC_X_R(c, 23)) << 2)));
  /* 130ca8: mov x9, x12 */
  ARC_X_W(c, 9, ARC_X_R(c, 12));
L_130cac:;
  /* 130cac: ldr w11, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    ARC_W_W(c, 11, arc_ld32(_a));
  }
  /* 130cb0: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 130cb4: str w11, [x9], #4 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 11));
  }
  /* 130cb8: b.ne #0x130cac */
  if (ARC_COND(c, 1)) goto L_130cac;
L_130cbc:;
  /* 130cbc: str wzr, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 31));
  /* 130cc0: ldrb w8, [x24] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 24)));
  /* 130cc4: tbz w8, #0, #0x130a08 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_130a08;
  /* 130cc8: str x23, [x24, #8] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(8)), ARC_X_R(c, 23));
  /* 130ccc: b #0x130a10 */
  goto L_130a10;
L_130cd0:;
  /* 130cd0: add x27, sp, #0x3c */
  ARC_X_W(c, 27, ((c)->sp + UINT64_C(60)));
  /* 130cd4: mov x25, xzr */
  ARC_X_W(c, 25, ARC_X_R(c, 31));
  /* 130cd8: add x26, x19, #0x158 */
  ARC_X_W(c, 26, (ARC_X_R(c, 19) + UINT64_C(344)));
  /* 130cdc: add x28, x27, #0x10 */
  ARC_X_W(c, 28, (ARC_X_R(c, 27) + UINT64_C(16)));
  /* 130ce0: sub x20, x29, #0xa4 */
  ARC_X_W(c, 20, (ARC_X_R(c, 29) - UINT64_C(164)));
  /* 130ce4: mov w21, #0x18 */
  ARC_W_W(c, 21, UINT64_C(24));
  /* 130ce8: mov w22, #4 */
  ARC_W_W(c, 22, UINT64_C(4));
  /* 130cec: b #0x130d04 */
  goto L_130d04;
L_130cf0:;
  /* 130cf0: lsl w8, w23, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 23)) << ((UINT64_C(1)) & 31)));
  /* 130cf4: strb w8, [x24] */
  arc_st8(ARC_X_R(c, 24), ARC_W_R(c, 8));
L_130cf8:;
  /* 130cf8: add x25, x25, #1 */
  ARC_X_W(c, 25, (ARC_X_R(c, 25) + UINT64_C(1)));
  /* 130cfc: cmp x25, #0xc */
  (void)arc_sub64(c, ARC_X_R(c, 25), UINT64_C(12));
  /* 130d00: b.eq #0x130fbc */
  if (ARC_COND(c, 0)) goto L_130fbc;
L_130d04:;
  /* 130d04: ldr x4, [x19] */
  ARC_X_W(c, 4, arc_ld64(ARC_X_R(c, 19)));
  /* 130d08: sub x0, x29, #0xa4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(164)));
  /* 130d0c: sub x3, x29, #0x40 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 130d10: mov w1, #0x64 */
  ARC_W_W(c, 1, UINT64_C(100));
  /* 130d14: adrp x2, #0x50000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(327680)));
  /* 130d18: add x2, x2, #0xcce */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(3278)));
  /* 130d1c: stur w25, [x29, #-0x30] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-48)), ARC_W_R(c, 25));
  /* 130d20: bl #0x1444b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1248548));
  fn1_1444b0(c);
  /* 130d24: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* 130d28: stp x20, xzr, [sp, #0x28] */
  { const uint64_t _pa = ((c)->sp + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 130d2c: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1248560));
  fn1_1443c0(c);
  /* 130d30: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 130d34: str x0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 0));
  /* 130d38: add x0, sp, #0x3c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(60)));
  /* 130d3c: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* 130d40: add x3, sp, #0x30 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(48)));
  /* 130d44: mov w2, #0x64 */
  ARC_W_W(c, 2, UINT64_C(100));
  /* 130d48: bl #0x1444c8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1248588));
  fn1_1444c8(c);
  /* 130d4c: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 130d50: cbz x24, #0x130d5c */
  if ((ARC_X_R(c, 24)) == 0) goto L_130d5c;
  /* 130d54: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 130d58: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1248604));
  fn1_1443c0(c);
L_130d5c:;
  /* 130d5c: add x8, x23, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* 130d60: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 130d64: b.ls #0x131404 */
  if (ARC_COND(c, 9)) goto L_131404;
  /* 130d68: madd x24, x25, x21, x26 */
  ARC_X_W(c, 24, ((uint64_t)(ARC_X_R(c, 26)) + ((uint64_t)(ARC_X_R(c, 25)) * (uint64_t)(ARC_X_R(c, 21)))));
  /* 130d6c: ldr x9, [x24] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 24)));
  /* 130d70: ldrb w8, [x24] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 24)));
  /* 130d74: and x10, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 130d78: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 130d7c: and w8, w9, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) & UINT64_C(255)));
  /* 130d80: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* 130d84: csel x1, x22, x10, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 22)) : ARC_X_R(c, 10)));
  /* 130d88: subs x2, x23, x1 */
  ARC_X_W(c, 2, arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 1)));
  /* 130d8c: b.ls #0x130dbc */
  if (ARC_COND(c, 9)) goto L_130dbc;
  /* 130d90: ldr x10, [x24, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 24) + INT64_C(8))));
  /* 130d94: ubfx x9, x9, #1, #7 */
  ARC_X_W(c, 9, (((uint64_t)(ARC_X_R(c, 9)) >> 1) & UINT64_C(127)));
  /* 130d98: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 130d9c: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 130da0: mov x4, xzr */
  ARC_X_W(c, 4, ARC_X_R(c, 31));
  /* 130da4: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 130da8: csel x3, x9, x10, eq */
  ARC_X_W(c, 3, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* 130dac: mov x5, x3 */
  ARC_X_W(c, 5, ARC_X_R(c, 3));
  /* 130db0: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1248692));
  fn1_142da0(c);
  /* 130db4: ldrb w8, [x24] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 24)));
  /* 130db8: str xzr, [x24, #8] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(8)), ARC_X_R(c, 31));
L_130dbc:;
  /* 130dbc: ldr x10, [x24, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 24) + INT64_C(16))));
  /* 130dc0: sub x9, x23, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) - UINT64_C(1)));
  /* 130dc4: add x11, x24, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 24) + UINT64_C(4)));
  /* 130dc8: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 130dcc: and x9, x9, #0x3fffffffffffffff */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(4611686018427387903)));
  /* 130dd0: add x8, sp, #0x3c */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(60)));
  /* 130dd4: csel x12, x11, x10, eq */
  ARC_X_W(c, 12, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 130dd8: cmp x9, #7 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(7));
  /* 130ddc: b.lo #0x130e30 */
  if (ARC_COND(c, 3)) goto L_130e30;
  /* 130de0: sub x10, x12, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 12) - ARC_X_R(c, 8)));
  /* 130de4: cmp x10, #0x20 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(32));
  /* 130de8: b.lo #0x130e30 */
  if (ARC_COND(c, 3)) goto L_130e30;
  /* 130dec: add x10, x9, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 130df0: mov x14, x28 */
  ARC_X_W(c, 14, ARC_X_R(c, 28));
  /* 130df4: and x11, x10, #0x7ffffffffffffff8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) & UINT64_C(9223372036854775800)));
  /* 130df8: lsl x8, x11, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 11)) << ((UINT64_C(2)) & 63)));
  /* 130dfc: mov x13, x11 */
  ARC_X_W(c, 13, ARC_X_R(c, 11));
  /* 130e00: add x9, x12, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 12) + ARC_X_R(c, 8)));
  /* 130e04: add x8, x27, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 27) + ARC_X_R(c, 8)));
  /* 130e08: add x12, x12, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(16)));
L_130e0c:;
  /* 130e0c: ldp q0, q1, [x14, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 14) + INT64_C(-16));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 130e10: subs x13, x13, #8 */
  ARC_X_W(c, 13, arc_sub64(c, ARC_X_R(c, 13), UINT64_C(8)));
  /* 130e14: add x14, x14, #0x20 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(32)));
  /* 130e18: stp q0, q1, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 130e1c: add x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(32)));
  /* 130e20: b.ne #0x130e0c */
  if (ARC_COND(c, 1)) goto L_130e0c;
  /* 130e24: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 130e28: mov x12, x9 */
  ARC_X_W(c, 12, ARC_X_R(c, 9));
  /* 130e2c: b.eq #0x130e48 */
  if (ARC_COND(c, 0)) goto L_130e48;
L_130e30:;
  /* 130e30: add x10, x27, x23, lsl #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 27) + ((uint64_t)(ARC_X_R(c, 23)) << 2)));
  /* 130e34: mov x9, x12 */
  ARC_X_W(c, 9, ARC_X_R(c, 12));
L_130e38:;
  /* 130e38: ldr w11, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    ARC_W_W(c, 11, arc_ld32(_a));
  }
  /* 130e3c: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 130e40: str w11, [x9], #4 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 11));
  }
  /* 130e44: b.ne #0x130e38 */
  if (ARC_COND(c, 1)) goto L_130e38;
L_130e48:;
  /* 130e48: str wzr, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 31));
  /* 130e4c: ldrb w8, [x24] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 24)));
  /* 130e50: tbnz w8, #0, #0x130e60 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_130e60;
  /* 130e54: lsl w8, w23, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 23)) << ((UINT64_C(1)) & 31)));
  /* 130e58: strb w8, [x24] */
  arc_st8(ARC_X_R(c, 24), ARC_W_R(c, 8));
  /* 130e5c: b #0x130e64 */
  goto L_130e64;
L_130e60:;
  /* 130e60: str x23, [x24, #8] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(8)), ARC_X_R(c, 23));
L_130e64:;
  /* 130e64: ldr x4, [x19] */
  ARC_X_W(c, 4, arc_ld64(ARC_X_R(c, 19)));
  /* 130e68: sub x0, x29, #0xa4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(164)));
  /* 130e6c: sub x3, x29, #0x40 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 130e70: mov w1, #0x64 */
  ARC_W_W(c, 1, UINT64_C(100));
  /* 130e74: adrp x2, #0x4f000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(323584)));
  /* 130e78: add x2, x2, #0xd44 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(3396)));
  /* 130e7c: bl #0x1444b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1248896));
  fn1_1444b0(c);
  /* 130e80: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* 130e84: stp x20, xzr, [sp, #0x28] */
  { const uint64_t _pa = ((c)->sp + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 130e88: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1248908));
  fn1_1443c0(c);
  /* 130e8c: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 130e90: str x0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 0));
  /* 130e94: add x0, sp, #0x3c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(60)));
  /* 130e98: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* 130e9c: add x3, sp, #0x30 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(48)));
  /* 130ea0: mov w2, #0x64 */
  ARC_W_W(c, 2, UINT64_C(100));
  /* 130ea4: bl #0x1444c8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1248936));
  fn1_1444c8(c);
  /* 130ea8: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 130eac: cbz x24, #0x130eb8 */
  if ((ARC_X_R(c, 24)) == 0) goto L_130eb8;
  /* 130eb0: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 130eb4: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1248952));
  fn1_1443c0(c);
L_130eb8:;
  /* 130eb8: add x8, x23, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* 130ebc: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 130ec0: b.ls #0x131404 */
  if (ARC_COND(c, 9)) goto L_131404;
  /* 130ec4: madd x8, x25, x21, x26 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 26)) + ((uint64_t)(ARC_X_R(c, 25)) * (uint64_t)(ARC_X_R(c, 21)))));
  /* 130ec8: ldr x9, [x8, #0x120] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(288))));
  /* 130ecc: ldrb w10, [x8, #0x120] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(288))));
  /* 130ed0: add x24, x8, #0x120 */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) + UINT64_C(288)));
  /* 130ed4: and x11, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 130ed8: tst w10, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1)));
  /* 130edc: and w8, w9, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) & UINT64_C(255)));
  /* 130ee0: sub x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* 130ee4: csel x1, x22, x11, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 22)) : ARC_X_R(c, 11)));
  /* 130ee8: subs x2, x23, x1 */
  ARC_X_W(c, 2, arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 1)));
  /* 130eec: b.ls #0x130f1c */
  if (ARC_COND(c, 9)) goto L_130f1c;
  /* 130ef0: ldr x10, [x24, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 24) + INT64_C(8))));
  /* 130ef4: ubfx x9, x9, #1, #7 */
  ARC_X_W(c, 9, (((uint64_t)(ARC_X_R(c, 9)) >> 1) & UINT64_C(127)));
  /* 130ef8: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 130efc: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 130f00: mov x4, xzr */
  ARC_X_W(c, 4, ARC_X_R(c, 31));
  /* 130f04: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 130f08: csel x3, x9, x10, eq */
  ARC_X_W(c, 3, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* 130f0c: mov x5, x3 */
  ARC_X_W(c, 5, ARC_X_R(c, 3));
  /* 130f10: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1249044));
  fn1_142da0(c);
  /* 130f14: ldrb w8, [x24] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 24)));
  /* 130f18: str xzr, [x24, #8] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(8)), ARC_X_R(c, 31));
L_130f1c:;
  /* 130f1c: ldr x10, [x24, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 24) + INT64_C(16))));
  /* 130f20: sub x9, x23, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) - UINT64_C(1)));
  /* 130f24: add x11, x24, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 24) + UINT64_C(4)));
  /* 130f28: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 130f2c: and x9, x9, #0x3fffffffffffffff */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(4611686018427387903)));
  /* 130f30: add x8, sp, #0x3c */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(60)));
  /* 130f34: csel x12, x11, x10, eq */
  ARC_X_W(c, 12, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 130f38: cmp x9, #7 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(7));
  /* 130f3c: b.lo #0x130f90 */
  if (ARC_COND(c, 3)) goto L_130f90;
  /* 130f40: sub x10, x12, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 12) - ARC_X_R(c, 8)));
  /* 130f44: cmp x10, #0x20 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(32));
  /* 130f48: b.lo #0x130f90 */
  if (ARC_COND(c, 3)) goto L_130f90;
  /* 130f4c: add x10, x9, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 130f50: mov x14, x28 */
  ARC_X_W(c, 14, ARC_X_R(c, 28));
  /* 130f54: and x11, x10, #0x7ffffffffffffff8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) & UINT64_C(9223372036854775800)));
  /* 130f58: lsl x8, x11, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 11)) << ((UINT64_C(2)) & 63)));
  /* 130f5c: mov x13, x11 */
  ARC_X_W(c, 13, ARC_X_R(c, 11));
  /* 130f60: add x9, x12, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 12) + ARC_X_R(c, 8)));
  /* 130f64: add x8, x27, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 27) + ARC_X_R(c, 8)));
  /* 130f68: add x12, x12, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(16)));
L_130f6c:;
  /* 130f6c: ldp q0, q1, [x14, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 14) + INT64_C(-16));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 130f70: subs x13, x13, #8 */
  ARC_X_W(c, 13, arc_sub64(c, ARC_X_R(c, 13), UINT64_C(8)));
  /* 130f74: add x14, x14, #0x20 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(32)));
  /* 130f78: stp q0, q1, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 130f7c: add x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(32)));
  /* 130f80: b.ne #0x130f6c */
  if (ARC_COND(c, 1)) goto L_130f6c;
  /* 130f84: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 130f88: mov x12, x9 */
  ARC_X_W(c, 12, ARC_X_R(c, 9));
  /* 130f8c: b.eq #0x130fa8 */
  if (ARC_COND(c, 0)) goto L_130fa8;
L_130f90:;
  /* 130f90: add x10, x27, x23, lsl #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 27) + ((uint64_t)(ARC_X_R(c, 23)) << 2)));
  /* 130f94: mov x9, x12 */
  ARC_X_W(c, 9, ARC_X_R(c, 12));
L_130f98:;
  /* 130f98: ldr w11, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    ARC_W_W(c, 11, arc_ld32(_a));
  }
  /* 130f9c: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 130fa0: str w11, [x9], #4 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 11));
  }
  /* 130fa4: b.ne #0x130f98 */
  if (ARC_COND(c, 1)) goto L_130f98;
L_130fa8:;
  /* 130fa8: str wzr, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 31));
  /* 130fac: ldrb w8, [x24] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 24)));
  /* 130fb0: tbz w8, #0, #0x130cf0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_130cf0;
  /* 130fb4: str x23, [x24, #8] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(8)), ARC_X_R(c, 23));
  /* 130fb8: b #0x130cf8 */
  goto L_130cf8;
L_130fbc:;
  /* 130fbc: ldr x4, [x19] */
  ARC_X_W(c, 4, arc_ld64(ARC_X_R(c, 19)));
  /* 130fc0: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 130fc4: nop  */
  /* nop: no architectural effect here */
  /* 130fc8: adr x2, #0x50087 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(327815)));
  /* 130fcc: sub x0, x29, #0xa4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(164)));
  /* 130fd0: sub x3, x29, #0x40 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 130fd4: mov w1, #0x64 */
  ARC_W_W(c, 1, UINT64_C(100));
  /* 130fd8: stur w8, [x29, #-0x38] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-56)), ARC_W_R(c, 8));
  /* 130fdc: sub x20, x29, #0xa4 */
  ARC_X_W(c, 20, (ARC_X_R(c, 29) - UINT64_C(164)));
  /* 130fe0: bl #0x1444b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1249252));
  fn1_1444b0(c);
  /* 130fe4: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* 130fe8: stp x20, xzr, [sp, #0x28] */
  { const uint64_t _pa = ((c)->sp + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 130fec: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1249264));
  fn1_1443c0(c);
  /* 130ff0: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 130ff4: str x0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 0));
  /* 130ff8: add x0, sp, #0x3c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(60)));
  /* 130ffc: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* 131000: add x3, sp, #0x30 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(48)));
  /* 131004: mov w2, #0x64 */
  ARC_W_W(c, 2, UINT64_C(100));
  /* 131008: bl #0x1444c8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1249292));
  fn1_1444c8(c);
  /* 13100c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 131010: cbz x22, #0x13101c */
  if ((ARC_X_R(c, 22)) == 0) goto L_13101c;
  /* 131014: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 131018: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1249308));
  fn1_1443c0(c);
L_13101c:;
  /* 13101c: cmn x21, #1 */
  (void)arc_add64(c, ARC_X_R(c, 21), UINT64_C(1), 0);
  /* 131020: b.eq #0x131404 */
  if (ARC_COND(c, 0)) goto L_131404;
  /* 131024: ldr x8, [x19, #0x398] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(920))));
  /* 131028: ldrb w9, [x19, #0x398] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 19) + INT64_C(920))));
  /* 13102c: and x10, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 131030: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 131034: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 131038: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* 13103c: csel x1, x9, x10, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* 131040: and w9, w8, #0xff */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) & UINT64_C(255)));
  /* 131044: subs x2, x21, x1 */
  ARC_X_W(c, 2, arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 1)));
  /* 131048: b.ls #0x13108c */
  if (ARC_COND(c, 9)) goto L_13108c;
  /* 13104c: ldr x10, [x19, #0x3a0] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(928))));
  /* 131050: ubfx x8, x8, #1, #7 */
  ARC_X_W(c, 8, (((uint64_t)(ARC_X_R(c, 8)) >> 1) & UINT64_C(127)));
  /* 131054: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 131058: add x0, x19, #0x398 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(920)));
  /* 13105c: mov x4, xzr */
  ARC_X_W(c, 4, ARC_X_R(c, 31));
  /* 131060: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 131064: csel x3, x8, x10, eq */
  ARC_X_W(c, 3, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* 131068: mov x5, x3 */
  ARC_X_W(c, 5, ARC_X_R(c, 3));
  /* 13106c: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1249392));
  fn1_142da0(c);
  /* 131070: ldrb w8, [x19, #0x398] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(920))));
  /* 131074: ldr x9, [x19, #0x3a8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(936))));
  /* 131078: add x10, x19, #0x39c */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) + UINT64_C(924)));
  /* 13107c: str xzr, [x19, #0x3a0] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(928)), ARC_X_R(c, 31));
  /* 131080: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 131084: csel x12, x10, x9, eq */
  ARC_X_W(c, 12, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 131088: b #0x1310a4 */
  goto L_1310a4;
L_13108c:;
  /* 13108c: ldr x8, [x19, #0x3a8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(936))));
  /* 131090: add x10, x19, #0x39c */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) + UINT64_C(924)));
  /* 131094: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 131098: csel x12, x10, x8, eq */
  ARC_X_W(c, 12, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* 13109c: mov x9, x12 */
  ARC_X_W(c, 9, ARC_X_R(c, 12));
  /* 1310a0: cbz x21, #0x131128 */
  if ((ARC_X_R(c, 21)) == 0) goto L_131128;
L_1310a4:;
  /* 1310a4: sub x8, x21, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) - UINT64_C(1)));
  /* 1310a8: and x9, x8, #0x3fffffffffffffff */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) & UINT64_C(4611686018427387903)));
  /* 1310ac: add x8, sp, #0x3c */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(60)));
  /* 1310b0: cmp x9, #7 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(7));
  /* 1310b4: b.lo #0x13110c */
  if (ARC_COND(c, 3)) goto L_13110c;
  /* 1310b8: sub x10, x12, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 12) - ARC_X_R(c, 8)));
  /* 1310bc: cmp x10, #0x20 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(32));
  /* 1310c0: b.lo #0x13110c */
  if (ARC_COND(c, 3)) goto L_13110c;
  /* 1310c4: add x10, x9, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 1310c8: add x13, sp, #0x3c */
  ARC_X_W(c, 13, ((c)->sp + UINT64_C(60)));
  /* 1310cc: and x11, x10, #0x7ffffffffffffff8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) & UINT64_C(9223372036854775800)));
  /* 1310d0: lsl x8, x11, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 11)) << ((UINT64_C(2)) & 63)));
  /* 1310d4: mov x14, x11 */
  ARC_X_W(c, 14, ARC_X_R(c, 11));
  /* 1310d8: add x9, x12, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 12) + ARC_X_R(c, 8)));
  /* 1310dc: add x8, x13, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 13) + ARC_X_R(c, 8)));
  /* 1310e0: add x13, x13, #0x10 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(16)));
  /* 1310e4: add x12, x12, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(16)));
L_1310e8:;
  /* 1310e8: ldp q0, q1, [x13, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 13) + INT64_C(-16));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 1310ec: subs x14, x14, #8 */
  ARC_X_W(c, 14, arc_sub64(c, ARC_X_R(c, 14), UINT64_C(8)));
  /* 1310f0: add x13, x13, #0x20 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(32)));
  /* 1310f4: stp q0, q1, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 1310f8: add x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(32)));
  /* 1310fc: b.ne #0x1310e8 */
  if (ARC_COND(c, 1)) goto L_1310e8;
  /* 131100: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 131104: b.ne #0x131110 */
  if (ARC_COND(c, 1)) goto L_131110;
  /* 131108: b #0x131128 */
  goto L_131128;
L_13110c:;
  /* 13110c: mov x9, x12 */
  ARC_X_W(c, 9, ARC_X_R(c, 12));
L_131110:;
  /* 131110: add x10, sp, #0x3c */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(60)));
  /* 131114: add x10, x10, x21, lsl #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 21)) << 2)));
L_131118:;
  /* 131118: ldr w11, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    ARC_W_W(c, 11, arc_ld32(_a));
  }
  /* 13111c: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 131120: str w11, [x9], #4 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 11));
  }
  /* 131124: b.ne #0x131118 */
  if (ARC_COND(c, 1)) goto L_131118;
L_131128:;
  /* 131128: str wzr, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 31));
  /* 13112c: ldrb w8, [x19, #0x398] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(920))));
  /* 131130: tbnz w8, #0, #0x131140 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_131140;
  /* 131134: lsl w8, w21, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 21)) << ((UINT64_C(1)) & 31)));
  /* 131138: strb w8, [x19, #0x398] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(920)), ARC_W_R(c, 8));
  /* 13113c: b #0x131144 */
  goto L_131144;
L_131140:;
  /* 131140: str x21, [x19, #0x3a0] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(928)), ARC_X_R(c, 21));
L_131144:;
  /* 131144: ldr x4, [x19] */
  ARC_X_W(c, 4, arc_ld64(ARC_X_R(c, 19)));
  /* 131148: mov w8, #0xd */
  ARC_W_W(c, 8, UINT64_C(13));
  /* 13114c: nop  */
  /* nop: no architectural effect here */
  /* 131150: adr x2, #0x50087 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(327815)));
  /* 131154: sub x0, x29, #0xa4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(164)));
  /* 131158: sub x3, x29, #0x40 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 13115c: mov w1, #0x64 */
  ARC_W_W(c, 1, UINT64_C(100));
  /* 131160: stur w8, [x29, #-0x38] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-56)), ARC_W_R(c, 8));
  /* 131164: sub x20, x29, #0xa4 */
  ARC_X_W(c, 20, (ARC_X_R(c, 29) - UINT64_C(164)));
  /* 131168: bl #0x1444b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1249644));
  fn1_1444b0(c);
  /* 13116c: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* 131170: stp x20, xzr, [sp, #0x28] */
  { const uint64_t _pa = ((c)->sp + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 131174: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1249656));
  fn1_1443c0(c);
  /* 131178: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 13117c: str x0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 0));
  /* 131180: add x0, sp, #0x3c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(60)));
  /* 131184: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* 131188: add x3, sp, #0x30 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(48)));
  /* 13118c: mov w2, #0x64 */
  ARC_W_W(c, 2, UINT64_C(100));
  /* 131190: bl #0x1444c8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1249684));
  fn1_1444c8(c);
  /* 131194: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 131198: cbz x22, #0x1311a4 */
  if ((ARC_X_R(c, 22)) == 0) goto L_1311a4;
  /* 13119c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1311a0: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1249700));
  fn1_1443c0(c);
L_1311a4:;
  /* 1311a4: cmn x21, #1 */
  (void)arc_add64(c, ARC_X_R(c, 21), UINT64_C(1), 0);
  /* 1311a8: b.eq #0x131404 */
  if (ARC_COND(c, 0)) goto L_131404;
  /* 1311ac: ldr x8, [x19, #0x3b0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(944))));
  /* 1311b0: ldrb w9, [x19, #0x3b0] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 19) + INT64_C(944))));
  /* 1311b4: and x10, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1311b8: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 1311bc: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 1311c0: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* 1311c4: csel x1, x9, x10, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* 1311c8: and w9, w8, #0xff */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) & UINT64_C(255)));
  /* 1311cc: subs x2, x21, x1 */
  ARC_X_W(c, 2, arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 1)));
  /* 1311d0: b.ls #0x131214 */
  if (ARC_COND(c, 9)) goto L_131214;
  /* 1311d4: ldr x10, [x19, #0x3b8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(952))));
  /* 1311d8: ubfx x8, x8, #1, #7 */
  ARC_X_W(c, 8, (((uint64_t)(ARC_X_R(c, 8)) >> 1) & UINT64_C(127)));
  /* 1311dc: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 1311e0: add x0, x19, #0x3b0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(944)));
  /* 1311e4: mov x4, xzr */
  ARC_X_W(c, 4, ARC_X_R(c, 31));
  /* 1311e8: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 1311ec: csel x3, x8, x10, eq */
  ARC_X_W(c, 3, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* 1311f0: mov x5, x3 */
  ARC_X_W(c, 5, ARC_X_R(c, 3));
  /* 1311f4: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1249784));
  fn1_142da0(c);
  /* 1311f8: ldrb w8, [x19, #0x3b0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(944))));
  /* 1311fc: ldr x9, [x19, #0x3c0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(960))));
  /* 131200: add x10, x19, #0x3b4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) + UINT64_C(948)));
  /* 131204: str xzr, [x19, #0x3b8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(952)), ARC_X_R(c, 31));
  /* 131208: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 13120c: csel x12, x10, x9, eq */
  ARC_X_W(c, 12, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 131210: b #0x13122c */
  goto L_13122c;
L_131214:;
  /* 131214: ldr x8, [x19, #0x3c0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(960))));
  /* 131218: add x10, x19, #0x3b4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) + UINT64_C(948)));
  /* 13121c: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 131220: csel x12, x10, x8, eq */
  ARC_X_W(c, 12, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* 131224: mov x9, x12 */
  ARC_X_W(c, 9, ARC_X_R(c, 12));
  /* 131228: cbz x21, #0x1312b0 */
  if ((ARC_X_R(c, 21)) == 0) goto L_1312b0;
L_13122c:;
  /* 13122c: sub x8, x21, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) - UINT64_C(1)));
  /* 131230: and x9, x8, #0x3fffffffffffffff */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) & UINT64_C(4611686018427387903)));
  /* 131234: add x8, sp, #0x3c */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(60)));
  /* 131238: cmp x9, #7 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(7));
  /* 13123c: b.lo #0x131294 */
  if (ARC_COND(c, 3)) goto L_131294;
  /* 131240: sub x10, x12, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 12) - ARC_X_R(c, 8)));
  /* 131244: cmp x10, #0x20 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(32));
  /* 131248: b.lo #0x131294 */
  if (ARC_COND(c, 3)) goto L_131294;
  /* 13124c: add x10, x9, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 131250: add x13, sp, #0x3c */
  ARC_X_W(c, 13, ((c)->sp + UINT64_C(60)));
  /* 131254: and x11, x10, #0x7ffffffffffffff8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) & UINT64_C(9223372036854775800)));
  /* 131258: lsl x8, x11, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 11)) << ((UINT64_C(2)) & 63)));
  /* 13125c: mov x14, x11 */
  ARC_X_W(c, 14, ARC_X_R(c, 11));
  /* 131260: add x9, x12, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 12) + ARC_X_R(c, 8)));
  /* 131264: add x8, x13, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 13) + ARC_X_R(c, 8)));
  /* 131268: add x13, x13, #0x10 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(16)));
  /* 13126c: add x12, x12, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(16)));
L_131270:;
  /* 131270: ldp q0, q1, [x13, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 13) + INT64_C(-16));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 131274: subs x14, x14, #8 */
  ARC_X_W(c, 14, arc_sub64(c, ARC_X_R(c, 14), UINT64_C(8)));
  /* 131278: add x13, x13, #0x20 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(32)));
  /* 13127c: stp q0, q1, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 131280: add x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(32)));
  /* 131284: b.ne #0x131270 */
  if (ARC_COND(c, 1)) goto L_131270;
  /* 131288: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 13128c: b.ne #0x131298 */
  if (ARC_COND(c, 1)) goto L_131298;
  /* 131290: b #0x1312b0 */
  goto L_1312b0;
L_131294:;
  /* 131294: mov x9, x12 */
  ARC_X_W(c, 9, ARC_X_R(c, 12));
L_131298:;
  /* 131298: add x10, sp, #0x3c */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(60)));
  /* 13129c: add x10, x10, x21, lsl #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 21)) << 2)));
L_1312a0:;
  /* 1312a0: ldr w11, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    ARC_W_W(c, 11, arc_ld32(_a));
  }
  /* 1312a4: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 1312a8: str w11, [x9], #4 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 11));
  }
  /* 1312ac: b.ne #0x1312a0 */
  if (ARC_COND(c, 1)) goto L_1312a0;
L_1312b0:;
  /* 1312b0: str wzr, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 31));
  /* 1312b4: ldrb w8, [x19, #0x3b0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(944))));
  /* 1312b8: tbnz w8, #0, #0x1312c8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1312c8;
  /* 1312bc: lsl w8, w21, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 21)) << ((UINT64_C(1)) & 31)));
  /* 1312c0: strb w8, [x19, #0x3b0] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(944)), ARC_W_R(c, 8));
  /* 1312c4: b #0x1312cc */
  goto L_1312cc;
L_1312c8:;
  /* 1312c8: str x21, [x19, #0x3b8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(952)), ARC_X_R(c, 21));
L_1312cc:;
  /* 1312cc: ldr x21, [sp, #8] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1312d0: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* 1312d4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1312d8: mov w1, #0x63 */
  ARC_W_W(c, 1, UINT64_C(99));
  /* 1312dc: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1312e0: bl #0x143c10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1250020));
  fn1_143c10(c);
  /* 1312e4: ldrb w8, [x19, #0x3c8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(968))));
  /* 1312e8: add x20, x19, #0x3c8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 19) + UINT64_C(968)));
  /* 1312ec: tbz w8, #0, #0x131304 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_131304;
  /* 1312f0: ldr x8, [x19, #0x3c8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(968))));
  /* 1312f4: ldr x0, [x19, #0x3d8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(984))));
  /* 1312f8: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 1312fc: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 131300: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1250052));
  fn1_142608(c);
L_131304:;
  /* 131304: ldr x8, [sp, #0x20] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
  /* 131308: ldr q0, [sp, #0x10] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(16))), arc_ld64(((c)->sp + INT64_C(16)) + 8));
  /* 13130c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 131310: mov w1, #0x72 */
  ARC_W_W(c, 1, UINT64_C(114));
  /* 131314: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 131318: str x8, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 8));
  /* 13131c: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* 131320: str q0, [x20] */
  arc_st64(ARC_X_R(c, 20), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 20) + 8, (c)->q[0].u64[1]);
  /* 131324: bl #0x143c10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1250088));
  fn1_143c10(c);
  /* 131328: ldrb w8, [x19, #0x3e0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(992))));
  /* 13132c: add x20, x19, #0x3e0 */
  ARC_X_W(c, 20, (ARC_X_R(c, 19) + UINT64_C(992)));
  /* 131330: tbz w8, #0, #0x131348 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_131348;
  /* 131334: ldr x8, [x19, #0x3e0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(992))));
  /* 131338: ldr x0, [x19, #0x3f0] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(1008))));
  /* 13133c: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 131340: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 131344: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1250120));
  fn1_142608(c);
L_131348:;
  /* 131348: ldr x8, [sp, #0x20] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
  /* 13134c: ldr q0, [sp, #0x10] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(16))), arc_ld64(((c)->sp + INT64_C(16)) + 8));
  /* 131350: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 131354: mov w1, #0x78 */
  ARC_W_W(c, 1, UINT64_C(120));
  /* 131358: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 13135c: str x8, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 8));
  /* 131360: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* 131364: str q0, [x20] */
  arc_st64(ARC_X_R(c, 20), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 20) + 8, (c)->q[0].u64[1]);
  /* 131368: bl #0x143c10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1250156));
  fn1_143c10(c);
  /* 13136c: ldrb w8, [x19, #0x3f8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(1016))));
  /* 131370: add x20, x19, #0x3f8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 19) + UINT64_C(1016)));
  /* 131374: tbz w8, #0, #0x13138c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13138c;
  /* 131378: ldr x8, [x19, #0x3f8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(1016))));
  /* 13137c: ldr x0, [x19, #0x408] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(1032))));
  /* 131380: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 131384: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 131388: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1250188));
  fn1_142608(c);
L_13138c:;
  /* 13138c: ldr x8, [sp, #0x20] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
  /* 131390: ldr q0, [sp, #0x10] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(16))), arc_ld64(((c)->sp + INT64_C(16)) + 8));
  /* 131394: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 131398: mov w1, #0x58 */
  ARC_W_W(c, 1, UINT64_C(88));
  /* 13139c: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1313a0: str x8, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 8));
  /* 1313a4: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* 1313a8: str q0, [x20] */
  arc_st64(ARC_X_R(c, 20), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 20) + 8, (c)->q[0].u64[1]);
  /* 1313ac: bl #0x143c10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1250224));
  fn1_143c10(c);
  /* 1313b0: ldrb w8, [x19, #0x410] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(1040))));
  /* 1313b4: add x20, x19, #0x410 */
  ARC_X_W(c, 20, (ARC_X_R(c, 19) + UINT64_C(1040)));
  /* 1313b8: tbz w8, #0, #0x1313d0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1313d0;
  /* 1313bc: ldr x8, [x19, #0x410] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(1040))));
  /* 1313c0: ldr x0, [x19, #0x420] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(1056))));
  /* 1313c4: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 1313c8: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 1313cc: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1250256));
  fn1_142608(c);
L_1313d0:;
  /* 1313d0: ldr q0, [sp, #0x10] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(16))), arc_ld64(((c)->sp + INT64_C(16)) + 8));
  /* 1313d4: ldr x8, [sp, #0x20] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1313d8: str q0, [x20] */
  arc_st64(ARC_X_R(c, 20), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 20) + 8, (c)->q[0].u64[1]);
  /* 1313dc: str x8, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 8));
  /* 1313e0: add sp, sp, #0x270 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(624)));
  /* 1313e4: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1313e8: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1313ec: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1313f0: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 1313f4: ldp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 1313f8: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1313fc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 131400: ret  */
  return;
L_131404:;
  /* 131404: adrp x0, #0x4f000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(323584)));
  /* 131408: add x0, x0, #0x7a1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1953)));
  /* 13140c: bl #0x142c98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1250320));
  fn1_142c98(c);
  /* 131410: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1250324));
  fn1_a1454(c);
  /* 131414: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1250328));
  fn1_a1454(c);
  /* 131418: b #0x13143c */
  goto L_13143c;
  /* 13141c: b #0x13143c */
  goto L_13143c;
  /* 131420: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1250340));
  fn1_a1454(c);
  /* 131424: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1250344));
  fn1_a1454(c);
  /* 131428: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1250348));
  fn1_a1454(c);
  /* 13142c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1250352));
  fn1_a1454(c);
  /* 131430: b #0x13143c */
  goto L_13143c;
  /* 131434: b #0x13143c */
  goto L_13143c;
  /* 131438: b #0x13143c */
  goto L_13143c;
L_13143c:;
  /* 13143c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 131440: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 131444: bl #0x135428 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1250376));
  fn1_135428(c);
  /* 131448: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13144c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1250384));
  fn1_9cc20(c);
}

void fn1_134b60(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192416));
  /* 134b60: bti c */
  /* bti: no architectural effect here */
  /* 134b64: add x0, x0, #0x410 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1040)));
  /* 134b68: ret  */
  return;
}

void fn1_136860(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039199840));
  /* 136860: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 136864: sub sp, sp, #0x120 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(288)));
  /* 136868: stp x29, x30, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13686c: str x28, [sp, #0xf0] */
  arc_st64(((c)->sp + INT64_C(240)), ARC_X_R(c, 28));
  /* 136870: stp x22, x21, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 136874: stp x20, x19, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 136878: add x29, sp, #0xe0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(224)));
  /* 13687c: mov x8, #-0x20 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551584));
  /* 136880: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* 136884: sub x10, x29, #0x60 */
  ARC_X_W(c, 10, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 136888: movk x8, #0xff80, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(280925220896768)));
  /* 13688c: add x9, x9, #0x80 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(128)));
  /* 136890: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 136894: stp x9, x8, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 136898: add x8, x10, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + UINT64_C(32)));
  /* 13689c: add x9, x29, #0x40 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) + UINT64_C(64)));
  /* 1368a0: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 1368a4: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* 1368a8: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1368ac: stp x4, x5, [x29, #-0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-96));
    arc_st64(_pa, ARC_X_R(c, 4));
    arc_st64(_pa + 8, ARC_X_R(c, 5));
  }
  /* 1368b0: stp x6, x7, [x29, #-0x50] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-80));
    arc_st64(_pa, ARC_X_R(c, 6));
    arc_st64(_pa + 8, ARC_X_R(c, 7));
  }
  /* 1368b4: stp q0, q1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 1368b8: stp q2, q3, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, (c)->q[2].u64[0]);
    arc_st64(_pa + 8, (c)->q[2].u64[1]);
    arc_st64((_pa + 16), (c)->q[3].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[3].u64[1]);
  }
  /* 1368bc: stp q4, q5, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, (c)->q[4].u64[0]);
    arc_st64(_pa + 8, (c)->q[4].u64[1]);
    arc_st64((_pa + 16), (c)->q[5].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[5].u64[1]);
  }
  /* 1368c0: stp q6, q7, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, (c)->q[6].u64[0]);
    arc_st64(_pa + 8, (c)->q[6].u64[1]);
    arc_st64((_pa + 16), (c)->q[7].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[7].u64[1]);
  }
  /* 1368c4: stp x9, x8, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 1368c8: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1272012));
  fn1_1443c0(c);
  /* 1368cc: ldp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 1368d0: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1368d4: sub x3, x29, #0x40 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 1368d8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1368dc: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1368e0: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 1368e4: stp q0, q1, [x29, #-0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-64));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 1368e8: bl #0x142b00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1272044));
  fn1_142b00(c);
  /* 1368ec: mov w19, w0 */
  ARC_W_W(c, 19, ARC_W_R(c, 0));
  /* 1368f0: cbz x22, #0x1368fc */
  if ((ARC_X_R(c, 22)) == 0) goto L_1368fc;
  /* 1368f4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1368f8: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1272060));
  fn1_1443c0(c);
L_1368fc:;
  /* 1368fc: mov w0, w19 */
  ARC_W_W(c, 0, ARC_W_R(c, 19));
  /* 136900: ldp x20, x19, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 136904: ldr x28, [sp, #0xf0] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(240))));
  /* 136908: ldp x22, x21, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 13690c: ldp x29, x30, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 136910: add sp, sp, #0x120 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(288)));
  /* 136914: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 136918: ret  */
  return;
  /* 13691c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1272096));
  fn1_a1454(c);
}

void fn1_139560(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039211360));
  /* 139560: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 139564: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 139568: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* 13956c: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 139570: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 139574: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 139578: mov w0, #0x60 */
  ARC_W_W(c, 0, UINT64_C(96));
  /* 13957c: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 139580: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* 139584: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 139588: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1283468));
  fn1_1428f0(c);
  /* 13958c: ldrb w8, [x23] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 23)));
  /* 139590: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 139594: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 139598: add x9, x9, #0x5a8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1448)));
  /* 13959c: add x21, x0, #0x18 */
  ARC_X_W(c, 21, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* 1395a0: stp xzr, xzr, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1395a4: str x9, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 9));
  /* 1395a8: tbnz w8, #0, #0x1395c0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1395c0;
  /* 1395ac: ldr q0, [x23] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 23)), arc_ld64(ARC_X_R(c, 23) + 8));
  /* 1395b0: ldr x8, [x23, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 23) + INT64_C(16))));
  /* 1395b4: str q0, [x21] */
  arc_st64(ARC_X_R(c, 21), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 21) + 8, (c)->q[0].u64[1]);
  /* 1395b8: str x8, [x21, #0x10] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(16)), ARC_X_R(c, 8));
  /* 1395bc: b #0x1395cc */
  goto L_1395cc;
L_1395c0:;
  /* 1395c0: ldp x2, x1, [x23, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(8));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 1395c4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1395c8: bl #0xda588 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1283532));
  fn1_da588(c);
L_1395cc:;
  /* 1395cc: ldrb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 1395d0: tbnz w8, #0, #0x1395e8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1395e8;
  /* 1395d4: ldr q0, [x22] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 22)), arc_ld64(ARC_X_R(c, 22) + 8));
  /* 1395d8: ldr x8, [x22, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 1395dc: stur q0, [x19, #0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)) + 8, (c)->q[0].u64[1]);
  /* 1395e0: stur x8, [x19, #0x40] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(64)), ARC_X_R(c, 8));
  /* 1395e4: b #0x1395f4 */
  goto L_1395f4;
L_1395e8:;
  /* 1395e8: ldp x2, x1, [x22, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 22) + INT64_C(8));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 1395ec: add x0, x19, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(48)));
  /* 1395f0: bl #0xda588 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1283572));
  fn1_da588(c);
L_1395f4:;
  /* 1395f4: stp xzr, xzr, [x19, #0x48] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(72));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1395f8: str xzr, [x19, #0x58] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(88)), ARC_X_R(c, 31));
  /* 1395fc: stp x21, x19, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 139600: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 139604: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 139608: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 13960c: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 139610: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 139614: ret  */
  return;
  /* 139618: ldrb w8, [x21] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 21)));
  /* 13961c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 139620: tbz w8, #0, #0x13963c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13963c;
  /* 139624: ldr x8, [x19, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* 139628: ldr x0, [x19, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(40))));
  /* 13962c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 139630: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1283636));
  fn1_142608(c);
  /* 139634: b #0x13963c */
  goto L_13963c;
  /* 139638: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_13963c:;
  /* 13963c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 139640: mov w1, #0x60 */
  ARC_W_W(c, 1, UINT64_C(96));
  /* 139644: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1283656));
  fn1_142608(c);
  /* 139648: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13964c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1283664));
  fn1_9cc20(c);
}

void fn1_13fae4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039237348));
  /* 13fae4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13fae8: sub sp, sp, #0xf0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(240)));
  /* 13faec: stp x29, x30, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13faf0: str x19, [sp, #0xe0] */
  arc_st64(((c)->sp + INT64_C(224)), ARC_X_R(c, 19));
  /* 13faf4: add x29, sp, #0xd0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(208)));
  /* 13faf8: adrp x8, #0x51000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(331776)));
  /* 13fafc: add x8, x8, #0x1ed */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(493)));
  /* 13fb00: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13fb04: stp x8, x1, [x29, #-0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-48));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 13fb08: nop  */
  /* nop: no architectural effect here */
  /* 13fb0c: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13fb10: stp x0, xzr, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13fb14: cbz x1, #0x13fb34 */
  if ((ARC_X_R(c, 1)) == 0) goto L_13fb34;
  /* 13fb18: str wzr, [x1] */
  arc_st32(ARC_X_R(c, 1), ARC_W_R(c, 31));
  /* 13fb1c: nop  */
  /* nop: no architectural effect here */
  /* 13fb20: adr x9, #0x159210 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13fb24: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 13fb28: tbz w9, #0, #0x13fbe4 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_13fbe4;
L_13fb2c:;
  /* 13fb2c: str x8, [x1, #8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(8)), ARC_X_R(c, 8));
  /* 13fb30: b #0x13fb44 */
  goto L_13fb44;
L_13fb34:;
  /* 13fb34: nop  */
  /* nop: no architectural effect here */
  /* 13fb38: adr x9, #0x159210 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13fb3c: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 13fb40: tbz w9, #0, #0x13fc20 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_13fc20;
L_13fb44:;
  /* 13fb44: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 13fb48: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 13fb4c: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 13fb50: stur wzr, [x29, #-0x40] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-64)), ARC_W_R(c, 31));
  /* 13fb54: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 13fb58: stur x8, [x29, #-0x38] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-56)), ARC_X_R(c, 8));
  /* 13fb5c: csinc x0, x10, x19, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 19)) + 1)));
  /* 13fb60: stur wzr, [x29, #-0x10] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-16)), ARC_W_R(c, 31));
  /* 13fb64: stur x8, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 8));
  /* 13fb68: bl #0x144588 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1309548));
  fn1_144588(c);
  /* 13fb6c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 13fb70: b.ne #0x13fb98 */
  if (ARC_COND(c, 1)) goto L_13fb98;
  /* 13fb74: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1309560));
  fn1_142a58(c);
  /* 13fb78: nop  */
  /* nop: no architectural effect here */
  /* 13fb7c: adr x9, #0x159208 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13fb80: ldr w8, [x0] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 0)));
  /* 13fb84: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 13fb88: tbz w9, #0, #0x13fc50 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_13fc50;
L_13fb8c:;
  /* 13fb8c: nop  */
  /* nop: no architectural effect here */
  /* 13fb90: adr x9, #0x156d38 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13fb94: stp x8, x9, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
L_13fb98:;
  /* 13fb98: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 13fb9c: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 13fba0: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 13fba4: sub x3, x29, #0x40 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 13fba8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 13fbac: bl #0x1388e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1309616));
  fn1_1388e8(c);
  /* 13fbb0: ldur w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 13fbb4: cbz w8, #0x13fbcc */
  if ((ARC_W_R(c, 8)) == 0) goto L_13fbcc;
  /* 13fbb8: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13fbbc: sub x1, x29, #0x40 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 13fbc0: bl #0x13f9d4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1309636));
  fn1_13f9d4(c);
  /* 13fbc4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 13fbc8: b #0x13fbd0 */
  goto L_13fbd0;
L_13fbcc:;
  /* 13fbcc: ldr w0, [sp, #0x24] */
  ARC_W_W(c, 0, arc_ld32(((c)->sp + INT64_C(36))));
L_13fbd0:;
  /* 13fbd0: ldp x29, x30, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13fbd4: ldr x19, [sp, #0xe0] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(224))));
  /* 13fbd8: add sp, sp, #0xf0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(240)));
  /* 13fbdc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13fbe0: ret  */
  return;
L_13fbe4:;
  /* 13fbe4: nop  */
  /* nop: no architectural effect here */
  /* 13fbe8: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13fbec: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 13fbf0: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1309684));
  fn1_1424b8(c);
  /* 13fbf4: ldr x1, [sp, #8] */
  ARC_X_W(c, 1, arc_ld64(((c)->sp + INT64_C(8))));
  /* 13fbf8: nop  */
  /* nop: no architectural effect here */
  /* 13fbfc: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13fc00: cbz w0, #0x13fb2c */
  if ((ARC_W_R(c, 0)) == 0) goto L_13fb2c;
  /* 13fc04: nop  */
  /* nop: no architectural effect here */
  /* 13fc08: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13fc0c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1309712));
  fn1_1424d0(c);
  /* 13fc10: ldr x1, [sp, #8] */
  ARC_X_W(c, 1, arc_ld64(((c)->sp + INT64_C(8))));
  /* 13fc14: nop  */
  /* nop: no architectural effect here */
  /* 13fc18: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13fc1c: b #0x13fb2c */
  goto L_13fb2c;
L_13fc20:;
  /* 13fc20: nop  */
  /* nop: no architectural effect here */
  /* 13fc24: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13fc28: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1309740));
  fn1_1424b8(c);
  /* 13fc2c: nop  */
  /* nop: no architectural effect here */
  /* 13fc30: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13fc34: cbz w0, #0x13fb44 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13fb44;
  /* 13fc38: nop  */
  /* nop: no architectural effect here */
  /* 13fc3c: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13fc40: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1309764));
  fn1_1424d0(c);
  /* 13fc44: nop  */
  /* nop: no architectural effect here */
  /* 13fc48: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13fc4c: b #0x13fb44 */
  goto L_13fb44;
L_13fc50:;
  /* 13fc50: nop  */
  /* nop: no architectural effect here */
  /* 13fc54: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13fc58: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* 13fc5c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1309792));
  fn1_1424b8(c);
  /* 13fc60: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 13fc64: cbz w0, #0x13fb8c */
  if ((ARC_W_R(c, 0)) == 0) goto L_13fb8c;
  /* 13fc68: nop  */
  /* nop: no architectural effect here */
  /* 13fc6c: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13fc70: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1309812));
  fn1_1424d0(c);
  /* 13fc74: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 13fc78: b #0x13fb8c */
  goto L_13fb8c;
}

void fn1_142788(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248776));
  /* 142788: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 14278c: ldr x17, [x16, #0xfb8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(4024))));
  /* 142790: add x16, x16, #0xfb8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(4024)));
  /* 142794: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142798: nop  */
  /* nop: no architectural effect here */
  /* 14279c: nop  */
  /* nop: no architectural effect here */
}

void fn1_142d88(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250312));
  /* 142d88: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142d8c: ldr x17, [x16, #0x1b8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(440))));
  /* 142d90: add x16, x16, #0x1b8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(440)));
  /* 142d94: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142d98: nop  */
  /* nop: no architectural effect here */
  /* 142d9c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143388(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251848));
  /* 143388: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14338c: ldr x17, [x16, #0x3b8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(952))));
  /* 143390: add x16, x16, #0x3b8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(952)));
  /* 143394: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143398: nop  */
  /* nop: no architectural effect here */
  /* 14339c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143988(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253384));
  /* 143988: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14398c: ldr x17, [x16, #0x5b8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1464))));
  /* 143990: add x16, x16, #0x5b8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1464)));
  /* 143994: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143998: nop  */
  /* nop: no architectural effect here */
  /* 14399c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143f88(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254920));
  /* 143f88: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143f8c: ldr x17, [x16, #0x7b8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1976))));
  /* 143f90: add x16, x16, #0x7b8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1976)));
  /* 143f94: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143f98: nop  */
  /* nop: no architectural effect here */
  /* 143f9c: nop  */
  /* nop: no architectural effect here */
}

void fn1_144588(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256456));
  /* 144588: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14458c: ldr x17, [x16, #0x9b8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2488))));
  /* 144590: add x16, x16, #0x9b8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2488)));
  /* 144594: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144598: nop  */
  /* nop: no architectural effect here */
  /* 14459c: nop  */
  /* nop: no architectural effect here */
}

