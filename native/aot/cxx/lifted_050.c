#include "lifted.h"

void fn1_a00b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038583480));
  /* a00b8: bti c */
  /* bti: no architectural effect here */
  /* a00bc: ldrh w8, [x0, #0x18] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(24))));
  /* a00c0: cbz x8, #0xa0120 */
  if ((ARC_X_R(c, 8)) == 0) goto L_a0120;
  /* a00c4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a00c8: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* a00cc: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a00d0: str x25, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 25));
  /* a00d4: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* a00d8: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a00dc: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a00e0: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* a00e4: ldr x9, [x2, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 2) + INT64_C(16))));
  /* a00e8: ldr x21, [x0] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 0)));
  /* a00ec: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a00f0: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* a00f4: cmp x9, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 21));
  /* a00f8: b.hs #0xa0128 */
  if (ARC_COND(c, 2)) goto L_a0128;
L_a00fc:;
  /* a00fc: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
L_a0100:;
  /* a0100: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a0104: ldr x25, [sp, #0x30] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(48))));
  /* a0108: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a010c: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* a0110: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a0114: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* a0118: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a011c: ret  */
  return;
L_a0120:;
  /* a0120: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* a0124: ret  */
  return;
L_a0128:;
  /* a0128: ldr x10, [x20, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* a012c: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
  /* a0130: b #0xa0140 */
  goto L_a0140;
L_a0134:;
  /* a0134: subs x11, x11, #1 */
  ARC_X_W(c, 11, arc_sub64(c, ARC_X_R(c, 11), UINT64_C(1)));
  /* a0138: add x10, x10, #0x38 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(56)));
  /* a013c: b.eq #0xa00fc */
  if (ARC_COND(c, 0)) goto L_a00fc;
L_a0140:;
  /* a0140: ldr w12, [x10] */
  ARC_W_W(c, 12, arc_ld32(ARC_X_R(c, 10)));
  /* a0144: cmp w12, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(1));
  /* a0148: b.ne #0xa0134 */
  if (ARC_COND(c, 1)) goto L_a0134;
  /* a014c: ldr x12, [x10, #0x10] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 10) + INT64_C(16))));
  /* a0150: add x12, x12, x21 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + ARC_X_R(c, 21)));
  /* a0154: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* a0158: b.lo #0xa0134 */
  if (ARC_COND(c, 3)) goto L_a0134;
  /* a015c: ldr x13, [x10, #0x28] */
  ARC_X_W(c, 13, arc_ld64((ARC_X_R(c, 10) + INT64_C(40))));
  /* a0160: add x14, x13, x12 */
  ARC_X_W(c, 14, (ARC_X_R(c, 13) + ARC_X_R(c, 12)));
  /* a0164: cmp x9, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 14));
  /* a0168: b.hs #0xa0134 */
  if (ARC_COND(c, 2)) goto L_a0134;
  /* a016c: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* a0170: mov w10, #-1 */
  ARC_W_W(c, 10, UINT64_C(18446744073709551615));
  /* a0174: mov w25, #0xe550 */
  ARC_W_W(c, 25, UINT64_C(58704));
  /* a0178: add x22, x8, x10 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) + ARC_X_R(c, 10)));
  /* a017c: sub x23, x8, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* a0180: mov w24, #0x38 */
  ARC_W_W(c, 24, UINT64_C(56));
  /* a0184: movk w25, #0x6474, lsl #16 */
  ARC_W_W(c, 25, ((ARC_W_R(c, 25) & UINT64_C(18446744069414649855)) | UINT64_C(1685323776)));
  /* a0188: stp x12, x13, [x9] */
  { const uint64_t _pa = ARC_X_R(c, 9);
    arc_st64(_pa, ARC_X_R(c, 12));
    arc_st64(_pa + 8, ARC_X_R(c, 13));
  }
  /* a018c: b #0xa01a0 */
  goto L_a01a0;
L_a0190:;
  /* a0190: and x8, x23, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) & UINT64_C(65535)));
  /* a0194: sub x22, x22, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) - UINT64_C(1)));
  /* a0198: sub x23, x23, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) - UINT64_C(1)));
  /* a019c: cbz x8, #0xa00fc */
  if ((ARC_X_R(c, 8)) == 0) goto L_a00fc;
L_a01a0:;
  /* a01a0: ldr x8, [x20, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* a01a4: nop  */
  /* nop: no architectural effect here */
  /* a01a8: umaddl x8, w22, w24, x8 */
  ARC_X_W(c, 8, (((uint64_t)(ARC_X_R(c, 8))) + (((uint64_t)(uint32_t)(ARC_W_R(c, 22))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 24))))));
  /* a01ac: ldr w9, [x8] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 8)));
  /* a01b0: cmp w9, w25 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 25));
  /* a01b4: b.ne #0xa0190 */
  if (ARC_COND(c, 1)) goto L_a0190;
  /* a01b8: ldr x9, [x8, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* a01bc: ldp x0, x10, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 0, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* a01c0: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* a01c4: mov x3, sp */
  ARC_X_W(c, 3, (c)->sp);
  /* a01c8: add x1, x9, x21 */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) + ARC_X_R(c, 21)));
  /* a01cc: add x2, x8, x1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) + ARC_X_R(c, 1)));
  /* a01d0: stp x1, x8, [x10, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 10) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* a01d4: bl #0xa01f4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(655832));
  fn1_a01f4(c);
  /* a01d8: tbz w0, #0, #0xa0190 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_a0190;
  /* a01dc: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* a01e0: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* a01e4: mov x10, #-1 */
  ARC_X_W(c, 10, UINT64_C(18446744073709551615));
  /* a01e8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* a01ec: stp x8, x10, [x9, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* a01f0: b #0xa0100 */
  goto L_a0100;
}

void fn1_a2154(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038591828));
  /* a2154: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a2158: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a215c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* a2160: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a2164: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a2168: bl #0x142638 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(663916));
  fn1_142638(c);
  /* a216c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a2170: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* a2174: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* a2178: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a217c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a2180: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_a6c18(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038610968));
L_a6c18:;
  /* a6c18: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a6c1c: sub sp, sp, #0x110 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(272)));
  /* a6c20: stp x29, x30, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a6c24: stp x28, x27, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* a6c28: stp x26, x25, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* a6c2c: stp x24, x23, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* a6c30: stp x22, x21, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a6c34: stp x20, x19, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a6c38: add x29, sp, #0xb0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(176)));
  /* a6c3c: ldp x10, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* a6c40: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a6c44: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* a6c48: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* a6c4c: b.eq #0xa6ca0 */
  if (ARC_COND(c, 0)) goto L_a6ca0;
  /* a6c50: ldrb w8, [x10] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 10)));
  /* a6c54: cmp w8, #0x5a */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(90));
  /* a6c58: b.eq #0xa6d24 */
  if (ARC_COND(c, 0)) goto L_a6d24;
  /* a6c5c: cmp w8, #0x4e */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(78));
  /* a6c60: b.ne #0xa6ca0 */
  if (ARC_COND(c, 1)) goto L_a6ca0;
  /* a6c64: add x8, x10, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* a6c68: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a6c6c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a6c70: b.eq #0xa6dac */
  if (ARC_COND(c, 0)) goto L_a6dac;
  /* a6c74: ldrb w11, [x8] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 8)));
  /* a6c78: cmp w11, #0x48 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(72));
  /* a6c7c: b.eq #0xa6e34 */
  if (ARC_COND(c, 0)) goto L_a6e34;
  /* a6c80: cmp w11, #0x72 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(114));
  /* a6c84: b.ne #0xa6dac */
  if (ARC_COND(c, 1)) goto L_a6dac;
  /* a6c88: add x8, x10, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + UINT64_C(2)));
  /* a6c8c: mov w10, #4 */
  ARC_W_W(c, 10, UINT64_C(4));
  /* a6c90: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a6c94: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a6c98: b.ne #0xa6db8 */
  if (ARC_COND(c, 1)) goto L_a6db8;
  /* a6c9c: b #0xa6dd0 */
  goto L_a6dd0;
L_a6ca0:;
  /* a6ca0: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* a6ca4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a6ca8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* a6cac: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* a6cb0: bl #0xa8e18 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(683188));
  fn1_a8e18(c);
  /* a6cb4: cbz x0, #0xa72a4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a72a4;
  /* a6cb8: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* a6cbc: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* a6cc0: b.eq #0xa6d14 */
  if (ARC_COND(c, 0)) goto L_a6d14;
  /* a6cc4: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* a6cc8: cmp w8, #0x49 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(73));
  /* a6ccc: b.ne #0xa6d14 */
  if (ARC_COND(c, 1)) goto L_a6d14;
  /* a6cd0: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* a6cd4: tbnz w8, #0, #0xa7240 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_a7240;
  /* a6cd8: ldp x23, x8, [x19, #0x130] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(304));
    ARC_X_W(c, 23, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* a6cdc: cmp x23, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* a6ce0: b.ne #0xa7238 */
  if (ARC_COND(c, 1)) goto L_a7238;
  /* a6ce4: ldr x22, [x19, #0x128] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(296))));
  /* a6ce8: add x25, x19, #0x140 */
  ARC_X_W(c, 25, (ARC_X_R(c, 19) + UINT64_C(320)));
  /* a6cec: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* a6cf0: sub x21, x23, x22 */
  ARC_X_W(c, 21, (ARC_X_R(c, 23) - ARC_X_R(c, 22)));
  /* a6cf4: cmp x22, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 25));
  /* a6cf8: lsl x1, x21, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 21)) << ((UINT64_C(1)) & 63)));
  /* a6cfc: b.eq #0xa71f8 */
  if (ARC_COND(c, 0)) goto L_a71f8;
  /* a6d00: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* a6d04: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(683272));
  fn1_142878(c);
  /* a6d08: str x0, [x19, #0x128] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(296)), ARC_X_R(c, 0));
  /* a6d0c: cbnz x0, #0xa7224 */
  if ((ARC_X_R(c, 0)) != 0) goto L_a7224;
  /* a6d10: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(683284));
  fn1_1427b8(c);
L_a6d14:;
  /* a6d14: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* a6d18: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* a6d1c: csel x21, xzr, x0, ne */
  ARC_X_W(c, 21, (ARC_COND(c, 1) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 0)));
  /* a6d20: b #0xa72a8 */
  goto L_a72a8;
L_a6d24:;
  /* a6d24: add x8, x10, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* a6d28: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a6d2c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a6d30: bl #0xa46ec */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(683316));
  fn1_a46ec(c);
  /* a6d34: stur x0, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 0));
  /* a6d38: cbz x0, #0xa72a4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a72a4;
  /* a6d3c: ldp x8, x1, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* a6d40: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* a6d44: b.eq #0xa72a4 */
  if (ARC_COND(c, 0)) goto L_a72a4;
  /* a6d48: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* a6d4c: cmp w9, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(69));
  /* a6d50: b.ne #0xa72a4 */
  if (ARC_COND(c, 1)) goto L_a72a4;
  /* a6d54: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a6d58: cmp x9, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 1));
  /* a6d5c: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* a6d60: b.eq #0xa7140 */
  if (ARC_COND(c, 0)) goto L_a7140;
  /* a6d64: ldrb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* a6d68: cmp w9, #0x73 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(115));
  /* a6d6c: b.ne #0xa7140 */
  if (ARC_COND(c, 1)) goto L_a7140;
  /* a6d70: add x0, x8, #2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* a6d74: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* a6d78: bl #0xb7dd8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(683388));
  fn1_b7dd8(c);
  /* a6d7c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* a6d80: adrp x1, #0x50000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(327680)));
  /* a6d84: add x1, x1, #0xed0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3792)));
  /* a6d88: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a6d8c: bl #0xb7e88 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(683408));
  fn1_b7e88(c);
  /* a6d90: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* a6d94: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* a6d98: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* a6d9c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a6da0: bl #0xb7f34 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(683428));
  fn1_b7f34(c);
  /* a6da4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a6da8: b #0xa72a8 */
  goto L_a72a8;
L_a6dac:;
  /* a6dac: mov w10, wzr */
  ARC_W_W(c, 10, ARC_W_R(c, 31));
  /* a6db0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a6db4: b.eq #0xa6dd0 */
  if (ARC_COND(c, 0)) goto L_a6dd0;
L_a6db8:;
  /* a6db8: ldrb w11, [x8] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 8)));
  /* a6dbc: cmp w11, #0x56 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(86));
  /* a6dc0: b.ne #0xa6dd0 */
  if (ARC_COND(c, 1)) goto L_a6dd0;
  /* a6dc4: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a6dc8: orr w10, w10, #2 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(2)));
  /* a6dcc: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_a6dd0:;
  /* a6dd0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a6dd4: b.eq #0xa6df0 */
  if (ARC_COND(c, 0)) goto L_a6df0;
  /* a6dd8: ldrb w11, [x8] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 8)));
  /* a6ddc: cmp w11, #0x4b */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(75));
  /* a6de0: b.ne #0xa6df0 */
  if (ARC_COND(c, 1)) goto L_a6df0;
  /* a6de4: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a6de8: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* a6dec: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_a6df0:;
  /* a6df0: cbz x20, #0xa6df8 */
  if ((ARC_X_R(c, 20)) == 0) goto L_a6df8;
  /* a6df4: str w10, [x20, #4] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(4)), ARC_W_R(c, 10));
L_a6df8:;
  /* a6df8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a6dfc: b.eq #0xa6e28 */
  if (ARC_COND(c, 0)) goto L_a6e28;
  /* a6e00: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* a6e04: cmp w10, #0x52 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(82));
  /* a6e08: b.eq #0xa6e4c */
  if (ARC_COND(c, 0)) goto L_a6e4c;
  /* a6e0c: cmp w10, #0x4f */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(79));
  /* a6e10: b.ne #0xa6e28 */
  if (ARC_COND(c, 1)) goto L_a6e28;
  /* a6e14: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a6e18: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a6e1c: cbz x20, #0xa6e64 */
  if ((ARC_X_R(c, 20)) == 0) goto L_a6e64;
  /* a6e20: mov w10, #2 */
  ARC_W_W(c, 10, UINT64_C(2));
  /* a6e24: b #0xa6e5c */
  goto L_a6e5c;
L_a6e28:;
  /* a6e28: cbz x20, #0xa6e64 */
  if ((ARC_X_R(c, 20)) == 0) goto L_a6e64;
  /* a6e2c: mov w10, wzr */
  ARC_W_W(c, 10, ARC_W_R(c, 31));
  /* a6e30: b #0xa6e5c */
  goto L_a6e5c;
L_a6e34:;
  /* a6e34: add x8, x10, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + UINT64_C(2)));
  /* a6e38: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a6e3c: cbz x20, #0xa6e64 */
  if ((ARC_X_R(c, 20)) == 0) goto L_a6e64;
  /* a6e40: mov w10, #1 */
  ARC_W_W(c, 10, UINT64_C(1));
  /* a6e44: mov w11, #0x18 */
  ARC_W_W(c, 11, UINT64_C(24));
  /* a6e48: b #0xa6e60 */
  goto L_a6e60;
L_a6e4c:;
  /* a6e4c: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a6e50: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a6e54: cbz x20, #0xa6e64 */
  if ((ARC_X_R(c, 20)) == 0) goto L_a6e64;
  /* a6e58: mov w10, #1 */
  ARC_W_W(c, 10, UINT64_C(1));
L_a6e5c:;
  /* a6e5c: mov w11, #8 */
  ARC_W_W(c, 11, UINT64_C(8));
L_a6e60:;
  /* a6e60: strb w10, [x20, x11] */
  arc_st8((ARC_X_R(c, 20) + ARC_X_R(c, 11)), ARC_W_R(c, 10));
L_a6e64:;
  /* a6e64: mov x21, xzr */
  ARC_X_W(c, 21, ARC_X_R(c, 31));
  /* a6e68: add x25, x19, #0x140 */
  ARC_X_W(c, 25, (ARC_X_R(c, 19) + UINT64_C(320)));
  /* a6e6c: adrp x26, #0x14b000 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1355776)));
  /* a6e70: add x26, x26, #0xd10 */
  ARC_X_W(c, 26, (ARC_X_R(c, 26) + UINT64_C(3344)));
  /* a6e74: mov w28, #0x2d */
  ARC_W_W(c, 28, UINT64_C(45));
  /* a6e78: mov w27, #0x540 */
  ARC_W_W(c, 27, UINT64_C(1344));
L_a6e7c:;
  /* a6e7c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a6e80: b.eq #0xa6e90 */
  if (ARC_COND(c, 0)) goto L_a6e90;
  /* a6e84: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* a6e88: cmp w10, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(69));
  /* a6e8c: b.eq #0xa711c */
  if (ARC_COND(c, 0)) goto L_a711c;
L_a6e90:;
  /* a6e90: cbz x20, #0xa6e98 */
  if ((ARC_X_R(c, 20)) == 0) goto L_a6e98;
  /* a6e94: strb wzr, [x20, #1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(1)), ARC_W_R(c, 31));
L_a6e98:;
  /* a6e98: subs x9, x9, x8 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8)));
  /* a6e9c: b.eq #0xa6f9c */
  if (ARC_COND(c, 0)) goto L_a6f9c;
  /* a6ea0: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* a6ea4: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* a6ea8: cmp w10, #0x52 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(82));
  /* a6eac: b.gt #0xa6f54 */
  if (ARC_COND(c, 12)) goto L_a6f54;
  /* a6eb0: cmp w10, #0x44 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(68));
  /* a6eb4: b.eq #0xa6f74 */
  if (ARC_COND(c, 0)) goto L_a6f74;
  /* a6eb8: cmp w10, #0x49 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(73));
  /* a6ebc: b.ne #0xa6fa0 */
  if (ARC_COND(c, 1)) goto L_a6fa0;
  /* a6ec0: cbz x21, #0xa72a8 */
  if ((ARC_X_R(c, 21)) == 0) goto L_a72a8;
  /* a6ec4: cmp x20, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(0));
  /* a6ec8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a6ecc: cset w1, ne */
  ARC_W_W(c, 1, (ARC_COND(c, 1) ? 1 : 0));
  /* a6ed0: bl #0xa8f88 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(683732));
  fn1_a8f88(c);
  /* a6ed4: cbz x0, #0xa72a4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a72a4;
  /* a6ed8: ldrb w8, [x21, #8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 21) + INT64_C(8))));
  /* a6edc: cmp w8, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(45));
  /* a6ee0: b.eq #0xa72a4 */
  if (ARC_COND(c, 0)) goto L_a72a4;
  /* a6ee4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* a6ee8: cbz x20, #0xa6ef4 */
  if ((ARC_X_R(c, 20)) == 0) goto L_a6ef4;
  /* a6eec: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* a6ef0: strb w8, [x20, #1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(1)), ARC_W_R(c, 8));
L_a6ef4:;
  /* a6ef4: ldr x23, [x19, #0x1330] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* a6ef8: ldr x8, [x23, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* a6efc: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* a6f00: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a6f04: b.hi #0xa6f24 */
  if (ARC_COND(c, 8)) goto L_a6f24;
  /* a6f08: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a6f0c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(683792));
  fn1_1428a8(c);
  /* a6f10: cbz x0, #0xa7318 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a7318;
  /* a6f14: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a6f18: stp x23, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a6f1c: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* a6f20: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_a6f24:;
  /* a6f24: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* a6f28: add x8, x23, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) + ARC_X_R(c, 8)));
  /* a6f2c: str x9, [x23, #8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(8)), ARC_X_R(c, 9));
  /* a6f30: str x26, [x8, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(16));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 26));
  }
  /* a6f34: ldurh w9, [x8, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 8) + INT64_C(9))));
  /* a6f38: stp x21, x22, [x8, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* a6f3c: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* a6f40: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* a6f44: strb w28, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 28));
  /* a6f48: orr w9, w9, w27 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 27)));
  /* a6f4c: sturh w9, [x8, #9] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(9)), ARC_W_R(c, 9));
  /* a6f50: b #0xa6fb8 */
  goto L_a6fb8;
L_a6f54:;
  /* a6f54: cmp w10, #0x53 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(83));
  /* a6f58: b.eq #0xa6fec */
  if (ARC_COND(c, 0)) goto L_a6fec;
  /* a6f5c: cmp w10, #0x54 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(84));
  /* a6f60: b.ne #0xa6fa0 */
  if (ARC_COND(c, 1)) goto L_a6fa0;
  /* a6f64: cbnz x21, #0xa72a4 */
  if ((ARC_X_R(c, 21)) != 0) goto L_a72a4;
  /* a6f68: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a6f6c: bl #0xa94fc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(683888));
  fn1_a94fc(c);
  /* a6f70: b #0xa6fb0 */
  goto L_a6fb0;
L_a6f74:;
  /* a6f74: cmp x9, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(2));
  /* a6f78: b.lo #0xa6f9c */
  if (ARC_COND(c, 3)) goto L_a6f9c;
  /* a6f7c: ldrb w8, [x8, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(1))));
  /* a6f80: orr w8, w8, #0x20 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(32)));
  /* a6f84: cmp w8, #0x74 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(116));
  /* a6f88: b.ne #0xa6f9c */
  if (ARC_COND(c, 1)) goto L_a6f9c;
  /* a6f8c: cbnz x21, #0xa72a4 */
  if ((ARC_X_R(c, 21)) != 0) goto L_a72a4;
  /* a6f90: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a6f94: bl #0xa9898 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(683928));
  fn1_a9898(c);
  /* a6f98: b #0xa6fb0 */
  goto L_a6fb0;
L_a6f9c:;
  /* a6f9c: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
L_a6fa0:;
  /* a6fa0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a6fa4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* a6fa8: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* a6fac: bl #0xa9c94 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(683952));
  fn1_a9c94(c);
L_a6fb0:;
  /* a6fb0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a6fb4: cbz x0, #0xa72a8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a72a8;
L_a6fb8:;
  /* a6fb8: ldp x24, x8, [x19, #0x130] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(304));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* a6fbc: cmp x24, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* a6fc0: b.ne #0xa70b8 */
  if (ARC_COND(c, 1)) goto L_a70b8;
  /* a6fc4: ldr x23, [x19, #0x128] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 19) + INT64_C(296))));
  /* a6fc8: sub x22, x24, x23 */
  ARC_X_W(c, 22, (ARC_X_R(c, 24) - ARC_X_R(c, 23)));
  /* a6fcc: cmp x23, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 25));
  /* a6fd0: lsl x1, x22, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 22)) << ((UINT64_C(1)) & 63)));
  /* a6fd4: b.eq #0xa707c */
  if (ARC_COND(c, 0)) goto L_a707c;
  /* a6fd8: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* a6fdc: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(684000));
  fn1_142878(c);
  /* a6fe0: str x0, [x19, #0x128] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(296)), ARC_X_R(c, 0));
  /* a6fe4: cbnz x0, #0xa70a8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_a70a8;
  /* a6fe8: b #0xa7310 */
  goto L_a7310;
L_a6fec:;
  /* a6fec: cmp x9, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(2));
  /* a6ff0: b.lo #0xa70f0 */
  if (ARC_COND(c, 3)) goto L_a70f0;
  /* a6ff4: ldrb w9, [x8, #1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(1))));
  /* a6ff8: cmp w9, #0x74 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(116));
  /* a6ffc: b.ne #0xa70f0 */
  if (ARC_COND(c, 1)) goto L_a70f0;
  /* a7000: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* a7004: ldr x22, [x19, #0x1330] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* a7008: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a700c: ldr x8, [x22, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* a7010: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* a7014: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a7018: b.hi #0xa7038 */
  if (ARC_COND(c, 8)) goto L_a7038;
  /* a701c: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a7020: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(684068));
  fn1_1428a8(c);
  /* a7024: cbz x0, #0xa7318 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a7318;
  /* a7028: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a702c: stp x22, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a7030: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* a7034: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_a7038:;
  /* a7038: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* a703c: add x3, x22, x8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* a7040: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a7044: add x8, x8, #0xc10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3088)));
  /* a7048: str x9, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 9));
  /* a704c: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* a7050: str x8, [x3, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 3) + INT64_C(16));
    ARC_X_W(c, 3, ARC_X_R(c, 3) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a7054: ldurh w8, [x3, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 3) + INT64_C(9))));
  /* a7058: strb w9, [x3, #8] */
  arc_st8((ARC_X_R(c, 3) + INT64_C(8)), ARC_W_R(c, 9));
  /* a705c: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* a7060: orr w8, w8, w27 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 27)));
  /* a7064: sturh w8, [x3, #9] */
  arc_st16((ARC_X_R(c, 3) + INT64_C(9)), ARC_W_R(c, 8));
  /* a7068: adrp x8, #0x51000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(331776)));
  /* a706c: add x9, x8, #0x857 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(2135)));
  /* a7070: mov w8, #3 */
  ARC_W_W(c, 8, UINT64_C(3));
  /* a7074: stp x9, x8, [x3, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 3) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* a7078: b #0xa710c */
  goto L_a710c;
L_a707c:;
  /* a707c: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* a7080: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(684164));
  fn1_1428a8(c);
  /* a7084: cbz x0, #0xa7314 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a7314;
  /* a7088: cmp x24, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 25));
  /* a708c: b.eq #0xa70a4 */
  if (ARC_COND(c, 0)) goto L_a70a4;
  /* a7090: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* a7094: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* a7098: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* a709c: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(684192));
  fn1_1449f0(c);
  /* a70a0: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
L_a70a4:;
  /* a70a4: str x0, [x19, #0x128] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(296)), ARC_X_R(c, 0));
L_a70a8:;
  /* a70a8: asr x8, x22, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 22)) >> ((UINT64_C(2)) & 63))));
  /* a70ac: add x24, x0, x22 */
  ARC_X_W(c, 24, (ARC_X_R(c, 0) + ARC_X_R(c, 22)));
  /* a70b0: add x8, x0, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* a70b4: str x8, [x19, #0x138] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(312)), ARC_X_R(c, 8));
L_a70b8:;
  /* a70b8: str x21, [x24], #8 */
  { const uint64_t _a = ARC_X_R(c, 24);
    ARC_X_W(c, 24, ARC_X_R(c, 24) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* a70bc: ldp x8, x10, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* a70c0: str x24, [x19, #0x130] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(304)), ARC_X_R(c, 24));
  /* a70c4: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* a70c8: mov x9, x8 */
  ARC_X_W(c, 9, ARC_X_R(c, 8));
  /* a70cc: b.eq #0xa6e7c */
  if (ARC_COND(c, 0)) goto L_a6e7c;
  /* a70d0: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* a70d4: cmp w9, #0x4d */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(77));
  /* a70d8: mov x9, x10 */
  ARC_X_W(c, 9, ARC_X_R(c, 10));
  /* a70dc: b.ne #0xa6e7c */
  if (ARC_COND(c, 1)) goto L_a6e7c;
  /* a70e0: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a70e4: mov x9, x10 */
  ARC_X_W(c, 9, ARC_X_R(c, 10));
  /* a70e8: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a70ec: b #0xa6e7c */
  goto L_a6e7c;
L_a70f0:;
  /* a70f0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a70f4: bl #0xa99c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(684280));
  fn1_a99c0(c);
  /* a70f8: cbz x0, #0xa72a4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a72a4;
  /* a70fc: ldrb w8, [x0, #8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(8))));
  /* a7100: mov x3, x0 */
  ARC_X_W(c, 3, ARC_X_R(c, 0));
  /* a7104: cmp w8, #0x1b */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(27));
  /* a7108: b.eq #0xa6fa0 */
  if (ARC_COND(c, 0)) goto L_a6fa0;
L_a710c:;
  /* a710c: cbnz x21, #0xa72a4 */
  if ((ARC_X_R(c, 21)) != 0) goto L_a72a4;
  /* a7110: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* a7114: mov x21, x3 */
  ARC_X_W(c, 21, ARC_X_R(c, 3));
  /* a7118: b #0xa6e7c */
  goto L_a6e7c;
L_a711c:;
  /* a711c: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a7120: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a7124: cbz x21, #0xa72a8 */
  if ((ARC_X_R(c, 21)) == 0) goto L_a72a8;
  /* a7128: ldp x9, x8, [x19, #0x128] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(296));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* a712c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* a7130: b.eq #0xa72a4 */
  if (ARC_COND(c, 0)) goto L_a72a4;
  /* a7134: sub x8, x8, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(8)));
  /* a7138: str x8, [x19, #0x130] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(304)), ARC_X_R(c, 8));
  /* a713c: b #0xa72a8 */
  goto L_a72a8;
L_a7140:;
  /* a7140: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* a7144: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* a7148: bl #0xa6a54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(684364));
  fn1_a6a54(c);
  /* a714c: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* a7150: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a7154: b.eq #0xa71b0 */
  if (ARC_COND(c, 0)) goto L_a71b0;
  /* a7158: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* a715c: cmp w9, #0x64 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(100));
  /* a7160: b.ne #0xa71b0 */
  if (ARC_COND(c, 1)) goto L_a71b0;
  /* a7164: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a7168: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a716c: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* a7170: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a7174: bl #0xa5170 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(684408));
  fn1_a5170(c);
  /* a7178: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* a717c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a7180: b.eq #0xa71e8 */
  if (ARC_COND(c, 0)) goto L_a71e8;
  /* a7184: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* a7188: cmp w9, #0x5f */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(95));
  /* a718c: b.ne #0xa71e8 */
  if (ARC_COND(c, 1)) goto L_a71e8;
  /* a7190: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a7194: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a7198: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a719c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* a71a0: bl #0xa6c18 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(684452));
  fn1_a6c18(c);
  /* a71a4: str x0, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 0));
  /* a71a8: cbnz x0, #0xa71d0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_a71d0;
  /* a71ac: b #0xa71e8 */
  goto L_a71e8;
L_a71b0:;
  /* a71b0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a71b4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* a71b8: bl #0xa6c18 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(684476));
  fn1_a6c18(c);
  /* a71bc: str x0, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 0));
  /* a71c0: cbz x0, #0xa71e8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a71e8;
  /* a71c4: ldp x0, x1, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 0, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* a71c8: bl #0xb7dd8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(684492));
  fn1_b7dd8(c);
  /* a71cc: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
L_a71d0:;
  /* a71d0: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* a71d4: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* a71d8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a71dc: bl #0xb7f34 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(684512));
  fn1_b7f34(c);
  /* a71e0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a71e4: b #0xa71ec */
  goto L_a71ec;
L_a71e8:;
  /* a71e8: mov x21, xzr */
  ARC_X_W(c, 21, ARC_X_R(c, 31));
L_a71ec:;
  /* a71ec: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* a71f0: bl #0xa7940 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(684532));
  fn1_a7940(c);
  /* a71f4: b #0xa72a8 */
  goto L_a72a8;
L_a71f8:;
  /* a71f8: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* a71fc: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(684544));
  fn1_1428a8(c);
  /* a7200: cbz x0, #0xa731c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a731c;
  /* a7204: cmp x23, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 25));
  /* a7208: b.eq #0xa7220 */
  if (ARC_COND(c, 0)) goto L_a7220;
  /* a720c: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* a7210: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* a7214: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* a7218: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(684572));
  fn1_1449f0(c);
  /* a721c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
L_a7220:;
  /* a7220: str x0, [x19, #0x128] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(296)), ARC_X_R(c, 0));
L_a7224:;
  /* a7224: asr x8, x21, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 21)) >> ((UINT64_C(2)) & 63))));
  /* a7228: add x23, x0, x21 */
  ARC_X_W(c, 23, (ARC_X_R(c, 0) + ARC_X_R(c, 21)));
  /* a722c: add x8, x0, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* a7230: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* a7234: str x8, [x19, #0x138] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(312)), ARC_X_R(c, 8));
L_a7238:;
  /* a7238: str x0, [x23], #8 */
  { const uint64_t _a = ARC_X_R(c, 23);
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 0));
  }
  /* a723c: str x23, [x19, #0x130] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(304)), ARC_X_R(c, 23));
L_a7240:;
  /* a7240: cmp x20, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(0));
  /* a7244: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a7248: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a724c: cset w1, ne */
  ARC_W_W(c, 1, (ARC_COND(c, 1) ? 1 : 0));
  /* a7250: bl #0xa8f88 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(684628));
  fn1_a8f88(c);
  /* a7254: cbz x0, #0xa72a4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a72a4;
  /* a7258: cbz x20, #0xa7264 */
  if ((ARC_X_R(c, 20)) == 0) goto L_a7264;
  /* a725c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* a7260: strb w8, [x20, #1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(1)), ARC_W_R(c, 8));
L_a7264:;
  /* a7264: ldr x20, [x19, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* a7268: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* a726c: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* a7270: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a7274: b.hi #0xa72d0 */
  if (ARC_COND(c, 8)) goto L_a72d0;
  /* a7278: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* a727c: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a7280: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(684676));
  fn1_1428a8(c);
  /* a7284: cbz x0, #0xa7318 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a7318;
  /* a7288: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a728c: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a7290: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a7294: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
  /* a7298: mov x9, x21 */
  ARC_X_W(c, 9, ARC_X_R(c, 21));
  /* a729c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* a72a0: b #0xa72d4 */
  goto L_a72d4;
L_a72a4:;
  /* a72a4: mov x21, xzr */
  ARC_X_W(c, 21, ARC_X_R(c, 31));
L_a72a8:;
  /* a72a8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* a72ac: ldp x20, x19, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a72b0: ldp x22, x21, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a72b4: ldp x24, x23, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* a72b8: ldp x26, x25, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* a72bc: ldp x28, x27, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* a72c0: ldp x29, x30, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a72c4: add sp, sp, #0x110 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(272)));
  /* a72c8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a72cc: ret  */
  return;
L_a72d0:;
  /* a72d0: mov x9, x21 */
  ARC_X_W(c, 9, ARC_X_R(c, 21));
L_a72d4:;
  /* a72d4: add x10, x8, #0x20 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* a72d8: add x21, x20, x8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* a72dc: adrp x8, #0x14b000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1355776)));
  /* a72e0: add x8, x8, #0xd10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3344)));
  /* a72e4: str x10, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 10));
  /* a72e8: mov w11, #0x540 */
  ARC_W_W(c, 11, UINT64_C(1344));
  /* a72ec: str x8, [x21, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a72f0: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* a72f4: mov w10, #0x2d */
  ARC_W_W(c, 10, UINT64_C(45));
  /* a72f8: stp x9, x0, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* a72fc: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* a7300: strb w10, [x21, #8] */
  arc_st8((ARC_X_R(c, 21) + INT64_C(8)), ARC_W_R(c, 10));
  /* a7304: orr w8, w8, w11 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 11)));
  /* a7308: sturh w8, [x21, #9] */
  arc_st16((ARC_X_R(c, 21) + INT64_C(9)), ARC_W_R(c, 8));
  /* a730c: b #0xa72a8 */
  goto L_a72a8;
L_a7310:;
  /* a7310: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(684820));
  fn1_1427b8(c);
L_a7314:;
  /* a7314: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(684824));
  fn1_1427b8(c);
L_a7318:;
  /* a7318: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(684828));
  fn1_142488(c);
L_a731c:;
  /* a731c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(684832));
  fn1_1427b8(c);
  /* a7320: b #0xa7324 */
  goto L_a7324;
L_a7324:;
  /* a7324: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a7328: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* a732c: bl #0xa7940 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(684848));
  fn1_a7940(c);
  /* a7330: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a7334: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(684856));
  fn1_9cc20(c);
}

void fn1_ac08c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038632588));
  /* ac08c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ac090: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* ac094: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ac098: str x21, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 21));
  /* ac09c: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ac0a0: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* ac0a4: ldp x9, x10, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* ac0a8: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* ac0ac: b.eq #0xac194 */
  if (ARC_COND(c, 0)) goto L_ac194;
  /* ac0b0: ldrb w8, [x9] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 9)));
  /* ac0b4: cmp w8, #0x4c */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(76));
  /* ac0b8: b.ne #0xac194 */
  if (ARC_COND(c, 1)) goto L_ac194;
  /* ac0bc: add x11, x9, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* ac0c0: subs x12, x10, x11 */
  ARC_X_W(c, 12, arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11)));
  /* ac0c4: str x11, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 11));
  /* ac0c8: b.eq #0xac13c */
  if (ARC_COND(c, 0)) goto L_ac13c;
  /* ac0cc: ldrb w8, [x11] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 11)));
  /* ac0d0: sub w13, w8, #0x41 */
  ARC_W_W(c, 13, (ARC_W_R(c, 8) - UINT64_C(65)));
  /* ac0d4: cmp w13, #0x38 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(56));
  /* ac0d8: b.hi #0xac13c */
  if (ARC_COND(c, 8)) goto L_ac13c;
  /* ac0dc: nop  */
  /* nop: no architectural effect here */
  /* ac0e0: adr x14, #0x5324c */
  ARC_X_W(c, 14, (arc_image_bases[1] + UINT64_C(340556)));
  /* ac0e4: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ac0e8: adr x15, #0xac0f8 */
  ARC_X_W(c, 15, (arc_image_bases[1] + UINT64_C(704760)));
  /* ac0ec: ldrh w16, [x14, x13, lsl #1] */
  ARC_W_W(c, 16, arc_ld16((ARC_X_R(c, 14) + ((uint64_t)(ARC_X_R(c, 13)) << 1))));
  /* ac0f0: add x15, x15, x16, lsl #2 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + ((uint64_t)(ARC_X_R(c, 16)) << 2)));
  /* ac0f4: br x15 */
  switch (ARC_X_R(c, 15) - arc_image_bases[1]) {
    case UINT64_C(704760): goto L_ac0f8;
    case UINT64_C(704828): goto L_ac13c;
    case UINT64_C(705536): goto L_ac400;
    case UINT64_C(704920): goto L_ac198;
    case UINT64_C(705868): goto L_ac54c;
    case UINT64_C(705660): goto L_ac47c;
    case UINT64_C(705820): goto L_ac51c;
    case UINT64_C(705960): goto L_ac5a8;
    case UINT64_C(706044): goto L_ac5fc;
    case UINT64_C(706332): goto L_ac71c;
    case UINT64_C(706116): goto L_ac644;
    case UINT64_C(705128): goto L_ac268;
    case UINT64_C(705844): goto L_ac534;
    case UINT64_C(705772): goto L_ac4ec;
    case UINT64_C(705108): goto L_ac254;
    case UINT64_C(706068): goto L_ac614;
    case UINT64_C(706092): goto L_ac62c;
    case UINT64_C(706988): goto L_ac9ac;
    case UINT64_C(706964): goto L_ac994;
    case UINT64_C(705060): goto L_ac224;
    case UINT64_C(705796): goto L_ac504;
    case UINT64_C(707012): goto L_ac9c4;
    case UINT64_C(705084): goto L_ac23c;
    case UINT64_C(705748): goto L_ac4d4;
    case UINT64_C(706820): goto L_ac904;
    default: break;
  }
  arc_dispatch(c, ARC_X_R(c, 15)); return;
L_ac0f8:;
  /* ac0f8: bti j */
  /* bti: no architectural effect here */
  /* ac0fc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ac100: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(704772));
  fn1_a52b0(c);
  /* ac104: str x0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 0));
  /* ac108: cbz x0, #0xac194 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ac194;
  /* ac10c: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ac110: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ac114: b.eq #0xac194 */
  if (ARC_COND(c, 0)) goto L_ac194;
  /* ac118: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* ac11c: cmp w9, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(69));
  /* ac120: b.ne #0xac194 */
  if (ARC_COND(c, 1)) goto L_ac194;
  /* ac124: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ac128: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* ac12c: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* ac130: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* ac134: bl #0xb0e24 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(704824));
  fn1_b0e24(c);
  /* ac138: b #0xaca08 */
  goto L_aca08;
L_ac13c:;
  /* ac13c: bti j */
  /* bti: no architectural effect here */
  /* ac140: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ac144: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(704840));
  fn1_a52b0(c);
  /* ac148: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* ac14c: cbz x0, #0xac194 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ac194;
  /* ac150: ldp x10, x11, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* ac154: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ac158: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* ac15c: mov x9, x10 */
  ARC_X_W(c, 9, ARC_X_R(c, 10));
  /* ac160: b.eq #0xac17c */
  if (ARC_COND(c, 0)) goto L_ac17c;
  /* ac164: ldrb w8, [x10] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 10)));
  /* ac168: mov x9, x10 */
  ARC_X_W(c, 9, ARC_X_R(c, 10));
  /* ac16c: cmp w8, #0x6e */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(110));
  /* ac170: b.ne #0xac17c */
  if (ARC_COND(c, 1)) goto L_ac17c;
  /* ac174: add x9, x10, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* ac178: str x9, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 9));
L_ac17c:;
  /* ac17c: cmp x11, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 9));
  /* ac180: b.eq #0xac194 */
  if (ARC_COND(c, 0)) goto L_ac194;
  /* ac184: ldrb w8, [x9] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 9)));
  /* ac188: sub w8, w8, #0x3a */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(58)));
  /* ac18c: cmn w8, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(10), 0);
  /* ac190: b.hs #0xac1b8 */
  if (ARC_COND(c, 2)) goto L_ac1b8;
L_ac194:;
  /* ac194: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
L_ac198:;
  /* ac198: bti j */
  /* bti: no architectural effect here */
  /* ac19c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* ac1a0: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ac1a4: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* ac1a8: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ac1ac: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* ac1b0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ac1b4: ret  */
  return;
L_ac1b8:;
  /* ac1b8: ldrb w8, [x9] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 9)));
  /* ac1bc: sub w8, w8, #0x3a */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(58)));
  /* ac1c0: cmn w8, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(10), 0);
  /* ac1c4: b.lo #0xac1e0 */
  if (ARC_COND(c, 3)) goto L_ac1e0;
  /* ac1c8: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* ac1cc: cmp x9, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 11));
  /* ac1d0: str x9, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 9));
  /* ac1d4: b.ne #0xac1b8 */
  if (ARC_COND(c, 1)) goto L_ac1b8;
  /* ac1d8: mov x12, x11 */
  ARC_X_W(c, 12, ARC_X_R(c, 11));
  /* ac1dc: b #0xac1e4 */
  goto L_ac1e4;
L_ac1e0:;
  /* ac1e0: mov x12, x9 */
  ARC_X_W(c, 12, ARC_X_R(c, 9));
L_ac1e4:;
  /* ac1e4: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ac1e8: sub x13, x12, x10 */
  ARC_X_W(c, 13, (ARC_X_R(c, 12) - ARC_X_R(c, 10)));
  /* ac1ec: cmp x9, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 11));
  /* ac1f0: stp x10, x13, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 13));
  }
  /* ac1f4: b.eq #0xac198 */
  if (ARC_COND(c, 0)) goto L_ac198;
  /* ac1f8: cmp x12, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 10));
  /* ac1fc: b.eq #0xac198 */
  if (ARC_COND(c, 0)) goto L_ac198;
  /* ac200: ldrb w8, [x9] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 9)));
  /* ac204: cmp w8, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(69));
  /* ac208: b.ne #0xac194 */
  if (ARC_COND(c, 1)) goto L_ac194;
  /* ac20c: add x8, x9, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* ac210: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* ac214: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* ac218: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* ac21c: bl #0xb1790 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(705056));
  fn1_b1790(c);
  /* ac220: b #0xaca08 */
  goto L_aca08;
L_ac224:;
  /* ac224: bti j */
  /* bti: no architectural effect here */
  /* ac228: add x8, x9, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* ac22c: adrp x1, #0x50000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(327680)));
  /* ac230: add x1, x1, #0x97a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2426)));
  /* ac234: mov w2, #5 */
  ARC_W_W(c, 2, UINT64_C(5));
  /* ac238: b #0xac9d8 */
  goto L_ac9d8;
L_ac23c:;
  /* ac23c: bti j */
  /* bti: no architectural effect here */
  /* ac240: add x8, x9, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* ac244: adrp x1, #0x50000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(327680)));
  /* ac248: add x1, x1, #0x7cb */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1995)));
  /* ac24c: mov w2, #2 */
  ARC_W_W(c, 2, UINT64_C(2));
  /* ac250: b #0xac9d8 */
  goto L_ac9d8;
L_ac254:;
  /* ac254: bti j */
  /* bti: no architectural effect here */
  /* ac258: add x8, x9, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* ac25c: adrp x1, #0x52000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(335872)));
  /* ac260: add x1, x1, #0x309 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(777)));
  /* ac264: b #0xac624 */
  goto L_ac624;
L_ac268:;
  /* ac268: bti j */
  /* bti: no architectural effect here */
  /* ac26c: add x19, x9, #2 */
  ARC_X_W(c, 19, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* ac270: sub x8, x10, x19 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) - ARC_X_R(c, 19)));
  /* ac274: str x19, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 19));
  /* ac278: cmp x8, #9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(9));
  /* ac27c: b.lo #0xac194 */
  if (ARC_COND(c, 3)) goto L_ac194;
  /* ac280: ldrb w8, [x9, #2] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + INT64_C(2))));
  /* ac284: sub w11, w8, #0x30 */
  ARC_W_W(c, 11, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* ac288: cmp w11, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(10));
  /* ac28c: b.lo #0xac29c */
  if (ARC_COND(c, 3)) goto L_ac29c;
  /* ac290: sub w8, w8, #0x61 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(97)));
  /* ac294: cmp w8, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(5));
  /* ac298: b.hi #0xac194 */
  if (ARC_COND(c, 8)) goto L_ac194;
L_ac29c:;
  /* ac29c: ldrb w8, [x9, #3] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + INT64_C(3))));
  /* ac2a0: sub w11, w8, #0x30 */
  ARC_W_W(c, 11, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* ac2a4: cmp w11, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(10));
  /* ac2a8: b.lo #0xac2b8 */
  if (ARC_COND(c, 3)) goto L_ac2b8;
  /* ac2ac: sub w8, w8, #0x61 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(97)));
  /* ac2b0: cmp w8, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(5));
  /* ac2b4: b.hi #0xac194 */
  if (ARC_COND(c, 8)) goto L_ac194;
L_ac2b8:;
  /* ac2b8: ldrb w8, [x9, #4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + INT64_C(4))));
  /* ac2bc: sub w11, w8, #0x30 */
  ARC_W_W(c, 11, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* ac2c0: cmp w11, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(10));
  /* ac2c4: b.lo #0xac2d4 */
  if (ARC_COND(c, 3)) goto L_ac2d4;
  /* ac2c8: sub w8, w8, #0x61 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(97)));
  /* ac2cc: cmp w8, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(5));
  /* ac2d0: b.hi #0xac194 */
  if (ARC_COND(c, 8)) goto L_ac194;
L_ac2d4:;
  /* ac2d4: ldrb w8, [x9, #5] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + INT64_C(5))));
  /* ac2d8: sub w11, w8, #0x30 */
  ARC_W_W(c, 11, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* ac2dc: cmp w11, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(10));
  /* ac2e0: b.lo #0xac2f0 */
  if (ARC_COND(c, 3)) goto L_ac2f0;
  /* ac2e4: sub w8, w8, #0x61 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(97)));
  /* ac2e8: cmp w8, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(5));
  /* ac2ec: b.hi #0xac194 */
  if (ARC_COND(c, 8)) goto L_ac194;
L_ac2f0:;
  /* ac2f0: ldrb w8, [x9, #6] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + INT64_C(6))));
  /* ac2f4: sub w11, w8, #0x30 */
  ARC_W_W(c, 11, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* ac2f8: cmp w11, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(10));
  /* ac2fc: b.lo #0xac30c */
  if (ARC_COND(c, 3)) goto L_ac30c;
  /* ac300: sub w8, w8, #0x61 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(97)));
  /* ac304: cmp w8, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(5));
  /* ac308: b.hi #0xac194 */
  if (ARC_COND(c, 8)) goto L_ac194;
L_ac30c:;
  /* ac30c: ldrb w8, [x9, #7] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + INT64_C(7))));
  /* ac310: sub w11, w8, #0x30 */
  ARC_W_W(c, 11, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* ac314: cmp w11, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(10));
  /* ac318: b.lo #0xac328 */
  if (ARC_COND(c, 3)) goto L_ac328;
  /* ac31c: sub w8, w8, #0x61 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(97)));
  /* ac320: cmp w8, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(5));
  /* ac324: b.hi #0xac194 */
  if (ARC_COND(c, 8)) goto L_ac194;
L_ac328:;
  /* ac328: ldrb w8, [x9, #8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + INT64_C(8))));
  /* ac32c: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* ac330: sub w11, w8, #0x30 */
  ARC_W_W(c, 11, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* ac334: cmp w11, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(10));
  /* ac338: b.lo #0xac348 */
  if (ARC_COND(c, 3)) goto L_ac348;
  /* ac33c: sub w8, w8, #0x61 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(97)));
  /* ac340: cmp w8, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(5));
  /* ac344: b.hi #0xac194 */
  if (ARC_COND(c, 8)) goto L_ac194;
L_ac348:;
  /* ac348: ldrb w8, [x9, #9] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + INT64_C(9))));
  /* ac34c: sub w11, w8, #0x30 */
  ARC_W_W(c, 11, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* ac350: cmp w11, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(10));
  /* ac354: b.lo #0xac364 */
  if (ARC_COND(c, 3)) goto L_ac364;
  /* ac358: sub w8, w8, #0x61 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(97)));
  /* ac35c: cmp w8, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(5));
  /* ac360: b.hi #0xac194 */
  if (ARC_COND(c, 8)) goto L_ac194;
L_ac364:;
  /* ac364: add x8, x9, #0xa */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(10)));
  /* ac368: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* ac36c: ldr x10, [sp, #8] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(8))));
  /* ac370: str x8, [x10] */
  arc_st64(ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* ac374: b.eq #0xac194 */
  if (ARC_COND(c, 0)) goto L_ac194;
  /* ac378: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* ac37c: cmp w8, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(69));
  /* ac380: b.ne #0xac194 */
  if (ARC_COND(c, 1)) goto L_ac194;
  /* ac384: add x8, x9, #0xb */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(11)));
  /* ac388: ldr x9, [sp, #8] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(8))));
  /* ac38c: ldr x20, [x9, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 9) + INT64_C(4912))));
  /* ac390: str x8, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* ac394: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* ac398: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* ac39c: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* ac3a0: b.hi #0xac3c4 */
  if (ARC_COND(c, 8)) goto L_ac3c4;
  /* ac3a4: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* ac3a8: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(705452));
  fn1_1428a8(c);
  /* ac3ac: cbz x0, #0xaca10 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aca10;
  /* ac3b0: ldr x9, [sp, #8] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(8))));
  /* ac3b4: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ac3b8: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ac3bc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ac3c0: str x0, [x9, #0x1330] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(4912)), ARC_X_R(c, 0));
L_ac3c4:;
  /* ac3c4: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* ac3c8: add x8, x20, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* ac3cc: adrp x10, #0x14a000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(1351680)));
  /* ac3d0: add x10, x10, #0x7f8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(2040)));
  /* ac3d4: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
  /* ac3d8: mov w11, #0x540 */
  ARC_W_W(c, 11, UINT64_C(1344));
  /* ac3dc: str x10, [x8, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(16));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 10));
  }
  /* ac3e0: ldurh w9, [x8, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 8) + INT64_C(9))));
  /* ac3e4: mov w10, #0x4e */
  ARC_W_W(c, 10, UINT64_C(78));
  /* ac3e8: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* ac3ec: strb w10, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 10));
  /* ac3f0: orr w9, w9, w11 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 11)));
  /* ac3f4: sturh w9, [x8, #9] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(9)), ARC_W_R(c, 9));
  /* ac3f8: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* ac3fc: b #0xac714 */
  goto L_ac714;
L_ac400:;
  /* ac400: bti j */
  /* bti: no architectural effect here */
  /* ac404: cmp x12, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(2));
  /* ac408: b.lo #0xac194 */
  if (ARC_COND(c, 3)) goto L_ac194;
  /* ac40c: ldrh w8, [x11] */
  ARC_W_W(c, 8, arc_ld16(ARC_X_R(c, 11)));
  /* ac410: mov w11, #0x6e44 */
  ARC_W_W(c, 11, UINT64_C(28228));
  /* ac414: cmp w8, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 11));
  /* ac418: b.ne #0xac194 */
  if (ARC_COND(c, 1)) goto L_ac194;
  /* ac41c: add x8, x9, #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(3)));
  /* ac420: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* ac424: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* ac428: b.eq #0xac440 */
  if (ARC_COND(c, 0)) goto L_ac440;
  /* ac42c: ldrb w11, [x8] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 8)));
  /* ac430: cmp w11, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(48));
  /* ac434: b.ne #0xac440 */
  if (ARC_COND(c, 1)) goto L_ac440;
  /* ac438: add x8, x9, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(4)));
  /* ac43c: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
L_ac440:;
  /* ac440: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* ac444: b.eq #0xac194 */
  if (ARC_COND(c, 0)) goto L_ac194;
  /* ac448: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* ac44c: cmp w9, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(69));
  /* ac450: b.ne #0xac194 */
  if (ARC_COND(c, 1)) goto L_ac194;
  /* ac454: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* ac458: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* ac45c: add x1, x1, #0xce5 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3301)));
  /* ac460: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* ac464: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ac468: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* ac46c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ac470: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* ac474: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ac478: b #0xb0ec4 */
  fn1_b0ec4(c); return;
L_ac47c:;
  /* ac47c: bti j */
  /* bti: no architectural effect here */
  /* ac480: cmp x12, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(2));
  /* ac484: b.lo #0xac194 */
  if (ARC_COND(c, 3)) goto L_ac194;
  /* ac488: ldrh w8, [x11] */
  ARC_W_W(c, 8, arc_ld16(ARC_X_R(c, 11)));
  /* ac48c: mov w10, #0x5a5f */
  ARC_W_W(c, 10, UINT64_C(23135));
  /* ac490: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* ac494: b.ne #0xac194 */
  if (ARC_COND(c, 1)) goto L_ac194;
  /* ac498: add x8, x9, #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(3)));
  /* ac49c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ac4a0: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* ac4a4: bl #0xa46ec */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(705704));
  fn1_a46ec(c);
  /* ac4a8: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* ac4ac: cbz x0, #0xac198 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ac198;
  /* ac4b0: ldp x10, x11, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* ac4b4: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* ac4b8: b.eq #0xac194 */
  if (ARC_COND(c, 0)) goto L_ac194;
  /* ac4bc: ldrb w11, [x10] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 10)));
  /* ac4c0: cmp w11, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(69));
  /* ac4c4: b.ne #0xac194 */
  if (ARC_COND(c, 1)) goto L_ac194;
  /* ac4c8: add x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* ac4cc: str x10, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 10));
  /* ac4d0: b #0xac198 */
  goto L_ac198;
L_ac4d4:;
  /* ac4d4: bti j */
  /* bti: no architectural effect here */
  /* ac4d8: add x8, x9, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* ac4dc: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* ac4e0: add x1, x1, #0x509 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1289)));
  /* ac4e4: mov w2, #3 */
  ARC_W_W(c, 2, UINT64_C(3));
  /* ac4e8: b #0xac9d8 */
  goto L_ac9d8;
L_ac4ec:;
  /* ac4ec: bti j */
  /* bti: no architectural effect here */
  /* ac4f0: add x8, x9, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* ac4f4: nop  */
  /* nop: no architectural effect here */
  /* ac4f8: adr x1, #0x5018e */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(328078)));
  /* ac4fc: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* ac500: b #0xac9d8 */
  goto L_ac9d8;
L_ac504:;
  /* ac504: bti j */
  /* bti: no architectural effect here */
  /* ac508: add x8, x9, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* ac50c: adrp x1, #0x4f000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(323584)));
  /* ac510: add x1, x1, #0x6ae */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1710)));
  /* ac514: mov w2, #0xe */
  ARC_W_W(c, 2, UINT64_C(14));
  /* ac518: b #0xac9d8 */
  goto L_ac9d8;
L_ac51c:;
  /* ac51c: bti j */
  /* bti: no architectural effect here */
  /* ac520: add x8, x9, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* ac524: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* ac528: add x1, x1, #0xa06 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2566)));
  /* ac52c: mov w2, #0xb */
  ARC_W_W(c, 2, UINT64_C(11));
  /* ac530: b #0xac9d8 */
  goto L_ac9d8;
L_ac534:;
  /* ac534: bti j */
  /* bti: no architectural effect here */
  /* ac538: add x8, x9, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* ac53c: adrp x1, #0x50000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(327680)));
  /* ac540: add x1, x1, #0xd75 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3445)));
  /* ac544: mov w2, #0xd */
  ARC_W_W(c, 2, UINT64_C(13));
  /* ac548: b #0xac9d8 */
  goto L_ac9d8;
L_ac54c:;
  /* ac54c: bti j */
  /* bti: no architectural effect here */
  /* ac550: cmp x12, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(2));
  /* ac554: b.lo #0xac194 */
  if (ARC_COND(c, 3)) goto L_ac194;
  /* ac558: ldrb w8, [x9, #2] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + INT64_C(2))));
  /* ac55c: cmp w8, #0x6c */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(108));
  /* ac560: b.ne #0xac194 */
  if (ARC_COND(c, 1)) goto L_ac194;
  /* ac564: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* ac568: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ac56c: bl #0xb0f70 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(705904));
  fn1_b0f70(c);
  /* ac570: str x0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 0));
  /* ac574: cbz x0, #0xac194 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ac194;
  /* ac578: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ac57c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ac580: b.eq #0xac194 */
  if (ARC_COND(c, 0)) goto L_ac194;
  /* ac584: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* ac588: cmp w9, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(69));
  /* ac58c: b.ne #0xac194 */
  if (ARC_COND(c, 1)) goto L_ac194;
  /* ac590: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ac594: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* ac598: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* ac59c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* ac5a0: bl #0xb16f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(705956));
  fn1_b16f0(c);
  /* ac5a4: b #0xaca08 */
  goto L_aca08;
L_ac5a8:;
  /* ac5a8: bti j */
  /* bti: no architectural effect here */
  /* ac5ac: cmp x12, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(3));
  /* ac5b0: b.lo #0xac5d0 */
  if (ARC_COND(c, 3)) goto L_ac5d0;
  /* ac5b4: ldrh w8, [x11] */
  ARC_W_W(c, 8, arc_ld16(ARC_X_R(c, 11)));
  /* ac5b8: ldrb w10, [x11, #2] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 11) + INT64_C(2))));
  /* ac5bc: mov w11, #0x3062 */
  ARC_W_W(c, 11, UINT64_C(12386));
  /* ac5c0: cmp w8, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 11));
  /* ac5c4: mov w8, #0x45 */
  ARC_W_W(c, 8, UINT64_C(69));
  /* ac5c8: ccmp w10, w8, #0, eq */
  if (ARC_COND(c, 0)) { (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* ac5cc: b.eq #0xac9f4 */
  if (ARC_COND(c, 0)) goto L_ac9f4;
L_ac5d0:;
  /* ac5d0: adrp x1, #0x50000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(327680)));
  /* ac5d4: add x1, x1, #0xc50 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3152)));
  /* ac5d8: mov w2, #3 */
  ARC_W_W(c, 2, UINT64_C(3));
  /* ac5dc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ac5e0: bl #0xa468c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(706020));
  fn1_a468c(c);
  /* ac5e4: tbz w0, #0, #0xac194 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_ac194;
  /* ac5e8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* ac5ec: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* ac5f0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ac5f4: str w8, [sp, #0x10] */
  arc_st32(((c)->sp + INT64_C(16)), ARC_W_R(c, 8));
  /* ac5f8: b #0xaca04 */
  goto L_aca04;
L_ac5fc:;
  /* ac5fc: bti j */
  /* bti: no architectural effect here */
  /* ac600: add x8, x9, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* ac604: adrp x1, #0x50000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(327680)));
  /* ac608: add x1, x1, #0xec1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3777)));
  /* ac60c: mov w2, #4 */
  ARC_W_W(c, 2, UINT64_C(4));
  /* ac610: b #0xac9d8 */
  goto L_ac9d8;
L_ac614:;
  /* ac614: bti j */
  /* bti: no architectural effect here */
  /* ac618: add x8, x9, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* ac61c: adrp x1, #0x50000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(327680)));
  /* ac620: add x1, x1, #0x7c9 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1993)));
L_ac624:;
  /* ac624: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* ac628: b #0xac9d8 */
  goto L_ac9d8;
L_ac62c:;
  /* ac62c: bti j */
  /* bti: no architectural effect here */
  /* ac630: add x8, x9, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* ac634: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* ac638: add x1, x1, #0xf8e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3982)));
  /* ac63c: mov w2, #2 */
  ARC_W_W(c, 2, UINT64_C(2));
  /* ac640: b #0xac9d8 */
  goto L_ac9d8;
L_ac644:;
  /* ac644: bti j */
  /* bti: no architectural effect here */
  /* ac648: add x19, x9, #2 */
  ARC_X_W(c, 19, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* ac64c: sub x8, x10, x19 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) - ARC_X_R(c, 19)));
  /* ac650: str x19, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 19));
  /* ac654: cmp x8, #0x21 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(33));
  /* ac658: b.lo #0xac194 */
  if (ARC_COND(c, 3)) goto L_ac194;
  /* ac65c: mov x11, xzr */
  ARC_X_W(c, 11, ARC_X_R(c, 31));
  /* ac660: add x8, x9, #0x22 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(34)));
L_ac664:;
  /* ac664: ldrb w12, [x19, x11] */
  ARC_W_W(c, 12, arc_ld8((ARC_X_R(c, 19) + ARC_X_R(c, 11))));
  /* ac668: sub w13, w12, #0x30 */
  ARC_W_W(c, 13, (ARC_W_R(c, 12) - UINT64_C(48)));
  /* ac66c: sub w12, w12, #0x61 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) - UINT64_C(97)));
  /* ac670: cmp w13, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(10));
  /* ac674: ccmp w12, #6, #0, hs */
  if (ARC_COND(c, 2)) { (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(6)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* ac678: b.hs #0xac194 */
  if (ARC_COND(c, 2)) goto L_ac194;
  /* ac67c: add x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(1)));
  /* ac680: cmp x11, #0x20 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(32));
  /* ac684: b.ne #0xac664 */
  if (ARC_COND(c, 1)) goto L_ac664;
  /* ac688: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* ac68c: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* ac690: b.eq #0xac194 */
  if (ARC_COND(c, 0)) goto L_ac194;
  /* ac694: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* ac698: cmp w8, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(69));
  /* ac69c: b.ne #0xac194 */
  if (ARC_COND(c, 1)) goto L_ac194;
  /* ac6a0: add x8, x9, #0x23 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(35)));
  /* ac6a4: ldr x20, [x0, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* ac6a8: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* ac6ac: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* ac6b0: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* ac6b4: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* ac6b8: b.hi #0xac6dc */
  if (ARC_COND(c, 8)) goto L_ac6dc;
  /* ac6bc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ac6c0: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* ac6c4: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(706248));
  fn1_1428a8(c);
  /* ac6c8: cbz x0, #0xaca10 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aca10;
  /* ac6cc: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ac6d0: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ac6d4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ac6d8: str x0, [x21, #0x1330] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(4912)), ARC_X_R(c, 0));
L_ac6dc:;
  /* ac6dc: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* ac6e0: add x8, x20, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* ac6e4: adrp x10, #0x14a000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(1351680)));
  /* ac6e8: add x10, x10, #0x8e8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(2280)));
  /* ac6ec: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
  /* ac6f0: mov w11, #0x540 */
  ARC_W_W(c, 11, UINT64_C(1344));
  /* ac6f4: str x10, [x8, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(16));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 10));
  }
  /* ac6f8: ldurh w9, [x8, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 8) + INT64_C(9))));
  /* ac6fc: mov w10, #0x50 */
  ARC_W_W(c, 10, UINT64_C(80));
  /* ac700: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* ac704: strb w10, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 10));
  /* ac708: orr w9, w9, w11 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 11)));
  /* ac70c: sturh w9, [x8, #9] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(9)), ARC_W_R(c, 9));
  /* ac710: mov w9, #0x20 */
  ARC_W_W(c, 9, UINT64_C(32));
L_ac714:;
  /* ac714: stp x19, x9, [x8, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* ac718: b #0xac198 */
  goto L_ac198;
L_ac71c:;
  /* ac71c: bti j */
  /* bti: no architectural effect here */
  /* ac720: add x19, x9, #2 */
  ARC_X_W(c, 19, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* ac724: sub x8, x10, x19 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) - ARC_X_R(c, 19)));
  /* ac728: str x19, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 19));
  /* ac72c: cmp x8, #0x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(17));
  /* ac730: b.lo #0xac194 */
  if (ARC_COND(c, 3)) goto L_ac194;
  /* ac734: ldrb w8, [x9, #2] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + INT64_C(2))));
  /* ac738: sub w11, w8, #0x30 */
  ARC_W_W(c, 11, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* ac73c: cmp w11, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(10));
  /* ac740: b.lo #0xac750 */
  if (ARC_COND(c, 3)) goto L_ac750;
  /* ac744: sub w8, w8, #0x61 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(97)));
  /* ac748: cmp w8, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(5));
  /* ac74c: b.hi #0xac194 */
  if (ARC_COND(c, 8)) goto L_ac194;
L_ac750:;
  /* ac750: ldrb w8, [x9, #3] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + INT64_C(3))));
  /* ac754: sub w11, w8, #0x30 */
  ARC_W_W(c, 11, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* ac758: cmp w11, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(10));
  /* ac75c: b.lo #0xac76c */
  if (ARC_COND(c, 3)) goto L_ac76c;
  /* ac760: sub w8, w8, #0x61 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(97)));
  /* ac764: cmp w8, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(5));
  /* ac768: b.hi #0xac194 */
  if (ARC_COND(c, 8)) goto L_ac194;
L_ac76c:;
  /* ac76c: ldrb w8, [x9, #4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + INT64_C(4))));
  /* ac770: sub w11, w8, #0x30 */
  ARC_W_W(c, 11, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* ac774: cmp w11, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(10));
  /* ac778: b.lo #0xac788 */
  if (ARC_COND(c, 3)) goto L_ac788;
  /* ac77c: sub w8, w8, #0x61 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(97)));
  /* ac780: cmp w8, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(5));
  /* ac784: b.hi #0xac194 */
  if (ARC_COND(c, 8)) goto L_ac194;
L_ac788:;
  /* ac788: ldrb w8, [x9, #5] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + INT64_C(5))));
  /* ac78c: sub w11, w8, #0x30 */
  ARC_W_W(c, 11, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* ac790: cmp w11, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(10));
  /* ac794: b.lo #0xac7a4 */
  if (ARC_COND(c, 3)) goto L_ac7a4;
  /* ac798: sub w8, w8, #0x61 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(97)));
  /* ac79c: cmp w8, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(5));
  /* ac7a0: b.hi #0xac194 */
  if (ARC_COND(c, 8)) goto L_ac194;
L_ac7a4:;
  /* ac7a4: ldrb w8, [x9, #6] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + INT64_C(6))));
  /* ac7a8: sub w11, w8, #0x30 */
  ARC_W_W(c, 11, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* ac7ac: cmp w11, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(10));
  /* ac7b0: b.lo #0xac7c0 */
  if (ARC_COND(c, 3)) goto L_ac7c0;
  /* ac7b4: sub w8, w8, #0x61 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(97)));
  /* ac7b8: cmp w8, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(5));
  /* ac7bc: b.hi #0xac194 */
  if (ARC_COND(c, 8)) goto L_ac194;
L_ac7c0:;
  /* ac7c0: ldrb w8, [x9, #7] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + INT64_C(7))));
  /* ac7c4: sub w11, w8, #0x30 */
  ARC_W_W(c, 11, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* ac7c8: cmp w11, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(10));
  /* ac7cc: b.lo #0xac7dc */
  if (ARC_COND(c, 3)) goto L_ac7dc;
  /* ac7d0: sub w8, w8, #0x61 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(97)));
  /* ac7d4: cmp w8, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(5));
  /* ac7d8: b.hi #0xac194 */
  if (ARC_COND(c, 8)) goto L_ac194;
L_ac7dc:;
  /* ac7dc: ldrb w8, [x9, #8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + INT64_C(8))));
  /* ac7e0: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* ac7e4: sub w11, w8, #0x30 */
  ARC_W_W(c, 11, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* ac7e8: cmp w11, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(10));
  /* ac7ec: b.lo #0xac7fc */
  if (ARC_COND(c, 3)) goto L_ac7fc;
  /* ac7f0: sub w8, w8, #0x61 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(97)));
  /* ac7f4: cmp w8, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(5));
  /* ac7f8: b.hi #0xac194 */
  if (ARC_COND(c, 8)) goto L_ac194;
L_ac7fc:;
  /* ac7fc: ldrb w8, [x9, #9] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + INT64_C(9))));
  /* ac800: sub w11, w8, #0x30 */
  ARC_W_W(c, 11, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* ac804: cmp w11, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(10));
  /* ac808: b.lo #0xac818 */
  if (ARC_COND(c, 3)) goto L_ac818;
  /* ac80c: sub w8, w8, #0x61 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(97)));
  /* ac810: cmp w8, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(5));
  /* ac814: b.hi #0xac194 */
  if (ARC_COND(c, 8)) goto L_ac194;
L_ac818:;
  /* ac818: ldrb w8, [x9, #0xa] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + INT64_C(10))));
  /* ac81c: sub w11, w8, #0x30 */
  ARC_W_W(c, 11, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* ac820: cmp w11, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(10));
  /* ac824: b.lo #0xac834 */
  if (ARC_COND(c, 3)) goto L_ac834;
  /* ac828: sub w8, w8, #0x61 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(97)));
  /* ac82c: cmp w8, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(5));
  /* ac830: b.hi #0xac194 */
  if (ARC_COND(c, 8)) goto L_ac194;
L_ac834:;
  /* ac834: ldrb w8, [x9, #0xb] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + INT64_C(11))));
  /* ac838: sub w11, w8, #0x30 */
  ARC_W_W(c, 11, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* ac83c: cmp w11, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(10));
  /* ac840: b.lo #0xac850 */
  if (ARC_COND(c, 3)) goto L_ac850;
  /* ac844: sub w8, w8, #0x61 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(97)));
  /* ac848: cmp w8, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(5));
  /* ac84c: b.hi #0xac194 */
  if (ARC_COND(c, 8)) goto L_ac194;
L_ac850:;
  /* ac850: ldrb w8, [x9, #0xc] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + INT64_C(12))));
  /* ac854: sub w11, w8, #0x30 */
  ARC_W_W(c, 11, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* ac858: cmp w11, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(10));
  /* ac85c: b.lo #0xac86c */
  if (ARC_COND(c, 3)) goto L_ac86c;
  /* ac860: sub w8, w8, #0x61 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(97)));
  /* ac864: cmp w8, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(5));
  /* ac868: b.hi #0xac194 */
  if (ARC_COND(c, 8)) goto L_ac194;
L_ac86c:;
  /* ac86c: ldrb w8, [x9, #0xd] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + INT64_C(13))));
  /* ac870: sub w11, w8, #0x30 */
  ARC_W_W(c, 11, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* ac874: cmp w11, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(10));
  /* ac878: b.lo #0xac888 */
  if (ARC_COND(c, 3)) goto L_ac888;
  /* ac87c: sub w8, w8, #0x61 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(97)));
  /* ac880: cmp w8, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(5));
  /* ac884: b.hi #0xac194 */
  if (ARC_COND(c, 8)) goto L_ac194;
L_ac888:;
  /* ac888: ldrb w8, [x9, #0xe] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + INT64_C(14))));
  /* ac88c: sub w11, w8, #0x30 */
  ARC_W_W(c, 11, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* ac890: cmp w11, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(10));
  /* ac894: b.lo #0xac8a4 */
  if (ARC_COND(c, 3)) goto L_ac8a4;
  /* ac898: sub w8, w8, #0x61 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(97)));
  /* ac89c: cmp w8, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(5));
  /* ac8a0: b.hi #0xac194 */
  if (ARC_COND(c, 8)) goto L_ac194;
L_ac8a4:;
  /* ac8a4: ldrb w8, [x9, #0xf] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + INT64_C(15))));
  /* ac8a8: sub w11, w8, #0x30 */
  ARC_W_W(c, 11, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* ac8ac: cmp w11, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(10));
  /* ac8b0: b.lo #0xac8c0 */
  if (ARC_COND(c, 3)) goto L_ac8c0;
  /* ac8b4: sub w8, w8, #0x61 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(97)));
  /* ac8b8: cmp w8, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(5));
  /* ac8bc: b.hi #0xac194 */
  if (ARC_COND(c, 8)) goto L_ac194;
L_ac8c0:;
  /* ac8c0: ldrb w8, [x9, #0x10] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + INT64_C(16))));
  /* ac8c4: sub w11, w8, #0x30 */
  ARC_W_W(c, 11, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* ac8c8: cmp w11, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(10));
  /* ac8cc: b.lo #0xac8dc */
  if (ARC_COND(c, 3)) goto L_ac8dc;
  /* ac8d0: sub w8, w8, #0x61 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(97)));
  /* ac8d4: cmp w8, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(5));
  /* ac8d8: b.hi #0xac194 */
  if (ARC_COND(c, 8)) goto L_ac194;
L_ac8dc:;
  /* ac8dc: ldrb w8, [x9, #0x11] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + INT64_C(17))));
  /* ac8e0: sub w11, w8, #0x30 */
  ARC_W_W(c, 11, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* ac8e4: cmp w11, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(10));
  /* ac8e8: b.lo #0xac8f8 */
  if (ARC_COND(c, 3)) goto L_ac8f8;
  /* ac8ec: sub w8, w8, #0x61 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(97)));
  /* ac8f0: cmp w8, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(5));
  /* ac8f4: b.hi #0xac194 */
  if (ARC_COND(c, 8)) goto L_ac194;
L_ac8f8:;
  /* ac8f8: add x8, x9, #0x12 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(18)));
  /* ac8fc: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* ac900: ldr x10, [sp, #8] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(8))));
L_ac904:;
  /* ac904: str x8, [x10] */
  arc_st64(ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* ac908: b.eq #0xac194 */
  if (ARC_COND(c, 0)) goto L_ac194;
  /* ac90c: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* ac910: cmp w8, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(69));
  /* ac914: b.ne #0xac194 */
  if (ARC_COND(c, 1)) goto L_ac194;
  /* ac918: add x8, x9, #0x13 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(19)));
  /* ac91c: ldr x9, [sp, #8] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(8))));
  /* ac920: ldr x20, [x9, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 9) + INT64_C(4912))));
  /* ac924: str x8, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* ac928: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* ac92c: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* ac930: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* ac934: b.hi #0xac958 */
  if (ARC_COND(c, 8)) goto L_ac958;
  /* ac938: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* ac93c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(706880));
  fn1_1428a8(c);
  /* ac940: cbz x0, #0xaca10 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aca10;
  /* ac944: ldr x9, [sp, #8] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(8))));
  /* ac948: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ac94c: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ac950: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ac954: str x0, [x9, #0x1330] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(4912)), ARC_X_R(c, 0));
L_ac958:;
  /* ac958: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* ac95c: add x8, x20, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* ac960: adrp x10, #0x14a000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(1351680)));
  /* ac964: add x10, x10, #0x870 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(2160)));
  /* ac968: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
  /* ac96c: mov w11, #0x540 */
  ARC_W_W(c, 11, UINT64_C(1344));
  /* ac970: str x10, [x8, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(16));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 10));
  }
  /* ac974: ldurh w9, [x8, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 8) + INT64_C(9))));
  /* ac978: mov w10, #0x4f */
  ARC_W_W(c, 10, UINT64_C(79));
  /* ac97c: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* ac980: strb w10, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 10));
  /* ac984: orr w9, w9, w11 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 11)));
  /* ac988: sturh w9, [x8, #9] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(9)), ARC_W_R(c, 9));
  /* ac98c: mov w9, #0x10 */
  ARC_W_W(c, 9, UINT64_C(16));
  /* ac990: b #0xac714 */
  goto L_ac714;
L_ac994:;
  /* ac994: bti j */
  /* bti: no architectural effect here */
  /* ac998: add x8, x9, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* ac99c: adrp x1, #0x50000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(327680)));
  /* ac9a0: add x1, x1, #0x980 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2432)));
  /* ac9a4: mov w2, #0x11 */
  ARC_W_W(c, 2, UINT64_C(17));
  /* ac9a8: b #0xac9d8 */
  goto L_ac9d8;
L_ac9ac:;
  /* ac9ac: bti j */
  /* bti: no architectural effect here */
  /* ac9b0: add x8, x9, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* ac9b4: adrp x1, #0x4f000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(323584)));
  /* ac9b8: add x1, x1, #0xa62 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2658)));
  /* ac9bc: mov w2, #8 */
  ARC_W_W(c, 2, UINT64_C(8));
  /* ac9c0: b #0xac9d8 */
  goto L_ac9d8;
L_ac9c4:;
  /* ac9c4: bti j */
  /* bti: no architectural effect here */
  /* ac9c8: add x8, x9, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* ac9cc: adrp x1, #0x4f000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(323584)));
  /* ac9d0: add x1, x1, #0x6a6 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1702)));
  /* ac9d4: mov w2, #7 */
  ARC_W_W(c, 2, UINT64_C(7));
L_ac9d8:;
  /* ac9d8: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* ac9dc: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ac9e0: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* ac9e4: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ac9e8: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* ac9ec: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ac9f0: b #0xb0c28 */
  fn1_b0c28(c); return;
L_ac9f4:;
  /* ac9f4: add x8, x9, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(4)));
  /* ac9f8: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* ac9fc: str wzr, [sp, #0x10] */
  arc_st32(((c)->sp + INT64_C(16)), ARC_W_R(c, 31));
  /* aca00: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
L_aca04:;
  /* aca04: bl #0xb0d7c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(707080));
  fn1_b0d7c(c);
L_aca08:;
  /* aca08: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* aca0c: b #0xac198 */
  goto L_ac198;
L_aca10:;
  /* aca10: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(707092));
  fn1_142488(c);
}

void fn1_b2e30(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038660656));
  /* b2e30: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b2e34: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b2e38: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b2e3c: ldp x9, x10, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b2e40: ldr x8, [x9, #0x2a0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(672))));
  /* b2e44: ldr x11, [x9, #0x298] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 9) + INT64_C(664))));
  /* b2e48: sub x8, x8, x11 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 11)));
  /* b2e4c: cmp x10, x8, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> 3)));
  /* b2e50: b.hi #0xb2e88 */
  if (ARC_COND(c, 8)) goto L_b2e88;
  /* b2e54: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* b2e58: add x10, x11, x10, lsl #3 */
  ARC_X_W(c, 10, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 10)) << 3)));
  /* b2e5c: add x11, x0, #0x28 */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + UINT64_C(40)));
  /* b2e60: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* b2e64: str x10, [x9, #0x2a0] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(672)), ARC_X_R(c, 10));
  /* b2e68: b.eq #0xb2e7c */
  if (ARC_COND(c, 0)) goto L_b2e7c;
  /* b2e6c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* b2e70: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b2e74: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b2e78: b #0x142800 */
  fn1_142800(c); return;
L_b2e7c:;
  /* b2e7c: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b2e80: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b2e84: ret  */
  return;
L_b2e88:;
  /* b2e88: adrp x0, #0x4f000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(323584)));
  /* b2e8c: add x0, x0, #0x8a6 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2214)));
  /* b2e90: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* b2e94: add x1, x1, #0x10b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(267)));
  /* b2e98: nop  */
  /* nop: no architectural effect here */
  /* b2e9c: adr x3, #0x5018e */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(328078)));
  /* b2ea0: mov w2, #0xac7 */
  ARC_W_W(c, 2, UINT64_C(2759));
  /* b2ea4: bl #0xa23d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(732840));
  fn1_a23d8(c);
  /* b2ea8: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(732844));
  fn1_a1454(c);
}

void fn1_b6818(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038675480));
  /* b6818: bti c */
  /* bti: no architectural effect here */
  /* b681c: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* b6820: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b8884(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038683780));
  /* b8884: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b8888: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b888c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b8890: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b8894: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b8898: ldp x8, x10, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b889c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b88a0: ldr w11, [x1, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 1) + INT64_C(32))));
  /* b88a4: ldr x0, [x1] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* b88a8: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b88ac: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b88b0: add w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* b88b4: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b88b8: str w11, [x1, #0x20] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(32)), ARC_W_R(c, 11));
  /* b88bc: b.ls #0xb88e8 */
  if (ARC_COND(c, 9)) goto L_b88e8;
  /* b88c0: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b88c4: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b88c8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b88cc: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b88d0: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b88d4: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(755928));
  fn1_142878(c);
  /* b88d8: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b88dc: cbz x0, #0xb8c60 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b8c60;
  /* b88e0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b88e4: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b88e8:;
  /* b88e8: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b88ec: mov w9, #0x28 */
  ARC_W_W(c, 9, UINT64_C(40));
  /* b88f0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b88f4: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b88f8: add x0, x20, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(32)));
  /* b88fc: bl #0xafa48 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(755968));
  fn1_afa48(c);
  /* b8900: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b8904: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b8908: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b890c: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* b8910: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b8914: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* b8918: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b891c: b.ls #0xb8948 */
  if (ARC_COND(c, 9)) goto L_b8948;
  /* b8920: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b8924: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b8928: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b892c: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b8930: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b8934: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(756024));
  fn1_142878(c);
  /* b8938: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b893c: cbz x0, #0xb8c64 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b8c64;
  /* b8940: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b8944: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b8948:;
  /* b8948: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b894c: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* b8950: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b8954: ldr x0, [x20, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* b8958: cbz x0, #0xb896c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b896c;
  /* b895c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* b8960: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b8964: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b8968: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(756076));
  arc_dispatch(c, ARC_X_R(c, 8));
L_b896c:;
  /* b896c: ldr w8, [x20, #0x40] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(64))));
  /* b8970: tbz w8, #0, #0xb89d4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_b89d4;
  /* b8974: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b8978: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b897c: add x10, x8, #6 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(6)));
  /* b8980: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b8984: b.ls #0xb89ac */
  if (ARC_COND(c, 9)) goto L_b89ac;
  /* b8988: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b898c: add x8, x8, #0x3e6 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(998)));
  /* b8990: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b8994: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b8998: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b899c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(756128));
  fn1_142878(c);
  /* b89a0: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b89a4: cbz x0, #0xb8c6c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b8c6c;
  /* b89a8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b89ac:;
  /* b89ac: mov w10, #0x6320 */
  ARC_W_W(c, 10, UINT64_C(25376));
  /* b89b0: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b89b4: mov w9, #0x7473 */
  ARC_W_W(c, 9, UINT64_C(29811));
  /* b89b8: movk w10, #0x6e6f, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1852768256)));
  /* b89bc: strh w9, [x8, #4] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(4)), ARC_W_R(c, 9));
  /* b89c0: str w10, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* b89c4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b89c8: add x9, x8, #6 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(6)));
  /* b89cc: ldr w8, [x20, #0x40] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(64))));
  /* b89d0: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
L_b89d4:;
  /* b89d4: tbz w8, #1, #0xb8a3c */
  if (((ARC_W_R(c, 8)) >> 1 & 1) == 0) goto L_b8a3c;
  /* b89d8: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b89dc: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b89e0: add x10, x8, #9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(9)));
  /* b89e4: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b89e8: b.ls #0xb8a10 */
  if (ARC_COND(c, 9)) goto L_b8a10;
  /* b89ec: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b89f0: add x8, x8, #0x3e9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1001)));
  /* b89f4: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b89f8: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b89fc: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b8a00: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(756228));
  fn1_142878(c);
  /* b8a04: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b8a08: cbz x0, #0xb8c70 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b8c70;
  /* b8a0c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b8a10:;
  /* b8a10: adrp x9, #0x51000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(331776)));
  /* b8a14: add x9, x9, #0xe78 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3704)));
  /* b8a18: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b8a1c: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* b8a20: mov w10, #0x65 */
  ARC_W_W(c, 10, UINT64_C(101));
  /* b8a24: strb w10, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 10));
  /* b8a28: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b8a2c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b8a30: add x9, x8, #9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(9)));
  /* b8a34: ldr w8, [x20, #0x40] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(64))));
  /* b8a38: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
L_b8a3c:;
  /* b8a3c: tbz w8, #2, #0xb8aa0 */
  if (((ARC_W_R(c, 8)) >> 2 & 1) == 0) goto L_b8aa0;
  /* b8a40: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b8a44: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b8a48: add x10, x8, #9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(9)));
  /* b8a4c: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b8a50: b.ls #0xb8a78 */
  if (ARC_COND(c, 9)) goto L_b8a78;
  /* b8a54: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b8a58: add x8, x8, #0x3e9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1001)));
  /* b8a5c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b8a60: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b8a64: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b8a68: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(756332));
  fn1_142878(c);
  /* b8a6c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b8a70: cbz x0, #0xb8c74 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b8c74;
  /* b8a74: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b8a78:;
  /* b8a78: adrp x9, #0x51000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(331776)));
  /* b8a7c: add x9, x9, #0xf91 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3985)));
  /* b8a80: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b8a84: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* b8a88: mov w10, #0x74 */
  ARC_W_W(c, 10, UINT64_C(116));
  /* b8a8c: strb w10, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 10));
  /* b8a90: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b8a94: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b8a98: add x8, x8, #9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(9)));
  /* b8a9c: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_b8aa0:;
  /* b8aa0: ldrb w8, [x20, #0x44] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(68))));
  /* b8aa4: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* b8aa8: b.eq #0xb8afc */
  if (ARC_COND(c, 0)) goto L_b8afc;
  /* b8aac: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* b8ab0: b.ne #0xb8b58 */
  if (ARC_COND(c, 1)) goto L_b8b58;
  /* b8ab4: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b8ab8: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b8abc: add x10, x8, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* b8ac0: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b8ac4: b.ls #0xb8aec */
  if (ARC_COND(c, 9)) goto L_b8aec;
  /* b8ac8: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b8acc: add x8, x8, #0x3e2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(994)));
  /* b8ad0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b8ad4: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b8ad8: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b8adc: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(756448));
  fn1_142878(c);
  /* b8ae0: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b8ae4: cbz x0, #0xb8c78 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b8c78;
  /* b8ae8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b8aec:;
  /* b8aec: mov w9, #0x2620 */
  ARC_W_W(c, 9, UINT64_C(9760));
  /* b8af0: strh w9, [x0, x8] */
  arc_st16((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b8af4: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
  /* b8af8: b #0xb8b4c */
  goto L_b8b4c;
L_b8afc:;
  /* b8afc: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b8b00: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b8b04: add x10, x8, #3 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(3)));
  /* b8b08: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b8b0c: b.ls #0xb8b34 */
  if (ARC_COND(c, 9)) goto L_b8b34;
  /* b8b10: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b8b14: add x8, x8, #0x3e3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(995)));
  /* b8b18: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b8b1c: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b8b20: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b8b24: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(756520));
  fn1_142878(c);
  /* b8b28: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b8b2c: cbz x0, #0xb8c7c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b8c7c;
  /* b8b30: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b8b34:;
  /* b8b34: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b8b38: mov w9, #0x26 */
  ARC_W_W(c, 9, UINT64_C(38));
  /* b8b3c: mov w10, #0x2620 */
  ARC_W_W(c, 10, UINT64_C(9760));
  /* b8b40: strb w9, [x8, #2] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(2)), ARC_W_R(c, 9));
  /* b8b44: strh w10, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* b8b48: mov w8, #3 */
  ARC_W_W(c, 8, UINT64_C(3));
L_b8b4c:;
  /* b8b4c: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b8b50: add x8, x9, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ARC_X_R(c, 8)));
  /* b8b54: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_b8b58:;
  /* b8b58: ldr x21, [x20, #0x30] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(48))));
  /* b8b5c: cbz x21, #0xb8b98 */
  if ((ARC_X_R(c, 21)) == 0) goto L_b8b98;
  /* b8b60: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b8b64: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b8b68: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b8b6c: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b8b70: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(756596));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b8b74: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* b8b78: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b8b7c: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b8b80: b.eq #0xb8b98 */
  if (ARC_COND(c, 0)) goto L_b8b98;
  /* b8b84: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b8b88: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b8b8c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b8b90: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b8b94: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(756632));
  arc_dispatch(c, ARC_X_R(c, 8));
L_b8b98:;
  /* b8b98: ldr x8, [x20, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(56))));
  /* b8b9c: cbz x8, #0xb8c28 */
  if ((ARC_X_R(c, 8)) == 0) goto L_b8c28;
  /* b8ba0: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b8ba4: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b8ba8: add x10, x8, #0xa */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(10)));
  /* b8bac: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b8bb0: b.ls #0xb8bd8 */
  if (ARC_COND(c, 9)) goto L_b8bd8;
  /* b8bb4: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b8bb8: add x8, x8, #0x3ea */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1002)));
  /* b8bbc: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b8bc0: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b8bc4: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b8bc8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(756684));
  fn1_142878(c);
  /* b8bcc: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b8bd0: cbz x0, #0xb8c68 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b8c68;
  /* b8bd4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b8bd8:;
  /* b8bd8: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* b8bdc: add x9, x9, #0x30b */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(779)));
  /* b8be0: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b8be4: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* b8be8: mov w10, #0x2073 */
  ARC_W_W(c, 10, UINT64_C(8307));
  /* b8bec: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b8bf0: strh w10, [x8, #8] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 10));
  /* b8bf4: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b8bf8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b8bfc: ldr x20, [x20, #0x38] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(56))));
  /* b8c00: add x8, x8, #0xa */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(10)));
  /* b8c04: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* b8c08: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b8c0c: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b8c10: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* b8c14: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(756760));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b8c18: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b8c1c: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b8c20: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b8c24: b.ne #0xb8c3c */
  if (ARC_COND(c, 1)) goto L_b8c3c;
L_b8c28:;
  /* b8c28: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b8c2c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b8c30: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b8c34: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b8c38: ret  */
  return;
L_b8c3c:;
  /* b8c3c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b8c40: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b8c44: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b8c48: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b8c4c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b8c50: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b8c54: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b8c58: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b8c5c: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_b8c60:;
  /* b8c60: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(756836));
  fn1_1427b8(c);
L_b8c64:;
  /* b8c64: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(756840));
  fn1_1427b8(c);
L_b8c68:;
  /* b8c68: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(756844));
  fn1_1427b8(c);
L_b8c6c:;
  /* b8c6c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(756848));
  fn1_1427b8(c);
L_b8c70:;
  /* b8c70: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(756852));
  fn1_1427b8(c);
L_b8c74:;
  /* b8c74: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(756856));
  fn1_1427b8(c);
L_b8c78:;
  /* b8c78: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(756860));
  fn1_1427b8(c);
L_b8c7c:;
  /* b8c7c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(756864));
  fn1_1427b8(c);
}

void fn1_bc014(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038698004));
  /* bc014: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bc018: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bc01c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* bc020: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bc024: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bc028: ldr x8, [x1, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* bc02c: cbz x8, #0xbc18c */
  if ((ARC_X_R(c, 8)) == 0) goto L_bc18c;
  /* bc030: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* bc034: ldr x0, [x1] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* bc038: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* bc03c: add x9, x0, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* bc040: ldurb w9, [x9, #-1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 9) + INT64_C(-1))));
  /* bc044: cmp w9, #0x5d */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(93));
  /* bc048: b.eq #0xbc094 */
  if (ARC_COND(c, 0)) goto L_bc094;
  /* bc04c: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* bc050: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bc054: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* bc058: b.ls #0xbc080 */
  if (ARC_COND(c, 9)) goto L_bc080;
  /* bc05c: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* bc060: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* bc064: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bc068: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bc06c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bc070: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(770164));
  fn1_142878(c);
  /* bc074: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bc078: cbz x0, #0xbc1b4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bc1b4;
  /* bc07c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_bc080:;
  /* bc080: mov w9, #0x20 */
  ARC_W_W(c, 9, UINT64_C(32));
  /* bc084: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* bc088: ldp x0, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 0, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* bc08c: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bc090: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_bc094:;
  /* bc094: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* bc098: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bc09c: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* bc0a0: b.ls #0xbc0c8 */
  if (ARC_COND(c, 9)) goto L_bc0c8;
  /* bc0a4: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* bc0a8: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* bc0ac: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bc0b0: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bc0b4: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bc0b8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(770236));
  fn1_142878(c);
  /* bc0bc: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bc0c0: cbz x0, #0xbc1ac */
  if ((ARC_X_R(c, 0)) == 0) goto L_bc1ac;
  /* bc0c4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_bc0c8:;
  /* bc0c8: mov w9, #0x5b */
  ARC_W_W(c, 9, UINT64_C(91));
  /* bc0cc: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* bc0d0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bc0d4: ldr x21, [x20, #0x18] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* bc0d8: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bc0dc: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* bc0e0: cbz x21, #0xbc11c */
  if ((ARC_X_R(c, 21)) == 0) goto L_bc11c;
  /* bc0e4: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* bc0e8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* bc0ec: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bc0f0: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* bc0f4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(770296));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bc0f8: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* bc0fc: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* bc100: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* bc104: b.eq #0xbc11c */
  if (ARC_COND(c, 0)) goto L_bc11c;
  /* bc108: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* bc10c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* bc110: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bc114: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* bc118: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(770332));
  arc_dispatch(c, ARC_X_R(c, 8));
L_bc11c:;
  /* bc11c: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* bc120: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* bc124: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bc128: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* bc12c: b.ls #0xbc154 */
  if (ARC_COND(c, 9)) goto L_bc154;
  /* bc130: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* bc134: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* bc138: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bc13c: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bc140: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bc144: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(770376));
  fn1_142878(c);
  /* bc148: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bc14c: cbz x0, #0xbc1b0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bc1b0;
  /* bc150: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_bc154:;
  /* bc154: mov w9, #0x5d */
  ARC_W_W(c, 9, UINT64_C(93));
  /* bc158: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* bc15c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bc160: ldr x0, [x20, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* bc164: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bc168: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* bc16c: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* bc170: ldr x16, [x9, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 9) + INT64_C(40))));
  /* bc174: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bc178: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bc17c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* bc180: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bc184: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bc188: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_bc18c:;
  /* bc18c: adrp x0, #0x4f000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(323584)));
  /* bc190: add x0, x0, #0x8a6 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2214)));
  /* bc194: adrp x1, #0x50000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(327680)));
  /* bc198: add x1, x1, #0x7db */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2011)));
  /* bc19c: nop  */
  /* nop: no architectural effect here */
  /* bc1a0: adr x3, #0x5018e */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(328078)));
  /* bc1a4: mov w2, #0xae */
  ARC_W_W(c, 2, UINT64_C(174));
  /* bc1a8: bl #0xa23d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(770476));
  fn1_a23d8(c);
L_bc1ac:;
  /* bc1ac: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(770480));
  fn1_1427b8(c);
L_bc1b0:;
  /* bc1b0: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(770484));
  fn1_1427b8(c);
L_bc1b4:;
  /* bc1b4: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(770488));
  fn1_1427b8(c);
}

void fn1_bf17c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038710652));
  /* bf17c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bf180: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bf184: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bf188: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bf18c: nop  */
  /* nop: no architectural effect here */
  /* bf190: adr x0, #0x156c00 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1403904)));
  /* bf194: bl #0x144ac8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(782744));
  fn1_144ac8(c);
  /* bf198: ldr x20, [x0] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 0)));
  /* bf19c: cbz x20, #0xbf1c4 */
  if ((ARC_X_R(c, 20)) == 0) goto L_bf1c4;
  /* bf1a0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_bf1a4:;
  /* bf1a4: ldp x0, x8, [x20, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(8));
    ARC_X_W(c, 0, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* bf1a8: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* bf1ac: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* bf1b0: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(782772));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* bf1b4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* bf1b8: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(782780));
  fn1_142800(c);
  /* bf1bc: ldr x20, [x19] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 19)));
  /* bf1c0: cbnz x20, #0xbf1a4 */
  if ((ARC_X_R(c, 20)) != 0) goto L_bf1a4;
L_bf1c4:;
  /* bf1c4: nop  */
  /* nop: no architectural effect here */
  /* bf1c8: adr x0, #0x156be0 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1403872)));
  /* bf1cc: bl #0x144ac8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(782800));
  fn1_144ac8(c);
  /* bf1d0: strb wzr, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 31));
  /* bf1d4: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bf1d8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bf1dc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bf1e0: ret  */
  return;
  /* bf1e4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(782824));
  fn1_a1454(c);
}

void fn1_d5754(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038802260));
  /* d5754: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d5758: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d575c: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* d5760: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* d5764: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d5768: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* d576c: fmov w8, s0 */
  ARC_W_W(c, 8, ARC_SU_R(c, 0));
  /* d5770: mov w21, w2 */
  ARC_W_W(c, 21, ARC_W_R(c, 2));
  /* d5774: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* d5778: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d577c: tbnz w8, #0x1f, #0xd5788 */
  if (((ARC_W_R(c, 8)) >> 31 & 1) != 0) goto L_d5788;
  /* d5780: mov w9, w8 */
  ARC_W_W(c, 9, ARC_W_R(c, 8));
  /* d5784: b #0xd57a0 */
  goto L_d57a0;
L_d5788:;
  /* d5788: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* d578c: b.eq #0xd5940 */
  if (ARC_COND(c, 0)) goto L_d5940;
  /* d5790: fabs s0, s0 */
  arc_s_w(c, 0, (float)(fabsf(ARC_S_R(c, 0))));
  /* d5794: mov w9, #0x2d */
  ARC_W_W(c, 9, UINT64_C(45));
  /* d5798: strb w9, [x19], #1 */
  { const uint64_t _a = ARC_X_R(c, 19);
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* d579c: fmov w9, s0 */
  ARC_W_W(c, 9, ARC_SU_R(c, 0));
L_d57a0:;
  /* d57a0: mov w10, #0x7f800000 */
  ARC_W_W(c, 10, UINT64_C(2139095040));
  /* d57a4: bics wzr, w10, w9 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 10) & (~ARC_W_R(c, 9)));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 31, _r); }
  /* d57a8: b.ne #0xd57d0 */
  if (ARC_COND(c, 1)) goto L_d57d0;
  /* d57ac: ands w10, w9, #0x7fffff */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 9) & UINT64_C(8388607));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 10, _r); }
  /* d57b0: b.eq #0xd5930 */
  if (ARC_COND(c, 0)) goto L_d5930;
  /* d57b4: tbz w8, #0x1f, #0xd594c */
  if (((ARC_W_R(c, 8)) >> 31 & 1) == 0) goto L_d594c;
  /* d57b8: cmp w10, #0x400, lsl #12 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(4194304));
  /* d57bc: b.ne #0xd594c */
  if (ARC_COND(c, 1)) goto L_d594c;
  /* d57c0: adrp x1, #0x4f000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(323584)));
  /* d57c4: add x1, x1, #0xa91 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2705)));
  /* d57c8: mov w21, #8 */
  ARC_W_W(c, 21, UINT64_C(8));
  /* d57cc: b #0xd5970 */
  goto L_d5970;
L_d57d0:;
  /* d57d0: fmov w8, s0 */
  ARC_W_W(c, 8, ARC_SU_R(c, 0));
  /* d57d4: cmp w21, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 21), UINT64_C(4));
  /* d57d8: b.ne #0xd58fc */
  if (ARC_COND(c, 1)) goto L_d58fc;
  /* d57dc: cbz w8, #0xd59a8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_d59a8;
  /* d57e0: lsr w9, w8, #0x17 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(23)) & 31)));
  /* d57e4: cmp w8, #0x800, lsl #12 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(8388608));
  /* d57e8: mov w10, #-0x7e */
  ARC_W_W(c, 10, UINT64_C(18446744073709551490));
  /* d57ec: sub w9, w9, #0x7f */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) - UINT64_C(127)));
  /* d57f0: csel w10, w10, w9, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* d57f4: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* d57f8: b.eq #0xd597c */
  if (ARC_COND(c, 0)) goto L_d597c;
  /* d57fc: cmp w8, #0x800, lsl #12 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(8388608));
  /* d5800: mov w11, #0x30 */
  ARC_W_W(c, 11, UINT64_C(48));
  /* d5804: and w8, w8, #0x7fffff */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(8388607)));
  /* d5808: cinc w12, w11, hs */
  ARC_W_W(c, 12, (ARC_COND(c, 2) ? (ARC_W_R(c, 11)) + 1 : (ARC_W_R(c, 11))));
  /* d580c: mov x11, x19 */
  ARC_X_W(c, 11, ARC_X_R(c, 19));
  /* d5810: strb w12, [x11], #1 */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 12));
  }
  /* d5814: cbz w8, #0xd586c */
  if ((ARC_W_R(c, 8)) == 0) goto L_d586c;
  /* d5818: cmp x11, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 20));
  /* d581c: b.eq #0xd597c */
  if (ARC_COND(c, 0)) goto L_d597c;
  /* d5820: mov w14, #0x2e */
  ARC_W_W(c, 14, UINT64_C(46));
  /* d5824: lsl w12, w8, #1 */
  ARC_W_W(c, 12, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* d5828: add x11, x19, #2 */
  ARC_X_W(c, 11, (ARC_X_R(c, 19) + UINT64_C(2)));
  /* d582c: mov w13, #0x14 */
  ARC_W_W(c, 13, UINT64_C(20));
  /* d5830: mov w8, #0x4b */
  ARC_W_W(c, 8, UINT64_C(75));
  /* d5834: strb w14, [x19, #1] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(1)), ARC_W_R(c, 14));
  /* d5838: nop  */
  /* nop: no architectural effect here */
  /* d583c: adr x14, #0x5460d */
  ARC_X_W(c, 14, (arc_image_bases[1] + UINT64_C(345613)));
  /* d5840: mov w15, #-1 */
  ARC_W_W(c, 15, UINT64_C(18446744073709551615));
L_d5844:;
  /* d5844: cmp x11, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 20));
  /* d5848: b.eq #0xd5a78 */
  if (ARC_COND(c, 0)) goto L_d5a78;
  /* d584c: mov w16, w12 */
  ARC_W_W(c, 16, ARC_W_R(c, 12));
  /* d5850: lsl w17, w15, w13 */
  ARC_W_W(c, 17, ((uint32_t)(ARC_W_R(c, 15)) << ((ARC_W_R(c, 13)) & 31)));
  /* d5854: lsr x16, x16, x13 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 16)) >> ((ARC_X_R(c, 13)) & 63)));
  /* d5858: sub w13, w13, #4 */
  ARC_W_W(c, 13, (ARC_W_R(c, 13) - UINT64_C(4)));
  /* d585c: bic w12, w12, w17 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) & (~ARC_W_R(c, 17))));
  /* d5860: ldrb w16, [x14, x16] */
  ARC_W_W(c, 16, arc_ld8((ARC_X_R(c, 14) + ARC_X_R(c, 16))));
  /* d5864: strb w16, [x11], #1 */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 16));
  }
  /* d5868: cbnz w12, #0xd5844 */
  if ((ARC_W_R(c, 12)) != 0) goto L_d5844;
L_d586c:;
  /* d586c: sub x8, x20, x11 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) - ARC_X_R(c, 11)));
  /* d5870: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* d5874: b.lt #0xd597c */
  if (ARC_COND(c, 11)) goto L_d597c;
  /* d5878: mov w8, #0x70 */
  ARC_W_W(c, 8, UINT64_C(112));
  /* d587c: add x0, x11, #2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 11) + UINT64_C(2)));
  /* d5880: cmp w10, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(0));
  /* d5884: strb w8, [x11] */
  arc_st8(ARC_X_R(c, 11), ARC_W_R(c, 8));
  /* d5888: mov w12, #0x2b */
  ARC_W_W(c, 12, UINT64_C(43));
  /* d588c: mov w13, #0x2d */
  ARC_W_W(c, 13, UINT64_C(45));
  /* d5890: sub x8, x20, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) - ARC_X_R(c, 0)));
  /* d5894: csel w12, w13, w12, lt */
  ARC_W_W(c, 12, (ARC_COND(c, 11) ? (ARC_W_R(c, 13)) : ARC_W_R(c, 12)));
  /* d5898: csneg w1, w9, w10, ge */
  ARC_W_W(c, 1, (ARC_COND(c, 10) ? (ARC_W_R(c, 9)) : ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 10)))));
  /* d589c: cmp x8, #9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(9));
  /* d58a0: strb w12, [x11, #1] */
  arc_st8((ARC_X_R(c, 11) + INT64_C(1)), ARC_W_R(c, 12));
  /* d58a4: b.gt #0xd58e8 */
  if (ARC_COND(c, 12)) goto L_d58e8;
  /* d58a8: orr w9, w1, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 1) | UINT64_C(1)));
  /* d58ac: mov w10, #0x20 */
  ARC_W_W(c, 10, UINT64_C(32));
  /* d58b0: clz w9, w9 */
  ARC_W_W(c, 9, arc_clz32(ARC_W_R(c, 9)));
  /* d58b4: sub w9, w10, w9 */
  ARC_W_W(c, 9, (ARC_W_R(c, 10) - ARC_W_R(c, 9)));
  /* d58b8: mov w10, #0x4d1 */
  ARC_W_W(c, 10, UINT64_C(1233));
  /* d58bc: mul w9, w9, w10 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) * (uint32_t)(ARC_W_R(c, 10))));
  /* d58c0: nop  */
  /* nop: no architectural effect here */
  /* d58c4: adr x10, #0x54634 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(345652)));
  /* d58c8: lsr w9, w9, #0xc */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(12)) & 31)));
  /* d58cc: ldr w10, [x10, w9, uxtw #2] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 10) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 9)))) << 2))));
  /* d58d0: cmp w1, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 1), ARC_W_R(c, 10));
  /* d58d4: cset w10, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? 1 : 0));
  /* d58d8: sub w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) - ARC_W_R(c, 10)));
  /* d58dc: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* d58e0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* d58e4: b.lt #0xd597c */
  if (ARC_COND(c, 11)) goto L_d597c;
L_d58e8:;
  /* d58e8: bl #0xd4eb8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(874732));
  fn1_d4eb8(c);
  /* d58ec: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d58f0: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* d58f4: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* d58f8: b #0xd5a3c */
  goto L_d5a3c;
L_d58fc:;
  /* d58fc: cbz w8, #0xd59cc */
  if ((ARC_W_R(c, 8)) == 0) goto L_d59cc;
  /* d5900: lsr w23, w8, #0x17 */
  ARC_W_W(c, 23, ((uint32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(23)) & 31)));
  /* d5904: cmp w21, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 21), UINT64_C(2));
  /* d5908: and w22, w8, #0x7fffff */
  ARC_W_W(c, 22, (ARC_W_R(c, 8) & UINT64_C(8388607)));
  /* d590c: b.ne #0xd5a08 */
  if (ARC_COND(c, 1)) goto L_d5a08;
  /* d5910: cmp w23, #0x97 */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(151));
  /* d5914: b.lo #0xd5a08 */
  if (ARC_COND(c, 3)) goto L_d5a08;
  /* d5918: sub w3, w23, #0x96 */
  ARC_W_W(c, 3, (ARC_W_R(c, 23) - UINT64_C(150)));
  /* d591c: orr w2, w22, #0x800000 */
  ARC_W_W(c, 2, (ARC_W_R(c, 22) | UINT64_C(8388608)));
  /* d5920: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d5924: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* d5928: bl #0xde9ec */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(874796));
  fn1_de9ec(c);
  /* d592c: b #0xd5a30 */
  goto L_d5a30;
L_d5930:;
  /* d5930: nop  */
  /* nop: no architectural effect here */
  /* d5934: adr x1, #0x50992 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(330130)));
  /* d5938: mov w21, #3 */
  ARC_W_W(c, 21, UINT64_C(3));
  /* d593c: b #0xd5970 */
  goto L_d5970;
L_d5940:;
  /* d5940: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* d5944: mov w8, #0x4b */
  ARC_W_W(c, 8, UINT64_C(75));
  /* d5948: b #0xd5a3c */
  goto L_d5a3c;
L_d594c:;
  /* d594c: adrp x8, #0x51000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(331776)));
  /* d5950: add x8, x8, #0xea3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3747)));
  /* d5954: adrp x10, #0x50000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(327680)));
  /* d5958: add x10, x10, #0xf0d */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(3853)));
  /* d595c: tst w9, #0x400000 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(4194304)));
  /* d5960: mov w9, #3 */
  ARC_W_W(c, 9, UINT64_C(3));
  /* d5964: mov w11, #9 */
  ARC_W_W(c, 11, UINT64_C(9));
  /* d5968: csel x1, x10, x8, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* d596c: csel x21, x11, x9, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 9)));
L_d5970:;
  /* d5970: sub x8, x20, x19 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) - ARC_X_R(c, 19)));
  /* d5974: cmp x8, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 21));
  /* d5978: b.ge #0xd598c */
  if (ARC_COND(c, 10)) goto L_d598c;
L_d597c:;
  /* d597c: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* d5980: mov w8, #0x4b */
  ARC_W_W(c, 8, UINT64_C(75));
  /* d5984: mov x19, x20 */
  ARC_X_W(c, 19, ARC_X_R(c, 20));
  /* d5988: b #0xd5a3c */
  goto L_d5a3c;
L_d598c:;
  /* d598c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d5990: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* d5994: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(874904));
  fn1_1449d8(c);
  /* d5998: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* d599c: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* d59a0: add x19, x19, x21 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + ARC_X_R(c, 21)));
  /* d59a4: b #0xd5a3c */
  goto L_d5a3c;
L_d59a8:;
  /* d59a8: sub x8, x20, x19 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) - ARC_X_R(c, 19)));
  /* d59ac: cmp x8, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(4));
  /* d59b0: b.lt #0xd597c */
  if (ARC_COND(c, 11)) goto L_d597c;
  /* d59b4: mov w10, #0x7030 */
  ARC_W_W(c, 10, UINT64_C(28720));
  /* d59b8: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* d59bc: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* d59c0: movk w10, #0x302b, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(808124416)));
  /* d59c4: str w10, [x19], #4 */
  { const uint64_t _a = ARC_X_R(c, 19);
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 10));
  }
  /* d59c8: b #0xd5a3c */
  goto L_d5a3c;
L_d59cc:;
  /* d59cc: cmp w21, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 21), UINT64_C(1));
  /* d59d0: b.ne #0xd5a5c */
  if (ARC_COND(c, 1)) goto L_d5a5c;
  /* d59d4: sub x8, x20, x19 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) - ARC_X_R(c, 19)));
  /* d59d8: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* d59dc: b.lt #0xd597c */
  if (ARC_COND(c, 11)) goto L_d597c;
  /* d59e0: nop  */
  /* nop: no architectural effect here */
  /* d59e4: adr x10, #0x5050e */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(328974)));
  /* d59e8: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* d59ec: ldr w11, [x10] */
  ARC_W_W(c, 11, arc_ld32(ARC_X_R(c, 10)));
  /* d59f0: ldrb w10, [x10, #4] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 10) + INT64_C(4))));
  /* d59f4: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* d59f8: str w11, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 11));
  /* d59fc: strb w10, [x19, #4] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(4)), ARC_W_R(c, 10));
  /* d5a00: add x19, x19, #5 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + UINT64_C(5)));
  /* d5a04: b #0xd5a3c */
  goto L_d5a3c;
L_d5a08:;
  /* d5a08: mov w0, w22 */
  ARC_W_W(c, 0, ARC_W_R(c, 22));
  /* d5a0c: mov w1, w23 */
  ARC_W_W(c, 1, ARC_W_R(c, 23));
  /* d5a10: bl #0xded60 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(875028));
  fn1_ded60(c);
  /* d5a14: mov x2, x0 */
  ARC_X_W(c, 2, ARC_X_R(c, 0));
  /* d5a18: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d5a1c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* d5a20: mov w3, w21 */
  ARC_W_W(c, 3, ARC_W_R(c, 21));
  /* d5a24: mov w4, w22 */
  ARC_W_W(c, 4, ARC_W_R(c, 22));
  /* d5a28: mov w5, w23 */
  ARC_W_W(c, 5, ARC_W_R(c, 23));
  /* d5a2c: bl #0xdf358 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(875056));
  fn1_df358(c);
L_d5a30:;
  /* d5a30: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d5a34: and x9, x1, #0xffffffff00000000 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) & UINT64_C(18446744069414584320)));
  /* d5a38: mov w8, w1 */
  ARC_W_W(c, 8, ARC_W_R(c, 1));
L_d5a3c:;
  /* d5a3c: orr x1, x9, x8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) | ARC_X_R(c, 8)));
  /* d5a40: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d5a44: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d5a48: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* d5a4c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* d5a50: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d5a54: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d5a58: ret  */
  return;
L_d5a5c:;
  /* d5a5c: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* d5a60: b.eq #0xd597c */
  if (ARC_COND(c, 0)) goto L_d597c;
  /* d5a64: mov w10, #0x30 */
  ARC_W_W(c, 10, UINT64_C(48));
  /* d5a68: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* d5a6c: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* d5a70: strb w10, [x19], #1 */
  { const uint64_t _a = ARC_X_R(c, 19);
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 10));
  }
  /* d5a74: b #0xd5a3c */
  goto L_d5a3c;
L_d5a78:;
  /* d5a78: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* d5a7c: mov x19, x20 */
  ARC_X_W(c, 19, ARC_X_R(c, 20));
  /* d5a80: b #0xd5a3c */
  goto L_d5a3c;
  /* d5a84: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(875144));
  fn1_a1454(c);
}

void fn1_d9cf0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038820080));
  /* d9cf0: bti c */
  /* bti: no architectural effect here */
  /* d9cf4: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* d9cf8: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* d9cfc: strb w9, [x8, #0x30] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(48)), ARC_W_R(c, 9));
  /* d9d00: stp q0, q0, [x8, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* d9d04: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* d9d08: str x0, [x8, #0x18] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(24)), ARC_X_R(c, 0));
  /* d9d0c: ret  */
  return;
}

void fn1_dc1d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038829520));
  /* dc1d0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* dc1d4: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* dc1d8: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* dc1dc: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* dc1e0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* dc1e4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* dc1e8: add x0, x0, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(8)));
  /* dc1ec: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* dc1f0: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* dc1f4: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* dc1f8: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(901628));
  fn1_142518(c);
  /* dc1fc: cbnz w0, #0xdc238 */
  if ((ARC_W_R(c, 0)) != 0) goto L_dc238;
  /* dc200: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* dc204: ldr x8, [x0, #0x30]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(48));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(48));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* dc208: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* dc20c: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* dc210: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* dc214: mov x3, x20 */
  ARC_X_W(c, 3, ARC_X_R(c, 20));
  /* dc218: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(901660));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* dc21c: add x0, x19, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* dc220: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(901668));
  fn1_142560(c);
  /* dc224: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* dc228: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* dc22c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* dc230: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* dc234: ret  */
  return;
L_dc238:;
  /* dc238: nop  */
  /* nop: no architectural effect here */
  /* dc23c: adr x1, #0x50f67 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331623)));
  /* dc240: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(901700));
  fn1_142a40(c);
  /* dc244: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(901704));
  fn1_a1454(c);
  /* dc248: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* dc24c: add x0, x19, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* dc250: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(901716));
  fn1_142560(c);
  /* dc254: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* dc258: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(901724));
  fn1_9cc20(c);
  /* dc25c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(901728));
  fn1_a1454(c);
}

void fn1_e0c34(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038848564));
  /* e0c34: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e0c38: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e0c3c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* e0c40: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e0c44: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e0c48: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e0c4c: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* e0c50: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* e0c54: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* e0c58: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(920668));
  fn1_142860(c);
  /* e0c5c: mov x3, x0 */
  ARC_X_W(c, 3, ARC_X_R(c, 0));
  /* e0c60: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e0c64: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* e0c68: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* e0c6c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e0c70: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* e0c74: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e0c78: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e0c7c: b #0x142cf8 */
  fn1_142cf8(c); return;
}

void fn1_e371c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038859548));
  /* e371c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e3720: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e3724: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e3728: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e372c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e3730: ldrb w10, [x1] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 1)));
  /* e3734: ldr x8, [x1, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* e3738: lsr x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* e373c: tst w10, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1)));
  /* e3740: csel x8, x9, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* e3744: subs x9, x8, x2 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 2)));
  /* e3748: b.lo #0xe3820 */
  if (ARC_COND(c, 3)) goto L_e3820;
  /* e374c: ldp x8, x13, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 13, arc_ld64(_pa + 8));
  }
  /* e3750: add x12, x1, #4 */
  ARC_X_W(c, 12, (ARC_X_R(c, 1) + UINT64_C(4)));
  /* e3754: ldr x11, [x1, #0x10] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* e3758: tst w10, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1)));
  /* e375c: ldrb w10, [x0] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 0)));
  /* e3760: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e3764: csel x11, x12, x11, eq */
  ARC_X_W(c, 11, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* e3768: cmp x9, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 3));
  /* e376c: and x12, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 12, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* e3770: csel x6, x9, x3, lo */
  ARC_X_W(c, 6, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 3)));
  /* e3774: sub x9, x12, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 12) - UINT64_C(1)));
  /* e3778: tst w10, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1)));
  /* e377c: mov w10, #4 */
  ARC_W_W(c, 10, UINT64_C(4));
  /* e3780: ubfx x12, x8, #1, #7 */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 8)) >> 1) & UINT64_C(127)));
  /* e3784: add x7, x11, x2, lsl #2 */
  ARC_X_W(c, 7, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 2)) << 2)));
  /* e3788: csel x1, x10, x9, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e378c: tst x8, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 8) & UINT64_C(1)));
  /* e3790: csel x20, x12, x13, eq */
  ARC_X_W(c, 20, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 13)));
  /* e3794: sub x9, x1, x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) - ARC_X_R(c, 20)));
  /* e3798: cmp x9, x6 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 6));
  /* e379c: b.hs #0xe37c0 */
  if (ARC_COND(c, 2)) goto L_e37c0;
  /* e37a0: sub x8, x6, x1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 6) - ARC_X_R(c, 1)));
  /* e37a4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e37a8: mov x3, x20 */
  ARC_X_W(c, 3, ARC_X_R(c, 20));
  /* e37ac: add x2, x8, x20 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) + ARC_X_R(c, 20)));
  /* e37b0: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* e37b4: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* e37b8: bl #0x142d40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(931772));
  fn1_142d40(c);
  /* e37bc: b #0xe3808 */
  goto L_e3808;
L_e37c0:;
  /* e37c0: cbz x6, #0xe3808 */
  if ((ARC_X_R(c, 6)) == 0) goto L_e3808;
  /* e37c4: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* e37c8: add x10, x19, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* e37cc: tst x8, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 8) & UINT64_C(1)));
  /* e37d0: lsl x2, x6, #2 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 6)) << ((UINT64_C(2)) & 63)));
  /* e37d4: mov x1, x7 */
  ARC_X_W(c, 1, ARC_X_R(c, 7));
  /* e37d8: mov x22, x6 */
  ARC_X_W(c, 22, ARC_X_R(c, 6));
  /* e37dc: csel x21, x10, x9, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e37e0: add x0, x21, x20, lsl #2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ((uint64_t)(ARC_X_R(c, 20)) << 2)));
  /* e37e4: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(931816));
  fn1_1449f0(c);
  /* e37e8: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* e37ec: add x8, x20, x22 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + ARC_X_R(c, 22)));
  /* e37f0: tbnz w9, #0, #0xe3800 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_e3800;
  /* e37f4: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* e37f8: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* e37fc: b #0xe3804 */
  goto L_e3804;
L_e3800:;
  /* e3800: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_e3804:;
  /* e3804: str wzr, [x21, x8, lsl #2] */
  arc_st32((ARC_X_R(c, 21) + ((uint64_t)(ARC_X_R(c, 8)) << 2)), ARC_W_R(c, 31));
L_e3808:;
  /* e3808: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e380c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e3810: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e3814: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e3818: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e381c: ret  */
  return;
L_e3820:;
  /* e3820: bl #0xe1f80 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(931876));
  fn1_e1f80(c);
}

void fn1_e7d44(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038877508));
  /* e7d44: bti c */
  /* bti: no architectural effect here */
  /* e7d48: nop  */
  /* nop: no architectural effect here */
  /* e7d4c: adr x8, #0x156d38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404216)));
  /* e7d50: cmp w1, #0xfff */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(4095));
  /* e7d54: nop  */
  /* nop: no architectural effect here */
  /* e7d58: adr x9, #0x156d40 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404224)));
  /* e7d5c: mov w0, w1 */
  ARC_W_W(c, 0, ARC_W_R(c, 1));
  /* e7d60: csel x1, x9, x8, gt */
  ARC_X_W(c, 1, (ARC_COND(c, 12) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* e7d64: ret  */
  return;
}

void fn1_ea59c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038887836));
  /* ea59c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ea5a0: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* ea5a4: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ea5a8: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ea5ac: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ea5b0: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* ea5b4: ldr x20, [x0] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 0)));
  /* ea5b8: cbz x20, #0xea778 */
  if ((ARC_X_R(c, 20)) == 0) goto L_ea778;
  /* ea5bc: ldrb w8, [x20, #0x70] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(112))));
  /* ea5c0: tbnz w8, #0, #0xea758 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_ea758;
  /* ea5c4: ldr x8, [x20, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* ea5c8: cbnz x8, #0xea758 */
  if ((ARC_X_R(c, 8)) != 0) goto L_ea758;
  /* ea5cc: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* ea5d0: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* ea5d4: b.lt #0xea758 */
  if (ARC_COND(c, 11)) goto L_ea758;
  /* ea5d8: nop  */
  /* nop: no architectural effect here */
  /* ea5dc: adr x8, #0x15d240 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1430080)));
  /* ea5e0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ea5e4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* ea5e8: tbz w8, #0, #0xea790 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_ea790;
L_ea5ec:;
  /* ea5ec: nop  */
  /* nop: no architectural effect here */
  /* ea5f0: adr x2, #0x156d48 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1404232)));
  /* ea5f4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* ea5f8: mov w1, #4 */
  ARC_W_W(c, 1, UINT64_C(4));
  /* ea5fc: bl #0x143148 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960000));
  fn1_143148(c);
  /* ea600: stur xzr, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 31));
  /* ea604: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* ea608: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* ea60c: mov w2, #0xa0 */
  ARC_W_W(c, 2, UINT64_C(160));
  /* ea610: bl #0x142818 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960020));
  fn1_142818(c);
  /* ea614: ldur x21, [x29, #-8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* ea618: cbnz x21, #0xea62c */
  if ((ARC_X_R(c, 21)) != 0) goto L_ea62c;
  /* ea61c: mov w0, #0xa0 */
  ARC_W_W(c, 0, UINT64_C(160));
  /* ea620: bl #0xa24dc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960036));
  fn1_a24dc(c);
  /* ea624: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ea628: cbz x0, #0xea7b0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ea7b0;
L_ea62c:;
  /* ea62c: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* ea630: mov x22, x21 */
  ARC_X_W(c, 22, ARC_X_R(c, 21));
  /* ea634: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* ea638: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* ea63c: nop  */
  /* nop: no architectural effect here */
  /* ea640: adr x10, #0xbdb38 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(777016)));
  /* ea644: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ea648: str q0, [x22, #0x80]! */
  arc_st64((ARC_X_R(c, 22) + INT64_C(128)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 22) + INT64_C(128)) + 8, (c)->q[0].u64[1]);
  ARC_X_W(c, 22, ARC_X_R(c, 22) + INT64_C(128));
  /* ea64c: str q0, [x21, #0x90] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(144)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 21) + INT64_C(144)) + 8, (c)->q[0].u64[1]);
  /* ea650: stp q0, q0, [x21, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* ea654: stp q0, q0, [x21, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(64));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* ea658: stp q0, q0, [x21, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(96));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* ea65c: ldr x8, [x8, #0x8b8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2232))));
  /* ea660: stp q0, q0, [x21] */
  { const uint64_t _pa = ARC_X_R(c, 21);
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* ea664: ldar x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* ea668: ldr x9, [x9, #0x8b0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2224))));
  /* ea66c: str x8, [x21, #0x20] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(32)), ARC_X_R(c, 8));
  /* ea670: ldar x8, [x9] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 9)));
  /* ea674: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* ea678: ldr x9, [x9, #0xa68] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2664))));
  /* ea67c: str x8, [x21, #0x28] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(40)), ARC_X_R(c, 8));
  /* ea680: nop  */
  /* nop: no architectural effect here */
  /* ea684: adr x8, #0xeac2c */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(961580)));
  /* ea688: stp x9, x8, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* ea68c: mov x8, #0x2b00 */
  ARC_X_W(c, 8, UINT64_C(11008));
  /* ea690: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* ea694: movk x8, #0x432b, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(1126891520)));
  /* ea698: ldr x9, [x9, #0x908] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2312))));
  /* ea69c: movk x8, #0x4e47, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(86066849644544)));
  /* ea6a0: movk x8, #0x434c, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(4849250898771181568)));
  /* ea6a4: stp x8, x10, [x21, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* ea6a8: add x8, x9, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* ea6ac: ldr x9, [sp, #8] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(8))));
  /* ea6b0: str x8, [x22] */
  arc_st64(ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* ea6b4: sub x1, x9, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) - UINT64_C(8)));
  /* ea6b8: str x9, [x21, #0x88] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(136)), ARC_X_R(c, 9));
  /* ea6bc: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960192));
  fn1_a2030(c);
  /* ea6c0: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* ea6c4: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* ea6c8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ea6cc: ldr x8, [x8, #0xa60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2656))));
  /* ea6d0: ldr q0, [sp, #0x10] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(16))), arc_ld64(((c)->sp + INT64_C(16)) + 8));
  /* ea6d4: stur x22, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 22));
  /* ea6d8: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* ea6dc: str q0, [x21, #0x90] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(144)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 21) + INT64_C(144)) + 8, (c)->q[0].u64[1]);
  /* ea6e0: str x8, [x22] */
  arc_st64(ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* ea6e4: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960232));
  fn1_bd950(c);
  /* ea6e8: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* ea6ec: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ea6f0: bl #0x143190 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960244));
  fn1_143190(c);
  /* ea6f4: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* ea6f8: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ea6fc: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960256));
  fn1_bd950(c);
  /* ea700: cmp x0, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(1));
  /* ea704: b.ne #0xea74c */
  if (ARC_COND(c, 1)) goto L_ea74c;
  /* ea708: ldr x8, [x21, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(24))));
  /* ea70c: cbz x8, #0xea718 */
  if ((ARC_X_R(c, 8)) == 0) goto L_ea718;
  /* ea710: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* ea714: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960280));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ea718:;
  /* ea718: nop  */
  /* nop: no architectural effect here */
  /* ea71c: adr x8, #0x1576e0 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1406688)));
  /* ea720: cmp x21, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* ea724: b.lo #0xea744 */
  if (ARC_COND(c, 3)) goto L_ea744;
  /* ea728: adrp x8, #0x157000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404928)));
  /* ea72c: add x8, x8, #0x8e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2272)));
  /* ea730: cmp x21, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* ea734: b.hs #0xea744 */
  if (ARC_COND(c, 2)) goto L_ea744;
  /* ea738: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ea73c: bl #0xa2664 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960320));
  fn1_a2664(c);
  /* ea740: b #0xea74c */
  goto L_ea74c;
L_ea744:;
  /* ea744: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ea748: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960332));
  fn1_142800(c);
L_ea74c:;
  /* ea74c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* ea750: bl #0x1431f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960340));
  fn1_1431f0(c);
  /* ea754: ldr x20, [x19] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 19)));
L_ea758:;
  /* ea758: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* ea75c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ea760: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960356));
  fn1_bd950(c);
  /* ea764: cbnz x0, #0xea778 */
  if ((ARC_X_R(c, 0)) != 0) goto L_ea778;
  /* ea768: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* ea76c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ea770: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ea774: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960376));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ea778:;
  /* ea778: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ea77c: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ea780: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ea784: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* ea788: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ea78c: ret  */
  return;
L_ea790:;
  /* ea790: nop  */
  /* nop: no architectural effect here */
  /* ea794: adr x0, #0x15d240 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1430080)));
  /* ea798: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960412));
  fn1_1424b8(c);
  /* ea79c: cbz w0, #0xea5ec */
  if ((ARC_W_R(c, 0)) == 0) goto L_ea5ec;
  /* ea7a0: nop  */
  /* nop: no architectural effect here */
  /* ea7a4: adr x0, #0x15d240 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1430080)));
  /* ea7a8: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960428));
  fn1_1424d0(c);
  /* ea7ac: b #0xea5ec */
  goto L_ea5ec;
L_ea7b0:;
  /* ea7b0: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960436));
  fn1_142488(c);
  /* ea7b4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960440));
  fn1_a1454(c);
  /* ea7b8: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960444));
  fn1_a1454(c);
  /* ea7bc: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960448));
  fn1_a1454(c);
  /* ea7c0: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960452));
  fn1_a1454(c);
}

void fn1_ebf18(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038894360));
  /* ebf18: bti c */
  /* bti: no architectural effect here */
  /* ebf1c: nop  */
  /* nop: no architectural effect here */
  /* ebf20: adr x0, #0x51a8c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(334476)));
  /* ebf24: ret  */
  return;
}

void fn1_ed908(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038901000));
  /* ed908: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ed90c: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ed910: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* ed914: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ed918: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ed91c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ed920: cmp x2, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 2), UINT64_C(1));
  /* ed924: b.lt #0xed9b8 */
  if (ARC_COND(c, 11)) goto L_ed9b8;
  /* ed928: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* ed92c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* ed930: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* ed934: mov x21, xzr */
  ARC_X_W(c, 21, ARC_X_R(c, 31));
  /* ed938: b #0xed954 */
  goto L_ed954;
L_ed93c:;
  /* ed93c: add x8, x0, x23 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 23)));
  /* ed940: add x20, x20, x23 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + ARC_X_R(c, 23)));
  /* ed944: add x21, x23, x21 */
  ARC_X_W(c, 21, (ARC_X_R(c, 23) + ARC_X_R(c, 21)));
  /* ed948: str x8, [x22, #0x30] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(48)), ARC_X_R(c, 8));
  /* ed94c: cmp x21, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 19));
  /* ed950: b.ge #0xed9bc */
  if (ARC_COND(c, 10)) goto L_ed9bc;
L_ed954:;
  /* ed954: ldp x0, x8, [x22, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 22) + INT64_C(48));
    ARC_X_W(c, 0, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* ed958: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* ed95c: b.hs #0xed988 */
  if (ARC_COND(c, 2)) goto L_ed988;
  /* ed960: sub x8, x8, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 0)));
  /* ed964: sub x9, x19, x21 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) - ARC_X_R(c, 21)));
  /* ed968: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* ed96c: csel x23, x9, x8, lt */
  ARC_X_W(c, 23, (ARC_COND(c, 11) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* ed970: cbz x23, #0xed93c */
  if ((ARC_X_R(c, 23)) == 0) goto L_ed93c;
  /* ed974: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* ed978: mov x2, x23 */
  ARC_X_W(c, 2, ARC_X_R(c, 23));
  /* ed97c: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(973184));
  fn1_1449f0(c);
  /* ed980: ldr x0, [x22, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 22) + INT64_C(48))));
  /* ed984: b #0xed93c */
  goto L_ed93c;
L_ed988:;
  /* ed988: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* ed98c: ldrb w1, [x20] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 20)));
  /* ed990: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* ed994: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* ed998: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(973212));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ed99c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* ed9a0: b.eq #0xed9bc */
  if (ARC_COND(c, 0)) goto L_ed9bc;
  /* ed9a4: add x20, x20, #1 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(1)));
  /* ed9a8: add x21, x21, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* ed9ac: cmp x21, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 19));
  /* ed9b0: b.lt #0xed954 */
  if (ARC_COND(c, 11)) goto L_ed954;
  /* ed9b4: b #0xed9bc */
  goto L_ed9bc;
L_ed9b8:;
  /* ed9b8: mov x21, xzr */
  ARC_X_W(c, 21, ARC_X_R(c, 31));
L_ed9bc:;
  /* ed9bc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ed9c0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ed9c4: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* ed9c8: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ed9cc: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ed9d0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ed9d4: ret  */
  return;
}

void fn1_f1cf4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038918388));
  /* f1cf4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f1cf8: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* f1cfc: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f1d00: stp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* f1d04: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* f1d08: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f1d0c: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f1d10: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* f1d14: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* f1d18: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f1d1c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f1d20: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f1d24: bl #0x143610 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(990504));
  fn1_143610(c);
  /* f1d28: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* f1d2c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f1d30: b.ne #0xf1e70 */
  if (ARC_COND(c, 1)) goto L_f1e70;
  /* f1d34: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f1d38: nop  */
  /* nop: no architectural effect here */
  /* f1d3c: adr x26, #0x15dc40 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f1d40: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f1d44: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f1d48: ldr x22, [x8, #0x30] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f1d4c: cmp x22, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 26));
  /* f1d50: stur x22, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 22));
  /* f1d54: b.eq #0xf1d64 */
  if (ARC_COND(c, 0)) goto L_f1d64;
  /* f1d58: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f1d5c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f1d60: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(990564));
  fn1_db2e0(c);
L_f1d64:;
  /* f1d64: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f1d68: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* f1d6c: ldr x1, [x1, #0xb50] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2896))));
  /* f1d70: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(990580));
  fn1_143748(c);
  /* f1d74: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* f1d78: cmp x22, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 26));
  /* f1d7c: b.eq #0xf1da0 */
  if (ARC_COND(c, 0)) goto L_f1da0;
  /* f1d80: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f1d84: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f1d88: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(990604));
  fn1_bd950(c);
  /* f1d8c: cbnz x0, #0xf1da0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f1da0;
  /* f1d90: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f1d94: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* f1d98: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f1d9c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(990624));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f1da0:;
  /* f1da0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f1da4: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f1da8: add x22, x19, x8 */
  ARC_X_W(c, 22, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f1dac: ldr w3, [x22, #0x90] */
  ARC_W_W(c, 3, arc_ld32((ARC_X_R(c, 22) + INT64_C(144))));
  /* f1db0: ldr x23, [x22, #0x28] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 22) + INT64_C(40))));
  /* f1db4: cmn w3, #1 */
  (void)arc_add32(c, ARC_W_R(c, 3), UINT64_C(1), 0);
  /* f1db8: b.ne #0xf1e2c */
  if (ARC_COND(c, 1)) goto L_f1e2c;
  /* f1dbc: ldr x24, [x22, #0x30] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 22) + INT64_C(48))));
  /* f1dc0: cmp x24, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 26));
  /* f1dc4: stur x24, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 24));
  /* f1dc8: b.eq #0xf1dd8 */
  if (ARC_COND(c, 0)) goto L_f1dd8;
  /* f1dcc: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f1dd0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f1dd4: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(990680));
  fn1_db2e0(c);
L_f1dd8:;
  /* f1dd8: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f1ddc: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* f1de0: ldr x1, [x1, #0xb40] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2880))));
  /* f1de4: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(990696));
  fn1_143748(c);
  /* f1de8: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f1dec: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* f1df0: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* f1df4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(990712));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f1df8: mov w25, w0 */
  ARC_W_W(c, 25, ARC_W_R(c, 0));
  /* f1dfc: cmp x24, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 26));
  /* f1e00: b.eq #0xf1e24 */
  if (ARC_COND(c, 0)) goto L_f1e24;
  /* f1e04: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f1e08: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f1e0c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(990736));
  fn1_bd950(c);
  /* f1e10: cbnz x0, #0xf1e24 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f1e24;
  /* f1e14: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f1e18: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f1e1c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f1e20: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(990756));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f1e24:;
  /* f1e24: and w3, w25, #0xff */
  ARC_W_W(c, 3, (ARC_W_R(c, 25) & UINT64_C(255)));
  /* f1e28: str w3, [x22, #0x90] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(144)), ARC_W_R(c, 3));
L_f1e2c:;
  /* f1e2c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* f1e30: mov w4, w20 */
  ARC_W_W(c, 4, ARC_W_R(c, 20));
  /* f1e34: ldr x8, [x8, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f1e38: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f1e3c: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* f1e40: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* f1e44: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(990792));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f1e48: cbnz x0, #0xf1e70 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f1e70;
  /* f1e4c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f1e50: mov w10, #5 */
  ARC_W_W(c, 10, UINT64_C(5));
  /* f1e54: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f1e58: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f1e5c: ldp w9, w11, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* f1e60: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* f1e64: tst w11, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & ARC_W_R(c, 9)));
  /* f1e68: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f1e6c: b.ne #0xf1e9c */
  if (ARC_COND(c, 1)) goto L_f1e9c;
L_f1e70:;
  /* f1e70: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f1e74: bl #0x143628 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(990840));
  fn1_143628(c);
L_f1e78:;
  /* f1e78: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f1e7c: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f1e80: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f1e84: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* f1e88: ldp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* f1e8c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f1e90: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* f1e94: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f1e98: ret  */
  return;
L_f1e9c:;
  /* f1e9c: nop  */
  /* nop: no architectural effect here */
  /* f1ea0: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f1ea4: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(990888));
  fn1_ec720(c);
  /* f1ea8: b #0xf1ed4 */
  goto L_f1ed4;
  /* f1eac: cmp x24, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 26));
  /* f1eb0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f1eb4: b.eq #0xf1f08 */
  if (ARC_COND(c, 0)) goto L_f1f08;
  /* f1eb8: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f1ebc: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f1ec0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(990916));
  fn1_bd950(c);
  /* f1ec4: cbnz x0, #0xf1f08 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f1f08;
  /* f1ec8: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f1ecc: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f1ed0: b #0xf1f00 */
  goto L_f1f00;
L_f1ed4:;
  /* f1ed4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f1ed8: b #0xf1f08 */
  goto L_f1f08;
  /* f1edc: cmp x22, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 26));
  /* f1ee0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f1ee4: b.eq #0xf1f08 */
  if (ARC_COND(c, 0)) goto L_f1f08;
  /* f1ee8: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f1eec: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f1ef0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(990964));
  fn1_bd950(c);
  /* f1ef4: cbnz x0, #0xf1f08 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f1f08;
  /* f1ef8: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f1efc: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
L_f1f00:;
  /* f1f00: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f1f04: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(990984));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f1f08:;
  /* f1f08: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f1f0c: bl #0x143628 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(990992));
  fn1_143628(c);
  /* f1f10: b #0xf1f18 */
  goto L_f1f18;
  /* f1f14: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_f1f18:;
  /* f1f18: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f1f1c: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(991008));
  fn1_142548(c);
  /* f1f20: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f1f24: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f1f28: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f1f2c: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* f1f30: ldrb w10, [x8, #0x24] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f1f34: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f1f38: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f1f3c: tbnz w10, #0, #0xf1f48 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_f1f48;
  /* f1f40: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(991044));
  fn1_142980(c);
  /* f1f44: b #0xf1e78 */
  goto L_f1e78;
L_f1f48:;
  /* f1f48: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(991052));
  fn1_1429b0(c);
  /* f1f4c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f1f50: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(991060));
  fn1_142980(c);
  /* f1f54: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f1f58: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(991068));
  fn1_9cc20(c);
  /* f1f5c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(991072));
  fn1_a1454(c);
}

void fn1_f433c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038928188));
  /* f433c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f4340: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f4344: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* f4348: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f434c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f4350: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f4354: cmp x2, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 2), UINT64_C(1));
  /* f4358: b.lt #0xf43f4 */
  if (ARC_COND(c, 11)) goto L_f43f4;
  /* f435c: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* f4360: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* f4364: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* f4368: mov x21, xzr */
  ARC_X_W(c, 21, ARC_X_R(c, 31));
  /* f436c: b #0xf4388 */
  goto L_f4388;
L_f4370:;
  /* f4370: add x8, x0, x23 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 23)));
  /* f4374: add x20, x20, x23 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + ARC_X_R(c, 23)));
  /* f4378: add x21, x24, x21 */
  ARC_X_W(c, 21, (ARC_X_R(c, 24) + ARC_X_R(c, 21)));
  /* f437c: str x8, [x22, #0x30] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(48)), ARC_X_R(c, 8));
  /* f4380: cmp x21, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 19));
  /* f4384: b.ge #0xf43f8 */
  if (ARC_COND(c, 10)) goto L_f43f8;
L_f4388:;
  /* f4388: ldp x0, x8, [x22, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 22) + INT64_C(48));
    ARC_X_W(c, 0, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* f438c: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* f4390: b.hs #0xf43c4 */
  if (ARC_COND(c, 2)) goto L_f43c4;
  /* f4394: sub x8, x8, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 0)));
  /* f4398: sub x9, x19, x21 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) - ARC_X_R(c, 21)));
  /* f439c: asr x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* f43a0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* f43a4: csel x24, x9, x8, lt */
  ARC_X_W(c, 24, (ARC_COND(c, 11) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* f43a8: lsl x23, x24, #2 */
  ARC_X_W(c, 23, ((uint64_t)(ARC_X_R(c, 24)) << ((UINT64_C(2)) & 63)));
  /* f43ac: cbz x24, #0xf4370 */
  if ((ARC_X_R(c, 24)) == 0) goto L_f4370;
  /* f43b0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* f43b4: mov x2, x23 */
  ARC_X_W(c, 2, ARC_X_R(c, 23));
  /* f43b8: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1000380));
  fn1_1449f0(c);
  /* f43bc: ldr x0, [x22, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 22) + INT64_C(48))));
  /* f43c0: b #0xf4370 */
  goto L_f4370;
L_f43c4:;
  /* f43c4: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f43c8: ldr w1, [x20] */
  ARC_W_W(c, 1, arc_ld32(ARC_X_R(c, 20)));
  /* f43cc: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* f43d0: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* f43d4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1000408));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f43d8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* f43dc: b.eq #0xf43f8 */
  if (ARC_COND(c, 0)) goto L_f43f8;
  /* f43e0: add x20, x20, #4 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(4)));
  /* f43e4: add x21, x21, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* f43e8: cmp x21, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 19));
  /* f43ec: b.lt #0xf4388 */
  if (ARC_COND(c, 11)) goto L_f4388;
  /* f43f0: b #0xf43f8 */
  goto L_f43f8;
L_f43f4:;
  /* f43f4: mov x21, xzr */
  ARC_X_W(c, 21, ARC_X_R(c, 31));
L_f43f8:;
  /* f43f8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f43fc: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f4400: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f4404: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* f4408: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f440c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f4410: ret  */
  return;
}

void fn1_f873c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038945596));
  /* f873c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f8740: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* f8744: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f8748: str x25, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 25));
  /* f874c: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* f8750: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f8754: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f8758: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f875c: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* f8760: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f8764: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f8768: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f876c: bl #0x143688 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1017712));
  fn1_143688(c);
  /* f8770: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* f8774: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f8778: b.ne #0xf88c0 */
  if (ARC_COND(c, 1)) goto L_f88c0;
  /* f877c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f8780: nop  */
  /* nop: no architectural effect here */
  /* f8784: adr x25, #0x15dc40 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f8788: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f878c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f8790: ldr x22, [x8, #0x30] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f8794: cmp x22, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 25));
  /* f8798: str x22, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 22));
  /* f879c: b.eq #0xf87ac */
  if (ARC_COND(c, 0)) goto L_f87ac;
  /* f87a0: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f87a4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f87a8: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1017772));
  fn1_db2e0(c);
L_f87ac:;
  /* f87ac: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f87b0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* f87b4: ldr x1, [x1, #0xb68] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2920))));
  /* f87b8: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1017788));
  fn1_143748(c);
  /* f87bc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* f87c0: cmp x22, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 25));
  /* f87c4: b.eq #0xf87e8 */
  if (ARC_COND(c, 0)) goto L_f87e8;
  /* f87c8: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f87cc: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f87d0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1017812));
  fn1_bd950(c);
  /* f87d4: cbnz x0, #0xf87e8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f87e8;
  /* f87d8: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f87dc: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* f87e0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f87e4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1017832));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f87e8:;
  /* f87e8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f87ec: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f87f0: add x22, x19, x8 */
  ARC_X_W(c, 22, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f87f4: ldr w3, [x22, #0x90] */
  ARC_W_W(c, 3, arc_ld32((ARC_X_R(c, 22) + INT64_C(144))));
  /* f87f8: ldr x23, [x22, #0x28] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 22) + INT64_C(40))));
  /* f87fc: cmn w3, #1 */
  (void)arc_add32(c, ARC_W_R(c, 3), UINT64_C(1), 0);
  /* f8800: b.ne #0xf887c */
  if (ARC_COND(c, 1)) goto L_f887c;
  /* f8804: ldr x24, [x22, #0x30] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 22) + INT64_C(48))));
  /* f8808: cmp x24, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 25));
  /* f880c: str x24, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 24));
  /* f8810: b.eq #0xf8820 */
  if (ARC_COND(c, 0)) goto L_f8820;
  /* f8814: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f8818: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f881c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1017888));
  fn1_db2e0(c);
L_f8820:;
  /* f8820: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f8824: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* f8828: ldr x1, [x1, #0xb58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2904))));
  /* f882c: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1017904));
  fn1_143748(c);
  /* f8830: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f8834: ldr x8, [x8, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* f8838: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* f883c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1017920));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f8840: mov w3, w0 */
  ARC_W_W(c, 3, ARC_W_R(c, 0));
  /* f8844: cmp x24, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 25));
  /* f8848: b.eq #0xf8878 */
  if (ARC_COND(c, 0)) goto L_f8878;
  /* f884c: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f8850: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f8854: mov w25, w3 */
  ARC_W_W(c, 25, ARC_W_R(c, 3));
  /* f8858: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1017948));
  fn1_bd950(c);
  /* f885c: mov w3, w25 */
  ARC_W_W(c, 3, ARC_W_R(c, 25));
  /* f8860: cbnz x0, #0xf8878 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f8878;
  /* f8864: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f8868: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f886c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f8870: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1017972));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f8874: mov w3, w25 */
  ARC_W_W(c, 3, ARC_W_R(c, 25));
L_f8878:;
  /* f8878: str w3, [x22, #0x90] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(144)), ARC_W_R(c, 3));
L_f887c:;
  /* f887c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* f8880: mov w4, w20 */
  ARC_W_W(c, 4, ARC_W_R(c, 20));
  /* f8884: ldr x8, [x8, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f8888: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f888c: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* f8890: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* f8894: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1018008));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f8898: cbnz x0, #0xf88c0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f88c0;
  /* f889c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f88a0: mov w10, #5 */
  ARC_W_W(c, 10, UINT64_C(5));
  /* f88a4: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f88a8: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f88ac: ldp w9, w11, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* f88b0: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* f88b4: tst w11, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & ARC_W_R(c, 9)));
  /* f88b8: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f88bc: b.ne #0xf88ec */
  if (ARC_COND(c, 1)) goto L_f88ec;
L_f88c0:;
  /* f88c0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f88c4: bl #0x1436a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1018056));
  fn1_1436a0(c);
L_f88c8:;
  /* f88c8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f88cc: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f88d0: ldr x25, [sp, #0x20] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(32))));
  /* f88d4: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f88d8: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* f88dc: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f88e0: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* f88e4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f88e8: ret  */
  return;
L_f88ec:;
  /* f88ec: nop  */
  /* nop: no architectural effect here */
  /* f88f0: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f88f4: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1018104));
  fn1_ec720(c);
  /* f88f8: b #0xf8924 */
  goto L_f8924;
  /* f88fc: cmp x24, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 25));
  /* f8900: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f8904: b.eq #0xf8958 */
  if (ARC_COND(c, 0)) goto L_f8958;
  /* f8908: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f890c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f8910: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1018132));
  fn1_bd950(c);
  /* f8914: cbnz x0, #0xf8958 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f8958;
  /* f8918: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f891c: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f8920: b #0xf8950 */
  goto L_f8950;
L_f8924:;
  /* f8924: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f8928: b #0xf8958 */
  goto L_f8958;
  /* f892c: cmp x22, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 25));
  /* f8930: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f8934: b.eq #0xf8958 */
  if (ARC_COND(c, 0)) goto L_f8958;
  /* f8938: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f893c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f8940: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1018180));
  fn1_bd950(c);
  /* f8944: cbnz x0, #0xf8958 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f8958;
  /* f8948: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f894c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
L_f8950:;
  /* f8950: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f8954: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1018200));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f8958:;
  /* f8958: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f895c: bl #0x1436a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1018208));
  fn1_1436a0(c);
  /* f8960: b #0xf8968 */
  goto L_f8968;
  /* f8964: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_f8968:;
  /* f8968: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f896c: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1018224));
  fn1_142548(c);
  /* f8970: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f8974: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f8978: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f897c: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* f8980: ldrb w10, [x8, #0x24] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f8984: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f8988: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f898c: tbnz w10, #0, #0xf8998 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_f8998;
  /* f8990: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1018260));
  fn1_142980(c);
  /* f8994: b #0xf88c8 */
  goto L_f88c8;
L_f8998:;
  /* f8998: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1018268));
  fn1_1429b0(c);
  /* f899c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f89a0: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1018276));
  fn1_142980(c);
  /* f89a4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f89a8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1018284));
  fn1_9cc20(c);
  /* f89ac: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1018288));
  fn1_a1454(c);
}

void fn1_fd5a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038965672));
  /* fd5a8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fd5ac: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fd5b0: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* fd5b4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fd5b8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fd5bc: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fd5c0: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fd5c4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* fd5c8: ldr x8, [x8, #0xb10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2832))));
  /* fd5cc: ldr x9, [x9, #0xae0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2784))));
  /* fd5d0: ldrb w11, [x0, #0x50] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 0) + INT64_C(80))));
  /* fd5d4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fd5d8: add x10, x8, #0x18 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* fd5dc: add x8, x8, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* fd5e0: str x8, [x20, #0x78]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(120));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(120));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* fd5e4: add x8, x9, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* fd5e8: str x10, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 10));
  /* fd5ec: str x8, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 8));
  /* fd5f0: tbz w11, #0, #0xfd604 */
  if (((ARC_W_R(c, 11)) >> 0 & 1) == 0) goto L_fd604;
  /* fd5f4: ldr x8, [x19, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(80))));
  /* fd5f8: ldr x0, [x19, #0x60] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(96))));
  /* fd5fc: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* fd600: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1037828));
  fn1_142608(c);
L_fd604:;
  /* fd604: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fd608: nop  */
  /* nop: no architectural effect here */
  /* fd60c: adr x9, #0x15dc40 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1432640)));
  /* fd610: ldr x8, [x8, #0xaa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2728))));
  /* fd614: ldr x21, [x19, #0x18] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* fd618: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* fd61c: cmp x21, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 9));
  /* fd620: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* fd624: b.eq #0xfd648 */
  if (ARC_COND(c, 0)) goto L_fd648;
  /* fd628: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* fd62c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fd630: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1037876));
  fn1_bd950(c);
  /* fd634: cbnz x0, #0xfd648 */
  if ((ARC_X_R(c, 0)) != 0) goto L_fd648;
  /* fd638: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* fd63c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* fd640: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fd644: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1037896));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fd648:;
  /* fd648: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fd64c: bl #0x1433b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1037904));
  fn1_1433b8(c);
  /* fd650: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fd654: mov w1, #0x110 */
  ARC_W_W(c, 1, UINT64_C(272));
  /* fd658: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fd65c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* fd660: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fd664: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fd668: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_104478(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038994040));
  /* 104478: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 10447c: sub sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(144)));
  /* 104480: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 104484: stp x26, x25, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 104488: stp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 10448c: stp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 104490: stp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 104494: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* 104498: ldrb w8, [x3, #8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 3) + INT64_C(8))));
  /* 10449c: mov x19, x5 */
  ARC_X_W(c, 19, ARC_X_R(c, 5));
  /* 1044a0: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 1044a4: stur x1, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 1));
  /* 1044a8: tbnz w8, #0, #0x1044e0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1044e0;
  /* 1044ac: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1044b0: mov x9, #-1 */
  ARC_X_W(c, 9, UINT64_C(18446744073709551615));
  /* 1044b4: mov x5, sp */
  ARC_X_W(c, 5, (c)->sp);
  /* 1044b8: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* 1044bc: str x9, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 9));
  /* 1044c0: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 1044c4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1066184));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1044c8: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 1044cc: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1044d0: b.eq #0x104564 */
  if (ARC_COND(c, 0)) goto L_104564;
  /* 1044d4: cbnz x8, #0x10456c */
  if ((ARC_X_R(c, 8)) != 0) goto L_10456c;
  /* 1044d8: strb wzr, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* 1044dc: b #0x1047bc */
  goto L_1047bc;
L_1044e0:;
  /* 1044e0: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 1044e4: add x1, x3, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 3) + UINT64_C(48)));
  /* 1044e8: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 1044ec: mov x24, x3 */
  ARC_X_W(c, 24, ARC_X_R(c, 3));
  /* 1044f0: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1066228));
  fn1_143460(c);
  /* 1044f4: adrp x26, #0x151000 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1044f8: ldr x26, [x26, #0xb58] */
  ARC_X_W(c, 26, arc_ld64((ARC_X_R(c, 26) + INT64_C(2904))));
  /* 1044fc: ldur x25, [x29, #-0x10] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 104500: ldar x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 104504: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 104508: b.eq #0x1045e0 */
  if (ARC_COND(c, 0)) goto L_1045e0;
  /* 10450c: nop  */
  /* nop: no architectural effect here */
  /* 104510: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 104514: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1066264));
  fn1_142518(c);
  /* 104518: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 10451c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 104520: b.ne #0x10454c */
  if (ARC_COND(c, 1)) goto L_10454c;
  /* 104524: nop  */
  /* nop: no architectural effect here */
  /* 104528: adr x22, #0x15791c */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 10452c: nop  */
  /* nop: no architectural effect here */
  /* 104530: adr x23, #0x1578f4 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407220)));
L_104534:;
  /* 104534: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 104538: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 10453c: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1066304));
  fn1_142530(c);
  /* 104540: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 104544: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 104548: b.eq #0x104534 */
  if (ARC_COND(c, 0)) goto L_104534;
L_10454c:;
  /* 10454c: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 104550: cbz x8, #0x104580 */
  if ((ARC_X_R(c, 8)) == 0) goto L_104580;
  /* 104554: nop  */
  /* nop: no architectural effect here */
  /* 104558: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10455c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1066336));
  fn1_142560(c);
  /* 104560: b #0x1045e0 */
  goto L_1045e0;
L_104564:;
  /* 104564: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 104568: b #0x1047bc */
  goto L_1047bc;
L_10456c:;
  /* 10456c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 104570: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 104574: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 104578: str w9, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 9));
  /* 10457c: b #0x1047bc */
  goto L_1047bc;
L_104580:;
  /* 104580: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 104584: str x26, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 26));
  /* 104588: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 10458c: str x8, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 8));
  /* 104590: nop  */
  /* nop: no architectural effect here */
  /* 104594: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 104598: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1066396));
  fn1_142560(c);
  /* 10459c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1045a0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1045a4: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 1045a8: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1066412));
  fn1_a2030(c);
  /* 1045ac: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 1045b0: str w8, [x26, #8] */
  arc_st32((ARC_X_R(c, 26) + INT64_C(8)), ARC_W_R(c, 8));
  /* 1045b4: nop  */
  /* nop: no architectural effect here */
  /* 1045b8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1045bc: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1066432));
  fn1_142518(c);
  /* 1045c0: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 1045c4: stlr x8, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 8));
  /* 1045c8: nop  */
  /* nop: no architectural effect here */
  /* 1045cc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1045d0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1066452));
  fn1_142560(c);
  /* 1045d4: nop  */
  /* nop: no architectural effect here */
  /* 1045d8: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 1045dc: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1066464));
  fn1_142578(c);
L_1045e0:;
  /* 1045e0: ldp x8, x10, [x25, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 1045e4: ldrsw x9, [x26, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 26) + INT64_C(8)))));
  /* 1045e8: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 1045ec: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 1045f0: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 1045f4: b.hs #0x1047dc */
  if (ARC_COND(c, 2)) goto L_1047dc;
  /* 1045f8: ldr x22, [x8, x9, lsl #3] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 1045fc: cbz x22, #0x1047dc */
  if ((ARC_X_R(c, 22)) == 0) goto L_1047dc;
  /* 104600: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 104604: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1066504));
  fn1_143478(c);
  /* 104608: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 10460c: add x1, x24, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(48)));
  /* 104610: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1066516));
  fn1_143460(c);
  /* 104614: adrp x26, #0x151000 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 104618: ldr x26, [x26, #0xcb8] */
  ARC_X_W(c, 26, arc_ld64((ARC_X_R(c, 26) + INT64_C(3256))));
  /* 10461c: ldur x25, [x29, #-0x10] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 104620: ldar x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 104624: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 104628: b.eq #0x1046e4 */
  if (ARC_COND(c, 0)) goto L_1046e4;
  /* 10462c: nop  */
  /* nop: no architectural effect here */
  /* 104630: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 104634: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1066552));
  fn1_142518(c);
  /* 104638: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 10463c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 104640: b.ne #0x10466c */
  if (ARC_COND(c, 1)) goto L_10466c;
  /* 104644: nop  */
  /* nop: no architectural effect here */
  /* 104648: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 10464c: nop  */
  /* nop: no architectural effect here */
  /* 104650: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_104654:;
  /* 104654: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 104658: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 10465c: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1066592));
  fn1_142530(c);
  /* 104660: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 104664: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 104668: b.eq #0x104654 */
  if (ARC_COND(c, 0)) goto L_104654;
L_10466c:;
  /* 10466c: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 104670: cbz x8, #0x104684 */
  if ((ARC_X_R(c, 8)) == 0) goto L_104684;
  /* 104674: nop  */
  /* nop: no architectural effect here */
  /* 104678: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10467c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1066624));
  fn1_142560(c);
  /* 104680: b #0x1046e4 */
  goto L_1046e4;
L_104684:;
  /* 104684: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 104688: str x26, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 26));
  /* 10468c: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 104690: str x8, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 8));
  /* 104694: nop  */
  /* nop: no architectural effect here */
  /* 104698: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10469c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1066656));
  fn1_142560(c);
  /* 1046a0: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1046a4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1046a8: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 1046ac: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1066672));
  fn1_a2030(c);
  /* 1046b0: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 1046b4: str w8, [x26, #8] */
  arc_st32((ARC_X_R(c, 26) + INT64_C(8)), ARC_W_R(c, 8));
  /* 1046b8: nop  */
  /* nop: no architectural effect here */
  /* 1046bc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1046c0: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1066692));
  fn1_142518(c);
  /* 1046c4: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 1046c8: stlr x8, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 8));
  /* 1046cc: nop  */
  /* nop: no architectural effect here */
  /* 1046d0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1046d4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1066712));
  fn1_142560(c);
  /* 1046d8: nop  */
  /* nop: no architectural effect here */
  /* 1046dc: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 1046e0: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1066724));
  fn1_142578(c);
L_1046e4:;
  /* 1046e4: ldp x8, x10, [x25, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 1046e8: ldrsw x9, [x26, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 26) + INT64_C(8)))));
  /* 1046ec: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 1046f0: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 1046f4: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 1046f8: b.hs #0x1047e0 */
  if (ARC_COND(c, 2)) goto L_1047e0;
  /* 1046fc: ldr x23, [x8, x9, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 104700: cbz x23, #0x1047e0 */
  if ((ARC_X_R(c, 23)) == 0) goto L_1047e0;
  /* 104704: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 104708: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1066764));
  fn1_143478(c);
  /* 10470c: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 104710: ldr x9, [x8, #0x30] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* 104714: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* 104718: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 10471c: mov x24, sp */
  ARC_X_W(c, 24, (c)->sp);
  /* 104720: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1066788));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 104724: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 104728: ldr x9, [x8, #0x38] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* 10472c: add x8, x24, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + UINT64_C(24)));
  /* 104730: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 104734: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1066808));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 104738: mov x23, sp */
  ARC_X_W(c, 23, (c)->sp);
  /* 10473c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 104740: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 104744: add x3, x23, #0x30 */
  ARC_X_W(c, 3, (ARC_X_R(c, 23) + UINT64_C(48)));
  /* 104748: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 10474c: mov x4, x22 */
  ARC_X_W(c, 4, ARC_X_R(c, 22));
  /* 104750: mov x5, x20 */
  ARC_X_W(c, 5, ARC_X_R(c, 20));
  /* 104754: mov w6, #1 */
  ARC_W_W(c, 6, UINT64_C(1));
  /* 104758: bl #0x104878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1066844));
  fn1_104878(c);
  /* 10475c: cmp x0, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 23));
  /* 104760: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* 104764: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 104768: cset w9, eq */
  ARC_W_W(c, 9, (ARC_COND(c, 0) ? 1 : 0));
  /* 10476c: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* 104770: tbz w8, #0, #0x104794 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_104794;
  /* 104774: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
  /* 104778: ldr x8, [sp, #0x28] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(40))));
  /* 10477c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 104780: lsl x9, x9, #2 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(2)) & 63)));
  /* 104784: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 104788: and x1, x9, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) & UINT64_C(18446744073709551608)));
  /* 10478c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1066896));
  fn1_142608(c);
  /* 104790: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
L_104794:;
  /* 104794: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 104798: tbz w8, #0, #0x1047bc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1047bc;
  /* 10479c: ldr x9, [sp] */
  ARC_X_W(c, 9, arc_ld64((c)->sp));
  /* 1047a0: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1047a4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1047a8: lsl x9, x9, #2 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(2)) & 63)));
  /* 1047ac: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1047b0: and x1, x9, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) & UINT64_C(18446744073709551608)));
  /* 1047b4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1066936));
  fn1_142608(c);
  /* 1047b8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
L_1047bc:;
  /* 1047bc: ldp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1047c0: ldp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1047c4: ldp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1047c8: ldp x26, x25, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 1047cc: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1047d0: add sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(144)));
  /* 1047d4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1047d8: ret  */
  return;
L_1047dc:;
  /* 1047dc: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1066976));
  fn1_fc3b8(c);
L_1047e0:;
  /* 1047e0: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1066980));
  fn1_fc3b8(c);
  /* 1047e4: b #0x1047e8 */
  goto L_1047e8;
L_1047e8:;
  /* 1047e8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1047ec: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1047f0: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1066996));
  fn1_d2a78(c);
  /* 1047f4: b #0x104868 */
  goto L_104868;
  /* 1047f8: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* 1047fc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 104800: tbz w8, #0, #0x104818 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_104818;
  /* 104804: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 104808: ldr x0, [sp, #0x28] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(40))));
  /* 10480c: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 104810: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 104814: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1067032));
  fn1_142608(c);
L_104818:;
  /* 104818: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 10481c: tbnz w8, #0, #0x104830 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_104830;
  /* 104820: b #0x104850 */
  goto L_104850;
  /* 104824: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 104828: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10482c: tbz w8, #0, #0x104850 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_104850;
L_104830:;
  /* 104830: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 104834: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* 104838: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 10483c: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 104840: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1067076));
  fn1_142608(c);
  /* 104844: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 104848: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1067084));
  fn1_9cc20(c);
  /* 10484c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_104850:;
  /* 104850: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 104854: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1067096));
  fn1_9cc20(c);
  /* 104858: b #0x104864 */
  goto L_104864;
  /* 10485c: b #0x104864 */
  goto L_104864;
  /* 104860: b #0x104864 */
  goto L_104864;
L_104864:;
  /* 104864: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_104868:;
  /* 104868: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 10486c: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1067120));
  fn1_143478(c);
  /* 104870: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 104874: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1067128));
  fn1_9cc20(c);
}

void fn1_110b9c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039045020));
  /* 110b9c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 110ba0: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 110ba4: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* 110ba8: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 110bac: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 110bb0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 110bb4: ldr x0, [x1] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* 110bb8: mov x22, x4 */
  ARC_X_W(c, 22, ARC_X_R(c, 4));
  /* 110bbc: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* 110bc0: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 110bc4: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 110bc8: cbz x0, #0x110c28 */
  if ((ARC_X_R(c, 0)) == 0) goto L_110c28;
  /* 110bcc: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 110bd0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 110bd4: b.eq #0x110bf0 */
  if (ARC_COND(c, 0)) goto L_110bf0;
  /* 110bd8: cbz x20, #0x110c70 */
  if ((ARC_X_R(c, 20)) == 0) goto L_110c70;
  /* 110bdc: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 110be0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 110be4: b.ne #0x110c84 */
  if (ARC_COND(c, 1)) goto L_110c84;
  /* 110be8: mov w23, wzr */
  ARC_W_W(c, 23, ARC_W_R(c, 31));
  /* 110bec: b #0x110c44 */
  goto L_110c44;
L_110bf0:;
  /* 110bf0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 110bf4: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 110bf8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1117180));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 110bfc: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 110c00: b.eq #0x110c20 */
  if (ARC_COND(c, 0)) goto L_110c20;
  /* 110c04: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 110c08: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* 110c0c: cset w23, eq */
  ARC_W_W(c, 23, (ARC_COND(c, 0) ? 1 : 0));
  /* 110c10: cbnz x20, #0x110c30 */
  if ((ARC_X_R(c, 20)) != 0) goto L_110c30;
L_110c14:;
  /* 110c14: tbnz w23, #0, #0x110c84 */
  if (((ARC_W_R(c, 23)) >> 0 & 1) != 0) goto L_110c84;
  /* 110c18: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 110c1c: b #0x110c70 */
  goto L_110c70;
L_110c20:;
  /* 110c20: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 110c24: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
L_110c28:;
  /* 110c28: mov w23, #1 */
  ARC_W_W(c, 23, UINT64_C(1));
  /* 110c2c: cbz x20, #0x110c14 */
  if ((ARC_X_R(c, 20)) == 0) goto L_110c14;
L_110c30:;
  /* 110c30: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 110c34: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 110c38: b.eq #0x110c44 */
  if (ARC_COND(c, 0)) goto L_110c44;
  /* 110c3c: tbz w23, #0, #0x110c84 */
  if (((ARC_W_R(c, 23)) >> 0 & 1) == 0) goto L_110c84;
  /* 110c40: b #0x110c70 */
  goto L_110c70;
L_110c44:;
  /* 110c44: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 110c48: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 110c4c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 110c50: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1117268));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 110c54: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 110c58: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 110c5c: cmp w23, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 23), ARC_W_R(c, 8));
  /* 110c60: b.eq #0x110c84 */
  if (ARC_COND(c, 0)) goto L_110c84;
  /* 110c64: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 110c68: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 110c6c: csel x20, xzr, x20, eq */
  ARC_X_W(c, 20, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 20)));
L_110c70:;
  /* 110c70: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 110c74: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 110c78: b.eq #0x110c8c */
  if (ARC_COND(c, 0)) goto L_110c8c;
  /* 110c7c: ldrb w1, [x8] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 8)));
  /* 110c80: b #0x110c9c */
  goto L_110c9c;
L_110c84:;
  /* 110c84: mov w8, #6 */
  ARC_W_W(c, 8, UINT64_C(6));
  /* 110c88: b #0x110d8c */
  goto L_110d8c;
L_110c8c:;
  /* 110c8c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 110c90: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 110c94: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1117336));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 110c98: mov w1, w0 */
  ARC_W_W(c, 1, ARC_W_R(c, 0));
L_110c9c:;
  /* 110c9c: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 110ca0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 110ca4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 110ca8: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 110cac: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1117360));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 110cb0: and w8, w0, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) & UINT64_C(255)));
  /* 110cb4: cmp w8, #0x25 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(37));
  /* 110cb8: b.ne #0x110cf4 */
  if (ARC_COND(c, 1)) goto L_110cf4;
  /* 110cbc: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 110cc0: ldp x9, x8, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 110cc4: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 110cc8: b.eq #0x110cfc */
  if (ARC_COND(c, 0)) goto L_110cfc;
  /* 110ccc: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 110cd0: str x9, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 9));
  /* 110cd4: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 110cd8: b.eq #0x110d1c */
  if (ARC_COND(c, 0)) goto L_110d1c;
L_110cdc:;
  /* 110cdc: cbz x20, #0x110d98 */
  if ((ARC_X_R(c, 20)) == 0) goto L_110d98;
  /* 110ce0: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 110ce4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 110ce8: b.ne #0x110d88 */
  if (ARC_COND(c, 1)) goto L_110d88;
  /* 110cec: mov w21, wzr */
  ARC_W_W(c, 21, ARC_W_R(c, 31));
  /* 110cf0: b #0x110d68 */
  goto L_110d68;
L_110cf4:;
  /* 110cf4: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 110cf8: b #0x110d8c */
  goto L_110d8c;
L_110cfc:;
  /* 110cfc: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 110d00: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 110d04: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1117448));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 110d08: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 110d0c: cbz x0, #0x110d4c */
  if ((ARC_X_R(c, 0)) == 0) goto L_110d4c;
  /* 110d10: ldp x9, x8, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 110d14: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 110d18: b.ne #0x110cdc */
  if (ARC_COND(c, 1)) goto L_110cdc;
L_110d1c:;
  /* 110d1c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 110d20: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 110d24: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1117480));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 110d28: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 110d2c: b.eq #0x110d48 */
  if (ARC_COND(c, 0)) goto L_110d48;
  /* 110d30: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 110d34: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 110d38: cset w21, eq */
  ARC_W_W(c, 21, (ARC_COND(c, 0) ? 1 : 0));
  /* 110d3c: cbnz x20, #0x110d54 */
  if ((ARC_X_R(c, 20)) != 0) goto L_110d54;
L_110d40:;
  /* 110d40: tbnz w21, #0, #0x110d88 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) != 0) goto L_110d88;
  /* 110d44: b #0x110d98 */
  goto L_110d98;
L_110d48:;
  /* 110d48: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
L_110d4c:;
  /* 110d4c: mov w21, #1 */
  ARC_W_W(c, 21, UINT64_C(1));
  /* 110d50: cbz x20, #0x110d40 */
  if ((ARC_X_R(c, 20)) == 0) goto L_110d40;
L_110d54:;
  /* 110d54: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 110d58: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 110d5c: b.eq #0x110d68 */
  if (ARC_COND(c, 0)) goto L_110d68;
  /* 110d60: tbnz w21, #0, #0x110d98 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) != 0) goto L_110d98;
  /* 110d64: b #0x110d88 */
  goto L_110d88;
L_110d68:;
  /* 110d68: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 110d6c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 110d70: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 110d74: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1117560));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 110d78: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 110d7c: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 110d80: eor w8, w21, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 21) ^ ARC_W_R(c, 8)));
  /* 110d84: tbnz w8, #0, #0x110d98 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_110d98;
L_110d88:;
  /* 110d88: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
L_110d8c:;
  /* 110d8c: ldr w9, [x19] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 19)));
  /* 110d90: orr w8, w9, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) | ARC_W_R(c, 8)));
  /* 110d94: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_110d98:;
  /* 110d98: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 110d9c: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 110da0: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 110da4: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 110da8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 110dac: ret  */
  return;
}

void fn1_113d90(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057808));
  /* 113d90: bti c */
  /* bti: no architectural effect here */
  /* 113d94: adrp x9, #0x53000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(339968)));
  /* 113d98: mov w10, #2 */
  ARC_W_W(c, 10, UINT64_C(2));
  /* 113d9c: ldr d0, [x9, #0x2e8] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(744))));
  /* 113da0: strb w10, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* 113da4: stur d0, [x8, #4] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(4)), (c)->q[0].u64[0]);
  /* 113da8: ret  */
  return;
}

void fn1_11ad44(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039086404));
  /* 11ad44: bti c */
  /* bti: no architectural effect here */
  /* 11ad48: b #0x143f88 */
  fn1_143f88(c); return;
}

void fn1_12574c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039129932));
  /* 12574c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 125750: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 125754: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 125758: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12575c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 125760: bl #0x143e50 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1202020));
  fn1_143e50(c);
  /* 125764: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 125768: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* 12576c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 125770: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 125774: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 125778: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_127e1c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039139868));
  /* 127e1c: bti c */
  /* bti: no architectural effect here */
  /* 127e20: mov w0, #3 */
  ARC_W_W(c, 0, UINT64_C(3));
  /* 127e24: str x2, [x4] */
  arc_st64(ARC_X_R(c, 4), ARC_X_R(c, 2));
  /* 127e28: str x5, [x7] */
  arc_st64(ARC_X_R(c, 7), ARC_X_R(c, 5));
  /* 127e2c: ret  */
  return;
}

void fn1_129fcc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039148492));
  /* 129fcc: bti c */
  /* bti: no architectural effect here */
  /* 129fd0: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 129fd4: ret  */
  return;
}

void fn1_12b974(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039155060));
  /* 12b974: bti c */
  /* bti: no architectural effect here */
  /* 12b978: mov w0, #3 */
  ARC_W_W(c, 0, UINT64_C(3));
  /* 12b97c: str x2, [x4] */
  arc_st64(ARC_X_R(c, 4), ARC_X_R(c, 2));
  /* 12b980: ret  */
  return;
}

void fn1_12e2b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039165624));
  /* 12e2b8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12e2bc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12e2c0: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 12e2c4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12e2c8: nop  */
  /* nop: no architectural effect here */
  /* 12e2cc: adr x8, #0x15df38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433400)));
  /* 12e2d0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 12e2d4: tbz w8, #0, #0x12e2f0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12e2f0;
L_12e2d8:;
  /* 12e2d8: nop  */
  /* nop: no architectural effect here */
  /* 12e2dc: adr x0, #0x15df20 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433376)));
  /* 12e2e0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12e2e4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12e2e8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12e2ec: ret  */
  return;
L_12e2f0:;
  /* 12e2f0: nop  */
  /* nop: no architectural effect here */
  /* 12e2f4: adr x0, #0x15df38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433400)));
  /* 12e2f8: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1237756));
  fn1_1424b8(c);
  /* 12e2fc: cbz w0, #0x12e2d8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_12e2d8;
  /* 12e300: nop  */
  /* nop: no architectural effect here */
  /* 12e304: adr x0, #0x15df20 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433376)));
  /* 12e308: adrp x1, #0x74000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(475136)));
  /* 12e30c: add x1, x1, #0xfa0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(4000)));
  /* 12e310: bl #0x12bdc4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1237780));
  fn1_12bdc4(c);
  /* 12e314: adrp x0, #0x151000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 12e318: nop  */
  /* nop: no architectural effect here */
  /* 12e31c: adr x1, #0x15df20 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433376)));
  /* 12e320: ldr x0, [x0, #0xa48] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(2632))));
  /* 12e324: nop  */
  /* nop: no architectural effect here */
  /* 12e328: adr x2, #0x148af8 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1346296)));
  /* 12e32c: bl #0x1423f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1237808));
  fn1_1423f8(c);
  /* 12e330: nop  */
  /* nop: no architectural effect here */
  /* 12e334: adr x0, #0x15df38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433400)));
  /* 12e338: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1237820));
  fn1_1424d0(c);
  /* 12e33c: b #0x12e2d8 */
  goto L_12e2d8;
  /* 12e340: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12e344: nop  */
  /* nop: no architectural effect here */
  /* 12e348: adr x0, #0x15df38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433400)));
  /* 12e34c: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1237840));
  fn1_1424e8(c);
  /* 12e350: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12e354: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1237848));
  fn1_9cc20(c);
}

void fn1_134acc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192268));
  /* 134acc: bti c */
  /* bti: no architectural effect here */
  /* 134ad0: add x0, x0, #0x418 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1048)));
  /* 134ad4: ret  */
  return;
}

void fn1_135d44(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039196996));
  /* 135d44: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 135d48: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 135d4c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 135d50: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 135d54: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 135d58: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 135d5c: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 135d60: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 135d64: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* 135d68: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 135d6c: b.eq #0x135e0c */
  if (ARC_COND(c, 0)) goto L_135e0c;
  /* 135d70: ldrb w24, [x0] */
  ARC_W_W(c, 24, arc_ld8(ARC_X_R(c, 0)));
  /* 135d74: mov w21, w3 */
  ARC_W_W(c, 21, ARC_W_R(c, 3));
  /* 135d78: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 135d7c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 135d80: cmp w24, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 24), UINT64_C(45));
  /* 135d84: b.ne #0x135d94 */
  if (ARC_COND(c, 1)) goto L_135d94;
  /* 135d88: add x22, x22, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* 135d8c: cmp x22, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 20));
  /* 135d90: b.eq #0x135e0c */
  if (ARC_COND(c, 0)) goto L_135e0c;
L_135d94:;
  /* 135d94: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1269144));
  fn1_142a58(c);
  /* 135d98: ldr w25, [x0] */
  ARC_W_W(c, 25, arc_ld32(ARC_X_R(c, 0)));
  /* 135d9c: str wzr, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 31));
  /* 135da0: nop  */
  /* nop: no architectural effect here */
  /* 135da4: adr x8, #0x15dc38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 135da8: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 135dac: adrp x26, #0x15d000 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 135db0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 135db4: tbz w8, #0, #0x135e4c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_135e4c;
L_135db8:;
  /* 135db8: ldr x3, [x26, #0xc30] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 26) + INT64_C(3120))));
  /* 135dbc: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 135dc0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 135dc4: mov w2, w21 */
  ARC_W_W(c, 2, ARC_W_R(c, 21));
  /* 135dc8: bl #0x1444f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1269196));
  fn1_1444f8(c);
  /* 135dcc: ldr w8, [x23] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 23)));
  /* 135dd0: cbz w8, #0x135dfc */
  if ((ARC_W_R(c, 8)) == 0) goto L_135dfc;
  /* 135dd4: ldr x9, [sp, #8] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(8))));
  /* 135dd8: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* 135ddc: b.ne #0x135e0c */
  if (ARC_COND(c, 1)) goto L_135e0c;
  /* 135de0: lsr x9, x0, #0x20 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(32)) & 63)));
  /* 135de4: cbnz x9, #0x135e40 */
  if ((ARC_X_R(c, 9)) != 0) goto L_135e40;
  /* 135de8: cmp w8, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(34));
  /* 135dec: b.eq #0x135e40 */
  if (ARC_COND(c, 0)) goto L_135e40;
L_135df0:;
  /* 135df0: cmp w24, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 24), UINT64_C(45));
  /* 135df4: cneg w0, w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 0))) : (ARC_W_R(c, 0))));
  /* 135df8: b #0x135e18 */
  goto L_135e18;
L_135dfc:;
  /* 135dfc: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 135e00: str w25, [x23] */
  arc_st32(ARC_X_R(c, 23), ARC_W_R(c, 25));
  /* 135e04: cmp x8, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* 135e08: b.eq #0x135e38 */
  if (ARC_COND(c, 0)) goto L_135e38;
L_135e0c:;
  /* 135e0c: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 135e10: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
L_135e14:;
  /* 135e14: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_135e18:;
  /* 135e18: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 135e1c: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 135e20: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 135e24: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 135e28: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 135e2c: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 135e30: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 135e34: ret  */
  return;
L_135e38:;
  /* 135e38: lsr x8, x0, #0x20 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(32)) & 63)));
  /* 135e3c: cbz x8, #0x135df0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_135df0;
L_135e40:;
  /* 135e40: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 135e44: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* 135e48: b #0x135e14 */
  goto L_135e14;
L_135e4c:;
  /* 135e4c: nop  */
  /* nop: no architectural effect here */
  /* 135e50: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 135e54: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1269336));
  fn1_1424b8(c);
  /* 135e58: cbz w0, #0x135db8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_135db8;
  /* 135e5c: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 135e60: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 135e64: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 135e68: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 135e6c: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1269360));
  fn1_1441e0(c);
  /* 135e70: str x0, [x26, #0xc30] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 135e74: nop  */
  /* nop: no architectural effect here */
  /* 135e78: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 135e7c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1269376));
  fn1_1424d0(c);
  /* 135e80: b #0x135db8 */
  goto L_135db8;
  /* 135e84: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 135e88: nop  */
  /* nop: no architectural effect here */
  /* 135e8c: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 135e90: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1269396));
  fn1_1424e8(c);
  /* 135e94: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 135e98: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1269404));
  fn1_9cc20(c);
}

void fn1_138f84(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039209860));
  /* 138f84: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 138f88: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 138f8c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 138f90: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 138f94: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 138f98: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 138f9c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 138fa0: mov x23, x3 */
  ARC_X_W(c, 23, ARC_X_R(c, 3));
  /* 138fa4: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 138fa8: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 138fac: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 138fb0: str xzr, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 31));
  /* 138fb4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 138fb8: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* 138fbc: mov w2, #0xb0 */
  ARC_W_W(c, 2, UINT64_C(176));
  /* 138fc0: bl #0x142818 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1281988));
  fn1_142818(c);
  /* 138fc4: ldr x21, [sp, #8] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(8))));
  /* 138fc8: cbnz x21, #0x138fe0 */
  if ((ARC_X_R(c, 21)) != 0) goto L_138fe0;
  /* 138fcc: mov w0, #0xb0 */
  ARC_W_W(c, 0, UINT64_C(176));
  /* 138fd0: bl #0xa24dc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1282004));
  fn1_a24dc(c);
  /* 138fd4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 138fd8: cbnz x0, #0x138fe0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_138fe0;
  /* 138fdc: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1282016));
  fn1_142488(c);
L_138fe0:;
  /* 138fe0: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 138fe4: mov x24, x21 */
  ARC_X_W(c, 24, ARC_X_R(c, 21));
  /* 138fe8: stp q0, q0, [x21] */
  { const uint64_t _pa = ARC_X_R(c, 21);
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 138fec: stp q0, q0, [x21, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 138ff0: stp q0, q0, [x21, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(64));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 138ff4: stp q0, q0, [x21, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(96));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 138ff8: stp q0, q0, [x21, #0x90] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(144));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 138ffc: str q0, [x24, #0x80]! */
  arc_st64((ARC_X_R(c, 24) + INT64_C(128)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 24) + INT64_C(128)) + 8, (c)->q[0].u64[1]);
  ARC_X_W(c, 24, ARC_X_R(c, 24) + INT64_C(128));
  /* 139000: ldp x4, x5, [x23] */
  { const uint64_t _pa = ARC_X_R(c, 23);
    ARC_X_W(c, 4, arc_ld64(_pa));
    ARC_X_W(c, 5, arc_ld64(_pa + 8));
  }
  /* 139004: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 139008: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 13900c: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 139010: mov x3, x19 */
  ARC_X_W(c, 3, ARC_X_R(c, 19));
  /* 139014: bl #0x139650 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1282072));
  fn1_139650(c);
  /* 139018: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 13901c: adrp x2, #0x151000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 139020: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 139024: ldr x1, [x1, #0xa08] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2568))));
  /* 139028: ldr x2, [x2, #0xa10] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 2) + INT64_C(2576))));
  /* 13902c: bl #0x142440 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1282096));
  fn1_142440(c);
  /* 139030: nop  */
  /* nop: no architectural effect here */
  /* 139034: adr x8, #0x1576e0 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1406688)));
  /* 139038: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13903c: cmp x21, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* 139040: b.lo #0x139064 */
  if (ARC_COND(c, 3)) goto L_139064;
  /* 139044: adrp x8, #0x157000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404928)));
  /* 139048: add x8, x8, #0x8e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2272)));
  /* 13904c: cmp x21, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* 139050: b.hs #0x139064 */
  if (ARC_COND(c, 2)) goto L_139064;
  /* 139054: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 139058: bl #0xa2664 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1282140));
  fn1_a2664(c);
  /* 13905c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 139060: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1282148));
  fn1_9cc20(c);
L_139064:;
  /* 139064: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 139068: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1282156));
  fn1_142800(c);
  /* 13906c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 139070: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1282164));
  fn1_9cc20(c);
  /* 139074: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1282168));
  fn1_a1454(c);
  /* 139078: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1282172));
  fn1_a1454(c);
}

void fn1_13ea20(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039233056));
  /* 13ea20: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13ea24: sub sp, sp, #0x120 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(288)));
  /* 13ea28: stp x29, x30, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13ea2c: str x28, [sp, #0xe0] */
  arc_st64(((c)->sp + INT64_C(224)), ARC_X_R(c, 28));
  /* 13ea30: stp x24, x23, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 13ea34: stp x22, x21, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13ea38: stp x20, x19, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13ea3c: add x29, sp, #0xd0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(208)));
  /* 13ea40: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13ea44: adrp x8, #0x51000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(331776)));
  /* 13ea48: add x8, x8, #0xf28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3880)));
  /* 13ea4c: nop  */
  /* nop: no architectural effect here */
  /* 13ea50: adr x24, #0x159210 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13ea54: nop  */
  /* nop: no architectural effect here */
  /* 13ea58: adr x23, #0x156d40 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13ea5c: stp x0, xzr, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13ea60: stp x8, x1, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 13ea64: cbz x1, #0x13ea78 */
  if ((ARC_X_R(c, 1)) == 0) goto L_13ea78;
  /* 13ea68: str wzr, [x1] */
  arc_st32(ARC_X_R(c, 1), ARC_W_R(c, 31));
  /* 13ea6c: ldarb w8, [x24] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 24)));
  /* 13ea70: tbz w8, #0, #0x13eb98 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13eb98;
L_13ea74:;
  /* 13ea74: str x23, [x1, #8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(8)), ARC_X_R(c, 23));
L_13ea78:;
  /* 13ea78: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 13ea7c: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 13ea80: mov w1, #0x1ff */
  ARC_W_W(c, 1, UINT64_C(511));
  /* 13ea84: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 13ea88: csinc x0, x9, x19, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* 13ea8c: bl #0x144798 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1305232));
  fn1_144798(c);
  /* 13ea90: mov w20, w0 */
  ARC_W_W(c, 20, ARC_W_R(c, 0));
  /* 13ea94: cbz w0, #0x13eb70 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13eb70;
  /* 13ea98: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1305244));
  fn1_142a58(c);
  /* 13ea9c: nop  */
  /* nop: no architectural effect here */
  /* 13eaa0: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13eaa4: ldr w1, [x0] */
  ARC_W_W(c, 1, arc_ld32(ARC_X_R(c, 0)));
  /* 13eaa8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13eaac: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 13eab0: tbz w8, #0, #0x13ebc4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13ebc4;
L_13eab4:;
  /* 13eab4: nop  */
  /* nop: no architectural effect here */
  /* 13eab8: adr x22, #0x156d38 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13eabc: mov w9, #0x11 */
  ARC_W_W(c, 9, UINT64_C(17));
  /* 13eac0: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 13eac4: add x2, sp, #0x40 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(64)));
  /* 13eac8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 13eacc: stp x1, x22, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* 13ead0: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 13ead4: stp x9, x22, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* 13ead8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1305308));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 13eadc: tbnz w0, #0, #0x13eafc */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_13eafc;
  /* 13eae0: ldr x0, [sp, #0x48] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(72))));
  /* 13eae4: ldr w2, [sp, #0x40] */
  ARC_W_W(c, 2, arc_ld32(((c)->sp + INT64_C(64))));
  /* 13eae8: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 13eaec: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 13eaf0: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* 13eaf4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1305336));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 13eaf8: tbz w0, #0, #0x13eb64 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_13eb64;
L_13eafc:;
  /* 13eafc: str wzr, [sp] */
  arc_st32((c)->sp, ARC_W_R(c, 31));
  /* 13eb00: ldarb w8, [x24] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 24)));
  /* 13eb04: add x24, x19, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* 13eb08: tbz w8, #0, #0x13ebf0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13ebf0;
L_13eb0c:;
  /* 13eb0c: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 13eb10: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 13eb14: add x1, sp, #0x40 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(64)));
  /* 13eb18: str x23, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 23));
  /* 13eb1c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 13eb20: stur wzr, [x29, #-0x10] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-16)), ARC_W_R(c, 31));
  /* 13eb24: csel x0, x24, x9, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 24)) : ARC_X_R(c, 9)));
  /* 13eb28: stur x23, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 23));
  /* 13eb2c: bl #0x144588 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1305392));
  fn1_144588(c);
  /* 13eb30: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 13eb34: b.ne #0x13eb40 */
  if (ARC_COND(c, 1)) goto L_13eb40;
  /* 13eb38: ldr w8, [x21] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 21)));
  /* 13eb3c: stp x8, x22, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
L_13eb40:;
  /* 13eb40: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 13eb44: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 13eb48: add x2, sp, #0x40 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(64)));
  /* 13eb4c: mov x3, sp */
  ARC_X_W(c, 3, (c)->sp);
  /* 13eb50: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 13eb54: bl #0x1388e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1305432));
  fn1_1388e8(c);
  /* 13eb58: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* 13eb5c: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* 13eb60: b.eq #0x13eb70 */
  if (ARC_COND(c, 0)) goto L_13eb70;
L_13eb64:;
  /* 13eb64: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 13eb68: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 13eb6c: bl #0x13d8bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1305456));
  fn1_13d8bc(c);
L_13eb70:;
  /* 13eb70: cmp w20, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 20), UINT64_C(0));
  /* 13eb74: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* 13eb78: ldp x20, x19, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13eb7c: ldr x28, [sp, #0xe0] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(224))));
  /* 13eb80: ldp x22, x21, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 13eb84: ldp x24, x23, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 13eb88: ldp x29, x30, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13eb8c: add sp, sp, #0x120 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(288)));
  /* 13eb90: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13eb94: ret  */
  return;
L_13eb98:;
  /* 13eb98: nop  */
  /* nop: no architectural effect here */
  /* 13eb9c: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13eba0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 13eba4: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1305512));
  fn1_1424b8(c);
  /* 13eba8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 13ebac: cbz w0, #0x13ea74 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13ea74;
  /* 13ebb0: nop  */
  /* nop: no architectural effect here */
  /* 13ebb4: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13ebb8: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1305532));
  fn1_1424d0(c);
  /* 13ebbc: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 13ebc0: b #0x13ea74 */
  goto L_13ea74;
L_13ebc4:;
  /* 13ebc4: nop  */
  /* nop: no architectural effect here */
  /* 13ebc8: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13ebcc: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* 13ebd0: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1305556));
  fn1_1424b8(c);
  /* 13ebd4: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 13ebd8: cbz w0, #0x13eab4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13eab4;
  /* 13ebdc: nop  */
  /* nop: no architectural effect here */
  /* 13ebe0: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13ebe4: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1305576));
  fn1_1424d0(c);
  /* 13ebe8: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 13ebec: b #0x13eab4 */
  goto L_13eab4;
L_13ebf0:;
  /* 13ebf0: nop  */
  /* nop: no architectural effect here */
  /* 13ebf4: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13ebf8: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1305596));
  fn1_1424b8(c);
  /* 13ebfc: cbz w0, #0x13eb0c */
  if ((ARC_W_R(c, 0)) == 0) goto L_13eb0c;
  /* 13ec00: nop  */
  /* nop: no architectural effect here */
  /* 13ec04: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13ec08: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1305612));
  fn1_1424d0(c);
  /* 13ec0c: b #0x13eb0c */
  goto L_13eb0c;
  /* 13ec10: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1305620));
  fn1_a1454(c);
}

void fn1_1426b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248560));
  /* 1426b0: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1426b4: ldr x17, [x16, #0xf70] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3952))));
  /* 1426b8: add x16, x16, #0xf70 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3952)));
  /* 1426bc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1426c0: nop  */
  /* nop: no architectural effect here */
  /* 1426c4: nop  */
  /* nop: no architectural effect here */
}

void fn1_142cb0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250096));
  /* 142cb0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142cb4: ldr x17, [x16, #0x170] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(368))));
  /* 142cb8: add x16, x16, #0x170 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(368)));
  /* 142cbc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142cc0: nop  */
  /* nop: no architectural effect here */
  /* 142cc4: nop  */
  /* nop: no architectural effect here */
}

void fn1_1432b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251632));
  /* 1432b0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1432b4: ldr x17, [x16, #0x370] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(880))));
  /* 1432b8: add x16, x16, #0x370 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(880)));
  /* 1432bc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1432c0: nop  */
  /* nop: no architectural effect here */
  /* 1432c4: nop  */
  /* nop: no architectural effect here */
}

void fn1_1438b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253168));
  /* 1438b0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1438b4: ldr x17, [x16, #0x570] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1392))));
  /* 1438b8: add x16, x16, #0x570 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1392)));
  /* 1438bc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1438c0: nop  */
  /* nop: no architectural effect here */
  /* 1438c4: nop  */
  /* nop: no architectural effect here */
}

void fn1_143eb0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254704));
  /* 143eb0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143eb4: ldr x17, [x16, #0x770] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1904))));
  /* 143eb8: add x16, x16, #0x770 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1904)));
  /* 143ebc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143ec0: nop  */
  /* nop: no architectural effect here */
  /* 143ec4: nop  */
  /* nop: no architectural effect here */
}

void fn1_1444b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256240));
  /* 1444b0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1444b4: ldr x17, [x16, #0x970] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2416))));
  /* 1444b8: add x16, x16, #0x970 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2416)));
  /* 1444bc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1444c0: nop  */
  /* nop: no architectural effect here */
  /* 1444c4: nop  */
  /* nop: no architectural effect here */
}

void fn1_144ab0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039257776));
  /* 144ab0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144ab4: ldr x17, [x16, #0xb70] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2928))));
  /* 144ab8: add x16, x16, #0xb70 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2928)));
  /* 144abc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144ac0: nop  */
  /* nop: no architectural effect here */
  /* 144ac4: nop  */
  /* nop: no architectural effect here */
}

