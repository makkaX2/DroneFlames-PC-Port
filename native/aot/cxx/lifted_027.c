#include "lifted.h"

void fn1_9d5bc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038572476));
  /* 9d5bc: bti c */
  /* bti: no architectural effect here */
  /* 9d5c0: ret  */
  return;
}

void fn1_a1a80(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038590080));
  /* a1a80: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a1a84: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* a1a88: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a1a8c: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a1a90: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a1a94: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* a1a98: cbz x3, #0xa1b0c */
  if ((ARC_X_R(c, 3)) == 0) goto L_a1b0c;
  /* a1a9c: sub x8, x29, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* a1aa0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a1aa4: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* a1aa8: stp x0, x8, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* a1aac: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* a1ab0: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* a1ab4: strb w8, [sp, #0x20] */
  arc_st8(((c)->sp + INT64_C(32)), ARC_W_R(c, 8));
  /* a1ab8: nop  */
  /* nop: no architectural effect here */
  /* a1abc: adr x8, #0x156bb8 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1403832)));
  /* a1ac0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* a1ac4: stur x1, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 1));
  /* a1ac8: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* a1acc: stp x2, x3, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 2));
    arc_st64(_pa + 8, ARC_X_R(c, 3));
  }
  /* a1ad0: bl #0x144ac8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(662228));
  fn1_144ac8(c);
  /* a1ad4: sub x8, x22, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) - UINT64_C(1)));
  /* a1ad8: madd x9, x21, x8, x20 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 20)) + ((uint64_t)(ARC_X_R(c, 21)) * (uint64_t)(ARC_X_R(c, 8)))));
  /* a1adc: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* a1ae0: neg x21, x21 */
  ARC_X_W(c, 21, ((uint64_t)0 - (uint64_t)(ARC_X_R(c, 21))));
  /* a1ae4: ldr w20, [x8, #8] */
  ARC_W_W(c, 20, arc_ld32((ARC_X_R(c, 8) + INT64_C(8))));
  /* a1ae8: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
L_a1aec:;
  /* a1aec: ldur x8, [x29, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* a1af0: sub x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* a1af4: stur x9, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 9));
  /* a1af8: cbz x8, #0xa1b0c */
  if ((ARC_X_R(c, 8)) == 0) goto L_a1b0c;
  /* a1afc: add x22, x0, x21 */
  ARC_X_W(c, 22, (ARC_X_R(c, 0) + ARC_X_R(c, 21)));
  /* a1b00: blr x19 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(662276));
  arc_dispatch(c, ARC_X_R(c, 19));
  /* a1b04: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* a1b08: b #0xa1aec */
  goto L_a1aec;
L_a1b0c:;
  /* a1b0c: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a1b10: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a1b14: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a1b18: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* a1b1c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a1b20: ret  */
  return;
  /* a1b24: cbnz w20, #0xa1b3c */
  if ((ARC_W_R(c, 20)) != 0) goto L_a1b3c;
  /* a1b28: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a1b2c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* a1b30: bl #0xa1a0c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(662324));
  fn1_a1a0c(c);
  /* a1b34: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a1b38: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(662332));
  fn1_9cc20(c);
L_a1b3c:;
  /* a1b3c: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(662336));
  fn1_142488(c);
}

void fn1_a2934(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038593844));
  /* a2934: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a2938: sub sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(160)));
  /* a293c: stp x30, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 30));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* a2940: stp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* a2944: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a2948: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a294c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* a2950: ldr x9, [x2, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 2) + INT64_C(8))));
  /* a2954: ldp x8, x20, [x8, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(-16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 20, arc_ld64(_pa + 8));
  }
  /* a2958: ldr x10, [x20, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* a295c: add x19, x0, x8 */
  ARC_X_W(c, 19, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* a2960: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* a2964: b.eq #0xa2a70 */
  if (ARC_COND(c, 0)) goto L_a2a70;
  /* a2968: tbnz x3, #0x3f, #0xa29f8 */
  if (((ARC_X_R(c, 3)) >> 63 & 1) != 0) goto L_a29f8;
  /* a296c: sub x8, x0, x3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) - ARC_X_R(c, 3)));
  /* a2970: cmp x8, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 19));
  /* a2974: b.lt #0xa29f8 */
  if (ARC_COND(c, 11)) goto L_a29f8;
  /* a2978: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* a297c: movi v1.2s, #1, lsl #24 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = UINT64_C(16777216);
    _t.u32[1] = UINT64_C(16777216);
    (c)->q[1] = _t; }
  /* a2980: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* a2984: stp x20, x8, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* a2988: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* a298c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* a2990: stp x2, x3, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 2));
    arc_st64(_pa + 8, ARC_X_R(c, 3));
  }
  /* a2994: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* a2998: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a299c: str xzr, [sp, #0x48] */
  arc_st64(((c)->sp + INT64_C(72)), ARC_X_R(c, 31));
  /* a29a0: mov x24, x2 */
  ARC_X_W(c, 24, ARC_X_R(c, 2));
  /* a29a4: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* a29a8: stur q0, [sp, #0x38] */
  arc_st64(((c)->sp + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* a29ac: mov x25, x3 */
  ARC_X_W(c, 25, ARC_X_R(c, 3));
  /* a29b0: mov x3, x19 */
  ARC_X_W(c, 3, ARC_X_R(c, 19));
  /* a29b4: stur q0, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* a29b8: mov w4, #1 */
  ARC_W_W(c, 4, UINT64_C(1));
  /* a29bc: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* a29c0: str w9, [sp, #0x50] */
  arc_st32(((c)->sp + INT64_C(80)), ARC_W_R(c, 9));
  /* a29c4: mov x22, x8 */
  ARC_X_W(c, 22, ARC_X_R(c, 8));
  /* a29c8: str s1, [sp, #0x54] */
  arc_st32(((c)->sp + INT64_C(84)), (c)->q[1].u32[0]);
  /* a29cc: str xzr, [sp, #0x58] */
  arc_st64(((c)->sp + INT64_C(88)), ARC_X_R(c, 31));
  /* a29d0: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* a29d4: ldr x9, [x9, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(40))));
  /* a29d8: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(666076));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* a29dc: ldr w9, [sp, #0x38] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(56))));
  /* a29e0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* a29e4: mov x8, x22 */
  ARC_X_W(c, 8, ARC_X_R(c, 22));
  /* a29e8: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* a29ec: mov x3, x25 */
  ARC_X_W(c, 3, ARC_X_R(c, 25));
  /* a29f0: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* a29f4: cbnz w9, #0xa2b20 */
  if ((ARC_W_R(c, 9)) != 0) goto L_a2b20;
L_a29f8:;
  /* a29f8: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* a29fc: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* a2a00: stp x2, x0, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 2));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* a2a04: stp x1, x3, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 3));
  }
  /* a2a08: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* a2a0c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a2a10: strb w8, [sp, #0x57] */
  arc_st8(((c)->sp + INT64_C(87)), ARC_W_R(c, 8));
  /* a2a14: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* a2a18: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* a2a1c: str xzr, [sp, #0x58] */
  arc_st64(((c)->sp + INT64_C(88)), ARC_X_R(c, 31));
  /* a2a20: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* a2a24: stur q0, [sp, #0x47] */
  arc_st64(((c)->sp + INT64_C(71)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(71)) + 8, (c)->q[0].u64[1]);
  /* a2a28: stur q0, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* a2a2c: stur q0, [sp, #0x38] */
  arc_st64(((c)->sp + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* a2a30: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* a2a34: ldr x8, [x8, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* a2a38: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(666172));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* a2a3c: ldr w9, [sp, #0x44] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(68))));
  /* a2a40: cmp w9, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(1));
  /* a2a44: b.eq #0xa2a7c */
  if (ARC_COND(c, 0)) goto L_a2a7c;
  /* a2a48: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a2a4c: cbnz w9, #0xa2b20 */
  if ((ARC_W_R(c, 9)) != 0) goto L_a2b20;
  /* a2a50: ldp w9, w8, [sp, #0x3c] */
  { const uint64_t _pa = ((c)->sp + INT64_C(60));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 8, arc_ld32(_pa + 4));
  }
  /* a2a54: ldr w10, [sp, #0x48] */
  ARC_W_W(c, 10, arc_ld32(((c)->sp + INT64_C(72))));
  /* a2a58: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* a2a5c: ldr x8, [sp, #0x30] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(48))));
  /* a2a60: ccmp w9, #1, #0, eq */
  if (ARC_COND(c, 0)) { (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(1)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* a2a64: ccmp w10, #1, #0, eq */
  if (ARC_COND(c, 0)) { (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(1)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* a2a68: csel x8, x8, xzr, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 31)));
  /* a2a6c: b #0xa2b20 */
  goto L_a2b20;
L_a2a70:;
  /* a2a70: tbnz x3, #0x3f, #0xa2ab4 */
  if (((ARC_X_R(c, 3)) >> 63 & 1) != 0) goto L_a2ab4;
  /* a2a74: cmn x8, x3 */
  (void)arc_add64(c, ARC_X_R(c, 8), ARC_X_R(c, 3), 0);
  /* a2a78: b #0xa2b1c */
  goto L_a2b1c;
L_a2a7c:;
  /* a2a7c: ldr w8, [sp, #0x38] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(56))));
  /* a2a80: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* a2a84: b.eq #0xa2aac */
  if (ARC_COND(c, 0)) goto L_a2aac;
  /* a2a88: ldr w9, [sp, #0x48] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(72))));
  /* a2a8c: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a2a90: cbnz w9, #0xa2b20 */
  if ((ARC_W_R(c, 9)) != 0) goto L_a2b20;
  /* a2a94: ldr w9, [sp, #0x3c] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(60))));
  /* a2a98: cmp w9, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(1));
  /* a2a9c: b.ne #0xa2b20 */
  if (ARC_COND(c, 1)) goto L_a2b20;
  /* a2aa0: ldr w9, [sp, #0x40] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(64))));
  /* a2aa4: cmp w9, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(1));
  /* a2aa8: b.ne #0xa2b20 */
  if (ARC_COND(c, 1)) goto L_a2b20;
L_a2aac:;
  /* a2aac: ldr x8, [sp, #0x28] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(40))));
  /* a2ab0: b #0xa2b20 */
  goto L_a2b20;
L_a2ab4:;
  /* a2ab4: cmn x3, #2 */
  (void)arc_add64(c, ARC_X_R(c, 3), UINT64_C(2), 0);
  /* a2ab8: b.ne #0xa2ac4 */
  if (ARC_COND(c, 1)) goto L_a2ac4;
  /* a2abc: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a2ac0: b #0xa2b20 */
  goto L_a2b20;
L_a2ac4:;
  /* a2ac4: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* a2ac8: movi v1.2s, #1, lsl #24 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = UINT64_C(16777216);
    _t.u32[1] = UINT64_C(16777216);
    (c)->q[1] = _t; }
  /* a2acc: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* a2ad0: str w8, [sp, #0x50] */
  arc_st32(((c)->sp + INT64_C(80)), ARC_W_R(c, 8));
  /* a2ad4: ldr x8, [x2] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 2)));
  /* a2ad8: mov w4, #1 */
  ARC_W_W(c, 4, UINT64_C(1));
  /* a2adc: str xzr, [sp, #0x48] */
  arc_st64(((c)->sp + INT64_C(72)), ARC_X_R(c, 31));
  /* a2ae0: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* a2ae4: str xzr, [sp, #0x58] */
  arc_st64(((c)->sp + INT64_C(88)), ARC_X_R(c, 31));
  /* a2ae8: stur q0, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* a2aec: stur q0, [sp, #0x38] */
  arc_st64(((c)->sp + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* a2af0: str s1, [sp, #0x54] */
  arc_st32(((c)->sp + INT64_C(84)), (c)->q[1].u32[0]);
  /* a2af4: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* a2af8: stp x2, x0, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 2));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* a2afc: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* a2b00: stp x1, x3, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 3));
  }
  /* a2b04: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* a2b08: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* a2b0c: mov x3, x19 */
  ARC_X_W(c, 3, ARC_X_R(c, 19));
  /* a2b10: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(666388));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* a2b14: ldr w8, [sp, #0x38] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(56))));
  /* a2b18: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
L_a2b1c:;
  /* a2b1c: csel x8, x19, xzr, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 19)) : ARC_X_R(c, 31)));
L_a2b20:;
  /* a2b20: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a2b24: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* a2b28: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a2b2c: ldp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* a2b30: ldp x30, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 30, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* a2b34: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* a2b38: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a2b3c: ret  */
  return;
}

void fn1_a94fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038621436));
  /* a94fc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a9500: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* a9504: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a9508: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* a950c: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a9510: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a9514: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* a9518: ldp x20, x8, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* a951c: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* a9520: b.eq #0xa9670 */
  if (ARC_COND(c, 0)) goto L_a9670;
  /* a9524: ldrb w9, [x20] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 20)));
  /* a9528: cmp w9, #0x54 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(84));
  /* a952c: b.ne #0xa9670 */
  if (ARC_COND(c, 1)) goto L_a9670;
  /* a9530: add x21, x20, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 20) + UINT64_C(1)));
  /* a9534: cmp x21, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* a9538: str x21, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 21));
  /* a953c: b.eq #0xa95c0 */
  if (ARC_COND(c, 0)) goto L_a95c0;
  /* a9540: ldrb w9, [x21] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 21)));
  /* a9544: cmp w9, #0x4c */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(76));
  /* a9548: b.ne #0xa95c0 */
  if (ARC_COND(c, 1)) goto L_a95c0;
  /* a954c: add x9, x20, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) + UINT64_C(2)));
  /* a9550: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a9554: str x9, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 9));
  /* a9558: b.eq #0xa9670 */
  if (ARC_COND(c, 0)) goto L_a9670;
  /* a955c: ldrb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* a9560: sub w9, w9, #0x3a */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) - UINT64_C(58)));
  /* a9564: cmn w9, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 9), UINT64_C(10), 0);
  /* a9568: b.lo #0xa9670 */
  if (ARC_COND(c, 3)) goto L_a9670;
  /* a956c: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* a9570: add x21, x20, #3 */
  ARC_X_W(c, 21, (ARC_X_R(c, 20) + UINT64_C(3)));
  /* a9574: mov w10, #0xa */
  ARC_W_W(c, 10, UINT64_C(10));
L_a9578:;
  /* a9578: cmp x21, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* a957c: str x21, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 21));
  /* a9580: b.eq #0xa9670 */
  if (ARC_COND(c, 0)) goto L_a9670;
  /* a9584: ldurb w11, [x21, #-1] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 21) + INT64_C(-1))));
  /* a9588: nop  */
  /* nop: no architectural effect here */
  /* a958c: madd x9, x9, x10, x11 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 11)) + ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 10)))));
  /* a9590: ldrb w11, [x21], #1 */
  { const uint64_t _a = ARC_X_R(c, 21);
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(1));
    ARC_W_W(c, 11, arc_ld8(_a));
  }
  /* a9594: sub w12, w11, #0x30 */
  ARC_W_W(c, 12, (ARC_W_R(c, 11) - UINT64_C(48)));
  /* a9598: cmp w12, #9 */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(9));
  /* a959c: sub x9, x9, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(48)));
  /* a95a0: b.ls #0xa9578 */
  if (ARC_COND(c, 9)) goto L_a9578;
  /* a95a4: cmp w11, #0x5f */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(95));
  /* a95a8: b.ne #0xa9670 */
  if (ARC_COND(c, 1)) goto L_a9670;
  /* a95ac: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* a95b0: str x21, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 21));
  /* a95b4: cmp x21, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* a95b8: b.ne #0xa95cc */
  if (ARC_COND(c, 1)) goto L_a95cc;
  /* a95bc: b #0xa9670 */
  goto L_a9670;
L_a95c0:;
  /* a95c0: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* a95c4: cmp x21, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* a95c8: b.eq #0xa9670 */
  if (ARC_COND(c, 0)) goto L_a9670;
L_a95cc:;
  /* a95cc: ldrb w10, [x21] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 21)));
  /* a95d0: cmp w10, #0x5f */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(95));
  /* a95d4: b.ne #0xa9664 */
  if (ARC_COND(c, 1)) goto L_a9664;
  /* a95d8: mov x22, xzr */
  ARC_X_W(c, 22, ARC_X_R(c, 31));
L_a95dc:;
  /* a95dc: ldrb w8, [x0, #0x30a] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(778))));
  /* a95e0: add x10, x21, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* a95e4: str x10, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 10));
  /* a95e8: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* a95ec: b.ne #0xa9694 */
  if (ARC_COND(c, 1)) goto L_a9694;
  /* a95f0: ldr x22, [x0, #0x1330] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* a95f4: ldr x8, [x22, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* a95f8: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* a95fc: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a9600: b.hi #0xa9624 */
  if (ARC_COND(c, 8)) goto L_a9624;
  /* a9604: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a9608: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a960c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(693776));
  fn1_1428a8(c);
  /* a9610: cbz x0, #0xa9890 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a9890;
  /* a9614: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a9618: stp x22, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a961c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* a9620: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_a9624:;
  /* a9624: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* a9628: add x19, x22, x8 */
  ARC_X_W(c, 19, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* a962c: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a9630: add x8, x8, #0xc10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3088)));
  /* a9634: str x9, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 9));
  /* a9638: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a963c: str x8, [x19, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a9640: ldurh w8, [x19, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 19) + INT64_C(9))));
  /* a9644: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* a9648: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* a964c: strb w9, [x19, #8] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(8)), ARC_W_R(c, 9));
  /* a9650: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* a9654: sturh w8, [x19, #9] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(9)), ARC_W_R(c, 8));
  /* a9658: sub x8, x21, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) - ARC_X_R(c, 20)));
  /* a965c: stp x20, x8, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* a9660: b #0xa9674 */
  goto L_a9674;
L_a9664:;
  /* a9664: sub w10, w10, #0x3a */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) - UINT64_C(58)));
  /* a9668: cmn w10, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 10), UINT64_C(10), 0);
  /* a966c: b.hs #0xa9764 */
  if (ARC_COND(c, 2)) goto L_a9764;
L_a9670:;
  /* a9670: mov x19, xzr */
  ARC_X_W(c, 19, ARC_X_R(c, 31));
L_a9674:;
  /* a9674: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a9678: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a967c: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a9680: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* a9684: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a9688: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* a968c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a9690: ret  */
  return;
L_a9694:;
  /* a9694: ldrb w8, [x0, #0x309] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(777))));
  /* a9698: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* a969c: b.ne #0xa97b0 */
  if (ARC_COND(c, 1)) goto L_a97b0;
  /* a96a0: cbnz x9, #0xa97b0 */
  if ((ARC_X_R(c, 9)) != 0) goto L_a97b0;
  /* a96a4: ldr x19, [x0, #0x1330] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* a96a8: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* a96ac: sub x8, x9, #0xfc0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) - UINT64_C(4032)));
  /* a96b0: cmn x8, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(4081), 0);
  /* a96b4: b.hi #0xa96e0 */
  if (ARC_COND(c, 8)) goto L_a96e0;
  /* a96b8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a96bc: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a96c0: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(693956));
  fn1_1428a8(c);
  /* a96c4: cbz x0, #0xa9890 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a9890;
  /* a96c8: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* a96cc: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* a96d0: stp x19, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a96d4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a96d8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a96dc: str x8, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 8));
L_a96e0:;
  /* a96e0: add x8, x9, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(48)));
  /* a96e4: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* a96e8: add x19, x19, x9 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* a96ec: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a96f0: add x8, x8, #0xd00 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3328)));
  /* a96f4: mov w9, #0xa80 */
  ARC_W_W(c, 9, UINT64_C(2688));
  /* a96f8: str x8, [x19, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a96fc: ldurh w8, [x19, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 19) + INT64_C(9))));
  /* a9700: stp x22, xzr, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a9704: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* a9708: strb wzr, [x19, #0x20] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 31));
  /* a970c: orr w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 9)));
  /* a9710: mov w9, #0x2c */
  ARC_W_W(c, 9, UINT64_C(44));
  /* a9714: sturh w8, [x19, #9] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(9)), ARC_W_R(c, 8));
  /* a9718: ldr x23, [x0, #0x2d8] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 0) + INT64_C(728))));
  /* a971c: ldr x8, [x0, #0x2e0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(736))));
  /* a9720: strb w9, [x19, #8] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(8)), ARC_W_R(c, 9));
  /* a9724: cmp x23, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* a9728: b.ne #0xa9884 */
  if (ARC_COND(c, 1)) goto L_a9884;
  /* a972c: ldr x22, [x0, #0x2d0] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 0) + INT64_C(720))));
  /* a9730: add x8, x0, #0x2e8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(744)));
  /* a9734: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* a9738: sub x20, x23, x22 */
  ARC_X_W(c, 20, (ARC_X_R(c, 23) - ARC_X_R(c, 22)));
  /* a973c: cmp x22, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* a9740: lsl x1, x20, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 20)) << ((UINT64_C(1)) & 63)));
  /* a9744: b.eq #0xa9844 */
  if (ARC_COND(c, 0)) goto L_a9844;
  /* a9748: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* a974c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(694096));
  fn1_142878(c);
  /* a9750: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a9754: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* a9758: str x21, [x24, #0x2d0] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(720)), ARC_X_R(c, 21));
  /* a975c: cbnz x21, #0xa9874 */
  if ((ARC_X_R(c, 21)) != 0) goto L_a9874;
  /* a9760: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(694116));
  fn1_1427b8(c);
L_a9764:;
  /* a9764: mov x11, xzr */
  ARC_X_W(c, 11, ARC_X_R(c, 31));
  /* a9768: add x10, x21, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* a976c: mov w12, #0xa */
  ARC_W_W(c, 12, UINT64_C(10));
L_a9770:;
  /* a9770: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* a9774: str x10, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 10));
  /* a9778: b.eq #0xa9670 */
  if (ARC_COND(c, 0)) goto L_a9670;
  /* a977c: ldurb w13, [x10, #-1] */
  ARC_W_W(c, 13, arc_ld8((ARC_X_R(c, 10) + INT64_C(-1))));
  /* a9780: nop  */
  /* nop: no architectural effect here */
  /* a9784: madd x11, x11, x12, x13 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 13)) + ((uint64_t)(ARC_X_R(c, 11)) * (uint64_t)(ARC_X_R(c, 12)))));
  /* a9788: ldrb w13, [x10], #1 */
  { const uint64_t _a = ARC_X_R(c, 10);
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(1));
    ARC_W_W(c, 13, arc_ld8(_a));
  }
  /* a978c: sub w14, w13, #0x30 */
  ARC_W_W(c, 14, (ARC_W_R(c, 13) - UINT64_C(48)));
  /* a9790: cmp w14, #9 */
  (void)arc_sub32(c, ARC_W_R(c, 14), UINT64_C(9));
  /* a9794: sub x11, x11, #0x30 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(48)));
  /* a9798: b.ls #0xa9770 */
  if (ARC_COND(c, 9)) goto L_a9770;
  /* a979c: cmp w13, #0x5f */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(95));
  /* a97a0: b.ne #0xa9670 */
  if (ARC_COND(c, 1)) goto L_a9670;
  /* a97a4: add x22, x11, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 11) + UINT64_C(1)));
  /* a97a8: sub x21, x10, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* a97ac: b #0xa95dc */
  goto L_a95dc;
L_a97b0:;
  /* a97b0: ldr x8, [x0, #0x2a0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(672))));
  /* a97b4: ldr x10, [x0, #0x298] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(664))));
  /* a97b8: sub x8, x8, x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 10)));
  /* a97bc: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* a97c0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* a97c4: b.hs #0xa97e8 */
  if (ARC_COND(c, 2)) goto L_a97e8;
  /* a97c8: ldr x10, [x10, x9, lsl #3] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* a97cc: cbz x10, #0xa97e8 */
  if ((ARC_X_R(c, 10)) == 0) goto L_a97e8;
  /* a97d0: ldp x10, x11, [x10] */
  { const uint64_t _pa = ARC_X_R(c, 10);
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* a97d4: sub x11, x11, x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - ARC_X_R(c, 10)));
  /* a97d8: cmp x22, x11, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ((uint64_t)((int64_t)(ARC_X_R(c, 11)) >> 3)));
  /* a97dc: b.hs #0xa97e8 */
  if (ARC_COND(c, 2)) goto L_a97e8;
  /* a97e0: ldr x19, [x10, x22, lsl #3] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 22)) << 3))));
  /* a97e4: b #0xa9674 */
  goto L_a9674;
L_a97e8:;
  /* a97e8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* a97ec: mov x19, xzr */
  ARC_X_W(c, 19, ARC_X_R(c, 31));
  /* a97f0: b.hi #0xa9674 */
  if (ARC_COND(c, 8)) goto L_a9674;
  /* a97f4: ldr x10, [x0, #0x310] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(784))));
  /* a97f8: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* a97fc: b.ne #0xa9674 */
  if (ARC_COND(c, 1)) goto L_a9674;
  /* a9800: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* a9804: b.ne #0xa9820 */
  if (ARC_COND(c, 1)) goto L_a9820;
  /* a9808: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a980c: add x0, x0, #0x298 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(664)));
  /* a9810: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* a9814: str xzr, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 31));
  /* a9818: bl #0xaa290 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(694300));
  fn1_aa290(c);
  /* a981c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
L_a9820:;
  /* a9820: adrp x1, #0x4f000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(323584)));
  /* a9824: add x1, x1, #0x988 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2440)));
  /* a9828: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a982c: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a9830: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* a9834: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a9838: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* a983c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a9840: b #0xaa364 */
  fn1_aa364(c); return;
L_a9844:;
  /* a9844: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* a9848: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(694348));
  fn1_1428a8(c);
  /* a984c: cbz x0, #0xa9894 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a9894;
  /* a9850: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a9854: cmp x23, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 22));
  /* a9858: b.eq #0xa986c */
  if (ARC_COND(c, 0)) goto L_a986c;
  /* a985c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* a9860: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* a9864: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* a9868: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(694380));
  fn1_1449f0(c);
L_a986c:;
  /* a986c: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* a9870: str x21, [x24, #0x2d0] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(720)), ARC_X_R(c, 21));
L_a9874:;
  /* a9874: asr x8, x20, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 20)) >> ((UINT64_C(2)) & 63))));
  /* a9878: add x23, x21, x20 */
  ARC_X_W(c, 23, (ARC_X_R(c, 21) + ARC_X_R(c, 20)));
  /* a987c: add x8, x21, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* a9880: str x8, [x0, #0x2e0] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(736)), ARC_X_R(c, 8));
L_a9884:;
  /* a9884: str x19, [x23], #8 */
  { const uint64_t _a = ARC_X_R(c, 23);
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 19));
  }
  /* a9888: str x23, [x0, #0x2d8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(728)), ARC_X_R(c, 23));
  /* a988c: b #0xa9674 */
  goto L_a9674;
L_a9890:;
  /* a9890: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(694420));
  fn1_142488(c);
L_a9894:;
  /* a9894: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(694424));
  fn1_1427b8(c);
}

void fn1_b0a34(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038651444));
  /* b0a34: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b0a38: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b0a3c: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b0a40: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b0a44: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b0a48: ldr x21, [x0, #0x18] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* b0a4c: ldr x8, [x1, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* b0a50: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b0a54: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b0a58: cbz x21, #0xb0ab4 */
  if ((ARC_X_R(c, 21)) == 0) goto L_b0ab4;
  /* b0a5c: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b0a60: add x9, x8, x21 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* b0a64: ldr x22, [x20, #0x10] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* b0a68: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b0a6c: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b0a70: b.ls #0xb0a98 */
  if (ARC_COND(c, 9)) goto L_b0a98;
  /* b0a74: lsl x8, x10, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b0a78: add x9, x9, #0x3e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(992)));
  /* b0a7c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b0a80: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* b0a84: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b0a88: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(723596));
  fn1_142878(c);
  /* b0a8c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b0a90: cbz x0, #0xb0c14 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b0c14;
  /* b0a94: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b0a98:;
  /* b0a98: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b0a9c: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* b0aa0: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* b0aa4: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(723624));
  fn1_1449d8(c);
  /* b0aa8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b0aac: add x8, x8, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* b0ab0: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_b0ab4:;
  /* b0ab4: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b0ab8: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b0abc: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b0ac0: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b0ac4: add w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* b0ac8: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b0acc: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* b0ad0: b.ls #0xb0afc */
  if (ARC_COND(c, 9)) goto L_b0afc;
  /* b0ad4: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b0ad8: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b0adc: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b0ae0: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b0ae4: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b0ae8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(723692));
  fn1_142878(c);
  /* b0aec: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b0af0: cbz x0, #0xb0c0c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b0c0c;
  /* b0af4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b0af8: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b0afc:;
  /* b0afc: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b0b00: mov w9, #0x28 */
  ARC_W_W(c, 9, UINT64_C(40));
  /* b0b04: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b0b08: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b0b0c: ldr x21, [x20, #0x20] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* b0b10: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b0b14: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b0b18: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b0b1c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(723744));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b0b20: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* b0b24: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b0b28: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b0b2c: b.eq #0xb0b44 */
  if (ARC_COND(c, 0)) goto L_b0b44;
  /* b0b30: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b0b34: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b0b38: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b0b3c: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b0b40: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(723780));
  arc_dispatch(c, ARC_X_R(c, 8));
L_b0b44:;
  /* b0b44: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b0b48: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b0b4c: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b0b50: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* b0b54: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b0b58: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* b0b5c: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b0b60: b.ls #0xb0b8c */
  if (ARC_COND(c, 9)) goto L_b0b8c;
  /* b0b64: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b0b68: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b0b6c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b0b70: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b0b74: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b0b78: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(723836));
  fn1_142878(c);
  /* b0b7c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b0b80: cbz x0, #0xb0c10 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b0c10;
  /* b0b84: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b0b88: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b0b8c:;
  /* b0b8c: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b0b90: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* b0b94: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b0b98: ldr x21, [x20, #0x30] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(48))));
  /* b0b9c: cbz x21, #0xb0bf8 */
  if ((ARC_X_R(c, 21)) == 0) goto L_b0bf8;
  /* b0ba0: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b0ba4: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b0ba8: ldr x20, [x20, #0x28] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(40))));
  /* b0bac: add x10, x8, x21 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* b0bb0: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b0bb4: b.ls #0xb0bdc */
  if (ARC_COND(c, 9)) goto L_b0bdc;
  /* b0bb8: lsl x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b0bbc: add x9, x10, #0x3e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(992)));
  /* b0bc0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b0bc4: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* b0bc8: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b0bcc: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(723920));
  fn1_142878(c);
  /* b0bd0: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b0bd4: cbz x0, #0xb0c18 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b0c18;
  /* b0bd8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b0bdc:;
  /* b0bdc: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b0be0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* b0be4: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* b0be8: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(723948));
  fn1_1449d8(c);
  /* b0bec: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b0bf0: add x8, x8, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* b0bf4: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_b0bf8:;
  /* b0bf8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b0bfc: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* b0c00: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b0c04: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b0c08: ret  */
  return;
L_b0c0c:;
  /* b0c0c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(723984));
  fn1_1427b8(c);
L_b0c10:;
  /* b0c10: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(723988));
  fn1_1427b8(c);
L_b0c14:;
  /* b0c14: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(723992));
  fn1_1427b8(c);
L_b0c18:;
  /* b0c18: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(723996));
  fn1_1427b8(c);
}

void fn1_b52ac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038669996));
  /* b52ac: bti c */
  /* bti: no architectural effect here */
  /* b52b0: mov w1, #0x28 */
  ARC_W_W(c, 1, UINT64_C(40));
  /* b52b4: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b80ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038681836));
  /* b80ec: bti c */
  /* bti: no architectural effect here */
  /* b80f0: ldr w8, [x1, #0x1c] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + INT64_C(28))));
  /* b80f4: cmn w8, #1 */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(1), 0);
  /* b80f8: b.eq #0xb8130 */
  if (ARC_COND(c, 0)) goto L_b8130;
  /* b80fc: ldr w8, [x1, #0x18] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + INT64_C(24))));
  /* b8100: ldr x9, [x0, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* b8104: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b8108: b.ls #0xb8144 */
  if (ARC_COND(c, 9)) goto L_b8144;
L_b810c:;
  /* b810c: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* b8110: ldr x0, [x9, x8, lsl #3] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 3))));
  /* b8114: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* b8118: sxtb w9, w8 */
  ARC_W_W(c, 9, ((int32_t)(int8_t)(ARC_W_R(c, 8))));
  /* b811c: cmn w9, #0x40 */
  (void)arc_add32(c, ARC_W_R(c, 9), UINT64_C(64), 0);
  /* b8120: b.ge #0xb814c */
  if (ARC_COND(c, 10)) goto L_b814c;
  /* b8124: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* b8128: ldr x16, [x8] */
  ARC_X_W(c, 16, arc_ld64(ARC_X_R(c, 8)));
  /* b812c: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_b8130:;
  /* b8130: ldr x9, [x0, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* b8134: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b8138: stp wzr, w9, [x1, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(24));
    arc_st32(_pa, ARC_W_R(c, 31));
    arc_st32(_pa + 4, ARC_W_R(c, 9));
  }
  /* b813c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b8140: b.hi #0xb810c */
  if (ARC_COND(c, 8)) goto L_b810c;
L_b8144:;
  /* b8144: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* b8148: ret  */
  return;
L_b814c:;
  /* b814c: tst w8, #0xc0 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(192)));
  /* b8150: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* b8154: ret  */
  return;
}

void fn1_bb380(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038694784));
  /* bb380: bti c */
  /* bti: no architectural effect here */
  /* bb384: ldr x0, [x0, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* bb388: ldrb w8, [x0, #0xa] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(10))));
  /* bb38c: and w8, w8, #3 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(3)));
  /* bb390: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* bb394: b.ne #0xbb3a4 */
  if (ARC_COND(c, 1)) goto L_bb3a4;
  /* bb398: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* bb39c: ldr x16, [x8, #8] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* bb3a0: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_bb3a4:;
  /* bb3a4: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* bb3a8: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* bb3ac: ret  */
  return;
}

void fn1_bdbd0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038705104));
  /* bdbd0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bdbd4: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* bdbd8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bdbdc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* bdbe0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* bdbe4: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* bdbe8: mov w2, #0x80 */
  ARC_W_W(c, 2, UINT64_C(128));
  /* bdbec: str xzr, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 31));
  /* bdbf0: bl #0x142818 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(777204));
  fn1_142818(c);
  /* bdbf4: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* bdbf8: cbnz x0, #0xbdc08 */
  if ((ARC_X_R(c, 0)) != 0) goto L_bdc08;
  /* bdbfc: mov w0, #0x80 */
  ARC_W_W(c, 0, UINT64_C(128));
  /* bdc00: bl #0xa24dc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(777220));
  fn1_a24dc(c);
  /* bdc04: cbz x0, #0xbdc2c */
  if ((ARC_X_R(c, 0)) == 0) goto L_bdc2c;
L_bdc08:;
  /* bdc08: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* bdc0c: stp q0, q0, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* bdc10: stp q0, q0, [x0, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(64));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* bdc14: stp q0, q0, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* bdc18: stp q0, q0, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* bdc1c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bdc20: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* bdc24: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bdc28: ret  */
  return;
L_bdc2c:;
  /* bdc2c: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(777264));
  fn1_142488(c);
}

void fn1_d13cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038784972));
  /* d13cc: bti c */
  /* bti: no architectural effect here */
  /* d13d0: sub x8, x1, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* d13d4: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* d13d8: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* d13dc: b.gt #0xd13ec */
  if (ARC_COND(c, 12)) goto L_d13ec;
  /* d13e0: b.hs #0xd14c0 */
  if (ARC_COND(c, 2)) goto L_d14c0;
L_d13e4:;
  /* d13e4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d13e8: ret  */
  return;
L_d13ec:;
  /* d13ec: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* d13f0: b.eq #0xd14e8 */
  if (ARC_COND(c, 0)) goto L_d14e8;
  /* d13f4: cmp x8, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(4));
  /* d13f8: b.eq #0xd15ec */
  if (ARC_COND(c, 0)) goto L_d15ec;
  /* d13fc: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* d1400: b.ne #0xd1534 */
  if (ARC_COND(c, 1)) goto L_d1534;
  /* d1404: ldp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* d1408: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* d140c: csel x10, x8, x9, gt */
  ARC_X_W(c, 10, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d1410: csel x8, x8, x9, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d1414: stp x8, x10, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* d1418: ldr x8, [x0, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* d141c: ldur x9, [x1, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d1420: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* d1424: csel x10, x8, x9, gt */
  ARC_X_W(c, 10, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d1428: csel x8, x8, x9, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d142c: stur x10, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), ARC_X_R(c, 10));
  /* d1430: str x8, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 8));
  /* d1434: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* d1438: ldur x8, [x1, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d143c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* d1440: csel x10, x8, x9, gt */
  ARC_X_W(c, 10, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d1444: csel x8, x8, x9, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d1448: stur x10, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), ARC_X_R(c, 10));
  /* d144c: ldp x9, x10, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* d1450: ldr x11, [x0, #8] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* d1454: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* d1458: csel x9, x9, x10, lt */
  ARC_X_W(c, 9, (ARC_COND(c, 11) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* d145c: csel x8, x8, x10, gt */
  ARC_X_W(c, 8, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* d1460: stp x9, x8, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* d1464: ldur x8, [x1, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d1468: cmp x11, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 8));
  /* d146c: csel x9, x11, x8, gt */
  ARC_X_W(c, 9, (ARC_COND(c, 12) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 8)));
  /* d1470: csel x8, x11, x8, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 8)));
  /* d1474: stur x9, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), ARC_X_R(c, 9));
  /* d1478: ldp x11, x10, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* d147c: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* d1480: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* d1484: csel x12, x10, x9, lt */
  ARC_X_W(c, 12, (ARC_COND(c, 11) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* d1488: csel x10, x10, x9, gt */
  ARC_X_W(c, 10, (ARC_COND(c, 12) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* d148c: cmp x12, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 11));
  /* d1490: csel x9, x9, x11, lt */
  ARC_X_W(c, 9, (ARC_COND(c, 11) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 11)));
  /* d1494: csel x11, x12, x11, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* d1498: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* d149c: csel x12, x10, x8, lt */
  ARC_X_W(c, 12, (ARC_COND(c, 11) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* d14a0: csel x10, x10, x8, gt */
  ARC_X_W(c, 10, (ARC_COND(c, 12) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* d14a4: cmp x12, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 11));
  /* d14a8: csel x8, x8, x11, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 11)));
  /* d14ac: stp x9, x8, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* d14b0: csel x8, x12, x11, gt */
  ARC_X_W(c, 8, (ARC_COND(c, 12) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* d14b4: stp x8, x10, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* d14b8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d14bc: ret  */
  return;
L_d14c0:;
  /* d14c0: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* d14c4: b.ne #0xd1534 */
  if (ARC_COND(c, 1)) goto L_d1534;
  /* d14c8: ldur x9, [x1, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d14cc: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* d14d0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* d14d4: b.ge #0xd13e4 */
  if (ARC_COND(c, 10)) goto L_d13e4;
  /* d14d8: str x9, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 9));
  /* d14dc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d14e0: stur x8, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), ARC_X_R(c, 8));
  /* d14e4: ret  */
  return;
L_d14e8:;
  /* d14e8: ldr x8, [x0, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* d14ec: ldur x9, [x1, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d14f0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* d14f4: csel x10, x8, x9, gt */
  ARC_X_W(c, 10, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d14f8: csel x8, x8, x9, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d14fc: stur x10, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), ARC_X_R(c, 10));
  /* d1500: str x8, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 8));
  /* d1504: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* d1508: ldur x8, [x1, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d150c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* d1510: csel x10, x8, x9, gt */
  ARC_X_W(c, 10, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d1514: csel x8, x8, x9, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d1518: stur x10, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), ARC_X_R(c, 10));
  /* d151c: ldp x9, x10, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* d1520: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* d1524: csel x9, x9, x10, lt */
  ARC_X_W(c, 9, (ARC_COND(c, 11) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* d1528: csel x8, x8, x10, gt */
  ARC_X_W(c, 8, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* d152c: str x9, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 9));
  /* d1530: b #0xd165c */
  goto L_d165c;
L_d1534:;
  /* d1534: mov x11, x0 */
  ARC_X_W(c, 11, ARC_X_R(c, 0));
  /* d1538: ldp x10, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* d153c: ldr x8, [x11, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 11) + INT64_C(16));
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* d1540: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* d1544: csel x12, x9, x8, gt */
  ARC_X_W(c, 12, (ARC_COND(c, 12) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* d1548: csel x9, x9, x8, lt */
  ARC_X_W(c, 9, (ARC_COND(c, 11) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* d154c: cmp x12, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 10));
  /* d1550: csel x8, x12, x10, gt */
  ARC_X_W(c, 8, (ARC_COND(c, 12) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* d1554: csel x13, x12, x10, lt */
  ARC_X_W(c, 13, (ARC_COND(c, 11) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* d1558: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* d155c: str x8, [x11] */
  arc_st64(ARC_X_R(c, 11), ARC_X_R(c, 8));
  /* d1560: add x8, x0, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* d1564: csel x10, x10, x9, lt */
  ARC_X_W(c, 10, (ARC_COND(c, 11) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* d1568: csel x9, x9, x13, lt */
  ARC_X_W(c, 9, (ARC_COND(c, 11) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 13)));
  /* d156c: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* d1570: stp x10, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* d1574: b.eq #0xd13e4 */
  if (ARC_COND(c, 0)) goto L_d13e4;
  /* d1578: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* d157c: mov w10, #0x18 */
  ARC_W_W(c, 10, UINT64_C(24));
  /* d1580: b #0xd15b0 */
  goto L_d15b0;
L_d1584:;
  /* d1584: mov x11, x0 */
  ARC_X_W(c, 11, ARC_X_R(c, 0));
L_d1588:;
  /* d1588: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* d158c: str x12, [x11] */
  arc_st64(ARC_X_R(c, 11), ARC_X_R(c, 12));
  /* d1590: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* d1594: b.eq #0xd1668 */
  if (ARC_COND(c, 0)) goto L_d1668;
L_d1598:;
  /* d1598: add x12, x8, #8 */
  ARC_X_W(c, 12, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* d159c: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
  /* d15a0: add x10, x10, #8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(8)));
  /* d15a4: cmp x12, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 1));
  /* d15a8: mov x8, x12 */
  ARC_X_W(c, 8, ARC_X_R(c, 12));
  /* d15ac: b.eq #0xd13e4 */
  if (ARC_COND(c, 0)) goto L_d13e4;
L_d15b0:;
  /* d15b0: ldr x12, [x8] */
  ARC_X_W(c, 12, arc_ld64(ARC_X_R(c, 8)));
  /* d15b4: ldr x11, [x11] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 11)));
  /* d15b8: cmp x12, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 11));
  /* d15bc: b.ge #0xd1598 */
  if (ARC_COND(c, 10)) goto L_d1598;
  /* d15c0: mov x14, x10 */
  ARC_X_W(c, 14, ARC_X_R(c, 10));
L_d15c4:;
  /* d15c4: subs x13, x14, #8 */
  ARC_X_W(c, 13, arc_sub64(c, ARC_X_R(c, 14), UINT64_C(8)));
  /* d15c8: str x11, [x0, x14] */
  arc_st64((ARC_X_R(c, 0) + ARC_X_R(c, 14)), ARC_X_R(c, 11));
  /* d15cc: b.eq #0xd1584 */
  if (ARC_COND(c, 0)) goto L_d1584;
  /* d15d0: add x11, x0, x14 */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + ARC_X_R(c, 14)));
  /* d15d4: mov x14, x13 */
  ARC_X_W(c, 14, ARC_X_R(c, 13));
  /* d15d8: ldur x11, [x11, #-0x10] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 11) + INT64_C(-16))));
  /* d15dc: cmp x12, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 11));
  /* d15e0: b.lt #0xd15c4 */
  if (ARC_COND(c, 11)) goto L_d15c4;
  /* d15e4: add x11, x0, x13 */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + ARC_X_R(c, 13)));
  /* d15e8: b #0xd1588 */
  goto L_d1588;
L_d15ec:;
  /* d15ec: ldp x10, x8, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* d15f0: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* d15f4: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* d15f8: csel x11, x9, x8, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* d15fc: csel x8, x9, x8, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* d1600: str x11, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 11));
  /* d1604: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* d1608: ldur x8, [x1, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d160c: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* d1610: csel x9, x10, x8, gt */
  ARC_X_W(c, 9, (ARC_COND(c, 12) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* d1614: csel x8, x10, x8, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* d1618: stur x9, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), ARC_X_R(c, 9));
  /* d161c: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* d1620: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* d1624: csel x10, x9, x8, gt */
  ARC_X_W(c, 10, (ARC_COND(c, 12) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* d1628: csel x8, x9, x8, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* d162c: stp x8, x10, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* d1630: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* d1634: ldur x9, [x1, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d1638: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* d163c: csel x10, x8, x9, gt */
  ARC_X_W(c, 10, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d1640: csel x8, x8, x9, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d1644: stur x10, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), ARC_X_R(c, 10));
  /* d1648: ldr x10, [x0, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* d164c: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* d1650: csel x9, x10, x8, gt */
  ARC_X_W(c, 9, (ARC_COND(c, 12) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* d1654: csel x8, x10, x8, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* d1658: str x9, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 9));
L_d165c:;
  /* d165c: str x8, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 8));
  /* d1660: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d1664: ret  */
  return;
L_d1668:;
  /* d1668: add x8, x8, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* d166c: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* d1670: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* d1674: ret  */
  return;
}

void fn1_d7a34(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038811188));
  /* d7a34: bti c */
  /* bti: no architectural effect here */
  /* d7a38: ldr x8, [x0, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(32))));
  /* d7a3c: ldrb w9, [x8, #0x30] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(48))));
  /* d7a40: ldr x10, [x8, #0x40] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* d7a44: add x8, x8, #0x31 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(49)));
  /* d7a48: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* d7a4c: csel x0, x8, x10, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* d7a50: ret  */
  return;
}

void fn1_db6fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038826748));
  /* db6fc: bti c */
  /* bti: no architectural effect here */
  /* db700: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* db704: cbz x8, #0xdb760 */
  if ((ARC_X_R(c, 8)) == 0) goto L_db760;
  /* db708: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* db70c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* db710: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* db714: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* db718: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* db71c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* db720: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
L_db724:;
  /* db724: ldp x21, x1, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    ARC_X_W(c, 21, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* db728: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* db72c: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* db730: ldr x3, [x8, #0x10] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* db734: ldr x9, [x9, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(24))));
  /* db738: sub x8, x8, x1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 1)));
  /* db73c: add x2, x8, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* db740: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(898884));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* db744: mov x8, x21 */
  ARC_X_W(c, 8, ARC_X_R(c, 21));
  /* db748: str x21, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 21));
  /* db74c: cbnz x21, #0xdb724 */
  if ((ARC_X_R(c, 21)) != 0) goto L_db724;
  /* db750: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* db754: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* db758: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* db75c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
L_db760:;
  /* db760: ret  */
  return;
}

void fn1_dfed4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038845140));
  /* dfed4: bti c */
  /* bti: no architectural effect here */
  /* dfed8: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* dfedc: ldp x9, x11, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* dfee0: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* dfee4: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* dfee8: csinc x8, x11, x0, ne */
  ARC_X_W(c, 8, (ARC_COND(c, 1) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 0)) + 1)));
  /* dfeec: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* dfef0: cmp x9, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 2));
  /* dfef4: csel x10, x9, x2, lo */
  ARC_X_W(c, 10, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 2)));
  /* dfef8: sub x11, x9, x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) - ARC_X_R(c, 10)));
  /* dfefc: add x10, x10, x3 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + ARC_X_R(c, 3)));
  /* dff00: cmp x3, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 3), ARC_X_R(c, 11));
  /* dff04: csel x10, x10, x9, lo */
  ARC_X_W(c, 10, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* dff08: add x9, x8, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ARC_X_R(c, 10)));
  /* dff0c: cbz x3, #0xdff88 */
  if ((ARC_X_R(c, 3)) == 0) goto L_dff88;
  /* dff10: cbz x10, #0xdff88 */
  if ((ARC_X_R(c, 10)) == 0) goto L_dff88;
  /* dff14: ldrb w11, [x1], #1 */
  { const uint64_t _a = ARC_X_R(c, 1);
    ARC_X_W(c, 1, ARC_X_R(c, 1) + INT64_C(1));
    ARC_W_W(c, 11, arc_ld8(_a));
  }
  /* dff18: sub x12, x3, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 3) - UINT64_C(1)));
  /* dff1c: mov x13, x8 */
  ARC_X_W(c, 13, ARC_X_R(c, 8));
  /* dff20: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
L_dff24:;
  /* dff24: add x14, x13, #1 */
  ARC_X_W(c, 14, (ARC_X_R(c, 13) + UINT64_C(1)));
L_dff28:;
  /* dff28: ldrb w15, [x13] */
  ARC_W_W(c, 15, arc_ld8(ARC_X_R(c, 13)));
  /* dff2c: cmp w15, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 11));
  /* dff30: b.eq #0xdff48 */
  if (ARC_COND(c, 0)) goto L_dff48;
  /* dff34: add x13, x13, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(1)));
  /* dff38: add x14, x14, #1 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(1)));
  /* dff3c: cmp x13, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 9));
  /* dff40: b.ne #0xdff28 */
  if (ARC_COND(c, 1)) goto L_dff28;
  /* dff44: b #0xdff8c */
  goto L_dff8c;
L_dff48:;
  /* dff48: mov x15, x12 */
  ARC_X_W(c, 15, ARC_X_R(c, 12));
  /* dff4c: mov x16, x1 */
  ARC_X_W(c, 16, ARC_X_R(c, 1));
L_dff50:;
  /* dff50: cbz x15, #0xdff74 */
  if ((ARC_X_R(c, 15)) == 0) goto L_dff74;
  /* dff54: cmp x14, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 9));
  /* dff58: b.eq #0xdff8c */
  if (ARC_COND(c, 0)) goto L_dff8c;
  /* dff5c: ldrb w17, [x14], #1 */
  { const uint64_t _a = ARC_X_R(c, 14);
    ARC_X_W(c, 14, ARC_X_R(c, 14) + INT64_C(1));
    ARC_W_W(c, 17, arc_ld8(_a));
  }
  /* dff60: sub x15, x15, #1 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) - UINT64_C(1)));
  /* dff64: ldrb w0, [x16], #1 */
  { const uint64_t _a = ARC_X_R(c, 16);
    ARC_X_W(c, 16, ARC_X_R(c, 16) + INT64_C(1));
    ARC_W_W(c, 0, arc_ld8(_a));
  }
  /* dff68: cmp w17, w0 */
  (void)arc_sub32(c, ARC_W_R(c, 17), ARC_W_R(c, 0));
  /* dff6c: b.eq #0xdff50 */
  if (ARC_COND(c, 0)) goto L_dff50;
  /* dff70: b #0xdff78 */
  goto L_dff78;
L_dff74:;
  /* dff74: mov x10, x13 */
  ARC_X_W(c, 10, ARC_X_R(c, 13));
L_dff78:;
  /* dff78: add x13, x13, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(1)));
  /* dff7c: cmp x13, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 9));
  /* dff80: b.ne #0xdff24 */
  if (ARC_COND(c, 1)) goto L_dff24;
  /* dff84: b #0xdff8c */
  goto L_dff8c;
L_dff88:;
  /* dff88: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
L_dff8c:;
  /* dff8c: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* dff90: sub x8, x10, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* dff94: ccmp x3, #0, #4, eq */
  if (ARC_COND(c, 0)) { (void)arc_sub64(c, ARC_X_R(c, 3), UINT64_C(0)); }
  else { (c)->nf = 0; (c)->zf = 1;
          (c)->cf = 0; (c)->vf = 0; }
  /* dff98: csinv x0, x8, xzr, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : (~(uint64_t)(ARC_X_R(c, 31)))));
  /* dff9c: ret  */
  return;
}

void fn1_e269c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038855324));
  /* e269c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e26a0: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e26a4: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e26a8: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e26ac: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e26b0: mov x8, #0x3ffffffffffffff8 */
  ARC_X_W(c, 8, UINT64_C(4611686018427387896));
  /* e26b4: cmp x2, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 8));
  /* e26b8: b.hs #0xe2730 */
  if (ARC_COND(c, 2)) goto L_e2730;
  /* e26bc: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* e26c0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e26c4: cmp x2, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 2), UINT64_C(5));
  /* e26c8: b.hs #0xe26dc */
  if (ARC_COND(c, 2)) goto L_e26dc;
  /* e26cc: lsl w8, w19, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 19)) << ((UINT64_C(1)) & 31)));
  /* e26d0: strb w8, [x20], #4 */
  { const uint64_t _a = ARC_X_R(c, 20);
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* e26d4: cbnz x19, #0xe270c */
  if ((ARC_X_R(c, 19)) != 0) goto L_e270c;
  /* e26d8: b #0xe2718 */
  goto L_e2718;
L_e26dc:;
  /* e26dc: orr x8, x19, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) | UINT64_C(1)));
  /* e26e0: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* e26e4: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* e26e8: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* e26ec: csinc x22, x9, x8, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* e26f0: lsl x0, x22, #2 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 22)) << ((UINT64_C(2)) & 63)));
  /* e26f4: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(927480));
  fn1_1428f0(c);
  /* e26f8: orr x8, x22, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) | UINT64_C(1)));
  /* e26fc: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* e2700: stp x19, x0, [x20, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* e2704: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* e2708: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_e270c:;
  /* e270c: lsl x2, x19, #2 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 19)) << ((UINT64_C(2)) & 63)));
  /* e2710: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e2714: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(927512));
  fn1_1449f0(c);
L_e2718:;
  /* e2718: str wzr, [x20, x19, lsl #2] */
  arc_st32((ARC_X_R(c, 20) + ((uint64_t)(ARC_X_R(c, 19)) << 2)), ARC_W_R(c, 31));
  /* e271c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e2720: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e2724: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e2728: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e272c: ret  */
  return;
L_e2730:;
  /* e2730: bl #0xe2274 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(927540));
  fn1_e2274(c);
}

void fn1_e602c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038870060));
  /* e602c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e6030: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* e6034: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e6038: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e603c: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e6040: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* e6044: lsr x9, x0, #0x20 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(32)) & 63)));
  /* e6048: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e604c: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* e6050: cbnz x9, #0xe6068 */
  if ((ARC_X_R(c, 9)) != 0) goto L_e6068;
  /* e6054: add x0, sp, #0xb */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(11)));
  /* e6058: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* e605c: bl #0xd4eb8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(942176));
  fn1_d4eb8(c);
  /* e6060: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e6064: b #0xe615c */
  goto L_e615c;
L_e6068:;
  /* e6068: mov x22, #0xe3ff */
  ARC_X_W(c, 22, UINT64_C(58367));
  /* e606c: movk x22, #0x540b, lsl #16 */
  ARC_X_W(c, 22, ((ARC_X_R(c, 22) & UINT64_C(18446744069414649855)) | UINT64_C(1410007040)));
  /* e6070: movk x22, #2, lsl #32 */
  ARC_X_W(c, 22, ((ARC_X_R(c, 22) & UINT64_C(18446462603027808255)) | UINT64_C(8589934592)));
  /* e6074: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* e6078: b.ls #0xe60ac */
  if (ARC_COND(c, 9)) goto L_e60ac;
  /* e607c: mov x8, #0xd5bf */
  ARC_X_W(c, 8, UINT64_C(54719));
  /* e6080: add x0, sp, #0xb */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(11)));
  /* e6084: movk x8, #0xbded, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(3186425856)));
  /* e6088: movk x8, #0xfece, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(280160716718080)));
  /* e608c: movk x8, #0xdbe6, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(15845352338949668864)));
  /* e6090: umulh x8, x20, x8 */
  ARC_X_W(c, 8, arc_umulh(ARC_X_R(c, 20), ARC_X_R(c, 8)));
  /* e6094: lsr x21, x8, #0x21 */
  ARC_X_W(c, 21, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(33)) & 63)));
  /* e6098: mov w1, w21 */
  ARC_W_W(c, 1, ARC_W_R(c, 21));
  /* e609c: bl #0xd4eb8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(942240));
  fn1_d4eb8(c);
  /* e60a0: madd x8, x21, x22, x21 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 21)) + ((uint64_t)(ARC_X_R(c, 21)) * (uint64_t)(ARC_X_R(c, 22)))));
  /* e60a4: sub x20, x20, x8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) - ARC_X_R(c, 8)));
  /* e60a8: b #0xe60b0 */
  goto L_e60b0;
L_e60ac:;
  /* e60ac: add x0, sp, #0xb */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(11)));
L_e60b0:;
  /* e60b0: mov x8, #0xcefd */
  ARC_X_W(c, 8, UINT64_C(52989));
  /* e60b4: mov w9, #0xe100 */
  ARC_W_W(c, 9, UINT64_C(57600));
  /* e60b8: mov w11, #0xde83 */
  ARC_W_W(c, 11, UINT64_C(56963));
  /* e60bc: movk x8, #0x8461, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(2220949504)));
  /* e60c0: movk w9, #0x5f5, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(99942400)));
  /* e60c4: movk w11, #0x431b, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(1125842944)));
  /* e60c8: movk x8, #0x7711, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(130914898149376)));
  /* e60cc: mov w12, #0x2710 */
  ARC_W_W(c, 12, UINT64_C(10000));
  /* e60d0: add x21, x0, #0xa */
  ARC_X_W(c, 21, (ARC_X_R(c, 0) + UINT64_C(10)));
  /* e60d4: movk x8, #0xabcc, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(12379269475734650880)));
  /* e60d8: umulh x8, x20, x8 */
  ARC_X_W(c, 8, arc_umulh(ARC_X_R(c, 20), ARC_X_R(c, 8)));
  /* e60dc: lsr x8, x8, #0x1a */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(26)) & 63)));
  /* e60e0: msub x9, x8, x9, x20 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 20)) - ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9)))));
  /* e60e4: mov w10, w9 */
  ARC_W_W(c, 10, ARC_W_R(c, 9));
  /* e60e8: umull x10, w10, w11 */
  ARC_X_W(c, 10, (((uint64_t)(uint32_t)(ARC_W_R(c, 10))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 11)))));
  /* e60ec: mov w11, #0x4240 */
  ARC_W_W(c, 11, UINT64_C(16960));
  /* e60f0: movk w11, #0xf, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(983040)));
  /* e60f4: lsr x10, x10, #0x32 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(50)) & 63)));
  /* e60f8: msub w9, w10, w11, w9 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) - ((uint32_t)(ARC_W_R(c, 10)) * (uint32_t)(ARC_W_R(c, 11)))));
  /* e60fc: mov w11, #0x1759 */
  ARC_W_W(c, 11, UINT64_C(5977));
  /* e6100: movk w11, #0xd1b7, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(3518431232)));
  /* e6104: umull x11, w9, w11 */
  ARC_X_W(c, 11, (((uint64_t)(uint32_t)(ARC_W_R(c, 9))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 11)))));
  /* e6108: lsr x11, x11, #0x2d */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(45)) & 63)));
  /* e610c: msub w9, w11, w12, w9 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) - ((uint32_t)(ARC_W_R(c, 11)) * (uint32_t)(ARC_W_R(c, 12)))));
  /* e6110: nop  */
  /* nop: no architectural effect here */
  /* e6114: adr x12, #0x58470 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(361584)));
  /* e6118: ldrh w8, [x12, x8, lsl #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 8)) << 1))));
  /* e611c: ubfx w13, w9, #2, #0xe */
  ARC_W_W(c, 13, (((uint32_t)(ARC_W_R(c, 9)) >> 2) & UINT64_C(16383)));
  /* e6120: strh w8, [x0] */
  arc_st16(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* e6124: mov w8, #0x147b */
  ARC_W_W(c, 8, UINT64_C(5243));
  /* e6128: ldrh w10, [x12, x10, lsl #1] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 10)) << 1))));
  /* e612c: mul w8, w13, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 13)) * (uint32_t)(ARC_W_R(c, 8))));
  /* e6130: strh w10, [x0, #2] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 10));
  /* e6134: ldrh w10, [x12, x11, lsl #1] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 11)) << 1))));
  /* e6138: mov w11, #0x64 */
  ARC_W_W(c, 11, UINT64_C(100));
  /* e613c: lsr w8, w8, #0x11 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(17)) & 31)));
  /* e6140: strh w10, [x0, #4] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(4)), ARC_W_R(c, 10));
  /* e6144: msub w9, w8, w11, w9 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) - ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 11)))));
  /* e6148: ldrh w8, [x12, w8, uxtw #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 1))));
  /* e614c: strh w8, [x0, #6] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(6)), ARC_W_R(c, 8));
  /* e6150: and x8, x9, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) & UINT64_C(65535)));
  /* e6154: ldrh w8, [x12, x8, lsl #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 8)) << 1))));
  /* e6158: strh w8, [x0, #8] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 8));
L_e615c:;
  /* e615c: add x8, sp, #0xb */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(11)));
  /* e6160: sub x20, x21, x8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 21) - ARC_X_R(c, 8)));
  /* e6164: cmn x20, #8 */
  (void)arc_add64(c, ARC_X_R(c, 20), UINT64_C(8), 0);
  /* e6168: b.hs #0xe61e0 */
  if (ARC_COND(c, 2)) goto L_e61e0;
  /* e616c: cmp x20, #0x16 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(22));
  /* e6170: b.hi #0xe6180 */
  if (ARC_COND(c, 8)) goto L_e6180;
  /* e6174: lsl w8, w20, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 20)) << ((UINT64_C(1)) & 31)));
  /* e6178: strb w8, [x19], #1 */
  { const uint64_t _a = ARC_X_R(c, 19);
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* e617c: b #0xe61a8 */
  goto L_e61a8;
L_e6180:;
  /* e6180: orr x8, x20, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) | UINT64_C(7)));
  /* e6184: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* e6188: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* e618c: csinc x22, x9, x8, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* e6190: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* e6194: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(942488));
  fn1_1428f0(c);
  /* e6198: orr x8, x22, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) | UINT64_C(1)));
  /* e619c: stp x20, x0, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* e61a0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* e61a4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_e61a8:;
  /* e61a8: add x8, sp, #0xb */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(11)));
  /* e61ac: cmp x21, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* e61b0: b.eq #0xe61c4 */
  if (ARC_COND(c, 0)) goto L_e61c4;
  /* e61b4: add x1, sp, #0xb */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(11)));
  /* e61b8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e61bc: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* e61c0: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(942532));
  fn1_1449d8(c);
L_e61c4:;
  /* e61c4: strb wzr, [x19, x20] */
  arc_st8((ARC_X_R(c, 19) + ARC_X_R(c, 20)), ARC_W_R(c, 31));
  /* e61c8: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e61cc: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e61d0: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e61d4: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* e61d8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e61dc: ret  */
  return;
L_e61e0:;
  /* e61e0: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(942564));
  fn1_d7d54(c);
}

void fn1_e95dc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038883804));
  /* e95dc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e95e0: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* e95e4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e95e8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* e95ec: ldrb w8, [x1, #8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(8))));
  /* e95f0: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* e95f4: b.ne #0xe9660 */
  if (ARC_COND(c, 1)) goto L_e9660;
  /* e95f8: mov x8, #0xe941 */
  ARC_X_W(c, 8, UINT64_C(59713));
  /* e95fc: mov x9, #0x94b3 */
  ARC_X_W(c, 9, UINT64_C(38067));
  /* e9600: ldr x1, [x1] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 1)));
  /* e9604: movk x8, #0x2f00, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(51677046505472)));
  /* e9608: movk x9, #0x26d6, lsl #16 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(651558912)));
  /* e960c: movk x8, #0x5968, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(6442399266953494528)));
  /* e9610: movk x9, #0xbe8, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(13091060318208)));
  /* e9614: cmp x2, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 8));
  /* e9618: movk x9, #0x112e, lsl #48 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(281474976710655)) | UINT64_C(1237926947573465088)));
  /* e961c: csel x8, x2, x8, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 2)) : ARC_X_R(c, 8)));
  /* e9620: smulh x9, x8, x9 */
  ARC_X_W(c, 9, arc_smulh(ARC_X_R(c, 8), ARC_X_R(c, 9)));
  /* e9624: asr x10, x9, #0x1a */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(26)) & 63))));
  /* e9628: add x9, x10, x9, lsr #63 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 9)) >> 63)));
  /* e962c: mov x10, #-0xca00 */
  ARC_X_W(c, 10, UINT64_C(18446744073709499904));
  /* e9630: movk x10, #0xc465, lsl #16 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(3294953472)));
  /* e9634: madd x8, x9, x10, x8 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) + ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 10)))));
  /* e9638: stp x9, x8, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* e963c: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* e9640: bl #0x143118 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(955972));
  fn1_143118(c);
  /* e9644: cbz w0, #0xe9650 */
  if ((ARC_W_R(c, 0)) == 0) goto L_e9650;
  /* e9648: cmp w0, #0x6e */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(110));
  /* e964c: b.ne #0xe9670 */
  if (ARC_COND(c, 1)) goto L_e9670;
L_e9650:;
  /* e9650: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e9654: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* e9658: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e965c: ret  */
  return;
L_e9660:;
  /* e9660: adrp x1, #0x4f000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(323584)));
  /* e9664: add x1, x1, #0xb09 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2825)));
  /* e9668: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* e966c: b #0xe9678 */
  goto L_e9678;
L_e9670:;
  /* e9670: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* e9674: add x1, x1, #0x690 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1680)));
L_e9678:;
  /* e9678: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(956028));
  fn1_142a40(c);
  /* e967c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(956032));
  fn1_a1454(c);
}

void fn1_eb614(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038892052));
  /* eb614: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eb618: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eb61c: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* eb620: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eb624: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* eb628: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964140));
  fn1_142518(c);
  /* eb62c: cbnz w0, #0xeb660 */
  if ((ARC_W_R(c, 0)) != 0) goto L_eb660;
  /* eb630: ldr w20, [x19, #0x88] */
  ARC_W_W(c, 20, arc_ld32((ARC_X_R(c, 19) + INT64_C(136))));
  /* eb634: cbnz w20, #0xeb640 */
  if ((ARC_W_R(c, 20)) != 0) goto L_eb640;
  /* eb638: mov w8, #-0xffffffff80000000 */
  ARC_W_W(c, 8, UINT64_C(18446744071562067968));
  /* eb63c: str w8, [x19, #0x88] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(136)), ARC_W_R(c, 8));
L_eb640:;
  /* eb640: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eb644: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964168));
  fn1_142560(c);
  /* eb648: cmp w20, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 20), UINT64_C(0));
  /* eb64c: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* eb650: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* eb654: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eb658: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eb65c: ret  */
  return;
L_eb660:;
  /* eb660: nop  */
  /* nop: no architectural effect here */
  /* eb664: adr x1, #0x50f67 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331623)));
  /* eb668: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964204));
  fn1_142a40(c);
  /* eb66c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964208));
  fn1_a1454(c);
}

void fn1_ed32c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038899500));
  /* ed32c: bti c */
  /* bti: no architectural effect here */
  /* ed330: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* ed334: ldr x16, [x8, #0x40] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* ed338: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_f081c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038913052));
  /* f081c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f0820: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f0824: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* f0828: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f082c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f0830: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f0834: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f0838: str xzr, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 31));
  /* f083c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f0840: add x9, x0, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + ARC_X_R(c, 9)));
  /* f0844: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* f0848: ldr w9, [x9, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f084c: ldr x10, [x8, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f0850: and w21, w9, #0xfffffffd */
  ARC_W_W(c, 21, (ARC_W_R(c, 9) & UINT64_C(4294967293)));
  /* f0854: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* f0858: ldr w10, [x8, #0x24] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 8) + INT64_C(36))));
  /* f085c: cset w9, eq */
  ARC_W_W(c, 9, (ARC_COND(c, 0) ? 1 : 0));
  /* f0860: orr w9, w21, w9 */
  ARC_W_W(c, 9, (ARC_W_R(c, 21) | ARC_W_R(c, 9)));
  /* f0864: tst w9, w10 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & ARC_W_R(c, 10)));
  /* f0868: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f086c: b.ne #0xf0934 */
  if (ARC_COND(c, 1)) goto L_f0934;
  /* f0870: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f0874: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* f0878: add x0, x29, #0x1c */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(28)));
  /* f087c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f0880: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* f0884: bl #0x1435f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(985224));
  fn1_1435f8(c);
  /* f0888: ldrb w8, [x29, #0x1c] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(28))));
  /* f088c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f0890: b.ne #0xf08c8 */
  if (ARC_COND(c, 1)) goto L_f08c8;
  /* f0894: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f0898: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f089c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f08a0: ldr x0, [x8, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f08a4: cbz x0, #0xf08e8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_f08e8;
  /* f08a8: ldp x9, x8, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* f08ac: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* f08b0: b.eq #0xf08d0 */
  if (ARC_COND(c, 0)) goto L_f08d0;
  /* f08b4: ldrb w9, [x8, #-1]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(-1));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-1));
    ARC_W_W(c, 9, arc_ld8(_a));
  }
  /* f08b8: cmp w9, w20, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 9), ((uint64_t)(uint8_t)(ARC_W_R(c, 20))));
  /* f08bc: b.ne #0xf08d0 */
  if (ARC_COND(c, 1)) goto L_f08d0;
  /* f08c0: str x8, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 8));
  /* f08c4: b #0xf08ec */
  goto L_f08ec;
L_f08c8:;
  /* f08c8: orr w21, w21, #4 */
  ARC_W_W(c, 21, (ARC_W_R(c, 21) | UINT64_C(4)));
  /* f08cc: b #0xf08ec */
  goto L_f08ec;
L_f08d0:;
  /* f08d0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f08d4: ldr x8, [x8, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* f08d8: and w1, w20, #0xff */
  ARC_W_W(c, 1, (ARC_W_R(c, 20) & UINT64_C(255)));
  /* f08dc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(985312));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f08e0: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* f08e4: b.ne #0xf08ec */
  if (ARC_COND(c, 1)) goto L_f08ec;
L_f08e8:;
  /* f08e8: orr w21, w21, #1 */
  ARC_W_W(c, 21, (ARC_W_R(c, 21) | UINT64_C(1)));
L_f08ec:;
  /* f08ec: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f08f0: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f08f4: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f08f8: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f08fc: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* f0900: ldp w10, w9, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 10, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* f0904: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* f0908: orr w10, w10, w21 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 21)));
  /* f090c: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* f0910: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* f0914: str w10, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 10));
  /* f0918: b.ne #0xf0934 */
  if (ARC_COND(c, 1)) goto L_f0934;
  /* f091c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f0920: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f0924: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* f0928: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f092c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f0930: ret  */
  return;
L_f0934:;
  /* f0934: nop  */
  /* nop: no architectural effect here */
  /* f0938: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f093c: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(985408));
  fn1_ec720(c);
  /* f0940: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(985412));
  fn1_142548(c);
  /* f0944: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f0948: orr w21, w21, #1 */
  ARC_W_W(c, 21, (ARC_W_R(c, 21) | UINT64_C(1)));
  /* f094c: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f0950: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f0954: ldr w10, [x9, #0x20] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f0958: orr w10, w10, w21 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 21)));
  /* f095c: str w10, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 10));
  /* f0960: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f0964: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f0968: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f096c: tbnz w8, #0, #0xf0978 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_f0978;
  /* f0970: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(985460));
  fn1_142980(c);
  /* f0974: b #0xf08ec */
  goto L_f08ec;
L_f0978:;
  /* f0978: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(985468));
  fn1_1429b0(c);
  /* f097c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f0980: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(985476));
  fn1_142980(c);
  /* f0984: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f0988: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(985484));
  fn1_9cc20(c);
  /* f098c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(985488));
  fn1_a1454(c);
}

void fn1_f3d60(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038926688));
  /* f3d60: bti c */
  /* bti: no architectural effect here */
  /* f3d64: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f3d68: ldr x16, [x8, #0x40] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* f3d6c: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_f723c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038940220));
  /* f723c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f7240: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f7244: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* f7248: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f724c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f7250: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f7254: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f7258: str xzr, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 31));
  /* f725c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f7260: add x9, x0, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + ARC_X_R(c, 9)));
  /* f7264: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* f7268: ldr w9, [x9, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f726c: ldr x10, [x8, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f7270: and w21, w9, #0xfffffffd */
  ARC_W_W(c, 21, (ARC_W_R(c, 9) & UINT64_C(4294967293)));
  /* f7274: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* f7278: ldr w10, [x8, #0x24] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 8) + INT64_C(36))));
  /* f727c: cset w9, eq */
  ARC_W_W(c, 9, (ARC_COND(c, 0) ? 1 : 0));
  /* f7280: orr w9, w21, w9 */
  ARC_W_W(c, 9, (ARC_W_R(c, 21) | ARC_W_R(c, 9)));
  /* f7284: tst w9, w10 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & ARC_W_R(c, 10)));
  /* f7288: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f728c: b.ne #0xf7360 */
  if (ARC_COND(c, 1)) goto L_f7360;
  /* f7290: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f7294: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* f7298: add x0, x29, #0x1c */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(28)));
  /* f729c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f72a0: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* f72a4: bl #0x143670 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1012392));
  fn1_143670(c);
  /* f72a8: ldrb w8, [x29, #0x1c] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(28))));
  /* f72ac: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f72b0: b.ne #0xf72f0 */
  if (ARC_COND(c, 1)) goto L_f72f0;
  /* f72b4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f72b8: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f72bc: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f72c0: ldr x0, [x8, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f72c4: cbz x0, #0xf7314 */
  if ((ARC_X_R(c, 0)) == 0) goto L_f7314;
  /* f72c8: ldp x9, x8, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* f72cc: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* f72d0: b.eq #0xf72f8 */
  if (ARC_COND(c, 0)) goto L_f72f8;
  /* f72d4: ldr w9, [x8, #-4]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(-4));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-4));
    ARC_W_W(c, 9, arc_ld32(_a));
  }
  /* f72d8: cmp w20, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 20), ARC_W_R(c, 9));
  /* f72dc: b.ne #0xf72f8 */
  if (ARC_COND(c, 1)) goto L_f72f8;
  /* f72e0: str x8, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 8));
  /* f72e4: cmn w20, #1 */
  (void)arc_add32(c, ARC_W_R(c, 20), UINT64_C(1), 0);
  /* f72e8: b.ne #0xf7318 */
  if (ARC_COND(c, 1)) goto L_f7318;
  /* f72ec: b #0xf7314 */
  goto L_f7314;
L_f72f0:;
  /* f72f0: orr w21, w21, #4 */
  ARC_W_W(c, 21, (ARC_W_R(c, 21) | UINT64_C(4)));
  /* f72f4: b #0xf7318 */
  goto L_f7318;
L_f72f8:;
  /* f72f8: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f72fc: ldr x8, [x8, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* f7300: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* f7304: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1012488));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f7308: mov w20, w0 */
  ARC_W_W(c, 20, ARC_W_R(c, 0));
  /* f730c: cmn w20, #1 */
  (void)arc_add32(c, ARC_W_R(c, 20), UINT64_C(1), 0);
  /* f7310: b.ne #0xf7318 */
  if (ARC_COND(c, 1)) goto L_f7318;
L_f7314:;
  /* f7314: orr w21, w21, #1 */
  ARC_W_W(c, 21, (ARC_W_R(c, 21) | UINT64_C(1)));
L_f7318:;
  /* f7318: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f731c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f7320: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f7324: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f7328: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* f732c: ldp w10, w9, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 10, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* f7330: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* f7334: orr w10, w10, w21 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 21)));
  /* f7338: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* f733c: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* f7340: str w10, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 10));
  /* f7344: b.ne #0xf7360 */
  if (ARC_COND(c, 1)) goto L_f7360;
  /* f7348: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f734c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f7350: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* f7354: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f7358: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f735c: ret  */
  return;
L_f7360:;
  /* f7360: nop  */
  /* nop: no architectural effect here */
  /* f7364: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f7368: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1012588));
  fn1_ec720(c);
  /* f736c: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1012592));
  fn1_142548(c);
  /* f7370: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f7374: orr w21, w21, #1 */
  ARC_W_W(c, 21, (ARC_W_R(c, 21) | UINT64_C(1)));
  /* f7378: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f737c: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f7380: ldr w10, [x9, #0x20] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f7384: orr w10, w10, w21 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 21)));
  /* f7388: str w10, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 10));
  /* f738c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f7390: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f7394: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f7398: tbnz w8, #0, #0xf73a4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_f73a4;
  /* f739c: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1012640));
  fn1_142980(c);
  /* f73a0: b #0xf7318 */
  goto L_f7318;
L_f73a4:;
  /* f73a4: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1012648));
  fn1_1429b0(c);
  /* f73a8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f73ac: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1012656));
  fn1_142980(c);
  /* f73b0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f73b4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1012664));
  fn1_9cc20(c);
  /* f73b8: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1012668));
  fn1_a1454(c);
}

void fn1_fc3b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038961080));
  /* fc3b8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fc3bc: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fc3c0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fc3c4: mov w0, #8 */
  ARC_W_W(c, 0, UINT64_C(8));
  /* fc3c8: bl #0x142410 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1033164));
  fn1_142410(c);
  /* fc3cc: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fc3d0: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fc3d4: adrp x2, #0x151000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fc3d8: ldr x8, [x8, #0x988] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2440))));
  /* fc3dc: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* fc3e0: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* fc3e4: ldr x1, [x1, #0x898] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2200))));
  /* fc3e8: ldr x2, [x2, #0x880] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 2) + INT64_C(2176))));
  /* fc3ec: bl #0x142440 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1033200));
  fn1_142440(c);
}

void fn1_ff3b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038973368));
  /* ff3b8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ff3bc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ff3c0: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* ff3c4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ff3c8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ff3cc: bl #0x143d90 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1045456));
  fn1_143d90(c);
  /* ff3d0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ff3d4: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* ff3d8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* ff3dc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ff3e0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ff3e4: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_10e790(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039035792));
  /* 10e790: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 10e794: sub sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(160)));
  /* 10e798: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 10e79c: stp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 10e7a0: stp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 10e7a4: stp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 10e7a8: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 10e7ac: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 10e7b0: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* 10e7b4: adrp x27, #0x151000 */
  ARC_X_W(c, 27, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 10e7b8: mov x26, x6 */
  ARC_X_W(c, 26, ARC_X_R(c, 6));
  /* 10e7bc: mov x20, x5 */
  ARC_X_W(c, 20, ARC_X_R(c, 5));
  /* 10e7c0: ldr x27, [x27, #0xb58] */
  ARC_X_W(c, 27, arc_ld64((ARC_X_R(c, 27) + INT64_C(2904))));
  /* 10e7c4: ldr x23, [x6] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 6)));
  /* 10e7c8: mov x24, x4 */
  ARC_X_W(c, 24, ARC_X_R(c, 4));
  /* 10e7cc: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* 10e7d0: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 10e7d4: mov x28, x1 */
  ARC_X_W(c, 28, ARC_X_R(c, 1));
  /* 10e7d8: ldar x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 10e7dc: str x0, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 0));
  /* 10e7e0: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 10e7e4: b.eq #0x10e8a0 */
  if (ARC_COND(c, 0)) goto L_10e8a0;
  /* 10e7e8: nop  */
  /* nop: no architectural effect here */
  /* 10e7ec: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10e7f0: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1107956));
  fn1_142518(c);
  /* 10e7f4: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 10e7f8: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 10e7fc: b.ne #0x10e828 */
  if (ARC_COND(c, 1)) goto L_10e828;
  /* 10e800: nop  */
  /* nop: no architectural effect here */
  /* 10e804: adr x19, #0x15791c */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 10e808: nop  */
  /* nop: no architectural effect here */
  /* 10e80c: adr x25, #0x1578f4 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1407220)));
L_10e810:;
  /* 10e810: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10e814: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 10e818: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1107996));
  fn1_142530(c);
  /* 10e81c: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 10e820: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 10e824: b.eq #0x10e810 */
  if (ARC_COND(c, 0)) goto L_10e810;
L_10e828:;
  /* 10e828: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 10e82c: cbz x8, #0x10e840 */
  if ((ARC_X_R(c, 8)) == 0) goto L_10e840;
  /* 10e830: nop  */
  /* nop: no architectural effect here */
  /* 10e834: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10e838: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1108028));
  fn1_142560(c);
  /* 10e83c: b #0x10e8a0 */
  goto L_10e8a0;
L_10e840:;
  /* 10e840: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 10e844: stur x27, [x29, #-0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-24)), ARC_X_R(c, 27));
  /* 10e848: sturb wzr, [x29, #-0x10] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-16)), ARC_W_R(c, 31));
  /* 10e84c: str x8, [x27] */
  arc_st64(ARC_X_R(c, 27), ARC_X_R(c, 8));
  /* 10e850: nop  */
  /* nop: no architectural effect here */
  /* 10e854: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10e858: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1108060));
  fn1_142560(c);
  /* 10e85c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 10e860: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 10e864: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 10e868: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1108076));
  fn1_a2030(c);
  /* 10e86c: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 10e870: str w8, [x27, #8] */
  arc_st32((ARC_X_R(c, 27) + INT64_C(8)), ARC_W_R(c, 8));
  /* 10e874: nop  */
  /* nop: no architectural effect here */
  /* 10e878: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10e87c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1108096));
  fn1_142518(c);
  /* 10e880: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 10e884: stlr x8, [x27] */
  arc_st64(ARC_X_R(c, 27), ARC_X_R(c, 8));
  /* 10e888: nop  */
  /* nop: no architectural effect here */
  /* 10e88c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10e890: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1108116));
  fn1_142560(c);
  /* 10e894: nop  */
  /* nop: no architectural effect here */
  /* 10e898: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 10e89c: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1108128));
  fn1_142578(c);
L_10e8a0:;
  /* 10e8a0: ldp x8, x10, [x23, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 10e8a4: ldrsw x9, [x27, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 27) + INT64_C(8)))));
  /* 10e8a8: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 10e8ac: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 10e8b0: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 10e8b4: b.hs #0x10ef54 */
  if (ARC_COND(c, 2)) goto L_10ef54;
  /* 10e8b8: ldr x25, [x8, x9, lsl #3] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 10e8bc: cbz x25, #0x10ef54 */
  if ((ARC_X_R(c, 25)) == 0) goto L_10ef54;
  /* 10e8c0: adrp x27, #0x151000 */
  ARC_X_W(c, 27, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 10e8c4: ldr x27, [x27, #0xcb8] */
  ARC_X_W(c, 27, arc_ld64((ARC_X_R(c, 27) + INT64_C(3256))));
  /* 10e8c8: ldr x23, [x26] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 26)));
  /* 10e8cc: ldar x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 10e8d0: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 10e8d4: b.eq #0x10e990 */
  if (ARC_COND(c, 0)) goto L_10e990;
  /* 10e8d8: nop  */
  /* nop: no architectural effect here */
  /* 10e8dc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10e8e0: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1108196));
  fn1_142518(c);
  /* 10e8e4: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 10e8e8: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 10e8ec: b.ne #0x10e918 */
  if (ARC_COND(c, 1)) goto L_10e918;
  /* 10e8f0: nop  */
  /* nop: no architectural effect here */
  /* 10e8f4: adr x19, #0x15791c */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 10e8f8: nop  */
  /* nop: no architectural effect here */
  /* 10e8fc: adr x26, #0x1578f4 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1407220)));
L_10e900:;
  /* 10e900: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10e904: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 10e908: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1108236));
  fn1_142530(c);
  /* 10e90c: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 10e910: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 10e914: b.eq #0x10e900 */
  if (ARC_COND(c, 0)) goto L_10e900;
L_10e918:;
  /* 10e918: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 10e91c: cbz x8, #0x10e930 */
  if ((ARC_X_R(c, 8)) == 0) goto L_10e930;
  /* 10e920: nop  */
  /* nop: no architectural effect here */
  /* 10e924: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10e928: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1108268));
  fn1_142560(c);
  /* 10e92c: b #0x10e990 */
  goto L_10e990;
L_10e930:;
  /* 10e930: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 10e934: stur x27, [x29, #-0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-24)), ARC_X_R(c, 27));
  /* 10e938: sturb wzr, [x29, #-0x10] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-16)), ARC_W_R(c, 31));
  /* 10e93c: str x8, [x27] */
  arc_st64(ARC_X_R(c, 27), ARC_X_R(c, 8));
  /* 10e940: nop  */
  /* nop: no architectural effect here */
  /* 10e944: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10e948: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1108300));
  fn1_142560(c);
  /* 10e94c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 10e950: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 10e954: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 10e958: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1108316));
  fn1_a2030(c);
  /* 10e95c: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 10e960: str w8, [x27, #8] */
  arc_st32((ARC_X_R(c, 27) + INT64_C(8)), ARC_W_R(c, 8));
  /* 10e964: nop  */
  /* nop: no architectural effect here */
  /* 10e968: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10e96c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1108336));
  fn1_142518(c);
  /* 10e970: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 10e974: stlr x8, [x27] */
  arc_st64(ARC_X_R(c, 27), ARC_X_R(c, 8));
  /* 10e978: nop  */
  /* nop: no architectural effect here */
  /* 10e97c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10e980: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1108356));
  fn1_142560(c);
  /* 10e984: nop  */
  /* nop: no architectural effect here */
  /* 10e988: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 10e98c: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1108368));
  fn1_142578(c);
L_10e990:;
  /* 10e990: ldp x8, x10, [x23, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 10e994: ldrsw x9, [x27, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 27) + INT64_C(8)))));
  /* 10e998: str x28, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 28));
  /* 10e99c: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 10e9a0: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 10e9a4: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 10e9a8: b.hs #0x10ef54 */
  if (ARC_COND(c, 2)) goto L_10ef54;
  /* 10e9ac: ldr x19, [x8, x9, lsl #3] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 10e9b0: cbz x19, #0x10ef54 */
  if ((ARC_X_R(c, 19)) == 0) goto L_10ef54;
  /* 10e9b4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 10e9b8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10e9bc: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* 10e9c0: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 10e9c4: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1108424));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 10e9c8: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 10e9cc: str x22, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* 10e9d0: ldrb w1, [x23] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 23)));
  /* 10e9d4: cmp w1, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(45));
  /* 10e9d8: b.eq #0x10e9e8 */
  if (ARC_COND(c, 0)) goto L_10e9e8;
  /* 10e9dc: cmp w1, #0x2b */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(43));
  /* 10e9e0: mov x28, x23 */
  ARC_X_W(c, 28, ARC_X_R(c, 23));
  /* 10e9e4: b.ne #0x10ea08 */
  if (ARC_COND(c, 1)) goto L_10ea08;
L_10e9e8:;
  /* 10e9e8: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 10e9ec: ldr x8, [x8, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* 10e9f0: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 10e9f4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1108472));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10e9f8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 10e9fc: add x28, x23, #1 */
  ARC_X_W(c, 28, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* 10ea00: str w0, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 0));
  }
  /* 10ea04: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
L_10ea08:;
  /* 10ea08: stp x19, x22, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* 10ea0c: sub x22, x21, x28 */
  ARC_X_W(c, 22, (ARC_X_R(c, 21) - ARC_X_R(c, 28)));
  /* 10ea10: cmp x22, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 22), UINT64_C(2));
  /* 10ea14: b.lt #0x10eb04 */
  if (ARC_COND(c, 11)) goto L_10eb04;
  /* 10ea18: ldrb w8, [x28] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 28)));
  /* 10ea1c: cmp w8, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(48));
  /* 10ea20: b.ne #0x10eb04 */
  if (ARC_COND(c, 1)) goto L_10eb04;
  /* 10ea24: ldrb w8, [x28, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 28) + INT64_C(1))));
  /* 10ea28: orr w8, w8, #0x20 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(32)));
  /* 10ea2c: cmp w8, #0x78 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(120));
  /* 10ea30: b.ne #0x10eb04 */
  if (ARC_COND(c, 1)) goto L_10eb04;
  /* 10ea34: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 10ea38: ldr x8, [x8, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* 10ea3c: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 10ea40: mov w1, #0x30 */
  ARC_W_W(c, 1, UINT64_C(48));
  /* 10ea44: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1108552));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10ea48: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 10ea4c: str w0, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 0));
  }
  /* 10ea50: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 10ea54: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 10ea58: ldrb w1, [x28, #1] */
  ARC_W_W(c, 1, arc_ld8((ARC_X_R(c, 28) + INT64_C(1))));
  /* 10ea5c: ldr x8, [x8, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* 10ea60: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 10ea64: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1108584));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10ea68: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 10ea6c: add x26, x28, #2 */
  ARC_X_W(c, 26, (ARC_X_R(c, 28) + UINT64_C(2)));
  /* 10ea70: cmp x26, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 21));
  /* 10ea74: str w0, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 0));
  }
  /* 10ea78: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 10ea7c: b.hs #0x10ef38 */
  if (ARC_COND(c, 2)) goto L_10ef38;
  /* 10ea80: mov x23, x24 */
  ARC_X_W(c, 23, ARC_X_R(c, 24));
  /* 10ea84: nop  */
  /* nop: no architectural effect here */
  /* 10ea88: adr x19, #0x15dc38 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10ea8c: add x22, x28, x22 */
  ARC_X_W(c, 22, (ARC_X_R(c, 28) + ARC_X_R(c, 22)));
  /* 10ea90: adrp x28, #0x15d000 */
  ARC_X_W(c, 28, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 10ea94: mov x27, x26 */
  ARC_X_W(c, 27, ARC_X_R(c, 26));
  /* 10ea98: b #0x10eaa8 */
  goto L_10eaa8;
L_10ea9c:;
  /* 10ea9c: add x27, x27, #1 */
  ARC_X_W(c, 27, (ARC_X_R(c, 27) + UINT64_C(1)));
  /* 10eaa0: cmp x27, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 27), ARC_X_R(c, 21));
  /* 10eaa4: b.eq #0x10ef48 */
  if (ARC_COND(c, 0)) goto L_10ef48;
L_10eaa8:;
  /* 10eaa8: ldrb w24, [x27] */
  ARC_W_W(c, 24, arc_ld8(ARC_X_R(c, 27)));
  /* 10eaac: ldarb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 10eab0: tbz w8, #0, #0x10ead4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10ead4;
L_10eab4:;
  /* 10eab4: sub w8, w24, #0x3a */
  ARC_W_W(c, 8, (ARC_W_R(c, 24) - UINT64_C(58)));
  /* 10eab8: cmn w8, #0xb */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(11), 0);
  /* 10eabc: b.hi #0x10ea9c */
  if (ARC_COND(c, 8)) goto L_10ea9c;
  /* 10eac0: orr w8, w24, #0x20 */
  ARC_W_W(c, 8, (ARC_W_R(c, 24) | UINT64_C(32)));
  /* 10eac4: sub w8, w8, #0x67 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(103)));
  /* 10eac8: cmn w8, #6 */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(6), 0);
  /* 10eacc: b.hs #0x10ea9c */
  if (ARC_COND(c, 2)) goto L_10ea9c;
  /* 10ead0: b #0x10ef40 */
  goto L_10ef40;
L_10ead4:;
  /* 10ead4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10ead8: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1108700));
  fn1_1424b8(c);
  /* 10eadc: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 10eae0: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 10eae4: cbz w0, #0x10eab4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_10eab4;
  /* 10eae8: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 10eaec: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 10eaf0: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1108724));
  fn1_1441e0(c);
  /* 10eaf4: str x0, [x28, #0xc30] */
  arc_st64((ARC_X_R(c, 28) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 10eaf8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10eafc: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1108736));
  fn1_1424d0(c);
  /* 10eb00: b #0x10eab4 */
  goto L_10eab4;
L_10eb04:;
  /* 10eb04: cmp x28, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 28), ARC_X_R(c, 21));
  /* 10eb08: b.hs #0x10eb78 */
  if (ARC_COND(c, 2)) goto L_10eb78;
  /* 10eb0c: nop  */
  /* nop: no architectural effect here */
  /* 10eb10: adr x19, #0x15dc38 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10eb14: add x22, x28, x22 */
  ARC_X_W(c, 22, (ARC_X_R(c, 28) + ARC_X_R(c, 22)));
  /* 10eb18: adrp x23, #0x15d000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 10eb1c: mov x27, x28 */
  ARC_X_W(c, 27, ARC_X_R(c, 28));
L_10eb20:;
  /* 10eb20: ldrb w26, [x27] */
  ARC_W_W(c, 26, arc_ld8(ARC_X_R(c, 27)));
  /* 10eb24: ldarb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 10eb28: tbz w8, #0, #0x10eb48 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10eb48;
L_10eb2c:;
  /* 10eb2c: sub w8, w26, #0x3a */
  ARC_W_W(c, 8, (ARC_W_R(c, 26) - UINT64_C(58)));
  /* 10eb30: cmn w8, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(10), 0);
  /* 10eb34: b.lo #0x10eb88 */
  if (ARC_COND(c, 3)) goto L_10eb88;
  /* 10eb38: add x27, x27, #1 */
  ARC_X_W(c, 27, (ARC_X_R(c, 27) + UINT64_C(1)));
  /* 10eb3c: cmp x27, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 27), ARC_X_R(c, 21));
  /* 10eb40: b.ne #0x10eb20 */
  if (ARC_COND(c, 1)) goto L_10eb20;
  /* 10eb44: b #0x10eb84 */
  goto L_10eb84;
L_10eb48:;
  /* 10eb48: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10eb4c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1108816));
  fn1_1424b8(c);
  /* 10eb50: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 10eb54: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 10eb58: cbz w0, #0x10eb2c */
  if ((ARC_W_R(c, 0)) == 0) goto L_10eb2c;
  /* 10eb5c: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 10eb60: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 10eb64: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1108840));
  fn1_1441e0(c);
  /* 10eb68: str x0, [x23, #0xc30] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 10eb6c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10eb70: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1108852));
  fn1_1424d0(c);
  /* 10eb74: b #0x10eb2c */
  goto L_10eb2c;
L_10eb78:;
  /* 10eb78: mov x27, x28 */
  ARC_X_W(c, 27, ARC_X_R(c, 28));
  /* 10eb7c: mov x26, x28 */
  ARC_X_W(c, 26, ARC_X_R(c, 28));
  /* 10eb80: b #0x10eb94 */
  goto L_10eb94;
L_10eb84:;
  /* 10eb84: mov x27, x22 */
  ARC_X_W(c, 27, ARC_X_R(c, 22));
L_10eb88:;
  /* 10eb88: mov x26, x28 */
  ARC_X_W(c, 26, ARC_X_R(c, 28));
L_10eb8c:;
  /* 10eb8c: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 10eb90: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
L_10eb94:;
  /* 10eb94: ldurb w8, [x29, #-0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 10eb98: ldur x9, [x29, #-0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 10eb9c: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 10eba0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 10eba4: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 10eba8: cbz x8, #0x10ecbc */
  if ((ARC_X_R(c, 8)) == 0) goto L_10ecbc;
  /* 10ebac: cmp x26, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 27));
  /* 10ebb0: b.eq #0x10ebe0 */
  if (ARC_COND(c, 0)) goto L_10ebe0;
  /* 10ebb4: sub x8, x27, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 27) - UINT64_C(1)));
  /* 10ebb8: cmp x26, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 8));
  /* 10ebbc: b.hs #0x10ebe0 */
  if (ARC_COND(c, 2)) goto L_10ebe0;
  /* 10ebc0: add x9, x26, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 26) + UINT64_C(1)));
L_10ebc4:;
  /* 10ebc4: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* 10ebc8: ldurb w11, [x9, #-1] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 9) + INT64_C(-1))));
  /* 10ebcc: sturb w10, [x9, #-1] */
  arc_st8((ARC_X_R(c, 9) + INT64_C(-1)), ARC_W_R(c, 10));
  /* 10ebd0: strb w11, [x8], #0xffffffffffffffff */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-1));
    arc_st8(_a, ARC_W_R(c, 11));
  }
  /* 10ebd4: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 10ebd8: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 10ebdc: b.lo #0x10ebc4 */
  if (ARC_COND(c, 3)) goto L_10ebc4;
L_10ebe0:;
  /* 10ebe0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 10ebe4: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 10ebe8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10ebec: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1108976));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10ebf0: cmp x26, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 27));
  /* 10ebf4: b.hs #0x10ecec */
  if (ARC_COND(c, 2)) goto L_10ecec;
  /* 10ebf8: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 10ebfc: mov w19, w0 */
  ARC_W_W(c, 19, ARC_W_R(c, 0));
  /* 10ec00: str x24, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 24));
  /* 10ec04: mov w28, wzr */
  ARC_W_W(c, 28, ARC_W_R(c, 31));
  /* 10ec08: mov w22, wzr */
  ARC_W_W(c, 22, ARC_W_R(c, 31));
  /* 10ec0c: orr x24, x8, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) | UINT64_C(1)));
  /* 10ec10: mov x23, x26 */
  ARC_X_W(c, 23, ARC_X_R(c, 26));
L_10ec14:;
  /* 10ec14: ldurb w8, [x29, #-0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 10ec18: ldur x9, [x29, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 10ec1c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 10ec20: mov w8, w28 */
  ARC_W_W(c, 8, ARC_W_R(c, 28));
  /* 10ec24: csel x10, x24, x9, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 24)) : ARC_X_R(c, 9)));
  /* 10ec28: ldrb w10, [x10, x8] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 10) + ARC_X_R(c, 8))));
  /* 10ec2c: cbz w10, #0x10ec78 */
  if ((ARC_W_R(c, 10)) == 0) goto L_10ec78;
  /* 10ec30: ldurb w10, [x29, #-0x18] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 10ec34: tst w10, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1)));
  /* 10ec38: csel x9, x24, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 24)) : ARC_X_R(c, 9)));
  /* 10ec3c: ldrb w9, [x9, x8] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 9) + ARC_X_R(c, 8))));
  /* 10ec40: cmp w22, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 22), ARC_W_R(c, 9));
  /* 10ec44: b.ne #0x10ec78 */
  if (ARC_COND(c, 1)) goto L_10ec78;
  /* 10ec48: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* 10ec4c: mov w22, wzr */
  ARC_W_W(c, 22, ARC_W_R(c, 31));
  /* 10ec50: str w19, [x9], #4 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 19));
  }
  /* 10ec54: ldurb w10, [x29, #-0x18] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 10ec58: ldur x11, [x29, #-0x10] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 10ec5c: str x9, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 9));
  /* 10ec60: lsr x12, x10, #1 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* 10ec64: tst w10, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1)));
  /* 10ec68: csel x10, x12, x11, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* 10ec6c: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* 10ec70: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* 10ec74: cinc w28, w28, hi */
  ARC_W_W(c, 28, (ARC_COND(c, 8) ? (ARC_W_R(c, 28)) + 1 : (ARC_W_R(c, 28))));
L_10ec78:;
  /* 10ec78: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 10ec7c: ldrb w1, [x23] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 23)));
  /* 10ec80: ldr x8, [x8, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* 10ec84: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 10ec88: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1109132));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10ec8c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 10ec90: add x23, x23, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* 10ec94: add w22, w22, #1 */
  ARC_W_W(c, 22, (ARC_W_R(c, 22) + UINT64_C(1)));
  /* 10ec98: cmp x23, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 27));
  /* 10ec9c: mov x9, x8 */
  ARC_X_W(c, 9, ARC_X_R(c, 8));
  /* 10eca0: str w0, [x9], #4 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 0));
  }
  /* 10eca4: str x9, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 9));
  /* 10eca8: b.ne #0x10ec14 */
  if (ARC_COND(c, 1)) goto L_10ec14;
  /* 10ecac: ldp x16, x23, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    ARC_X_W(c, 16, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 10ecb0: add x3, x8, #4 */
  ARC_X_W(c, 3, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 10ecb4: ldr x24, [sp] */
  ARC_X_W(c, 24, arc_ld64((c)->sp));
  /* 10ecb8: b #0x10ecf4 */
  goto L_10ecf4;
L_10ecbc:;
  /* 10ecbc: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 10ecc0: ldr x3, [x20] */
  ARC_X_W(c, 3, arc_ld64(ARC_X_R(c, 20)));
  /* 10ecc4: ldr x8, [x8, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(96))));
  /* 10ecc8: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 10eccc: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 10ecd0: mov x2, x27 */
  ARC_X_W(c, 2, ARC_X_R(c, 27));
  /* 10ecd4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1109208));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10ecd8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 10ecdc: sub x9, x27, x26 */
  ARC_X_W(c, 9, (ARC_X_R(c, 27) - ARC_X_R(c, 26)));
  /* 10ece0: add x3, x8, x9, lsl #2 */
  ARC_X_W(c, 3, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 2)));
  /* 10ece4: str x3, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 3));
  /* 10ece8: b #0x10ee50 */
  goto L_10ee50;
L_10ecec:;
  /* 10ecec: ldr x3, [x20] */
  ARC_X_W(c, 3, arc_ld64(ARC_X_R(c, 20)));
  /* 10ecf0: ldr x16, [sp, #0x18] */
  ARC_X_W(c, 16, arc_ld64(((c)->sp + INT64_C(24))));
L_10ecf4:;
  /* 10ecf4: sub x8, x26, x23 */
  ARC_X_W(c, 8, (ARC_X_R(c, 26) - ARC_X_R(c, 23)));
  /* 10ecf8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 10ecfc: add x9, x16, x8, lsl #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 16) + ((uint64_t)(ARC_X_R(c, 8)) << 2)));
  /* 10ed00: cmp x9, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 3));
  /* 10ed04: b.eq #0x10ee50 */
  if (ARC_COND(c, 0)) goto L_10ee50;
  /* 10ed08: sub x8, x3, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) - UINT64_C(4)));
  /* 10ed0c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 10ed10: b.hs #0x10ee50 */
  if (ARC_COND(c, 2)) goto L_10ee50;
  /* 10ed14: lsl x10, x26, #2 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 26)) << ((UINT64_C(2)) & 63)));
  /* 10ed18: lsl x11, x23, #2 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 23)) << ((UINT64_C(2)) & 63)));
  /* 10ed1c: sub x14, x3, #8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 3) - UINT64_C(8)));
  /* 10ed20: add x12, x10, x16 */
  ARC_X_W(c, 12, (ARC_X_R(c, 10) + ARC_X_R(c, 16)));
  /* 10ed24: sub x12, x12, x11 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* 10ed28: add x13, x12, #4 */
  ARC_X_W(c, 13, (ARC_X_R(c, 12) + UINT64_C(4)));
  /* 10ed2c: cmp x13, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 14));
  /* 10ed30: csel x12, x13, x14, hi */
  ARC_X_W(c, 12, (ARC_COND(c, 8) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 14)));
  /* 10ed34: add x12, x12, x11 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + ARC_X_R(c, 11)));
  /* 10ed38: sub x12, x12, x16 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - ARC_X_R(c, 16)));
  /* 10ed3c: sub x12, x12, #4 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(4)));
  /* 10ed40: cmp x12, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 10));
  /* 10ed44: cset w15, ne */
  ARC_W_W(c, 15, (ARC_COND(c, 1) ? 1 : 0));
  /* 10ed48: cmp x12, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 10));
  /* 10ed4c: bfi x15, x26, #2, #0x3e */
  ARC_X_W(c, 15, (((uint64_t)(ARC_X_R(c, 15)) & UINT64_C(3)) | ((((uint64_t)(ARC_X_R(c, 26))) & UINT64_C(4611686018427387903)) << 2)));
  /* 10ed50: sub x15, x12, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ARC_X_R(c, 15)));
  /* 10ed54: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* 10ed58: cinc x12, x15, ne */
  ARC_X_W(c, 12, (ARC_COND(c, 1) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* 10ed5c: cmp x12, #0x1f */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(31));
  /* 10ed60: b.lo #0x10ee30 */
  if (ARC_COND(c, 3)) goto L_10ee30;
  /* 10ed64: cmp x13, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 14));
  /* 10ed68: csel x13, x13, x14, hi */
  ARC_X_W(c, 13, (ARC_COND(c, 8) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 14)));
  /* 10ed6c: add x13, x13, x11 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + ARC_X_R(c, 11)));
  /* 10ed70: sub x13, x13, x16 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - ARC_X_R(c, 16)));
  /* 10ed74: sub x13, x13, #4 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(4)));
  /* 10ed78: cmp x13, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 10));
  /* 10ed7c: cset w14, ne */
  ARC_W_W(c, 14, (ARC_COND(c, 1) ? 1 : 0));
  /* 10ed80: cmp x13, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 10));
  /* 10ed84: bfi x14, x26, #2, #0x3e */
  ARC_X_W(c, 14, (((uint64_t)(ARC_X_R(c, 14)) & UINT64_C(3)) | ((((uint64_t)(ARC_X_R(c, 26))) & UINT64_C(4611686018427387903)) << 2)));
  /* 10ed88: sub x14, x13, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 13) - ARC_X_R(c, 14)));
  /* 10ed8c: lsr x14, x14, #3 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 14)) >> ((UINT64_C(3)) & 63)));
  /* 10ed90: cinc x13, x14, ne */
  ARC_X_W(c, 13, (ARC_COND(c, 1) ? (ARC_X_R(c, 14)) + 1 : (ARC_X_R(c, 14))));
  /* 10ed94: cmp x9, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 3));
  /* 10ed98: b.hs #0x10edc0 */
  if (ARC_COND(c, 2)) goto L_10edc0;
  /* 10ed9c: lsl x13, x13, #2 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 13)) << ((UINT64_C(2)) & 63)));
  /* 10eda0: add x14, x10, x13 */
  ARC_X_W(c, 14, (ARC_X_R(c, 10) + ARC_X_R(c, 13)));
  /* 10eda4: sub x13, x3, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 3) - ARC_X_R(c, 13)));
  /* 10eda8: sub x14, x14, x11 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - ARC_X_R(c, 11)));
  /* 10edac: sub x13, x13, #4 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(4)));
  /* 10edb0: add x14, x14, x16 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + ARC_X_R(c, 16)));
  /* 10edb4: add x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(4)));
  /* 10edb8: cmp x13, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 14));
  /* 10edbc: b.lo #0x10ee30 */
  if (ARC_COND(c, 3)) goto L_10ee30;
L_10edc0:;
  /* 10edc0: add x12, x12, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(1)));
  /* 10edc4: sub x10, x10, x11 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 11)));
  /* 10edc8: sub x11, x3, #0x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 3) - UINT64_C(16)));
  /* 10edcc: and x13, x12, #0x7ffffffffffffff8 */
  ARC_X_W(c, 13, (ARC_X_R(c, 12) & UINT64_C(9223372036854775800)));
  /* 10edd0: add x10, x10, x16 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + ARC_X_R(c, 16)));
  /* 10edd4: lsl x14, x13, #2 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 13)) << ((UINT64_C(2)) & 63)));
  /* 10edd8: add x10, x10, #0x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(16)));
  /* 10eddc: sub x8, x8, x14 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 14)));
  /* 10ede0: add x9, x9, x14 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 14)));
  /* 10ede4: mov x14, x13 */
  ARC_X_W(c, 14, ARC_X_R(c, 13));
L_10ede8:;
  /* 10ede8: ldp q1, q0, [x11, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(-16));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 10edec: sub x14, x14, #8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(8)));
  /* 10edf0: ldp q2, q3, [x10, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 10) + INT64_C(-16));
    arc_q_w(c, 2, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 3, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 10edf4: rev64 v0.4s, v0.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[0].u32[1];
    _t.u32[1] = (c)->q[0].u32[0];
    _t.u32[2] = (c)->q[0].u32[3];
    _t.u32[3] = (c)->q[0].u32[2];
    (c)->q[0] = _t; }
  /* 10edf8: rev64 v1.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[1].u32[1];
    _t.u32[1] = (c)->q[1].u32[0];
    _t.u32[2] = (c)->q[1].u32[3];
    _t.u32[3] = (c)->q[1].u32[2];
    (c)->q[1] = _t; }
  /* 10edfc: rev64 v2.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[2].u32[1];
    _t.u32[1] = (c)->q[2].u32[0];
    _t.u32[2] = (c)->q[2].u32[3];
    _t.u32[3] = (c)->q[2].u32[2];
    (c)->q[2] = _t; }
  /* 10ee00: rev64 v3.4s, v3.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[3].u32[1];
    _t.u32[1] = (c)->q[3].u32[0];
    _t.u32[2] = (c)->q[3].u32[3];
    _t.u32[3] = (c)->q[3].u32[2];
    (c)->q[3] = _t; }
  /* 10ee04: ext v0.16b, v0.16b, v0.16b, #8 */
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
  /* 10ee08: ext v1.16b, v1.16b, v1.16b, #8 */
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
  /* 10ee0c: ext v2.16b, v2.16b, v2.16b, #8 */
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
  /* 10ee10: ext v3.16b, v3.16b, v3.16b, #8 */
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
  /* 10ee14: stp q0, q1, [x10, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 10) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 10ee18: add x10, x10, #0x20 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(32)));
  /* 10ee1c: stp q3, q2, [x11, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(-16));
    arc_st64(_pa, (c)->q[3].u64[0]);
    arc_st64(_pa + 8, (c)->q[3].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* 10ee20: sub x11, x11, #0x20 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(32)));
  /* 10ee24: cbnz x14, #0x10ede8 */
  if ((ARC_X_R(c, 14)) != 0) goto L_10ede8;
  /* 10ee28: cmp x12, x13 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 13));
  /* 10ee2c: b.eq #0x10ee50 */
  if (ARC_COND(c, 0)) goto L_10ee50;
L_10ee30:;
  /* 10ee30: add x9, x9, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(4)));
L_10ee34:;
  /* 10ee34: ldr w10, [x8] */
  ARC_W_W(c, 10, arc_ld32(ARC_X_R(c, 8)));
  /* 10ee38: ldur w11, [x9, #-4] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + INT64_C(-4))));
  /* 10ee3c: stur w10, [x9, #-4] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(-4)), ARC_W_R(c, 10));
  /* 10ee40: str w11, [x8], #0xfffffffffffffffc */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-4));
    arc_st32(_a, ARC_W_R(c, 11));
  }
  /* 10ee44: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 10ee48: add x9, x9, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(4)));
  /* 10ee4c: b.lo #0x10ee34 */
  if (ARC_COND(c, 3)) goto L_10ee34;
L_10ee50:;
  /* 10ee50: cmp x27, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 27), ARC_X_R(c, 21));
  /* 10ee54: b.hs #0x10eeb8 */
  if (ARC_COND(c, 2)) goto L_10eeb8;
L_10ee58:;
  /* 10ee58: ldrb w1, [x27] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 27)));
  /* 10ee5c: cmp w1, #0x2e */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(46));
  /* 10ee60: b.eq #0x10ee98 */
  if (ARC_COND(c, 0)) goto L_10ee98;
  /* 10ee64: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 10ee68: ldr x8, [x8, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* 10ee6c: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 10ee70: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1109620));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10ee74: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 10ee78: add x27, x27, #1 */
  ARC_X_W(c, 27, (ARC_X_R(c, 27) + UINT64_C(1)));
  /* 10ee7c: cmp x27, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 27), ARC_X_R(c, 21));
  /* 10ee80: mov x9, x8 */
  ARC_X_W(c, 9, ARC_X_R(c, 8));
  /* 10ee84: str w0, [x9], #4 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 0));
  }
  /* 10ee88: str x9, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 9));
  /* 10ee8c: b.ne #0x10ee58 */
  if (ARC_COND(c, 1)) goto L_10ee58;
  /* 10ee90: add x3, x8, #4 */
  ARC_X_W(c, 3, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 10ee94: b #0x10eeb8 */
  goto L_10eeb8;
L_10ee98:;
  /* 10ee98: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 10ee9c: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 10eea0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10eea4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1109672));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10eea8: ldr x3, [x20] */
  ARC_X_W(c, 3, arc_ld64(ARC_X_R(c, 20)));
  /* 10eeac: add x27, x27, #1 */
  ARC_X_W(c, 27, (ARC_X_R(c, 27) + UINT64_C(1)));
  /* 10eeb0: str w0, [x3], #4 */
  { const uint64_t _a = ARC_X_R(c, 3);
    ARC_X_W(c, 3, ARC_X_R(c, 3) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 0));
  }
  /* 10eeb4: str x3, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 3));
L_10eeb8:;
  /* 10eeb8: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 10eebc: ldr x8, [x8, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(96))));
  /* 10eec0: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 10eec4: mov x1, x27 */
  ARC_X_W(c, 1, ARC_X_R(c, 27));
  /* 10eec8: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 10eecc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1109712));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10eed0: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 10eed4: sub x9, x21, x27 */
  ARC_X_W(c, 9, (ARC_X_R(c, 21) - ARC_X_R(c, 27)));
  /* 10eed8: ldr x11, [sp, #8] */
  ARC_X_W(c, 11, arc_ld64(((c)->sp + INT64_C(8))));
  /* 10eedc: add x8, x8, x9, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 2)));
  /* 10eee0: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
  /* 10eee4: sub x10, x11, x23 */
  ARC_X_W(c, 10, (ARC_X_R(c, 11) - ARC_X_R(c, 23)));
  /* 10eee8: cmp x11, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 21));
  /* 10eeec: add x9, x9, x10, lsl #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 10)) << 2)));
  /* 10eef0: ldurb w10, [x29, #-0x18] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 10eef4: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 10eef8: csel x8, x8, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* 10eefc: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 10ef00: tbz w10, #0, #0x10ef14 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) == 0) goto L_10ef14;
  /* 10ef04: ldur x8, [x29, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 10ef08: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 10ef0c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 10ef10: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1109780));
  fn1_142608(c);
L_10ef14:;
  /* 10ef14: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 10ef18: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 10ef1c: ldp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 10ef20: ldp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 10ef24: ldp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 10ef28: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 10ef2c: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* 10ef30: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 10ef34: ret  */
  return;
L_10ef38:;
  /* 10ef38: mov x27, x26 */
  ARC_X_W(c, 27, ARC_X_R(c, 26));
  /* 10ef3c: b #0x10eb94 */
  goto L_10eb94;
L_10ef40:;
  /* 10ef40: mov x24, x23 */
  ARC_X_W(c, 24, ARC_X_R(c, 23));
  /* 10ef44: b #0x10eb8c */
  goto L_10eb8c;
L_10ef48:;
  /* 10ef48: mov x27, x22 */
  ARC_X_W(c, 27, ARC_X_R(c, 22));
  /* 10ef4c: mov x24, x23 */
  ARC_X_W(c, 24, ARC_X_R(c, 23));
  /* 10ef50: b #0x10eb8c */
  goto L_10eb8c;
L_10ef54:;
  /* 10ef54: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1109848));
  fn1_fc3b8(c);
  /* 10ef58: b #0x10ef5c */
  goto L_10ef5c;
L_10ef5c:;
  /* 10ef5c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10ef60: nop  */
  /* nop: no architectural effect here */
  /* 10ef64: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10ef68: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1109868));
  fn1_1424e8(c);
  /* 10ef6c: b #0x10ef9c */
  goto L_10ef9c;
  /* 10ef70: b #0x10ef98 */
  goto L_10ef98;
  /* 10ef74: b #0x10ef98 */
  goto L_10ef98;
  /* 10ef78: b #0x10ef7c */
  goto L_10ef7c;
L_10ef7c:;
  /* 10ef7c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10ef80: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 10ef84: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1109896));
  fn1_d2a78(c);
  /* 10ef88: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10ef8c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1109904));
  fn1_9cc20(c);
  /* 10ef90: b #0x10ef98 */
  goto L_10ef98;
  /* 10ef94: b #0x10ef98 */
  goto L_10ef98;
L_10ef98:;
  /* 10ef98: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_10ef9c:;
  /* 10ef9c: ldurb w8, [x29, #-0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 10efa0: tbz w8, #0, #0x10efb4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10efb4;
  /* 10efa4: ldur x8, [x29, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 10efa8: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 10efac: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 10efb0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1109940));
  fn1_142608(c);
L_10efb4:;
  /* 10efb4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10efb8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1109948));
  fn1_9cc20(c);
}

void fn1_113c30(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057456));
  /* 113c30: bti c */
  /* bti: no architectural effect here */
  /* 113c34: mov w0, #0xff */
  ARC_W_W(c, 0, UINT64_C(255));
  /* 113c38: ret  */
  return;
}

void fn1_1145a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039059872));
  /* 1145a0: bti c */
  /* bti: no architectural effect here */
  /* 1145a4: ret  */
  return;
}

void fn1_120d44(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039110980));
  /* 120d44: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 120d48: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 120d4c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 120d50: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 120d54: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 120d58: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 120d5c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 120d60: adrp x23, #0x151000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 120d64: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 120d68: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 120d6c: ldr x23, [x23, #0xc48] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 23) + INT64_C(3144))));
  /* 120d70: ldar x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 120d74: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 120d78: b.eq #0x120e34 */
  if (ARC_COND(c, 0)) goto L_120e34;
  /* 120d7c: nop  */
  /* nop: no architectural effect here */
  /* 120d80: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 120d84: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1183112));
  fn1_142518(c);
  /* 120d88: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 120d8c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 120d90: b.ne #0x120dbc */
  if (ARC_COND(c, 1)) goto L_120dbc;
  /* 120d94: nop  */
  /* nop: no architectural effect here */
  /* 120d98: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 120d9c: nop  */
  /* nop: no architectural effect here */
  /* 120da0: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_120da4:;
  /* 120da4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 120da8: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 120dac: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1183152));
  fn1_142530(c);
  /* 120db0: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 120db4: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 120db8: b.eq #0x120da4 */
  if (ARC_COND(c, 0)) goto L_120da4;
L_120dbc:;
  /* 120dbc: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 120dc0: cbz x8, #0x120dd4 */
  if ((ARC_X_R(c, 8)) == 0) goto L_120dd4;
  /* 120dc4: nop  */
  /* nop: no architectural effect here */
  /* 120dc8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 120dcc: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1183184));
  fn1_142560(c);
  /* 120dd0: b #0x120e34 */
  goto L_120e34;
L_120dd4:;
  /* 120dd4: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 120dd8: str x23, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 23));
  /* 120ddc: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 120de0: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 120de4: nop  */
  /* nop: no architectural effect here */
  /* 120de8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 120dec: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1183216));
  fn1_142560(c);
  /* 120df0: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 120df4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 120df8: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 120dfc: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1183232));
  fn1_a2030(c);
  /* 120e00: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 120e04: str w8, [x23, #8] */
  arc_st32((ARC_X_R(c, 23) + INT64_C(8)), ARC_W_R(c, 8));
  /* 120e08: nop  */
  /* nop: no architectural effect here */
  /* 120e0c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 120e10: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1183252));
  fn1_142518(c);
  /* 120e14: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 120e18: stlr x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 120e1c: nop  */
  /* nop: no architectural effect here */
  /* 120e20: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 120e24: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1183272));
  fn1_142560(c);
  /* 120e28: nop  */
  /* nop: no architectural effect here */
  /* 120e2c: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 120e30: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1183284));
  fn1_142578(c);
L_120e34:;
  /* 120e34: ldrsw x8, [x23, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 23) + INT64_C(8)))));
  /* 120e38: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 120e3c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 120e40: sub x22, x8, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 120e44: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1183304));
  fn1_db2e0(c);
  /* 120e48: mov x21, x20 */
  ARC_X_W(c, 21, ARC_X_R(c, 20));
  /* 120e4c: ldp x8, x9, [x21, #0x10]! */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 120e50: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 120e54: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 120e58: cmp x10, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 22));
  /* 120e5c: b.hi #0x120e88 */
  if (ARC_COND(c, 8)) goto L_120e88;
  /* 120e60: add x9, x22, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* 120e64: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 120e68: b.ls #0x120e7c */
  if (ARC_COND(c, 9)) goto L_120e7c;
  /* 120e6c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 120e70: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1183348));
  fn1_1352bc(c);
  /* 120e74: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 120e78: b #0x120e88 */
  goto L_120e88;
L_120e7c:;
  /* 120e7c: b.hs #0x120e88 */
  if (ARC_COND(c, 2)) goto L_120e88;
  /* 120e80: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 120e84: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_120e88:;
  /* 120e88: ldr x20, [x8, x22, lsl #3] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3))));
  /* 120e8c: cbz x20, #0x120eb0 */
  if ((ARC_X_R(c, 20)) == 0) goto L_120eb0;
  /* 120e90: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 120e94: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 120e98: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1183388));
  fn1_bd950(c);
  /* 120e9c: cbnz x0, #0x120eb0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_120eb0;
  /* 120ea0: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 120ea4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 120ea8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 120eac: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1183408));
  arc_dispatch(c, ARC_X_R(c, 8));
L_120eb0:;
  /* 120eb0: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 120eb4: str x19, [x8, x22, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3)), ARC_X_R(c, 19));
  /* 120eb8: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 120ebc: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 120ec0: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 120ec4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 120ec8: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 120ecc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 120ed0: ret  */
  return;
  /* 120ed4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 120ed8: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 120edc: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 120ee0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1183460));
  fn1_bd950(c);
  /* 120ee4: cbnz x0, #0x120f0c */
  if ((ARC_X_R(c, 0)) != 0) goto L_120f0c;
  /* 120ee8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 120eec: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 120ef0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 120ef4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1183480));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 120ef8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 120efc: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1183488));
  fn1_9cc20(c);
  /* 120f00: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 120f04: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 120f08: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1183500));
  fn1_d2a78(c);
L_120f0c:;
  /* 120f0c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 120f10: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1183508));
  fn1_9cc20(c);
}

void fn1_126fd0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039136208));
  /* 126fd0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 126fd4: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 126fd8: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 126fdc: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 126fe0: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 126fe4: nop  */
  /* nop: no architectural effect here */
  /* 126fe8: adr x8, #0x75c10 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(482320)));
  /* 126fec: sub x9, x2, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 2) - UINT64_C(1)));
  /* 126ff0: str x8, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 8));
  /* 126ff4: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 126ff8: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 126ffc: ldr x8, [x8, #0xc78] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3192))));
  /* 127000: strb wzr, [x0, #0x18] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(24)), ARC_W_R(c, 31));
  /* 127004: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 127008: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 12700c: stp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 127010: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 127014: ldr x9, [x1, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* 127018: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 12701c: csinc x1, x9, x1, ne */
  ARC_X_W(c, 1, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 1)) + 1)));
  /* 127020: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 127024: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 127028: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1208364));
  fn1_1441e0(c);
  /* 12702c: str x0, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 0));
  /* 127030: cbz x0, #0x127048 */
  if ((ARC_X_R(c, 0)) == 0) goto L_127048;
  /* 127034: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 127038: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12703c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 127040: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 127044: ret  */
  return;
L_127048:;
  /* 127048: adrp x0, #0x51000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(331776)));
  /* 12704c: add x0, x0, #0x435 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1077)));
  /* 127050: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 127054: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 127058: add x20, sp, #8 */
  ARC_X_W(c, 20, ((c)->sp + UINT64_C(8)));
  /* 12705c: bl #0x142de8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1208416));
  fn1_142de8(c);
  /* 127060: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 127064: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
  /* 127068: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 12706c: csinc x0, x9, x20, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 20)) + 1)));
  /* 127070: bl #0x142c98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1208436));
  fn1_142c98(c);
  /* 127074: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 127078: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 12707c: tbz w8, #0, #0x12709c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12709c;
  /* 127080: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 127084: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 127088: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 12708c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1208464));
  fn1_142608(c);
  /* 127090: b #0x12709c */
  goto L_12709c;
  /* 127094: b #0x127098 */
  goto L_127098;
L_127098:;
  /* 127098: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_12709c:;
  /* 12709c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1270a0: ldr x8, [x8, #0xc70] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3184))));
  /* 1270a4: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 1270a8: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 1270ac: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 1270b0: cbz x0, #0x1270c4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1270c4;
  /* 1270b4: ldrb w8, [x19, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(24))));
  /* 1270b8: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 1270bc: b.ne #0x1270c4 */
  if (ARC_COND(c, 1)) goto L_1270c4;
  /* 1270c0: bl #0x1425a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1208516));
  fn1_1425a8(c);
L_1270c4:;
  /* 1270c4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1270c8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1208524));
  fn1_9cc20(c);
}

void fn1_12979c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039146396));
  /* 12979c: bti c */
  /* bti: no architectural effect here */
  /* 1297a0: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 1297a4: ret  */
  return;
}

void fn1_12aea4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039152292));
  /* 12aea4: bti c */
  /* bti: no architectural effect here */
  /* 12aea8: mov w0, #3 */
  ARC_W_W(c, 0, UINT64_C(3));
  /* 12aeac: str x2, [x4] */
  arc_st64(ARC_X_R(c, 4), ARC_X_R(c, 2));
  /* 12aeb0: ret  */
  return;
}

void fn1_12c5dc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039158236));
  /* 12c5dc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12c5e0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12c5e4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 12c5e8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12c5ec: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12c5f0: bl #0x1441b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1230324));
  fn1_1441b0(c);
  /* 12c5f4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12c5f8: mov w1, #0x30 */
  ARC_W_W(c, 1, UINT64_C(48));
  /* 12c5fc: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12c600: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12c604: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12c608: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_134998(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039191960));
  /* 134998: bti c */
  /* bti: no architectural effect here */
  /* 13499c: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* 1349a0: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_1350d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039193816));
  /* 1350d8: bti c */
  /* bti: no architectural effect here */
  /* 1350dc: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* 1350e0: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_1380e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039206120));
  /* 1380e8: bti c */
  /* bti: no architectural effect here */
  /* 1380ec: ldr x9, [x1] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 1)));
  /* 1380f0: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* 1380f4: str x9, [x0], #0x10 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* 1380f8: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* 1380fc: ldr x10, [x1, #0x18] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 1) + INT64_C(24))));
  /* 138100: str x10, [x8, x9] */
  arc_st64((ARC_X_R(c, 8) + ARC_X_R(c, 9)), ARC_X_R(c, 10));
  /* 138104: b #0x144558 */
  fn1_144558(c); return;
}

void fn1_13bb88(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039221128));
  /* 13bb88: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13bb8c: stp x30, x19, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 30));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13bb90: asr x8, x1, #0x3f */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 1)) >> ((UINT64_C(63)) & 63))));
  /* 13bb94: asr x9, x3, #0x3f */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 3)) >> ((UINT64_C(63)) & 63))));
  /* 13bb98: mov x4, xzr */
  ARC_X_W(c, 4, ARC_X_R(c, 31));
  /* 13bb9c: eor x10, x8, x0 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) ^ ARC_X_R(c, 0)));
  /* 13bba0: eor x11, x8, x1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) ^ ARC_X_R(c, 1)));
  /* 13bba4: eor x19, x9, x8 */
  ARC_X_W(c, 19, (ARC_X_R(c, 9) ^ ARC_X_R(c, 8)));
  /* 13bba8: adds x0, x10, x1, lsr #63 */
  ARC_X_W(c, 0, arc_add64(c, ARC_X_R(c, 10), ((uint64_t)(ARC_X_R(c, 1)) >> 63), 0));
  /* 13bbac: eor x10, x9, x2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) ^ ARC_X_R(c, 2)));
  /* 13bbb0: cinc x1, x11, hs */
  ARC_X_W(c, 1, (ARC_COND(c, 2) ? (ARC_X_R(c, 11)) + 1 : (ARC_X_R(c, 11))));
  /* 13bbb4: eor x11, x9, x3 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) ^ ARC_X_R(c, 3)));
  /* 13bbb8: adds x2, x10, x3, lsr #63 */
  ARC_X_W(c, 2, arc_add64(c, ARC_X_R(c, 10), ((uint64_t)(ARC_X_R(c, 3)) >> 63), 0));
  /* 13bbbc: cinc x3, x11, hs */
  ARC_X_W(c, 3, (ARC_COND(c, 2) ? (ARC_X_R(c, 11)) + 1 : (ARC_X_R(c, 11))));
  /* 13bbc0: bl #0x13bbe0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1293252));
  fn1_13bbe0(c);
  /* 13bbc4: eor x8, x0, x19 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) ^ ARC_X_R(c, 19)));
  /* 13bbc8: eor x9, x1, x19 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) ^ ARC_X_R(c, 19)));
  /* 13bbcc: subs x0, x8, x19 */
  ARC_X_W(c, 0, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 19)));
  /* 13bbd0: sbc x1, x9, x19 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 9)) + (uint64_t)(((uint64_t)~(uint64_t)(ARC_X_R(c, 19)))) + (c)->cf));
  /* 13bbd4: ldp x30, x19, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 30, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13bbd8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13bbdc: ret  */
  return;
}

void fn1_142488(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248008));
  /* 142488: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 14248c: ldr x17, [x16, #0xeb8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3768))));
  /* 142490: add x16, x16, #0xeb8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3768)));
  /* 142494: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142498: nop  */
  /* nop: no architectural effect here */
  /* 14249c: nop  */
  /* nop: no architectural effect here */
}

void fn1_142a88(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249544));
  /* 142a88: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142a8c: ldr x17, [x16, #0xb8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(184))));
  /* 142a90: add x16, x16, #0xb8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(184)));
  /* 142a94: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142a98: nop  */
  /* nop: no architectural effect here */
  /* 142a9c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143088(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251080));
  /* 143088: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14308c: ldr x17, [x16, #0x2b8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(696))));
  /* 143090: add x16, x16, #0x2b8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(696)));
  /* 143094: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143098: nop  */
  /* nop: no architectural effect here */
  /* 14309c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143688(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252616));
  /* 143688: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14368c: ldr x17, [x16, #0x4b8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1208))));
  /* 143690: add x16, x16, #0x4b8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1208)));
  /* 143694: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143698: nop  */
  /* nop: no architectural effect here */
  /* 14369c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143c88(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254152));
  /* 143c88: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143c8c: ldr x17, [x16, #0x6b8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1720))));
  /* 143c90: add x16, x16, #0x6b8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1720)));
  /* 143c94: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143c98: nop  */
  /* nop: no architectural effect here */
  /* 143c9c: nop  */
  /* nop: no architectural effect here */
}

void fn1_144288(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255688));
  /* 144288: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14428c: ldr x17, [x16, #0x8b8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2232))));
  /* 144290: add x16, x16, #0x8b8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2232)));
  /* 144294: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144298: nop  */
  /* nop: no architectural effect here */
  /* 14429c: nop  */
  /* nop: no architectural effect here */
}

void fn1_144888(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039257224));
  /* 144888: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14488c: ldr x17, [x16, #0xab8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2744))));
  /* 144890: add x16, x16, #0xab8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2744)));
  /* 144894: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144898: nop  */
  /* nop: no architectural effect here */
  /* 14489c: nop  */
  /* nop: no architectural effect here */
}

