#include "lifted.h"

void fn1_9cdf8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038570488));
  /* 9cdf8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 9cdfc: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 9ce00: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 9ce04: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* 9ce08: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 9ce0c: bl #0x9d11c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(642576));
  fn1_9d11c(c);
  /* 9ce10: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 9ce14: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* 9ce18: csel x0, x8, xzr, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 31)));
  /* 9ce1c: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9ce20: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 9ce24: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 9ce28: ret  */
  return;
}

void fn1_a1370(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038588272));
  /* a1370: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a1374: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a1378: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a137c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a1380: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a1384: nop  */
  /* nop: no architectural effect here */
  /* a1388: adr x0, #0x157658 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1406552)));
  /* a138c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(660368));
  fn1_142518(c);
  /* a1390: cbnz w0, #0xa13d4 */
  if ((ARC_W_R(c, 0)) != 0) goto L_a13d4;
  /* a1394: ldrb w20, [x19, #1] */
  ARC_W_W(c, 20, arc_ld8((ARC_X_R(c, 19) + INT64_C(1))));
  /* a1398: str wzr, [x19, #4] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(4)), ARC_W_R(c, 31));
  /* a139c: strb wzr, [x19, #1] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(1)), ARC_W_R(c, 31));
  /* a13a0: nop  */
  /* nop: no architectural effect here */
  /* a13a4: adr x0, #0x157658 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1406552)));
  /* a13a8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(660396));
  fn1_142560(c);
  /* a13ac: cbnz w0, #0xa13e0 */
  if ((ARC_W_R(c, 0)) != 0) goto L_a13e0;
  /* a13b0: tbz w20, #2, #0xa13c4 */
  if (((ARC_W_R(c, 20)) >> 2 & 1) == 0) goto L_a13c4;
  /* a13b4: nop  */
  /* nop: no architectural effect here */
  /* a13b8: adr x0, #0x157680 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1406592)));
  /* a13bc: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(660416));
  fn1_142578(c);
  /* a13c0: cbnz w0, #0xa13f4 */
  if ((ARC_W_R(c, 0)) != 0) goto L_a13f4;
L_a13c4:;
  /* a13c4: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a13c8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a13cc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a13d0: ret  */
  return;
L_a13d4:;
  /* a13d4: nop  */
  /* nop: no architectural effect here */
  /* a13d8: adr x0, #0x4ff9b */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(327579)));
  /* a13dc: b #0xa13fc */
  goto L_a13fc;
L_a13e0:;
  /* a13e0: nop  */
  /* nop: no architectural effect here */
  /* a13e4: adr x0, #0x4f88b */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(325771)));
  /* a13e8: nop  */
  /* nop: no architectural effect here */
  /* a13ec: adr x1, #0x514d6 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(333014)));
  /* a13f0: bl #0xa23d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(660468));
  fn1_a23d8(c);
L_a13f4:;
  /* a13f4: nop  */
  /* nop: no architectural effect here */
  /* a13f8: adr x0, #0x51f52 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(335698)));
L_a13fc:;
  /* a13fc: nop  */
  /* nop: no architectural effect here */
  /* a1400: adr x1, #0x514d6 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(333014)));
  /* a1404: bl #0xa23d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(660488));
  fn1_a23d8(c);
  /* a1408: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(660492));
  fn1_a1454(c);
}

void fn1_a2780(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038593408));
  /* a2780: bti c */
  /* bti: no architectural effect here */
  /* a2784: ret  */
  return;
}

void fn1_a8784(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038617988));
  /* a8784: bti c */
  /* bti: no architectural effect here */
  /* a8788: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* a878c: ret  */
  return;
}

void fn1_af398(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038645656));
  /* af398: bti c */
  /* bti: no architectural effect here */
  /* af39c: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* af3a0: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b3e84(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038664836));
  /* b3e84: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b3e88: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b3e8c: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b3e90: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b3e94: ldp x9, x10, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b3e98: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b3e9c: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* b3ea0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b3ea4: add x11, x9, #2 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* b3ea8: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* b3eac: b.ls #0xb3edc */
  if (ARC_COND(c, 9)) goto L_b3edc;
  /* b3eb0: lsl x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b3eb4: add x9, x9, #0x3e2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(994)));
  /* b3eb8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* b3ebc: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b3ec0: csel x1, x10, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* b3ec4: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b3ec8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(736972));
  fn1_142878(c);
  /* b3ecc: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b3ed0: cbz x0, #0xb3f78 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b3f78;
  /* b3ed4: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b3ed8: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
L_b3edc:;
  /* b3edc: mov w10, #0x5d5b */
  ARC_W_W(c, 10, UINT64_C(23899));
  /* b3ee0: strh w10, [x8, x9] */
  arc_st16((ARC_X_R(c, 8) + ARC_X_R(c, 9)), ARC_W_R(c, 10));
  /* b3ee4: ldr x0, [x20, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* b3ee8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b3eec: ldrb w9, [x0, #8] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(8))));
  /* b3ef0: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* b3ef4: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b3ef8: cmp w9, #0x34 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(52));
  /* b3efc: b.ne #0xb3f0c */
  if (ARC_COND(c, 1)) goto L_b3f0c;
  /* b3f00: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b3f04: bl #0xb3b20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(737032));
  fn1_b3b20(c);
  /* b3f08: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b3f0c:;
  /* b3f0c: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b3f10: add x10, x8, #5 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(5)));
  /* b3f14: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b3f18: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b3f1c: b.ls #0xb3f44 */
  if (ARC_COND(c, 9)) goto L_b3f44;
  /* b3f20: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b3f24: add x8, x8, #0x3e5 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(997)));
  /* b3f28: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b3f2c: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b3f30: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b3f34: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(737080));
  fn1_142878(c);
  /* b3f38: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b3f3c: cbz x0, #0xb3f7c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b3f7c;
  /* b3f40: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b3f44:;
  /* b3f44: mov w10, #0x2e7b */
  ARC_W_W(c, 10, UINT64_C(11899));
  /* b3f48: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b3f4c: mov w9, #0x7d */
  ARC_W_W(c, 9, UINT64_C(125));
  /* b3f50: movk w10, #0x2e2e, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(774766592)));
  /* b3f54: strb w9, [x8, #4] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(4)), ARC_W_R(c, 9));
  /* b3f58: str w10, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* b3f5c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b3f60: add x8, x8, #5 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(5)));
  /* b3f64: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b3f68: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b3f6c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b3f70: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b3f74: ret  */
  return;
L_b3f78:;
  /* b3f78: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(737148));
  fn1_1427b8(c);
L_b3f7c:;
  /* b3f7c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(737152));
  fn1_1427b8(c);
}

void fn1_b7948(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038679880));
  /* b7948: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b794c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b7950: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b7954: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b7958: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b795c: ldrb w9, [x0, #0x18] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(24))));
  /* b7960: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* b7964: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b7968: cmp w9, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(1));
  /* b796c: b.ne #0xb79c4 */
  if (ARC_COND(c, 1)) goto L_b79c4;
  /* b7970: ldp x9, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b7974: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b7978: add x11, x9, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* b797c: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* b7980: b.ls #0xb79b0 */
  if (ARC_COND(c, 9)) goto L_b79b0;
  /* b7984: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* b7988: lsl x8, x10, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b798c: add x9, x9, #0x3e1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(993)));
  /* b7990: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b7994: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* b7998: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b799c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(752032));
  fn1_142878(c);
  /* b79a0: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b79a4: cbz x0, #0xb7a4c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b7a4c;
  /* b79a8: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b79ac: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
L_b79b0:;
  /* b79b0: mov w10, #0x7e */
  ARC_W_W(c, 10, UINT64_C(126));
  /* b79b4: strb w10, [x0, x9] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 9)), ARC_W_R(c, 10));
  /* b79b8: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b79bc: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* b79c0: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
L_b79c4:;
  /* b79c4: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* b79c8: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* b79cc: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* b79d0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(752084));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b79d4: cbz x1, #0xb7a34 */
  if ((ARC_X_R(c, 1)) == 0) goto L_b7a34;
  /* b79d8: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b79dc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b79e0: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b79e4: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* b79e8: add x10, x8, x1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + ARC_X_R(c, 1)));
  /* b79ec: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b79f0: b.ls #0xb7a18 */
  if (ARC_COND(c, 9)) goto L_b7a18;
  /* b79f4: lsl x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b79f8: add x9, x10, #0x3e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(992)));
  /* b79fc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b7a00: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* b7a04: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b7a08: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(752140));
  fn1_142878(c);
  /* b7a0c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b7a10: cbz x0, #0xb7a48 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b7a48;
  /* b7a14: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b7a18:;
  /* b7a18: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b7a1c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* b7a20: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* b7a24: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(752168));
  fn1_1449d8(c);
  /* b7a28: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b7a2c: add x8, x8, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 20)));
  /* b7a30: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_b7a34:;
  /* b7a34: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b7a38: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b7a3c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b7a40: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b7a44: ret  */
  return;
L_b7a48:;
  /* b7a48: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(752204));
  fn1_1427b8(c);
L_b7a4c:;
  /* b7a4c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(752208));
  fn1_1427b8(c);
}

void fn1_ba6f4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038691572));
  /* ba6f4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ba6f8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ba6fc: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* ba700: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ba704: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ba708: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* ba70c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* ba710: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* ba714: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* ba718: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* ba71c: b.hi #0xba740 */
  if (ARC_COND(c, 8)) goto L_ba740;
  /* ba720: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ba724: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* ba728: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(763692));
  fn1_1428a8(c);
  /* ba72c: cbz x0, #0xba7a0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ba7a0;
  /* ba730: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ba734: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ba738: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ba73c: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_ba740:;
  /* ba740: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* ba744: add x0, x21, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* ba748: adrp x8, #0x14c000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1359872)));
  /* ba74c: add x8, x8, #0x490 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1168)));
  /* ba750: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* ba754: ldr x10, [x19] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 19)));
  /* ba758: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* ba75c: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* ba760: mov w9, #5 */
  ARC_W_W(c, 9, UINT64_C(5));
  /* ba764: mov w11, #0x540 */
  ARC_W_W(c, 11, UINT64_C(1344));
  /* ba768: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* ba76c: adrp x9, #0x50000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(327680)));
  /* ba770: add x9, x9, #0x1ae */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(430)));
  /* ba774: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* ba778: stp x10, x9, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* ba77c: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* ba780: orr w8, w8, w11 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 11)));
  /* ba784: str x9, [x0, #0x20] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(32)), ARC_X_R(c, 9));
  /* ba788: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* ba78c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ba790: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* ba794: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ba798: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ba79c: ret  */
  return;
L_ba7a0:;
  /* ba7a0: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(763812));
  fn1_142488(c);
}

void fn1_bd8a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038704288));
  /* bd8a0: bti c */
  /* bti: no architectural effect here */
  /* bd8a4: b #0x1426f8 */
  fn1_1426f8(c); return;
}

void fn1_cc368(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038764392));
  /* cc368: bti c */
  /* bti: no architectural effect here */
  /* cc36c: sub x9, x1, x0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* cc370: mov w8, #0x7e */
  ARC_W_W(c, 8, UINT64_C(126));
  /* cc374: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* cc378: asr x9, x9, #3 */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* cc37c: clz x9, x9 */
  ARC_X_W(c, 9, arc_clz64(ARC_X_R(c, 9)));
  /* cc380: sub x2, x8, x9, lsl #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) - ((uint64_t)(ARC_X_R(c, 9)) << 1)));
  /* cc384: b #0xcc388 */
  fn1_cc388(c); return;
}

void fn1_d7448(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038809672));
  /* d7448: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d744c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d7450: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* d7454: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* d7458: ldr x19, [x0] */
  ARC_X_W(c, 19, arc_ld64(ARC_X_R(c, 0)));
  /* d745c: cbz x19, #0xd74ac */
  if ((ARC_X_R(c, 19)) == 0) goto L_d74ac;
  /* d7460: sub x1, x19, #0x78 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) - UINT64_C(120)));
  /* d7464: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* d7468: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(881772));
  fn1_bd950(c);
  /* d746c: cmp x0, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(1));
  /* d7470: b.ne #0xd74ac */
  if (ARC_COND(c, 1)) goto L_d74ac;
  /* d7474: ldur x8, [x19, #-0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(-104))));
  /* d7478: cbz x8, #0xd7484 */
  if ((ARC_X_R(c, 8)) == 0) goto L_d7484;
  /* d747c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d7480: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(881796));
  arc_dispatch(c, ARC_X_R(c, 8));
L_d7484:;
  /* d7484: sub x0, x19, #0x80 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) - UINT64_C(128)));
  /* d7488: nop  */
  /* nop: no architectural effect here */
  /* d748c: adr x8, #0x1576e0 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1406688)));
  /* d7490: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* d7494: b.lo #0xd74bc */
  if (ARC_COND(c, 3)) goto L_d74bc;
  /* d7498: adrp x8, #0x157000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404928)));
  /* d749c: add x8, x8, #0x8e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2272)));
  /* d74a0: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* d74a4: b.hs #0xd74bc */
  if (ARC_COND(c, 2)) goto L_d74bc;
  /* d74a8: bl #0xa2664 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(881836));
  fn1_a2664(c);
L_d74ac:;
  /* d74ac: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* d74b0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d74b4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d74b8: ret  */
  return;
L_d74bc:;
  /* d74bc: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* d74c0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d74c4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d74c8: b #0x142800 */
  fn1_142800(c); return;
  /* d74cc: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(881872));
  fn1_a1454(c);
  /* d74d0: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(881876));
  fn1_a1454(c);
}

void fn1_db3c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038825928));
  /* db3c8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* db3cc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* db3d0: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* db3d4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* db3d8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* db3dc: add x1, x0, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 0) + UINT64_C(8)));
  /* db3e0: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* db3e4: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(898024));
  fn1_bd950(c);
  /* db3e8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* db3ec: cbnz x0, #0xdb400 */
  if ((ARC_X_R(c, 0)) != 0) goto L_db400;
  /* db3f0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* db3f4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* db3f8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* db3fc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(898048));
  arc_dispatch(c, ARC_X_R(c, 8));
L_db400:;
  /* db400: cmp x20, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(0));
  /* db404: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* db408: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* db40c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* db410: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* db414: ret  */
  return;
}

void fn1_dddb8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038836664));
  /* dddb8: bti c */
  /* bti: no architectural effect here */
  /* dddbc: mov w8, #-0x434 */
  ARC_W_W(c, 8, UINT64_C(18446744073709550540));
  /* dddc0: sub w10, w1, #0x435 */
  ARC_W_W(c, 10, (ARC_W_R(c, 1) - UINT64_C(1077)));
  /* dddc4: orr x9, x0, #0x10000000000000 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) | UINT64_C(4503599627370496)));
  /* dddc8: cmp w1, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(0));
  /* dddcc: csel x9, x0, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 0)) : ARC_X_R(c, 9)));
  /* dddd0: csel w10, w8, w10, eq */
  ARC_W_W(c, 10, (ARC_COND(c, 0) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* dddd4: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* dddd8: lsl x13, x9, #2 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(2)) & 63)));
  /* ddddc: ccmp w1, #2, #0, eq */
  if (ARC_COND(c, 0)) { (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(2)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* ddde0: cset w12, lo */
  ARC_W_W(c, 12, (ARC_COND(c, 3) ? 1 : 0));
  /* ddde4: tbnz w10, #0x1f, #0xddf08 */
  if (((ARC_W_R(c, 10)) >> 31 & 1) != 0) goto L_ddf08;
  /* ddde8: mov w8, #0x3441 */
  ARC_W_W(c, 8, UINT64_C(13377));
  /* dddec: cmp w10, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(3));
  /* dddf0: orr x14, x13, #2 */
  ARC_X_W(c, 14, (ARC_X_R(c, 13) | UINT64_C(2)));
  /* dddf4: movk w8, #1, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(65536)));
  /* dddf8: cset w11, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? 1 : 0));
  /* dddfc: mvn x0, x12 */
  ARC_X_W(c, 0, (~(uint64_t)(ARC_X_R(c, 12))));
  /* dde00: mul w8, w10, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 10)) * (uint32_t)(ARC_W_R(c, 8))));
  /* dde04: add x0, x13, x0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 13) + ARC_X_R(c, 0)));
  /* dde08: mov w5, #0x934f */
  ARC_W_W(c, 5, UINT64_C(37711));
  /* dde0c: movk w5, #0x12, lsl #16 */
  ARC_W_W(c, 5, ((ARC_W_R(c, 5) & UINT64_C(18446744069414649855)) | UINT64_C(1179648)));
  /* dde10: lsr w8, w8, #0x12 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(18)) & 31)));
  /* dde14: sub w8, w8, w11 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - ARC_W_R(c, 11)));
  /* dde18: nop  */
  /* nop: no architectural effect here */
  /* dde1c: adr x11, #0x723f0 */
  ARC_X_W(c, 11, (arc_image_bases[1] + UINT64_C(467952)));
  /* dde20: add x11, x11, w8, uxtw #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 4)));
  /* dde24: mul w5, w8, w5 */
  ARC_W_W(c, 5, ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 5))));
  /* dde28: sub w10, w8, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 8) - ARC_W_R(c, 10)));
  /* dde2c: ldp x11, x15, [x11] */
  { const uint64_t _pa = ARC_X_R(c, 11);
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 15, arc_ld64(_pa + 8));
  }
  /* dde30: add w10, w10, w5, lsr #19 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + ((uint32_t)(ARC_W_R(c, 5)) >> 19)));
  /* dde34: mul x16, x15, x14 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) * (uint64_t)(ARC_X_R(c, 14))));
  /* dde38: add w10, w10, #0x3a */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(58)));
  /* dde3c: umulh x1, x11, x14 */
  ARC_X_W(c, 1, arc_umulh(ARC_X_R(c, 11), ARC_X_R(c, 14)));
  /* dde40: umulh x17, x15, x14 */
  ARC_X_W(c, 17, arc_umulh(ARC_X_R(c, 15), ARC_X_R(c, 14)));
  /* dde44: mul x2, x15, x0 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 15)) * (uint64_t)(ARC_X_R(c, 0))));
  /* dde48: adds x16, x1, x16 */
  ARC_X_W(c, 16, arc_add64(c, ARC_X_R(c, 1), ARC_X_R(c, 16), 0));
  /* dde4c: umulh x3, x15, x0 */
  ARC_X_W(c, 3, arc_umulh(ARC_X_R(c, 15), ARC_X_R(c, 0)));
  /* dde50: lsr x16, x16, x10 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 16)) >> ((ARC_X_R(c, 10)) & 63)));
  /* dde54: cinc x17, x17, hs */
  ARC_X_W(c, 17, (ARC_COND(c, 2) ? (ARC_X_R(c, 17)) + 1 : (ARC_X_R(c, 17))));
  /* dde58: umulh x0, x11, x0 */
  ARC_X_W(c, 0, arc_umulh(ARC_X_R(c, 11), ARC_X_R(c, 0)));
  /* dde5c: lsl x17, x17, #1 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 17)) << ((UINT64_C(1)) & 63)));
  /* dde60: mul x4, x15, x13 */
  ARC_X_W(c, 4, ((uint64_t)(ARC_X_R(c, 15)) * (uint64_t)(ARC_X_R(c, 13))));
  /* dde64: umulh x11, x11, x13 */
  ARC_X_W(c, 11, arc_umulh(ARC_X_R(c, 11), ARC_X_R(c, 13)));
  /* dde68: adds x0, x0, x2 */
  ARC_X_W(c, 0, arc_add64(c, ARC_X_R(c, 0), ARC_X_R(c, 2), 0));
  /* dde6c: and w2, w10, #0x3f */
  ARC_W_W(c, 2, (ARC_W_R(c, 10) & UINT64_C(63)));
  /* dde70: umulh x15, x15, x13 */
  ARC_X_W(c, 15, arc_umulh(ARC_X_R(c, 15), ARC_X_R(c, 13)));
  /* dde74: cinc x1, x3, hs */
  ARC_X_W(c, 1, (ARC_COND(c, 2) ? (ARC_X_R(c, 3)) + 1 : (ARC_X_R(c, 3))));
  /* dde78: eor x2, x2, #0x3f */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) ^ UINT64_C(63)));
  /* dde7c: lsl x1, x1, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 1)) << ((UINT64_C(1)) & 63)));
  /* dde80: lsl x17, x17, x2 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 17)) << ((ARC_X_R(c, 2)) & 63)));
  /* dde84: lsr x0, x0, x10 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 0)) >> ((ARC_X_R(c, 10)) & 63)));
  /* dde88: adds x11, x11, x4 */
  ARC_X_W(c, 11, arc_add64(c, ARC_X_R(c, 11), ARC_X_R(c, 4), 0));
  /* dde8c: lsl x1, x1, x2 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 1)) << ((ARC_X_R(c, 2)) & 63)));
  /* dde90: lsr x10, x11, x10 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 11)) >> ((ARC_X_R(c, 10)) & 63)));
  /* dde94: cinc x15, x15, hs */
  ARC_X_W(c, 15, (ARC_COND(c, 2) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* dde98: cmp w8, #0x15 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(21));
  /* dde9c: orr x11, x1, x0 */
  ARC_X_W(c, 11, (ARC_X_R(c, 1) | ARC_X_R(c, 0)));
  /* ddea0: lsl x15, x15, #1 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) << ((UINT64_C(1)) & 63)));
  /* ddea4: lsl x2, x15, x2 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 15)) << ((ARC_X_R(c, 2)) & 63)));
  /* ddea8: orr x15, x17, x16 */
  ARC_X_W(c, 15, (ARC_X_R(c, 17) | ARC_X_R(c, 16)));
  /* ddeac: orr x10, x2, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 2) | ARC_X_R(c, 10)));
  /* ddeb0: b.hi #0xde00c */
  if (ARC_COND(c, 8)) goto L_de00c;
  /* ddeb4: mov x16, #-0x3333333333333334 */
  ARC_X_W(c, 16, UINT64_C(14757395258967641292));
  /* ddeb8: movk x16, #0xcccd */
  ARC_X_W(c, 16, ((ARC_X_R(c, 16) & UINT64_C(18446744073709486080)) | UINT64_C(52429)));
  /* ddebc: umulh x17, x13, x16 */
  ARC_X_W(c, 17, arc_umulh(ARC_X_R(c, 13), ARC_X_R(c, 16)));
  /* ddec0: lsr x17, x17, #2 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 17)) >> ((UINT64_C(2)) & 63)));
  /* ddec4: add w17, w17, w17, lsl #2 */
  ARC_W_W(c, 17, (ARC_W_R(c, 17) + ((uint32_t)(ARC_W_R(c, 17)) << 2)));
  /* ddec8: neg w17, w17 */
  ARC_W_W(c, 17, ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 17))));
  /* ddecc: cmn w17, w13 */
  (void)arc_add32(c, ARC_W_R(c, 17), ARC_W_R(c, 13), 0);
  /* dded0: b.ne #0xde23c */
  if (ARC_COND(c, 1)) goto L_de23c;
  /* dded4: mov w14, #-1 */
  ARC_W_W(c, 14, UINT64_C(18446744073709551615));
L_dded8:;
  /* dded8: umulh x12, x13, x16 */
  ARC_X_W(c, 12, arc_umulh(ARC_X_R(c, 13), ARC_X_R(c, 16)));
  /* ddedc: add w14, w14, #1 */
  ARC_W_W(c, 14, (ARC_W_R(c, 14) + UINT64_C(1)));
  /* ddee0: lsr x12, x12, #2 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 12)) >> ((UINT64_C(2)) & 63)));
  /* ddee4: add w17, w12, w12, lsl #2 */
  ARC_W_W(c, 17, (ARC_W_R(c, 12) + ((uint32_t)(ARC_W_R(c, 12)) << 2)));
  /* ddee8: neg w17, w17 */
  ARC_W_W(c, 17, ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 17))));
  /* ddeec: cmn w17, w13 */
  (void)arc_add32(c, ARC_W_R(c, 17), ARC_W_R(c, 13), 0);
  /* ddef0: mov x13, x12 */
  ARC_X_W(c, 13, ARC_X_R(c, 12));
  /* ddef4: b.eq #0xdded8 */
  if (ARC_COND(c, 0)) goto L_dded8;
  /* ddef8: cmp w14, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 14), ARC_W_R(c, 8));
  /* ddefc: mov w12, wzr */
  ARC_W_W(c, 12, ARC_W_R(c, 31));
  /* ddf00: cset w14, hs */
  ARC_W_W(c, 14, (ARC_COND(c, 2) ? 1 : 0));
  /* ddf04: b #0xde014 */
  goto L_de014;
L_ddf08:;
  /* ddf08: mov w8, #0xd105 */
  ARC_W_W(c, 8, UINT64_C(53509));
  /* ddf0c: cmn w10, #1 */
  (void)arc_add32(c, ARC_W_R(c, 10), UINT64_C(1), 0);
  /* ddf10: orr x15, x13, #2 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) | UINT64_C(2)));
  /* ddf14: movk w8, #0xfff4, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(4294180864)));
  /* ddf18: cset w11, ne */
  ARC_W_W(c, 11, (ARC_COND(c, 1) ? 1 : 0));
  /* ddf1c: mvn x0, x12 */
  ARC_X_W(c, 0, (~(uint64_t)(ARC_X_R(c, 12))));
  /* ddf20: mul w8, w10, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 10)) * (uint32_t)(ARC_W_R(c, 8))));
  /* ddf24: add x0, x13, x0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 13) + ARC_X_R(c, 0)));
  /* ddf28: mov w4, #0x6cb1 */
  ARC_W_W(c, 4, UINT64_C(27825));
  /* ddf2c: movk w4, #0x1ed, lsl #16 */
  ARC_W_W(c, 4, ((ARC_W_R(c, 4) & UINT64_C(18446744069414649855)) | UINT64_C(32309248)));
  /* ddf30: lsr w8, w8, #0x14 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(20)) & 31)));
  /* ddf34: sub w14, w8, w11 */
  ARC_W_W(c, 14, (ARC_W_R(c, 8) - ARC_W_R(c, 11)));
  /* ddf38: nop  */
  /* nop: no architectural effect here */
  /* ddf3c: adr x11, #0x73630 */
  ARC_X_W(c, 11, (arc_image_bases[1] + UINT64_C(472624)));
  /* ddf40: add w8, w14, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 14) + ARC_W_R(c, 10)));
  /* ddf44: neg w10, w8 */
  ARC_W_W(c, 10, ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 8))));
  /* ddf48: mul w4, w8, w4 */
  ARC_W_W(c, 4, ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 4))));
  /* ddf4c: add x10, x11, w10, sxtw #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 11) + ((uint64_t)(((uint64_t)(int64_t)(int32_t)(ARC_W_R(c, 10)))) << 4)));
  /* ddf50: ldp x10, x11, [x10] */
  { const uint64_t _pa = ARC_X_R(c, 10);
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* ddf54: mul x16, x11, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 11)) * (uint64_t)(ARC_X_R(c, 15))));
  /* ddf58: umulh x17, x11, x15 */
  ARC_X_W(c, 17, arc_umulh(ARC_X_R(c, 11), ARC_X_R(c, 15)));
  /* ddf5c: umulh x15, x10, x15 */
  ARC_X_W(c, 15, arc_umulh(ARC_X_R(c, 10), ARC_X_R(c, 15)));
  /* ddf60: mul x1, x11, x0 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 11)) * (uint64_t)(ARC_X_R(c, 0))));
  /* ddf64: umulh x2, x11, x0 */
  ARC_X_W(c, 2, arc_umulh(ARC_X_R(c, 11), ARC_X_R(c, 0)));
  /* ddf68: adds x15, x15, x16 */
  ARC_X_W(c, 15, arc_add64(c, ARC_X_R(c, 15), ARC_X_R(c, 16), 0));
  /* ddf6c: sub w16, w14, w4, lsr #19 */
  ARC_W_W(c, 16, (ARC_W_R(c, 14) - ((uint32_t)(ARC_W_R(c, 4)) >> 19)));
  /* ddf70: umulh x0, x10, x0 */
  ARC_X_W(c, 0, arc_umulh(ARC_X_R(c, 10), ARC_X_R(c, 0)));
  /* ddf74: cinc x17, x17, hs */
  ARC_X_W(c, 17, (ARC_COND(c, 2) ? (ARC_X_R(c, 17)) + 1 : (ARC_X_R(c, 17))));
  /* ddf78: add w16, w16, #0x38 */
  ARC_W_W(c, 16, (ARC_W_R(c, 16) + UINT64_C(56)));
  /* ddf7c: lsl x17, x17, #1 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 17)) << ((UINT64_C(1)) & 63)));
  /* ddf80: mul x3, x11, x13 */
  ARC_X_W(c, 3, ((uint64_t)(ARC_X_R(c, 11)) * (uint64_t)(ARC_X_R(c, 13))));
  /* ddf84: lsr x15, x15, x16 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((ARC_X_R(c, 16)) & 63)));
  /* ddf88: umulh x10, x10, x13 */
  ARC_X_W(c, 10, arc_umulh(ARC_X_R(c, 10), ARC_X_R(c, 13)));
  /* ddf8c: adds x0, x0, x1 */
  ARC_X_W(c, 0, arc_add64(c, ARC_X_R(c, 0), ARC_X_R(c, 1), 0));
  /* ddf90: umulh x11, x11, x13 */
  ARC_X_W(c, 11, arc_umulh(ARC_X_R(c, 11), ARC_X_R(c, 13)));
  /* ddf94: cinc x1, x2, hs */
  ARC_X_W(c, 1, (ARC_COND(c, 2) ? (ARC_X_R(c, 2)) + 1 : (ARC_X_R(c, 2))));
  /* ddf98: and w2, w16, #0x3f */
  ARC_W_W(c, 2, (ARC_W_R(c, 16) & UINT64_C(63)));
  /* ddf9c: lsl x1, x1, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 1)) << ((UINT64_C(1)) & 63)));
  /* ddfa0: eor x2, x2, #0x3f */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) ^ UINT64_C(63)));
  /* ddfa4: lsr x0, x0, x16 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 0)) >> ((ARC_X_R(c, 16)) & 63)));
  /* ddfa8: lsl x17, x17, x2 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 17)) << ((ARC_X_R(c, 2)) & 63)));
  /* ddfac: adds x10, x10, x3 */
  ARC_X_W(c, 10, arc_add64(c, ARC_X_R(c, 10), ARC_X_R(c, 3), 0));
  /* ddfb0: lsl x1, x1, x2 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 1)) << ((ARC_X_R(c, 2)) & 63)));
  /* ddfb4: lsr x10, x10, x16 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((ARC_X_R(c, 16)) & 63)));
  /* ddfb8: orr x15, x17, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 17) | ARC_X_R(c, 15)));
  /* ddfbc: cinc x11, x11, hs */
  ARC_X_W(c, 11, (ARC_COND(c, 2) ? (ARC_X_R(c, 11)) + 1 : (ARC_X_R(c, 11))));
  /* ddfc0: subs w16, w14, #1 */
  ARC_W_W(c, 16, arc_sub32(c, ARC_W_R(c, 14), UINT64_C(1)));
  /* ddfc4: lsl x11, x11, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 11)) << ((UINT64_C(1)) & 63)));
  /* ddfc8: lsl x2, x11, x2 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 11)) << ((ARC_X_R(c, 2)) & 63)));
  /* ddfcc: orr x11, x1, x0 */
  ARC_X_W(c, 11, (ARC_X_R(c, 1) | ARC_X_R(c, 0)));
  /* ddfd0: orr x10, x2, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 2) | ARC_X_R(c, 10)));
  /* ddfd4: b.hi #0xddfec */
  if (ARC_COND(c, 8)) goto L_ddfec;
  /* ddfd8: ands x13, x9, #1 */
  { uint64_t _r = (uint64_t)(ARC_X_R(c, 9) & UINT64_C(1));
    arc_flags_logical64(c, _r);
    ARC_X_W(c, 13, _r); }
  /* ddfdc: mov w14, #1 */
  ARC_W_W(c, 14, UINT64_C(1));
  /* ddfe0: csel w12, wzr, w12, ne */
  ARC_W_W(c, 12, (ARC_COND(c, 1) ? (ARC_W_R(c, 31)) : ARC_W_R(c, 12)));
  /* ddfe4: sub x15, x15, x13 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) - ARC_X_R(c, 13)));
  /* ddfe8: b #0xde07c */
  goto L_de07c;
L_ddfec:;
  /* ddfec: cmp w14, #0x3e */
  (void)arc_sub32(c, ARC_W_R(c, 14), UINT64_C(62));
  /* ddff0: b.hi #0xde00c */
  if (ARC_COND(c, 8)) goto L_de00c;
  /* ddff4: mov x14, #-1 */
  ARC_X_W(c, 14, UINT64_C(18446744073709551615));
  /* ddff8: mov w12, wzr */
  ARC_W_W(c, 12, ARC_W_R(c, 31));
  /* ddffc: lsl x14, x14, x16 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 14)) << ((ARC_X_R(c, 16)) & 63)));
  /* de000: bics xzr, x13, x14 */
  { uint64_t _r = (uint64_t)(ARC_X_R(c, 13) & (~ARC_X_R(c, 14)));
    arc_flags_logical64(c, _r);
    ARC_X_W(c, 31, _r); }
  /* de004: cset w14, eq */
  ARC_W_W(c, 14, (ARC_COND(c, 0) ? 1 : 0));
  /* de008: b #0xde014 */
  goto L_de014;
L_de00c:;
  /* de00c: mov w14, wzr */
  ARC_W_W(c, 14, ARC_W_R(c, 31));
  /* de010: mov w12, wzr */
  ARC_W_W(c, 12, ARC_W_R(c, 31));
L_de014:;
  /* de014: tbnz w14, #0, #0xde07c */
  if (((ARC_W_R(c, 14)) >> 0 & 1) != 0) goto L_de07c;
  /* de018: cbnz w12, #0xde07c */
  if ((ARC_W_R(c, 12)) != 0) goto L_de07c;
  /* de01c: mov x9, #0xf5c3 */
  ARC_X_W(c, 9, UINT64_C(62915));
  /* de020: lsr x12, x15, #2 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(2)) & 63)));
  /* de024: lsr x13, x11, #2 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(2)) & 63)));
  /* de028: movk x9, #0x5c28, lsl #16 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1546125312)));
  /* de02c: movk x9, #0xc28f, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(213919436111872)));
  /* de030: movk x9, #0x28f5, lsl #48 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(281474976710655)) | UINT64_C(2951265130811228160)));
  /* de034: umulh x12, x12, x9 */
  ARC_X_W(c, 12, arc_umulh(ARC_X_R(c, 12), ARC_X_R(c, 9)));
  /* de038: umulh x13, x13, x9 */
  ARC_X_W(c, 13, arc_umulh(ARC_X_R(c, 13), ARC_X_R(c, 9)));
  /* de03c: lsr x12, x12, #2 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 12)) >> ((UINT64_C(2)) & 63)));
  /* de040: lsr x14, x13, #2 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 13)) >> ((UINT64_C(2)) & 63)));
  /* de044: cmp x12, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 14));
  /* de048: b.ls #0xde1b8 */
  if (ARC_COND(c, 9)) goto L_de1b8;
  /* de04c: lsr x11, x10, #2 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(2)) & 63)));
  /* de050: mov w13, #2 */
  ARC_W_W(c, 13, UINT64_C(2));
  /* de054: mov x15, x12 */
  ARC_X_W(c, 15, ARC_X_R(c, 12));
  /* de058: umulh x9, x11, x9 */
  ARC_X_W(c, 9, arc_umulh(ARC_X_R(c, 11), ARC_X_R(c, 9)));
  /* de05c: mov x11, x14 */
  ARC_X_W(c, 11, ARC_X_R(c, 14));
  /* de060: lsr x16, x9, #2 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(2)) & 63)));
  /* de064: mov w9, #-0x64 */
  ARC_W_W(c, 9, UINT64_C(18446744073709551516));
  /* de068: madd w9, w16, w9, w10 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 10)) + ((uint32_t)(ARC_W_R(c, 16)) * (uint32_t)(ARC_W_R(c, 9)))));
  /* de06c: mov x10, x16 */
  ARC_X_W(c, 10, ARC_X_R(c, 16));
  /* de070: cmp w9, #0x31 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(49));
  /* de074: cset w9, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? 1 : 0));
  /* de078: b #0xde1c0 */
  goto L_de1c0;
L_de07c:;
  /* de07c: mov x16, #-0x3333333333333334 */
  ARC_X_W(c, 16, UINT64_C(14757395258967641292));
  /* de080: movk x16, #0xcccd */
  ARC_X_W(c, 16, ((ARC_X_R(c, 16) & UINT64_C(18446744073709486080)) | UINT64_C(52429)));
  /* de084: umulh x13, x15, x16 */
  ARC_X_W(c, 13, arc_umulh(ARC_X_R(c, 15), ARC_X_R(c, 16)));
  /* de088: umulh x15, x11, x16 */
  ARC_X_W(c, 15, arc_umulh(ARC_X_R(c, 11), ARC_X_R(c, 16)));
  /* de08c: lsr x0, x13, #3 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 13)) >> ((UINT64_C(3)) & 63)));
  /* de090: lsr x17, x15, #3 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* de094: cmp x0, x17 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 17));
  /* de098: b.ls #0xde10c */
  if (ARC_COND(c, 9)) goto L_de10c;
  /* de09c: mov w13, wzr */
  ARC_W_W(c, 13, ARC_W_R(c, 31));
  /* de0a0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* de0a4: mov w1, #-0xa */
  ARC_W_W(c, 1, UINT64_C(18446744073709551606));
  /* de0a8: mov x3, x10 */
  ARC_X_W(c, 3, ARC_X_R(c, 10));
  /* de0ac: mov x4, x11 */
  ARC_X_W(c, 4, ARC_X_R(c, 11));
L_de0b0:;
  /* de0b0: umulh x10, x3, x16 */
  ARC_X_W(c, 10, arc_umulh(ARC_X_R(c, 3), ARC_X_R(c, 16)));
  /* de0b4: mov x11, x17 */
  ARC_X_W(c, 11, ARC_X_R(c, 17));
  /* de0b8: add w13, w13, #1 */
  ARC_W_W(c, 13, (ARC_W_R(c, 13) + UINT64_C(1)));
  /* de0bc: umulh x0, x0, x16 */
  ARC_X_W(c, 0, arc_umulh(ARC_X_R(c, 0), ARC_X_R(c, 16)));
  /* de0c0: mul w15, w17, w1 */
  ARC_W_W(c, 15, ((uint32_t)(ARC_W_R(c, 17)) * (uint32_t)(ARC_W_R(c, 1))));
  /* de0c4: umulh x17, x17, x16 */
  ARC_X_W(c, 17, arc_umulh(ARC_X_R(c, 17), ARC_X_R(c, 16)));
  /* de0c8: lsr x10, x10, #3 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(3)) & 63)));
  /* de0cc: cmn w15, w4 */
  (void)arc_add32(c, ARC_W_R(c, 15), ARC_W_R(c, 4), 0);
  /* de0d0: madd w15, w10, w1, w3 */
  ARC_W_W(c, 15, ((uint32_t)(ARC_W_R(c, 3)) + ((uint32_t)(ARC_W_R(c, 10)) * (uint32_t)(ARC_W_R(c, 1)))));
  /* de0d4: lsr x0, x0, #3 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(3)) & 63)));
  /* de0d8: cset w4, eq */
  ARC_W_W(c, 4, (ARC_COND(c, 0) ? 1 : 0));
  /* de0dc: tst w2, #0xff */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 2) & UINT64_C(255)));
  /* de0e0: mov x3, x10 */
  ARC_X_W(c, 3, ARC_X_R(c, 10));
  /* de0e4: cset w2, eq */
  ARC_W_W(c, 2, (ARC_COND(c, 0) ? 1 : 0));
  /* de0e8: and w12, w12, w4 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) & ARC_W_R(c, 4)));
  /* de0ec: mov x4, x11 */
  ARC_X_W(c, 4, ARC_X_R(c, 11));
  /* de0f0: lsr x17, x17, #3 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 17)) >> ((UINT64_C(3)) & 63)));
  /* de0f4: and w14, w14, w2 */
  ARC_W_W(c, 14, (ARC_W_R(c, 14) & ARC_W_R(c, 2)));
  /* de0f8: mov w2, w15 */
  ARC_W_W(c, 2, ARC_W_R(c, 15));
  /* de0fc: cmp x0, x17 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 17));
  /* de100: b.hi #0xde0b0 */
  if (ARC_COND(c, 8)) goto L_de0b0;
  /* de104: cbnz w12, #0xde118 */
  if ((ARC_W_R(c, 12)) != 0) goto L_de118;
  /* de108: b #0xde178 */
  goto L_de178;
L_de10c:;
  /* de10c: mov w15, wzr */
  ARC_W_W(c, 15, ARC_W_R(c, 31));
  /* de110: mov w13, wzr */
  ARC_W_W(c, 13, ARC_W_R(c, 31));
  /* de114: cbz w12, #0xde178 */
  if ((ARC_W_R(c, 12)) == 0) goto L_de178;
L_de118:;
  /* de118: mov x17, #-0x3333333333333334 */
  ARC_X_W(c, 17, UINT64_C(14757395258967641292));
  /* de11c: mov w0, #-0xa */
  ARC_W_W(c, 0, UINT64_C(18446744073709551606));
  /* de120: movk x17, #0xcccd */
  ARC_X_W(c, 17, ((ARC_X_R(c, 17) & UINT64_C(18446744073709486080)) | UINT64_C(52429)));
  /* de124: umulh x16, x11, x17 */
  ARC_X_W(c, 16, arc_umulh(ARC_X_R(c, 11), ARC_X_R(c, 17)));
  /* de128: lsr x1, x16, #3 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 16)) >> ((UINT64_C(3)) & 63)));
  /* de12c: mul w16, w1, w0 */
  ARC_W_W(c, 16, ((uint32_t)(ARC_W_R(c, 1)) * (uint32_t)(ARC_W_R(c, 0))));
  /* de130: cmn w16, w11 */
  (void)arc_add32(c, ARC_W_R(c, 16), ARC_W_R(c, 11), 0);
  /* de134: b.ne #0xde178 */
  if (ARC_COND(c, 1)) goto L_de178;
L_de138:;
  /* de138: umulh x16, x1, x17 */
  ARC_X_W(c, 16, arc_umulh(ARC_X_R(c, 1), ARC_X_R(c, 17)));
  /* de13c: mov x11, x1 */
  ARC_X_W(c, 11, ARC_X_R(c, 1));
  /* de140: tst w15, #0xff */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 15) & UINT64_C(255)));
  /* de144: add w13, w13, #1 */
  ARC_W_W(c, 13, (ARC_W_R(c, 13) + UINT64_C(1)));
  /* de148: umulh x2, x10, x17 */
  ARC_X_W(c, 2, arc_umulh(ARC_X_R(c, 10), ARC_X_R(c, 17)));
  /* de14c: lsr x1, x16, #3 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 16)) >> ((UINT64_C(3)) & 63)));
  /* de150: lsr x16, x2, #3 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 2)) >> ((UINT64_C(3)) & 63)));
  /* de154: mul w3, w1, w0 */
  ARC_W_W(c, 3, ((uint32_t)(ARC_W_R(c, 1)) * (uint32_t)(ARC_W_R(c, 0))));
  /* de158: madd w2, w16, w0, w10 */
  ARC_W_W(c, 2, ((uint32_t)(ARC_W_R(c, 10)) + ((uint32_t)(ARC_W_R(c, 16)) * (uint32_t)(ARC_W_R(c, 0)))));
  /* de15c: cset w10, eq */
  ARC_W_W(c, 10, (ARC_COND(c, 0) ? 1 : 0));
  /* de160: and w14, w14, w10 */
  ARC_W_W(c, 14, (ARC_W_R(c, 14) & ARC_W_R(c, 10)));
  /* de164: cmn w3, w11 */
  (void)arc_add32(c, ARC_W_R(c, 3), ARC_W_R(c, 11), 0);
  /* de168: mov x10, x16 */
  ARC_X_W(c, 10, ARC_X_R(c, 16));
  /* de16c: mov w15, w2 */
  ARC_W_W(c, 15, ARC_W_R(c, 2));
  /* de170: b.eq #0xde138 */
  if (ARC_COND(c, 0)) goto L_de138;
  /* de174: b #0xde180 */
  goto L_de180;
L_de178:;
  /* de178: mov w2, w15 */
  ARC_W_W(c, 2, ARC_W_R(c, 15));
  /* de17c: mov x16, x10 */
  ARC_X_W(c, 16, ARC_X_R(c, 10));
L_de180:;
  /* de180: and w10, w2, #0xff */
  ARC_W_W(c, 10, (ARC_W_R(c, 2) & UINT64_C(255)));
  /* de184: orn w9, w9, w12 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | (~ARC_W_R(c, 12))));
  /* de188: cmp w10, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(5));
  /* de18c: cset w15, ne */
  ARC_W_W(c, 15, (ARC_COND(c, 1) ? 1 : 0));
  /* de190: cmp x16, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 11));
  /* de194: orn w11, w15, w14 */
  ARC_W_W(c, 11, (ARC_W_R(c, 15) | (~ARC_W_R(c, 14))));
  /* de198: cset w14, eq */
  ARC_W_W(c, 14, (ARC_COND(c, 0) ? 1 : 0));
  /* de19c: cmp w10, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(4));
  /* de1a0: cset w10, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? 1 : 0));
  /* de1a4: orr w11, w11, w16 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) | ARC_W_R(c, 16)));
  /* de1a8: and w9, w9, w14 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & ARC_W_R(c, 14)));
  /* de1ac: and w10, w11, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) & ARC_W_R(c, 10)));
  /* de1b0: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* de1b4: b #0xde22c */
  goto L_de22c;
L_de1b8:;
  /* de1b8: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* de1bc: mov w13, wzr */
  ARC_W_W(c, 13, ARC_W_R(c, 31));
L_de1c0:;
  /* de1c0: mov x12, #-0x3333333333333334 */
  ARC_X_W(c, 12, UINT64_C(14757395258967641292));
  /* de1c4: movk x12, #0xcccd */
  ARC_X_W(c, 12, ((ARC_X_R(c, 12) & UINT64_C(18446744073709486080)) | UINT64_C(52429)));
  /* de1c8: umulh x14, x15, x12 */
  ARC_X_W(c, 14, arc_umulh(ARC_X_R(c, 15), ARC_X_R(c, 12)));
  /* de1cc: umulh x15, x11, x12 */
  ARC_X_W(c, 15, arc_umulh(ARC_X_R(c, 11), ARC_X_R(c, 12)));
  /* de1d0: lsr x14, x14, #3 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 14)) >> ((UINT64_C(3)) & 63)));
  /* de1d4: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* de1d8: cmp x14, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 15));
  /* de1dc: b.ls #0xde21c */
  if (ARC_COND(c, 9)) goto L_de21c;
L_de1e0:;
  /* de1e0: umulh x14, x14, x12 */
  ARC_X_W(c, 14, arc_umulh(ARC_X_R(c, 14), ARC_X_R(c, 12)));
  /* de1e4: mov x11, x15 */
  ARC_X_W(c, 11, ARC_X_R(c, 15));
  /* de1e8: mov x9, x10 */
  ARC_X_W(c, 9, ARC_X_R(c, 10));
  /* de1ec: add w13, w13, #1 */
  ARC_W_W(c, 13, (ARC_W_R(c, 13) + UINT64_C(1)));
  /* de1f0: umulh x15, x15, x12 */
  ARC_X_W(c, 15, arc_umulh(ARC_X_R(c, 15), ARC_X_R(c, 12)));
  /* de1f4: umulh x10, x10, x12 */
  ARC_X_W(c, 10, arc_umulh(ARC_X_R(c, 10), ARC_X_R(c, 12)));
  /* de1f8: lsr x14, x14, #3 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 14)) >> ((UINT64_C(3)) & 63)));
  /* de1fc: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* de200: lsr x10, x10, #3 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(3)) & 63)));
  /* de204: cmp x14, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 15));
  /* de208: b.hi #0xde1e0 */
  if (ARC_COND(c, 8)) goto L_de1e0;
  /* de20c: mov w12, #-0xa */
  ARC_W_W(c, 12, UINT64_C(18446744073709551606));
  /* de210: madd w9, w10, w12, w9 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) + ((uint32_t)(ARC_W_R(c, 10)) * (uint32_t)(ARC_W_R(c, 12)))));
  /* de214: cmp w9, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(4));
  /* de218: cset w9, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? 1 : 0));
L_de21c:;
  /* de21c: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* de220: mov x16, x10 */
  ARC_X_W(c, 16, ARC_X_R(c, 10));
  /* de224: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* de228: orr w9, w11, w9 */
  ARC_W_W(c, 9, (ARC_W_R(c, 11) | ARC_W_R(c, 9)));
L_de22c:;
  /* de22c: and x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(1)));
  /* de230: add w1, w13, w8 */
  ARC_W_W(c, 1, (ARC_W_R(c, 13) + ARC_W_R(c, 8)));
  /* de234: add x0, x16, x9 */
  ARC_X_W(c, 0, (ARC_X_R(c, 16) + ARC_X_R(c, 9)));
  /* de238: ret  */
  return;
L_de23c:;
  /* de23c: tbnz w9, #0, #0xde284 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_de284;
  /* de240: mvn x12, x12 */
  ARC_X_W(c, 12, (~(uint64_t)(ARC_X_R(c, 12))));
  /* de244: mov x14, #-0x3333333333333334 */
  ARC_X_W(c, 14, UINT64_C(14757395258967641292));
  /* de248: add x13, x12, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 12) + ARC_X_R(c, 13)));
  /* de24c: mov w12, #-1 */
  ARC_W_W(c, 12, UINT64_C(18446744073709551615));
  /* de250: movk x14, #0xcccd */
  ARC_X_W(c, 14, ((ARC_X_R(c, 14) & UINT64_C(18446744073709486080)) | UINT64_C(52429)));
L_de254:;
  /* de254: umulh x16, x13, x14 */
  ARC_X_W(c, 16, arc_umulh(ARC_X_R(c, 13), ARC_X_R(c, 14)));
  /* de258: add w12, w12, #1 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) + UINT64_C(1)));
  /* de25c: lsr x16, x16, #2 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 16)) >> ((UINT64_C(2)) & 63)));
  /* de260: add w17, w16, w16, lsl #2 */
  ARC_W_W(c, 17, (ARC_W_R(c, 16) + ((uint32_t)(ARC_W_R(c, 16)) << 2)));
  /* de264: neg w17, w17 */
  ARC_W_W(c, 17, ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 17))));
  /* de268: cmn w17, w13 */
  (void)arc_add32(c, ARC_W_R(c, 17), ARC_W_R(c, 13), 0);
  /* de26c: mov x13, x16 */
  ARC_X_W(c, 13, ARC_X_R(c, 16));
  /* de270: b.eq #0xde254 */
  if (ARC_COND(c, 0)) goto L_de254;
  /* de274: cmp w12, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 8));
  /* de278: mov w14, wzr */
  ARC_W_W(c, 14, ARC_W_R(c, 31));
  /* de27c: cset w12, hs */
  ARC_W_W(c, 12, (ARC_COND(c, 2) ? 1 : 0));
  /* de280: b #0xde014 */
  goto L_de014;
L_de284:;
  /* de284: mov x12, #-0x3333333333333334 */
  ARC_X_W(c, 12, UINT64_C(14757395258967641292));
  /* de288: mov w13, #-1 */
  ARC_W_W(c, 13, UINT64_C(18446744073709551615));
  /* de28c: movk x12, #0xcccd */
  ARC_X_W(c, 12, ((ARC_X_R(c, 12) & UINT64_C(18446744073709486080)) | UINT64_C(52429)));
L_de290:;
  /* de290: umulh x16, x14, x12 */
  ARC_X_W(c, 16, arc_umulh(ARC_X_R(c, 14), ARC_X_R(c, 12)));
  /* de294: add w13, w13, #1 */
  ARC_W_W(c, 13, (ARC_W_R(c, 13) + UINT64_C(1)));
  /* de298: lsr x16, x16, #2 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 16)) >> ((UINT64_C(2)) & 63)));
  /* de29c: add w17, w16, w16, lsl #2 */
  ARC_W_W(c, 17, (ARC_W_R(c, 16) + ((uint32_t)(ARC_W_R(c, 16)) << 2)));
  /* de2a0: neg w17, w17 */
  ARC_W_W(c, 17, ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 17))));
  /* de2a4: cmn w17, w14 */
  (void)arc_add32(c, ARC_W_R(c, 17), ARC_W_R(c, 14), 0);
  /* de2a8: mov x14, x16 */
  ARC_X_W(c, 14, ARC_X_R(c, 16));
  /* de2ac: b.eq #0xde290 */
  if (ARC_COND(c, 0)) goto L_de290;
  /* de2b0: cmp w13, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 8));
  /* de2b4: mov w14, wzr */
  ARC_W_W(c, 14, ARC_W_R(c, 31));
  /* de2b8: mov w12, wzr */
  ARC_W_W(c, 12, ARC_W_R(c, 31));
  /* de2bc: cset w13, hs */
  ARC_W_W(c, 13, (ARC_COND(c, 2) ? 1 : 0));
  /* de2c0: sub x15, x15, x13 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) - ARC_X_R(c, 13)));
  /* de2c4: b #0xde014 */
  goto L_de014;
}

void fn1_e1d5c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038852956));
  /* e1d5c: bti c */
  /* bti: no architectural effect here */
  /* e1d60: ldrb w8, [x2] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 2)));
  /* e1d64: ldr x9, [x2, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 2) + INT64_C(8))));
  /* e1d68: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e1d6c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e1d70: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e1d74: subs x9, x9, x3 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 3)));
  /* e1d78: b.lo #0xe1d9c */
  if (ARC_COND(c, 3)) goto L_e1d9c;
  /* e1d7c: ldr x10, [x2, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 2) + INT64_C(16))));
  /* e1d80: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e1d84: csinc x10, x10, x2, ne */
  ARC_X_W(c, 10, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 2)) + 1)));
  /* e1d88: cmp x9, x4 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 4));
  /* e1d8c: csel x8, x9, x4, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 4)));
  /* e1d90: add x2, x10, x3 */
  ARC_X_W(c, 2, (ARC_X_R(c, 10) + ARC_X_R(c, 3)));
  /* e1d94: mov x3, x8 */
  ARC_X_W(c, 3, ARC_X_R(c, 8));
  /* e1d98: b #0x142cf8 */
  fn1_142cf8(c); return;
L_e1d9c:;
  /* e1d9c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e1da0: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e1da4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e1da8: bl #0xda020 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(925100));
  fn1_da020(c);
}

void fn1_e4994(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038864276));
  /* e4994: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e4998: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* e499c: str d8, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), (c)->q[8].u64[0]);
  /* e49a0: stp x29, x30, [sp, #0x48] */
  { const uint64_t _pa = ((c)->sp + INT64_C(72));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e49a4: str x23, [sp, #0x58] */
  arc_st64(((c)->sp + INT64_C(88)), ARC_X_R(c, 23));
  /* e49a8: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e49ac: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e49b0: add x29, sp, #0x48 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(72)));
  /* e49b4: mov w8, #8 */
  ARC_W_W(c, 8, UINT64_C(8));
  /* e49b8: mov w22, #0x7473 */
  ARC_W_W(c, 22, UINT64_C(29811));
  /* e49bc: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e49c0: strb w8, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 8));
  /* e49c4: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e49c8: movk w22, #0x666f, lsl #16 */
  ARC_W_W(c, 22, ((ARC_W_R(c, 22) & UINT64_C(18446744069414649855)) | UINT64_C(1718550528)));
  /* e49cc: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* e49d0: stur w22, [sp, #9] */
  arc_st32(((c)->sp + INT64_C(9)), ARC_W_R(c, 22));
  /* e49d4: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e49d8: strb wzr, [sp, #0xd] */
  arc_st8(((c)->sp + INT64_C(13)), ARC_W_R(c, 31));
  /* e49dc: str xzr, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 31));
  /* e49e0: csinc x20, x9, x0, ne */
  ARC_X_W(c, 20, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 0)) + 1)));
  /* e49e4: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(936424));
  fn1_142a58(c);
  /* e49e8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e49ec: ldr w23, [x0] */
  ARC_W_W(c, 23, arc_ld32(ARC_X_R(c, 0)));
  /* e49f0: str wzr, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 31));
  /* e49f4: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* e49f8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e49fc: bl #0x142ed8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(936448));
  fn1_142ed8(c);
  /* e4a00: ldr w8, [x21] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 21)));
  /* e4a04: str w23, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 23));
  /* e4a08: cmp w8, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(34));
  /* e4a0c: b.eq #0xe4a54 */
  if (ARC_COND(c, 0)) goto L_e4a54;
  /* e4a10: ldr x8, [sp, #0x20] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
  /* e4a14: subs x8, x8, x20 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20)));
  /* e4a18: b.eq #0xe4a88 */
  if (ARC_COND(c, 0)) goto L_e4a88;
  /* e4a1c: fmov s8, s0 */
  arc_su_w(c, 8, (uint32_t)(ARC_SU_R(c, 0)));
  /* e4a20: cbz x19, #0xe4a28 */
  if ((ARC_X_R(c, 19)) == 0) goto L_e4a28;
  /* e4a24: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_e4a28:;
  /* e4a28: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* e4a2c: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(936496));
  fn1_142e00(c);
  /* e4a30: fmov s0, s8 */
  arc_su_w(c, 0, (uint32_t)(ARC_SU_R(c, 8)));
  /* e4a34: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e4a38: ldr x23, [sp, #0x58] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(88))));
  /* e4a3c: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e4a40: ldr d8, [sp, #0x40] */
  arc_du_w(c, 8, arc_ld64(((c)->sp + INT64_C(64))));
  /* e4a44: ldp x29, x30, [sp, #0x48] */
  { const uint64_t _pa = ((c)->sp + INT64_C(72));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e4a48: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* e4a4c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e4a50: ret  */
  return;
L_e4a54:;
  /* e4a54: mov w8, #0x24 */
  ARC_W_W(c, 8, UINT64_C(36));
  /* e4a58: adrp x9, #0x51000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(331776)));
  /* e4a5c: add x9, x9, #0xa7d */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2685)));
  /* e4a60: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* e4a64: sturb w8, [x29, #-0x20] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-32)), ARC_W_R(c, 8));
  /* e4a68: ldur x8, [x9, #6] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(6))));
  /* e4a6c: stur xzr, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 31));
  /* e4a70: sub x9, x29, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* e4a74: stur w22, [x29, #-0x1f] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-31)), ARC_W_R(c, 22));
  /* e4a78: stur x10, [x29, #-0x1b] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-27)), ARC_X_R(c, 10));
  /* e4a7c: stur x8, [x29, #-0x15] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-21)), ARC_X_R(c, 8));
  /* e4a80: orr x0, x9, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* e4a84: bl #0xda038 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(936584));
  fn1_da038(c);
L_e4a88:;
  /* e4a88: mov w8, #0x26 */
  ARC_W_W(c, 8, UINT64_C(38));
  /* e4a8c: adrp x9, #0x50000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(327680)));
  /* e4a90: add x9, x9, #0x1dd */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(477)));
  /* e4a94: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* e4a98: sturb w8, [x29, #-0x20] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-32)), ARC_W_R(c, 8));
  /* e4a9c: ldur x8, [x9, #7] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(7))));
  /* e4aa0: stur xzr, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 31));
  /* e4aa4: sub x9, x29, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* e4aa8: stur w22, [x29, #-0x1f] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-31)), ARC_W_R(c, 22));
  /* e4aac: stur x10, [x29, #-0x1b] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-27)), ARC_X_R(c, 10));
  /* e4ab0: stur x8, [x29, #-0x14] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-20)), ARC_X_R(c, 8));
  /* e4ab4: orr x0, x9, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* e4ab8: bl #0xe78a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(936636));
  fn1_e78a0(c);
  /* e4abc: b #0xe4ac0 */
  goto L_e4ac0;
L_e4ac0:;
  /* e4ac0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e4ac4: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* e4ac8: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(936652));
  fn1_142e00(c);
  /* e4acc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* e4ad0: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(936660));
  fn1_142e00(c);
  /* e4ad4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e4ad8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(936668));
  fn1_9cc20(c);
}

void fn1_e8d6c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038881644));
  /* e8d6c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e8d70: sub sp, sp, #0x170 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(368)));
  /* e8d74: stp x29, x30, [sp, #0x130] */
  { const uint64_t _pa = ((c)->sp + INT64_C(304));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e8d78: stp x28, x23, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e8d7c: stp x22, x21, [sp, #0x150] */
  { const uint64_t _pa = ((c)->sp + INT64_C(336));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e8d80: stp x20, x19, [sp, #0x160] */
  { const uint64_t _pa = ((c)->sp + INT64_C(352));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e8d84: add x29, sp, #0x130 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(304)));
  /* e8d88: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* e8d8c: mov x20, #-0x38 */
  ARC_X_W(c, 20, UINT64_C(18446744073709551560));
  /* e8d90: add x23, x29, #0x40 */
  ARC_X_W(c, 23, (ARC_X_R(c, 29) + UINT64_C(64)));
  /* e8d94: add x21, x8, #0x80 */
  ARC_X_W(c, 21, (ARC_X_R(c, 8) + UINT64_C(128)));
  /* e8d98: add x8, sp, #0x88 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(136)));
  /* e8d9c: movk x20, #0xff80, lsl #32 */
  ARC_X_W(c, 20, ((ARC_X_R(c, 20) & UINT64_C(18446462603027808255)) | UINT64_C(280925220896768)));
  /* e8da0: add x22, x8, #0x38 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) + UINT64_C(56)));
  /* e8da4: stp x21, x20, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* e8da8: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* e8dac: stp x23, x22, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* e8db0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e8db4: stp q0, q1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* e8db8: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* e8dbc: ldur q1, [x29, #-0x20] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* e8dc0: stp x1, x2, [sp, #0x88] */
  { const uint64_t _pa = ((c)->sp + INT64_C(136));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* e8dc4: sub x2, x29, #0x40 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* e8dc8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* e8dcc: stp x3, x4, [sp, #0x98] */
  { const uint64_t _pa = ((c)->sp + INT64_C(152));
    arc_st64(_pa, ARC_X_R(c, 3));
    arc_st64(_pa + 8, ARC_X_R(c, 4));
  }
  /* e8dd0: stp x5, x6, [sp, #0xa8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(168));
    arc_st64(_pa, ARC_X_R(c, 5));
    arc_st64(_pa + 8, ARC_X_R(c, 6));
  }
  /* e8dd4: str x7, [sp, #0xb8] */
  arc_st64(((c)->sp + INT64_C(184)), ARC_X_R(c, 7));
  /* e8dd8: stp q2, q3, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, (c)->q[2].u64[0]);
    arc_st64(_pa + 8, (c)->q[2].u64[1]);
    arc_st64((_pa + 16), (c)->q[3].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[3].u64[1]);
  }
  /* e8ddc: stp q4, q5, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, (c)->q[4].u64[0]);
    arc_st64(_pa + 8, (c)->q[4].u64[1]);
    arc_st64((_pa + 16), (c)->q[5].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[5].u64[1]);
  }
  /* e8de0: stp q6, q7, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, (c)->q[6].u64[0]);
    arc_st64(_pa + 8, (c)->q[6].u64[1]);
    arc_st64((_pa + 16), (c)->q[7].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[7].u64[1]);
  }
  /* e8de4: stp q1, q0, [x29, #-0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-64));
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* e8de8: ldr x8, [x8, #0x998] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2456))));
  /* e8dec: add x0, x8, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(304)));
  /* e8df0: bl #0x142728 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(953844));
  fn1_142728(c);
  /* e8df4: stp x21, x20, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* e8df8: stp x23, x22, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* e8dfc: ldp q1, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* e8e00: stp q1, q0, [x29, #-0x70] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-112));
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* e8e04: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* e8e08: sub x2, x29, #0x70 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* e8e0c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* e8e10: bl #0x142740 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(953876));
  fn1_142740(c);
  /* e8e14: ldur x0, [x29, #-0x48] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-72))));
  /* e8e18: bl #0x142758 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(953884));
  fn1_142758(c);
  /* e8e1c: nop  */
  /* nop: no architectural effect here */
  /* e8e20: adr x0, #0x501ed */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328173)));
  /* e8e24: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* e8e28: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* e8e2c: bl #0x142770 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(953904));
  fn1_142770(c);
  /* e8e30: ldur x2, [x29, #-0x48] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 29) + INT64_C(-72))));
  /* e8e34: adrp x1, #0x50000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(327680)));
  /* e8e38: add x1, x1, #0xafe */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2814)));
  /* e8e3c: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
  /* e8e40: bl #0x142788 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(953924));
  fn1_142788(c);
  /* e8e44: bl #0x1427a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(953928));
  fn1_1427a0(c);
  /* e8e48: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(953932));
  fn1_1427b8(c);
  /* e8e4c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(953936));
  fn1_a1454(c);
}

void fn1_eaf38(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038890296));
  /* eaf38: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eaf3c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eaf40: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* eaf44: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eaf48: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* eaf4c: bl #0x143238 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962384));
  fn1_143238(c);
  /* eaf50: cbz w0, #0xeaf5c */
  if ((ARC_W_R(c, 0)) == 0) goto L_eaf5c;
  /* eaf54: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* eaf58: b #0xeaf78 */
  goto L_eaf78;
L_eaf5c:;
  /* eaf5c: ldrb w20, [x19, #0x58] */
  ARC_W_W(c, 20, arc_ld8((ARC_X_R(c, 19) + INT64_C(88))));
  /* eaf60: tbnz w20, #0, #0xeaf6c */
  if (((ARC_W_R(c, 20)) >> 0 & 1) != 0) goto L_eaf6c;
  /* eaf64: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* eaf68: strb w8, [x19, #0x58] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(88)), ARC_W_R(c, 8));
L_eaf6c:;
  /* eaf6c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eaf70: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962420));
  fn1_142560(c);
  /* eaf74: eor w0, w20, #1 */
  ARC_W_W(c, 0, (ARC_W_R(c, 20) ^ UINT64_C(1)));
L_eaf78:;
  /* eaf78: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* eaf7c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eaf80: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eaf84: ret  */
  return;
  /* eaf88: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962444));
  fn1_a1454(c);
  /* eaf8c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962448));
  fn1_a1454(c);
}

void fn1_ecf38(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038898488));
  /* ecf38: bti c */
  /* bti: no architectural effect here */
  /* ecf3c: mov w1, #8 */
  ARC_W_W(c, 1, UINT64_C(8));
  /* ecf40: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_ef144(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038907204));
  /* ef144: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ef148: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* ef14c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ef150: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ef154: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ef158: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* ef15c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ef160: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* ef164: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* ef168: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* ef16c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* ef170: stur wzr, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 31));
  /* ef174: bl #0x1435f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(979320));
  fn1_1435f8(c);
  /* ef178: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* ef17c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* ef180: b.ne #0xef248 */
  if (ARC_COND(c, 1)) goto L_ef248;
  /* ef184: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ef188: nop  */
  /* nop: no architectural effect here */
  /* ef18c: adr x22, #0x15dc40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432640)));
  /* ef190: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ef194: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ef198: ldr x20, [x8, #0x30] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* ef19c: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* ef1a0: str x20, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 20));
  /* ef1a4: b.eq #0xef1b4 */
  if (ARC_COND(c, 0)) goto L_ef1b4;
  /* ef1a8: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* ef1ac: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ef1b0: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(979380));
  fn1_db2e0(c);
L_ef1b4:;
  /* ef1b4: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* ef1b8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* ef1bc: ldr x1, [x1, #0xb48] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2888))));
  /* ef1c0: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(979396));
  fn1_143748(c);
  /* ef1c4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ef1c8: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* ef1cc: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ef1d0: add x3, x19, x8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ef1d4: ldr x8, [x9, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(80))));
  /* ef1d8: ldr x1, [x3, #0x28] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 3) + INT64_C(40))));
  /* ef1dc: sub x4, x29, #4 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* ef1e0: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* ef1e4: mov x5, x21 */
  ARC_X_W(c, 5, ARC_X_R(c, 21));
  /* ef1e8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(979436));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ef1ec: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* ef1f0: b.eq #0xef214 */
  if (ARC_COND(c, 0)) goto L_ef214;
  /* ef1f4: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* ef1f8: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ef1fc: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(979456));
  fn1_bd950(c);
  /* ef200: cbnz x0, #0xef214 */
  if ((ARC_X_R(c, 0)) != 0) goto L_ef214;
  /* ef204: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* ef208: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ef20c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ef210: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(979476));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ef214:;
  /* ef214: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ef218: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* ef21c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ef220: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ef224: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* ef228: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* ef22c: ldp w11, w9, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* ef230: orr w10, w11, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* ef234: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* ef238: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* ef23c: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* ef240: str w10, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 10));
  /* ef244: b.ne #0xef264 */
  if (ARC_COND(c, 1)) goto L_ef264;
L_ef248:;
  /* ef248: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ef24c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ef250: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ef254: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ef258: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* ef25c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ef260: ret  */
  return;
L_ef264:;
  /* ef264: nop  */
  /* nop: no architectural effect here */
  /* ef268: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* ef26c: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(979568));
  fn1_ec720(c);
  /* ef270: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* ef274: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ef278: b.eq #0xef29c */
  if (ARC_COND(c, 0)) goto L_ef29c;
  /* ef27c: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* ef280: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ef284: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(979592));
  fn1_bd950(c);
  /* ef288: cbnz x0, #0xef29c */
  if ((ARC_X_R(c, 0)) != 0) goto L_ef29c;
  /* ef28c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* ef290: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ef294: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ef298: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(979612));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ef29c:;
  /* ef29c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ef2a0: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(979620));
  fn1_142548(c);
  /* ef2a4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ef2a8: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* ef2ac: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ef2b0: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* ef2b4: stur w10, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 10));
  /* ef2b8: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* ef2bc: ldr w11, [x9, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* ef2c0: orr w11, w11, w10 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* ef2c4: str w11, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 11));
  /* ef2c8: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ef2cc: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ef2d0: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* ef2d4: tbnz w8, #0, #0xef2e0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_ef2e0;
  /* ef2d8: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(979676));
  fn1_142980(c);
  /* ef2dc: b #0xef214 */
  goto L_ef214;
L_ef2e0:;
  /* ef2e0: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(979684));
  fn1_1429b0(c);
  /* ef2e4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ef2e8: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(979692));
  fn1_142980(c);
  /* ef2ec: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ef2f0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(979700));
  fn1_9cc20(c);
  /* ef2f4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(979704));
  fn1_a1454(c);
}

void fn1_f38fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038925564));
  /* f38fc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f3900: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f3904: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f3908: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f390c: ldp x11, x8, [x1] */
  { const uint64_t _pa = ARC_X_R(c, 1);
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* f3910: ldp x10, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f3914: str x8, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 8));
  /* f3918: str x9, [x1, #8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(8)), ARC_X_R(c, 9));
  /* f391c: ldur x8, [x10, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 10) + INT64_C(-24))));
  /* f3920: ldur x9, [x11, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 11) + INT64_C(-24))));
  /* f3924: add x19, x0, x8 */
  ARC_X_W(c, 19, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* f3928: add x20, x1, x9 */
  ARC_X_W(c, 20, (ARC_X_R(c, 1) + ARC_X_R(c, 9)));
  /* f392c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f3930: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* f3934: bl #0x143400 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(997688));
  fn1_143400(c);
  /* f3938: ldr x8, [x20, #0x88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(136))));
  /* f393c: ldr x9, [x19, #0x88] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(136))));
  /* f3940: ldr w10, [x20, #0x90] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 20) + INT64_C(144))));
  /* f3944: str x8, [x19, #0x88] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(136)), ARC_X_R(c, 8));
  /* f3948: ldr w8, [x19, #0x90] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(144))));
  /* f394c: str x9, [x20, #0x88] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(136)), ARC_X_R(c, 9));
  /* f3950: str w10, [x19, #0x90] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(144)), ARC_W_R(c, 10));
  /* f3954: str w8, [x20, #0x90] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(144)), ARC_W_R(c, 8));
  /* f3958: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f395c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f3960: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f3964: ret  */
  return;
}

void fn1_f5b78(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038934392));
  /* f5b78: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f5b7c: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* f5b80: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f5b84: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f5b88: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f5b8c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f5b90: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f5b94: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* f5b98: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f5b9c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f5ba0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* f5ba4: stur wzr, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 31));
  /* f5ba8: bl #0x143670 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1006508));
  fn1_143670(c);
  /* f5bac: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* f5bb0: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f5bb4: b.ne #0xf5c7c */
  if (ARC_COND(c, 1)) goto L_f5c7c;
  /* f5bb8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f5bbc: nop  */
  /* nop: no architectural effect here */
  /* f5bc0: adr x22, #0x15dc40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f5bc4: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f5bc8: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f5bcc: ldr x20, [x8, #0x30] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f5bd0: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* f5bd4: str x20, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 20));
  /* f5bd8: b.eq #0xf5be8 */
  if (ARC_COND(c, 0)) goto L_f5be8;
  /* f5bdc: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* f5be0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f5be4: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1006568));
  fn1_db2e0(c);
L_f5be8:;
  /* f5be8: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f5bec: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f5bf0: ldr x1, [x1, #0xb60] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2912))));
  /* f5bf4: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1006584));
  fn1_143748(c);
  /* f5bf8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f5bfc: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* f5c00: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f5c04: add x3, x19, x8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f5c08: ldr x8, [x9, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(80))));
  /* f5c0c: ldr x1, [x3, #0x28] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 3) + INT64_C(40))));
  /* f5c10: sub x4, x29, #4 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* f5c14: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* f5c18: mov x5, x21 */
  ARC_X_W(c, 5, ARC_X_R(c, 21));
  /* f5c1c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1006624));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f5c20: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* f5c24: b.eq #0xf5c48 */
  if (ARC_COND(c, 0)) goto L_f5c48;
  /* f5c28: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* f5c2c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f5c30: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1006644));
  fn1_bd950(c);
  /* f5c34: cbnz x0, #0xf5c48 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f5c48;
  /* f5c38: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* f5c3c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f5c40: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f5c44: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1006664));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f5c48:;
  /* f5c48: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f5c4c: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* f5c50: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f5c54: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f5c58: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f5c5c: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* f5c60: ldp w11, w9, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* f5c64: orr w10, w11, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* f5c68: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* f5c6c: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* f5c70: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* f5c74: str w10, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 10));
  /* f5c78: b.ne #0xf5c98 */
  if (ARC_COND(c, 1)) goto L_f5c98;
L_f5c7c:;
  /* f5c7c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f5c80: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f5c84: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f5c88: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f5c8c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* f5c90: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f5c94: ret  */
  return;
L_f5c98:;
  /* f5c98: nop  */
  /* nop: no architectural effect here */
  /* f5c9c: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f5ca0: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1006756));
  fn1_ec720(c);
  /* f5ca4: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* f5ca8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* f5cac: b.eq #0xf5cd0 */
  if (ARC_COND(c, 0)) goto L_f5cd0;
  /* f5cb0: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* f5cb4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f5cb8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1006780));
  fn1_bd950(c);
  /* f5cbc: cbnz x0, #0xf5cd0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f5cd0;
  /* f5cc0: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* f5cc4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f5cc8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f5ccc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1006800));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f5cd0:;
  /* f5cd0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f5cd4: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1006808));
  fn1_142548(c);
  /* f5cd8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f5cdc: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* f5ce0: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f5ce4: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* f5ce8: stur w10, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 10));
  /* f5cec: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f5cf0: ldr w11, [x9, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f5cf4: orr w11, w11, w10 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* f5cf8: str w11, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 11));
  /* f5cfc: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f5d00: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f5d04: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f5d08: tbnz w8, #0, #0xf5d14 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_f5d14;
  /* f5d0c: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1006864));
  fn1_142980(c);
  /* f5d10: b #0xf5c48 */
  goto L_f5c48;
L_f5d14:;
  /* f5d14: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1006872));
  fn1_1429b0(c);
  /* f5d18: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f5d1c: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1006880));
  fn1_142980(c);
  /* f5d20: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f5d24: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1006888));
  fn1_9cc20(c);
  /* f5d28: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1006892));
  fn1_a1454(c);
}

void fn1_fb1e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038956512));
  /* fb1e0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fb1e4: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fb1e8: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* fb1ec: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fb1f0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fb1f4: ldp x11, x8, [x1] */
  { const uint64_t _pa = ARC_X_R(c, 1);
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* fb1f8: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* fb1fc: ldp x10, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* fb200: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* fb204: str x8, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 8));
  /* fb208: str x9, [x1, #8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(8)), ARC_X_R(c, 9));
  /* fb20c: ldur x8, [x10, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 10) + INT64_C(-24))));
  /* fb210: ldur x9, [x11, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 11) + INT64_C(-24))));
  /* fb214: add x21, x0, x8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* fb218: add x22, x1, x9 */
  ARC_X_W(c, 22, (ARC_X_R(c, 1) + ARC_X_R(c, 9)));
  /* fb21c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* fb220: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* fb224: bl #0x143400 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1028648));
  fn1_143400(c);
  /* fb228: ldr x8, [x22, #0x88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(136))));
  /* fb22c: ldr x9, [x21, #0x88] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 21) + INT64_C(136))));
  /* fb230: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* fb234: ldr w10, [x22, #0x90] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 22) + INT64_C(144))));
  /* fb238: add x1, x19, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* fb23c: str x8, [x21, #0x88] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(136)), ARC_X_R(c, 8));
  /* fb240: ldr w8, [x21, #0x90] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 21) + INT64_C(144))));
  /* fb244: str x9, [x22, #0x88] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(136)), ARC_X_R(c, 9));
  /* fb248: str w10, [x21, #0x90] */
  arc_st32((ARC_X_R(c, 21) + INT64_C(144)), ARC_W_R(c, 10));
  /* fb24c: str w8, [x22, #0x90] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(144)), ARC_W_R(c, 8));
  /* fb250: bl #0x143580 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1028692));
  fn1_143580(c);
  /* fb254: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fb258: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fb25c: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* fb260: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fb264: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fb268: ret  */
  return;
}

void fn1_fe868(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038970472));
  /* fe868: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fe86c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fe870: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* fe874: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fe878: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fe87c: ldrb w8, [x0, #0x58] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(88))));
  /* fe880: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* fe884: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* fe888: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* fe88c: tbz w8, #0, #0xfe8b4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_fe8b4;
  /* fe890: ldr x3, [x21, #0x40] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 21) + INT64_C(64))));
  /* fe894: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fe898: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* fe89c: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* fe8a0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fe8a4: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* fe8a8: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fe8ac: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fe8b0: b #0x1427d0 */
  fn1_1427d0(c); return;
L_fe8b4:;
  /* fe8b4: cmp x19, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 19), UINT64_C(1));
  /* fe8b8: b.lt #0xfe8f0 */
  if (ARC_COND(c, 11)) goto L_fe8f0;
  /* fe8bc: mov x22, xzr */
  ARC_X_W(c, 22, ARC_X_R(c, 31));
L_fe8c0:;
  /* fe8c0: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* fe8c4: ldrb w1, [x20, x22] */
  ARC_W_W(c, 1, arc_ld8((ARC_X_R(c, 20) + ARC_X_R(c, 22))));
  /* fe8c8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* fe8cc: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* fe8d0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1042644));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* fe8d4: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* fe8d8: b.eq #0xfe8f4 */
  if (ARC_COND(c, 0)) goto L_fe8f4;
  /* fe8dc: add x22, x22, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* fe8e0: cmp x19, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 22));
  /* fe8e4: b.ne #0xfe8c0 */
  if (ARC_COND(c, 1)) goto L_fe8c0;
  /* fe8e8: mov x22, x19 */
  ARC_X_W(c, 22, ARC_X_R(c, 19));
  /* fe8ec: b #0xfe8f4 */
  goto L_fe8f4;
L_fe8f0:;
  /* fe8f0: mov x22, xzr */
  ARC_X_W(c, 22, ARC_X_R(c, 31));
L_fe8f4:;
  /* fe8f4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* fe8f8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fe8fc: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* fe900: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fe904: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fe908: ret  */
  return;
}

void fn1_10ae54(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039021140));
  /* 10ae54: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 10ae58: sub sp, sp, #0xf0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(240)));
  /* 10ae5c: stp x29, x30, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 10ae60: str x27, [sp, #0xa0] */
  arc_st64(((c)->sp + INT64_C(160)), ARC_X_R(c, 27));
  /* 10ae64: stp x26, x25, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 10ae68: stp x24, x23, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 10ae6c: stp x22, x21, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 10ae70: stp x20, x19, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 10ae74: add x29, sp, #0x90 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(144)));
  /* 10ae78: ldr w9, [x2, #8] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 2) + INT64_C(8))));
  /* 10ae7c: mov w8, #0x25 */
  ARC_W_W(c, 8, UINT64_C(37));
  /* 10ae80: mov w19, w3 */
  ARC_W_W(c, 19, ARC_W_R(c, 3));
  /* 10ae84: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 10ae88: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 10ae8c: str x8, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 8));
  /* 10ae90: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 10ae94: str q0, [sp] */
  arc_st64((c)->sp, (c)->q[0].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[0].u64[1]);
  /* 10ae98: tbnz w9, #0xb, #0x10aea8 */
  if (((ARC_W_R(c, 9)) >> 11 & 1) != 0) goto L_10aea8;
  /* 10ae9c: orr x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(1)));
  /* 10aea0: tbnz w9, #0xa, #0x10aeb8 */
  if (((ARC_W_R(c, 9)) >> 10 & 1) != 0) goto L_10aeb8;
  /* 10aea4: b #0x10aec0 */
  goto L_10aec0;
L_10aea8:;
  /* 10aea8: mov w10, #0x2b */
  ARC_W_W(c, 10, UINT64_C(43));
  /* 10aeac: orr x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(2)));
  /* 10aeb0: strb w10, [x29, #0x19] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(25)), ARC_W_R(c, 10));
  /* 10aeb4: tbz w9, #0xa, #0x10aec0 */
  if (((ARC_W_R(c, 9)) >> 10 & 1) == 0) goto L_10aec0;
L_10aeb8:;
  /* 10aeb8: mov w10, #0x23 */
  ARC_W_W(c, 10, UINT64_C(35));
  /* 10aebc: strb w10, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 10));
  }
L_10aec0:;
  /* 10aec0: mov w10, #0x104 */
  ARC_W_W(c, 10, UINT64_C(260));
  /* 10aec4: nop  */
  /* nop: no architectural effect here */
  /* 10aec8: adr x22, #0x15dc38 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10aecc: and w10, w9, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) & ARC_W_R(c, 10)));
  /* 10aed0: cmp w10, #0x104 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(260));
  /* 10aed4: b.ne #0x10af48 */
  if (ARC_COND(c, 1)) goto L_10af48;
  /* 10aed8: mov w10, #0x4c */
  ARC_W_W(c, 10, UINT64_C(76));
  /* 10aedc: tst w9, #0x4000 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(16384)));
  /* 10aee0: mov w9, #0x41 */
  ARC_W_W(c, 9, UINT64_C(65));
  /* 10aee4: mov w11, #0x61 */
  ARC_W_W(c, 11, UINT64_C(97));
  /* 10aee8: strb w10, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* 10aeec: sub x10, x29, #0x1e */
  ARC_X_W(c, 10, (ARC_X_R(c, 29) - UINT64_C(30)));
  /* 10aef0: csel w9, w11, w9, eq */
  ARC_W_W(c, 9, (ARC_COND(c, 0) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 9)));
  /* 10aef4: stur x10, [x29, #-0x28] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-40)), ARC_X_R(c, 10));
  /* 10aef8: strb w9, [x8, #1] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(1)), ARC_W_R(c, 9));
  /* 10aefc: ldarb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 10af00: tbz w8, #0, #0x10b138 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10b138;
L_10af04:;
  /* 10af04: adrp x23, #0x15d000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 10af08: ldr q0, [sp] */
  arc_q_w(c, 0, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* 10af0c: sub x0, x29, #0x1e */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(30)));
  /* 10af10: ldr x2, [x23, #0xc30] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 23) + INT64_C(3120))));
  /* 10af14: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 10af18: mov w1, #0x1e */
  ARC_W_W(c, 1, UINT64_C(30));
  /* 10af1c: bl #0x136860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1093408));
  fn1_136860(c);
  /* 10af20: cmp w0, #0x1d */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(29));
  /* 10af24: b.le #0x10b004 */
  if (ARC_COND(c, 13)) goto L_10b004;
  /* 10af28: ldarb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 10af2c: tbz w8, #0, #0x10b1b0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10b1b0;
L_10af30:;
  /* 10af30: ldr x1, [x23, #0xc30] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 23) + INT64_C(3120))));
  /* 10af34: ldr q0, [sp] */
  arc_q_w(c, 0, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* 10af38: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 10af3c: add x2, x29, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 10af40: bl #0x136920 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1093444));
  fn1_136920(c);
  /* 10af44: b #0x10aff4 */
  goto L_10aff4;
L_10af48:;
  /* 10af48: mov w11, #0x2a2e */
  ARC_W_W(c, 11, UINT64_C(10798));
  /* 10af4c: mov w12, #0x4c */
  ARC_W_W(c, 12, UINT64_C(76));
  /* 10af50: cmp w10, #0x100 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(256));
  /* 10af54: strh w11, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 11));
  /* 10af58: strb w12, [x8, #2] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(2)), ARC_W_R(c, 12));
  /* 10af5c: b.eq #0x10af78 */
  if (ARC_COND(c, 0)) goto L_10af78;
  /* 10af60: cmp w10, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(4));
  /* 10af64: b.ne #0x10af88 */
  if (ARC_COND(c, 1)) goto L_10af88;
  /* 10af68: tst w9, #0x4000 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(16384)));
  /* 10af6c: mov w9, #0x46 */
  ARC_W_W(c, 9, UINT64_C(70));
  /* 10af70: mov w10, #0x66 */
  ARC_W_W(c, 10, UINT64_C(102));
  /* 10af74: b #0x10af94 */
  goto L_10af94;
L_10af78:;
  /* 10af78: tst w9, #0x4000 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(16384)));
  /* 10af7c: mov w9, #0x45 */
  ARC_W_W(c, 9, UINT64_C(69));
  /* 10af80: mov w10, #0x65 */
  ARC_W_W(c, 10, UINT64_C(101));
  /* 10af84: b #0x10af94 */
  goto L_10af94;
L_10af88:;
  /* 10af88: tst w9, #0x4000 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(16384)));
  /* 10af8c: mov w9, #0x47 */
  ARC_W_W(c, 9, UINT64_C(71));
  /* 10af90: mov w10, #0x67 */
  ARC_W_W(c, 10, UINT64_C(103));
L_10af94:;
  /* 10af94: csel w9, w10, w9, eq */
  ARC_W_W(c, 9, (ARC_COND(c, 0) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* 10af98: adrp x23, #0x15d000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 10af9c: strb w9, [x8, #3] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(3)), ARC_W_R(c, 9));
  /* 10afa0: sub x8, x29, #0x1e */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(30)));
  /* 10afa4: stur x8, [x29, #-0x28] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-40)), ARC_X_R(c, 8));
  /* 10afa8: ldarb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 10afac: tbz w8, #0, #0x10b174 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10b174;
L_10afb0:;
  /* 10afb0: ldr x2, [x23, #0xc30] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 23) + INT64_C(3120))));
  /* 10afb4: ldr w4, [x20, #0x10] */
  ARC_W_W(c, 4, arc_ld32((ARC_X_R(c, 20) + INT64_C(16))));
  /* 10afb8: sub x0, x29, #0x1e */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(30)));
  /* 10afbc: ldr q0, [sp] */
  arc_q_w(c, 0, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* 10afc0: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 10afc4: mov w1, #0x1e */
  ARC_W_W(c, 1, UINT64_C(30));
  /* 10afc8: bl #0x136860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1093580));
  fn1_136860(c);
  /* 10afcc: cmp w0, #0x1d */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(29));
  /* 10afd0: b.le #0x10b004 */
  if (ARC_COND(c, 13)) goto L_10b004;
  /* 10afd4: ldarb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 10afd8: tbz w8, #0, #0x10b1e8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10b1e8;
L_10afdc:;
  /* 10afdc: ldr x1, [x23, #0xc30] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 23) + INT64_C(3120))));
  /* 10afe0: ldr w3, [x20, #0x10] */
  ARC_W_W(c, 3, arc_ld32((ARC_X_R(c, 20) + INT64_C(16))));
  /* 10afe4: ldr q0, [sp] */
  arc_q_w(c, 0, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* 10afe8: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 10afec: add x2, x29, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 10aff0: bl #0x136920 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1093620));
  fn1_136920(c);
L_10aff4:;
  /* 10aff4: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 10aff8: b.eq #0x10b1ac */
  if (ARC_COND(c, 0)) goto L_10b1ac;
  /* 10affc: ldur x22, [x29, #-0x28] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 10b000: b #0x10b008 */
  goto L_10b008;
L_10b004:;
  /* 10b004: mov x22, xzr */
  ARC_X_W(c, 22, ARC_X_R(c, 31));
L_10b008:;
  /* 10b008: ldr w9, [x20, #8] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 20) + INT64_C(8))));
  /* 10b00c: ldur x23, [x29, #-0x28] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 10b010: sxtw x8, w0 */
  ARC_X_W(c, 8, ((int64_t)(int32_t)(ARC_W_R(c, 0))));
  /* 10b014: mov w10, #0xb0 */
  ARC_W_W(c, 10, UINT64_C(176));
  /* 10b018: and w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & ARC_W_R(c, 10)));
  /* 10b01c: add x24, x23, x8 */
  ARC_X_W(c, 24, (ARC_X_R(c, 23) + ARC_X_R(c, 8)));
  /* 10b020: cmp w9, #0x20 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(32));
  /* 10b024: mov x26, x24 */
  ARC_X_W(c, 26, ARC_X_R(c, 24));
  /* 10b028: b.eq #0x10b07c */
  if (ARC_COND(c, 0)) goto L_10b07c;
  /* 10b02c: cmp w9, #0x10 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(16));
  /* 10b030: b.ne #0x10b078 */
  if (ARC_COND(c, 1)) goto L_10b078;
  /* 10b034: ldrb w9, [x23] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 23)));
  /* 10b038: cmp w9, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(45));
  /* 10b03c: b.eq #0x10b048 */
  if (ARC_COND(c, 0)) goto L_10b048;
  /* 10b040: cmp w9, #0x2b */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(43));
  /* 10b044: b.ne #0x10b050 */
  if (ARC_COND(c, 1)) goto L_10b050;
L_10b048:;
  /* 10b048: add x26, x23, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* 10b04c: b #0x10b07c */
  goto L_10b07c;
L_10b050:;
  /* 10b050: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 10b054: b.lt #0x10b078 */
  if (ARC_COND(c, 11)) goto L_10b078;
  /* 10b058: cmp w9, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(48));
  /* 10b05c: b.ne #0x10b078 */
  if (ARC_COND(c, 1)) goto L_10b078;
  /* 10b060: ldrb w9, [x23, #1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 23) + INT64_C(1))));
  /* 10b064: orr w9, w9, #0x20 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(32)));
  /* 10b068: cmp w9, #0x78 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(120));
  /* 10b06c: b.ne #0x10b078 */
  if (ARC_COND(c, 1)) goto L_10b078;
  /* 10b070: add x26, x23, #2 */
  ARC_X_W(c, 26, (ARC_X_R(c, 23) + UINT64_C(2)));
  /* 10b074: b #0x10b07c */
  goto L_10b07c;
L_10b078:;
  /* 10b078: mov x26, x23 */
  ARC_X_W(c, 26, ARC_X_R(c, 23));
L_10b07c:;
  /* 10b07c: sub x9, x29, #0x1e */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) - UINT64_C(30)));
  /* 10b080: cmp x23, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 9));
  /* 10b084: b.eq #0x10b0a0 */
  if (ARC_COND(c, 0)) goto L_10b0a0;
  /* 10b088: lsl x0, x8, #1 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(1)) & 63)));
  /* 10b08c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1093776));
  fn1_1428a8(c);
  /* 10b090: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* 10b094: mov x27, x0 */
  ARC_X_W(c, 27, ARC_X_R(c, 0));
  /* 10b098: cbnz x0, #0x10b0a8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_10b0a8;
  /* 10b09c: bl #0x142c08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1093792));
  fn1_142c08(c);
L_10b0a0:;
  /* 10b0a0: mov x25, xzr */
  ARC_X_W(c, 25, ARC_X_R(c, 31));
  /* 10b0a4: add x27, sp, #0x2f */
  ARC_X_W(c, 27, ((c)->sp + UINT64_C(47)));
L_10b0a8:;
  /* 10b0a8: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 10b0ac: add x1, x20, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(48)));
  /* 10b0b0: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1093812));
  fn1_143460(c);
  /* 10b0b4: add x4, sp, #0x20 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(32)));
  /* 10b0b8: add x5, sp, #0x18 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(24)));
  /* 10b0bc: add x6, sp, #0x10 */
  ARC_X_W(c, 6, ((c)->sp + UINT64_C(16)));
  /* 10b0c0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 10b0c4: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 10b0c8: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 10b0cc: mov x3, x27 */
  ARC_X_W(c, 3, ARC_X_R(c, 27));
  /* 10b0d0: bl #0x143910 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1093844));
  fn1_143910(c);
  /* 10b0d4: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 10b0d8: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1093852));
  fn1_143478(c);
  /* 10b0dc: ldp x3, x2, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    ARC_X_W(c, 3, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 10b0e0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 10b0e4: mov x1, x27 */
  ARC_X_W(c, 1, ARC_X_R(c, 27));
  /* 10b0e8: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* 10b0ec: mov w5, w19 */
  ARC_W_W(c, 5, ARC_W_R(c, 19));
  /* 10b0f0: bl #0x10b5d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1093876));
  fn1_10b5d8(c);
  /* 10b0f4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10b0f8: cbz x25, #0x10b104 */
  if ((ARC_X_R(c, 25)) == 0) goto L_10b104;
  /* 10b0fc: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 10b100: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1093892));
  fn1_142800(c);
L_10b104:;
  /* 10b104: cbz x22, #0x10b110 */
  if ((ARC_X_R(c, 22)) == 0) goto L_10b110;
  /* 10b108: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 10b10c: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1093904));
  fn1_142800(c);
L_10b110:;
  /* 10b110: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10b114: ldp x20, x19, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 10b118: ldr x27, [sp, #0xa0] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(160))));
  /* 10b11c: ldp x22, x21, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 10b120: ldp x24, x23, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 10b124: ldp x26, x25, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 10b128: ldp x29, x30, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 10b12c: add sp, sp, #0xf0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(240)));
  /* 10b130: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 10b134: ret  */
  return;
L_10b138:;
  /* 10b138: nop  */
  /* nop: no architectural effect here */
  /* 10b13c: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10b140: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1093956));
  fn1_1424b8(c);
  /* 10b144: cbz w0, #0x10af04 */
  if ((ARC_W_R(c, 0)) == 0) goto L_10af04;
  /* 10b148: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 10b14c: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 10b150: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 10b154: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 10b158: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1093980));
  fn1_1441e0(c);
  /* 10b15c: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 10b160: str x0, [x8, #0xc30] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 10b164: nop  */
  /* nop: no architectural effect here */
  /* 10b168: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10b16c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094000));
  fn1_1424d0(c);
  /* 10b170: b #0x10af04 */
  goto L_10af04;
L_10b174:;
  /* 10b174: nop  */
  /* nop: no architectural effect here */
  /* 10b178: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10b17c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094016));
  fn1_1424b8(c);
  /* 10b180: cbz w0, #0x10afb0 */
  if ((ARC_W_R(c, 0)) == 0) goto L_10afb0;
  /* 10b184: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 10b188: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 10b18c: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 10b190: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 10b194: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094040));
  fn1_1441e0(c);
  /* 10b198: str x0, [x23, #0xc30] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 10b19c: nop  */
  /* nop: no architectural effect here */
  /* 10b1a0: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10b1a4: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094056));
  fn1_1424d0(c);
  /* 10b1a8: b #0x10afb0 */
  goto L_10afb0;
L_10b1ac:;
  /* 10b1ac: bl #0x142c08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094064));
  fn1_142c08(c);
L_10b1b0:;
  /* 10b1b0: nop  */
  /* nop: no architectural effect here */
  /* 10b1b4: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10b1b8: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094076));
  fn1_1424b8(c);
  /* 10b1bc: cbz w0, #0x10af30 */
  if ((ARC_W_R(c, 0)) == 0) goto L_10af30;
  /* 10b1c0: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 10b1c4: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 10b1c8: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 10b1cc: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 10b1d0: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094100));
  fn1_1441e0(c);
  /* 10b1d4: str x0, [x23, #0xc30] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 10b1d8: nop  */
  /* nop: no architectural effect here */
  /* 10b1dc: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10b1e0: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094116));
  fn1_1424d0(c);
  /* 10b1e4: b #0x10af30 */
  goto L_10af30;
L_10b1e8:;
  /* 10b1e8: nop  */
  /* nop: no architectural effect here */
  /* 10b1ec: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10b1f0: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094132));
  fn1_1424b8(c);
  /* 10b1f4: cbz w0, #0x10afdc */
  if ((ARC_W_R(c, 0)) == 0) goto L_10afdc;
  /* 10b1f8: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 10b1fc: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 10b200: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 10b204: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 10b208: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094156));
  fn1_1441e0(c);
  /* 10b20c: str x0, [x23, #0xc30] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 10b210: nop  */
  /* nop: no architectural effect here */
  /* 10b214: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10b218: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094172));
  fn1_1424d0(c);
  /* 10b21c: b #0x10afdc */
  goto L_10afdc;
  /* 10b220: b #0x10b22c */
  goto L_10b22c;
  /* 10b224: b #0x10b22c */
  goto L_10b22c;
  /* 10b228: b #0x10b22c */
  goto L_10b22c;
L_10b22c:;
  /* 10b22c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10b230: nop  */
  /* nop: no architectural effect here */
  /* 10b234: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10b238: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094204));
  fn1_1424e8(c);
  /* 10b23c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10b240: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094212));
  fn1_9cc20(c);
  /* 10b244: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094216));
  fn1_9cc20(c);
  /* 10b248: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10b24c: cbz x22, #0x10b274 */
  if ((ARC_X_R(c, 22)) == 0) goto L_10b274;
  /* 10b250: b #0x10b288 */
  goto L_10b288;
  /* 10b254: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094232));
  fn1_9cc20(c);
  /* 10b258: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10b25c: b #0x10b26c */
  goto L_10b26c;
  /* 10b260: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10b264: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 10b268: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094252));
  fn1_143478(c);
L_10b26c:;
  /* 10b26c: cbnz x25, #0x10b27c */
  if ((ARC_X_R(c, 25)) != 0) goto L_10b27c;
  /* 10b270: cbnz x22, #0x10b288 */
  if ((ARC_X_R(c, 22)) != 0) goto L_10b288;
L_10b274:;
  /* 10b274: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10b278: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094268));
  fn1_9cc20(c);
L_10b27c:;
  /* 10b27c: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 10b280: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094276));
  fn1_142800(c);
  /* 10b284: cbz x22, #0x10b274 */
  if ((ARC_X_R(c, 22)) == 0) goto L_10b274;
L_10b288:;
  /* 10b288: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 10b28c: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094288));
  fn1_142800(c);
  /* 10b290: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10b294: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094296));
  fn1_9cc20(c);
}

void fn1_112ec0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039054016));
  /* 112ec0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 112ec4: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 112ec8: stp x26, x25, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 112ecc: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 112ed0: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 112ed4: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 112ed8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 112edc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 112ee0: ldr x0, [x0] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 0)));
  /* 112ee4: mov w21, w4 */
  ARC_W_W(c, 21, ARC_W_R(c, 4));
  /* 112ee8: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* 112eec: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 112ef0: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* 112ef4: cbz x0, #0x112f48 */
  if ((ARC_X_R(c, 0)) == 0) goto L_112f48;
  /* 112ef8: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 112efc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 112f00: b.eq #0x112f2c */
  if (ARC_COND(c, 0)) goto L_112f2c;
  /* 112f04: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 112f08: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 112f0c: b.eq #0x112f40 */
  if (ARC_COND(c, 0)) goto L_112f40;
L_112f10:;
  /* 112f10: ldr x0, [x20] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 20)));
  /* 112f14: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* 112f18: cset w24, eq */
  ARC_W_W(c, 24, (ARC_COND(c, 0) ? 1 : 0));
  /* 112f1c: cbnz x23, #0x112f50 */
  if ((ARC_X_R(c, 23)) != 0) goto L_112f50;
L_112f20:;
  /* 112f20: tbnz w24, #0, #0x112fa4 */
  if (((ARC_W_R(c, 24)) >> 0 & 1) != 0) goto L_112fa4;
  /* 112f24: mov x23, xzr */
  ARC_X_W(c, 23, ARC_X_R(c, 31));
  /* 112f28: b #0x112f90 */
  goto L_112f90;
L_112f2c:;
  /* 112f2c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 112f30: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 112f34: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1126200));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 112f38: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 112f3c: b.ne #0x112f10 */
  if (ARC_COND(c, 1)) goto L_112f10;
L_112f40:;
  /* 112f40: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 112f44: str xzr, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 31));
L_112f48:;
  /* 112f48: mov w24, #1 */
  ARC_W_W(c, 24, UINT64_C(1));
  /* 112f4c: cbz x23, #0x112f20 */
  if ((ARC_X_R(c, 23)) == 0) goto L_112f20;
L_112f50:;
  /* 112f50: ldp x8, x9, [x23, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 112f54: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 112f58: b.eq #0x112f64 */
  if (ARC_COND(c, 0)) goto L_112f64;
  /* 112f5c: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 112f60: b #0x112f74 */
  goto L_112f74;
L_112f64:;
  /* 112f64: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 112f68: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 112f6c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 112f70: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1126260));
  arc_dispatch(c, ARC_X_R(c, 8));
L_112f74:;
  /* 112f74: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 112f78: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 112f7c: cmp w24, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 24), ARC_W_R(c, 8));
  /* 112f80: b.eq #0x112fa4 */
  if (ARC_COND(c, 0)) goto L_112fa4;
  /* 112f84: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 112f88: ldr x0, [x20] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 20)));
  /* 112f8c: csel x23, xzr, x23, eq */
  ARC_X_W(c, 23, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 23)));
L_112f90:;
  /* 112f90: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 112f94: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 112f98: b.eq #0x112fb0 */
  if (ARC_COND(c, 0)) goto L_112fb0;
  /* 112f9c: ldr w24, [x8] */
  ARC_W_W(c, 24, arc_ld32(ARC_X_R(c, 8)));
  /* 112fa0: b #0x112fc0 */
  goto L_112fc0;
L_112fa4:;
  /* 112fa4: mov w24, wzr */
  ARC_W_W(c, 24, ARC_W_R(c, 31));
  /* 112fa8: mov w8, #6 */
  ARC_W_W(c, 8, UINT64_C(6));
  /* 112fac: b #0x1131f8 */
  goto L_1131f8;
L_112fb0:;
  /* 112fb0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 112fb4: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 112fb8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1126332));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 112fbc: mov w24, w0 */
  ARC_W_W(c, 24, ARC_W_R(c, 0));
L_112fc0:;
  /* 112fc0: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 112fc4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 112fc8: mov w1, #0x40 */
  ARC_W_W(c, 1, UINT64_C(64));
  /* 112fcc: mov w2, w24 */
  ARC_W_W(c, 2, ARC_W_R(c, 24));
  /* 112fd0: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 112fd4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1126360));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 112fd8: tbz w0, #0, #0x113018 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_113018;
  /* 112fdc: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 112fe0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 112fe4: mov w1, w24 */
  ARC_W_W(c, 1, ARC_W_R(c, 24));
  /* 112fe8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 112fec: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* 112ff0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1126388));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 112ff4: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 112ff8: ldr x0, [x20] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 20)));
  /* 112ffc: and w24, w8, #0xff */
  ARC_W_W(c, 24, (ARC_W_R(c, 8) & UINT64_C(255)));
  /* 113000: ldp x9, x10, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 113004: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 113008: b.eq #0x113024 */
  if (ARC_COND(c, 0)) goto L_113024;
  /* 11300c: add x8, x9, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(4)));
  /* 113010: str x8, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 8));
  /* 113014: b #0x113030 */
  goto L_113030;
L_113018:;
  /* 113018: mov w24, wzr */
  ARC_W_W(c, 24, ARC_W_R(c, 31));
  /* 11301c: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 113020: b #0x1131f8 */
  goto L_1131f8;
L_113024:;
  /* 113024: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 113028: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 11302c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1126448));
  arc_dispatch(c, ARC_X_R(c, 8));
L_113030:;
  /* 113030: mov w26, #0xa */
  ARC_W_W(c, 26, UINT64_C(10));
  /* 113034: b #0x11304c */
  goto L_11304c;
L_113038:;
  /* 113038: add x9, x9, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(4)));
  /* 11303c: str x9, [x8, #0x18] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(24)), ARC_X_R(c, 9));
L_113040:;
  /* 113040: mul w8, w24, w26 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 24)) * (uint32_t)(ARC_W_R(c, 26))));
  /* 113044: sub w21, w21, #1 */
  ARC_W_W(c, 21, (ARC_W_R(c, 21) - UINT64_C(1)));
  /* 113048: add w24, w8, w25, uxtb */
  ARC_W_W(c, 24, (ARC_W_R(c, 8) + ((uint64_t)(uint8_t)(ARC_W_R(c, 25)))));
L_11304c:;
  /* 11304c: ldr x0, [x20] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 20)));
  /* 113050: cbz x0, #0x11309c */
  if ((ARC_X_R(c, 0)) == 0) goto L_11309c;
  /* 113054: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 113058: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 11305c: b.eq #0x113084 */
  if (ARC_COND(c, 0)) goto L_113084;
  /* 113060: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 113064: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 113068: b.eq #0x113098 */
  if (ARC_COND(c, 0)) goto L_113098;
L_11306c:;
  /* 11306c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 113070: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 113074: cset w25, eq */
  ARC_W_W(c, 25, (ARC_COND(c, 0) ? 1 : 0));
  /* 113078: cbnz x23, #0x1130a4 */
  if ((ARC_X_R(c, 23)) != 0) goto L_1130a4;
L_11307c:;
  /* 11307c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 113080: b #0x1130d4 */
  goto L_1130d4;
L_113084:;
  /* 113084: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 113088: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 11308c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1126544));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 113090: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 113094: b.ne #0x11306c */
  if (ARC_COND(c, 1)) goto L_11306c;
L_113098:;
  /* 113098: str xzr, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 31));
L_11309c:;
  /* 11309c: mov w25, #1 */
  ARC_W_W(c, 25, UINT64_C(1));
  /* 1130a0: cbz x23, #0x11307c */
  if ((ARC_X_R(c, 23)) == 0) goto L_11307c;
L_1130a4:;
  /* 1130a4: ldp x8, x9, [x23, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1130a8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1130ac: b.eq #0x1130b8 */
  if (ARC_COND(c, 0)) goto L_1130b8;
  /* 1130b0: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 1130b4: b #0x1130c8 */
  goto L_1130c8;
L_1130b8:;
  /* 1130b8: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 1130bc: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1130c0: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1130c4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1126600));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1130c8:;
  /* 1130c8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1130cc: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 1130d0: csel x23, xzr, x23, eq */
  ARC_X_W(c, 23, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 23)));
L_1130d4:;
  /* 1130d4: ldr x0, [x20] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 20)));
  /* 1130d8: cmp w25, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 25), ARC_W_R(c, 8));
  /* 1130dc: sub w24, w24, #0x30 */
  ARC_W_W(c, 24, (ARC_W_R(c, 24) - UINT64_C(48)));
  /* 1130e0: b.eq #0x11316c */
  if (ARC_COND(c, 0)) goto L_11316c;
  /* 1130e4: cmp w21, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 21), UINT64_C(2));
  /* 1130e8: b.lo #0x11316c */
  if (ARC_COND(c, 3)) goto L_11316c;
  /* 1130ec: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1130f0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1130f4: b.eq #0x113100 */
  if (ARC_COND(c, 0)) goto L_113100;
  /* 1130f8: ldr w25, [x8] */
  ARC_W_W(c, 25, arc_ld32(ARC_X_R(c, 8)));
  /* 1130fc: b #0x113110 */
  goto L_113110;
L_113100:;
  /* 113100: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 113104: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 113108: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1126668));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11310c: mov w25, w0 */
  ARC_W_W(c, 25, ARC_W_R(c, 0));
L_113110:;
  /* 113110: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 113114: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 113118: mov w1, #0x40 */
  ARC_W_W(c, 1, UINT64_C(64));
  /* 11311c: mov w2, w25 */
  ARC_W_W(c, 2, ARC_W_R(c, 25));
  /* 113120: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 113124: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1126696));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 113128: tbz w0, #0, #0x113204 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_113204;
  /* 11312c: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 113130: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 113134: mov w1, w25 */
  ARC_W_W(c, 1, ARC_W_R(c, 25));
  /* 113138: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 11313c: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* 113140: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1126724));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 113144: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 113148: mov w25, w0 */
  ARC_W_W(c, 25, ARC_W_R(c, 0));
  /* 11314c: ldp x9, x10, [x8, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 113150: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 113154: b.ne #0x113038 */
  if (ARC_COND(c, 1)) goto L_113038;
  /* 113158: ldr x9, [x8] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 8)));
  /* 11315c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 113160: ldr x9, [x9, #0x50] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(80))));
  /* 113164: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1126760));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 113168: b #0x113040 */
  goto L_113040;
L_11316c:;
  /* 11316c: cbz x0, #0x1131b8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1131b8;
  /* 113170: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 113174: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 113178: b.eq #0x1131a0 */
  if (ARC_COND(c, 0)) goto L_1131a0;
  /* 11317c: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 113180: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 113184: b.eq #0x1131b4 */
  if (ARC_COND(c, 0)) goto L_1131b4;
L_113188:;
  /* 113188: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 11318c: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 113190: cset w20, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? 1 : 0));
  /* 113194: cbnz x23, #0x1131c0 */
  if ((ARC_X_R(c, 23)) != 0) goto L_1131c0;
L_113198:;
  /* 113198: tbnz w20, #0, #0x1131f4 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) != 0) goto L_1131f4;
  /* 11319c: b #0x113204 */
  goto L_113204;
L_1131a0:;
  /* 1131a0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1131a4: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1131a8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1126828));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1131ac: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1131b0: b.ne #0x113188 */
  if (ARC_COND(c, 1)) goto L_113188;
L_1131b4:;
  /* 1131b4: str xzr, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 31));
L_1131b8:;
  /* 1131b8: mov w20, #1 */
  ARC_W_W(c, 20, UINT64_C(1));
  /* 1131bc: cbz x23, #0x113198 */
  if ((ARC_X_R(c, 23)) == 0) goto L_113198;
L_1131c0:;
  /* 1131c0: ldp x8, x9, [x23, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1131c4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1131c8: b.eq #0x1131d4 */
  if (ARC_COND(c, 0)) goto L_1131d4;
  /* 1131cc: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 1131d0: b #0x1131e4 */
  goto L_1131e4;
L_1131d4:;
  /* 1131d4: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 1131d8: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1131dc: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1131e0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1126884));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1131e4:;
  /* 1131e4: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1131e8: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 1131ec: eor w8, w20, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 20) ^ ARC_W_R(c, 8)));
  /* 1131f0: tbnz w8, #0, #0x113204 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_113204;
L_1131f4:;
  /* 1131f4: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
L_1131f8:;
  /* 1131f8: ldr w9, [x19] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 19)));
  /* 1131fc: orr w8, w9, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) | ARC_W_R(c, 8)));
  /* 113200: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_113204:;
  /* 113204: mov w0, w24 */
  ARC_W_W(c, 0, ARC_W_R(c, 24));
  /* 113208: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 11320c: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 113210: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 113214: ldp x26, x25, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 113218: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 11321c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 113220: ret  */
  return;
}

void fn1_114018(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039058456));
  /* 114018: bti c */
  /* bti: no architectural effect here */
  /* 11401c: mov x9, x0 */
  ARC_X_W(c, 9, ARC_X_R(c, 0));
  /* 114020: ldrb w10, [x9, #0x30]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(48));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(48));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* 114024: tbnz w10, #0, #0x11403c */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_11403c;
  /* 114028: ldr q0, [x9] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 9)), arc_ld64(ARC_X_R(c, 9) + 8));
  /* 11402c: ldr x9, [x9, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(16))));
  /* 114030: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* 114034: str x9, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 9));
  /* 114038: ret  */
  return;
L_11403c:;
  /* 11403c: ldp x2, x1, [x0, #0x38] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(56));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 114040: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 114044: b #0xe22b8 */
  fn1_e22b8(c); return;
}

void fn1_11f43c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039104572));
  /* 11f43c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 11f440: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 11f444: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 11f448: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 11f44c: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 11f450: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 11f454: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 11f458: adrp x23, #0x151000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11f45c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 11f460: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11f464: ldr x23, [x23, #0xc98] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 23) + INT64_C(3224))));
  /* 11f468: ldar x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11f46c: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11f470: b.eq #0x11f52c */
  if (ARC_COND(c, 0)) goto L_11f52c;
  /* 11f474: nop  */
  /* nop: no architectural effect here */
  /* 11f478: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11f47c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1176704));
  fn1_142518(c);
  /* 11f480: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11f484: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11f488: b.ne #0x11f4b4 */
  if (ARC_COND(c, 1)) goto L_11f4b4;
  /* 11f48c: nop  */
  /* nop: no architectural effect here */
  /* 11f490: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11f494: nop  */
  /* nop: no architectural effect here */
  /* 11f498: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_11f49c:;
  /* 11f49c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11f4a0: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 11f4a4: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1176744));
  fn1_142530(c);
  /* 11f4a8: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11f4ac: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11f4b0: b.eq #0x11f49c */
  if (ARC_COND(c, 0)) goto L_11f49c;
L_11f4b4:;
  /* 11f4b4: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11f4b8: cbz x8, #0x11f4cc */
  if ((ARC_X_R(c, 8)) == 0) goto L_11f4cc;
  /* 11f4bc: nop  */
  /* nop: no architectural effect here */
  /* 11f4c0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11f4c4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1176776));
  fn1_142560(c);
  /* 11f4c8: b #0x11f52c */
  goto L_11f52c;
L_11f4cc:;
  /* 11f4cc: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11f4d0: str x23, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 23));
  /* 11f4d4: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11f4d8: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 11f4dc: nop  */
  /* nop: no architectural effect here */
  /* 11f4e0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11f4e4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1176808));
  fn1_142560(c);
  /* 11f4e8: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11f4ec: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11f4f0: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11f4f4: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1176824));
  fn1_a2030(c);
  /* 11f4f8: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11f4fc: str w8, [x23, #8] */
  arc_st32((ARC_X_R(c, 23) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11f500: nop  */
  /* nop: no architectural effect here */
  /* 11f504: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11f508: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1176844));
  fn1_142518(c);
  /* 11f50c: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11f510: stlr x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 11f514: nop  */
  /* nop: no architectural effect here */
  /* 11f518: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11f51c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1176864));
  fn1_142560(c);
  /* 11f520: nop  */
  /* nop: no architectural effect here */
  /* 11f524: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11f528: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1176876));
  fn1_142578(c);
L_11f52c:;
  /* 11f52c: ldrsw x8, [x23, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 23) + INT64_C(8)))));
  /* 11f530: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 11f534: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11f538: sub x22, x8, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11f53c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1176896));
  fn1_db2e0(c);
  /* 11f540: mov x21, x20 */
  ARC_X_W(c, 21, ARC_X_R(c, 20));
  /* 11f544: ldp x8, x9, [x21, #0x10]! */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11f548: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11f54c: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11f550: cmp x10, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 22));
  /* 11f554: b.hi #0x11f580 */
  if (ARC_COND(c, 8)) goto L_11f580;
  /* 11f558: add x9, x22, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* 11f55c: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11f560: b.ls #0x11f574 */
  if (ARC_COND(c, 9)) goto L_11f574;
  /* 11f564: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11f568: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1176940));
  fn1_1352bc(c);
  /* 11f56c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11f570: b #0x11f580 */
  goto L_11f580;
L_11f574:;
  /* 11f574: b.hs #0x11f580 */
  if (ARC_COND(c, 2)) goto L_11f580;
  /* 11f578: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11f57c: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11f580:;
  /* 11f580: ldr x20, [x8, x22, lsl #3] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3))));
  /* 11f584: cbz x20, #0x11f5a8 */
  if ((ARC_X_R(c, 20)) == 0) goto L_11f5a8;
  /* 11f588: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 11f58c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11f590: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1176980));
  fn1_bd950(c);
  /* 11f594: cbnz x0, #0x11f5a8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11f5a8;
  /* 11f598: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 11f59c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11f5a0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11f5a4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1177000));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11f5a8:;
  /* 11f5a8: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11f5ac: str x19, [x8, x22, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3)), ARC_X_R(c, 19));
  /* 11f5b0: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 11f5b4: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 11f5b8: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 11f5bc: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 11f5c0: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 11f5c4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 11f5c8: ret  */
  return;
  /* 11f5cc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11f5d0: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 11f5d4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11f5d8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1177052));
  fn1_bd950(c);
  /* 11f5dc: cbnz x0, #0x11f604 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11f604;
  /* 11f5e0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11f5e4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11f5e8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11f5ec: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1177072));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11f5f0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11f5f4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1177080));
  fn1_9cc20(c);
  /* 11f5f8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11f5fc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 11f600: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1177092));
  fn1_d2a78(c);
L_11f604:;
  /* 11f604: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11f608: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1177100));
  fn1_9cc20(c);
}

void fn1_1267f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039134192));
  /* 1267f0: bti c */
  /* bti: no architectural effect here */
  /* 1267f4: and w0, w1, #0xff */
  ARC_W_W(c, 0, (ARC_W_R(c, 1) & UINT64_C(255)));
  /* 1267f8: ret  */
  return;
}

void fn1_128eb8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039144120));
  /* 128eb8: bti c */
  /* bti: no architectural effect here */
  /* 128ebc: sub x8, x1, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* 128ec0: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* 128ec4: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* 128ec8: b.lt #0x128f08 */
  if (ARC_COND(c, 11)) goto L_128f08;
  /* 128ecc: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* 128ed0: tbz w4, #2, #0x128f08 */
  if (((ARC_W_R(c, 4)) >> 2 & 1) == 0) goto L_128f08;
  /* 128ed4: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* 128ed8: cmp w8, #0xef */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(239));
  /* 128edc: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* 128ee0: b.ne #0x128f08 */
  if (ARC_COND(c, 1)) goto L_128f08;
  /* 128ee4: ldrb w8, [x0, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(1))));
  /* 128ee8: cmp w8, #0xbb */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(187));
  /* 128eec: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* 128ef0: b.ne #0x128f08 */
  if (ARC_COND(c, 1)) goto L_128f08;
  /* 128ef4: ldrb w8, [x0, #2] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(2))));
  /* 128ef8: cmp w8, #0xbf */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(191));
  /* 128efc: mov w8, #3 */
  ARC_W_W(c, 8, UINT64_C(3));
  /* 128f00: csel x8, x8, xzr, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 31)));
  /* 128f04: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
L_128f08:;
  /* 128f08: cbz x2, #0x1290bc */
  if ((ARC_X_R(c, 2)) == 0) goto L_1290bc;
  /* 128f0c: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* 128f10: b.hs #0x1290bc */
  if (ARC_COND(c, 2)) goto L_1290bc;
  /* 128f14: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
L_128f18:;
  /* 128f18: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* 128f1c: cmp x3, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 3), ARC_X_R(c, 10));
  /* 128f20: b.lo #0x1290bc */
  if (ARC_COND(c, 3)) goto L_1290bc;
  /* 128f24: tbnz w10, #7, #0x128f38 */
  if (((ARC_W_R(c, 10)) >> 7 & 1) != 0) goto L_128f38;
  /* 128f28: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 128f2c: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* 128f30: b.lo #0x1290b0 */
  if (ARC_COND(c, 3)) goto L_1290b0;
  /* 128f34: b #0x1290bc */
  goto L_1290bc;
L_128f38:;
  /* 128f38: cmp w10, #0xc2 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(194));
  /* 128f3c: b.lo #0x1290bc */
  if (ARC_COND(c, 3)) goto L_1290bc;
  /* 128f40: cmp w10, #0xdf */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(223));
  /* 128f44: b.hi #0x128f84 */
  if (ARC_COND(c, 8)) goto L_128f84;
  /* 128f48: sub x11, x1, x8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 1) - ARC_X_R(c, 8)));
  /* 128f4c: cmp x11, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(2));
  /* 128f50: b.lt #0x1290bc */
  if (ARC_COND(c, 11)) goto L_1290bc;
  /* 128f54: ldrb w11, [x8, #1] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 8) + INT64_C(1))));
  /* 128f58: and w12, w11, #0xc0 */
  ARC_W_W(c, 12, (ARC_W_R(c, 11) & UINT64_C(192)));
  /* 128f5c: cmp w12, #0x80 */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(128));
  /* 128f60: b.ne #0x1290bc */
  if (ARC_COND(c, 1)) goto L_1290bc;
  /* 128f64: and w11, w11, #0x3f */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) & UINT64_C(63)));
  /* 128f68: bfi w11, w10, #6, #5 */
  ARC_W_W(c, 11, (((uint32_t)(ARC_W_R(c, 11)) & UINT64_C(4294965311)) | ((((uint32_t)(ARC_W_R(c, 10))) & UINT64_C(31)) << 6)));
  /* 128f6c: cmp x3, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 3), ARC_X_R(c, 11));
  /* 128f70: b.lo #0x1290bc */
  if (ARC_COND(c, 3)) goto L_1290bc;
  /* 128f74: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* 128f78: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* 128f7c: b.lo #0x1290b0 */
  if (ARC_COND(c, 3)) goto L_1290b0;
  /* 128f80: b #0x1290bc */
  goto L_1290bc;
L_128f84:;
  /* 128f84: cmp w10, #0xef */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(239));
  /* 128f88: b.hi #0x128fc0 */
  if (ARC_COND(c, 8)) goto L_128fc0;
  /* 128f8c: sub x11, x1, x8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 1) - ARC_X_R(c, 8)));
  /* 128f90: cmp x11, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(3));
  /* 128f94: b.lt #0x1290bc */
  if (ARC_COND(c, 11)) goto L_1290bc;
  /* 128f98: ldrb w12, [x8, #1] */
  ARC_W_W(c, 12, arc_ld8((ARC_X_R(c, 8) + INT64_C(1))));
  /* 128f9c: ldrb w11, [x8, #2] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 8) + INT64_C(2))));
  /* 128fa0: cmp w10, #0xed */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(237));
  /* 128fa4: b.eq #0x12900c */
  if (ARC_COND(c, 0)) goto L_12900c;
  /* 128fa8: cmp w10, #0xe0 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(224));
  /* 128fac: b.ne #0x12901c */
  if (ARC_COND(c, 1)) goto L_12901c;
  /* 128fb0: and w13, w12, #0xe0 */
  ARC_W_W(c, 13, (ARC_W_R(c, 12) & UINT64_C(224)));
  /* 128fb4: cmp w13, #0xa0 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(160));
  /* 128fb8: b.eq #0x129028 */
  if (ARC_COND(c, 0)) goto L_129028;
  /* 128fbc: b #0x1290bc */
  goto L_1290bc;
L_128fc0:;
  /* 128fc0: cmp w10, #0xf4 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(244));
  /* 128fc4: b.hi #0x1290bc */
  if (ARC_COND(c, 8)) goto L_1290bc;
  /* 128fc8: sub x11, x1, x8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 1) - ARC_X_R(c, 8)));
  /* 128fcc: cmp x11, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(4));
  /* 128fd0: b.lt #0x1290bc */
  if (ARC_COND(c, 11)) goto L_1290bc;
  /* 128fd4: sub x11, x2, x9 */
  ARC_X_W(c, 11, (ARC_X_R(c, 2) - ARC_X_R(c, 9)));
  /* 128fd8: cmp x11, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(2));
  /* 128fdc: b.lo #0x1290bc */
  if (ARC_COND(c, 3)) goto L_1290bc;
  /* 128fe0: ldrb w13, [x8, #1] */
  ARC_W_W(c, 13, arc_ld8((ARC_X_R(c, 8) + INT64_C(1))));
  /* 128fe4: ldrsb w11, [x8, #2] */
  ARC_W_W(c, 11, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 8) + INT64_C(2)))));
  /* 128fe8: cmp w10, #0xf4 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(244));
  /* 128fec: ldrb w12, [x8, #3] */
  ARC_W_W(c, 12, arc_ld8((ARC_X_R(c, 8) + INT64_C(3))));
  /* 128ff0: b.eq #0x129058 */
  if (ARC_COND(c, 0)) goto L_129058;
  /* 128ff4: cmp w10, #0xf0 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(240));
  /* 128ff8: b.ne #0x129068 */
  if (ARC_COND(c, 1)) goto L_129068;
  /* 128ffc: sub w14, w13, #0x90 */
  ARC_W_W(c, 14, (ARC_W_R(c, 13) - UINT64_C(144)));
  /* 129000: cmp w14, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 14), UINT64_C(48));
  /* 129004: b.lo #0x129074 */
  if (ARC_COND(c, 3)) goto L_129074;
  /* 129008: b #0x1290bc */
  goto L_1290bc;
L_12900c:;
  /* 12900c: sxtb w13, w12 */
  ARC_W_W(c, 13, ((int32_t)(int8_t)(ARC_W_R(c, 12))));
  /* 129010: cmn w13, #0x60 */
  (void)arc_add32(c, ARC_W_R(c, 13), UINT64_C(96), 0);
  /* 129014: b.lt #0x129028 */
  if (ARC_COND(c, 11)) goto L_129028;
  /* 129018: b #0x1290bc */
  goto L_1290bc;
L_12901c:;
  /* 12901c: sxtb w13, w12 */
  ARC_W_W(c, 13, ((int32_t)(int8_t)(ARC_W_R(c, 12))));
  /* 129020: cmn w13, #0x41 */
  (void)arc_add32(c, ARC_W_R(c, 13), UINT64_C(65), 0);
  /* 129024: b.gt #0x1290bc */
  if (ARC_COND(c, 12)) goto L_1290bc;
L_129028:;
  /* 129028: and w13, w11, #0xc0 */
  ARC_W_W(c, 13, (ARC_W_R(c, 11) & UINT64_C(192)));
  /* 12902c: cmp w13, #0x80 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(128));
  /* 129030: b.ne #0x1290bc */
  if (ARC_COND(c, 1)) goto L_1290bc;
  /* 129034: ubfiz w10, w10, #0xc, #4 */
  ARC_W_W(c, 10, ((uint32_t)((((uint32_t)(ARC_W_R(c, 10))) & UINT64_C(15))) << 12));
  /* 129038: bfi w10, w12, #6, #6 */
  ARC_W_W(c, 10, (((uint32_t)(ARC_W_R(c, 10)) & UINT64_C(4294963263)) | ((((uint32_t)(ARC_W_R(c, 12))) & UINT64_C(63)) << 6)));
  /* 12903c: bfxil w10, w11, #0, #6 */
  ARC_W_W(c, 10, (((uint32_t)(ARC_W_R(c, 10)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 11))) >> 0) & UINT64_C(63))));
  /* 129040: cmp x3, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 3), ARC_X_R(c, 10));
  /* 129044: b.lo #0x1290bc */
  if (ARC_COND(c, 3)) goto L_1290bc;
  /* 129048: add x8, x8, #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3)));
  /* 12904c: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* 129050: b.lo #0x1290b0 */
  if (ARC_COND(c, 3)) goto L_1290b0;
  /* 129054: b #0x1290bc */
  goto L_1290bc;
L_129058:;
  /* 129058: sxtb w14, w13 */
  ARC_W_W(c, 14, ((int32_t)(int8_t)(ARC_W_R(c, 13))));
  /* 12905c: cmn w14, #0x70 */
  (void)arc_add32(c, ARC_W_R(c, 14), UINT64_C(112), 0);
  /* 129060: b.lt #0x129074 */
  if (ARC_COND(c, 11)) goto L_129074;
  /* 129064: b #0x1290bc */
  goto L_1290bc;
L_129068:;
  /* 129068: sxtb w14, w13 */
  ARC_W_W(c, 14, ((int32_t)(int8_t)(ARC_W_R(c, 13))));
  /* 12906c: cmn w14, #0x41 */
  (void)arc_add32(c, ARC_W_R(c, 14), UINT64_C(65), 0);
  /* 129070: b.gt #0x1290bc */
  if (ARC_COND(c, 12)) goto L_1290bc;
L_129074:;
  /* 129074: cmn w11, #0x41 */
  (void)arc_add32(c, ARC_W_R(c, 11), UINT64_C(65), 0);
  /* 129078: b.gt #0x1290bc */
  if (ARC_COND(c, 12)) goto L_1290bc;
  /* 12907c: and w14, w12, #0xc0 */
  ARC_W_W(c, 14, (ARC_W_R(c, 12) & UINT64_C(192)));
  /* 129080: cmp w14, #0x80 */
  (void)arc_sub32(c, ARC_W_R(c, 14), UINT64_C(128));
  /* 129084: b.ne #0x1290bc */
  if (ARC_COND(c, 1)) goto L_1290bc;
  /* 129088: ubfiz x10, x10, #0x12, #3 */
  ARC_X_W(c, 10, ((uint64_t)((((uint64_t)(ARC_X_R(c, 10))) & UINT64_C(7))) << 18));
  /* 12908c: bfi x10, x13, #0xc, #6 */
  ARC_X_W(c, 10, (((uint64_t)(ARC_X_R(c, 10)) & UINT64_C(18446744073709293567)) | ((((uint64_t)(ARC_X_R(c, 13))) & UINT64_C(63)) << 12)));
  /* 129090: bfi x10, x11, #6, #6 */
  ARC_X_W(c, 10, (((uint64_t)(ARC_X_R(c, 10)) & UINT64_C(18446744073709547583)) | ((((uint64_t)(ARC_X_R(c, 11))) & UINT64_C(63)) << 6)));
  /* 129094: bfxil x10, x12, #0, #6 */
  ARC_X_W(c, 10, (((uint64_t)(ARC_X_R(c, 10)) & UINT64_C(18446744073709551552)) | ((((uint64_t)(ARC_X_R(c, 12))) >> 0) & UINT64_C(63))));
  /* 129098: cmp x10, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 3));
  /* 12909c: b.hi #0x1290bc */
  if (ARC_COND(c, 8)) goto L_1290bc;
  /* 1290a0: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 1290a4: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 1290a8: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* 1290ac: b.hs #0x1290bc */
  if (ARC_COND(c, 2)) goto L_1290bc;
L_1290b0:;
  /* 1290b0: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 1290b4: cmp x9, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 2));
  /* 1290b8: b.lo #0x128f18 */
  if (ARC_COND(c, 3)) goto L_128f18;
L_1290bc:;
  /* 1290bc: sub w0, w8, w0 */
  ARC_W_W(c, 0, (ARC_W_R(c, 8) - ARC_W_R(c, 0)));
  /* 1290c0: ret  */
  return;
}

void fn1_12a8c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039150784));
  /* 12a8c0: bti c */
  /* bti: no architectural effect here */
  /* 12a8c4: ldrb w9, [x0, #0x18] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12a8c8: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 12a8cc: tbz w9, #1, #0x12a8ec */
  if (((ARC_W_R(c, 9)) >> 1 & 1) == 0) goto L_12a8ec;
  /* 12a8d0: sub x9, x6, x5 */
  ARC_X_W(c, 9, (ARC_X_R(c, 6) - ARC_X_R(c, 5)));
  /* 12a8d4: cmp x9, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(2));
  /* 12a8d8: b.ge #0x12a8e4 */
  if (ARC_COND(c, 10)) goto L_12a8e4;
L_12a8dc:;
  /* 12a8dc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 12a8e0: b #0x12a950 */
  goto L_12a950;
L_12a8e4:;
  /* 12a8e4: mov w9, #0xfffe */
  ARC_W_W(c, 9, UINT64_C(65534));
  /* 12a8e8: strh w9, [x5], #2 */
  { const uint64_t _a = ARC_X_R(c, 5);
    ARC_X_W(c, 5, ARC_X_R(c, 5) + INT64_C(2));
    arc_st16(_a, ARC_W_R(c, 9));
  }
L_12a8ec:;
  /* 12a8ec: cmp x2, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 3));
  /* 12a8f0: b.hs #0x12a944 */
  if (ARC_COND(c, 2)) goto L_12a944;
  /* 12a8f4: sub x9, x6, x5 */
  ARC_X_W(c, 9, (ARC_X_R(c, 6) - ARC_X_R(c, 5)));
  /* 12a8f8: mov w10, #0xd800 */
  ARC_W_W(c, 10, UINT64_C(55296));
L_12a8fc:;
  /* 12a8fc: ldrh w11, [x2] */
  ARC_W_W(c, 11, arc_ld16(ARC_X_R(c, 2)));
  /* 12a900: and w12, w11, #0xf800 */
  ARC_W_W(c, 12, (ARC_W_R(c, 11) & UINT64_C(63488)));
  /* 12a904: cmp w12, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 10));
  /* 12a908: ccmp x8, x11, #0, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* 12a90c: b.lo #0x12a94c */
  if (ARC_COND(c, 3)) goto L_12a94c;
  /* 12a910: subs x9, x9, #2 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 9), UINT64_C(2)));
  /* 12a914: b.lt #0x12a8dc */
  if (ARC_COND(c, 11)) goto L_12a8dc;
  /* 12a918: lsr w13, w11, #8 */
  ARC_W_W(c, 13, ((uint32_t)(ARC_W_R(c, 11)) >> ((UINT64_C(8)) & 31)));
  /* 12a91c: add x2, x2, #2 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2)));
  /* 12a920: add x12, x5, #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 5) + UINT64_C(2)));
  /* 12a924: cmp x2, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 3));
  /* 12a928: strb w11, [x5, #1] */
  arc_st8((ARC_X_R(c, 5) + INT64_C(1)), ARC_W_R(c, 11));
  /* 12a92c: strb w13, [x5] */
  arc_st8(ARC_X_R(c, 5), ARC_W_R(c, 13));
  /* 12a930: mov x5, x12 */
  ARC_X_W(c, 5, ARC_X_R(c, 12));
  /* 12a934: b.lo #0x12a8fc */
  if (ARC_COND(c, 3)) goto L_12a8fc;
  /* 12a938: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 12a93c: mov x5, x12 */
  ARC_X_W(c, 5, ARC_X_R(c, 12));
  /* 12a940: b #0x12a950 */
  goto L_12a950;
L_12a944:;
  /* 12a944: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 12a948: b #0x12a950 */
  goto L_12a950;
L_12a94c:;
  /* 12a94c: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
L_12a950:;
  /* 12a950: str x2, [x4] */
  arc_st64(ARC_X_R(c, 4), ARC_X_R(c, 2));
  /* 12a954: str x5, [x7] */
  arc_st64(ARC_X_R(c, 7), ARC_X_R(c, 5));
  /* 12a958: ret  */
  return;
}

void fn1_12bd14(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039155988));
  /* 12bd14: bti c */
  /* bti: no architectural effect here */
  /* 12bd18: ldr w0, [x0, #0x14] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(20))));
  /* 12bd1c: ret  */
  return;
}

void fn1_13397c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039187836));
  /* 13397c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 133980: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 133984: str x25, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 25));
  /* 133988: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 13398c: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 133990: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 133994: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 133998: tbz w2, #0, #0x1339bc */
  if (((ARC_W_R(c, 2)) >> 0 & 1) == 0) goto L_1339bc;
  /* 13399c: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 1339a0: ldr x9, [x1, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* 1339a4: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 1339a8: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1339ac: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 1339b0: cmp x8, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(4));
  /* 1339b4: cset w20, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? 1 : 0));
  /* 1339b8: b #0x1339c0 */
  goto L_1339c0;
L_1339bc:;
  /* 1339bc: mov w20, wzr */
  ARC_W_W(c, 20, ARC_W_R(c, 31));
L_1339c0:;
  /* 1339c0: and w8, w3, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 3) & UINT64_C(255)));
  /* 1339c4: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 1339c8: b.eq #0x133a54 */
  if (ARC_COND(c, 0)) goto L_133a54;
  /* 1339cc: cbnz w8, #0x133d48 */
  if ((ARC_W_R(c, 8)) != 0) goto L_133d48;
  /* 1339d0: cbz w20, #0x133c24 */
  if ((ARC_W_R(c, 20)) == 0) goto L_133c24;
  /* 1339d4: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 1339d8: ldp x11, x9, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1339dc: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 1339e0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1339e4: csel x8, x10, x11, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 11)));
  /* 1339e8: add x10, x1, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 1) + UINT64_C(4)));
  /* 1339ec: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 1339f0: csel x19, x10, x9, eq */
  ARC_X_W(c, 19, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 1339f4: cmp x8, #0xc */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(12));
  /* 1339f8: b.eq #0x133c24 */
  if (ARC_COND(c, 0)) goto L_133c24;
  /* 1339fc: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* 133a00: add x9, x19, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* 133a04: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 133a08: b.ne #0x133b74 */
  if (ARC_COND(c, 1)) goto L_133b74;
  /* 133a0c: mov x9, x8 */
  ARC_X_W(c, 9, ARC_X_R(c, 8));
  /* 133a10: ldr w21, [x9, #-4]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(-4));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(-4));
    ARC_W_W(c, 21, arc_ld32(_a));
  }
  /* 133a14: subs x2, x9, x19 */
  ARC_X_W(c, 2, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 19)));
  /* 133a18: b.eq #0x133a4c */
  if (ARC_COND(c, 0)) goto L_133a4c;
  /* 133a1c: sub x8, x8, x2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 2)));
  /* 133a20: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 133a24: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* 133a28: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 133a2c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 133a30: mov w24, w4 */
  ARC_W_W(c, 24, ARC_W_R(c, 4));
  /* 133a34: mov w25, w5 */
  ARC_W_W(c, 25, ARC_W_R(c, 5));
  /* 133a38: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1260092));
  fn1_1449f0(c);
  /* 133a3c: mov w5, w25 */
  ARC_W_W(c, 5, ARC_W_R(c, 25));
  /* 133a40: mov w4, w24 */
  ARC_W_W(c, 4, ARC_W_R(c, 24));
  /* 133a44: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 133a48: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
L_133a4c:;
  /* 133a4c: str w21, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 21));
  /* 133a50: b #0x133c24 */
  goto L_133c24;
L_133a54:;
  /* 133a54: and w8, w5, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 5) & UINT64_C(255)));
  /* 133a58: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 133a5c: b.le #0x133aac */
  if (ARC_COND(c, 13)) goto L_133aac;
  /* 133a60: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 133a64: b.eq #0x133ae4 */
  if (ARC_COND(c, 0)) goto L_133ae4;
  /* 133a68: cmp w8, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(3));
  /* 133a6c: b.eq #0x133b18 */
  if (ARC_COND(c, 0)) goto L_133b18;
  /* 133a70: cmp w8, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(4));
  /* 133a74: b.ne #0x133d48 */
  if (ARC_COND(c, 1)) goto L_133d48;
  /* 133a78: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* 133a7c: and w8, w4, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 4) & UINT64_C(255)));
  /* 133a80: strb w9, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* 133a84: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 133a88: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 133a8c: strb w9, [x0, #3] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 9));
  /* 133a90: b.eq #0x133e3c */
  if (ARC_COND(c, 0)) goto L_133e3c;
  /* 133a94: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 133a98: b.eq #0x133db4 */
  if (ARC_COND(c, 0)) goto L_133db4;
  /* 133a9c: cbnz w8, #0x133d48 */
  if ((ARC_W_R(c, 8)) != 0) goto L_133d48;
  /* 133aa0: mov w8, #3 */
  ARC_W_W(c, 8, UINT64_C(3));
  /* 133aa4: sturh w8, [x0, #1] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 8));
  /* 133aa8: b #0x133d54 */
  goto L_133d54;
L_133aac:;
  /* 133aac: cbz w8, #0x133b4c */
  if ((ARC_W_R(c, 8)) == 0) goto L_133b4c;
  /* 133ab0: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 133ab4: b.ne #0x133d48 */
  if (ARC_COND(c, 1)) goto L_133d48;
  /* 133ab8: mov w9, #3 */
  ARC_W_W(c, 9, UINT64_C(3));
  /* 133abc: and w8, w4, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 4) & UINT64_C(255)));
  /* 133ac0: strb w9, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* 133ac4: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 133ac8: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 133acc: strb w9, [x0, #3] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 9));
  /* 133ad0: b.eq #0x133bb8 */
  if (ARC_COND(c, 0)) goto L_133bb8;
  /* 133ad4: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 133ad8: b.ne #0x133b3c */
  if (ARC_COND(c, 1)) goto L_133b3c;
L_133adc:;
  /* 133adc: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
  /* 133ae0: b #0x133e40 */
  goto L_133e40;
L_133ae4:;
  /* 133ae4: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* 133ae8: and w8, w4, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 4) & UINT64_C(255)));
  /* 133aec: strb w9, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* 133af0: mov w9, #3 */
  ARC_W_W(c, 9, UINT64_C(3));
  /* 133af4: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 133af8: strb w9, [x0, #3] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 9));
  /* 133afc: b.eq #0x133dbc */
  if (ARC_COND(c, 0)) goto L_133dbc;
  /* 133b00: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 133b04: b.eq #0x133da4 */
  if (ARC_COND(c, 0)) goto L_133da4;
  /* 133b08: cbnz w8, #0x133d48 */
  if ((ARC_W_R(c, 8)) != 0) goto L_133d48;
  /* 133b0c: mov w8, #0x400 */
  ARC_W_W(c, 8, UINT64_C(1024));
  /* 133b10: sturh w8, [x0, #1] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 8));
  /* 133b14: b #0x133d54 */
  goto L_133d54;
L_133b18:;
  /* 133b18: mov w9, #3 */
  ARC_W_W(c, 9, UINT64_C(3));
  /* 133b1c: and w8, w4, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 4) & UINT64_C(255)));
  /* 133b20: strb w9, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* 133b24: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 133b28: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 133b2c: strb w9, [x0, #3] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 9));
  /* 133b30: b.eq #0x133bb8 */
  if (ARC_COND(c, 0)) goto L_133bb8;
  /* 133b34: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 133b38: b.eq #0x133adc */
  if (ARC_COND(c, 0)) goto L_133adc;
L_133b3c:;
  /* 133b3c: cbnz w8, #0x133d48 */
  if ((ARC_W_R(c, 8)) != 0) goto L_133d48;
  /* 133b40: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
  /* 133b44: sturh w8, [x0, #1] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 8));
  /* 133b48: b #0x133d54 */
  goto L_133d54;
L_133b4c:;
  /* 133b4c: adrp x8, #0x53000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(339968)));
  /* 133b50: ldr d0, [x8, #0x2c0] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(704))));
  /* 133b54: ands w8, w4, #0xff */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 4) & UINT64_C(255));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 8, _r); }
  /* 133b58: str s0, [x0] */
  arc_st32(ARC_X_R(c, 0), (c)->q[0].u32[0]);
  /* 133b5c: b.eq #0x133d54 */
  if (ARC_COND(c, 0)) goto L_133d54;
  /* 133b60: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 133b64: b.eq #0x133d54 */
  if (ARC_COND(c, 0)) goto L_133d54;
  /* 133b68: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 133b6c: b.eq #0x133d40 */
  if (ARC_COND(c, 0)) goto L_133d40;
  /* 133b70: b #0x133d48 */
  goto L_133d48;
L_133b74:;
  /* 133b74: add x9, x19, #0xc */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 133b78: sub x10, x8, x9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* 133b7c: cmp x10, #0xc */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(12));
  /* 133b80: b.ne #0x133bc0 */
  if (ARC_COND(c, 1)) goto L_133bc0;
  /* 133b84: add x10, x19, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* 133b88: add x11, x9, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(4)));
L_133b8c:;
  /* 133b8c: ldur w12, [x11, #-4] */
  ARC_W_W(c, 12, arc_ld32((ARC_X_R(c, 11) + INT64_C(-4))));
  /* 133b90: ldur w13, [x10, #-4] */
  ARC_W_W(c, 13, arc_ld32((ARC_X_R(c, 10) + INT64_C(-4))));
  /* 133b94: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* 133b98: stur w12, [x10, #-4] */
  arc_st32((ARC_X_R(c, 10) + INT64_C(-4)), ARC_W_R(c, 12));
  /* 133b9c: stur w13, [x11, #-4] */
  arc_st32((ARC_X_R(c, 11) + INT64_C(-4)), ARC_W_R(c, 13));
  /* 133ba0: b.eq #0x133c24 */
  if (ARC_COND(c, 0)) goto L_133c24;
  /* 133ba4: cmp x11, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 8));
  /* 133ba8: add x11, x11, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(4)));
  /* 133bac: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 133bb0: b.ne #0x133b8c */
  if (ARC_COND(c, 1)) goto L_133b8c;
  /* 133bb4: b #0x133c24 */
  goto L_133c24;
L_133bb8:;
  /* 133bb8: mov w8, #0x201 */
  ARC_W_W(c, 8, UINT64_C(513));
  /* 133bbc: b #0x133dc0 */
  goto L_133dc0;
L_133bc0:;
  /* 133bc0: asr x11, x10, #2 */
  ARC_X_W(c, 11, ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(2)) & 63))));
  /* 133bc4: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
L_133bc8:;
  /* 133bc8: mov x12, x10 */
  ARC_X_W(c, 12, ARC_X_R(c, 10));
  /* 133bcc: mov x10, x11 */
  ARC_X_W(c, 10, ARC_X_R(c, 11));
  /* 133bd0: sdiv x11, x12, x11 */
  ARC_X_W(c, 11, ((int64_t)(ARC_X_R(c, 11)) == 0 ? 0 : ((int64_t)(ARC_X_R(c, 12)) / (int64_t)(ARC_X_R(c, 11)))));
  /* 133bd4: msub x11, x11, x10, x12 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 12)) - ((uint64_t)(ARC_X_R(c, 11)) * (uint64_t)(ARC_X_R(c, 10)))));
  /* 133bd8: cbnz x11, #0x133bc8 */
  if ((ARC_X_R(c, 11)) != 0) goto L_133bc8;
  /* 133bdc: add x10, x19, x10, lsl #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 10)) << 2)));
L_133be0:;
  /* 133be0: ldr w11, [x10, #-4]! */
  { const uint64_t _a = (ARC_X_R(c, 10) + INT64_C(-4));
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(-4));
    ARC_W_W(c, 11, arc_ld32(_a));
  }
  /* 133be4: add x14, x10, #0xc */
  ARC_X_W(c, 14, (ARC_X_R(c, 10) + UINT64_C(12)));
  /* 133be8: mov x13, x10 */
  ARC_X_W(c, 13, ARC_X_R(c, 10));
L_133bec:;
  /* 133bec: mov x12, x14 */
  ARC_X_W(c, 12, ARC_X_R(c, 14));
  /* 133bf0: sub x14, x8, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 8) - ARC_X_R(c, 14)));
  /* 133bf4: mov x15, x12 */
  ARC_X_W(c, 15, ARC_X_R(c, 12));
  /* 133bf8: sub x16, x9, x14 */
  ARC_X_W(c, 16, (ARC_X_R(c, 9) - ARC_X_R(c, 14)));
  /* 133bfc: cmp x14, #0xc */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(12));
  /* 133c00: ldr w17, [x15], #0xc */
  { const uint64_t _a = ARC_X_R(c, 15);
    ARC_X_W(c, 15, ARC_X_R(c, 15) + INT64_C(12));
    ARC_W_W(c, 17, arc_ld32(_a));
  }
  /* 133c04: csel x14, x15, x16, gt */
  ARC_X_W(c, 14, (ARC_COND(c, 12) ? (ARC_X_R(c, 15)) : ARC_X_R(c, 16)));
  /* 133c08: cmp x14, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 10));
  /* 133c0c: str w17, [x13] */
  arc_st32(ARC_X_R(c, 13), ARC_W_R(c, 17));
  /* 133c10: mov x13, x12 */
  ARC_X_W(c, 13, ARC_X_R(c, 12));
  /* 133c14: b.ne #0x133bec */
  if (ARC_COND(c, 1)) goto L_133bec;
  /* 133c18: cmp x10, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 19));
  /* 133c1c: str w11, [x12] */
  arc_st32(ARC_X_R(c, 12), ARC_W_R(c, 11));
  /* 133c20: b.ne #0x133be0 */
  if (ARC_COND(c, 1)) goto L_133be0;
L_133c24:;
  /* 133c24: and w8, w5, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 5) & UINT64_C(255)));
  /* 133c28: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 133c2c: b.le #0x133c74 */
  if (ARC_COND(c, 13)) goto L_133c74;
  /* 133c30: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 133c34: b.eq #0x133cb4 */
  if (ARC_COND(c, 0)) goto L_133cb4;
  /* 133c38: cmp w8, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(3));
  /* 133c3c: b.eq #0x133ce8 */
  if (ARC_COND(c, 0)) goto L_133ce8;
  /* 133c40: cmp w8, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(4));
  /* 133c44: b.ne #0x133d48 */
  if (ARC_COND(c, 1)) goto L_133d48;
  /* 133c48: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 133c4c: and w8, w4, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 4) & UINT64_C(255)));
  /* 133c50: strb w9, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* 133c54: mov w9, #3 */
  ARC_W_W(c, 9, UINT64_C(3));
  /* 133c58: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 133c5c: strb w9, [x0, #3] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 9));
  /* 133c60: b.eq #0x133d70 */
  if (ARC_COND(c, 0)) goto L_133d70;
  /* 133c64: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 133c68: b.ne #0x133cd8 */
  if (ARC_COND(c, 1)) goto L_133cd8;
  /* 133c6c: mov w8, #0x200 */
  ARC_W_W(c, 8, UINT64_C(512));
  /* 133c70: b #0x133df8 */
  goto L_133df8;
L_133c74:;
  /* 133c74: cbz w8, #0x133d1c */
  if ((ARC_W_R(c, 8)) == 0) goto L_133d1c;
  /* 133c78: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 133c7c: b.ne #0x133d48 */
  if (ARC_COND(c, 1)) goto L_133d48;
  /* 133c80: mov w9, #3 */
  ARC_W_W(c, 9, UINT64_C(3));
  /* 133c84: and w8, w4, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 4) & UINT64_C(255)));
  /* 133c88: strb w9, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* 133c8c: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* 133c90: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 133c94: strb w9, [x0, #3] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 9));
  /* 133c98: b.eq #0x133e6c */
  if (ARC_COND(c, 0)) goto L_133e6c;
  /* 133c9c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 133ca0: b.eq #0x133df4 */
  if (ARC_COND(c, 0)) goto L_133df4;
  /* 133ca4: cbnz w8, #0x133d48 */
  if ((ARC_W_R(c, 8)) != 0) goto L_133d48;
  /* 133ca8: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 133cac: sturh w8, [x0, #1] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 8));
  /* 133cb0: b #0x133d54 */
  goto L_133d54;
L_133cb4:;
  /* 133cb4: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 133cb8: and w8, w4, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 4) & UINT64_C(255)));
  /* 133cbc: strb w9, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* 133cc0: mov w9, #3 */
  ARC_W_W(c, 9, UINT64_C(3));
  /* 133cc4: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 133cc8: strb w9, [x0, #3] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 9));
  /* 133ccc: b.eq #0x133d70 */
  if (ARC_COND(c, 0)) goto L_133d70;
  /* 133cd0: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 133cd4: b.eq #0x133d78 */
  if (ARC_COND(c, 0)) goto L_133d78;
L_133cd8:;
  /* 133cd8: cbnz w8, #0x133d48 */
  if ((ARC_W_R(c, 8)) != 0) goto L_133d48;
L_133cdc:;
  /* 133cdc: mov w8, #0x200 */
  ARC_W_W(c, 8, UINT64_C(512));
  /* 133ce0: sturh w8, [x0, #1] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 8));
  /* 133ce4: b #0x133d54 */
  goto L_133d54;
L_133ce8:;
  /* 133ce8: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 133cec: and w8, w4, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 4) & UINT64_C(255)));
  /* 133cf0: strb w9, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* 133cf4: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* 133cf8: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 133cfc: strb w9, [x0, #3] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 9));
  /* 133d00: b.eq #0x133dac */
  if (ARC_COND(c, 0)) goto L_133dac;
  /* 133d04: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 133d08: b.eq #0x133d9c */
  if (ARC_COND(c, 0)) goto L_133d9c;
  /* 133d0c: cbnz w8, #0x133d48 */
  if ((ARC_W_R(c, 8)) != 0) goto L_133d48;
  /* 133d10: mov w8, #0x300 */
  ARC_W_W(c, 8, UINT64_C(768));
  /* 133d14: sturh w8, [x0, #1] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 8));
  /* 133d18: b #0x133d54 */
  goto L_133d54;
L_133d1c:;
  /* 133d1c: adrp x8, #0x53000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(339968)));
  /* 133d20: ldr d0, [x8, #0x2f8] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(760))));
  /* 133d24: ands w8, w4, #0xff */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 4) & UINT64_C(255));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 8, _r); }
  /* 133d28: str s0, [x0] */
  arc_st32(ARC_X_R(c, 0), (c)->q[0].u32[0]);
  /* 133d2c: b.eq #0x133d54 */
  if (ARC_COND(c, 0)) goto L_133d54;
  /* 133d30: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 133d34: b.eq #0x133d54 */
  if (ARC_COND(c, 0)) goto L_133d54;
  /* 133d38: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 133d3c: b.ne #0x133d48 */
  if (ARC_COND(c, 1)) goto L_133d48;
L_133d40:;
  /* 133d40: tbz w20, #0, #0x133e00 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) == 0) goto L_133e00;
  /* 133d44: b #0x133d54 */
  goto L_133d54;
L_133d48:;
  /* 133d48: adrp x8, #0x53000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(339968)));
  /* 133d4c: ldr d0, [x8, #0x2d8] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(728))));
  /* 133d50: str s0, [x0] */
  arc_st32(ARC_X_R(c, 0), (c)->q[0].u32[0]);
L_133d54:;
  /* 133d54: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 133d58: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* 133d5c: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 133d60: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 133d64: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 133d68: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 133d6c: ret  */
  return;
L_133d70:;
  /* 133d70: mov w8, #0x102 */
  ARC_W_W(c, 8, UINT64_C(258));
  /* 133d74: b #0x133e70 */
  goto L_133e70;
L_133d78:;
  /* 133d78: tbnz w20, #0, #0x133cdc */
  if (((ARC_W_R(c, 20)) >> 0 & 1) != 0) goto L_133cdc;
  /* 133d7c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 133d80: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 133d84: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 133d88: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 133d8c: mov w3, #0x20 */
  ARC_W_W(c, 3, UINT64_C(32));
  /* 133d90: bl #0x142d70 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1260948));
  fn1_142d70(c);
  /* 133d94: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 133d98: b #0x133cdc */
  goto L_133cdc;
L_133d9c:;
  /* 133d9c: mov w8, #0x301 */
  ARC_W_W(c, 8, UINT64_C(769));
  /* 133da0: b #0x133e70 */
  goto L_133e70;
L_133da4:;
  /* 133da4: mov w8, #0x400 */
  ARC_W_W(c, 8, UINT64_C(1024));
  /* 133da8: b #0x133e40 */
  goto L_133e40;
L_133dac:;
  /* 133dac: mov w8, #3 */
  ARC_W_W(c, 8, UINT64_C(3));
  /* 133db0: b #0x133df8 */
  goto L_133df8;
L_133db4:;
  /* 133db4: mov w8, #0x103 */
  ARC_W_W(c, 8, UINT64_C(259));
  /* 133db8: b #0x133dc0 */
  goto L_133dc0;
L_133dbc:;
  /* 133dbc: mov w8, #0x104 */
  ARC_W_W(c, 8, UINT64_C(260));
L_133dc0:;
  /* 133dc0: sturh w8, [x0, #1] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 8));
  /* 133dc4: cbz w20, #0x133d54 */
  if ((ARC_W_R(c, 20)) == 0) goto L_133d54;
  /* 133dc8: ldrb w9, [x1] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 1)));
  /* 133dcc: ldr x8, [x1, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* 133dd0: lsr x10, x9, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 133dd4: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 133dd8: csel x8, x10, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* 133ddc: sub x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 133de0: tbnz w9, #0, #0x133e2c */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_133e2c;
  /* 133de4: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* 133de8: strb w9, [x1], #4 */
  { const uint64_t _a = ARC_X_R(c, 1);
    ARC_X_W(c, 1, ARC_X_R(c, 1) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 133dec: mov x9, x1 */
  ARC_X_W(c, 9, ARC_X_R(c, 1));
  /* 133df0: b #0x133e34 */
  goto L_133e34;
L_133df4:;
  /* 133df4: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
L_133df8:;
  /* 133df8: sturh w8, [x0, #1] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 8));
  /* 133dfc: tbnz w20, #0, #0x133d54 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) != 0) goto L_133d54;
L_133e00:;
  /* 133e00: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 133e04: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 133e08: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 133e0c: mov w3, #0x20 */
  ARC_W_W(c, 3, UINT64_C(32));
  /* 133e10: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 133e14: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* 133e18: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 133e1c: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 133e20: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 133e24: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 133e28: b #0x142d70 */
  fn1_142d70(c); return;
L_133e2c:;
  /* 133e2c: ldr x9, [x1, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* 133e30: str x8, [x1, #8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(8)), ARC_X_R(c, 8));
L_133e34:;
  /* 133e34: str wzr, [x9, x8, lsl #2] */
  arc_st32((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 2)), ARC_W_R(c, 31));
  /* 133e38: b #0x133d54 */
  goto L_133d54;
L_133e3c:;
  /* 133e3c: mov w8, #0x300 */
  ARC_W_W(c, 8, UINT64_C(768));
L_133e40:;
  /* 133e40: sturh w8, [x0, #1] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 8));
  /* 133e44: tbnz w20, #0, #0x133d54 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) != 0) goto L_133d54;
  /* 133e48: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 133e4c: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* 133e50: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 133e54: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* 133e58: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 133e5c: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 133e60: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 133e64: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 133e68: b #0x142db8 */
  fn1_142db8(c); return;
L_133e6c:;
  /* 133e6c: mov w8, #0x401 */
  ARC_W_W(c, 8, UINT64_C(1025));
L_133e70:;
  /* 133e70: sturh w8, [x0, #1] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 8));
  /* 133e74: cbz w20, #0x133d54 */
  if ((ARC_W_R(c, 20)) == 0) goto L_133d54;
  /* 133e78: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 133e7c: ldr x9, [x1, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* 133e80: add x10, x1, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 1) + UINT64_C(4)));
  /* 133e84: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 133e88: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 133e8c: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 133e90: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* 133e94: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 133e98: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* 133e9c: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 133ea0: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 133ea4: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 133ea8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 133eac: b #0x1357a0 */
  fn1_1357a0(c); return;
}

void fn1_134cc0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192768));
  /* 134cc0: bti c */
  /* bti: no architectural effect here */
  /* 134cc4: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* 134cc8: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_137434(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039202868));
  /* 137434: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 137438: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13743c: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* 137440: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 137444: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 137448: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 13744c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 137450: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 137454: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 137458: ldr x8, [x8, #0xaa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2728))));
  /* 13745c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 137460: adrp x23, #0x15d000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 137464: nop  */
  /* nop: no architectural effect here */
  /* 137468: adr x22, #0x15dc40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432640)));
  /* 13746c: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 137470: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 137474: nop  */
  /* nop: no architectural effect here */
  /* 137478: adr x8, #0x15dd90 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 13747c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 137480: tbz w8, #0, #0x137510 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_137510;
L_137484:;
  /* 137484: ldr x8, [x23, #0xd88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 23) + INT64_C(3464))));
  /* 137488: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* 13748c: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* 137490: b.eq #0x1374a0 */
  if (ARC_COND(c, 0)) goto L_1374a0;
  /* 137494: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* 137498: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 13749c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1275040));
  fn1_db2e0(c);
L_1374a0:;
  /* 1374a0: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1374a4: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 1374a8: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* 1374ac: ldr x8, [x8, #0xe40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3648))));
  /* 1374b0: str w9, [x19, #0x40] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(64)), ARC_W_R(c, 9));
  /* 1374b4: stp xzr, xzr, [x19, #0x50] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1374b8: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 1374bc: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 1374c0: mov w8, #0x1000 */
  ARC_W_W(c, 8, UINT64_C(4096));
  /* 1374c4: stp q0, q0, [x19, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 1374c8: str q0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* 1374cc: str x8, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), ARC_X_R(c, 8));
  /* 1374d0: cbz x21, #0x1374e4 */
  if ((ARC_X_R(c, 21)) == 0) goto L_1374e4;
  /* 1374d4: cmp x21, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(0));
  /* 1374d8: mov w8, #0x7fffffff */
  ARC_W_W(c, 8, UINT64_C(2147483647));
  /* 1374dc: csel x0, x8, x21, lt */
  ARC_X_W(c, 0, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 21)));
  /* 1374e0: b #0x1374ec */
  goto L_1374ec;
L_1374e4:;
  /* 1374e4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1374e8: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1275116));
  fn1_142860(c);
L_1374ec:;
  /* 1374ec: add x8, x20, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + ARC_X_R(c, 0)));
  /* 1374f0: stp x20, x20, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* 1374f4: str x8, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 8));
  /* 1374f8: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1374fc: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 137500: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 137504: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 137508: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13750c: ret  */
  return;
L_137510:;
  /* 137510: nop  */
  /* nop: no architectural effect here */
  /* 137514: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 137518: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1275164));
  fn1_1424b8(c);
  /* 13751c: cbz w0, #0x137484 */
  if ((ARC_W_R(c, 0)) == 0) goto L_137484;
  /* 137520: bl #0x143ac0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1275172));
  fn1_143ac0(c);
  /* 137524: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 137528: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* 13752c: str x8, [x23, #0xd88] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(3464)), ARC_X_R(c, 8));
  /* 137530: b.eq #0x137540 */
  if (ARC_COND(c, 0)) goto L_137540;
  /* 137534: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* 137538: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 13753c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1275200));
  fn1_db2e0(c);
L_137540:;
  /* 137540: nop  */
  /* nop: no architectural effect here */
  /* 137544: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 137548: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1275212));
  fn1_1424d0(c);
  /* 13754c: b #0x137484 */
  goto L_137484;
  /* 137550: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 137554: nop  */
  /* nop: no architectural effect here */
  /* 137558: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 13755c: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1275232));
  fn1_1424e8(c);
  /* 137560: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 137564: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1275240));
  fn1_a1454(c);
}

void fn1_13aa5c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039216732));
  /* 13aa5c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13aa60: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13aa64: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13aa68: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 13aa6c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13aa70: cbz x1, #0x13aa94 */
  if ((ARC_X_R(c, 1)) == 0) goto L_13aa94;
  /* 13aa74: str wzr, [x1] */
  arc_st32(ARC_X_R(c, 1), ARC_W_R(c, 31));
  /* 13aa78: nop  */
  /* nop: no architectural effect here */
  /* 13aa7c: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13aa80: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13aa84: tbz w8, #0, #0x13aae4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13aae4;
L_13aa88:;
  /* 13aa88: nop  */
  /* nop: no architectural effect here */
  /* 13aa8c: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13aa90: str x8, [x1, #8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(8)), ARC_X_R(c, 8));
L_13aa94:;
  /* 13aa94: ldrb w8, [x19, #0x10] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(16))));
  /* 13aa98: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 13aa9c: b.ne #0x13aac0 */
  if (ARC_COND(c, 1)) goto L_13aac0;
  /* 13aaa0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13aaa4: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 13aaa8: bl #0x1445e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1288876));
  fn1_1445e8(c);
  /* 13aaac: tbnz w0, #0, #0x13aad0 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_13aad0;
  /* 13aab0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 13aab4: cbz x20, #0x13aac0 */
  if ((ARC_X_R(c, 20)) == 0) goto L_13aac0;
  /* 13aab8: ldr w8, [x1] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 1)));
  /* 13aabc: cbnz w8, #0x13aad0 */
  if ((ARC_W_R(c, 8)) != 0) goto L_13aad0;
L_13aac0:;
  /* 13aac0: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 13aac4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13aac8: strb w8, [x19, #0x10] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(16)), ARC_W_R(c, 8));
  /* 13aacc: bl #0x1445d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1288912));
  fn1_1445d0(c);
L_13aad0:;
  /* 13aad0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13aad4: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13aad8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13aadc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13aae0: ret  */
  return;
L_13aae4:;
  /* 13aae4: nop  */
  /* nop: no architectural effect here */
  /* 13aae8: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13aaec: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 13aaf0: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1288948));
  fn1_1424b8(c);
  /* 13aaf4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 13aaf8: cbz w0, #0x13aa88 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13aa88;
  /* 13aafc: nop  */
  /* nop: no architectural effect here */
  /* 13ab00: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13ab04: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1288968));
  fn1_1424d0(c);
  /* 13ab08: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 13ab0c: b #0x13aa88 */
  goto L_13aa88;
}

void fn1_141eb0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039246512));
  /* 141eb0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 141eb4: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 141eb8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 141ebc: adrp x0, #0x51000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(331776)));
  /* 141ec0: add x0, x0, #0x8c9 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2249)));
  /* 141ec4: bl #0xd7d6c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1318600));
  fn1_d7d6c(c);
}

void fn1_142908(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249160));
  /* 142908: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14290c: ldr x17, [x16, #0x38] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(56))));
  /* 142910: add x16, x16, #0x38 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(56)));
  /* 142914: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142918: nop  */
  /* nop: no architectural effect here */
  /* 14291c: nop  */
  /* nop: no architectural effect here */
}

void fn1_142f08(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250696));
  /* 142f08: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142f0c: ldr x17, [x16, #0x238] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(568))));
  /* 142f10: add x16, x16, #0x238 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(568)));
  /* 142f14: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142f18: nop  */
  /* nop: no architectural effect here */
  /* 142f1c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143508(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252232));
  /* 143508: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14350c: ldr x17, [x16, #0x438] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1080))));
  /* 143510: add x16, x16, #0x438 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1080)));
  /* 143514: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143518: nop  */
  /* nop: no architectural effect here */
  /* 14351c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143b08(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253768));
  /* 143b08: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143b0c: ldr x17, [x16, #0x638] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1592))));
  /* 143b10: add x16, x16, #0x638 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1592)));
  /* 143b14: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143b18: nop  */
  /* nop: no architectural effect here */
  /* 143b1c: nop  */
  /* nop: no architectural effect here */
}

void fn1_144108(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255304));
  /* 144108: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14410c: ldr x17, [x16, #0x838] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2104))));
  /* 144110: add x16, x16, #0x838 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2104)));
  /* 144114: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144118: nop  */
  /* nop: no architectural effect here */
  /* 14411c: nop  */
  /* nop: no architectural effect here */
}

void fn1_144708(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256840));
  /* 144708: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14470c: ldr x17, [x16, #0xa38] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2616))));
  /* 144710: add x16, x16, #0xa38 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2616)));
  /* 144714: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144718: nop  */
  /* nop: no architectural effect here */
  /* 14471c: nop  */
  /* nop: no architectural effect here */
}

