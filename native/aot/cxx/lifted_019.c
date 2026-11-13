#include "lifted.h"

void fn1_9cee4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038570724));
  /* 9cee4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 9cee8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 9ceec: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 9cef0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 9cef4: adrp x8, #0x148000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1343488)));
  /* 9cef8: add x8, x8, #0xb10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2832)));
  /* 9cefc: nop  */
  /* nop: no architectural effect here */
  /* 9cf00: adr x9, #0x156dc0 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404352)));
  /* 9cf04: mov w2, #0x110 */
  ARC_W_W(c, 2, UINT64_C(272));
  /* 9cf08: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 9cf0c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 9cf10: stp x8, x9, [x0], #0x10 */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 9cf14: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(642840));
  fn1_1449d8(c);
  /* 9cf18: ldp q1, q0, [x20, #0x130] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(304));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 9cf1c: add x8, x19, #0x220 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + UINT64_C(544)));
  /* 9cf20: ldp q3, q2, [x20, #0x110] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(272));
    arc_q_w(c, 3, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 2, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 9cf24: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 9cf28: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 9cf2c: stp q1, q0, [x19, #0x140] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(320));
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 9cf30: stp q3, q2, [x19, #0x120] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(288));
    arc_st64(_pa, (c)->q[3].u64[0]);
    arc_st64(_pa + 8, (c)->q[3].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* 9cf34: ldp q1, q0, [x20, #0x170] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(368));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 9cf38: ldp q3, q2, [x20, #0x150] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(336));
    arc_q_w(c, 3, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 2, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 9cf3c: stp q1, q0, [x19, #0x180] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(384));
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 9cf40: stp q3, q2, [x19, #0x160] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(352));
    arc_st64(_pa, (c)->q[3].u64[0]);
    arc_st64(_pa + 8, (c)->q[3].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* 9cf44: ldp q1, q0, [x20, #0x1b0] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(432));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 9cf48: ldp q3, q2, [x20, #0x190] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(400));
    arc_q_w(c, 3, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 2, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 9cf4c: stp q1, q0, [x19, #0x1c0] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(448));
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 9cf50: stp q3, q2, [x19, #0x1a0] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(416));
    arc_st64(_pa, (c)->q[3].u64[0]);
    arc_st64(_pa + 8, (c)->q[3].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* 9cf54: movi v2.2d, #0000000000000000 */
  arc_v_clear(c, 2);
  /* 9cf58: ldp q1, q0, [x20, #0x1f0] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(496));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 9cf5c: ldp q4, q3, [x20, #0x1d0] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(464));
    arc_q_w(c, 4, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 3, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 9cf60: stp q1, q0, [x19, #0x200] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(512));
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 9cf64: stp q4, q3, [x19, #0x1e0] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(480));
    arc_st64(_pa, (c)->q[4].u64[0]);
    arc_st64(_pa + 8, (c)->q[4].u64[1]);
    arc_st64((_pa + 16), (c)->q[3].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[3].u64[1]);
  }
  /* 9cf68: stur q2, [x8, #0x3b] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(59)), (c)->q[2].u64[0]);
  arc_st64((ARC_X_R(c, 8) + INT64_C(59)) + 8, (c)->q[2].u64[1]);
  /* 9cf6c: stp q2, q2, [x19, #0x220] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(544));
    arc_st64(_pa, (c)->q[2].u64[0]);
    arc_st64(_pa + 8, (c)->q[2].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* 9cf70: stp q2, q2, [x19, #0x240] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(576));
    arc_st64(_pa, (c)->q[2].u64[0]);
    arc_st64(_pa + 8, (c)->q[2].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* 9cf74: bl #0x9d9a4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(642936));
  fn1_9d9a4(c);
  /* 9cf78: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 9cf7c: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 9cf80: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9cf84: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 9cf88: ret  */
  return;
}

void fn1_a1518(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038588696));
  /* a1518: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a151c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a1520: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* a1524: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a1528: blr x0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(660780));
  arc_dispatch(c, ARC_X_R(c, 0));
  /* a152c: nop  */
  /* nop: no architectural effect here */
  /* a1530: adr x0, #0x502c9 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328393)));
  /* a1534: bl #0xa23d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(660792));
  fn1_a23d8(c);
  /* a1538: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a153c: nop  */
  /* nop: no architectural effect here */
  /* a1540: adr x0, #0x156bb8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1403832)));
  /* a1544: bl #0x144ac8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(660808));
  fn1_144ac8(c);
  /* a1548: mov x10, #0x2b2b */
  ARC_X_W(c, 10, UINT64_C(11051));
  /* a154c: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* a1550: movk x10, #0x4743, lsl #16 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1195573248)));
  /* a1554: ldr x9, [x8], #0xffffffffffffffa0 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-96));
    ARC_X_W(c, 9, arc_ld64(_a));
  }
  /* a1558: movk x10, #0x4c4e, lsl #32 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446462603027808255)) | UINT64_C(83897891160064)));
  /* a155c: movk x10, #0x43, lsl #48 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(281474976710655)) | UINT64_C(18858823439613952)));
  /* a1560: cmp x10, x9, lsr #8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ((uint64_t)(ARC_X_R(c, 9)) >> 8));
  /* a1564: b.ne #0xa15a0 */
  if (ARC_COND(c, 1)) goto L_a15a0;
  /* a1568: ldur w10, [x19, #-0x28] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 19) + INT64_C(-40))));
  /* a156c: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* a1570: cmp w10, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(0));
  /* a1574: cneg w10, w10, mi */
  ARC_W_W(c, 10, (ARC_COND(c, 4) ? ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 10))) : (ARC_W_R(c, 10))));
  /* a1578: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a157c: add w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(1)));
  /* a1580: stur w10, [x19, #-0x28] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(-40)), ARC_W_R(c, 10));
  /* a1584: b.eq #0xa1590 */
  if (ARC_COND(c, 0)) goto L_a1590;
  /* a1588: stur x9, [x19, #-0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(-48)), ARC_X_R(c, 9));
  /* a158c: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
L_a1590:;
  /* a1590: ldr w8, [x0, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(8))));
  /* a1594: sub w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* a1598: str w8, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 8));
  /* a159c: b #0xa15ac */
  goto L_a15ac;
L_a15a0:;
  /* a15a0: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* a15a4: cbnz x9, #0xa15b8 */
  if ((ARC_X_R(c, 9)) != 0) goto L_a15b8;
  /* a15a8: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
L_a15ac:;
  /* a15ac: nop  */
  /* nop: no architectural effect here */
  /* a15b0: adr x0, #0x50e75 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(331381)));
  /* a15b4: bl #0xa23d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(660920));
  fn1_a23d8(c);
L_a15b8:;
  /* a15b8: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(660924));
  fn1_142488(c);
  /* a15bc: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(660928));
  fn1_a1454(c);
}

void fn1_a27dc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038593500));
  /* a27dc: bti c */
  /* bti: no architectural effect here */
  /* a27e0: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* a27e4: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_a8c28(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038619176));
  /* a8c28: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a8c2c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a8c30: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* a8c34: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a8c38: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a8c3c: ldr x20, [x0, #0x18] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* a8c40: cbz x20, #0xa8ca4 */
  if ((ARC_X_R(c, 20)) == 0) goto L_a8ca4;
  /* a8c44: ldp x9, x10, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* a8c48: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* a8c4c: ldr x0, [x1] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* a8c50: ldr x21, [x8, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* a8c54: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* a8c58: add x11, x9, x20 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + ARC_X_R(c, 20)));
  /* a8c5c: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* a8c60: b.ls #0xa8c88 */
  if (ARC_COND(c, 9)) goto L_a8c88;
  /* a8c64: lsl x8, x10, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* a8c68: add x9, x11, #0x3e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) + UINT64_C(992)));
  /* a8c6c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a8c70: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* a8c74: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* a8c78: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(691324));
  fn1_142878(c);
  /* a8c7c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* a8c80: cbz x0, #0xa8cb8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a8cb8;
  /* a8c84: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_a8c88:;
  /* a8c88: add x0, x0, x9 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 9)));
  /* a8c8c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* a8c90: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* a8c94: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(691352));
  fn1_1449d8(c);
  /* a8c98: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* a8c9c: add x8, x8, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 20)));
  /* a8ca0: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_a8ca4:;
  /* a8ca4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a8ca8: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* a8cac: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a8cb0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a8cb4: ret  */
  return;
L_a8cb8:;
  /* a8cb8: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(691388));
  fn1_1427b8(c);
}

void fn1_afe5c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038648412));
  /* afe5c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* afe60: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* afe64: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* afe68: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* afe6c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* afe70: ldrb w8, [x0, #0x28] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(40))));
  /* afe74: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* afe78: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* afe7c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* afe80: b.ne #0xafed8 */
  if (ARC_COND(c, 1)) goto L_afed8;
  /* afe84: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* afe88: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* afe8c: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* afe90: add w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* afe94: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* afe98: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* afe9c: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* afea0: b.ls #0xafecc */
  if (ARC_COND(c, 9)) goto L_afecc;
  /* afea4: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* afea8: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* afeac: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* afeb0: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* afeb4: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* afeb8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(720572));
  fn1_142878(c);
  /* afebc: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* afec0: cbz x0, #0xb0044 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b0044;
  /* afec4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* afec8: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_afecc:;
  /* afecc: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* afed0: mov w9, #0x28 */
  ARC_W_W(c, 9, UINT64_C(40));
  /* afed4: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
L_afed8:;
  /* afed8: ldr x21, [x20, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* afedc: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* afee0: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* afee4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* afee8: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* afeec: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(720624));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* afef0: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* afef4: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* afef8: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* afefc: b.eq #0xaff14 */
  if (ARC_COND(c, 0)) goto L_aff14;
  /* aff00: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* aff04: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* aff08: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* aff0c: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* aff10: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(720660));
  arc_dispatch(c, ARC_X_R(c, 8));
L_aff14:;
  /* aff14: ldrb w8, [x20, #0x28] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(40))));
  /* aff18: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* aff1c: b.ne #0xaff74 */
  if (ARC_COND(c, 1)) goto L_aff74;
  /* aff20: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* aff24: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* aff28: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* aff2c: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* aff30: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* aff34: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* aff38: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* aff3c: b.ls #0xaff68 */
  if (ARC_COND(c, 9)) goto L_aff68;
  /* aff40: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* aff44: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* aff48: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* aff4c: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* aff50: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* aff54: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(720728));
  fn1_142878(c);
  /* aff58: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* aff5c: cbz x0, #0xb0048 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b0048;
  /* aff60: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* aff64: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_aff68:;
  /* aff68: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* aff6c: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* aff70: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
L_aff74:;
  /* aff74: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* aff78: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* aff7c: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* aff80: add w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* aff84: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* aff88: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* aff8c: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* aff90: b.ls #0xaffbc */
  if (ARC_COND(c, 9)) goto L_affbc;
  /* aff94: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* aff98: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* aff9c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* affa0: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* affa4: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* affa8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(720812));
  fn1_142878(c);
  /* affac: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* affb0: cbz x0, #0xb003c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b003c;
  /* affb4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* affb8: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_affbc:;
  /* affbc: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* affc0: mov w9, #0x28 */
  ARC_W_W(c, 9, UINT64_C(40));
  /* affc4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* affc8: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* affcc: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* affd0: bl #0xafa48 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(720852));
  fn1_afa48(c);
  /* affd4: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* affd8: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* affdc: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* affe0: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* affe4: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* affe8: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* affec: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* afff0: b.ls #0xb001c */
  if (ARC_COND(c, 9)) goto L_b001c;
  /* afff4: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* afff8: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* afffc: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b0000: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b0004: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b0008: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(720908));
  fn1_142878(c);
  /* b000c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b0010: cbz x0, #0xb0040 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b0040;
  /* b0014: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b0018: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b001c:;
  /* b001c: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b0020: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* b0024: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b0028: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b002c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b0030: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b0034: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b0038: ret  */
  return;
L_b003c:;
  /* b003c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(720960));
  fn1_1427b8(c);
L_b0040:;
  /* b0040: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(720964));
  fn1_1427b8(c);
L_b0044:;
  /* b0044: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(720968));
  fn1_1427b8(c);
L_b0048:;
  /* b0048: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(720972));
  fn1_1427b8(c);
}

void fn1_b4ae4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038668004));
  /* b4ae4: bti c */
  /* bti: no architectural effect here */
  /* b4ae8: mov w1, #0x38 */
  ARC_W_W(c, 1, UINT64_C(56));
  /* b4aec: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b7cb4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038680756));
  /* b7cb4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b7cb8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b7cbc: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b7cc0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b7cc4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b7cc8: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* b7ccc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b7cd0: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b7cd4: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b7cd8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b7cdc: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b7ce0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(752868));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b7ce4: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* b7ce8: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b7cec: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b7cf0: b.eq #0xb7d08 */
  if (ARC_COND(c, 0)) goto L_b7d08;
  /* b7cf4: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b7cf8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b7cfc: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b7d00: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b7d04: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(752904));
  arc_dispatch(c, ARC_X_R(c, 8));
L_b7d08:;
  /* b7d08: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b7d0c: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b7d10: add x10, x8, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* b7d14: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b7d18: b.ls #0xb7d40 */
  if (ARC_COND(c, 9)) goto L_b7d40;
  /* b7d1c: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b7d20: add x8, x8, #0x3e2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(994)));
  /* b7d24: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b7d28: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b7d2c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b7d30: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(752948));
  fn1_142878(c);
  /* b7d34: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b7d38: cbz x0, #0xb7db4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b7db4;
  /* b7d3c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b7d40:;
  /* b7d40: mov w9, #0x3a3a */
  ARC_W_W(c, 9, UINT64_C(14906));
  /* b7d44: strh w9, [x0, x8] */
  arc_st16((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b7d48: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b7d4c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b7d50: ldr x20, [x20, #0x18] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* b7d54: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* b7d58: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* b7d5c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b7d60: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b7d64: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* b7d68: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(753004));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b7d6c: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b7d70: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b7d74: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b7d78: b.ne #0xb7d90 */
  if (ARC_COND(c, 1)) goto L_b7d90;
  /* b7d7c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b7d80: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b7d84: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b7d88: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b7d8c: ret  */
  return;
L_b7d90:;
  /* b7d90: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b7d94: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b7d98: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b7d9c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b7da0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b7da4: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b7da8: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b7dac: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b7db0: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_b7db4:;
  /* b7db4: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(753080));
  fn1_1427b8(c);
}

void fn1_bac3c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038692924));
  /* bac3c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bac40: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bac44: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* bac48: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bac4c: ldr x0, [x0, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* bac50: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* bac54: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* bac58: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* bac5c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(765024));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bac60: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* bac64: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* bac68: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bac6c: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* bac70: b.ls #0xbac98 */
  if (ARC_COND(c, 9)) goto L_bac98;
  /* bac74: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* bac78: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* bac7c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bac80: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bac84: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bac88: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(765068));
  fn1_142878(c);
  /* bac8c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bac90: cbz x0, #0xbacbc */
  if ((ARC_X_R(c, 0)) == 0) goto L_bacbc;
  /* bac94: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_bac98:;
  /* bac98: mov w9, #0x20 */
  ARC_W_W(c, 9, UINT64_C(32));
  /* bac9c: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* baca0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* baca4: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* baca8: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* bacac: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* bacb0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bacb4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bacb8: ret  */
  return;
L_bacbc:;
  /* bacbc: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(765120));
  fn1_1427b8(c);
}

void fn1_bd934(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038704436));
  /* bd934: bti c */
  /* bti: no architectural effect here */
  /* bd938: b #0x142938 */
  fn1_142938(c); return;
}

void fn1_cfd88(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038779272));
  /* cfd88: bti c */
  /* bti: no architectural effect here */
  /* cfd8c: sub x8, x1, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* cfd90: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* cfd94: b.gt #0xcfda4 */
  if (ARC_COND(c, 12)) goto L_cfda4;
  /* cfd98: b.hs #0xcfe94 */
  if (ARC_COND(c, 2)) goto L_cfe94;
L_cfd9c:;
  /* cfd9c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* cfda0: ret  */
  return;
L_cfda4:;
  /* cfda4: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* cfda8: b.eq #0xcfebc */
  if (ARC_COND(c, 0)) goto L_cfebc;
  /* cfdac: cmp x8, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(4));
  /* cfdb0: b.eq #0xcffcc */
  if (ARC_COND(c, 0)) goto L_cffcc;
  /* cfdb4: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* cfdb8: b.ne #0xcff0c */
  if (ARC_COND(c, 1)) goto L_cff0c;
  /* cfdbc: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* cfdc0: ldrb w9, [x0, #1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(1))));
  /* cfdc4: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* cfdc8: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* cfdcc: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* cfdd0: strb w10, [x0, #1] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 10));
  /* cfdd4: strb w8, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* cfdd8: ldrb w8, [x0, #3] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(3))));
  /* cfddc: ldurb w9, [x1, #-1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 1) + INT64_C(-1))));
  /* cfde0: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* cfde4: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* cfde8: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* cfdec: sturb w10, [x1, #-1] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(-1)), ARC_W_R(c, 10));
  /* cfdf0: strb w8, [x0, #3] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 8));
  /* cfdf4: ldrb w9, [x0, #2] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(2))));
  /* cfdf8: ldurb w8, [x1, #-1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(-1))));
  /* cfdfc: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* cfe00: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* cfe04: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* cfe08: sturb w10, [x1, #-1] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(-1)), ARC_W_R(c, 10));
  /* cfe0c: ldrb w10, [x0, #3] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 0) + INT64_C(3))));
  /* cfe10: ldrb w9, [x0, #2] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(2))));
  /* cfe14: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* cfe18: csel w9, w9, w10, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* cfe1c: csel w8, w8, w10, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* cfe20: strb w9, [x0, #2] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 9));
  /* cfe24: strb w8, [x0, #3] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 8));
  /* cfe28: ldrb w8, [x0, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(1))));
  /* cfe2c: ldurb w9, [x1, #-1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 1) + INT64_C(-1))));
  /* cfe30: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* cfe34: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* cfe38: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* cfe3c: sturb w10, [x1, #-1] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(-1)), ARC_W_R(c, 10));
  /* cfe40: ldrb w10, [x0, #3] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 0) + INT64_C(3))));
  /* cfe44: ldrb w11, [x0] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 0)));
  /* cfe48: ldrb w9, [x0, #2] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(2))));
  /* cfe4c: cmp w10, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 11));
  /* cfe50: csel w12, w10, w11, lo */
  ARC_W_W(c, 12, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* cfe54: csel w10, w10, w11, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* cfe58: cmp w12, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 9));
  /* cfe5c: csel w11, w11, w9, lo */
  ARC_W_W(c, 11, (ARC_COND(c, 3) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 9)));
  /* cfe60: csel w9, w12, w9, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 9)));
  /* cfe64: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* cfe68: csel w12, w10, w8, lo */
  ARC_W_W(c, 12, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* cfe6c: csel w10, w10, w8, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* cfe70: strb w11, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 11));
  /* cfe74: cmp w12, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 9));
  /* cfe78: strb w10, [x0, #3] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 10));
  /* cfe7c: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* cfe80: csel w9, w12, w9, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 9)));
  /* cfe84: strb w8, [x0, #1] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 8));
  /* cfe88: strb w9, [x0, #2] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 9));
  /* cfe8c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* cfe90: ret  */
  return;
L_cfe94:;
  /* cfe94: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* cfe98: b.ne #0xcff0c */
  if (ARC_COND(c, 1)) goto L_cff0c;
  /* cfe9c: ldurb w9, [x1, #-1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 1) + INT64_C(-1))));
  /* cfea0: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* cfea4: cmp w9, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 8));
  /* cfea8: b.hs #0xcfd9c */
  if (ARC_COND(c, 2)) goto L_cfd9c;
  /* cfeac: strb w9, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* cfeb0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* cfeb4: sturb w8, [x1, #-1] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(-1)), ARC_W_R(c, 8));
  /* cfeb8: ret  */
  return;
L_cfebc:;
  /* cfebc: ldrb w8, [x0, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(1))));
  /* cfec0: ldurb w9, [x1, #-1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 1) + INT64_C(-1))));
  /* cfec4: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* cfec8: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* cfecc: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* cfed0: sturb w10, [x1, #-1] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(-1)), ARC_W_R(c, 10));
  /* cfed4: strb w8, [x0, #1] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 8));
  /* cfed8: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* cfedc: ldurb w8, [x1, #-1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(-1))));
  /* cfee0: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* cfee4: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* cfee8: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* cfeec: sturb w10, [x1, #-1] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(-1)), ARC_W_R(c, 10));
  /* cfef0: ldrb w10, [x0, #1] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 0) + INT64_C(1))));
  /* cfef4: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* cfef8: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* cfefc: csel w9, w9, w10, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* cff00: csel w8, w8, w10, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* cff04: strb w9, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* cff08: b #0xd0044 */
  goto L_d0044;
L_cff0c:;
  /* cff0c: mov x11, x0 */
  ARC_X_W(c, 11, ARC_X_R(c, 0));
  /* cff10: ldrb w8, [x0, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(1))));
  /* cff14: ldrb w10, [x0] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 0)));
  /* cff18: ldrb w9, [x11, #2]! */
  { const uint64_t _a = (ARC_X_R(c, 11) + INT64_C(2));
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(2));
    ARC_W_W(c, 9, arc_ld8(_a));
  }
  /* cff1c: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* cff20: csel w12, w8, w9, hi */
  ARC_W_W(c, 12, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* cff24: csel w9, w8, w9, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* cff28: cmp w12, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 10));
  /* cff2c: csel w8, w12, w10, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 10)));
  /* cff30: csel w13, w12, w10, lo */
  ARC_W_W(c, 13, (ARC_COND(c, 3) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 10)));
  /* cff34: cmp w10, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 9));
  /* cff38: strb w8, [x11] */
  arc_st8(ARC_X_R(c, 11), ARC_W_R(c, 8));
  /* cff3c: add x8, x0, #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(3)));
  /* cff40: csel w10, w10, w9, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* cff44: csel w9, w9, w13, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 13)));
  /* cff48: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* cff4c: strb w10, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 10));
  /* cff50: strb w9, [x0, #1] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 9));
  /* cff54: b.eq #0xcfd9c */
  if (ARC_COND(c, 0)) goto L_cfd9c;
  /* cff58: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* cff5c: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* cff60: b #0xcff90 */
  goto L_cff90;
L_cff64:;
  /* cff64: mov x11, x0 */
  ARC_X_W(c, 11, ARC_X_R(c, 0));
L_cff68:;
  /* cff68: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* cff6c: strb w12, [x11] */
  arc_st8(ARC_X_R(c, 11), ARC_W_R(c, 12));
  /* cff70: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* cff74: b.eq #0xd0050 */
  if (ARC_COND(c, 0)) goto L_d0050;
L_cff78:;
  /* cff78: add x12, x8, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* cff7c: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
  /* cff80: add x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* cff84: cmp x12, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 1));
  /* cff88: mov x8, x12 */
  ARC_X_W(c, 8, ARC_X_R(c, 12));
  /* cff8c: b.eq #0xcfd9c */
  if (ARC_COND(c, 0)) goto L_cfd9c;
L_cff90:;
  /* cff90: ldrb w12, [x8] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 8)));
  /* cff94: ldrb w11, [x11] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 11)));
  /* cff98: cmp w12, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 11));
  /* cff9c: b.hs #0xcff78 */
  if (ARC_COND(c, 2)) goto L_cff78;
  /* cffa0: mov x14, x10 */
  ARC_X_W(c, 14, ARC_X_R(c, 10));
L_cffa4:;
  /* cffa4: subs x13, x14, #1 */
  ARC_X_W(c, 13, arc_sub64(c, ARC_X_R(c, 14), UINT64_C(1)));
  /* cffa8: strb w11, [x0, x14] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 14)), ARC_W_R(c, 11));
  /* cffac: b.eq #0xcff64 */
  if (ARC_COND(c, 0)) goto L_cff64;
  /* cffb0: add x11, x0, x14 */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + ARC_X_R(c, 14)));
  /* cffb4: mov x14, x13 */
  ARC_X_W(c, 14, ARC_X_R(c, 13));
  /* cffb8: ldurb w11, [x11, #-2] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 11) + INT64_C(-2))));
  /* cffbc: cmp w12, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 11));
  /* cffc0: b.lo #0xcffa4 */
  if (ARC_COND(c, 3)) goto L_cffa4;
  /* cffc4: add x11, x0, x13 */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + ARC_X_R(c, 13)));
  /* cffc8: b #0xcff68 */
  goto L_cff68;
L_cffcc:;
  /* cffcc: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* cffd0: ldrb w9, [x0, #2] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(2))));
  /* cffd4: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* cffd8: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* cffdc: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* cffe0: strb w10, [x0, #2] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 10));
  /* cffe4: strb w8, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* cffe8: ldrb w8, [x0, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(1))));
  /* cffec: ldurb w9, [x1, #-1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 1) + INT64_C(-1))));
  /* cfff0: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* cfff4: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* cfff8: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* cfffc: sturb w10, [x1, #-1] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(-1)), ARC_W_R(c, 10));
  /* d0000: ldrb w10, [x0] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 0)));
  /* d0004: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* d0008: csel w9, w10, w8, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d000c: csel w8, w10, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d0010: strb w9, [x0, #1] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 9));
  /* d0014: strb w8, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* d0018: ldrb w8, [x0, #2] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(2))));
  /* d001c: ldurb w9, [x1, #-1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 1) + INT64_C(-1))));
  /* d0020: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d0024: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0028: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d002c: sturb w10, [x1, #-1] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(-1)), ARC_W_R(c, 10));
  /* d0030: ldrb w10, [x0, #1] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 0) + INT64_C(1))));
  /* d0034: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* d0038: csel w9, w10, w8, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d003c: csel w8, w10, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d0040: strb w9, [x0, #2] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 9));
L_d0044:;
  /* d0044: strb w8, [x0, #1] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 8));
  /* d0048: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d004c: ret  */
  return;
L_d0050:;
  /* d0050: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* d0054: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* d0058: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* d005c: ret  */
  return;
}

void fn1_d7758(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038810456));
  /* d7758: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d775c: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* d7760: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d7764: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d7768: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* d776c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d7770: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d7774: str xzr, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 31));
  /* d7778: ldr x20, [x19, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 20, arc_ld64(_a));
  }
  /* d777c: bl #0x142aa0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(882560));
  fn1_142aa0(c);
  /* d7780: cbnz x20, #0xd7788 */
  if ((ARC_X_R(c, 20)) != 0) goto L_d7788;
  /* d7784: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(882568));
  fn1_142488(c);
L_d7788:;
  /* d7788: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* d778c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* d7790: bl #0x142ab8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(882580));
  fn1_142ab8(c);
  /* d7794: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* d7798: bl #0x142a88 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(882588));
  fn1_142a88(c);
  /* d779c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d77a0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* d77a4: bl #0x142aa0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(882600));
  fn1_142aa0(c);
  /* d77a8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d77ac: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(882608));
  fn1_9cc20(c);
}

void fn1_db5c4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038826436));
  /* db5c4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* db5c8: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* db5cc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* db5d0: ldr x0, [x0] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 0)));
  /* db5d4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(898520));
  fn1_142560(c);
  /* db5d8: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* db5dc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* db5e0: ret  */
  return;
  /* db5e4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(898536));
  fn1_a1454(c);
}

void fn1_df904(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038843652));
  /* df904: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* df908: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* df90c: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* df910: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* df914: ldr x8, [x1, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* df918: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* df91c: ldr x20, [x0, #8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* df920: str x8, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 8));
  /* df924: sub x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) - UINT64_C(8)));
  /* df928: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* df92c: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(915760));
  fn1_a2030(c);
  /* df930: sub x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) - UINT64_C(8)));
  /* df934: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* df938: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(915772));
  fn1_a2030(c);
  /* df93c: cmp w0, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(1));
  /* df940: b.pl #0xdf94c */
  if (ARC_COND(c, 5)) goto L_df94c;
  /* df944: sub x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) - UINT64_C(24)));
  /* df948: bl #0x1426f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(915788));
  fn1_1426f8(c);
L_df94c:;
  /* df94c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* df950: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* df954: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* df958: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* df95c: ret  */
  return;
}

void fn1_e22b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038854328));
  /* e22b8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e22bc: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e22c0: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e22c4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e22c8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e22cc: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* e22d0: cmp x2, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 2), UINT64_C(4));
  /* e22d4: b.hi #0xe22e4 */
  if (ARC_COND(c, 8)) goto L_e22e4;
  /* e22d8: lsl w8, w19, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 19)) << ((UINT64_C(1)) & 31)));
  /* e22dc: strb w8, [x0], #4 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* e22e0: b #0xe2320 */
  goto L_e2320;
L_e22e4:;
  /* e22e4: mov x8, #0x3ffffffffffffff8 */
  ARC_X_W(c, 8, UINT64_C(4611686018427387896));
  /* e22e8: cmp x19, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* e22ec: b.hs #0xe233c */
  if (ARC_COND(c, 2)) goto L_e233c;
  /* e22f0: orr x8, x19, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) | UINT64_C(1)));
  /* e22f4: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* e22f8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e22fc: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* e2300: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* e2304: csinc x22, x9, x8, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* e2308: lsl x0, x22, #2 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 22)) << ((UINT64_C(2)) & 63)));
  /* e230c: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(926480));
  fn1_1428f0(c);
  /* e2310: orr x8, x22, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) | UINT64_C(1)));
  /* e2314: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* e2318: stp x19, x0, [x21, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* e231c: str x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
L_e2320:;
  /* e2320: lsl x8, x19, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 19)) << ((UINT64_C(2)) & 63)));
  /* e2324: add x2, x8, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* e2328: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e232c: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e2330: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e2334: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e2338: b #0x1449f0 */
  fn1_1449f0(c); return;
L_e233c:;
  /* e233c: bl #0xe2274 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(926528));
  fn1_e2274(c);
}

void fn1_e5474(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038867060));
  /* e5474: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e5478: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* e547c: str d8, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), (c)->q[8].u64[0]);
  /* e5480: stp x29, x30, [sp, #0x48] */
  { const uint64_t _pa = ((c)->sp + INT64_C(72));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e5484: str x23, [sp, #0x58] */
  arc_st64(((c)->sp + INT64_C(88)), ARC_X_R(c, 23));
  /* e5488: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e548c: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e5490: add x29, sp, #0x48 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(72)));
  /* e5494: mov w8, #8 */
  ARC_W_W(c, 8, UINT64_C(8));
  /* e5498: mov w22, #0x7473 */
  ARC_W_W(c, 22, UINT64_C(29811));
  /* e549c: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e54a0: strb w8, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 8));
  /* e54a4: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e54a8: movk w22, #0x666f, lsl #16 */
  ARC_W_W(c, 22, ((ARC_W_R(c, 22) & UINT64_C(18446744069414649855)) | UINT64_C(1718550528)));
  /* e54ac: add x10, x0, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 0) + UINT64_C(4)));
  /* e54b0: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* e54b4: stur w22, [sp, #9] */
  arc_st32(((c)->sp + INT64_C(9)), ARC_W_R(c, 22));
  /* e54b8: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e54bc: strb wzr, [sp, #0xd] */
  arc_st8(((c)->sp + INT64_C(13)), ARC_W_R(c, 31));
  /* e54c0: str xzr, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 31));
  /* e54c4: csel x20, x10, x9, eq */
  ARC_X_W(c, 20, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e54c8: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(939212));
  fn1_142a58(c);
  /* e54cc: ldr w23, [x0] */
  ARC_W_W(c, 23, arc_ld32(ARC_X_R(c, 0)));
  /* e54d0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e54d4: str wzr, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 31));
  /* e54d8: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* e54dc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e54e0: bl #0x142f80 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(939236));
  fn1_142f80(c);
  /* e54e4: ldr w8, [x21] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 21)));
  /* e54e8: str w23, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 23));
  /* e54ec: cmp w8, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(34));
  /* e54f0: b.eq #0xe553c */
  if (ARC_COND(c, 0)) goto L_e553c;
  /* e54f4: ldr x8, [sp, #0x20] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
  /* e54f8: subs x8, x8, x20 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20)));
  /* e54fc: b.eq #0xe5570 */
  if (ARC_COND(c, 0)) goto L_e5570;
  /* e5500: fmov s8, s0 */
  arc_su_w(c, 8, (uint32_t)(ARC_SU_R(c, 0)));
  /* e5504: cbz x19, #0xe5510 */
  if ((ARC_X_R(c, 19)) == 0) goto L_e5510;
  /* e5508: asr x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* e550c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_e5510:;
  /* e5510: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* e5514: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(939288));
  fn1_142e00(c);
  /* e5518: fmov s0, s8 */
  arc_su_w(c, 0, (uint32_t)(ARC_SU_R(c, 8)));
  /* e551c: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e5520: ldr x23, [sp, #0x58] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(88))));
  /* e5524: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e5528: ldr d8, [sp, #0x40] */
  arc_du_w(c, 8, arc_ld64(((c)->sp + INT64_C(64))));
  /* e552c: ldp x29, x30, [sp, #0x48] */
  { const uint64_t _pa = ((c)->sp + INT64_C(72));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e5530: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* e5534: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e5538: ret  */
  return;
L_e553c:;
  /* e553c: mov w8, #0x24 */
  ARC_W_W(c, 8, UINT64_C(36));
  /* e5540: adrp x9, #0x51000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(331776)));
  /* e5544: add x9, x9, #0xa7d */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2685)));
  /* e5548: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* e554c: sturb w8, [x29, #-0x20] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-32)), ARC_W_R(c, 8));
  /* e5550: ldur x8, [x9, #6] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(6))));
  /* e5554: stur xzr, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 31));
  /* e5558: sub x9, x29, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* e555c: stur w22, [x29, #-0x1f] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-31)), ARC_W_R(c, 22));
  /* e5560: stur x10, [x29, #-0x1b] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-27)), ARC_X_R(c, 10));
  /* e5564: stur x8, [x29, #-0x15] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-21)), ARC_X_R(c, 8));
  /* e5568: orr x0, x9, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* e556c: bl #0xda038 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(939376));
  fn1_da038(c);
L_e5570:;
  /* e5570: mov w8, #0x26 */
  ARC_W_W(c, 8, UINT64_C(38));
  /* e5574: adrp x9, #0x50000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(327680)));
  /* e5578: add x9, x9, #0x1dd */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(477)));
  /* e557c: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* e5580: sturb w8, [x29, #-0x20] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-32)), ARC_W_R(c, 8));
  /* e5584: ldur x8, [x9, #7] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(7))));
  /* e5588: stur xzr, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 31));
  /* e558c: sub x9, x29, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* e5590: stur w22, [x29, #-0x1f] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-31)), ARC_W_R(c, 22));
  /* e5594: stur x10, [x29, #-0x1b] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-27)), ARC_X_R(c, 10));
  /* e5598: stur x8, [x29, #-0x14] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-20)), ARC_X_R(c, 8));
  /* e559c: orr x0, x9, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* e55a0: bl #0xe78a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(939428));
  fn1_e78a0(c);
  /* e55a4: b #0xe55a8 */
  goto L_e55a8;
L_e55a8:;
  /* e55a8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e55ac: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* e55b0: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(939444));
  fn1_142e00(c);
  /* e55b4: b #0xe55bc */
  goto L_e55bc;
  /* e55b8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_e55bc:;
  /* e55bc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* e55c0: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(939460));
  fn1_142e00(c);
  /* e55c4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e55c8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(939468));
  fn1_9cc20(c);
}

void fn1_e9218(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038882840));
  /* e9218: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e921c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e9220: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* e9224: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e9228: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e922c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e9230: mov x8, #0x2d69 */
  ARC_X_W(c, 8, UINT64_C(11625));
  /* e9234: lsr x10, x0, #0x20 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(32)) & 63)));
  /* e9238: lsl w9, w20, #3 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 20)) << ((UINT64_C(3)) & 31)));
  /* e923c: movk x8, #0xeb38, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(3946315776)));
  /* e9240: mov w21, w1 */
  ARC_W_W(c, 21, ARC_W_R(c, 1));
  /* e9244: movk x8, #0xea08, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(257320080637952)));
  /* e9248: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* e924c: add x9, x9, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(8)));
  /* e9250: movk x8, #0x9ddf, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(11375811183761162240)));
  /* e9254: eor x9, x9, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) ^ ARC_X_R(c, 10)));
  /* e9258: mul x9, x9, x8 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 8))));
  /* e925c: eor x10, x10, x9, lsr #47 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) ^ ((uint64_t)(ARC_X_R(c, 9)) >> 47)));
  /* e9260: eor x9, x10, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) ^ ARC_X_R(c, 9)));
  /* e9264: mul x8, x9, x8 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 8))));
  /* e9268: lsr x9, x8, #0x2f */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(47)) & 63)));
  /* e926c: eor w8, w9, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) ^ ARC_W_R(c, 8)));
  /* e9270: mov w9, #0x69 */
  ARC_W_W(c, 9, UINT64_C(105));
  /* e9274: mul w8, w8, w9 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 9))));
  /* e9278: nop  */
  /* nop: no architectural effect here */
  /* e927c: adr x9, #0x159240 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1413696)));
  /* e9280: and x8, x8, #0xff */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(255)));
  /* e9284: add x19, x9, x8, lsl #6 */
  ARC_X_W(c, 19, (ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 6)));
  /* e9288: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* e928c: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(955024));
  fn1_a2030(c);
  /* e9290: nop  */
  /* nop: no architectural effect here */
  /* e9294: adr x4, #0x753d0 */
  ARC_X_W(c, 4, (arc_image_bases[1] + UINT64_C(480208)));
  /* e9298: mov w0, #0x62 */
  ARC_W_W(c, 0, UINT64_C(98));
  /* e929c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* e92a0: mov w2, #0x80 */
  ARC_W_W(c, 2, UINT64_C(128));
  /* e92a4: mov w3, w21 */
  ARC_W_W(c, 3, ARC_W_R(c, 21));
  /* e92a8: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* e92ac: mov w6, wzr */
  ARC_W_W(c, 6, ARC_W_R(c, 31));
  /* e92b0: bl #0x142500 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(955060));
  fn1_142500(c);
  /* e92b4: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* e92b8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* e92bc: bl #0xe8e50 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(955072));
  fn1_e8e50(c);
  /* e92c0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e92c4: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* e92c8: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e92cc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e92d0: ret  */
  return;
  /* e92d4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(955096));
  fn1_a1454(c);
}

void fn1_eb264(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038891108));
  /* eb264: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eb268: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eb26c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* eb270: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eb274: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* eb278: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963196));
  fn1_142518(c);
  /* eb27c: cbnz w0, #0xeb2f0 */
  if ((ARC_W_R(c, 0)) != 0) goto L_eb2f0;
L_eb280:;
  /* eb280: ldr w8, [x19, #0x88] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(136))));
  /* eb284: tbz w8, #0x1f, #0xeb2a4 */
  if (((ARC_W_R(c, 8)) >> 31 & 1) == 0) goto L_eb2a4;
  /* eb288: add x0, x19, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* eb28c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* eb290: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963220));
  fn1_142530(c);
  /* eb294: cbz w0, #0xeb280 */
  if ((ARC_W_R(c, 0)) == 0) goto L_eb280;
  /* eb298: nop  */
  /* nop: no architectural effect here */
  /* eb29c: adr x1, #0x50514 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(328980)));
  /* eb2a0: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963236));
  fn1_142a40(c);
L_eb2a4:;
  /* eb2a4: orr w9, w8, #0x80000000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) | UINT64_C(2147483648)));
  /* eb2a8: str w9, [x19, #0x88] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(136)), ARC_W_R(c, 9));
  /* eb2ac: cbz w8, #0xeb2cc */
  if ((ARC_W_R(c, 8)) == 0) goto L_eb2cc;
L_eb2b0:;
  /* eb2b0: add x0, x19, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(88)));
  /* eb2b4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* eb2b8: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963260));
  fn1_142530(c);
  /* eb2bc: cbnz w0, #0xeb2e4 */
  if ((ARC_W_R(c, 0)) != 0) goto L_eb2e4;
  /* eb2c0: ldr w8, [x19, #0x88] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(136))));
  /* eb2c4: tst w8, #0x7fffffff */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(2147483647)));
  /* eb2c8: b.ne #0xeb2b0 */
  if (ARC_COND(c, 1)) goto L_eb2b0;
L_eb2cc:;
  /* eb2cc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eb2d0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963284));
  fn1_142560(c);
  /* eb2d4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* eb2d8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eb2dc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eb2e0: ret  */
  return;
L_eb2e4:;
  /* eb2e4: nop  */
  /* nop: no architectural effect here */
  /* eb2e8: adr x1, #0x50514 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(328980)));
  /* eb2ec: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963312));
  fn1_142a40(c);
L_eb2f0:;
  /* eb2f0: nop  */
  /* nop: no architectural effect here */
  /* eb2f4: adr x1, #0x50f67 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331623)));
  /* eb2f8: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963324));
  fn1_142a40(c);
  /* eb2fc: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963328));
  fn1_a1454(c);
  /* eb300: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963332));
  fn1_a1454(c);
  /* eb304: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963336));
  fn1_a1454(c);
  /* eb308: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963340));
  fn1_a1454(c);
  /* eb30c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963344));
  fn1_a1454(c);
}

void fn1_ed1f4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038899188));
  /* ed1f4: bti c */
  /* bti: no architectural effect here */
  /* ed1f8: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* ed1fc: ldr x16, [x8, #0x18] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* ed200: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_efc94(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038910100));
  /* efc94: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* efc98: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* efc9c: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* efca0: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* efca4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* efca8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* efcac: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* efcb0: nop  */
  /* nop: no architectural effect here */
  /* efcb4: adr x23, #0x15dc40 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1432640)));
  /* efcb8: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* efcbc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* efcc0: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* efcc4: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* efcc8: ldr x19, [x8, #0x30] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* efccc: cmp x19, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 23));
  /* efcd0: str x19, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 19));
  /* efcd4: b.eq #0xefce4 */
  if (ARC_COND(c, 0)) goto L_efce4;
  /* efcd8: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* efcdc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* efce0: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(982244));
  fn1_db2e0(c);
L_efce4:;
  /* efce4: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* efce8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* efcec: ldr x1, [x1, #0xb40] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2880))));
  /* efcf0: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(982260));
  fn1_143748(c);
  /* efcf4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* efcf8: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* efcfc: mov w1, #0xa */
  ARC_W_W(c, 1, UINT64_C(10));
  /* efd00: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(982276));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* efd04: mov w22, w0 */
  ARC_W_W(c, 22, ARC_W_R(c, 0));
  /* efd08: cmp x19, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 23));
  /* efd0c: b.eq #0xefd30 */
  if (ARC_COND(c, 0)) goto L_efd30;
  /* efd10: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* efd14: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* efd18: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(982300));
  fn1_bd950(c);
  /* efd1c: cbnz x0, #0xefd30 */
  if ((ARC_X_R(c, 0)) != 0) goto L_efd30;
  /* efd20: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* efd24: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* efd28: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* efd2c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(982320));
  arc_dispatch(c, ARC_X_R(c, 8));
L_efd30:;
  /* efd30: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* efd34: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* efd38: mov w2, w22 */
  ARC_W_W(c, 2, ARC_W_R(c, 22));
  /* efd3c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* efd40: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* efd44: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* efd48: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* efd4c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* efd50: b #0x1434d8 */
  fn1_1434d8(c); return;
  /* efd54: cmp x19, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 23));
  /* efd58: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* efd5c: b.eq #0xefd80 */
  if (ARC_COND(c, 0)) goto L_efd80;
  /* efd60: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* efd64: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* efd68: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(982380));
  fn1_bd950(c);
  /* efd6c: cbnz x0, #0xefd80 */
  if ((ARC_X_R(c, 0)) != 0) goto L_efd80;
  /* efd70: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* efd74: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* efd78: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* efd7c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(982400));
  arc_dispatch(c, ARC_X_R(c, 8));
L_efd80:;
  /* efd80: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* efd84: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(982408));
  fn1_9cc20(c);
}

void fn1_f3c18(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038926360));
  /* f3c18: bti c */
  /* bti: no architectural effect here */
  /* f3c1c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f3c20: ldr x16, [x8, #0x18] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* f3c24: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_f66c4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038937284));
  /* f66c4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f66c8: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f66cc: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* f66d0: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f66d4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f66d8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f66dc: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f66e0: nop  */
  /* nop: no architectural effect here */
  /* f66e4: adr x23, #0x15dc40 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f66e8: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* f66ec: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* f66f0: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f66f4: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* f66f8: ldr x19, [x8, #0x30] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f66fc: cmp x19, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 23));
  /* f6700: str x19, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 19));
  /* f6704: b.eq #0xf6714 */
  if (ARC_COND(c, 0)) goto L_f6714;
  /* f6708: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* f670c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f6710: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1009428));
  fn1_db2e0(c);
L_f6714:;
  /* f6714: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f6718: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* f671c: ldr x1, [x1, #0xb58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2904))));
  /* f6720: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1009444));
  fn1_143748(c);
  /* f6724: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f6728: ldr x8, [x8, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* f672c: mov w1, #0xa */
  ARC_W_W(c, 1, UINT64_C(10));
  /* f6730: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1009460));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f6734: mov w22, w0 */
  ARC_W_W(c, 22, ARC_W_R(c, 0));
  /* f6738: cmp x19, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 23));
  /* f673c: b.eq #0xf6760 */
  if (ARC_COND(c, 0)) goto L_f6760;
  /* f6740: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* f6744: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f6748: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1009484));
  fn1_bd950(c);
  /* f674c: cbnz x0, #0xf6760 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f6760;
  /* f6750: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f6754: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f6758: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f675c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1009504));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f6760:;
  /* f6760: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f6764: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* f6768: mov w2, w22 */
  ARC_W_W(c, 2, ARC_W_R(c, 22));
  /* f676c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f6770: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* f6774: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f6778: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f677c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f6780: b #0x143550 */
  fn1_143550(c); return;
  /* f6784: cmp x19, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 23));
  /* f6788: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f678c: b.eq #0xf67b0 */
  if (ARC_COND(c, 0)) goto L_f67b0;
  /* f6790: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* f6794: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f6798: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1009564));
  fn1_bd950(c);
  /* f679c: cbnz x0, #0xf67b0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f67b0;
  /* f67a0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f67a4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f67a8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f67ac: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1009584));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f67b0:;
  /* f67b0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f67b4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1009592));
  fn1_9cc20(c);
}

void fn1_fb75c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038957916));
  /* fb75c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fb760: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fb764: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* fb768: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* fb76c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fb770: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fb774: adrp x22, #0x151000 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fb778: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fb77c: adrp x20, #0x15d000 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(1429504)));
  /* fb780: ldr x22, [x22, #0xaa8] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 22) + INT64_C(2728))));
  /* fb784: nop  */
  /* nop: no architectural effect here */
  /* fb788: adr x23, #0x15dc40 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1432640)));
  /* fb78c: add x8, x22, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) + UINT64_C(16)));
  /* fb790: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* fb794: nop  */
  /* nop: no architectural effect here */
  /* fb798: adr x8, #0x15dd90 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432976)));
  /* fb79c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* fb7a0: tbz w8, #0, #0xfb90c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_fb90c;
L_fb7a4:;
  /* fb7a4: ldr x8, [x20, #0xd88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(3464))));
  /* fb7a8: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* fb7ac: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* fb7b0: b.eq #0xfb7c8 */
  if (ARC_COND(c, 0)) goto L_fb7c8;
  /* fb7b4: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* fb7b8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* fb7bc: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1030080));
  fn1_db2e0(c);
  /* fb7c0: ldr x20, [x19, #8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* fb7c4: b #0xfb7cc */
  goto L_fb7cc;
L_fb7c8:;
  /* fb7c8: mov x20, x23 */
  ARC_X_W(c, 20, ARC_X_R(c, 23));
L_fb7cc:;
  /* fb7cc: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fb7d0: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* fb7d4: cmp x20, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 23));
  /* fb7d8: ldr x8, [x8, #0xae8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2792))));
  /* fb7dc: stp xzr, xzr, [x19, #0x48] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(72));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* fb7e0: str xzr, [x19, #0x40] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(64)), ARC_X_R(c, 31));
  /* fb7e4: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* fb7e8: strh wzr, [x19, #0xa0] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(160)), ARC_W_R(c, 31));
  /* fb7ec: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* fb7f0: mov w8, #0x20 */
  ARC_W_W(c, 8, UINT64_C(32));
  /* fb7f4: stp q0, q0, [x19, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* fb7f8: str q0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* fb7fc: stp q0, q0, [x19, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(96));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* fb800: str q0, [x19, #0x80] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(128)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(128)) + 8, (c)->q[0].u64[1]);
  /* fb804: stur q0, [x19, #0x8c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(140)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(140)) + 8, (c)->q[0].u64[1]);
  /* fb808: str w8, [x19, #0x9c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(156)), ARC_W_R(c, 8));
  /* fb80c: strb wzr, [x19, #0xa2] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(162)), ARC_W_R(c, 31));
  /* fb810: str x20, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 20));
  /* fb814: b.eq #0xfb824 */
  if (ARC_COND(c, 0)) goto L_fb824;
  /* fb818: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* fb81c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* fb820: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1030180));
  fn1_db2e0(c);
L_fb824:;
  /* fb824: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fb828: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* fb82c: ldr x1, [x1, #0xb70] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2928))));
  /* fb830: bl #0x143760 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1030196));
  fn1_143760(c);
  /* fb834: mov w21, w0 */
  ARC_W_W(c, 21, ARC_W_R(c, 0));
  /* fb838: cmp x20, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 23));
  /* fb83c: b.eq #0xfb850 */
  if (ARC_COND(c, 0)) goto L_fb850;
  /* fb840: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* fb844: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fb848: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1030220));
  fn1_bd950(c);
  /* fb84c: cbz x0, #0xfb8f4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_fb8f4;
L_fb850:;
  /* fb850: tbz w21, #0, #0xfb8c4 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) == 0) goto L_fb8c4;
L_fb854:;
  /* fb854: ldr x20, [x19, #8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* fb858: cmp x20, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 23));
  /* fb85c: str x20, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 20));
  /* fb860: b.eq #0xfb870 */
  if (ARC_COND(c, 0)) goto L_fb870;
  /* fb864: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* fb868: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* fb86c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1030256));
  fn1_db2e0(c);
L_fb870:;
  /* fb870: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fb874: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* fb878: ldr x1, [x1, #0xb70] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2928))));
  /* fb87c: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1030272));
  fn1_143748(c);
  /* fb880: cmp x20, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 23));
  /* fb884: str x0, [x19, #0x80] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(128)), ARC_X_R(c, 0));
  /* fb888: b.eq #0xfb8ac */
  if (ARC_COND(c, 0)) goto L_fb8ac;
  /* fb88c: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* fb890: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fb894: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1030296));
  fn1_bd950(c);
  /* fb898: cbnz x0, #0xfb8ac */
  if ((ARC_X_R(c, 0)) != 0) goto L_fb8ac;
  /* fb89c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* fb8a0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fb8a4: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fb8a8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1030316));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fb8ac:;
  /* fb8ac: ldr x0, [x19, #0x80] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(128))));
  /* fb8b0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* fb8b4: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* fb8b8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1030332));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* fb8bc: and w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) & UINT64_C(1)));
  /* fb8c0: strb w8, [x19, #0xa2] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(162)), ARC_W_R(c, 8));
L_fb8c4:;
  /* fb8c4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* fb8c8: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* fb8cc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fb8d0: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* fb8d4: mov w2, #0x1000 */
  ARC_W_W(c, 2, UINT64_C(4096));
  /* fb8d8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1030364));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* fb8dc: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fb8e0: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* fb8e4: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* fb8e8: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fb8ec: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fb8f0: ret  */
  return;
L_fb8f4:;
  /* fb8f4: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* fb8f8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fb8fc: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fb900: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1030404));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* fb904: tbnz w21, #0, #0xfb854 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) != 0) goto L_fb854;
  /* fb908: b #0xfb8c4 */
  goto L_fb8c4;
L_fb90c:;
  /* fb90c: nop  */
  /* nop: no architectural effect here */
  /* fb910: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* fb914: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1030424));
  fn1_1424b8(c);
  /* fb918: cbz w0, #0xfb7a4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_fb7a4;
  /* fb91c: bl #0x143ac0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1030432));
  fn1_143ac0(c);
  /* fb920: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* fb924: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* fb928: str x8, [x20, #0xd88] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(3464)), ARC_X_R(c, 8));
  /* fb92c: b.eq #0xfb93c */
  if (ARC_COND(c, 0)) goto L_fb93c;
  /* fb930: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* fb934: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* fb938: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1030460));
  fn1_db2e0(c);
L_fb93c:;
  /* fb93c: nop  */
  /* nop: no architectural effect here */
  /* fb940: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* fb944: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1030472));
  fn1_1424d0(c);
  /* fb948: b #0xfb7a4 */
  goto L_fb7a4;
  /* fb94c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fb950: nop  */
  /* nop: no architectural effect here */
  /* fb954: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* fb958: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1030492));
  fn1_1424e8(c);
  /* fb95c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fb960: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1030500));
  fn1_a1454(c);
  /* fb964: cmp x20, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 23));
  /* fb968: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* fb96c: b.eq #0xfb998 */
  if (ARC_COND(c, 0)) goto L_fb998;
  /* fb970: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* fb974: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fb978: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1030524));
  fn1_bd950(c);
  /* fb97c: cbnz x0, #0xfb998 */
  if ((ARC_X_R(c, 0)) != 0) goto L_fb998;
  /* fb980: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* fb984: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fb988: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fb98c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1030544));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* fb990: b #0xfb998 */
  goto L_fb998;
  /* fb994: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
L_fb998:;
  /* fb998: ldr x20, [x19, #8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* fb99c: add x8, x22, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) + UINT64_C(16)));
  /* fb9a0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* fb9a4: cmp x20, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 23));
  /* fb9a8: b.eq #0xfb9cc */
  if (ARC_COND(c, 0)) goto L_fb9cc;
  /* fb9ac: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* fb9b0: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fb9b4: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1030584));
  fn1_bd950(c);
  /* fb9b8: cbnz x0, #0xfb9cc */
  if ((ARC_X_R(c, 0)) != 0) goto L_fb9cc;
  /* fb9bc: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* fb9c0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fb9c4: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fb9c8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1030604));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fb9cc:;
  /* fb9cc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* fb9d0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1030612));
  fn1_9cc20(c);
  /* fb9d4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1030616));
  fn1_a1454(c);
}

void fn1_fee18(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038971928));
  /* fee18: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fee1c: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* fee20: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fee24: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* fee28: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* fee2c: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fee30: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* fee34: adrp x22, #0x151000 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fee38: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* fee3c: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* fee40: ldr x22, [x22, #0xac8] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 22) + INT64_C(2760))));
  /* fee44: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fee48: adrp x24, #0x15d000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1429504)));
  /* fee4c: nop  */
  /* nop: no architectural effect here */
  /* fee50: adr x23, #0x15dc40 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1432640)));
  /* fee54: add x8, x22, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) + UINT64_C(16)));
  /* fee58: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* fee5c: nop  */
  /* nop: no architectural effect here */
  /* fee60: adr x8, #0x15dd90 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432976)));
  /* fee64: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* fee68: tbz w8, #0, #0xfef74 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_fef74;
L_fee6c:;
  /* fee6c: ldr x8, [x24, #0xd88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 24) + INT64_C(3464))));
  /* fee70: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* fee74: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* fee78: b.eq #0xfeecc */
  if (ARC_COND(c, 0)) goto L_feecc;
  /* fee7c: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* fee80: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* fee84: mov w24, #1 */
  ARC_W_W(c, 24, UINT64_C(1));
  /* fee88: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1044108));
  fn1_db2e0(c);
  /* fee8c: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* fee90: str x21, [x19, #0x40] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(64)), ARC_X_R(c, 21));
  /* fee94: ldr x21, [x19, #8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* fee98: adrp x8, #0x14e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1368064)));
  /* fee9c: add x8, x8, #0x1b0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(432)));
  /* feea0: cmp x21, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 23));
  /* feea4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* feea8: str x21, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 21));
  /* feeac: stp q0, q0, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* feeb0: str q0, [x19, #0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)) + 8, (c)->q[0].u64[1]);
  /* feeb4: b.eq #0xfeef8 */
  if (ARC_COND(c, 0)) goto L_feef8;
  /* feeb8: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* feebc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* feec0: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1044164));
  fn1_db2e0(c);
  /* feec4: mov w24, wzr */
  ARC_W_W(c, 24, ARC_W_R(c, 31));
  /* feec8: b #0xfeefc */
  goto L_feefc;
L_feecc:;
  /* feecc: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* feed0: adrp x8, #0x14e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1368064)));
  /* feed4: add x8, x8, #0x1b0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(432)));
  /* feed8: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* feedc: mov w24, #1 */
  ARC_W_W(c, 24, UINT64_C(1));
  /* feee0: str x21, [x19, #0x40] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(64)), ARC_X_R(c, 21));
  /* feee4: mov x21, x23 */
  ARC_X_W(c, 21, ARC_X_R(c, 23));
  /* feee8: str x23, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 23));
  /* feeec: stp q0, q0, [x19, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* feef0: str q0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* feef4: b #0xfeefc */
  goto L_feefc;
L_feef8:;
  /* feef8: mov x21, x23 */
  ARC_X_W(c, 21, ARC_X_R(c, 23));
L_feefc:;
  /* feefc: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fef00: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* fef04: ldr x1, [x1, #0xbc0] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3008))));
  /* fef08: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1044236));
  fn1_143748(c);
  /* fef0c: tbnz w24, #0, #0xfef40 */
  if (((ARC_W_R(c, 24)) >> 0 & 1) != 0) goto L_fef40;
  /* fef10: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* fef14: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* fef18: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fef1c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1044256));
  fn1_bd950(c);
  /* fef20: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* fef24: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* fef28: cbnz x8, #0xfef40 */
  if ((ARC_X_R(c, 8)) != 0) goto L_fef40;
  /* fef2c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* fef30: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* fef34: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fef38: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1044284));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* fef3c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
L_fef40:;
  /* fef40: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* fef44: stp x0, x20, [x19, #0x48] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(72));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* fef48: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* fef4c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1044304));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* fef50: and w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) & UINT64_C(1)));
  /* fef54: strb w8, [x19, #0x58] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(88)), ARC_W_R(c, 8));
  /* fef58: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fef5c: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* fef60: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* fef64: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fef68: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* fef6c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fef70: ret  */
  return;
L_fef74:;
  /* fef74: nop  */
  /* nop: no architectural effect here */
  /* fef78: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* fef7c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1044352));
  fn1_1424b8(c);
  /* fef80: cbz w0, #0xfee6c */
  if ((ARC_W_R(c, 0)) == 0) goto L_fee6c;
  /* fef84: bl #0x143ac0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1044360));
  fn1_143ac0(c);
  /* fef88: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* fef8c: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* fef90: str x8, [x24, #0xd88] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(3464)), ARC_X_R(c, 8));
  /* fef94: b.eq #0xfefa4 */
  if (ARC_COND(c, 0)) goto L_fefa4;
  /* fef98: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* fef9c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* fefa0: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1044388));
  fn1_db2e0(c);
L_fefa4:;
  /* fefa4: nop  */
  /* nop: no architectural effect here */
  /* fefa8: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* fefac: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1044400));
  fn1_1424d0(c);
  /* fefb0: b #0xfee6c */
  goto L_fee6c;
  /* fefb4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fefb8: nop  */
  /* nop: no architectural effect here */
  /* fefbc: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* fefc0: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1044420));
  fn1_1424e8(c);
  /* fefc4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fefc8: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1044428));
  fn1_a1454(c);
  /* fefcc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* fefd0: tbnz w24, #0, #0xfeff4 */
  if (((ARC_W_R(c, 24)) >> 0 & 1) != 0) goto L_feff4;
  /* fefd4: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* fefd8: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fefdc: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1044448));
  fn1_bd950(c);
  /* fefe0: cbnz x0, #0xfeff4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_feff4;
  /* fefe4: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* fefe8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* fefec: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* feff0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1044468));
  arc_dispatch(c, ARC_X_R(c, 8));
L_feff4:;
  /* feff4: ldr x21, [x19, #8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* feff8: add x8, x22, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) + UINT64_C(16)));
  /* feffc: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* ff000: cmp x21, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 23));
  /* ff004: b.eq #0xff028 */
  if (ARC_COND(c, 0)) goto L_ff028;
  /* ff008: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* ff00c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ff010: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1044500));
  fn1_bd950(c);
  /* ff014: cbnz x0, #0xff028 */
  if ((ARC_X_R(c, 0)) != 0) goto L_ff028;
  /* ff018: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* ff01c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ff020: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ff024: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1044520));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ff028:;
  /* ff028: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ff02c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1044528));
  fn1_9cc20(c);
}

void fn1_10c068(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039025768));
  /* 10c068: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 10c06c: sub sp, sp, #0x130 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(304)));
  /* 10c070: stp x29, x30, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 10c074: stp x28, x23, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 10c078: stp x22, x21, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 10c07c: stp x20, x19, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 10c080: add x29, sp, #0xf0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(240)));
  /* 10c084: ldr w9, [x2, #8] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 2) + INT64_C(8))));
  /* 10c088: mov w8, #0x25 */
  ARC_W_W(c, 8, UINT64_C(37));
  /* 10c08c: mov x22, x4 */
  ARC_X_W(c, 22, ARC_X_R(c, 4));
  /* 10c090: mov w19, w3 */
  ARC_W_W(c, 19, ARC_W_R(c, 3));
  /* 10c094: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 10c098: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 10c09c: stur x8, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 8));
  /* 10c0a0: sub x8, x29, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 10c0a4: tbnz w9, #9, #0x10c0b0 */
  if (((ARC_W_R(c, 9)) >> 9 & 1) != 0) goto L_10c0b0;
  /* 10c0a8: orr x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(1)));
  /* 10c0ac: b #0x10c0bc */
  goto L_10c0bc;
L_10c0b0:;
  /* 10c0b0: mov w10, #0x23 */
  ARC_W_W(c, 10, UINT64_C(35));
  /* 10c0b4: orr x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(2)));
  /* 10c0b8: sturb w10, [x29, #-7] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-7)), ARC_W_R(c, 10));
L_10c0bc:;
  /* 10c0bc: mov w10, #0x4a */
  ARC_W_W(c, 10, UINT64_C(74));
  /* 10c0c0: mov w11, #0x6c6c */
  ARC_W_W(c, 11, UINT64_C(27756));
  /* 10c0c4: and w10, w9, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) & ARC_W_R(c, 10)));
  /* 10c0c8: strh w11, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 11));
  /* 10c0cc: cmp w10, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(64));
  /* 10c0d0: b.eq #0x10c0f0 */
  if (ARC_COND(c, 0)) goto L_10c0f0;
  /* 10c0d4: cmp w10, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(8));
  /* 10c0d8: b.ne #0x10c0f8 */
  if (ARC_COND(c, 1)) goto L_10c0f8;
  /* 10c0dc: tst w9, #0x4000 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(16384)));
  /* 10c0e0: mov w9, #0x58 */
  ARC_W_W(c, 9, UINT64_C(88));
  /* 10c0e4: mov w10, #0x78 */
  ARC_W_W(c, 10, UINT64_C(120));
  /* 10c0e8: csel w9, w10, w9, eq */
  ARC_W_W(c, 9, (ARC_COND(c, 0) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* 10c0ec: b #0x10c0fc */
  goto L_10c0fc;
L_10c0f0:;
  /* 10c0f0: mov w9, #0x6f */
  ARC_W_W(c, 9, UINT64_C(111));
  /* 10c0f4: b #0x10c0fc */
  goto L_10c0fc;
L_10c0f8:;
  /* 10c0f8: mov w9, #0x75 */
  ARC_W_W(c, 9, UINT64_C(117));
L_10c0fc:;
  /* 10c0fc: strb w9, [x8, #2] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(2)), ARC_W_R(c, 9));
  /* 10c100: nop  */
  /* nop: no architectural effect here */
  /* 10c104: adr x8, #0x15dc38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10c108: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 10c10c: adrp x23, #0x15d000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 10c110: tbz w8, #0, #0x10c20c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10c20c;
L_10c114:;
  /* 10c114: ldr x2, [x23, #0xc30] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 23) + INT64_C(3120))));
  /* 10c118: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 10c11c: sub x3, x29, #8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 10c120: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* 10c124: mov x4, x22 */
  ARC_X_W(c, 4, ARC_X_R(c, 22));
  /* 10c128: sub x22, x29, #0x20 */
  ARC_X_W(c, 22, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 10c12c: bl #0x136860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1098032));
  fn1_136860(c);
  /* 10c130: ldr w8, [x20, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(8))));
  /* 10c134: mov w9, #0xb0 */
  ARC_W_W(c, 9, UINT64_C(176));
  /* 10c138: add x22, x22, w0, sxtw */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + ((uint64_t)(int64_t)(int32_t)(ARC_W_R(c, 0)))));
  /* 10c13c: and w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & ARC_W_R(c, 9)));
  /* 10c140: mov x23, x22 */
  ARC_X_W(c, 23, ARC_X_R(c, 22));
  /* 10c144: cmp w8, #0x20 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(32));
  /* 10c148: b.eq #0x10c1a4 */
  if (ARC_COND(c, 0)) goto L_10c1a4;
  /* 10c14c: cmp w8, #0x10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(16));
  /* 10c150: b.ne #0x10c1a0 */
  if (ARC_COND(c, 1)) goto L_10c1a0;
  /* 10c154: ldurb w8, [x29, #-0x20] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 10c158: cmp w8, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(45));
  /* 10c15c: b.eq #0x10c168 */
  if (ARC_COND(c, 0)) goto L_10c168;
  /* 10c160: cmp w8, #0x2b */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(43));
  /* 10c164: b.ne #0x10c174 */
  if (ARC_COND(c, 1)) goto L_10c174;
L_10c168:;
  /* 10c168: sub x8, x29, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 10c16c: orr x23, x8, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 8) | UINT64_C(1)));
  /* 10c170: b #0x10c1a4 */
  goto L_10c1a4;
L_10c174:;
  /* 10c174: cmp w0, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(2));
  /* 10c178: b.lt #0x10c1a0 */
  if (ARC_COND(c, 11)) goto L_10c1a0;
  /* 10c17c: cmp w8, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(48));
  /* 10c180: b.ne #0x10c1a0 */
  if (ARC_COND(c, 1)) goto L_10c1a0;
  /* 10c184: ldurb w8, [x29, #-0x1f] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-31))));
  /* 10c188: orr w8, w8, #0x20 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(32)));
  /* 10c18c: cmp w8, #0x78 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(120));
  /* 10c190: b.ne #0x10c1a0 */
  if (ARC_COND(c, 1)) goto L_10c1a0;
  /* 10c194: sub x8, x29, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 10c198: orr x23, x8, #2 */
  ARC_X_W(c, 23, (ARC_X_R(c, 8) | UINT64_C(2)));
  /* 10c19c: b #0x10c1a4 */
  goto L_10c1a4;
L_10c1a0:;
  /* 10c1a0: sub x23, x29, #0x20 */
  ARC_X_W(c, 23, (ARC_X_R(c, 29) - UINT64_C(32)));
L_10c1a4:;
  /* 10c1a4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 10c1a8: add x1, x20, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(48)));
  /* 10c1ac: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1098160));
  fn1_143460(c);
  /* 10c1b0: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 10c1b4: add x3, sp, #0x1c */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(28)));
  /* 10c1b8: add x4, sp, #0x10 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(16)));
  /* 10c1bc: add x5, sp, #8 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(8)));
  /* 10c1c0: mov x6, sp */
  ARC_X_W(c, 6, (c)->sp);
  /* 10c1c4: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 10c1c8: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 10c1cc: bl #0x143928 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1098192));
  fn1_143928(c);
  /* 10c1d0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 10c1d4: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1098200));
  fn1_143478(c);
  /* 10c1d8: ldp x3, x2, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 3, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 10c1dc: add x1, sp, #0x1c */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(28)));
  /* 10c1e0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 10c1e4: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* 10c1e8: mov w5, w19 */
  ARC_W_W(c, 5, ARC_W_R(c, 19));
  /* 10c1ec: bl #0x10cdc0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1098224));
  fn1_10cdc0(c);
  /* 10c1f0: ldp x20, x19, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 10c1f4: ldp x22, x21, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 10c1f8: ldp x28, x23, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 10c1fc: ldp x29, x30, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 10c200: add sp, sp, #0x130 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(304)));
  /* 10c204: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 10c208: ret  */
  return;
L_10c20c:;
  /* 10c20c: nop  */
  /* nop: no architectural effect here */
  /* 10c210: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10c214: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1098264));
  fn1_1424b8(c);
  /* 10c218: cbz w0, #0x10c114 */
  if ((ARC_W_R(c, 0)) == 0) goto L_10c114;
  /* 10c21c: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 10c220: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 10c224: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 10c228: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 10c22c: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1098288));
  fn1_1441e0(c);
  /* 10c230: str x0, [x23, #0xc30] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 10c234: nop  */
  /* nop: no architectural effect here */
  /* 10c238: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10c23c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1098304));
  fn1_1424d0(c);
  /* 10c240: b #0x10c114 */
  goto L_10c114;
  /* 10c244: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10c248: nop  */
  /* nop: no architectural effect here */
  /* 10c24c: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10c250: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1098324));
  fn1_1424e8(c);
  /* 10c254: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10c258: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1098332));
  fn1_9cc20(c);
  /* 10c25c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10c260: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 10c264: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1098344));
  fn1_143478(c);
  /* 10c268: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10c26c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1098352));
  fn1_9cc20(c);
}

void fn1_113bb4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057332));
  /* 113bb4: bti c */
  /* bti: no architectural effect here */
  /* 113bb8: mov w0, #0xff */
  ARC_W_W(c, 0, UINT64_C(255));
  /* 113bbc: ret  */
  return;
}

void fn1_1140e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039058660));
  /* 1140e4: bti c */
  /* bti: no architectural effect here */
  /* 1140e8: mov x9, x0 */
  ARC_X_W(c, 9, ARC_X_R(c, 0));
  /* 1140ec: ldrb w10, [x9, #0x18]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(24));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(24));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* 1140f0: tbnz w10, #0, #0x114108 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_114108;
  /* 1140f4: ldr q0, [x9] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 9)), arc_ld64(ARC_X_R(c, 9) + 8));
  /* 1140f8: ldr x9, [x9, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(16))));
  /* 1140fc: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* 114100: str x9, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 9));
  /* 114104: ret  */
  return;
L_114108:;
  /* 114108: ldp x2, x1, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 11410c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 114110: b #0xda588 */
  fn1_da588(c); return;
}

void fn1_12011c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039107868));
  /* 12011c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 120120: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 120124: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 120128: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 12012c: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 120130: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 120134: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 120138: adrp x23, #0x151000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 12013c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 120140: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 120144: ldr x23, [x23, #0xc18] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 23) + INT64_C(3096))));
  /* 120148: ldar x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 12014c: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 120150: b.eq #0x12020c */
  if (ARC_COND(c, 0)) goto L_12020c;
  /* 120154: nop  */
  /* nop: no architectural effect here */
  /* 120158: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 12015c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1180000));
  fn1_142518(c);
  /* 120160: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 120164: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 120168: b.ne #0x120194 */
  if (ARC_COND(c, 1)) goto L_120194;
  /* 12016c: nop  */
  /* nop: no architectural effect here */
  /* 120170: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 120174: nop  */
  /* nop: no architectural effect here */
  /* 120178: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_12017c:;
  /* 12017c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 120180: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 120184: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1180040));
  fn1_142530(c);
  /* 120188: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 12018c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 120190: b.eq #0x12017c */
  if (ARC_COND(c, 0)) goto L_12017c;
L_120194:;
  /* 120194: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 120198: cbz x8, #0x1201ac */
  if ((ARC_X_R(c, 8)) == 0) goto L_1201ac;
  /* 12019c: nop  */
  /* nop: no architectural effect here */
  /* 1201a0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1201a4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1180072));
  fn1_142560(c);
  /* 1201a8: b #0x12020c */
  goto L_12020c;
L_1201ac:;
  /* 1201ac: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 1201b0: str x23, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 23));
  /* 1201b4: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 1201b8: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 1201bc: nop  */
  /* nop: no architectural effect here */
  /* 1201c0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1201c4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1180104));
  fn1_142560(c);
  /* 1201c8: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1201cc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1201d0: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 1201d4: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1180120));
  fn1_a2030(c);
  /* 1201d8: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 1201dc: str w8, [x23, #8] */
  arc_st32((ARC_X_R(c, 23) + INT64_C(8)), ARC_W_R(c, 8));
  /* 1201e0: nop  */
  /* nop: no architectural effect here */
  /* 1201e4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1201e8: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1180140));
  fn1_142518(c);
  /* 1201ec: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 1201f0: stlr x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 1201f4: nop  */
  /* nop: no architectural effect here */
  /* 1201f8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1201fc: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1180160));
  fn1_142560(c);
  /* 120200: nop  */
  /* nop: no architectural effect here */
  /* 120204: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 120208: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1180172));
  fn1_142578(c);
L_12020c:;
  /* 12020c: ldrsw x8, [x23, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 23) + INT64_C(8)))));
  /* 120210: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 120214: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 120218: sub x22, x8, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 12021c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1180192));
  fn1_db2e0(c);
  /* 120220: mov x21, x20 */
  ARC_X_W(c, 21, ARC_X_R(c, 20));
  /* 120224: ldp x8, x9, [x21, #0x10]! */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 120228: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 12022c: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 120230: cmp x10, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 22));
  /* 120234: b.hi #0x120260 */
  if (ARC_COND(c, 8)) goto L_120260;
  /* 120238: add x9, x22, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* 12023c: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 120240: b.ls #0x120254 */
  if (ARC_COND(c, 9)) goto L_120254;
  /* 120244: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 120248: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1180236));
  fn1_1352bc(c);
  /* 12024c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 120250: b #0x120260 */
  goto L_120260;
L_120254:;
  /* 120254: b.hs #0x120260 */
  if (ARC_COND(c, 2)) goto L_120260;
  /* 120258: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 12025c: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_120260:;
  /* 120260: ldr x20, [x8, x22, lsl #3] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3))));
  /* 120264: cbz x20, #0x120288 */
  if ((ARC_X_R(c, 20)) == 0) goto L_120288;
  /* 120268: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 12026c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 120270: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1180276));
  fn1_bd950(c);
  /* 120274: cbnz x0, #0x120288 */
  if ((ARC_X_R(c, 0)) != 0) goto L_120288;
  /* 120278: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 12027c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 120280: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 120284: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1180296));
  arc_dispatch(c, ARC_X_R(c, 8));
L_120288:;
  /* 120288: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 12028c: str x19, [x8, x22, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3)), ARC_X_R(c, 19));
  /* 120290: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 120294: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 120298: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 12029c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1202a0: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1202a4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1202a8: ret  */
  return;
  /* 1202ac: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1202b0: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 1202b4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 1202b8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1180348));
  fn1_bd950(c);
  /* 1202bc: cbnz x0, #0x1202e4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_1202e4;
  /* 1202c0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1202c4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1202c8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 1202cc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1180368));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1202d0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1202d4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1180376));
  fn1_9cc20(c);
  /* 1202d8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1202dc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1202e0: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1180388));
  fn1_d2a78(c);
L_1202e4:;
  /* 1202e4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1202e8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1180396));
  fn1_9cc20(c);
}

void fn1_126b34(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039135028));
  /* 126b34: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 126b38: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 126b3c: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* 126b40: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 126b44: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 126b48: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 126b4c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 126b50: cmp x1, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 2));
  /* 126b54: b.eq #0x126bd0 */
  if (ARC_COND(c, 0)) goto L_126bd0;
  /* 126b58: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 126b5c: nop  */
  /* nop: no architectural effect here */
  /* 126b60: adr x21, #0x15dc38 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 126b64: adrp x22, #0x15d000 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 126b68: b #0x126b90 */
  goto L_126b90;
L_126b6c:;
  /* 126b6c: sub w8, w23, #0x7b */
  ARC_W_W(c, 8, (ARC_W_R(c, 23) - UINT64_C(123)));
  /* 126b70: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 126b74: and w8, w8, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(255)));
  /* 126b78: sub w10, w9, #0x20 */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) - UINT64_C(32)));
  /* 126b7c: cmp w8, #0xe6 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(230));
  /* 126b80: csel w23, w9, w10, lo */
  ARC_W_W(c, 23, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
L_126b84:;
  /* 126b84: strb w23, [x19], #1 */
  { const uint64_t _a = ARC_X_R(c, 19);
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 23));
  }
  /* 126b88: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* 126b8c: b.eq #0x126bd0 */
  if (ARC_COND(c, 0)) goto L_126bd0;
L_126b90:;
  /* 126b90: ldrsb w23, [x19] */
  ARC_W_W(c, 23, ((int32_t)(int8_t)arc_ld8(ARC_X_R(c, 19))));
  /* 126b94: tbnz w23, #0x1f, #0x126b84 */
  if (((ARC_W_R(c, 23)) >> 31 & 1) != 0) goto L_126b84;
  /* 126b98: ldarb w8, [x21] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 21)));
  /* 126b9c: tbnz w8, #0, #0x126b6c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_126b6c;
  /* 126ba0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 126ba4: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1207208));
  fn1_1424b8(c);
  /* 126ba8: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 126bac: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 126bb0: cbz w0, #0x126b6c */
  if ((ARC_W_R(c, 0)) == 0) goto L_126b6c;
  /* 126bb4: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 126bb8: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 126bbc: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1207232));
  fn1_1441e0(c);
  /* 126bc0: str x0, [x22, #0xc30] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 126bc4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 126bc8: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1207244));
  fn1_1424d0(c);
  /* 126bcc: b #0x126b6c */
  goto L_126b6c;
L_126bd0:;
  /* 126bd0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 126bd4: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 126bd8: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 126bdc: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 126be0: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 126be4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 126be8: ret  */
  return;
  /* 126bec: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 126bf0: nop  */
  /* nop: no architectural effect here */
  /* 126bf4: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 126bf8: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1207292));
  fn1_1424e8(c);
  /* 126bfc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 126c00: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1207300));
  fn1_9cc20(c);
}

void fn1_1291f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039144944));
  /* 1291f0: bti c */
  /* bti: no architectural effect here */
  /* 1291f4: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 1291f8: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 1291fc: mov x2, x4 */
  ARC_X_W(c, 2, ARC_X_R(c, 4));
  /* 129200: mov w3, #0x10ffff */
  ARC_W_W(c, 3, UINT64_C(1114111));
  /* 129204: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 129208: b #0x128eb8 */
  fn1_128eb8(c); return;
}

void fn1_12ab64(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039151460));
  /* 12ab64: bti c */
  /* bti: no architectural effect here */
  /* 12ab68: sub x8, x3, x2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) - ARC_X_R(c, 2)));
  /* 12ab6c: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* 12ab70: b.lt #0x12ab98 */
  if (ARC_COND(c, 11)) goto L_12ab98;
  /* 12ab74: ldr w8, [x0, #0x18] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12ab78: tbz w8, #2, #0x12ab98 */
  if (((ARC_W_R(c, 8)) >> 2 & 1) == 0) goto L_12ab98;
  /* 12ab7c: ldrb w8, [x2] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 2)));
  /* 12ab80: cmp w8, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(255));
  /* 12ab84: b.ne #0x12ab98 */
  if (ARC_COND(c, 1)) goto L_12ab98;
  /* 12ab88: ldrb w8, [x2, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 2) + INT64_C(1))));
  /* 12ab8c: cmp w8, #0xfe */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(254));
  /* 12ab90: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 12ab94: add x2, x2, w8, uxtw #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 1)));
L_12ab98:;
  /* 12ab98: sub x8, x3, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) - UINT64_C(1)));
  /* 12ab9c: cmp x2, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 8));
  /* 12aba0: b.hs #0x12abe4 */
  if (ARC_COND(c, 2)) goto L_12abe4;
  /* 12aba4: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 12aba8: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
L_12abac:;
  /* 12abac: cmp x5, x6 */
  (void)arc_sub64(c, ARC_X_R(c, 5), ARC_X_R(c, 6));
  /* 12abb0: b.hs #0x12abe4 */
  if (ARC_COND(c, 2)) goto L_12abe4;
  /* 12abb4: ldrb w10, [x2, #1] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 2) + INT64_C(1))));
  /* 12abb8: and w11, w10, #0xf8 */
  ARC_W_W(c, 11, (ARC_W_R(c, 10) & UINT64_C(248)));
  /* 12abbc: cmp w11, #0xd8 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(216));
  /* 12abc0: b.eq #0x12abec */
  if (ARC_COND(c, 0)) goto L_12abec;
  /* 12abc4: ldrb w11, [x2] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 2)));
  /* 12abc8: orr w10, w11, w10, lsl #8 */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) | ((uint32_t)(ARC_W_R(c, 10)) << 8)));
  /* 12abcc: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 12abd0: b.lo #0x12abec */
  if (ARC_COND(c, 3)) goto L_12abec;
  /* 12abd4: add x2, x2, #2 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2)));
  /* 12abd8: strh w10, [x5], #2 */
  { const uint64_t _a = ARC_X_R(c, 5);
    ARC_X_W(c, 5, ARC_X_R(c, 5) + INT64_C(2));
    arc_st16(_a, ARC_W_R(c, 10));
  }
  /* 12abdc: cmp x2, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 8));
  /* 12abe0: b.lo #0x12abac */
  if (ARC_COND(c, 3)) goto L_12abac;
L_12abe4:;
  /* 12abe4: cmp x2, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 3));
  /* 12abe8: cset w0, lo */
  ARC_W_W(c, 0, (ARC_COND(c, 3) ? 1 : 0));
L_12abec:;
  /* 12abec: str x2, [x4] */
  arc_st64(ARC_X_R(c, 4), ARC_X_R(c, 2));
  /* 12abf0: str x5, [x7] */
  arc_st64(ARC_X_R(c, 7), ARC_X_R(c, 5));
  /* 12abf4: ret  */
  return;
}

void fn1_12bedc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039156444));
  /* 12bedc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12bee0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12bee4: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12bee8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12beec: mov w8, #0x2c2e */
  ARC_W_W(c, 8, UINT64_C(11310));
  /* 12bef0: str xzr, [x0, #0x28] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(40)), ARC_X_R(c, 31));
  /* 12bef4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12bef8: strh w8, [x0, #0x10] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(16)), ARC_W_R(c, 8));
  /* 12befc: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 12bf00: sub x9, x2, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 2) - UINT64_C(1)));
  /* 12bf04: ldr x8, [x8, #0xcd0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3280))));
  /* 12bf08: stp xzr, xzr, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 12bf0c: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 12bf10: stp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 12bf14: bl #0x143b80 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1228568));
  fn1_143b80(c);
  /* 12bf18: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12bf1c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12bf20: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12bf24: ret  */
  return;
  /* 12bf28: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 12bf2c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12bf30: bl #0x143b50 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1228596));
  fn1_143b50(c);
  /* 12bf34: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12bf38: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1228604));
  fn1_9cc20(c);
}

void fn1_1347b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039191472));
  /* 1347b0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1347b4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1347b8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1347bc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1347c0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1347c4: bl #0x143fe8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1263560));
  fn1_143fe8(c);
  /* 1347c8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1347cc: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* 1347d0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1347d4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1347d8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1347dc: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_134f78(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039193464));
  /* 134f78: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 134f7c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 134f80: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 134f84: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 134f88: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 134f8c: bl #0x134eb4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1265552));
  fn1_134eb4(c);
  /* 134f90: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 134f94: mov w1, #0x88 */
  ARC_W_W(c, 1, UINT64_C(136));
  /* 134f98: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 134f9c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 134fa0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 134fa4: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_137ce8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039205096));
  /* 137ce8: bti c */
  /* bti: no architectural effect here */
  /* 137cec: ldr w8, [x0, #0x40] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(64))));
  /* 137cf0: tbz w8, #2, #0x137d0c */
  if (((ARC_W_R(c, 8)) >> 2 & 1) == 0) goto L_137d0c;
  /* 137cf4: tst w1, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 1) & UINT64_C(1)));
  /* 137cf8: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* 137cfc: and w8, w8, #0xfffffff7 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(4294967287)));
  /* 137d00: csel w9, w9, wzr, ne */
  ARC_W_W(c, 9, (ARC_COND(c, 1) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 31)));
  /* 137d04: orr w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 9)));
  /* 137d08: str w8, [x0, #0x40] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(64)), ARC_W_R(c, 8));
L_137d0c:;
  /* 137d0c: ret  */
  return;
}

void fn1_13b29c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039218844));
  /* 13b29c: bti c */
  /* bti: no architectural effect here */
  /* 13b2a0: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 13b2a4: add x8, x8, #0x648 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1608)));
  /* 13b2a8: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 13b2ac: ret  */
  return;
}

void fn1_1423c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039247808));
  /* 1423c0: bti c */
  /* bti: no architectural effect here */
  /* 1423c4: stp x16, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 16));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1423c8: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1423cc: ldr x17, [x16, #0xe78] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3704))));
  /* 1423d0: add x16, x16, #0xe78 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3704)));
  /* 1423d4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1423d8: nop  */
  /* nop: no architectural effect here */
  /* 1423dc: nop  */
  /* nop: no architectural effect here */
}

void fn1_1429c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249352));
  /* 1429c8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1429cc: ldr x17, [x16, #0x78] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(120))));
  /* 1429d0: add x16, x16, #0x78 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(120)));
  /* 1429d4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1429d8: nop  */
  /* nop: no architectural effect here */
  /* 1429dc: nop  */
  /* nop: no architectural effect here */
}

void fn1_142fc8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250888));
  /* 142fc8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142fcc: ldr x17, [x16, #0x278] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(632))));
  /* 142fd0: add x16, x16, #0x278 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(632)));
  /* 142fd4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142fd8: nop  */
  /* nop: no architectural effect here */
  /* 142fdc: nop  */
  /* nop: no architectural effect here */
}

void fn1_1435c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252424));
  /* 1435c8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1435cc: ldr x17, [x16, #0x478] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1144))));
  /* 1435d0: add x16, x16, #0x478 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1144)));
  /* 1435d4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1435d8: nop  */
  /* nop: no architectural effect here */
  /* 1435dc: nop  */
  /* nop: no architectural effect here */
}

void fn1_143bc8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253960));
  /* 143bc8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143bcc: ldr x17, [x16, #0x678] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1656))));
  /* 143bd0: add x16, x16, #0x678 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1656)));
  /* 143bd4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143bd8: nop  */
  /* nop: no architectural effect here */
  /* 143bdc: nop  */
  /* nop: no architectural effect here */
}

void fn1_1441c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255496));
  /* 1441c8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1441cc: ldr x17, [x16, #0x878] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2168))));
  /* 1441d0: add x16, x16, #0x878 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2168)));
  /* 1441d4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1441d8: nop  */
  /* nop: no architectural effect here */
  /* 1441dc: nop  */
  /* nop: no architectural effect here */
}

void fn1_1447c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039257032));
  /* 1447c8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1447cc: ldr x17, [x16, #0xa78] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2680))));
  /* 1447d0: add x16, x16, #0xa78 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2680)));
  /* 1447d4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1447d8: nop  */
  /* nop: no architectural effect here */
  /* 1447dc: nop  */
  /* nop: no architectural effect here */
}

