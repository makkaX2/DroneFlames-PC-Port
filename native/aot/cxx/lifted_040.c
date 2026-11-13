#include "lifted.h"

void fn1_9d9a4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038573476));
  /* 9d9a4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 9d9a8: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 9d9ac: str x28, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 28));
  /* 9d9b0: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 9d9b4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 9d9b8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 9d9bc: sub sp, sp, #0x6c0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(1728)));
  /* 9d9c0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 9d9c4: strb wzr, [x0, #0x26a] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(618)), ARC_W_R(c, 31));
  /* 9d9c8: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* 9d9cc: mov w1, #-1 */
  ARC_W_W(c, 1, UINT64_C(18446744073709551615));
  /* 9d9d0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 9d9d4: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 9d9d8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(645596));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 9d9dc: cbz x0, #0x9dbc4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_9dbc4;
  /* 9d9e0: and x9, x20, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) & UINT64_C(1)));
  /* 9d9e4: ldrb w10, [x19, #0x269] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 19) + INT64_C(617))));
  /* 9d9e8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 9d9ec: sub x9, x0, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) - ARC_X_R(c, 9)));
  /* 9d9f0: add x11, sp, #0x70 */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(112)));
  /* 9d9f4: nop  */
  /* nop: no architectural effect here */
  /* 9d9f8: adr x0, #0xa00b8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(655544)));
  /* 9d9fc: add x20, x9, x10 */
  ARC_X_W(c, 20, (ARC_X_R(c, 9) + ARC_X_R(c, 10)));
  /* 9da00: add x1, sp, #0xa0 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(160)));
  /* 9da04: stp x8, x11, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 11));
  }
  /* 9da08: str x20, [sp, #0xb0] */
  arc_st64(((c)->sp + INT64_C(176)), ARC_X_R(c, 20));
  /* 9da0c: bl #0x144ae0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(645648));
  fn1_144ae0(c);
  /* 9da10: cbz w0, #0x9da34 */
  if ((ARC_W_R(c, 0)) == 0) goto L_9da34;
  /* 9da14: ldr x8, [sp, #0x80] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(128))));
  /* 9da18: cbz x8, #0x9da34 */
  if ((ARC_X_R(c, 8)) == 0) goto L_9da34;
  /* 9da1c: add x2, sp, #0x70 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(112)));
  /* 9da20: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 9da24: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 9da28: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 9da2c: bl #0x9fde4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(645680));
  fn1_9fde4(c);
  /* 9da30: tbnz w0, #0, #0x9dbcc */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_9dbcc;
L_9da34:;
  /* 9da34: nop  */
  /* nop: no architectural effect here */
  /* 9da38: adr x0, #0x156dc4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1404356)));
  /* 9da3c: bl #0x144a68 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(645696));
  fn1_144a68(c);
  /* 9da40: adrp x8, #0x156000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1400832)));
  /* 9da44: adrp x9, #0x156000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1400832)));
  /* 9da48: ldr x8, [x8, #0xb88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2952))));
  /* 9da4c: ldr x9, [x9, #0xb90] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2960))));
  /* 9da50: b #0x9da58 */
  goto L_9da58;
L_9da54:;
  /* 9da54: add x8, x8, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(32)));
L_9da58:;
  /* 9da58: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 9da5c: b.hs #0x9db18 */
  if (ARC_COND(c, 2)) goto L_9db18;
  /* 9da60: ldr x10, [x8, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 9da64: cmp x10, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 20));
  /* 9da68: b.hi #0x9da54 */
  if (ARC_COND(c, 8)) goto L_9da54;
  /* 9da6c: ldr x10, [x8, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 9da70: cmp x20, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 10));
  /* 9da74: b.hs #0x9da54 */
  if (ARC_COND(c, 2)) goto L_9da54;
  /* 9da78: ldr x21, [x8, #0x18] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 9da7c: nop  */
  /* nop: no architectural effect here */
  /* 9da80: adr x0, #0x156dc4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1404356)));
  /* 9da84: bl #0x1449c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(645768));
  fn1_1449c0(c);
  /* 9da88: cbz x21, #0x9db24 */
  if ((ARC_X_R(c, 21)) == 0) goto L_9db24;
  /* 9da8c: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 9da90: add x2, sp, #0x40 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(64)));
  /* 9da94: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 9da98: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 9da9c: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 9daa0: bl #0x9d15c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(645796));
  fn1_9d15c(c);
  /* 9daa4: cbnz x0, #0x9db24 */
  if ((ARC_X_R(c, 0)) != 0) goto L_9db24;
  /* 9daa8: add x0, sp, #0xa0 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(160)));
  /* 9daac: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 9dab0: mov w2, #0x620 */
  ARC_W_W(c, 2, UINT64_C(1568));
  /* 9dab4: bl #0x144a20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(645816));
  fn1_144a20(c);
  /* 9dab8: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 9dabc: add x1, sp, #0x40 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(64)));
  /* 9dac0: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 9dac4: add x5, sp, #0xa0 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(160)));
  /* 9dac8: mov x3, x20 */
  ARC_X_W(c, 3, ARC_X_R(c, 20));
  /* 9dacc: mov w4, #4 */
  ARC_W_W(c, 4, UINT64_C(4));
  /* 9dad0: bl #0x9e0b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(645844));
  fn1_9e0b0(c);
  /* 9dad4: tbz w0, #0, #0x9db24 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_9db24;
  /* 9dad8: ldr x8, [sp, #0x68] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(104))));
  /* 9dadc: ldr x9, [sp, #0x28] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(40))));
  /* 9dae0: ldur q0, [sp, #0x58] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(88))), arc_ld64(((c)->sp + INT64_C(88)) + 8));
  /* 9dae4: str xzr, [x19, #0x248] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(584)), ARC_X_R(c, 31));
  /* 9dae8: str x8, [x19, #0x230] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(560)), ARC_X_R(c, 8));
  /* 9daec: ldr w8, [sp, #0xb0] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(176))));
  /* 9daf0: str x9, [x19, #0x238] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(568)), ARC_X_R(c, 9));
  /* 9daf4: mov w9, #0x3000000 */
  ARC_W_W(c, 9, UINT64_C(50331648));
  /* 9daf8: str x8, [x19, #0x240] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(576)), ARC_X_R(c, 8));
  /* 9dafc: str w9, [x19, #0x250] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(592)), ARC_W_R(c, 9));
  /* 9db00: ldp x8, x9, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 9db04: str q0, [x19, #0x220] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(544)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(544)) + 8, (c)->q[0].u64[1]);
  /* 9db08: str xzr, [x19, #0x260] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(608)), ARC_X_R(c, 31));
  /* 9db0c: str x8, [x19, #0x258] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(600)), ARC_X_R(c, 8));
  /* 9db10: str w9, [x19, #0x254] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(596)), ARC_W_R(c, 9));
  /* 9db14: b #0x9dbcc */
  goto L_9dbcc;
L_9db18:;
  /* 9db18: nop  */
  /* nop: no architectural effect here */
  /* 9db1c: adr x0, #0x156dc4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1404356)));
  /* 9db20: bl #0x1449c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(645924));
  fn1_1449c0(c);
L_9db24:;
  /* 9db24: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 9db28: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 9db2c: mov w1, #-1 */
  ARC_W_W(c, 1, UINT64_C(18446744073709551615));
  /* 9db30: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 9db34: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(645944));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 9db38: cbz x0, #0x9dbc4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_9dbc4;
  /* 9db3c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 9db40: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(645956));
  fn1_142a58(c);
  /* 9db44: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 9db48: ldr w22, [x0] */
  ARC_W_W(c, 22, arc_ld32(ARC_X_R(c, 0)));
  /* 9db4c: mov w0, #0x87 */
  ARC_W_W(c, 0, UINT64_C(135));
  /* 9db50: mov w1, #-1 */
  ARC_W_W(c, 1, UINT64_C(18446744073709551615));
  /* 9db54: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 9db58: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 9db5c: mov w4, #8 */
  ARC_W_W(c, 4, UINT64_C(8));
  /* 9db60: bl #0x142500 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(645988));
  fn1_142500(c);
  /* 9db64: ldr w8, [x21] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 21)));
  /* 9db68: str w22, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 22));
  /* 9db6c: cmp w8, #0xe */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(14));
  /* 9db70: b.eq #0x9dbc4 */
  if (ARC_COND(c, 0)) goto L_9dbc4;
  /* 9db74: ldr w8, [x20] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 20)));
  /* 9db78: mov w9, #0x1168 */
  ARC_W_W(c, 9, UINT64_C(4456));
  /* 9db7c: movk w9, #0xd280, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(3531603968)));
  /* 9db80: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* 9db84: b.ne #0x9dbc4 */
  if (ARC_COND(c, 1)) goto L_9dbc4;
  /* 9db88: ldr w8, [x20, #4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(4))));
  /* 9db8c: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* 9db90: movk w9, #0xd400, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(3556769792)));
  /* 9db94: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* 9db98: b.ne #0x9dbc4 */
  if (ARC_COND(c, 1)) goto L_9dbc4;
  /* 9db9c: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 9dba0: add x8, x20, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + UINT64_C(4)));
  /* 9dba4: str xzr, [x19, #0x260] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(608)), ARC_X_R(c, 31));
  /* 9dba8: str x8, [x19, #0x228] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(552)), ARC_X_R(c, 8));
  /* 9dbac: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 9dbb0: str x20, [x19, #0x220] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(544)), ARC_X_R(c, 20));
  /* 9dbb4: strb w8, [x19, #0x26a] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(618)), ARC_W_R(c, 8));
  /* 9dbb8: stp q0, q0, [x19, #0x240] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(576));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 9dbbc: str q0, [x19, #0x230] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(560)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(560)) + 8, (c)->q[0].u64[1]);
  /* 9dbc0: b #0x9dbcc */
  goto L_9dbcc;
L_9dbc4:;
  /* 9dbc4: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 9dbc8: strb w8, [x19, #0x268] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(616)), ARC_W_R(c, 8));
L_9dbcc:;
  /* 9dbcc: add sp, sp, #0x6c0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(1728)));
  /* 9dbd0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 9dbd4: ldr x28, [sp, #0x10] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(16))));
  /* 9dbd8: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 9dbdc: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9dbe0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 9dbe4: ret  */
  return;
}

void fn1_a1f74(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038591348));
  /* a1f74: bti c */
  /* bti: no architectural effect here */
  /* a1f78: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a1f7c: ldr x8, [x8, #0x8d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2256))));
  /* a1f80: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* a1f84: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* a1f88: ret  */
  return;
}

void fn1_a3dac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038599084));
  /* a3dac: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a3db0: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a3db4: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* a3db8: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a3dbc: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a3dc0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a3dc4: ldr x9, [x1, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* a3dc8: tbz w5, #0, #0xa3e58 */
  if (((ARC_W_R(c, 5)) >> 0 & 1) == 0) goto L_a3e58;
  /* a3dcc: cmp x0, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 9));
  /* a3dd0: b.eq #0xa3e20 */
  if (ARC_COND(c, 0)) goto L_a3e20;
  /* a3dd4: ldr x8, [x0, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* a3dd8: ldr x9, [x9, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* a3ddc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a3de0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* a3de4: mov w22, w4 */
  ARC_W_W(c, 22, ARC_W_R(c, 4));
  /* a3de8: mov x23, x2 */
  ARC_X_W(c, 23, ARC_X_R(c, 2));
  /* a3dec: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* a3df0: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* a3df4: mov x21, x3 */
  ARC_X_W(c, 21, ARC_X_R(c, 3));
  /* a3df8: mov w24, w5 */
  ARC_W_W(c, 24, ARC_W_R(c, 5));
  /* a3dfc: bl #0x142848 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(671232));
  fn1_142848(c);
  /* a3e00: mov w5, w24 */
  ARC_W_W(c, 5, ARC_W_R(c, 24));
  /* a3e04: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* a3e08: mov x2, x23 */
  ARC_X_W(c, 2, ARC_X_R(c, 23));
  /* a3e0c: mov w4, w22 */
  ARC_W_W(c, 4, ARC_W_R(c, 22));
  /* a3e10: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* a3e14: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* a3e18: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a3e1c: cbnz w8, #0xa3e68 */
  if ((ARC_W_R(c, 8)) != 0) goto L_a3e68;
L_a3e20:;
  /* a3e20: ldr x9, [x1, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* a3e24: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* a3e28: strb w8, [x1, #0x4d] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(77)), ARC_W_R(c, 8));
  /* a3e2c: cmp x3, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 3), ARC_X_R(c, 9));
  /* a3e30: b.ne #0xa3ed8 */
  if (ARC_COND(c, 1)) goto L_a3ed8;
  /* a3e34: ldr x9, [x1, #0x20] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(32))));
  /* a3e38: strb w8, [x1, #0x4c] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(76)), ARC_W_R(c, 8));
  /* a3e3c: cbz x9, #0xa3e90 */
  if ((ARC_X_R(c, 9)) == 0) goto L_a3e90;
  /* a3e40: cmp x9, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 2));
  /* a3e44: b.eq #0xa3ea8 */
  if (ARC_COND(c, 0)) goto L_a3ea8;
  /* a3e48: ldr w8, [x1, #0x3c] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + INT64_C(60))));
  /* a3e4c: add w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* a3e50: str w8, [x1, #0x3c] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(60)), ARC_W_R(c, 8));
  /* a3e54: b #0xa3ed0 */
  goto L_a3ed0;
L_a3e58:;
  /* a3e58: ldr x8, [x0, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* a3e5c: ldr x9, [x9, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* a3e60: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a3e64: b.eq #0xa3e20 */
  if (ARC_COND(c, 0)) goto L_a3e20;
L_a3e68:;
  /* a3e68: ldr x0, [x0, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* a3e6c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* a3e70: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* a3e74: and w5, w5, #1 */
  ARC_W_W(c, 5, (ARC_W_R(c, 5) & UINT64_C(1)));
  /* a3e78: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a3e7c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a3e80: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* a3e84: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a3e88: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a3e8c: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_a3e90:;
  /* a3e90: cmp w4, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 4), UINT64_C(1));
  /* a3e94: str x2, [x1, #0x20] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(32)), ARC_X_R(c, 2));
  /* a3e98: str w4, [x1, #0x30] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(48)), ARC_W_R(c, 4));
  /* a3e9c: str w8, [x1, #0x3c] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(60)), ARC_W_R(c, 8));
  /* a3ea0: b.eq #0xa3ec4 */
  if (ARC_COND(c, 0)) goto L_a3ec4;
  /* a3ea4: b #0xa3ed8 */
  goto L_a3ed8;
L_a3ea8:;
  /* a3ea8: ldr w8, [x1, #0x30] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + INT64_C(48))));
  /* a3eac: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* a3eb0: b.ne #0xa3ebc */
  if (ARC_COND(c, 1)) goto L_a3ebc;
  /* a3eb4: mov w8, w4 */
  ARC_W_W(c, 8, ARC_W_R(c, 4));
  /* a3eb8: str w4, [x1, #0x30] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(48)), ARC_W_R(c, 4));
L_a3ebc:;
  /* a3ebc: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* a3ec0: b.ne #0xa3ed8 */
  if (ARC_COND(c, 1)) goto L_a3ed8;
L_a3ec4:;
  /* a3ec4: ldr w8, [x1, #0x48] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + INT64_C(72))));
  /* a3ec8: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* a3ecc: b.ne #0xa3ed8 */
  if (ARC_COND(c, 1)) goto L_a3ed8;
L_a3ed0:;
  /* a3ed0: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* a3ed4: strb w8, [x1, #0x4e] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(78)), ARC_W_R(c, 8));
L_a3ed8:;
  /* a3ed8: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a3edc: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a3ee0: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* a3ee4: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a3ee8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a3eec: ret  */
  return;
}

void fn1_aa690(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038625936));
  /* aa690: bti c */
  /* bti: no architectural effect here */
  /* aa694: mov w1, #0x28 */
  ARC_W_W(c, 1, UINT64_C(40));
  /* aa698: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b1be0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038655968));
  /* b1be0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b1be4: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* b1be8: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b1bec: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b1bf0: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* b1bf4: ldr x8, [x0, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* b1bf8: cmp x8, #8 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(8));
  /* b1bfc: b.lo #0xb1d94 */
  if (ARC_COND(c, 3)) goto L_b1d94;
  /* b1c00: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* b1c04: movi v1.2s, #0xc6 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = UINT64_C(198);
    _t.u32[1] = UINT64_C(198);
    (c)->q[1] = _t; }
  /* b1c08: movi d3, #0x0000ff000000ff */
  arc_du_w(c, 3, UINT64_C(1095216660735));
  /* b1c0c: movi v5.2s, #0xf6 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = UINT64_C(246);
    _t.u32[1] = UINT64_C(246);
    (c)->q[5] = _t; }
  /* b1c10: movi v6.2s, #9 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = UINT64_C(9);
    _t.u32[1] = UINT64_C(9);
    (c)->q[6] = _t; }
  /* b1c14: adrp x0, #0x53000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(339968)));
  /* b1c18: ldur s0, [x8, #2] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 8) + INT64_C(2))));
  /* b1c1c: movi v7.2s, #0xd0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = UINT64_C(208);
    _t.u32[1] = UINT64_C(208);
    (c)->q[7] = _t; }
  /* b1c20: movi v16.2s, #0xa9 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = UINT64_C(169);
    _t.u32[1] = UINT64_C(169);
    (c)->q[16] = _t; }
  /* b1c24: ldrb w14, [x8, #7] */
  ARC_W_W(c, 14, arc_ld8((ARC_X_R(c, 8) + INT64_C(7))));
  /* b1c28: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b1c2c: adrp x2, #0x51000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(331776)));
  /* b1c30: add x2, x2, #0x85b */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2139)));
  /* b1c34: ushll v0.8h, v0.8b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((uint16_t)((c)->q[0].u8[0]) << 0);
    _t.u16[1] = (uint16_t)((uint16_t)((c)->q[0].u8[1]) << 0);
    _t.u16[2] = (uint16_t)((uint16_t)((c)->q[0].u8[2]) << 0);
    _t.u16[3] = (uint16_t)((uint16_t)((c)->q[0].u8[3]) << 0);
    _t.u16[4] = (uint16_t)((uint16_t)((c)->q[0].u8[4]) << 0);
    _t.u16[5] = (uint16_t)((uint16_t)((c)->q[0].u8[5]) << 0);
    _t.u16[6] = (uint16_t)((uint16_t)((c)->q[0].u8[6]) << 0);
    _t.u16[7] = (uint16_t)((uint16_t)((c)->q[0].u8[7]) << 0);
    (c)->q[0] = _t; }
  /* b1c38: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* b1c3c: sub w16, w14, #0x3a */
  ARC_W_W(c, 16, (ARC_W_R(c, 14) - UINT64_C(58)));
  /* b1c40: stp xzr, xzr, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b1c44: and w16, w16, #0xff */
  ARC_W_W(c, 16, (ARC_W_R(c, 16) & UINT64_C(255)));
  /* b1c48: str xzr, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 31));
  /* b1c4c: umov w9, v0.h[0] */
  ARC_W_W(c, 9, (c)->q[0].u16[0]);
  /* b1c50: umov w11, v0.h[1] */
  ARC_W_W(c, 11, (c)->q[0].u16[1]);
  /* b1c54: umov w10, v0.h[2] */
  ARC_W_W(c, 10, (c)->q[0].u16[2]);
  /* b1c58: umov w12, v0.h[3] */
  ARC_W_W(c, 12, (c)->q[0].u16[3]);
  /* b1c5c: fmov s0, w9 */
  arc_su_w(c, 0, (uint32_t)(ARC_W_R(c, 9)));
  /* b1c60: fmov s2, w11 */
  arc_su_w(c, 2, (uint32_t)(ARC_W_R(c, 11)));
  /* b1c64: ldrb w9, [x8, #1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(1))));
  /* b1c68: mov w11, #-0x30 */
  ARC_W_W(c, 11, UINT64_C(18446744073709551568));
  /* b1c6c: mov v0.s[1], w10 */
  (c)->q[0].u32[1] = (ARC_W_R(c, 10));
  /* b1c70: mov v2.s[1], w12 */
  (c)->q[2].u32[1] = (ARC_W_R(c, 12));
  /* b1c74: sub w10, w9, #0x3a */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) - UINT64_C(58)));
  /* b1c78: and w10, w10, #0xff */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) & UINT64_C(255)));
  /* b1c7c: mov w12, #-0x57 */
  ARC_W_W(c, 12, UINT64_C(18446744073709551529));
  /* b1c80: cmp w10, #0xf6 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(246));
  /* b1c84: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* b1c88: ldrb w8, [x8, #6] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(6))));
  /* b1c8c: csel w15, w12, w11, lo */
  ARC_W_W(c, 15, (ARC_COND(c, 3) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 11)));
  /* b1c90: add v4.2s, v0.2s, v1.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[0].u32[0] + (c)->q[1].u32[0];
    _t.u32[1] = (c)->q[0].u32[1] + (c)->q[1].u32[1];
    (c)->q[4] = _t; }
  /* b1c94: add v1.2s, v2.2s, v1.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[2].u32[0] + (c)->q[1].u32[0];
    _t.u32[1] = (c)->q[2].u32[1] + (c)->q[1].u32[1];
    (c)->q[1] = _t; }
  /* b1c98: sub w13, w10, #0x3a */
  ARC_W_W(c, 13, (ARC_W_R(c, 10) - UINT64_C(58)));
  /* b1c9c: and w13, w13, #0xff */
  ARC_W_W(c, 13, (ARC_W_R(c, 13) & UINT64_C(255)));
  /* b1ca0: add w9, w15, w9 */
  ARC_W_W(c, 9, (ARC_W_R(c, 15) + ARC_W_R(c, 9)));
  /* b1ca4: cmp w13, #0xf6 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(246));
  /* b1ca8: mov w13, #9 */
  ARC_W_W(c, 13, UINT64_C(9));
  /* b1cac: and v4.8b, v4.8b, v3.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] & (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] & (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] & (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] & (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] & (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] & (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] & (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] & (c)->q[3].u8[7];
    (c)->q[4] = _t; }
  /* b1cb0: and v1.8b, v1.8b, v3.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[0] & (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[1].u8[1] & (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[1].u8[2] & (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[1].u8[3] & (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[1].u8[4] & (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[1].u8[5] & (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[1].u8[6] & (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[1].u8[7] & (c)->q[3].u8[7];
    (c)->q[1] = _t; }
  /* b1cb4: csel w17, w13, wzr, lo */
  ARC_W_W(c, 17, (ARC_COND(c, 3) ? (ARC_W_R(c, 13)) : ARC_W_R(c, 31)));
  /* b1cb8: cmp w16, #0xf6 */
  (void)arc_sub32(c, ARC_W_R(c, 16), UINT64_C(246));
  /* b1cbc: sub w16, w8, #0x3a */
  ARC_W_W(c, 16, (ARC_W_R(c, 8) - UINT64_C(58)));
  /* b1cc0: add w10, w17, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 17) + ARC_W_R(c, 10)));
  /* b1cc4: and w16, w16, #0xff */
  ARC_W_W(c, 16, (ARC_W_R(c, 16) & UINT64_C(255)));
  /* b1cc8: csel w11, w12, w11, lo */
  ARC_W_W(c, 11, (ARC_COND(c, 3) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 11)));
  /* b1ccc: add w9, w9, w10, lsl #4 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + ((uint32_t)(ARC_W_R(c, 10)) << 4)));
  /* b1cd0: cmhi v4.2s, v5.2s, v4.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[5].u32[0] > (c)->q[4].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[5].u32[1] > (c)->q[4].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[4] = _t; }
  /* b1cd4: cmhi v1.2s, v5.2s, v1.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[5].u32[0] > (c)->q[1].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[5].u32[1] > (c)->q[1].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[1] = _t; }
  /* b1cd8: cmp w16, #0xf6 */
  (void)arc_sub32(c, ARC_W_R(c, 16), UINT64_C(246));
  /* b1cdc: csel w12, w13, wzr, lo */
  ARC_W_W(c, 12, (ARC_COND(c, 3) ? (ARC_W_R(c, 13)) : ARC_W_R(c, 31)));
  /* b1ce0: add w11, w11, w14 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + ARC_W_R(c, 14)));
  /* b1ce4: add w8, w12, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 12) + ARC_W_R(c, 8)));
  /* b1ce8: and v4.8b, v4.8b, v6.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] & (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] & (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] & (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] & (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] & (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] & (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] & (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] & (c)->q[6].u8[7];
    (c)->q[4] = _t; }
  /* b1cec: bsl v1.8b, v16.8b, v7.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (((c)->q[1].u8[0] & (c)->q[16].u8[0]) | (~(c)->q[1].u8[0] & (c)->q[7].u8[0]));
    _t.u8[1] = (((c)->q[1].u8[1] & (c)->q[16].u8[1]) | (~(c)->q[1].u8[1] & (c)->q[7].u8[1]));
    _t.u8[2] = (((c)->q[1].u8[2] & (c)->q[16].u8[2]) | (~(c)->q[1].u8[2] & (c)->q[7].u8[2]));
    _t.u8[3] = (((c)->q[1].u8[3] & (c)->q[16].u8[3]) | (~(c)->q[1].u8[3] & (c)->q[7].u8[3]));
    _t.u8[4] = (((c)->q[1].u8[4] & (c)->q[16].u8[4]) | (~(c)->q[1].u8[4] & (c)->q[7].u8[4]));
    _t.u8[5] = (((c)->q[1].u8[5] & (c)->q[16].u8[5]) | (~(c)->q[1].u8[5] & (c)->q[7].u8[5]));
    _t.u8[6] = (((c)->q[1].u8[6] & (c)->q[16].u8[6]) | (~(c)->q[1].u8[6] & (c)->q[7].u8[6]));
    _t.u8[7] = (((c)->q[1].u8[7] & (c)->q[16].u8[7]) | (~(c)->q[1].u8[7] & (c)->q[7].u8[7]));
    (c)->q[1] = _t; }
  /* b1cf0: add w8, w11, w8, lsl #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 11) + ((uint32_t)(ARC_W_R(c, 8)) << 4)));
  /* b1cf4: and w8, w8, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(255)));
  /* b1cf8: add v0.2s, v4.2s, v0.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[4].u32[0] + (c)->q[0].u32[0];
    _t.u32[1] = (c)->q[4].u32[1] + (c)->q[0].u32[1];
    (c)->q[0] = _t; }
  /* b1cfc: orr w8, w8, w9, lsl #24 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ((uint32_t)(ARC_W_R(c, 9)) << 24)));
  /* b1d00: add v1.2s, v1.2s, v2.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[1].u32[0] + (c)->q[2].u32[0];
    _t.u32[1] = (c)->q[1].u32[1] + (c)->q[2].u32[1];
    (c)->q[1] = _t; }
  /* b1d04: shl v0.2s, v0.2s, #4 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((c)->q[0].u32[0] << 4);
    _t.u32[1] = (uint32_t)((c)->q[0].u32[1] << 4);
    (c)->q[0] = _t; }
  /* b1d08: add v0.2s, v1.2s, v0.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[1].u32[0] + (c)->q[0].u32[0];
    _t.u32[1] = (c)->q[1].u32[1] + (c)->q[0].u32[1];
    (c)->q[0] = _t; }
  /* b1d0c: ldr d1, [x0, #0x2c8] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(712))));
  /* b1d10: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b1d14: and v0.8b, v0.8b, v3.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[0] & (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[0].u8[1] & (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[0].u8[2] & (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[0].u8[3] & (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[0].u8[4] & (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[0].u8[5] & (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[0].u8[6] & (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[0].u8[7] & (c)->q[3].u8[7];
    (c)->q[0] = _t; }
  /* b1d18: ushl v0.2s, v0.2s, v1.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = arc_ushl32((c)->q[0].u32[0], (int8_t)(c)->q[1].u32[0]);
    _t.u32[1] = arc_ushl32((c)->q[0].u32[1], (int8_t)(c)->q[1].u32[1]);
    (c)->q[0] = _t; }
  /* b1d1c: mov w10, v0.s[1] */
  ARC_W_W(c, 10, (c)->q[0].u32[1]);
  /* b1d20: fmov w9, s0 */
  ARC_W_W(c, 9, ARC_SU_R(c, 0));
  /* b1d24: orr w8, w9, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) | ARC_W_R(c, 8)));
  /* b1d28: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* b1d2c: fmov s0, w8 */
  arc_su_w(c, 0, (uint32_t)(ARC_W_R(c, 8)));
  /* b1d30: fcvt d0, s0 */
  arc_d_w(c, 0, (double)(ARC_S_R(c, 0)));
  /* b1d34: bl #0x1428c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(728376));
  fn1_1428c0(c);
  /* b1d38: cbz w0, #0xb1d94 */
  if ((ARC_W_R(c, 0)) == 0) goto L_b1d94;
  /* b1d3c: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b1d40: sxtw x20, w0 */
  ARC_X_W(c, 20, ((int64_t)(int32_t)(ARC_W_R(c, 0))));
  /* b1d44: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b1d48: add x10, x8, x20 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + ARC_X_R(c, 20)));
  /* b1d4c: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b1d50: b.ls #0xb1d78 */
  if (ARC_COND(c, 9)) goto L_b1d78;
  /* b1d54: lsl x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b1d58: add x9, x10, #0x3e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(992)));
  /* b1d5c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b1d60: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* b1d64: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b1d68: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(728428));
  fn1_142878(c);
  /* b1d6c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b1d70: cbz x0, #0xb1da8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b1da8;
  /* b1d74: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b1d78:;
  /* b1d78: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b1d7c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* b1d80: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* b1d84: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(728456));
  fn1_1449d8(c);
  /* b1d88: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b1d8c: add x8, x8, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 20)));
  /* b1d90: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_b1d94:;
  /* b1d94: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b1d98: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b1d9c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* b1da0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b1da4: ret  */
  return;
L_b1da8:;
  /* b1da8: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(728492));
  fn1_1427b8(c);
}

void fn1_b607c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038673532));
  /* b607c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b6080: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* b6084: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b6088: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b608c: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* b6090: ldp x9, x10, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b6094: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b6098: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* b609c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b60a0: add x11, x9, #9 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(9)));
  /* b60a4: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* b60a8: b.ls #0xb60d8 */
  if (ARC_COND(c, 9)) goto L_b60d8;
  /* b60ac: lsl x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b60b0: add x9, x9, #0x3e9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1001)));
  /* b60b4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* b60b8: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b60bc: csel x1, x10, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* b60c0: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b60c4: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(745672));
  fn1_142878(c);
  /* b60c8: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b60cc: cbz x0, #0xb61e8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b61e8;
  /* b60d0: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b60d4: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
L_b60d8:;
  /* b60d8: adrp x10, #0x50000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(327680)));
  /* b60dc: add x10, x10, #0x7d1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(2001)));
  /* b60e0: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* b60e4: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* b60e8: mov w9, #0x2e */
  ARC_W_W(c, 9, UINT64_C(46));
  /* b60ec: strb w9, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 9));
  /* b60f0: str x10, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* b60f4: ldp x10, x11, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* b60f8: ldr w8, [x19, #0x20] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b60fc: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b6100: add w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* b6104: add x9, x10, #0xa */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(10)));
  /* b6108: str w8, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 8));
  /* b610c: add x8, x10, #9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + UINT64_C(9)));
  /* b6110: cmp x9, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 11));
  /* b6114: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b6118: b.ls #0xb6144 */
  if (ARC_COND(c, 9)) goto L_b6144;
  /* b611c: lsl x8, x11, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 11)) << ((UINT64_C(1)) & 63)));
  /* b6120: add x9, x10, #0x3ea */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(1002)));
  /* b6124: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b6128: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* b612c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b6130: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(745780));
  fn1_142878(c);
  /* b6134: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b6138: cbz x0, #0xb61ec */
  if ((ARC_X_R(c, 0)) == 0) goto L_b61ec;
  /* b613c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b6140: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b6144:;
  /* b6144: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b6148: mov w9, #0x28 */
  ARC_W_W(c, 9, UINT64_C(40));
  /* b614c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b6150: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b6154: mov w8, #0x2a */
  ARC_W_W(c, 8, UINT64_C(42));
  /* b6158: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b615c: strb w8, [sp, #0x10] */
  arc_st8(((c)->sp + INT64_C(16)), ARC_W_R(c, 8));
  /* b6160: mov w8, #0x540 */
  ARC_W_W(c, 8, UINT64_C(1344));
  /* b6164: ldr x9, [x20, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* b6168: sturh w8, [sp, #0x11] */
  arc_st16(((c)->sp + INT64_C(17)), ARC_W_R(c, 8));
  /* b616c: adrp x8, #0x14a000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1351680)));
  /* b6170: add x8, x8, #0xf78 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3960)));
  /* b6174: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* b6178: str x9, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 9));
  /* b617c: bl #0xb4af0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(745856));
  fn1_b4af0(c);
  /* b6180: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b6184: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b6188: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b618c: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* b6190: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b6194: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* b6198: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b619c: b.ls #0xb61c8 */
  if (ARC_COND(c, 9)) goto L_b61c8;
  /* b61a0: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b61a4: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b61a8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b61ac: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b61b0: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b61b4: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(745912));
  fn1_142878(c);
  /* b61b8: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b61bc: cbz x0, #0xb61f0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b61f0;
  /* b61c0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b61c4: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b61c8:;
  /* b61c8: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b61cc: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* b61d0: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b61d4: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b61d8: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b61dc: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* b61e0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b61e4: ret  */
  return;
L_b61e8:;
  /* b61e8: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(745964));
  fn1_1427b8(c);
L_b61ec:;
  /* b61ec: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(745968));
  fn1_1427b8(c);
L_b61f0:;
  /* b61f0: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(745972));
  fn1_1427b8(c);
}

void fn1_b84fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038682876));
  /* b84fc: bti c */
  /* bti: no architectural effect here */
  /* b8500: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* b8504: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_bbb70(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038696816));
  /* bbb70: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bbb74: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bbb78: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* bbb7c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bbb80: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bbb84: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* bbb88: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* bbb8c: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* bbb90: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* bbb94: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* bbb98: b.hi #0xbbbbc */
  if (ARC_COND(c, 8)) goto L_bbbbc;
  /* bbb9c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* bbba0: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* bbba4: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(768936));
  fn1_1428a8(c);
  /* bbba8: cbz x0, #0xbbc0c */
  if ((ARC_X_R(c, 0)) == 0) goto L_bbc0c;
  /* bbbac: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* bbbb0: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* bbbb4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* bbbb8: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_bbbbc:;
  /* bbbbc: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* bbbc0: add x0, x21, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* bbbc4: adrp x8, #0x14c000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1359872)));
  /* bbbc8: add x8, x8, #0x508 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1288)));
  /* bbbcc: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* bbbd0: mov w9, #0x1e */
  ARC_W_W(c, 9, UINT64_C(30));
  /* bbbd4: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* bbbd8: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* bbbdc: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* bbbe0: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* bbbe4: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* bbbe8: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* bbbec: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* bbbf0: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* bbbf4: str x9, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 9));
  /* bbbf8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bbbfc: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* bbc00: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bbc04: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bbc08: ret  */
  return;
L_bbc0c:;
  /* bbc0c: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(769040));
  fn1_142488(c);
}

void fn1_be220(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038706720));
  /* be220: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* be224: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* be228: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* be22c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* be230: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* be234: cmp w0, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(1));
  /* be238: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* be23c: b.ne #0xbe2e0 */
  if (ARC_COND(c, 1)) goto L_be2e0;
  /* be240: ldur x20, [x19, #-0x58] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(-88))));
  /* be244: nop  */
  /* nop: no architectural effect here */
  /* be248: adr x21, #0x1576e0 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1406688)));
  /* be24c: cbz x20, #0xbe29c */
  if ((ARC_X_R(c, 20)) == 0) goto L_be29c;
  /* be250: sub x1, x20, #0x78 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) - UINT64_C(120)));
  /* be254: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* be258: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(778844));
  fn1_bd950(c);
  /* be25c: cmp x0, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(1));
  /* be260: b.ne #0xbe29c */
  if (ARC_COND(c, 1)) goto L_be29c;
  /* be264: ldur x8, [x20, #-0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-104))));
  /* be268: cbz x8, #0xbe274 */
  if ((ARC_X_R(c, 8)) == 0) goto L_be274;
  /* be26c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* be270: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(778868));
  arc_dispatch(c, ARC_X_R(c, 8));
L_be274:;
  /* be274: sub x0, x20, #0x80 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) - UINT64_C(128)));
  /* be278: cmp x0, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 21));
  /* be27c: b.lo #0xbe298 */
  if (ARC_COND(c, 3)) goto L_be298;
  /* be280: adrp x8, #0x157000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404928)));
  /* be284: add x8, x8, #0x8e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2272)));
  /* be288: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* be28c: b.hs #0xbe298 */
  if (ARC_COND(c, 2)) goto L_be298;
  /* be290: bl #0xa2664 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(778900));
  fn1_a2664(c);
  /* be294: b #0xbe29c */
  goto L_be29c;
L_be298:;
  /* be298: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(778908));
  fn1_142800(c);
L_be29c:;
  /* be29c: sub x0, x19, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) - UINT64_C(96)));
  /* be2a0: cmp x0, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 21));
  /* be2a4: b.lo #0xbe2cc */
  if (ARC_COND(c, 3)) goto L_be2cc;
  /* be2a8: adrp x8, #0x157000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404928)));
  /* be2ac: add x8, x8, #0x8e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2272)));
  /* be2b0: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* be2b4: b.hs #0xbe2cc */
  if (ARC_COND(c, 2)) goto L_be2cc;
  /* be2b8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* be2bc: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* be2c0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* be2c4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* be2c8: b #0xa2664 */
  fn1_a2664(c); return;
L_be2cc:;
  /* be2cc: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* be2d0: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* be2d4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* be2d8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* be2dc: b #0x142800 */
  fn1_142800(c); return;
L_be2e0:;
  /* be2e0: ldur x0, [x19, #-0x38] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(-56))));
  /* be2e4: bl #0xa1518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(778984));
  fn1_a1518(c);
  /* be2e8: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(778988));
  fn1_a1454(c);
  /* be2ec: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(778992));
  fn1_a1454(c);
}

void fn1_d2ad4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038790868));
  /* d2ad4: bti c */
  /* bti: no architectural effect here */
  /* d2ad8: str q0, [sp, #-0x10]! */
  arc_st64(((c)->sp + INT64_C(-16)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(-16)) + 8, (c)->q[0].u64[1]);
  (c)->sp = (c)->sp + INT64_C(-16);
  /* d2adc: ldp x10, x8, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* d2ae0: mov w11, #-0x3c01 */
  ARC_W_W(c, 11, UINT64_C(18446744073709536255));
  /* d2ae4: ubfx x9, x8, #0x30, #0xf */
  ARC_X_W(c, 9, (((uint64_t)(ARC_X_R(c, 8)) >> 48) & UINT64_C(32767)));
  /* d2ae8: and x12, x8, #0xffffffffffff */
  ARC_X_W(c, 12, (ARC_X_R(c, 8) & UINT64_C(281474976710655)));
  /* d2aec: add w11, w9, w11 */
  ARC_W_W(c, 11, (ARC_W_R(c, 9) + ARC_W_R(c, 11)));
  /* d2af0: cmp w11, #0x7fd */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(2045));
  /* d2af4: b.hi #0xd2b54 */
  if (ARC_COND(c, 8)) goto L_d2b54;
  /* d2af8: extr x11, x12, x10, #0x3c */
  ARC_X_W(c, 11, (((uint64_t)(ARC_X_R(c, 10)) >> 60) | ((uint64_t)(ARC_X_R(c, 12)) << 4)));
  /* d2afc: and x10, x10, #0xfffffffffffffff */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) & UINT64_C(1152921504606846975)));
  /* d2b00: mov x12, #0x800000000000000 */
  ARC_X_W(c, 12, UINT64_C(576460752303423488));
  /* d2b04: cmp x10, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 12));
  /* d2b08: mov x12, #1 */
  ARC_X_W(c, 12, UINT64_C(1));
  /* d2b0c: and x13, x11, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 11) & UINT64_C(1)));
  /* d2b10: movk x12, #0x800, lsl #48 */
  ARC_X_W(c, 12, ((ARC_X_R(c, 12) & UINT64_C(281474976710655)) | UINT64_C(576460752303423488)));
  /* d2b14: add x13, x13, x11 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + ARC_X_R(c, 11)));
  /* d2b18: csel x13, x11, x13, ne */
  ARC_X_W(c, 13, (ARC_COND(c, 1) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 13)));
  /* d2b1c: cmp x10, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 12));
  /* d2b20: mov w12, #-0x3c00 */
  ARC_W_W(c, 12, UINT64_C(18446744073709536256));
  /* d2b24: csinc x10, x13, x11, lo */
  ARC_X_W(c, 10, (ARC_COND(c, 3) ? (ARC_X_R(c, 13)) : ((ARC_X_R(c, 11)) + 1)));
  /* d2b28: add w12, w9, w12 */
  ARC_W_W(c, 12, (ARC_W_R(c, 9) + ARC_W_R(c, 12)));
  /* d2b2c: lsr x11, x10, #0x34 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(52)) & 63)));
  /* d2b30: cmp x11, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(0));
  /* d2b34: csel x9, xzr, x10, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 10)));
  /* d2b38: add x10, x11, x12 */
  ARC_X_W(c, 10, (ARC_X_R(c, 11) + ARC_X_R(c, 12)));
  /* d2b3c: and x8, x8, #0x8000000000000000 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(9223372036854775808)));
  /* d2b40: orr x8, x8, x10, lsl #52 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 10)) << 52)));
  /* d2b44: orr x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ARC_X_R(c, 9)));
  /* d2b48: fmov d0, x8 */
  arc_du_w(c, 0, (uint64_t)(ARC_X_R(c, 8)));
  /* d2b4c: add sp, sp, #0x10 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(16)));
  /* d2b50: ret  */
  return;
L_d2b54:;
  /* d2b54: orr x11, x10, x12 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) | ARC_X_R(c, 12)));
  /* d2b58: cbz x11, #0xd2b8c */
  if ((ARC_X_R(c, 11)) == 0) goto L_d2b8c;
  /* d2b5c: mov w11, #0x7fff */
  ARC_W_W(c, 11, UINT64_C(32767));
  /* d2b60: cmp x9, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 11));
  /* d2b64: b.ne #0xd2b8c */
  if (ARC_COND(c, 1)) goto L_d2b8c;
  /* d2b68: extr x9, x12, x10, #0x3c */
  ARC_X_W(c, 9, (((uint64_t)(ARC_X_R(c, 10)) >> 60) | ((uint64_t)(ARC_X_R(c, 12)) << 4)));
  /* d2b6c: mov w10, #0x7ff */
  ARC_W_W(c, 10, UINT64_C(2047));
  /* d2b70: orr x9, x9, #0x8000000000000 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) | UINT64_C(2251799813685248)));
  /* d2b74: and x8, x8, #0x8000000000000000 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(9223372036854775808)));
  /* d2b78: orr x8, x8, x10, lsl #52 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 10)) << 52)));
  /* d2b7c: orr x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ARC_X_R(c, 9)));
  /* d2b80: fmov d0, x8 */
  arc_du_w(c, 0, (uint64_t)(ARC_X_R(c, 8)));
  /* d2b84: add sp, sp, #0x10 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(16)));
  /* d2b88: ret  */
  return;
L_d2b8c:;
  /* d2b8c: mov w11, #0x43fe */
  ARC_W_W(c, 11, UINT64_C(17406));
  /* d2b90: cmp w9, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 11));
  /* d2b94: b.ls #0xd2bb4 */
  if (ARC_COND(c, 9)) goto L_d2bb4;
  /* d2b98: mov w10, #0x7ff */
  ARC_W_W(c, 10, UINT64_C(2047));
  /* d2b9c: and x8, x8, #0x8000000000000000 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(9223372036854775808)));
  /* d2ba0: orr x8, x8, x10, lsl #52 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 10)) << 52)));
  /* d2ba4: orr x8, x8, xzr */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ARC_X_R(c, 31)));
  /* d2ba8: fmov d0, x8 */
  arc_du_w(c, 0, (uint64_t)(ARC_X_R(c, 8)));
  /* d2bac: add sp, sp, #0x10 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(16)));
  /* d2bb0: ret  */
  return;
L_d2bb4:;
  /* d2bb4: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* d2bb8: mov w11, #0x3c00 */
  ARC_W_W(c, 11, UINT64_C(15360));
  /* d2bbc: cinc w13, w11, ne */
  ARC_W_W(c, 13, (ARC_COND(c, 1) ? (ARC_W_R(c, 11)) + 1 : (ARC_W_R(c, 11))));
  /* d2bc0: sub w11, w13, w9 */
  ARC_W_W(c, 11, (ARC_W_R(c, 13) - ARC_W_R(c, 9)));
  /* d2bc4: cmp w11, #0x70 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(112));
  /* d2bc8: b.le #0xd2be4 */
  if (ARC_COND(c, 13)) goto L_d2be4;
  /* d2bcc: and x8, x8, #0x8000000000000000 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(9223372036854775808)));
  /* d2bd0: orr x8, x8, xzr, lsl #52 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 31)) << 52)));
  /* d2bd4: orr x8, x8, xzr */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ARC_X_R(c, 31)));
  /* d2bd8: fmov d0, x8 */
  arc_du_w(c, 0, (uint64_t)(ARC_X_R(c, 8)));
  /* d2bdc: add sp, sp, #0x10 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(16)));
  /* d2be0: ret  */
  return;
L_d2be4:;
  /* d2be4: mov w15, #0x80 */
  ARC_W_W(c, 15, UINT64_C(128));
  /* d2be8: orr x14, x12, #0x1000000000000 */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) | UINT64_C(281474976710656)));
  /* d2bec: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* d2bf0: lsr x16, x10, #1 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* d2bf4: sub w15, w15, w11 */
  ARC_W_W(c, 15, (ARC_W_R(c, 15) - ARC_W_R(c, 11)));
  /* d2bf8: csel x12, x12, x14, eq */
  ARC_X_W(c, 12, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 14)));
  /* d2bfc: mvn w14, w15 */
  ARC_W_W(c, 14, (~(uint32_t)(ARC_W_R(c, 15))));
  /* d2c00: lsl x17, x12, x15 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 12)) << ((ARC_X_R(c, 15)) & 63)));
  /* d2c04: tst x15, #0x40 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 15) & UINT64_C(64)));
  /* d2c08: lsr x14, x16, x14 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 16)) >> ((ARC_X_R(c, 14)) & 63)));
  /* d2c0c: lsl x16, x10, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 10)) << ((ARC_X_R(c, 15)) & 63)));
  /* d2c10: lsl x15, x12, #1 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 12)) << ((UINT64_C(1)) & 63)));
  /* d2c14: lsr x10, x10, x11 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((ARC_X_R(c, 11)) & 63)));
  /* d2c18: lsr x12, x12, x11 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 12)) >> ((ARC_X_R(c, 11)) & 63)));
  /* d2c1c: orr x14, x17, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 17) | ARC_X_R(c, 14)));
  /* d2c20: csel x14, x16, x14, ne */
  ARC_X_W(c, 14, (ARC_COND(c, 1) ? (ARC_X_R(c, 16)) : ARC_X_R(c, 14)));
  /* d2c24: csel x16, xzr, x16, ne */
  ARC_X_W(c, 16, (ARC_COND(c, 1) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 16)));
  /* d2c28: cmp w13, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 9));
  /* d2c2c: mvn w9, w11 */
  ARC_W_W(c, 9, (~(uint32_t)(ARC_W_R(c, 11))));
  /* d2c30: orr x13, x16, x14 */
  ARC_X_W(c, 13, (ARC_X_R(c, 16) | ARC_X_R(c, 14)));
  /* d2c34: lsl x9, x15, x9 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 15)) << ((ARC_X_R(c, 9)) & 63)));
  /* d2c38: ccmp x13, #0, #4, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(0)); }
  else { (c)->nf = 0; (c)->zf = 1;
          (c)->cf = 0; (c)->vf = 0; }
  /* d2c3c: cset w13, ne */
  ARC_W_W(c, 13, (ARC_COND(c, 1) ? 1 : 0));
  /* d2c40: tst x11, #0x40 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 11) & UINT64_C(64)));
  /* d2c44: orr x9, x9, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) | ARC_X_R(c, 10)));
  /* d2c48: csel x11, xzr, x12, ne */
  ARC_X_W(c, 11, (ARC_COND(c, 1) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 12)));
  /* d2c4c: csel x9, x12, x9, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 9)));
  /* d2c50: mov x12, #1 */
  ARC_X_W(c, 12, UINT64_C(1));
  /* d2c54: and x10, x9, #0xfffffffffffffff */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) & UINT64_C(1152921504606846975)));
  /* d2c58: movk x12, #0x800, lsl #48 */
  ARC_X_W(c, 12, ((ARC_X_R(c, 12) & UINT64_C(281474976710655)) | UINT64_C(576460752303423488)));
  /* d2c5c: extr x9, x11, x9, #0x3c */
  ARC_X_W(c, 9, (((uint64_t)(ARC_X_R(c, 9)) >> 60) | ((uint64_t)(ARC_X_R(c, 11)) << 4)));
  /* d2c60: orr x10, x10, x13 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) | ARC_X_R(c, 13)));
  /* d2c64: cmp x10, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 12));
  /* d2c68: b.lo #0xd2c74 */
  if (ARC_COND(c, 3)) goto L_d2c74;
  /* d2c6c: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* d2c70: b #0xd2c88 */
  goto L_d2c88;
L_d2c74:;
  /* d2c74: mov x11, #0x800000000000000 */
  ARC_X_W(c, 11, UINT64_C(576460752303423488));
  /* d2c78: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* d2c7c: b.ne #0xd2c88 */
  if (ARC_COND(c, 1)) goto L_d2c88;
  /* d2c80: and x10, x9, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) & UINT64_C(1)));
  /* d2c84: add x9, x10, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + ARC_X_R(c, 9)));
L_d2c88:;
  /* d2c88: lsr x10, x9, #0x34 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(52)) & 63)));
  /* d2c8c: eor x11, x9, #0x10000000000000 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) ^ UINT64_C(4503599627370496)));
  /* d2c90: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* d2c94: cset w10, ne */
  ARC_W_W(c, 10, (ARC_COND(c, 1) ? 1 : 0));
  /* d2c98: csel x9, x11, x9, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 9)));
  /* d2c9c: and x8, x8, #0x8000000000000000 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(9223372036854775808)));
  /* d2ca0: orr x8, x8, x10, lsl #52 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 10)) << 52)));
  /* d2ca4: orr x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ARC_X_R(c, 9)));
  /* d2ca8: fmov d0, x8 */
  arc_du_w(c, 0, (uint64_t)(ARC_X_R(c, 8)));
  /* d2cac: add sp, sp, #0x10 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(16)));
  /* d2cb0: ret  */
  return;
}

void fn1_d8508(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038813960));
  /* d8508: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d850c: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* d8510: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d8514: str x19, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 19));
  /* d8518: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* d851c: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* d8520: ldp x10, x9, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* d8524: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d8528: stp xzr, xzr, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* d852c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* d8530: lsr x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* d8534: csinc x9, x9, x0, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 0)) + 1)));
  /* d8538: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d853c: csel x8, x8, x10, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* d8540: stp x9, x8, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* d8544: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* d8548: strb w9, [sp, #0x28] */
  arc_st8(((c)->sp + INT64_C(40)), ARC_W_R(c, 9));
  /* d854c: bl #0xda18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(886096));
  fn1_da18c(c);
  /* d8550: ldrb w8, [sp, #0x28] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(40))));
  /* d8554: cmp w8, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(3));
  /* d8558: b.hi #0xd8570 */
  if (ARC_COND(c, 8)) goto L_d8570;
L_d855c:;
  /* d855c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d8560: bl #0xda18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(886116));
  fn1_da18c(c);
  /* d8564: ldrb w8, [sp, #0x28] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(40))));
  /* d8568: cmp w8, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(4));
  /* d856c: b.lo #0xd855c */
  if (ARC_COND(c, 3)) goto L_d855c;
L_d8570:;
  /* d8570: cmp w8, #6 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(6));
  /* d8574: b.ne #0xd8584 */
  if (ARC_COND(c, 1)) goto L_d8584;
  /* d8578: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* d857c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* d8580: b #0xd85ac */
  goto L_d85ac;
L_d8584:;
  /* d8584: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* d8588: ldp x10, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* d858c: add x12, x19, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* d8590: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* d8594: lsr x11, x8, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* d8598: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* d859c: csel x8, x12, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 9)));
  /* d85a0: csel x9, x11, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* d85a4: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* d85a8: sub x1, x8, x0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) - ARC_X_R(c, 0)));
L_d85ac:;
  /* d85ac: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d85b0: ldr x19, [sp, #0x40] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(64))));
  /* d85b4: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* d85b8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d85bc: ret  */
  return;
}

void fn1_dbeec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038828780));
  /* dbeec: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* dbef0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* dbef4: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* dbef8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* dbefc: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* dbf00: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* dbf04: ldr x8, [x8, #0xa28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2600))));
  /* dbf08: ldr x9, [x0, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* dbf0c: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* dbf10: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* dbf14: cbz x9, #0xdbf20 */
  if ((ARC_X_R(c, 9)) == 0) goto L_dbf20;
  /* dbf18: ldr x8, [x19, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* dbf1c: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
L_dbf20:;
  /* dbf20: ldr x20, [x19, #0x20] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* dbf24: cbz x20, #0xdbf54 */
  if ((ARC_X_R(c, 20)) == 0) goto L_dbf54;
L_dbf28:;
  /* dbf28: ldr x0, [x19, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(40))));
  /* dbf2c: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* dbf30: ldr x3, [x20, #0x18] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* dbf34: ldp x20, x1, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* dbf38: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* dbf3c: ldr x9, [x9, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(24))));
  /* dbf40: sub x8, x8, x1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 1)));
  /* dbf44: add x2, x8, #0x20 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* dbf48: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(900940));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* dbf4c: str x20, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 20));
  /* dbf50: cbnz x20, #0xdbf28 */
  if ((ARC_X_R(c, 20)) != 0) goto L_dbf28;
L_dbf54:;
  /* dbf54: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* dbf58: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* dbf5c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* dbf60: ret  */
  return;
  /* dbf64: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(900968));
  fn1_a1454(c);
}

void fn1_e05ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038846956));
  /* e05ec: bti c */
  /* bti: no architectural effect here */
  /* e05f0: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* e05f4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* e05f8: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* e05fc: ldp x11, x10, [x8, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(8));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* e0600: lsr x12, x9, #1 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* e0604: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e0608: csinc x8, x10, x8, ne */
  ARC_X_W(c, 8, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 8)) + 1)));
  /* e060c: csel x9, x12, x11, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* e0610: cbz x3, #0xe0664 */
  if ((ARC_X_R(c, 3)) == 0) goto L_e0664;
  /* e0614: cmp x2, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 9));
  /* e0618: b.hs #0xe0664 */
  if (ARC_COND(c, 2)) goto L_e0664;
  /* e061c: add x9, x8, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* e0620: add x10, x8, x2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + ARC_X_R(c, 2)));
L_e0624:;
  /* e0624: ldrb w11, [x10] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 10)));
  /* e0628: mov x12, x3 */
  ARC_X_W(c, 12, ARC_X_R(c, 3));
  /* e062c: mov x13, x1 */
  ARC_X_W(c, 13, ARC_X_R(c, 1));
L_e0630:;
  /* e0630: ldrb w14, [x13] */
  ARC_W_W(c, 14, arc_ld8(ARC_X_R(c, 13)));
  /* e0634: cmp w11, w14 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 14));
  /* e0638: b.eq #0xe0658 */
  if (ARC_COND(c, 0)) goto L_e0658;
  /* e063c: subs x12, x12, #1 */
  ARC_X_W(c, 12, arc_sub64(c, ARC_X_R(c, 12), UINT64_C(1)));
  /* e0640: add x13, x13, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(1)));
  /* e0644: b.ne #0xe0630 */
  if (ARC_COND(c, 1)) goto L_e0630;
  /* e0648: add x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* e064c: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* e0650: b.ne #0xe0624 */
  if (ARC_COND(c, 1)) goto L_e0624;
  /* e0654: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
L_e0658:;
  /* e0658: sub x8, x10, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* e065c: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* e0660: csinv x0, x8, xzr, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 8)) : (~(uint64_t)(ARC_X_R(c, 31)))));
L_e0664:;
  /* e0664: ret  */
  return;
}

void fn1_e2fd4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038857684));
  /* e2fd4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e2fd8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e2fdc: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e2fe0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e2fe4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e2fe8: mov x8, #0x3ffffffffffffff8 */
  ARC_X_W(c, 8, UINT64_C(4611686018427387896));
  /* e2fec: cmp x1, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 8));
  /* e2ff0: b.hs #0xe30a4 */
  if (ARC_COND(c, 2)) goto L_e30a4;
  /* e2ff4: mov w21, w2 */
  ARC_W_W(c, 21, ARC_W_R(c, 2));
  /* e2ff8: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* e2ffc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e3000: cmp x1, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(5));
  /* e3004: b.hs #0xe3018 */
  if (ARC_COND(c, 2)) goto L_e3018;
  /* e3008: lsl w8, w19, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 19)) << ((UINT64_C(1)) & 31)));
  /* e300c: strb w8, [x20], #4 */
  { const uint64_t _a = ARC_X_R(c, 20);
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* e3010: cbnz x19, #0xe3040 */
  if ((ARC_X_R(c, 19)) != 0) goto L_e3040;
  /* e3014: b #0xe308c */
  goto L_e308c;
L_e3018:;
  /* e3018: orr x8, x19, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) | UINT64_C(1)));
  /* e301c: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* e3020: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* e3024: csinc x22, x9, x8, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* e3028: lsl x0, x22, #2 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 22)) << ((UINT64_C(2)) & 63)));
  /* e302c: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(929840));
  fn1_1428f0(c);
  /* e3030: orr x8, x22, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) | UINT64_C(1)));
  /* e3034: stp x19, x0, [x20, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* e3038: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* e303c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_e3040:;
  /* e3040: cmp x19, #8 */
  (void)arc_sub64(c, ARC_X_R(c, 19), UINT64_C(8));
  /* e3044: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* e3048: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
  /* e304c: b.lo #0xe3080 */
  if (ARC_COND(c, 3)) goto L_e3080;
  /* e3050: and x10, x19, #0x3ffffffffffffff8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) & UINT64_C(4611686018427387896)));
  /* e3054: dup v0.4s, w21 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (ARC_W_R(c, 21));
    _t.u32[1] = (ARC_W_R(c, 21));
    _t.u32[2] = (ARC_W_R(c, 21));
    _t.u32[3] = (ARC_W_R(c, 21));
    (c)->q[0] = _t; }
  /* e3058: and x9, x19, #7 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) & UINT64_C(7)));
  /* e305c: add x8, x20, x10, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + ((uint64_t)(ARC_X_R(c, 10)) << 2)));
  /* e3060: add x11, x20, #0x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 20) + UINT64_C(16)));
  /* e3064: mov x12, x10 */
  ARC_X_W(c, 12, ARC_X_R(c, 10));
L_e3068:;
  /* e3068: subs x12, x12, #8 */
  ARC_X_W(c, 12, arc_sub64(c, ARC_X_R(c, 12), UINT64_C(8)));
  /* e306c: stp q0, q0, [x11, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* e3070: add x11, x11, #0x20 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(32)));
  /* e3074: b.ne #0xe3068 */
  if (ARC_COND(c, 1)) goto L_e3068;
  /* e3078: cmp x19, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 10));
  /* e307c: b.eq #0xe308c */
  if (ARC_COND(c, 0)) goto L_e308c;
L_e3080:;
  /* e3080: subs x9, x9, #1 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 9), UINT64_C(1)));
  /* e3084: str w21, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 21));
  }
  /* e3088: b.ne #0xe3080 */
  if (ARC_COND(c, 1)) goto L_e3080;
L_e308c:;
  /* e308c: str wzr, [x20, x19, lsl #2] */
  arc_st32((ARC_X_R(c, 20) + ((uint64_t)(ARC_X_R(c, 19)) << 2)), ARC_W_R(c, 31));
  /* e3090: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e3094: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e3098: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e309c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e30a0: ret  */
  return;
L_e30a4:;
  /* e30a4: bl #0xe2274 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(929960));
  fn1_e2274(c);
}

void fn1_e779c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038876060));
  /* e779c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e77a0: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* e77a4: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e77a8: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e77ac: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e77b0: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e77b4: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* e77b8: ldrb w22, [x0] */
  ARC_W_W(c, 22, arc_ld8(ARC_X_R(c, 0)));
  /* e77bc: ldr x8, [x0, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* e77c0: lsr x9, x22, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 22)) >> ((UINT64_C(1)) & 63)));
  /* e77c4: tst w22, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 22) & UINT64_C(1)));
  /* e77c8: csel x19, x9, x8, eq */
  ARC_X_W(c, 19, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* e77cc: add x23, x19, #0xf */
  ARC_X_W(c, 23, (ARC_X_R(c, 19) + UINT64_C(15)));
  /* e77d0: cmn x23, #8 */
  (void)arc_add64(c, ARC_X_R(c, 23), UINT64_C(8), 0);
  /* e77d4: b.lo #0xe77dc */
  if (ARC_COND(c, 3)) goto L_e77dc;
  /* e77d8: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(948188));
  fn1_d7d54(c);
L_e77dc:;
  /* e77dc: cmp x23, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 23), UINT64_C(23));
  /* e77e0: b.hs #0xe7808 */
  if (ARC_COND(c, 2)) goto L_e7808;
  /* e77e4: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* e77e8: lsl w8, w23, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 23)) << ((UINT64_C(1)) & 31)));
  /* e77ec: stp xzr, xzr, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* e77f0: orr x20, x9, #1 */
  ARC_X_W(c, 20, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* e77f4: str xzr, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 31));
  /* e77f8: mov x21, x20 */
  ARC_X_W(c, 21, ARC_X_R(c, 20));
  /* e77fc: strb w8, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 8));
  /* e7800: cbnz x19, #0xe7840 */
  if ((ARC_X_R(c, 19)) != 0) goto L_e7840;
  /* e7804: b #0xe7858 */
  goto L_e7858;
L_e7808:;
  /* e7808: orr x8, x23, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) | UINT64_C(7)));
  /* e780c: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* e7810: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* e7814: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* e7818: csinc x21, x9, x8, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* e781c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e7820: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(948260));
  fn1_1428f0(c);
  /* e7824: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e7828: orr x8, x21, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) | UINT64_C(1)));
  /* e782c: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* e7830: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* e7834: stp x23, x20, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* e7838: orr x21, x9, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* e783c: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
L_e7840:;
  /* e7840: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e7844: tst w22, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 22) & UINT64_C(1)));
  /* e7848: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* e784c: csinc x1, x8, x0, ne */
  ARC_X_W(c, 1, (ARC_COND(c, 1) ? (ARC_X_R(c, 8)) : ((ARC_X_R(c, 0)) + 1)));
  /* e7850: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e7854: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(948312));
  fn1_1449f0(c);
L_e7858:;
  /* e7858: adrp x8, #0x50000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(327680)));
  /* e785c: add x8, x8, #0x1dd */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(477)));
  /* e7860: add x10, x20, x19 */
  ARC_X_W(c, 10, (ARC_X_R(c, 20) + ARC_X_R(c, 19)));
  /* e7864: ldr x9, [x8] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 8)));
  /* e7868: ldur x8, [x8, #7] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(7))));
  /* e786c: strb wzr, [x10, #0xf] */
  arc_st8((ARC_X_R(c, 10) + INT64_C(15)), ARC_W_R(c, 31));
  /* e7870: str x9, [x10] */
  arc_st64(ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* e7874: stur x8, [x10, #7] */
  arc_st64((ARC_X_R(c, 10) + INT64_C(7)), ARC_X_R(c, 8));
  /* e7878: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* e787c: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
  /* e7880: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e7884: csel x0, x21, x9, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 21)) : ARC_X_R(c, 9)));
  /* e7888: bl #0xe78a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(948364));
  fn1_e78a0(c);
  /* e788c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e7890: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* e7894: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(948376));
  fn1_142e00(c);
  /* e7898: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e789c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(948384));
  fn1_9cc20(c);
}

void fn1_e9f30(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038886192));
  /* e9f30: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e9f34: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e9f38: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e9f3c: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e9f40: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e9f44: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e9f48: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e9f4c: add x0, x0, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* e9f50: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* e9f54: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958296));
  fn1_142518(c);
  /* e9f58: cbnz w0, #0xea064 */
  if ((ARC_W_R(c, 0)) != 0) goto L_ea064;
  /* e9f5c: ldrb w8, [x19, #0x70] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(112))));
  /* e9f60: tbnz w8, #0, #0xea05c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_ea05c;
  /* e9f64: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e9f68: ldr x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* e9f6c: cbnz x8, #0xea05c */
  if ((ARC_X_R(c, 8)) != 0) goto L_ea05c;
  /* e9f70: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* e9f74: bl #0x142a70 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958328));
  fn1_142a70(c);
  /* e9f78: nop  */
  /* nop: no architectural effect here */
  /* e9f7c: adr x8, #0x15d258 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1430104)));
  /* e9f80: adrp x21, #0x15d000 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1429504)));
  /* e9f84: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* e9f88: tbz w8, #0, #0xea070 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_ea070;
L_e9f8c:;
  /* e9f8c: ldr x8, [x21, #0x250] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(592))));
  /* e9f90: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* e9f94: bl #0x143130 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958360));
  fn1_143130(c);
  /* e9f98: ldr x22, [x0] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 0)));
  /* e9f9c: ldp x23, x8, [x22, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 22) + INT64_C(8));
    ARC_X_W(c, 23, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* e9fa0: cmp x23, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* e9fa4: b.hs #0xe9fb0 */
  if (ARC_COND(c, 2)) goto L_e9fb0;
  /* e9fa8: str x19, [x23], #8 */
  { const uint64_t _a = ARC_X_R(c, 23);
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 19));
  }
  /* e9fac: b #0xea02c */
  goto L_ea02c;
L_e9fb0:;
  /* e9fb0: ldr x10, [x22] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 22)));
  /* e9fb4: sub x21, x23, x10 */
  ARC_X_W(c, 21, (ARC_X_R(c, 23) - ARC_X_R(c, 10)));
  /* e9fb8: asr x9, x21, #3 */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 21)) >> ((UINT64_C(3)) & 63))));
  /* e9fbc: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* e9fc0: lsr x11, x9, #0x3d */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(61)) & 63)));
  /* e9fc4: cbnz x11, #0xea0a4 */
  if ((ARC_X_R(c, 11)) != 0) goto L_ea0a4;
  /* e9fc8: sub x8, x8, x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 10)));
  /* e9fcc: mov x11, #0x7ffffffffffffff8 */
  ARC_X_W(c, 11, UINT64_C(9223372036854775800));
  /* e9fd0: asr x10, x8, #2 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* e9fd4: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* e9fd8: csel x9, x10, x9, hi */
  ARC_X_W(c, 9, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e9fdc: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* e9fe0: mov x8, #0x1fffffffffffffff */
  ARC_X_W(c, 8, UINT64_C(2305843009213693951));
  /* e9fe4: csel x23, x9, x8, lo */
  ARC_X_W(c, 23, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* e9fe8: lsl x0, x23, #3 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 23)) << ((UINT64_C(3)) & 63)));
  /* e9fec: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958448));
  fn1_1428f0(c);
  /* e9ff0: ldp x20, x8, [x22] */
  { const uint64_t _pa = ARC_X_R(c, 22);
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* e9ff4: add x9, x0, x21 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + ARC_X_R(c, 21)));
  /* e9ff8: add x24, x0, x23, lsl #3 */
  ARC_X_W(c, 24, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 23)) << 3)));
  /* e9ffc: mov x23, x9 */
  ARC_X_W(c, 23, ARC_X_R(c, 9));
  /* ea000: str x19, [x23], #8 */
  { const uint64_t _a = ARC_X_R(c, 23);
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 19));
  }
  /* ea004: sub x2, x8, x20 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) - ARC_X_R(c, 20)));
  /* ea008: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* ea00c: sub x21, x9, x2 */
  ARC_X_W(c, 21, (ARC_X_R(c, 9) - ARC_X_R(c, 2)));
  /* ea010: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ea014: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958488));
  fn1_1449d8(c);
  /* ea018: stp x21, x23, [x22] */
  { const uint64_t _pa = ARC_X_R(c, 22);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* ea01c: str x24, [x22, #0x10] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(16)), ARC_X_R(c, 24));
  /* ea020: cbz x20, #0xea02c */
  if ((ARC_X_R(c, 20)) == 0) goto L_ea02c;
  /* ea024: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ea028: bl #0x1426f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958508));
  fn1_1426f8(c);
L_ea02c:;
  /* ea02c: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* ea030: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ea034: str x23, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 23));
  /* ea038: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958524));
  fn1_db2e0(c);
  /* ea03c: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* ea040: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958532));
  fn1_142560(c);
  /* ea044: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ea048: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ea04c: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* ea050: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ea054: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ea058: ret  */
  return;
L_ea05c:;
  /* ea05c: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
  /* ea060: bl #0xe9be0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958564));
  fn1_e9be0(c);
L_ea064:;
  /* ea064: nop  */
  /* nop: no architectural effect here */
  /* ea068: adr x1, #0x50f67 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331623)));
  /* ea06c: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958576));
  fn1_142a40(c);
L_ea070:;
  /* ea070: nop  */
  /* nop: no architectural effect here */
  /* ea074: adr x0, #0x15d258 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1430104)));
  /* ea078: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958588));
  fn1_1424b8(c);
  /* ea07c: cbz w0, #0xe9f8c */
  if ((ARC_W_R(c, 0)) == 0) goto L_e9f8c;
  /* ea080: nop  */
  /* nop: no architectural effect here */
  /* ea084: adr x20, #0x15d248 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(1430088)));
  /* ea088: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ea08c: bl #0xeb9a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958608));
  fn1_eb9a8(c);
  /* ea090: nop  */
  /* nop: no architectural effect here */
  /* ea094: adr x0, #0x15d258 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1430104)));
  /* ea098: str x20, [x21, #0x250] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(592)), ARC_X_R(c, 20));
  /* ea09c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958624));
  fn1_1424d0(c);
  /* ea0a0: b #0xe9f8c */
  goto L_e9f8c;
L_ea0a4:;
  /* ea0a4: bl #0xebd08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958632));
  fn1_ebd08(c);
  /* ea0a8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ea0ac: nop  */
  /* nop: no architectural effect here */
  /* ea0b0: adr x0, #0x15d258 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1430104)));
  /* ea0b4: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958648));
  fn1_1424e8(c);
  /* ea0b8: b #0xea0c4 */
  goto L_ea0c4;
  /* ea0bc: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958656));
  fn1_a1454(c);
  /* ea0c0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_ea0c4:;
  /* ea0c4: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* ea0c8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958668));
  fn1_142560(c);
  /* ea0cc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ea0d0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958676));
  fn1_9cc20(c);
  /* ea0d4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958680));
  fn1_a1454(c);
}

void fn1_eba18(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038893080));
  /* eba18: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eba1c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eba20: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* eba24: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* eba28: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eba2c: ldr x19, [x0] */
  ARC_X_W(c, 19, arc_ld64(ARC_X_R(c, 0)));
  /* eba30: cbz x19, #0xebb00 */
  if ((ARC_X_R(c, 19)) == 0) goto L_ebb00;
  /* eba34: ldp x20, x21, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* eba38: cmp x20, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 21));
  /* eba3c: b.eq #0xeba5c */
  if (ARC_COND(c, 0)) goto L_eba5c;
L_eba40:;
  /* eba40: ldr x0, [x20] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 20)));
  /* eba44: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(965192));
  fn1_142578(c);
  /* eba48: ldr x0, [x20, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* eba4c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(965200));
  fn1_142560(c);
  /* eba50: add x20, x20, #0x10 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(16)));
  /* eba54: cmp x20, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 21));
  /* eba58: b.ne #0xeba40 */
  if (ARC_COND(c, 1)) goto L_eba40;
L_eba5c:;
  /* eba5c: ldp x21, x22, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 21, arc_ld64(_pa));
    ARC_X_W(c, 22, arc_ld64(_pa + 8));
  }
  /* eba60: b #0xeba68 */
  goto L_eba68;
L_eba64:;
  /* eba64: add x21, x21, #8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(8)));
L_eba68:;
  /* eba68: cmp x21, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 22));
  /* eba6c: b.eq #0xebac4 */
  if (ARC_COND(c, 0)) goto L_ebac4;
  /* eba70: ldr x20, [x21] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 21)));
  /* eba74: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* eba78: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(965244));
  fn1_142518(c);
  /* eba7c: cbnz w0, #0xebb14 */
  if ((ARC_W_R(c, 0)) != 0) goto L_ebb14;
  /* eba80: ldr w8, [x20, #0x70] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(112))));
  /* eba84: orr w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* eba88: str w8, [x20, #0x70] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(112)), ARC_W_R(c, 8));
  /* eba8c: add x0, x20, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(64)));
  /* eba90: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(965268));
  fn1_142578(c);
  /* eba94: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* eba98: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(965276));
  fn1_142560(c);
  /* eba9c: ldr x20, [x21] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 21)));
  /* ebaa0: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ebaa4: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* ebaa8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(965292));
  fn1_bd950(c);
  /* ebaac: cbnz x0, #0xeba64 */
  if ((ARC_X_R(c, 0)) != 0) goto L_eba64;
  /* ebab0: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* ebab4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ebab8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ebabc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(965312));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ebac0: b #0xeba64 */
  goto L_eba64;
L_ebac4:;
  /* ebac4: ldr x0, [x19, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* ebac8: cbz x0, #0xebad4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ebad4;
  /* ebacc: str x0, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 0));
  /* ebad0: bl #0x1426f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(965332));
  fn1_1426f8(c);
L_ebad4:;
  /* ebad4: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* ebad8: cbz x0, #0xebae4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ebae4;
  /* ebadc: str x0, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 0));
  /* ebae0: bl #0x1426f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(965348));
  fn1_1426f8(c);
L_ebae4:;
  /* ebae4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ebae8: mov w1, #0x30 */
  ARC_W_W(c, 1, UINT64_C(48));
  /* ebaec: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ebaf0: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ebaf4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ebaf8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ebafc: b #0x142608 */
  fn1_142608(c); return;
L_ebb00:;
  /* ebb00: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ebb04: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ebb08: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ebb0c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ebb10: ret  */
  return;
L_ebb14:;
  /* ebb14: nop  */
  /* nop: no architectural effect here */
  /* ebb18: adr x1, #0x50f67 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331623)));
  /* ebb1c: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(965408));
  fn1_142a40(c);
  /* ebb20: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(965412));
  fn1_a1454(c);
  /* ebb24: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(965416));
  fn1_a1454(c);
  /* ebb28: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(965420));
  fn1_a1454(c);
  /* ebb2c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(965424));
  fn1_a1454(c);
  /* ebb30: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(965428));
  fn1_a1454(c);
  /* ebb34: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(965432));
  fn1_a1454(c);
}

void fn1_ed790(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038900624));
  /* ed790: bti c */
  /* bti: no architectural effect here */
  /* ed794: ret  */
  return;
}

void fn1_f10e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038915300));
  /* f10e4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f10e8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f10ec: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f10f0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f10f4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f10f8: ldr x9, [x1] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 1)));
  /* f10fc: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f1100: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* f1104: add x19, x0, x8 */
  ARC_X_W(c, 19, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* f1108: add x20, x1, x9 */
  ARC_X_W(c, 20, (ARC_X_R(c, 1) + ARC_X_R(c, 9)));
  /* f110c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f1110: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* f1114: bl #0x143400 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(987416));
  fn1_143400(c);
  /* f1118: ldr x8, [x20, #0x88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(136))));
  /* f111c: ldr x9, [x19, #0x88] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(136))));
  /* f1120: ldr w10, [x20, #0x90] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 20) + INT64_C(144))));
  /* f1124: str x8, [x19, #0x88] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(136)), ARC_X_R(c, 8));
  /* f1128: ldr w8, [x19, #0x90] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(144))));
  /* f112c: str x9, [x20, #0x88] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(136)), ARC_X_R(c, 9));
  /* f1130: str w10, [x19, #0x90] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(144)), ARC_W_R(c, 10));
  /* f1134: str w8, [x20, #0x90] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(144)), ARC_W_R(c, 8));
  /* f1138: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f113c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f1140: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f1144: ret  */
  return;
}

void fn1_f41c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038927808));
  /* f41c0: bti c */
  /* bti: no architectural effect here */
  /* f41c4: ret  */
  return;
}

void fn1_f7b1c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038942492));
  /* f7b1c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f7b20: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f7b24: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f7b28: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f7b2c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f7b30: ldr x9, [x1] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 1)));
  /* f7b34: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f7b38: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* f7b3c: add x19, x0, x8 */
  ARC_X_W(c, 19, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* f7b40: add x20, x1, x9 */
  ARC_X_W(c, 20, (ARC_X_R(c, 1) + ARC_X_R(c, 9)));
  /* f7b44: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f7b48: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* f7b4c: bl #0x143400 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1014608));
  fn1_143400(c);
  /* f7b50: ldr x8, [x20, #0x88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(136))));
  /* f7b54: ldr x9, [x19, #0x88] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(136))));
  /* f7b58: ldr w10, [x20, #0x90] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 20) + INT64_C(144))));
  /* f7b5c: str x8, [x19, #0x88] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(136)), ARC_X_R(c, 8));
  /* f7b60: ldr w8, [x19, #0x90] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(144))));
  /* f7b64: str x9, [x20, #0x88] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(136)), ARC_X_R(c, 9));
  /* f7b68: str w10, [x19, #0x90] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(144)), ARC_W_R(c, 10));
  /* f7b6c: str w8, [x20, #0x90] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(144)), ARC_W_R(c, 8));
  /* f7b70: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f7b74: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f7b78: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f7b7c: ret  */
  return;
}

void fn1_fce14(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038963732));
  /* fce14: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fce18: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fce1c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* fce20: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fce24: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fce28: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fce2c: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fce30: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fce34: ldr x8, [x8, #0xb00] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2816))));
  /* fce38: ldr x9, [x9, #0xae0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2784))));
  /* fce3c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* fce40: add x10, x8, #0x18 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* fce44: add x11, x8, #0x68 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) + UINT64_C(104)));
  /* fce48: add x8, x8, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* fce4c: str x10, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 10));
  /* fce50: ldrb w10, [x0, #0x58] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 0) + INT64_C(88))));
  /* fce54: add x9, x9, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* fce58: str x11, [x20, #0x80]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(128));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(128));
    arc_st64(_a, ARC_X_R(c, 11));
  }
  /* fce5c: stp x8, x9, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* fce60: tbz w10, #0, #0xfce74 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) == 0) goto L_fce74;
  /* fce64: ldr x8, [x19, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(88))));
  /* fce68: ldr x0, [x19, #0x68] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(104))));
  /* fce6c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* fce70: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1035892));
  fn1_142608(c);
L_fce74:;
  /* fce74: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fce78: nop  */
  /* nop: no architectural effect here */
  /* fce7c: adr x9, #0x15dc40 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1432640)));
  /* fce80: ldr x8, [x8, #0xaa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2728))));
  /* fce84: ldr x21, [x19, #0x20] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* fce88: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* fce8c: cmp x21, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 9));
  /* fce90: str x8, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 8));
  /* fce94: b.eq #0xfceb8 */
  if (ARC_COND(c, 0)) goto L_fceb8;
  /* fce98: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* fce9c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fcea0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1035940));
  fn1_bd950(c);
  /* fcea4: cbnz x0, #0xfceb8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_fceb8;
  /* fcea8: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* fceac: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* fceb0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fceb4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1035960));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fceb8:;
  /* fceb8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fcebc: bl #0x1433b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1035968));
  fn1_1433b8(c);
  /* fcec0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fcec4: mov w1, #0x118 */
  ARC_W_W(c, 1, UINT64_C(280));
  /* fcec8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fcecc: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* fced0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fced4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fced8: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_100c48(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038979656));
  /* 100c48: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 100c4c: sub sp, sp, #0x180 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(384)));
  /* 100c50: stp x29, x30, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 100c54: stp x28, x27, [sp, #0x130] */
  { const uint64_t _pa = ((c)->sp + INT64_C(304));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 100c58: stp x26, x25, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 100c5c: stp x24, x23, [sp, #0x150] */
  { const uint64_t _pa = ((c)->sp + INT64_C(336));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 100c60: stp x22, x21, [sp, #0x160] */
  { const uint64_t _pa = ((c)->sp + INT64_C(352));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 100c64: stp x20, x19, [sp, #0x170] */
  { const uint64_t _pa = ((c)->sp + INT64_C(368));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 100c68: add x29, sp, #0x120 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(288)));
  /* 100c6c: ldr w8, [x3, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 3) + INT64_C(8))));
  /* 100c70: mov w9, #0x4a */
  ARC_W_W(c, 9, UINT64_C(74));
  /* 100c74: mov x0, x3 */
  ARC_X_W(c, 0, ARC_X_R(c, 3));
  /* 100c78: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 100c7c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 100c80: sub x26, x29, #0x48 */
  ARC_X_W(c, 26, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 100c84: ands w8, w8, w9 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 9));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 8, _r); }
  /* 100c88: str x5, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 5));
  /* 100c8c: b.eq #0x100cb0 */
  if (ARC_COND(c, 0)) goto L_100cb0;
  /* 100c90: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* 100c94: b.eq #0x100ca8 */
  if (ARC_COND(c, 0)) goto L_100ca8;
  /* 100c98: cmp w8, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(8));
  /* 100c9c: b.ne #0x100cb8 */
  if (ARC_COND(c, 1)) goto L_100cb8;
  /* 100ca0: mov w23, #0x10 */
  ARC_W_W(c, 23, UINT64_C(16));
  /* 100ca4: b #0x100cbc */
  goto L_100cbc;
L_100ca8:;
  /* 100ca8: mov w23, #8 */
  ARC_W_W(c, 23, UINT64_C(8));
  /* 100cac: b #0x100cbc */
  goto L_100cbc;
L_100cb0:;
  /* 100cb0: mov w23, wzr */
  ARC_W_W(c, 23, ARC_W_R(c, 31));
  /* 100cb4: b #0x100cbc */
  goto L_100cbc;
L_100cb8:;
  /* 100cb8: mov w23, #0xa */
  ARC_W_W(c, 23, UINT64_C(10));
L_100cbc:;
  /* 100cbc: sub x8, x29, #0x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 100cc0: sub x1, x29, #0xc */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(12)));
  /* 100cc4: str x4, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 4));
  /* 100cc8: bl #0x135800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1051852));
  fn1_135800(c);
  /* 100ccc: stp xzr, xzr, [x26, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 26) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 100cd0: str xzr, [x26, #0x18] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(24)), ARC_X_R(c, 31));
  /* 100cd4: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 100cd8: mov w1, #0x16 */
  ARC_W_W(c, 1, UINT64_C(22));
  /* 100cdc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 100ce0: sub x19, x29, #0x40 */
  ARC_X_W(c, 19, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 100ce4: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1051880));
  fn1_142d10(c);
  /* 100ce8: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 100cec: add x10, sp, #0x38 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(56)));
  /* 100cf0: ldr x9, [x26, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 100cf4: str x10, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 10));
  /* 100cf8: adrp x28, #0x151000 */
  ARC_X_W(c, 28, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 100cfc: orr x27, x19, #1 */
  ARC_X_W(c, 27, (ARC_X_R(c, 19) | UINT64_C(1)));
  /* 100d00: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 100d04: ldr x28, [x28, #0xbe0] */
  ARC_X_W(c, 28, arc_ld64((ARC_X_R(c, 28) + INT64_C(3040))));
  /* 100d08: add x22, sp, #0x30 */
  ARC_X_W(c, 22, ((c)->sp + UINT64_C(48)));
  /* 100d0c: csinc x24, x9, x19, ne */
  ARC_X_W(c, 24, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* 100d10: mov w19, #0x16 */
  ARC_W_W(c, 19, UINT64_C(22));
  /* 100d14: str wzr, [sp, #0x2c] */
  arc_st32(((c)->sp + INT64_C(44)), ARC_W_R(c, 31));
  /* 100d18: str x24, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 24));
  /* 100d1c: b #0x100d28 */
  goto L_100d28;
L_100d20:;
  /* 100d20: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 100d24: str x8, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 8));
L_100d28:;
  /* 100d28: cbz x20, #0x100d50 */
  if ((ARC_X_R(c, 20)) == 0) goto L_100d50;
  /* 100d2c: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 100d30: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 100d34: b.eq #0x100d6c */
  if (ARC_COND(c, 0)) goto L_100d6c;
  /* 100d38: cbz x21, #0x100ddc */
  if ((ARC_X_R(c, 21)) == 0) goto L_100ddc;
  /* 100d3c: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 100d40: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 100d44: b.ne #0x100f24 */
  if (ARC_COND(c, 1)) goto L_100f24;
  /* 100d48: mov w25, wzr */
  ARC_W_W(c, 25, ARC_W_R(c, 31));
  /* 100d4c: b #0x100db8 */
  goto L_100db8;
L_100d50:;
  /* 100d50: cbz x21, #0x100f20 */
  if ((ARC_X_R(c, 21)) == 0) goto L_100f20;
  /* 100d54: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 100d58: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 100d5c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 100d60: b.ne #0x100ddc */
  if (ARC_COND(c, 1)) goto L_100ddc;
  /* 100d64: mov w25, #1 */
  ARC_W_W(c, 25, UINT64_C(1));
  /* 100d68: b #0x100db8 */
  goto L_100db8;
L_100d6c:;
  /* 100d6c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 100d70: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 100d74: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 100d78: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1052028));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 100d7c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 100d80: cset w25, eq */
  ARC_W_W(c, 25, (ARC_COND(c, 0) ? 1 : 0));
  /* 100d84: cbz x21, #0x100da8 */
  if ((ARC_X_R(c, 21)) == 0) goto L_100da8;
  /* 100d88: ldp x9, x10, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 100d8c: csel x8, xzr, x20, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 20)));
  /* 100d90: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 100d94: b.eq #0x100db4 */
  if (ARC_COND(c, 0)) goto L_100db4;
  /* 100d98: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 100d9c: b.ne #0x100f24 */
  if (ARC_COND(c, 1)) goto L_100f24;
  /* 100da0: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 100da4: b #0x100ddc */
  goto L_100ddc;
L_100da8:;
  /* 100da8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 100dac: b.ne #0x100ddc */
  if (ARC_COND(c, 1)) goto L_100ddc;
  /* 100db0: b #0x101288 */
  goto L_101288;
L_100db4:;
  /* 100db4: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
L_100db8:;
  /* 100db8: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 100dbc: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 100dc0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 100dc4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1052104));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 100dc8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 100dcc: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 100dd0: csel x21, xzr, x21, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 21)));
  /* 100dd4: cmp w25, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 25), ARC_W_R(c, 8));
  /* 100dd8: b.eq #0x100f24 */
  if (ARC_COND(c, 0)) goto L_100f24;
L_100ddc:;
  /* 100ddc: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 100de0: ldr x9, [x26, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(16))));
  /* 100de4: ldr x11, [x26] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 26)));
  /* 100de8: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 100dec: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 100df0: csel x25, x10, x9, eq */
  ARC_X_W(c, 25, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 100df4: add x9, x24, x25 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + ARC_X_R(c, 25)));
  /* 100df8: cmp x11, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 9));
  /* 100dfc: b.ne #0x100eb4 */
  if (ARC_COND(c, 1)) goto L_100eb4;
  /* 100e00: cmp x25, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 25), UINT64_C(1));
  /* 100e04: b.lt #0x100e1c */
  if (ARC_COND(c, 11)) goto L_100e1c;
  /* 100e08: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 100e0c: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 100e10: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 100e14: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1052184));
  fn1_142d10(c);
  /* 100e18: b #0x100e40 */
  goto L_100e40;
L_100e1c:;
  /* 100e1c: lsl x9, x25, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 25)) << ((UINT64_C(1)) & 63)));
  /* 100e20: tbnz w8, #0, #0x100e34 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_100e34;
  /* 100e24: lsl w8, w9, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 9)) << ((UINT64_C(1)) & 31)));
  /* 100e28: sturb w8, [x29, #-0x40] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-64)), ARC_W_R(c, 8));
  /* 100e2c: mov x8, x27 */
  ARC_X_W(c, 8, ARC_X_R(c, 27));
  /* 100e30: b #0x100e3c */
  goto L_100e3c;
L_100e34:;
  /* 100e34: ldr x8, [x26, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 100e38: str x9, [x26, #0x10] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(16)), ARC_X_R(c, 9));
L_100e3c:;
  /* 100e3c: strb wzr, [x8, x9] */
  arc_st8((ARC_X_R(c, 8) + ARC_X_R(c, 9)), ARC_W_R(c, 31));
L_100e40:;
  /* 100e40: ldp x9, x10, [x26, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 26) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 100e44: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 100e48: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 100e4c: and x11, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 100e50: ubfx x12, x9, #1, #7 */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 9)) >> 1) & UINT64_C(127)));
  /* 100e54: sub x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* 100e58: csel x8, x19, x11, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 19)) : ARC_X_R(c, 11)));
  /* 100e5c: tst x9, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(1)));
  /* 100e60: csel x10, x12, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* 100e64: subs x1, x8, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10)));
  /* 100e68: b.ls #0x100e7c */
  if (ARC_COND(c, 9)) goto L_100e7c;
  /* 100e6c: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 100e70: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 100e74: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1052280));
  fn1_142d10(c);
  /* 100e78: b #0x100e9c */
  goto L_100e9c;
L_100e7c:;
  /* 100e7c: tbnz w9, #0, #0x100e90 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_100e90;
  /* 100e80: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* 100e84: sturb w9, [x29, #-0x40] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-64)), ARC_W_R(c, 9));
  /* 100e88: mov x9, x27 */
  ARC_X_W(c, 9, ARC_X_R(c, 27));
  /* 100e8c: b #0x100e98 */
  goto L_100e98;
L_100e90:;
  /* 100e90: ldr x9, [x26, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 100e94: str x8, [x26, #0x10] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(16)), ARC_X_R(c, 8));
L_100e98:;
  /* 100e98: strb wzr, [x9, x8] */
  arc_st8((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_W_R(c, 31));
L_100e9c:;
  /* 100e9c: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 100ea0: ldr x9, [x26, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 100ea4: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 100ea8: csel x24, x27, x9, eq */
  ARC_X_W(c, 24, (ARC_COND(c, 0) ? (ARC_X_R(c, 27)) : ARC_X_R(c, 9)));
  /* 100eac: add x8, x24, x25 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + ARC_X_R(c, 25)));
  /* 100eb0: str x8, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 8));
L_100eb4:;
  /* 100eb4: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 100eb8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 100ebc: b.eq #0x100ec8 */
  if (ARC_COND(c, 0)) goto L_100ec8;
  /* 100ec0: ldrb w0, [x8] */
  ARC_W_W(c, 0, arc_ld8(ARC_X_R(c, 8)));
  /* 100ec4: b #0x100ed8 */
  goto L_100ed8;
L_100ec8:;
  /* 100ec8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 100ecc: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 100ed0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 100ed4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1052376));
  arc_dispatch(c, ARC_X_R(c, 8));
L_100ed8:;
  /* 100ed8: ldurb w5, [x29, #-0xc] */
  ARC_W_W(c, 5, arc_ld8((ARC_X_R(c, 29) + INT64_C(-12))));
  /* 100edc: sub x3, x29, #0x48 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 100ee0: add x4, sp, #0x2c */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(44)));
  /* 100ee4: sub x6, x29, #0x28 */
  ARC_X_W(c, 6, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 100ee8: add x7, sp, #0x38 */
  ARC_X_W(c, 7, ((c)->sp + UINT64_C(56)));
  /* 100eec: mov w1, w23 */
  ARC_W_W(c, 1, ARC_W_R(c, 23));
  /* 100ef0: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 100ef4: stp x22, x28, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 28));
  }
  /* 100ef8: bl #0x143868 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1052412));
  fn1_143868(c);
  /* 100efc: cbnz w0, #0x100f24 */
  if ((ARC_W_R(c, 0)) != 0) goto L_100f24;
  /* 100f00: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 100f04: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 100f08: b.ne #0x100d20 */
  if (ARC_COND(c, 1)) goto L_100d20;
  /* 100f0c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 100f10: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 100f14: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 100f18: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1052444));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 100f1c: b #0x100d28 */
  goto L_100d28;
L_100f20:;
  /* 100f20: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
L_100f24:;
  /* 100f24: ldurb w8, [x29, #-0x28] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 100f28: ldr x9, [x26, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(40))));
  /* 100f2c: ldr x22, [sp, #0x20] */
  ARC_X_W(c, 22, arc_ld64(((c)->sp + INT64_C(32))));
  /* 100f30: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 100f34: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 100f38: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 100f3c: cbz x8, #0x100f60 */
  if ((ARC_X_R(c, 8)) == 0) goto L_100f60;
  /* 100f40: ldr x8, [sp, #0x30] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(48))));
  /* 100f44: add x9, sp, #0x38 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(56)));
  /* 100f48: sub x9, x8, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* 100f4c: cmp x9, #0x9f */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(159));
  /* 100f50: b.gt #0x100f60 */
  if (ARC_COND(c, 12)) goto L_100f60;
  /* 100f54: ldr w9, [sp, #0x2c] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(44))));
  /* 100f58: str w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 9));
  }
  /* 100f5c: str x8, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 8));
L_100f60:;
  /* 100f60: ldr x1, [x26] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 26)));
  /* 100f64: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 100f68: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 100f6c: mov w3, w23 */
  ARC_W_W(c, 3, ARC_W_R(c, 23));
  /* 100f70: bl #0x135bec */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1052532));
  fn1_135bec(c);
  /* 100f74: ldurb w10, [x29, #-0x28] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 100f78: ldr x12, [sp, #0x30] */
  ARC_X_W(c, 12, arc_ld64(((c)->sp + INT64_C(48))));
  /* 100f7c: add x11, sp, #0x38 */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(56)));
  /* 100f80: ldr x8, [x26, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(40))));
  /* 100f84: lsr x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* 100f88: ands w13, w10, #1 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 13, _r); }
  /* 100f8c: sub x11, x12, x11 */
  ARC_X_W(c, 11, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* 100f90: csel x8, x9, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 100f94: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
  /* 100f98: cmp x11, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(5));
  /* 100f9c: strh w0, [x9] */
  arc_st16(ARC_X_R(c, 9), ARC_W_R(c, 0));
  /* 100fa0: b.lt #0x101100 */
  if (ARC_COND(c, 11)) goto L_101100;
  /* 100fa4: cbz x8, #0x101100 */
  if ((ARC_X_R(c, 8)) == 0) goto L_101100;
  /* 100fa8: sub x8, x12, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 12) - UINT64_C(4)));
  /* 100fac: add x9, sp, #0x38 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(56)));
  /* 100fb0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 100fb4: cset w11, lo */
  ARC_W_W(c, 11, (ARC_COND(c, 3) ? 1 : 0));
  /* 100fb8: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* 100fbc: b.eq #0x10106c */
  if (ARC_COND(c, 0)) goto L_10106c;
  /* 100fc0: cbz w11, #0x10106c */
  if ((ARC_W_R(c, 11)) == 0) goto L_10106c;
  /* 100fc4: add x10, sp, #0x38 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(56)));
  /* 100fc8: sub x14, x12, #8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) - UINT64_C(8)));
  /* 100fcc: add x11, x10, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 100fd0: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 100fd4: csel x13, x14, x11, hi */
  ARC_X_W(c, 13, (ARC_COND(c, 8) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* 100fd8: sub x13, x13, #4 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(4)));
  /* 100fdc: cmp x13, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 10));
  /* 100fe0: cinc x15, x10, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
  /* 100fe4: cmp x13, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 10));
  /* 100fe8: sub x15, x13, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) - ARC_X_R(c, 15)));
  /* 100fec: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* 100ff0: cinc x13, x15, ne */
  ARC_X_W(c, 13, (ARC_COND(c, 1) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* 100ff4: cmp x13, #0x13 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(19));
  /* 100ff8: b.lo #0x101040 */
  if (ARC_COND(c, 3)) goto L_101040;
  /* 100ffc: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 101000: csel x14, x14, x11, hi */
  ARC_X_W(c, 14, (ARC_COND(c, 8) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* 101004: sub x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(4)));
  /* 101008: cmp x14, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 10));
  /* 10100c: cinc x15, x10, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
  /* 101010: cmp x14, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 10));
  /* 101014: sub x15, x14, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 14) - ARC_X_R(c, 15)));
  /* 101018: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* 10101c: cinc x14, x15, ne */
  ARC_X_W(c, 14, (ARC_COND(c, 1) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* 101020: cmp x10, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 12));
  /* 101024: b.hs #0x101190 */
  if (ARC_COND(c, 2)) goto L_101190;
  /* 101028: lsl x14, x14, #2 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(2)) & 63)));
  /* 10102c: sub x15, x12, x14 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ARC_X_R(c, 14)));
  /* 101030: add x11, x11, x14 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ARC_X_R(c, 14)));
  /* 101034: sub x14, x15, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) - UINT64_C(4)));
  /* 101038: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 10103c: b.hs #0x101190 */
  if (ARC_COND(c, 2)) goto L_101190;
L_101040:;
  /* 101040: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
L_101044:;
  /* 101044: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
L_101048:;
  /* 101048: ldr w12, [x11] */
  ARC_W_W(c, 12, arc_ld32(ARC_X_R(c, 11)));
  /* 10104c: ldur w13, [x10, #-4] */
  ARC_W_W(c, 13, arc_ld32((ARC_X_R(c, 10) + INT64_C(-4))));
  /* 101050: stur w12, [x10, #-4] */
  arc_st32((ARC_X_R(c, 10) + INT64_C(-4)), ARC_W_R(c, 12));
  /* 101054: str w13, [x11], #0xfffffffffffffffc */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(-4));
    arc_st32(_a, ARC_W_R(c, 13));
  }
  /* 101058: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 10105c: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 101060: b.lo #0x101048 */
  if (ARC_COND(c, 3)) goto L_101048;
L_101064:;
  /* 101064: ldurb w10, [x29, #-0x28] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 101068: and w13, w10, #1 */
  ARC_W_W(c, 13, (ARC_W_R(c, 10) & UINT64_C(1)));
L_10106c:;
  /* 10106c: ldr x11, [x26, #0x30] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 26) + INT64_C(48))));
  /* 101070: cmp w13, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(0));
  /* 101074: sub x12, x29, #0x28 */
  ARC_X_W(c, 12, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 101078: csinc x11, x11, x12, ne */
  ARC_X_W(c, 11, (ARC_COND(c, 1) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 12)) + 1)));
  /* 10107c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 101080: b.hs #0x1010d8 */
  if (ARC_COND(c, 2)) goto L_1010d8;
  /* 101084: lsr w9, w10, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 10)) >> ((UINT64_C(1)) & 31)));
  /* 101088: ldr x10, [x26, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 26) + INT64_C(40))));
  /* 10108c: cmp w13, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(0));
  /* 101090: csel x9, x9, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* 101094: add x10, sp, #0x38 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(56)));
  /* 101098: add x9, x11, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) + ARC_X_R(c, 9)));
  /* 10109c: b #0x1010b8 */
  goto L_1010b8;
L_1010a0:;
  /* 1010a0: sub x12, x9, x11 */
  ARC_X_W(c, 12, (ARC_X_R(c, 9) - ARC_X_R(c, 11)));
  /* 1010a4: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 1010a8: cmp x12, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(1));
  /* 1010ac: cinc x11, x11, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 11)) + 1 : (ARC_X_R(c, 11))));
  /* 1010b0: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* 1010b4: b.hs #0x1010d8 */
  if (ARC_COND(c, 2)) goto L_1010d8;
L_1010b8:;
  /* 1010b8: ldrb w12, [x11] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 11)));
  /* 1010bc: cbz w12, #0x1010a0 */
  if ((ARC_W_R(c, 12)) == 0) goto L_1010a0;
  /* 1010c0: cmp w12, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(255));
  /* 1010c4: b.eq #0x1010a0 */
  if (ARC_COND(c, 0)) goto L_1010a0;
  /* 1010c8: ldr w13, [x10] */
  ARC_W_W(c, 13, arc_ld32(ARC_X_R(c, 10)));
  /* 1010cc: cmp w13, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 12));
  /* 1010d0: b.eq #0x1010a0 */
  if (ARC_COND(c, 0)) goto L_1010a0;
  /* 1010d4: b #0x1010f8 */
  goto L_1010f8;
L_1010d8:;
  /* 1010d8: ldrb w9, [x11] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 11)));
  /* 1010dc: cbz w9, #0x101100 */
  if ((ARC_W_R(c, 9)) == 0) goto L_101100;
  /* 1010e0: cmp w9, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(255));
  /* 1010e4: b.eq #0x101100 */
  if (ARC_COND(c, 0)) goto L_101100;
  /* 1010e8: ldr w8, [x8] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 8)));
  /* 1010ec: sub w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* 1010f0: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* 1010f4: b.lo #0x101100 */
  if (ARC_COND(c, 3)) goto L_101100;
L_1010f8:;
  /* 1010f8: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 1010fc: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_101100:;
  /* 101100: cbz x20, #0x101128 */
  if ((ARC_X_R(c, 20)) == 0) goto L_101128;
  /* 101104: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 101108: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 10110c: b.eq #0x101144 */
  if (ARC_COND(c, 0)) goto L_101144;
  /* 101110: cbz x21, #0x101230 */
  if ((ARC_X_R(c, 21)) == 0) goto L_101230;
  /* 101114: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 101118: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 10111c: b.ne #0x101224 */
  if (ARC_COND(c, 1)) goto L_101224;
  /* 101120: mov w19, wzr */
  ARC_W_W(c, 19, ARC_W_R(c, 31));
  /* 101124: b #0x101204 */
  goto L_101204;
L_101128:;
  /* 101128: cbz x21, #0x101188 */
  if ((ARC_X_R(c, 21)) == 0) goto L_101188;
  /* 10112c: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 101130: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 101134: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 101138: b.ne #0x101230 */
  if (ARC_COND(c, 1)) goto L_101230;
  /* 10113c: mov w19, #1 */
  ARC_W_W(c, 19, UINT64_C(1));
  /* 101140: b #0x101204 */
  goto L_101204;
L_101144:;
  /* 101144: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 101148: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 10114c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 101150: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1053012));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 101154: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 101158: cset w19, eq */
  ARC_W_W(c, 19, (ARC_COND(c, 0) ? 1 : 0));
  /* 10115c: cbz x21, #0x101180 */
  if ((ARC_X_R(c, 21)) == 0) goto L_101180;
  /* 101160: ldp x9, x10, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 101164: csel x8, xzr, x20, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 20)));
  /* 101168: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 10116c: b.eq #0x101200 */
  if (ARC_COND(c, 0)) goto L_101200;
  /* 101170: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 101174: b.ne #0x101224 */
  if (ARC_COND(c, 1)) goto L_101224;
  /* 101178: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 10117c: b #0x101230 */
  goto L_101230;
L_101180:;
  /* 101180: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 101184: b.ne #0x101230 */
  if (ARC_COND(c, 1)) goto L_101230;
L_101188:;
  /* 101188: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 10118c: b #0x101224 */
  goto L_101224;
L_101190:;
  /* 101190: add x13, x13, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(1)));
  /* 101194: add x15, sp, #0x38 */
  ARC_X_W(c, 15, ((c)->sp + UINT64_C(56)));
  /* 101198: sub x12, x12, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(16)));
  /* 10119c: and x14, x13, #0x7ffffffffffffff8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 13) & UINT64_C(9223372036854775800)));
  /* 1011a0: lsl x10, x14, #2 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(2)) & 63)));
  /* 1011a4: mov x16, x14 */
  ARC_X_W(c, 16, ARC_X_R(c, 14));
  /* 1011a8: sub x11, x8, x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) - ARC_X_R(c, 10)));
  /* 1011ac: add x10, x15, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 15) + ARC_X_R(c, 10)));
  /* 1011b0: add x15, x15, #0x10 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(16)));
L_1011b4:;
  /* 1011b4: ldp q1, q0, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 1011b8: sub x16, x16, #8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) - UINT64_C(8)));
  /* 1011bc: ldp q2, q3, [x15, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 15) + INT64_C(-16));
    arc_q_w(c, 2, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 3, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 1011c0: rev64 v0.4s, v0.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[0].u32[1];
    _t.u32[1] = (c)->q[0].u32[0];
    _t.u32[2] = (c)->q[0].u32[3];
    _t.u32[3] = (c)->q[0].u32[2];
    (c)->q[0] = _t; }
  /* 1011c4: rev64 v1.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[1].u32[1];
    _t.u32[1] = (c)->q[1].u32[0];
    _t.u32[2] = (c)->q[1].u32[3];
    _t.u32[3] = (c)->q[1].u32[2];
    (c)->q[1] = _t; }
  /* 1011c8: rev64 v2.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[2].u32[1];
    _t.u32[1] = (c)->q[2].u32[0];
    _t.u32[2] = (c)->q[2].u32[3];
    _t.u32[3] = (c)->q[2].u32[2];
    (c)->q[2] = _t; }
  /* 1011cc: rev64 v3.4s, v3.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[3].u32[1];
    _t.u32[1] = (c)->q[3].u32[0];
    _t.u32[2] = (c)->q[3].u32[3];
    _t.u32[3] = (c)->q[3].u32[2];
    (c)->q[3] = _t; }
  /* 1011d0: ext v0.16b, v0.16b, v0.16b, #8 */
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
  /* 1011d4: ext v1.16b, v1.16b, v1.16b, #8 */
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
  /* 1011d8: ext v2.16b, v2.16b, v2.16b, #8 */
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
  /* 1011dc: ext v3.16b, v3.16b, v3.16b, #8 */
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
  /* 1011e0: stp q0, q1, [x15, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 15) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 1011e4: add x15, x15, #0x20 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(32)));
  /* 1011e8: stp q3, q2, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_st64(_pa, (c)->q[3].u64[0]);
    arc_st64(_pa + 8, (c)->q[3].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* 1011ec: sub x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(32)));
  /* 1011f0: cbnz x16, #0x1011b4 */
  if ((ARC_X_R(c, 16)) != 0) goto L_1011b4;
  /* 1011f4: cmp x13, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 14));
  /* 1011f8: b.eq #0x101064 */
  if (ARC_COND(c, 0)) goto L_101064;
  /* 1011fc: b #0x101044 */
  goto L_101044;
L_101200:;
  /* 101200: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
L_101204:;
  /* 101204: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 101208: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 10120c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 101210: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1053204));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 101214: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 101218: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 10121c: eor w8, w19, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 19) ^ ARC_W_R(c, 8)));
  /* 101220: tbnz w8, #0, #0x101230 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_101230;
L_101224:;
  /* 101224: ldr w8, [x22] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 22)));
  /* 101228: orr w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(2)));
  /* 10122c: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_101230:;
  /* 101230: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 101234: tbz w8, #0, #0x101248 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_101248;
  /* 101238: ldr x8, [x26, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(8))));
  /* 10123c: ldr x0, [x26, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 101240: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 101244: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1053256));
  fn1_142608(c);
L_101248:;
  /* 101248: ldurb w8, [x29, #-0x28] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 10124c: tbz w8, #0, #0x101260 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_101260;
  /* 101250: ldr x8, [x26, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(32))));
  /* 101254: ldr x0, [x26, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(48))));
  /* 101258: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 10125c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1053280));
  fn1_142608(c);
L_101260:;
  /* 101260: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 101264: ldp x20, x19, [sp, #0x170] */
  { const uint64_t _pa = ((c)->sp + INT64_C(368));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 101268: ldp x22, x21, [sp, #0x160] */
  { const uint64_t _pa = ((c)->sp + INT64_C(352));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 10126c: ldp x24, x23, [sp, #0x150] */
  { const uint64_t _pa = ((c)->sp + INT64_C(336));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 101270: ldp x26, x25, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 101274: ldp x28, x27, [sp, #0x130] */
  { const uint64_t _pa = ((c)->sp + INT64_C(304));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 101278: ldp x29, x30, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 10127c: add sp, sp, #0x180 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(384)));
  /* 101280: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 101284: ret  */
  return;
L_101288:;
  /* 101288: mov x20, x21 */
  ARC_X_W(c, 20, ARC_X_R(c, 21));
  /* 10128c: b #0x100f24 */
  goto L_100f24;
  /* 101290: b #0x10129c */
  goto L_10129c;
  /* 101294: b #0x10129c */
  goto L_10129c;
  /* 101298: b #0x10129c */
  goto L_10129c;
L_10129c:;
  /* 10129c: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 1012a0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1012a4: tbnz w8, #0, #0x1012b8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1012b8;
  /* 1012a8: ldurb w8, [x29, #-0x28] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 1012ac: tbnz w8, #0, #0x1012d0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1012d0;
L_1012b0:;
  /* 1012b0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1012b4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1053368));
  fn1_9cc20(c);
L_1012b8:;
  /* 1012b8: ldr x8, [x26, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(8))));
  /* 1012bc: ldr x0, [x26, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 1012c0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1012c4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1053384));
  fn1_142608(c);
  /* 1012c8: ldurb w8, [x29, #-0x28] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 1012cc: tbz w8, #0, #0x1012b0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1012b0;
L_1012d0:;
  /* 1012d0: ldr x8, [x26, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(32))));
  /* 1012d4: ldr x0, [x26, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(48))));
  /* 1012d8: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1012dc: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1053408));
  fn1_142608(c);
  /* 1012e0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1012e4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1053416));
  fn1_9cc20(c);
}

void fn1_1105bc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039043516));
  /* 1105bc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1105c0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1105c4: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1105c8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1105cc: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* 1105d0: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 1105d4: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1105d8: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 1105dc: mov x2, x4 */
  ARC_X_W(c, 2, ARC_X_R(c, 4));
  /* 1105e0: mov x3, x5 */
  ARC_X_W(c, 3, ARC_X_R(c, 5));
  /* 1105e4: mov w4, #2 */
  ARC_W_W(c, 4, UINT64_C(2));
  /* 1105e8: bl #0x110db0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1115628));
  fn1_110db0(c);
  /* 1105ec: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* 1105f0: cmp w0, #0x17 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(23));
  /* 1105f4: b.gt #0x110604 */
  if (ARC_COND(c, 12)) goto L_110604;
  /* 1105f8: tbnz w8, #2, #0x110604 */
  if (((ARC_W_R(c, 8)) >> 2 & 1) != 0) goto L_110604;
  /* 1105fc: str w0, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 0));
  /* 110600: b #0x11060c */
  goto L_11060c;
L_110604:;
  /* 110604: orr w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* 110608: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_11060c:;
  /* 11060c: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 110610: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 110614: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 110618: ret  */
  return;
}

void fn1_113cf0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057648));
  /* 113cf0: bti c */
  /* bti: no architectural effect here */
  /* 113cf4: stp xzr, xzr, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 113cf8: str xzr, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 31));
  /* 113cfc: ret  */
  return;
}

void fn1_119a94(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039081620));
  /* 119a94: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 119a98: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 119a9c: stp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 119aa0: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 119aa4: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 119aa8: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 119aac: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 119ab0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 119ab4: sub sp, sp, #0x460 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(1120)));
  /* 119ab8: mov w25, w2 */
  ARC_W_W(c, 25, ARC_W_R(c, 2));
  /* 119abc: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* 119ac0: sub x8, x29, #0x6c */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(108)));
  /* 119ac4: adrp x2, #0x50000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(327680)));
  /* 119ac8: add x2, x2, #0xf79 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(3961)));
  /* 119acc: sub x0, x29, #0x6c */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(108)));
  /* 119ad0: mov w1, #0x64 */
  ARC_W_W(c, 1, UINT64_C(100));
  /* 119ad4: mov w21, w4 */
  ARC_W_W(c, 21, ARC_W_R(c, 4));
  /* 119ad8: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* 119adc: stur x8, [x29, #-0x78] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-120)), ARC_X_R(c, 8));
  /* 119ae0: str q0, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(64)) + 8, (c)->q[0].u64[1]);
  /* 119ae4: bl #0x1428c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1153768));
  fn1_1428c0(c);
  /* 119ae8: cmp w0, #0x64 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(100));
  /* 119aec: str x23, [sp, #0x38] */
  arc_st64(((c)->sp + INT64_C(56)), ARC_X_R(c, 23));
  /* 119af0: b.lo #0x119b54 */
  if (ARC_COND(c, 3)) goto L_119b54;
  /* 119af4: nop  */
  /* nop: no architectural effect here */
  /* 119af8: adr x8, #0x15dc38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 119afc: adrp x19, #0x15d000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 119b00: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 119b04: tbz w8, #0, #0x119ed0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_119ed0;
L_119b08:;
  /* 119b08: ldr x1, [x19, #0xc30] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(3120))));
  /* 119b0c: ldr q0, [sp, #0x40] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(64))), arc_ld64(((c)->sp + INT64_C(64)) + 8));
  /* 119b10: adrp x2, #0x50000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(327680)));
  /* 119b14: add x2, x2, #0xf79 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(3961)));
  /* 119b18: sub x0, x29, #0x78 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(120)));
  /* 119b1c: mov x19, xzr */
  ARC_X_W(c, 19, ARC_X_R(c, 31));
  /* 119b20: bl #0x136920 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1153828));
  fn1_136920(c);
  /* 119b24: mov w26, w0 */
  ARC_W_W(c, 26, ARC_W_R(c, 0));
  /* 119b28: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 119b2c: b.eq #0x119f08 */
  if (ARC_COND(c, 0)) goto L_119f08;
  /* 119b30: sbfiz x0, x26, #2, #0x20 */
  ARC_X_W(c, 0, ((uint64_t)(arc_sext64((((uint64_t)(ARC_X_R(c, 26))) & UINT64_C(4294967295)), 32)) << 2));
  /* 119b34: ldur x19, [x29, #-0x78] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 29) + INT64_C(-120))));
  /* 119b38: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1153852));
  fn1_1428a8(c);
  /* 119b3c: cbz x0, #0x119f10 */
  if ((ARC_X_R(c, 0)) == 0) goto L_119f10;
  /* 119b40: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 119b44: str x19, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 19));
  /* 119b48: mov w19, w21 */
  ARC_W_W(c, 19, ARC_W_R(c, 21));
  /* 119b4c: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 119b50: b #0x119b68 */
  goto L_119b68;
L_119b54:;
  /* 119b54: mov w26, w0 */
  ARC_W_W(c, 26, ARC_W_R(c, 0));
  /* 119b58: mov w19, w21 */
  ARC_W_W(c, 19, ARC_W_R(c, 21));
  /* 119b5c: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 119b60: add x24, sp, #0x258 */
  ARC_X_W(c, 24, ((c)->sp + UINT64_C(600)));
  /* 119b64: str xzr, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 31));
L_119b68:;
  /* 119b68: add x0, sp, #0x250 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(592)));
  /* 119b6c: add x1, x22, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(48)));
  /* 119b70: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1153908));
  fn1_143460(c);
  /* 119b74: adrp x23, #0x151000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 119b78: ldr x23, [x23, #0xb58] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 23) + INT64_C(2904))));
  /* 119b7c: ldr x21, [sp, #0x250] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(592))));
  /* 119b80: ldar x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 119b84: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 119b88: b.eq #0x119c44 */
  if (ARC_COND(c, 0)) goto L_119c44;
  /* 119b8c: nop  */
  /* nop: no architectural effect here */
  /* 119b90: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 119b94: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1153944));
  fn1_142518(c);
  /* 119b98: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 119b9c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 119ba0: b.ne #0x119bcc */
  if (ARC_COND(c, 1)) goto L_119bcc;
  /* 119ba4: nop  */
  /* nop: no architectural effect here */
  /* 119ba8: adr x27, #0x15791c */
  ARC_X_W(c, 27, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 119bac: nop  */
  /* nop: no architectural effect here */
  /* 119bb0: adr x28, #0x1578f4 */
  ARC_X_W(c, 28, (arc_image_bases[1] + UINT64_C(1407220)));
L_119bb4:;
  /* 119bb4: mov x0, x27 */
  ARC_X_W(c, 0, ARC_X_R(c, 27));
  /* 119bb8: mov x1, x28 */
  ARC_X_W(c, 1, ARC_X_R(c, 28));
  /* 119bbc: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1153984));
  fn1_142530(c);
  /* 119bc0: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 119bc4: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 119bc8: b.eq #0x119bb4 */
  if (ARC_COND(c, 0)) goto L_119bb4;
L_119bcc:;
  /* 119bcc: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 119bd0: cbz x8, #0x119be4 */
  if ((ARC_X_R(c, 8)) == 0) goto L_119be4;
  /* 119bd4: nop  */
  /* nop: no architectural effect here */
  /* 119bd8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 119bdc: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1154016));
  fn1_142560(c);
  /* 119be0: b #0x119c44 */
  goto L_119c44;
L_119be4:;
  /* 119be4: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 119be8: str x23, [sp, #0x60] */
  arc_st64(((c)->sp + INT64_C(96)), ARC_X_R(c, 23));
  /* 119bec: strb wzr, [sp, #0x68] */
  arc_st8(((c)->sp + INT64_C(104)), ARC_W_R(c, 31));
  /* 119bf0: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 119bf4: nop  */
  /* nop: no architectural effect here */
  /* 119bf8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 119bfc: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1154048));
  fn1_142560(c);
  /* 119c00: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 119c04: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 119c08: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 119c0c: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1154064));
  fn1_a2030(c);
  /* 119c10: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 119c14: str w8, [x23, #8] */
  arc_st32((ARC_X_R(c, 23) + INT64_C(8)), ARC_W_R(c, 8));
  /* 119c18: nop  */
  /* nop: no architectural effect here */
  /* 119c1c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 119c20: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1154084));
  fn1_142518(c);
  /* 119c24: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 119c28: stlr x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 119c2c: nop  */
  /* nop: no architectural effect here */
  /* 119c30: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 119c34: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1154104));
  fn1_142560(c);
  /* 119c38: nop  */
  /* nop: no architectural effect here */
  /* 119c3c: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 119c40: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1154116));
  fn1_142578(c);
L_119c44:;
  /* 119c44: ldp x8, x10, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 119c48: ldrsw x9, [x23, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 23) + INT64_C(8)))));
  /* 119c4c: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 119c50: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 119c54: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 119c58: b.hs #0x119ecc */
  if (ARC_COND(c, 2)) goto L_119ecc;
  /* 119c5c: ldr x27, [x8, x9, lsl #3] */
  ARC_X_W(c, 27, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 119c60: cbz x27, #0x119ecc */
  if ((ARC_X_R(c, 27)) == 0) goto L_119ecc;
  /* 119c64: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 119c68: ldur x1, [x29, #-0x78] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-120))));
  /* 119c6c: sxtw x21, w26 */
  ARC_X_W(c, 21, ((int64_t)(int32_t)(ARC_W_R(c, 26))));
  /* 119c70: ldr x8, [x8, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(96))));
  /* 119c74: add x2, x1, x21 */
  ARC_X_W(c, 2, (ARC_X_R(c, 1) + ARC_X_R(c, 21)));
  /* 119c78: mov x0, x27 */
  ARC_X_W(c, 0, ARC_X_R(c, 27));
  /* 119c7c: mov x3, x24 */
  ARC_X_W(c, 3, ARC_X_R(c, 24));
  /* 119c80: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1154180));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 119c84: cmp w26, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 26), UINT64_C(1));
  /* 119c88: b.lt #0x119ca0 */
  if (ARC_COND(c, 11)) goto L_119ca0;
  /* 119c8c: ldur x8, [x29, #-0x78] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-120))));
  /* 119c90: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 119c94: cmp w8, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(45));
  /* 119c98: cset w28, eq */
  ARC_W_W(c, 28, (ARC_COND(c, 0) ? 1 : 0));
  /* 119c9c: b #0x119ca4 */
  goto L_119ca4;
L_119ca0:;
  /* 119ca0: mov w28, wzr */
  ARC_W_W(c, 28, ARC_W_R(c, 31));
L_119ca4:;
  /* 119ca4: str xzr, [sp, #0x230] */
  arc_st64(((c)->sp + INT64_C(560)), ARC_X_R(c, 31));
  /* 119ca8: str xzr, [sp, #0x228] */
  arc_st64(((c)->sp + INT64_C(552)), ARC_X_R(c, 31));
  /* 119cac: str xzr, [sp, #0x238] */
  arc_st64(((c)->sp + INT64_C(568)), ARC_X_R(c, 31));
  /* 119cb0: str xzr, [sp, #0x218] */
  arc_st64(((c)->sp + INT64_C(536)), ARC_X_R(c, 31));
  /* 119cb4: str xzr, [sp, #0x210] */
  arc_st64(((c)->sp + INT64_C(528)), ARC_X_R(c, 31));
  /* 119cb8: str xzr, [sp, #0x220] */
  arc_st64(((c)->sp + INT64_C(544)), ARC_X_R(c, 31));
  /* 119cbc: stp xzr, xzr, [sp, #0x1f8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(504));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 119cc0: str xzr, [sp, #0x208] */
  arc_st64(((c)->sp + INT64_C(520)), ARC_X_R(c, 31));
  /* 119cc4: add x8, sp, #0x1f4 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(500)));
  /* 119cc8: add x9, sp, #0x1f8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(504)));
  /* 119ccc: and w0, w25, #1 */
  ARC_W_W(c, 0, (ARC_W_R(c, 25) & UINT64_C(1)));
  /* 119cd0: add x2, sp, #0x250 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(592)));
  /* 119cd4: add x3, sp, #0x24c */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(588)));
  /* 119cd8: add x4, sp, #0x248 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(584)));
  /* 119cdc: add x5, sp, #0x244 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(580)));
  /* 119ce0: add x6, sp, #0x228 */
  ARC_X_W(c, 6, ((c)->sp + UINT64_C(552)));
  /* 119ce4: add x7, sp, #0x210 */
  ARC_X_W(c, 7, ((c)->sp + UINT64_C(528)));
  /* 119ce8: mov w1, w28 */
  ARC_W_W(c, 1, ARC_W_R(c, 28));
  /* 119cec: stp x9, x8, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 119cf0: bl #0x143a90 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1154292));
  fn1_143a90(c);
  /* 119cf4: ldrsw x23, [sp, #0x1f4] */
  ARC_X_W(c, 23, ((int64_t)(int32_t)arc_ld32(((c)->sp + INT64_C(500)))));
  /* 119cf8: cmp w26, w23 */
  (void)arc_sub32(c, ARC_W_R(c, 26), ARC_W_R(c, 23));
  /* 119cfc: b.le #0x119d50 */
  if (ARC_COND(c, 13)) goto L_119d50;
  /* 119d00: ldrb w8, [sp, #0x1f8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(504))));
  /* 119d04: ldrb w9, [sp, #0x210] */
  ARC_W_W(c, 9, arc_ld8(((c)->sp + INT64_C(528))));
  /* 119d08: ldr x10, [sp, #0x200] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(512))));
  /* 119d0c: lsr x11, x8, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 119d10: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 119d14: ldr x8, [sp, #0x218] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(536))));
  /* 119d18: lsr x12, x9, #1 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 119d1c: csel x10, x11, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 119d20: sub x11, x21, x23 */
  ARC_X_W(c, 11, (ARC_X_R(c, 21) - ARC_X_R(c, 23)));
  /* 119d24: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 119d28: csel x8, x12, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 8)));
  /* 119d2c: add x9, x23, x11, lsl #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) + ((uint64_t)(ARC_X_R(c, 11)) << 1)));
  /* 119d30: add x8, x10, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + ARC_X_R(c, 8)));
  /* 119d34: add x8, x9, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ARC_X_R(c, 8)));
  /* 119d38: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 119d3c: cmp x8, #0x65 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(101));
  /* 119d40: b.hs #0x119d8c */
  if (ARC_COND(c, 2)) goto L_119d8c;
L_119d44:;
  /* 119d44: mov x25, xzr */
  ARC_X_W(c, 25, ARC_X_R(c, 31));
  /* 119d48: add x26, sp, #0x60 */
  ARC_X_W(c, 26, ((c)->sp + UINT64_C(96)));
  /* 119d4c: b #0x119da0 */
  goto L_119da0;
L_119d50:;
  /* 119d50: ldrb w8, [sp, #0x1f8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(504))));
  /* 119d54: ldrb w9, [sp, #0x210] */
  ARC_W_W(c, 9, arc_ld8(((c)->sp + INT64_C(528))));
  /* 119d58: ldr x10, [sp, #0x200] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(512))));
  /* 119d5c: lsr x11, x8, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 119d60: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 119d64: ldr x8, [sp, #0x218] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(536))));
  /* 119d68: lsr x12, x9, #1 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 119d6c: csel x10, x11, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 119d70: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 119d74: csel x8, x12, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 8)));
  /* 119d78: add x9, x23, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) + ARC_X_R(c, 10)));
  /* 119d7c: add x8, x9, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ARC_X_R(c, 8)));
  /* 119d80: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* 119d84: cmp x8, #0x65 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(101));
  /* 119d88: b.lo #0x119d44 */
  if (ARC_COND(c, 3)) goto L_119d44;
L_119d8c:;
  /* 119d8c: lsl x0, x8, #2 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 119d90: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1154452));
  fn1_1428a8(c);
  /* 119d94: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* 119d98: mov x26, x0 */
  ARC_X_W(c, 26, ARC_X_R(c, 0));
  /* 119d9c: cbz x0, #0x119f14 */
  if ((ARC_X_R(c, 0)) == 0) goto L_119f14;
L_119da0:;
  /* 119da0: ldr w3, [x22, #8] */
  ARC_W_W(c, 3, arc_ld32((ARC_X_R(c, 22) + INT64_C(8))));
  /* 119da4: ldr w8, [sp, #0x248] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(584))));
  /* 119da8: add x5, x24, x21, lsl #2 */
  ARC_X_W(c, 5, (ARC_X_R(c, 24) + ((uint64_t)(ARC_X_R(c, 21)) << 2)));
  /* 119dac: ldr w9, [sp, #0x244] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(580))));
  /* 119db0: add x10, sp, #0x1f8 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(504)));
  /* 119db4: add x11, sp, #0x210 */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(528)));
  /* 119db8: add x1, sp, #0x58 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(88)));
  /* 119dbc: stp x11, x10, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 119dc0: add x10, sp, #0x228 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(552)));
  /* 119dc4: add x2, sp, #0x50 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(80)));
  /* 119dc8: str x10, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 10));
  /* 119dcc: add x10, sp, #0x24c */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(588)));
  /* 119dd0: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 119dd4: mov x4, x24 */
  ARC_X_W(c, 4, ARC_X_R(c, 24));
  /* 119dd8: mov x6, x27 */
  ARC_X_W(c, 6, ARC_X_R(c, 27));
  /* 119ddc: mov w7, w28 */
  ARC_W_W(c, 7, ARC_W_R(c, 28));
  /* 119de0: str w23, [sp, #0x30] */
  arc_st32(((c)->sp + INT64_C(48)), ARC_W_R(c, 23));
  /* 119de4: str w9, [sp, #0x10] */
  arc_st32(((c)->sp + INT64_C(16)), ARC_W_R(c, 9));
  /* 119de8: str w8, [sp, #8] */
  arc_st32(((c)->sp + INT64_C(8)), ARC_W_R(c, 8));
  /* 119dec: str x10, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 10));
  /* 119df0: bl #0x143aa8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1154548));
  fn1_143aa8(c);
  /* 119df4: ldp x3, x2, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 3, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 119df8: ldr x0, [sp, #0x38] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(56))));
  /* 119dfc: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 119e00: mov x4, x22 */
  ARC_X_W(c, 4, ARC_X_R(c, 22));
  /* 119e04: mov w5, w19 */
  ARC_W_W(c, 5, ARC_W_R(c, 19));
  /* 119e08: bl #0x10cdc0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1154572));
  fn1_10cdc0(c);
  /* 119e0c: ldr x19, [sp, #0x40] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(64))));
  /* 119e10: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 119e14: cbz x25, #0x119e20 */
  if ((ARC_X_R(c, 25)) == 0) goto L_119e20;
  /* 119e18: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 119e1c: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1154592));
  fn1_142800(c);
L_119e20:;
  /* 119e20: ldrb w8, [sp, #0x1f8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(504))));
  /* 119e24: tbnz w8, #0, #0x119e90 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_119e90;
  /* 119e28: ldrb w8, [sp, #0x210] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(528))));
  /* 119e2c: tbnz w8, #0, #0x119eac */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_119eac;
L_119e30:;
  /* 119e30: ldrb w8, [sp, #0x228] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(552))));
  /* 119e34: tbz w8, #0, #0x119e48 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_119e48;
L_119e38:;
  /* 119e38: ldr x8, [sp, #0x228] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(552))));
  /* 119e3c: ldr x0, [sp, #0x238] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(568))));
  /* 119e40: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 119e44: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1154632));
  fn1_142608(c);
L_119e48:;
  /* 119e48: add x0, sp, #0x250 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(592)));
  /* 119e4c: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1154640));
  fn1_143478(c);
  /* 119e50: cbz x20, #0x119e5c */
  if ((ARC_X_R(c, 20)) == 0) goto L_119e5c;
  /* 119e54: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 119e58: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1154652));
  fn1_142800(c);
L_119e5c:;
  /* 119e5c: cbz x19, #0x119e68 */
  if ((ARC_X_R(c, 19)) == 0) goto L_119e68;
  /* 119e60: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 119e64: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1154664));
  fn1_142800(c);
L_119e68:;
  /* 119e68: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 119e6c: add sp, sp, #0x460 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(1120)));
  /* 119e70: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 119e74: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 119e78: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 119e7c: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 119e80: ldp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 119e84: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 119e88: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 119e8c: ret  */
  return;
L_119e90:;
  /* 119e90: ldr x8, [sp, #0x1f8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(504))));
  /* 119e94: ldr x0, [sp, #0x208] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(520))));
  /* 119e98: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 119e9c: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 119ea0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1154724));
  fn1_142608(c);
  /* 119ea4: ldrb w8, [sp, #0x210] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(528))));
  /* 119ea8: tbz w8, #0, #0x119e30 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_119e30;
L_119eac:;
  /* 119eac: ldr x8, [sp, #0x210] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(528))));
  /* 119eb0: ldr x0, [sp, #0x220] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(544))));
  /* 119eb4: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 119eb8: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 119ebc: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1154752));
  fn1_142608(c);
  /* 119ec0: ldrb w8, [sp, #0x228] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(552))));
  /* 119ec4: tbnz w8, #0, #0x119e38 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_119e38;
  /* 119ec8: b #0x119e48 */
  goto L_119e48;
L_119ecc:;
  /* 119ecc: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1154768));
  fn1_fc3b8(c);
L_119ed0:;
  /* 119ed0: nop  */
  /* nop: no architectural effect here */
  /* 119ed4: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 119ed8: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1154780));
  fn1_1424b8(c);
  /* 119edc: cbz w0, #0x119b08 */
  if ((ARC_W_R(c, 0)) == 0) goto L_119b08;
  /* 119ee0: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 119ee4: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 119ee8: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 119eec: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 119ef0: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1154804));
  fn1_1441e0(c);
  /* 119ef4: str x0, [x19, #0xc30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 119ef8: nop  */
  /* nop: no architectural effect here */
  /* 119efc: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 119f00: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1154820));
  fn1_1424d0(c);
  /* 119f04: b #0x119b08 */
  goto L_119b08;
L_119f08:;
  /* 119f08: mov x19, xzr */
  ARC_X_W(c, 19, ARC_X_R(c, 31));
  /* 119f0c: bl #0x142c08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1154832));
  fn1_142c08(c);
L_119f10:;
  /* 119f10: bl #0x142c08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1154836));
  fn1_142c08(c);
L_119f14:;
  /* 119f14: bl #0x142c08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1154840));
  fn1_142c08(c);
  /* 119f18: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 119f1c: nop  */
  /* nop: no architectural effect here */
  /* 119f20: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 119f24: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1154856));
  fn1_1424e8(c);
  /* 119f28: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 119f2c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1154864));
  fn1_9cc20(c);
  /* 119f30: b #0x119f44 */
  goto L_119f44;
  /* 119f34: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 119f38: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* 119f3c: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1154880));
  fn1_d2a78(c);
  /* 119f40: b #0x119ff0 */
  goto L_119ff0;
L_119f44:;
  /* 119f44: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 119f48: ldrb w8, [sp, #0x1f8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(504))));
  /* 119f4c: tbz w8, #0, #0x119fb0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_119fb0;
L_119f50:;
  /* 119f50: ldr x8, [sp, #0x1f8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(504))));
  /* 119f54: ldr x0, [sp, #0x208] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(520))));
  /* 119f58: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 119f5c: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 119f60: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1154916));
  fn1_142608(c);
  /* 119f64: ldrb w8, [sp, #0x210] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(528))));
  /* 119f68: tbz w8, #0, #0x119fb8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_119fb8;
L_119f6c:;
  /* 119f6c: ldr x8, [sp, #0x210] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(528))));
  /* 119f70: ldr x0, [sp, #0x220] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(544))));
  /* 119f74: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 119f78: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 119f7c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1154944));
  fn1_142608(c);
  /* 119f80: ldrb w8, [sp, #0x228] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(552))));
  /* 119f84: tbz w8, #0, #0x119ff0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_119ff0;
  /* 119f88: b #0x119fc0 */
  goto L_119fc0;
  /* 119f8c: str x19, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 19));
  /* 119f90: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 119f94: ldr x8, [sp, #0x40] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(64))));
  /* 119f98: cbz x8, #0x11a004 */
  if ((ARC_X_R(c, 8)) == 0) goto L_11a004;
  /* 119f9c: b #0x11a01c */
  goto L_11a01c;
  /* 119fa0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 119fa4: cbnz x25, #0x119fd4 */
  if ((ARC_X_R(c, 25)) != 0) goto L_119fd4;
  /* 119fa8: ldrb w8, [sp, #0x1f8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(504))));
  /* 119fac: tbnz w8, #0, #0x119f50 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_119f50;
L_119fb0:;
  /* 119fb0: ldrb w8, [sp, #0x210] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(528))));
  /* 119fb4: tbnz w8, #0, #0x119f6c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_119f6c;
L_119fb8:;
  /* 119fb8: ldrb w8, [sp, #0x228] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(552))));
  /* 119fbc: tbz w8, #0, #0x119ff0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_119ff0;
L_119fc0:;
  /* 119fc0: ldr x8, [sp, #0x228] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(552))));
  /* 119fc4: ldr x0, [sp, #0x238] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(568))));
  /* 119fc8: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 119fcc: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1155024));
  fn1_142608(c);
  /* 119fd0: b #0x119ff0 */
  goto L_119ff0;
L_119fd4:;
  /* 119fd4: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 119fd8: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1155036));
  fn1_142800(c);
  /* 119fdc: ldrb w8, [sp, #0x1f8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(504))));
  /* 119fe0: tbz w8, #0, #0x119fb0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_119fb0;
  /* 119fe4: b #0x119f50 */
  goto L_119f50;
  /* 119fe8: b #0x119fec */
  goto L_119fec;
L_119fec:;
  /* 119fec: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
L_119ff0:;
  /* 119ff0: add x0, sp, #0x250 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(592)));
  /* 119ff4: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1155064));
  fn1_143478(c);
  /* 119ff8: cbnz x20, #0x11a00c */
  if ((ARC_X_R(c, 20)) != 0) goto L_11a00c;
  /* 119ffc: ldr x8, [sp, #0x40] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(64))));
  /* 11a000: cbnz x8, #0x11a01c */
  if ((ARC_X_R(c, 8)) != 0) goto L_11a01c;
L_11a004:;
  /* 11a004: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11a008: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1155084));
  fn1_9cc20(c);
L_11a00c:;
  /* 11a00c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11a010: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1155092));
  fn1_142800(c);
  /* 11a014: ldr x8, [sp, #0x40] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(64))));
  /* 11a018: cbz x8, #0x11a004 */
  if ((ARC_X_R(c, 8)) == 0) goto L_11a004;
L_11a01c:;
  /* 11a01c: ldr x0, [sp, #0x40] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(64))));
  /* 11a020: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1155108));
  fn1_142800(c);
  /* 11a024: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11a028: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1155116));
  fn1_9cc20(c);
}

void fn1_124b88(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039126920));
  /* 124b88: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 124b8c: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 124b90: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 124b94: stp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 124b98: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 124b9c: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 124ba0: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 124ba4: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 124ba8: cbz x2, #0x124c98 */
  if ((ARC_X_R(c, 2)) == 0) goto L_124c98;
  /* 124bac: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 124bb0: mov w0, #0x138 */
  ARC_W_W(c, 0, UINT64_C(312));
  /* 124bb4: mov w21, w3 */
  ARC_W_W(c, 21, ARC_W_R(c, 3));
  /* 124bb8: mov x23, x2 */
  ARC_X_W(c, 23, ARC_X_R(c, 2));
  /* 124bbc: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 124bc0: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1199044));
  fn1_1428f0(c);
  /* 124bc4: ldr x22, [x19] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 19)));
  /* 124bc8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 124bcc: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 124bd0: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1199060));
  fn1_142860(c);
  /* 124bd4: cmn x0, #8 */
  (void)arc_add64(c, ARC_X_R(c, 0), UINT64_C(8), 0);
  /* 124bd8: b.hs #0x124ca4 */
  if (ARC_COND(c, 2)) goto L_124ca4;
  /* 124bdc: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 124be0: cmp x0, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(23));
  /* 124be4: b.hs #0x124c00 */
  if (ARC_COND(c, 2)) goto L_124c00;
  /* 124be8: lsl w8, w24, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 24)) << ((UINT64_C(1)) & 31)));
  /* 124bec: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 124bf0: orr x25, x9, #1 */
  ARC_X_W(c, 25, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* 124bf4: strb w8, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 8));
  /* 124bf8: cbnz x24, #0x124c28 */
  if ((ARC_X_R(c, 24)) != 0) goto L_124c28;
  /* 124bfc: b #0x124c38 */
  goto L_124c38;
L_124c00:;
  /* 124c00: orr x8, x24, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) | UINT64_C(7)));
  /* 124c04: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* 124c08: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* 124c0c: csinc x26, x9, x8, eq */
  ARC_X_W(c, 26, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* 124c10: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 124c14: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1199128));
  fn1_1428f0(c);
  /* 124c18: orr x8, x26, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 26) | UINT64_C(1)));
  /* 124c1c: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* 124c20: stp x24, x0, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 124c24: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
L_124c28:;
  /* 124c28: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 124c2c: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 124c30: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 124c34: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1199160));
  fn1_1449d8(c);
L_124c38:;
  /* 124c38: strb wzr, [x25, x24] */
  arc_st8((ARC_X_R(c, 25) + ARC_X_R(c, 24)), ARC_W_R(c, 31));
  /* 124c3c: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 124c40: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 124c44: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 124c48: mov w3, w21 */
  ARC_W_W(c, 3, ARC_W_R(c, 21));
  /* 124c4c: bl #0x1210e4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1199184));
  fn1_1210e4(c);
  /* 124c50: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 124c54: tbz w8, #0, #0x124c68 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_124c68;
  /* 124c58: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 124c5c: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 124c60: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 124c64: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1199208));
  fn1_142608(c);
L_124c68:;
  /* 124c68: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 124c6c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 124c70: str x19, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 19));
  /* 124c74: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1199224));
  fn1_db2e0(c);
  /* 124c78: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 124c7c: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 124c80: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 124c84: ldp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 124c88: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 124c8c: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 124c90: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 124c94: ret  */
  return;
L_124c98:;
  /* 124c98: adrp x0, #0x51000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(331776)));
  /* 124c9c: add x0, x0, #0x55e */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1374)));
  /* 124ca0: bl #0x142c98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1199268));
  fn1_142c98(c);
L_124ca4:;
  /* 124ca4: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1199272));
  fn1_d7d54(c);
  /* 124ca8: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 124cac: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 124cb0: tbz w8, #0, #0x124ccc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_124ccc;
  /* 124cb4: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 124cb8: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 124cbc: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 124cc0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1199300));
  fn1_142608(c);
  /* 124cc4: b #0x124ccc */
  goto L_124ccc;
  /* 124cc8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_124ccc:;
  /* 124ccc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 124cd0: mov w1, #0x138 */
  ARC_W_W(c, 1, UINT64_C(312));
  /* 124cd4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1199320));
  fn1_142608(c);
  /* 124cd8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 124cdc: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1199328));
  fn1_9cc20(c);
}

void fn1_127aac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039138988));
  /* 127aac: bti c */
  /* bti: no architectural effect here */
  /* 127ab0: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 127ab4: mov w0, w1 */
  ARC_W_W(c, 0, ARC_W_R(c, 1));
  /* 127ab8: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* 127abc: b #0x144378 */
  fn1_144378(c); return;
}

void fn1_129bdc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039147484));
  /* 129bdc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 129be0: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 129be4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 129be8: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 129bec: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 129bf0: mov x19, x7 */
  ARC_X_W(c, 19, ARC_X_R(c, 7));
  /* 129bf4: mov x9, x6 */
  ARC_X_W(c, 9, ARC_X_R(c, 6));
  /* 129bf8: mov x8, x5 */
  ARC_X_W(c, 8, ARC_X_R(c, 5));
  /* 129bfc: ldr x6, [x0, #0x18] */
  ARC_X_W(c, 6, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* 129c00: ldr w7, [x0, #0x20] */
  ARC_W_W(c, 7, arc_ld32((ARC_X_R(c, 0) + INT64_C(32))));
  /* 129c04: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 129c08: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 129c0c: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 129c10: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 129c14: mov x5, sp */
  ARC_X_W(c, 5, (c)->sp);
  /* 129c18: mov x3, x8 */
  ARC_X_W(c, 3, ARC_X_R(c, 8));
  /* 129c1c: mov x4, x9 */
  ARC_X_W(c, 4, ARC_X_R(c, 9));
  /* 129c20: bl #0x129370 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1219620));
  fn1_129370(c);
  /* 129c24: ldp x9, x8, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 129c28: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 129c2c: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* 129c30: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 129c34: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 129c38: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 129c3c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 129c40: ret  */
  return;
}

void fn1_12b350(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039153488));
  /* 12b350: bti c */
  /* bti: no architectural effect here */
  /* 12b354: str x3, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 3));
  /* 12b358: str x0, [x2] */
  arc_st64(ARC_X_R(c, 2), ARC_X_R(c, 0));
  /* 12b35c: tbz w7, #1, #0x12b3b0 */
  if (((ARC_W_R(c, 7)) >> 1 & 1) == 0) goto L_12b3b0;
  /* 12b360: sub x8, x4, x3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 4) - ARC_X_R(c, 3)));
  /* 12b364: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* 12b368: b.ge #0x12b374 */
  if (ARC_COND(c, 10)) goto L_12b374;
L_12b36c:;
  /* 12b36c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 12b370: ret  */
  return;
L_12b374:;
  /* 12b374: add x8, x3, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) + UINT64_C(1)));
  /* 12b378: mov w9, #0xef */
  ARC_W_W(c, 9, UINT64_C(239));
  /* 12b37c: mov w10, #0xbb */
  ARC_W_W(c, 10, UINT64_C(187));
  /* 12b380: str x8, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 8));
  /* 12b384: strb w9, [x3] */
  arc_st8(ARC_X_R(c, 3), ARC_W_R(c, 9));
  /* 12b388: ldr x8, [x5] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 5)));
  /* 12b38c: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 12b390: str x9, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 9));
  /* 12b394: strb w10, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* 12b398: mov w10, #0xbf */
  ARC_W_W(c, 10, UINT64_C(191));
  /* 12b39c: ldr x8, [x5] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 5)));
  /* 12b3a0: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 12b3a4: str x9, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 9));
  /* 12b3a8: strb w10, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* 12b3ac: ldr x0, [x2] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 2)));
L_12b3b0:;
  /* 12b3b0: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* 12b3b4: b.hs #0x12b564 */
  if (ARC_COND(c, 2)) goto L_12b564;
  /* 12b3b8: mov w8, #0xdc00 */
  ARC_W_W(c, 8, UINT64_C(56320));
  /* 12b3bc: b #0x12b3f0 */
  goto L_12b3f0;
L_12b3c0:;
  /* 12b3c0: strb w11, [x10] */
  arc_st8(ARC_X_R(c, 10), ARC_W_R(c, 11));
  /* 12b3c4: mov w11, #0x80 */
  ARC_W_W(c, 11, UINT64_C(128));
  /* 12b3c8: ldr x10, [x5] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 5)));
  /* 12b3cc: bfxil w11, w9, #0, #6 */
  ARC_W_W(c, 11, (((uint32_t)(ARC_W_R(c, 11)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 9))) >> 0) & UINT64_C(63))));
  /* 12b3d0: add x9, x10, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* 12b3d4: str x9, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 9));
  /* 12b3d8: strb w11, [x10] */
  arc_st8(ARC_X_R(c, 10), ARC_W_R(c, 11));
L_12b3dc:;
  /* 12b3dc: ldr x9, [x2] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 2)));
  /* 12b3e0: add x0, x9, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) + UINT64_C(4)));
  /* 12b3e4: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* 12b3e8: str x0, [x2] */
  arc_st64(ARC_X_R(c, 2), ARC_X_R(c, 0));
  /* 12b3ec: b.hs #0x12b564 */
  if (ARC_COND(c, 2)) goto L_12b564;
L_12b3f0:;
  /* 12b3f0: ldr w9, [x0] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 0)));
  /* 12b3f4: and x10, x9, #0xffff */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) & UINT64_C(65535)));
  /* 12b3f8: cmp x6, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 6), ARC_X_R(c, 10));
  /* 12b3fc: b.lo #0x12b56c */
  if (ARC_COND(c, 3)) goto L_12b56c;
  /* 12b400: cmp w10, #0x7f */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(127));
  /* 12b404: b.hi #0x12b428 */
  if (ARC_COND(c, 8)) goto L_12b428;
  /* 12b408: ldr x10, [x5] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 5)));
  /* 12b40c: sub x11, x4, x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 4) - ARC_X_R(c, 10)));
  /* 12b410: cmp x11, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(1));
  /* 12b414: b.lt #0x12b36c */
  if (ARC_COND(c, 11)) goto L_12b36c;
  /* 12b418: add x11, x10, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* 12b41c: str x11, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 11));
  /* 12b420: strb w9, [x10] */
  arc_st8(ARC_X_R(c, 10), ARC_W_R(c, 9));
  /* 12b424: b #0x12b3dc */
  goto L_12b3dc;
L_12b428:;
  /* 12b428: cmp w10, #0x7ff */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(2047));
  /* 12b42c: b.hi #0x12b454 */
  if (ARC_COND(c, 8)) goto L_12b454;
  /* 12b430: ldr x10, [x5] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 5)));
  /* 12b434: sub x11, x4, x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 4) - ARC_X_R(c, 10)));
  /* 12b438: cmp x11, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(2));
  /* 12b43c: b.lt #0x12b36c */
  if (ARC_COND(c, 11)) goto L_12b36c;
  /* 12b440: lsr w11, w9, #6 */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(6)) & 31)));
  /* 12b444: add x12, x10, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* 12b448: str x12, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 12));
  /* 12b44c: orr w11, w11, #0xc0 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) | UINT64_C(192)));
  /* 12b450: b #0x12b3c0 */
  goto L_12b3c0;
L_12b454:;
  /* 12b454: lsr w11, w10, #0xb */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 10)) >> ((UINT64_C(11)) & 31)));
  /* 12b458: cmp w11, #0x1a */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(26));
  /* 12b45c: b.ls #0x12b528 */
  if (ARC_COND(c, 9)) goto L_12b528;
  /* 12b460: lsr w11, w10, #0xa */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 10)) >> ((UINT64_C(10)) & 31)));
  /* 12b464: cmp w11, #0x36 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(54));
  /* 12b468: b.hi #0x12b520 */
  if (ARC_COND(c, 8)) goto L_12b520;
  /* 12b46c: sub x11, x1, x0 */
  ARC_X_W(c, 11, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* 12b470: cmp x11, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(5));
  /* 12b474: b.lt #0x12b36c */
  if (ARC_COND(c, 11)) goto L_12b36c;
  /* 12b478: ldr w11, [x0, #4]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(4));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(4));
    ARC_W_W(c, 11, arc_ld32(_a));
  }
  /* 12b47c: and w12, w11, #0xfc00 */
  ARC_W_W(c, 12, (ARC_W_R(c, 11) & UINT64_C(64512)));
  /* 12b480: cmp w12, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 8));
  /* 12b484: b.ne #0x12b56c */
  if (ARC_COND(c, 1)) goto L_12b56c;
  /* 12b488: ldr x12, [x5] */
  ARC_X_W(c, 12, arc_ld64(ARC_X_R(c, 5)));
  /* 12b48c: sub x13, x4, x12 */
  ARC_X_W(c, 13, (ARC_X_R(c, 4) - ARC_X_R(c, 12)));
  /* 12b490: cmp x13, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(4));
  /* 12b494: b.lt #0x12b36c */
  if (ARC_COND(c, 11)) goto L_12b36c;
  /* 12b498: and x13, x11, #0x3ff */
  ARC_X_W(c, 13, (ARC_X_R(c, 11) & UINT64_C(1023)));
  /* 12b49c: bfi x13, x10, #0xa, #0xa */
  ARC_X_W(c, 13, (((uint64_t)(ARC_X_R(c, 13)) & UINT64_C(18446744073708504063)) | ((((uint64_t)(ARC_X_R(c, 10))) & UINT64_C(1023)) << 10)));
  /* 12b4a0: add x10, x13, #0x10, lsl #12 */
  ARC_X_W(c, 10, (ARC_X_R(c, 13) + UINT64_C(65536)));
  /* 12b4a4: cmp x10, x6 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 6));
  /* 12b4a8: b.hi #0x12b56c */
  if (ARC_COND(c, 8)) goto L_12b56c;
  /* 12b4ac: ubfx w10, w9, #6, #4 */
  ARC_W_W(c, 10, (((uint32_t)(ARC_W_R(c, 9)) >> 6) & UINT64_C(15)));
  /* 12b4b0: add x14, x12, #1 */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) + UINT64_C(1)));
  /* 12b4b4: str x0, [x2] */
  arc_st64(ARC_X_R(c, 2), ARC_X_R(c, 0));
  /* 12b4b8: str x14, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 14));
  /* 12b4bc: ubfx w14, w9, #2, #4 */
  ARC_W_W(c, 14, (((uint32_t)(ARC_W_R(c, 9)) >> 2) & UINT64_C(15)));
  /* 12b4c0: ubfiz w9, w9, #4, #2 */
  ARC_W_W(c, 9, ((uint32_t)((((uint32_t)(ARC_W_R(c, 9))) & UINT64_C(3))) << 4));
  /* 12b4c4: add w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(1)));
  /* 12b4c8: lsr w13, w10, #2 */
  ARC_W_W(c, 13, ((uint32_t)(ARC_W_R(c, 10)) >> ((UINT64_C(2)) & 31)));
  /* 12b4cc: bfi w14, w10, #4, #2 */
  ARC_W_W(c, 14, (((uint32_t)(ARC_W_R(c, 14)) & UINT64_C(4294967247)) | ((((uint32_t)(ARC_W_R(c, 10))) & UINT64_C(3)) << 4)));
  /* 12b4d0: bfxil w9, w11, #6, #4 */
  ARC_W_W(c, 9, (((uint32_t)(ARC_W_R(c, 9)) & UINT64_C(4294967280)) | ((((uint32_t)(ARC_W_R(c, 11))) >> 6) & UINT64_C(15))));
  /* 12b4d4: orr w13, w13, #0xf0 */
  ARC_W_W(c, 13, (ARC_W_R(c, 13) | UINT64_C(240)));
  /* 12b4d8: orr w9, w9, #0x80 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(128)));
  /* 12b4dc: strb w13, [x12] */
  arc_st8(ARC_X_R(c, 12), ARC_W_R(c, 13));
  /* 12b4e0: orr w13, w14, #0x80 */
  ARC_W_W(c, 13, (ARC_W_R(c, 14) | UINT64_C(128)));
  /* 12b4e4: ldr x12, [x5] */
  ARC_X_W(c, 12, arc_ld64(ARC_X_R(c, 5)));
  /* 12b4e8: add x10, x12, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 12) + UINT64_C(1)));
  /* 12b4ec: str x10, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 10));
  /* 12b4f0: strb w13, [x12] */
  arc_st8(ARC_X_R(c, 12), ARC_W_R(c, 13));
  /* 12b4f4: ldr x10, [x5] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 5)));
  /* 12b4f8: add x12, x10, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* 12b4fc: str x12, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 12));
  /* 12b500: strb w9, [x10] */
  arc_st8(ARC_X_R(c, 10), ARC_W_R(c, 9));
  /* 12b504: mov w10, #0x80 */
  ARC_W_W(c, 10, UINT64_C(128));
  /* 12b508: ldr x9, [x5] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 5)));
  /* 12b50c: bfxil w10, w11, #0, #6 */
  ARC_W_W(c, 10, (((uint32_t)(ARC_W_R(c, 10)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 11))) >> 0) & UINT64_C(63))));
  /* 12b510: add x11, x9, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 12b514: str x11, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 11));
  /* 12b518: strb w10, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 10));
  /* 12b51c: b #0x12b3dc */
  goto L_12b3dc;
L_12b520:;
  /* 12b520: cmp w10, #0xe, lsl #12 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(57344));
  /* 12b524: b.lo #0x12b56c */
  if (ARC_COND(c, 3)) goto L_12b56c;
L_12b528:;
  /* 12b528: ldr x11, [x5] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 5)));
  /* 12b52c: sub x12, x4, x11 */
  ARC_X_W(c, 12, (ARC_X_R(c, 4) - ARC_X_R(c, 11)));
  /* 12b530: cmp x12, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(3));
  /* 12b534: b.lt #0x12b36c */
  if (ARC_COND(c, 11)) goto L_12b36c;
  /* 12b538: lsr w10, w10, #0xc */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 10)) >> ((UINT64_C(12)) & 31)));
  /* 12b53c: add x12, x11, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 11) + UINT64_C(1)));
  /* 12b540: str x12, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 12));
  /* 12b544: orr w10, w10, #0xe0 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(224)));
  /* 12b548: strb w10, [x11] */
  arc_st8(ARC_X_R(c, 11), ARC_W_R(c, 10));
  /* 12b54c: mov w11, #0x80 */
  ARC_W_W(c, 11, UINT64_C(128));
  /* 12b550: ldr x10, [x5] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 5)));
  /* 12b554: bfxil w11, w9, #6, #6 */
  ARC_W_W(c, 11, (((uint32_t)(ARC_W_R(c, 11)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 9))) >> 6) & UINT64_C(63))));
  /* 12b558: add x12, x10, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* 12b55c: str x12, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 12));
  /* 12b560: b #0x12b3c0 */
  goto L_12b3c0;
L_12b564:;
  /* 12b564: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 12b568: ret  */
  return;
L_12b56c:;
  /* 12b56c: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
  /* 12b570: ret  */
  return;
}

void fn1_12dcf8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039164152));
  /* 12dcf8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12dcfc: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12dd00: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12dd04: nop  */
  /* nop: no architectural effect here */
  /* 12dd08: adr x8, #0x15e6b0 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1435312)));
  /* 12dd0c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 12dd10: tbz w8, #0, #0x12dda0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12dda0;
L_12dd14:;
  /* 12dd14: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12dd18: ldrb w8, [x8, #0x680] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(1664))));
  /* 12dd1c: tbnz w8, #0, #0x12dd34 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12dd34;
  /* 12dd20: nop  */
  /* nop: no architectural effect here */
  /* 12dd24: adr x8, #0x15e680 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1435264)));
  /* 12dd28: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 12dd2c: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12dd30: b #0x12dd48 */
  goto L_12dd48;
L_12dd34:;
  /* 12dd34: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12dd38: add x9, x9, #0x688 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1672)));
  /* 12dd3c: mov w10, #2 */
  ARC_W_W(c, 10, UINT64_C(2));
  /* 12dd40: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12dd44: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12dd48:;
  /* 12dd48: mov w9, #0x4d41 */
  ARC_W_W(c, 9, UINT64_C(19777));
  /* 12dd4c: strb wzr, [x8, #2] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(2)), ARC_W_R(c, 31));
  /* 12dd50: strh w9, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 12dd54: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12dd58: ldrb w8, [x8, #0x698] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(1688))));
  /* 12dd5c: tbnz w8, #0, #0x12dd74 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12dd74;
  /* 12dd60: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12dd64: add x8, x8, #0x698 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1688)));
  /* 12dd68: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 12dd6c: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12dd70: b #0x12dd88 */
  goto L_12dd88;
L_12dd74:;
  /* 12dd74: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12dd78: add x9, x9, #0x6a0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1696)));
  /* 12dd7c: mov w10, #2 */
  ARC_W_W(c, 10, UINT64_C(2));
  /* 12dd80: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12dd84: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12dd88:;
  /* 12dd88: mov w9, #0x4d50 */
  ARC_W_W(c, 9, UINT64_C(19792));
  /* 12dd8c: strh w9, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 12dd90: strb wzr, [x8, #2] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(2)), ARC_W_R(c, 31));
  /* 12dd94: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12dd98: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12dd9c: ret  */
  return;
L_12dda0:;
  /* 12dda0: nop  */
  /* nop: no architectural effect here */
  /* 12dda4: adr x0, #0x15e6b0 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1435312)));
  /* 12dda8: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1236396));
  fn1_1424b8(c);
  /* 12ddac: cbz w0, #0x12dd14 */
  if ((ARC_W_R(c, 0)) == 0) goto L_12dd14;
  /* 12ddb0: adrp x0, #0x135000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1265664)));
  /* 12ddb4: add x0, x0, #0x5b8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1464)));
  /* 12ddb8: nop  */
  /* nop: no architectural effect here */
  /* 12ddbc: adr x2, #0x148af8 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1346296)));
  /* 12ddc0: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 12ddc4: bl #0x1423f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1236424));
  fn1_1423f8(c);
  /* 12ddc8: nop  */
  /* nop: no architectural effect here */
  /* 12ddcc: adr x0, #0x15e6b0 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1435312)));
  /* 12ddd0: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1236436));
  fn1_1424d0(c);
  /* 12ddd4: b #0x12dd14 */
  goto L_12dd14;
}

void fn1_134a54(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192148));
  /* 134a54: bti c */
  /* bti: no architectural effect here */
  /* 134a58: add x0, x0, #0x3e0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(992)));
  /* 134a5c: ret  */
  return;
}

void fn1_1355b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039195064));
  /* 1355b8: bti c */
  /* bti: no architectural effect here */
  /* 1355bc: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 1355c0: ldrb w8, [x8, #0x698] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(1688))));
  /* 1355c4: tbz w8, #0, #0x1355f4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1355f4;
  /* 1355c8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1355cc: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1355d0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1355d4: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 1355d8: add x8, x8, #0x698 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1688)));
  /* 1355dc: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 1355e0: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1355e4: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1355e8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1267180));
  fn1_142608(c);
  /* 1355ec: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1355f0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
L_1355f4:;
  /* 1355f4: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 1355f8: ldrb w8, [x8, #0x680] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(1664))));
  /* 1355fc: tbnz w8, #0, #0x135604 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_135604;
  /* 135600: ret  */
  return;
L_135604:;
  /* 135604: nop  */
  /* nop: no architectural effect here */
  /* 135608: adr x8, #0x15e680 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1435264)));
  /* 13560c: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 135610: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 135614: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 135618: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_138480(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039207040));
  /* 138480: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 138484: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 138488: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 13848c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 138490: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 138494: ldr x8, [x8, #0xe58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3672))));
  /* 138498: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* 13849c: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* 1384a0: add x10, x8, #0x18 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* 1384a4: add x11, x8, #0x68 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) + UINT64_C(104)));
  /* 1384a8: add x8, x8, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* 1384ac: add x9, x0, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + ARC_X_R(c, 9)));
  /* 1384b0: mov x19, x9 */
  ARC_X_W(c, 19, ARC_X_R(c, 9));
  /* 1384b4: add x0, x9, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) + UINT64_C(24)));
  /* 1384b8: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 1384bc: str x11, [x19, #0x78]! */
  { const uint64_t _a = (ARC_X_R(c, 19) + INT64_C(120));
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(120));
    arc_st64(_a, ARC_X_R(c, 11));
  }
  /* 1384c0: str x8, [x9, #0x10] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(16)), ARC_X_R(c, 8));
  /* 1384c4: bl #0x144558 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1279176));
  fn1_144558(c);
  /* 1384c8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1384cc: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1384d0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1384d4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1384d8: b #0x1433b8 */
  fn1_1433b8(c); return;
}

void fn1_13d540(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039227712));
  /* 13d540: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13d544: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 13d548: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13d54c: str x23, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 23));
  /* 13d550: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13d554: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13d558: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 13d55c: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 13d560: bl #0x142b30 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1299812));
  fn1_142b30(c);
  /* 13d564: cmn x1, #8 */
  (void)arc_add64(c, ARC_X_R(c, 1), UINT64_C(8), 0);
  /* 13d568: b.hs #0x13d5fc */
  if (ARC_COND(c, 2)) goto L_13d5fc;
  /* 13d56c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 13d570: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 13d574: cmp x1, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(23));
  /* 13d578: b.hs #0x13d594 */
  if (ARC_COND(c, 2)) goto L_13d594;
  /* 13d57c: lsl w8, w20, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 20)) << ((UINT64_C(1)) & 31)));
  /* 13d580: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 13d584: orr x22, x9, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* 13d588: strb w8, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 8));
  /* 13d58c: cbnz x20, #0x13d5bc */
  if ((ARC_X_R(c, 20)) != 0) goto L_13d5bc;
  /* 13d590: b #0x13d5cc */
  goto L_13d5cc;
L_13d594:;
  /* 13d594: orr x8, x20, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) | UINT64_C(7)));
  /* 13d598: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* 13d59c: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* 13d5a0: csinc x23, x9, x8, eq */
  ARC_X_W(c, 23, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* 13d5a4: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 13d5a8: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1299884));
  fn1_1428f0(c);
  /* 13d5ac: orr x8, x23, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) | UINT64_C(1)));
  /* 13d5b0: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 13d5b4: stp x20, x0, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 13d5b8: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
L_13d5bc:;
  /* 13d5bc: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 13d5c0: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 13d5c4: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 13d5c8: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1299916));
  fn1_1449f0(c);
L_13d5cc:;
  /* 13d5cc: strb wzr, [x22, x20] */
  arc_st8((ARC_X_R(c, 22) + ARC_X_R(c, 20)), ARC_W_R(c, 31));
  /* 13d5d0: ldur q0, [sp, #8] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))), arc_ld64(((c)->sp + INT64_C(8)) + 8));
  /* 13d5d4: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 13d5d8: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* 13d5dc: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* 13d5e0: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13d5e4: ldr x23, [sp, #0x30] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(48))));
  /* 13d5e8: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 13d5ec: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13d5f0: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 13d5f4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13d5f8: ret  */
  return;
L_13d5fc:;
  /* 13d5fc: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1299968));
  fn1_d7d54(c);
}

void fn1_1425c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248320));
  /* 1425c0: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1425c4: ldr x17, [x16, #0xf20] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3872))));
  /* 1425c8: add x16, x16, #0xf20 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3872)));
  /* 1425cc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1425d0: nop  */
  /* nop: no architectural effect here */
  /* 1425d4: nop  */
  /* nop: no architectural effect here */
}

void fn1_142bc0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249856));
  /* 142bc0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142bc4: ldr x17, [x16, #0x120] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(288))));
  /* 142bc8: add x16, x16, #0x120 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(288)));
  /* 142bcc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142bd0: nop  */
  /* nop: no architectural effect here */
  /* 142bd4: nop  */
  /* nop: no architectural effect here */
}

void fn1_1431c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251392));
  /* 1431c0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1431c4: ldr x17, [x16, #0x320] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(800))));
  /* 1431c8: add x16, x16, #0x320 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(800)));
  /* 1431cc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1431d0: nop  */
  /* nop: no architectural effect here */
  /* 1431d4: nop  */
  /* nop: no architectural effect here */
}

void fn1_1437c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252928));
  /* 1437c0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1437c4: ldr x17, [x16, #0x520] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1312))));
  /* 1437c8: add x16, x16, #0x520 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1312)));
  /* 1437cc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1437d0: nop  */
  /* nop: no architectural effect here */
  /* 1437d4: nop  */
  /* nop: no architectural effect here */
}

void fn1_143dc0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254464));
  /* 143dc0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143dc4: ldr x17, [x16, #0x720] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1824))));
  /* 143dc8: add x16, x16, #0x720 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1824)));
  /* 143dcc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143dd0: nop  */
  /* nop: no architectural effect here */
  /* 143dd4: nop  */
  /* nop: no architectural effect here */
}

void fn1_1443c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256000));
  /* 1443c0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1443c4: ldr x17, [x16, #0x920] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2336))));
  /* 1443c8: add x16, x16, #0x920 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2336)));
  /* 1443cc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1443d0: nop  */
  /* nop: no architectural effect here */
  /* 1443d4: nop  */
  /* nop: no architectural effect here */
}

void fn1_1449c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039257536));
  /* 1449c0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1449c4: ldr x17, [x16, #0xb20] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2848))));
  /* 1449c8: add x16, x16, #0xb20 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2848)));
  /* 1449cc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1449d0: nop  */
  /* nop: no architectural effect here */
  /* 1449d4: nop  */
  /* nop: no architectural effect here */
}

