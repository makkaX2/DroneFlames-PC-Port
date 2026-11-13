#include "lifted.h"

void fn1_a08ac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038585516));
  /* a08ac: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a08b0: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a08b4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a08b8: mov w0, #8 */
  ARC_W_W(c, 0, UINT64_C(8));
  /* a08bc: bl #0x142410 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(657600));
  fn1_142410(c);
  /* a08c0: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a08c4: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a08c8: adrp x2, #0x151000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a08cc: ldr x8, [x8, #0x988] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2440))));
  /* a08d0: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* a08d4: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* a08d8: ldr x1, [x1, #0x898] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2200))));
  /* a08dc: ldr x2, [x2, #0x880] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 2) + INT64_C(2176))));
  /* a08e0: bl #0x142440 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(657636));
  fn1_142440(c);
}

void fn1_a2250(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038592080));
  /* a2250: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a2254: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a2258: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* a225c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a2260: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a2264: bl #0x1426b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(664168));
  fn1_1426b0(c);
  /* a2268: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a226c: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* a2270: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* a2274: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a2278: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a227c: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_a7b28(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038614824));
  /* a7b28: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a7b2c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a7b30: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* a7b34: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a7b38: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a7b3c: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* a7b40: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* a7b44: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* a7b48: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* a7b4c: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a7b50: b.hi #0xa7b74 */
  if (ARC_COND(c, 8)) goto L_a7b74;
  /* a7b54: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a7b58: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a7b5c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(686944));
  fn1_1428a8(c);
  /* a7b60: cbz x0, #0xa7bd4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a7bd4;
  /* a7b64: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a7b68: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a7b6c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a7b70: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_a7b74:;
  /* a7b74: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* a7b78: add x0, x21, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* a7b7c: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a7b80: add x8, x8, #0xb10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2832)));
  /* a7b84: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* a7b88: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a7b8c: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a7b90: ldurh w9, [x0, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* a7b94: mov w8, #0x15 */
  ARC_W_W(c, 8, UINT64_C(21));
  /* a7b98: mov w11, #0x1e */
  ARC_W_W(c, 11, UINT64_C(30));
  /* a7b9c: strb w8, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 8));
  /* a7ba0: adrp x8, #0x51000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(331776)));
  /* a7ba4: add x8, x8, #0xb3a */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2874)));
  /* a7ba8: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* a7bac: str x8, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 8));
  /* a7bb0: orr w8, w9, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* a7bb4: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* a7bb8: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* a7bbc: stp x11, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* a7bc0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a7bc4: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* a7bc8: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a7bcc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a7bd0: ret  */
  return;
L_a7bd4:;
  /* a7bd4: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(687064));
  fn1_142488(c);
}

void fn1_ad308(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038637320));
  /* ad308: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ad30c: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* ad310: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ad314: stp x28, x27, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* ad318: stp x26, x25, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* ad31c: stp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* ad320: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ad324: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ad328: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* ad32c: ldp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ad330: sub x10, x9, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* ad334: cmp x10, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(2));
  /* ad338: b.lo #0xad360 */
  if (ARC_COND(c, 3)) goto L_ad360;
  /* ad33c: ldrh w10, [x8] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 8)));
  /* ad340: mov w11, #0x5172 */
  ARC_W_W(c, 11, UINT64_C(20850));
  /* ad344: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ad348: cmp w10, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 11));
  /* ad34c: b.eq #0xad388 */
  if (ARC_COND(c, 0)) goto L_ad388;
  /* ad350: ldrh w10, [x8] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 8)));
  /* ad354: mov w11, #0x7172 */
  ARC_W_W(c, 11, UINT64_C(29042));
  /* ad358: cmp w10, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 11));
  /* ad35c: b.eq #0xad448 */
  if (ARC_COND(c, 0)) goto L_ad448;
L_ad360:;
  /* ad360: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
L_ad364:;
  /* ad364: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ad368: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ad36c: ldp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* ad370: ldp x26, x25, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* ad374: ldp x28, x27, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* ad378: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ad37c: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* ad380: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ad384: ret  */
  return;
L_ad388:;
  /* ad388: ldp x11, x10, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* ad38c: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* ad390: add x24, x19, #0x28 */
  ARC_X_W(c, 24, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* ad394: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* ad398: sub x10, x10, x11 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 11)));
  /* ad39c: asr x20, x10, #3 */
  ARC_X_W(c, 20, ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(3)) & 63))));
  /* ad3a0: b #0xad3d4 */
  goto L_ad3d4;
L_ad3a4:;
  /* ad3a4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* ad3a8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(709548));
  fn1_142878(c);
  /* ad3ac: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* ad3b0: cbz x0, #0xad7bc */
  if ((ARC_X_R(c, 0)) == 0) goto L_ad7bc;
L_ad3b4:;
  /* ad3b4: asr x8, x21, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 21)) >> ((UINT64_C(2)) & 63))));
  /* ad3b8: add x23, x0, x21 */
  ARC_X_W(c, 23, (ARC_X_R(c, 0) + ARC_X_R(c, 21)));
  /* ad3bc: add x8, x0, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* ad3c0: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* ad3c4: str x8, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 8));
L_ad3c8:;
  /* ad3c8: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ad3cc: str x0, [x23], #8 */
  { const uint64_t _a = ARC_X_R(c, 23);
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 0));
  }
  /* ad3d0: str x23, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 23));
L_ad3d4:;
  /* ad3d4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ad3d8: b.eq #0xad3e8 */
  if (ARC_COND(c, 0)) goto L_ad3e8;
  /* ad3dc: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* ad3e0: cmp w9, #0x5f */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(95));
  /* ad3e4: b.eq #0xad464 */
  if (ARC_COND(c, 0)) goto L_ad464;
L_ad3e8:;
  /* ad3e8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ad3ec: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(709616));
  fn1_a52b0(c);
  /* ad3f0: cbz x0, #0xad364 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ad364;
  /* ad3f4: ldp x23, x8, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 23, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* ad3f8: cmp x23, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* ad3fc: b.ne #0xad3c8 */
  if (ARC_COND(c, 1)) goto L_ad3c8;
  /* ad400: ldr x22, [x19, #0x10] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* ad404: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* ad408: sub x21, x23, x22 */
  ARC_X_W(c, 21, (ARC_X_R(c, 23) - ARC_X_R(c, 22)));
  /* ad40c: cmp x22, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 24));
  /* ad410: lsl x1, x21, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 21)) << ((UINT64_C(1)) & 63)));
  /* ad414: b.ne #0xad3a4 */
  if (ARC_COND(c, 1)) goto L_ad3a4;
  /* ad418: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* ad41c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(709664));
  fn1_1428a8(c);
  /* ad420: cbz x0, #0xad7c4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ad7c4;
  /* ad424: cmp x23, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 24));
  /* ad428: b.eq #0xad440 */
  if (ARC_COND(c, 0)) goto L_ad440;
  /* ad42c: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* ad430: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* ad434: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* ad438: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(709692));
  fn1_1449f0(c);
  /* ad43c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
L_ad440:;
  /* ad440: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* ad444: b #0xad3b4 */
  goto L_ad3b4;
L_ad448:;
  /* ad448: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* ad44c: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* ad450: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* ad454: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* ad458: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ad45c: b.ne #0xad484 */
  if (ARC_COND(c, 1)) goto L_ad484;
  /* ad460: b #0xad360 */
  goto L_ad360;
L_ad464:;
  /* ad464: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* ad468: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ad46c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* ad470: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* ad474: bl #0xa77e4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(709752));
  fn1_a77e4(c);
  /* ad478: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ad47c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ad480: b.eq #0xad360 */
  if (ARC_COND(c, 0)) goto L_ad360;
L_ad484:;
  /* ad484: ldp x11, x10, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* ad488: add x26, x19, #0x28 */
  ARC_X_W(c, 26, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* ad48c: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* ad490: mov w22, #0x540 */
  ARC_W_W(c, 22, UINT64_C(1344));
  /* ad494: mov w21, #0x55 */
  ARC_W_W(c, 21, UINT64_C(85));
  /* ad498: mov w28, #0x54 */
  ARC_W_W(c, 28, UINT64_C(84));
  /* ad49c: stp x0, x1, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* ad4a0: sub x10, x10, x11 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 11)));
  /* ad4a4: asr x10, x10, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(3)) & 63))));
  /* ad4a8: stur x10, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 10));
L_ad4ac:;
  /* ad4ac: cmp w9, #0x51 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(81));
  /* ad4b0: b.eq #0xad578 */
  if (ARC_COND(c, 0)) goto L_ad578;
  /* ad4b4: cmp w9, #0x54 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(84));
  /* ad4b8: b.eq #0xad50c */
  if (ARC_COND(c, 0)) goto L_ad50c;
  /* ad4bc: cmp w9, #0x58 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(88));
  /* ad4c0: b.ne #0xad360 */
  if (ARC_COND(c, 1)) goto L_ad360;
  /* ad4c4: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* ad4c8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ad4cc: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* ad4d0: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(709844));
  fn1_aa69c(c);
  /* ad4d4: cbz x0, #0xad364 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ad364;
  /* ad4d8: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ad4dc: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* ad4e0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ad4e4: b.eq #0xad5f8 */
  if (ARC_COND(c, 0)) goto L_ad5f8;
  /* ad4e8: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* ad4ec: cmp w10, #0x4e */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(78));
  /* ad4f0: b.ne #0xad5f8 */
  if (ARC_COND(c, 1)) goto L_ad5f8;
  /* ad4f4: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* ad4f8: mov w25, #1 */
  ARC_W_W(c, 25, UINT64_C(1));
  /* ad4fc: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* ad500: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ad504: b.ne #0xad604 */
  if (ARC_COND(c, 1)) goto L_ad604;
  /* ad508: b #0xad630 */
  goto L_ad630;
L_ad50c:;
  /* ad50c: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* ad510: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ad514: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* ad518: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(709916));
  fn1_a52b0(c);
  /* ad51c: cbz x0, #0xad364 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ad364;
  /* ad520: ldr x20, [x19, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* ad524: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* ad528: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* ad52c: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* ad530: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* ad534: b.hi #0xad554 */
  if (ARC_COND(c, 8)) goto L_ad554;
  /* ad538: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* ad53c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(709952));
  fn1_1428a8(c);
  /* ad540: cbz x0, #0xad7c0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ad7c0;
  /* ad544: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ad548: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ad54c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ad550: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_ad554:;
  /* ad554: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* ad558: add x27, x20, x8 */
  ARC_X_W(c, 27, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* ad55c: adrp x8, #0x14b000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1355776)));
  /* ad560: add x8, x8, #0x248 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(584)));
  /* ad564: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
  /* ad568: str x8, [x27, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 27) + INT64_C(16));
    ARC_X_W(c, 27, ARC_X_R(c, 27) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* ad56c: ldurh w8, [x27, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 27) + INT64_C(9))));
  /* ad570: strb w21, [x27, #8] */
  arc_st8((ARC_X_R(c, 27) + INT64_C(8)), ARC_W_R(c, 21));
  /* ad574: b #0xad5e4 */
  goto L_ad5e4;
L_ad578:;
  /* ad578: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* ad57c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ad580: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* ad584: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(710024));
  fn1_aa69c(c);
  /* ad588: cbz x0, #0xad364 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ad364;
  /* ad58c: ldr x20, [x19, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* ad590: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* ad594: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* ad598: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* ad59c: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* ad5a0: b.hi #0xad5c0 */
  if (ARC_COND(c, 8)) goto L_ad5c0;
  /* ad5a4: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* ad5a8: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(710060));
  fn1_1428a8(c);
  /* ad5ac: cbz x0, #0xad7c0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ad7c0;
  /* ad5b0: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ad5b4: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ad5b8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ad5bc: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_ad5c0:;
  /* ad5c0: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* ad5c4: add x27, x20, x8 */
  ARC_X_W(c, 27, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* ad5c8: adrp x8, #0x14b000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1355776)));
  /* ad5cc: add x8, x8, #0x2c0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(704)));
  /* ad5d0: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
  /* ad5d4: mov w9, #0x56 */
  ARC_W_W(c, 9, UINT64_C(86));
  /* ad5d8: str x8, [x27, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 27) + INT64_C(16));
    ARC_X_W(c, 27, ARC_X_R(c, 27) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* ad5dc: ldurh w8, [x27, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 27) + INT64_C(9))));
  /* ad5e0: strb w9, [x27, #8] */
  arc_st8((ARC_X_R(c, 27) + INT64_C(8)), ARC_W_R(c, 9));
L_ad5e4:;
  /* ad5e4: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* ad5e8: orr w8, w8, w22 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 22)));
  /* ad5ec: str x23, [x27, #0x10] */
  arc_st64((ARC_X_R(c, 27) + INT64_C(16)), ARC_X_R(c, 23));
  /* ad5f0: sturh w8, [x27, #9] */
  arc_st16((ARC_X_R(c, 27) + INT64_C(9)), ARC_W_R(c, 8));
  /* ad5f4: b #0xad69c */
  goto L_ad69c;
L_ad5f8:;
  /* ad5f8: mov w25, wzr */
  ARC_W_W(c, 25, ARC_W_R(c, 31));
  /* ad5fc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ad600: b.eq #0xad630 */
  if (ARC_COND(c, 0)) goto L_ad630;
L_ad604:;
  /* ad604: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* ad608: cmp w9, #0x52 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(82));
  /* ad60c: b.ne #0xad630 */
  if (ARC_COND(c, 1)) goto L_ad630;
  /* ad610: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* ad614: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ad618: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* ad61c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* ad620: bl #0xa6c18 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(710180));
  fn1_a6c18(c);
  /* ad624: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* ad628: cbnz x0, #0xad634 */
  if ((ARC_X_R(c, 0)) != 0) goto L_ad634;
  /* ad62c: b #0xad364 */
  goto L_ad364;
L_ad630:;
  /* ad630: mov x24, xzr */
  ARC_X_W(c, 24, ARC_X_R(c, 31));
L_ad634:;
  /* ad634: ldr x20, [x19, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* ad638: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* ad63c: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* ad640: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* ad644: b.hi #0xad664 */
  if (ARC_COND(c, 8)) goto L_ad664;
  /* ad648: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* ad64c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(710224));
  fn1_1428a8(c);
  /* ad650: cbz x0, #0xad7c0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ad7c0;
  /* ad654: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ad658: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ad65c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ad660: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_ad664:;
  /* ad664: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* ad668: add x27, x20, x8 */
  ARC_X_W(c, 27, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* ad66c: adrp x8, #0x14b000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1355776)));
  /* ad670: add x8, x8, #0x1d0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(464)));
  /* ad674: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
  /* ad678: str x8, [x27, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 27) + INT64_C(16));
    ARC_X_W(c, 27, ARC_X_R(c, 27) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* ad67c: ldurh w8, [x27, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 27) + INT64_C(9))));
  /* ad680: strb w28, [x27, #8] */
  arc_st8((ARC_X_R(c, 27) + INT64_C(8)), ARC_W_R(c, 28));
  /* ad684: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* ad688: str x23, [x27, #0x10] */
  arc_st64((ARC_X_R(c, 27) + INT64_C(16)), ARC_X_R(c, 23));
  /* ad68c: orr w8, w8, w22 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 22)));
  /* ad690: strb w25, [x27, #0x18] */
  arc_st8((ARC_X_R(c, 27) + INT64_C(24)), ARC_W_R(c, 25));
  /* ad694: sturh w8, [x27, #9] */
  arc_st16((ARC_X_R(c, 27) + INT64_C(9)), ARC_W_R(c, 8));
  /* ad698: str x24, [x27, #0x20] */
  arc_st64((ARC_X_R(c, 27) + INT64_C(32)), ARC_X_R(c, 24));
L_ad69c:;
  /* ad69c: ldp x25, x8, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 25, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* ad6a0: cmp x25, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* ad6a4: b.ne #0xad70c */
  if (ARC_COND(c, 1)) goto L_ad70c;
  /* ad6a8: ldr x24, [x19, #0x10] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* ad6ac: sub x23, x25, x24 */
  ARC_X_W(c, 23, (ARC_X_R(c, 25) - ARC_X_R(c, 24)));
  /* ad6b0: cmp x24, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 26));
  /* ad6b4: lsl x1, x23, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 23)) << ((UINT64_C(1)) & 63)));
  /* ad6b8: b.eq #0xad6d0 */
  if (ARC_COND(c, 0)) goto L_ad6d0;
  /* ad6bc: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* ad6c0: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(710340));
  fn1_142878(c);
  /* ad6c4: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* ad6c8: cbnz x0, #0xad6fc */
  if ((ARC_X_R(c, 0)) != 0) goto L_ad6fc;
  /* ad6cc: b #0xad7c8 */
  goto L_ad7c8;
L_ad6d0:;
  /* ad6d0: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* ad6d4: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(710360));
  fn1_1428a8(c);
  /* ad6d8: cbz x0, #0xad7cc */
  if ((ARC_X_R(c, 0)) == 0) goto L_ad7cc;
  /* ad6dc: cmp x25, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 26));
  /* ad6e0: b.eq #0xad6f8 */
  if (ARC_COND(c, 0)) goto L_ad6f8;
  /* ad6e4: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* ad6e8: mov x2, x23 */
  ARC_X_W(c, 2, ARC_X_R(c, 23));
  /* ad6ec: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* ad6f0: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(710388));
  fn1_1449f0(c);
  /* ad6f4: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
L_ad6f8:;
  /* ad6f8: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
L_ad6fc:;
  /* ad6fc: asr x8, x23, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 23)) >> ((UINT64_C(2)) & 63))));
  /* ad700: add x25, x0, x23 */
  ARC_X_W(c, 25, (ARC_X_R(c, 0) + ARC_X_R(c, 23)));
  /* ad704: add x8, x0, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* ad708: str x8, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 8));
L_ad70c:;
  /* ad70c: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ad710: str x27, [x25], #8 */
  { const uint64_t _a = ARC_X_R(c, 25);
    ARC_X_W(c, 25, ARC_X_R(c, 25) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 27));
  }
  /* ad714: str x25, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 25));
  /* ad718: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ad71c: b.eq #0xad360 */
  if (ARC_COND(c, 0)) goto L_ad360;
  /* ad720: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* ad724: cmp w9, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(69));
  /* ad728: b.ne #0xad4ac */
  if (ARC_COND(c, 1)) goto L_ad4ac;
  /* ad72c: ldur x1, [x29, #-8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* ad730: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* ad734: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ad738: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* ad73c: bl #0xa77e4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(710464));
  fn1_a77e4(c);
  /* ad740: ldr x20, [x19, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* ad744: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* ad748: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* ad74c: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* ad750: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* ad754: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* ad758: b.hi #0xad778 */
  if (ARC_COND(c, 8)) goto L_ad778;
  /* ad75c: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* ad760: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(710500));
  fn1_1428a8(c);
  /* ad764: cbz x0, #0xad7c0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ad7c0;
  /* ad768: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ad76c: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ad770: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ad774: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_ad778:;
  /* ad778: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* ad77c: add x0, x20, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* ad780: adrp x8, #0x14b000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1355776)));
  /* ad784: add x8, x8, #0x338 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(824)));
  /* ad788: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
  /* ad78c: mov w9, #0x53 */
  ARC_W_W(c, 9, UINT64_C(83));
  /* ad790: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* ad794: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* ad798: ldp x11, x10, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* ad79c: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* ad7a0: mov w9, #0x540 */
  ARC_W_W(c, 9, UINT64_C(1344));
  /* ad7a4: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* ad7a8: stp x22, x23, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* ad7ac: orr w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 9)));
  /* ad7b0: stp x11, x10, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* ad7b4: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* ad7b8: b #0xad364 */
  goto L_ad364;
L_ad7bc:;
  /* ad7bc: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(710592));
  fn1_1427b8(c);
L_ad7c0:;
  /* ad7c0: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(710596));
  fn1_142488(c);
L_ad7c4:;
  /* ad7c4: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(710600));
  fn1_1427b8(c);
L_ad7c8:;
  /* ad7c8: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(710604));
  fn1_1427b8(c);
L_ad7cc:;
  /* ad7cc: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(710608));
  fn1_1427b8(c);
}

void fn1_b3358(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038661976));
  /* b3358: bti c */
  /* bti: no architectural effect here */
  /* b335c: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* b3360: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b6d20(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038676768));
  /* b6d20: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b6d24: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b6d28: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b6d2c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b6d30: ldp x9, x10, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b6d34: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b6d38: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* b6d3c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b6d40: add x11, x9, #0xb */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(11)));
  /* b6d44: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* b6d48: b.ls #0xb6d78 */
  if (ARC_COND(c, 9)) goto L_b6d78;
  /* b6d4c: lsl x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b6d50: add x9, x9, #0x3eb */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1003)));
  /* b6d54: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* b6d58: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b6d5c: csel x1, x10, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* b6d60: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b6d64: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(748904));
  fn1_142878(c);
  /* b6d68: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b6d6c: cbz x0, #0xb6dfc */
  if ((ARC_X_R(c, 0)) == 0) goto L_b6dfc;
  /* b6d70: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b6d74: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
L_b6d78:;
  /* b6d78: adrp x10, #0x51000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(331776)));
  /* b6d7c: add x10, x10, #0xcf8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(3320)));
  /* b6d80: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* b6d84: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* b6d88: mov w9, #0x2272 */
  ARC_W_W(c, 9, UINT64_C(8818));
  /* b6d8c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b6d90: movk w9, #0x2022, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(539099136)));
  /* b6d94: str x10, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* b6d98: stur w9, [x8, #7] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(7)), ARC_W_R(c, 9));
  /* b6d9c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b6da0: ldr x20, [x20, #0x10] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* b6da4: add x8, x8, #0xb */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(11)));
  /* b6da8: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* b6dac: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b6db0: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b6db4: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* b6db8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(748988));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b6dbc: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b6dc0: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b6dc4: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b6dc8: b.ne #0xb6ddc */
  if (ARC_COND(c, 1)) goto L_b6ddc;
  /* b6dcc: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b6dd0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b6dd4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b6dd8: ret  */
  return;
L_b6ddc:;
  /* b6ddc: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b6de0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b6de4: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b6de8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b6dec: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b6df0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b6df4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b6df8: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_b6dfc:;
  /* b6dfc: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(749056));
  fn1_1427b8(c);
}

void fn1_b9794(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038687636));
  /* b9794: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b9798: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b979c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b97a0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b97a4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b97a8: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* b97ac: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b97b0: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* b97b4: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* b97b8: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b97bc: b.hi #0xb97e0 */
  if (ARC_COND(c, 8)) goto L_b97e0;
  /* b97c0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b97c4: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b97c8: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(759756));
  fn1_1428a8(c);
  /* b97cc: cbz x0, #0xb983c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b983c;
  /* b97d0: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b97d4: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b97d8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b97dc: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_b97e0:;
  /* b97e0: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* b97e4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b97e8: add x20, x21, x8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* b97ec: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* b97f0: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(759796));
  fn1_142860(c);
  /* b97f4: adrp x9, #0x149000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1347584)));
  /* b97f8: add x9, x9, #0xc10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3088)));
  /* b97fc: mov w11, #0x540 */
  ARC_W_W(c, 11, UINT64_C(1344));
  /* b9800: str x9, [x20, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* b9804: ldurh w9, [x20, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b9808: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* b980c: mov w10, #8 */
  ARC_W_W(c, 10, UINT64_C(8));
  /* b9810: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* b9814: strb w10, [x20, #8] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(8)), ARC_W_R(c, 10));
  /* b9818: orr w9, w9, w11 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 11)));
  /* b981c: stp x19, x8, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* b9820: sturh w9, [x20, #9] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(9)), ARC_W_R(c, 9));
  /* b9824: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b9828: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b982c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b9830: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b9834: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b9838: ret  */
  return;
L_b983c:;
  /* b983c: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(759872));
  fn1_142488(c);
}

void fn1_bcc20(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038701088));
  /* bcc20: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bcc24: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bcc28: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bcc2c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bcc30: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* bcc34: ldr x0, [x0, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* bcc38: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* bcc3c: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* bcc40: ubfx w9, w8, #8, #2 */
  ARC_W_W(c, 9, (((uint32_t)(ARC_W_R(c, 8)) >> 8) & UINT64_C(3)));
  /* bcc44: cbz w9, #0xbcc94 */
  if ((ARC_W_R(c, 9)) == 0) goto L_bcc94;
  /* bcc48: cmp w9, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(2));
  /* bcc4c: b.ne #0xbcc6c */
  if (ARC_COND(c, 1)) goto L_bcc6c;
  /* bcc50: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* bcc54: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* bcc58: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* bcc5c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(773216));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bcc60: tbnz w0, #0, #0xbcc94 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_bcc94;
  /* bcc64: ldr x0, [x19, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* bcc68: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
L_bcc6c:;
  /* bcc6c: lsr w8, w8, #0xa */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(10)) & 31)));
  /* bcc70: ands w8, w8, #3 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 8) & UINT64_C(3));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 8, _r); }
  /* bcc74: b.eq #0xbcc94 */
  if (ARC_COND(c, 0)) goto L_bcc94;
  /* bcc78: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* bcc7c: b.ne #0xbcce0 */
  if (ARC_COND(c, 1)) goto L_bcce0;
  /* bcc80: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* bcc84: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* bcc88: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* bcc8c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(773264));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bcc90: tbz w0, #0, #0xbcce0 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_bcce0;
L_bcc94:;
  /* bcc94: ldp x8, x9, [x20, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* bcc98: ldr x0, [x20] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 20)));
  /* bcc9c: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bcca0: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* bcca4: b.ls #0xbcccc */
  if (ARC_COND(c, 9)) goto L_bcccc;
  /* bcca8: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* bccac: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* bccb0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bccb4: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bccb8: str x1, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 1));
  /* bccbc: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(773312));
  fn1_142878(c);
  /* bccc0: str x0, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 0));
  /* bccc4: cbz x0, #0xbcd00 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bcd00;
  /* bccc8: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
L_bcccc:;
  /* bcccc: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* bccd0: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* bccd4: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* bccd8: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bccdc: str x8, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 8));
L_bcce0:;
  /* bcce0: ldr x0, [x19, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* bcce4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* bcce8: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* bccec: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* bccf0: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bccf4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bccf8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bccfc: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_bcd00:;
  /* bcd00: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(773380));
  fn1_1427b8(c);
}

void fn1_c0950(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038716752));
L_c0950:;
  /* c0950: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* c0954: stp d15, d14, [sp, #-0xa0]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-160));
    (c)->sp = (c)->sp + INT64_C(-160);
    arc_st64(_pa, (c)->q[15].u64[0]);
    arc_st64((_pa + 8), (c)->q[14].u64[0]);
  }
  /* c0958: stp d13, d12, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, (c)->q[13].u64[0]);
    arc_st64((_pa + 8), (c)->q[12].u64[0]);
  }
  /* c095c: stp d11, d10, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, (c)->q[11].u64[0]);
    arc_st64((_pa + 8), (c)->q[10].u64[0]);
  }
  /* c0960: stp d9, d8, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, (c)->q[9].u64[0]);
    arc_st64((_pa + 8), (c)->q[8].u64[0]);
  }
  /* c0964: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* c0968: stp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* c096c: stp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* c0970: stp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* c0974: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* c0978: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* c097c: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* c0980: sub sp, sp, #0x1f0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(496)));
  /* c0984: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c0988: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c098c: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* c0990: ldr q0, [x8, #0xb00] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2816))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2816)) + 8));
  /* c0994: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c0998: ldr q30, [x9, #0xba0] */
  arc_q_w(c, 30, arc_ld64((ARC_X_R(c, 9) + INT64_C(2976))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2976)) + 8));
  /* c099c: ldr q31, [x8, #0xcf0] */
  arc_q_w(c, 31, arc_ld64((ARC_X_R(c, 8) + INT64_C(3312))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3312)) + 8));
  /* c09a0: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c09a4: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c09a8: ldr q8, [x8, #0xa50] */
  arc_q_w(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2640))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2640)) + 8));
  /* c09ac: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c09b0: stur q0, [x29, #-0x60] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-96)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-96)) + 8, (c)->q[0].u64[1]);
  /* c09b4: ldr q10, [x8, #0x9d0] */
  arc_q_w(c, 10, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2512)) + 8));
  /* c09b8: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c09bc: ldr q9, [x9, #0x990] */
  arc_q_w(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2448))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2448)) + 8));
  /* c09c0: ldr q11, [x8, #0xb90] */
  arc_q_w(c, 11, arc_ld64((ARC_X_R(c, 8) + INT64_C(2960))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2960)) + 8));
  /* c09c4: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c09c8: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c09cc: ldr q13, [x8, #0xd10] */
  arc_q_w(c, 13, arc_ld64((ARC_X_R(c, 8) + INT64_C(3344))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3344)) + 8));
  /* c09d0: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c09d4: ldr q12, [x9, #0xaa0] */
  arc_q_w(c, 12, arc_ld64((ARC_X_R(c, 9) + INT64_C(2720))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2720)) + 8));
  /* c09d8: ldr q14, [x8, #0x9e0] */
  arc_q_w(c, 14, arc_ld64((ARC_X_R(c, 8) + INT64_C(2528))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2528)) + 8));
  /* c09dc: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c09e0: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c09e4: ldr q0, [x8, #0xd60] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3424))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3424)) + 8));
  /* c09e8: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c09ec: ldr q15, [x9, #0xb50] */
  arc_q_w(c, 15, arc_ld64((ARC_X_R(c, 9) + INT64_C(2896))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2896)) + 8));
  /* c09f0: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c09f4: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* c09f8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* c09fc: stur q0, [x29, #-0x70] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-112)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-112)) + 8, (c)->q[0].u64[1]);
  /* c0a00: ldr q0, [x8, #0xbc0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3008))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3008)) + 8));
  /* c0a04: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c0a08: adrp x6, #0x52000 */
  ARC_X_W(c, 6, (arc_image_bases[1] + UINT64_C(335872)));
  /* c0a0c: adrp x7, #0x52000 */
  ARC_X_W(c, 7, (arc_image_bases[1] + UINT64_C(335872)));
  /* c0a10: adrp x26, #0x52000 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(335872)));
  /* c0a14: stur q0, [x29, #-0x80] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-128)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-128)) + 8, (c)->q[0].u64[1]);
  /* c0a18: ldr q0, [x9, #0x970] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2416))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2416)) + 8));
  /* c0a1c: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c0a20: mov x22, #-0x100 */
  ARC_X_W(c, 22, UINT64_C(18446744073709551360));
  /* c0a24: mov w27, #4 */
  ARC_W_W(c, 27, UINT64_C(4));
  /* c0a28: mov w4, #1 */
  ARC_W_W(c, 4, UINT64_C(1));
  /* c0a2c: stur q0, [x29, #-0x90] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-144)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-144)) + 8, (c)->q[0].u64[1]);
  /* c0a30: ldr q0, [x8, #0xb40] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2880))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2880)) + 8));
  /* c0a34: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c0a38: mov w5, #8 */
  ARC_W_W(c, 5, UINT64_C(8));
  /* c0a3c: mov x28, #-1 */
  ARC_X_W(c, 28, UINT64_C(18446744073709551615));
  /* c0a40: str w3, [sp, #0xac] */
  arc_st32(((c)->sp + INT64_C(172)), ARC_W_R(c, 3));
  /* c0a44: stur q0, [x29, #-0xa0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-160)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-160)) + 8, (c)->q[0].u64[1]);
  /* c0a48: ldr q0, [x8, #0x9f0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2544))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2544)) + 8));
  /* c0a4c: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c0a50: stp q15, q14, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, (c)->q[15].u64[0]);
    arc_st64(_pa + 8, (c)->q[15].u64[1]);
    arc_st64((_pa + 16), (c)->q[14].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[14].u64[1]);
  }
  /* c0a54: stur q0, [x29, #-0xb0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-176)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-176)) + 8, (c)->q[0].u64[1]);
  /* c0a58: ldr q0, [x9, #0x980] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2432)) + 8));
  /* c0a5c: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c0a60: stp q13, q12, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, (c)->q[13].u64[0]);
    arc_st64(_pa + 8, (c)->q[13].u64[1]);
    arc_st64((_pa + 16), (c)->q[12].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[12].u64[1]);
  }
  /* c0a64: stur q0, [x29, #-0xc0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-192)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-192)) + 8, (c)->q[0].u64[1]);
  /* c0a68: ldr q0, [x8, #0xd30] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3376))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3376)) + 8));
  /* c0a6c: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c0a70: stp q11, q10, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, (c)->q[11].u64[0]);
    arc_st64(_pa + 8, (c)->q[11].u64[1]);
    arc_st64((_pa + 16), (c)->q[10].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[10].u64[1]);
  }
  /* c0a74: stur q0, [x29, #-0xd0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-208)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-208)) + 8, (c)->q[0].u64[1]);
  /* c0a78: ldr q0, [x8, #0xb10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2832))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2832)) + 8));
  /* c0a7c: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c0a80: stp q9, q8, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, (c)->q[9].u64[0]);
    arc_st64(_pa + 8, (c)->q[9].u64[1]);
    arc_st64((_pa + 16), (c)->q[8].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[8].u64[1]);
  }
  /* c0a84: stur q0, [x29, #-0xe0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-224)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-224)) + 8, (c)->q[0].u64[1]);
  /* c0a88: ldr q0, [x9, #0xc30] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(3120))), arc_ld64((ARC_X_R(c, 9) + INT64_C(3120)) + 8));
  /* c0a8c: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c0a90: stp q31, q30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, (c)->q[31].u64[0]);
    arc_st64(_pa + 8, (c)->q[31].u64[1]);
    arc_st64((_pa + 16), (c)->q[30].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[30].u64[1]);
  }
  /* c0a94: stur q0, [x29, #-0xf0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-240)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-240)) + 8, (c)->q[0].u64[1]);
  /* c0a98: ldr q0, [x8, #0xd70] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3440))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3440)) + 8));
  /* c0a9c: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c0aa0: stur q0, [x29, #-0x100] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-256)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-256)) + 8, (c)->q[0].u64[1]);
  /* c0aa4: ldr q0, [x8, #0xa60] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2656))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2656)) + 8));
  /* c0aa8: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c0aac: str q0, [sp, #0x120] */
  arc_st64(((c)->sp + INT64_C(288)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(288)) + 8, (c)->q[0].u64[1]);
  /* c0ab0: ldr q0, [x9, #0x9a0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2464))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2464)) + 8));
  /* c0ab4: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c0ab8: str q0, [sp, #0x110] */
  arc_st64(((c)->sp + INT64_C(272)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(272)) + 8, (c)->q[0].u64[1]);
  /* c0abc: ldr q0, [x8, #0xbf0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3056))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3056)) + 8));
  /* c0ac0: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c0ac4: str q0, [sp, #0x100] */
  arc_st64(((c)->sp + INT64_C(256)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(256)) + 8, (c)->q[0].u64[1]);
  /* c0ac8: ldr q0, [x8, #0xbb0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2992))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2992)) + 8));
  /* c0acc: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c0ad0: str q0, [sp, #0xf0] */
  arc_st64(((c)->sp + INT64_C(240)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(240)) + 8, (c)->q[0].u64[1]);
  /* c0ad4: ldr q0, [x9, #0x9b0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2480))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2480)) + 8));
  /* c0ad8: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c0adc: str q0, [sp, #0xe0] */
  arc_st64(((c)->sp + INT64_C(224)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(224)) + 8, (c)->q[0].u64[1]);
  /* c0ae0: ldr q0, [x8, #0xcb0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3248))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3248)) + 8));
  /* c0ae4: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c0ae8: str q0, [sp, #0xd0] */
  arc_st64(((c)->sp + INT64_C(208)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(208)) + 8, (c)->q[0].u64[1]);
  /* c0aec: ldr q0, [x8, #0xb60] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2912))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2912)) + 8));
  /* c0af0: str q0, [sp, #0xc0] */
  arc_st64(((c)->sp + INT64_C(192)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(192)) + 8, (c)->q[0].u64[1]);
  /* c0af4: ldr q0, [x9, #0xb20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2848))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2848)) + 8));
  /* c0af8: str q0, [sp, #0xb0] */
  arc_st64(((c)->sp + INT64_C(176)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(176)) + 8, (c)->q[0].u64[1]);
L_c0afc:;
  /* c0afc: mov x23, x19 */
  ARC_X_W(c, 23, ARC_X_R(c, 19));
L_c0b00:;
  /* c0b00: sub x8, x20, x23 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) - ARC_X_R(c, 23)));
  /* c0b04: mov x19, x23 */
  ARC_X_W(c, 19, ARC_X_R(c, 23));
  /* c0b08: asr x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* c0b0c: subs x9, x8, #2 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2)));
  /* c0b10: b.gt #0xc0b24 */
  if (ARC_COND(c, 12)) goto L_c0b24;
  /* c0b14: b.lo #0xc19f0 */
  if (ARC_COND(c, 3)) goto L_c19f0;
  /* c0b18: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* c0b1c: b.ne #0xc0b3c */
  if (ARC_COND(c, 1)) goto L_c0b3c;
  /* c0b20: b #0xc1914 */
  goto L_c1914;
L_c0b24:;
  /* c0b24: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* c0b28: b.eq #0xc1930 */
  if (ARC_COND(c, 0)) goto L_c1930;
  /* c0b2c: cmp x8, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(4));
  /* c0b30: b.eq #0xc197c */
  if (ARC_COND(c, 0)) goto L_c197c;
  /* c0b34: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* c0b38: b.eq #0xc185c */
  if (ARC_COND(c, 0)) goto L_c185c;
L_c0b3c:;
  /* c0b3c: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* c0b40: b.le #0xc1a24 */
  if (ARC_COND(c, 13)) goto L_c1a24;
  /* c0b44: cbz x21, #0xc1aa0 */
  if ((ARC_X_R(c, 21)) == 0) goto L_c1aa0;
  /* c0b48: lsr x9, x8, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* c0b4c: ldur w10, [x20, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c0b50: cmp x8, #0x81 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(129));
  /* c0b54: add x9, x19, x9, lsl #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 9)) << 2)));
  /* c0b58: b.lo #0xc0c94 */
  if (ARC_COND(c, 3)) goto L_c0c94;
  /* c0b5c: ldr w8, [x9] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 9)));
  /* c0b60: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c0b64: csel w11, w8, w10, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c0b68: csel w8, w8, w10, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c0b6c: stur w11, [x20, #-4] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 11));
  /* c0b70: str w8, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 8));
  /* c0b74: ldur w8, [x20, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c0b78: ldr w10, [x19] */
  ARC_W_W(c, 10, arc_ld32(ARC_X_R(c, 19)));
  /* c0b7c: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c0b80: csel w11, w8, w10, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c0b84: csel w8, w8, w10, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c0b88: stur w11, [x20, #-4] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 11));
  /* c0b8c: ldr w11, [x9] */
  ARC_W_W(c, 11, arc_ld32(ARC_X_R(c, 9)));
  /* c0b90: ldr w10, [x19] */
  ARC_W_W(c, 10, arc_ld32(ARC_X_R(c, 19)));
  /* c0b94: cmp w8, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 11));
  /* c0b98: csel w10, w10, w11, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* c0b9c: str w10, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 10));
  /* c0ba0: ldr w10, [x9] */
  ARC_W_W(c, 10, arc_ld32(ARC_X_R(c, 9)));
  /* c0ba4: csel w8, w10, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c0ba8: str w8, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 8));
  /* c0bac: ldur w8, [x9, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 9) + INT64_C(-4))));
  /* c0bb0: ldur w10, [x20, #-8] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 20) + INT64_C(-8))));
  /* c0bb4: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c0bb8: csel w11, w8, w10, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c0bbc: csel w8, w8, w10, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c0bc0: stur w11, [x20, #-8] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-8)), ARC_W_R(c, 11));
  /* c0bc4: stur w8, [x9, #-4] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(-4)), ARC_W_R(c, 8));
  /* c0bc8: ldur w8, [x20, #-8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(-8))));
  /* c0bcc: ldr w10, [x19, #4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 19) + INT64_C(4))));
  /* c0bd0: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c0bd4: csel w11, w8, w10, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c0bd8: csel w8, w8, w10, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c0bdc: stur w11, [x20, #-8] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-8)), ARC_W_R(c, 11));
  /* c0be0: ldur w11, [x9, #-4] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + INT64_C(-4))));
  /* c0be4: ldr w10, [x19, #4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 19) + INT64_C(4))));
  /* c0be8: cmp w8, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 11));
  /* c0bec: csel w10, w10, w11, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* c0bf0: str w10, [x19, #4] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(4)), ARC_W_R(c, 10));
  /* c0bf4: ldur w10, [x9, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(-4))));
  /* c0bf8: csel w8, w10, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c0bfc: stur w8, [x9, #-4] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(-4)), ARC_W_R(c, 8));
  /* c0c00: ldr w8, [x9, #4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 9) + INT64_C(4))));
  /* c0c04: ldur w10, [x20, #-0xc] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 20) + INT64_C(-12))));
  /* c0c08: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c0c0c: csel w11, w8, w10, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c0c10: csel w8, w8, w10, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c0c14: stur w11, [x20, #-0xc] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-12)), ARC_W_R(c, 11));
  /* c0c18: str w8, [x9, #4] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(4)), ARC_W_R(c, 8));
  /* c0c1c: ldur w8, [x20, #-0xc] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(-12))));
  /* c0c20: ldr w10, [x19, #8] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 19) + INT64_C(8))));
  /* c0c24: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c0c28: csel w11, w8, w10, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c0c2c: csel w8, w8, w10, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c0c30: stur w11, [x20, #-0xc] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-12)), ARC_W_R(c, 11));
  /* c0c34: ldr w11, [x9, #4] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + INT64_C(4))));
  /* c0c38: ldr w10, [x19, #8] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 19) + INT64_C(8))));
  /* c0c3c: cmp w8, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 11));
  /* c0c40: csel w10, w10, w11, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* c0c44: str w10, [x19, #8] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(8)), ARC_W_R(c, 10));
  /* c0c48: ldp w11, w10, [x9] */
  { const uint64_t _pa = ARC_X_R(c, 9);
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* c0c4c: csel w8, w10, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c0c50: ldur w10, [x9, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(-4))));
  /* c0c54: cmp w11, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 8));
  /* c0c58: csel w12, w11, w8, hi */
  ARC_W_W(c, 12, (ARC_COND(c, 8) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 8)));
  /* c0c5c: csel w8, w11, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 8)));
  /* c0c60: cmp w12, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 10));
  /* c0c64: csel w11, w12, w10, lo */
  ARC_W_W(c, 11, (ARC_COND(c, 3) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 10)));
  /* c0c68: csel w12, w12, w10, hi */
  ARC_W_W(c, 12, (ARC_COND(c, 8) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 10)));
  /* c0c6c: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* c0c70: csel w10, w10, w8, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c0c74: csel w8, w8, w11, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 11)));
  /* c0c78: stur w10, [x9, #-4] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(-4)), ARC_W_R(c, 10));
  /* c0c7c: stp w8, w12, [x9] */
  { const uint64_t _pa = ARC_X_R(c, 9);
    arc_st32(_pa, ARC_W_R(c, 8));
    arc_st32(_pa + 4, ARC_W_R(c, 12));
  }
  /* c0c80: ldr w10, [x19] */
  ARC_W_W(c, 10, arc_ld32(ARC_X_R(c, 19)));
  /* c0c84: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* c0c88: str w10, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 10));
  /* c0c8c: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* c0c90: b #0xc0ce4 */
  goto L_c0ce4;
L_c0c94:;
  /* c0c94: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* c0c98: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c0c9c: csel w11, w8, w10, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c0ca0: csel w8, w8, w10, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c0ca4: stur w11, [x20, #-4] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 11));
  /* c0ca8: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* c0cac: ldur w8, [x20, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c0cb0: ldr w10, [x9] */
  ARC_W_W(c, 10, arc_ld32(ARC_X_R(c, 9)));
  /* c0cb4: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c0cb8: csel w11, w8, w10, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c0cbc: csel w8, w8, w10, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c0cc0: stur w11, [x20, #-4] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 11));
  /* c0cc4: ldr w11, [x19] */
  ARC_W_W(c, 11, arc_ld32(ARC_X_R(c, 19)));
  /* c0cc8: ldr w10, [x9] */
  ARC_W_W(c, 10, arc_ld32(ARC_X_R(c, 9)));
  /* c0ccc: cmp w8, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 11));
  /* c0cd0: csel w10, w10, w11, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* c0cd4: str w10, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 10));
  /* c0cd8: ldr w9, [x19] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 19)));
  /* c0cdc: csel w8, w9, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* c0ce0: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_c0ce4:;
  /* c0ce4: ldr w9, [sp, #0xac] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(172))));
  /* c0ce8: sub x21, x21, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) - UINT64_C(1)));
  /* c0cec: tbnz w9, #0, #0xc0cfc */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_c0cfc;
  /* c0cf0: ldur w9, [x19, #-4] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 19) + INT64_C(-4))));
  /* c0cf4: cmp w9, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 8));
  /* c0cf8: b.hs #0xc176c */
  if (ARC_COND(c, 2)) goto L_c176c;
L_c0cfc:;
  /* c0cfc: ldur w9, [x20, #-4] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c0d00: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c0d04: b.hs #0xc0d1c */
  if (ARC_COND(c, 2)) goto L_c0d1c;
  /* c0d08: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
L_c0d0c:;
  /* c0d0c: ldr w10, [x9, #4]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(4));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    ARC_W_W(c, 10, arc_ld32(_a));
  }
  /* c0d10: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c0d14: b.hs #0xc0d0c */
  if (ARC_COND(c, 2)) goto L_c0d0c;
  /* c0d18: b #0xc0d3c */
  goto L_c0d3c;
L_c0d1c:;
  /* c0d1c: add x10, x19, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) + UINT64_C(4)));
L_c0d20:;
  /* c0d20: mov x9, x10 */
  ARC_X_W(c, 9, ARC_X_R(c, 10));
  /* c0d24: cmp x10, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 20));
  /* c0d28: b.hs #0xc0d3c */
  if (ARC_COND(c, 2)) goto L_c0d3c;
  /* c0d2c: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* c0d30: ldr w11, [x10], #4 */
  { const uint64_t _a = ARC_X_R(c, 10);
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(4));
    ARC_W_W(c, 11, arc_ld32(_a));
  }
  /* c0d34: cmp w8, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 11));
  /* c0d38: b.hs #0xc0d20 */
  if (ARC_COND(c, 2)) goto L_c0d20;
L_c0d3c:;
  /* c0d3c: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c0d40: mov x10, x20 */
  ARC_X_W(c, 10, ARC_X_R(c, 20));
  /* c0d44: b.hs #0xc0d58 */
  if (ARC_COND(c, 2)) goto L_c0d58;
  /* c0d48: mov x10, x20 */
  ARC_X_W(c, 10, ARC_X_R(c, 20));
L_c0d4c:;
  /* c0d4c: ldr w11, [x10, #-4]! */
  { const uint64_t _a = (ARC_X_R(c, 10) + INT64_C(-4));
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(-4));
    ARC_W_W(c, 11, arc_ld32(_a));
  }
  /* c0d50: cmp w8, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 11));
  /* c0d54: b.lo #0xc0d4c */
  if (ARC_COND(c, 3)) goto L_c0d4c;
L_c0d58:;
  /* c0d58: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* c0d5c: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
  /* c0d60: b.hs #0xc0d78 */
  if (ARC_COND(c, 2)) goto L_c0d78;
  /* c0d64: ldr w12, [x10] */
  ARC_W_W(c, 12, arc_ld32(ARC_X_R(c, 10)));
  /* c0d68: ldr w13, [x9] */
  ARC_W_W(c, 13, arc_ld32(ARC_X_R(c, 9)));
  /* c0d6c: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
  /* c0d70: str w12, [x11], #4 */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 12));
  }
  /* c0d74: str w13, [x10] */
  arc_st32(ARC_X_R(c, 10), ARC_W_R(c, 13));
L_c0d78:;
  /* c0d78: sub x12, x10, #4 */
  ARC_X_W(c, 12, (ARC_X_R(c, 10) - UINT64_C(4)));
  /* c0d7c: sub x13, x12, x11 */
  ARC_X_W(c, 13, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* c0d80: cmp x13, #0x1f9 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(505));
  /* c0d84: b.lt #0xc1328 */
  if (ARC_COND(c, 11)) goto L_c1328;
  /* c0d88: dup v0.4s, w8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (ARC_W_R(c, 8));
    _t.u32[1] = (ARC_W_R(c, 8));
    _t.u32[2] = (ARC_W_R(c, 8));
    _t.u32[3] = (ARC_W_R(c, 8));
    (c)->q[0] = _t; }
  /* c0d8c: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* c0d90: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* c0d94: b #0xc0dc0 */
  goto L_c0dc0;
L_c0d98:;
  /* c0d98: cmp x13, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(0));
  /* c0d9c: cset w15, eq */
  ARC_W_W(c, 15, (ARC_COND(c, 0) ? 1 : 0));
  /* c0da0: cmp x14, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(0));
  /* c0da4: add x11, x11, x15, lsl #8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 15)) << 8)));
  /* c0da8: csel x15, x22, xzr, eq */
  ARC_X_W(c, 15, (ARC_COND(c, 0) ? (ARC_X_R(c, 22)) : ARC_X_R(c, 31)));
  /* c0dac: cset w16, eq */
  ARC_W_W(c, 16, (ARC_COND(c, 0) ? 1 : 0));
  /* c0db0: add x12, x12, x15 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + ARC_X_R(c, 15)));
  /* c0db4: sub x15, x12, x11 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* c0db8: cmp x15, #0x1f8 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(504));
  /* c0dbc: b.le #0xc1338 */
  if (ARC_COND(c, 13)) goto L_c1338;
L_c0dc0:;
  /* c0dc0: cbz x13, #0xc0dd0 */
  if ((ARC_X_R(c, 13)) == 0) goto L_c0dd0;
  /* c0dc4: cbz x14, #0xc1010 */
  if ((ARC_X_R(c, 14)) == 0) goto L_c1010;
L_c0dc8:;
  /* c0dc8: cbnz x13, #0xc12e4 */
  if ((ARC_X_R(c, 13)) != 0) goto L_c12e4;
  /* c0dcc: b #0xc0d98 */
  goto L_c0d98;
L_c0dd0:;
  /* c0dd0: ldp q1, q2, [x11] */
  { const uint64_t _pa = ARC_X_R(c, 11);
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 2, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c0dd4: ldur q21, [x29, #-0x60] */
  arc_q_w(c, 21, arc_ld64((ARC_X_R(c, 29) + INT64_C(-96))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-96)) + 8));
  /* c0dd8: ldp q3, q4, [x11, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(32));
    arc_q_w(c, 3, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 4, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c0ddc: ldur q25, [x29, #-0x100] */
  arc_q_w(c, 25, arc_ld64((ARC_X_R(c, 29) + INT64_C(-256))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-256)) + 8));
  /* c0de0: ldp q5, q6, [x11, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(64));
    arc_q_w(c, 5, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 6, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c0de4: cmhi v1.4s, v0.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[1].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[1].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[1].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[1].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[1] = _t; }
  /* c0de8: cmhi v2.4s, v0.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[2].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[2].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[2].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[2].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[2] = _t; }
  /* c0dec: cmhi v3.4s, v0.4s, v3.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[3].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[3].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[3].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[3].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[3] = _t; }
  /* c0df0: cmhi v4.4s, v0.4s, v4.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[4].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[4].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[4].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[4].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[4] = _t; }
  /* c0df4: ldp q7, q16, [x11, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(96));
    arc_q_w(c, 7, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 16, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c0df8: cmhi v5.4s, v0.4s, v5.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[5].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[5].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[5].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[5].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[5] = _t; }
  /* c0dfc: ushll v17.2d, v1.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[1].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[1].u32[1]) << 0);
    (c)->q[17] = _t; }
  /* c0e00: ushll2 v1.2d, v1.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[1].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[1].u32[3]) << 0);
    (c)->q[1] = _t; }
  /* c0e04: ushll2 v18.2d, v2.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[2].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[2].u32[3]) << 0);
    (c)->q[18] = _t; }
  /* c0e08: ushll v2.2d, v2.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[2].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[2].u32[1]) << 0);
    (c)->q[2] = _t; }
  /* c0e0c: ushll2 v19.2d, v3.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[3].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[3].u32[3]) << 0);
    (c)->q[19] = _t; }
  /* c0e10: ushll v3.2d, v3.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[3].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[3].u32[1]) << 0);
    (c)->q[3] = _t; }
  /* c0e14: ushll v20.2d, v4.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[4].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[4].u32[1]) << 0);
    (c)->q[20] = _t; }
  /* c0e18: ushll2 v4.2d, v4.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[4].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[4].u32[3]) << 0);
    (c)->q[4] = _t; }
  /* c0e1c: cmhi v7.4s, v0.4s, v7.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[7].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[7].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[7].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[7].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[7] = _t; }
  /* c0e20: bic v1.16b, v21.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] & (~(c)->q[1].u8[0]);
    _t.u8[1] = (c)->q[21].u8[1] & (~(c)->q[1].u8[1]);
    _t.u8[2] = (c)->q[21].u8[2] & (~(c)->q[1].u8[2]);
    _t.u8[3] = (c)->q[21].u8[3] & (~(c)->q[1].u8[3]);
    _t.u8[4] = (c)->q[21].u8[4] & (~(c)->q[1].u8[4]);
    _t.u8[5] = (c)->q[21].u8[5] & (~(c)->q[1].u8[5]);
    _t.u8[6] = (c)->q[21].u8[6] & (~(c)->q[1].u8[6]);
    _t.u8[7] = (c)->q[21].u8[7] & (~(c)->q[1].u8[7]);
    _t.u8[8] = (c)->q[21].u8[8] & (~(c)->q[1].u8[8]);
    _t.u8[9] = (c)->q[21].u8[9] & (~(c)->q[1].u8[9]);
    _t.u8[10] = (c)->q[21].u8[10] & (~(c)->q[1].u8[10]);
    _t.u8[11] = (c)->q[21].u8[11] & (~(c)->q[1].u8[11]);
    _t.u8[12] = (c)->q[21].u8[12] & (~(c)->q[1].u8[12]);
    _t.u8[13] = (c)->q[21].u8[13] & (~(c)->q[1].u8[13]);
    _t.u8[14] = (c)->q[21].u8[14] & (~(c)->q[1].u8[14]);
    _t.u8[15] = (c)->q[21].u8[15] & (~(c)->q[1].u8[15]);
    (c)->q[1] = _t; }
  /* c0e24: bic v17.16b, v30.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[30].u8[0] & (~(c)->q[17].u8[0]);
    _t.u8[1] = (c)->q[30].u8[1] & (~(c)->q[17].u8[1]);
    _t.u8[2] = (c)->q[30].u8[2] & (~(c)->q[17].u8[2]);
    _t.u8[3] = (c)->q[30].u8[3] & (~(c)->q[17].u8[3]);
    _t.u8[4] = (c)->q[30].u8[4] & (~(c)->q[17].u8[4]);
    _t.u8[5] = (c)->q[30].u8[5] & (~(c)->q[17].u8[5]);
    _t.u8[6] = (c)->q[30].u8[6] & (~(c)->q[17].u8[6]);
    _t.u8[7] = (c)->q[30].u8[7] & (~(c)->q[17].u8[7]);
    _t.u8[8] = (c)->q[30].u8[8] & (~(c)->q[17].u8[8]);
    _t.u8[9] = (c)->q[30].u8[9] & (~(c)->q[17].u8[9]);
    _t.u8[10] = (c)->q[30].u8[10] & (~(c)->q[17].u8[10]);
    _t.u8[11] = (c)->q[30].u8[11] & (~(c)->q[17].u8[11]);
    _t.u8[12] = (c)->q[30].u8[12] & (~(c)->q[17].u8[12]);
    _t.u8[13] = (c)->q[30].u8[13] & (~(c)->q[17].u8[13]);
    _t.u8[14] = (c)->q[30].u8[14] & (~(c)->q[17].u8[14]);
    _t.u8[15] = (c)->q[30].u8[15] & (~(c)->q[17].u8[15]);
    (c)->q[17] = _t; }
  /* c0e28: ushll v21.2d, v5.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[1]) << 0);
    (c)->q[21] = _t; }
  /* c0e2c: bic v2.16b, v8.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[8].u8[0] & (~(c)->q[2].u8[0]);
    _t.u8[1] = (c)->q[8].u8[1] & (~(c)->q[2].u8[1]);
    _t.u8[2] = (c)->q[8].u8[2] & (~(c)->q[2].u8[2]);
    _t.u8[3] = (c)->q[8].u8[3] & (~(c)->q[2].u8[3]);
    _t.u8[4] = (c)->q[8].u8[4] & (~(c)->q[2].u8[4]);
    _t.u8[5] = (c)->q[8].u8[5] & (~(c)->q[2].u8[5]);
    _t.u8[6] = (c)->q[8].u8[6] & (~(c)->q[2].u8[6]);
    _t.u8[7] = (c)->q[8].u8[7] & (~(c)->q[2].u8[7]);
    _t.u8[8] = (c)->q[8].u8[8] & (~(c)->q[2].u8[8]);
    _t.u8[9] = (c)->q[8].u8[9] & (~(c)->q[2].u8[9]);
    _t.u8[10] = (c)->q[8].u8[10] & (~(c)->q[2].u8[10]);
    _t.u8[11] = (c)->q[8].u8[11] & (~(c)->q[2].u8[11]);
    _t.u8[12] = (c)->q[8].u8[12] & (~(c)->q[2].u8[12]);
    _t.u8[13] = (c)->q[8].u8[13] & (~(c)->q[2].u8[13]);
    _t.u8[14] = (c)->q[8].u8[14] & (~(c)->q[2].u8[14]);
    _t.u8[15] = (c)->q[8].u8[15] & (~(c)->q[2].u8[15]);
    (c)->q[2] = _t; }
  /* c0e30: bic v19.16b, v9.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[9].u8[0] & (~(c)->q[19].u8[0]);
    _t.u8[1] = (c)->q[9].u8[1] & (~(c)->q[19].u8[1]);
    _t.u8[2] = (c)->q[9].u8[2] & (~(c)->q[19].u8[2]);
    _t.u8[3] = (c)->q[9].u8[3] & (~(c)->q[19].u8[3]);
    _t.u8[4] = (c)->q[9].u8[4] & (~(c)->q[19].u8[4]);
    _t.u8[5] = (c)->q[9].u8[5] & (~(c)->q[19].u8[5]);
    _t.u8[6] = (c)->q[9].u8[6] & (~(c)->q[19].u8[6]);
    _t.u8[7] = (c)->q[9].u8[7] & (~(c)->q[19].u8[7]);
    _t.u8[8] = (c)->q[9].u8[8] & (~(c)->q[19].u8[8]);
    _t.u8[9] = (c)->q[9].u8[9] & (~(c)->q[19].u8[9]);
    _t.u8[10] = (c)->q[9].u8[10] & (~(c)->q[19].u8[10]);
    _t.u8[11] = (c)->q[9].u8[11] & (~(c)->q[19].u8[11]);
    _t.u8[12] = (c)->q[9].u8[12] & (~(c)->q[19].u8[12]);
    _t.u8[13] = (c)->q[9].u8[13] & (~(c)->q[19].u8[13]);
    _t.u8[14] = (c)->q[9].u8[14] & (~(c)->q[19].u8[14]);
    _t.u8[15] = (c)->q[9].u8[15] & (~(c)->q[19].u8[15]);
    (c)->q[19] = _t; }
  /* c0e34: bic v3.16b, v10.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[3].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[3].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[3].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[3].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[3].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[3].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[3].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[3].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[3].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[3].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[3].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[3].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[3].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[3].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[3].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[3].u8[15]);
    (c)->q[3] = _t; }
  /* c0e38: bic v20.16b, v12.16b, v20.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[12].u8[0] & (~(c)->q[20].u8[0]);
    _t.u8[1] = (c)->q[12].u8[1] & (~(c)->q[20].u8[1]);
    _t.u8[2] = (c)->q[12].u8[2] & (~(c)->q[20].u8[2]);
    _t.u8[3] = (c)->q[12].u8[3] & (~(c)->q[20].u8[3]);
    _t.u8[4] = (c)->q[12].u8[4] & (~(c)->q[20].u8[4]);
    _t.u8[5] = (c)->q[12].u8[5] & (~(c)->q[20].u8[5]);
    _t.u8[6] = (c)->q[12].u8[6] & (~(c)->q[20].u8[6]);
    _t.u8[7] = (c)->q[12].u8[7] & (~(c)->q[20].u8[7]);
    _t.u8[8] = (c)->q[12].u8[8] & (~(c)->q[20].u8[8]);
    _t.u8[9] = (c)->q[12].u8[9] & (~(c)->q[20].u8[9]);
    _t.u8[10] = (c)->q[12].u8[10] & (~(c)->q[20].u8[10]);
    _t.u8[11] = (c)->q[12].u8[11] & (~(c)->q[20].u8[11]);
    _t.u8[12] = (c)->q[12].u8[12] & (~(c)->q[20].u8[12]);
    _t.u8[13] = (c)->q[12].u8[13] & (~(c)->q[20].u8[13]);
    _t.u8[14] = (c)->q[12].u8[14] & (~(c)->q[20].u8[14]);
    _t.u8[15] = (c)->q[12].u8[15] & (~(c)->q[20].u8[15]);
    (c)->q[20] = _t; }
  /* c0e3c: cmhi v6.4s, v0.4s, v6.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[6].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[6].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[6].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[6].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[6] = _t; }
  /* c0e40: bic v18.16b, v31.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[31].u8[0] & (~(c)->q[18].u8[0]);
    _t.u8[1] = (c)->q[31].u8[1] & (~(c)->q[18].u8[1]);
    _t.u8[2] = (c)->q[31].u8[2] & (~(c)->q[18].u8[2]);
    _t.u8[3] = (c)->q[31].u8[3] & (~(c)->q[18].u8[3]);
    _t.u8[4] = (c)->q[31].u8[4] & (~(c)->q[18].u8[4]);
    _t.u8[5] = (c)->q[31].u8[5] & (~(c)->q[18].u8[5]);
    _t.u8[6] = (c)->q[31].u8[6] & (~(c)->q[18].u8[6]);
    _t.u8[7] = (c)->q[31].u8[7] & (~(c)->q[18].u8[7]);
    _t.u8[8] = (c)->q[31].u8[8] & (~(c)->q[18].u8[8]);
    _t.u8[9] = (c)->q[31].u8[9] & (~(c)->q[18].u8[9]);
    _t.u8[10] = (c)->q[31].u8[10] & (~(c)->q[18].u8[10]);
    _t.u8[11] = (c)->q[31].u8[11] & (~(c)->q[18].u8[11]);
    _t.u8[12] = (c)->q[31].u8[12] & (~(c)->q[18].u8[12]);
    _t.u8[13] = (c)->q[31].u8[13] & (~(c)->q[18].u8[13]);
    _t.u8[14] = (c)->q[31].u8[14] & (~(c)->q[18].u8[14]);
    _t.u8[15] = (c)->q[31].u8[15] & (~(c)->q[18].u8[15]);
    (c)->q[18] = _t; }
  /* c0e44: bic v4.16b, v11.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[11].u8[0] & (~(c)->q[4].u8[0]);
    _t.u8[1] = (c)->q[11].u8[1] & (~(c)->q[4].u8[1]);
    _t.u8[2] = (c)->q[11].u8[2] & (~(c)->q[4].u8[2]);
    _t.u8[3] = (c)->q[11].u8[3] & (~(c)->q[4].u8[3]);
    _t.u8[4] = (c)->q[11].u8[4] & (~(c)->q[4].u8[4]);
    _t.u8[5] = (c)->q[11].u8[5] & (~(c)->q[4].u8[5]);
    _t.u8[6] = (c)->q[11].u8[6] & (~(c)->q[4].u8[6]);
    _t.u8[7] = (c)->q[11].u8[7] & (~(c)->q[4].u8[7]);
    _t.u8[8] = (c)->q[11].u8[8] & (~(c)->q[4].u8[8]);
    _t.u8[9] = (c)->q[11].u8[9] & (~(c)->q[4].u8[9]);
    _t.u8[10] = (c)->q[11].u8[10] & (~(c)->q[4].u8[10]);
    _t.u8[11] = (c)->q[11].u8[11] & (~(c)->q[4].u8[11]);
    _t.u8[12] = (c)->q[11].u8[12] & (~(c)->q[4].u8[12]);
    _t.u8[13] = (c)->q[11].u8[13] & (~(c)->q[4].u8[13]);
    _t.u8[14] = (c)->q[11].u8[14] & (~(c)->q[4].u8[14]);
    _t.u8[15] = (c)->q[11].u8[15] & (~(c)->q[4].u8[15]);
    (c)->q[4] = _t; }
  /* c0e48: cmhi v16.4s, v0.4s, v16.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[16].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[16].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[16].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[16].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[16] = _t; }
  /* c0e4c: ushll2 v5.2d, v5.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[3]) << 0);
    (c)->q[5] = _t; }
  /* c0e50: ushll v22.2d, v7.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[7].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[7].u32[1]) << 0);
    (c)->q[22] = _t; }
  /* c0e54: ushll2 v7.2d, v7.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[7].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[7].u32[3]) << 0);
    (c)->q[7] = _t; }
  /* c0e58: orr v3.16b, v3.16b, v17.16b */
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
    (c)->q[3] = _t; }
  /* c0e5c: orr v17.16b, v19.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] | (c)->q[1].u8[15];
    (c)->q[17] = _t; }
  /* c0e60: orr v1.16b, v20.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] | (c)->q[2].u8[15];
    (c)->q[1] = _t; }
  /* c0e64: bic v2.16b, v13.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[13].u8[0] & (~(c)->q[21].u8[0]);
    _t.u8[1] = (c)->q[13].u8[1] & (~(c)->q[21].u8[1]);
    _t.u8[2] = (c)->q[13].u8[2] & (~(c)->q[21].u8[2]);
    _t.u8[3] = (c)->q[13].u8[3] & (~(c)->q[21].u8[3]);
    _t.u8[4] = (c)->q[13].u8[4] & (~(c)->q[21].u8[4]);
    _t.u8[5] = (c)->q[13].u8[5] & (~(c)->q[21].u8[5]);
    _t.u8[6] = (c)->q[13].u8[6] & (~(c)->q[21].u8[6]);
    _t.u8[7] = (c)->q[13].u8[7] & (~(c)->q[21].u8[7]);
    _t.u8[8] = (c)->q[13].u8[8] & (~(c)->q[21].u8[8]);
    _t.u8[9] = (c)->q[13].u8[9] & (~(c)->q[21].u8[9]);
    _t.u8[10] = (c)->q[13].u8[10] & (~(c)->q[21].u8[10]);
    _t.u8[11] = (c)->q[13].u8[11] & (~(c)->q[21].u8[11]);
    _t.u8[12] = (c)->q[13].u8[12] & (~(c)->q[21].u8[12]);
    _t.u8[13] = (c)->q[13].u8[13] & (~(c)->q[21].u8[13]);
    _t.u8[14] = (c)->q[13].u8[14] & (~(c)->q[21].u8[14]);
    _t.u8[15] = (c)->q[13].u8[15] & (~(c)->q[21].u8[15]);
    (c)->q[2] = _t; }
  /* c0e68: ldp q21, q23, [x29, #-0x90] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-144));
    arc_q_w(c, 21, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 23, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c0e6c: ushll v19.2d, v6.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[6].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[6].u32[1]) << 0);
    (c)->q[19] = _t; }
  /* c0e70: ushll2 v6.2d, v6.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[6].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[6].u32[3]) << 0);
    (c)->q[6] = _t; }
  /* c0e74: ushll v20.2d, v16.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[16].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[16].u32[1]) << 0);
    (c)->q[20] = _t; }
  /* c0e78: bic v5.16b, v14.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[14].u8[0] & (~(c)->q[5].u8[0]);
    _t.u8[1] = (c)->q[14].u8[1] & (~(c)->q[5].u8[1]);
    _t.u8[2] = (c)->q[14].u8[2] & (~(c)->q[5].u8[2]);
    _t.u8[3] = (c)->q[14].u8[3] & (~(c)->q[5].u8[3]);
    _t.u8[4] = (c)->q[14].u8[4] & (~(c)->q[5].u8[4]);
    _t.u8[5] = (c)->q[14].u8[5] & (~(c)->q[5].u8[5]);
    _t.u8[6] = (c)->q[14].u8[6] & (~(c)->q[5].u8[6]);
    _t.u8[7] = (c)->q[14].u8[7] & (~(c)->q[5].u8[7]);
    _t.u8[8] = (c)->q[14].u8[8] & (~(c)->q[5].u8[8]);
    _t.u8[9] = (c)->q[14].u8[9] & (~(c)->q[5].u8[9]);
    _t.u8[10] = (c)->q[14].u8[10] & (~(c)->q[5].u8[10]);
    _t.u8[11] = (c)->q[14].u8[11] & (~(c)->q[5].u8[11]);
    _t.u8[12] = (c)->q[14].u8[12] & (~(c)->q[5].u8[12]);
    _t.u8[13] = (c)->q[14].u8[13] & (~(c)->q[5].u8[13]);
    _t.u8[14] = (c)->q[14].u8[14] & (~(c)->q[5].u8[14]);
    _t.u8[15] = (c)->q[14].u8[15] & (~(c)->q[5].u8[15]);
    (c)->q[5] = _t; }
  /* c0e7c: orr v4.16b, v4.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] | (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] | (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] | (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] | (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] | (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] | (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] | (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] | (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] | (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] | (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] | (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] | (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] | (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] | (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] | (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] | (c)->q[18].u8[15];
    (c)->q[4] = _t; }
  /* c0e80: ldur q18, [x29, #-0x70] */
  arc_q_w(c, 18, arc_ld64((ARC_X_R(c, 29) + INT64_C(-112))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-112)) + 8));
  /* c0e84: ushll2 v16.2d, v16.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[16].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[16].u32[3]) << 0);
    (c)->q[16] = _t; }
  /* c0e88: bic v7.16b, v23.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] & (~(c)->q[7].u8[0]);
    _t.u8[1] = (c)->q[23].u8[1] & (~(c)->q[7].u8[1]);
    _t.u8[2] = (c)->q[23].u8[2] & (~(c)->q[7].u8[2]);
    _t.u8[3] = (c)->q[23].u8[3] & (~(c)->q[7].u8[3]);
    _t.u8[4] = (c)->q[23].u8[4] & (~(c)->q[7].u8[4]);
    _t.u8[5] = (c)->q[23].u8[5] & (~(c)->q[7].u8[5]);
    _t.u8[6] = (c)->q[23].u8[6] & (~(c)->q[7].u8[6]);
    _t.u8[7] = (c)->q[23].u8[7] & (~(c)->q[7].u8[7]);
    _t.u8[8] = (c)->q[23].u8[8] & (~(c)->q[7].u8[8]);
    _t.u8[9] = (c)->q[23].u8[9] & (~(c)->q[7].u8[9]);
    _t.u8[10] = (c)->q[23].u8[10] & (~(c)->q[7].u8[10]);
    _t.u8[11] = (c)->q[23].u8[11] & (~(c)->q[7].u8[11]);
    _t.u8[12] = (c)->q[23].u8[12] & (~(c)->q[7].u8[12]);
    _t.u8[13] = (c)->q[23].u8[13] & (~(c)->q[7].u8[13]);
    _t.u8[14] = (c)->q[23].u8[14] & (~(c)->q[7].u8[14]);
    _t.u8[15] = (c)->q[23].u8[15] & (~(c)->q[7].u8[15]);
    (c)->q[7] = _t; }
  /* c0e8c: ldr q23, [x11, #0x80] */
  arc_q_w(c, 23, arc_ld64((ARC_X_R(c, 11) + INT64_C(128))), arc_ld64((ARC_X_R(c, 11) + INT64_C(128)) + 8));
  /* c0e90: bic v21.16b, v21.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] & (~(c)->q[22].u8[0]);
    _t.u8[1] = (c)->q[21].u8[1] & (~(c)->q[22].u8[1]);
    _t.u8[2] = (c)->q[21].u8[2] & (~(c)->q[22].u8[2]);
    _t.u8[3] = (c)->q[21].u8[3] & (~(c)->q[22].u8[3]);
    _t.u8[4] = (c)->q[21].u8[4] & (~(c)->q[22].u8[4]);
    _t.u8[5] = (c)->q[21].u8[5] & (~(c)->q[22].u8[5]);
    _t.u8[6] = (c)->q[21].u8[6] & (~(c)->q[22].u8[6]);
    _t.u8[7] = (c)->q[21].u8[7] & (~(c)->q[22].u8[7]);
    _t.u8[8] = (c)->q[21].u8[8] & (~(c)->q[22].u8[8]);
    _t.u8[9] = (c)->q[21].u8[9] & (~(c)->q[22].u8[9]);
    _t.u8[10] = (c)->q[21].u8[10] & (~(c)->q[22].u8[10]);
    _t.u8[11] = (c)->q[21].u8[11] & (~(c)->q[22].u8[11]);
    _t.u8[12] = (c)->q[21].u8[12] & (~(c)->q[22].u8[12]);
    _t.u8[13] = (c)->q[21].u8[13] & (~(c)->q[22].u8[13]);
    _t.u8[14] = (c)->q[21].u8[14] & (~(c)->q[22].u8[14]);
    _t.u8[15] = (c)->q[21].u8[15] & (~(c)->q[22].u8[15]);
    (c)->q[21] = _t; }
  /* c0e94: ldur q22, [x29, #-0xb0] */
  arc_q_w(c, 22, arc_ld64((ARC_X_R(c, 29) + INT64_C(-176))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-176)) + 8));
  /* c0e98: bic v6.16b, v18.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] & (~(c)->q[6].u8[0]);
    _t.u8[1] = (c)->q[18].u8[1] & (~(c)->q[6].u8[1]);
    _t.u8[2] = (c)->q[18].u8[2] & (~(c)->q[6].u8[2]);
    _t.u8[3] = (c)->q[18].u8[3] & (~(c)->q[6].u8[3]);
    _t.u8[4] = (c)->q[18].u8[4] & (~(c)->q[6].u8[4]);
    _t.u8[5] = (c)->q[18].u8[5] & (~(c)->q[6].u8[5]);
    _t.u8[6] = (c)->q[18].u8[6] & (~(c)->q[6].u8[6]);
    _t.u8[7] = (c)->q[18].u8[7] & (~(c)->q[6].u8[7]);
    _t.u8[8] = (c)->q[18].u8[8] & (~(c)->q[6].u8[8]);
    _t.u8[9] = (c)->q[18].u8[9] & (~(c)->q[6].u8[9]);
    _t.u8[10] = (c)->q[18].u8[10] & (~(c)->q[6].u8[10]);
    _t.u8[11] = (c)->q[18].u8[11] & (~(c)->q[6].u8[11]);
    _t.u8[12] = (c)->q[18].u8[12] & (~(c)->q[6].u8[12]);
    _t.u8[13] = (c)->q[18].u8[13] & (~(c)->q[6].u8[13]);
    _t.u8[14] = (c)->q[18].u8[14] & (~(c)->q[6].u8[14]);
    _t.u8[15] = (c)->q[18].u8[15] & (~(c)->q[6].u8[15]);
    (c)->q[6] = _t; }
  /* c0e9c: ldur q18, [x29, #-0xa0] */
  arc_q_w(c, 18, arc_ld64((ARC_X_R(c, 29) + INT64_C(-160))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-160)) + 8));
  /* c0ea0: bic v19.16b, v15.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[15].u8[0] & (~(c)->q[19].u8[0]);
    _t.u8[1] = (c)->q[15].u8[1] & (~(c)->q[19].u8[1]);
    _t.u8[2] = (c)->q[15].u8[2] & (~(c)->q[19].u8[2]);
    _t.u8[3] = (c)->q[15].u8[3] & (~(c)->q[19].u8[3]);
    _t.u8[4] = (c)->q[15].u8[4] & (~(c)->q[19].u8[4]);
    _t.u8[5] = (c)->q[15].u8[5] & (~(c)->q[19].u8[5]);
    _t.u8[6] = (c)->q[15].u8[6] & (~(c)->q[19].u8[6]);
    _t.u8[7] = (c)->q[15].u8[7] & (~(c)->q[19].u8[7]);
    _t.u8[8] = (c)->q[15].u8[8] & (~(c)->q[19].u8[8]);
    _t.u8[9] = (c)->q[15].u8[9] & (~(c)->q[19].u8[9]);
    _t.u8[10] = (c)->q[15].u8[10] & (~(c)->q[19].u8[10]);
    _t.u8[11] = (c)->q[15].u8[11] & (~(c)->q[19].u8[11]);
    _t.u8[12] = (c)->q[15].u8[12] & (~(c)->q[19].u8[12]);
    _t.u8[13] = (c)->q[15].u8[13] & (~(c)->q[19].u8[13]);
    _t.u8[14] = (c)->q[15].u8[14] & (~(c)->q[19].u8[14]);
    _t.u8[15] = (c)->q[15].u8[15] & (~(c)->q[19].u8[15]);
    (c)->q[19] = _t; }
  /* c0ea4: bic v20.16b, v22.16b, v20.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0] & (~(c)->q[20].u8[0]);
    _t.u8[1] = (c)->q[22].u8[1] & (~(c)->q[20].u8[1]);
    _t.u8[2] = (c)->q[22].u8[2] & (~(c)->q[20].u8[2]);
    _t.u8[3] = (c)->q[22].u8[3] & (~(c)->q[20].u8[3]);
    _t.u8[4] = (c)->q[22].u8[4] & (~(c)->q[20].u8[4]);
    _t.u8[5] = (c)->q[22].u8[5] & (~(c)->q[20].u8[5]);
    _t.u8[6] = (c)->q[22].u8[6] & (~(c)->q[20].u8[6]);
    _t.u8[7] = (c)->q[22].u8[7] & (~(c)->q[20].u8[7]);
    _t.u8[8] = (c)->q[22].u8[8] & (~(c)->q[20].u8[8]);
    _t.u8[9] = (c)->q[22].u8[9] & (~(c)->q[20].u8[9]);
    _t.u8[10] = (c)->q[22].u8[10] & (~(c)->q[20].u8[10]);
    _t.u8[11] = (c)->q[22].u8[11] & (~(c)->q[20].u8[11]);
    _t.u8[12] = (c)->q[22].u8[12] & (~(c)->q[20].u8[12]);
    _t.u8[13] = (c)->q[22].u8[13] & (~(c)->q[20].u8[13]);
    _t.u8[14] = (c)->q[22].u8[14] & (~(c)->q[20].u8[14]);
    _t.u8[15] = (c)->q[22].u8[15] & (~(c)->q[20].u8[15]);
    (c)->q[20] = _t; }
  /* c0ea8: orr v5.16b, v7.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] | (c)->q[5].u8[15];
    (c)->q[5] = _t; }
  /* c0eac: orr v2.16b, v21.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* c0eb0: ldp q7, q22, [x11, #0x90] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(144));
    arc_q_w(c, 7, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 22, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c0eb4: cmhi v21.4s, v0.4s, v23.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[23].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[23].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[23].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[23].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[21] = _t; }
  /* c0eb8: bic v16.16b, v18.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] & (~(c)->q[16].u8[0]);
    _t.u8[1] = (c)->q[18].u8[1] & (~(c)->q[16].u8[1]);
    _t.u8[2] = (c)->q[18].u8[2] & (~(c)->q[16].u8[2]);
    _t.u8[3] = (c)->q[18].u8[3] & (~(c)->q[16].u8[3]);
    _t.u8[4] = (c)->q[18].u8[4] & (~(c)->q[16].u8[4]);
    _t.u8[5] = (c)->q[18].u8[5] & (~(c)->q[16].u8[5]);
    _t.u8[6] = (c)->q[18].u8[6] & (~(c)->q[16].u8[6]);
    _t.u8[7] = (c)->q[18].u8[7] & (~(c)->q[16].u8[7]);
    _t.u8[8] = (c)->q[18].u8[8] & (~(c)->q[16].u8[8]);
    _t.u8[9] = (c)->q[18].u8[9] & (~(c)->q[16].u8[9]);
    _t.u8[10] = (c)->q[18].u8[10] & (~(c)->q[16].u8[10]);
    _t.u8[11] = (c)->q[18].u8[11] & (~(c)->q[16].u8[11]);
    _t.u8[12] = (c)->q[18].u8[12] & (~(c)->q[16].u8[12]);
    _t.u8[13] = (c)->q[18].u8[13] & (~(c)->q[16].u8[13]);
    _t.u8[14] = (c)->q[18].u8[14] & (~(c)->q[16].u8[14]);
    _t.u8[15] = (c)->q[18].u8[15] & (~(c)->q[16].u8[15]);
    (c)->q[16] = _t; }
  /* c0ebc: orr v2.16b, v2.16b, v3.16b */
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
  /* c0ec0: orr v3.16b, v5.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] | (c)->q[17].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] | (c)->q[17].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] | (c)->q[17].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] | (c)->q[17].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] | (c)->q[17].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] | (c)->q[17].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] | (c)->q[17].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] | (c)->q[17].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] | (c)->q[17].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] | (c)->q[17].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] | (c)->q[17].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] | (c)->q[17].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] | (c)->q[17].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] | (c)->q[17].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] | (c)->q[17].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] | (c)->q[17].u8[15];
    (c)->q[3] = _t; }
  /* c0ec4: orr v5.16b, v20.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] | (c)->q[19].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] | (c)->q[19].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] | (c)->q[19].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] | (c)->q[19].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] | (c)->q[19].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] | (c)->q[19].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] | (c)->q[19].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] | (c)->q[19].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] | (c)->q[19].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] | (c)->q[19].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] | (c)->q[19].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] | (c)->q[19].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] | (c)->q[19].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] | (c)->q[19].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] | (c)->q[19].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] | (c)->q[19].u8[15];
    (c)->q[5] = _t; }
  /* c0ec8: cmhi v22.4s, v0.4s, v22.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[22].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[22].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[22].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[22].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[22] = _t; }
  /* c0ecc: sshll v17.2d, v21.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[21].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[21].i32[1]) << 0);
    (c)->q[17] = _t; }
  /* c0ed0: cmhi v7.4s, v0.4s, v7.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[7].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[7].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[7].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[7].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[7] = _t; }
  /* c0ed4: orr v6.16b, v16.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] | (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] | (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] | (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] | (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] | (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] | (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] | (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] | (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] | (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] | (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] | (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] | (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] | (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] | (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] | (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] | (c)->q[6].u8[15];
    (c)->q[6] = _t; }
  /* c0ed8: ldp q24, q16, [x29, #-0xd0] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-208));
    arc_q_w(c, 24, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 16, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c0edc: ldp q23, q19, [x11, #0xb0] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(176));
    arc_q_w(c, 23, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 19, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c0ee0: sshll2 v20.2d, v21.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[21].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[21].i32[3]) << 0);
    (c)->q[20] = _t; }
  /* c0ee4: sshll v18.2d, v22.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[22].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[22].i32[1]) << 0);
    (c)->q[18] = _t; }
  /* c0ee8: sshll2 v22.2d, v22.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[22].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[22].i32[3]) << 0);
    (c)->q[22] = _t; }
  /* c0eec: orr v1.16b, v5.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* c0ef0: bic v16.16b, v16.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] & (~(c)->q[17].u8[0]);
    _t.u8[1] = (c)->q[16].u8[1] & (~(c)->q[17].u8[1]);
    _t.u8[2] = (c)->q[16].u8[2] & (~(c)->q[17].u8[2]);
    _t.u8[3] = (c)->q[16].u8[3] & (~(c)->q[17].u8[3]);
    _t.u8[4] = (c)->q[16].u8[4] & (~(c)->q[17].u8[4]);
    _t.u8[5] = (c)->q[16].u8[5] & (~(c)->q[17].u8[5]);
    _t.u8[6] = (c)->q[16].u8[6] & (~(c)->q[17].u8[6]);
    _t.u8[7] = (c)->q[16].u8[7] & (~(c)->q[17].u8[7]);
    _t.u8[8] = (c)->q[16].u8[8] & (~(c)->q[17].u8[8]);
    _t.u8[9] = (c)->q[16].u8[9] & (~(c)->q[17].u8[9]);
    _t.u8[10] = (c)->q[16].u8[10] & (~(c)->q[17].u8[10]);
    _t.u8[11] = (c)->q[16].u8[11] & (~(c)->q[17].u8[11]);
    _t.u8[12] = (c)->q[16].u8[12] & (~(c)->q[17].u8[12]);
    _t.u8[13] = (c)->q[16].u8[13] & (~(c)->q[17].u8[13]);
    _t.u8[14] = (c)->q[16].u8[14] & (~(c)->q[17].u8[14]);
    _t.u8[15] = (c)->q[16].u8[15] & (~(c)->q[17].u8[15]);
    (c)->q[16] = _t; }
  /* c0ef4: ldr q17, [sp, #0x120] */
  arc_q_w(c, 17, arc_ld64(((c)->sp + INT64_C(288))), arc_ld64(((c)->sp + INT64_C(288)) + 8));
  /* c0ef8: orr v4.16b, v6.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[6].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[6].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[6].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[6].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[6].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[6].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[6].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[6].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[6].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[6].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[6].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[6].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[6].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[6].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[6].u8[15] | (c)->q[4].u8[15];
    (c)->q[4] = _t; }
  /* c0efc: cmhi v21.4s, v0.4s, v23.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[23].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[23].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[23].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[23].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[21] = _t; }
  /* c0f00: cmhi v19.4s, v0.4s, v19.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[19].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[19].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[19].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[19].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[19] = _t; }
  /* c0f04: ldr q23, [x11, #0xd0] */
  arc_q_w(c, 23, arc_ld64((ARC_X_R(c, 11) + INT64_C(208))), arc_ld64((ARC_X_R(c, 11) + INT64_C(208)) + 8));
  /* c0f08: bic v17.16b, v17.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] & (~(c)->q[18].u8[0]);
    _t.u8[1] = (c)->q[17].u8[1] & (~(c)->q[18].u8[1]);
    _t.u8[2] = (c)->q[17].u8[2] & (~(c)->q[18].u8[2]);
    _t.u8[3] = (c)->q[17].u8[3] & (~(c)->q[18].u8[3]);
    _t.u8[4] = (c)->q[17].u8[4] & (~(c)->q[18].u8[4]);
    _t.u8[5] = (c)->q[17].u8[5] & (~(c)->q[18].u8[5]);
    _t.u8[6] = (c)->q[17].u8[6] & (~(c)->q[18].u8[6]);
    _t.u8[7] = (c)->q[17].u8[7] & (~(c)->q[18].u8[7]);
    _t.u8[8] = (c)->q[17].u8[8] & (~(c)->q[18].u8[8]);
    _t.u8[9] = (c)->q[17].u8[9] & (~(c)->q[18].u8[9]);
    _t.u8[10] = (c)->q[17].u8[10] & (~(c)->q[18].u8[10]);
    _t.u8[11] = (c)->q[17].u8[11] & (~(c)->q[18].u8[11]);
    _t.u8[12] = (c)->q[17].u8[12] & (~(c)->q[18].u8[12]);
    _t.u8[13] = (c)->q[17].u8[13] & (~(c)->q[18].u8[13]);
    _t.u8[14] = (c)->q[17].u8[14] & (~(c)->q[18].u8[14]);
    _t.u8[15] = (c)->q[17].u8[15] & (~(c)->q[18].u8[15]);
    (c)->q[17] = _t; }
  /* c0f0c: sshll2 v18.2d, v7.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[7].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[7].i32[3]) << 0);
    (c)->q[18] = _t; }
  /* c0f10: bic v20.16b, v24.16b, v20.16b */
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
  /* c0f14: bic v22.16b, v25.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[0] & (~(c)->q[22].u8[0]);
    _t.u8[1] = (c)->q[25].u8[1] & (~(c)->q[22].u8[1]);
    _t.u8[2] = (c)->q[25].u8[2] & (~(c)->q[22].u8[2]);
    _t.u8[3] = (c)->q[25].u8[3] & (~(c)->q[22].u8[3]);
    _t.u8[4] = (c)->q[25].u8[4] & (~(c)->q[22].u8[4]);
    _t.u8[5] = (c)->q[25].u8[5] & (~(c)->q[22].u8[5]);
    _t.u8[6] = (c)->q[25].u8[6] & (~(c)->q[22].u8[6]);
    _t.u8[7] = (c)->q[25].u8[7] & (~(c)->q[22].u8[7]);
    _t.u8[8] = (c)->q[25].u8[8] & (~(c)->q[22].u8[8]);
    _t.u8[9] = (c)->q[25].u8[9] & (~(c)->q[22].u8[9]);
    _t.u8[10] = (c)->q[25].u8[10] & (~(c)->q[22].u8[10]);
    _t.u8[11] = (c)->q[25].u8[11] & (~(c)->q[22].u8[11]);
    _t.u8[12] = (c)->q[25].u8[12] & (~(c)->q[22].u8[12]);
    _t.u8[13] = (c)->q[25].u8[13] & (~(c)->q[22].u8[13]);
    _t.u8[14] = (c)->q[25].u8[14] & (~(c)->q[22].u8[14]);
    _t.u8[15] = (c)->q[25].u8[15] & (~(c)->q[22].u8[15]);
    (c)->q[22] = _t; }
  /* c0f18: sshll v7.2d, v7.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[7].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[7].i32[1]) << 0);
    (c)->q[7] = _t; }
  /* c0f1c: cmhi v23.4s, v0.4s, v23.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[23].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[23].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[23].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[23].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[23] = _t; }
  /* c0f20: sshll2 v24.2d, v21.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[21].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[21].i32[3]) << 0);
    (c)->q[24] = _t; }
  /* c0f24: sshll2 v25.2d, v19.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[19].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[19].i32[3]) << 0);
    (c)->q[25] = _t; }
  /* c0f28: sshll v19.2d, v19.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[19].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[19].i32[1]) << 0);
    (c)->q[19] = _t; }
  /* c0f2c: orr v16.16b, v17.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] | (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[17].u8[1] | (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[17].u8[2] | (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[17].u8[3] | (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[17].u8[4] | (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[17].u8[5] | (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[17].u8[6] | (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[17].u8[7] | (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[17].u8[8] | (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[17].u8[9] | (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[17].u8[10] | (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[17].u8[11] | (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[17].u8[12] | (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[17].u8[13] | (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[17].u8[14] | (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[17].u8[15] | (c)->q[16].u8[15];
    (c)->q[16] = _t; }
  /* c0f30: sshll v17.2d, v21.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[21].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[21].i32[1]) << 0);
    (c)->q[17] = _t; }
  /* c0f34: ldur q21, [x29, #-0xf0] */
  arc_q_w(c, 21, arc_ld64((ARC_X_R(c, 29) + INT64_C(-240))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-240)) + 8));
  /* c0f38: orr v20.16b, v22.16b, v20.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0] | (c)->q[20].u8[0];
    _t.u8[1] = (c)->q[22].u8[1] | (c)->q[20].u8[1];
    _t.u8[2] = (c)->q[22].u8[2] | (c)->q[20].u8[2];
    _t.u8[3] = (c)->q[22].u8[3] | (c)->q[20].u8[3];
    _t.u8[4] = (c)->q[22].u8[4] | (c)->q[20].u8[4];
    _t.u8[5] = (c)->q[22].u8[5] | (c)->q[20].u8[5];
    _t.u8[6] = (c)->q[22].u8[6] | (c)->q[20].u8[6];
    _t.u8[7] = (c)->q[22].u8[7] | (c)->q[20].u8[7];
    _t.u8[8] = (c)->q[22].u8[8] | (c)->q[20].u8[8];
    _t.u8[9] = (c)->q[22].u8[9] | (c)->q[20].u8[9];
    _t.u8[10] = (c)->q[22].u8[10] | (c)->q[20].u8[10];
    _t.u8[11] = (c)->q[22].u8[11] | (c)->q[20].u8[11];
    _t.u8[12] = (c)->q[22].u8[12] | (c)->q[20].u8[12];
    _t.u8[13] = (c)->q[22].u8[13] | (c)->q[20].u8[13];
    _t.u8[14] = (c)->q[22].u8[14] | (c)->q[20].u8[14];
    _t.u8[15] = (c)->q[22].u8[15] | (c)->q[20].u8[15];
    (c)->q[20] = _t; }
  /* c0f3c: sshll2 v22.2d, v23.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[3]) << 0);
    (c)->q[22] = _t; }
  /* c0f40: sshll v23.2d, v23.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[1]) << 0);
    (c)->q[23] = _t; }
  /* c0f44: bic v18.16b, v21.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] & (~(c)->q[18].u8[0]);
    _t.u8[1] = (c)->q[21].u8[1] & (~(c)->q[18].u8[1]);
    _t.u8[2] = (c)->q[21].u8[2] & (~(c)->q[18].u8[2]);
    _t.u8[3] = (c)->q[21].u8[3] & (~(c)->q[18].u8[3]);
    _t.u8[4] = (c)->q[21].u8[4] & (~(c)->q[18].u8[4]);
    _t.u8[5] = (c)->q[21].u8[5] & (~(c)->q[18].u8[5]);
    _t.u8[6] = (c)->q[21].u8[6] & (~(c)->q[18].u8[6]);
    _t.u8[7] = (c)->q[21].u8[7] & (~(c)->q[18].u8[7]);
    _t.u8[8] = (c)->q[21].u8[8] & (~(c)->q[18].u8[8]);
    _t.u8[9] = (c)->q[21].u8[9] & (~(c)->q[18].u8[9]);
    _t.u8[10] = (c)->q[21].u8[10] & (~(c)->q[18].u8[10]);
    _t.u8[11] = (c)->q[21].u8[11] & (~(c)->q[18].u8[11]);
    _t.u8[12] = (c)->q[21].u8[12] & (~(c)->q[18].u8[12]);
    _t.u8[13] = (c)->q[21].u8[13] & (~(c)->q[18].u8[13]);
    _t.u8[14] = (c)->q[21].u8[14] & (~(c)->q[18].u8[14]);
    _t.u8[15] = (c)->q[21].u8[15] & (~(c)->q[18].u8[15]);
    (c)->q[18] = _t; }
  /* c0f48: ldr q21, [sp, #0x110] */
  arc_q_w(c, 21, arc_ld64(((c)->sp + INT64_C(272))), arc_ld64(((c)->sp + INT64_C(272)) + 8));
  /* c0f4c: bic v21.16b, v21.16b, v24.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] & (~(c)->q[24].u8[0]);
    _t.u8[1] = (c)->q[21].u8[1] & (~(c)->q[24].u8[1]);
    _t.u8[2] = (c)->q[21].u8[2] & (~(c)->q[24].u8[2]);
    _t.u8[3] = (c)->q[21].u8[3] & (~(c)->q[24].u8[3]);
    _t.u8[4] = (c)->q[21].u8[4] & (~(c)->q[24].u8[4]);
    _t.u8[5] = (c)->q[21].u8[5] & (~(c)->q[24].u8[5]);
    _t.u8[6] = (c)->q[21].u8[6] & (~(c)->q[24].u8[6]);
    _t.u8[7] = (c)->q[21].u8[7] & (~(c)->q[24].u8[7]);
    _t.u8[8] = (c)->q[21].u8[8] & (~(c)->q[24].u8[8]);
    _t.u8[9] = (c)->q[21].u8[9] & (~(c)->q[24].u8[9]);
    _t.u8[10] = (c)->q[21].u8[10] & (~(c)->q[24].u8[10]);
    _t.u8[11] = (c)->q[21].u8[11] & (~(c)->q[24].u8[11]);
    _t.u8[12] = (c)->q[21].u8[12] & (~(c)->q[24].u8[12]);
    _t.u8[13] = (c)->q[21].u8[13] & (~(c)->q[24].u8[13]);
    _t.u8[14] = (c)->q[21].u8[14] & (~(c)->q[24].u8[14]);
    _t.u8[15] = (c)->q[21].u8[15] & (~(c)->q[24].u8[15]);
    (c)->q[21] = _t; }
  /* c0f50: ldr q24, [sp, #0xe0] */
  arc_q_w(c, 24, arc_ld64(((c)->sp + INT64_C(224))), arc_ld64(((c)->sp + INT64_C(224)) + 8));
  /* c0f54: bic v24.16b, v24.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] & (~(c)->q[25].u8[0]);
    _t.u8[1] = (c)->q[24].u8[1] & (~(c)->q[25].u8[1]);
    _t.u8[2] = (c)->q[24].u8[2] & (~(c)->q[25].u8[2]);
    _t.u8[3] = (c)->q[24].u8[3] & (~(c)->q[25].u8[3]);
    _t.u8[4] = (c)->q[24].u8[4] & (~(c)->q[25].u8[4]);
    _t.u8[5] = (c)->q[24].u8[5] & (~(c)->q[25].u8[5]);
    _t.u8[6] = (c)->q[24].u8[6] & (~(c)->q[25].u8[6]);
    _t.u8[7] = (c)->q[24].u8[7] & (~(c)->q[25].u8[7]);
    _t.u8[8] = (c)->q[24].u8[8] & (~(c)->q[25].u8[8]);
    _t.u8[9] = (c)->q[24].u8[9] & (~(c)->q[25].u8[9]);
    _t.u8[10] = (c)->q[24].u8[10] & (~(c)->q[25].u8[10]);
    _t.u8[11] = (c)->q[24].u8[11] & (~(c)->q[25].u8[11]);
    _t.u8[12] = (c)->q[24].u8[12] & (~(c)->q[25].u8[12]);
    _t.u8[13] = (c)->q[24].u8[13] & (~(c)->q[25].u8[13]);
    _t.u8[14] = (c)->q[24].u8[14] & (~(c)->q[25].u8[14]);
    _t.u8[15] = (c)->q[24].u8[15] & (~(c)->q[25].u8[15]);
    (c)->q[24] = _t; }
  /* c0f58: ldur q25, [x29, #-0xe0] */
  arc_q_w(c, 25, arc_ld64((ARC_X_R(c, 29) + INT64_C(-224))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-224)) + 8));
  /* c0f5c: orr v18.16b, v21.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] | (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] | (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] | (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] | (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] | (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] | (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] | (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] | (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] | (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] | (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] | (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] | (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] | (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] | (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] | (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] | (c)->q[18].u8[15];
    (c)->q[18] = _t; }
  /* c0f60: ldr q21, [sp, #0xf0] */
  arc_q_w(c, 21, arc_ld64(((c)->sp + INT64_C(240))), arc_ld64(((c)->sp + INT64_C(240)) + 8));
  /* c0f64: bic v7.16b, v25.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[0] & (~(c)->q[7].u8[0]);
    _t.u8[1] = (c)->q[25].u8[1] & (~(c)->q[7].u8[1]);
    _t.u8[2] = (c)->q[25].u8[2] & (~(c)->q[7].u8[2]);
    _t.u8[3] = (c)->q[25].u8[3] & (~(c)->q[7].u8[3]);
    _t.u8[4] = (c)->q[25].u8[4] & (~(c)->q[7].u8[4]);
    _t.u8[5] = (c)->q[25].u8[5] & (~(c)->q[7].u8[5]);
    _t.u8[6] = (c)->q[25].u8[6] & (~(c)->q[7].u8[6]);
    _t.u8[7] = (c)->q[25].u8[7] & (~(c)->q[7].u8[7]);
    _t.u8[8] = (c)->q[25].u8[8] & (~(c)->q[7].u8[8]);
    _t.u8[9] = (c)->q[25].u8[9] & (~(c)->q[7].u8[9]);
    _t.u8[10] = (c)->q[25].u8[10] & (~(c)->q[7].u8[10]);
    _t.u8[11] = (c)->q[25].u8[11] & (~(c)->q[7].u8[11]);
    _t.u8[12] = (c)->q[25].u8[12] & (~(c)->q[7].u8[12]);
    _t.u8[13] = (c)->q[25].u8[13] & (~(c)->q[7].u8[13]);
    _t.u8[14] = (c)->q[25].u8[14] & (~(c)->q[7].u8[14]);
    _t.u8[15] = (c)->q[25].u8[15] & (~(c)->q[7].u8[15]);
    (c)->q[7] = _t; }
  /* c0f68: ldr q25, [sp, #0x100] */
  arc_q_w(c, 25, arc_ld64(((c)->sp + INT64_C(256))), arc_ld64(((c)->sp + INT64_C(256)) + 8));
  /* c0f6c: bic v19.16b, v21.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] & (~(c)->q[19].u8[0]);
    _t.u8[1] = (c)->q[21].u8[1] & (~(c)->q[19].u8[1]);
    _t.u8[2] = (c)->q[21].u8[2] & (~(c)->q[19].u8[2]);
    _t.u8[3] = (c)->q[21].u8[3] & (~(c)->q[19].u8[3]);
    _t.u8[4] = (c)->q[21].u8[4] & (~(c)->q[19].u8[4]);
    _t.u8[5] = (c)->q[21].u8[5] & (~(c)->q[19].u8[5]);
    _t.u8[6] = (c)->q[21].u8[6] & (~(c)->q[19].u8[6]);
    _t.u8[7] = (c)->q[21].u8[7] & (~(c)->q[19].u8[7]);
    _t.u8[8] = (c)->q[21].u8[8] & (~(c)->q[19].u8[8]);
    _t.u8[9] = (c)->q[21].u8[9] & (~(c)->q[19].u8[9]);
    _t.u8[10] = (c)->q[21].u8[10] & (~(c)->q[19].u8[10]);
    _t.u8[11] = (c)->q[21].u8[11] & (~(c)->q[19].u8[11]);
    _t.u8[12] = (c)->q[21].u8[12] & (~(c)->q[19].u8[12]);
    _t.u8[13] = (c)->q[21].u8[13] & (~(c)->q[19].u8[13]);
    _t.u8[14] = (c)->q[21].u8[14] & (~(c)->q[19].u8[14]);
    _t.u8[15] = (c)->q[21].u8[15] & (~(c)->q[19].u8[15]);
    (c)->q[19] = _t; }
  /* c0f70: orr v20.16b, v24.16b, v20.16b */
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
    (c)->q[20] = _t; }
  /* c0f74: bic v17.16b, v25.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[0] & (~(c)->q[17].u8[0]);
    _t.u8[1] = (c)->q[25].u8[1] & (~(c)->q[17].u8[1]);
    _t.u8[2] = (c)->q[25].u8[2] & (~(c)->q[17].u8[2]);
    _t.u8[3] = (c)->q[25].u8[3] & (~(c)->q[17].u8[3]);
    _t.u8[4] = (c)->q[25].u8[4] & (~(c)->q[17].u8[4]);
    _t.u8[5] = (c)->q[25].u8[5] & (~(c)->q[17].u8[5]);
    _t.u8[6] = (c)->q[25].u8[6] & (~(c)->q[17].u8[6]);
    _t.u8[7] = (c)->q[25].u8[7] & (~(c)->q[17].u8[7]);
    _t.u8[8] = (c)->q[25].u8[8] & (~(c)->q[17].u8[8]);
    _t.u8[9] = (c)->q[25].u8[9] & (~(c)->q[17].u8[9]);
    _t.u8[10] = (c)->q[25].u8[10] & (~(c)->q[17].u8[10]);
    _t.u8[11] = (c)->q[25].u8[11] & (~(c)->q[17].u8[11]);
    _t.u8[12] = (c)->q[25].u8[12] & (~(c)->q[17].u8[12]);
    _t.u8[13] = (c)->q[25].u8[13] & (~(c)->q[17].u8[13]);
    _t.u8[14] = (c)->q[25].u8[14] & (~(c)->q[17].u8[14]);
    _t.u8[15] = (c)->q[25].u8[15] & (~(c)->q[17].u8[15]);
    (c)->q[17] = _t; }
  /* c0f78: ldr q25, [sp, #0xc0] */
  arc_q_w(c, 25, arc_ld64(((c)->sp + INT64_C(192))), arc_ld64(((c)->sp + INT64_C(192)) + 8));
  /* c0f7c: ldp q21, q24, [x11, #0xe0] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(224));
    arc_q_w(c, 21, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 24, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c0f80: bic v22.16b, v25.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[0] & (~(c)->q[22].u8[0]);
    _t.u8[1] = (c)->q[25].u8[1] & (~(c)->q[22].u8[1]);
    _t.u8[2] = (c)->q[25].u8[2] & (~(c)->q[22].u8[2]);
    _t.u8[3] = (c)->q[25].u8[3] & (~(c)->q[22].u8[3]);
    _t.u8[4] = (c)->q[25].u8[4] & (~(c)->q[22].u8[4]);
    _t.u8[5] = (c)->q[25].u8[5] & (~(c)->q[22].u8[5]);
    _t.u8[6] = (c)->q[25].u8[6] & (~(c)->q[22].u8[6]);
    _t.u8[7] = (c)->q[25].u8[7] & (~(c)->q[22].u8[7]);
    _t.u8[8] = (c)->q[25].u8[8] & (~(c)->q[22].u8[8]);
    _t.u8[9] = (c)->q[25].u8[9] & (~(c)->q[22].u8[9]);
    _t.u8[10] = (c)->q[25].u8[10] & (~(c)->q[22].u8[10]);
    _t.u8[11] = (c)->q[25].u8[11] & (~(c)->q[22].u8[11]);
    _t.u8[12] = (c)->q[25].u8[12] & (~(c)->q[22].u8[12]);
    _t.u8[13] = (c)->q[25].u8[13] & (~(c)->q[22].u8[13]);
    _t.u8[14] = (c)->q[25].u8[14] & (~(c)->q[22].u8[14]);
    _t.u8[15] = (c)->q[25].u8[15] & (~(c)->q[22].u8[15]);
    (c)->q[22] = _t; }
  /* c0f84: orr v6.16b, v19.16b, v16.16b */
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
    (c)->q[6] = _t; }
  /* c0f88: orr v3.16b, v20.16b, v3.16b */
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
  /* c0f8c: orr v7.16b, v17.16b, v7.16b */
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
  /* c0f90: ldr q17, [sp, #0xd0] */
  arc_q_w(c, 17, arc_ld64(((c)->sp + INT64_C(208))), arc_ld64(((c)->sp + INT64_C(208)) + 8));
  /* c0f94: ldr q20, [x6, #0xc80] */
  arc_q_w(c, 20, arc_ld64((ARC_X_R(c, 6) + INT64_C(3200))), arc_ld64((ARC_X_R(c, 6) + INT64_C(3200)) + 8));
  /* c0f98: cmhi v21.4s, v0.4s, v21.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[21].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[21].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[21].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[21].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[21] = _t; }
  /* c0f9c: cmhi v5.4s, v0.4s, v24.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[24].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[24].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[24].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[24].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[5] = _t; }
  /* c0fa0: bic v17.16b, v17.16b, v23.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] & (~(c)->q[23].u8[0]);
    _t.u8[1] = (c)->q[17].u8[1] & (~(c)->q[23].u8[1]);
    _t.u8[2] = (c)->q[17].u8[2] & (~(c)->q[23].u8[2]);
    _t.u8[3] = (c)->q[17].u8[3] & (~(c)->q[23].u8[3]);
    _t.u8[4] = (c)->q[17].u8[4] & (~(c)->q[23].u8[4]);
    _t.u8[5] = (c)->q[17].u8[5] & (~(c)->q[23].u8[5]);
    _t.u8[6] = (c)->q[17].u8[6] & (~(c)->q[23].u8[6]);
    _t.u8[7] = (c)->q[17].u8[7] & (~(c)->q[23].u8[7]);
    _t.u8[8] = (c)->q[17].u8[8] & (~(c)->q[23].u8[8]);
    _t.u8[9] = (c)->q[17].u8[9] & (~(c)->q[23].u8[9]);
    _t.u8[10] = (c)->q[17].u8[10] & (~(c)->q[23].u8[10]);
    _t.u8[11] = (c)->q[17].u8[11] & (~(c)->q[23].u8[11]);
    _t.u8[12] = (c)->q[17].u8[12] & (~(c)->q[23].u8[12]);
    _t.u8[13] = (c)->q[17].u8[13] & (~(c)->q[23].u8[13]);
    _t.u8[14] = (c)->q[17].u8[14] & (~(c)->q[23].u8[14]);
    _t.u8[15] = (c)->q[17].u8[15] & (~(c)->q[23].u8[15]);
    (c)->q[17] = _t; }
  /* c0fa4: orr v16.16b, v22.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0] | (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[22].u8[1] | (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[22].u8[2] | (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[22].u8[3] | (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[22].u8[4] | (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[22].u8[5] | (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[22].u8[6] | (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[22].u8[7] | (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[22].u8[8] | (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[22].u8[9] | (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[22].u8[10] | (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[22].u8[11] | (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[22].u8[12] | (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[22].u8[13] | (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[22].u8[14] | (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[22].u8[15] | (c)->q[18].u8[15];
    (c)->q[16] = _t; }
  /* c0fa8: orr v2.16b, v6.16b, v2.16b */
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
  /* c0fac: ldr q6, [x7, #0xa00] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 7) + INT64_C(2560))), arc_ld64((ARC_X_R(c, 7) + INT64_C(2560)) + 8));
  /* c0fb0: sshll2 v18.2d, v21.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[21].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[21].i32[3]) << 0);
    (c)->q[18] = _t; }
  /* c0fb4: sshll v19.2d, v5.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[5].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[5].i32[1]) << 0);
    (c)->q[19] = _t; }
  /* c0fb8: sshll2 v5.2d, v5.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[5].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[5].i32[3]) << 0);
    (c)->q[5] = _t; }
  /* c0fbc: orr v7.16b, v17.16b, v7.16b */
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
  /* c0fc0: sshll v17.2d, v21.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[21].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[21].i32[1]) << 0);
    (c)->q[17] = _t; }
  /* c0fc4: ldr q21, [x26, #0xc40] */
  arc_q_w(c, 21, arc_ld64((ARC_X_R(c, 26) + INT64_C(3136))), arc_ld64((ARC_X_R(c, 26) + INT64_C(3136)) + 8));
  /* c0fc8: orr v4.16b, v16.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] | (c)->q[4].u8[15];
    (c)->q[4] = _t; }
  /* c0fcc: ldr q16, [sp, #0xb0] */
  arc_q_w(c, 16, arc_ld64(((c)->sp + INT64_C(176))), arc_ld64(((c)->sp + INT64_C(176)) + 8));
  /* c0fd0: bic v5.16b, v6.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] & (~(c)->q[5].u8[0]);
    _t.u8[1] = (c)->q[6].u8[1] & (~(c)->q[5].u8[1]);
    _t.u8[2] = (c)->q[6].u8[2] & (~(c)->q[5].u8[2]);
    _t.u8[3] = (c)->q[6].u8[3] & (~(c)->q[5].u8[3]);
    _t.u8[4] = (c)->q[6].u8[4] & (~(c)->q[5].u8[4]);
    _t.u8[5] = (c)->q[6].u8[5] & (~(c)->q[5].u8[5]);
    _t.u8[6] = (c)->q[6].u8[6] & (~(c)->q[5].u8[6]);
    _t.u8[7] = (c)->q[6].u8[7] & (~(c)->q[5].u8[7]);
    _t.u8[8] = (c)->q[6].u8[8] & (~(c)->q[5].u8[8]);
    _t.u8[9] = (c)->q[6].u8[9] & (~(c)->q[5].u8[9]);
    _t.u8[10] = (c)->q[6].u8[10] & (~(c)->q[5].u8[10]);
    _t.u8[11] = (c)->q[6].u8[11] & (~(c)->q[5].u8[11]);
    _t.u8[12] = (c)->q[6].u8[12] & (~(c)->q[5].u8[12]);
    _t.u8[13] = (c)->q[6].u8[13] & (~(c)->q[5].u8[13]);
    _t.u8[14] = (c)->q[6].u8[14] & (~(c)->q[5].u8[14]);
    _t.u8[15] = (c)->q[6].u8[15] & (~(c)->q[5].u8[15]);
    (c)->q[5] = _t; }
  /* c0fd4: bic v6.16b, v21.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] & (~(c)->q[19].u8[0]);
    _t.u8[1] = (c)->q[21].u8[1] & (~(c)->q[19].u8[1]);
    _t.u8[2] = (c)->q[21].u8[2] & (~(c)->q[19].u8[2]);
    _t.u8[3] = (c)->q[21].u8[3] & (~(c)->q[19].u8[3]);
    _t.u8[4] = (c)->q[21].u8[4] & (~(c)->q[19].u8[4]);
    _t.u8[5] = (c)->q[21].u8[5] & (~(c)->q[19].u8[5]);
    _t.u8[6] = (c)->q[21].u8[6] & (~(c)->q[19].u8[6]);
    _t.u8[7] = (c)->q[21].u8[7] & (~(c)->q[19].u8[7]);
    _t.u8[8] = (c)->q[21].u8[8] & (~(c)->q[19].u8[8]);
    _t.u8[9] = (c)->q[21].u8[9] & (~(c)->q[19].u8[9]);
    _t.u8[10] = (c)->q[21].u8[10] & (~(c)->q[19].u8[10]);
    _t.u8[11] = (c)->q[21].u8[11] & (~(c)->q[19].u8[11]);
    _t.u8[12] = (c)->q[21].u8[12] & (~(c)->q[19].u8[12]);
    _t.u8[13] = (c)->q[21].u8[13] & (~(c)->q[19].u8[13]);
    _t.u8[14] = (c)->q[21].u8[14] & (~(c)->q[19].u8[14]);
    _t.u8[15] = (c)->q[21].u8[15] & (~(c)->q[19].u8[15]);
    (c)->q[6] = _t; }
  /* c0fd8: orr v1.16b, v7.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* c0fdc: bic v7.16b, v20.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] & (~(c)->q[17].u8[0]);
    _t.u8[1] = (c)->q[20].u8[1] & (~(c)->q[17].u8[1]);
    _t.u8[2] = (c)->q[20].u8[2] & (~(c)->q[17].u8[2]);
    _t.u8[3] = (c)->q[20].u8[3] & (~(c)->q[17].u8[3]);
    _t.u8[4] = (c)->q[20].u8[4] & (~(c)->q[17].u8[4]);
    _t.u8[5] = (c)->q[20].u8[5] & (~(c)->q[17].u8[5]);
    _t.u8[6] = (c)->q[20].u8[6] & (~(c)->q[17].u8[6]);
    _t.u8[7] = (c)->q[20].u8[7] & (~(c)->q[17].u8[7]);
    _t.u8[8] = (c)->q[20].u8[8] & (~(c)->q[17].u8[8]);
    _t.u8[9] = (c)->q[20].u8[9] & (~(c)->q[17].u8[9]);
    _t.u8[10] = (c)->q[20].u8[10] & (~(c)->q[17].u8[10]);
    _t.u8[11] = (c)->q[20].u8[11] & (~(c)->q[17].u8[11]);
    _t.u8[12] = (c)->q[20].u8[12] & (~(c)->q[17].u8[12]);
    _t.u8[13] = (c)->q[20].u8[13] & (~(c)->q[17].u8[13]);
    _t.u8[14] = (c)->q[20].u8[14] & (~(c)->q[17].u8[14]);
    _t.u8[15] = (c)->q[20].u8[15] & (~(c)->q[17].u8[15]);
    (c)->q[7] = _t; }
  /* c0fe0: bic v16.16b, v16.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] & (~(c)->q[18].u8[0]);
    _t.u8[1] = (c)->q[16].u8[1] & (~(c)->q[18].u8[1]);
    _t.u8[2] = (c)->q[16].u8[2] & (~(c)->q[18].u8[2]);
    _t.u8[3] = (c)->q[16].u8[3] & (~(c)->q[18].u8[3]);
    _t.u8[4] = (c)->q[16].u8[4] & (~(c)->q[18].u8[4]);
    _t.u8[5] = (c)->q[16].u8[5] & (~(c)->q[18].u8[5]);
    _t.u8[6] = (c)->q[16].u8[6] & (~(c)->q[18].u8[6]);
    _t.u8[7] = (c)->q[16].u8[7] & (~(c)->q[18].u8[7]);
    _t.u8[8] = (c)->q[16].u8[8] & (~(c)->q[18].u8[8]);
    _t.u8[9] = (c)->q[16].u8[9] & (~(c)->q[18].u8[9]);
    _t.u8[10] = (c)->q[16].u8[10] & (~(c)->q[18].u8[10]);
    _t.u8[11] = (c)->q[16].u8[11] & (~(c)->q[18].u8[11]);
    _t.u8[12] = (c)->q[16].u8[12] & (~(c)->q[18].u8[12]);
    _t.u8[13] = (c)->q[16].u8[13] & (~(c)->q[18].u8[13]);
    _t.u8[14] = (c)->q[16].u8[14] & (~(c)->q[18].u8[14]);
    _t.u8[15] = (c)->q[16].u8[15] & (~(c)->q[18].u8[15]);
    (c)->q[16] = _t; }
  /* c0fe4: orr v4.16b, v5.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] | (c)->q[4].u8[15];
    (c)->q[4] = _t; }
  /* c0fe8: orr v2.16b, v7.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* c0fec: orr v3.16b, v16.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* c0ff0: orr v1.16b, v6.16b, v1.16b */
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
  /* c0ff4: orr v3.16b, v4.16b, v3.16b */
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
  /* c0ff8: orr v1.16b, v1.16b, v2.16b */
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
  /* c0ffc: orr v1.16b, v1.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[1].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[1].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[1].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[1].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[1].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[1].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[1].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[1].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[1].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[1].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[1].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[1].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[1].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[1].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[1].u8[15] | (c)->q[3].u8[15];
    (c)->q[1] = _t; }
  /* c1000: ext v2.16b, v1.16b, v1.16b, #8 */
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
  /* c1004: orr v1.8b, v1.8b, v2.8b */
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
  /* c1008: fmov x13, d1 */
  ARC_X_W(c, 13, ARC_DU_R(c, 1));
  /* c100c: cbnz x14, #0xc0dc8 */
  if ((ARC_X_R(c, 14)) != 0) goto L_c0dc8;
L_c1010:;
  /* c1010: ldur q1, [x12, #-0xc] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 12) + INT64_C(-12))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-12)) + 8));
  /* c1014: ldur q2, [x12, #-0x2c] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 12) + INT64_C(-44))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-44)) + 8));
  /* c1018: ldur q3, [x12, #-0x1c] */
  arc_q_w(c, 3, arc_ld64((ARC_X_R(c, 12) + INT64_C(-28))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-28)) + 8));
  /* c101c: ldur q4, [x12, #-0x3c] */
  arc_q_w(c, 4, arc_ld64((ARC_X_R(c, 12) + INT64_C(-60))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-60)) + 8));
  /* c1020: ldur q5, [x12, #-0x4c] */
  arc_q_w(c, 5, arc_ld64((ARC_X_R(c, 12) + INT64_C(-76))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-76)) + 8));
  /* c1024: ldur q6, [x12, #-0x5c] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 12) + INT64_C(-92))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-92)) + 8));
  /* c1028: rev64 v1.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[1].u32[1];
    _t.u32[1] = (c)->q[1].u32[0];
    _t.u32[2] = (c)->q[1].u32[3];
    _t.u32[3] = (c)->q[1].u32[2];
    (c)->q[1] = _t; }
  /* c102c: rev64 v2.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[2].u32[1];
    _t.u32[1] = (c)->q[2].u32[0];
    _t.u32[2] = (c)->q[2].u32[3];
    _t.u32[3] = (c)->q[2].u32[2];
    (c)->q[2] = _t; }
  /* c1030: rev64 v3.4s, v3.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[3].u32[1];
    _t.u32[1] = (c)->q[3].u32[0];
    _t.u32[2] = (c)->q[3].u32[3];
    _t.u32[3] = (c)->q[3].u32[2];
    (c)->q[3] = _t; }
  /* c1034: rev64 v4.4s, v4.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[4].u32[1];
    _t.u32[1] = (c)->q[4].u32[0];
    _t.u32[2] = (c)->q[4].u32[3];
    _t.u32[3] = (c)->q[4].u32[2];
    (c)->q[4] = _t; }
  /* c1038: rev64 v5.4s, v5.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[5].u32[1];
    _t.u32[1] = (c)->q[5].u32[0];
    _t.u32[2] = (c)->q[5].u32[3];
    _t.u32[3] = (c)->q[5].u32[2];
    (c)->q[5] = _t; }
  /* c103c: ldur q7, [x12, #-0x6c] */
  arc_q_w(c, 7, arc_ld64((ARC_X_R(c, 12) + INT64_C(-108))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-108)) + 8));
  /* c1040: rev64 v6.4s, v6.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[6].u32[1];
    _t.u32[1] = (c)->q[6].u32[0];
    _t.u32[2] = (c)->q[6].u32[3];
    _t.u32[3] = (c)->q[6].u32[2];
    (c)->q[6] = _t; }
  /* c1044: ldur q16, [x12, #-0x7c] */
  arc_q_w(c, 16, arc_ld64((ARC_X_R(c, 12) + INT64_C(-124))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-124)) + 8));
  /* c1048: ldur q22, [x29, #-0x60] */
  arc_q_w(c, 22, arc_ld64((ARC_X_R(c, 29) + INT64_C(-96))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-96)) + 8));
  /* c104c: rev64 v7.4s, v7.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[7].u32[1];
    _t.u32[1] = (c)->q[7].u32[0];
    _t.u32[2] = (c)->q[7].u32[3];
    _t.u32[3] = (c)->q[7].u32[2];
    (c)->q[7] = _t; }
  /* c1050: ldur q17, [x12, #-0x8c] */
  arc_q_w(c, 17, arc_ld64((ARC_X_R(c, 12) + INT64_C(-140))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-140)) + 8));
  /* c1054: ldur q28, [x29, #-0x100] */
  arc_q_w(c, 28, arc_ld64((ARC_X_R(c, 29) + INT64_C(-256))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-256)) + 8));
  /* c1058: ext v1.16b, v1.16b, v1.16b, #8 */
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
  /* c105c: ext v2.16b, v2.16b, v2.16b, #8 */
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
  /* c1060: ext v3.16b, v3.16b, v3.16b, #8 */
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
  /* c1064: ext v4.16b, v4.16b, v4.16b, #8 */
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
  /* c1068: ext v5.16b, v5.16b, v5.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[8];
    _t.u8[1] = (c)->q[5].u8[9];
    _t.u8[2] = (c)->q[5].u8[10];
    _t.u8[3] = (c)->q[5].u8[11];
    _t.u8[4] = (c)->q[5].u8[12];
    _t.u8[5] = (c)->q[5].u8[13];
    _t.u8[6] = (c)->q[5].u8[14];
    _t.u8[7] = (c)->q[5].u8[15];
    _t.u8[8] = (c)->q[5].u8[0];
    _t.u8[9] = (c)->q[5].u8[1];
    _t.u8[10] = (c)->q[5].u8[2];
    _t.u8[11] = (c)->q[5].u8[3];
    _t.u8[12] = (c)->q[5].u8[4];
    _t.u8[13] = (c)->q[5].u8[5];
    _t.u8[14] = (c)->q[5].u8[6];
    _t.u8[15] = (c)->q[5].u8[7];
    (c)->q[5] = _t; }
  /* c106c: rev64 v16.4s, v16.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[16].u32[1];
    _t.u32[1] = (c)->q[16].u32[0];
    _t.u32[2] = (c)->q[16].u32[3];
    _t.u32[3] = (c)->q[16].u32[2];
    (c)->q[16] = _t; }
  /* c1070: ext v6.16b, v6.16b, v6.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[8];
    _t.u8[1] = (c)->q[6].u8[9];
    _t.u8[2] = (c)->q[6].u8[10];
    _t.u8[3] = (c)->q[6].u8[11];
    _t.u8[4] = (c)->q[6].u8[12];
    _t.u8[5] = (c)->q[6].u8[13];
    _t.u8[6] = (c)->q[6].u8[14];
    _t.u8[7] = (c)->q[6].u8[15];
    _t.u8[8] = (c)->q[6].u8[0];
    _t.u8[9] = (c)->q[6].u8[1];
    _t.u8[10] = (c)->q[6].u8[2];
    _t.u8[11] = (c)->q[6].u8[3];
    _t.u8[12] = (c)->q[6].u8[4];
    _t.u8[13] = (c)->q[6].u8[5];
    _t.u8[14] = (c)->q[6].u8[6];
    _t.u8[15] = (c)->q[6].u8[7];
    (c)->q[6] = _t; }
  /* c1074: ldp q25, q26, [x29, #-0x90] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-144));
    arc_q_w(c, 25, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 26, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c1078: ext v7.16b, v7.16b, v7.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[8];
    _t.u8[1] = (c)->q[7].u8[9];
    _t.u8[2] = (c)->q[7].u8[10];
    _t.u8[3] = (c)->q[7].u8[11];
    _t.u8[4] = (c)->q[7].u8[12];
    _t.u8[5] = (c)->q[7].u8[13];
    _t.u8[6] = (c)->q[7].u8[14];
    _t.u8[7] = (c)->q[7].u8[15];
    _t.u8[8] = (c)->q[7].u8[0];
    _t.u8[9] = (c)->q[7].u8[1];
    _t.u8[10] = (c)->q[7].u8[2];
    _t.u8[11] = (c)->q[7].u8[3];
    _t.u8[12] = (c)->q[7].u8[4];
    _t.u8[13] = (c)->q[7].u8[5];
    _t.u8[14] = (c)->q[7].u8[6];
    _t.u8[15] = (c)->q[7].u8[7];
    (c)->q[7] = _t; }
  /* c107c: rev64 v17.4s, v17.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[17].u32[1];
    _t.u32[1] = (c)->q[17].u32[0];
    _t.u32[2] = (c)->q[17].u32[3];
    _t.u32[3] = (c)->q[17].u32[2];
    (c)->q[17] = _t; }
  /* c1080: cmhi v1.4s, v0.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[1].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[1].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[1].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[1].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[1] = _t; }
  /* c1084: cmhi v2.4s, v0.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[2].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[2].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[2].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[2].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[2] = _t; }
  /* c1088: cmhi v3.4s, v0.4s, v3.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[3].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[3].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[3].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[3].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[3] = _t; }
  /* c108c: cmhi v4.4s, v0.4s, v4.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[4].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[4].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[4].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[4].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[4] = _t; }
  /* c1090: cmhi v5.4s, v0.4s, v5.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[5].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[5].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[5].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[5].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[5] = _t; }
  /* c1094: ext v16.16b, v16.16b, v16.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[8];
    _t.u8[1] = (c)->q[16].u8[9];
    _t.u8[2] = (c)->q[16].u8[10];
    _t.u8[3] = (c)->q[16].u8[11];
    _t.u8[4] = (c)->q[16].u8[12];
    _t.u8[5] = (c)->q[16].u8[13];
    _t.u8[6] = (c)->q[16].u8[14];
    _t.u8[7] = (c)->q[16].u8[15];
    _t.u8[8] = (c)->q[16].u8[0];
    _t.u8[9] = (c)->q[16].u8[1];
    _t.u8[10] = (c)->q[16].u8[2];
    _t.u8[11] = (c)->q[16].u8[3];
    _t.u8[12] = (c)->q[16].u8[4];
    _t.u8[13] = (c)->q[16].u8[5];
    _t.u8[14] = (c)->q[16].u8[6];
    _t.u8[15] = (c)->q[16].u8[7];
    (c)->q[16] = _t; }
  /* c1098: cmhi v6.4s, v0.4s, v6.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[6].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[6].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[6].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[6].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[6] = _t; }
  /* c109c: ushll2 v18.2d, v1.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[1].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[1].u32[3]) << 0);
    (c)->q[18] = _t; }
  /* c10a0: ushll v19.2d, v2.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[2].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[2].u32[1]) << 0);
    (c)->q[19] = _t; }
  /* c10a4: ushll2 v2.2d, v2.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[2].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[2].u32[3]) << 0);
    (c)->q[2] = _t; }
  /* c10a8: ushll v1.2d, v1.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[1].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[1].u32[1]) << 0);
    (c)->q[1] = _t; }
  /* c10ac: ushll v20.2d, v3.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[3].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[3].u32[1]) << 0);
    (c)->q[20] = _t; }
  /* c10b0: ushll v21.2d, v4.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[4].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[4].u32[1]) << 0);
    (c)->q[21] = _t; }
  /* c10b4: ushll2 v3.2d, v3.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[3].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[3].u32[3]) << 0);
    (c)->q[3] = _t; }
  /* c10b8: ushll2 v4.2d, v4.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[4].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[4].u32[3]) << 0);
    (c)->q[4] = _t; }
  /* c10bc: cmhi v7.4s, v0.4s, v7.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[7].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[7].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[7].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[7].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[7] = _t; }
  /* c10c0: and v18.16b, v18.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] & (c)->q[22].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] & (c)->q[22].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] & (c)->q[22].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] & (c)->q[22].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] & (c)->q[22].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] & (c)->q[22].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] & (c)->q[22].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] & (c)->q[22].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] & (c)->q[22].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] & (c)->q[22].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] & (c)->q[22].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] & (c)->q[22].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] & (c)->q[22].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] & (c)->q[22].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] & (c)->q[22].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] & (c)->q[22].u8[15];
    (c)->q[18] = _t; }
  /* c10c4: and v2.16b, v2.16b, v9.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] & (c)->q[9].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] & (c)->q[9].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] & (c)->q[9].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] & (c)->q[9].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] & (c)->q[9].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] & (c)->q[9].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] & (c)->q[9].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] & (c)->q[9].u8[7];
    _t.u8[8] = (c)->q[2].u8[8] & (c)->q[9].u8[8];
    _t.u8[9] = (c)->q[2].u8[9] & (c)->q[9].u8[9];
    _t.u8[10] = (c)->q[2].u8[10] & (c)->q[9].u8[10];
    _t.u8[11] = (c)->q[2].u8[11] & (c)->q[9].u8[11];
    _t.u8[12] = (c)->q[2].u8[12] & (c)->q[9].u8[12];
    _t.u8[13] = (c)->q[2].u8[13] & (c)->q[9].u8[13];
    _t.u8[14] = (c)->q[2].u8[14] & (c)->q[9].u8[14];
    _t.u8[15] = (c)->q[2].u8[15] & (c)->q[9].u8[15];
    (c)->q[2] = _t; }
  /* c10c8: and v19.16b, v19.16b, v10.16b */
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
  /* c10cc: and v1.16b, v1.16b, v30.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[0] & (c)->q[30].u8[0];
    _t.u8[1] = (c)->q[1].u8[1] & (c)->q[30].u8[1];
    _t.u8[2] = (c)->q[1].u8[2] & (c)->q[30].u8[2];
    _t.u8[3] = (c)->q[1].u8[3] & (c)->q[30].u8[3];
    _t.u8[4] = (c)->q[1].u8[4] & (c)->q[30].u8[4];
    _t.u8[5] = (c)->q[1].u8[5] & (c)->q[30].u8[5];
    _t.u8[6] = (c)->q[1].u8[6] & (c)->q[30].u8[6];
    _t.u8[7] = (c)->q[1].u8[7] & (c)->q[30].u8[7];
    _t.u8[8] = (c)->q[1].u8[8] & (c)->q[30].u8[8];
    _t.u8[9] = (c)->q[1].u8[9] & (c)->q[30].u8[9];
    _t.u8[10] = (c)->q[1].u8[10] & (c)->q[30].u8[10];
    _t.u8[11] = (c)->q[1].u8[11] & (c)->q[30].u8[11];
    _t.u8[12] = (c)->q[1].u8[12] & (c)->q[30].u8[12];
    _t.u8[13] = (c)->q[1].u8[13] & (c)->q[30].u8[13];
    _t.u8[14] = (c)->q[1].u8[14] & (c)->q[30].u8[14];
    _t.u8[15] = (c)->q[1].u8[15] & (c)->q[30].u8[15];
    (c)->q[1] = _t; }
  /* c10d0: ushll v22.2d, v5.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[1]) << 0);
    (c)->q[22] = _t; }
  /* c10d4: and v20.16b, v20.16b, v8.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] & (c)->q[8].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] & (c)->q[8].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] & (c)->q[8].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] & (c)->q[8].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] & (c)->q[8].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] & (c)->q[8].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] & (c)->q[8].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] & (c)->q[8].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] & (c)->q[8].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] & (c)->q[8].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] & (c)->q[8].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] & (c)->q[8].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] & (c)->q[8].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] & (c)->q[8].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] & (c)->q[8].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] & (c)->q[8].u8[15];
    (c)->q[20] = _t; }
  /* c10d8: and v21.16b, v21.16b, v12.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] & (c)->q[12].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] & (c)->q[12].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] & (c)->q[12].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] & (c)->q[12].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] & (c)->q[12].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] & (c)->q[12].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] & (c)->q[12].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] & (c)->q[12].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] & (c)->q[12].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] & (c)->q[12].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] & (c)->q[12].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] & (c)->q[12].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] & (c)->q[12].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] & (c)->q[12].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] & (c)->q[12].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] & (c)->q[12].u8[15];
    (c)->q[21] = _t; }
  /* c10dc: and v23.16b, v3.16b, v31.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[3].u8[0] & (c)->q[31].u8[0];
    _t.u8[1] = (c)->q[3].u8[1] & (c)->q[31].u8[1];
    _t.u8[2] = (c)->q[3].u8[2] & (c)->q[31].u8[2];
    _t.u8[3] = (c)->q[3].u8[3] & (c)->q[31].u8[3];
    _t.u8[4] = (c)->q[3].u8[4] & (c)->q[31].u8[4];
    _t.u8[5] = (c)->q[3].u8[5] & (c)->q[31].u8[5];
    _t.u8[6] = (c)->q[3].u8[6] & (c)->q[31].u8[6];
    _t.u8[7] = (c)->q[3].u8[7] & (c)->q[31].u8[7];
    _t.u8[8] = (c)->q[3].u8[8] & (c)->q[31].u8[8];
    _t.u8[9] = (c)->q[3].u8[9] & (c)->q[31].u8[9];
    _t.u8[10] = (c)->q[3].u8[10] & (c)->q[31].u8[10];
    _t.u8[11] = (c)->q[3].u8[11] & (c)->q[31].u8[11];
    _t.u8[12] = (c)->q[3].u8[12] & (c)->q[31].u8[12];
    _t.u8[13] = (c)->q[3].u8[13] & (c)->q[31].u8[13];
    _t.u8[14] = (c)->q[3].u8[14] & (c)->q[31].u8[14];
    _t.u8[15] = (c)->q[3].u8[15] & (c)->q[31].u8[15];
    (c)->q[23] = _t; }
  /* c10e0: and v24.16b, v4.16b, v11.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] & (c)->q[11].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] & (c)->q[11].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] & (c)->q[11].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] & (c)->q[11].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] & (c)->q[11].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] & (c)->q[11].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] & (c)->q[11].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] & (c)->q[11].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] & (c)->q[11].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] & (c)->q[11].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] & (c)->q[11].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] & (c)->q[11].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] & (c)->q[11].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] & (c)->q[11].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] & (c)->q[11].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] & (c)->q[11].u8[15];
    (c)->q[24] = _t; }
  /* c10e4: orr v4.16b, v2.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] | (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] | (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] | (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] | (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] | (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] | (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] | (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] | (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[2].u8[8] | (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[2].u8[9] | (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[2].u8[10] | (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[2].u8[11] | (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[2].u8[12] | (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[2].u8[13] | (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[2].u8[14] | (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[2].u8[15] | (c)->q[18].u8[15];
    (c)->q[4] = _t; }
  /* c10e8: ushll2 v5.2d, v5.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[3]) << 0);
    (c)->q[5] = _t; }
  /* c10ec: ushll2 v18.2d, v6.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[6].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[6].u32[3]) << 0);
    (c)->q[18] = _t; }
  /* c10f0: ushll v6.2d, v6.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[6].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[6].u32[1]) << 0);
    (c)->q[6] = _t; }
  /* c10f4: orr v3.16b, v19.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] | (c)->q[1].u8[15];
    (c)->q[3] = _t; }
  /* c10f8: and v19.16b, v22.16b, v13.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0] & (c)->q[13].u8[0];
    _t.u8[1] = (c)->q[22].u8[1] & (c)->q[13].u8[1];
    _t.u8[2] = (c)->q[22].u8[2] & (c)->q[13].u8[2];
    _t.u8[3] = (c)->q[22].u8[3] & (c)->q[13].u8[3];
    _t.u8[4] = (c)->q[22].u8[4] & (c)->q[13].u8[4];
    _t.u8[5] = (c)->q[22].u8[5] & (c)->q[13].u8[5];
    _t.u8[6] = (c)->q[22].u8[6] & (c)->q[13].u8[6];
    _t.u8[7] = (c)->q[22].u8[7] & (c)->q[13].u8[7];
    _t.u8[8] = (c)->q[22].u8[8] & (c)->q[13].u8[8];
    _t.u8[9] = (c)->q[22].u8[9] & (c)->q[13].u8[9];
    _t.u8[10] = (c)->q[22].u8[10] & (c)->q[13].u8[10];
    _t.u8[11] = (c)->q[22].u8[11] & (c)->q[13].u8[11];
    _t.u8[12] = (c)->q[22].u8[12] & (c)->q[13].u8[12];
    _t.u8[13] = (c)->q[22].u8[13] & (c)->q[13].u8[13];
    _t.u8[14] = (c)->q[22].u8[14] & (c)->q[13].u8[14];
    _t.u8[15] = (c)->q[22].u8[15] & (c)->q[13].u8[15];
    (c)->q[19] = _t; }
  /* c10fc: ldur q22, [x12, #-0xac] */
  arc_q_w(c, 22, arc_ld64((ARC_X_R(c, 12) + INT64_C(-172))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-172)) + 8));
  /* c1100: orr v1.16b, v21.16b, v20.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] | (c)->q[20].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] | (c)->q[20].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] | (c)->q[20].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] | (c)->q[20].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] | (c)->q[20].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] | (c)->q[20].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] | (c)->q[20].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] | (c)->q[20].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] | (c)->q[20].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] | (c)->q[20].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] | (c)->q[20].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] | (c)->q[20].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] | (c)->q[20].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] | (c)->q[20].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] | (c)->q[20].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] | (c)->q[20].u8[15];
    (c)->q[1] = _t; }
  /* c1104: ldur q20, [x12, #-0x9c] */
  arc_q_w(c, 20, arc_ld64((ARC_X_R(c, 12) + INT64_C(-156))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-156)) + 8));
  /* c1108: ushll v21.2d, v7.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[7].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[7].u32[1]) << 0);
    (c)->q[21] = _t; }
  /* c110c: ushll2 v7.2d, v7.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[7].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[7].u32[3]) << 0);
    (c)->q[7] = _t; }
  /* c1110: orr v2.16b, v24.16b, v23.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] | (c)->q[23].u8[0];
    _t.u8[1] = (c)->q[24].u8[1] | (c)->q[23].u8[1];
    _t.u8[2] = (c)->q[24].u8[2] | (c)->q[23].u8[2];
    _t.u8[3] = (c)->q[24].u8[3] | (c)->q[23].u8[3];
    _t.u8[4] = (c)->q[24].u8[4] | (c)->q[23].u8[4];
    _t.u8[5] = (c)->q[24].u8[5] | (c)->q[23].u8[5];
    _t.u8[6] = (c)->q[24].u8[6] | (c)->q[23].u8[6];
    _t.u8[7] = (c)->q[24].u8[7] | (c)->q[23].u8[7];
    _t.u8[8] = (c)->q[24].u8[8] | (c)->q[23].u8[8];
    _t.u8[9] = (c)->q[24].u8[9] | (c)->q[23].u8[9];
    _t.u8[10] = (c)->q[24].u8[10] | (c)->q[23].u8[10];
    _t.u8[11] = (c)->q[24].u8[11] | (c)->q[23].u8[11];
    _t.u8[12] = (c)->q[24].u8[12] | (c)->q[23].u8[12];
    _t.u8[13] = (c)->q[24].u8[13] | (c)->q[23].u8[13];
    _t.u8[14] = (c)->q[24].u8[14] | (c)->q[23].u8[14];
    _t.u8[15] = (c)->q[24].u8[15] | (c)->q[23].u8[15];
    (c)->q[2] = _t; }
  /* c1114: cmhi v16.4s, v0.4s, v16.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[16].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[16].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[16].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[16].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[16] = _t; }
  /* c1118: and v23.16b, v5.16b, v14.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] & (c)->q[14].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] & (c)->q[14].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] & (c)->q[14].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] & (c)->q[14].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] & (c)->q[14].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] & (c)->q[14].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] & (c)->q[14].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] & (c)->q[14].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] & (c)->q[14].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] & (c)->q[14].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] & (c)->q[14].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] & (c)->q[14].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] & (c)->q[14].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] & (c)->q[14].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] & (c)->q[14].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] & (c)->q[14].u8[15];
    (c)->q[23] = _t; }
  /* c111c: ldur q5, [x12, #-0xbc] */
  arc_q_w(c, 5, arc_ld64((ARC_X_R(c, 12) + INT64_C(-188))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-188)) + 8));
  /* c1120: and v24.16b, v6.16b, v15.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] & (c)->q[15].u8[0];
    _t.u8[1] = (c)->q[6].u8[1] & (c)->q[15].u8[1];
    _t.u8[2] = (c)->q[6].u8[2] & (c)->q[15].u8[2];
    _t.u8[3] = (c)->q[6].u8[3] & (c)->q[15].u8[3];
    _t.u8[4] = (c)->q[6].u8[4] & (c)->q[15].u8[4];
    _t.u8[5] = (c)->q[6].u8[5] & (c)->q[15].u8[5];
    _t.u8[6] = (c)->q[6].u8[6] & (c)->q[15].u8[6];
    _t.u8[7] = (c)->q[6].u8[7] & (c)->q[15].u8[7];
    _t.u8[8] = (c)->q[6].u8[8] & (c)->q[15].u8[8];
    _t.u8[9] = (c)->q[6].u8[9] & (c)->q[15].u8[9];
    _t.u8[10] = (c)->q[6].u8[10] & (c)->q[15].u8[10];
    _t.u8[11] = (c)->q[6].u8[11] & (c)->q[15].u8[11];
    _t.u8[12] = (c)->q[6].u8[12] & (c)->q[15].u8[12];
    _t.u8[13] = (c)->q[6].u8[13] & (c)->q[15].u8[13];
    _t.u8[14] = (c)->q[6].u8[14] & (c)->q[15].u8[14];
    _t.u8[15] = (c)->q[6].u8[15] & (c)->q[15].u8[15];
    (c)->q[24] = _t; }
  /* c1124: rev64 v6.4s, v22.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[22].u32[1];
    _t.u32[1] = (c)->q[22].u32[0];
    _t.u32[2] = (c)->q[22].u32[3];
    _t.u32[3] = (c)->q[22].u32[2];
    (c)->q[6] = _t; }
  /* c1128: rev64 v20.4s, v20.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[20].u32[1];
    _t.u32[1] = (c)->q[20].u32[0];
    _t.u32[2] = (c)->q[20].u32[3];
    _t.u32[3] = (c)->q[20].u32[2];
    (c)->q[20] = _t; }
  /* c112c: and v7.16b, v7.16b, v26.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] & (c)->q[26].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] & (c)->q[26].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] & (c)->q[26].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] & (c)->q[26].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] & (c)->q[26].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] & (c)->q[26].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] & (c)->q[26].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] & (c)->q[26].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] & (c)->q[26].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] & (c)->q[26].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] & (c)->q[26].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] & (c)->q[26].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] & (c)->q[26].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] & (c)->q[26].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] & (c)->q[26].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] & (c)->q[26].u8[15];
    (c)->q[7] = _t; }
  /* c1130: rev64 v26.4s, v5.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[5].u32[1];
    _t.u32[1] = (c)->q[5].u32[0];
    _t.u32[2] = (c)->q[5].u32[3];
    _t.u32[3] = (c)->q[5].u32[2];
    (c)->q[26] = _t; }
  /* c1134: ldur q5, [x29, #-0x70] */
  arc_q_w(c, 5, arc_ld64((ARC_X_R(c, 29) + INT64_C(-112))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-112)) + 8));
  /* c1138: ushll v22.2d, v16.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[16].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[16].u32[1]) << 0);
    (c)->q[22] = _t; }
  /* c113c: ushll2 v16.2d, v16.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[16].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[16].u32[3]) << 0);
    (c)->q[16] = _t; }
  /* c1140: and v21.16b, v21.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] & (c)->q[25].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] & (c)->q[25].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] & (c)->q[25].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] & (c)->q[25].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] & (c)->q[25].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] & (c)->q[25].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] & (c)->q[25].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] & (c)->q[25].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] & (c)->q[25].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] & (c)->q[25].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] & (c)->q[25].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] & (c)->q[25].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] & (c)->q[25].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] & (c)->q[25].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] & (c)->q[25].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] & (c)->q[25].u8[15];
    (c)->q[21] = _t; }
  /* c1144: ldur q25, [x12, #-0xcc] */
  arc_q_w(c, 25, arc_ld64((ARC_X_R(c, 12) + INT64_C(-204))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-204)) + 8));
  /* c1148: ext v17.16b, v17.16b, v17.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[8];
    _t.u8[1] = (c)->q[17].u8[9];
    _t.u8[2] = (c)->q[17].u8[10];
    _t.u8[3] = (c)->q[17].u8[11];
    _t.u8[4] = (c)->q[17].u8[12];
    _t.u8[5] = (c)->q[17].u8[13];
    _t.u8[6] = (c)->q[17].u8[14];
    _t.u8[7] = (c)->q[17].u8[15];
    _t.u8[8] = (c)->q[17].u8[0];
    _t.u8[9] = (c)->q[17].u8[1];
    _t.u8[10] = (c)->q[17].u8[2];
    _t.u8[11] = (c)->q[17].u8[3];
    _t.u8[12] = (c)->q[17].u8[4];
    _t.u8[13] = (c)->q[17].u8[5];
    _t.u8[14] = (c)->q[17].u8[6];
    _t.u8[15] = (c)->q[17].u8[7];
    (c)->q[17] = _t; }
  /* c114c: and v5.16b, v18.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] & (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] & (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] & (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] & (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] & (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] & (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] & (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] & (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] & (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] & (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] & (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] & (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] & (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] & (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] & (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] & (c)->q[5].u8[15];
    (c)->q[5] = _t; }
  /* c1150: ext v18.16b, v6.16b, v6.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[8];
    _t.u8[1] = (c)->q[6].u8[9];
    _t.u8[2] = (c)->q[6].u8[10];
    _t.u8[3] = (c)->q[6].u8[11];
    _t.u8[4] = (c)->q[6].u8[12];
    _t.u8[5] = (c)->q[6].u8[13];
    _t.u8[6] = (c)->q[6].u8[14];
    _t.u8[7] = (c)->q[6].u8[15];
    _t.u8[8] = (c)->q[6].u8[0];
    _t.u8[9] = (c)->q[6].u8[1];
    _t.u8[10] = (c)->q[6].u8[2];
    _t.u8[11] = (c)->q[6].u8[3];
    _t.u8[12] = (c)->q[6].u8[4];
    _t.u8[13] = (c)->q[6].u8[5];
    _t.u8[14] = (c)->q[6].u8[6];
    _t.u8[15] = (c)->q[6].u8[7];
    (c)->q[18] = _t; }
  /* c1154: ldur q6, [x29, #-0xa0] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 29) + INT64_C(-160))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-160)) + 8));
  /* c1158: ext v20.16b, v20.16b, v20.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[8];
    _t.u8[1] = (c)->q[20].u8[9];
    _t.u8[2] = (c)->q[20].u8[10];
    _t.u8[3] = (c)->q[20].u8[11];
    _t.u8[4] = (c)->q[20].u8[12];
    _t.u8[5] = (c)->q[20].u8[13];
    _t.u8[6] = (c)->q[20].u8[14];
    _t.u8[7] = (c)->q[20].u8[15];
    _t.u8[8] = (c)->q[20].u8[0];
    _t.u8[9] = (c)->q[20].u8[1];
    _t.u8[10] = (c)->q[20].u8[2];
    _t.u8[11] = (c)->q[20].u8[3];
    _t.u8[12] = (c)->q[20].u8[4];
    _t.u8[13] = (c)->q[20].u8[5];
    _t.u8[14] = (c)->q[20].u8[6];
    _t.u8[15] = (c)->q[20].u8[7];
    (c)->q[20] = _t; }
  /* c115c: rev64 v25.4s, v25.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[25].u32[1];
    _t.u32[1] = (c)->q[25].u32[0];
    _t.u32[2] = (c)->q[25].u32[3];
    _t.u32[3] = (c)->q[25].u32[2];
    (c)->q[25] = _t; }
  /* c1160: orr v7.16b, v7.16b, v23.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] | (c)->q[23].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] | (c)->q[23].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] | (c)->q[23].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] | (c)->q[23].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] | (c)->q[23].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] | (c)->q[23].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] | (c)->q[23].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] | (c)->q[23].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] | (c)->q[23].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] | (c)->q[23].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] | (c)->q[23].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] | (c)->q[23].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] | (c)->q[23].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] | (c)->q[23].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] | (c)->q[23].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] | (c)->q[23].u8[15];
    (c)->q[7] = _t; }
  /* c1164: ext v23.16b, v26.16b, v26.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[8];
    _t.u8[1] = (c)->q[26].u8[9];
    _t.u8[2] = (c)->q[26].u8[10];
    _t.u8[3] = (c)->q[26].u8[11];
    _t.u8[4] = (c)->q[26].u8[12];
    _t.u8[5] = (c)->q[26].u8[13];
    _t.u8[6] = (c)->q[26].u8[14];
    _t.u8[7] = (c)->q[26].u8[15];
    _t.u8[8] = (c)->q[26].u8[0];
    _t.u8[9] = (c)->q[26].u8[1];
    _t.u8[10] = (c)->q[26].u8[2];
    _t.u8[11] = (c)->q[26].u8[3];
    _t.u8[12] = (c)->q[26].u8[4];
    _t.u8[13] = (c)->q[26].u8[5];
    _t.u8[14] = (c)->q[26].u8[6];
    _t.u8[15] = (c)->q[26].u8[7];
    (c)->q[23] = _t; }
  /* c1168: ldp q29, q26, [x29, #-0xf0] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-240));
    arc_q_w(c, 29, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 26, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c116c: and v6.16b, v16.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] & (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] & (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] & (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] & (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] & (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] & (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] & (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] & (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] & (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] & (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] & (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] & (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] & (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] & (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] & (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] & (c)->q[6].u8[15];
    (c)->q[6] = _t; }
  /* c1170: orr v16.16b, v21.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] | (c)->q[19].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] | (c)->q[19].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] | (c)->q[19].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] | (c)->q[19].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] | (c)->q[19].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] | (c)->q[19].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] | (c)->q[19].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] | (c)->q[19].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] | (c)->q[19].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] | (c)->q[19].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] | (c)->q[19].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] | (c)->q[19].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] | (c)->q[19].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] | (c)->q[19].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] | (c)->q[19].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] | (c)->q[19].u8[15];
    (c)->q[16] = _t; }
  /* c1174: ldur q21, [x29, #-0xb0] */
  arc_q_w(c, 21, arc_ld64((ARC_X_R(c, 29) + INT64_C(-176))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-176)) + 8));
  /* c1178: ldur q19, [x12, #-0xdc] */
  arc_q_w(c, 19, arc_ld64((ARC_X_R(c, 12) + INT64_C(-220))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-220)) + 8));
  /* c117c: cmhi v17.4s, v0.4s, v17.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[17].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[17].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[17].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[17].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[17] = _t; }
  /* c1180: cmhi v20.4s, v0.4s, v20.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[20].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[20].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[20].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[20].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[20] = _t; }
  /* c1184: orr v4.16b, v7.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] | (c)->q[4].u8[15];
    (c)->q[4] = _t; }
  /* c1188: and v21.16b, v22.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0] & (c)->q[21].u8[0];
    _t.u8[1] = (c)->q[22].u8[1] & (c)->q[21].u8[1];
    _t.u8[2] = (c)->q[22].u8[2] & (c)->q[21].u8[2];
    _t.u8[3] = (c)->q[22].u8[3] & (c)->q[21].u8[3];
    _t.u8[4] = (c)->q[22].u8[4] & (c)->q[21].u8[4];
    _t.u8[5] = (c)->q[22].u8[5] & (c)->q[21].u8[5];
    _t.u8[6] = (c)->q[22].u8[6] & (c)->q[21].u8[6];
    _t.u8[7] = (c)->q[22].u8[7] & (c)->q[21].u8[7];
    _t.u8[8] = (c)->q[22].u8[8] & (c)->q[21].u8[8];
    _t.u8[9] = (c)->q[22].u8[9] & (c)->q[21].u8[9];
    _t.u8[10] = (c)->q[22].u8[10] & (c)->q[21].u8[10];
    _t.u8[11] = (c)->q[22].u8[11] & (c)->q[21].u8[11];
    _t.u8[12] = (c)->q[22].u8[12] & (c)->q[21].u8[12];
    _t.u8[13] = (c)->q[22].u8[13] & (c)->q[21].u8[13];
    _t.u8[14] = (c)->q[22].u8[14] & (c)->q[21].u8[14];
    _t.u8[15] = (c)->q[22].u8[15] & (c)->q[21].u8[15];
    (c)->q[21] = _t; }
  /* c118c: rev64 v19.4s, v19.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[19].u32[1];
    _t.u32[1] = (c)->q[19].u32[0];
    _t.u32[2] = (c)->q[19].u32[3];
    _t.u32[3] = (c)->q[19].u32[2];
    (c)->q[19] = _t; }
  /* c1190: cmhi v23.4s, v0.4s, v23.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[23].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[23].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[23].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[23].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[23] = _t; }
  /* c1194: orr v3.16b, v16.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* c1198: cmhi v16.4s, v0.4s, v18.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[18].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[18].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[18].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[18].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[16] = _t; }
  /* c119c: ext v18.16b, v25.16b, v25.16b, #8 */
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
    (c)->q[18] = _t; }
  /* c11a0: sshll v22.2d, v17.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[17].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[17].i32[1]) << 0);
    (c)->q[22] = _t; }
  /* c11a4: sshll2 v17.2d, v17.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[17].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[17].i32[3]) << 0);
    (c)->q[17] = _t; }
  /* c11a8: orr v5.16b, v6.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[6].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[6].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[6].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[6].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[6].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[6].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[6].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[6].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[6].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[6].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[6].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[6].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[6].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[6].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[6].u8[15] | (c)->q[5].u8[15];
    (c)->q[5] = _t; }
  /* c11ac: orr v7.16b, v21.16b, v24.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] | (c)->q[24].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] | (c)->q[24].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] | (c)->q[24].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] | (c)->q[24].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] | (c)->q[24].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] | (c)->q[24].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] | (c)->q[24].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] | (c)->q[24].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] | (c)->q[24].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] | (c)->q[24].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] | (c)->q[24].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] | (c)->q[24].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] | (c)->q[24].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] | (c)->q[24].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] | (c)->q[24].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] | (c)->q[24].u8[15];
    (c)->q[7] = _t; }
  /* c11b0: ldp q25, q24, [x29, #-0xd0] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-208));
    arc_q_w(c, 25, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 24, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c11b4: sshll2 v21.2d, v20.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[20].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[20].i32[3]) << 0);
    (c)->q[21] = _t; }
  /* c11b8: sshll v20.2d, v20.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[20].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[20].i32[1]) << 0);
    (c)->q[20] = _t; }
  /* c11bc: sshll2 v27.2d, v23.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[3]) << 0);
    (c)->q[27] = _t; }
  /* c11c0: cmhi v18.4s, v0.4s, v18.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[18].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[18].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[18].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[18].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[18] = _t; }
  /* c11c4: ext v19.16b, v19.16b, v19.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[8];
    _t.u8[1] = (c)->q[19].u8[9];
    _t.u8[2] = (c)->q[19].u8[10];
    _t.u8[3] = (c)->q[19].u8[11];
    _t.u8[4] = (c)->q[19].u8[12];
    _t.u8[5] = (c)->q[19].u8[13];
    _t.u8[6] = (c)->q[19].u8[14];
    _t.u8[7] = (c)->q[19].u8[15];
    _t.u8[8] = (c)->q[19].u8[0];
    _t.u8[9] = (c)->q[19].u8[1];
    _t.u8[10] = (c)->q[19].u8[2];
    _t.u8[11] = (c)->q[19].u8[3];
    _t.u8[12] = (c)->q[19].u8[4];
    _t.u8[13] = (c)->q[19].u8[5];
    _t.u8[14] = (c)->q[19].u8[6];
    _t.u8[15] = (c)->q[19].u8[7];
    (c)->q[19] = _t; }
  /* c11c8: sshll v23.2d, v23.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[1]) << 0);
    (c)->q[23] = _t; }
  /* c11cc: and v22.16b, v22.16b, v24.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0] & (c)->q[24].u8[0];
    _t.u8[1] = (c)->q[22].u8[1] & (c)->q[24].u8[1];
    _t.u8[2] = (c)->q[22].u8[2] & (c)->q[24].u8[2];
    _t.u8[3] = (c)->q[22].u8[3] & (c)->q[24].u8[3];
    _t.u8[4] = (c)->q[22].u8[4] & (c)->q[24].u8[4];
    _t.u8[5] = (c)->q[22].u8[5] & (c)->q[24].u8[5];
    _t.u8[6] = (c)->q[22].u8[6] & (c)->q[24].u8[6];
    _t.u8[7] = (c)->q[22].u8[7] & (c)->q[24].u8[7];
    _t.u8[8] = (c)->q[22].u8[8] & (c)->q[24].u8[8];
    _t.u8[9] = (c)->q[22].u8[9] & (c)->q[24].u8[9];
    _t.u8[10] = (c)->q[22].u8[10] & (c)->q[24].u8[10];
    _t.u8[11] = (c)->q[22].u8[11] & (c)->q[24].u8[11];
    _t.u8[12] = (c)->q[22].u8[12] & (c)->q[24].u8[12];
    _t.u8[13] = (c)->q[22].u8[13] & (c)->q[24].u8[13];
    _t.u8[14] = (c)->q[22].u8[14] & (c)->q[24].u8[14];
    _t.u8[15] = (c)->q[22].u8[15] & (c)->q[24].u8[15];
    (c)->q[22] = _t; }
  /* c11d0: sshll2 v24.2d, v16.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[16].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[16].i32[3]) << 0);
    (c)->q[24] = _t; }
  /* c11d4: sshll v16.2d, v16.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[16].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[16].i32[1]) << 0);
    (c)->q[16] = _t; }
  /* c11d8: and v21.16b, v21.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] & (c)->q[29].u8[15];
    (c)->q[21] = _t; }
  /* c11dc: ldr q29, [sp, #0x120] */
  arc_q_w(c, 29, arc_ld64(((c)->sp + INT64_C(288))), arc_ld64(((c)->sp + INT64_C(288)) + 8));
  /* c11e0: and v17.16b, v17.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] & (c)->q[25].u8[0];
    _t.u8[1] = (c)->q[17].u8[1] & (c)->q[25].u8[1];
    _t.u8[2] = (c)->q[17].u8[2] & (c)->q[25].u8[2];
    _t.u8[3] = (c)->q[17].u8[3] & (c)->q[25].u8[3];
    _t.u8[4] = (c)->q[17].u8[4] & (c)->q[25].u8[4];
    _t.u8[5] = (c)->q[17].u8[5] & (c)->q[25].u8[5];
    _t.u8[6] = (c)->q[17].u8[6] & (c)->q[25].u8[6];
    _t.u8[7] = (c)->q[17].u8[7] & (c)->q[25].u8[7];
    _t.u8[8] = (c)->q[17].u8[8] & (c)->q[25].u8[8];
    _t.u8[9] = (c)->q[17].u8[9] & (c)->q[25].u8[9];
    _t.u8[10] = (c)->q[17].u8[10] & (c)->q[25].u8[10];
    _t.u8[11] = (c)->q[17].u8[11] & (c)->q[25].u8[11];
    _t.u8[12] = (c)->q[17].u8[12] & (c)->q[25].u8[12];
    _t.u8[13] = (c)->q[17].u8[13] & (c)->q[25].u8[13];
    _t.u8[14] = (c)->q[17].u8[14] & (c)->q[25].u8[14];
    _t.u8[15] = (c)->q[17].u8[15] & (c)->q[25].u8[15];
    (c)->q[17] = _t; }
  /* c11e4: ldur q25, [x12, #-0xec] */
  arc_q_w(c, 25, arc_ld64((ARC_X_R(c, 12) + INT64_C(-236))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-236)) + 8));
  /* c11e8: and v20.16b, v20.16b, v26.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] & (c)->q[26].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] & (c)->q[26].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] & (c)->q[26].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] & (c)->q[26].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] & (c)->q[26].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] & (c)->q[26].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] & (c)->q[26].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] & (c)->q[26].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] & (c)->q[26].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] & (c)->q[26].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] & (c)->q[26].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] & (c)->q[26].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] & (c)->q[26].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] & (c)->q[26].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] & (c)->q[26].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] & (c)->q[26].u8[15];
    (c)->q[20] = _t; }
  /* c11ec: ldur q26, [x12, #-0xfc] */
  arc_q_w(c, 26, arc_ld64((ARC_X_R(c, 12) + INT64_C(-252))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-252)) + 8));
  /* c11f0: and v16.16b, v16.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] & (c)->q[29].u8[15];
    (c)->q[16] = _t; }
  /* c11f4: ldr q29, [sp, #0x110] */
  arc_q_w(c, 29, arc_ld64(((c)->sp + INT64_C(272))), arc_ld64(((c)->sp + INT64_C(272)) + 8));
  /* c11f8: and v24.16b, v24.16b, v28.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] & (c)->q[28].u8[0];
    _t.u8[1] = (c)->q[24].u8[1] & (c)->q[28].u8[1];
    _t.u8[2] = (c)->q[24].u8[2] & (c)->q[28].u8[2];
    _t.u8[3] = (c)->q[24].u8[3] & (c)->q[28].u8[3];
    _t.u8[4] = (c)->q[24].u8[4] & (c)->q[28].u8[4];
    _t.u8[5] = (c)->q[24].u8[5] & (c)->q[28].u8[5];
    _t.u8[6] = (c)->q[24].u8[6] & (c)->q[28].u8[6];
    _t.u8[7] = (c)->q[24].u8[7] & (c)->q[28].u8[7];
    _t.u8[8] = (c)->q[24].u8[8] & (c)->q[28].u8[8];
    _t.u8[9] = (c)->q[24].u8[9] & (c)->q[28].u8[9];
    _t.u8[10] = (c)->q[24].u8[10] & (c)->q[28].u8[10];
    _t.u8[11] = (c)->q[24].u8[11] & (c)->q[28].u8[11];
    _t.u8[12] = (c)->q[24].u8[12] & (c)->q[28].u8[12];
    _t.u8[13] = (c)->q[24].u8[13] & (c)->q[28].u8[13];
    _t.u8[14] = (c)->q[24].u8[14] & (c)->q[28].u8[14];
    _t.u8[15] = (c)->q[24].u8[15] & (c)->q[28].u8[15];
    (c)->q[24] = _t; }
  /* c11fc: sshll2 v28.2d, v18.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[18].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[18].i32[3]) << 0);
    (c)->q[28] = _t; }
  /* c1200: rev64 v25.4s, v25.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[25].u32[1];
    _t.u32[1] = (c)->q[25].u32[0];
    _t.u32[2] = (c)->q[25].u32[3];
    _t.u32[3] = (c)->q[25].u32[2];
    (c)->q[25] = _t; }
  /* c1204: cmhi v19.4s, v0.4s, v19.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[19].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[19].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[19].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[19].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[19] = _t; }
  /* c1208: and v27.16b, v27.16b, v29.16b */
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
  /* c120c: ldr q29, [sp, #0xe0] */
  arc_q_w(c, 29, arc_ld64(((c)->sp + INT64_C(224))), arc_ld64(((c)->sp + INT64_C(224)) + 8));
  /* c1210: rev64 v26.4s, v26.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[26].u32[1];
    _t.u32[1] = (c)->q[26].u32[0];
    _t.u32[2] = (c)->q[26].u32[3];
    _t.u32[3] = (c)->q[26].u32[2];
    (c)->q[26] = _t; }
  /* c1214: sshll v18.2d, v18.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[18].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[18].i32[1]) << 0);
    (c)->q[18] = _t; }
  /* c1218: orr v6.16b, v16.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] | (c)->q[22].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] | (c)->q[22].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] | (c)->q[22].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] | (c)->q[22].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] | (c)->q[22].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] | (c)->q[22].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] | (c)->q[22].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] | (c)->q[22].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] | (c)->q[22].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] | (c)->q[22].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] | (c)->q[22].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] | (c)->q[22].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] | (c)->q[22].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] | (c)->q[22].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] | (c)->q[22].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] | (c)->q[22].u8[15];
    (c)->q[6] = _t; }
  /* c121c: orr v17.16b, v24.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] | (c)->q[17].u8[0];
    _t.u8[1] = (c)->q[24].u8[1] | (c)->q[17].u8[1];
    _t.u8[2] = (c)->q[24].u8[2] | (c)->q[17].u8[2];
    _t.u8[3] = (c)->q[24].u8[3] | (c)->q[17].u8[3];
    _t.u8[4] = (c)->q[24].u8[4] | (c)->q[17].u8[4];
    _t.u8[5] = (c)->q[24].u8[5] | (c)->q[17].u8[5];
    _t.u8[6] = (c)->q[24].u8[6] | (c)->q[17].u8[6];
    _t.u8[7] = (c)->q[24].u8[7] | (c)->q[17].u8[7];
    _t.u8[8] = (c)->q[24].u8[8] | (c)->q[17].u8[8];
    _t.u8[9] = (c)->q[24].u8[9] | (c)->q[17].u8[9];
    _t.u8[10] = (c)->q[24].u8[10] | (c)->q[17].u8[10];
    _t.u8[11] = (c)->q[24].u8[11] | (c)->q[17].u8[11];
    _t.u8[12] = (c)->q[24].u8[12] | (c)->q[17].u8[12];
    _t.u8[13] = (c)->q[24].u8[13] | (c)->q[17].u8[13];
    _t.u8[14] = (c)->q[24].u8[14] | (c)->q[17].u8[14];
    _t.u8[15] = (c)->q[24].u8[15] | (c)->q[17].u8[15];
    (c)->q[17] = _t; }
  /* c1220: and v28.16b, v28.16b, v29.16b */
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
  /* c1224: ldr q29, [sp, #0x100] */
  arc_q_w(c, 29, arc_ld64(((c)->sp + INT64_C(256))), arc_ld64(((c)->sp + INT64_C(256)) + 8));
  /* c1228: sshll2 v24.2d, v19.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[19].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[19].i32[3]) << 0);
    (c)->q[24] = _t; }
  /* c122c: orr v16.16b, v27.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[27].u8[0] | (c)->q[21].u8[0];
    _t.u8[1] = (c)->q[27].u8[1] | (c)->q[21].u8[1];
    _t.u8[2] = (c)->q[27].u8[2] | (c)->q[21].u8[2];
    _t.u8[3] = (c)->q[27].u8[3] | (c)->q[21].u8[3];
    _t.u8[4] = (c)->q[27].u8[4] | (c)->q[21].u8[4];
    _t.u8[5] = (c)->q[27].u8[5] | (c)->q[21].u8[5];
    _t.u8[6] = (c)->q[27].u8[6] | (c)->q[21].u8[6];
    _t.u8[7] = (c)->q[27].u8[7] | (c)->q[21].u8[7];
    _t.u8[8] = (c)->q[27].u8[8] | (c)->q[21].u8[8];
    _t.u8[9] = (c)->q[27].u8[9] | (c)->q[21].u8[9];
    _t.u8[10] = (c)->q[27].u8[10] | (c)->q[21].u8[10];
    _t.u8[11] = (c)->q[27].u8[11] | (c)->q[21].u8[11];
    _t.u8[12] = (c)->q[27].u8[12] | (c)->q[21].u8[12];
    _t.u8[13] = (c)->q[27].u8[13] | (c)->q[21].u8[13];
    _t.u8[14] = (c)->q[27].u8[14] | (c)->q[21].u8[14];
    _t.u8[15] = (c)->q[27].u8[15] | (c)->q[21].u8[15];
    (c)->q[16] = _t; }
  /* c1230: ldr q21, [sp, #0xf0] */
  arc_q_w(c, 21, arc_ld64(((c)->sp + INT64_C(240))), arc_ld64(((c)->sp + INT64_C(240)) + 8));
  /* c1234: sshll v19.2d, v19.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[19].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[19].i32[1]) << 0);
    (c)->q[19] = _t; }
  /* c1238: and v23.16b, v23.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[23].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[23].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[23].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[23].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[23].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[23].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[23].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[23].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[23].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[23].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[23].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[23].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[23].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[23].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[23].u8[15] & (c)->q[29].u8[15];
    (c)->q[23] = _t; }
  /* c123c: ext v25.16b, v25.16b, v25.16b, #8 */
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
  /* c1240: ext v26.16b, v26.16b, v26.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[8];
    _t.u8[1] = (c)->q[26].u8[9];
    _t.u8[2] = (c)->q[26].u8[10];
    _t.u8[3] = (c)->q[26].u8[11];
    _t.u8[4] = (c)->q[26].u8[12];
    _t.u8[5] = (c)->q[26].u8[13];
    _t.u8[6] = (c)->q[26].u8[14];
    _t.u8[7] = (c)->q[26].u8[15];
    _t.u8[8] = (c)->q[26].u8[0];
    _t.u8[9] = (c)->q[26].u8[1];
    _t.u8[10] = (c)->q[26].u8[2];
    _t.u8[11] = (c)->q[26].u8[3];
    _t.u8[12] = (c)->q[26].u8[4];
    _t.u8[13] = (c)->q[26].u8[5];
    _t.u8[14] = (c)->q[26].u8[6];
    _t.u8[15] = (c)->q[26].u8[7];
    (c)->q[26] = _t; }
  /* c1244: and v18.16b, v18.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] & (c)->q[21].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] & (c)->q[21].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] & (c)->q[21].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] & (c)->q[21].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] & (c)->q[21].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] & (c)->q[21].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] & (c)->q[21].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] & (c)->q[21].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] & (c)->q[21].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] & (c)->q[21].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] & (c)->q[21].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] & (c)->q[21].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] & (c)->q[21].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] & (c)->q[21].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] & (c)->q[21].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] & (c)->q[21].u8[15];
    (c)->q[18] = _t; }
  /* c1248: ldp q21, q22, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_q_w(c, 21, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 22, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c124c: orr v17.16b, v28.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[28].u8[0] | (c)->q[17].u8[0];
    _t.u8[1] = (c)->q[28].u8[1] | (c)->q[17].u8[1];
    _t.u8[2] = (c)->q[28].u8[2] | (c)->q[17].u8[2];
    _t.u8[3] = (c)->q[28].u8[3] | (c)->q[17].u8[3];
    _t.u8[4] = (c)->q[28].u8[4] | (c)->q[17].u8[4];
    _t.u8[5] = (c)->q[28].u8[5] | (c)->q[17].u8[5];
    _t.u8[6] = (c)->q[28].u8[6] | (c)->q[17].u8[6];
    _t.u8[7] = (c)->q[28].u8[7] | (c)->q[17].u8[7];
    _t.u8[8] = (c)->q[28].u8[8] | (c)->q[17].u8[8];
    _t.u8[9] = (c)->q[28].u8[9] | (c)->q[17].u8[9];
    _t.u8[10] = (c)->q[28].u8[10] | (c)->q[17].u8[10];
    _t.u8[11] = (c)->q[28].u8[11] | (c)->q[17].u8[11];
    _t.u8[12] = (c)->q[28].u8[12] | (c)->q[17].u8[12];
    _t.u8[13] = (c)->q[28].u8[13] | (c)->q[17].u8[13];
    _t.u8[14] = (c)->q[28].u8[14] | (c)->q[17].u8[14];
    _t.u8[15] = (c)->q[28].u8[15] | (c)->q[17].u8[15];
    (c)->q[17] = _t; }
  /* c1250: orr v2.16b, v5.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* c1254: orr v1.16b, v7.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* c1258: orr v20.16b, v23.16b, v20.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] | (c)->q[20].u8[0];
    _t.u8[1] = (c)->q[23].u8[1] | (c)->q[20].u8[1];
    _t.u8[2] = (c)->q[23].u8[2] | (c)->q[20].u8[2];
    _t.u8[3] = (c)->q[23].u8[3] | (c)->q[20].u8[3];
    _t.u8[4] = (c)->q[23].u8[4] | (c)->q[20].u8[4];
    _t.u8[5] = (c)->q[23].u8[5] | (c)->q[20].u8[5];
    _t.u8[6] = (c)->q[23].u8[6] | (c)->q[20].u8[6];
    _t.u8[7] = (c)->q[23].u8[7] | (c)->q[20].u8[7];
    _t.u8[8] = (c)->q[23].u8[8] | (c)->q[20].u8[8];
    _t.u8[9] = (c)->q[23].u8[9] | (c)->q[20].u8[9];
    _t.u8[10] = (c)->q[23].u8[10] | (c)->q[20].u8[10];
    _t.u8[11] = (c)->q[23].u8[11] | (c)->q[20].u8[11];
    _t.u8[12] = (c)->q[23].u8[12] | (c)->q[20].u8[12];
    _t.u8[13] = (c)->q[23].u8[13] | (c)->q[20].u8[13];
    _t.u8[14] = (c)->q[23].u8[14] | (c)->q[20].u8[14];
    _t.u8[15] = (c)->q[23].u8[15] | (c)->q[20].u8[15];
    (c)->q[20] = _t; }
  /* c125c: and v21.16b, v24.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] & (c)->q[21].u8[0];
    _t.u8[1] = (c)->q[24].u8[1] & (c)->q[21].u8[1];
    _t.u8[2] = (c)->q[24].u8[2] & (c)->q[21].u8[2];
    _t.u8[3] = (c)->q[24].u8[3] & (c)->q[21].u8[3];
    _t.u8[4] = (c)->q[24].u8[4] & (c)->q[21].u8[4];
    _t.u8[5] = (c)->q[24].u8[5] & (c)->q[21].u8[5];
    _t.u8[6] = (c)->q[24].u8[6] & (c)->q[21].u8[6];
    _t.u8[7] = (c)->q[24].u8[7] & (c)->q[21].u8[7];
    _t.u8[8] = (c)->q[24].u8[8] & (c)->q[21].u8[8];
    _t.u8[9] = (c)->q[24].u8[9] & (c)->q[21].u8[9];
    _t.u8[10] = (c)->q[24].u8[10] & (c)->q[21].u8[10];
    _t.u8[11] = (c)->q[24].u8[11] & (c)->q[21].u8[11];
    _t.u8[12] = (c)->q[24].u8[12] & (c)->q[21].u8[12];
    _t.u8[13] = (c)->q[24].u8[13] & (c)->q[21].u8[13];
    _t.u8[14] = (c)->q[24].u8[14] & (c)->q[21].u8[14];
    _t.u8[15] = (c)->q[24].u8[15] & (c)->q[21].u8[15];
    (c)->q[21] = _t; }
  /* c1260: and v19.16b, v19.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] & (c)->q[22].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] & (c)->q[22].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] & (c)->q[22].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] & (c)->q[22].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] & (c)->q[22].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] & (c)->q[22].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] & (c)->q[22].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] & (c)->q[22].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] & (c)->q[22].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] & (c)->q[22].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] & (c)->q[22].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] & (c)->q[22].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] & (c)->q[22].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] & (c)->q[22].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] & (c)->q[22].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] & (c)->q[22].u8[15];
    (c)->q[19] = _t; }
  /* c1264: cmhi v22.4s, v0.4s, v25.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[25].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[25].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[25].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[25].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[22] = _t; }
  /* c1268: cmhi v5.4s, v0.4s, v26.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[26].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[26].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[26].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[26].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[5] = _t; }
  /* c126c: orr v6.16b, v18.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] | (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] | (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] | (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] | (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] | (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] | (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] | (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] | (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] | (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] | (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] | (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] | (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] | (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] | (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] | (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] | (c)->q[6].u8[15];
    (c)->q[6] = _t; }
  /* c1270: orr v4.16b, v17.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[17].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[17].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[17].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[17].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[17].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[17].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[17].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[17].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[17].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[17].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[17].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[17].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[17].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[17].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[17].u8[15] | (c)->q[4].u8[15];
    (c)->q[4] = _t; }
  /* c1274: orr v7.16b, v21.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] | (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] | (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] | (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] | (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] | (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] | (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] | (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] | (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] | (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] | (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] | (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] | (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] | (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] | (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] | (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] | (c)->q[16].u8[15];
    (c)->q[7] = _t; }
  /* c1278: ldr q21, [x26, #0xc40] */
  arc_q_w(c, 21, arc_ld64((ARC_X_R(c, 26) + INT64_C(3136))), arc_ld64((ARC_X_R(c, 26) + INT64_C(3136)) + 8));
  /* c127c: orr v16.16b, v19.16b, v20.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] | (c)->q[20].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] | (c)->q[20].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] | (c)->q[20].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] | (c)->q[20].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] | (c)->q[20].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] | (c)->q[20].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] | (c)->q[20].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] | (c)->q[20].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] | (c)->q[20].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] | (c)->q[20].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] | (c)->q[20].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] | (c)->q[20].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] | (c)->q[20].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] | (c)->q[20].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] | (c)->q[20].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] | (c)->q[20].u8[15];
    (c)->q[16] = _t; }
  /* c1280: ldr q20, [x6, #0xc80] */
  arc_q_w(c, 20, arc_ld64((ARC_X_R(c, 6) + INT64_C(3200))), arc_ld64((ARC_X_R(c, 6) + INT64_C(3200)) + 8));
  /* c1284: sshll v17.2d, v22.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[22].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[22].i32[1]) << 0);
    (c)->q[17] = _t; }
  /* c1288: sshll2 v18.2d, v22.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[22].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[22].i32[3]) << 0);
    (c)->q[18] = _t; }
  /* c128c: sshll v19.2d, v5.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[5].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[5].i32[1]) << 0);
    (c)->q[19] = _t; }
  /* c1290: sshll2 v5.2d, v5.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[5].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[5].i32[3]) << 0);
    (c)->q[5] = _t; }
  /* c1294: orr v3.16b, v6.16b, v3.16b */
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
  /* c1298: ldr q6, [x7, #0xa00] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 7) + INT64_C(2560))), arc_ld64((ARC_X_R(c, 7) + INT64_C(2560)) + 8));
  /* c129c: orr v1.16b, v16.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* c12a0: ldr q16, [sp, #0xb0] */
  arc_q_w(c, 16, arc_ld64(((c)->sp + INT64_C(176))), arc_ld64(((c)->sp + INT64_C(176)) + 8));
  /* c12a4: orr v2.16b, v7.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* c12a8: and v7.16b, v17.16b, v20.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] & (c)->q[20].u8[0];
    _t.u8[1] = (c)->q[17].u8[1] & (c)->q[20].u8[1];
    _t.u8[2] = (c)->q[17].u8[2] & (c)->q[20].u8[2];
    _t.u8[3] = (c)->q[17].u8[3] & (c)->q[20].u8[3];
    _t.u8[4] = (c)->q[17].u8[4] & (c)->q[20].u8[4];
    _t.u8[5] = (c)->q[17].u8[5] & (c)->q[20].u8[5];
    _t.u8[6] = (c)->q[17].u8[6] & (c)->q[20].u8[6];
    _t.u8[7] = (c)->q[17].u8[7] & (c)->q[20].u8[7];
    _t.u8[8] = (c)->q[17].u8[8] & (c)->q[20].u8[8];
    _t.u8[9] = (c)->q[17].u8[9] & (c)->q[20].u8[9];
    _t.u8[10] = (c)->q[17].u8[10] & (c)->q[20].u8[10];
    _t.u8[11] = (c)->q[17].u8[11] & (c)->q[20].u8[11];
    _t.u8[12] = (c)->q[17].u8[12] & (c)->q[20].u8[12];
    _t.u8[13] = (c)->q[17].u8[13] & (c)->q[20].u8[13];
    _t.u8[14] = (c)->q[17].u8[14] & (c)->q[20].u8[14];
    _t.u8[15] = (c)->q[17].u8[15] & (c)->q[20].u8[15];
    (c)->q[7] = _t; }
  /* c12ac: and v5.16b, v5.16b, v6.16b */
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
  /* c12b0: and v6.16b, v19.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] & (c)->q[21].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] & (c)->q[21].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] & (c)->q[21].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] & (c)->q[21].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] & (c)->q[21].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] & (c)->q[21].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] & (c)->q[21].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] & (c)->q[21].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] & (c)->q[21].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] & (c)->q[21].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] & (c)->q[21].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] & (c)->q[21].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] & (c)->q[21].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] & (c)->q[21].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] & (c)->q[21].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] & (c)->q[21].u8[15];
    (c)->q[6] = _t; }
  /* c12b4: and v16.16b, v18.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] & (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] & (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] & (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] & (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] & (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] & (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] & (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] & (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] & (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] & (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] & (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] & (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] & (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] & (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] & (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] & (c)->q[16].u8[15];
    (c)->q[16] = _t; }
  /* c12b8: orr v3.16b, v7.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* c12bc: orr v4.16b, v16.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] | (c)->q[4].u8[15];
    (c)->q[4] = _t; }
  /* c12c0: orr v1.16b, v6.16b, v1.16b */
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
  /* c12c4: orr v2.16b, v5.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* c12c8: orr v2.16b, v2.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[2].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[2].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[2].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[2].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[2].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[2].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[2].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[2].u8[15] | (c)->q[4].u8[15];
    (c)->q[2] = _t; }
  /* c12cc: orr v1.16b, v1.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[1].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[1].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[1].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[1].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[1].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[1].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[1].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[1].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[1].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[1].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[1].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[1].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[1].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[1].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[1].u8[15] | (c)->q[3].u8[15];
    (c)->q[1] = _t; }
  /* c12d0: orr v1.16b, v1.16b, v2.16b */
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
  /* c12d4: ext v2.16b, v1.16b, v1.16b, #8 */
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
  /* c12d8: orr v1.8b, v1.8b, v2.8b */
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
  /* c12dc: fmov x14, d1 */
  ARC_X_W(c, 14, ARC_DU_R(c, 1));
  /* c12e0: cbz x13, #0xc0d98 */
  if ((ARC_X_R(c, 13)) == 0) goto L_c0d98;
L_c12e4:;
  /* c12e4: cbz x14, #0xc0d98 */
  if ((ARC_X_R(c, 14)) == 0) goto L_c0d98;
L_c12e8:;
  /* c12e8: rbit x15, x14 */
  ARC_X_W(c, 15, arc_rbit64(ARC_X_R(c, 14)));
  /* c12ec: rbit x16, x13 */
  ARC_X_W(c, 16, arc_rbit64(ARC_X_R(c, 13)));
  /* c12f0: sub x17, x14, #1 */
  ARC_X_W(c, 17, (ARC_X_R(c, 14) - UINT64_C(1)));
  /* c12f4: sub x3, x13, #1 */
  ARC_X_W(c, 3, (ARC_X_R(c, 13) - UINT64_C(1)));
  /* c12f8: and x14, x17, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 17) & ARC_X_R(c, 14)));
  /* c12fc: clz x15, x15 */
  ARC_X_W(c, 15, arc_clz64(ARC_X_R(c, 15)));
  /* c1300: clz x16, x16 */
  ARC_X_W(c, 16, arc_clz64(ARC_X_R(c, 16)));
  /* c1304: and x13, x3, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 3) & ARC_X_R(c, 13)));
  /* c1308: sub x15, x12, x15, lsl #2 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 15)) << 2)));
  /* c130c: ldr w0, [x11, x16, lsl #2] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 16)) << 2))));
  /* c1310: ldr w1, [x15] */
  ARC_W_W(c, 1, arc_ld32(ARC_X_R(c, 15)));
  /* c1314: str w1, [x11, x16, lsl #2] */
  arc_st32((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 16)) << 2)), ARC_W_R(c, 1));
  /* c1318: str w0, [x15] */
  arc_st32(ARC_X_R(c, 15), ARC_W_R(c, 0));
  /* c131c: cbz x14, #0xc0d98 */
  if ((ARC_X_R(c, 14)) == 0) goto L_c0d98;
  /* c1320: cbnz x13, #0xc12e8 */
  if ((ARC_X_R(c, 13)) != 0) goto L_c12e8;
  /* c1324: b #0xc0d98 */
  goto L_c0d98;
L_c1328:;
  /* c1328: asr x15, x13, #2 */
  ARC_X_W(c, 15, ((uint64_t)((int64_t)(ARC_X_R(c, 13)) >> ((UINT64_C(2)) & 63))));
  /* c132c: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* c1330: mov w16, #1 */
  ARC_W_W(c, 16, UINT64_C(1));
  /* c1334: b #0xc135c */
  goto L_c135c;
L_c1338:;
  /* c1338: asr x15, x15, #2 */
  ARC_X_W(c, 15, ((uint64_t)((int64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(2)) & 63))));
  /* c133c: orr x17, x14, x13 */
  ARC_X_W(c, 17, (ARC_X_R(c, 14) | ARC_X_R(c, 13)));
  /* c1340: cbz x17, #0xc135c */
  if ((ARC_X_R(c, 17)) == 0) goto L_c135c;
  /* c1344: sub x15, x15, #0x3f */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) - UINT64_C(63)));
  /* c1348: mov w0, #0x40 */
  ARC_W_W(c, 0, UINT64_C(64));
  /* c134c: mov w17, #0x40 */
  ARC_W_W(c, 17, UINT64_C(64));
  /* c1350: cbz x13, #0xc136c */
  if ((ARC_X_R(c, 13)) == 0) goto L_c136c;
  /* c1354: cbnz w16, #0xc1488 */
  if ((ARC_W_R(c, 16)) != 0) goto L_c1488;
  /* c1358: b #0xc15b4 */
  goto L_c15b4;
L_c135c:;
  /* c135c: add x13, x15, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 15) + UINT64_C(1)));
  /* c1360: add x15, x13, x13, lsr #63 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + ((uint64_t)(ARC_X_R(c, 13)) >> 63)));
  /* c1364: asr x15, x15, #1 */
  ARC_X_W(c, 15, ((uint64_t)((int64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(1)) & 63))));
  /* c1368: sub x0, x13, x15 */
  ARC_X_W(c, 0, (ARC_X_R(c, 13) - ARC_X_R(c, 15)));
L_c136c:;
  /* c136c: cmp x15, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(1));
  /* c1370: b.lt #0xc138c */
  if (ARC_COND(c, 11)) goto L_c138c;
  /* c1374: cmp x15, #8 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(8));
  /* c1378: b.hs #0xc1394 */
  if (ARC_COND(c, 2)) goto L_c1394;
  /* c137c: mov x17, xzr */
  ARC_X_W(c, 17, ARC_X_R(c, 31));
  /* c1380: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* c1384: mov x1, x11 */
  ARC_X_W(c, 1, ARC_X_R(c, 11));
  /* c1388: b #0xc145c */
  goto L_c145c;
L_c138c:;
  /* c138c: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* c1390: b #0xc147c */
  goto L_c147c;
L_c1394:;
  /* c1394: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* c1398: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* c139c: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* c13a0: movi v2.2d, #0000000000000000 */
  arc_v_clear(c, 2);
  /* c13a4: movi v3.2d, #0000000000000000 */
  arc_v_clear(c, 3);
  /* c13a8: and x17, x15, #0x7ffffffffffffff8 */
  ARC_X_W(c, 17, (ARC_X_R(c, 15) & UINT64_C(9223372036854775800)));
  /* c13ac: dup v4.4s, w8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (ARC_W_R(c, 8));
    _t.u32[1] = (ARC_W_R(c, 8));
    _t.u32[2] = (ARC_W_R(c, 8));
    _t.u32[3] = (ARC_W_R(c, 8));
    (c)->q[4] = _t; }
  /* c13b0: ldr q5, [x13, #0xc10] */
  arc_q_w(c, 5, arc_ld64((ARC_X_R(c, 13) + INT64_C(3088))), arc_ld64((ARC_X_R(c, 13) + INT64_C(3088)) + 8));
  /* c13b4: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* c13b8: add x1, x11, x17, lsl #2 */
  ARC_X_W(c, 1, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 17)) << 2)));
  /* c13bc: ldr q6, [x13, #0xa80] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 13) + INT64_C(2688))), arc_ld64((ARC_X_R(c, 13) + INT64_C(2688)) + 8));
  /* c13c0: add x13, x11, #0x10 */
  ARC_X_W(c, 13, (ARC_X_R(c, 11) + UINT64_C(16)));
  /* c13c4: mov x3, x17 */
  ARC_X_W(c, 3, ARC_X_R(c, 17));
L_c13c8:;
  /* c13c8: ldp q7, q16, [x13, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 13) + INT64_C(-16));
    arc_q_w(c, 7, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 16, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c13cc: dup v17.2d, x27 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 27));
    _t.u64[1] = (ARC_X_R(c, 27));
    (c)->q[17] = _t; }
  /* c13d0: dup v18.2d, x4 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 4));
    _t.u64[1] = (ARC_X_R(c, 4));
    (c)->q[18] = _t; }
  /* c13d4: subs x3, x3, #8 */
  ARC_X_W(c, 3, arc_sub64(c, ARC_X_R(c, 3), UINT64_C(8)));
  /* c13d8: add x13, x13, #0x20 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(32)));
  /* c13dc: cmhs v7.4s, v7.4s, v4.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[7].u32[0] >= (c)->q[4].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[7].u32[1] >= (c)->q[4].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[7].u32[2] >= (c)->q[4].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[7].u32[3] >= (c)->q[4].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[7] = _t; }
  /* c13e0: cmhs v16.4s, v16.4s, v4.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[16].u32[0] >= (c)->q[4].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[16].u32[1] >= (c)->q[4].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[16].u32[2] >= (c)->q[4].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[16].u32[3] >= (c)->q[4].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[16] = _t; }
  /* c13e4: add v21.2d, v5.2d, v17.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[5].u64[0] + (c)->q[17].u64[0];
    _t.u64[1] = (c)->q[5].u64[1] + (c)->q[17].u64[1];
    (c)->q[21] = _t; }
  /* c13e8: add v17.2d, v6.2d, v17.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[6].u64[0] + (c)->q[17].u64[0];
    _t.u64[1] = (c)->q[6].u64[1] + (c)->q[17].u64[1];
    (c)->q[17] = _t; }
  /* c13ec: ushll2 v19.2d, v7.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[7].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[7].u32[3]) << 0);
    (c)->q[19] = _t; }
  /* c13f0: ushll v7.2d, v7.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[7].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[7].u32[1]) << 0);
    (c)->q[7] = _t; }
  /* c13f4: ushll2 v20.2d, v16.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[16].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[16].u32[3]) << 0);
    (c)->q[20] = _t; }
  /* c13f8: ushll v16.2d, v16.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[16].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[16].u32[1]) << 0);
    (c)->q[16] = _t; }
  /* c13fc: and v19.16b, v19.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] & (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] & (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] & (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] & (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] & (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] & (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] & (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] & (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] & (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] & (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] & (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] & (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] & (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] & (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] & (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] & (c)->q[18].u8[15];
    (c)->q[19] = _t; }
  /* c1400: and v7.16b, v7.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] & (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] & (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] & (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] & (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] & (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] & (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] & (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] & (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] & (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] & (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] & (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] & (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] & (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] & (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] & (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] & (c)->q[18].u8[15];
    (c)->q[7] = _t; }
  /* c1404: and v20.16b, v20.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] & (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] & (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] & (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] & (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] & (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] & (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] & (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] & (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] & (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] & (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] & (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] & (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] & (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] & (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] & (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] & (c)->q[18].u8[15];
    (c)->q[20] = _t; }
  /* c1408: and v16.16b, v16.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] & (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] & (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] & (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] & (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] & (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] & (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] & (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] & (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] & (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] & (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] & (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] & (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] & (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] & (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] & (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] & (c)->q[18].u8[15];
    (c)->q[16] = _t; }
  /* c140c: ushl v7.2d, v7.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[7].u64[0], (int8_t)(c)->q[6].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[7].u64[1], (int8_t)(c)->q[6].u64[1]);
    (c)->q[7] = _t; }
  /* c1410: ushl v18.2d, v19.2d, v5.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[19].u64[0], (int8_t)(c)->q[5].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[19].u64[1], (int8_t)(c)->q[5].u64[1]);
    (c)->q[18] = _t; }
  /* c1414: ushl v19.2d, v20.2d, v21.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[20].u64[0], (int8_t)(c)->q[21].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[20].u64[1], (int8_t)(c)->q[21].u64[1]);
    (c)->q[19] = _t; }
  /* c1418: dup v20.2d, x5 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 5));
    _t.u64[1] = (ARC_X_R(c, 5));
    (c)->q[20] = _t; }
  /* c141c: ushl v16.2d, v16.2d, v17.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[16].u64[0], (int8_t)(c)->q[17].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[16].u64[1], (int8_t)(c)->q[17].u64[1]);
    (c)->q[16] = _t; }
  /* c1420: orr v1.16b, v18.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* c1424: orr v0.16b, v7.16b, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] | (c)->q[0].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] | (c)->q[0].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] | (c)->q[0].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] | (c)->q[0].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] | (c)->q[0].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] | (c)->q[0].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] | (c)->q[0].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] | (c)->q[0].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] | (c)->q[0].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] | (c)->q[0].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] | (c)->q[0].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] | (c)->q[0].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] | (c)->q[0].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] | (c)->q[0].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] | (c)->q[0].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] | (c)->q[0].u8[15];
    (c)->q[0] = _t; }
  /* c1428: orr v3.16b, v19.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* c142c: orr v2.16b, v16.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* c1430: add v5.2d, v5.2d, v20.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[5].u64[0] + (c)->q[20].u64[0];
    _t.u64[1] = (c)->q[5].u64[1] + (c)->q[20].u64[1];
    (c)->q[5] = _t; }
  /* c1434: add v6.2d, v6.2d, v20.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[6].u64[0] + (c)->q[20].u64[0];
    _t.u64[1] = (c)->q[6].u64[1] + (c)->q[20].u64[1];
    (c)->q[6] = _t; }
  /* c1438: b.ne #0xc13c8 */
  if (ARC_COND(c, 1)) goto L_c13c8;
  /* c143c: orr v0.16b, v2.16b, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] | (c)->q[0].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] | (c)->q[0].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] | (c)->q[0].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] | (c)->q[0].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] | (c)->q[0].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] | (c)->q[0].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] | (c)->q[0].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] | (c)->q[0].u8[7];
    _t.u8[8] = (c)->q[2].u8[8] | (c)->q[0].u8[8];
    _t.u8[9] = (c)->q[2].u8[9] | (c)->q[0].u8[9];
    _t.u8[10] = (c)->q[2].u8[10] | (c)->q[0].u8[10];
    _t.u8[11] = (c)->q[2].u8[11] | (c)->q[0].u8[11];
    _t.u8[12] = (c)->q[2].u8[12] | (c)->q[0].u8[12];
    _t.u8[13] = (c)->q[2].u8[13] | (c)->q[0].u8[13];
    _t.u8[14] = (c)->q[2].u8[14] | (c)->q[0].u8[14];
    _t.u8[15] = (c)->q[2].u8[15] | (c)->q[0].u8[15];
    (c)->q[0] = _t; }
  /* c1440: orr v1.16b, v3.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[3].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[3].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[3].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[3].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[3].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[3].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[3].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[3].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[3].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[3].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[3].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[3].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[3].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[3].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[3].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[3].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* c1444: cmp x15, x17 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 17));
  /* c1448: orr v0.16b, v0.16b, v1.16b */
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
  /* c144c: ext v1.16b, v0.16b, v0.16b, #8 */
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
  /* c1450: orr v0.8b, v0.8b, v1.8b */
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
  /* c1454: fmov x13, d0 */
  ARC_X_W(c, 13, ARC_DU_R(c, 0));
  /* c1458: b.eq #0xc147c */
  if (ARC_COND(c, 0)) goto L_c147c;
L_c145c:;
  /* c145c: ldr w3, [x1], #4 */
  { const uint64_t _a = ARC_X_R(c, 1);
    ARC_X_W(c, 1, ARC_X_R(c, 1) + INT64_C(4));
    ARC_W_W(c, 3, arc_ld32(_a));
  }
  /* c1460: cmp w3, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 3), ARC_W_R(c, 8));
  /* c1464: cset w3, hs */
  ARC_W_W(c, 3, (ARC_COND(c, 2) ? 1 : 0));
  /* c1468: lsl x3, x3, x17 */
  ARC_X_W(c, 3, ((uint64_t)(ARC_X_R(c, 3)) << ((ARC_X_R(c, 17)) & 63)));
  /* c146c: add x17, x17, #1 */
  ARC_X_W(c, 17, (ARC_X_R(c, 17) + UINT64_C(1)));
  /* c1470: cmp x15, x17 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 17));
  /* c1474: orr x13, x3, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 3) | ARC_X_R(c, 13)));
  /* c1478: b.ne #0xc145c */
  if (ARC_COND(c, 1)) goto L_c145c;
L_c147c:;
  /* c147c: mov x17, x15 */
  ARC_X_W(c, 17, ARC_X_R(c, 15));
  /* c1480: mov x15, x0 */
  ARC_X_W(c, 15, ARC_X_R(c, 0));
  /* c1484: cbz w16, #0xc15b4 */
  if ((ARC_W_R(c, 16)) == 0) goto L_c15b4;
L_c1488:;
  /* c1488: cmp x15, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(1));
  /* c148c: b.lt #0xc14a8 */
  if (ARC_COND(c, 11)) goto L_c14a8;
  /* c1490: cmp x15, #8 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(8));
  /* c1494: b.hs #0xc14bc */
  if (ARC_COND(c, 2)) goto L_c14bc;
  /* c1498: mov x16, xzr */
  ARC_X_W(c, 16, ARC_X_R(c, 31));
  /* c149c: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* c14a0: mov x0, x12 */
  ARC_X_W(c, 0, ARC_X_R(c, 12));
  /* c14a4: b #0xc1594 */
  goto L_c1594;
L_c14a8:;
  /* c14a8: cmp x13, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(0));
  /* c14ac: csel x14, x17, xzr, eq */
  ARC_X_W(c, 14, (ARC_COND(c, 0) ? (ARC_X_R(c, 17)) : ARC_X_R(c, 31)));
  /* c14b0: cbz x13, #0xc1764 */
  if ((ARC_X_R(c, 13)) == 0) goto L_c1764;
  /* c14b4: sub x12, x12, x15, lsl #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 15)) << 2)));
  /* c14b8: b #0xc1624 */
  goto L_c1624;
L_c14bc:;
  /* c14bc: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* c14c0: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* c14c4: adrp x14, #0x52000 */
  ARC_X_W(c, 14, (arc_image_bases[1] + UINT64_C(335872)));
  /* c14c8: movi v2.2d, #0000000000000000 */
  arc_v_clear(c, 2);
  /* c14cc: movi v3.2d, #0000000000000000 */
  arc_v_clear(c, 3);
  /* c14d0: and x16, x15, #0x7ffffffffffffff8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 15) & UINT64_C(9223372036854775800)));
  /* c14d4: dup v4.4s, w8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (ARC_W_R(c, 8));
    _t.u32[1] = (ARC_W_R(c, 8));
    _t.u32[2] = (ARC_W_R(c, 8));
    _t.u32[3] = (ARC_W_R(c, 8));
    (c)->q[4] = _t; }
  /* c14d8: ldr q5, [x14, #0xc10] */
  arc_q_w(c, 5, arc_ld64((ARC_X_R(c, 14) + INT64_C(3088))), arc_ld64((ARC_X_R(c, 14) + INT64_C(3088)) + 8));
  /* c14dc: adrp x14, #0x52000 */
  ARC_X_W(c, 14, (arc_image_bases[1] + UINT64_C(335872)));
  /* c14e0: sub x0, x12, x16, lsl #2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 16)) << 2)));
  /* c14e4: ldr q6, [x14, #0xa80] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 14) + INT64_C(2688))), arc_ld64((ARC_X_R(c, 14) + INT64_C(2688)) + 8));
  /* c14e8: sub x14, x12, #0xc */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) - UINT64_C(12)));
  /* c14ec: mov x1, x16 */
  ARC_X_W(c, 1, ARC_X_R(c, 16));
L_c14f0:;
  /* c14f0: ldp q16, q7, [x14, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 14) + INT64_C(-16));
    arc_q_w(c, 16, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 7, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c14f4: dup v17.2d, x27 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 27));
    _t.u64[1] = (ARC_X_R(c, 27));
    (c)->q[17] = _t; }
  /* c14f8: dup v18.2d, x4 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 4));
    _t.u64[1] = (ARC_X_R(c, 4));
    (c)->q[18] = _t; }
  /* c14fc: sub x1, x1, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) - UINT64_C(8)));
  /* c1500: sub x14, x14, #0x20 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(32)));
  /* c1504: rev64 v7.4s, v7.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[7].u32[1];
    _t.u32[1] = (c)->q[7].u32[0];
    _t.u32[2] = (c)->q[7].u32[3];
    _t.u32[3] = (c)->q[7].u32[2];
    (c)->q[7] = _t; }
  /* c1508: rev64 v16.4s, v16.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[16].u32[1];
    _t.u32[1] = (c)->q[16].u32[0];
    _t.u32[2] = (c)->q[16].u32[3];
    _t.u32[3] = (c)->q[16].u32[2];
    (c)->q[16] = _t; }
  /* c150c: add v21.2d, v5.2d, v17.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[5].u64[0] + (c)->q[17].u64[0];
    _t.u64[1] = (c)->q[5].u64[1] + (c)->q[17].u64[1];
    (c)->q[21] = _t; }
  /* c1510: add v17.2d, v6.2d, v17.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[6].u64[0] + (c)->q[17].u64[0];
    _t.u64[1] = (c)->q[6].u64[1] + (c)->q[17].u64[1];
    (c)->q[17] = _t; }
  /* c1514: ext v7.16b, v7.16b, v7.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[8];
    _t.u8[1] = (c)->q[7].u8[9];
    _t.u8[2] = (c)->q[7].u8[10];
    _t.u8[3] = (c)->q[7].u8[11];
    _t.u8[4] = (c)->q[7].u8[12];
    _t.u8[5] = (c)->q[7].u8[13];
    _t.u8[6] = (c)->q[7].u8[14];
    _t.u8[7] = (c)->q[7].u8[15];
    _t.u8[8] = (c)->q[7].u8[0];
    _t.u8[9] = (c)->q[7].u8[1];
    _t.u8[10] = (c)->q[7].u8[2];
    _t.u8[11] = (c)->q[7].u8[3];
    _t.u8[12] = (c)->q[7].u8[4];
    _t.u8[13] = (c)->q[7].u8[5];
    _t.u8[14] = (c)->q[7].u8[6];
    _t.u8[15] = (c)->q[7].u8[7];
    (c)->q[7] = _t; }
  /* c1518: ext v16.16b, v16.16b, v16.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[8];
    _t.u8[1] = (c)->q[16].u8[9];
    _t.u8[2] = (c)->q[16].u8[10];
    _t.u8[3] = (c)->q[16].u8[11];
    _t.u8[4] = (c)->q[16].u8[12];
    _t.u8[5] = (c)->q[16].u8[13];
    _t.u8[6] = (c)->q[16].u8[14];
    _t.u8[7] = (c)->q[16].u8[15];
    _t.u8[8] = (c)->q[16].u8[0];
    _t.u8[9] = (c)->q[16].u8[1];
    _t.u8[10] = (c)->q[16].u8[2];
    _t.u8[11] = (c)->q[16].u8[3];
    _t.u8[12] = (c)->q[16].u8[4];
    _t.u8[13] = (c)->q[16].u8[5];
    _t.u8[14] = (c)->q[16].u8[6];
    _t.u8[15] = (c)->q[16].u8[7];
    (c)->q[16] = _t; }
  /* c151c: cmhi v7.4s, v4.4s, v7.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[4].u32[0] > (c)->q[7].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[4].u32[1] > (c)->q[7].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[4].u32[2] > (c)->q[7].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[4].u32[3] > (c)->q[7].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[7] = _t; }
  /* c1520: cmhi v16.4s, v4.4s, v16.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[4].u32[0] > (c)->q[16].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[4].u32[1] > (c)->q[16].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[4].u32[2] > (c)->q[16].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[4].u32[3] > (c)->q[16].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[16] = _t; }
  /* c1524: ushll2 v19.2d, v7.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[7].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[7].u32[3]) << 0);
    (c)->q[19] = _t; }
  /* c1528: ushll v7.2d, v7.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[7].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[7].u32[1]) << 0);
    (c)->q[7] = _t; }
  /* c152c: ushll2 v20.2d, v16.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[16].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[16].u32[3]) << 0);
    (c)->q[20] = _t; }
  /* c1530: ushll v16.2d, v16.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[16].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[16].u32[1]) << 0);
    (c)->q[16] = _t; }
  /* c1534: and v19.16b, v19.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] & (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] & (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] & (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] & (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] & (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] & (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] & (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] & (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] & (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] & (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] & (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] & (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] & (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] & (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] & (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] & (c)->q[18].u8[15];
    (c)->q[19] = _t; }
  /* c1538: and v7.16b, v7.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] & (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] & (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] & (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] & (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] & (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] & (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] & (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] & (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] & (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] & (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] & (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] & (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] & (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] & (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] & (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] & (c)->q[18].u8[15];
    (c)->q[7] = _t; }
  /* c153c: and v20.16b, v20.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] & (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] & (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] & (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] & (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] & (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] & (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] & (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] & (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] & (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] & (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] & (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] & (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] & (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] & (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] & (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] & (c)->q[18].u8[15];
    (c)->q[20] = _t; }
  /* c1540: and v16.16b, v16.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] & (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] & (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] & (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] & (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] & (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] & (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] & (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] & (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] & (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] & (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] & (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] & (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] & (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] & (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] & (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] & (c)->q[18].u8[15];
    (c)->q[16] = _t; }
  /* c1544: ushl v7.2d, v7.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[7].u64[0], (int8_t)(c)->q[6].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[7].u64[1], (int8_t)(c)->q[6].u64[1]);
    (c)->q[7] = _t; }
  /* c1548: ushl v18.2d, v19.2d, v5.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[19].u64[0], (int8_t)(c)->q[5].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[19].u64[1], (int8_t)(c)->q[5].u64[1]);
    (c)->q[18] = _t; }
  /* c154c: ushl v19.2d, v20.2d, v21.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[20].u64[0], (int8_t)(c)->q[21].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[20].u64[1], (int8_t)(c)->q[21].u64[1]);
    (c)->q[19] = _t; }
  /* c1550: dup v20.2d, x5 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 5));
    _t.u64[1] = (ARC_X_R(c, 5));
    (c)->q[20] = _t; }
  /* c1554: ushl v16.2d, v16.2d, v17.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[16].u64[0], (int8_t)(c)->q[17].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[16].u64[1], (int8_t)(c)->q[17].u64[1]);
    (c)->q[16] = _t; }
  /* c1558: orr v1.16b, v18.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* c155c: orr v0.16b, v7.16b, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] | (c)->q[0].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] | (c)->q[0].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] | (c)->q[0].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] | (c)->q[0].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] | (c)->q[0].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] | (c)->q[0].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] | (c)->q[0].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] | (c)->q[0].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] | (c)->q[0].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] | (c)->q[0].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] | (c)->q[0].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] | (c)->q[0].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] | (c)->q[0].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] | (c)->q[0].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] | (c)->q[0].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] | (c)->q[0].u8[15];
    (c)->q[0] = _t; }
  /* c1560: orr v3.16b, v19.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* c1564: orr v2.16b, v16.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* c1568: add v5.2d, v5.2d, v20.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[5].u64[0] + (c)->q[20].u64[0];
    _t.u64[1] = (c)->q[5].u64[1] + (c)->q[20].u64[1];
    (c)->q[5] = _t; }
  /* c156c: add v6.2d, v6.2d, v20.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[6].u64[0] + (c)->q[20].u64[0];
    _t.u64[1] = (c)->q[6].u64[1] + (c)->q[20].u64[1];
    (c)->q[6] = _t; }
  /* c1570: cbnz x1, #0xc14f0 */
  if ((ARC_X_R(c, 1)) != 0) goto L_c14f0;
  /* c1574: orr v0.16b, v2.16b, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] | (c)->q[0].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] | (c)->q[0].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] | (c)->q[0].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] | (c)->q[0].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] | (c)->q[0].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] | (c)->q[0].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] | (c)->q[0].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] | (c)->q[0].u8[7];
    _t.u8[8] = (c)->q[2].u8[8] | (c)->q[0].u8[8];
    _t.u8[9] = (c)->q[2].u8[9] | (c)->q[0].u8[9];
    _t.u8[10] = (c)->q[2].u8[10] | (c)->q[0].u8[10];
    _t.u8[11] = (c)->q[2].u8[11] | (c)->q[0].u8[11];
    _t.u8[12] = (c)->q[2].u8[12] | (c)->q[0].u8[12];
    _t.u8[13] = (c)->q[2].u8[13] | (c)->q[0].u8[13];
    _t.u8[14] = (c)->q[2].u8[14] | (c)->q[0].u8[14];
    _t.u8[15] = (c)->q[2].u8[15] | (c)->q[0].u8[15];
    (c)->q[0] = _t; }
  /* c1578: orr v1.16b, v3.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[3].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[3].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[3].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[3].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[3].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[3].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[3].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[3].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[3].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[3].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[3].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[3].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[3].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[3].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[3].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[3].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* c157c: cmp x15, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 16));
  /* c1580: orr v0.16b, v0.16b, v1.16b */
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
  /* c1584: ext v1.16b, v0.16b, v0.16b, #8 */
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
  /* c1588: orr v0.8b, v0.8b, v1.8b */
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
  /* c158c: fmov x14, d0 */
  ARC_X_W(c, 14, ARC_DU_R(c, 0));
  /* c1590: b.eq #0xc15b4 */
  if (ARC_COND(c, 0)) goto L_c15b4;
L_c1594:;
  /* c1594: ldr w1, [x0], #0xfffffffffffffffc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(-4));
    ARC_W_W(c, 1, arc_ld32(_a));
  }
  /* c1598: cmp w1, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 1), ARC_W_R(c, 8));
  /* c159c: cset w1, lo */
  ARC_W_W(c, 1, (ARC_COND(c, 3) ? 1 : 0));
  /* c15a0: lsl x1, x1, x16 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 1)) << ((ARC_X_R(c, 16)) & 63)));
  /* c15a4: add x16, x16, #1 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1)));
  /* c15a8: cmp x15, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 16));
  /* c15ac: orr x14, x1, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 1) | ARC_X_R(c, 14)));
  /* c15b0: b.ne #0xc1594 */
  if (ARC_COND(c, 1)) goto L_c1594;
L_c15b4:;
  /* c15b4: cbz x13, #0xc15f8 */
  if ((ARC_X_R(c, 13)) == 0) goto L_c15f8;
  /* c15b8: cbz x14, #0xc15f8 */
  if ((ARC_X_R(c, 14)) == 0) goto L_c15f8;
L_c15bc:;
  /* c15bc: rbit x16, x14 */
  ARC_X_W(c, 16, arc_rbit64(ARC_X_R(c, 14)));
  /* c15c0: rbit x0, x13 */
  ARC_X_W(c, 0, arc_rbit64(ARC_X_R(c, 13)));
  /* c15c4: sub x1, x14, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 14) - UINT64_C(1)));
  /* c15c8: sub x4, x13, #1 */
  ARC_X_W(c, 4, (ARC_X_R(c, 13) - UINT64_C(1)));
  /* c15cc: and x14, x1, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 1) & ARC_X_R(c, 14)));
  /* c15d0: clz x16, x16 */
  ARC_X_W(c, 16, arc_clz64(ARC_X_R(c, 16)));
  /* c15d4: clz x0, x0 */
  ARC_X_W(c, 0, arc_clz64(ARC_X_R(c, 0)));
  /* c15d8: and x13, x4, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 4) & ARC_X_R(c, 13)));
  /* c15dc: sub x16, x12, x16, lsl #2 */
  ARC_X_W(c, 16, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 16)) << 2)));
  /* c15e0: ldr w5, [x11, x0, lsl #2] */
  ARC_W_W(c, 5, arc_ld32((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 0)) << 2))));
  /* c15e4: ldr w3, [x16] */
  ARC_W_W(c, 3, arc_ld32(ARC_X_R(c, 16)));
  /* c15e8: str w3, [x11, x0, lsl #2] */
  arc_st32((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 0)) << 2)), ARC_W_R(c, 3));
  /* c15ec: str w5, [x16] */
  arc_st32(ARC_X_R(c, 16), ARC_W_R(c, 5));
  /* c15f0: cbz x14, #0xc15f8 */
  if ((ARC_X_R(c, 14)) == 0) goto L_c15f8;
  /* c15f4: cbnz x13, #0xc15bc */
  if ((ARC_X_R(c, 13)) != 0) goto L_c15bc;
L_c15f8:;
  /* c15f8: cmp x14, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(0));
  /* c15fc: csel x15, x15, xzr, eq */
  ARC_X_W(c, 15, (ARC_COND(c, 0) ? (ARC_X_R(c, 15)) : ARC_X_R(c, 31)));
  /* c1600: sub x12, x12, x15, lsl #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 15)) << 2)));
  /* c1604: cbnz x13, #0xc1624 */
  if ((ARC_X_R(c, 13)) != 0) goto L_c1624;
  /* c1608: add x23, x11, x17, lsl #2 */
  ARC_X_W(c, 23, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 17)) << 2)));
  /* c160c: cbnz x14, #0xc165c */
  if ((ARC_X_R(c, 14)) != 0) goto L_c165c;
  /* c1610: b #0xc1688 */
  goto L_c1688;
L_c1614:;
  /* c1614: lsl x14, x28, x14 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 28)) << ((ARC_X_R(c, 14)) & 63)));
  /* c1618: sub x12, x12, #4 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(4)));
  /* c161c: bic x13, x13, x14 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) & (~ARC_X_R(c, 14))));
  /* c1620: cbz x13, #0xc1684 */
  if ((ARC_X_R(c, 13)) == 0) goto L_c1684;
L_c1624:;
  /* c1624: clz x14, x13 */
  ARC_X_W(c, 14, arc_clz64(ARC_X_R(c, 13)));
  /* c1628: eor x14, x14, #0x3f */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) ^ UINT64_C(63)));
  /* c162c: add x15, x11, x14, lsl #2 */
  ARC_X_W(c, 15, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 14)) << 2)));
  /* c1630: cmp x12, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 15));
  /* c1634: b.eq #0xc1614 */
  if (ARC_COND(c, 0)) goto L_c1614;
  /* c1638: ldr w16, [x12] */
  ARC_W_W(c, 16, arc_ld32(ARC_X_R(c, 12)));
  /* c163c: ldr w17, [x15] */
  ARC_W_W(c, 17, arc_ld32(ARC_X_R(c, 15)));
  /* c1640: str w16, [x15] */
  arc_st32(ARC_X_R(c, 15), ARC_W_R(c, 16));
  /* c1644: str w17, [x12] */
  arc_st32(ARC_X_R(c, 12), ARC_W_R(c, 17));
  /* c1648: b #0xc1614 */
  goto L_c1614;
L_c164c:;
  /* c164c: lsl x11, x28, x11 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 28)) << ((ARC_X_R(c, 11)) & 63)));
  /* c1650: add x23, x23, #4 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(4)));
  /* c1654: bic x14, x14, x11 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) & (~ARC_X_R(c, 11))));
  /* c1658: cbz x14, #0xc1688 */
  if ((ARC_X_R(c, 14)) == 0) goto L_c1688;
L_c165c:;
  /* c165c: clz x11, x14 */
  ARC_X_W(c, 11, arc_clz64(ARC_X_R(c, 14)));
  /* c1660: eor x11, x11, #0x3f */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) ^ UINT64_C(63)));
  /* c1664: sub x13, x12, x11, lsl #2 */
  ARC_X_W(c, 13, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 11)) << 2)));
  /* c1668: cmp x23, x13 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 13));
  /* c166c: b.eq #0xc164c */
  if (ARC_COND(c, 0)) goto L_c164c;
  /* c1670: ldr w15, [x23] */
  ARC_W_W(c, 15, arc_ld32(ARC_X_R(c, 23)));
  /* c1674: ldr w16, [x13] */
  ARC_W_W(c, 16, arc_ld32(ARC_X_R(c, 13)));
  /* c1678: str w15, [x13] */
  arc_st32(ARC_X_R(c, 13), ARC_W_R(c, 15));
  /* c167c: str w16, [x23] */
  arc_st32(ARC_X_R(c, 23), ARC_W_R(c, 16));
  /* c1680: b #0xc164c */
  goto L_c164c;
L_c1684:;
  /* c1684: add x23, x12, #4 */
  ARC_X_W(c, 23, (ARC_X_R(c, 12) + UINT64_C(4)));
L_c1688:;
  /* c1688: sub x24, x23, #4 */
  ARC_X_W(c, 24, (ARC_X_R(c, 23) - UINT64_C(4)));
  /* c168c: cmp x19, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 24));
  /* c1690: b.eq #0xc169c */
  if (ARC_COND(c, 0)) goto L_c169c;
  /* c1694: ldr w11, [x24] */
  ARC_W_W(c, 11, arc_ld32(ARC_X_R(c, 24)));
  /* c1698: str w11, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 11));
L_c169c:;
  /* c169c: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* c16a0: str w8, [x24] */
  arc_st32(ARC_X_R(c, 24), ARC_W_R(c, 8));
  /* c16a4: b.lo #0xc1708 */
  if (ARC_COND(c, 3)) goto L_c1708;
  /* c16a8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* c16ac: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* c16b0: mov x22, x26 */
  ARC_X_W(c, 22, ARC_X_R(c, 26));
  /* c16b4: mov x27, x7 */
  ARC_X_W(c, 27, ARC_X_R(c, 7));
  /* c16b8: mov x26, x6 */
  ARC_X_W(c, 26, ARC_X_R(c, 6));
  /* c16bc: bl #0xd0060 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(792256));
  fn1_d0060(c);
  /* c16c0: mov w25, w0 */
  ARC_W_W(c, 25, ARC_W_R(c, 0));
  /* c16c4: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* c16c8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* c16cc: bl #0xd0060 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(792272));
  fn1_d0060(c);
  /* c16d0: tbnz w0, #0, #0xc1820 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_c1820;
  /* c16d4: ldp q31, q30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_q_w(c, 31, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 30, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c16d8: mov x6, x26 */
  ARC_X_W(c, 6, ARC_X_R(c, 26));
  /* c16dc: ldp q9, q8, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_q_w(c, 9, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 8, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c16e0: mov w4, #1 */
  ARC_W_W(c, 4, UINT64_C(1));
  /* c16e4: ldp q11, q10, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_q_w(c, 11, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 10, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c16e8: mov x7, x27 */
  ARC_X_W(c, 7, ARC_X_R(c, 27));
  /* c16ec: ldp q13, q12, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_q_w(c, 13, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 12, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c16f0: mov w5, #8 */
  ARC_W_W(c, 5, UINT64_C(8));
  /* c16f4: ldp q15, q14, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_q_w(c, 15, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 14, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c16f8: mov x26, x22 */
  ARC_X_W(c, 26, ARC_X_R(c, 22));
  /* c16fc: mov x22, #-0x100 */
  ARC_X_W(c, 22, UINT64_C(18446744073709551360));
  /* c1700: mov w27, #4 */
  ARC_W_W(c, 27, UINT64_C(4));
  /* c1704: tbnz w25, #0, #0xc0b00 */
  if (((ARC_W_R(c, 25)) >> 0 & 1) != 0) goto L_c0b00;
L_c1708:;
  /* c1708: ldr w8, [sp, #0xac] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(172))));
  /* c170c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* c1710: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* c1714: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* c1718: mov x19, x21 */
  ARC_X_W(c, 19, ARC_X_R(c, 21));
  /* c171c: mov x21, x6 */
  ARC_X_W(c, 21, ARC_X_R(c, 6));
  /* c1720: and w3, w8, #1 */
  ARC_W_W(c, 3, (ARC_W_R(c, 8) & UINT64_C(1)));
  /* c1724: mov x24, x7 */
  ARC_X_W(c, 24, ARC_X_R(c, 7));
  /* c1728: bl #0xc0950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(792364));
  fn1_c0950(c);
  /* c172c: ldp q15, q14, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_q_w(c, 15, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 14, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c1730: mov w27, #4 */
  ARC_W_W(c, 27, UINT64_C(4));
  /* c1734: ldp q13, q12, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_q_w(c, 13, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 12, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c1738: mov x22, #-0x100 */
  ARC_X_W(c, 22, UINT64_C(18446744073709551360));
  /* c173c: ldp q11, q10, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_q_w(c, 11, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 10, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c1740: mov w5, #8 */
  ARC_W_W(c, 5, UINT64_C(8));
  /* c1744: ldp q9, q8, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_q_w(c, 9, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 8, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c1748: mov x7, x24 */
  ARC_X_W(c, 7, ARC_X_R(c, 24));
  /* c174c: ldp q31, q30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_q_w(c, 31, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 30, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c1750: mov w4, #1 */
  ARC_W_W(c, 4, UINT64_C(1));
  /* c1754: mov x6, x21 */
  ARC_X_W(c, 6, ARC_X_R(c, 21));
  /* c1758: mov x21, x19 */
  ARC_X_W(c, 21, ARC_X_R(c, 19));
  /* c175c: str wzr, [sp, #0xac] */
  arc_st32(((c)->sp + INT64_C(172)), ARC_W_R(c, 31));
  /* c1760: b #0xc0b00 */
  goto L_c0b00;
L_c1764:;
  /* c1764: add x23, x11, x14, lsl #2 */
  ARC_X_W(c, 23, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 14)) << 2)));
  /* c1768: b #0xc1688 */
  goto L_c1688;
L_c176c:;
  /* c176c: ldur w9, [x20, #-4] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c1770: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c1774: b.hs #0xc178c */
  if (ARC_COND(c, 2)) goto L_c178c;
  /* c1778: mov x23, x19 */
  ARC_X_W(c, 23, ARC_X_R(c, 19));
L_c177c:;
  /* c177c: ldr w9, [x23, #4]! */
  { const uint64_t _a = (ARC_X_R(c, 23) + INT64_C(4));
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(4));
    ARC_W_W(c, 9, arc_ld32(_a));
  }
  /* c1780: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c1784: b.hs #0xc177c */
  if (ARC_COND(c, 2)) goto L_c177c;
  /* c1788: b #0xc17ac */
  goto L_c17ac;
L_c178c:;
  /* c178c: add x9, x19, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(4)));
L_c1790:;
  /* c1790: mov x23, x9 */
  ARC_X_W(c, 23, ARC_X_R(c, 9));
  /* c1794: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c1798: b.hs #0xc17ac */
  if (ARC_COND(c, 2)) goto L_c17ac;
  /* c179c: mov x9, x23 */
  ARC_X_W(c, 9, ARC_X_R(c, 23));
  /* c17a0: ldr w10, [x9], #4 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    ARC_W_W(c, 10, arc_ld32(_a));
  }
  /* c17a4: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c17a8: b.hs #0xc1790 */
  if (ARC_COND(c, 2)) goto L_c1790;
L_c17ac:;
  /* c17ac: cmp x23, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 20));
  /* c17b0: mov x9, x20 */
  ARC_X_W(c, 9, ARC_X_R(c, 20));
  /* c17b4: b.hs #0xc17c8 */
  if (ARC_COND(c, 2)) goto L_c17c8;
  /* c17b8: mov x9, x20 */
  ARC_X_W(c, 9, ARC_X_R(c, 20));
L_c17bc:;
  /* c17bc: ldr w10, [x9, #-4]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(-4));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(-4));
    ARC_W_W(c, 10, arc_ld32(_a));
  }
  /* c17c0: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c17c4: b.lo #0xc17bc */
  if (ARC_COND(c, 3)) goto L_c17bc;
L_c17c8:;
  /* c17c8: cmp x23, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 9));
  /* c17cc: b.hs #0xc1800 */
  if (ARC_COND(c, 2)) goto L_c1800;
  /* c17d0: ldr w10, [x23] */
  ARC_W_W(c, 10, arc_ld32(ARC_X_R(c, 23)));
  /* c17d4: ldr w11, [x9] */
  ARC_W_W(c, 11, arc_ld32(ARC_X_R(c, 9)));
L_c17d8:;
  /* c17d8: str w11, [x23] */
  arc_st32(ARC_X_R(c, 23), ARC_W_R(c, 11));
  /* c17dc: str w10, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 10));
L_c17e0:;
  /* c17e0: ldr w10, [x23, #4]! */
  { const uint64_t _a = (ARC_X_R(c, 23) + INT64_C(4));
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(4));
    ARC_W_W(c, 10, arc_ld32(_a));
  }
  /* c17e4: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c17e8: b.hs #0xc17e0 */
  if (ARC_COND(c, 2)) goto L_c17e0;
L_c17ec:;
  /* c17ec: ldr w11, [x9, #-4]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(-4));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(-4));
    ARC_W_W(c, 11, arc_ld32(_a));
  }
  /* c17f0: cmp w8, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 11));
  /* c17f4: b.lo #0xc17ec */
  if (ARC_COND(c, 3)) goto L_c17ec;
  /* c17f8: cmp x23, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 9));
  /* c17fc: b.lo #0xc17d8 */
  if (ARC_COND(c, 3)) goto L_c17d8;
L_c1800:;
  /* c1800: sub x9, x23, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) - UINT64_C(4)));
  /* c1804: cmp x19, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* c1808: b.eq #0xc1814 */
  if (ARC_COND(c, 0)) goto L_c1814;
  /* c180c: ldr w10, [x9] */
  ARC_W_W(c, 10, arc_ld32(ARC_X_R(c, 9)));
  /* c1810: str w10, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 10));
L_c1814:;
  /* c1814: str wzr, [sp, #0xac] */
  arc_st32(((c)->sp + INT64_C(172)), ARC_W_R(c, 31));
  /* c1818: str w8, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 8));
  /* c181c: b #0xc0b00 */
  goto L_c0b00;
L_c1820:;
  /* c1820: ldp q31, q30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_q_w(c, 31, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 30, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c1824: mov x20, x24 */
  ARC_X_W(c, 20, ARC_X_R(c, 24));
  /* c1828: ldp q9, q8, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_q_w(c, 9, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 8, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c182c: mov x6, x26 */
  ARC_X_W(c, 6, ARC_X_R(c, 26));
  /* c1830: ldp q11, q10, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_q_w(c, 11, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 10, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c1834: mov w4, #1 */
  ARC_W_W(c, 4, UINT64_C(1));
  /* c1838: ldp q13, q12, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_q_w(c, 13, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 12, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c183c: mov x7, x27 */
  ARC_X_W(c, 7, ARC_X_R(c, 27));
  /* c1840: ldp q15, q14, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_q_w(c, 15, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 14, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c1844: mov w5, #8 */
  ARC_W_W(c, 5, UINT64_C(8));
  /* c1848: mov x26, x22 */
  ARC_X_W(c, 26, ARC_X_R(c, 22));
  /* c184c: mov x22, #-0x100 */
  ARC_X_W(c, 22, UINT64_C(18446744073709551360));
  /* c1850: mov w27, #4 */
  ARC_W_W(c, 27, UINT64_C(4));
  /* c1854: tbz w25, #0, #0xc0afc */
  if (((ARC_W_R(c, 25)) >> 0 & 1) == 0) goto L_c0afc;
  /* c1858: b #0xc19f0 */
  goto L_c19f0;
L_c185c:;
  /* c185c: ldp w8, w9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_W_W(c, 8, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* c1860: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c1864: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c1868: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c186c: stp w8, w10, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st32(_pa, ARC_W_R(c, 8));
    arc_st32(_pa + 4, ARC_W_R(c, 10));
  }
  /* c1870: ldr w8, [x19, #0xc] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(12))));
  /* c1874: ldur w9, [x20, #-4] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c1878: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c187c: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c1880: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c1884: stur w10, [x20, #-4] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 10));
  /* c1888: str w8, [x19, #0xc] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(12)), ARC_W_R(c, 8));
  /* c188c: ldr w9, [x19, #8] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 19) + INT64_C(8))));
  /* c1890: ldur w8, [x20, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c1894: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c1898: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c189c: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c18a0: stur w10, [x20, #-4] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 10));
  /* c18a4: ldp w9, w10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* c18a8: ldr w11, [x19, #4] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(4))));
  /* c18ac: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c18b0: csel w9, w9, w10, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c18b4: csel w8, w8, w10, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c18b8: stp w9, w8, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    arc_st32(_pa, ARC_W_R(c, 9));
    arc_st32(_pa + 4, ARC_W_R(c, 8));
  }
  /* c18bc: ldur w8, [x20, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c18c0: cmp w11, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 8));
  /* c18c4: csel w9, w11, w8, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 8)));
  /* c18c8: csel w8, w11, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 8)));
  /* c18cc: stur w9, [x20, #-4] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 9));
  /* c18d0: ldp w11, w10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* c18d4: ldr w9, [x19] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 19)));
  /* c18d8: cmp w10, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 9));
  /* c18dc: csel w12, w10, w9, lo */
  ARC_W_W(c, 12, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* c18e0: csel w10, w10, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* c18e4: cmp w12, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 11));
  /* c18e8: csel w9, w9, w11, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 11)));
  /* c18ec: csel w11, w12, w11, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 11)));
  /* c18f0: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* c18f4: csel w12, w10, w8, lo */
  ARC_W_W(c, 12, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c18f8: csel w10, w10, w8, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c18fc: cmp w12, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 11));
  /* c1900: csel w8, w8, w11, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 11)));
  /* c1904: stp w9, w8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st32(_pa, ARC_W_R(c, 9));
    arc_st32(_pa + 4, ARC_W_R(c, 8));
  }
  /* c1908: csel w8, w12, w11, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 11)));
  /* c190c: stp w8, w10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    arc_st32(_pa, ARC_W_R(c, 8));
    arc_st32(_pa + 4, ARC_W_R(c, 10));
  }
  /* c1910: b #0xc19f0 */
  goto L_c19f0;
L_c1914:;
  /* c1914: ldur w8, [x20, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c1918: ldr w9, [x19] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 19)));
  /* c191c: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c1920: b.hs #0xc19f0 */
  if (ARC_COND(c, 2)) goto L_c19f0;
  /* c1924: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* c1928: stur w9, [x20, #-4] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 9));
  /* c192c: b #0xc19f0 */
  goto L_c19f0;
L_c1930:;
  /* c1930: ldr w8, [x19, #4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(4))));
  /* c1934: ldur w9, [x20, #-4] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c1938: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c193c: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c1940: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c1944: stur w10, [x20, #-4] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 10));
  /* c1948: str w8, [x19, #4] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(4)), ARC_W_R(c, 8));
  /* c194c: ldr w9, [x19] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 19)));
  /* c1950: ldur w8, [x20, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c1954: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c1958: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c195c: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c1960: stur w10, [x20, #-4] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 10));
  /* c1964: ldp w9, w10, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* c1968: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c196c: csel w9, w9, w10, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c1970: csel w8, w8, w10, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c1974: str w9, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* c1978: b #0xc19ec */
  goto L_c19ec;
L_c197c:;
  /* c197c: ldp w10, w8, [x19, #4] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(4));
    ARC_W_W(c, 10, arc_ld32(_pa));
    ARC_W_W(c, 8, arc_ld32(_pa + 4));
  }
  /* c1980: ldr w9, [x19] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 19)));
  /* c1984: cmp w9, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 8));
  /* c1988: csel w11, w9, w8, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* c198c: csel w8, w9, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* c1990: str w11, [x19, #8] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(8)), ARC_W_R(c, 11));
  /* c1994: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* c1998: ldur w8, [x20, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c199c: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* c19a0: csel w9, w10, w8, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c19a4: csel w8, w10, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c19a8: stur w9, [x20, #-4] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 9));
  /* c19ac: ldr w9, [x19] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 19)));
  /* c19b0: cmp w9, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 8));
  /* c19b4: csel w10, w9, w8, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* c19b8: csel w8, w9, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* c19bc: stp w8, w10, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st32(_pa, ARC_W_R(c, 8));
    arc_st32(_pa + 4, ARC_W_R(c, 10));
  }
  /* c19c0: ldr w8, [x19, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(8))));
  /* c19c4: ldur w9, [x20, #-4] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c19c8: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c19cc: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c19d0: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c19d4: stur w10, [x20, #-4] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 10));
  /* c19d8: ldr w10, [x19, #4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 19) + INT64_C(4))));
  /* c19dc: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* c19e0: csel w9, w10, w8, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c19e4: csel w8, w10, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c19e8: str w9, [x19, #8] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(8)), ARC_W_R(c, 9));
L_c19ec:;
  /* c19ec: str w8, [x19, #4] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(4)), ARC_W_R(c, 8));
L_c19f0:;
  /* c19f0: add sp, sp, #0x1f0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(496)));
  /* c19f4: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* c19f8: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* c19fc: ldp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* c1a00: ldp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* c1a04: ldp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* c1a08: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* c1a0c: ldp d9, d8, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_du_w(c, 9, arc_ld64(_pa));
    arc_du_w(c, 8, arc_ld64((_pa + 8)));
  }
  /* c1a10: ldp d11, d10, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_du_w(c, 11, arc_ld64(_pa));
    arc_du_w(c, 10, arc_ld64((_pa + 8)));
  }
  /* c1a14: ldp d13, d12, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_du_w(c, 13, arc_ld64(_pa));
    arc_du_w(c, 12, arc_ld64((_pa + 8)));
  }
  /* c1a18: ldp d15, d14, [sp], #0xa0 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(160);
    arc_du_w(c, 15, arc_ld64(_pa));
    arc_du_w(c, 14, arc_ld64((_pa + 8)));
  }
  /* c1a1c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* c1a20: ret  */
  return;
L_c1a24:;
  /* c1a24: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* c1a28: add x9, x19, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* c1a2c: ldr w10, [sp, #0xac] */
  ARC_W_W(c, 10, arc_ld32(((c)->sp + INT64_C(172))));
  /* c1a30: ccmp x9, x20, #4, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20)); }
  else { (c)->nf = 0; (c)->zf = 1;
          (c)->cf = 0; (c)->vf = 0; }
  /* c1a34: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* c1a38: tbz w10, #0, #0xc1c74 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) == 0) goto L_c1c74;
  /* c1a3c: tbnz w8, #0, #0xc19f0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_c19f0;
  /* c1a40: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* c1a44: mov x10, x19 */
  ARC_X_W(c, 10, ARC_X_R(c, 19));
  /* c1a48: b #0xc1a64 */
  goto L_c1a64;
L_c1a4c:;
  /* c1a4c: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
L_c1a50:;
  /* c1a50: str w11, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 11));
L_c1a54:;
  /* c1a54: add x9, x10, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* c1a58: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* c1a5c: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c1a60: b.eq #0xc19f0 */
  if (ARC_COND(c, 0)) goto L_c19f0;
L_c1a64:;
  /* c1a64: ldp w12, w11, [x10] */
  { const uint64_t _pa = ARC_X_R(c, 10);
    ARC_W_W(c, 12, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* c1a68: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* c1a6c: cmp w11, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 12));
  /* c1a70: b.hs #0xc1a54 */
  if (ARC_COND(c, 2)) goto L_c1a54;
  /* c1a74: mov x13, x8 */
  ARC_X_W(c, 13, ARC_X_R(c, 8));
L_c1a78:;
  /* c1a78: subs x9, x13, #4 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 13), UINT64_C(4)));
  /* c1a7c: str w12, [x19, x13] */
  arc_st32((ARC_X_R(c, 19) + ARC_X_R(c, 13)), ARC_W_R(c, 12));
  /* c1a80: b.eq #0xc1a4c */
  if (ARC_COND(c, 0)) goto L_c1a4c;
  /* c1a84: add x12, x19, x13 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + ARC_X_R(c, 13)));
  /* c1a88: mov x13, x9 */
  ARC_X_W(c, 13, ARC_X_R(c, 9));
  /* c1a8c: ldur w12, [x12, #-8] */
  ARC_W_W(c, 12, arc_ld32((ARC_X_R(c, 12) + INT64_C(-8))));
  /* c1a90: cmp w11, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 12));
  /* c1a94: b.lo #0xc1a78 */
  if (ARC_COND(c, 3)) goto L_c1a78;
  /* c1a98: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* c1a9c: b #0xc1a50 */
  goto L_c1a50;
L_c1aa0:;
  /* c1aa0: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* c1aa4: b.eq #0xc19f0 */
  if (ARC_COND(c, 0)) goto L_c19f0;
  /* c1aa8: lsr x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* c1aac: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* c1ab0: b #0xc1ac4 */
  goto L_c1ac4;
L_c1ab4:;
  /* c1ab4: str w13, [x14] */
  arc_st32(ARC_X_R(c, 14), ARC_W_R(c, 13));
L_c1ab8:;
  /* c1ab8: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* c1abc: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* c1ac0: b.le #0xc1b94 */
  if (ARC_COND(c, 13)) goto L_c1b94;
L_c1ac4:;
  /* c1ac4: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* c1ac8: b.lo #0xc1ab8 */
  if (ARC_COND(c, 3)) goto L_c1ab8;
  /* c1acc: mov w12, #1 */
  ARC_W_W(c, 12, UINT64_C(1));
  /* c1ad0: lsl x11, x10, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* c1ad4: bfi x12, x10, #1, #0x3e */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 12)) & UINT64_C(9223372036854775809)) | ((((uint64_t)(ARC_X_R(c, 10))) & UINT64_C(4611686018427387903)) << 1)));
  /* c1ad8: add x13, x11, #2 */
  ARC_X_W(c, 13, (ARC_X_R(c, 11) + UINT64_C(2)));
  /* c1adc: add x11, x19, x12, lsl #2 */
  ARC_X_W(c, 11, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 12)) << 2)));
  /* c1ae0: cmp x13, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 8));
  /* c1ae4: b.ge #0xc1b08 */
  if (ARC_COND(c, 10)) goto L_c1b08;
  /* c1ae8: mov x14, x11 */
  ARC_X_W(c, 14, ARC_X_R(c, 11));
  /* c1aec: ldr w15, [x11] */
  ARC_W_W(c, 15, arc_ld32(ARC_X_R(c, 11)));
  /* c1af0: ldr w16, [x14, #4]! */
  { const uint64_t _a = (ARC_X_R(c, 14) + INT64_C(4));
    ARC_X_W(c, 14, ARC_X_R(c, 14) + INT64_C(4));
    ARC_W_W(c, 16, arc_ld32(_a));
  }
  /* c1af4: cmp w15, w16 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 16));
  /* c1af8: csel w15, w15, w16, hi */
  ARC_W_W(c, 15, (ARC_COND(c, 8) ? (ARC_W_R(c, 15)) : ARC_W_R(c, 16)));
  /* c1afc: csel x11, x14, x11, lo */
  ARC_X_W(c, 11, (ARC_COND(c, 3) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* c1b00: csel x12, x13, x12, lo */
  ARC_X_W(c, 12, (ARC_COND(c, 3) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 12)));
  /* c1b04: b #0xc1b0c */
  goto L_c1b0c;
L_c1b08:;
  /* c1b08: ldr w15, [x11] */
  ARC_W_W(c, 15, arc_ld32(ARC_X_R(c, 11)));
L_c1b0c:;
  /* c1b0c: add x14, x19, x10, lsl #2 */
  ARC_X_W(c, 14, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 10)) << 2)));
  /* c1b10: ldr w13, [x14] */
  ARC_W_W(c, 13, arc_ld32(ARC_X_R(c, 14)));
  /* c1b14: cmp w15, w13 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 13));
  /* c1b18: b.hs #0xc1b44 */
  if (ARC_COND(c, 2)) goto L_c1b44;
  /* c1b1c: b #0xc1ab8 */
  goto L_c1ab8;
L_c1b20:;
  /* c1b20: mov x17, x11 */
  ARC_X_W(c, 17, ARC_X_R(c, 11));
  /* c1b24: ldr w15, [x11] */
  ARC_W_W(c, 15, arc_ld32(ARC_X_R(c, 11)));
  /* c1b28: ldr w0, [x17, #4]! */
  { const uint64_t _a = (ARC_X_R(c, 17) + INT64_C(4));
    ARC_X_W(c, 17, ARC_X_R(c, 17) + INT64_C(4));
    ARC_W_W(c, 0, arc_ld32(_a));
  }
  /* c1b2c: cmp w15, w0 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 0));
  /* c1b30: csel w15, w15, w0, hi */
  ARC_W_W(c, 15, (ARC_COND(c, 8) ? (ARC_W_R(c, 15)) : ARC_W_R(c, 0)));
  /* c1b34: csel x11, x17, x11, lo */
  ARC_X_W(c, 11, (ARC_COND(c, 3) ? (ARC_X_R(c, 17)) : ARC_X_R(c, 11)));
  /* c1b38: csel x12, x12, x16, lo */
  ARC_X_W(c, 12, (ARC_COND(c, 3) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 16)));
  /* c1b3c: cmp w15, w13 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 13));
  /* c1b40: b.lo #0xc1ab4 */
  if (ARC_COND(c, 3)) goto L_c1ab4;
L_c1b44:;
  /* c1b44: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* c1b48: str w15, [x14] */
  arc_st32(ARC_X_R(c, 14), ARC_W_R(c, 15));
  /* c1b4c: mov x14, x11 */
  ARC_X_W(c, 14, ARC_X_R(c, 11));
  /* c1b50: b.lt #0xc1ab4 */
  if (ARC_COND(c, 11)) goto L_c1ab4;
  /* c1b54: mov w16, #1 */
  ARC_W_W(c, 16, UINT64_C(1));
  /* c1b58: lsl x11, x12, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 12)) << ((UINT64_C(1)) & 63)));
  /* c1b5c: bfi x16, x12, #1, #0x3e */
  ARC_X_W(c, 16, (((uint64_t)(ARC_X_R(c, 16)) & UINT64_C(9223372036854775809)) | ((((uint64_t)(ARC_X_R(c, 12))) & UINT64_C(4611686018427387903)) << 1)));
  /* c1b60: add x12, x11, #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 11) + UINT64_C(2)));
  /* c1b64: add x11, x19, x16, lsl #2 */
  ARC_X_W(c, 11, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 16)) << 2)));
  /* c1b68: cmp x12, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 8));
  /* c1b6c: b.lt #0xc1b20 */
  if (ARC_COND(c, 11)) goto L_c1b20;
  /* c1b70: ldr w15, [x11] */
  ARC_W_W(c, 15, arc_ld32(ARC_X_R(c, 11)));
  /* c1b74: mov x12, x16 */
  ARC_X_W(c, 12, ARC_X_R(c, 16));
  /* c1b78: cmp w15, w13 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 13));
  /* c1b7c: b.hs #0xc1b44 */
  if (ARC_COND(c, 2)) goto L_c1b44;
  /* c1b80: b #0xc1ab4 */
  goto L_c1ab4;
L_c1b84:;
  /* c1b84: str w10, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 10));
L_c1b88:;
  /* c1b88: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* c1b8c: sub x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* c1b90: b.le #0xc19f0 */
  if (ARC_COND(c, 13)) goto L_c19f0;
L_c1b94:;
  /* c1b94: sub x9, x8, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(2)));
  /* c1b98: ldr w10, [x19] */
  ARC_W_W(c, 10, arc_ld32(ARC_X_R(c, 19)));
  /* c1b9c: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* c1ba0: lsr x11, x9, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* c1ba4: mov x12, x19 */
  ARC_X_W(c, 12, ARC_X_R(c, 19));
  /* c1ba8: b #0xc1bd4 */
  goto L_c1bd4;
L_c1bac:;
  /* c1bac: ldr w13, [x16, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 16) + INT64_C(8));
    ARC_X_W(c, 16, ARC_X_R(c, 16) + INT64_C(8));
    ARC_W_W(c, 13, arc_ld32(_a));
  }
  /* c1bb0: ldur w15, [x16, #-4] */
  ARC_W_W(c, 15, arc_ld32((ARC_X_R(c, 16) + INT64_C(-4))));
  /* c1bb4: cmp w15, w13 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 13));
  /* c1bb8: csel w15, w15, w13, hi */
  ARC_W_W(c, 15, (ARC_COND(c, 8) ? (ARC_W_R(c, 15)) : ARC_W_R(c, 13)));
  /* c1bbc: csel x9, x16, x9, lo */
  ARC_X_W(c, 9, (ARC_COND(c, 3) ? (ARC_X_R(c, 16)) : ARC_X_R(c, 9)));
  /* c1bc0: csel x13, x17, x14, lo */
  ARC_X_W(c, 13, (ARC_COND(c, 3) ? (ARC_X_R(c, 17)) : ARC_X_R(c, 14)));
L_c1bc4:;
  /* c1bc4: cmp x13, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 11));
  /* c1bc8: str w15, [x12] */
  arc_st32(ARC_X_R(c, 12), ARC_W_R(c, 15));
  /* c1bcc: mov x12, x9 */
  ARC_X_W(c, 12, ARC_X_R(c, 9));
  /* c1bd0: b.gt #0xc1c00 */
  if (ARC_COND(c, 12)) goto L_c1c00;
L_c1bd4:;
  /* c1bd4: lsl x9, x13, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 13)) << ((UINT64_C(1)) & 63)));
  /* c1bd8: add x16, x12, x13, lsl #2 */
  ARC_X_W(c, 16, (ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 13)) << 2)));
  /* c1bdc: mov w14, #1 */
  ARC_W_W(c, 14, UINT64_C(1));
  /* c1be0: bfi x14, x13, #1, #0x3f */
  ARC_X_W(c, 14, (((uint64_t)(ARC_X_R(c, 14)) & UINT64_C(1)) | ((((uint64_t)(ARC_X_R(c, 13))) & UINT64_C(9223372036854775807)) << 1)));
  /* c1be4: add x17, x9, #2 */
  ARC_X_W(c, 17, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* c1be8: add x9, x16, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 16) + UINT64_C(4)));
  /* c1bec: cmp x17, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 17), ARC_X_R(c, 8));
  /* c1bf0: b.lt #0xc1bac */
  if (ARC_COND(c, 11)) goto L_c1bac;
  /* c1bf4: ldr w15, [x9] */
  ARC_W_W(c, 15, arc_ld32(ARC_X_R(c, 9)));
  /* c1bf8: mov x13, x14 */
  ARC_X_W(c, 13, ARC_X_R(c, 14));
  /* c1bfc: b #0xc1bc4 */
  goto L_c1bc4;
L_c1c00:;
  /* c1c00: sub x20, x20, #4 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) - UINT64_C(4)));
  /* c1c04: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c1c08: b.eq #0xc1b84 */
  if (ARC_COND(c, 0)) goto L_c1b84;
  /* c1c0c: sub x11, x9, x19 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) - ARC_X_R(c, 19)));
  /* c1c10: ldr w12, [x20] */
  ARC_W_W(c, 12, arc_ld32(ARC_X_R(c, 20)));
  /* c1c14: add x11, x11, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(4)));
  /* c1c18: asr x11, x11, #2 */
  ARC_X_W(c, 11, ((uint64_t)((int64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(2)) & 63))));
  /* c1c1c: str w12, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 12));
  /* c1c20: str w10, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 10));
  /* c1c24: subs x11, x11, #2 */
  ARC_X_W(c, 11, arc_sub64(c, ARC_X_R(c, 11), UINT64_C(2)));
  /* c1c28: b.lt #0xc1b88 */
  if (ARC_COND(c, 11)) goto L_c1b88;
  /* c1c2c: lsr x10, x11, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(1)) & 63)));
  /* c1c30: ldr w11, [x9] */
  ARC_W_W(c, 11, arc_ld32(ARC_X_R(c, 9)));
  /* c1c34: add x12, x19, x10, lsl #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 10)) << 2)));
  /* c1c38: ldr w13, [x12] */
  ARC_W_W(c, 13, arc_ld32(ARC_X_R(c, 12)));
  /* c1c3c: cmp w13, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 11));
  /* c1c40: b.hs #0xc1b88 */
  if (ARC_COND(c, 2)) goto L_c1b88;
L_c1c44:;
  /* c1c44: mov x14, x9 */
  ARC_X_W(c, 14, ARC_X_R(c, 9));
  /* c1c48: mov x9, x12 */
  ARC_X_W(c, 9, ARC_X_R(c, 12));
  /* c1c4c: str w13, [x14] */
  arc_st32(ARC_X_R(c, 14), ARC_W_R(c, 13));
  /* c1c50: cbz x10, #0xc1c6c */
  if ((ARC_X_R(c, 10)) == 0) goto L_c1c6c;
  /* c1c54: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* c1c58: lsr x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* c1c5c: add x12, x19, x10, lsl #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 10)) << 2)));
  /* c1c60: ldr w13, [x12] */
  ARC_W_W(c, 13, arc_ld32(ARC_X_R(c, 12)));
  /* c1c64: cmp w13, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 11));
  /* c1c68: b.lo #0xc1c44 */
  if (ARC_COND(c, 3)) goto L_c1c44;
L_c1c6c:;
  /* c1c6c: str w11, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 11));
  /* c1c70: b #0xc1b88 */
  goto L_c1b88;
L_c1c74:;
  /* c1c74: tbz w8, #0, #0xc1c88 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_c1c88;
  /* c1c78: b #0xc19f0 */
  goto L_c19f0;
L_c1c7c:;
  /* c1c7c: add x9, x19, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* c1c80: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c1c84: b.eq #0xc19f0 */
  if (ARC_COND(c, 0)) goto L_c19f0;
L_c1c88:;
  /* c1c88: ldp w10, w8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_W_W(c, 10, arc_ld32(_pa));
    ARC_W_W(c, 8, arc_ld32(_pa + 4));
  }
  /* c1c8c: mov x19, x9 */
  ARC_X_W(c, 19, ARC_X_R(c, 9));
  /* c1c90: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c1c94: b.hs #0xc1c7c */
  if (ARC_COND(c, 2)) goto L_c1c7c;
  /* c1c98: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
L_c1c9c:;
  /* c1c9c: str w10, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 10));
  /* c1ca0: ldur w10, [x9, #-8] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(-8))));
  /* c1ca4: sub x9, x9, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(4)));
  /* c1ca8: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c1cac: b.lo #0xc1c9c */
  if (ARC_COND(c, 3)) goto L_c1c9c;
  /* c1cb0: str w8, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 8));
  /* c1cb4: b #0xc1c7c */
  goto L_c1c7c;
}

void fn1_d6324(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038805284));
  /* d6324: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d6328: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d632c: str x28, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 28));
  /* d6330: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* d6334: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* d6338: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d633c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* d6340: sub sp, sp, #0x310 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(784)));
  /* d6344: fmov x8, d0 */
  ARC_X_W(c, 8, ARC_DU_R(c, 0));
  /* d6348: tbnz x8, #0x3f, #0xd6354 */
  if (((ARC_X_R(c, 8)) >> 63 & 1) != 0) goto L_d6354;
  /* d634c: mov x9, x8 */
  ARC_X_W(c, 9, ARC_X_R(c, 8));
  /* d6350: b #0xd636c */
  goto L_d636c;
L_d6354:;
  /* d6354: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* d6358: b.eq #0xd63e0 */
  if (ARC_COND(c, 0)) goto L_d63e0;
  /* d635c: fabs d0, d0 */
  arc_d_w(c, 0, (double)(fabs(ARC_D_R(c, 0))));
  /* d6360: mov w9, #0x2d */
  ARC_W_W(c, 9, UINT64_C(45));
  /* d6364: strb w9, [x0], #1 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* d6368: fmov x9, d0 */
  ARC_X_W(c, 9, ARC_DU_R(c, 0));
L_d636c:;
  /* d636c: mov x10, #0x7ff0000000000000 */
  ARC_X_W(c, 10, UINT64_C(9218868437227405312));
  /* d6370: bics xzr, x10, x9 */
  { uint64_t _r = (uint64_t)(ARC_X_R(c, 10) & (~ARC_X_R(c, 9)));
    arc_flags_logical64(c, _r);
    ARC_X_W(c, 31, _r); }
  /* d6374: b.ne #0xd63a0 */
  if (ARC_COND(c, 1)) goto L_d63a0;
  /* d6378: ands x10, x9, #0xfffffffffffff */
  { uint64_t _r = (uint64_t)(ARC_X_R(c, 9) & UINT64_C(4503599627370495));
    arc_flags_logical64(c, _r);
    ARC_X_W(c, 10, _r); }
  /* d637c: b.eq #0xd63d0 */
  if (ARC_COND(c, 0)) goto L_d63d0;
  /* d6380: tbz x8, #0x3f, #0xd63ec */
  if (((ARC_X_R(c, 8)) >> 63 & 1) == 0) goto L_d63ec;
  /* d6384: mov x8, #0x8000000000000 */
  ARC_X_W(c, 8, UINT64_C(2251799813685248));
  /* d6388: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* d638c: b.ne #0xd63ec */
  if (ARC_COND(c, 1)) goto L_d63ec;
  /* d6390: adrp x8, #0x4f000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(323584)));
  /* d6394: add x8, x8, #0xa91 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2705)));
  /* d6398: mov w19, #8 */
  ARC_W_W(c, 19, UINT64_C(8));
  /* d639c: b #0xd6410 */
  goto L_d6410;
L_d63a0:;
  /* d63a0: cmp w2, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 2), UINT64_C(3));
  /* d63a4: b.eq #0xd6470 */
  if (ARC_COND(c, 0)) goto L_d6470;
  /* d63a8: cmp w2, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 2), UINT64_C(2));
  /* d63ac: b.eq #0xd644c */
  if (ARC_COND(c, 0)) goto L_d644c;
  /* d63b0: cmp w2, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 2), UINT64_C(1));
  /* d63b4: b.ne #0xd64ac */
  if (ARC_COND(c, 1)) goto L_d64ac;
  /* d63b8: tbnz w3, #0x1f, #0xd6540 */
  if (((ARC_W_R(c, 3)) >> 31 & 1) != 0) goto L_d6540;
  /* d63bc: mov w8, #0xca00 */
  ARC_W_W(c, 8, UINT64_C(51712));
  /* d63c0: movk w8, #0x3b9a, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(999948288)));
  /* d63c4: cmp w3, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 3), ARC_W_R(c, 8));
  /* d63c8: b.lo #0xd6544 */
  if (ARC_COND(c, 3)) goto L_d6544;
  /* d63cc: b #0xd6460 */
  goto L_d6460;
L_d63d0:;
  /* d63d0: nop  */
  /* nop: no architectural effect here */
  /* d63d4: adr x8, #0x50992 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(330130)));
  /* d63d8: mov w19, #3 */
  ARC_W_W(c, 19, UINT64_C(3));
  /* d63dc: b #0xd6410 */
  goto L_d6410;
L_d63e0:;
  /* d63e0: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* d63e4: mov w8, #0x4b */
  ARC_W_W(c, 8, UINT64_C(75));
  /* d63e8: b #0xd68dc */
  goto L_d68dc;
L_d63ec:;
  /* d63ec: adrp x8, #0x51000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(331776)));
  /* d63f0: add x8, x8, #0xea3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3747)));
  /* d63f4: adrp x10, #0x50000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(327680)));
  /* d63f8: add x10, x10, #0xf0d */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(3853)));
  /* d63fc: tst x9, #0x8000000000000 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(2251799813685248)));
  /* d6400: mov w9, #3 */
  ARC_W_W(c, 9, UINT64_C(3));
  /* d6404: mov w11, #9 */
  ARC_W_W(c, 11, UINT64_C(9));
  /* d6408: csel x8, x10, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* d640c: csel x19, x11, x9, eq */
  ARC_X_W(c, 19, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 9)));
L_d6410:;
  /* d6410: sub x9, x1, x0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* d6414: cmp x9, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 19));
  /* d6418: b.ge #0xd642c */
  if (ARC_COND(c, 10)) goto L_d642c;
L_d641c:;
  /* d641c: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* d6420: mov w8, #0x4b */
  ARC_W_W(c, 8, UINT64_C(75));
  /* d6424: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* d6428: b #0xd68dc */
  goto L_d68dc;
L_d642c:;
  /* d642c: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* d6430: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* d6434: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* d6438: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(877628));
  fn1_1449d8(c);
  /* d643c: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* d6440: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* d6444: add x0, x20, x19 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + ARC_X_R(c, 19)));
  /* d6448: b #0xd68dc */
  goto L_d68dc;
L_d644c:;
  /* d644c: tbnz w3, #0x1f, #0xd6514 */
  if (((ARC_W_R(c, 3)) >> 31 & 1) != 0) goto L_d6514;
  /* d6450: mov w8, #0xca00 */
  ARC_W_W(c, 8, UINT64_C(51712));
  /* d6454: movk w8, #0x3b9a, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(999948288)));
  /* d6458: cmp w3, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 3), ARC_W_R(c, 8));
  /* d645c: b.lo #0xd6518 */
  if (ARC_COND(c, 3)) goto L_d6518;
L_d6460:;
  /* d6460: mov w8, #0x4b */
  ARC_W_W(c, 8, UINT64_C(75));
  /* d6464: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* d6468: and x9, x8, #0xffffffff00000000 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) & UINT64_C(18446744069414584320)));
  /* d646c: b #0xd68dc */
  goto L_d68dc;
L_d6470:;
  /* d6470: fmov x8, d0 */
  ARC_X_W(c, 8, ARC_DU_R(c, 0));
  /* d6474: cbz x8, #0xd6524 */
  if ((ARC_X_R(c, 8)) == 0) goto L_d6524;
  /* d6478: tbnz w3, #0x1f, #0xd65d0 */
  if (((ARC_W_R(c, 3)) >> 31 & 1) != 0) goto L_d65d0;
  /* d647c: cbz w3, #0xd65d8 */
  if ((ARC_W_R(c, 3)) == 0) goto L_d65d8;
  /* d6480: mov w9, #0x4240 */
  ARC_W_W(c, 9, UINT64_C(16960));
  /* d6484: movk w9, #0xf, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(983040)));
  /* d6488: cmp w3, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 3), ARC_W_R(c, 9));
  /* d648c: b.hs #0xd66b4 */
  if (ARC_COND(c, 2)) goto L_d66b4;
  /* d6490: cmp w3, #0xf */
  (void)arc_sub32(c, ARC_W_R(c, 3), UINT64_C(15));
  /* d6494: b.ls #0xd65dc */
  if (ARC_COND(c, 9)) goto L_d65dc;
  /* d6498: cmp w3, #0x135 */
  (void)arc_sub32(c, ARC_W_R(c, 3), UINT64_C(309));
  /* d649c: b.ls #0xd6904 */
  if (ARC_COND(c, 9)) goto L_d6904;
  /* d64a0: adrp x10, #0x55000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(348160)));
  /* d64a4: add x10, x10, #0x7f0 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(2032)));
  /* d64a8: b #0xd66c4 */
  goto L_d66c4;
L_d64ac:;
  /* d64ac: fmov x9, d0 */
  ARC_X_W(c, 9, ARC_DU_R(c, 0));
  /* d64b0: cmp w3, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 3), UINT64_C(0));
  /* d64b4: mov w8, #0xd */
  ARC_W_W(c, 8, UINT64_C(13));
  /* d64b8: csel w8, w8, w3, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 3)));
  /* d64bc: lsr x10, x9, #0x34 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(52)) & 63)));
  /* d64c0: and x9, x9, #0xfffffffffffff */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(4503599627370495)));
  /* d64c4: cbnz x10, #0xd64d8 */
  if ((ARC_X_R(c, 10)) != 0) goto L_d64d8;
  /* d64c8: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* d64cc: mov w10, #-0x3fe */
  ARC_W_W(c, 10, UINT64_C(18446744073709550594));
  /* d64d0: csel w10, wzr, w10, eq */
  ARC_W_W(c, 10, (ARC_COND(c, 0) ? (ARC_W_R(c, 31)) : ARC_W_R(c, 10)));
  /* d64d4: b #0xd64e0 */
  goto L_d64e0;
L_d64d8:;
  /* d64d8: orr x9, x9, #0x10000000000000 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) | UINT64_C(4503599627370496)));
  /* d64dc: sub w10, w10, #0x3ff */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) - UINT64_C(1023)));
L_d64e0:;
  /* d64e0: cmp w10, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(0));
  /* d64e4: mov w11, #0x2d */
  ARC_W_W(c, 11, UINT64_C(45));
  /* d64e8: cneg w19, w10, mi */
  ARC_W_W(c, 19, (ARC_COND(c, 4) ? ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 10))) : (ARC_W_R(c, 10))));
  /* d64ec: mov w10, #0x2b */
  ARC_W_W(c, 10, UINT64_C(43));
  /* d64f0: csel w22, w11, w10, lt */
  ARC_W_W(c, 22, (ARC_COND(c, 11) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 10)));
  /* d64f4: cmp w19, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 19), UINT64_C(10));
  /* d64f8: b.hs #0xd6504 */
  if (ARC_COND(c, 2)) goto L_d6504;
  /* d64fc: mov w10, #1 */
  ARC_W_W(c, 10, UINT64_C(1));
  /* d6500: b #0xd6564 */
  goto L_d6564;
L_d6504:;
  /* d6504: cmp w19, #0x64 */
  (void)arc_sub32(c, ARC_W_R(c, 19), UINT64_C(100));
  /* d6508: b.hs #0xd6558 */
  if (ARC_COND(c, 2)) goto L_d6558;
  /* d650c: mov w10, #2 */
  ARC_W_W(c, 10, UINT64_C(2));
  /* d6510: b #0xd6564 */
  goto L_d6564;
L_d6514:;
  /* d6514: mov w3, #6 */
  ARC_W_W(c, 3, UINT64_C(6));
L_d6518:;
  /* d6518: mov w2, w3 */
  ARC_W_W(c, 2, ARC_W_R(c, 3));
  /* d651c: bl #0xdc610 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(877856));
  fn1_dc610(c);
  /* d6520: b #0xd654c */
  goto L_d654c;
L_d6524:;
  /* d6524: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* d6528: b.eq #0xd641c */
  if (ARC_COND(c, 0)) goto L_d641c;
  /* d652c: mov w10, #0x30 */
  ARC_W_W(c, 10, UINT64_C(48));
  /* d6530: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* d6534: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* d6538: strb w10, [x0], #1 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 10));
  }
  /* d653c: b #0xd68dc */
  goto L_d68dc;
L_d6540:;
  /* d6540: mov w3, #6 */
  ARC_W_W(c, 3, UINT64_C(6));
L_d6544:;
  /* d6544: mov w2, w3 */
  ARC_W_W(c, 2, ARC_W_R(c, 3));
  /* d6548: bl #0xdcf48 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(877900));
  fn1_dcf48(c);
L_d654c:;
  /* d654c: mov x8, x1 */
  ARC_X_W(c, 8, ARC_X_R(c, 1));
  /* d6550: and x9, x1, #0xffffffff00000000 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) & UINT64_C(18446744069414584320)));
  /* d6554: b #0xd68dc */
  goto L_d68dc;
L_d6558:;
  /* d6558: cmp w19, #0x3e8 */
  (void)arc_sub32(c, ARC_W_R(c, 19), UINT64_C(1000));
  /* d655c: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* d6560: cinc x10, x10, hs */
  ARC_X_W(c, 10, (ARC_COND(c, 2) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
L_d6564:;
  /* d6564: sub x11, x1, x0 */
  ARC_X_W(c, 11, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* d6568: subs x11, x11, x8 */
  ARC_X_W(c, 11, arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 8)));
  /* d656c: b.lt #0xd641c */
  if (ARC_COND(c, 11)) goto L_d641c;
  /* d6570: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* d6574: mov w12, #3 */
  ARC_W_W(c, 12, UINT64_C(3));
  /* d6578: cinc x12, x12, ne */
  ARC_X_W(c, 12, (ARC_COND(c, 1) ? (ARC_X_R(c, 12)) + 1 : (ARC_X_R(c, 12))));
  /* d657c: add x10, x10, x12 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + ARC_X_R(c, 12)));
  /* d6580: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* d6584: b.lt #0xd641c */
  if (ARC_COND(c, 11)) goto L_d641c;
  /* d6588: cmp w8, #0xd */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(13));
  /* d658c: b.hs #0xd6638 */
  if (ARC_COND(c, 2)) goto L_d6638;
  /* d6590: mov w10, #0x34 */
  ARC_W_W(c, 10, UINT64_C(52));
  /* d6594: lsl x11, x9, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* d6598: mov w12, #1 */
  ARC_W_W(c, 12, UINT64_C(1));
  /* d659c: sub w10, w10, w8, lsl #2 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) - ((uint32_t)(ARC_W_R(c, 8)) << 2)));
  /* d65a0: sub x13, x11, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* d65a4: lsl x10, x12, x10 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 12)) << ((ARC_X_R(c, 10)) & 63)));
  /* d65a8: orr x12, x13, x9 */
  ARC_X_W(c, 12, (ARC_X_R(c, 13) | ARC_X_R(c, 9)));
  /* d65ac: and x10, x10, x12 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) & ARC_X_R(c, 12)));
  /* d65b0: and x10, x10, x11 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) & ARC_X_R(c, 11)));
  /* d65b4: add x9, x10, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + ARC_X_R(c, 9)));
  /* d65b8: lsr x10, x9, #0x34 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(52)) & 63)));
  /* d65bc: orr w11, w10, #0x30 */
  ARC_W_W(c, 11, (ARC_W_R(c, 10) | UINT64_C(48)));
  /* d65c0: mov x10, x0 */
  ARC_X_W(c, 10, ARC_X_R(c, 0));
  /* d65c4: strb w11, [x10], #1 */
  { const uint64_t _a = ARC_X_R(c, 10);
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 11));
  }
  /* d65c8: cbnz w8, #0xd6644 */
  if ((ARC_W_R(c, 8)) != 0) goto L_d6644;
  /* d65cc: b #0xd6870 */
  goto L_d6870;
L_d65d0:;
  /* d65d0: mov w3, #6 */
  ARC_W_W(c, 3, UINT64_C(6));
  /* d65d4: b #0xd65dc */
  goto L_d65dc;
L_d65d8:;
  /* d65d8: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
L_d65dc:;
  /* d65dc: sub w9, w3, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 3) - UINT64_C(1)));
  /* d65e0: add w10, w3, #0xa */
  ARC_W_W(c, 10, (ARC_W_R(c, 3) + UINT64_C(10)));
  /* d65e4: mul w9, w9, w10 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) * (uint32_t)(ARC_W_R(c, 10))));
  /* d65e8: nop  */
  /* nop: no architectural effect here */
  /* d65ec: adr x10, #0x54808 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(346120)));
  /* d65f0: ubfx w9, w9, #1, #0xf */
  ARC_W_W(c, 9, (((uint32_t)(ARC_W_R(c, 9)) >> 1) & UINT64_C(32767)));
  /* d65f4: add x9, x10, w9, uxtw #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 9)))) << 3)));
  /* d65f8: add x10, x9, w3, uxtw #3 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 3)))) << 3)));
  /* d65fc: add x10, x10, #0x28 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(40)));
L_d6600:;
  /* d6600: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* d6604: b.eq #0xd6628 */
  if (ARC_COND(c, 0)) goto L_d6628;
  /* d6608: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
L_d660c:;
  /* d660c: ldr x12, [x11] */
  ARC_X_W(c, 12, arc_ld64(ARC_X_R(c, 11)));
  /* d6610: cmp x12, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 8));
  /* d6614: b.hs #0xd6630 */
  if (ARC_COND(c, 2)) goto L_d6630;
  /* d6618: add x11, x11, #8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(8)));
  /* d661c: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* d6620: b.ne #0xd660c */
  if (ARC_COND(c, 1)) goto L_d660c;
  /* d6624: b #0xd66fc */
  goto L_d66fc;
L_d6628:;
  /* d6628: mov x9, x10 */
  ARC_X_W(c, 9, ARC_X_R(c, 10));
  /* d662c: b #0xd66fc */
  goto L_d66fc;
L_d6630:;
  /* d6630: mov x10, x11 */
  ARC_X_W(c, 10, ARC_X_R(c, 11));
  /* d6634: b #0xd66fc */
  goto L_d66fc;
L_d6638:;
  /* d6638: lsr x10, x9, #0x34 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(52)) & 63)));
  /* d663c: orr w10, w10, #0x30 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(48)));
  /* d6640: strb w10, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 10));
L_d6644:;
  /* d6644: mov w10, #0x2e */
  ARC_W_W(c, 10, UINT64_C(46));
  /* d6648: ubfx x12, x9, #0x30, #4 */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 9)) >> 48) & UINT64_C(15)));
  /* d664c: nop  */
  /* nop: no architectural effect here */
  /* d6650: adr x11, #0x5460d */
  ARC_X_W(c, 11, (arc_image_bases[1] + UINT64_C(345613)));
  /* d6654: strb w10, [x0, #1] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 10));
  /* d6658: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* d665c: ldrb w12, [x11, x12] */
  ARC_W_W(c, 12, arc_ld8((ARC_X_R(c, 11) + ARC_X_R(c, 12))));
  /* d6660: add x10, x0, #3 */
  ARC_X_W(c, 10, (ARC_X_R(c, 0) + UINT64_C(3)));
  /* d6664: strb w12, [x0, #2] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 12));
  /* d6668: b.eq #0xd6870 */
  if (ARC_COND(c, 0)) goto L_d6870;
  /* d666c: mov x12, xzr */
  ARC_X_W(c, 12, ARC_X_R(c, 31));
  /* d6670: and x9, x9, #0xfffffffffffff */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(4503599627370495)));
  /* d6674: sub x13, x8, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* d6678: mov w14, #0x30 */
  ARC_W_W(c, 14, UINT64_C(48));
  /* d667c: mov x15, #-1 */
  ARC_X_W(c, 15, UINT64_C(18446744073709551615));
L_d6680:;
  /* d6680: cbz x14, #0xd6848 */
  if ((ARC_X_R(c, 14)) == 0) goto L_d6848;
  /* d6684: lsl x16, x15, x14 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) << ((ARC_X_R(c, 14)) & 63)));
  /* d6688: sub x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(4)));
  /* d668c: and x17, x14, #0xfffffffc */
  ARC_X_W(c, 17, (ARC_X_R(c, 14) & UINT64_C(4294967292)));
  /* d6690: bic x9, x9, x16 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & (~ARC_X_R(c, 16))));
  /* d6694: lsr x16, x9, x17 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 9)) >> ((ARC_X_R(c, 17)) & 63)));
  /* d6698: ldrb w16, [x11, w16, uxtw] */
  ARC_W_W(c, 16, arc_ld8((ARC_X_R(c, 11) + ((uint64_t)(uint32_t)(ARC_W_R(c, 16))))));
  /* d669c: strb w16, [x10, x12] */
  arc_st8((ARC_X_R(c, 10) + ARC_X_R(c, 12)), ARC_W_R(c, 16));
  /* d66a0: add x12, x12, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(1)));
  /* d66a4: cmp w13, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 12));
  /* d66a8: b.ne #0xd6680 */
  if (ARC_COND(c, 1)) goto L_d6680;
  /* d66ac: add x10, x10, x12 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + ARC_X_R(c, 12)));
  /* d66b0: b #0xd6870 */
  goto L_d6870;
L_d66b4:;
  /* d66b4: mov w3, #0x4240 */
  ARC_W_W(c, 3, UINT64_C(16960));
  /* d66b8: adrp x10, #0x55000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(348160)));
  /* d66bc: add x10, x10, #0x7f0 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(2032)));
  /* d66c0: movk w3, #0xf, lsl #16 */
  ARC_W_W(c, 3, ((ARC_W_R(c, 3) & UINT64_C(18446744069414649855)) | UINT64_C(983040)));
L_d66c4:;
  /* d66c4: nop  */
  /* nop: no architectural effect here */
  /* d66c8: adr x9, #0x54e20 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(347680)));
  /* d66cc: sub x10, x10, x9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 9)));
  /* d66d0: asr x11, x10, #3 */
  ARC_X_W(c, 11, ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(3)) & 63))));
  /* d66d4: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
L_d66d8:;
  /* d66d8: lsr x12, x11, #1 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(1)) & 63)));
  /* d66dc: add x13, x10, x12, lsl #3 */
  ARC_X_W(c, 13, (ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 12)) << 3)));
  /* d66e0: mvn x15, x12 */
  ARC_X_W(c, 15, (~(uint64_t)(ARC_X_R(c, 12))));
  /* d66e4: add x11, x11, x15 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ARC_X_R(c, 15)));
  /* d66e8: ldr x14, [x13], #8 */
  { const uint64_t _a = ARC_X_R(c, 13);
    ARC_X_W(c, 13, ARC_X_R(c, 13) + INT64_C(8));
    ARC_X_W(c, 14, arc_ld64(_a));
  }
  /* d66ec: cmp x14, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 8));
  /* d66f0: csel x11, x11, x12, lo */
  ARC_X_W(c, 11, (ARC_COND(c, 3) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 12)));
  /* d66f4: csel x10, x13, x10, lo */
  ARC_X_W(c, 10, (ARC_COND(c, 3) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 10)));
  /* d66f8: cbnz x11, #0xd66d8 */
  if ((ARC_X_R(c, 11)) != 0) goto L_d66d8;
L_d66fc:;
  /* d66fc: sub x8, x10, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) - ARC_X_R(c, 9)));
  /* d6700: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* d6704: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* d6708: lsr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63)));
  /* d670c: sub w9, w8, #5 */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) - UINT64_C(5)));
  /* d6710: cmp w3, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 3), ARC_W_R(c, 9));
  /* d6714: ccmn w9, #5, #4, gt */
  if (ARC_COND(c, 12)) { (void)arc_add32(c, ARC_W_R(c, 9), UINT64_C(5), 0); }
  else { (c)->nf = 0; (c)->zf = 1;
          (c)->cf = 0; (c)->vf = 0; }
  /* d6718: cset w24, gt */
  ARC_W_W(c, 24, (ARC_COND(c, 12) ? 1 : 0));
  /* d671c: cmp w24, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 24), UINT64_C(1));
  /* d6720: b.ne #0xd6760 */
  if (ARC_COND(c, 1)) goto L_d6760;
  /* d6724: sub w8, w3, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 3) - ARC_W_R(c, 8)));
  /* d6728: mov w9, #0x42 */
  ARC_W_W(c, 9, UINT64_C(66));
  /* d672c: add w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(4)));
  /* d6730: cmp w8, #0x42 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(66));
  /* d6734: csel w21, w8, w9, lt */
  ARC_W_W(c, 21, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d6738: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* d673c: mov w8, #6 */
  ARC_W_W(c, 8, UINT64_C(6));
  /* d6740: add x9, sp, #0xb */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(11)));
  /* d6744: csel w2, w8, w21, lt */
  ARC_W_W(c, 2, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 21)));
  /* d6748: add x0, sp, #0xb */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(11)));
  /* d674c: add x1, x9, #0x305 */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) + UINT64_C(773)));
  /* d6750: bl #0xdc610 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(878420));
  fn1_dc610(c);
  /* d6754: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* d6758: mov x19, xzr */
  ARC_X_W(c, 19, ARC_X_R(c, 31));
  /* d675c: b #0xd67a4 */
  goto L_d67a4;
L_d6760:;
  /* d6760: cmp w3, #0x2ff */
  (void)arc_sub32(c, ARC_W_R(c, 3), UINT64_C(767));
  /* d6764: mov w8, #0x2ff */
  ARC_W_W(c, 8, UINT64_C(767));
  /* d6768: add x20, sp, #0xb */
  ARC_X_W(c, 20, ((c)->sp + UINT64_C(11)));
  /* d676c: csel w8, w3, w8, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 3)) : ARC_W_R(c, 8)));
  /* d6770: sub w21, w8, #1 */
  ARC_W_W(c, 21, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* d6774: add x0, sp, #0xb */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(11)));
  /* d6778: add x1, x20, #0x305 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(773)));
  /* d677c: mov w2, w21 */
  ARC_W_W(c, 2, ARC_W_R(c, 21));
  /* d6780: bl #0xdcf48 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(878468));
  fn1_dcf48(c);
  /* d6784: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d6788: sub x2, x0, x20 */
  ARC_X_W(c, 2, (ARC_X_R(c, 0) - ARC_X_R(c, 20)));
  /* d678c: add x0, sp, #0xb */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(11)));
  /* d6790: mov w1, #0x65 */
  ARC_W_W(c, 1, UINT64_C(101));
  /* d6794: bl #0x1428d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(878488));
  fn1_1428d8(c);
  /* d6798: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* d679c: csel x0, x19, x0, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 19)) : ARC_X_R(c, 0)));
  /* d67a0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_d67a4:;
  /* d67a4: mov x10, x23 */
  ARC_X_W(c, 10, ARC_X_R(c, 23));
  /* d67a8: cmp w21, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 21), UINT64_C(1));
  /* d67ac: b.lt #0xd67c8 */
  if (ARC_COND(c, 11)) goto L_d67c8;
L_d67b0:;
  /* d67b0: ldrb w8, [x0, #-1]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(-1));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(-1));
    ARC_W_W(c, 8, arc_ld8(_a));
  }
  /* d67b4: cmp w8, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(48));
  /* d67b8: b.eq #0xd67b0 */
  if (ARC_COND(c, 0)) goto L_d67b0;
  /* d67bc: cmp w8, #0x2e */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(46));
  /* d67c0: b.eq #0xd67c8 */
  if (ARC_COND(c, 0)) goto L_d67c8;
  /* d67c4: add x0, x0, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1)));
L_d67c8:;
  /* d67c8: add x8, sp, #0xb */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(11)));
  /* d67cc: sub x21, x0, x8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 0) - ARC_X_R(c, 8)));
  /* d67d0: sub x8, x10, x22 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) - ARC_X_R(c, 22)));
  /* d67d4: cmp x8, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 21));
  /* d67d8: b.ge #0xd67e4 */
  if (ARC_COND(c, 10)) goto L_d67e4;
  /* d67dc: mov w8, #0x4b */
  ARC_W_W(c, 8, UINT64_C(75));
  /* d67e0: b #0xd683c */
  goto L_d683c;
L_d67e4:;
  /* d67e4: add x1, sp, #0xb */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(11)));
  /* d67e8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* d67ec: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* d67f0: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(878580));
  fn1_1449d8(c);
  /* d67f4: add x21, x22, x21 */
  ARC_X_W(c, 21, (ARC_X_R(c, 22) + ARC_X_R(c, 21)));
  /* d67f8: tbz w24, #0, #0xd6808 */
  if (((ARC_W_R(c, 24)) >> 0 & 1) == 0) goto L_d6808;
  /* d67fc: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* d6800: mov x10, x21 */
  ARC_X_W(c, 10, ARC_X_R(c, 21));
  /* d6804: b #0xd683c */
  goto L_d683c;
L_d6808:;
  /* d6808: sub x19, x19, x20 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) - ARC_X_R(c, 20)));
  /* d680c: sub x8, x23, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) - ARC_X_R(c, 21)));
  /* d6810: cmp x8, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 19));
  /* d6814: b.ge #0xd6824 */
  if (ARC_COND(c, 10)) goto L_d6824;
  /* d6818: mov x10, x23 */
  ARC_X_W(c, 10, ARC_X_R(c, 23));
  /* d681c: mov w8, #0x4b */
  ARC_W_W(c, 8, UINT64_C(75));
  /* d6820: b #0xd683c */
  goto L_d683c;
L_d6824:;
  /* d6824: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* d6828: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* d682c: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* d6830: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(878644));
  fn1_1449d8(c);
  /* d6834: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* d6838: add x10, x21, x19 */
  ARC_X_W(c, 10, (ARC_X_R(c, 21) + ARC_X_R(c, 19)));
L_d683c:;
  /* d683c: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* d6840: mov x0, x10 */
  ARC_X_W(c, 0, ARC_X_R(c, 10));
  /* d6844: b #0xd68dc */
  goto L_d68dc;
L_d6848:;
  /* d6848: mvn x9, x12 */
  ARC_X_W(c, 9, (~(uint64_t)(ARC_X_R(c, 12))));
  /* d684c: add x21, x10, x12 */
  ARC_X_W(c, 21, (ARC_X_R(c, 10) + ARC_X_R(c, 12)));
  /* d6850: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* d6854: add x20, x9, x8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 9) + ARC_X_R(c, 8)));
  /* d6858: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* d685c: mov w1, #0x30 */
  ARC_W_W(c, 1, UINT64_C(48));
  /* d6860: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* d6864: bl #0x144a20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(878696));
  fn1_144a20(c);
  /* d6868: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* d686c: add x10, x21, x20 */
  ARC_X_W(c, 10, (ARC_X_R(c, 21) + ARC_X_R(c, 20)));
L_d6870:;
  /* d6870: add x0, x10, #2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 10) + UINT64_C(2)));
  /* d6874: mov w9, #0x70 */
  ARC_W_W(c, 9, UINT64_C(112));
  /* d6878: strb w22, [x10, #1] */
  arc_st8((ARC_X_R(c, 10) + INT64_C(1)), ARC_W_R(c, 22));
  /* d687c: sub x8, x1, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* d6880: strb w9, [x10] */
  arc_st8(ARC_X_R(c, 10), ARC_W_R(c, 9));
  /* d6884: cmp x8, #9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(9));
  /* d6888: b.gt #0xd68cc */
  if (ARC_COND(c, 12)) goto L_d68cc;
  /* d688c: orr w9, w19, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 19) | UINT64_C(1)));
  /* d6890: mov w10, #0x20 */
  ARC_W_W(c, 10, UINT64_C(32));
  /* d6894: clz w9, w9 */
  ARC_W_W(c, 9, arc_clz32(ARC_W_R(c, 9)));
  /* d6898: sub w9, w10, w9 */
  ARC_W_W(c, 9, (ARC_W_R(c, 10) - ARC_W_R(c, 9)));
  /* d689c: mov w10, #0x4d1 */
  ARC_W_W(c, 10, UINT64_C(1233));
  /* d68a0: mul w9, w9, w10 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) * (uint32_t)(ARC_W_R(c, 10))));
  /* d68a4: nop  */
  /* nop: no architectural effect here */
  /* d68a8: adr x10, #0x54634 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(345652)));
  /* d68ac: lsr w9, w9, #0xc */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(12)) & 31)));
  /* d68b0: ldr w10, [x10, w9, uxtw #2] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 10) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 9)))) << 2))));
  /* d68b4: cmp w19, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 19), ARC_W_R(c, 10));
  /* d68b8: cset w10, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? 1 : 0));
  /* d68bc: sub w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) - ARC_W_R(c, 10)));
  /* d68c0: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* d68c4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* d68c8: b.lt #0xd641c */
  if (ARC_COND(c, 11)) goto L_d641c;
L_d68cc:;
  /* d68cc: mov w1, w19 */
  ARC_W_W(c, 1, ARC_W_R(c, 19));
  /* d68d0: bl #0xd4eb8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(878804));
  fn1_d4eb8(c);
  /* d68d4: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* d68d8: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
L_d68dc:;
  /* d68dc: mov w8, w8 */
  ARC_W_W(c, 8, ARC_W_R(c, 8));
  /* d68e0: orr x1, x9, x8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) | ARC_X_R(c, 8)));
  /* d68e4: add sp, sp, #0x310 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(784)));
  /* d68e8: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d68ec: ldr x28, [sp, #0x10] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(16))));
  /* d68f0: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* d68f4: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* d68f8: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d68fc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d6900: ret  */
  return;
L_d6904:;
  /* d6904: nop  */
  /* nop: no architectural effect here */
  /* d6908: adr x9, #0x54e20 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(347680)));
  /* d690c: cmp w3, #0x9c */
  (void)arc_sub32(c, ARC_W_R(c, 3), UINT64_C(156));
  /* d6910: add x10, x9, w3, uxtw #3 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 3)))) << 3)));
  /* d6914: add x10, x10, #0x28 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(40)));
  /* d6918: b.lo #0xd6600 */
  if (ARC_COND(c, 3)) goto L_d6600;
  /* d691c: b #0xd66c4 */
  goto L_d66c4;
  /* d6920: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(878884));
  fn1_a1454(c);
  /* d6924: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(878888));
  fn1_a1454(c);
  /* d6928: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(878892));
  fn1_a1454(c);
  /* d692c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(878896));
  fn1_a1454(c);
}

void fn1_da10c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038821132));
  /* da10c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* da110: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* da114: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* da118: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* da11c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* da120: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* da124: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* da128: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* da12c: ldr x8, [x8, #0x908] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2312))));
  /* da130: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* da134: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* da138: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* da13c: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(893248));
  fn1_142860(c);
  /* da140: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* da144: add x0, x0, #0x19 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(25)));
  /* da148: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(893260));
  fn1_1428f0(c);
  /* da14c: add x22, x0, #0x18 */
  ARC_X_W(c, 22, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* da150: stp x21, x21, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* da154: add x2, x21, #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* da158: str wzr, [x0, #0x10] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(16)), ARC_W_R(c, 31));
  /* da15c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* da160: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* da164: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(893288));
  fn1_1449d8(c);
  /* da168: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* da16c: ldr x8, [x8, #0x938] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2360))));
  /* da170: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* da174: stp x8, x22, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* da178: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* da17c: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* da180: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* da184: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* da188: ret  */
  return;
}

void fn1_dc2c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038829760));
  /* dc2c0: bti c */
  /* bti: no architectural effect here */
  /* dc2c4: mov w1, #8 */
  ARC_W_W(c, 1, UINT64_C(8));
  /* dc2c8: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_e1114(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038849812));
  /* e1114: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e1118: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e111c: str x25, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 25));
  /* e1120: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e1124: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e1128: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e112c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e1130: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* e1134: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* e1138: mov w21, w2 */
  ARC_W_W(c, 21, ARC_W_R(c, 2));
  /* e113c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* e1140: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e1144: and x10, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* e1148: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e114c: mov w9, #0x16 */
  ARC_W_W(c, 9, UINT64_C(22));
  /* e1150: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* e1154: and w8, w8, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(255)));
  /* e1158: csel x25, x9, x10, eq */
  ARC_X_W(c, 25, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* e115c: subs x9, x1, x25 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 25)));
  /* e1160: b.ls #0xe11d4 */
  if (ARC_COND(c, 9)) goto L_e11d4;
  /* e1164: mov x10, #-9 */
  ARC_X_W(c, 10, UINT64_C(18446744073709551607));
  /* e1168: sub x10, x10, x25 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 25)));
  /* e116c: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* e1170: b.hi #0xe125c */
  if (ARC_COND(c, 8)) goto L_e125c;
  /* e1174: ldr x9, [x20, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* e1178: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e117c: mov x8, #-0xd */
  ARC_X_W(c, 8, UINT64_C(18446744073709551603));
  /* e1180: movk x8, #0x7fff, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(9223090561878065152)));
  /* e1184: csinc x23, x9, x20, ne */
  ARC_X_W(c, 23, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 20)) + 1)));
  /* e1188: cmp x25, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* e118c: b.hs #0xe11f4 */
  if (ARC_COND(c, 2)) goto L_e11f4;
  /* e1190: lsl x8, x25, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 25)) << ((UINT64_C(1)) & 63)));
  /* e1194: mov w10, #0x1a */
  ARC_W_W(c, 10, UINT64_C(26));
  /* e1198: cmp x19, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* e119c: csel x8, x19, x8, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 19)) : ARC_X_R(c, 8)));
  /* e11a0: orr x9, x8, #7 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) | UINT64_C(7)));
  /* e11a4: cmp x9, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(23));
  /* e11a8: csinc x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 9)) + 1)));
  /* e11ac: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* e11b0: mov w8, #0x17 */
  ARC_W_W(c, 8, UINT64_C(23));
  /* e11b4: csel x24, x8, x9, lo */
  ARC_X_W(c, 24, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* e11b8: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* e11bc: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(922048));
  fn1_1428f0(c);
  /* e11c0: add x1, x25, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 25) + UINT64_C(1)));
  /* e11c4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* e11c8: cmp x1, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(23));
  /* e11cc: b.ne #0xe1208 */
  if (ARC_COND(c, 1)) goto L_e1208;
  /* e11d0: b #0xe1210 */
  goto L_e1210;
L_e11d4:;
  /* e11d4: ldr x9, [x20, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* e11d8: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e11dc: csinc x22, x9, x20, ne */
  ARC_X_W(c, 22, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 20)) + 1)));
  /* e11e0: cbnz x19, #0xe121c */
  if ((ARC_X_R(c, 19)) != 0) goto L_e121c;
  /* e11e4: tbnz w8, #0, #0xe1234 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_e1234;
L_e11e8:;
  /* e11e8: lsl w8, w19, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 19)) << ((UINT64_C(1)) & 31)));
  /* e11ec: strb w8, [x20] */
  arc_st8(ARC_X_R(c, 20), ARC_W_R(c, 8));
  /* e11f0: b #0xe1238 */
  goto L_e1238;
L_e11f4:;
  /* e11f4: mov x0, #-9 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551607));
  /* e11f8: mov x24, #-9 */
  ARC_X_W(c, 24, UINT64_C(18446744073709551607));
  /* e11fc: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(922112));
  fn1_1428f0(c);
  /* e1200: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* e1204: add x1, x25, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 25) + UINT64_C(1)));
L_e1208:;
  /* e1208: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* e120c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(922128));
  fn1_142608(c);
L_e1210:;
  /* e1210: orr x8, x24, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) | UINT64_C(1)));
  /* e1214: stp xzr, x22, [x20, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* e1218: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
L_e121c:;
  /* e121c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* e1220: mov w1, w21 */
  ARC_W_W(c, 1, ARC_W_R(c, 21));
  /* e1224: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* e1228: bl #0x144a20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(922156));
  fn1_144a20(c);
  /* e122c: ldrb w8, [x20] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 20)));
  /* e1230: tbz w8, #0, #0xe11e8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_e11e8;
L_e1234:;
  /* e1234: str x19, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 19));
L_e1238:;
  /* e1238: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e123c: strb wzr, [x22, x19] */
  arc_st8((ARC_X_R(c, 22) + ARC_X_R(c, 19)), ARC_W_R(c, 31));
  /* e1240: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e1244: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* e1248: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e124c: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e1250: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e1254: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e1258: ret  */
  return;
L_e125c:;
  /* e125c: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(922208));
  fn1_d7d54(c);
}

void fn1_e3a54(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038860372));
  /* e3a54: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e3a58: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e3a5c: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e3a60: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e3a64: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e3a68: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* e3a6c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* e3a70: bl #0x142e30 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(932468));
  fn1_142e30(c);
  /* e3a74: mov x2, x0 */
  ARC_X_W(c, 2, ARC_X_R(c, 0));
  /* e3a78: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e3a7c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* e3a80: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e3a84: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e3a88: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e3a8c: b #0xe2ab4 */
  fn1_e2ab4(c); return;
}

void fn1_e8040(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038878272));
  /* e8040: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e8044: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* e8048: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e804c: stp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e8050: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e8054: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e8058: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* e805c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e8060: mov x0, x3 */
  ARC_X_W(c, 0, ARC_X_R(c, 3));
  /* e8064: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* e8068: stp x1, x2, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* e806c: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(950384));
  fn1_142860(c);
  /* e8070: cmn x0, #8 */
  (void)arc_add64(c, ARC_X_R(c, 0), UINT64_C(8), 0);
  /* e8074: b.hs #0xe81a0 */
  if (ARC_COND(c, 2)) goto L_e81a0;
  /* e8078: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e807c: cmp x0, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(23));
  /* e8080: b.hs #0xe809c */
  if (ARC_COND(c, 2)) goto L_e809c;
  /* e8084: lsl w8, w21, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 21)) << ((UINT64_C(1)) & 31)));
  /* e8088: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* e808c: orr x22, x9, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* e8090: strb w8, [sp] */
  arc_st8((c)->sp, ARC_W_R(c, 8));
  /* e8094: cbnz x21, #0xe80c4 */
  if ((ARC_X_R(c, 21)) != 0) goto L_e80c4;
  /* e8098: b #0xe80d4 */
  goto L_e80d4;
L_e809c:;
  /* e809c: orr x8, x21, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) | UINT64_C(7)));
  /* e80a0: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* e80a4: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* e80a8: csinc x23, x9, x8, eq */
  ARC_X_W(c, 23, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* e80ac: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* e80b0: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(950452));
  fn1_1428f0(c);
  /* e80b4: orr x8, x23, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) | UINT64_C(1)));
  /* e80b8: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* e80bc: stp x21, x0, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* e80c0: str x8, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 8));
L_e80c4:;
  /* e80c4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* e80c8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* e80cc: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* e80d0: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(950484));
  fn1_1449d8(c);
L_e80d4:;
  /* e80d4: strb wzr, [x22, x21] */
  arc_st8((ARC_X_R(c, 22) + ARC_X_R(c, 21)), ARC_W_R(c, 31));
  /* e80d8: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* e80dc: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* e80e0: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* e80e4: add x21, sp, #0x18 */
  ARC_X_W(c, 21, ((c)->sp + UINT64_C(24)));
  /* e80e8: bl #0xe7f5c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(950508));
  fn1_e7f5c(c);
  /* e80ec: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* e80f0: ldr x8, [x8, #0x910] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2320))));
  /* e80f4: ldrb w24, [sp, #0x18] */
  ARC_W_W(c, 24, arc_ld8(((c)->sp + INT64_C(24))));
  /* e80f8: ldr x20, [sp, #0x28] */
  ARC_X_W(c, 20, arc_ld64(((c)->sp + INT64_C(40))));
  /* e80fc: tst w24, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 24) & UINT64_C(1)));
  /* e8100: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* e8104: csinc x21, x20, x21, ne */
  ARC_X_W(c, 21, (ARC_COND(c, 1) ? (ARC_X_R(c, 20)) : ((ARC_X_R(c, 21)) + 1)));
  /* e8108: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* e810c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e8110: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(950548));
  fn1_142860(c);
  /* e8114: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* e8118: add x0, x0, #0x19 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(25)));
  /* e811c: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(950560));
  fn1_1428f0(c);
  /* e8120: add x23, x0, #0x18 */
  ARC_X_W(c, 23, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* e8124: stp x22, x22, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* e8128: add x2, x22, #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* e812c: str wzr, [x0, #0x10] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(16)), ARC_W_R(c, 31));
  /* e8130: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* e8134: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* e8138: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(950588));
  fn1_1449d8(c);
  /* e813c: str x23, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 23));
  /* e8140: tbz w24, #0, #0xe8154 */
  if (((ARC_W_R(c, 24)) >> 0 & 1) == 0) goto L_e8154;
  /* e8144: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* e8148: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e814c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* e8150: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(950612));
  fn1_142608(c);
L_e8154:;
  /* e8154: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* e8158: tbz w8, #0, #0xe816c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_e816c;
  /* e815c: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* e8160: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* e8164: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* e8168: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(950636));
  fn1_142608(c);
L_e816c:;
  /* e816c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* e8170: ldr x8, [x8, #0xa50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2640))));
  /* e8174: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* e8178: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* e817c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* e8180: str q0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* e8184: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e8188: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e818c: ldp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e8190: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e8194: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* e8198: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e819c: ret  */
  return;
L_e81a0:;
  /* e81a0: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(950692));
  fn1_d7d54(c);
  /* e81a4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e81a8: tbnz w24, #0, #0xe81bc */
  if (((ARC_W_R(c, 24)) >> 0 & 1) != 0) goto L_e81bc;
  /* e81ac: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* e81b0: tbnz w8, #0, #0xe81e4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_e81e4;
L_e81b4:;
  /* e81b4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e81b8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(950716));
  fn1_9cc20(c);
L_e81bc:;
  /* e81bc: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* e81c0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e81c4: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* e81c8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(950732));
  fn1_142608(c);
  /* e81cc: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* e81d0: tbz w8, #0, #0xe81b4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_e81b4;
  /* e81d4: b #0xe81e4 */
  goto L_e81e4;
  /* e81d8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e81dc: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* e81e0: tbz w8, #0, #0xe81b4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_e81b4;
L_e81e4:;
  /* e81e4: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* e81e8: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* e81ec: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* e81f0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(950772));
  fn1_142608(c);
  /* e81f4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e81f8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(950780));
  fn1_9cc20(c);
}

void fn1_ea9ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038888940));
  /* ea9ec: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ea9f0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ea9f4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* ea9f8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ea9fc: ldr x19, [x0] */
  ARC_X_W(c, 19, arc_ld64(ARC_X_R(c, 0)));
  /* eaa00: cbz x19, #0xeaa14 */
  if ((ARC_X_R(c, 19)) == 0) goto L_eaa14;
  /* eaa04: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* eaa08: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* eaa0c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961040));
  fn1_bd950(c);
  /* eaa10: cbz x0, #0xeaa24 */
  if ((ARC_X_R(c, 0)) == 0) goto L_eaa24;
L_eaa14:;
  /* eaa14: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* eaa18: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eaa1c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eaa20: ret  */
  return;
L_eaa24:;
  /* eaa24: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* eaa28: ldr x16, [x8, #0x10] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* eaa2c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eaa30: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* eaa34: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eaa38: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eaa3c: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_ec0c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038894792));
  /* ec0c8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ec0cc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ec0d0: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* ec0d4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ec0d8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ec0dc: bl #0x143430 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(966880));
  fn1_143430(c);
  /* ec0e0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ec0e4: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* ec0e8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* ec0ec: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ec0f0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ec0f4: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_edaa4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038901412));
  /* edaa4: bti c */
  /* bti: no architectural effect here */
  /* edaa8: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* edaac: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* edab0: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* edab4: add x0, x8, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* edab8: b #0x1433b8 */
  fn1_1433b8(c); return;
}

void fn1_f291c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038921500));
  /* f291c: bti c */
  /* bti: no architectural effect here */
  /* f2920: b #0xf2924 */
  fn1_f2924(c); return;
}

void fn1_f44e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038928608));
  /* f44e0: bti c */
  /* bti: no architectural effect here */
  /* f44e4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f44e8: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f44ec: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* f44f0: add x0, x8, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* f44f4: b #0x1433b8 */
  fn1_1433b8(c); return;
}

void fn1_f938c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038948748));
  /* f938c: bti c */
  /* bti: no architectural effect here */
  /* f9390: b #0xf9394 */
  fn1_f9394(c); return;
}

void fn1_fd8e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038966496));
  /* fd8e0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fd8e4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fd8e8: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fd8ec: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fd8f0: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fd8f4: ldr x8, [x8, #0xb18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2840))));
  /* fd8f8: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* fd8fc: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* fd900: add x19, x0, x9 */
  ARC_X_W(c, 19, (ARC_X_R(c, 0) + ARC_X_R(c, 9)));
  /* fd904: add x9, x8, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* fd908: add x8, x8, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* fd90c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fd910: mov x20, x19 */
  ARC_X_W(c, 20, ARC_X_R(c, 19));
  /* fd914: str x9, [x0], #0x10 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* fd918: str x8, [x20, #0xb8]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(184));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(184));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* fd91c: bl #0x1436d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1038624));
  fn1_1436d0(c);
  /* fd920: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fd924: bl #0x1433b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1038632));
  fn1_1433b8(c);
  /* fd928: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fd92c: mov w1, #0x150 */
  ARC_W_W(c, 1, UINT64_C(336));
  /* fd930: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fd934: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fd938: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fd93c: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_106648(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039002696));
  /* 106648: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 10664c: sub sp, sp, #0x1e0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(480)));
  /* 106650: stp x29, x30, [sp, #0x180] */
  { const uint64_t _pa = ((c)->sp + INT64_C(384));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 106654: stp x28, x27, [sp, #0x190] */
  { const uint64_t _pa = ((c)->sp + INT64_C(400));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 106658: stp x26, x25, [sp, #0x1a0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(416));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 10665c: stp x24, x23, [sp, #0x1b0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(432));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 106660: stp x22, x21, [sp, #0x1c0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(448));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 106664: stp x20, x19, [sp, #0x1d0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(464));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 106668: add x29, sp, #0x180 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(384)));
  /* 10666c: ldr w8, [x3, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 3) + INT64_C(8))));
  /* 106670: mov w9, #0x4a */
  ARC_W_W(c, 9, UINT64_C(74));
  /* 106674: mov x24, x3 */
  ARC_X_W(c, 24, ARC_X_R(c, 3));
  /* 106678: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 10667c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 106680: sub x26, x29, #0xb0 */
  ARC_X_W(c, 26, (ARC_X_R(c, 29) - UINT64_C(176)));
  /* 106684: ands w8, w8, w9 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 9));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 8, _r); }
  /* 106688: str x5, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 5));
  /* 10668c: b.eq #0x1066b0 */
  if (ARC_COND(c, 0)) goto L_1066b0;
  /* 106690: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* 106694: b.eq #0x1066a8 */
  if (ARC_COND(c, 0)) goto L_1066a8;
  /* 106698: cmp w8, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(8));
  /* 10669c: b.ne #0x1066b8 */
  if (ARC_COND(c, 1)) goto L_1066b8;
  /* 1066a0: mov w23, #0x10 */
  ARC_W_W(c, 23, UINT64_C(16));
  /* 1066a4: b #0x1066bc */
  goto L_1066bc;
L_1066a8:;
  /* 1066a8: mov w23, #8 */
  ARC_W_W(c, 23, UINT64_C(8));
  /* 1066ac: b #0x1066bc */
  goto L_1066bc;
L_1066b0:;
  /* 1066b0: mov w23, wzr */
  ARC_W_W(c, 23, ARC_W_R(c, 31));
  /* 1066b4: b #0x1066bc */
  goto L_1066bc;
L_1066b8:;
  /* 1066b8: mov w23, #0xa */
  ARC_W_W(c, 23, UINT64_C(10));
L_1066bc:;
  /* 1066bc: sub x1, x29, #0x74 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(116)));
  /* 1066c0: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 1066c4: str x4, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 4));
  /* 1066c8: sub x27, x29, #0x74 */
  ARC_X_W(c, 27, (ARC_X_R(c, 29) - UINT64_C(116)));
  /* 1066cc: bl #0x136534 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1074896));
  fn1_136534(c);
  /* 1066d0: sub x8, x29, #0x90 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(144)));
  /* 1066d4: sub x1, x29, #0xc */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(12)));
  /* 1066d8: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 1066dc: bl #0x1366c4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1074912));
  fn1_1366c4(c);
  /* 1066e0: stp xzr, xzr, [x26, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 26) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1066e4: str xzr, [x26, #0x18] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(24)), ARC_X_R(c, 31));
  /* 1066e8: sub x0, x29, #0xa8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(168)));
  /* 1066ec: mov w1, #0x16 */
  ARC_W_W(c, 1, UINT64_C(22));
  /* 1066f0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1066f4: sub x20, x29, #0xa8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 29) - UINT64_C(168)));
  /* 1066f8: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1074940));
  fn1_142d10(c);
  /* 1066fc: ldurb w8, [x29, #-0xa8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-168))));
  /* 106700: ldr x9, [x26, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 106704: add x10, sp, #0x30 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(48)));
  /* 106708: orr x28, x20, #1 */
  ARC_X_W(c, 28, (ARC_X_R(c, 20) | UINT64_C(1)));
  /* 10670c: add x22, sp, #0x28 */
  ARC_X_W(c, 22, ((c)->sp + UINT64_C(40)));
  /* 106710: str x10, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 10));
  /* 106714: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 106718: str wzr, [sp, #0x24] */
  arc_st32(((c)->sp + INT64_C(36)), ARC_W_R(c, 31));
  /* 10671c: csinc x24, x9, x20, ne */
  ARC_X_W(c, 24, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 20)) + 1)));
  /* 106720: mov w20, #0x16 */
  ARC_W_W(c, 20, UINT64_C(22));
  /* 106724: str x24, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 24));
  /* 106728: b #0x106734 */
  goto L_106734;
L_10672c:;
  /* 10672c: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 106730: str x8, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 8));
L_106734:;
  /* 106734: cbz x19, #0x10674c */
  if ((ARC_X_R(c, 19)) == 0) goto L_10674c;
  /* 106738: ldp x8, x9, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 10673c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 106740: b.eq #0x106758 */
  if (ARC_COND(c, 0)) goto L_106758;
  /* 106744: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 106748: b #0x106768 */
  goto L_106768;
L_10674c:;
  /* 10674c: cbz x21, #0x106904 */
  if ((ARC_X_R(c, 21)) == 0) goto L_106904;
  /* 106750: mov w25, #1 */
  ARC_W_W(c, 25, UINT64_C(1));
  /* 106754: b #0x10677c */
  goto L_10677c;
L_106758:;
  /* 106758: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 10675c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 106760: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 106764: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1075048));
  arc_dispatch(c, ARC_X_R(c, 8));
L_106768:;
  /* 106768: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 10676c: cset w25, eq */
  ARC_W_W(c, 25, (ARC_COND(c, 0) ? 1 : 0));
  /* 106770: csel x8, xzr, x19, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 19)));
  /* 106774: cbz x21, #0x1067b8 */
  if ((ARC_X_R(c, 21)) == 0) goto L_1067b8;
  /* 106778: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
L_10677c:;
  /* 10677c: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 106780: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 106784: b.eq #0x106790 */
  if (ARC_COND(c, 0)) goto L_106790;
  /* 106788: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 10678c: b #0x1067a0 */
  goto L_1067a0;
L_106790:;
  /* 106790: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 106794: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 106798: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 10679c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1075104));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1067a0:;
  /* 1067a0: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1067a4: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 1067a8: csel x21, xzr, x21, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 21)));
  /* 1067ac: cmp w25, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 25), ARC_W_R(c, 8));
  /* 1067b0: b.ne #0x1067c0 */
  if (ARC_COND(c, 1)) goto L_1067c0;
  /* 1067b4: b #0x106910 */
  goto L_106910;
L_1067b8:;
  /* 1067b8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1067bc: b.eq #0x10690c */
  if (ARC_COND(c, 0)) goto L_10690c;
L_1067c0:;
  /* 1067c0: ldurb w8, [x29, #-0xa8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-168))));
  /* 1067c4: ldr x9, [x26, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(16))));
  /* 1067c8: ldr x11, [x26] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 26)));
  /* 1067cc: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 1067d0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1067d4: csel x25, x10, x9, eq */
  ARC_X_W(c, 25, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 1067d8: add x9, x24, x25 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + ARC_X_R(c, 25)));
  /* 1067dc: cmp x11, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 9));
  /* 1067e0: b.ne #0x106898 */
  if (ARC_COND(c, 1)) goto L_106898;
  /* 1067e4: cmp x25, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 25), UINT64_C(1));
  /* 1067e8: b.lt #0x106800 */
  if (ARC_COND(c, 11)) goto L_106800;
  /* 1067ec: sub x0, x29, #0xa8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(168)));
  /* 1067f0: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 1067f4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1067f8: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1075196));
  fn1_142d10(c);
  /* 1067fc: b #0x106824 */
  goto L_106824;
L_106800:;
  /* 106800: lsl x9, x25, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 25)) << ((UINT64_C(1)) & 63)));
  /* 106804: tbnz w8, #0, #0x106818 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_106818;
  /* 106808: lsl w8, w9, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 9)) << ((UINT64_C(1)) & 31)));
  /* 10680c: sturb w8, [x29, #-0xa8] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-168)), ARC_W_R(c, 8));
  /* 106810: mov x8, x28 */
  ARC_X_W(c, 8, ARC_X_R(c, 28));
  /* 106814: b #0x106820 */
  goto L_106820;
L_106818:;
  /* 106818: ldr x8, [x26, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 10681c: str x9, [x26, #0x10] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(16)), ARC_X_R(c, 9));
L_106820:;
  /* 106820: strb wzr, [x8, x9] */
  arc_st8((ARC_X_R(c, 8) + ARC_X_R(c, 9)), ARC_W_R(c, 31));
L_106824:;
  /* 106824: ldp x9, x10, [x26, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 26) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 106828: ldurb w8, [x29, #-0xa8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-168))));
  /* 10682c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 106830: and x11, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 106834: ubfx x12, x9, #1, #7 */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 9)) >> 1) & UINT64_C(127)));
  /* 106838: sub x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* 10683c: csel x8, x20, x11, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 20)) : ARC_X_R(c, 11)));
  /* 106840: tst x9, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(1)));
  /* 106844: csel x10, x12, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* 106848: subs x1, x8, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10)));
  /* 10684c: b.ls #0x106860 */
  if (ARC_COND(c, 9)) goto L_106860;
  /* 106850: sub x0, x29, #0xa8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(168)));
  /* 106854: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 106858: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1075292));
  fn1_142d10(c);
  /* 10685c: b #0x106880 */
  goto L_106880;
L_106860:;
  /* 106860: tbnz w9, #0, #0x106874 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_106874;
  /* 106864: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* 106868: sturb w9, [x29, #-0xa8] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-168)), ARC_W_R(c, 9));
  /* 10686c: mov x9, x28 */
  ARC_X_W(c, 9, ARC_X_R(c, 28));
  /* 106870: b #0x10687c */
  goto L_10687c;
L_106874:;
  /* 106874: ldr x9, [x26, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 106878: str x8, [x26, #0x10] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(16)), ARC_X_R(c, 8));
L_10687c:;
  /* 10687c: strb wzr, [x9, x8] */
  arc_st8((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_W_R(c, 31));
L_106880:;
  /* 106880: ldurb w8, [x29, #-0xa8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-168))));
  /* 106884: ldr x9, [x26, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 106888: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 10688c: csel x24, x28, x9, eq */
  ARC_X_W(c, 24, (ARC_COND(c, 0) ? (ARC_X_R(c, 28)) : ARC_X_R(c, 9)));
  /* 106890: add x8, x24, x25 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + ARC_X_R(c, 25)));
  /* 106894: str x8, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 8));
L_106898:;
  /* 106898: ldp x8, x9, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 10689c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1068a0: b.eq #0x1068ac */
  if (ARC_COND(c, 0)) goto L_1068ac;
  /* 1068a4: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 1068a8: b #0x1068bc */
  goto L_1068bc;
L_1068ac:;
  /* 1068ac: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1068b0: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1068b4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1068b8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1075388));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1068bc:;
  /* 1068bc: ldur w5, [x29, #-0xc] */
  ARC_W_W(c, 5, arc_ld32((ARC_X_R(c, 29) + INT64_C(-12))));
  /* 1068c0: sub x3, x29, #0xb0 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(176)));
  /* 1068c4: add x4, sp, #0x24 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(36)));
  /* 1068c8: sub x6, x29, #0x90 */
  ARC_X_W(c, 6, (ARC_X_R(c, 29) - UINT64_C(144)));
  /* 1068cc: add x7, sp, #0x30 */
  ARC_X_W(c, 7, ((c)->sp + UINT64_C(48)));
  /* 1068d0: mov w1, w23 */
  ARC_W_W(c, 1, ARC_W_R(c, 23));
  /* 1068d4: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 1068d8: stp x22, x27, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 1068dc: bl #0x143880 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1075424));
  fn1_143880(c);
  /* 1068e0: cbnz w0, #0x106910 */
  if ((ARC_W_R(c, 0)) != 0) goto L_106910;
  /* 1068e4: ldp x8, x9, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1068e8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1068ec: b.ne #0x10672c */
  if (ARC_COND(c, 1)) goto L_10672c;
  /* 1068f0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1068f4: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 1068f8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1068fc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1075456));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 106900: b #0x106734 */
  goto L_106734;
L_106904:;
  /* 106904: mov x21, x19 */
  ARC_X_W(c, 21, ARC_X_R(c, 19));
  /* 106908: b #0x106910 */
  goto L_106910;
L_10690c:;
  /* 10690c: mov x19, x21 */
  ARC_X_W(c, 19, ARC_X_R(c, 21));
L_106910:;
  /* 106910: ldurb w8, [x29, #-0x90] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 106914: ldr x9, [x26, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(40))));
  /* 106918: ldr x22, [sp, #0x18] */
  ARC_X_W(c, 22, arc_ld64(((c)->sp + INT64_C(24))));
  /* 10691c: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 106920: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 106924: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 106928: cbz x8, #0x10694c */
  if ((ARC_X_R(c, 8)) == 0) goto L_10694c;
  /* 10692c: ldr x8, [sp, #0x28] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(40))));
  /* 106930: add x9, sp, #0x30 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(48)));
  /* 106934: sub x9, x8, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* 106938: cmp x9, #0x9f */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(159));
  /* 10693c: b.gt #0x10694c */
  if (ARC_COND(c, 12)) goto L_10694c;
  /* 106940: ldr w9, [sp, #0x24] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(36))));
  /* 106944: str w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 9));
  }
  /* 106948: str x8, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 8));
L_10694c:;
  /* 10694c: ldr x1, [x26] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 26)));
  /* 106950: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 106954: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 106958: mov w3, w23 */
  ARC_W_W(c, 3, ARC_W_R(c, 23));
  /* 10695c: bl #0x135e9c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1075552));
  fn1_135e9c(c);
  /* 106960: ldurb w10, [x29, #-0x90] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 106964: ldr x12, [sp, #0x28] */
  ARC_X_W(c, 12, arc_ld64(((c)->sp + INT64_C(40))));
  /* 106968: add x11, sp, #0x30 */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(48)));
  /* 10696c: ldr x8, [x26, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(40))));
  /* 106970: lsr x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* 106974: ands w13, w10, #1 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 13, _r); }
  /* 106978: sub x11, x12, x11 */
  ARC_X_W(c, 11, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* 10697c: csel x8, x9, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 106980: ldr x9, [sp, #0x10] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(16))));
  /* 106984: cmp x11, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(5));
  /* 106988: str x0, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 0));
  /* 10698c: b.lt #0x106aec */
  if (ARC_COND(c, 11)) goto L_106aec;
  /* 106990: cbz x8, #0x106aec */
  if ((ARC_X_R(c, 8)) == 0) goto L_106aec;
  /* 106994: sub x8, x12, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 12) - UINT64_C(4)));
  /* 106998: add x9, sp, #0x30 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(48)));
  /* 10699c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 1069a0: cset w11, lo */
  ARC_W_W(c, 11, (ARC_COND(c, 3) ? 1 : 0));
  /* 1069a4: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* 1069a8: b.eq #0x106a58 */
  if (ARC_COND(c, 0)) goto L_106a58;
  /* 1069ac: cbz w11, #0x106a58 */
  if ((ARC_W_R(c, 11)) == 0) goto L_106a58;
  /* 1069b0: add x10, sp, #0x30 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(48)));
  /* 1069b4: sub x14, x12, #8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) - UINT64_C(8)));
  /* 1069b8: add x11, x10, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 1069bc: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 1069c0: csel x13, x14, x11, hi */
  ARC_X_W(c, 13, (ARC_COND(c, 8) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* 1069c4: sub x13, x13, #4 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(4)));
  /* 1069c8: cmp x13, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 10));
  /* 1069cc: cinc x15, x10, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
  /* 1069d0: cmp x13, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 10));
  /* 1069d4: sub x15, x13, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) - ARC_X_R(c, 15)));
  /* 1069d8: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* 1069dc: cinc x13, x15, ne */
  ARC_X_W(c, 13, (ARC_COND(c, 1) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* 1069e0: cmp x13, #0x13 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(19));
  /* 1069e4: b.lo #0x106a2c */
  if (ARC_COND(c, 3)) goto L_106a2c;
  /* 1069e8: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 1069ec: csel x14, x14, x11, hi */
  ARC_X_W(c, 14, (ARC_COND(c, 8) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* 1069f0: sub x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(4)));
  /* 1069f4: cmp x14, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 10));
  /* 1069f8: cinc x15, x10, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
  /* 1069fc: cmp x14, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 10));
  /* 106a00: sub x15, x14, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 14) - ARC_X_R(c, 15)));
  /* 106a04: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* 106a08: cinc x14, x15, ne */
  ARC_X_W(c, 14, (ARC_COND(c, 1) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* 106a0c: cmp x10, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 12));
  /* 106a10: b.hs #0x106bdc */
  if (ARC_COND(c, 2)) goto L_106bdc;
  /* 106a14: lsl x14, x14, #2 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(2)) & 63)));
  /* 106a18: sub x15, x12, x14 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ARC_X_R(c, 14)));
  /* 106a1c: add x11, x11, x14 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ARC_X_R(c, 14)));
  /* 106a20: sub x14, x15, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) - UINT64_C(4)));
  /* 106a24: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 106a28: b.hs #0x106bdc */
  if (ARC_COND(c, 2)) goto L_106bdc;
L_106a2c:;
  /* 106a2c: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
L_106a30:;
  /* 106a30: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
L_106a34:;
  /* 106a34: ldr w12, [x11] */
  ARC_W_W(c, 12, arc_ld32(ARC_X_R(c, 11)));
  /* 106a38: ldur w13, [x10, #-4] */
  ARC_W_W(c, 13, arc_ld32((ARC_X_R(c, 10) + INT64_C(-4))));
  /* 106a3c: stur w12, [x10, #-4] */
  arc_st32((ARC_X_R(c, 10) + INT64_C(-4)), ARC_W_R(c, 12));
  /* 106a40: str w13, [x11], #0xfffffffffffffffc */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(-4));
    arc_st32(_a, ARC_W_R(c, 13));
  }
  /* 106a44: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 106a48: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 106a4c: b.lo #0x106a34 */
  if (ARC_COND(c, 3)) goto L_106a34;
L_106a50:;
  /* 106a50: ldurb w10, [x29, #-0x90] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 106a54: and w13, w10, #1 */
  ARC_W_W(c, 13, (ARC_W_R(c, 10) & UINT64_C(1)));
L_106a58:;
  /* 106a58: ldr x11, [x26, #0x30] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 26) + INT64_C(48))));
  /* 106a5c: cmp w13, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(0));
  /* 106a60: sub x12, x29, #0x90 */
  ARC_X_W(c, 12, (ARC_X_R(c, 29) - UINT64_C(144)));
  /* 106a64: csinc x11, x11, x12, ne */
  ARC_X_W(c, 11, (ARC_COND(c, 1) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 12)) + 1)));
  /* 106a68: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 106a6c: b.hs #0x106ac4 */
  if (ARC_COND(c, 2)) goto L_106ac4;
  /* 106a70: lsr w9, w10, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 10)) >> ((UINT64_C(1)) & 31)));
  /* 106a74: ldr x10, [x26, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 26) + INT64_C(40))));
  /* 106a78: cmp w13, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(0));
  /* 106a7c: csel x9, x9, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* 106a80: add x10, sp, #0x30 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(48)));
  /* 106a84: add x9, x11, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) + ARC_X_R(c, 9)));
  /* 106a88: b #0x106aa4 */
  goto L_106aa4;
L_106a8c:;
  /* 106a8c: sub x12, x9, x11 */
  ARC_X_W(c, 12, (ARC_X_R(c, 9) - ARC_X_R(c, 11)));
  /* 106a90: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 106a94: cmp x12, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(1));
  /* 106a98: cinc x11, x11, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 11)) + 1 : (ARC_X_R(c, 11))));
  /* 106a9c: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* 106aa0: b.hs #0x106ac4 */
  if (ARC_COND(c, 2)) goto L_106ac4;
L_106aa4:;
  /* 106aa4: ldrb w12, [x11] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 11)));
  /* 106aa8: cbz w12, #0x106a8c */
  if ((ARC_W_R(c, 12)) == 0) goto L_106a8c;
  /* 106aac: cmp w12, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(255));
  /* 106ab0: b.eq #0x106a8c */
  if (ARC_COND(c, 0)) goto L_106a8c;
  /* 106ab4: ldr w13, [x10] */
  ARC_W_W(c, 13, arc_ld32(ARC_X_R(c, 10)));
  /* 106ab8: cmp w13, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 12));
  /* 106abc: b.eq #0x106a8c */
  if (ARC_COND(c, 0)) goto L_106a8c;
  /* 106ac0: b #0x106ae4 */
  goto L_106ae4;
L_106ac4:;
  /* 106ac4: ldrb w9, [x11] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 11)));
  /* 106ac8: cbz w9, #0x106aec */
  if ((ARC_W_R(c, 9)) == 0) goto L_106aec;
  /* 106acc: cmp w9, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(255));
  /* 106ad0: b.eq #0x106aec */
  if (ARC_COND(c, 0)) goto L_106aec;
  /* 106ad4: ldr w8, [x8] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 8)));
  /* 106ad8: sub w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* 106adc: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* 106ae0: b.lo #0x106aec */
  if (ARC_COND(c, 3)) goto L_106aec;
L_106ae4:;
  /* 106ae4: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 106ae8: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_106aec:;
  /* 106aec: cbz x19, #0x106b04 */
  if ((ARC_X_R(c, 19)) == 0) goto L_106b04;
  /* 106af0: ldp x8, x9, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 106af4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 106af8: b.eq #0x106b10 */
  if (ARC_COND(c, 0)) goto L_106b10;
  /* 106afc: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 106b00: b #0x106b20 */
  goto L_106b20;
L_106b04:;
  /* 106b04: cbz x21, #0x106b78 */
  if ((ARC_X_R(c, 21)) == 0) goto L_106b78;
  /* 106b08: mov w20, #1 */
  ARC_W_W(c, 20, UINT64_C(1));
  /* 106b0c: b #0x106b34 */
  goto L_106b34;
L_106b10:;
  /* 106b10: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 106b14: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 106b18: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 106b1c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1076000));
  arc_dispatch(c, ARC_X_R(c, 8));
L_106b20:;
  /* 106b20: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 106b24: cset w20, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? 1 : 0));
  /* 106b28: csel x8, xzr, x19, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 19)));
  /* 106b2c: cbz x21, #0x106b6c */
  if ((ARC_X_R(c, 21)) == 0) goto L_106b6c;
  /* 106b30: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
L_106b34:;
  /* 106b34: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 106b38: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 106b3c: b.eq #0x106b48 */
  if (ARC_COND(c, 0)) goto L_106b48;
  /* 106b40: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 106b44: b #0x106b58 */
  goto L_106b58;
L_106b48:;
  /* 106b48: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 106b4c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 106b50: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 106b54: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1076056));
  arc_dispatch(c, ARC_X_R(c, 8));
L_106b58:;
  /* 106b58: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 106b5c: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 106b60: eor w8, w20, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 20) ^ ARC_W_R(c, 8)));
  /* 106b64: tbz w8, #0, #0x106b78 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_106b78;
  /* 106b68: b #0x106b84 */
  goto L_106b84;
L_106b6c:;
  /* 106b6c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 106b70: b.ne #0x106b84 */
  if (ARC_COND(c, 1)) goto L_106b84;
  /* 106b74: mov x19, xzr */
  ARC_X_W(c, 19, ARC_X_R(c, 31));
L_106b78:;
  /* 106b78: ldr w8, [x22] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 22)));
  /* 106b7c: orr w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(2)));
  /* 106b80: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_106b84:;
  /* 106b84: ldurb w8, [x29, #-0xa8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-168))));
  /* 106b88: tbz w8, #0, #0x106b9c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_106b9c;
  /* 106b8c: ldr x8, [x26, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(8))));
  /* 106b90: ldr x0, [x26, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 106b94: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 106b98: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1076124));
  fn1_142608(c);
L_106b9c:;
  /* 106b9c: ldurb w8, [x29, #-0x90] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 106ba0: tbz w8, #0, #0x106bb4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_106bb4;
  /* 106ba4: ldr x8, [x26, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(32))));
  /* 106ba8: ldr x0, [x26, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(48))));
  /* 106bac: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 106bb0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1076148));
  fn1_142608(c);
L_106bb4:;
  /* 106bb4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 106bb8: ldp x20, x19, [sp, #0x1d0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(464));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 106bbc: ldp x22, x21, [sp, #0x1c0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(448));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 106bc0: ldp x24, x23, [sp, #0x1b0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(432));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 106bc4: ldp x26, x25, [sp, #0x1a0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(416));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 106bc8: ldp x28, x27, [sp, #0x190] */
  { const uint64_t _pa = ((c)->sp + INT64_C(400));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 106bcc: ldp x29, x30, [sp, #0x180] */
  { const uint64_t _pa = ((c)->sp + INT64_C(384));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 106bd0: add sp, sp, #0x1e0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(480)));
  /* 106bd4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 106bd8: ret  */
  return;
L_106bdc:;
  /* 106bdc: add x13, x13, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(1)));
  /* 106be0: add x15, sp, #0x30 */
  ARC_X_W(c, 15, ((c)->sp + UINT64_C(48)));
  /* 106be4: sub x12, x12, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(16)));
  /* 106be8: and x14, x13, #0x7ffffffffffffff8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 13) & UINT64_C(9223372036854775800)));
  /* 106bec: lsl x10, x14, #2 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(2)) & 63)));
  /* 106bf0: mov x16, x14 */
  ARC_X_W(c, 16, ARC_X_R(c, 14));
  /* 106bf4: sub x11, x8, x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) - ARC_X_R(c, 10)));
  /* 106bf8: add x10, x15, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 15) + ARC_X_R(c, 10)));
  /* 106bfc: add x15, x15, #0x10 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(16)));
L_106c00:;
  /* 106c00: ldp q1, q0, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 106c04: sub x16, x16, #8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) - UINT64_C(8)));
  /* 106c08: ldp q2, q3, [x15, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 15) + INT64_C(-16));
    arc_q_w(c, 2, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 3, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 106c0c: rev64 v0.4s, v0.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[0].u32[1];
    _t.u32[1] = (c)->q[0].u32[0];
    _t.u32[2] = (c)->q[0].u32[3];
    _t.u32[3] = (c)->q[0].u32[2];
    (c)->q[0] = _t; }
  /* 106c10: rev64 v1.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[1].u32[1];
    _t.u32[1] = (c)->q[1].u32[0];
    _t.u32[2] = (c)->q[1].u32[3];
    _t.u32[3] = (c)->q[1].u32[2];
    (c)->q[1] = _t; }
  /* 106c14: rev64 v2.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[2].u32[1];
    _t.u32[1] = (c)->q[2].u32[0];
    _t.u32[2] = (c)->q[2].u32[3];
    _t.u32[3] = (c)->q[2].u32[2];
    (c)->q[2] = _t; }
  /* 106c18: rev64 v3.4s, v3.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[3].u32[1];
    _t.u32[1] = (c)->q[3].u32[0];
    _t.u32[2] = (c)->q[3].u32[3];
    _t.u32[3] = (c)->q[3].u32[2];
    (c)->q[3] = _t; }
  /* 106c1c: ext v0.16b, v0.16b, v0.16b, #8 */
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
  /* 106c20: ext v1.16b, v1.16b, v1.16b, #8 */
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
  /* 106c24: ext v2.16b, v2.16b, v2.16b, #8 */
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
  /* 106c28: ext v3.16b, v3.16b, v3.16b, #8 */
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
  /* 106c2c: stp q0, q1, [x15, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 15) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 106c30: add x15, x15, #0x20 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(32)));
  /* 106c34: stp q3, q2, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_st64(_pa, (c)->q[3].u64[0]);
    arc_st64(_pa + 8, (c)->q[3].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* 106c38: sub x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(32)));
  /* 106c3c: cbnz x16, #0x106c00 */
  if ((ARC_X_R(c, 16)) != 0) goto L_106c00;
  /* 106c40: cmp x13, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 14));
  /* 106c44: b.eq #0x106a50 */
  if (ARC_COND(c, 0)) goto L_106a50;
  /* 106c48: b #0x106a30 */
  goto L_106a30;
  /* 106c4c: b #0x106c58 */
  goto L_106c58;
  /* 106c50: b #0x106c58 */
  goto L_106c58;
  /* 106c54: b #0x106c58 */
  goto L_106c58;
L_106c58:;
  /* 106c58: ldurb w8, [x29, #-0xa8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-168))));
  /* 106c5c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 106c60: tbnz w8, #0, #0x106c74 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_106c74;
  /* 106c64: ldurb w8, [x29, #-0x90] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 106c68: tbnz w8, #0, #0x106c8c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_106c8c;
L_106c6c:;
  /* 106c6c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 106c70: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1076340));
  fn1_9cc20(c);
L_106c74:;
  /* 106c74: ldr x8, [x26, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(8))));
  /* 106c78: ldr x0, [x26, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 106c7c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 106c80: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1076356));
  fn1_142608(c);
  /* 106c84: ldurb w8, [x29, #-0x90] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 106c88: tbz w8, #0, #0x106c6c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_106c6c;
L_106c8c:;
  /* 106c8c: ldr x8, [x26, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(32))));
  /* 106c90: ldr x0, [x26, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(48))));
  /* 106c94: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 106c98: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1076380));
  fn1_142608(c);
  /* 106c9c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 106ca0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1076388));
  fn1_9cc20(c);
}

void fn1_1117e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039048168));
  /* 1117e8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1117ec: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 1117f0: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1117f4: stp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 1117f8: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1117fc: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 111800: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 111804: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 111808: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 11180c: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 111810: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 111814: add x1, x3, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 3) + UINT64_C(48)));
  /* 111818: mov x19, x5 */
  ARC_X_W(c, 19, ARC_X_R(c, 5));
  /* 11181c: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 111820: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 111824: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1120296));
  fn1_143460(c);
  /* 111828: adrp x26, #0x151000 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11182c: ldr x26, [x26, #0xb58] */
  ARC_X_W(c, 26, arc_ld64((ARC_X_R(c, 26) + INT64_C(2904))));
  /* 111830: ldr x25, [sp] */
  ARC_X_W(c, 25, arc_ld64((c)->sp));
  /* 111834: ldar x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 111838: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11183c: b.eq #0x1118f8 */
  if (ARC_COND(c, 0)) goto L_1118f8;
  /* 111840: nop  */
  /* nop: no architectural effect here */
  /* 111844: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 111848: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1120332));
  fn1_142518(c);
  /* 11184c: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 111850: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 111854: b.ne #0x111880 */
  if (ARC_COND(c, 1)) goto L_111880;
  /* 111858: nop  */
  /* nop: no architectural effect here */
  /* 11185c: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 111860: nop  */
  /* nop: no architectural effect here */
  /* 111864: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_111868:;
  /* 111868: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 11186c: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 111870: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1120372));
  fn1_142530(c);
  /* 111874: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 111878: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11187c: b.eq #0x111868 */
  if (ARC_COND(c, 0)) goto L_111868;
L_111880:;
  /* 111880: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 111884: cbz x8, #0x111898 */
  if ((ARC_X_R(c, 8)) == 0) goto L_111898;
  /* 111888: nop  */
  /* nop: no architectural effect here */
  /* 11188c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 111890: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1120404));
  fn1_142560(c);
  /* 111894: b #0x1118f8 */
  goto L_1118f8;
L_111898:;
  /* 111898: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11189c: str x26, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 26));
  /* 1118a0: strb wzr, [sp, #0x18] */
  arc_st8(((c)->sp + INT64_C(24)), ARC_W_R(c, 31));
  /* 1118a4: str x8, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 8));
  /* 1118a8: nop  */
  /* nop: no architectural effect here */
  /* 1118ac: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1118b0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1120436));
  fn1_142560(c);
  /* 1118b4: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1118b8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1118bc: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 1118c0: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1120452));
  fn1_a2030(c);
  /* 1118c4: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 1118c8: str w8, [x26, #8] */
  arc_st32((ARC_X_R(c, 26) + INT64_C(8)), ARC_W_R(c, 8));
  /* 1118cc: nop  */
  /* nop: no architectural effect here */
  /* 1118d0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1118d4: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1120472));
  fn1_142518(c);
  /* 1118d8: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 1118dc: stlr x8, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 8));
  /* 1118e0: nop  */
  /* nop: no architectural effect here */
  /* 1118e4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1118e8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1120492));
  fn1_142560(c);
  /* 1118ec: nop  */
  /* nop: no architectural effect here */
  /* 1118f0: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 1118f4: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1120504));
  fn1_142578(c);
L_1118f8:;
  /* 1118f8: ldp x8, x10, [x25, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 1118fc: ldrsw x9, [x26, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 26) + INT64_C(8)))));
  /* 111900: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 111904: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 111908: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 11190c: b.hs #0x1119c0 */
  if (ARC_COND(c, 2)) goto L_1119c0;
  /* 111910: ldr x23, [x8, x9, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 111914: cbz x23, #0x1119c0 */
  if ((ARC_X_R(c, 23)) == 0) goto L_1119c0;
  /* 111918: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 11191c: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1120544));
  fn1_143478(c);
  /* 111920: ldr x8, [x22, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 22) + INT64_C(16));
    ARC_X_W(c, 22, ARC_X_R(c, 22) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 111924: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 111928: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 11192c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1120560));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 111930: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 111934: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 111938: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 11193c: add x3, x22, #0x150 */
  ARC_X_W(c, 3, (ARC_X_R(c, 22) + UINT64_C(336)));
  /* 111940: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 111944: mov x4, x23 */
  ARC_X_W(c, 4, ARC_X_R(c, 23));
  /* 111948: mov x5, x20 */
  ARC_X_W(c, 5, ARC_X_R(c, 20));
  /* 11194c: mov w6, wzr */
  ARC_W_W(c, 6, ARC_W_R(c, 31));
  /* 111950: bl #0x104878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1120596));
  fn1_104878(c);
  /* 111954: sub x8, x0, x22 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) - ARC_X_R(c, 22)));
  /* 111958: cmp x8, #0x14f */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(335));
  /* 11195c: b.gt #0x11199c */
  if (ARC_COND(c, 12)) goto L_11199c;
  /* 111960: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* 111964: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* 111968: movk x9, #0xaaab */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744073709486080)) | UINT64_C(43691)));
  /* 11196c: mul x8, x8, x9 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9))));
  /* 111970: mov x9, #0x4925 */
  ARC_X_W(c, 9, UINT64_C(18725));
  /* 111974: movk x9, #0x2492, lsl #16 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(613548032)));
  /* 111978: movk x9, #0x9249, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(160842230267904)));
  /* 11197c: movk x9, #0x4924, lsl #48 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(281474976710655)) | UINT64_C(5270337463930322944)));
  /* 111980: smulh x9, x8, x9 */
  ARC_X_W(c, 9, arc_smulh(ARC_X_R(c, 8), ARC_X_R(c, 9)));
  /* 111984: lsr x10, x9, #0x3f */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(63)) & 63)));
  /* 111988: lsr x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 11198c: add w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + ARC_W_R(c, 10)));
  /* 111990: sub w9, w9, w9, lsl #3 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) - ((uint32_t)(ARC_W_R(c, 9)) << 3)));
  /* 111994: add w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + ARC_W_R(c, 9)));
  /* 111998: str w8, [x19, #0x18] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(24)), ARC_W_R(c, 8));
L_11199c:;
  /* 11199c: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1119a0: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1119a4: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1119a8: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1119ac: ldp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 1119b0: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1119b4: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 1119b8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1119bc: ret  */
  return;
L_1119c0:;
  /* 1119c0: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1120708));
  fn1_fc3b8(c);
  /* 1119c4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1119c8: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1119cc: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1120720));
  fn1_d2a78(c);
  /* 1119d0: b #0x1119dc */
  goto L_1119dc;
  /* 1119d4: b #0x1119d8 */
  goto L_1119d8;
L_1119d8:;
  /* 1119d8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_1119dc:;
  /* 1119dc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1119e0: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1120740));
  fn1_143478(c);
  /* 1119e4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1119e8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1120748));
  fn1_9cc20(c);
}

void fn1_113df0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057904));
  /* 113df0: bti c */
  /* bti: no architectural effect here */
  /* 113df4: mov x9, x0 */
  ARC_X_W(c, 9, ARC_X_R(c, 0));
  /* 113df8: ldrb w10, [x9, #0x18]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(24));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(24));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* 113dfc: tbnz w10, #0, #0x113e14 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_113e14;
  /* 113e00: ldr q0, [x9] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 9)), arc_ld64(ARC_X_R(c, 9) + 8));
  /* 113e04: ldr x9, [x9, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(16))));
  /* 113e08: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* 113e0c: str x9, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 9));
  /* 113e10: ret  */
  return;
L_113e14:;
  /* 113e14: ldp x2, x1, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 113e18: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 113e1c: b #0xda588 */
  fn1_da588(c); return;
}

void fn1_11adec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039086572));
  /* 11adec: bti c */
  /* bti: no architectural effect here */
  /* 11adf0: b #0x144048 */
  fn1_144048(c); return;
}

void fn1_1259cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039130572));
  /* 1259cc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1259d0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1259d4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1259d8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1259dc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1259e0: bl #0x143e80 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1202660));
  fn1_143e80(c);
  /* 1259e4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1259e8: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* 1259ec: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1259f0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1259f4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1259f8: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_127e78(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039139960));
  /* 127e78: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 127e7c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 127e80: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 127e84: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 127e88: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 127e8c: sub x9, x1, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) - UINT64_C(1)));
  /* 127e90: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 127e94: ldr x8, [x8, #0xc88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3208))));
  /* 127e98: adrp x20, #0x15d000 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 127e9c: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 127ea0: stp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 127ea4: nop  */
  /* nop: no architectural effect here */
  /* 127ea8: adr x8, #0x15dc38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 127eac: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 127eb0: tbz w8, #0, #0x127ecc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_127ecc;
L_127eb4:;
  /* 127eb4: ldr x8, [x20, #0xc30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(3120))));
  /* 127eb8: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* 127ebc: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 127ec0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 127ec4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 127ec8: ret  */
  return;
L_127ecc:;
  /* 127ecc: nop  */
  /* nop: no architectural effect here */
  /* 127ed0: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 127ed4: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1212120));
  fn1_1424b8(c);
  /* 127ed8: cbz w0, #0x127eb4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_127eb4;
  /* 127edc: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 127ee0: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 127ee4: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 127ee8: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 127eec: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1212144));
  fn1_1441e0(c);
  /* 127ef0: str x0, [x20, #0xc30] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 127ef4: nop  */
  /* nop: no architectural effect here */
  /* 127ef8: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 127efc: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1212160));
  fn1_1424d0(c);
  /* 127f00: b #0x127eb4 */
  goto L_127eb4;
  /* 127f04: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 127f08: nop  */
  /* nop: no architectural effect here */
  /* 127f0c: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 127f10: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1212180));
  fn1_1424e8(c);
  /* 127f14: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 127f18: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1212188));
  fn1_9cc20(c);
}

void fn1_12a244(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039149124));
  /* 12a244: bti c */
  /* bti: no architectural effect here */
  /* 12a248: mov w0, #3 */
  ARC_W_W(c, 0, UINT64_C(3));
  /* 12a24c: str x2, [x4] */
  arc_st64(ARC_X_R(c, 4), ARC_X_R(c, 2));
  /* 12a250: ret  */
  return;
}

void fn1_12ba40(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039155264));
  /* 12ba40: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12ba44: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 12ba48: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12ba4c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12ba50: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 12ba54: mov x19, x7 */
  ARC_X_W(c, 19, ARC_X_R(c, 7));
  /* 12ba58: mov x9, x6 */
  ARC_X_W(c, 9, ARC_X_R(c, 6));
  /* 12ba5c: mov x8, x5 */
  ARC_X_W(c, 8, ARC_X_R(c, 5));
  /* 12ba60: ldr x6, [x0, #0x10] */
  ARC_X_W(c, 6, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 12ba64: ldr w7, [x0, #0x18] */
  ARC_W_W(c, 7, arc_ld32((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12ba68: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 12ba6c: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 12ba70: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 12ba74: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 12ba78: mov x5, sp */
  ARC_X_W(c, 5, (c)->sp);
  /* 12ba7c: mov x3, x8 */
  ARC_X_W(c, 3, ARC_X_R(c, 8));
  /* 12ba80: mov x4, x9 */
  ARC_X_W(c, 4, ARC_X_R(c, 9));
  /* 12ba84: bl #0x12b5dc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1227400));
  fn1_12b5dc(c);
  /* 12ba88: ldp x9, x8, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12ba8c: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 12ba90: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* 12ba94: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12ba98: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12ba9c: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 12baa0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12baa4: ret  */
  return;
}

void fn1_12edb4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039168436));
  /* 12edb4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12edb8: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12edbc: stp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 12edc0: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 12edc4: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 12edc8: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 12edcc: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12edd0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12edd4: sub sp, sp, #0x280 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(640)));
  /* 12edd8: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 12eddc: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* 12ede0: sub x27, x29, #0x50 */
  ARC_X_W(c, 27, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 12ede4: ldr q0, [x8, #0xad0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2768))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2768)) + 8));
  /* 12ede8: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* 12edec: ldr x4, [x0] */
  ARC_X_W(c, 4, arc_ld64(ARC_X_R(c, 0)));
  /* 12edf0: ldr q1, [x8, #0xbe0] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 8) + INT64_C(3040))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3040)) + 8));
  /* 12edf4: mov w8, #-1 */
  ARC_W_W(c, 8, UINT64_C(18446744073709551615));
  /* 12edf8: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 12edfc: mov w26, w1 */
  ARC_W_W(c, 26, ARC_W_R(c, 1));
  /* 12ee00: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 12ee04: stp xzr, xzr, [x27, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 27) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 12ee08: stur w8, [x29, #-0x30] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-48)), ARC_W_R(c, 8));
  /* 12ee0c: mov w8, #0x25 */
  ARC_W_W(c, 8, UINT64_C(37));
  /* 12ee10: sub x0, x29, #0xb4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(180)));
  /* 12ee14: sturb w1, [x29, #-0xb7] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-183)), ARC_W_R(c, 1));
  /* 12ee18: sub x2, x29, #0xb8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(184)));
  /* 12ee1c: sub x3, x29, #0x50 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 12ee20: mov w1, #0x64 */
  ARC_W_W(c, 1, UINT64_C(100));
  /* 12ee24: str xzr, [x27, #0x30] */
  arc_st64((ARC_X_R(c, 27) + INT64_C(48)), ARC_X_R(c, 31));
  /* 12ee28: sub x21, x29, #0xb4 */
  ARC_X_W(c, 21, (ARC_X_R(c, 29) - UINT64_C(180)));
  /* 12ee2c: stp q0, q1, [x27] */
  { const uint64_t _pa = ARC_X_R(c, 27);
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 12ee30: sturb wzr, [x29, #-0xb6] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-182)), ARC_W_R(c, 31));
  /* 12ee34: sturb w8, [x29, #-0xb8] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-184)), ARC_W_R(c, 8));
  /* 12ee38: bl #0x1444b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1240636));
  fn1_1444b0(c);
  /* 12ee3c: ldr x0, [x22] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 22)));
  /* 12ee40: stp x21, xzr, [sp, #0x28] */
  { const uint64_t _pa = ((c)->sp + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 12ee44: str x22, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 22));
  /* 12ee48: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1240652));
  fn1_1443c0(c);
  /* 12ee4c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 12ee50: str x0, [x27, #0x38] */
  arc_st64((ARC_X_R(c, 27) + INT64_C(56)), ARC_X_R(c, 0));
  /* 12ee54: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 12ee58: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* 12ee5c: add x3, sp, #0x30 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(48)));
  /* 12ee60: mov w2, #0x64 */
  ARC_W_W(c, 2, UINT64_C(100));
  /* 12ee64: bl #0x1444c8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1240680));
  fn1_1444c8(c);
  /* 12ee68: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* 12ee6c: cbz x22, #0x12ee78 */
  if ((ARC_X_R(c, 22)) == 0) goto L_12ee78;
  /* 12ee70: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 12ee74: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1240696));
  fn1_1443c0(c);
L_12ee78:;
  /* 12ee78: cmn x25, #1 */
  (void)arc_add64(c, ARC_X_R(c, 25), UINT64_C(1), 0);
  /* 12ee7c: b.eq #0x130400 */
  if (ARC_COND(c, 0)) goto L_130400;
  /* 12ee80: stp xzr, xzr, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 12ee84: str xzr, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 31));
  /* 12ee88: cbz x25, #0x1303dc */
  if ((ARC_X_R(c, 25)) == 0) goto L_1303dc;
  /* 12ee8c: add x8, sp, #0x38 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(56)));
  /* 12ee90: ldr x9, [sp, #8] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(8))));
  /* 12ee94: add x28, sp, #0x38 */
  ARC_X_W(c, 28, ((c)->sp + UINT64_C(56)));
  /* 12ee98: add x25, x8, x25, lsl #2 */
  ARC_X_W(c, 25, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 25)) << 2)));
  /* 12ee9c: and w8, w26, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 26) & UINT64_C(255)));
  /* 12eea0: add x22, x9, #8 */
  ARC_X_W(c, 22, (ARC_X_R(c, 9) + UINT64_C(8)));
  /* 12eea4: add x23, x9, #0x158 */
  ARC_X_W(c, 23, (ARC_X_R(c, 9) + UINT64_C(344)));
  /* 12eea8: add x10, x9, #0x398 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(920)));
  /* 12eeac: add x9, x19, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* 12eeb0: str w8, [sp, #4] */
  arc_st32(((c)->sp + INT64_C(4)), ARC_W_R(c, 8));
  /* 12eeb4: stp x10, x9, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 12eeb8: b #0x12ef0c */
  goto L_12ef0c;
L_12eebc:;
  /* 12eebc: mov w26, #4 */
  ARC_W_W(c, 26, UINT64_C(4));
L_12eec0:;
  /* 12eec0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12eec4: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 12eec8: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 12eecc: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 12eed0: mov x4, x26 */
  ARC_X_W(c, 4, ARC_X_R(c, 26));
  /* 12eed4: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 12eed8: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 12eedc: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1240800));
  fn1_142da0(c);
  /* 12eee0: mov x8, x26 */
  ARC_X_W(c, 8, ARC_X_R(c, 26));
L_12eee4:;
  /* 12eee4: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 12eee8: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 12eeec: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
L_12eef0:;
  /* 12eef0: add x8, x9, x8, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 2)));
  /* 12eef4: mov w9, #0x61 */
  ARC_W_W(c, 9, UINT64_C(97));
L_12eef8:;
  /* 12eef8: stp w9, wzr, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st32(_pa, ARC_W_R(c, 9));
    arc_st32(_pa + 4, ARC_W_R(c, 31));
  }
L_12eefc:;
  /* 12eefc: ldr x24, [x27, #0x38] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 27) + INT64_C(56))));
L_12ef00:;
  /* 12ef00: cmp x24, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 25));
  /* 12ef04: mov x28, x24 */
  ARC_X_W(c, 28, ARC_X_R(c, 24));
  /* 12ef08: b.eq #0x1303dc */
  if (ARC_COND(c, 0)) goto L_1303dc;
L_12ef0c:;
  /* 12ef0c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 12ef10: ldr w2, [x28] */
  ARC_W_W(c, 2, arc_ld32(ARC_X_R(c, 28)));
  /* 12ef14: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 12ef18: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12ef1c: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 12ef20: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1240868));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 12ef24: tbz w0, #0, #0x12ef40 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_12ef40;
  /* 12ef28: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 12ef2c: tbnz w9, #0, #0x12ef88 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_12ef88;
  /* 12ef30: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* 12ef34: b.ne #0x12f014 */
  if (ARC_COND(c, 1)) goto L_12f014;
  /* 12ef38: mov w26, #4 */
  ARC_W_W(c, 26, UINT64_C(4));
  /* 12ef3c: b #0x12ef9c */
  goto L_12ef9c;
L_12ef40:;
  /* 12ef40: str x28, [x27, #0x38] */
  arc_st64((ARC_X_R(c, 27) + INT64_C(56)), ARC_X_R(c, 28));
  /* 12ef44: str wzr, [sp, #0x24] */
  arc_st32(((c)->sp + INT64_C(36)), ARC_W_R(c, 31));
  /* 12ef48: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 12ef4c: add x5, sp, #0x24 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(36)));
  /* 12ef50: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 12ef54: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 12ef58: mov x3, x23 */
  ARC_X_W(c, 3, ARC_X_R(c, 23));
  /* 12ef5c: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* 12ef60: bl #0x130448 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1240932));
  fn1_130448(c);
  /* 12ef64: sub x21, x0, x22 */
  ARC_X_W(c, 21, (ARC_X_R(c, 0) - ARC_X_R(c, 22)));
  /* 12ef68: cmp x21, #0x14f */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(335));
  /* 12ef6c: b.gt #0x12efd0 */
  if (ARC_COND(c, 12)) goto L_12efd0;
  /* 12ef70: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 12ef74: tbnz w9, #0, #0x12f064 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_12f064;
  /* 12ef78: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* 12ef7c: b.ne #0x12f2d0 */
  if (ARC_COND(c, 1)) goto L_12f2d0;
  /* 12ef80: mov w26, #4 */
  ARC_W_W(c, 26, UINT64_C(4));
  /* 12ef84: b #0x12f078 */
  goto L_12f078;
L_12ef88:;
  /* 12ef88: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12ef8c: and x9, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 12ef90: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 12ef94: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* 12ef98: b.ne #0x12efc0 */
  if (ARC_COND(c, 1)) goto L_12efc0;
L_12ef9c:;
  /* 12ef9c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12efa0: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 12efa4: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 12efa8: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 12efac: mov x4, x26 */
  ARC_X_W(c, 4, ARC_X_R(c, 26));
  /* 12efb0: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 12efb4: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 12efb8: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1241020));
  fn1_142da0(c);
  /* 12efbc: mov x8, x26 */
  ARC_X_W(c, 8, ARC_X_R(c, 26));
L_12efc0:;
  /* 12efc0: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 12efc4: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 12efc8: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* 12efcc: b #0x12f024 */
  goto L_12f024;
L_12efd0:;
  /* 12efd0: str x28, [x27, #0x38] */
  arc_st64((ARC_X_R(c, 27) + INT64_C(56)), ARC_X_R(c, 28));
  /* 12efd4: ldr x3, [sp, #0x10] */
  ARC_X_W(c, 3, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12efd8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 12efdc: add x5, sp, #0x24 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(36)));
  /* 12efe0: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 12efe4: mov x2, x23 */
  ARC_X_W(c, 2, ARC_X_R(c, 23));
  /* 12efe8: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* 12efec: bl #0x130448 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1241072));
  fn1_130448(c);
  /* 12eff0: sub x24, x0, x23 */
  ARC_X_W(c, 24, (ARC_X_R(c, 0) - ARC_X_R(c, 23)));
  /* 12eff4: cmp x24, #0x23f */
  (void)arc_sub64(c, ARC_X_R(c, 24), UINT64_C(575));
  /* 12eff8: b.gt #0x12f0ac */
  if (ARC_COND(c, 12)) goto L_12f0ac;
  /* 12effc: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 12f000: tbnz w9, #0, #0x12f390 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_12f390;
  /* 12f004: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* 12f008: b.ne #0x12f42c */
  if (ARC_COND(c, 1)) goto L_12f42c;
  /* 12f00c: mov w26, #4 */
  ARC_W_W(c, 26, UINT64_C(4));
  /* 12f010: b #0x12f3a4 */
  goto L_12f3a4;
L_12f014:;
  /* 12f014: lsr x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 12f018: add w9, w9, #2 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(2)));
  /* 12f01c: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* 12f020: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
L_12f024:;
  /* 12f024: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 12f028: mov w10, #0x20 */
  ARC_W_W(c, 10, UINT64_C(32));
  /* 12f02c: str x10, [x9, x8] */
  arc_st64((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_X_R(c, 10));
  /* 12f030: add x8, x28, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 28) + UINT64_C(4)));
L_12f034:;
  /* 12f034: mov x24, x8 */
  ARC_X_W(c, 24, ARC_X_R(c, 8));
  /* 12f038: cmp x8, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 25));
  /* 12f03c: b.eq #0x12ef00 */
  if (ARC_COND(c, 0)) goto L_12ef00;
  /* 12f040: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 12f044: ldr w2, [x24] */
  ARC_W_W(c, 2, arc_ld32(ARC_X_R(c, 24)));
  /* 12f048: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 12f04c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12f050: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 12f054: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1241176));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 12f058: add x8, x24, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + UINT64_C(4)));
  /* 12f05c: tbnz w0, #0, #0x12f034 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_12f034;
  /* 12f060: b #0x12ef00 */
  goto L_12ef00;
L_12f064:;
  /* 12f064: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12f068: and x9, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 12f06c: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 12f070: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* 12f074: b.ne #0x12f09c */
  if (ARC_COND(c, 1)) goto L_12f09c;
L_12f078:;
  /* 12f078: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12f07c: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 12f080: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 12f084: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 12f088: mov x4, x26 */
  ARC_X_W(c, 4, ARC_X_R(c, 26));
  /* 12f08c: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 12f090: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 12f094: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1241240));
  fn1_142da0(c);
  /* 12f098: mov x8, x26 */
  ARC_X_W(c, 8, ARC_X_R(c, 26));
L_12f09c:;
  /* 12f09c: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 12f0a0: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 12f0a4: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* 12f0a8: b #0x12f2e0 */
  goto L_12f2e0;
L_12f0ac:;
  /* 12f0ac: ldr x12, [sp, #8] */
  ARC_X_W(c, 12, arc_ld64(((c)->sp + INT64_C(8))));
  /* 12f0b0: ldrb w8, [x12, #0x398] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 12) + INT64_C(920))));
  /* 12f0b4: ldrb w9, [x12, #0x3b0] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 12) + INT64_C(944))));
  /* 12f0b8: ldr x10, [x12, #0x3a0] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 12) + INT64_C(928))));
  /* 12f0bc: lsr x11, x8, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 12f0c0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 12f0c4: ldr x8, [x12, #0x3b8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 12) + INT64_C(952))));
  /* 12f0c8: lsr x12, x9, #1 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 12f0cc: csel x10, x11, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 12f0d0: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 12f0d4: csel x8, x12, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 8)));
  /* 12f0d8: cmn x10, x8 */
  (void)arc_add64(c, ARC_X_R(c, 10), ARC_X_R(c, 8), 0);
  /* 12f0dc: b.eq #0x12f128 */
  if (ARC_COND(c, 0)) goto L_12f128;
  /* 12f0e0: str x28, [x27, #0x38] */
  arc_st64((ARC_X_R(c, 27) + INT64_C(56)), ARC_X_R(c, 28));
  /* 12f0e4: ldp x8, x2, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 12f0e8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 12f0ec: add x5, sp, #0x24 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(36)));
  /* 12f0f0: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 12f0f4: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* 12f0f8: add x3, x8, #0x3c8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 8) + UINT64_C(968)));
  /* 12f0fc: bl #0x130448 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1241344));
  fn1_130448(c);
  /* 12f100: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12f104: sub x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) - ARC_X_R(c, 8)));
  /* 12f108: cmp x8, #0x2f */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(47));
  /* 12f10c: b.gt #0x12f128 */
  if (ARC_COND(c, 12)) goto L_12f128;
  /* 12f110: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 12f114: tbnz w9, #0, #0x12f63c */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_12f63c;
  /* 12f118: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* 12f11c: b.ne #0x12f76c */
  if (ARC_COND(c, 1)) goto L_12f76c;
  /* 12f120: mov w26, #4 */
  ARC_W_W(c, 26, UINT64_C(4));
  /* 12f124: b #0x12f650 */
  goto L_12f650;
L_12f128:;
  /* 12f128: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 12f12c: str x28, [x27, #0x38] */
  arc_st64((ARC_X_R(c, 27) + INT64_C(56)), ARC_X_R(c, 28));
  /* 12f130: ldr w2, [x28] */
  ARC_W_W(c, 2, arc_ld32(ARC_X_R(c, 28)));
  /* 12f134: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 12f138: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12f13c: mov w1, #0x40 */
  ARC_W_W(c, 1, UINT64_C(64));
  /* 12f140: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1241412));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 12f144: ldr w26, [x28] */
  ARC_W_W(c, 26, arc_ld32(ARC_X_R(c, 28)));
  /* 12f148: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 12f14c: tbz w0, #0, #0x12f3d8 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_12f3d8;
  /* 12f150: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 12f154: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12f158: mov w1, #0x40 */
  ARC_W_W(c, 1, UINT64_C(64));
  /* 12f15c: mov w2, w26 */
  ARC_W_W(c, 2, ARC_W_R(c, 26));
  /* 12f160: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1241444));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 12f164: tbz w0, #0, #0x12f50c */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_12f50c;
  /* 12f168: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 12f16c: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* 12f170: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12f174: mov w1, w26 */
  ARC_W_W(c, 1, ARC_W_R(c, 26));
  /* 12f178: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 12f17c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1241472));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 12f180: add x24, x28, #4 */
  ARC_X_W(c, 24, (ARC_X_R(c, 28) + UINT64_C(4)));
  /* 12f184: and w8, w0, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) & UINT64_C(255)));
  /* 12f188: cmp x24, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 25));
  /* 12f18c: sub w21, w8, #0x30 */
  ARC_W_W(c, 21, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* 12f190: b.eq #0x12f288 */
  if (ARC_COND(c, 0)) goto L_12f288;
  /* 12f194: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 12f198: ldr w26, [x24] */
  ARC_W_W(c, 26, arc_ld32(ARC_X_R(c, 24)));
  /* 12f19c: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 12f1a0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12f1a4: mov w1, #0x40 */
  ARC_W_W(c, 1, UINT64_C(64));
  /* 12f1a8: mov w2, w26 */
  ARC_W_W(c, 2, ARC_W_R(c, 26));
  /* 12f1ac: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1241520));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 12f1b0: tbz w0, #0, #0x12f290 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_12f290;
  /* 12f1b4: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 12f1b8: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* 12f1bc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12f1c0: mov w1, w26 */
  ARC_W_W(c, 1, ARC_W_R(c, 26));
  /* 12f1c4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 12f1c8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1241548));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 12f1cc: mov w8, #0xa */
  ARC_W_W(c, 8, UINT64_C(10));
  /* 12f1d0: add x24, x28, #8 */
  ARC_X_W(c, 24, (ARC_X_R(c, 28) + UINT64_C(8)));
  /* 12f1d4: mul w8, w21, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 21)) * (uint32_t)(ARC_W_R(c, 8))));
  /* 12f1d8: cmp x24, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 25));
  /* 12f1dc: add w8, w8, w0, uxtb */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + ((uint64_t)(uint8_t)(ARC_W_R(c, 0)))));
  /* 12f1e0: sub w21, w8, #0x30 */
  ARC_W_W(c, 21, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* 12f1e4: b.eq #0x12f288 */
  if (ARC_COND(c, 0)) goto L_12f288;
  /* 12f1e8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 12f1ec: ldr w26, [x24] */
  ARC_W_W(c, 26, arc_ld32(ARC_X_R(c, 24)));
  /* 12f1f0: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 12f1f4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12f1f8: mov w1, #0x40 */
  ARC_W_W(c, 1, UINT64_C(64));
  /* 12f1fc: mov w2, w26 */
  ARC_W_W(c, 2, ARC_W_R(c, 26));
  /* 12f200: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1241604));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 12f204: tbz w0, #0, #0x12f290 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_12f290;
  /* 12f208: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 12f20c: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* 12f210: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12f214: mov w1, w26 */
  ARC_W_W(c, 1, ARC_W_R(c, 26));
  /* 12f218: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 12f21c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1241632));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 12f220: mov w8, #0xa */
  ARC_W_W(c, 8, UINT64_C(10));
  /* 12f224: add x24, x28, #0xc */
  ARC_X_W(c, 24, (ARC_X_R(c, 28) + UINT64_C(12)));
  /* 12f228: mul w8, w21, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 21)) * (uint32_t)(ARC_W_R(c, 8))));
  /* 12f22c: cmp x24, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 25));
  /* 12f230: add w8, w8, w0, uxtb */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + ((uint64_t)(uint8_t)(ARC_W_R(c, 0)))));
  /* 12f234: sub w21, w8, #0x30 */
  ARC_W_W(c, 21, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* 12f238: b.eq #0x12f288 */
  if (ARC_COND(c, 0)) goto L_12f288;
  /* 12f23c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 12f240: ldr w26, [x24] */
  ARC_W_W(c, 26, arc_ld32(ARC_X_R(c, 24)));
  /* 12f244: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 12f248: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12f24c: mov w1, #0x40 */
  ARC_W_W(c, 1, UINT64_C(64));
  /* 12f250: mov w2, w26 */
  ARC_W_W(c, 2, ARC_W_R(c, 26));
  /* 12f254: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1241688));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 12f258: tbz w0, #0, #0x12f290 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_12f290;
  /* 12f25c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 12f260: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* 12f264: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12f268: mov w1, w26 */
  ARC_W_W(c, 1, ARC_W_R(c, 26));
  /* 12f26c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 12f270: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1241716));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 12f274: mov w8, #0xa */
  ARC_W_W(c, 8, UINT64_C(10));
  /* 12f278: add x24, x28, #0x10 */
  ARC_X_W(c, 24, (ARC_X_R(c, 28) + UINT64_C(16)));
  /* 12f27c: mul w8, w21, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 21)) * (uint32_t)(ARC_W_R(c, 8))));
  /* 12f280: add w8, w8, w0, uxtb */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + ((uint64_t)(uint8_t)(ARC_W_R(c, 0)))));
  /* 12f284: sub w21, w8, #0x30 */
  ARC_W_W(c, 21, (ARC_W_R(c, 8) - UINT64_C(48)));
L_12f288:;
  /* 12f288: cmp x24, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 25));
  /* 12f28c: b.eq #0x12f8cc */
  if (ARC_COND(c, 0)) goto L_12f8cc;
L_12f290:;
  /* 12f290: cmp w21, #0x1e */
  (void)arc_sub32(c, ARC_W_R(c, 21), UINT64_C(30));
  /* 12f294: b.le #0x12f52c */
  if (ARC_COND(c, 13)) goto L_12f52c;
L_12f298:;
  /* 12f298: cmp w21, #0x3c */
  (void)arc_sub32(c, ARC_W_R(c, 21), UINT64_C(60));
  /* 12f29c: b.gt #0x12f684 */
  if (ARC_COND(c, 12)) goto L_12f684;
  /* 12f2a0: cmp w21, #0x1f */
  (void)arc_sub32(c, ARC_W_R(c, 21), UINT64_C(31));
  /* 12f2a4: b.eq #0x12f94c */
  if (ARC_COND(c, 0)) goto L_12f94c;
  /* 12f2a8: cmp w21, #0x37 */
  (void)arc_sub32(c, ARC_W_R(c, 21), UINT64_C(55));
  /* 12f2ac: b.eq #0x12f904 */
  if (ARC_COND(c, 0)) goto L_12f904;
  /* 12f2b0: cmp w21, #0x3b */
  (void)arc_sub32(c, ARC_W_R(c, 21), UINT64_C(59));
  /* 12f2b4: b.ne #0x12f97c */
  if (ARC_COND(c, 1)) goto L_12f97c;
  /* 12f2b8: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 12f2bc: tbnz w9, #0, #0x12fc08 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_12fc08;
  /* 12f2c0: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* 12f2c4: b.ne #0x13008c */
  if (ARC_COND(c, 1)) goto L_13008c;
  /* 12f2c8: mov w26, #4 */
  ARC_W_W(c, 26, UINT64_C(4));
  /* 12f2cc: b #0x12fc1c */
  goto L_12fc1c;
L_12f2d0:;
  /* 12f2d0: lsr x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 12f2d4: add w9, w9, #2 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(2)));
  /* 12f2d8: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* 12f2dc: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
L_12f2e0:;
  /* 12f2e0: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 12f2e4: mov w10, #0x25 */
  ARC_W_W(c, 10, UINT64_C(37));
  /* 12f2e8: cmp x21, #0xa7 */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(167));
  /* 12f2ec: str x10, [x9, x8] */
  arc_st64((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_X_R(c, 10));
  /* 12f2f0: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 12f2f4: b.gt #0x12f30c */
  if (ARC_COND(c, 12)) goto L_12f30c;
  /* 12f2f8: tbnz w8, #0, #0x12f330 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12f330;
  /* 12f2fc: cmp w8, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(8));
  /* 12f300: b.ne #0x12f410 */
  if (ARC_COND(c, 1)) goto L_12f410;
  /* 12f304: mov w26, #4 */
  ARC_W_W(c, 26, UINT64_C(4));
  /* 12f308: b #0x12f344 */
  goto L_12f344;
L_12f30c:;
  /* 12f30c: tbnz w8, #0, #0x12f378 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12f378;
  /* 12f310: cmp w8, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(8));
  /* 12f314: b.eq #0x12eebc */
  if (ARC_COND(c, 0)) goto L_12eebc;
  /* 12f318: lsr w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(1)) & 31)));
  /* 12f31c: add w10, w8, #2 */
  ARC_W_W(c, 10, (ARC_W_R(c, 8) + UINT64_C(2)));
  /* 12f320: strb w10, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 10));
  /* 12f324: mov w8, w9 */
  ARC_W_W(c, 8, ARC_W_R(c, 9));
  /* 12f328: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
  /* 12f32c: b #0x12eef0 */
  goto L_12eef0;
L_12f330:;
  /* 12f330: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 12f334: and x8, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 12f338: sub x26, x8, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 12f33c: cmp x9, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 26));
  /* 12f340: b.ne #0x12f368 */
  if (ARC_COND(c, 1)) goto L_12f368;
L_12f344:;
  /* 12f344: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12f348: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 12f34c: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 12f350: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 12f354: mov x4, x26 */
  ARC_X_W(c, 4, ARC_X_R(c, 26));
  /* 12f358: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 12f35c: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 12f360: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1241956));
  fn1_142da0(c);
  /* 12f364: mov x9, x26 */
  ARC_X_W(c, 9, ARC_X_R(c, 26));
L_12f368:;
  /* 12f368: ldr x8, [x19, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 12f36c: add x10, x9, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 12f370: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* 12f374: b #0x12f420 */
  goto L_12f420;
L_12f378:;
  /* 12f378: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12f37c: and x9, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 12f380: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 12f384: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* 12f388: b.eq #0x12eec0 */
  if (ARC_COND(c, 0)) goto L_12eec0;
  /* 12f38c: b #0x12eee4 */
  goto L_12eee4;
L_12f390:;
  /* 12f390: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12f394: and x9, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 12f398: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 12f39c: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* 12f3a0: b.ne #0x12f3c8 */
  if (ARC_COND(c, 1)) goto L_12f3c8;
L_12f3a4:;
  /* 12f3a4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12f3a8: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 12f3ac: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 12f3b0: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 12f3b4: mov x4, x26 */
  ARC_X_W(c, 4, ARC_X_R(c, 26));
  /* 12f3b8: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 12f3bc: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 12f3c0: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1242052));
  fn1_142da0(c);
  /* 12f3c4: mov x8, x26 */
  ARC_X_W(c, 8, ARC_X_R(c, 26));
L_12f3c8:;
  /* 12f3c8: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 12f3cc: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 12f3d0: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* 12f3d4: b #0x12f43c */
  goto L_12f43c;
L_12f3d8:;
  /* 12f3d8: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* 12f3dc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12f3e0: mov w1, w26 */
  ARC_W_W(c, 1, ARC_W_R(c, 26));
  /* 12f3e4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 12f3e8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1242092));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 12f3ec: and w8, w0, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) & UINT64_C(255)));
  /* 12f3f0: cmp w8, #0x25 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(37));
  /* 12f3f4: b.ne #0x12f564 */
  if (ARC_COND(c, 1)) goto L_12f564;
  /* 12f3f8: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 12f3fc: tbnz w9, #0, #0x12f6b4 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_12f6b4;
  /* 12f400: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* 12f404: b.ne #0x12f80c */
  if (ARC_COND(c, 1)) goto L_12f80c;
  /* 12f408: mov w26, #4 */
  ARC_W_W(c, 26, UINT64_C(4));
  /* 12f40c: b #0x12f6c8 */
  goto L_12f6c8;
L_12f410:;
  /* 12f410: lsr x9, x8, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 12f414: add w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(2)));
  /* 12f418: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 12f41c: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
L_12f420:;
  /* 12f420: add x8, x8, x9, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 2)));
  /* 12f424: mov w9, #0x41 */
  ARC_W_W(c, 9, UINT64_C(65));
  /* 12f428: b #0x12eef8 */
  goto L_12eef8;
L_12f42c:;
  /* 12f42c: lsr x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 12f430: add w9, w9, #2 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(2)));
  /* 12f434: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* 12f438: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
L_12f43c:;
  /* 12f43c: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 12f440: mov w10, #0x25 */
  ARC_W_W(c, 10, UINT64_C(37));
  /* 12f444: cmp x24, #0x11f */
  (void)arc_sub64(c, ARC_X_R(c, 24), UINT64_C(287));
  /* 12f448: str x10, [x9, x8] */
  arc_st64((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_X_R(c, 10));
  /* 12f44c: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 12f450: b.gt #0x12f468 */
  if (ARC_COND(c, 12)) goto L_12f468;
  /* 12f454: tbnz w8, #0, #0x12f47c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12f47c;
  /* 12f458: cmp w8, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(8));
  /* 12f45c: b.ne #0x12f580 */
  if (ARC_COND(c, 1)) goto L_12f580;
  /* 12f460: mov w26, #4 */
  ARC_W_W(c, 26, UINT64_C(4));
  /* 12f464: b #0x12f490 */
  goto L_12f490;
L_12f468:;
  /* 12f468: tbnz w8, #0, #0x12f4c4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12f4c4;
  /* 12f46c: cmp w8, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(8));
  /* 12f470: b.ne #0x12f59c */
  if (ARC_COND(c, 1)) goto L_12f59c;
  /* 12f474: mov w26, #4 */
  ARC_W_W(c, 26, UINT64_C(4));
  /* 12f478: b #0x12f4d8 */
  goto L_12f4d8;
L_12f47c:;
  /* 12f47c: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 12f480: and x8, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 12f484: sub x26, x8, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 12f488: cmp x9, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 26));
  /* 12f48c: b.ne #0x12f4b4 */
  if (ARC_COND(c, 1)) goto L_12f4b4;
L_12f490:;
  /* 12f490: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12f494: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 12f498: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 12f49c: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 12f4a0: mov x4, x26 */
  ARC_X_W(c, 4, ARC_X_R(c, 26));
  /* 12f4a4: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 12f4a8: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 12f4ac: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1242288));
  fn1_142da0(c);
  /* 12f4b0: mov x9, x26 */
  ARC_X_W(c, 9, ARC_X_R(c, 26));
L_12f4b4:;
  /* 12f4b4: ldr x8, [x19, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 12f4b8: add x10, x9, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 12f4bc: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* 12f4c0: b #0x12f590 */
  goto L_12f590;
L_12f4c4:;
  /* 12f4c4: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12f4c8: and x9, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 12f4cc: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 12f4d0: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* 12f4d4: b.ne #0x12f4fc */
  if (ARC_COND(c, 1)) goto L_12f4fc;
L_12f4d8:;
  /* 12f4d8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12f4dc: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 12f4e0: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 12f4e4: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 12f4e8: mov x4, x26 */
  ARC_X_W(c, 4, ARC_X_R(c, 26));
  /* 12f4ec: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 12f4f0: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 12f4f4: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1242360));
  fn1_142da0(c);
  /* 12f4f8: mov x8, x26 */
  ARC_X_W(c, 8, ARC_X_R(c, 26));
L_12f4fc:;
  /* 12f4fc: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 12f500: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 12f504: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* 12f508: b #0x12f5b0 */
  goto L_12f5b0;
L_12f50c:;
  /* 12f50c: mov w21, wzr */
  ARC_W_W(c, 21, ARC_W_R(c, 31));
  /* 12f510: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 12f514: mov x24, x28 */
  ARC_X_W(c, 24, ARC_X_R(c, 28));
L_12f518:;
  /* 12f518: ldr w9, [sp, #0x24] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(36))));
  /* 12f51c: orr w8, w9, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) | ARC_W_R(c, 8)));
  /* 12f520: str w8, [sp, #0x24] */
  arc_st32(((c)->sp + INT64_C(36)), ARC_W_R(c, 8));
  /* 12f524: cmp w21, #0x1e */
  (void)arc_sub32(c, ARC_W_R(c, 21), UINT64_C(30));
  /* 12f528: b.gt #0x12f298 */
  if (ARC_COND(c, 12)) goto L_12f298;
L_12f52c:;
  /* 12f52c: cmp w21, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 21), UINT64_C(10));
  /* 12f530: b.le #0x12f744 */
  if (ARC_COND(c, 13)) goto L_12f744;
  /* 12f534: cmp w21, #0xb */
  (void)arc_sub32(c, ARC_W_R(c, 21), UINT64_C(11));
  /* 12f538: b.eq #0x12f934 */
  if (ARC_COND(c, 0)) goto L_12f934;
  /* 12f53c: cmp w21, #0xc */
  (void)arc_sub32(c, ARC_W_R(c, 21), UINT64_C(12));
  /* 12f540: b.eq #0x12f8ec */
  if (ARC_COND(c, 0)) goto L_12f8ec;
  /* 12f544: cmp w21, #0x17 */
  (void)arc_sub32(c, ARC_W_R(c, 21), UINT64_C(23));
  /* 12f548: b.ne #0x12f97c */
  if (ARC_COND(c, 1)) goto L_12f97c;
  /* 12f54c: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 12f550: tbnz w9, #0, #0x12fb78 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_12fb78;
  /* 12f554: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* 12f558: b.ne #0x12ff94 */
  if (ARC_COND(c, 1)) goto L_12ff94;
  /* 12f55c: mov w26, #4 */
  ARC_W_W(c, 26, UINT64_C(4));
  /* 12f560: b #0x12fb8c */
  goto L_12fb8c;
L_12f564:;
  /* 12f564: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 12f568: ldr w21, [x28] */
  ARC_W_W(c, 21, arc_ld32(ARC_X_R(c, 28)));
  /* 12f56c: tbnz w9, #0, #0x12f6fc */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_12f6fc;
  /* 12f570: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* 12f574: b.ne #0x12f888 */
  if (ARC_COND(c, 1)) goto L_12f888;
  /* 12f578: mov w26, #4 */
  ARC_W_W(c, 26, UINT64_C(4));
  /* 12f57c: b #0x12f710 */
  goto L_12f710;
L_12f580:;
  /* 12f580: lsr x9, x8, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 12f584: add w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(2)));
  /* 12f588: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 12f58c: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
L_12f590:;
  /* 12f590: add x8, x8, x9, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 2)));
  /* 12f594: mov w9, #0x42 */
  ARC_W_W(c, 9, UINT64_C(66));
  /* 12f598: b #0x12f5b8 */
  goto L_12f5b8;
L_12f59c:;
  /* 12f59c: lsr w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(1)) & 31)));
  /* 12f5a0: add w10, w8, #2 */
  ARC_W_W(c, 10, (ARC_W_R(c, 8) + UINT64_C(2)));
  /* 12f5a4: strb w10, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 10));
  /* 12f5a8: mov w8, w9 */
  ARC_W_W(c, 8, ARC_W_R(c, 9));
  /* 12f5ac: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
L_12f5b0:;
  /* 12f5b0: add x8, x9, x8, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 2)));
  /* 12f5b4: mov w9, #0x62 */
  ARC_W_W(c, 9, UINT64_C(98));
L_12f5b8:;
  /* 12f5b8: stp w9, wzr, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st32(_pa, ARC_W_R(c, 9));
    arc_st32(_pa + 4, ARC_W_R(c, 31));
  }
  /* 12f5bc: ldr w9, [sp, #4] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(4))));
  /* 12f5c0: cmp w9, #0x78 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(120));
  /* 12f5c4: b.ne #0x12eefc */
  if (ARC_COND(c, 1)) goto L_12eefc;
  /* 12f5c8: asr x8, x24, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 24)) >> ((UINT64_C(3)) & 63))));
  /* 12f5cc: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* 12f5d0: movk x9, #0xaaab */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744073709486080)) | UINT64_C(43691)));
  /* 12f5d4: mul x8, x8, x9 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9))));
  /* 12f5d8: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* 12f5dc: madd x8, x8, x9, x23 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 23)) + ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9)))));
  /* 12f5e0: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* 12f5e4: ldr x10, [x8, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 12f5e8: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 12f5ec: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 12f5f0: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* 12f5f4: csel x8, x8, x10, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* 12f5f8: ldr w2, [x8] */
  ARC_W_W(c, 2, arc_ld32(ARC_X_R(c, 8)));
  /* 12f5fc: ldr x8, [x9, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(24))));
  /* 12f600: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12f604: mov w1, #0x40 */
  ARC_W_W(c, 1, UINT64_C(64));
  /* 12f608: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1242636));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 12f60c: tbz w0, #0, #0x12eefc */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_12eefc;
  /* 12f610: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 12f614: ldp x10, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 12f618: lsr x11, x8, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 12f61c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 12f620: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 12f624: csel x8, x8, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* 12f628: csel x9, x11, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 12f62c: add x8, x8, x9, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 2)));
  /* 12f630: mov w9, #0x6d */
  ARC_W_W(c, 9, UINT64_C(109));
  /* 12f634: stur w9, [x8, #-4] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(-4)), ARC_W_R(c, 9));
  /* 12f638: b #0x12eefc */
  goto L_12eefc;
L_12f63c:;
  /* 12f63c: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12f640: and x9, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 12f644: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 12f648: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* 12f64c: b.ne #0x12f674 */
  if (ARC_COND(c, 1)) goto L_12f674;
L_12f650:;
  /* 12f650: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12f654: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 12f658: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 12f65c: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 12f660: mov x4, x26 */
  ARC_X_W(c, 4, ARC_X_R(c, 26));
  /* 12f664: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 12f668: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 12f66c: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1242736));
  fn1_142da0(c);
  /* 12f670: mov x8, x26 */
  ARC_X_W(c, 8, ARC_X_R(c, 26));
L_12f674:;
  /* 12f674: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 12f678: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 12f67c: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* 12f680: b #0x12f77c */
  goto L_12f77c;
L_12f684:;
  /* 12f684: cmp w21, #0x3d */
  (void)arc_sub32(c, ARC_W_R(c, 21), UINT64_C(61));
  /* 12f688: b.eq #0x12f964 */
  if (ARC_COND(c, 0)) goto L_12f964;
  /* 12f68c: cmp w21, #0x16c */
  (void)arc_sub32(c, ARC_W_R(c, 21), UINT64_C(364));
  /* 12f690: b.eq #0x12f91c */
  if (ARC_COND(c, 0)) goto L_12f91c;
  /* 12f694: cmp w21, #0x80d */
  (void)arc_sub32(c, ARC_W_R(c, 21), UINT64_C(2061));
  /* 12f698: b.ne #0x12f97c */
  if (ARC_COND(c, 1)) goto L_12f97c;
  /* 12f69c: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 12f6a0: tbnz w9, #0, #0x12fc50 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_12fc50;
  /* 12f6a4: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* 12f6a8: b.ne #0x130108 */
  if (ARC_COND(c, 1)) goto L_130108;
  /* 12f6ac: mov w26, #4 */
  ARC_W_W(c, 26, UINT64_C(4));
  /* 12f6b0: b #0x12fc64 */
  goto L_12fc64;
L_12f6b4:;
  /* 12f6b4: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12f6b8: and x9, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 12f6bc: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 12f6c0: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* 12f6c4: b.ne #0x12f6ec */
  if (ARC_COND(c, 1)) goto L_12f6ec;
L_12f6c8:;
  /* 12f6c8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12f6cc: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 12f6d0: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 12f6d4: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 12f6d8: mov x4, x26 */
  ARC_X_W(c, 4, ARC_X_R(c, 26));
  /* 12f6dc: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 12f6e0: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 12f6e4: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1242856));
  fn1_142da0(c);
  /* 12f6e8: mov x8, x26 */
  ARC_X_W(c, 8, ARC_X_R(c, 26));
L_12f6ec:;
  /* 12f6ec: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 12f6f0: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 12f6f4: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* 12f6f8: b #0x12f81c */
  goto L_12f81c;
L_12f6fc:;
  /* 12f6fc: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12f700: and x9, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 12f704: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 12f708: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* 12f70c: b.ne #0x12f734 */
  if (ARC_COND(c, 1)) goto L_12f734;
L_12f710:;
  /* 12f710: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12f714: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 12f718: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 12f71c: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 12f720: mov x4, x26 */
  ARC_X_W(c, 4, ARC_X_R(c, 26));
  /* 12f724: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 12f728: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 12f72c: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1242928));
  fn1_142da0(c);
  /* 12f730: mov x8, x26 */
  ARC_X_W(c, 8, ARC_X_R(c, 26));
L_12f734:;
  /* 12f734: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 12f738: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 12f73c: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* 12f740: b #0x12f898 */
  goto L_12f898;
L_12f744:;
  /* 12f744: cmp w21, #6 */
  (void)arc_sub32(c, ARC_W_R(c, 21), UINT64_C(6));
  /* 12f748: b.eq #0x12f8d4 */
  if (ARC_COND(c, 0)) goto L_12f8d4;
  /* 12f74c: cmp w21, #7 */
  (void)arc_sub32(c, ARC_W_R(c, 21), UINT64_C(7));
  /* 12f750: b.ne #0x12f97c */
  if (ARC_COND(c, 1)) goto L_12f97c;
  /* 12f754: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 12f758: tbnz w9, #0, #0x12fa58 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_12fa58;
  /* 12f75c: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* 12f760: b.ne #0x12fda4 */
  if (ARC_COND(c, 1)) goto L_12fda4;
  /* 12f764: mov w26, #4 */
  ARC_W_W(c, 26, UINT64_C(4));
  /* 12f768: b #0x12fa6c */
  goto L_12fa6c;
L_12f76c:;
  /* 12f76c: lsr x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 12f770: add w9, w9, #2 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(2)));
  /* 12f774: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* 12f778: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
L_12f77c:;
  /* 12f77c: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 12f780: mov w10, #0x25 */
  ARC_W_W(c, 10, UINT64_C(37));
  /* 12f784: str x10, [x9, x8] */
  arc_st64((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_X_R(c, 10));
  /* 12f788: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 12f78c: tbnz w9, #0, #0x12f7a0 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_12f7a0;
  /* 12f790: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* 12f794: b.ne #0x12f7e8 */
  if (ARC_COND(c, 1)) goto L_12f7e8;
  /* 12f798: mov w26, #4 */
  ARC_W_W(c, 26, UINT64_C(4));
  /* 12f79c: b #0x12f7b4 */
  goto L_12f7b4;
L_12f7a0:;
  /* 12f7a0: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12f7a4: and x9, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 12f7a8: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 12f7ac: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* 12f7b0: b.ne #0x12f7d8 */
  if (ARC_COND(c, 1)) goto L_12f7d8;
L_12f7b4:;
  /* 12f7b4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12f7b8: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 12f7bc: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 12f7c0: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 12f7c4: mov x4, x26 */
  ARC_X_W(c, 4, ARC_X_R(c, 26));
  /* 12f7c8: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 12f7cc: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 12f7d0: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1243092));
  fn1_142da0(c);
  /* 12f7d4: mov x8, x26 */
  ARC_X_W(c, 8, ARC_X_R(c, 26));
L_12f7d8:;
  /* 12f7d8: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 12f7dc: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 12f7e0: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* 12f7e4: b #0x12f7f8 */
  goto L_12f7f8;
L_12f7e8:;
  /* 12f7e8: lsr x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 12f7ec: add w9, w9, #2 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(2)));
  /* 12f7f0: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* 12f7f4: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
L_12f7f8:;
  /* 12f7f8: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 12f7fc: ldr x24, [x27, #0x38] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 27) + INT64_C(56))));
  /* 12f800: mov w10, #0x70 */
  ARC_W_W(c, 10, UINT64_C(112));
  /* 12f804: str x10, [x9, x8] */
  arc_st64((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_X_R(c, 10));
  /* 12f808: b #0x12ef00 */
  goto L_12ef00;
L_12f80c:;
  /* 12f80c: lsr x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 12f810: add w9, w9, #2 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(2)));
  /* 12f814: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* 12f818: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
L_12f81c:;
  /* 12f81c: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 12f820: mov w10, #0x25 */
  ARC_W_W(c, 10, UINT64_C(37));
  /* 12f824: str x10, [x9, x8] */
  arc_st64((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_X_R(c, 10));
  /* 12f828: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 12f82c: tbnz w9, #0, #0x12f840 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_12f840;
  /* 12f830: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* 12f834: b.ne #0x12f8a8 */
  if (ARC_COND(c, 1)) goto L_12f8a8;
  /* 12f838: mov w26, #4 */
  ARC_W_W(c, 26, UINT64_C(4));
  /* 12f83c: b #0x12f854 */
  goto L_12f854;
L_12f840:;
  /* 12f840: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12f844: and x9, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 12f848: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 12f84c: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* 12f850: b.ne #0x12f878 */
  if (ARC_COND(c, 1)) goto L_12f878;
L_12f854:;
  /* 12f854: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12f858: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 12f85c: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 12f860: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 12f864: mov x4, x26 */
  ARC_X_W(c, 4, ARC_X_R(c, 26));
  /* 12f868: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 12f86c: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 12f870: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1243252));
  fn1_142da0(c);
  /* 12f874: mov x8, x26 */
  ARC_X_W(c, 8, ARC_X_R(c, 26));
L_12f878:;
  /* 12f878: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 12f87c: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 12f880: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* 12f884: b #0x12f8b8 */
  goto L_12f8b8;
L_12f888:;
  /* 12f888: lsr x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 12f88c: add w9, w9, #2 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(2)));
  /* 12f890: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* 12f894: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
L_12f898:;
  /* 12f898: add x8, x9, x8, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 2)));
  /* 12f89c: add x24, x28, #4 */
  ARC_X_W(c, 24, (ARC_X_R(c, 28) + UINT64_C(4)));
  /* 12f8a0: stp w21, wzr, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st32(_pa, ARC_W_R(c, 21));
    arc_st32(_pa + 4, ARC_W_R(c, 31));
  }
  /* 12f8a4: b #0x12ef00 */
  goto L_12ef00;
L_12f8a8:;
  /* 12f8a8: lsr x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 12f8ac: add w9, w9, #2 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(2)));
  /* 12f8b0: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* 12f8b4: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
L_12f8b8:;
  /* 12f8b8: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 12f8bc: mov w10, #0x25 */
  ARC_W_W(c, 10, UINT64_C(37));
  /* 12f8c0: add x24, x28, #4 */
  ARC_X_W(c, 24, (ARC_X_R(c, 28) + UINT64_C(4)));
  /* 12f8c4: str x10, [x9, x8] */
  arc_st64((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_X_R(c, 10));
  /* 12f8c8: b #0x12ef00 */
  goto L_12ef00;
L_12f8cc:;
  /* 12f8cc: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
  /* 12f8d0: b #0x12f518 */
  goto L_12f518;
L_12f8d4:;
  /* 12f8d4: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 12f8d8: tbnz w9, #0, #0x12fa10 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_12fa10;
  /* 12f8dc: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* 12f8e0: b.ne #0x12fd28 */
  if (ARC_COND(c, 1)) goto L_12fd28;
  /* 12f8e4: mov w26, #4 */
  ARC_W_W(c, 26, UINT64_C(4));
  /* 12f8e8: b #0x12fa24 */
  goto L_12fa24;
L_12f8ec:;
  /* 12f8ec: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 12f8f0: tbnz w9, #0, #0x12faa0 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_12faa0;
  /* 12f8f4: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* 12f8f8: b.ne #0x12fe20 */
  if (ARC_COND(c, 1)) goto L_12fe20;
  /* 12f8fc: mov w26, #4 */
  ARC_W_W(c, 26, UINT64_C(4));
  /* 12f900: b #0x12fab4 */
  goto L_12fab4;
L_12f904:;
  /* 12f904: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 12f908: tbnz w9, #0, #0x12fae8 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_12fae8;
  /* 12f90c: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* 12f910: b.ne #0x12fe9c */
  if (ARC_COND(c, 1)) goto L_12fe9c;
  /* 12f914: mov w26, #4 */
  ARC_W_W(c, 26, UINT64_C(4));
  /* 12f918: b #0x12fafc */
  goto L_12fafc;
L_12f91c:;
  /* 12f91c: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 12f920: tbnz w9, #0, #0x12fb30 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_12fb30;
  /* 12f924: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* 12f928: b.ne #0x12ff18 */
  if (ARC_COND(c, 1)) goto L_12ff18;
  /* 12f92c: mov w26, #4 */
  ARC_W_W(c, 26, UINT64_C(4));
  /* 12f930: b #0x12fb44 */
  goto L_12fb44;
L_12f934:;
  /* 12f934: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 12f938: tbnz w9, #0, #0x12fbc0 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_12fbc0;
  /* 12f93c: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* 12f940: b.ne #0x130010 */
  if (ARC_COND(c, 1)) goto L_130010;
  /* 12f944: mov w26, #4 */
  ARC_W_W(c, 26, UINT64_C(4));
  /* 12f948: b #0x12fbd4 */
  goto L_12fbd4;
L_12f94c:;
  /* 12f94c: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 12f950: tbnz w9, #0, #0x12fc98 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_12fc98;
  /* 12f954: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* 12f958: b.ne #0x130184 */
  if (ARC_COND(c, 1)) goto L_130184;
  /* 12f95c: mov w26, #4 */
  ARC_W_W(c, 26, UINT64_C(4));
  /* 12f960: b #0x12fcac */
  goto L_12fcac;
L_12f964:;
  /* 12f964: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 12f968: tbnz w9, #0, #0x12fce0 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_12fce0;
  /* 12f96c: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* 12f970: b.ne #0x130200 */
  if (ARC_COND(c, 1)) goto L_130200;
  /* 12f974: mov w26, #4 */
  ARC_W_W(c, 26, UINT64_C(4));
  /* 12f978: b #0x12fcf4 */
  goto L_12fcf4;
L_12f97c:;
  /* 12f97c: cmp x28, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 28), ARC_X_R(c, 24));
  /* 12f980: b.ne #0x12f9d0 */
  if (ARC_COND(c, 1)) goto L_12f9d0;
  /* 12f984: b #0x12ef00 */
  goto L_12ef00;
L_12f988:;
  /* 12f988: mov w26, #4 */
  ARC_W_W(c, 26, UINT64_C(4));
L_12f98c:;
  /* 12f98c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12f990: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 12f994: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 12f998: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 12f99c: mov x4, x26 */
  ARC_X_W(c, 4, ARC_X_R(c, 26));
  /* 12f9a0: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 12f9a4: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 12f9a8: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1243564));
  fn1_142da0(c);
  /* 12f9ac: mov x8, x26 */
  ARC_X_W(c, 8, ARC_X_R(c, 26));
L_12f9b0:;
  /* 12f9b0: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 12f9b4: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 12f9b8: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
L_12f9bc:;
  /* 12f9bc: add x8, x9, x8, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 2)));
  /* 12f9c0: add x28, x28, #4 */
  ARC_X_W(c, 28, (ARC_X_R(c, 28) + UINT64_C(4)));
  /* 12f9c4: cmp x28, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 28), ARC_X_R(c, 24));
  /* 12f9c8: stp w21, wzr, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st32(_pa, ARC_W_R(c, 21));
    arc_st32(_pa + 4, ARC_W_R(c, 31));
  }
  /* 12f9cc: b.eq #0x12ef00 */
  if (ARC_COND(c, 0)) goto L_12ef00;
L_12f9d0:;
  /* 12f9d0: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 12f9d4: ldr w21, [x28] */
  ARC_W_W(c, 21, arc_ld32(ARC_X_R(c, 28)));
  /* 12f9d8: tbnz w9, #0, #0x12f9f8 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_12f9f8;
  /* 12f9dc: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* 12f9e0: b.eq #0x12f988 */
  if (ARC_COND(c, 0)) goto L_12f988;
  /* 12f9e4: lsr x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 12f9e8: add w9, w9, #2 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(2)));
  /* 12f9ec: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* 12f9f0: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
  /* 12f9f4: b #0x12f9bc */
  goto L_12f9bc;
L_12f9f8:;
  /* 12f9f8: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12f9fc: and x9, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 12fa00: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 12fa04: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* 12fa08: b.eq #0x12f98c */
  if (ARC_COND(c, 0)) goto L_12f98c;
  /* 12fa0c: b #0x12f9b0 */
  goto L_12f9b0;
L_12fa10:;
  /* 12fa10: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12fa14: and x9, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 12fa18: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 12fa1c: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* 12fa20: b.ne #0x12fa48 */
  if (ARC_COND(c, 1)) goto L_12fa48;
L_12fa24:;
  /* 12fa24: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12fa28: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 12fa2c: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 12fa30: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 12fa34: mov x4, x26 */
  ARC_X_W(c, 4, ARC_X_R(c, 26));
  /* 12fa38: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 12fa3c: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 12fa40: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1243716));
  fn1_142da0(c);
  /* 12fa44: mov x8, x26 */
  ARC_X_W(c, 8, ARC_X_R(c, 26));
L_12fa48:;
  /* 12fa48: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 12fa4c: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 12fa50: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* 12fa54: b #0x12fd38 */
  goto L_12fd38;
L_12fa58:;
  /* 12fa58: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12fa5c: and x9, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 12fa60: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 12fa64: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* 12fa68: b.ne #0x12fa90 */
  if (ARC_COND(c, 1)) goto L_12fa90;
L_12fa6c:;
  /* 12fa6c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12fa70: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 12fa74: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 12fa78: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 12fa7c: mov x4, x26 */
  ARC_X_W(c, 4, ARC_X_R(c, 26));
  /* 12fa80: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 12fa84: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 12fa88: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1243788));
  fn1_142da0(c);
  /* 12fa8c: mov x8, x26 */
  ARC_X_W(c, 8, ARC_X_R(c, 26));
L_12fa90:;
  /* 12fa90: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 12fa94: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 12fa98: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* 12fa9c: b #0x12fdb4 */
  goto L_12fdb4;
L_12faa0:;
  /* 12faa0: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12faa4: and x9, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 12faa8: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 12faac: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* 12fab0: b.ne #0x12fad8 */
  if (ARC_COND(c, 1)) goto L_12fad8;
L_12fab4:;
  /* 12fab4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12fab8: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 12fabc: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 12fac0: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 12fac4: mov x4, x26 */
  ARC_X_W(c, 4, ARC_X_R(c, 26));
  /* 12fac8: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 12facc: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 12fad0: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1243860));
  fn1_142da0(c);
  /* 12fad4: mov x8, x26 */
  ARC_X_W(c, 8, ARC_X_R(c, 26));
L_12fad8:;
  /* 12fad8: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 12fadc: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 12fae0: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* 12fae4: b #0x12fe30 */
  goto L_12fe30;
L_12fae8:;
  /* 12fae8: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12faec: and x9, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 12faf0: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 12faf4: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* 12faf8: b.ne #0x12fb20 */
  if (ARC_COND(c, 1)) goto L_12fb20;
L_12fafc:;
  /* 12fafc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12fb00: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 12fb04: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 12fb08: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 12fb0c: mov x4, x26 */
  ARC_X_W(c, 4, ARC_X_R(c, 26));
  /* 12fb10: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 12fb14: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 12fb18: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1243932));
  fn1_142da0(c);
  /* 12fb1c: mov x8, x26 */
  ARC_X_W(c, 8, ARC_X_R(c, 26));
L_12fb20:;
  /* 12fb20: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 12fb24: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 12fb28: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* 12fb2c: b #0x12feac */
  goto L_12feac;
L_12fb30:;
  /* 12fb30: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12fb34: and x9, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 12fb38: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 12fb3c: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* 12fb40: b.ne #0x12fb68 */
  if (ARC_COND(c, 1)) goto L_12fb68;
L_12fb44:;
  /* 12fb44: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12fb48: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 12fb4c: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 12fb50: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 12fb54: mov x4, x26 */
  ARC_X_W(c, 4, ARC_X_R(c, 26));
  /* 12fb58: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 12fb5c: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 12fb60: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1244004));
  fn1_142da0(c);
  /* 12fb64: mov x8, x26 */
  ARC_X_W(c, 8, ARC_X_R(c, 26));
L_12fb68:;
  /* 12fb68: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 12fb6c: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 12fb70: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* 12fb74: b #0x12ff28 */
  goto L_12ff28;
L_12fb78:;
  /* 12fb78: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12fb7c: and x9, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 12fb80: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 12fb84: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* 12fb88: b.ne #0x12fbb0 */
  if (ARC_COND(c, 1)) goto L_12fbb0;
L_12fb8c:;
  /* 12fb8c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12fb90: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 12fb94: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 12fb98: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 12fb9c: mov x4, x26 */
  ARC_X_W(c, 4, ARC_X_R(c, 26));
  /* 12fba0: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 12fba4: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 12fba8: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1244076));
  fn1_142da0(c);
  /* 12fbac: mov x8, x26 */
  ARC_X_W(c, 8, ARC_X_R(c, 26));
L_12fbb0:;
  /* 12fbb0: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 12fbb4: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 12fbb8: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* 12fbbc: b #0x12ffa4 */
  goto L_12ffa4;
L_12fbc0:;
  /* 12fbc0: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12fbc4: and x9, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 12fbc8: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 12fbcc: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* 12fbd0: b.ne #0x12fbf8 */
  if (ARC_COND(c, 1)) goto L_12fbf8;
L_12fbd4:;
  /* 12fbd4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12fbd8: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 12fbdc: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 12fbe0: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 12fbe4: mov x4, x26 */
  ARC_X_W(c, 4, ARC_X_R(c, 26));
  /* 12fbe8: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 12fbec: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 12fbf0: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1244148));
  fn1_142da0(c);
  /* 12fbf4: mov x8, x26 */
  ARC_X_W(c, 8, ARC_X_R(c, 26));
L_12fbf8:;
  /* 12fbf8: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 12fbfc: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 12fc00: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* 12fc04: b #0x130020 */
  goto L_130020;
L_12fc08:;
  /* 12fc08: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12fc0c: and x9, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 12fc10: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 12fc14: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* 12fc18: b.ne #0x12fc40 */
  if (ARC_COND(c, 1)) goto L_12fc40;
L_12fc1c:;
  /* 12fc1c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12fc20: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 12fc24: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 12fc28: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 12fc2c: mov x4, x26 */
  ARC_X_W(c, 4, ARC_X_R(c, 26));
  /* 12fc30: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 12fc34: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 12fc38: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1244220));
  fn1_142da0(c);
  /* 12fc3c: mov x8, x26 */
  ARC_X_W(c, 8, ARC_X_R(c, 26));
L_12fc40:;
  /* 12fc40: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 12fc44: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 12fc48: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* 12fc4c: b #0x13009c */
  goto L_13009c;
L_12fc50:;
  /* 12fc50: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12fc54: and x9, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 12fc58: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 12fc5c: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* 12fc60: b.ne #0x12fc88 */
  if (ARC_COND(c, 1)) goto L_12fc88;
L_12fc64:;
  /* 12fc64: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12fc68: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 12fc6c: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 12fc70: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 12fc74: mov x4, x26 */
  ARC_X_W(c, 4, ARC_X_R(c, 26));
  /* 12fc78: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 12fc7c: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 12fc80: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1244292));
  fn1_142da0(c);
  /* 12fc84: mov x8, x26 */
  ARC_X_W(c, 8, ARC_X_R(c, 26));
L_12fc88:;
  /* 12fc88: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 12fc8c: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 12fc90: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* 12fc94: b #0x130118 */
  goto L_130118;
L_12fc98:;
  /* 12fc98: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12fc9c: and x9, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 12fca0: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 12fca4: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* 12fca8: b.ne #0x12fcd0 */
  if (ARC_COND(c, 1)) goto L_12fcd0;
L_12fcac:;
  /* 12fcac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12fcb0: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 12fcb4: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 12fcb8: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 12fcbc: mov x4, x26 */
  ARC_X_W(c, 4, ARC_X_R(c, 26));
  /* 12fcc0: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 12fcc4: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 12fcc8: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1244364));
  fn1_142da0(c);
  /* 12fccc: mov x8, x26 */
  ARC_X_W(c, 8, ARC_X_R(c, 26));
L_12fcd0:;
  /* 12fcd0: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 12fcd4: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 12fcd8: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* 12fcdc: b #0x130194 */
  goto L_130194;
L_12fce0:;
  /* 12fce0: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12fce4: and x9, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 12fce8: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 12fcec: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* 12fcf0: b.ne #0x12fd18 */
  if (ARC_COND(c, 1)) goto L_12fd18;
L_12fcf4:;
  /* 12fcf4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12fcf8: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 12fcfc: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 12fd00: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 12fd04: mov x4, x26 */
  ARC_X_W(c, 4, ARC_X_R(c, 26));
  /* 12fd08: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 12fd0c: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 12fd10: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1244436));
  fn1_142da0(c);
  /* 12fd14: mov x8, x26 */
  ARC_X_W(c, 8, ARC_X_R(c, 26));
L_12fd18:;
  /* 12fd18: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 12fd1c: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 12fd20: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* 12fd24: b #0x130210 */
  goto L_130210;
L_12fd28:;
  /* 12fd28: lsr x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 12fd2c: add w9, w9, #2 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(2)));
  /* 12fd30: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* 12fd34: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
L_12fd38:;
  /* 12fd38: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 12fd3c: mov w10, #0x25 */
  ARC_W_W(c, 10, UINT64_C(37));
  /* 12fd40: str x10, [x9, x8] */
  arc_st64((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_X_R(c, 10));
  /* 12fd44: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 12fd48: tbnz w9, #0, #0x12fd5c */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_12fd5c;
  /* 12fd4c: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* 12fd50: b.ne #0x13027c */
  if (ARC_COND(c, 1)) goto L_13027c;
  /* 12fd54: mov w26, #4 */
  ARC_W_W(c, 26, UINT64_C(4));
  /* 12fd58: b #0x12fd70 */
  goto L_12fd70;
L_12fd5c:;
  /* 12fd5c: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12fd60: and x9, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 12fd64: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 12fd68: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* 12fd6c: b.ne #0x12fd94 */
  if (ARC_COND(c, 1)) goto L_12fd94;
L_12fd70:;
  /* 12fd70: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12fd74: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 12fd78: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 12fd7c: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 12fd80: mov x4, x26 */
  ARC_X_W(c, 4, ARC_X_R(c, 26));
  /* 12fd84: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 12fd88: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 12fd8c: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1244560));
  fn1_142da0(c);
  /* 12fd90: mov x8, x26 */
  ARC_X_W(c, 8, ARC_X_R(c, 26));
L_12fd94:;
  /* 12fd94: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 12fd98: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 12fd9c: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* 12fda0: b #0x13028c */
  goto L_13028c;
L_12fda4:;
  /* 12fda4: lsr x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 12fda8: add w9, w9, #2 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(2)));
  /* 12fdac: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* 12fdb0: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
L_12fdb4:;
  /* 12fdb4: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 12fdb8: mov w10, #0x25 */
  ARC_W_W(c, 10, UINT64_C(37));
  /* 12fdbc: str x10, [x9, x8] */
  arc_st64((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_X_R(c, 10));
  /* 12fdc0: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 12fdc4: tbnz w9, #0, #0x12fdd8 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_12fdd8;
  /* 12fdc8: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* 12fdcc: b.ne #0x13029c */
  if (ARC_COND(c, 1)) goto L_13029c;
  /* 12fdd0: mov w26, #4 */
  ARC_W_W(c, 26, UINT64_C(4));
  /* 12fdd4: b #0x12fdec */
  goto L_12fdec;
L_12fdd8:;
  /* 12fdd8: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12fddc: and x9, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 12fde0: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 12fde4: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* 12fde8: b.ne #0x12fe10 */
  if (ARC_COND(c, 1)) goto L_12fe10;
L_12fdec:;
  /* 12fdec: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12fdf0: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 12fdf4: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 12fdf8: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 12fdfc: mov x4, x26 */
  ARC_X_W(c, 4, ARC_X_R(c, 26));
  /* 12fe00: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 12fe04: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 12fe08: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1244684));
  fn1_142da0(c);
  /* 12fe0c: mov x8, x26 */
  ARC_X_W(c, 8, ARC_X_R(c, 26));
L_12fe10:;
  /* 12fe10: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 12fe14: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 12fe18: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* 12fe1c: b #0x1302ac */
  goto L_1302ac;
L_12fe20:;
  /* 12fe20: lsr x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 12fe24: add w9, w9, #2 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(2)));
  /* 12fe28: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* 12fe2c: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
L_12fe30:;
  /* 12fe30: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 12fe34: mov w10, #0x25 */
  ARC_W_W(c, 10, UINT64_C(37));
  /* 12fe38: str x10, [x9, x8] */
  arc_st64((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_X_R(c, 10));
  /* 12fe3c: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 12fe40: tbnz w9, #0, #0x12fe54 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_12fe54;
  /* 12fe44: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* 12fe48: b.ne #0x1302bc */
  if (ARC_COND(c, 1)) goto L_1302bc;
  /* 12fe4c: mov w26, #4 */
  ARC_W_W(c, 26, UINT64_C(4));
  /* 12fe50: b #0x12fe68 */
  goto L_12fe68;
L_12fe54:;
  /* 12fe54: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12fe58: and x9, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 12fe5c: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 12fe60: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* 12fe64: b.ne #0x12fe8c */
  if (ARC_COND(c, 1)) goto L_12fe8c;
L_12fe68:;
  /* 12fe68: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12fe6c: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 12fe70: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 12fe74: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 12fe78: mov x4, x26 */
  ARC_X_W(c, 4, ARC_X_R(c, 26));
  /* 12fe7c: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 12fe80: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 12fe84: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1244808));
  fn1_142da0(c);
  /* 12fe88: mov x8, x26 */
  ARC_X_W(c, 8, ARC_X_R(c, 26));
L_12fe8c:;
  /* 12fe8c: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 12fe90: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 12fe94: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* 12fe98: b #0x1302cc */
  goto L_1302cc;
L_12fe9c:;
  /* 12fe9c: lsr x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 12fea0: add w9, w9, #2 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(2)));
  /* 12fea4: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* 12fea8: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
L_12feac:;
  /* 12feac: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 12feb0: mov w10, #0x25 */
  ARC_W_W(c, 10, UINT64_C(37));
  /* 12feb4: str x10, [x9, x8] */
  arc_st64((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_X_R(c, 10));
  /* 12feb8: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 12febc: tbnz w9, #0, #0x12fed0 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_12fed0;
  /* 12fec0: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* 12fec4: b.ne #0x1302dc */
  if (ARC_COND(c, 1)) goto L_1302dc;
  /* 12fec8: mov w26, #4 */
  ARC_W_W(c, 26, UINT64_C(4));
  /* 12fecc: b #0x12fee4 */
  goto L_12fee4;
L_12fed0:;
  /* 12fed0: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12fed4: and x9, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 12fed8: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 12fedc: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* 12fee0: b.ne #0x12ff08 */
  if (ARC_COND(c, 1)) goto L_12ff08;
L_12fee4:;
  /* 12fee4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12fee8: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 12feec: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 12fef0: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 12fef4: mov x4, x26 */
  ARC_X_W(c, 4, ARC_X_R(c, 26));
  /* 12fef8: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 12fefc: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 12ff00: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1244932));
  fn1_142da0(c);
  /* 12ff04: mov x8, x26 */
  ARC_X_W(c, 8, ARC_X_R(c, 26));
L_12ff08:;
  /* 12ff08: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 12ff0c: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 12ff10: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* 12ff14: b #0x1302ec */
  goto L_1302ec;
L_12ff18:;
  /* 12ff18: lsr x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 12ff1c: add w9, w9, #2 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(2)));
  /* 12ff20: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* 12ff24: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
L_12ff28:;
  /* 12ff28: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 12ff2c: mov w10, #0x25 */
  ARC_W_W(c, 10, UINT64_C(37));
  /* 12ff30: str x10, [x9, x8] */
  arc_st64((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_X_R(c, 10));
  /* 12ff34: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 12ff38: tbnz w9, #0, #0x12ff4c */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_12ff4c;
  /* 12ff3c: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* 12ff40: b.ne #0x1302fc */
  if (ARC_COND(c, 1)) goto L_1302fc;
  /* 12ff44: mov w26, #4 */
  ARC_W_W(c, 26, UINT64_C(4));
  /* 12ff48: b #0x12ff60 */
  goto L_12ff60;
L_12ff4c:;
  /* 12ff4c: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12ff50: and x9, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 12ff54: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 12ff58: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* 12ff5c: b.ne #0x12ff84 */
  if (ARC_COND(c, 1)) goto L_12ff84;
L_12ff60:;
  /* 12ff60: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12ff64: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 12ff68: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 12ff6c: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 12ff70: mov x4, x26 */
  ARC_X_W(c, 4, ARC_X_R(c, 26));
  /* 12ff74: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 12ff78: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 12ff7c: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1245056));
  fn1_142da0(c);
  /* 12ff80: mov x8, x26 */
  ARC_X_W(c, 8, ARC_X_R(c, 26));
L_12ff84:;
  /* 12ff84: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 12ff88: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 12ff8c: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* 12ff90: b #0x13030c */
  goto L_13030c;
L_12ff94:;
  /* 12ff94: lsr x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 12ff98: add w9, w9, #2 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(2)));
  /* 12ff9c: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* 12ffa0: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
L_12ffa4:;
  /* 12ffa4: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 12ffa8: mov w10, #0x25 */
  ARC_W_W(c, 10, UINT64_C(37));
  /* 12ffac: str x10, [x9, x8] */
  arc_st64((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_X_R(c, 10));
  /* 12ffb0: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 12ffb4: tbnz w9, #0, #0x12ffc8 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_12ffc8;
  /* 12ffb8: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* 12ffbc: b.ne #0x13031c */
  if (ARC_COND(c, 1)) goto L_13031c;
  /* 12ffc0: mov w26, #4 */
  ARC_W_W(c, 26, UINT64_C(4));
  /* 12ffc4: b #0x12ffdc */
  goto L_12ffdc;
L_12ffc8:;
  /* 12ffc8: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12ffcc: and x9, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 12ffd0: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 12ffd4: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* 12ffd8: b.ne #0x130000 */
  if (ARC_COND(c, 1)) goto L_130000;
L_12ffdc:;
  /* 12ffdc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12ffe0: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 12ffe4: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 12ffe8: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 12ffec: mov x4, x26 */
  ARC_X_W(c, 4, ARC_X_R(c, 26));
  /* 12fff0: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 12fff4: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 12fff8: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1245180));
  fn1_142da0(c);
  /* 12fffc: mov x8, x26 */
  ARC_X_W(c, 8, ARC_X_R(c, 26));
L_130000:;
  /* 130000: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 130004: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 130008: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* 13000c: b #0x13032c */
  goto L_13032c;
L_130010:;
  /* 130010: lsr x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 130014: add w9, w9, #2 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(2)));
  /* 130018: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* 13001c: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
L_130020:;
  /* 130020: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 130024: mov w10, #0x25 */
  ARC_W_W(c, 10, UINT64_C(37));
  /* 130028: str x10, [x9, x8] */
  arc_st64((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_X_R(c, 10));
  /* 13002c: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 130030: tbnz w9, #0, #0x130044 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_130044;
  /* 130034: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* 130038: b.ne #0x13033c */
  if (ARC_COND(c, 1)) goto L_13033c;
  /* 13003c: mov w26, #4 */
  ARC_W_W(c, 26, UINT64_C(4));
  /* 130040: b #0x130058 */
  goto L_130058;
L_130044:;
  /* 130044: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 130048: and x9, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 13004c: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 130050: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* 130054: b.ne #0x13007c */
  if (ARC_COND(c, 1)) goto L_13007c;
L_130058:;
  /* 130058: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13005c: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 130060: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 130064: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 130068: mov x4, x26 */
  ARC_X_W(c, 4, ARC_X_R(c, 26));
  /* 13006c: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 130070: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 130074: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1245304));
  fn1_142da0(c);
  /* 130078: mov x8, x26 */
  ARC_X_W(c, 8, ARC_X_R(c, 26));
L_13007c:;
  /* 13007c: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 130080: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 130084: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* 130088: b #0x13034c */
  goto L_13034c;
L_13008c:;
  /* 13008c: lsr x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 130090: add w9, w9, #2 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(2)));
  /* 130094: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* 130098: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
L_13009c:;
  /* 13009c: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 1300a0: mov w10, #0x25 */
  ARC_W_W(c, 10, UINT64_C(37));
  /* 1300a4: str x10, [x9, x8] */
  arc_st64((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_X_R(c, 10));
  /* 1300a8: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 1300ac: tbnz w9, #0, #0x1300c0 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_1300c0;
  /* 1300b0: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* 1300b4: b.ne #0x13035c */
  if (ARC_COND(c, 1)) goto L_13035c;
  /* 1300b8: mov w26, #4 */
  ARC_W_W(c, 26, UINT64_C(4));
  /* 1300bc: b #0x1300d4 */
  goto L_1300d4;
L_1300c0:;
  /* 1300c0: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 1300c4: and x9, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 1300c8: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 1300cc: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* 1300d0: b.ne #0x1300f8 */
  if (ARC_COND(c, 1)) goto L_1300f8;
L_1300d4:;
  /* 1300d4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1300d8: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 1300dc: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 1300e0: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 1300e4: mov x4, x26 */
  ARC_X_W(c, 4, ARC_X_R(c, 26));
  /* 1300e8: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 1300ec: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 1300f0: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1245428));
  fn1_142da0(c);
  /* 1300f4: mov x8, x26 */
  ARC_X_W(c, 8, ARC_X_R(c, 26));
L_1300f8:;
  /* 1300f8: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 1300fc: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 130100: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* 130104: b #0x13036c */
  goto L_13036c;
L_130108:;
  /* 130108: lsr x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 13010c: add w9, w9, #2 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(2)));
  /* 130110: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* 130114: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
L_130118:;
  /* 130118: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 13011c: mov w10, #0x25 */
  ARC_W_W(c, 10, UINT64_C(37));
  /* 130120: str x10, [x9, x8] */
  arc_st64((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_X_R(c, 10));
  /* 130124: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 130128: tbnz w9, #0, #0x13013c */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_13013c;
  /* 13012c: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* 130130: b.ne #0x13037c */
  if (ARC_COND(c, 1)) goto L_13037c;
  /* 130134: mov w26, #4 */
  ARC_W_W(c, 26, UINT64_C(4));
  /* 130138: b #0x130150 */
  goto L_130150;
L_13013c:;
  /* 13013c: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 130140: and x9, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 130144: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 130148: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* 13014c: b.ne #0x130174 */
  if (ARC_COND(c, 1)) goto L_130174;
L_130150:;
  /* 130150: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 130154: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 130158: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 13015c: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 130160: mov x4, x26 */
  ARC_X_W(c, 4, ARC_X_R(c, 26));
  /* 130164: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 130168: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 13016c: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1245552));
  fn1_142da0(c);
  /* 130170: mov x8, x26 */
  ARC_X_W(c, 8, ARC_X_R(c, 26));
L_130174:;
  /* 130174: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 130178: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 13017c: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* 130180: b #0x13038c */
  goto L_13038c;
L_130184:;
  /* 130184: lsr x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 130188: add w9, w9, #2 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(2)));
  /* 13018c: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* 130190: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
L_130194:;
  /* 130194: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 130198: mov w10, #0x25 */
  ARC_W_W(c, 10, UINT64_C(37));
  /* 13019c: str x10, [x9, x8] */
  arc_st64((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_X_R(c, 10));
  /* 1301a0: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 1301a4: tbnz w9, #0, #0x1301b8 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_1301b8;
  /* 1301a8: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* 1301ac: b.ne #0x13039c */
  if (ARC_COND(c, 1)) goto L_13039c;
  /* 1301b0: mov w26, #4 */
  ARC_W_W(c, 26, UINT64_C(4));
  /* 1301b4: b #0x1301cc */
  goto L_1301cc;
L_1301b8:;
  /* 1301b8: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 1301bc: and x9, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 1301c0: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 1301c4: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* 1301c8: b.ne #0x1301f0 */
  if (ARC_COND(c, 1)) goto L_1301f0;
L_1301cc:;
  /* 1301cc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1301d0: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 1301d4: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 1301d8: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 1301dc: mov x4, x26 */
  ARC_X_W(c, 4, ARC_X_R(c, 26));
  /* 1301e0: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 1301e4: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 1301e8: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1245676));
  fn1_142da0(c);
  /* 1301ec: mov x8, x26 */
  ARC_X_W(c, 8, ARC_X_R(c, 26));
L_1301f0:;
  /* 1301f0: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 1301f4: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 1301f8: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* 1301fc: b #0x1303ac */
  goto L_1303ac;
L_130200:;
  /* 130200: lsr x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 130204: add w9, w9, #2 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(2)));
  /* 130208: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* 13020c: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
L_130210:;
  /* 130210: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 130214: mov w10, #0x25 */
  ARC_W_W(c, 10, UINT64_C(37));
  /* 130218: str x10, [x9, x8] */
  arc_st64((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_X_R(c, 10));
  /* 13021c: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 130220: tbnz w9, #0, #0x130234 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_130234;
  /* 130224: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* 130228: b.ne #0x1303bc */
  if (ARC_COND(c, 1)) goto L_1303bc;
  /* 13022c: mov w26, #4 */
  ARC_W_W(c, 26, UINT64_C(4));
  /* 130230: b #0x130248 */
  goto L_130248;
L_130234:;
  /* 130234: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 130238: and x9, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 13023c: sub x26, x9, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 130240: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* 130244: b.ne #0x13026c */
  if (ARC_COND(c, 1)) goto L_13026c;
L_130248:;
  /* 130248: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13024c: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 130250: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 130254: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 130258: mov x4, x26 */
  ARC_X_W(c, 4, ARC_X_R(c, 26));
  /* 13025c: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 130260: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 130264: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1245800));
  fn1_142da0(c);
  /* 130268: mov x8, x26 */
  ARC_X_W(c, 8, ARC_X_R(c, 26));
L_13026c:;
  /* 13026c: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 130270: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 130274: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* 130278: b #0x1303cc */
  goto L_1303cc;
L_13027c:;
  /* 13027c: lsr x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 130280: add w9, w9, #2 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(2)));
  /* 130284: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* 130288: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
L_13028c:;
  /* 13028c: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 130290: mov w10, #0x77 */
  ARC_W_W(c, 10, UINT64_C(119));
  /* 130294: str x10, [x9, x8] */
  arc_st64((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_X_R(c, 10));
  /* 130298: b #0x12ef00 */
  goto L_12ef00;
L_13029c:;
  /* 13029c: lsr x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 1302a0: add w9, w9, #2 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(2)));
  /* 1302a4: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* 1302a8: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
L_1302ac:;
  /* 1302ac: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 1302b0: mov w10, #0x75 */
  ARC_W_W(c, 10, UINT64_C(117));
  /* 1302b4: str x10, [x9, x8] */
  arc_st64((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_X_R(c, 10));
  /* 1302b8: b #0x12ef00 */
  goto L_12ef00;
L_1302bc:;
  /* 1302bc: lsr x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 1302c0: add w9, w9, #2 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(2)));
  /* 1302c4: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* 1302c8: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
L_1302cc:;
  /* 1302cc: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 1302d0: mov w10, #0x6d */
  ARC_W_W(c, 10, UINT64_C(109));
  /* 1302d4: str x10, [x9, x8] */
  arc_st64((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_X_R(c, 10));
  /* 1302d8: b #0x12ef00 */
  goto L_12ef00;
L_1302dc:;
  /* 1302dc: lsr x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 1302e0: add w9, w9, #2 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(2)));
  /* 1302e4: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* 1302e8: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
L_1302ec:;
  /* 1302ec: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 1302f0: mov w10, #0x4d */
  ARC_W_W(c, 10, UINT64_C(77));
  /* 1302f4: str x10, [x9, x8] */
  arc_st64((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_X_R(c, 10));
  /* 1302f8: b #0x12ef00 */
  goto L_12ef00;
L_1302fc:;
  /* 1302fc: lsr x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 130300: add w9, w9, #2 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(2)));
  /* 130304: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* 130308: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
L_13030c:;
  /* 13030c: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 130310: mov w10, #0x6a */
  ARC_W_W(c, 10, UINT64_C(106));
  /* 130314: str x10, [x9, x8] */
  arc_st64((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_X_R(c, 10));
  /* 130318: b #0x12ef00 */
  goto L_12ef00;
L_13031c:;
  /* 13031c: lsr x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 130320: add w9, w9, #2 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(2)));
  /* 130324: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* 130328: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
L_13032c:;
  /* 13032c: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 130330: mov w10, #0x48 */
  ARC_W_W(c, 10, UINT64_C(72));
  /* 130334: str x10, [x9, x8] */
  arc_st64((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_X_R(c, 10));
  /* 130338: b #0x12ef00 */
  goto L_12ef00;
L_13033c:;
  /* 13033c: lsr x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 130340: add w9, w9, #2 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(2)));
  /* 130344: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* 130348: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
L_13034c:;
  /* 13034c: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 130350: mov w10, #0x49 */
  ARC_W_W(c, 10, UINT64_C(73));
  /* 130354: str x10, [x9, x8] */
  arc_st64((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_X_R(c, 10));
  /* 130358: b #0x12ef00 */
  goto L_12ef00;
L_13035c:;
  /* 13035c: lsr x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 130360: add w9, w9, #2 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(2)));
  /* 130364: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* 130368: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
L_13036c:;
  /* 13036c: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 130370: mov w10, #0x53 */
  ARC_W_W(c, 10, UINT64_C(83));
  /* 130374: str x10, [x9, x8] */
  arc_st64((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_X_R(c, 10));
  /* 130378: b #0x12ef00 */
  goto L_12ef00;
L_13037c:;
  /* 13037c: lsr x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 130380: add w9, w9, #2 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(2)));
  /* 130384: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* 130388: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
L_13038c:;
  /* 13038c: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 130390: mov w10, #0x59 */
  ARC_W_W(c, 10, UINT64_C(89));
  /* 130394: str x10, [x9, x8] */
  arc_st64((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_X_R(c, 10));
  /* 130398: b #0x12ef00 */
  goto L_12ef00;
L_13039c:;
  /* 13039c: lsr x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 1303a0: add w9, w9, #2 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(2)));
  /* 1303a4: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* 1303a8: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
L_1303ac:;
  /* 1303ac: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 1303b0: mov w10, #0x64 */
  ARC_W_W(c, 10, UINT64_C(100));
  /* 1303b4: str x10, [x9, x8] */
  arc_st64((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_X_R(c, 10));
  /* 1303b8: b #0x12ef00 */
  goto L_12ef00;
L_1303bc:;
  /* 1303bc: lsr x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 1303c0: add w9, w9, #2 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(2)));
  /* 1303c4: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* 1303c8: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
L_1303cc:;
  /* 1303cc: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 1303d0: mov w10, #0x79 */
  ARC_W_W(c, 10, UINT64_C(121));
  /* 1303d4: str x10, [x9, x8] */
  arc_st64((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_X_R(c, 10));
  /* 1303d8: b #0x12ef00 */
  goto L_12ef00;
L_1303dc:;
  /* 1303dc: add sp, sp, #0x280 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(640)));
  /* 1303e0: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1303e4: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1303e8: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1303ec: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 1303f0: ldp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 1303f4: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1303f8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1303fc: ret  */
  return;
L_130400:;
  /* 130400: adrp x0, #0x4f000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(323584)));
  /* 130404: add x0, x0, #0x7a1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1953)));
  /* 130408: bl #0x142c98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1246220));
  fn1_142c98(c);
  /* 13040c: b #0x130434 */
  goto L_130434;
  /* 130410: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1246228));
  fn1_a1454(c);
  /* 130414: b #0x130434 */
  goto L_130434;
  /* 130418: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 13041c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 130420: bl #0x135428 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1246244));
  fn1_135428(c);
  /* 130424: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 130428: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1246252));
  fn1_9cc20(c);
  /* 13042c: b #0x130434 */
  goto L_130434;
  /* 130430: b #0x130434 */
  goto L_130434;
L_130434:;
  /* 130434: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 130438: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13043c: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1246272));
  fn1_142d58(c);
  /* 130440: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 130444: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1246280));
  fn1_9cc20(c);
}

void fn1_134b3c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192380));
  /* 134b3c: bti c */
  /* bti: no architectural effect here */
  /* 134b40: add x0, x0, #0x3b0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(944)));
  /* 134b44: ret  */
  return;
}

void fn1_136480(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039198848));
  /* 136480: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 136484: sub sp, sp, #0x120 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(288)));
  /* 136488: stp x29, x30, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13648c: str x28, [sp, #0x100] */
  arc_st64(((c)->sp + INT64_C(256)), ARC_X_R(c, 28));
  /* 136490: stp x20, x19, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 136494: add x29, sp, #0xf0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(240)));
  /* 136498: mov x8, #-0x28 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551576));
  /* 13649c: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* 1364a0: sub x10, x29, #0x68 */
  ARC_X_W(c, 10, (ARC_X_R(c, 29) - UINT64_C(104)));
  /* 1364a4: movk x8, #0xff80, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(280925220896768)));
  /* 1364a8: add x9, x9, #0x80 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(128)));
  /* 1364ac: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1364b0: stp x9, x8, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 1364b4: add x8, x10, #0x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + UINT64_C(40)));
  /* 1364b8: add x9, x29, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) + UINT64_C(48)));
  /* 1364bc: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 1364c0: stp x3, x4, [x29, #-0x68] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-104));
    arc_st64(_pa, ARC_X_R(c, 3));
    arc_st64(_pa + 8, ARC_X_R(c, 4));
  }
  /* 1364c4: stp x5, x6, [x29, #-0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-88));
    arc_st64(_pa, ARC_X_R(c, 5));
    arc_st64(_pa + 8, ARC_X_R(c, 6));
  }
  /* 1364c8: stur x7, [x29, #-0x48] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-72)), ARC_X_R(c, 7));
  /* 1364cc: stp q0, q1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 1364d0: stp q2, q3, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, (c)->q[2].u64[0]);
    arc_st64(_pa + 8, (c)->q[2].u64[1]);
    arc_st64((_pa + 16), (c)->q[3].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[3].u64[1]);
  }
  /* 1364d4: stp q4, q5, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, (c)->q[4].u64[0]);
    arc_st64(_pa + 8, (c)->q[4].u64[1]);
    arc_st64((_pa + 16), (c)->q[5].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[5].u64[1]);
  }
  /* 1364d8: stp q6, q7, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, (c)->q[6].u64[0]);
    arc_st64(_pa + 8, (c)->q[6].u64[1]);
    arc_st64((_pa + 16), (c)->q[7].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[7].u64[1]);
  }
  /* 1364dc: stp x9, x8, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 1364e0: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1271012));
  fn1_1443c0(c);
  /* 1364e4: ldp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 1364e8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1364ec: nop  */
  /* nop: no architectural effect here */
  /* 1364f0: adr x1, #0x50087 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(327815)));
  /* 1364f4: sub x2, x29, #0x40 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 1364f8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1364fc: stp q0, q1, [x29, #-0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-64));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 136500: bl #0x144528 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1271044));
  fn1_144528(c);
  /* 136504: mov w19, w0 */
  ARC_W_W(c, 19, ARC_W_R(c, 0));
  /* 136508: cbz x20, #0x136514 */
  if ((ARC_X_R(c, 20)) == 0) goto L_136514;
  /* 13650c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 136510: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1271060));
  fn1_1443c0(c);
L_136514:;
  /* 136514: mov w0, w19 */
  ARC_W_W(c, 0, ARC_W_R(c, 19));
  /* 136518: ldp x20, x19, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13651c: ldr x28, [sp, #0x100] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(256))));
  /* 136520: ldp x29, x30, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 136524: add sp, sp, #0x120 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(288)));
  /* 136528: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13652c: ret  */
  return;
  /* 136530: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1271092));
  fn1_a1454(c);
}

void fn1_13937c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039210876));
  /* 13937c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 139380: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 139384: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 139388: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 13938c: ldrb w8, [x0, #0x48] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(72))));
  /* 139390: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 139394: tbnz w8, #0, #0x1393b8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1393b8;
  /* 139398: ldrb w8, [x19, #0x30] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(48))));
  /* 13939c: tbnz w8, #0, #0x1393d0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1393d0;
L_1393a0:;
  /* 1393a0: ldrb w8, [x19, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(24))));
  /* 1393a4: tbnz w8, #0, #0x1393e8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1393e8;
L_1393a8:;
  /* 1393a8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1393ac: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1393b0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1393b4: ret  */
  return;
L_1393b8:;
  /* 1393b8: ldr x8, [x19, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(72))));
  /* 1393bc: ldr x0, [x19, #0x58] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(88))));
  /* 1393c0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1393c4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1283016));
  fn1_142608(c);
  /* 1393c8: ldrb w8, [x19, #0x30] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(48))));
  /* 1393cc: tbz w8, #0, #0x1393a0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1393a0;
L_1393d0:;
  /* 1393d0: ldr x8, [x19, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(48))));
  /* 1393d4: ldr x0, [x19, #0x40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* 1393d8: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1393dc: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1283040));
  fn1_142608(c);
  /* 1393e0: ldrb w8, [x19, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(24))));
  /* 1393e4: tbz w8, #0, #0x1393a8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1393a8;
L_1393e8:;
  /* 1393e8: ldr x8, [x19, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* 1393ec: ldr x0, [x19, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(40))));
  /* 1393f0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1393f4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1393f8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1393fc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 139400: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_13f3f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039235568));
  /* 13f3f0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13f3f4: sub sp, sp, #0x1b0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(432)));
  /* 13f3f8: stp x29, x30, [sp, #0x180] */
  { const uint64_t _pa = ((c)->sp + INT64_C(384));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13f3fc: stp x28, x21, [sp, #0x190] */
  { const uint64_t _pa = ((c)->sp + INT64_C(400));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13f400: stp x20, x19, [sp, #0x1a0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(416));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13f404: add x29, sp, #0x180 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(384)));
  /* 13f408: adrp x8, #0x50000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(327680)));
  /* 13f40c: add x8, x8, #0x125 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(293)));
  /* 13f410: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 13f414: stp x8, x2, [x29, #-0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-48));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 13f418: add x9, sp, #0x30 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(48)));
  /* 13f41c: nop  */
  /* nop: no architectural effect here */
  /* 13f420: adr x20, #0x156d40 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13f424: nop  */
  /* nop: no architectural effect here */
  /* 13f428: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13f42c: stp x0, x1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 13f430: cbz x2, #0x13f448 */
  if ((ARC_X_R(c, 2)) == 0) goto L_13f448;
  /* 13f434: str wzr, [x2] */
  arc_st32(ARC_X_R(c, 2), ARC_W_R(c, 31));
  /* 13f438: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13f43c: tbz w8, #0, #0x13f69c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13f69c;
L_13f440:;
  /* 13f440: str x20, [x2, #8] */
  arc_st64((ARC_X_R(c, 2) + INT64_C(8)), ARC_X_R(c, 20));
  /* 13f444: b #0x13f450 */
  goto L_13f450;
L_13f448:;
  /* 13f448: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13f44c: tbz w8, #0, #0x13f6e4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13f6e4;
L_13f450:;
  /* 13f450: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 13f454: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* 13f458: stur wzr, [x29, #-0x40] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-64)), ARC_W_R(c, 31));
  /* 13f45c: stur x20, [x29, #-0x38] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-56)), ARC_X_R(c, 20));
  /* 13f460: lsr x11, x8, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 13f464: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 13f468: stur wzr, [x29, #-0x50] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-80)), ARC_W_R(c, 31));
  /* 13f46c: stur x20, [x29, #-0x48] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-72)), ARC_X_R(c, 20));
  /* 13f470: stp q0, q0, [x9, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(96));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 13f474: stp q0, q0, [x9, #0x80] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(128));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 13f478: stp q0, q0, [x9, #0xa0] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(160));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 13f47c: stp q0, q0, [x9, #0xc0] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(192));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 13f480: stp q0, q0, [x9, #0xe0] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(224));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 13f484: ldp x10, x9, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 13f488: stp q0, q0, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 13f48c: stp q0, q0, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 13f490: csinc x1, x9, x0, ne */
  ARC_X_W(c, 1, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 0)) + 1)));
  /* 13f494: stp q0, q0, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 13f498: csel x8, x11, x10, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 13f49c: stp xzr, xzr, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13f4a0: str xzr, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 31));
  /* 13f4a4: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 13f4a8: add x2, x1, x8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 1) + ARC_X_R(c, 8)));
  /* 13f4ac: add x21, sp, #0x10 */
  ARC_X_W(c, 21, ((c)->sp + UINT64_C(16)));
  /* 13f4b0: bl #0xda784 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1307828));
  fn1_da784(c);
  /* 13f4b4: ldrb w8, [sp, #0x10] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(16))));
  /* 13f4b8: ldr x9, [sp, #0x20] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(32))));
  /* 13f4bc: add x1, sp, #0xb0 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(176)));
  /* 13f4c0: stur wzr, [x29, #-0x10] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-16)), ARC_W_R(c, 31));
  /* 13f4c4: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 13f4c8: stur x20, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 20));
  /* 13f4cc: csinc x0, x9, x21, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 21)) + 1)));
  /* 13f4d0: bl #0x144588 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1307860));
  fn1_144588(c);
  /* 13f4d4: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 13f4d8: b.ne #0x13f500 */
  if (ARC_COND(c, 1)) goto L_13f500;
  /* 13f4dc: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1307872));
  fn1_142a58(c);
  /* 13f4e0: nop  */
  /* nop: no architectural effect here */
  /* 13f4e4: adr x9, #0x159208 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13f4e8: ldr w8, [x0] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 0)));
  /* 13f4ec: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 13f4f0: tbz w9, #0, #0x13f720 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_13f720;
L_13f4f4:;
  /* 13f4f4: nop  */
  /* nop: no architectural effect here */
  /* 13f4f8: adr x9, #0x156d38 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13f4fc: stp x8, x9, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
L_13f500:;
  /* 13f500: add x8, sp, #0x28 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(40)));
  /* 13f504: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 13f508: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 13f50c: add x2, sp, #0xb0 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(176)));
  /* 13f510: sub x3, x29, #0x40 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 13f514: bl #0x1388e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1307928));
  fn1_1388e8(c);
  /* 13f518: ldrb w8, [sp, #0x10] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(16))));
  /* 13f51c: tbz w8, #0, #0x13f530 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13f530;
  /* 13f520: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* 13f524: ldr x0, [sp, #0x20] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(32))));
  /* 13f528: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13f52c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1307952));
  fn1_142608(c);
L_13f530:;
  /* 13f530: ldrb w8, [sp, #0x28] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(40))));
  /* 13f534: cmp w8, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(255));
  /* 13f538: b.eq #0x13f540 */
  if (ARC_COND(c, 0)) goto L_13f540;
  /* 13f53c: cbnz w8, #0x13f570 */
  if ((ARC_W_R(c, 8)) != 0) goto L_13f570;
L_13f540:;
  /* 13f540: nop  */
  /* nop: no architectural effect here */
  /* 13f544: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13f548: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13f54c: tbz w8, #0, #0x13f67c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13f67c;
L_13f550:;
  /* 13f550: mov w8, #0x5f */
  ARC_W_W(c, 8, UINT64_C(95));
  /* 13f554: nop  */
  /* nop: no architectural effect here */
  /* 13f558: adr x9, #0x156d38 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13f55c: stp x8, x9, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 13f560: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13f564: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 13f568: bl #0x13d8bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1308012));
  fn1_13d8bc(c);
  /* 13f56c: b #0x13f648 */
  goto L_13f648;
L_13f570:;
  /* 13f570: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 13f574: ldp x10, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 13f578: stp xzr, xzr, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13f57c: lsr x11, x8, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 13f580: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 13f584: str xzr, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 31));
  /* 13f588: csinc x1, x9, x19, ne */
  ARC_X_W(c, 1, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* 13f58c: csel x8, x11, x10, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 13f590: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 13f594: add x2, x1, x8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 1) + ARC_X_R(c, 8)));
  /* 13f598: add x19, sp, #0x10 */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(16)));
  /* 13f59c: bl #0xda784 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1308064));
  fn1_da784(c);
  /* 13f5a0: ldrb w8, [sp, #0x10] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(16))));
  /* 13f5a4: ldr x9, [sp, #0x20] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(32))));
  /* 13f5a8: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* 13f5ac: stur wzr, [x29, #-0x10] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-16)), ARC_W_R(c, 31));
  /* 13f5b0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 13f5b4: stur x20, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 20));
  /* 13f5b8: csinc x0, x9, x19, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* 13f5bc: bl #0x144588 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1308096));
  fn1_144588(c);
  /* 13f5c0: nop  */
  /* nop: no architectural effect here */
  /* 13f5c4: adr x20, #0x159208 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13f5c8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 13f5cc: nop  */
  /* nop: no architectural effect here */
  /* 13f5d0: adr x19, #0x156d38 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13f5d4: b.ne #0x13f5ec */
  if (ARC_COND(c, 1)) goto L_13f5ec;
  /* 13f5d8: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1308124));
  fn1_142a58(c);
  /* 13f5dc: ldr w8, [x0] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 0)));
  /* 13f5e0: ldarb w9, [x20] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 20)));
  /* 13f5e4: tbz w9, #0, #0x13f76c */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_13f76c;
L_13f5e8:;
  /* 13f5e8: stp x8, x19, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
L_13f5ec:;
  /* 13f5ec: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 13f5f0: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 13f5f4: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 13f5f8: add x2, sp, #0x30 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(48)));
  /* 13f5fc: sub x3, x29, #0x50 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 13f600: bl #0x1388e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1308164));
  fn1_1388e8(c);
  /* 13f604: ldrb w8, [sp, #0x10] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(16))));
  /* 13f608: tbz w8, #0, #0x13f61c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13f61c;
  /* 13f60c: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* 13f610: ldr x0, [sp, #0x20] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(32))));
  /* 13f614: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13f618: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1308188));
  fn1_142608(c);
L_13f61c:;
  /* 13f61c: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 13f620: cmp w8, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(255));
  /* 13f624: b.eq #0x13f62c */
  if (ARC_COND(c, 0)) goto L_13f62c;
  /* 13f628: cbnz w8, #0x13f664 */
  if ((ARC_W_R(c, 8)) != 0) goto L_13f664;
L_13f62c:;
  /* 13f62c: ldarb w8, [x20] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 20)));
  /* 13f630: tbz w8, #0, #0x13f74c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13f74c;
L_13f634:;
  /* 13f634: mov w8, #0x5f */
  ARC_W_W(c, 8, UINT64_C(95));
  /* 13f638: stp x8, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13f63c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13f640: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 13f644: bl #0x13d8bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1308232));
  fn1_13d8bc(c);
L_13f648:;
  /* 13f648: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
L_13f64c:;
  /* 13f64c: ldp x20, x19, [sp, #0x1a0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(416));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13f650: ldp x28, x21, [sp, #0x190] */
  { const uint64_t _pa = ((c)->sp + INT64_C(400));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 13f654: ldp x29, x30, [sp, #0x180] */
  { const uint64_t _pa = ((c)->sp + INT64_C(384));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13f658: add sp, sp, #0x1b0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(432)));
  /* 13f65c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13f660: ret  */
  return;
L_13f664:;
  /* 13f664: ldp x8, x11, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* 13f668: ldp x9, x10, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 13f66c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 13f670: ccmp x10, x11, #0, eq */
  if (ARC_COND(c, 0)) { (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* 13f674: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* 13f678: b #0x13f64c */
  goto L_13f64c;
L_13f67c:;
  /* 13f67c: nop  */
  /* nop: no architectural effect here */
  /* 13f680: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13f684: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1308296));
  fn1_1424b8(c);
  /* 13f688: cbz w0, #0x13f550 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13f550;
  /* 13f68c: nop  */
  /* nop: no architectural effect here */
  /* 13f690: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13f694: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1308312));
  fn1_1424d0(c);
  /* 13f698: b #0x13f550 */
  goto L_13f550;
L_13f69c:;
  /* 13f69c: nop  */
  /* nop: no architectural effect here */
  /* 13f6a0: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13f6a4: str x0, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 0));
  /* 13f6a8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 13f6ac: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 13f6b0: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1308340));
  fn1_1424b8(c);
  /* 13f6b4: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 13f6b8: ldr x0, [sp] */
  ARC_X_W(c, 0, arc_ld64((c)->sp));
  /* 13f6bc: add x9, sp, #0x30 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(48)));
  /* 13f6c0: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 13f6c4: cbz w8, #0x13f440 */
  if ((ARC_W_R(c, 8)) == 0) goto L_13f440;
  /* 13f6c8: nop  */
  /* nop: no architectural effect here */
  /* 13f6cc: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13f6d0: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1308372));
  fn1_1424d0(c);
  /* 13f6d4: ldr x0, [sp] */
  ARC_X_W(c, 0, arc_ld64((c)->sp));
  /* 13f6d8: add x9, sp, #0x30 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(48)));
  /* 13f6dc: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 13f6e0: b #0x13f440 */
  goto L_13f440;
L_13f6e4:;
  /* 13f6e4: nop  */
  /* nop: no architectural effect here */
  /* 13f6e8: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13f6ec: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 13f6f0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 13f6f4: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1308408));
  fn1_1424b8(c);
  /* 13f6f8: add x9, sp, #0x30 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(48)));
  /* 13f6fc: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 13f700: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 13f704: cbz w8, #0x13f450 */
  if ((ARC_W_R(c, 8)) == 0) goto L_13f450;
  /* 13f708: nop  */
  /* nop: no architectural effect here */
  /* 13f70c: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13f710: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1308436));
  fn1_1424d0(c);
  /* 13f714: add x9, sp, #0x30 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(48)));
  /* 13f718: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 13f71c: b #0x13f450 */
  goto L_13f450;
L_13f720:;
  /* 13f720: nop  */
  /* nop: no architectural effect here */
  /* 13f724: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13f728: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 13f72c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1308464));
  fn1_1424b8(c);
  /* 13f730: mov x8, x21 */
  ARC_X_W(c, 8, ARC_X_R(c, 21));
  /* 13f734: cbz w0, #0x13f4f4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13f4f4;
  /* 13f738: nop  */
  /* nop: no architectural effect here */
  /* 13f73c: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13f740: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1308484));
  fn1_1424d0(c);
  /* 13f744: mov x8, x21 */
  ARC_X_W(c, 8, ARC_X_R(c, 21));
  /* 13f748: b #0x13f4f4 */
  goto L_13f4f4;
L_13f74c:;
  /* 13f74c: nop  */
  /* nop: no architectural effect here */
  /* 13f750: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13f754: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1308504));
  fn1_1424b8(c);
  /* 13f758: cbz w0, #0x13f634 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13f634;
  /* 13f75c: nop  */
  /* nop: no architectural effect here */
  /* 13f760: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13f764: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1308520));
  fn1_1424d0(c);
  /* 13f768: b #0x13f634 */
  goto L_13f634;
L_13f76c:;
  /* 13f76c: nop  */
  /* nop: no architectural effect here */
  /* 13f770: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13f774: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 13f778: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1308540));
  fn1_1424b8(c);
  /* 13f77c: mov x8, x21 */
  ARC_X_W(c, 8, ARC_X_R(c, 21));
  /* 13f780: cbz w0, #0x13f5e8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13f5e8;
  /* 13f784: nop  */
  /* nop: no architectural effect here */
  /* 13f788: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13f78c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1308560));
  fn1_1424d0(c);
  /* 13f790: mov x8, x21 */
  ARC_X_W(c, 8, ARC_X_R(c, 21));
  /* 13f794: b #0x13f5e8 */
  goto L_13f5e8;
  /* 13f798: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1308572));
  fn1_9cc20(c);
  /* 13f79c: b #0x13f7ac */
  goto L_13f7ac;
  /* 13f7a0: b #0x13f7ac */
  goto L_13f7ac;
  /* 13f7a4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1308584));
  fn1_9cc20(c);
  /* 13f7a8: b #0x13f7ac */
  goto L_13f7ac;
L_13f7ac:;
  /* 13f7ac: ldrb w8, [sp, #0x10] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(16))));
  /* 13f7b0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13f7b4: tbz w8, #0, #0x13f7c8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13f7c8;
  /* 13f7b8: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* 13f7bc: ldr x0, [sp, #0x20] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(32))));
  /* 13f7c0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13f7c4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1308616));
  fn1_142608(c);
L_13f7c8:;
  /* 13f7c8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13f7cc: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1308624));
  fn1_9cc20(c);
}

void fn1_142740(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248704));
  /* 142740: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 142744: ldr x17, [x16, #0xfa0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(4000))));
  /* 142748: add x16, x16, #0xfa0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(4000)));
  /* 14274c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142750: nop  */
  /* nop: no architectural effect here */
  /* 142754: nop  */
  /* nop: no architectural effect here */
}

void fn1_142d40(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250240));
  /* 142d40: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142d44: ldr x17, [x16, #0x1a0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(416))));
  /* 142d48: add x16, x16, #0x1a0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(416)));
  /* 142d4c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142d50: nop  */
  /* nop: no architectural effect here */
  /* 142d54: nop  */
  /* nop: no architectural effect here */
}

void fn1_143340(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251776));
  /* 143340: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143344: ldr x17, [x16, #0x3a0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(928))));
  /* 143348: add x16, x16, #0x3a0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(928)));
  /* 14334c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143350: nop  */
  /* nop: no architectural effect here */
  /* 143354: nop  */
  /* nop: no architectural effect here */
}

void fn1_143940(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253312));
  /* 143940: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143944: ldr x17, [x16, #0x5a0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1440))));
  /* 143948: add x16, x16, #0x5a0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1440)));
  /* 14394c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143950: nop  */
  /* nop: no architectural effect here */
  /* 143954: nop  */
  /* nop: no architectural effect here */
}

void fn1_143f40(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254848));
  /* 143f40: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143f44: ldr x17, [x16, #0x7a0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1952))));
  /* 143f48: add x16, x16, #0x7a0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1952)));
  /* 143f4c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143f50: nop  */
  /* nop: no architectural effect here */
  /* 143f54: nop  */
  /* nop: no architectural effect here */
}

void fn1_144540(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256384));
  /* 144540: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144544: ldr x17, [x16, #0x9a0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2464))));
  /* 144548: add x16, x16, #0x9a0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2464)));
  /* 14454c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144550: nop  */
  /* nop: no architectural effect here */
  /* 144554: nop  */
  /* nop: no architectural effect here */
}

