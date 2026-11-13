#include "lifted.h"

void fn1_9ce60(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038570592));
  /* 9ce60: bti c */
  /* bti: no architectural effect here */
  /* 9ce64: ldr x16, [x0, #8] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* 9ce68: cbz x16, #0x9ce78 */
  if ((ARC_X_R(c, 16)) == 0) goto L_9ce78;
  /* 9ce6c: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 9ce70: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 9ce74: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_9ce78:;
  /* 9ce78: ret  */
  return;
}

void fn1_a1454(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038588500));
  /* a1454: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a1458: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a145c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a1460: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(660580));
  fn1_142548(c);
  /* a1464: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(660584));
  fn1_142488(c);
}

void fn1_a2794(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038593428));
  /* a2794: bti c */
  /* bti: no architectural effect here */
  /* a2798: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* a279c: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_a87a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038618016));
  /* a87a0: bti c */
  /* bti: no architectural effect here */
  /* a87a4: mov w1, #0x28 */
  ARC_W_W(c, 1, UINT64_C(40));
  /* a87a8: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_af6d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038646480));
  /* af6d0: bti c */
  /* bti: no architectural effect here */
  /* af6d4: mov w1, #0x30 */
  ARC_W_W(c, 1, UINT64_C(48));
  /* af6d8: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b3f8c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038665100));
  /* b3f8c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b3f90: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b3f94: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b3f98: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b3f9c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b3fa0: ldp x8, x10, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b3fa4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b3fa8: ldr w11, [x1, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 1) + INT64_C(32))));
  /* b3fac: ldr x0, [x1] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* b3fb0: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b3fb4: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b3fb8: add w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* b3fbc: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b3fc0: str w11, [x1, #0x20] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(32)), ARC_W_R(c, 11));
  /* b3fc4: b.ls #0xb3ff0 */
  if (ARC_COND(c, 9)) goto L_b3ff0;
  /* b3fc8: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b3fcc: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b3fd0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b3fd4: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b3fd8: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b3fdc: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(737248));
  fn1_142878(c);
  /* b3fe0: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b3fe4: cbz x0, #0xb41a8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b41a8;
  /* b3fe8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b3fec: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b3ff0:;
  /* b3ff0: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b3ff4: mov w9, #0x28 */
  ARC_W_W(c, 9, UINT64_C(40));
  /* b3ff8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b3ffc: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b4000: ldr x21, [x20, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* b4004: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b4008: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b400c: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b4010: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(737300));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b4014: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* b4018: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b401c: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b4020: b.eq #0xb4038 */
  if (ARC_COND(c, 0)) goto L_b4038;
  /* b4024: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b4028: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b402c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b4030: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b4034: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(737336));
  arc_dispatch(c, ARC_X_R(c, 8));
L_b4038:;
  /* b4038: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b403c: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b4040: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b4044: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* b4048: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b404c: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* b4050: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b4054: b.ls #0xb4080 */
  if (ARC_COND(c, 9)) goto L_b4080;
  /* b4058: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b405c: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b4060: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b4064: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b4068: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b406c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(737392));
  fn1_142878(c);
  /* b4070: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b4074: cbz x0, #0xb41ac */
  if ((ARC_X_R(c, 0)) == 0) goto L_b41ac;
  /* b4078: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b407c: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b4080:;
  /* b4080: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b4084: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* b4088: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b408c: ldr x22, [x20, #0x18] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* b4090: ldrb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* b4094: cmp w8, #0x6e */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(110));
  /* b4098: b.ne #0xb4138 */
  if (ARC_COND(c, 1)) goto L_b4138;
  /* b409c: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b40a0: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b40a4: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b40a8: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b40ac: b.ls #0xb40d8 */
  if (ARC_COND(c, 9)) goto L_b40d8;
  /* b40b0: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b40b4: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b40b8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b40bc: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b40c0: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b40c4: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(737480));
  fn1_142878(c);
  /* b40c8: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b40cc: cbz x0, #0xb41b0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b41b0;
  /* b40d0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b40d4: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b40d8:;
  /* b40d8: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b40dc: mov w9, #0x2d */
  ARC_W_W(c, 9, UINT64_C(45));
  /* b40e0: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b40e4: ldr x8, [x20, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* b40e8: subs x21, x8, #1 */
  ARC_X_W(c, 21, arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1)));
  /* b40ec: b.eq #0xb4194 */
  if (ARC_COND(c, 0)) goto L_b4194;
  /* b40f0: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b40f4: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b40f8: ldr x20, [x20, #0x18] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* b40fc: add x10, x8, x21 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* b4100: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b4104: b.ls #0xb412c */
  if (ARC_COND(c, 9)) goto L_b412c;
  /* b4108: lsl x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b410c: add x9, x10, #0x3e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(992)));
  /* b4110: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b4114: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* b4118: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b411c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(737568));
  fn1_142878(c);
  /* b4120: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b4124: cbz x0, #0xb41b8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b41b8;
  /* b4128: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b412c:;
  /* b412c: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b4130: add x1, x20, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(1)));
  /* b4134: b #0xb4180 */
  goto L_b4180;
L_b4138:;
  /* b4138: ldr x21, [x20, #0x20] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* b413c: cbz x21, #0xb4194 */
  if ((ARC_X_R(c, 21)) == 0) goto L_b4194;
  /* b4140: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b4144: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b4148: add x10, x8, x21 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* b414c: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b4150: b.ls #0xb4178 */
  if (ARC_COND(c, 9)) goto L_b4178;
  /* b4154: lsl x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b4158: add x9, x10, #0x3e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(992)));
  /* b415c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b4160: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* b4164: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b4168: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(737644));
  fn1_142878(c);
  /* b416c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b4170: cbz x0, #0xb41b4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b41b4;
  /* b4174: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b4178:;
  /* b4178: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b417c: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
L_b4180:;
  /* b4180: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* b4184: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(737672));
  fn1_1449d8(c);
  /* b4188: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b418c: add x8, x8, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* b4190: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_b4194:;
  /* b4194: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b4198: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* b419c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b41a0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b41a4: ret  */
  return;
L_b41a8:;
  /* b41a8: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(737708));
  fn1_1427b8(c);
L_b41ac:;
  /* b41ac: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(737712));
  fn1_1427b8(c);
L_b41b0:;
  /* b41b0: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(737716));
  fn1_1427b8(c);
L_b41b4:;
  /* b41b4: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(737720));
  fn1_1427b8(c);
L_b41b8:;
  /* b41b8: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(737724));
  fn1_1427b8(c);
}

void fn1_b7a5c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038680156));
  /* b7a5c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b7a60: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b7a64: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b7a68: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b7a6c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b7a70: ldr x21, [x0, #0x18] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* b7a74: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b7a78: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b7a7c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b7a80: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b7a84: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b7a88: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(752268));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b7a8c: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* b7a90: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b7a94: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b7a98: b.eq #0xb7ab0 */
  if (ARC_COND(c, 0)) goto L_b7ab0;
  /* b7a9c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b7aa0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b7aa4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b7aa8: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b7aac: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(752304));
  arc_dispatch(c, ARC_X_R(c, 8));
L_b7ab0:;
  /* b7ab0: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b7ab4: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b7ab8: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b7abc: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b7ac0: b.ls #0xb7aec */
  if (ARC_COND(c, 9)) goto L_b7aec;
  /* b7ac4: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b7ac8: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b7acc: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b7ad0: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b7ad4: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b7ad8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(752348));
  fn1_142878(c);
  /* b7adc: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b7ae0: cbz x0, #0xb7b58 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b7b58;
  /* b7ae4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b7ae8: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b7aec:;
  /* b7aec: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b7af0: mov w9, #0x40 */
  ARC_W_W(c, 9, UINT64_C(64));
  /* b7af4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b7af8: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b7afc: ldr x20, [x20, #0x10] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* b7b00: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b7b04: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b7b08: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b7b0c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(752400));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b7b10: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b7b14: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b7b18: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b7b1c: b.ne #0xb7b34 */
  if (ARC_COND(c, 1)) goto L_b7b34;
  /* b7b20: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b7b24: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b7b28: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b7b2c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b7b30: ret  */
  return;
L_b7b34:;
  /* b7b34: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b7b38: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b7b3c: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b7b40: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b7b44: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b7b48: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b7b4c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b7b50: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b7b54: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_b7b58:;
  /* b7b58: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(752476));
  fn1_1427b8(c);
}

void fn1_ba854(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038691924));
  /* ba854: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ba858: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ba85c: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ba860: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ba864: ldp x9, x10, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* ba868: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* ba86c: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* ba870: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ba874: add x11, x9, #8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(8)));
  /* ba878: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* ba87c: b.ls #0xba8ac */
  if (ARC_COND(c, 9)) goto L_ba8ac;
  /* ba880: lsl x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* ba884: add x9, x9, #0x3e8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1000)));
  /* ba888: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* ba88c: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* ba890: csel x1, x10, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* ba894: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* ba898: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(764060));
  fn1_142878(c);
  /* ba89c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* ba8a0: cbz x0, #0xbaab0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_baab0;
  /* ba8a4: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* ba8a8: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
L_ba8ac:;
  /* ba8ac: mov x10, #0x6f6e */
  ARC_X_W(c, 10, UINT64_C(28526));
  /* ba8b0: movk x10, #0x7865, lsl #16 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(2019885056)));
  /* ba8b4: movk x10, #0x6563, lsl #32 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446462603027808255)) | UINT64_C(111475876167680)));
  /* ba8b8: movk x10, #0x7470, lsl #48 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(281474976710655)) | UINT64_C(8390206105791234048)));
  /* ba8bc: str x10, [x8, x9] */
  arc_st64((ARC_X_R(c, 8) + ARC_X_R(c, 9)), ARC_X_R(c, 10));
  /* ba8c0: ldp x10, x11, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* ba8c4: ldr w12, [x19, #0x20] */
  ARC_W_W(c, 12, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* ba8c8: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* ba8cc: add w12, w12, #1 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) + UINT64_C(1)));
  /* ba8d0: add x9, x10, #9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(9)));
  /* ba8d4: add x8, x10, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + UINT64_C(8)));
  /* ba8d8: str w12, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 12));
  /* ba8dc: cmp x9, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 11));
  /* ba8e0: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* ba8e4: b.ls #0xba910 */
  if (ARC_COND(c, 9)) goto L_ba910;
  /* ba8e8: lsl x8, x11, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 11)) << ((UINT64_C(1)) & 63)));
  /* ba8ec: add x9, x10, #0x3e9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(1001)));
  /* ba8f0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ba8f4: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* ba8f8: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* ba8fc: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(764160));
  fn1_142878(c);
  /* ba900: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* ba904: cbz x0, #0xbaab4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_baab4;
  /* ba908: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* ba90c: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_ba910:;
  /* ba910: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* ba914: mov w9, #0x28 */
  ARC_W_W(c, 9, UINT64_C(40));
  /* ba918: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* ba91c: ldr x20, [x20, #0x10] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* ba920: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* ba924: and w8, w8, #0x3f */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(63)));
  /* ba928: cmp w8, #0x13 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(19));
  /* ba92c: b.hs #0xba96c */
  if (ARC_COND(c, 2)) goto L_ba96c;
  /* ba930: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* ba934: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ba938: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* ba93c: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* ba940: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(764228));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ba944: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* ba948: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* ba94c: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* ba950: b.eq #0xbaa4c */
  if (ARC_COND(c, 0)) goto L_baa4c;
  /* ba954: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* ba958: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ba95c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* ba960: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* ba964: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(764264));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ba968: b #0xbaa4c */
  goto L_baa4c;
L_ba96c:;
  /* ba96c: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* ba970: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* ba974: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* ba978: add w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* ba97c: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* ba980: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* ba984: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* ba988: b.ls #0xba9b4 */
  if (ARC_COND(c, 9)) goto L_ba9b4;
  /* ba98c: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* ba990: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* ba994: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* ba998: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* ba99c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* ba9a0: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(764324));
  fn1_142878(c);
  /* ba9a4: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* ba9a8: cbz x0, #0xbaabc */
  if ((ARC_X_R(c, 0)) == 0) goto L_baabc;
  /* ba9ac: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* ba9b0: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_ba9b4:;
  /* ba9b4: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* ba9b8: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* ba9bc: mov w10, #0x28 */
  ARC_W_W(c, 10, UINT64_C(40));
  /* ba9c0: strb w10, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 10));
  /* ba9c4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ba9c8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* ba9cc: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* ba9d0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(764372));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ba9d4: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* ba9d8: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* ba9dc: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* ba9e0: b.eq #0xba9f8 */
  if (ARC_COND(c, 0)) goto L_ba9f8;
  /* ba9e4: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* ba9e8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ba9ec: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* ba9f0: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* ba9f4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(764408));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ba9f8:;
  /* ba9f8: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* ba9fc: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* baa00: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* baa04: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* baa08: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* baa0c: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* baa10: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* baa14: b.ls #0xbaa40 */
  if (ARC_COND(c, 9)) goto L_baa40;
  /* baa18: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* baa1c: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* baa20: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* baa24: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* baa28: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* baa2c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(764464));
  fn1_142878(c);
  /* baa30: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* baa34: cbz x0, #0xbaac0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_baac0;
  /* baa38: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* baa3c: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_baa40:;
  /* baa40: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* baa44: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* baa48: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
L_baa4c:;
  /* baa4c: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* baa50: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* baa54: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* baa58: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* baa5c: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* baa60: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* baa64: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* baa68: b.ls #0xbaa94 */
  if (ARC_COND(c, 9)) goto L_baa94;
  /* baa6c: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* baa70: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* baa74: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* baa78: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* baa7c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* baa80: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(764548));
  fn1_142878(c);
  /* baa84: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* baa88: cbz x0, #0xbaab8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_baab8;
  /* baa8c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* baa90: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_baa94:;
  /* baa94: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* baa98: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* baa9c: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* baaa0: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* baaa4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* baaa8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* baaac: ret  */
  return;
L_baab0:;
  /* baab0: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(764596));
  fn1_1427b8(c);
L_baab4:;
  /* baab4: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(764600));
  fn1_1427b8(c);
L_baab8:;
  /* baab8: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(764604));
  fn1_1427b8(c);
L_baabc:;
  /* baabc: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(764608));
  fn1_1427b8(c);
L_baac0:;
  /* baac0: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(764612));
  fn1_1427b8(c);
}

void fn1_bd8b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038704304));
  /* bd8b0: bti c */
  /* bti: no architectural effect here */
  /* bd8b4: b #0x1425a8 */
  fn1_1425a8(c); return;
}

void fn1_cd040(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038767680));
  /* cd040: bti c */
  /* bti: no architectural effect here */
  /* cd044: sub x9, x1, x0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* cd048: mov w8, #0x7e */
  ARC_W_W(c, 8, UINT64_C(126));
  /* cd04c: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* cd050: asr x9, x9, #2 */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(2)) & 63))));
  /* cd054: clz x9, x9 */
  ARC_X_W(c, 9, arc_clz64(ARC_X_R(c, 9)));
  /* cd058: sub x2, x8, x9, lsl #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) - ((uint64_t)(ARC_X_R(c, 9)) << 1)));
  /* cd05c: b #0xcd060 */
  fn1_cd060(c); return;
}

void fn1_d7508(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038809864));
  /* d7508: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d750c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d7510: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* d7514: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d7518: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* d751c: ldr x21, [x0] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 0)));
  /* d7520: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* d7524: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d7528: cmp x21, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* d752c: b.eq #0xd75a8 */
  if (ARC_COND(c, 0)) goto L_d75a8;
  /* d7530: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* d7534: cbz x8, #0xd7548 */
  if ((ARC_X_R(c, 8)) == 0) goto L_d7548;
  /* d7538: sub x1, x8, #0x78 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) - UINT64_C(120)));
  /* d753c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d7540: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(881988));
  fn1_bd950(c);
  /* d7544: ldr x21, [x19] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 19)));
L_d7548:;
  /* d7548: cbz x21, #0xd75a0 */
  if ((ARC_X_R(c, 21)) == 0) goto L_d75a0;
  /* d754c: sub x1, x21, #0x78 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) - UINT64_C(120)));
  /* d7550: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* d7554: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(882008));
  fn1_bd950(c);
  /* d7558: cmp x0, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(1));
  /* d755c: b.ne #0xd75a0 */
  if (ARC_COND(c, 1)) goto L_d75a0;
  /* d7560: ldur x8, [x21, #-0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(-104))));
  /* d7564: cbz x8, #0xd7570 */
  if ((ARC_X_R(c, 8)) == 0) goto L_d7570;
  /* d7568: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* d756c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(882032));
  arc_dispatch(c, ARC_X_R(c, 8));
L_d7570:;
  /* d7570: sub x0, x21, #0x80 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) - UINT64_C(128)));
  /* d7574: nop  */
  /* nop: no architectural effect here */
  /* d7578: adr x8, #0x1576e0 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1406688)));
  /* d757c: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* d7580: b.lo #0xd759c */
  if (ARC_COND(c, 3)) goto L_d759c;
  /* d7584: adrp x8, #0x157000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404928)));
  /* d7588: add x8, x8, #0x8e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2272)));
  /* d758c: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* d7590: b.hs #0xd759c */
  if (ARC_COND(c, 2)) goto L_d759c;
  /* d7594: bl #0xa2664 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(882072));
  fn1_a2664(c);
  /* d7598: b #0xd75a0 */
  goto L_d75a0;
L_d759c:;
  /* d759c: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(882080));
  fn1_142800(c);
L_d75a0:;
  /* d75a0: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* d75a4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_d75a8:;
  /* d75a8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d75ac: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d75b0: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* d75b4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d75b8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d75bc: ret  */
  return;
  /* d75c0: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(882116));
  fn1_a1454(c);
  /* d75c4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(882120));
  fn1_a1454(c);
}

void fn1_db43c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038826044));
  /* db43c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* db440: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* db444: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* db448: add x1, x0, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* db44c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* db450: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(898132));
  fn1_db2e0(c);
  /* db454: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* db458: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* db45c: ret  */
  return;
}

void fn1_de9ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038839788));
  /* de9ec: bti c */
  /* bti: no architectural effect here */
  /* de9f0: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* de9f4: add w9, w3, #0x37 */
  ARC_W_W(c, 9, (ARC_W_R(c, 3) + UINT64_C(55)));
  /* de9f8: and w11, w3, #0x1f */
  ARC_W_W(c, 11, (ARC_W_R(c, 3) & UINT64_C(31)));
  /* de9fc: mov x8, x1 */
  ARC_X_W(c, 8, ARC_X_R(c, 1));
  /* dea00: lsr w12, w9, #5 */
  ARC_W_W(c, 12, ((uint32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(5)) & 31)));
  /* dea04: lsl w9, w2, w3 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 2)) << ((ARC_W_R(c, 3)) & 31)));
  /* dea08: cmp w11, #9 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(9));
  /* dea0c: stp xzr, xzr, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* dea10: sub w10, w12, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 12) - UINT64_C(1)));
  /* dea14: b.lo #0xdea2c */
  if (ARC_COND(c, 3)) goto L_dea2c;
  /* dea18: sub w12, w12, #2 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) - UINT64_C(2)));
  /* dea1c: add x13, sp, #0x10 */
  ARC_X_W(c, 13, ((c)->sp + UINT64_C(16)));
  /* dea20: neg w11, w11 */
  ARC_W_W(c, 11, ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 11))));
  /* dea24: str w9, [x13, w12, uxtw #2] */
  arc_st32((ARC_X_R(c, 13) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 12)))) << 2)), ARC_W_R(c, 9));
  /* dea28: lsr w9, w2, w11 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 2)) >> ((ARC_W_R(c, 11)) & 31)));
L_dea2c:;
  /* dea2c: mov w12, #0xc9ff */
  ARC_W_W(c, 12, UINT64_C(51711));
  /* dea30: add x11, sp, #0x10 */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(16)));
  /* dea34: movk w12, #0x3b9a, lsl #16 */
  ARC_W_W(c, 12, ((ARC_W_R(c, 12) & UINT64_C(18446744069414649855)) | UINT64_C(999948288)));
  /* dea38: str w9, [x11, w10, uxtw #2] */
  arc_st32((ARC_X_R(c, 11) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 10)))) << 2)), ARC_W_R(c, 9));
  /* dea3c: cbz w10, #0xdead8 */
  if ((ARC_W_R(c, 10)) == 0) goto L_dead8;
  /* dea40: mov x14, #0x5a53 */
  ARC_X_W(c, 14, UINT64_C(23123));
  /* dea44: mov w13, #0x4b83 */
  ARC_W_W(c, 13, UINT64_C(19331));
  /* dea48: mov w15, #0x3600 */
  ARC_W_W(c, 15, UINT64_C(13824));
  /* dea4c: movk x14, #0xa09b, lsl #16 */
  ARC_X_W(c, 14, ((ARC_X_R(c, 14) & UINT64_C(18446744069414649855)) | UINT64_C(2694512640)));
  /* dea50: mov x16, xzr */
  ARC_X_W(c, 16, ARC_X_R(c, 31));
  /* dea54: movk w13, #4, lsl #16 */
  ARC_W_W(c, 13, ((ARC_W_R(c, 13) & UINT64_C(18446744069414649855)) | UINT64_C(262144)));
  /* dea58: movk x14, #0xb82f, lsl #32 */
  ARC_X_W(c, 14, ((ARC_X_R(c, 14) & UINT64_C(18446462603027808255)) | UINT64_C(202512002973696)));
  /* dea5c: movk w15, #0xc465, lsl #16 */
  ARC_W_W(c, 15, ((ARC_W_R(c, 15) & UINT64_C(18446744069414649855)) | UINT64_C(3294953472)));
  /* dea60: mov x17, sp */
  ARC_X_W(c, 17, (c)->sp);
  /* dea64: movk x14, #0x44, lsl #48 */
  ARC_X_W(c, 14, ((ARC_X_R(c, 14) & UINT64_C(281474976710655)) | UINT64_C(19140298416324608)));
L_dea68:;
  /* dea68: ldr w2, [x11, w10, uxtw #2] */
  ARC_W_W(c, 2, arc_ld32((ARC_X_R(c, 11) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 10)))) << 2))));
  /* dea6c: sub w1, w10, #1 */
  ARC_W_W(c, 1, (ARC_W_R(c, 10) - UINT64_C(1)));
  /* dea70: lsr w9, w2, #9 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 2)) >> ((UINT64_C(9)) & 31)));
  /* dea74: umull x9, w9, w13 */
  ARC_X_W(c, 9, (((uint64_t)(uint32_t)(ARC_W_R(c, 9))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 13)))));
  /* dea78: lsr x4, x9, #0x27 */
  ARC_X_W(c, 4, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(39)) & 63)));
  /* dea7c: add x9, x11, w1, uxtw #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 1)))) << 2)));
  /* dea80: str w4, [x11, w10, uxtw #2] */
  arc_st32((ARC_X_R(c, 11) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 10)))) << 2)), ARC_W_R(c, 4));
  /* dea84: madd w3, w4, w12, w4 */
  ARC_W_W(c, 3, ((uint32_t)(ARC_W_R(c, 4)) + ((uint32_t)(ARC_W_R(c, 4)) * (uint32_t)(ARC_W_R(c, 12)))));
  /* dea88: mov w4, w10 */
  ARC_W_W(c, 4, ARC_W_R(c, 10));
  /* dea8c: sub w3, w2, w3 */
  ARC_W_W(c, 3, (ARC_W_R(c, 2) - ARC_W_R(c, 3)));
L_dea90:;
  /* dea90: ldr w5, [x9] */
  ARC_W_W(c, 5, arc_ld32(ARC_X_R(c, 9)));
  /* dea94: subs w4, w4, #1 */
  ARC_W_W(c, 4, arc_sub32(c, ARC_W_R(c, 4), UINT64_C(1)));
  /* dea98: orr x3, x5, x3, lsl #32 */
  ARC_X_W(c, 3, (ARC_X_R(c, 5) | ((uint64_t)(ARC_X_R(c, 3)) << 32)));
  /* dea9c: lsr x3, x3, #9 */
  ARC_X_W(c, 3, ((uint64_t)(ARC_X_R(c, 3)) >> ((UINT64_C(9)) & 63)));
  /* deaa0: umulh x3, x3, x14 */
  ARC_X_W(c, 3, arc_umulh(ARC_X_R(c, 3), ARC_X_R(c, 14)));
  /* deaa4: lsr x6, x3, #0xb */
  ARC_X_W(c, 6, ((uint64_t)(ARC_X_R(c, 3)) >> ((UINT64_C(11)) & 63)));
  /* deaa8: madd w3, w6, w15, w5 */
  ARC_W_W(c, 3, ((uint32_t)(ARC_W_R(c, 5)) + ((uint32_t)(ARC_W_R(c, 6)) * (uint32_t)(ARC_W_R(c, 15)))));
  /* deaac: str w6, [x9], #0xfffffffffffffffc */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(-4));
    arc_st32(_a, ARC_W_R(c, 6));
  }
  /* deab0: b.ne #0xdea90 */
  if (ARC_COND(c, 1)) goto L_dea90;
  /* deab4: add x9, x16, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 16) + UINT64_C(1)));
  /* deab8: cmp w2, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 2), ARC_W_R(c, 12));
  /* deabc: str w3, [x17, x16, lsl #2] */
  arc_st32((ARC_X_R(c, 17) + ((uint64_t)(ARC_X_R(c, 16)) << 2)), ARC_W_R(c, 3));
  /* deac0: csel w10, w10, w1, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 1)));
  /* deac4: mov x16, x9 */
  ARC_X_W(c, 16, ARC_X_R(c, 9));
  /* deac8: b.hi #0xdea68 */
  if (ARC_COND(c, 8)) goto L_dea68;
  /* deacc: mov x16, x9 */
  ARC_X_W(c, 16, ARC_X_R(c, 9));
  /* dead0: cbnz w1, #0xdea68 */
  if ((ARC_W_R(c, 1)) != 0) goto L_dea68;
  /* dead4: b #0xdeadc */
  goto L_deadc;
L_dead8:;
  /* dead8: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
L_deadc:;
  /* deadc: ldr w11, [sp, #0x10] */
  ARC_W_W(c, 11, arc_ld32(((c)->sp + INT64_C(16))));
  /* deae0: cmp w11, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 12));
  /* deae4: b.ls #0xdeaf0 */
  if (ARC_COND(c, 9)) goto L_deaf0;
  /* deae8: mov w12, #0xa */
  ARC_W_W(c, 12, UINT64_C(10));
  /* deaec: b #0xdeb8c */
  goto L_deb8c;
L_deaf0:;
  /* deaf0: mov w10, #0xe0ff */
  ARC_W_W(c, 10, UINT64_C(57599));
  /* deaf4: movk w10, #0x5f5, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(99942400)));
  /* deaf8: cmp w11, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 10));
  /* deafc: b.ls #0xdeb08 */
  if (ARC_COND(c, 9)) goto L_deb08;
  /* deb00: mov w12, #9 */
  ARC_W_W(c, 12, UINT64_C(9));
  /* deb04: b #0xdeb8c */
  goto L_deb8c;
L_deb08:;
  /* deb08: mov w10, #0x967f */
  ARC_W_W(c, 10, UINT64_C(38527));
  /* deb0c: movk w10, #0x98, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(9961472)));
  /* deb10: cmp w11, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 10));
  /* deb14: b.ls #0xdeb20 */
  if (ARC_COND(c, 9)) goto L_deb20;
  /* deb18: mov w12, #8 */
  ARC_W_W(c, 12, UINT64_C(8));
  /* deb1c: b #0xdeb8c */
  goto L_deb8c;
L_deb20:;
  /* deb20: mov w10, #0x423f */
  ARC_W_W(c, 10, UINT64_C(16959));
  /* deb24: movk w10, #0xf, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(983040)));
  /* deb28: cmp w11, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 10));
  /* deb2c: b.ls #0xdeb38 */
  if (ARC_COND(c, 9)) goto L_deb38;
  /* deb30: mov w12, #7 */
  ARC_W_W(c, 12, UINT64_C(7));
  /* deb34: b #0xdeb8c */
  goto L_deb8c;
L_deb38:;
  /* deb38: lsr w10, w11, #5 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 11)) >> ((UINT64_C(5)) & 31)));
  /* deb3c: cmp w10, #0xc34 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(3124));
  /* deb40: b.ls #0xdeb4c */
  if (ARC_COND(c, 9)) goto L_deb4c;
  /* deb44: mov w12, #6 */
  ARC_W_W(c, 12, UINT64_C(6));
  /* deb48: b #0xdeb8c */
  goto L_deb8c;
L_deb4c:;
  /* deb4c: lsr w10, w11, #4 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 11)) >> ((UINT64_C(4)) & 31)));
  /* deb50: cmp w10, #0x270 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(624));
  /* deb54: b.ls #0xdeb60 */
  if (ARC_COND(c, 9)) goto L_deb60;
  /* deb58: mov w12, #5 */
  ARC_W_W(c, 12, UINT64_C(5));
  /* deb5c: b #0xdeb8c */
  goto L_deb8c;
L_deb60:;
  /* deb60: cmp w11, #0x3e7 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(999));
  /* deb64: b.ls #0xdeb70 */
  if (ARC_COND(c, 9)) goto L_deb70;
  /* deb68: mov w12, #4 */
  ARC_W_W(c, 12, UINT64_C(4));
  /* deb6c: b #0xdeb8c */
  goto L_deb8c;
L_deb70:;
  /* deb70: cmp w11, #0x63 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(99));
  /* deb74: b.ls #0xdeb80 */
  if (ARC_COND(c, 9)) goto L_deb80;
  /* deb78: mov w12, #3 */
  ARC_W_W(c, 12, UINT64_C(3));
  /* deb7c: b #0xdeb8c */
  goto L_deb8c;
L_deb80:;
  /* deb80: cmp w11, #9 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(9));
  /* deb84: mov w10, #1 */
  ARC_W_W(c, 10, UINT64_C(1));
  /* deb88: cinc w12, w10, hi */
  ARC_W_W(c, 12, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) + 1 : (ARC_W_R(c, 10))));
L_deb8c:;
  /* deb8c: add w10, w9, w9, lsl #3 */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) + ((uint32_t)(ARC_W_R(c, 9)) << 3)));
  /* deb90: sub x13, x8, x0 */
  ARC_X_W(c, 13, (ARC_X_R(c, 8) - ARC_X_R(c, 0)));
  /* deb94: add w10, w12, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 12) + ARC_W_R(c, 10)));
  /* deb98: cmp x13, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 10));
  /* deb9c: b.ge #0xdeba8 */
  if (ARC_COND(c, 10)) goto L_deba8;
  /* deba0: mov w1, #0x4b */
  ARC_W_W(c, 1, UINT64_C(75));
  /* deba4: b #0xded54 */
  goto L_ded54;
L_deba8:;
  /* deba8: lsr w8, w11, #4 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 11)) >> ((UINT64_C(4)) & 31)));
  /* debac: nop  */
  /* nop: no architectural effect here */
  /* debb0: adr x10, #0x58470 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(361584)));
  /* debb4: cmp w8, #0x271 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(625));
  /* debb8: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
  /* debbc: b.lo #0xdec24 */
  if (ARC_COND(c, 3)) goto L_dec24;
  /* debc0: mov w13, #0xe0ff */
  ARC_W_W(c, 13, UINT64_C(57599));
  /* debc4: add x14, x0, w12, uxtw */
  ARC_X_W(c, 14, (ARC_X_R(c, 0) + ((uint64_t)(uint32_t)(ARC_W_R(c, 12)))));
  /* debc8: mov w15, #0x1759 */
  ARC_W_W(c, 15, UINT64_C(5977));
  /* debcc: mov w17, #0x851f */
  ARC_W_W(c, 17, UINT64_C(34079));
  /* debd0: movk w13, #0x5f5, lsl #16 */
  ARC_W_W(c, 13, ((ARC_W_R(c, 13) & UINT64_C(18446744069414649855)) | UINT64_C(99942400)));
  /* debd4: movk w15, #0xd1b7, lsl #16 */
  ARC_W_W(c, 15, ((ARC_W_R(c, 15) & UINT64_C(18446744069414649855)) | UINT64_C(3518431232)));
  /* debd8: mov w16, #-0x2710 */
  ARC_W_W(c, 16, UINT64_C(18446744073709541616));
  /* debdc: movk w17, #0x51eb, lsl #16 */
  ARC_W_W(c, 17, ((ARC_W_R(c, 17) & UINT64_C(18446744069414649855)) | UINT64_C(1374355456)));
  /* debe0: mov w1, #0x64 */
  ARC_W_W(c, 1, UINT64_C(100));
  /* debe4: mov w2, w11 */
  ARC_W_W(c, 2, ARC_W_R(c, 11));
L_debe8:;
  /* debe8: umull x11, w2, w15 */
  ARC_X_W(c, 11, (((uint64_t)(uint32_t)(ARC_W_R(c, 2))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 15)))));
  /* debec: sub x5, x14, w8, uxtw */
  ARC_X_W(c, 5, (ARC_X_R(c, 14) - ((uint64_t)(uint32_t)(ARC_W_R(c, 8)))));
  /* debf0: cmp w2, w13 */
  (void)arc_sub32(c, ARC_W_R(c, 2), ARC_W_R(c, 13));
  /* debf4: add w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(4)));
  /* debf8: lsr x11, x11, #0x2d */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(45)) & 63)));
  /* debfc: madd w3, w11, w16, w2 */
  ARC_W_W(c, 3, ((uint32_t)(ARC_W_R(c, 2)) + ((uint32_t)(ARC_W_R(c, 11)) * (uint32_t)(ARC_W_R(c, 16)))));
  /* dec00: mov w2, w11 */
  ARC_W_W(c, 2, ARC_W_R(c, 11));
  /* dec04: umull x4, w3, w17 */
  ARC_X_W(c, 4, (((uint64_t)(uint32_t)(ARC_W_R(c, 3))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 17)))));
  /* dec08: lsr x4, x4, #0x25 */
  ARC_X_W(c, 4, ((uint64_t)(ARC_X_R(c, 4)) >> ((UINT64_C(37)) & 63)));
  /* dec0c: msub w3, w4, w1, w3 */
  ARC_W_W(c, 3, ((uint32_t)(ARC_W_R(c, 3)) - ((uint32_t)(ARC_W_R(c, 4)) * (uint32_t)(ARC_W_R(c, 1)))));
  /* dec10: ldrh w3, [x10, w3, uxtw #1] */
  ARC_W_W(c, 3, arc_ld16((ARC_X_R(c, 10) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 3)))) << 1))));
  /* dec14: sturh w3, [x5, #-2] */
  arc_st16((ARC_X_R(c, 5) + INT64_C(-2)), ARC_W_R(c, 3));
  /* dec18: ldrh w3, [x10, x4, lsl #1] */
  ARC_W_W(c, 3, arc_ld16((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 4)) << 1))));
  /* dec1c: sturh w3, [x5, #-4] */
  arc_st16((ARC_X_R(c, 5) + INT64_C(-4)), ARC_W_R(c, 3));
  /* dec20: b.hi #0xdebe8 */
  if (ARC_COND(c, 8)) goto L_debe8;
L_dec24:;
  /* dec24: cmp w11, #0x64 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(100));
  /* dec28: b.lo #0xdec60 */
  if (ARC_COND(c, 3)) goto L_dec60;
  /* dec2c: ubfx w13, w11, #2, #0xe */
  ARC_W_W(c, 13, (((uint32_t)(ARC_W_R(c, 11)) >> 2) & UINT64_C(16383)));
  /* dec30: mov w14, #0x147b */
  ARC_W_W(c, 14, UINT64_C(5243));
  /* dec34: mul w13, w13, w14 */
  ARC_W_W(c, 13, ((uint32_t)(ARC_W_R(c, 13)) * (uint32_t)(ARC_W_R(c, 14))));
  /* dec38: mov w14, #0x64 */
  ARC_W_W(c, 14, UINT64_C(100));
  /* dec3c: lsr w13, w13, #0x11 */
  ARC_W_W(c, 13, ((uint32_t)(ARC_W_R(c, 13)) >> ((UINT64_C(17)) & 31)));
  /* dec40: msub w11, w13, w14, w11 */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 11)) - ((uint32_t)(ARC_W_R(c, 13)) * (uint32_t)(ARC_W_R(c, 14)))));
  /* dec44: add x14, x0, w12, uxtw */
  ARC_X_W(c, 14, (ARC_X_R(c, 0) + ((uint64_t)(uint32_t)(ARC_W_R(c, 12)))));
  /* dec48: sub x14, x14, w8, uxtw */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - ((uint64_t)(uint32_t)(ARC_W_R(c, 8)))));
  /* dec4c: orr w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(2)));
  /* dec50: and x11, x11, #0xffff */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) & UINT64_C(65535)));
  /* dec54: ldrh w11, [x10, x11, lsl #1] */
  ARC_W_W(c, 11, arc_ld16((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 11)) << 1))));
  /* dec58: sturh w11, [x14, #-2] */
  arc_st16((ARC_X_R(c, 14) + INT64_C(-2)), ARC_W_R(c, 11));
  /* dec5c: mov w11, w13 */
  ARC_W_W(c, 11, ARC_W_R(c, 13));
L_dec60:;
  /* dec60: cmp w11, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(10));
  /* dec64: b.lo #0xdec80 */
  if (ARC_COND(c, 3)) goto L_dec80;
  /* dec68: mov w12, w12 */
  ARC_W_W(c, 12, ARC_W_R(c, 12));
  /* dec6c: ldrh w11, [x10, w11, uxtw #1] */
  ARC_W_W(c, 11, arc_ld16((ARC_X_R(c, 10) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 11)))) << 1))));
  /* dec70: add x13, x0, x12 */
  ARC_X_W(c, 13, (ARC_X_R(c, 0) + ARC_X_R(c, 12)));
  /* dec74: sub x8, x13, w8, uxtw */
  ARC_X_W(c, 8, (ARC_X_R(c, 13) - ((uint64_t)(uint32_t)(ARC_W_R(c, 8)))));
  /* dec78: sturh w11, [x8, #-2] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(-2)), ARC_W_R(c, 11));
  /* dec7c: b #0xdec8c */
  goto L_dec8c;
L_dec80:;
  /* dec80: orr w8, w11, #0x30 */
  ARC_W_W(c, 8, (ARC_W_R(c, 11) | UINT64_C(48)));
  /* dec84: mov w12, w12 */
  ARC_W_W(c, 12, ARC_W_R(c, 12));
  /* dec88: strb w8, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 8));
L_dec8c:;
  /* dec8c: cmp w9, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(1));
  /* dec90: add x8, x0, x12 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 12)));
  /* dec94: b.lt #0xded50 */
  if (ARC_COND(c, 11)) goto L_ded50;
  /* dec98: mov x11, sp */
  ARC_X_W(c, 11, (c)->sp);
  /* dec9c: mov w13, w9 */
  ARC_W_W(c, 13, ARC_W_R(c, 9));
  /* deca0: mov w15, #0x851f */
  ARC_W_W(c, 15, UINT64_C(34079));
  /* deca4: add x14, x11, w9, uxtw #2 */
  ARC_X_W(c, 14, (ARC_X_R(c, 11) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 9)))) << 2)));
  /* deca8: mov w11, #0x1759 */
  ARC_W_W(c, 11, UINT64_C(5977));
  /* decac: mov w17, #0x3b89 */
  ARC_W_W(c, 17, UINT64_C(15241));
  /* decb0: mov x9, #0x3030303030303030 */
  ARC_X_W(c, 9, UINT64_C(3472328296227680304));
  /* decb4: movk w11, #0xd1b7, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(3518431232)));
  /* decb8: mov w12, #-0x2710 */
  ARC_W_W(c, 12, UINT64_C(18446744073709541616));
  /* decbc: add x13, x13, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(1)));
  /* decc0: sub x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(4)));
  /* decc4: movk w15, #0x51eb, lsl #16 */
  ARC_W_W(c, 15, ((ARC_W_R(c, 15) & UINT64_C(18446744069414649855)) | UINT64_C(1374355456)));
  /* decc8: mov w16, #0x64 */
  ARC_W_W(c, 16, UINT64_C(100));
  /* deccc: movk w17, #0x55e6, lsl #16 */
  ARC_W_W(c, 17, ((ARC_W_R(c, 17) & UINT64_C(18446744069414649855)) | UINT64_C(1441136640)));
  /* decd0: b #0xdecec */
  goto L_decec;
L_decd4:;
  /* decd4: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* decd8: strb w9, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 9));
L_decdc:;
  /* decdc: sub x13, x13, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(1)));
  /* dece0: add x8, x8, #9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(9)));
  /* dece4: cmp x13, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(1));
  /* dece8: b.ls #0xded50 */
  if (ARC_COND(c, 9)) goto L_ded50;
L_decec:;
  /* decec: ldr w0, [x14], #0xfffffffffffffffc */
  { const uint64_t _a = ARC_X_R(c, 14);
    ARC_X_W(c, 14, ARC_X_R(c, 14) + INT64_C(-4));
    ARC_W_W(c, 0, arc_ld32(_a));
  }
  /* decf0: cbz w0, #0xdecd4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_decd4;
  /* decf4: umull x1, w0, w11 */
  ARC_X_W(c, 1, (((uint64_t)(uint32_t)(ARC_W_R(c, 0))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 11)))));
  /* decf8: lsr x1, x1, #0x2d */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 1)) >> ((UINT64_C(45)) & 63)));
  /* decfc: madd w2, w1, w12, w0 */
  ARC_W_W(c, 2, ((uint32_t)(ARC_W_R(c, 0)) + ((uint32_t)(ARC_W_R(c, 1)) * (uint32_t)(ARC_W_R(c, 12)))));
  /* ded00: umull x0, w0, w17 */
  ARC_X_W(c, 0, (((uint64_t)(uint32_t)(ARC_W_R(c, 0))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 17)))));
  /* ded04: umull x3, w2, w15 */
  ARC_X_W(c, 3, (((uint64_t)(uint32_t)(ARC_W_R(c, 2))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 15)))));
  /* ded08: lsr x0, x0, #0x39 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(57)) & 63)));
  /* ded0c: madd w1, w0, w12, w1 */
  ARC_W_W(c, 1, ((uint32_t)(ARC_W_R(c, 1)) + ((uint32_t)(ARC_W_R(c, 0)) * (uint32_t)(ARC_W_R(c, 12)))));
  /* ded10: lsr x3, x3, #0x25 */
  ARC_X_W(c, 3, ((uint64_t)(ARC_X_R(c, 3)) >> ((UINT64_C(37)) & 63)));
  /* ded14: add w0, w0, #0x30 */
  ARC_W_W(c, 0, (ARC_W_R(c, 0) + UINT64_C(48)));
  /* ded18: msub w2, w3, w16, w2 */
  ARC_W_W(c, 2, ((uint32_t)(ARC_W_R(c, 2)) - ((uint32_t)(ARC_W_R(c, 3)) * (uint32_t)(ARC_W_R(c, 16)))));
  /* ded1c: umull x4, w1, w15 */
  ARC_X_W(c, 4, (((uint64_t)(uint32_t)(ARC_W_R(c, 1))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 15)))));
  /* ded20: ldrh w2, [x10, w2, uxtw #1] */
  ARC_W_W(c, 2, arc_ld16((ARC_X_R(c, 10) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 2)))) << 1))));
  /* ded24: lsr x4, x4, #0x25 */
  ARC_X_W(c, 4, ((uint64_t)(ARC_X_R(c, 4)) >> ((UINT64_C(37)) & 63)));
  /* ded28: sturh w2, [x8, #7] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(7)), ARC_W_R(c, 2));
  /* ded2c: msub w1, w4, w16, w1 */
  ARC_W_W(c, 1, ((uint32_t)(ARC_W_R(c, 1)) - ((uint32_t)(ARC_W_R(c, 4)) * (uint32_t)(ARC_W_R(c, 16)))));
  /* ded30: ldrh w2, [x10, x3, lsl #1] */
  ARC_W_W(c, 2, arc_ld16((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 3)) << 1))));
  /* ded34: sturh w2, [x8, #5] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(5)), ARC_W_R(c, 2));
  /* ded38: ldrh w1, [x10, w1, uxtw #1] */
  ARC_W_W(c, 1, arc_ld16((ARC_X_R(c, 10) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 1)))) << 1))));
  /* ded3c: sturh w1, [x8, #3] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(3)), ARC_W_R(c, 1));
  /* ded40: ldrh w1, [x10, x4, lsl #1] */
  ARC_W_W(c, 1, arc_ld16((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 4)) << 1))));
  /* ded44: strb w0, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 0));
  /* ded48: sturh w1, [x8, #1] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(1)), ARC_W_R(c, 1));
  /* ded4c: b #0xdecdc */
  goto L_decdc;
L_ded50:;
  /* ded50: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
L_ded54:;
  /* ded54: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* ded58: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* ded5c: ret  */
  return;
}

void fn1_e1f80(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038853504));
  /* e1f80: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e1f84: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e1f88: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e1f8c: nop  */
  /* nop: no architectural effect here */
  /* e1f90: adr x0, #0x51baa */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(334762)));
  /* e1f94: bl #0xda038 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(925592));
  fn1_da038(c);
}

void fn1_e4c24(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038864932));
  /* e4c24: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e4c28: sub sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(144)));
  /* e4c2c: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e4c30: stp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e4c34: stp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e4c38: stp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e4c3c: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* e4c40: mov w8, #0xa */
  ARC_W_W(c, 8, UINT64_C(10));
  /* e4c44: mov w22, #0x7473 */
  ARC_W_W(c, 22, UINT64_C(29811));
  /* e4c48: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e4c4c: strb w8, [sp, #0x18] */
  arc_st8(((c)->sp + INT64_C(24)), ARC_W_R(c, 8));
  /* e4c50: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e4c54: movk w22, #0x6c6f, lsl #16 */
  ARC_W_W(c, 22, ((ARC_W_R(c, 22) & UINT64_C(18446744069414649855)) | UINT64_C(1819213824)));
  /* e4c58: mov w23, #0x64 */
  ARC_W_W(c, 23, UINT64_C(100));
  /* e4c5c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* e4c60: stur w22, [sp, #0x19] */
  arc_st32(((c)->sp + INT64_C(25)), ARC_W_R(c, 22));
  /* e4c64: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e4c68: sturh w23, [sp, #0x1d] */
  arc_st16(((c)->sp + INT64_C(29)), ARC_W_R(c, 23));
  /* e4c6c: stur xzr, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), ARC_X_R(c, 31));
  /* e4c70: csinc x20, x9, x0, ne */
  ARC_X_W(c, 20, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 0)) + 1)));
  /* e4c74: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(937080));
  fn1_142a58(c);
  /* e4c78: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e4c7c: ldr w24, [x0] */
  ARC_W_W(c, 24, arc_ld32(ARC_X_R(c, 0)));
  /* e4c80: str wzr, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 31));
  /* e4c84: sub x1, x29, #0x20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* e4c88: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e4c8c: bl #0x142f08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(937104));
  fn1_142f08(c);
  /* e4c90: ldr w8, [x21] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 21)));
  /* e4c94: str w24, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 24));
  /* e4c98: cmp w8, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(34));
  /* e4c9c: b.eq #0xe4ce0 */
  if (ARC_COND(c, 0)) goto L_e4ce0;
  /* e4ca0: ldur x8, [x29, #-0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))));
  /* e4ca4: subs x8, x8, x20 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20)));
  /* e4ca8: b.eq #0xe4d18 */
  if (ARC_COND(c, 0)) goto L_e4d18;
  /* e4cac: str q0, [sp] */
  arc_st64((c)->sp, (c)->q[0].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[0].u64[1]);
  /* e4cb0: cbz x19, #0xe4cb8 */
  if ((ARC_X_R(c, 19)) == 0) goto L_e4cb8;
  /* e4cb4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_e4cb8:;
  /* e4cb8: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e4cbc: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(937152));
  fn1_142e00(c);
  /* e4cc0: ldr q0, [sp] */
  arc_q_w(c, 0, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* e4cc4: ldp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e4cc8: ldp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e4ccc: ldp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e4cd0: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e4cd4: add sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(144)));
  /* e4cd8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e4cdc: ret  */
  return;
L_e4ce0:;
  /* e4ce0: mov w8, #0x26 */
  ARC_W_W(c, 8, UINT64_C(38));
  /* e4ce4: stur xzr, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 31));
  /* e4ce8: sturb w8, [x29, #-0x18] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-24)), ARC_W_R(c, 8));
  /* e4cec: adrp x8, #0x51000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(331776)));
  /* e4cf0: add x8, x8, #0xa7d */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2685)));
  /* e4cf4: ldr x9, [x8] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 8)));
  /* e4cf8: ldur x8, [x8, #6] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(6))));
  /* e4cfc: stur w22, [x29, #-0x17] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-23)), ARC_W_R(c, 22));
  /* e4d00: sturb w23, [x29, #-0x13] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-19)), ARC_W_R(c, 23));
  /* e4d04: stur x9, [x29, #-0x12] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-18)), ARC_X_R(c, 9));
  /* e4d08: sub x9, x29, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e4d0c: stur x8, [x29, #-0xc] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-12)), ARC_X_R(c, 8));
  /* e4d10: orr x0, x9, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* e4d14: bl #0xda038 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(937240));
  fn1_da038(c);
L_e4d18:;
  /* e4d18: mov w9, #0x7473 */
  ARC_W_W(c, 9, UINT64_C(29811));
  /* e4d1c: mov w8, #0x28 */
  ARC_W_W(c, 8, UINT64_C(40));
  /* e4d20: stur xzr, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 31));
  /* e4d24: movk w9, #0x6c6f, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1819213824)));
  /* e4d28: sturb w8, [x29, #-0x18] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-24)), ARC_W_R(c, 8));
  /* e4d2c: mov w8, #0x64 */
  ARC_W_W(c, 8, UINT64_C(100));
  /* e4d30: stur w9, [x29, #-0x17] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-23)), ARC_W_R(c, 9));
  /* e4d34: adrp x9, #0x50000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(327680)));
  /* e4d38: add x9, x9, #0x1dd */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(477)));
  /* e4d3c: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* e4d40: sturb w8, [x29, #-0x13] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-19)), ARC_W_R(c, 8));
  /* e4d44: ldur x8, [x9, #7] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(7))));
  /* e4d48: sub x9, x29, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e4d4c: stur x10, [x29, #-0x12] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-18)), ARC_X_R(c, 10));
  /* e4d50: stur x8, [x29, #-0xb] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-11)), ARC_X_R(c, 8));
  /* e4d54: orr x0, x9, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* e4d58: bl #0xe78a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(937308));
  fn1_e78a0(c);
  /* e4d5c: b #0xe4d60 */
  goto L_e4d60;
L_e4d60:;
  /* e4d60: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e4d64: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e4d68: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(937324));
  fn1_142e00(c);
  /* e4d6c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e4d70: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(937332));
  fn1_142e00(c);
  /* e4d74: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e4d78: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(937340));
  fn1_9cc20(c);
}

void fn1_e8f28(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038882088));
  /* e8f28: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e8f2c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e8f30: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* e8f34: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e8f38: mov x8, #0x2d69 */
  ARC_X_W(c, 8, UINT64_C(11625));
  /* e8f3c: lsl w9, w0, #3 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 0)) << ((UINT64_C(3)) & 31)));
  /* e8f40: lsr x10, x0, #0x20 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(32)) & 63)));
  /* e8f44: movk x8, #0xeb38, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(3946315776)));
  /* e8f48: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* e8f4c: movk x8, #0xea08, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(257320080637952)));
  /* e8f50: add x9, x9, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(8)));
  /* e8f54: movk x8, #0x9ddf, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(11375811183761162240)));
  /* e8f58: eor x9, x9, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) ^ ARC_X_R(c, 10)));
  /* e8f5c: mul x9, x9, x8 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 8))));
  /* e8f60: eor x10, x10, x9, lsr #47 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) ^ ((uint64_t)(ARC_X_R(c, 9)) >> 47)));
  /* e8f64: eor x9, x10, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) ^ ARC_X_R(c, 9)));
  /* e8f68: mul x8, x9, x8 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 8))));
  /* e8f6c: lsr x9, x8, #0x2f */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(47)) & 63)));
  /* e8f70: eor w8, w9, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) ^ ARC_W_R(c, 8)));
  /* e8f74: mov w9, #0x69 */
  ARC_W_W(c, 9, UINT64_C(105));
  /* e8f78: mul w8, w8, w9 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 9))));
  /* e8f7c: nop  */
  /* nop: no architectural effect here */
  /* e8f80: adr x9, #0x159240 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1413696)));
  /* e8f84: and x8, x8, #0xff */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(255)));
  /* e8f88: add x19, x9, x8, lsl #6 */
  ARC_X_W(c, 19, (ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 6)));
  /* e8f8c: add x1, x19, #4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* e8f90: bl #0xe8e50 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(954260));
  fn1_e8e50(c);
  /* e8f94: ldar w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* e8f98: cbz w8, #0xe8fbc */
  if ((ARC_W_R(c, 8)) == 0) goto L_e8fbc;
  /* e8f9c: add x1, x19, #4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* e8fa0: mov w0, #0x62 */
  ARC_W_W(c, 0, UINT64_C(98));
  /* e8fa4: mov w2, #0x81 */
  ARC_W_W(c, 2, UINT64_C(129));
  /* e8fa8: mov w3, #0x7fffffff */
  ARC_W_W(c, 3, UINT64_C(2147483647));
  /* e8fac: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* e8fb0: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* e8fb4: mov w6, wzr */
  ARC_W_W(c, 6, ARC_W_R(c, 31));
  /* e8fb8: bl #0x142500 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(954300));
  fn1_142500(c);
L_e8fbc:;
  /* e8fbc: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* e8fc0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e8fc4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e8fc8: ret  */
  return;
  /* e8fcc: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(954320));
  fn1_a1454(c);
}

void fn1_eafe8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038890472));
  /* eafe8: bti c */
  /* bti: no architectural effect here */
  /* eafec: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* eaff0: str xzr, [x0, #0x60] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(96)), ARC_X_R(c, 31));
  /* eaff4: stp q0, q0, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* eaff8: stp q0, q0, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* eaffc: stp q0, q0, [x0, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(64));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* eb000: ret  */
  return;
}

void fn1_ecf4c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038898508));
  /* ecf4c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ecf50: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ecf54: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* ecf58: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ecf5c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ecf60: bl #0x1435c8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(970596));
  fn1_1435c8(c);
  /* ecf64: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ecf68: mov w1, #0x98 */
  ARC_W_W(c, 1, UINT64_C(152));
  /* ecf6c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* ecf70: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ecf74: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ecf78: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_ef4ac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038908076));
  /* ef4ac: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ef4b0: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* ef4b4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ef4b8: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ef4bc: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ef4c0: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* ef4c4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ef4c8: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* ef4cc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* ef4d0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* ef4d4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* ef4d8: stur wzr, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 31));
  /* ef4dc: bl #0x1435f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(980192));
  fn1_1435f8(c);
  /* ef4e0: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* ef4e4: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* ef4e8: b.ne #0xef5b0 */
  if (ARC_COND(c, 1)) goto L_ef5b0;
  /* ef4ec: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ef4f0: nop  */
  /* nop: no architectural effect here */
  /* ef4f4: adr x22, #0x15dc40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432640)));
  /* ef4f8: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ef4fc: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ef500: ldr x20, [x8, #0x30] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* ef504: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* ef508: str x20, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 20));
  /* ef50c: b.eq #0xef51c */
  if (ARC_COND(c, 0)) goto L_ef51c;
  /* ef510: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* ef514: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ef518: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(980252));
  fn1_db2e0(c);
L_ef51c:;
  /* ef51c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* ef520: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* ef524: ldr x1, [x1, #0xb48] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2888))));
  /* ef528: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(980268));
  fn1_143748(c);
  /* ef52c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ef530: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* ef534: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ef538: add x3, x19, x8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ef53c: ldr x8, [x9, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(96))));
  /* ef540: ldr x1, [x3, #0x28] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 3) + INT64_C(40))));
  /* ef544: sub x4, x29, #4 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* ef548: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* ef54c: mov x5, x21 */
  ARC_X_W(c, 5, ARC_X_R(c, 21));
  /* ef550: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(980308));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ef554: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* ef558: b.eq #0xef57c */
  if (ARC_COND(c, 0)) goto L_ef57c;
  /* ef55c: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* ef560: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ef564: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(980328));
  fn1_bd950(c);
  /* ef568: cbnz x0, #0xef57c */
  if ((ARC_X_R(c, 0)) != 0) goto L_ef57c;
  /* ef56c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* ef570: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ef574: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ef578: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(980348));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ef57c:;
  /* ef57c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ef580: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* ef584: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ef588: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ef58c: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* ef590: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* ef594: ldp w11, w9, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* ef598: orr w10, w11, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* ef59c: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* ef5a0: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* ef5a4: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* ef5a8: str w10, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 10));
  /* ef5ac: b.ne #0xef5cc */
  if (ARC_COND(c, 1)) goto L_ef5cc;
L_ef5b0:;
  /* ef5b0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ef5b4: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ef5b8: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ef5bc: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ef5c0: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* ef5c4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ef5c8: ret  */
  return;
L_ef5cc:;
  /* ef5cc: nop  */
  /* nop: no architectural effect here */
  /* ef5d0: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* ef5d4: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(980440));
  fn1_ec720(c);
  /* ef5d8: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* ef5dc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ef5e0: b.eq #0xef604 */
  if (ARC_COND(c, 0)) goto L_ef604;
  /* ef5e4: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* ef5e8: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ef5ec: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(980464));
  fn1_bd950(c);
  /* ef5f0: cbnz x0, #0xef604 */
  if ((ARC_X_R(c, 0)) != 0) goto L_ef604;
  /* ef5f4: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* ef5f8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ef5fc: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ef600: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(980484));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ef604:;
  /* ef604: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ef608: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(980492));
  fn1_142548(c);
  /* ef60c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ef610: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* ef614: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ef618: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* ef61c: stur w10, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 10));
  /* ef620: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* ef624: ldr w11, [x9, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* ef628: orr w11, w11, w10 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* ef62c: str w11, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 11));
  /* ef630: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ef634: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ef638: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* ef63c: tbnz w8, #0, #0xef648 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_ef648;
  /* ef640: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(980548));
  fn1_142980(c);
  /* ef644: b #0xef57c */
  goto L_ef57c;
L_ef648:;
  /* ef648: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(980556));
  fn1_1429b0(c);
  /* ef64c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ef650: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(980564));
  fn1_142980(c);
  /* ef654: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ef658: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(980572));
  fn1_9cc20(c);
  /* ef65c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(980576));
  fn1_a1454(c);
}

void fn1_f3970(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038925680));
  /* f3970: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f3974: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f3978: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* f397c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f3980: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f3984: bl #0x143640 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(997768));
  fn1_143640(c);
  /* f3988: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f398c: mov w1, #0x98 */
  ARC_W_W(c, 1, UINT64_C(152));
  /* f3990: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f3994: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f3998: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f399c: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_f5ee0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038935264));
  /* f5ee0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f5ee4: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* f5ee8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f5eec: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f5ef0: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f5ef4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f5ef8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f5efc: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* f5f00: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f5f04: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f5f08: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* f5f0c: stur wzr, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 31));
  /* f5f10: bl #0x143670 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1007380));
  fn1_143670(c);
  /* f5f14: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* f5f18: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f5f1c: b.ne #0xf5fe4 */
  if (ARC_COND(c, 1)) goto L_f5fe4;
  /* f5f20: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f5f24: nop  */
  /* nop: no architectural effect here */
  /* f5f28: adr x22, #0x15dc40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f5f2c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f5f30: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f5f34: ldr x20, [x8, #0x30] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f5f38: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* f5f3c: str x20, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 20));
  /* f5f40: b.eq #0xf5f50 */
  if (ARC_COND(c, 0)) goto L_f5f50;
  /* f5f44: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* f5f48: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f5f4c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1007440));
  fn1_db2e0(c);
L_f5f50:;
  /* f5f50: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f5f54: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f5f58: ldr x1, [x1, #0xb60] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2912))));
  /* f5f5c: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1007456));
  fn1_143748(c);
  /* f5f60: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f5f64: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* f5f68: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f5f6c: add x3, x19, x8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f5f70: ldr x8, [x9, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(96))));
  /* f5f74: ldr x1, [x3, #0x28] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 3) + INT64_C(40))));
  /* f5f78: sub x4, x29, #4 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* f5f7c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* f5f80: mov x5, x21 */
  ARC_X_W(c, 5, ARC_X_R(c, 21));
  /* f5f84: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1007496));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f5f88: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* f5f8c: b.eq #0xf5fb0 */
  if (ARC_COND(c, 0)) goto L_f5fb0;
  /* f5f90: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* f5f94: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f5f98: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1007516));
  fn1_bd950(c);
  /* f5f9c: cbnz x0, #0xf5fb0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f5fb0;
  /* f5fa0: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* f5fa4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f5fa8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f5fac: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1007536));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f5fb0:;
  /* f5fb0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f5fb4: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* f5fb8: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f5fbc: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f5fc0: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f5fc4: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* f5fc8: ldp w11, w9, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* f5fcc: orr w10, w11, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* f5fd0: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* f5fd4: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* f5fd8: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* f5fdc: str w10, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 10));
  /* f5fe0: b.ne #0xf6000 */
  if (ARC_COND(c, 1)) goto L_f6000;
L_f5fe4:;
  /* f5fe4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f5fe8: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f5fec: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f5ff0: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f5ff4: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* f5ff8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f5ffc: ret  */
  return;
L_f6000:;
  /* f6000: nop  */
  /* nop: no architectural effect here */
  /* f6004: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f6008: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1007628));
  fn1_ec720(c);
  /* f600c: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* f6010: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* f6014: b.eq #0xf6038 */
  if (ARC_COND(c, 0)) goto L_f6038;
  /* f6018: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* f601c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f6020: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1007652));
  fn1_bd950(c);
  /* f6024: cbnz x0, #0xf6038 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f6038;
  /* f6028: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* f602c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f6030: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f6034: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1007672));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f6038:;
  /* f6038: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f603c: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1007680));
  fn1_142548(c);
  /* f6040: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f6044: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* f6048: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f604c: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* f6050: stur w10, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 10));
  /* f6054: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f6058: ldr w11, [x9, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f605c: orr w11, w11, w10 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* f6060: str w11, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 11));
  /* f6064: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f6068: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f606c: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f6070: tbnz w8, #0, #0xf607c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_f607c;
  /* f6074: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1007736));
  fn1_142980(c);
  /* f6078: b #0xf5fb0 */
  goto L_f5fb0;
L_f607c:;
  /* f607c: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1007744));
  fn1_1429b0(c);
  /* f6080: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f6084: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1007752));
  fn1_142980(c);
  /* f6088: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f608c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1007760));
  fn1_9cc20(c);
  /* f6090: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1007764));
  fn1_a1454(c);
}

void fn1_fb2fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038956796));
  /* fb2fc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fb300: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fb304: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* fb308: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fb30c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fb310: ldp x11, x8, [x1] */
  { const uint64_t _pa = ARC_X_R(c, 1);
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* fb314: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* fb318: ldp x10, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* fb31c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* fb320: str x8, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 8));
  /* fb324: str x9, [x1, #8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(8)), ARC_X_R(c, 9));
  /* fb328: ldur x8, [x10, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 10) + INT64_C(-24))));
  /* fb32c: ldur x9, [x11, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 11) + INT64_C(-24))));
  /* fb330: add x21, x0, x8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* fb334: add x22, x1, x9 */
  ARC_X_W(c, 22, (ARC_X_R(c, 1) + ARC_X_R(c, 9)));
  /* fb338: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* fb33c: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* fb340: bl #0x143400 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1028932));
  fn1_143400(c);
  /* fb344: ldr x8, [x22, #0x88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(136))));
  /* fb348: ldr x9, [x21, #0x88] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 21) + INT64_C(136))));
  /* fb34c: add x0, x20, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(16)));
  /* fb350: ldr w10, [x22, #0x90] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 22) + INT64_C(144))));
  /* fb354: add x1, x19, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* fb358: str x8, [x21, #0x88] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(136)), ARC_X_R(c, 8));
  /* fb35c: ldr w8, [x21, #0x90] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 21) + INT64_C(144))));
  /* fb360: str x9, [x22, #0x88] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(136)), ARC_X_R(c, 9));
  /* fb364: str w10, [x21, #0x90] */
  arc_st32((ARC_X_R(c, 21) + INT64_C(144)), ARC_W_R(c, 10));
  /* fb368: str w8, [x22, #0x90] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(144)), ARC_W_R(c, 8));
  /* fb36c: bl #0x143580 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1028976));
  fn1_143580(c);
  /* fb370: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fb374: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fb378: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* fb37c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fb380: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fb384: ret  */
  return;
}

void fn1_fea40(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038970944));
  /* fea40: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fea44: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fea48: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fea4c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fea50: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fea54: nop  */
  /* nop: no architectural effect here */
  /* fea58: adr x9, #0x15dc40 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1432640)));
  /* fea5c: ldr x8, [x8, #0xac8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2760))));
  /* fea60: ldr x20, [x0, #8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* fea64: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fea68: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* fea6c: cmp x20, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 9));
  /* fea70: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* fea74: b.eq #0xfea98 */
  if (ARC_COND(c, 0)) goto L_fea98;
  /* fea78: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* fea7c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fea80: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1043076));
  fn1_bd950(c);
  /* fea84: cbnz x0, #0xfea98 */
  if ((ARC_X_R(c, 0)) != 0) goto L_fea98;
  /* fea88: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* fea8c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fea90: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fea94: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1043096));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fea98:;
  /* fea98: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fea9c: mov w1, #0x68 */
  ARC_W_W(c, 1, UINT64_C(104));
  /* feaa0: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* feaa4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* feaa8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* feaac: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_10b568(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039022952));
  /* 10b568: bti c */
  /* bti: no architectural effect here */
  /* 10b56c: ldr w8, [x2, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 2) + INT64_C(8))));
  /* 10b570: mov w9, #0xb0 */
  ARC_W_W(c, 9, UINT64_C(176));
  /* 10b574: and w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & ARC_W_R(c, 9)));
  /* 10b578: cmp w8, #0x20 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(32));
  /* 10b57c: b.eq #0x10b5a4 */
  if (ARC_COND(c, 0)) goto L_10b5a4;
  /* 10b580: cmp w8, #0x10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(16));
  /* 10b584: b.ne #0x10b5d4 */
  if (ARC_COND(c, 1)) goto L_10b5d4;
  /* 10b588: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* 10b58c: cmp w8, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(45));
  /* 10b590: b.eq #0x10b59c */
  if (ARC_COND(c, 0)) goto L_10b59c;
  /* 10b594: cmp w8, #0x2b */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(43));
  /* 10b598: b.ne #0x10b5ac */
  if (ARC_COND(c, 1)) goto L_10b5ac;
L_10b59c:;
  /* 10b59c: add x0, x0, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1)));
  /* 10b5a0: ret  */
  return;
L_10b5a4:;
  /* 10b5a4: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 10b5a8: ret  */
  return;
L_10b5ac:;
  /* 10b5ac: sub x9, x1, x0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* 10b5b0: cmp x9, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(2));
  /* 10b5b4: b.lt #0x10b5d4 */
  if (ARC_COND(c, 11)) goto L_10b5d4;
  /* 10b5b8: cmp w8, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(48));
  /* 10b5bc: b.ne #0x10b5d4 */
  if (ARC_COND(c, 1)) goto L_10b5d4;
  /* 10b5c0: ldrb w8, [x0, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(1))));
  /* 10b5c4: orr w8, w8, #0x20 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(32)));
  /* 10b5c8: cmp w8, #0x78 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(120));
  /* 10b5cc: b.ne #0x10b5d4 */
  if (ARC_COND(c, 1)) goto L_10b5d4;
  /* 10b5d0: add x0, x0, #2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2)));
L_10b5d4:;
  /* 10b5d4: ret  */
  return;
}

void fn1_113564(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039055716));
  /* 113564: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 113568: sub sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(160)));
  /* 11356c: stp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 113570: str x21, [sp, #0x80] */
  arc_st64(((c)->sp + INT64_C(128)), ARC_X_R(c, 21));
  /* 113574: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 113578: add x29, sp, #0x70 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(112)));
  /* 11357c: mov x3, x4 */
  ARC_X_W(c, 3, ARC_X_R(c, 4));
  /* 113580: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 113584: mov w8, #0x25 */
  ARC_W_W(c, 8, UINT64_C(37));
  /* 113588: tst w6, #0xff */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 6) & UINT64_C(255)));
  /* 11358c: strb w8, [x29, #0x1c] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(28)), ARC_W_R(c, 8));
  /* 113590: strb w5, [x29, #0x1d] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(29)), ARC_W_R(c, 5));
  /* 113594: strb w6, [x29, #0x1e] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(30)), ARC_W_R(c, 6));
  /* 113598: strb wzr, [x29, #0x1f] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(31)), ARC_W_R(c, 31));
  /* 11359c: b.eq #0x1135a8 */
  if (ARC_COND(c, 0)) goto L_1135a8;
  /* 1135a0: strb w6, [x29, #0x1d] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(29)), ARC_W_R(c, 6));
  /* 1135a4: strb w5, [x29, #0x1e] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(30)), ARC_W_R(c, 5));
L_1135a8:;
  /* 1135a8: ldr x4, [x0, #0x10] */
  ARC_X_W(c, 4, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1135ac: add x0, sp, #0xc */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(12)));
  /* 1135b0: add x2, x29, #0x1c */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) + UINT64_C(28)));
  /* 1135b4: mov w1, #0x64 */
  ARC_W_W(c, 1, UINT64_C(100));
  /* 1135b8: bl #0x1444b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1127868));
  fn1_1444b0(c);
  /* 1135bc: cbz x0, #0x113614 */
  if ((ARC_X_R(c, 0)) == 0) goto L_113614;
  /* 1135c0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1135c4: add x21, sp, #0xc */
  ARC_X_W(c, 21, ((c)->sp + UINT64_C(12)));
  /* 1135c8: b #0x1135f0 */
  goto L_1135f0;
L_1135cc:;
  /* 1135cc: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1135d0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1135d4: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* 1135d8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1127900));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1135dc: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1135e0: csel x19, xzr, x19, eq */
  ARC_X_W(c, 19, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 19)));
L_1135e4:;
  /* 1135e4: subs x20, x20, #1 */
  ARC_X_W(c, 20, arc_sub64(c, ARC_X_R(c, 20), UINT64_C(1)));
  /* 1135e8: add x21, x21, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* 1135ec: b.eq #0x113614 */
  if (ARC_COND(c, 0)) goto L_113614;
L_1135f0:;
  /* 1135f0: cbz x19, #0x1135e4 */
  if ((ARC_X_R(c, 19)) == 0) goto L_1135e4;
  /* 1135f4: ldp x8, x9, [x19, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(48));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1135f8: ldrb w1, [x21] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 21)));
  /* 1135fc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 113600: b.eq #0x1135cc */
  if (ARC_COND(c, 0)) goto L_1135cc;
  /* 113604: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 113608: str x9, [x19, #0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)), ARC_X_R(c, 9));
  /* 11360c: strb w1, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 1));
  /* 113610: b #0x1135e4 */
  goto L_1135e4;
L_113614:;
  /* 113614: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 113618: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 11361c: ldr x21, [sp, #0x80] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(128))));
  /* 113620: ldp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 113624: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* 113628: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 11362c: ret  */
  return;
}

void fn1_114078(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039058552));
  /* 114078: bti c */
  /* bti: no architectural effect here */
  /* 11407c: mov x9, x0 */
  ARC_X_W(c, 9, ARC_X_R(c, 0));
  /* 114080: ldrb w10, [x9, #0x60]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(96));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(96));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* 114084: tbnz w10, #0, #0x11409c */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_11409c;
  /* 114088: ldr q0, [x9] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 9)), arc_ld64(ARC_X_R(c, 9) + 8));
  /* 11408c: ldr x9, [x9, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(16))));
  /* 114090: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* 114094: str x9, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 9));
  /* 114098: ret  */
  return;
L_11409c:;
  /* 11409c: ldp x2, x1, [x0, #0x68] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(104));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 1140a0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1140a4: b #0xe22b8 */
  fn1_e22b8(c); return;
}

void fn1_11f7dc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039105500));
  /* 11f7dc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 11f7e0: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 11f7e4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 11f7e8: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 11f7ec: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 11f7f0: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 11f7f4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 11f7f8: adrp x23, #0x151000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11f7fc: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 11f800: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11f804: ldr x23, [x23, #0xcb0] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 23) + INT64_C(3248))));
  /* 11f808: ldar x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11f80c: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11f810: b.eq #0x11f8cc */
  if (ARC_COND(c, 0)) goto L_11f8cc;
  /* 11f814: nop  */
  /* nop: no architectural effect here */
  /* 11f818: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11f81c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1177632));
  fn1_142518(c);
  /* 11f820: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11f824: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11f828: b.ne #0x11f854 */
  if (ARC_COND(c, 1)) goto L_11f854;
  /* 11f82c: nop  */
  /* nop: no architectural effect here */
  /* 11f830: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11f834: nop  */
  /* nop: no architectural effect here */
  /* 11f838: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_11f83c:;
  /* 11f83c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11f840: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 11f844: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1177672));
  fn1_142530(c);
  /* 11f848: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11f84c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11f850: b.eq #0x11f83c */
  if (ARC_COND(c, 0)) goto L_11f83c;
L_11f854:;
  /* 11f854: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11f858: cbz x8, #0x11f86c */
  if ((ARC_X_R(c, 8)) == 0) goto L_11f86c;
  /* 11f85c: nop  */
  /* nop: no architectural effect here */
  /* 11f860: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11f864: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1177704));
  fn1_142560(c);
  /* 11f868: b #0x11f8cc */
  goto L_11f8cc;
L_11f86c:;
  /* 11f86c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11f870: str x23, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 23));
  /* 11f874: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11f878: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 11f87c: nop  */
  /* nop: no architectural effect here */
  /* 11f880: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11f884: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1177736));
  fn1_142560(c);
  /* 11f888: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11f88c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11f890: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11f894: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1177752));
  fn1_a2030(c);
  /* 11f898: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11f89c: str w8, [x23, #8] */
  arc_st32((ARC_X_R(c, 23) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11f8a0: nop  */
  /* nop: no architectural effect here */
  /* 11f8a4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11f8a8: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1177772));
  fn1_142518(c);
  /* 11f8ac: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11f8b0: stlr x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 11f8b4: nop  */
  /* nop: no architectural effect here */
  /* 11f8b8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11f8bc: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1177792));
  fn1_142560(c);
  /* 11f8c0: nop  */
  /* nop: no architectural effect here */
  /* 11f8c4: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11f8c8: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1177804));
  fn1_142578(c);
L_11f8cc:;
  /* 11f8cc: ldrsw x8, [x23, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 23) + INT64_C(8)))));
  /* 11f8d0: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 11f8d4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11f8d8: sub x22, x8, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11f8dc: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1177824));
  fn1_db2e0(c);
  /* 11f8e0: mov x21, x20 */
  ARC_X_W(c, 21, ARC_X_R(c, 20));
  /* 11f8e4: ldp x8, x9, [x21, #0x10]! */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11f8e8: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11f8ec: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11f8f0: cmp x10, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 22));
  /* 11f8f4: b.hi #0x11f920 */
  if (ARC_COND(c, 8)) goto L_11f920;
  /* 11f8f8: add x9, x22, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* 11f8fc: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11f900: b.ls #0x11f914 */
  if (ARC_COND(c, 9)) goto L_11f914;
  /* 11f904: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11f908: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1177868));
  fn1_1352bc(c);
  /* 11f90c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11f910: b #0x11f920 */
  goto L_11f920;
L_11f914:;
  /* 11f914: b.hs #0x11f920 */
  if (ARC_COND(c, 2)) goto L_11f920;
  /* 11f918: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11f91c: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11f920:;
  /* 11f920: ldr x20, [x8, x22, lsl #3] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3))));
  /* 11f924: cbz x20, #0x11f948 */
  if ((ARC_X_R(c, 20)) == 0) goto L_11f948;
  /* 11f928: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 11f92c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11f930: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1177908));
  fn1_bd950(c);
  /* 11f934: cbnz x0, #0x11f948 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11f948;
  /* 11f938: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 11f93c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11f940: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11f944: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1177928));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11f948:;
  /* 11f948: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11f94c: str x19, [x8, x22, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3)), ARC_X_R(c, 19));
  /* 11f950: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 11f954: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 11f958: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 11f95c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 11f960: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 11f964: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 11f968: ret  */
  return;
  /* 11f96c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11f970: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 11f974: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11f978: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1177980));
  fn1_bd950(c);
  /* 11f97c: cbnz x0, #0x11f9a4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11f9a4;
  /* 11f980: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11f984: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11f988: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11f98c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1178000));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11f990: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11f994: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1178008));
  fn1_9cc20(c);
  /* 11f998: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11f99c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 11f9a0: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1178020));
  fn1_d2a78(c);
L_11f9a4:;
  /* 11f9a4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11f9a8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1178028));
  fn1_9cc20(c);
}

void fn1_1268d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039134416));
  /* 1268d0: bti c */
  /* bti: no architectural effect here */
  /* 1268d4: cmp w1, #0x80 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(128));
  /* 1268d8: csel w0, w1, w2, lo */
  ARC_W_W(c, 0, (ARC_COND(c, 3) ? (ARC_W_R(c, 1)) : ARC_W_R(c, 2)));
  /* 1268dc: ret  */
  return;
}

void fn1_1290d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039144656));
  /* 1290d0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1290d4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1290d8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1290dc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1290e0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1290e4: bl #0x144030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1216744));
  fn1_144030(c);
  /* 1290e8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1290ec: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* 1290f0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1290f4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1290f8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1290fc: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_12a9f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039151088));
  /* 12a9f0: bti c */
  /* bti: no architectural effect here */
  /* 12a9f4: mov w0, #3 */
  ARC_W_W(c, 0, UINT64_C(3));
  /* 12a9f8: str x2, [x4] */
  arc_st64(ARC_X_R(c, 4), ARC_X_R(c, 2));
  /* 12a9fc: ret  */
  return;
}

void fn1_12bd50(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039156048));
  /* 12bd50: bti c */
  /* bti: no architectural effect here */
  /* 12bd54: mov x9, x0 */
  ARC_X_W(c, 9, ARC_X_R(c, 0));
  /* 12bd58: ldrb w10, [x9, #0x18]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(24));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(24));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* 12bd5c: tbnz w10, #0, #0x12bd74 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_12bd74;
  /* 12bd60: ldr q0, [x9] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 9)), arc_ld64(ARC_X_R(c, 9) + 8));
  /* 12bd64: ldr x9, [x9, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(16))));
  /* 12bd68: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* 12bd6c: str x9, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 9));
  /* 12bd70: ret  */
  return;
L_12bd74:;
  /* 12bd74: ldp x2, x1, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 12bd78: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 12bd7c: b #0xda588 */
  fn1_da588(c); return;
}

void fn1_134690(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039191184));
  /* 134690: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 134694: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 134698: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 13469c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1346a0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1346a4: bl #0x143d78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1263272));
  fn1_143d78(c);
  /* 1346a8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1346ac: mov w1, #0x28 */
  ARC_W_W(c, 1, UINT64_C(40));
  /* 1346b0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1346b4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1346b8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1346bc: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_134cd8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192792));
  /* 134cd8: bti c */
  /* bti: no architectural effect here */
  /* 134cdc: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* 134ce0: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_1376b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039203504));
  /* 1376b0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1376b4: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1376b8: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* 1376bc: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1376c0: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1376c4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1376c8: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1376cc: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 1376d0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1376d4: ldr x8, [x8, #0xaa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2728))));
  /* 1376d8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1376dc: adrp x23, #0x15d000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 1376e0: nop  */
  /* nop: no architectural effect here */
  /* 1376e4: adr x22, #0x15dc40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432640)));
  /* 1376e8: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 1376ec: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 1376f0: nop  */
  /* nop: no architectural effect here */
  /* 1376f4: adr x8, #0x15dd90 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 1376f8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1376fc: tbz w8, #0, #0x13778c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13778c;
L_137700:;
  /* 137700: ldr x8, [x23, #0xd88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 23) + INT64_C(3464))));
  /* 137704: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* 137708: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* 13770c: b.eq #0x13771c */
  if (ARC_COND(c, 0)) goto L_13771c;
  /* 137710: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* 137714: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 137718: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1275676));
  fn1_db2e0(c);
L_13771c:;
  /* 13771c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 137720: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 137724: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* 137728: ldr x8, [x8, #0xe40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3648))));
  /* 13772c: str w9, [x19, #0x40] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(64)), ARC_W_R(c, 9));
  /* 137730: stp xzr, xzr, [x19, #0x50] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 137734: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 137738: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 13773c: mov w8, #0x1000 */
  ARC_W_W(c, 8, UINT64_C(4096));
  /* 137740: stp q0, q0, [x19, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 137744: str q0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* 137748: str x8, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), ARC_X_R(c, 8));
  /* 13774c: cbz x21, #0x137760 */
  if ((ARC_X_R(c, 21)) == 0) goto L_137760;
  /* 137750: cmp x21, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(0));
  /* 137754: mov w8, #0x7fffffff */
  ARC_W_W(c, 8, UINT64_C(2147483647));
  /* 137758: csel x0, x8, x21, lt */
  ARC_X_W(c, 0, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 21)));
  /* 13775c: b #0x137768 */
  goto L_137768;
L_137760:;
  /* 137760: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 137764: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1275752));
  fn1_142860(c);
L_137768:;
  /* 137768: add x8, x20, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + ARC_X_R(c, 0)));
  /* 13776c: stp x20, x20, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* 137770: str x8, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 8));
  /* 137774: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 137778: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 13777c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 137780: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 137784: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 137788: ret  */
  return;
L_13778c:;
  /* 13778c: nop  */
  /* nop: no architectural effect here */
  /* 137790: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 137794: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1275800));
  fn1_1424b8(c);
  /* 137798: cbz w0, #0x137700 */
  if ((ARC_W_R(c, 0)) == 0) goto L_137700;
  /* 13779c: bl #0x143ac0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1275808));
  fn1_143ac0(c);
  /* 1377a0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1377a4: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* 1377a8: str x8, [x23, #0xd88] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(3464)), ARC_X_R(c, 8));
  /* 1377ac: b.eq #0x1377bc */
  if (ARC_COND(c, 0)) goto L_1377bc;
  /* 1377b0: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* 1377b4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1377b8: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1275836));
  fn1_db2e0(c);
L_1377bc:;
  /* 1377bc: nop  */
  /* nop: no architectural effect here */
  /* 1377c0: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 1377c4: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1275848));
  fn1_1424d0(c);
  /* 1377c8: b #0x137700 */
  goto L_137700;
  /* 1377cc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1377d0: nop  */
  /* nop: no architectural effect here */
  /* 1377d4: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 1377d8: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1275868));
  fn1_1424e8(c);
  /* 1377dc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1377e0: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1275876));
  fn1_a1454(c);
}

void fn1_13b074(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039218292));
  /* 13b074: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13b078: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13b07c: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13b080: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 13b084: ldr x19, [x0, #8] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* 13b088: cbz x19, #0x13b09c */
  if ((ARC_X_R(c, 19)) == 0) goto L_13b09c;
  /* 13b08c: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 13b090: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 13b094: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1290392));
  fn1_bd950(c);
  /* 13b098: cbz x0, #0x13b0ac */
  if ((ARC_X_R(c, 0)) == 0) goto L_13b0ac;
L_13b09c:;
  /* 13b09c: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13b0a0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13b0a4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13b0a8: ret  */
  return;
L_13b0ac:;
  /* 13b0ac: mov x20, x19 */
  ARC_X_W(c, 20, ARC_X_R(c, 19));
  /* 13b0b0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13b0b4: ldr x8, [x20], #0x10 */
  { const uint64_t _a = ARC_X_R(c, 20);
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 13b0b8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 13b0bc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1290432));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 13b0c0: ldar x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 13b0c4: cbz x8, #0x13b0d8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_13b0d8;
  /* 13b0c8: add x1, x19, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* 13b0cc: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 13b0d0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1290452));
  fn1_bd950(c);
  /* 13b0d4: cbnz x0, #0x13b09c */
  if ((ARC_X_R(c, 0)) != 0) goto L_13b09c;
L_13b0d8:;
  /* 13b0d8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 13b0dc: ldr x16, [x8, #0x20] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 13b0e0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13b0e4: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13b0e8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13b0ec: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13b0f0: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_14213c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039247164));
  /* 14213c: bti c */
  /* bti: no architectural effect here */
  /* 142140: mov x4, xzr */
  ARC_X_W(c, 4, ARC_X_R(c, 31));
  /* 142144: b #0x13bbe0 */
  fn1_13bbe0(c); return;
}

void fn1_142938(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249208));
  /* 142938: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14293c: ldr x17, [x16, #0x48] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(72))));
  /* 142940: add x16, x16, #0x48 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(72)));
  /* 142944: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142948: nop  */
  /* nop: no architectural effect here */
  /* 14294c: nop  */
  /* nop: no architectural effect here */
}

void fn1_142f38(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250744));
  /* 142f38: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142f3c: ldr x17, [x16, #0x248] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(584))));
  /* 142f40: add x16, x16, #0x248 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(584)));
  /* 142f44: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142f48: nop  */
  /* nop: no architectural effect here */
  /* 142f4c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143538(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252280));
  /* 143538: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14353c: ldr x17, [x16, #0x448] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1096))));
  /* 143540: add x16, x16, #0x448 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1096)));
  /* 143544: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143548: nop  */
  /* nop: no architectural effect here */
  /* 14354c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143b38(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253816));
  /* 143b38: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143b3c: ldr x17, [x16, #0x648] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1608))));
  /* 143b40: add x16, x16, #0x648 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1608)));
  /* 143b44: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143b48: nop  */
  /* nop: no architectural effect here */
  /* 143b4c: nop  */
  /* nop: no architectural effect here */
}

void fn1_144138(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255352));
  /* 144138: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14413c: ldr x17, [x16, #0x848] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2120))));
  /* 144140: add x16, x16, #0x848 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2120)));
  /* 144144: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144148: nop  */
  /* nop: no architectural effect here */
  /* 14414c: nop  */
  /* nop: no architectural effect here */
}

void fn1_144738(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256888));
  /* 144738: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14473c: ldr x17, [x16, #0xa48] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2632))));
  /* 144740: add x16, x16, #0xa48 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2632)));
  /* 144744: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144748: nop  */
  /* nop: no architectural effect here */
  /* 14474c: nop  */
  /* nop: no architectural effect here */
}

