#include "lifted.h"

void fn1_9ceb4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038570676));
  /* 9ceb4: bti c */
  /* bti: no architectural effect here */
  /* 9ceb8: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 9cebc: mov w1, #-1 */
  ARC_W_W(c, 1, UINT64_C(18446744073709551615));
  /* 9cec0: b #0x9d008 */
  fn1_9d008(c); return;
}

void fn1_a14cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038588620));
  /* a14cc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a14d0: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a14d4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a14d8: blr x0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(660700));
  arc_dispatch(c, ARC_X_R(c, 0));
  /* a14dc: nop  */
  /* nop: no architectural effect here */
  /* a14e0: adr x0, #0x4fa17 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(326167)));
  /* a14e4: bl #0xa23d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(660712));
  fn1_a23d8(c);
}

void fn1_a27b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038593464));
  /* a27b8: bti c */
  /* bti: no architectural effect here */
  /* a27bc: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* a27c0: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_a8930(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038618416));
  /* a8930: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a8934: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a8938: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a893c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a8940: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a8944: ldp x9, x8, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* a8948: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a894c: b.eq #0xa8a74 */
  if (ARC_COND(c, 0)) goto L_a8a74;
  /* a8950: ldrb w10, [x9] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 9)));
  /* a8954: sub w10, w10, #0x3a */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) - UINT64_C(58)));
  /* a8958: cmn w10, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 10), UINT64_C(10), 0);
  /* a895c: b.lo #0xa8a74 */
  if (ARC_COND(c, 3)) goto L_a8a74;
  /* a8960: add x13, x9, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* a8964: mov x19, xzr */
  ARC_X_W(c, 19, ARC_X_R(c, 31));
  /* a8968: mov w10, #0xa */
  ARC_W_W(c, 10, UINT64_C(10));
  /* a896c: mov x14, x13 */
  ARC_X_W(c, 14, ARC_X_R(c, 13));
L_a8970:;
  /* a8970: str x14, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 14));
  /* a8974: mov x9, x14 */
  ARC_X_W(c, 9, ARC_X_R(c, 14));
  /* a8978: mov x11, x19 */
  ARC_X_W(c, 11, ARC_X_R(c, 19));
  /* a897c: ldurb w12, [x14, #-1] */
  ARC_W_W(c, 12, arc_ld8((ARC_X_R(c, 14) + INT64_C(-1))));
  /* a8980: nop  */
  /* nop: no architectural effect here */
  /* a8984: madd x14, x19, x10, x12 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 12)) + ((uint64_t)(ARC_X_R(c, 19)) * (uint64_t)(ARC_X_R(c, 10)))));
  /* a8988: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* a898c: mov x20, x13 */
  ARC_X_W(c, 20, ARC_X_R(c, 13));
  /* a8990: sub x19, x14, #0x30 */
  ARC_X_W(c, 19, (ARC_X_R(c, 14) - UINT64_C(48)));
  /* a8994: b.eq #0xa89b0 */
  if (ARC_COND(c, 0)) goto L_a89b0;
  /* a8998: mov x14, x9 */
  ARC_X_W(c, 14, ARC_X_R(c, 9));
  /* a899c: ldrb w13, [x14], #1 */
  { const uint64_t _a = ARC_X_R(c, 14);
    ARC_X_W(c, 14, ARC_X_R(c, 14) + INT64_C(1));
    ARC_W_W(c, 13, arc_ld8(_a));
  }
  /* a89a0: sub w13, w13, #0x30 */
  ARC_W_W(c, 13, (ARC_W_R(c, 13) - UINT64_C(48)));
  /* a89a4: cmp w13, #9 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(9));
  /* a89a8: add x13, x20, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 20) + UINT64_C(1)));
  /* a89ac: b.ls #0xa8970 */
  if (ARC_COND(c, 9)) goto L_a8970;
L_a89b0:;
  /* a89b0: sub x8, x8, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 20)));
  /* a89b4: sub x10, x19, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) - UINT64_C(1)));
  /* a89b8: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* a89bc: b.hs #0xa8a74 */
  if (ARC_COND(c, 2)) goto L_a8a74;
  /* a89c0: mov w8, #0xa */
  ARC_W_W(c, 8, UINT64_C(10));
  /* a89c4: cmp x19, #0xa */
  (void)arc_sub64(c, ARC_X_R(c, 19), UINT64_C(10));
  /* a89c8: madd x8, x11, x8, x12 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 12)) + ((uint64_t)(ARC_X_R(c, 11)) * (uint64_t)(ARC_X_R(c, 8)))));
  /* a89cc: add x8, x9, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ARC_X_R(c, 8)));
  /* a89d0: sub x8, x8, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(48)));
  /* a89d4: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* a89d8: b.lo #0xa8a04 */
  if (ARC_COND(c, 3)) goto L_a8a04;
  /* a89dc: mov x10, #0x475f */
  ARC_X_W(c, 10, UINT64_C(18271));
  /* a89e0: ldr x8, [x9] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 9)));
  /* a89e4: ldrh w9, [x9, #8] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 9) + INT64_C(8))));
  /* a89e8: movk x10, #0x4f4c, lsl #16 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1330380800)));
  /* a89ec: movk x10, #0x4142, lsl #32 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446462603027808255)) | UINT64_C(71751723646976)));
  /* a89f0: movk x10, #0x5f4c, lsl #48 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(281474976710655)) | UINT64_C(6866863531833163776)));
  /* a89f4: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* a89f8: mov w8, #0x4e5f */
  ARC_W_W(c, 8, UINT64_C(20063));
  /* a89fc: ccmp w9, w8, #0, eq */
  if (ARC_COND(c, 0)) { (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 8)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* a8a00: b.eq #0xa8a8c */
  if (ARC_COND(c, 0)) goto L_a8a8c;
L_a8a04:;
  /* a8a04: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* a8a08: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* a8a0c: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* a8a10: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a8a14: b.hi #0xa8a38 */
  if (ARC_COND(c, 8)) goto L_a8a38;
  /* a8a18: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* a8a1c: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a8a20: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(690724));
  fn1_1428a8(c);
  /* a8a24: cbz x0, #0xa8ad8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a8ad8;
  /* a8a28: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a8a2c: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
L_a8a30:;
  /* a8a30: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a8a34: str x0, [x22, #0x1330] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(4912)), ARC_X_R(c, 0));
L_a8a38:;
  /* a8a38: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* a8a3c: add x0, x21, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* a8a40: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a8a44: add x8, x8, #0xc10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3088)));
  /* a8a48: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* a8a4c: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a8a50: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a8a54: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* a8a58: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* a8a5c: stp x20, x19, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a8a60: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* a8a64: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* a8a68: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* a8a6c: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* a8a70: b #0xa8a78 */
  goto L_a8a78;
L_a8a74:;
  /* a8a74: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
L_a8a78:;
  /* a8a78: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a8a7c: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a8a80: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a8a84: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a8a88: ret  */
  return;
L_a8a8c:;
  /* a8a8c: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* a8a90: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* a8a94: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* a8a98: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a8a9c: b.hi #0xa8ac8 */
  if (ARC_COND(c, 8)) goto L_a8ac8;
  /* a8aa0: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* a8aa4: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a8aa8: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(690860));
  fn1_1428a8(c);
  /* a8aac: cbz x0, #0xa8ad8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a8ad8;
  /* a8ab0: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a8ab4: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a8ab8: adrp x20, #0x50000 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(327680)));
  /* a8abc: add x20, x20, #0xc2e */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(3118)));
  /* a8ac0: mov w19, #0x15 */
  ARC_W_W(c, 19, UINT64_C(21));
  /* a8ac4: b #0xa8a30 */
  goto L_a8a30;
L_a8ac8:;
  /* a8ac8: adrp x20, #0x50000 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(327680)));
  /* a8acc: add x20, x20, #0xc2e */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(3118)));
  /* a8ad0: mov w19, #0x15 */
  ARC_W_W(c, 19, UINT64_C(21));
  /* a8ad4: b #0xa8a38 */
  goto L_a8a38;
L_a8ad8:;
  /* a8ad8: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(690908));
  fn1_142488(c);
}

void fn1_afa48(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038647368));
  /* afa48: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* afa4c: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* afa50: stp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* afa54: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* afa58: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* afa5c: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* afa60: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* afa64: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* afa68: ldr x8, [x0, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* afa6c: cbz x8, #0xafc4c */
  if ((ARC_X_R(c, 8)) == 0) goto L_afc4c;
  /* afa70: ldr x24, [x1, #8] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* afa74: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* afa78: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* afa7c: mov x22, xzr */
  ARC_X_W(c, 22, ARC_X_R(c, 31));
  /* afa80: mov w23, #1 */
  ARC_W_W(c, 23, UINT64_C(1));
  /* afa84: mov w25, #0x28 */
  ARC_W_W(c, 25, UINT64_C(40));
  /* afa88: mov w26, #0x29 */
  ARC_W_W(c, 26, UINT64_C(41));
  /* afa8c: mov w27, #0x202c */
  ARC_W_W(c, 27, UINT64_C(8236));
  /* afa90: b #0xafaa8 */
  goto L_afaa8;
L_afa94:;
  /* afa94: str x24, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 24));
L_afa98:;
  /* afa98: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* afa9c: add x22, x22, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* afaa0: cmp x22, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* afaa4: b.eq #0xafc4c */
  if (ARC_COND(c, 0)) goto L_afc4c;
L_afaa8:;
  /* afaa8: mov x28, x24 */
  ARC_X_W(c, 28, ARC_X_R(c, 24));
  /* afaac: tbnz w23, #0, #0xafb00 */
  if (((ARC_W_R(c, 23)) >> 0 & 1) != 0) goto L_afb00;
  /* afab0: ldr x8, [x20, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* afab4: add x9, x24, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + UINT64_C(2)));
  /* afab8: ldr x0, [x20] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 20)));
  /* afabc: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* afac0: b.ls #0xafaec */
  if (ARC_COND(c, 9)) goto L_afaec;
  /* afac4: lsl x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(1)) & 63)));
  /* afac8: add x9, x24, #0x3e2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + UINT64_C(994)));
  /* afacc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* afad0: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* afad4: str x1, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 1));
  /* afad8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(719580));
  fn1_142878(c);
  /* afadc: str x0, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 0));
  /* afae0: cbz x0, #0xafc6c */
  if ((ARC_X_R(c, 0)) == 0) goto L_afc6c;
  /* afae4: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* afae8: b #0xafaf0 */
  goto L_afaf0;
L_afaec:;
  /* afaec: mov x8, x24 */
  ARC_X_W(c, 8, ARC_X_R(c, 24));
L_afaf0:;
  /* afaf0: strh w27, [x0, x8] */
  arc_st16((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 27));
  /* afaf4: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* afaf8: add x28, x8, #2 */
  ARC_X_W(c, 28, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* afafc: str x28, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 28));
L_afb00:;
  /* afb00: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* afb04: ldr x21, [x8, x22, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3))));
  /* afb08: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* afb0c: ubfx w8, w8, #1, #5 */
  ARC_W_W(c, 8, (((uint32_t)(ARC_W_R(c, 8)) >> 1) & UINT64_C(31)));
  /* afb10: cmp w8, #9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(9));
  /* afb14: b.hs #0xafb54 */
  if (ARC_COND(c, 2)) goto L_afb54;
  /* afb18: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* afb1c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* afb20: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* afb24: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* afb28: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(719660));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* afb2c: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* afb30: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* afb34: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* afb38: b.eq #0xafc34 */
  if (ARC_COND(c, 0)) goto L_afc34;
  /* afb3c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* afb40: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* afb44: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* afb48: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* afb4c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(719696));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* afb50: b #0xafc34 */
  goto L_afc34;
L_afb54:;
  /* afb54: ldr w10, [x20, #0x20] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 20) + INT64_C(32))));
  /* afb58: ldr x9, [x20, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* afb5c: add x8, x28, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 28) + UINT64_C(1)));
  /* afb60: ldr x0, [x20] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 20)));
  /* afb64: add w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(1)));
  /* afb68: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* afb6c: str w10, [x20, #0x20] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(32)), ARC_W_R(c, 10));
  /* afb70: b.ls #0xafba0 */
  if (ARC_COND(c, 9)) goto L_afba0;
  /* afb74: lsl x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* afb78: add x9, x28, #0x3e1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 28) + UINT64_C(993)));
  /* afb7c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* afb80: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* afb84: str x1, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 1));
  /* afb88: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(719756));
  fn1_142878(c);
  /* afb8c: str x0, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 0));
  /* afb90: cbz x0, #0xafc74 */
  if ((ARC_X_R(c, 0)) == 0) goto L_afc74;
  /* afb94: ldr x9, [x20, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* afb98: add x8, x9, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* afb9c: b #0xafba4 */
  goto L_afba4;
L_afba0:;
  /* afba0: mov x9, x28 */
  ARC_X_W(c, 9, ARC_X_R(c, 28));
L_afba4:;
  /* afba4: str x8, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 8));
  /* afba8: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* afbac: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* afbb0: strb w25, [x0, x9] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 9)), ARC_W_R(c, 25));
  /* afbb4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* afbb8: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* afbbc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(719808));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* afbc0: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* afbc4: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* afbc8: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* afbcc: b.eq #0xafbe4 */
  if (ARC_COND(c, 0)) goto L_afbe4;
  /* afbd0: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* afbd4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* afbd8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* afbdc: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* afbe0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(719844));
  arc_dispatch(c, ARC_X_R(c, 8));
L_afbe4:;
  /* afbe4: ldp x8, x10, [x20, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* afbe8: ldr w11, [x20, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 20) + INT64_C(32))));
  /* afbec: ldr x0, [x20] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 20)));
  /* afbf0: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* afbf4: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* afbf8: str w11, [x20, #0x20] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(32)), ARC_W_R(c, 11));
  /* afbfc: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* afc00: b.ls #0xafc2c */
  if (ARC_COND(c, 9)) goto L_afc2c;
  /* afc04: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* afc08: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* afc0c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* afc10: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* afc14: str x1, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 1));
  /* afc18: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(719900));
  fn1_142878(c);
  /* afc1c: str x0, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 0));
  /* afc20: cbz x0, #0xafc70 */
  if ((ARC_X_R(c, 0)) == 0) goto L_afc70;
  /* afc24: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* afc28: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_afc2c:;
  /* afc2c: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
  /* afc30: strb w26, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 26));
L_afc34:;
  /* afc34: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* afc38: cmp x28, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 28), ARC_X_R(c, 8));
  /* afc3c: b.eq #0xafa94 */
  if (ARC_COND(c, 0)) goto L_afa94;
  /* afc40: mov w23, wzr */
  ARC_W_W(c, 23, ARC_W_R(c, 31));
  /* afc44: mov x24, x8 */
  ARC_X_W(c, 24, ARC_X_R(c, 8));
  /* afc48: b #0xafa98 */
  goto L_afa98;
L_afc4c:;
  /* afc4c: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* afc50: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* afc54: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* afc58: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* afc5c: ldp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* afc60: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* afc64: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* afc68: ret  */
  return;
L_afc6c:;
  /* afc6c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(719984));
  fn1_1427b8(c);
L_afc70:;
  /* afc70: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(719988));
  fn1_1427b8(c);
L_afc74:;
  /* afc74: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(719992));
  fn1_1427b8(c);
}

void fn1_b4268(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038665832));
  /* b4268: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b426c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b4270: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b4274: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b4278: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b427c: ldp x9, x10, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b4280: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b4284: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* b4288: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b428c: add x11, x9, #2 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* b4290: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* b4294: b.ls #0xb42c4 */
  if (ARC_COND(c, 9)) goto L_b42c4;
  /* b4298: lsl x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b429c: add x9, x9, #0x3e2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(994)));
  /* b42a0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* b42a4: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b42a8: csel x1, x10, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* b42ac: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b42b0: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(737972));
  fn1_142878(c);
  /* b42b4: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b42b8: cbz x0, #0xb434c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b434c;
  /* b42bc: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b42c0: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
L_b42c4:;
  /* b42c4: mov w10, #0x7066 */
  ARC_W_W(c, 10, UINT64_C(28774));
  /* b42c8: strh w10, [x8, x9] */
  arc_st16((ARC_X_R(c, 8) + ARC_X_R(c, 9)), ARC_W_R(c, 10));
  /* b42cc: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b42d0: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* b42d4: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b42d8: ldr x20, [x21, #0x18] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 21) + INT64_C(24))));
  /* b42dc: cbz x20, #0xb4338 */
  if ((ARC_X_R(c, 20)) == 0) goto L_b4338;
  /* b42e0: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b42e4: add x9, x20, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* b42e8: ldr x21, [x21, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* b42ec: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b42f0: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b42f4: b.ls #0xb431c */
  if (ARC_COND(c, 9)) goto L_b431c;
  /* b42f8: lsl x8, x10, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b42fc: add x9, x9, #0x3e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(992)));
  /* b4300: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b4304: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* b4308: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b430c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(738064));
  fn1_142878(c);
  /* b4310: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b4314: cbz x0, #0xb4350 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b4350;
  /* b4318: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b431c:;
  /* b431c: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b4320: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* b4324: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* b4328: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(738092));
  fn1_1449d8(c);
  /* b432c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b4330: add x8, x8, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 20)));
  /* b4334: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_b4338:;
  /* b4338: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b433c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b4340: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b4344: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b4348: ret  */
  return;
L_b434c:;
  /* b434c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(738128));
  fn1_1427b8(c);
L_b4350:;
  /* b4350: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(738132));
  fn1_1427b8(c);
}

void fn1_b7b7c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038680444));
  /* b7b7c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b7b80: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b7b84: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b7b88: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b7b8c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b7b90: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* b7b94: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b7b98: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b7b9c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b7ba0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b7ba4: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b7ba8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(752556));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b7bac: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* b7bb0: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b7bb4: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b7bb8: b.eq #0xb7bd0 */
  if (ARC_COND(c, 0)) goto L_b7bd0;
  /* b7bbc: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b7bc0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b7bc4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b7bc8: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b7bcc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(752592));
  arc_dispatch(c, ARC_X_R(c, 8));
L_b7bd0:;
  /* b7bd0: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b7bd4: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b7bd8: add x10, x8, #9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(9)));
  /* b7bdc: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b7be0: b.ls #0xb7c08 */
  if (ARC_COND(c, 9)) goto L_b7c08;
  /* b7be4: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b7be8: add x8, x8, #0x3e9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1001)));
  /* b7bec: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b7bf0: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b7bf4: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b7bf8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(752636));
  fn1_142878(c);
  /* b7bfc: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b7c00: cbz x0, #0xb7c90 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b7c90;
  /* b7c04: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b7c08:;
  /* b7c08: adrp x9, #0x4f000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(323584)));
  /* b7c0c: add x9, x9, #0xe9b */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3739)));
  /* b7c10: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b7c14: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* b7c18: mov w10, #0x20 */
  ARC_W_W(c, 10, UINT64_C(32));
  /* b7c1c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b7c20: strb w10, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 10));
  /* b7c24: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b7c28: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b7c2c: ldr x20, [x20, #0x18] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* b7c30: add x8, x8, #9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(9)));
  /* b7c34: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* b7c38: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b7c3c: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b7c40: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* b7c44: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(752712));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b7c48: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b7c4c: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b7c50: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b7c54: b.ne #0xb7c6c */
  if (ARC_COND(c, 1)) goto L_b7c6c;
  /* b7c58: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b7c5c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b7c60: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b7c64: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b7c68: ret  */
  return;
L_b7c6c:;
  /* b7c6c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b7c70: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b7c74: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b7c78: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b7c7c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b7c80: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b7c84: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b7c88: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b7c8c: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_b7c90:;
  /* b7c90: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(752788));
  fn1_1427b8(c);
}

void fn1_bac18(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038692888));
  /* bac18: bti c */
  /* bti: no architectural effect here */
  /* bac1c: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* bac20: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_bd918(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038704408));
  /* bd918: bti c */
  /* bti: no architectural effect here */
  /* bd91c: b #0x142800 */
  fn1_142800(c); return;
}

void fn1_ce3b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038772664));
L_ce3b8:;
  /* ce3b8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ce3bc: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* ce3c0: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ce3c4: stp x28, x27, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* ce3c8: stp x26, x25, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* ce3cc: stp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* ce3d0: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ce3d4: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ce3d8: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* ce3dc: stur w3, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 3));
  /* ce3e0: adrp x3, #0x52000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(335872)));
  /* ce3e4: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* ce3e8: ldr q17, [x3, #0xa80] */
  arc_q_w(c, 17, arc_ld64((ARC_X_R(c, 3) + INT64_C(2688))), arc_ld64((ARC_X_R(c, 3) + INT64_C(2688)) + 8));
  /* ce3ec: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ce3f0: mov w27, #2 */
  ARC_W_W(c, 27, UINT64_C(2));
  /* ce3f4: mov w28, #1 */
  ARC_W_W(c, 28, UINT64_C(1));
  /* ce3f8: mov w22, #4 */
  ARC_W_W(c, 22, UINT64_C(4));
  /* ce3fc: mov x0, #-0x200 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551104));
  /* ce400: mov x26, #-1 */
  ARC_X_W(c, 26, UINT64_C(18446744073709551615));
  /* ce404: str q17, [sp] */
  arc_st64((c)->sp, (c)->q[17].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[17].u64[1]);
L_ce408:;
  /* ce408: mov x23, x19 */
  ARC_X_W(c, 23, ARC_X_R(c, 19));
L_ce40c:;
  /* ce40c: sub x8, x20, x23 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) - ARC_X_R(c, 23)));
  /* ce410: mov x19, x23 */
  ARC_X_W(c, 19, ARC_X_R(c, 23));
  /* ce414: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* ce418: subs x9, x8, #2 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2)));
  /* ce41c: b.gt #0xce430 */
  if (ARC_COND(c, 12)) goto L_ce430;
  /* ce420: b.lo #0xcedc0 */
  if (ARC_COND(c, 3)) goto L_cedc0;
  /* ce424: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* ce428: b.ne #0xce448 */
  if (ARC_COND(c, 1)) goto L_ce448;
  /* ce42c: b #0xcece4 */
  goto L_cece4;
L_ce430:;
  /* ce430: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* ce434: b.eq #0xced00 */
  if (ARC_COND(c, 0)) goto L_ced00;
  /* ce438: cmp x8, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(4));
  /* ce43c: b.eq #0xced4c */
  if (ARC_COND(c, 0)) goto L_ced4c;
  /* ce440: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* ce444: b.eq #0xcec2c */
  if (ARC_COND(c, 0)) goto L_cec2c;
L_ce448:;
  /* ce448: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* ce44c: b.le #0xcede4 */
  if (ARC_COND(c, 13)) goto L_cede4;
  /* ce450: cbz x2, #0xcee60 */
  if ((ARC_X_R(c, 2)) == 0) goto L_cee60;
  /* ce454: lsr x9, x8, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* ce458: ldur d0, [x20, #-8] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* ce45c: cmp x8, #0x81 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(129));
  /* ce460: add x9, x19, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* ce464: b.lo #0xce59c */
  if (ARC_COND(c, 3)) goto L_ce59c;
  /* ce468: ldr d1, [x9] */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 9)));
  /* ce46c: fcmp d1, d0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 1)), (double)(ARC_D_R(c, 0)));
  /* ce470: fcsel d2, d1, d0, pl */
  arc_d_w(c, 2, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 1) : ARC_D_R(c, 0))));
  /* ce474: fcsel d0, d0, d1, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 1))));
  /* ce478: stur d2, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), (c)->q[2].u64[0]);
  /* ce47c: str d0, [x9] */
  arc_st64(ARC_X_R(c, 9), (c)->q[0].u64[0]);
  /* ce480: ldur d0, [x20, #-8] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* ce484: ldr d1, [x19] */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 19)));
  /* ce488: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* ce48c: fcsel d2, d0, d1, pl */
  arc_d_w(c, 2, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 1))));
  /* ce490: fcsel d0, d1, d0, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 1) : ARC_D_R(c, 0))));
  /* ce494: stur d2, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), (c)->q[2].u64[0]);
  /* ce498: ldr d1, [x9] */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 9)));
  /* ce49c: ldr d2, [x19] */
  arc_du_w(c, 2, arc_ld64(ARC_X_R(c, 19)));
  /* ce4a0: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* ce4a4: fcsel d1, d1, d2, pl */
  arc_d_w(c, 1, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 1) : ARC_D_R(c, 2))));
  /* ce4a8: str d1, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[1].u64[0]);
  /* ce4ac: ldp d2, d1, [x9, #-8] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(-8));
    arc_du_w(c, 2, arc_ld64(_pa));
    arc_du_w(c, 1, arc_ld64((_pa + 8)));
  }
  /* ce4b0: fcsel d0, d0, d1, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 1))));
  /* ce4b4: str d0, [x9] */
  arc_st64(ARC_X_R(c, 9), (c)->q[0].u64[0]);
  /* ce4b8: ldur d0, [x20, #-0x10] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(-16))));
  /* ce4bc: fcmp d2, d0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 2)), (double)(ARC_D_R(c, 0)));
  /* ce4c0: fcsel d1, d2, d0, pl */
  arc_d_w(c, 1, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 2) : ARC_D_R(c, 0))));
  /* ce4c4: fcsel d0, d0, d2, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 2))));
  /* ce4c8: stur d1, [x20, #-0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-16)), (c)->q[1].u64[0]);
  /* ce4cc: stur d0, [x9, #-8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(-8)), (c)->q[0].u64[0]);
  /* ce4d0: ldur d0, [x20, #-0x10] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(-16))));
  /* ce4d4: ldr d1, [x19, #8] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* ce4d8: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* ce4dc: fcsel d2, d0, d1, pl */
  arc_d_w(c, 2, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 1))));
  /* ce4e0: fcsel d0, d1, d0, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 1) : ARC_D_R(c, 0))));
  /* ce4e4: stur d2, [x20, #-0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-16)), (c)->q[2].u64[0]);
  /* ce4e8: ldur d1, [x9, #-8] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 9) + INT64_C(-8))));
  /* ce4ec: ldr d2, [x19, #8] */
  arc_du_w(c, 2, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* ce4f0: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* ce4f4: fcsel d1, d1, d2, pl */
  arc_d_w(c, 1, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 1) : ARC_D_R(c, 2))));
  /* ce4f8: str d1, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), (c)->q[1].u64[0]);
  /* ce4fc: ldur d1, [x9, #-8] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 9) + INT64_C(-8))));
  /* ce500: fcsel d0, d0, d1, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 1))));
  /* ce504: stur d0, [x9, #-8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(-8)), (c)->q[0].u64[0]);
  /* ce508: ldr d0, [x9, #8] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* ce50c: ldur d1, [x20, #-0x18] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 20) + INT64_C(-24))));
  /* ce510: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* ce514: fcsel d2, d0, d1, pl */
  arc_d_w(c, 2, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 1))));
  /* ce518: fcsel d0, d1, d0, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 1) : ARC_D_R(c, 0))));
  /* ce51c: stur d2, [x20, #-0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-24)), (c)->q[2].u64[0]);
  /* ce520: str d0, [x9, #8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(8)), (c)->q[0].u64[0]);
  /* ce524: ldur d0, [x20, #-0x18] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(-24))));
  /* ce528: ldr d1, [x19, #0x10] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* ce52c: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* ce530: fcsel d2, d0, d1, pl */
  arc_d_w(c, 2, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 1))));
  /* ce534: fcsel d0, d1, d0, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 1) : ARC_D_R(c, 0))));
  /* ce538: stur d2, [x20, #-0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-24)), (c)->q[2].u64[0]);
  /* ce53c: ldr d1, [x9, #8] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* ce540: ldr d2, [x19, #0x10] */
  arc_du_w(c, 2, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* ce544: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* ce548: fcsel d1, d1, d2, pl */
  arc_d_w(c, 1, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 1) : ARC_D_R(c, 2))));
  /* ce54c: str d1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), (c)->q[1].u64[0]);
  /* ce550: ldp d1, d2, [x9] */
  { const uint64_t _pa = ARC_X_R(c, 9);
    arc_du_w(c, 1, arc_ld64(_pa));
    arc_du_w(c, 2, arc_ld64((_pa + 8)));
  }
  /* ce554: fcsel d0, d0, d2, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 2))));
  /* ce558: ldur d2, [x9, #-8] */
  arc_du_w(c, 2, arc_ld64((ARC_X_R(c, 9) + INT64_C(-8))));
  /* ce55c: fcmp d1, d0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 1)), (double)(ARC_D_R(c, 0)));
  /* ce560: fcsel d3, d1, d0, pl */
  arc_d_w(c, 3, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 1) : ARC_D_R(c, 0))));
  /* ce564: fcsel d0, d0, d1, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 1))));
  /* ce568: fcmp d3, d2 */
  arc_fcmp(c, (double)(ARC_D_R(c, 3)), (double)(ARC_D_R(c, 2)));
  /* ce56c: fcsel d1, d2, d3, pl */
  arc_d_w(c, 1, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 2) : ARC_D_R(c, 3))));
  /* ce570: fcsel d3, d3, d2, pl */
  arc_d_w(c, 3, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 3) : ARC_D_R(c, 2))));
  /* ce574: fcmp d1, d0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 1)), (double)(ARC_D_R(c, 0)));
  /* ce578: fcsel d2, d0, d2, pl */
  arc_d_w(c, 2, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 2))));
  /* ce57c: fcsel d0, d1, d0, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 1) : ARC_D_R(c, 0))));
  /* ce580: stp d0, d3, [x9] */
  { const uint64_t _pa = ARC_X_R(c, 9);
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64((_pa + 8), (c)->q[3].u64[0]);
  }
  /* ce584: stur d2, [x9, #-8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(-8)), (c)->q[2].u64[0]);
  /* ce588: ldr d1, [x19] */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 19)));
  /* ce58c: str d0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  /* ce590: str d1, [x9] */
  arc_st64(ARC_X_R(c, 9), (c)->q[1].u64[0]);
  /* ce594: ldr d0, [x19] */
  arc_du_w(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* ce598: b #0xce5ec */
  goto L_ce5ec;
L_ce59c:;
  /* ce59c: ldr d1, [x19] */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 19)));
  /* ce5a0: fcmp d1, d0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 1)), (double)(ARC_D_R(c, 0)));
  /* ce5a4: fcsel d2, d1, d0, pl */
  arc_d_w(c, 2, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 1) : ARC_D_R(c, 0))));
  /* ce5a8: fcsel d0, d0, d1, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 1))));
  /* ce5ac: stur d2, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), (c)->q[2].u64[0]);
  /* ce5b0: str d0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  /* ce5b4: ldur d0, [x20, #-8] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* ce5b8: ldr d1, [x9] */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 9)));
  /* ce5bc: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* ce5c0: fcsel d2, d0, d1, pl */
  arc_d_w(c, 2, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 1))));
  /* ce5c4: fcsel d0, d1, d0, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 1) : ARC_D_R(c, 0))));
  /* ce5c8: stur d2, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), (c)->q[2].u64[0]);
  /* ce5cc: ldr d1, [x19] */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 19)));
  /* ce5d0: ldr d2, [x9] */
  arc_du_w(c, 2, arc_ld64(ARC_X_R(c, 9)));
  /* ce5d4: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* ce5d8: fcsel d1, d1, d2, pl */
  arc_d_w(c, 1, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 1) : ARC_D_R(c, 2))));
  /* ce5dc: str d1, [x9] */
  arc_st64(ARC_X_R(c, 9), (c)->q[1].u64[0]);
  /* ce5e0: ldr d1, [x19] */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 19)));
  /* ce5e4: fcsel d0, d0, d1, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 1))));
  /* ce5e8: str d0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
L_ce5ec:;
  /* ce5ec: ldur w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* ce5f0: sub x2, x2, #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) - UINT64_C(1)));
  /* ce5f4: tbnz w8, #0, #0xce604 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_ce604;
  /* ce5f8: ldur d1, [x19, #-8] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(-8))));
  /* ce5fc: fcmp d1, d0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 1)), (double)(ARC_D_R(c, 0)));
  /* ce600: b.pl #0xceb58 */
  if (ARC_COND(c, 5)) goto L_ceb58;
L_ce604:;
  /* ce604: ldur d1, [x20, #-8] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* ce608: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* ce60c: b.pl #0xce624 */
  if (ARC_COND(c, 5)) goto L_ce624;
  /* ce610: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
L_ce614:;
  /* ce614: ldr d1, [x8, #8]! */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(8));
  /* ce618: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* ce61c: b.pl #0xce614 */
  if (ARC_COND(c, 5)) goto L_ce614;
  /* ce620: b #0xce644 */
  goto L_ce644;
L_ce624:;
  /* ce624: add x9, x19, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(8)));
L_ce628:;
  /* ce628: mov x8, x9 */
  ARC_X_W(c, 8, ARC_X_R(c, 9));
  /* ce62c: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* ce630: b.hs #0xce644 */
  if (ARC_COND(c, 2)) goto L_ce644;
  /* ce634: mov x9, x8 */
  ARC_X_W(c, 9, ARC_X_R(c, 8));
  /* ce638: ldr d1, [x9], #8 */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 9)));
  ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(8));
  /* ce63c: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* ce640: b.pl #0xce628 */
  if (ARC_COND(c, 5)) goto L_ce628;
L_ce644:;
  /* ce644: cmp x8, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* ce648: mov x9, x20 */
  ARC_X_W(c, 9, ARC_X_R(c, 20));
  /* ce64c: b.hs #0xce660 */
  if (ARC_COND(c, 2)) goto L_ce660;
  /* ce650: mov x9, x20 */
  ARC_X_W(c, 9, ARC_X_R(c, 20));
L_ce654:;
  /* ce654: ldr d1, [x9, #-8]! */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 9) + INT64_C(-8))));
  ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(-8));
  /* ce658: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* ce65c: b.mi #0xce654 */
  if (ARC_COND(c, 4)) goto L_ce654;
L_ce660:;
  /* ce660: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ce664: mov x10, x8 */
  ARC_X_W(c, 10, ARC_X_R(c, 8));
  /* ce668: b.hs #0xce680 */
  if (ARC_COND(c, 2)) goto L_ce680;
  /* ce66c: ldr d1, [x9] */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 9)));
  /* ce670: ldr d2, [x8] */
  arc_du_w(c, 2, arc_ld64(ARC_X_R(c, 8)));
  /* ce674: mov x10, x8 */
  ARC_X_W(c, 10, ARC_X_R(c, 8));
  /* ce678: str d1, [x10], #8 */
  arc_st64(ARC_X_R(c, 10), (c)->q[1].u64[0]);
  ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(8));
  /* ce67c: str d2, [x9] */
  arc_st64(ARC_X_R(c, 9), (c)->q[2].u64[0]);
L_ce680:;
  /* ce680: sub x11, x9, #8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) - UINT64_C(8)));
  /* ce684: sub x13, x11, x10 */
  ARC_X_W(c, 13, (ARC_X_R(c, 11) - ARC_X_R(c, 10)));
  /* ce688: cmp x13, #0x3f1 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(1009));
  /* ce68c: b.lt #0xce7fc */
  if (ARC_COND(c, 11)) goto L_ce7fc;
  /* ce690: dup v1.2d, v0.d[0] */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[0].u64[0]);
    _t.u64[1] = ((c)->q[0].u64[0]);
    (c)->q[1] = _t; }
  /* ce694: mov x12, xzr */
  ARC_X_W(c, 12, ARC_X_R(c, 31));
  /* ce698: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* ce69c: b #0xce6c8 */
  goto L_ce6c8;
L_ce6a0:;
  /* ce6a0: cmp x13, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(0));
  /* ce6a4: cset w14, eq */
  ARC_W_W(c, 14, (ARC_COND(c, 0) ? 1 : 0));
  /* ce6a8: cmp x12, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(0));
  /* ce6ac: add x10, x10, x14, lsl #9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 14)) << 9)));
  /* ce6b0: csel x14, x0, xzr, eq */
  ARC_X_W(c, 14, (ARC_COND(c, 0) ? (ARC_X_R(c, 0)) : ARC_X_R(c, 31)));
  /* ce6b4: cset w15, eq */
  ARC_W_W(c, 15, (ARC_COND(c, 0) ? 1 : 0));
  /* ce6b8: add x11, x11, x14 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ARC_X_R(c, 14)));
  /* ce6bc: sub x14, x11, x10 */
  ARC_X_W(c, 14, (ARC_X_R(c, 11) - ARC_X_R(c, 10)));
  /* ce6c0: cmp x14, #0x3f0 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(1008));
  /* ce6c4: b.le #0xce80c */
  if (ARC_COND(c, 13)) goto L_ce80c;
L_ce6c8:;
  /* ce6c8: cbz x13, #0xce6d8 */
  if ((ARC_X_R(c, 13)) == 0) goto L_ce6d8;
  /* ce6cc: cbz x12, #0xce744 */
  if ((ARC_X_R(c, 12)) == 0) goto L_ce744;
L_ce6d0:;
  /* ce6d0: cbnz x13, #0xce7b8 */
  if ((ARC_X_R(c, 13)) != 0) goto L_ce7b8;
  /* ce6d4: b #0xce6a0 */
  goto L_ce6a0;
L_ce6d8:;
  /* ce6d8: movi v2.2d, #0000000000000000 */
  arc_v_clear(c, 2);
  /* ce6dc: movi v3.2d, #0000000000000000 */
  arc_v_clear(c, 3);
  /* ce6e0: add x13, x10, #0x10 */
  ARC_X_W(c, 13, (ARC_X_R(c, 10) + UINT64_C(16)));
  /* ce6e4: mov v4.16b, v17.16b */
  (c)->q[4] = (c)->q[17];
  /* ce6e8: mov w14, #0x40 */
  ARC_W_W(c, 14, UINT64_C(64));
L_ce6ec:;
  /* ce6ec: ldp q5, q6, [x13, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 13) + INT64_C(-16));
    arc_q_w(c, 5, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 6, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* ce6f0: dup v7.2d, x27 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 27));
    _t.u64[1] = (ARC_X_R(c, 27));
    (c)->q[7] = _t; }
  /* ce6f4: dup v16.2d, x28 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 28));
    _t.u64[1] = (ARC_X_R(c, 28));
    (c)->q[16] = _t; }
  /* ce6f8: subs x14, x14, #4 */
  ARC_X_W(c, 14, arc_sub64(c, ARC_X_R(c, 14), UINT64_C(4)));
  /* ce6fc: add x13, x13, #0x20 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(32)));
  /* ce700: fcmgt v5.2d, v1.2d, v5.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[1].f64[0] > (c)->q[5].f64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[1].f64[1] > (c)->q[5].f64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[5] = _t; }
  /* ce704: fcmgt v6.2d, v1.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[1].f64[0] > (c)->q[6].f64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[1].f64[1] > (c)->q[6].f64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[6] = _t; }
  /* ce708: add v7.2d, v4.2d, v7.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[4].u64[0] + (c)->q[7].u64[0];
    _t.u64[1] = (c)->q[4].u64[1] + (c)->q[7].u64[1];
    (c)->q[7] = _t; }
  /* ce70c: bic v5.16b, v16.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] & (~(c)->q[5].u8[0]);
    _t.u8[1] = (c)->q[16].u8[1] & (~(c)->q[5].u8[1]);
    _t.u8[2] = (c)->q[16].u8[2] & (~(c)->q[5].u8[2]);
    _t.u8[3] = (c)->q[16].u8[3] & (~(c)->q[5].u8[3]);
    _t.u8[4] = (c)->q[16].u8[4] & (~(c)->q[5].u8[4]);
    _t.u8[5] = (c)->q[16].u8[5] & (~(c)->q[5].u8[5]);
    _t.u8[6] = (c)->q[16].u8[6] & (~(c)->q[5].u8[6]);
    _t.u8[7] = (c)->q[16].u8[7] & (~(c)->q[5].u8[7]);
    _t.u8[8] = (c)->q[16].u8[8] & (~(c)->q[5].u8[8]);
    _t.u8[9] = (c)->q[16].u8[9] & (~(c)->q[5].u8[9]);
    _t.u8[10] = (c)->q[16].u8[10] & (~(c)->q[5].u8[10]);
    _t.u8[11] = (c)->q[16].u8[11] & (~(c)->q[5].u8[11]);
    _t.u8[12] = (c)->q[16].u8[12] & (~(c)->q[5].u8[12]);
    _t.u8[13] = (c)->q[16].u8[13] & (~(c)->q[5].u8[13]);
    _t.u8[14] = (c)->q[16].u8[14] & (~(c)->q[5].u8[14]);
    _t.u8[15] = (c)->q[16].u8[15] & (~(c)->q[5].u8[15]);
    (c)->q[5] = _t; }
  /* ce710: bic v6.16b, v16.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] & (~(c)->q[6].u8[0]);
    _t.u8[1] = (c)->q[16].u8[1] & (~(c)->q[6].u8[1]);
    _t.u8[2] = (c)->q[16].u8[2] & (~(c)->q[6].u8[2]);
    _t.u8[3] = (c)->q[16].u8[3] & (~(c)->q[6].u8[3]);
    _t.u8[4] = (c)->q[16].u8[4] & (~(c)->q[6].u8[4]);
    _t.u8[5] = (c)->q[16].u8[5] & (~(c)->q[6].u8[5]);
    _t.u8[6] = (c)->q[16].u8[6] & (~(c)->q[6].u8[6]);
    _t.u8[7] = (c)->q[16].u8[7] & (~(c)->q[6].u8[7]);
    _t.u8[8] = (c)->q[16].u8[8] & (~(c)->q[6].u8[8]);
    _t.u8[9] = (c)->q[16].u8[9] & (~(c)->q[6].u8[9]);
    _t.u8[10] = (c)->q[16].u8[10] & (~(c)->q[6].u8[10]);
    _t.u8[11] = (c)->q[16].u8[11] & (~(c)->q[6].u8[11]);
    _t.u8[12] = (c)->q[16].u8[12] & (~(c)->q[6].u8[12]);
    _t.u8[13] = (c)->q[16].u8[13] & (~(c)->q[6].u8[13]);
    _t.u8[14] = (c)->q[16].u8[14] & (~(c)->q[6].u8[14]);
    _t.u8[15] = (c)->q[16].u8[15] & (~(c)->q[6].u8[15]);
    (c)->q[6] = _t; }
  /* ce714: ushl v5.2d, v5.2d, v4.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[5].u64[0], (int8_t)(c)->q[4].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[5].u64[1], (int8_t)(c)->q[4].u64[1]);
    (c)->q[5] = _t; }
  /* ce718: ushl v6.2d, v6.2d, v7.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[6].u64[0], (int8_t)(c)->q[7].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[6].u64[1], (int8_t)(c)->q[7].u64[1]);
    (c)->q[6] = _t; }
  /* ce71c: dup v7.2d, x22 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 22));
    _t.u64[1] = (ARC_X_R(c, 22));
    (c)->q[7] = _t; }
  /* ce720: orr v2.16b, v5.16b, v2.16b */
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
  /* ce724: orr v3.16b, v6.16b, v3.16b */
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
  /* ce728: add v4.2d, v4.2d, v7.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[4].u64[0] + (c)->q[7].u64[0];
    _t.u64[1] = (c)->q[4].u64[1] + (c)->q[7].u64[1];
    (c)->q[4] = _t; }
  /* ce72c: b.ne #0xce6ec */
  if (ARC_COND(c, 1)) goto L_ce6ec;
  /* ce730: orr v2.16b, v3.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[3].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[3].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[3].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[3].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[3].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[3].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[3].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[3].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[3].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[3].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[3].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[3].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[3].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[3].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[3].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[3].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* ce734: ext v3.16b, v2.16b, v2.16b, #8 */
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
    (c)->q[3] = _t; }
  /* ce738: orr v2.8b, v2.8b, v3.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] | (c)->q[3].u8[7];
    (c)->q[2] = _t; }
  /* ce73c: fmov x13, d2 */
  ARC_X_W(c, 13, ARC_DU_R(c, 2));
  /* ce740: cbnz x12, #0xce6d0 */
  if ((ARC_X_R(c, 12)) != 0) goto L_ce6d0;
L_ce744:;
  /* ce744: movi v2.2d, #0000000000000000 */
  arc_v_clear(c, 2);
  /* ce748: movi v3.2d, #0000000000000000 */
  arc_v_clear(c, 3);
  /* ce74c: ldr q4, [x3, #0xa80] */
  arc_q_w(c, 4, arc_ld64((ARC_X_R(c, 3) + INT64_C(2688))), arc_ld64((ARC_X_R(c, 3) + INT64_C(2688)) + 8));
  /* ce750: sub x12, x11, #8 */
  ARC_X_W(c, 12, (ARC_X_R(c, 11) - UINT64_C(8)));
  /* ce754: mov w14, #0x40 */
  ARC_W_W(c, 14, UINT64_C(64));
L_ce758:;
  /* ce758: ldp q6, q5, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_q_w(c, 6, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 5, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* ce75c: dup v7.2d, x27 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 27));
    _t.u64[1] = (ARC_X_R(c, 27));
    (c)->q[7] = _t; }
  /* ce760: dup v16.2d, x28 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 28));
    _t.u64[1] = (ARC_X_R(c, 28));
    (c)->q[16] = _t; }
  /* ce764: sub x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(4)));
  /* ce768: sub x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(32)));
  /* ce76c: ext v5.16b, v5.16b, v5.16b, #8 */
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
  /* ce770: ext v6.16b, v6.16b, v6.16b, #8 */
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
  /* ce774: add v7.2d, v4.2d, v7.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[4].u64[0] + (c)->q[7].u64[0];
    _t.u64[1] = (c)->q[4].u64[1] + (c)->q[7].u64[1];
    (c)->q[7] = _t; }
  /* ce778: fcmgt v5.2d, v1.2d, v5.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[1].f64[0] > (c)->q[5].f64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[1].f64[1] > (c)->q[5].f64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[5] = _t; }
  /* ce77c: fcmgt v6.2d, v1.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[1].f64[0] > (c)->q[6].f64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[1].f64[1] > (c)->q[6].f64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[6] = _t; }
  /* ce780: and v5.16b, v5.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] & (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] & (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] & (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] & (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] & (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] & (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] & (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] & (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] & (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] & (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] & (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] & (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] & (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] & (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] & (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] & (c)->q[16].u8[15];
    (c)->q[5] = _t; }
  /* ce784: and v6.16b, v6.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] & (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[6].u8[1] & (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[6].u8[2] & (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[6].u8[3] & (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[6].u8[4] & (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[6].u8[5] & (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[6].u8[6] & (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[6].u8[7] & (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[6].u8[8] & (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[6].u8[9] & (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[6].u8[10] & (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[6].u8[11] & (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[6].u8[12] & (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[6].u8[13] & (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[6].u8[14] & (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[6].u8[15] & (c)->q[16].u8[15];
    (c)->q[6] = _t; }
  /* ce788: ushl v5.2d, v5.2d, v4.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[5].u64[0], (int8_t)(c)->q[4].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[5].u64[1], (int8_t)(c)->q[4].u64[1]);
    (c)->q[5] = _t; }
  /* ce78c: ushl v6.2d, v6.2d, v7.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[6].u64[0], (int8_t)(c)->q[7].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[6].u64[1], (int8_t)(c)->q[7].u64[1]);
    (c)->q[6] = _t; }
  /* ce790: dup v7.2d, x22 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 22));
    _t.u64[1] = (ARC_X_R(c, 22));
    (c)->q[7] = _t; }
  /* ce794: orr v2.16b, v5.16b, v2.16b */
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
  /* ce798: orr v3.16b, v6.16b, v3.16b */
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
  /* ce79c: add v4.2d, v4.2d, v7.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[4].u64[0] + (c)->q[7].u64[0];
    _t.u64[1] = (c)->q[4].u64[1] + (c)->q[7].u64[1];
    (c)->q[4] = _t; }
  /* ce7a0: cbnz x14, #0xce758 */
  if ((ARC_X_R(c, 14)) != 0) goto L_ce758;
  /* ce7a4: orr v2.16b, v3.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[3].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[3].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[3].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[3].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[3].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[3].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[3].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[3].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[3].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[3].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[3].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[3].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[3].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[3].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[3].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[3].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* ce7a8: ext v3.16b, v2.16b, v2.16b, #8 */
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
    (c)->q[3] = _t; }
  /* ce7ac: orr v2.8b, v2.8b, v3.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] | (c)->q[3].u8[7];
    (c)->q[2] = _t; }
  /* ce7b0: fmov x12, d2 */
  ARC_X_W(c, 12, ARC_DU_R(c, 2));
  /* ce7b4: cbz x13, #0xce6a0 */
  if ((ARC_X_R(c, 13)) == 0) goto L_ce6a0;
L_ce7b8:;
  /* ce7b8: cbz x12, #0xce6a0 */
  if ((ARC_X_R(c, 12)) == 0) goto L_ce6a0;
L_ce7bc:;
  /* ce7bc: rbit x14, x12 */
  ARC_X_W(c, 14, arc_rbit64(ARC_X_R(c, 12)));
  /* ce7c0: rbit x15, x13 */
  ARC_X_W(c, 15, arc_rbit64(ARC_X_R(c, 13)));
  /* ce7c4: sub x16, x12, #1 */
  ARC_X_W(c, 16, (ARC_X_R(c, 12) - UINT64_C(1)));
  /* ce7c8: sub x17, x13, #1 */
  ARC_X_W(c, 17, (ARC_X_R(c, 13) - UINT64_C(1)));
  /* ce7cc: and x12, x16, x12 */
  ARC_X_W(c, 12, (ARC_X_R(c, 16) & ARC_X_R(c, 12)));
  /* ce7d0: clz x14, x14 */
  ARC_X_W(c, 14, arc_clz64(ARC_X_R(c, 14)));
  /* ce7d4: clz x15, x15 */
  ARC_X_W(c, 15, arc_clz64(ARC_X_R(c, 15)));
  /* ce7d8: and x13, x17, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 17) & ARC_X_R(c, 13)));
  /* ce7dc: sub x14, x11, x14, lsl #3 */
  ARC_X_W(c, 14, (ARC_X_R(c, 11) - ((uint64_t)(ARC_X_R(c, 14)) << 3)));
  /* ce7e0: ldr d2, [x10, x15, lsl #3] */
  arc_du_w(c, 2, arc_ld64((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 15)) << 3))));
  /* ce7e4: ldr d3, [x14] */
  arc_du_w(c, 3, arc_ld64(ARC_X_R(c, 14)));
  /* ce7e8: str d3, [x10, x15, lsl #3] */
  arc_st64((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 15)) << 3)), (c)->q[3].u64[0]);
  /* ce7ec: str d2, [x14] */
  arc_st64(ARC_X_R(c, 14), (c)->q[2].u64[0]);
  /* ce7f0: cbz x12, #0xce6a0 */
  if ((ARC_X_R(c, 12)) == 0) goto L_ce6a0;
  /* ce7f4: cbnz x13, #0xce7bc */
  if ((ARC_X_R(c, 13)) != 0) goto L_ce7bc;
  /* ce7f8: b #0xce6a0 */
  goto L_ce6a0;
L_ce7fc:;
  /* ce7fc: asr x14, x13, #3 */
  ARC_X_W(c, 14, ((uint64_t)((int64_t)(ARC_X_R(c, 13)) >> ((UINT64_C(3)) & 63))));
  /* ce800: mov x12, xzr */
  ARC_X_W(c, 12, ARC_X_R(c, 31));
  /* ce804: mov w15, #1 */
  ARC_W_W(c, 15, UINT64_C(1));
  /* ce808: b #0xce830 */
  goto L_ce830;
L_ce80c:;
  /* ce80c: asr x14, x14, #3 */
  ARC_X_W(c, 14, ((uint64_t)((int64_t)(ARC_X_R(c, 14)) >> ((UINT64_C(3)) & 63))));
  /* ce810: orr x16, x12, x13 */
  ARC_X_W(c, 16, (ARC_X_R(c, 12) | ARC_X_R(c, 13)));
  /* ce814: cbz x16, #0xce830 */
  if ((ARC_X_R(c, 16)) == 0) goto L_ce830;
  /* ce818: sub x14, x14, #0x3f */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(63)));
  /* ce81c: mov w17, #0x40 */
  ARC_W_W(c, 17, UINT64_C(64));
  /* ce820: mov w16, #0x40 */
  ARC_W_W(c, 16, UINT64_C(64));
  /* ce824: cbz x13, #0xce840 */
  if ((ARC_X_R(c, 13)) == 0) goto L_ce840;
  /* ce828: cbnz w15, #0xce910 */
  if ((ARC_W_R(c, 15)) != 0) goto L_ce910;
  /* ce82c: b #0xce9e8 */
  goto L_ce9e8;
L_ce830:;
  /* ce830: add x13, x14, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 14) + UINT64_C(1)));
  /* ce834: add x14, x13, x13, lsr #63 */
  ARC_X_W(c, 14, (ARC_X_R(c, 13) + ((uint64_t)(ARC_X_R(c, 13)) >> 63)));
  /* ce838: asr x14, x14, #1 */
  ARC_X_W(c, 14, ((uint64_t)((int64_t)(ARC_X_R(c, 14)) >> ((UINT64_C(1)) & 63))));
  /* ce83c: sub x17, x13, x14 */
  ARC_X_W(c, 17, (ARC_X_R(c, 13) - ARC_X_R(c, 14)));
L_ce840:;
  /* ce840: cmp x14, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(1));
  /* ce844: b.lt #0xce860 */
  if (ARC_COND(c, 11)) goto L_ce860;
  /* ce848: cmp x14, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(4));
  /* ce84c: b.hs #0xce868 */
  if (ARC_COND(c, 2)) goto L_ce868;
  /* ce850: mov x16, xzr */
  ARC_X_W(c, 16, ARC_X_R(c, 31));
  /* ce854: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* ce858: mov x0, x10 */
  ARC_X_W(c, 0, ARC_X_R(c, 10));
  /* ce85c: b #0xce8e4 */
  goto L_ce8e4;
L_ce860:;
  /* ce860: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* ce864: b #0xce904 */
  goto L_ce904;
L_ce868:;
  /* ce868: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* ce86c: movi v2.2d, #0000000000000000 */
  arc_v_clear(c, 2);
  /* ce870: and x16, x14, #0x7ffffffffffffffc */
  ARC_X_W(c, 16, (ARC_X_R(c, 14) & UINT64_C(9223372036854775804)));
  /* ce874: dup v3.2d, v0.d[0] */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[0].u64[0]);
    _t.u64[1] = ((c)->q[0].u64[0]);
    (c)->q[3] = _t; }
  /* ce878: add x0, x10, x16, lsl #3 */
  ARC_X_W(c, 0, (ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 16)) << 3)));
  /* ce87c: ldr q4, [x3, #0xa80] */
  arc_q_w(c, 4, arc_ld64((ARC_X_R(c, 3) + INT64_C(2688))), arc_ld64((ARC_X_R(c, 3) + INT64_C(2688)) + 8));
  /* ce880: add x13, x10, #0x10 */
  ARC_X_W(c, 13, (ARC_X_R(c, 10) + UINT64_C(16)));
  /* ce884: mov x1, x16 */
  ARC_X_W(c, 1, ARC_X_R(c, 16));
L_ce888:;
  /* ce888: ldp q5, q6, [x13, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 13) + INT64_C(-16));
    arc_q_w(c, 5, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 6, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* ce88c: dup v7.2d, x27 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 27));
    _t.u64[1] = (ARC_X_R(c, 27));
    (c)->q[7] = _t; }
  /* ce890: dup v16.2d, x28 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 28));
    _t.u64[1] = (ARC_X_R(c, 28));
    (c)->q[16] = _t; }
  /* ce894: subs x1, x1, #4 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 1), UINT64_C(4)));
  /* ce898: add x13, x13, #0x20 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(32)));
  /* ce89c: fcmgt v5.2d, v3.2d, v5.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[3].f64[0] > (c)->q[5].f64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[3].f64[1] > (c)->q[5].f64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[5] = _t; }
  /* ce8a0: fcmgt v6.2d, v3.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[3].f64[0] > (c)->q[6].f64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[3].f64[1] > (c)->q[6].f64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[6] = _t; }
  /* ce8a4: add v7.2d, v4.2d, v7.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[4].u64[0] + (c)->q[7].u64[0];
    _t.u64[1] = (c)->q[4].u64[1] + (c)->q[7].u64[1];
    (c)->q[7] = _t; }
  /* ce8a8: bic v5.16b, v16.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] & (~(c)->q[5].u8[0]);
    _t.u8[1] = (c)->q[16].u8[1] & (~(c)->q[5].u8[1]);
    _t.u8[2] = (c)->q[16].u8[2] & (~(c)->q[5].u8[2]);
    _t.u8[3] = (c)->q[16].u8[3] & (~(c)->q[5].u8[3]);
    _t.u8[4] = (c)->q[16].u8[4] & (~(c)->q[5].u8[4]);
    _t.u8[5] = (c)->q[16].u8[5] & (~(c)->q[5].u8[5]);
    _t.u8[6] = (c)->q[16].u8[6] & (~(c)->q[5].u8[6]);
    _t.u8[7] = (c)->q[16].u8[7] & (~(c)->q[5].u8[7]);
    _t.u8[8] = (c)->q[16].u8[8] & (~(c)->q[5].u8[8]);
    _t.u8[9] = (c)->q[16].u8[9] & (~(c)->q[5].u8[9]);
    _t.u8[10] = (c)->q[16].u8[10] & (~(c)->q[5].u8[10]);
    _t.u8[11] = (c)->q[16].u8[11] & (~(c)->q[5].u8[11]);
    _t.u8[12] = (c)->q[16].u8[12] & (~(c)->q[5].u8[12]);
    _t.u8[13] = (c)->q[16].u8[13] & (~(c)->q[5].u8[13]);
    _t.u8[14] = (c)->q[16].u8[14] & (~(c)->q[5].u8[14]);
    _t.u8[15] = (c)->q[16].u8[15] & (~(c)->q[5].u8[15]);
    (c)->q[5] = _t; }
  /* ce8ac: bic v6.16b, v16.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] & (~(c)->q[6].u8[0]);
    _t.u8[1] = (c)->q[16].u8[1] & (~(c)->q[6].u8[1]);
    _t.u8[2] = (c)->q[16].u8[2] & (~(c)->q[6].u8[2]);
    _t.u8[3] = (c)->q[16].u8[3] & (~(c)->q[6].u8[3]);
    _t.u8[4] = (c)->q[16].u8[4] & (~(c)->q[6].u8[4]);
    _t.u8[5] = (c)->q[16].u8[5] & (~(c)->q[6].u8[5]);
    _t.u8[6] = (c)->q[16].u8[6] & (~(c)->q[6].u8[6]);
    _t.u8[7] = (c)->q[16].u8[7] & (~(c)->q[6].u8[7]);
    _t.u8[8] = (c)->q[16].u8[8] & (~(c)->q[6].u8[8]);
    _t.u8[9] = (c)->q[16].u8[9] & (~(c)->q[6].u8[9]);
    _t.u8[10] = (c)->q[16].u8[10] & (~(c)->q[6].u8[10]);
    _t.u8[11] = (c)->q[16].u8[11] & (~(c)->q[6].u8[11]);
    _t.u8[12] = (c)->q[16].u8[12] & (~(c)->q[6].u8[12]);
    _t.u8[13] = (c)->q[16].u8[13] & (~(c)->q[6].u8[13]);
    _t.u8[14] = (c)->q[16].u8[14] & (~(c)->q[6].u8[14]);
    _t.u8[15] = (c)->q[16].u8[15] & (~(c)->q[6].u8[15]);
    (c)->q[6] = _t; }
  /* ce8b0: ushl v5.2d, v5.2d, v4.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[5].u64[0], (int8_t)(c)->q[4].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[5].u64[1], (int8_t)(c)->q[4].u64[1]);
    (c)->q[5] = _t; }
  /* ce8b4: ushl v6.2d, v6.2d, v7.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[6].u64[0], (int8_t)(c)->q[7].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[6].u64[1], (int8_t)(c)->q[7].u64[1]);
    (c)->q[6] = _t; }
  /* ce8b8: dup v7.2d, x22 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 22));
    _t.u64[1] = (ARC_X_R(c, 22));
    (c)->q[7] = _t; }
  /* ce8bc: orr v1.16b, v5.16b, v1.16b */
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
  /* ce8c0: orr v2.16b, v6.16b, v2.16b */
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
  /* ce8c4: add v4.2d, v4.2d, v7.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[4].u64[0] + (c)->q[7].u64[0];
    _t.u64[1] = (c)->q[4].u64[1] + (c)->q[7].u64[1];
    (c)->q[4] = _t; }
  /* ce8c8: b.ne #0xce888 */
  if (ARC_COND(c, 1)) goto L_ce888;
  /* ce8cc: orr v1.16b, v2.16b, v1.16b */
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
  /* ce8d0: cmp x14, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 16));
  /* ce8d4: ext v2.16b, v1.16b, v1.16b, #8 */
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
  /* ce8d8: orr v1.8b, v1.8b, v2.8b */
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
  /* ce8dc: fmov x13, d1 */
  ARC_X_W(c, 13, ARC_DU_R(c, 1));
  /* ce8e0: b.eq #0xce904 */
  if (ARC_COND(c, 0)) goto L_ce904;
L_ce8e4:;
  /* ce8e4: ldr d1, [x0], #8 */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 0)));
  ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
  /* ce8e8: fcmp d1, d0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 1)), (double)(ARC_D_R(c, 0)));
  /* ce8ec: cset w1, pl */
  ARC_W_W(c, 1, (ARC_COND(c, 5) ? 1 : 0));
  /* ce8f0: lsl x1, x1, x16 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 1)) << ((ARC_X_R(c, 16)) & 63)));
  /* ce8f4: add x16, x16, #1 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1)));
  /* ce8f8: cmp x14, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 16));
  /* ce8fc: orr x13, x1, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 1) | ARC_X_R(c, 13)));
  /* ce900: b.ne #0xce8e4 */
  if (ARC_COND(c, 1)) goto L_ce8e4;
L_ce904:;
  /* ce904: mov x16, x14 */
  ARC_X_W(c, 16, ARC_X_R(c, 14));
  /* ce908: mov x14, x17 */
  ARC_X_W(c, 14, ARC_X_R(c, 17));
  /* ce90c: cbz w15, #0xce9e8 */
  if ((ARC_W_R(c, 15)) == 0) goto L_ce9e8;
L_ce910:;
  /* ce910: cmp x14, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(1));
  /* ce914: b.lt #0xce930 */
  if (ARC_COND(c, 11)) goto L_ce930;
  /* ce918: cmp x14, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(4));
  /* ce91c: b.hs #0xce944 */
  if (ARC_COND(c, 2)) goto L_ce944;
  /* ce920: mov x15, xzr */
  ARC_X_W(c, 15, ARC_X_R(c, 31));
  /* ce924: mov x12, xzr */
  ARC_X_W(c, 12, ARC_X_R(c, 31));
  /* ce928: mov x17, x11 */
  ARC_X_W(c, 17, ARC_X_R(c, 11));
  /* ce92c: b #0xce9c8 */
  goto L_ce9c8;
L_ce930:;
  /* ce930: cmp x13, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(0));
  /* ce934: csel x12, x16, xzr, eq */
  ARC_X_W(c, 12, (ARC_COND(c, 0) ? (ARC_X_R(c, 16)) : ARC_X_R(c, 31)));
  /* ce938: cbz x13, #0xceb50 */
  if ((ARC_X_R(c, 13)) == 0) goto L_ceb50;
  /* ce93c: sub x11, x11, x14, lsl #3 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - ((uint64_t)(ARC_X_R(c, 14)) << 3)));
  /* ce940: b #0xcea58 */
  goto L_cea58;
L_ce944:;
  /* ce944: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* ce948: movi v2.2d, #0000000000000000 */
  arc_v_clear(c, 2);
  /* ce94c: and x15, x14, #0x7ffffffffffffffc */
  ARC_X_W(c, 15, (ARC_X_R(c, 14) & UINT64_C(9223372036854775804)));
  /* ce950: dup v3.2d, v0.d[0] */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[0].u64[0]);
    _t.u64[1] = ((c)->q[0].u64[0]);
    (c)->q[3] = _t; }
  /* ce954: sub x17, x11, x15, lsl #3 */
  ARC_X_W(c, 17, (ARC_X_R(c, 11) - ((uint64_t)(ARC_X_R(c, 15)) << 3)));
  /* ce958: ldr q4, [x3, #0xa80] */
  arc_q_w(c, 4, arc_ld64((ARC_X_R(c, 3) + INT64_C(2688))), arc_ld64((ARC_X_R(c, 3) + INT64_C(2688)) + 8));
  /* ce95c: sub x12, x11, #8 */
  ARC_X_W(c, 12, (ARC_X_R(c, 11) - UINT64_C(8)));
  /* ce960: mov x0, x15 */
  ARC_X_W(c, 0, ARC_X_R(c, 15));
L_ce964:;
  /* ce964: ldp q6, q5, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_q_w(c, 6, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 5, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* ce968: dup v7.2d, x27 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 27));
    _t.u64[1] = (ARC_X_R(c, 27));
    (c)->q[7] = _t; }
  /* ce96c: dup v16.2d, x28 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 28));
    _t.u64[1] = (ARC_X_R(c, 28));
    (c)->q[16] = _t; }
  /* ce970: sub x0, x0, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) - UINT64_C(4)));
  /* ce974: sub x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(32)));
  /* ce978: ext v5.16b, v5.16b, v5.16b, #8 */
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
  /* ce97c: ext v6.16b, v6.16b, v6.16b, #8 */
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
  /* ce980: add v7.2d, v4.2d, v7.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[4].u64[0] + (c)->q[7].u64[0];
    _t.u64[1] = (c)->q[4].u64[1] + (c)->q[7].u64[1];
    (c)->q[7] = _t; }
  /* ce984: fcmgt v5.2d, v3.2d, v5.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[3].f64[0] > (c)->q[5].f64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[3].f64[1] > (c)->q[5].f64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[5] = _t; }
  /* ce988: fcmgt v6.2d, v3.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[3].f64[0] > (c)->q[6].f64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[3].f64[1] > (c)->q[6].f64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[6] = _t; }
  /* ce98c: and v5.16b, v5.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] & (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] & (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] & (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] & (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] & (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] & (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] & (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] & (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] & (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] & (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] & (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] & (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] & (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] & (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] & (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] & (c)->q[16].u8[15];
    (c)->q[5] = _t; }
  /* ce990: and v6.16b, v6.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] & (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[6].u8[1] & (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[6].u8[2] & (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[6].u8[3] & (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[6].u8[4] & (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[6].u8[5] & (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[6].u8[6] & (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[6].u8[7] & (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[6].u8[8] & (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[6].u8[9] & (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[6].u8[10] & (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[6].u8[11] & (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[6].u8[12] & (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[6].u8[13] & (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[6].u8[14] & (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[6].u8[15] & (c)->q[16].u8[15];
    (c)->q[6] = _t; }
  /* ce994: ushl v5.2d, v5.2d, v4.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[5].u64[0], (int8_t)(c)->q[4].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[5].u64[1], (int8_t)(c)->q[4].u64[1]);
    (c)->q[5] = _t; }
  /* ce998: ushl v6.2d, v6.2d, v7.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[6].u64[0], (int8_t)(c)->q[7].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[6].u64[1], (int8_t)(c)->q[7].u64[1]);
    (c)->q[6] = _t; }
  /* ce99c: dup v7.2d, x22 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 22));
    _t.u64[1] = (ARC_X_R(c, 22));
    (c)->q[7] = _t; }
  /* ce9a0: orr v1.16b, v5.16b, v1.16b */
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
  /* ce9a4: orr v2.16b, v6.16b, v2.16b */
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
  /* ce9a8: add v4.2d, v4.2d, v7.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[4].u64[0] + (c)->q[7].u64[0];
    _t.u64[1] = (c)->q[4].u64[1] + (c)->q[7].u64[1];
    (c)->q[4] = _t; }
  /* ce9ac: cbnz x0, #0xce964 */
  if ((ARC_X_R(c, 0)) != 0) goto L_ce964;
  /* ce9b0: orr v1.16b, v2.16b, v1.16b */
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
  /* ce9b4: cmp x14, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 15));
  /* ce9b8: ext v2.16b, v1.16b, v1.16b, #8 */
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
  /* ce9bc: orr v1.8b, v1.8b, v2.8b */
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
  /* ce9c0: fmov x12, d1 */
  ARC_X_W(c, 12, ARC_DU_R(c, 1));
  /* ce9c4: b.eq #0xce9e8 */
  if (ARC_COND(c, 0)) goto L_ce9e8;
L_ce9c8:;
  /* ce9c8: ldr d1, [x17], #0xfffffffffffffff8 */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 17)));
  ARC_X_W(c, 17, ARC_X_R(c, 17) + INT64_C(-8));
  /* ce9cc: fcmp d1, d0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 1)), (double)(ARC_D_R(c, 0)));
  /* ce9d0: cset w0, mi */
  ARC_W_W(c, 0, (ARC_COND(c, 4) ? 1 : 0));
  /* ce9d4: lsl x0, x0, x15 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 0)) << ((ARC_X_R(c, 15)) & 63)));
  /* ce9d8: add x15, x15, #1 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(1)));
  /* ce9dc: cmp x14, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 15));
  /* ce9e0: orr x12, x0, x12 */
  ARC_X_W(c, 12, (ARC_X_R(c, 0) | ARC_X_R(c, 12)));
  /* ce9e4: b.ne #0xce9c8 */
  if (ARC_COND(c, 1)) goto L_ce9c8;
L_ce9e8:;
  /* ce9e8: cbz x13, #0xcea2c */
  if ((ARC_X_R(c, 13)) == 0) goto L_cea2c;
  /* ce9ec: cbz x12, #0xcea2c */
  if ((ARC_X_R(c, 12)) == 0) goto L_cea2c;
L_ce9f0:;
  /* ce9f0: rbit x15, x12 */
  ARC_X_W(c, 15, arc_rbit64(ARC_X_R(c, 12)));
  /* ce9f4: rbit x17, x13 */
  ARC_X_W(c, 17, arc_rbit64(ARC_X_R(c, 13)));
  /* ce9f8: sub x0, x12, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 12) - UINT64_C(1)));
  /* ce9fc: sub x1, x13, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 13) - UINT64_C(1)));
  /* cea00: and x12, x0, x12 */
  ARC_X_W(c, 12, (ARC_X_R(c, 0) & ARC_X_R(c, 12)));
  /* cea04: clz x15, x15 */
  ARC_X_W(c, 15, arc_clz64(ARC_X_R(c, 15)));
  /* cea08: clz x17, x17 */
  ARC_X_W(c, 17, arc_clz64(ARC_X_R(c, 17)));
  /* cea0c: and x13, x1, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 1) & ARC_X_R(c, 13)));
  /* cea10: sub x15, x11, x15, lsl #3 */
  ARC_X_W(c, 15, (ARC_X_R(c, 11) - ((uint64_t)(ARC_X_R(c, 15)) << 3)));
  /* cea14: ldr d1, [x10, x17, lsl #3] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 17)) << 3))));
  /* cea18: ldr d2, [x15] */
  arc_du_w(c, 2, arc_ld64(ARC_X_R(c, 15)));
  /* cea1c: str d2, [x10, x17, lsl #3] */
  arc_st64((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 17)) << 3)), (c)->q[2].u64[0]);
  /* cea20: str d1, [x15] */
  arc_st64(ARC_X_R(c, 15), (c)->q[1].u64[0]);
  /* cea24: cbz x12, #0xcea2c */
  if ((ARC_X_R(c, 12)) == 0) goto L_cea2c;
  /* cea28: cbnz x13, #0xce9f0 */
  if ((ARC_X_R(c, 13)) != 0) goto L_ce9f0;
L_cea2c:;
  /* cea2c: cmp x12, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(0));
  /* cea30: csel x14, x14, xzr, eq */
  ARC_X_W(c, 14, (ARC_COND(c, 0) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 31)));
  /* cea34: sub x11, x11, x14, lsl #3 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - ((uint64_t)(ARC_X_R(c, 14)) << 3)));
  /* cea38: cbnz x13, #0xcea58 */
  if ((ARC_X_R(c, 13)) != 0) goto L_cea58;
  /* cea3c: add x23, x10, x16, lsl #3 */
  ARC_X_W(c, 23, (ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 16)) << 3)));
  /* cea40: cbnz x12, #0xcea90 */
  if ((ARC_X_R(c, 12)) != 0) goto L_cea90;
  /* cea44: b #0xceabc */
  goto L_ceabc;
L_cea48:;
  /* cea48: lsl x12, x26, x12 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 26)) << ((ARC_X_R(c, 12)) & 63)));
  /* cea4c: sub x11, x11, #8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(8)));
  /* cea50: bic x13, x13, x12 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) & (~ARC_X_R(c, 12))));
  /* cea54: cbz x13, #0xceab8 */
  if ((ARC_X_R(c, 13)) == 0) goto L_ceab8;
L_cea58:;
  /* cea58: clz x12, x13 */
  ARC_X_W(c, 12, arc_clz64(ARC_X_R(c, 13)));
  /* cea5c: eor x12, x12, #0x3f */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) ^ UINT64_C(63)));
  /* cea60: add x14, x10, x12, lsl #3 */
  ARC_X_W(c, 14, (ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 12)) << 3)));
  /* cea64: cmp x11, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 14));
  /* cea68: b.eq #0xcea48 */
  if (ARC_COND(c, 0)) goto L_cea48;
  /* cea6c: ldr d1, [x11] */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 11)));
  /* cea70: ldr d2, [x14] */
  arc_du_w(c, 2, arc_ld64(ARC_X_R(c, 14)));
  /* cea74: str d1, [x14] */
  arc_st64(ARC_X_R(c, 14), (c)->q[1].u64[0]);
  /* cea78: str d2, [x11] */
  arc_st64(ARC_X_R(c, 11), (c)->q[2].u64[0]);
  /* cea7c: b #0xcea48 */
  goto L_cea48;
L_cea80:;
  /* cea80: lsl x10, x26, x10 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 26)) << ((ARC_X_R(c, 10)) & 63)));
  /* cea84: add x23, x23, #8 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* cea88: bic x12, x12, x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) & (~ARC_X_R(c, 10))));
  /* cea8c: cbz x12, #0xceabc */
  if ((ARC_X_R(c, 12)) == 0) goto L_ceabc;
L_cea90:;
  /* cea90: clz x10, x12 */
  ARC_X_W(c, 10, arc_clz64(ARC_X_R(c, 12)));
  /* cea94: eor x10, x10, #0x3f */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) ^ UINT64_C(63)));
  /* cea98: sub x13, x11, x10, lsl #3 */
  ARC_X_W(c, 13, (ARC_X_R(c, 11) - ((uint64_t)(ARC_X_R(c, 10)) << 3)));
  /* cea9c: cmp x23, x13 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 13));
  /* ceaa0: b.eq #0xcea80 */
  if (ARC_COND(c, 0)) goto L_cea80;
  /* ceaa4: ldr d1, [x23] */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 23)));
  /* ceaa8: ldr d2, [x13] */
  arc_du_w(c, 2, arc_ld64(ARC_X_R(c, 13)));
  /* ceaac: str d1, [x13] */
  arc_st64(ARC_X_R(c, 13), (c)->q[1].u64[0]);
  /* ceab0: str d2, [x23] */
  arc_st64(ARC_X_R(c, 23), (c)->q[2].u64[0]);
  /* ceab4: b #0xcea80 */
  goto L_cea80;
L_ceab8:;
  /* ceab8: add x23, x11, #8 */
  ARC_X_W(c, 23, (ARC_X_R(c, 11) + UINT64_C(8)));
L_ceabc:;
  /* ceabc: sub x24, x23, #8 */
  ARC_X_W(c, 24, (ARC_X_R(c, 23) - UINT64_C(8)));
  /* ceac0: cmp x19, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 24));
  /* ceac4: b.eq #0xcead0 */
  if (ARC_COND(c, 0)) goto L_cead0;
  /* ceac8: ldr d1, [x24] */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 24)));
  /* ceacc: str d1, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[1].u64[0]);
L_cead0:;
  /* cead0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* cead4: str d0, [x24] */
  arc_st64(ARC_X_R(c, 24), (c)->q[0].u64[0]);
  /* cead8: b.lo #0xceb1c */
  if (ARC_COND(c, 3)) goto L_ceb1c;
  /* ceadc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ceae0: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* ceae4: mov x26, x3 */
  ARC_X_W(c, 26, ARC_X_R(c, 3));
  /* ceae8: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* ceaec: bl #0xd2128 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(846576));
  fn1_d2128(c);
  /* ceaf0: mov w25, w0 */
  ARC_W_W(c, 25, ARC_W_R(c, 0));
  /* ceaf4: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* ceaf8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* ceafc: bl #0xd2128 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(846592));
  fn1_d2128(c);
  /* ceb00: tbnz w0, #0, #0xcec0c */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_cec0c;
  /* ceb04: ldr q17, [sp] */
  arc_q_w(c, 17, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* ceb08: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* ceb0c: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* ceb10: mov x0, #-0x200 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551104));
  /* ceb14: mov x26, #-1 */
  ARC_X_W(c, 26, UINT64_C(18446744073709551615));
  /* ceb18: tbnz w25, #0, #0xce40c */
  if (((ARC_W_R(c, 25)) >> 0 & 1) != 0) goto L_ce40c;
L_ceb1c:;
  /* ceb1c: ldur w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* ceb20: mov x21, x3 */
  ARC_X_W(c, 21, ARC_X_R(c, 3));
  /* ceb24: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ceb28: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* ceb2c: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* ceb30: and w3, w8, #1 */
  ARC_W_W(c, 3, (ARC_W_R(c, 8) & UINT64_C(1)));
  /* ceb34: bl #0xce3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(846648));
  fn1_ce3b8(c);
  /* ceb38: ldr q17, [sp] */
  arc_q_w(c, 17, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* ceb3c: mov x0, #-0x200 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551104));
  /* ceb40: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* ceb44: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* ceb48: stur wzr, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 31));
  /* ceb4c: b #0xce40c */
  goto L_ce40c;
L_ceb50:;
  /* ceb50: add x23, x10, x12, lsl #3 */
  ARC_X_W(c, 23, (ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 12)) << 3)));
  /* ceb54: b #0xceabc */
  goto L_ceabc;
L_ceb58:;
  /* ceb58: ldur d1, [x20, #-8] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* ceb5c: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* ceb60: b.pl #0xceb78 */
  if (ARC_COND(c, 5)) goto L_ceb78;
  /* ceb64: mov x23, x19 */
  ARC_X_W(c, 23, ARC_X_R(c, 19));
L_ceb68:;
  /* ceb68: ldr d1, [x23, #8]! */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(8));
  /* ceb6c: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* ceb70: b.pl #0xceb68 */
  if (ARC_COND(c, 5)) goto L_ceb68;
  /* ceb74: b #0xceb98 */
  goto L_ceb98;
L_ceb78:;
  /* ceb78: add x8, x19, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + UINT64_C(8)));
L_ceb7c:;
  /* ceb7c: mov x23, x8 */
  ARC_X_W(c, 23, ARC_X_R(c, 8));
  /* ceb80: cmp x8, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* ceb84: b.hs #0xceb98 */
  if (ARC_COND(c, 2)) goto L_ceb98;
  /* ceb88: mov x8, x23 */
  ARC_X_W(c, 8, ARC_X_R(c, 23));
  /* ceb8c: ldr d1, [x8], #8 */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 8)));
  ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(8));
  /* ceb90: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* ceb94: b.pl #0xceb7c */
  if (ARC_COND(c, 5)) goto L_ceb7c;
L_ceb98:;
  /* ceb98: cmp x23, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 20));
  /* ceb9c: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* ceba0: b.hs #0xcebb4 */
  if (ARC_COND(c, 2)) goto L_cebb4;
  /* ceba4: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
L_ceba8:;
  /* ceba8: ldr d1, [x8, #-8]! */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 8) + INT64_C(-8))));
  ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-8));
  /* cebac: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* cebb0: b.mi #0xceba8 */
  if (ARC_COND(c, 4)) goto L_ceba8;
L_cebb4:;
  /* cebb4: cmp x23, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* cebb8: b.hs #0xcebec */
  if (ARC_COND(c, 2)) goto L_cebec;
  /* cebbc: ldr d1, [x23] */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 23)));
  /* cebc0: ldr d2, [x8] */
  arc_du_w(c, 2, arc_ld64(ARC_X_R(c, 8)));
L_cebc4:;
  /* cebc4: str d2, [x23] */
  arc_st64(ARC_X_R(c, 23), (c)->q[2].u64[0]);
  /* cebc8: str d1, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[1].u64[0]);
L_cebcc:;
  /* cebcc: ldr d1, [x23, #8]! */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(8));
  /* cebd0: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* cebd4: b.pl #0xcebcc */
  if (ARC_COND(c, 5)) goto L_cebcc;
L_cebd8:;
  /* cebd8: ldr d2, [x8, #-8]! */
  arc_du_w(c, 2, arc_ld64((ARC_X_R(c, 8) + INT64_C(-8))));
  ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-8));
  /* cebdc: fcmp d0, d2 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 2)));
  /* cebe0: b.mi #0xcebd8 */
  if (ARC_COND(c, 4)) goto L_cebd8;
  /* cebe4: cmp x23, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* cebe8: b.lo #0xcebc4 */
  if (ARC_COND(c, 3)) goto L_cebc4;
L_cebec:;
  /* cebec: sub x8, x23, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) - UINT64_C(8)));
  /* cebf0: cmp x19, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* cebf4: b.eq #0xcec00 */
  if (ARC_COND(c, 0)) goto L_cec00;
  /* cebf8: ldr d1, [x8] */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 8)));
  /* cebfc: str d1, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[1].u64[0]);
L_cec00:;
  /* cec00: stur wzr, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 31));
  /* cec04: str d0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  /* cec08: b #0xce40c */
  goto L_ce40c;
L_cec0c:;
  /* cec0c: ldr q17, [sp] */
  arc_q_w(c, 17, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* cec10: mov x20, x24 */
  ARC_X_W(c, 20, ARC_X_R(c, 24));
  /* cec14: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* cec18: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* cec1c: mov x0, #-0x200 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551104));
  /* cec20: mov x26, #-1 */
  ARC_X_W(c, 26, UINT64_C(18446744073709551615));
  /* cec24: tbz w25, #0, #0xce408 */
  if (((ARC_W_R(c, 25)) >> 0 & 1) == 0) goto L_ce408;
  /* cec28: b #0xcedc0 */
  goto L_cedc0;
L_cec2c:;
  /* cec2c: ldp d0, d1, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_du_w(c, 0, arc_ld64(_pa));
    arc_du_w(c, 1, arc_ld64((_pa + 8)));
  }
  /* cec30: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* cec34: fcsel d2, d0, d1, pl */
  arc_d_w(c, 2, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 1))));
  /* cec38: fcsel d0, d1, d0, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 1) : ARC_D_R(c, 0))));
  /* cec3c: stp d0, d2, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64((_pa + 8), (c)->q[2].u64[0]);
  }
  /* cec40: ldr d0, [x19, #0x18] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* cec44: ldur d1, [x20, #-8] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* cec48: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* cec4c: fcsel d2, d0, d1, pl */
  arc_d_w(c, 2, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 1))));
  /* cec50: fcsel d0, d1, d0, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 1) : ARC_D_R(c, 0))));
  /* cec54: stur d2, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), (c)->q[2].u64[0]);
  /* cec58: str d0, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), (c)->q[0].u64[0]);
  /* cec5c: ldr d1, [x19, #0x10] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* cec60: ldur d0, [x20, #-8] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* cec64: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* cec68: fcsel d2, d0, d1, pl */
  arc_d_w(c, 2, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 1))));
  /* cec6c: fcsel d0, d1, d0, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 1) : ARC_D_R(c, 0))));
  /* cec70: stur d2, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), (c)->q[2].u64[0]);
  /* cec74: ldp d2, d1, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_du_w(c, 2, arc_ld64(_pa));
    arc_du_w(c, 1, arc_ld64((_pa + 8)));
  }
  /* cec78: ldr d3, [x19, #8] */
  arc_du_w(c, 3, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* cec7c: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* cec80: fcsel d2, d1, d2, pl */
  arc_d_w(c, 2, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 1) : ARC_D_R(c, 2))));
  /* cec84: fcsel d0, d0, d1, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 1))));
  /* cec88: stp d2, d0, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, (c)->q[2].u64[0]);
    arc_st64((_pa + 8), (c)->q[0].u64[0]);
  }
  /* cec8c: ldur d0, [x20, #-8] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* cec90: fcmp d3, d0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 3)), (double)(ARC_D_R(c, 0)));
  /* cec94: fcsel d1, d3, d0, pl */
  arc_d_w(c, 1, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 3) : ARC_D_R(c, 0))));
  /* cec98: fcsel d0, d0, d3, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 3))));
  /* cec9c: stur d1, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), (c)->q[1].u64[0]);
  /* ceca0: ldp d3, d2, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_du_w(c, 3, arc_ld64(_pa));
    arc_du_w(c, 2, arc_ld64((_pa + 8)));
  }
  /* ceca4: ldr d1, [x19] */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 19)));
  /* ceca8: fcmp d2, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 2)), (double)(ARC_D_R(c, 1)));
  /* cecac: fcsel d4, d1, d2, pl */
  arc_d_w(c, 4, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 1) : ARC_D_R(c, 2))));
  /* cecb0: fcsel d2, d2, d1, pl */
  arc_d_w(c, 2, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 2) : ARC_D_R(c, 1))));
  /* cecb4: fcmp d4, d3 */
  arc_fcmp(c, (double)(ARC_D_R(c, 4)), (double)(ARC_D_R(c, 3)));
  /* cecb8: fcsel d1, d3, d1, pl */
  arc_d_w(c, 1, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 3) : ARC_D_R(c, 1))));
  /* cecbc: fcsel d3, d4, d3, pl */
  arc_d_w(c, 3, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 4) : ARC_D_R(c, 3))));
  /* cecc0: fcmp d2, d0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 2)), (double)(ARC_D_R(c, 0)));
  /* cecc4: fcsel d4, d0, d2, pl */
  arc_d_w(c, 4, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 2))));
  /* cecc8: fcsel d2, d2, d0, pl */
  arc_d_w(c, 2, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 2) : ARC_D_R(c, 0))));
  /* ceccc: fcmp d4, d3 */
  arc_fcmp(c, (double)(ARC_D_R(c, 4)), (double)(ARC_D_R(c, 3)));
  /* cecd0: fcsel d0, d3, d0, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 3) : ARC_D_R(c, 0))));
  /* cecd4: fcsel d3, d4, d3, pl */
  arc_d_w(c, 3, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 4) : ARC_D_R(c, 3))));
  /* cecd8: stp d1, d0, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64((_pa + 8), (c)->q[0].u64[0]);
  }
  /* cecdc: stp d3, d2, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, (c)->q[3].u64[0]);
    arc_st64((_pa + 8), (c)->q[2].u64[0]);
  }
  /* cece0: b #0xcedc0 */
  goto L_cedc0;
L_cece4:;
  /* cece4: ldur d0, [x20, #-8] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* cece8: ldr d1, [x19] */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 19)));
  /* cecec: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* cecf0: b.pl #0xcedc0 */
  if (ARC_COND(c, 5)) goto L_cedc0;
  /* cecf4: str d0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  /* cecf8: stur d1, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), (c)->q[1].u64[0]);
  /* cecfc: b #0xcedc0 */
  goto L_cedc0;
L_ced00:;
  /* ced00: ldr d0, [x19, #8] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* ced04: ldur d1, [x20, #-8] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* ced08: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* ced0c: fcsel d2, d0, d1, pl */
  arc_d_w(c, 2, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 1))));
  /* ced10: fcsel d0, d1, d0, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 1) : ARC_D_R(c, 0))));
  /* ced14: stur d2, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), (c)->q[2].u64[0]);
  /* ced18: str d0, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), (c)->q[0].u64[0]);
  /* ced1c: ldr d1, [x19] */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 19)));
  /* ced20: ldur d0, [x20, #-8] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* ced24: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* ced28: fcsel d2, d0, d1, pl */
  arc_d_w(c, 2, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 1))));
  /* ced2c: fcsel d0, d1, d0, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 1) : ARC_D_R(c, 0))));
  /* ced30: stur d2, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), (c)->q[2].u64[0]);
  /* ced34: ldp d2, d1, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_du_w(c, 2, arc_ld64(_pa));
    arc_du_w(c, 1, arc_ld64((_pa + 8)));
  }
  /* ced38: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* ced3c: fcsel d2, d1, d2, pl */
  arc_d_w(c, 2, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 1) : ARC_D_R(c, 2))));
  /* ced40: fcsel d0, d0, d1, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 1))));
  /* ced44: str d2, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[2].u64[0]);
  /* ced48: b #0xcedbc */
  goto L_cedbc;
L_ced4c:;
  /* ced4c: ldp d2, d0, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    arc_du_w(c, 2, arc_ld64(_pa));
    arc_du_w(c, 0, arc_ld64((_pa + 8)));
  }
  /* ced50: ldr d1, [x19] */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 19)));
  /* ced54: fcmp d1, d0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 1)), (double)(ARC_D_R(c, 0)));
  /* ced58: fcsel d3, d1, d0, pl */
  arc_d_w(c, 3, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 1) : ARC_D_R(c, 0))));
  /* ced5c: fcsel d0, d0, d1, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 1))));
  /* ced60: str d3, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), (c)->q[3].u64[0]);
  /* ced64: str d0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  /* ced68: ldur d0, [x20, #-8] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* ced6c: fcmp d2, d0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 2)), (double)(ARC_D_R(c, 0)));
  /* ced70: fcsel d1, d2, d0, pl */
  arc_d_w(c, 1, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 2) : ARC_D_R(c, 0))));
  /* ced74: fcsel d0, d0, d2, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 2))));
  /* ced78: stur d1, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), (c)->q[1].u64[0]);
  /* ced7c: ldr d1, [x19] */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 19)));
  /* ced80: fcmp d1, d0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 1)), (double)(ARC_D_R(c, 0)));
  /* ced84: fcsel d2, d1, d0, pl */
  arc_d_w(c, 2, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 1) : ARC_D_R(c, 0))));
  /* ced88: fcsel d0, d0, d1, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 1))));
  /* ced8c: stp d0, d2, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64((_pa + 8), (c)->q[2].u64[0]);
  }
  /* ced90: ldr d0, [x19, #0x10] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* ced94: ldur d1, [x20, #-8] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* ced98: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* ced9c: fcsel d2, d0, d1, pl */
  arc_d_w(c, 2, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 1))));
  /* ceda0: fcsel d0, d1, d0, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 1) : ARC_D_R(c, 0))));
  /* ceda4: stur d2, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), (c)->q[2].u64[0]);
  /* ceda8: ldr d1, [x19, #8] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* cedac: fcmp d1, d0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 1)), (double)(ARC_D_R(c, 0)));
  /* cedb0: fcsel d2, d1, d0, pl */
  arc_d_w(c, 2, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 1) : ARC_D_R(c, 0))));
  /* cedb4: fcsel d0, d0, d1, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 1))));
  /* cedb8: str d2, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), (c)->q[2].u64[0]);
L_cedbc:;
  /* cedbc: str d0, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), (c)->q[0].u64[0]);
L_cedc0:;
  /* cedc0: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* cedc4: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* cedc8: ldp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* cedcc: ldp x26, x25, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* cedd0: ldp x28, x27, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* cedd4: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* cedd8: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* ceddc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* cede0: ret  */
  return;
L_cede4:;
  /* cede4: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* cede8: add x9, x19, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* cedec: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* cedf0: ccmp x9, x20, #4, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20)); }
  else { (c)->nf = 0; (c)->zf = 1;
          (c)->cf = 0; (c)->vf = 0; }
  /* cedf4: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* cedf8: tbz w10, #0, #0xcf020 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) == 0) goto L_cf020;
  /* cedfc: tbnz w8, #0, #0xcedc0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_cedc0;
  /* cee00: mov w8, #8 */
  ARC_W_W(c, 8, UINT64_C(8));
  /* cee04: mov x10, x19 */
  ARC_X_W(c, 10, ARC_X_R(c, 19));
  /* cee08: b #0xcee24 */
  goto L_cee24;
L_cee0c:;
  /* cee0c: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
L_cee10:;
  /* cee10: str d0, [x9] */
  arc_st64(ARC_X_R(c, 9), (c)->q[0].u64[0]);
L_cee14:;
  /* cee14: add x9, x10, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(8)));
  /* cee18: add x8, x8, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* cee1c: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* cee20: b.eq #0xcedc0 */
  if (ARC_COND(c, 0)) goto L_cedc0;
L_cee24:;
  /* cee24: ldp d1, d0, [x10] */
  { const uint64_t _pa = ARC_X_R(c, 10);
    arc_du_w(c, 1, arc_ld64(_pa));
    arc_du_w(c, 0, arc_ld64((_pa + 8)));
  }
  /* cee28: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* cee2c: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* cee30: b.pl #0xcee14 */
  if (ARC_COND(c, 5)) goto L_cee14;
  /* cee34: mov x9, x8 */
  ARC_X_W(c, 9, ARC_X_R(c, 8));
L_cee38:;
  /* cee38: subs x11, x9, #8 */
  ARC_X_W(c, 11, arc_sub64(c, ARC_X_R(c, 9), UINT64_C(8)));
  /* cee3c: str d1, [x19, x9] */
  arc_st64((ARC_X_R(c, 19) + ARC_X_R(c, 9)), (c)->q[1].u64[0]);
  /* cee40: b.eq #0xcee0c */
  if (ARC_COND(c, 0)) goto L_cee0c;
  /* cee44: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* cee48: ldur d1, [x9, #-0x10] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 9) + INT64_C(-16))));
  /* cee4c: mov x9, x11 */
  ARC_X_W(c, 9, ARC_X_R(c, 11));
  /* cee50: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* cee54: b.mi #0xcee38 */
  if (ARC_COND(c, 4)) goto L_cee38;
  /* cee58: add x9, x19, x11 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 11)));
  /* cee5c: b #0xcee10 */
  goto L_cee10;
L_cee60:;
  /* cee60: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* cee64: b.eq #0xcedc0 */
  if (ARC_COND(c, 0)) goto L_cedc0;
  /* cee68: lsr x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* cee6c: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* cee70: b #0xcee84 */
  goto L_cee84;
L_cee74:;
  /* cee74: str d0, [x13] */
  arc_st64(ARC_X_R(c, 13), (c)->q[0].u64[0]);
L_cee78:;
  /* cee78: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* cee7c: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* cee80: b.le #0xcef48 */
  if (ARC_COND(c, 13)) goto L_cef48;
L_cee84:;
  /* cee84: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* cee88: b.lo #0xcee78 */
  if (ARC_COND(c, 3)) goto L_cee78;
  /* cee8c: mov w11, #1 */
  ARC_W_W(c, 11, UINT64_C(1));
  /* cee90: lsl x12, x10, #1 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* cee94: bfi x11, x10, #1, #0x3e */
  ARC_X_W(c, 11, (((uint64_t)(ARC_X_R(c, 11)) & UINT64_C(9223372036854775809)) | ((((uint64_t)(ARC_X_R(c, 10))) & UINT64_C(4611686018427387903)) << 1)));
  /* cee98: add x13, x12, #2 */
  ARC_X_W(c, 13, (ARC_X_R(c, 12) + UINT64_C(2)));
  /* cee9c: add x12, x19, x11, lsl #3 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 11)) << 3)));
  /* ceea0: cmp x13, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 8));
  /* ceea4: b.ge #0xceec4 */
  if (ARC_COND(c, 10)) goto L_ceec4;
  /* ceea8: mov x14, x12 */
  ARC_X_W(c, 14, ARC_X_R(c, 12));
  /* ceeac: ldr d1, [x12] */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 12)));
  /* ceeb0: ldr d0, [x14, #8]! */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 14) + INT64_C(8))));
  ARC_X_W(c, 14, ARC_X_R(c, 14) + INT64_C(8));
  /* ceeb4: fcmp d1, d0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 1)), (double)(ARC_D_R(c, 0)));
  /* ceeb8: b.pl #0xceec4 */
  if (ARC_COND(c, 5)) goto L_ceec4;
  /* ceebc: mov x12, x14 */
  ARC_X_W(c, 12, ARC_X_R(c, 14));
  /* ceec0: mov x11, x13 */
  ARC_X_W(c, 11, ARC_X_R(c, 13));
L_ceec4:;
  /* ceec4: add x13, x19, x10, lsl #3 */
  ARC_X_W(c, 13, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 10)) << 3)));
  /* ceec8: ldr d1, [x12] */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 12)));
  /* ceecc: ldr d0, [x13] */
  arc_du_w(c, 0, arc_ld64(ARC_X_R(c, 13)));
  /* ceed0: fcmp d1, d0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 1)), (double)(ARC_D_R(c, 0)));
  /* ceed4: b.pl #0xceee8 */
  if (ARC_COND(c, 5)) goto L_ceee8;
  /* ceed8: b #0xcee78 */
  goto L_cee78;
L_ceedc:;
  /* ceedc: ldr d1, [x12] */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 12)));
  /* ceee0: fcmp d1, d0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 1)), (double)(ARC_D_R(c, 0)));
  /* ceee4: b.mi #0xcee74 */
  if (ARC_COND(c, 4)) goto L_cee74;
L_ceee8:;
  /* ceee8: cmp x9, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 11));
  /* ceeec: str d1, [x13] */
  arc_st64(ARC_X_R(c, 13), (c)->q[1].u64[0]);
  /* ceef0: mov x13, x12 */
  ARC_X_W(c, 13, ARC_X_R(c, 12));
  /* ceef4: b.lt #0xcee74 */
  if (ARC_COND(c, 11)) goto L_cee74;
  /* ceef8: mov w15, #1 */
  ARC_W_W(c, 15, UINT64_C(1));
  /* ceefc: lsl x12, x11, #1 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 11)) << ((UINT64_C(1)) & 63)));
  /* cef00: bfi x15, x11, #1, #0x3e */
  ARC_X_W(c, 15, (((uint64_t)(ARC_X_R(c, 15)) & UINT64_C(9223372036854775809)) | ((((uint64_t)(ARC_X_R(c, 11))) & UINT64_C(4611686018427387903)) << 1)));
  /* cef04: add x14, x12, #2 */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) + UINT64_C(2)));
  /* cef08: add x12, x19, x15, lsl #3 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 15)) << 3)));
  /* cef0c: cmp x14, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 8));
  /* cef10: mov x11, x15 */
  ARC_X_W(c, 11, ARC_X_R(c, 15));
  /* cef14: b.ge #0xceedc */
  if (ARC_COND(c, 10)) goto L_ceedc;
  /* cef18: mov x15, x12 */
  ARC_X_W(c, 15, ARC_X_R(c, 12));
  /* cef1c: ldr d2, [x12] */
  arc_du_w(c, 2, arc_ld64(ARC_X_R(c, 12)));
  /* cef20: ldr d1, [x15, #8]! */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 15) + INT64_C(8))));
  ARC_X_W(c, 15, ARC_X_R(c, 15) + INT64_C(8));
  /* cef24: fcmp d2, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 2)), (double)(ARC_D_R(c, 1)));
  /* cef28: b.pl #0xceedc */
  if (ARC_COND(c, 5)) goto L_ceedc;
  /* cef2c: mov x12, x15 */
  ARC_X_W(c, 12, ARC_X_R(c, 15));
  /* cef30: mov x11, x14 */
  ARC_X_W(c, 11, ARC_X_R(c, 14));
  /* cef34: b #0xceedc */
  goto L_ceedc;
L_cef38:;
  /* cef38: str d0, [x9] */
  arc_st64(ARC_X_R(c, 9), (c)->q[0].u64[0]);
L_cef3c:;
  /* cef3c: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* cef40: sub x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* cef44: b.le #0xcedc0 */
  if (ARC_COND(c, 13)) goto L_cedc0;
L_cef48:;
  /* cef48: sub x9, x8, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(2)));
  /* cef4c: ldr d0, [x19] */
  arc_du_w(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* cef50: mov x12, xzr */
  ARC_X_W(c, 12, ARC_X_R(c, 31));
  /* cef54: lsr x10, x9, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* cef58: mov x11, x19 */
  ARC_X_W(c, 11, ARC_X_R(c, 19));
  /* cef5c: b #0xcef88 */
  goto L_cef88;
L_cef60:;
  /* cef60: ldr d1, [x14, #0x10]! */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 14) + INT64_C(16))));
  ARC_X_W(c, 14, ARC_X_R(c, 14) + INT64_C(16));
  /* cef64: ldur d2, [x14, #-8] */
  arc_du_w(c, 2, arc_ld64((ARC_X_R(c, 14) + INT64_C(-8))));
  /* cef68: fcmp d2, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 2)), (double)(ARC_D_R(c, 1)));
  /* cef6c: csel x9, x9, x14, pl */
  ARC_X_W(c, 9, (ARC_COND(c, 5) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 14)));
  /* cef70: csel x12, x13, x15, pl */
  ARC_X_W(c, 12, (ARC_COND(c, 5) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 15)));
L_cef74:;
  /* cef74: ldr d1, [x9] */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 9)));
  /* cef78: cmp x12, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 10));
  /* cef7c: str d1, [x11] */
  arc_st64(ARC_X_R(c, 11), (c)->q[1].u64[0]);
  /* cef80: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
  /* cef84: b.gt #0xcefb0 */
  if (ARC_COND(c, 12)) goto L_cefb0;
L_cef88:;
  /* cef88: lsl x9, x12, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 12)) << ((UINT64_C(1)) & 63)));
  /* cef8c: add x14, x11, x12, lsl #3 */
  ARC_X_W(c, 14, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 12)) << 3)));
  /* cef90: mov w13, #1 */
  ARC_W_W(c, 13, UINT64_C(1));
  /* cef94: bfi x13, x12, #1, #0x3f */
  ARC_X_W(c, 13, (((uint64_t)(ARC_X_R(c, 13)) & UINT64_C(1)) | ((((uint64_t)(ARC_X_R(c, 12))) & UINT64_C(9223372036854775807)) << 1)));
  /* cef98: add x15, x9, #2 */
  ARC_X_W(c, 15, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* cef9c: add x9, x14, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 14) + UINT64_C(8)));
  /* cefa0: cmp x15, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 8));
  /* cefa4: b.lt #0xcef60 */
  if (ARC_COND(c, 11)) goto L_cef60;
  /* cefa8: mov x12, x13 */
  ARC_X_W(c, 12, ARC_X_R(c, 13));
  /* cefac: b #0xcef74 */
  goto L_cef74;
L_cefb0:;
  /* cefb0: sub x20, x20, #8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) - UINT64_C(8)));
  /* cefb4: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* cefb8: b.eq #0xcef38 */
  if (ARC_COND(c, 0)) goto L_cef38;
  /* cefbc: sub x10, x9, x19 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) - ARC_X_R(c, 19)));
  /* cefc0: ldr d1, [x20] */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 20)));
  /* cefc4: add x10, x10, #8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(8)));
  /* cefc8: asr x10, x10, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(3)) & 63))));
  /* cefcc: str d1, [x9] */
  arc_st64(ARC_X_R(c, 9), (c)->q[1].u64[0]);
  /* cefd0: str d0, [x20] */
  arc_st64(ARC_X_R(c, 20), (c)->q[0].u64[0]);
  /* cefd4: subs x10, x10, #2 */
  ARC_X_W(c, 10, arc_sub64(c, ARC_X_R(c, 10), UINT64_C(2)));
  /* cefd8: b.lt #0xcef3c */
  if (ARC_COND(c, 11)) goto L_cef3c;
  /* cefdc: lsr x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* cefe0: ldr d0, [x9] */
  arc_du_w(c, 0, arc_ld64(ARC_X_R(c, 9)));
  /* cefe4: add x11, x19, x10, lsl #3 */
  ARC_X_W(c, 11, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 10)) << 3)));
  /* cefe8: ldr d1, [x11] */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 11)));
  /* cefec: fcmp d1, d0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 1)), (double)(ARC_D_R(c, 0)));
  /* ceff0: b.pl #0xcef3c */
  if (ARC_COND(c, 5)) goto L_cef3c;
L_ceff4:;
  /* ceff4: mov x12, x9 */
  ARC_X_W(c, 12, ARC_X_R(c, 9));
  /* ceff8: mov x9, x11 */
  ARC_X_W(c, 9, ARC_X_R(c, 11));
  /* ceffc: str d1, [x12] */
  arc_st64(ARC_X_R(c, 12), (c)->q[1].u64[0]);
  /* cf000: cbz x10, #0xcef38 */
  if ((ARC_X_R(c, 10)) == 0) goto L_cef38;
  /* cf004: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* cf008: lsr x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* cf00c: add x11, x19, x10, lsl #3 */
  ARC_X_W(c, 11, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 10)) << 3)));
  /* cf010: ldr d1, [x11] */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 11)));
  /* cf014: fcmp d1, d0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 1)), (double)(ARC_D_R(c, 0)));
  /* cf018: b.mi #0xceff4 */
  if (ARC_COND(c, 4)) goto L_ceff4;
  /* cf01c: b #0xcef38 */
  goto L_cef38;
L_cf020:;
  /* cf020: tbz w8, #0, #0xcf034 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_cf034;
  /* cf024: b #0xcedc0 */
  goto L_cedc0;
L_cf028:;
  /* cf028: add x9, x19, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* cf02c: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* cf030: b.eq #0xcedc0 */
  if (ARC_COND(c, 0)) goto L_cedc0;
L_cf034:;
  /* cf034: ldp d1, d0, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_du_w(c, 1, arc_ld64(_pa));
    arc_du_w(c, 0, arc_ld64((_pa + 8)));
  }
  /* cf038: mov x19, x9 */
  ARC_X_W(c, 19, ARC_X_R(c, 9));
  /* cf03c: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* cf040: b.pl #0xcf028 */
  if (ARC_COND(c, 5)) goto L_cf028;
  /* cf044: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
L_cf048:;
  /* cf048: str d1, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[1].u64[0]);
  /* cf04c: ldur d1, [x8, #-0x10] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 8) + INT64_C(-16))));
  /* cf050: sub x8, x8, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(8)));
  /* cf054: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* cf058: b.mi #0xcf048 */
  if (ARC_COND(c, 4)) goto L_cf048;
  /* cf05c: str d0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  /* cf060: b #0xcf028 */
  goto L_cf028;
}

void fn1_d768c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038810252));
  /* d768c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d7690: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d7694: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d7698: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* d769c: nop  */
  /* nop: no architectural effect here */
  /* d76a0: adr x0, #0x156bb8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1403832)));
  /* d76a4: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* d76a8: bl #0x144ac8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(882348));
  fn1_144ac8(c);
  /* d76ac: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* d76b0: cbz x8, #0xd76f8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_d76f8;
  /* d76b4: mov x10, #0x2b2b */
  ARC_X_W(c, 10, UINT64_C(11051));
  /* d76b8: ldr x9, [x8, #0x60] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(96))));
  /* d76bc: movk x10, #0x4743, lsl #16 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1195573248)));
  /* d76c0: movk x10, #0x4c4e, lsl #32 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446462603027808255)) | UINT64_C(83897891160064)));
  /* d76c4: movk x10, #0x43, lsl #48 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(281474976710655)) | UINT64_C(18858823439613952)));
  /* d76c8: cmp x10, x9, lsr #8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ((uint64_t)(ARC_X_R(c, 9)) >> 8));
  /* d76cc: b.ne #0xd76f8 */
  if (ARC_COND(c, 1)) goto L_d76f8;
  /* d76d0: and x9, x9, #0xff */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(255)));
  /* d76d4: cmp x9, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(1));
  /* d76d8: b.ne #0xd76e4 */
  if (ARC_COND(c, 1)) goto L_d76e4;
  /* d76dc: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* d76e0: sub x8, x8, #0x80 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(128)));
L_d76e4:;
  /* d76e4: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* d76e8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d76ec: add x20, x8, #0x80 */
  ARC_X_W(c, 20, (ARC_X_R(c, 8) + UINT64_C(128)));
  /* d76f0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(882420));
  fn1_bd950(c);
  /* d76f4: b #0xd76fc */
  goto L_d76fc;
L_d76f8:;
  /* d76f8: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
L_d76fc:;
  /* d76fc: str x20, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* d7700: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d7704: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d7708: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d770c: ret  */
  return;
}

void fn1_db534(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038826292));
  /* db534: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* db538: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* db53c: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* db540: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* db544: add x8, x0, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(8)));
  /* db548: ldar x20, [x8] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 8)));
  /* db54c: cmn x20, #1 */
  (void)arc_add64(c, ARC_X_R(c, 20), UINT64_C(1), 0);
  /* db550: b.eq #0xdb57c */
  if (ARC_COND(c, 0)) goto L_db57c;
  /* db554: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_db558:;
  /* db558: add x1, x20, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(1)));
  /* db55c: add x2, x19, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* db560: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* db564: bl #0xdb310 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(898408));
  fn1_db310(c);
  /* db568: cmp x0, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 20));
  /* db56c: b.eq #0xdb580 */
  if (ARC_COND(c, 0)) goto L_db580;
  /* db570: cmn x0, #1 */
  (void)arc_add64(c, ARC_X_R(c, 0), UINT64_C(1), 0);
  /* db574: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* db578: b.ne #0xdb558 */
  if (ARC_COND(c, 1)) goto L_db558;
L_db57c:;
  /* db57c: mov x19, xzr */
  ARC_X_W(c, 19, ARC_X_R(c, 31));
L_db580:;
  /* db580: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* db584: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* db588: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* db58c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* db590: ret  */
  return;
}

void fn1_df7d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038843352));
  /* df7d8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* df7dc: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* df7e0: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* df7e4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* df7e8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* df7ec: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* df7f0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* df7f4: ldr x8, [x8, #0x908] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2312))));
  /* df7f8: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* df7fc: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* df800: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* df804: ldr x9, [x1, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* df808: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* df80c: csinc x20, x9, x1, ne */
  ARC_X_W(c, 20, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 1)) + 1)));
  /* df810: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* df814: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(915480));
  fn1_142860(c);
  /* df818: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* df81c: add x0, x0, #0x19 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(25)));
  /* df820: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(915492));
  fn1_1428f0(c);
  /* df824: add x22, x0, #0x18 */
  ARC_X_W(c, 22, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* df828: stp x21, x21, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* df82c: add x2, x21, #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* df830: str wzr, [x0, #0x10] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(16)), ARC_W_R(c, 31));
  /* df834: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* df838: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* df83c: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(915520));
  fn1_1449d8(c);
  /* df840: str x22, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 22));
  /* df844: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* df848: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* df84c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* df850: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* df854: ret  */
  return;
}

void fn1_e21d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038854104));
  /* e21d8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e21dc: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e21e0: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e21e4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e21e8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e21ec: mov x8, #0x3ffffffffffffff8 */
  ARC_X_W(c, 8, UINT64_C(4611686018427387896));
  /* e21f0: cmp x3, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 3), ARC_X_R(c, 8));
  /* e21f4: b.hs #0xe2270 */
  if (ARC_COND(c, 2)) goto L_e2270;
  /* e21f8: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* e21fc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e2200: cmp x3, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 3), UINT64_C(4));
  /* e2204: b.hi #0xe2218 */
  if (ARC_COND(c, 8)) goto L_e2218;
  /* e2208: lsl w8, w19, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 19)) << ((UINT64_C(1)) & 31)));
  /* e220c: strb w8, [x20], #4 */
  { const uint64_t _a = ARC_X_R(c, 20);
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* e2210: cbnz x19, #0xe224c */
  if ((ARC_X_R(c, 19)) != 0) goto L_e224c;
  /* e2214: b #0xe2258 */
  goto L_e2258;
L_e2218:;
  /* e2218: orr x8, x3, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) | UINT64_C(1)));
  /* e221c: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* e2220: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* e2224: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* e2228: csinc x22, x9, x8, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* e222c: lsl x0, x22, #2 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 22)) << ((UINT64_C(2)) & 63)));
  /* e2230: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(926260));
  fn1_1428f0(c);
  /* e2234: orr x8, x22, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) | UINT64_C(1)));
  /* e2238: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* e223c: stp x19, x0, [x20, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* e2240: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* e2244: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e2248: cbz x19, #0xe2258 */
  if ((ARC_X_R(c, 19)) == 0) goto L_e2258;
L_e224c:;
  /* e224c: lsl x2, x19, #2 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 19)) << ((UINT64_C(2)) & 63)));
  /* e2250: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e2254: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(926296));
  fn1_1449f0(c);
L_e2258:;
  /* e2258: str wzr, [x20, x19, lsl #2] */
  arc_st32((ARC_X_R(c, 20) + ((uint64_t)(ARC_X_R(c, 19)) << 2)), ARC_W_R(c, 31));
  /* e225c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e2260: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e2264: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e2268: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e226c: ret  */
  return;
L_e2270:;
  /* e2270: bl #0xe2274 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(926324));
  fn1_e2274(c);
}

void fn1_e4ffc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038865916));
  /* e4ffc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e5000: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* e5004: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e5008: str x23, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 23));
  /* e500c: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e5010: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e5014: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* e5018: mov w8, #0xa */
  ARC_W_W(c, 8, UINT64_C(10));
  /* e501c: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* e5020: ldr x10, [x0, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e5024: strb w8, [sp] */
  arc_st8((c)->sp, ARC_W_R(c, 8));
  /* e5028: mov w8, #0x7473 */
  ARC_W_W(c, 8, UINT64_C(29811));
  /* e502c: mov w21, w2 */
  ARC_W_W(c, 21, ARC_W_R(c, 2));
  /* e5030: movk w8, #0x756f, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(1970208768)));
  /* e5034: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e5038: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* e503c: stur w8, [sp, #1] */
  arc_st32(((c)->sp + INT64_C(1)), ARC_W_R(c, 8));
  /* e5040: mov w8, #0x6c */
  ARC_W_W(c, 8, UINT64_C(108));
  /* e5044: sturh w8, [sp, #5] */
  arc_st16(((c)->sp + INT64_C(5)), ARC_W_R(c, 8));
  /* e5048: add x8, x0, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(4)));
  /* e504c: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* e5050: csel x20, x8, x10, eq */
  ARC_X_W(c, 20, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* e5054: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(938072));
  fn1_142a58(c);
  /* e5058: ldr w23, [x0] */
  ARC_W_W(c, 23, arc_ld32(ARC_X_R(c, 0)));
  /* e505c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* e5060: str wzr, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 31));
  /* e5064: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* e5068: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e506c: mov w2, w21 */
  ARC_W_W(c, 2, ARC_W_R(c, 21));
  /* e5070: bl #0x142f38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(938100));
  fn1_142f38(c);
  /* e5074: ldr w8, [x22] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 22)));
  /* e5078: str w23, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 23));
  /* e507c: cmp w8, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(34));
  /* e5080: b.eq #0xe50c8 */
  if (ARC_COND(c, 0)) goto L_e50c8;
  /* e5084: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* e5088: subs x8, x8, x20 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20)));
  /* e508c: b.eq #0xe510c */
  if (ARC_COND(c, 0)) goto L_e510c;
  /* e5090: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e5094: cbz x19, #0xe50a0 */
  if ((ARC_X_R(c, 19)) == 0) goto L_e50a0;
  /* e5098: asr x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* e509c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_e50a0:;
  /* e50a0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e50a4: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(938152));
  fn1_142e00(c);
  /* e50a8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e50ac: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e50b0: ldr x23, [sp, #0x40] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(64))));
  /* e50b4: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e50b8: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e50bc: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* e50c0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e50c4: ret  */
  return;
L_e50c8:;
  /* e50c8: mov w9, #0x7473 */
  ARC_W_W(c, 9, UINT64_C(29811));
  /* e50cc: mov w8, #0x26 */
  ARC_W_W(c, 8, UINT64_C(38));
  /* e50d0: str xzr, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 31));
  /* e50d4: movk w9, #0x756f, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1970208768)));
  /* e50d8: strb w8, [sp, #0x18] */
  arc_st8(((c)->sp + INT64_C(24)), ARC_W_R(c, 8));
  /* e50dc: mov w8, #0x6c */
  ARC_W_W(c, 8, UINT64_C(108));
  /* e50e0: stur w9, [sp, #0x19] */
  arc_st32(((c)->sp + INT64_C(25)), ARC_W_R(c, 9));
  /* e50e4: adrp x9, #0x51000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(331776)));
  /* e50e8: add x9, x9, #0xa7d */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2685)));
  /* e50ec: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* e50f0: strb w8, [sp, #0x1d] */
  arc_st8(((c)->sp + INT64_C(29)), ARC_W_R(c, 8));
  /* e50f4: ldur x8, [x9, #6] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(6))));
  /* e50f8: add x9, sp, #0x18 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(24)));
  /* e50fc: stur x10, [sp, #0x1e] */
  arc_st64(((c)->sp + INT64_C(30)), ARC_X_R(c, 10));
  /* e5100: stur x8, [sp, #0x24] */
  arc_st64(((c)->sp + INT64_C(36)), ARC_X_R(c, 8));
  /* e5104: orr x0, x9, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* e5108: bl #0xda038 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(938252));
  fn1_da038(c);
L_e510c:;
  /* e510c: mov w9, #0x7473 */
  ARC_W_W(c, 9, UINT64_C(29811));
  /* e5110: mov w8, #0x28 */
  ARC_W_W(c, 8, UINT64_C(40));
  /* e5114: str xzr, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 31));
  /* e5118: movk w9, #0x756f, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1970208768)));
  /* e511c: strb w8, [sp, #0x18] */
  arc_st8(((c)->sp + INT64_C(24)), ARC_W_R(c, 8));
  /* e5120: mov w8, #0x6c */
  ARC_W_W(c, 8, UINT64_C(108));
  /* e5124: stur w9, [sp, #0x19] */
  arc_st32(((c)->sp + INT64_C(25)), ARC_W_R(c, 9));
  /* e5128: adrp x9, #0x50000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(327680)));
  /* e512c: add x9, x9, #0x1dd */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(477)));
  /* e5130: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* e5134: strb w8, [sp, #0x1d] */
  arc_st8(((c)->sp + INT64_C(29)), ARC_W_R(c, 8));
  /* e5138: ldur x8, [x9, #7] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(7))));
  /* e513c: add x9, sp, #0x18 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(24)));
  /* e5140: stur x10, [sp, #0x1e] */
  arc_st64(((c)->sp + INT64_C(30)), ARC_X_R(c, 10));
  /* e5144: stur x8, [sp, #0x25] */
  arc_st64(((c)->sp + INT64_C(37)), ARC_X_R(c, 8));
  /* e5148: orr x0, x9, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* e514c: bl #0xe78a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(938320));
  fn1_e78a0(c);
  /* e5150: b #0xe5154 */
  goto L_e5154;
L_e5154:;
  /* e5154: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e5158: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e515c: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(938336));
  fn1_142e00(c);
  /* e5160: b #0xe5168 */
  goto L_e5168;
  /* e5164: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_e5168:;
  /* e5168: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e516c: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(938352));
  fn1_142e00(c);
  /* e5170: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e5174: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(938360));
  fn1_9cc20(c);
}

void fn1_e90e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038882532));
  /* e90e4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e90e8: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e90ec: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e90f0: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* e90f4: mov x8, #0x2d69 */
  ARC_X_W(c, 8, UINT64_C(11625));
  /* e90f8: lsr x10, x0, #0x20 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(32)) & 63)));
  /* e90fc: lsl w9, w1, #3 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 1)) << ((UINT64_C(3)) & 31)));
  /* e9100: movk x8, #0xeb38, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(3946315776)));
  /* e9104: movk x8, #0xea08, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(257320080637952)));
  /* e9108: add x9, x9, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(8)));
  /* e910c: movk x8, #0x9ddf, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(11375811183761162240)));
  /* e9110: eor x9, x9, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) ^ ARC_X_R(c, 10)));
  /* e9114: mul x9, x9, x8 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 8))));
  /* e9118: eor x10, x10, x9, lsr #47 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) ^ ((uint64_t)(ARC_X_R(c, 9)) >> 47)));
  /* e911c: eor x9, x10, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) ^ ARC_X_R(c, 9)));
  /* e9120: mul x8, x9, x8 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 8))));
  /* e9124: lsr x9, x8, #0x2f */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(47)) & 63)));
  /* e9128: eor w8, w9, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) ^ ARC_W_R(c, 8)));
  /* e912c: mov w9, #0x69 */
  ARC_W_W(c, 9, UINT64_C(105));
  /* e9130: mul w8, w8, w9 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 9))));
  /* e9134: nop  */
  /* nop: no architectural effect here */
  /* e9138: adr x9, #0x159240 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1413696)));
  /* e913c: and x8, x8, #0xff */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(255)));
  /* e9140: add x8, x9, x8, lsl #6 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 6)));
  /* e9144: ldar w8, [x8] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 8)));
  /* e9148: cbz w8, #0xe9168 */
  if ((ARC_W_R(c, 8)) == 0) goto L_e9168;
  /* e914c: mov w0, #0x62 */
  ARC_W_W(c, 0, UINT64_C(98));
  /* e9150: mov w2, #0x81 */
  ARC_W_W(c, 2, UINT64_C(129));
  /* e9154: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* e9158: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* e915c: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* e9160: mov w6, wzr */
  ARC_W_W(c, 6, ARC_W_R(c, 31));
  /* e9164: bl #0x142500 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(954728));
  fn1_142500(c);
L_e9168:;
  /* e9168: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e916c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e9170: ret  */
  return;
  /* e9174: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(954744));
  fn1_a1454(c);
}

void fn1_eb144(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038890820));
  /* eb144: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eb148: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eb14c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* eb150: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* eb154: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eb158: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* eb15c: bl #0x1430b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962912));
  fn1_1430b8(c);
  /* eb160: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* eb164: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eb168: bl #0x143238 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962924));
  fn1_143238(c);
  /* eb16c: cbz w0, #0xeb178 */
  if ((ARC_W_R(c, 0)) == 0) goto L_eb178;
  /* eb170: mov w21, wzr */
  ARC_W_W(c, 21, ARC_W_R(c, 31));
  /* eb174: b #0xeb1ac */
  goto L_eb1ac;
L_eb178:;
  /* eb178: ldr x8, [x19, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(88))));
  /* eb17c: cbz x8, #0xeb198 */
  if ((ARC_X_R(c, 8)) == 0) goto L_eb198;
  /* eb180: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* eb184: mov w21, wzr */
  ARC_W_W(c, 21, ARC_W_R(c, 31));
  /* eb188: b.eq #0xeb1a4 */
  if (ARC_COND(c, 0)) goto L_eb1a4;
  /* eb18c: ldr x9, [x19, #0x60] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(96))));
  /* eb190: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* eb194: b.ne #0xeb1a4 */
  if (ARC_COND(c, 1)) goto L_eb1a4;
L_eb198:;
  /* eb198: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* eb19c: mov w21, #1 */
  ARC_W_W(c, 21, UINT64_C(1));
  /* eb1a0: stp x8, x20, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
L_eb1a4:;
  /* eb1a4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eb1a8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962988));
  fn1_142560(c);
L_eb1ac:;
  /* eb1ac: mov w0, w21 */
  ARC_W_W(c, 0, ARC_W_R(c, 21));
  /* eb1b0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* eb1b4: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* eb1b8: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eb1bc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eb1c0: ret  */
  return;
  /* eb1c4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963016));
  fn1_a1454(c);
  /* eb1c8: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963020));
  fn1_a1454(c);
}

void fn1_ed0d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038898900));
  /* ed0d4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ed0d8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ed0dc: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* ed0e0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ed0e4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ed0e8: bl #0x1435e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(970988));
  fn1_1435e0(c);
  /* ed0ec: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ed0f0: mov w1, #0x40 */
  ARC_W_W(c, 1, UINT64_C(64));
  /* ed0f4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* ed0f8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ed0fc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ed100: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_ef944(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038909252));
  /* ef944: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ef948: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ef94c: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ef950: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ef954: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* ef958: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ef95c: bl #0x1434a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(981344));
  fn1_1434a8(c);
  /* ef960: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* ef964: b.eq #0xef96c */
  if (ARC_COND(c, 0)) goto L_ef96c;
  /* ef968: strb w0, [x20] */
  arc_st8(ARC_X_R(c, 20), ARC_W_R(c, 0));
L_ef96c:;
  /* ef96c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ef970: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ef974: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ef978: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ef97c: ret  */
  return;
}

void fn1_f3af8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038926072));
  /* f3af8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f3afc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f3b00: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* f3b04: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f3b08: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f3b0c: bl #0x143658 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(998160));
  fn1_143658(c);
  /* f3b10: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f3b14: mov w1, #0x40 */
  ARC_W_W(c, 1, UINT64_C(64));
  /* f3b18: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f3b1c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f3b20: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f3b24: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_f6378(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038936440));
  /* f6378: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f637c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f6380: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f6384: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f6388: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* f638c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f6390: bl #0x143520 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1008532));
  fn1_143520(c);
  /* f6394: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* f6398: b.eq #0xf63a0 */
  if (ARC_COND(c, 0)) goto L_f63a0;
  /* f639c: str w0, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 0));
L_f63a0:;
  /* f63a0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f63a4: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f63a8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f63ac: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f63b0: ret  */
  return;
}

void fn1_fb5c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038957512));
  /* fb5c8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fb5cc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fb5d0: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* fb5d4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fb5d8: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* fb5dc: ldr x9, [x1, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* fb5e0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fb5e4: add x0, x0, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* fb5e8: orr w2, w2, #8 */
  ARC_W_W(c, 2, (ARC_W_R(c, 2) | UINT64_C(8)));
  /* fb5ec: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* fb5f0: csinc x1, x9, x1, ne */
  ARC_X_W(c, 1, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 1)) + 1)));
  /* fb5f4: bl #0x143598 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1029624));
  fn1_143598(c);
  /* fb5f8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* fb5fc: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* fb600: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* fb604: cbz x0, #0xfb610 */
  if ((ARC_X_R(c, 0)) == 0) goto L_fb610;
  /* fb608: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* fb60c: b #0xfb618 */
  goto L_fb618;
L_fb610:;
  /* fb610: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* fb614: orr w9, w9, #4 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(4)));
L_fb618:;
  /* fb618: ldr x10, [x8, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* fb61c: ldr w11, [x8, #0x24] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 8) + INT64_C(36))));
  /* fb620: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* fb624: cset w10, eq */
  ARC_W_W(c, 10, (ARC_COND(c, 0) ? 1 : 0));
  /* fb628: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* fb62c: tst w9, w11 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & ARC_W_R(c, 11)));
  /* fb630: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* fb634: b.ne #0xfb648 */
  if (ARC_COND(c, 1)) goto L_fb648;
  /* fb638: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* fb63c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fb640: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fb644: ret  */
  return;
L_fb648:;
  /* fb648: nop  */
  /* nop: no architectural effect here */
  /* fb64c: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* fb650: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1029716));
  fn1_ec720(c);
}

void fn1_feb3c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038971196));
  /* feb3c: bti c */
  /* bti: no architectural effect here */
  /* feb40: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* feb44: b #0xfec70 */
  fn1_fec70(c); return;
}

void fn1_10ba08(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039024136));
  /* 10ba08: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 10ba0c: sub sp, sp, #0x130 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(304)));
  /* 10ba10: stp x29, x30, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 10ba14: stp x28, x23, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 10ba18: stp x22, x21, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 10ba1c: stp x20, x19, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 10ba20: add x29, sp, #0xf0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(240)));
  /* 10ba24: ldr w9, [x2, #8] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 2) + INT64_C(8))));
  /* 10ba28: mov w8, #0x25 */
  ARC_W_W(c, 8, UINT64_C(37));
  /* 10ba2c: sub x10, x29, #8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 10ba30: mov x22, x4 */
  ARC_X_W(c, 22, ARC_X_R(c, 4));
  /* 10ba34: mov w19, w3 */
  ARC_W_W(c, 19, ARC_W_R(c, 3));
  /* 10ba38: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 10ba3c: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 10ba40: stur x8, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 8));
  /* 10ba44: orr x8, x10, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) | UINT64_C(1)));
  /* 10ba48: tbz w9, #0xb, #0x10ba74 */
  if (((ARC_W_R(c, 9)) >> 11 & 1) == 0) goto L_10ba74;
  /* 10ba4c: mov w10, #0x4a */
  ARC_W_W(c, 10, UINT64_C(74));
  /* 10ba50: and w10, w9, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) & ARC_W_R(c, 10)));
  /* 10ba54: cmp w10, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(8));
  /* 10ba58: b.eq #0x10ba74 */
  if (ARC_COND(c, 0)) goto L_10ba74;
  /* 10ba5c: cmp w10, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(64));
  /* 10ba60: b.eq #0x10ba74 */
  if (ARC_COND(c, 0)) goto L_10ba74;
  /* 10ba64: sub x8, x29, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 10ba68: mov w10, #0x2b */
  ARC_W_W(c, 10, UINT64_C(43));
  /* 10ba6c: orr x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(2)));
  /* 10ba70: sturb w10, [x29, #-7] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-7)), ARC_W_R(c, 10));
L_10ba74:;
  /* 10ba74: tbz w9, #9, #0x10ba80 */
  if (((ARC_W_R(c, 9)) >> 9 & 1) == 0) goto L_10ba80;
  /* 10ba78: mov w10, #0x23 */
  ARC_W_W(c, 10, UINT64_C(35));
  /* 10ba7c: strb w10, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 10));
  }
L_10ba80:;
  /* 10ba80: mov w10, #0x4a */
  ARC_W_W(c, 10, UINT64_C(74));
  /* 10ba84: mov w11, #0x6c */
  ARC_W_W(c, 11, UINT64_C(108));
  /* 10ba88: and w10, w9, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) & ARC_W_R(c, 10)));
  /* 10ba8c: strb w11, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 11));
  /* 10ba90: cmp w10, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(64));
  /* 10ba94: b.eq #0x10bab4 */
  if (ARC_COND(c, 0)) goto L_10bab4;
  /* 10ba98: cmp w10, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(8));
  /* 10ba9c: b.ne #0x10babc */
  if (ARC_COND(c, 1)) goto L_10babc;
  /* 10baa0: tst w9, #0x4000 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(16384)));
  /* 10baa4: mov w9, #0x58 */
  ARC_W_W(c, 9, UINT64_C(88));
  /* 10baa8: mov w10, #0x78 */
  ARC_W_W(c, 10, UINT64_C(120));
  /* 10baac: csel w9, w10, w9, eq */
  ARC_W_W(c, 9, (ARC_COND(c, 0) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* 10bab0: b #0x10bac0 */
  goto L_10bac0;
L_10bab4:;
  /* 10bab4: mov w9, #0x6f */
  ARC_W_W(c, 9, UINT64_C(111));
  /* 10bab8: b #0x10bac0 */
  goto L_10bac0;
L_10babc:;
  /* 10babc: mov w9, #0x64 */
  ARC_W_W(c, 9, UINT64_C(100));
L_10bac0:;
  /* 10bac0: strb w9, [x8, #1] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(1)), ARC_W_R(c, 9));
  /* 10bac4: nop  */
  /* nop: no architectural effect here */
  /* 10bac8: adr x8, #0x15dc38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10bacc: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 10bad0: adrp x23, #0x15d000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 10bad4: tbz w8, #0, #0x10bbd0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10bbd0;
L_10bad8:;
  /* 10bad8: ldr x2, [x23, #0xc30] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 23) + INT64_C(3120))));
  /* 10badc: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 10bae0: sub x3, x29, #8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 10bae4: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* 10bae8: mov x4, x22 */
  ARC_X_W(c, 4, ARC_X_R(c, 22));
  /* 10baec: sub x22, x29, #0x20 */
  ARC_X_W(c, 22, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 10baf0: bl #0x136860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1096436));
  fn1_136860(c);
  /* 10baf4: ldr w8, [x20, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(8))));
  /* 10baf8: mov w9, #0xb0 */
  ARC_W_W(c, 9, UINT64_C(176));
  /* 10bafc: add x22, x22, w0, sxtw */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + ((uint64_t)(int64_t)(int32_t)(ARC_W_R(c, 0)))));
  /* 10bb00: and w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & ARC_W_R(c, 9)));
  /* 10bb04: mov x23, x22 */
  ARC_X_W(c, 23, ARC_X_R(c, 22));
  /* 10bb08: cmp w8, #0x20 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(32));
  /* 10bb0c: b.eq #0x10bb68 */
  if (ARC_COND(c, 0)) goto L_10bb68;
  /* 10bb10: cmp w8, #0x10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(16));
  /* 10bb14: b.ne #0x10bb64 */
  if (ARC_COND(c, 1)) goto L_10bb64;
  /* 10bb18: ldurb w8, [x29, #-0x20] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 10bb1c: cmp w8, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(45));
  /* 10bb20: b.eq #0x10bb2c */
  if (ARC_COND(c, 0)) goto L_10bb2c;
  /* 10bb24: cmp w8, #0x2b */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(43));
  /* 10bb28: b.ne #0x10bb38 */
  if (ARC_COND(c, 1)) goto L_10bb38;
L_10bb2c:;
  /* 10bb2c: sub x8, x29, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 10bb30: orr x23, x8, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 8) | UINT64_C(1)));
  /* 10bb34: b #0x10bb68 */
  goto L_10bb68;
L_10bb38:;
  /* 10bb38: cmp w0, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(2));
  /* 10bb3c: b.lt #0x10bb64 */
  if (ARC_COND(c, 11)) goto L_10bb64;
  /* 10bb40: cmp w8, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(48));
  /* 10bb44: b.ne #0x10bb64 */
  if (ARC_COND(c, 1)) goto L_10bb64;
  /* 10bb48: ldurb w8, [x29, #-0x1f] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-31))));
  /* 10bb4c: orr w8, w8, #0x20 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(32)));
  /* 10bb50: cmp w8, #0x78 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(120));
  /* 10bb54: b.ne #0x10bb64 */
  if (ARC_COND(c, 1)) goto L_10bb64;
  /* 10bb58: sub x8, x29, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 10bb5c: orr x23, x8, #2 */
  ARC_X_W(c, 23, (ARC_X_R(c, 8) | UINT64_C(2)));
  /* 10bb60: b #0x10bb68 */
  goto L_10bb68;
L_10bb64:;
  /* 10bb64: sub x23, x29, #0x20 */
  ARC_X_W(c, 23, (ARC_X_R(c, 29) - UINT64_C(32)));
L_10bb68:;
  /* 10bb68: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 10bb6c: add x1, x20, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(48)));
  /* 10bb70: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1096564));
  fn1_143460(c);
  /* 10bb74: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 10bb78: add x3, sp, #0x1c */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(28)));
  /* 10bb7c: add x4, sp, #0x10 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(16)));
  /* 10bb80: add x5, sp, #8 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(8)));
  /* 10bb84: mov x6, sp */
  ARC_X_W(c, 6, (c)->sp);
  /* 10bb88: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 10bb8c: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 10bb90: bl #0x143928 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1096596));
  fn1_143928(c);
  /* 10bb94: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 10bb98: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1096604));
  fn1_143478(c);
  /* 10bb9c: ldp x3, x2, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 3, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 10bba0: add x1, sp, #0x1c */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(28)));
  /* 10bba4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 10bba8: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* 10bbac: mov w5, w19 */
  ARC_W_W(c, 5, ARC_W_R(c, 19));
  /* 10bbb0: bl #0x10cdc0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1096628));
  fn1_10cdc0(c);
  /* 10bbb4: ldp x20, x19, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 10bbb8: ldp x22, x21, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 10bbbc: ldp x28, x23, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 10bbc0: ldp x29, x30, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 10bbc4: add sp, sp, #0x130 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(304)));
  /* 10bbc8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 10bbcc: ret  */
  return;
L_10bbd0:;
  /* 10bbd0: nop  */
  /* nop: no architectural effect here */
  /* 10bbd4: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10bbd8: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1096668));
  fn1_1424b8(c);
  /* 10bbdc: cbz w0, #0x10bad8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_10bad8;
  /* 10bbe0: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 10bbe4: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 10bbe8: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 10bbec: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 10bbf0: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1096692));
  fn1_1441e0(c);
  /* 10bbf4: str x0, [x23, #0xc30] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 10bbf8: nop  */
  /* nop: no architectural effect here */
  /* 10bbfc: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10bc00: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1096708));
  fn1_1424d0(c);
  /* 10bc04: b #0x10bad8 */
  goto L_10bad8;
  /* 10bc08: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10bc0c: nop  */
  /* nop: no architectural effect here */
  /* 10bc10: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10bc14: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1096728));
  fn1_1424e8(c);
  /* 10bc18: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10bc1c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1096736));
  fn1_9cc20(c);
  /* 10bc20: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10bc24: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 10bc28: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1096748));
  fn1_143478(c);
  /* 10bc2c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10bc30: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1096756));
  fn1_9cc20(c);
}

void fn1_1139f4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039056884));
  /* 1139f4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1139f8: sub sp, sp, #0x1d0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(464)));
  /* 1139fc: stp x29, x30, [sp, #0x1a0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(416));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 113a00: stp x28, x21, [sp, #0x1b0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(432));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 113a04: stp x20, x19, [sp, #0x1c0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(448));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 113a08: add x29, sp, #0x1a0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(416)));
  /* 113a0c: add x21, sp, #0x10 */
  ARC_X_W(c, 21, ((c)->sp + UINT64_C(16)));
  /* 113a10: mov x3, x4 */
  ARC_X_W(c, 3, ARC_X_R(c, 4));
  /* 113a14: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 113a18: add x8, x21, #0x190 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) + UINT64_C(400)));
  /* 113a1c: add x0, x0, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* 113a20: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 113a24: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 113a28: mov w4, w5 */
  ARC_W_W(c, 4, ARC_W_R(c, 5));
  /* 113a2c: mov w5, w6 */
  ARC_W_W(c, 5, ARC_W_R(c, 6));
  /* 113a30: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* 113a34: bl #0x1439e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1129016));
  fn1_1439e8(c);
  /* 113a38: ldr x20, [sp, #8] */
  ARC_X_W(c, 20, arc_ld64(((c)->sp + INT64_C(8))));
  /* 113a3c: cmp x21, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 20));
  /* 113a40: b.eq #0x113a94 */
  if (ARC_COND(c, 0)) goto L_113a94;
  /* 113a44: add x21, sp, #0x10 */
  ARC_X_W(c, 21, ((c)->sp + UINT64_C(16)));
  /* 113a48: b #0x113a68 */
  goto L_113a68;
L_113a4c:;
  /* 113a4c: str w1, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 1));
  }
  /* 113a50: str x8, [x19, #0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)), ARC_X_R(c, 8));
L_113a54:;
  /* 113a54: cmn w1, #1 */
  (void)arc_add32(c, ARC_W_R(c, 1), UINT64_C(1), 0);
  /* 113a58: csel x19, xzr, x19, eq */
  ARC_X_W(c, 19, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 19)));
L_113a5c:;
  /* 113a5c: add x21, x21, #4 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(4)));
  /* 113a60: cmp x21, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 20));
  /* 113a64: b.eq #0x113a94 */
  if (ARC_COND(c, 0)) goto L_113a94;
L_113a68:;
  /* 113a68: cbz x19, #0x113a5c */
  if ((ARC_X_R(c, 19)) == 0) goto L_113a5c;
  /* 113a6c: ldp x8, x9, [x19, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(48));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 113a70: ldr w1, [x21] */
  ARC_W_W(c, 1, arc_ld32(ARC_X_R(c, 21)));
  /* 113a74: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 113a78: b.ne #0x113a4c */
  if (ARC_COND(c, 1)) goto L_113a4c;
  /* 113a7c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 113a80: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 113a84: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* 113a88: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1129100));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 113a8c: mov w1, w0 */
  ARC_W_W(c, 1, ARC_W_R(c, 0));
  /* 113a90: b #0x113a54 */
  goto L_113a54;
L_113a94:;
  /* 113a94: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 113a98: ldp x20, x19, [sp, #0x1c0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(448));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 113a9c: ldp x28, x21, [sp, #0x1b0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(432));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 113aa0: ldp x29, x30, [sp, #0x1a0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(416));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 113aa4: add sp, sp, #0x1d0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(464)));
  /* 113aa8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 113aac: ret  */
  return;
}

void fn1_1140c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039058624));
  /* 1140c0: bti c */
  /* bti: no architectural effect here */
  /* 1140c4: ldr w0, [x0, #0x80] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(128))));
  /* 1140c8: ret  */
  return;
}

void fn1_11fd4c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039106892));
  /* 11fd4c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 11fd50: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 11fd54: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 11fd58: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 11fd5c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 11fd60: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 11fd64: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11fd68: mov x9, #-1 */
  ARC_X_W(c, 9, UINT64_C(18446744073709551615));
  /* 11fd6c: ldr x8, [x8, #0xda8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3496))));
  /* 11fd70: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11fd74: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 11fd78: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 11fd7c: stp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 11fd80: str q0, [x21, #0x18]! */
  arc_st64((ARC_X_R(c, 21) + INT64_C(24)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 21) + INT64_C(24)) + 8, (c)->q[0].u64[1]);
  ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(24));
  /* 11fd84: stur q0, [x0, #0x28] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* 11fd88: stur q0, [x0, #0x38] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* 11fd8c: stur q0, [x0, #0x48] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* 11fd90: stur q0, [x0, #0x58] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(88)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(88)) + 8, (c)->q[0].u64[1]);
  /* 11fd94: stur q0, [x0, #0x68] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(104)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(104)) + 8, (c)->q[0].u64[1]);
  /* 11fd98: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 11fd9c: ldr x9, [x1, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* 11fda0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 11fda4: csinc x1, x9, x1, ne */
  ARC_X_W(c, 1, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 1)) + 1)));
  /* 11fda8: bl #0x143d18 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1179052));
  fn1_143d18(c);
  /* 11fdac: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 11fdb0: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 11fdb4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 11fdb8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 11fdbc: ret  */
  return;
  /* 11fdc0: ldrb w8, [x19, #0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(96))));
  /* 11fdc4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11fdc8: tbnz w8, #0, #0x11fdec */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_11fdec;
  /* 11fdcc: ldrb w8, [x19, #0x48] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(72))));
  /* 11fdd0: tbnz w8, #0, #0x11fe04 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_11fe04;
L_11fdd4:;
  /* 11fdd4: ldrb w8, [x19, #0x30] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(48))));
  /* 11fdd8: tbnz w8, #0, #0x11fe1c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_11fe1c;
L_11fddc:;
  /* 11fddc: ldrb w8, [x21] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 21)));
  /* 11fde0: tbnz w8, #0, #0x11fe34 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_11fe34;
L_11fde4:;
  /* 11fde4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11fde8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1179116));
  fn1_9cc20(c);
L_11fdec:;
  /* 11fdec: ldr x8, [x19, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(96))));
  /* 11fdf0: ldr x0, [x19, #0x70] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(112))));
  /* 11fdf4: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 11fdf8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1179132));
  fn1_142608(c);
  /* 11fdfc: ldrb w8, [x19, #0x48] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(72))));
  /* 11fe00: tbz w8, #0, #0x11fdd4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_11fdd4;
L_11fe04:;
  /* 11fe04: ldr x8, [x19, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(72))));
  /* 11fe08: ldr x0, [x19, #0x58] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(88))));
  /* 11fe0c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 11fe10: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1179156));
  fn1_142608(c);
  /* 11fe14: ldrb w8, [x19, #0x30] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(48))));
  /* 11fe18: tbz w8, #0, #0x11fddc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_11fddc;
L_11fe1c:;
  /* 11fe1c: ldr x8, [x19, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(48))));
  /* 11fe20: ldr x0, [x19, #0x40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* 11fe24: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 11fe28: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1179180));
  fn1_142608(c);
  /* 11fe2c: ldrb w8, [x21] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 21)));
  /* 11fe30: tbz w8, #0, #0x11fde4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_11fde4;
L_11fe34:;
  /* 11fe34: ldr x8, [x19, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* 11fe38: ldr x0, [x19, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(40))));
  /* 11fe3c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 11fe40: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1179204));
  fn1_142608(c);
  /* 11fe44: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11fe48: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1179212));
  fn1_9cc20(c);
}

void fn1_126a2c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039134764));
  /* 126a2c: bti c */
  /* bti: no architectural effect here */
  /* 126a30: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 126a34: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* 126a38: ldr x9, [x9, #0xc70] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(3184))));
  /* 126a3c: ldr x0, [x0, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 126a40: add x9, x9, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* 126a44: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 126a48: cbz x0, #0x126a5c */
  if ((ARC_X_R(c, 0)) == 0) goto L_126a5c;
  /* 126a4c: ldrb w8, [x8, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(24))));
  /* 126a50: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 126a54: b.ne #0x126a5c */
  if (ARC_COND(c, 1)) goto L_126a5c;
  /* 126a58: b #0x1425a8 */
  fn1_1425a8(c); return;
L_126a5c:;
  /* 126a5c: ret  */
  return;
}

void fn1_1291c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039144904));
  /* 1291c8: bti c */
  /* bti: no architectural effect here */
  /* 1291cc: mov w0, #3 */
  ARC_W_W(c, 0, UINT64_C(3));
  /* 1291d0: str x2, [x4] */
  arc_st64(ARC_X_R(c, 4), ARC_X_R(c, 2));
  /* 1291d4: ret  */
  return;
}

void fn1_12aa18(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039151128));
  /* 12aa18: bti c */
  /* bti: no architectural effect here */
  /* 12aa1c: sub x8, x3, x2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) - ARC_X_R(c, 2)));
  /* 12aa20: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* 12aa24: mov x8, x2 */
  ARC_X_W(c, 8, ARC_X_R(c, 2));
  /* 12aa28: b.lt #0x12aa58 */
  if (ARC_COND(c, 11)) goto L_12aa58;
  /* 12aa2c: ldr w9, [x0, #0x18] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12aa30: mov x8, x2 */
  ARC_X_W(c, 8, ARC_X_R(c, 2));
  /* 12aa34: tbz w9, #2, #0x12aa58 */
  if (((ARC_W_R(c, 9)) >> 2 & 1) == 0) goto L_12aa58;
  /* 12aa38: ldrb w8, [x2] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 2)));
  /* 12aa3c: cmp w8, #0xfe */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(254));
  /* 12aa40: mov x8, x2 */
  ARC_X_W(c, 8, ARC_X_R(c, 2));
  /* 12aa44: b.ne #0x12aa58 */
  if (ARC_COND(c, 1)) goto L_12aa58;
  /* 12aa48: ldrb w8, [x2, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 2) + INT64_C(1))));
  /* 12aa4c: cmp w8, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(255));
  /* 12aa50: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 12aa54: add x8, x2, w8, uxtw #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 2) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 1)));
L_12aa58:;
  /* 12aa58: cbz x4, #0x12aaa4 */
  if ((ARC_X_R(c, 4)) == 0) goto L_12aaa4;
  /* 12aa5c: sub x9, x3, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 3) - UINT64_C(1)));
  /* 12aa60: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 12aa64: b.hs #0x12aaa4 */
  if (ARC_COND(c, 2)) goto L_12aaa4;
  /* 12aa68: ldr x10, [x0, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 12aa6c: mov w11, #1 */
  ARC_W_W(c, 11, UINT64_C(1));
L_12aa70:;
  /* 12aa70: ldrb w12, [x8] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 8)));
  /* 12aa74: and w13, w12, #0xf8 */
  ARC_W_W(c, 13, (ARC_W_R(c, 12) & UINT64_C(248)));
  /* 12aa78: cmp w13, #0xd8 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(216));
  /* 12aa7c: b.eq #0x12aaa4 */
  if (ARC_COND(c, 0)) goto L_12aaa4;
  /* 12aa80: ldrb w13, [x8, #1] */
  ARC_W_W(c, 13, arc_ld8((ARC_X_R(c, 8) + INT64_C(1))));
  /* 12aa84: orr w12, w13, w12, lsl #8 */
  ARC_W_W(c, 12, (ARC_W_R(c, 13) | ((uint32_t)(ARC_W_R(c, 12)) << 8)));
  /* 12aa88: cmp x10, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 12));
  /* 12aa8c: cset w12, hs */
  ARC_W_W(c, 12, (ARC_COND(c, 2) ? 1 : 0));
  /* 12aa90: add x8, x8, w12, uxtw #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 12)))) << 1)));
  /* 12aa94: ccmp x8, x9, #2, hs */
  if (ARC_COND(c, 2)) { (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 1; (c)->vf = 0; }
  /* 12aa98: ccmp x11, x4, #2, lo */
  if (ARC_COND(c, 3)) { (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 4)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 1; (c)->vf = 0; }
  /* 12aa9c: add x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(1)));
  /* 12aaa0: b.lo #0x12aa70 */
  if (ARC_COND(c, 3)) goto L_12aa70;
L_12aaa4:;
  /* 12aaa4: sub w0, w8, w2 */
  ARC_W_W(c, 0, (ARC_W_R(c, 8) - ARC_W_R(c, 2)));
  /* 12aaa8: ret  */
  return;
}

void fn1_12bdc4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039156164));
  /* 12bdc4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12bdc8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12bdcc: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 12bdd0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12bdd4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12bdd8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12bddc: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 12bde0: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 12bde4: bl #0x142e30 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1228264));
  fn1_142e30(c);
  /* 12bde8: mov x8, #0x3ffffffffffffff8 */
  ARC_X_W(c, 8, UINT64_C(4611686018427387896));
  /* 12bdec: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 12bdf0: b.hs #0x12be60 */
  if (ARC_COND(c, 2)) goto L_12be60;
  /* 12bdf4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 12bdf8: cmp x0, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(5));
  /* 12bdfc: b.hs #0x12be10 */
  if (ARC_COND(c, 2)) goto L_12be10;
  /* 12be00: lsl w8, w20, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 20)) << ((UINT64_C(1)) & 31)));
  /* 12be04: strb w8, [x19], #4 */
  { const uint64_t _a = ARC_X_R(c, 19);
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* 12be08: cbnz x20, #0x12be38 */
  if ((ARC_X_R(c, 20)) != 0) goto L_12be38;
  /* 12be0c: b #0x12be48 */
  goto L_12be48;
L_12be10:;
  /* 12be10: orr x8, x20, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) | UINT64_C(1)));
  /* 12be14: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* 12be18: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* 12be1c: csinc x22, x9, x8, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* 12be20: lsl x0, x22, #2 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 22)) << ((UINT64_C(2)) & 63)));
  /* 12be24: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1228328));
  fn1_1428f0(c);
  /* 12be28: orr x8, x22, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) | UINT64_C(1)));
  /* 12be2c: stp x20, x0, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 12be30: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 12be34: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_12be38:;
  /* 12be38: lsl x2, x20, #2 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 20)) << ((UINT64_C(2)) & 63)));
  /* 12be3c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12be40: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 12be44: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1228360));
  fn1_1449f0(c);
L_12be48:;
  /* 12be48: str wzr, [x19, x20, lsl #2] */
  arc_st32((ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 20)) << 2)), ARC_W_R(c, 31));
  /* 12be4c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12be50: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 12be54: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12be58: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12be5c: ret  */
  return;
L_12be60:;
  /* 12be60: bl #0xe2274 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1228388));
  fn1_e2274(c);
}

void fn1_134720(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039191328));
  /* 134720: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 134724: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 134728: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 13472c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 134730: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 134734: bl #0x143d78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1263416));
  fn1_143d78(c);
  /* 134738: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13473c: mov w1, #0x28 */
  ARC_W_W(c, 1, UINT64_C(40));
  /* 134740: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 134744: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 134748: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13474c: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_134dcc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039193036));
  /* 134dcc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 134dd0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 134dd4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 134dd8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 134ddc: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 134de0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 134de4: ldr x8, [x8, #0xdb0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3504))));
  /* 134de8: ldrb w9, [x0, #0x60] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(96))));
  /* 134dec: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 134df0: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 134df4: tbnz w9, #0, #0x134e20 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_134e20;
  /* 134df8: ldrb w8, [x19, #0x48] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(72))));
  /* 134dfc: tbnz w8, #0, #0x134e38 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_134e38;
L_134e00:;
  /* 134e00: ldrb w8, [x19, #0x30] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(48))));
  /* 134e04: tbnz w8, #0, #0x134e50 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_134e50;
L_134e08:;
  /* 134e08: ldrb w8, [x19, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(24))));
  /* 134e0c: tbnz w8, #0, #0x134e68 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_134e68;
L_134e10:;
  /* 134e10: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 134e14: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 134e18: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 134e1c: ret  */
  return;
L_134e20:;
  /* 134e20: ldr x8, [x19, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(96))));
  /* 134e24: ldr x0, [x19, #0x70] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(112))));
  /* 134e28: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 134e2c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1265200));
  fn1_142608(c);
  /* 134e30: ldrb w8, [x19, #0x48] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(72))));
  /* 134e34: tbz w8, #0, #0x134e00 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_134e00;
L_134e38:;
  /* 134e38: ldr x8, [x19, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(72))));
  /* 134e3c: ldr x0, [x19, #0x58] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(88))));
  /* 134e40: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 134e44: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1265224));
  fn1_142608(c);
  /* 134e48: ldrb w8, [x19, #0x30] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(48))));
  /* 134e4c: tbz w8, #0, #0x134e08 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_134e08;
L_134e50:;
  /* 134e50: ldr x8, [x19, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(48))));
  /* 134e54: ldr x0, [x19, #0x40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* 134e58: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 134e5c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1265248));
  fn1_142608(c);
  /* 134e60: ldrb w8, [x19, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(24))));
  /* 134e64: tbz w8, #0, #0x134e10 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_134e10;
L_134e68:;
  /* 134e68: ldr x8, [x19, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* 134e6c: ldr x0, [x19, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(40))));
  /* 134e70: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 134e74: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 134e78: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 134e7c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 134e80: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_137a60(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039204448));
  /* 137a60: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 137a64: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 137a68: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 137a6c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 137a70: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 137a74: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 137a78: ldr x8, [x8, #0xe40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3648))));
  /* 137a7c: ldr x0, [x0, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 137a80: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 137a84: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 137a88: cbz x0, #0x137ab4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_137ab4;
  /* 137a8c: ldr w8, [x19, #0x40] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(64))));
  /* 137a90: mov w9, #9 */
  ARC_W_W(c, 9, UINT64_C(9));
  /* 137a94: and w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & ARC_W_R(c, 9)));
  /* 137a98: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 137a9c: b.ne #0x137ab4 */
  if (ARC_COND(c, 1)) goto L_137ab4;
  /* 137aa0: ldr x8, [x19, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(88))));
  /* 137aa4: cbz x8, #0x137ab0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_137ab0;
  /* 137aa8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1276588));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 137aac: b #0x137ab4 */
  goto L_137ab4;
L_137ab0:;
  /* 137ab0: bl #0x1425a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1276596));
  fn1_1425a8(c);
L_137ab4:;
  /* 137ab4: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 137ab8: nop  */
  /* nop: no architectural effect here */
  /* 137abc: adr x9, #0x15dc40 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1432640)));
  /* 137ac0: ldr x8, [x8, #0xaa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2728))));
  /* 137ac4: ldr x20, [x19, #8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 137ac8: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 137acc: cmp x20, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 9));
  /* 137ad0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 137ad4: b.eq #0x137ae8 */
  if (ARC_COND(c, 0)) goto L_137ae8;
  /* 137ad8: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 137adc: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 137ae0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1276644));
  fn1_bd950(c);
  /* 137ae4: cbz x0, #0x137af8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_137af8;
L_137ae8:;
  /* 137ae8: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 137aec: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 137af0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 137af4: ret  */
  return;
L_137af8:;
  /* 137af8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 137afc: ldr x16, [x8, #0x10] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 137b00: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 137b04: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 137b08: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 137b0c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 137b10: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
  /* 137b14: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1276696));
  fn1_a1454(c);
}

void fn1_13b214(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039218708));
  /* 13b214: bti c */
  /* bti: no architectural effect here */
  /* 13b218: mov w1, #0x90 */
  ARC_W_W(c, 1, UINT64_C(144));
  /* 13b21c: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_1422fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039247612));
  /* 1422fc: bti c */
  /* bti: no architectural effect here */
  /* 142300: b #0x1428f0 */
  fn1_1428f0(c); return;
}

void fn1_142980(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249280));
  /* 142980: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142984: ldr x17, [x16, #0x60] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(96))));
  /* 142988: add x16, x16, #0x60 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(96)));
  /* 14298c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142990: nop  */
  /* nop: no architectural effect here */
  /* 142994: nop  */
  /* nop: no architectural effect here */
}

void fn1_142f80(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250816));
  /* 142f80: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142f84: ldr x17, [x16, #0x260] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(608))));
  /* 142f88: add x16, x16, #0x260 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(608)));
  /* 142f8c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142f90: nop  */
  /* nop: no architectural effect here */
  /* 142f94: nop  */
  /* nop: no architectural effect here */
}

void fn1_143580(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252352));
  /* 143580: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143584: ldr x17, [x16, #0x460] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1120))));
  /* 143588: add x16, x16, #0x460 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1120)));
  /* 14358c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143590: nop  */
  /* nop: no architectural effect here */
  /* 143594: nop  */
  /* nop: no architectural effect here */
}

void fn1_143b80(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253888));
  /* 143b80: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143b84: ldr x17, [x16, #0x660] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1632))));
  /* 143b88: add x16, x16, #0x660 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1632)));
  /* 143b8c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143b90: nop  */
  /* nop: no architectural effect here */
  /* 143b94: nop  */
  /* nop: no architectural effect here */
}

void fn1_144180(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255424));
  /* 144180: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144184: ldr x17, [x16, #0x860] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2144))));
  /* 144188: add x16, x16, #0x860 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2144)));
  /* 14418c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144190: nop  */
  /* nop: no architectural effect here */
  /* 144194: nop  */
  /* nop: no architectural effect here */
}

void fn1_144780(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256960));
  /* 144780: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144784: ldr x17, [x16, #0xa60] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2656))));
  /* 144788: add x16, x16, #0xa60 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2656)));
  /* 14478c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144790: nop  */
  /* nop: no architectural effect here */
  /* 144794: nop  */
  /* nop: no architectural effect here */
}

