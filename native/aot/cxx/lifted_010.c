#include "lifted.h"

void fn1_9cc20(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038570016));
  /* 9cc20: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 9cc24: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 9cc28: stp x28, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 9cc2c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 9cc30: sub sp, sp, #0x480 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(1152)));
  /* 9cc34: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 9cc38: add x0, sp, #0x270 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(624)));
  /* 9cc3c: bl #0xa0810 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(642112));
  fn1_a0810(c);
  /* 9cc40: ldr x3, [x19, #0x10] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 9cc44: cbnz x3, #0x9cc5c */
  if ((ARC_X_R(c, 3)) != 0) goto L_9cc5c;
  /* 9cc48: add x0, sp, #0x270 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(624)));
  /* 9cc4c: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 9cc50: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 9cc54: bl #0x9c9c8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(642136));
  fn1_9c9c8(c);
  /* 9cc58: b #0x9cc70 */
  goto L_9cc70;
L_9cc5c:;
  /* 9cc5c: ldr x4, [x19, #0x18] */
  ARC_X_W(c, 4, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* 9cc60: add x0, sp, #0x270 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(624)));
  /* 9cc64: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 9cc68: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 9cc6c: bl #0x9cca4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(642160));
  fn1_9cca4(c);
L_9cc70:;
  /* 9cc70: adrp x19, #0x151000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9cc74: nop  */
  /* nop: no architectural effect here */
  /* 9cc78: adr x1, #0x4f83f */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(325695)));
  /* 9cc7c: ldr x19, [x19, #0x998] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(2456))));
  /* 9cc80: adrp x2, #0x51000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(331776)));
  /* 9cc84: add x2, x2, #0xd50 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(3408)));
  /* 9cc88: adrp x3, #0x4f000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(323584)));
  /* 9cc8c: add x3, x3, #0xd85 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(3461)));
  /* 9cc90: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9cc94: bl #0x144a38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(642200));
  fn1_144a38(c);
  /* 9cc98: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9cc9c: bl #0x143730 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(642208));
  fn1_143730(c);
  /* 9cca0: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(642212));
  fn1_1427b8(c);
}

void fn1_a12c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038588104));
  /* a12c8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a12cc: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a12d0: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* a12d4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a12d8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a12dc: mov w21, #1 */
  ARC_W_W(c, 21, UINT64_C(1));
  /* a12e0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a12e4: stlrb w21, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 21));
  /* a12e8: nop  */
  /* nop: no architectural effect here */
  /* a12ec: adr x0, #0x157658 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1406552)));
  /* a12f0: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(660212));
  fn1_142518(c);
  /* a12f4: cbnz w0, #0xa1338 */
  if ((ARC_W_R(c, 0)) != 0) goto L_a1338;
  /* a12f8: ldrb w20, [x19, #1] */
  ARC_W_W(c, 20, arc_ld8((ARC_X_R(c, 19) + INT64_C(1))));
  /* a12fc: strb w21, [x19, #1] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(1)), ARC_W_R(c, 21));
  /* a1300: nop  */
  /* nop: no architectural effect here */
  /* a1304: adr x0, #0x157658 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1406552)));
  /* a1308: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(660236));
  fn1_142560(c);
  /* a130c: cbnz w0, #0xa1344 */
  if ((ARC_W_R(c, 0)) != 0) goto L_a1344;
  /* a1310: tbz w20, #2, #0xa1324 */
  if (((ARC_W_R(c, 20)) >> 2 & 1) == 0) goto L_a1324;
  /* a1314: nop  */
  /* nop: no architectural effect here */
  /* a1318: adr x0, #0x157680 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1406592)));
  /* a131c: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(660256));
  fn1_142578(c);
  /* a1320: cbnz w0, #0xa1358 */
  if ((ARC_W_R(c, 0)) != 0) goto L_a1358;
L_a1324:;
  /* a1324: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a1328: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* a132c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a1330: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a1334: ret  */
  return;
L_a1338:;
  /* a1338: nop  */
  /* nop: no architectural effect here */
  /* a133c: adr x0, #0x4ff9b */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(327579)));
  /* a1340: b #0xa1360 */
  goto L_a1360;
L_a1344:;
  /* a1344: nop  */
  /* nop: no architectural effect here */
  /* a1348: adr x0, #0x4f88b */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(325771)));
  /* a134c: nop  */
  /* nop: no architectural effect here */
  /* a1350: adr x1, #0x5047d */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(328829)));
  /* a1354: bl #0xa23d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(660312));
  fn1_a23d8(c);
L_a1358:;
  /* a1358: nop  */
  /* nop: no architectural effect here */
  /* a135c: adr x0, #0x51f52 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(335698)));
L_a1360:;
  /* a1360: nop  */
  /* nop: no architectural effect here */
  /* a1364: adr x1, #0x5047d */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(328829)));
  /* a1368: bl #0xa23d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(660332));
  fn1_a23d8(c);
  /* a136c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(660336));
  fn1_a1454(c);
}

void fn1_a2778(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038593400));
  /* a2778: bti c */
  /* bti: no architectural effect here */
  /* a277c: ret  */
  return;
}

void fn1_a877c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038617980));
  /* a877c: bti c */
  /* bti: no architectural effect here */
  /* a8780: ret  */
  return;
}

void fn1_af040(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038644800));
  /* af040: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* af044: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* af048: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* af04c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* af050: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* af054: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* af058: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* af05c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* af060: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* af064: ldurh w9, [x21, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* af068: ubfiz w8, w8, #0xa, #6 */
  ARC_W_W(c, 8, ((uint32_t)((((uint32_t)(ARC_W_R(c, 8))) & UINT64_C(63))) << 10));
  /* af06c: ubfiz w9, w9, #0xa, #6 */
  ARC_W_W(c, 9, ((uint32_t)((((uint32_t)(ARC_W_R(c, 9))) & UINT64_C(63))) << 10));
  /* af070: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* af074: b.ls #0xaf0b4 */
  if (ARC_COND(c, 9)) goto L_af0b4;
  /* af078: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* af07c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* af080: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* af084: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* af088: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(716940));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* af08c: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* af090: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* af094: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* af098: b.eq #0xaf194 */
  if (ARC_COND(c, 0)) goto L_af194;
  /* af09c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* af0a0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* af0a4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* af0a8: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* af0ac: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(716976));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* af0b0: b #0xaf194 */
  goto L_af194;
L_af0b4:;
  /* af0b4: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* af0b8: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* af0bc: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* af0c0: add w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* af0c4: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* af0c8: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* af0cc: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* af0d0: b.ls #0xaf0fc */
  if (ARC_COND(c, 9)) goto L_af0fc;
  /* af0d4: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* af0d8: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* af0dc: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* af0e0: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* af0e4: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* af0e8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(717036));
  fn1_142878(c);
  /* af0ec: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* af0f0: cbz x0, #0xaf388 */
  if ((ARC_X_R(c, 0)) == 0) goto L_af388;
  /* af0f4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* af0f8: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_af0fc:;
  /* af0fc: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* af100: ldr x9, [x21] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 21)));
  /* af104: mov w10, #0x28 */
  ARC_W_W(c, 10, UINT64_C(40));
  /* af108: strb w10, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 10));
  /* af10c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* af110: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* af114: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* af118: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(717084));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* af11c: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* af120: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* af124: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* af128: b.eq #0xaf140 */
  if (ARC_COND(c, 0)) goto L_af140;
  /* af12c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* af130: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* af134: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* af138: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* af13c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(717120));
  arc_dispatch(c, ARC_X_R(c, 8));
L_af140:;
  /* af140: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* af144: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* af148: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* af14c: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* af150: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* af154: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* af158: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* af15c: b.ls #0xaf188 */
  if (ARC_COND(c, 9)) goto L_af188;
  /* af160: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* af164: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* af168: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* af16c: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* af170: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* af174: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(717176));
  fn1_142878(c);
  /* af178: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* af17c: cbz x0, #0xaf38c */
  if ((ARC_X_R(c, 0)) == 0) goto L_af38c;
  /* af180: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* af184: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_af188:;
  /* af188: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* af18c: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* af190: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
L_af194:;
  /* af194: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* af198: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* af19c: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* af1a0: add w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* af1a4: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* af1a8: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* af1ac: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* af1b0: b.ls #0xaf1dc */
  if (ARC_COND(c, 9)) goto L_af1dc;
  /* af1b4: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* af1b8: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* af1bc: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* af1c0: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* af1c4: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* af1c8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(717260));
  fn1_142878(c);
  /* af1cc: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* af1d0: cbz x0, #0xaf380 */
  if ((ARC_X_R(c, 0)) == 0) goto L_af380;
  /* af1d4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* af1d8: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_af1dc:;
  /* af1dc: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* af1e0: mov w9, #0x5b */
  ARC_W_W(c, 9, UINT64_C(91));
  /* af1e4: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* af1e8: ldr x20, [x20, #0x18] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* af1ec: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* af1f0: and w8, w8, #0x3f */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(63)));
  /* af1f4: cmp w8, #0x13 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(19));
  /* af1f8: b.hs #0xaf238 */
  if (ARC_COND(c, 2)) goto L_af238;
  /* af1fc: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* af200: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* af204: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* af208: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* af20c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(717328));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* af210: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* af214: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* af218: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* af21c: b.eq #0xaf318 */
  if (ARC_COND(c, 0)) goto L_af318;
  /* af220: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* af224: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* af228: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* af22c: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* af230: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(717364));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* af234: b #0xaf318 */
  goto L_af318;
L_af238:;
  /* af238: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* af23c: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* af240: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* af244: add w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* af248: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* af24c: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* af250: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* af254: b.ls #0xaf280 */
  if (ARC_COND(c, 9)) goto L_af280;
  /* af258: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* af25c: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* af260: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* af264: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* af268: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* af26c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(717424));
  fn1_142878(c);
  /* af270: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* af274: cbz x0, #0xaf390 */
  if ((ARC_X_R(c, 0)) == 0) goto L_af390;
  /* af278: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* af27c: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_af280:;
  /* af280: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* af284: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* af288: mov w10, #0x28 */
  ARC_W_W(c, 10, UINT64_C(40));
  /* af28c: strb w10, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 10));
  /* af290: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* af294: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* af298: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* af29c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(717472));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* af2a0: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* af2a4: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* af2a8: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* af2ac: b.eq #0xaf2c4 */
  if (ARC_COND(c, 0)) goto L_af2c4;
  /* af2b0: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* af2b4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* af2b8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* af2bc: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* af2c0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(717508));
  arc_dispatch(c, ARC_X_R(c, 8));
L_af2c4:;
  /* af2c4: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* af2c8: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* af2cc: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* af2d0: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* af2d4: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* af2d8: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* af2dc: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* af2e0: b.ls #0xaf30c */
  if (ARC_COND(c, 9)) goto L_af30c;
  /* af2e4: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* af2e8: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* af2ec: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* af2f0: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* af2f4: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* af2f8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(717564));
  fn1_142878(c);
  /* af2fc: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* af300: cbz x0, #0xaf394 */
  if ((ARC_X_R(c, 0)) == 0) goto L_af394;
  /* af304: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* af308: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_af30c:;
  /* af30c: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* af310: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* af314: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
L_af318:;
  /* af318: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* af31c: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* af320: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* af324: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* af328: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* af32c: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* af330: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* af334: b.ls #0xaf360 */
  if (ARC_COND(c, 9)) goto L_af360;
  /* af338: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* af33c: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* af340: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* af344: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* af348: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* af34c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(717648));
  fn1_142878(c);
  /* af350: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* af354: cbz x0, #0xaf384 */
  if ((ARC_X_R(c, 0)) == 0) goto L_af384;
  /* af358: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* af35c: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_af360:;
  /* af360: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* af364: mov w9, #0x5d */
  ARC_W_W(c, 9, UINT64_C(93));
  /* af368: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* af36c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* af370: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* af374: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* af378: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* af37c: ret  */
  return;
L_af380:;
  /* af380: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(717700));
  fn1_1427b8(c);
L_af384:;
  /* af384: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(717704));
  fn1_1427b8(c);
L_af388:;
  /* af388: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(717708));
  fn1_1427b8(c);
L_af38c:;
  /* af38c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(717712));
  fn1_1427b8(c);
L_af390:;
  /* af390: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(717716));
  fn1_1427b8(c);
L_af394:;
  /* af394: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(717720));
  fn1_1427b8(c);
}

void fn1_b3b20(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038663968));
  /* b3b20: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b3b24: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b3b28: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b3b2c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b3b30: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b3b34: ldr x8, [x0, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* b3b38: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b3b3c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b3b40: cbz x8, #0xb3bf8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_b3bf8;
  /* b3b44: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b3b48: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b3b4c: ldr w21, [x19, #0x20] */
  ARC_W_W(c, 21, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b3b50: str wzr, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 31));
  /* b3b54: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b3b58: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b3b5c: b.ls #0xb3b84 */
  if (ARC_COND(c, 9)) goto L_b3b84;
  /* b3b60: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b3b64: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b3b68: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b3b6c: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b3b70: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b3b74: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(736120));
  fn1_142878(c);
  /* b3b78: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b3b7c: cbz x0, #0xb3e68 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b3e68;
  /* b3b80: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b3b84:;
  /* b3b84: mov w9, #0x3c */
  ARC_W_W(c, 9, UINT64_C(60));
  /* b3b88: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b3b8c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b3b90: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b3b94: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b3b98: add x0, x20, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(16)));
  /* b3b9c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b3ba0: bl #0xafa48 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(736164));
  fn1_afa48(c);
  /* b3ba4: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b3ba8: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b3bac: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b3bb0: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b3bb4: b.ls #0xb3bdc */
  if (ARC_COND(c, 9)) goto L_b3bdc;
  /* b3bb8: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b3bbc: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b3bc0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b3bc4: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b3bc8: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b3bcc: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(736208));
  fn1_142878(c);
  /* b3bd0: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b3bd4: cbz x0, #0xb3e70 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b3e70;
  /* b3bd8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b3bdc:;
  /* b3bdc: mov w9, #0x3e */
  ARC_W_W(c, 9, UINT64_C(62));
  /* b3be0: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b3be4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b3be8: str w21, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 21));
  /* b3bec: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b3bf0: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b3bf4: b #0xb3bfc */
  goto L_b3bfc;
L_b3bf8:;
  /* b3bf8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b3bfc:;
  /* b3bfc: ldr x9, [x20, #0x20] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* b3c00: adrp x22, #0x52000 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(335872)));
  /* b3c04: add x22, x22, #0x30b */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(779)));
  /* b3c08: cbz x9, #0xb3cec */
  if ((ARC_X_R(c, 9)) == 0) goto L_b3cec;
  /* b3c0c: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b3c10: add x10, x8, #0xa */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(10)));
  /* b3c14: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b3c18: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b3c1c: b.ls #0xb3c44 */
  if (ARC_COND(c, 9)) goto L_b3c44;
  /* b3c20: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b3c24: add x8, x8, #0x3ea */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1002)));
  /* b3c28: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b3c2c: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b3c30: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b3c34: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(736312));
  fn1_142878(c);
  /* b3c38: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b3c3c: cbz x0, #0xb3e6c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b3e6c;
  /* b3c40: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b3c44:;
  /* b3c44: ldr x9, [x22] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 22)));
  /* b3c48: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b3c4c: mov w10, #0x2073 */
  ARC_W_W(c, 10, UINT64_C(8307));
  /* b3c50: strh w10, [x8, #8] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 10));
  /* b3c54: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b3c58: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b3c5c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b3c60: ldr x21, [x20, #0x20] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* b3c64: add x8, x8, #0xa */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(10)));
  /* b3c68: ldr x9, [x21] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 21)));
  /* b3c6c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b3c70: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b3c74: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* b3c78: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(736380));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b3c7c: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* b3c80: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b3c84: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b3c88: b.eq #0xb3ca0 */
  if (ARC_COND(c, 0)) goto L_b3ca0;
  /* b3c8c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b3c90: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b3c94: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b3c98: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b3c9c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(736416));
  arc_dispatch(c, ARC_X_R(c, 8));
L_b3ca0:;
  /* b3ca0: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b3ca4: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b3ca8: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b3cac: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b3cb0: b.ls #0xb3cd8 */
  if (ARC_COND(c, 9)) goto L_b3cd8;
  /* b3cb4: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b3cb8: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b3cbc: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b3cc0: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b3cc4: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b3cc8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(736460));
  fn1_142878(c);
  /* b3ccc: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b3cd0: cbz x0, #0xb3e74 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b3e74;
  /* b3cd4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b3cd8:;
  /* b3cd8: mov w9, #0x20 */
  ARC_W_W(c, 9, UINT64_C(32));
  /* b3cdc: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b3ce0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b3ce4: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b3ce8: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_b3cec:;
  /* b3cec: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b3cf0: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b3cf4: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b3cf8: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b3cfc: add w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* b3d00: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b3d04: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* b3d08: b.ls #0xb3d34 */
  if (ARC_COND(c, 9)) goto L_b3d34;
  /* b3d0c: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b3d10: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b3d14: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b3d18: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b3d1c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b3d20: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(736548));
  fn1_142878(c);
  /* b3d24: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b3d28: cbz x0, #0xb3e60 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b3e60;
  /* b3d2c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b3d30: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b3d34:;
  /* b3d34: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b3d38: mov w9, #0x28 */
  ARC_W_W(c, 9, UINT64_C(40));
  /* b3d3c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b3d40: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b3d44: add x0, x20, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(40)));
  /* b3d48: bl #0xafa48 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(736588));
  fn1_afa48(c);
  /* b3d4c: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b3d50: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b3d54: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b3d58: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* b3d5c: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b3d60: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* b3d64: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b3d68: b.ls #0xb3d94 */
  if (ARC_COND(c, 9)) goto L_b3d94;
  /* b3d6c: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b3d70: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b3d74: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b3d78: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b3d7c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b3d80: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(736644));
  fn1_142878(c);
  /* b3d84: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b3d88: cbz x0, #0xb3e64 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b3e64;
  /* b3d8c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b3d90: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b3d94:;
  /* b3d94: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b3d98: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* b3d9c: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b3da0: ldr x8, [x20, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(56))));
  /* b3da4: cbz x8, #0xb3e28 */
  if ((ARC_X_R(c, 8)) == 0) goto L_b3e28;
  /* b3da8: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b3dac: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b3db0: add x10, x8, #0xa */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(10)));
  /* b3db4: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b3db8: b.ls #0xb3de0 */
  if (ARC_COND(c, 9)) goto L_b3de0;
  /* b3dbc: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b3dc0: add x8, x8, #0x3ea */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1002)));
  /* b3dc4: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b3dc8: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b3dcc: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b3dd0: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(736724));
  fn1_142878(c);
  /* b3dd4: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b3dd8: cbz x0, #0xb3e78 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b3e78;
  /* b3ddc: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b3de0:;
  /* b3de0: ldr x9, [x22] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 22)));
  /* b3de4: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b3de8: mov w10, #0x2073 */
  ARC_W_W(c, 10, UINT64_C(8307));
  /* b3dec: strh w10, [x8, #8] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 10));
  /* b3df0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b3df4: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b3df8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b3dfc: ldr x20, [x20, #0x38] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(56))));
  /* b3e00: add x8, x8, #0xa */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(10)));
  /* b3e04: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* b3e08: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b3e0c: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b3e10: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* b3e14: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(736792));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b3e18: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b3e1c: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b3e20: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b3e24: b.ne #0xb3e3c */
  if (ARC_COND(c, 1)) goto L_b3e3c;
L_b3e28:;
  /* b3e28: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b3e2c: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* b3e30: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b3e34: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b3e38: ret  */
  return;
L_b3e3c:;
  /* b3e3c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b3e40: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b3e44: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b3e48: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b3e4c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b3e50: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* b3e54: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b3e58: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b3e5c: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_b3e60:;
  /* b3e60: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(736868));
  fn1_1427b8(c);
L_b3e64:;
  /* b3e64: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(736872));
  fn1_1427b8(c);
L_b3e68:;
  /* b3e68: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(736876));
  fn1_1427b8(c);
L_b3e6c:;
  /* b3e6c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(736880));
  fn1_1427b8(c);
L_b3e70:;
  /* b3e70: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(736884));
  fn1_1427b8(c);
L_b3e74:;
  /* b3e74: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(736888));
  fn1_1427b8(c);
L_b3e78:;
  /* b3e78: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(736892));
  fn1_1427b8(c);
  /* b3e7c: str w21, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 21));
  /* b3e80: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(736900));
  fn1_9cc20(c);
}

void fn1_b7888(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038679688));
  /* b7888: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b788c: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b7890: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* b7894: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b7898: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b789c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b78a0: ldr x23, [x0, #0x1330] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* b78a4: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* b78a8: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* b78ac: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* b78b0: ldr x8, [x23, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* b78b4: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* b78b8: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b78bc: b.hi #0xb78e0 */
  if (ARC_COND(c, 8)) goto L_b78e0;
  /* b78c0: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* b78c4: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b78c8: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(751820));
  fn1_1428a8(c);
  /* b78cc: cbz x0, #0xb7944 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b7944;
  /* b78d0: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b78d4: stp x23, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b78d8: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* b78dc: str x0, [x22, #0x1330] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(4912)), ARC_X_R(c, 0));
L_b78e0:;
  /* b78e0: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* b78e4: add x0, x23, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + ARC_X_R(c, 8)));
  /* b78e8: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b78ec: str x9, [x23, #8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(8)), ARC_X_R(c, 9));
  /* b78f0: adrp x9, #0x14b000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1355776)));
  /* b78f4: add x9, x9, #0x9c8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2504)));
  /* b78f8: str x9, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* b78fc: ldurh w9, [x0, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* b7900: mov w10, #0x31 */
  ARC_W_W(c, 10, UINT64_C(49));
  /* b7904: ldrb w11, [x20] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 20)));
  /* b7908: str x8, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 8));
  /* b790c: strb w10, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 10));
  /* b7910: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* b7914: and w8, w9, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* b7918: ldr w9, [x19] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 19)));
  /* b791c: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* b7920: strb w11, [x0, #0x18] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(24)), ARC_W_R(c, 11));
  /* b7924: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* b7928: str w9, [x0, #0x1c] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(28)), ARC_W_R(c, 9));
  /* b792c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b7930: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* b7934: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* b7938: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b793c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b7940: ret  */
  return;
L_b7944:;
  /* b7944: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(751944));
  fn1_142488(c);
}

void fn1_ba638(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038691384));
  /* ba638: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ba63c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ba640: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ba644: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ba648: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ba64c: ldr x22, [x0, #0x1330] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* ba650: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* ba654: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* ba658: ldr x8, [x22, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* ba65c: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* ba660: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* ba664: b.hi #0xba688 */
  if (ARC_COND(c, 8)) goto L_ba688;
  /* ba668: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ba66c: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* ba670: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(763508));
  fn1_1428a8(c);
  /* ba674: cbz x0, #0xba6f0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ba6f0;
  /* ba678: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ba67c: stp x22, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ba680: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* ba684: str x0, [x21, #0x1330] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(4912)), ARC_X_R(c, 0));
L_ba688:;
  /* ba688: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* ba68c: add x0, x22, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* ba690: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* ba694: str x9, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 9));
  /* ba698: adrp x10, #0x14c000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(1359872)));
  /* ba69c: add x10, x10, #0x7d8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(2008)));
  /* ba6a0: ldurh w12, [x8, #9] */
  ARC_W_W(c, 12, arc_ld16((ARC_X_R(c, 8) + INT64_C(9))));
  /* ba6a4: mov w9, #0xd */
  ARC_W_W(c, 9, UINT64_C(13));
  /* ba6a8: ldr w11, [x19] */
  ARC_W_W(c, 11, arc_ld32(ARC_X_R(c, 19)));
  /* ba6ac: str x10, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 10));
  }
  /* ba6b0: ldurh w10, [x0, #9] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* ba6b4: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* ba6b8: mov w9, #0x500 */
  ARC_W_W(c, 9, UINT64_C(1280));
  /* ba6bc: and w12, w12, #0xc0 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) & UINT64_C(192)));
  /* ba6c0: str x8, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 8));
  /* ba6c4: and w8, w10, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 10) & UINT64_C(61440)));
  /* ba6c8: orr w9, w12, w9 */
  ARC_W_W(c, 9, (ARC_W_R(c, 12) | ARC_W_R(c, 9)));
  /* ba6cc: orr w8, w9, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) | ARC_W_R(c, 8)));
  /* ba6d0: str w11, [x0, #0x18] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(24)), ARC_W_R(c, 11));
  /* ba6d4: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* ba6d8: strb wzr, [x0, #0x1c] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(28)), ARC_W_R(c, 31));
  /* ba6dc: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ba6e0: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ba6e4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ba6e8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ba6ec: ret  */
  return;
L_ba6f0:;
  /* ba6f0: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(763636));
  fn1_142488(c);
}

void fn1_bd898(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038704280));
  /* bd898: bti c */
  /* bti: no architectural effect here */
  /* bd89c: b #0x1426f8 */
  fn1_1426f8(c); return;
}

void fn1_cb6b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038761136));
L_cb6b0:;
  /* cb6b0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* cb6b4: sub sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(176)));
  /* cb6b8: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* cb6bc: stp x28, x27, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* cb6c0: stp x26, x25, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* cb6c4: stp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* cb6c8: stp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* cb6cc: stp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* cb6d0: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* cb6d4: mov w26, #2 */
  ARC_W_W(c, 26, UINT64_C(2));
  /* cb6d8: mov w27, #1 */
  ARC_W_W(c, 27, UINT64_C(1));
  /* cb6dc: mov w28, #4 */
  ARC_W_W(c, 28, UINT64_C(4));
  /* cb6e0: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* cb6e4: dup v16.2d, x26 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 26));
    _t.u64[1] = (ARC_X_R(c, 26));
    (c)->q[16] = _t; }
  /* cb6e8: dup v17.2d, x27 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 27));
    _t.u64[1] = (ARC_X_R(c, 27));
    (c)->q[17] = _t; }
  /* cb6ec: dup v18.2d, x28 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 28));
    _t.u64[1] = (ARC_X_R(c, 28));
    (c)->q[18] = _t; }
  /* cb6f0: ldr q19, [x8, #0xa80] */
  arc_q_w(c, 19, arc_ld64((ARC_X_R(c, 8) + INT64_C(2688))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2688)) + 8));
  /* cb6f4: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* cb6f8: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* cb6fc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* cb700: mov x4, #-0x200 */
  ARC_X_W(c, 4, UINT64_C(18446744073709551104));
  /* cb704: mov x21, #-1 */
  ARC_X_W(c, 21, UINT64_C(18446744073709551615));
  /* cb708: stur w3, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 3));
  /* cb70c: stur q16, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), (c)->q[16].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)) + 8, (c)->q[16].u64[1]);
  /* cb710: stp q18, q17, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, (c)->q[18].u64[0]);
    arc_st64(_pa + 8, (c)->q[18].u64[1]);
    arc_st64((_pa + 16), (c)->q[17].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[17].u64[1]);
  }
  /* cb714: str q19, [sp] */
  arc_st64((c)->sp, (c)->q[19].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[19].u64[1]);
L_cb718:;
  /* cb718: mov x23, x19 */
  ARC_X_W(c, 23, ARC_X_R(c, 19));
L_cb71c:;
  /* cb71c: sub x8, x20, x23 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) - ARC_X_R(c, 23)));
  /* cb720: mov x19, x23 */
  ARC_X_W(c, 19, ARC_X_R(c, 23));
  /* cb724: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* cb728: subs x9, x8, #2 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2)));
  /* cb72c: b.gt #0xcb740 */
  if (ARC_COND(c, 12)) goto L_cb740;
  /* cb730: b.lo #0xcc0b0 */
  if (ARC_COND(c, 3)) goto L_cc0b0;
  /* cb734: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* cb738: b.ne #0xcb758 */
  if (ARC_COND(c, 1)) goto L_cb758;
  /* cb73c: b #0xcbfd4 */
  goto L_cbfd4;
L_cb740:;
  /* cb740: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* cb744: b.eq #0xcbff0 */
  if (ARC_COND(c, 0)) goto L_cbff0;
  /* cb748: cmp x8, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(4));
  /* cb74c: b.eq #0xcc03c */
  if (ARC_COND(c, 0)) goto L_cc03c;
  /* cb750: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* cb754: b.eq #0xcbf1c */
  if (ARC_COND(c, 0)) goto L_cbf1c;
L_cb758:;
  /* cb758: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* cb75c: b.le #0xcc0d4 */
  if (ARC_COND(c, 13)) goto L_cc0d4;
  /* cb760: cbz x22, #0xcc150 */
  if ((ARC_X_R(c, 22)) == 0) goto L_cc150;
  /* cb764: lsr x9, x8, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* cb768: ldur x10, [x20, #-8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* cb76c: cmp x8, #0x81 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(129));
  /* cb770: add x9, x19, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* cb774: b.lo #0xcb8ac */
  if (ARC_COND(c, 3)) goto L_cb8ac;
  /* cb778: ldr x8, [x9] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 9)));
  /* cb77c: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* cb780: csel x11, x8, x10, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cb784: csel x8, x8, x10, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cb788: stur x11, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 11));
  /* cb78c: str x8, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* cb790: ldur x8, [x20, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* cb794: ldr x10, [x19] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 19)));
  /* cb798: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* cb79c: csel x11, x8, x10, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cb7a0: csel x8, x8, x10, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cb7a4: stur x11, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 11));
  /* cb7a8: ldr x11, [x9] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 9)));
  /* cb7ac: ldr x10, [x19] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 19)));
  /* cb7b0: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* cb7b4: csel x10, x10, x11, lt */
  ARC_X_W(c, 10, (ARC_COND(c, 11) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 11)));
  /* cb7b8: str x10, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 10));
  /* cb7bc: ldp x11, x10, [x9, #-8] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(-8));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* cb7c0: csel x8, x10, x8, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* cb7c4: str x8, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* cb7c8: ldur x8, [x20, #-0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-16))));
  /* cb7cc: cmp x11, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 8));
  /* cb7d0: csel x10, x11, x8, gt */
  ARC_X_W(c, 10, (ARC_COND(c, 12) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 8)));
  /* cb7d4: csel x8, x11, x8, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 8)));
  /* cb7d8: stur x10, [x20, #-0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-16)), ARC_X_R(c, 10));
  /* cb7dc: stur x8, [x9, #-8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(-8)), ARC_X_R(c, 8));
  /* cb7e0: ldur x8, [x20, #-0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-16))));
  /* cb7e4: ldr x10, [x19, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* cb7e8: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* cb7ec: csel x11, x8, x10, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cb7f0: csel x8, x8, x10, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cb7f4: stur x11, [x20, #-0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-16)), ARC_X_R(c, 11));
  /* cb7f8: ldur x11, [x9, #-8] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 9) + INT64_C(-8))));
  /* cb7fc: ldr x10, [x19, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* cb800: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* cb804: csel x10, x10, x11, lt */
  ARC_X_W(c, 10, (ARC_COND(c, 11) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 11)));
  /* cb808: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* cb80c: ldur x10, [x9, #-8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 9) + INT64_C(-8))));
  /* cb810: csel x8, x10, x8, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* cb814: stur x8, [x9, #-8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(-8)), ARC_X_R(c, 8));
  /* cb818: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* cb81c: ldur x10, [x20, #-0x18] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 20) + INT64_C(-24))));
  /* cb820: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* cb824: csel x11, x8, x10, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cb828: csel x8, x8, x10, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cb82c: stur x11, [x20, #-0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-24)), ARC_X_R(c, 11));
  /* cb830: str x8, [x9, #8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(8)), ARC_X_R(c, 8));
  /* cb834: ldur x8, [x20, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-24))));
  /* cb838: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* cb83c: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* cb840: csel x11, x8, x10, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cb844: csel x8, x8, x10, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cb848: stur x11, [x20, #-0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-24)), ARC_X_R(c, 11));
  /* cb84c: ldr x11, [x9, #8] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* cb850: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* cb854: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* cb858: csel x10, x10, x11, lt */
  ARC_X_W(c, 10, (ARC_COND(c, 11) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 11)));
  /* cb85c: str x10, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 10));
  /* cb860: ldp x11, x10, [x9] */
  { const uint64_t _pa = ARC_X_R(c, 9);
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* cb864: csel x8, x10, x8, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* cb868: ldur x10, [x9, #-8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 9) + INT64_C(-8))));
  /* cb86c: cmp x11, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 8));
  /* cb870: csel x12, x11, x8, gt */
  ARC_X_W(c, 12, (ARC_COND(c, 12) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 8)));
  /* cb874: csel x8, x11, x8, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 8)));
  /* cb878: cmp x12, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 10));
  /* cb87c: csel x11, x12, x10, lt */
  ARC_X_W(c, 11, (ARC_COND(c, 11) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* cb880: csel x12, x12, x10, gt */
  ARC_X_W(c, 12, (ARC_COND(c, 12) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* cb884: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* cb888: csel x10, x10, x8, lt */
  ARC_X_W(c, 10, (ARC_COND(c, 11) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* cb88c: csel x8, x8, x11, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 11)));
  /* cb890: stur x10, [x9, #-8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(-8)), ARC_X_R(c, 10));
  /* cb894: stp x8, x12, [x9] */
  { const uint64_t _pa = ARC_X_R(c, 9);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 12));
  }
  /* cb898: ldr x10, [x19] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 19)));
  /* cb89c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* cb8a0: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* cb8a4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* cb8a8: b #0xcb8fc */
  goto L_cb8fc;
L_cb8ac:;
  /* cb8ac: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* cb8b0: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* cb8b4: csel x11, x8, x10, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cb8b8: csel x8, x8, x10, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cb8bc: stur x11, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 11));
  /* cb8c0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* cb8c4: ldur x8, [x20, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* cb8c8: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* cb8cc: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* cb8d0: csel x11, x8, x10, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cb8d4: csel x8, x8, x10, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cb8d8: stur x11, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 11));
  /* cb8dc: ldr x11, [x19] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 19)));
  /* cb8e0: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* cb8e4: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* cb8e8: csel x10, x10, x11, lt */
  ARC_X_W(c, 10, (ARC_COND(c, 11) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 11)));
  /* cb8ec: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* cb8f0: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* cb8f4: csel x8, x9, x8, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* cb8f8: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_cb8fc:;
  /* cb8fc: ldur w9, [x29, #-4] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* cb900: sub x22, x22, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) - UINT64_C(1)));
  /* cb904: tbnz w9, #0, #0xcb914 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_cb914;
  /* cb908: ldur x9, [x19, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(-8))));
  /* cb90c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* cb910: b.ge #0xcbe4c */
  if (ARC_COND(c, 10)) goto L_cbe4c;
L_cb914:;
  /* cb914: ldur x9, [x20, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* cb918: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* cb91c: b.ge #0xcb934 */
  if (ARC_COND(c, 10)) goto L_cb934;
  /* cb920: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
L_cb924:;
  /* cb924: ldr x10, [x9, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(8));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_a));
  }
  /* cb928: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* cb92c: b.ge #0xcb924 */
  if (ARC_COND(c, 10)) goto L_cb924;
  /* cb930: b #0xcb954 */
  goto L_cb954;
L_cb934:;
  /* cb934: add x10, x19, #8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) + UINT64_C(8)));
L_cb938:;
  /* cb938: mov x9, x10 */
  ARC_X_W(c, 9, ARC_X_R(c, 10));
  /* cb93c: cmp x10, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 20));
  /* cb940: b.hs #0xcb954 */
  if (ARC_COND(c, 2)) goto L_cb954;
  /* cb944: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* cb948: ldr x11, [x10], #8 */
  { const uint64_t _a = ARC_X_R(c, 10);
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(8));
    ARC_X_W(c, 11, arc_ld64(_a));
  }
  /* cb94c: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* cb950: b.ge #0xcb938 */
  if (ARC_COND(c, 10)) goto L_cb938;
L_cb954:;
  /* cb954: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* cb958: mov x10, x20 */
  ARC_X_W(c, 10, ARC_X_R(c, 20));
  /* cb95c: b.hs #0xcb970 */
  if (ARC_COND(c, 2)) goto L_cb970;
  /* cb960: mov x10, x20 */
  ARC_X_W(c, 10, ARC_X_R(c, 20));
L_cb964:;
  /* cb964: ldr x11, [x10, #-8]! */
  { const uint64_t _a = (ARC_X_R(c, 10) + INT64_C(-8));
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(-8));
    ARC_X_W(c, 11, arc_ld64(_a));
  }
  /* cb968: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* cb96c: b.lt #0xcb964 */
  if (ARC_COND(c, 11)) goto L_cb964;
L_cb970:;
  /* cb970: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* cb974: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
  /* cb978: b.hs #0xcb990 */
  if (ARC_COND(c, 2)) goto L_cb990;
  /* cb97c: ldr x12, [x10] */
  ARC_X_W(c, 12, arc_ld64(ARC_X_R(c, 10)));
  /* cb980: ldr x13, [x9] */
  ARC_X_W(c, 13, arc_ld64(ARC_X_R(c, 9)));
  /* cb984: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
  /* cb988: str x12, [x11], #8 */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 12));
  }
  /* cb98c: str x13, [x10] */
  arc_st64(ARC_X_R(c, 10), ARC_X_R(c, 13));
L_cb990:;
  /* cb990: sub x12, x10, #8 */
  ARC_X_W(c, 12, (ARC_X_R(c, 10) - UINT64_C(8)));
  /* cb994: sub x14, x12, x11 */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* cb998: cmp x14, #0x3f1 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(1009));
  /* cb99c: b.lt #0xcbb00 */
  if (ARC_COND(c, 11)) goto L_cbb00;
  /* cb9a0: dup v0.2d, x8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 8));
    _t.u64[1] = (ARC_X_R(c, 8));
    (c)->q[0] = _t; }
  /* cb9a4: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* cb9a8: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* cb9ac: b #0xcb9d8 */
  goto L_cb9d8;
L_cb9b0:;
  /* cb9b0: cmp x14, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(0));
  /* cb9b4: cset w15, eq */
  ARC_W_W(c, 15, (ARC_COND(c, 0) ? 1 : 0));
  /* cb9b8: cmp x13, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(0));
  /* cb9bc: add x11, x11, x15, lsl #9 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 15)) << 9)));
  /* cb9c0: csel x15, x4, xzr, eq */
  ARC_X_W(c, 15, (ARC_COND(c, 0) ? (ARC_X_R(c, 4)) : ARC_X_R(c, 31)));
  /* cb9c4: cset w16, eq */
  ARC_W_W(c, 16, (ARC_COND(c, 0) ? 1 : 0));
  /* cb9c8: add x12, x12, x15 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + ARC_X_R(c, 15)));
  /* cb9cc: sub x15, x12, x11 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* cb9d0: cmp x15, #0x3f0 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(1008));
  /* cb9d4: b.le #0xcbb10 */
  if (ARC_COND(c, 13)) goto L_cbb10;
L_cb9d8:;
  /* cb9d8: cbz x14, #0xcb9e8 */
  if ((ARC_X_R(c, 14)) == 0) goto L_cb9e8;
  /* cb9dc: cbz x13, #0xcba48 */
  if ((ARC_X_R(c, 13)) == 0) goto L_cba48;
L_cb9e0:;
  /* cb9e0: cbnz x14, #0xcbabc */
  if ((ARC_X_R(c, 14)) != 0) goto L_cbabc;
  /* cb9e4: b #0xcb9b0 */
  goto L_cb9b0;
L_cb9e8:;
  /* cb9e8: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* cb9ec: movi v2.2d, #0000000000000000 */
  arc_v_clear(c, 2);
  /* cb9f0: add x14, x11, #0x10 */
  ARC_X_W(c, 14, (ARC_X_R(c, 11) + UINT64_C(16)));
  /* cb9f4: mov v3.16b, v19.16b */
  (c)->q[3] = (c)->q[19];
  /* cb9f8: mov w15, #0x40 */
  ARC_W_W(c, 15, UINT64_C(64));
L_cb9fc:;
  /* cb9fc: ldp q4, q5, [x14, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 14) + INT64_C(-16));
    arc_q_w(c, 4, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 5, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cba00: add v6.2d, v3.2d, v16.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[16].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[16].u64[1];
    (c)->q[6] = _t; }
  /* cba04: subs x15, x15, #4 */
  ARC_X_W(c, 15, arc_sub64(c, ARC_X_R(c, 15), UINT64_C(4)));
  /* cba08: add x14, x14, #0x20 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(32)));
  /* cba0c: cmge v4.2d, v4.2d, v0.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[4].i64[0] >= (c)->q[0].i64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[4].i64[1] >= (c)->q[0].i64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[4] = _t; }
  /* cba10: cmge v5.2d, v5.2d, v0.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[5].i64[0] >= (c)->q[0].i64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[5].i64[1] >= (c)->q[0].i64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[5] = _t; }
  /* cba14: and v4.16b, v4.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] & (c)->q[17].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] & (c)->q[17].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] & (c)->q[17].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] & (c)->q[17].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] & (c)->q[17].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] & (c)->q[17].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] & (c)->q[17].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] & (c)->q[17].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] & (c)->q[17].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] & (c)->q[17].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] & (c)->q[17].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] & (c)->q[17].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] & (c)->q[17].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] & (c)->q[17].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] & (c)->q[17].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] & (c)->q[17].u8[15];
    (c)->q[4] = _t; }
  /* cba18: and v5.16b, v5.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] & (c)->q[17].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] & (c)->q[17].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] & (c)->q[17].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] & (c)->q[17].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] & (c)->q[17].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] & (c)->q[17].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] & (c)->q[17].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] & (c)->q[17].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] & (c)->q[17].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] & (c)->q[17].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] & (c)->q[17].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] & (c)->q[17].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] & (c)->q[17].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] & (c)->q[17].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] & (c)->q[17].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] & (c)->q[17].u8[15];
    (c)->q[5] = _t; }
  /* cba1c: ushl v4.2d, v4.2d, v3.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[4].u64[0], (int8_t)(c)->q[3].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[4].u64[1], (int8_t)(c)->q[3].u64[1]);
    (c)->q[4] = _t; }
  /* cba20: ushl v5.2d, v5.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[5].u64[0], (int8_t)(c)->q[6].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[5].u64[1], (int8_t)(c)->q[6].u64[1]);
    (c)->q[5] = _t; }
  /* cba24: add v3.2d, v3.2d, v18.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[18].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[18].u64[1];
    (c)->q[3] = _t; }
  /* cba28: orr v1.16b, v4.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* cba2c: orr v2.16b, v5.16b, v2.16b */
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
  /* cba30: b.ne #0xcb9fc */
  if (ARC_COND(c, 1)) goto L_cb9fc;
  /* cba34: orr v1.16b, v2.16b, v1.16b */
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
  /* cba38: ext v2.16b, v1.16b, v1.16b, #8 */
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
  /* cba3c: orr v1.8b, v1.8b, v2.8b */
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
  /* cba40: fmov x14, d1 */
  ARC_X_W(c, 14, ARC_DU_R(c, 1));
  /* cba44: cbnz x13, #0xcb9e0 */
  if ((ARC_X_R(c, 13)) != 0) goto L_cb9e0;
L_cba48:;
  /* cba48: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* cba4c: movi v2.2d, #0000000000000000 */
  arc_v_clear(c, 2);
  /* cba50: sub x13, x12, #8 */
  ARC_X_W(c, 13, (ARC_X_R(c, 12) - UINT64_C(8)));
  /* cba54: mov v3.16b, v19.16b */
  (c)->q[3] = (c)->q[19];
  /* cba58: mov w15, #0x40 */
  ARC_W_W(c, 15, UINT64_C(64));
L_cba5c:;
  /* cba5c: ldp q5, q4, [x13, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 13) + INT64_C(-16));
    arc_q_w(c, 5, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 4, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cba60: dup v6.2d, x26 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 26));
    _t.u64[1] = (ARC_X_R(c, 26));
    (c)->q[6] = _t; }
  /* cba64: dup v7.2d, x27 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 27));
    _t.u64[1] = (ARC_X_R(c, 27));
    (c)->q[7] = _t; }
  /* cba68: sub x15, x15, #4 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) - UINT64_C(4)));
  /* cba6c: sub x13, x13, #0x20 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(32)));
  /* cba70: ext v4.16b, v4.16b, v4.16b, #8 */
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
  /* cba74: ext v5.16b, v5.16b, v5.16b, #8 */
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
  /* cba78: add v6.2d, v3.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[6].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[6].u64[1];
    (c)->q[6] = _t; }
  /* cba7c: cmgt v4.2d, v0.2d, v4.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[0].i64[0] > (c)->q[4].i64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[0].i64[1] > (c)->q[4].i64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[4] = _t; }
  /* cba80: cmgt v5.2d, v0.2d, v5.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[0].i64[0] > (c)->q[5].i64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[0].i64[1] > (c)->q[5].i64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[5] = _t; }
  /* cba84: and v4.16b, v4.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] & (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] & (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] & (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] & (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] & (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] & (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] & (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] & (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] & (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] & (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] & (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] & (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] & (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] & (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] & (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] & (c)->q[7].u8[15];
    (c)->q[4] = _t; }
  /* cba88: and v5.16b, v5.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] & (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] & (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] & (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] & (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] & (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] & (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] & (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] & (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] & (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] & (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] & (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] & (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] & (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] & (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] & (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] & (c)->q[7].u8[15];
    (c)->q[5] = _t; }
  /* cba8c: ushl v4.2d, v4.2d, v3.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[4].u64[0], (int8_t)(c)->q[3].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[4].u64[1], (int8_t)(c)->q[3].u64[1]);
    (c)->q[4] = _t; }
  /* cba90: ushl v5.2d, v5.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[5].u64[0], (int8_t)(c)->q[6].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[5].u64[1], (int8_t)(c)->q[6].u64[1]);
    (c)->q[5] = _t; }
  /* cba94: dup v6.2d, x28 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 28));
    _t.u64[1] = (ARC_X_R(c, 28));
    (c)->q[6] = _t; }
  /* cba98: orr v1.16b, v4.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* cba9c: orr v2.16b, v5.16b, v2.16b */
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
  /* cbaa0: add v3.2d, v3.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[6].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[6].u64[1];
    (c)->q[3] = _t; }
  /* cbaa4: cbnz x15, #0xcba5c */
  if ((ARC_X_R(c, 15)) != 0) goto L_cba5c;
  /* cbaa8: orr v1.16b, v2.16b, v1.16b */
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
  /* cbaac: ext v2.16b, v1.16b, v1.16b, #8 */
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
  /* cbab0: orr v1.8b, v1.8b, v2.8b */
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
  /* cbab4: fmov x13, d1 */
  ARC_X_W(c, 13, ARC_DU_R(c, 1));
  /* cbab8: cbz x14, #0xcb9b0 */
  if ((ARC_X_R(c, 14)) == 0) goto L_cb9b0;
L_cbabc:;
  /* cbabc: cbz x13, #0xcb9b0 */
  if ((ARC_X_R(c, 13)) == 0) goto L_cb9b0;
L_cbac0:;
  /* cbac0: rbit x15, x13 */
  ARC_X_W(c, 15, arc_rbit64(ARC_X_R(c, 13)));
  /* cbac4: rbit x16, x14 */
  ARC_X_W(c, 16, arc_rbit64(ARC_X_R(c, 14)));
  /* cbac8: sub x17, x13, #1 */
  ARC_X_W(c, 17, (ARC_X_R(c, 13) - UINT64_C(1)));
  /* cbacc: sub x3, x14, #1 */
  ARC_X_W(c, 3, (ARC_X_R(c, 14) - UINT64_C(1)));
  /* cbad0: and x13, x17, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 17) & ARC_X_R(c, 13)));
  /* cbad4: clz x15, x15 */
  ARC_X_W(c, 15, arc_clz64(ARC_X_R(c, 15)));
  /* cbad8: clz x16, x16 */
  ARC_X_W(c, 16, arc_clz64(ARC_X_R(c, 16)));
  /* cbadc: and x14, x3, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 3) & ARC_X_R(c, 14)));
  /* cbae0: sub x15, x12, x15, lsl #3 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 15)) << 3)));
  /* cbae4: ldr x0, [x11, x16, lsl #3] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 16)) << 3))));
  /* cbae8: ldr x1, [x15] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 15)));
  /* cbaec: str x1, [x11, x16, lsl #3] */
  arc_st64((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 16)) << 3)), ARC_X_R(c, 1));
  /* cbaf0: str x0, [x15] */
  arc_st64(ARC_X_R(c, 15), ARC_X_R(c, 0));
  /* cbaf4: cbz x13, #0xcb9b0 */
  if ((ARC_X_R(c, 13)) == 0) goto L_cb9b0;
  /* cbaf8: cbnz x14, #0xcbac0 */
  if ((ARC_X_R(c, 14)) != 0) goto L_cbac0;
  /* cbafc: b #0xcb9b0 */
  goto L_cb9b0;
L_cbb00:;
  /* cbb00: asr x15, x14, #3 */
  ARC_X_W(c, 15, ((uint64_t)((int64_t)(ARC_X_R(c, 14)) >> ((UINT64_C(3)) & 63))));
  /* cbb04: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* cbb08: mov w16, #1 */
  ARC_W_W(c, 16, UINT64_C(1));
  /* cbb0c: b #0xcbb34 */
  goto L_cbb34;
L_cbb10:;
  /* cbb10: asr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)((int64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63))));
  /* cbb14: orr x17, x13, x14 */
  ARC_X_W(c, 17, (ARC_X_R(c, 13) | ARC_X_R(c, 14)));
  /* cbb18: cbz x17, #0xcbb34 */
  if ((ARC_X_R(c, 17)) == 0) goto L_cbb34;
  /* cbb1c: sub x15, x15, #0x3f */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) - UINT64_C(63)));
  /* cbb20: mov w0, #0x40 */
  ARC_W_W(c, 0, UINT64_C(64));
  /* cbb24: mov w17, #0x40 */
  ARC_W_W(c, 17, UINT64_C(64));
  /* cbb28: cbz x14, #0xcbb44 */
  if ((ARC_X_R(c, 14)) == 0) goto L_cbb44;
  /* cbb2c: cbnz w16, #0xcbc14 */
  if ((ARC_W_R(c, 16)) != 0) goto L_cbc14;
  /* cbb30: b #0xcbcec */
  goto L_cbcec;
L_cbb34:;
  /* cbb34: add x14, x15, #1 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) + UINT64_C(1)));
  /* cbb38: add x15, x14, x14, lsr #63 */
  ARC_X_W(c, 15, (ARC_X_R(c, 14) + ((uint64_t)(ARC_X_R(c, 14)) >> 63)));
  /* cbb3c: asr x15, x15, #1 */
  ARC_X_W(c, 15, ((uint64_t)((int64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(1)) & 63))));
  /* cbb40: sub x0, x14, x15 */
  ARC_X_W(c, 0, (ARC_X_R(c, 14) - ARC_X_R(c, 15)));
L_cbb44:;
  /* cbb44: cmp x15, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(1));
  /* cbb48: b.lt #0xcbb64 */
  if (ARC_COND(c, 11)) goto L_cbb64;
  /* cbb4c: cmp x15, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(4));
  /* cbb50: b.hs #0xcbb6c */
  if (ARC_COND(c, 2)) goto L_cbb6c;
  /* cbb54: mov x17, xzr */
  ARC_X_W(c, 17, ARC_X_R(c, 31));
  /* cbb58: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* cbb5c: mov x1, x11 */
  ARC_X_W(c, 1, ARC_X_R(c, 11));
  /* cbb60: b #0xcbbe8 */
  goto L_cbbe8;
L_cbb64:;
  /* cbb64: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* cbb68: b #0xcbc08 */
  goto L_cbc08;
L_cbb6c:;
  /* cbb6c: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* cbb70: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* cbb74: and x17, x15, #0x7ffffffffffffffc */
  ARC_X_W(c, 17, (ARC_X_R(c, 15) & UINT64_C(9223372036854775804)));
  /* cbb78: dup v2.2d, x8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 8));
    _t.u64[1] = (ARC_X_R(c, 8));
    (c)->q[2] = _t; }
  /* cbb7c: mov v3.16b, v19.16b */
  (c)->q[3] = (c)->q[19];
  /* cbb80: add x1, x11, x17, lsl #3 */
  ARC_X_W(c, 1, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 17)) << 3)));
  /* cbb84: add x14, x11, #0x10 */
  ARC_X_W(c, 14, (ARC_X_R(c, 11) + UINT64_C(16)));
  /* cbb88: mov x3, x17 */
  ARC_X_W(c, 3, ARC_X_R(c, 17));
L_cbb8c:;
  /* cbb8c: ldp q4, q5, [x14, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 14) + INT64_C(-16));
    arc_q_w(c, 4, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 5, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cbb90: dup v6.2d, x26 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 26));
    _t.u64[1] = (ARC_X_R(c, 26));
    (c)->q[6] = _t; }
  /* cbb94: dup v7.2d, x27 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 27));
    _t.u64[1] = (ARC_X_R(c, 27));
    (c)->q[7] = _t; }
  /* cbb98: subs x3, x3, #4 */
  ARC_X_W(c, 3, arc_sub64(c, ARC_X_R(c, 3), UINT64_C(4)));
  /* cbb9c: add x14, x14, #0x20 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(32)));
  /* cbba0: cmge v4.2d, v4.2d, v2.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[4].i64[0] >= (c)->q[2].i64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[4].i64[1] >= (c)->q[2].i64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[4] = _t; }
  /* cbba4: cmge v5.2d, v5.2d, v2.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[5].i64[0] >= (c)->q[2].i64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[5].i64[1] >= (c)->q[2].i64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[5] = _t; }
  /* cbba8: add v6.2d, v3.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[6].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[6].u64[1];
    (c)->q[6] = _t; }
  /* cbbac: and v4.16b, v4.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] & (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] & (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] & (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] & (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] & (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] & (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] & (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] & (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] & (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] & (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] & (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] & (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] & (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] & (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] & (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] & (c)->q[7].u8[15];
    (c)->q[4] = _t; }
  /* cbbb0: and v5.16b, v5.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] & (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] & (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] & (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] & (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] & (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] & (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] & (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] & (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] & (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] & (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] & (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] & (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] & (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] & (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] & (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] & (c)->q[7].u8[15];
    (c)->q[5] = _t; }
  /* cbbb4: ushl v4.2d, v4.2d, v3.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[4].u64[0], (int8_t)(c)->q[3].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[4].u64[1], (int8_t)(c)->q[3].u64[1]);
    (c)->q[4] = _t; }
  /* cbbb8: ushl v5.2d, v5.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[5].u64[0], (int8_t)(c)->q[6].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[5].u64[1], (int8_t)(c)->q[6].u64[1]);
    (c)->q[5] = _t; }
  /* cbbbc: dup v6.2d, x28 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 28));
    _t.u64[1] = (ARC_X_R(c, 28));
    (c)->q[6] = _t; }
  /* cbbc0: orr v0.16b, v4.16b, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] | (c)->q[0].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] | (c)->q[0].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] | (c)->q[0].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] | (c)->q[0].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] | (c)->q[0].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] | (c)->q[0].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] | (c)->q[0].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] | (c)->q[0].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] | (c)->q[0].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] | (c)->q[0].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] | (c)->q[0].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] | (c)->q[0].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] | (c)->q[0].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] | (c)->q[0].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] | (c)->q[0].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] | (c)->q[0].u8[15];
    (c)->q[0] = _t; }
  /* cbbc4: orr v1.16b, v5.16b, v1.16b */
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
  /* cbbc8: add v3.2d, v3.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[6].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[6].u64[1];
    (c)->q[3] = _t; }
  /* cbbcc: b.ne #0xcbb8c */
  if (ARC_COND(c, 1)) goto L_cbb8c;
  /* cbbd0: orr v0.16b, v1.16b, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[0] | (c)->q[0].u8[0];
    _t.u8[1] = (c)->q[1].u8[1] | (c)->q[0].u8[1];
    _t.u8[2] = (c)->q[1].u8[2] | (c)->q[0].u8[2];
    _t.u8[3] = (c)->q[1].u8[3] | (c)->q[0].u8[3];
    _t.u8[4] = (c)->q[1].u8[4] | (c)->q[0].u8[4];
    _t.u8[5] = (c)->q[1].u8[5] | (c)->q[0].u8[5];
    _t.u8[6] = (c)->q[1].u8[6] | (c)->q[0].u8[6];
    _t.u8[7] = (c)->q[1].u8[7] | (c)->q[0].u8[7];
    _t.u8[8] = (c)->q[1].u8[8] | (c)->q[0].u8[8];
    _t.u8[9] = (c)->q[1].u8[9] | (c)->q[0].u8[9];
    _t.u8[10] = (c)->q[1].u8[10] | (c)->q[0].u8[10];
    _t.u8[11] = (c)->q[1].u8[11] | (c)->q[0].u8[11];
    _t.u8[12] = (c)->q[1].u8[12] | (c)->q[0].u8[12];
    _t.u8[13] = (c)->q[1].u8[13] | (c)->q[0].u8[13];
    _t.u8[14] = (c)->q[1].u8[14] | (c)->q[0].u8[14];
    _t.u8[15] = (c)->q[1].u8[15] | (c)->q[0].u8[15];
    (c)->q[0] = _t; }
  /* cbbd4: cmp x15, x17 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 17));
  /* cbbd8: ext v1.16b, v0.16b, v0.16b, #8 */
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
  /* cbbdc: orr v0.8b, v0.8b, v1.8b */
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
  /* cbbe0: fmov x14, d0 */
  ARC_X_W(c, 14, ARC_DU_R(c, 0));
  /* cbbe4: b.eq #0xcbc08 */
  if (ARC_COND(c, 0)) goto L_cbc08;
L_cbbe8:;
  /* cbbe8: ldr x3, [x1], #8 */
  { const uint64_t _a = ARC_X_R(c, 1);
    ARC_X_W(c, 1, ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 3, arc_ld64(_a));
  }
  /* cbbec: cmp x3, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 3), ARC_X_R(c, 8));
  /* cbbf0: cset w3, ge */
  ARC_W_W(c, 3, (ARC_COND(c, 10) ? 1 : 0));
  /* cbbf4: lsl x3, x3, x17 */
  ARC_X_W(c, 3, ((uint64_t)(ARC_X_R(c, 3)) << ((ARC_X_R(c, 17)) & 63)));
  /* cbbf8: add x17, x17, #1 */
  ARC_X_W(c, 17, (ARC_X_R(c, 17) + UINT64_C(1)));
  /* cbbfc: cmp x15, x17 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 17));
  /* cbc00: orr x14, x3, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 3) | ARC_X_R(c, 14)));
  /* cbc04: b.ne #0xcbbe8 */
  if (ARC_COND(c, 1)) goto L_cbbe8;
L_cbc08:;
  /* cbc08: mov x17, x15 */
  ARC_X_W(c, 17, ARC_X_R(c, 15));
  /* cbc0c: mov x15, x0 */
  ARC_X_W(c, 15, ARC_X_R(c, 0));
  /* cbc10: cbz w16, #0xcbcec */
  if ((ARC_W_R(c, 16)) == 0) goto L_cbcec;
L_cbc14:;
  /* cbc14: cmp x15, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(1));
  /* cbc18: b.lt #0xcbc34 */
  if (ARC_COND(c, 11)) goto L_cbc34;
  /* cbc1c: cmp x15, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(4));
  /* cbc20: b.hs #0xcbc48 */
  if (ARC_COND(c, 2)) goto L_cbc48;
  /* cbc24: mov x16, xzr */
  ARC_X_W(c, 16, ARC_X_R(c, 31));
  /* cbc28: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* cbc2c: mov x0, x12 */
  ARC_X_W(c, 0, ARC_X_R(c, 12));
  /* cbc30: b #0xcbccc */
  goto L_cbccc;
L_cbc34:;
  /* cbc34: cmp x14, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(0));
  /* cbc38: csel x13, x17, xzr, eq */
  ARC_X_W(c, 13, (ARC_COND(c, 0) ? (ARC_X_R(c, 17)) : ARC_X_R(c, 31)));
  /* cbc3c: cbz x14, #0xcbe44 */
  if ((ARC_X_R(c, 14)) == 0) goto L_cbe44;
  /* cbc40: sub x12, x12, x15, lsl #3 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 15)) << 3)));
  /* cbc44: b #0xcbd5c */
  goto L_cbd5c;
L_cbc48:;
  /* cbc48: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* cbc4c: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* cbc50: and x16, x15, #0x7ffffffffffffffc */
  ARC_X_W(c, 16, (ARC_X_R(c, 15) & UINT64_C(9223372036854775804)));
  /* cbc54: dup v2.2d, x8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 8));
    _t.u64[1] = (ARC_X_R(c, 8));
    (c)->q[2] = _t; }
  /* cbc58: mov v3.16b, v19.16b */
  (c)->q[3] = (c)->q[19];
  /* cbc5c: sub x0, x12, x16, lsl #3 */
  ARC_X_W(c, 0, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 16)) << 3)));
  /* cbc60: sub x13, x12, #8 */
  ARC_X_W(c, 13, (ARC_X_R(c, 12) - UINT64_C(8)));
  /* cbc64: mov x1, x16 */
  ARC_X_W(c, 1, ARC_X_R(c, 16));
L_cbc68:;
  /* cbc68: ldp q5, q4, [x13, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 13) + INT64_C(-16));
    arc_q_w(c, 5, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 4, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cbc6c: dup v6.2d, x26 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 26));
    _t.u64[1] = (ARC_X_R(c, 26));
    (c)->q[6] = _t; }
  /* cbc70: dup v7.2d, x27 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 27));
    _t.u64[1] = (ARC_X_R(c, 27));
    (c)->q[7] = _t; }
  /* cbc74: sub x1, x1, #4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) - UINT64_C(4)));
  /* cbc78: sub x13, x13, #0x20 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(32)));
  /* cbc7c: ext v4.16b, v4.16b, v4.16b, #8 */
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
  /* cbc80: ext v5.16b, v5.16b, v5.16b, #8 */
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
  /* cbc84: add v6.2d, v3.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[6].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[6].u64[1];
    (c)->q[6] = _t; }
  /* cbc88: cmgt v4.2d, v2.2d, v4.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[2].i64[0] > (c)->q[4].i64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[2].i64[1] > (c)->q[4].i64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[4] = _t; }
  /* cbc8c: cmgt v5.2d, v2.2d, v5.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[2].i64[0] > (c)->q[5].i64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[2].i64[1] > (c)->q[5].i64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[5] = _t; }
  /* cbc90: and v4.16b, v4.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] & (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] & (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] & (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] & (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] & (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] & (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] & (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] & (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] & (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] & (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] & (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] & (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] & (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] & (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] & (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] & (c)->q[7].u8[15];
    (c)->q[4] = _t; }
  /* cbc94: and v5.16b, v5.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] & (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] & (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] & (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] & (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] & (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] & (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] & (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] & (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] & (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] & (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] & (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] & (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] & (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] & (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] & (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] & (c)->q[7].u8[15];
    (c)->q[5] = _t; }
  /* cbc98: ushl v4.2d, v4.2d, v3.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[4].u64[0], (int8_t)(c)->q[3].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[4].u64[1], (int8_t)(c)->q[3].u64[1]);
    (c)->q[4] = _t; }
  /* cbc9c: ushl v5.2d, v5.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[5].u64[0], (int8_t)(c)->q[6].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[5].u64[1], (int8_t)(c)->q[6].u64[1]);
    (c)->q[5] = _t; }
  /* cbca0: dup v6.2d, x28 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 28));
    _t.u64[1] = (ARC_X_R(c, 28));
    (c)->q[6] = _t; }
  /* cbca4: orr v0.16b, v4.16b, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] | (c)->q[0].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] | (c)->q[0].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] | (c)->q[0].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] | (c)->q[0].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] | (c)->q[0].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] | (c)->q[0].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] | (c)->q[0].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] | (c)->q[0].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] | (c)->q[0].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] | (c)->q[0].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] | (c)->q[0].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] | (c)->q[0].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] | (c)->q[0].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] | (c)->q[0].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] | (c)->q[0].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] | (c)->q[0].u8[15];
    (c)->q[0] = _t; }
  /* cbca8: orr v1.16b, v5.16b, v1.16b */
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
  /* cbcac: add v3.2d, v3.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[6].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[6].u64[1];
    (c)->q[3] = _t; }
  /* cbcb0: cbnz x1, #0xcbc68 */
  if ((ARC_X_R(c, 1)) != 0) goto L_cbc68;
  /* cbcb4: orr v0.16b, v1.16b, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[0] | (c)->q[0].u8[0];
    _t.u8[1] = (c)->q[1].u8[1] | (c)->q[0].u8[1];
    _t.u8[2] = (c)->q[1].u8[2] | (c)->q[0].u8[2];
    _t.u8[3] = (c)->q[1].u8[3] | (c)->q[0].u8[3];
    _t.u8[4] = (c)->q[1].u8[4] | (c)->q[0].u8[4];
    _t.u8[5] = (c)->q[1].u8[5] | (c)->q[0].u8[5];
    _t.u8[6] = (c)->q[1].u8[6] | (c)->q[0].u8[6];
    _t.u8[7] = (c)->q[1].u8[7] | (c)->q[0].u8[7];
    _t.u8[8] = (c)->q[1].u8[8] | (c)->q[0].u8[8];
    _t.u8[9] = (c)->q[1].u8[9] | (c)->q[0].u8[9];
    _t.u8[10] = (c)->q[1].u8[10] | (c)->q[0].u8[10];
    _t.u8[11] = (c)->q[1].u8[11] | (c)->q[0].u8[11];
    _t.u8[12] = (c)->q[1].u8[12] | (c)->q[0].u8[12];
    _t.u8[13] = (c)->q[1].u8[13] | (c)->q[0].u8[13];
    _t.u8[14] = (c)->q[1].u8[14] | (c)->q[0].u8[14];
    _t.u8[15] = (c)->q[1].u8[15] | (c)->q[0].u8[15];
    (c)->q[0] = _t; }
  /* cbcb8: cmp x15, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 16));
  /* cbcbc: ext v1.16b, v0.16b, v0.16b, #8 */
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
  /* cbcc0: orr v0.8b, v0.8b, v1.8b */
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
  /* cbcc4: fmov x13, d0 */
  ARC_X_W(c, 13, ARC_DU_R(c, 0));
  /* cbcc8: b.eq #0xcbcec */
  if (ARC_COND(c, 0)) goto L_cbcec;
L_cbccc:;
  /* cbccc: ldr x1, [x0], #0xfffffffffffffff8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(-8));
    ARC_X_W(c, 1, arc_ld64(_a));
  }
  /* cbcd0: cmp x1, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 8));
  /* cbcd4: cset w1, lt */
  ARC_W_W(c, 1, (ARC_COND(c, 11) ? 1 : 0));
  /* cbcd8: lsl x1, x1, x16 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 1)) << ((ARC_X_R(c, 16)) & 63)));
  /* cbcdc: add x16, x16, #1 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1)));
  /* cbce0: cmp x15, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 16));
  /* cbce4: orr x13, x1, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 1) | ARC_X_R(c, 13)));
  /* cbce8: b.ne #0xcbccc */
  if (ARC_COND(c, 1)) goto L_cbccc;
L_cbcec:;
  /* cbcec: cbz x14, #0xcbd30 */
  if ((ARC_X_R(c, 14)) == 0) goto L_cbd30;
  /* cbcf0: cbz x13, #0xcbd30 */
  if ((ARC_X_R(c, 13)) == 0) goto L_cbd30;
L_cbcf4:;
  /* cbcf4: rbit x16, x13 */
  ARC_X_W(c, 16, arc_rbit64(ARC_X_R(c, 13)));
  /* cbcf8: rbit x0, x14 */
  ARC_X_W(c, 0, arc_rbit64(ARC_X_R(c, 14)));
  /* cbcfc: sub x1, x13, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 13) - UINT64_C(1)));
  /* cbd00: sub x4, x14, #1 */
  ARC_X_W(c, 4, (ARC_X_R(c, 14) - UINT64_C(1)));
  /* cbd04: and x13, x1, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 1) & ARC_X_R(c, 13)));
  /* cbd08: clz x16, x16 */
  ARC_X_W(c, 16, arc_clz64(ARC_X_R(c, 16)));
  /* cbd0c: clz x0, x0 */
  ARC_X_W(c, 0, arc_clz64(ARC_X_R(c, 0)));
  /* cbd10: and x14, x4, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 4) & ARC_X_R(c, 14)));
  /* cbd14: sub x16, x12, x16, lsl #3 */
  ARC_X_W(c, 16, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 16)) << 3)));
  /* cbd18: ldr x5, [x11, x0, lsl #3] */
  ARC_X_W(c, 5, arc_ld64((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 0)) << 3))));
  /* cbd1c: ldr x3, [x16] */
  ARC_X_W(c, 3, arc_ld64(ARC_X_R(c, 16)));
  /* cbd20: str x3, [x11, x0, lsl #3] */
  arc_st64((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 0)) << 3)), ARC_X_R(c, 3));
  /* cbd24: str x5, [x16] */
  arc_st64(ARC_X_R(c, 16), ARC_X_R(c, 5));
  /* cbd28: cbz x13, #0xcbd30 */
  if ((ARC_X_R(c, 13)) == 0) goto L_cbd30;
  /* cbd2c: cbnz x14, #0xcbcf4 */
  if ((ARC_X_R(c, 14)) != 0) goto L_cbcf4;
L_cbd30:;
  /* cbd30: cmp x13, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(0));
  /* cbd34: csel x15, x15, xzr, eq */
  ARC_X_W(c, 15, (ARC_COND(c, 0) ? (ARC_X_R(c, 15)) : ARC_X_R(c, 31)));
  /* cbd38: sub x12, x12, x15, lsl #3 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 15)) << 3)));
  /* cbd3c: cbnz x14, #0xcbd5c */
  if ((ARC_X_R(c, 14)) != 0) goto L_cbd5c;
  /* cbd40: add x23, x11, x17, lsl #3 */
  ARC_X_W(c, 23, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 17)) << 3)));
  /* cbd44: cbnz x13, #0xcbd94 */
  if ((ARC_X_R(c, 13)) != 0) goto L_cbd94;
  /* cbd48: b #0xcbdc0 */
  goto L_cbdc0;
L_cbd4c:;
  /* cbd4c: lsl x13, x21, x13 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 21)) << ((ARC_X_R(c, 13)) & 63)));
  /* cbd50: sub x12, x12, #8 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(8)));
  /* cbd54: bic x14, x14, x13 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) & (~ARC_X_R(c, 13))));
  /* cbd58: cbz x14, #0xcbdbc */
  if ((ARC_X_R(c, 14)) == 0) goto L_cbdbc;
L_cbd5c:;
  /* cbd5c: clz x13, x14 */
  ARC_X_W(c, 13, arc_clz64(ARC_X_R(c, 14)));
  /* cbd60: eor x13, x13, #0x3f */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) ^ UINT64_C(63)));
  /* cbd64: add x15, x11, x13, lsl #3 */
  ARC_X_W(c, 15, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 13)) << 3)));
  /* cbd68: cmp x12, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 15));
  /* cbd6c: b.eq #0xcbd4c */
  if (ARC_COND(c, 0)) goto L_cbd4c;
  /* cbd70: ldr x16, [x12] */
  ARC_X_W(c, 16, arc_ld64(ARC_X_R(c, 12)));
  /* cbd74: ldr x17, [x15] */
  ARC_X_W(c, 17, arc_ld64(ARC_X_R(c, 15)));
  /* cbd78: str x16, [x15] */
  arc_st64(ARC_X_R(c, 15), ARC_X_R(c, 16));
  /* cbd7c: str x17, [x12] */
  arc_st64(ARC_X_R(c, 12), ARC_X_R(c, 17));
  /* cbd80: b #0xcbd4c */
  goto L_cbd4c;
L_cbd84:;
  /* cbd84: lsl x11, x21, x11 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 21)) << ((ARC_X_R(c, 11)) & 63)));
  /* cbd88: add x23, x23, #8 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* cbd8c: bic x13, x13, x11 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) & (~ARC_X_R(c, 11))));
  /* cbd90: cbz x13, #0xcbdc0 */
  if ((ARC_X_R(c, 13)) == 0) goto L_cbdc0;
L_cbd94:;
  /* cbd94: clz x11, x13 */
  ARC_X_W(c, 11, arc_clz64(ARC_X_R(c, 13)));
  /* cbd98: eor x11, x11, #0x3f */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) ^ UINT64_C(63)));
  /* cbd9c: sub x14, x12, x11, lsl #3 */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 11)) << 3)));
  /* cbda0: cmp x23, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 14));
  /* cbda4: b.eq #0xcbd84 */
  if (ARC_COND(c, 0)) goto L_cbd84;
  /* cbda8: ldr x15, [x23] */
  ARC_X_W(c, 15, arc_ld64(ARC_X_R(c, 23)));
  /* cbdac: ldr x16, [x14] */
  ARC_X_W(c, 16, arc_ld64(ARC_X_R(c, 14)));
  /* cbdb0: str x15, [x14] */
  arc_st64(ARC_X_R(c, 14), ARC_X_R(c, 15));
  /* cbdb4: str x16, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 16));
  /* cbdb8: b #0xcbd84 */
  goto L_cbd84;
L_cbdbc:;
  /* cbdbc: add x23, x12, #8 */
  ARC_X_W(c, 23, (ARC_X_R(c, 12) + UINT64_C(8)));
L_cbdc0:;
  /* cbdc0: sub x24, x23, #8 */
  ARC_X_W(c, 24, (ARC_X_R(c, 23) - UINT64_C(8)));
  /* cbdc4: cmp x19, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 24));
  /* cbdc8: b.eq #0xcbdd4 */
  if (ARC_COND(c, 0)) goto L_cbdd4;
  /* cbdcc: ldr x11, [x24] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 24)));
  /* cbdd0: str x11, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 11));
L_cbdd4:;
  /* cbdd4: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* cbdd8: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* cbddc: b.lo #0xcbe14 */
  if (ARC_COND(c, 3)) goto L_cbe14;
  /* cbde0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* cbde4: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* cbde8: bl #0xd1924 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(835052));
  fn1_d1924(c);
  /* cbdec: mov w25, w0 */
  ARC_W_W(c, 25, ARC_W_R(c, 0));
  /* cbdf0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* cbdf4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* cbdf8: bl #0xd1924 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(835068));
  fn1_d1924(c);
  /* cbdfc: tbnz w0, #0, #0xcbf00 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_cbf00;
  /* cbe00: ldp q18, q17, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_q_w(c, 18, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 17, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cbe04: mov x4, #-0x200 */
  ARC_X_W(c, 4, UINT64_C(18446744073709551104));
  /* cbe08: ldur q16, [x29, #-0x20] */
  arc_q_w(c, 16, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* cbe0c: ldr q19, [sp] */
  arc_q_w(c, 19, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* cbe10: tbnz w25, #0, #0xcb71c */
  if (((ARC_W_R(c, 25)) >> 0 & 1) != 0) goto L_cb71c;
L_cbe14:;
  /* cbe14: ldur w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* cbe18: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* cbe1c: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* cbe20: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* cbe24: and w3, w8, #1 */
  ARC_W_W(c, 3, (ARC_W_R(c, 8) & UINT64_C(1)));
  /* cbe28: bl #0xcb6b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(835116));
  fn1_cb6b0(c);
  /* cbe2c: ldp q19, q18, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_q_w(c, 19, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 18, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cbe30: mov x4, #-0x200 */
  ARC_X_W(c, 4, UINT64_C(18446744073709551104));
  /* cbe34: ldr q17, [sp, #0x20] */
  arc_q_w(c, 17, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* cbe38: ldur q16, [x29, #-0x20] */
  arc_q_w(c, 16, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* cbe3c: stur wzr, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 31));
  /* cbe40: b #0xcb71c */
  goto L_cb71c;
L_cbe44:;
  /* cbe44: add x23, x11, x13, lsl #3 */
  ARC_X_W(c, 23, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 13)) << 3)));
  /* cbe48: b #0xcbdc0 */
  goto L_cbdc0;
L_cbe4c:;
  /* cbe4c: ldur x9, [x20, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* cbe50: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* cbe54: b.ge #0xcbe6c */
  if (ARC_COND(c, 10)) goto L_cbe6c;
  /* cbe58: mov x23, x19 */
  ARC_X_W(c, 23, ARC_X_R(c, 19));
L_cbe5c:;
  /* cbe5c: ldr x9, [x23, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 23) + INT64_C(8));
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_a));
  }
  /* cbe60: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* cbe64: b.ge #0xcbe5c */
  if (ARC_COND(c, 10)) goto L_cbe5c;
  /* cbe68: b #0xcbe8c */
  goto L_cbe8c;
L_cbe6c:;
  /* cbe6c: add x9, x19, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(8)));
L_cbe70:;
  /* cbe70: mov x23, x9 */
  ARC_X_W(c, 23, ARC_X_R(c, 9));
  /* cbe74: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* cbe78: b.hs #0xcbe8c */
  if (ARC_COND(c, 2)) goto L_cbe8c;
  /* cbe7c: mov x9, x23 */
  ARC_X_W(c, 9, ARC_X_R(c, 23));
  /* cbe80: ldr x10, [x9], #8 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_a));
  }
  /* cbe84: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* cbe88: b.ge #0xcbe70 */
  if (ARC_COND(c, 10)) goto L_cbe70;
L_cbe8c:;
  /* cbe8c: cmp x23, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 20));
  /* cbe90: mov x9, x20 */
  ARC_X_W(c, 9, ARC_X_R(c, 20));
  /* cbe94: b.hs #0xcbea8 */
  if (ARC_COND(c, 2)) goto L_cbea8;
  /* cbe98: mov x9, x20 */
  ARC_X_W(c, 9, ARC_X_R(c, 20));
L_cbe9c:;
  /* cbe9c: ldr x10, [x9, #-8]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(-8));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(-8));
    ARC_X_W(c, 10, arc_ld64(_a));
  }
  /* cbea0: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* cbea4: b.lt #0xcbe9c */
  if (ARC_COND(c, 11)) goto L_cbe9c;
L_cbea8:;
  /* cbea8: cmp x23, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 9));
  /* cbeac: b.hs #0xcbee0 */
  if (ARC_COND(c, 2)) goto L_cbee0;
  /* cbeb0: ldr x10, [x23] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 23)));
  /* cbeb4: ldr x11, [x9] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 9)));
L_cbeb8:;
  /* cbeb8: str x11, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 11));
  /* cbebc: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_cbec0:;
  /* cbec0: ldr x10, [x23, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 23) + INT64_C(8));
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_a));
  }
  /* cbec4: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* cbec8: b.ge #0xcbec0 */
  if (ARC_COND(c, 10)) goto L_cbec0;
L_cbecc:;
  /* cbecc: ldr x11, [x9, #-8]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(-8));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(-8));
    ARC_X_W(c, 11, arc_ld64(_a));
  }
  /* cbed0: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* cbed4: b.lt #0xcbecc */
  if (ARC_COND(c, 11)) goto L_cbecc;
  /* cbed8: cmp x23, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 9));
  /* cbedc: b.lo #0xcbeb8 */
  if (ARC_COND(c, 3)) goto L_cbeb8;
L_cbee0:;
  /* cbee0: sub x9, x23, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) - UINT64_C(8)));
  /* cbee4: cmp x19, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* cbee8: b.eq #0xcbef4 */
  if (ARC_COND(c, 0)) goto L_cbef4;
  /* cbeec: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* cbef0: str x10, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 10));
L_cbef4:;
  /* cbef4: stur wzr, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 31));
  /* cbef8: str x8, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* cbefc: b #0xcb71c */
  goto L_cb71c;
L_cbf00:;
  /* cbf00: ldp q18, q17, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_q_w(c, 18, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 17, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cbf04: mov x20, x24 */
  ARC_X_W(c, 20, ARC_X_R(c, 24));
  /* cbf08: ldur q16, [x29, #-0x20] */
  arc_q_w(c, 16, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* cbf0c: ldr q19, [sp] */
  arc_q_w(c, 19, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* cbf10: mov x4, #-0x200 */
  ARC_X_W(c, 4, UINT64_C(18446744073709551104));
  /* cbf14: tbz w25, #0, #0xcb718 */
  if (((ARC_W_R(c, 25)) >> 0 & 1) == 0) goto L_cb718;
  /* cbf18: b #0xcc0b0 */
  goto L_cc0b0;
L_cbf1c:;
  /* cbf1c: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* cbf20: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* cbf24: csel x10, x8, x9, gt */
  ARC_X_W(c, 10, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* cbf28: csel x8, x8, x9, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* cbf2c: stp x8, x10, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* cbf30: ldr x8, [x19, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* cbf34: ldur x9, [x20, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* cbf38: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* cbf3c: csel x10, x8, x9, gt */
  ARC_X_W(c, 10, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* cbf40: csel x8, x8, x9, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* cbf44: stur x10, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 10));
  /* cbf48: str x8, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 8));
  /* cbf4c: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* cbf50: ldur x8, [x20, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* cbf54: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* cbf58: csel x10, x8, x9, gt */
  ARC_X_W(c, 10, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* cbf5c: csel x8, x8, x9, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* cbf60: stur x10, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 10));
  /* cbf64: ldp x9, x10, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* cbf68: ldr x11, [x19, #8] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* cbf6c: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* cbf70: csel x9, x9, x10, lt */
  ARC_X_W(c, 9, (ARC_COND(c, 11) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* cbf74: csel x8, x8, x10, gt */
  ARC_X_W(c, 8, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cbf78: stp x9, x8, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* cbf7c: ldur x8, [x20, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* cbf80: cmp x11, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 8));
  /* cbf84: csel x9, x11, x8, gt */
  ARC_X_W(c, 9, (ARC_COND(c, 12) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 8)));
  /* cbf88: csel x8, x11, x8, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 8)));
  /* cbf8c: stur x9, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 9));
  /* cbf90: ldp x11, x10, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* cbf94: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* cbf98: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* cbf9c: csel x12, x10, x9, lt */
  ARC_X_W(c, 12, (ARC_COND(c, 11) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* cbfa0: csel x10, x10, x9, gt */
  ARC_X_W(c, 10, (ARC_COND(c, 12) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* cbfa4: cmp x12, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 11));
  /* cbfa8: csel x9, x9, x11, lt */
  ARC_X_W(c, 9, (ARC_COND(c, 11) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 11)));
  /* cbfac: csel x11, x12, x11, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* cbfb0: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* cbfb4: csel x12, x10, x8, lt */
  ARC_X_W(c, 12, (ARC_COND(c, 11) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* cbfb8: csel x10, x10, x8, gt */
  ARC_X_W(c, 10, (ARC_COND(c, 12) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* cbfbc: cmp x12, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 11));
  /* cbfc0: csel x8, x8, x11, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 11)));
  /* cbfc4: stp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* cbfc8: csel x8, x12, x11, gt */
  ARC_X_W(c, 8, (ARC_COND(c, 12) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* cbfcc: stp x8, x10, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* cbfd0: b #0xcc0b0 */
  goto L_cc0b0;
L_cbfd4:;
  /* cbfd4: ldur x8, [x20, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* cbfd8: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* cbfdc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* cbfe0: b.ge #0xcc0b0 */
  if (ARC_COND(c, 10)) goto L_cc0b0;
  /* cbfe4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* cbfe8: stur x9, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 9));
  /* cbfec: b #0xcc0b0 */
  goto L_cc0b0;
L_cbff0:;
  /* cbff0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* cbff4: ldur x9, [x20, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* cbff8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* cbffc: csel x10, x8, x9, gt */
  ARC_X_W(c, 10, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* cc000: csel x8, x8, x9, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* cc004: stur x10, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 10));
  /* cc008: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* cc00c: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* cc010: ldur x8, [x20, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* cc014: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* cc018: csel x10, x8, x9, gt */
  ARC_X_W(c, 10, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* cc01c: csel x8, x8, x9, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* cc020: stur x10, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 10));
  /* cc024: ldp x9, x10, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* cc028: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* cc02c: csel x9, x9, x10, lt */
  ARC_X_W(c, 9, (ARC_COND(c, 11) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* cc030: csel x8, x8, x10, gt */
  ARC_X_W(c, 8, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cc034: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* cc038: b #0xcc0ac */
  goto L_cc0ac;
L_cc03c:;
  /* cc03c: ldp x10, x8, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* cc040: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* cc044: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* cc048: csel x11, x9, x8, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* cc04c: csel x8, x9, x8, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* cc050: str x11, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 11));
  /* cc054: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* cc058: ldur x8, [x20, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* cc05c: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* cc060: csel x9, x10, x8, gt */
  ARC_X_W(c, 9, (ARC_COND(c, 12) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* cc064: csel x8, x10, x8, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* cc068: stur x9, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 9));
  /* cc06c: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* cc070: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* cc074: csel x10, x9, x8, gt */
  ARC_X_W(c, 10, (ARC_COND(c, 12) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* cc078: csel x8, x9, x8, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* cc07c: stp x8, x10, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* cc080: ldr x8, [x19, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* cc084: ldur x9, [x20, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* cc088: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* cc08c: csel x10, x8, x9, gt */
  ARC_X_W(c, 10, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* cc090: csel x8, x8, x9, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* cc094: stur x10, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 10));
  /* cc098: ldr x10, [x19, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* cc09c: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* cc0a0: csel x9, x10, x8, gt */
  ARC_X_W(c, 9, (ARC_COND(c, 12) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* cc0a4: csel x8, x10, x8, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* cc0a8: str x9, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 9));
L_cc0ac:;
  /* cc0ac: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_cc0b0:;
  /* cc0b0: ldp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* cc0b4: ldp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* cc0b8: ldp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* cc0bc: ldp x26, x25, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* cc0c0: ldp x28, x27, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* cc0c4: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* cc0c8: add sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(176)));
  /* cc0cc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* cc0d0: ret  */
  return;
L_cc0d4:;
  /* cc0d4: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* cc0d8: add x9, x19, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* cc0dc: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* cc0e0: ccmp x9, x20, #4, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20)); }
  else { (c)->nf = 0; (c)->zf = 1;
          (c)->cf = 0; (c)->vf = 0; }
  /* cc0e4: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* cc0e8: tbz w10, #0, #0xcc324 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) == 0) goto L_cc324;
  /* cc0ec: tbnz w8, #0, #0xcc0b0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_cc0b0;
  /* cc0f0: mov w8, #8 */
  ARC_W_W(c, 8, UINT64_C(8));
  /* cc0f4: mov x10, x19 */
  ARC_X_W(c, 10, ARC_X_R(c, 19));
  /* cc0f8: b #0xcc114 */
  goto L_cc114;
L_cc0fc:;
  /* cc0fc: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
L_cc100:;
  /* cc100: str x11, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 11));
L_cc104:;
  /* cc104: add x9, x10, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(8)));
  /* cc108: add x8, x8, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* cc10c: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* cc110: b.eq #0xcc0b0 */
  if (ARC_COND(c, 0)) goto L_cc0b0;
L_cc114:;
  /* cc114: ldp x12, x11, [x10] */
  { const uint64_t _pa = ARC_X_R(c, 10);
    ARC_X_W(c, 12, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* cc118: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* cc11c: cmp x11, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 12));
  /* cc120: b.ge #0xcc104 */
  if (ARC_COND(c, 10)) goto L_cc104;
  /* cc124: mov x13, x8 */
  ARC_X_W(c, 13, ARC_X_R(c, 8));
L_cc128:;
  /* cc128: subs x9, x13, #8 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 13), UINT64_C(8)));
  /* cc12c: str x12, [x19, x13] */
  arc_st64((ARC_X_R(c, 19) + ARC_X_R(c, 13)), ARC_X_R(c, 12));
  /* cc130: b.eq #0xcc0fc */
  if (ARC_COND(c, 0)) goto L_cc0fc;
  /* cc134: add x12, x19, x13 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + ARC_X_R(c, 13)));
  /* cc138: mov x13, x9 */
  ARC_X_W(c, 13, ARC_X_R(c, 9));
  /* cc13c: ldur x12, [x12, #-0x10] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 12) + INT64_C(-16))));
  /* cc140: cmp x11, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 12));
  /* cc144: b.lt #0xcc128 */
  if (ARC_COND(c, 11)) goto L_cc128;
  /* cc148: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* cc14c: b #0xcc100 */
  goto L_cc100;
L_cc150:;
  /* cc150: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* cc154: b.eq #0xcc0b0 */
  if (ARC_COND(c, 0)) goto L_cc0b0;
  /* cc158: lsr x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* cc15c: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* cc160: b #0xcc174 */
  goto L_cc174;
L_cc164:;
  /* cc164: str x13, [x14] */
  arc_st64(ARC_X_R(c, 14), ARC_X_R(c, 13));
L_cc168:;
  /* cc168: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* cc16c: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* cc170: b.le #0xcc244 */
  if (ARC_COND(c, 13)) goto L_cc244;
L_cc174:;
  /* cc174: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* cc178: b.lo #0xcc168 */
  if (ARC_COND(c, 3)) goto L_cc168;
  /* cc17c: mov w12, #1 */
  ARC_W_W(c, 12, UINT64_C(1));
  /* cc180: lsl x11, x10, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* cc184: bfi x12, x10, #1, #0x3e */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 12)) & UINT64_C(9223372036854775809)) | ((((uint64_t)(ARC_X_R(c, 10))) & UINT64_C(4611686018427387903)) << 1)));
  /* cc188: add x13, x11, #2 */
  ARC_X_W(c, 13, (ARC_X_R(c, 11) + UINT64_C(2)));
  /* cc18c: add x11, x19, x12, lsl #3 */
  ARC_X_W(c, 11, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 12)) << 3)));
  /* cc190: cmp x13, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 8));
  /* cc194: b.ge #0xcc1b8 */
  if (ARC_COND(c, 10)) goto L_cc1b8;
  /* cc198: mov x14, x11 */
  ARC_X_W(c, 14, ARC_X_R(c, 11));
  /* cc19c: ldr x15, [x11] */
  ARC_X_W(c, 15, arc_ld64(ARC_X_R(c, 11)));
  /* cc1a0: ldr x16, [x14, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 14) + INT64_C(8));
    ARC_X_W(c, 14, ARC_X_R(c, 14) + INT64_C(8));
    ARC_X_W(c, 16, arc_ld64(_a));
  }
  /* cc1a4: cmp x15, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 16));
  /* cc1a8: csel x15, x15, x16, gt */
  ARC_X_W(c, 15, (ARC_COND(c, 12) ? (ARC_X_R(c, 15)) : ARC_X_R(c, 16)));
  /* cc1ac: csel x11, x14, x11, lt */
  ARC_X_W(c, 11, (ARC_COND(c, 11) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* cc1b0: csel x12, x13, x12, lt */
  ARC_X_W(c, 12, (ARC_COND(c, 11) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 12)));
  /* cc1b4: b #0xcc1bc */
  goto L_cc1bc;
L_cc1b8:;
  /* cc1b8: ldr x15, [x11] */
  ARC_X_W(c, 15, arc_ld64(ARC_X_R(c, 11)));
L_cc1bc:;
  /* cc1bc: add x14, x19, x10, lsl #3 */
  ARC_X_W(c, 14, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 10)) << 3)));
  /* cc1c0: ldr x13, [x14] */
  ARC_X_W(c, 13, arc_ld64(ARC_X_R(c, 14)));
  /* cc1c4: cmp x15, x13 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 13));
  /* cc1c8: b.ge #0xcc1f4 */
  if (ARC_COND(c, 10)) goto L_cc1f4;
  /* cc1cc: b #0xcc168 */
  goto L_cc168;
L_cc1d0:;
  /* cc1d0: mov x17, x11 */
  ARC_X_W(c, 17, ARC_X_R(c, 11));
  /* cc1d4: ldr x15, [x11] */
  ARC_X_W(c, 15, arc_ld64(ARC_X_R(c, 11)));
  /* cc1d8: ldr x0, [x17, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 17) + INT64_C(8));
    ARC_X_W(c, 17, ARC_X_R(c, 17) + INT64_C(8));
    ARC_X_W(c, 0, arc_ld64(_a));
  }
  /* cc1dc: cmp x15, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 0));
  /* cc1e0: csel x15, x15, x0, gt */
  ARC_X_W(c, 15, (ARC_COND(c, 12) ? (ARC_X_R(c, 15)) : ARC_X_R(c, 0)));
  /* cc1e4: csel x11, x17, x11, lt */
  ARC_X_W(c, 11, (ARC_COND(c, 11) ? (ARC_X_R(c, 17)) : ARC_X_R(c, 11)));
  /* cc1e8: csel x12, x12, x16, lt */
  ARC_X_W(c, 12, (ARC_COND(c, 11) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 16)));
  /* cc1ec: cmp x15, x13 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 13));
  /* cc1f0: b.lt #0xcc164 */
  if (ARC_COND(c, 11)) goto L_cc164;
L_cc1f4:;
  /* cc1f4: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* cc1f8: str x15, [x14] */
  arc_st64(ARC_X_R(c, 14), ARC_X_R(c, 15));
  /* cc1fc: mov x14, x11 */
  ARC_X_W(c, 14, ARC_X_R(c, 11));
  /* cc200: b.lt #0xcc164 */
  if (ARC_COND(c, 11)) goto L_cc164;
  /* cc204: mov w16, #1 */
  ARC_W_W(c, 16, UINT64_C(1));
  /* cc208: lsl x11, x12, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 12)) << ((UINT64_C(1)) & 63)));
  /* cc20c: bfi x16, x12, #1, #0x3e */
  ARC_X_W(c, 16, (((uint64_t)(ARC_X_R(c, 16)) & UINT64_C(9223372036854775809)) | ((((uint64_t)(ARC_X_R(c, 12))) & UINT64_C(4611686018427387903)) << 1)));
  /* cc210: add x12, x11, #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 11) + UINT64_C(2)));
  /* cc214: add x11, x19, x16, lsl #3 */
  ARC_X_W(c, 11, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 16)) << 3)));
  /* cc218: cmp x12, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 8));
  /* cc21c: b.lt #0xcc1d0 */
  if (ARC_COND(c, 11)) goto L_cc1d0;
  /* cc220: ldr x15, [x11] */
  ARC_X_W(c, 15, arc_ld64(ARC_X_R(c, 11)));
  /* cc224: mov x12, x16 */
  ARC_X_W(c, 12, ARC_X_R(c, 16));
  /* cc228: cmp x15, x13 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 13));
  /* cc22c: b.ge #0xcc1f4 */
  if (ARC_COND(c, 10)) goto L_cc1f4;
  /* cc230: b #0xcc164 */
  goto L_cc164;
L_cc234:;
  /* cc234: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_cc238:;
  /* cc238: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* cc23c: sub x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* cc240: b.le #0xcc0b0 */
  if (ARC_COND(c, 13)) goto L_cc0b0;
L_cc244:;
  /* cc244: sub x9, x8, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(2)));
  /* cc248: ldr x10, [x19] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 19)));
  /* cc24c: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* cc250: lsr x11, x9, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* cc254: mov x12, x19 */
  ARC_X_W(c, 12, ARC_X_R(c, 19));
  /* cc258: b #0xcc284 */
  goto L_cc284;
L_cc25c:;
  /* cc25c: ldr x13, [x16, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 16) + INT64_C(16));
    ARC_X_W(c, 16, ARC_X_R(c, 16) + INT64_C(16));
    ARC_X_W(c, 13, arc_ld64(_a));
  }
  /* cc260: ldur x15, [x16, #-8] */
  ARC_X_W(c, 15, arc_ld64((ARC_X_R(c, 16) + INT64_C(-8))));
  /* cc264: cmp x15, x13 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 13));
  /* cc268: csel x15, x15, x13, gt */
  ARC_X_W(c, 15, (ARC_COND(c, 12) ? (ARC_X_R(c, 15)) : ARC_X_R(c, 13)));
  /* cc26c: csel x9, x16, x9, lt */
  ARC_X_W(c, 9, (ARC_COND(c, 11) ? (ARC_X_R(c, 16)) : ARC_X_R(c, 9)));
  /* cc270: csel x13, x17, x14, lt */
  ARC_X_W(c, 13, (ARC_COND(c, 11) ? (ARC_X_R(c, 17)) : ARC_X_R(c, 14)));
L_cc274:;
  /* cc274: cmp x13, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 11));
  /* cc278: str x15, [x12] */
  arc_st64(ARC_X_R(c, 12), ARC_X_R(c, 15));
  /* cc27c: mov x12, x9 */
  ARC_X_W(c, 12, ARC_X_R(c, 9));
  /* cc280: b.gt #0xcc2b0 */
  if (ARC_COND(c, 12)) goto L_cc2b0;
L_cc284:;
  /* cc284: lsl x9, x13, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 13)) << ((UINT64_C(1)) & 63)));
  /* cc288: add x16, x12, x13, lsl #3 */
  ARC_X_W(c, 16, (ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 13)) << 3)));
  /* cc28c: mov w14, #1 */
  ARC_W_W(c, 14, UINT64_C(1));
  /* cc290: bfi x14, x13, #1, #0x3f */
  ARC_X_W(c, 14, (((uint64_t)(ARC_X_R(c, 14)) & UINT64_C(1)) | ((((uint64_t)(ARC_X_R(c, 13))) & UINT64_C(9223372036854775807)) << 1)));
  /* cc294: add x17, x9, #2 */
  ARC_X_W(c, 17, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* cc298: add x9, x16, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 16) + UINT64_C(8)));
  /* cc29c: cmp x17, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 17), ARC_X_R(c, 8));
  /* cc2a0: b.lt #0xcc25c */
  if (ARC_COND(c, 11)) goto L_cc25c;
  /* cc2a4: ldr x15, [x9] */
  ARC_X_W(c, 15, arc_ld64(ARC_X_R(c, 9)));
  /* cc2a8: mov x13, x14 */
  ARC_X_W(c, 13, ARC_X_R(c, 14));
  /* cc2ac: b #0xcc274 */
  goto L_cc274;
L_cc2b0:;
  /* cc2b0: sub x20, x20, #8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) - UINT64_C(8)));
  /* cc2b4: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* cc2b8: b.eq #0xcc234 */
  if (ARC_COND(c, 0)) goto L_cc234;
  /* cc2bc: sub x11, x9, x19 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) - ARC_X_R(c, 19)));
  /* cc2c0: ldr x12, [x20] */
  ARC_X_W(c, 12, arc_ld64(ARC_X_R(c, 20)));
  /* cc2c4: add x11, x11, #8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(8)));
  /* cc2c8: asr x11, x11, #3 */
  ARC_X_W(c, 11, ((uint64_t)((int64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(3)) & 63))));
  /* cc2cc: str x12, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* cc2d0: str x10, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 10));
  /* cc2d4: subs x11, x11, #2 */
  ARC_X_W(c, 11, arc_sub64(c, ARC_X_R(c, 11), UINT64_C(2)));
  /* cc2d8: b.lt #0xcc238 */
  if (ARC_COND(c, 11)) goto L_cc238;
  /* cc2dc: lsr x10, x11, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(1)) & 63)));
  /* cc2e0: ldr x11, [x9] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 9)));
  /* cc2e4: add x12, x19, x10, lsl #3 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 10)) << 3)));
  /* cc2e8: ldr x13, [x12] */
  ARC_X_W(c, 13, arc_ld64(ARC_X_R(c, 12)));
  /* cc2ec: cmp x13, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 11));
  /* cc2f0: b.ge #0xcc238 */
  if (ARC_COND(c, 10)) goto L_cc238;
L_cc2f4:;
  /* cc2f4: mov x14, x9 */
  ARC_X_W(c, 14, ARC_X_R(c, 9));
  /* cc2f8: mov x9, x12 */
  ARC_X_W(c, 9, ARC_X_R(c, 12));
  /* cc2fc: str x13, [x14] */
  arc_st64(ARC_X_R(c, 14), ARC_X_R(c, 13));
  /* cc300: cbz x10, #0xcc31c */
  if ((ARC_X_R(c, 10)) == 0) goto L_cc31c;
  /* cc304: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* cc308: lsr x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* cc30c: add x12, x19, x10, lsl #3 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 10)) << 3)));
  /* cc310: ldr x13, [x12] */
  ARC_X_W(c, 13, arc_ld64(ARC_X_R(c, 12)));
  /* cc314: cmp x13, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 11));
  /* cc318: b.lt #0xcc2f4 */
  if (ARC_COND(c, 11)) goto L_cc2f4;
L_cc31c:;
  /* cc31c: str x11, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 11));
  /* cc320: b #0xcc238 */
  goto L_cc238;
L_cc324:;
  /* cc324: tbz w8, #0, #0xcc338 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_cc338;
  /* cc328: b #0xcc0b0 */
  goto L_cc0b0;
L_cc32c:;
  /* cc32c: add x9, x19, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* cc330: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* cc334: b.eq #0xcc0b0 */
  if (ARC_COND(c, 0)) goto L_cc0b0;
L_cc338:;
  /* cc338: ldp x10, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* cc33c: mov x19, x9 */
  ARC_X_W(c, 19, ARC_X_R(c, 9));
  /* cc340: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* cc344: b.ge #0xcc32c */
  if (ARC_COND(c, 10)) goto L_cc32c;
  /* cc348: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
L_cc34c:;
  /* cc34c: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* cc350: ldur x10, [x9, #-0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 9) + INT64_C(-16))));
  /* cc354: sub x9, x9, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(8)));
  /* cc358: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* cc35c: b.lt #0xcc34c */
  if (ARC_COND(c, 11)) goto L_cc34c;
  /* cc360: str x8, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* cc364: b #0xcc32c */
  goto L_cc32c;
}

void fn1_d7420(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038809632));
  /* d7420: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d7424: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d7428: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* d742c: nop  */
  /* nop: no architectural effect here */
  /* d7430: adr x0, #0x156bb8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1403832)));
  /* d7434: bl #0x144ac8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(881720));
  fn1_144ac8(c);
  /* d7438: ldr w0, [x0, #8] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(8))));
  /* d743c: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d7440: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d7444: ret  */
  return;
}

void fn1_db3a4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038825892));
  /* db3a4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* db3a8: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* db3ac: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* db3b0: add x1, x0, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 0) + UINT64_C(8)));
  /* db3b4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* db3b8: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(897980));
  fn1_db2e0(c);
  /* db3bc: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* db3c0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* db3c4: ret  */
  return;
}

void fn1_ddc14(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038836244));
  /* ddc14: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ddc18: str d8, [sp, #-0x30]! */
  arc_st64(((c)->sp + INT64_C(-48)), (c)->q[8].u64[0]);
  (c)->sp = (c)->sp + INT64_C(-48);
  /* ddc1c: stp x29, x30, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ddc20: str x21, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 21));
  /* ddc24: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ddc28: add x29, sp, #8 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(8)));
  /* ddc2c: fmov x8, d0 */
  ARC_X_W(c, 8, ARC_DU_R(c, 0));
  /* ddc30: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* ddc34: cbz x8, #0xddc5c */
  if ((ARC_X_R(c, 8)) == 0) goto L_ddc5c;
  /* ddc38: cmp w2, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 2), UINT64_C(2));
  /* ddc3c: b.ne #0xddc7c */
  if (ARC_COND(c, 1)) goto L_ddc7c;
  /* ddc40: lsr x9, x8, #0x36 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(54)) & 63)));
  /* ddc44: cmp x9, #0x10d */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(269));
  /* ddc48: b.lo #0xddc7c */
  if (ARC_COND(c, 3)) goto L_ddc7c;
  /* ddc4c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* ddc50: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* ddc54: bl #0xdc610 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(908376));
  fn1_dc610(c);
  /* ddc58: b #0xddcdc */
  goto L_ddcdc;
L_ddc5c:;
  /* ddc5c: cmp w2, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 2), UINT64_C(1));
  /* ddc60: b.ne #0xddd08 */
  if (ARC_COND(c, 1)) goto L_ddd08;
  /* ddc64: sub x8, x19, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) - ARC_X_R(c, 0)));
  /* ddc68: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* ddc6c: b.ge #0xddd28 */
  if (ARC_COND(c, 10)) goto L_ddd28;
  /* ddc70: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ddc74: mov w9, #0x4b */
  ARC_W_W(c, 9, UINT64_C(75));
  /* ddc78: b #0xddce8 */
  goto L_ddce8;
L_ddc7c:;
  /* ddc7c: lsr x1, x8, #0x34 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(52)) & 63)));
  /* ddc80: and x8, x8, #0xfffffffffffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(4503599627370495)));
  /* ddc84: sub w9, w1, #0x434 */
  ARC_W_W(c, 9, (ARC_W_R(c, 1) - UINT64_C(1076)));
  /* ddc88: cmn w9, #0x35 */
  (void)arc_add32(c, ARC_W_R(c, 9), UINT64_C(53), 0);
  /* ddc8c: b.lo #0xddcac */
  if (ARC_COND(c, 3)) goto L_ddcac;
  /* ddc90: mov w9, #0x433 */
  ARC_W_W(c, 9, UINT64_C(1075));
  /* ddc94: mov x10, #-1 */
  ARC_X_W(c, 10, UINT64_C(18446744073709551615));
  /* ddc98: sub w9, w9, w1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) - ARC_W_R(c, 1)));
  /* ddc9c: lsl x11, x10, x9 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 10)) << ((ARC_X_R(c, 9)) & 63)));
  /* ddca0: orr x10, x8, #0x10000000000000 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) | UINT64_C(4503599627370496)));
  /* ddca4: bics xzr, x10, x11 */
  { uint64_t _r = (uint64_t)(ARC_X_R(c, 10) & (~ARC_X_R(c, 11)));
    arc_flags_logical64(c, _r);
    ARC_X_W(c, 31, _r); }
  /* ddca8: b.eq #0xddd5c */
  if (ARC_COND(c, 0)) goto L_ddd5c;
L_ddcac:;
  /* ddcac: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ddcb0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* ddcb4: mov w20, w2 */
  ARC_W_W(c, 20, ARC_W_R(c, 2));
  /* ddcb8: fmov d8, d0 */
  arc_du_w(c, 8, (uint64_t)(ARC_DU_R(c, 0)));
  /* ddcbc: bl #0xdddb8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(908480));
  fn1_dddb8(c);
  /* ddcc0: fmov d0, d8 */
  arc_du_w(c, 0, (uint64_t)(ARC_DU_R(c, 8)));
  /* ddcc4: mov x2, x0 */
  ARC_X_W(c, 2, ARC_X_R(c, 0));
  /* ddcc8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ddccc: mov x3, x1 */
  ARC_X_W(c, 3, ARC_X_R(c, 1));
L_ddcd0:;
  /* ddcd0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* ddcd4: mov w4, w20 */
  ARC_W_W(c, 4, ARC_W_R(c, 20));
  /* ddcd8: bl #0xde2c8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(908508));
  fn1_de2c8(c);
L_ddcdc:;
  /* ddcdc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ddce0: and x8, x1, #0xffffffff00000000 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) & UINT64_C(18446744069414584320)));
  /* ddce4: mov w9, w1 */
  ARC_W_W(c, 9, ARC_W_R(c, 1));
L_ddce8:;
  /* ddce8: orr x1, x8, x9 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) | ARC_X_R(c, 9)));
  /* ddcec: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ddcf0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ddcf4: ldr x21, [sp, #0x18] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(24))));
  /* ddcf8: ldp x29, x30, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ddcfc: ldr d8, [sp], #0x30 */
  arc_du_w(c, 8, arc_ld64((c)->sp));
  (c)->sp = (c)->sp + INT64_C(48);
  /* ddd00: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ddd04: ret  */
  return;
L_ddd08:;
  /* ddd08: cmp x0, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 19));
  /* ddd0c: b.eq #0xddd4c */
  if (ARC_COND(c, 0)) goto L_ddd4c;
  /* ddd10: mov w10, #0x30 */
  ARC_W_W(c, 10, UINT64_C(48));
  /* ddd14: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* ddd18: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ddd1c: strb w10, [x0], #1 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 10));
  }
  /* ddd20: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ddd24: b #0xddce8 */
  goto L_ddce8;
L_ddd28:;
  /* ddd28: mov w11, #0x6530 */
  ARC_W_W(c, 11, UINT64_C(25904));
  /* ddd2c: mov w10, #0x30 */
  ARC_W_W(c, 10, UINT64_C(48));
  /* ddd30: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* ddd34: movk w11, #0x302b, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(808124416)));
  /* ddd38: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ddd3c: strb w10, [x0, #4] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(4)), ARC_W_R(c, 10));
  /* ddd40: str w11, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 11));
  /* ddd44: add x19, x0, #5 */
  ARC_X_W(c, 19, (ARC_X_R(c, 0) + UINT64_C(5)));
  /* ddd48: b #0xddce8 */
  goto L_ddce8;
L_ddd4c:;
  /* ddd4c: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ddd50: mov w9, #0x4b */
  ARC_W_W(c, 9, UINT64_C(75));
  /* ddd54: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ddd58: b #0xddce8 */
  goto L_ddce8;
L_ddd5c:;
  /* ddd5c: mov w20, w2 */
  ARC_W_W(c, 20, ARC_W_R(c, 2));
  /* ddd60: lsr x2, x10, x9 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 10)) >> ((ARC_X_R(c, 9)) & 63)));
  /* ddd64: mov x8, #-0x3333333333333334 */
  ARC_X_W(c, 8, UINT64_C(14757395258967641292));
  /* ddd68: movk x8, #0xcccd */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744073709486080)) | UINT64_C(52429)));
  /* ddd6c: umulh x9, x2, x8 */
  ARC_X_W(c, 9, arc_umulh(ARC_X_R(c, 2), ARC_X_R(c, 8)));
  /* ddd70: lsr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63)));
  /* ddd74: mov w9, #-0xa */
  ARC_W_W(c, 9, UINT64_C(18446744073709551606));
  /* ddd78: mul w11, w10, w9 */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 10)) * (uint32_t)(ARC_W_R(c, 9))));
  /* ddd7c: cmn w11, w2 */
  (void)arc_add32(c, ARC_W_R(c, 11), ARC_W_R(c, 2), 0);
  /* ddd80: b.ne #0xdddb0 */
  if (ARC_COND(c, 1)) goto L_dddb0;
  /* ddd84: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
L_ddd88:;
  /* ddd88: mov x2, x10 */
  ARC_X_W(c, 2, ARC_X_R(c, 10));
  /* ddd8c: umulh x10, x10, x8 */
  ARC_X_W(c, 10, arc_umulh(ARC_X_R(c, 10), ARC_X_R(c, 8)));
  /* ddd90: add w12, w3, #1 */
  ARC_W_W(c, 12, (ARC_W_R(c, 3) + UINT64_C(1)));
  /* ddd94: and x13, x3, #0xffffffff00000000 */
  ARC_X_W(c, 13, (ARC_X_R(c, 3) & UINT64_C(18446744069414584320)));
  /* ddd98: orr x3, x12, x13 */
  ARC_X_W(c, 3, (ARC_X_R(c, 12) | ARC_X_R(c, 13)));
  /* ddd9c: lsr x10, x10, #3 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(3)) & 63)));
  /* ddda0: mul w11, w10, w9 */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 10)) * (uint32_t)(ARC_W_R(c, 9))));
  /* ddda4: cmn w11, w2 */
  (void)arc_add32(c, ARC_W_R(c, 11), ARC_W_R(c, 2), 0);
  /* ddda8: b.eq #0xddd88 */
  if (ARC_COND(c, 0)) goto L_ddd88;
  /* dddac: b #0xddcd0 */
  goto L_ddcd0;
L_dddb0:;
  /* dddb0: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* dddb4: b #0xddcd0 */
  goto L_ddcd0;
}

void fn1_e1d10(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038852880));
  /* e1d10: bti c */
  /* bti: no architectural effect here */
  /* e1d14: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* e1d18: ldr x8, [x0, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* e1d1c: lsr x10, x9, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* e1d20: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e1d24: csel x8, x10, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* e1d28: subs x8, x1, x8 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 8)));
  /* e1d2c: b.ls #0xe1d38 */
  if (ARC_COND(c, 9)) goto L_e1d38;
  /* e1d30: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* e1d34: b #0x142d10 */
  fn1_142d10(c); return;
L_e1d38:;
  /* e1d38: tbnz w9, #0, #0xe1d4c */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_e1d4c;
  /* e1d3c: lsl w8, w1, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 1)) << ((UINT64_C(1)) & 31)));
  /* e1d40: strb w8, [x0], #1 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* e1d44: strb wzr, [x0, x1] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 1)), ARC_W_R(c, 31));
  /* e1d48: ret  */
  return;
L_e1d4c:;
  /* e1d4c: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e1d50: str x1, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 1));
  /* e1d54: strb wzr, [x8, x1] */
  arc_st8((ARC_X_R(c, 8) + ARC_X_R(c, 1)), ARC_W_R(c, 31));
  /* e1d58: ret  */
  return;
}

void fn1_e4828(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038863912));
  /* e4828: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e482c: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* e4830: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e4834: str x25, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 25));
  /* e4838: stp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e483c: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e4840: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e4844: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* e4848: mov w8, #0xc */
  ARC_W_W(c, 8, UINT64_C(12));
  /* e484c: mov w24, #0x7473 */
  ARC_W_W(c, 24, UINT64_C(29811));
  /* e4850: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e4854: strb w8, [sp] */
  arc_st8((c)->sp, ARC_W_R(c, 8));
  /* e4858: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e485c: movk w24, #0x756f, lsl #16 */
  ARC_W_W(c, 24, ((ARC_W_R(c, 24) & UINT64_C(18446744069414649855)) | UINT64_C(1970208768)));
  /* e4860: mov w23, #0x6c6c */
  ARC_W_W(c, 23, UINT64_C(27756));
  /* e4864: mov w21, w2 */
  ARC_W_W(c, 21, ARC_W_R(c, 2));
  /* e4868: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* e486c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e4870: stur w24, [sp, #1] */
  arc_st32(((c)->sp + INT64_C(1)), ARC_W_R(c, 24));
  /* e4874: sturh w23, [sp, #5] */
  arc_st16(((c)->sp + INT64_C(5)), ARC_W_R(c, 23));
  /* e4878: csinc x20, x9, x0, ne */
  ARC_X_W(c, 20, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 0)) + 1)));
  /* e487c: strb wzr, [sp, #7] */
  arc_st8(((c)->sp + INT64_C(7)), ARC_W_R(c, 31));
  /* e4880: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* e4884: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(936072));
  fn1_142a58(c);
  /* e4888: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* e488c: ldr w25, [x0] */
  ARC_W_W(c, 25, arc_ld32(ARC_X_R(c, 0)));
  /* e4890: str wzr, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 31));
  /* e4894: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* e4898: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e489c: mov w2, w21 */
  ARC_W_W(c, 2, ARC_W_R(c, 21));
  /* e48a0: bl #0x142ec0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(936100));
  fn1_142ec0(c);
  /* e48a4: ldr w8, [x22] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 22)));
  /* e48a8: str w25, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 25));
  /* e48ac: cmp w8, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(34));
  /* e48b0: b.eq #0xe48f8 */
  if (ARC_COND(c, 0)) goto L_e48f8;
  /* e48b4: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* e48b8: subs x8, x8, x20 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20)));
  /* e48bc: b.eq #0xe4930 */
  if (ARC_COND(c, 0)) goto L_e4930;
  /* e48c0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e48c4: cbz x19, #0xe48cc */
  if ((ARC_X_R(c, 19)) == 0) goto L_e48cc;
  /* e48c8: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_e48cc:;
  /* e48cc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e48d0: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(936148));
  fn1_142e00(c);
  /* e48d4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e48d8: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e48dc: ldr x25, [sp, #0x40] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(64))));
  /* e48e0: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e48e4: ldp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e48e8: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e48ec: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* e48f0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e48f4: ret  */
  return;
L_e48f8:;
  /* e48f8: mov w8, #0x28 */
  ARC_W_W(c, 8, UINT64_C(40));
  /* e48fc: str xzr, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 31));
  /* e4900: strb w8, [sp, #0x18] */
  arc_st8(((c)->sp + INT64_C(24)), ARC_W_R(c, 8));
  /* e4904: adrp x8, #0x51000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(331776)));
  /* e4908: add x8, x8, #0xa7d */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2685)));
  /* e490c: ldr x9, [x8] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 8)));
  /* e4910: ldur x8, [x8, #6] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(6))));
  /* e4914: stur w24, [sp, #0x19] */
  arc_st32(((c)->sp + INT64_C(25)), ARC_W_R(c, 24));
  /* e4918: sturh w23, [sp, #0x1d] */
  arc_st16(((c)->sp + INT64_C(29)), ARC_W_R(c, 23));
  /* e491c: stur x9, [sp, #0x1f] */
  arc_st64(((c)->sp + INT64_C(31)), ARC_X_R(c, 9));
  /* e4920: add x9, sp, #0x18 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(24)));
  /* e4924: stur x8, [sp, #0x25] */
  arc_st64(((c)->sp + INT64_C(37)), ARC_X_R(c, 8));
  /* e4928: orr x0, x9, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* e492c: bl #0xda038 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(936240));
  fn1_da038(c);
L_e4930:;
  /* e4930: mov w9, #0x7473 */
  ARC_W_W(c, 9, UINT64_C(29811));
  /* e4934: mov w8, #0x2a */
  ARC_W_W(c, 8, UINT64_C(42));
  /* e4938: str xzr, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 31));
  /* e493c: movk w9, #0x756f, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1970208768)));
  /* e4940: strb w8, [sp, #0x18] */
  arc_st8(((c)->sp + INT64_C(24)), ARC_W_R(c, 8));
  /* e4944: mov w8, #0x6c6c */
  ARC_W_W(c, 8, UINT64_C(27756));
  /* e4948: stur w9, [sp, #0x19] */
  arc_st32(((c)->sp + INT64_C(25)), ARC_W_R(c, 9));
  /* e494c: adrp x9, #0x50000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(327680)));
  /* e4950: add x9, x9, #0x1dd */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(477)));
  /* e4954: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* e4958: sturh w8, [sp, #0x1d] */
  arc_st16(((c)->sp + INT64_C(29)), ARC_W_R(c, 8));
  /* e495c: ldur x8, [x9, #7] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(7))));
  /* e4960: add x9, sp, #0x18 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(24)));
  /* e4964: stur x10, [sp, #0x1f] */
  arc_st64(((c)->sp + INT64_C(31)), ARC_X_R(c, 10));
  /* e4968: stur x8, [sp, #0x26] */
  arc_st64(((c)->sp + INT64_C(38)), ARC_X_R(c, 8));
  /* e496c: orr x0, x9, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* e4970: bl #0xe78a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(936308));
  fn1_e78a0(c);
  /* e4974: b #0xe4978 */
  goto L_e4978;
L_e4978:;
  /* e4978: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e497c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e4980: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(936324));
  fn1_142e00(c);
  /* e4984: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e4988: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(936332));
  fn1_142e00(c);
  /* e498c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e4990: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(936340));
  fn1_9cc20(c);
}

void fn1_e8d54(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038881620));
  /* e8d54: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e8d58: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e8d5c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e8d60: nop  */
  /* nop: no architectural effect here */
  /* e8d64: adr x0, #0x518c9 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(334025)));
  /* e8d68: bl #0xda038 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(953708));
  fn1_da038(c);
}

void fn1_eaf08(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038890248));
  /* eaf08: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eaf0c: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eaf10: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eaf14: ldrb w8, [x0, #8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(8))));
  /* eaf18: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* eaf1c: b.ne #0xeaf28 */
  if (ARC_COND(c, 1)) goto L_eaf28;
  /* eaf20: ldr x0, [x0] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 0)));
  /* eaf24: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962344));
  fn1_142560(c);
L_eaf28:;
  /* eaf28: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eaf2c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eaf30: ret  */
  return;
  /* eaf34: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962360));
  fn1_a1454(c);
}

void fn1_ecf1c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038898460));
  /* ecf1c: bti c */
  /* bti: no architectural effect here */
  /* ecf20: adrp x10, #0x156000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(1400832)));
  /* ecf24: mov w9, w0 */
  ARC_W_W(c, 9, ARC_W_R(c, 0));
  /* ecf28: ldrb w8, [x10, #0xd58] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 10) + INT64_C(3416))));
  /* ecf2c: strb w9, [x10, #0xd58] */
  arc_st8((ARC_X_R(c, 10) + INT64_C(3416)), ARC_W_R(c, 9));
  /* ecf30: mov w0, w8 */
  ARC_W_W(c, 0, ARC_W_R(c, 8));
  /* ecf34: ret  */
  return;
}

void fn1_eef90(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038906768));
  /* eef90: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eef94: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* eef98: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eef9c: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* eefa0: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* eefa4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* eefa8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* eefac: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* eefb0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* eefb4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* eefb8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* eefbc: stur wzr, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 31));
  /* eefc0: bl #0x1435f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(978884));
  fn1_1435f8(c);
  /* eefc4: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* eefc8: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* eefcc: b.ne #0xef094 */
  if (ARC_COND(c, 1)) goto L_ef094;
  /* eefd0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* eefd4: nop  */
  /* nop: no architectural effect here */
  /* eefd8: adr x22, #0x15dc40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432640)));
  /* eefdc: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* eefe0: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* eefe4: ldr x20, [x8, #0x30] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* eefe8: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* eefec: str x20, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 20));
  /* eeff0: b.eq #0xef000 */
  if (ARC_COND(c, 0)) goto L_ef000;
  /* eeff4: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* eeff8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* eeffc: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(978944));
  fn1_db2e0(c);
L_ef000:;
  /* ef000: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* ef004: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* ef008: ldr x1, [x1, #0xb48] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2888))));
  /* ef00c: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(978960));
  fn1_143748(c);
  /* ef010: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ef014: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* ef018: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ef01c: add x3, x19, x8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ef020: ldr x8, [x9, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(72))));
  /* ef024: ldr x1, [x3, #0x28] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 3) + INT64_C(40))));
  /* ef028: sub x4, x29, #4 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* ef02c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* ef030: mov x5, x21 */
  ARC_X_W(c, 5, ARC_X_R(c, 21));
  /* ef034: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(979000));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ef038: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* ef03c: b.eq #0xef060 */
  if (ARC_COND(c, 0)) goto L_ef060;
  /* ef040: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* ef044: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ef048: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(979020));
  fn1_bd950(c);
  /* ef04c: cbnz x0, #0xef060 */
  if ((ARC_X_R(c, 0)) != 0) goto L_ef060;
  /* ef050: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* ef054: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ef058: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ef05c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(979040));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ef060:;
  /* ef060: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ef064: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* ef068: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ef06c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ef070: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* ef074: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* ef078: ldp w11, w9, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* ef07c: orr w10, w11, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* ef080: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* ef084: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* ef088: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* ef08c: str w10, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 10));
  /* ef090: b.ne #0xef0b0 */
  if (ARC_COND(c, 1)) goto L_ef0b0;
L_ef094:;
  /* ef094: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ef098: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ef09c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ef0a0: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ef0a4: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* ef0a8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ef0ac: ret  */
  return;
L_ef0b0:;
  /* ef0b0: nop  */
  /* nop: no architectural effect here */
  /* ef0b4: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* ef0b8: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(979132));
  fn1_ec720(c);
  /* ef0bc: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* ef0c0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ef0c4: b.eq #0xef0e8 */
  if (ARC_COND(c, 0)) goto L_ef0e8;
  /* ef0c8: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* ef0cc: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ef0d0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(979156));
  fn1_bd950(c);
  /* ef0d4: cbnz x0, #0xef0e8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_ef0e8;
  /* ef0d8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* ef0dc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ef0e0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ef0e4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(979176));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ef0e8:;
  /* ef0e8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ef0ec: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(979184));
  fn1_142548(c);
  /* ef0f0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ef0f4: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* ef0f8: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ef0fc: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* ef100: stur w10, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 10));
  /* ef104: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* ef108: ldr w11, [x9, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* ef10c: orr w11, w11, w10 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* ef110: str w11, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 11));
  /* ef114: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ef118: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ef11c: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* ef120: tbnz w8, #0, #0xef12c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_ef12c;
  /* ef124: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(979240));
  fn1_142980(c);
  /* ef128: b #0xef060 */
  goto L_ef060;
L_ef12c:;
  /* ef12c: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(979248));
  fn1_1429b0(c);
  /* ef130: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ef134: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(979256));
  fn1_142980(c);
  /* ef138: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ef13c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(979264));
  fn1_9cc20(c);
  /* ef140: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(979268));
  fn1_a1454(c);
}

void fn1_f38c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038925504));
  /* f38c0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f38c4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f38c8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* f38cc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f38d0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f38d4: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f38d8: add x19, x0, x8 */
  ARC_X_W(c, 19, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* f38dc: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* f38e0: bl #0x1433b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(997604));
  fn1_1433b8(c);
  /* f38e4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f38e8: mov w1, #0xb0 */
  ARC_W_W(c, 1, UINT64_C(176));
  /* f38ec: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f38f0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f38f4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f38f8: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_f59c4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038933956));
  /* f59c4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f59c8: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* f59cc: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f59d0: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f59d4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f59d8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f59dc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f59e0: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* f59e4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f59e8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f59ec: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* f59f0: stur wzr, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 31));
  /* f59f4: bl #0x143670 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1006072));
  fn1_143670(c);
  /* f59f8: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* f59fc: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f5a00: b.ne #0xf5ac8 */
  if (ARC_COND(c, 1)) goto L_f5ac8;
  /* f5a04: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f5a08: nop  */
  /* nop: no architectural effect here */
  /* f5a0c: adr x22, #0x15dc40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f5a10: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f5a14: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f5a18: ldr x20, [x8, #0x30] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f5a1c: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* f5a20: str x20, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 20));
  /* f5a24: b.eq #0xf5a34 */
  if (ARC_COND(c, 0)) goto L_f5a34;
  /* f5a28: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* f5a2c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f5a30: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1006132));
  fn1_db2e0(c);
L_f5a34:;
  /* f5a34: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f5a38: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f5a3c: ldr x1, [x1, #0xb60] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2912))));
  /* f5a40: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1006148));
  fn1_143748(c);
  /* f5a44: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f5a48: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* f5a4c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f5a50: add x3, x19, x8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f5a54: ldr x8, [x9, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(72))));
  /* f5a58: ldr x1, [x3, #0x28] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 3) + INT64_C(40))));
  /* f5a5c: sub x4, x29, #4 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* f5a60: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* f5a64: mov x5, x21 */
  ARC_X_W(c, 5, ARC_X_R(c, 21));
  /* f5a68: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1006188));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f5a6c: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* f5a70: b.eq #0xf5a94 */
  if (ARC_COND(c, 0)) goto L_f5a94;
  /* f5a74: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* f5a78: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f5a7c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1006208));
  fn1_bd950(c);
  /* f5a80: cbnz x0, #0xf5a94 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f5a94;
  /* f5a84: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* f5a88: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f5a8c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f5a90: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1006228));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f5a94:;
  /* f5a94: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f5a98: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* f5a9c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f5aa0: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f5aa4: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f5aa8: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* f5aac: ldp w11, w9, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* f5ab0: orr w10, w11, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* f5ab4: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* f5ab8: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* f5abc: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* f5ac0: str w10, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 10));
  /* f5ac4: b.ne #0xf5ae4 */
  if (ARC_COND(c, 1)) goto L_f5ae4;
L_f5ac8:;
  /* f5ac8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f5acc: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f5ad0: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f5ad4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f5ad8: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* f5adc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f5ae0: ret  */
  return;
L_f5ae4:;
  /* f5ae4: nop  */
  /* nop: no architectural effect here */
  /* f5ae8: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f5aec: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1006320));
  fn1_ec720(c);
  /* f5af0: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* f5af4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* f5af8: b.eq #0xf5b1c */
  if (ARC_COND(c, 0)) goto L_f5b1c;
  /* f5afc: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* f5b00: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f5b04: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1006344));
  fn1_bd950(c);
  /* f5b08: cbnz x0, #0xf5b1c */
  if ((ARC_X_R(c, 0)) != 0) goto L_f5b1c;
  /* f5b0c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* f5b10: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f5b14: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f5b18: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1006364));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f5b1c:;
  /* f5b1c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f5b20: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1006372));
  fn1_142548(c);
  /* f5b24: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f5b28: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* f5b2c: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f5b30: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* f5b34: stur w10, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 10));
  /* f5b38: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f5b3c: ldr w11, [x9, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f5b40: orr w11, w11, w10 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* f5b44: str w11, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 11));
  /* f5b48: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f5b4c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f5b50: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f5b54: tbnz w8, #0, #0xf5b60 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_f5b60;
  /* f5b58: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1006428));
  fn1_142980(c);
  /* f5b5c: b #0xf5a94 */
  goto L_f5a94;
L_f5b60:;
  /* f5b60: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1006436));
  fn1_1429b0(c);
  /* f5b64: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f5b68: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1006444));
  fn1_142980(c);
  /* f5b6c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f5b70: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1006452));
  fn1_9cc20(c);
  /* f5b74: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1006456));
  fn1_a1454(c);
}

void fn1_fb0e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038956264));
  /* fb0e8: bti c */
  /* bti: no architectural effect here */
  /* fb0ec: ldr x8, [x0, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(88))));
  /* fb0f0: ldr x9, [x0, #0x30] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(48))));
  /* fb0f4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* fb0f8: b.hs #0xfb104 */
  if (ARC_COND(c, 2)) goto L_fb104;
  /* fb0fc: mov x8, x9 */
  ARC_X_W(c, 8, ARC_X_R(c, 9));
  /* fb100: str x9, [x0, #0x58] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(88)), ARC_X_R(c, 9));
L_fb104:;
  /* fb104: ands w10, w3, #0x18 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 3) & UINT64_C(24));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 10, _r); }
  /* fb108: b.eq #0xfb11c */
  if (ARC_COND(c, 0)) goto L_fb11c;
  /* fb10c: cmp w2, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 2), UINT64_C(1));
  /* fb110: b.ne #0xfb128 */
  if (ARC_COND(c, 1)) goto L_fb128;
  /* fb114: cmp w10, #0x18 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(24));
  /* fb118: b.ne #0xfb128 */
  if (ARC_COND(c, 1)) goto L_fb128;
L_fb11c:;
  /* fb11c: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* fb120: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* fb124: ret  */
  return;
L_fb128:;
  /* fb128: cbz x8, #0xfb168 */
  if ((ARC_X_R(c, 8)) == 0) goto L_fb168;
  /* fb12c: ldrb w10, [x0, #0x40] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 0) + INT64_C(64))));
  /* fb130: ldr x11, [x0, #0x50] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 0) + INT64_C(80))));
  /* fb134: add x12, x0, #0x41 */
  ARC_X_W(c, 12, (ARC_X_R(c, 0) + UINT64_C(65)));
  /* fb138: tst w10, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1)));
  /* fb13c: csel x10, x12, x11, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* fb140: sub x10, x8, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) - ARC_X_R(c, 10)));
  /* fb144: cbz w2, #0xfb170 */
  if ((ARC_W_R(c, 2)) == 0) goto L_fb170;
L_fb148:;
  /* fb148: cmp w2, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 2), UINT64_C(2));
  /* fb14c: b.eq #0xfb178 */
  if (ARC_COND(c, 0)) goto L_fb178;
  /* fb150: cmp w2, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 2), UINT64_C(1));
  /* fb154: b.ne #0xfb11c */
  if (ARC_COND(c, 1)) goto L_fb11c;
  /* fb158: tbnz w3, #3, #0xfb180 */
  if (((ARC_W_R(c, 3)) >> 3 & 1) != 0) goto L_fb180;
  /* fb15c: ldr x11, [x0, #0x28] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 0) + INT64_C(40))));
  /* fb160: sub x11, x9, x11 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) - ARC_X_R(c, 11)));
  /* fb164: b #0xfb188 */
  goto L_fb188;
L_fb168:;
  /* fb168: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
  /* fb16c: cbnz w2, #0xfb148 */
  if ((ARC_W_R(c, 2)) != 0) goto L_fb148;
L_fb170:;
  /* fb170: mov w11, w2 */
  ARC_W_W(c, 11, ARC_W_R(c, 2));
  /* fb174: b #0xfb188 */
  goto L_fb188;
L_fb178:;
  /* fb178: mov x11, x10 */
  ARC_X_W(c, 11, ARC_X_R(c, 10));
  /* fb17c: b #0xfb188 */
  goto L_fb188;
L_fb180:;
  /* fb180: ldp x12, x11, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 12, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* fb184: sub x11, x11, x12 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - ARC_X_R(c, 12)));
L_fb188:;
  /* fb188: adds x11, x11, x1 */
  ARC_X_W(c, 11, arc_add64(c, ARC_X_R(c, 11), ARC_X_R(c, 1), 0));
  /* fb18c: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* fb190: b.mi #0xfb1d8 */
  if (ARC_COND(c, 4)) goto L_fb1d8;
  /* fb194: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* fb198: b.lt #0xfb1d8 */
  if (ARC_COND(c, 11)) goto L_fb1d8;
  /* fb19c: cbz x11, #0xfb1b4 */
  if ((ARC_X_R(c, 11)) == 0) goto L_fb1b4;
  /* fb1a0: tbz w3, #3, #0xfb1ac */
  if (((ARC_W_R(c, 3)) >> 3 & 1) == 0) goto L_fb1ac;
  /* fb1a4: ldr x10, [x0, #0x18] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* fb1a8: cbz x10, #0xfb1d8 */
  if ((ARC_X_R(c, 10)) == 0) goto L_fb1d8;
L_fb1ac:;
  /* fb1ac: tbz w3, #4, #0xfb1b4 */
  if (((ARC_W_R(c, 3)) >> 4 & 1) == 0) goto L_fb1b4;
  /* fb1b0: cbz x9, #0xfb1d8 */
  if ((ARC_X_R(c, 9)) == 0) goto L_fb1d8;
L_fb1b4:;
  /* fb1b4: tbz w3, #3, #0xfb1c4 */
  if (((ARC_W_R(c, 3)) >> 3 & 1) == 0) goto L_fb1c4;
  /* fb1b8: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* fb1bc: add x9, x9, x11 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 11)));
  /* fb1c0: stp x9, x8, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
L_fb1c4:;
  /* fb1c4: tbz w3, #4, #0xfb1d4 */
  if (((ARC_W_R(c, 3)) >> 4 & 1) == 0) goto L_fb1d4;
  /* fb1c8: ldr x8, [x0, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(40))));
  /* fb1cc: add x8, x8, x11 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 11)));
  /* fb1d0: str x8, [x0, #0x30] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(48)), ARC_X_R(c, 8));
L_fb1d4:;
  /* fb1d4: mov x1, x11 */
  ARC_X_W(c, 1, ARC_X_R(c, 11));
L_fb1d8:;
  /* fb1d8: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* fb1dc: ret  */
  return;
}

void fn1_fe7c4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038970308));
  /* fe7c4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fe7c8: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* fe7cc: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fe7d0: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* fe7d4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fe7d8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* fe7dc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fe7e0: add x22, sp, #8 */
  ARC_X_W(c, 22, ((c)->sp + UINT64_C(8)));
L_fe7e4:;
  /* fe7e4: ldp x0, x1, [x19, #0x48] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(72));
    ARC_X_W(c, 0, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* fe7e8: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* fe7ec: add x3, x22, #8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* fe7f0: mov x4, sp */
  ARC_X_W(c, 4, (c)->sp);
  /* fe7f4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* fe7f8: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* fe7fc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1042432));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* fe800: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* fe804: ldr x3, [x19, #0x40] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* fe808: mov w20, w0 */
  ARC_W_W(c, 20, ARC_W_R(c, 0));
  /* fe80c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* fe810: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* fe814: sub x21, x8, x22 */
  ARC_X_W(c, 21, (ARC_X_R(c, 8) - ARC_X_R(c, 22)));
  /* fe818: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* fe81c: bl #0x1427d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1042464));
  fn1_1427d0(c);
  /* fe820: cmp x0, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 21));
  /* fe824: b.ne #0xfe838 */
  if (ARC_COND(c, 1)) goto L_fe838;
  /* fe828: cmp w20, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 20), UINT64_C(1));
  /* fe82c: b.eq #0xfe7e4 */
  if (ARC_COND(c, 0)) goto L_fe7e4;
  /* fe830: cmp w20, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 20), UINT64_C(2));
  /* fe834: b.ne #0xfe840 */
  if (ARC_COND(c, 1)) goto L_fe840;
L_fe838:;
  /* fe838: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* fe83c: b #0xfe850 */
  goto L_fe850;
L_fe840:;
  /* fe840: ldr x0, [x19, #0x40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* fe844: bl #0x143730 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1042504));
  fn1_143730(c);
  /* fe848: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* fe84c: csetm w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? (uint32_t)~(uint32_t)0 : 0));
L_fe850:;
  /* fe850: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fe854: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* fe858: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fe85c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* fe860: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fe864: ret  */
  return;
}

void fn1_10aa18(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039020056));
  /* 10aa18: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 10aa1c: sub sp, sp, #0xf0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(240)));
  /* 10aa20: str d8, [sp, #0x90] */
  arc_st64(((c)->sp + INT64_C(144)), (c)->q[8].u64[0]);
  /* 10aa24: stp x29, x30, [sp, #0x98] */
  { const uint64_t _pa = ((c)->sp + INT64_C(152));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 10aa28: str x27, [sp, #0xa8] */
  arc_st64(((c)->sp + INT64_C(168)), ARC_X_R(c, 27));
  /* 10aa2c: stp x26, x25, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 10aa30: stp x24, x23, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 10aa34: stp x22, x21, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 10aa38: stp x20, x19, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 10aa3c: add x29, sp, #0x98 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(152)));
  /* 10aa40: fmov d8, d0 */
  arc_du_w(c, 8, (uint64_t)(ARC_DU_R(c, 0)));
  /* 10aa44: ldr w9, [x2, #8] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 2) + INT64_C(8))));
  /* 10aa48: mov w8, #0x25 */
  ARC_W_W(c, 8, UINT64_C(37));
  /* 10aa4c: mov w19, w3 */
  ARC_W_W(c, 19, ARC_W_R(c, 3));
  /* 10aa50: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 10aa54: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 10aa58: stur x8, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 8));
  /* 10aa5c: sub x8, x29, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 10aa60: tbnz w9, #0xb, #0x10aa70 */
  if (((ARC_W_R(c, 9)) >> 11 & 1) != 0) goto L_10aa70;
  /* 10aa64: orr x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(1)));
  /* 10aa68: tbnz w9, #0xa, #0x10aa80 */
  if (((ARC_W_R(c, 9)) >> 10 & 1) != 0) goto L_10aa80;
  /* 10aa6c: b #0x10aa88 */
  goto L_10aa88;
L_10aa70:;
  /* 10aa70: mov w10, #0x2b */
  ARC_W_W(c, 10, UINT64_C(43));
  /* 10aa74: orr x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(2)));
  /* 10aa78: sturb w10, [x29, #-0xf] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-15)), ARC_W_R(c, 10));
  /* 10aa7c: tbz w9, #0xa, #0x10aa88 */
  if (((ARC_W_R(c, 9)) >> 10 & 1) == 0) goto L_10aa88;
L_10aa80:;
  /* 10aa80: mov w10, #0x23 */
  ARC_W_W(c, 10, UINT64_C(35));
  /* 10aa84: strb w10, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 10));
  }
L_10aa88:;
  /* 10aa88: mov w10, #0x104 */
  ARC_W_W(c, 10, UINT64_C(260));
  /* 10aa8c: nop  */
  /* nop: no architectural effect here */
  /* 10aa90: adr x22, #0x15dc38 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10aa94: and w10, w9, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) & ARC_W_R(c, 10)));
  /* 10aa98: cmp w10, #0x104 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(260));
  /* 10aa9c: b.ne #0x10ab08 */
  if (ARC_COND(c, 1)) goto L_10ab08;
  /* 10aaa0: tst w9, #0x4000 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(16384)));
  /* 10aaa4: mov w9, #0x41 */
  ARC_W_W(c, 9, UINT64_C(65));
  /* 10aaa8: mov w10, #0x61 */
  ARC_W_W(c, 10, UINT64_C(97));
  /* 10aaac: csel w9, w10, w9, eq */
  ARC_W_W(c, 9, (ARC_COND(c, 0) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* 10aab0: sub x10, x29, #0x2e */
  ARC_X_W(c, 10, (ARC_X_R(c, 29) - UINT64_C(46)));
  /* 10aab4: strb w9, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 10aab8: stur x10, [x29, #-0x38] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-56)), ARC_X_R(c, 10));
  /* 10aabc: ldarb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 10aac0: tbz w8, #0, #0x10acf4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10acf4;
L_10aac4:;
  /* 10aac4: fmov d0, d8 */
  arc_du_w(c, 0, (uint64_t)(ARC_DU_R(c, 8)));
  /* 10aac8: adrp x23, #0x15d000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 10aacc: sub x0, x29, #0x2e */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(46)));
  /* 10aad0: ldr x2, [x23, #0xc30] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 23) + INT64_C(3120))));
  /* 10aad4: sub x3, x29, #0x10 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 10aad8: mov w1, #0x1e */
  ARC_W_W(c, 1, UINT64_C(30));
  /* 10aadc: bl #0x136860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1092320));
  fn1_136860(c);
  /* 10aae0: cmp w0, #0x1d */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(29));
  /* 10aae4: b.le #0x10abbc */
  if (ARC_COND(c, 13)) goto L_10abbc;
  /* 10aae8: ldarb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 10aaec: tbz w8, #0, #0x10ad6c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10ad6c;
L_10aaf0:;
  /* 10aaf0: ldr x1, [x23, #0xc30] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 23) + INT64_C(3120))));
  /* 10aaf4: fmov d0, d8 */
  arc_du_w(c, 0, (uint64_t)(ARC_DU_R(c, 8)));
  /* 10aaf8: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 10aafc: sub x2, x29, #0x10 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 10ab00: bl #0x136920 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1092356));
  fn1_136920(c);
  /* 10ab04: b #0x10abac */
  goto L_10abac;
L_10ab08:;
  /* 10ab08: mov w11, #0x2a2e */
  ARC_W_W(c, 11, UINT64_C(10798));
  /* 10ab0c: cmp w10, #0x100 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(256));
  /* 10ab10: strh w11, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 11));
  /* 10ab14: b.eq #0x10ab30 */
  if (ARC_COND(c, 0)) goto L_10ab30;
  /* 10ab18: cmp w10, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(4));
  /* 10ab1c: b.ne #0x10ab40 */
  if (ARC_COND(c, 1)) goto L_10ab40;
  /* 10ab20: tst w9, #0x4000 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(16384)));
  /* 10ab24: mov w9, #0x46 */
  ARC_W_W(c, 9, UINT64_C(70));
  /* 10ab28: mov w10, #0x66 */
  ARC_W_W(c, 10, UINT64_C(102));
  /* 10ab2c: b #0x10ab4c */
  goto L_10ab4c;
L_10ab30:;
  /* 10ab30: tst w9, #0x4000 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(16384)));
  /* 10ab34: mov w9, #0x45 */
  ARC_W_W(c, 9, UINT64_C(69));
  /* 10ab38: mov w10, #0x65 */
  ARC_W_W(c, 10, UINT64_C(101));
  /* 10ab3c: b #0x10ab4c */
  goto L_10ab4c;
L_10ab40:;
  /* 10ab40: tst w9, #0x4000 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(16384)));
  /* 10ab44: mov w9, #0x47 */
  ARC_W_W(c, 9, UINT64_C(71));
  /* 10ab48: mov w10, #0x67 */
  ARC_W_W(c, 10, UINT64_C(103));
L_10ab4c:;
  /* 10ab4c: csel w9, w10, w9, eq */
  ARC_W_W(c, 9, (ARC_COND(c, 0) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* 10ab50: adrp x23, #0x15d000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 10ab54: strb w9, [x8, #2] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(2)), ARC_W_R(c, 9));
  /* 10ab58: sub x8, x29, #0x2e */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(46)));
  /* 10ab5c: stur x8, [x29, #-0x38] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-56)), ARC_X_R(c, 8));
  /* 10ab60: ldarb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 10ab64: tbz w8, #0, #0x10ad30 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10ad30;
L_10ab68:;
  /* 10ab68: fmov d0, d8 */
  arc_du_w(c, 0, (uint64_t)(ARC_DU_R(c, 8)));
  /* 10ab6c: ldr x2, [x23, #0xc30] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 23) + INT64_C(3120))));
  /* 10ab70: ldr w4, [x20, #0x10] */
  ARC_W_W(c, 4, arc_ld32((ARC_X_R(c, 20) + INT64_C(16))));
  /* 10ab74: sub x0, x29, #0x2e */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(46)));
  /* 10ab78: sub x3, x29, #0x10 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 10ab7c: mov w1, #0x1e */
  ARC_W_W(c, 1, UINT64_C(30));
  /* 10ab80: bl #0x136860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1092484));
  fn1_136860(c);
  /* 10ab84: cmp w0, #0x1d */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(29));
  /* 10ab88: b.le #0x10abbc */
  if (ARC_COND(c, 13)) goto L_10abbc;
  /* 10ab8c: ldarb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 10ab90: tbz w8, #0, #0x10ada4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10ada4;
L_10ab94:;
  /* 10ab94: ldr x1, [x23, #0xc30] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 23) + INT64_C(3120))));
  /* 10ab98: ldr w3, [x20, #0x10] */
  ARC_W_W(c, 3, arc_ld32((ARC_X_R(c, 20) + INT64_C(16))));
  /* 10ab9c: fmov d0, d8 */
  arc_du_w(c, 0, (uint64_t)(ARC_DU_R(c, 8)));
  /* 10aba0: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 10aba4: sub x2, x29, #0x10 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 10aba8: bl #0x136920 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1092524));
  fn1_136920(c);
L_10abac:;
  /* 10abac: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 10abb0: b.eq #0x10ad68 */
  if (ARC_COND(c, 0)) goto L_10ad68;
  /* 10abb4: ldur x22, [x29, #-0x38] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 29) + INT64_C(-56))));
  /* 10abb8: b #0x10abc0 */
  goto L_10abc0;
L_10abbc:;
  /* 10abbc: mov x22, xzr */
  ARC_X_W(c, 22, ARC_X_R(c, 31));
L_10abc0:;
  /* 10abc0: ldr w9, [x20, #8] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 20) + INT64_C(8))));
  /* 10abc4: ldur x23, [x29, #-0x38] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 29) + INT64_C(-56))));
  /* 10abc8: sxtw x8, w0 */
  ARC_X_W(c, 8, ((int64_t)(int32_t)(ARC_W_R(c, 0))));
  /* 10abcc: mov w10, #0xb0 */
  ARC_W_W(c, 10, UINT64_C(176));
  /* 10abd0: and w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & ARC_W_R(c, 10)));
  /* 10abd4: add x24, x23, x8 */
  ARC_X_W(c, 24, (ARC_X_R(c, 23) + ARC_X_R(c, 8)));
  /* 10abd8: cmp w9, #0x20 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(32));
  /* 10abdc: mov x26, x24 */
  ARC_X_W(c, 26, ARC_X_R(c, 24));
  /* 10abe0: b.eq #0x10ac34 */
  if (ARC_COND(c, 0)) goto L_10ac34;
  /* 10abe4: cmp w9, #0x10 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(16));
  /* 10abe8: b.ne #0x10ac30 */
  if (ARC_COND(c, 1)) goto L_10ac30;
  /* 10abec: ldrb w9, [x23] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 23)));
  /* 10abf0: cmp w9, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(45));
  /* 10abf4: b.eq #0x10ac00 */
  if (ARC_COND(c, 0)) goto L_10ac00;
  /* 10abf8: cmp w9, #0x2b */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(43));
  /* 10abfc: b.ne #0x10ac08 */
  if (ARC_COND(c, 1)) goto L_10ac08;
L_10ac00:;
  /* 10ac00: add x26, x23, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* 10ac04: b #0x10ac34 */
  goto L_10ac34;
L_10ac08:;
  /* 10ac08: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 10ac0c: b.lt #0x10ac30 */
  if (ARC_COND(c, 11)) goto L_10ac30;
  /* 10ac10: cmp w9, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(48));
  /* 10ac14: b.ne #0x10ac30 */
  if (ARC_COND(c, 1)) goto L_10ac30;
  /* 10ac18: ldrb w9, [x23, #1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 23) + INT64_C(1))));
  /* 10ac1c: orr w9, w9, #0x20 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(32)));
  /* 10ac20: cmp w9, #0x78 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(120));
  /* 10ac24: b.ne #0x10ac30 */
  if (ARC_COND(c, 1)) goto L_10ac30;
  /* 10ac28: add x26, x23, #2 */
  ARC_X_W(c, 26, (ARC_X_R(c, 23) + UINT64_C(2)));
  /* 10ac2c: b #0x10ac34 */
  goto L_10ac34;
L_10ac30:;
  /* 10ac30: mov x26, x23 */
  ARC_X_W(c, 26, ARC_X_R(c, 23));
L_10ac34:;
  /* 10ac34: sub x9, x29, #0x2e */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) - UINT64_C(46)));
  /* 10ac38: cmp x23, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 9));
  /* 10ac3c: b.eq #0x10ac58 */
  if (ARC_COND(c, 0)) goto L_10ac58;
  /* 10ac40: lsl x0, x8, #1 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(1)) & 63)));
  /* 10ac44: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1092680));
  fn1_1428a8(c);
  /* 10ac48: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* 10ac4c: mov x27, x0 */
  ARC_X_W(c, 27, ARC_X_R(c, 0));
  /* 10ac50: cbnz x0, #0x10ac60 */
  if ((ARC_X_R(c, 0)) != 0) goto L_10ac60;
  /* 10ac54: bl #0x142c08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1092696));
  fn1_142c08(c);
L_10ac58:;
  /* 10ac58: mov x25, xzr */
  ARC_X_W(c, 25, ARC_X_R(c, 31));
  /* 10ac5c: add x27, sp, #0x27 */
  ARC_X_W(c, 27, ((c)->sp + UINT64_C(39)));
L_10ac60:;
  /* 10ac60: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 10ac64: add x1, x20, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(48)));
  /* 10ac68: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1092716));
  fn1_143460(c);
  /* 10ac6c: add x4, sp, #0x18 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(24)));
  /* 10ac70: add x5, sp, #0x10 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(16)));
  /* 10ac74: add x6, sp, #8 */
  ARC_X_W(c, 6, ((c)->sp + UINT64_C(8)));
  /* 10ac78: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 10ac7c: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 10ac80: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 10ac84: mov x3, x27 */
  ARC_X_W(c, 3, ARC_X_R(c, 27));
  /* 10ac88: bl #0x143910 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1092748));
  fn1_143910(c);
  /* 10ac8c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 10ac90: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1092756));
  fn1_143478(c);
  /* 10ac94: ldp x3, x2, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 3, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 10ac98: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 10ac9c: mov x1, x27 */
  ARC_X_W(c, 1, ARC_X_R(c, 27));
  /* 10aca0: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* 10aca4: mov w5, w19 */
  ARC_W_W(c, 5, ARC_W_R(c, 19));
  /* 10aca8: bl #0x10b5d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1092780));
  fn1_10b5d8(c);
  /* 10acac: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10acb0: cbz x25, #0x10acbc */
  if ((ARC_X_R(c, 25)) == 0) goto L_10acbc;
  /* 10acb4: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 10acb8: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1092796));
  fn1_142800(c);
L_10acbc:;
  /* 10acbc: cbz x22, #0x10acc8 */
  if ((ARC_X_R(c, 22)) == 0) goto L_10acc8;
  /* 10acc0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 10acc4: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1092808));
  fn1_142800(c);
L_10acc8:;
  /* 10acc8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10accc: ldp x20, x19, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 10acd0: ldr x27, [sp, #0xa8] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(168))));
  /* 10acd4: ldp x22, x21, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 10acd8: ldr d8, [sp, #0x90] */
  arc_du_w(c, 8, arc_ld64(((c)->sp + INT64_C(144))));
  /* 10acdc: ldp x24, x23, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 10ace0: ldp x26, x25, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 10ace4: ldp x29, x30, [sp, #0x98] */
  { const uint64_t _pa = ((c)->sp + INT64_C(152));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 10ace8: add sp, sp, #0xf0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(240)));
  /* 10acec: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 10acf0: ret  */
  return;
L_10acf4:;
  /* 10acf4: nop  */
  /* nop: no architectural effect here */
  /* 10acf8: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10acfc: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1092864));
  fn1_1424b8(c);
  /* 10ad00: cbz w0, #0x10aac4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_10aac4;
  /* 10ad04: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 10ad08: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 10ad0c: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 10ad10: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 10ad14: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1092888));
  fn1_1441e0(c);
  /* 10ad18: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 10ad1c: str x0, [x8, #0xc30] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 10ad20: nop  */
  /* nop: no architectural effect here */
  /* 10ad24: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10ad28: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1092908));
  fn1_1424d0(c);
  /* 10ad2c: b #0x10aac4 */
  goto L_10aac4;
L_10ad30:;
  /* 10ad30: nop  */
  /* nop: no architectural effect here */
  /* 10ad34: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10ad38: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1092924));
  fn1_1424b8(c);
  /* 10ad3c: cbz w0, #0x10ab68 */
  if ((ARC_W_R(c, 0)) == 0) goto L_10ab68;
  /* 10ad40: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 10ad44: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 10ad48: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 10ad4c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 10ad50: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1092948));
  fn1_1441e0(c);
  /* 10ad54: str x0, [x23, #0xc30] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 10ad58: nop  */
  /* nop: no architectural effect here */
  /* 10ad5c: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10ad60: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1092964));
  fn1_1424d0(c);
  /* 10ad64: b #0x10ab68 */
  goto L_10ab68;
L_10ad68:;
  /* 10ad68: bl #0x142c08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1092972));
  fn1_142c08(c);
L_10ad6c:;
  /* 10ad6c: nop  */
  /* nop: no architectural effect here */
  /* 10ad70: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10ad74: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1092984));
  fn1_1424b8(c);
  /* 10ad78: cbz w0, #0x10aaf0 */
  if ((ARC_W_R(c, 0)) == 0) goto L_10aaf0;
  /* 10ad7c: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 10ad80: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 10ad84: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 10ad88: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 10ad8c: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1093008));
  fn1_1441e0(c);
  /* 10ad90: str x0, [x23, #0xc30] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 10ad94: nop  */
  /* nop: no architectural effect here */
  /* 10ad98: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10ad9c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1093024));
  fn1_1424d0(c);
  /* 10ada0: b #0x10aaf0 */
  goto L_10aaf0;
L_10ada4:;
  /* 10ada4: nop  */
  /* nop: no architectural effect here */
  /* 10ada8: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10adac: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1093040));
  fn1_1424b8(c);
  /* 10adb0: cbz w0, #0x10ab94 */
  if ((ARC_W_R(c, 0)) == 0) goto L_10ab94;
  /* 10adb4: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 10adb8: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 10adbc: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 10adc0: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 10adc4: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1093064));
  fn1_1441e0(c);
  /* 10adc8: str x0, [x23, #0xc30] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 10adcc: nop  */
  /* nop: no architectural effect here */
  /* 10add0: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10add4: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1093080));
  fn1_1424d0(c);
  /* 10add8: b #0x10ab94 */
  goto L_10ab94;
  /* 10addc: b #0x10ade8 */
  goto L_10ade8;
  /* 10ade0: b #0x10ade8 */
  goto L_10ade8;
  /* 10ade4: b #0x10ade8 */
  goto L_10ade8;
L_10ade8:;
  /* 10ade8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10adec: nop  */
  /* nop: no architectural effect here */
  /* 10adf0: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10adf4: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1093112));
  fn1_1424e8(c);
  /* 10adf8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10adfc: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1093120));
  fn1_9cc20(c);
  /* 10ae00: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1093124));
  fn1_9cc20(c);
  /* 10ae04: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10ae08: cbz x22, #0x10ae30 */
  if ((ARC_X_R(c, 22)) == 0) goto L_10ae30;
  /* 10ae0c: b #0x10ae44 */
  goto L_10ae44;
  /* 10ae10: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1093140));
  fn1_9cc20(c);
  /* 10ae14: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10ae18: b #0x10ae28 */
  goto L_10ae28;
  /* 10ae1c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10ae20: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 10ae24: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1093160));
  fn1_143478(c);
L_10ae28:;
  /* 10ae28: cbnz x25, #0x10ae38 */
  if ((ARC_X_R(c, 25)) != 0) goto L_10ae38;
  /* 10ae2c: cbnz x22, #0x10ae44 */
  if ((ARC_X_R(c, 22)) != 0) goto L_10ae44;
L_10ae30:;
  /* 10ae30: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10ae34: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1093176));
  fn1_9cc20(c);
L_10ae38:;
  /* 10ae38: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 10ae3c: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1093184));
  fn1_142800(c);
  /* 10ae40: cbz x22, #0x10ae30 */
  if ((ARC_X_R(c, 22)) == 0) goto L_10ae30;
L_10ae44:;
  /* 10ae44: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 10ae48: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1093196));
  fn1_142800(c);
  /* 10ae4c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10ae50: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1093204));
  fn1_9cc20(c);
}

void fn1_112cc4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039053508));
  /* 112cc4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 112cc8: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 112ccc: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* 112cd0: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 112cd4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 112cd8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 112cdc: ldr x0, [x1] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* 112ce0: mov x21, x4 */
  ARC_X_W(c, 21, ARC_X_R(c, 4));
  /* 112ce4: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* 112ce8: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 112cec: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 112cf0: cbz x0, #0x112d44 */
  if ((ARC_X_R(c, 0)) == 0) goto L_112d44;
  /* 112cf4: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 112cf8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 112cfc: b.eq #0x112d28 */
  if (ARC_COND(c, 0)) goto L_112d28;
  /* 112d00: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 112d04: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 112d08: b.eq #0x112d3c */
  if (ARC_COND(c, 0)) goto L_112d3c;
L_112d0c:;
  /* 112d0c: ldr x0, [x20] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 20)));
  /* 112d10: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* 112d14: cset w23, eq */
  ARC_W_W(c, 23, (ARC_COND(c, 0) ? 1 : 0));
  /* 112d18: cbnz x22, #0x112d4c */
  if ((ARC_X_R(c, 22)) != 0) goto L_112d4c;
L_112d1c:;
  /* 112d1c: tbnz w23, #0, #0x112da0 */
  if (((ARC_W_R(c, 23)) >> 0 & 1) != 0) goto L_112da0;
  /* 112d20: mov x22, xzr */
  ARC_X_W(c, 22, ARC_X_R(c, 31));
  /* 112d24: b #0x112d8c */
  goto L_112d8c;
L_112d28:;
  /* 112d28: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 112d2c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 112d30: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1125684));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 112d34: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 112d38: b.ne #0x112d0c */
  if (ARC_COND(c, 1)) goto L_112d0c;
L_112d3c:;
  /* 112d3c: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 112d40: str xzr, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 31));
L_112d44:;
  /* 112d44: mov w23, #1 */
  ARC_W_W(c, 23, UINT64_C(1));
  /* 112d48: cbz x22, #0x112d1c */
  if ((ARC_X_R(c, 22)) == 0) goto L_112d1c;
L_112d4c:;
  /* 112d4c: ldp x8, x9, [x22, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 22) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 112d50: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 112d54: b.eq #0x112d60 */
  if (ARC_COND(c, 0)) goto L_112d60;
  /* 112d58: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 112d5c: b #0x112d70 */
  goto L_112d70;
L_112d60:;
  /* 112d60: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 112d64: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 112d68: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 112d6c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1125744));
  arc_dispatch(c, ARC_X_R(c, 8));
L_112d70:;
  /* 112d70: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 112d74: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 112d78: cmp w23, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 23), ARC_W_R(c, 8));
  /* 112d7c: b.eq #0x112da0 */
  if (ARC_COND(c, 0)) goto L_112da0;
  /* 112d80: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 112d84: ldr x0, [x20] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 20)));
  /* 112d88: csel x22, xzr, x22, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 22)));
L_112d8c:;
  /* 112d8c: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 112d90: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 112d94: b.eq #0x112da8 */
  if (ARC_COND(c, 0)) goto L_112da8;
  /* 112d98: ldr w1, [x8] */
  ARC_W_W(c, 1, arc_ld32(ARC_X_R(c, 8)));
  /* 112d9c: b #0x112db8 */
  goto L_112db8;
L_112da0:;
  /* 112da0: mov w8, #6 */
  ARC_W_W(c, 8, UINT64_C(6));
  /* 112da4: b #0x112e9c */
  goto L_112e9c;
L_112da8:;
  /* 112da8: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 112dac: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 112db0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1125812));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 112db4: mov w1, w0 */
  ARC_W_W(c, 1, ARC_W_R(c, 0));
L_112db8:;
  /* 112db8: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 112dbc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 112dc0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 112dc4: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* 112dc8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1125836));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 112dcc: and w8, w0, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) & UINT64_C(255)));
  /* 112dd0: cmp w8, #0x25 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(37));
  /* 112dd4: b.ne #0x112e28 */
  if (ARC_COND(c, 1)) goto L_112e28;
  /* 112dd8: ldr x0, [x20] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 20)));
  /* 112ddc: ldp x9, x8, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 112de0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 112de4: b.eq #0x112e30 */
  if (ARC_COND(c, 0)) goto L_112e30;
  /* 112de8: add x9, x9, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(4)));
  /* 112dec: str x9, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 9));
  /* 112df0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 112df4: b.eq #0x112e50 */
  if (ARC_COND(c, 0)) goto L_112e50;
L_112df8:;
  /* 112df8: ldr w0, [x9] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 9)));
  /* 112dfc: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 112e00: b.eq #0x112e64 */
  if (ARC_COND(c, 0)) goto L_112e64;
L_112e04:;
  /* 112e04: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 112e08: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 112e0c: cset w20, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? 1 : 0));
  /* 112e10: cbz x22, #0x112e70 */
  if ((ARC_X_R(c, 22)) == 0) goto L_112e70;
L_112e14:;
  /* 112e14: ldp x8, x9, [x22, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 22) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 112e18: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 112e1c: b.eq #0x112e78 */
  if (ARC_COND(c, 0)) goto L_112e78;
  /* 112e20: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 112e24: b #0x112e88 */
  goto L_112e88;
L_112e28:;
  /* 112e28: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 112e2c: b #0x112e9c */
  goto L_112e9c;
L_112e30:;
  /* 112e30: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 112e34: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 112e38: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1125948));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 112e3c: ldr x0, [x20] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 20)));
  /* 112e40: cbz x0, #0x112e68 */
  if ((ARC_X_R(c, 0)) == 0) goto L_112e68;
  /* 112e44: ldp x9, x8, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 112e48: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 112e4c: b.ne #0x112df8 */
  if (ARC_COND(c, 1)) goto L_112df8;
L_112e50:;
  /* 112e50: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 112e54: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 112e58: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1125980));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 112e5c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 112e60: b.ne #0x112e04 */
  if (ARC_COND(c, 1)) goto L_112e04;
L_112e64:;
  /* 112e64: str xzr, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 31));
L_112e68:;
  /* 112e68: mov w20, #1 */
  ARC_W_W(c, 20, UINT64_C(1));
  /* 112e6c: cbnz x22, #0x112e14 */
  if ((ARC_X_R(c, 22)) != 0) goto L_112e14;
L_112e70:;
  /* 112e70: tbnz w20, #0, #0x112e98 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) != 0) goto L_112e98;
  /* 112e74: b #0x112ea8 */
  goto L_112ea8;
L_112e78:;
  /* 112e78: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 112e7c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 112e80: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 112e84: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1126024));
  arc_dispatch(c, ARC_X_R(c, 8));
L_112e88:;
  /* 112e88: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 112e8c: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 112e90: eor w8, w20, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 20) ^ ARC_W_R(c, 8)));
  /* 112e94: tbnz w8, #0, #0x112ea8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_112ea8;
L_112e98:;
  /* 112e98: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
L_112e9c:;
  /* 112e9c: ldr w9, [x19] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 19)));
  /* 112ea0: orr w8, w9, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) | ARC_W_R(c, 8)));
  /* 112ea4: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_112ea8:;
  /* 112ea8: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 112eac: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 112eb0: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 112eb4: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 112eb8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 112ebc: ret  */
  return;
}

void fn1_113fe8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039058408));
  /* 113fe8: bti c */
  /* bti: no architectural effect here */
  /* 113fec: mov x9, x0 */
  ARC_X_W(c, 9, ARC_X_R(c, 0));
  /* 113ff0: ldrb w10, [x9, #0x18]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(24));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(24));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* 113ff4: tbnz w10, #0, #0x11400c */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_11400c;
  /* 113ff8: ldr q0, [x9] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 9)), arc_ld64(ARC_X_R(c, 9) + 8));
  /* 113ffc: ldr x9, [x9, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(16))));
  /* 114000: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* 114004: str x9, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 9));
  /* 114008: ret  */
  return;
L_11400c:;
  /* 11400c: ldp x2, x1, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 114010: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 114014: b #0xda588 */
  fn1_da588(c); return;
}

void fn1_11f26c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039104108));
  /* 11f26c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 11f270: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 11f274: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 11f278: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 11f27c: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 11f280: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 11f284: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 11f288: adrp x23, #0x151000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11f28c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 11f290: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11f294: ldr x23, [x23, #0xca0] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 23) + INT64_C(3232))));
  /* 11f298: ldar x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11f29c: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11f2a0: b.eq #0x11f35c */
  if (ARC_COND(c, 0)) goto L_11f35c;
  /* 11f2a4: nop  */
  /* nop: no architectural effect here */
  /* 11f2a8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11f2ac: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1176240));
  fn1_142518(c);
  /* 11f2b0: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11f2b4: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11f2b8: b.ne #0x11f2e4 */
  if (ARC_COND(c, 1)) goto L_11f2e4;
  /* 11f2bc: nop  */
  /* nop: no architectural effect here */
  /* 11f2c0: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11f2c4: nop  */
  /* nop: no architectural effect here */
  /* 11f2c8: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_11f2cc:;
  /* 11f2cc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11f2d0: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 11f2d4: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1176280));
  fn1_142530(c);
  /* 11f2d8: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11f2dc: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11f2e0: b.eq #0x11f2cc */
  if (ARC_COND(c, 0)) goto L_11f2cc;
L_11f2e4:;
  /* 11f2e4: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11f2e8: cbz x8, #0x11f2fc */
  if ((ARC_X_R(c, 8)) == 0) goto L_11f2fc;
  /* 11f2ec: nop  */
  /* nop: no architectural effect here */
  /* 11f2f0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11f2f4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1176312));
  fn1_142560(c);
  /* 11f2f8: b #0x11f35c */
  goto L_11f35c;
L_11f2fc:;
  /* 11f2fc: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11f300: str x23, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 23));
  /* 11f304: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11f308: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 11f30c: nop  */
  /* nop: no architectural effect here */
  /* 11f310: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11f314: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1176344));
  fn1_142560(c);
  /* 11f318: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11f31c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11f320: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11f324: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1176360));
  fn1_a2030(c);
  /* 11f328: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11f32c: str w8, [x23, #8] */
  arc_st32((ARC_X_R(c, 23) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11f330: nop  */
  /* nop: no architectural effect here */
  /* 11f334: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11f338: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1176380));
  fn1_142518(c);
  /* 11f33c: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11f340: stlr x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 11f344: nop  */
  /* nop: no architectural effect here */
  /* 11f348: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11f34c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1176400));
  fn1_142560(c);
  /* 11f350: nop  */
  /* nop: no architectural effect here */
  /* 11f354: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11f358: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1176412));
  fn1_142578(c);
L_11f35c:;
  /* 11f35c: ldrsw x8, [x23, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 23) + INT64_C(8)))));
  /* 11f360: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 11f364: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11f368: sub x22, x8, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11f36c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1176432));
  fn1_db2e0(c);
  /* 11f370: mov x21, x20 */
  ARC_X_W(c, 21, ARC_X_R(c, 20));
  /* 11f374: ldp x8, x9, [x21, #0x10]! */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11f378: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11f37c: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11f380: cmp x10, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 22));
  /* 11f384: b.hi #0x11f3b0 */
  if (ARC_COND(c, 8)) goto L_11f3b0;
  /* 11f388: add x9, x22, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* 11f38c: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11f390: b.ls #0x11f3a4 */
  if (ARC_COND(c, 9)) goto L_11f3a4;
  /* 11f394: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11f398: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1176476));
  fn1_1352bc(c);
  /* 11f39c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11f3a0: b #0x11f3b0 */
  goto L_11f3b0;
L_11f3a4:;
  /* 11f3a4: b.hs #0x11f3b0 */
  if (ARC_COND(c, 2)) goto L_11f3b0;
  /* 11f3a8: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11f3ac: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11f3b0:;
  /* 11f3b0: ldr x20, [x8, x22, lsl #3] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3))));
  /* 11f3b4: cbz x20, #0x11f3d8 */
  if ((ARC_X_R(c, 20)) == 0) goto L_11f3d8;
  /* 11f3b8: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 11f3bc: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11f3c0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1176516));
  fn1_bd950(c);
  /* 11f3c4: cbnz x0, #0x11f3d8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11f3d8;
  /* 11f3c8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 11f3cc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11f3d0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11f3d4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1176536));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11f3d8:;
  /* 11f3d8: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11f3dc: str x19, [x8, x22, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3)), ARC_X_R(c, 19));
  /* 11f3e0: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 11f3e4: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 11f3e8: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 11f3ec: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 11f3f0: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 11f3f4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 11f3f8: ret  */
  return;
  /* 11f3fc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11f400: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 11f404: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11f408: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1176588));
  fn1_bd950(c);
  /* 11f40c: cbnz x0, #0x11f434 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11f434;
  /* 11f410: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11f414: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11f418: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11f41c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1176608));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11f420: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11f424: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1176616));
  fn1_9cc20(c);
  /* 11f428: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11f42c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 11f430: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1176628));
  fn1_d2a78(c);
L_11f434:;
  /* 11f434: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11f438: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1176636));
  fn1_9cc20(c);
}

void fn1_126720(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039133984));
  /* 126720: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 126724: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 126728: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* 12672c: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 126730: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 126734: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 126738: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 12673c: cmp x1, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 2));
  /* 126740: b.eq #0x1267bc */
  if (ARC_COND(c, 0)) goto L_1267bc;
  /* 126744: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 126748: nop  */
  /* nop: no architectural effect here */
  /* 12674c: adr x21, #0x15dc38 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 126750: adrp x22, #0x15d000 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 126754: b #0x126778 */
  goto L_126778;
L_126758:;
  /* 126758: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* 12675c: sub w9, w23, #0x5b */
  ARC_W_W(c, 9, (ARC_W_R(c, 23) - UINT64_C(91)));
  /* 126760: cmn w9, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 9), UINT64_C(26), 0);
  /* 126764: add w10, w8, #0x20 */
  ARC_W_W(c, 10, (ARC_W_R(c, 8) + UINT64_C(32)));
  /* 126768: csel w23, w8, w10, lo */
  ARC_W_W(c, 23, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
L_12676c:;
  /* 12676c: str w23, [x19], #4 */
  { const uint64_t _a = ARC_X_R(c, 19);
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 23));
  }
  /* 126770: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* 126774: b.eq #0x1267bc */
  if (ARC_COND(c, 0)) goto L_1267bc;
L_126778:;
  /* 126778: ldr w23, [x19] */
  ARC_W_W(c, 23, arc_ld32(ARC_X_R(c, 19)));
  /* 12677c: cmp w23, #0x7f */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(127));
  /* 126780: b.hi #0x12676c */
  if (ARC_COND(c, 8)) goto L_12676c;
  /* 126784: ldarb w8, [x21] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 21)));
  /* 126788: tbnz w8, #0, #0x126758 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_126758;
  /* 12678c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 126790: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1206164));
  fn1_1424b8(c);
  /* 126794: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 126798: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 12679c: cbz w0, #0x126758 */
  if ((ARC_W_R(c, 0)) == 0) goto L_126758;
  /* 1267a0: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 1267a4: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1267a8: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1206188));
  fn1_1441e0(c);
  /* 1267ac: str x0, [x22, #0xc30] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 1267b0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1267b4: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1206200));
  fn1_1424d0(c);
  /* 1267b8: b #0x126758 */
  goto L_126758;
L_1267bc:;
  /* 1267bc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1267c0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1267c4: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1267c8: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1267cc: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1267d0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1267d4: ret  */
  return;
  /* 1267d8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1267dc: nop  */
  /* nop: no architectural effect here */
  /* 1267e0: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 1267e4: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1206248));
  fn1_1424e8(c);
  /* 1267e8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1267ec: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1206256));
  fn1_9cc20(c);
}

void fn1_128e9c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039144092));
  /* 128e9c: bti c */
  /* bti: no architectural effect here */
  /* 128ea0: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 128ea4: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 128ea8: mov x2, x4 */
  ARC_X_W(c, 2, ARC_X_R(c, 4));
  /* 128eac: mov w3, #0x10ffff */
  ARC_W_W(c, 3, UINT64_C(1114111));
  /* 128eb0: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 128eb4: b #0x128eb8 */
  fn1_128eb8(c); return;
}

void fn1_12a8a4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039150756));
  /* 12a8a4: bti c */
  /* bti: no architectural effect here */
  /* 12a8a8: ldrb w9, [x0, #0x20] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(32))));
  /* 12a8ac: mov w8, #6 */
  ARC_W_W(c, 8, UINT64_C(6));
  /* 12a8b0: tst w9, #4 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(4)));
  /* 12a8b4: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 12a8b8: csel w0, w9, w8, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* 12a8bc: ret  */
  return;
}

void fn1_12bd08(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039155976));
  /* 12bd08: bti c */
  /* bti: no architectural effect here */
  /* 12bd0c: ldrb w0, [x0, #0x11] */
  ARC_W_W(c, 0, arc_ld8((ARC_X_R(c, 0) + INT64_C(17))));
  /* 12bd10: ret  */
  return;
}

void fn1_13319c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039185820));
  /* 13319c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1331a0: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1331a4: str x28, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 28));
  /* 1331a8: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1331ac: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1331b0: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1331b4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1331b8: sub sp, sp, #0x1c0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(448)));
  /* 1331bc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1331c0: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 1331c4: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1331c8: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 1331cc: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1257936));
  fn1_1441e0(c);
  /* 1331d0: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* 1331d4: cbz x0, #0x133868 */
  if ((ARC_X_R(c, 0)) == 0) goto L_133868;
  /* 1331d8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1331dc: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1257952));
  fn1_1443c0(c);
  /* 1331e0: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1331e4: str x0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 0));
  /* 1331e8: bl #0x144498 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1257964));
  fn1_144498(c);
  /* 1331ec: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1331f0: cbz x22, #0x1331fc */
  if ((ARC_X_R(c, 22)) == 0) goto L_1331fc;
  /* 1331f4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1331f8: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1257980));
  fn1_1443c0(c);
L_1331fc:;
  /* 1331fc: ldr x22, [x21, #0x28] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 21) + INT64_C(40))));
  /* 133200: ldrb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 133204: cbz w8, #0x13325c */
  if ((ARC_W_R(c, 8)) == 0) goto L_13325c;
  /* 133208: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 13320c: stur xzr, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), ARC_X_R(c, 31));
  /* 133210: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1258004));
  fn1_142860(c);
  /* 133214: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 133218: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13321c: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1258016));
  fn1_1443c0(c);
  /* 133220: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 133224: str x0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 0));
  /* 133228: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 13322c: sub x3, x29, #0x20 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 133230: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 133234: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 133238: bl #0x144438 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1258044));
  fn1_144438(c);
  /* 13323c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 133240: cbz x23, #0x13324c */
  if ((ARC_X_R(c, 23)) == 0) goto L_13324c;
  /* 133244: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 133248: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1258060));
  fn1_1443c0(c);
L_13324c:;
  /* 13324c: cmn x22, #3 */
  (void)arc_add64(c, ARC_X_R(c, 22), UINT64_C(3), 0);
  /* 133250: b.hi #0x13325c */
  if (ARC_COND(c, 8)) goto L_13325c;
  /* 133254: ldr w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(8))));
  /* 133258: b #0x133260 */
  goto L_133260;
L_13325c:;
  /* 13325c: mov w8, #-1 */
  ARC_W_W(c, 8, UINT64_C(18446744073709551615));
L_133260:;
  /* 133260: str w8, [x20, #0x10] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(16)), ARC_W_R(c, 8));
  /* 133264: ldr x22, [x21, #0x30] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 21) + INT64_C(48))));
  /* 133268: ldrb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 13326c: cbz w8, #0x1332c4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1332c4;
  /* 133270: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 133274: stur xzr, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), ARC_X_R(c, 31));
  /* 133278: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1258108));
  fn1_142860(c);
  /* 13327c: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 133280: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 133284: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1258120));
  fn1_1443c0(c);
  /* 133288: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 13328c: str x0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 0));
  /* 133290: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 133294: sub x3, x29, #0x20 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 133298: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 13329c: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 1332a0: bl #0x144438 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1258148));
  fn1_144438(c);
  /* 1332a4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1332a8: cbz x23, #0x1332b4 */
  if ((ARC_X_R(c, 23)) == 0) goto L_1332b4;
  /* 1332ac: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1332b0: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1258164));
  fn1_1443c0(c);
L_1332b4:;
  /* 1332b4: cmn x22, #3 */
  (void)arc_add64(c, ARC_X_R(c, 22), UINT64_C(3), 0);
  /* 1332b8: b.hi #0x1332c4 */
  if (ARC_COND(c, 8)) goto L_1332c4;
  /* 1332bc: ldr w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(8))));
  /* 1332c0: b #0x1332c8 */
  goto L_1332c8;
L_1332c4:;
  /* 1332c4: mov w8, #-1 */
  ARC_W_W(c, 8, UINT64_C(18446744073709551615));
L_1332c8:;
  /* 1332c8: str w8, [x20, #0x14] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(20)), ARC_W_R(c, 8));
  /* 1332cc: ldr x1, [x21, #0x38] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(56))));
  /* 1332d0: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 1332d4: bl #0xe167c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1258200));
  fn1_e167c(c);
  /* 1332d8: ldr x8, [x21, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(32))));
  /* 1332dc: stp x8, xzr, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1332e0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1332e4: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1258216));
  fn1_1443c0(c);
  /* 1332e8: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1332ec: stur x0, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), ARC_X_R(c, 0));
  /* 1332f0: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1332f4: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1332f8: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 1332fc: mov w2, #0x64 */
  ARC_W_W(c, 2, UINT64_C(100));
  /* 133300: bl #0x1444c8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1258244));
  fn1_1444c8(c);
  /* 133304: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 133308: cbz x22, #0x133314 */
  if ((ARC_X_R(c, 22)) == 0) goto L_133314;
  /* 13330c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 133310: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1258260));
  fn1_1443c0(c);
L_133314:;
  /* 133314: cmn x23, #1 */
  (void)arc_add64(c, ARC_X_R(c, 23), UINT64_C(1), 0);
  /* 133318: b.eq #0x1338a0 */
  if (ARC_COND(c, 0)) goto L_1338a0;
  /* 13331c: mov x22, x20 */
  ARC_X_W(c, 22, ARC_X_R(c, 20));
  /* 133320: ldr x8, [x22, #0x30]! */
  { const uint64_t _a = (ARC_X_R(c, 22) + INT64_C(48));
    ARC_X_W(c, 22, ARC_X_R(c, 22) + INT64_C(48));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 133324: ldrb w9, [x22] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 22)));
  /* 133328: and x10, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13332c: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 133330: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 133334: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* 133338: csel x1, x9, x10, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* 13333c: and w9, w8, #0xff */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) & UINT64_C(255)));
  /* 133340: subs x2, x23, x1 */
  ARC_X_W(c, 2, arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 1)));
  /* 133344: b.ls #0x133388 */
  if (ARC_COND(c, 9)) goto L_133388;
  /* 133348: ldr x10, [x20, #0x38] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 20) + INT64_C(56))));
  /* 13334c: ubfx x8, x8, #1, #7 */
  ARC_X_W(c, 8, (((uint64_t)(ARC_X_R(c, 8)) >> 1) & UINT64_C(127)));
  /* 133350: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 133354: csel x3, x8, x10, eq */
  ARC_X_W(c, 3, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* 133358: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 13335c: mov x4, xzr */
  ARC_X_W(c, 4, ARC_X_R(c, 31));
  /* 133360: mov x5, x3 */
  ARC_X_W(c, 5, ARC_X_R(c, 3));
  /* 133364: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 133368: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1258348));
  fn1_142da0(c);
  /* 13336c: ldrb w8, [x20, #0x30] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(48))));
  /* 133370: ldr x9, [x20, #0x40] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(64))));
  /* 133374: add x10, x20, #0x34 */
  ARC_X_W(c, 10, (ARC_X_R(c, 20) + UINT64_C(52)));
  /* 133378: str xzr, [x20, #0x38] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(56)), ARC_X_R(c, 31));
  /* 13337c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 133380: csel x12, x10, x9, eq */
  ARC_X_W(c, 12, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 133384: b #0x1333a0 */
  goto L_1333a0;
L_133388:;
  /* 133388: ldr x8, [x20, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(64))));
  /* 13338c: add x10, x20, #0x34 */
  ARC_X_W(c, 10, (ARC_X_R(c, 20) + UINT64_C(52)));
  /* 133390: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 133394: csel x12, x10, x8, eq */
  ARC_X_W(c, 12, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* 133398: mov x9, x12 */
  ARC_X_W(c, 9, ARC_X_R(c, 12));
  /* 13339c: cbz x23, #0x133424 */
  if ((ARC_X_R(c, 23)) == 0) goto L_133424;
L_1333a0:;
  /* 1333a0: sub x8, x23, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) - UINT64_C(1)));
  /* 1333a4: and x9, x8, #0x3fffffffffffffff */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) & UINT64_C(4611686018427387903)));
  /* 1333a8: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* 1333ac: cmp x9, #7 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(7));
  /* 1333b0: b.lo #0x133408 */
  if (ARC_COND(c, 3)) goto L_133408;
  /* 1333b4: sub x10, x12, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 12) - ARC_X_R(c, 8)));
  /* 1333b8: cmp x10, #0x20 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(32));
  /* 1333bc: b.lo #0x133408 */
  if (ARC_COND(c, 3)) goto L_133408;
  /* 1333c0: add x10, x9, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 1333c4: add x13, sp, #0x10 */
  ARC_X_W(c, 13, ((c)->sp + UINT64_C(16)));
  /* 1333c8: and x11, x10, #0x7ffffffffffffff8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) & UINT64_C(9223372036854775800)));
  /* 1333cc: lsl x8, x11, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 11)) << ((UINT64_C(2)) & 63)));
  /* 1333d0: mov x14, x11 */
  ARC_X_W(c, 14, ARC_X_R(c, 11));
  /* 1333d4: add x9, x12, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 12) + ARC_X_R(c, 8)));
  /* 1333d8: add x8, x13, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 13) + ARC_X_R(c, 8)));
  /* 1333dc: add x13, x13, #0x10 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(16)));
  /* 1333e0: add x12, x12, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(16)));
L_1333e4:;
  /* 1333e4: ldp q0, q1, [x13, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 13) + INT64_C(-16));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 1333e8: subs x14, x14, #8 */
  ARC_X_W(c, 14, arc_sub64(c, ARC_X_R(c, 14), UINT64_C(8)));
  /* 1333ec: add x13, x13, #0x20 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(32)));
  /* 1333f0: stp q0, q1, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 1333f4: add x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(32)));
  /* 1333f8: b.ne #0x1333e4 */
  if (ARC_COND(c, 1)) goto L_1333e4;
  /* 1333fc: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 133400: b.ne #0x13340c */
  if (ARC_COND(c, 1)) goto L_13340c;
  /* 133404: b #0x133424 */
  goto L_133424;
L_133408:;
  /* 133408: mov x9, x12 */
  ARC_X_W(c, 9, ARC_X_R(c, 12));
L_13340c:;
  /* 13340c: add x10, sp, #0x10 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(16)));
  /* 133410: add x10, x10, x23, lsl #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 23)) << 2)));
L_133414:;
  /* 133414: ldr w11, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    ARC_W_W(c, 11, arc_ld32(_a));
  }
  /* 133418: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 13341c: str w11, [x9], #4 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 11));
  }
  /* 133420: b.ne #0x133414 */
  if (ARC_COND(c, 1)) goto L_133414;
L_133424:;
  /* 133424: str wzr, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 31));
  /* 133428: ldrb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 13342c: tbnz w8, #0, #0x13343c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_13343c;
  /* 133430: lsl w8, w23, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 23)) << ((UINT64_C(1)) & 31)));
  /* 133434: strb w8, [x22] */
  arc_st8(ARC_X_R(c, 22), ARC_W_R(c, 8));
  /* 133438: b #0x133440 */
  goto L_133440;
L_13343c:;
  /* 13343c: str x23, [x20, #0x38] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(56)), ARC_X_R(c, 23));
L_133440:;
  /* 133440: ldrb w8, [x21, #0x51] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 21) + INT64_C(81))));
  /* 133444: cmp w8, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(255));
  /* 133448: csel w8, wzr, w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? (ARC_W_R(c, 31)) : ARC_W_R(c, 8)));
  /* 13344c: str w8, [x20, #0x78] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(120)), ARC_W_R(c, 8));
  /* 133450: ldrb w8, [x21, #0x56] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 21) + INT64_C(86))));
  /* 133454: cbz w8, #0x133508 */
  if ((ARC_W_R(c, 8)) == 0) goto L_133508;
  /* 133458: ldr x8, [x21, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(64))));
  /* 13345c: stp x8, xzr, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 133460: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 133464: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1258600));
  fn1_1443c0(c);
  /* 133468: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 13346c: stur x0, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), ARC_X_R(c, 0));
  /* 133470: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 133474: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 133478: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 13347c: mov w2, #0x64 */
  ARC_W_W(c, 2, UINT64_C(100));
  /* 133480: bl #0x1444c8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1258628));
  fn1_1444c8(c);
  /* 133484: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 133488: cbz x24, #0x133494 */
  if ((ARC_X_R(c, 24)) == 0) goto L_133494;
  /* 13348c: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 133490: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1258644));
  fn1_1443c0(c);
L_133494:;
  /* 133494: cmn x23, #1 */
  (void)arc_add64(c, ARC_X_R(c, 23), UINT64_C(1), 0);
  /* 133498: b.eq #0x13385c */
  if (ARC_COND(c, 0)) goto L_13385c;
  /* 13349c: mov x24, x20 */
  ARC_X_W(c, 24, ARC_X_R(c, 20));
  /* 1334a0: ldr x8, [x24, #0x48]! */
  { const uint64_t _a = (ARC_X_R(c, 24) + INT64_C(72));
    ARC_X_W(c, 24, ARC_X_R(c, 24) + INT64_C(72));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 1334a4: ldrb w9, [x24] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 24)));
  /* 1334a8: and x10, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1334ac: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 1334b0: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 1334b4: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* 1334b8: csel x1, x9, x10, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* 1334bc: and w9, w8, #0xff */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) & UINT64_C(255)));
  /* 1334c0: subs x2, x23, x1 */
  ARC_X_W(c, 2, arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 1)));
  /* 1334c4: b.ls #0x133520 */
  if (ARC_COND(c, 9)) goto L_133520;
  /* 1334c8: ldr x10, [x20, #0x50] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 20) + INT64_C(80))));
  /* 1334cc: ubfx x8, x8, #1, #7 */
  ARC_X_W(c, 8, (((uint64_t)(ARC_X_R(c, 8)) >> 1) & UINT64_C(127)));
  /* 1334d0: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 1334d4: csel x3, x8, x10, eq */
  ARC_X_W(c, 3, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* 1334d8: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 1334dc: mov x4, xzr */
  ARC_X_W(c, 4, ARC_X_R(c, 31));
  /* 1334e0: mov x5, x3 */
  ARC_X_W(c, 5, ARC_X_R(c, 3));
  /* 1334e4: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 1334e8: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1258732));
  fn1_142da0(c);
  /* 1334ec: ldrb w8, [x20, #0x48] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(72))));
  /* 1334f0: ldr x9, [x20, #0x58] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(88))));
  /* 1334f4: add x10, x20, #0x4c */
  ARC_X_W(c, 10, (ARC_X_R(c, 20) + UINT64_C(76)));
  /* 1334f8: str xzr, [x20, #0x50] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(80)), ARC_X_R(c, 31));
  /* 1334fc: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 133500: csel x12, x10, x9, eq */
  ARC_X_W(c, 12, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 133504: b #0x133538 */
  goto L_133538;
L_133508:;
  /* 133508: ldrb w8, [x20, #0x48] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(72))));
  /* 13350c: tbnz w8, #0, #0x133600 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_133600;
  /* 133510: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 133514: strb w8, [x20, #0x48] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(72)), ARC_W_R(c, 8));
  /* 133518: add x8, x20, #0x4c */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + UINT64_C(76)));
  /* 13351c: b #0x13360c */
  goto L_13360c;
L_133520:;
  /* 133520: ldr x8, [x20, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(88))));
  /* 133524: add x10, x20, #0x4c */
  ARC_X_W(c, 10, (ARC_X_R(c, 20) + UINT64_C(76)));
  /* 133528: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 13352c: csel x12, x10, x8, eq */
  ARC_X_W(c, 12, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* 133530: mov x9, x12 */
  ARC_X_W(c, 9, ARC_X_R(c, 12));
  /* 133534: cbz x23, #0x1335bc */
  if ((ARC_X_R(c, 23)) == 0) goto L_1335bc;
L_133538:;
  /* 133538: sub x8, x23, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) - UINT64_C(1)));
  /* 13353c: and x9, x8, #0x3fffffffffffffff */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) & UINT64_C(4611686018427387903)));
  /* 133540: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* 133544: cmp x9, #7 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(7));
  /* 133548: b.lo #0x1335a0 */
  if (ARC_COND(c, 3)) goto L_1335a0;
  /* 13354c: sub x10, x12, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 12) - ARC_X_R(c, 8)));
  /* 133550: cmp x10, #0x20 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(32));
  /* 133554: b.lo #0x1335a0 */
  if (ARC_COND(c, 3)) goto L_1335a0;
  /* 133558: add x10, x9, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 13355c: add x13, sp, #0x10 */
  ARC_X_W(c, 13, ((c)->sp + UINT64_C(16)));
  /* 133560: and x11, x10, #0x7ffffffffffffff8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) & UINT64_C(9223372036854775800)));
  /* 133564: lsl x8, x11, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 11)) << ((UINT64_C(2)) & 63)));
  /* 133568: mov x14, x11 */
  ARC_X_W(c, 14, ARC_X_R(c, 11));
  /* 13356c: add x9, x12, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 12) + ARC_X_R(c, 8)));
  /* 133570: add x8, x13, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 13) + ARC_X_R(c, 8)));
  /* 133574: add x13, x13, #0x10 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(16)));
  /* 133578: add x12, x12, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(16)));
L_13357c:;
  /* 13357c: ldp q0, q1, [x13, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 13) + INT64_C(-16));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 133580: subs x14, x14, #8 */
  ARC_X_W(c, 14, arc_sub64(c, ARC_X_R(c, 14), UINT64_C(8)));
  /* 133584: add x13, x13, #0x20 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(32)));
  /* 133588: stp q0, q1, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 13358c: add x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(32)));
  /* 133590: b.ne #0x13357c */
  if (ARC_COND(c, 1)) goto L_13357c;
  /* 133594: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 133598: b.ne #0x1335a4 */
  if (ARC_COND(c, 1)) goto L_1335a4;
  /* 13359c: b #0x1335bc */
  goto L_1335bc;
L_1335a0:;
  /* 1335a0: mov x9, x12 */
  ARC_X_W(c, 9, ARC_X_R(c, 12));
L_1335a4:;
  /* 1335a4: add x10, sp, #0x10 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(16)));
  /* 1335a8: add x10, x10, x23, lsl #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 23)) << 2)));
L_1335ac:;
  /* 1335ac: ldr w11, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    ARC_W_W(c, 11, arc_ld32(_a));
  }
  /* 1335b0: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 1335b4: str w11, [x9], #4 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 11));
  }
  /* 1335b8: b.ne #0x1335ac */
  if (ARC_COND(c, 1)) goto L_1335ac;
L_1335bc:;
  /* 1335bc: str wzr, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 31));
  /* 1335c0: ldrb w8, [x24] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 24)));
  /* 1335c4: tbnz w8, #0, #0x1335dc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1335dc;
  /* 1335c8: lsl w8, w23, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 23)) << ((UINT64_C(1)) & 31)));
  /* 1335cc: strb w8, [x24] */
  arc_st8(ARC_X_R(c, 24), ARC_W_R(c, 8));
  /* 1335d0: ldrb w8, [x21, #0x57] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 21) + INT64_C(87))));
  /* 1335d4: cbnz w8, #0x133624 */
  if ((ARC_W_R(c, 8)) != 0) goto L_133624;
  /* 1335d8: b #0x1335e8 */
  goto L_1335e8;
L_1335dc:;
  /* 1335dc: str x23, [x20, #0x50] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(80)), ARC_X_R(c, 23));
  /* 1335e0: ldrb w8, [x21, #0x57] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 21) + INT64_C(87))));
  /* 1335e4: cbnz w8, #0x133624 */
  if ((ARC_W_R(c, 8)) != 0) goto L_133624;
L_1335e8:;
  /* 1335e8: ldrb w8, [x20, #0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(96))));
  /* 1335ec: tbnz w8, #0, #0x1337ac */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1337ac;
  /* 1335f0: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 1335f4: strb w8, [x20, #0x60] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(96)), ARC_W_R(c, 8));
  /* 1335f8: add x8, x20, #0x64 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + UINT64_C(100)));
  /* 1335fc: b #0x1337b8 */
  goto L_1337b8;
L_133600:;
  /* 133600: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* 133604: ldr x8, [x20, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(88))));
  /* 133608: str x9, [x20, #0x50] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(80)), ARC_X_R(c, 9));
L_13360c:;
  /* 13360c: mov x9, #0x28 */
  ARC_X_W(c, 9, UINT64_C(40));
  /* 133610: str wzr, [x8, #8] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 31));
  /* 133614: movk x9, #0x29, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(176093659136)));
  /* 133618: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 13361c: ldrb w8, [x21, #0x57] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 21) + INT64_C(87))));
  /* 133620: cbz w8, #0x1335e8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1335e8;
L_133624:;
  /* 133624: ldr x8, [x21, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(72))));
  /* 133628: stp x8, xzr, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13362c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 133630: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1259060));
  fn1_1443c0(c);
  /* 133634: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 133638: stur x0, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), ARC_X_R(c, 0));
  /* 13363c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 133640: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 133644: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 133648: mov w2, #0x64 */
  ARC_W_W(c, 2, UINT64_C(100));
  /* 13364c: bl #0x1444c8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1259088));
  fn1_1444c8(c);
  /* 133650: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 133654: cbz x24, #0x133660 */
  if ((ARC_X_R(c, 24)) == 0) goto L_133660;
  /* 133658: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 13365c: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1259104));
  fn1_1443c0(c);
L_133660:;
  /* 133660: cmn x23, #1 */
  (void)arc_add64(c, ARC_X_R(c, 23), UINT64_C(1), 0);
  /* 133664: b.eq #0x13385c */
  if (ARC_COND(c, 0)) goto L_13385c;
  /* 133668: mov x24, x20 */
  ARC_X_W(c, 24, ARC_X_R(c, 20));
  /* 13366c: ldr x8, [x24, #0x60]! */
  { const uint64_t _a = (ARC_X_R(c, 24) + INT64_C(96));
    ARC_X_W(c, 24, ARC_X_R(c, 24) + INT64_C(96));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 133670: ldrb w9, [x24] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 24)));
  /* 133674: and x10, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 133678: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 13367c: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 133680: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* 133684: csel x1, x9, x10, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* 133688: and w9, w8, #0xff */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) & UINT64_C(255)));
  /* 13368c: subs x2, x23, x1 */
  ARC_X_W(c, 2, arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 1)));
  /* 133690: b.ls #0x1336d4 */
  if (ARC_COND(c, 9)) goto L_1336d4;
  /* 133694: ldr x10, [x20, #0x68] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 20) + INT64_C(104))));
  /* 133698: ubfx x8, x8, #1, #7 */
  ARC_X_W(c, 8, (((uint64_t)(ARC_X_R(c, 8)) >> 1) & UINT64_C(127)));
  /* 13369c: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 1336a0: csel x3, x8, x10, eq */
  ARC_X_W(c, 3, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* 1336a4: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 1336a8: mov x4, xzr */
  ARC_X_W(c, 4, ARC_X_R(c, 31));
  /* 1336ac: mov x5, x3 */
  ARC_X_W(c, 5, ARC_X_R(c, 3));
  /* 1336b0: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 1336b4: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1259192));
  fn1_142da0(c);
  /* 1336b8: ldrb w8, [x20, #0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(96))));
  /* 1336bc: ldr x9, [x20, #0x70] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(112))));
  /* 1336c0: add x10, x20, #0x64 */
  ARC_X_W(c, 10, (ARC_X_R(c, 20) + UINT64_C(100)));
  /* 1336c4: str xzr, [x20, #0x68] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(104)), ARC_X_R(c, 31));
  /* 1336c8: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1336cc: csel x12, x10, x9, eq */
  ARC_X_W(c, 12, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 1336d0: b #0x1336ec */
  goto L_1336ec;
L_1336d4:;
  /* 1336d4: ldr x8, [x20, #0x70] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(112))));
  /* 1336d8: add x10, x20, #0x64 */
  ARC_X_W(c, 10, (ARC_X_R(c, 20) + UINT64_C(100)));
  /* 1336dc: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 1336e0: csel x12, x10, x8, eq */
  ARC_X_W(c, 12, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* 1336e4: mov x9, x12 */
  ARC_X_W(c, 9, ARC_X_R(c, 12));
  /* 1336e8: cbz x23, #0x133770 */
  if ((ARC_X_R(c, 23)) == 0) goto L_133770;
L_1336ec:;
  /* 1336ec: sub x8, x23, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) - UINT64_C(1)));
  /* 1336f0: and x9, x8, #0x3fffffffffffffff */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) & UINT64_C(4611686018427387903)));
  /* 1336f4: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* 1336f8: cmp x9, #7 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(7));
  /* 1336fc: b.lo #0x133754 */
  if (ARC_COND(c, 3)) goto L_133754;
  /* 133700: sub x10, x12, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 12) - ARC_X_R(c, 8)));
  /* 133704: cmp x10, #0x20 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(32));
  /* 133708: b.lo #0x133754 */
  if (ARC_COND(c, 3)) goto L_133754;
  /* 13370c: add x10, x9, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 133710: add x13, sp, #0x10 */
  ARC_X_W(c, 13, ((c)->sp + UINT64_C(16)));
  /* 133714: and x11, x10, #0x7ffffffffffffff8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) & UINT64_C(9223372036854775800)));
  /* 133718: lsl x8, x11, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 11)) << ((UINT64_C(2)) & 63)));
  /* 13371c: mov x14, x11 */
  ARC_X_W(c, 14, ARC_X_R(c, 11));
  /* 133720: add x9, x12, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 12) + ARC_X_R(c, 8)));
  /* 133724: add x8, x13, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 13) + ARC_X_R(c, 8)));
  /* 133728: add x13, x13, #0x10 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(16)));
  /* 13372c: add x12, x12, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(16)));
L_133730:;
  /* 133730: ldp q0, q1, [x13, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 13) + INT64_C(-16));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 133734: subs x14, x14, #8 */
  ARC_X_W(c, 14, arc_sub64(c, ARC_X_R(c, 14), UINT64_C(8)));
  /* 133738: add x13, x13, #0x20 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(32)));
  /* 13373c: stp q0, q1, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 133740: add x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(32)));
  /* 133744: b.ne #0x133730 */
  if (ARC_COND(c, 1)) goto L_133730;
  /* 133748: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 13374c: b.ne #0x133758 */
  if (ARC_COND(c, 1)) goto L_133758;
  /* 133750: b #0x133770 */
  goto L_133770;
L_133754:;
  /* 133754: mov x9, x12 */
  ARC_X_W(c, 9, ARC_X_R(c, 12));
L_133758:;
  /* 133758: add x10, sp, #0x10 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(16)));
  /* 13375c: add x10, x10, x23, lsl #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 23)) << 2)));
L_133760:;
  /* 133760: ldr w11, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    ARC_W_W(c, 11, arc_ld32(_a));
  }
  /* 133764: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 133768: str w11, [x9], #4 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 11));
  }
  /* 13376c: b.ne #0x133760 */
  if (ARC_COND(c, 1)) goto L_133760;
L_133770:;
  /* 133770: str wzr, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 31));
  /* 133774: ldrb w8, [x24] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 24)));
  /* 133778: tbnz w8, #0, #0x133790 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_133790;
  /* 13377c: lsl w8, w23, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 23)) << ((UINT64_C(1)) & 31)));
  /* 133780: strb w8, [x24] */
  arc_st8(ARC_X_R(c, 24), ARC_W_R(c, 8));
  /* 133784: ldrb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 133788: tbz w8, #0, #0x1337d0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1337d0;
  /* 13378c: b #0x13379c */
  goto L_13379c;
L_133790:;
  /* 133790: str x23, [x20, #0x68] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(104)), ARC_X_R(c, 23));
  /* 133794: ldrb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 133798: tbz w8, #0, #0x1337d0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1337d0;
L_13379c:;
  /* 13379c: ldp x2, x1, [x20, #0x38] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(56));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 1337a0: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 1337a4: bl #0xe22b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1259432));
  fn1_e22b8(c);
  /* 1337a8: b #0x1337e0 */
  goto L_1337e0;
L_1337ac:;
  /* 1337ac: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* 1337b0: ldr x8, [x20, #0x70] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(112))));
  /* 1337b4: str x9, [x20, #0x68] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(104)), ARC_X_R(c, 9));
L_1337b8:;
  /* 1337b8: mov x9, #0x28 */
  ARC_X_W(c, 9, UINT64_C(40));
  /* 1337bc: str wzr, [x8, #8] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 31));
  /* 1337c0: movk x9, #0x29, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(176093659136)));
  /* 1337c4: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1337c8: ldrb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 1337cc: tbnz w8, #0, #0x13379c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_13379c;
L_1337d0:;
  /* 1337d0: ldr q0, [x22] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 22)), arc_ld64(ARC_X_R(c, 22) + 8));
  /* 1337d4: ldr x8, [x22, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 1337d8: stur q0, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)) + 8, (c)->q[0].u64[1]);
  /* 1337dc: stur x8, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 8));
L_1337e0:;
  /* 1337e0: ldrb w5, [x21, #0x56] */
  ARC_W_W(c, 5, arc_ld8((ARC_X_R(c, 21) + INT64_C(86))));
  /* 1337e4: ldrb w4, [x21, #0x53] */
  ARC_W_W(c, 4, arc_ld8((ARC_X_R(c, 21) + INT64_C(83))));
  /* 1337e8: ldrb w3, [x21, #0x52] */
  ARC_W_W(c, 3, arc_ld8((ARC_X_R(c, 21) + INT64_C(82))));
  /* 1337ec: add x0, x20, #0x7c */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(124)));
  /* 1337f0: sub x1, x29, #0x20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 1337f4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1337f8: bl #0x13397c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1259516));
  fn1_13397c(c);
  /* 1337fc: ldrb w5, [x21, #0x57] */
  ARC_W_W(c, 5, arc_ld8((ARC_X_R(c, 21) + INT64_C(87))));
  /* 133800: ldrb w4, [x21, #0x55] */
  ARC_W_W(c, 4, arc_ld8((ARC_X_R(c, 21) + INT64_C(85))));
  /* 133804: ldrb w3, [x21, #0x54] */
  ARC_W_W(c, 3, arc_ld8((ARC_X_R(c, 21) + INT64_C(84))));
  /* 133808: add x0, x20, #0x80 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(128)));
  /* 13380c: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 133810: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 133814: bl #0x13397c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1259544));
  fn1_13397c(c);
  /* 133818: ldurb w8, [x29, #-0x20] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 13381c: tbz w8, #0, #0x133834 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_133834;
  /* 133820: ldur x8, [x29, #-0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 133824: ldur x0, [x29, #-0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 133828: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 13382c: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 133830: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1259572));
  fn1_142608(c);
L_133834:;
  /* 133834: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 133838: bl #0x144210 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1259580));
  fn1_144210(c);
  /* 13383c: add sp, sp, #0x1c0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(448)));
  /* 133840: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 133844: ldr x28, [sp, #0x10] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(16))));
  /* 133848: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 13384c: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 133850: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 133854: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 133858: ret  */
  return;
L_13385c:;
  /* 13385c: adrp x0, #0x4f000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(323584)));
  /* 133860: add x0, x0, #0x7a1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1953)));
  /* 133864: bl #0x142c98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1259624));
  fn1_142c98(c);
L_133868:;
  /* 133868: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 13386c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 133870: bl #0x11dda8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1259636));
  fn1_11dda8(c);
  /* 133874: adrp x0, #0x50000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(327680)));
  /* 133878: add x0, x0, #0xfc2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(4034)));
  /* 13387c: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* 133880: sub x1, x29, #0x20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 133884: add x19, sp, #0x10 */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(16)));
  /* 133888: bl #0x125878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1259660));
  fn1_125878(c);
  /* 13388c: ldrb w8, [sp, #0x10] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(16))));
  /* 133890: ldr x9, [sp, #0x20] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(32))));
  /* 133894: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 133898: csinc x0, x9, x19, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* 13389c: bl #0x142c98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1259680));
  fn1_142c98(c);
L_1338a0:;
  /* 1338a0: adrp x0, #0x4f000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(323584)));
  /* 1338a4: add x0, x0, #0x7a1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1953)));
  /* 1338a8: bl #0x142c98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1259692));
  fn1_142c98(c);
  /* 1338ac: ldrb w8, [sp, #0x10] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(16))));
  /* 1338b0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1338b4: tbz w8, #0, #0x1338d0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1338d0;
  /* 1338b8: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1338bc: ldr x0, [sp, #0x20] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1338c0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1338c4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1259720));
  fn1_142608(c);
  /* 1338c8: b #0x1338d0 */
  goto L_1338d0;
  /* 1338cc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_1338d0:;
  /* 1338d0: ldurb w8, [x29, #-0x20] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 1338d4: tbz w8, #0, #0x13396c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13396c;
  /* 1338d8: ldur x8, [x29, #-0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 1338dc: ldur x0, [x29, #-0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 1338e0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1338e4: b #0x133958 */
  goto L_133958;
  /* 1338e8: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1259756));
  fn1_a1454(c);
  /* 1338ec: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1259760));
  fn1_a1454(c);
  /* 1338f0: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1259764));
  fn1_a1454(c);
  /* 1338f4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1259768));
  fn1_a1454(c);
  /* 1338f8: b #0x133968 */
  goto L_133968;
  /* 1338fc: b #0x133968 */
  goto L_133968;
  /* 133900: b #0x13391c */
  goto L_13391c;
  /* 133904: b #0x13391c */
  goto L_13391c;
  /* 133908: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1259788));
  fn1_a1454(c);
  /* 13390c: b #0x13392c */
  goto L_13392c;
  /* 133910: b #0x13392c */
  goto L_13392c;
  /* 133914: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1259800));
  fn1_a1454(c);
  /* 133918: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1259804));
  fn1_a1454(c);
L_13391c:;
  /* 13391c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 133920: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 133924: bl #0x135428 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1259816));
  fn1_135428(c);
  /* 133928: b #0x13396c */
  goto L_13396c;
L_13392c:;
  /* 13392c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 133930: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 133934: bl #0x135428 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1259832));
  fn1_135428(c);
  /* 133938: b #0x13396c */
  goto L_13396c;
  /* 13393c: ldurb w8, [x29, #-0x20] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 133940: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 133944: tbz w8, #0, #0x13396c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13396c;
  /* 133948: ldur x8, [x29, #-0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 13394c: ldur x0, [x29, #-0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 133950: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 133954: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
L_133958:;
  /* 133958: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1259868));
  fn1_142608(c);
  /* 13395c: b #0x13396c */
  goto L_13396c;
  /* 133960: b #0x133968 */
  goto L_133968;
  /* 133964: b #0x133968 */
  goto L_133968;
L_133968:;
  /* 133968: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_13396c:;
  /* 13396c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 133970: bl #0x12c2c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1259892));
  fn1_12c2c0(c);
  /* 133974: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 133978: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1259900));
  fn1_9cc20(c);
}

void fn1_134cb4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192756));
  /* 134cb4: bti c */
  /* bti: no architectural effect here */
  /* 134cb8: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* 134cbc: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_1372ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039202540));
  /* 1372ec: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1372f0: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1372f4: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1372f8: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1372fc: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 137300: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 137304: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 137308: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* 13730c: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 137310: ldr x8, [x8, #0xaa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2728))));
  /* 137314: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 137318: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 13731c: adrp x24, #0x15d000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 137320: nop  */
  /* nop: no architectural effect here */
  /* 137324: adr x23, #0x15dc40 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1432640)));
  /* 137328: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 13732c: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 137330: nop  */
  /* nop: no architectural effect here */
  /* 137334: adr x8, #0x15dd90 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 137338: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13733c: tbz w8, #0, #0x1373dc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1373dc;
L_137340:;
  /* 137340: ldr x8, [x24, #0xd88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 24) + INT64_C(3464))));
  /* 137344: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* 137348: str x8, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 8));
  /* 13734c: b.eq #0x13735c */
  if (ARC_COND(c, 0)) goto L_13735c;
  /* 137350: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* 137354: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 137358: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1274716));
  fn1_db2e0(c);
L_13735c:;
  /* 13735c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 137360: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 137364: ldr x8, [x8, #0xe40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3648))));
  /* 137368: str wzr, [x20, #0x40] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(64)), ARC_W_R(c, 31));
  /* 13736c: stp xzr, xzr, [x20, #0x50] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 137370: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 137374: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 137378: mov w8, #0x1000 */
  ARC_W_W(c, 8, UINT64_C(4096));
  /* 13737c: stp q0, q0, [x20, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 137380: str q0, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* 137384: str x8, [x20, #0x48] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(72)), ARC_X_R(c, 8));
  /* 137388: cbz x22, #0x1373ac */
  if ((ARC_X_R(c, 22)) == 0) goto L_1373ac;
  /* 13738c: cmp x22, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 22), UINT64_C(0));
  /* 137390: mov w8, #0x7fffffff */
  ARC_W_W(c, 8, UINT64_C(2147483647));
  /* 137394: csel x0, x8, x22, lt */
  ARC_X_W(c, 0, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 22)));
  /* 137398: cbz x19, #0x1373b8 */
  if ((ARC_X_R(c, 19)) == 0) goto L_1373b8;
L_13739c:;
  /* 13739c: add x8, x19, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 0)));
  /* 1373a0: stp x19, x19, [x20, #0x28] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1373a4: str x8, [x20, #0x38] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(56)), ARC_X_R(c, 8));
  /* 1373a8: b #0x1373bc */
  goto L_1373bc;
L_1373ac:;
  /* 1373ac: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1373b0: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1274804));
  fn1_142860(c);
  /* 1373b4: cbnz x19, #0x13739c */
  if ((ARC_X_R(c, 19)) != 0) goto L_13739c;
L_1373b8:;
  /* 1373b8: add x19, x21, x0 */
  ARC_X_W(c, 19, (ARC_X_R(c, 21) + ARC_X_R(c, 0)));
L_1373bc:;
  /* 1373bc: stp x21, x21, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1373c0: str x19, [x20, #0x20] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(32)), ARC_X_R(c, 19));
  /* 1373c4: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1373c8: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1373cc: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1373d0: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1373d4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1373d8: ret  */
  return;
L_1373dc:;
  /* 1373dc: nop  */
  /* nop: no architectural effect here */
  /* 1373e0: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 1373e4: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1274856));
  fn1_1424b8(c);
  /* 1373e8: cbz w0, #0x137340 */
  if ((ARC_W_R(c, 0)) == 0) goto L_137340;
  /* 1373ec: bl #0x143ac0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1274864));
  fn1_143ac0(c);
  /* 1373f0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1373f4: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* 1373f8: str x8, [x24, #0xd88] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(3464)), ARC_X_R(c, 8));
  /* 1373fc: b.eq #0x13740c */
  if (ARC_COND(c, 0)) goto L_13740c;
  /* 137400: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* 137404: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 137408: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1274892));
  fn1_db2e0(c);
L_13740c:;
  /* 13740c: nop  */
  /* nop: no architectural effect here */
  /* 137410: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 137414: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1274904));
  fn1_1424d0(c);
  /* 137418: b #0x137340 */
  goto L_137340;
  /* 13741c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 137420: nop  */
  /* nop: no architectural effect here */
  /* 137424: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 137428: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1274924));
  fn1_1424e8(c);
  /* 13742c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 137430: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1274932));
  fn1_a1454(c);
}

void fn1_13aa0c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039216652));
  /* 13aa0c: bti c */
  /* bti: no architectural effect here */
  /* 13aa10: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* 13aa14: mov x8, #0xe38f */
  ARC_X_W(c, 8, UINT64_C(58255));
  /* 13aa18: movk x8, #0x8e38, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(2386034688)));
  /* 13aa1c: ldp x11, x10, [x9, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(32));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 13aa20: movk x8, #0x38e3, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(62547608731648)));
  /* 13aa24: movk x8, #0xe38e, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(16397043293302554624)));
  /* 13aa28: ldr x9, [x9, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 13aa2c: add x10, x10, x11 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + ARC_X_R(c, 11)));
  /* 13aa30: mov w11, #0x24 */
  ARC_W_W(c, 11, UINT64_C(36));
  /* 13aa34: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* 13aa38: umulh x8, x10, x8 */
  ARC_X_W(c, 8, arc_umulh(ARC_X_R(c, 10), ARC_X_R(c, 8)));
  /* 13aa3c: lsr x8, x8, #5 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(5)) & 63)));
  /* 13aa40: msub x10, x8, x11, x10 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) - ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 11)))));
  /* 13aa44: mov w11, #0x70 */
  ARC_W_W(c, 11, UINT64_C(112));
  /* 13aa48: ldr x8, [x9, x8, lsl #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 3))));
  /* 13aa4c: nop  */
  /* nop: no architectural effect here */
  /* 13aa50: madd x8, x10, x11, x8 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) + ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 11)))));
  /* 13aa54: add x0, x8, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* 13aa58: ret  */
  return;
}

void fn1_141720(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039244576));
  /* 141720: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 141724: sub sp, sp, #0x1b0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(432)));
  /* 141728: stp x29, x30, [sp, #0x150] */
  { const uint64_t _pa = ((c)->sp + INT64_C(336));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 14172c: stp x28, x27, [sp, #0x160] */
  { const uint64_t _pa = ((c)->sp + INT64_C(352));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 141730: stp x26, x25, [sp, #0x170] */
  { const uint64_t _pa = ((c)->sp + INT64_C(368));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 141734: stp x24, x23, [sp, #0x180] */
  { const uint64_t _pa = ((c)->sp + INT64_C(384));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 141738: stp x22, x21, [sp, #0x190] */
  { const uint64_t _pa = ((c)->sp + INT64_C(400));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 14173c: stp x20, x19, [sp, #0x1a0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(416));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 141740: add x29, sp, #0x150 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(336)));
  /* 141744: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* 141748: mov x22, x8 */
  ARC_X_W(c, 22, ARC_X_R(c, 8));
  /* 14174c: adrp x8, #0x50000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(327680)));
  /* 141750: add x8, x8, #0x8db */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2267)));
  /* 141754: nop  */
  /* nop: no architectural effect here */
  /* 141758: adr x19, #0x159210 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 14175c: nop  */
  /* nop: no architectural effect here */
  /* 141760: adr x24, #0x156d40 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 141764: stp x8, x1, [sp, #0xa8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(168));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 141768: stp x0, xzr, [sp, #0xb8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(184));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 14176c: cbz x1, #0x141780 */
  if ((ARC_X_R(c, 1)) == 0) goto L_141780;
  /* 141770: str wzr, [x1] */
  arc_st32(ARC_X_R(c, 1), ARC_W_R(c, 31));
  /* 141774: ldarb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 141778: tbz w8, #0, #0x141d74 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_141d74;
L_14177c:;
  /* 14177c: str x24, [x1, #8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(8)), ARC_X_R(c, 24));
L_141780:;
  /* 141780: ldrb w10, [x25] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 25)));
  /* 141784: ldr x8, [x25, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(8))));
  /* 141788: lsr x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* 14178c: ands w10, w10, #1 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 10, _r); }
  /* 141790: csel x11, x9, x8, eq */
  ARC_X_W(c, 11, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 141794: cbz x11, #0x1418ac */
  if ((ARC_X_R(c, 11)) == 0) goto L_1418ac;
  /* 141798: cmn x11, #8 */
  (void)arc_add64(c, ARC_X_R(c, 11), UINT64_C(8), 0);
  /* 14179c: stp xzr, xzr, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1417a0: str xzr, [sp, #0xa0] */
  arc_st64(((c)->sp + INT64_C(160)), ARC_X_R(c, 31));
  /* 1417a4: stp xzr, xzr, [sp, #0x78] */
  { const uint64_t _pa = ((c)->sp + INT64_C(120));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1417a8: str xzr, [sp, #0x88] */
  arc_st64(((c)->sp + INT64_C(136)), ARC_X_R(c, 31));
  /* 1417ac: b.hs #0x141da0 */
  if (ARC_COND(c, 2)) goto L_141da0;
  /* 1417b0: cmp x11, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(23));
  /* 1417b4: b.lo #0x1417e0 */
  if (ARC_COND(c, 3)) goto L_1417e0;
  /* 1417b8: orr x8, x11, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 11) | UINT64_C(7)));
  /* 1417bc: mov w9, #0x19 */
  ARC_W_W(c, 9, UINT64_C(25));
  /* 1417c0: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* 1417c4: csel x1, x9, x8, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 1417c8: add x0, sp, #0x78 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(120)));
  /* 1417cc: bl #0xda620 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1316816));
  fn1_da620(c);
  /* 1417d0: ldrb w10, [x25] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 25)));
  /* 1417d4: ldr x8, [x25, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(8))));
  /* 1417d8: lsr x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* 1417dc: and w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) & UINT64_C(1)));
L_1417e0:;
  /* 1417e0: ldr x11, [x25, #0x10] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 25) + INT64_C(16))));
  /* 1417e4: cmp w10, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(0));
  /* 1417e8: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* 1417ec: csel x8, x9, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 1417f0: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* 1417f4: stp xzr, xzr, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1417f8: csinc x10, x11, x25, ne */
  ARC_X_W(c, 10, (ARC_COND(c, 1) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 25)) + 1)));
  /* 1417fc: strb w9, [sp, #0x70] */
  arc_st8(((c)->sp + INT64_C(112)), ARC_W_R(c, 9));
  /* 141800: stp x10, x8, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 141804: bl #0xda370 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1316872));
  fn1_da370(c);
  /* 141808: str wzr, [sp, #0x40] */
  arc_st32(((c)->sp + INT64_C(64)), ARC_W_R(c, 31));
  /* 14180c: ldarb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 141810: tbz w8, #0, #0x141da4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_141da4;
L_141814:;
  /* 141814: ldrb w8, [sp, #0x70] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(112))));
  /* 141818: str x22, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 22));
  /* 14181c: str x24, [sp, #0x48] */
  arc_st64(((c)->sp + INT64_C(72)), ARC_X_R(c, 24));
  /* 141820: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 141824: b.ne #0x1418d4 */
  if (ARC_COND(c, 1)) goto L_1418d4;
  /* 141828: str xzr, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 31));
  /* 14182c: mov x28, xzr */
  ARC_X_W(c, 28, ARC_X_R(c, 31));
  /* 141830: mov x26, xzr */
  ARC_X_W(c, 26, ARC_X_R(c, 31));
L_141834:;
  /* 141834: stp xzr, xzr, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 141838: str xzr, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 31));
  /* 14183c: sub x8, x29, #0x88 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(136)));
  /* 141840: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 141844: add x1, sp, #0x40 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(64)));
  /* 141848: bl #0x144678 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1316940));
  fn1_144678(c);
  /* 14184c: ldrb w8, [sp, #0x90] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(144))));
  /* 141850: tbz w8, #0, #0x141864 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_141864;
  /* 141854: ldr x8, [sp, #0x90] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(144))));
  /* 141858: ldr x0, [sp, #0xa0] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(160))));
  /* 14185c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 141860: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1316964));
  fn1_142608(c);
L_141864:;
  /* 141864: ldur q0, [x29, #-0x88] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-136))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-136)) + 8));
  /* 141868: ldur x8, [x29, #-0x78] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-120))));
  /* 14186c: ldrb w9, [sp, #0x20] */
  ARC_W_W(c, 9, arc_ld8(((c)->sp + INT64_C(32))));
  /* 141870: sturh wzr, [x29, #-0x88] */
  arc_st16((ARC_X_R(c, 29) + INT64_C(-136)), ARC_W_R(c, 31));
  /* 141874: str q0, [sp, #0x90] */
  arc_st64(((c)->sp + INT64_C(144)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(144)) + 8, (c)->q[0].u64[1]);
  /* 141878: str x8, [sp, #0xa0] */
  arc_st64(((c)->sp + INT64_C(160)), ARC_X_R(c, 8));
  /* 14187c: tbz w9, #0, #0x141890 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_141890;
  /* 141880: ldr x8, [sp, #0x20] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
  /* 141884: ldr x0, [sp, #0x30] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(48))));
  /* 141888: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 14188c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1317008));
  fn1_142608(c);
L_141890:;
  /* 141890: ldr w8, [sp, #0x40] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(64))));
  /* 141894: cbz w8, #0x141b78 */
  if ((ARC_W_R(c, 8)) == 0) goto L_141b78;
  /* 141898: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 14189c: add x0, sp, #0xa8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(168)));
  /* 1418a0: add x1, sp, #0x40 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(64)));
  /* 1418a4: bl #0x13c27c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1317032));
  fn1_13c27c(c);
  /* 1418a8: b #0x141ce0 */
  goto L_141ce0;
L_1418ac:;
  /* 1418ac: stp xzr, xzr, [x29, #-0x88] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-136));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1418b0: stur xzr, [x29, #-0x78] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-120)), ARC_X_R(c, 31));
  /* 1418b4: sub x0, x29, #0x88 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(136)));
  /* 1418b8: mov x8, x22 */
  ARC_X_W(c, 8, ARC_X_R(c, 22));
  /* 1418bc: bl #0x144678 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1317056));
  fn1_144678(c);
  /* 1418c0: ldurb w8, [x29, #-0x88] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-136))));
  /* 1418c4: tbz w8, #0, #0x141d24 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_141d24;
  /* 1418c8: ldur x0, [x29, #-0x78] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-120))));
  /* 1418cc: ldur x8, [x29, #-0x88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-136))));
  /* 1418d0: b #0x141d1c */
  goto L_141d1c;
L_1418d4:;
  /* 1418d4: add x8, sp, #0x78 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(120)));
  /* 1418d8: mov x26, xzr */
  ARC_X_W(c, 26, ARC_X_R(c, 31));
  /* 1418dc: mov x28, xzr */
  ARC_X_W(c, 28, ARC_X_R(c, 31));
  /* 1418e0: add x19, x25, #1 */
  ARC_X_W(c, 19, (ARC_X_R(c, 25) + UINT64_C(1)));
  /* 1418e4: orr x22, x8, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) | UINT64_C(1)));
  /* 1418e8: adrp x20, #0x50000 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(327680)));
  /* 1418ec: add x20, x20, #0x18e */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(398)));
  /* 1418f0: mov w21, #1 */
  ARC_W_W(c, 21, UINT64_C(1));
  /* 1418f4: stp x25, xzr, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 25));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1418f8: b #0x141918 */
  goto L_141918;
L_1418fc:;
  /* 1418fc: stp x26, x27, [x28], #0x10 */
  { const uint64_t _pa = ARC_X_R(c, 28);
    ARC_X_W(c, 28, ARC_X_R(c, 28) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 141900: ldr x26, [sp, #0x18] */
  ARC_X_W(c, 26, arc_ld64(((c)->sp + INT64_C(24))));
L_141904:;
  /* 141904: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* 141908: bl #0xda370 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1317132));
  fn1_da370(c);
  /* 14190c: ldrb w8, [sp, #0x70] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(112))));
  /* 141910: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 141914: b.eq #0x141834 */
  if (ARC_COND(c, 0)) goto L_141834;
L_141918:;
  /* 141918: ldrb w8, [x25] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 25)));
  /* 14191c: ldr x10, [x25, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 25) + INT64_C(16))));
  /* 141920: ldrb w11, [sp, #0x78] */
  ARC_W_W(c, 11, arc_ld8(((c)->sp + INT64_C(120))));
  /* 141924: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 141928: ldp x8, x9, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 14192c: csel x1, x19, x10, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 19)) : ARC_X_R(c, 10)));
  /* 141930: tbnz w11, #0, #0x14193c */
  if (((ARC_W_R(c, 11)) >> 0 & 1) != 0) goto L_14193c;
  /* 141934: strh wzr, [sp, #0x78] */
  arc_st16(((c)->sp + INT64_C(120)), ARC_W_R(c, 31));
  /* 141938: b #0x141948 */
  goto L_141948;
L_14193c:;
  /* 14193c: ldr x10, [sp, #0x88] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(136))));
  /* 141940: strb wzr, [x10] */
  arc_st8(ARC_X_R(c, 10), ARC_W_R(c, 31));
  /* 141944: str xzr, [sp, #0x80] */
  arc_st64(((c)->sp + INT64_C(128)), ARC_X_R(c, 31));
L_141948:;
  /* 141948: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* 14194c: mvn x9, x1 */
  ARC_X_W(c, 9, (~(uint64_t)(ARC_X_R(c, 1))));
  /* 141950: add x8, x9, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ARC_X_R(c, 8)));
  /* 141954: add x8, x1, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) + ARC_X_R(c, 8)));
  /* 141958: add x0, sp, #0x78 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(120)));
  /* 14195c: add x2, x8, #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 141960: str x26, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 26));
  /* 141964: bl #0xda784 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1317224));
  fn1_da784(c);
  /* 141968: ldrb w8, [sp, #0x78] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(120))));
  /* 14196c: ldr x9, [sp, #0x88] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(136))));
  /* 141970: sub x1, x29, #0x88 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(136)));
  /* 141974: str wzr, [sp, #0x20] */
  arc_st32(((c)->sp + INT64_C(32)), ARC_W_R(c, 31));
  /* 141978: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 14197c: str x24, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 24));
  /* 141980: csel x0, x22, x9, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 22)) : ARC_X_R(c, 9)));
  /* 141984: bl #0x144588 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1317256));
  fn1_144588(c);
  /* 141988: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 14198c: b.ne #0x1419b4 */
  if (ARC_COND(c, 1)) goto L_1419b4;
  /* 141990: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1317268));
  fn1_142a58(c);
  /* 141994: nop  */
  /* nop: no architectural effect here */
  /* 141998: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 14199c: ldr w23, [x0] */
  ARC_W_W(c, 23, arc_ld32(ARC_X_R(c, 0)));
  /* 1419a0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1419a4: tbz w8, #0, #0x141af8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_141af8;
L_1419a8:;
  /* 1419a8: nop  */
  /* nop: no architectural effect here */
  /* 1419ac: adr x8, #0x156d38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 1419b0: stp x23, x8, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
L_1419b4:;
  /* 1419b4: add x8, sp, #0x38 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(56)));
  /* 1419b8: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1419bc: add x1, sp, #0x78 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(120)));
  /* 1419c0: sub x2, x29, #0x88 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(136)));
  /* 1419c4: add x3, sp, #0x40 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(64)));
  /* 1419c8: bl #0x1388e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1317324));
  fn1_1388e8(c);
  /* 1419cc: ldrb w8, [sp, #0x38] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(56))));
  /* 1419d0: cbz x8, #0x141b58 */
  if ((ARC_X_R(c, 8)) == 0) goto L_141b58;
  /* 1419d4: cbz w8, #0x1419e0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1419e0;
  /* 1419d8: cmp w8, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(255));
  /* 1419dc: b.ne #0x141b18 */
  if (ARC_COND(c, 1)) goto L_141b18;
L_1419e0:;
  /* 1419e0: ldrb w8, [sp, #0x70] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(112))));
  /* 1419e4: mov w9, #0x62 */
  ARC_W_W(c, 9, UINT64_C(98));
  /* 1419e8: mov x27, xzr */
  ARC_X_W(c, 27, ARC_X_R(c, 31));
  /* 1419ec: mov x26, x20 */
  ARC_X_W(c, 26, ARC_X_R(c, 20));
  /* 1419f0: lsl w8, w21, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 21)) << ((ARC_W_R(c, 8)) & 31)));
  /* 1419f4: tst w8, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 9)));
  /* 1419f8: b.ne #0x141a34 */
  if (ARC_COND(c, 1)) goto L_141a34;
  /* 1419fc: mov w9, #0x14 */
  ARC_W_W(c, 9, UINT64_C(20));
  /* 141a00: tst w8, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 9)));
  /* 141a04: b.eq #0x141a10 */
  if (ARC_COND(c, 0)) goto L_141a10;
  /* 141a08: ldp x26, x27, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 141a0c: b #0x141a34 */
  goto L_141a34;
L_141a10:;
  /* 141a10: ldr x8, [sp, #0x60] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(96))));
  /* 141a14: adrp x9, #0x50000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(327680)));
  /* 141a18: add x9, x9, #0x1db */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(475)));
  /* 141a1c: mov w27, #1 */
  ARC_W_W(c, 27, UINT64_C(1));
  /* 141a20: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 141a24: cmp w8, #0x5c */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(92));
  /* 141a28: adrp x8, #0x50000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(327680)));
  /* 141a2c: add x8, x8, #0x4e */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(78)));
  /* 141a30: csel x26, x9, x8, eq */
  ARC_X_W(c, 26, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
L_141a34:;
  /* 141a34: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* 141a38: cmp x28, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 28), ARC_X_R(c, 8));
  /* 141a3c: b.lo #0x1418fc */
  if (ARC_COND(c, 3)) goto L_1418fc;
  /* 141a40: ldr x10, [sp, #0x18] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(24))));
  /* 141a44: mov x21, x20 */
  ARC_X_W(c, 21, ARC_X_R(c, 20));
  /* 141a48: mov x20, x22 */
  ARC_X_W(c, 20, ARC_X_R(c, 22));
  /* 141a4c: mov x22, x19 */
  ARC_X_W(c, 22, ARC_X_R(c, 19));
  /* 141a50: mov x19, x24 */
  ARC_X_W(c, 19, ARC_X_R(c, 24));
  /* 141a54: sub x24, x28, x10 */
  ARC_X_W(c, 24, (ARC_X_R(c, 28) - ARC_X_R(c, 10)));
  /* 141a58: asr x25, x24, #4 */
  ARC_X_W(c, 25, ((uint64_t)((int64_t)(ARC_X_R(c, 24)) >> ((UINT64_C(4)) & 63))));
  /* 141a5c: add x8, x25, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 25) + UINT64_C(1)));
  /* 141a60: lsr x9, x8, #0x3c */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(60)) & 63)));
  /* 141a64: cbnz x9, #0x141d70 */
  if ((ARC_X_R(c, 9)) != 0) goto L_141d70;
  /* 141a68: ldr x9, [sp, #0x10] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(16))));
  /* 141a6c: sub x23, x9, x10 */
  ARC_X_W(c, 23, (ARC_X_R(c, 9) - ARC_X_R(c, 10)));
  /* 141a70: asr x9, x23, #3 */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 23)) >> ((UINT64_C(3)) & 63))));
  /* 141a74: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 141a78: csel x8, x9, x8, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 141a7c: mov x9, #0x7ffffffffffffff0 */
  ARC_X_W(c, 9, UINT64_C(9223372036854775792));
  /* 141a80: cmp x23, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 9));
  /* 141a84: mov x9, #0xfffffffffffffff */
  ARC_X_W(c, 9, UINT64_C(1152921504606846975));
  /* 141a88: csel x28, x8, x9, lo */
  ARC_X_W(c, 28, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* 141a8c: lsr x8, x28, #0x3c */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 28)) >> ((UINT64_C(60)) & 63)));
  /* 141a90: cbnz x8, #0x141d6c */
  if ((ARC_X_R(c, 8)) != 0) goto L_141d6c;
  /* 141a94: lsl x0, x28, #4 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 28)) << ((UINT64_C(4)) & 63)));
  /* 141a98: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1317532));
  fn1_1428f0(c);
  /* 141a9c: add x8, x0, x24 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 24)));
  /* 141aa0: add x9, x0, x28, lsl #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 28)) << 4)));
  /* 141aa4: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 141aa8: sub x25, x8, x25, lsl #4 */
  ARC_X_W(c, 25, (ARC_X_R(c, 8) - ((uint64_t)(ARC_X_R(c, 25)) << 4)));
  /* 141aac: stp x26, x27, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 141ab0: ldr x26, [sp, #0x18] */
  ARC_X_W(c, 26, arc_ld64(((c)->sp + INT64_C(24))));
  /* 141ab4: str x9, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 9));
  /* 141ab8: add x28, x8, #0x10 */
  ARC_X_W(c, 28, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 141abc: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 141ac0: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 141ac4: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1317576));
  fn1_1449d8(c);
  /* 141ac8: cbz x26, #0x141ad8 */
  if ((ARC_X_R(c, 26)) == 0) goto L_141ad8;
  /* 141acc: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 141ad0: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 141ad4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1317592));
  fn1_142608(c);
L_141ad8:;
  /* 141ad8: mov x26, x25 */
  ARC_X_W(c, 26, ARC_X_R(c, 25));
  /* 141adc: ldr x25, [sp, #8] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(8))));
  /* 141ae0: mov x24, x19 */
  ARC_X_W(c, 24, ARC_X_R(c, 19));
  /* 141ae4: mov x19, x22 */
  ARC_X_W(c, 19, ARC_X_R(c, 22));
  /* 141ae8: mov x22, x20 */
  ARC_X_W(c, 22, ARC_X_R(c, 20));
  /* 141aec: mov x20, x21 */
  ARC_X_W(c, 20, ARC_X_R(c, 21));
  /* 141af0: mov w21, #1 */
  ARC_W_W(c, 21, UINT64_C(1));
  /* 141af4: b #0x141904 */
  goto L_141904;
L_141af8:;
  /* 141af8: nop  */
  /* nop: no architectural effect here */
  /* 141afc: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 141b00: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1317636));
  fn1_1424b8(c);
  /* 141b04: cbz w0, #0x1419a8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_1419a8;
  /* 141b08: nop  */
  /* nop: no architectural effect here */
  /* 141b0c: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 141b10: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1317652));
  fn1_1424d0(c);
  /* 141b14: b #0x1419a8 */
  goto L_1419a8;
L_141b18:;
  /* 141b18: sub x8, x29, #0x88 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(136)));
  /* 141b1c: add x0, sp, #0x78 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(120)));
  /* 141b20: add x1, sp, #0x40 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(64)));
  /* 141b24: bl #0x144678 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1317672));
  fn1_144678(c);
  /* 141b28: ldrb w8, [sp, #0x90] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(144))));
  /* 141b2c: tbz w8, #0, #0x141b40 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_141b40;
  /* 141b30: ldr x8, [sp, #0x90] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(144))));
  /* 141b34: ldr x0, [sp, #0xa0] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(160))));
  /* 141b38: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 141b3c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1317696));
  fn1_142608(c);
L_141b40:;
  /* 141b40: ldur q0, [x29, #-0x88] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-136))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-136)) + 8));
  /* 141b44: ldur x8, [x29, #-0x78] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-120))));
  /* 141b48: ldr w9, [sp, #0x40] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(64))));
  /* 141b4c: str q0, [sp, #0x90] */
  arc_st64(((c)->sp + INT64_C(144)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(144)) + 8, (c)->q[0].u64[1]);
  /* 141b50: str x8, [sp, #0xa0] */
  arc_st64(((c)->sp + INT64_C(160)), ARC_X_R(c, 8));
  /* 141b54: cbz w9, #0x141b6c */
  if ((ARC_W_R(c, 9)) == 0) goto L_141b6c;
L_141b58:;
  /* 141b58: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 141b5c: add x0, sp, #0xa8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(168)));
  /* 141b60: add x1, sp, #0x40 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(64)));
  /* 141b64: bl #0x13c27c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1317736));
  fn1_13c27c(c);
  /* 141b68: b #0x141ce0 */
  goto L_141ce0;
L_141b6c:;
  /* 141b6c: ldrb w8, [sp, #0x70] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(112))));
  /* 141b70: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 141b74: b.eq #0x141834 */
  if (ARC_COND(c, 0)) goto L_141834;
L_141b78:;
  /* 141b78: cmp x26, x28 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 28));
  /* 141b7c: b.eq #0x141d48 */
  if (ARC_COND(c, 0)) goto L_141d48;
  /* 141b80: add x8, sp, #0x90 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(144)));
  /* 141b84: mov w20, #0x2f */
  ARC_W_W(c, 20, UINT64_C(47));
  /* 141b88: orr x19, x8, #1 */
  ARC_X_W(c, 19, (ARC_X_R(c, 8) | UINT64_C(1)));
  /* 141b8c: b #0x141bac */
  goto L_141bac;
L_141b90:;
  /* 141b90: ldr x8, [sp, #0xa0] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(160))));
  /* 141b94: strb wzr, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 31));
  /* 141b98: str xzr, [sp, #0x98] */
  arc_st64(((c)->sp + INT64_C(152)), ARC_X_R(c, 31));
L_141b9c:;
  /* 141b9c: ldp x1, x8, [x27, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 27) + INT64_C(-16));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 141ba0: add x0, sp, #0x90 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(144)));
  /* 141ba4: add x2, x1, x8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 1) + ARC_X_R(c, 8)));
  /* 141ba8: bl #0xda784 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1317804));
  fn1_da784(c);
L_141bac:;
  /* 141bac: cmp x28, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 28), ARC_X_R(c, 26));
  /* 141bb0: b.eq #0x141cd4 */
  if (ARC_COND(c, 0)) goto L_141cd4;
  /* 141bb4: ldur x8, [x28, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 28) + INT64_C(-8))));
  /* 141bb8: mov x27, x28 */
  ARC_X_W(c, 27, ARC_X_R(c, 28));
  /* 141bbc: sub x28, x28, #0x10 */
  ARC_X_W(c, 28, (ARC_X_R(c, 28) - UINT64_C(16)));
  /* 141bc0: cbz x8, #0x141be4 */
  if ((ARC_X_R(c, 8)) == 0) goto L_141be4;
  /* 141bc4: ldr x8, [x28] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 28)));
  /* 141bc8: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 141bcc: cmp w8, #0x2f */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(47));
  /* 141bd0: b.ne #0x141be4 */
  if (ARC_COND(c, 1)) goto L_141be4;
  /* 141bd4: ldrb w8, [sp, #0x90] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(144))));
  /* 141bd8: tbnz w8, #0, #0x141b90 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_141b90;
  /* 141bdc: strh wzr, [sp, #0x90] */
  arc_st16(((c)->sp + INT64_C(144)), ARC_W_R(c, 31));
  /* 141be0: b #0x141b9c */
  goto L_141b9c;
L_141be4:;
  /* 141be4: add x0, sp, #0x90 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(144)));
  /* 141be8: bl #0x142b30 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1317868));
  fn1_142b30(c);
  /* 141bec: cbz x1, #0x141b9c */
  if ((ARC_X_R(c, 1)) == 0) goto L_141b9c;
  /* 141bf0: ldrb w8, [sp, #0x90] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(144))));
  /* 141bf4: tbnz w8, #0, #0x141c10 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_141c10;
  /* 141bf8: cmp w8, #0x2c */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(44));
  /* 141bfc: b.ne #0x141c68 */
  if (ARC_COND(c, 1)) goto L_141c68;
  /* 141c00: mov w21, #0x16 */
  ARC_W_W(c, 21, UINT64_C(22));
  /* 141c04: mov x22, x19 */
  ARC_X_W(c, 22, ARC_X_R(c, 19));
  /* 141c08: mov w24, #0x30 */
  ARC_W_W(c, 24, UINT64_C(48));
  /* 141c0c: b #0x141c60 */
  goto L_141c60;
L_141c10:;
  /* 141c10: ldp x9, x8, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 141c14: and x23, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 23, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 141c18: sub x21, x23, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 23) - UINT64_C(1)));
  /* 141c1c: cmp x8, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 21));
  /* 141c20: b.ne #0x141c7c */
  if (ARC_COND(c, 1)) goto L_141c7c;
  /* 141c24: cmn x23, #8 */
  (void)arc_add64(c, ARC_X_R(c, 23), UINT64_C(8), 0);
  /* 141c28: b.eq #0x141dc4 */
  if (ARC_COND(c, 0)) goto L_141dc4;
  /* 141c2c: mov x8, #-0xe */
  ARC_X_W(c, 8, UINT64_C(18446744073709551602));
  /* 141c30: ldr x22, [sp, #0xa0] */
  ARC_X_W(c, 22, arc_ld64(((c)->sp + INT64_C(160))));
  /* 141c34: movk x8, #0x7fff, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(9223090561878065152)));
  /* 141c38: cmp x21, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* 141c3c: b.hi #0x141c88 */
  if (ARC_COND(c, 8)) goto L_141c88;
  /* 141c40: lsl x8, x21, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 21)) << ((UINT64_C(1)) & 63)));
  /* 141c44: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* 141c48: orr x8, x8, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(7)));
  /* 141c4c: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* 141c50: csinc x8, x9, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* 141c54: cmp x21, #0xc */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(12));
  /* 141c58: mov w9, #0x17 */
  ARC_W_W(c, 9, UINT64_C(23));
  /* 141c5c: csel x24, x9, x8, lo */
  ARC_X_W(c, 24, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
L_141c60:;
  /* 141c60: add x23, x21, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* 141c64: b #0x141c8c */
  goto L_141c8c;
L_141c68:;
  /* 141c68: lsr x21, x8, #1 */
  ARC_X_W(c, 21, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 141c6c: add w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(2)));
  /* 141c70: mov x25, x19 */
  ARC_X_W(c, 25, ARC_X_R(c, 19));
  /* 141c74: strb w8, [sp, #0x90] */
  arc_st8(((c)->sp + INT64_C(144)), ARC_W_R(c, 8));
  /* 141c78: b #0x141ccc */
  goto L_141ccc;
L_141c7c:;
  /* 141c7c: ldr x25, [sp, #0xa0] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(160))));
  /* 141c80: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 141c84: b #0x141cc4 */
  goto L_141cc4;
L_141c88:;
  /* 141c88: mov x24, #-9 */
  ARC_X_W(c, 24, UINT64_C(18446744073709551607));
L_141c8c:;
  /* 141c8c: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 141c90: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1318036));
  fn1_1428f0(c);
  /* 141c94: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 141c98: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 141c9c: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* 141ca0: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1318052));
  fn1_1449f0(c);
  /* 141ca4: cmp x23, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 23), UINT64_C(23));
  /* 141ca8: b.eq #0x141cb8 */
  if (ARC_COND(c, 0)) goto L_141cb8;
  /* 141cac: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 141cb0: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 141cb4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1318072));
  fn1_142608(c);
L_141cb8:;
  /* 141cb8: orr x8, x24, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) | UINT64_C(1)));
  /* 141cbc: str x25, [sp, #0xa0] */
  arc_st64(((c)->sp + INT64_C(160)), ARC_X_R(c, 25));
  /* 141cc0: str x8, [sp, #0x90] */
  arc_st64(((c)->sp + INT64_C(144)), ARC_X_R(c, 8));
L_141cc4:;
  /* 141cc4: add x8, x21, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* 141cc8: str x8, [sp, #0x98] */
  arc_st64(((c)->sp + INT64_C(152)), ARC_X_R(c, 8));
L_141ccc:;
  /* 141ccc: strh w20, [x25, x21] */
  arc_st16((ARC_X_R(c, 25) + ARC_X_R(c, 21)), ARC_W_R(c, 20));
  /* 141cd0: b #0x141b9c */
  goto L_141b9c;
L_141cd4:;
  /* 141cd4: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 141cd8: add x0, sp, #0x90 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(144)));
  /* 141cdc: bl #0x142b48 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1318112));
  fn1_142b48(c);
L_141ce0:;
  /* 141ce0: cbz x26, #0x141cf4 */
  if ((ARC_X_R(c, 26)) == 0) goto L_141cf4;
L_141ce4:;
  /* 141ce4: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* 141ce8: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 141cec: sub x1, x8, x26 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) - ARC_X_R(c, 26)));
  /* 141cf0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1318132));
  fn1_142608(c);
L_141cf4:;
  /* 141cf4: ldrb w8, [sp, #0x78] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(120))));
  /* 141cf8: tbz w8, #0, #0x141d0c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_141d0c;
  /* 141cfc: ldr x8, [sp, #0x78] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(120))));
  /* 141d00: ldr x0, [sp, #0x88] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(136))));
  /* 141d04: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 141d08: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1318156));
  fn1_142608(c);
L_141d0c:;
  /* 141d0c: ldrb w8, [sp, #0x90] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(144))));
  /* 141d10: tbz w8, #0, #0x141d24 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_141d24;
  /* 141d14: ldr x0, [sp, #0xa0] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(160))));
  /* 141d18: ldr x8, [sp, #0x90] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(144))));
L_141d1c:;
  /* 141d1c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 141d20: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1318180));
  fn1_142608(c);
L_141d24:;
  /* 141d24: ldp x20, x19, [sp, #0x1a0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(416));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 141d28: ldp x22, x21, [sp, #0x190] */
  { const uint64_t _pa = ((c)->sp + INT64_C(400));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 141d2c: ldp x24, x23, [sp, #0x180] */
  { const uint64_t _pa = ((c)->sp + INT64_C(384));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 141d30: ldp x26, x25, [sp, #0x170] */
  { const uint64_t _pa = ((c)->sp + INT64_C(368));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 141d34: ldp x28, x27, [sp, #0x160] */
  { const uint64_t _pa = ((c)->sp + INT64_C(352));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 141d38: ldp x29, x30, [sp, #0x150] */
  { const uint64_t _pa = ((c)->sp + INT64_C(336));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 141d3c: add sp, sp, #0x1b0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(432)));
  /* 141d40: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 141d44: ret  */
  return;
L_141d48:;
  /* 141d48: ldr q0, [sp, #0x90] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(144))), arc_ld64(((c)->sp + INT64_C(144)) + 8));
  /* 141d4c: ldr x8, [sp, #0xa0] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(160))));
  /* 141d50: ldr x9, [sp] */
  ARC_X_W(c, 9, arc_ld64((c)->sp));
  /* 141d54: stp xzr, xzr, [sp, #0x98] */
  { const uint64_t _pa = ((c)->sp + INT64_C(152));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 141d58: str q0, [x9] */
  arc_st64(ARC_X_R(c, 9), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 9) + 8, (c)->q[0].u64[1]);
  /* 141d5c: str x8, [x9, #0x10] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(16)), ARC_X_R(c, 8));
  /* 141d60: str xzr, [sp, #0x90] */
  arc_st64(((c)->sp + INT64_C(144)), ARC_X_R(c, 31));
  /* 141d64: cbnz x26, #0x141ce4 */
  if ((ARC_X_R(c, 26)) != 0) goto L_141ce4;
  /* 141d68: b #0x141cf4 */
  goto L_141cf4;
L_141d6c:;
  /* 141d6c: bl #0xd9fe8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1318256));
  fn1_d9fe8(c);
L_141d70:;
  /* 141d70: bl #0x141eb0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1318260));
  fn1_141eb0(c);
L_141d74:;
  /* 141d74: nop  */
  /* nop: no architectural effect here */
  /* 141d78: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 141d7c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 141d80: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1318276));
  fn1_1424b8(c);
  /* 141d84: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 141d88: cbz w0, #0x14177c */
  if ((ARC_W_R(c, 0)) == 0) goto L_14177c;
  /* 141d8c: nop  */
  /* nop: no architectural effect here */
  /* 141d90: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 141d94: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1318296));
  fn1_1424d0(c);
  /* 141d98: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 141d9c: b #0x14177c */
  goto L_14177c;
L_141da0:;
  /* 141da0: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1318308));
  fn1_d7d54(c);
L_141da4:;
  /* 141da4: nop  */
  /* nop: no architectural effect here */
  /* 141da8: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 141dac: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1318320));
  fn1_1424b8(c);
  /* 141db0: cbz w0, #0x141814 */
  if ((ARC_W_R(c, 0)) == 0) goto L_141814;
  /* 141db4: nop  */
  /* nop: no architectural effect here */
  /* 141db8: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 141dbc: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1318336));
  fn1_1424d0(c);
  /* 141dc0: b #0x141814 */
  goto L_141814;
L_141dc4:;
  /* 141dc4: str x26, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 26));
  /* 141dc8: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1318348));
  fn1_d7d54(c);
  /* 141dcc: b #0x141e60 */
  goto L_141e60;
  /* 141dd0: b #0x141e60 */
  goto L_141e60;
  /* 141dd4: b #0x141e60 */
  goto L_141e60;
  /* 141dd8: ldurb w8, [x29, #-0x88] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-136))));
  /* 141ddc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 141de0: tbz w8, #0, #0x141ea8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_141ea8;
  /* 141de4: ldur x0, [x29, #-0x78] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-120))));
  /* 141de8: ldur x8, [x29, #-0x88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-136))));
  /* 141dec: b #0x141ea0 */
  goto L_141ea0;
  /* 141df0: b #0x141e5c */
  goto L_141e5c;
  /* 141df4: ldrb w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(32))));
  /* 141df8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 141dfc: str x26, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 26));
  /* 141e00: tbnz w8, #0, #0x141e20 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_141e20;
  /* 141e04: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 141e08: cbnz x8, #0x141e6c */
  if ((ARC_X_R(c, 8)) != 0) goto L_141e6c;
L_141e0c:;
  /* 141e0c: ldrb w8, [sp, #0x78] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(120))));
  /* 141e10: tbnz w8, #0, #0x141e80 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_141e80;
L_141e14:;
  /* 141e14: ldrb w8, [sp, #0x90] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(144))));
  /* 141e18: tbnz w8, #0, #0x141e98 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_141e98;
  /* 141e1c: b #0x141ea8 */
  goto L_141ea8;
L_141e20:;
  /* 141e20: ldr x8, [sp, #0x20] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
  /* 141e24: ldr x0, [sp, #0x30] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(48))));
  /* 141e28: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 141e2c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1318448));
  fn1_142608(c);
  /* 141e30: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 141e34: cbz x8, #0x141e0c */
  if ((ARC_X_R(c, 8)) == 0) goto L_141e0c;
  /* 141e38: b #0x141e6c */
  goto L_141e6c;
  /* 141e3c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 141e40: ldrb w8, [sp, #0x78] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(120))));
  /* 141e44: tbz w8, #0, #0x141e14 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_141e14;
  /* 141e48: b #0x141e80 */
  goto L_141e80;
  /* 141e4c: b #0x141e60 */
  goto L_141e60;
  /* 141e50: b #0x141e60 */
  goto L_141e60;
  /* 141e54: b #0x141e60 */
  goto L_141e60;
  /* 141e58: b #0x141e60 */
  goto L_141e60;
L_141e5c:;
  /* 141e5c: str x26, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 26));
L_141e60:;
  /* 141e60: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 141e64: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 141e68: cbz x8, #0x141e0c */
  if ((ARC_X_R(c, 8)) == 0) goto L_141e0c;
L_141e6c:;
  /* 141e6c: ldp x8, x0, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 0, arc_ld64(_pa + 8));
  }
  /* 141e70: sub x1, x8, x0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) - ARC_X_R(c, 0)));
  /* 141e74: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1318520));
  fn1_142608(c);
  /* 141e78: ldrb w8, [sp, #0x78] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(120))));
  /* 141e7c: tbz w8, #0, #0x141e14 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_141e14;
L_141e80:;
  /* 141e80: ldr x8, [sp, #0x78] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(120))));
  /* 141e84: ldr x0, [sp, #0x88] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(136))));
  /* 141e88: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 141e8c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1318544));
  fn1_142608(c);
  /* 141e90: ldrb w8, [sp, #0x90] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(144))));
  /* 141e94: tbz w8, #0, #0x141ea8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_141ea8;
L_141e98:;
  /* 141e98: ldr x0, [sp, #0xa0] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(160))));
  /* 141e9c: ldr x8, [sp, #0x90] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(144))));
L_141ea0:;
  /* 141ea0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 141ea4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1318568));
  fn1_142608(c);
L_141ea8:;
  /* 141ea8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 141eac: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1318576));
  fn1_9cc20(c);
}

void fn1_1428f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249136));
  /* 1428f0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1428f4: ldr x17, [x16, #0x30] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(48))));
  /* 1428f8: add x16, x16, #0x30 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(48)));
  /* 1428fc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142900: nop  */
  /* nop: no architectural effect here */
  /* 142904: nop  */
  /* nop: no architectural effect here */
}

void fn1_142ef0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250672));
  /* 142ef0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142ef4: ldr x17, [x16, #0x230] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(560))));
  /* 142ef8: add x16, x16, #0x230 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(560)));
  /* 142efc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142f00: nop  */
  /* nop: no architectural effect here */
  /* 142f04: nop  */
  /* nop: no architectural effect here */
}

void fn1_1434f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252208));
  /* 1434f0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1434f4: ldr x17, [x16, #0x430] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1072))));
  /* 1434f8: add x16, x16, #0x430 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1072)));
  /* 1434fc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143500: nop  */
  /* nop: no architectural effect here */
  /* 143504: nop  */
  /* nop: no architectural effect here */
}

void fn1_143af0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253744));
  /* 143af0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143af4: ldr x17, [x16, #0x630] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1584))));
  /* 143af8: add x16, x16, #0x630 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1584)));
  /* 143afc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143b00: nop  */
  /* nop: no architectural effect here */
  /* 143b04: nop  */
  /* nop: no architectural effect here */
}

void fn1_1440f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255280));
  /* 1440f0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1440f4: ldr x17, [x16, #0x830] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2096))));
  /* 1440f8: add x16, x16, #0x830 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2096)));
  /* 1440fc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144100: nop  */
  /* nop: no architectural effect here */
  /* 144104: nop  */
  /* nop: no architectural effect here */
}

void fn1_1446f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256816));
  /* 1446f0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1446f4: ldr x17, [x16, #0xa30] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2608))));
  /* 1446f8: add x16, x16, #0xa30 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2608)));
  /* 1446fc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144700: nop  */
  /* nop: no architectural effect here */
  /* 144704: nop  */
  /* nop: no architectural effect here */
}

