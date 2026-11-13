#include "lifted.h"

void fn1_9d5c4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038572484));
  /* 9d5c4: bti c */
  /* bti: no architectural effect here */
  /* 9d5c8: ret  */
  return;
}

void fn1_a1b40(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038590272));
  /* a1b40: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a1b44: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a1b48: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a1b4c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a1b50: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a1b54: cbz x3, #0xa1b84 */
  if ((ARC_X_R(c, 3)) == 0) goto L_a1b84;
  /* a1b58: sub x8, x1, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) - UINT64_C(1)));
  /* a1b5c: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* a1b60: neg x20, x2 */
  ARC_X_W(c, 20, ((uint64_t)0 - (uint64_t)(ARC_X_R(c, 2))));
  /* a1b64: madd x0, x2, x8, x0 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 0)) + ((uint64_t)(ARC_X_R(c, 2)) * (uint64_t)(ARC_X_R(c, 8)))));
  /* a1b68: add x21, x1, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 1) + UINT64_C(1)));
L_a1b6c:;
  /* a1b6c: subs x21, x21, #1 */
  ARC_X_W(c, 21, arc_sub64(c, ARC_X_R(c, 21), UINT64_C(1)));
  /* a1b70: b.eq #0xa1b84 */
  if (ARC_COND(c, 0)) goto L_a1b84;
  /* a1b74: add x22, x0, x20 */
  ARC_X_W(c, 22, (ARC_X_R(c, 0) + ARC_X_R(c, 20)));
  /* a1b78: blr x19 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(662396));
  arc_dispatch(c, ARC_X_R(c, 19));
  /* a1b7c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* a1b80: b #0xa1b6c */
  goto L_a1b6c;
L_a1b84:;
  /* a1b84: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a1b88: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a1b8c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a1b90: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a1b94: ret  */
  return;
  /* a1b98: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(662428));
  fn1_142488(c);
}

void fn1_a2b40(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038594368));
  /* a2b40: bti c */
  /* bti: no architectural effect here */
  /* a2b44: ldr x8, [x1, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* a2b48: ldr x9, [x0, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* a2b4c: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* a2b50: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* a2b54: b.eq #0xa2b5c */
  if (ARC_COND(c, 0)) goto L_a2b5c;
L_a2b58:;
  /* a2b58: ret  */
  return;
L_a2b5c:;
  /* a2b5c: ldr w8, [x1, #0x3c] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + INT64_C(60))));
  /* a2b60: cbz w8, #0xa2b9c */
  if ((ARC_W_R(c, 8)) == 0) goto L_a2b9c;
  /* a2b64: ldr x9, [x1, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(40))));
  /* a2b68: ldr x10, [x1, #0x50] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 1) + INT64_C(80))));
  /* a2b6c: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* a2b70: b.ne #0xa2b80 */
  if (ARC_COND(c, 1)) goto L_a2b80;
  /* a2b74: ldr x9, [x1, #0x20] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(32))));
  /* a2b78: cmp x9, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 2));
  /* a2b7c: b.eq #0xa2bb4 */
  if (ARC_COND(c, 0)) goto L_a2bb4;
L_a2b80:;
  /* a2b80: add w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* a2b84: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* a2b88: str w8, [x1, #0x3c] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(60)), ARC_W_R(c, 8));
  /* a2b8c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* a2b90: str w9, [x1, #0x30] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(48)), ARC_W_R(c, 9));
  /* a2b94: strb w8, [x1, #0x4e] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(78)), ARC_W_R(c, 8));
  /* a2b98: ret  */
  return;
L_a2b9c:;
  /* a2b9c: ldr x8, [x1, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(80))));
  /* a2ba0: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* a2ba4: str w3, [x1, #0x30] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(48)), ARC_W_R(c, 3));
  /* a2ba8: str w9, [x1, #0x3c] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(60)), ARC_W_R(c, 9));
  /* a2bac: stp x2, x8, [x1, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 2));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* a2bb0: ret  */
  return;
L_a2bb4:;
  /* a2bb4: ldr w8, [x1, #0x30] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + INT64_C(48))));
  /* a2bb8: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* a2bbc: b.ne #0xa2b58 */
  if (ARC_COND(c, 1)) goto L_a2b58;
  /* a2bc0: str w3, [x1, #0x30] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(48)), ARC_W_R(c, 3));
  /* a2bc4: ret  */
  return;
}

void fn1_a9898(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038622360));
  /* a9898: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a989c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a98a0: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* a98a4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a98a8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a98ac: ldp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* a98b0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a98b4: b.eq #0xa99a4 */
  if (ARC_COND(c, 0)) goto L_a99a4;
  /* a98b8: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* a98bc: cmp w10, #0x44 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(68));
  /* a98c0: b.ne #0xa99a4 */
  if (ARC_COND(c, 1)) goto L_a99a4;
  /* a98c4: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a98c8: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* a98cc: str x10, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 10));
  /* a98d0: b.eq #0xa99a4 */
  if (ARC_COND(c, 0)) goto L_a99a4;
  /* a98d4: ldrb w9, [x10] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 10)));
  /* a98d8: orr w9, w9, #0x20 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(32)));
  /* a98dc: cmp w9, #0x74 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(116));
  /* a98e0: b.ne #0xa99a4 */
  if (ARC_COND(c, 1)) goto L_a99a4;
  /* a98e4: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* a98e8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a98ec: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* a98f0: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(694516));
  fn1_aa69c(c);
  /* a98f4: cbz x0, #0xa99a8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a99a8;
  /* a98f8: ldp x10, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* a98fc: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* a9900: b.eq #0xa99a4 */
  if (ARC_COND(c, 0)) goto L_a99a4;
  /* a9904: ldrb w8, [x10] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 10)));
  /* a9908: cmp w8, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(69));
  /* a990c: b.ne #0xa99a4 */
  if (ARC_COND(c, 1)) goto L_a99a4;
  /* a9910: ldr x20, [x19, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* a9914: add x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* a9918: str x10, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 10));
  /* a991c: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* a9920: sub x11, x8, #0xfb0 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) - UINT64_C(4016)));
  /* a9924: cmn x11, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 11), UINT64_C(4081), 0);
  /* a9928: b.hi #0xa9950 */
  if (ARC_COND(c, 8)) goto L_a9950;
  /* a992c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a9930: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a9934: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(694584));
  fn1_1428a8(c);
  /* a9938: cbz x0, #0xa99bc */
  if ((ARC_X_R(c, 0)) == 0) goto L_a99bc;
  /* a993c: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a9940: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a9944: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a9948: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
  /* a994c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
L_a9950:;
  /* a9950: add x9, x8, #0x40 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* a9954: add x8, x20, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* a9958: adrp x10, #0x14a000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(1351680)));
  /* a995c: add x10, x10, #0x690 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(1680)));
  /* a9960: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
  /* a9964: mov w9, #0x3c */
  ARC_W_W(c, 9, UINT64_C(60));
  /* a9968: str x10, [x8, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(16));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 10));
  }
  /* a996c: adrp x10, #0x50000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(327680)));
  /* a9970: add x10, x10, #0xb01 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(2817)));
  /* a9974: strb w9, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 9));
  /* a9978: ldurh w9, [x8, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 8) + INT64_C(9))));
  /* a997c: mov w11, #8 */
  ARC_W_W(c, 11, UINT64_C(8));
  /* a9980: str x0, [x8, #0x20] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(32)), ARC_X_R(c, 0));
  /* a9984: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* a9988: stp x10, x11, [x8, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 11));
  }
  /* a998c: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* a9990: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a9994: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* a9998: stp xzr, xzr, [x8, #0x28] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a999c: sturh w9, [x8, #9] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(9)), ARC_W_R(c, 9));
  /* a99a0: b #0xa99a8 */
  goto L_a99a8;
L_a99a4:;
  /* a99a4: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
L_a99a8:;
  /* a99a8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a99ac: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* a99b0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a99b4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a99b8: ret  */
  return;
L_a99bc:;
  /* a99bc: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(694720));
  fn1_142488(c);
}

void fn1_b0c1c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038651932));
  /* b0c1c: bti c */
  /* bti: no architectural effect here */
  /* b0c20: mov w1, #0x38 */
  ARC_W_W(c, 1, UINT64_C(56));
  /* b0c24: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b52b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038670008));
  /* b52b8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b52bc: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b52c0: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b52c4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b52c8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b52cc: ldp x8, x10, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b52d0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b52d4: ldr w11, [x1, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 1) + INT64_C(32))));
  /* b52d8: ldr x0, [x1] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* b52dc: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b52e0: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b52e4: add w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* b52e8: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b52ec: str w11, [x1, #0x20] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(32)), ARC_W_R(c, 11));
  /* b52f0: b.ls #0xb531c */
  if (ARC_COND(c, 9)) goto L_b531c;
  /* b52f4: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b52f8: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b52fc: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b5300: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b5304: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b5308: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(742156));
  fn1_142878(c);
  /* b530c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b5310: cbz x0, #0xb54b0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b54b0;
  /* b5314: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b5318: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b531c:;
  /* b531c: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b5320: mov w9, #0x28 */
  ARC_W_W(c, 9, UINT64_C(40));
  /* b5324: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b5328: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b532c: ldr x21, [x20, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* b5330: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b5334: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b5338: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b533c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(742208));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b5340: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* b5344: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b5348: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b534c: b.eq #0xb5364 */
  if (ARC_COND(c, 0)) goto L_b5364;
  /* b5350: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b5354: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b5358: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b535c: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b5360: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(742244));
  arc_dispatch(c, ARC_X_R(c, 8));
L_b5364:;
  /* b5364: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b5368: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b536c: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b5370: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* b5374: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b5378: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* b537c: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b5380: b.ls #0xb53ac */
  if (ARC_COND(c, 9)) goto L_b53ac;
  /* b5384: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b5388: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b538c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b5390: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b5394: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b5398: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(742300));
  fn1_142878(c);
  /* b539c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b53a0: cbz x0, #0xb54b4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b54b4;
  /* b53a4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b53a8: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b53ac:;
  /* b53ac: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b53b0: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* b53b4: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b53b8: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b53bc: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b53c0: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b53c4: add w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* b53c8: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b53cc: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* b53d0: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b53d4: b.ls #0xb5400 */
  if (ARC_COND(c, 9)) goto L_b5400;
  /* b53d8: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b53dc: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b53e0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b53e4: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b53e8: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b53ec: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(742384));
  fn1_142878(c);
  /* b53f0: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b53f4: cbz x0, #0xb54b8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b54b8;
  /* b53f8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b53fc: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b5400:;
  /* b5400: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b5404: mov w9, #0x28 */
  ARC_W_W(c, 9, UINT64_C(40));
  /* b5408: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b540c: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b5410: ldr x20, [x20, #0x18] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* b5414: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b5418: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b541c: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b5420: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(742436));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b5424: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b5428: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b542c: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b5430: b.eq #0xb5448 */
  if (ARC_COND(c, 0)) goto L_b5448;
  /* b5434: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b5438: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b543c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b5440: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b5444: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(742472));
  arc_dispatch(c, ARC_X_R(c, 8));
L_b5448:;
  /* b5448: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b544c: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b5450: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b5454: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* b5458: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b545c: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* b5460: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b5464: b.ls #0xb5490 */
  if (ARC_COND(c, 9)) goto L_b5490;
  /* b5468: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b546c: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b5470: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b5474: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b5478: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b547c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(742528));
  fn1_142878(c);
  /* b5480: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b5484: cbz x0, #0xb54bc */
  if ((ARC_X_R(c, 0)) == 0) goto L_b54bc;
  /* b5488: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b548c: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b5490:;
  /* b5490: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b5494: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* b5498: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b549c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b54a0: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b54a4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b54a8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b54ac: ret  */
  return;
L_b54b0:;
  /* b54b0: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(742580));
  fn1_1427b8(c);
L_b54b4:;
  /* b54b4: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(742584));
  fn1_1427b8(c);
L_b54b8:;
  /* b54b8: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(742588));
  fn1_1427b8(c);
L_b54bc:;
  /* b54bc: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(742592));
  fn1_1427b8(c);
}

void fn1_b8158(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038681944));
  /* b8158: bti c */
  /* bti: no architectural effect here */
  /* b815c: ldr w8, [x1, #0x1c] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + INT64_C(28))));
  /* b8160: cmn w8, #1 */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(1), 0);
  /* b8164: b.eq #0xb819c */
  if (ARC_COND(c, 0)) goto L_b819c;
  /* b8168: ldr w8, [x1, #0x18] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + INT64_C(24))));
  /* b816c: ldr x9, [x0, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* b8170: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b8174: b.ls #0xb81b0 */
  if (ARC_COND(c, 9)) goto L_b81b0;
L_b8178:;
  /* b8178: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* b817c: ldr x0, [x9, x8, lsl #3] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 3))));
  /* b8180: ldrb w8, [x0, #0xa] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(10))));
  /* b8184: and w8, w8, #3 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(3)));
  /* b8188: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* b818c: b.ne #0xb81b8 */
  if (ARC_COND(c, 1)) goto L_b81b8;
  /* b8190: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* b8194: ldr x16, [x8, #8] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* b8198: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_b819c:;
  /* b819c: ldr x9, [x0, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* b81a0: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b81a4: stp wzr, w9, [x1, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(24));
    arc_st32(_pa, ARC_W_R(c, 31));
    arc_st32(_pa + 4, ARC_W_R(c, 9));
  }
  /* b81a8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b81ac: b.hi #0xb8178 */
  if (ARC_COND(c, 8)) goto L_b8178;
L_b81b0:;
  /* b81b0: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* b81b4: ret  */
  return;
L_b81b8:;
  /* b81b8: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* b81bc: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* b81c0: ret  */
  return;
}

void fn1_bb3b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038694832));
  /* bb3b0: bti c */
  /* bti: no architectural effect here */
  /* bb3b4: ldr x0, [x0, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* bb3b8: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* bb3bc: ubfx w8, w8, #0xa, #2 */
  ARC_W_W(c, 8, (((uint32_t)(ARC_W_R(c, 8)) >> 10) & UINT64_C(3)));
  /* bb3c0: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* bb3c4: b.ne #0xbb3d4 */
  if (ARC_COND(c, 1)) goto L_bb3d4;
  /* bb3c8: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* bb3cc: ldr x16, [x8, #0x10] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* bb3d0: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_bb3d4:;
  /* bb3d4: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* bb3d8: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* bb3dc: ret  */
  return;
}

void fn1_bdc30(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038705200));
  /* bdc30: bti c */
  /* bti: no architectural effect here */
  /* bdc34: nop  */
  /* nop: no architectural effect here */
  /* bdc38: adr x8, #0x1576e0 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1406688)));
  /* bdc3c: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* bdc40: b.lo #0xbdc58 */
  if (ARC_COND(c, 3)) goto L_bdc58;
  /* bdc44: adrp x8, #0x157000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404928)));
  /* bdc48: add x8, x8, #0x8e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2272)));
  /* bdc4c: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* bdc50: b.hs #0xbdc58 */
  if (ARC_COND(c, 2)) goto L_bdc58;
  /* bdc54: b #0xa2664 */
  fn1_a2664(c); return;
L_bdc58:;
  /* bdc58: b #0x142800 */
  fn1_142800(c); return;
}

void fn1_d1678(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038785656));
  /* d1678: bti c */
  /* bti: no architectural effect here */
  /* d167c: sub x8, x1, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* d1680: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* d1684: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* d1688: b.gt #0xd1698 */
  if (ARC_COND(c, 12)) goto L_d1698;
  /* d168c: b.hs #0xd176c */
  if (ARC_COND(c, 2)) goto L_d176c;
L_d1690:;
  /* d1690: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d1694: ret  */
  return;
L_d1698:;
  /* d1698: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* d169c: b.eq #0xd1794 */
  if (ARC_COND(c, 0)) goto L_d1794;
  /* d16a0: cmp x8, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(4));
  /* d16a4: b.eq #0xd1898 */
  if (ARC_COND(c, 0)) goto L_d1898;
  /* d16a8: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* d16ac: b.ne #0xd17e0 */
  if (ARC_COND(c, 1)) goto L_d17e0;
  /* d16b0: ldp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* d16b4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* d16b8: csel x10, x8, x9, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d16bc: csel x8, x8, x9, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d16c0: stp x8, x10, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* d16c4: ldr x8, [x0, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* d16c8: ldur x9, [x1, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d16cc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* d16d0: csel x10, x8, x9, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d16d4: csel x8, x8, x9, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d16d8: stur x10, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), ARC_X_R(c, 10));
  /* d16dc: str x8, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 8));
  /* d16e0: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* d16e4: ldur x8, [x1, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d16e8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* d16ec: csel x10, x8, x9, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d16f0: csel x8, x8, x9, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d16f4: stur x10, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), ARC_X_R(c, 10));
  /* d16f8: ldp x9, x10, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* d16fc: ldr x11, [x0, #8] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* d1700: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* d1704: csel x9, x9, x10, lo */
  ARC_X_W(c, 9, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* d1708: csel x8, x8, x10, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* d170c: stp x9, x8, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* d1710: ldur x8, [x1, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d1714: cmp x11, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 8));
  /* d1718: csel x9, x11, x8, hi */
  ARC_X_W(c, 9, (ARC_COND(c, 8) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 8)));
  /* d171c: csel x8, x11, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 8)));
  /* d1720: stur x9, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), ARC_X_R(c, 9));
  /* d1724: ldp x11, x10, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* d1728: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* d172c: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* d1730: csel x12, x10, x9, lo */
  ARC_X_W(c, 12, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* d1734: csel x10, x10, x9, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* d1738: cmp x12, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 11));
  /* d173c: csel x9, x9, x11, lo */
  ARC_X_W(c, 9, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 11)));
  /* d1740: csel x11, x12, x11, hi */
  ARC_X_W(c, 11, (ARC_COND(c, 8) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* d1744: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* d1748: csel x12, x10, x8, lo */
  ARC_X_W(c, 12, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* d174c: csel x10, x10, x8, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* d1750: cmp x12, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 11));
  /* d1754: csel x8, x8, x11, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 11)));
  /* d1758: stp x9, x8, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* d175c: csel x8, x12, x11, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* d1760: stp x8, x10, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* d1764: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d1768: ret  */
  return;
L_d176c:;
  /* d176c: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* d1770: b.ne #0xd17e0 */
  if (ARC_COND(c, 1)) goto L_d17e0;
  /* d1774: ldur x9, [x1, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d1778: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* d177c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* d1780: b.hs #0xd1690 */
  if (ARC_COND(c, 2)) goto L_d1690;
  /* d1784: str x9, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 9));
  /* d1788: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d178c: stur x8, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), ARC_X_R(c, 8));
  /* d1790: ret  */
  return;
L_d1794:;
  /* d1794: ldr x8, [x0, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* d1798: ldur x9, [x1, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d179c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* d17a0: csel x10, x8, x9, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d17a4: csel x8, x8, x9, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d17a8: stur x10, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), ARC_X_R(c, 10));
  /* d17ac: str x8, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 8));
  /* d17b0: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* d17b4: ldur x8, [x1, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d17b8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* d17bc: csel x10, x8, x9, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d17c0: csel x8, x8, x9, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d17c4: stur x10, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), ARC_X_R(c, 10));
  /* d17c8: ldp x9, x10, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* d17cc: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* d17d0: csel x9, x9, x10, lo */
  ARC_X_W(c, 9, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* d17d4: csel x8, x8, x10, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* d17d8: str x9, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 9));
  /* d17dc: b #0xd1908 */
  goto L_d1908;
L_d17e0:;
  /* d17e0: mov x11, x0 */
  ARC_X_W(c, 11, ARC_X_R(c, 0));
  /* d17e4: ldp x10, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* d17e8: ldr x8, [x11, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 11) + INT64_C(16));
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* d17ec: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* d17f0: csel x12, x9, x8, hi */
  ARC_X_W(c, 12, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* d17f4: csel x9, x9, x8, lo */
  ARC_X_W(c, 9, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* d17f8: cmp x12, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 10));
  /* d17fc: csel x8, x12, x10, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* d1800: csel x13, x12, x10, lo */
  ARC_X_W(c, 13, (ARC_COND(c, 3) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* d1804: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* d1808: str x8, [x11] */
  arc_st64(ARC_X_R(c, 11), ARC_X_R(c, 8));
  /* d180c: add x8, x0, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* d1810: csel x10, x10, x9, lo */
  ARC_X_W(c, 10, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* d1814: csel x9, x9, x13, lo */
  ARC_X_W(c, 9, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 13)));
  /* d1818: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* d181c: stp x10, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* d1820: b.eq #0xd1690 */
  if (ARC_COND(c, 0)) goto L_d1690;
  /* d1824: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* d1828: mov w10, #0x18 */
  ARC_W_W(c, 10, UINT64_C(24));
  /* d182c: b #0xd185c */
  goto L_d185c;
L_d1830:;
  /* d1830: mov x11, x0 */
  ARC_X_W(c, 11, ARC_X_R(c, 0));
L_d1834:;
  /* d1834: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* d1838: str x12, [x11] */
  arc_st64(ARC_X_R(c, 11), ARC_X_R(c, 12));
  /* d183c: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* d1840: b.eq #0xd1914 */
  if (ARC_COND(c, 0)) goto L_d1914;
L_d1844:;
  /* d1844: add x12, x8, #8 */
  ARC_X_W(c, 12, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* d1848: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
  /* d184c: add x10, x10, #8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(8)));
  /* d1850: cmp x12, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 1));
  /* d1854: mov x8, x12 */
  ARC_X_W(c, 8, ARC_X_R(c, 12));
  /* d1858: b.eq #0xd1690 */
  if (ARC_COND(c, 0)) goto L_d1690;
L_d185c:;
  /* d185c: ldr x12, [x8] */
  ARC_X_W(c, 12, arc_ld64(ARC_X_R(c, 8)));
  /* d1860: ldr x11, [x11] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 11)));
  /* d1864: cmp x12, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 11));
  /* d1868: b.hs #0xd1844 */
  if (ARC_COND(c, 2)) goto L_d1844;
  /* d186c: mov x14, x10 */
  ARC_X_W(c, 14, ARC_X_R(c, 10));
L_d1870:;
  /* d1870: subs x13, x14, #8 */
  ARC_X_W(c, 13, arc_sub64(c, ARC_X_R(c, 14), UINT64_C(8)));
  /* d1874: str x11, [x0, x14] */
  arc_st64((ARC_X_R(c, 0) + ARC_X_R(c, 14)), ARC_X_R(c, 11));
  /* d1878: b.eq #0xd1830 */
  if (ARC_COND(c, 0)) goto L_d1830;
  /* d187c: add x11, x0, x14 */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + ARC_X_R(c, 14)));
  /* d1880: mov x14, x13 */
  ARC_X_W(c, 14, ARC_X_R(c, 13));
  /* d1884: ldur x11, [x11, #-0x10] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 11) + INT64_C(-16))));
  /* d1888: cmp x12, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 11));
  /* d188c: b.lo #0xd1870 */
  if (ARC_COND(c, 3)) goto L_d1870;
  /* d1890: add x11, x0, x13 */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + ARC_X_R(c, 13)));
  /* d1894: b #0xd1834 */
  goto L_d1834;
L_d1898:;
  /* d1898: ldp x10, x8, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* d189c: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* d18a0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* d18a4: csel x11, x9, x8, hi */
  ARC_X_W(c, 11, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* d18a8: csel x8, x9, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* d18ac: str x11, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 11));
  /* d18b0: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* d18b4: ldur x8, [x1, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d18b8: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* d18bc: csel x9, x10, x8, hi */
  ARC_X_W(c, 9, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* d18c0: csel x8, x10, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* d18c4: stur x9, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), ARC_X_R(c, 9));
  /* d18c8: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* d18cc: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* d18d0: csel x10, x9, x8, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* d18d4: csel x8, x9, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* d18d8: stp x8, x10, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* d18dc: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* d18e0: ldur x9, [x1, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d18e4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* d18e8: csel x10, x8, x9, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d18ec: csel x8, x8, x9, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d18f0: stur x10, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), ARC_X_R(c, 10));
  /* d18f4: ldr x10, [x0, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* d18f8: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* d18fc: csel x9, x10, x8, hi */
  ARC_X_W(c, 9, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* d1900: csel x8, x10, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* d1904: str x9, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 9));
L_d1908:;
  /* d1908: str x8, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 8));
  /* d190c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d1910: ret  */
  return;
L_d1914:;
  /* d1914: add x8, x8, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* d1918: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* d191c: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* d1920: ret  */
  return;
}

void fn1_d7a54(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038811220));
  /* d7a54: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d7a58: sub sp, sp, #0x150 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(336)));
  /* d7a5c: stp x29, x30, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d7a60: str x28, [sp, #0x130] */
  arc_st64(((c)->sp + INT64_C(304)), ARC_X_R(c, 28));
  /* d7a64: stp x20, x19, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d7a68: add x29, sp, #0x120 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(288)));
  /* d7a6c: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* d7a70: str xzr, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 31));
  /* d7a74: mov x8, #-0x38 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551560));
  /* d7a78: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* d7a7c: movk x8, #0xff80, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(280925220896768)));
  /* d7a80: add x10, sp, #0x88 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(136)));
  /* d7a84: add x9, x9, #0x80 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(128)));
  /* d7a88: stp q0, q1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* d7a8c: stp x9, x8, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* d7a90: add x8, x10, #0x38 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + UINT64_C(56)));
  /* d7a94: add x9, x29, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) + UINT64_C(48)));
  /* d7a98: stp x9, x8, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* d7a9c: ldp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* d7aa0: stp x1, x2, [sp, #0x88] */
  { const uint64_t _pa = ((c)->sp + INT64_C(136));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* d7aa4: stp x3, x4, [sp, #0x98] */
  { const uint64_t _pa = ((c)->sp + INT64_C(152));
    arc_st64(_pa, ARC_X_R(c, 3));
    arc_st64(_pa + 8, ARC_X_R(c, 4));
  }
  /* d7aa8: stp x5, x6, [sp, #0xa8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(168));
    arc_st64(_pa, ARC_X_R(c, 5));
    arc_st64(_pa + 8, ARC_X_R(c, 6));
  }
  /* d7aac: str x7, [sp, #0xb8] */
  arc_st64(((c)->sp + INT64_C(184)), ARC_X_R(c, 7));
  /* d7ab0: stp q2, q3, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, (c)->q[2].u64[0]);
    arc_st64(_pa + 8, (c)->q[2].u64[1]);
    arc_st64((_pa + 16), (c)->q[3].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[3].u64[1]);
  }
  /* d7ab4: stp q4, q5, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, (c)->q[4].u64[0]);
    arc_st64(_pa + 8, (c)->q[4].u64[1]);
    arc_st64((_pa + 16), (c)->q[5].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[5].u64[1]);
  }
  /* d7ab8: stp q6, q7, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, (c)->q[6].u64[0]);
    arc_st64(_pa + 8, (c)->q[6].u64[1]);
    arc_st64((_pa + 16), (c)->q[7].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[7].u64[1]);
  }
  /* d7abc: stp xzr, xzr, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* d7ac0: stp q0, q1, [x29, #-0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-96));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* d7ac4: sub x8, x29, #0x38 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* d7ac8: sub x1, x29, #0x60 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* d7acc: bl #0xd7b2c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(883408));
  fn1_d7b2c(c);
  /* d7ad0: ldur q0, [x29, #-0x38] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-56))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-56)) + 8));
  /* d7ad4: ldur x8, [x29, #-0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-40))));
  /* d7ad8: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* d7adc: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* d7ae0: ldp x20, x19, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d7ae4: ldr x28, [sp, #0x130] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(304))));
  /* d7ae8: ldp x29, x30, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d7aec: add sp, sp, #0x150 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(336)));
  /* d7af0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d7af4: ret  */
  return;
  /* d7af8: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(883452));
  fn1_142548(c);
  /* d7afc: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(883456));
  fn1_1429b0(c);
  /* d7b00: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* d7b04: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(883464));
  fn1_142980(c);
  /* d7b08: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* d7b0c: tbz w8, #0, #0xd7b20 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_d7b20;
  /* d7b10: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* d7b14: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* d7b18: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* d7b1c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(883488));
  fn1_142608(c);
L_d7b20:;
  /* d7b20: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* d7b24: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(883496));
  fn1_9cc20(c);
  /* d7b28: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(883500));
  fn1_a1454(c);
}

void fn1_db764(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038826852));
  /* db764: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* db768: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* db76c: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* db770: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* db774: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* db778: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* db77c: add x9, x2, #7 */
  ARC_X_W(c, 9, (ARC_X_R(c, 2) + UINT64_C(7)));
  /* db780: cmp x3, #8 */
  (void)arc_sub64(c, ARC_X_R(c, 3), UINT64_C(8));
  /* db784: mov w10, #8 */
  ARC_W_W(c, 10, UINT64_C(8));
  /* db788: and x22, x9, #0xfffffffffffffff8 */
  ARC_X_W(c, 22, (ARC_X_R(c, 9) & UINT64_C(18446744073709551608)));
  /* db78c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* db790: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* db794: csel x20, x3, x10, hi */
  ARC_X_W(c, 20, (ARC_COND(c, 8) ? (ARC_X_R(c, 3)) : ARC_X_R(c, 10)));
  /* db798: add x21, x22, #0x18 */
  ARC_X_W(c, 21, (ARC_X_R(c, 22) + UINT64_C(24)));
  /* db79c: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* db7a0: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* db7a4: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* db7a8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(898988));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* db7ac: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* db7b0: add x9, x0, x22 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + ARC_X_R(c, 22)));
  /* db7b4: add x10, x0, x21 */
  ARC_X_W(c, 10, (ARC_X_R(c, 0) + ARC_X_R(c, 21)));
  /* db7b8: stur x0, [x10, #-0x10] */
  arc_st64((ARC_X_R(c, 10) + INT64_C(-16)), ARC_X_R(c, 0));
  /* db7bc: str x8, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* db7c0: str x20, [x9, #0x10] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(16)), ARC_X_R(c, 20));
  /* db7c4: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* db7c8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* db7cc: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* db7d0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* db7d4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* db7d8: ret  */
  return;
}

void fn1_dffa0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038845344));
  /* dffa0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* dffa4: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* dffa8: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* dffac: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* dffb0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* dffb4: cmn x3, #8 */
  (void)arc_add64(c, ARC_X_R(c, 3), UINT64_C(8), 0);
  /* dffb8: b.hs #0xe0034 */
  if (ARC_COND(c, 2)) goto L_e0034;
  /* dffbc: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* dffc0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* dffc4: cmp x3, #0x16 */
  (void)arc_sub64(c, ARC_X_R(c, 3), UINT64_C(22));
  /* dffc8: b.hi #0xdffdc */
  if (ARC_COND(c, 8)) goto L_dffdc;
  /* dffcc: lsl w8, w19, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 19)) << ((UINT64_C(1)) & 31)));
  /* dffd0: strb w8, [x20], #1 */
  { const uint64_t _a = ARC_X_R(c, 20);
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* dffd4: cbnz x19, #0xe0010 */
  if ((ARC_X_R(c, 19)) != 0) goto L_e0010;
  /* dffd8: b #0xe001c */
  goto L_e001c;
L_dffdc:;
  /* dffdc: orr x8, x3, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) | UINT64_C(7)));
  /* dffe0: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* dffe4: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* dffe8: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* dffec: csinc x21, x9, x8, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* dfff0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* dfff4: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(917496));
  fn1_1428f0(c);
  /* dfff8: orr x8, x21, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) | UINT64_C(1)));
  /* dfffc: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* e0000: stp x19, x0, [x20, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* e0004: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* e0008: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e000c: cbz x19, #0xe001c */
  if ((ARC_X_R(c, 19)) == 0) goto L_e001c;
L_e0010:;
  /* e0010: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e0014: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* e0018: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(917532));
  fn1_1449f0(c);
L_e001c:;
  /* e001c: strb wzr, [x20, x19] */
  arc_st8((ARC_X_R(c, 20) + ARC_X_R(c, 19)), ARC_W_R(c, 31));
  /* e0020: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e0024: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e0028: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e002c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e0030: ret  */
  return;
L_e0034:;
  /* e0034: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(917560));
  fn1_d7d54(c);
}

void fn1_e2734(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038855476));
  /* e2734: bti c */
  /* bti: no architectural effect here */
  /* e2738: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e273c: ldr x9, [x0, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* e2740: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e2744: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e2748: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e274c: cmp x1, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 9));
  /* e2750: b.hs #0xe276c */
  if (ARC_COND(c, 2)) goto L_e276c;
  /* e2754: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e2758: add x10, x0, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 0) + UINT64_C(4)));
  /* e275c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e2760: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e2764: add x0, x8, x1, lsl #2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 1)) << 2)));
  /* e2768: ret  */
  return;
L_e276c:;
  /* e276c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e2770: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e2774: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e2778: bl #0xe1f80 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(927612));
  fn1_e1f80(c);
}

void fn1_e61e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038870500));
  /* e61e4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e61e8: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* e61ec: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e61f0: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e61f4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e61f8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* e61fc: mov w1, w0 */
  ARC_W_W(c, 1, ARC_W_R(c, 0));
  /* e6200: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* e6204: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* e6208: add x19, x0, #0xb */
  ARC_X_W(c, 19, (ARC_X_R(c, 0) + UINT64_C(11)));
  /* e620c: tbz w1, #0x1f, #0xe6220 */
  if (((ARC_W_R(c, 1)) >> 31 & 1) == 0) goto L_e6220;
  /* e6210: mov w8, #0x2d */
  ARC_W_W(c, 8, UINT64_C(45));
  /* e6214: orr x0, x0, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) | UINT64_C(1)));
  /* e6218: neg w1, w1 */
  ARC_W_W(c, 1, ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 1))));
  /* e621c: strb w8, [sp, #4] */
  arc_st8(((c)->sp + INT64_C(4)), ARC_W_R(c, 8));
L_e6220:;
  /* e6220: sub x8, x19, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) - ARC_X_R(c, 0)));
  /* e6224: cmp x8, #9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(9));
  /* e6228: b.gt #0xe626c */
  if (ARC_COND(c, 12)) goto L_e626c;
  /* e622c: orr w9, w1, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 1) | UINT64_C(1)));
  /* e6230: mov w10, #0x20 */
  ARC_W_W(c, 10, UINT64_C(32));
  /* e6234: clz w9, w9 */
  ARC_W_W(c, 9, arc_clz32(ARC_W_R(c, 9)));
  /* e6238: sub w9, w10, w9 */
  ARC_W_W(c, 9, (ARC_W_R(c, 10) - ARC_W_R(c, 9)));
  /* e623c: mov w10, #0x4d1 */
  ARC_W_W(c, 10, UINT64_C(1233));
  /* e6240: mul w9, w9, w10 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) * (uint32_t)(ARC_W_R(c, 10))));
  /* e6244: nop  */
  /* nop: no architectural effect here */
  /* e6248: adr x10, #0x54634 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(345652)));
  /* e624c: lsr w9, w9, #0xc */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(12)) & 31)));
  /* e6250: ldr w10, [x10, w9, uxtw #2] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 10) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 9)))) << 2))));
  /* e6254: cmp w1, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 1), ARC_W_R(c, 10));
  /* e6258: cset w10, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? 1 : 0));
  /* e625c: sub w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) - ARC_W_R(c, 10)));
  /* e6260: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* e6264: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* e6268: b.lt #0xe6274 */
  if (ARC_COND(c, 11)) goto L_e6274;
L_e626c:;
  /* e626c: bl #0xd4eb8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(942704));
  fn1_d4eb8(c);
  /* e6270: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_e6274:;
  /* e6274: add x8, sp, #4 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(4)));
  /* e6278: sub x21, x19, x8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 19) - ARC_X_R(c, 8)));
  /* e627c: mov x8, #0x3ffffffffffffff8 */
  ARC_X_W(c, 8, UINT64_C(4611686018427387896));
  /* e6280: cmp x21, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* e6284: b.hs #0xe639c */
  if (ARC_COND(c, 2)) goto L_e639c;
  /* e6288: cmp x21, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(4));
  /* e628c: b.hi #0xe629c */
  if (ARC_COND(c, 8)) goto L_e629c;
  /* e6290: lsl w8, w21, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 21)) << ((UINT64_C(1)) & 31)));
  /* e6294: strb w8, [x20], #4 */
  { const uint64_t _a = ARC_X_R(c, 20);
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* e6298: b #0xe62c4 */
  goto L_e62c4;
L_e629c:;
  /* e629c: orr x8, x21, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) | UINT64_C(1)));
  /* e62a0: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* e62a4: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* e62a8: csinc x22, x9, x8, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* e62ac: lsl x0, x22, #2 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 22)) << ((UINT64_C(2)) & 63)));
  /* e62b0: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(942772));
  fn1_1428f0(c);
  /* e62b4: orr x8, x22, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) | UINT64_C(1)));
  /* e62b8: stp x21, x0, [x20, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* e62bc: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* e62c0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_e62c4:;
  /* e62c4: add x9, sp, #4 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(4)));
  /* e62c8: cmp x9, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 19));
  /* e62cc: b.eq #0xe62e4 */
  if (ARC_COND(c, 0)) goto L_e62e4;
  /* e62d0: sub x10, x19, x9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) - ARC_X_R(c, 9)));
  /* e62d4: cmp x10, #0x20 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(32));
  /* e62d8: b.hs #0xe62ec */
  if (ARC_COND(c, 2)) goto L_e62ec;
  /* e62dc: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* e62e0: b #0xe6370 */
  goto L_e6370;
L_e62e4:;
  /* e62e4: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* e62e8: b #0xe6380 */
  goto L_e6380;
L_e62ec:;
  /* e62ec: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* e62f0: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* e62f4: and x11, x10, #0xffffffffffffffe0 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) & UINT64_C(18446744073709551584)));
  /* e62f8: ldr q0, [x9, #0xb70] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2928))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2928)) + 8));
  /* e62fc: ldr q1, [x13, #0xd40] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 13) + INT64_C(3392))), arc_ld64((ARC_X_R(c, 13) + INT64_C(3392)) + 8));
  /* e6300: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* e6304: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* e6308: add x12, sp, #4 */
  ARC_X_W(c, 12, ((c)->sp + UINT64_C(4)));
  /* e630c: add x8, x20, x11, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + ((uint64_t)(ARC_X_R(c, 11)) << 2)));
  /* e6310: ldr q2, [x9, #0xc50] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 9) + INT64_C(3152))), arc_ld64((ARC_X_R(c, 9) + INT64_C(3152)) + 8));
  /* e6314: ldr q3, [x13, #0x940] */
  arc_q_w(c, 3, arc_ld64((ARC_X_R(c, 13) + INT64_C(2368))), arc_ld64((ARC_X_R(c, 13) + INT64_C(2368)) + 8));
  /* e6318: add x9, x12, x11 */
  ARC_X_W(c, 9, (ARC_X_R(c, 12) + ARC_X_R(c, 11)));
  /* e631c: add x12, x12, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(16)));
  /* e6320: add x13, x20, #0x40 */
  ARC_X_W(c, 13, (ARC_X_R(c, 20) + UINT64_C(64)));
  /* e6324: mov x14, x11 */
  ARC_X_W(c, 14, ARC_X_R(c, 11));
L_e6328:;
  /* e6328: ldp q4, q5, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_q_w(c, 4, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 5, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* e632c: subs x14, x14, #0x20 */
  ARC_X_W(c, 14, arc_sub64(c, ARC_X_R(c, 14), UINT64_C(32)));
  /* e6330: add x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(32)));
  /* e6334: tbl v6.16b, {v4.16b}, v3.16b */
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
  /* e6338: tbl v7.16b, {v4.16b}, v2.16b */
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
  /* e633c: tbl v16.16b, {v4.16b}, v1.16b */
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
  /* e6340: tbl v4.16b, {v4.16b}, v0.16b */
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
  /* e6344: tbl v17.16b, {v5.16b}, v3.16b */
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
  /* e6348: stp q7, q6, [x13, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 13) + INT64_C(-32));
    arc_st64(_pa, (c)->q[7].u64[0]);
    arc_st64(_pa + 8, (c)->q[7].u64[1]);
    arc_st64((_pa + 16), (c)->q[6].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[6].u64[1]);
  }
  /* e634c: tbl v6.16b, {v5.16b}, v2.16b */
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
  /* e6350: tbl v7.16b, {v5.16b}, v1.16b */
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
  /* e6354: tbl v5.16b, {v5.16b}, v0.16b */
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
  /* e6358: stp q4, q16, [x13, #-0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 13) + INT64_C(-64));
    arc_st64(_pa, (c)->q[4].u64[0]);
    arc_st64(_pa + 8, (c)->q[4].u64[1]);
    arc_st64((_pa + 16), (c)->q[16].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[16].u64[1]);
  }
  /* e635c: stp q6, q17, [x13, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 13) + INT64_C(32));
    arc_st64(_pa, (c)->q[6].u64[0]);
    arc_st64(_pa + 8, (c)->q[6].u64[1]);
    arc_st64((_pa + 16), (c)->q[17].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[17].u64[1]);
  }
  /* e6360: stp q5, q7, [x13], #0x80 */
  { const uint64_t _pa = ARC_X_R(c, 13);
    ARC_X_W(c, 13, ARC_X_R(c, 13) + INT64_C(128));
    arc_st64(_pa, (c)->q[5].u64[0]);
    arc_st64(_pa + 8, (c)->q[5].u64[1]);
    arc_st64((_pa + 16), (c)->q[7].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[7].u64[1]);
  }
  /* e6364: b.ne #0xe6328 */
  if (ARC_COND(c, 1)) goto L_e6328;
  /* e6368: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* e636c: b.eq #0xe6380 */
  if (ARC_COND(c, 0)) goto L_e6380;
L_e6370:;
  /* e6370: ldrb w10, [x9], #1 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(1));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* e6374: cmp x9, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 19));
  /* e6378: str w10, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 10));
  }
  /* e637c: b.ne #0xe6370 */
  if (ARC_COND(c, 1)) goto L_e6370;
L_e6380:;
  /* e6380: str wzr, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 31));
  /* e6384: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e6388: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e638c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e6390: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* e6394: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e6398: ret  */
  return;
L_e639c:;
  /* e639c: bl #0xe2274 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(943008));
  fn1_e2274(c);
}

void fn1_e9680(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038883968));
  /* e9680: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e9684: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e9688: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e968c: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e9690: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e9694: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e9698: nop  */
  /* nop: no architectural effect here */
  /* e969c: adr x23, #0x15d258 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1430104)));
  /* e96a0: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* e96a4: ldarb w8, [x23] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 23)));
  /* e96a8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e96ac: adrp x22, #0x15d000 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1429504)));
  /* e96b0: tbz w8, #0, #0xe9734 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_e9734;
L_e96b4:;
  /* e96b4: ldr x24, [x22, #0x250] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 22) + INT64_C(592))));
  /* e96b8: ldr w0, [x24] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 24)));
  /* e96bc: bl #0x143130 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(956096));
  fn1_143130(c);
  /* e96c0: cbnz x0, #0xe96f8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_e96f8;
  /* e96c4: mov w0, #8 */
  ARC_W_W(c, 0, UINT64_C(8));
  /* e96c8: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(956108));
  fn1_1428f0(c);
  /* e96cc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e96d0: mov w0, #0x30 */
  ARC_W_W(c, 0, UINT64_C(48));
  /* e96d4: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(956120));
  fn1_1428f0(c);
  /* e96d8: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* e96dc: str x0, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 0));
  /* e96e0: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* e96e4: stp q0, q0, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* e96e8: str q0, [x0] */
  arc_st64(ARC_X_R(c, 0), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 0) + 8, (c)->q[0].u64[1]);
  /* e96ec: ldr w8, [x24] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 24)));
  /* e96f0: mov w0, w8 */
  ARC_W_W(c, 0, ARC_W_R(c, 8));
  /* e96f4: bl #0x142a10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(956152));
  fn1_142a10(c);
L_e96f8:;
  /* e96f8: ldarb w8, [x23] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 23)));
  /* e96fc: tbz w8, #0, #0xe9768 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_e9768;
L_e9700:;
  /* e9700: ldr x8, [x22, #0x250] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(592))));
  /* e9704: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* e9708: bl #0x143130 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(956172));
  fn1_143130(c);
  /* e970c: ldr x2, [x19] */
  ARC_X_W(c, 2, arc_ld64(ARC_X_R(c, 19)));
  /* e9710: str xzr, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 31));
  /* e9714: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* e9718: strb wzr, [x19, #8] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(8)), ARC_W_R(c, 31));
  /* e971c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e9720: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e9724: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e9728: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e972c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e9730: b #0x1430e8 */
  fn1_1430e8(c); return;
L_e9734:;
  /* e9734: nop  */
  /* nop: no architectural effect here */
  /* e9738: adr x0, #0x15d258 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1430104)));
  /* e973c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(956224));
  fn1_1424b8(c);
  /* e9740: cbz w0, #0xe96b4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_e96b4;
  /* e9744: nop  */
  /* nop: no architectural effect here */
  /* e9748: adr x21, #0x15d248 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1430088)));
  /* e974c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e9750: bl #0xeb9a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(956244));
  fn1_eb9a8(c);
  /* e9754: nop  */
  /* nop: no architectural effect here */
  /* e9758: adr x0, #0x15d258 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1430104)));
  /* e975c: str x21, [x22, #0x250] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(592)), ARC_X_R(c, 21));
  /* e9760: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(956260));
  fn1_1424d0(c);
  /* e9764: b #0xe96b4 */
  goto L_e96b4;
L_e9768:;
  /* e9768: nop  */
  /* nop: no architectural effect here */
  /* e976c: adr x0, #0x15d258 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1430104)));
  /* e9770: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(956276));
  fn1_1424b8(c);
  /* e9774: cbz w0, #0xe9700 */
  if ((ARC_W_R(c, 0)) == 0) goto L_e9700;
  /* e9778: nop  */
  /* nop: no architectural effect here */
  /* e977c: adr x21, #0x15d248 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1430088)));
  /* e9780: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e9784: bl #0xeb9a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(956296));
  fn1_eb9a8(c);
  /* e9788: nop  */
  /* nop: no architectural effect here */
  /* e978c: adr x0, #0x15d258 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1430104)));
  /* e9790: str x21, [x22, #0x250] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(592)), ARC_X_R(c, 21));
  /* e9794: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(956312));
  fn1_1424d0(c);
  /* e9798: b #0xe9700 */
  goto L_e9700;
  /* e979c: b #0xe97a0 */
  goto L_e97a0;
L_e97a0:;
  /* e97a0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e97a4: nop  */
  /* nop: no architectural effect here */
  /* e97a8: adr x0, #0x15d258 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1430104)));
  /* e97ac: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(956336));
  fn1_1424e8(c);
  /* e97b0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e97b4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(956344));
  fn1_9cc20(c);
  /* e97b8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e97bc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e97c0: mov w1, #8 */
  ARC_W_W(c, 1, UINT64_C(8));
  /* e97c4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(956360));
  fn1_142608(c);
  /* e97c8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e97cc: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(956368));
  fn1_9cc20(c);
}

void fn1_eb670(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038892144));
  /* eb670: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eb674: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eb678: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* eb67c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eb680: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* eb684: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964232));
  fn1_142518(c);
  /* eb688: cbnz w0, #0xeb6b0 */
  if ((ARC_W_R(c, 0)) != 0) goto L_eb6b0;
  /* eb68c: str wzr, [x19, #0x88] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(136)), ARC_W_R(c, 31));
  /* eb690: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eb694: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964248));
  fn1_142560(c);
  /* eb698: add x0, x19, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* eb69c: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964256));
  fn1_142578(c);
  /* eb6a0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* eb6a4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eb6a8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eb6ac: ret  */
  return;
L_eb6b0:;
  /* eb6b0: nop  */
  /* nop: no architectural effect here */
  /* eb6b4: adr x1, #0x50f67 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331623)));
  /* eb6b8: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964284));
  fn1_142a40(c);
  /* eb6bc: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964288));
  fn1_a1454(c);
  /* eb6c0: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964292));
  fn1_a1454(c);
}

void fn1_ed33c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038899516));
  /* ed33c: bti c */
  /* bti: no architectural effect here */
  /* ed340: ldp x9, x8, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* ed344: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* ed348: b.eq #0xed364 */
  if (ARC_COND(c, 0)) goto L_ed364;
  /* ed34c: ldrb w9, [x8, #-1]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(-1));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-1));
    ARC_W_W(c, 9, arc_ld8(_a));
  }
  /* ed350: cmp w9, w1, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 9), ((uint64_t)(uint8_t)(ARC_W_R(c, 1))));
  /* ed354: b.ne #0xed364 */
  if (ARC_COND(c, 1)) goto L_ed364;
  /* ed358: str x8, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 8));
  /* ed35c: ldrb w0, [x8] */
  ARC_W_W(c, 0, arc_ld8(ARC_X_R(c, 8)));
  /* ed360: ret  */
  return;
L_ed364:;
  /* ed364: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* ed368: and w1, w1, #0xff */
  ARC_W_W(c, 1, (ARC_W_R(c, 1) & UINT64_C(255)));
  /* ed36c: ldr x16, [x8, #0x58] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* ed370: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_f0990(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038913424));
  /* f0990: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f0994: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* f0998: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f099c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f09a0: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f09a4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f09a8: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f09ac: str xzr, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 31));
  /* f09b0: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f09b4: add x9, x0, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + ARC_X_R(c, 9)));
  /* f09b8: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* f09bc: ldr w9, [x9, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f09c0: ldr x10, [x8, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f09c4: and w20, w9, #0xfffffffd */
  ARC_W_W(c, 20, (ARC_W_R(c, 9) & UINT64_C(4294967293)));
  /* f09c8: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* f09cc: ldr w10, [x8, #0x24] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 8) + INT64_C(36))));
  /* f09d0: cset w9, eq */
  ARC_W_W(c, 9, (ARC_COND(c, 0) ? 1 : 0));
  /* f09d4: orr w9, w20, w9 */
  ARC_W_W(c, 9, (ARC_W_R(c, 20) | ARC_W_R(c, 9)));
  /* f09d8: tst w9, w10 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & ARC_W_R(c, 10)));
  /* f09dc: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f09e0: b.ne #0xf0a9c */
  if (ARC_COND(c, 1)) goto L_f0a9c;
  /* f09e4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f09e8: sub x0, x29, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* f09ec: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* f09f0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f09f4: bl #0x1435f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(985592));
  fn1_1435f8(c);
  /* f09f8: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* f09fc: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f0a00: b.ne #0xf0a30 */
  if (ARC_COND(c, 1)) goto L_f0a30;
  /* f0a04: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f0a08: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f0a0c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f0a10: ldr x0, [x8, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f0a14: cbz x0, #0xf0a50 */
  if ((ARC_X_R(c, 0)) == 0) goto L_f0a50;
  /* f0a18: ldp x9, x8, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* f0a1c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* f0a20: b.eq #0xf0a38 */
  if (ARC_COND(c, 0)) goto L_f0a38;
  /* f0a24: sub x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* f0a28: str x8, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 8));
  /* f0a2c: b #0xf0a54 */
  goto L_f0a54;
L_f0a30:;
  /* f0a30: orr w20, w20, #4 */
  ARC_W_W(c, 20, (ARC_W_R(c, 20) | UINT64_C(4)));
  /* f0a34: b #0xf0a54 */
  goto L_f0a54;
L_f0a38:;
  /* f0a38: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f0a3c: ldr x8, [x8, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* f0a40: mov w1, #-1 */
  ARC_W_W(c, 1, UINT64_C(18446744073709551615));
  /* f0a44: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(985672));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f0a48: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* f0a4c: b.ne #0xf0a54 */
  if (ARC_COND(c, 1)) goto L_f0a54;
L_f0a50:;
  /* f0a50: orr w20, w20, #1 */
  ARC_W_W(c, 20, (ARC_W_R(c, 20) | UINT64_C(1)));
L_f0a54:;
  /* f0a54: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f0a58: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f0a5c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f0a60: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f0a64: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* f0a68: ldp w10, w9, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 10, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* f0a6c: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* f0a70: orr w10, w10, w20 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 20)));
  /* f0a74: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* f0a78: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* f0a7c: str w10, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 10));
  /* f0a80: b.ne #0xf0a9c */
  if (ARC_COND(c, 1)) goto L_f0a9c;
  /* f0a84: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f0a88: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f0a8c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f0a90: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* f0a94: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f0a98: ret  */
  return;
L_f0a9c:;
  /* f0a9c: nop  */
  /* nop: no architectural effect here */
  /* f0aa0: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f0aa4: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(985768));
  fn1_ec720(c);
  /* f0aa8: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(985772));
  fn1_142548(c);
  /* f0aac: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f0ab0: orr w20, w20, #1 */
  ARC_W_W(c, 20, (ARC_W_R(c, 20) | UINT64_C(1)));
  /* f0ab4: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f0ab8: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f0abc: ldr w10, [x9, #0x20] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f0ac0: orr w10, w10, w20 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 20)));
  /* f0ac4: str w10, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 10));
  /* f0ac8: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f0acc: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f0ad0: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f0ad4: tbnz w8, #0, #0xf0ae0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_f0ae0;
  /* f0ad8: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(985820));
  fn1_142980(c);
  /* f0adc: b #0xf0a54 */
  goto L_f0a54;
L_f0ae0:;
  /* f0ae0: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(985828));
  fn1_1429b0(c);
  /* f0ae4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f0ae8: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(985836));
  fn1_142980(c);
  /* f0aec: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f0af0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(985844));
  fn1_9cc20(c);
  /* f0af4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(985848));
  fn1_a1454(c);
}

void fn1_f3d70(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038926704));
  /* f3d70: bti c */
  /* bti: no architectural effect here */
  /* f3d74: ldp x9, x8, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* f3d78: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* f3d7c: b.eq #0xf3d9c */
  if (ARC_COND(c, 0)) goto L_f3d9c;
  /* f3d80: ldr w9, [x8, #-4]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(-4));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-4));
    ARC_W_W(c, 9, arc_ld32(_a));
  }
  /* f3d84: cmp w1, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 1), ARC_W_R(c, 9));
  /* f3d88: b.ne #0xf3d9c */
  if (ARC_COND(c, 1)) goto L_f3d9c;
  /* f3d8c: mov x9, x0 */
  ARC_X_W(c, 9, ARC_X_R(c, 0));
  /* f3d90: mov w0, w1 */
  ARC_W_W(c, 0, ARC_W_R(c, 1));
  /* f3d94: str x8, [x9, #0x18] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(24)), ARC_X_R(c, 8));
  /* f3d98: ret  */
  return;
L_f3d9c:;
  /* f3d9c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f3da0: ldr x16, [x8, #0x58] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* f3da4: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_f73bc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038940604));
  /* f73bc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f73c0: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* f73c4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f73c8: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f73cc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f73d0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f73d4: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f73d8: str xzr, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 31));
  /* f73dc: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f73e0: add x9, x0, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + ARC_X_R(c, 9)));
  /* f73e4: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* f73e8: ldr w9, [x9, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f73ec: ldr x10, [x8, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f73f0: and w20, w9, #0xfffffffd */
  ARC_W_W(c, 20, (ARC_W_R(c, 9) & UINT64_C(4294967293)));
  /* f73f4: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* f73f8: ldr w10, [x8, #0x24] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 8) + INT64_C(36))));
  /* f73fc: cset w9, eq */
  ARC_W_W(c, 9, (ARC_COND(c, 0) ? 1 : 0));
  /* f7400: orr w9, w20, w9 */
  ARC_W_W(c, 9, (ARC_W_R(c, 20) | ARC_W_R(c, 9)));
  /* f7404: tst w9, w10 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & ARC_W_R(c, 10)));
  /* f7408: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f740c: b.ne #0xf74d4 */
  if (ARC_COND(c, 1)) goto L_f74d4;
  /* f7410: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f7414: sub x0, x29, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* f7418: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* f741c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f7420: bl #0x143670 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1012772));
  fn1_143670(c);
  /* f7424: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* f7428: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f742c: b.ne #0xf7464 */
  if (ARC_COND(c, 1)) goto L_f7464;
  /* f7430: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f7434: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f7438: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f743c: ldr x0, [x8, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f7440: cbz x0, #0xf7488 */
  if ((ARC_X_R(c, 0)) == 0) goto L_f7488;
  /* f7444: ldp x8, x9, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f7448: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* f744c: b.eq #0xf746c */
  if (ARC_COND(c, 0)) goto L_f746c;
  /* f7450: ldr w8, [x9, #-4]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(-4));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(-4));
    ARC_W_W(c, 8, arc_ld32(_a));
  }
  /* f7454: str x9, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 9));
  /* f7458: cmn w8, #1 */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(1), 0);
  /* f745c: b.ne #0xf748c */
  if (ARC_COND(c, 1)) goto L_f748c;
  /* f7460: b #0xf7488 */
  goto L_f7488;
L_f7464:;
  /* f7464: orr w20, w20, #4 */
  ARC_W_W(c, 20, (ARC_W_R(c, 20) | UINT64_C(4)));
  /* f7468: b #0xf748c */
  goto L_f748c;
L_f746c:;
  /* f746c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f7470: ldr x8, [x8, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* f7474: mov w1, #-1 */
  ARC_W_W(c, 1, UINT64_C(18446744073709551615));
  /* f7478: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1012860));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f747c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* f7480: cmn w8, #1 */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(1), 0);
  /* f7484: b.ne #0xf748c */
  if (ARC_COND(c, 1)) goto L_f748c;
L_f7488:;
  /* f7488: orr w20, w20, #1 */
  ARC_W_W(c, 20, (ARC_W_R(c, 20) | UINT64_C(1)));
L_f748c:;
  /* f748c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f7490: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f7494: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f7498: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f749c: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* f74a0: ldp w10, w9, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 10, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* f74a4: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* f74a8: orr w10, w10, w20 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 20)));
  /* f74ac: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* f74b0: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* f74b4: str w10, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 10));
  /* f74b8: b.ne #0xf74d4 */
  if (ARC_COND(c, 1)) goto L_f74d4;
  /* f74bc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f74c0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f74c4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f74c8: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* f74cc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f74d0: ret  */
  return;
L_f74d4:;
  /* f74d4: nop  */
  /* nop: no architectural effect here */
  /* f74d8: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f74dc: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1012960));
  fn1_ec720(c);
  /* f74e0: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1012964));
  fn1_142548(c);
  /* f74e4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f74e8: orr w20, w20, #1 */
  ARC_W_W(c, 20, (ARC_W_R(c, 20) | UINT64_C(1)));
  /* f74ec: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f74f0: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f74f4: ldr w10, [x9, #0x20] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f74f8: orr w10, w10, w20 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 20)));
  /* f74fc: str w10, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 10));
  /* f7500: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f7504: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f7508: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f750c: tbnz w8, #0, #0xf7518 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_f7518;
  /* f7510: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1013012));
  fn1_142980(c);
  /* f7514: b #0xf748c */
  goto L_f748c;
L_f7518:;
  /* f7518: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1013020));
  fn1_1429b0(c);
  /* f751c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f7520: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1013028));
  fn1_142980(c);
  /* f7524: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f7528: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1013036));
  fn1_9cc20(c);
  /* f752c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1013040));
  fn1_a1454(c);
}

void fn1_fc3f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038961136));
  /* fc3f0: bti c */
  /* bti: no architectural effect here */
  /* fc3f4: ldr x9, [x0, #0x78] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(120))));
  /* fc3f8: cbz x9, #0xfc43c */
  if ((ARC_X_R(c, 9)) == 0) goto L_fc43c;
  /* fc3fc: ldp x10, x9, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* fc400: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* fc404: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* fc408: b.hs #0xfc43c */
  if (ARC_COND(c, 2)) goto L_fc43c;
  /* fc40c: mov w0, w1 */
  ARC_W_W(c, 0, ARC_W_R(c, 1));
  /* fc410: cmn w1, #1 */
  (void)arc_add32(c, ARC_W_R(c, 1), UINT64_C(1), 0);
  /* fc414: b.eq #0xfc444 */
  if (ARC_COND(c, 0)) goto L_fc444;
  /* fc418: ldrb w10, [x8, #0x98] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(152))));
  /* fc41c: tbnz w10, #4, #0xfc42c */
  if (((ARC_W_R(c, 10)) >> 4 & 1) != 0) goto L_fc42c;
  /* fc420: ldurb w10, [x9, #-1] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 9) + INT64_C(-1))));
  /* fc424: cmp w10, w0, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 10), ((uint64_t)(uint8_t)(ARC_W_R(c, 0))));
  /* fc428: b.ne #0xfc43c */
  if (ARC_COND(c, 1)) goto L_fc43c;
L_fc42c:;
  /* fc42c: sub x10, x9, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* fc430: str x10, [x8, #0x18] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(24)), ARC_X_R(c, 10));
  /* fc434: sturb w0, [x9, #-1] */
  arc_st8((ARC_X_R(c, 9) + INT64_C(-1)), ARC_W_R(c, 0));
  /* fc438: ret  */
  return;
L_fc43c:;
  /* fc43c: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* fc440: ret  */
  return;
L_fc444:;
  /* fc444: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* fc448: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* fc44c: str x9, [x8, #0x18] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(24)), ARC_X_R(c, 9));
  /* fc450: ret  */
  return;
}

void fn1_ff3e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038973416));
  /* ff3e8: bti c */
  /* bti: no architectural effect here */
  /* ff3ec: cmp x3, x4 */
  (void)arc_sub64(c, ARC_X_R(c, 3), ARC_X_R(c, 4));
  /* ff3f0: b.eq #0xff430 */
  if (ARC_COND(c, 0)) goto L_ff430;
  /* ff3f4: sub x8, x4, x3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 4) - ARC_X_R(c, 3)));
  /* ff3f8: add x8, x1, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) + ARC_X_R(c, 8)));
L_ff3fc:;
  /* ff3fc: cmp x1, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 2));
  /* ff400: b.eq #0xff43c */
  if (ARC_COND(c, 0)) goto L_ff43c;
  /* ff404: ldrb w9, [x1] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 1)));
  /* ff408: ldrb w10, [x3] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 3)));
  /* ff40c: cmp w9, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 10));
  /* ff410: b.lo #0xff43c */
  if (ARC_COND(c, 3)) goto L_ff43c;
  /* ff414: cmp w10, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 9));
  /* ff418: b.lo #0xff444 */
  if (ARC_COND(c, 3)) goto L_ff444;
  /* ff41c: add x3, x3, #1 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(1)));
  /* ff420: add x1, x1, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1)));
  /* ff424: cmp x3, x4 */
  (void)arc_sub64(c, ARC_X_R(c, 3), ARC_X_R(c, 4));
  /* ff428: b.ne #0xff3fc */
  if (ARC_COND(c, 1)) goto L_ff3fc;
  /* ff42c: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
L_ff430:;
  /* ff430: cmp x1, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 2));
  /* ff434: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* ff438: ret  */
  return;
L_ff43c:;
  /* ff43c: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* ff440: ret  */
  return;
L_ff444:;
  /* ff444: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ff448: ret  */
  return;
}

void fn1_10efbc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039037884));
  /* 10efbc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 10efc0: sub sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(144)));
  /* 10efc4: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 10efc8: stp x28, x27, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 10efcc: stp x26, x25, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 10efd0: stp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 10efd4: stp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 10efd8: stp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 10efdc: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 10efe0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 10efe4: stp x3, x0, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 3));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 10efe8: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 10efec: add x1, x3, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 3) + UINT64_C(48)));
  /* 10eff0: mov x22, x7 */
  ARC_X_W(c, 22, ARC_X_R(c, 7));
  /* 10eff4: mov x26, x6 */
  ARC_X_W(c, 26, ARC_X_R(c, 6));
  /* 10eff8: mov x25, x5 */
  ARC_X_W(c, 25, ARC_X_R(c, 5));
  /* 10effc: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* 10f000: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 10f004: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1110024));
  fn1_143460(c);
  /* 10f008: adrp x24, #0x151000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 10f00c: ldr x24, [x24, #0xb40] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(2880))));
  /* 10f010: ldr x23, [sp, #0x18] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(24))));
  /* 10f014: ldar x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 10f018: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 10f01c: b.eq #0x10f0d8 */
  if (ARC_COND(c, 0)) goto L_10f0d8;
  /* 10f020: nop  */
  /* nop: no architectural effect here */
  /* 10f024: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10f028: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1110060));
  fn1_142518(c);
  /* 10f02c: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 10f030: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 10f034: b.ne #0x10f060 */
  if (ARC_COND(c, 1)) goto L_10f060;
  /* 10f038: nop  */
  /* nop: no architectural effect here */
  /* 10f03c: adr x27, #0x15791c */
  ARC_X_W(c, 27, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 10f040: nop  */
  /* nop: no architectural effect here */
  /* 10f044: adr x28, #0x1578f4 */
  ARC_X_W(c, 28, (arc_image_bases[1] + UINT64_C(1407220)));
L_10f048:;
  /* 10f048: mov x0, x27 */
  ARC_X_W(c, 0, ARC_X_R(c, 27));
  /* 10f04c: mov x1, x28 */
  ARC_X_W(c, 1, ARC_X_R(c, 28));
  /* 10f050: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1110100));
  fn1_142530(c);
  /* 10f054: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 10f058: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 10f05c: b.eq #0x10f048 */
  if (ARC_COND(c, 0)) goto L_10f048;
L_10f060:;
  /* 10f060: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 10f064: cbz x8, #0x10f078 */
  if ((ARC_X_R(c, 8)) == 0) goto L_10f078;
  /* 10f068: nop  */
  /* nop: no architectural effect here */
  /* 10f06c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10f070: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1110132));
  fn1_142560(c);
  /* 10f074: b #0x10f0d8 */
  goto L_10f0d8;
L_10f078:;
  /* 10f078: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 10f07c: stur x24, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 24));
  /* 10f080: sturb wzr, [x29, #-8] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-8)), ARC_W_R(c, 31));
  /* 10f084: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 10f088: nop  */
  /* nop: no architectural effect here */
  /* 10f08c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10f090: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1110164));
  fn1_142560(c);
  /* 10f094: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 10f098: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 10f09c: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 10f0a0: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1110180));
  fn1_a2030(c);
  /* 10f0a4: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 10f0a8: str w8, [x24, #8] */
  arc_st32((ARC_X_R(c, 24) + INT64_C(8)), ARC_W_R(c, 8));
  /* 10f0ac: nop  */
  /* nop: no architectural effect here */
  /* 10f0b0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10f0b4: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1110200));
  fn1_142518(c);
  /* 10f0b8: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 10f0bc: stlr x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 10f0c0: nop  */
  /* nop: no architectural effect here */
  /* 10f0c4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10f0c8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1110220));
  fn1_142560(c);
  /* 10f0cc: nop  */
  /* nop: no architectural effect here */
  /* 10f0d0: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 10f0d4: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1110232));
  fn1_142578(c);
L_10f0d8:;
  /* 10f0d8: ldp x8, x10, [x23, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 10f0dc: ldrsw x9, [x24, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 24) + INT64_C(8)))));
  /* 10f0e0: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 10f0e4: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 10f0e8: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 10f0ec: b.hs #0x10f598 */
  if (ARC_COND(c, 2)) goto L_10f598;
  /* 10f0f0: ldr x27, [x8, x9, lsl #3] */
  ARC_X_W(c, 27, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 10f0f4: cbz x27, #0x10f598 */
  if ((ARC_X_R(c, 27)) == 0) goto L_10f598;
  /* 10f0f8: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 10f0fc: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1110272));
  fn1_143478(c);
  /* 10f100: cmp x26, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 22));
  /* 10f104: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* 10f108: b.eq #0x10f4b4 */
  if (ARC_COND(c, 0)) goto L_10f4b4;
  /* 10f10c: mov x24, x25 */
  ARC_X_W(c, 24, ARC_X_R(c, 25));
  /* 10f110: ldr x25, [sp, #8] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(8))));
L_10f114:;
  /* 10f114: cbz x20, #0x10f13c */
  if ((ARC_X_R(c, 20)) == 0) goto L_10f13c;
  /* 10f118: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 10f11c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 10f120: b.eq #0x10f158 */
  if (ARC_COND(c, 0)) goto L_10f158;
  /* 10f124: cbz x21, #0x10f1b4 */
  if ((ARC_X_R(c, 21)) == 0) goto L_10f1b4;
  /* 10f128: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 10f12c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 10f130: b.ne #0x10f4ac */
  if (ARC_COND(c, 1)) goto L_10f4ac;
  /* 10f134: mov w23, wzr */
  ARC_W_W(c, 23, ARC_W_R(c, 31));
  /* 10f138: b #0x10f190 */
  goto L_10f190;
L_10f13c:;
  /* 10f13c: cbz x21, #0x10f4a8 */
  if ((ARC_X_R(c, 21)) == 0) goto L_10f4a8;
  /* 10f140: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 10f144: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 10f148: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 10f14c: b.ne #0x10f1b4 */
  if (ARC_COND(c, 1)) goto L_10f1b4;
  /* 10f150: mov w23, #1 */
  ARC_W_W(c, 23, UINT64_C(1));
  /* 10f154: b #0x10f190 */
  goto L_10f190;
L_10f158:;
  /* 10f158: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 10f15c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 10f160: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 10f164: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1110376));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10f168: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 10f16c: cset w23, eq */
  ARC_W_W(c, 23, (ARC_COND(c, 0) ? 1 : 0));
  /* 10f170: csel x20, xzr, x20, eq */
  ARC_X_W(c, 20, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 20)));
  /* 10f174: cbz x21, #0x10f344 */
  if ((ARC_X_R(c, 21)) == 0) goto L_10f344;
  /* 10f178: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 10f17c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 10f180: b.eq #0x10f190 */
  if (ARC_COND(c, 0)) goto L_10f190;
  /* 10f184: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 10f188: b.eq #0x10f1b4 */
  if (ARC_COND(c, 0)) goto L_10f1b4;
  /* 10f18c: b #0x10f4ac */
  goto L_10f4ac;
L_10f190:;
  /* 10f190: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 10f194: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 10f198: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 10f19c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1110432));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10f1a0: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 10f1a4: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 10f1a8: csel x21, xzr, x21, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 21)));
  /* 10f1ac: eor w8, w23, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 23) ^ ARC_W_R(c, 8)));
  /* 10f1b0: tbz w8, #0, #0x10f4ac */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10f4ac;
L_10f1b4:;
  /* 10f1b4: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 10f1b8: ldrb w1, [x26] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 26)));
  /* 10f1bc: mov x0, x27 */
  ARC_X_W(c, 0, ARC_X_R(c, 27));
  /* 10f1c0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 10f1c4: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 10f1c8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1110476));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10f1cc: and w8, w0, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) & UINT64_C(255)));
  /* 10f1d0: cmp w8, #0x25 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(37));
  /* 10f1d4: b.ne #0x10f248 */
  if (ARC_COND(c, 1)) goto L_10f248;
  /* 10f1d8: add x8, x26, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 26) + UINT64_C(1)));
  /* 10f1dc: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* 10f1e0: b.eq #0x10f4ac */
  if (ARC_COND(c, 0)) goto L_10f4ac;
  /* 10f1e4: ldr x9, [x27] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 27)));
  /* 10f1e8: ldrb w1, [x8] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 8)));
  /* 10f1ec: mov x0, x27 */
  ARC_X_W(c, 0, ARC_X_R(c, 27));
  /* 10f1f0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 10f1f4: ldr x9, [x9, #0x48] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(72))));
  /* 10f1f8: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1110524));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 10f1fc: and w8, w0, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) & UINT64_C(255)));
  /* 10f200: mov w28, w0 */
  ARC_W_W(c, 28, ARC_W_R(c, 0));
  /* 10f204: cmp w8, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(69));
  /* 10f208: b.eq #0x10f214 */
  if (ARC_COND(c, 0)) goto L_10f214;
  /* 10f20c: cmp w8, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(48));
  /* 10f210: b.ne #0x10f270 */
  if (ARC_COND(c, 1)) goto L_10f270;
L_10f214:;
  /* 10f214: add x8, x26, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 26) + UINT64_C(2)));
  /* 10f218: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* 10f21c: b.eq #0x10f4ac */
  if (ARC_COND(c, 0)) goto L_10f4ac;
  /* 10f220: ldr x9, [x27] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 27)));
  /* 10f224: ldrb w1, [x8] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 8)));
  /* 10f228: mov x0, x27 */
  ARC_X_W(c, 0, ARC_X_R(c, 27));
  /* 10f22c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 10f230: ldr x9, [x9, #0x48] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(72))));
  /* 10f234: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1110584));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 10f238: mov w7, w28 */
  ARC_W_W(c, 7, ARC_W_R(c, 28));
  /* 10f23c: mov w28, w0 */
  ARC_W_W(c, 28, ARC_W_R(c, 0));
  /* 10f240: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
  /* 10f244: b #0x10f278 */
  goto L_10f278;
L_10f248:;
  /* 10f248: ldrsb x9, [x26] */
  ARC_X_W(c, 9, ((int64_t)(int8_t)arc_ld8(ARC_X_R(c, 26))));
  /* 10f24c: tbnz x9, #0x3f, #0x10f25c */
  if (((ARC_X_R(c, 9)) >> 63 & 1) != 0) goto L_10f25c;
  /* 10f250: ldr x8, [x27, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 27) + INT64_C(16))));
  /* 10f254: ldr x9, [x8, x9, lsl #3] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 10f258: tbnz w9, #0, #0x10f2b0 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_10f2b0;
L_10f25c:;
  /* 10f25c: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 10f260: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 10f264: b.eq #0x10f2d8 */
  if (ARC_COND(c, 0)) goto L_10f2d8;
  /* 10f268: ldrb w1, [x8] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 8)));
  /* 10f26c: b #0x10f2ec */
  goto L_10f2ec;
L_10f270:;
  /* 10f270: mov w7, wzr */
  ARC_W_W(c, 7, ARC_W_R(c, 31));
  /* 10f274: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
L_10f278:;
  /* 10f278: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* 10f27c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 10f280: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 10f284: mov x3, x25 */
  ARC_X_W(c, 3, ARC_X_R(c, 25));
  /* 10f288: mov x4, x19 */
  ARC_X_W(c, 4, ARC_X_R(c, 19));
  /* 10f28c: mov x5, x24 */
  ARC_X_W(c, 5, ARC_X_R(c, 24));
  /* 10f290: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* 10f294: mov w6, w28 */
  ARC_W_W(c, 6, ARC_W_R(c, 28));
  /* 10f298: add x23, x26, x8 */
  ARC_X_W(c, 23, (ARC_X_R(c, 26) + ARC_X_R(c, 8)));
  /* 10f29c: ldr x9, [x9, #0x48] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(72))));
  /* 10f2a0: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1110692));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 10f2a4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 10f2a8: add x26, x23, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* 10f2ac: b #0x10f494 */
  goto L_10f494;
L_10f2b0:;
  /* 10f2b0: add x9, x26, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 26) + UINT64_C(1)));
L_10f2b4:;
  /* 10f2b4: cmp x9, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 22));
  /* 10f2b8: b.eq #0x10f368 */
  if (ARC_COND(c, 0)) goto L_10f368;
  /* 10f2bc: ldrsb x10, [x9] */
  ARC_X_W(c, 10, ((int64_t)(int8_t)arc_ld8(ARC_X_R(c, 9))));
  /* 10f2c0: tbnz x10, #0x3f, #0x10f374 */
  if (((ARC_X_R(c, 10)) >> 63 & 1) != 0) goto L_10f374;
  /* 10f2c4: ldr x10, [x8, x10, lsl #3] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 10)) << 3))));
  /* 10f2c8: add x26, x26, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 26) + UINT64_C(1)));
  /* 10f2cc: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 10f2d0: tbnz w10, #0, #0x10f2b4 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_10f2b4;
  /* 10f2d4: b #0x10f388 */
  goto L_10f388;
L_10f2d8:;
  /* 10f2d8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 10f2dc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 10f2e0: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 10f2e4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1110760));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10f2e8: mov w1, w0 */
  ARC_W_W(c, 1, ARC_W_R(c, 0));
L_10f2ec:;
  /* 10f2ec: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 10f2f0: mov x0, x27 */
  ARC_X_W(c, 0, ARC_X_R(c, 27));
  /* 10f2f4: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 10f2f8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1110780));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10f2fc: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 10f300: ldrb w1, [x26] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 26)));
  /* 10f304: and w23, w0, #0xff */
  ARC_W_W(c, 23, (ARC_W_R(c, 0) & UINT64_C(255)));
  /* 10f308: mov x0, x27 */
  ARC_X_W(c, 0, ARC_X_R(c, 27));
  /* 10f30c: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 10f310: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1110804));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10f314: cmp w23, w0, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 23), ((uint64_t)(uint8_t)(ARC_W_R(c, 0))));
  /* 10f318: b.ne #0x10f338 */
  if (ARC_COND(c, 1)) goto L_10f338;
  /* 10f31c: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 10f320: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 10f324: b.eq #0x10f350 */
  if (ARC_COND(c, 0)) goto L_10f350;
  /* 10f328: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 10f32c: add x26, x26, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 26) + UINT64_C(1)));
  /* 10f330: str x8, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 8));
  /* 10f334: b #0x10f494 */
  goto L_10f494;
L_10f338:;
  /* 10f338: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 10f33c: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 10f340: b #0x10f494 */
  goto L_10f494;
L_10f344:;
  /* 10f344: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 10f348: b.ne #0x10f1b4 */
  if (ARC_COND(c, 1)) goto L_10f1b4;
  /* 10f34c: b #0x10f4ac */
  goto L_10f4ac;
L_10f350:;
  /* 10f350: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 10f354: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 10f358: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 10f35c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1110880));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10f360: add x26, x26, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 26) + UINT64_C(1)));
  /* 10f364: b #0x10f494 */
  goto L_10f494;
L_10f368:;
  /* 10f368: mov x26, x22 */
  ARC_X_W(c, 26, ARC_X_R(c, 22));
  /* 10f36c: cbnz x20, #0x10f38c */
  if ((ARC_X_R(c, 20)) != 0) goto L_10f38c;
  /* 10f370: b #0x10f3f4 */
  goto L_10f3f4;
L_10f374:;
  /* 10f374: mov x26, x9 */
  ARC_X_W(c, 26, ARC_X_R(c, 9));
  /* 10f378: cbnz x20, #0x10f38c */
  if ((ARC_X_R(c, 20)) != 0) goto L_10f38c;
  /* 10f37c: b #0x10f3f4 */
  goto L_10f3f4;
L_10f380:;
  /* 10f380: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 10f384: str x8, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 8));
L_10f388:;
  /* 10f388: cbz x20, #0x10f3f4 */
  if ((ARC_X_R(c, 20)) == 0) goto L_10f3f4;
L_10f38c:;
  /* 10f38c: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 10f390: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 10f394: b.eq #0x10f3b0 */
  if (ARC_COND(c, 0)) goto L_10f3b0;
  /* 10f398: cbz x21, #0x10f430 */
  if ((ARC_X_R(c, 21)) == 0) goto L_10f430;
  /* 10f39c: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 10f3a0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 10f3a4: b.ne #0x10f494 */
  if (ARC_COND(c, 1)) goto L_10f494;
  /* 10f3a8: mov w23, wzr */
  ARC_W_W(c, 23, ARC_W_R(c, 31));
  /* 10f3ac: b #0x10f40c */
  goto L_10f40c;
L_10f3b0:;
  /* 10f3b0: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 10f3b4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 10f3b8: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 10f3bc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1110976));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10f3c0: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 10f3c4: cset w23, eq */
  ARC_W_W(c, 23, (ARC_COND(c, 0) ? 1 : 0));
  /* 10f3c8: csel x20, xzr, x20, eq */
  ARC_X_W(c, 20, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 20)));
  /* 10f3cc: cbz x21, #0x10f3e8 */
  if ((ARC_X_R(c, 21)) == 0) goto L_10f3e8;
  /* 10f3d0: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 10f3d4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 10f3d8: b.eq #0x10f40c */
  if (ARC_COND(c, 0)) goto L_10f40c;
  /* 10f3dc: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 10f3e0: b.eq #0x10f430 */
  if (ARC_COND(c, 0)) goto L_10f430;
  /* 10f3e4: b #0x10f494 */
  goto L_10f494;
L_10f3e8:;
  /* 10f3e8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 10f3ec: b.ne #0x10f430 */
  if (ARC_COND(c, 1)) goto L_10f430;
  /* 10f3f0: b #0x10f494 */
  goto L_10f494;
L_10f3f4:;
  /* 10f3f4: cbz x21, #0x10f490 */
  if ((ARC_X_R(c, 21)) == 0) goto L_10f490;
  /* 10f3f8: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 10f3fc: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 10f400: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 10f404: b.ne #0x10f430 */
  if (ARC_COND(c, 1)) goto L_10f430;
  /* 10f408: mov w23, #1 */
  ARC_W_W(c, 23, UINT64_C(1));
L_10f40c:;
  /* 10f40c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 10f410: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 10f414: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 10f418: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1111068));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10f41c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 10f420: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 10f424: csel x21, xzr, x21, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 21)));
  /* 10f428: cmp w23, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 23), ARC_W_R(c, 8));
  /* 10f42c: b.eq #0x10f494 */
  if (ARC_COND(c, 0)) goto L_10f494;
L_10f430:;
  /* 10f430: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 10f434: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 10f438: b.eq #0x10f448 */
  if (ARC_COND(c, 0)) goto L_10f448;
  /* 10f43c: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 10f440: tbz w8, #7, #0x10f460 */
  if (((ARC_W_R(c, 8)) >> 7 & 1) == 0) goto L_10f460;
  /* 10f444: b #0x10f494 */
  goto L_10f494;
L_10f448:;
  /* 10f448: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 10f44c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 10f450: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 10f454: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1111128));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10f458: and x8, x0, #0xff */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) & UINT64_C(255)));
  /* 10f45c: tbnz w8, #7, #0x10f494 */
  if (((ARC_W_R(c, 8)) >> 7 & 1) != 0) goto L_10f494;
L_10f460:;
  /* 10f460: ldr x9, [x27, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 27) + INT64_C(16))));
  /* 10f464: ldr x8, [x9, x8, lsl #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 3))));
  /* 10f468: tbz w8, #0, #0x10f494 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10f494;
  /* 10f46c: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 10f470: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 10f474: b.ne #0x10f380 */
  if (ARC_COND(c, 1)) goto L_10f380;
  /* 10f478: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 10f47c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 10f480: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 10f484: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1111176));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10f488: cbnz x20, #0x10f38c */
  if ((ARC_X_R(c, 20)) != 0) goto L_10f38c;
  /* 10f48c: b #0x10f3f4 */
  goto L_10f3f4;
L_10f490:;
  /* 10f490: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
L_10f494:;
  /* 10f494: cmp x26, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 22));
  /* 10f498: b.eq #0x10f4b4 */
  if (ARC_COND(c, 0)) goto L_10f4b4;
  /* 10f49c: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* 10f4a0: cbz w8, #0x10f114 */
  if ((ARC_W_R(c, 8)) == 0) goto L_10f114;
  /* 10f4a4: b #0x10f4b4 */
  goto L_10f4b4;
L_10f4a8:;
  /* 10f4a8: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
L_10f4ac:;
  /* 10f4ac: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 10f4b0: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_10f4b4:;
  /* 10f4b4: cbz x20, #0x10f4dc */
  if ((ARC_X_R(c, 20)) == 0) goto L_10f4dc;
  /* 10f4b8: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 10f4bc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 10f4c0: b.eq #0x10f4f8 */
  if (ARC_COND(c, 0)) goto L_10f4f8;
  /* 10f4c4: cbz x21, #0x10f564 */
  if ((ARC_X_R(c, 21)) == 0) goto L_10f564;
  /* 10f4c8: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 10f4cc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 10f4d0: b.ne #0x10f558 */
  if (ARC_COND(c, 1)) goto L_10f558;
  /* 10f4d4: mov w22, wzr */
  ARC_W_W(c, 22, ARC_W_R(c, 31));
  /* 10f4d8: b #0x10f530 */
  goto L_10f530;
L_10f4dc:;
  /* 10f4dc: cbz x21, #0x10f554 */
  if ((ARC_X_R(c, 21)) == 0) goto L_10f554;
  /* 10f4e0: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 10f4e4: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 10f4e8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 10f4ec: b.ne #0x10f564 */
  if (ARC_COND(c, 1)) goto L_10f564;
  /* 10f4f0: mov w22, #1 */
  ARC_W_W(c, 22, UINT64_C(1));
  /* 10f4f4: b #0x10f530 */
  goto L_10f530;
L_10f4f8:;
  /* 10f4f8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 10f4fc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 10f500: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 10f504: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1111304));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10f508: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 10f50c: cset w22, eq */
  ARC_W_W(c, 22, (ARC_COND(c, 0) ? 1 : 0));
  /* 10f510: csel x20, xzr, x20, eq */
  ARC_X_W(c, 20, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 20)));
  /* 10f514: cbz x21, #0x10f58c */
  if ((ARC_X_R(c, 21)) == 0) goto L_10f58c;
  /* 10f518: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 10f51c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 10f520: b.eq #0x10f530 */
  if (ARC_COND(c, 0)) goto L_10f530;
  /* 10f524: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 10f528: b.ne #0x10f558 */
  if (ARC_COND(c, 1)) goto L_10f558;
  /* 10f52c: b #0x10f564 */
  goto L_10f564;
L_10f530:;
  /* 10f530: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 10f534: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 10f538: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 10f53c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1111360));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10f540: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 10f544: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 10f548: eor w8, w22, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 22) ^ ARC_W_R(c, 8)));
  /* 10f54c: tbz w8, #0, #0x10f558 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10f558;
  /* 10f550: b #0x10f564 */
  goto L_10f564;
L_10f554:;
  /* 10f554: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
L_10f558:;
  /* 10f558: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* 10f55c: orr w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(2)));
  /* 10f560: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_10f564:;
  /* 10f564: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 10f568: ldp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 10f56c: ldp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 10f570: ldp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 10f574: ldp x26, x25, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 10f578: ldp x28, x27, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 10f57c: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 10f580: add sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(144)));
  /* 10f584: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 10f588: ret  */
  return;
L_10f58c:;
  /* 10f58c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 10f590: b.ne #0x10f564 */
  if (ARC_COND(c, 1)) goto L_10f564;
  /* 10f594: b #0x10f558 */
  goto L_10f558;
L_10f598:;
  /* 10f598: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1111452));
  fn1_fc3b8(c);
  /* 10f59c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10f5a0: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 10f5a4: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1111464));
  fn1_d2a78(c);
  /* 10f5a8: b #0x10f5b4 */
  goto L_10f5b4;
  /* 10f5ac: b #0x10f5b0 */
  goto L_10f5b0;
L_10f5b0:;
  /* 10f5b0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_10f5b4:;
  /* 10f5b4: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 10f5b8: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1111484));
  fn1_143478(c);
  /* 10f5bc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10f5c0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1111492));
  fn1_9cc20(c);
}

void fn1_113c3c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057468));
  /* 113c3c: bti c */
  /* bti: no architectural effect here */
  /* 113c40: mov w0, #0xff */
  ARC_W_W(c, 0, UINT64_C(255));
  /* 113c44: ret  */
  return;
}

void fn1_1145a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039059880));
  /* 1145a8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1145ac: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1145b0: stp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 1145b4: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 1145b8: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1145bc: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1145c0: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1145c4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1145c8: sub sp, sp, #0x2b0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(688)));
  /* 1145cc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1145d0: ldr x0, [x0] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 0)));
  /* 1145d4: mov x22, x5 */
  ARC_X_W(c, 22, ARC_X_R(c, 5));
  /* 1145d8: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* 1145dc: mov w26, w2 */
  ARC_W_W(c, 26, ARC_W_R(c, 2));
  /* 1145e0: mov x25, x1 */
  ARC_X_W(c, 25, ARC_X_R(c, 1));
  /* 1145e4: str x7, [sp, #0x68] */
  arc_st64(((c)->sp + INT64_C(104)), ARC_X_R(c, 7));
  /* 1145e8: str x6, [sp, #0x38] */
  arc_st64(((c)->sp + INT64_C(56)), ARC_X_R(c, 6));
  /* 1145ec: str w4, [sp, #0x44] */
  arc_st32(((c)->sp + INT64_C(68)), ARC_W_R(c, 4));
  /* 1145f0: cbz x0, #0x11464c */
  if ((ARC_X_R(c, 0)) == 0) goto L_11464c;
  /* 1145f4: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1145f8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1145fc: b.eq #0x114618 */
  if (ARC_COND(c, 0)) goto L_114618;
  /* 114600: cbz x25, #0x114664 */
  if ((ARC_X_R(c, 25)) == 0) goto L_114664;
  /* 114604: ldp x8, x9, [x25, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 114608: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 11460c: b.ne #0x1157c4 */
  if (ARC_COND(c, 1)) goto L_1157c4;
  /* 114610: mov w20, wzr */
  ARC_W_W(c, 20, ARC_W_R(c, 31));
  /* 114614: b #0x1157a0 */
  goto L_1157a0;
L_114618:;
  /* 114618: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 11461c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 114620: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1132068));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 114624: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 114628: b.eq #0x114648 */
  if (ARC_COND(c, 0)) goto L_114648;
  /* 11462c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 114630: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 114634: cset w20, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? 1 : 0));
  /* 114638: cbnz x25, #0x114654 */
  if ((ARC_X_R(c, 25)) != 0) goto L_114654;
L_11463c:;
  /* 11463c: tbnz w20, #0, #0x1157c4 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) != 0) goto L_1157c4;
  /* 114640: mov x25, xzr */
  ARC_X_W(c, 25, ARC_X_R(c, 31));
  /* 114644: b #0x114664 */
  goto L_114664;
L_114648:;
  /* 114648: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
L_11464c:;
  /* 11464c: mov w20, #1 */
  ARC_W_W(c, 20, UINT64_C(1));
  /* 114650: cbz x25, #0x11463c */
  if ((ARC_X_R(c, 25)) == 0) goto L_11463c;
L_114654:;
  /* 114654: ldp x8, x9, [x25, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 114658: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 11465c: b.eq #0x1157a0 */
  if (ARC_COND(c, 0)) goto L_1157a0;
  /* 114660: tbz w20, #0, #0x1157c4 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) == 0) goto L_1157c4;
L_114664:;
  /* 114664: str x22, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 22));
  /* 114668: stp xzr, xzr, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 11466c: str xzr, [sp, #0x100] */
  arc_st64(((c)->sp + INT64_C(256)), ARC_X_R(c, 31));
  /* 114670: stp xzr, xzr, [sp, #0xd8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(216));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 114674: str xzr, [sp, #0xe8] */
  arc_st64(((c)->sp + INT64_C(232)), ARC_X_R(c, 31));
  /* 114678: stp xzr, xzr, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 11467c: str xzr, [sp, #0xd0] */
  arc_st64(((c)->sp + INT64_C(208)), ARC_X_R(c, 31));
  /* 114680: stp xzr, xzr, [sp, #0xa8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(168));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 114684: str xzr, [sp, #0xb8] */
  arc_st64(((c)->sp + INT64_C(184)), ARC_X_R(c, 31));
  /* 114688: stp xzr, xzr, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 11468c: str xzr, [sp, #0xa0] */
  arc_st64(((c)->sp + INT64_C(160)), ARC_X_R(c, 31));
  /* 114690: add x8, sp, #0x8c */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(140)));
  /* 114694: add x22, sp, #0xa8 */
  ARC_X_W(c, 22, ((c)->sp + UINT64_C(168)));
  /* 114698: and w0, w26, #1 */
  ARC_W_W(c, 0, (ARC_W_R(c, 26) & UINT64_C(1)));
  /* 11469c: add x2, sp, #0x114 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(276)));
  /* 1146a0: add x3, sp, #0x110 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(272)));
  /* 1146a4: add x4, sp, #0x10c */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(268)));
  /* 1146a8: add x5, sp, #0xf0 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(240)));
  /* 1146ac: add x6, sp, #0xd8 */
  ARC_X_W(c, 6, ((c)->sp + UINT64_C(216)));
  /* 1146b0: add x7, sp, #0xc0 */
  ARC_X_W(c, 7, ((c)->sp + UINT64_C(192)));
  /* 1146b4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1146b8: stp x22, x8, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 1146bc: add x20, sp, #0xd8 */
  ARC_X_W(c, 20, ((c)->sp + UINT64_C(216)));
  /* 1146c0: add x23, sp, #0xc0 */
  ARC_X_W(c, 23, ((c)->sp + UINT64_C(192)));
  /* 1146c4: bl #0x143a18 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1132232));
  fn1_143a18(c);
  /* 1146c8: ldp x8, x12, [x29, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(96));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 12, arc_ld64(_pa + 8));
  }
  /* 1146cc: orr x10, x23, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 23) | UINT64_C(1)));
  /* 1146d0: ldr x9, [x29, #0x70] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 29) + INT64_C(112))));
  /* 1146d4: str x10, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 10));
  /* 1146d8: orr x10, x22, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 22) | UINT64_C(1)));
  /* 1146dc: add x11, sp, #0x118 */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(280)));
  /* 1146e0: str x10, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 10));
  /* 1146e4: add x10, sp, #0x118 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(280)));
  /* 1146e8: str x9, [sp, #0x80] */
  arc_st64(((c)->sp + INT64_C(128)), ARC_X_R(c, 9));
  /* 1146ec: orr x9, x20, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) | UINT64_C(1)));
  /* 1146f0: mov x19, xzr */
  ARC_X_W(c, 19, ARC_X_R(c, 31));
  /* 1146f4: str x9, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 9));
  /* 1146f8: add x9, sp, #0x90 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(144)));
  /* 1146fc: add x22, sp, #0x118 */
  ARC_X_W(c, 22, ((c)->sp + UINT64_C(280)));
  /* 114700: str x8, [sp, #0x50] */
  arc_st64(((c)->sp + INT64_C(80)), ARC_X_R(c, 8));
  /* 114704: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 114708: orr x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* 11470c: str x10, [sp, #0x60] */
  arc_st64(((c)->sp + INT64_C(96)), ARC_X_R(c, 10));
  /* 114710: add x10, x11, #0x190 */
  ARC_X_W(c, 10, (ARC_X_R(c, 11) + UINT64_C(400)));
  /* 114714: str xzr, [sp, #0x48] */
  arc_st64(((c)->sp + INT64_C(72)), ARC_X_R(c, 31));
  /* 114718: str x12, [sp, #0x78] */
  arc_st64(((c)->sp + INT64_C(120)), ARC_X_R(c, 12));
  /* 11471c: str x10, [sp, #0x70] */
  arc_st64(((c)->sp + INT64_C(112)), ARC_X_R(c, 10));
  /* 114720: str x9, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 9));
  /* 114724: str x8, [x12] */
  arc_st64(ARC_X_R(c, 12), ARC_X_R(c, 8));
  /* 114728: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11472c: ldr x8, [x8, #0xbc8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3016))));
  /* 114730: str x8, [sp, #0x58] */
  arc_st64(((c)->sp + INT64_C(88)), ARC_X_R(c, 8));
  /* 114734: b #0x114748 */
  goto L_114748;
L_114738:;
  /* 114738: mov x25, x24 */
  ARC_X_W(c, 25, ARC_X_R(c, 24));
L_11473c:;
  /* 11473c: add x19, x19, #1 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* 114740: cmp x19, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 19), UINT64_C(4));
  /* 114744: b.eq #0x115624 */
  if (ARC_COND(c, 0)) goto L_115624;
L_114748:;
  /* 114748: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 11474c: cbz x0, #0x1147a4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1147a4;
  /* 114750: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 114754: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 114758: b.eq #0x114774 */
  if (ARC_COND(c, 0)) goto L_114774;
  /* 11475c: cbz x25, #0x1147e4 */
  if ((ARC_X_R(c, 25)) == 0) goto L_1147e4;
  /* 114760: ldp x8, x9, [x25, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 114764: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 114768: b.ne #0x115624 */
  if (ARC_COND(c, 1)) goto L_115624;
  /* 11476c: mov w20, wzr */
  ARC_W_W(c, 20, ARC_W_R(c, 31));
  /* 114770: b #0x1147c0 */
  goto L_1147c0;
L_114774:;
  /* 114774: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 114778: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 11477c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1132416));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 114780: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 114784: b.eq #0x1147a0 */
  if (ARC_COND(c, 0)) goto L_1147a0;
  /* 114788: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11478c: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 114790: cset w20, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? 1 : 0));
  /* 114794: cbnz x25, #0x1147ac */
  if ((ARC_X_R(c, 25)) != 0) goto L_1147ac;
L_114798:;
  /* 114798: tbz w20, #0, #0x1147e4 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) == 0) goto L_1147e4;
  /* 11479c: b #0x115624 */
  goto L_115624;
L_1147a0:;
  /* 1147a0: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
L_1147a4:;
  /* 1147a4: mov w20, #1 */
  ARC_W_W(c, 20, UINT64_C(1));
  /* 1147a8: cbz x25, #0x114798 */
  if ((ARC_X_R(c, 25)) == 0) goto L_114798;
L_1147ac:;
  /* 1147ac: ldp x8, x9, [x25, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1147b0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1147b4: b.eq #0x1147c0 */
  if (ARC_COND(c, 0)) goto L_1147c0;
  /* 1147b8: tbnz w20, #0, #0x1147e4 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) != 0) goto L_1147e4;
  /* 1147bc: b #0x115624 */
  goto L_115624;
L_1147c0:;
  /* 1147c0: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 1147c4: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1147c8: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 1147cc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1132496));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1147d0: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1147d4: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 1147d8: csel x25, xzr, x25, eq */
  ARC_X_W(c, 25, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 25)));
  /* 1147dc: eor w8, w20, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 20) ^ ARC_W_R(c, 8)));
  /* 1147e0: tbz w8, #0, #0x115624 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_115624;
L_1147e4:;
  /* 1147e4: add x8, sp, #0x114 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(276)));
  /* 1147e8: ldrb w8, [x8, x19] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + ARC_X_R(c, 19))));
  /* 1147ec: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 1147f0: b.le #0x114a7c */
  if (ARC_COND(c, 13)) goto L_114a7c;
  /* 1147f4: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 1147f8: b.eq #0x114aac */
  if (ARC_COND(c, 0)) goto L_114aac;
  /* 1147fc: cmp w8, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(3));
  /* 114800: b.eq #0x114ae0 */
  if (ARC_COND(c, 0)) goto L_114ae0;
  /* 114804: cmp w8, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(4));
  /* 114808: b.ne #0x11473c */
  if (ARC_COND(c, 1)) goto L_11473c;
  /* 11480c: mov w23, wzr */
  ARC_W_W(c, 23, ARC_W_R(c, 31));
  /* 114810: b #0x11481c */
  goto L_11481c;
L_114814:;
  /* 114814: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 114818: str x8, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 8));
L_11481c:;
  /* 11481c: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 114820: cbz x0, #0x11487c */
  if ((ARC_X_R(c, 0)) == 0) goto L_11487c;
  /* 114824: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 114828: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 11482c: b.eq #0x114848 */
  if (ARC_COND(c, 0)) goto L_114848;
  /* 114830: cbz x25, #0x1148c0 */
  if ((ARC_X_R(c, 25)) == 0) goto L_1148c0;
  /* 114834: ldp x8, x9, [x25, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 114838: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 11483c: b.ne #0x114b1c */
  if (ARC_COND(c, 1)) goto L_114b1c;
  /* 114840: mov w20, wzr */
  ARC_W_W(c, 20, ARC_W_R(c, 31));
  /* 114844: b #0x114898 */
  goto L_114898;
L_114848:;
  /* 114848: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 11484c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 114850: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1132628));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 114854: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 114858: b.eq #0x114874 */
  if (ARC_COND(c, 0)) goto L_114874;
  /* 11485c: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 114860: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* 114864: cset w20, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? 1 : 0));
  /* 114868: cbnz x25, #0x114884 */
  if ((ARC_X_R(c, 25)) != 0) goto L_114884;
L_11486c:;
  /* 11486c: tbz w20, #0, #0x1148c0 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) == 0) goto L_1148c0;
  /* 114870: b #0x114b1c */
  goto L_114b1c;
L_114874:;
  /* 114874: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 114878: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
L_11487c:;
  /* 11487c: mov w20, #1 */
  ARC_W_W(c, 20, UINT64_C(1));
  /* 114880: cbz x25, #0x11486c */
  if ((ARC_X_R(c, 25)) == 0) goto L_11486c;
L_114884:;
  /* 114884: ldp x8, x9, [x25, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 114888: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 11488c: b.eq #0x114898 */
  if (ARC_COND(c, 0)) goto L_114898;
  /* 114890: tbnz w20, #0, #0x1148c0 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) != 0) goto L_1148c0;
  /* 114894: b #0x114b1c */
  goto L_114b1c;
L_114898:;
  /* 114898: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 11489c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1148a0: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 1148a4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1132712));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1148a8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1148ac: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 1148b0: csel x25, xzr, x25, eq */
  ARC_X_W(c, 25, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 25)));
  /* 1148b4: cmp w20, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 20), ARC_W_R(c, 8));
  /* 1148b8: b.eq #0x114b1c */
  if (ARC_COND(c, 0)) goto L_114b1c;
  /* 1148bc: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
L_1148c0:;
  /* 1148c0: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1148c4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1148c8: b.eq #0x1148dc */
  if (ARC_COND(c, 0)) goto L_1148dc;
  /* 1148cc: ldrb w24, [x8] */
  ARC_W_W(c, 24, arc_ld8(ARC_X_R(c, 8)));
  /* 1148d0: ldr x9, [sp, #0x80] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(128))));
  /* 1148d4: tbz w24, #7, #0x1148f4 */
  if (((ARC_W_R(c, 24)) >> 7 & 1) == 0) goto L_1148f4;
  /* 1148d8: b #0x114904 */
  goto L_114904;
L_1148dc:;
  /* 1148dc: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1148e0: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1148e4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1132776));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1148e8: and x24, x0, #0xff */
  ARC_X_W(c, 24, (ARC_X_R(c, 0) & UINT64_C(255)));
  /* 1148ec: ldr x9, [sp, #0x80] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(128))));
  /* 1148f0: tbnz w24, #7, #0x114904 */
  if (((ARC_W_R(c, 24)) >> 7 & 1) != 0) goto L_114904;
L_1148f4:;
  /* 1148f4: ldr x8, [sp, #0x68] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(104))));
  /* 1148f8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 1148fc: ldr x8, [x8, x24, lsl #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 3))));
  /* 114900: tbnz w8, #6, #0x11497c */
  if (((ARC_W_R(c, 8)) >> 6 & 1) != 0) goto L_11497c;
L_114904:;
  /* 114904: ldrb w8, [sp, #0xf0] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(240))));
  /* 114908: ldr x9, [sp, #0xf8] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(248))));
  /* 11490c: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 114910: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 114914: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 114918: cbz x8, #0x114b1c */
  if ((ARC_X_R(c, 8)) == 0) goto L_114b1c;
  /* 11491c: cbz w23, #0x114b1c */
  if ((ARC_W_R(c, 23)) == 0) goto L_114b1c;
  /* 114920: ldrb w8, [sp, #0x10c] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(268))));
  /* 114924: cmp x24, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 114928: b.ne #0x114b1c */
  if (ARC_COND(c, 1)) goto L_114b1c;
  /* 11492c: ldr x8, [sp, #0x70] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(112))));
  /* 114930: cmp x22, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* 114934: b.ne #0x114a08 */
  if (ARC_COND(c, 1)) goto L_114a08;
  /* 114938: ldr x0, [sp, #0x60] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(96))));
  /* 11493c: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 114940: subs x22, x8, x0 */
  ARC_X_W(c, 22, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 0)));
  /* 114944: lsl x8, x22, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 22)) << ((UINT64_C(1)) & 63)));
  /* 114948: csel x8, x9, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 11494c: mov x9, #0x7fffffffffffffff */
  ARC_X_W(c, 9, UINT64_C(9223372036854775807));
  /* 114950: cmp x22, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 9));
  /* 114954: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 114958: csinv x20, x8, xzr, lo */
  ARC_X_W(c, 20, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : (~(uint64_t)(ARC_X_R(c, 31)))));
  /* 11495c: ldr x8, [sp, #0x58] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(88))));
  /* 114960: ldr x9, [x9, #0xbc8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(3016))));
  /* 114964: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 114968: b.eq #0x1149dc */
  if (ARC_COND(c, 0)) goto L_1149dc;
  /* 11496c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 114970: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1132916));
  fn1_142878(c);
  /* 114974: cbnz x0, #0x1149e8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_1149e8;
  /* 114978: b #0x1159c0 */
  goto L_1159c0;
L_11497c:;
  /* 11497c: ldr x8, [sp, #0x78] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(120))));
  /* 114980: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 114984: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 114988: b.eq #0x114994 */
  if (ARC_COND(c, 0)) goto L_114994;
  /* 11498c: ldr x11, [sp, #0x78] */
  ARC_X_W(c, 11, arc_ld64(((c)->sp + INT64_C(120))));
  /* 114990: b #0x114a4c */
  goto L_114a4c;
L_114994:;
  /* 114994: mov x8, x9 */
  ARC_X_W(c, 8, ARC_X_R(c, 9));
  /* 114998: ldr x9, [sp, #0x50] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(80))));
  /* 11499c: mov x10, #0x7fffffffffffffff */
  ARC_X_W(c, 10, UINT64_C(9223372036854775807));
  /* 1149a0: ldp x0, x9, [x9] */
  { const uint64_t _pa = ARC_X_R(c, 9);
    ARC_X_W(c, 0, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1149a4: sub x26, x8, x0 */
  ARC_X_W(c, 26, (ARC_X_R(c, 8) - ARC_X_R(c, 0)));
  /* 1149a8: lsl x8, x26, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 26)) << ((UINT64_C(1)) & 63)));
  /* 1149ac: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1149b0: csinc x8, x8, xzr, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ((ARC_X_R(c, 31)) + 1)));
  /* 1149b4: cmp x26, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 10));
  /* 1149b8: csinv x20, x8, xzr, lo */
  ARC_X_W(c, 20, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : (~(uint64_t)(ARC_X_R(c, 31)))));
  /* 1149bc: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1149c0: ldr x8, [x8, #0xbc8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3016))));
  /* 1149c4: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 1149c8: b.eq #0x114a14 */
  if (ARC_COND(c, 0)) goto L_114a14;
  /* 1149cc: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1149d0: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1133012));
  fn1_142878(c);
  /* 1149d4: cbnz x0, #0x114a20 */
  if ((ARC_X_R(c, 0)) != 0) goto L_114a20;
  /* 1149d8: b #0x1159c4 */
  goto L_1159c4;
L_1149dc:;
  /* 1149dc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1149e0: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1133028));
  fn1_1428a8(c);
  /* 1149e4: cbz x0, #0x1159c0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1159c0;
L_1149e8:;
  /* 1149e8: and x8, x20, #0xfffffffffffffffc */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) & UINT64_C(18446744073709551612)));
  /* 1149ec: str x0, [sp, #0x60] */
  arc_st64(((c)->sp + INT64_C(96)), ARC_X_R(c, 0));
  /* 1149f0: add x22, x0, x22 */
  ARC_X_W(c, 22, (ARC_X_R(c, 0) + ARC_X_R(c, 22)));
  /* 1149f4: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* 1149f8: str x8, [sp, #0x70] */
  arc_st64(((c)->sp + INT64_C(112)), ARC_X_R(c, 8));
  /* 1149fc: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 114a00: ldr x8, [x8, #0x9a0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2464))));
  /* 114a04: str x8, [sp, #0x58] */
  arc_st64(((c)->sp + INT64_C(88)), ARC_X_R(c, 8));
L_114a08:;
  /* 114a08: str w23, [x22], #4 */
  { const uint64_t _a = ARC_X_R(c, 22);
    ARC_X_W(c, 22, ARC_X_R(c, 22) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 23));
  }
  /* 114a0c: mov w23, wzr */
  ARC_W_W(c, 23, ARC_W_R(c, 31));
  /* 114a10: b #0x114a5c */
  goto L_114a5c;
L_114a14:;
  /* 114a14: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 114a18: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1133084));
  fn1_1428a8(c);
  /* 114a1c: cbz x0, #0x1159c4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1159c4;
L_114a20:;
  /* 114a20: ldr x10, [sp, #0x50] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(80))));
  /* 114a24: ldr x11, [sp, #0x78] */
  ARC_X_W(c, 11, arc_ld64(((c)->sp + INT64_C(120))));
  /* 114a28: add x8, x0, x26 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 26)));
  /* 114a2c: adrp x12, #0x151000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 114a30: str x0, [x10] */
  arc_st64(ARC_X_R(c, 10), ARC_X_R(c, 0));
  /* 114a34: str x8, [x11] */
  arc_st64(ARC_X_R(c, 11), ARC_X_R(c, 8));
  /* 114a38: ldr x9, [x10] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 10)));
  /* 114a3c: ldr x12, [x12, #0x9a0] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 12) + INT64_C(2464))));
  /* 114a40: add x9, x9, x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 20)));
  /* 114a44: str x12, [x10, #8] */
  arc_st64((ARC_X_R(c, 10) + INT64_C(8)), ARC_X_R(c, 12));
  /* 114a48: str x9, [sp, #0x80] */
  arc_st64(((c)->sp + INT64_C(128)), ARC_X_R(c, 9));
L_114a4c:;
  /* 114a4c: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 114a50: add w23, w23, #1 */
  ARC_W_W(c, 23, (ARC_W_R(c, 23) + UINT64_C(1)));
  /* 114a54: str x9, [x11] */
  arc_st64(ARC_X_R(c, 11), ARC_X_R(c, 9));
  /* 114a58: strb w24, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 24));
L_114a5c:;
  /* 114a5c: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 114a60: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 114a64: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 114a68: b.ne #0x114814 */
  if (ARC_COND(c, 1)) goto L_114814;
  /* 114a6c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 114a70: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 114a74: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1133176));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 114a78: b #0x11481c */
  goto L_11481c;
L_114a7c:;
  /* 114a7c: cbz w8, #0x114b10 */
  if ((ARC_W_R(c, 8)) == 0) goto L_114b10;
  /* 114a80: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 114a84: b.ne #0x11473c */
  if (ARC_COND(c, 1)) goto L_11473c;
  /* 114a88: cmp x19, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 19), UINT64_C(3));
  /* 114a8c: b.eq #0x115624 */
  if (ARC_COND(c, 0)) goto L_115624;
  /* 114a90: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 114a94: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 114a98: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 114a9c: b.eq #0x114b9c */
  if (ARC_COND(c, 0)) goto L_114b9c;
  /* 114aa0: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 114aa4: tbz w8, #7, #0x114bb0 */
  if (((ARC_W_R(c, 8)) >> 7 & 1) == 0) goto L_114bb0;
  /* 114aa8: b #0x1158d8 */
  goto L_1158d8;
L_114aac:;
  /* 114aac: ldr x8, [sp, #0x48] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(72))));
  /* 114ab0: cbnz x8, #0x114b7c */
  if ((ARC_X_R(c, 8)) != 0) goto L_114b7c;
  /* 114ab4: cmp x19, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 19), UINT64_C(2));
  /* 114ab8: b.lo #0x114b7c */
  if (ARC_COND(c, 3)) goto L_114b7c;
  /* 114abc: ldrb w8, [sp, #0x117] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(279))));
  /* 114ac0: ldr w9, [sp, #0x44] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(68))));
  /* 114ac4: tst w8, #0xff */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(255)));
  /* 114ac8: ccmp x19, #2, #0, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub64(c, ARC_X_R(c, 19), UINT64_C(2)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* 114acc: cset w8, ne */
  ARC_W_W(c, 8, (ARC_COND(c, 1) ? 1 : 0));
  /* 114ad0: tbnz w9, #9, #0x114c6c */
  if (((ARC_W_R(c, 9)) >> 9 & 1) != 0) goto L_114c6c;
  /* 114ad4: tbz w8, #0, #0x114c6c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_114c6c;
  /* 114ad8: str xzr, [sp, #0x48] */
  arc_st64(((c)->sp + INT64_C(72)), ARC_X_R(c, 31));
  /* 114adc: b #0x11473c */
  goto L_11473c;
L_114ae0:;
  /* 114ae0: ldrb w8, [sp, #0xc0] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(192))));
  /* 114ae4: ldr x10, [sp, #0xc8] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(200))));
  /* 114ae8: lsr x11, x8, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 114aec: ands w9, w8, #1 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 9, _r); }
  /* 114af0: csel x10, x11, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 114af4: cbz x10, #0x114d2c */
  if ((ARC_X_R(c, 10)) == 0) goto L_114d2c;
  /* 114af8: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 114afc: ldp x10, x11, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* 114b00: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 114b04: b.eq #0x114cdc */
  if (ARC_COND(c, 0)) goto L_114cdc;
  /* 114b08: ldrb w10, [x10] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 10)));
  /* 114b0c: b #0x114cf4 */
  goto L_114cf4;
L_114b10:;
  /* 114b10: cmp x19, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 19), UINT64_C(3));
  /* 114b14: b.ne #0x114ea4 */
  if (ARC_COND(c, 1)) goto L_114ea4;
  /* 114b18: b #0x115624 */
  goto L_115624;
L_114b1c:;
  /* 114b1c: ldr x8, [sp, #0x60] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(96))));
  /* 114b20: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* 114b24: b.eq #0x1152f0 */
  if (ARC_COND(c, 0)) goto L_1152f0;
  /* 114b28: cbz w23, #0x1152f0 */
  if ((ARC_W_R(c, 23)) == 0) goto L_1152f0;
  /* 114b2c: ldr x8, [sp, #0x70] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(112))));
  /* 114b30: cmp x22, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* 114b34: b.ne #0x1152ec */
  if (ARC_COND(c, 1)) goto L_1152ec;
  /* 114b38: ldr x0, [sp, #0x60] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(96))));
  /* 114b3c: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 114b40: subs x22, x8, x0 */
  ARC_X_W(c, 22, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 0)));
  /* 114b44: lsl x8, x22, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 22)) << ((UINT64_C(1)) & 63)));
  /* 114b48: csel x8, x9, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 114b4c: mov x9, #0x7fffffffffffffff */
  ARC_X_W(c, 9, UINT64_C(9223372036854775807));
  /* 114b50: cmp x22, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 9));
  /* 114b54: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 114b58: csinv x20, x8, xzr, lo */
  ARC_X_W(c, 20, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : (~(uint64_t)(ARC_X_R(c, 31)))));
  /* 114b5c: ldr x8, [sp, #0x58] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(88))));
  /* 114b60: ldr x9, [x9, #0xbc8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(3016))));
  /* 114b64: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 114b68: b.eq #0x1152c0 */
  if (ARC_COND(c, 0)) goto L_1152c0;
  /* 114b6c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 114b70: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1133428));
  fn1_142878(c);
  /* 114b74: cbnz x0, #0x1152cc */
  if ((ARC_X_R(c, 0)) != 0) goto L_1152cc;
  /* 114b78: b #0x1159d0 */
  goto L_1159d0;
L_114b7c:;
  /* 114b7c: ldrb w20, [sp, #0xd8] */
  ARC_W_W(c, 20, arc_ld8(((c)->sp + INT64_C(216))));
  /* 114b80: ldp x24, x23, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 114b84: ldr x9, [sp, #0x30] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(48))));
  /* 114b88: tst w20, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 20) & UINT64_C(1)));
  /* 114b8c: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 114b90: csel x26, x9, x23, eq */
  ARC_X_W(c, 26, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 23)));
  /* 114b94: cbnz x19, #0x114c84 */
  if ((ARC_X_R(c, 19)) != 0) goto L_114c84;
  /* 114b98: b #0x115104 */
  goto L_115104;
L_114b9c:;
  /* 114b9c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 114ba0: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 114ba4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1133480));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 114ba8: and x8, x0, #0xff */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) & UINT64_C(255)));
  /* 114bac: tbnz w8, #7, #0x1158d8 */
  if (((ARC_W_R(c, 8)) >> 7 & 1) != 0) goto L_1158d8;
L_114bb0:;
  /* 114bb0: ldr x9, [sp, #0x68] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(104))));
  /* 114bb4: ldr x9, [x9, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(16))));
  /* 114bb8: ldr x8, [x9, x8, lsl #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 3))));
  /* 114bbc: tbz w8, #0, #0x1158d8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1158d8;
  /* 114bc0: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 114bc4: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 114bc8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 114bcc: b.eq #0x114bfc */
  if (ARC_COND(c, 0)) goto L_114bfc;
  /* 114bd0: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 114bd4: str x9, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 9));
  /* 114bd8: ldrb w26, [x8] */
  ARC_W_W(c, 26, arc_ld8(ARC_X_R(c, 8)));
  /* 114bdc: ldrb w8, [sp, #0x90] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(144))));
  /* 114be0: tbnz w8, #0, #0x114c14 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_114c14;
L_114be4:;
  /* 114be4: cmp w8, #0x2c */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(44));
  /* 114be8: b.ne #0x114d5c */
  if (ARC_COND(c, 1)) goto L_114d5c;
  /* 114bec: ldr x28, [sp, #0x28] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(40))));
  /* 114bf0: mov w27, #0x16 */
  ARC_W_W(c, 27, UINT64_C(22));
  /* 114bf4: mov w24, #0x30 */
  ARC_W_W(c, 24, UINT64_C(48));
  /* 114bf8: b #0x114c64 */
  goto L_114c64;
L_114bfc:;
  /* 114bfc: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 114c00: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 114c04: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1133576));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 114c08: mov w26, w0 */
  ARC_W_W(c, 26, ARC_W_R(c, 0));
  /* 114c0c: ldrb w8, [sp, #0x90] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(144))));
  /* 114c10: tbz w8, #0, #0x114be4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_114be4;
L_114c14:;
  /* 114c14: ldp x9, x8, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 114c18: and x23, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 23, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 114c1c: sub x27, x23, #1 */
  ARC_X_W(c, 27, (ARC_X_R(c, 23) - UINT64_C(1)));
  /* 114c20: cmp x8, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 27));
  /* 114c24: b.ne #0x114d70 */
  if (ARC_COND(c, 1)) goto L_114d70;
  /* 114c28: cmn x23, #8 */
  (void)arc_add64(c, ARC_X_R(c, 23), UINT64_C(8), 0);
  /* 114c2c: b.eq #0x1159cc */
  if (ARC_COND(c, 0)) goto L_1159cc;
  /* 114c30: mov x8, #-0xd */
  ARC_X_W(c, 8, UINT64_C(18446744073709551603));
  /* 114c34: ldr x28, [sp, #0xa0] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(160))));
  /* 114c38: movk x8, #0x7fff, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(9223090561878065152)));
  /* 114c3c: cmp x27, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 27), ARC_X_R(c, 8));
  /* 114c40: b.hs #0x114e54 */
  if (ARC_COND(c, 2)) goto L_114e54;
  /* 114c44: lsl x8, x27, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 27)) << ((UINT64_C(1)) & 63)));
  /* 114c48: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* 114c4c: orr x8, x8, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(7)));
  /* 114c50: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* 114c54: csinc x8, x9, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* 114c58: cmp x27, #0xc */
  (void)arc_sub64(c, ARC_X_R(c, 27), UINT64_C(12));
  /* 114c5c: mov w9, #0x17 */
  ARC_W_W(c, 9, UINT64_C(23));
  /* 114c60: csel x24, x9, x8, lo */
  ARC_X_W(c, 24, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
L_114c64:;
  /* 114c64: add x23, x27, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 27) + UINT64_C(1)));
  /* 114c68: b #0x114e58 */
  goto L_114e58;
L_114c6c:;
  /* 114c6c: ldrb w20, [sp, #0xd8] */
  ARC_W_W(c, 20, arc_ld8(((c)->sp + INT64_C(216))));
  /* 114c70: ldp x24, x23, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 114c74: ldr x9, [sp, #0x30] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(48))));
  /* 114c78: tst w20, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 20) & UINT64_C(1)));
  /* 114c7c: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 114c80: csel x26, x9, x23, eq */
  ARC_X_W(c, 26, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 23)));
L_114c84:;
  /* 114c84: add x9, sp, #0x114 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(276)));
  /* 114c88: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* 114c8c: ldurb w9, [x9, #-1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 9) + INT64_C(-1))));
  /* 114c90: cmp w9, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(1));
  /* 114c94: b.hi #0x115104 */
  if (ARC_COND(c, 8)) goto L_115104;
  /* 114c98: lsr w9, w20, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 20)) >> ((UINT64_C(1)) & 31)));
  /* 114c9c: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 114ca0: csel x8, x9, x24, ne */
  ARC_X_W(c, 8, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 24)));
  /* 114ca4: cbz x8, #0x1150b8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1150b8;
  /* 114ca8: ldr x9, [sp, #0x68] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(104))));
  /* 114cac: mov x27, x26 */
  ARC_X_W(c, 27, ARC_X_R(c, 26));
  /* 114cb0: ldr x10, [x9, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 9) + INT64_C(16))));
  /* 114cb4: add x9, x26, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 26) + ARC_X_R(c, 8)));
L_114cb8:;
  /* 114cb8: ldrsb x11, [x27] */
  ARC_X_W(c, 11, ((int64_t)(int8_t)arc_ld8(ARC_X_R(c, 27))));
  /* 114cbc: tbnz x11, #0x3f, #0x1150bc */
  if (((ARC_X_R(c, 11)) >> 63 & 1) != 0) goto L_1150bc;
  /* 114cc0: ldr x11, [x10, x11, lsl #3] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 11)) << 3))));
  /* 114cc4: tbz w11, #0, #0x1150bc */
  if (((ARC_W_R(c, 11)) >> 0 & 1) == 0) goto L_1150bc;
  /* 114cc8: subs x8, x8, #1 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1)));
  /* 114ccc: add x27, x27, #1 */
  ARC_X_W(c, 27, (ARC_X_R(c, 27) + UINT64_C(1)));
  /* 114cd0: b.ne #0x114cb8 */
  if (ARC_COND(c, 1)) goto L_114cb8;
  /* 114cd4: mov x27, x9 */
  ARC_X_W(c, 27, ARC_X_R(c, 9));
  /* 114cd8: b #0x1150bc */
  goto L_1150bc;
L_114cdc:;
  /* 114cdc: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 114ce0: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 114ce4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1133800));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 114ce8: ldrb w8, [sp, #0xc0] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(192))));
  /* 114cec: and w10, w0, #0xff */
  ARC_W_W(c, 10, (ARC_W_R(c, 0) & UINT64_C(255)));
  /* 114cf0: and w9, w8, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) & UINT64_C(1)));
L_114cf4:;
  /* 114cf4: ldr x11, [sp, #0xd0] */
  ARC_X_W(c, 11, arc_ld64(((c)->sp + INT64_C(208))));
  /* 114cf8: ldr x12, [sp, #0x20] */
  ARC_X_W(c, 12, arc_ld64(((c)->sp + INT64_C(32))));
  /* 114cfc: cmp w9, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(0));
  /* 114d00: csel x11, x12, x11, eq */
  ARC_X_W(c, 11, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* 114d04: ldrb w11, [x11] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 11)));
  /* 114d08: cmp w10, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 11));
  /* 114d0c: b.ne #0x114d2c */
  if (ARC_COND(c, 1)) goto L_114d2c;
  /* 114d10: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 114d14: ldp x10, x11, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* 114d18: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 114d1c: b.eq #0x114e18 */
  if (ARC_COND(c, 0)) goto L_114e18;
  /* 114d20: add x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* 114d24: str x10, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 10));
  /* 114d28: b #0x114e2c */
  goto L_114e2c;
L_114d2c:;
  /* 114d2c: ldrb w10, [sp, #0xa8] */
  ARC_W_W(c, 10, arc_ld8(((c)->sp + INT64_C(168))));
  /* 114d30: ldr x11, [sp, #0xb0] */
  ARC_X_W(c, 11, arc_ld64(((c)->sp + INT64_C(176))));
  /* 114d34: lsr x12, x10, #1 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* 114d38: ands w9, w10, #1 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 9, _r); }
  /* 114d3c: csel x13, x12, x11, eq */
  ARC_X_W(c, 13, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* 114d40: cbz x13, #0x114ddc */
  if ((ARC_X_R(c, 13)) == 0) goto L_114ddc;
  /* 114d44: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 114d48: ldp x8, x11, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* 114d4c: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* 114d50: b.eq #0x114d7c */
  if (ARC_COND(c, 0)) goto L_114d7c;
  /* 114d54: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 114d58: b #0x114d94 */
  goto L_114d94;
L_114d5c:;
  /* 114d5c: lsr x27, x8, #1 */
  ARC_X_W(c, 27, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 114d60: add w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(2)));
  /* 114d64: ldr x20, [sp, #0x28] */
  ARC_X_W(c, 20, arc_ld64(((c)->sp + INT64_C(40))));
  /* 114d68: strb w8, [sp, #0x90] */
  arc_st8(((c)->sp + INT64_C(144)), ARC_W_R(c, 8));
  /* 114d6c: b #0x114e98 */
  goto L_114e98;
L_114d70:;
  /* 114d70: ldr x20, [sp, #0xa0] */
  ARC_X_W(c, 20, arc_ld64(((c)->sp + INT64_C(160))));
  /* 114d74: mov x27, x8 */
  ARC_X_W(c, 27, ARC_X_R(c, 8));
  /* 114d78: b #0x114e90 */
  goto L_114e90;
L_114d7c:;
  /* 114d7c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 114d80: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 114d84: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1133960));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 114d88: ldrb w10, [sp, #0xa8] */
  ARC_W_W(c, 10, arc_ld8(((c)->sp + INT64_C(168))));
  /* 114d8c: and w8, w0, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) & UINT64_C(255)));
  /* 114d90: and w9, w10, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 10) & UINT64_C(1)));
L_114d94:;
  /* 114d94: ldr x11, [sp, #0xb8] */
  ARC_X_W(c, 11, arc_ld64(((c)->sp + INT64_C(184))));
  /* 114d98: ldr x12, [sp, #0x10] */
  ARC_X_W(c, 12, arc_ld64(((c)->sp + INT64_C(16))));
  /* 114d9c: cmp w9, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(0));
  /* 114da0: csel x11, x12, x11, eq */
  ARC_X_W(c, 11, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* 114da4: ldrb w11, [x11] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 11)));
  /* 114da8: cmp w8, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 11));
  /* 114dac: b.ne #0x114dcc */
  if (ARC_COND(c, 1)) goto L_114dcc;
  /* 114db0: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 114db4: ldp x8, x11, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* 114db8: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* 114dbc: b.eq #0x115278 */
  if (ARC_COND(c, 0)) goto L_115278;
  /* 114dc0: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 114dc4: str x8, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 8));
  /* 114dc8: b #0x11528c */
  goto L_11528c;
L_114dcc:;
  /* 114dcc: ldrb w8, [sp, #0xc0] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(192))));
  /* 114dd0: ldr x11, [sp, #0xb0] */
  ARC_X_W(c, 11, arc_ld64(((c)->sp + INT64_C(176))));
  /* 114dd4: lsr w12, w10, #1 */
  ARC_W_W(c, 12, ((uint32_t)(ARC_W_R(c, 10)) >> ((UINT64_C(1)) & 31)));
  /* 114dd8: and w9, w10, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 10) & UINT64_C(1)));
L_114ddc:;
  /* 114ddc: ldr x10, [sp, #0xc8] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(200))));
  /* 114de0: lsr w13, w8, #1 */
  ARC_W_W(c, 13, ((uint32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(1)) & 31)));
  /* 114de4: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 114de8: csel x8, x13, x10, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 10)));
  /* 114dec: cmp w9, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(0));
  /* 114df0: csel x9, x12, x11, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* 114df4: cbz x8, #0x114e00 */
  if ((ARC_X_R(c, 8)) == 0) goto L_114e00;
  /* 114df8: cbz x9, #0x114e04 */
  if ((ARC_X_R(c, 9)) == 0) goto L_114e04;
  /* 114dfc: b #0x1158d8 */
  goto L_1158d8;
L_114e00:;
  /* 114e00: cbz x9, #0x11473c */
  if ((ARC_X_R(c, 9)) == 0) goto L_11473c;
L_114e04:;
  /* 114e04: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 114e08: ldr x9, [sp, #0x38] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(56))));
  /* 114e0c: cset w8, ne */
  ARC_W_W(c, 8, (ARC_COND(c, 1) ? 1 : 0));
  /* 114e10: strb w8, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 8));
  /* 114e14: b #0x11473c */
  goto L_11473c;
L_114e18:;
  /* 114e18: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 114e1c: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 114e20: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1134116));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 114e24: ldrb w8, [sp, #0xc0] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(192))));
  /* 114e28: and w9, w8, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) & UINT64_C(1)));
L_114e2c:;
  /* 114e2c: ldr x10, [sp, #0xc8] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(200))));
  /* 114e30: lsr w8, w8, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(1)) & 31)));
  /* 114e34: cmp w9, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(0));
  /* 114e38: add x9, sp, #0xc0 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(192)));
  /* 114e3c: csel x8, x8, x10, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* 114e40: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 114e44: ldr x8, [sp, #0x38] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(56))));
  /* 114e48: strb wzr, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 31));
  /* 114e4c: ldr x8, [sp, #0x48] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(72))));
  /* 114e50: b #0x1152b4 */
  goto L_1152b4;
L_114e54:;
  /* 114e54: mov x24, #-9 */
  ARC_X_W(c, 24, UINT64_C(18446744073709551607));
L_114e58:;
  /* 114e58: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 114e5c: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1134176));
  fn1_1428f0(c);
  /* 114e60: mov x1, x28 */
  ARC_X_W(c, 1, ARC_X_R(c, 28));
  /* 114e64: mov x2, x27 */
  ARC_X_W(c, 2, ARC_X_R(c, 27));
  /* 114e68: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 114e6c: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1134192));
  fn1_1449f0(c);
  /* 114e70: cmp x23, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 23), UINT64_C(23));
  /* 114e74: b.eq #0x114e84 */
  if (ARC_COND(c, 0)) goto L_114e84;
  /* 114e78: mov x0, x28 */
  ARC_X_W(c, 0, ARC_X_R(c, 28));
  /* 114e7c: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 114e80: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1134212));
  fn1_142608(c);
L_114e84:;
  /* 114e84: orr x8, x24, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) | UINT64_C(1)));
  /* 114e88: str x20, [sp, #0xa0] */
  arc_st64(((c)->sp + INT64_C(160)), ARC_X_R(c, 20));
  /* 114e8c: str x8, [sp, #0x90] */
  arc_st64(((c)->sp + INT64_C(144)), ARC_X_R(c, 8));
L_114e90:;
  /* 114e90: add x8, x27, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 27) + UINT64_C(1)));
  /* 114e94: str x8, [sp, #0x98] */
  arc_st64(((c)->sp + INT64_C(152)), ARC_X_R(c, 8));
L_114e98:;
  /* 114e98: add x8, x20, x27 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + ARC_X_R(c, 27)));
  /* 114e9c: strb w26, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 26));
  /* 114ea0: strb wzr, [x8, #1] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(1)), ARC_W_R(c, 31));
L_114ea4:;
  /* 114ea4: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 114ea8: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* 114eac: mov w20, #1 */
  ARC_W_W(c, 20, UINT64_C(1));
  /* 114eb0: cbz x0, #0x114efc */
  if ((ARC_X_R(c, 0)) == 0) goto L_114efc;
  /* 114eb4: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 114eb8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 114ebc: b.eq #0x114edc */
  if (ARC_COND(c, 0)) goto L_114edc;
  /* 114ec0: mov x24, xzr */
  ARC_X_W(c, 24, ARC_X_R(c, 31));
  /* 114ec4: cbz x25, #0x114f60 */
  if ((ARC_X_R(c, 25)) == 0) goto L_114f60;
  /* 114ec8: ldp x8, x9, [x25, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 114ecc: mov w20, wzr */
  ARC_W_W(c, 20, ARC_W_R(c, 31));
  /* 114ed0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 114ed4: b.ne #0x11473c */
  if (ARC_COND(c, 1)) goto L_11473c;
  /* 114ed8: b #0x114f1c */
  goto L_114f1c;
L_114edc:;
  /* 114edc: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 114ee0: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 114ee4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1134312));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 114ee8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 114eec: b.eq #0x114f48 */
  if (ARC_COND(c, 0)) goto L_114f48;
  /* 114ef0: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 114ef4: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 114ef8: cset w20, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? 1 : 0));
L_114efc:;
  /* 114efc: cbz x25, #0x114f54 */
  if ((ARC_X_R(c, 25)) == 0) goto L_114f54;
L_114f00:;
  /* 114f00: ldp x9, x10, [x25, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 114f04: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 114f08: b.eq #0x114f1c */
  if (ARC_COND(c, 0)) goto L_114f1c;
  /* 114f0c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 114f10: mov x24, x25 */
  ARC_X_W(c, 24, ARC_X_R(c, 25));
  /* 114f14: tbz w20, #0, #0x11473c */
  if (((ARC_W_R(c, 20)) >> 0 & 1) == 0) goto L_11473c;
  /* 114f18: b #0x114f60 */
  goto L_114f60;
L_114f1c:;
  /* 114f1c: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 114f20: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 114f24: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 114f28: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1134380));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 114f2c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 114f30: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 114f34: csel x24, xzr, x25, eq */
  ARC_X_W(c, 24, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 25)));
  /* 114f38: cmp w20, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 20), ARC_W_R(c, 8));
  /* 114f3c: b.eq #0x114738 */
  if (ARC_COND(c, 0)) goto L_114738;
  /* 114f40: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 114f44: b #0x114f60 */
  goto L_114f60;
L_114f48:;
  /* 114f48: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* 114f4c: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
  /* 114f50: cbnz x25, #0x114f00 */
  if ((ARC_X_R(c, 25)) != 0) goto L_114f00;
L_114f54:;
  /* 114f54: mov x24, xzr */
  ARC_X_W(c, 24, ARC_X_R(c, 31));
  /* 114f58: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 114f5c: tbnz w20, #0, #0x114738 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) != 0) goto L_114738;
L_114f60:;
  /* 114f60: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 114f64: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 114f68: b.eq #0x114f78 */
  if (ARC_COND(c, 0)) goto L_114f78;
  /* 114f6c: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 114f70: tbz w8, #7, #0x114f8c */
  if (((ARC_W_R(c, 8)) >> 7 & 1) == 0) goto L_114f8c;
  /* 114f74: b #0x114738 */
  goto L_114738;
L_114f78:;
  /* 114f78: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 114f7c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 114f80: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1134468));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 114f84: and x8, x0, #0xff */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) & UINT64_C(255)));
  /* 114f88: tbnz w8, #7, #0x114738 */
  if (((ARC_W_R(c, 8)) >> 7 & 1) != 0) goto L_114738;
L_114f8c:;
  /* 114f8c: ldr x9, [sp, #0x68] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(104))));
  /* 114f90: ldr x9, [x9, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(16))));
  /* 114f94: ldr x8, [x9, x8, lsl #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 3))));
  /* 114f98: tbz w8, #0, #0x114738 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_114738;
  /* 114f9c: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 114fa0: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 114fa4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 114fa8: b.eq #0x114fe8 */
  if (ARC_COND(c, 0)) goto L_114fe8;
  /* 114fac: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 114fb0: str x9, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 9));
  /* 114fb4: ldrb w25, [x8] */
  ARC_W_W(c, 25, arc_ld8(ARC_X_R(c, 8)));
  /* 114fb8: ldrb w8, [sp, #0x90] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(144))));
  /* 114fbc: tbnz w8, #0, #0x115000 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_115000;
L_114fc0:;
  /* 114fc0: ldr x27, [sp, #0x28] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(40))));
  /* 114fc4: cmp w8, #0x2c */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(44));
  /* 114fc8: mov w26, #0x16 */
  ARC_W_W(c, 26, UINT64_C(22));
  /* 114fcc: mov w23, #0x30 */
  ARC_W_W(c, 23, UINT64_C(48));
  /* 114fd0: b.eq #0x115054 */
  if (ARC_COND(c, 0)) goto L_115054;
  /* 114fd4: lsr x26, x8, #1 */
  ARC_X_W(c, 26, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 114fd8: add w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(2)));
  /* 114fdc: ldr x20, [sp, #0x28] */
  ARC_X_W(c, 20, arc_ld64(((c)->sp + INT64_C(40))));
  /* 114fe0: strb w8, [sp, #0x90] */
  arc_st8(((c)->sp + INT64_C(144)), ARC_W_R(c, 8));
  /* 114fe4: b #0x1150a4 */
  goto L_1150a4;
L_114fe8:;
  /* 114fe8: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 114fec: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 114ff0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1134580));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 114ff4: mov w25, w0 */
  ARC_W_W(c, 25, ARC_W_R(c, 0));
  /* 114ff8: ldrb w8, [sp, #0x90] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(144))));
  /* 114ffc: tbz w8, #0, #0x114fc0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_114fc0;
L_115000:;
  /* 115000: ldp x9, x8, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 115004: and x28, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 28, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 115008: sub x26, x28, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 28) - UINT64_C(1)));
  /* 11500c: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* 115010: b.ne #0x115094 */
  if (ARC_COND(c, 1)) goto L_115094;
  /* 115014: cmn x28, #8 */
  (void)arc_add64(c, ARC_X_R(c, 28), UINT64_C(8), 0);
  /* 115018: b.eq #0x1159d4 */
  if (ARC_COND(c, 0)) goto L_1159d4;
  /* 11501c: mov x8, #-0xd */
  ARC_X_W(c, 8, UINT64_C(18446744073709551603));
  /* 115020: ldr x27, [sp, #0xa0] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(160))));
  /* 115024: mov x23, #-9 */
  ARC_X_W(c, 23, UINT64_C(18446744073709551607));
  /* 115028: movk x8, #0x7fff, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(9223090561878065152)));
  /* 11502c: cmp x26, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 8));
  /* 115030: b.hs #0x115058 */
  if (ARC_COND(c, 2)) goto L_115058;
  /* 115034: lsl x8, x26, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 26)) << ((UINT64_C(1)) & 63)));
  /* 115038: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* 11503c: orr x8, x8, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(7)));
  /* 115040: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* 115044: csinc x8, x9, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* 115048: cmp x26, #0xc */
  (void)arc_sub64(c, ARC_X_R(c, 26), UINT64_C(12));
  /* 11504c: mov w9, #0x17 */
  ARC_W_W(c, 9, UINT64_C(23));
  /* 115050: csel x23, x9, x8, lo */
  ARC_X_W(c, 23, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
L_115054:;
  /* 115054: add x28, x26, #1 */
  ARC_X_W(c, 28, (ARC_X_R(c, 26) + UINT64_C(1)));
L_115058:;
  /* 115058: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 11505c: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1134688));
  fn1_1428f0(c);
  /* 115060: mov x1, x27 */
  ARC_X_W(c, 1, ARC_X_R(c, 27));
  /* 115064: mov x2, x26 */
  ARC_X_W(c, 2, ARC_X_R(c, 26));
  /* 115068: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11506c: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1134704));
  fn1_1449f0(c);
  /* 115070: cmp x28, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 28), UINT64_C(23));
  /* 115074: b.eq #0x115084 */
  if (ARC_COND(c, 0)) goto L_115084;
  /* 115078: mov x0, x27 */
  ARC_X_W(c, 0, ARC_X_R(c, 27));
  /* 11507c: mov x1, x28 */
  ARC_X_W(c, 1, ARC_X_R(c, 28));
  /* 115080: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1134724));
  fn1_142608(c);
L_115084:;
  /* 115084: orr x8, x23, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) | UINT64_C(1)));
  /* 115088: str x20, [sp, #0xa0] */
  arc_st64(((c)->sp + INT64_C(160)), ARC_X_R(c, 20));
  /* 11508c: str x8, [sp, #0x90] */
  arc_st64(((c)->sp + INT64_C(144)), ARC_X_R(c, 8));
  /* 115090: b #0x11509c */
  goto L_11509c;
L_115094:;
  /* 115094: ldr x20, [sp, #0xa0] */
  ARC_X_W(c, 20, arc_ld64(((c)->sp + INT64_C(160))));
  /* 115098: mov x26, x8 */
  ARC_X_W(c, 26, ARC_X_R(c, 8));
L_11509c:;
  /* 11509c: add x8, x26, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 26) + UINT64_C(1)));
  /* 1150a0: str x8, [sp, #0x98] */
  arc_st64(((c)->sp + INT64_C(152)), ARC_X_R(c, 8));
L_1150a4:;
  /* 1150a4: add x8, x20, x26 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + ARC_X_R(c, 26)));
  /* 1150a8: strb w25, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 25));
  /* 1150ac: mov x25, x24 */
  ARC_X_W(c, 25, ARC_X_R(c, 24));
  /* 1150b0: strb wzr, [x8, #1] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(1)), ARC_W_R(c, 31));
  /* 1150b4: b #0x114ea4 */
  goto L_114ea4;
L_1150b8:;
  /* 1150b8: mov x27, x26 */
  ARC_X_W(c, 27, ARC_X_R(c, 26));
L_1150bc:;
  /* 1150bc: ldrb w8, [sp, #0x90] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(144))));
  /* 1150c0: ldr x9, [sp, #0x98] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(152))));
  /* 1150c4: sub x2, x27, x26 */
  ARC_X_W(c, 2, (ARC_X_R(c, 27) - ARC_X_R(c, 26)));
  /* 1150c8: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 1150cc: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1150d0: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 1150d4: cmp x2, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 9));
  /* 1150d8: b.hi #0x115104 */
  if (ARC_COND(c, 8)) goto L_115104;
  /* 1150dc: ldr x10, [sp, #0xa0] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(160))));
  /* 1150e0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1150e4: ldr x8, [sp, #0x28] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(40))));
  /* 1150e8: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 1150ec: csel x8, x8, x10, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* 1150f0: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* 1150f4: sub x0, x8, x2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) - ARC_X_R(c, 2)));
  /* 1150f8: bl #0x142890 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1134844));
  fn1_142890(c);
  /* 1150fc: cbnz w0, #0x115104 */
  if ((ARC_W_R(c, 0)) != 0) goto L_115104;
  /* 115100: mov x26, x27 */
  ARC_X_W(c, 26, ARC_X_R(c, 27));
L_115104:;
  /* 115104: lsr w8, w20, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 20)) >> ((UINT64_C(1)) & 31)));
  /* 115108: ldr x10, [sp, #0x30] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(48))));
  /* 11510c: tst w20, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 20) & UINT64_C(1)));
  /* 115110: csel x9, x10, x23, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 23)));
  /* 115114: csel x8, x8, x24, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 24)));
  /* 115118: mov x23, x10 */
  ARC_X_W(c, 23, ARC_X_R(c, 10));
  /* 11511c: add x8, x9, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ARC_X_R(c, 8)));
  /* 115120: b #0x11514c */
  goto L_11514c;
L_115124:;
  /* 115124: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 115128: str x8, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 8));
L_11512c:;
  /* 11512c: ldrb w8, [sp, #0xd8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(216))));
  /* 115130: ldp x10, x9, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 115134: add x26, x26, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 26) + UINT64_C(1)));
  /* 115138: lsr x11, x8, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 11513c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 115140: csel x8, x23, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 23)) : ARC_X_R(c, 9)));
  /* 115144: csel x9, x11, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 115148: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
L_11514c:;
  /* 11514c: cmp x26, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 8));
  /* 115150: b.eq #0x115248 */
  if (ARC_COND(c, 0)) goto L_115248;
  /* 115154: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 115158: cbz x0, #0x1151b4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1151b4;
  /* 11515c: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 115160: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 115164: b.eq #0x115180 */
  if (ARC_COND(c, 0)) goto L_115180;
  /* 115168: cbz x25, #0x1151f8 */
  if ((ARC_X_R(c, 25)) == 0) goto L_1151f8;
  /* 11516c: ldp x8, x9, [x25, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 115170: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 115174: b.ne #0x115248 */
  if (ARC_COND(c, 1)) goto L_115248;
  /* 115178: mov w20, wzr */
  ARC_W_W(c, 20, ARC_W_R(c, 31));
  /* 11517c: b #0x1151d0 */
  goto L_1151d0;
L_115180:;
  /* 115180: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 115184: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 115188: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1134988));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11518c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 115190: b.eq #0x1151ac */
  if (ARC_COND(c, 0)) goto L_1151ac;
  /* 115194: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 115198: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* 11519c: cset w20, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? 1 : 0));
  /* 1151a0: cbnz x25, #0x1151bc */
  if ((ARC_X_R(c, 25)) != 0) goto L_1151bc;
L_1151a4:;
  /* 1151a4: tbz w20, #0, #0x1151f8 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) == 0) goto L_1151f8;
  /* 1151a8: b #0x115248 */
  goto L_115248;
L_1151ac:;
  /* 1151ac: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 1151b0: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
L_1151b4:;
  /* 1151b4: mov w20, #1 */
  ARC_W_W(c, 20, UINT64_C(1));
  /* 1151b8: cbz x25, #0x1151a4 */
  if ((ARC_X_R(c, 25)) == 0) goto L_1151a4;
L_1151bc:;
  /* 1151bc: ldp x8, x9, [x25, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1151c0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1151c4: b.eq #0x1151d0 */
  if (ARC_COND(c, 0)) goto L_1151d0;
  /* 1151c8: tbnz w20, #0, #0x1151f8 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) != 0) goto L_1151f8;
  /* 1151cc: b #0x115248 */
  goto L_115248;
L_1151d0:;
  /* 1151d0: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 1151d4: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1151d8: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 1151dc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1135072));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1151e0: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1151e4: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 1151e8: csel x25, xzr, x25, eq */
  ARC_X_W(c, 25, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 25)));
  /* 1151ec: cmp w20, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 20), ARC_W_R(c, 8));
  /* 1151f0: b.eq #0x115248 */
  if (ARC_COND(c, 0)) goto L_115248;
  /* 1151f4: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
L_1151f8:;
  /* 1151f8: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1151fc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 115200: b.eq #0x11520c */
  if (ARC_COND(c, 0)) goto L_11520c;
  /* 115204: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 115208: b #0x11521c */
  goto L_11521c;
L_11520c:;
  /* 11520c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 115210: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 115214: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1135128));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 115218: and w8, w0, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) & UINT64_C(255)));
L_11521c:;
  /* 11521c: ldrb w9, [x26] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 26)));
  /* 115220: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* 115224: b.ne #0x115248 */
  if (ARC_COND(c, 1)) goto L_115248;
  /* 115228: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 11522c: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 115230: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 115234: b.ne #0x115124 */
  if (ARC_COND(c, 1)) goto L_115124;
  /* 115238: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 11523c: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 115240: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1135172));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 115244: b #0x11512c */
  goto L_11512c;
L_115248:;
  /* 115248: ldr w8, [sp, #0x44] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(68))));
  /* 11524c: tbz w8, #9, #0x11473c */
  if (((ARC_W_R(c, 8)) >> 9 & 1) == 0) goto L_11473c;
  /* 115250: ldrb w8, [sp, #0xd8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(216))));
  /* 115254: ldp x10, x9, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 115258: lsr x11, x8, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 11525c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 115260: csel x8, x23, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 23)) : ARC_X_R(c, 9)));
  /* 115264: csel x9, x11, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 115268: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* 11526c: cmp x26, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 8));
  /* 115270: b.eq #0x11473c */
  if (ARC_COND(c, 0)) goto L_11473c;
  /* 115274: b #0x1158d8 */
  goto L_1158d8;
L_115278:;
  /* 115278: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 11527c: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 115280: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1135236));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 115284: ldrb w10, [sp, #0xa8] */
  ARC_W_W(c, 10, arc_ld8(((c)->sp + INT64_C(168))));
  /* 115288: and w9, w10, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 10) & UINT64_C(1)));
L_11528c:;
  /* 11528c: ldr x8, [sp, #0xb0] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(176))));
  /* 115290: lsr w10, w10, #1 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 10)) >> ((UINT64_C(1)) & 31)));
  /* 115294: cmp w9, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(0));
  /* 115298: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* 11529c: csel x8, x10, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* 1152a0: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1152a4: ldr x8, [sp, #0x38] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(56))));
  /* 1152a8: strb w9, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 1152ac: ldr x8, [sp, #0x48] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(72))));
  /* 1152b0: add x9, sp, #0xa8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(168)));
L_1152b4:;
  /* 1152b4: csel x8, x9, x8, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 1152b8: str x8, [sp, #0x48] */
  arc_st64(((c)->sp + INT64_C(72)), ARC_X_R(c, 8));
  /* 1152bc: b #0x11473c */
  goto L_11473c;
L_1152c0:;
  /* 1152c0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1152c4: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1135304));
  fn1_1428a8(c);
  /* 1152c8: cbz x0, #0x1159d0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1159d0;
L_1152cc:;
  /* 1152cc: and x8, x20, #0xfffffffffffffffc */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) & UINT64_C(18446744073709551612)));
  /* 1152d0: str x0, [sp, #0x60] */
  arc_st64(((c)->sp + INT64_C(96)), ARC_X_R(c, 0));
  /* 1152d4: add x22, x0, x22 */
  ARC_X_W(c, 22, (ARC_X_R(c, 0) + ARC_X_R(c, 22)));
  /* 1152d8: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* 1152dc: str x8, [sp, #0x70] */
  arc_st64(((c)->sp + INT64_C(112)), ARC_X_R(c, 8));
  /* 1152e0: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1152e4: ldr x8, [x8, #0x9a0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2464))));
  /* 1152e8: str x8, [sp, #0x58] */
  arc_st64(((c)->sp + INT64_C(88)), ARC_X_R(c, 8));
L_1152ec:;
  /* 1152ec: str w23, [x22], #4 */
  { const uint64_t _a = ARC_X_R(c, 22);
    ARC_X_W(c, 22, ARC_X_R(c, 22) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 23));
  }
L_1152f0:;
  /* 1152f0: ldr w8, [sp, #0x8c] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(140))));
  /* 1152f4: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 1152f8: b.lt #0x11540c */
  if (ARC_COND(c, 11)) goto L_11540c;
  /* 1152fc: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 115300: cbz x0, #0x115360 */
  if ((ARC_X_R(c, 0)) == 0) goto L_115360;
  /* 115304: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 115308: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 11530c: b.eq #0x115328 */
  if (ARC_COND(c, 0)) goto L_115328;
  /* 115310: cbz x25, #0x1153a8 */
  if ((ARC_X_R(c, 25)) == 0) goto L_1153a8;
  /* 115314: ldp x8, x9, [x25, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 115318: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 11531c: b.ne #0x1158d8 */
  if (ARC_COND(c, 1)) goto L_1158d8;
  /* 115320: mov w20, wzr */
  ARC_W_W(c, 20, ARC_W_R(c, 31));
  /* 115324: b #0x11537c */
  goto L_11537c;
L_115328:;
  /* 115328: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 11532c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 115330: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1135412));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 115334: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 115338: b.eq #0x115358 */
  if (ARC_COND(c, 0)) goto L_115358;
  /* 11533c: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 115340: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* 115344: cset w20, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? 1 : 0));
  /* 115348: cbnz x25, #0x115368 */
  if ((ARC_X_R(c, 25)) != 0) goto L_115368;
L_11534c:;
  /* 11534c: tbnz w20, #0, #0x1158d8 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) != 0) goto L_1158d8;
  /* 115350: mov x25, xzr */
  ARC_X_W(c, 25, ARC_X_R(c, 31));
  /* 115354: b #0x1153a8 */
  goto L_1153a8;
L_115358:;
  /* 115358: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 11535c: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
L_115360:;
  /* 115360: mov w20, #1 */
  ARC_W_W(c, 20, UINT64_C(1));
  /* 115364: cbz x25, #0x11534c */
  if ((ARC_X_R(c, 25)) == 0) goto L_11534c;
L_115368:;
  /* 115368: ldp x8, x9, [x25, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11536c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 115370: b.eq #0x11537c */
  if (ARC_COND(c, 0)) goto L_11537c;
  /* 115374: tbnz w20, #0, #0x1153a8 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) != 0) goto L_1153a8;
  /* 115378: b #0x1158d8 */
  goto L_1158d8;
L_11537c:;
  /* 11537c: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 115380: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 115384: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 115388: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1135500));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11538c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 115390: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 115394: cmp w20, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 20), ARC_W_R(c, 8));
  /* 115398: b.eq #0x1158d8 */
  if (ARC_COND(c, 0)) goto L_1158d8;
  /* 11539c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1153a0: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 1153a4: csel x25, xzr, x25, eq */
  ARC_X_W(c, 25, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 25)));
L_1153a8:;
  /* 1153a8: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1153ac: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1153b0: b.eq #0x1153bc */
  if (ARC_COND(c, 0)) goto L_1153bc;
  /* 1153b4: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1153b8: b #0x1153cc */
  goto L_1153cc;
L_1153bc:;
  /* 1153bc: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1153c0: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1153c4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1135560));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1153c8: and w8, w0, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) & UINT64_C(255)));
L_1153cc:;
  /* 1153cc: ldrb w9, [sp, #0x110] */
  ARC_W_W(c, 9, arc_ld8(((c)->sp + INT64_C(272))));
  /* 1153d0: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* 1153d4: b.ne #0x1158d8 */
  if (ARC_COND(c, 1)) goto L_1158d8;
  /* 1153d8: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 1153dc: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1153e0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1153e4: b.eq #0x1153f4 */
  if (ARC_COND(c, 0)) goto L_1153f4;
  /* 1153e8: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 1153ec: str x8, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 8));
  /* 1153f0: b #0x115400 */
  goto L_115400;
L_1153f4:;
  /* 1153f4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1153f8: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 1153fc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1135616));
  arc_dispatch(c, ARC_X_R(c, 8));
L_115400:;
  /* 115400: ldr w8, [sp, #0x8c] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(140))));
  /* 115404: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 115408: b.ge #0x115438 */
  if (ARC_COND(c, 10)) goto L_115438;
L_11540c:;
  /* 11540c: ldr x8, [sp, #0x78] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(120))));
  /* 115410: ldr x9, [sp, #0x50] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(80))));
  /* 115414: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 115418: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 11541c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 115420: b.ne #0x11473c */
  if (ARC_COND(c, 1)) goto L_11473c;
  /* 115424: b #0x1158d8 */
  goto L_1158d8;
L_115428:;
  /* 115428: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 11542c: str x9, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 9));
  /* 115430: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 115434: b.le #0x11540c */
  if (ARC_COND(c, 13)) goto L_11540c;
L_115438:;
  /* 115438: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 11543c: cbz x0, #0x11549c */
  if ((ARC_X_R(c, 0)) == 0) goto L_11549c;
  /* 115440: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 115444: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 115448: b.eq #0x115464 */
  if (ARC_COND(c, 0)) goto L_115464;
  /* 11544c: cbz x25, #0x1154e4 */
  if ((ARC_X_R(c, 25)) == 0) goto L_1154e4;
  /* 115450: ldp x8, x9, [x25, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 115454: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 115458: b.ne #0x1158d8 */
  if (ARC_COND(c, 1)) goto L_1158d8;
  /* 11545c: mov w20, wzr */
  ARC_W_W(c, 20, ARC_W_R(c, 31));
  /* 115460: b #0x1154b8 */
  goto L_1154b8;
L_115464:;
  /* 115464: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 115468: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 11546c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1135728));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 115470: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 115474: b.eq #0x115494 */
  if (ARC_COND(c, 0)) goto L_115494;
  /* 115478: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 11547c: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* 115480: cset w20, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? 1 : 0));
  /* 115484: cbnz x25, #0x1154a4 */
  if ((ARC_X_R(c, 25)) != 0) goto L_1154a4;
L_115488:;
  /* 115488: tbnz w20, #0, #0x1158d8 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) != 0) goto L_1158d8;
  /* 11548c: mov x25, xzr */
  ARC_X_W(c, 25, ARC_X_R(c, 31));
  /* 115490: b #0x1154e4 */
  goto L_1154e4;
L_115494:;
  /* 115494: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 115498: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
L_11549c:;
  /* 11549c: mov w20, #1 */
  ARC_W_W(c, 20, UINT64_C(1));
  /* 1154a0: cbz x25, #0x115488 */
  if ((ARC_X_R(c, 25)) == 0) goto L_115488;
L_1154a4:;
  /* 1154a4: ldp x8, x9, [x25, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1154a8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1154ac: b.eq #0x1154b8 */
  if (ARC_COND(c, 0)) goto L_1154b8;
  /* 1154b0: tbnz w20, #0, #0x1154e4 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) != 0) goto L_1154e4;
  /* 1154b4: b #0x1158d8 */
  goto L_1158d8;
L_1154b8:;
  /* 1154b8: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 1154bc: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1154c0: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 1154c4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1135816));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1154c8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1154cc: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 1154d0: cmp w20, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 20), ARC_W_R(c, 8));
  /* 1154d4: b.eq #0x1158d8 */
  if (ARC_COND(c, 0)) goto L_1158d8;
  /* 1154d8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1154dc: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 1154e0: csel x25, xzr, x25, eq */
  ARC_X_W(c, 25, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 25)));
L_1154e4:;
  /* 1154e4: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1154e8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1154ec: b.eq #0x1154fc */
  if (ARC_COND(c, 0)) goto L_1154fc;
  /* 1154f0: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1154f4: tbz w8, #7, #0x115510 */
  if (((ARC_W_R(c, 8)) >> 7 & 1) == 0) goto L_115510;
  /* 1154f8: b #0x1158d8 */
  goto L_1158d8;
L_1154fc:;
  /* 1154fc: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 115500: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 115504: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1135880));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 115508: and x8, x0, #0xff */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) & UINT64_C(255)));
  /* 11550c: tbnz w8, #7, #0x1158d8 */
  if (((ARC_W_R(c, 8)) >> 7 & 1) != 0) goto L_1158d8;
L_115510:;
  /* 115510: ldr x9, [sp, #0x68] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(104))));
  /* 115514: ldr x9, [x9, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(16))));
  /* 115518: ldr x8, [x9, x8, lsl #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 3))));
  /* 11551c: tbz w8, #6, #0x1158d8 */
  if (((ARC_W_R(c, 8)) >> 6 & 1) == 0) goto L_1158d8;
  /* 115520: ldp x8, x9, [sp, #0x78] */
  { const uint64_t _pa = ((c)->sp + INT64_C(120));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 115524: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 115528: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 11552c: b.ne #0x1155b0 */
  if (ARC_COND(c, 1)) goto L_1155b0;
  /* 115530: mov x8, x9 */
  ARC_X_W(c, 8, ARC_X_R(c, 9));
  /* 115534: ldr x9, [sp, #0x50] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(80))));
  /* 115538: mov x10, #0x7fffffffffffffff */
  ARC_X_W(c, 10, UINT64_C(9223372036854775807));
  /* 11553c: ldp x0, x9, [x9] */
  { const uint64_t _pa = ARC_X_R(c, 9);
    ARC_X_W(c, 0, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 115540: sub x23, x8, x0 */
  ARC_X_W(c, 23, (ARC_X_R(c, 8) - ARC_X_R(c, 0)));
  /* 115544: lsl x8, x23, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 23)) << ((UINT64_C(1)) & 63)));
  /* 115548: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11554c: csinc x8, x8, xzr, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ((ARC_X_R(c, 31)) + 1)));
  /* 115550: cmp x23, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 10));
  /* 115554: csinv x20, x8, xzr, lo */
  ARC_X_W(c, 20, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : (~(uint64_t)(ARC_X_R(c, 31)))));
  /* 115558: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11555c: ldr x8, [x8, #0xbc8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3016))));
  /* 115560: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 115564: b.eq #0x115578 */
  if (ARC_COND(c, 0)) goto L_115578;
  /* 115568: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 11556c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1135984));
  fn1_142878(c);
  /* 115570: cbnz x0, #0x115584 */
  if ((ARC_X_R(c, 0)) != 0) goto L_115584;
  /* 115574: b #0x1159c8 */
  goto L_1159c8;
L_115578:;
  /* 115578: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11557c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1136000));
  fn1_1428a8(c);
  /* 115580: cbz x0, #0x1159c8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1159c8;
L_115584:;
  /* 115584: ldr x10, [sp, #0x50] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(80))));
  /* 115588: ldr x9, [sp, #0x78] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(120))));
  /* 11558c: add x8, x0, x23 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 23)));
  /* 115590: adrp x11, #0x151000 */
  ARC_X_W(c, 11, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 115594: str x0, [x10] */
  arc_st64(ARC_X_R(c, 10), ARC_X_R(c, 0));
  /* 115598: str x8, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 11559c: ldr x9, [x10] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 10)));
  /* 1155a0: ldr x11, [x11, #0x9a0] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 11) + INT64_C(2464))));
  /* 1155a4: add x9, x9, x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 20)));
  /* 1155a8: str x11, [x10, #8] */
  arc_st64((ARC_X_R(c, 10) + INT64_C(8)), ARC_X_R(c, 11));
  /* 1155ac: str x9, [sp, #0x80] */
  arc_st64(((c)->sp + INT64_C(128)), ARC_X_R(c, 9));
L_1155b0:;
  /* 1155b0: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 1155b4: ldp x9, x10, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 1155b8: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 1155bc: b.eq #0x1155cc */
  if (ARC_COND(c, 0)) goto L_1155cc;
  /* 1155c0: ldrb w0, [x9] */
  ARC_W_W(c, 0, arc_ld8(ARC_X_R(c, 9)));
  /* 1155c4: ldr x10, [sp, #0x78] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(120))));
  /* 1155c8: b #0x1155e0 */
  goto L_1155e0;
L_1155cc:;
  /* 1155cc: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1155d0: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1155d4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1136088));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1155d8: ldr x10, [sp, #0x78] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(120))));
  /* 1155dc: ldr x8, [x10] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 10)));
L_1155e0:;
  /* 1155e0: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 1155e4: str x9, [x10] */
  arc_st64(ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* 1155e8: strb w0, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 0));
  /* 1155ec: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 1155f0: ldr w8, [sp, #0x8c] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(140))));
  /* 1155f4: ldp x9, x10, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 1155f8: sub w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* 1155fc: str w8, [sp, #0x8c] */
  arc_st32(((c)->sp + INT64_C(140)), ARC_W_R(c, 8));
  /* 115600: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 115604: b.ne #0x115428 */
  if (ARC_COND(c, 1)) goto L_115428;
  /* 115608: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 11560c: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 115610: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1136148));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 115614: ldr w8, [sp, #0x8c] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(140))));
  /* 115618: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 11561c: b.gt #0x115438 */
  if (ARC_COND(c, 12)) goto L_115438;
  /* 115620: b #0x11540c */
  goto L_11540c;
L_115624:;
  /* 115624: ldr x8, [sp, #0x48] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(72))));
  /* 115628: cbz x8, #0x1157d8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1157d8;
  /* 11562c: ldr x9, [sp, #0x48] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(72))));
  /* 115630: ldrb w8, [x9] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 9)));
  /* 115634: ldr x9, [x9, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 115638: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 11563c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 115640: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 115644: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* 115648: b.lo #0x1157d8 */
  if (ARC_COND(c, 3)) goto L_1157d8;
  /* 11564c: ldr x8, [sp, #0x48] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(72))));
  /* 115650: mov w20, #2 */
  ARC_W_W(c, 20, UINT64_C(2));
  /* 115654: mov w23, #1 */
  ARC_W_W(c, 23, UINT64_C(1));
  /* 115658: add x19, x8, #1 */
  ARC_X_W(c, 19, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 11565c: b #0x115690 */
  goto L_115690;
L_115660:;
  /* 115660: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 115664: str x8, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 8));
L_115668:;
  /* 115668: ldr x9, [sp, #0x48] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(72))));
  /* 11566c: mov w23, w20 */
  ARC_W_W(c, 23, ARC_W_R(c, 20));
  /* 115670: add w20, w20, #1 */
  ARC_W_W(c, 20, (ARC_W_R(c, 20) + UINT64_C(1)));
  /* 115674: ldrb w8, [x9] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 9)));
  /* 115678: ldr x9, [x9, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 11567c: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 115680: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 115684: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 115688: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* 11568c: b.ls #0x1157d8 */
  if (ARC_COND(c, 9)) goto L_1157d8;
L_115690:;
  /* 115690: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 115694: cbz x0, #0x1156f4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1156f4;
  /* 115698: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11569c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1156a0: b.eq #0x1156bc */
  if (ARC_COND(c, 0)) goto L_1156bc;
  /* 1156a4: cbz x25, #0x11573c */
  if ((ARC_X_R(c, 25)) == 0) goto L_11573c;
  /* 1156a8: ldp x8, x9, [x25, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1156ac: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1156b0: b.ne #0x1158d8 */
  if (ARC_COND(c, 1)) goto L_1158d8;
  /* 1156b4: mov w24, wzr */
  ARC_W_W(c, 24, ARC_W_R(c, 31));
  /* 1156b8: b #0x115710 */
  goto L_115710;
L_1156bc:;
  /* 1156bc: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1156c0: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1156c4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1136328));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1156c8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1156cc: b.eq #0x1156ec */
  if (ARC_COND(c, 0)) goto L_1156ec;
  /* 1156d0: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 1156d4: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* 1156d8: cset w24, eq */
  ARC_W_W(c, 24, (ARC_COND(c, 0) ? 1 : 0));
  /* 1156dc: cbnz x25, #0x1156fc */
  if ((ARC_X_R(c, 25)) != 0) goto L_1156fc;
L_1156e0:;
  /* 1156e0: tbnz w24, #0, #0x1158d8 */
  if (((ARC_W_R(c, 24)) >> 0 & 1) != 0) goto L_1158d8;
  /* 1156e4: mov x25, xzr */
  ARC_X_W(c, 25, ARC_X_R(c, 31));
  /* 1156e8: b #0x11573c */
  goto L_11573c;
L_1156ec:;
  /* 1156ec: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 1156f0: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
L_1156f4:;
  /* 1156f4: mov w24, #1 */
  ARC_W_W(c, 24, UINT64_C(1));
  /* 1156f8: cbz x25, #0x1156e0 */
  if ((ARC_X_R(c, 25)) == 0) goto L_1156e0;
L_1156fc:;
  /* 1156fc: ldp x8, x9, [x25, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 115700: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 115704: b.eq #0x115710 */
  if (ARC_COND(c, 0)) goto L_115710;
  /* 115708: tbnz w24, #0, #0x11573c */
  if (((ARC_W_R(c, 24)) >> 0 & 1) != 0) goto L_11573c;
  /* 11570c: b #0x1158d8 */
  goto L_1158d8;
L_115710:;
  /* 115710: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 115714: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 115718: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 11571c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1136416));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 115720: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 115724: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 115728: cmp w24, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 24), ARC_W_R(c, 8));
  /* 11572c: b.eq #0x1158d8 */
  if (ARC_COND(c, 0)) goto L_1158d8;
  /* 115730: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 115734: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 115738: csel x25, xzr, x25, eq */
  ARC_X_W(c, 25, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 25)));
L_11573c:;
  /* 11573c: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 115740: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 115744: b.eq #0x115750 */
  if (ARC_COND(c, 0)) goto L_115750;
  /* 115748: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 11574c: b #0x115760 */
  goto L_115760;
L_115750:;
  /* 115750: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 115754: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 115758: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1136476));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11575c: and w8, w0, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) & UINT64_C(255)));
L_115760:;
  /* 115760: ldr x10, [sp, #0x48] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(72))));
  /* 115764: ldrb w9, [x10] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 10)));
  /* 115768: ldr x10, [x10, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(16))));
  /* 11576c: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 115770: csel x9, x19, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 19)) : ARC_X_R(c, 10)));
  /* 115774: ldrb w9, [x9, x23] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 9) + ARC_X_R(c, 23))));
  /* 115778: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* 11577c: b.ne #0x1158d8 */
  if (ARC_COND(c, 1)) goto L_1158d8;
  /* 115780: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 115784: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 115788: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 11578c: b.ne #0x115660 */
  if (ARC_COND(c, 1)) goto L_115660;
  /* 115790: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 115794: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 115798: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1136540));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11579c: b #0x115668 */
  goto L_115668;
L_1157a0:;
  /* 1157a0: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 1157a4: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 1157a8: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1157ac: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1136560));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1157b0: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1157b4: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 1157b8: csel x25, xzr, x25, eq */
  ARC_X_W(c, 25, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 25)));
  /* 1157bc: eor w8, w20, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 20) ^ ARC_W_R(c, 8)));
  /* 1157c0: tbnz w8, #0, #0x114664 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_114664;
L_1157c4:;
  /* 1157c4: ldr w8, [x22] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 22)));
  /* 1157c8: mov w21, wzr */
  ARC_W_W(c, 21, ARC_W_R(c, 31));
  /* 1157cc: orr w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* 1157d0: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
  /* 1157d4: b #0x115934 */
  goto L_115934;
L_1157d8:;
  /* 1157d8: ldr x19, [sp, #0x60] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(96))));
  /* 1157dc: cmp x19, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 22));
  /* 1157e0: b.eq #0x11589c */
  if (ARC_COND(c, 0)) goto L_11589c;
  /* 1157e4: ldrb w9, [sp, #0xf0] */
  ARC_W_W(c, 9, arc_ld8(((c)->sp + INT64_C(240))));
  /* 1157e8: ldr x8, [sp, #0xf8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(248))));
  /* 1157ec: sub x11, x22, x19 */
  ARC_X_W(c, 11, (ARC_X_R(c, 22) - ARC_X_R(c, 19)));
  /* 1157f0: mov w21, #1 */
  ARC_W_W(c, 21, UINT64_C(1));
  /* 1157f4: lsr x10, x9, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 1157f8: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 1157fc: csel x8, x10, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* 115800: cmp x11, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(5));
  /* 115804: b.lt #0x1158f0 */
  if (ARC_COND(c, 11)) goto L_1158f0;
  /* 115808: cbz x8, #0x1158f0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1158f0;
  /* 11580c: sub x8, x22, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) - UINT64_C(4)));
  /* 115810: cmp x19, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 115814: b.hs #0x1158a4 */
  if (ARC_COND(c, 2)) goto L_1158a4;
  /* 115818: add x9, x19, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* 11581c: mov x10, x8 */
  ARC_X_W(c, 10, ARC_X_R(c, 8));
L_115820:;
  /* 115820: ldr w11, [x10] */
  ARC_W_W(c, 11, arc_ld32(ARC_X_R(c, 10)));
  /* 115824: ldur w12, [x9, #-4] */
  ARC_W_W(c, 12, arc_ld32((ARC_X_R(c, 9) + INT64_C(-4))));
  /* 115828: stur w11, [x9, #-4] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(-4)), ARC_W_R(c, 11));
  /* 11582c: str w12, [x10], #0xfffffffffffffffc */
  { const uint64_t _a = ARC_X_R(c, 10);
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(-4));
    arc_st32(_a, ARC_W_R(c, 12));
  }
  /* 115830: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 115834: add x9, x9, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(4)));
  /* 115838: b.lo #0x115820 */
  if (ARC_COND(c, 3)) goto L_115820;
  /* 11583c: ldrb w9, [sp, #0xf0] */
  ARC_W_W(c, 9, arc_ld8(((c)->sp + INT64_C(240))));
  /* 115840: ldp x12, x11, [sp, #0xf8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(248));
    ARC_X_W(c, 12, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* 115844: lsr x10, x9, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 115848: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 11584c: add x9, sp, #0xf0 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(240)));
  /* 115850: csinc x9, x11, x9, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 9)) + 1)));
  /* 115854: mov x11, x19 */
  ARC_X_W(c, 11, ARC_X_R(c, 19));
  /* 115858: csel x10, x10, x12, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 12)));
  /* 11585c: add x10, x9, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + ARC_X_R(c, 10)));
  /* 115860: b #0x11587c */
  goto L_11587c;
L_115864:;
  /* 115864: sub x12, x10, x9 */
  ARC_X_W(c, 12, (ARC_X_R(c, 10) - ARC_X_R(c, 9)));
  /* 115868: add x11, x11, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(4)));
  /* 11586c: cmp x12, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(1));
  /* 115870: cinc x9, x9, gt */
  ARC_X_W(c, 9, (ARC_COND(c, 12) ? (ARC_X_R(c, 9)) + 1 : (ARC_X_R(c, 9))));
  /* 115874: cmp x11, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 8));
  /* 115878: b.hs #0x1158b4 */
  if (ARC_COND(c, 2)) goto L_1158b4;
L_11587c:;
  /* 11587c: ldrb w12, [x9] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 9)));
  /* 115880: cbz w12, #0x115864 */
  if ((ARC_W_R(c, 12)) == 0) goto L_115864;
  /* 115884: cmp w12, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(255));
  /* 115888: b.eq #0x115864 */
  if (ARC_COND(c, 0)) goto L_115864;
  /* 11588c: ldr w13, [x11] */
  ARC_W_W(c, 13, arc_ld32(ARC_X_R(c, 11)));
  /* 115890: cmp w13, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 12));
  /* 115894: b.eq #0x115864 */
  if (ARC_COND(c, 0)) goto L_115864;
  /* 115898: b #0x1158d8 */
  goto L_1158d8;
L_11589c:;
  /* 11589c: mov w21, #1 */
  ARC_W_W(c, 21, UINT64_C(1));
  /* 1158a0: b #0x1158f0 */
  goto L_1158f0;
L_1158a4:;
  /* 1158a4: ldr x10, [sp, #0x100] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(256))));
  /* 1158a8: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 1158ac: add x9, sp, #0xf0 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(240)));
  /* 1158b0: csinc x9, x10, x9, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 9)) + 1)));
L_1158b4:;
  /* 1158b4: ldrb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 1158b8: mov w21, #1 */
  ARC_W_W(c, 21, UINT64_C(1));
  /* 1158bc: cbz w9, #0x1158f0 */
  if ((ARC_W_R(c, 9)) == 0) goto L_1158f0;
  /* 1158c0: cmp w9, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(255));
  /* 1158c4: b.eq #0x1158f0 */
  if (ARC_COND(c, 0)) goto L_1158f0;
  /* 1158c8: ldr w8, [x8] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 8)));
  /* 1158cc: sub w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* 1158d0: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* 1158d4: b.lo #0x1158f0 */
  if (ARC_COND(c, 3)) goto L_1158f0;
L_1158d8:;
  /* 1158d8: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
  /* 1158dc: ldr x19, [sp, #0x60] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(96))));
  /* 1158e0: mov w21, wzr */
  ARC_W_W(c, 21, ARC_W_R(c, 31));
  /* 1158e4: ldr w8, [x9] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 9)));
  /* 1158e8: orr w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* 1158ec: str w8, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 8));
L_1158f0:;
  /* 1158f0: ldrb w8, [sp, #0x90] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(144))));
  /* 1158f4: tbnz w8, #0, #0x11595c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_11595c;
  /* 1158f8: ldrb w8, [sp, #0xa8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(168))));
  /* 1158fc: tbnz w8, #0, #0x115974 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_115974;
L_115900:;
  /* 115900: ldrb w8, [sp, #0xc0] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(192))));
  /* 115904: tbnz w8, #0, #0x11598c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_11598c;
L_115908:;
  /* 115908: ldrb w8, [sp, #0xd8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(216))));
  /* 11590c: tbnz w8, #0, #0x1159a4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1159a4;
L_115910:;
  /* 115910: ldrb w8, [sp, #0xf0] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(240))));
  /* 115914: tbz w8, #0, #0x115928 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_115928;
L_115918:;
  /* 115918: ldr x8, [sp, #0xf0] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(240))));
  /* 11591c: ldr x0, [sp, #0x100] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(256))));
  /* 115920: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 115924: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1136936));
  fn1_142608(c);
L_115928:;
  /* 115928: ldr x8, [sp, #0x58] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(88))));
  /* 11592c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 115930: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1136948));
  arc_dispatch(c, ARC_X_R(c, 8));
L_115934:;
  /* 115934: mov w0, w21 */
  ARC_W_W(c, 0, ARC_W_R(c, 21));
  /* 115938: add sp, sp, #0x2b0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(688)));
  /* 11593c: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 115940: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 115944: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 115948: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 11594c: ldp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 115950: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 115954: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 115958: ret  */
  return;
L_11595c:;
  /* 11595c: ldr x8, [sp, #0x90] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(144))));
  /* 115960: ldr x0, [sp, #0xa0] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(160))));
  /* 115964: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 115968: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1137004));
  fn1_142608(c);
  /* 11596c: ldrb w8, [sp, #0xa8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(168))));
  /* 115970: tbz w8, #0, #0x115900 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_115900;
L_115974:;
  /* 115974: ldr x8, [sp, #0xa8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(168))));
  /* 115978: ldr x0, [sp, #0xb8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(184))));
  /* 11597c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 115980: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1137028));
  fn1_142608(c);
  /* 115984: ldrb w8, [sp, #0xc0] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(192))));
  /* 115988: tbz w8, #0, #0x115908 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_115908;
L_11598c:;
  /* 11598c: ldr x8, [sp, #0xc0] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(192))));
  /* 115990: ldr x0, [sp, #0xd0] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(208))));
  /* 115994: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 115998: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1137052));
  fn1_142608(c);
  /* 11599c: ldrb w8, [sp, #0xd8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(216))));
  /* 1159a0: tbz w8, #0, #0x115910 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_115910;
L_1159a4:;
  /* 1159a4: ldr x8, [sp, #0xd8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(216))));
  /* 1159a8: ldr x0, [sp, #0xe8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(232))));
  /* 1159ac: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1159b0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1137076));
  fn1_142608(c);
  /* 1159b4: ldrb w8, [sp, #0xf0] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(240))));
  /* 1159b8: tbnz w8, #0, #0x115918 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_115918;
  /* 1159bc: b #0x115928 */
  goto L_115928;
L_1159c0:;
  /* 1159c0: bl #0x142c08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1137092));
  fn1_142c08(c);
L_1159c4:;
  /* 1159c4: bl #0x142c08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1137096));
  fn1_142c08(c);
L_1159c8:;
  /* 1159c8: bl #0x142c08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1137100));
  fn1_142c08(c);
L_1159cc:;
  /* 1159cc: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1137104));
  fn1_d7d54(c);
L_1159d0:;
  /* 1159d0: bl #0x142c08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1137108));
  fn1_142c08(c);
L_1159d4:;
  /* 1159d4: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1137112));
  fn1_d7d54(c);
  /* 1159d8: b #0x115a34 */
  goto L_115a34;
  /* 1159dc: b #0x115a34 */
  goto L_115a34;
  /* 1159e0: b #0x115a34 */
  goto L_115a34;
  /* 1159e4: b #0x115a34 */
  goto L_115a34;
  /* 1159e8: b #0x115a34 */
  goto L_115a34;
  /* 1159ec: b #0x115a34 */
  goto L_115a34;
  /* 1159f0: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1137140));
  fn1_a1454(c);
  /* 1159f4: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1159f8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1159fc: ldr x9, [x8, #0xbc8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(3016))));
  /* 115a00: add x8, sp, #0x118 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(280)));
  /* 115a04: stp x9, x8, [sp, #0x58] */
  { const uint64_t _pa = ((c)->sp + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 115a08: b #0x115a38 */
  goto L_115a38;
  /* 115a0c: b #0x115a34 */
  goto L_115a34;
  /* 115a10: b #0x115a34 */
  goto L_115a34;
  /* 115a14: b #0x115a34 */
  goto L_115a34;
  /* 115a18: b #0x115a34 */
  goto L_115a34;
  /* 115a1c: b #0x115a34 */
  goto L_115a34;
  /* 115a20: b #0x115a34 */
  goto L_115a34;
  /* 115a24: b #0x115a34 */
  goto L_115a34;
  /* 115a28: b #0x115a34 */
  goto L_115a34;
  /* 115a2c: b #0x115a34 */
  goto L_115a34;
  /* 115a30: b #0x115a34 */
  goto L_115a34;
L_115a34:;
  /* 115a34: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_115a38:;
  /* 115a38: ldrb w8, [sp, #0x90] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(144))));
  /* 115a3c: tbnz w8, #0, #0x115a80 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_115a80;
  /* 115a40: ldrb w8, [sp, #0xa8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(168))));
  /* 115a44: tbnz w8, #0, #0x115a98 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_115a98;
L_115a48:;
  /* 115a48: ldrb w8, [sp, #0xc0] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(192))));
  /* 115a4c: tbnz w8, #0, #0x115ab0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_115ab0;
L_115a50:;
  /* 115a50: ldrb w8, [sp, #0xd8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(216))));
  /* 115a54: tbnz w8, #0, #0x115ac8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_115ac8;
L_115a58:;
  /* 115a58: ldrb w8, [sp, #0xf0] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(240))));
  /* 115a5c: tbz w8, #0, #0x115a70 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_115a70;
L_115a60:;
  /* 115a60: ldr x8, [sp, #0xf0] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(240))));
  /* 115a64: ldr x0, [sp, #0x100] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(256))));
  /* 115a68: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 115a6c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1137264));
  fn1_142608(c);
L_115a70:;
  /* 115a70: ldp x8, x0, [sp, #0x58] */
  { const uint64_t _pa = ((c)->sp + INT64_C(88));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 0, arc_ld64(_pa + 8));
  }
  /* 115a74: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1137272));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 115a78: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 115a7c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1137280));
  fn1_9cc20(c);
L_115a80:;
  /* 115a80: ldr x8, [sp, #0x90] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(144))));
  /* 115a84: ldr x0, [sp, #0xa0] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(160))));
  /* 115a88: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 115a8c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1137296));
  fn1_142608(c);
  /* 115a90: ldrb w8, [sp, #0xa8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(168))));
  /* 115a94: tbz w8, #0, #0x115a48 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_115a48;
L_115a98:;
  /* 115a98: ldr x8, [sp, #0xa8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(168))));
  /* 115a9c: ldr x0, [sp, #0xb8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(184))));
  /* 115aa0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 115aa4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1137320));
  fn1_142608(c);
  /* 115aa8: ldrb w8, [sp, #0xc0] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(192))));
  /* 115aac: tbz w8, #0, #0x115a50 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_115a50;
L_115ab0:;
  /* 115ab0: ldr x8, [sp, #0xc0] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(192))));
  /* 115ab4: ldr x0, [sp, #0xd0] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(208))));
  /* 115ab8: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 115abc: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1137344));
  fn1_142608(c);
  /* 115ac0: ldrb w8, [sp, #0xd8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(216))));
  /* 115ac4: tbz w8, #0, #0x115a58 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_115a58;
L_115ac8:;
  /* 115ac8: ldr x8, [sp, #0xd8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(216))));
  /* 115acc: ldr x0, [sp, #0xe8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(232))));
  /* 115ad0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 115ad4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1137368));
  fn1_142608(c);
  /* 115ad8: ldrb w8, [sp, #0xf0] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(240))));
  /* 115adc: tbnz w8, #0, #0x115a60 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_115a60;
  /* 115ae0: b #0x115a70 */
  goto L_115a70;
  /* 115ae4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1137384));
  fn1_a1454(c);
}

void fn1_120f14(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039111444));
  /* 120f14: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 120f18: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 120f1c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 120f20: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 120f24: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 120f28: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 120f2c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 120f30: adrp x23, #0x151000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 120f34: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 120f38: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 120f3c: ldr x23, [x23, #0xc50] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 23) + INT64_C(3152))));
  /* 120f40: ldar x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 120f44: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 120f48: b.eq #0x121004 */
  if (ARC_COND(c, 0)) goto L_121004;
  /* 120f4c: nop  */
  /* nop: no architectural effect here */
  /* 120f50: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 120f54: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1183576));
  fn1_142518(c);
  /* 120f58: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 120f5c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 120f60: b.ne #0x120f8c */
  if (ARC_COND(c, 1)) goto L_120f8c;
  /* 120f64: nop  */
  /* nop: no architectural effect here */
  /* 120f68: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 120f6c: nop  */
  /* nop: no architectural effect here */
  /* 120f70: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_120f74:;
  /* 120f74: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 120f78: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 120f7c: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1183616));
  fn1_142530(c);
  /* 120f80: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 120f84: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 120f88: b.eq #0x120f74 */
  if (ARC_COND(c, 0)) goto L_120f74;
L_120f8c:;
  /* 120f8c: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 120f90: cbz x8, #0x120fa4 */
  if ((ARC_X_R(c, 8)) == 0) goto L_120fa4;
  /* 120f94: nop  */
  /* nop: no architectural effect here */
  /* 120f98: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 120f9c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1183648));
  fn1_142560(c);
  /* 120fa0: b #0x121004 */
  goto L_121004;
L_120fa4:;
  /* 120fa4: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 120fa8: str x23, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 23));
  /* 120fac: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 120fb0: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 120fb4: nop  */
  /* nop: no architectural effect here */
  /* 120fb8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 120fbc: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1183680));
  fn1_142560(c);
  /* 120fc0: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 120fc4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 120fc8: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 120fcc: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1183696));
  fn1_a2030(c);
  /* 120fd0: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 120fd4: str w8, [x23, #8] */
  arc_st32((ARC_X_R(c, 23) + INT64_C(8)), ARC_W_R(c, 8));
  /* 120fd8: nop  */
  /* nop: no architectural effect here */
  /* 120fdc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 120fe0: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1183716));
  fn1_142518(c);
  /* 120fe4: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 120fe8: stlr x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 120fec: nop  */
  /* nop: no architectural effect here */
  /* 120ff0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 120ff4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1183736));
  fn1_142560(c);
  /* 120ff8: nop  */
  /* nop: no architectural effect here */
  /* 120ffc: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 121000: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1183748));
  fn1_142578(c);
L_121004:;
  /* 121004: ldrsw x8, [x23, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 23) + INT64_C(8)))));
  /* 121008: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 12100c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 121010: sub x22, x8, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 121014: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1183768));
  fn1_db2e0(c);
  /* 121018: mov x21, x20 */
  ARC_X_W(c, 21, ARC_X_R(c, 20));
  /* 12101c: ldp x8, x9, [x21, #0x10]! */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 121020: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 121024: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 121028: cmp x10, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 22));
  /* 12102c: b.hi #0x121058 */
  if (ARC_COND(c, 8)) goto L_121058;
  /* 121030: add x9, x22, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* 121034: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 121038: b.ls #0x12104c */
  if (ARC_COND(c, 9)) goto L_12104c;
  /* 12103c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 121040: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1183812));
  fn1_1352bc(c);
  /* 121044: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 121048: b #0x121058 */
  goto L_121058;
L_12104c:;
  /* 12104c: b.hs #0x121058 */
  if (ARC_COND(c, 2)) goto L_121058;
  /* 121050: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 121054: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_121058:;
  /* 121058: ldr x20, [x8, x22, lsl #3] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3))));
  /* 12105c: cbz x20, #0x121080 */
  if ((ARC_X_R(c, 20)) == 0) goto L_121080;
  /* 121060: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 121064: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 121068: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1183852));
  fn1_bd950(c);
  /* 12106c: cbnz x0, #0x121080 */
  if ((ARC_X_R(c, 0)) != 0) goto L_121080;
  /* 121070: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 121074: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 121078: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 12107c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1183872));
  arc_dispatch(c, ARC_X_R(c, 8));
L_121080:;
  /* 121080: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 121084: str x19, [x8, x22, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3)), ARC_X_R(c, 19));
  /* 121088: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12108c: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 121090: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 121094: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 121098: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 12109c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1210a0: ret  */
  return;
  /* 1210a4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1210a8: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 1210ac: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 1210b0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1183924));
  fn1_bd950(c);
  /* 1210b4: cbnz x0, #0x1210dc */
  if ((ARC_X_R(c, 0)) != 0) goto L_1210dc;
  /* 1210b8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1210bc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1210c0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 1210c4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1183944));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1210c8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1210cc: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1183952));
  fn1_9cc20(c);
  /* 1210d0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1210d4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1210d8: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1183964));
  fn1_d2a78(c);
L_1210dc:;
  /* 1210dc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1210e0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1183972));
  fn1_9cc20(c);
}

void fn1_1270cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039136460));
  /* 1270cc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1270d0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1270d4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1270d8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1270dc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1270e0: bl #0x143f40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1208548));
  fn1_143f40(c);
  /* 1270e4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1270e8: mov w1, #0x28 */
  ARC_W_W(c, 1, UINT64_C(40));
  /* 1270ec: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1270f0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1270f4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1270f8: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_1297a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039146408));
  /* 1297a8: bti c */
  /* bti: no architectural effect here */
  /* 1297ac: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 1297b0: ret  */
  return;
}

void fn1_12aeb4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039152308));
  /* 12aeb4: bti c */
  /* bti: no architectural effect here */
  /* 12aeb8: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 12aebc: ret  */
  return;
}

void fn1_12c60c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039158284));
  /* 12c60c: bti c */
  /* bti: no architectural effect here */
  /* 12c610: ldr w8, [x0, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(8))));
  /* 12c614: mov w9, #0x4a */
  ARC_W_W(c, 9, UINT64_C(74));
  /* 12c618: ands w8, w8, w9 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 9));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 8, _r); }
  /* 12c61c: b.eq #0x12c640 */
  if (ARC_COND(c, 0)) goto L_12c640;
  /* 12c620: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* 12c624: b.eq #0x12c638 */
  if (ARC_COND(c, 0)) goto L_12c638;
  /* 12c628: cmp w8, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(8));
  /* 12c62c: b.ne #0x12c648 */
  if (ARC_COND(c, 1)) goto L_12c648;
  /* 12c630: mov w0, #0x10 */
  ARC_W_W(c, 0, UINT64_C(16));
  /* 12c634: ret  */
  return;
L_12c638:;
  /* 12c638: mov w0, #8 */
  ARC_W_W(c, 0, UINT64_C(8));
  /* 12c63c: ret  */
  return;
L_12c640:;
  /* 12c640: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 12c644: ret  */
  return;
L_12c648:;
  /* 12c648: mov w0, #0xa */
  ARC_W_W(c, 0, UINT64_C(10));
  /* 12c64c: ret  */
  return;
}

void fn1_1349a4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039191972));
  /* 1349a4: bti c */
  /* bti: no architectural effect here */
  /* 1349a8: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* 1349ac: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_1350e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039193828));
  /* 1350e4: bti c */
  /* bti: no architectural effect here */
  /* 1350e8: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* 1350ec: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_138108(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039206152));
  /* 138108: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13810c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 138110: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 138114: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 138118: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 13811c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 138120: ldr x8, [x8, #0xe48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3656))));
  /* 138124: add x9, x8, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* 138128: add x8, x8, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* 13812c: str x9, [x0], #0x10 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* 138130: str x8, [x19, #0x70]! */
  { const uint64_t _a = (ARC_X_R(c, 19) + INT64_C(112));
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(112));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 138134: bl #0x144558 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1278264));
  fn1_144558(c);
  /* 138138: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13813c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 138140: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 138144: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 138148: b #0x1433b8 */
  fn1_1433b8(c); return;
}

void fn1_13bbe0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039221216));
  /* 13bbe0: bti c */
  /* bti: no architectural effect here */
  /* 13bbe4: cmp x0, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 2));
  /* 13bbe8: sbcs xzr, x1, x3 */
  ARC_X_W(c, 31, arc_add64(c, ARC_X_R(c, 1), ((uint64_t)~(uint64_t)(ARC_X_R(c, 3))), (c)->cf));
  /* 13bbec: b.hs #0x13bc0c */
  if (ARC_COND(c, 2)) goto L_13bc0c;
  /* 13bbf0: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* 13bbf4: cbz x4, #0x13bc90 */
  if ((ARC_X_R(c, 4)) == 0) goto L_13bc90;
  /* 13bbf8: mov x9, x1 */
  ARC_X_W(c, 9, ARC_X_R(c, 1));
  /* 13bbfc: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 13bc00: stp x0, x9, [x4] */
  { const uint64_t _pa = ARC_X_R(c, 4);
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 13bc04: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 13bc08: ret  */
  return;
L_13bc0c:;
  /* 13bc0c: cbz x3, #0x13bc9c */
  if ((ARC_X_R(c, 3)) == 0) goto L_13bc9c;
  /* 13bc10: clz x9, x3 */
  ARC_X_W(c, 9, arc_clz64(ARC_X_R(c, 3)));
  /* 13bc14: clz x11, x1 */
  ARC_X_W(c, 11, arc_clz64(ARC_X_R(c, 1)));
  /* 13bc18: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* 13bc1c: subs w10, w9, w11 */
  ARC_W_W(c, 10, arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 11)));
  /* 13bc20: b.mi #0x13bc88 */
  if (ARC_COND(c, 4)) goto L_13bc88;
  /* 13bc24: lsr x12, x2, #1 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 2)) >> ((UINT64_C(1)) & 63)));
  /* 13bc28: mvn w13, w10 */
  ARC_W_W(c, 13, (~(uint32_t)(ARC_W_R(c, 10))));
  /* 13bc2c: lsl x14, x2, x10 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 2)) << ((ARC_X_R(c, 10)) & 63)));
  /* 13bc30: tst x10, #0x40 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 10) & UINT64_C(64)));
  /* 13bc34: lsr x12, x12, x13 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 12)) >> ((ARC_X_R(c, 13)) & 63)));
  /* 13bc38: lsl x13, x3, x10 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 3)) << ((ARC_X_R(c, 10)) & 63)));
  /* 13bc3c: csel x10, xzr, x14, ne */
  ARC_X_W(c, 10, (ARC_COND(c, 1) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 14)));
  /* 13bc40: orr x12, x13, x12 */
  ARC_X_W(c, 12, (ARC_X_R(c, 13) | ARC_X_R(c, 12)));
  /* 13bc44: mvn w13, w9 */
  ARC_W_W(c, 13, (~(uint32_t)(ARC_W_R(c, 9))));
  /* 13bc48: csel x9, x14, x12, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 12)));
  /* 13bc4c: add w11, w13, w11 */
  ARC_W_W(c, 11, (ARC_W_R(c, 13) + ARC_W_R(c, 11)));
L_13bc50:;
  /* 13bc50: mvn x12, x0 */
  ARC_X_W(c, 12, (~(uint64_t)(ARC_X_R(c, 0))));
  /* 13bc54: mvn x13, x1 */
  ARC_X_W(c, 13, (~(uint64_t)(ARC_X_R(c, 1))));
  /* 13bc58: cmn x10, x12 */
  (void)arc_add64(c, ARC_X_R(c, 10), ARC_X_R(c, 12), 0);
  /* 13bc5c: adc x12, x9, x13 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 9)) + (uint64_t)(ARC_X_R(c, 13)) + (c)->cf));
  /* 13bc60: tst x12, #-0x8000000000000000 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 12) & UINT64_C(9223372036854775808)));
  /* 13bc64: extr x8, x8, x12, #0x3f */
  ARC_X_W(c, 8, (((uint64_t)(ARC_X_R(c, 12)) >> 63) | ((uint64_t)(ARC_X_R(c, 8)) << 1)));
  /* 13bc68: csel x13, x10, xzr, ne */
  ARC_X_W(c, 13, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 31)));
  /* 13bc6c: csel x14, x9, xzr, ne */
  ARC_X_W(c, 14, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 31)));
  /* 13bc70: extr x10, x9, x10, #1 */
  ARC_X_W(c, 10, (((uint64_t)(ARC_X_R(c, 10)) >> 1) | ((uint64_t)(ARC_X_R(c, 9)) << 63)));
  /* 13bc74: subs x0, x0, x13 */
  ARC_X_W(c, 0, arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 13)));
  /* 13bc78: lsr x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 13bc7c: sbc x1, x1, x14 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 1)) + (uint64_t)(((uint64_t)~(uint64_t)(ARC_X_R(c, 14)))) + (c)->cf));
  /* 13bc80: adds w11, w11, #1 */
  ARC_W_W(c, 11, arc_add32(c, ARC_W_R(c, 11), UINT64_C(1), 0));
  /* 13bc84: b.lo #0x13bc50 */
  if (ARC_COND(c, 3)) goto L_13bc50;
L_13bc88:;
  /* 13bc88: cbz x4, #0x13bc90 */
  if ((ARC_X_R(c, 4)) == 0) goto L_13bc90;
  /* 13bc8c: stp x0, x1, [x4] */
  { const uint64_t _pa = ARC_X_R(c, 4);
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
L_13bc90:;
  /* 13bc90: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
L_13bc94:;
  /* 13bc94: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 13bc98: ret  */
  return;
L_13bc9c:;
  /* 13bc9c: cmp x1, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 2));
  /* 13bca0: b.hs #0x13bd60 */
  if (ARC_COND(c, 2)) goto L_13bd60;
  /* 13bca4: clz x9, x2 */
  ARC_X_W(c, 9, arc_clz64(ARC_X_R(c, 2)));
  /* 13bca8: lsr x8, x0, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(1)) & 63)));
  /* 13bcac: lsl x11, x2, x9 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 2)) << ((ARC_X_R(c, 9)) & 63)));
  /* 13bcb0: mvn w10, w9 */
  ARC_W_W(c, 10, (~(uint32_t)(ARC_W_R(c, 9))));
  /* 13bcb4: lsl x13, x1, x9 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 1)) << ((ARC_X_R(c, 9)) & 63)));
  /* 13bcb8: lsr x8, x8, x10 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((ARC_X_R(c, 10)) & 63)));
  /* 13bcbc: lsr x12, x11, #0x20 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(32)) & 63)));
  /* 13bcc0: mov w14, w11 */
  ARC_W_W(c, 14, ARC_W_R(c, 11));
  /* 13bcc4: orr x10, x13, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 13) | ARC_X_R(c, 8)));
  /* 13bcc8: lsl x13, x0, x9 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 0)) << ((ARC_X_R(c, 9)) & 63)));
  /* 13bccc: udiv x8, x10, x12 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 12)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 10)) / (uint64_t)(ARC_X_R(c, 12)))));
  /* 13bcd0: lsr x15, x13, #0x20 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 13)) >> ((UINT64_C(32)) & 63)));
  /* 13bcd4: mov w13, w13 */
  ARC_W_W(c, 13, ARC_W_R(c, 13));
  /* 13bcd8: msub x16, x8, x12, x10 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 10)) - ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 12)))));
  /* 13bcdc: b #0x13bcf0 */
  goto L_13bcf0;
L_13bce0:;
  /* 13bce0: add x16, x16, x12 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + ARC_X_R(c, 12)));
  /* 13bce4: sub x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 13bce8: lsr x17, x16, #0x20 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 16)) >> ((UINT64_C(32)) & 63)));
  /* 13bcec: cbnz x17, #0x13bd08 */
  if ((ARC_X_R(c, 17)) != 0) goto L_13bd08;
L_13bcf0:;
  /* 13bcf0: lsr x17, x8, #0x20 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(32)) & 63)));
  /* 13bcf4: cbnz x17, #0x13bce0 */
  if ((ARC_X_R(c, 17)) != 0) goto L_13bce0;
  /* 13bcf8: mul x17, x8, x14 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 14))));
  /* 13bcfc: orr x0, x15, x16, lsl #32 */
  ARC_X_W(c, 0, (ARC_X_R(c, 15) | ((uint64_t)(ARC_X_R(c, 16)) << 32)));
  /* 13bd00: cmp x17, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 17), ARC_X_R(c, 0));
  /* 13bd04: b.hi #0x13bce0 */
  if (ARC_COND(c, 8)) goto L_13bce0;
L_13bd08:;
  /* 13bd08: orr x10, x15, x10, lsl #32 */
  ARC_X_W(c, 10, (ARC_X_R(c, 15) | ((uint64_t)(ARC_X_R(c, 10)) << 32)));
  /* 13bd0c: msub x15, x8, x11, x10 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 10)) - ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 11)))));
  /* 13bd10: udiv x10, x15, x12 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 12)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 15)) / (uint64_t)(ARC_X_R(c, 12)))));
  /* 13bd14: msub x16, x10, x12, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) - ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 12)))));
  /* 13bd18: b #0x13bd2c */
  goto L_13bd2c;
L_13bd1c:;
  /* 13bd1c: add x16, x16, x12 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + ARC_X_R(c, 12)));
  /* 13bd20: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* 13bd24: lsr x17, x16, #0x20 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 16)) >> ((UINT64_C(32)) & 63)));
  /* 13bd28: cbnz x17, #0x13bd44 */
  if ((ARC_X_R(c, 17)) != 0) goto L_13bd44;
L_13bd2c:;
  /* 13bd2c: lsr x17, x10, #0x20 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(32)) & 63)));
  /* 13bd30: cbnz x17, #0x13bd1c */
  if ((ARC_X_R(c, 17)) != 0) goto L_13bd1c;
  /* 13bd34: mul x17, x10, x14 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 14))));
  /* 13bd38: orr x0, x13, x16, lsl #32 */
  ARC_X_W(c, 0, (ARC_X_R(c, 13) | ((uint64_t)(ARC_X_R(c, 16)) << 32)));
  /* 13bd3c: cmp x17, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 17), ARC_X_R(c, 0));
  /* 13bd40: b.hi #0x13bd1c */
  if (ARC_COND(c, 8)) goto L_13bd1c;
L_13bd44:;
  /* 13bd44: orr x12, x13, x15, lsl #32 */
  ARC_X_W(c, 12, (ARC_X_R(c, 13) | ((uint64_t)(ARC_X_R(c, 15)) << 32)));
  /* 13bd48: msub x11, x10, x11, x12 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 12)) - ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 11)))));
  /* 13bd4c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 13bd50: lsr x9, x11, x9 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 11)) >> ((ARC_X_R(c, 9)) & 63)));
  /* 13bd54: add x8, x10, x8, lsl #32 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 8)) << 32)));
  /* 13bd58: cbnz x4, #0x13be20 */
  if ((ARC_X_R(c, 4)) != 0) goto L_13be20;
  /* 13bd5c: b #0x13bc94 */
  goto L_13bc94;
L_13bd60:;
  /* 13bd60: mov x8, x1 */
  ARC_X_W(c, 8, ARC_X_R(c, 1));
  /* 13bd64: udiv x1, x1, x2 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 2)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 1)) / (uint64_t)(ARC_X_R(c, 2)))));
  /* 13bd68: clz x9, x2 */
  ARC_X_W(c, 9, arc_clz64(ARC_X_R(c, 2)));
  /* 13bd6c: lsr x10, x0, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(1)) & 63)));
  /* 13bd70: lsl x11, x2, x9 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 2)) << ((ARC_X_R(c, 9)) & 63)));
  /* 13bd74: mvn w12, w9 */
  ARC_W_W(c, 12, (~(uint32_t)(ARC_W_R(c, 9))));
  /* 13bd78: lsl x13, x0, x9 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 0)) << ((ARC_X_R(c, 9)) & 63)));
  /* 13bd7c: lsr x10, x10, x12 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((ARC_X_R(c, 12)) & 63)));
  /* 13bd80: lsr x12, x11, #0x20 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(32)) & 63)));
  /* 13bd84: mov w14, w11 */
  ARC_W_W(c, 14, ARC_W_R(c, 11));
  /* 13bd88: lsr x15, x13, #0x20 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 13)) >> ((UINT64_C(32)) & 63)));
  /* 13bd8c: mov w13, w13 */
  ARC_W_W(c, 13, ARC_W_R(c, 13));
  /* 13bd90: msub x8, x1, x2, x8 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) - ((uint64_t)(ARC_X_R(c, 1)) * (uint64_t)(ARC_X_R(c, 2)))));
  /* 13bd94: lsl x8, x8, x9 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((ARC_X_R(c, 9)) & 63)));
  /* 13bd98: orr x10, x8, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) | ARC_X_R(c, 10)));
  /* 13bd9c: udiv x8, x10, x12 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 12)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 10)) / (uint64_t)(ARC_X_R(c, 12)))));
  /* 13bda0: msub x16, x8, x12, x10 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 10)) - ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 12)))));
  /* 13bda4: b #0x13bdb8 */
  goto L_13bdb8;
L_13bda8:;
  /* 13bda8: add x16, x16, x12 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + ARC_X_R(c, 12)));
  /* 13bdac: sub x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 13bdb0: lsr x17, x16, #0x20 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 16)) >> ((UINT64_C(32)) & 63)));
  /* 13bdb4: cbnz x17, #0x13bdd0 */
  if ((ARC_X_R(c, 17)) != 0) goto L_13bdd0;
L_13bdb8:;
  /* 13bdb8: lsr x17, x8, #0x20 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(32)) & 63)));
  /* 13bdbc: cbnz x17, #0x13bda8 */
  if ((ARC_X_R(c, 17)) != 0) goto L_13bda8;
  /* 13bdc0: mul x17, x8, x14 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 14))));
  /* 13bdc4: orr x0, x15, x16, lsl #32 */
  ARC_X_W(c, 0, (ARC_X_R(c, 15) | ((uint64_t)(ARC_X_R(c, 16)) << 32)));
  /* 13bdc8: cmp x17, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 17), ARC_X_R(c, 0));
  /* 13bdcc: b.hi #0x13bda8 */
  if (ARC_COND(c, 8)) goto L_13bda8;
L_13bdd0:;
  /* 13bdd0: orr x10, x15, x10, lsl #32 */
  ARC_X_W(c, 10, (ARC_X_R(c, 15) | ((uint64_t)(ARC_X_R(c, 10)) << 32)));
  /* 13bdd4: msub x15, x8, x11, x10 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 10)) - ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 11)))));
  /* 13bdd8: udiv x10, x15, x12 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 12)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 15)) / (uint64_t)(ARC_X_R(c, 12)))));
  /* 13bddc: msub x16, x10, x12, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) - ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 12)))));
  /* 13bde0: b #0x13bdf4 */
  goto L_13bdf4;
L_13bde4:;
  /* 13bde4: add x16, x16, x12 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + ARC_X_R(c, 12)));
  /* 13bde8: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* 13bdec: lsr x17, x16, #0x20 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 16)) >> ((UINT64_C(32)) & 63)));
  /* 13bdf0: cbnz x17, #0x13be0c */
  if ((ARC_X_R(c, 17)) != 0) goto L_13be0c;
L_13bdf4:;
  /* 13bdf4: lsr x17, x10, #0x20 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(32)) & 63)));
  /* 13bdf8: cbnz x17, #0x13bde4 */
  if ((ARC_X_R(c, 17)) != 0) goto L_13bde4;
  /* 13bdfc: mul x17, x10, x14 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 14))));
  /* 13be00: orr x0, x13, x16, lsl #32 */
  ARC_X_W(c, 0, (ARC_X_R(c, 13) | ((uint64_t)(ARC_X_R(c, 16)) << 32)));
  /* 13be04: cmp x17, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 17), ARC_X_R(c, 0));
  /* 13be08: b.hi #0x13bde4 */
  if (ARC_COND(c, 8)) goto L_13bde4;
L_13be0c:;
  /* 13be0c: orr x12, x13, x15, lsl #32 */
  ARC_X_W(c, 12, (ARC_X_R(c, 13) | ((uint64_t)(ARC_X_R(c, 15)) << 32)));
  /* 13be10: msub x11, x10, x11, x12 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 12)) - ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 11)))));
  /* 13be14: lsr x9, x11, x9 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 11)) >> ((ARC_X_R(c, 9)) & 63)));
  /* 13be18: add x8, x10, x8, lsl #32 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 8)) << 32)));
  /* 13be1c: cbz x4, #0x13bc94 */
  if ((ARC_X_R(c, 4)) == 0) goto L_13bc94;
L_13be20:;
  /* 13be20: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 13be24: stp x9, xzr, [x4] */
  { const uint64_t _pa = ARC_X_R(c, 4);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13be28: ret  */
  return;
}

void fn1_1424a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248032));
  /* 1424a0: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1424a4: ldr x17, [x16, #0xec0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3776))));
  /* 1424a8: add x16, x16, #0xec0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3776)));
  /* 1424ac: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1424b0: nop  */
  /* nop: no architectural effect here */
  /* 1424b4: nop  */
  /* nop: no architectural effect here */
}

void fn1_142aa0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249568));
  /* 142aa0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142aa4: ldr x17, [x16, #0xc0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(192))));
  /* 142aa8: add x16, x16, #0xc0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(192)));
  /* 142aac: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142ab0: nop  */
  /* nop: no architectural effect here */
  /* 142ab4: nop  */
  /* nop: no architectural effect here */
}

void fn1_1430a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251104));
  /* 1430a0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1430a4: ldr x17, [x16, #0x2c0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(704))));
  /* 1430a8: add x16, x16, #0x2c0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(704)));
  /* 1430ac: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1430b0: nop  */
  /* nop: no architectural effect here */
  /* 1430b4: nop  */
  /* nop: no architectural effect here */
}

void fn1_1436a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252640));
  /* 1436a0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1436a4: ldr x17, [x16, #0x4c0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1216))));
  /* 1436a8: add x16, x16, #0x4c0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1216)));
  /* 1436ac: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1436b0: nop  */
  /* nop: no architectural effect here */
  /* 1436b4: nop  */
  /* nop: no architectural effect here */
}

void fn1_143ca0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254176));
  /* 143ca0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143ca4: ldr x17, [x16, #0x6c0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1728))));
  /* 143ca8: add x16, x16, #0x6c0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1728)));
  /* 143cac: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143cb0: nop  */
  /* nop: no architectural effect here */
  /* 143cb4: nop  */
  /* nop: no architectural effect here */
}

void fn1_1442a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255712));
  /* 1442a0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1442a4: ldr x17, [x16, #0x8c0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2240))));
  /* 1442a8: add x16, x16, #0x8c0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2240)));
  /* 1442ac: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1442b0: nop  */
  /* nop: no architectural effect here */
  /* 1442b4: nop  */
  /* nop: no architectural effect here */
}

void fn1_1448a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039257248));
  /* 1448a0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1448a4: ldr x17, [x16, #0xac0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2752))));
  /* 1448a8: add x16, x16, #0xac0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2752)));
  /* 1448ac: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1448b0: nop  */
  /* nop: no architectural effect here */
  /* 1448b4: nop  */
  /* nop: no architectural effect here */
}

