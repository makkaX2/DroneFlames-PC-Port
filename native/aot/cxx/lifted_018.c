#include "lifted.h"

void fn1_9ced4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038570708));
  /* 9ced4: bti c */
  /* bti: no architectural effect here */
  /* 9ced8: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 9cedc: ldr x16, [x8, #0x78] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(120))));
  /* 9cee0: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_a1504(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038588676));
  /* a1504: bti c */
  /* bti: no architectural effect here */
  /* a1508: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a150c: ldr x8, [x8, #0x8b0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2224))));
  /* a1510: ldar x0, [x8] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 8)));
  /* a1514: ret  */
  return;
}

void fn1_a27d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038593488));
  /* a27d0: bti c */
  /* bti: no architectural effect here */
  /* a27d4: mov w1, #0x28 */
  ARC_W_W(c, 1, UINT64_C(40));
  /* a27d8: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_a8b88(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038619016));
  /* a8b88: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a8b8c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a8b90: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* a8b94: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a8b98: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a8b9c: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* a8ba0: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* a8ba4: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* a8ba8: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* a8bac: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a8bb0: b.hi #0xa8bd4 */
  if (ARC_COND(c, 8)) goto L_a8bd4;
  /* a8bb4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a8bb8: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a8bbc: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(691136));
  fn1_1428a8(c);
  /* a8bc0: cbz x0, #0xa8c24 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a8c24;
  /* a8bc4: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a8bc8: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a8bcc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a8bd0: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_a8bd4:;
  /* a8bd4: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* a8bd8: add x0, x21, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* a8bdc: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a8be0: add x8, x8, #0xc10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3088)));
  /* a8be4: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* a8be8: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* a8bec: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a8bf0: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* a8bf4: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* a8bf8: mov w9, #0x540 */
  ARC_W_W(c, 9, UINT64_C(1344));
  /* a8bfc: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* a8c00: ldr q0, [x19] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 19)), arc_ld64(ARC_X_R(c, 19) + 8));
  /* a8c04: orr w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 9)));
  /* a8c08: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* a8c0c: str q0, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* a8c10: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a8c14: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* a8c18: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a8c1c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a8c20: ret  */
  return;
L_a8c24:;
  /* a8c24: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(691240));
  fn1_142488(c);
}

void fn1_afe50(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038648400));
  /* afe50: bti c */
  /* bti: no architectural effect here */
  /* afe54: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* afe58: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b4360(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038666080));
  /* b4360: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b4364: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* b4368: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b436c: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b4370: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b4374: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* b4378: ldp x8, x10, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b437c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b4380: ldr w11, [x1, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 1) + INT64_C(32))));
  /* b4384: ldr x0, [x1] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* b4388: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b438c: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b4390: add w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* b4394: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b4398: str w11, [x1, #0x20] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(32)), ARC_W_R(c, 11));
  /* b439c: b.ls #0xb43c8 */
  if (ARC_COND(c, 9)) goto L_b43c8;
  /* b43a0: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b43a4: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b43a8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b43ac: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b43b0: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b43b4: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(738232));
  fn1_142878(c);
  /* b43b8: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b43bc: cbz x0, #0xb4aa8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b4aa8;
  /* b43c0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b43c4: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b43c8:;
  /* b43c8: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b43cc: mov w9, #0x28 */
  ARC_W_W(c, 9, UINT64_C(40));
  /* b43d0: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b43d4: ldrb w8, [x20, #0x30] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(48))));
  /* b43d8: ldr x21, [x20, #0x18] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* b43dc: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* b43e0: b.ne #0xb43f0 */
  if (ARC_COND(c, 1)) goto L_b43f0;
  /* b43e4: cbnz x21, #0xb43f0 */
  if ((ARC_X_R(c, 21)) != 0) goto L_b43f0;
  /* b43e8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b43ec: b #0xb46a0 */
  goto L_b46a0;
L_b43f0:;
  /* b43f0: cbz w8, #0xb44d0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_b44d0;
  /* b43f4: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* b43f8: tst w8, #0x3c */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(60)));
  /* b43fc: b.eq #0xb4a30 */
  if (ARC_COND(c, 0)) goto L_b4a30;
  /* b4400: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b4404: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b4408: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b440c: add w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* b4410: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b4414: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* b4418: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b441c: b.ls #0xb4448 */
  if (ARC_COND(c, 9)) goto L_b4448;
  /* b4420: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b4424: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b4428: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b442c: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b4430: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b4434: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(738360));
  fn1_142878(c);
  /* b4438: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b443c: cbz x0, #0xb4ad8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b4ad8;
  /* b4440: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b4444: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b4448:;
  /* b4448: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b444c: mov w9, #0x28 */
  ARC_W_W(c, 9, UINT64_C(40));
  /* b4450: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b4454: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b4458: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b445c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b4460: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b4464: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(738408));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b4468: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* b446c: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b4470: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b4474: b.eq #0xb448c */
  if (ARC_COND(c, 0)) goto L_b448c;
  /* b4478: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b447c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b4480: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b4484: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b4488: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(738444));
  arc_dispatch(c, ARC_X_R(c, 8));
L_b448c:;
  /* b448c: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b4490: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b4494: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b4498: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* b449c: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b44a0: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* b44a4: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b44a8: b.ls #0xb459c */
  if (ARC_COND(c, 9)) goto L_b459c;
  /* b44ac: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b44b0: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b44b4: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b44b8: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b44bc: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b44c0: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(738500));
  fn1_142878(c);
  /* b44c4: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b44c8: cbnz x0, #0xb4594 */
  if ((ARC_X_R(c, 0)) != 0) goto L_b4594;
  /* b44cc: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(738512));
  fn1_1427b8(c);
L_b44d0:;
  /* b44d0: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b44d4: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b44d8: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b44dc: add w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* b44e0: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b44e4: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* b44e8: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b44ec: b.ls #0xb4518 */
  if (ARC_COND(c, 9)) goto L_b4518;
  /* b44f0: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b44f4: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b44f8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b44fc: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b4500: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b4504: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(738568));
  fn1_142878(c);
  /* b4508: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b450c: cbz x0, #0xb4acc */
  if ((ARC_X_R(c, 0)) == 0) goto L_b4acc;
  /* b4510: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b4514: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b4518:;
  /* b4518: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b451c: mov w9, #0x28 */
  ARC_W_W(c, 9, UINT64_C(40));
  /* b4520: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b4524: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b4528: mov w8, #0x2a */
  ARC_W_W(c, 8, UINT64_C(42));
  /* b452c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b4530: strb w8, [sp, #0x10] */
  arc_st8(((c)->sp + INT64_C(16)), ARC_W_R(c, 8));
  /* b4534: mov w8, #0x540 */
  ARC_W_W(c, 8, UINT64_C(1344));
  /* b4538: ldr x9, [x20, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* b453c: sturh w8, [sp, #0x11] */
  arc_st16(((c)->sp + INT64_C(17)), ARC_W_R(c, 8));
  /* b4540: adrp x8, #0x14a000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1351680)));
  /* b4544: add x8, x8, #0xf78 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3960)));
  /* b4548: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* b454c: str x9, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 9));
  /* b4550: bl #0xb4af0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(738644));
  fn1_b4af0(c);
  /* b4554: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b4558: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b455c: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b4560: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* b4564: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b4568: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* b456c: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b4570: b.ls #0xb459c */
  if (ARC_COND(c, 9)) goto L_b459c;
  /* b4574: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b4578: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b457c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b4580: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b4584: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b4588: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(738700));
  fn1_142878(c);
  /* b458c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b4590: cbz x0, #0xb4ad0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b4ad0;
L_b4594:;
  /* b4594: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b4598: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b459c:;
  /* b459c: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b45a0: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* b45a4: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
L_b45a8:;
  /* b45a8: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b45ac: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b45b0: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b45b4: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b45b8: b.ls #0xb45e0 */
  if (ARC_COND(c, 9)) goto L_b45e0;
  /* b45bc: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b45c0: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b45c4: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b45c8: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b45cc: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b45d0: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(738772));
  fn1_142878(c);
  /* b45d4: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b45d8: cbz x0, #0xb4ab4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b4ab4;
  /* b45dc: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b45e0:;
  /* b45e0: mov w9, #0x20 */
  ARC_W_W(c, 9, UINT64_C(32));
  /* b45e4: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b45e8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b45ec: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b45f0: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b45f4: ldr x21, [x20, #0x28] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(40))));
  /* b45f8: cbz x21, #0xb4654 */
  if ((ARC_X_R(c, 21)) == 0) goto L_b4654;
  /* b45fc: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b4600: add x9, x21, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* b4604: ldr x22, [x20, #0x20] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* b4608: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b460c: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b4610: b.ls #0xb4638 */
  if (ARC_COND(c, 9)) goto L_b4638;
  /* b4614: lsl x8, x10, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b4618: add x9, x9, #0x3e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(992)));
  /* b461c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b4620: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* b4624: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b4628: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(738860));
  fn1_142878(c);
  /* b462c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b4630: cbz x0, #0xb4ac4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b4ac4;
  /* b4634: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b4638:;
  /* b4638: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b463c: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* b4640: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* b4644: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(738888));
  fn1_1449d8(c);
  /* b4648: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b464c: add x8, x8, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* b4650: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_b4654:;
  /* b4654: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b4658: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b465c: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b4660: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b4664: b.ls #0xb468c */
  if (ARC_COND(c, 9)) goto L_b468c;
  /* b4668: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b466c: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b4670: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b4674: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b4678: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b467c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(738944));
  fn1_142878(c);
  /* b4680: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b4684: cbz x0, #0xb4abc */
  if ((ARC_X_R(c, 0)) == 0) goto L_b4abc;
  /* b4688: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b468c:;
  /* b468c: mov w9, #0x20 */
  ARC_W_W(c, 9, UINT64_C(32));
  /* b4690: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b4694: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b4698: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b469c: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_b46a0:;
  /* b46a0: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b46a4: add x10, x8, #3 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(3)));
  /* b46a8: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b46ac: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b46b0: b.ls #0xb46d8 */
  if (ARC_COND(c, 9)) goto L_b46d8;
  /* b46b4: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b46b8: add x8, x8, #0x3e3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(995)));
  /* b46bc: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b46c0: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b46c4: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b46c8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(739020));
  fn1_142878(c);
  /* b46cc: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b46d0: cbz x0, #0xb4aac */
  if ((ARC_X_R(c, 0)) == 0) goto L_b4aac;
  /* b46d4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b46d8:;
  /* b46d8: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b46dc: mov w9, #0x2e */
  ARC_W_W(c, 9, UINT64_C(46));
  /* b46e0: mov w10, #0x2e2e */
  ARC_W_W(c, 10, UINT64_C(11822));
  /* b46e4: strb w9, [x8, #2] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(2)), ARC_W_R(c, 9));
  /* b46e8: strh w10, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* b46ec: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b46f0: add x8, x9, #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(3)));
  /* b46f4: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b46f8: ldrb w10, [x20, #0x30] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 20) + INT64_C(48))));
  /* b46fc: tbnz w10, #0, #0xb4708 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_b4708;
  /* b4700: ldr x10, [x20, #0x18] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* b4704: cbz x10, #0xb49c4 */
  if ((ARC_X_R(c, 10)) == 0) goto L_b49c4;
L_b4708:;
  /* b4708: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b470c: add x11, x9, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(4)));
  /* b4710: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b4714: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* b4718: b.ls #0xb4740 */
  if (ARC_COND(c, 9)) goto L_b4740;
  /* b471c: lsl x8, x10, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b4720: add x9, x9, #0x3e4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(996)));
  /* b4724: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b4728: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* b472c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b4730: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(739124));
  fn1_142878(c);
  /* b4734: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b4738: cbz x0, #0xb4ab8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b4ab8;
  /* b473c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b4740:;
  /* b4740: mov w9, #0x20 */
  ARC_W_W(c, 9, UINT64_C(32));
  /* b4744: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b4748: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b474c: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b4750: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b4754: ldr x21, [x20, #0x28] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(40))));
  /* b4758: cbz x21, #0xb47b4 */
  if ((ARC_X_R(c, 21)) == 0) goto L_b47b4;
  /* b475c: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b4760: add x9, x21, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* b4764: ldr x22, [x20, #0x20] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* b4768: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b476c: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b4770: b.ls #0xb4798 */
  if (ARC_COND(c, 9)) goto L_b4798;
  /* b4774: lsl x8, x10, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b4778: add x9, x9, #0x3e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(992)));
  /* b477c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b4780: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* b4784: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b4788: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(739212));
  fn1_142878(c);
  /* b478c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b4790: cbz x0, #0xb4ac8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b4ac8;
  /* b4794: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b4798:;
  /* b4798: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b479c: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* b47a0: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* b47a4: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(739240));
  fn1_1449d8(c);
  /* b47a8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b47ac: add x8, x8, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* b47b0: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_b47b4:;
  /* b47b4: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b47b8: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b47bc: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b47c0: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b47c4: b.ls #0xb47ec */
  if (ARC_COND(c, 9)) goto L_b47ec;
  /* b47c8: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b47cc: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b47d0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b47d4: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b47d8: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b47dc: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(739296));
  fn1_142878(c);
  /* b47e0: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b47e4: cbz x0, #0xb4ac0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b4ac0;
  /* b47e8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b47ec:;
  /* b47ec: mov w9, #0x20 */
  ARC_W_W(c, 9, UINT64_C(32));
  /* b47f0: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b47f4: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b47f8: add x8, x9, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* b47fc: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b4800: ldrb w10, [x20, #0x30] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 20) + INT64_C(48))));
  /* b4804: cmp w10, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(1));
  /* b4808: b.ne #0xb48d4 */
  if (ARC_COND(c, 1)) goto L_b48d4;
  /* b480c: ldr w12, [x19, #0x20] */
  ARC_W_W(c, 12, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b4810: ldr x11, [x19, #0x10] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b4814: add x10, x9, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* b4818: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b481c: add w12, w12, #1 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) + UINT64_C(1)));
  /* b4820: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* b4824: str w12, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 12));
  /* b4828: b.ls #0xb4854 */
  if (ARC_COND(c, 9)) goto L_b4854;
  /* b482c: lsl x8, x11, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 11)) << ((UINT64_C(1)) & 63)));
  /* b4830: add x9, x9, #0x3e2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(994)));
  /* b4834: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b4838: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* b483c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b4840: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(739396));
  fn1_142878(c);
  /* b4844: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b4848: cbz x0, #0xb4ad4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b4ad4;
  /* b484c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b4850: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b4854:;
  /* b4854: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* b4858: mov w9, #0x28 */
  ARC_W_W(c, 9, UINT64_C(40));
  /* b485c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b4860: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b4864: mov w8, #0x2a */
  ARC_W_W(c, 8, UINT64_C(42));
  /* b4868: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b486c: strb w8, [sp, #0x10] */
  arc_st8(((c)->sp + INT64_C(16)), ARC_W_R(c, 8));
  /* b4870: mov w8, #0x540 */
  ARC_W_W(c, 8, UINT64_C(1344));
  /* b4874: ldr x9, [x20, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* b4878: sturh w8, [sp, #0x11] */
  arc_st16(((c)->sp + INT64_C(17)), ARC_W_R(c, 8));
  /* b487c: adrp x8, #0x14a000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1351680)));
  /* b4880: add x8, x8, #0xf78 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3960)));
  /* b4884: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* b4888: str x9, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 9));
  /* b488c: bl #0xb4af0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(739472));
  fn1_b4af0(c);
  /* b4890: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b4894: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b4898: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b489c: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* b48a0: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b48a4: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* b48a8: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b48ac: b.ls #0xb49b8 */
  if (ARC_COND(c, 9)) goto L_b49b8;
  /* b48b0: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b48b4: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b48b8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b48bc: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b48c0: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b48c4: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(739528));
  fn1_142878(c);
  /* b48c8: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b48cc: cbnz x0, #0xb49b0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_b49b0;
  /* b48d0: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(739540));
  fn1_1427b8(c);
L_b48d4:;
  /* b48d4: ldr x20, [x20, #0x18] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* b48d8: ldurh w10, [x20, #9] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b48dc: tst w10, #0x3c */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & UINT64_C(60)));
  /* b48e0: b.eq #0xb4a6c */
  if (ARC_COND(c, 0)) goto L_b4a6c;
  /* b48e4: ldr w12, [x19, #0x20] */
  ARC_W_W(c, 12, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b48e8: ldr x11, [x19, #0x10] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b48ec: add x10, x9, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* b48f0: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b48f4: add w12, w12, #1 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) + UINT64_C(1)));
  /* b48f8: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* b48fc: str w12, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 12));
  /* b4900: b.ls #0xb492c */
  if (ARC_COND(c, 9)) goto L_b492c;
  /* b4904: lsl x8, x11, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 11)) << ((UINT64_C(1)) & 63)));
  /* b4908: add x9, x9, #0x3e2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(994)));
  /* b490c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b4910: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* b4914: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b4918: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(739612));
  fn1_142878(c);
  /* b491c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b4920: cbz x0, #0xb4adc */
  if ((ARC_X_R(c, 0)) == 0) goto L_b4adc;
  /* b4924: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b4928: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b492c:;
  /* b492c: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* b4930: mov w9, #0x28 */
  ARC_W_W(c, 9, UINT64_C(40));
  /* b4934: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b4938: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b493c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b4940: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b4944: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b4948: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(739660));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b494c: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b4950: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b4954: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b4958: b.eq #0xb4970 */
  if (ARC_COND(c, 0)) goto L_b4970;
  /* b495c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b4960: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b4964: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b4968: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b496c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(739696));
  arc_dispatch(c, ARC_X_R(c, 8));
L_b4970:;
  /* b4970: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b4974: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b4978: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b497c: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* b4980: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b4984: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* b4988: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b498c: b.ls #0xb49b8 */
  if (ARC_COND(c, 9)) goto L_b49b8;
  /* b4990: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b4994: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b4998: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b499c: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b49a0: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b49a4: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(739752));
  fn1_142878(c);
  /* b49a8: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b49ac: cbz x0, #0xb4ae0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b4ae0;
L_b49b0:;
  /* b49b0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b49b4: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b49b8:;
  /* b49b8: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b49bc: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* b49c0: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
L_b49c4:;
  /* b49c4: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b49c8: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b49cc: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b49d0: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* b49d4: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b49d8: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* b49dc: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b49e0: b.ls #0xb4a0c */
  if (ARC_COND(c, 9)) goto L_b4a0c;
  /* b49e4: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b49e8: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b49ec: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b49f0: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b49f4: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b49f8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(739836));
  fn1_142878(c);
  /* b49fc: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b4a00: cbz x0, #0xb4ab0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b4ab0;
  /* b4a04: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b4a08: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b4a0c:;
  /* b4a0c: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b4a10: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* b4a14: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b4a18: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b4a1c: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* b4a20: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b4a24: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* b4a28: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b4a2c: ret  */
  return;
L_b4a30:;
  /* b4a30: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b4a34: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b4a38: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b4a3c: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b4a40: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(739908));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b4a44: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* b4a48: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b4a4c: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b4a50: b.eq #0xb45a8 */
  if (ARC_COND(c, 0)) goto L_b45a8;
  /* b4a54: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b4a58: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b4a5c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b4a60: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b4a64: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(739944));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b4a68: b #0xb45a8 */
  goto L_b45a8;
L_b4a6c:;
  /* b4a6c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b4a70: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b4a74: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b4a78: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b4a7c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(739968));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b4a80: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b4a84: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b4a88: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b4a8c: b.eq #0xb49c4 */
  if (ARC_COND(c, 0)) goto L_b49c4;
  /* b4a90: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b4a94: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b4a98: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b4a9c: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b4aa0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(740004));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b4aa4: b #0xb49c4 */
  goto L_b49c4;
L_b4aa8:;
  /* b4aa8: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(740012));
  fn1_1427b8(c);
L_b4aac:;
  /* b4aac: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(740016));
  fn1_1427b8(c);
L_b4ab0:;
  /* b4ab0: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(740020));
  fn1_1427b8(c);
L_b4ab4:;
  /* b4ab4: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(740024));
  fn1_1427b8(c);
L_b4ab8:;
  /* b4ab8: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(740028));
  fn1_1427b8(c);
L_b4abc:;
  /* b4abc: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(740032));
  fn1_1427b8(c);
L_b4ac0:;
  /* b4ac0: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(740036));
  fn1_1427b8(c);
L_b4ac4:;
  /* b4ac4: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(740040));
  fn1_1427b8(c);
L_b4ac8:;
  /* b4ac8: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(740044));
  fn1_1427b8(c);
L_b4acc:;
  /* b4acc: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(740048));
  fn1_1427b8(c);
L_b4ad0:;
  /* b4ad0: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(740052));
  fn1_1427b8(c);
L_b4ad4:;
  /* b4ad4: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(740056));
  fn1_1427b8(c);
L_b4ad8:;
  /* b4ad8: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(740060));
  fn1_1427b8(c);
L_b4adc:;
  /* b4adc: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(740064));
  fn1_1427b8(c);
L_b4ae0:;
  /* b4ae0: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(740068));
  fn1_1427b8(c);
}

void fn1_b7ca8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038680744));
  /* b7ca8: bti c */
  /* bti: no architectural effect here */
  /* b7cac: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* b7cb0: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_bac30(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038692912));
  /* bac30: bti c */
  /* bti: no architectural effect here */
  /* bac34: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* bac38: ret  */
  return;
}

void fn1_bd928(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038704424));
  /* bd928: bti c */
  /* bti: no architectural effect here */
  /* bd92c: mov x1, x2 */
  ARC_X_W(c, 1, ARC_X_R(c, 2));
  /* bd930: b #0x142938 */
  fn1_142938(c); return;
}

void fn1_cf084(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038775940));
L_cf084:;
  /* cf084: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* cf088: sub sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(176)));
  /* cf08c: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* cf090: stp x28, x27, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* cf094: stp x26, x25, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* cf098: stp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* cf09c: stp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* cf0a0: stp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* cf0a4: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* cf0a8: mov w22, w3 */
  ARC_W_W(c, 22, ARC_W_R(c, 3));
  /* cf0ac: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* cf0b0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* cf0b4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_cf0b8:;
  /* cf0b8: mov x23, x19 */
  ARC_X_W(c, 23, ARC_X_R(c, 19));
L_cf0bc:;
  /* cf0bc: sub x8, x20, x23 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) - ARC_X_R(c, 23)));
  /* cf0c0: mov x19, x23 */
  ARC_X_W(c, 19, ARC_X_R(c, 23));
  /* cf0c4: asr x24, x8, #4 */
  ARC_X_W(c, 24, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(4)) & 63))));
  /* cf0c8: subs x8, x24, #2 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 24), UINT64_C(2)));
  /* cf0cc: b.gt #0xcf0e0 */
  if (ARC_COND(c, 12)) goto L_cf0e0;
  /* cf0d0: b.lo #0xcfd64 */
  if (ARC_COND(c, 3)) goto L_cfd64;
  /* cf0d4: cmp x24, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 24), UINT64_C(2));
  /* cf0d8: b.ne #0xcf0f8 */
  if (ARC_COND(c, 1)) goto L_cf0f8;
  /* cf0dc: b #0xcf754 */
  goto L_cf754;
L_cf0e0:;
  /* cf0e0: cmp x24, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 24), UINT64_C(3));
  /* cf0e4: b.eq #0xcf77c */
  if (ARC_COND(c, 0)) goto L_cf77c;
  /* cf0e8: cmp x24, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 24), UINT64_C(4));
  /* cf0ec: b.eq #0xcf7b0 */
  if (ARC_COND(c, 0)) goto L_cf7b0;
  /* cf0f0: cmp x24, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 24), UINT64_C(5));
  /* cf0f4: b.eq #0xcf714 */
  if (ARC_COND(c, 0)) goto L_cf714;
L_cf0f8:;
  /* cf0f8: cmp x24, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 24), UINT64_C(23));
  /* cf0fc: b.le #0xcf7e8 */
  if (ARC_COND(c, 13)) goto L_cf7e8;
  /* cf100: cbz x21, #0xcf87c */
  if ((ARC_X_R(c, 21)) == 0) goto L_cf87c;
  /* cf104: lsr x8, x24, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 24)) >> ((UINT64_C(1)) & 63)));
  /* cf108: ldur q0, [x20, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 20) + INT64_C(-16)) + 8));
  /* cf10c: cmp x24, #0x81 */
  (void)arc_sub64(c, ARC_X_R(c, 24), UINT64_C(129));
  /* cf110: add x23, x19, x8, lsl #4 */
  ARC_X_W(c, 23, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 8)) << 4)));
  /* cf114: stur q0, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)) + 8, (c)->q[0].u64[1]);
  /* cf118: b.lo #0xcf150 */
  if (ARC_COND(c, 3)) goto L_cf150;
  /* cf11c: ldr q0, [x23] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 23)), arc_ld64(ARC_X_R(c, 23) + 8));
  /* cf120: ldr q1, [x19] */
  arc_q_w(c, 1, arc_ld64(ARC_X_R(c, 19)), arc_ld64(ARC_X_R(c, 19) + 8));
  /* cf124: stur q0, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)) + 8, (c)->q[0].u64[1]);
  /* cf128: str q1, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), (c)->q[1].u64[0]);
  arc_st64(((c)->sp + INT64_C(32)) + 8, (c)->q[1].u64[1]);
  /* cf12c: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(848176));
  fn1_bf250(c);
  /* cf130: tbz w0, #0x1f, #0xcf184 */
  if (((ARC_W_R(c, 0)) >> 31 & 1) == 0) goto L_cf184;
  /* cf134: ldp q1, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cf138: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(848188));
  fn1_bf250(c);
  /* cf13c: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cf140: b.ge #0xcf20c */
  if (ARC_COND(c, 10)) goto L_cf20c;
  /* cf144: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cf148: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* cf14c: b #0xcf238 */
  goto L_cf238;
L_cf150:;
  /* cf150: ldr q0, [x19] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 19)), arc_ld64(ARC_X_R(c, 19) + 8));
  /* cf154: ldr q1, [x23] */
  arc_q_w(c, 1, arc_ld64(ARC_X_R(c, 23)), arc_ld64(ARC_X_R(c, 23) + 8));
  /* cf158: stur q0, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)) + 8, (c)->q[0].u64[1]);
  /* cf15c: str q1, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), (c)->q[1].u64[0]);
  arc_st64(((c)->sp + INT64_C(32)) + 8, (c)->q[1].u64[1]);
  /* cf160: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(848228));
  fn1_bf250(c);
  /* cf164: tbz w0, #0x1f, #0xcf1c8 */
  if (((ARC_W_R(c, 0)) >> 31 & 1) == 0) goto L_cf1c8;
  /* cf168: ldp q1, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cf16c: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(848240));
  fn1_bf250(c);
  /* cf170: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cf174: b.ge #0xcf2bc */
  if (ARC_COND(c, 10)) goto L_cf2bc;
  /* cf178: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cf17c: str q0, [x23] */
  arc_st64(ARC_X_R(c, 23), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 23) + 8, (c)->q[0].u64[1]);
  /* cf180: b #0xcf2e8 */
  goto L_cf2e8;
L_cf184:;
  /* cf184: ldp q1, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cf188: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(848268));
  fn1_bf250(c);
  /* cf18c: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cf190: b.ge #0xcf240 */
  if (ARC_COND(c, 10)) goto L_cf240;
  /* cf194: ldp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cf198: str q1, [x23] */
  arc_st64(ARC_X_R(c, 23), (c)->q[1].u64[0]);
  arc_st64(ARC_X_R(c, 23) + 8, (c)->q[1].u64[1]);
  /* cf19c: stur q0, [x20, #-0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(-16)) + 8, (c)->q[0].u64[1]);
  /* cf1a0: ldr q0, [x23] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 23)), arc_ld64(ARC_X_R(c, 23) + 8));
  /* cf1a4: ldr q1, [x19] */
  arc_q_w(c, 1, arc_ld64(ARC_X_R(c, 19)), arc_ld64(ARC_X_R(c, 19) + 8));
  /* cf1a8: stp q1, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* cf1ac: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(848304));
  fn1_bf250(c);
  /* cf1b0: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cf1b4: b.ge #0xcf240 */
  if (ARC_COND(c, 10)) goto L_cf240;
  /* cf1b8: ldp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cf1bc: str q1, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[1].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[1].u64[1]);
  /* cf1c0: str q0, [x23] */
  arc_st64(ARC_X_R(c, 23), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 23) + 8, (c)->q[0].u64[1]);
  /* cf1c4: b #0xcf240 */
  goto L_cf240;
L_cf1c8:;
  /* cf1c8: ldp q1, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cf1cc: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(848336));
  fn1_bf250(c);
  /* cf1d0: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cf1d4: b.ge #0xcf498 */
  if (ARC_COND(c, 10)) goto L_cf498;
  /* cf1d8: ldp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cf1dc: str q1, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[1].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[1].u64[1]);
  /* cf1e0: stur q0, [x20, #-0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(-16)) + 8, (c)->q[0].u64[1]);
  /* cf1e4: ldr q0, [x19] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 19)), arc_ld64(ARC_X_R(c, 19) + 8));
  /* cf1e8: ldr q1, [x23] */
  arc_q_w(c, 1, arc_ld64(ARC_X_R(c, 23)), arc_ld64(ARC_X_R(c, 23) + 8));
  /* cf1ec: stp q1, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* cf1f0: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(848372));
  fn1_bf250(c);
  /* cf1f4: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cf1f8: b.ge #0xcf498 */
  if (ARC_COND(c, 10)) goto L_cf498;
  /* cf1fc: ldp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cf200: str q1, [x23] */
  arc_st64(ARC_X_R(c, 23), (c)->q[1].u64[0]);
  arc_st64(ARC_X_R(c, 23) + 8, (c)->q[1].u64[1]);
  /* cf204: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* cf208: b #0xcf498 */
  goto L_cf498;
L_cf20c:;
  /* cf20c: ldur q0, [x29, #-0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* cf210: ldr q1, [sp, #0x20] */
  arc_q_w(c, 1, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* cf214: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* cf218: str q1, [x23] */
  arc_st64(ARC_X_R(c, 23), (c)->q[1].u64[0]);
  arc_st64(ARC_X_R(c, 23) + 8, (c)->q[1].u64[1]);
  /* cf21c: ldur q0, [x20, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 20) + INT64_C(-16)) + 8));
  /* cf220: stur q0, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)) + 8, (c)->q[0].u64[1]);
  /* cf224: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(848424));
  fn1_bf250(c);
  /* cf228: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cf22c: b.ge #0xcf240 */
  if (ARC_COND(c, 10)) goto L_cf240;
  /* cf230: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cf234: str q0, [x23] */
  arc_st64(ARC_X_R(c, 23), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 23) + 8, (c)->q[0].u64[1]);
L_cf238:;
  /* cf238: ldr q0, [sp, #0x20] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* cf23c: stur q0, [x20, #-0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(-16)) + 8, (c)->q[0].u64[1]);
L_cf240:;
  /* cf240: ldur q0, [x23, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 23) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 23) + INT64_C(-16)) + 8));
  /* cf244: ldr q1, [x19, #0x10] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))), arc_ld64((ARC_X_R(c, 19) + INT64_C(16)) + 8));
  /* cf248: ldur q2, [x20, #-0x20] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 20) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 20) + INT64_C(-32)) + 8));
  /* cf24c: stp q2, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, (c)->q[2].u64[0]);
    arc_st64(_pa + 8, (c)->q[2].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* cf250: str q1, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), (c)->q[1].u64[0]);
  arc_st64(((c)->sp + INT64_C(32)) + 8, (c)->q[1].u64[1]);
  /* cf254: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(848472));
  fn1_bf250(c);
  /* cf258: tbz w0, #0x1f, #0xcf278 */
  if (((ARC_W_R(c, 0)) >> 31 & 1) == 0) goto L_cf278;
  /* cf25c: ldp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cf260: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(848484));
  fn1_bf250(c);
  /* cf264: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cf268: b.ge #0xcf2f4 */
  if (ARC_COND(c, 10)) goto L_cf2f4;
  /* cf26c: ldur q0, [x29, #-0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* cf270: str q0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* cf274: b #0xcf320 */
  goto L_cf320;
L_cf278:;
  /* cf278: ldp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cf27c: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(848512));
  fn1_bf250(c);
  /* cf280: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cf284: b.ge #0xcf328 */
  if (ARC_COND(c, 10)) goto L_cf328;
  /* cf288: ldp q1, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cf28c: stur q1, [x23, #-0x10] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(-16)), (c)->q[1].u64[0]);
  arc_st64((ARC_X_R(c, 23) + INT64_C(-16)) + 8, (c)->q[1].u64[1]);
  /* cf290: stur q0, [x20, #-0x20] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-32)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(-32)) + 8, (c)->q[0].u64[1]);
  /* cf294: ldur q0, [x23, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 23) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 23) + INT64_C(-16)) + 8));
  /* cf298: ldr q1, [x19, #0x10] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))), arc_ld64((ARC_X_R(c, 19) + INT64_C(16)) + 8));
  /* cf29c: stp q1, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* cf2a0: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(848548));
  fn1_bf250(c);
  /* cf2a4: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cf2a8: b.ge #0xcf328 */
  if (ARC_COND(c, 10)) goto L_cf328;
  /* cf2ac: ldp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cf2b0: str q1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), (c)->q[1].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)) + 8, (c)->q[1].u64[1]);
  /* cf2b4: stur q0, [x23, #-0x10] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(-16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 23) + INT64_C(-16)) + 8, (c)->q[0].u64[1]);
  /* cf2b8: b #0xcf328 */
  goto L_cf328;
L_cf2bc:;
  /* cf2bc: ldur q0, [x29, #-0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* cf2c0: ldr q1, [sp, #0x20] */
  arc_q_w(c, 1, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* cf2c4: str q0, [x23] */
  arc_st64(ARC_X_R(c, 23), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 23) + 8, (c)->q[0].u64[1]);
  /* cf2c8: str q1, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[1].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[1].u64[1]);
  /* cf2cc: ldur q0, [x20, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 20) + INT64_C(-16)) + 8));
  /* cf2d0: stur q0, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)) + 8, (c)->q[0].u64[1]);
  /* cf2d4: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(848600));
  fn1_bf250(c);
  /* cf2d8: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cf2dc: b.ge #0xcf498 */
  if (ARC_COND(c, 10)) goto L_cf498;
  /* cf2e0: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cf2e4: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
L_cf2e8:;
  /* cf2e8: ldr q0, [sp, #0x20] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* cf2ec: stur q0, [x20, #-0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(-16)) + 8, (c)->q[0].u64[1]);
  /* cf2f0: b #0xcf498 */
  goto L_cf498;
L_cf2f4:;
  /* cf2f4: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cf2f8: ldr q1, [sp, #0x20] */
  arc_q_w(c, 1, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* cf2fc: str q0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* cf300: stur q1, [x23, #-0x10] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(-16)), (c)->q[1].u64[0]);
  arc_st64((ARC_X_R(c, 23) + INT64_C(-16)) + 8, (c)->q[1].u64[1]);
  /* cf304: ldur q0, [x20, #-0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 20) + INT64_C(-32)) + 8));
  /* cf308: stur q0, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)) + 8, (c)->q[0].u64[1]);
  /* cf30c: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(848656));
  fn1_bf250(c);
  /* cf310: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cf314: b.ge #0xcf328 */
  if (ARC_COND(c, 10)) goto L_cf328;
  /* cf318: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cf31c: stur q0, [x23, #-0x10] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(-16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 23) + INT64_C(-16)) + 8, (c)->q[0].u64[1]);
L_cf320:;
  /* cf320: ldr q0, [sp, #0x20] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* cf324: stur q0, [x20, #-0x20] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-32)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(-32)) + 8, (c)->q[0].u64[1]);
L_cf328:;
  /* cf328: ldr q0, [x23, #0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 23) + INT64_C(16))), arc_ld64((ARC_X_R(c, 23) + INT64_C(16)) + 8));
  /* cf32c: ldr q1, [x19, #0x20] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))), arc_ld64((ARC_X_R(c, 19) + INT64_C(32)) + 8));
  /* cf330: ldur q2, [x20, #-0x30] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 20) + INT64_C(-48))), arc_ld64((ARC_X_R(c, 20) + INT64_C(-48)) + 8));
  /* cf334: stp q2, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, (c)->q[2].u64[0]);
    arc_st64(_pa + 8, (c)->q[2].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* cf338: str q1, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), (c)->q[1].u64[0]);
  arc_st64(((c)->sp + INT64_C(32)) + 8, (c)->q[1].u64[1]);
  /* cf33c: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(848704));
  fn1_bf250(c);
  /* cf340: tbz w0, #0x1f, #0xcf360 */
  if (((ARC_W_R(c, 0)) >> 31 & 1) == 0) goto L_cf360;
  /* cf344: ldp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cf348: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(848716));
  fn1_bf250(c);
  /* cf34c: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cf350: b.ge #0xcf3a4 */
  if (ARC_COND(c, 10)) goto L_cf3a4;
  /* cf354: ldur q0, [x29, #-0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* cf358: str q0, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)) + 8, (c)->q[0].u64[1]);
  /* cf35c: b #0xcf3d0 */
  goto L_cf3d0;
L_cf360:;
  /* cf360: ldp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cf364: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(848744));
  fn1_bf250(c);
  /* cf368: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cf36c: b.ge #0xcf3d8 */
  if (ARC_COND(c, 10)) goto L_cf3d8;
  /* cf370: ldp q1, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cf374: str q1, [x23, #0x10] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(16)), (c)->q[1].u64[0]);
  arc_st64((ARC_X_R(c, 23) + INT64_C(16)) + 8, (c)->q[1].u64[1]);
  /* cf378: stur q0, [x20, #-0x30] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-48)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(-48)) + 8, (c)->q[0].u64[1]);
  /* cf37c: ldr q0, [x23, #0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 23) + INT64_C(16))), arc_ld64((ARC_X_R(c, 23) + INT64_C(16)) + 8));
  /* cf380: ldr q1, [x19, #0x20] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))), arc_ld64((ARC_X_R(c, 19) + INT64_C(32)) + 8));
  /* cf384: stp q1, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* cf388: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(848780));
  fn1_bf250(c);
  /* cf38c: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cf390: b.ge #0xcf3d8 */
  if (ARC_COND(c, 10)) goto L_cf3d8;
  /* cf394: ldp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cf398: str q1, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), (c)->q[1].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)) + 8, (c)->q[1].u64[1]);
  /* cf39c: str q0, [x23, #0x10] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 23) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* cf3a0: b #0xcf3d8 */
  goto L_cf3d8;
L_cf3a4:;
  /* cf3a4: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cf3a8: ldr q1, [sp, #0x20] */
  arc_q_w(c, 1, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* cf3ac: str q0, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)) + 8, (c)->q[0].u64[1]);
  /* cf3b0: str q1, [x23, #0x10] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(16)), (c)->q[1].u64[0]);
  arc_st64((ARC_X_R(c, 23) + INT64_C(16)) + 8, (c)->q[1].u64[1]);
  /* cf3b4: ldur q0, [x20, #-0x30] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(-48))), arc_ld64((ARC_X_R(c, 20) + INT64_C(-48)) + 8));
  /* cf3b8: stur q0, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)) + 8, (c)->q[0].u64[1]);
  /* cf3bc: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(848832));
  fn1_bf250(c);
  /* cf3c0: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cf3c4: b.ge #0xcf3d8 */
  if (ARC_COND(c, 10)) goto L_cf3d8;
  /* cf3c8: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cf3cc: str q0, [x23, #0x10] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 23) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
L_cf3d0:;
  /* cf3d0: ldr q0, [sp, #0x20] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* cf3d4: stur q0, [x20, #-0x30] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-48)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(-48)) + 8, (c)->q[0].u64[1]);
L_cf3d8:;
  /* cf3d8: ldp q1, q2, [x23, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(-16));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 2, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cf3dc: ldr q0, [x23, #0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 23) + INT64_C(16))), arc_ld64((ARC_X_R(c, 23) + INT64_C(16)) + 8));
  /* cf3e0: stp q2, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, (c)->q[2].u64[0]);
    arc_st64(_pa + 8, (c)->q[2].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* cf3e4: mov v0.16b, v2.16b */
  (c)->q[0] = (c)->q[2];
  /* cf3e8: str q1, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), (c)->q[1].u64[0]);
  arc_st64(((c)->sp + INT64_C(32)) + 8, (c)->q[1].u64[1]);
  /* cf3ec: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(848880));
  fn1_bf250(c);
  /* cf3f0: tbz w0, #0x1f, #0xcf418 */
  if (((ARC_W_R(c, 0)) >> 31 & 1) == 0) goto L_cf418;
  /* cf3f4: ldp q1, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cf3f8: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(848892));
  fn1_bf250(c);
  /* cf3fc: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cf400: b.ge #0xcf450 */
  if (ARC_COND(c, 10)) goto L_cf450;
  /* cf404: ldr q0, [sp, #0x20] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* cf408: str q0, [x23, #0x10] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 23) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* cf40c: ldp q1, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cf410: stur q0, [x23, #-0x10] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(-16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 23) + INT64_C(-16)) + 8, (c)->q[0].u64[1]);
  /* cf414: b #0xcf48c */
  goto L_cf48c;
L_cf418:;
  /* cf418: ldp q1, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cf41c: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(848928));
  fn1_bf250(c);
  /* cf420: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cf424: b.ge #0xcf478 */
  if (ARC_COND(c, 10)) goto L_cf478;
  /* cf428: ldp q1, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cf42c: stp q0, q1, [x23] */
  { const uint64_t _pa = ARC_X_R(c, 23);
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* cf430: ldr q1, [sp, #0x20] */
  arc_q_w(c, 1, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* cf434: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(848952));
  fn1_bf250(c);
  /* cf438: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cf43c: b.ge #0xcf480 */
  if (ARC_COND(c, 10)) goto L_cf480;
  /* cf440: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cf444: ldr q1, [sp, #0x20] */
  arc_q_w(c, 1, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* cf448: stp q0, q1, [x23, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* cf44c: b #0xcf48c */
  goto L_cf48c;
L_cf450:;
  /* cf450: ldp q2, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 2, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cf454: ldr q1, [sp, #0x20] */
  arc_q_w(c, 1, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* cf458: stp q2, q1, [x23, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(-16));
    arc_st64(_pa, (c)->q[2].u64[0]);
    arc_st64(_pa + 8, (c)->q[2].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* cf45c: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(848992));
  fn1_bf250(c);
  /* cf460: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cf464: b.ge #0xcf488 */
  if (ARC_COND(c, 10)) goto L_cf488;
  /* cf468: ldur q1, [x29, #-0x10] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cf46c: ldr q0, [sp, #0x20] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* cf470: stp q1, q0, [x23] */
  { const uint64_t _pa = ARC_X_R(c, 23);
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* cf474: b #0xcf48c */
  goto L_cf48c;
L_cf478:;
  /* cf478: ldur q1, [x29, #-0x20] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* cf47c: b #0xcf48c */
  goto L_cf48c;
L_cf480:;
  /* cf480: ldur q1, [x29, #-0x10] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cf484: b #0xcf48c */
  goto L_cf48c;
L_cf488:;
  /* cf488: ldr q1, [sp, #0x20] */
  arc_q_w(c, 1, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
L_cf48c:;
  /* cf48c: ldr q0, [x19] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 19)), arc_ld64(ARC_X_R(c, 19) + 8));
  /* cf490: str q1, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[1].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[1].u64[1]);
  /* cf494: str q0, [x23] */
  arc_st64(ARC_X_R(c, 23), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 23) + 8, (c)->q[0].u64[1]);
L_cf498:;
  /* cf498: ldr q1, [x19] */
  arc_q_w(c, 1, arc_ld64(ARC_X_R(c, 19)), arc_ld64(ARC_X_R(c, 19) + 8));
  /* cf49c: sub x21, x21, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) - UINT64_C(1)));
  /* cf4a0: stur q1, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), (c)->q[1].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)) + 8, (c)->q[1].u64[1]);
  /* cf4a4: tbnz w22, #0, #0xcf4b8 */
  if (((ARC_W_R(c, 22)) >> 0 & 1) != 0) goto L_cf4b8;
  /* cf4a8: ldur q0, [x19, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 19) + INT64_C(-16)) + 8));
  /* cf4ac: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(849072));
  fn1_bf250(c);
  /* cf4b0: ldur q1, [x29, #-0x10] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cf4b4: tbz w0, #0x1f, #0xcf60c */
  if (((ARC_W_R(c, 0)) >> 31 & 1) == 0) goto L_cf60c;
L_cf4b8:;
  /* cf4b8: mov x23, xzr */
  ARC_X_W(c, 23, ARC_X_R(c, 31));
L_cf4bc:;
  /* cf4bc: add x8, x19, x23 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 23)));
  /* cf4c0: add x23, x23, #0x10 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(16)));
  /* cf4c4: ldr q0, [x8, #0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))), arc_ld64((ARC_X_R(c, 8) + INT64_C(16)) + 8));
  /* cf4c8: stur q0, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)) + 8, (c)->q[0].u64[1]);
  /* cf4cc: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(849104));
  fn1_bf250(c);
  /* cf4d0: ldur q1, [x29, #-0x10] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cf4d4: tbnz w0, #0x1f, #0xcf4bc */
  if (((ARC_W_R(c, 0)) >> 31 & 1) != 0) goto L_cf4bc;
  /* cf4d8: cmp x23, #0x10 */
  (void)arc_sub64(c, ARC_X_R(c, 23), UINT64_C(16));
  /* cf4dc: add x23, x19, x23 */
  ARC_X_W(c, 23, (ARC_X_R(c, 19) + ARC_X_R(c, 23)));
  /* cf4e0: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* cf4e4: b.eq #0xcf508 */
  if (ARC_COND(c, 0)) goto L_cf508;
L_cf4e8:;
  /* cf4e8: ldur q0, [x8, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 8) + INT64_C(-16)) + 8));
  /* cf4ec: sub x25, x8, #0x10 */
  ARC_X_W(c, 25, (ARC_X_R(c, 8) - UINT64_C(16)));
  /* cf4f0: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(849140));
  fn1_bf250(c);
  /* cf4f4: ldur q1, [x29, #-0x10] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cf4f8: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cf4fc: mov x8, x25 */
  ARC_X_W(c, 8, ARC_X_R(c, 25));
  /* cf500: b.ge #0xcf4e8 */
  if (ARC_COND(c, 10)) goto L_cf4e8;
  /* cf504: b #0xcf52c */
  goto L_cf52c;
L_cf508:;
  /* cf508: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
L_cf50c:;
  /* cf50c: cmp x23, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* cf510: b.hs #0xcf598 */
  if (ARC_COND(c, 2)) goto L_cf598;
  /* cf514: ldur q0, [x8, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 8) + INT64_C(-16)) + 8));
  /* cf518: sub x25, x8, #0x10 */
  ARC_X_W(c, 25, (ARC_X_R(c, 8) - UINT64_C(16)));
  /* cf51c: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(849184));
  fn1_bf250(c);
  /* cf520: ldur q1, [x29, #-0x10] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cf524: mov x8, x25 */
  ARC_X_W(c, 8, ARC_X_R(c, 25));
  /* cf528: tbz w0, #0x1f, #0xcf50c */
  if (((ARC_W_R(c, 0)) >> 31 & 1) == 0) goto L_cf50c;
L_cf52c:;
  /* cf52c: cmp x23, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 25));
  /* cf530: b.hs #0xcf5a4 */
  if (ARC_COND(c, 2)) goto L_cf5a4;
L_cf534:;
  /* cf534: ldr q0, [x25] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 25)), arc_ld64(ARC_X_R(c, 25) + 8));
  /* cf538: mov x24, x23 */
  ARC_X_W(c, 24, ARC_X_R(c, 23));
  /* cf53c: mov x26, x25 */
  ARC_X_W(c, 26, ARC_X_R(c, 25));
L_cf540:;
  /* cf540: str q0, [x24] */
  arc_st64(ARC_X_R(c, 24), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 24) + 8, (c)->q[0].u64[1]);
  /* cf544: ldur q0, [x29, #-0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* cf548: str q0, [x26] */
  arc_st64(ARC_X_R(c, 26), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 26) + 8, (c)->q[0].u64[1]);
L_cf54c:;
  /* cf54c: ldr q0, [x24, #0x10]! */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 24) + INT64_C(16))), arc_ld64((ARC_X_R(c, 24) + INT64_C(16)) + 8));
  ARC_X_W(c, 24, ARC_X_R(c, 24) + INT64_C(16));
  /* cf550: stur q0, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)) + 8, (c)->q[0].u64[1]);
  /* cf554: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(849240));
  fn1_bf250(c);
  /* cf558: ldur q1, [x29, #-0x10] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cf55c: tbnz w0, #0x1f, #0xcf54c */
  if (((ARC_W_R(c, 0)) >> 31 & 1) != 0) goto L_cf54c;
L_cf560:;
  /* cf560: ldur q0, [x26, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 26) + INT64_C(-16)) + 8));
  /* cf564: sub x26, x26, #0x10 */
  ARC_X_W(c, 26, (ARC_X_R(c, 26) - UINT64_C(16)));
  /* cf568: str q0, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(32)) + 8, (c)->q[0].u64[1]);
  /* cf56c: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(849264));
  fn1_bf250(c);
  /* cf570: ldur q1, [x29, #-0x10] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cf574: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cf578: b.ge #0xcf560 */
  if (ARC_COND(c, 10)) goto L_cf560;
  /* cf57c: ldr q0, [sp, #0x20] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* cf580: cmp x24, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 26));
  /* cf584: b.lo #0xcf540 */
  if (ARC_COND(c, 3)) goto L_cf540;
  /* cf588: sub x24, x24, #0x10 */
  ARC_X_W(c, 24, (ARC_X_R(c, 24) - UINT64_C(16)));
  /* cf58c: cmp x19, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 24));
  /* cf590: b.ne #0xcf5b0 */
  if (ARC_COND(c, 1)) goto L_cf5b0;
  /* cf594: b #0xcf5b8 */
  goto L_cf5b8;
L_cf598:;
  /* cf598: mov x25, x8 */
  ARC_X_W(c, 25, ARC_X_R(c, 8));
  /* cf59c: cmp x23, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 25));
  /* cf5a0: b.lo #0xcf534 */
  if (ARC_COND(c, 3)) goto L_cf534;
L_cf5a4:;
  /* cf5a4: sub x24, x23, #0x10 */
  ARC_X_W(c, 24, (ARC_X_R(c, 23) - UINT64_C(16)));
  /* cf5a8: cmp x19, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 24));
  /* cf5ac: b.eq #0xcf5b8 */
  if (ARC_COND(c, 0)) goto L_cf5b8;
L_cf5b0:;
  /* cf5b0: ldr q0, [x24] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 24)), arc_ld64(ARC_X_R(c, 24) + 8));
  /* cf5b4: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
L_cf5b8:;
  /* cf5b8: cmp x23, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 25));
  /* cf5bc: str q1, [x24] */
  arc_st64(ARC_X_R(c, 24), (c)->q[1].u64[0]);
  arc_st64(ARC_X_R(c, 24) + 8, (c)->q[1].u64[1]);
  /* cf5c0: b.lo #0xcf5ec */
  if (ARC_COND(c, 3)) goto L_cf5ec;
  /* cf5c4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* cf5c8: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* cf5cc: bl #0xd23d4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(849360));
  fn1_d23d4(c);
  /* cf5d0: add x23, x24, #0x10 */
  ARC_X_W(c, 23, (ARC_X_R(c, 24) + UINT64_C(16)));
  /* cf5d4: mov w25, w0 */
  ARC_W_W(c, 25, ARC_W_R(c, 0));
  /* cf5d8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* cf5dc: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* cf5e0: bl #0xd23d4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(849380));
  fn1_d23d4(c);
  /* cf5e4: tbnz w0, #0, #0xcf708 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_cf708;
  /* cf5e8: tbnz w25, #0, #0xcf0bc */
  if (((ARC_W_R(c, 25)) >> 0 & 1) != 0) goto L_cf0bc;
L_cf5ec:;
  /* cf5ec: and w3, w22, #1 */
  ARC_W_W(c, 3, (ARC_W_R(c, 22) & UINT64_C(1)));
  /* cf5f0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* cf5f4: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* cf5f8: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* cf5fc: bl #0xcf084 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(849408));
  fn1_cf084(c);
  /* cf600: mov w22, wzr */
  ARC_W_W(c, 22, ARC_W_R(c, 31));
  /* cf604: add x23, x24, #0x10 */
  ARC_X_W(c, 23, (ARC_X_R(c, 24) + UINT64_C(16)));
  /* cf608: b #0xcf0bc */
  goto L_cf0bc;
L_cf60c:;
  /* cf60c: mov v0.16b, v1.16b */
  (c)->q[0] = (c)->q[1];
  /* cf610: ldur q1, [x20, #-0x10] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 20) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 20) + INT64_C(-16)) + 8));
  /* cf614: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(849432));
  fn1_bf250(c);
  /* cf618: tbz w0, #0x1f, #0xcf63c */
  if (((ARC_W_R(c, 0)) >> 31 & 1) == 0) goto L_cf63c;
  /* cf61c: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
L_cf620:;
  /* cf620: ldr q1, [x8, #0x10] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))), arc_ld64((ARC_X_R(c, 8) + INT64_C(16)) + 8));
  /* cf624: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cf628: add x23, x8, #0x10 */
  ARC_X_W(c, 23, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* cf62c: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(849456));
  fn1_bf250(c);
  /* cf630: mov x8, x23 */
  ARC_X_W(c, 8, ARC_X_R(c, 23));
  /* cf634: tbz w0, #0x1f, #0xcf620 */
  if (((ARC_W_R(c, 0)) >> 31 & 1) == 0) goto L_cf620;
  /* cf638: b #0xcf664 */
  goto L_cf664;
L_cf63c:;
  /* cf63c: add x22, x19, #0x10 */
  ARC_X_W(c, 22, (ARC_X_R(c, 19) + UINT64_C(16)));
L_cf640:;
  /* cf640: mov x23, x22 */
  ARC_X_W(c, 23, ARC_X_R(c, 22));
  /* cf644: cmp x22, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 20));
  /* cf648: b.hs #0xcf664 */
  if (ARC_COND(c, 2)) goto L_cf664;
  /* cf64c: ldr q1, [x23] */
  arc_q_w(c, 1, arc_ld64(ARC_X_R(c, 23)), arc_ld64(ARC_X_R(c, 23) + 8));
  /* cf650: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cf654: add x22, x23, #0x10 */
  ARC_X_W(c, 22, (ARC_X_R(c, 23) + UINT64_C(16)));
  /* cf658: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(849500));
  fn1_bf250(c);
  /* cf65c: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cf660: b.ge #0xcf640 */
  if (ARC_COND(c, 10)) goto L_cf640;
L_cf664:;
  /* cf664: cmp x23, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 20));
  /* cf668: mov x22, x20 */
  ARC_X_W(c, 22, ARC_X_R(c, 20));
  /* cf66c: b.hs #0xcf68c */
  if (ARC_COND(c, 2)) goto L_cf68c;
  /* cf670: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
L_cf674:;
  /* cf674: ldur q1, [x8, #-0x10] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 8) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 8) + INT64_C(-16)) + 8));
  /* cf678: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cf67c: sub x22, x8, #0x10 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) - UINT64_C(16)));
  /* cf680: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(849540));
  fn1_bf250(c);
  /* cf684: mov x8, x22 */
  ARC_X_W(c, 8, ARC_X_R(c, 22));
  /* cf688: tbnz w0, #0x1f, #0xcf674 */
  if (((ARC_W_R(c, 0)) >> 31 & 1) != 0) goto L_cf674;
L_cf68c:;
  /* cf68c: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cf690: cmp x23, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 22));
  /* cf694: b.hs #0xcf6e8 */
  if (ARC_COND(c, 2)) goto L_cf6e8;
  /* cf698: ldr q1, [x23] */
  arc_q_w(c, 1, arc_ld64(ARC_X_R(c, 23)), arc_ld64(ARC_X_R(c, 23) + 8));
  /* cf69c: ldr q2, [x22] */
  arc_q_w(c, 2, arc_ld64(ARC_X_R(c, 22)), arc_ld64(ARC_X_R(c, 22) + 8));
L_cf6a0:;
  /* cf6a0: str q2, [x23] */
  arc_st64(ARC_X_R(c, 23), (c)->q[2].u64[0]);
  arc_st64(ARC_X_R(c, 23) + 8, (c)->q[2].u64[1]);
  /* cf6a4: str q1, [x22] */
  arc_st64(ARC_X_R(c, 22), (c)->q[1].u64[0]);
  arc_st64(ARC_X_R(c, 22) + 8, (c)->q[1].u64[1]);
L_cf6a8:;
  /* cf6a8: ldr q1, [x23, #0x10]! */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 23) + INT64_C(16))), arc_ld64((ARC_X_R(c, 23) + INT64_C(16)) + 8));
  ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(16));
  /* cf6ac: stur q1, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), (c)->q[1].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)) + 8, (c)->q[1].u64[1]);
  /* cf6b0: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(849588));
  fn1_bf250(c);
  /* cf6b4: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cf6b8: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cf6bc: b.ge #0xcf6a8 */
  if (ARC_COND(c, 10)) goto L_cf6a8;
L_cf6c0:;
  /* cf6c0: ldur q1, [x22, #-0x10] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 22) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 22) + INT64_C(-16)) + 8));
  /* cf6c4: sub x22, x22, #0x10 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) - UINT64_C(16)));
  /* cf6c8: str q1, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), (c)->q[1].u64[0]);
  arc_st64(((c)->sp + INT64_C(32)) + 8, (c)->q[1].u64[1]);
  /* cf6cc: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(849616));
  fn1_bf250(c);
  /* cf6d0: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cf6d4: tbnz w0, #0x1f, #0xcf6c0 */
  if (((ARC_W_R(c, 0)) >> 31 & 1) != 0) goto L_cf6c0;
  /* cf6d8: ldur q1, [x29, #-0x20] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* cf6dc: ldr q2, [sp, #0x20] */
  arc_q_w(c, 2, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* cf6e0: cmp x23, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 22));
  /* cf6e4: b.lo #0xcf6a0 */
  if (ARC_COND(c, 3)) goto L_cf6a0;
L_cf6e8:;
  /* cf6e8: sub x8, x23, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) - UINT64_C(16)));
  /* cf6ec: cmp x19, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* cf6f0: b.eq #0xcf6fc */
  if (ARC_COND(c, 0)) goto L_cf6fc;
  /* cf6f4: ldr q1, [x8] */
  arc_q_w(c, 1, arc_ld64(ARC_X_R(c, 8)), arc_ld64(ARC_X_R(c, 8) + 8));
  /* cf6f8: str q1, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[1].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[1].u64[1]);
L_cf6fc:;
  /* cf6fc: mov w22, wzr */
  ARC_W_W(c, 22, ARC_W_R(c, 31));
  /* cf700: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* cf704: b #0xcf0bc */
  goto L_cf0bc;
L_cf708:;
  /* cf708: mov x20, x24 */
  ARC_X_W(c, 20, ARC_X_R(c, 24));
  /* cf70c: tbz w25, #0, #0xcf0b8 */
  if (((ARC_W_R(c, 25)) >> 0 & 1) == 0) goto L_cf0b8;
  /* cf710: b #0xcfd64 */
  goto L_cfd64;
L_cf714:;
  /* cf714: ldp q1, q2, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 2, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cf718: ldr q0, [x19, #0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))), arc_ld64((ARC_X_R(c, 19) + INT64_C(32)) + 8));
  /* cf71c: stp q0, q2, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* cf720: mov v0.16b, v2.16b */
  (c)->q[0] = (c)->q[2];
  /* cf724: str q1, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), (c)->q[1].u64[0]);
  arc_st64(((c)->sp + INT64_C(32)) + 8, (c)->q[1].u64[1]);
  /* cf728: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(849708));
  fn1_bf250(c);
  /* cf72c: tbz w0, #0x1f, #0xcfa7c */
  if (((ARC_W_R(c, 0)) >> 31 & 1) == 0) goto L_cfa7c;
  /* cf730: ldp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cf734: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(849720));
  fn1_bf250(c);
  /* cf738: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cf73c: b.ge #0xcfb80 */
  if (ARC_COND(c, 10)) goto L_cfb80;
  /* cf740: ldur q0, [x29, #-0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* cf744: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* cf748: str q0, [sp] */
  arc_st64((c)->sp, (c)->q[0].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[0].u64[1]);
  /* cf74c: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cf750: b #0xcfba8 */
  goto L_cfba8;
L_cf754:;
  /* cf754: ldur q0, [x20, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 20) + INT64_C(-16)) + 8));
  /* cf758: ldr q1, [x19] */
  arc_q_w(c, 1, arc_ld64(ARC_X_R(c, 19)), arc_ld64(ARC_X_R(c, 19) + 8));
  /* cf75c: stp q1, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* cf760: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(849764));
  fn1_bf250(c);
  /* cf764: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cf768: b.ge #0xcfd64 */
  if (ARC_COND(c, 10)) goto L_cfd64;
  /* cf76c: ldp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cf770: str q1, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[1].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[1].u64[1]);
  /* cf774: stur q0, [x20, #-0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(-16)) + 8, (c)->q[0].u64[1]);
  /* cf778: b #0xcfd64 */
  goto L_cfd64;
L_cf77c:;
  /* cf77c: ldp q1, q0, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cf780: ldur q2, [x20, #-0x10] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 20) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 20) + INT64_C(-16)) + 8));
  /* cf784: stp q2, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, (c)->q[2].u64[0]);
    arc_st64(_pa + 8, (c)->q[2].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* cf788: str q1, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), (c)->q[1].u64[0]);
  arc_st64(((c)->sp + INT64_C(32)) + 8, (c)->q[1].u64[1]);
  /* cf78c: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(849808));
  fn1_bf250(c);
  /* cf790: tbz w0, #0x1f, #0xcfac0 */
  if (((ARC_W_R(c, 0)) >> 31 & 1) == 0) goto L_cfac0;
  /* cf794: ldp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cf798: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(849820));
  fn1_bf250(c);
  /* cf79c: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cf7a0: b.ge #0xcfbcc */
  if (ARC_COND(c, 10)) goto L_cfbcc;
  /* cf7a4: ldur q0, [x29, #-0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* cf7a8: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* cf7ac: b #0xcfbf4 */
  goto L_cfbf4;
L_cf7b0:;
  /* cf7b0: ldp q1, q2, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 2, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cf7b4: ldr q0, [x19, #0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))), arc_ld64((ARC_X_R(c, 19) + INT64_C(32)) + 8));
  /* cf7b8: stp q0, q2, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* cf7bc: mov v0.16b, v2.16b */
  (c)->q[0] = (c)->q[2];
  /* cf7c0: str q1, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), (c)->q[1].u64[0]);
  arc_st64(((c)->sp + INT64_C(32)) + 8, (c)->q[1].u64[1]);
  /* cf7c4: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(849864));
  fn1_bf250(c);
  /* cf7c8: tbz w0, #0x1f, #0xcfae8 */
  if (((ARC_W_R(c, 0)) >> 31 & 1) == 0) goto L_cfae8;
  /* cf7cc: ldp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cf7d0: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(849876));
  fn1_bf250(c);
  /* cf7d4: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cf7d8: b.ge #0xcfc00 */
  if (ARC_COND(c, 10)) goto L_cfc00;
  /* cf7dc: ldur q0, [x29, #-0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* cf7e0: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* cf7e4: b #0xcfc20 */
  goto L_cfc20;
L_cf7e8:;
  /* cf7e8: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* cf7ec: add x8, x19, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* cf7f0: ccmp x8, x20, #4, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20)); }
  else { (c)->nf = 0; (c)->zf = 1;
          (c)->cf = 0; (c)->vf = 0; }
  /* cf7f4: cset w9, eq */
  ARC_W_W(c, 9, (ARC_COND(c, 0) ? 1 : 0));
  /* cf7f8: tbz w22, #0, #0xcfb20 */
  if (((ARC_W_R(c, 22)) >> 0 & 1) == 0) goto L_cfb20;
  /* cf7fc: tbnz w9, #0, #0xcfd64 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_cfd64;
  /* cf800: mov w21, #0x10 */
  ARC_W_W(c, 21, UINT64_C(16));
  /* cf804: mov x22, x19 */
  ARC_X_W(c, 22, ARC_X_R(c, 19));
  /* cf808: b #0xcf828 */
  goto L_cf828;
L_cf80c:;
  /* cf80c: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
L_cf810:;
  /* cf810: ldur q0, [x29, #-0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* cf814: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
L_cf818:;
  /* cf818: add x8, x22, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) + UINT64_C(16)));
  /* cf81c: add x21, x21, #0x10 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(16)));
  /* cf820: cmp x8, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* cf824: b.eq #0xcfd64 */
  if (ARC_COND(c, 0)) goto L_cfd64;
L_cf828:;
  /* cf828: ldp q1, q0, [x22] */
  { const uint64_t _pa = ARC_X_R(c, 22);
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cf82c: mov x22, x8 */
  ARC_X_W(c, 22, ARC_X_R(c, 8));
  /* cf830: stp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* cf834: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(849976));
  fn1_bf250(c);
  /* cf838: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cf83c: b.ge #0xcf818 */
  if (ARC_COND(c, 10)) goto L_cf818;
  /* cf840: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cf844: mov x8, x21 */
  ARC_X_W(c, 8, ARC_X_R(c, 21));
L_cf848:;
  /* cf848: subs x23, x8, #0x10 */
  ARC_X_W(c, 23, arc_sub64(c, ARC_X_R(c, 8), UINT64_C(16)));
  /* cf84c: str q0, [x19, x8] */
  arc_st64((ARC_X_R(c, 19) + ARC_X_R(c, 8)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + ARC_X_R(c, 8)) + 8, (c)->q[0].u64[1]);
  /* cf850: b.eq #0xcf80c */
  if (ARC_COND(c, 0)) goto L_cf80c;
  /* cf854: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* cf858: ldur q0, [x29, #-0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* cf85c: ldur q1, [x8, #-0x20] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 8) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 8) + INT64_C(-32)) + 8));
  /* cf860: stur q1, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), (c)->q[1].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)) + 8, (c)->q[1].u64[1]);
  /* cf864: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(850024));
  fn1_bf250(c);
  /* cf868: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cf86c: mov x8, x23 */
  ARC_X_W(c, 8, ARC_X_R(c, 23));
  /* cf870: tbnz w0, #0x1f, #0xcf848 */
  if (((ARC_W_R(c, 0)) >> 31 & 1) != 0) goto L_cf848;
  /* cf874: add x8, x19, x23 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 23)));
  /* cf878: b #0xcf810 */
  goto L_cf810;
L_cf87c:;
  /* cf87c: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* cf880: b.eq #0xcfd64 */
  if (ARC_COND(c, 0)) goto L_cfd64;
  /* cf884: lsr x21, x8, #1 */
  ARC_X_W(c, 21, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* cf888: mov x22, x21 */
  ARC_X_W(c, 22, ARC_X_R(c, 21));
  /* cf88c: b #0xcf8a4 */
  goto L_cf8a4;
L_cf890:;
  /* cf890: ldur q0, [x29, #-0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* cf894: str q0, [x25] */
  arc_st64(ARC_X_R(c, 25), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 25) + 8, (c)->q[0].u64[1]);
L_cf898:;
  /* cf898: cmp x22, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 22), UINT64_C(0));
  /* cf89c: sub x22, x22, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) - UINT64_C(1)));
  /* cf8a0: b.le #0xcf97c */
  if (ARC_COND(c, 13)) goto L_cf97c;
L_cf8a4:;
  /* cf8a4: cmp x21, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 22));
  /* cf8a8: b.lo #0xcf898 */
  if (ARC_COND(c, 3)) goto L_cf898;
  /* cf8ac: mov w26, #1 */
  ARC_W_W(c, 26, UINT64_C(1));
  /* cf8b0: lsl x8, x22, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 22)) << ((UINT64_C(1)) & 63)));
  /* cf8b4: bfi x26, x22, #1, #0x3e */
  ARC_X_W(c, 26, (((uint64_t)(ARC_X_R(c, 26)) & UINT64_C(9223372036854775809)) | ((((uint64_t)(ARC_X_R(c, 22))) & UINT64_C(4611686018427387903)) << 1)));
  /* cf8b8: add x25, x8, #2 */
  ARC_X_W(c, 25, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* cf8bc: add x23, x19, x26, lsl #4 */
  ARC_X_W(c, 23, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 26)) << 4)));
  /* cf8c0: cmp x25, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 24));
  /* cf8c4: b.ge #0xcf8e0 */
  if (ARC_COND(c, 10)) goto L_cf8e0;
  /* cf8c8: ldp q0, q1, [x23] */
  { const uint64_t _pa = ARC_X_R(c, 23);
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cf8cc: add x27, x23, #0x10 */
  ARC_X_W(c, 27, (ARC_X_R(c, 23) + UINT64_C(16)));
  /* cf8d0: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(850132));
  fn1_bf250(c);
  /* cf8d4: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cf8d8: csel x23, x23, x27, ge */
  ARC_X_W(c, 23, (ARC_COND(c, 10) ? (ARC_X_R(c, 23)) : ARC_X_R(c, 27)));
  /* cf8dc: csel x26, x26, x25, ge */
  ARC_X_W(c, 26, (ARC_COND(c, 10) ? (ARC_X_R(c, 26)) : ARC_X_R(c, 25)));
L_cf8e0:;
  /* cf8e0: add x25, x19, x22, lsl #4 */
  ARC_X_W(c, 25, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 22)) << 4)));
  /* cf8e4: ldr q0, [x23] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 23)), arc_ld64(ARC_X_R(c, 23) + 8));
  /* cf8e8: ldr q1, [x25] */
  arc_q_w(c, 1, arc_ld64(ARC_X_R(c, 25)), arc_ld64(ARC_X_R(c, 25) + 8));
  /* cf8ec: stp q1, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* cf8f0: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(850164));
  fn1_bf250(c);
  /* cf8f4: tbnz w0, #0x1f, #0xcf898 */
  if (((ARC_W_R(c, 0)) >> 31 & 1) != 0) goto L_cf898;
  /* cf8f8: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cf8fc: b #0xcf920 */
  goto L_cf920;
L_cf900:;
  /* cf900: ldr q0, [x23] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 23)), arc_ld64(ARC_X_R(c, 23) + 8));
  /* cf904: ldur q1, [x29, #-0x20] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* cf908: stur q0, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)) + 8, (c)->q[0].u64[1]);
  /* cf90c: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(850192));
  fn1_bf250(c);
  /* cf910: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cf914: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cf918: mov x26, x27 */
  ARC_X_W(c, 26, ARC_X_R(c, 27));
  /* cf91c: b.lt #0xcf890 */
  if (ARC_COND(c, 11)) goto L_cf890;
L_cf920:;
  /* cf920: cmp x21, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 26));
  /* cf924: str q0, [x25] */
  arc_st64(ARC_X_R(c, 25), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 25) + 8, (c)->q[0].u64[1]);
  /* cf928: mov x25, x23 */
  ARC_X_W(c, 25, ARC_X_R(c, 23));
  /* cf92c: b.lt #0xcf890 */
  if (ARC_COND(c, 11)) goto L_cf890;
  /* cf930: mov w27, #1 */
  ARC_W_W(c, 27, UINT64_C(1));
  /* cf934: lsl x8, x26, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 26)) << ((UINT64_C(1)) & 63)));
  /* cf938: bfi x27, x26, #1, #0x3e */
  ARC_X_W(c, 27, (((uint64_t)(ARC_X_R(c, 27)) & UINT64_C(9223372036854775809)) | ((((uint64_t)(ARC_X_R(c, 26))) & UINT64_C(4611686018427387903)) << 1)));
  /* cf93c: add x26, x8, #2 */
  ARC_X_W(c, 26, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* cf940: add x23, x19, x27, lsl #4 */
  ARC_X_W(c, 23, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 27)) << 4)));
  /* cf944: cmp x26, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 24));
  /* cf948: b.ge #0xcf900 */
  if (ARC_COND(c, 10)) goto L_cf900;
  /* cf94c: ldp q0, q1, [x23] */
  { const uint64_t _pa = ARC_X_R(c, 23);
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cf950: add x28, x23, #0x10 */
  ARC_X_W(c, 28, (ARC_X_R(c, 23) + UINT64_C(16)));
  /* cf954: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(850264));
  fn1_bf250(c);
  /* cf958: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cf95c: csel x23, x23, x28, ge */
  ARC_X_W(c, 23, (ARC_COND(c, 10) ? (ARC_X_R(c, 23)) : ARC_X_R(c, 28)));
  /* cf960: csel x27, x27, x26, ge */
  ARC_X_W(c, 27, (ARC_COND(c, 10) ? (ARC_X_R(c, 27)) : ARC_X_R(c, 26)));
  /* cf964: b #0xcf900 */
  goto L_cf900;
L_cf968:;
  /* cf968: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
L_cf96c:;
  /* cf96c: str q0, [x21] */
  arc_st64(ARC_X_R(c, 21), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 21) + 8, (c)->q[0].u64[1]);
L_cf970:;
  /* cf970: cmp x24, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 24), UINT64_C(2));
  /* cf974: sub x24, x24, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 24) - UINT64_C(1)));
  /* cf978: b.le #0xcfd64 */
  if (ARC_COND(c, 13)) goto L_cfd64;
L_cf97c:;
  /* cf97c: sub x9, x24, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) - UINT64_C(2)));
  /* cf980: ldr q0, [x19] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 19)), arc_ld64(ARC_X_R(c, 19) + 8));
  /* cf984: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* cf988: lsr x22, x9, #1 */
  ARC_X_W(c, 22, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* cf98c: mov x23, x19 */
  ARC_X_W(c, 23, ARC_X_R(c, 19));
  /* cf990: stur q0, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)) + 8, (c)->q[0].u64[1]);
  /* cf994: b #0xcf9c4 */
  goto L_cf9c4;
L_cf998:;
  /* cf998: ldp q0, q1, [x9, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(16));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cf99c: add x27, x9, #0x20 */
  ARC_X_W(c, 27, (ARC_X_R(c, 9) + UINT64_C(32)));
  /* cf9a0: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(850340));
  fn1_bf250(c);
  /* cf9a4: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cf9a8: csel x21, x21, x27, ge */
  ARC_X_W(c, 21, (ARC_COND(c, 10) ? (ARC_X_R(c, 21)) : ARC_X_R(c, 27)));
  /* cf9ac: csel x8, x25, x26, ge */
  ARC_X_W(c, 8, (ARC_COND(c, 10) ? (ARC_X_R(c, 25)) : ARC_X_R(c, 26)));
L_cf9b0:;
  /* cf9b0: ldr q0, [x21] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 21)), arc_ld64(ARC_X_R(c, 21) + 8));
  /* cf9b4: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* cf9b8: str q0, [x23] */
  arc_st64(ARC_X_R(c, 23), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 23) + 8, (c)->q[0].u64[1]);
  /* cf9bc: mov x23, x21 */
  ARC_X_W(c, 23, ARC_X_R(c, 21));
  /* cf9c0: b.gt #0xcf9ec */
  if (ARC_COND(c, 12)) goto L_cf9ec;
L_cf9c4:;
  /* cf9c4: lsl x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(1)) & 63)));
  /* cf9c8: add x9, x23, x8, lsl #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) + ((uint64_t)(ARC_X_R(c, 8)) << 4)));
  /* cf9cc: mov w25, #1 */
  ARC_W_W(c, 25, UINT64_C(1));
  /* cf9d0: bfi x25, x8, #1, #0x3f */
  ARC_X_W(c, 25, (((uint64_t)(ARC_X_R(c, 25)) & UINT64_C(1)) | ((((uint64_t)(ARC_X_R(c, 8))) & UINT64_C(9223372036854775807)) << 1)));
  /* cf9d4: add x26, x10, #2 */
  ARC_X_W(c, 26, (ARC_X_R(c, 10) + UINT64_C(2)));
  /* cf9d8: add x21, x9, #0x10 */
  ARC_X_W(c, 21, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* cf9dc: cmp x26, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 24));
  /* cf9e0: b.lt #0xcf998 */
  if (ARC_COND(c, 11)) goto L_cf998;
  /* cf9e4: mov x8, x25 */
  ARC_X_W(c, 8, ARC_X_R(c, 25));
  /* cf9e8: b #0xcf9b0 */
  goto L_cf9b0;
L_cf9ec:;
  /* cf9ec: sub x20, x20, #0x10 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) - UINT64_C(16)));
  /* cf9f0: cmp x21, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 20));
  /* cf9f4: b.eq #0xcf968 */
  if (ARC_COND(c, 0)) goto L_cf968;
  /* cf9f8: sub x8, x21, x19 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) - ARC_X_R(c, 19)));
  /* cf9fc: ldr q0, [x20] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 20)), arc_ld64(ARC_X_R(c, 20) + 8));
  /* cfa00: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* cfa04: asr x8, x8, #4 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(4)) & 63))));
  /* cfa08: str q0, [x21] */
  arc_st64(ARC_X_R(c, 21), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 21) + 8, (c)->q[0].u64[1]);
  /* cfa0c: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cfa10: subs x8, x8, #2 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2)));
  /* cfa14: str q0, [x20] */
  arc_st64(ARC_X_R(c, 20), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 20) + 8, (c)->q[0].u64[1]);
  /* cfa18: b.lt #0xcf970 */
  if (ARC_COND(c, 11)) goto L_cf970;
  /* cfa1c: lsr x22, x8, #1 */
  ARC_X_W(c, 22, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* cfa20: ldr q1, [x21] */
  arc_q_w(c, 1, arc_ld64(ARC_X_R(c, 21)), arc_ld64(ARC_X_R(c, 21) + 8));
  /* cfa24: add x23, x19, x22, lsl #4 */
  ARC_X_W(c, 23, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 22)) << 4)));
  /* cfa28: ldr q0, [x23] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 23)), arc_ld64(ARC_X_R(c, 23) + 8));
  /* cfa2c: stp q1, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* cfa30: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(850484));
  fn1_bf250(c);
  /* cfa34: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cfa38: b.ge #0xcf970 */
  if (ARC_COND(c, 10)) goto L_cf970;
  /* cfa3c: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
L_cfa40:;
  /* cfa40: mov x8, x21 */
  ARC_X_W(c, 8, ARC_X_R(c, 21));
  /* cfa44: mov x21, x23 */
  ARC_X_W(c, 21, ARC_X_R(c, 23));
  /* cfa48: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* cfa4c: cbz x22, #0xcfa74 */
  if ((ARC_X_R(c, 22)) == 0) goto L_cfa74;
  /* cfa50: sub x8, x22, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) - UINT64_C(1)));
  /* cfa54: ldur q1, [x29, #-0x20] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* cfa58: lsr x22, x8, #1 */
  ARC_X_W(c, 22, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* cfa5c: add x23, x19, x22, lsl #4 */
  ARC_X_W(c, 23, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 22)) << 4)));
  /* cfa60: ldr q0, [x23] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 23)), arc_ld64(ARC_X_R(c, 23) + 8));
  /* cfa64: stur q0, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)) + 8, (c)->q[0].u64[1]);
  /* cfa68: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(850540));
  fn1_bf250(c);
  /* cfa6c: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cfa70: tbnz w0, #0x1f, #0xcfa40 */
  if (((ARC_W_R(c, 0)) >> 31 & 1) != 0) goto L_cfa40;
L_cfa74:;
  /* cfa74: ldur q0, [x29, #-0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* cfa78: b #0xcf96c */
  goto L_cf96c;
L_cfa7c:;
  /* cfa7c: ldp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cfa80: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(850564));
  fn1_bf250(c);
  /* cfa84: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cfa88: b.ge #0xcfbbc */
  if (ARC_COND(c, 10)) goto L_cfbbc;
  /* cfa8c: ldp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cfa90: stp q0, q1, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* cfa94: ldr q1, [sp, #0x20] */
  arc_q_w(c, 1, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* cfa98: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(850588));
  fn1_bf250(c);
  /* cfa9c: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cfaa0: b.ge #0xcfc38 */
  if (ARC_COND(c, 10)) goto L_cfc38;
  /* cfaa4: ldur q1, [x29, #-0x20] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* cfaa8: ldr q0, [sp, #0x20] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* cfaac: str q1, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[1].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[1].u64[1]);
  /* cfab0: stp q1, q0, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* cfab4: ldur q1, [x29, #-0x10] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cfab8: str q0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* cfabc: b #0xcfc60 */
  goto L_cfc60;
L_cfac0:;
  /* cfac0: ldp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cfac4: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(850632));
  fn1_bf250(c);
  /* cfac8: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cfacc: b.ge #0xcfd64 */
  if (ARC_COND(c, 10)) goto L_cfd64;
  /* cfad0: ldp q1, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cfad4: str q1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), (c)->q[1].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)) + 8, (c)->q[1].u64[1]);
  /* cfad8: stur q0, [x20, #-0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(-16)) + 8, (c)->q[0].u64[1]);
  /* cfadc: ldp q1, q0, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cfae0: stp q1, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* cfae4: b #0xcfd50 */
  goto L_cfd50;
L_cfae8:;
  /* cfae8: ldp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cfaec: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(850672));
  fn1_bf250(c);
  /* cfaf0: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cfaf4: b.ge #0xcfc30 */
  if (ARC_COND(c, 10)) goto L_cfc30;
  /* cfaf8: ldp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cfafc: stp q0, q1, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* cfb00: ldr q1, [sp, #0x20] */
  arc_q_w(c, 1, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* cfb04: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(850696));
  fn1_bf250(c);
  /* cfb08: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cfb0c: b.ge #0xcfd00 */
  if (ARC_COND(c, 10)) goto L_cfd00;
  /* cfb10: ldp q2, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 2, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cfb14: ldr q0, [sp, #0x20] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* cfb18: stp q2, q0, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, (c)->q[2].u64[0]);
    arc_st64(_pa + 8, (c)->q[2].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* cfb1c: b #0xcfd04 */
  goto L_cfd04;
L_cfb20:;
  /* cfb20: tbz w9, #0, #0xcfb34 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_cfb34;
  /* cfb24: b #0xcfd64 */
  goto L_cfd64;
L_cfb28:;
  /* cfb28: add x8, x19, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* cfb2c: cmp x8, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* cfb30: b.eq #0xcfd64 */
  if (ARC_COND(c, 0)) goto L_cfd64;
L_cfb34:;
  /* cfb34: ldp q1, q0, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cfb38: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* cfb3c: stp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* cfb40: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(850756));
  fn1_bf250(c);
  /* cfb44: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cfb48: b.ge #0xcfb28 */
  if (ARC_COND(c, 10)) goto L_cfb28;
  /* cfb4c: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cfb50: mov x21, x19 */
  ARC_X_W(c, 21, ARC_X_R(c, 19));
L_cfb54:;
  /* cfb54: str q0, [x21] */
  arc_st64(ARC_X_R(c, 21), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 21) + 8, (c)->q[0].u64[1]);
  /* cfb58: ldur q1, [x21, #-0x20] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 21) + INT64_C(-32)) + 8));
  /* cfb5c: ldur q0, [x29, #-0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* cfb60: sub x21, x21, #0x10 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) - UINT64_C(16)));
  /* cfb64: stur q1, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), (c)->q[1].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)) + 8, (c)->q[1].u64[1]);
  /* cfb68: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(850796));
  fn1_bf250(c);
  /* cfb6c: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cfb70: tbnz w0, #0x1f, #0xcfb54 */
  if (((ARC_W_R(c, 0)) >> 31 & 1) != 0) goto L_cfb54;
  /* cfb74: ldur q0, [x29, #-0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* cfb78: str q0, [x21] */
  arc_st64(ARC_X_R(c, 21), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 21) + 8, (c)->q[0].u64[1]);
  /* cfb7c: b #0xcfb28 */
  goto L_cfb28;
L_cfb80:;
  /* cfb80: ldp q0, q2, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 2, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cfb84: ldr q1, [sp, #0x20] */
  arc_q_w(c, 1, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* cfb88: stp q2, q1, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, (c)->q[2].u64[0]);
    arc_st64(_pa + 8, (c)->q[2].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* cfb8c: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(850832));
  fn1_bf250(c);
  /* cfb90: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cfb94: b.ge #0xcfc4c */
  if (ARC_COND(c, 10)) goto L_cfc4c;
  /* cfb98: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cfb9c: str q0, [sp] */
  arc_st64((c)->sp, (c)->q[0].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[0].u64[1]);
  /* cfba0: ldur q0, [x29, #-0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* cfba4: str q0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
L_cfba8:;
  /* cfba8: str q0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* cfbac: ldr q0, [sp, #0x20] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* cfbb0: mov v1.16b, v0.16b */
  (c)->q[1] = (c)->q[0];
  /* cfbb4: str q0, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)) + 8, (c)->q[0].u64[1]);
  /* cfbb8: b #0xcfc60 */
  goto L_cfc60;
L_cfbbc:;
  /* cfbbc: ldr q0, [sp, #0x20] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* cfbc0: str q0, [sp] */
  arc_st64((c)->sp, (c)->q[0].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[0].u64[1]);
  /* cfbc4: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cfbc8: b #0xcfc58 */
  goto L_cfc58;
L_cfbcc:;
  /* cfbcc: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cfbd0: ldr q1, [sp, #0x20] */
  arc_q_w(c, 1, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* cfbd4: stp q0, q1, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* cfbd8: ldur q0, [x20, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 20) + INT64_C(-16)) + 8));
  /* cfbdc: stur q0, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)) + 8, (c)->q[0].u64[1]);
  /* cfbe0: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(850916));
  fn1_bf250(c);
  /* cfbe4: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cfbe8: b.ge #0xcfd64 */
  if (ARC_COND(c, 10)) goto L_cfd64;
  /* cfbec: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cfbf0: str q0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
L_cfbf4:;
  /* cfbf4: ldr q0, [sp, #0x20] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* cfbf8: stur q0, [x20, #-0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(-16)) + 8, (c)->q[0].u64[1]);
  /* cfbfc: b #0xcfd64 */
  goto L_cfd64;
L_cfc00:;
  /* cfc00: ldp q0, q2, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 2, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cfc04: ldr q1, [sp, #0x20] */
  arc_q_w(c, 1, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* cfc08: stp q2, q1, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, (c)->q[2].u64[0]);
    arc_st64(_pa + 8, (c)->q[2].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* cfc0c: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(850960));
  fn1_bf250(c);
  /* cfc10: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cfc14: b.ge #0xcfc30 */
  if (ARC_COND(c, 10)) goto L_cfc30;
  /* cfc18: ldur q0, [x29, #-0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* cfc1c: str q0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
L_cfc20:;
  /* cfc20: ldr q0, [sp, #0x20] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* cfc24: mov v1.16b, v0.16b */
  (c)->q[1] = (c)->q[0];
  /* cfc28: str q0, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)) + 8, (c)->q[0].u64[1]);
  /* cfc2c: b #0xcfd04 */
  goto L_cfd04;
L_cfc30:;
  /* cfc30: ldur q1, [x29, #-0x20] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* cfc34: b #0xcfd04 */
  goto L_cfd04;
L_cfc38:;
  /* cfc38: ldr q0, [sp, #0x20] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* cfc3c: ldur q1, [x29, #-0x10] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cfc40: str q0, [sp] */
  arc_st64((c)->sp, (c)->q[0].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[0].u64[1]);
  /* cfc44: ldur q0, [x29, #-0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* cfc48: b #0xcfc5c */
  goto L_cfc5c;
L_cfc4c:;
  /* cfc4c: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cfc50: str q0, [sp] */
  arc_st64((c)->sp, (c)->q[0].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[0].u64[1]);
  /* cfc54: ldr q0, [sp, #0x20] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
L_cfc58:;
  /* cfc58: ldur q1, [x29, #-0x20] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
L_cfc5c:;
  /* cfc5c: str q0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(16)) + 8, (c)->q[0].u64[1]);
L_cfc60:;
  /* cfc60: ldr q0, [x19, #0x30] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(48))), arc_ld64((ARC_X_R(c, 19) + INT64_C(48)) + 8));
  /* cfc64: stp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* cfc68: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(851052));
  fn1_bf250(c);
  /* cfc6c: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cfc70: b.ge #0xcfcb8 */
  if (ARC_COND(c, 10)) goto L_cfcb8;
  /* cfc74: ldp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cfc78: stp q0, q1, [x19, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* cfc7c: ldr q1, [sp, #0x10] */
  arc_q_w(c, 1, arc_ld64(((c)->sp + INT64_C(16))), arc_ld64(((c)->sp + INT64_C(16)) + 8));
  /* cfc80: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(851076));
  fn1_bf250(c);
  /* cfc84: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cfc88: b.ge #0xcfcb0 */
  if (ARC_COND(c, 10)) goto L_cfcb0;
  /* cfc8c: ldp q1, q2, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 2, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cfc90: ldur q0, [x29, #-0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* cfc94: stp q0, q2, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* cfc98: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(851100));
  fn1_bf250(c);
  /* cfc9c: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cfca0: b.ge #0xcfcb0 */
  if (ARC_COND(c, 10)) goto L_cfcb0;
  /* cfca4: ldur q1, [x29, #-0x20] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* cfca8: ldr q0, [sp] */
  arc_q_w(c, 0, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* cfcac: stp q1, q0, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
L_cfcb0:;
  /* cfcb0: ldur q1, [x29, #-0x10] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* cfcb4: b #0xcfcbc */
  goto L_cfcbc;
L_cfcb8:;
  /* cfcb8: ldur q1, [x29, #-0x20] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
L_cfcbc:;
  /* cfcbc: ldur q0, [x20, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 20) + INT64_C(-16)) + 8));
  /* cfcc0: stp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* cfcc4: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(851144));
  fn1_bf250(c);
  /* cfcc8: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cfccc: b.ge #0xcfd64 */
  if (ARC_COND(c, 10)) goto L_cfd64;
  /* cfcd0: ldp q1, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cfcd4: str q1, [x19, #0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)), (c)->q[1].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)) + 8, (c)->q[1].u64[1]);
  /* cfcd8: stur q0, [x20, #-0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(-16)) + 8, (c)->q[0].u64[1]);
  /* cfcdc: ldp q1, q0, [x19, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(32));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cfce0: stp q1, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* cfce4: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(851176));
  fn1_bf250(c);
  /* cfce8: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cfcec: b.ge #0xcfd64 */
  if (ARC_COND(c, 10)) goto L_cfd64;
  /* cfcf0: ldp q2, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 2, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cfcf4: ldr q1, [x19, #0x10] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))), arc_ld64((ARC_X_R(c, 19) + INT64_C(16)) + 8));
  /* cfcf8: stp q0, q2, [x19, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* cfcfc: b #0xcfd2c */
  goto L_cfd2c;
L_cfd00:;
  /* cfd00: ldur q1, [x29, #-0x10] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
L_cfd04:;
  /* cfd04: ldur q0, [x20, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 20) + INT64_C(-16)) + 8));
  /* cfd08: stp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* cfd0c: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(851216));
  fn1_bf250(c);
  /* cfd10: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cfd14: b.ge #0xcfd64 */
  if (ARC_COND(c, 10)) goto L_cfd64;
  /* cfd18: ldp q1, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cfd1c: str q1, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), (c)->q[1].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)) + 8, (c)->q[1].u64[1]);
  /* cfd20: stur q0, [x20, #-0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(-16)) + 8, (c)->q[0].u64[1]);
  /* cfd24: ldp q1, q0, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cfd28: stur q0, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)) + 8, (c)->q[0].u64[1]);
L_cfd2c:;
  /* cfd2c: stur q1, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), (c)->q[1].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)) + 8, (c)->q[1].u64[1]);
  /* cfd30: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(851252));
  fn1_bf250(c);
  /* cfd34: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cfd38: b.ge #0xcfd64 */
  if (ARC_COND(c, 10)) goto L_cfd64;
  /* cfd3c: ldp q1, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cfd40: ldr q2, [x19] */
  arc_q_w(c, 2, arc_ld64(ARC_X_R(c, 19)), arc_ld64(ARC_X_R(c, 19) + 8));
  /* cfd44: stur q2, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), (c)->q[2].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)) + 8, (c)->q[2].u64[1]);
  /* cfd48: stp q0, q1, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* cfd4c: mov v1.16b, v2.16b */
  (c)->q[1] = (c)->q[2];
L_cfd50:;
  /* cfd50: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(851284));
  fn1_bf250(c);
  /* cfd54: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* cfd58: b.ge #0xcfd64 */
  if (ARC_COND(c, 10)) goto L_cfd64;
  /* cfd5c: ldp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cfd60: stp q1, q0, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
L_cfd64:;
  /* cfd64: ldp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* cfd68: ldp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* cfd6c: ldp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* cfd70: ldp x26, x25, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* cfd74: ldp x28, x27, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* cfd78: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* cfd7c: add sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(176)));
  /* cfd80: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* cfd84: ret  */
  return;
}

void fn1_d7728(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038810408));
  /* d7728: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d772c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d7730: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* d7734: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* d7738: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d773c: bl #0x142ad0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(882496));
  fn1_142ad0(c);
  /* d7740: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d7744: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* d7748: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* d774c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d7750: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d7754: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_db5a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038826400));
  /* db5a0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* db5a4: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* db5a8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* db5ac: ldr x0, [x0] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 0)));
  /* db5b0: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(898484));
  fn1_142518(c);
  /* db5b4: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* db5b8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* db5bc: ret  */
  return;
  /* db5c0: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(898500));
  fn1_a1454(c);
}

void fn1_df8cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038843596));
  /* df8cc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* df8d0: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* df8d4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* df8d8: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* df8dc: ldr x8, [x8, #0x908] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2312))));
  /* df8e0: ldr x9, [x1, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* df8e4: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* df8e8: sub x1, x9, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) - UINT64_C(8)));
  /* df8ec: stp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* df8f0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* df8f4: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(915704));
  fn1_a2030(c);
  /* df8f8: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* df8fc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* df900: ret  */
  return;
}

void fn1_e228c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038854284));
  /* e228c: bti c */
  /* bti: no architectural effect here */
  /* e2290: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* e2294: tbnz w8, #0, #0xe22ac */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_e22ac;
  /* e2298: ldr x8, [x1, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* e229c: ldr q0, [x1] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 1)), arc_ld64(ARC_X_R(c, 1) + 8));
  /* e22a0: str x8, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 8));
  /* e22a4: str q0, [x0] */
  arc_st64(ARC_X_R(c, 0), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 0) + 8, (c)->q[0].u64[1]);
  /* e22a8: ret  */
  return;
L_e22ac:;
  /* e22ac: ldp x2, x8, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* e22b0: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* e22b4: b #0xe22b8 */
  fn1_e22b8(c); return;
}

void fn1_e52f4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038866676));
  /* e52f4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e52f8: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* e52fc: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e5300: str x23, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 23));
  /* e5304: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e5308: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e530c: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* e5310: mov w9, #0x7473 */
  ARC_W_W(c, 9, UINT64_C(29811));
  /* e5314: mov w8, #0xc */
  ARC_W_W(c, 8, UINT64_C(12));
  /* e5318: add x10, x0, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 0) + UINT64_C(4)));
  /* e531c: movk w9, #0x756f, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1970208768)));
  /* e5320: strb w8, [sp] */
  arc_st8((c)->sp, ARC_W_R(c, 8));
  /* e5324: mov w8, #0x6c6c */
  ARC_W_W(c, 8, UINT64_C(27756));
  /* e5328: stur w9, [sp, #1] */
  arc_st32(((c)->sp + INT64_C(1)), ARC_W_R(c, 9));
  /* e532c: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* e5330: mov w21, w2 */
  ARC_W_W(c, 21, ARC_W_R(c, 2));
  /* e5334: sturh w8, [sp, #5] */
  arc_st16(((c)->sp + INT64_C(5)), ARC_W_R(c, 8));
  /* e5338: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e533c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* e5340: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e5344: strb wzr, [sp, #7] */
  arc_st8(((c)->sp + INT64_C(7)), ARC_W_R(c, 31));
  /* e5348: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* e534c: csel x20, x10, x8, eq */
  ARC_X_W(c, 20, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* e5350: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(938836));
  fn1_142a58(c);
  /* e5354: ldr w23, [x0] */
  ARC_W_W(c, 23, arc_ld32(ARC_X_R(c, 0)));
  /* e5358: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* e535c: str wzr, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 31));
  /* e5360: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* e5364: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e5368: mov w2, w21 */
  ARC_W_W(c, 2, ARC_W_R(c, 21));
  /* e536c: bl #0x142f68 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(938864));
  fn1_142f68(c);
  /* e5370: ldr w8, [x22] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 22)));
  /* e5374: str w23, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 23));
  /* e5378: cmp w8, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(34));
  /* e537c: b.eq #0xe53c4 */
  if (ARC_COND(c, 0)) goto L_e53c4;
  /* e5380: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* e5384: subs x8, x8, x20 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20)));
  /* e5388: b.eq #0xe5408 */
  if (ARC_COND(c, 0)) goto L_e5408;
  /* e538c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e5390: cbz x19, #0xe539c */
  if ((ARC_X_R(c, 19)) == 0) goto L_e539c;
  /* e5394: asr x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* e5398: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_e539c:;
  /* e539c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e53a0: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(938916));
  fn1_142e00(c);
  /* e53a4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e53a8: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e53ac: ldr x23, [sp, #0x40] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(64))));
  /* e53b0: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e53b4: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e53b8: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* e53bc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e53c0: ret  */
  return;
L_e53c4:;
  /* e53c4: mov w9, #0x7473 */
  ARC_W_W(c, 9, UINT64_C(29811));
  /* e53c8: mov w8, #0x28 */
  ARC_W_W(c, 8, UINT64_C(40));
  /* e53cc: str xzr, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 31));
  /* e53d0: movk w9, #0x756f, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1970208768)));
  /* e53d4: strb w8, [sp, #0x18] */
  arc_st8(((c)->sp + INT64_C(24)), ARC_W_R(c, 8));
  /* e53d8: mov w8, #0x6c6c */
  ARC_W_W(c, 8, UINT64_C(27756));
  /* e53dc: stur w9, [sp, #0x19] */
  arc_st32(((c)->sp + INT64_C(25)), ARC_W_R(c, 9));
  /* e53e0: adrp x9, #0x51000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(331776)));
  /* e53e4: add x9, x9, #0xa7d */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2685)));
  /* e53e8: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* e53ec: sturh w8, [sp, #0x1d] */
  arc_st16(((c)->sp + INT64_C(29)), ARC_W_R(c, 8));
  /* e53f0: ldur x8, [x9, #6] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(6))));
  /* e53f4: add x9, sp, #0x18 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(24)));
  /* e53f8: stur x10, [sp, #0x1f] */
  arc_st64(((c)->sp + INT64_C(31)), ARC_X_R(c, 10));
  /* e53fc: stur x8, [sp, #0x25] */
  arc_st64(((c)->sp + INT64_C(37)), ARC_X_R(c, 8));
  /* e5400: orr x0, x9, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* e5404: bl #0xda038 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(939016));
  fn1_da038(c);
L_e5408:;
  /* e5408: mov w9, #0x7473 */
  ARC_W_W(c, 9, UINT64_C(29811));
  /* e540c: mov w8, #0x2a */
  ARC_W_W(c, 8, UINT64_C(42));
  /* e5410: str xzr, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 31));
  /* e5414: movk w9, #0x756f, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1970208768)));
  /* e5418: strb w8, [sp, #0x18] */
  arc_st8(((c)->sp + INT64_C(24)), ARC_W_R(c, 8));
  /* e541c: mov w8, #0x6c6c */
  ARC_W_W(c, 8, UINT64_C(27756));
  /* e5420: stur w9, [sp, #0x19] */
  arc_st32(((c)->sp + INT64_C(25)), ARC_W_R(c, 9));
  /* e5424: adrp x9, #0x50000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(327680)));
  /* e5428: add x9, x9, #0x1dd */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(477)));
  /* e542c: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* e5430: sturh w8, [sp, #0x1d] */
  arc_st16(((c)->sp + INT64_C(29)), ARC_W_R(c, 8));
  /* e5434: ldur x8, [x9, #7] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(7))));
  /* e5438: add x9, sp, #0x18 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(24)));
  /* e543c: stur x10, [sp, #0x1f] */
  arc_st64(((c)->sp + INT64_C(31)), ARC_X_R(c, 10));
  /* e5440: stur x8, [sp, #0x26] */
  arc_st64(((c)->sp + INT64_C(38)), ARC_X_R(c, 8));
  /* e5444: orr x0, x9, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* e5448: bl #0xe78a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(939084));
  fn1_e78a0(c);
  /* e544c: b #0xe5450 */
  goto L_e5450;
L_e5450:;
  /* e5450: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e5454: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e5458: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(939100));
  fn1_142e00(c);
  /* e545c: b #0xe5464 */
  goto L_e5464;
  /* e5460: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_e5464:;
  /* e5464: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e5468: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(939116));
  fn1_142e00(c);
  /* e546c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e5470: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(939124));
  fn1_9cc20(c);
}

void fn1_e920c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038882828));
  /* e920c: bti c */
  /* bti: no architectural effect here */
  /* e9210: ldar w0, [x0] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 0)));
  /* e9214: ret  */
  return;
}

void fn1_eb244(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038891076));
  /* eb244: bti c */
  /* bti: no architectural effect here */
  /* eb248: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* eb24c: stur q0, [x0, #0x7c] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(124)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(124)) + 8, (c)->q[0].u64[1]);
  /* eb250: stp q0, q0, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* eb254: stp q0, q0, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* eb258: stp q0, q0, [x0, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(64));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* eb25c: stp q0, q0, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* eb260: ret  */
  return;
}

void fn1_ed1b4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038899124));
  /* ed1b4: bti c */
  /* bti: no architectural effect here */
  /* ed1b8: ldr x9, [x0, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* ed1bc: nop  */
  /* nop: no architectural effect here */
  /* ed1c0: adr x10, #0x15dc40 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(1432640)));
  /* ed1c4: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* ed1c8: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ed1cc: b.eq #0xed1f0 */
  if (ARC_COND(c, 0)) goto L_ed1f0;
  /* ed1d0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ed1d4: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ed1d8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ed1dc: add x1, x9, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) + UINT64_C(8)));
  /* ed1e0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ed1e4: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(971240));
  fn1_db2e0(c);
  /* ed1e8: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ed1ec: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
L_ed1f0:;
  /* ed1f0: ret  */
  return;
}

void fn1_efa84(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038909572));
  /* efa84: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* efa88: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* efa8c: str x25, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 25));
  /* efa90: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* efa94: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* efa98: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* efa9c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* efaa0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* efaa4: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* efaa8: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* efaac: str xzr, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 31));
  /* efab0: add x0, x29, #0x1c */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(28)));
  /* efab4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* efab8: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* efabc: mov w22, w3 */
  ARC_W_W(c, 22, ARC_W_R(c, 3));
  /* efac0: bl #0x1435f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(981700));
  fn1_1435f8(c);
  /* efac4: ldrb w8, [x29, #0x1c] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(28))));
  /* efac8: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* efacc: b.ne #0xefc00 */
  if (ARC_COND(c, 1)) goto L_efc00;
  /* efad0: subs x23, x20, #1 */
  ARC_X_W(c, 23, arc_sub64(c, ARC_X_R(c, 20), UINT64_C(1)));
  /* efad4: b.lt #0xefb94 */
  if (ARC_COND(c, 11)) goto L_efb94;
  /* efad8: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* efadc: cmp x9, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 23));
  /* efae0: b.ge #0xefb9c */
  if (ARC_COND(c, 10)) goto L_efb9c;
  /* efae4: and w22, w22, #0xff */
  ARC_W_W(c, 22, (ARC_W_R(c, 22) & UINT64_C(255)));
  /* efae8: add x24, x19, #0x28 */
  ARC_X_W(c, 24, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* efaec: b #0xefb1c */
  goto L_efb1c;
L_efaf0:;
  /* efaf0: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* efaf4: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* efaf8: ldr x0, [x24, x9] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 24) + ARC_X_R(c, 9))));
  /* efafc: ldp x9, x10, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* efb00: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* efb04: b.eq #0xefb80 */
  if (ARC_COND(c, 0)) goto L_efb80;
  /* efb08: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* efb0c: str x9, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 9));
L_efb10:;
  /* efb10: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* efb14: mov x21, x25 */
  ARC_X_W(c, 21, ARC_X_R(c, 25));
  /* efb18: b.ge #0xefbac */
  if (ARC_COND(c, 10)) goto L_efbac;
L_efb1c:;
  /* efb1c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* efb20: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* efb24: ldr x0, [x24, x8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 24) + ARC_X_R(c, 8))));
  /* efb28: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* efb2c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* efb30: b.eq #0xefb3c */
  if (ARC_COND(c, 0)) goto L_efb3c;
  /* efb34: ldrb w0, [x8] */
  ARC_W_W(c, 0, arc_ld8(ARC_X_R(c, 8)));
  /* efb38: b #0xefb50 */
  goto L_efb50;
L_efb3c:;
  /* efb3c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* efb40: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* efb44: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(981832));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* efb48: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* efb4c: b.eq #0xefbb8 */
  if (ARC_COND(c, 0)) goto L_efbb8;
L_efb50:;
  /* efb50: and w8, w0, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) & UINT64_C(255)));
  /* efb54: cmp w22, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 22), ARC_W_R(c, 8));
  /* efb58: b.eq #0xefba4 */
  if (ARC_COND(c, 0)) goto L_efba4;
  /* efb5c: mov x25, x21 */
  ARC_X_W(c, 25, ARC_X_R(c, 21));
  /* efb60: strb w8, [x25], #1 */
  { const uint64_t _a = ARC_X_R(c, 25);
    ARC_X_W(c, 25, ARC_X_R(c, 25) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* efb64: mov x8, #0x7fffffffffffffff */
  ARC_X_W(c, 8, UINT64_C(9223372036854775807));
  /* efb68: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* efb6c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* efb70: b.eq #0xefaf0 */
  if (ARC_COND(c, 0)) goto L_efaf0;
  /* efb74: add x8, x9, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* efb78: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* efb7c: b #0xefaf0 */
  goto L_efaf0;
L_efb80:;
  /* efb80: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* efb84: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* efb88: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(981900));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* efb8c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* efb90: b #0xefb10 */
  goto L_efb10;
L_efb94:;
  /* efb94: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* efb98: b #0xefbd0 */
  goto L_efbd0;
L_efb9c:;
  /* efb9c: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
  /* efba0: b #0xefbc0 */
  goto L_efbc0;
L_efba4:;
  /* efba4: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
  /* efba8: b #0xefbbc */
  goto L_efbbc;
L_efbac:;
  /* efbac: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
  /* efbb0: mov x21, x25 */
  ARC_X_W(c, 21, ARC_X_R(c, 25));
  /* efbb4: b #0xefbbc */
  goto L_efbbc;
L_efbb8:;
  /* efbb8: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
L_efbbc:;
  /* efbbc: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_efbc0:;
  /* efbc0: orr w10, w8, #4 */
  ARC_W_W(c, 10, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* efbc4: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* efbc8: csel w8, w10, w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
L_efbcc:;
  /* efbcc: strb wzr, [x21] */
  arc_st8(ARC_X_R(c, 21), ARC_W_R(c, 31));
L_efbd0:;
  /* efbd0: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* efbd4: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* efbd8: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* efbdc: ldr x10, [x9, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 9) + INT64_C(40))));
  /* efbe0: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* efbe4: ldp w11, w10, [x9, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(32));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* efbe8: orr w8, w11, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 11) | ARC_W_R(c, 8)));
  /* efbec: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* efbf0: orr w8, w8, w11 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 11)));
  /* efbf4: tst w8, w10 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 10)));
  /* efbf8: str w8, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 8));
  /* efbfc: b.ne #0xefc2c */
  if (ARC_COND(c, 1)) goto L_efc2c;
L_efc00:;
  /* efc00: cmp x20, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(1));
  /* efc04: b.lt #0xefc0c */
  if (ARC_COND(c, 11)) goto L_efc0c;
  /* efc08: strb wzr, [x21] */
  arc_st8(ARC_X_R(c, 21), ARC_W_R(c, 31));
L_efc0c:;
  /* efc0c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* efc10: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* efc14: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* efc18: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* efc1c: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* efc20: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* efc24: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* efc28: ret  */
  return;
L_efc2c:;
  /* efc2c: nop  */
  /* nop: no architectural effect here */
  /* efc30: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* efc34: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(982072));
  fn1_ec720(c);
  /* efc38: add x21, x21, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* efc3c: b #0xefc40 */
  goto L_efc40;
L_efc40:;
  /* efc40: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(982084));
  fn1_142548(c);
  /* efc44: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* efc48: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* efc4c: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* efc50: ldr w10, [x9, #0x20] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* efc54: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* efc58: str w10, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 10));
  /* efc5c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* efc60: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* efc64: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* efc68: tbnz w8, #0, #0xefc78 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_efc78;
  /* efc6c: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(982128));
  fn1_142980(c);
  /* efc70: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* efc74: b #0xefbcc */
  goto L_efbcc;
L_efc78:;
  /* efc78: strb wzr, [x21] */
  arc_st8(ARC_X_R(c, 21), ARC_W_R(c, 31));
  /* efc7c: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(982144));
  fn1_1429b0(c);
  /* efc80: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* efc84: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(982152));
  fn1_142980(c);
  /* efc88: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* efc8c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(982160));
  fn1_9cc20(c);
  /* efc90: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(982164));
  fn1_a1454(c);
}

void fn1_f3bd8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038926296));
  /* f3bd8: bti c */
  /* bti: no architectural effect here */
  /* f3bdc: ldr x9, [x0, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* f3be0: nop  */
  /* nop: no architectural effect here */
  /* f3be4: adr x10, #0x15dc40 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f3be8: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* f3bec: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* f3bf0: b.eq #0xf3c14 */
  if (ARC_COND(c, 0)) goto L_f3c14;
  /* f3bf4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f3bf8: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f3bfc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f3c00: add x1, x9, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) + UINT64_C(8)));
  /* f3c04: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f3c08: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(998412));
  fn1_db2e0(c);
  /* f3c0c: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f3c10: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
L_f3c14:;
  /* f3c14: ret  */
  return;
}

void fn1_f64b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038936760));
  /* f64b8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f64bc: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f64c0: str x25, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 25));
  /* f64c4: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* f64c8: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f64cc: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f64d0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f64d4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f64d8: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* f64dc: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* f64e0: str xzr, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 31));
  /* f64e4: add x0, x29, #0x1c */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(28)));
  /* f64e8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f64ec: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* f64f0: mov w22, w3 */
  ARC_W_W(c, 22, ARC_W_R(c, 3));
  /* f64f4: bl #0x143670 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1008888));
  fn1_143670(c);
  /* f64f8: ldrb w8, [x29, #0x1c] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(28))));
  /* f64fc: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f6500: b.ne #0xf6630 */
  if (ARC_COND(c, 1)) goto L_f6630;
  /* f6504: subs x23, x20, #1 */
  ARC_X_W(c, 23, arc_sub64(c, ARC_X_R(c, 20), UINT64_C(1)));
  /* f6508: b.lt #0xf65c0 */
  if (ARC_COND(c, 11)) goto L_f65c0;
  /* f650c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* f6510: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* f6514: b.ge #0xf65c8 */
  if (ARC_COND(c, 10)) goto L_f65c8;
  /* f6518: add x24, x19, #0x28 */
  ARC_X_W(c, 24, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* f651c: b #0xf654c */
  goto L_f654c;
L_f6520:;
  /* f6520: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* f6524: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* f6528: ldr x0, [x24, x9] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 24) + ARC_X_R(c, 9))));
  /* f652c: ldp x9, x10, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* f6530: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* f6534: b.eq #0xf65ac */
  if (ARC_COND(c, 0)) goto L_f65ac;
  /* f6538: add x9, x9, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(4)));
  /* f653c: str x9, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 9));
L_f6540:;
  /* f6540: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* f6544: mov x21, x25 */
  ARC_X_W(c, 21, ARC_X_R(c, 25));
  /* f6548: b.ge #0xf65e8 */
  if (ARC_COND(c, 10)) goto L_f65e8;
L_f654c:;
  /* f654c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f6550: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f6554: ldr x0, [x24, x8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 24) + ARC_X_R(c, 8))));
  /* f6558: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f655c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* f6560: b.eq #0xf656c */
  if (ARC_COND(c, 0)) goto L_f656c;
  /* f6564: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* f6568: b #0xf6578 */
  goto L_f6578;
L_f656c:;
  /* f656c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f6570: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* f6574: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1009016));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f6578:;
  /* f6578: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* f657c: b.eq #0xf65d0 */
  if (ARC_COND(c, 0)) goto L_f65d0;
  /* f6580: ldr x10, [x19, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* f6584: cmp w0, w22 */
  (void)arc_sub32(c, ARC_W_R(c, 0), ARC_W_R(c, 22));
  /* f6588: b.eq #0xf65dc */
  if (ARC_COND(c, 0)) goto L_f65dc;
  /* f658c: mov x8, #0x7fffffffffffffff */
  ARC_X_W(c, 8, UINT64_C(9223372036854775807));
  /* f6590: mov x25, x21 */
  ARC_X_W(c, 25, ARC_X_R(c, 21));
  /* f6594: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* f6598: str w0, [x25], #4 */
  { const uint64_t _a = ARC_X_R(c, 25);
    ARC_X_W(c, 25, ARC_X_R(c, 25) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 0));
  }
  /* f659c: b.eq #0xf6520 */
  if (ARC_COND(c, 0)) goto L_f6520;
  /* f65a0: add x8, x10, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* f65a4: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* f65a8: b #0xf6520 */
  goto L_f6520;
L_f65ac:;
  /* f65ac: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f65b0: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* f65b4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1009080));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f65b8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* f65bc: b #0xf6540 */
  goto L_f6540;
L_f65c0:;
  /* f65c0: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* f65c4: b #0xf6600 */
  goto L_f6600;
L_f65c8:;
  /* f65c8: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* f65cc: b #0xf65f0 */
  goto L_f65f0;
L_f65d0:;
  /* f65d0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* f65d4: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* f65d8: b #0xf65f0 */
  goto L_f65f0;
L_f65dc:;
  /* f65dc: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* f65e0: mov x8, x10 */
  ARC_X_W(c, 8, ARC_X_R(c, 10));
  /* f65e4: b #0xf65f0 */
  goto L_f65f0;
L_f65e8:;
  /* f65e8: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* f65ec: mov x21, x25 */
  ARC_X_W(c, 21, ARC_X_R(c, 25));
L_f65f0:;
  /* f65f0: orr w10, w9, #4 */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) | UINT64_C(4)));
  /* f65f4: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* f65f8: csel w8, w10, w9, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
L_f65fc:;
  /* f65fc: str wzr, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 31));
L_f6600:;
  /* f6600: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* f6604: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* f6608: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f660c: ldr x10, [x9, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 9) + INT64_C(40))));
  /* f6610: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* f6614: ldp w11, w10, [x9, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(32));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* f6618: orr w8, w11, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 11) | ARC_W_R(c, 8)));
  /* f661c: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* f6620: orr w8, w8, w11 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 11)));
  /* f6624: tst w8, w10 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 10)));
  /* f6628: str w8, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 8));
  /* f662c: b.ne #0xf665c */
  if (ARC_COND(c, 1)) goto L_f665c;
L_f6630:;
  /* f6630: cmp x20, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(1));
  /* f6634: b.lt #0xf663c */
  if (ARC_COND(c, 11)) goto L_f663c;
  /* f6638: str wzr, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 31));
L_f663c:;
  /* f663c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f6640: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f6644: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* f6648: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f664c: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* f6650: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f6654: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f6658: ret  */
  return;
L_f665c:;
  /* f665c: nop  */
  /* nop: no architectural effect here */
  /* f6660: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f6664: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1009256));
  fn1_ec720(c);
  /* f6668: add x21, x21, #4 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(4)));
  /* f666c: b #0xf6670 */
  goto L_f6670;
L_f6670:;
  /* f6670: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1009268));
  fn1_142548(c);
  /* f6674: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f6678: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f667c: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f6680: ldr w10, [x9, #0x20] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f6684: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* f6688: str w10, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 10));
  /* f668c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f6690: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f6694: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f6698: tbnz w8, #0, #0xf66a8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_f66a8;
  /* f669c: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1009312));
  fn1_142980(c);
  /* f66a0: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* f66a4: b #0xf65fc */
  goto L_f65fc;
L_f66a8:;
  /* f66a8: str wzr, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 31));
  /* f66ac: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1009328));
  fn1_1429b0(c);
  /* f66b0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f66b4: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1009336));
  fn1_142980(c);
  /* f66b8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f66bc: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1009344));
  fn1_9cc20(c);
  /* f66c0: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1009348));
  fn1_a1454(c);
}

void fn1_fb6d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038957776));
  /* fb6d0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fb6d4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fb6d8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* fb6dc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fb6e0: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* fb6e4: ldr x9, [x1, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* fb6e8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fb6ec: add x0, x0, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(8)));
  /* fb6f0: orr w2, w2, #0x10 */
  ARC_W_W(c, 2, (ARC_W_R(c, 2) | UINT64_C(16)));
  /* fb6f4: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* fb6f8: csinc x1, x9, x1, ne */
  ARC_X_W(c, 1, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 1)) + 1)));
  /* fb6fc: bl #0x143598 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1029888));
  fn1_143598(c);
  /* fb700: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* fb704: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* fb708: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* fb70c: cbz x0, #0xfb718 */
  if ((ARC_X_R(c, 0)) == 0) goto L_fb718;
  /* fb710: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* fb714: b #0xfb720 */
  goto L_fb720;
L_fb718:;
  /* fb718: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* fb71c: orr w9, w9, #4 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(4)));
L_fb720:;
  /* fb720: ldr x10, [x8, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* fb724: ldr w11, [x8, #0x24] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 8) + INT64_C(36))));
  /* fb728: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* fb72c: cset w10, eq */
  ARC_W_W(c, 10, (ARC_COND(c, 0) ? 1 : 0));
  /* fb730: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* fb734: tst w9, w11 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & ARC_W_R(c, 11)));
  /* fb738: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* fb73c: b.ne #0xfb750 */
  if (ARC_COND(c, 1)) goto L_fb750;
  /* fb740: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* fb744: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fb748: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fb74c: ret  */
  return;
L_fb750:;
  /* fb750: nop  */
  /* nop: no architectural effect here */
  /* fb754: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* fb758: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1029980));
  fn1_ec720(c);
}

void fn1_fec70(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038971504));
  /* fec70: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fec74: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* fec78: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fec7c: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* fec80: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* fec84: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fec88: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* fec8c: ldrb w8, [x0, #0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(96))));
  /* fec90: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fec94: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* fec98: b.ne #0xfecb4 */
  if (ARC_COND(c, 1)) goto L_fecb4;
  /* fec9c: ldr w0, [x19, #0x5c] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 19) + INT64_C(92))));
  /* feca0: tbz w1, #0, #0xfedfc */
  if (((ARC_W_R(c, 1)) >> 0 & 1) == 0) goto L_fedfc;
  /* feca4: mov w8, #-1 */
  ARC_W_W(c, 8, UINT64_C(18446744073709551615));
  /* feca8: strb wzr, [x19, #0x60] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(96)), ARC_W_R(c, 31));
  /* fecac: str w8, [x19, #0x5c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(92)), ARC_W_R(c, 8));
  /* fecb0: b #0xfedfc */
  goto L_fedfc;
L_fecb4:;
  /* fecb4: ldrb w8, [x19, #0x61] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(97))));
  /* fecb8: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* fecbc: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* fecc0: b.ne #0xfece0 */
  if (ARC_COND(c, 1)) goto L_fece0;
  /* fecc4: ldr x0, [x19, #0x40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* fecc8: bl #0x143820 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1043660));
  fn1_143820(c);
  /* feccc: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* fecd0: b.eq #0xfedfc */
  if (ARC_COND(c, 0)) goto L_fedfc;
  /* fecd4: tbz w20, #0, #0xfed7c */
  if (((ARC_W_R(c, 20)) >> 0 & 1) == 0) goto L_fed7c;
  /* fecd8: str w0, [x19, #0x5c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(92)), ARC_W_R(c, 0));
  /* fecdc: b #0xfedfc */
  goto L_fedfc;
L_fece0:;
  /* fece0: ldr w8, [x19, #0x58] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(88))));
  /* fece4: mov x22, xzr */
  ARC_X_W(c, 22, ARC_X_R(c, 31));
  /* fece8: sub x23, x29, #8 */
  ARC_X_W(c, 23, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* fecec: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* fecf0: csinc w21, w8, wzr, gt */
  ARC_W_W(c, 21, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ((ARC_W_R(c, 31)) + 1)));
L_fecf4:;
  /* fecf4: ldr x0, [x19, #0x40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* fecf8: bl #0x1437f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1043708));
  fn1_1437f0(c);
  /* fecfc: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* fed00: b.eq #0xfedfc */
  if (ARC_COND(c, 0)) goto L_fedfc;
  /* fed04: strb w0, [x23, x22] */
  arc_st8((ARC_X_R(c, 23) + ARC_X_R(c, 22)), ARC_W_R(c, 0));
  /* fed08: add x22, x22, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* fed0c: cmp x21, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 22));
  /* fed10: b.ne #0xfecf4 */
  if (ARC_COND(c, 1)) goto L_fecf4;
  /* fed14: sub x22, x29, #0xc */
  ARC_X_W(c, 22, (ARC_X_R(c, 29) - UINT64_C(12)));
  /* fed18: sub x23, x29, #8 */
  ARC_X_W(c, 23, (ARC_X_R(c, 29) - UINT64_C(8)));
L_fed1c:;
  /* fed1c: ldp x0, x1, [x19, #0x48] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(72));
    ARC_X_W(c, 0, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* fed20: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* fed24: add x3, x23, x21 */
  ARC_X_W(c, 3, (ARC_X_R(c, 23) + ARC_X_R(c, 21)));
  /* fed28: add x4, sp, #8 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(8)));
  /* fed2c: sub x5, x29, #0xc */
  ARC_X_W(c, 5, (ARC_X_R(c, 29) - UINT64_C(12)));
  /* fed30: add x6, x22, #4 */
  ARC_X_W(c, 6, (ARC_X_R(c, 22) + UINT64_C(4)));
  /* fed34: mov x7, sp */
  ARC_X_W(c, 7, (c)->sp);
  /* fed38: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* fed3c: ldr x24, [x1] */
  ARC_X_W(c, 24, arc_ld64(ARC_X_R(c, 1)));
  /* fed40: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* fed44: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1043784));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* fed48: cmp w0, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(1));
  /* fed4c: b.ne #0xfed98 */
  if (ARC_COND(c, 1)) goto L_fed98;
  /* fed50: ldr x8, [x19, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(80))));
  /* fed54: cmp x21, #8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(8));
  /* fed58: str x24, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 24));
  /* fed5c: b.eq #0xfedc0 */
  if (ARC_COND(c, 0)) goto L_fedc0;
  /* fed60: ldr x0, [x19, #0x40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* fed64: bl #0x1437f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1043816));
  fn1_1437f0(c);
  /* fed68: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* fed6c: b.eq #0xfedfc */
  if (ARC_COND(c, 0)) goto L_fedfc;
  /* fed70: strb w0, [x23, x21] */
  arc_st8((ARC_X_R(c, 23) + ARC_X_R(c, 21)), ARC_W_R(c, 0));
  /* fed74: add x21, x21, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* fed78: b #0xfed1c */
  goto L_fed1c;
L_fed7c:;
  /* fed7c: ldr x1, [x19, #0x40] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* fed80: mov w19, w0 */
  ARC_W_W(c, 19, ARC_W_R(c, 0));
  /* fed84: bl #0x143838 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1043848));
  fn1_143838(c);
  /* fed88: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* fed8c: b.eq #0xfedfc */
  if (ARC_COND(c, 0)) goto L_fedfc;
  /* fed90: mov w0, w19 */
  ARC_W_W(c, 0, ARC_W_R(c, 19));
  /* fed94: b #0xfedfc */
  goto L_fedfc;
L_fed98:;
  /* fed98: cmp w0, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(2));
  /* fed9c: b.eq #0xfedc0 */
  if (ARC_COND(c, 0)) goto L_fedc0;
  /* feda0: cmp w0, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(3));
  /* feda4: b.ne #0xfedb0 */
  if (ARC_COND(c, 1)) goto L_fedb0;
  /* feda8: ldurb w8, [x29, #-8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-8))));
  /* fedac: stur w8, [x29, #-0xc] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-12)), ARC_W_R(c, 8));
L_fedb0:;
  /* fedb0: tbz w20, #0, #0xfedc8 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) == 0) goto L_fedc8;
  /* fedb4: ldur w0, [x29, #-0xc] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(-12))));
  /* fedb8: str w0, [x19, #0x5c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(92)), ARC_W_R(c, 0));
  /* fedbc: b #0xfedfc */
  goto L_fedfc;
L_fedc0:;
  /* fedc0: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* fedc4: b #0xfedfc */
  goto L_fedfc;
L_fedc8:;
  /* fedc8: sub x9, x29, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* fedcc: mov w8, w21 */
  ARC_W_W(c, 8, ARC_W_R(c, 21));
  /* fedd0: sub x20, x9, #1 */
  ARC_X_W(c, 20, (ARC_X_R(c, 9) - UINT64_C(1)));
L_fedd4:;
  /* fedd4: subs x21, x8, #1 */
  ARC_X_W(c, 21, arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1)));
  /* fedd8: b.lt #0xfedf8 */
  if (ARC_COND(c, 11)) goto L_fedf8;
  /* feddc: ldrb w0, [x20, x8] */
  ARC_W_W(c, 0, arc_ld8((ARC_X_R(c, 20) + ARC_X_R(c, 8))));
  /* fede0: ldr x1, [x19, #0x40] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* fede4: bl #0x143808 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1043944));
  fn1_143808(c);
  /* fede8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* fedec: mov x8, x21 */
  ARC_X_W(c, 8, ARC_X_R(c, 21));
  /* fedf0: b.ne #0xfedd4 */
  if (ARC_COND(c, 1)) goto L_fedd4;
  /* fedf4: b #0xfedfc */
  goto L_fedfc;
L_fedf8:;
  /* fedf8: ldur w0, [x29, #-0xc] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(-12))));
L_fedfc:;
  /* fedfc: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fee00: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* fee04: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* fee08: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fee0c: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* fee10: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fee14: ret  */
  return;
}

void fn1_10be60(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039025248));
  /* 10be60: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 10be64: sub sp, sp, #0x130 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(304)));
  /* 10be68: stp x29, x30, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 10be6c: stp x28, x23, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 10be70: stp x22, x21, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 10be74: stp x20, x19, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 10be78: add x29, sp, #0xf0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(240)));
  /* 10be7c: ldr w9, [x2, #8] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 2) + INT64_C(8))));
  /* 10be80: mov w8, #0x25 */
  ARC_W_W(c, 8, UINT64_C(37));
  /* 10be84: mov x22, x4 */
  ARC_X_W(c, 22, ARC_X_R(c, 4));
  /* 10be88: mov w19, w3 */
  ARC_W_W(c, 19, ARC_W_R(c, 3));
  /* 10be8c: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 10be90: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 10be94: stur x8, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 8));
  /* 10be98: sub x8, x29, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 10be9c: tbnz w9, #9, #0x10bea8 */
  if (((ARC_W_R(c, 9)) >> 9 & 1) != 0) goto L_10bea8;
  /* 10bea0: orr x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(1)));
  /* 10bea4: b #0x10beb4 */
  goto L_10beb4;
L_10bea8:;
  /* 10bea8: mov w10, #0x23 */
  ARC_W_W(c, 10, UINT64_C(35));
  /* 10beac: orr x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(2)));
  /* 10beb0: sturb w10, [x29, #-7] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-7)), ARC_W_R(c, 10));
L_10beb4:;
  /* 10beb4: mov w10, #0x4a */
  ARC_W_W(c, 10, UINT64_C(74));
  /* 10beb8: mov w11, #0x6c */
  ARC_W_W(c, 11, UINT64_C(108));
  /* 10bebc: and w10, w9, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) & ARC_W_R(c, 10)));
  /* 10bec0: strb w11, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 11));
  /* 10bec4: cmp w10, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(64));
  /* 10bec8: b.eq #0x10bee8 */
  if (ARC_COND(c, 0)) goto L_10bee8;
  /* 10becc: cmp w10, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(8));
  /* 10bed0: b.ne #0x10bef0 */
  if (ARC_COND(c, 1)) goto L_10bef0;
  /* 10bed4: tst w9, #0x4000 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(16384)));
  /* 10bed8: mov w9, #0x58 */
  ARC_W_W(c, 9, UINT64_C(88));
  /* 10bedc: mov w10, #0x78 */
  ARC_W_W(c, 10, UINT64_C(120));
  /* 10bee0: csel w9, w10, w9, eq */
  ARC_W_W(c, 9, (ARC_COND(c, 0) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* 10bee4: b #0x10bef4 */
  goto L_10bef4;
L_10bee8:;
  /* 10bee8: mov w9, #0x6f */
  ARC_W_W(c, 9, UINT64_C(111));
  /* 10beec: b #0x10bef4 */
  goto L_10bef4;
L_10bef0:;
  /* 10bef0: mov w9, #0x75 */
  ARC_W_W(c, 9, UINT64_C(117));
L_10bef4:;
  /* 10bef4: strb w9, [x8, #1] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(1)), ARC_W_R(c, 9));
  /* 10bef8: nop  */
  /* nop: no architectural effect here */
  /* 10befc: adr x8, #0x15dc38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10bf00: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 10bf04: adrp x23, #0x15d000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 10bf08: tbz w8, #0, #0x10c004 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10c004;
L_10bf0c:;
  /* 10bf0c: ldr x2, [x23, #0xc30] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 23) + INT64_C(3120))));
  /* 10bf10: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 10bf14: sub x3, x29, #8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 10bf18: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* 10bf1c: mov x4, x22 */
  ARC_X_W(c, 4, ARC_X_R(c, 22));
  /* 10bf20: sub x22, x29, #0x20 */
  ARC_X_W(c, 22, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 10bf24: bl #0x136860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1097512));
  fn1_136860(c);
  /* 10bf28: ldr w8, [x20, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(8))));
  /* 10bf2c: mov w9, #0xb0 */
  ARC_W_W(c, 9, UINT64_C(176));
  /* 10bf30: add x22, x22, w0, sxtw */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + ((uint64_t)(int64_t)(int32_t)(ARC_W_R(c, 0)))));
  /* 10bf34: and w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & ARC_W_R(c, 9)));
  /* 10bf38: mov x23, x22 */
  ARC_X_W(c, 23, ARC_X_R(c, 22));
  /* 10bf3c: cmp w8, #0x20 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(32));
  /* 10bf40: b.eq #0x10bf9c */
  if (ARC_COND(c, 0)) goto L_10bf9c;
  /* 10bf44: cmp w8, #0x10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(16));
  /* 10bf48: b.ne #0x10bf98 */
  if (ARC_COND(c, 1)) goto L_10bf98;
  /* 10bf4c: ldurb w8, [x29, #-0x20] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 10bf50: cmp w8, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(45));
  /* 10bf54: b.eq #0x10bf60 */
  if (ARC_COND(c, 0)) goto L_10bf60;
  /* 10bf58: cmp w8, #0x2b */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(43));
  /* 10bf5c: b.ne #0x10bf6c */
  if (ARC_COND(c, 1)) goto L_10bf6c;
L_10bf60:;
  /* 10bf60: sub x8, x29, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 10bf64: orr x23, x8, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 8) | UINT64_C(1)));
  /* 10bf68: b #0x10bf9c */
  goto L_10bf9c;
L_10bf6c:;
  /* 10bf6c: cmp w0, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(2));
  /* 10bf70: b.lt #0x10bf98 */
  if (ARC_COND(c, 11)) goto L_10bf98;
  /* 10bf74: cmp w8, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(48));
  /* 10bf78: b.ne #0x10bf98 */
  if (ARC_COND(c, 1)) goto L_10bf98;
  /* 10bf7c: ldurb w8, [x29, #-0x1f] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-31))));
  /* 10bf80: orr w8, w8, #0x20 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(32)));
  /* 10bf84: cmp w8, #0x78 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(120));
  /* 10bf88: b.ne #0x10bf98 */
  if (ARC_COND(c, 1)) goto L_10bf98;
  /* 10bf8c: sub x8, x29, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 10bf90: orr x23, x8, #2 */
  ARC_X_W(c, 23, (ARC_X_R(c, 8) | UINT64_C(2)));
  /* 10bf94: b #0x10bf9c */
  goto L_10bf9c;
L_10bf98:;
  /* 10bf98: sub x23, x29, #0x20 */
  ARC_X_W(c, 23, (ARC_X_R(c, 29) - UINT64_C(32)));
L_10bf9c:;
  /* 10bf9c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 10bfa0: add x1, x20, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(48)));
  /* 10bfa4: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1097640));
  fn1_143460(c);
  /* 10bfa8: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 10bfac: add x3, sp, #0x1c */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(28)));
  /* 10bfb0: add x4, sp, #0x10 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(16)));
  /* 10bfb4: add x5, sp, #8 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(8)));
  /* 10bfb8: mov x6, sp */
  ARC_X_W(c, 6, (c)->sp);
  /* 10bfbc: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 10bfc0: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 10bfc4: bl #0x143928 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1097672));
  fn1_143928(c);
  /* 10bfc8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 10bfcc: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1097680));
  fn1_143478(c);
  /* 10bfd0: ldp x3, x2, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 3, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 10bfd4: add x1, sp, #0x1c */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(28)));
  /* 10bfd8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 10bfdc: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* 10bfe0: mov w5, w19 */
  ARC_W_W(c, 5, ARC_W_R(c, 19));
  /* 10bfe4: bl #0x10cdc0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1097704));
  fn1_10cdc0(c);
  /* 10bfe8: ldp x20, x19, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 10bfec: ldp x22, x21, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 10bff0: ldp x28, x23, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 10bff4: ldp x29, x30, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 10bff8: add sp, sp, #0x130 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(304)));
  /* 10bffc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 10c000: ret  */
  return;
L_10c004:;
  /* 10c004: nop  */
  /* nop: no architectural effect here */
  /* 10c008: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10c00c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1097744));
  fn1_1424b8(c);
  /* 10c010: cbz w0, #0x10bf0c */
  if ((ARC_W_R(c, 0)) == 0) goto L_10bf0c;
  /* 10c014: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 10c018: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 10c01c: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 10c020: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 10c024: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1097768));
  fn1_1441e0(c);
  /* 10c028: str x0, [x23, #0xc30] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 10c02c: nop  */
  /* nop: no architectural effect here */
  /* 10c030: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10c034: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1097784));
  fn1_1424d0(c);
  /* 10c038: b #0x10bf0c */
  goto L_10bf0c;
  /* 10c03c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10c040: nop  */
  /* nop: no architectural effect here */
  /* 10c044: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10c048: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1097804));
  fn1_1424e8(c);
  /* 10c04c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10c050: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1097812));
  fn1_9cc20(c);
  /* 10c054: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10c058: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 10c05c: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1097824));
  fn1_143478(c);
  /* 10c060: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10c064: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1097832));
  fn1_9cc20(c);
}

void fn1_113ba8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057320));
  /* 113ba8: bti c */
  /* bti: no architectural effect here */
  /* 113bac: mov w0, #0xff */
  ARC_W_W(c, 0, UINT64_C(255));
  /* 113bb0: ret  */
  return;
}

void fn1_1140d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039058648));
  /* 1140d8: bti c */
  /* bti: no architectural effect here */
  /* 1140dc: ldr w0, [x0, #0x14] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(20))));
  /* 1140e0: ret  */
  return;
}

void fn1_12001c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039107612));
  /* 12001c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 120020: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 120024: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 120028: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12002c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 120030: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 120034: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 120038: mov x9, #-1 */
  ARC_X_W(c, 9, UINT64_C(18446744073709551615));
  /* 12003c: ldr x8, [x8, #0xdb0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3504))));
  /* 120040: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 120044: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 120048: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 12004c: stp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 120050: str q0, [x21, #0x18]! */
  arc_st64((ARC_X_R(c, 21) + INT64_C(24)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 21) + INT64_C(24)) + 8, (c)->q[0].u64[1]);
  ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(24));
  /* 120054: stur q0, [x0, #0x28] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* 120058: stur q0, [x0, #0x38] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* 12005c: stur q0, [x0, #0x48] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* 120060: stur q0, [x0, #0x58] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(88)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(88)) + 8, (c)->q[0].u64[1]);
  /* 120064: stur q0, [x0, #0x68] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(104)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(104)) + 8, (c)->q[0].u64[1]);
  /* 120068: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 12006c: ldr x9, [x1, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* 120070: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 120074: csinc x1, x9, x1, ne */
  ARC_X_W(c, 1, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 1)) + 1)));
  /* 120078: bl #0x143d30 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1179772));
  fn1_143d30(c);
  /* 12007c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 120080: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 120084: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 120088: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12008c: ret  */
  return;
  /* 120090: ldrb w8, [x19, #0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(96))));
  /* 120094: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 120098: tbnz w8, #0, #0x1200bc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1200bc;
  /* 12009c: ldrb w8, [x19, #0x48] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(72))));
  /* 1200a0: tbnz w8, #0, #0x1200d4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1200d4;
L_1200a4:;
  /* 1200a4: ldrb w8, [x19, #0x30] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(48))));
  /* 1200a8: tbnz w8, #0, #0x1200ec */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1200ec;
L_1200ac:;
  /* 1200ac: ldrb w8, [x21] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 21)));
  /* 1200b0: tbnz w8, #0, #0x120104 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_120104;
L_1200b4:;
  /* 1200b4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1200b8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1179836));
  fn1_9cc20(c);
L_1200bc:;
  /* 1200bc: ldr x8, [x19, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(96))));
  /* 1200c0: ldr x0, [x19, #0x70] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(112))));
  /* 1200c4: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1200c8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1179852));
  fn1_142608(c);
  /* 1200cc: ldrb w8, [x19, #0x48] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(72))));
  /* 1200d0: tbz w8, #0, #0x1200a4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1200a4;
L_1200d4:;
  /* 1200d4: ldr x8, [x19, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(72))));
  /* 1200d8: ldr x0, [x19, #0x58] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(88))));
  /* 1200dc: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1200e0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1179876));
  fn1_142608(c);
  /* 1200e4: ldrb w8, [x19, #0x30] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(48))));
  /* 1200e8: tbz w8, #0, #0x1200ac */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1200ac;
L_1200ec:;
  /* 1200ec: ldr x8, [x19, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(48))));
  /* 1200f0: ldr x0, [x19, #0x40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* 1200f4: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1200f8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1179900));
  fn1_142608(c);
  /* 1200fc: ldrb w8, [x21] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 21)));
  /* 120100: tbz w8, #0, #0x1200b4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1200b4;
L_120104:;
  /* 120104: ldr x8, [x19, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* 120108: ldr x0, [x19, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(40))));
  /* 12010c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 120110: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1179924));
  fn1_142608(c);
  /* 120114: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 120118: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1179932));
  fn1_9cc20(c);
}

void fn1_126a90(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039134864));
  /* 126a90: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 126a94: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 126a98: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 126a9c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 126aa0: mov w19, w1 */
  ARC_W_W(c, 19, ARC_W_R(c, 1));
  /* 126aa4: tbnz w1, #7, #0x126acc */
  if (((ARC_W_R(c, 1)) >> 7 & 1) != 0) goto L_126acc;
  /* 126aa8: nop  */
  /* nop: no architectural effect here */
  /* 126aac: adr x8, #0x15dc38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 126ab0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 126ab4: tbz w8, #0, #0x126ae0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_126ae0;
L_126ab8:;
  /* 126ab8: sub w8, w19, #0x7b */
  ARC_W_W(c, 8, (ARC_W_R(c, 19) - UINT64_C(123)));
  /* 126abc: sub w9, w19, #0x20 */
  ARC_W_W(c, 9, (ARC_W_R(c, 19) - UINT64_C(32)));
  /* 126ac0: and w8, w8, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(255)));
  /* 126ac4: cmp w8, #0xe6 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(230));
  /* 126ac8: csel w19, w19, w9, lo */
  ARC_W_W(c, 19, (ARC_COND(c, 3) ? (ARC_W_R(c, 19)) : ARC_W_R(c, 9)));
L_126acc:;
  /* 126acc: mov w0, w19 */
  ARC_W_W(c, 0, ARC_W_R(c, 19));
  /* 126ad0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 126ad4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 126ad8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 126adc: ret  */
  return;
L_126ae0:;
  /* 126ae0: nop  */
  /* nop: no architectural effect here */
  /* 126ae4: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 126ae8: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1207020));
  fn1_1424b8(c);
  /* 126aec: cbz w0, #0x126ab8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_126ab8;
  /* 126af0: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 126af4: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 126af8: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 126afc: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 126b00: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1207044));
  fn1_1441e0(c);
  /* 126b04: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 126b08: str x0, [x8, #0xc30] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 126b0c: nop  */
  /* nop: no architectural effect here */
  /* 126b10: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 126b14: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1207064));
  fn1_1424d0(c);
  /* 126b18: b #0x126ab8 */
  goto L_126ab8;
  /* 126b1c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 126b20: nop  */
  /* nop: no architectural effect here */
  /* 126b24: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 126b28: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1207084));
  fn1_1424e8(c);
  /* 126b2c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 126b30: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1207092));
  fn1_9cc20(c);
}

void fn1_1291e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039144932));
  /* 1291e4: bti c */
  /* bti: no architectural effect here */
  /* 1291e8: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 1291ec: ret  */
  return;
}

void fn1_12aac8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039151304));
  /* 12aac8: bti c */
  /* bti: no architectural effect here */
  /* 12aacc: ldrb w9, [x0, #0x18] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12aad0: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 12aad4: tbz w9, #1, #0x12aaf4 */
  if (((ARC_W_R(c, 9)) >> 1 & 1) == 0) goto L_12aaf4;
  /* 12aad8: sub x9, x6, x5 */
  ARC_X_W(c, 9, (ARC_X_R(c, 6) - ARC_X_R(c, 5)));
  /* 12aadc: cmp x9, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(2));
  /* 12aae0: b.ge #0x12aaec */
  if (ARC_COND(c, 10)) goto L_12aaec;
L_12aae4:;
  /* 12aae4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 12aae8: b #0x12ab58 */
  goto L_12ab58;
L_12aaec:;
  /* 12aaec: mov w9, #0xfeff */
  ARC_W_W(c, 9, UINT64_C(65279));
  /* 12aaf0: strh w9, [x5], #2 */
  { const uint64_t _a = ARC_X_R(c, 5);
    ARC_X_W(c, 5, ARC_X_R(c, 5) + INT64_C(2));
    arc_st16(_a, ARC_W_R(c, 9));
  }
L_12aaf4:;
  /* 12aaf4: cmp x2, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 3));
  /* 12aaf8: b.hs #0x12ab4c */
  if (ARC_COND(c, 2)) goto L_12ab4c;
  /* 12aafc: sub x9, x6, x5 */
  ARC_X_W(c, 9, (ARC_X_R(c, 6) - ARC_X_R(c, 5)));
  /* 12ab00: mov w10, #0xd800 */
  ARC_W_W(c, 10, UINT64_C(55296));
L_12ab04:;
  /* 12ab04: ldrh w11, [x2] */
  ARC_W_W(c, 11, arc_ld16(ARC_X_R(c, 2)));
  /* 12ab08: and w12, w11, #0xf800 */
  ARC_W_W(c, 12, (ARC_W_R(c, 11) & UINT64_C(63488)));
  /* 12ab0c: cmp w12, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 10));
  /* 12ab10: ccmp x8, x11, #0, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* 12ab14: b.lo #0x12ab54 */
  if (ARC_COND(c, 3)) goto L_12ab54;
  /* 12ab18: subs x9, x9, #2 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 9), UINT64_C(2)));
  /* 12ab1c: b.lt #0x12aae4 */
  if (ARC_COND(c, 11)) goto L_12aae4;
  /* 12ab20: lsr w12, w11, #8 */
  ARC_W_W(c, 12, ((uint32_t)(ARC_W_R(c, 11)) >> ((UINT64_C(8)) & 31)));
  /* 12ab24: add x2, x2, #2 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2)));
  /* 12ab28: strb w11, [x5] */
  arc_st8(ARC_X_R(c, 5), ARC_W_R(c, 11));
  /* 12ab2c: add x11, x5, #2 */
  ARC_X_W(c, 11, (ARC_X_R(c, 5) + UINT64_C(2)));
  /* 12ab30: cmp x2, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 3));
  /* 12ab34: strb w12, [x5, #1] */
  arc_st8((ARC_X_R(c, 5) + INT64_C(1)), ARC_W_R(c, 12));
  /* 12ab38: mov x5, x11 */
  ARC_X_W(c, 5, ARC_X_R(c, 11));
  /* 12ab3c: b.lo #0x12ab04 */
  if (ARC_COND(c, 3)) goto L_12ab04;
  /* 12ab40: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 12ab44: mov x5, x11 */
  ARC_X_W(c, 5, ARC_X_R(c, 11));
  /* 12ab48: b #0x12ab58 */
  goto L_12ab58;
L_12ab4c:;
  /* 12ab4c: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 12ab50: b #0x12ab58 */
  goto L_12ab58;
L_12ab54:;
  /* 12ab54: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
L_12ab58:;
  /* 12ab58: str x2, [x4] */
  arc_st64(ARC_X_R(c, 4), ARC_X_R(c, 2));
  /* 12ab5c: str x5, [x7] */
  arc_st64(ARC_X_R(c, 7), ARC_X_R(c, 5));
  /* 12ab60: ret  */
  return;
}

void fn1_12be88(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039156360));
  /* 12be88: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12be8c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12be90: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 12be94: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12be98: mov w0, #0x20 */
  ARC_W_W(c, 0, UINT64_C(32));
  /* 12be9c: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 12bea0: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1228452));
  fn1_1428f0(c);
  /* 12bea4: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* 12bea8: mov w9, #0x65 */
  ARC_W_W(c, 9, UINT64_C(101));
  /* 12beac: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* 12beb0: ldr q0, [x8, #0xa20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2592))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2592)) + 8));
  /* 12beb4: adrp x8, #0x75000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(479232)));
  /* 12beb8: add x8, x8, #0x254 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(596)));
  /* 12bebc: ldr q1, [x8] */
  arc_q_w(c, 1, arc_ld64(ARC_X_R(c, 8)), arc_ld64(ARC_X_R(c, 8) + 8));
  /* 12bec0: str x9, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 9));
  /* 12bec4: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* 12bec8: str q1, [x0] */
  arc_st64(ARC_X_R(c, 0), (c)->q[1].u64[0]);
  arc_st64(ARC_X_R(c, 0) + 8, (c)->q[1].u64[1]);
  /* 12becc: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12bed0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12bed4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12bed8: ret  */
  return;
}

void fn1_134780(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039191424));
  /* 134780: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 134784: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 134788: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 13478c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 134790: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 134794: bl #0x143fe8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1263512));
  fn1_143fe8(c);
  /* 134798: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13479c: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* 1347a0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1347a4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1347a8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1347ac: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_134eb4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039193268));
  /* 134eb4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 134eb8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 134ebc: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 134ec0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 134ec4: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 134ec8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 134ecc: ldr x8, [x8, #0xdb8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3512))));
  /* 134ed0: ldrb w9, [x0, #0x60] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(96))));
  /* 134ed4: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 134ed8: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 134edc: tbnz w9, #0, #0x134f08 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_134f08;
  /* 134ee0: ldrb w8, [x19, #0x48] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(72))));
  /* 134ee4: tbnz w8, #0, #0x134f24 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_134f24;
L_134ee8:;
  /* 134ee8: ldrb w8, [x19, #0x30] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(48))));
  /* 134eec: tbnz w8, #0, #0x134f40 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_134f40;
L_134ef0:;
  /* 134ef0: ldrb w8, [x19, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(24))));
  /* 134ef4: tbnz w8, #0, #0x134f5c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_134f5c;
L_134ef8:;
  /* 134ef8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 134efc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 134f00: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 134f04: ret  */
  return;
L_134f08:;
  /* 134f08: ldr x8, [x19, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(96))));
  /* 134f0c: ldr x0, [x19, #0x70] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(112))));
  /* 134f10: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 134f14: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 134f18: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1265436));
  fn1_142608(c);
  /* 134f1c: ldrb w8, [x19, #0x48] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(72))));
  /* 134f20: tbz w8, #0, #0x134ee8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_134ee8;
L_134f24:;
  /* 134f24: ldr x8, [x19, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(72))));
  /* 134f28: ldr x0, [x19, #0x58] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(88))));
  /* 134f2c: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 134f30: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 134f34: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1265464));
  fn1_142608(c);
  /* 134f38: ldrb w8, [x19, #0x30] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(48))));
  /* 134f3c: tbz w8, #0, #0x134ef0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_134ef0;
L_134f40:;
  /* 134f40: ldr x8, [x19, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(48))));
  /* 134f44: ldr x0, [x19, #0x40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* 134f48: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 134f4c: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 134f50: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1265492));
  fn1_142608(c);
  /* 134f54: ldrb w8, [x19, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(24))));
  /* 134f58: tbz w8, #0, #0x134ef8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_134ef8;
L_134f5c:;
  /* 134f5c: ldr x8, [x19, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* 134f60: ldr x0, [x19, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(40))));
  /* 134f64: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 134f68: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 134f6c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 134f70: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 134f74: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_137b48(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039204680));
  /* 137b48: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 137b4c: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 137b50: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* 137b54: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 137b58: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 137b5c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 137b60: ldr x21, [x0, #8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* 137b64: nop  */
  /* nop: no architectural effect here */
  /* 137b68: adr x23, #0x15dc40 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1432640)));
  /* 137b6c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 137b70: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 137b74: cmp x21, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 23));
  /* 137b78: b.eq #0x137b88 */
  if (ARC_COND(c, 0)) goto L_137b88;
  /* 137b7c: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 137b80: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 137b84: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1276808));
  fn1_db2e0(c);
L_137b88:;
  /* 137b88: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* 137b8c: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* 137b90: b.eq #0x137ba0 */
  if (ARC_COND(c, 0)) goto L_137ba0;
  /* 137b94: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* 137b98: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 137b9c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1276832));
  fn1_db2e0(c);
L_137ba0:;
  /* 137ba0: ldr x22, [x19, #8] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 137ba4: cmp x22, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 23));
  /* 137ba8: b.eq #0x137bcc */
  if (ARC_COND(c, 0)) goto L_137bcc;
  /* 137bac: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* 137bb0: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 137bb4: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1276856));
  fn1_bd950(c);
  /* 137bb8: cbnz x0, #0x137bcc */
  if ((ARC_X_R(c, 0)) != 0) goto L_137bcc;
  /* 137bbc: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 137bc0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 137bc4: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 137bc8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1276876));
  arc_dispatch(c, ARC_X_R(c, 8));
L_137bcc:;
  /* 137bcc: ldr x22, [x20, #8] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* 137bd0: cmp x21, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 23));
  /* 137bd4: str x22, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 22));
  /* 137bd8: b.eq #0x137bec */
  if (ARC_COND(c, 0)) goto L_137bec;
  /* 137bdc: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 137be0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 137be4: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1276904));
  fn1_db2e0(c);
  /* 137be8: ldr x22, [x20, #8] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
L_137bec:;
  /* 137bec: cmp x22, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 23));
  /* 137bf0: b.eq #0x137c14 */
  if (ARC_COND(c, 0)) goto L_137c14;
  /* 137bf4: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* 137bf8: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 137bfc: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1276928));
  fn1_bd950(c);
  /* 137c00: cbnz x0, #0x137c14 */
  if ((ARC_X_R(c, 0)) != 0) goto L_137c14;
  /* 137c04: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 137c08: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 137c0c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 137c10: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1276948));
  arc_dispatch(c, ARC_X_R(c, 8));
L_137c14:;
  /* 137c14: cmp x21, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 23));
  /* 137c18: str x21, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 21));
  /* 137c1c: b.eq #0x137c40 */
  if (ARC_COND(c, 0)) goto L_137c40;
  /* 137c20: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 137c24: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 137c28: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1276972));
  fn1_bd950(c);
  /* 137c2c: cbnz x0, #0x137c40 */
  if ((ARC_X_R(c, 0)) != 0) goto L_137c40;
  /* 137c30: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 137c34: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 137c38: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 137c3c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1276992));
  arc_dispatch(c, ARC_X_R(c, 8));
L_137c40:;
  /* 137c40: ldr x8, [x20, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 137c44: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 137c48: ldr w10, [x20, #0x40] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 20) + INT64_C(64))));
  /* 137c4c: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* 137c50: str x9, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 9));
  /* 137c54: ldr x8, [x20, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* 137c58: ldr x9, [x19, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* 137c5c: str x8, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 8));
  /* 137c60: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
  /* 137c64: ldr x8, [x20, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* 137c68: ldr x9, [x19, #0x20] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* 137c6c: str x8, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 8));
  /* 137c70: str x9, [x20, #0x20] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(32)), ARC_X_R(c, 9));
  /* 137c74: ldr x8, [x20, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(40))));
  /* 137c78: ldr x9, [x19, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(40))));
  /* 137c7c: str x8, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), ARC_X_R(c, 8));
  /* 137c80: str x9, [x20, #0x28] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(40)), ARC_X_R(c, 9));
  /* 137c84: ldr x8, [x20, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(48))));
  /* 137c88: ldr x9, [x19, #0x30] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(48))));
  /* 137c8c: str x8, [x19, #0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)), ARC_X_R(c, 8));
  /* 137c90: str x9, [x20, #0x30] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(48)), ARC_X_R(c, 9));
  /* 137c94: ldr x8, [x20, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(56))));
  /* 137c98: ldr w9, [x19, #0x40] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 19) + INT64_C(64))));
  /* 137c9c: str w10, [x19, #0x40] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(64)), ARC_W_R(c, 10));
  /* 137ca0: ldr x10, [x19, #0x38] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(56))));
  /* 137ca4: str x8, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), ARC_X_R(c, 8));
  /* 137ca8: str x10, [x20, #0x38] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(56)), ARC_X_R(c, 10));
  /* 137cac: ldp x8, x10, [x20, #0x48] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(72));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 137cb0: ldp x11, x12, [x19, #0x48] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(72));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 12, arc_ld64(_pa + 8));
  }
  /* 137cb4: str w9, [x20, #0x40] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(64)), ARC_W_R(c, 9));
  /* 137cb8: stp x8, x10, [x19, #0x48] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(72));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 137cbc: stp x11, x12, [x20, #0x48] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(72));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 12));
  }
  /* 137cc0: ldr x8, [x20, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(88))));
  /* 137cc4: ldr x9, [x19, #0x58] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(88))));
  /* 137cc8: str x8, [x19, #0x58] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(88)), ARC_X_R(c, 8));
  /* 137ccc: str x9, [x20, #0x58] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(88)), ARC_X_R(c, 9));
  /* 137cd0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 137cd4: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 137cd8: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 137cdc: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 137ce0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 137ce4: ret  */
  return;
}

void fn1_13b290(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039218832));
  /* 13b290: bti c */
  /* bti: no architectural effect here */
  /* 13b294: mov w1, #0x90 */
  ARC_W_W(c, 1, UINT64_C(144));
  /* 13b298: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_1423b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039247800));
  /* 1423b8: bti c */
  /* bti: no architectural effect here */
  /* 1423bc: b #0x142908 */
  fn1_142908(c); return;
}

void fn1_1429b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249328));
  /* 1429b0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1429b4: ldr x17, [x16, #0x70] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(112))));
  /* 1429b8: add x16, x16, #0x70 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(112)));
  /* 1429bc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1429c0: nop  */
  /* nop: no architectural effect here */
  /* 1429c4: nop  */
  /* nop: no architectural effect here */
}

void fn1_142fb0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250864));
  /* 142fb0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142fb4: ldr x17, [x16, #0x270] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(624))));
  /* 142fb8: add x16, x16, #0x270 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(624)));
  /* 142fbc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142fc0: nop  */
  /* nop: no architectural effect here */
  /* 142fc4: nop  */
  /* nop: no architectural effect here */
}

void fn1_1435b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252400));
  /* 1435b0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1435b4: ldr x17, [x16, #0x470] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1136))));
  /* 1435b8: add x16, x16, #0x470 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1136)));
  /* 1435bc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1435c0: nop  */
  /* nop: no architectural effect here */
  /* 1435c4: nop  */
  /* nop: no architectural effect here */
}

void fn1_143bb0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253936));
  /* 143bb0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143bb4: ldr x17, [x16, #0x670] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1648))));
  /* 143bb8: add x16, x16, #0x670 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1648)));
  /* 143bbc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143bc0: nop  */
  /* nop: no architectural effect here */
  /* 143bc4: nop  */
  /* nop: no architectural effect here */
}

void fn1_1441b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255472));
  /* 1441b0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1441b4: ldr x17, [x16, #0x870] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2160))));
  /* 1441b8: add x16, x16, #0x870 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2160)));
  /* 1441bc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1441c0: nop  */
  /* nop: no architectural effect here */
  /* 1441c4: nop  */
  /* nop: no architectural effect here */
}

void fn1_1447b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039257008));
  /* 1447b0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1447b4: ldr x17, [x16, #0xa70] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2672))));
  /* 1447b8: add x16, x16, #0xa70 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2672)));
  /* 1447bc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1447c0: nop  */
  /* nop: no architectural effect here */
  /* 1447c4: nop  */
  /* nop: no architectural effect here */
}

