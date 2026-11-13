#include "lifted.h"

void fn1_a0b40(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038586176));
  /* a0b40: bti c */
  /* bti: no architectural effect here */
  /* a0b44: adrp x8, #0x157000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404928)));
  /* a0b48: ldrb w8, [x8, #0x600] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(1536))));
  /* a0b4c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* a0b50: b.ne #0xa0b78 */
  if (ARC_COND(c, 1)) goto L_a0b78;
  /* a0b54: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a0b58: stp x30, x19, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 30));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a0b5c: nop  */
  /* nop: no architectural effect here */
  /* a0b60: adr x19, #0x157600 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1406464)));
  /* a0b64: ldr w0, [x19, #4] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 19) + INT64_C(4))));
  /* a0b68: bl #0x144a80 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(658284));
  fn1_144a80(c);
  /* a0b6c: strb wzr, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* a0b70: ldp x30, x19, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 30, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a0b74: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
L_a0b78:;
  /* a0b78: ret  */
  return;
}

void fn1_a22e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038592232));
  /* a22e8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a22ec: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a22f0: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* a22f4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a22f8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a22fc: bl #0x142710 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(664320));
  fn1_142710(c);
  /* a2300: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a2304: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* a2308: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* a230c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a2310: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a2314: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_a7de8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038615528));
  /* a7de8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a7dec: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a7df0: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* a7df4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a7df8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a7dfc: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* a7e00: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* a7e04: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* a7e08: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* a7e0c: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a7e10: b.hi #0xa7e34 */
  if (ARC_COND(c, 8)) goto L_a7e34;
  /* a7e14: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a7e18: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a7e1c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(687648));
  fn1_1428a8(c);
  /* a7e20: cbz x0, #0xa7e94 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a7e94;
  /* a7e24: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a7e28: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a7e2c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a7e30: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_a7e34:;
  /* a7e34: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* a7e38: add x0, x21, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* a7e3c: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a7e40: add x8, x8, #0xb10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2832)));
  /* a7e44: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* a7e48: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a7e4c: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a7e50: ldurh w9, [x0, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* a7e54: mov w8, #0x15 */
  ARC_W_W(c, 8, UINT64_C(21));
  /* a7e58: mov w11, #0x12 */
  ARC_W_W(c, 11, UINT64_C(18));
  /* a7e5c: strb w8, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 8));
  /* a7e60: adrp x8, #0x50000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(327680)));
  /* a7e64: add x8, x8, #0x491 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1169)));
  /* a7e68: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* a7e6c: str x8, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 8));
  /* a7e70: orr w8, w9, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* a7e74: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* a7e78: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* a7e7c: stp x11, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* a7e80: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a7e84: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* a7e88: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a7e8c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a7e90: ret  */
  return;
L_a7e94:;
  /* a7e94: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(687768));
  fn1_142488(c);
}

void fn1_adc68(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038639720));
  /* adc68: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* adc6c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* adc70: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* adc74: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* adc78: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* adc7c: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* adc80: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* adc84: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* adc88: sub x9, x8, #0xfb0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4016)));
  /* adc8c: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* adc90: b.hi #0xadcb4 */
  if (ARC_COND(c, 8)) goto L_adcb4;
  /* adc94: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* adc98: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* adc9c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(711840));
  fn1_1428a8(c);
  /* adca0: cbz x0, #0xadd18 */
  if ((ARC_X_R(c, 0)) == 0) goto L_add18;
  /* adca4: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* adca8: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* adcac: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* adcb0: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_adcb4:;
  /* adcb4: add x9, x8, #0x40 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* adcb8: add x0, x21, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* adcbc: adrp x8, #0x14a000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1351680)));
  /* adcc0: add x8, x8, #0x690 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1680)));
  /* adcc4: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* adcc8: adrp x9, #0x50000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(327680)));
  /* adccc: add x9, x9, #0x94e */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2382)));
  /* adcd0: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* adcd4: mov w8, #0x3c */
  ARC_W_W(c, 8, UINT64_C(60));
  /* adcd8: mov w10, #0xa */
  ARC_W_W(c, 10, UINT64_C(10));
  /* adcdc: strb w8, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 8));
  /* adce0: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* adce4: stp x9, x10, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* adce8: mov w9, #0x540 */
  ARC_W_W(c, 9, UINT64_C(1344));
  /* adcec: ldr x10, [x19] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 19)));
  /* adcf0: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* adcf4: stp xzr, xzr, [x0, #0x28] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* adcf8: orr w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 9)));
  /* adcfc: str x10, [x0, #0x20] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(32)), ARC_X_R(c, 10));
  /* add00: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* add04: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* add08: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* add0c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* add10: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* add14: ret  */
  return;
L_add18:;
  /* add18: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(711964));
  fn1_142488(c);
}

void fn1_b3460(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038662240));
  /* b3460: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b3464: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b3468: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b346c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b3470: ldr x20, [x0, #0x10] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* b3474: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b3478: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b347c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b3480: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b3484: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(734344));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b3488: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b348c: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b3490: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b3494: b.eq #0xb34ac */
  if (ARC_COND(c, 0)) goto L_b34ac;
  /* b3498: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b349c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b34a0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b34a4: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b34a8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(734380));
  arc_dispatch(c, ARC_X_R(c, 8));
L_b34ac:;
  /* b34ac: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b34b0: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b34b4: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b34b8: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b34bc: b.ls #0xb34e4 */
  if (ARC_COND(c, 9)) goto L_b34e4;
  /* b34c0: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b34c4: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b34c8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b34cc: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b34d0: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b34d4: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(734424));
  fn1_142878(c);
  /* b34d8: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b34dc: cbz x0, #0xb3508 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b3508;
  /* b34e0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b34e4:;
  /* b34e4: mov w9, #0x20 */
  ARC_W_W(c, 9, UINT64_C(32));
  /* b34e8: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b34ec: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b34f0: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b34f4: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b34f8: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b34fc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b3500: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b3504: ret  */
  return;
L_b3508:;
  /* b3508: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(734476));
  fn1_1427b8(c);
}

void fn1_b6ee8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038677224));
  /* b6ee8: bti c */
  /* bti: no architectural effect here */
  /* b6eec: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* b6ef0: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b9a44(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038688324));
  /* b9a44: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b9a48: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b9a4c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b9a50: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b9a54: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b9a58: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* b9a5c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b9a60: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* b9a64: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* b9a68: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b9a6c: b.hi #0xb9a90 */
  if (ARC_COND(c, 8)) goto L_b9a90;
  /* b9a70: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b9a74: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b9a78: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(760444));
  fn1_1428a8(c);
  /* b9a7c: cbz x0, #0xb9aec */
  if ((ARC_X_R(c, 0)) == 0) goto L_b9aec;
  /* b9a80: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b9a84: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b9a88: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b9a8c: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_b9a90:;
  /* b9a90: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* b9a94: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b9a98: add x20, x21, x8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* b9a9c: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* b9aa0: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(760484));
  fn1_142860(c);
  /* b9aa4: adrp x9, #0x149000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1347584)));
  /* b9aa8: add x9, x9, #0xc10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3088)));
  /* b9aac: mov w11, #0x540 */
  ARC_W_W(c, 11, UINT64_C(1344));
  /* b9ab0: str x9, [x20, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* b9ab4: ldurh w9, [x20, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b9ab8: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* b9abc: mov w10, #8 */
  ARC_W_W(c, 10, UINT64_C(8));
  /* b9ac0: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* b9ac4: strb w10, [x20, #8] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(8)), ARC_W_R(c, 10));
  /* b9ac8: orr w9, w9, w11 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 11)));
  /* b9acc: stp x19, x8, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* b9ad0: sturh w9, [x20, #9] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(9)), ARC_W_R(c, 9));
  /* b9ad4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b9ad8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b9adc: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b9ae0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b9ae4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b9ae8: ret  */
  return;
L_b9aec:;
  /* b9aec: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(760560));
  fn1_142488(c);
}

void fn1_bce4c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038701644));
  /* bce4c: bti c */
  /* bti: no architectural effect here */
  /* bce50: ldr x0, [x0, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* bce54: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* bce58: sxtb w9, w8 */
  ARC_W_W(c, 9, ((int32_t)(int8_t)(ARC_W_R(c, 8))));
  /* bce5c: cmn w9, #0x40 */
  (void)arc_add32(c, ARC_W_R(c, 9), UINT64_C(64), 0);
  /* bce60: b.ge #0xbce70 */
  if (ARC_COND(c, 10)) goto L_bce70;
  /* bce64: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* bce68: ldr x16, [x8] */
  ARC_X_W(c, 16, arc_ld64(ARC_X_R(c, 8)));
  /* bce6c: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_bce70:;
  /* bce70: tst w8, #0xc0 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(192)));
  /* bce74: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* bce78: ret  */
  return;
}

void fn1_c3328(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038727464));
L_c3328:;
  /* c3328: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* c332c: stp d15, d14, [sp, #-0xa0]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-160));
    (c)->sp = (c)->sp + INT64_C(-160);
    arc_st64(_pa, (c)->q[15].u64[0]);
    arc_st64((_pa + 8), (c)->q[14].u64[0]);
  }
  /* c3330: stp d13, d12, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, (c)->q[13].u64[0]);
    arc_st64((_pa + 8), (c)->q[12].u64[0]);
  }
  /* c3334: stp d11, d10, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, (c)->q[11].u64[0]);
    arc_st64((_pa + 8), (c)->q[10].u64[0]);
  }
  /* c3338: stp d9, d8, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, (c)->q[9].u64[0]);
    arc_st64((_pa + 8), (c)->q[8].u64[0]);
  }
  /* c333c: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* c3340: stp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* c3344: stp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* c3348: stp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* c334c: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* c3350: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* c3354: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* c3358: sub sp, sp, #0x1f0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(496)));
  /* c335c: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c3360: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c3364: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* c3368: ldr q0, [x8, #0xcf0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3312))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3312)) + 8));
  /* c336c: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c3370: ldr q11, [x9, #0xb90] */
  arc_q_w(c, 11, arc_ld64((ARC_X_R(c, 9) + INT64_C(2960))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2960)) + 8));
  /* c3374: ldr q12, [x8, #0xb00] */
  arc_q_w(c, 12, arc_ld64((ARC_X_R(c, 8) + INT64_C(2816))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2816)) + 8));
  /* c3378: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c337c: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c3380: ldr q13, [x8, #0x990] */
  arc_q_w(c, 13, arc_ld64((ARC_X_R(c, 8) + INT64_C(2448))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2448)) + 8));
  /* c3384: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c3388: stur q0, [x29, #-0x60] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-96)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-96)) + 8, (c)->q[0].u64[1]);
  /* c338c: ldr q15, [x8, #0xaa0] */
  arc_q_w(c, 15, arc_ld64((ARC_X_R(c, 8) + INT64_C(2720))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2720)) + 8));
  /* c3390: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c3394: ldr q14, [x9, #0xa50] */
  arc_q_w(c, 14, arc_ld64((ARC_X_R(c, 9) + INT64_C(2640))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2640)) + 8));
  /* c3398: ldr q0, [x8, #0xba0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2976))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2976)) + 8));
  /* c339c: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c33a0: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c33a4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* c33a8: adrp x6, #0x52000 */
  ARC_X_W(c, 6, (arc_image_bases[1] + UINT64_C(335872)));
  /* c33ac: adrp x27, #0x52000 */
  ARC_X_W(c, 27, (arc_image_bases[1] + UINT64_C(335872)));
  /* c33b0: stur q0, [x29, #-0x70] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-112)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-112)) + 8, (c)->q[0].u64[1]);
  /* c33b4: ldr q0, [x9, #0x9d0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2512))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2512)) + 8));
  /* c33b8: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c33bc: adrp x22, #0x52000 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(335872)));
  /* c33c0: mov x4, #-0x40 */
  ARC_X_W(c, 4, UINT64_C(18446744073709551552));
  /* c33c4: mov w5, #1 */
  ARC_W_W(c, 5, UINT64_C(1));
  /* c33c8: stur q0, [x29, #-0x80] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-128)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-128)) + 8, (c)->q[0].u64[1]);
  /* c33cc: ldr q0, [x8, #0xd60] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3424))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3424)) + 8));
  /* c33d0: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c33d4: mov w21, #4 */
  ARC_W_W(c, 21, UINT64_C(4));
  /* c33d8: mov w28, #0x10 */
  ARC_W_W(c, 28, UINT64_C(16));
  /* c33dc: mov x26, #-1 */
  ARC_X_W(c, 26, UINT64_C(18446744073709551615));
  /* c33e0: stur q0, [x29, #-0x90] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-144)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-144)) + 8, (c)->q[0].u64[1]);
  /* c33e4: ldr q0, [x8, #0xb40] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2880))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2880)) + 8));
  /* c33e8: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c33ec: str w3, [sp, #0x5c] */
  arc_st32(((c)->sp + INT64_C(92)), ARC_W_R(c, 3));
  /* c33f0: stur q0, [x29, #-0xa0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-160)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-160)) + 8, (c)->q[0].u64[1]);
  /* c33f4: ldr q0, [x9, #0x9e0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2528))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2528)) + 8));
  /* c33f8: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c33fc: stp q14, q13, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, (c)->q[14].u64[0]);
    arc_st64(_pa + 8, (c)->q[14].u64[1]);
    arc_st64((_pa + 16), (c)->q[13].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[13].u64[1]);
  }
  /* c3400: stur q0, [x29, #-0xb0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-176)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-176)) + 8, (c)->q[0].u64[1]);
  /* c3404: ldr q0, [x8, #0xbc0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3008))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3008)) + 8));
  /* c3408: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c340c: stp q12, q11, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, (c)->q[12].u64[0]);
    arc_st64(_pa + 8, (c)->q[12].u64[1]);
    arc_st64((_pa + 16), (c)->q[11].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[11].u64[1]);
  }
  /* c3410: stur q0, [x29, #-0xc0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-192)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-192)) + 8, (c)->q[0].u64[1]);
  /* c3414: ldr q0, [x8, #0xb50] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2896))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2896)) + 8));
  /* c3418: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c341c: str q15, [sp] */
  arc_st64((c)->sp, (c)->q[15].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[15].u64[1]);
  /* c3420: stur q0, [x29, #-0xd0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-208)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-208)) + 8, (c)->q[0].u64[1]);
  /* c3424: ldr q0, [x9, #0x9f0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2544))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2544)) + 8));
  /* c3428: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c342c: stur q0, [x29, #-0xe0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-224)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-224)) + 8, (c)->q[0].u64[1]);
  /* c3430: ldr q0, [x8, #0xd10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3344))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3344)) + 8));
  /* c3434: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c3438: stur q0, [x29, #-0xf0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-240)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-240)) + 8, (c)->q[0].u64[1]);
  /* c343c: ldr q0, [x8, #0x970] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2416))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2416)) + 8));
  /* c3440: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c3444: stur q0, [x29, #-0x100] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-256)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-256)) + 8, (c)->q[0].u64[1]);
  /* c3448: ldr q0, [x9, #0xa60] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2656))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2656)) + 8));
  /* c344c: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c3450: str q0, [sp, #0x120] */
  arc_st64(((c)->sp + INT64_C(288)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(288)) + 8, (c)->q[0].u64[1]);
  /* c3454: ldr q0, [x8, #0x980] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2432)) + 8));
  /* c3458: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c345c: str q0, [sp, #0x110] */
  arc_st64(((c)->sp + INT64_C(272)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(272)) + 8, (c)->q[0].u64[1]);
  /* c3460: ldr q0, [x8, #0xbf0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3056))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3056)) + 8));
  /* c3464: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c3468: str q0, [sp, #0x100] */
  arc_st64(((c)->sp + INT64_C(256)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(256)) + 8, (c)->q[0].u64[1]);
  /* c346c: ldr q0, [x9, #0xb10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2832))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2832)) + 8));
  /* c3470: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c3474: str q0, [sp, #0xf0] */
  arc_st64(((c)->sp + INT64_C(240)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(240)) + 8, (c)->q[0].u64[1]);
  /* c3478: ldr q0, [x8, #0xd70] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3440))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3440)) + 8));
  /* c347c: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c3480: str q0, [sp, #0xe0] */
  arc_st64(((c)->sp + INT64_C(224)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(224)) + 8, (c)->q[0].u64[1]);
  /* c3484: ldr q0, [x8, #0xd30] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3376))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3376)) + 8));
  /* c3488: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c348c: str q0, [sp, #0xd0] */
  arc_st64(((c)->sp + INT64_C(208)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(208)) + 8, (c)->q[0].u64[1]);
  /* c3490: ldr q0, [x9, #0x9a0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2464))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2464)) + 8));
  /* c3494: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c3498: str q0, [sp, #0xc0] */
  arc_st64(((c)->sp + INT64_C(192)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(192)) + 8, (c)->q[0].u64[1]);
  /* c349c: ldr q0, [x8, #0xc30] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3120))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3120)) + 8));
  /* c34a0: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c34a4: str q0, [sp, #0xb0] */
  arc_st64(((c)->sp + INT64_C(176)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(176)) + 8, (c)->q[0].u64[1]);
  /* c34a8: ldr q0, [x8, #0xb60] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2912))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2912)) + 8));
  /* c34ac: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c34b0: str q0, [sp, #0xa0] */
  arc_st64(((c)->sp + INT64_C(160)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(160)) + 8, (c)->q[0].u64[1]);
  /* c34b4: ldr q0, [x9, #0xa00] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2560))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2560)) + 8));
  /* c34b8: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c34bc: str q0, [sp, #0x90] */
  arc_st64(((c)->sp + INT64_C(144)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(144)) + 8, (c)->q[0].u64[1]);
  /* c34c0: ldr q0, [x8, #0x9b0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2480))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2480)) + 8));
  /* c34c4: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c34c8: str q0, [sp, #0x80] */
  arc_st64(((c)->sp + INT64_C(128)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(128)) + 8, (c)->q[0].u64[1]);
  /* c34cc: ldr q0, [x8, #0xb20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2848))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2848)) + 8));
  /* c34d0: str q0, [sp, #0x70] */
  arc_st64(((c)->sp + INT64_C(112)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(112)) + 8, (c)->q[0].u64[1]);
  /* c34d4: ldr q0, [x9, #0xcb0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(3248))), arc_ld64((ARC_X_R(c, 9) + INT64_C(3248)) + 8));
  /* c34d8: str q0, [sp, #0x60] */
  arc_st64(((c)->sp + INT64_C(96)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(96)) + 8, (c)->q[0].u64[1]);
L_c34dc:;
  /* c34dc: mov x23, x19 */
  ARC_X_W(c, 23, ARC_X_R(c, 19));
L_c34e0:;
  /* c34e0: sub x8, x20, x23 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) - ARC_X_R(c, 23)));
  /* c34e4: mov x19, x23 */
  ARC_X_W(c, 19, ARC_X_R(c, 23));
  /* c34e8: subs x9, x8, #2 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2)));
  /* c34ec: b.gt #0xc3500 */
  if (ARC_COND(c, 12)) goto L_c3500;
  /* c34f0: b.lo #0xc4680 */
  if (ARC_COND(c, 3)) goto L_c4680;
  /* c34f4: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* c34f8: b.ne #0xc3518 */
  if (ARC_COND(c, 1)) goto L_c3518;
  /* c34fc: b #0xc4598 */
  goto L_c4598;
L_c3500:;
  /* c3500: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* c3504: b.eq #0xc45b4 */
  if (ARC_COND(c, 0)) goto L_c45b4;
  /* c3508: cmp x8, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(4));
  /* c350c: b.eq #0xc4604 */
  if (ARC_COND(c, 0)) goto L_c4604;
  /* c3510: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* c3514: b.eq #0xc44c4 */
  if (ARC_COND(c, 0)) goto L_c44c4;
L_c3518:;
  /* c3518: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* c351c: b.le #0xc46b4 */
  if (ARC_COND(c, 13)) goto L_c46b4;
  /* c3520: cbz x2, #0xc4734 */
  if ((ARC_X_R(c, 2)) == 0) goto L_c4734;
  /* c3524: add x9, x19, x8, lsr #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 8)) >> 1)));
  /* c3528: ldurb w10, [x20, #-1] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 20) + INT64_C(-1))));
  /* c352c: cmp x8, #0x81 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(129));
  /* c3530: b.lo #0xc3678 */
  if (ARC_COND(c, 3)) goto L_c3678;
  /* c3534: ldrb w8, [x9] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 9)));
  /* c3538: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c353c: csel w11, w8, w10, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c3540: csel w8, w8, w10, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c3544: sturb w11, [x20, #-1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-1)), ARC_W_R(c, 11));
  /* c3548: strb w8, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 8));
  /* c354c: ldurb w8, [x20, #-1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(-1))));
  /* c3550: ldrb w10, [x19] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 19)));
  /* c3554: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c3558: csel w11, w8, w10, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c355c: csel w8, w8, w10, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c3560: sturb w11, [x20, #-1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-1)), ARC_W_R(c, 11));
  /* c3564: ldrb w11, [x9] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 9)));
  /* c3568: ldrb w10, [x19] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 19)));
  /* c356c: cmp w8, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 11));
  /* c3570: csel w10, w10, w11, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* c3574: strb w10, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 10));
  /* c3578: ldrb w10, [x9] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 9)));
  /* c357c: csel w8, w10, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c3580: strb w8, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 8));
  /* c3584: ldurb w8, [x9, #-1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + INT64_C(-1))));
  /* c3588: ldurb w10, [x20, #-2] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 20) + INT64_C(-2))));
  /* c358c: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c3590: csel w11, w8, w10, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c3594: csel w8, w8, w10, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c3598: sturb w11, [x20, #-2] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-2)), ARC_W_R(c, 11));
  /* c359c: sturb w8, [x9, #-1] */
  arc_st8((ARC_X_R(c, 9) + INT64_C(-1)), ARC_W_R(c, 8));
  /* c35a0: ldurb w8, [x20, #-2] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(-2))));
  /* c35a4: ldrb w10, [x19, #1] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 19) + INT64_C(1))));
  /* c35a8: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c35ac: csel w11, w8, w10, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c35b0: csel w8, w8, w10, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c35b4: sturb w11, [x20, #-2] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-2)), ARC_W_R(c, 11));
  /* c35b8: ldurb w11, [x9, #-1] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 9) + INT64_C(-1))));
  /* c35bc: ldrb w10, [x19, #1] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 19) + INT64_C(1))));
  /* c35c0: cmp w8, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 11));
  /* c35c4: csel w10, w10, w11, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* c35c8: strb w10, [x19, #1] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(1)), ARC_W_R(c, 10));
  /* c35cc: ldurb w10, [x9, #-1] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 9) + INT64_C(-1))));
  /* c35d0: csel w8, w10, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c35d4: sturb w8, [x9, #-1] */
  arc_st8((ARC_X_R(c, 9) + INT64_C(-1)), ARC_W_R(c, 8));
  /* c35d8: ldrb w8, [x9, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + INT64_C(1))));
  /* c35dc: ldurb w10, [x20, #-3] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 20) + INT64_C(-3))));
  /* c35e0: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c35e4: csel w11, w8, w10, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c35e8: csel w8, w8, w10, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c35ec: sturb w11, [x20, #-3] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-3)), ARC_W_R(c, 11));
  /* c35f0: strb w8, [x9, #1] */
  arc_st8((ARC_X_R(c, 9) + INT64_C(1)), ARC_W_R(c, 8));
  /* c35f4: ldurb w8, [x20, #-3] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(-3))));
  /* c35f8: ldrb w10, [x19, #2] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 19) + INT64_C(2))));
  /* c35fc: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c3600: csel w11, w8, w10, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c3604: csel w8, w8, w10, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c3608: sturb w11, [x20, #-3] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-3)), ARC_W_R(c, 11));
  /* c360c: ldrb w11, [x9, #1] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 9) + INT64_C(1))));
  /* c3610: ldrb w10, [x19, #2] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 19) + INT64_C(2))));
  /* c3614: cmp w8, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 11));
  /* c3618: csel w10, w10, w11, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* c361c: strb w10, [x19, #2] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(2)), ARC_W_R(c, 10));
  /* c3620: ldrb w10, [x9, #1] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 9) + INT64_C(1))));
  /* c3624: ldrb w11, [x9] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 9)));
  /* c3628: csel w8, w10, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c362c: ldurb w10, [x9, #-1] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 9) + INT64_C(-1))));
  /* c3630: and w8, w8, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(255)));
  /* c3634: cmp w11, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 8));
  /* c3638: csel w12, w11, w8, hi */
  ARC_W_W(c, 12, (ARC_COND(c, 8) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 8)));
  /* c363c: csel w8, w11, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 8)));
  /* c3640: cmp w12, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 10));
  /* c3644: csel w11, w12, w10, lo */
  ARC_W_W(c, 11, (ARC_COND(c, 3) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 10)));
  /* c3648: csel w12, w12, w10, hi */
  ARC_W_W(c, 12, (ARC_COND(c, 8) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 10)));
  /* c364c: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* c3650: csel w10, w10, w8, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c3654: csel w8, w8, w11, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 11)));
  /* c3658: strb w12, [x9, #1] */
  arc_st8((ARC_X_R(c, 9) + INT64_C(1)), ARC_W_R(c, 12));
  /* c365c: sturb w10, [x9, #-1] */
  arc_st8((ARC_X_R(c, 9) + INT64_C(-1)), ARC_W_R(c, 10));
  /* c3660: strb w8, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 8));
  /* c3664: ldrb w10, [x19] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 19)));
  /* c3668: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* c366c: strb w10, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 10));
  /* c3670: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* c3674: b #0xc36c8 */
  goto L_c36c8;
L_c3678:;
  /* c3678: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* c367c: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c3680: csel w11, w8, w10, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c3684: csel w8, w8, w10, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c3688: sturb w11, [x20, #-1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-1)), ARC_W_R(c, 11));
  /* c368c: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* c3690: ldurb w8, [x20, #-1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(-1))));
  /* c3694: ldrb w10, [x9] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 9)));
  /* c3698: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c369c: csel w11, w8, w10, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c36a0: csel w8, w8, w10, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c36a4: sturb w11, [x20, #-1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-1)), ARC_W_R(c, 11));
  /* c36a8: ldrb w11, [x19] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 19)));
  /* c36ac: ldrb w10, [x9] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 9)));
  /* c36b0: cmp w8, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 11));
  /* c36b4: csel w10, w10, w11, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* c36b8: strb w10, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 10));
  /* c36bc: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* c36c0: csel w8, w9, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* c36c4: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_c36c8:;
  /* c36c8: ldr w9, [sp, #0x5c] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(92))));
  /* c36cc: sub x2, x2, #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) - UINT64_C(1)));
  /* c36d0: tbnz w9, #0, #0xc36e0 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_c36e0;
  /* c36d4: ldurb w9, [x19, #-1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 19) + INT64_C(-1))));
  /* c36d8: cmp w9, w8, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 9), ((uint64_t)(uint8_t)(ARC_W_R(c, 8))));
  /* c36dc: b.hs #0xc43dc */
  if (ARC_COND(c, 2)) goto L_c43dc;
L_c36e0:;
  /* c36e0: ldurb w9, [x20, #-1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 20) + INT64_C(-1))));
  /* c36e4: cmp w9, w8, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 9), ((uint64_t)(uint8_t)(ARC_W_R(c, 8))));
  /* c36e8: b.ls #0xc3700 */
  if (ARC_COND(c, 9)) goto L_c3700;
  /* c36ec: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
L_c36f0:;
  /* c36f0: ldrb w10, [x9, #1]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(1));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(1));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* c36f4: cmp w10, w8, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 10), ((uint64_t)(uint8_t)(ARC_W_R(c, 8))));
  /* c36f8: b.ls #0xc36f0 */
  if (ARC_COND(c, 9)) goto L_c36f0;
  /* c36fc: b #0xc3720 */
  goto L_c3720;
L_c3700:;
  /* c3700: add x10, x19, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) + UINT64_C(1)));
L_c3704:;
  /* c3704: mov x9, x10 */
  ARC_X_W(c, 9, ARC_X_R(c, 10));
  /* c3708: cmp x10, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 20));
  /* c370c: b.hs #0xc3720 */
  if (ARC_COND(c, 2)) goto L_c3720;
  /* c3710: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* c3714: ldrb w11, [x10], #1 */
  { const uint64_t _a = ARC_X_R(c, 10);
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(1));
    ARC_W_W(c, 11, arc_ld8(_a));
  }
  /* c3718: cmp w11, w8, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 11), ((uint64_t)(uint8_t)(ARC_W_R(c, 8))));
  /* c371c: b.ls #0xc3704 */
  if (ARC_COND(c, 9)) goto L_c3704;
L_c3720:;
  /* c3720: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c3724: mov x10, x20 */
  ARC_X_W(c, 10, ARC_X_R(c, 20));
  /* c3728: b.hs #0xc373c */
  if (ARC_COND(c, 2)) goto L_c373c;
  /* c372c: mov x10, x20 */
  ARC_X_W(c, 10, ARC_X_R(c, 20));
L_c3730:;
  /* c3730: ldrb w11, [x10, #-1]! */
  { const uint64_t _a = (ARC_X_R(c, 10) + INT64_C(-1));
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(-1));
    ARC_W_W(c, 11, arc_ld8(_a));
  }
  /* c3734: cmp w11, w8, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 11), ((uint64_t)(uint8_t)(ARC_W_R(c, 8))));
  /* c3738: b.hi #0xc3730 */
  if (ARC_COND(c, 8)) goto L_c3730;
L_c373c:;
  /* c373c: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* c3740: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
  /* c3744: b.hs #0xc375c */
  if (ARC_COND(c, 2)) goto L_c375c;
  /* c3748: ldrb w12, [x10] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 10)));
  /* c374c: ldrb w13, [x9] */
  ARC_W_W(c, 13, arc_ld8(ARC_X_R(c, 9)));
  /* c3750: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
  /* c3754: strb w12, [x11], #1 */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 12));
  }
  /* c3758: strb w13, [x10] */
  arc_st8(ARC_X_R(c, 10), ARC_W_R(c, 13));
L_c375c:;
  /* c375c: sub x12, x10, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* c3760: sub x15, x12, x11 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* c3764: cmp x15, #0x7f */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(127));
  /* c3768: b.lt #0xc3cf4 */
  if (ARC_COND(c, 11)) goto L_c3cf4;
  /* c376c: dup v0.16b, w8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (ARC_W_R(c, 8));
    _t.u8[1] = (ARC_W_R(c, 8));
    _t.u8[2] = (ARC_W_R(c, 8));
    _t.u8[3] = (ARC_W_R(c, 8));
    _t.u8[4] = (ARC_W_R(c, 8));
    _t.u8[5] = (ARC_W_R(c, 8));
    _t.u8[6] = (ARC_W_R(c, 8));
    _t.u8[7] = (ARC_W_R(c, 8));
    _t.u8[8] = (ARC_W_R(c, 8));
    _t.u8[9] = (ARC_W_R(c, 8));
    _t.u8[10] = (ARC_W_R(c, 8));
    _t.u8[11] = (ARC_W_R(c, 8));
    _t.u8[12] = (ARC_W_R(c, 8));
    _t.u8[13] = (ARC_W_R(c, 8));
    _t.u8[14] = (ARC_W_R(c, 8));
    _t.u8[15] = (ARC_W_R(c, 8));
    (c)->q[0] = _t; }
  /* c3770: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* c3774: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* c3778: b #0xc37a4 */
  goto L_c37a4;
L_c377c:;
  /* c377c: cmp x14, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(0));
  /* c3780: cset w15, eq */
  ARC_W_W(c, 15, (ARC_COND(c, 0) ? 1 : 0));
  /* c3784: cmp x13, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(0));
  /* c3788: add x11, x11, x15, lsl #6 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 15)) << 6)));
  /* c378c: csel x15, x4, xzr, eq */
  ARC_X_W(c, 15, (ARC_COND(c, 0) ? (ARC_X_R(c, 4)) : ARC_X_R(c, 31)));
  /* c3790: cset w16, eq */
  ARC_W_W(c, 16, (ARC_COND(c, 0) ? 1 : 0));
  /* c3794: add x12, x12, x15 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + ARC_X_R(c, 15)));
  /* c3798: sub x15, x12, x11 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* c379c: cmp x15, #0x7e */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(126));
  /* c37a0: b.le #0xc3d00 */
  if (ARC_COND(c, 13)) goto L_c3d00;
L_c37a4:;
  /* c37a4: cbz x14, #0xc37b4 */
  if ((ARC_X_R(c, 14)) == 0) goto L_c37b4;
  /* c37a8: cbz x13, #0xc3a18 */
  if ((ARC_X_R(c, 13)) == 0) goto L_c3a18;
L_c37ac:;
  /* c37ac: cbnz x14, #0xc3cb0 */
  if ((ARC_X_R(c, 14)) != 0) goto L_c3cb0;
  /* c37b0: b #0xc377c */
  goto L_c377c;
L_c37b4:;
  /* c37b4: ldp q1, q2, [x11] */
  { const uint64_t _pa = ARC_X_R(c, 11);
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 2, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c37b8: ldr q10, [sp, #0x120] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(288))), arc_ld64(((c)->sp + INT64_C(288)) + 8));
  /* c37bc: ldp q25, q27, [x11, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(32));
    arc_q_w(c, 25, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 27, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c37c0: ldr q8, [x6, #0xc40] */
  arc_q_w(c, 8, arc_ld64((ARC_X_R(c, 6) + INT64_C(3136))), arc_ld64((ARC_X_R(c, 6) + INT64_C(3136)) + 8));
  /* c37c4: ldr q9, [x27, #0xbb0] */
  arc_q_w(c, 9, arc_ld64((ARC_X_R(c, 27) + INT64_C(2992))), arc_ld64((ARC_X_R(c, 27) + INT64_C(2992)) + 8));
  /* c37c8: cmhi v1.16b, v0.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[0].u8[0] > (c)->q[1].u8[0]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[1] = ((c)->q[0].u8[1] > (c)->q[1].u8[1]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[2] = ((c)->q[0].u8[2] > (c)->q[1].u8[2]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[3] = ((c)->q[0].u8[3] > (c)->q[1].u8[3]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[4] = ((c)->q[0].u8[4] > (c)->q[1].u8[4]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[5] = ((c)->q[0].u8[5] > (c)->q[1].u8[5]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[6] = ((c)->q[0].u8[6] > (c)->q[1].u8[6]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[7] = ((c)->q[0].u8[7] > (c)->q[1].u8[7]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[8] = ((c)->q[0].u8[8] > (c)->q[1].u8[8]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[9] = ((c)->q[0].u8[9] > (c)->q[1].u8[9]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[10] = ((c)->q[0].u8[10] > (c)->q[1].u8[10]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[11] = ((c)->q[0].u8[11] > (c)->q[1].u8[11]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[12] = ((c)->q[0].u8[12] > (c)->q[1].u8[12]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[13] = ((c)->q[0].u8[13] > (c)->q[1].u8[13]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[14] = ((c)->q[0].u8[14] > (c)->q[1].u8[14]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[15] = ((c)->q[0].u8[15] > (c)->q[1].u8[15]) ? (uint8_t)~(uint8_t)0 : 0;
    (c)->q[1] = _t; }
  /* c37cc: cmhi v2.16b, v0.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[0].u8[0] > (c)->q[2].u8[0]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[1] = ((c)->q[0].u8[1] > (c)->q[2].u8[1]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[2] = ((c)->q[0].u8[2] > (c)->q[2].u8[2]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[3] = ((c)->q[0].u8[3] > (c)->q[2].u8[3]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[4] = ((c)->q[0].u8[4] > (c)->q[2].u8[4]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[5] = ((c)->q[0].u8[5] > (c)->q[2].u8[5]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[6] = ((c)->q[0].u8[6] > (c)->q[2].u8[6]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[7] = ((c)->q[0].u8[7] > (c)->q[2].u8[7]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[8] = ((c)->q[0].u8[8] > (c)->q[2].u8[8]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[9] = ((c)->q[0].u8[9] > (c)->q[2].u8[9]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[10] = ((c)->q[0].u8[10] > (c)->q[2].u8[10]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[11] = ((c)->q[0].u8[11] > (c)->q[2].u8[11]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[12] = ((c)->q[0].u8[12] > (c)->q[2].u8[12]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[13] = ((c)->q[0].u8[13] > (c)->q[2].u8[13]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[14] = ((c)->q[0].u8[14] > (c)->q[2].u8[14]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[15] = ((c)->q[0].u8[15] > (c)->q[2].u8[15]) ? (uint8_t)~(uint8_t)0 : 0;
    (c)->q[2] = _t; }
  /* c37d0: cmhi v25.16b, v0.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[0].u8[0] > (c)->q[25].u8[0]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[1] = ((c)->q[0].u8[1] > (c)->q[25].u8[1]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[2] = ((c)->q[0].u8[2] > (c)->q[25].u8[2]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[3] = ((c)->q[0].u8[3] > (c)->q[25].u8[3]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[4] = ((c)->q[0].u8[4] > (c)->q[25].u8[4]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[5] = ((c)->q[0].u8[5] > (c)->q[25].u8[5]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[6] = ((c)->q[0].u8[6] > (c)->q[25].u8[6]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[7] = ((c)->q[0].u8[7] > (c)->q[25].u8[7]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[8] = ((c)->q[0].u8[8] > (c)->q[25].u8[8]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[9] = ((c)->q[0].u8[9] > (c)->q[25].u8[9]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[10] = ((c)->q[0].u8[10] > (c)->q[25].u8[10]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[11] = ((c)->q[0].u8[11] > (c)->q[25].u8[11]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[12] = ((c)->q[0].u8[12] > (c)->q[25].u8[12]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[13] = ((c)->q[0].u8[13] > (c)->q[25].u8[13]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[14] = ((c)->q[0].u8[14] > (c)->q[25].u8[14]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[15] = ((c)->q[0].u8[15] > (c)->q[25].u8[15]) ? (uint8_t)~(uint8_t)0 : 0;
    (c)->q[25] = _t; }
  /* c37d4: sshll v3.8h, v1.8b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[1].i8[0]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[1].i8[1]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[1].i8[2]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[1].i8[3]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[1].i8[4]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[1].i8[5]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[1].i8[6]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[1].i8[7]) << 0);
    (c)->q[3] = _t; }
  /* c37d8: sshll2 v1.8h, v1.16b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[1].i8[8]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[1].i8[9]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[1].i8[10]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[1].i8[11]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[1].i8[12]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[1].i8[13]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[1].i8[14]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[1].i8[15]) << 0);
    (c)->q[1] = _t; }
  /* c37dc: sshll2 v4.8h, v2.16b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[2].i8[8]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[2].i8[9]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[2].i8[10]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[2].i8[11]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[2].i8[12]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[2].i8[13]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[2].i8[14]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[2].i8[15]) << 0);
    (c)->q[4] = _t; }
  /* c37e0: sshll v2.8h, v2.8b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[2].i8[0]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[2].i8[1]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[2].i8[2]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[2].i8[3]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[2].i8[4]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[2].i8[5]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[2].i8[6]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[2].i8[7]) << 0);
    (c)->q[2] = _t; }
  /* c37e4: sshll2 v5.4s, v3.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[3].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[3].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[3].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[3].i16[7]) << 0);
    (c)->q[5] = _t; }
  /* c37e8: sshll v6.4s, v1.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[1].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[1].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[1].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[1].i16[3]) << 0);
    (c)->q[6] = _t; }
  /* c37ec: sshll v3.4s, v3.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[3].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[3].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[3].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[3].i16[3]) << 0);
    (c)->q[3] = _t; }
  /* c37f0: sshll2 v1.4s, v1.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[1].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[1].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[1].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[1].i16[7]) << 0);
    (c)->q[1] = _t; }
  /* c37f4: sshll2 v23.4s, v2.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[2].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[2].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[2].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[2].i16[7]) << 0);
    (c)->q[23] = _t; }
  /* c37f8: sshll v17.4s, v4.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[4].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[4].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[4].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[4].i16[3]) << 0);
    (c)->q[17] = _t; }
  /* c37fc: sshll2 v19.4s, v4.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[4].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[4].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[4].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[4].i16[7]) << 0);
    (c)->q[19] = _t; }
  /* c3800: sshll v18.4s, v2.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[2].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[2].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[2].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[2].i16[3]) << 0);
    (c)->q[18] = _t; }
  /* c3804: ushll2 v7.2d, v6.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[6].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[6].u32[3]) << 0);
    (c)->q[7] = _t; }
  /* c3808: ushll2 v16.2d, v3.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[3].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[3].u32[3]) << 0);
    (c)->q[16] = _t; }
  /* c380c: ushll v3.2d, v3.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[3].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[3].u32[1]) << 0);
    (c)->q[3] = _t; }
  /* c3810: ushll2 v20.2d, v1.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[1].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[1].u32[3]) << 0);
    (c)->q[20] = _t; }
  /* c3814: ushll v21.2d, v1.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[1].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[1].u32[1]) << 0);
    (c)->q[21] = _t; }
  /* c3818: ushll v24.2d, v6.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[6].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[6].u32[1]) << 0);
    (c)->q[24] = _t; }
  /* c381c: ldp q6, q1, [x29, #-0x70] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-112));
    arc_q_w(c, 6, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c3820: ushll2 v4.2d, v5.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[3]) << 0);
    (c)->q[4] = _t; }
  /* c3824: ushll v22.2d, v5.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[1]) << 0);
    (c)->q[22] = _t; }
  /* c3828: ushll2 v26.2d, v17.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[17].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[17].u32[3]) << 0);
    (c)->q[26] = _t; }
  /* c382c: bic v5.16b, v12.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[12].u8[0] & (~(c)->q[16].u8[0]);
    _t.u8[1] = (c)->q[12].u8[1] & (~(c)->q[16].u8[1]);
    _t.u8[2] = (c)->q[12].u8[2] & (~(c)->q[16].u8[2]);
    _t.u8[3] = (c)->q[12].u8[3] & (~(c)->q[16].u8[3]);
    _t.u8[4] = (c)->q[12].u8[4] & (~(c)->q[16].u8[4]);
    _t.u8[5] = (c)->q[12].u8[5] & (~(c)->q[16].u8[5]);
    _t.u8[6] = (c)->q[12].u8[6] & (~(c)->q[16].u8[6]);
    _t.u8[7] = (c)->q[12].u8[7] & (~(c)->q[16].u8[7]);
    _t.u8[8] = (c)->q[12].u8[8] & (~(c)->q[16].u8[8]);
    _t.u8[9] = (c)->q[12].u8[9] & (~(c)->q[16].u8[9]);
    _t.u8[10] = (c)->q[12].u8[10] & (~(c)->q[16].u8[10]);
    _t.u8[11] = (c)->q[12].u8[11] & (~(c)->q[16].u8[11]);
    _t.u8[12] = (c)->q[12].u8[12] & (~(c)->q[16].u8[12]);
    _t.u8[13] = (c)->q[12].u8[13] & (~(c)->q[16].u8[13]);
    _t.u8[14] = (c)->q[12].u8[14] & (~(c)->q[16].u8[14]);
    _t.u8[15] = (c)->q[12].u8[15] & (~(c)->q[16].u8[15]);
    (c)->q[5] = _t; }
  /* c3830: bic v2.16b, v11.16b, v20.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[11].u8[0] & (~(c)->q[20].u8[0]);
    _t.u8[1] = (c)->q[11].u8[1] & (~(c)->q[20].u8[1]);
    _t.u8[2] = (c)->q[11].u8[2] & (~(c)->q[20].u8[2]);
    _t.u8[3] = (c)->q[11].u8[3] & (~(c)->q[20].u8[3]);
    _t.u8[4] = (c)->q[11].u8[4] & (~(c)->q[20].u8[4]);
    _t.u8[5] = (c)->q[11].u8[5] & (~(c)->q[20].u8[5]);
    _t.u8[6] = (c)->q[11].u8[6] & (~(c)->q[20].u8[6]);
    _t.u8[7] = (c)->q[11].u8[7] & (~(c)->q[20].u8[7]);
    _t.u8[8] = (c)->q[11].u8[8] & (~(c)->q[20].u8[8]);
    _t.u8[9] = (c)->q[11].u8[9] & (~(c)->q[20].u8[9]);
    _t.u8[10] = (c)->q[11].u8[10] & (~(c)->q[20].u8[10]);
    _t.u8[11] = (c)->q[11].u8[11] & (~(c)->q[20].u8[11]);
    _t.u8[12] = (c)->q[11].u8[12] & (~(c)->q[20].u8[12]);
    _t.u8[13] = (c)->q[11].u8[13] & (~(c)->q[20].u8[13]);
    _t.u8[14] = (c)->q[11].u8[14] & (~(c)->q[20].u8[14]);
    _t.u8[15] = (c)->q[11].u8[15] & (~(c)->q[20].u8[15]);
    (c)->q[2] = _t; }
  /* c3834: ushll v20.2d, v17.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[17].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[17].u32[1]) << 0);
    (c)->q[20] = _t; }
  /* c3838: ldur q17, [x29, #-0x90] */
  arc_q_w(c, 17, arc_ld64((ARC_X_R(c, 29) + INT64_C(-144))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-144)) + 8));
  /* c383c: bic v6.16b, v6.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] & (~(c)->q[3].u8[0]);
    _t.u8[1] = (c)->q[6].u8[1] & (~(c)->q[3].u8[1]);
    _t.u8[2] = (c)->q[6].u8[2] & (~(c)->q[3].u8[2]);
    _t.u8[3] = (c)->q[6].u8[3] & (~(c)->q[3].u8[3]);
    _t.u8[4] = (c)->q[6].u8[4] & (~(c)->q[3].u8[4]);
    _t.u8[5] = (c)->q[6].u8[5] & (~(c)->q[3].u8[5]);
    _t.u8[6] = (c)->q[6].u8[6] & (~(c)->q[3].u8[6]);
    _t.u8[7] = (c)->q[6].u8[7] & (~(c)->q[3].u8[7]);
    _t.u8[8] = (c)->q[6].u8[8] & (~(c)->q[3].u8[8]);
    _t.u8[9] = (c)->q[6].u8[9] & (~(c)->q[3].u8[9]);
    _t.u8[10] = (c)->q[6].u8[10] & (~(c)->q[3].u8[10]);
    _t.u8[11] = (c)->q[6].u8[11] & (~(c)->q[3].u8[11]);
    _t.u8[12] = (c)->q[6].u8[12] & (~(c)->q[3].u8[12]);
    _t.u8[13] = (c)->q[6].u8[13] & (~(c)->q[3].u8[13]);
    _t.u8[14] = (c)->q[6].u8[14] & (~(c)->q[3].u8[14]);
    _t.u8[15] = (c)->q[6].u8[15] & (~(c)->q[3].u8[15]);
    (c)->q[6] = _t; }
  /* c3840: ldur q3, [x29, #-0x80] */
  arc_q_w(c, 3, arc_ld64((ARC_X_R(c, 29) + INT64_C(-128))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-128)) + 8));
  /* c3844: bic v1.16b, v1.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[0] & (~(c)->q[4].u8[0]);
    _t.u8[1] = (c)->q[1].u8[1] & (~(c)->q[4].u8[1]);
    _t.u8[2] = (c)->q[1].u8[2] & (~(c)->q[4].u8[2]);
    _t.u8[3] = (c)->q[1].u8[3] & (~(c)->q[4].u8[3]);
    _t.u8[4] = (c)->q[1].u8[4] & (~(c)->q[4].u8[4]);
    _t.u8[5] = (c)->q[1].u8[5] & (~(c)->q[4].u8[5]);
    _t.u8[6] = (c)->q[1].u8[6] & (~(c)->q[4].u8[6]);
    _t.u8[7] = (c)->q[1].u8[7] & (~(c)->q[4].u8[7]);
    _t.u8[8] = (c)->q[1].u8[8] & (~(c)->q[4].u8[8]);
    _t.u8[9] = (c)->q[1].u8[9] & (~(c)->q[4].u8[9]);
    _t.u8[10] = (c)->q[1].u8[10] & (~(c)->q[4].u8[10]);
    _t.u8[11] = (c)->q[1].u8[11] & (~(c)->q[4].u8[11]);
    _t.u8[12] = (c)->q[1].u8[12] & (~(c)->q[4].u8[12]);
    _t.u8[13] = (c)->q[1].u8[13] & (~(c)->q[4].u8[13]);
    _t.u8[14] = (c)->q[1].u8[14] & (~(c)->q[4].u8[14]);
    _t.u8[15] = (c)->q[1].u8[15] & (~(c)->q[4].u8[15]);
    (c)->q[1] = _t; }
  /* c3848: bic v4.16b, v14.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[14].u8[0] & (~(c)->q[22].u8[0]);
    _t.u8[1] = (c)->q[14].u8[1] & (~(c)->q[22].u8[1]);
    _t.u8[2] = (c)->q[14].u8[2] & (~(c)->q[22].u8[2]);
    _t.u8[3] = (c)->q[14].u8[3] & (~(c)->q[22].u8[3]);
    _t.u8[4] = (c)->q[14].u8[4] & (~(c)->q[22].u8[4]);
    _t.u8[5] = (c)->q[14].u8[5] & (~(c)->q[22].u8[5]);
    _t.u8[6] = (c)->q[14].u8[6] & (~(c)->q[22].u8[6]);
    _t.u8[7] = (c)->q[14].u8[7] & (~(c)->q[22].u8[7]);
    _t.u8[8] = (c)->q[14].u8[8] & (~(c)->q[22].u8[8]);
    _t.u8[9] = (c)->q[14].u8[9] & (~(c)->q[22].u8[9]);
    _t.u8[10] = (c)->q[14].u8[10] & (~(c)->q[22].u8[10]);
    _t.u8[11] = (c)->q[14].u8[11] & (~(c)->q[22].u8[11]);
    _t.u8[12] = (c)->q[14].u8[12] & (~(c)->q[22].u8[12]);
    _t.u8[13] = (c)->q[14].u8[13] & (~(c)->q[22].u8[13]);
    _t.u8[14] = (c)->q[14].u8[14] & (~(c)->q[22].u8[14]);
    _t.u8[15] = (c)->q[14].u8[15] & (~(c)->q[22].u8[15]);
    (c)->q[4] = _t; }
  /* c384c: ushll2 v22.2d, v19.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[19].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[19].u32[3]) << 0);
    (c)->q[22] = _t; }
  /* c3850: bic v16.16b, v13.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[13].u8[0] & (~(c)->q[7].u8[0]);
    _t.u8[1] = (c)->q[13].u8[1] & (~(c)->q[7].u8[1]);
    _t.u8[2] = (c)->q[13].u8[2] & (~(c)->q[7].u8[2]);
    _t.u8[3] = (c)->q[13].u8[3] & (~(c)->q[7].u8[3]);
    _t.u8[4] = (c)->q[13].u8[4] & (~(c)->q[7].u8[4]);
    _t.u8[5] = (c)->q[13].u8[5] & (~(c)->q[7].u8[5]);
    _t.u8[6] = (c)->q[13].u8[6] & (~(c)->q[7].u8[6]);
    _t.u8[7] = (c)->q[13].u8[7] & (~(c)->q[7].u8[7]);
    _t.u8[8] = (c)->q[13].u8[8] & (~(c)->q[7].u8[8]);
    _t.u8[9] = (c)->q[13].u8[9] & (~(c)->q[7].u8[9]);
    _t.u8[10] = (c)->q[13].u8[10] & (~(c)->q[7].u8[10]);
    _t.u8[11] = (c)->q[13].u8[11] & (~(c)->q[7].u8[11]);
    _t.u8[12] = (c)->q[13].u8[12] & (~(c)->q[7].u8[12]);
    _t.u8[13] = (c)->q[13].u8[13] & (~(c)->q[7].u8[13]);
    _t.u8[14] = (c)->q[13].u8[14] & (~(c)->q[7].u8[14]);
    _t.u8[15] = (c)->q[13].u8[15] & (~(c)->q[7].u8[15]);
    (c)->q[16] = _t; }
  /* c3854: bic v3.16b, v3.16b, v24.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[3].u8[0] & (~(c)->q[24].u8[0]);
    _t.u8[1] = (c)->q[3].u8[1] & (~(c)->q[24].u8[1]);
    _t.u8[2] = (c)->q[3].u8[2] & (~(c)->q[24].u8[2]);
    _t.u8[3] = (c)->q[3].u8[3] & (~(c)->q[24].u8[3]);
    _t.u8[4] = (c)->q[3].u8[4] & (~(c)->q[24].u8[4]);
    _t.u8[5] = (c)->q[3].u8[5] & (~(c)->q[24].u8[5]);
    _t.u8[6] = (c)->q[3].u8[6] & (~(c)->q[24].u8[6]);
    _t.u8[7] = (c)->q[3].u8[7] & (~(c)->q[24].u8[7]);
    _t.u8[8] = (c)->q[3].u8[8] & (~(c)->q[24].u8[8]);
    _t.u8[9] = (c)->q[3].u8[9] & (~(c)->q[24].u8[9]);
    _t.u8[10] = (c)->q[3].u8[10] & (~(c)->q[24].u8[10]);
    _t.u8[11] = (c)->q[3].u8[11] & (~(c)->q[24].u8[11]);
    _t.u8[12] = (c)->q[3].u8[12] & (~(c)->q[24].u8[12]);
    _t.u8[13] = (c)->q[3].u8[13] & (~(c)->q[24].u8[13]);
    _t.u8[14] = (c)->q[3].u8[14] & (~(c)->q[24].u8[14]);
    _t.u8[15] = (c)->q[3].u8[15] & (~(c)->q[24].u8[15]);
    (c)->q[3] = _t; }
  /* c3858: ushll2 v24.2d, v23.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[23].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[23].u32[3]) << 0);
    (c)->q[24] = _t; }
  /* c385c: bic v7.16b, v15.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[15].u8[0] & (~(c)->q[21].u8[0]);
    _t.u8[1] = (c)->q[15].u8[1] & (~(c)->q[21].u8[1]);
    _t.u8[2] = (c)->q[15].u8[2] & (~(c)->q[21].u8[2]);
    _t.u8[3] = (c)->q[15].u8[3] & (~(c)->q[21].u8[3]);
    _t.u8[4] = (c)->q[15].u8[4] & (~(c)->q[21].u8[4]);
    _t.u8[5] = (c)->q[15].u8[5] & (~(c)->q[21].u8[5]);
    _t.u8[6] = (c)->q[15].u8[6] & (~(c)->q[21].u8[6]);
    _t.u8[7] = (c)->q[15].u8[7] & (~(c)->q[21].u8[7]);
    _t.u8[8] = (c)->q[15].u8[8] & (~(c)->q[21].u8[8]);
    _t.u8[9] = (c)->q[15].u8[9] & (~(c)->q[21].u8[9]);
    _t.u8[10] = (c)->q[15].u8[10] & (~(c)->q[21].u8[10]);
    _t.u8[11] = (c)->q[15].u8[11] & (~(c)->q[21].u8[11]);
    _t.u8[12] = (c)->q[15].u8[12] & (~(c)->q[21].u8[12]);
    _t.u8[13] = (c)->q[15].u8[13] & (~(c)->q[21].u8[13]);
    _t.u8[14] = (c)->q[15].u8[14] & (~(c)->q[21].u8[14]);
    _t.u8[15] = (c)->q[15].u8[15] & (~(c)->q[21].u8[15]);
    (c)->q[7] = _t; }
  /* c3860: ushll v21.2d, v18.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[18].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[18].u32[1]) << 0);
    (c)->q[21] = _t; }
  /* c3864: ushll v19.2d, v19.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[19].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[19].u32[1]) << 0);
    (c)->q[19] = _t; }
  /* c3868: ushll2 v18.2d, v18.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[18].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[18].u32[3]) << 0);
    (c)->q[18] = _t; }
  /* c386c: ushll v23.2d, v23.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[23].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[23].u32[1]) << 0);
    (c)->q[23] = _t; }
  /* c3870: bic v17.16b, v17.16b, v24.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] & (~(c)->q[24].u8[0]);
    _t.u8[1] = (c)->q[17].u8[1] & (~(c)->q[24].u8[1]);
    _t.u8[2] = (c)->q[17].u8[2] & (~(c)->q[24].u8[2]);
    _t.u8[3] = (c)->q[17].u8[3] & (~(c)->q[24].u8[3]);
    _t.u8[4] = (c)->q[17].u8[4] & (~(c)->q[24].u8[4]);
    _t.u8[5] = (c)->q[17].u8[5] & (~(c)->q[24].u8[5]);
    _t.u8[6] = (c)->q[17].u8[6] & (~(c)->q[24].u8[6]);
    _t.u8[7] = (c)->q[17].u8[7] & (~(c)->q[24].u8[7]);
    _t.u8[8] = (c)->q[17].u8[8] & (~(c)->q[24].u8[8]);
    _t.u8[9] = (c)->q[17].u8[9] & (~(c)->q[24].u8[9]);
    _t.u8[10] = (c)->q[17].u8[10] & (~(c)->q[24].u8[10]);
    _t.u8[11] = (c)->q[17].u8[11] & (~(c)->q[24].u8[11]);
    _t.u8[12] = (c)->q[17].u8[12] & (~(c)->q[24].u8[12]);
    _t.u8[13] = (c)->q[17].u8[13] & (~(c)->q[24].u8[13]);
    _t.u8[14] = (c)->q[17].u8[14] & (~(c)->q[24].u8[14]);
    _t.u8[15] = (c)->q[17].u8[15] & (~(c)->q[24].u8[15]);
    (c)->q[17] = _t; }
  /* c3874: ldur q24, [x29, #-0xa0] */
  arc_q_w(c, 24, arc_ld64((ARC_X_R(c, 29) + INT64_C(-160))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-160)) + 8));
  /* c3878: bic v22.16b, v24.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] & (~(c)->q[22].u8[0]);
    _t.u8[1] = (c)->q[24].u8[1] & (~(c)->q[22].u8[1]);
    _t.u8[2] = (c)->q[24].u8[2] & (~(c)->q[22].u8[2]);
    _t.u8[3] = (c)->q[24].u8[3] & (~(c)->q[22].u8[3]);
    _t.u8[4] = (c)->q[24].u8[4] & (~(c)->q[22].u8[4]);
    _t.u8[5] = (c)->q[24].u8[5] & (~(c)->q[22].u8[5]);
    _t.u8[6] = (c)->q[24].u8[6] & (~(c)->q[22].u8[6]);
    _t.u8[7] = (c)->q[24].u8[7] & (~(c)->q[22].u8[7]);
    _t.u8[8] = (c)->q[24].u8[8] & (~(c)->q[22].u8[8]);
    _t.u8[9] = (c)->q[24].u8[9] & (~(c)->q[22].u8[9]);
    _t.u8[10] = (c)->q[24].u8[10] & (~(c)->q[22].u8[10]);
    _t.u8[11] = (c)->q[24].u8[11] & (~(c)->q[22].u8[11]);
    _t.u8[12] = (c)->q[24].u8[12] & (~(c)->q[22].u8[12]);
    _t.u8[13] = (c)->q[24].u8[13] & (~(c)->q[22].u8[13]);
    _t.u8[14] = (c)->q[24].u8[14] & (~(c)->q[22].u8[14]);
    _t.u8[15] = (c)->q[24].u8[15] & (~(c)->q[22].u8[15]);
    (c)->q[22] = _t; }
  /* c387c: ldur q24, [x29, #-0x100] */
  arc_q_w(c, 24, arc_ld64((ARC_X_R(c, 29) + INT64_C(-256))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-256)) + 8));
  /* c3880: orr v1.16b, v17.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[17].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[17].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[17].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[17].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[17].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[17].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[17].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[17].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[17].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[17].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[17].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[17].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[17].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[17].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[17].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* c3884: bic v20.16b, v24.16b, v20.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] & (~(c)->q[20].u8[0]);
    _t.u8[1] = (c)->q[24].u8[1] & (~(c)->q[20].u8[1]);
    _t.u8[2] = (c)->q[24].u8[2] & (~(c)->q[20].u8[2]);
    _t.u8[3] = (c)->q[24].u8[3] & (~(c)->q[20].u8[3]);
    _t.u8[4] = (c)->q[24].u8[4] & (~(c)->q[20].u8[4]);
    _t.u8[5] = (c)->q[24].u8[5] & (~(c)->q[20].u8[5]);
    _t.u8[6] = (c)->q[24].u8[6] & (~(c)->q[20].u8[6]);
    _t.u8[7] = (c)->q[24].u8[7] & (~(c)->q[20].u8[7]);
    _t.u8[8] = (c)->q[24].u8[8] & (~(c)->q[20].u8[8]);
    _t.u8[9] = (c)->q[24].u8[9] & (~(c)->q[20].u8[9]);
    _t.u8[10] = (c)->q[24].u8[10] & (~(c)->q[20].u8[10]);
    _t.u8[11] = (c)->q[24].u8[11] & (~(c)->q[20].u8[11]);
    _t.u8[12] = (c)->q[24].u8[12] & (~(c)->q[20].u8[12]);
    _t.u8[13] = (c)->q[24].u8[13] & (~(c)->q[20].u8[13]);
    _t.u8[14] = (c)->q[24].u8[14] & (~(c)->q[20].u8[14]);
    _t.u8[15] = (c)->q[24].u8[15] & (~(c)->q[20].u8[15]);
    (c)->q[20] = _t; }
  /* c3888: ldp q24, q28, [x29, #-0xf0] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-240));
    arc_q_w(c, 24, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 28, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c388c: orr v2.16b, v22.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[22].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[22].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[22].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[22].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[22].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[22].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[22].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[22].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[22].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[22].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[22].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[22].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[22].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[22].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[22].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* c3890: bic v19.16b, v28.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[28].u8[0] & (~(c)->q[19].u8[0]);
    _t.u8[1] = (c)->q[28].u8[1] & (~(c)->q[19].u8[1]);
    _t.u8[2] = (c)->q[28].u8[2] & (~(c)->q[19].u8[2]);
    _t.u8[3] = (c)->q[28].u8[3] & (~(c)->q[19].u8[3]);
    _t.u8[4] = (c)->q[28].u8[4] & (~(c)->q[19].u8[4]);
    _t.u8[5] = (c)->q[28].u8[5] & (~(c)->q[19].u8[5]);
    _t.u8[6] = (c)->q[28].u8[6] & (~(c)->q[19].u8[6]);
    _t.u8[7] = (c)->q[28].u8[7] & (~(c)->q[19].u8[7]);
    _t.u8[8] = (c)->q[28].u8[8] & (~(c)->q[19].u8[8]);
    _t.u8[9] = (c)->q[28].u8[9] & (~(c)->q[19].u8[9]);
    _t.u8[10] = (c)->q[28].u8[10] & (~(c)->q[19].u8[10]);
    _t.u8[11] = (c)->q[28].u8[11] & (~(c)->q[19].u8[11]);
    _t.u8[12] = (c)->q[28].u8[12] & (~(c)->q[19].u8[12]);
    _t.u8[13] = (c)->q[28].u8[13] & (~(c)->q[19].u8[13]);
    _t.u8[14] = (c)->q[28].u8[14] & (~(c)->q[19].u8[14]);
    _t.u8[15] = (c)->q[28].u8[15] & (~(c)->q[19].u8[15]);
    (c)->q[19] = _t; }
  /* c3894: bic v21.16b, v24.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] & (~(c)->q[21].u8[0]);
    _t.u8[1] = (c)->q[24].u8[1] & (~(c)->q[21].u8[1]);
    _t.u8[2] = (c)->q[24].u8[2] & (~(c)->q[21].u8[2]);
    _t.u8[3] = (c)->q[24].u8[3] & (~(c)->q[21].u8[3]);
    _t.u8[4] = (c)->q[24].u8[4] & (~(c)->q[21].u8[4]);
    _t.u8[5] = (c)->q[24].u8[5] & (~(c)->q[21].u8[5]);
    _t.u8[6] = (c)->q[24].u8[6] & (~(c)->q[21].u8[6]);
    _t.u8[7] = (c)->q[24].u8[7] & (~(c)->q[21].u8[7]);
    _t.u8[8] = (c)->q[24].u8[8] & (~(c)->q[21].u8[8]);
    _t.u8[9] = (c)->q[24].u8[9] & (~(c)->q[21].u8[9]);
    _t.u8[10] = (c)->q[24].u8[10] & (~(c)->q[21].u8[10]);
    _t.u8[11] = (c)->q[24].u8[11] & (~(c)->q[21].u8[11]);
    _t.u8[12] = (c)->q[24].u8[12] & (~(c)->q[21].u8[12]);
    _t.u8[13] = (c)->q[24].u8[13] & (~(c)->q[21].u8[13]);
    _t.u8[14] = (c)->q[24].u8[14] & (~(c)->q[21].u8[14]);
    _t.u8[15] = (c)->q[24].u8[15] & (~(c)->q[21].u8[15]);
    (c)->q[21] = _t; }
  /* c3898: cmhi v24.16b, v0.16b, v27.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[0].u8[0] > (c)->q[27].u8[0]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[1] = ((c)->q[0].u8[1] > (c)->q[27].u8[1]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[2] = ((c)->q[0].u8[2] > (c)->q[27].u8[2]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[3] = ((c)->q[0].u8[3] > (c)->q[27].u8[3]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[4] = ((c)->q[0].u8[4] > (c)->q[27].u8[4]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[5] = ((c)->q[0].u8[5] > (c)->q[27].u8[5]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[6] = ((c)->q[0].u8[6] > (c)->q[27].u8[6]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[7] = ((c)->q[0].u8[7] > (c)->q[27].u8[7]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[8] = ((c)->q[0].u8[8] > (c)->q[27].u8[8]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[9] = ((c)->q[0].u8[9] > (c)->q[27].u8[9]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[10] = ((c)->q[0].u8[10] > (c)->q[27].u8[10]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[11] = ((c)->q[0].u8[11] > (c)->q[27].u8[11]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[12] = ((c)->q[0].u8[12] > (c)->q[27].u8[12]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[13] = ((c)->q[0].u8[13] > (c)->q[27].u8[13]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[14] = ((c)->q[0].u8[14] > (c)->q[27].u8[14]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[15] = ((c)->q[0].u8[15] > (c)->q[27].u8[15]) ? (uint8_t)~(uint8_t)0 : 0;
    (c)->q[24] = _t; }
  /* c389c: ldp q28, q27, [x29, #-0xc0] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-192));
    arc_q_w(c, 28, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 27, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c38a0: orr v3.16b, v20.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* c38a4: sshll2 v20.8h, v25.16b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[25].i8[8]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[25].i8[9]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[25].i8[10]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[25].i8[11]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[25].i8[12]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[25].i8[13]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[25].i8[14]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[25].i8[15]) << 0);
    (c)->q[20] = _t; }
  /* c38a8: orr v7.16b, v19.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] | (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] | (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] | (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] | (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] | (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] | (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] | (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] | (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] | (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] | (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] | (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] | (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] | (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] | (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] | (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] | (c)->q[7].u8[15];
    (c)->q[7] = _t; }
  /* c38ac: sshll2 v19.8h, v24.16b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[24].i8[8]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[24].i8[9]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[24].i8[10]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[24].i8[11]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[24].i8[12]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[24].i8[13]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[24].i8[14]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[24].i8[15]) << 0);
    (c)->q[19] = _t; }
  /* c38b0: orr v6.16b, v21.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] | (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] | (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] | (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] | (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] | (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] | (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] | (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] | (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] | (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] | (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] | (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] | (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] | (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] | (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] | (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] | (c)->q[6].u8[15];
    (c)->q[6] = _t; }
  /* c38b4: bic v18.16b, v27.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[27].u8[0] & (~(c)->q[18].u8[0]);
    _t.u8[1] = (c)->q[27].u8[1] & (~(c)->q[18].u8[1]);
    _t.u8[2] = (c)->q[27].u8[2] & (~(c)->q[18].u8[2]);
    _t.u8[3] = (c)->q[27].u8[3] & (~(c)->q[18].u8[3]);
    _t.u8[4] = (c)->q[27].u8[4] & (~(c)->q[18].u8[4]);
    _t.u8[5] = (c)->q[27].u8[5] & (~(c)->q[18].u8[5]);
    _t.u8[6] = (c)->q[27].u8[6] & (~(c)->q[18].u8[6]);
    _t.u8[7] = (c)->q[27].u8[7] & (~(c)->q[18].u8[7]);
    _t.u8[8] = (c)->q[27].u8[8] & (~(c)->q[18].u8[8]);
    _t.u8[9] = (c)->q[27].u8[9] & (~(c)->q[18].u8[9]);
    _t.u8[10] = (c)->q[27].u8[10] & (~(c)->q[18].u8[10]);
    _t.u8[11] = (c)->q[27].u8[11] & (~(c)->q[18].u8[11]);
    _t.u8[12] = (c)->q[27].u8[12] & (~(c)->q[18].u8[12]);
    _t.u8[13] = (c)->q[27].u8[13] & (~(c)->q[18].u8[13]);
    _t.u8[14] = (c)->q[27].u8[14] & (~(c)->q[18].u8[14]);
    _t.u8[15] = (c)->q[27].u8[15] & (~(c)->q[18].u8[15]);
    (c)->q[18] = _t; }
  /* c38b8: ldur q27, [x29, #-0xd0] */
  arc_q_w(c, 27, arc_ld64((ARC_X_R(c, 29) + INT64_C(-208))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-208)) + 8));
  /* c38bc: bic v26.16b, v28.16b, v26.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[28].u8[0] & (~(c)->q[26].u8[0]);
    _t.u8[1] = (c)->q[28].u8[1] & (~(c)->q[26].u8[1]);
    _t.u8[2] = (c)->q[28].u8[2] & (~(c)->q[26].u8[2]);
    _t.u8[3] = (c)->q[28].u8[3] & (~(c)->q[26].u8[3]);
    _t.u8[4] = (c)->q[28].u8[4] & (~(c)->q[26].u8[4]);
    _t.u8[5] = (c)->q[28].u8[5] & (~(c)->q[26].u8[5]);
    _t.u8[6] = (c)->q[28].u8[6] & (~(c)->q[26].u8[6]);
    _t.u8[7] = (c)->q[28].u8[7] & (~(c)->q[26].u8[7]);
    _t.u8[8] = (c)->q[28].u8[8] & (~(c)->q[26].u8[8]);
    _t.u8[9] = (c)->q[28].u8[9] & (~(c)->q[26].u8[9]);
    _t.u8[10] = (c)->q[28].u8[10] & (~(c)->q[26].u8[10]);
    _t.u8[11] = (c)->q[28].u8[11] & (~(c)->q[26].u8[11]);
    _t.u8[12] = (c)->q[28].u8[12] & (~(c)->q[26].u8[12]);
    _t.u8[13] = (c)->q[28].u8[13] & (~(c)->q[26].u8[13]);
    _t.u8[14] = (c)->q[28].u8[14] & (~(c)->q[26].u8[14]);
    _t.u8[15] = (c)->q[28].u8[15] & (~(c)->q[26].u8[15]);
    (c)->q[26] = _t; }
  /* c38c0: bic v23.16b, v27.16b, v23.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[27].u8[0] & (~(c)->q[23].u8[0]);
    _t.u8[1] = (c)->q[27].u8[1] & (~(c)->q[23].u8[1]);
    _t.u8[2] = (c)->q[27].u8[2] & (~(c)->q[23].u8[2]);
    _t.u8[3] = (c)->q[27].u8[3] & (~(c)->q[23].u8[3]);
    _t.u8[4] = (c)->q[27].u8[4] & (~(c)->q[23].u8[4]);
    _t.u8[5] = (c)->q[27].u8[5] & (~(c)->q[23].u8[5]);
    _t.u8[6] = (c)->q[27].u8[6] & (~(c)->q[23].u8[6]);
    _t.u8[7] = (c)->q[27].u8[7] & (~(c)->q[23].u8[7]);
    _t.u8[8] = (c)->q[27].u8[8] & (~(c)->q[23].u8[8]);
    _t.u8[9] = (c)->q[27].u8[9] & (~(c)->q[23].u8[9]);
    _t.u8[10] = (c)->q[27].u8[10] & (~(c)->q[23].u8[10]);
    _t.u8[11] = (c)->q[27].u8[11] & (~(c)->q[23].u8[11]);
    _t.u8[12] = (c)->q[27].u8[12] & (~(c)->q[23].u8[12]);
    _t.u8[13] = (c)->q[27].u8[13] & (~(c)->q[23].u8[13]);
    _t.u8[14] = (c)->q[27].u8[14] & (~(c)->q[23].u8[14]);
    _t.u8[15] = (c)->q[27].u8[15] & (~(c)->q[23].u8[15]);
    (c)->q[23] = _t; }
  /* c38c4: sshll v27.8h, v25.8b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[25].i8[0]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[25].i8[1]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[25].i8[2]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[25].i8[3]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[25].i8[4]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[25].i8[5]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[25].i8[6]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[25].i8[7]) << 0);
    (c)->q[27] = _t; }
  /* c38c8: orr v5.16b, v18.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] | (c)->q[5].u8[15];
    (c)->q[5] = _t; }
  /* c38cc: sshll2 v18.4s, v19.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[19].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[19].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[19].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[19].i16[7]) << 0);
    (c)->q[18] = _t; }
  /* c38d0: orr v16.16b, v26.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] | (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[26].u8[1] | (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[26].u8[2] | (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[26].u8[3] | (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[26].u8[4] | (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[26].u8[5] | (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[26].u8[6] | (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[26].u8[7] | (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[26].u8[8] | (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[26].u8[9] | (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[26].u8[10] | (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[26].u8[11] | (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[26].u8[12] | (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[26].u8[13] | (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[26].u8[14] | (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[26].u8[15] | (c)->q[16].u8[15];
    (c)->q[16] = _t; }
  /* c38d4: sshll v19.4s, v19.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[19].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[19].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[19].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[19].i16[3]) << 0);
    (c)->q[19] = _t; }
  /* c38d8: orr v4.16b, v23.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[23].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[23].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[23].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[23].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[23].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[23].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[23].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[23].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[23].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[23].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[23].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[23].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[23].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[23].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[23].u8[15] | (c)->q[4].u8[15];
    (c)->q[4] = _t; }
  /* c38dc: sshll v23.8h, v24.8b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[24].i8[0]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[24].i8[1]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[24].i8[2]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[24].i8[3]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[24].i8[4]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[24].i8[5]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[24].i8[6]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[24].i8[7]) << 0);
    (c)->q[23] = _t; }
  /* c38e0: sshll2 v24.4s, v20.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[20].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[20].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[20].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[20].i16[7]) << 0);
    (c)->q[24] = _t; }
  /* c38e4: sshll v20.4s, v20.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[20].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[20].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[20].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[20].i16[3]) << 0);
    (c)->q[20] = _t; }
  /* c38e8: sshll v25.4s, v27.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[27].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[27].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[27].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[27].i16[3]) << 0);
    (c)->q[25] = _t; }
  /* c38ec: sshll2 v21.4s, v27.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[27].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[27].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[27].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[27].i16[7]) << 0);
    (c)->q[21] = _t; }
  /* c38f0: sshll v30.2d, v18.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[18].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[18].i32[1]) << 0);
    (c)->q[30] = _t; }
  /* c38f4: sshll2 v18.2d, v18.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[18].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[18].i32[3]) << 0);
    (c)->q[18] = _t; }
  /* c38f8: sshll2 v27.2d, v24.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[24].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[24].i32[3]) << 0);
    (c)->q[27] = _t; }
  /* c38fc: sshll v24.2d, v24.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[24].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[24].i32[1]) << 0);
    (c)->q[24] = _t; }
  /* c3900: sshll v26.4s, v23.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[23].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[23].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[23].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[23].i16[3]) << 0);
    (c)->q[26] = _t; }
  /* c3904: sshll2 v29.2d, v20.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[20].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[20].i32[3]) << 0);
    (c)->q[29] = _t; }
  /* c3908: sshll v20.2d, v20.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[20].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[20].i32[1]) << 0);
    (c)->q[20] = _t; }
  /* c390c: sshll2 v28.2d, v25.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[25].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[25].i32[3]) << 0);
    (c)->q[28] = _t; }
  /* c3910: sshll v25.2d, v25.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[25].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[25].i32[1]) << 0);
    (c)->q[25] = _t; }
  /* c3914: sshll2 v22.2d, v21.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[21].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[21].i32[3]) << 0);
    (c)->q[22] = _t; }
  /* c3918: sshll v21.2d, v21.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[21].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[21].i32[1]) << 0);
    (c)->q[21] = _t; }
  /* c391c: sshll v31.2d, v26.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[26].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[26].i32[1]) << 0);
    (c)->q[31] = _t; }
  /* c3920: bic v30.16b, v8.16b, v30.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[8].u8[0] & (~(c)->q[30].u8[0]);
    _t.u8[1] = (c)->q[8].u8[1] & (~(c)->q[30].u8[1]);
    _t.u8[2] = (c)->q[8].u8[2] & (~(c)->q[30].u8[2]);
    _t.u8[3] = (c)->q[8].u8[3] & (~(c)->q[30].u8[3]);
    _t.u8[4] = (c)->q[8].u8[4] & (~(c)->q[30].u8[4]);
    _t.u8[5] = (c)->q[8].u8[5] & (~(c)->q[30].u8[5]);
    _t.u8[6] = (c)->q[8].u8[6] & (~(c)->q[30].u8[6]);
    _t.u8[7] = (c)->q[8].u8[7] & (~(c)->q[30].u8[7]);
    _t.u8[8] = (c)->q[8].u8[8] & (~(c)->q[30].u8[8]);
    _t.u8[9] = (c)->q[8].u8[9] & (~(c)->q[30].u8[9]);
    _t.u8[10] = (c)->q[8].u8[10] & (~(c)->q[30].u8[10]);
    _t.u8[11] = (c)->q[8].u8[11] & (~(c)->q[30].u8[11]);
    _t.u8[12] = (c)->q[8].u8[12] & (~(c)->q[30].u8[12]);
    _t.u8[13] = (c)->q[8].u8[13] & (~(c)->q[30].u8[13]);
    _t.u8[14] = (c)->q[8].u8[14] & (~(c)->q[30].u8[14]);
    _t.u8[15] = (c)->q[8].u8[15] & (~(c)->q[30].u8[15]);
    (c)->q[30] = _t; }
  /* c3924: sshll v8.2d, v19.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[19].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[19].i32[1]) << 0);
    (c)->q[8] = _t; }
  /* c3928: bic v20.16b, v10.16b, v20.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[20].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[20].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[20].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[20].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[20].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[20].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[20].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[20].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[20].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[20].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[20].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[20].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[20].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[20].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[20].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[20].u8[15]);
    (c)->q[20] = _t; }
  /* c392c: ldr q10, [sp, #0x110] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(272))), arc_ld64(((c)->sp + INT64_C(272)) + 8));
  /* c3930: sshll2 v23.4s, v23.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[23].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[23].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[23].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[23].i16[7]) << 0);
    (c)->q[23] = _t; }
  /* c3934: sshll2 v26.2d, v26.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[26].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[26].i32[3]) << 0);
    (c)->q[26] = _t; }
  /* c3938: sshll2 v19.2d, v19.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[19].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[19].i32[3]) << 0);
    (c)->q[19] = _t; }
  /* c393c: bic v25.16b, v10.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[25].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[25].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[25].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[25].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[25].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[25].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[25].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[25].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[25].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[25].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[25].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[25].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[25].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[25].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[25].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[25].u8[15]);
    (c)->q[25] = _t; }
  /* c3940: ldr q10, [sp, #0x100] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(256))), arc_ld64(((c)->sp + INT64_C(256)) + 8));
  /* c3944: bic v31.16b, v9.16b, v31.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[9].u8[0] & (~(c)->q[31].u8[0]);
    _t.u8[1] = (c)->q[9].u8[1] & (~(c)->q[31].u8[1]);
    _t.u8[2] = (c)->q[9].u8[2] & (~(c)->q[31].u8[2]);
    _t.u8[3] = (c)->q[9].u8[3] & (~(c)->q[31].u8[3]);
    _t.u8[4] = (c)->q[9].u8[4] & (~(c)->q[31].u8[4]);
    _t.u8[5] = (c)->q[9].u8[5] & (~(c)->q[31].u8[5]);
    _t.u8[6] = (c)->q[9].u8[6] & (~(c)->q[31].u8[6]);
    _t.u8[7] = (c)->q[9].u8[7] & (~(c)->q[31].u8[7]);
    _t.u8[8] = (c)->q[9].u8[8] & (~(c)->q[31].u8[8]);
    _t.u8[9] = (c)->q[9].u8[9] & (~(c)->q[31].u8[9]);
    _t.u8[10] = (c)->q[9].u8[10] & (~(c)->q[31].u8[10]);
    _t.u8[11] = (c)->q[9].u8[11] & (~(c)->q[31].u8[11]);
    _t.u8[12] = (c)->q[9].u8[12] & (~(c)->q[31].u8[12]);
    _t.u8[13] = (c)->q[9].u8[13] & (~(c)->q[31].u8[13]);
    _t.u8[14] = (c)->q[9].u8[14] & (~(c)->q[31].u8[14]);
    _t.u8[15] = (c)->q[9].u8[15] & (~(c)->q[31].u8[15]);
    (c)->q[31] = _t; }
  /* c3948: ldr q9, [x22, #0xc80] */
  arc_q_w(c, 9, arc_ld64((ARC_X_R(c, 22) + INT64_C(3200))), arc_ld64((ARC_X_R(c, 22) + INT64_C(3200)) + 8));
  /* c394c: bic v24.16b, v10.16b, v24.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[24].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[24].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[24].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[24].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[24].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[24].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[24].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[24].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[24].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[24].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[24].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[24].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[24].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[24].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[24].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[24].u8[15]);
    (c)->q[24] = _t; }
  /* c3950: ldr q10, [sp, #0xf0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(240))), arc_ld64(((c)->sp + INT64_C(240)) + 8));
  /* c3954: bic v8.16b, v9.16b, v8.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[9].u8[0] & (~(c)->q[8].u8[0]);
    _t.u8[1] = (c)->q[9].u8[1] & (~(c)->q[8].u8[1]);
    _t.u8[2] = (c)->q[9].u8[2] & (~(c)->q[8].u8[2]);
    _t.u8[3] = (c)->q[9].u8[3] & (~(c)->q[8].u8[3]);
    _t.u8[4] = (c)->q[9].u8[4] & (~(c)->q[8].u8[4]);
    _t.u8[5] = (c)->q[9].u8[5] & (~(c)->q[8].u8[5]);
    _t.u8[6] = (c)->q[9].u8[6] & (~(c)->q[8].u8[6]);
    _t.u8[7] = (c)->q[9].u8[7] & (~(c)->q[8].u8[7]);
    _t.u8[8] = (c)->q[9].u8[8] & (~(c)->q[8].u8[8]);
    _t.u8[9] = (c)->q[9].u8[9] & (~(c)->q[8].u8[9]);
    _t.u8[10] = (c)->q[9].u8[10] & (~(c)->q[8].u8[10]);
    _t.u8[11] = (c)->q[9].u8[11] & (~(c)->q[8].u8[11]);
    _t.u8[12] = (c)->q[9].u8[12] & (~(c)->q[8].u8[12]);
    _t.u8[13] = (c)->q[9].u8[13] & (~(c)->q[8].u8[13]);
    _t.u8[14] = (c)->q[9].u8[14] & (~(c)->q[8].u8[14]);
    _t.u8[15] = (c)->q[9].u8[15] & (~(c)->q[8].u8[15]);
    (c)->q[8] = _t; }
  /* c3958: sshll2 v9.2d, v23.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[3]) << 0);
    (c)->q[9] = _t; }
  /* c395c: sshll v23.2d, v23.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[1]) << 0);
    (c)->q[23] = _t; }
  /* c3960: bic v21.16b, v10.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[21].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[21].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[21].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[21].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[21].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[21].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[21].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[21].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[21].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[21].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[21].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[21].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[21].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[21].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[21].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[21].u8[15]);
    (c)->q[21] = _t; }
  /* c3964: ldr q10, [sp, #0xe0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(224))), arc_ld64(((c)->sp + INT64_C(224)) + 8));
  /* c3968: orr v24.16b, v30.16b, v24.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[30].u8[0] | (c)->q[24].u8[0];
    _t.u8[1] = (c)->q[30].u8[1] | (c)->q[24].u8[1];
    _t.u8[2] = (c)->q[30].u8[2] | (c)->q[24].u8[2];
    _t.u8[3] = (c)->q[30].u8[3] | (c)->q[24].u8[3];
    _t.u8[4] = (c)->q[30].u8[4] | (c)->q[24].u8[4];
    _t.u8[5] = (c)->q[30].u8[5] | (c)->q[24].u8[5];
    _t.u8[6] = (c)->q[30].u8[6] | (c)->q[24].u8[6];
    _t.u8[7] = (c)->q[30].u8[7] | (c)->q[24].u8[7];
    _t.u8[8] = (c)->q[30].u8[8] | (c)->q[24].u8[8];
    _t.u8[9] = (c)->q[30].u8[9] | (c)->q[24].u8[9];
    _t.u8[10] = (c)->q[30].u8[10] | (c)->q[24].u8[10];
    _t.u8[11] = (c)->q[30].u8[11] | (c)->q[24].u8[11];
    _t.u8[12] = (c)->q[30].u8[12] | (c)->q[24].u8[12];
    _t.u8[13] = (c)->q[30].u8[13] | (c)->q[24].u8[13];
    _t.u8[14] = (c)->q[30].u8[14] | (c)->q[24].u8[14];
    _t.u8[15] = (c)->q[30].u8[15] | (c)->q[24].u8[15];
    (c)->q[24] = _t; }
  /* c396c: bic v29.16b, v10.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[29].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[29].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[29].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[29].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[29].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[29].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[29].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[29].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[29].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[29].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[29].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[29].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[29].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[29].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[29].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[29].u8[15]);
    (c)->q[29] = _t; }
  /* c3970: ldr q10, [sp, #0xd0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(208))), arc_ld64(((c)->sp + INT64_C(208)) + 8));
  /* c3974: orr v17.16b, v8.16b, v20.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[8].u8[0] | (c)->q[20].u8[0];
    _t.u8[1] = (c)->q[8].u8[1] | (c)->q[20].u8[1];
    _t.u8[2] = (c)->q[8].u8[2] | (c)->q[20].u8[2];
    _t.u8[3] = (c)->q[8].u8[3] | (c)->q[20].u8[3];
    _t.u8[4] = (c)->q[8].u8[4] | (c)->q[20].u8[4];
    _t.u8[5] = (c)->q[8].u8[5] | (c)->q[20].u8[5];
    _t.u8[6] = (c)->q[8].u8[6] | (c)->q[20].u8[6];
    _t.u8[7] = (c)->q[8].u8[7] | (c)->q[20].u8[7];
    _t.u8[8] = (c)->q[8].u8[8] | (c)->q[20].u8[8];
    _t.u8[9] = (c)->q[8].u8[9] | (c)->q[20].u8[9];
    _t.u8[10] = (c)->q[8].u8[10] | (c)->q[20].u8[10];
    _t.u8[11] = (c)->q[8].u8[11] | (c)->q[20].u8[11];
    _t.u8[12] = (c)->q[8].u8[12] | (c)->q[20].u8[12];
    _t.u8[13] = (c)->q[8].u8[13] | (c)->q[20].u8[13];
    _t.u8[14] = (c)->q[8].u8[14] | (c)->q[20].u8[14];
    _t.u8[15] = (c)->q[8].u8[15] | (c)->q[20].u8[15];
    (c)->q[17] = _t; }
  /* c3978: orr v20.16b, v31.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[31].u8[0] | (c)->q[25].u8[0];
    _t.u8[1] = (c)->q[31].u8[1] | (c)->q[25].u8[1];
    _t.u8[2] = (c)->q[31].u8[2] | (c)->q[25].u8[2];
    _t.u8[3] = (c)->q[31].u8[3] | (c)->q[25].u8[3];
    _t.u8[4] = (c)->q[31].u8[4] | (c)->q[25].u8[4];
    _t.u8[5] = (c)->q[31].u8[5] | (c)->q[25].u8[5];
    _t.u8[6] = (c)->q[31].u8[6] | (c)->q[25].u8[6];
    _t.u8[7] = (c)->q[31].u8[7] | (c)->q[25].u8[7];
    _t.u8[8] = (c)->q[31].u8[8] | (c)->q[25].u8[8];
    _t.u8[9] = (c)->q[31].u8[9] | (c)->q[25].u8[9];
    _t.u8[10] = (c)->q[31].u8[10] | (c)->q[25].u8[10];
    _t.u8[11] = (c)->q[31].u8[11] | (c)->q[25].u8[11];
    _t.u8[12] = (c)->q[31].u8[12] | (c)->q[25].u8[12];
    _t.u8[13] = (c)->q[31].u8[13] | (c)->q[25].u8[13];
    _t.u8[14] = (c)->q[31].u8[14] | (c)->q[25].u8[14];
    _t.u8[15] = (c)->q[31].u8[15] | (c)->q[25].u8[15];
    (c)->q[20] = _t; }
  /* c397c: bic v28.16b, v10.16b, v28.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[28].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[28].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[28].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[28].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[28].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[28].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[28].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[28].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[28].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[28].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[28].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[28].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[28].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[28].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[28].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[28].u8[15]);
    (c)->q[28] = _t; }
  /* c3980: ldr q10, [sp, #0xc0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(192))), arc_ld64(((c)->sp + INT64_C(192)) + 8));
  /* c3984: orr v7.16b, v24.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] | (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[24].u8[1] | (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[24].u8[2] | (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[24].u8[3] | (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[24].u8[4] | (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[24].u8[5] | (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[24].u8[6] | (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[24].u8[7] | (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[24].u8[8] | (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[24].u8[9] | (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[24].u8[10] | (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[24].u8[11] | (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[24].u8[12] | (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[24].u8[13] | (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[24].u8[14] | (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[24].u8[15] | (c)->q[7].u8[15];
    (c)->q[7] = _t; }
  /* c3988: orr v3.16b, v17.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[17].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[17].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[17].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[17].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[17].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[17].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[17].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[17].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[17].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[17].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[17].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[17].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[17].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[17].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[17].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* c398c: bic v27.16b, v10.16b, v27.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[27].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[27].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[27].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[27].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[27].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[27].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[27].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[27].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[27].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[27].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[27].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[27].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[27].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[27].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[27].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[27].u8[15]);
    (c)->q[27] = _t; }
  /* c3990: ldr q10, [sp, #0xb0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(176))), arc_ld64(((c)->sp + INT64_C(176)) + 8));
  /* c3994: orr v6.16b, v20.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] | (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] | (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] | (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] | (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] | (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] | (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] | (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] | (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] | (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] | (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] | (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] | (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] | (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] | (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] | (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] | (c)->q[6].u8[15];
    (c)->q[6] = _t; }
  /* c3998: bic v22.16b, v10.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[22].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[22].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[22].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[22].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[22].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[22].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[22].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[22].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[22].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[22].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[22].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[22].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[22].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[22].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[22].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[22].u8[15]);
    (c)->q[22] = _t; }
  /* c399c: ldr q10, [sp, #0xa0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(160))), arc_ld64(((c)->sp + INT64_C(160)) + 8));
  /* c39a0: orr v3.16b, v6.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[6].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[6].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[6].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[6].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[6].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[6].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[6].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[6].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[6].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[6].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[6].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[6].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[6].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[6].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[6].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* c39a4: bic v9.16b, v10.16b, v9.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[9].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[9].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[9].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[9].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[9].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[9].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[9].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[9].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[9].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[9].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[9].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[9].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[9].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[9].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[9].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[9].u8[15]);
    (c)->q[9] = _t; }
  /* c39a8: ldr q10, [sp, #0x90] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(144))), arc_ld64(((c)->sp + INT64_C(144)) + 8));
  /* c39ac: bic v18.16b, v10.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[18].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[18].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[18].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[18].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[18].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[18].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[18].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[18].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[18].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[18].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[18].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[18].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[18].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[18].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[18].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[18].u8[15]);
    (c)->q[18] = _t; }
  /* c39b0: ldr q10, [sp, #0x80] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(128))), arc_ld64(((c)->sp + INT64_C(128)) + 8));
  /* c39b4: orr v22.16b, v9.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[9].u8[0] | (c)->q[22].u8[0];
    _t.u8[1] = (c)->q[9].u8[1] | (c)->q[22].u8[1];
    _t.u8[2] = (c)->q[9].u8[2] | (c)->q[22].u8[2];
    _t.u8[3] = (c)->q[9].u8[3] | (c)->q[22].u8[3];
    _t.u8[4] = (c)->q[9].u8[4] | (c)->q[22].u8[4];
    _t.u8[5] = (c)->q[9].u8[5] | (c)->q[22].u8[5];
    _t.u8[6] = (c)->q[9].u8[6] | (c)->q[22].u8[6];
    _t.u8[7] = (c)->q[9].u8[7] | (c)->q[22].u8[7];
    _t.u8[8] = (c)->q[9].u8[8] | (c)->q[22].u8[8];
    _t.u8[9] = (c)->q[9].u8[9] | (c)->q[22].u8[9];
    _t.u8[10] = (c)->q[9].u8[10] | (c)->q[22].u8[10];
    _t.u8[11] = (c)->q[9].u8[11] | (c)->q[22].u8[11];
    _t.u8[12] = (c)->q[9].u8[12] | (c)->q[22].u8[12];
    _t.u8[13] = (c)->q[9].u8[13] | (c)->q[22].u8[13];
    _t.u8[14] = (c)->q[9].u8[14] | (c)->q[22].u8[14];
    _t.u8[15] = (c)->q[9].u8[15] | (c)->q[22].u8[15];
    (c)->q[22] = _t; }
  /* c39b8: bic v26.16b, v10.16b, v26.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[26].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[26].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[26].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[26].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[26].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[26].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[26].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[26].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[26].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[26].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[26].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[26].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[26].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[26].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[26].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[26].u8[15]);
    (c)->q[26] = _t; }
  /* c39bc: ldr q10, [sp, #0x70] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(112))), arc_ld64(((c)->sp + INT64_C(112)) + 8));
  /* c39c0: orr v18.16b, v18.16b, v27.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] | (c)->q[27].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] | (c)->q[27].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] | (c)->q[27].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] | (c)->q[27].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] | (c)->q[27].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] | (c)->q[27].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] | (c)->q[27].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] | (c)->q[27].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] | (c)->q[27].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] | (c)->q[27].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] | (c)->q[27].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] | (c)->q[27].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] | (c)->q[27].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] | (c)->q[27].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] | (c)->q[27].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] | (c)->q[27].u8[15];
    (c)->q[18] = _t; }
  /* c39c4: bic v19.16b, v10.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[19].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[19].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[19].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[19].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[19].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[19].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[19].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[19].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[19].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[19].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[19].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[19].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[19].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[19].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[19].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[19].u8[15]);
    (c)->q[19] = _t; }
  /* c39c8: ldr q10, [sp, #0x60] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(96))), arc_ld64(((c)->sp + INT64_C(96)) + 8));
  /* c39cc: orr v1.16b, v22.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[22].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[22].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[22].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[22].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[22].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[22].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[22].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[22].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[22].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[22].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[22].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[22].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[22].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[22].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[22].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* c39d0: bic v23.16b, v10.16b, v23.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[23].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[23].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[23].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[23].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[23].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[23].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[23].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[23].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[23].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[23].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[23].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[23].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[23].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[23].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[23].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[23].u8[15]);
    (c)->q[23] = _t; }
  /* c39d4: orr v2.16b, v18.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* c39d8: orr v19.16b, v19.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] | (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] | (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] | (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] | (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] | (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] | (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] | (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] | (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] | (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] | (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] | (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] | (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] | (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] | (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] | (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] | (c)->q[29].u8[15];
    (c)->q[19] = _t; }
  /* c39dc: orr v21.16b, v23.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] | (c)->q[21].u8[0];
    _t.u8[1] = (c)->q[23].u8[1] | (c)->q[21].u8[1];
    _t.u8[2] = (c)->q[23].u8[2] | (c)->q[21].u8[2];
    _t.u8[3] = (c)->q[23].u8[3] | (c)->q[21].u8[3];
    _t.u8[4] = (c)->q[23].u8[4] | (c)->q[21].u8[4];
    _t.u8[5] = (c)->q[23].u8[5] | (c)->q[21].u8[5];
    _t.u8[6] = (c)->q[23].u8[6] | (c)->q[21].u8[6];
    _t.u8[7] = (c)->q[23].u8[7] | (c)->q[21].u8[7];
    _t.u8[8] = (c)->q[23].u8[8] | (c)->q[21].u8[8];
    _t.u8[9] = (c)->q[23].u8[9] | (c)->q[21].u8[9];
    _t.u8[10] = (c)->q[23].u8[10] | (c)->q[21].u8[10];
    _t.u8[11] = (c)->q[23].u8[11] | (c)->q[21].u8[11];
    _t.u8[12] = (c)->q[23].u8[12] | (c)->q[21].u8[12];
    _t.u8[13] = (c)->q[23].u8[13] | (c)->q[21].u8[13];
    _t.u8[14] = (c)->q[23].u8[14] | (c)->q[21].u8[14];
    _t.u8[15] = (c)->q[23].u8[15] | (c)->q[21].u8[15];
    (c)->q[21] = _t; }
  /* c39e0: orr v23.16b, v26.16b, v28.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] | (c)->q[28].u8[0];
    _t.u8[1] = (c)->q[26].u8[1] | (c)->q[28].u8[1];
    _t.u8[2] = (c)->q[26].u8[2] | (c)->q[28].u8[2];
    _t.u8[3] = (c)->q[26].u8[3] | (c)->q[28].u8[3];
    _t.u8[4] = (c)->q[26].u8[4] | (c)->q[28].u8[4];
    _t.u8[5] = (c)->q[26].u8[5] | (c)->q[28].u8[5];
    _t.u8[6] = (c)->q[26].u8[6] | (c)->q[28].u8[6];
    _t.u8[7] = (c)->q[26].u8[7] | (c)->q[28].u8[7];
    _t.u8[8] = (c)->q[26].u8[8] | (c)->q[28].u8[8];
    _t.u8[9] = (c)->q[26].u8[9] | (c)->q[28].u8[9];
    _t.u8[10] = (c)->q[26].u8[10] | (c)->q[28].u8[10];
    _t.u8[11] = (c)->q[26].u8[11] | (c)->q[28].u8[11];
    _t.u8[12] = (c)->q[26].u8[12] | (c)->q[28].u8[12];
    _t.u8[13] = (c)->q[26].u8[13] | (c)->q[28].u8[13];
    _t.u8[14] = (c)->q[26].u8[14] | (c)->q[28].u8[14];
    _t.u8[15] = (c)->q[26].u8[15] | (c)->q[28].u8[15];
    (c)->q[23] = _t; }
  /* c39e4: orr v1.16b, v1.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[1].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[1].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[1].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[1].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[1].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[1].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[1].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[1].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[1].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[1].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[1].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[1].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[1].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[1].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[1].u8[15] | (c)->q[2].u8[15];
    (c)->q[1] = _t; }
  /* c39e8: orr v16.16b, v19.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] | (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] | (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] | (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] | (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] | (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] | (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] | (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] | (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] | (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] | (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] | (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] | (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] | (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] | (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] | (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] | (c)->q[16].u8[15];
    (c)->q[16] = _t; }
  /* c39ec: orr v4.16b, v21.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] | (c)->q[4].u8[15];
    (c)->q[4] = _t; }
  /* c39f0: orr v5.16b, v23.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[23].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[23].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[23].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[23].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[23].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[23].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[23].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[23].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[23].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[23].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[23].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[23].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[23].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[23].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[23].u8[15] | (c)->q[5].u8[15];
    (c)->q[5] = _t; }
  /* c39f4: orr v2.16b, v5.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] | (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] | (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] | (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] | (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] | (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] | (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] | (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] | (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] | (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] | (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] | (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] | (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] | (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] | (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] | (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] | (c)->q[16].u8[15];
    (c)->q[2] = _t; }
  /* c39f8: orr v4.16b, v4.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] | (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] | (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] | (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] | (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] | (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] | (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] | (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] | (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] | (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] | (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] | (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] | (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] | (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] | (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] | (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] | (c)->q[7].u8[15];
    (c)->q[4] = _t; }
  /* c39fc: orr v1.16b, v2.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[2].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[2].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[2].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[2].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[2].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[2].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[2].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[2].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* c3a00: orr v2.16b, v3.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[3].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[3].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[3].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[3].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[3].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[3].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[3].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[3].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[3].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[3].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[3].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[3].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[3].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[3].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[3].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[3].u8[15] | (c)->q[4].u8[15];
    (c)->q[2] = _t; }
  /* c3a04: orr v1.16b, v2.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[2].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[2].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[2].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[2].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[2].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[2].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[2].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[2].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* c3a08: ext v2.16b, v1.16b, v1.16b, #8 */
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
    (c)->q[2] = _t; }
  /* c3a0c: orr v1.8b, v1.8b, v2.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[1].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[1].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[1].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[1].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[1].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[1].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[1].u8[7] | (c)->q[2].u8[7];
    (c)->q[1] = _t; }
  /* c3a10: fmov x14, d1 */
  ARC_X_W(c, 14, ARC_DU_R(c, 1));
  /* c3a14: cbnz x13, #0xc37ac */
  if ((ARC_X_R(c, 13)) != 0) goto L_c37ac;
L_c3a18:;
  /* c3a18: ldur q1, [x12, #-0xf] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 12) + INT64_C(-15))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-15)) + 8));
  /* c3a1c: ldur q2, [x12, #-0x1f] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 12) + INT64_C(-31))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-31)) + 8));
  /* c3a20: ldur q3, [x12, #-0x2f] */
  arc_q_w(c, 3, arc_ld64((ARC_X_R(c, 12) + INT64_C(-47))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-47)) + 8));
  /* c3a24: ldur q4, [x12, #-0x3f] */
  arc_q_w(c, 4, arc_ld64((ARC_X_R(c, 12) + INT64_C(-63))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-63)) + 8));
  /* c3a28: ldr q10, [sp, #0x120] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(288))), arc_ld64(((c)->sp + INT64_C(288)) + 8));
  /* c3a2c: ldr q8, [x6, #0xc40] */
  arc_q_w(c, 8, arc_ld64((ARC_X_R(c, 6) + INT64_C(3136))), arc_ld64((ARC_X_R(c, 6) + INT64_C(3136)) + 8));
  /* c3a30: rev64 v1.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[7];
    _t.u8[1] = (c)->q[1].u8[6];
    _t.u8[2] = (c)->q[1].u8[5];
    _t.u8[3] = (c)->q[1].u8[4];
    _t.u8[4] = (c)->q[1].u8[3];
    _t.u8[5] = (c)->q[1].u8[2];
    _t.u8[6] = (c)->q[1].u8[1];
    _t.u8[7] = (c)->q[1].u8[0];
    _t.u8[8] = (c)->q[1].u8[15];
    _t.u8[9] = (c)->q[1].u8[14];
    _t.u8[10] = (c)->q[1].u8[13];
    _t.u8[11] = (c)->q[1].u8[12];
    _t.u8[12] = (c)->q[1].u8[11];
    _t.u8[13] = (c)->q[1].u8[10];
    _t.u8[14] = (c)->q[1].u8[9];
    _t.u8[15] = (c)->q[1].u8[8];
    (c)->q[1] = _t; }
  /* c3a34: rev64 v2.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[7];
    _t.u8[1] = (c)->q[2].u8[6];
    _t.u8[2] = (c)->q[2].u8[5];
    _t.u8[3] = (c)->q[2].u8[4];
    _t.u8[4] = (c)->q[2].u8[3];
    _t.u8[5] = (c)->q[2].u8[2];
    _t.u8[6] = (c)->q[2].u8[1];
    _t.u8[7] = (c)->q[2].u8[0];
    _t.u8[8] = (c)->q[2].u8[15];
    _t.u8[9] = (c)->q[2].u8[14];
    _t.u8[10] = (c)->q[2].u8[13];
    _t.u8[11] = (c)->q[2].u8[12];
    _t.u8[12] = (c)->q[2].u8[11];
    _t.u8[13] = (c)->q[2].u8[10];
    _t.u8[14] = (c)->q[2].u8[9];
    _t.u8[15] = (c)->q[2].u8[8];
    (c)->q[2] = _t; }
  /* c3a38: rev64 v3.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[3].u8[7];
    _t.u8[1] = (c)->q[3].u8[6];
    _t.u8[2] = (c)->q[3].u8[5];
    _t.u8[3] = (c)->q[3].u8[4];
    _t.u8[4] = (c)->q[3].u8[3];
    _t.u8[5] = (c)->q[3].u8[2];
    _t.u8[6] = (c)->q[3].u8[1];
    _t.u8[7] = (c)->q[3].u8[0];
    _t.u8[8] = (c)->q[3].u8[15];
    _t.u8[9] = (c)->q[3].u8[14];
    _t.u8[10] = (c)->q[3].u8[13];
    _t.u8[11] = (c)->q[3].u8[12];
    _t.u8[12] = (c)->q[3].u8[11];
    _t.u8[13] = (c)->q[3].u8[10];
    _t.u8[14] = (c)->q[3].u8[9];
    _t.u8[15] = (c)->q[3].u8[8];
    (c)->q[3] = _t; }
  /* c3a3c: rev64 v4.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[7];
    _t.u8[1] = (c)->q[4].u8[6];
    _t.u8[2] = (c)->q[4].u8[5];
    _t.u8[3] = (c)->q[4].u8[4];
    _t.u8[4] = (c)->q[4].u8[3];
    _t.u8[5] = (c)->q[4].u8[2];
    _t.u8[6] = (c)->q[4].u8[1];
    _t.u8[7] = (c)->q[4].u8[0];
    _t.u8[8] = (c)->q[4].u8[15];
    _t.u8[9] = (c)->q[4].u8[14];
    _t.u8[10] = (c)->q[4].u8[13];
    _t.u8[11] = (c)->q[4].u8[12];
    _t.u8[12] = (c)->q[4].u8[11];
    _t.u8[13] = (c)->q[4].u8[10];
    _t.u8[14] = (c)->q[4].u8[9];
    _t.u8[15] = (c)->q[4].u8[8];
    (c)->q[4] = _t; }
  /* c3a40: ldr q9, [x27, #0xbb0] */
  arc_q_w(c, 9, arc_ld64((ARC_X_R(c, 27) + INT64_C(2992))), arc_ld64((ARC_X_R(c, 27) + INT64_C(2992)) + 8));
  /* c3a44: ext v1.16b, v1.16b, v1.16b, #8 */
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
  /* c3a48: ext v2.16b, v2.16b, v2.16b, #8 */
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
  /* c3a4c: ext v3.16b, v3.16b, v3.16b, #8 */
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
  /* c3a50: ext v4.16b, v4.16b, v4.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[8];
    _t.u8[1] = (c)->q[4].u8[9];
    _t.u8[2] = (c)->q[4].u8[10];
    _t.u8[3] = (c)->q[4].u8[11];
    _t.u8[4] = (c)->q[4].u8[12];
    _t.u8[5] = (c)->q[4].u8[13];
    _t.u8[6] = (c)->q[4].u8[14];
    _t.u8[7] = (c)->q[4].u8[15];
    _t.u8[8] = (c)->q[4].u8[0];
    _t.u8[9] = (c)->q[4].u8[1];
    _t.u8[10] = (c)->q[4].u8[2];
    _t.u8[11] = (c)->q[4].u8[3];
    _t.u8[12] = (c)->q[4].u8[4];
    _t.u8[13] = (c)->q[4].u8[5];
    _t.u8[14] = (c)->q[4].u8[6];
    _t.u8[15] = (c)->q[4].u8[7];
    (c)->q[4] = _t; }
  /* c3a54: cmhi v1.16b, v0.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[0].u8[0] > (c)->q[1].u8[0]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[1] = ((c)->q[0].u8[1] > (c)->q[1].u8[1]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[2] = ((c)->q[0].u8[2] > (c)->q[1].u8[2]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[3] = ((c)->q[0].u8[3] > (c)->q[1].u8[3]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[4] = ((c)->q[0].u8[4] > (c)->q[1].u8[4]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[5] = ((c)->q[0].u8[5] > (c)->q[1].u8[5]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[6] = ((c)->q[0].u8[6] > (c)->q[1].u8[6]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[7] = ((c)->q[0].u8[7] > (c)->q[1].u8[7]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[8] = ((c)->q[0].u8[8] > (c)->q[1].u8[8]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[9] = ((c)->q[0].u8[9] > (c)->q[1].u8[9]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[10] = ((c)->q[0].u8[10] > (c)->q[1].u8[10]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[11] = ((c)->q[0].u8[11] > (c)->q[1].u8[11]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[12] = ((c)->q[0].u8[12] > (c)->q[1].u8[12]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[13] = ((c)->q[0].u8[13] > (c)->q[1].u8[13]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[14] = ((c)->q[0].u8[14] > (c)->q[1].u8[14]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[15] = ((c)->q[0].u8[15] > (c)->q[1].u8[15]) ? (uint8_t)~(uint8_t)0 : 0;
    (c)->q[1] = _t; }
  /* c3a58: cmhi v2.16b, v0.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[0].u8[0] > (c)->q[2].u8[0]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[1] = ((c)->q[0].u8[1] > (c)->q[2].u8[1]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[2] = ((c)->q[0].u8[2] > (c)->q[2].u8[2]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[3] = ((c)->q[0].u8[3] > (c)->q[2].u8[3]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[4] = ((c)->q[0].u8[4] > (c)->q[2].u8[4]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[5] = ((c)->q[0].u8[5] > (c)->q[2].u8[5]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[6] = ((c)->q[0].u8[6] > (c)->q[2].u8[6]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[7] = ((c)->q[0].u8[7] > (c)->q[2].u8[7]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[8] = ((c)->q[0].u8[8] > (c)->q[2].u8[8]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[9] = ((c)->q[0].u8[9] > (c)->q[2].u8[9]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[10] = ((c)->q[0].u8[10] > (c)->q[2].u8[10]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[11] = ((c)->q[0].u8[11] > (c)->q[2].u8[11]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[12] = ((c)->q[0].u8[12] > (c)->q[2].u8[12]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[13] = ((c)->q[0].u8[13] > (c)->q[2].u8[13]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[14] = ((c)->q[0].u8[14] > (c)->q[2].u8[14]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[15] = ((c)->q[0].u8[15] > (c)->q[2].u8[15]) ? (uint8_t)~(uint8_t)0 : 0;
    (c)->q[2] = _t; }
  /* c3a5c: cmhi v3.16b, v0.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[0].u8[0] > (c)->q[3].u8[0]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[1] = ((c)->q[0].u8[1] > (c)->q[3].u8[1]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[2] = ((c)->q[0].u8[2] > (c)->q[3].u8[2]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[3] = ((c)->q[0].u8[3] > (c)->q[3].u8[3]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[4] = ((c)->q[0].u8[4] > (c)->q[3].u8[4]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[5] = ((c)->q[0].u8[5] > (c)->q[3].u8[5]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[6] = ((c)->q[0].u8[6] > (c)->q[3].u8[6]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[7] = ((c)->q[0].u8[7] > (c)->q[3].u8[7]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[8] = ((c)->q[0].u8[8] > (c)->q[3].u8[8]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[9] = ((c)->q[0].u8[9] > (c)->q[3].u8[9]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[10] = ((c)->q[0].u8[10] > (c)->q[3].u8[10]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[11] = ((c)->q[0].u8[11] > (c)->q[3].u8[11]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[12] = ((c)->q[0].u8[12] > (c)->q[3].u8[12]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[13] = ((c)->q[0].u8[13] > (c)->q[3].u8[13]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[14] = ((c)->q[0].u8[14] > (c)->q[3].u8[14]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[15] = ((c)->q[0].u8[15] > (c)->q[3].u8[15]) ? (uint8_t)~(uint8_t)0 : 0;
    (c)->q[3] = _t; }
  /* c3a60: sshll2 v5.8h, v1.16b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[1].i8[8]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[1].i8[9]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[1].i8[10]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[1].i8[11]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[1].i8[12]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[1].i8[13]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[1].i8[14]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[1].i8[15]) << 0);
    (c)->q[5] = _t; }
  /* c3a64: sshll v1.8h, v1.8b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[1].i8[0]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[1].i8[1]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[1].i8[2]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[1].i8[3]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[1].i8[4]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[1].i8[5]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[1].i8[6]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[1].i8[7]) << 0);
    (c)->q[1] = _t; }
  /* c3a68: sshll2 v6.8h, v2.16b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[2].i8[8]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[2].i8[9]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[2].i8[10]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[2].i8[11]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[2].i8[12]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[2].i8[13]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[2].i8[14]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[2].i8[15]) << 0);
    (c)->q[6] = _t; }
  /* c3a6c: sshll v2.8h, v2.8b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[2].i8[0]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[2].i8[1]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[2].i8[2]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[2].i8[3]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[2].i8[4]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[2].i8[5]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[2].i8[6]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[2].i8[7]) << 0);
    (c)->q[2] = _t; }
  /* c3a70: sshll v16.4s, v1.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[1].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[1].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[1].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[1].i16[3]) << 0);
    (c)->q[16] = _t; }
  /* c3a74: sshll2 v1.4s, v1.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[1].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[1].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[1].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[1].i16[7]) << 0);
    (c)->q[1] = _t; }
  /* c3a78: sshll v17.4s, v6.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[6].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[6].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[6].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[6].i16[3]) << 0);
    (c)->q[17] = _t; }
  /* c3a7c: sshll2 v6.4s, v6.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[6].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[6].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[6].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[6].i16[7]) << 0);
    (c)->q[6] = _t; }
  /* c3a80: sshll v7.4s, v5.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[5].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[5].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[5].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[5].i16[3]) << 0);
    (c)->q[7] = _t; }
  /* c3a84: sshll v18.4s, v2.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[2].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[2].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[2].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[2].i16[3]) << 0);
    (c)->q[18] = _t; }
  /* c3a88: sshll2 v2.4s, v2.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[2].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[2].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[2].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[2].i16[7]) << 0);
    (c)->q[2] = _t; }
  /* c3a8c: sshll2 v5.4s, v5.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[5].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[5].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[5].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[5].i16[7]) << 0);
    (c)->q[5] = _t; }
  /* c3a90: ushll v22.2d, v1.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[1].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[1].u32[1]) << 0);
    (c)->q[22] = _t; }
  /* c3a94: ushll2 v1.2d, v1.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[1].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[1].u32[3]) << 0);
    (c)->q[1] = _t; }
  /* c3a98: ushll v20.2d, v16.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[16].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[16].u32[1]) << 0);
    (c)->q[20] = _t; }
  /* c3a9c: ushll v25.2d, v6.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[6].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[6].u32[1]) << 0);
    (c)->q[25] = _t; }
  /* c3aa0: ushll2 v27.2d, v6.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[6].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[6].u32[3]) << 0);
    (c)->q[27] = _t; }
  /* c3aa4: ldur q6, [x29, #-0x60] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 29) + INT64_C(-96))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-96)) + 8));
  /* c3aa8: ushll v19.2d, v7.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[7].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[7].u32[1]) << 0);
    (c)->q[19] = _t; }
  /* c3aac: ushll v26.2d, v2.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[2].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[2].u32[1]) << 0);
    (c)->q[26] = _t; }
  /* c3ab0: ushll2 v2.2d, v2.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[2].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[2].u32[3]) << 0);
    (c)->q[2] = _t; }
  /* c3ab4: and v1.16b, v1.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[0] & (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[1].u8[1] & (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[1].u8[2] & (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[1].u8[3] & (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[1].u8[4] & (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[1].u8[5] & (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[1].u8[6] & (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[1].u8[7] & (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[1].u8[8] & (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[1].u8[9] & (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[1].u8[10] & (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[1].u8[11] & (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[1].u8[12] & (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[1].u8[13] & (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[1].u8[14] & (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[1].u8[15] & (c)->q[6].u8[15];
    (c)->q[1] = _t; }
  /* c3ab8: ldur q6, [x29, #-0x70] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 29) + INT64_C(-112))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-112)) + 8));
  /* c3abc: ushll v21.2d, v5.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[1]) << 0);
    (c)->q[21] = _t; }
  /* c3ac0: ushll2 v5.2d, v5.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[3]) << 0);
    (c)->q[5] = _t; }
  /* c3ac4: ushll v23.2d, v17.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[17].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[17].u32[1]) << 0);
    (c)->q[23] = _t; }
  /* c3ac8: ushll v24.2d, v18.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[18].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[18].u32[1]) << 0);
    (c)->q[24] = _t; }
  /* c3acc: and v20.16b, v20.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] & (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] & (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] & (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] & (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] & (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] & (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] & (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] & (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] & (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] & (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] & (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] & (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] & (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] & (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] & (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] & (c)->q[6].u8[15];
    (c)->q[20] = _t; }
  /* c3ad0: ldur q6, [x29, #-0x80] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 29) + INT64_C(-128))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-128)) + 8));
  /* c3ad4: ushll2 v18.2d, v18.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[18].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[18].u32[3]) << 0);
    (c)->q[18] = _t; }
  /* c3ad8: ushll2 v17.2d, v17.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[17].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[17].u32[3]) << 0);
    (c)->q[17] = _t; }
  /* c3adc: ushll2 v7.2d, v7.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[7].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[7].u32[3]) << 0);
    (c)->q[7] = _t; }
  /* c3ae0: and v22.16b, v22.16b, v14.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0] & (c)->q[14].u8[0];
    _t.u8[1] = (c)->q[22].u8[1] & (c)->q[14].u8[1];
    _t.u8[2] = (c)->q[22].u8[2] & (c)->q[14].u8[2];
    _t.u8[3] = (c)->q[22].u8[3] & (c)->q[14].u8[3];
    _t.u8[4] = (c)->q[22].u8[4] & (c)->q[14].u8[4];
    _t.u8[5] = (c)->q[22].u8[5] & (c)->q[14].u8[5];
    _t.u8[6] = (c)->q[22].u8[6] & (c)->q[14].u8[6];
    _t.u8[7] = (c)->q[22].u8[7] & (c)->q[14].u8[7];
    _t.u8[8] = (c)->q[22].u8[8] & (c)->q[14].u8[8];
    _t.u8[9] = (c)->q[22].u8[9] & (c)->q[14].u8[9];
    _t.u8[10] = (c)->q[22].u8[10] & (c)->q[14].u8[10];
    _t.u8[11] = (c)->q[22].u8[11] & (c)->q[14].u8[11];
    _t.u8[12] = (c)->q[22].u8[12] & (c)->q[14].u8[12];
    _t.u8[13] = (c)->q[22].u8[13] & (c)->q[14].u8[13];
    _t.u8[14] = (c)->q[22].u8[14] & (c)->q[14].u8[14];
    _t.u8[15] = (c)->q[22].u8[15] & (c)->q[14].u8[15];
    (c)->q[22] = _t; }
  /* c3ae4: and v19.16b, v19.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] & (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] & (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] & (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] & (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] & (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] & (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] & (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] & (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] & (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] & (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] & (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] & (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] & (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] & (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] & (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] & (c)->q[6].u8[15];
    (c)->q[19] = _t; }
  /* c3ae8: ldur q6, [x29, #-0x90] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 29) + INT64_C(-144))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-144)) + 8));
  /* c3aec: and v28.16b, v5.16b, v11.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] & (c)->q[11].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] & (c)->q[11].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] & (c)->q[11].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] & (c)->q[11].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] & (c)->q[11].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] & (c)->q[11].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] & (c)->q[11].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] & (c)->q[11].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] & (c)->q[11].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] & (c)->q[11].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] & (c)->q[11].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] & (c)->q[11].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] & (c)->q[11].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] & (c)->q[11].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] & (c)->q[11].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] & (c)->q[11].u8[15];
    (c)->q[28] = _t; }
  /* c3af0: and v5.16b, v21.16b, v15.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] & (c)->q[15].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] & (c)->q[15].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] & (c)->q[15].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] & (c)->q[15].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] & (c)->q[15].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] & (c)->q[15].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] & (c)->q[15].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] & (c)->q[15].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] & (c)->q[15].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] & (c)->q[15].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] & (c)->q[15].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] & (c)->q[15].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] & (c)->q[15].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] & (c)->q[15].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] & (c)->q[15].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] & (c)->q[15].u8[15];
    (c)->q[5] = _t; }
  /* c3af4: ushll2 v16.2d, v16.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[16].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[16].u32[3]) << 0);
    (c)->q[16] = _t; }
  /* c3af8: and v6.16b, v2.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] & (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] & (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] & (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] & (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] & (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] & (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] & (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] & (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[2].u8[8] & (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[2].u8[9] & (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[2].u8[10] & (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[2].u8[11] & (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[2].u8[12] & (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[2].u8[13] & (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[2].u8[14] & (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[2].u8[15] & (c)->q[6].u8[15];
    (c)->q[6] = _t; }
  /* c3afc: ldur q2, [x29, #-0xa0] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 29) + INT64_C(-160))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-160)) + 8));
  /* c3b00: and v7.16b, v7.16b, v13.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] & (c)->q[13].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] & (c)->q[13].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] & (c)->q[13].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] & (c)->q[13].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] & (c)->q[13].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] & (c)->q[13].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] & (c)->q[13].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] & (c)->q[13].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] & (c)->q[13].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] & (c)->q[13].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] & (c)->q[13].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] & (c)->q[13].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] & (c)->q[13].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] & (c)->q[13].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] & (c)->q[13].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] & (c)->q[13].u8[15];
    (c)->q[7] = _t; }
  /* c3b04: and v21.16b, v27.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[27].u8[0] & (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[27].u8[1] & (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[27].u8[2] & (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[27].u8[3] & (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[27].u8[4] & (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[27].u8[5] & (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[27].u8[6] & (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[27].u8[7] & (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[27].u8[8] & (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[27].u8[9] & (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[27].u8[10] & (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[27].u8[11] & (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[27].u8[12] & (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[27].u8[13] & (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[27].u8[14] & (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[27].u8[15] & (c)->q[2].u8[15];
    (c)->q[21] = _t; }
  /* c3b08: ldur q2, [x29, #-0x100] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 29) + INT64_C(-256))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-256)) + 8));
  /* c3b0c: sshll v27.8h, v3.8b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[3].i8[0]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[3].i8[1]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[3].i8[2]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[3].i8[3]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[3].i8[4]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[3].i8[5]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[3].i8[6]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[3].i8[7]) << 0);
    (c)->q[27] = _t; }
  /* c3b10: and v16.16b, v16.16b, v12.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] & (c)->q[12].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] & (c)->q[12].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] & (c)->q[12].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] & (c)->q[12].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] & (c)->q[12].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] & (c)->q[12].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] & (c)->q[12].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] & (c)->q[12].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] & (c)->q[12].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] & (c)->q[12].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] & (c)->q[12].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] & (c)->q[12].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] & (c)->q[12].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] & (c)->q[12].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] & (c)->q[12].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] & (c)->q[12].u8[15];
    (c)->q[16] = _t; }
  /* c3b14: orr v1.16b, v6.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[6].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[6].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[6].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[6].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[6].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[6].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[6].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[6].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[6].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[6].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[6].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[6].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[6].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[6].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[6].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* c3b18: and v2.16b, v23.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] & (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[23].u8[1] & (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[23].u8[2] & (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[23].u8[3] & (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[23].u8[4] & (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[23].u8[5] & (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[23].u8[6] & (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[23].u8[7] & (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[23].u8[8] & (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[23].u8[9] & (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[23].u8[10] & (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[23].u8[11] & (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[23].u8[12] & (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[23].u8[13] & (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[23].u8[14] & (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[23].u8[15] & (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* c3b1c: ldur q23, [x29, #-0xe0] */
  arc_q_w(c, 23, arc_ld64((ARC_X_R(c, 29) + INT64_C(-224))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-224)) + 8));
  /* c3b20: and v23.16b, v25.16b, v23.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[0] & (c)->q[23].u8[0];
    _t.u8[1] = (c)->q[25].u8[1] & (c)->q[23].u8[1];
    _t.u8[2] = (c)->q[25].u8[2] & (c)->q[23].u8[2];
    _t.u8[3] = (c)->q[25].u8[3] & (c)->q[23].u8[3];
    _t.u8[4] = (c)->q[25].u8[4] & (c)->q[23].u8[4];
    _t.u8[5] = (c)->q[25].u8[5] & (c)->q[23].u8[5];
    _t.u8[6] = (c)->q[25].u8[6] & (c)->q[23].u8[6];
    _t.u8[7] = (c)->q[25].u8[7] & (c)->q[23].u8[7];
    _t.u8[8] = (c)->q[25].u8[8] & (c)->q[23].u8[8];
    _t.u8[9] = (c)->q[25].u8[9] & (c)->q[23].u8[9];
    _t.u8[10] = (c)->q[25].u8[10] & (c)->q[23].u8[10];
    _t.u8[11] = (c)->q[25].u8[11] & (c)->q[23].u8[11];
    _t.u8[12] = (c)->q[25].u8[12] & (c)->q[23].u8[12];
    _t.u8[13] = (c)->q[25].u8[13] & (c)->q[23].u8[13];
    _t.u8[14] = (c)->q[25].u8[14] & (c)->q[23].u8[14];
    _t.u8[15] = (c)->q[25].u8[15] & (c)->q[23].u8[15];
    (c)->q[23] = _t; }
  /* c3b24: ldur q25, [x29, #-0xf0] */
  arc_q_w(c, 25, arc_ld64((ARC_X_R(c, 29) + INT64_C(-240))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-240)) + 8));
  /* c3b28: orr v2.16b, v2.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] | (c)->q[19].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] | (c)->q[19].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] | (c)->q[19].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] | (c)->q[19].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] | (c)->q[19].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] | (c)->q[19].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] | (c)->q[19].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] | (c)->q[19].u8[7];
    _t.u8[8] = (c)->q[2].u8[8] | (c)->q[19].u8[8];
    _t.u8[9] = (c)->q[2].u8[9] | (c)->q[19].u8[9];
    _t.u8[10] = (c)->q[2].u8[10] | (c)->q[19].u8[10];
    _t.u8[11] = (c)->q[2].u8[11] | (c)->q[19].u8[11];
    _t.u8[12] = (c)->q[2].u8[12] | (c)->q[19].u8[12];
    _t.u8[13] = (c)->q[2].u8[13] | (c)->q[19].u8[13];
    _t.u8[14] = (c)->q[2].u8[14] | (c)->q[19].u8[14];
    _t.u8[15] = (c)->q[2].u8[15] | (c)->q[19].u8[15];
    (c)->q[2] = _t; }
  /* c3b2c: sshll2 v19.8h, v3.16b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[3].i8[8]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[3].i8[9]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[3].i8[10]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[3].i8[11]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[3].i8[12]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[3].i8[13]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[3].i8[14]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[3].i8[15]) << 0);
    (c)->q[19] = _t; }
  /* c3b30: and v24.16b, v24.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] & (c)->q[25].u8[0];
    _t.u8[1] = (c)->q[24].u8[1] & (c)->q[25].u8[1];
    _t.u8[2] = (c)->q[24].u8[2] & (c)->q[25].u8[2];
    _t.u8[3] = (c)->q[24].u8[3] & (c)->q[25].u8[3];
    _t.u8[4] = (c)->q[24].u8[4] & (c)->q[25].u8[4];
    _t.u8[5] = (c)->q[24].u8[5] & (c)->q[25].u8[5];
    _t.u8[6] = (c)->q[24].u8[6] & (c)->q[25].u8[6];
    _t.u8[7] = (c)->q[24].u8[7] & (c)->q[25].u8[7];
    _t.u8[8] = (c)->q[24].u8[8] & (c)->q[25].u8[8];
    _t.u8[9] = (c)->q[24].u8[9] & (c)->q[25].u8[9];
    _t.u8[10] = (c)->q[24].u8[10] & (c)->q[25].u8[10];
    _t.u8[11] = (c)->q[24].u8[11] & (c)->q[25].u8[11];
    _t.u8[12] = (c)->q[24].u8[12] & (c)->q[25].u8[12];
    _t.u8[13] = (c)->q[24].u8[13] & (c)->q[25].u8[13];
    _t.u8[14] = (c)->q[24].u8[14] & (c)->q[25].u8[14];
    _t.u8[15] = (c)->q[24].u8[15] & (c)->q[25].u8[15];
    (c)->q[24] = _t; }
  /* c3b34: cmhi v25.16b, v0.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[0].u8[0] > (c)->q[4].u8[0]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[1] = ((c)->q[0].u8[1] > (c)->q[4].u8[1]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[2] = ((c)->q[0].u8[2] > (c)->q[4].u8[2]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[3] = ((c)->q[0].u8[3] > (c)->q[4].u8[3]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[4] = ((c)->q[0].u8[4] > (c)->q[4].u8[4]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[5] = ((c)->q[0].u8[5] > (c)->q[4].u8[5]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[6] = ((c)->q[0].u8[6] > (c)->q[4].u8[6]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[7] = ((c)->q[0].u8[7] > (c)->q[4].u8[7]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[8] = ((c)->q[0].u8[8] > (c)->q[4].u8[8]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[9] = ((c)->q[0].u8[9] > (c)->q[4].u8[9]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[10] = ((c)->q[0].u8[10] > (c)->q[4].u8[10]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[11] = ((c)->q[0].u8[11] > (c)->q[4].u8[11]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[12] = ((c)->q[0].u8[12] > (c)->q[4].u8[12]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[13] = ((c)->q[0].u8[13] > (c)->q[4].u8[13]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[14] = ((c)->q[0].u8[14] > (c)->q[4].u8[14]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[15] = ((c)->q[0].u8[15] > (c)->q[4].u8[15]) ? (uint8_t)~(uint8_t)0 : 0;
    (c)->q[25] = _t; }
  /* c3b38: ldur q4, [x29, #-0xb0] */
  arc_q_w(c, 4, arc_ld64((ARC_X_R(c, 29) + INT64_C(-176))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-176)) + 8));
  /* c3b3c: orr v5.16b, v23.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[23].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[23].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[23].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[23].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[23].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[23].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[23].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[23].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[23].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[23].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[23].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[23].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[23].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[23].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[23].u8[15] | (c)->q[5].u8[15];
    (c)->q[5] = _t; }
  /* c3b40: and v18.16b, v18.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] & (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] & (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] & (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] & (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] & (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] & (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] & (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] & (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] & (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] & (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] & (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] & (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] & (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] & (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] & (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] & (c)->q[4].u8[15];
    (c)->q[18] = _t; }
  /* c3b44: ldur q4, [x29, #-0xd0] */
  arc_q_w(c, 4, arc_ld64((ARC_X_R(c, 29) + INT64_C(-208))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-208)) + 8));
  /* c3b48: sshll v23.8h, v25.8b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[25].i8[0]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[25].i8[1]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[25].i8[2]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[25].i8[3]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[25].i8[4]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[25].i8[5]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[25].i8[6]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[25].i8[7]) << 0);
    (c)->q[23] = _t; }
  /* c3b4c: and v26.16b, v26.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] & (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[26].u8[1] & (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[26].u8[2] & (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[26].u8[3] & (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[26].u8[4] & (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[26].u8[5] & (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[26].u8[6] & (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[26].u8[7] & (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[26].u8[8] & (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[26].u8[9] & (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[26].u8[10] & (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[26].u8[11] & (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[26].u8[12] & (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[26].u8[13] & (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[26].u8[14] & (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[26].u8[15] & (c)->q[4].u8[15];
    (c)->q[26] = _t; }
  /* c3b50: ldur q4, [x29, #-0xc0] */
  arc_q_w(c, 4, arc_ld64((ARC_X_R(c, 29) + INT64_C(-192))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-192)) + 8));
  /* c3b54: orr v16.16b, v18.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] | (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] | (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] | (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] | (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] | (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] | (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] | (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] | (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] | (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] | (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] | (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] | (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] | (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] | (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] | (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] | (c)->q[16].u8[15];
    (c)->q[16] = _t; }
  /* c3b58: and v17.16b, v17.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] & (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[17].u8[1] & (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[17].u8[2] & (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[17].u8[3] & (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[17].u8[4] & (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[17].u8[5] & (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[17].u8[6] & (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[17].u8[7] & (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[17].u8[8] & (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[17].u8[9] & (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[17].u8[10] & (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[17].u8[11] & (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[17].u8[12] & (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[17].u8[13] & (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[17].u8[14] & (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[17].u8[15] & (c)->q[4].u8[15];
    (c)->q[17] = _t; }
  /* c3b5c: orr v4.16b, v24.16b, v20.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] | (c)->q[20].u8[0];
    _t.u8[1] = (c)->q[24].u8[1] | (c)->q[20].u8[1];
    _t.u8[2] = (c)->q[24].u8[2] | (c)->q[20].u8[2];
    _t.u8[3] = (c)->q[24].u8[3] | (c)->q[20].u8[3];
    _t.u8[4] = (c)->q[24].u8[4] | (c)->q[20].u8[4];
    _t.u8[5] = (c)->q[24].u8[5] | (c)->q[20].u8[5];
    _t.u8[6] = (c)->q[24].u8[6] | (c)->q[20].u8[6];
    _t.u8[7] = (c)->q[24].u8[7] | (c)->q[20].u8[7];
    _t.u8[8] = (c)->q[24].u8[8] | (c)->q[20].u8[8];
    _t.u8[9] = (c)->q[24].u8[9] | (c)->q[20].u8[9];
    _t.u8[10] = (c)->q[24].u8[10] | (c)->q[20].u8[10];
    _t.u8[11] = (c)->q[24].u8[11] | (c)->q[20].u8[11];
    _t.u8[12] = (c)->q[24].u8[12] | (c)->q[20].u8[12];
    _t.u8[13] = (c)->q[24].u8[13] | (c)->q[20].u8[13];
    _t.u8[14] = (c)->q[24].u8[14] | (c)->q[20].u8[14];
    _t.u8[15] = (c)->q[24].u8[15] | (c)->q[20].u8[15];
    (c)->q[4] = _t; }
  /* c3b60: sshll2 v24.4s, v19.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[19].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[19].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[19].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[19].i16[7]) << 0);
    (c)->q[24] = _t; }
  /* c3b64: sshll v19.4s, v19.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[19].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[19].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[19].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[19].i16[3]) << 0);
    (c)->q[19] = _t; }
  /* c3b68: sshll2 v20.8h, v25.16b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[25].i8[8]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[25].i8[9]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[25].i8[10]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[25].i8[11]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[25].i8[12]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[25].i8[13]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[25].i8[14]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[25].i8[15]) << 0);
    (c)->q[20] = _t; }
  /* c3b6c: sshll v25.4s, v27.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[27].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[27].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[27].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[27].i16[3]) << 0);
    (c)->q[25] = _t; }
  /* c3b70: orr v3.16b, v26.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] | (c)->q[22].u8[0];
    _t.u8[1] = (c)->q[26].u8[1] | (c)->q[22].u8[1];
    _t.u8[2] = (c)->q[26].u8[2] | (c)->q[22].u8[2];
    _t.u8[3] = (c)->q[26].u8[3] | (c)->q[22].u8[3];
    _t.u8[4] = (c)->q[26].u8[4] | (c)->q[22].u8[4];
    _t.u8[5] = (c)->q[26].u8[5] | (c)->q[22].u8[5];
    _t.u8[6] = (c)->q[26].u8[6] | (c)->q[22].u8[6];
    _t.u8[7] = (c)->q[26].u8[7] | (c)->q[22].u8[7];
    _t.u8[8] = (c)->q[26].u8[8] | (c)->q[22].u8[8];
    _t.u8[9] = (c)->q[26].u8[9] | (c)->q[22].u8[9];
    _t.u8[10] = (c)->q[26].u8[10] | (c)->q[22].u8[10];
    _t.u8[11] = (c)->q[26].u8[11] | (c)->q[22].u8[11];
    _t.u8[12] = (c)->q[26].u8[12] | (c)->q[22].u8[12];
    _t.u8[13] = (c)->q[26].u8[13] | (c)->q[22].u8[13];
    _t.u8[14] = (c)->q[26].u8[14] | (c)->q[22].u8[14];
    _t.u8[15] = (c)->q[26].u8[15] | (c)->q[22].u8[15];
    (c)->q[3] = _t; }
  /* c3b74: sshll2 v22.4s, v27.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[27].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[27].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[27].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[27].i16[7]) << 0);
    (c)->q[22] = _t; }
  /* c3b78: sshll v26.4s, v23.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[23].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[23].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[23].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[23].i16[3]) << 0);
    (c)->q[26] = _t; }
  /* c3b7c: orr v7.16b, v17.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] | (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[17].u8[1] | (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[17].u8[2] | (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[17].u8[3] | (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[17].u8[4] | (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[17].u8[5] | (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[17].u8[6] | (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[17].u8[7] | (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[17].u8[8] | (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[17].u8[9] | (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[17].u8[10] | (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[17].u8[11] | (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[17].u8[12] | (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[17].u8[13] | (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[17].u8[14] | (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[17].u8[15] | (c)->q[7].u8[15];
    (c)->q[7] = _t; }
  /* c3b80: orr v17.16b, v21.16b, v28.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] | (c)->q[28].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] | (c)->q[28].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] | (c)->q[28].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] | (c)->q[28].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] | (c)->q[28].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] | (c)->q[28].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] | (c)->q[28].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] | (c)->q[28].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] | (c)->q[28].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] | (c)->q[28].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] | (c)->q[28].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] | (c)->q[28].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] | (c)->q[28].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] | (c)->q[28].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] | (c)->q[28].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] | (c)->q[28].u8[15];
    (c)->q[17] = _t; }
  /* c3b84: sshll2 v27.2d, v24.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[24].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[24].i32[3]) << 0);
    (c)->q[27] = _t; }
  /* c3b88: sshll2 v29.2d, v19.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[19].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[19].i32[3]) << 0);
    (c)->q[29] = _t; }
  /* c3b8c: sshll v19.2d, v19.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[19].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[19].i32[1]) << 0);
    (c)->q[19] = _t; }
  /* c3b90: sshll2 v28.2d, v25.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[25].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[25].i32[3]) << 0);
    (c)->q[28] = _t; }
  /* c3b94: sshll v25.2d, v25.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[25].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[25].i32[1]) << 0);
    (c)->q[25] = _t; }
  /* c3b98: sshll v24.2d, v24.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[24].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[24].i32[1]) << 0);
    (c)->q[24] = _t; }
  /* c3b9c: sshll2 v21.2d, v22.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[22].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[22].i32[3]) << 0);
    (c)->q[21] = _t; }
  /* c3ba0: sshll v22.2d, v22.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[22].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[22].i32[1]) << 0);
    (c)->q[22] = _t; }
  /* c3ba4: sshll2 v18.4s, v20.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[20].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[20].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[20].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[20].i16[7]) << 0);
    (c)->q[18] = _t; }
  /* c3ba8: sshll v20.4s, v20.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[20].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[20].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[20].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[20].i16[3]) << 0);
    (c)->q[20] = _t; }
  /* c3bac: and v19.16b, v19.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] & (c)->q[10].u8[15];
    (c)->q[19] = _t; }
  /* c3bb0: ldr q10, [sp, #0x110] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(272))), arc_ld64(((c)->sp + INT64_C(272)) + 8));
  /* c3bb4: sshll v31.2d, v26.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[26].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[26].i32[1]) << 0);
    (c)->q[31] = _t; }
  /* c3bb8: sshll2 v23.4s, v23.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[23].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[23].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[23].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[23].i16[7]) << 0);
    (c)->q[23] = _t; }
  /* c3bbc: sshll2 v26.2d, v26.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[26].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[26].i32[3]) << 0);
    (c)->q[26] = _t; }
  /* c3bc0: and v25.16b, v25.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[25].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[25].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[25].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[25].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[25].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[25].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[25].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[25].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[25].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[25].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[25].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[25].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[25].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[25].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[25].u8[15] & (c)->q[10].u8[15];
    (c)->q[25] = _t; }
  /* c3bc4: ldr q10, [sp, #0x100] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(256))), arc_ld64(((c)->sp + INT64_C(256)) + 8));
  /* c3bc8: sshll v30.2d, v18.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[18].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[18].i32[1]) << 0);
    (c)->q[30] = _t; }
  /* c3bcc: and v31.16b, v31.16b, v9.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[31].u8[0] & (c)->q[9].u8[0];
    _t.u8[1] = (c)->q[31].u8[1] & (c)->q[9].u8[1];
    _t.u8[2] = (c)->q[31].u8[2] & (c)->q[9].u8[2];
    _t.u8[3] = (c)->q[31].u8[3] & (c)->q[9].u8[3];
    _t.u8[4] = (c)->q[31].u8[4] & (c)->q[9].u8[4];
    _t.u8[5] = (c)->q[31].u8[5] & (c)->q[9].u8[5];
    _t.u8[6] = (c)->q[31].u8[6] & (c)->q[9].u8[6];
    _t.u8[7] = (c)->q[31].u8[7] & (c)->q[9].u8[7];
    _t.u8[8] = (c)->q[31].u8[8] & (c)->q[9].u8[8];
    _t.u8[9] = (c)->q[31].u8[9] & (c)->q[9].u8[9];
    _t.u8[10] = (c)->q[31].u8[10] & (c)->q[9].u8[10];
    _t.u8[11] = (c)->q[31].u8[11] & (c)->q[9].u8[11];
    _t.u8[12] = (c)->q[31].u8[12] & (c)->q[9].u8[12];
    _t.u8[13] = (c)->q[31].u8[13] & (c)->q[9].u8[13];
    _t.u8[14] = (c)->q[31].u8[14] & (c)->q[9].u8[14];
    _t.u8[15] = (c)->q[31].u8[15] & (c)->q[9].u8[15];
    (c)->q[31] = _t; }
  /* c3bd0: ldr q9, [x22, #0xc80] */
  arc_q_w(c, 9, arc_ld64((ARC_X_R(c, 22) + INT64_C(3200))), arc_ld64((ARC_X_R(c, 22) + INT64_C(3200)) + 8));
  /* c3bd4: sshll2 v18.2d, v18.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[18].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[18].i32[3]) << 0);
    (c)->q[18] = _t; }
  /* c3bd8: and v24.16b, v24.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[24].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[24].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[24].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[24].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[24].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[24].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[24].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[24].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[24].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[24].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[24].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[24].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[24].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[24].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[24].u8[15] & (c)->q[10].u8[15];
    (c)->q[24] = _t; }
  /* c3bdc: ldr q10, [sp, #0xf0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(240))), arc_ld64(((c)->sp + INT64_C(240)) + 8));
  /* c3be0: and v30.16b, v30.16b, v8.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[30].u8[0] & (c)->q[8].u8[0];
    _t.u8[1] = (c)->q[30].u8[1] & (c)->q[8].u8[1];
    _t.u8[2] = (c)->q[30].u8[2] & (c)->q[8].u8[2];
    _t.u8[3] = (c)->q[30].u8[3] & (c)->q[8].u8[3];
    _t.u8[4] = (c)->q[30].u8[4] & (c)->q[8].u8[4];
    _t.u8[5] = (c)->q[30].u8[5] & (c)->q[8].u8[5];
    _t.u8[6] = (c)->q[30].u8[6] & (c)->q[8].u8[6];
    _t.u8[7] = (c)->q[30].u8[7] & (c)->q[8].u8[7];
    _t.u8[8] = (c)->q[30].u8[8] & (c)->q[8].u8[8];
    _t.u8[9] = (c)->q[30].u8[9] & (c)->q[8].u8[9];
    _t.u8[10] = (c)->q[30].u8[10] & (c)->q[8].u8[10];
    _t.u8[11] = (c)->q[30].u8[11] & (c)->q[8].u8[11];
    _t.u8[12] = (c)->q[30].u8[12] & (c)->q[8].u8[12];
    _t.u8[13] = (c)->q[30].u8[13] & (c)->q[8].u8[13];
    _t.u8[14] = (c)->q[30].u8[14] & (c)->q[8].u8[14];
    _t.u8[15] = (c)->q[30].u8[15] & (c)->q[8].u8[15];
    (c)->q[30] = _t; }
  /* c3be4: sshll v8.2d, v20.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[20].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[20].i32[1]) << 0);
    (c)->q[8] = _t; }
  /* c3be8: sshll2 v20.2d, v20.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[20].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[20].i32[3]) << 0);
    (c)->q[20] = _t; }
  /* c3bec: and v22.16b, v22.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[22].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[22].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[22].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[22].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[22].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[22].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[22].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[22].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[22].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[22].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[22].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[22].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[22].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[22].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[22].u8[15] & (c)->q[10].u8[15];
    (c)->q[22] = _t; }
  /* c3bf0: ldr q10, [sp, #0xe0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(224))), arc_ld64(((c)->sp + INT64_C(224)) + 8));
  /* c3bf4: and v29.16b, v29.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[29].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[29].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[29].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[29].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[29].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[29].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[29].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[29].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[29].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[29].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[29].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[29].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[29].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[29].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[29].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[29].u8[15] & (c)->q[10].u8[15];
    (c)->q[29] = _t; }
  /* c3bf8: ldr q10, [sp, #0xd0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(208))), arc_ld64(((c)->sp + INT64_C(208)) + 8));
  /* c3bfc: and v8.16b, v8.16b, v9.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[8].u8[0] & (c)->q[9].u8[0];
    _t.u8[1] = (c)->q[8].u8[1] & (c)->q[9].u8[1];
    _t.u8[2] = (c)->q[8].u8[2] & (c)->q[9].u8[2];
    _t.u8[3] = (c)->q[8].u8[3] & (c)->q[9].u8[3];
    _t.u8[4] = (c)->q[8].u8[4] & (c)->q[9].u8[4];
    _t.u8[5] = (c)->q[8].u8[5] & (c)->q[9].u8[5];
    _t.u8[6] = (c)->q[8].u8[6] & (c)->q[9].u8[6];
    _t.u8[7] = (c)->q[8].u8[7] & (c)->q[9].u8[7];
    _t.u8[8] = (c)->q[8].u8[8] & (c)->q[9].u8[8];
    _t.u8[9] = (c)->q[8].u8[9] & (c)->q[9].u8[9];
    _t.u8[10] = (c)->q[8].u8[10] & (c)->q[9].u8[10];
    _t.u8[11] = (c)->q[8].u8[11] & (c)->q[9].u8[11];
    _t.u8[12] = (c)->q[8].u8[12] & (c)->q[9].u8[12];
    _t.u8[13] = (c)->q[8].u8[13] & (c)->q[9].u8[13];
    _t.u8[14] = (c)->q[8].u8[14] & (c)->q[9].u8[14];
    _t.u8[15] = (c)->q[8].u8[15] & (c)->q[9].u8[15];
    (c)->q[8] = _t; }
  /* c3c00: sshll2 v9.2d, v23.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[3]) << 0);
    (c)->q[9] = _t; }
  /* c3c04: sshll v23.2d, v23.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[1]) << 0);
    (c)->q[23] = _t; }
  /* c3c08: orr v24.16b, v30.16b, v24.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[30].u8[0] | (c)->q[24].u8[0];
    _t.u8[1] = (c)->q[30].u8[1] | (c)->q[24].u8[1];
    _t.u8[2] = (c)->q[30].u8[2] | (c)->q[24].u8[2];
    _t.u8[3] = (c)->q[30].u8[3] | (c)->q[24].u8[3];
    _t.u8[4] = (c)->q[30].u8[4] | (c)->q[24].u8[4];
    _t.u8[5] = (c)->q[30].u8[5] | (c)->q[24].u8[5];
    _t.u8[6] = (c)->q[30].u8[6] | (c)->q[24].u8[6];
    _t.u8[7] = (c)->q[30].u8[7] | (c)->q[24].u8[7];
    _t.u8[8] = (c)->q[30].u8[8] | (c)->q[24].u8[8];
    _t.u8[9] = (c)->q[30].u8[9] | (c)->q[24].u8[9];
    _t.u8[10] = (c)->q[30].u8[10] | (c)->q[24].u8[10];
    _t.u8[11] = (c)->q[30].u8[11] | (c)->q[24].u8[11];
    _t.u8[12] = (c)->q[30].u8[12] | (c)->q[24].u8[12];
    _t.u8[13] = (c)->q[30].u8[13] | (c)->q[24].u8[13];
    _t.u8[14] = (c)->q[30].u8[14] | (c)->q[24].u8[14];
    _t.u8[15] = (c)->q[30].u8[15] | (c)->q[24].u8[15];
    (c)->q[24] = _t; }
  /* c3c0c: and v28.16b, v28.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[28].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[28].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[28].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[28].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[28].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[28].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[28].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[28].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[28].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[28].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[28].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[28].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[28].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[28].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[28].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[28].u8[15] & (c)->q[10].u8[15];
    (c)->q[28] = _t; }
  /* c3c10: ldr q10, [sp, #0xc0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(192))), arc_ld64(((c)->sp + INT64_C(192)) + 8));
  /* c3c14: orr v6.16b, v8.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[8].u8[0] | (c)->q[19].u8[0];
    _t.u8[1] = (c)->q[8].u8[1] | (c)->q[19].u8[1];
    _t.u8[2] = (c)->q[8].u8[2] | (c)->q[19].u8[2];
    _t.u8[3] = (c)->q[8].u8[3] | (c)->q[19].u8[3];
    _t.u8[4] = (c)->q[8].u8[4] | (c)->q[19].u8[4];
    _t.u8[5] = (c)->q[8].u8[5] | (c)->q[19].u8[5];
    _t.u8[6] = (c)->q[8].u8[6] | (c)->q[19].u8[6];
    _t.u8[7] = (c)->q[8].u8[7] | (c)->q[19].u8[7];
    _t.u8[8] = (c)->q[8].u8[8] | (c)->q[19].u8[8];
    _t.u8[9] = (c)->q[8].u8[9] | (c)->q[19].u8[9];
    _t.u8[10] = (c)->q[8].u8[10] | (c)->q[19].u8[10];
    _t.u8[11] = (c)->q[8].u8[11] | (c)->q[19].u8[11];
    _t.u8[12] = (c)->q[8].u8[12] | (c)->q[19].u8[12];
    _t.u8[13] = (c)->q[8].u8[13] | (c)->q[19].u8[13];
    _t.u8[14] = (c)->q[8].u8[14] | (c)->q[19].u8[14];
    _t.u8[15] = (c)->q[8].u8[15] | (c)->q[19].u8[15];
    (c)->q[6] = _t; }
  /* c3c18: orr v19.16b, v31.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[31].u8[0] | (c)->q[25].u8[0];
    _t.u8[1] = (c)->q[31].u8[1] | (c)->q[25].u8[1];
    _t.u8[2] = (c)->q[31].u8[2] | (c)->q[25].u8[2];
    _t.u8[3] = (c)->q[31].u8[3] | (c)->q[25].u8[3];
    _t.u8[4] = (c)->q[31].u8[4] | (c)->q[25].u8[4];
    _t.u8[5] = (c)->q[31].u8[5] | (c)->q[25].u8[5];
    _t.u8[6] = (c)->q[31].u8[6] | (c)->q[25].u8[6];
    _t.u8[7] = (c)->q[31].u8[7] | (c)->q[25].u8[7];
    _t.u8[8] = (c)->q[31].u8[8] | (c)->q[25].u8[8];
    _t.u8[9] = (c)->q[31].u8[9] | (c)->q[25].u8[9];
    _t.u8[10] = (c)->q[31].u8[10] | (c)->q[25].u8[10];
    _t.u8[11] = (c)->q[31].u8[11] | (c)->q[25].u8[11];
    _t.u8[12] = (c)->q[31].u8[12] | (c)->q[25].u8[12];
    _t.u8[13] = (c)->q[31].u8[13] | (c)->q[25].u8[13];
    _t.u8[14] = (c)->q[31].u8[14] | (c)->q[25].u8[14];
    _t.u8[15] = (c)->q[31].u8[15] | (c)->q[25].u8[15];
    (c)->q[19] = _t; }
  /* c3c1c: and v27.16b, v27.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[27].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[27].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[27].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[27].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[27].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[27].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[27].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[27].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[27].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[27].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[27].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[27].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[27].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[27].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[27].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[27].u8[15] & (c)->q[10].u8[15];
    (c)->q[27] = _t; }
  /* c3c20: ldr q10, [sp, #0xb0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(176))), arc_ld64(((c)->sp + INT64_C(176)) + 8));
  /* c3c24: orr v5.16b, v24.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[24].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[24].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[24].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[24].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[24].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[24].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[24].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[24].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[24].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[24].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[24].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[24].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[24].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[24].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[24].u8[15] | (c)->q[5].u8[15];
    (c)->q[5] = _t; }
  /* c3c28: and v21.16b, v21.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] & (c)->q[10].u8[15];
    (c)->q[21] = _t; }
  /* c3c2c: ldr q10, [sp, #0xa0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(160))), arc_ld64(((c)->sp + INT64_C(160)) + 8));
  /* c3c30: orr v2.16b, v6.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[6].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[6].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[6].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[6].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[6].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[6].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[6].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[6].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[6].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[6].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[6].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[6].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[6].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[6].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[6].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* c3c34: orr v4.16b, v19.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] | (c)->q[4].u8[15];
    (c)->q[4] = _t; }
  /* c3c38: and v9.16b, v9.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[9].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[9].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[9].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[9].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[9].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[9].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[9].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[9].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[9].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[9].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[9].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[9].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[9].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[9].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[9].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[9].u8[15] & (c)->q[10].u8[15];
    (c)->q[9] = _t; }
  /* c3c3c: ldr q10, [sp, #0x90] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(144))), arc_ld64(((c)->sp + INT64_C(144)) + 8));
  /* c3c40: and v18.16b, v18.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] & (c)->q[10].u8[15];
    (c)->q[18] = _t; }
  /* c3c44: ldr q10, [sp, #0x80] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(128))), arc_ld64(((c)->sp + INT64_C(128)) + 8));
  /* c3c48: orr v2.16b, v4.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* c3c4c: orr v21.16b, v9.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[9].u8[0] | (c)->q[21].u8[0];
    _t.u8[1] = (c)->q[9].u8[1] | (c)->q[21].u8[1];
    _t.u8[2] = (c)->q[9].u8[2] | (c)->q[21].u8[2];
    _t.u8[3] = (c)->q[9].u8[3] | (c)->q[21].u8[3];
    _t.u8[4] = (c)->q[9].u8[4] | (c)->q[21].u8[4];
    _t.u8[5] = (c)->q[9].u8[5] | (c)->q[21].u8[5];
    _t.u8[6] = (c)->q[9].u8[6] | (c)->q[21].u8[6];
    _t.u8[7] = (c)->q[9].u8[7] | (c)->q[21].u8[7];
    _t.u8[8] = (c)->q[9].u8[8] | (c)->q[21].u8[8];
    _t.u8[9] = (c)->q[9].u8[9] | (c)->q[21].u8[9];
    _t.u8[10] = (c)->q[9].u8[10] | (c)->q[21].u8[10];
    _t.u8[11] = (c)->q[9].u8[11] | (c)->q[21].u8[11];
    _t.u8[12] = (c)->q[9].u8[12] | (c)->q[21].u8[12];
    _t.u8[13] = (c)->q[9].u8[13] | (c)->q[21].u8[13];
    _t.u8[14] = (c)->q[9].u8[14] | (c)->q[21].u8[14];
    _t.u8[15] = (c)->q[9].u8[15] | (c)->q[21].u8[15];
    (c)->q[21] = _t; }
  /* c3c50: and v26.16b, v26.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[26].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[26].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[26].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[26].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[26].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[26].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[26].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[26].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[26].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[26].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[26].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[26].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[26].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[26].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[26].u8[15] & (c)->q[10].u8[15];
    (c)->q[26] = _t; }
  /* c3c54: ldr q10, [sp, #0x70] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(112))), arc_ld64(((c)->sp + INT64_C(112)) + 8));
  /* c3c58: orr v18.16b, v18.16b, v27.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] | (c)->q[27].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] | (c)->q[27].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] | (c)->q[27].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] | (c)->q[27].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] | (c)->q[27].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] | (c)->q[27].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] | (c)->q[27].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] | (c)->q[27].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] | (c)->q[27].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] | (c)->q[27].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] | (c)->q[27].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] | (c)->q[27].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] | (c)->q[27].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] | (c)->q[27].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] | (c)->q[27].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] | (c)->q[27].u8[15];
    (c)->q[18] = _t; }
  /* c3c5c: and v20.16b, v20.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] & (c)->q[10].u8[15];
    (c)->q[20] = _t; }
  /* c3c60: ldr q10, [sp, #0x60] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(96))), arc_ld64(((c)->sp + INT64_C(96)) + 8));
  /* c3c64: orr v1.16b, v21.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* c3c68: and v23.16b, v23.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[23].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[23].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[23].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[23].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[23].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[23].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[23].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[23].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[23].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[23].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[23].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[23].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[23].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[23].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[23].u8[15] & (c)->q[10].u8[15];
    (c)->q[23] = _t; }
  /* c3c6c: orr v6.16b, v18.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] | (c)->q[17].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] | (c)->q[17].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] | (c)->q[17].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] | (c)->q[17].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] | (c)->q[17].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] | (c)->q[17].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] | (c)->q[17].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] | (c)->q[17].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] | (c)->q[17].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] | (c)->q[17].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] | (c)->q[17].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] | (c)->q[17].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] | (c)->q[17].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] | (c)->q[17].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] | (c)->q[17].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] | (c)->q[17].u8[15];
    (c)->q[6] = _t; }
  /* c3c70: orr v20.16b, v20.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] | (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] | (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] | (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] | (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] | (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] | (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] | (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] | (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] | (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] | (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] | (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] | (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] | (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] | (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] | (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] | (c)->q[29].u8[15];
    (c)->q[20] = _t; }
  /* c3c74: orr v22.16b, v23.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] | (c)->q[22].u8[0];
    _t.u8[1] = (c)->q[23].u8[1] | (c)->q[22].u8[1];
    _t.u8[2] = (c)->q[23].u8[2] | (c)->q[22].u8[2];
    _t.u8[3] = (c)->q[23].u8[3] | (c)->q[22].u8[3];
    _t.u8[4] = (c)->q[23].u8[4] | (c)->q[22].u8[4];
    _t.u8[5] = (c)->q[23].u8[5] | (c)->q[22].u8[5];
    _t.u8[6] = (c)->q[23].u8[6] | (c)->q[22].u8[6];
    _t.u8[7] = (c)->q[23].u8[7] | (c)->q[22].u8[7];
    _t.u8[8] = (c)->q[23].u8[8] | (c)->q[22].u8[8];
    _t.u8[9] = (c)->q[23].u8[9] | (c)->q[22].u8[9];
    _t.u8[10] = (c)->q[23].u8[10] | (c)->q[22].u8[10];
    _t.u8[11] = (c)->q[23].u8[11] | (c)->q[22].u8[11];
    _t.u8[12] = (c)->q[23].u8[12] | (c)->q[22].u8[12];
    _t.u8[13] = (c)->q[23].u8[13] | (c)->q[22].u8[13];
    _t.u8[14] = (c)->q[23].u8[14] | (c)->q[22].u8[14];
    _t.u8[15] = (c)->q[23].u8[15] | (c)->q[22].u8[15];
    (c)->q[22] = _t; }
  /* c3c78: orr v23.16b, v26.16b, v28.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] | (c)->q[28].u8[0];
    _t.u8[1] = (c)->q[26].u8[1] | (c)->q[28].u8[1];
    _t.u8[2] = (c)->q[26].u8[2] | (c)->q[28].u8[2];
    _t.u8[3] = (c)->q[26].u8[3] | (c)->q[28].u8[3];
    _t.u8[4] = (c)->q[26].u8[4] | (c)->q[28].u8[4];
    _t.u8[5] = (c)->q[26].u8[5] | (c)->q[28].u8[5];
    _t.u8[6] = (c)->q[26].u8[6] | (c)->q[28].u8[6];
    _t.u8[7] = (c)->q[26].u8[7] | (c)->q[28].u8[7];
    _t.u8[8] = (c)->q[26].u8[8] | (c)->q[28].u8[8];
    _t.u8[9] = (c)->q[26].u8[9] | (c)->q[28].u8[9];
    _t.u8[10] = (c)->q[26].u8[10] | (c)->q[28].u8[10];
    _t.u8[11] = (c)->q[26].u8[11] | (c)->q[28].u8[11];
    _t.u8[12] = (c)->q[26].u8[12] | (c)->q[28].u8[12];
    _t.u8[13] = (c)->q[26].u8[13] | (c)->q[28].u8[13];
    _t.u8[14] = (c)->q[26].u8[14] | (c)->q[28].u8[14];
    _t.u8[15] = (c)->q[26].u8[15] | (c)->q[28].u8[15];
    (c)->q[23] = _t; }
  /* c3c7c: orr v1.16b, v1.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[0] | (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[1].u8[1] | (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[1].u8[2] | (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[1].u8[3] | (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[1].u8[4] | (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[1].u8[5] | (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[1].u8[6] | (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[1].u8[7] | (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[1].u8[8] | (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[1].u8[9] | (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[1].u8[10] | (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[1].u8[11] | (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[1].u8[12] | (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[1].u8[13] | (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[1].u8[14] | (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[1].u8[15] | (c)->q[6].u8[15];
    (c)->q[1] = _t; }
  /* c3c80: orr v7.16b, v20.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] | (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] | (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] | (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] | (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] | (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] | (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] | (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] | (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] | (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] | (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] | (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] | (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] | (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] | (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] | (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] | (c)->q[7].u8[15];
    (c)->q[7] = _t; }
  /* c3c84: orr v3.16b, v22.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[22].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[22].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[22].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[22].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[22].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[22].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[22].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[22].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[22].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[22].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[22].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[22].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[22].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[22].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[22].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* c3c88: orr v16.16b, v23.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] | (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[23].u8[1] | (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[23].u8[2] | (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[23].u8[3] | (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[23].u8[4] | (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[23].u8[5] | (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[23].u8[6] | (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[23].u8[7] | (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[23].u8[8] | (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[23].u8[9] | (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[23].u8[10] | (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[23].u8[11] | (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[23].u8[12] | (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[23].u8[13] | (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[23].u8[14] | (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[23].u8[15] | (c)->q[16].u8[15];
    (c)->q[16] = _t; }
  /* c3c8c: orr v6.16b, v16.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] | (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] | (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] | (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] | (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] | (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] | (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] | (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] | (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] | (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] | (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] | (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] | (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] | (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] | (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] | (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] | (c)->q[7].u8[15];
    (c)->q[6] = _t; }
  /* c3c90: orr v3.16b, v3.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[3].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[3].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[3].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[3].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[3].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[3].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[3].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[3].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[3].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[3].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[3].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[3].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[3].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[3].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[3].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[3].u8[15] | (c)->q[5].u8[15];
    (c)->q[3] = _t; }
  /* c3c94: orr v1.16b, v6.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[6].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[6].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[6].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[6].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[6].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[6].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[6].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[6].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[6].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[6].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[6].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[6].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[6].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[6].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[6].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* c3c98: orr v2.16b, v2.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[2].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[2].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[2].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[2].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[2].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[2].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[2].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[2].u8[15] | (c)->q[3].u8[15];
    (c)->q[2] = _t; }
  /* c3c9c: orr v1.16b, v2.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[2].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[2].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[2].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[2].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[2].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[2].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[2].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[2].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* c3ca0: ext v2.16b, v1.16b, v1.16b, #8 */
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
    (c)->q[2] = _t; }
  /* c3ca4: orr v1.8b, v1.8b, v2.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[1].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[1].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[1].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[1].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[1].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[1].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[1].u8[7] | (c)->q[2].u8[7];
    (c)->q[1] = _t; }
  /* c3ca8: fmov x13, d1 */
  ARC_X_W(c, 13, ARC_DU_R(c, 1));
  /* c3cac: cbz x14, #0xc377c */
  if ((ARC_X_R(c, 14)) == 0) goto L_c377c;
L_c3cb0:;
  /* c3cb0: cbz x13, #0xc377c */
  if ((ARC_X_R(c, 13)) == 0) goto L_c377c;
L_c3cb4:;
  /* c3cb4: rbit x15, x13 */
  ARC_X_W(c, 15, arc_rbit64(ARC_X_R(c, 13)));
  /* c3cb8: rbit x16, x14 */
  ARC_X_W(c, 16, arc_rbit64(ARC_X_R(c, 14)));
  /* c3cbc: sub x17, x13, #1 */
  ARC_X_W(c, 17, (ARC_X_R(c, 13) - UINT64_C(1)));
  /* c3cc0: sub x3, x14, #1 */
  ARC_X_W(c, 3, (ARC_X_R(c, 14) - UINT64_C(1)));
  /* c3cc4: and x13, x17, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 17) & ARC_X_R(c, 13)));
  /* c3cc8: clz x15, x15 */
  ARC_X_W(c, 15, arc_clz64(ARC_X_R(c, 15)));
  /* c3ccc: clz x16, x16 */
  ARC_X_W(c, 16, arc_clz64(ARC_X_R(c, 16)));
  /* c3cd0: and x14, x3, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 3) & ARC_X_R(c, 14)));
  /* c3cd4: sub x15, x12, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ARC_X_R(c, 15)));
  /* c3cd8: ldrb w0, [x11, x16] */
  ARC_W_W(c, 0, arc_ld8((ARC_X_R(c, 11) + ARC_X_R(c, 16))));
  /* c3cdc: ldrb w1, [x15] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 15)));
  /* c3ce0: strb w1, [x11, x16] */
  arc_st8((ARC_X_R(c, 11) + ARC_X_R(c, 16)), ARC_W_R(c, 1));
  /* c3ce4: strb w0, [x15] */
  arc_st8(ARC_X_R(c, 15), ARC_W_R(c, 0));
  /* c3ce8: cbz x13, #0xc377c */
  if ((ARC_X_R(c, 13)) == 0) goto L_c377c;
  /* c3cec: cbnz x14, #0xc3cb4 */
  if ((ARC_X_R(c, 14)) != 0) goto L_c3cb4;
  /* c3cf0: b #0xc377c */
  goto L_c377c;
L_c3cf4:;
  /* c3cf4: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* c3cf8: mov w16, #1 */
  ARC_W_W(c, 16, UINT64_C(1));
  /* c3cfc: b #0xc3d20 */
  goto L_c3d20;
L_c3d00:;
  /* c3d00: orr x17, x13, x14 */
  ARC_X_W(c, 17, (ARC_X_R(c, 13) | ARC_X_R(c, 14)));
  /* c3d04: cbz x17, #0xc3d20 */
  if ((ARC_X_R(c, 17)) == 0) goto L_c3d20;
  /* c3d08: sub x15, x15, #0x3f */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) - UINT64_C(63)));
  /* c3d0c: mov w0, #0x40 */
  ARC_W_W(c, 0, UINT64_C(64));
  /* c3d10: mov w17, #0x40 */
  ARC_W_W(c, 17, UINT64_C(64));
  /* c3d14: cbz x14, #0xc3d30 */
  if ((ARC_X_R(c, 14)) == 0) goto L_c3d30;
  /* c3d18: cbnz w16, #0xc3fb8 */
  if ((ARC_W_R(c, 16)) != 0) goto L_c3fb8;
  /* c3d1c: b #0xc4240 */
  goto L_c4240;
L_c3d20:;
  /* c3d20: add x14, x15, #1 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) + UINT64_C(1)));
  /* c3d24: add x15, x14, x14, lsr #63 */
  ARC_X_W(c, 15, (ARC_X_R(c, 14) + ((uint64_t)(ARC_X_R(c, 14)) >> 63)));
  /* c3d28: asr x15, x15, #1 */
  ARC_X_W(c, 15, ((uint64_t)((int64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(1)) & 63))));
  /* c3d2c: sub x0, x14, x15 */
  ARC_X_W(c, 0, (ARC_X_R(c, 14) - ARC_X_R(c, 15)));
L_c3d30:;
  /* c3d30: cmp x15, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(1));
  /* c3d34: b.lt #0xc3d50 */
  if (ARC_COND(c, 11)) goto L_c3d50;
  /* c3d38: cmp x15, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(4));
  /* c3d3c: b.hs #0xc3d58 */
  if (ARC_COND(c, 2)) goto L_c3d58;
  /* c3d40: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* c3d44: mov x17, xzr */
  ARC_X_W(c, 17, ARC_X_R(c, 31));
  /* c3d48: mov x1, x11 */
  ARC_X_W(c, 1, ARC_X_R(c, 11));
  /* c3d4c: b #0xc3f8c */
  goto L_c3f8c;
L_c3d50:;
  /* c3d50: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* c3d54: b #0xc3fac */
  goto L_c3fac;
L_c3d58:;
  /* c3d58: cmp x15, #0x10 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(16));
  /* c3d5c: b.hs #0xc3d6c */
  if (ARC_COND(c, 2)) goto L_c3d6c;
  /* c3d60: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* c3d64: mov x17, xzr */
  ARC_X_W(c, 17, ARC_X_R(c, 31));
  /* c3d68: b #0xc3ee4 */
  goto L_c3ee4;
L_c3d6c:;
  /* c3d6c: adrp x17, #0x52000 */
  ARC_X_W(c, 17, (arc_image_bases[1] + UINT64_C(335872)));
  /* c3d70: movi v3.2d, #0000000000000000 */
  arc_v_clear(c, 3);
  /* c3d74: movi v4.2d, #0000000000000000 */
  arc_v_clear(c, 4);
  /* c3d78: ldr q0, [x17, #0xa70] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 17) + INT64_C(2672))), arc_ld64((ARC_X_R(c, 17) + INT64_C(2672)) + 8));
  /* c3d7c: adrp x17, #0x52000 */
  ARC_X_W(c, 17, (arc_image_bases[1] + UINT64_C(335872)));
  /* c3d80: movi v6.2d, #0000000000000000 */
  arc_v_clear(c, 6);
  /* c3d84: ldr q1, [x17, #0xc60] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 17) + INT64_C(3168))), arc_ld64((ARC_X_R(c, 17) + INT64_C(3168)) + 8));
  /* c3d88: adrp x17, #0x52000 */
  ARC_X_W(c, 17, (arc_image_bases[1] + UINT64_C(335872)));
  /* c3d8c: movi v5.2d, #0000000000000000 */
  arc_v_clear(c, 5);
  /* c3d90: ldr q2, [x17, #0xa10] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 17) + INT64_C(2576))), arc_ld64((ARC_X_R(c, 17) + INT64_C(2576)) + 8));
  /* c3d94: adrp x17, #0x52000 */
  ARC_X_W(c, 17, (arc_image_bases[1] + UINT64_C(335872)));
  /* c3d98: movi v17.2d, #0000000000000000 */
  arc_v_clear(c, 17);
  /* c3d9c: ldr q19, [x17, #0xc00] */
  arc_q_w(c, 19, arc_ld64((ARC_X_R(c, 17) + INT64_C(3072))), arc_ld64((ARC_X_R(c, 17) + INT64_C(3072)) + 8));
  /* c3da0: adrp x17, #0x52000 */
  ARC_X_W(c, 17, (arc_image_bases[1] + UINT64_C(335872)));
  /* c3da4: movi v7.2d, #0000000000000000 */
  arc_v_clear(c, 7);
  /* c3da8: ldr q20, [x17, #0xcc0] */
  arc_q_w(c, 20, arc_ld64((ARC_X_R(c, 17) + INT64_C(3264))), arc_ld64((ARC_X_R(c, 17) + INT64_C(3264)) + 8));
  /* c3dac: adrp x17, #0x52000 */
  ARC_X_W(c, 17, (arc_image_bases[1] + UINT64_C(335872)));
  /* c3db0: movi v18.2d, #0000000000000000 */
  arc_v_clear(c, 18);
  /* c3db4: movi v16.2d, #0000000000000000 */
  arc_v_clear(c, 16);
  /* c3db8: ldr q22, [x17, #0xc70] */
  arc_q_w(c, 22, arc_ld64((ARC_X_R(c, 17) + INT64_C(3184))), arc_ld64((ARC_X_R(c, 17) + INT64_C(3184)) + 8));
  /* c3dbc: adrp x17, #0x52000 */
  ARC_X_W(c, 17, (arc_image_bases[1] + UINT64_C(335872)));
  /* c3dc0: dup v21.16b, w8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (ARC_W_R(c, 8));
    _t.u8[1] = (ARC_W_R(c, 8));
    _t.u8[2] = (ARC_W_R(c, 8));
    _t.u8[3] = (ARC_W_R(c, 8));
    _t.u8[4] = (ARC_W_R(c, 8));
    _t.u8[5] = (ARC_W_R(c, 8));
    _t.u8[6] = (ARC_W_R(c, 8));
    _t.u8[7] = (ARC_W_R(c, 8));
    _t.u8[8] = (ARC_W_R(c, 8));
    _t.u8[9] = (ARC_W_R(c, 8));
    _t.u8[10] = (ARC_W_R(c, 8));
    _t.u8[11] = (ARC_W_R(c, 8));
    _t.u8[12] = (ARC_W_R(c, 8));
    _t.u8[13] = (ARC_W_R(c, 8));
    _t.u8[14] = (ARC_W_R(c, 8));
    _t.u8[15] = (ARC_W_R(c, 8));
    (c)->q[21] = _t; }
  /* c3dc4: ldr q23, [x17, #0xc10] */
  arc_q_w(c, 23, arc_ld64((ARC_X_R(c, 17) + INT64_C(3088))), arc_ld64((ARC_X_R(c, 17) + INT64_C(3088)) + 8));
  /* c3dc8: adrp x17, #0x52000 */
  ARC_X_W(c, 17, (arc_image_bases[1] + UINT64_C(335872)));
  /* c3dcc: ldr q24, [x17, #0xa80] */
  arc_q_w(c, 24, arc_ld64((ARC_X_R(c, 17) + INT64_C(2688))), arc_ld64((ARC_X_R(c, 17) + INT64_C(2688)) + 8));
  /* c3dd0: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* c3dd4: and x17, x15, #0x7ffffffffffffff0 */
  ARC_X_W(c, 17, (ARC_X_R(c, 15) & UINT64_C(9223372036854775792)));
L_c3dd8:;
  /* c3dd8: ldr q25, [x11, x14] */
  arc_q_w(c, 25, arc_ld64((ARC_X_R(c, 11) + ARC_X_R(c, 14))), arc_ld64((ARC_X_R(c, 11) + ARC_X_R(c, 14)) + 8));
  /* c3ddc: dup v29.2d, x5 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 5));
    _t.u64[1] = (ARC_X_R(c, 5));
    (c)->q[29] = _t; }
  /* c3de0: add x14, x14, #0x10 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(16)));
  /* c3de4: cmp x17, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 17), ARC_X_R(c, 14));
  /* c3de8: cmhs v25.16b, v25.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[25].u8[0] >= (c)->q[21].u8[0]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[1] = ((c)->q[25].u8[1] >= (c)->q[21].u8[1]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[2] = ((c)->q[25].u8[2] >= (c)->q[21].u8[2]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[3] = ((c)->q[25].u8[3] >= (c)->q[21].u8[3]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[4] = ((c)->q[25].u8[4] >= (c)->q[21].u8[4]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[5] = ((c)->q[25].u8[5] >= (c)->q[21].u8[5]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[6] = ((c)->q[25].u8[6] >= (c)->q[21].u8[6]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[7] = ((c)->q[25].u8[7] >= (c)->q[21].u8[7]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[8] = ((c)->q[25].u8[8] >= (c)->q[21].u8[8]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[9] = ((c)->q[25].u8[9] >= (c)->q[21].u8[9]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[10] = ((c)->q[25].u8[10] >= (c)->q[21].u8[10]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[11] = ((c)->q[25].u8[11] >= (c)->q[21].u8[11]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[12] = ((c)->q[25].u8[12] >= (c)->q[21].u8[12]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[13] = ((c)->q[25].u8[13] >= (c)->q[21].u8[13]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[14] = ((c)->q[25].u8[14] >= (c)->q[21].u8[14]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[15] = ((c)->q[25].u8[15] >= (c)->q[21].u8[15]) ? (uint8_t)~(uint8_t)0 : 0;
    (c)->q[25] = _t; }
  /* c3dec: ushll2 v26.8h, v25.16b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((uint16_t)((c)->q[25].u8[8]) << 0);
    _t.u16[1] = (uint16_t)((uint16_t)((c)->q[25].u8[9]) << 0);
    _t.u16[2] = (uint16_t)((uint16_t)((c)->q[25].u8[10]) << 0);
    _t.u16[3] = (uint16_t)((uint16_t)((c)->q[25].u8[11]) << 0);
    _t.u16[4] = (uint16_t)((uint16_t)((c)->q[25].u8[12]) << 0);
    _t.u16[5] = (uint16_t)((uint16_t)((c)->q[25].u8[13]) << 0);
    _t.u16[6] = (uint16_t)((uint16_t)((c)->q[25].u8[14]) << 0);
    _t.u16[7] = (uint16_t)((uint16_t)((c)->q[25].u8[15]) << 0);
    (c)->q[26] = _t; }
  /* c3df0: ushll v25.8h, v25.8b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((uint16_t)((c)->q[25].u8[0]) << 0);
    _t.u16[1] = (uint16_t)((uint16_t)((c)->q[25].u8[1]) << 0);
    _t.u16[2] = (uint16_t)((uint16_t)((c)->q[25].u8[2]) << 0);
    _t.u16[3] = (uint16_t)((uint16_t)((c)->q[25].u8[3]) << 0);
    _t.u16[4] = (uint16_t)((uint16_t)((c)->q[25].u8[4]) << 0);
    _t.u16[5] = (uint16_t)((uint16_t)((c)->q[25].u8[5]) << 0);
    _t.u16[6] = (uint16_t)((uint16_t)((c)->q[25].u8[6]) << 0);
    _t.u16[7] = (uint16_t)((uint16_t)((c)->q[25].u8[7]) << 0);
    (c)->q[25] = _t; }
  /* c3df4: ushll2 v27.4s, v26.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[26].u16[4]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[26].u16[5]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[26].u16[6]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[26].u16[7]) << 0);
    (c)->q[27] = _t; }
  /* c3df8: ushll v26.4s, v26.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[26].u16[0]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[26].u16[1]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[26].u16[2]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[26].u16[3]) << 0);
    (c)->q[26] = _t; }
  /* c3dfc: ushll2 v28.4s, v25.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[25].u16[4]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[25].u16[5]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[25].u16[6]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[25].u16[7]) << 0);
    (c)->q[28] = _t; }
  /* c3e00: ushll v25.4s, v25.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[25].u16[0]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[25].u16[1]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[25].u16[2]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[25].u16[3]) << 0);
    (c)->q[25] = _t; }
  /* c3e04: ushll2 v30.2d, v27.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[27].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[27].u32[3]) << 0);
    (c)->q[30] = _t; }
  /* c3e08: ushll v27.2d, v27.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[27].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[27].u32[1]) << 0);
    (c)->q[27] = _t; }
  /* c3e0c: ushll2 v31.2d, v26.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[26].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[26].u32[3]) << 0);
    (c)->q[31] = _t; }
  /* c3e10: ushll2 v8.2d, v28.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[28].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[28].u32[3]) << 0);
    (c)->q[8] = _t; }
  /* c3e14: ushll v26.2d, v26.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[26].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[26].u32[1]) << 0);
    (c)->q[26] = _t; }
  /* c3e18: ushll v28.2d, v28.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[28].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[28].u32[1]) << 0);
    (c)->q[28] = _t; }
  /* c3e1c: ushll2 v9.2d, v25.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[25].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[25].u32[3]) << 0);
    (c)->q[9] = _t; }
  /* c3e20: ushll v25.2d, v25.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[25].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[25].u32[1]) << 0);
    (c)->q[25] = _t; }
  /* c3e24: and v30.16b, v30.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[30].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[30].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[30].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[30].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[30].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[30].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[30].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[30].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[30].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[30].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[30].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[30].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[30].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[30].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[30].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[30].u8[15] & (c)->q[29].u8[15];
    (c)->q[30] = _t; }
  /* c3e28: and v27.16b, v27.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[27].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[27].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[27].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[27].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[27].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[27].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[27].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[27].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[27].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[27].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[27].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[27].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[27].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[27].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[27].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[27].u8[15] & (c)->q[29].u8[15];
    (c)->q[27] = _t; }
  /* c3e2c: and v31.16b, v31.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[31].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[31].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[31].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[31].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[31].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[31].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[31].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[31].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[31].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[31].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[31].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[31].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[31].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[31].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[31].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[31].u8[15] & (c)->q[29].u8[15];
    (c)->q[31] = _t; }
  /* c3e30: and v8.16b, v8.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[8].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[8].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[8].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[8].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[8].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[8].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[8].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[8].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[8].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[8].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[8].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[8].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[8].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[8].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[8].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[8].u8[15] & (c)->q[29].u8[15];
    (c)->q[8] = _t; }
  /* c3e34: and v26.16b, v26.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[26].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[26].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[26].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[26].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[26].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[26].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[26].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[26].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[26].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[26].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[26].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[26].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[26].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[26].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[26].u8[15] & (c)->q[29].u8[15];
    (c)->q[26] = _t; }
  /* c3e38: and v28.16b, v28.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[28].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[28].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[28].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[28].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[28].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[28].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[28].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[28].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[28].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[28].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[28].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[28].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[28].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[28].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[28].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[28].u8[15] & (c)->q[29].u8[15];
    (c)->q[28] = _t; }
  /* c3e3c: and v9.16b, v9.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[9].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[9].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[9].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[9].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[9].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[9].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[9].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[9].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[9].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[9].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[9].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[9].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[9].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[9].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[9].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[9].u8[15] & (c)->q[29].u8[15];
    (c)->q[9] = _t; }
  /* c3e40: and v25.16b, v25.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[25].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[25].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[25].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[25].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[25].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[25].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[25].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[25].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[25].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[25].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[25].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[25].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[25].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[25].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[25].u8[15] & (c)->q[29].u8[15];
    (c)->q[25] = _t; }
  /* c3e44: dup v29.2d, x28 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 28));
    _t.u64[1] = (ARC_X_R(c, 28));
    (c)->q[29] = _t; }
  /* c3e48: ushl v31.2d, v31.2d, v2.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[31].u64[0], (int8_t)(c)->q[2].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[31].u64[1], (int8_t)(c)->q[2].u64[1]);
    (c)->q[31] = _t; }
  /* c3e4c: ushl v27.2d, v27.2d, v1.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[27].u64[0], (int8_t)(c)->q[1].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[27].u64[1], (int8_t)(c)->q[1].u64[1]);
    (c)->q[27] = _t; }
  /* c3e50: ushl v30.2d, v30.2d, v0.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[30].u64[0], (int8_t)(c)->q[0].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[30].u64[1], (int8_t)(c)->q[0].u64[1]);
    (c)->q[30] = _t; }
  /* c3e54: ushl v28.2d, v28.2d, v22.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[28].u64[0], (int8_t)(c)->q[22].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[28].u64[1], (int8_t)(c)->q[22].u64[1]);
    (c)->q[28] = _t; }
  /* c3e58: ushl v26.2d, v26.2d, v19.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[26].u64[0], (int8_t)(c)->q[19].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[26].u64[1], (int8_t)(c)->q[19].u64[1]);
    (c)->q[26] = _t; }
  /* c3e5c: ushl v8.2d, v8.2d, v20.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[8].u64[0], (int8_t)(c)->q[20].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[8].u64[1], (int8_t)(c)->q[20].u64[1]);
    (c)->q[8] = _t; }
  /* c3e60: ushl v25.2d, v25.2d, v24.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[25].u64[0], (int8_t)(c)->q[24].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[25].u64[1], (int8_t)(c)->q[24].u64[1]);
    (c)->q[25] = _t; }
  /* c3e64: ushl v9.2d, v9.2d, v23.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[9].u64[0], (int8_t)(c)->q[23].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[9].u64[1], (int8_t)(c)->q[23].u64[1]);
    (c)->q[9] = _t; }
  /* c3e68: add v22.2d, v22.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[22].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[22].u64[1] + (c)->q[29].u64[1];
    (c)->q[22] = _t; }
  /* c3e6c: orr v16.16b, v30.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[30].u8[0] | (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[30].u8[1] | (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[30].u8[2] | (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[30].u8[3] | (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[30].u8[4] | (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[30].u8[5] | (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[30].u8[6] | (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[30].u8[7] | (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[30].u8[8] | (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[30].u8[9] | (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[30].u8[10] | (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[30].u8[11] | (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[30].u8[12] | (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[30].u8[13] | (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[30].u8[14] | (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[30].u8[15] | (c)->q[16].u8[15];
    (c)->q[16] = _t; }
  /* c3e70: orr v18.16b, v27.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[27].u8[0] | (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[27].u8[1] | (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[27].u8[2] | (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[27].u8[3] | (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[27].u8[4] | (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[27].u8[5] | (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[27].u8[6] | (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[27].u8[7] | (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[27].u8[8] | (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[27].u8[9] | (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[27].u8[10] | (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[27].u8[11] | (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[27].u8[12] | (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[27].u8[13] | (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[27].u8[14] | (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[27].u8[15] | (c)->q[18].u8[15];
    (c)->q[18] = _t; }
  /* c3e74: orr v7.16b, v31.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[31].u8[0] | (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[31].u8[1] | (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[31].u8[2] | (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[31].u8[3] | (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[31].u8[4] | (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[31].u8[5] | (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[31].u8[6] | (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[31].u8[7] | (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[31].u8[8] | (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[31].u8[9] | (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[31].u8[10] | (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[31].u8[11] | (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[31].u8[12] | (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[31].u8[13] | (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[31].u8[14] | (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[31].u8[15] | (c)->q[7].u8[15];
    (c)->q[7] = _t; }
  /* c3e78: orr v5.16b, v8.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[8].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[8].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[8].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[8].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[8].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[8].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[8].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[8].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[8].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[8].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[8].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[8].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[8].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[8].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[8].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[8].u8[15] | (c)->q[5].u8[15];
    (c)->q[5] = _t; }
  /* c3e7c: orr v17.16b, v26.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] | (c)->q[17].u8[0];
    _t.u8[1] = (c)->q[26].u8[1] | (c)->q[17].u8[1];
    _t.u8[2] = (c)->q[26].u8[2] | (c)->q[17].u8[2];
    _t.u8[3] = (c)->q[26].u8[3] | (c)->q[17].u8[3];
    _t.u8[4] = (c)->q[26].u8[4] | (c)->q[17].u8[4];
    _t.u8[5] = (c)->q[26].u8[5] | (c)->q[17].u8[5];
    _t.u8[6] = (c)->q[26].u8[6] | (c)->q[17].u8[6];
    _t.u8[7] = (c)->q[26].u8[7] | (c)->q[17].u8[7];
    _t.u8[8] = (c)->q[26].u8[8] | (c)->q[17].u8[8];
    _t.u8[9] = (c)->q[26].u8[9] | (c)->q[17].u8[9];
    _t.u8[10] = (c)->q[26].u8[10] | (c)->q[17].u8[10];
    _t.u8[11] = (c)->q[26].u8[11] | (c)->q[17].u8[11];
    _t.u8[12] = (c)->q[26].u8[12] | (c)->q[17].u8[12];
    _t.u8[13] = (c)->q[26].u8[13] | (c)->q[17].u8[13];
    _t.u8[14] = (c)->q[26].u8[14] | (c)->q[17].u8[14];
    _t.u8[15] = (c)->q[26].u8[15] | (c)->q[17].u8[15];
    (c)->q[17] = _t; }
  /* c3e80: orr v6.16b, v28.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[28].u8[0] | (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[28].u8[1] | (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[28].u8[2] | (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[28].u8[3] | (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[28].u8[4] | (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[28].u8[5] | (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[28].u8[6] | (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[28].u8[7] | (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[28].u8[8] | (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[28].u8[9] | (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[28].u8[10] | (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[28].u8[11] | (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[28].u8[12] | (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[28].u8[13] | (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[28].u8[14] | (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[28].u8[15] | (c)->q[6].u8[15];
    (c)->q[6] = _t; }
  /* c3e84: orr v4.16b, v9.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[9].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[9].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[9].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[9].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[9].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[9].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[9].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[9].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[9].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[9].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[9].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[9].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[9].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[9].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[9].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[9].u8[15] | (c)->q[4].u8[15];
    (c)->q[4] = _t; }
  /* c3e88: orr v3.16b, v25.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[25].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[25].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[25].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[25].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[25].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[25].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[25].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[25].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[25].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[25].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[25].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[25].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[25].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[25].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[25].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* c3e8c: add v23.2d, v23.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[23].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[23].u64[1] + (c)->q[29].u64[1];
    (c)->q[23] = _t; }
  /* c3e90: add v24.2d, v24.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[24].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[24].u64[1] + (c)->q[29].u64[1];
    (c)->q[24] = _t; }
  /* c3e94: add v20.2d, v20.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[20].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[20].u64[1] + (c)->q[29].u64[1];
    (c)->q[20] = _t; }
  /* c3e98: add v19.2d, v19.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[19].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[19].u64[1] + (c)->q[29].u64[1];
    (c)->q[19] = _t; }
  /* c3e9c: add v2.2d, v2.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[2].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[2].u64[1] + (c)->q[29].u64[1];
    (c)->q[2] = _t; }
  /* c3ea0: add v1.2d, v1.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[1].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[1].u64[1] + (c)->q[29].u64[1];
    (c)->q[1] = _t; }
  /* c3ea4: add v0.2d, v0.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[0].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[0].u64[1] + (c)->q[29].u64[1];
    (c)->q[0] = _t; }
  /* c3ea8: b.ne #0xc3dd8 */
  if (ARC_COND(c, 1)) goto L_c3dd8;
  /* c3eac: orr v0.16b, v3.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[3].u8[0] | (c)->q[17].u8[0];
    _t.u8[1] = (c)->q[3].u8[1] | (c)->q[17].u8[1];
    _t.u8[2] = (c)->q[3].u8[2] | (c)->q[17].u8[2];
    _t.u8[3] = (c)->q[3].u8[3] | (c)->q[17].u8[3];
    _t.u8[4] = (c)->q[3].u8[4] | (c)->q[17].u8[4];
    _t.u8[5] = (c)->q[3].u8[5] | (c)->q[17].u8[5];
    _t.u8[6] = (c)->q[3].u8[6] | (c)->q[17].u8[6];
    _t.u8[7] = (c)->q[3].u8[7] | (c)->q[17].u8[7];
    _t.u8[8] = (c)->q[3].u8[8] | (c)->q[17].u8[8];
    _t.u8[9] = (c)->q[3].u8[9] | (c)->q[17].u8[9];
    _t.u8[10] = (c)->q[3].u8[10] | (c)->q[17].u8[10];
    _t.u8[11] = (c)->q[3].u8[11] | (c)->q[17].u8[11];
    _t.u8[12] = (c)->q[3].u8[12] | (c)->q[17].u8[12];
    _t.u8[13] = (c)->q[3].u8[13] | (c)->q[17].u8[13];
    _t.u8[14] = (c)->q[3].u8[14] | (c)->q[17].u8[14];
    _t.u8[15] = (c)->q[3].u8[15] | (c)->q[17].u8[15];
    (c)->q[0] = _t; }
  /* c3eb0: orr v1.16b, v6.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] | (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[6].u8[1] | (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[6].u8[2] | (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[6].u8[3] | (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[6].u8[4] | (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[6].u8[5] | (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[6].u8[6] | (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[6].u8[7] | (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[6].u8[8] | (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[6].u8[9] | (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[6].u8[10] | (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[6].u8[11] | (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[6].u8[12] | (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[6].u8[13] | (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[6].u8[14] | (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[6].u8[15] | (c)->q[18].u8[15];
    (c)->q[1] = _t; }
  /* c3eb4: cmp x15, x17 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 17));
  /* c3eb8: orr v2.16b, v4.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] | (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] | (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] | (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] | (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] | (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] | (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] | (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] | (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] | (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] | (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] | (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] | (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] | (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] | (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] | (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] | (c)->q[7].u8[15];
    (c)->q[2] = _t; }
  /* c3ebc: orr v3.16b, v5.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] | (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] | (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] | (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] | (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] | (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] | (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] | (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] | (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] | (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] | (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] | (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] | (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] | (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] | (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] | (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] | (c)->q[16].u8[15];
    (c)->q[3] = _t; }
  /* c3ec0: orr v0.16b, v0.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[0].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[0].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[0].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[0].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[0].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[0].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[0].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[0].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[0].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[0].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[0].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[0].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[0].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[0].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[0].u8[15] | (c)->q[1].u8[15];
    (c)->q[0] = _t; }
  /* c3ec4: orr v1.16b, v2.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[2].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[2].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[2].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[2].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[2].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[2].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[2].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[2].u8[15] | (c)->q[3].u8[15];
    (c)->q[1] = _t; }
  /* c3ec8: orr v0.16b, v0.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[0].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[0].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[0].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[0].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[0].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[0].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[0].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[0].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[0].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[0].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[0].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[0].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[0].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[0].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[0].u8[15] | (c)->q[1].u8[15];
    (c)->q[0] = _t; }
  /* c3ecc: ext v1.16b, v0.16b, v0.16b, #8 */
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
    (c)->q[1] = _t; }
  /* c3ed0: orr v0.8b, v0.8b, v1.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[0].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[0].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[0].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[0].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[0].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[0].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[0].u8[7] | (c)->q[1].u8[7];
    (c)->q[0] = _t; }
  /* c3ed4: fmov x14, d0 */
  ARC_X_W(c, 14, ARC_DU_R(c, 0));
  /* c3ed8: b.eq #0xc3fac */
  if (ARC_COND(c, 0)) goto L_c3fac;
  /* c3edc: tst x15, #0xc */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 15) & UINT64_C(12)));
  /* c3ee0: b.eq #0xc3f88 */
  if (ARC_COND(c, 0)) goto L_c3f88;
L_c3ee4:;
  /* c3ee4: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* c3ee8: mov x3, x17 */
  ARC_X_W(c, 3, ARC_X_R(c, 17));
  /* c3eec: dup v1.4h, w8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (ARC_W_R(c, 8));
    _t.u16[1] = (ARC_W_R(c, 8));
    _t.u16[2] = (ARC_W_R(c, 8));
    _t.u16[3] = (ARC_W_R(c, 8));
    (c)->q[1] = _t; }
  /* c3ef0: dup v4.2d, x17 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 17));
    _t.u64[1] = (ARC_X_R(c, 17));
    (c)->q[4] = _t; }
  /* c3ef4: adrp x17, #0x52000 */
  ARC_X_W(c, 17, (arc_image_bases[1] + UINT64_C(335872)));
  /* c3ef8: movi v2.2d, #0000000000000000 */
  arc_v_clear(c, 2);
  /* c3efc: ldr q3, [x17, #0xc10] */
  arc_q_w(c, 3, arc_ld64((ARC_X_R(c, 17) + INT64_C(3088))), arc_ld64((ARC_X_R(c, 17) + INT64_C(3088)) + 8));
  /* c3f00: adrp x17, #0x52000 */
  ARC_X_W(c, 17, (arc_image_bases[1] + UINT64_C(335872)));
  /* c3f04: ldr q5, [x17, #0xa80] */
  arc_q_w(c, 5, arc_ld64((ARC_X_R(c, 17) + INT64_C(2688))), arc_ld64((ARC_X_R(c, 17) + INT64_C(2688)) + 8));
  /* c3f08: and x17, x15, #0x7ffffffffffffffc */
  ARC_X_W(c, 17, (ARC_X_R(c, 15) & UINT64_C(9223372036854775804)));
  /* c3f0c: mov v0.d[0], x14 */
  (c)->q[0].u64[0] = (ARC_X_R(c, 14));
  /* c3f10: orr v3.16b, v4.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* c3f14: bic v1.4h, #0xff, lsl #8 */
  { Arm64Vec _t = (c)->q[1];
    _t.u16[0] = (uint16_t)(_t.u16[0] & UINT64_C(255));
    _t.u16[1] = (uint16_t)(_t.u16[1] & UINT64_C(255));
    _t.u16[2] = (uint16_t)(_t.u16[2] & UINT64_C(255));
    _t.u16[3] = (uint16_t)(_t.u16[3] & UINT64_C(255));
    _t.u64[1] = 0;
    (c)->q[1] = _t; }
  /* c3f18: orr v4.16b, v4.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] | (c)->q[5].u8[15];
    (c)->q[4] = _t; }
  /* c3f1c: add x1, x11, x17 */
  ARC_X_W(c, 1, (ARC_X_R(c, 11) + ARC_X_R(c, 17)));
L_c3f20:;
  /* c3f20: ldr s5, [x11, x3] */
  arc_su_w(c, 5, arc_ld32((ARC_X_R(c, 11) + ARC_X_R(c, 3))));
  /* c3f24: dup v6.2d, x5 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 5));
    _t.u64[1] = (ARC_X_R(c, 5));
    (c)->q[6] = _t; }
  /* c3f28: add x3, x3, #4 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(4)));
  /* c3f2c: cmp x17, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 17), ARC_X_R(c, 3));
  /* c3f30: ushll v5.8h, v5.8b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((uint16_t)((c)->q[5].u8[0]) << 0);
    _t.u16[1] = (uint16_t)((uint16_t)((c)->q[5].u8[1]) << 0);
    _t.u16[2] = (uint16_t)((uint16_t)((c)->q[5].u8[2]) << 0);
    _t.u16[3] = (uint16_t)((uint16_t)((c)->q[5].u8[3]) << 0);
    _t.u16[4] = (uint16_t)((uint16_t)((c)->q[5].u8[4]) << 0);
    _t.u16[5] = (uint16_t)((uint16_t)((c)->q[5].u8[5]) << 0);
    _t.u16[6] = (uint16_t)((uint16_t)((c)->q[5].u8[6]) << 0);
    _t.u16[7] = (uint16_t)((uint16_t)((c)->q[5].u8[7]) << 0);
    (c)->q[5] = _t; }
  /* c3f34: cmhs v5.4h, v5.4h, v1.4h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[5].u16[0] >= (c)->q[1].u16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[5].u16[1] >= (c)->q[1].u16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[5].u16[2] >= (c)->q[1].u16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[5].u16[3] >= (c)->q[1].u16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[5] = _t; }
  /* c3f38: ushll v5.4s, v5.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[5].u16[0]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[5].u16[1]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[5].u16[2]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[5].u16[3]) << 0);
    (c)->q[5] = _t; }
  /* c3f3c: ushll2 v7.2d, v5.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[3]) << 0);
    (c)->q[7] = _t; }
  /* c3f40: ushll v5.2d, v5.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[1]) << 0);
    (c)->q[5] = _t; }
  /* c3f44: and v7.16b, v7.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] & (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] & (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] & (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] & (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] & (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] & (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] & (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] & (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] & (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] & (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] & (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] & (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] & (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] & (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] & (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] & (c)->q[6].u8[15];
    (c)->q[7] = _t; }
  /* c3f48: and v5.16b, v5.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] & (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] & (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] & (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] & (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] & (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] & (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] & (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] & (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] & (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] & (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] & (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] & (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] & (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] & (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] & (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] & (c)->q[6].u8[15];
    (c)->q[5] = _t; }
  /* c3f4c: ushl v5.2d, v5.2d, v4.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[5].u64[0], (int8_t)(c)->q[4].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[5].u64[1], (int8_t)(c)->q[4].u64[1]);
    (c)->q[5] = _t; }
  /* c3f50: ushl v6.2d, v7.2d, v3.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[7].u64[0], (int8_t)(c)->q[3].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[7].u64[1], (int8_t)(c)->q[3].u64[1]);
    (c)->q[6] = _t; }
  /* c3f54: dup v7.2d, x21 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 21));
    _t.u64[1] = (ARC_X_R(c, 21));
    (c)->q[7] = _t; }
  /* c3f58: orr v2.16b, v6.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[6].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[6].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[6].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[6].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[6].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[6].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[6].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[6].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[6].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[6].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[6].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[6].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[6].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[6].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[6].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* c3f5c: orr v0.16b, v5.16b, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] | (c)->q[0].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] | (c)->q[0].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] | (c)->q[0].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] | (c)->q[0].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] | (c)->q[0].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] | (c)->q[0].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] | (c)->q[0].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] | (c)->q[0].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] | (c)->q[0].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] | (c)->q[0].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] | (c)->q[0].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] | (c)->q[0].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] | (c)->q[0].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] | (c)->q[0].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] | (c)->q[0].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] | (c)->q[0].u8[15];
    (c)->q[0] = _t; }
  /* c3f60: add v3.2d, v3.2d, v7.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[7].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[7].u64[1];
    (c)->q[3] = _t; }
  /* c3f64: add v4.2d, v4.2d, v7.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[4].u64[0] + (c)->q[7].u64[0];
    _t.u64[1] = (c)->q[4].u64[1] + (c)->q[7].u64[1];
    (c)->q[4] = _t; }
  /* c3f68: b.ne #0xc3f20 */
  if (ARC_COND(c, 1)) goto L_c3f20;
  /* c3f6c: orr v0.16b, v0.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[0].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[0].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[0].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[0].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[0].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[0].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[0].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[0].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[0].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[0].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[0].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[0].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[0].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[0].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[0].u8[15] | (c)->q[2].u8[15];
    (c)->q[0] = _t; }
  /* c3f70: cmp x15, x17 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 17));
  /* c3f74: ext v1.16b, v0.16b, v0.16b, #8 */
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
    (c)->q[1] = _t; }
  /* c3f78: orr v0.8b, v0.8b, v1.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[0].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[0].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[0].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[0].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[0].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[0].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[0].u8[7] | (c)->q[1].u8[7];
    (c)->q[0] = _t; }
  /* c3f7c: fmov x14, d0 */
  ARC_X_W(c, 14, ARC_DU_R(c, 0));
  /* c3f80: b.ne #0xc3f8c */
  if (ARC_COND(c, 1)) goto L_c3f8c;
  /* c3f84: b #0xc3fac */
  goto L_c3fac;
L_c3f88:;
  /* c3f88: add x1, x11, x17 */
  ARC_X_W(c, 1, (ARC_X_R(c, 11) + ARC_X_R(c, 17)));
L_c3f8c:;
  /* c3f8c: ldrb w3, [x1], #1 */
  { const uint64_t _a = ARC_X_R(c, 1);
    ARC_X_W(c, 1, ARC_X_R(c, 1) + INT64_C(1));
    ARC_W_W(c, 3, arc_ld8(_a));
  }
  /* c3f90: cmp w3, w8, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 3), ((uint64_t)(uint8_t)(ARC_W_R(c, 8))));
  /* c3f94: cset w3, hs */
  ARC_W_W(c, 3, (ARC_COND(c, 2) ? 1 : 0));
  /* c3f98: lsl x3, x3, x17 */
  ARC_X_W(c, 3, ((uint64_t)(ARC_X_R(c, 3)) << ((ARC_X_R(c, 17)) & 63)));
  /* c3f9c: add x17, x17, #1 */
  ARC_X_W(c, 17, (ARC_X_R(c, 17) + UINT64_C(1)));
  /* c3fa0: cmp x15, x17 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 17));
  /* c3fa4: orr x14, x3, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 3) | ARC_X_R(c, 14)));
  /* c3fa8: b.ne #0xc3f8c */
  if (ARC_COND(c, 1)) goto L_c3f8c;
L_c3fac:;
  /* c3fac: mov x17, x15 */
  ARC_X_W(c, 17, ARC_X_R(c, 15));
  /* c3fb0: mov x15, x0 */
  ARC_X_W(c, 15, ARC_X_R(c, 0));
  /* c3fb4: cbz w16, #0xc4240 */
  if ((ARC_W_R(c, 16)) == 0) goto L_c4240;
L_c3fb8:;
  /* c3fb8: cmp x15, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(1));
  /* c3fbc: b.lt #0xc4240 */
  if (ARC_COND(c, 11)) goto L_c4240;
  /* c3fc0: cmp x15, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(4));
  /* c3fc4: b.hs #0xc3fd8 */
  if (ARC_COND(c, 2)) goto L_c3fd8;
  /* c3fc8: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* c3fcc: mov x16, xzr */
  ARC_X_W(c, 16, ARC_X_R(c, 31));
  /* c3fd0: mov x0, x12 */
  ARC_X_W(c, 0, ARC_X_R(c, 12));
  /* c3fd4: b #0xc4220 */
  goto L_c4220;
L_c3fd8:;
  /* c3fd8: cmp x15, #0x10 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(16));
  /* c3fdc: b.hs #0xc3fec */
  if (ARC_COND(c, 2)) goto L_c3fec;
  /* c3fe0: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* c3fe4: mov x16, xzr */
  ARC_X_W(c, 16, ARC_X_R(c, 31));
  /* c3fe8: b #0xc416c */
  goto L_c416c;
L_c3fec:;
  /* c3fec: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* c3ff0: movi v3.2d, #0000000000000000 */
  arc_v_clear(c, 3);
  /* c3ff4: movi v4.2d, #0000000000000000 */
  arc_v_clear(c, 4);
  /* c3ff8: ldr q0, [x13, #0xa70] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 13) + INT64_C(2672))), arc_ld64((ARC_X_R(c, 13) + INT64_C(2672)) + 8));
  /* c3ffc: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* c4000: movi v6.2d, #0000000000000000 */
  arc_v_clear(c, 6);
  /* c4004: ldr q1, [x13, #0xc60] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 13) + INT64_C(3168))), arc_ld64((ARC_X_R(c, 13) + INT64_C(3168)) + 8));
  /* c4008: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* c400c: movi v5.2d, #0000000000000000 */
  arc_v_clear(c, 5);
  /* c4010: ldr q2, [x13, #0xa10] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 13) + INT64_C(2576))), arc_ld64((ARC_X_R(c, 13) + INT64_C(2576)) + 8));
  /* c4014: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* c4018: movi v17.2d, #0000000000000000 */
  arc_v_clear(c, 17);
  /* c401c: ldr q20, [x13, #0xc00] */
  arc_q_w(c, 20, arc_ld64((ARC_X_R(c, 13) + INT64_C(3072))), arc_ld64((ARC_X_R(c, 13) + INT64_C(3072)) + 8));
  /* c4020: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* c4024: movi v7.2d, #0000000000000000 */
  arc_v_clear(c, 7);
  /* c4028: ldr q21, [x13, #0xcc0] */
  arc_q_w(c, 21, arc_ld64((ARC_X_R(c, 13) + INT64_C(3264))), arc_ld64((ARC_X_R(c, 13) + INT64_C(3264)) + 8));
  /* c402c: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* c4030: movi v18.2d, #0000000000000000 */
  arc_v_clear(c, 18);
  /* c4034: movi v16.2d, #0000000000000000 */
  arc_v_clear(c, 16);
  /* c4038: ldr q22, [x13, #0xc70] */
  arc_q_w(c, 22, arc_ld64((ARC_X_R(c, 13) + INT64_C(3184))), arc_ld64((ARC_X_R(c, 13) + INT64_C(3184)) + 8));
  /* c403c: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* c4040: dup v19.16b, w8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (ARC_W_R(c, 8));
    _t.u8[1] = (ARC_W_R(c, 8));
    _t.u8[2] = (ARC_W_R(c, 8));
    _t.u8[3] = (ARC_W_R(c, 8));
    _t.u8[4] = (ARC_W_R(c, 8));
    _t.u8[5] = (ARC_W_R(c, 8));
    _t.u8[6] = (ARC_W_R(c, 8));
    _t.u8[7] = (ARC_W_R(c, 8));
    _t.u8[8] = (ARC_W_R(c, 8));
    _t.u8[9] = (ARC_W_R(c, 8));
    _t.u8[10] = (ARC_W_R(c, 8));
    _t.u8[11] = (ARC_W_R(c, 8));
    _t.u8[12] = (ARC_W_R(c, 8));
    _t.u8[13] = (ARC_W_R(c, 8));
    _t.u8[14] = (ARC_W_R(c, 8));
    _t.u8[15] = (ARC_W_R(c, 8));
    (c)->q[19] = _t; }
  /* c4044: ldr q23, [x13, #0xc10] */
  arc_q_w(c, 23, arc_ld64((ARC_X_R(c, 13) + INT64_C(3088))), arc_ld64((ARC_X_R(c, 13) + INT64_C(3088)) + 8));
  /* c4048: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* c404c: and x16, x15, #0x7ffffffffffffff0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 15) & UINT64_C(9223372036854775792)));
  /* c4050: ldr q24, [x13, #0xa80] */
  arc_q_w(c, 24, arc_ld64((ARC_X_R(c, 13) + INT64_C(2688))), arc_ld64((ARC_X_R(c, 13) + INT64_C(2688)) + 8));
  /* c4054: sub x13, x12, #0xf */
  ARC_X_W(c, 13, (ARC_X_R(c, 12) - UINT64_C(15)));
  /* c4058: mov x0, x16 */
  ARC_X_W(c, 0, ARC_X_R(c, 16));
L_c405c:;
  /* c405c: ldr q25, [x13], #0xfffffffffffffff0 */
  arc_q_w(c, 25, arc_ld64(ARC_X_R(c, 13)), arc_ld64(ARC_X_R(c, 13) + 8));
  ARC_X_W(c, 13, ARC_X_R(c, 13) + INT64_C(-16));
  /* c4060: dup v29.2d, x5 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 5));
    _t.u64[1] = (ARC_X_R(c, 5));
    (c)->q[29] = _t; }
  /* c4064: subs x0, x0, #0x10 */
  ARC_X_W(c, 0, arc_sub64(c, ARC_X_R(c, 0), UINT64_C(16)));
  /* c4068: rev64 v25.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[7];
    _t.u8[1] = (c)->q[25].u8[6];
    _t.u8[2] = (c)->q[25].u8[5];
    _t.u8[3] = (c)->q[25].u8[4];
    _t.u8[4] = (c)->q[25].u8[3];
    _t.u8[5] = (c)->q[25].u8[2];
    _t.u8[6] = (c)->q[25].u8[1];
    _t.u8[7] = (c)->q[25].u8[0];
    _t.u8[8] = (c)->q[25].u8[15];
    _t.u8[9] = (c)->q[25].u8[14];
    _t.u8[10] = (c)->q[25].u8[13];
    _t.u8[11] = (c)->q[25].u8[12];
    _t.u8[12] = (c)->q[25].u8[11];
    _t.u8[13] = (c)->q[25].u8[10];
    _t.u8[14] = (c)->q[25].u8[9];
    _t.u8[15] = (c)->q[25].u8[8];
    (c)->q[25] = _t; }
  /* c406c: ext v25.16b, v25.16b, v25.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[8];
    _t.u8[1] = (c)->q[25].u8[9];
    _t.u8[2] = (c)->q[25].u8[10];
    _t.u8[3] = (c)->q[25].u8[11];
    _t.u8[4] = (c)->q[25].u8[12];
    _t.u8[5] = (c)->q[25].u8[13];
    _t.u8[6] = (c)->q[25].u8[14];
    _t.u8[7] = (c)->q[25].u8[15];
    _t.u8[8] = (c)->q[25].u8[0];
    _t.u8[9] = (c)->q[25].u8[1];
    _t.u8[10] = (c)->q[25].u8[2];
    _t.u8[11] = (c)->q[25].u8[3];
    _t.u8[12] = (c)->q[25].u8[4];
    _t.u8[13] = (c)->q[25].u8[5];
    _t.u8[14] = (c)->q[25].u8[6];
    _t.u8[15] = (c)->q[25].u8[7];
    (c)->q[25] = _t; }
  /* c4070: cmhi v25.16b, v19.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[19].u8[0] > (c)->q[25].u8[0]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[1] = ((c)->q[19].u8[1] > (c)->q[25].u8[1]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[2] = ((c)->q[19].u8[2] > (c)->q[25].u8[2]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[3] = ((c)->q[19].u8[3] > (c)->q[25].u8[3]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[4] = ((c)->q[19].u8[4] > (c)->q[25].u8[4]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[5] = ((c)->q[19].u8[5] > (c)->q[25].u8[5]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[6] = ((c)->q[19].u8[6] > (c)->q[25].u8[6]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[7] = ((c)->q[19].u8[7] > (c)->q[25].u8[7]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[8] = ((c)->q[19].u8[8] > (c)->q[25].u8[8]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[9] = ((c)->q[19].u8[9] > (c)->q[25].u8[9]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[10] = ((c)->q[19].u8[10] > (c)->q[25].u8[10]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[11] = ((c)->q[19].u8[11] > (c)->q[25].u8[11]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[12] = ((c)->q[19].u8[12] > (c)->q[25].u8[12]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[13] = ((c)->q[19].u8[13] > (c)->q[25].u8[13]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[14] = ((c)->q[19].u8[14] > (c)->q[25].u8[14]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[15] = ((c)->q[19].u8[15] > (c)->q[25].u8[15]) ? (uint8_t)~(uint8_t)0 : 0;
    (c)->q[25] = _t; }
  /* c4074: ushll v26.8h, v25.8b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((uint16_t)((c)->q[25].u8[0]) << 0);
    _t.u16[1] = (uint16_t)((uint16_t)((c)->q[25].u8[1]) << 0);
    _t.u16[2] = (uint16_t)((uint16_t)((c)->q[25].u8[2]) << 0);
    _t.u16[3] = (uint16_t)((uint16_t)((c)->q[25].u8[3]) << 0);
    _t.u16[4] = (uint16_t)((uint16_t)((c)->q[25].u8[4]) << 0);
    _t.u16[5] = (uint16_t)((uint16_t)((c)->q[25].u8[5]) << 0);
    _t.u16[6] = (uint16_t)((uint16_t)((c)->q[25].u8[6]) << 0);
    _t.u16[7] = (uint16_t)((uint16_t)((c)->q[25].u8[7]) << 0);
    (c)->q[26] = _t; }
  /* c4078: ushll2 v25.8h, v25.16b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((uint16_t)((c)->q[25].u8[8]) << 0);
    _t.u16[1] = (uint16_t)((uint16_t)((c)->q[25].u8[9]) << 0);
    _t.u16[2] = (uint16_t)((uint16_t)((c)->q[25].u8[10]) << 0);
    _t.u16[3] = (uint16_t)((uint16_t)((c)->q[25].u8[11]) << 0);
    _t.u16[4] = (uint16_t)((uint16_t)((c)->q[25].u8[12]) << 0);
    _t.u16[5] = (uint16_t)((uint16_t)((c)->q[25].u8[13]) << 0);
    _t.u16[6] = (uint16_t)((uint16_t)((c)->q[25].u8[14]) << 0);
    _t.u16[7] = (uint16_t)((uint16_t)((c)->q[25].u8[15]) << 0);
    (c)->q[25] = _t; }
  /* c407c: ushll2 v27.4s, v26.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[26].u16[4]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[26].u16[5]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[26].u16[6]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[26].u16[7]) << 0);
    (c)->q[27] = _t; }
  /* c4080: ushll v26.4s, v26.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[26].u16[0]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[26].u16[1]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[26].u16[2]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[26].u16[3]) << 0);
    (c)->q[26] = _t; }
  /* c4084: ushll2 v28.4s, v25.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[25].u16[4]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[25].u16[5]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[25].u16[6]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[25].u16[7]) << 0);
    (c)->q[28] = _t; }
  /* c4088: ushll v25.4s, v25.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[25].u16[0]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[25].u16[1]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[25].u16[2]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[25].u16[3]) << 0);
    (c)->q[25] = _t; }
  /* c408c: ushll v30.2d, v27.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[27].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[27].u32[1]) << 0);
    (c)->q[30] = _t; }
  /* c4090: ushll2 v31.2d, v26.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[26].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[26].u32[3]) << 0);
    (c)->q[31] = _t; }
  /* c4094: ushll v26.2d, v26.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[26].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[26].u32[1]) << 0);
    (c)->q[26] = _t; }
  /* c4098: ushll2 v8.2d, v28.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[28].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[28].u32[3]) << 0);
    (c)->q[8] = _t; }
  /* c409c: ushll v28.2d, v28.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[28].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[28].u32[1]) << 0);
    (c)->q[28] = _t; }
  /* c40a0: ushll v9.2d, v25.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[25].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[25].u32[1]) << 0);
    (c)->q[9] = _t; }
  /* c40a4: ushll2 v25.2d, v25.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[25].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[25].u32[3]) << 0);
    (c)->q[25] = _t; }
  /* c40a8: ushll2 v27.2d, v27.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[27].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[27].u32[3]) << 0);
    (c)->q[27] = _t; }
  /* c40ac: and v30.16b, v30.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[30].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[30].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[30].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[30].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[30].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[30].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[30].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[30].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[30].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[30].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[30].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[30].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[30].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[30].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[30].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[30].u8[15] & (c)->q[29].u8[15];
    (c)->q[30] = _t; }
  /* c40b0: and v31.16b, v31.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[31].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[31].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[31].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[31].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[31].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[31].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[31].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[31].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[31].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[31].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[31].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[31].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[31].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[31].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[31].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[31].u8[15] & (c)->q[29].u8[15];
    (c)->q[31] = _t; }
  /* c40b4: and v26.16b, v26.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[26].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[26].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[26].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[26].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[26].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[26].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[26].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[26].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[26].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[26].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[26].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[26].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[26].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[26].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[26].u8[15] & (c)->q[29].u8[15];
    (c)->q[26] = _t; }
  /* c40b8: and v8.16b, v8.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[8].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[8].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[8].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[8].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[8].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[8].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[8].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[8].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[8].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[8].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[8].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[8].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[8].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[8].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[8].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[8].u8[15] & (c)->q[29].u8[15];
    (c)->q[8] = _t; }
  /* c40bc: and v28.16b, v28.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[28].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[28].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[28].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[28].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[28].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[28].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[28].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[28].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[28].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[28].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[28].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[28].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[28].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[28].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[28].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[28].u8[15] & (c)->q[29].u8[15];
    (c)->q[28] = _t; }
  /* c40c0: and v9.16b, v9.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[9].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[9].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[9].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[9].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[9].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[9].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[9].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[9].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[9].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[9].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[9].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[9].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[9].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[9].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[9].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[9].u8[15] & (c)->q[29].u8[15];
    (c)->q[9] = _t; }
  /* c40c4: and v25.16b, v25.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[25].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[25].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[25].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[25].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[25].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[25].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[25].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[25].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[25].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[25].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[25].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[25].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[25].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[25].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[25].u8[15] & (c)->q[29].u8[15];
    (c)->q[25] = _t; }
  /* c40c8: and v27.16b, v27.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[27].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[27].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[27].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[27].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[27].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[27].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[27].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[27].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[27].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[27].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[27].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[27].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[27].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[27].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[27].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[27].u8[15] & (c)->q[29].u8[15];
    (c)->q[27] = _t; }
  /* c40cc: dup v29.2d, x28 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 28));
    _t.u64[1] = (ARC_X_R(c, 28));
    (c)->q[29] = _t; }
  /* c40d0: ushl v26.2d, v26.2d, v24.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[26].u64[0], (int8_t)(c)->q[24].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[26].u64[1], (int8_t)(c)->q[24].u64[1]);
    (c)->q[26] = _t; }
  /* c40d4: ushl v31.2d, v31.2d, v23.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[31].u64[0], (int8_t)(c)->q[23].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[31].u64[1], (int8_t)(c)->q[23].u64[1]);
    (c)->q[31] = _t; }
  /* c40d8: ushl v30.2d, v30.2d, v22.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[30].u64[0], (int8_t)(c)->q[22].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[30].u64[1], (int8_t)(c)->q[22].u64[1]);
    (c)->q[30] = _t; }
  /* c40dc: ushl v9.2d, v9.2d, v20.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[9].u64[0], (int8_t)(c)->q[20].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[9].u64[1], (int8_t)(c)->q[20].u64[1]);
    (c)->q[9] = _t; }
  /* c40e0: ushl v28.2d, v28.2d, v1.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[28].u64[0], (int8_t)(c)->q[1].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[28].u64[1], (int8_t)(c)->q[1].u64[1]);
    (c)->q[28] = _t; }
  /* c40e4: ushl v8.2d, v8.2d, v0.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[8].u64[0], (int8_t)(c)->q[0].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[8].u64[1], (int8_t)(c)->q[0].u64[1]);
    (c)->q[8] = _t; }
  /* c40e8: ushl v27.2d, v27.2d, v21.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[27].u64[0], (int8_t)(c)->q[21].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[27].u64[1], (int8_t)(c)->q[21].u64[1]);
    (c)->q[27] = _t; }
  /* c40ec: ushl v25.2d, v25.2d, v2.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[25].u64[0], (int8_t)(c)->q[2].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[25].u64[1], (int8_t)(c)->q[2].u64[1]);
    (c)->q[25] = _t; }
  /* c40f0: add v22.2d, v22.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[22].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[22].u64[1] + (c)->q[29].u64[1];
    (c)->q[22] = _t; }
  /* c40f4: add v23.2d, v23.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[23].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[23].u64[1] + (c)->q[29].u64[1];
    (c)->q[23] = _t; }
  /* c40f8: add v24.2d, v24.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[24].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[24].u64[1] + (c)->q[29].u64[1];
    (c)->q[24] = _t; }
  /* c40fc: add v21.2d, v21.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[21].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[21].u64[1] + (c)->q[29].u64[1];
    (c)->q[21] = _t; }
  /* c4100: add v20.2d, v20.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[20].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[20].u64[1] + (c)->q[29].u64[1];
    (c)->q[20] = _t; }
  /* c4104: orr v16.16b, v8.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[8].u8[0] | (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[8].u8[1] | (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[8].u8[2] | (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[8].u8[3] | (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[8].u8[4] | (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[8].u8[5] | (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[8].u8[6] | (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[8].u8[7] | (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[8].u8[8] | (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[8].u8[9] | (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[8].u8[10] | (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[8].u8[11] | (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[8].u8[12] | (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[8].u8[13] | (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[8].u8[14] | (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[8].u8[15] | (c)->q[16].u8[15];
    (c)->q[16] = _t; }
  /* c4108: orr v18.16b, v28.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[28].u8[0] | (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[28].u8[1] | (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[28].u8[2] | (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[28].u8[3] | (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[28].u8[4] | (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[28].u8[5] | (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[28].u8[6] | (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[28].u8[7] | (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[28].u8[8] | (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[28].u8[9] | (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[28].u8[10] | (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[28].u8[11] | (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[28].u8[12] | (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[28].u8[13] | (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[28].u8[14] | (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[28].u8[15] | (c)->q[18].u8[15];
    (c)->q[18] = _t; }
  /* c410c: orr v7.16b, v25.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[0] | (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[25].u8[1] | (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[25].u8[2] | (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[25].u8[3] | (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[25].u8[4] | (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[25].u8[5] | (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[25].u8[6] | (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[25].u8[7] | (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[25].u8[8] | (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[25].u8[9] | (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[25].u8[10] | (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[25].u8[11] | (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[25].u8[12] | (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[25].u8[13] | (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[25].u8[14] | (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[25].u8[15] | (c)->q[7].u8[15];
    (c)->q[7] = _t; }
  /* c4110: orr v5.16b, v27.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[27].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[27].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[27].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[27].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[27].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[27].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[27].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[27].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[27].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[27].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[27].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[27].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[27].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[27].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[27].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[27].u8[15] | (c)->q[5].u8[15];
    (c)->q[5] = _t; }
  /* c4114: orr v17.16b, v9.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[9].u8[0] | (c)->q[17].u8[0];
    _t.u8[1] = (c)->q[9].u8[1] | (c)->q[17].u8[1];
    _t.u8[2] = (c)->q[9].u8[2] | (c)->q[17].u8[2];
    _t.u8[3] = (c)->q[9].u8[3] | (c)->q[17].u8[3];
    _t.u8[4] = (c)->q[9].u8[4] | (c)->q[17].u8[4];
    _t.u8[5] = (c)->q[9].u8[5] | (c)->q[17].u8[5];
    _t.u8[6] = (c)->q[9].u8[6] | (c)->q[17].u8[6];
    _t.u8[7] = (c)->q[9].u8[7] | (c)->q[17].u8[7];
    _t.u8[8] = (c)->q[9].u8[8] | (c)->q[17].u8[8];
    _t.u8[9] = (c)->q[9].u8[9] | (c)->q[17].u8[9];
    _t.u8[10] = (c)->q[9].u8[10] | (c)->q[17].u8[10];
    _t.u8[11] = (c)->q[9].u8[11] | (c)->q[17].u8[11];
    _t.u8[12] = (c)->q[9].u8[12] | (c)->q[17].u8[12];
    _t.u8[13] = (c)->q[9].u8[13] | (c)->q[17].u8[13];
    _t.u8[14] = (c)->q[9].u8[14] | (c)->q[17].u8[14];
    _t.u8[15] = (c)->q[9].u8[15] | (c)->q[17].u8[15];
    (c)->q[17] = _t; }
  /* c4118: orr v6.16b, v30.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[30].u8[0] | (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[30].u8[1] | (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[30].u8[2] | (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[30].u8[3] | (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[30].u8[4] | (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[30].u8[5] | (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[30].u8[6] | (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[30].u8[7] | (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[30].u8[8] | (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[30].u8[9] | (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[30].u8[10] | (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[30].u8[11] | (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[30].u8[12] | (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[30].u8[13] | (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[30].u8[14] | (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[30].u8[15] | (c)->q[6].u8[15];
    (c)->q[6] = _t; }
  /* c411c: orr v4.16b, v31.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[31].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[31].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[31].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[31].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[31].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[31].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[31].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[31].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[31].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[31].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[31].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[31].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[31].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[31].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[31].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[31].u8[15] | (c)->q[4].u8[15];
    (c)->q[4] = _t; }
  /* c4120: orr v3.16b, v26.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[26].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[26].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[26].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[26].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[26].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[26].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[26].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[26].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[26].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[26].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[26].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[26].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[26].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[26].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[26].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* c4124: add v2.2d, v2.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[2].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[2].u64[1] + (c)->q[29].u64[1];
    (c)->q[2] = _t; }
  /* c4128: add v1.2d, v1.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[1].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[1].u64[1] + (c)->q[29].u64[1];
    (c)->q[1] = _t; }
  /* c412c: add v0.2d, v0.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[0].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[0].u64[1] + (c)->q[29].u64[1];
    (c)->q[0] = _t; }
  /* c4130: b.ne #0xc405c */
  if (ARC_COND(c, 1)) goto L_c405c;
  /* c4134: orr v0.16b, v3.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[3].u8[0] | (c)->q[17].u8[0];
    _t.u8[1] = (c)->q[3].u8[1] | (c)->q[17].u8[1];
    _t.u8[2] = (c)->q[3].u8[2] | (c)->q[17].u8[2];
    _t.u8[3] = (c)->q[3].u8[3] | (c)->q[17].u8[3];
    _t.u8[4] = (c)->q[3].u8[4] | (c)->q[17].u8[4];
    _t.u8[5] = (c)->q[3].u8[5] | (c)->q[17].u8[5];
    _t.u8[6] = (c)->q[3].u8[6] | (c)->q[17].u8[6];
    _t.u8[7] = (c)->q[3].u8[7] | (c)->q[17].u8[7];
    _t.u8[8] = (c)->q[3].u8[8] | (c)->q[17].u8[8];
    _t.u8[9] = (c)->q[3].u8[9] | (c)->q[17].u8[9];
    _t.u8[10] = (c)->q[3].u8[10] | (c)->q[17].u8[10];
    _t.u8[11] = (c)->q[3].u8[11] | (c)->q[17].u8[11];
    _t.u8[12] = (c)->q[3].u8[12] | (c)->q[17].u8[12];
    _t.u8[13] = (c)->q[3].u8[13] | (c)->q[17].u8[13];
    _t.u8[14] = (c)->q[3].u8[14] | (c)->q[17].u8[14];
    _t.u8[15] = (c)->q[3].u8[15] | (c)->q[17].u8[15];
    (c)->q[0] = _t; }
  /* c4138: orr v1.16b, v6.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] | (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[6].u8[1] | (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[6].u8[2] | (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[6].u8[3] | (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[6].u8[4] | (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[6].u8[5] | (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[6].u8[6] | (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[6].u8[7] | (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[6].u8[8] | (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[6].u8[9] | (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[6].u8[10] | (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[6].u8[11] | (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[6].u8[12] | (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[6].u8[13] | (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[6].u8[14] | (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[6].u8[15] | (c)->q[18].u8[15];
    (c)->q[1] = _t; }
  /* c413c: cmp x15, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 16));
  /* c4140: orr v2.16b, v4.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] | (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] | (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] | (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] | (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] | (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] | (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] | (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] | (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] | (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] | (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] | (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] | (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] | (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] | (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] | (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] | (c)->q[7].u8[15];
    (c)->q[2] = _t; }
  /* c4144: orr v3.16b, v5.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] | (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] | (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] | (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] | (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] | (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] | (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] | (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] | (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] | (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] | (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] | (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] | (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] | (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] | (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] | (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] | (c)->q[16].u8[15];
    (c)->q[3] = _t; }
  /* c4148: orr v0.16b, v0.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[0].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[0].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[0].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[0].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[0].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[0].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[0].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[0].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[0].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[0].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[0].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[0].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[0].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[0].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[0].u8[15] | (c)->q[1].u8[15];
    (c)->q[0] = _t; }
  /* c414c: orr v1.16b, v2.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[2].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[2].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[2].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[2].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[2].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[2].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[2].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[2].u8[15] | (c)->q[3].u8[15];
    (c)->q[1] = _t; }
  /* c4150: orr v0.16b, v0.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[0].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[0].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[0].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[0].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[0].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[0].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[0].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[0].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[0].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[0].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[0].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[0].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[0].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[0].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[0].u8[15] | (c)->q[1].u8[15];
    (c)->q[0] = _t; }
  /* c4154: ext v1.16b, v0.16b, v0.16b, #8 */
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
    (c)->q[1] = _t; }
  /* c4158: orr v0.8b, v0.8b, v1.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[0].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[0].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[0].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[0].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[0].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[0].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[0].u8[7] | (c)->q[1].u8[7];
    (c)->q[0] = _t; }
  /* c415c: fmov x13, d0 */
  ARC_X_W(c, 13, ARC_DU_R(c, 0));
  /* c4160: b.eq #0xc4240 */
  if (ARC_COND(c, 0)) goto L_c4240;
  /* c4164: tst x15, #0xc */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 15) & UINT64_C(12)));
  /* c4168: b.eq #0xc421c */
  if (ARC_COND(c, 0)) goto L_c421c;
L_c416c:;
  /* c416c: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* c4170: mov x1, x16 */
  ARC_X_W(c, 1, ARC_X_R(c, 16));
  /* c4174: dup v1.4h, w8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (ARC_W_R(c, 8));
    _t.u16[1] = (ARC_W_R(c, 8));
    _t.u16[2] = (ARC_W_R(c, 8));
    _t.u16[3] = (ARC_W_R(c, 8));
    (c)->q[1] = _t; }
  /* c4178: dup v4.2d, x16 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 16));
    _t.u64[1] = (ARC_X_R(c, 16));
    (c)->q[4] = _t; }
  /* c417c: adrp x16, #0x52000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(335872)));
  /* c4180: movi v2.2d, #0000000000000000 */
  arc_v_clear(c, 2);
  /* c4184: ldr q3, [x16, #0xc10] */
  arc_q_w(c, 3, arc_ld64((ARC_X_R(c, 16) + INT64_C(3088))), arc_ld64((ARC_X_R(c, 16) + INT64_C(3088)) + 8));
  /* c4188: adrp x16, #0x52000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(335872)));
  /* c418c: sub x3, x12, x1 */
  ARC_X_W(c, 3, (ARC_X_R(c, 12) - ARC_X_R(c, 1)));
  /* c4190: ldr q5, [x16, #0xa80] */
  arc_q_w(c, 5, arc_ld64((ARC_X_R(c, 16) + INT64_C(2688))), arc_ld64((ARC_X_R(c, 16) + INT64_C(2688)) + 8));
  /* c4194: and x16, x15, #0x7ffffffffffffffc */
  ARC_X_W(c, 16, (ARC_X_R(c, 15) & UINT64_C(9223372036854775804)));
  /* c4198: mov v0.d[0], x13 */
  (c)->q[0].u64[0] = (ARC_X_R(c, 13));
  /* c419c: orr v3.16b, v4.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* c41a0: bic v1.4h, #0xff, lsl #8 */
  { Arm64Vec _t = (c)->q[1];
    _t.u16[0] = (uint16_t)(_t.u16[0] & UINT64_C(255));
    _t.u16[1] = (uint16_t)(_t.u16[1] & UINT64_C(255));
    _t.u16[2] = (uint16_t)(_t.u16[2] & UINT64_C(255));
    _t.u16[3] = (uint16_t)(_t.u16[3] & UINT64_C(255));
    _t.u64[1] = 0;
    (c)->q[1] = _t; }
  /* c41a4: orr v4.16b, v4.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] | (c)->q[5].u8[15];
    (c)->q[4] = _t; }
  /* c41a8: sub x0, x12, x16 */
  ARC_X_W(c, 0, (ARC_X_R(c, 12) - ARC_X_R(c, 16)));
  /* c41ac: sub x13, x1, x16 */
  ARC_X_W(c, 13, (ARC_X_R(c, 1) - ARC_X_R(c, 16)));
  /* c41b0: sub x1, x3, #3 */
  ARC_X_W(c, 1, (ARC_X_R(c, 3) - UINT64_C(3)));
L_c41b4:;
  /* c41b4: ldr s5, [x1], #0xfffffffffffffffc */
  arc_su_w(c, 5, arc_ld32(ARC_X_R(c, 1)));
  ARC_X_W(c, 1, ARC_X_R(c, 1) + INT64_C(-4));
  /* c41b8: dup v6.2d, x5 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 5));
    _t.u64[1] = (ARC_X_R(c, 5));
    (c)->q[6] = _t; }
  /* c41bc: adds x13, x13, #4 */
  ARC_X_W(c, 13, arc_add64(c, ARC_X_R(c, 13), UINT64_C(4), 0));
  /* c41c0: ushll v5.8h, v5.8b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((uint16_t)((c)->q[5].u8[0]) << 0);
    _t.u16[1] = (uint16_t)((uint16_t)((c)->q[5].u8[1]) << 0);
    _t.u16[2] = (uint16_t)((uint16_t)((c)->q[5].u8[2]) << 0);
    _t.u16[3] = (uint16_t)((uint16_t)((c)->q[5].u8[3]) << 0);
    _t.u16[4] = (uint16_t)((uint16_t)((c)->q[5].u8[4]) << 0);
    _t.u16[5] = (uint16_t)((uint16_t)((c)->q[5].u8[5]) << 0);
    _t.u16[6] = (uint16_t)((uint16_t)((c)->q[5].u8[6]) << 0);
    _t.u16[7] = (uint16_t)((uint16_t)((c)->q[5].u8[7]) << 0);
    (c)->q[5] = _t; }
  /* c41c4: rev64 v5.4h, v5.4h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (c)->q[5].u16[3];
    _t.u16[1] = (c)->q[5].u16[2];
    _t.u16[2] = (c)->q[5].u16[1];
    _t.u16[3] = (c)->q[5].u16[0];
    (c)->q[5] = _t; }
  /* c41c8: cmhi v5.4h, v1.4h, v5.4h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[1].u16[0] > (c)->q[5].u16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[1].u16[1] > (c)->q[5].u16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[1].u16[2] > (c)->q[5].u16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[1].u16[3] > (c)->q[5].u16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[5] = _t; }
  /* c41cc: ushll v5.4s, v5.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[5].u16[0]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[5].u16[1]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[5].u16[2]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[5].u16[3]) << 0);
    (c)->q[5] = _t; }
  /* c41d0: ushll2 v7.2d, v5.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[3]) << 0);
    (c)->q[7] = _t; }
  /* c41d4: ushll v5.2d, v5.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[1]) << 0);
    (c)->q[5] = _t; }
  /* c41d8: and v7.16b, v7.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] & (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] & (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] & (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] & (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] & (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] & (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] & (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] & (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] & (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] & (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] & (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] & (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] & (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] & (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] & (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] & (c)->q[6].u8[15];
    (c)->q[7] = _t; }
  /* c41dc: and v5.16b, v5.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] & (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] & (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] & (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] & (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] & (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] & (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] & (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] & (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] & (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] & (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] & (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] & (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] & (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] & (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] & (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] & (c)->q[6].u8[15];
    (c)->q[5] = _t; }
  /* c41e0: ushl v6.2d, v7.2d, v3.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[7].u64[0], (int8_t)(c)->q[3].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[7].u64[1], (int8_t)(c)->q[3].u64[1]);
    (c)->q[6] = _t; }
  /* c41e4: dup v7.2d, x21 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 21));
    _t.u64[1] = (ARC_X_R(c, 21));
    (c)->q[7] = _t; }
  /* c41e8: ushl v5.2d, v5.2d, v4.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[5].u64[0], (int8_t)(c)->q[4].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[5].u64[1], (int8_t)(c)->q[4].u64[1]);
    (c)->q[5] = _t; }
  /* c41ec: orr v2.16b, v6.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[6].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[6].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[6].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[6].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[6].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[6].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[6].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[6].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[6].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[6].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[6].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[6].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[6].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[6].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[6].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* c41f0: orr v0.16b, v5.16b, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] | (c)->q[0].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] | (c)->q[0].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] | (c)->q[0].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] | (c)->q[0].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] | (c)->q[0].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] | (c)->q[0].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] | (c)->q[0].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] | (c)->q[0].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] | (c)->q[0].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] | (c)->q[0].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] | (c)->q[0].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] | (c)->q[0].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] | (c)->q[0].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] | (c)->q[0].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] | (c)->q[0].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] | (c)->q[0].u8[15];
    (c)->q[0] = _t; }
  /* c41f4: add v3.2d, v3.2d, v7.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[7].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[7].u64[1];
    (c)->q[3] = _t; }
  /* c41f8: add v4.2d, v4.2d, v7.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[4].u64[0] + (c)->q[7].u64[0];
    _t.u64[1] = (c)->q[4].u64[1] + (c)->q[7].u64[1];
    (c)->q[4] = _t; }
  /* c41fc: b.ne #0xc41b4 */
  if (ARC_COND(c, 1)) goto L_c41b4;
  /* c4200: orr v0.16b, v0.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[0].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[0].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[0].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[0].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[0].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[0].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[0].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[0].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[0].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[0].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[0].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[0].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[0].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[0].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[0].u8[15] | (c)->q[2].u8[15];
    (c)->q[0] = _t; }
  /* c4204: cmp x15, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 16));
  /* c4208: ext v1.16b, v0.16b, v0.16b, #8 */
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
    (c)->q[1] = _t; }
  /* c420c: orr v0.8b, v0.8b, v1.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[0].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[0].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[0].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[0].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[0].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[0].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[0].u8[7] | (c)->q[1].u8[7];
    (c)->q[0] = _t; }
  /* c4210: fmov x13, d0 */
  ARC_X_W(c, 13, ARC_DU_R(c, 0));
  /* c4214: b.ne #0xc4220 */
  if (ARC_COND(c, 1)) goto L_c4220;
  /* c4218: b #0xc4240 */
  goto L_c4240;
L_c421c:;
  /* c421c: sub x0, x12, x16 */
  ARC_X_W(c, 0, (ARC_X_R(c, 12) - ARC_X_R(c, 16)));
L_c4220:;
  /* c4220: ldrb w1, [x0], #0xffffffffffffffff */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(-1));
    ARC_W_W(c, 1, arc_ld8(_a));
  }
  /* c4224: cmp w1, w8, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 1), ((uint64_t)(uint8_t)(ARC_W_R(c, 8))));
  /* c4228: cset w1, lo */
  ARC_W_W(c, 1, (ARC_COND(c, 3) ? 1 : 0));
  /* c422c: lsl x1, x1, x16 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 1)) << ((ARC_X_R(c, 16)) & 63)));
  /* c4230: add x16, x16, #1 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1)));
  /* c4234: cmp x15, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 16));
  /* c4238: orr x13, x1, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 1) | ARC_X_R(c, 13)));
  /* c423c: b.ne #0xc4220 */
  if (ARC_COND(c, 1)) goto L_c4220;
L_c4240:;
  /* c4240: cbz x14, #0xc4284 */
  if ((ARC_X_R(c, 14)) == 0) goto L_c4284;
  /* c4244: cbz x13, #0xc4284 */
  if ((ARC_X_R(c, 13)) == 0) goto L_c4284;
L_c4248:;
  /* c4248: rbit x16, x13 */
  ARC_X_W(c, 16, arc_rbit64(ARC_X_R(c, 13)));
  /* c424c: rbit x0, x14 */
  ARC_X_W(c, 0, arc_rbit64(ARC_X_R(c, 14)));
  /* c4250: sub x1, x13, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 13) - UINT64_C(1)));
  /* c4254: sub x4, x14, #1 */
  ARC_X_W(c, 4, (ARC_X_R(c, 14) - UINT64_C(1)));
  /* c4258: and x13, x1, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 1) & ARC_X_R(c, 13)));
  /* c425c: clz x16, x16 */
  ARC_X_W(c, 16, arc_clz64(ARC_X_R(c, 16)));
  /* c4260: clz x0, x0 */
  ARC_X_W(c, 0, arc_clz64(ARC_X_R(c, 0)));
  /* c4264: and x14, x4, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 4) & ARC_X_R(c, 14)));
  /* c4268: sub x16, x12, x16 */
  ARC_X_W(c, 16, (ARC_X_R(c, 12) - ARC_X_R(c, 16)));
  /* c426c: ldrb w5, [x11, x0] */
  ARC_W_W(c, 5, arc_ld8((ARC_X_R(c, 11) + ARC_X_R(c, 0))));
  /* c4270: ldrb w3, [x16] */
  ARC_W_W(c, 3, arc_ld8(ARC_X_R(c, 16)));
  /* c4274: strb w3, [x11, x0] */
  arc_st8((ARC_X_R(c, 11) + ARC_X_R(c, 0)), ARC_W_R(c, 3));
  /* c4278: strb w5, [x16] */
  arc_st8(ARC_X_R(c, 16), ARC_W_R(c, 5));
  /* c427c: cbz x13, #0xc4284 */
  if ((ARC_X_R(c, 13)) == 0) goto L_c4284;
  /* c4280: cbnz x14, #0xc4248 */
  if ((ARC_X_R(c, 14)) != 0) goto L_c4248;
L_c4284:;
  /* c4284: cmp x14, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(0));
  /* c4288: csel x16, x17, xzr, eq */
  ARC_X_W(c, 16, (ARC_COND(c, 0) ? (ARC_X_R(c, 17)) : ARC_X_R(c, 31)));
  /* c428c: cmp x13, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(0));
  /* c4290: csel x15, x15, xzr, eq */
  ARC_X_W(c, 15, (ARC_COND(c, 0) ? (ARC_X_R(c, 15)) : ARC_X_R(c, 31)));
  /* c4294: add x23, x11, x16 */
  ARC_X_W(c, 23, (ARC_X_R(c, 11) + ARC_X_R(c, 16)));
  /* c4298: sub x11, x12, x15 */
  ARC_X_W(c, 11, (ARC_X_R(c, 12) - ARC_X_R(c, 15)));
  /* c429c: cbnz x14, #0xc42b8 */
  if ((ARC_X_R(c, 14)) != 0) goto L_c42b8;
  /* c42a0: cbnz x13, #0xc42f0 */
  if ((ARC_X_R(c, 13)) != 0) goto L_c42f0;
  /* c42a4: b #0xc431c */
  goto L_c431c;
L_c42a8:;
  /* c42a8: lsl x12, x26, x12 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 26)) << ((ARC_X_R(c, 12)) & 63)));
  /* c42ac: sub x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* c42b0: bic x14, x14, x12 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) & (~ARC_X_R(c, 12))));
  /* c42b4: cbz x14, #0xc4318 */
  if ((ARC_X_R(c, 14)) == 0) goto L_c4318;
L_c42b8:;
  /* c42b8: clz x12, x14 */
  ARC_X_W(c, 12, arc_clz64(ARC_X_R(c, 14)));
  /* c42bc: eor x12, x12, #0x3f */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) ^ UINT64_C(63)));
  /* c42c0: add x13, x23, x12 */
  ARC_X_W(c, 13, (ARC_X_R(c, 23) + ARC_X_R(c, 12)));
  /* c42c4: cmp x11, x13 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 13));
  /* c42c8: b.eq #0xc42a8 */
  if (ARC_COND(c, 0)) goto L_c42a8;
  /* c42cc: ldrb w15, [x11] */
  ARC_W_W(c, 15, arc_ld8(ARC_X_R(c, 11)));
  /* c42d0: ldrb w16, [x13] */
  ARC_W_W(c, 16, arc_ld8(ARC_X_R(c, 13)));
  /* c42d4: strb w15, [x13] */
  arc_st8(ARC_X_R(c, 13), ARC_W_R(c, 15));
  /* c42d8: strb w16, [x11] */
  arc_st8(ARC_X_R(c, 11), ARC_W_R(c, 16));
  /* c42dc: b #0xc42a8 */
  goto L_c42a8;
L_c42e0:;
  /* c42e0: lsl x12, x26, x12 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 26)) << ((ARC_X_R(c, 12)) & 63)));
  /* c42e4: add x23, x23, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* c42e8: bic x13, x13, x12 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) & (~ARC_X_R(c, 12))));
  /* c42ec: cbz x13, #0xc431c */
  if ((ARC_X_R(c, 13)) == 0) goto L_c431c;
L_c42f0:;
  /* c42f0: clz x12, x13 */
  ARC_X_W(c, 12, arc_clz64(ARC_X_R(c, 13)));
  /* c42f4: eor x12, x12, #0x3f */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) ^ UINT64_C(63)));
  /* c42f8: sub x14, x11, x12 */
  ARC_X_W(c, 14, (ARC_X_R(c, 11) - ARC_X_R(c, 12)));
  /* c42fc: cmp x23, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 14));
  /* c4300: b.eq #0xc42e0 */
  if (ARC_COND(c, 0)) goto L_c42e0;
  /* c4304: ldrb w15, [x23] */
  ARC_W_W(c, 15, arc_ld8(ARC_X_R(c, 23)));
  /* c4308: ldrb w16, [x14] */
  ARC_W_W(c, 16, arc_ld8(ARC_X_R(c, 14)));
  /* c430c: strb w15, [x14] */
  arc_st8(ARC_X_R(c, 14), ARC_W_R(c, 15));
  /* c4310: strb w16, [x23] */
  arc_st8(ARC_X_R(c, 23), ARC_W_R(c, 16));
  /* c4314: b #0xc42e0 */
  goto L_c42e0;
L_c4318:;
  /* c4318: add x23, x11, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 11) + UINT64_C(1)));
L_c431c:;
  /* c431c: sub x24, x23, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 23) - UINT64_C(1)));
  /* c4320: cmp x19, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 24));
  /* c4324: b.eq #0xc4330 */
  if (ARC_COND(c, 0)) goto L_c4330;
  /* c4328: ldrb w11, [x24] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 24)));
  /* c432c: strb w11, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 11));
L_c4330:;
  /* c4330: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* c4334: strb w8, [x24] */
  arc_st8(ARC_X_R(c, 24), ARC_W_R(c, 8));
  /* c4338: b.lo #0xc4394 */
  if (ARC_COND(c, 3)) goto L_c4394;
  /* c433c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* c4340: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* c4344: mov x21, x27 */
  ARC_X_W(c, 21, ARC_X_R(c, 27));
  /* c4348: mov x28, x6 */
  ARC_X_W(c, 28, ARC_X_R(c, 6));
  /* c434c: mov x27, x2 */
  ARC_X_W(c, 27, ARC_X_R(c, 2));
  /* c4350: bl #0xd05e4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(803668));
  fn1_d05e4(c);
  /* c4354: mov w25, w0 */
  ARC_W_W(c, 25, ARC_W_R(c, 0));
  /* c4358: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* c435c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* c4360: bl #0xd05e4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(803684));
  fn1_d05e4(c);
  /* c4364: tbnz w0, #0, #0xc4490 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_c4490;
  /* c4368: ldp q12, q11, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_q_w(c, 12, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 11, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c436c: mov x2, x27 */
  ARC_X_W(c, 2, ARC_X_R(c, 27));
  /* c4370: ldp q14, q13, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_q_w(c, 14, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 13, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c4374: mov x6, x28 */
  ARC_X_W(c, 6, ARC_X_R(c, 28));
  /* c4378: ldr q15, [sp] */
  arc_q_w(c, 15, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* c437c: mov x4, #-0x40 */
  ARC_X_W(c, 4, UINT64_C(18446744073709551552));
  /* c4380: mov x27, x21 */
  ARC_X_W(c, 27, ARC_X_R(c, 21));
  /* c4384: mov w5, #1 */
  ARC_W_W(c, 5, UINT64_C(1));
  /* c4388: mov w21, #4 */
  ARC_W_W(c, 21, UINT64_C(4));
  /* c438c: mov w28, #0x10 */
  ARC_W_W(c, 28, UINT64_C(16));
  /* c4390: tbnz w25, #0, #0xc34e0 */
  if (((ARC_W_R(c, 25)) >> 0 & 1) != 0) goto L_c34e0;
L_c4394:;
  /* c4394: ldr w8, [sp, #0x5c] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(92))));
  /* c4398: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* c439c: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* c43a0: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* c43a4: mov x24, x6 */
  ARC_X_W(c, 24, ARC_X_R(c, 6));
  /* c43a8: and w3, w8, #1 */
  ARC_W_W(c, 3, (ARC_W_R(c, 8) & UINT64_C(1)));
  /* c43ac: bl #0xc3328 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(803760));
  fn1_c3328(c);
  /* c43b0: ldp q15, q14, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_q_w(c, 15, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 14, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c43b4: mov w28, #0x10 */
  ARC_W_W(c, 28, UINT64_C(16));
  /* c43b8: ldp q13, q12, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_q_w(c, 13, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 12, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c43bc: mov w21, #4 */
  ARC_W_W(c, 21, UINT64_C(4));
  /* c43c0: ldr q11, [sp, #0x40] */
  arc_q_w(c, 11, arc_ld64(((c)->sp + INT64_C(64))), arc_ld64(((c)->sp + INT64_C(64)) + 8));
  /* c43c4: mov w5, #1 */
  ARC_W_W(c, 5, UINT64_C(1));
  /* c43c8: mov x4, #-0x40 */
  ARC_X_W(c, 4, UINT64_C(18446744073709551552));
  /* c43cc: mov x6, x24 */
  ARC_X_W(c, 6, ARC_X_R(c, 24));
  /* c43d0: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* c43d4: str wzr, [sp, #0x5c] */
  arc_st32(((c)->sp + INT64_C(92)), ARC_W_R(c, 31));
  /* c43d8: b #0xc34e0 */
  goto L_c34e0;
L_c43dc:;
  /* c43dc: ldurb w9, [x20, #-1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 20) + INT64_C(-1))));
  /* c43e0: cmp w9, w8, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 9), ((uint64_t)(uint8_t)(ARC_W_R(c, 8))));
  /* c43e4: b.ls #0xc43fc */
  if (ARC_COND(c, 9)) goto L_c43fc;
  /* c43e8: mov x23, x19 */
  ARC_X_W(c, 23, ARC_X_R(c, 19));
L_c43ec:;
  /* c43ec: ldrb w9, [x23, #1]! */
  { const uint64_t _a = (ARC_X_R(c, 23) + INT64_C(1));
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(1));
    ARC_W_W(c, 9, arc_ld8(_a));
  }
  /* c43f0: cmp w9, w8, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 9), ((uint64_t)(uint8_t)(ARC_W_R(c, 8))));
  /* c43f4: b.ls #0xc43ec */
  if (ARC_COND(c, 9)) goto L_c43ec;
  /* c43f8: b #0xc441c */
  goto L_c441c;
L_c43fc:;
  /* c43fc: add x9, x19, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(1)));
L_c4400:;
  /* c4400: mov x23, x9 */
  ARC_X_W(c, 23, ARC_X_R(c, 9));
  /* c4404: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c4408: b.hs #0xc441c */
  if (ARC_COND(c, 2)) goto L_c441c;
  /* c440c: mov x9, x23 */
  ARC_X_W(c, 9, ARC_X_R(c, 23));
  /* c4410: ldrb w10, [x9], #1 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(1));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* c4414: cmp w10, w8, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 10), ((uint64_t)(uint8_t)(ARC_W_R(c, 8))));
  /* c4418: b.ls #0xc4400 */
  if (ARC_COND(c, 9)) goto L_c4400;
L_c441c:;
  /* c441c: cmp x23, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 20));
  /* c4420: mov x9, x20 */
  ARC_X_W(c, 9, ARC_X_R(c, 20));
  /* c4424: b.hs #0xc4438 */
  if (ARC_COND(c, 2)) goto L_c4438;
  /* c4428: mov x9, x20 */
  ARC_X_W(c, 9, ARC_X_R(c, 20));
L_c442c:;
  /* c442c: ldrb w10, [x9, #-1]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(-1));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(-1));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* c4430: cmp w10, w8, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 10), ((uint64_t)(uint8_t)(ARC_W_R(c, 8))));
  /* c4434: b.hi #0xc442c */
  if (ARC_COND(c, 8)) goto L_c442c;
L_c4438:;
  /* c4438: cmp x23, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 9));
  /* c443c: b.hs #0xc4470 */
  if (ARC_COND(c, 2)) goto L_c4470;
  /* c4440: ldrb w10, [x23] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 23)));
  /* c4444: ldrb w11, [x9] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 9)));
L_c4448:;
  /* c4448: strb w11, [x23] */
  arc_st8(ARC_X_R(c, 23), ARC_W_R(c, 11));
  /* c444c: strb w10, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 10));
L_c4450:;
  /* c4450: ldrb w10, [x23, #1]! */
  { const uint64_t _a = (ARC_X_R(c, 23) + INT64_C(1));
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(1));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* c4454: cmp w10, w8, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 10), ((uint64_t)(uint8_t)(ARC_W_R(c, 8))));
  /* c4458: b.ls #0xc4450 */
  if (ARC_COND(c, 9)) goto L_c4450;
L_c445c:;
  /* c445c: ldrb w11, [x9, #-1]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(-1));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(-1));
    ARC_W_W(c, 11, arc_ld8(_a));
  }
  /* c4460: cmp w11, w8, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 11), ((uint64_t)(uint8_t)(ARC_W_R(c, 8))));
  /* c4464: b.hi #0xc445c */
  if (ARC_COND(c, 8)) goto L_c445c;
  /* c4468: cmp x23, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 9));
  /* c446c: b.lo #0xc4448 */
  if (ARC_COND(c, 3)) goto L_c4448;
L_c4470:;
  /* c4470: sub x9, x23, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) - UINT64_C(1)));
  /* c4474: cmp x19, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* c4478: b.eq #0xc4484 */
  if (ARC_COND(c, 0)) goto L_c4484;
  /* c447c: ldrb w10, [x9] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 9)));
  /* c4480: strb w10, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 10));
L_c4484:;
  /* c4484: str wzr, [sp, #0x5c] */
  arc_st32(((c)->sp + INT64_C(92)), ARC_W_R(c, 31));
  /* c4488: strb w8, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 8));
  /* c448c: b #0xc34e0 */
  goto L_c34e0;
L_c4490:;
  /* c4490: ldp q12, q11, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_q_w(c, 12, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 11, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c4494: mov x20, x24 */
  ARC_X_W(c, 20, ARC_X_R(c, 24));
  /* c4498: ldp q14, q13, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_q_w(c, 14, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 13, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c449c: mov x2, x27 */
  ARC_X_W(c, 2, ARC_X_R(c, 27));
  /* c44a0: ldr q15, [sp] */
  arc_q_w(c, 15, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* c44a4: mov x6, x28 */
  ARC_X_W(c, 6, ARC_X_R(c, 28));
  /* c44a8: mov x4, #-0x40 */
  ARC_X_W(c, 4, UINT64_C(18446744073709551552));
  /* c44ac: mov x27, x21 */
  ARC_X_W(c, 27, ARC_X_R(c, 21));
  /* c44b0: mov w5, #1 */
  ARC_W_W(c, 5, UINT64_C(1));
  /* c44b4: mov w21, #4 */
  ARC_W_W(c, 21, UINT64_C(4));
  /* c44b8: mov w28, #0x10 */
  ARC_W_W(c, 28, UINT64_C(16));
  /* c44bc: tbz w25, #0, #0xc34dc */
  if (((ARC_W_R(c, 25)) >> 0 & 1) == 0) goto L_c34dc;
  /* c44c0: b #0xc4680 */
  goto L_c4680;
L_c44c4:;
  /* c44c4: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* c44c8: ldrb w9, [x19, #1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 19) + INT64_C(1))));
  /* c44cc: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c44d0: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c44d4: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c44d8: strb w10, [x19, #1] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(1)), ARC_W_R(c, 10));
  /* c44dc: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* c44e0: ldrb w8, [x19, #3] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(3))));
  /* c44e4: ldurb w9, [x20, #-1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 20) + INT64_C(-1))));
  /* c44e8: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c44ec: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c44f0: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c44f4: sturb w10, [x20, #-1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-1)), ARC_W_R(c, 10));
  /* c44f8: strb w8, [x19, #3] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(3)), ARC_W_R(c, 8));
  /* c44fc: ldrb w9, [x19, #2] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 19) + INT64_C(2))));
  /* c4500: ldurb w8, [x20, #-1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(-1))));
  /* c4504: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c4508: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c450c: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c4510: sturb w10, [x20, #-1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-1)), ARC_W_R(c, 10));
  /* c4514: ldrb w10, [x19, #3] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 19) + INT64_C(3))));
  /* c4518: ldrb w9, [x19, #2] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 19) + INT64_C(2))));
  /* c451c: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c4520: csel w9, w9, w10, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c4524: csel w8, w8, w10, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c4528: strb w9, [x19, #2] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(2)), ARC_W_R(c, 9));
  /* c452c: strb w8, [x19, #3] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(3)), ARC_W_R(c, 8));
  /* c4530: ldrb w8, [x19, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(1))));
  /* c4534: ldurb w9, [x20, #-1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 20) + INT64_C(-1))));
  /* c4538: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c453c: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c4540: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c4544: sturb w10, [x20, #-1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-1)), ARC_W_R(c, 10));
  /* c4548: ldrb w10, [x19, #3] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 19) + INT64_C(3))));
  /* c454c: ldrb w11, [x19] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 19)));
  /* c4550: ldrb w9, [x19, #2] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 19) + INT64_C(2))));
  /* c4554: cmp w10, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 11));
  /* c4558: csel w12, w10, w11, lo */
  ARC_W_W(c, 12, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* c455c: csel w10, w10, w11, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* c4560: cmp w12, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 9));
  /* c4564: csel w11, w11, w9, lo */
  ARC_W_W(c, 11, (ARC_COND(c, 3) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 9)));
  /* c4568: csel w9, w12, w9, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 9)));
  /* c456c: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* c4570: csel w12, w10, w8, lo */
  ARC_W_W(c, 12, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c4574: csel w10, w10, w8, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c4578: strb w11, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 11));
  /* c457c: cmp w12, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 9));
  /* c4580: strb w10, [x19, #3] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(3)), ARC_W_R(c, 10));
  /* c4584: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c4588: csel w9, w12, w9, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 9)));
  /* c458c: strb w8, [x19, #1] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(1)), ARC_W_R(c, 8));
  /* c4590: strb w9, [x19, #2] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(2)), ARC_W_R(c, 9));
  /* c4594: b #0xc4680 */
  goto L_c4680;
L_c4598:;
  /* c4598: ldurb w8, [x20, #-1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(-1))));
  /* c459c: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* c45a0: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c45a4: b.hs #0xc4680 */
  if (ARC_COND(c, 2)) goto L_c4680;
  /* c45a8: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* c45ac: sturb w9, [x20, #-1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-1)), ARC_W_R(c, 9));
  /* c45b0: b #0xc4680 */
  goto L_c4680;
L_c45b4:;
  /* c45b4: ldrb w8, [x19, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(1))));
  /* c45b8: ldurb w9, [x20, #-1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 20) + INT64_C(-1))));
  /* c45bc: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c45c0: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c45c4: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c45c8: sturb w10, [x20, #-1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-1)), ARC_W_R(c, 10));
  /* c45cc: strb w8, [x19, #1] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(1)), ARC_W_R(c, 8));
  /* c45d0: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* c45d4: ldurb w8, [x20, #-1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(-1))));
  /* c45d8: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c45dc: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c45e0: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c45e4: sturb w10, [x20, #-1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-1)), ARC_W_R(c, 10));
  /* c45e8: ldrb w10, [x19, #1] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 19) + INT64_C(1))));
  /* c45ec: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* c45f0: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c45f4: csel w9, w9, w10, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c45f8: csel w8, w8, w10, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c45fc: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* c4600: b #0xc467c */
  goto L_c467c;
L_c4604:;
  /* c4604: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* c4608: ldrb w9, [x19, #2] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 19) + INT64_C(2))));
  /* c460c: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c4610: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c4614: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c4618: strb w10, [x19, #2] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(2)), ARC_W_R(c, 10));
  /* c461c: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* c4620: ldrb w8, [x19, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(1))));
  /* c4624: ldurb w9, [x20, #-1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 20) + INT64_C(-1))));
  /* c4628: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c462c: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c4630: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c4634: sturb w10, [x20, #-1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-1)), ARC_W_R(c, 10));
  /* c4638: ldrb w10, [x19] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 19)));
  /* c463c: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* c4640: csel w9, w10, w8, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c4644: csel w8, w10, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c4648: strb w9, [x19, #1] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(1)), ARC_W_R(c, 9));
  /* c464c: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* c4650: ldrb w8, [x19, #2] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(2))));
  /* c4654: ldurb w9, [x20, #-1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 20) + INT64_C(-1))));
  /* c4658: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c465c: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c4660: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c4664: sturb w10, [x20, #-1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-1)), ARC_W_R(c, 10));
  /* c4668: ldrb w10, [x19, #1] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 19) + INT64_C(1))));
  /* c466c: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* c4670: csel w9, w10, w8, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c4674: csel w8, w10, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c4678: strb w9, [x19, #2] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(2)), ARC_W_R(c, 9));
L_c467c:;
  /* c467c: strb w8, [x19, #1] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(1)), ARC_W_R(c, 8));
L_c4680:;
  /* c4680: add sp, sp, #0x1f0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(496)));
  /* c4684: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* c4688: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* c468c: ldp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* c4690: ldp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* c4694: ldp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* c4698: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* c469c: ldp d9, d8, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_du_w(c, 9, arc_ld64(_pa));
    arc_du_w(c, 8, arc_ld64((_pa + 8)));
  }
  /* c46a0: ldp d11, d10, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_du_w(c, 11, arc_ld64(_pa));
    arc_du_w(c, 10, arc_ld64((_pa + 8)));
  }
  /* c46a4: ldp d13, d12, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_du_w(c, 13, arc_ld64(_pa));
    arc_du_w(c, 12, arc_ld64((_pa + 8)));
  }
  /* c46a8: ldp d15, d14, [sp], #0xa0 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(160);
    arc_du_w(c, 15, arc_ld64(_pa));
    arc_du_w(c, 14, arc_ld64((_pa + 8)));
  }
  /* c46ac: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* c46b0: ret  */
  return;
L_c46b4:;
  /* c46b4: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* c46b8: add x9, x19, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* c46bc: ldr w10, [sp, #0x5c] */
  ARC_W_W(c, 10, arc_ld32(((c)->sp + INT64_C(92))));
  /* c46c0: ccmp x9, x20, #4, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20)); }
  else { (c)->nf = 0; (c)->zf = 1;
          (c)->cf = 0; (c)->vf = 0; }
  /* c46c4: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* c46c8: tbz w10, #0, #0xc4904 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) == 0) goto L_c4904;
  /* c46cc: tbnz w8, #0, #0xc4680 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_c4680;
  /* c46d0: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* c46d4: mov x10, x19 */
  ARC_X_W(c, 10, ARC_X_R(c, 19));
  /* c46d8: b #0xc46f4 */
  goto L_c46f4;
L_c46dc:;
  /* c46dc: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
L_c46e0:;
  /* c46e0: strb w11, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 11));
L_c46e4:;
  /* c46e4: add x9, x10, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* c46e8: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* c46ec: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c46f0: b.eq #0xc4680 */
  if (ARC_COND(c, 0)) goto L_c4680;
L_c46f4:;
  /* c46f4: ldrb w11, [x10, #1] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 10) + INT64_C(1))));
  /* c46f8: ldrb w12, [x10] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 10)));
  /* c46fc: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* c4700: cmp w11, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 12));
  /* c4704: b.hs #0xc46e4 */
  if (ARC_COND(c, 2)) goto L_c46e4;
  /* c4708: mov x13, x8 */
  ARC_X_W(c, 13, ARC_X_R(c, 8));
L_c470c:;
  /* c470c: subs x9, x13, #1 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 13), UINT64_C(1)));
  /* c4710: strb w12, [x19, x13] */
  arc_st8((ARC_X_R(c, 19) + ARC_X_R(c, 13)), ARC_W_R(c, 12));
  /* c4714: b.eq #0xc46dc */
  if (ARC_COND(c, 0)) goto L_c46dc;
  /* c4718: add x12, x19, x13 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + ARC_X_R(c, 13)));
  /* c471c: mov x13, x9 */
  ARC_X_W(c, 13, ARC_X_R(c, 9));
  /* c4720: ldurb w12, [x12, #-2] */
  ARC_W_W(c, 12, arc_ld8((ARC_X_R(c, 12) + INT64_C(-2))));
  /* c4724: cmp w11, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 12));
  /* c4728: b.lo #0xc470c */
  if (ARC_COND(c, 3)) goto L_c470c;
  /* c472c: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* c4730: b #0xc46e0 */
  goto L_c46e0;
L_c4734:;
  /* c4734: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* c4738: b.eq #0xc4680 */
  if (ARC_COND(c, 0)) goto L_c4680;
  /* c473c: lsr x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* c4740: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* c4744: b #0xc4758 */
  goto L_c4758;
L_c4748:;
  /* c4748: strb w13, [x14] */
  arc_st8(ARC_X_R(c, 14), ARC_W_R(c, 13));
L_c474c:;
  /* c474c: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* c4750: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* c4754: b.le #0xc4828 */
  if (ARC_COND(c, 13)) goto L_c4828;
L_c4758:;
  /* c4758: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* c475c: b.lo #0xc474c */
  if (ARC_COND(c, 3)) goto L_c474c;
  /* c4760: lsl x11, x10, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* c4764: mov w12, #1 */
  ARC_W_W(c, 12, UINT64_C(1));
  /* c4768: bfi x12, x10, #1, #0x3e */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 12)) & UINT64_C(9223372036854775809)) | ((((uint64_t)(ARC_X_R(c, 10))) & UINT64_C(4611686018427387903)) << 1)));
  /* c476c: add x13, x11, #2 */
  ARC_X_W(c, 13, (ARC_X_R(c, 11) + UINT64_C(2)));
  /* c4770: cmp x13, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 8));
  /* c4774: add x11, x19, x12 */
  ARC_X_W(c, 11, (ARC_X_R(c, 19) + ARC_X_R(c, 12)));
  /* c4778: b.ge #0xc479c */
  if (ARC_COND(c, 10)) goto L_c479c;
  /* c477c: mov x14, x11 */
  ARC_X_W(c, 14, ARC_X_R(c, 11));
  /* c4780: ldrb w15, [x11] */
  ARC_W_W(c, 15, arc_ld8(ARC_X_R(c, 11)));
  /* c4784: ldrb w16, [x14, #1]! */
  { const uint64_t _a = (ARC_X_R(c, 14) + INT64_C(1));
    ARC_X_W(c, 14, ARC_X_R(c, 14) + INT64_C(1));
    ARC_W_W(c, 16, arc_ld8(_a));
  }
  /* c4788: cmp w15, w16 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 16));
  /* c478c: csel w15, w15, w16, hi */
  ARC_W_W(c, 15, (ARC_COND(c, 8) ? (ARC_W_R(c, 15)) : ARC_W_R(c, 16)));
  /* c4790: csel x11, x14, x11, lo */
  ARC_X_W(c, 11, (ARC_COND(c, 3) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* c4794: csel x12, x13, x12, lo */
  ARC_X_W(c, 12, (ARC_COND(c, 3) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 12)));
  /* c4798: b #0xc47a0 */
  goto L_c47a0;
L_c479c:;
  /* c479c: ldrb w15, [x11] */
  ARC_W_W(c, 15, arc_ld8(ARC_X_R(c, 11)));
L_c47a0:;
  /* c47a0: add x14, x19, x10 */
  ARC_X_W(c, 14, (ARC_X_R(c, 19) + ARC_X_R(c, 10)));
  /* c47a4: ldrb w13, [x14] */
  ARC_W_W(c, 13, arc_ld8(ARC_X_R(c, 14)));
  /* c47a8: cmp w15, w13 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 13));
  /* c47ac: b.hs #0xc47d8 */
  if (ARC_COND(c, 2)) goto L_c47d8;
  /* c47b0: b #0xc474c */
  goto L_c474c;
L_c47b4:;
  /* c47b4: mov x17, x11 */
  ARC_X_W(c, 17, ARC_X_R(c, 11));
  /* c47b8: ldrb w15, [x11] */
  ARC_W_W(c, 15, arc_ld8(ARC_X_R(c, 11)));
  /* c47bc: ldrb w0, [x17, #1]! */
  { const uint64_t _a = (ARC_X_R(c, 17) + INT64_C(1));
    ARC_X_W(c, 17, ARC_X_R(c, 17) + INT64_C(1));
    ARC_W_W(c, 0, arc_ld8(_a));
  }
  /* c47c0: cmp w15, w0 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 0));
  /* c47c4: csel w15, w15, w0, hi */
  ARC_W_W(c, 15, (ARC_COND(c, 8) ? (ARC_W_R(c, 15)) : ARC_W_R(c, 0)));
  /* c47c8: csel x11, x17, x11, lo */
  ARC_X_W(c, 11, (ARC_COND(c, 3) ? (ARC_X_R(c, 17)) : ARC_X_R(c, 11)));
  /* c47cc: csel x12, x12, x16, lo */
  ARC_X_W(c, 12, (ARC_COND(c, 3) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 16)));
  /* c47d0: cmp w15, w13 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 13));
  /* c47d4: b.lo #0xc4748 */
  if (ARC_COND(c, 3)) goto L_c4748;
L_c47d8:;
  /* c47d8: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* c47dc: strb w15, [x14] */
  arc_st8(ARC_X_R(c, 14), ARC_W_R(c, 15));
  /* c47e0: mov x14, x11 */
  ARC_X_W(c, 14, ARC_X_R(c, 11));
  /* c47e4: b.lt #0xc4748 */
  if (ARC_COND(c, 11)) goto L_c4748;
  /* c47e8: lsl x11, x12, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 12)) << ((UINT64_C(1)) & 63)));
  /* c47ec: mov w16, #1 */
  ARC_W_W(c, 16, UINT64_C(1));
  /* c47f0: bfi x16, x12, #1, #0x3e */
  ARC_X_W(c, 16, (((uint64_t)(ARC_X_R(c, 16)) & UINT64_C(9223372036854775809)) | ((((uint64_t)(ARC_X_R(c, 12))) & UINT64_C(4611686018427387903)) << 1)));
  /* c47f4: add x12, x11, #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 11) + UINT64_C(2)));
  /* c47f8: cmp x12, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 8));
  /* c47fc: add x11, x19, x16 */
  ARC_X_W(c, 11, (ARC_X_R(c, 19) + ARC_X_R(c, 16)));
  /* c4800: b.lt #0xc47b4 */
  if (ARC_COND(c, 11)) goto L_c47b4;
  /* c4804: ldrb w15, [x11] */
  ARC_W_W(c, 15, arc_ld8(ARC_X_R(c, 11)));
  /* c4808: mov x12, x16 */
  ARC_X_W(c, 12, ARC_X_R(c, 16));
  /* c480c: cmp w15, w13 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 13));
  /* c4810: b.hs #0xc47d8 */
  if (ARC_COND(c, 2)) goto L_c47d8;
  /* c4814: b #0xc4748 */
  goto L_c4748;
L_c4818:;
  /* c4818: strb w10, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 10));
L_c481c:;
  /* c481c: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* c4820: sub x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* c4824: b.le #0xc4680 */
  if (ARC_COND(c, 13)) goto L_c4680;
L_c4828:;
  /* c4828: sub x9, x8, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(2)));
  /* c482c: ldrb w10, [x19] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 19)));
  /* c4830: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* c4834: lsr x11, x9, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* c4838: mov x12, x19 */
  ARC_X_W(c, 12, ARC_X_R(c, 19));
  /* c483c: b #0xc4868 */
  goto L_c4868;
L_c4840:;
  /* c4840: ldrb w13, [x17, #2]! */
  { const uint64_t _a = (ARC_X_R(c, 17) + INT64_C(2));
    ARC_X_W(c, 17, ARC_X_R(c, 17) + INT64_C(2));
    ARC_W_W(c, 13, arc_ld8(_a));
  }
  /* c4844: ldurb w15, [x17, #-1] */
  ARC_W_W(c, 15, arc_ld8((ARC_X_R(c, 17) + INT64_C(-1))));
  /* c4848: cmp w15, w13 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 13));
  /* c484c: csel w15, w15, w13, hi */
  ARC_W_W(c, 15, (ARC_COND(c, 8) ? (ARC_W_R(c, 15)) : ARC_W_R(c, 13)));
  /* c4850: csel x9, x17, x9, lo */
  ARC_X_W(c, 9, (ARC_COND(c, 3) ? (ARC_X_R(c, 17)) : ARC_X_R(c, 9)));
  /* c4854: csel x13, x16, x14, lo */
  ARC_X_W(c, 13, (ARC_COND(c, 3) ? (ARC_X_R(c, 16)) : ARC_X_R(c, 14)));
L_c4858:;
  /* c4858: cmp x13, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 11));
  /* c485c: strb w15, [x12] */
  arc_st8(ARC_X_R(c, 12), ARC_W_R(c, 15));
  /* c4860: mov x12, x9 */
  ARC_X_W(c, 12, ARC_X_R(c, 9));
  /* c4864: b.gt #0xc4894 */
  if (ARC_COND(c, 12)) goto L_c4894;
L_c4868:;
  /* c4868: lsl x9, x13, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 13)) << ((UINT64_C(1)) & 63)));
  /* c486c: mov w14, #1 */
  ARC_W_W(c, 14, UINT64_C(1));
  /* c4870: add x17, x12, x13 */
  ARC_X_W(c, 17, (ARC_X_R(c, 12) + ARC_X_R(c, 13)));
  /* c4874: bfi x14, x13, #1, #0x3f */
  ARC_X_W(c, 14, (((uint64_t)(ARC_X_R(c, 14)) & UINT64_C(1)) | ((((uint64_t)(ARC_X_R(c, 13))) & UINT64_C(9223372036854775807)) << 1)));
  /* c4878: add x16, x9, #2 */
  ARC_X_W(c, 16, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* c487c: add x9, x17, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 17) + UINT64_C(1)));
  /* c4880: cmp x16, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 8));
  /* c4884: b.lt #0xc4840 */
  if (ARC_COND(c, 11)) goto L_c4840;
  /* c4888: ldrb w15, [x9] */
  ARC_W_W(c, 15, arc_ld8(ARC_X_R(c, 9)));
  /* c488c: mov x13, x14 */
  ARC_X_W(c, 13, ARC_X_R(c, 14));
  /* c4890: b #0xc4858 */
  goto L_c4858;
L_c4894:;
  /* c4894: sub x20, x20, #1 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) - UINT64_C(1)));
  /* c4898: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c489c: b.eq #0xc4818 */
  if (ARC_COND(c, 0)) goto L_c4818;
  /* c48a0: ldrb w11, [x20] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 20)));
  /* c48a4: sub x12, x9, x19 */
  ARC_X_W(c, 12, (ARC_X_R(c, 9) - ARC_X_R(c, 19)));
  /* c48a8: add x12, x12, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(1)));
  /* c48ac: strb w11, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 11));
  /* c48b0: subs x11, x12, #2 */
  ARC_X_W(c, 11, arc_sub64(c, ARC_X_R(c, 12), UINT64_C(2)));
  /* c48b4: strb w10, [x20] */
  arc_st8(ARC_X_R(c, 20), ARC_W_R(c, 10));
  /* c48b8: b.lt #0xc481c */
  if (ARC_COND(c, 11)) goto L_c481c;
  /* c48bc: lsr x10, x11, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(1)) & 63)));
  /* c48c0: ldrb w11, [x9] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 9)));
  /* c48c4: add x12, x19, x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + ARC_X_R(c, 10)));
  /* c48c8: ldrb w13, [x12] */
  ARC_W_W(c, 13, arc_ld8(ARC_X_R(c, 12)));
  /* c48cc: cmp w13, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 11));
  /* c48d0: b.hs #0xc481c */
  if (ARC_COND(c, 2)) goto L_c481c;
L_c48d4:;
  /* c48d4: mov x14, x9 */
  ARC_X_W(c, 14, ARC_X_R(c, 9));
  /* c48d8: mov x9, x12 */
  ARC_X_W(c, 9, ARC_X_R(c, 12));
  /* c48dc: strb w13, [x14] */
  arc_st8(ARC_X_R(c, 14), ARC_W_R(c, 13));
  /* c48e0: cbz x10, #0xc48fc */
  if ((ARC_X_R(c, 10)) == 0) goto L_c48fc;
  /* c48e4: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* c48e8: lsr x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* c48ec: add x12, x19, x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + ARC_X_R(c, 10)));
  /* c48f0: ldrb w13, [x12] */
  ARC_W_W(c, 13, arc_ld8(ARC_X_R(c, 12)));
  /* c48f4: cmp w13, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 11));
  /* c48f8: b.lo #0xc48d4 */
  if (ARC_COND(c, 3)) goto L_c48d4;
L_c48fc:;
  /* c48fc: strb w11, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 11));
  /* c4900: b #0xc481c */
  goto L_c481c;
L_c4904:;
  /* c4904: tbz w8, #0, #0xc4918 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_c4918;
  /* c4908: b #0xc4680 */
  goto L_c4680;
L_c490c:;
  /* c490c: add x9, x19, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* c4910: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c4914: b.eq #0xc4680 */
  if (ARC_COND(c, 0)) goto L_c4680;
L_c4918:;
  /* c4918: ldrb w8, [x19, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(1))));
  /* c491c: ldrb w10, [x19] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 19)));
  /* c4920: mov x19, x9 */
  ARC_X_W(c, 19, ARC_X_R(c, 9));
  /* c4924: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c4928: b.hs #0xc490c */
  if (ARC_COND(c, 2)) goto L_c490c;
  /* c492c: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
L_c4930:;
  /* c4930: strb w10, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 10));
  /* c4934: ldurb w10, [x9, #-2] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 9) + INT64_C(-2))));
  /* c4938: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* c493c: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c4940: b.lo #0xc4930 */
  if (ARC_COND(c, 3)) goto L_c4930;
  /* c4944: strb w8, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 8));
  /* c4948: b #0xc490c */
  goto L_c490c;
}

void fn1_d69e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038807016));
  /* d69e8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d69ec: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* d69f0: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d69f4: stp x28, x27, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* d69f8: stp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* d69fc: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* d6a00: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* d6a04: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d6a08: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* d6a0c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d6a10: strb wzr, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 31));
  /* d6a14: str xzr, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 31));
  /* d6a18: cbz x2, #0xd6dc0 */
  if ((ARC_X_R(c, 2)) == 0) goto L_d6dc0;
  /* d6a1c: mov w27, wzr */
  ARC_W_W(c, 27, ARC_W_R(c, 31));
  /* d6a20: mov w20, wzr */
  ARC_W_W(c, 20, ARC_W_R(c, 31));
  /* d6a24: mov x26, xzr */
  ARC_X_W(c, 26, ARC_X_R(c, 31));
  /* d6a28: mov w28, wzr */
  ARC_W_W(c, 28, ARC_W_R(c, 31));
  /* d6a2c: mov x22, xzr */
  ARC_X_W(c, 22, ARC_X_R(c, 31));
  /* d6a30: add x21, x19, #9 */
  ARC_X_W(c, 21, (ARC_X_R(c, 19) + UINT64_C(9)));
  /* d6a34: mov w10, #1 */
  ARC_W_W(c, 10, UINT64_C(1));
  /* d6a38: mov w23, wzr */
  ARC_W_W(c, 23, ARC_W_R(c, 31));
  /* d6a3c: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
L_d6a40:;
  /* d6a40: mov x9, x26 */
  ARC_X_W(c, 9, ARC_X_R(c, 26));
L_d6a44:;
  /* d6a44: ldrb w0, [x1, x9] */
  ARC_W_W(c, 0, arc_ld8((ARC_X_R(c, 1) + ARC_X_R(c, 9))));
  /* d6a48: sub w24, w0, #0x3a */
  ARC_W_W(c, 24, (ARC_W_R(c, 0) - UINT64_C(58)));
  /* d6a4c: cmn w24, #0xb */
  (void)arc_add32(c, ARC_W_R(c, 24), UINT64_C(11), 0);
  /* d6a50: b.ls #0xd6b00 */
  if (ARC_COND(c, 9)) goto L_d6b00;
  /* d6a54: cmp w0, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(48));
  /* d6a58: b.ne #0xd6a7c */
  if (ARC_COND(c, 1)) goto L_d6a7c;
  /* d6a5c: cbnz x22, #0xd6a98 */
  if ((ARC_X_R(c, 22)) != 0) goto L_d6a98;
  /* d6a60: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* d6a64: sub w23, w8, #1 */
  ARC_W_W(c, 23, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* d6a68: cmp x9, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 2));
  /* d6a6c: mov w8, w23 */
  ARC_W_W(c, 8, ARC_W_R(c, 23));
  /* d6a70: str w23, [x19, #4] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(4)), ARC_W_R(c, 23));
  /* d6a74: b.lo #0xd6a44 */
  if (ARC_COND(c, 3)) goto L_d6a44;
  /* d6a78: b #0xd6dc0 */
  goto L_d6dc0;
L_d6a7c:;
  /* d6a7c: cmp x22, #0x320 */
  (void)arc_sub64(c, ARC_X_R(c, 22), UINT64_C(800));
  /* d6a80: add w20, w20, #1 */
  ARC_W_W(c, 20, (ARC_W_R(c, 20) + UINT64_C(1)));
  /* d6a84: b.hs #0xd6ad8 */
  if (ARC_COND(c, 2)) goto L_d6ad8;
  /* d6a88: mov w27, w23 */
  ARC_W_W(c, 27, ARC_W_R(c, 23));
  /* d6a8c: mov w28, w8 */
  ARC_W_W(c, 28, ARC_W_R(c, 8));
  /* d6a90: mov x26, x9 */
  ARC_X_W(c, 26, ARC_X_R(c, 9));
  /* d6a94: b #0xd6aa4 */
  goto L_d6aa4;
L_d6a98:;
  /* d6a98: cmp x22, #0x31f */
  (void)arc_sub64(c, ARC_X_R(c, 22), UINT64_C(799));
  /* d6a9c: add w20, w20, #1 */
  ARC_W_W(c, 20, (ARC_W_R(c, 20) + UINT64_C(1)));
  /* d6aa0: b.hi #0xd6ac8 */
  if (ARC_COND(c, 8)) goto L_d6ac8;
L_d6aa4:;
  /* d6aa4: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* d6aa8: mov x25, x2 */
  ARC_X_W(c, 25, ARC_X_R(c, 2));
  /* d6aac: bl #0xd69b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(879280));
  fn1_d69b8(c);
  /* d6ab0: strb w0, [x21, x22] */
  arc_st8((ARC_X_R(c, 21) + ARC_X_R(c, 22)), ARC_W_R(c, 0));
  /* d6ab4: add x22, x22, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* d6ab8: mov w10, #1 */
  ARC_W_W(c, 10, UINT64_C(1));
  /* d6abc: mov x2, x25 */
  ARC_X_W(c, 2, ARC_X_R(c, 25));
  /* d6ac0: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* d6ac4: str w22, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 22));
L_d6ac8:;
  /* d6ac8: mov w23, w27 */
  ARC_W_W(c, 23, ARC_W_R(c, 27));
  /* d6acc: mov x9, x26 */
  ARC_X_W(c, 9, ARC_X_R(c, 26));
  /* d6ad0: mov w8, w28 */
  ARC_W_W(c, 8, ARC_W_R(c, 28));
  /* d6ad4: b #0xd6adc */
  goto L_d6adc;
L_d6ad8:;
  /* d6ad8: strb w10, [x19, #8] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(8)), ARC_W_R(c, 10));
L_d6adc:;
  /* d6adc: add x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* d6ae0: mov w27, w23 */
  ARC_W_W(c, 27, ARC_W_R(c, 23));
  /* d6ae4: mov w28, w8 */
  ARC_W_W(c, 28, ARC_W_R(c, 8));
  /* d6ae8: cmp x26, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 2));
  /* d6aec: b.lo #0xd6a40 */
  if (ARC_COND(c, 3)) goto L_d6a40;
L_d6af0:;
  /* d6af0: cmn w24, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 24), UINT64_C(10), 0);
  /* d6af4: b.lo #0xd6da4 */
  if (ARC_COND(c, 3)) goto L_d6da4;
  /* d6af8: str w20, [x19, #4] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(4)), ARC_W_R(c, 20));
  /* d6afc: b #0xd6da4 */
  goto L_d6da4;
L_d6b00:;
  /* d6b00: cmp w0, #0x2e */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(46));
  /* d6b04: b.ne #0xd6bf8 */
  if (ARC_COND(c, 1)) goto L_d6bf8;
  /* d6b08: add x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* d6b0c: str w20, [x19, #4] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(4)), ARC_W_R(c, 20));
  /* d6b10: cmp x26, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 2));
  /* d6b14: b.hs #0xd6da0 */
  if (ARC_COND(c, 2)) goto L_d6da0;
  /* d6b18: mov w27, w20 */
  ARC_W_W(c, 27, ARC_W_R(c, 20));
  /* d6b1c: mov w28, w20 */
  ARC_W_W(c, 28, ARC_W_R(c, 20));
  /* d6b20: mov w12, #1 */
  ARC_W_W(c, 12, UINT64_C(1));
  /* d6b24: mov w23, w20 */
  ARC_W_W(c, 23, ARC_W_R(c, 20));
  /* d6b28: mov w10, w20 */
  ARC_W_W(c, 10, ARC_W_R(c, 20));
L_d6b2c:;
  /* d6b2c: mov x9, x26 */
  ARC_X_W(c, 9, ARC_X_R(c, 26));
L_d6b30:;
  /* d6b30: ldrb w8, [x1, x9] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + ARC_X_R(c, 9))));
  /* d6b34: sub w11, w8, #0x30 */
  ARC_W_W(c, 11, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* d6b38: cmp w11, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(10));
  /* d6b3c: b.hs #0xd6bf0 */
  if (ARC_COND(c, 2)) goto L_d6bf0;
  /* d6b40: cmp w8, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(48));
  /* d6b44: b.ne #0xd6b68 */
  if (ARC_COND(c, 1)) goto L_d6b68;
  /* d6b48: cbnz x22, #0xd6b84 */
  if ((ARC_X_R(c, 22)) != 0) goto L_d6b84;
  /* d6b4c: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* d6b50: sub w23, w10, #1 */
  ARC_W_W(c, 23, (ARC_W_R(c, 10) - UINT64_C(1)));
  /* d6b54: cmp x9, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 2));
  /* d6b58: mov w10, w23 */
  ARC_W_W(c, 10, ARC_W_R(c, 23));
  /* d6b5c: str w23, [x19, #4] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(4)), ARC_W_R(c, 23));
  /* d6b60: b.lo #0xd6b30 */
  if (ARC_COND(c, 3)) goto L_d6b30;
  /* d6b64: b #0xd6dc0 */
  goto L_d6dc0;
L_d6b68:;
  /* d6b68: cmp x22, #0x320 */
  (void)arc_sub64(c, ARC_X_R(c, 22), UINT64_C(800));
  /* d6b6c: add w20, w20, #1 */
  ARC_W_W(c, 20, (ARC_W_R(c, 20) + UINT64_C(1)));
  /* d6b70: b.hs #0xd6bd4 */
  if (ARC_COND(c, 2)) goto L_d6bd4;
  /* d6b74: mov w27, w23 */
  ARC_W_W(c, 27, ARC_W_R(c, 23));
  /* d6b78: mov w28, w10 */
  ARC_W_W(c, 28, ARC_W_R(c, 10));
  /* d6b7c: mov x26, x9 */
  ARC_X_W(c, 26, ARC_X_R(c, 9));
  /* d6b80: b #0xd6b90 */
  goto L_d6b90;
L_d6b84:;
  /* d6b84: cmp x22, #0x31f */
  (void)arc_sub64(c, ARC_X_R(c, 22), UINT64_C(799));
  /* d6b88: add w20, w20, #1 */
  ARC_W_W(c, 20, (ARC_W_R(c, 20) + UINT64_C(1)));
  /* d6b8c: b.hi #0xd6bc4 */
  if (ARC_COND(c, 8)) goto L_d6bc4;
L_d6b90:;
  /* d6b90: stur w0, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 0));
  /* d6b94: mov w0, w8 */
  ARC_W_W(c, 0, ARC_W_R(c, 8));
  /* d6b98: mov x25, x1 */
  ARC_X_W(c, 25, ARC_X_R(c, 1));
  /* d6b9c: mov x23, x2 */
  ARC_X_W(c, 23, ARC_X_R(c, 2));
  /* d6ba0: bl #0xd69b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(879524));
  fn1_d69b8(c);
  /* d6ba4: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* d6ba8: ldur w0, [x29, #-4] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* d6bac: mov w12, #1 */
  ARC_W_W(c, 12, UINT64_C(1));
  /* d6bb0: mov x2, x23 */
  ARC_X_W(c, 2, ARC_X_R(c, 23));
  /* d6bb4: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* d6bb8: strb w8, [x21, x22] */
  arc_st8((ARC_X_R(c, 21) + ARC_X_R(c, 22)), ARC_W_R(c, 8));
  /* d6bbc: add x22, x22, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* d6bc0: str w22, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 22));
L_d6bc4:;
  /* d6bc4: mov w23, w27 */
  ARC_W_W(c, 23, ARC_W_R(c, 27));
  /* d6bc8: mov x9, x26 */
  ARC_X_W(c, 9, ARC_X_R(c, 26));
  /* d6bcc: mov w10, w28 */
  ARC_W_W(c, 10, ARC_W_R(c, 28));
  /* d6bd0: b #0xd6bd8 */
  goto L_d6bd8;
L_d6bd4:;
  /* d6bd4: strb w12, [x19, #8] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(8)), ARC_W_R(c, 12));
L_d6bd8:;
  /* d6bd8: add x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* d6bdc: mov w27, w23 */
  ARC_W_W(c, 27, ARC_W_R(c, 23));
  /* d6be0: mov w28, w10 */
  ARC_W_W(c, 28, ARC_W_R(c, 10));
  /* d6be4: cmp x26, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 2));
  /* d6be8: b.lo #0xd6b2c */
  if (ARC_COND(c, 3)) goto L_d6b2c;
  /* d6bec: b #0xd6af0 */
  goto L_d6af0;
L_d6bf0:;
  /* d6bf0: cmp w8, #0x2e */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(46));
  /* d6bf4: b.eq #0xd6da0 */
  if (ARC_COND(c, 0)) goto L_d6da0;
L_d6bf8:;
  /* d6bf8: cmp w0, #0x2e */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(46));
  /* d6bfc: b.eq #0xd6c08 */
  if (ARC_COND(c, 0)) goto L_d6c08;
  /* d6c00: mov w23, w20 */
  ARC_W_W(c, 23, ARC_W_R(c, 20));
  /* d6c04: str w20, [x19, #4] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(4)), ARC_W_R(c, 20));
L_d6c08:;
  /* d6c08: ldrb w8, [x1, x9] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + ARC_X_R(c, 9))));
  /* d6c0c: orr w8, w8, #0x20 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(32)));
  /* d6c10: cmp w8, #0x65 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(101));
  /* d6c14: b.ne #0xd6da0 */
  if (ARC_COND(c, 1)) goto L_d6da0;
  /* d6c18: add x8, x9, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* d6c1c: add x11, x1, x8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 1) + ARC_X_R(c, 8)));
  /* d6c20: ldrb w10, [x11] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 11)));
  /* d6c24: sub w12, w10, #0x30 */
  ARC_W_W(c, 12, (ARC_W_R(c, 10) - UINT64_C(48)));
  /* d6c28: cmp w12, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(10));
  /* d6c2c: b.lo #0xd6c40 */
  if (ARC_COND(c, 3)) goto L_d6c40;
  /* d6c30: cmp w10, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(45));
  /* d6c34: b.eq #0xd6c40 */
  if (ARC_COND(c, 0)) goto L_d6c40;
  /* d6c38: cmp w10, #0x2b */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(43));
  /* d6c3c: b.ne #0xd6da0 */
  if (ARC_COND(c, 1)) goto L_d6da0;
L_d6c40:;
  /* d6c40: subs x8, x2, x8 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 8)));
  /* d6c44: b.eq #0xd6d5c */
  if (ARC_COND(c, 0)) goto L_d6d5c;
  /* d6c48: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
  /* d6c4c: b #0xd6c5c */
  goto L_d6c5c;
L_d6c50:;
  /* d6c50: add x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* d6c54: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* d6c58: b.eq #0xd6c78 */
  if (ARC_COND(c, 0)) goto L_d6c78;
L_d6c5c:;
  /* d6c5c: ldrb w12, [x11, x10] */
  ARC_W_W(c, 12, arc_ld8((ARC_X_R(c, 11) + ARC_X_R(c, 10))));
  /* d6c60: sub w13, w12, #9 */
  ARC_W_W(c, 13, (ARC_W_R(c, 12) - UINT64_C(9)));
  /* d6c64: cmp w13, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(5));
  /* d6c68: b.lo #0xd6c50 */
  if (ARC_COND(c, 3)) goto L_d6c50;
  /* d6c6c: cmp w12, #0x20 */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(32));
  /* d6c70: b.eq #0xd6c50 */
  if (ARC_COND(c, 0)) goto L_d6c50;
  /* d6c74: b #0xd6c80 */
  goto L_d6c80;
L_d6c78:;
  /* d6c78: ldrb w12, [x1, x2] */
  ARC_W_W(c, 12, arc_ld8((ARC_X_R(c, 1) + ARC_X_R(c, 2))));
  /* d6c7c: mov x10, x8 */
  ARC_X_W(c, 10, ARC_X_R(c, 8));
L_d6c80:;
  /* d6c80: cmp w12, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(45));
  /* d6c84: mov w24, #0x7fffffff */
  ARC_W_W(c, 24, UINT64_C(2147483647));
  /* d6c88: b.eq #0xd6c94 */
  if (ARC_COND(c, 0)) goto L_d6c94;
  /* d6c8c: cmp w12, #0x2b */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(43));
  /* d6c90: b.ne #0xd6d64 */
  if (ARC_COND(c, 1)) goto L_d6d64;
L_d6c94:;
  /* d6c94: cmp w12, #0x2b */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(43));
  /* d6c98: add x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* d6c9c: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* d6ca0: cinv w24, w24, ne */
  ARC_W_W(c, 24, (ARC_COND(c, 1) ? (~(uint32_t)(ARC_W_R(c, 24))) : (ARC_W_R(c, 24))));
  /* d6ca4: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* d6ca8: b.hs #0xd6d70 */
  if (ARC_COND(c, 2)) goto L_d6d70;
L_d6cac:;
  /* d6cac: mvn x8, x10 */
  ARC_X_W(c, 8, (~(uint64_t)(ARC_X_R(c, 10))));
  /* d6cb0: add x10, x9, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + ARC_X_R(c, 10)));
  /* d6cb4: mov w26, wzr */
  ARC_W_W(c, 26, ARC_W_R(c, 31));
  /* d6cb8: add x8, x8, x2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 2)));
  /* d6cbc: add x10, x10, x1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + ARC_X_R(c, 1)));
  /* d6cc0: mov w27, wzr */
  ARC_W_W(c, 27, ARC_W_R(c, 31));
  /* d6cc4: sub x28, x8, x9 */
  ARC_X_W(c, 28, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* d6cc8: add x25, x10, #1 */
  ARC_X_W(c, 25, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* d6ccc: stur w11, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 11));
  /* d6cd0: b #0xd6d14 */
  goto L_d6d14;
L_d6cd4:;
  /* d6cd4: add w8, w26, w26, lsl #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 26) + ((uint32_t)(ARC_W_R(c, 26)) << 2)));
  /* d6cd8: mov w10, #0xcccc */
  ARC_W_W(c, 10, UINT64_C(52428));
  /* d6cdc: sub w9, w24, w0 */
  ARC_W_W(c, 9, (ARC_W_R(c, 24) - ARC_W_R(c, 0)));
  /* d6ce0: movk w10, #0xccc, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(214695936)));
  /* d6ce4: lsl w8, w8, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* d6ce8: cmp w26, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 26), ARC_W_R(c, 10));
  /* d6cec: csel w8, w24, w8, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 24)) : ARC_W_R(c, 8)));
  /* d6cf0: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d6cf4: add w8, w0, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + ARC_W_R(c, 8)));
  /* d6cf8: mov w9, #0x22 */
  ARC_W_W(c, 9, UINT64_C(34));
  /* d6cfc: csel w8, w24, w8, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 24)) : ARC_W_R(c, 8)));
  /* d6d00: ccmp w26, w10, #2, ls */
  if (ARC_COND(c, 9)) { (void)arc_sub32(c, ARC_W_R(c, 26), ARC_W_R(c, 10)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 1; (c)->vf = 0; }
  /* d6d04: csel w27, w9, w27, hi */
  ARC_W_W(c, 27, (ARC_COND(c, 8) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 27)));
  /* d6d08: mov w26, w8 */
  ARC_W_W(c, 26, ARC_W_R(c, 8));
  /* d6d0c: subs x28, x28, #1 */
  ARC_X_W(c, 28, arc_sub64(c, ARC_X_R(c, 28), UINT64_C(1)));
  /* d6d10: b.eq #0xd6d4c */
  if (ARC_COND(c, 0)) goto L_d6d4c;
L_d6d14:;
  /* d6d14: ldrb w20, [x25], #1 */
  { const uint64_t _a = ARC_X_R(c, 25);
    ARC_X_W(c, 25, ARC_X_R(c, 25) + INT64_C(1));
    ARC_W_W(c, 20, arc_ld8(_a));
  }
  /* d6d18: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* d6d1c: bl #0xd697c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(879904));
  fn1_d697c(c);
  /* d6d20: tbz w0, #0, #0xd6d4c */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_d6d4c;
  /* d6d24: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* d6d28: bl #0xd69b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(879916));
  fn1_d69b8(c);
  /* d6d2c: cmp w0, #9 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(9));
  /* d6d30: b.hi #0xd6d4c */
  if (ARC_COND(c, 8)) goto L_d6d4c;
  /* d6d34: cmp w26, w24 */
  (void)arc_sub32(c, ARC_W_R(c, 26), ARC_W_R(c, 24));
  /* d6d38: b.ne #0xd6cd4 */
  if (ARC_COND(c, 1)) goto L_d6cd4;
  /* d6d3c: mov w27, #0x22 */
  ARC_W_W(c, 27, UINT64_C(34));
  /* d6d40: mov w26, w24 */
  ARC_W_W(c, 26, ARC_W_R(c, 24));
  /* d6d44: subs x28, x28, #1 */
  ARC_X_W(c, 28, arc_sub64(c, ARC_X_R(c, 28), UINT64_C(1)));
  /* d6d48: b.ne #0xd6d14 */
  if (ARC_COND(c, 1)) goto L_d6d14;
L_d6d4c:;
  /* d6d4c: ldur w11, [x29, #-4] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* d6d50: cmp w27, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 27), UINT64_C(34));
  /* d6d54: b.ne #0xd6d74 */
  if (ARC_COND(c, 1)) goto L_d6d74;
  /* d6d58: b #0xd6d7c */
  goto L_d6d7c;
L_d6d5c:;
  /* d6d5c: mov w24, wzr */
  ARC_W_W(c, 24, ARC_W_R(c, 31));
  /* d6d60: b #0xd6d7c */
  goto L_d6d7c;
L_d6d64:;
  /* d6d64: mov w11, #1 */
  ARC_W_W(c, 11, UINT64_C(1));
  /* d6d68: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* d6d6c: b.lo #0xd6cac */
  if (ARC_COND(c, 3)) goto L_d6cac;
L_d6d70:;
  /* d6d70: mov w26, wzr */
  ARC_W_W(c, 26, ARC_W_R(c, 31));
L_d6d74:;
  /* d6d74: cmp w11, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(0));
  /* d6d78: cneg w24, w26, eq */
  ARC_W_W(c, 24, (ARC_COND(c, 0) ? ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 26))) : (ARC_W_R(c, 26))));
L_d6d7c:;
  /* d6d7c: sxtw x8, w24 */
  ARC_X_W(c, 8, ((int64_t)(int32_t)(ARC_W_R(c, 24))));
  /* d6d80: mov x9, #-0x40000000 */
  ARC_X_W(c, 9, UINT64_C(18446744072635809792));
  /* d6d84: add x8, x8, w23, sxtw */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)(int64_t)(int32_t)(ARC_W_R(c, 23)))));
  /* d6d88: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* d6d8c: csel x8, x8, x9, gt */
  ARC_X_W(c, 8, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d6d90: mov w9, #0x40000000 */
  ARC_W_W(c, 9, UINT64_C(1073741824));
  /* d6d94: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* d6d98: csel x8, x8, x9, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d6d9c: str w8, [x19, #4] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(4)), ARC_W_R(c, 8));
L_d6da0:;
  /* d6da0: cbz x22, #0xd6dc0 */
  if ((ARC_X_R(c, 22)) == 0) goto L_d6dc0;
L_d6da4:;
  /* d6da4: sub x8, x22, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) - UINT64_C(1)));
L_d6da8:;
  /* d6da8: ldrb w9, [x21, w8, uxtw] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 21) + ((uint64_t)(uint32_t)(ARC_W_R(c, 8))))));
  /* d6dac: cbnz w9, #0xd6dc4 */
  if ((ARC_W_R(c, 9)) != 0) goto L_d6dc4;
  /* d6db0: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* d6db4: sub x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* d6db8: cmn w8, #1 */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(1), 0);
  /* d6dbc: b.ne #0xd6da8 */
  if (ARC_COND(c, 1)) goto L_d6da8;
L_d6dc0:;
  /* d6dc0: str wzr, [x19, #4] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(4)), ARC_W_R(c, 31));
L_d6dc4:;
  /* d6dc4: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d6dc8: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* d6dcc: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* d6dd0: ldp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* d6dd4: ldp x28, x27, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* d6dd8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d6ddc: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* d6de0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d6de4: ret  */
  return;
}

void fn1_da608(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038822408));
  /* da608: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* da60c: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* da610: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* da614: adrp x0, #0x51000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(331776)));
  /* da618: add x0, x0, #0x8c9 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2249)));
  /* da61c: bl #0xd7d6c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(894496));
  fn1_d7d6c(c);
}

void fn1_dc2f4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038829812));
  /* dc2f4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* dc2f8: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* dc2fc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* dc300: mov w0, #8 */
  ARC_W_W(c, 0, UINT64_C(8));
  /* dc304: bl #0x142410 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(901896));
  fn1_142410(c);
  /* dc308: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* dc30c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* dc310: adrp x2, #0x151000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1380352)));
  /* dc314: ldr x8, [x8, #0x8d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2256))));
  /* dc318: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* dc31c: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* dc320: ldr x1, [x1, #0x8f0] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2288))));
  /* dc324: ldr x2, [x2, #0x900] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 2) + INT64_C(2304))));
  /* dc328: bl #0x142440 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(901932));
  fn1_142440(c);
}

void fn1_e1470(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038850672));
  /* e1470: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e1474: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e1478: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e147c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e1480: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e1484: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e1488: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* e148c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* e1490: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(922772));
  fn1_142860(c);
  /* e1494: cmn x0, #1 */
  (void)arc_add64(c, ARC_X_R(c, 0), UINT64_C(1), 0);
  /* e1498: b.eq #0xe14f0 */
  if (ARC_COND(c, 0)) goto L_e14f0;
  /* e149c: ldrb w8, [x21] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 21)));
  /* e14a0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e14a4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* e14a8: lsr x9, x8, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e14ac: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e14b0: ldp x10, x8, [x21, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* e14b4: csel x22, x9, x10, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* e14b8: csinc x0, x8, x21, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 8)) : ((ARC_X_R(c, 21)) + 1)));
  /* e14bc: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* e14c0: csel x2, x20, x22, lo */
  ARC_X_W(c, 2, (ARC_COND(c, 3) ? (ARC_X_R(c, 20)) : ARC_X_R(c, 22)));
  /* e14c4: bl #0x142890 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(922824));
  fn1_142890(c);
  /* e14c8: cmp x22, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 20));
  /* e14cc: cset w8, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? 1 : 0));
  /* e14d0: csinv w8, w8, wzr, hs */
  ARC_W_W(c, 8, (ARC_COND(c, 2) ? (ARC_W_R(c, 8)) : (~(uint32_t)(ARC_W_R(c, 31)))));
  /* e14d4: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* e14d8: csel w0, w8, w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 0)));
  /* e14dc: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e14e0: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e14e4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e14e8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e14ec: ret  */
  return;
L_e14f0:;
  /* e14f0: bl #0xda020 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(922868));
  fn1_da020(c);
  /* e14f4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(922872));
  fn1_a1454(c);
}

void fn1_e3ca0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038860960));
  /* e3ca0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e3ca4: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e3ca8: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* e3cac: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e3cb0: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e3cb4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e3cb8: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* e3cbc: cmp x2, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 2), UINT64_C(4));
  /* e3cc0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e3cc4: b.hi #0xe3ce8 */
  if (ARC_COND(c, 8)) goto L_e3ce8;
  /* e3cc8: lsl w8, w19, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 19)) << ((UINT64_C(1)) & 31)));
  /* e3ccc: mov x21, x20 */
  ARC_X_W(c, 21, ARC_X_R(c, 20));
  /* e3cd0: strb w8, [x21], #4 */
  { const uint64_t _a = ARC_X_R(c, 21);
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* e3cd4: cbz x19, #0xe3d3c */
  if ((ARC_X_R(c, 19)) == 0) goto L_e3d3c;
  /* e3cd8: lsl x2, x19, #2 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 19)) << ((UINT64_C(2)) & 63)));
  /* e3cdc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e3ce0: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(933092));
  fn1_1449f0(c);
  /* e3ce4: b #0xe3d3c */
  goto L_e3d3c;
L_e3ce8:;
  /* e3ce8: mov x8, #9 */
  ARC_X_W(c, 8, UINT64_C(9));
  /* e3cec: movk x8, #0xc000, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(13835058055282163712)));
  /* e3cf0: add x9, x19, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* e3cf4: orr x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(4)));
  /* e3cf8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* e3cfc: b.lo #0xe3d5c */
  if (ARC_COND(c, 3)) goto L_e3d5c;
  /* e3d00: cmp x19, #8 */
  (void)arc_sub64(c, ARC_X_R(c, 19), UINT64_C(8));
  /* e3d04: mov w8, #8 */
  ARC_W_W(c, 8, UINT64_C(8));
  /* e3d08: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* e3d0c: csel x8, x19, x8, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 19)) : ARC_X_R(c, 8)));
  /* e3d10: orr x23, x8, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 8) | UINT64_C(1)));
  /* e3d14: lsl x8, x23, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 23)) << ((UINT64_C(2)) & 63)));
  /* e3d18: add x0, x8, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* e3d1c: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(933152));
  fn1_1428f0(c);
  /* e3d20: lsl x2, x19, #2 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 19)) << ((UINT64_C(2)) & 63)));
  /* e3d24: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* e3d28: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e3d2c: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(933168));
  fn1_1449d8(c);
  /* e3d30: add x8, x23, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) + UINT64_C(2)));
  /* e3d34: stp x19, x21, [x20, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e3d38: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
L_e3d3c:;
  /* e3d3c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e3d40: str wzr, [x21, x19, lsl #2] */
  arc_st32((ARC_X_R(c, 21) + ((uint64_t)(ARC_X_R(c, 19)) << 2)), ARC_W_R(c, 31));
  /* e3d44: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e3d48: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* e3d4c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e3d50: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e3d54: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e3d58: ret  */
  return;
L_e3d5c:;
  /* e3d5c: bl #0xe2274 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(933216));
  fn1_e2274(c);
}

void fn1_e8678(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038879864));
  /* e8678: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e867c: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* e8680: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e8684: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e8688: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e868c: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e8690: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* e8694: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* e8698: mov w21, w1 */
  ARC_W_W(c, 21, ARC_W_R(c, 1));
  /* e869c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e86a0: cbz w1, #0xe86e4 */
  if ((ARC_W_R(c, 1)) == 0) goto L_e86e4;
  /* e86a4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* e86a8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e86ac: mov w1, w21 */
  ARC_W_W(c, 1, ARC_W_R(c, 21));
  /* e86b0: add x22, sp, #8 */
  ARC_X_W(c, 22, ((c)->sp + UINT64_C(8)));
  /* e86b4: ldr x9, [x8, #0x30] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* e86b8: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* e86bc: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(952000));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* e86c0: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* e86c4: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* e86c8: ldr x9, [x9, #0x910] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2320))));
  /* e86cc: ldr x10, [sp, #0x18] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(24))));
  /* e86d0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e86d4: add x9, x9, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* e86d8: csinc x22, x10, x22, ne */
  ARC_X_W(c, 22, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 22)) + 1)));
  /* e86dc: str x9, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 9));
  /* e86e0: b #0xe8704 */
  goto L_e8704;
L_e86e4:;
  /* e86e4: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* e86e8: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* e86ec: ldr x8, [x8, #0x910] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2320))));
  /* e86f0: stp xzr, xzr, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* e86f4: orr x22, x9, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* e86f8: str xzr, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 31));
  /* e86fc: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* e8700: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
L_e8704:;
  /* e8704: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* e8708: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(952076));
  fn1_142860(c);
  /* e870c: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* e8710: add x0, x0, #0x19 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(25)));
  /* e8714: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(952088));
  fn1_1428f0(c);
  /* e8718: add x24, x0, #0x18 */
  ARC_X_W(c, 24, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* e871c: stp x23, x23, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e8720: add x2, x23, #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* e8724: str wzr, [x0, #0x10] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(16)), ARC_W_R(c, 31));
  /* e8728: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* e872c: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* e8730: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(952116));
  fn1_1449d8(c);
  /* e8734: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* e8738: str x24, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 24));
  /* e873c: tbz w8, #0, #0xe8750 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_e8750;
  /* e8740: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* e8744: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* e8748: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* e874c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(952144));
  fn1_142608(c);
L_e8750:;
  /* e8750: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* e8754: ldr x8, [x8, #0xa50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2640))));
  /* e8758: str w21, [x20, #0x10] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(16)), ARC_W_R(c, 21));
  /* e875c: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* e8760: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* e8764: str x19, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 19));
  /* e8768: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e876c: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e8770: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e8774: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e8778: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* e877c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e8780: ret  */
  return;
  /* e8784: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* e8788: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e878c: tbz w8, #0, #0xe87a0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_e87a0;
  /* e8790: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* e8794: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* e8798: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* e879c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(952224));
  fn1_142608(c);
L_e87a0:;
  /* e87a0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e87a4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(952232));
  fn1_9cc20(c);
}

void fn1_eac20(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038889504));
  /* eac20: bti c */
  /* bti: no architectural effect here */
  /* eac24: mov w1, #8 */
  ARC_W_W(c, 1, UINT64_C(8));
  /* eac28: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_ec2b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038895280));
  /* ec2b0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ec2b4: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ec2b8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ec2bc: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* ec2c0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ec2c4: ldr x1, [x1, #0xa88] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2696))));
  /* ec2c8: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(967372));
  fn1_a2030(c);
  /* ec2cc: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ec2d0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ec2d4: ret  */
  return;
}

void fn1_edb98(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038901656));
  /* edb98: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* edb9c: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* edba0: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* edba4: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* edba8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* edbac: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* edbb0: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* edbb4: strb wzr, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 31));
  /* edbb8: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* edbbc: add x9, x1, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) + ARC_X_R(c, 9)));
  /* edbc0: ldr w10, [x9, #0x20] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* edbc4: cbz w10, #0xedbf8 */
  if ((ARC_W_R(c, 10)) == 0) goto L_edbf8;
  /* edbc8: ldr x8, [x9, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(40))));
  /* edbcc: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* edbd0: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* edbd4: orr w8, w10, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 10) | ARC_W_R(c, 8)));
  /* edbd8: ldr w10, [x9, #0x24] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(36))));
  /* edbdc: orr w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* edbe0: tst w8, w10 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 10)));
  /* edbe4: str w8, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 8));
  /* edbe8: b.eq #0xeddb8 */
  if (ARC_COND(c, 0)) goto L_eddb8;
L_edbec:;
  /* edbec: nop  */
  /* nop: no architectural effect here */
  /* edbf0: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* edbf4: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(973816));
  fn1_ec720(c);
L_edbf8:;
  /* edbf8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* edbfc: ldr x0, [x9, #0x88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(136))));
  /* edc00: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* edc04: cbz x0, #0xedc18 */
  if ((ARC_X_R(c, 0)) == 0) goto L_edc18;
  /* edc08: mov w21, w2 */
  ARC_W_W(c, 21, ARC_W_R(c, 2));
  /* edc0c: bl #0x143490 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(973840));
  fn1_143490(c);
  /* edc10: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* edc14: mov w2, w21 */
  ARC_W_W(c, 2, ARC_W_R(c, 21));
L_edc18:;
  /* edc18: tbnz w2, #0, #0xedda0 */
  if (((ARC_W_R(c, 2)) >> 0 & 1) != 0) goto L_edda0;
  /* edc1c: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* edc20: add x9, x20, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) + ARC_X_R(c, 9)));
  /* edc24: ldrb w10, [x9, #9] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 9) + INT64_C(9))));
  /* edc28: tbz w10, #4, #0xedda0 */
  if (((ARC_W_R(c, 10)) >> 4 & 1) == 0) goto L_edda0;
  /* edc2c: ldr x22, [x9, #0x30] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 9) + INT64_C(48))));
  /* edc30: nop  */
  /* nop: no architectural effect here */
  /* edc34: adr x23, #0x15dc40 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1432640)));
  /* edc38: cmp x22, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 23));
  /* edc3c: str x22, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 22));
  /* edc40: b.eq #0xedc50 */
  if (ARC_COND(c, 0)) goto L_edc50;
  /* edc44: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* edc48: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* edc4c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(973904));
  fn1_db2e0(c);
L_edc50:;
  /* edc50: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* edc54: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* edc58: ldr x1, [x1, #0xb40] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2880))));
  /* edc5c: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(973920));
  fn1_143748(c);
  /* edc60: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* edc64: cmp x22, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 23));
  /* edc68: b.eq #0xedc8c */
  if (ARC_COND(c, 0)) goto L_edc8c;
  /* edc6c: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* edc70: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* edc74: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(973944));
  fn1_bd950(c);
  /* edc78: cbnz x0, #0xedc8c */
  if ((ARC_X_R(c, 0)) != 0) goto L_edc8c;
  /* edc7c: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* edc80: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* edc84: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* edc88: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(973964));
  arc_dispatch(c, ARC_X_R(c, 8));
L_edc8c:;
  /* edc8c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* edc90: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* edc94: add x9, x20, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) + ARC_X_R(c, 9)));
  /* edc98: ldr x22, [x9, #0x28] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 9) + INT64_C(40))));
  /* edc9c: cbnz x22, #0xedcac */
  if ((ARC_X_R(c, 22)) != 0) goto L_edcac;
  /* edca0: b #0xedd74 */
  goto L_edd74;
L_edca4:;
  /* edca4: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* edca8: str x8, [x22, #0x18] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(24)), ARC_X_R(c, 8));
L_edcac:;
  /* edcac: ldp x8, x9, [x22, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 22) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* edcb0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* edcb4: b.eq #0xedccc */
  if (ARC_COND(c, 0)) goto L_edccc;
  /* edcb8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* edcbc: b.eq #0xedcf0 */
  if (ARC_COND(c, 0)) goto L_edcf0;
L_edcc0:;
  /* edcc0: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* edcc4: tbz w8, #7, #0xedd08 */
  if (((ARC_W_R(c, 8)) >> 7 & 1) == 0) goto L_edd08;
  /* edcc8: b #0xedd38 */
  goto L_edd38;
L_edccc:;
  /* edccc: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* edcd0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* edcd4: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* edcd8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(974044));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* edcdc: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* edce0: b.eq #0xedd70 */
  if (ARC_COND(c, 0)) goto L_edd70;
  /* edce4: ldp x8, x9, [x22, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 22) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* edce8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* edcec: b.ne #0xedcc0 */
  if (ARC_COND(c, 1)) goto L_edcc0;
L_edcf0:;
  /* edcf0: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* edcf4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* edcf8: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* edcfc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(974080));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* edd00: and x8, x0, #0xff */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) & UINT64_C(255)));
  /* edd04: tbnz w8, #7, #0xedd38 */
  if (((ARC_W_R(c, 8)) >> 7 & 1) != 0) goto L_edd38;
L_edd08:;
  /* edd08: ldr x9, [x21, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* edd0c: ldr x9, [x9, x8, lsl #3] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 3))));
  /* edd10: ldr x8, [x22, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(24))));
  /* edd14: tbz w9, #0, #0xedd3c */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_edd3c;
  /* edd18: ldr x9, [x22, #0x20] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 22) + INT64_C(32))));
  /* edd1c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* edd20: b.ne #0xedca4 */
  if (ARC_COND(c, 1)) goto L_edca4;
  /* edd24: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* edd28: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* edd2c: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* edd30: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(974132));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* edd34: b #0xedcac */
  goto L_edcac;
L_edd38:;
  /* edd38: ldr x8, [x22, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(24))));
L_edd3c:;
  /* edd3c: ldr x9, [x22, #0x20] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 22) + INT64_C(32))));
  /* edd40: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* edd44: b.eq #0xedd50 */
  if (ARC_COND(c, 0)) goto L_edd50;
  /* edd48: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* edd4c: b #0xedda0 */
  goto L_edda0;
L_edd50:;
  /* edd50: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* edd54: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* edd58: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* edd5c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(974176));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* edd60: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* edd64: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* edd68: b.ne #0xedda0 */
  if (ARC_COND(c, 1)) goto L_edda0;
  /* edd6c: b #0xedd74 */
  goto L_edd74;
L_edd70:;
  /* edd70: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
L_edd74:;
  /* edd74: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* edd78: add x9, x20, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) + ARC_X_R(c, 9)));
  /* edd7c: ldr x10, [x9, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 9) + INT64_C(40))));
  /* edd80: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* edd84: ldp w10, w12, [x9, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(32));
    ARC_W_W(c, 10, arc_ld32(_pa));
    ARC_W_W(c, 12, arc_ld32(_pa + 4));
  }
  /* edd88: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* edd8c: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* edd90: orr w10, w10, #6 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(6)));
  /* edd94: tst w10, w12 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 12)));
  /* edd98: str w10, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 10));
  /* edd9c: b.ne #0xedbec */
  if (ARC_COND(c, 1)) goto L_edbec;
L_edda0:;
  /* edda0: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* edda4: add x8, x20, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* edda8: ldr w8, [x8, #0x20] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* eddac: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* eddb0: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* eddb4: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_eddb8:;
  /* eddb8: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* eddbc: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* eddc0: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* eddc4: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eddc8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eddcc: ret  */
  return;
  /* eddd0: cmp x22, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 23));
  /* eddd4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* eddd8: b.eq #0xeddfc */
  if (ARC_COND(c, 0)) goto L_eddfc;
  /* edddc: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* edde0: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* edde4: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(974312));
  fn1_bd950(c);
  /* edde8: cbnz x0, #0xeddfc */
  if ((ARC_X_R(c, 0)) != 0) goto L_eddfc;
  /* eddec: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* eddf0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* eddf4: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* eddf8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(974332));
  arc_dispatch(c, ARC_X_R(c, 8));
L_eddfc:;
  /* eddfc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ede00: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(974340));
  fn1_9cc20(c);
}

void fn1_f3070(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038923376));
  /* f3070: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f3074: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* f3078: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f307c: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f3080: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f3084: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f3088: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* f308c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f3090: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f3094: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f3098: bl #0x143610 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(995484));
  fn1_143610(c);
  /* f309c: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* f30a0: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f30a4: b.ne #0xf31d4 */
  if (ARC_COND(c, 1)) goto L_f31d4;
  /* f30a8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f30ac: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f30b0: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f30b4: cbz x20, #0xf3180 */
  if ((ARC_X_R(c, 20)) == 0) goto L_f3180;
  /* f30b8: ldr x21, [x8, #0x28] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f30bc: mov x22, xzr */
  ARC_X_W(c, 22, ARC_X_R(c, 31));
  /* f30c0: b #0xf30d0 */
  goto L_f30d0;
L_f30c4:;
  /* f30c4: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* f30c8: str x8, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 8));
L_f30cc:;
  /* f30cc: sub x22, x22, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) - UINT64_C(1)));
L_f30d0:;
  /* f30d0: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f30d4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* f30d8: b.eq #0xf30f0 */
  if (ARC_COND(c, 0)) goto L_f30f0;
  /* f30dc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* f30e0: b.eq #0xf3114 */
  if (ARC_COND(c, 0)) goto L_f3114;
L_f30e4:;
  /* f30e4: ldrb w1, [x8] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 8)));
  /* f30e8: cbnz x21, #0xf312c */
  if ((ARC_X_R(c, 21)) != 0) goto L_f312c;
  /* f30ec: b #0xf31a4 */
  goto L_f31a4;
L_f30f0:;
  /* f30f0: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* f30f4: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* f30f8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f30fc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(995584));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f3100: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* f3104: b.eq #0xf31a0 */
  if (ARC_COND(c, 0)) goto L_f31a0;
  /* f3108: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f310c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* f3110: b.ne #0xf30e4 */
  if (ARC_COND(c, 1)) goto L_f30e4;
L_f3114:;
  /* f3114: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* f3118: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* f311c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f3120: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(995620));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f3124: and w1, w0, #0xff */
  ARC_W_W(c, 1, (ARC_W_R(c, 0) & UINT64_C(255)));
  /* f3128: cbz x21, #0xf31a4 */
  if ((ARC_X_R(c, 21)) == 0) goto L_f31a4;
L_f312c:;
  /* f312c: ldp x8, x9, [x21, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(48));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f3130: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* f3134: b.eq #0xf3148 */
  if (ARC_COND(c, 0)) goto L_f3148;
  /* f3138: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* f313c: str x9, [x21, #0x30] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(48)), ARC_X_R(c, 9));
  /* f3140: strb w1, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 1));
  /* f3144: b #0xf3160 */
  goto L_f3160;
L_f3148:;
  /* f3148: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* f314c: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* f3150: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f3154: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(995672));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f3158: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* f315c: b.eq #0xf31a0 */
  if (ARC_COND(c, 0)) goto L_f31a0;
L_f3160:;
  /* f3160: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f3164: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* f3168: b.ne #0xf30c4 */
  if (ARC_COND(c, 1)) goto L_f30c4;
  /* f316c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* f3170: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* f3174: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f3178: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(995708));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f317c: b #0xf30cc */
  goto L_f30cc;
L_f3180:;
  /* f3180: ldp w9, w10, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* f3184: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f3188: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* f318c: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f3190: b.eq #0xf31d4 */
  if (ARC_COND(c, 0)) goto L_f31d4;
  /* f3194: nop  */
  /* nop: no architectural effect here */
  /* f3198: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f319c: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(995744));
  fn1_ec720(c);
L_f31a0:;
  /* f31a0: cbnz x22, #0xf31d4 */
  if ((ARC_X_R(c, 22)) != 0) goto L_f31d4;
L_f31a4:;
  /* f31a4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f31a8: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f31ac: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f31b0: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f31b4: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* f31b8: ldp w9, w11, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* f31bc: cset w10, eq */
  ARC_W_W(c, 10, (ARC_COND(c, 0) ? 1 : 0));
  /* f31c0: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* f31c4: orr w9, w9, #4 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(4)));
  /* f31c8: tst w9, w11 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & ARC_W_R(c, 11)));
  /* f31cc: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f31d0: b.ne #0xf31f8 */
  if (ARC_COND(c, 1)) goto L_f31f8;
L_f31d4:;
  /* f31d4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f31d8: bl #0x143628 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(995804));
  fn1_143628(c);
L_f31dc:;
  /* f31dc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f31e0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f31e4: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f31e8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f31ec: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* f31f0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f31f4: ret  */
  return;
L_f31f8:;
  /* f31f8: nop  */
  /* nop: no architectural effect here */
  /* f31fc: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f3200: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(995844));
  fn1_ec720(c);
  /* f3204: b #0xf3250 */
  goto L_f3250;
  /* f3208: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_f320c:;
  /* f320c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f3210: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(995860));
  fn1_142548(c);
  /* f3214: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f3218: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f321c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f3220: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* f3224: ldrb w10, [x8, #0x24] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f3228: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f322c: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f3230: tbnz w10, #0, #0xf323c */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_f323c;
  /* f3234: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(995896));
  fn1_142980(c);
  /* f3238: b #0xf31dc */
  goto L_f31dc;
L_f323c:;
  /* f323c: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(995904));
  fn1_1429b0(c);
  /* f3240: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f3244: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(995912));
  fn1_142980(c);
  /* f3248: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f324c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(995920));
  fn1_9cc20(c);
L_f3250:;
  /* f3250: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(995924));
  fn1_142548(c);
  /* f3254: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f3258: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f325c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f3260: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* f3264: ldrb w10, [x8, #0x24] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f3268: orr w9, w9, #4 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(4)));
  /* f326c: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f3270: tbnz w10, #2, #0xf327c */
  if (((ARC_W_R(c, 10)) >> 2 & 1) != 0) goto L_f327c;
  /* f3274: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(995960));
  fn1_142980(c);
  /* f3278: b #0xf31d4 */
  goto L_f31d4;
L_f327c:;
  /* f327c: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(995968));
  fn1_1429b0(c);
  /* f3280: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f3284: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(995976));
  fn1_142980(c);
  /* f3288: b #0xf3294 */
  goto L_f3294;
  /* f328c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(995984));
  fn1_a1454(c);
  /* f3290: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_f3294:;
  /* f3294: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f3298: bl #0x143628 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(995996));
  fn1_143628(c);
  /* f329c: b #0xf320c */
  goto L_f320c;
}

void fn1_f45d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038928852));
  /* f45d4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f45d8: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f45dc: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* f45e0: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f45e4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f45e8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f45ec: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* f45f0: strb wzr, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 31));
  /* f45f4: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f45f8: add x9, x1, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) + ARC_X_R(c, 9)));
  /* f45fc: ldr w10, [x9, #0x20] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f4600: cbz w10, #0xf4634 */
  if ((ARC_W_R(c, 10)) == 0) goto L_f4634;
  /* f4604: ldr x8, [x9, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(40))));
  /* f4608: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* f460c: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* f4610: orr w8, w10, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 10) | ARC_W_R(c, 8)));
  /* f4614: ldr w10, [x9, #0x24] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(36))));
  /* f4618: orr w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* f461c: tst w8, w10 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 10)));
  /* f4620: str w8, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 8));
  /* f4624: b.eq #0xf47f0 */
  if (ARC_COND(c, 0)) goto L_f47f0;
L_f4628:;
  /* f4628: nop  */
  /* nop: no architectural effect here */
  /* f462c: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f4630: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1001012));
  fn1_ec720(c);
L_f4634:;
  /* f4634: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f4638: ldr x0, [x9, #0x88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(136))));
  /* f463c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* f4640: cbz x0, #0xf4654 */
  if ((ARC_X_R(c, 0)) == 0) goto L_f4654;
  /* f4644: mov w21, w2 */
  ARC_W_W(c, 21, ARC_W_R(c, 2));
  /* f4648: bl #0x143508 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1001036));
  fn1_143508(c);
  /* f464c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* f4650: mov w2, w21 */
  ARC_W_W(c, 2, ARC_W_R(c, 21));
L_f4654:;
  /* f4654: tbnz w2, #0, #0xf47d8 */
  if (((ARC_W_R(c, 2)) >> 0 & 1) != 0) goto L_f47d8;
  /* f4658: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f465c: add x9, x20, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) + ARC_X_R(c, 9)));
  /* f4660: ldrb w10, [x9, #9] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 9) + INT64_C(9))));
  /* f4664: tbz w10, #4, #0xf47d8 */
  if (((ARC_W_R(c, 10)) >> 4 & 1) == 0) goto L_f47d8;
  /* f4668: ldr x22, [x9, #0x30] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 9) + INT64_C(48))));
  /* f466c: nop  */
  /* nop: no architectural effect here */
  /* f4670: adr x23, #0x15dc40 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f4674: cmp x22, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 23));
  /* f4678: str x22, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 22));
  /* f467c: b.eq #0xf468c */
  if (ARC_COND(c, 0)) goto L_f468c;
  /* f4680: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f4684: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f4688: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1001100));
  fn1_db2e0(c);
L_f468c:;
  /* f468c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f4690: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* f4694: ldr x1, [x1, #0xb58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2904))));
  /* f4698: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1001116));
  fn1_143748(c);
  /* f469c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* f46a0: cmp x22, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 23));
  /* f46a4: b.eq #0xf46c8 */
  if (ARC_COND(c, 0)) goto L_f46c8;
  /* f46a8: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f46ac: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f46b0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1001140));
  fn1_bd950(c);
  /* f46b4: cbnz x0, #0xf46c8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f46c8;
  /* f46b8: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f46bc: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* f46c0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f46c4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1001160));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f46c8:;
  /* f46c8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* f46cc: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f46d0: add x9, x20, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) + ARC_X_R(c, 9)));
  /* f46d4: ldr x22, [x9, #0x28] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 9) + INT64_C(40))));
  /* f46d8: cbnz x22, #0xf46f0 */
  if ((ARC_X_R(c, 22)) != 0) goto L_f46f0;
  /* f46dc: b #0xf47ac */
  goto L_f47ac;
L_f46e0:;
  /* f46e0: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f46e4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* f46e8: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* f46ec: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1001200));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f46f0:;
  /* f46f0: ldp x8, x9, [x22, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 22) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f46f4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* f46f8: b.eq #0xf470c */
  if (ARC_COND(c, 0)) goto L_f470c;
  /* f46fc: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* f4700: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* f4704: b.ne #0xf4724 */
  if (ARC_COND(c, 1)) goto L_f4724;
  /* f4708: b #0xf477c */
  goto L_f477c;
L_f470c:;
  /* f470c: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f4710: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* f4714: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* f4718: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1001244));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f471c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* f4720: b.eq #0xf477c */
  if (ARC_COND(c, 0)) goto L_f477c;
L_f4724:;
  /* f4724: ldp x8, x9, [x22, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 22) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f4728: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* f472c: b.eq #0xf4738 */
  if (ARC_COND(c, 0)) goto L_f4738;
  /* f4730: ldr w2, [x8] */
  ARC_W_W(c, 2, arc_ld32(ARC_X_R(c, 8)));
  /* f4734: b #0xf474c */
  goto L_f474c;
L_f4738:;
  /* f4738: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f473c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* f4740: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* f4744: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1001288));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f4748: mov w2, w0 */
  ARC_W_W(c, 2, ARC_W_R(c, 0));
L_f474c:;
  /* f474c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* f4750: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f4754: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* f4758: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* f475c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1001312));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f4760: ldp x8, x9, [x22, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 22) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f4764: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* f4768: tbz w0, #0, #0xf4784 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_f4784;
  /* f476c: b.eq #0xf46e0 */
  if (ARC_COND(c, 0)) goto L_f46e0;
  /* f4770: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* f4774: str x8, [x22, #0x18] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(24)), ARC_X_R(c, 8));
  /* f4778: b #0xf46f0 */
  goto L_f46f0;
L_f477c:;
  /* f477c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* f4780: b #0xf47ac */
  goto L_f47ac;
L_f4784:;
  /* f4784: b.eq #0xf4790 */
  if (ARC_COND(c, 0)) goto L_f4790;
  /* f4788: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* f478c: b #0xf47a0 */
  goto L_f47a0;
L_f4790:;
  /* f4790: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f4794: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* f4798: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* f479c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1001376));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f47a0:;
  /* f47a0: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* f47a4: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* f47a8: b.ne #0xf47d8 */
  if (ARC_COND(c, 1)) goto L_f47d8;
L_f47ac:;
  /* f47ac: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f47b0: add x9, x20, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) + ARC_X_R(c, 9)));
  /* f47b4: ldr x10, [x9, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 9) + INT64_C(40))));
  /* f47b8: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* f47bc: ldp w10, w12, [x9, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(32));
    ARC_W_W(c, 10, arc_ld32(_pa));
    ARC_W_W(c, 12, arc_ld32(_pa + 4));
  }
  /* f47c0: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* f47c4: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* f47c8: orr w10, w10, #6 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(6)));
  /* f47cc: tst w10, w12 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 12)));
  /* f47d0: str w10, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 10));
  /* f47d4: b.ne #0xf4628 */
  if (ARC_COND(c, 1)) goto L_f4628;
L_f47d8:;
  /* f47d8: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f47dc: add x8, x20, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* f47e0: ldr w8, [x8, #0x20] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* f47e4: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* f47e8: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* f47ec: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_f47f0:;
  /* f47f0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f47f4: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* f47f8: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f47fc: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f4800: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f4804: ret  */
  return;
  /* f4808: cmp x22, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 23));
  /* f480c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f4810: b.eq #0xf4834 */
  if (ARC_COND(c, 0)) goto L_f4834;
  /* f4814: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f4818: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f481c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1001504));
  fn1_bd950(c);
  /* f4820: cbnz x0, #0xf4834 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f4834;
  /* f4824: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f4828: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* f482c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f4830: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1001524));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f4834:;
  /* f4834: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f4838: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1001532));
  fn1_9cc20(c);
}

void fn1_f9ae8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038950632));
  /* f9ae8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f9aec: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* f9af0: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f9af4: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f9af8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f9afc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f9b00: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* f9b04: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f9b08: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f9b0c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f9b10: bl #0x143688 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1022740));
  fn1_143688(c);
  /* f9b14: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* f9b18: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f9b1c: b.ne #0xf9c48 */
  if (ARC_COND(c, 1)) goto L_f9c48;
  /* f9b20: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f9b24: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f9b28: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f9b2c: cbz x20, #0xf9c34 */
  if ((ARC_X_R(c, 20)) == 0) goto L_f9c34;
  /* f9b30: ldr x21, [x8, #0x28] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f9b34: mov x22, xzr */
  ARC_X_W(c, 22, ARC_X_R(c, 31));
  /* f9b38: b #0xf9b48 */
  goto L_f9b48;
L_f9b3c:;
  /* f9b3c: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* f9b40: str x8, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 8));
L_f9b44:;
  /* f9b44: sub x22, x22, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) - UINT64_C(1)));
L_f9b48:;
  /* f9b48: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f9b4c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* f9b50: b.eq #0xf9b5c */
  if (ARC_COND(c, 0)) goto L_f9b5c;
  /* f9b54: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* f9b58: b #0xf9b6c */
  goto L_f9b6c;
L_f9b5c:;
  /* f9b5c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* f9b60: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* f9b64: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f9b68: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1022828));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f9b6c:;
  /* f9b6c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* f9b70: b.eq #0xf9bf4 */
  if (ARC_COND(c, 0)) goto L_f9bf4;
  /* f9b74: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f9b78: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* f9b7c: b.eq #0xf9b88 */
  if (ARC_COND(c, 0)) goto L_f9b88;
  /* f9b80: ldr w1, [x8] */
  ARC_W_W(c, 1, arc_ld32(ARC_X_R(c, 8)));
  /* f9b84: b #0xf9b9c */
  goto L_f9b9c;
L_f9b88:;
  /* f9b88: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* f9b8c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* f9b90: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f9b94: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1022872));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f9b98: mov w1, w0 */
  ARC_W_W(c, 1, ARC_W_R(c, 0));
L_f9b9c:;
  /* f9b9c: cbz x21, #0xf9bf8 */
  if ((ARC_X_R(c, 21)) == 0) goto L_f9bf8;
  /* f9ba0: ldp x8, x9, [x21, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(48));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f9ba4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* f9ba8: b.eq #0xf9bb8 */
  if (ARC_COND(c, 0)) goto L_f9bb8;
  /* f9bac: str w1, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 1));
  }
  /* f9bb0: str x8, [x21, #0x30] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(48)), ARC_X_R(c, 8));
  /* f9bb4: b #0xf9bcc */
  goto L_f9bcc;
L_f9bb8:;
  /* f9bb8: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* f9bbc: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* f9bc0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f9bc4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1022920));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f9bc8: mov w1, w0 */
  ARC_W_W(c, 1, ARC_W_R(c, 0));
L_f9bcc:;
  /* f9bcc: cmn w1, #1 */
  (void)arc_add32(c, ARC_W_R(c, 1), UINT64_C(1), 0);
  /* f9bd0: b.eq #0xf9bf4 */
  if (ARC_COND(c, 0)) goto L_f9bf4;
  /* f9bd4: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f9bd8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* f9bdc: b.ne #0xf9b3c */
  if (ARC_COND(c, 1)) goto L_f9b3c;
  /* f9be0: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* f9be4: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* f9be8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f9bec: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1022960));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f9bf0: b #0xf9b44 */
  goto L_f9b44;
L_f9bf4:;
  /* f9bf4: cbnz x22, #0xf9c48 */
  if ((ARC_X_R(c, 22)) != 0) goto L_f9c48;
L_f9bf8:;
  /* f9bf8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f9bfc: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f9c00: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f9c04: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f9c08: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* f9c0c: ldp w9, w11, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* f9c10: cset w10, eq */
  ARC_W_W(c, 10, (ARC_COND(c, 0) ? 1 : 0));
  /* f9c14: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* f9c18: orr w9, w9, #4 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(4)));
  /* f9c1c: tst w9, w11 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & ARC_W_R(c, 11)));
  /* f9c20: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f9c24: b.eq #0xf9c48 */
  if (ARC_COND(c, 0)) goto L_f9c48;
  /* f9c28: nop  */
  /* nop: no architectural effect here */
  /* f9c2c: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f9c30: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1023028));
  fn1_ec720(c);
L_f9c34:;
  /* f9c34: ldp w9, w10, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* f9c38: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f9c3c: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* f9c40: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f9c44: b.ne #0xf9c6c */
  if (ARC_COND(c, 1)) goto L_f9c6c;
L_f9c48:;
  /* f9c48: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f9c4c: bl #0x1436a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1023056));
  fn1_1436a0(c);
L_f9c50:;
  /* f9c50: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f9c54: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f9c58: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f9c5c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f9c60: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* f9c64: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f9c68: ret  */
  return;
L_f9c6c:;
  /* f9c6c: nop  */
  /* nop: no architectural effect here */
  /* f9c70: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f9c74: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1023096));
  fn1_ec720(c);
  /* f9c78: b #0xf9cc4 */
  goto L_f9cc4;
  /* f9c7c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_f9c80:;
  /* f9c80: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f9c84: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1023112));
  fn1_142548(c);
  /* f9c88: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f9c8c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f9c90: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f9c94: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* f9c98: ldrb w10, [x8, #0x24] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f9c9c: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f9ca0: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f9ca4: tbnz w10, #0, #0xf9cb0 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_f9cb0;
  /* f9ca8: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1023148));
  fn1_142980(c);
  /* f9cac: b #0xf9c50 */
  goto L_f9c50;
L_f9cb0:;
  /* f9cb0: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1023156));
  fn1_1429b0(c);
  /* f9cb4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f9cb8: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1023164));
  fn1_142980(c);
  /* f9cbc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f9cc0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1023172));
  fn1_9cc20(c);
L_f9cc4:;
  /* f9cc4: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1023176));
  fn1_142548(c);
  /* f9cc8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f9ccc: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f9cd0: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f9cd4: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* f9cd8: ldrb w10, [x8, #0x24] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f9cdc: orr w9, w9, #4 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(4)));
  /* f9ce0: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f9ce4: tbnz w10, #2, #0xf9cf0 */
  if (((ARC_W_R(c, 10)) >> 2 & 1) != 0) goto L_f9cf0;
  /* f9ce8: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1023212));
  fn1_142980(c);
  /* f9cec: b #0xf9c48 */
  goto L_f9c48;
L_f9cf0:;
  /* f9cf0: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1023220));
  fn1_1429b0(c);
  /* f9cf4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f9cf8: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1023228));
  fn1_142980(c);
  /* f9cfc: b #0xf9d08 */
  goto L_f9d08;
  /* f9d00: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1023236));
  fn1_a1454(c);
  /* f9d04: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_f9d08:;
  /* f9d08: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f9d0c: bl #0x1436a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1023248));
  fn1_1436a0(c);
  /* f9d10: b #0xf9c80 */
  goto L_f9c80;
}

void fn1_fda28(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038966824));
  /* fda28: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fda2c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fda30: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fda34: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fda38: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fda3c: ldr x8, [x8, #0xb28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2856))));
  /* fda40: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* fda44: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* fda48: add x19, x0, x9 */
  ARC_X_W(c, 19, (ARC_X_R(c, 0) + ARC_X_R(c, 9)));
  /* fda4c: add x9, x8, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* fda50: add x8, x8, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* fda54: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fda58: mov x20, x19 */
  ARC_X_W(c, 20, ARC_X_R(c, 19));
  /* fda5c: str x9, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* fda60: str x8, [x20, #0xb0]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(176));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(176));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* fda64: bl #0x1436d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1038952));
  fn1_1436d0(c);
  /* fda68: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fda6c: bl #0x1433b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1038960));
  fn1_1433b8(c);
  /* fda70: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fda74: mov w1, #0x148 */
  ARC_W_W(c, 1, UINT64_C(328));
  /* fda78: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fda7c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fda80: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fda84: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_108078(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039009400));
  /* 108078: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 10807c: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 108080: stp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 108084: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 108088: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 10808c: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 108090: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 108094: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 108098: sub sp, sp, #0x1a0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(416)));
  /* 10809c: mov x0, x3 */
  ARC_X_W(c, 0, ARC_X_R(c, 3));
  /* 1080a0: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 1080a4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1080a8: sub x8, x29, #0x98 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(152)));
  /* 1080ac: sub x1, x29, #0x78 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(120)));
  /* 1080b0: sub x2, x29, #0x7c */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(124)));
  /* 1080b4: sub x3, x29, #0x80 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(128)));
  /* 1080b8: stp x5, x4, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 5));
    arc_st64(_pa + 8, ARC_X_R(c, 4));
  }
  /* 1080bc: sub x25, x29, #0xb8 */
  ARC_X_W(c, 25, (ARC_X_R(c, 29) - UINT64_C(184)));
  /* 1080c0: bl #0x1438c8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1081540));
  fn1_1438c8(c);
  /* 1080c4: stp xzr, xzr, [x25, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1080c8: str xzr, [x25, #0x18] */
  arc_st64((ARC_X_R(c, 25) + INT64_C(24)), ARC_X_R(c, 31));
  /* 1080cc: sub x0, x29, #0xb0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(176)));
  /* 1080d0: mov w1, #0x16 */
  ARC_W_W(c, 1, UINT64_C(22));
  /* 1080d4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1080d8: sub x20, x29, #0xb0 */
  ARC_X_W(c, 20, (ARC_X_R(c, 29) - UINT64_C(176)));
  /* 1080dc: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1081568));
  fn1_142d10(c);
  /* 1080e0: ldurb w8, [x29, #-0xb0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-176))));
  /* 1080e4: ldr x9, [x25, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 25) + INT64_C(24))));
  /* 1080e8: mov w26, wzr */
  ARC_W_W(c, 26, ARC_W_R(c, 31));
  /* 1080ec: add x27, sp, #0x48 */
  ARC_X_W(c, 27, ((c)->sp + UINT64_C(72)));
  /* 1080f0: mov w10, #1 */
  ARC_W_W(c, 10, UINT64_C(1));
  /* 1080f4: orr x28, x20, #1 */
  ARC_X_W(c, 28, (ARC_X_R(c, 20) | UINT64_C(1)));
  /* 1080f8: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1080fc: mov w8, #0x45 */
  ARC_W_W(c, 8, UINT64_C(69));
  /* 108100: add x22, sp, #0x40 */
  ARC_X_W(c, 22, ((c)->sp + UINT64_C(64)));
  /* 108104: csinc x23, x9, x20, ne */
  ARC_X_W(c, 23, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 20)) + 1)));
  /* 108108: add x20, sp, #0x3c */
  ARC_X_W(c, 20, ((c)->sp + UINT64_C(60)));
  /* 10810c: str wzr, [sp, #0x3c] */
  arc_st32(((c)->sp + INT64_C(60)), ARC_W_R(c, 31));
  /* 108110: str x27, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 27));
  /* 108114: strb w10, [sp, #0x38] */
  arc_st8(((c)->sp + INT64_C(56)), ARC_W_R(c, 10));
  /* 108118: strb w8, [sp, #0x34] */
  arc_st8(((c)->sp + INT64_C(52)), ARC_W_R(c, 8));
  /* 10811c: str x23, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 23));
  /* 108120: b #0x10812c */
  goto L_10812c;
L_108124:;
  /* 108124: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 108128: str x8, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 8));
L_10812c:;
  /* 10812c: cbz x19, #0x108144 */
  if ((ARC_X_R(c, 19)) == 0) goto L_108144;
  /* 108130: ldp x8, x9, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 108134: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 108138: b.eq #0x108150 */
  if (ARC_COND(c, 0)) goto L_108150;
  /* 10813c: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 108140: b #0x108160 */
  goto L_108160;
L_108144:;
  /* 108144: cbz x21, #0x10838c */
  if ((ARC_X_R(c, 21)) == 0) goto L_10838c;
  /* 108148: mov w24, #1 */
  ARC_W_W(c, 24, UINT64_C(1));
  /* 10814c: b #0x108174 */
  goto L_108174;
L_108150:;
  /* 108150: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 108154: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 108158: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10815c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1081696));
  arc_dispatch(c, ARC_X_R(c, 8));
L_108160:;
  /* 108160: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 108164: cset w24, eq */
  ARC_W_W(c, 24, (ARC_COND(c, 0) ? 1 : 0));
  /* 108168: csel x8, xzr, x19, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 19)));
  /* 10816c: cbz x21, #0x1081b0 */
  if ((ARC_X_R(c, 21)) == 0) goto L_1081b0;
  /* 108170: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
L_108174:;
  /* 108174: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 108178: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 10817c: b.eq #0x108188 */
  if (ARC_COND(c, 0)) goto L_108188;
  /* 108180: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 108184: b #0x108198 */
  goto L_108198;
L_108188:;
  /* 108188: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 10818c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 108190: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 108194: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1081752));
  arc_dispatch(c, ARC_X_R(c, 8));
L_108198:;
  /* 108198: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 10819c: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 1081a0: csel x21, xzr, x21, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 21)));
  /* 1081a4: cmp w24, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 24), ARC_W_R(c, 8));
  /* 1081a8: b.ne #0x1081b8 */
  if (ARC_COND(c, 1)) goto L_1081b8;
  /* 1081ac: b #0x108398 */
  goto L_108398;
L_1081b0:;
  /* 1081b0: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1081b4: b.eq #0x108394 */
  if (ARC_COND(c, 0)) goto L_108394;
L_1081b8:;
  /* 1081b8: ldurb w8, [x29, #-0xb0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-176))));
  /* 1081bc: ldr x9, [x25, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 25) + INT64_C(16))));
  /* 1081c0: ldr x11, [x25] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 25)));
  /* 1081c4: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 1081c8: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1081cc: csel x24, x10, x9, eq */
  ARC_X_W(c, 24, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 1081d0: add x9, x23, x24 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) + ARC_X_R(c, 24)));
  /* 1081d4: cmp x11, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 9));
  /* 1081d8: b.ne #0x108294 */
  if (ARC_COND(c, 1)) goto L_108294;
  /* 1081dc: cmp x24, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 24), UINT64_C(1));
  /* 1081e0: b.lt #0x1081f8 */
  if (ARC_COND(c, 11)) goto L_1081f8;
  /* 1081e4: sub x0, x29, #0xb0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(176)));
  /* 1081e8: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 1081ec: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1081f0: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1081844));
  fn1_142d10(c);
  /* 1081f4: b #0x10821c */
  goto L_10821c;
L_1081f8:;
  /* 1081f8: lsl x9, x24, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 24)) << ((UINT64_C(1)) & 63)));
  /* 1081fc: tbnz w8, #0, #0x108210 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_108210;
  /* 108200: lsl w8, w9, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 9)) << ((UINT64_C(1)) & 31)));
  /* 108204: sturb w8, [x29, #-0xb0] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-176)), ARC_W_R(c, 8));
  /* 108208: mov x8, x28 */
  ARC_X_W(c, 8, ARC_X_R(c, 28));
  /* 10820c: b #0x108218 */
  goto L_108218;
L_108210:;
  /* 108210: ldr x8, [x25, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(24))));
  /* 108214: str x9, [x25, #0x10] */
  arc_st64((ARC_X_R(c, 25) + INT64_C(16)), ARC_X_R(c, 9));
L_108218:;
  /* 108218: strb wzr, [x8, x9] */
  arc_st8((ARC_X_R(c, 8) + ARC_X_R(c, 9)), ARC_W_R(c, 31));
L_10821c:;
  /* 10821c: ldp x9, x10, [x25, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 108220: ldurb w8, [x29, #-0xb0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-176))));
  /* 108224: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 108228: mov w8, #0x16 */
  ARC_W_W(c, 8, UINT64_C(22));
  /* 10822c: and x11, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 108230: ubfx x12, x9, #1, #7 */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 9)) >> 1) & UINT64_C(127)));
  /* 108234: sub x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* 108238: csel x8, x8, x11, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 11)));
  /* 10823c: tst x9, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(1)));
  /* 108240: csel x10, x12, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* 108244: subs x1, x8, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10)));
  /* 108248: b.ls #0x10825c */
  if (ARC_COND(c, 9)) goto L_10825c;
  /* 10824c: sub x0, x29, #0xb0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(176)));
  /* 108250: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 108254: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1081944));
  fn1_142d10(c);
  /* 108258: b #0x10827c */
  goto L_10827c;
L_10825c:;
  /* 10825c: tbnz w9, #0, #0x108270 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_108270;
  /* 108260: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* 108264: sturb w9, [x29, #-0xb0] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-176)), ARC_W_R(c, 9));
  /* 108268: mov x9, x28 */
  ARC_X_W(c, 9, ARC_X_R(c, 28));
  /* 10826c: b #0x108278 */
  goto L_108278;
L_108270:;
  /* 108270: ldr x9, [x25, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 25) + INT64_C(24))));
  /* 108274: str x8, [x25, #0x10] */
  arc_st64((ARC_X_R(c, 25) + INT64_C(16)), ARC_X_R(c, 8));
L_108278:;
  /* 108278: strb wzr, [x9, x8] */
  arc_st8((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_W_R(c, 31));
L_10827c:;
  /* 10827c: ldurb w8, [x29, #-0xb0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-176))));
  /* 108280: ldr x9, [x25, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 25) + INT64_C(24))));
  /* 108284: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 108288: csel x23, x28, x9, eq */
  ARC_X_W(c, 23, (ARC_COND(c, 0) ? (ARC_X_R(c, 28)) : ARC_X_R(c, 9)));
  /* 10828c: add x8, x23, x24 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) + ARC_X_R(c, 24)));
  /* 108290: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
L_108294:;
  /* 108294: ldp x8, x9, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 108298: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 10829c: b.eq #0x1082a8 */
  if (ARC_COND(c, 0)) goto L_1082a8;
  /* 1082a0: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 1082a4: b #0x1082b8 */
  goto L_1082b8;
L_1082a8:;
  /* 1082a8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1082ac: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1082b0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1082b4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1082040));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1082b8:;
  /* 1082b8: ldp w6, w5, [x29, #-0x80] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-128));
    ARC_W_W(c, 6, arc_ld32(_pa));
    ARC_W_W(c, 5, arc_ld32(_pa + 4));
  }
  /* 1082bc: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* 1082c0: sub x8, x29, #0x78 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(120)));
  /* 1082c4: add x2, sp, #0x34 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(52)));
  /* 1082c8: sub x4, x29, #0xb8 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(184)));
  /* 1082cc: sub x7, x29, #0x98 */
  ARC_X_W(c, 7, (ARC_X_R(c, 29) - UINT64_C(152)));
  /* 1082d0: mov x3, x23 */
  ARC_X_W(c, 3, ARC_X_R(c, 23));
  /* 1082d4: stp x20, x8, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 1082d8: stp x27, x22, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 27));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* 1082dc: bl #0x1438e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1082080));
  fn1_1438e0(c);
  /* 1082e0: cbnz w0, #0x108398 */
  if ((ARC_W_R(c, 0)) != 0) goto L_108398;
  /* 1082e4: tbz w26, #0, #0x1082f0 */
  if (((ARC_W_R(c, 26)) >> 0 & 1) == 0) goto L_1082f0;
  /* 1082e8: mov w26, #1 */
  ARC_W_W(c, 26, UINT64_C(1));
  /* 1082ec: b #0x108350 */
  goto L_108350;
L_1082f0:;
  /* 1082f0: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 1082f4: sub x9, x8, x23 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - ARC_X_R(c, 23)));
  /* 1082f8: cmp x9, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(1));
  /* 1082fc: b.lt #0x10834c */
  if (ARC_COND(c, 11)) goto L_10834c;
  /* 108300: ldrb w8, [x23] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 23)));
  /* 108304: cmp w8, #0x2b */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(43));
  /* 108308: b.eq #0x108314 */
  if (ARC_COND(c, 0)) goto L_108314;
  /* 10830c: cmp w8, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(45));
  /* 108310: b.ne #0x108370 */
  if (ARC_COND(c, 1)) goto L_108370;
L_108314:;
  /* 108314: cmp x9, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(1));
  /* 108318: b.eq #0x10834c */
  if (ARC_COND(c, 0)) goto L_10834c;
  /* 10831c: cmp w8, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(45));
  /* 108320: b.eq #0x10832c */
  if (ARC_COND(c, 0)) goto L_10832c;
  /* 108324: cmp w8, #0x2b */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(43));
  /* 108328: b.ne #0x10834c */
  if (ARC_COND(c, 1)) goto L_10834c;
L_10832c:;
  /* 10832c: ldrb w8, [x23, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 23) + INT64_C(1))));
  /* 108330: mov w26, #1 */
  ARC_W_W(c, 26, UINT64_C(1));
  /* 108334: cmp w8, #0x2e */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(46));
  /* 108338: b.eq #0x108350 */
  if (ARC_COND(c, 0)) goto L_108350;
  /* 10833c: sub w8, w8, #0x30 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* 108340: cmp w8, #9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(9));
  /* 108344: b.ls #0x108350 */
  if (ARC_COND(c, 9)) goto L_108350;
  /* 108348: b #0x108398 */
  goto L_108398;
L_10834c:;
  /* 10834c: mov w26, wzr */
  ARC_W_W(c, 26, ARC_W_R(c, 31));
L_108350:;
  /* 108350: ldp x8, x9, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 108354: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 108358: b.ne #0x108124 */
  if (ARC_COND(c, 1)) goto L_108124;
  /* 10835c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 108360: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 108364: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 108368: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1082220));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10836c: b #0x10812c */
  goto L_10812c;
L_108370:;
  /* 108370: cmp w8, #0x2e */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(46));
  /* 108374: mov w26, #1 */
  ARC_W_W(c, 26, UINT64_C(1));
  /* 108378: b.eq #0x108350 */
  if (ARC_COND(c, 0)) goto L_108350;
  /* 10837c: sub w8, w8, #0x30 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* 108380: cmp w8, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(10));
  /* 108384: b.lo #0x108350 */
  if (ARC_COND(c, 3)) goto L_108350;
  /* 108388: b #0x108398 */
  goto L_108398;
L_10838c:;
  /* 10838c: mov x21, x19 */
  ARC_X_W(c, 21, ARC_X_R(c, 19));
  /* 108390: b #0x108398 */
  goto L_108398;
L_108394:;
  /* 108394: mov x19, x21 */
  ARC_X_W(c, 19, ARC_X_R(c, 21));
L_108398:;
  /* 108398: ldurb w8, [x29, #-0x98] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-152))));
  /* 10839c: ldr x9, [x25, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 25) + INT64_C(40))));
  /* 1083a0: ldr x22, [sp, #0x28] */
  ARC_X_W(c, 22, arc_ld64(((c)->sp + INT64_C(40))));
  /* 1083a4: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 1083a8: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1083ac: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 1083b0: cbz x8, #0x1083e0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1083e0;
  /* 1083b4: ldrb w8, [sp, #0x38] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(56))));
  /* 1083b8: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 1083bc: b.ne #0x1083e0 */
  if (ARC_COND(c, 1)) goto L_1083e0;
  /* 1083c0: ldr x8, [sp, #0x40] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(64))));
  /* 1083c4: add x9, sp, #0x48 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(72)));
  /* 1083c8: sub x9, x8, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* 1083cc: cmp x9, #0x9f */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(159));
  /* 1083d0: b.gt #0x1083e0 */
  if (ARC_COND(c, 12)) goto L_1083e0;
  /* 1083d4: ldr w9, [sp, #0x3c] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(60))));
  /* 1083d8: str w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 9));
  }
  /* 1083dc: str x8, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 8));
L_1083e0:;
  /* 1083e0: ldr x1, [x25] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 25)));
  /* 1083e4: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1083e8: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 1083ec: bl #0x13635c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1082352));
  fn1_13635c(c);
  /* 1083f0: ldurb w10, [x29, #-0x98] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-152))));
  /* 1083f4: ldr x12, [sp, #0x40] */
  ARC_X_W(c, 12, arc_ld64(((c)->sp + INT64_C(64))));
  /* 1083f8: add x11, sp, #0x48 */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(72)));
  /* 1083fc: ldr x8, [x25, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(40))));
  /* 108400: lsr x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* 108404: ands w13, w10, #1 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 13, _r); }
  /* 108408: sub x11, x12, x11 */
  ARC_X_W(c, 11, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* 10840c: csel x8, x9, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 108410: ldr x9, [sp, #0x20] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(32))));
  /* 108414: cmp x11, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(5));
  /* 108418: str q0, [x9] */
  arc_st64(ARC_X_R(c, 9), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 9) + 8, (c)->q[0].u64[1]);
  /* 10841c: b.lt #0x10857c */
  if (ARC_COND(c, 11)) goto L_10857c;
  /* 108420: cbz x8, #0x10857c */
  if ((ARC_X_R(c, 8)) == 0) goto L_10857c;
  /* 108424: sub x8, x12, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 12) - UINT64_C(4)));
  /* 108428: add x9, sp, #0x48 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(72)));
  /* 10842c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 108430: cset w11, lo */
  ARC_W_W(c, 11, (ARC_COND(c, 3) ? 1 : 0));
  /* 108434: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* 108438: b.eq #0x1084e8 */
  if (ARC_COND(c, 0)) goto L_1084e8;
  /* 10843c: cbz w11, #0x1084e8 */
  if ((ARC_W_R(c, 11)) == 0) goto L_1084e8;
  /* 108440: add x10, sp, #0x48 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(72)));
  /* 108444: sub x14, x12, #8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) - UINT64_C(8)));
  /* 108448: add x11, x10, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 10844c: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 108450: csel x13, x14, x11, hi */
  ARC_X_W(c, 13, (ARC_COND(c, 8) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* 108454: sub x13, x13, #4 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(4)));
  /* 108458: cmp x13, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 10));
  /* 10845c: cinc x15, x10, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
  /* 108460: cmp x13, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 10));
  /* 108464: sub x15, x13, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) - ARC_X_R(c, 15)));
  /* 108468: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* 10846c: cinc x13, x15, ne */
  ARC_X_W(c, 13, (ARC_COND(c, 1) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* 108470: cmp x13, #0x13 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(19));
  /* 108474: b.lo #0x1084bc */
  if (ARC_COND(c, 3)) goto L_1084bc;
  /* 108478: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 10847c: csel x14, x14, x11, hi */
  ARC_X_W(c, 14, (ARC_COND(c, 8) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* 108480: sub x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(4)));
  /* 108484: cmp x14, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 10));
  /* 108488: cinc x15, x10, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
  /* 10848c: cmp x14, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 10));
  /* 108490: sub x15, x14, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 14) - ARC_X_R(c, 15)));
  /* 108494: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* 108498: cinc x14, x15, ne */
  ARC_X_W(c, 14, (ARC_COND(c, 1) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* 10849c: cmp x10, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 12));
  /* 1084a0: b.hs #0x10866c */
  if (ARC_COND(c, 2)) goto L_10866c;
  /* 1084a4: lsl x14, x14, #2 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(2)) & 63)));
  /* 1084a8: sub x15, x12, x14 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ARC_X_R(c, 14)));
  /* 1084ac: add x11, x11, x14 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ARC_X_R(c, 14)));
  /* 1084b0: sub x14, x15, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) - UINT64_C(4)));
  /* 1084b4: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 1084b8: b.hs #0x10866c */
  if (ARC_COND(c, 2)) goto L_10866c;
L_1084bc:;
  /* 1084bc: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
L_1084c0:;
  /* 1084c0: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
L_1084c4:;
  /* 1084c4: ldr w12, [x11] */
  ARC_W_W(c, 12, arc_ld32(ARC_X_R(c, 11)));
  /* 1084c8: ldur w13, [x10, #-4] */
  ARC_W_W(c, 13, arc_ld32((ARC_X_R(c, 10) + INT64_C(-4))));
  /* 1084cc: stur w12, [x10, #-4] */
  arc_st32((ARC_X_R(c, 10) + INT64_C(-4)), ARC_W_R(c, 12));
  /* 1084d0: str w13, [x11], #0xfffffffffffffffc */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(-4));
    arc_st32(_a, ARC_W_R(c, 13));
  }
  /* 1084d4: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 1084d8: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 1084dc: b.lo #0x1084c4 */
  if (ARC_COND(c, 3)) goto L_1084c4;
L_1084e0:;
  /* 1084e0: ldurb w10, [x29, #-0x98] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-152))));
  /* 1084e4: and w13, w10, #1 */
  ARC_W_W(c, 13, (ARC_W_R(c, 10) & UINT64_C(1)));
L_1084e8:;
  /* 1084e8: ldr x11, [x25, #0x30] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 25) + INT64_C(48))));
  /* 1084ec: cmp w13, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(0));
  /* 1084f0: sub x12, x29, #0x98 */
  ARC_X_W(c, 12, (ARC_X_R(c, 29) - UINT64_C(152)));
  /* 1084f4: csinc x11, x11, x12, ne */
  ARC_X_W(c, 11, (ARC_COND(c, 1) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 12)) + 1)));
  /* 1084f8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 1084fc: b.hs #0x108554 */
  if (ARC_COND(c, 2)) goto L_108554;
  /* 108500: lsr w9, w10, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 10)) >> ((UINT64_C(1)) & 31)));
  /* 108504: ldr x10, [x25, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 25) + INT64_C(40))));
  /* 108508: cmp w13, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(0));
  /* 10850c: csel x9, x9, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* 108510: add x10, sp, #0x48 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(72)));
  /* 108514: add x9, x11, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) + ARC_X_R(c, 9)));
  /* 108518: b #0x108534 */
  goto L_108534;
L_10851c:;
  /* 10851c: sub x12, x9, x11 */
  ARC_X_W(c, 12, (ARC_X_R(c, 9) - ARC_X_R(c, 11)));
  /* 108520: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 108524: cmp x12, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(1));
  /* 108528: cinc x11, x11, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 11)) + 1 : (ARC_X_R(c, 11))));
  /* 10852c: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* 108530: b.hs #0x108554 */
  if (ARC_COND(c, 2)) goto L_108554;
L_108534:;
  /* 108534: ldrb w12, [x11] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 11)));
  /* 108538: cbz w12, #0x10851c */
  if ((ARC_W_R(c, 12)) == 0) goto L_10851c;
  /* 10853c: cmp w12, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(255));
  /* 108540: b.eq #0x10851c */
  if (ARC_COND(c, 0)) goto L_10851c;
  /* 108544: ldr w13, [x10] */
  ARC_W_W(c, 13, arc_ld32(ARC_X_R(c, 10)));
  /* 108548: cmp w13, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 12));
  /* 10854c: b.eq #0x10851c */
  if (ARC_COND(c, 0)) goto L_10851c;
  /* 108550: b #0x108574 */
  goto L_108574;
L_108554:;
  /* 108554: ldrb w9, [x11] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 11)));
  /* 108558: cbz w9, #0x10857c */
  if ((ARC_W_R(c, 9)) == 0) goto L_10857c;
  /* 10855c: cmp w9, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(255));
  /* 108560: b.eq #0x10857c */
  if (ARC_COND(c, 0)) goto L_10857c;
  /* 108564: ldr w8, [x8] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 8)));
  /* 108568: sub w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* 10856c: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* 108570: b.lo #0x10857c */
  if (ARC_COND(c, 3)) goto L_10857c;
L_108574:;
  /* 108574: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 108578: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_10857c:;
  /* 10857c: cbz x19, #0x108594 */
  if ((ARC_X_R(c, 19)) == 0) goto L_108594;
  /* 108580: ldp x8, x9, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 108584: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 108588: b.eq #0x1085a0 */
  if (ARC_COND(c, 0)) goto L_1085a0;
  /* 10858c: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 108590: b #0x1085b0 */
  goto L_1085b0;
L_108594:;
  /* 108594: cbz x21, #0x108608 */
  if ((ARC_X_R(c, 21)) == 0) goto L_108608;
  /* 108598: mov w20, #1 */
  ARC_W_W(c, 20, UINT64_C(1));
  /* 10859c: b #0x1085c4 */
  goto L_1085c4;
L_1085a0:;
  /* 1085a0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1085a4: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1085a8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1085ac: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1082800));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1085b0:;
  /* 1085b0: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1085b4: cset w20, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? 1 : 0));
  /* 1085b8: csel x8, xzr, x19, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 19)));
  /* 1085bc: cbz x21, #0x1085fc */
  if ((ARC_X_R(c, 21)) == 0) goto L_1085fc;
  /* 1085c0: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
L_1085c4:;
  /* 1085c4: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1085c8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1085cc: b.eq #0x1085d8 */
  if (ARC_COND(c, 0)) goto L_1085d8;
  /* 1085d0: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 1085d4: b #0x1085e8 */
  goto L_1085e8;
L_1085d8:;
  /* 1085d8: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 1085dc: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1085e0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1085e4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1082856));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1085e8:;
  /* 1085e8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1085ec: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 1085f0: eor w8, w20, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 20) ^ ARC_W_R(c, 8)));
  /* 1085f4: tbz w8, #0, #0x108608 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_108608;
  /* 1085f8: b #0x108614 */
  goto L_108614;
L_1085fc:;
  /* 1085fc: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 108600: b.ne #0x108614 */
  if (ARC_COND(c, 1)) goto L_108614;
  /* 108604: mov x19, xzr */
  ARC_X_W(c, 19, ARC_X_R(c, 31));
L_108608:;
  /* 108608: ldr w8, [x22] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 22)));
  /* 10860c: orr w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(2)));
  /* 108610: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_108614:;
  /* 108614: ldurb w8, [x29, #-0xb0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-176))));
  /* 108618: tbz w8, #0, #0x10862c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10862c;
  /* 10861c: ldr x8, [x25, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(8))));
  /* 108620: ldr x0, [x25, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 25) + INT64_C(24))));
  /* 108624: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 108628: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1082924));
  fn1_142608(c);
L_10862c:;
  /* 10862c: ldurb w8, [x29, #-0x98] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-152))));
  /* 108630: tbz w8, #0, #0x108644 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_108644;
  /* 108634: ldr x8, [x25, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(32))));
  /* 108638: ldr x0, [x25, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 25) + INT64_C(48))));
  /* 10863c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 108640: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1082948));
  fn1_142608(c);
L_108644:;
  /* 108644: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 108648: add sp, sp, #0x1a0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(416)));
  /* 10864c: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 108650: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 108654: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 108658: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 10865c: ldp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 108660: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 108664: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 108668: ret  */
  return;
L_10866c:;
  /* 10866c: add x13, x13, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(1)));
  /* 108670: add x15, sp, #0x48 */
  ARC_X_W(c, 15, ((c)->sp + UINT64_C(72)));
  /* 108674: sub x12, x12, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(16)));
  /* 108678: and x14, x13, #0x7ffffffffffffff8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 13) & UINT64_C(9223372036854775800)));
  /* 10867c: lsl x10, x14, #2 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(2)) & 63)));
  /* 108680: mov x16, x14 */
  ARC_X_W(c, 16, ARC_X_R(c, 14));
  /* 108684: sub x11, x8, x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) - ARC_X_R(c, 10)));
  /* 108688: add x10, x15, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 15) + ARC_X_R(c, 10)));
  /* 10868c: add x15, x15, #0x10 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(16)));
L_108690:;
  /* 108690: ldp q1, q0, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 108694: sub x16, x16, #8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) - UINT64_C(8)));
  /* 108698: ldp q2, q3, [x15, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 15) + INT64_C(-16));
    arc_q_w(c, 2, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 3, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 10869c: rev64 v0.4s, v0.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[0].u32[1];
    _t.u32[1] = (c)->q[0].u32[0];
    _t.u32[2] = (c)->q[0].u32[3];
    _t.u32[3] = (c)->q[0].u32[2];
    (c)->q[0] = _t; }
  /* 1086a0: rev64 v1.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[1].u32[1];
    _t.u32[1] = (c)->q[1].u32[0];
    _t.u32[2] = (c)->q[1].u32[3];
    _t.u32[3] = (c)->q[1].u32[2];
    (c)->q[1] = _t; }
  /* 1086a4: rev64 v2.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[2].u32[1];
    _t.u32[1] = (c)->q[2].u32[0];
    _t.u32[2] = (c)->q[2].u32[3];
    _t.u32[3] = (c)->q[2].u32[2];
    (c)->q[2] = _t; }
  /* 1086a8: rev64 v3.4s, v3.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[3].u32[1];
    _t.u32[1] = (c)->q[3].u32[0];
    _t.u32[2] = (c)->q[3].u32[3];
    _t.u32[3] = (c)->q[3].u32[2];
    (c)->q[3] = _t; }
  /* 1086ac: ext v0.16b, v0.16b, v0.16b, #8 */
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
  /* 1086b0: ext v1.16b, v1.16b, v1.16b, #8 */
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
  /* 1086b4: ext v2.16b, v2.16b, v2.16b, #8 */
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
  /* 1086b8: ext v3.16b, v3.16b, v3.16b, #8 */
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
  /* 1086bc: stp q0, q1, [x15, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 15) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 1086c0: add x15, x15, #0x20 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(32)));
  /* 1086c4: stp q3, q2, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_st64(_pa, (c)->q[3].u64[0]);
    arc_st64(_pa + 8, (c)->q[3].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* 1086c8: sub x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(32)));
  /* 1086cc: cbnz x16, #0x108690 */
  if ((ARC_X_R(c, 16)) != 0) goto L_108690;
  /* 1086d0: cmp x13, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 14));
  /* 1086d4: b.eq #0x1084e0 */
  if (ARC_COND(c, 0)) goto L_1084e0;
  /* 1086d8: b #0x1084c0 */
  goto L_1084c0;
  /* 1086dc: b #0x1086e8 */
  goto L_1086e8;
  /* 1086e0: b #0x1086e8 */
  goto L_1086e8;
  /* 1086e4: b #0x1086e8 */
  goto L_1086e8;
L_1086e8:;
  /* 1086e8: ldurb w8, [x29, #-0xb0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-176))));
  /* 1086ec: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1086f0: tbnz w8, #0, #0x108704 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_108704;
  /* 1086f4: ldurb w8, [x29, #-0x98] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-152))));
  /* 1086f8: tbnz w8, #0, #0x10871c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_10871c;
L_1086fc:;
  /* 1086fc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 108700: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1083140));
  fn1_9cc20(c);
L_108704:;
  /* 108704: ldr x8, [x25, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(8))));
  /* 108708: ldr x0, [x25, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 25) + INT64_C(24))));
  /* 10870c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 108710: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1083156));
  fn1_142608(c);
  /* 108714: ldurb w8, [x29, #-0x98] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-152))));
  /* 108718: tbz w8, #0, #0x1086fc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1086fc;
L_10871c:;
  /* 10871c: ldr x8, [x25, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(32))));
  /* 108720: ldr x0, [x25, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 25) + INT64_C(48))));
  /* 108724: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 108728: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1083180));
  fn1_142608(c);
  /* 10872c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 108730: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1083188));
  fn1_9cc20(c);
}

void fn1_111d50(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039049552));
  /* 111d50: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 111d54: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 111d58: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 111d5c: str x25, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 25));
  /* 111d60: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 111d64: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 111d68: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 111d6c: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 111d70: str x1, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 1));
  /* 111d74: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 111d78: add x1, x3, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 3) + UINT64_C(48)));
  /* 111d7c: mov x19, x5 */
  ARC_X_W(c, 19, ARC_X_R(c, 5));
  /* 111d80: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 111d84: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 111d88: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1121676));
  fn1_143460(c);
  /* 111d8c: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 111d90: ldr x25, [x25, #0xb58] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(2904))));
  /* 111d94: ldr x24, [sp, #8] */
  ARC_X_W(c, 24, arc_ld64(((c)->sp + INT64_C(8))));
  /* 111d98: ldar x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 111d9c: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 111da0: b.eq #0x111e5c */
  if (ARC_COND(c, 0)) goto L_111e5c;
  /* 111da4: nop  */
  /* nop: no architectural effect here */
  /* 111da8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 111dac: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1121712));
  fn1_142518(c);
  /* 111db0: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 111db4: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 111db8: b.ne #0x111de4 */
  if (ARC_COND(c, 1)) goto L_111de4;
  /* 111dbc: nop  */
  /* nop: no architectural effect here */
  /* 111dc0: adr x22, #0x15791c */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 111dc4: nop  */
  /* nop: no architectural effect here */
  /* 111dc8: adr x23, #0x1578f4 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407220)));
L_111dcc:;
  /* 111dcc: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 111dd0: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 111dd4: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1121752));
  fn1_142530(c);
  /* 111dd8: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 111ddc: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 111de0: b.eq #0x111dcc */
  if (ARC_COND(c, 0)) goto L_111dcc;
L_111de4:;
  /* 111de4: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 111de8: cbz x8, #0x111dfc */
  if ((ARC_X_R(c, 8)) == 0) goto L_111dfc;
  /* 111dec: nop  */
  /* nop: no architectural effect here */
  /* 111df0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 111df4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1121784));
  fn1_142560(c);
  /* 111df8: b #0x111e5c */
  goto L_111e5c;
L_111dfc:;
  /* 111dfc: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 111e00: str x25, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 25));
  /* 111e04: strb wzr, [sp, #0x18] */
  arc_st8(((c)->sp + INT64_C(24)), ARC_W_R(c, 31));
  /* 111e08: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 111e0c: nop  */
  /* nop: no architectural effect here */
  /* 111e10: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 111e14: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1121816));
  fn1_142560(c);
  /* 111e18: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 111e1c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 111e20: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 111e24: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1121832));
  fn1_a2030(c);
  /* 111e28: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 111e2c: str w8, [x25, #8] */
  arc_st32((ARC_X_R(c, 25) + INT64_C(8)), ARC_W_R(c, 8));
  /* 111e30: nop  */
  /* nop: no architectural effect here */
  /* 111e34: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 111e38: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1121852));
  fn1_142518(c);
  /* 111e3c: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 111e40: stlr x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 111e44: nop  */
  /* nop: no architectural effect here */
  /* 111e48: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 111e4c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1121872));
  fn1_142560(c);
  /* 111e50: nop  */
  /* nop: no architectural effect here */
  /* 111e54: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 111e58: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1121884));
  fn1_142578(c);
L_111e5c:;
  /* 111e5c: ldp x8, x10, [x24, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 24) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 111e60: ldrsw x9, [x25, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 25) + INT64_C(8)))));
  /* 111e64: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 111e68: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 111e6c: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 111e70: b.hs #0x111ee8 */
  if (ARC_COND(c, 2)) goto L_111ee8;
  /* 111e74: ldr x22, [x8, x9, lsl #3] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 111e78: cbz x22, #0x111ee8 */
  if ((ARC_X_R(c, 22)) == 0) goto L_111ee8;
  /* 111e7c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 111e80: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1121924));
  fn1_143478(c);
  /* 111e84: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 111e88: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 111e8c: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 111e90: mov x3, x22 */
  ARC_X_W(c, 3, ARC_X_R(c, 22));
  /* 111e94: mov w4, #4 */
  ARC_W_W(c, 4, UINT64_C(4));
  /* 111e98: bl #0x112ec0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1121948));
  fn1_112ec0(c);
  /* 111e9c: ldrb w8, [x20] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 20)));
  /* 111ea0: tbnz w8, #2, #0x111ec4 */
  if (((ARC_W_R(c, 8)) >> 2 & 1) != 0) goto L_111ec4;
  /* 111ea4: add w8, w0, #0x76c */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1900)));
  /* 111ea8: cmp w0, #0x64 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(100));
  /* 111eac: add w9, w0, #0x7d0 */
  ARC_W_W(c, 9, (ARC_W_R(c, 0) + UINT64_C(2000)));
  /* 111eb0: csel w8, w8, w0, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 0)));
  /* 111eb4: cmp w0, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(69));
  /* 111eb8: csel w8, w9, w8, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* 111ebc: sub w8, w8, #0x76c */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1900)));
  /* 111ec0: str w8, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 8));
L_111ec4:;
  /* 111ec4: ldr x0, [x29, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 111ec8: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 111ecc: ldr x25, [sp, #0x30] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(48))));
  /* 111ed0: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 111ed4: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 111ed8: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 111edc: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 111ee0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 111ee4: ret  */
  return;
L_111ee8:;
  /* 111ee8: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1122028));
  fn1_fc3b8(c);
  /* 111eec: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 111ef0: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 111ef4: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1122040));
  fn1_d2a78(c);
  /* 111ef8: b #0x111f04 */
  goto L_111f04;
  /* 111efc: b #0x111f00 */
  goto L_111f00;
L_111f00:;
  /* 111f00: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_111f04:;
  /* 111f04: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 111f08: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1122060));
  fn1_143478(c);
  /* 111f0c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 111f10: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1122068));
  fn1_9cc20(c);
}

void fn1_113eb0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039058096));
  /* 113eb0: bti c */
  /* bti: no architectural effect here */
  /* 113eb4: ldr w0, [x0, #0x78] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(120))));
  /* 113eb8: ret  */
  return;
}

void fn1_11ae5c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039086684));
  /* 11ae5c: bti c */
  /* bti: no architectural effect here */
  /* 11ae60: b #0x144078 */
  fn1_144078(c); return;
}

void fn1_125eb0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039131824));
  /* 125eb0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 125eb4: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 125eb8: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 125ebc: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 125ec0: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 125ec4: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 125ec8: sub x9, x2, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 2) - UINT64_C(1)));
  /* 125ecc: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 125ed0: ldr x8, [x8, #0xc68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3176))));
  /* 125ed4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 125ed8: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 125edc: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 125ee0: stp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 125ee4: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 125ee8: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 125eec: ldr x9, [x1, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* 125ef0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 125ef4: csinc x1, x9, x1, ne */
  ARC_X_W(c, 1, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 1)) + 1)));
  /* 125ef8: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1203964));
  fn1_1441e0(c);
  /* 125efc: str x0, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 0));
  /* 125f00: cbz x0, #0x125f18 */
  if ((ARC_X_R(c, 0)) == 0) goto L_125f18;
  /* 125f04: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 125f08: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 125f0c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 125f10: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 125f14: ret  */
  return;
L_125f18:;
  /* 125f18: adrp x0, #0x4f000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(323584)));
  /* 125f1c: add x0, x0, #0x753 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1875)));
  /* 125f20: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 125f24: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 125f28: add x19, sp, #8 */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(8)));
  /* 125f2c: bl #0x142de8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1204016));
  fn1_142de8(c);
  /* 125f30: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 125f34: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
  /* 125f38: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 125f3c: csinc x0, x9, x19, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* 125f40: bl #0x142c98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1204036));
  fn1_142c98(c);
  /* 125f44: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 125f48: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 125f4c: tbz w8, #0, #0x125f60 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_125f60;
  /* 125f50: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 125f54: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 125f58: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 125f5c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1204064));
  fn1_142608(c);
L_125f60:;
  /* 125f60: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 125f64: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1204072));
  fn1_9cc20(c);
}

void fn1_1282fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039141116));
  /* 1282fc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 128300: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* 128304: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 128308: stp x28, x27, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 12830c: stp x26, x25, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 128310: stp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 128314: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 128318: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12831c: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 128320: mov x21, x7 */
  ARC_X_W(c, 21, ARC_X_R(c, 7));
  /* 128324: mov x25, x6 */
  ARC_X_W(c, 25, ARC_X_R(c, 6));
  /* 128328: mov x24, x5 */
  ARC_X_W(c, 24, ARC_X_R(c, 5));
  /* 12832c: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* 128330: mov x23, x2 */
  ARC_X_W(c, 23, ARC_X_R(c, 2));
  /* 128334: mov x26, x1 */
  ARC_X_W(c, 26, ARC_X_R(c, 1));
  /* 128338: cmp x2, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 3));
  /* 12833c: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* 128340: stp x0, x4, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 4));
  }
  /* 128344: b.eq #0x128364 */
  if (ARC_COND(c, 0)) goto L_128364;
  /* 128348: mov x19, x23 */
  ARC_X_W(c, 19, ARC_X_R(c, 23));
L_12834c:;
  /* 12834c: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 128350: cbz w8, #0x128364 */
  if ((ARC_W_R(c, 8)) == 0) goto L_128364;
  /* 128354: add x19, x19, #1 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* 128358: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* 12835c: b.ne #0x12834c */
  if (ARC_COND(c, 1)) goto L_12834c;
  /* 128360: mov x19, x20 */
  ARC_X_W(c, 19, ARC_X_R(c, 20));
L_128364:;
  /* 128364: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 128368: cmp x23, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 20));
  /* 12836c: str x24, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 24));
  /* 128370: str x23, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* 128374: b.eq #0x128520 */
  if (ARC_COND(c, 0)) goto L_128520;
L_128378:;
  /* 128378: cmp x24, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 25));
  /* 12837c: b.eq #0x128520 */
  if (ARC_COND(c, 0)) goto L_128520;
  /* 128380: sub x9, x25, x24 */
  ARC_X_W(c, 9, (ARC_X_R(c, 25) - ARC_X_R(c, 24)));
  /* 128384: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 128388: sub x22, x19, x23 */
  ARC_X_W(c, 22, (ARC_X_R(c, 19) - ARC_X_R(c, 23)));
  /* 12838c: asr x28, x9, #2 */
  ARC_X_W(c, 28, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(2)) & 63))));
  /* 128390: ldr x9, [sp] */
  ARC_X_W(c, 9, arc_ld64((c)->sp));
  /* 128394: str x8, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 8));
  /* 128398: ldr x0, [x9, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(16))));
  /* 12839c: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1213344));
  fn1_1443c0(c);
  /* 1283a0: mov x27, x0 */
  ARC_X_W(c, 27, ARC_X_R(c, 0));
  /* 1283a4: stur x0, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 0));
  /* 1283a8: ldr x1, [sp, #8] */
  ARC_X_W(c, 1, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1283ac: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 1283b0: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 1283b4: mov x3, x28 */
  ARC_X_W(c, 3, ARC_X_R(c, 28));
  /* 1283b8: mov x4, x26 */
  ARC_X_W(c, 4, ARC_X_R(c, 26));
  /* 1283bc: bl #0x144420 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1213376));
  fn1_144420(c);
  /* 1283c0: mov x28, x0 */
  ARC_X_W(c, 28, ARC_X_R(c, 0));
  /* 1283c4: cbz x27, #0x1283d0 */
  if ((ARC_X_R(c, 27)) == 0) goto L_1283d0;
  /* 1283c8: mov x0, x27 */
  ARC_X_W(c, 0, ARC_X_R(c, 27));
  /* 1283cc: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1213392));
  fn1_1443c0(c);
L_1283d0:;
  /* 1283d0: cmn x28, #1 */
  (void)arc_add64(c, ARC_X_R(c, 28), UINT64_C(1), 0);
  /* 1283d4: b.eq #0x128484 */
  if (ARC_COND(c, 0)) goto L_128484;
  /* 1283d8: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 1283dc: add x24, x8, x28, lsl #2 */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 28)) << 2)));
  /* 1283e0: cmp x24, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 25));
  /* 1283e4: str x24, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 24));
  /* 1283e8: b.eq #0x128518 */
  if (ARC_COND(c, 0)) goto L_128518;
  /* 1283ec: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1283f0: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* 1283f4: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 1283f8: b.eq #0x128474 */
  if (ARC_COND(c, 0)) goto L_128474;
  /* 1283fc: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 128400: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 128404: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1213448));
  fn1_1443c0(c);
  /* 128408: mov x27, x0 */
  ARC_X_W(c, 27, ARC_X_R(c, 0));
  /* 12840c: stur x0, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 0));
  /* 128410: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 128414: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 128418: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 12841c: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 128420: bl #0x144438 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1213476));
  fn1_144438(c);
  /* 128424: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 128428: cbz x27, #0x128434 */
  if ((ARC_X_R(c, 27)) == 0) goto L_128434;
  /* 12842c: mov x0, x27 */
  ARC_X_W(c, 0, ARC_X_R(c, 27));
  /* 128430: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1213492));
  fn1_1443c0(c);
L_128434:;
  /* 128434: cbnz x23, #0x12855c */
  if ((ARC_X_R(c, 23)) != 0) goto L_12855c;
  /* 128438: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 12843c: ldr x9, [sp, #8] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(8))));
  /* 128440: add x24, x8, #4 */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 128444: str x24, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 24));
  /* 128448: ldr x8, [x9] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 9)));
  /* 12844c: add x23, x8, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 128450: cmp x23, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 20));
  /* 128454: str x23, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 23));
  /* 128458: b.eq #0x128474 */
  if (ARC_COND(c, 0)) goto L_128474;
  /* 12845c: mov x19, x23 */
  ARC_X_W(c, 19, ARC_X_R(c, 23));
L_128460:;
  /* 128460: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 128464: cbz w8, #0x128478 */
  if ((ARC_W_R(c, 8)) == 0) goto L_128478;
  /* 128468: add x19, x19, #1 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* 12846c: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* 128470: b.ne #0x128460 */
  if (ARC_COND(c, 1)) goto L_128460;
L_128474:;
  /* 128474: mov x19, x20 */
  ARC_X_W(c, 19, ARC_X_R(c, 20));
L_128478:;
  /* 128478: cmp x23, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 20));
  /* 12847c: b.ne #0x128378 */
  if (ARC_COND(c, 1)) goto L_128378;
  /* 128480: b #0x128520 */
  goto L_128520;
L_128484:;
  /* 128484: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 128488: str x24, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 24));
  /* 12848c: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 128490: b #0x1284b0 */
  goto L_1284b0;
L_128494:;
  /* 128494: mov w25, #1 */
  ARC_W_W(c, 25, UINT64_C(1));
L_128498:;
  /* 128498: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 12849c: add x23, x23, x25 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + ARC_X_R(c, 25)));
  /* 1284a0: add x24, x8, #4 */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 1284a4: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1284a8: str x24, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 24));
  /* 1284ac: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
L_1284b0:;
  /* 1284b0: cmp x23, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 1284b4: b.eq #0x12854c */
  if (ARC_COND(c, 0)) goto L_12854c;
  /* 1284b8: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 1284bc: sub x22, x19, x23 */
  ARC_X_W(c, 22, (ARC_X_R(c, 19) - ARC_X_R(c, 23)));
  /* 1284c0: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 1284c4: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1213640));
  fn1_1443c0(c);
  /* 1284c8: mov x26, x0 */
  ARC_X_W(c, 26, ARC_X_R(c, 0));
  /* 1284cc: stur x0, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 0));
  /* 1284d0: add x3, sp, #0x10 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(16)));
  /* 1284d4: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 1284d8: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 1284dc: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 1284e0: bl #0x144438 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1213668));
  fn1_144438(c);
  /* 1284e4: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* 1284e8: cbz x26, #0x1284f4 */
  if ((ARC_X_R(c, 26)) == 0) goto L_1284f4;
  /* 1284ec: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 1284f0: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1213684));
  fn1_1443c0(c);
L_1284f4:;
  /* 1284f4: cbz x25, #0x128494 */
  if ((ARC_X_R(c, 25)) == 0) goto L_128494;
  /* 1284f8: cmn x25, #2 */
  (void)arc_add64(c, ARC_X_R(c, 25), UINT64_C(2), 0);
  /* 1284fc: b.eq #0x128564 */
  if (ARC_COND(c, 0)) goto L_128564;
  /* 128500: cmn x25, #1 */
  (void)arc_add64(c, ARC_X_R(c, 25), UINT64_C(1), 0);
  /* 128504: b.ne #0x128498 */
  if (ARC_COND(c, 1)) goto L_128498;
  /* 128508: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 12850c: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
  /* 128510: str x23, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* 128514: b #0x128528 */
  goto L_128528;
L_128518:;
  /* 128518: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 12851c: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
L_128520:;
  /* 128520: cmp x23, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 20));
L_128524:;
  /* 128524: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
L_128528:;
  /* 128528: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12852c: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 128530: ldp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 128534: ldp x26, x25, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 128538: ldp x28, x27, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 12853c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 128540: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* 128544: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 128548: ret  */
  return;
L_12854c:;
  /* 12854c: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 128550: cmp x23, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 20));
  /* 128554: str x23, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* 128558: b #0x128524 */
  goto L_128524;
L_12855c:;
  /* 12855c: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
  /* 128560: b #0x128528 */
  goto L_128528;
L_128564:;
  /* 128564: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 128568: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 12856c: str x23, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* 128570: b #0x128528 */
  goto L_128528;
  /* 128574: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1213816));
  fn1_a1454(c);
  /* 128578: b #0x128588 */
  goto L_128588;
  /* 12857c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1213824));
  fn1_a1454(c);
  /* 128580: b #0x128588 */
  goto L_128588;
  /* 128584: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1213832));
  fn1_a1454(c);
L_128588:;
  /* 128588: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12858c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 128590: bl #0x135428 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1213844));
  fn1_135428(c);
  /* 128594: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 128598: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1213852));
  fn1_9cc20(c);
}

void fn1_12a28c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039149196));
  /* 12a28c: bti c */
  /* bti: no architectural effect here */
  /* 12a290: ldrb w9, [x0, #0x18] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12a294: mov w8, #7 */
  ARC_W_W(c, 8, UINT64_C(7));
  /* 12a298: tst w9, #4 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(4)));
  /* 12a29c: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 12a2a0: csel w0, w9, w8, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* 12a2a4: ret  */
  return;
}

void fn1_12bad0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039155408));
  /* 12bad0: bti c */
  /* bti: no architectural effect here */
  /* 12bad4: ldr w8, [x0, #0x18] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12bad8: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 12badc: ldr x3, [x0, #0x10] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 12bae0: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 12bae4: mov x2, x4 */
  ARC_X_W(c, 2, ARC_X_R(c, 4));
  /* 12bae8: mov w4, w8 */
  ARC_W_W(c, 4, ARC_W_R(c, 8));
  /* 12baec: b #0x128eb8 */
  fn1_128eb8(c); return;
}

void fn1_131450(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039178320));
  /* 131450: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 131454: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 131458: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13145c: str x21, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 21));
  /* 131460: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 131464: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 131468: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 13146c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 131470: bl #0x143bb0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1250420));
  fn1_143bb0(c);
  /* 131474: add x0, x19, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 131478: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 13147c: mov w2, #0x420 */
  ARC_W_W(c, 2, UINT64_C(1056));
  /* 131480: bl #0x144a20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1250436));
  fn1_144a20(c);
  /* 131484: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 131488: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 13148c: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 131490: bl #0x143ad8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1250452));
  fn1_143ad8(c);
  /* 131494: adrp x8, #0x150000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1376256)));
  /* 131498: add x8, x8, #0x828 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2088)));
  /* 13149c: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* 1314a0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1314a4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1314a8: bl #0x143c28 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1250476));
  fn1_143c28(c);
  /* 1314ac: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1314b0: ldr x8, [x8, #0xc78] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3192))));
  /* 1314b4: ldr x0, [sp, #0x28] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(40))));
  /* 1314b8: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 1314bc: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* 1314c0: bl #0x144210 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1250500));
  fn1_144210(c);
  /* 1314c4: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1314c8: ldr x8, [x8, #0xc70] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3184))));
  /* 1314cc: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 1314d0: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 1314d4: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* 1314d8: cbz x0, #0x1314ec */
  if ((ARC_X_R(c, 0)) == 0) goto L_1314ec;
  /* 1314dc: ldrb w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(32))));
  /* 1314e0: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 1314e4: b.ne #0x1314ec */
  if (ARC_COND(c, 1)) goto L_1314ec;
  /* 1314e8: bl #0x1425a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1250540));
  fn1_1425a8(c);
L_1314ec:;
  /* 1314ec: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1314f0: ldr x21, [sp, #0x40] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(64))));
  /* 1314f4: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1314f8: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 1314fc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 131500: ret  */
  return;
  /* 131504: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1250568));
  fn1_a1454(c);
  /* 131508: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 13150c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 131510: bl #0x143c58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1250580));
  fn1_143c58(c);
  /* 131514: b #0x13151c */
  goto L_13151c;
  /* 131518: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_13151c:;
  /* 13151c: ldrb w8, [x19, #0x410] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(1040))));
  /* 131520: tbnz w8, #0, #0x1315c8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1315c8;
  /* 131524: ldrb w8, [x19, #0x3f8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(1016))));
  /* 131528: tbnz w8, #0, #0x1315e0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1315e0;
L_13152c:;
  /* 13152c: ldrb w8, [x19, #0x3e0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(992))));
  /* 131530: tbnz w8, #0, #0x1315f8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1315f8;
L_131534:;
  /* 131534: ldrb w8, [x19, #0x3c8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(968))));
  /* 131538: tbnz w8, #0, #0x131610 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_131610;
L_13153c:;
  /* 13153c: ldrb w8, [x19, #0x3b0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(944))));
  /* 131540: tbnz w8, #0, #0x131628 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_131628;
L_131544:;
  /* 131544: ldrb w8, [x19, #0x398] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(920))));
  /* 131548: tbz w8, #0, #0x13155c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13155c;
L_13154c:;
  /* 13154c: ldr x8, [x19, #0x398] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(920))));
  /* 131550: ldr x0, [x19, #0x3a8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(936))));
  /* 131554: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 131558: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1250652));
  fn1_142608(c);
L_13155c:;
  /* 13155c: mov w21, #0x240 */
  ARC_W_W(c, 21, UINT64_C(576));
  /* 131560: b #0x13156c */
  goto L_13156c;
L_131564:;
  /* 131564: subs x21, x21, #0x18 */
  ARC_X_W(c, 21, arc_sub64(c, ARC_X_R(c, 21), UINT64_C(24)));
  /* 131568: b.eq #0x131598 */
  if (ARC_COND(c, 0)) goto L_131598;
L_13156c:;
  /* 13156c: add x8, x19, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 21)));
  /* 131570: ldrb w9, [x8, #0x140] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(320))));
  /* 131574: tbz w9, #0, #0x131564 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_131564;
  /* 131578: ldr x0, [x8, #0x150] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(336))));
  /* 13157c: ldr x8, [x8, #0x140] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(320))));
  /* 131580: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 131584: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1250696));
  fn1_142608(c);
  /* 131588: b #0x131564 */
  goto L_131564;
L_13158c:;
  /* 13158c: sub x21, x21, #0x18 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) - UINT64_C(24)));
  /* 131590: cmn x21, #0x150 */
  (void)arc_add64(c, ARC_X_R(c, 21), UINT64_C(336), 0);
  /* 131594: b.eq #0x1315b8 */
  if (ARC_COND(c, 0)) goto L_1315b8;
L_131598:;
  /* 131598: add x8, x19, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 21)));
  /* 13159c: ldrb w9, [x8, #0x140] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(320))));
  /* 1315a0: tbz w9, #0, #0x13158c */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_13158c;
  /* 1315a4: ldr x0, [x8, #0x150] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(336))));
  /* 1315a8: ldr x8, [x8, #0x140] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(320))));
  /* 1315ac: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1315b0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1250740));
  fn1_142608(c);
  /* 1315b4: b #0x13158c */
  goto L_13158c;
L_1315b8:;
  /* 1315b8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1315bc: bl #0x143be0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1250752));
  fn1_143be0(c);
  /* 1315c0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1315c4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1250760));
  fn1_9cc20(c);
L_1315c8:;
  /* 1315c8: ldr x8, [x19, #0x410] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(1040))));
  /* 1315cc: ldr x0, [x19, #0x420] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(1056))));
  /* 1315d0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1315d4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1250776));
  fn1_142608(c);
  /* 1315d8: ldrb w8, [x19, #0x3f8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(1016))));
  /* 1315dc: tbz w8, #0, #0x13152c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13152c;
L_1315e0:;
  /* 1315e0: ldr x8, [x19, #0x3f8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(1016))));
  /* 1315e4: ldr x0, [x19, #0x408] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(1032))));
  /* 1315e8: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1315ec: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1250800));
  fn1_142608(c);
  /* 1315f0: ldrb w8, [x19, #0x3e0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(992))));
  /* 1315f4: tbz w8, #0, #0x131534 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_131534;
L_1315f8:;
  /* 1315f8: ldr x8, [x19, #0x3e0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(992))));
  /* 1315fc: ldr x0, [x19, #0x3f0] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(1008))));
  /* 131600: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 131604: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1250824));
  fn1_142608(c);
  /* 131608: ldrb w8, [x19, #0x3c8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(968))));
  /* 13160c: tbz w8, #0, #0x13153c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13153c;
L_131610:;
  /* 131610: ldr x8, [x19, #0x3c8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(968))));
  /* 131614: ldr x0, [x19, #0x3d8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(984))));
  /* 131618: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13161c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1250848));
  fn1_142608(c);
  /* 131620: ldrb w8, [x19, #0x3b0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(944))));
  /* 131624: tbz w8, #0, #0x131544 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_131544;
L_131628:;
  /* 131628: ldr x8, [x19, #0x3b0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(944))));
  /* 13162c: ldr x0, [x19, #0x3c0] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(960))));
  /* 131630: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 131634: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1250872));
  fn1_142608(c);
  /* 131638: ldrb w8, [x19, #0x398] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(920))));
  /* 13163c: tbnz w8, #0, #0x13154c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_13154c;
  /* 131640: b #0x13155c */
  goto L_13155c;
}

void fn1_134b6c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192428));
  /* 134b6c: bti c */
  /* bti: no architectural effect here */
  /* 134b70: add x0, x0, #0x428 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1064)));
  /* 134b74: ret  */
  return;
}

void fn1_136920(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039200032));
  /* 136920: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 136924: sub sp, sp, #0x130 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(304)));
  /* 136928: stp x29, x30, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13692c: stp x28, x21, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 136930: stp x20, x19, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 136934: add x29, sp, #0x100 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(256)));
  /* 136938: mov x8, #-0x28 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551576));
  /* 13693c: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* 136940: sub x10, x29, #0x78 */
  ARC_X_W(c, 10, (ARC_X_R(c, 29) - UINT64_C(120)));
  /* 136944: movk x8, #0xff80, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(280925220896768)));
  /* 136948: add x9, x9, #0x80 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(128)));
  /* 13694c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 136950: stp x9, x8, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 136954: add x8, x10, #0x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + UINT64_C(40)));
  /* 136958: add x9, x29, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) + UINT64_C(48)));
  /* 13695c: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 136960: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 136964: stp x3, x4, [x29, #-0x78] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-120));
    arc_st64(_pa, ARC_X_R(c, 3));
    arc_st64(_pa + 8, ARC_X_R(c, 4));
  }
  /* 136968: stp x5, x6, [x29, #-0x68] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-104));
    arc_st64(_pa, ARC_X_R(c, 5));
    arc_st64(_pa + 8, ARC_X_R(c, 6));
  }
  /* 13696c: stur x7, [x29, #-0x58] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-88)), ARC_X_R(c, 7));
  /* 136970: stp q0, q1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 136974: stp q2, q3, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, (c)->q[2].u64[0]);
    arc_st64(_pa + 8, (c)->q[2].u64[1]);
    arc_st64((_pa + 16), (c)->q[3].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[3].u64[1]);
  }
  /* 136978: stp q4, q5, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, (c)->q[4].u64[0]);
    arc_st64(_pa + 8, (c)->q[4].u64[1]);
    arc_st64((_pa + 16), (c)->q[5].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[5].u64[1]);
  }
  /* 13697c: stp q6, q7, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, (c)->q[6].u64[0]);
    arc_st64(_pa + 8, (c)->q[6].u64[1]);
    arc_st64((_pa + 16), (c)->q[7].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[7].u64[1]);
  }
  /* 136980: stp x9, x8, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 136984: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1272200));
  fn1_1443c0(c);
  /* 136988: ldp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 13698c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 136990: stur x0, [x29, #-0x28] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-40)), ARC_X_R(c, 0));
  /* 136994: stp q0, q1, [x29, #-0x50] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-80));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 136998: sub x2, x29, #0x50 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 13699c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1369a0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1369a4: bl #0x142740 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1272232));
  fn1_142740(c);
  /* 1369a8: mov w20, w0 */
  ARC_W_W(c, 20, ARC_W_R(c, 0));
  /* 1369ac: cbz x19, #0x1369b8 */
  if ((ARC_X_R(c, 19)) == 0) goto L_1369b8;
  /* 1369b0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1369b4: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1272248));
  fn1_1443c0(c);
L_1369b8:;
  /* 1369b8: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 1369bc: ldp x20, x19, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1369c0: ldp x28, x21, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1369c4: ldp x29, x30, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1369c8: add sp, sp, #0x130 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(304)));
  /* 1369cc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1369d0: ret  */
  return;
  /* 1369d4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1272280));
  fn1_a1454(c);
  /* 1369d8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1369dc: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 1369e0: bl #0x135428 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1272292));
  fn1_135428(c);
  /* 1369e4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1369e8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1272300));
  fn1_9cc20(c);
}

void fn1_139650(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039211600));
  /* 139650: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 139654: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 139658: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13965c: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 139660: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 139664: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 139668: mov x21, x3 */
  ARC_X_W(c, 21, ARC_X_R(c, 3));
  /* 13966c: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 139670: mov x3, x1 */
  ARC_X_W(c, 3, ARC_X_R(c, 1));
  /* 139674: mov x1, x4 */
  ARC_X_W(c, 1, ARC_X_R(c, 4));
  /* 139678: mov x2, x5 */
  ARC_X_W(c, 2, ARC_X_R(c, 5));
  /* 13967c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 139680: bl #0x143010 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1283716));
  fn1_143010(c);
  /* 139684: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 139688: mov x20, x19 */
  ARC_X_W(c, 20, ARC_X_R(c, 19));
  /* 13968c: ldr x8, [x8, #0xa00] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2560))));
  /* 139690: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 139694: str x8, [x20], #0x20 */
  { const uint64_t _a = ARC_X_R(c, 20);
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(32));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 139698: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 13969c: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* 1396a0: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 1396a4: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1396a8: bl #0x13977c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1283756));
  fn1_13977c(c);
  /* 1396ac: ldr x8, [x19, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* 1396b0: ldr x1, [x19, #8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1396b4: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* 1396b8: ldr x10, [x8, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 1396bc: ldrb w11, [x8, #0x18] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 8) + INT64_C(24))));
  /* 1396c0: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 1396c4: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* 1396c8: csinc x2, x10, x8, ne */
  ARC_X_W(c, 2, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 8)) + 1)));
  /* 1396cc: add x8, x8, #0x19 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(25)));
  /* 1396d0: tst w11, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & UINT64_C(1)));
  /* 1396d4: csel x3, x8, x9, eq */
  ARC_X_W(c, 3, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* 1396d8: nop  */
  /* nop: no architectural effect here */
  /* 1396dc: adr x0, #0x5002b */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(327723)));
  /* 1396e0: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 1396e4: bl #0xd7a54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1283816));
  fn1_d7a54(c);
  /* 1396e8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1396ec: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 1396f0: ldrb w9, [x19, #0x30]! */
  { const uint64_t _a = (ARC_X_R(c, 19) + INT64_C(48));
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(48));
    ARC_W_W(c, 9, arc_ld8(_a));
  }
  /* 1396f4: tbz w9, #0, #0x139708 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_139708;
  /* 1396f8: ldr x0, [x8, #0x40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 1396fc: ldr x8, [x8, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* 139700: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 139704: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1283848));
  fn1_142608(c);
L_139708:;
  /* 139708: ldur q0, [sp, #8] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))), arc_ld64(((c)->sp + INT64_C(8)) + 8));
  /* 13970c: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 139710: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* 139714: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* 139718: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13971c: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 139720: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 139724: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 139728: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13972c: ret  */
  return;
  /* 139730: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 139734: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 139738: bl #0x1391ec */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1283900));
  fn1_1391ec(c);
  /* 13973c: b #0x139744 */
  goto L_139744;
  /* 139740: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
L_139744:;
  /* 139744: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 139748: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* 13974c: ldr x8, [x8, #0x910] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2320))));
  /* 139750: ldr x20, [x19, #8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 139754: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 139758: sub x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) - UINT64_C(8)));
  /* 13975c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 139760: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1283940));
  fn1_a2030(c);
  /* 139764: cmp w0, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(1));
  /* 139768: b.pl #0x139774 */
  if (ARC_COND(c, 5)) goto L_139774;
  /* 13976c: sub x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) - UINT64_C(24)));
  /* 139770: bl #0x1426f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1283956));
  fn1_1426f8(c);
L_139774:;
  /* 139774: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 139778: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1283964));
  fn1_9cc20(c);
}

void fn1_13fc7c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039237756));
  /* 13fc7c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13fc80: sub sp, sp, #0x100 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(256)));
  /* 13fc84: stp x29, x30, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13fc88: str x21, [sp, #0xe0] */
  arc_st64(((c)->sp + INT64_C(224)), ARC_X_R(c, 21));
  /* 13fc8c: stp x20, x19, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13fc90: add x29, sp, #0xd0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(208)));
  /* 13fc94: adrp x8, #0x4f000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(323584)));
  /* 13fc98: add x8, x8, #0xf6e */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3950)));
  /* 13fc9c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 13fca0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13fca4: stp x8, x1, [x29, #-0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-48));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 13fca8: nop  */
  /* nop: no architectural effect here */
  /* 13fcac: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13fcb0: stp x0, xzr, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13fcb4: cbz x1, #0x13fcd4 */
  if ((ARC_X_R(c, 1)) == 0) goto L_13fcd4;
  /* 13fcb8: str wzr, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 31));
  /* 13fcbc: nop  */
  /* nop: no architectural effect here */
  /* 13fcc0: adr x9, #0x159210 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13fcc4: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 13fcc8: tbz w9, #0, #0x13fe6c */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_13fe6c;
L_13fccc:;
  /* 13fccc: str x8, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 8));
  /* 13fcd0: b #0x13fce4 */
  goto L_13fce4;
L_13fcd4:;
  /* 13fcd4: nop  */
  /* nop: no architectural effect here */
  /* 13fcd8: adr x9, #0x159210 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13fcdc: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 13fce0: tbz w9, #0, #0x13fe9c */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_13fe9c;
L_13fce4:;
  /* 13fce4: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 13fce8: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 13fcec: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 13fcf0: stur wzr, [x29, #-0x40] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-64)), ARC_W_R(c, 31));
  /* 13fcf4: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 13fcf8: stur x8, [x29, #-0x38] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-56)), ARC_X_R(c, 8));
  /* 13fcfc: csinc x0, x10, x19, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 19)) + 1)));
  /* 13fd00: stur wzr, [x29, #-0x10] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-16)), ARC_W_R(c, 31));
  /* 13fd04: stur x8, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 8));
  /* 13fd08: bl #0x144588 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1309964));
  fn1_144588(c);
  /* 13fd0c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 13fd10: b.ne #0x13fd38 */
  if (ARC_COND(c, 1)) goto L_13fd38;
  /* 13fd14: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1309976));
  fn1_142a58(c);
  /* 13fd18: nop  */
  /* nop: no architectural effect here */
  /* 13fd1c: adr x9, #0x159208 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13fd20: ldr w8, [x0] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 0)));
  /* 13fd24: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 13fd28: tbz w9, #0, #0x13fecc */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_13fecc;
L_13fd2c:;
  /* 13fd2c: nop  */
  /* nop: no architectural effect here */
  /* 13fd30: adr x9, #0x156d38 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13fd34: stp x8, x9, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
L_13fd38:;
  /* 13fd38: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 13fd3c: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 13fd40: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 13fd44: sub x3, x29, #0x40 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 13fd48: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 13fd4c: bl #0x1388e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1310032));
  fn1_1388e8(c);
  /* 13fd50: ldur w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 13fd54: cbz w8, #0x13fd80 */
  if ((ARC_W_R(c, 8)) == 0) goto L_13fd80;
  /* 13fd58: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13fd5c: sub x1, x29, #0x40 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(64)));
L_13fd60:;
  /* 13fd60: bl #0x13d8bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1310052));
  fn1_13d8bc(c);
  /* 13fd64: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
L_13fd68:;
  /* 13fd68: ldp x20, x19, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13fd6c: ldr x21, [sp, #0xe0] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(224))));
  /* 13fd70: ldp x29, x30, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13fd74: add sp, sp, #0x100 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(256)));
  /* 13fd78: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13fd7c: ret  */
  return;
L_13fd80:;
  /* 13fd80: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* 13fd84: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 13fd88: b.eq #0x13fdbc */
  if (ARC_COND(c, 0)) goto L_13fdbc;
  /* 13fd8c: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 13fd90: b.ne #0x13fdcc */
  if (ARC_COND(c, 1)) goto L_13fdcc;
  /* 13fd94: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 13fd98: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 13fd9c: cbz x20, #0x13fdf8 */
  if ((ARC_X_R(c, 20)) == 0) goto L_13fdf8;
  /* 13fda0: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 13fda4: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 13fda8: bl #0x1445a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1310124));
  fn1_1445a0(c);
  /* 13fdac: ldr w8, [x20] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 20)));
  /* 13fdb0: mov w20, wzr */
  ARC_W_W(c, 20, ARC_W_R(c, 31));
  /* 13fdb4: cbnz w8, #0x13fe10 */
  if ((ARC_W_R(c, 8)) != 0) goto L_13fe10;
  /* 13fdb8: b #0x13fe04 */
  goto L_13fe04;
L_13fdbc:;
  /* 13fdbc: ldr x8, [sp, #0x40] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(64))));
  /* 13fdc0: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 13fdc4: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* 13fdc8: b #0x13fd68 */
  goto L_13fd68;
L_13fdcc:;
  /* 13fdcc: nop  */
  /* nop: no architectural effect here */
  /* 13fdd0: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13fdd4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13fdd8: tbz w8, #0, #0x13fef8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13fef8;
L_13fddc:;
  /* 13fddc: mov w8, #0x5f */
  ARC_W_W(c, 8, UINT64_C(95));
  /* 13fde0: nop  */
  /* nop: no architectural effect here */
  /* 13fde4: adr x9, #0x156d38 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13fde8: stp x8, x9, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 13fdec: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13fdf0: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 13fdf4: b #0x13fd60 */
  goto L_13fd60;
L_13fdf8:;
  /* 13fdf8: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 13fdfc: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 13fe00: bl #0x1445a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1310212));
  fn1_1445a0(c);
L_13fe04:;
  /* 13fe04: ldur x8, [x29, #-0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 13fe08: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 13fe0c: cset w20, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? 1 : 0));
L_13fe10:;
  /* 13fe10: ldur x19, [x29, #-8] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 13fe14: cbz x19, #0x13fe64 */
  if ((ARC_X_R(c, 19)) == 0) goto L_13fe64;
  /* 13fe18: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 13fe1c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 13fe20: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1310244));
  fn1_bd950(c);
  /* 13fe24: cbnz x0, #0x13fe64 */
  if ((ARC_X_R(c, 0)) != 0) goto L_13fe64;
  /* 13fe28: mov x21, x19 */
  ARC_X_W(c, 21, ARC_X_R(c, 19));
  /* 13fe2c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13fe30: ldr x8, [x21], #0x10 */
  { const uint64_t _a = ARC_X_R(c, 21);
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 13fe34: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 13fe38: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1310268));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 13fe3c: ldar x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 13fe40: cbz x8, #0x13fe54 */
  if ((ARC_X_R(c, 8)) == 0) goto L_13fe54;
  /* 13fe44: add x1, x19, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* 13fe48: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 13fe4c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1310288));
  fn1_bd950(c);
  /* 13fe50: cbnz x0, #0x13fe64 */
  if ((ARC_X_R(c, 0)) != 0) goto L_13fe64;
L_13fe54:;
  /* 13fe54: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 13fe58: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13fe5c: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 13fe60: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1310308));
  arc_dispatch(c, ARC_X_R(c, 8));
L_13fe64:;
  /* 13fe64: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 13fe68: b #0x13fd68 */
  goto L_13fd68;
L_13fe6c:;
  /* 13fe6c: nop  */
  /* nop: no architectural effect here */
  /* 13fe70: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13fe74: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1310328));
  fn1_1424b8(c);
  /* 13fe78: nop  */
  /* nop: no architectural effect here */
  /* 13fe7c: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13fe80: cbz w0, #0x13fccc */
  if ((ARC_W_R(c, 0)) == 0) goto L_13fccc;
  /* 13fe84: nop  */
  /* nop: no architectural effect here */
  /* 13fe88: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13fe8c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1310352));
  fn1_1424d0(c);
  /* 13fe90: nop  */
  /* nop: no architectural effect here */
  /* 13fe94: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13fe98: b #0x13fccc */
  goto L_13fccc;
L_13fe9c:;
  /* 13fe9c: nop  */
  /* nop: no architectural effect here */
  /* 13fea0: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13fea4: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1310376));
  fn1_1424b8(c);
  /* 13fea8: nop  */
  /* nop: no architectural effect here */
  /* 13feac: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13feb0: cbz w0, #0x13fce4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13fce4;
  /* 13feb4: nop  */
  /* nop: no architectural effect here */
  /* 13feb8: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13febc: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1310400));
  fn1_1424d0(c);
  /* 13fec0: nop  */
  /* nop: no architectural effect here */
  /* 13fec4: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13fec8: b #0x13fce4 */
  goto L_13fce4;
L_13fecc:;
  /* 13fecc: nop  */
  /* nop: no architectural effect here */
  /* 13fed0: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13fed4: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* 13fed8: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1310428));
  fn1_1424b8(c);
  /* 13fedc: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 13fee0: cbz w0, #0x13fd2c */
  if ((ARC_W_R(c, 0)) == 0) goto L_13fd2c;
  /* 13fee4: nop  */
  /* nop: no architectural effect here */
  /* 13fee8: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13feec: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1310448));
  fn1_1424d0(c);
  /* 13fef0: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 13fef4: b #0x13fd2c */
  goto L_13fd2c;
L_13fef8:;
  /* 13fef8: nop  */
  /* nop: no architectural effect here */
  /* 13fefc: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13ff00: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1310468));
  fn1_1424b8(c);
  /* 13ff04: cbz w0, #0x13fddc */
  if ((ARC_W_R(c, 0)) == 0) goto L_13fddc;
  /* 13ff08: nop  */
  /* nop: no architectural effect here */
  /* 13ff0c: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13ff10: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1310484));
  fn1_1424d0(c);
  /* 13ff14: b #0x13fddc */
  goto L_13fddc;
}

void fn1_1427a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248800));
  /* 1427a0: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1427a4: ldr x17, [x16, #0xfc0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(4032))));
  /* 1427a8: add x16, x16, #0xfc0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(4032)));
  /* 1427ac: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1427b0: nop  */
  /* nop: no architectural effect here */
  /* 1427b4: nop  */
  /* nop: no architectural effect here */
}

void fn1_142da0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250336));
  /* 142da0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142da4: ldr x17, [x16, #0x1c0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(448))));
  /* 142da8: add x16, x16, #0x1c0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(448)));
  /* 142dac: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142db0: nop  */
  /* nop: no architectural effect here */
  /* 142db4: nop  */
  /* nop: no architectural effect here */
}

void fn1_1433a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251872));
  /* 1433a0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1433a4: ldr x17, [x16, #0x3c0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(960))));
  /* 1433a8: add x16, x16, #0x3c0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(960)));
  /* 1433ac: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1433b0: nop  */
  /* nop: no architectural effect here */
  /* 1433b4: nop  */
  /* nop: no architectural effect here */
}

void fn1_1439a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253408));
  /* 1439a0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1439a4: ldr x17, [x16, #0x5c0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1472))));
  /* 1439a8: add x16, x16, #0x5c0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1472)));
  /* 1439ac: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1439b0: nop  */
  /* nop: no architectural effect here */
  /* 1439b4: nop  */
  /* nop: no architectural effect here */
}

void fn1_143fa0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254944));
  /* 143fa0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143fa4: ldr x17, [x16, #0x7c0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1984))));
  /* 143fa8: add x16, x16, #0x7c0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1984)));
  /* 143fac: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143fb0: nop  */
  /* nop: no architectural effect here */
  /* 143fb4: nop  */
  /* nop: no architectural effect here */
}

void fn1_1445a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256480));
  /* 1445a0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1445a4: ldr x17, [x16, #0x9c0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2496))));
  /* 1445a8: add x16, x16, #0x9c0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2496)));
  /* 1445ac: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1445b0: nop  */
  /* nop: no architectural effect here */
  /* 1445b4: nop  */
  /* nop: no architectural effect here */
}

