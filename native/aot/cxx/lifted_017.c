#include "lifted.h"

void fn1_9cec4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038570692));
  /* 9cec4: bti c */
  /* bti: no architectural effect here */
  /* 9cec8: nop  */
  /* nop: no architectural effect here */
  /* 9cecc: adr x0, #0xa0770 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(657264)));
  /* 9ced0: ret  */
  return;
}

void fn1_a14e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038588648));
  /* a14e8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a14ec: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a14f0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a14f4: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a14f8: ldr x8, [x8, #0x8b8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2232))));
  /* a14fc: ldar x0, [x8] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 8)));
  /* a1500: bl #0xa14cc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(660740));
  fn1_a14cc(c);
}

void fn1_a27c4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038593476));
  /* a27c4: bti c */
  /* bti: no architectural effect here */
  /* a27c8: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* a27cc: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_a8adc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038618844));
  /* a8adc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a8ae0: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a8ae4: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* a8ae8: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a8aec: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a8af0: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* a8af4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* a8af8: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* a8afc: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* a8b00: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a8b04: b.hi #0xa8b28 */
  if (ARC_COND(c, 8)) goto L_a8b28;
  /* a8b08: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a8b0c: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a8b10: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(690964));
  fn1_1428a8(c);
  /* a8b14: cbz x0, #0xa8b84 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a8b84;
  /* a8b18: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a8b1c: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a8b20: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a8b24: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_a8b28:;
  /* a8b28: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* a8b2c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a8b30: add x20, x21, x8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* a8b34: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* a8b38: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(691004));
  fn1_142860(c);
  /* a8b3c: adrp x9, #0x149000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a8b40: add x9, x9, #0xc10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3088)));
  /* a8b44: mov w11, #0x540 */
  ARC_W_W(c, 11, UINT64_C(1344));
  /* a8b48: str x9, [x20, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* a8b4c: ldurh w9, [x20, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* a8b50: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* a8b54: mov w10, #8 */
  ARC_W_W(c, 10, UINT64_C(8));
  /* a8b58: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* a8b5c: strb w10, [x20, #8] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(8)), ARC_W_R(c, 10));
  /* a8b60: orr w9, w9, w11 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 11)));
  /* a8b64: stp x19, x8, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* a8b68: sturh w9, [x20, #9] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(9)), ARC_W_R(c, 9));
  /* a8b6c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a8b70: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a8b74: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* a8b78: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a8b7c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a8b80: ret  */
  return;
L_a8b84:;
  /* a8b84: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(691080));
  fn1_142488(c);
}

void fn1_afc78(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038647928));
  /* afc78: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* afc7c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* afc80: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* afc84: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* afc88: ldrb w9, [x0, #0x18] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(24))));
  /* afc8c: ldr x8, [x1, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* afc90: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* afc94: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* afc98: cmp w9, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(1));
  /* afc9c: b.ne #0xafcec */
  if (ARC_COND(c, 1)) goto L_afcec;
  /* afca0: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* afca4: add x10, x8, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* afca8: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* afcac: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* afcb0: b.ls #0xafcd8 */
  if (ARC_COND(c, 9)) goto L_afcd8;
  /* afcb4: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* afcb8: add x8, x8, #0x3e2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(994)));
  /* afcbc: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* afcc0: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* afcc4: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* afcc8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(720076));
  fn1_142878(c);
  /* afccc: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* afcd0: cbz x0, #0xafe48 */
  if ((ARC_X_R(c, 0)) == 0) goto L_afe48;
  /* afcd4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_afcd8:;
  /* afcd8: mov w9, #0x3a3a */
  ARC_W_W(c, 9, UINT64_C(14906));
  /* afcdc: strh w9, [x0, x8] */
  arc_st16((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* afce0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* afce4: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* afce8: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_afcec:;
  /* afcec: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* afcf0: add x10, x8, #6 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(6)));
  /* afcf4: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* afcf8: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* afcfc: b.ls #0xafd24 */
  if (ARC_COND(c, 9)) goto L_afd24;
  /* afd00: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* afd04: add x8, x8, #0x3e6 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(998)));
  /* afd08: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* afd0c: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* afd10: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* afd14: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(720152));
  fn1_142878(c);
  /* afd18: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* afd1c: cbz x0, #0xafe40 */
  if ((ARC_X_R(c, 0)) == 0) goto L_afe40;
  /* afd20: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_afd24:;
  /* afd24: mov w10, #0x6564 */
  ARC_W_W(c, 10, UINT64_C(25956));
  /* afd28: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* afd2c: mov w9, #0x6574 */
  ARC_W_W(c, 9, UINT64_C(25972));
  /* afd30: movk w10, #0x656c, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1701576704)));
  /* afd34: strh w9, [x8, #4] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(4)), ARC_W_R(c, 9));
  /* afd38: str w10, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* afd3c: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* afd40: ldrb w10, [x20, #0x19] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 20) + INT64_C(25))));
  /* afd44: add x8, x9, #6 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(6)));
  /* afd48: cmp w10, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(1));
  /* afd4c: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* afd50: b.ne #0xafda0 */
  if (ARC_COND(c, 1)) goto L_afda0;
  /* afd54: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* afd58: add x11, x9, #8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(8)));
  /* afd5c: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* afd60: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* afd64: b.ls #0xafd8c */
  if (ARC_COND(c, 9)) goto L_afd8c;
  /* afd68: lsl x8, x10, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* afd6c: add x9, x9, #0x3e8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1000)));
  /* afd70: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* afd74: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* afd78: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* afd7c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(720256));
  fn1_142878(c);
  /* afd80: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* afd84: cbz x0, #0xafe4c */
  if ((ARC_X_R(c, 0)) == 0) goto L_afe4c;
  /* afd88: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_afd8c:;
  /* afd8c: mov w9, #0x5d5b */
  ARC_W_W(c, 9, UINT64_C(23899));
  /* afd90: strh w9, [x0, x8] */
  arc_st16((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* afd94: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* afd98: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* afd9c: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_afda0:;
  /* afda0: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* afda4: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* afda8: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* afdac: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* afdb0: b.ls #0xafddc */
  if (ARC_COND(c, 9)) goto L_afddc;
  /* afdb4: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* afdb8: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* afdbc: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* afdc0: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* afdc4: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* afdc8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(720332));
  fn1_142878(c);
  /* afdcc: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* afdd0: cbz x0, #0xafe44 */
  if ((ARC_X_R(c, 0)) == 0) goto L_afe44;
  /* afdd4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* afdd8: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_afddc:;
  /* afddc: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* afde0: mov w9, #0x20 */
  ARC_W_W(c, 9, UINT64_C(32));
  /* afde4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* afde8: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* afdec: ldr x20, [x20, #0x10] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* afdf0: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* afdf4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* afdf8: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* afdfc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(720384));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* afe00: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* afe04: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* afe08: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* afe0c: b.ne #0xafe20 */
  if (ARC_COND(c, 1)) goto L_afe20;
  /* afe10: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* afe14: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* afe18: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* afe1c: ret  */
  return;
L_afe20:;
  /* afe20: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* afe24: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* afe28: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* afe2c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* afe30: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* afe34: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* afe38: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* afe3c: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_afe40:;
  /* afe40: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(720452));
  fn1_1427b8(c);
L_afe44:;
  /* afe44: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(720456));
  fn1_1427b8(c);
L_afe48:;
  /* afe48: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(720460));
  fn1_1427b8(c);
L_afe4c:;
  /* afe4c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(720464));
  fn1_1427b8(c);
}

void fn1_b4354(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038666068));
  /* b4354: bti c */
  /* bti: no architectural effect here */
  /* b4358: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* b435c: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b7c94(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038680724));
  /* b7c94: bti c */
  /* bti: no architectural effect here */
  /* b7c98: ldr x0, [x0, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* b7c9c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* b7ca0: ldr x16, [x8, #0x38] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* b7ca4: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_bac24(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038692900));
  /* bac24: bti c */
  /* bti: no architectural effect here */
  /* bac28: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* bac2c: ret  */
  return;
}

void fn1_bd920(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038704416));
  /* bd920: bti c */
  /* bti: no architectural effect here */
  /* bd924: b #0x142938 */
  fn1_142938(c); return;
}

void fn1_cf064(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038775908));
  /* cf064: bti c */
  /* bti: no architectural effect here */
  /* cf068: sub x9, x1, x0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* cf06c: mov w8, #0x7e */
  ARC_W_W(c, 8, UINT64_C(126));
  /* cf070: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* cf074: asr x9, x9, #4 */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(4)) & 63))));
  /* cf078: clz x9, x9 */
  ARC_X_W(c, 9, arc_clz64(ARC_X_R(c, 9)));
  /* cf07c: sub x2, x8, x9, lsl #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) - ((uint64_t)(ARC_X_R(c, 9)) << 1)));
  /* cf080: b #0xcf084 */
  fn1_cf084(c); return;
}

void fn1_d7710(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038810384));
  /* d7710: bti c */
  /* bti: no architectural effect here */
  /* d7714: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* d7718: ldr x8, [x8, #0x9f8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2552))));
  /* d771c: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* d7720: str x8, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* d7724: b #0x142aa0 */
  fn1_142aa0(c); return;
}

void fn1_db594(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038826388));
  /* db594: bti c */
  /* bti: no architectural effect here */
  /* db598: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* db59c: ret  */
  return;
}

void fn1_df858(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038843480));
  /* df858: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* df85c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* df860: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* df864: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* df868: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* df86c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* df870: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* df874: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* df878: ldr x8, [x8, #0x908] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2312))));
  /* df87c: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* df880: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* df884: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* df888: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(915596));
  fn1_142860(c);
  /* df88c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* df890: add x0, x0, #0x19 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(25)));
  /* df894: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(915608));
  fn1_1428f0(c);
  /* df898: add x22, x0, #0x18 */
  ARC_X_W(c, 22, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* df89c: stp x21, x21, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* df8a0: add x2, x21, #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* df8a4: str wzr, [x0, #0x10] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(16)), ARC_W_R(c, 31));
  /* df8a8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* df8ac: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* df8b0: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(915636));
  fn1_1449d8(c);
  /* df8b4: str x22, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 22));
  /* df8b8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* df8bc: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* df8c0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* df8c4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* df8c8: ret  */
  return;
}

void fn1_e2274(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038854260));
  /* e2274: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e2278: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e227c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e2280: nop  */
  /* nop: no architectural effect here */
  /* e2284: adr x0, #0x51baa */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(334762)));
  /* e2288: bl #0xd7d6c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(926348));
  fn1_d7d6c(c);
}

void fn1_e5178(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038866296));
  /* e5178: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e517c: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* e5180: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e5184: str x23, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 23));
  /* e5188: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e518c: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e5190: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* e5194: mov w8, #0xa */
  ARC_W_W(c, 8, UINT64_C(10));
  /* e5198: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* e519c: ldr x10, [x0, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e51a0: strb w8, [sp] */
  arc_st8((c)->sp, ARC_W_R(c, 8));
  /* e51a4: mov w8, #0x7473 */
  ARC_W_W(c, 8, UINT64_C(29811));
  /* e51a8: mov w21, w2 */
  ARC_W_W(c, 21, ARC_W_R(c, 2));
  /* e51ac: movk w8, #0x6c6f, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(1819213824)));
  /* e51b0: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e51b4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* e51b8: stur w8, [sp, #1] */
  arc_st32(((c)->sp + INT64_C(1)), ARC_W_R(c, 8));
  /* e51bc: mov w8, #0x6c */
  ARC_W_W(c, 8, UINT64_C(108));
  /* e51c0: sturh w8, [sp, #5] */
  arc_st16(((c)->sp + INT64_C(5)), ARC_W_R(c, 8));
  /* e51c4: add x8, x0, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(4)));
  /* e51c8: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* e51cc: csel x20, x8, x10, eq */
  ARC_X_W(c, 20, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* e51d0: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(938452));
  fn1_142a58(c);
  /* e51d4: ldr w23, [x0] */
  ARC_W_W(c, 23, arc_ld32(ARC_X_R(c, 0)));
  /* e51d8: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* e51dc: str wzr, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 31));
  /* e51e0: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* e51e4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e51e8: mov w2, w21 */
  ARC_W_W(c, 2, ARC_W_R(c, 21));
  /* e51ec: bl #0x142f50 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(938480));
  fn1_142f50(c);
  /* e51f0: ldr w8, [x22] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 22)));
  /* e51f4: str w23, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 23));
  /* e51f8: cmp w8, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(34));
  /* e51fc: b.eq #0xe5244 */
  if (ARC_COND(c, 0)) goto L_e5244;
  /* e5200: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* e5204: subs x8, x8, x20 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20)));
  /* e5208: b.eq #0xe5288 */
  if (ARC_COND(c, 0)) goto L_e5288;
  /* e520c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e5210: cbz x19, #0xe521c */
  if ((ARC_X_R(c, 19)) == 0) goto L_e521c;
  /* e5214: asr x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* e5218: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_e521c:;
  /* e521c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e5220: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(938532));
  fn1_142e00(c);
  /* e5224: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e5228: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e522c: ldr x23, [sp, #0x40] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(64))));
  /* e5230: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e5234: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e5238: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* e523c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e5240: ret  */
  return;
L_e5244:;
  /* e5244: mov w9, #0x7473 */
  ARC_W_W(c, 9, UINT64_C(29811));
  /* e5248: mov w8, #0x26 */
  ARC_W_W(c, 8, UINT64_C(38));
  /* e524c: str xzr, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 31));
  /* e5250: movk w9, #0x6c6f, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1819213824)));
  /* e5254: strb w8, [sp, #0x18] */
  arc_st8(((c)->sp + INT64_C(24)), ARC_W_R(c, 8));
  /* e5258: mov w8, #0x6c */
  ARC_W_W(c, 8, UINT64_C(108));
  /* e525c: stur w9, [sp, #0x19] */
  arc_st32(((c)->sp + INT64_C(25)), ARC_W_R(c, 9));
  /* e5260: adrp x9, #0x51000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(331776)));
  /* e5264: add x9, x9, #0xa7d */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2685)));
  /* e5268: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* e526c: strb w8, [sp, #0x1d] */
  arc_st8(((c)->sp + INT64_C(29)), ARC_W_R(c, 8));
  /* e5270: ldur x8, [x9, #6] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(6))));
  /* e5274: add x9, sp, #0x18 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(24)));
  /* e5278: stur x10, [sp, #0x1e] */
  arc_st64(((c)->sp + INT64_C(30)), ARC_X_R(c, 10));
  /* e527c: stur x8, [sp, #0x24] */
  arc_st64(((c)->sp + INT64_C(36)), ARC_X_R(c, 8));
  /* e5280: orr x0, x9, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* e5284: bl #0xda038 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(938632));
  fn1_da038(c);
L_e5288:;
  /* e5288: mov w9, #0x7473 */
  ARC_W_W(c, 9, UINT64_C(29811));
  /* e528c: mov w8, #0x28 */
  ARC_W_W(c, 8, UINT64_C(40));
  /* e5290: str xzr, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 31));
  /* e5294: movk w9, #0x6c6f, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1819213824)));
  /* e5298: strb w8, [sp, #0x18] */
  arc_st8(((c)->sp + INT64_C(24)), ARC_W_R(c, 8));
  /* e529c: mov w8, #0x6c */
  ARC_W_W(c, 8, UINT64_C(108));
  /* e52a0: stur w9, [sp, #0x19] */
  arc_st32(((c)->sp + INT64_C(25)), ARC_W_R(c, 9));
  /* e52a4: adrp x9, #0x50000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(327680)));
  /* e52a8: add x9, x9, #0x1dd */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(477)));
  /* e52ac: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* e52b0: strb w8, [sp, #0x1d] */
  arc_st8(((c)->sp + INT64_C(29)), ARC_W_R(c, 8));
  /* e52b4: ldur x8, [x9, #7] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(7))));
  /* e52b8: add x9, sp, #0x18 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(24)));
  /* e52bc: stur x10, [sp, #0x1e] */
  arc_st64(((c)->sp + INT64_C(30)), ARC_X_R(c, 10));
  /* e52c0: stur x8, [sp, #0x25] */
  arc_st64(((c)->sp + INT64_C(37)), ARC_X_R(c, 8));
  /* e52c4: orr x0, x9, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* e52c8: bl #0xe78a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(938700));
  fn1_e78a0(c);
  /* e52cc: b #0xe52d0 */
  goto L_e52d0;
L_e52d0:;
  /* e52d0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e52d4: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e52d8: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(938716));
  fn1_142e00(c);
  /* e52dc: b #0xe52e4 */
  goto L_e52e4;
  /* e52e0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_e52e4:;
  /* e52e4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e52e8: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(938732));
  fn1_142e00(c);
  /* e52ec: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e52f0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(938740));
  fn1_9cc20(c);
}

void fn1_e9178(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038882680));
  /* e9178: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e917c: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e9180: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e9184: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* e9188: mov x8, #0x2d69 */
  ARC_X_W(c, 8, UINT64_C(11625));
  /* e918c: lsr x10, x0, #0x20 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(32)) & 63)));
  /* e9190: lsl w9, w1, #3 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 1)) << ((UINT64_C(3)) & 31)));
  /* e9194: movk x8, #0xeb38, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(3946315776)));
  /* e9198: movk x8, #0xea08, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(257320080637952)));
  /* e919c: add x9, x9, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(8)));
  /* e91a0: movk x8, #0x9ddf, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(11375811183761162240)));
  /* e91a4: eor x9, x9, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) ^ ARC_X_R(c, 10)));
  /* e91a8: mul x9, x9, x8 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 8))));
  /* e91ac: eor x10, x10, x9, lsr #47 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) ^ ((uint64_t)(ARC_X_R(c, 9)) >> 47)));
  /* e91b0: eor x9, x10, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) ^ ARC_X_R(c, 9)));
  /* e91b4: mul x8, x9, x8 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 8))));
  /* e91b8: lsr x9, x8, #0x2f */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(47)) & 63)));
  /* e91bc: eor w8, w9, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) ^ ARC_W_R(c, 8)));
  /* e91c0: mov w9, #0x69 */
  ARC_W_W(c, 9, UINT64_C(105));
  /* e91c4: mul w8, w8, w9 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 9))));
  /* e91c8: nop  */
  /* nop: no architectural effect here */
  /* e91cc: adr x9, #0x159240 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1413696)));
  /* e91d0: and x8, x8, #0xff */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(255)));
  /* e91d4: add x8, x9, x8, lsl #6 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 6)));
  /* e91d8: ldar w8, [x8] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 8)));
  /* e91dc: cbz w8, #0xe91fc */
  if ((ARC_W_R(c, 8)) == 0) goto L_e91fc;
  /* e91e0: mov w0, #0x62 */
  ARC_W_W(c, 0, UINT64_C(98));
  /* e91e4: mov w2, #0x81 */
  ARC_W_W(c, 2, UINT64_C(129));
  /* e91e8: mov w3, #0x7fffffff */
  ARC_W_W(c, 3, UINT64_C(2147483647));
  /* e91ec: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* e91f0: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* e91f4: mov w6, wzr */
  ARC_W_W(c, 6, ARC_W_R(c, 31));
  /* e91f8: bl #0x142500 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(954876));
  fn1_142500(c);
L_e91fc:;
  /* e91fc: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e9200: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e9204: ret  */
  return;
  /* e9208: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(954892));
  fn1_a1454(c);
}

void fn1_eb1cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038890956));
  /* eb1cc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eb1d0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eb1d4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* eb1d8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eb1dc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* eb1e0: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963044));
  fn1_142518(c);
  /* eb1e4: cbnz w0, #0xeb228 */
  if ((ARC_W_R(c, 0)) != 0) goto L_eb228;
  /* eb1e8: ldr x8, [x19, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(88))));
  /* eb1ec: subs x8, x8, #1 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1)));
  /* eb1f0: str x8, [x19, #0x58] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(88)), ARC_X_R(c, 8));
  /* eb1f4: b.eq #0xeb204 */
  if (ARC_COND(c, 0)) goto L_eb204;
  /* eb1f8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eb1fc: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963072));
  fn1_142560(c);
  /* eb200: b #0xeb218 */
  goto L_eb218;
L_eb204:;
  /* eb204: str xzr, [x19, #0x60] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(96)), ARC_X_R(c, 31));
  /* eb208: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eb20c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963088));
  fn1_142560(c);
  /* eb210: add x0, x19, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* eb214: bl #0x143100 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963096));
  fn1_143100(c);
L_eb218:;
  /* eb218: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* eb21c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eb220: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eb224: ret  */
  return;
L_eb228:;
  /* eb228: nop  */
  /* nop: no architectural effect here */
  /* eb22c: adr x1, #0x50f67 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331623)));
  /* eb230: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963124));
  fn1_142a40(c);
  /* eb234: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963128));
  fn1_a1454(c);
  /* eb238: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963132));
  fn1_a1454(c);
  /* eb23c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963136));
  fn1_a1454(c);
  /* eb240: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963140));
  fn1_a1454(c);
}

void fn1_ed104(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038898948));
  /* ed104: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ed108: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ed10c: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ed110: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ed114: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ed118: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* ed11c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* ed120: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ed124: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* ed128: ldr x9, [x9, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(16))));
  /* ed12c: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(971056));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* ed130: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* ed134: nop  */
  /* nop: no architectural effect here */
  /* ed138: adr x22, #0x15dc40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432640)));
  /* ed13c: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* ed140: str x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* ed144: b.eq #0xed154 */
  if (ARC_COND(c, 0)) goto L_ed154;
  /* ed148: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* ed14c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ed150: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(971092));
  fn1_db2e0(c);
L_ed154:;
  /* ed154: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* ed158: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* ed15c: b.eq #0xed16c */
  if (ARC_COND(c, 0)) goto L_ed16c;
  /* ed160: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* ed164: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ed168: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(971116));
  fn1_db2e0(c);
L_ed16c:;
  /* ed16c: ldr x21, [x19, #8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* ed170: cmp x21, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 22));
  /* ed174: b.eq #0xed198 */
  if (ARC_COND(c, 0)) goto L_ed198;
  /* ed178: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* ed17c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ed180: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(971140));
  fn1_bd950(c);
  /* ed184: cbnz x0, #0xed198 */
  if ((ARC_X_R(c, 0)) != 0) goto L_ed198;
  /* ed188: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* ed18c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ed190: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ed194: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(971160));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ed198:;
  /* ed198: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* ed19c: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* ed1a0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ed1a4: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ed1a8: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ed1ac: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ed1b0: ret  */
  return;
}

void fn1_ef980(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038909312));
  /* ef980: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ef984: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* ef988: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ef98c: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* ef990: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ef994: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ef998: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* ef99c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* ef9a0: nop  */
  /* nop: no architectural effect here */
  /* ef9a4: adr x24, #0x15dc40 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1432640)));
  /* ef9a8: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* ef9ac: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* ef9b0: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* ef9b4: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ef9b8: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* ef9bc: ldr x19, [x8, #0x30] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* ef9c0: cmp x19, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 24));
  /* ef9c4: str x19, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 19));
  /* ef9c8: b.eq #0xef9d8 */
  if (ARC_COND(c, 0)) goto L_ef9d8;
  /* ef9cc: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* ef9d0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ef9d4: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(981464));
  fn1_db2e0(c);
L_ef9d8:;
  /* ef9d8: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* ef9dc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* ef9e0: ldr x1, [x1, #0xb40] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2880))));
  /* ef9e4: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(981480));
  fn1_143748(c);
  /* ef9e8: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* ef9ec: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* ef9f0: mov w1, #0xa */
  ARC_W_W(c, 1, UINT64_C(10));
  /* ef9f4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(981496));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ef9f8: mov w23, w0 */
  ARC_W_W(c, 23, ARC_W_R(c, 0));
  /* ef9fc: cmp x19, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 24));
  /* efa00: b.eq #0xefa24 */
  if (ARC_COND(c, 0)) goto L_efa24;
  /* efa04: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* efa08: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* efa0c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(981520));
  fn1_bd950(c);
  /* efa10: cbnz x0, #0xefa24 */
  if ((ARC_X_R(c, 0)) != 0) goto L_efa24;
  /* efa14: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* efa18: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* efa1c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* efa20: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(981540));
  arc_dispatch(c, ARC_X_R(c, 8));
L_efa24:;
  /* efa24: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* efa28: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* efa2c: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* efa30: mov w3, w23 */
  ARC_W_W(c, 3, ARC_W_R(c, 23));
  /* efa34: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* efa38: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* efa3c: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* efa40: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* efa44: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* efa48: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* efa4c: b #0x1434c0 */
  fn1_1434c0(c); return;
  /* efa50: cmp x19, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 24));
  /* efa54: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* efa58: b.eq #0xefa7c */
  if (ARC_COND(c, 0)) goto L_efa7c;
  /* efa5c: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* efa60: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* efa64: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(981608));
  fn1_bd950(c);
  /* efa68: cbnz x0, #0xefa7c */
  if ((ARC_X_R(c, 0)) != 0) goto L_efa7c;
  /* efa6c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* efa70: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* efa74: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* efa78: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(981628));
  arc_dispatch(c, ARC_X_R(c, 8));
L_efa7c:;
  /* efa7c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* efa80: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(981636));
  fn1_9cc20(c);
}

void fn1_f3b28(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038926120));
  /* f3b28: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f3b2c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f3b30: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f3b34: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f3b38: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f3b3c: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* f3b40: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* f3b44: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f3b48: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* f3b4c: ldr x9, [x9, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(16))));
  /* f3b50: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(998228));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* f3b54: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* f3b58: nop  */
  /* nop: no architectural effect here */
  /* f3b5c: adr x22, #0x15dc40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f3b60: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* f3b64: str x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* f3b68: b.eq #0xf3b78 */
  if (ARC_COND(c, 0)) goto L_f3b78;
  /* f3b6c: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* f3b70: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f3b74: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(998264));
  fn1_db2e0(c);
L_f3b78:;
  /* f3b78: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* f3b7c: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* f3b80: b.eq #0xf3b90 */
  if (ARC_COND(c, 0)) goto L_f3b90;
  /* f3b84: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* f3b88: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f3b8c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(998288));
  fn1_db2e0(c);
L_f3b90:;
  /* f3b90: ldr x21, [x19, #8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* f3b94: cmp x21, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 22));
  /* f3b98: b.eq #0xf3bbc */
  if (ARC_COND(c, 0)) goto L_f3bbc;
  /* f3b9c: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* f3ba0: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f3ba4: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(998312));
  fn1_bd950(c);
  /* f3ba8: cbnz x0, #0xf3bbc */
  if ((ARC_X_R(c, 0)) != 0) goto L_f3bbc;
  /* f3bac: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* f3bb0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f3bb4: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f3bb8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(998332));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f3bbc:;
  /* f3bbc: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* f3bc0: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* f3bc4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f3bc8: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f3bcc: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f3bd0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f3bd4: ret  */
  return;
}

void fn1_f63b4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038936500));
  /* f63b4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f63b8: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* f63bc: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f63c0: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* f63c4: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f63c8: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f63cc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f63d0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f63d4: nop  */
  /* nop: no architectural effect here */
  /* f63d8: adr x24, #0x15dc40 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f63dc: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* f63e0: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* f63e4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* f63e8: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f63ec: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* f63f0: ldr x19, [x8, #0x30] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f63f4: cmp x19, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 24));
  /* f63f8: str x19, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 19));
  /* f63fc: b.eq #0xf640c */
  if (ARC_COND(c, 0)) goto L_f640c;
  /* f6400: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* f6404: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f6408: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1008652));
  fn1_db2e0(c);
L_f640c:;
  /* f640c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f6410: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f6414: ldr x1, [x1, #0xb58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2904))));
  /* f6418: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1008668));
  fn1_143748(c);
  /* f641c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f6420: ldr x8, [x8, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* f6424: mov w1, #0xa */
  ARC_W_W(c, 1, UINT64_C(10));
  /* f6428: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1008684));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f642c: mov w23, w0 */
  ARC_W_W(c, 23, ARC_W_R(c, 0));
  /* f6430: cmp x19, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 24));
  /* f6434: b.eq #0xf6458 */
  if (ARC_COND(c, 0)) goto L_f6458;
  /* f6438: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* f643c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f6440: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1008708));
  fn1_bd950(c);
  /* f6444: cbnz x0, #0xf6458 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f6458;
  /* f6448: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f644c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f6450: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f6454: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1008728));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f6458:;
  /* f6458: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* f645c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* f6460: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* f6464: mov w3, w23 */
  ARC_W_W(c, 3, ARC_W_R(c, 23));
  /* f6468: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f646c: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f6470: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* f6474: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f6478: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* f647c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f6480: b #0x143538 */
  fn1_143538(c); return;
  /* f6484: cmp x19, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 24));
  /* f6488: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f648c: b.eq #0xf64b0 */
  if (ARC_COND(c, 0)) goto L_f64b0;
  /* f6490: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* f6494: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f6498: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1008796));
  fn1_bd950(c);
  /* f649c: cbnz x0, #0xf64b0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f64b0;
  /* f64a0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f64a4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f64a8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f64ac: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1008816));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f64b0:;
  /* f64b0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f64b4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1008824));
  fn1_9cc20(c);
}

void fn1_fb654(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038957652));
  /* fb654: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fb658: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fb65c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* fb660: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fb664: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fb668: add x0, x0, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(8)));
  /* fb66c: orr w2, w2, #0x10 */
  ARC_W_W(c, 2, (ARC_W_R(c, 2) | UINT64_C(16)));
  /* fb670: bl #0x143598 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1029748));
  fn1_143598(c);
  /* fb674: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* fb678: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* fb67c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* fb680: cbz x0, #0xfb68c */
  if ((ARC_X_R(c, 0)) == 0) goto L_fb68c;
  /* fb684: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* fb688: b #0xfb694 */
  goto L_fb694;
L_fb68c:;
  /* fb68c: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* fb690: orr w9, w9, #4 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(4)));
L_fb694:;
  /* fb694: ldr x10, [x8, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* fb698: ldr w11, [x8, #0x24] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 8) + INT64_C(36))));
  /* fb69c: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* fb6a0: cset w10, eq */
  ARC_W_W(c, 10, (ARC_COND(c, 0) ? 1 : 0));
  /* fb6a4: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* fb6a8: tst w9, w11 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & ARC_W_R(c, 11)));
  /* fb6ac: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* fb6b0: b.ne #0xfb6c4 */
  if (ARC_COND(c, 1)) goto L_fb6c4;
  /* fb6b4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* fb6b8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fb6bc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fb6c0: ret  */
  return;
L_fb6c4:;
  /* fb6c4: nop  */
  /* nop: no architectural effect here */
  /* fb6c8: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* fb6cc: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1029840));
  fn1_ec720(c);
}

void fn1_feb48(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038971208));
  /* feb48: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* feb4c: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* feb50: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* feb54: str x21, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 21));
  /* feb58: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* feb5c: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* feb60: cmn w1, #1 */
  (void)arc_add32(c, ARC_W_R(c, 1), UINT64_C(1), 0);
  /* feb64: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* feb68: b.eq #0xfeb98 */
  if (ARC_COND(c, 0)) goto L_feb98;
  /* feb6c: ldrb w9, [x20, #0x61] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 20) + INT64_C(97))));
  /* feb70: ldrb w8, [x20, #0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(96))));
  /* feb74: mov w19, w1 */
  ARC_W_W(c, 19, ARC_W_R(c, 1));
  /* feb78: tbz w9, #0, #0xfebb0 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_febb0;
  /* feb7c: tbz w8, #0, #0xfec48 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_fec48;
  /* feb80: ldr w0, [x20, #0x5c] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 20) + INT64_C(92))));
  /* feb84: ldr x1, [x20, #0x40] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 20) + INT64_C(64))));
  /* feb88: bl #0x143838 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1043340));
  fn1_143838(c);
  /* feb8c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* feb90: b.ne #0xfec48 */
  if (ARC_COND(c, 1)) goto L_fec48;
  /* feb94: b #0xfec40 */
  goto L_fec40;
L_feb98:;
  /* feb98: ldrb w8, [x20, #0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(96))));
  /* feb9c: tbnz w8, #0, #0xfec40 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_fec40;
  /* feba0: ldr w19, [x20, #0x5c] */
  ARC_W_W(c, 19, arc_ld32((ARC_X_R(c, 20) + INT64_C(92))));
  /* feba4: cmn w19, #1 */
  (void)arc_add32(c, ARC_W_R(c, 19), UINT64_C(1), 0);
  /* feba8: cset w8, ne */
  ARC_W_W(c, 8, (ARC_COND(c, 1) ? 1 : 0));
  /* febac: b #0xfec50 */
  goto L_fec50;
L_febb0:;
  /* febb0: tbz w8, #0, #0xfec48 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_fec48;
  /* febb4: ldp x0, x1, [x20, #0x48] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(72));
    ARC_X_W(c, 0, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* febb8: add x10, x29, #0x18 */
  ARC_X_W(c, 10, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* febbc: ldr w9, [x20, #0x5c] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 20) + INT64_C(92))));
  /* febc0: sub x2, x29, #0xc */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(12)));
  /* febc4: add x4, sp, #8 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(8)));
  /* febc8: add x5, x29, #0x18 */
  ARC_X_W(c, 5, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* febcc: add x6, x10, #8 */
  ARC_X_W(c, 6, (ARC_X_R(c, 10) + UINT64_C(8)));
  /* febd0: sub x7, x29, #8 */
  ARC_X_W(c, 7, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* febd4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* febd8: stur w9, [x29, #-0xc] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-12)), ARC_W_R(c, 9));
  /* febdc: sub x9, x29, #0xc */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) - UINT64_C(12)));
  /* febe0: add x3, x9, #4 */
  ARC_X_W(c, 3, (ARC_X_R(c, 9) + UINT64_C(4)));
  /* febe4: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* febe8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1043436));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* febec: sub w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) - UINT64_C(1)));
  /* febf0: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* febf4: b.lo #0xfec40 */
  if (ARC_COND(c, 3)) goto L_fec40;
  /* febf8: cmp w0, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(3));
  /* febfc: b.ne #0xfec14 */
  if (ARC_COND(c, 1)) goto L_fec14;
  /* fec00: ldr w8, [x20, #0x5c] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(92))));
  /* fec04: add x9, x29, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* fec08: orr x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* fec0c: strb w8, [x29, #0x18] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(24)), ARC_W_R(c, 8));
  /* fec10: stur x9, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 9));
L_fec14:;
  /* fec14: add x21, x29, #0x18 */
  ARC_X_W(c, 21, (ARC_X_R(c, 29) + UINT64_C(24)));
L_fec18:;
  /* fec18: ldur x8, [x29, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* fec1c: cmp x8, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 21));
  /* fec20: b.ls #0xfec48 */
  if (ARC_COND(c, 9)) goto L_fec48;
  /* fec24: sub x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* fec28: ldr x1, [x20, #0x40] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 20) + INT64_C(64))));
  /* fec2c: stur x9, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 9));
  /* fec30: ldurb w0, [x8, #-1] */
  ARC_W_W(c, 0, arc_ld8((ARC_X_R(c, 8) + INT64_C(-1))));
  /* fec34: bl #0x143808 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1043512));
  fn1_143808(c);
  /* fec38: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* fec3c: b.ne #0xfec18 */
  if (ARC_COND(c, 1)) goto L_fec18;
L_fec40:;
  /* fec40: mov w19, #-1 */
  ARC_W_W(c, 19, UINT64_C(18446744073709551615));
  /* fec44: b #0xfec54 */
  goto L_fec54;
L_fec48:;
  /* fec48: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* fec4c: str w19, [x20, #0x5c] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(92)), ARC_W_R(c, 19));
L_fec50:;
  /* fec50: strb w8, [x20, #0x60] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(96)), ARC_W_R(c, 8));
L_fec54:;
  /* fec54: mov w0, w19 */
  ARC_W_W(c, 0, ARC_W_R(c, 19));
  /* fec58: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fec5c: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* fec60: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fec64: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* fec68: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fec6c: ret  */
  return;
}

void fn1_10bc34(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039024692));
  /* 10bc34: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 10bc38: sub sp, sp, #0x130 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(304)));
  /* 10bc3c: stp x29, x30, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 10bc40: stp x28, x23, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 10bc44: stp x22, x21, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 10bc48: stp x20, x19, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 10bc4c: add x29, sp, #0xf0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(240)));
  /* 10bc50: ldr w9, [x2, #8] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 2) + INT64_C(8))));
  /* 10bc54: mov w8, #0x25 */
  ARC_W_W(c, 8, UINT64_C(37));
  /* 10bc58: sub x10, x29, #8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 10bc5c: mov x22, x4 */
  ARC_X_W(c, 22, ARC_X_R(c, 4));
  /* 10bc60: mov w19, w3 */
  ARC_W_W(c, 19, ARC_W_R(c, 3));
  /* 10bc64: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 10bc68: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 10bc6c: stur x8, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 8));
  /* 10bc70: orr x8, x10, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) | UINT64_C(1)));
  /* 10bc74: tbz w9, #0xb, #0x10bca0 */
  if (((ARC_W_R(c, 9)) >> 11 & 1) == 0) goto L_10bca0;
  /* 10bc78: mov w10, #0x4a */
  ARC_W_W(c, 10, UINT64_C(74));
  /* 10bc7c: and w10, w9, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) & ARC_W_R(c, 10)));
  /* 10bc80: cmp w10, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(8));
  /* 10bc84: b.eq #0x10bca0 */
  if (ARC_COND(c, 0)) goto L_10bca0;
  /* 10bc88: cmp w10, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(64));
  /* 10bc8c: b.eq #0x10bca0 */
  if (ARC_COND(c, 0)) goto L_10bca0;
  /* 10bc90: sub x8, x29, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 10bc94: mov w10, #0x2b */
  ARC_W_W(c, 10, UINT64_C(43));
  /* 10bc98: orr x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(2)));
  /* 10bc9c: sturb w10, [x29, #-7] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-7)), ARC_W_R(c, 10));
L_10bca0:;
  /* 10bca0: tbz w9, #9, #0x10bcac */
  if (((ARC_W_R(c, 9)) >> 9 & 1) == 0) goto L_10bcac;
  /* 10bca4: mov w10, #0x23 */
  ARC_W_W(c, 10, UINT64_C(35));
  /* 10bca8: strb w10, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 10));
  }
L_10bcac:;
  /* 10bcac: mov w10, #0x4a */
  ARC_W_W(c, 10, UINT64_C(74));
  /* 10bcb0: mov w11, #0x6c6c */
  ARC_W_W(c, 11, UINT64_C(27756));
  /* 10bcb4: and w10, w9, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) & ARC_W_R(c, 10)));
  /* 10bcb8: strh w11, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 11));
  /* 10bcbc: cmp w10, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(64));
  /* 10bcc0: b.eq #0x10bce0 */
  if (ARC_COND(c, 0)) goto L_10bce0;
  /* 10bcc4: cmp w10, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(8));
  /* 10bcc8: b.ne #0x10bce8 */
  if (ARC_COND(c, 1)) goto L_10bce8;
  /* 10bccc: tst w9, #0x4000 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(16384)));
  /* 10bcd0: mov w9, #0x58 */
  ARC_W_W(c, 9, UINT64_C(88));
  /* 10bcd4: mov w10, #0x78 */
  ARC_W_W(c, 10, UINT64_C(120));
  /* 10bcd8: csel w9, w10, w9, eq */
  ARC_W_W(c, 9, (ARC_COND(c, 0) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* 10bcdc: b #0x10bcec */
  goto L_10bcec;
L_10bce0:;
  /* 10bce0: mov w9, #0x6f */
  ARC_W_W(c, 9, UINT64_C(111));
  /* 10bce4: b #0x10bcec */
  goto L_10bcec;
L_10bce8:;
  /* 10bce8: mov w9, #0x64 */
  ARC_W_W(c, 9, UINT64_C(100));
L_10bcec:;
  /* 10bcec: strb w9, [x8, #2] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(2)), ARC_W_R(c, 9));
  /* 10bcf0: nop  */
  /* nop: no architectural effect here */
  /* 10bcf4: adr x8, #0x15dc38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10bcf8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 10bcfc: adrp x23, #0x15d000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 10bd00: tbz w8, #0, #0x10bdfc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10bdfc;
L_10bd04:;
  /* 10bd04: ldr x2, [x23, #0xc30] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 23) + INT64_C(3120))));
  /* 10bd08: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 10bd0c: sub x3, x29, #8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 10bd10: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* 10bd14: mov x4, x22 */
  ARC_X_W(c, 4, ARC_X_R(c, 22));
  /* 10bd18: sub x22, x29, #0x20 */
  ARC_X_W(c, 22, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 10bd1c: bl #0x136860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1096992));
  fn1_136860(c);
  /* 10bd20: ldr w8, [x20, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(8))));
  /* 10bd24: mov w9, #0xb0 */
  ARC_W_W(c, 9, UINT64_C(176));
  /* 10bd28: add x22, x22, w0, sxtw */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + ((uint64_t)(int64_t)(int32_t)(ARC_W_R(c, 0)))));
  /* 10bd2c: and w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & ARC_W_R(c, 9)));
  /* 10bd30: mov x23, x22 */
  ARC_X_W(c, 23, ARC_X_R(c, 22));
  /* 10bd34: cmp w8, #0x20 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(32));
  /* 10bd38: b.eq #0x10bd94 */
  if (ARC_COND(c, 0)) goto L_10bd94;
  /* 10bd3c: cmp w8, #0x10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(16));
  /* 10bd40: b.ne #0x10bd90 */
  if (ARC_COND(c, 1)) goto L_10bd90;
  /* 10bd44: ldurb w8, [x29, #-0x20] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 10bd48: cmp w8, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(45));
  /* 10bd4c: b.eq #0x10bd58 */
  if (ARC_COND(c, 0)) goto L_10bd58;
  /* 10bd50: cmp w8, #0x2b */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(43));
  /* 10bd54: b.ne #0x10bd64 */
  if (ARC_COND(c, 1)) goto L_10bd64;
L_10bd58:;
  /* 10bd58: sub x8, x29, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 10bd5c: orr x23, x8, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 8) | UINT64_C(1)));
  /* 10bd60: b #0x10bd94 */
  goto L_10bd94;
L_10bd64:;
  /* 10bd64: cmp w0, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(2));
  /* 10bd68: b.lt #0x10bd90 */
  if (ARC_COND(c, 11)) goto L_10bd90;
  /* 10bd6c: cmp w8, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(48));
  /* 10bd70: b.ne #0x10bd90 */
  if (ARC_COND(c, 1)) goto L_10bd90;
  /* 10bd74: ldurb w8, [x29, #-0x1f] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-31))));
  /* 10bd78: orr w8, w8, #0x20 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(32)));
  /* 10bd7c: cmp w8, #0x78 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(120));
  /* 10bd80: b.ne #0x10bd90 */
  if (ARC_COND(c, 1)) goto L_10bd90;
  /* 10bd84: sub x8, x29, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 10bd88: orr x23, x8, #2 */
  ARC_X_W(c, 23, (ARC_X_R(c, 8) | UINT64_C(2)));
  /* 10bd8c: b #0x10bd94 */
  goto L_10bd94;
L_10bd90:;
  /* 10bd90: sub x23, x29, #0x20 */
  ARC_X_W(c, 23, (ARC_X_R(c, 29) - UINT64_C(32)));
L_10bd94:;
  /* 10bd94: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 10bd98: add x1, x20, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(48)));
  /* 10bd9c: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1097120));
  fn1_143460(c);
  /* 10bda0: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 10bda4: add x3, sp, #0x1c */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(28)));
  /* 10bda8: add x4, sp, #0x10 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(16)));
  /* 10bdac: add x5, sp, #8 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(8)));
  /* 10bdb0: mov x6, sp */
  ARC_X_W(c, 6, (c)->sp);
  /* 10bdb4: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 10bdb8: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 10bdbc: bl #0x143928 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1097152));
  fn1_143928(c);
  /* 10bdc0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 10bdc4: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1097160));
  fn1_143478(c);
  /* 10bdc8: ldp x3, x2, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 3, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 10bdcc: add x1, sp, #0x1c */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(28)));
  /* 10bdd0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 10bdd4: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* 10bdd8: mov w5, w19 */
  ARC_W_W(c, 5, ARC_W_R(c, 19));
  /* 10bddc: bl #0x10cdc0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1097184));
  fn1_10cdc0(c);
  /* 10bde0: ldp x20, x19, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 10bde4: ldp x22, x21, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 10bde8: ldp x28, x23, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 10bdec: ldp x29, x30, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 10bdf0: add sp, sp, #0x130 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(304)));
  /* 10bdf4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 10bdf8: ret  */
  return;
L_10bdfc:;
  /* 10bdfc: nop  */
  /* nop: no architectural effect here */
  /* 10be00: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10be04: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1097224));
  fn1_1424b8(c);
  /* 10be08: cbz w0, #0x10bd04 */
  if ((ARC_W_R(c, 0)) == 0) goto L_10bd04;
  /* 10be0c: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 10be10: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 10be14: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 10be18: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 10be1c: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1097248));
  fn1_1441e0(c);
  /* 10be20: str x0, [x23, #0xc30] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 10be24: nop  */
  /* nop: no architectural effect here */
  /* 10be28: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10be2c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1097264));
  fn1_1424d0(c);
  /* 10be30: b #0x10bd04 */
  goto L_10bd04;
  /* 10be34: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10be38: nop  */
  /* nop: no architectural effect here */
  /* 10be3c: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10be40: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1097284));
  fn1_1424e8(c);
  /* 10be44: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10be48: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1097292));
  fn1_9cc20(c);
  /* 10be4c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10be50: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 10be54: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1097304));
  fn1_143478(c);
  /* 10be58: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10be5c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1097312));
  fn1_9cc20(c);
}

void fn1_113ab0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057072));
  /* 113ab0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 113ab4: sub sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(192)));
  /* 113ab8: stp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 113abc: str x23, [sp, #0x90] */
  arc_st64(((c)->sp + INT64_C(144)), ARC_X_R(c, 23));
  /* 113ac0: stp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 113ac4: stp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 113ac8: add x29, sp, #0x80 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(128)));
  /* 113acc: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 113ad0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 113ad4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 113ad8: mov w8, #0x25 */
  ARC_W_W(c, 8, UINT64_C(37));
  /* 113adc: tst w5, #0xff */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 5) & UINT64_C(255)));
  /* 113ae0: strb w4, [x29, #0x19] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(25)), ARC_W_R(c, 4));
  /* 113ae4: strb w8, [x29, #0x18] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(24)), ARC_W_R(c, 8));
  /* 113ae8: strb w5, [x29, #0x1a] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(26)), ARC_W_R(c, 5));
  /* 113aec: strb wzr, [x29, #0x1b] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(27)), ARC_W_R(c, 31));
  /* 113af0: b.eq #0x113afc */
  if (ARC_COND(c, 0)) goto L_113afc;
  /* 113af4: strb w5, [x29, #0x19] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(25)), ARC_W_R(c, 5));
  /* 113af8: strb w4, [x29, #0x1a] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(26)), ARC_W_R(c, 4));
L_113afc:;
  /* 113afc: ldr x4, [x21] */
  ARC_X_W(c, 4, arc_ld64(ARC_X_R(c, 21)));
  /* 113b00: add x0, sp, #0x1c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(28)));
  /* 113b04: add x2, x29, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 113b08: mov w1, #0x64 */
  ARC_W_W(c, 1, UINT64_C(100));
  /* 113b0c: add x23, sp, #0x1c */
  ARC_X_W(c, 23, ((c)->sp + UINT64_C(28)));
  /* 113b10: bl #0x1444b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1129236));
  fn1_1444b0(c);
  /* 113b14: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 113b18: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 113b1c: stp x23, xzr, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 113b20: sub x8, x8, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 20)));
  /* 113b24: asr x22, x8, #2 */
  ARC_X_W(c, 22, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* 113b28: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1129260));
  fn1_1443c0(c);
  /* 113b2c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 113b30: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* 113b34: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 113b38: add x3, sp, #0x10 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(16)));
  /* 113b3c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 113b40: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 113b44: bl #0x1444c8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1129288));
  fn1_1444c8(c);
  /* 113b48: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 113b4c: cbz x21, #0x113b58 */
  if ((ARC_X_R(c, 21)) == 0) goto L_113b58;
  /* 113b50: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 113b54: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1129304));
  fn1_1443c0(c);
L_113b58:;
  /* 113b58: cmn x22, #1 */
  (void)arc_add64(c, ARC_X_R(c, 22), UINT64_C(1), 0);
  /* 113b5c: b.eq #0x113b84 */
  if (ARC_COND(c, 0)) goto L_113b84;
  /* 113b60: add x8, x20, x22, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + ((uint64_t)(ARC_X_R(c, 22)) << 2)));
  /* 113b64: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 113b68: ldp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 113b6c: ldr x23, [sp, #0x90] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(144))));
  /* 113b70: ldp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 113b74: ldp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 113b78: add sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(192)));
  /* 113b7c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 113b80: ret  */
  return;
L_113b84:;
  /* 113b84: adrp x0, #0x4f000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(323584)));
  /* 113b88: add x0, x0, #0x7a1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1953)));
  /* 113b8c: bl #0x142c98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1129360));
  fn1_142c98(c);
  /* 113b90: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1129364));
  fn1_a1454(c);
  /* 113b94: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 113b98: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 113b9c: bl #0x135428 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1129376));
  fn1_135428(c);
  /* 113ba0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 113ba4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1129384));
  fn1_9cc20(c);
}

void fn1_1140cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039058636));
  /* 1140cc: bti c */
  /* bti: no architectural effect here */
  /* 1140d0: ldr w0, [x0, #0x10] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1140d4: ret  */
  return;
}

void fn1_11fe4c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039107148));
  /* 11fe4c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 11fe50: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 11fe54: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 11fe58: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 11fe5c: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 11fe60: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 11fe64: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 11fe68: adrp x23, #0x151000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11fe6c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 11fe70: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11fe74: ldr x23, [x23, #0xc10] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 23) + INT64_C(3088))));
  /* 11fe78: ldar x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11fe7c: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11fe80: b.eq #0x11ff3c */
  if (ARC_COND(c, 0)) goto L_11ff3c;
  /* 11fe84: nop  */
  /* nop: no architectural effect here */
  /* 11fe88: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11fe8c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1179280));
  fn1_142518(c);
  /* 11fe90: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11fe94: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11fe98: b.ne #0x11fec4 */
  if (ARC_COND(c, 1)) goto L_11fec4;
  /* 11fe9c: nop  */
  /* nop: no architectural effect here */
  /* 11fea0: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11fea4: nop  */
  /* nop: no architectural effect here */
  /* 11fea8: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_11feac:;
  /* 11feac: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11feb0: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 11feb4: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1179320));
  fn1_142530(c);
  /* 11feb8: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11febc: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11fec0: b.eq #0x11feac */
  if (ARC_COND(c, 0)) goto L_11feac;
L_11fec4:;
  /* 11fec4: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11fec8: cbz x8, #0x11fedc */
  if ((ARC_X_R(c, 8)) == 0) goto L_11fedc;
  /* 11fecc: nop  */
  /* nop: no architectural effect here */
  /* 11fed0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11fed4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1179352));
  fn1_142560(c);
  /* 11fed8: b #0x11ff3c */
  goto L_11ff3c;
L_11fedc:;
  /* 11fedc: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11fee0: str x23, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 23));
  /* 11fee4: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11fee8: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 11feec: nop  */
  /* nop: no architectural effect here */
  /* 11fef0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11fef4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1179384));
  fn1_142560(c);
  /* 11fef8: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11fefc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11ff00: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11ff04: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1179400));
  fn1_a2030(c);
  /* 11ff08: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11ff0c: str w8, [x23, #8] */
  arc_st32((ARC_X_R(c, 23) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11ff10: nop  */
  /* nop: no architectural effect here */
  /* 11ff14: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11ff18: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1179420));
  fn1_142518(c);
  /* 11ff1c: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11ff20: stlr x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 11ff24: nop  */
  /* nop: no architectural effect here */
  /* 11ff28: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11ff2c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1179440));
  fn1_142560(c);
  /* 11ff30: nop  */
  /* nop: no architectural effect here */
  /* 11ff34: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11ff38: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1179452));
  fn1_142578(c);
L_11ff3c:;
  /* 11ff3c: ldrsw x8, [x23, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 23) + INT64_C(8)))));
  /* 11ff40: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 11ff44: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11ff48: sub x22, x8, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11ff4c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1179472));
  fn1_db2e0(c);
  /* 11ff50: mov x21, x20 */
  ARC_X_W(c, 21, ARC_X_R(c, 20));
  /* 11ff54: ldp x8, x9, [x21, #0x10]! */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11ff58: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11ff5c: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11ff60: cmp x10, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 22));
  /* 11ff64: b.hi #0x11ff90 */
  if (ARC_COND(c, 8)) goto L_11ff90;
  /* 11ff68: add x9, x22, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* 11ff6c: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11ff70: b.ls #0x11ff84 */
  if (ARC_COND(c, 9)) goto L_11ff84;
  /* 11ff74: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11ff78: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1179516));
  fn1_1352bc(c);
  /* 11ff7c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11ff80: b #0x11ff90 */
  goto L_11ff90;
L_11ff84:;
  /* 11ff84: b.hs #0x11ff90 */
  if (ARC_COND(c, 2)) goto L_11ff90;
  /* 11ff88: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11ff8c: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11ff90:;
  /* 11ff90: ldr x20, [x8, x22, lsl #3] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3))));
  /* 11ff94: cbz x20, #0x11ffb8 */
  if ((ARC_X_R(c, 20)) == 0) goto L_11ffb8;
  /* 11ff98: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 11ff9c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11ffa0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1179556));
  fn1_bd950(c);
  /* 11ffa4: cbnz x0, #0x11ffb8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11ffb8;
  /* 11ffa8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 11ffac: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11ffb0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11ffb4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1179576));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11ffb8:;
  /* 11ffb8: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11ffbc: str x19, [x8, x22, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3)), ARC_X_R(c, 19));
  /* 11ffc0: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 11ffc4: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 11ffc8: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 11ffcc: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 11ffd0: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 11ffd4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 11ffd8: ret  */
  return;
  /* 11ffdc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11ffe0: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 11ffe4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11ffe8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1179628));
  fn1_bd950(c);
  /* 11ffec: cbnz x0, #0x120014 */
  if ((ARC_X_R(c, 0)) != 0) goto L_120014;
  /* 11fff0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11fff4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11fff8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11fffc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1179648));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 120000: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 120004: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1179656));
  fn1_9cc20(c);
  /* 120008: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 12000c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 120010: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1179668));
  fn1_d2a78(c);
L_120014:;
  /* 120014: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 120018: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1179676));
  fn1_9cc20(c);
}

void fn1_126a60(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039134816));
  /* 126a60: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 126a64: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 126a68: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 126a6c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 126a70: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 126a74: bl #0x143f10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1206904));
  fn1_143f10(c);
  /* 126a78: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 126a7c: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* 126a80: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 126a84: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 126a88: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 126a8c: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_1291d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039144920));
  /* 1291d8: bti c */
  /* bti: no architectural effect here */
  /* 1291dc: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 1291e0: ret  */
  return;
}

void fn1_12aaac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039151276));
  /* 12aaac: bti c */
  /* bti: no architectural effect here */
  /* 12aab0: ldrb w9, [x0, #0x18] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12aab4: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 12aab8: tst w9, #4 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(4)));
  /* 12aabc: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* 12aac0: csel w0, w9, w8, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* 12aac4: ret  */
  return;
}

void fn1_12be64(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039156324));
  /* 12be64: bti c */
  /* bti: no architectural effect here */
  /* 12be68: mov w9, #0xa */
  ARC_W_W(c, 9, UINT64_C(10));
  /* 12be6c: mov w10, #0x6166 */
  ARC_W_W(c, 10, UINT64_C(24934));
  /* 12be70: movk w10, #0x736c, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1936457728)));
  /* 12be74: strb w9, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 12be78: mov w9, #0x65 */
  ARC_W_W(c, 9, UINT64_C(101));
  /* 12be7c: stur w10, [x8, #1] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(1)), ARC_W_R(c, 10));
  /* 12be80: sturh w9, [x8, #5] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(5)), ARC_W_R(c, 9));
  /* 12be84: ret  */
  return;
}

void fn1_134750(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039191376));
  /* 134750: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 134754: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 134758: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 13475c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 134760: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 134764: bl #0x143d78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1263464));
  fn1_143d78(c);
  /* 134768: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13476c: mov w1, #0x28 */
  ARC_W_W(c, 1, UINT64_C(40));
  /* 134770: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 134774: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 134778: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13477c: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_134e84(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039193220));
  /* 134e84: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 134e88: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 134e8c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 134e90: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 134e94: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 134e98: bl #0x134dcc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1265308));
  fn1_134dcc(c);
  /* 134e9c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 134ea0: mov w1, #0x88 */
  ARC_W_W(c, 1, UINT64_C(136));
  /* 134ea4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 134ea8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 134eac: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 134eb0: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_137b18(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039204632));
  /* 137b18: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 137b1c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 137b20: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 137b24: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 137b28: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 137b2c: bl #0x144558 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1276720));
  fn1_144558(c);
  /* 137b30: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 137b34: mov w1, #0x60 */
  ARC_W_W(c, 1, UINT64_C(96));
  /* 137b38: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 137b3c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 137b40: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 137b44: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_13b220(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039218720));
  /* 13b220: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13b224: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13b228: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 13b22c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 13b230: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13b234: ldr x0, [x0, #0x20] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(32))));
  /* 13b238: cbz x0, #0x13b244 */
  if ((ARC_X_R(c, 0)) == 0) goto L_13b244;
  /* 13b23c: bl #0x144618 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1290816));
  fn1_144618(c);
  /* 13b240: str xzr, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 31));
L_13b244:;
  /* 13b244: ldrb w8, [x19, #0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(64))));
  /* 13b248: tbz w8, #0, #0x13b25c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13b25c;
  /* 13b24c: ldr x8, [x19, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* 13b250: ldr x0, [x19, #0x50] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(80))));
  /* 13b254: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13b258: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1290844));
  fn1_142608(c);
L_13b25c:;
  /* 13b25c: ldrb w8, [x19, #0x28] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(40))));
  /* 13b260: tbnz w8, #0, #0x13b274 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_13b274;
  /* 13b264: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 13b268: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13b26c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13b270: ret  */
  return;
L_13b274:;
  /* 13b274: ldr x8, [x19, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(40))));
  /* 13b278: ldr x0, [x19, #0x38] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(56))));
  /* 13b27c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13b280: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 13b284: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13b288: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13b28c: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_142304(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039247620));
  /* 142304: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 142308: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 14230c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 142310: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 142314: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 142318: cmp x0, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(1));
  /* 14231c: mov w8, #8 */
  ARC_W_W(c, 8, UINT64_C(8));
  /* 142320: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* 142324: csinc x19, x0, xzr, hi */
  ARC_X_W(c, 19, (ARC_COND(c, 8) ? (ARC_X_R(c, 0)) : ((ARC_X_R(c, 31)) + 1)));
  /* 142328: cmp x1, #8 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(8));
  /* 14232c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 142330: csel x20, x1, x8, hi */
  ARC_X_W(c, 20, (ARC_COND(c, 8) ? (ARC_X_R(c, 1)) : ARC_X_R(c, 8)));
  /* 142334: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 142338: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 14233c: bl #0x142818 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1319744));
  fn1_142818(c);
  /* 142340: ldr x0, [x29, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 142344: cbnz x0, #0x142378 */
  if ((ARC_X_R(c, 0)) != 0) goto L_142378;
  /* 142348: adrp x21, #0x151000 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 14234c: ldr x21, [x21, #0x8c0] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 21) + INT64_C(2240))));
L_142350:;
  /* 142350: ldar x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 142354: cbz x8, #0x14238c */
  if ((ARC_X_R(c, 8)) == 0) goto L_14238c;
  /* 142358: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1319772));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 14235c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 142360: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 142364: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 142368: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* 14236c: bl #0x142818 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1319792));
  fn1_142818(c);
  /* 142370: ldr x0, [x29, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 142374: cbz x0, #0x142350 */
  if ((ARC_X_R(c, 0)) == 0) goto L_142350;
L_142378:;
  /* 142378: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 14237c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 142380: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 142384: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 142388: ret  */
  return;
L_14238c:;
  /* 14238c: mov w0, #8 */
  ARC_W_W(c, 0, UINT64_C(8));
  /* 142390: bl #0x142410 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1319828));
  fn1_142410(c);
  /* 142394: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 142398: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 14239c: adrp x2, #0x151000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1423a0: ldr x8, [x8, #0x8d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2256))));
  /* 1423a4: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 1423a8: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 1423ac: ldr x1, [x1, #0x8f0] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2288))));
  /* 1423b0: ldr x2, [x2, #0x900] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 2) + INT64_C(2304))));
  /* 1423b4: bl #0x142440 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1319864));
  fn1_142440(c);
}

void fn1_142998(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249304));
  /* 142998: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14299c: ldr x17, [x16, #0x68] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(104))));
  /* 1429a0: add x16, x16, #0x68 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(104)));
  /* 1429a4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1429a8: nop  */
  /* nop: no architectural effect here */
  /* 1429ac: nop  */
  /* nop: no architectural effect here */
}

void fn1_142f98(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250840));
  /* 142f98: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142f9c: ldr x17, [x16, #0x268] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(616))));
  /* 142fa0: add x16, x16, #0x268 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(616)));
  /* 142fa4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142fa8: nop  */
  /* nop: no architectural effect here */
  /* 142fac: nop  */
  /* nop: no architectural effect here */
}

void fn1_143598(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252376));
  /* 143598: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14359c: ldr x17, [x16, #0x468] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1128))));
  /* 1435a0: add x16, x16, #0x468 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1128)));
  /* 1435a4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1435a8: nop  */
  /* nop: no architectural effect here */
  /* 1435ac: nop  */
  /* nop: no architectural effect here */
}

void fn1_143b98(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253912));
  /* 143b98: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143b9c: ldr x17, [x16, #0x668] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1640))));
  /* 143ba0: add x16, x16, #0x668 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1640)));
  /* 143ba4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143ba8: nop  */
  /* nop: no architectural effect here */
  /* 143bac: nop  */
  /* nop: no architectural effect here */
}

void fn1_144198(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255448));
  /* 144198: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14419c: ldr x17, [x16, #0x868] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2152))));
  /* 1441a0: add x16, x16, #0x868 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2152)));
  /* 1441a4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1441a8: nop  */
  /* nop: no architectural effect here */
  /* 1441ac: nop  */
  /* nop: no architectural effect here */
}

void fn1_144798(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256984));
  /* 144798: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14479c: ldr x17, [x16, #0xa68] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2664))));
  /* 1447a0: add x16, x16, #0xa68 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2664)));
  /* 1447a4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1447a8: nop  */
  /* nop: no architectural effect here */
  /* 1447ac: nop  */
  /* nop: no architectural effect here */
}

