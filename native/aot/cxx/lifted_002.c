#include "lifted.h"

void fn1_a0f7c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038587260));
  /* a0f7c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a0f80: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* a0f84: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a0f88: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a0f8c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* a0f90: nop  */
  /* nop: no architectural effect here */
  /* a0f94: adr x0, #0x156bb8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1403832)));
  /* a0f98: bl #0x144ac8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(659356));
  fn1_144ac8(c);
  /* a0f9c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* a0fa0: cbnz x8, #0xa0fb0 */
  if ((ARC_X_R(c, 8)) != 0) goto L_a0fb0;
  /* a0fa4: nop  */
  /* nop: no architectural effect here */
  /* a0fa8: adr x0, #0x52478 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(337016)));
  /* a0fac: bl #0xa23d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(659376));
  fn1_a23d8(c);
L_a0fb0:;
  /* a0fb0: mov x10, #0x2b2b */
  ARC_X_W(c, 10, UINT64_C(11051));
  /* a0fb4: ldr x9, [x8, #0x60] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(96))));
  /* a0fb8: movk x10, #0x4743, lsl #16 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1195573248)));
  /* a0fbc: movk x10, #0x4c4e, lsl #32 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446462603027808255)) | UINT64_C(83897891160064)));
  /* a0fc0: movk x10, #0x43, lsl #48 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(281474976710655)) | UINT64_C(18858823439613952)));
  /* a0fc4: cmp x10, x9, lsr #8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ((uint64_t)(ARC_X_R(c, 9)) >> 8));
  /* a0fc8: b.ne #0xa0ff0 */
  if (ARC_COND(c, 1)) goto L_a0ff0;
  /* a0fcc: mov x10, #0x2b00 */
  ARC_X_W(c, 10, UINT64_C(11008));
  /* a0fd0: movk x10, #0x432b, lsl #16 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1126891520)));
  /* a0fd4: movk x10, #0x4e47, lsl #32 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446462603027808255)) | UINT64_C(86066849644544)));
  /* a0fd8: movk x10, #0x434c, lsl #48 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(281474976710655)) | UINT64_C(4849250898771181568)));
  /* a0fdc: add x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* a0fe0: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* a0fe4: b.ne #0xa1004 */
  if (ARC_COND(c, 1)) goto L_a1004;
  /* a0fe8: ldr x9, [x8, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* a0fec: b #0xa1008 */
  goto L_a1008;
L_a0ff0:;
  /* a0ff0: adrp x8, #0x156000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1400832)));
  /* a0ff4: adrp x0, #0x50000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(327680)));
  /* a0ff8: add x0, x0, #0xcfd */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3325)));
  /* a0ffc: ldr x1, [x8, #0xba0] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 8) + INT64_C(2976))));
  /* a1000: bl #0xa23d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(659460));
  fn1_a23d8(c);
L_a1004:;
  /* a1004: add x9, x8, #0x80 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(128)));
L_a1008:;
  /* a1008: ldr x20, [x8, #0x10] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* a100c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* a1010: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* a1014: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* a1018: str x9, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 9));
  /* a101c: ldr x19, [x20, #8] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* a1020: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a1024: bl #0x1424a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(659496));
  fn1_1424a0(c);
  /* a1028: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* a102c: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* a1030: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* a1034: csel x19, x19, x0, eq */
  ARC_X_W(c, 19, (ARC_COND(c, 0) ? (ARC_X_R(c, 19)) : ARC_X_R(c, 0)));
  /* a1038: adrp x0, #0x151000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a103c: ldr x0, [x0, #0x8c8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(2248))));
  /* a1040: bl #0xa2848 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(659524));
  fn1_a2848(c);
  /* a1044: tbz w0, #0, #0xa1078 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_a1078;
  /* a1048: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* a104c: adrp x9, #0x156000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1400832)));
  /* a1050: ldr x20, [x9, #0xba0] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 9) + INT64_C(2976))));
  /* a1054: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* a1058: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* a105c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(659552));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* a1060: mov x3, x0 */
  ARC_X_W(c, 3, ARC_X_R(c, 0));
  /* a1064: adrp x0, #0x51000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(331776)));
  /* a1068: add x0, x0, #0x98d */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2445)));
  /* a106c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* a1070: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* a1074: bl #0xa23d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(659576));
  fn1_a23d8(c);
L_a1078:;
  /* a1078: adrp x8, #0x156000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1400832)));
  /* a107c: adrp x0, #0x50000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(327680)));
  /* a1080: add x0, x0, #0x78c */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1932)));
  /* a1084: ldr x1, [x8, #0xba0] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 8) + INT64_C(2976))));
  /* a1088: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* a108c: bl #0xa23d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(659600));
  fn1_a23d8(c);
}

void fn1_a2390(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038592400));
  /* a2390: bti c */
  /* bti: no architectural effect here */
  /* a2394: ret  */
  return;
}

void fn1_a8354(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038616916));
  /* a8354: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a8358: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a835c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* a8360: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a8364: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a8368: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* a836c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* a8370: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* a8374: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* a8378: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a837c: b.hi #0xa83a0 */
  if (ARC_COND(c, 8)) goto L_a83a0;
  /* a8380: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a8384: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a8388: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(689036));
  fn1_1428a8(c);
  /* a838c: cbz x0, #0xa83fc */
  if ((ARC_X_R(c, 0)) == 0) goto L_a83fc;
  /* a8390: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a8394: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a8398: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a839c: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_a83a0:;
  /* a83a0: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* a83a4: adrp x10, #0x149000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a83a8: add x10, x10, #0xb10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(2832)));
  /* a83ac: add x0, x21, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* a83b0: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* a83b4: mov w8, #0x15 */
  ARC_W_W(c, 8, UINT64_C(21));
  /* a83b8: str x10, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 10));
  }
  /* a83bc: ldurh w9, [x0, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* a83c0: adrp x10, #0x50000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(327680)));
  /* a83c4: add x10, x10, #0x315 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(789)));
  /* a83c8: mov w11, #0x540 */
  ARC_W_W(c, 11, UINT64_C(1344));
  /* a83cc: str x10, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 10));
  /* a83d0: ldr x10, [x19] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 19)));
  /* a83d4: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* a83d8: strb w8, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 8));
  /* a83dc: stp x8, x10, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* a83e0: orr w8, w9, w11 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) | ARC_W_R(c, 11)));
  /* a83e4: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* a83e8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a83ec: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* a83f0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a83f4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a83f8: ret  */
  return;
L_a83fc:;
  /* a83fc: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(689152));
  fn1_142488(c);
}

void fn1_ae5c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038642120));
  /* ae5c8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ae5cc: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ae5d0: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* ae5d4: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ae5d8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ae5dc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ae5e0: ldr x24, [x0, #0x1330] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* ae5e4: mov x21, x4 */
  ARC_X_W(c, 21, ARC_X_R(c, 4));
  /* ae5e8: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* ae5ec: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* ae5f0: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* ae5f4: ldr x8, [x24, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 24) + INT64_C(8))));
  /* ae5f8: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* ae5fc: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* ae600: b.hi #0xae624 */
  if (ARC_COND(c, 8)) goto L_ae624;
  /* ae604: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* ae608: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* ae60c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(714256));
  fn1_1428a8(c);
  /* ae610: cbz x0, #0xae690 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ae690;
  /* ae614: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ae618: stp x24, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ae61c: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* ae620: str x0, [x23, #0x1330] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(4912)), ARC_X_R(c, 0));
L_ae624:;
  /* ae624: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* ae628: add x0, x24, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + ARC_X_R(c, 8)));
  /* ae62c: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* ae630: str x9, [x24, #8] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(8)), ARC_X_R(c, 9));
  /* ae634: adrp x9, #0x14a000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1351680)));
  /* ae638: add x9, x9, #0x168 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(360)));
  /* ae63c: str x9, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* ae640: ldurh w9, [x0, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* ae644: mov w10, #0x36 */
  ARC_W_W(c, 10, UINT64_C(54));
  /* ae648: ldrh w11, [x21] */
  ARC_W_W(c, 11, arc_ld16(ARC_X_R(c, 21)));
  /* ae64c: strb w10, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 10));
  /* ae650: ldr x10, [x20] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 20)));
  /* ae654: str x8, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 8));
  /* ae658: and w8, w9, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* ae65c: mov w9, #0x540 */
  ARC_W_W(c, 9, UINT64_C(1344));
  /* ae660: bfxil w8, w11, #0, #6 */
  ARC_W_W(c, 8, (((uint32_t)(ARC_W_R(c, 8)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 11))) >> 0) & UINT64_C(63))));
  /* ae664: ldr q0, [x19] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 19)), arc_ld64(ARC_X_R(c, 19) + 8));
  /* ae668: orr w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 9)));
  /* ae66c: stur q0, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)) + 8, (c)->q[0].u64[1]);
  /* ae670: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* ae674: str x10, [x0, #0x28] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(40)), ARC_X_R(c, 10));
  /* ae678: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ae67c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ae680: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* ae684: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ae688: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ae68c: ret  */
  return;
L_ae690:;
  /* ae690: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(714388));
  fn1_142488(c);
}

void fn1_b36c4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038662852));
  /* b36c4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b36c8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b36cc: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b36d0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b36d4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b36d8: ldp x8, x9, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b36dc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b36e0: ldr x0, [x1] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* b36e4: ldr w21, [x1, #0x20] */
  ARC_W_W(c, 21, arc_ld32((ARC_X_R(c, 1) + INT64_C(32))));
  /* b36e8: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b36ec: str wzr, [x1, #0x20] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(32)), ARC_W_R(c, 31));
  /* b36f0: add x10, x8, #9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(9)));
  /* b36f4: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b36f8: b.ls #0xb3720 */
  if (ARC_COND(c, 9)) goto L_b3720;
  /* b36fc: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b3700: add x8, x8, #0x3e9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1001)));
  /* b3704: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b3708: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b370c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b3710: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(734996));
  fn1_142878(c);
  /* b3714: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b3718: cbz x0, #0xb37d0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b37d0;
  /* b371c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b3720:;
  /* b3720: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* b3724: add x9, x9, #0x135 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(309)));
  /* b3728: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b372c: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* b3730: mov w10, #0x3c */
  ARC_W_W(c, 10, UINT64_C(60));
  /* b3734: strb w10, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 10));
  /* b3738: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b373c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b3740: add x8, x8, #9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(9)));
  /* b3744: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b3748: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* b374c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b3750: bl #0xafa48 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(735060));
  fn1_afa48(c);
  /* b3754: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b3758: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b375c: add x10, x8, #0xb */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(11)));
  /* b3760: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b3764: b.ls #0xb378c */
  if (ARC_COND(c, 9)) goto L_b378c;
  /* b3768: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b376c: add x8, x8, #0x3eb */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1003)));
  /* b3770: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b3774: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b3778: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b377c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(735104));
  fn1_142878(c);
  /* b3780: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b3784: cbz x0, #0xb37d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b37d4;
  /* b3788: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b378c:;
  /* b378c: adrp x9, #0x50000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(327680)));
  /* b3790: add x9, x9, #0xd83 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3459)));
  /* b3794: mov w10, #0x6d61 */
  ARC_W_W(c, 10, UINT64_C(28001));
  /* b3798: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* b379c: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b37a0: movk w10, #0x2065, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(543490048)));
  /* b37a4: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b37a8: stur w10, [x8, #7] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(7)), ARC_W_R(c, 10));
  /* b37ac: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b37b0: add x8, x8, #0xb */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(11)));
  /* b37b4: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b37b8: str w21, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 21));
  /* b37bc: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b37c0: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b37c4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b37c8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b37cc: ret  */
  return;
L_b37d0:;
  /* b37d0: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(735188));
  fn1_1427b8(c);
L_b37d4:;
  /* b37d4: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(735192));
  fn1_1427b8(c);
  /* b37d8: str w21, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 21));
  /* b37dc: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(735200));
  fn1_9cc20(c);
}

void fn1_b754c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038678860));
  /* b754c: bti c */
  /* bti: no architectural effect here */
  /* b7550: ldrsw x8, [x0, #0xc] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 0) + INT64_C(12)))));
  /* b7554: nop  */
  /* nop: no architectural effect here */
  /* b7558: adr x9, #0x54508 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(345352)));
  /* b755c: ldr x1, [x9, x8, lsl #3] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 3))));
  /* b7560: nop  */
  /* nop: no architectural effect here */
  /* b7564: adr x9, #0x54538 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(345400)));
  /* b7568: ldrsw x8, [x9, x8, lsl #2] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 2)))));
  /* b756c: add x0, x9, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) + ARC_X_R(c, 8)));
  /* b7570: ret  */
  return;
}

void fn1_b9e30(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038689328));
  /* b9e30: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b9e34: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b9e38: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b9e3c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b9e40: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b9e44: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* b9e48: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b9e4c: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* b9e50: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* b9e54: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b9e58: b.hi #0xb9e7c */
  if (ARC_COND(c, 8)) goto L_b9e7c;
  /* b9e5c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b9e60: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b9e64: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(761448));
  fn1_1428a8(c);
  /* b9e68: cbz x0, #0xb9ed8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b9ed8;
  /* b9e6c: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b9e70: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b9e74: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b9e78: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_b9e7c:;
  /* b9e7c: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* b9e80: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b9e84: add x20, x21, x8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* b9e88: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* b9e8c: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(761488));
  fn1_142860(c);
  /* b9e90: adrp x9, #0x149000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1347584)));
  /* b9e94: add x9, x9, #0xc10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3088)));
  /* b9e98: mov w11, #0x540 */
  ARC_W_W(c, 11, UINT64_C(1344));
  /* b9e9c: str x9, [x20, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* b9ea0: ldurh w9, [x20, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b9ea4: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* b9ea8: mov w10, #8 */
  ARC_W_W(c, 10, UINT64_C(8));
  /* b9eac: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* b9eb0: strb w10, [x20, #8] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(8)), ARC_W_R(c, 10));
  /* b9eb4: orr w9, w9, w11 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 11)));
  /* b9eb8: stp x19, x8, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* b9ebc: sturh w9, [x20, #9] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(9)), ARC_W_R(c, 9));
  /* b9ec0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b9ec4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b9ec8: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b9ecc: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b9ed0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b9ed4: ret  */
  return;
L_b9ed8:;
  /* b9ed8: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(761564));
  fn1_142488(c);
}

void fn1_bd554(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038703444));
  /* bd554: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bd558: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bd55c: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* bd560: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bd564: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bd568: ldrb w22, [x0, #0x1c] */
  ARC_W_W(c, 22, arc_ld8((ARC_X_R(c, 0) + INT64_C(28))));
  /* bd56c: tbnz w22, #0, #0xbd64c */
  if (((ARC_W_R(c, 22)) >> 0 & 1) != 0) goto L_bd64c;
  /* bd570: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* bd574: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* bd578: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* bd57c: strb w8, [x0, #0x1c] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(28)), ARC_W_R(c, 8));
  /* bd580: bl #0xbd680 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(775556));
  fn1_bd680(c);
  /* bd584: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* bd588: cbz x1, #0xbd648 */
  if ((ARC_X_R(c, 1)) == 0) goto L_bd648;
  /* bd58c: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* bd590: ubfx w9, w8, #8, #2 */
  ARC_W_W(c, 9, (((uint32_t)(ARC_W_R(c, 8)) >> 8) & UINT64_C(3)));
  /* bd594: cbz w9, #0xbd5e8 */
  if ((ARC_W_R(c, 9)) == 0) goto L_bd5e8;
  /* bd598: cmp w9, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(2));
  /* bd59c: b.ne #0xbd5bc */
  if (ARC_COND(c, 1)) goto L_bd5bc;
  /* bd5a0: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* bd5a4: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* bd5a8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* bd5ac: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* bd5b0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(775604));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bd5b4: tbnz w0, #0, #0xbd5e8 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_bd5e8;
  /* bd5b8: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
L_bd5bc:;
  /* bd5bc: lsr w8, w8, #0xa */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(10)) & 31)));
  /* bd5c0: ands w8, w8, #3 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 8) & UINT64_C(3));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 8, _r); }
  /* bd5c4: b.eq #0xbd5e8 */
  if (ARC_COND(c, 0)) goto L_bd5e8;
  /* bd5c8: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* bd5cc: b.ne #0xbd634 */
  if (ARC_COND(c, 1)) goto L_bd634;
  /* bd5d0: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* bd5d4: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* bd5d8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* bd5dc: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* bd5e0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(775652));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bd5e4: tbz w0, #0, #0xbd634 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_bd634;
L_bd5e8:;
  /* bd5e8: ldp x8, x9, [x20, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* bd5ec: ldr x0, [x20] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 20)));
  /* bd5f0: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bd5f4: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* bd5f8: b.ls #0xbd620 */
  if (ARC_COND(c, 9)) goto L_bd620;
  /* bd5fc: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* bd600: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* bd604: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bd608: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bd60c: str x1, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 1));
  /* bd610: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(775700));
  fn1_142878(c);
  /* bd614: str x0, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 0));
  /* bd618: cbz x0, #0xbd660 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bd660;
  /* bd61c: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
L_bd620:;
  /* bd620: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* bd624: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* bd628: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* bd62c: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bd630: str x8, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 8));
L_bd634:;
  /* bd634: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* bd638: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* bd63c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* bd640: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* bd644: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(775752));
  arc_dispatch(c, ARC_X_R(c, 8));
L_bd648:;
  /* bd648: strb w22, [x19, #0x1c] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 22));
L_bd64c:;
  /* bd64c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bd650: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* bd654: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bd658: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bd65c: ret  */
  return;
L_bd660:;
  /* bd660: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(775780));
  fn1_1427b8(c);
  /* bd664: strb w22, [x19, #0x1c] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 22));
  /* bd668: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(775788));
  fn1_9cc20(c);
}

void fn1_c7618(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038744600));
L_c7618:;
  /* c7618: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* c761c: stp d15, d14, [sp, #-0xa0]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-160));
    (c)->sp = (c)->sp + INT64_C(-160);
    arc_st64(_pa, (c)->q[15].u64[0]);
    arc_st64((_pa + 8), (c)->q[14].u64[0]);
  }
  /* c7620: stp d13, d12, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, (c)->q[13].u64[0]);
    arc_st64((_pa + 8), (c)->q[12].u64[0]);
  }
  /* c7624: stp d11, d10, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, (c)->q[11].u64[0]);
    arc_st64((_pa + 8), (c)->q[10].u64[0]);
  }
  /* c7628: stp d9, d8, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, (c)->q[9].u64[0]);
    arc_st64((_pa + 8), (c)->q[8].u64[0]);
  }
  /* c762c: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* c7630: stp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* c7634: stp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* c7638: stp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* c763c: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* c7640: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* c7644: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* c7648: sub sp, sp, #0x1f0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(496)));
  /* c764c: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c7650: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c7654: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* c7658: ldr q0, [x8, #0xb00] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2816))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2816)) + 8));
  /* c765c: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c7660: ldr q30, [x9, #0xba0] */
  arc_q_w(c, 30, arc_ld64((ARC_X_R(c, 9) + INT64_C(2976))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2976)) + 8));
  /* c7664: ldr q31, [x8, #0xcf0] */
  arc_q_w(c, 31, arc_ld64((ARC_X_R(c, 8) + INT64_C(3312))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3312)) + 8));
  /* c7668: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c766c: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c7670: ldr q8, [x8, #0xa50] */
  arc_q_w(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2640))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2640)) + 8));
  /* c7674: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c7678: stur q0, [x29, #-0x60] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-96)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-96)) + 8, (c)->q[0].u64[1]);
  /* c767c: ldr q10, [x8, #0x9d0] */
  arc_q_w(c, 10, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2512)) + 8));
  /* c7680: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c7684: ldr q9, [x9, #0x990] */
  arc_q_w(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2448))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2448)) + 8));
  /* c7688: ldr q11, [x8, #0xb90] */
  arc_q_w(c, 11, arc_ld64((ARC_X_R(c, 8) + INT64_C(2960))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2960)) + 8));
  /* c768c: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c7690: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c7694: ldr q13, [x8, #0xd10] */
  arc_q_w(c, 13, arc_ld64((ARC_X_R(c, 8) + INT64_C(3344))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3344)) + 8));
  /* c7698: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c769c: ldr q12, [x9, #0xaa0] */
  arc_q_w(c, 12, arc_ld64((ARC_X_R(c, 9) + INT64_C(2720))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2720)) + 8));
  /* c76a0: ldr q14, [x8, #0x9e0] */
  arc_q_w(c, 14, arc_ld64((ARC_X_R(c, 8) + INT64_C(2528))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2528)) + 8));
  /* c76a4: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c76a8: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c76ac: ldr q0, [x8, #0xd60] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3424))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3424)) + 8));
  /* c76b0: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c76b4: ldr q15, [x9, #0xb50] */
  arc_q_w(c, 15, arc_ld64((ARC_X_R(c, 9) + INT64_C(2896))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2896)) + 8));
  /* c76b8: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c76bc: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* c76c0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* c76c4: stur q0, [x29, #-0x70] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-112)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-112)) + 8, (c)->q[0].u64[1]);
  /* c76c8: ldr q0, [x8, #0xbc0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3008))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3008)) + 8));
  /* c76cc: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c76d0: adrp x6, #0x52000 */
  ARC_X_W(c, 6, (arc_image_bases[1] + UINT64_C(335872)));
  /* c76d4: adrp x7, #0x52000 */
  ARC_X_W(c, 7, (arc_image_bases[1] + UINT64_C(335872)));
  /* c76d8: adrp x26, #0x52000 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(335872)));
  /* c76dc: stur q0, [x29, #-0x80] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-128)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-128)) + 8, (c)->q[0].u64[1]);
  /* c76e0: ldr q0, [x9, #0x970] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2416))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2416)) + 8));
  /* c76e4: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c76e8: mov x22, #-0x100 */
  ARC_X_W(c, 22, UINT64_C(18446744073709551360));
  /* c76ec: mov w27, #4 */
  ARC_W_W(c, 27, UINT64_C(4));
  /* c76f0: mov w4, #1 */
  ARC_W_W(c, 4, UINT64_C(1));
  /* c76f4: stur q0, [x29, #-0x90] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-144)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-144)) + 8, (c)->q[0].u64[1]);
  /* c76f8: ldr q0, [x8, #0xb40] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2880))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2880)) + 8));
  /* c76fc: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c7700: mov w5, #8 */
  ARC_W_W(c, 5, UINT64_C(8));
  /* c7704: mov x28, #-1 */
  ARC_X_W(c, 28, UINT64_C(18446744073709551615));
  /* c7708: str w3, [sp, #0xac] */
  arc_st32(((c)->sp + INT64_C(172)), ARC_W_R(c, 3));
  /* c770c: stur q0, [x29, #-0xa0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-160)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-160)) + 8, (c)->q[0].u64[1]);
  /* c7710: ldr q0, [x8, #0x9f0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2544))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2544)) + 8));
  /* c7714: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c7718: stp q15, q14, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, (c)->q[15].u64[0]);
    arc_st64(_pa + 8, (c)->q[15].u64[1]);
    arc_st64((_pa + 16), (c)->q[14].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[14].u64[1]);
  }
  /* c771c: stur q0, [x29, #-0xb0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-176)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-176)) + 8, (c)->q[0].u64[1]);
  /* c7720: ldr q0, [x9, #0x980] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2432)) + 8));
  /* c7724: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c7728: stp q13, q12, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, (c)->q[13].u64[0]);
    arc_st64(_pa + 8, (c)->q[13].u64[1]);
    arc_st64((_pa + 16), (c)->q[12].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[12].u64[1]);
  }
  /* c772c: stur q0, [x29, #-0xc0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-192)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-192)) + 8, (c)->q[0].u64[1]);
  /* c7730: ldr q0, [x8, #0xd30] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3376))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3376)) + 8));
  /* c7734: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c7738: stp q11, q10, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, (c)->q[11].u64[0]);
    arc_st64(_pa + 8, (c)->q[11].u64[1]);
    arc_st64((_pa + 16), (c)->q[10].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[10].u64[1]);
  }
  /* c773c: stur q0, [x29, #-0xd0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-208)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-208)) + 8, (c)->q[0].u64[1]);
  /* c7740: ldr q0, [x8, #0xb10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2832))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2832)) + 8));
  /* c7744: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c7748: stp q9, q8, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, (c)->q[9].u64[0]);
    arc_st64(_pa + 8, (c)->q[9].u64[1]);
    arc_st64((_pa + 16), (c)->q[8].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[8].u64[1]);
  }
  /* c774c: stur q0, [x29, #-0xe0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-224)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-224)) + 8, (c)->q[0].u64[1]);
  /* c7750: ldr q0, [x9, #0xc30] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(3120))), arc_ld64((ARC_X_R(c, 9) + INT64_C(3120)) + 8));
  /* c7754: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c7758: stp q31, q30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, (c)->q[31].u64[0]);
    arc_st64(_pa + 8, (c)->q[31].u64[1]);
    arc_st64((_pa + 16), (c)->q[30].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[30].u64[1]);
  }
  /* c775c: stur q0, [x29, #-0xf0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-240)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-240)) + 8, (c)->q[0].u64[1]);
  /* c7760: ldr q0, [x8, #0xd70] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3440))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3440)) + 8));
  /* c7764: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c7768: stur q0, [x29, #-0x100] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-256)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-256)) + 8, (c)->q[0].u64[1]);
  /* c776c: ldr q0, [x8, #0xa60] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2656))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2656)) + 8));
  /* c7770: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c7774: str q0, [sp, #0x120] */
  arc_st64(((c)->sp + INT64_C(288)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(288)) + 8, (c)->q[0].u64[1]);
  /* c7778: ldr q0, [x9, #0x9a0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2464))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2464)) + 8));
  /* c777c: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c7780: str q0, [sp, #0x110] */
  arc_st64(((c)->sp + INT64_C(272)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(272)) + 8, (c)->q[0].u64[1]);
  /* c7784: ldr q0, [x8, #0xbf0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3056))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3056)) + 8));
  /* c7788: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c778c: str q0, [sp, #0x100] */
  arc_st64(((c)->sp + INT64_C(256)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(256)) + 8, (c)->q[0].u64[1]);
  /* c7790: ldr q0, [x8, #0xbb0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2992))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2992)) + 8));
  /* c7794: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c7798: str q0, [sp, #0xf0] */
  arc_st64(((c)->sp + INT64_C(240)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(240)) + 8, (c)->q[0].u64[1]);
  /* c779c: ldr q0, [x9, #0x9b0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2480))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2480)) + 8));
  /* c77a0: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c77a4: str q0, [sp, #0xe0] */
  arc_st64(((c)->sp + INT64_C(224)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(224)) + 8, (c)->q[0].u64[1]);
  /* c77a8: ldr q0, [x8, #0xcb0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3248))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3248)) + 8));
  /* c77ac: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c77b0: str q0, [sp, #0xd0] */
  arc_st64(((c)->sp + INT64_C(208)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(208)) + 8, (c)->q[0].u64[1]);
  /* c77b4: ldr q0, [x8, #0xb60] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2912))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2912)) + 8));
  /* c77b8: str q0, [sp, #0xc0] */
  arc_st64(((c)->sp + INT64_C(192)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(192)) + 8, (c)->q[0].u64[1]);
  /* c77bc: ldr q0, [x9, #0xb20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2848))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2848)) + 8));
  /* c77c0: str q0, [sp, #0xb0] */
  arc_st64(((c)->sp + INT64_C(176)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(176)) + 8, (c)->q[0].u64[1]);
L_c77c4:;
  /* c77c4: mov x23, x19 */
  ARC_X_W(c, 23, ARC_X_R(c, 19));
L_c77c8:;
  /* c77c8: sub x8, x20, x23 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) - ARC_X_R(c, 23)));
  /* c77cc: mov x19, x23 */
  ARC_X_W(c, 19, ARC_X_R(c, 23));
  /* c77d0: asr x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* c77d4: subs x9, x8, #2 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2)));
  /* c77d8: b.gt #0xc77ec */
  if (ARC_COND(c, 12)) goto L_c77ec;
  /* c77dc: b.lo #0xc86b8 */
  if (ARC_COND(c, 3)) goto L_c86b8;
  /* c77e0: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* c77e4: b.ne #0xc7804 */
  if (ARC_COND(c, 1)) goto L_c7804;
  /* c77e8: b #0xc85dc */
  goto L_c85dc;
L_c77ec:;
  /* c77ec: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* c77f0: b.eq #0xc85f8 */
  if (ARC_COND(c, 0)) goto L_c85f8;
  /* c77f4: cmp x8, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(4));
  /* c77f8: b.eq #0xc8644 */
  if (ARC_COND(c, 0)) goto L_c8644;
  /* c77fc: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* c7800: b.eq #0xc8524 */
  if (ARC_COND(c, 0)) goto L_c8524;
L_c7804:;
  /* c7804: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* c7808: b.le #0xc86ec */
  if (ARC_COND(c, 13)) goto L_c86ec;
  /* c780c: cbz x21, #0xc8768 */
  if ((ARC_X_R(c, 21)) == 0) goto L_c8768;
  /* c7810: lsr x9, x8, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* c7814: ldur w10, [x20, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c7818: cmp x8, #0x81 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(129));
  /* c781c: add x9, x19, x9, lsl #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 9)) << 2)));
  /* c7820: b.lo #0xc795c */
  if (ARC_COND(c, 3)) goto L_c795c;
  /* c7824: ldr w8, [x9] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 9)));
  /* c7828: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c782c: csel w11, w8, w10, gt */
  ARC_W_W(c, 11, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c7830: csel w8, w8, w10, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c7834: stur w11, [x20, #-4] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 11));
  /* c7838: str w8, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 8));
  /* c783c: ldur w8, [x20, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c7840: ldr w10, [x19] */
  ARC_W_W(c, 10, arc_ld32(ARC_X_R(c, 19)));
  /* c7844: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c7848: csel w11, w8, w10, gt */
  ARC_W_W(c, 11, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c784c: csel w8, w8, w10, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c7850: stur w11, [x20, #-4] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 11));
  /* c7854: ldr w11, [x9] */
  ARC_W_W(c, 11, arc_ld32(ARC_X_R(c, 9)));
  /* c7858: ldr w10, [x19] */
  ARC_W_W(c, 10, arc_ld32(ARC_X_R(c, 19)));
  /* c785c: cmp w8, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 11));
  /* c7860: csel w10, w10, w11, lt */
  ARC_W_W(c, 10, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* c7864: str w10, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 10));
  /* c7868: ldr w10, [x9] */
  ARC_W_W(c, 10, arc_ld32(ARC_X_R(c, 9)));
  /* c786c: csel w8, w10, w8, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c7870: str w8, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 8));
  /* c7874: ldur w8, [x9, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 9) + INT64_C(-4))));
  /* c7878: ldur w10, [x20, #-8] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 20) + INT64_C(-8))));
  /* c787c: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c7880: csel w11, w8, w10, gt */
  ARC_W_W(c, 11, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c7884: csel w8, w8, w10, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c7888: stur w11, [x20, #-8] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-8)), ARC_W_R(c, 11));
  /* c788c: stur w8, [x9, #-4] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(-4)), ARC_W_R(c, 8));
  /* c7890: ldur w8, [x20, #-8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(-8))));
  /* c7894: ldr w10, [x19, #4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 19) + INT64_C(4))));
  /* c7898: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c789c: csel w11, w8, w10, gt */
  ARC_W_W(c, 11, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c78a0: csel w8, w8, w10, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c78a4: stur w11, [x20, #-8] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-8)), ARC_W_R(c, 11));
  /* c78a8: ldur w11, [x9, #-4] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + INT64_C(-4))));
  /* c78ac: ldr w10, [x19, #4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 19) + INT64_C(4))));
  /* c78b0: cmp w8, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 11));
  /* c78b4: csel w10, w10, w11, lt */
  ARC_W_W(c, 10, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* c78b8: str w10, [x19, #4] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(4)), ARC_W_R(c, 10));
  /* c78bc: ldur w10, [x9, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(-4))));
  /* c78c0: csel w8, w10, w8, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c78c4: stur w8, [x9, #-4] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(-4)), ARC_W_R(c, 8));
  /* c78c8: ldr w8, [x9, #4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 9) + INT64_C(4))));
  /* c78cc: ldur w10, [x20, #-0xc] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 20) + INT64_C(-12))));
  /* c78d0: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c78d4: csel w11, w8, w10, gt */
  ARC_W_W(c, 11, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c78d8: csel w8, w8, w10, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c78dc: stur w11, [x20, #-0xc] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-12)), ARC_W_R(c, 11));
  /* c78e0: str w8, [x9, #4] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(4)), ARC_W_R(c, 8));
  /* c78e4: ldur w8, [x20, #-0xc] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(-12))));
  /* c78e8: ldr w10, [x19, #8] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 19) + INT64_C(8))));
  /* c78ec: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c78f0: csel w11, w8, w10, gt */
  ARC_W_W(c, 11, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c78f4: csel w8, w8, w10, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c78f8: stur w11, [x20, #-0xc] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-12)), ARC_W_R(c, 11));
  /* c78fc: ldr w11, [x9, #4] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + INT64_C(4))));
  /* c7900: ldr w10, [x19, #8] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 19) + INT64_C(8))));
  /* c7904: cmp w8, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 11));
  /* c7908: csel w10, w10, w11, lt */
  ARC_W_W(c, 10, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* c790c: str w10, [x19, #8] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(8)), ARC_W_R(c, 10));
  /* c7910: ldp w11, w10, [x9] */
  { const uint64_t _pa = ARC_X_R(c, 9);
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* c7914: csel w8, w10, w8, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c7918: ldur w10, [x9, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(-4))));
  /* c791c: cmp w11, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 8));
  /* c7920: csel w12, w11, w8, gt */
  ARC_W_W(c, 12, (ARC_COND(c, 12) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 8)));
  /* c7924: csel w8, w11, w8, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 8)));
  /* c7928: cmp w12, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 10));
  /* c792c: csel w11, w12, w10, lt */
  ARC_W_W(c, 11, (ARC_COND(c, 11) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 10)));
  /* c7930: csel w12, w12, w10, gt */
  ARC_W_W(c, 12, (ARC_COND(c, 12) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 10)));
  /* c7934: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* c7938: csel w10, w10, w8, lt */
  ARC_W_W(c, 10, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c793c: csel w8, w8, w11, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 11)));
  /* c7940: stur w10, [x9, #-4] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(-4)), ARC_W_R(c, 10));
  /* c7944: stp w8, w12, [x9] */
  { const uint64_t _pa = ARC_X_R(c, 9);
    arc_st32(_pa, ARC_W_R(c, 8));
    arc_st32(_pa + 4, ARC_W_R(c, 12));
  }
  /* c7948: ldr w10, [x19] */
  ARC_W_W(c, 10, arc_ld32(ARC_X_R(c, 19)));
  /* c794c: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* c7950: str w10, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 10));
  /* c7954: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* c7958: b #0xc79ac */
  goto L_c79ac;
L_c795c:;
  /* c795c: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* c7960: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c7964: csel w11, w8, w10, gt */
  ARC_W_W(c, 11, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c7968: csel w8, w8, w10, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c796c: stur w11, [x20, #-4] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 11));
  /* c7970: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* c7974: ldur w8, [x20, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c7978: ldr w10, [x9] */
  ARC_W_W(c, 10, arc_ld32(ARC_X_R(c, 9)));
  /* c797c: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c7980: csel w11, w8, w10, gt */
  ARC_W_W(c, 11, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c7984: csel w8, w8, w10, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c7988: stur w11, [x20, #-4] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 11));
  /* c798c: ldr w11, [x19] */
  ARC_W_W(c, 11, arc_ld32(ARC_X_R(c, 19)));
  /* c7990: ldr w10, [x9] */
  ARC_W_W(c, 10, arc_ld32(ARC_X_R(c, 9)));
  /* c7994: cmp w8, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 11));
  /* c7998: csel w10, w10, w11, lt */
  ARC_W_W(c, 10, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* c799c: str w10, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 10));
  /* c79a0: ldr w9, [x19] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 19)));
  /* c79a4: csel w8, w9, w8, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* c79a8: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_c79ac:;
  /* c79ac: ldr w9, [sp, #0xac] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(172))));
  /* c79b0: sub x21, x21, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) - UINT64_C(1)));
  /* c79b4: tbnz w9, #0, #0xc79c4 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_c79c4;
  /* c79b8: ldur w9, [x19, #-4] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 19) + INT64_C(-4))));
  /* c79bc: cmp w9, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 8));
  /* c79c0: b.ge #0xc8434 */
  if (ARC_COND(c, 10)) goto L_c8434;
L_c79c4:;
  /* c79c4: ldur w9, [x20, #-4] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c79c8: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c79cc: b.ge #0xc79e4 */
  if (ARC_COND(c, 10)) goto L_c79e4;
  /* c79d0: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
L_c79d4:;
  /* c79d4: ldr w10, [x9, #4]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(4));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    ARC_W_W(c, 10, arc_ld32(_a));
  }
  /* c79d8: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c79dc: b.ge #0xc79d4 */
  if (ARC_COND(c, 10)) goto L_c79d4;
  /* c79e0: b #0xc7a04 */
  goto L_c7a04;
L_c79e4:;
  /* c79e4: add x10, x19, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) + UINT64_C(4)));
L_c79e8:;
  /* c79e8: mov x9, x10 */
  ARC_X_W(c, 9, ARC_X_R(c, 10));
  /* c79ec: cmp x10, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 20));
  /* c79f0: b.hs #0xc7a04 */
  if (ARC_COND(c, 2)) goto L_c7a04;
  /* c79f4: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* c79f8: ldr w11, [x10], #4 */
  { const uint64_t _a = ARC_X_R(c, 10);
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(4));
    ARC_W_W(c, 11, arc_ld32(_a));
  }
  /* c79fc: cmp w8, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 11));
  /* c7a00: b.ge #0xc79e8 */
  if (ARC_COND(c, 10)) goto L_c79e8;
L_c7a04:;
  /* c7a04: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c7a08: mov x10, x20 */
  ARC_X_W(c, 10, ARC_X_R(c, 20));
  /* c7a0c: b.hs #0xc7a20 */
  if (ARC_COND(c, 2)) goto L_c7a20;
  /* c7a10: mov x10, x20 */
  ARC_X_W(c, 10, ARC_X_R(c, 20));
L_c7a14:;
  /* c7a14: ldr w11, [x10, #-4]! */
  { const uint64_t _a = (ARC_X_R(c, 10) + INT64_C(-4));
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(-4));
    ARC_W_W(c, 11, arc_ld32(_a));
  }
  /* c7a18: cmp w8, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 11));
  /* c7a1c: b.lt #0xc7a14 */
  if (ARC_COND(c, 11)) goto L_c7a14;
L_c7a20:;
  /* c7a20: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* c7a24: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
  /* c7a28: b.hs #0xc7a40 */
  if (ARC_COND(c, 2)) goto L_c7a40;
  /* c7a2c: ldr w12, [x10] */
  ARC_W_W(c, 12, arc_ld32(ARC_X_R(c, 10)));
  /* c7a30: ldr w13, [x9] */
  ARC_W_W(c, 13, arc_ld32(ARC_X_R(c, 9)));
  /* c7a34: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
  /* c7a38: str w12, [x11], #4 */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 12));
  }
  /* c7a3c: str w13, [x10] */
  arc_st32(ARC_X_R(c, 10), ARC_W_R(c, 13));
L_c7a40:;
  /* c7a40: sub x12, x10, #4 */
  ARC_X_W(c, 12, (ARC_X_R(c, 10) - UINT64_C(4)));
  /* c7a44: sub x13, x12, x11 */
  ARC_X_W(c, 13, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* c7a48: cmp x13, #0x1f9 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(505));
  /* c7a4c: b.lt #0xc7ff0 */
  if (ARC_COND(c, 11)) goto L_c7ff0;
  /* c7a50: dup v0.4s, w8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (ARC_W_R(c, 8));
    _t.u32[1] = (ARC_W_R(c, 8));
    _t.u32[2] = (ARC_W_R(c, 8));
    _t.u32[3] = (ARC_W_R(c, 8));
    (c)->q[0] = _t; }
  /* c7a54: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* c7a58: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* c7a5c: b #0xc7a88 */
  goto L_c7a88;
L_c7a60:;
  /* c7a60: cmp x13, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(0));
  /* c7a64: cset w15, eq */
  ARC_W_W(c, 15, (ARC_COND(c, 0) ? 1 : 0));
  /* c7a68: cmp x14, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(0));
  /* c7a6c: add x11, x11, x15, lsl #8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 15)) << 8)));
  /* c7a70: csel x15, x22, xzr, eq */
  ARC_X_W(c, 15, (ARC_COND(c, 0) ? (ARC_X_R(c, 22)) : ARC_X_R(c, 31)));
  /* c7a74: cset w16, eq */
  ARC_W_W(c, 16, (ARC_COND(c, 0) ? 1 : 0));
  /* c7a78: add x12, x12, x15 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + ARC_X_R(c, 15)));
  /* c7a7c: sub x15, x12, x11 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* c7a80: cmp x15, #0x1f8 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(504));
  /* c7a84: b.le #0xc8000 */
  if (ARC_COND(c, 13)) goto L_c8000;
L_c7a88:;
  /* c7a88: cbz x13, #0xc7a98 */
  if ((ARC_X_R(c, 13)) == 0) goto L_c7a98;
  /* c7a8c: cbz x14, #0xc7cd8 */
  if ((ARC_X_R(c, 14)) == 0) goto L_c7cd8;
L_c7a90:;
  /* c7a90: cbnz x13, #0xc7fac */
  if ((ARC_X_R(c, 13)) != 0) goto L_c7fac;
  /* c7a94: b #0xc7a60 */
  goto L_c7a60;
L_c7a98:;
  /* c7a98: ldp q1, q2, [x11] */
  { const uint64_t _pa = ARC_X_R(c, 11);
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 2, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c7a9c: ldur q21, [x29, #-0x60] */
  arc_q_w(c, 21, arc_ld64((ARC_X_R(c, 29) + INT64_C(-96))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-96)) + 8));
  /* c7aa0: ldp q3, q4, [x11, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(32));
    arc_q_w(c, 3, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 4, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c7aa4: ldur q25, [x29, #-0x100] */
  arc_q_w(c, 25, arc_ld64((ARC_X_R(c, 29) + INT64_C(-256))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-256)) + 8));
  /* c7aa8: ldp q5, q6, [x11, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(64));
    arc_q_w(c, 5, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 6, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c7aac: cmgt v1.4s, v0.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].i32[0] > (c)->q[1].i32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].i32[1] > (c)->q[1].i32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].i32[2] > (c)->q[1].i32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].i32[3] > (c)->q[1].i32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[1] = _t; }
  /* c7ab0: cmgt v2.4s, v0.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].i32[0] > (c)->q[2].i32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].i32[1] > (c)->q[2].i32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].i32[2] > (c)->q[2].i32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].i32[3] > (c)->q[2].i32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[2] = _t; }
  /* c7ab4: cmgt v3.4s, v0.4s, v3.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].i32[0] > (c)->q[3].i32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].i32[1] > (c)->q[3].i32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].i32[2] > (c)->q[3].i32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].i32[3] > (c)->q[3].i32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[3] = _t; }
  /* c7ab8: cmgt v4.4s, v0.4s, v4.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].i32[0] > (c)->q[4].i32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].i32[1] > (c)->q[4].i32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].i32[2] > (c)->q[4].i32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].i32[3] > (c)->q[4].i32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[4] = _t; }
  /* c7abc: ldp q7, q16, [x11, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(96));
    arc_q_w(c, 7, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 16, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c7ac0: cmgt v5.4s, v0.4s, v5.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].i32[0] > (c)->q[5].i32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].i32[1] > (c)->q[5].i32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].i32[2] > (c)->q[5].i32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].i32[3] > (c)->q[5].i32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[5] = _t; }
  /* c7ac4: ushll v17.2d, v1.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[1].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[1].u32[1]) << 0);
    (c)->q[17] = _t; }
  /* c7ac8: ushll2 v1.2d, v1.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[1].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[1].u32[3]) << 0);
    (c)->q[1] = _t; }
  /* c7acc: ushll2 v18.2d, v2.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[2].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[2].u32[3]) << 0);
    (c)->q[18] = _t; }
  /* c7ad0: ushll v2.2d, v2.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[2].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[2].u32[1]) << 0);
    (c)->q[2] = _t; }
  /* c7ad4: ushll2 v19.2d, v3.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[3].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[3].u32[3]) << 0);
    (c)->q[19] = _t; }
  /* c7ad8: ushll v3.2d, v3.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[3].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[3].u32[1]) << 0);
    (c)->q[3] = _t; }
  /* c7adc: ushll v20.2d, v4.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[4].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[4].u32[1]) << 0);
    (c)->q[20] = _t; }
  /* c7ae0: ushll2 v4.2d, v4.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[4].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[4].u32[3]) << 0);
    (c)->q[4] = _t; }
  /* c7ae4: cmgt v7.4s, v0.4s, v7.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].i32[0] > (c)->q[7].i32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].i32[1] > (c)->q[7].i32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].i32[2] > (c)->q[7].i32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].i32[3] > (c)->q[7].i32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[7] = _t; }
  /* c7ae8: bic v1.16b, v21.16b, v1.16b */
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
  /* c7aec: bic v17.16b, v30.16b, v17.16b */
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
  /* c7af0: ushll v21.2d, v5.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[1]) << 0);
    (c)->q[21] = _t; }
  /* c7af4: bic v2.16b, v8.16b, v2.16b */
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
  /* c7af8: bic v19.16b, v9.16b, v19.16b */
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
  /* c7afc: bic v3.16b, v10.16b, v3.16b */
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
  /* c7b00: bic v20.16b, v12.16b, v20.16b */
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
  /* c7b04: cmgt v6.4s, v0.4s, v6.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].i32[0] > (c)->q[6].i32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].i32[1] > (c)->q[6].i32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].i32[2] > (c)->q[6].i32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].i32[3] > (c)->q[6].i32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[6] = _t; }
  /* c7b08: bic v18.16b, v31.16b, v18.16b */
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
  /* c7b0c: bic v4.16b, v11.16b, v4.16b */
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
  /* c7b10: cmgt v16.4s, v0.4s, v16.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].i32[0] > (c)->q[16].i32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].i32[1] > (c)->q[16].i32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].i32[2] > (c)->q[16].i32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].i32[3] > (c)->q[16].i32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[16] = _t; }
  /* c7b14: ushll2 v5.2d, v5.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[3]) << 0);
    (c)->q[5] = _t; }
  /* c7b18: ushll v22.2d, v7.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[7].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[7].u32[1]) << 0);
    (c)->q[22] = _t; }
  /* c7b1c: ushll2 v7.2d, v7.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[7].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[7].u32[3]) << 0);
    (c)->q[7] = _t; }
  /* c7b20: orr v3.16b, v3.16b, v17.16b */
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
  /* c7b24: orr v17.16b, v19.16b, v1.16b */
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
  /* c7b28: orr v1.16b, v20.16b, v2.16b */
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
  /* c7b2c: bic v2.16b, v13.16b, v21.16b */
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
  /* c7b30: ldp q21, q23, [x29, #-0x90] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-144));
    arc_q_w(c, 21, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 23, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c7b34: ushll v19.2d, v6.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[6].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[6].u32[1]) << 0);
    (c)->q[19] = _t; }
  /* c7b38: ushll2 v6.2d, v6.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[6].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[6].u32[3]) << 0);
    (c)->q[6] = _t; }
  /* c7b3c: ushll v20.2d, v16.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[16].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[16].u32[1]) << 0);
    (c)->q[20] = _t; }
  /* c7b40: bic v5.16b, v14.16b, v5.16b */
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
  /* c7b44: orr v4.16b, v4.16b, v18.16b */
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
  /* c7b48: ldur q18, [x29, #-0x70] */
  arc_q_w(c, 18, arc_ld64((ARC_X_R(c, 29) + INT64_C(-112))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-112)) + 8));
  /* c7b4c: ushll2 v16.2d, v16.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[16].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[16].u32[3]) << 0);
    (c)->q[16] = _t; }
  /* c7b50: bic v7.16b, v23.16b, v7.16b */
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
  /* c7b54: ldr q23, [x11, #0x80] */
  arc_q_w(c, 23, arc_ld64((ARC_X_R(c, 11) + INT64_C(128))), arc_ld64((ARC_X_R(c, 11) + INT64_C(128)) + 8));
  /* c7b58: bic v21.16b, v21.16b, v22.16b */
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
  /* c7b5c: ldur q22, [x29, #-0xb0] */
  arc_q_w(c, 22, arc_ld64((ARC_X_R(c, 29) + INT64_C(-176))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-176)) + 8));
  /* c7b60: bic v6.16b, v18.16b, v6.16b */
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
  /* c7b64: ldur q18, [x29, #-0xa0] */
  arc_q_w(c, 18, arc_ld64((ARC_X_R(c, 29) + INT64_C(-160))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-160)) + 8));
  /* c7b68: bic v19.16b, v15.16b, v19.16b */
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
  /* c7b6c: bic v20.16b, v22.16b, v20.16b */
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
  /* c7b70: orr v5.16b, v7.16b, v5.16b */
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
  /* c7b74: orr v2.16b, v21.16b, v2.16b */
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
  /* c7b78: ldp q7, q22, [x11, #0x90] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(144));
    arc_q_w(c, 7, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 22, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c7b7c: cmgt v21.4s, v0.4s, v23.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].i32[0] > (c)->q[23].i32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].i32[1] > (c)->q[23].i32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].i32[2] > (c)->q[23].i32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].i32[3] > (c)->q[23].i32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[21] = _t; }
  /* c7b80: bic v16.16b, v18.16b, v16.16b */
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
  /* c7b84: orr v2.16b, v2.16b, v3.16b */
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
  /* c7b88: orr v3.16b, v5.16b, v17.16b */
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
  /* c7b8c: orr v5.16b, v20.16b, v19.16b */
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
  /* c7b90: cmgt v22.4s, v0.4s, v22.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].i32[0] > (c)->q[22].i32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].i32[1] > (c)->q[22].i32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].i32[2] > (c)->q[22].i32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].i32[3] > (c)->q[22].i32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[22] = _t; }
  /* c7b94: sshll v17.2d, v21.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[21].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[21].i32[1]) << 0);
    (c)->q[17] = _t; }
  /* c7b98: cmgt v7.4s, v0.4s, v7.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].i32[0] > (c)->q[7].i32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].i32[1] > (c)->q[7].i32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].i32[2] > (c)->q[7].i32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].i32[3] > (c)->q[7].i32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[7] = _t; }
  /* c7b9c: orr v6.16b, v16.16b, v6.16b */
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
  /* c7ba0: ldp q24, q16, [x29, #-0xd0] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-208));
    arc_q_w(c, 24, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 16, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c7ba4: ldp q23, q19, [x11, #0xb0] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(176));
    arc_q_w(c, 23, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 19, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c7ba8: sshll2 v20.2d, v21.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[21].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[21].i32[3]) << 0);
    (c)->q[20] = _t; }
  /* c7bac: sshll v18.2d, v22.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[22].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[22].i32[1]) << 0);
    (c)->q[18] = _t; }
  /* c7bb0: sshll2 v22.2d, v22.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[22].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[22].i32[3]) << 0);
    (c)->q[22] = _t; }
  /* c7bb4: orr v1.16b, v5.16b, v1.16b */
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
  /* c7bb8: bic v16.16b, v16.16b, v17.16b */
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
  /* c7bbc: ldr q17, [sp, #0x120] */
  arc_q_w(c, 17, arc_ld64(((c)->sp + INT64_C(288))), arc_ld64(((c)->sp + INT64_C(288)) + 8));
  /* c7bc0: orr v4.16b, v6.16b, v4.16b */
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
  /* c7bc4: cmgt v21.4s, v0.4s, v23.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].i32[0] > (c)->q[23].i32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].i32[1] > (c)->q[23].i32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].i32[2] > (c)->q[23].i32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].i32[3] > (c)->q[23].i32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[21] = _t; }
  /* c7bc8: cmgt v19.4s, v0.4s, v19.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].i32[0] > (c)->q[19].i32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].i32[1] > (c)->q[19].i32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].i32[2] > (c)->q[19].i32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].i32[3] > (c)->q[19].i32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[19] = _t; }
  /* c7bcc: ldr q23, [x11, #0xd0] */
  arc_q_w(c, 23, arc_ld64((ARC_X_R(c, 11) + INT64_C(208))), arc_ld64((ARC_X_R(c, 11) + INT64_C(208)) + 8));
  /* c7bd0: bic v17.16b, v17.16b, v18.16b */
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
  /* c7bd4: sshll2 v18.2d, v7.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[7].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[7].i32[3]) << 0);
    (c)->q[18] = _t; }
  /* c7bd8: bic v20.16b, v24.16b, v20.16b */
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
  /* c7bdc: bic v22.16b, v25.16b, v22.16b */
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
  /* c7be0: sshll v7.2d, v7.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[7].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[7].i32[1]) << 0);
    (c)->q[7] = _t; }
  /* c7be4: cmgt v23.4s, v0.4s, v23.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].i32[0] > (c)->q[23].i32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].i32[1] > (c)->q[23].i32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].i32[2] > (c)->q[23].i32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].i32[3] > (c)->q[23].i32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[23] = _t; }
  /* c7be8: sshll2 v24.2d, v21.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[21].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[21].i32[3]) << 0);
    (c)->q[24] = _t; }
  /* c7bec: sshll2 v25.2d, v19.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[19].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[19].i32[3]) << 0);
    (c)->q[25] = _t; }
  /* c7bf0: sshll v19.2d, v19.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[19].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[19].i32[1]) << 0);
    (c)->q[19] = _t; }
  /* c7bf4: orr v16.16b, v17.16b, v16.16b */
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
  /* c7bf8: sshll v17.2d, v21.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[21].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[21].i32[1]) << 0);
    (c)->q[17] = _t; }
  /* c7bfc: ldur q21, [x29, #-0xf0] */
  arc_q_w(c, 21, arc_ld64((ARC_X_R(c, 29) + INT64_C(-240))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-240)) + 8));
  /* c7c00: orr v20.16b, v22.16b, v20.16b */
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
  /* c7c04: sshll2 v22.2d, v23.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[3]) << 0);
    (c)->q[22] = _t; }
  /* c7c08: sshll v23.2d, v23.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[1]) << 0);
    (c)->q[23] = _t; }
  /* c7c0c: bic v18.16b, v21.16b, v18.16b */
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
  /* c7c10: ldr q21, [sp, #0x110] */
  arc_q_w(c, 21, arc_ld64(((c)->sp + INT64_C(272))), arc_ld64(((c)->sp + INT64_C(272)) + 8));
  /* c7c14: bic v21.16b, v21.16b, v24.16b */
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
  /* c7c18: ldr q24, [sp, #0xe0] */
  arc_q_w(c, 24, arc_ld64(((c)->sp + INT64_C(224))), arc_ld64(((c)->sp + INT64_C(224)) + 8));
  /* c7c1c: bic v24.16b, v24.16b, v25.16b */
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
  /* c7c20: ldur q25, [x29, #-0xe0] */
  arc_q_w(c, 25, arc_ld64((ARC_X_R(c, 29) + INT64_C(-224))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-224)) + 8));
  /* c7c24: orr v18.16b, v21.16b, v18.16b */
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
  /* c7c28: ldr q21, [sp, #0xf0] */
  arc_q_w(c, 21, arc_ld64(((c)->sp + INT64_C(240))), arc_ld64(((c)->sp + INT64_C(240)) + 8));
  /* c7c2c: bic v7.16b, v25.16b, v7.16b */
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
  /* c7c30: ldr q25, [sp, #0x100] */
  arc_q_w(c, 25, arc_ld64(((c)->sp + INT64_C(256))), arc_ld64(((c)->sp + INT64_C(256)) + 8));
  /* c7c34: bic v19.16b, v21.16b, v19.16b */
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
  /* c7c38: orr v20.16b, v24.16b, v20.16b */
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
  /* c7c3c: bic v17.16b, v25.16b, v17.16b */
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
  /* c7c40: ldr q25, [sp, #0xc0] */
  arc_q_w(c, 25, arc_ld64(((c)->sp + INT64_C(192))), arc_ld64(((c)->sp + INT64_C(192)) + 8));
  /* c7c44: ldp q21, q24, [x11, #0xe0] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(224));
    arc_q_w(c, 21, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 24, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c7c48: bic v22.16b, v25.16b, v22.16b */
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
  /* c7c4c: orr v6.16b, v19.16b, v16.16b */
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
  /* c7c50: orr v3.16b, v20.16b, v3.16b */
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
  /* c7c54: orr v7.16b, v17.16b, v7.16b */
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
  /* c7c58: ldr q17, [sp, #0xd0] */
  arc_q_w(c, 17, arc_ld64(((c)->sp + INT64_C(208))), arc_ld64(((c)->sp + INT64_C(208)) + 8));
  /* c7c5c: ldr q20, [x6, #0xc80] */
  arc_q_w(c, 20, arc_ld64((ARC_X_R(c, 6) + INT64_C(3200))), arc_ld64((ARC_X_R(c, 6) + INT64_C(3200)) + 8));
  /* c7c60: cmgt v21.4s, v0.4s, v21.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].i32[0] > (c)->q[21].i32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].i32[1] > (c)->q[21].i32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].i32[2] > (c)->q[21].i32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].i32[3] > (c)->q[21].i32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[21] = _t; }
  /* c7c64: cmgt v5.4s, v0.4s, v24.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].i32[0] > (c)->q[24].i32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].i32[1] > (c)->q[24].i32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].i32[2] > (c)->q[24].i32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].i32[3] > (c)->q[24].i32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[5] = _t; }
  /* c7c68: bic v17.16b, v17.16b, v23.16b */
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
  /* c7c6c: orr v16.16b, v22.16b, v18.16b */
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
  /* c7c70: orr v2.16b, v6.16b, v2.16b */
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
  /* c7c74: ldr q6, [x7, #0xa00] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 7) + INT64_C(2560))), arc_ld64((ARC_X_R(c, 7) + INT64_C(2560)) + 8));
  /* c7c78: sshll2 v18.2d, v21.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[21].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[21].i32[3]) << 0);
    (c)->q[18] = _t; }
  /* c7c7c: sshll v19.2d, v5.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[5].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[5].i32[1]) << 0);
    (c)->q[19] = _t; }
  /* c7c80: sshll2 v5.2d, v5.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[5].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[5].i32[3]) << 0);
    (c)->q[5] = _t; }
  /* c7c84: orr v7.16b, v17.16b, v7.16b */
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
  /* c7c88: sshll v17.2d, v21.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[21].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[21].i32[1]) << 0);
    (c)->q[17] = _t; }
  /* c7c8c: ldr q21, [x26, #0xc40] */
  arc_q_w(c, 21, arc_ld64((ARC_X_R(c, 26) + INT64_C(3136))), arc_ld64((ARC_X_R(c, 26) + INT64_C(3136)) + 8));
  /* c7c90: orr v4.16b, v16.16b, v4.16b */
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
  /* c7c94: ldr q16, [sp, #0xb0] */
  arc_q_w(c, 16, arc_ld64(((c)->sp + INT64_C(176))), arc_ld64(((c)->sp + INT64_C(176)) + 8));
  /* c7c98: bic v5.16b, v6.16b, v5.16b */
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
  /* c7c9c: bic v6.16b, v21.16b, v19.16b */
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
  /* c7ca0: orr v1.16b, v7.16b, v1.16b */
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
  /* c7ca4: bic v7.16b, v20.16b, v17.16b */
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
  /* c7ca8: bic v16.16b, v16.16b, v18.16b */
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
  /* c7cac: orr v4.16b, v5.16b, v4.16b */
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
  /* c7cb0: orr v2.16b, v7.16b, v2.16b */
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
  /* c7cb4: orr v3.16b, v16.16b, v3.16b */
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
  /* c7cb8: orr v1.16b, v6.16b, v1.16b */
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
  /* c7cbc: orr v3.16b, v4.16b, v3.16b */
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
  /* c7cc0: orr v1.16b, v1.16b, v2.16b */
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
  /* c7cc4: orr v1.16b, v1.16b, v3.16b */
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
  /* c7cc8: ext v2.16b, v1.16b, v1.16b, #8 */
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
  /* c7ccc: orr v1.8b, v1.8b, v2.8b */
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
  /* c7cd0: fmov x13, d1 */
  ARC_X_W(c, 13, ARC_DU_R(c, 1));
  /* c7cd4: cbnz x14, #0xc7a90 */
  if ((ARC_X_R(c, 14)) != 0) goto L_c7a90;
L_c7cd8:;
  /* c7cd8: ldur q1, [x12, #-0xc] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 12) + INT64_C(-12))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-12)) + 8));
  /* c7cdc: ldur q2, [x12, #-0x2c] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 12) + INT64_C(-44))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-44)) + 8));
  /* c7ce0: ldur q3, [x12, #-0x1c] */
  arc_q_w(c, 3, arc_ld64((ARC_X_R(c, 12) + INT64_C(-28))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-28)) + 8));
  /* c7ce4: ldur q4, [x12, #-0x3c] */
  arc_q_w(c, 4, arc_ld64((ARC_X_R(c, 12) + INT64_C(-60))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-60)) + 8));
  /* c7ce8: ldur q5, [x12, #-0x4c] */
  arc_q_w(c, 5, arc_ld64((ARC_X_R(c, 12) + INT64_C(-76))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-76)) + 8));
  /* c7cec: ldur q6, [x12, #-0x5c] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 12) + INT64_C(-92))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-92)) + 8));
  /* c7cf0: rev64 v1.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[1].u32[1];
    _t.u32[1] = (c)->q[1].u32[0];
    _t.u32[2] = (c)->q[1].u32[3];
    _t.u32[3] = (c)->q[1].u32[2];
    (c)->q[1] = _t; }
  /* c7cf4: rev64 v2.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[2].u32[1];
    _t.u32[1] = (c)->q[2].u32[0];
    _t.u32[2] = (c)->q[2].u32[3];
    _t.u32[3] = (c)->q[2].u32[2];
    (c)->q[2] = _t; }
  /* c7cf8: rev64 v3.4s, v3.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[3].u32[1];
    _t.u32[1] = (c)->q[3].u32[0];
    _t.u32[2] = (c)->q[3].u32[3];
    _t.u32[3] = (c)->q[3].u32[2];
    (c)->q[3] = _t; }
  /* c7cfc: rev64 v4.4s, v4.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[4].u32[1];
    _t.u32[1] = (c)->q[4].u32[0];
    _t.u32[2] = (c)->q[4].u32[3];
    _t.u32[3] = (c)->q[4].u32[2];
    (c)->q[4] = _t; }
  /* c7d00: rev64 v5.4s, v5.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[5].u32[1];
    _t.u32[1] = (c)->q[5].u32[0];
    _t.u32[2] = (c)->q[5].u32[3];
    _t.u32[3] = (c)->q[5].u32[2];
    (c)->q[5] = _t; }
  /* c7d04: ldur q7, [x12, #-0x6c] */
  arc_q_w(c, 7, arc_ld64((ARC_X_R(c, 12) + INT64_C(-108))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-108)) + 8));
  /* c7d08: rev64 v6.4s, v6.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[6].u32[1];
    _t.u32[1] = (c)->q[6].u32[0];
    _t.u32[2] = (c)->q[6].u32[3];
    _t.u32[3] = (c)->q[6].u32[2];
    (c)->q[6] = _t; }
  /* c7d0c: ldur q16, [x12, #-0x7c] */
  arc_q_w(c, 16, arc_ld64((ARC_X_R(c, 12) + INT64_C(-124))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-124)) + 8));
  /* c7d10: ldur q22, [x29, #-0x60] */
  arc_q_w(c, 22, arc_ld64((ARC_X_R(c, 29) + INT64_C(-96))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-96)) + 8));
  /* c7d14: rev64 v7.4s, v7.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[7].u32[1];
    _t.u32[1] = (c)->q[7].u32[0];
    _t.u32[2] = (c)->q[7].u32[3];
    _t.u32[3] = (c)->q[7].u32[2];
    (c)->q[7] = _t; }
  /* c7d18: ldur q17, [x12, #-0x8c] */
  arc_q_w(c, 17, arc_ld64((ARC_X_R(c, 12) + INT64_C(-140))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-140)) + 8));
  /* c7d1c: ldur q28, [x29, #-0x100] */
  arc_q_w(c, 28, arc_ld64((ARC_X_R(c, 29) + INT64_C(-256))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-256)) + 8));
  /* c7d20: ext v1.16b, v1.16b, v1.16b, #8 */
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
  /* c7d24: ext v2.16b, v2.16b, v2.16b, #8 */
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
  /* c7d28: ext v3.16b, v3.16b, v3.16b, #8 */
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
  /* c7d2c: ext v4.16b, v4.16b, v4.16b, #8 */
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
  /* c7d30: ext v5.16b, v5.16b, v5.16b, #8 */
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
  /* c7d34: rev64 v16.4s, v16.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[16].u32[1];
    _t.u32[1] = (c)->q[16].u32[0];
    _t.u32[2] = (c)->q[16].u32[3];
    _t.u32[3] = (c)->q[16].u32[2];
    (c)->q[16] = _t; }
  /* c7d38: ext v6.16b, v6.16b, v6.16b, #8 */
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
  /* c7d3c: ldp q25, q26, [x29, #-0x90] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-144));
    arc_q_w(c, 25, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 26, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c7d40: ext v7.16b, v7.16b, v7.16b, #8 */
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
  /* c7d44: rev64 v17.4s, v17.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[17].u32[1];
    _t.u32[1] = (c)->q[17].u32[0];
    _t.u32[2] = (c)->q[17].u32[3];
    _t.u32[3] = (c)->q[17].u32[2];
    (c)->q[17] = _t; }
  /* c7d48: cmgt v1.4s, v0.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].i32[0] > (c)->q[1].i32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].i32[1] > (c)->q[1].i32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].i32[2] > (c)->q[1].i32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].i32[3] > (c)->q[1].i32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[1] = _t; }
  /* c7d4c: cmgt v2.4s, v0.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].i32[0] > (c)->q[2].i32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].i32[1] > (c)->q[2].i32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].i32[2] > (c)->q[2].i32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].i32[3] > (c)->q[2].i32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[2] = _t; }
  /* c7d50: cmgt v3.4s, v0.4s, v3.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].i32[0] > (c)->q[3].i32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].i32[1] > (c)->q[3].i32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].i32[2] > (c)->q[3].i32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].i32[3] > (c)->q[3].i32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[3] = _t; }
  /* c7d54: cmgt v4.4s, v0.4s, v4.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].i32[0] > (c)->q[4].i32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].i32[1] > (c)->q[4].i32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].i32[2] > (c)->q[4].i32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].i32[3] > (c)->q[4].i32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[4] = _t; }
  /* c7d58: cmgt v5.4s, v0.4s, v5.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].i32[0] > (c)->q[5].i32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].i32[1] > (c)->q[5].i32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].i32[2] > (c)->q[5].i32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].i32[3] > (c)->q[5].i32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[5] = _t; }
  /* c7d5c: ext v16.16b, v16.16b, v16.16b, #8 */
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
  /* c7d60: cmgt v6.4s, v0.4s, v6.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].i32[0] > (c)->q[6].i32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].i32[1] > (c)->q[6].i32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].i32[2] > (c)->q[6].i32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].i32[3] > (c)->q[6].i32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[6] = _t; }
  /* c7d64: ushll2 v18.2d, v1.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[1].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[1].u32[3]) << 0);
    (c)->q[18] = _t; }
  /* c7d68: ushll v19.2d, v2.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[2].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[2].u32[1]) << 0);
    (c)->q[19] = _t; }
  /* c7d6c: ushll2 v2.2d, v2.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[2].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[2].u32[3]) << 0);
    (c)->q[2] = _t; }
  /* c7d70: ushll v1.2d, v1.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[1].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[1].u32[1]) << 0);
    (c)->q[1] = _t; }
  /* c7d74: ushll v20.2d, v3.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[3].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[3].u32[1]) << 0);
    (c)->q[20] = _t; }
  /* c7d78: ushll v21.2d, v4.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[4].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[4].u32[1]) << 0);
    (c)->q[21] = _t; }
  /* c7d7c: ushll2 v3.2d, v3.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[3].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[3].u32[3]) << 0);
    (c)->q[3] = _t; }
  /* c7d80: ushll2 v4.2d, v4.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[4].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[4].u32[3]) << 0);
    (c)->q[4] = _t; }
  /* c7d84: cmgt v7.4s, v0.4s, v7.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].i32[0] > (c)->q[7].i32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].i32[1] > (c)->q[7].i32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].i32[2] > (c)->q[7].i32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].i32[3] > (c)->q[7].i32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[7] = _t; }
  /* c7d88: and v18.16b, v18.16b, v22.16b */
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
  /* c7d8c: and v2.16b, v2.16b, v9.16b */
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
  /* c7d90: and v19.16b, v19.16b, v10.16b */
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
  /* c7d94: and v1.16b, v1.16b, v30.16b */
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
  /* c7d98: ushll v22.2d, v5.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[1]) << 0);
    (c)->q[22] = _t; }
  /* c7d9c: and v20.16b, v20.16b, v8.16b */
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
  /* c7da0: and v21.16b, v21.16b, v12.16b */
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
  /* c7da4: and v23.16b, v3.16b, v31.16b */
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
  /* c7da8: and v24.16b, v4.16b, v11.16b */
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
  /* c7dac: orr v4.16b, v2.16b, v18.16b */
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
  /* c7db0: ushll2 v5.2d, v5.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[3]) << 0);
    (c)->q[5] = _t; }
  /* c7db4: ushll2 v18.2d, v6.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[6].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[6].u32[3]) << 0);
    (c)->q[18] = _t; }
  /* c7db8: ushll v6.2d, v6.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[6].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[6].u32[1]) << 0);
    (c)->q[6] = _t; }
  /* c7dbc: orr v3.16b, v19.16b, v1.16b */
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
  /* c7dc0: and v19.16b, v22.16b, v13.16b */
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
  /* c7dc4: ldur q22, [x12, #-0xac] */
  arc_q_w(c, 22, arc_ld64((ARC_X_R(c, 12) + INT64_C(-172))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-172)) + 8));
  /* c7dc8: orr v1.16b, v21.16b, v20.16b */
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
  /* c7dcc: ldur q20, [x12, #-0x9c] */
  arc_q_w(c, 20, arc_ld64((ARC_X_R(c, 12) + INT64_C(-156))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-156)) + 8));
  /* c7dd0: ushll v21.2d, v7.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[7].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[7].u32[1]) << 0);
    (c)->q[21] = _t; }
  /* c7dd4: ushll2 v7.2d, v7.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[7].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[7].u32[3]) << 0);
    (c)->q[7] = _t; }
  /* c7dd8: orr v2.16b, v24.16b, v23.16b */
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
  /* c7ddc: cmgt v16.4s, v0.4s, v16.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].i32[0] > (c)->q[16].i32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].i32[1] > (c)->q[16].i32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].i32[2] > (c)->q[16].i32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].i32[3] > (c)->q[16].i32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[16] = _t; }
  /* c7de0: and v23.16b, v5.16b, v14.16b */
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
  /* c7de4: ldur q5, [x12, #-0xbc] */
  arc_q_w(c, 5, arc_ld64((ARC_X_R(c, 12) + INT64_C(-188))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-188)) + 8));
  /* c7de8: and v24.16b, v6.16b, v15.16b */
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
  /* c7dec: rev64 v6.4s, v22.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[22].u32[1];
    _t.u32[1] = (c)->q[22].u32[0];
    _t.u32[2] = (c)->q[22].u32[3];
    _t.u32[3] = (c)->q[22].u32[2];
    (c)->q[6] = _t; }
  /* c7df0: rev64 v20.4s, v20.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[20].u32[1];
    _t.u32[1] = (c)->q[20].u32[0];
    _t.u32[2] = (c)->q[20].u32[3];
    _t.u32[3] = (c)->q[20].u32[2];
    (c)->q[20] = _t; }
  /* c7df4: and v7.16b, v7.16b, v26.16b */
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
  /* c7df8: rev64 v26.4s, v5.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[5].u32[1];
    _t.u32[1] = (c)->q[5].u32[0];
    _t.u32[2] = (c)->q[5].u32[3];
    _t.u32[3] = (c)->q[5].u32[2];
    (c)->q[26] = _t; }
  /* c7dfc: ldur q5, [x29, #-0x70] */
  arc_q_w(c, 5, arc_ld64((ARC_X_R(c, 29) + INT64_C(-112))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-112)) + 8));
  /* c7e00: ushll v22.2d, v16.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[16].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[16].u32[1]) << 0);
    (c)->q[22] = _t; }
  /* c7e04: ushll2 v16.2d, v16.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[16].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[16].u32[3]) << 0);
    (c)->q[16] = _t; }
  /* c7e08: and v21.16b, v21.16b, v25.16b */
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
  /* c7e0c: ldur q25, [x12, #-0xcc] */
  arc_q_w(c, 25, arc_ld64((ARC_X_R(c, 12) + INT64_C(-204))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-204)) + 8));
  /* c7e10: ext v17.16b, v17.16b, v17.16b, #8 */
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
  /* c7e14: and v5.16b, v18.16b, v5.16b */
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
  /* c7e18: ext v18.16b, v6.16b, v6.16b, #8 */
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
  /* c7e1c: ldur q6, [x29, #-0xa0] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 29) + INT64_C(-160))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-160)) + 8));
  /* c7e20: ext v20.16b, v20.16b, v20.16b, #8 */
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
  /* c7e24: rev64 v25.4s, v25.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[25].u32[1];
    _t.u32[1] = (c)->q[25].u32[0];
    _t.u32[2] = (c)->q[25].u32[3];
    _t.u32[3] = (c)->q[25].u32[2];
    (c)->q[25] = _t; }
  /* c7e28: orr v7.16b, v7.16b, v23.16b */
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
  /* c7e2c: ext v23.16b, v26.16b, v26.16b, #8 */
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
  /* c7e30: ldp q29, q26, [x29, #-0xf0] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-240));
    arc_q_w(c, 29, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 26, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c7e34: and v6.16b, v16.16b, v6.16b */
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
  /* c7e38: orr v16.16b, v21.16b, v19.16b */
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
  /* c7e3c: ldur q21, [x29, #-0xb0] */
  arc_q_w(c, 21, arc_ld64((ARC_X_R(c, 29) + INT64_C(-176))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-176)) + 8));
  /* c7e40: ldur q19, [x12, #-0xdc] */
  arc_q_w(c, 19, arc_ld64((ARC_X_R(c, 12) + INT64_C(-220))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-220)) + 8));
  /* c7e44: cmgt v17.4s, v0.4s, v17.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].i32[0] > (c)->q[17].i32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].i32[1] > (c)->q[17].i32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].i32[2] > (c)->q[17].i32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].i32[3] > (c)->q[17].i32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[17] = _t; }
  /* c7e48: cmgt v20.4s, v0.4s, v20.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].i32[0] > (c)->q[20].i32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].i32[1] > (c)->q[20].i32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].i32[2] > (c)->q[20].i32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].i32[3] > (c)->q[20].i32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[20] = _t; }
  /* c7e4c: orr v4.16b, v7.16b, v4.16b */
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
  /* c7e50: and v21.16b, v22.16b, v21.16b */
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
  /* c7e54: rev64 v19.4s, v19.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[19].u32[1];
    _t.u32[1] = (c)->q[19].u32[0];
    _t.u32[2] = (c)->q[19].u32[3];
    _t.u32[3] = (c)->q[19].u32[2];
    (c)->q[19] = _t; }
  /* c7e58: cmgt v23.4s, v0.4s, v23.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].i32[0] > (c)->q[23].i32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].i32[1] > (c)->q[23].i32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].i32[2] > (c)->q[23].i32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].i32[3] > (c)->q[23].i32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[23] = _t; }
  /* c7e5c: orr v3.16b, v16.16b, v3.16b */
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
  /* c7e60: cmgt v16.4s, v0.4s, v18.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].i32[0] > (c)->q[18].i32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].i32[1] > (c)->q[18].i32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].i32[2] > (c)->q[18].i32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].i32[3] > (c)->q[18].i32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[16] = _t; }
  /* c7e64: ext v18.16b, v25.16b, v25.16b, #8 */
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
  /* c7e68: sshll v22.2d, v17.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[17].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[17].i32[1]) << 0);
    (c)->q[22] = _t; }
  /* c7e6c: sshll2 v17.2d, v17.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[17].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[17].i32[3]) << 0);
    (c)->q[17] = _t; }
  /* c7e70: orr v5.16b, v6.16b, v5.16b */
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
  /* c7e74: orr v7.16b, v21.16b, v24.16b */
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
  /* c7e78: ldp q25, q24, [x29, #-0xd0] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-208));
    arc_q_w(c, 25, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 24, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c7e7c: sshll2 v21.2d, v20.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[20].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[20].i32[3]) << 0);
    (c)->q[21] = _t; }
  /* c7e80: sshll v20.2d, v20.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[20].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[20].i32[1]) << 0);
    (c)->q[20] = _t; }
  /* c7e84: sshll2 v27.2d, v23.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[3]) << 0);
    (c)->q[27] = _t; }
  /* c7e88: cmgt v18.4s, v0.4s, v18.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].i32[0] > (c)->q[18].i32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].i32[1] > (c)->q[18].i32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].i32[2] > (c)->q[18].i32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].i32[3] > (c)->q[18].i32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[18] = _t; }
  /* c7e8c: ext v19.16b, v19.16b, v19.16b, #8 */
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
  /* c7e90: sshll v23.2d, v23.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[1]) << 0);
    (c)->q[23] = _t; }
  /* c7e94: and v22.16b, v22.16b, v24.16b */
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
  /* c7e98: sshll2 v24.2d, v16.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[16].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[16].i32[3]) << 0);
    (c)->q[24] = _t; }
  /* c7e9c: sshll v16.2d, v16.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[16].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[16].i32[1]) << 0);
    (c)->q[16] = _t; }
  /* c7ea0: and v21.16b, v21.16b, v29.16b */
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
  /* c7ea4: ldr q29, [sp, #0x120] */
  arc_q_w(c, 29, arc_ld64(((c)->sp + INT64_C(288))), arc_ld64(((c)->sp + INT64_C(288)) + 8));
  /* c7ea8: and v17.16b, v17.16b, v25.16b */
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
  /* c7eac: ldur q25, [x12, #-0xec] */
  arc_q_w(c, 25, arc_ld64((ARC_X_R(c, 12) + INT64_C(-236))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-236)) + 8));
  /* c7eb0: and v20.16b, v20.16b, v26.16b */
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
  /* c7eb4: ldur q26, [x12, #-0xfc] */
  arc_q_w(c, 26, arc_ld64((ARC_X_R(c, 12) + INT64_C(-252))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-252)) + 8));
  /* c7eb8: and v16.16b, v16.16b, v29.16b */
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
  /* c7ebc: ldr q29, [sp, #0x110] */
  arc_q_w(c, 29, arc_ld64(((c)->sp + INT64_C(272))), arc_ld64(((c)->sp + INT64_C(272)) + 8));
  /* c7ec0: and v24.16b, v24.16b, v28.16b */
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
  /* c7ec4: sshll2 v28.2d, v18.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[18].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[18].i32[3]) << 0);
    (c)->q[28] = _t; }
  /* c7ec8: rev64 v25.4s, v25.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[25].u32[1];
    _t.u32[1] = (c)->q[25].u32[0];
    _t.u32[2] = (c)->q[25].u32[3];
    _t.u32[3] = (c)->q[25].u32[2];
    (c)->q[25] = _t; }
  /* c7ecc: cmgt v19.4s, v0.4s, v19.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].i32[0] > (c)->q[19].i32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].i32[1] > (c)->q[19].i32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].i32[2] > (c)->q[19].i32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].i32[3] > (c)->q[19].i32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[19] = _t; }
  /* c7ed0: and v27.16b, v27.16b, v29.16b */
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
  /* c7ed4: ldr q29, [sp, #0xe0] */
  arc_q_w(c, 29, arc_ld64(((c)->sp + INT64_C(224))), arc_ld64(((c)->sp + INT64_C(224)) + 8));
  /* c7ed8: rev64 v26.4s, v26.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[26].u32[1];
    _t.u32[1] = (c)->q[26].u32[0];
    _t.u32[2] = (c)->q[26].u32[3];
    _t.u32[3] = (c)->q[26].u32[2];
    (c)->q[26] = _t; }
  /* c7edc: sshll v18.2d, v18.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[18].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[18].i32[1]) << 0);
    (c)->q[18] = _t; }
  /* c7ee0: orr v6.16b, v16.16b, v22.16b */
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
  /* c7ee4: orr v17.16b, v24.16b, v17.16b */
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
  /* c7ee8: and v28.16b, v28.16b, v29.16b */
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
  /* c7eec: ldr q29, [sp, #0x100] */
  arc_q_w(c, 29, arc_ld64(((c)->sp + INT64_C(256))), arc_ld64(((c)->sp + INT64_C(256)) + 8));
  /* c7ef0: sshll2 v24.2d, v19.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[19].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[19].i32[3]) << 0);
    (c)->q[24] = _t; }
  /* c7ef4: orr v16.16b, v27.16b, v21.16b */
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
  /* c7ef8: ldr q21, [sp, #0xf0] */
  arc_q_w(c, 21, arc_ld64(((c)->sp + INT64_C(240))), arc_ld64(((c)->sp + INT64_C(240)) + 8));
  /* c7efc: sshll v19.2d, v19.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[19].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[19].i32[1]) << 0);
    (c)->q[19] = _t; }
  /* c7f00: and v23.16b, v23.16b, v29.16b */
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
  /* c7f04: ext v25.16b, v25.16b, v25.16b, #8 */
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
  /* c7f08: ext v26.16b, v26.16b, v26.16b, #8 */
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
  /* c7f0c: and v18.16b, v18.16b, v21.16b */
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
  /* c7f10: ldp q21, q22, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_q_w(c, 21, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 22, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c7f14: orr v17.16b, v28.16b, v17.16b */
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
  /* c7f18: orr v2.16b, v5.16b, v2.16b */
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
  /* c7f1c: orr v1.16b, v7.16b, v1.16b */
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
  /* c7f20: orr v20.16b, v23.16b, v20.16b */
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
  /* c7f24: and v21.16b, v24.16b, v21.16b */
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
  /* c7f28: and v19.16b, v19.16b, v22.16b */
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
  /* c7f2c: cmgt v22.4s, v0.4s, v25.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].i32[0] > (c)->q[25].i32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].i32[1] > (c)->q[25].i32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].i32[2] > (c)->q[25].i32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].i32[3] > (c)->q[25].i32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[22] = _t; }
  /* c7f30: cmgt v5.4s, v0.4s, v26.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].i32[0] > (c)->q[26].i32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].i32[1] > (c)->q[26].i32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].i32[2] > (c)->q[26].i32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].i32[3] > (c)->q[26].i32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[5] = _t; }
  /* c7f34: orr v6.16b, v18.16b, v6.16b */
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
  /* c7f38: orr v4.16b, v17.16b, v4.16b */
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
  /* c7f3c: orr v7.16b, v21.16b, v16.16b */
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
  /* c7f40: ldr q21, [x26, #0xc40] */
  arc_q_w(c, 21, arc_ld64((ARC_X_R(c, 26) + INT64_C(3136))), arc_ld64((ARC_X_R(c, 26) + INT64_C(3136)) + 8));
  /* c7f44: orr v16.16b, v19.16b, v20.16b */
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
  /* c7f48: ldr q20, [x6, #0xc80] */
  arc_q_w(c, 20, arc_ld64((ARC_X_R(c, 6) + INT64_C(3200))), arc_ld64((ARC_X_R(c, 6) + INT64_C(3200)) + 8));
  /* c7f4c: sshll v17.2d, v22.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[22].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[22].i32[1]) << 0);
    (c)->q[17] = _t; }
  /* c7f50: sshll2 v18.2d, v22.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[22].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[22].i32[3]) << 0);
    (c)->q[18] = _t; }
  /* c7f54: sshll v19.2d, v5.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[5].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[5].i32[1]) << 0);
    (c)->q[19] = _t; }
  /* c7f58: sshll2 v5.2d, v5.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[5].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[5].i32[3]) << 0);
    (c)->q[5] = _t; }
  /* c7f5c: orr v3.16b, v6.16b, v3.16b */
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
  /* c7f60: ldr q6, [x7, #0xa00] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 7) + INT64_C(2560))), arc_ld64((ARC_X_R(c, 7) + INT64_C(2560)) + 8));
  /* c7f64: orr v1.16b, v16.16b, v1.16b */
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
  /* c7f68: ldr q16, [sp, #0xb0] */
  arc_q_w(c, 16, arc_ld64(((c)->sp + INT64_C(176))), arc_ld64(((c)->sp + INT64_C(176)) + 8));
  /* c7f6c: orr v2.16b, v7.16b, v2.16b */
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
  /* c7f70: and v7.16b, v17.16b, v20.16b */
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
  /* c7f74: and v5.16b, v5.16b, v6.16b */
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
  /* c7f78: and v6.16b, v19.16b, v21.16b */
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
  /* c7f7c: and v16.16b, v18.16b, v16.16b */
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
  /* c7f80: orr v3.16b, v7.16b, v3.16b */
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
  /* c7f84: orr v4.16b, v16.16b, v4.16b */
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
  /* c7f88: orr v1.16b, v6.16b, v1.16b */
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
  /* c7f8c: orr v2.16b, v5.16b, v2.16b */
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
  /* c7f90: orr v2.16b, v2.16b, v4.16b */
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
  /* c7f94: orr v1.16b, v1.16b, v3.16b */
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
  /* c7f98: orr v1.16b, v1.16b, v2.16b */
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
  /* c7f9c: ext v2.16b, v1.16b, v1.16b, #8 */
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
  /* c7fa0: orr v1.8b, v1.8b, v2.8b */
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
  /* c7fa4: fmov x14, d1 */
  ARC_X_W(c, 14, ARC_DU_R(c, 1));
  /* c7fa8: cbz x13, #0xc7a60 */
  if ((ARC_X_R(c, 13)) == 0) goto L_c7a60;
L_c7fac:;
  /* c7fac: cbz x14, #0xc7a60 */
  if ((ARC_X_R(c, 14)) == 0) goto L_c7a60;
L_c7fb0:;
  /* c7fb0: rbit x15, x14 */
  ARC_X_W(c, 15, arc_rbit64(ARC_X_R(c, 14)));
  /* c7fb4: rbit x16, x13 */
  ARC_X_W(c, 16, arc_rbit64(ARC_X_R(c, 13)));
  /* c7fb8: sub x17, x14, #1 */
  ARC_X_W(c, 17, (ARC_X_R(c, 14) - UINT64_C(1)));
  /* c7fbc: sub x3, x13, #1 */
  ARC_X_W(c, 3, (ARC_X_R(c, 13) - UINT64_C(1)));
  /* c7fc0: and x14, x17, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 17) & ARC_X_R(c, 14)));
  /* c7fc4: clz x15, x15 */
  ARC_X_W(c, 15, arc_clz64(ARC_X_R(c, 15)));
  /* c7fc8: clz x16, x16 */
  ARC_X_W(c, 16, arc_clz64(ARC_X_R(c, 16)));
  /* c7fcc: and x13, x3, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 3) & ARC_X_R(c, 13)));
  /* c7fd0: sub x15, x12, x15, lsl #2 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 15)) << 2)));
  /* c7fd4: ldr w0, [x11, x16, lsl #2] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 16)) << 2))));
  /* c7fd8: ldr w1, [x15] */
  ARC_W_W(c, 1, arc_ld32(ARC_X_R(c, 15)));
  /* c7fdc: str w1, [x11, x16, lsl #2] */
  arc_st32((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 16)) << 2)), ARC_W_R(c, 1));
  /* c7fe0: str w0, [x15] */
  arc_st32(ARC_X_R(c, 15), ARC_W_R(c, 0));
  /* c7fe4: cbz x14, #0xc7a60 */
  if ((ARC_X_R(c, 14)) == 0) goto L_c7a60;
  /* c7fe8: cbnz x13, #0xc7fb0 */
  if ((ARC_X_R(c, 13)) != 0) goto L_c7fb0;
  /* c7fec: b #0xc7a60 */
  goto L_c7a60;
L_c7ff0:;
  /* c7ff0: asr x15, x13, #2 */
  ARC_X_W(c, 15, ((uint64_t)((int64_t)(ARC_X_R(c, 13)) >> ((UINT64_C(2)) & 63))));
  /* c7ff4: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* c7ff8: mov w16, #1 */
  ARC_W_W(c, 16, UINT64_C(1));
  /* c7ffc: b #0xc8024 */
  goto L_c8024;
L_c8000:;
  /* c8000: asr x15, x15, #2 */
  ARC_X_W(c, 15, ((uint64_t)((int64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(2)) & 63))));
  /* c8004: orr x17, x14, x13 */
  ARC_X_W(c, 17, (ARC_X_R(c, 14) | ARC_X_R(c, 13)));
  /* c8008: cbz x17, #0xc8024 */
  if ((ARC_X_R(c, 17)) == 0) goto L_c8024;
  /* c800c: sub x15, x15, #0x3f */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) - UINT64_C(63)));
  /* c8010: mov w0, #0x40 */
  ARC_W_W(c, 0, UINT64_C(64));
  /* c8014: mov w17, #0x40 */
  ARC_W_W(c, 17, UINT64_C(64));
  /* c8018: cbz x13, #0xc8034 */
  if ((ARC_X_R(c, 13)) == 0) goto L_c8034;
  /* c801c: cbnz w16, #0xc8150 */
  if ((ARC_W_R(c, 16)) != 0) goto L_c8150;
  /* c8020: b #0xc827c */
  goto L_c827c;
L_c8024:;
  /* c8024: add x13, x15, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 15) + UINT64_C(1)));
  /* c8028: add x15, x13, x13, lsr #63 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + ((uint64_t)(ARC_X_R(c, 13)) >> 63)));
  /* c802c: asr x15, x15, #1 */
  ARC_X_W(c, 15, ((uint64_t)((int64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(1)) & 63))));
  /* c8030: sub x0, x13, x15 */
  ARC_X_W(c, 0, (ARC_X_R(c, 13) - ARC_X_R(c, 15)));
L_c8034:;
  /* c8034: cmp x15, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(1));
  /* c8038: b.lt #0xc8054 */
  if (ARC_COND(c, 11)) goto L_c8054;
  /* c803c: cmp x15, #8 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(8));
  /* c8040: b.hs #0xc805c */
  if (ARC_COND(c, 2)) goto L_c805c;
  /* c8044: mov x17, xzr */
  ARC_X_W(c, 17, ARC_X_R(c, 31));
  /* c8048: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* c804c: mov x1, x11 */
  ARC_X_W(c, 1, ARC_X_R(c, 11));
  /* c8050: b #0xc8124 */
  goto L_c8124;
L_c8054:;
  /* c8054: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* c8058: b #0xc8144 */
  goto L_c8144;
L_c805c:;
  /* c805c: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* c8060: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* c8064: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* c8068: movi v2.2d, #0000000000000000 */
  arc_v_clear(c, 2);
  /* c806c: movi v3.2d, #0000000000000000 */
  arc_v_clear(c, 3);
  /* c8070: and x17, x15, #0x7ffffffffffffff8 */
  ARC_X_W(c, 17, (ARC_X_R(c, 15) & UINT64_C(9223372036854775800)));
  /* c8074: dup v4.4s, w8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (ARC_W_R(c, 8));
    _t.u32[1] = (ARC_W_R(c, 8));
    _t.u32[2] = (ARC_W_R(c, 8));
    _t.u32[3] = (ARC_W_R(c, 8));
    (c)->q[4] = _t; }
  /* c8078: ldr q5, [x13, #0xc10] */
  arc_q_w(c, 5, arc_ld64((ARC_X_R(c, 13) + INT64_C(3088))), arc_ld64((ARC_X_R(c, 13) + INT64_C(3088)) + 8));
  /* c807c: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* c8080: add x1, x11, x17, lsl #2 */
  ARC_X_W(c, 1, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 17)) << 2)));
  /* c8084: ldr q6, [x13, #0xa80] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 13) + INT64_C(2688))), arc_ld64((ARC_X_R(c, 13) + INT64_C(2688)) + 8));
  /* c8088: add x13, x11, #0x10 */
  ARC_X_W(c, 13, (ARC_X_R(c, 11) + UINT64_C(16)));
  /* c808c: mov x3, x17 */
  ARC_X_W(c, 3, ARC_X_R(c, 17));
L_c8090:;
  /* c8090: ldp q7, q16, [x13, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 13) + INT64_C(-16));
    arc_q_w(c, 7, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 16, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c8094: dup v17.2d, x27 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 27));
    _t.u64[1] = (ARC_X_R(c, 27));
    (c)->q[17] = _t; }
  /* c8098: dup v18.2d, x4 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 4));
    _t.u64[1] = (ARC_X_R(c, 4));
    (c)->q[18] = _t; }
  /* c809c: subs x3, x3, #8 */
  ARC_X_W(c, 3, arc_sub64(c, ARC_X_R(c, 3), UINT64_C(8)));
  /* c80a0: add x13, x13, #0x20 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(32)));
  /* c80a4: cmge v7.4s, v7.4s, v4.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[7].i32[0] >= (c)->q[4].i32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[7].i32[1] >= (c)->q[4].i32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[7].i32[2] >= (c)->q[4].i32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[7].i32[3] >= (c)->q[4].i32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[7] = _t; }
  /* c80a8: cmge v16.4s, v16.4s, v4.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[16].i32[0] >= (c)->q[4].i32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[16].i32[1] >= (c)->q[4].i32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[16].i32[2] >= (c)->q[4].i32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[16].i32[3] >= (c)->q[4].i32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[16] = _t; }
  /* c80ac: add v21.2d, v5.2d, v17.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[5].u64[0] + (c)->q[17].u64[0];
    _t.u64[1] = (c)->q[5].u64[1] + (c)->q[17].u64[1];
    (c)->q[21] = _t; }
  /* c80b0: add v17.2d, v6.2d, v17.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[6].u64[0] + (c)->q[17].u64[0];
    _t.u64[1] = (c)->q[6].u64[1] + (c)->q[17].u64[1];
    (c)->q[17] = _t; }
  /* c80b4: ushll2 v19.2d, v7.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[7].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[7].u32[3]) << 0);
    (c)->q[19] = _t; }
  /* c80b8: ushll v7.2d, v7.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[7].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[7].u32[1]) << 0);
    (c)->q[7] = _t; }
  /* c80bc: ushll2 v20.2d, v16.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[16].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[16].u32[3]) << 0);
    (c)->q[20] = _t; }
  /* c80c0: ushll v16.2d, v16.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[16].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[16].u32[1]) << 0);
    (c)->q[16] = _t; }
  /* c80c4: and v19.16b, v19.16b, v18.16b */
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
  /* c80c8: and v7.16b, v7.16b, v18.16b */
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
  /* c80cc: and v20.16b, v20.16b, v18.16b */
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
  /* c80d0: and v16.16b, v16.16b, v18.16b */
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
  /* c80d4: ushl v7.2d, v7.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[7].u64[0], (int8_t)(c)->q[6].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[7].u64[1], (int8_t)(c)->q[6].u64[1]);
    (c)->q[7] = _t; }
  /* c80d8: ushl v18.2d, v19.2d, v5.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[19].u64[0], (int8_t)(c)->q[5].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[19].u64[1], (int8_t)(c)->q[5].u64[1]);
    (c)->q[18] = _t; }
  /* c80dc: ushl v19.2d, v20.2d, v21.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[20].u64[0], (int8_t)(c)->q[21].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[20].u64[1], (int8_t)(c)->q[21].u64[1]);
    (c)->q[19] = _t; }
  /* c80e0: dup v20.2d, x5 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 5));
    _t.u64[1] = (ARC_X_R(c, 5));
    (c)->q[20] = _t; }
  /* c80e4: ushl v16.2d, v16.2d, v17.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[16].u64[0], (int8_t)(c)->q[17].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[16].u64[1], (int8_t)(c)->q[17].u64[1]);
    (c)->q[16] = _t; }
  /* c80e8: orr v1.16b, v18.16b, v1.16b */
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
  /* c80ec: orr v0.16b, v7.16b, v0.16b */
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
  /* c80f0: orr v3.16b, v19.16b, v3.16b */
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
  /* c80f4: orr v2.16b, v16.16b, v2.16b */
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
  /* c80f8: add v5.2d, v5.2d, v20.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[5].u64[0] + (c)->q[20].u64[0];
    _t.u64[1] = (c)->q[5].u64[1] + (c)->q[20].u64[1];
    (c)->q[5] = _t; }
  /* c80fc: add v6.2d, v6.2d, v20.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[6].u64[0] + (c)->q[20].u64[0];
    _t.u64[1] = (c)->q[6].u64[1] + (c)->q[20].u64[1];
    (c)->q[6] = _t; }
  /* c8100: b.ne #0xc8090 */
  if (ARC_COND(c, 1)) goto L_c8090;
  /* c8104: orr v0.16b, v2.16b, v0.16b */
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
  /* c8108: orr v1.16b, v3.16b, v1.16b */
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
  /* c810c: cmp x15, x17 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 17));
  /* c8110: orr v0.16b, v0.16b, v1.16b */
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
  /* c8114: ext v1.16b, v0.16b, v0.16b, #8 */
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
  /* c8118: orr v0.8b, v0.8b, v1.8b */
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
  /* c811c: fmov x13, d0 */
  ARC_X_W(c, 13, ARC_DU_R(c, 0));
  /* c8120: b.eq #0xc8144 */
  if (ARC_COND(c, 0)) goto L_c8144;
L_c8124:;
  /* c8124: ldr w3, [x1], #4 */
  { const uint64_t _a = ARC_X_R(c, 1);
    ARC_X_W(c, 1, ARC_X_R(c, 1) + INT64_C(4));
    ARC_W_W(c, 3, arc_ld32(_a));
  }
  /* c8128: cmp w3, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 3), ARC_W_R(c, 8));
  /* c812c: cset w3, ge */
  ARC_W_W(c, 3, (ARC_COND(c, 10) ? 1 : 0));
  /* c8130: lsl x3, x3, x17 */
  ARC_X_W(c, 3, ((uint64_t)(ARC_X_R(c, 3)) << ((ARC_X_R(c, 17)) & 63)));
  /* c8134: add x17, x17, #1 */
  ARC_X_W(c, 17, (ARC_X_R(c, 17) + UINT64_C(1)));
  /* c8138: cmp x15, x17 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 17));
  /* c813c: orr x13, x3, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 3) | ARC_X_R(c, 13)));
  /* c8140: b.ne #0xc8124 */
  if (ARC_COND(c, 1)) goto L_c8124;
L_c8144:;
  /* c8144: mov x17, x15 */
  ARC_X_W(c, 17, ARC_X_R(c, 15));
  /* c8148: mov x15, x0 */
  ARC_X_W(c, 15, ARC_X_R(c, 0));
  /* c814c: cbz w16, #0xc827c */
  if ((ARC_W_R(c, 16)) == 0) goto L_c827c;
L_c8150:;
  /* c8150: cmp x15, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(1));
  /* c8154: b.lt #0xc8170 */
  if (ARC_COND(c, 11)) goto L_c8170;
  /* c8158: cmp x15, #8 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(8));
  /* c815c: b.hs #0xc8184 */
  if (ARC_COND(c, 2)) goto L_c8184;
  /* c8160: mov x16, xzr */
  ARC_X_W(c, 16, ARC_X_R(c, 31));
  /* c8164: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* c8168: mov x0, x12 */
  ARC_X_W(c, 0, ARC_X_R(c, 12));
  /* c816c: b #0xc825c */
  goto L_c825c;
L_c8170:;
  /* c8170: cmp x13, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(0));
  /* c8174: csel x14, x17, xzr, eq */
  ARC_X_W(c, 14, (ARC_COND(c, 0) ? (ARC_X_R(c, 17)) : ARC_X_R(c, 31)));
  /* c8178: cbz x13, #0xc842c */
  if ((ARC_X_R(c, 13)) == 0) goto L_c842c;
  /* c817c: sub x12, x12, x15, lsl #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 15)) << 2)));
  /* c8180: b #0xc82ec */
  goto L_c82ec;
L_c8184:;
  /* c8184: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* c8188: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* c818c: adrp x14, #0x52000 */
  ARC_X_W(c, 14, (arc_image_bases[1] + UINT64_C(335872)));
  /* c8190: movi v2.2d, #0000000000000000 */
  arc_v_clear(c, 2);
  /* c8194: movi v3.2d, #0000000000000000 */
  arc_v_clear(c, 3);
  /* c8198: and x16, x15, #0x7ffffffffffffff8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 15) & UINT64_C(9223372036854775800)));
  /* c819c: dup v4.4s, w8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (ARC_W_R(c, 8));
    _t.u32[1] = (ARC_W_R(c, 8));
    _t.u32[2] = (ARC_W_R(c, 8));
    _t.u32[3] = (ARC_W_R(c, 8));
    (c)->q[4] = _t; }
  /* c81a0: ldr q5, [x14, #0xc10] */
  arc_q_w(c, 5, arc_ld64((ARC_X_R(c, 14) + INT64_C(3088))), arc_ld64((ARC_X_R(c, 14) + INT64_C(3088)) + 8));
  /* c81a4: adrp x14, #0x52000 */
  ARC_X_W(c, 14, (arc_image_bases[1] + UINT64_C(335872)));
  /* c81a8: sub x0, x12, x16, lsl #2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 16)) << 2)));
  /* c81ac: ldr q6, [x14, #0xa80] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 14) + INT64_C(2688))), arc_ld64((ARC_X_R(c, 14) + INT64_C(2688)) + 8));
  /* c81b0: sub x14, x12, #0xc */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) - UINT64_C(12)));
  /* c81b4: mov x1, x16 */
  ARC_X_W(c, 1, ARC_X_R(c, 16));
L_c81b8:;
  /* c81b8: ldp q16, q7, [x14, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 14) + INT64_C(-16));
    arc_q_w(c, 16, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 7, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c81bc: dup v17.2d, x27 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 27));
    _t.u64[1] = (ARC_X_R(c, 27));
    (c)->q[17] = _t; }
  /* c81c0: dup v18.2d, x4 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 4));
    _t.u64[1] = (ARC_X_R(c, 4));
    (c)->q[18] = _t; }
  /* c81c4: sub x1, x1, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) - UINT64_C(8)));
  /* c81c8: sub x14, x14, #0x20 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(32)));
  /* c81cc: rev64 v7.4s, v7.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[7].u32[1];
    _t.u32[1] = (c)->q[7].u32[0];
    _t.u32[2] = (c)->q[7].u32[3];
    _t.u32[3] = (c)->q[7].u32[2];
    (c)->q[7] = _t; }
  /* c81d0: rev64 v16.4s, v16.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[16].u32[1];
    _t.u32[1] = (c)->q[16].u32[0];
    _t.u32[2] = (c)->q[16].u32[3];
    _t.u32[3] = (c)->q[16].u32[2];
    (c)->q[16] = _t; }
  /* c81d4: add v21.2d, v5.2d, v17.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[5].u64[0] + (c)->q[17].u64[0];
    _t.u64[1] = (c)->q[5].u64[1] + (c)->q[17].u64[1];
    (c)->q[21] = _t; }
  /* c81d8: add v17.2d, v6.2d, v17.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[6].u64[0] + (c)->q[17].u64[0];
    _t.u64[1] = (c)->q[6].u64[1] + (c)->q[17].u64[1];
    (c)->q[17] = _t; }
  /* c81dc: ext v7.16b, v7.16b, v7.16b, #8 */
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
  /* c81e0: ext v16.16b, v16.16b, v16.16b, #8 */
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
  /* c81e4: cmgt v7.4s, v4.4s, v7.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[4].i32[0] > (c)->q[7].i32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[4].i32[1] > (c)->q[7].i32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[4].i32[2] > (c)->q[7].i32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[4].i32[3] > (c)->q[7].i32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[7] = _t; }
  /* c81e8: cmgt v16.4s, v4.4s, v16.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[4].i32[0] > (c)->q[16].i32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[4].i32[1] > (c)->q[16].i32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[4].i32[2] > (c)->q[16].i32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[4].i32[3] > (c)->q[16].i32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[16] = _t; }
  /* c81ec: ushll2 v19.2d, v7.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[7].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[7].u32[3]) << 0);
    (c)->q[19] = _t; }
  /* c81f0: ushll v7.2d, v7.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[7].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[7].u32[1]) << 0);
    (c)->q[7] = _t; }
  /* c81f4: ushll2 v20.2d, v16.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[16].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[16].u32[3]) << 0);
    (c)->q[20] = _t; }
  /* c81f8: ushll v16.2d, v16.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[16].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[16].u32[1]) << 0);
    (c)->q[16] = _t; }
  /* c81fc: and v19.16b, v19.16b, v18.16b */
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
  /* c8200: and v7.16b, v7.16b, v18.16b */
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
  /* c8204: and v20.16b, v20.16b, v18.16b */
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
  /* c8208: and v16.16b, v16.16b, v18.16b */
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
  /* c820c: ushl v7.2d, v7.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[7].u64[0], (int8_t)(c)->q[6].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[7].u64[1], (int8_t)(c)->q[6].u64[1]);
    (c)->q[7] = _t; }
  /* c8210: ushl v18.2d, v19.2d, v5.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[19].u64[0], (int8_t)(c)->q[5].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[19].u64[1], (int8_t)(c)->q[5].u64[1]);
    (c)->q[18] = _t; }
  /* c8214: ushl v19.2d, v20.2d, v21.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[20].u64[0], (int8_t)(c)->q[21].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[20].u64[1], (int8_t)(c)->q[21].u64[1]);
    (c)->q[19] = _t; }
  /* c8218: dup v20.2d, x5 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 5));
    _t.u64[1] = (ARC_X_R(c, 5));
    (c)->q[20] = _t; }
  /* c821c: ushl v16.2d, v16.2d, v17.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[16].u64[0], (int8_t)(c)->q[17].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[16].u64[1], (int8_t)(c)->q[17].u64[1]);
    (c)->q[16] = _t; }
  /* c8220: orr v1.16b, v18.16b, v1.16b */
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
  /* c8224: orr v0.16b, v7.16b, v0.16b */
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
  /* c8228: orr v3.16b, v19.16b, v3.16b */
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
  /* c822c: orr v2.16b, v16.16b, v2.16b */
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
  /* c8230: add v5.2d, v5.2d, v20.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[5].u64[0] + (c)->q[20].u64[0];
    _t.u64[1] = (c)->q[5].u64[1] + (c)->q[20].u64[1];
    (c)->q[5] = _t; }
  /* c8234: add v6.2d, v6.2d, v20.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[6].u64[0] + (c)->q[20].u64[0];
    _t.u64[1] = (c)->q[6].u64[1] + (c)->q[20].u64[1];
    (c)->q[6] = _t; }
  /* c8238: cbnz x1, #0xc81b8 */
  if ((ARC_X_R(c, 1)) != 0) goto L_c81b8;
  /* c823c: orr v0.16b, v2.16b, v0.16b */
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
  /* c8240: orr v1.16b, v3.16b, v1.16b */
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
  /* c8244: cmp x15, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 16));
  /* c8248: orr v0.16b, v0.16b, v1.16b */
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
  /* c824c: ext v1.16b, v0.16b, v0.16b, #8 */
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
  /* c8250: orr v0.8b, v0.8b, v1.8b */
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
  /* c8254: fmov x14, d0 */
  ARC_X_W(c, 14, ARC_DU_R(c, 0));
  /* c8258: b.eq #0xc827c */
  if (ARC_COND(c, 0)) goto L_c827c;
L_c825c:;
  /* c825c: ldr w1, [x0], #0xfffffffffffffffc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(-4));
    ARC_W_W(c, 1, arc_ld32(_a));
  }
  /* c8260: cmp w1, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 1), ARC_W_R(c, 8));
  /* c8264: cset w1, lt */
  ARC_W_W(c, 1, (ARC_COND(c, 11) ? 1 : 0));
  /* c8268: lsl x1, x1, x16 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 1)) << ((ARC_X_R(c, 16)) & 63)));
  /* c826c: add x16, x16, #1 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1)));
  /* c8270: cmp x15, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 16));
  /* c8274: orr x14, x1, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 1) | ARC_X_R(c, 14)));
  /* c8278: b.ne #0xc825c */
  if (ARC_COND(c, 1)) goto L_c825c;
L_c827c:;
  /* c827c: cbz x13, #0xc82c0 */
  if ((ARC_X_R(c, 13)) == 0) goto L_c82c0;
  /* c8280: cbz x14, #0xc82c0 */
  if ((ARC_X_R(c, 14)) == 0) goto L_c82c0;
L_c8284:;
  /* c8284: rbit x16, x14 */
  ARC_X_W(c, 16, arc_rbit64(ARC_X_R(c, 14)));
  /* c8288: rbit x0, x13 */
  ARC_X_W(c, 0, arc_rbit64(ARC_X_R(c, 13)));
  /* c828c: sub x1, x14, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 14) - UINT64_C(1)));
  /* c8290: sub x4, x13, #1 */
  ARC_X_W(c, 4, (ARC_X_R(c, 13) - UINT64_C(1)));
  /* c8294: and x14, x1, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 1) & ARC_X_R(c, 14)));
  /* c8298: clz x16, x16 */
  ARC_X_W(c, 16, arc_clz64(ARC_X_R(c, 16)));
  /* c829c: clz x0, x0 */
  ARC_X_W(c, 0, arc_clz64(ARC_X_R(c, 0)));
  /* c82a0: and x13, x4, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 4) & ARC_X_R(c, 13)));
  /* c82a4: sub x16, x12, x16, lsl #2 */
  ARC_X_W(c, 16, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 16)) << 2)));
  /* c82a8: ldr w5, [x11, x0, lsl #2] */
  ARC_W_W(c, 5, arc_ld32((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 0)) << 2))));
  /* c82ac: ldr w3, [x16] */
  ARC_W_W(c, 3, arc_ld32(ARC_X_R(c, 16)));
  /* c82b0: str w3, [x11, x0, lsl #2] */
  arc_st32((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 0)) << 2)), ARC_W_R(c, 3));
  /* c82b4: str w5, [x16] */
  arc_st32(ARC_X_R(c, 16), ARC_W_R(c, 5));
  /* c82b8: cbz x14, #0xc82c0 */
  if ((ARC_X_R(c, 14)) == 0) goto L_c82c0;
  /* c82bc: cbnz x13, #0xc8284 */
  if ((ARC_X_R(c, 13)) != 0) goto L_c8284;
L_c82c0:;
  /* c82c0: cmp x14, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(0));
  /* c82c4: csel x15, x15, xzr, eq */
  ARC_X_W(c, 15, (ARC_COND(c, 0) ? (ARC_X_R(c, 15)) : ARC_X_R(c, 31)));
  /* c82c8: sub x12, x12, x15, lsl #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 15)) << 2)));
  /* c82cc: cbnz x13, #0xc82ec */
  if ((ARC_X_R(c, 13)) != 0) goto L_c82ec;
  /* c82d0: add x23, x11, x17, lsl #2 */
  ARC_X_W(c, 23, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 17)) << 2)));
  /* c82d4: cbnz x14, #0xc8324 */
  if ((ARC_X_R(c, 14)) != 0) goto L_c8324;
  /* c82d8: b #0xc8350 */
  goto L_c8350;
L_c82dc:;
  /* c82dc: lsl x14, x28, x14 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 28)) << ((ARC_X_R(c, 14)) & 63)));
  /* c82e0: sub x12, x12, #4 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(4)));
  /* c82e4: bic x13, x13, x14 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) & (~ARC_X_R(c, 14))));
  /* c82e8: cbz x13, #0xc834c */
  if ((ARC_X_R(c, 13)) == 0) goto L_c834c;
L_c82ec:;
  /* c82ec: clz x14, x13 */
  ARC_X_W(c, 14, arc_clz64(ARC_X_R(c, 13)));
  /* c82f0: eor x14, x14, #0x3f */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) ^ UINT64_C(63)));
  /* c82f4: add x15, x11, x14, lsl #2 */
  ARC_X_W(c, 15, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 14)) << 2)));
  /* c82f8: cmp x12, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 15));
  /* c82fc: b.eq #0xc82dc */
  if (ARC_COND(c, 0)) goto L_c82dc;
  /* c8300: ldr w16, [x12] */
  ARC_W_W(c, 16, arc_ld32(ARC_X_R(c, 12)));
  /* c8304: ldr w17, [x15] */
  ARC_W_W(c, 17, arc_ld32(ARC_X_R(c, 15)));
  /* c8308: str w16, [x15] */
  arc_st32(ARC_X_R(c, 15), ARC_W_R(c, 16));
  /* c830c: str w17, [x12] */
  arc_st32(ARC_X_R(c, 12), ARC_W_R(c, 17));
  /* c8310: b #0xc82dc */
  goto L_c82dc;
L_c8314:;
  /* c8314: lsl x11, x28, x11 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 28)) << ((ARC_X_R(c, 11)) & 63)));
  /* c8318: add x23, x23, #4 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(4)));
  /* c831c: bic x14, x14, x11 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) & (~ARC_X_R(c, 11))));
  /* c8320: cbz x14, #0xc8350 */
  if ((ARC_X_R(c, 14)) == 0) goto L_c8350;
L_c8324:;
  /* c8324: clz x11, x14 */
  ARC_X_W(c, 11, arc_clz64(ARC_X_R(c, 14)));
  /* c8328: eor x11, x11, #0x3f */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) ^ UINT64_C(63)));
  /* c832c: sub x13, x12, x11, lsl #2 */
  ARC_X_W(c, 13, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 11)) << 2)));
  /* c8330: cmp x23, x13 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 13));
  /* c8334: b.eq #0xc8314 */
  if (ARC_COND(c, 0)) goto L_c8314;
  /* c8338: ldr w15, [x23] */
  ARC_W_W(c, 15, arc_ld32(ARC_X_R(c, 23)));
  /* c833c: ldr w16, [x13] */
  ARC_W_W(c, 16, arc_ld32(ARC_X_R(c, 13)));
  /* c8340: str w15, [x13] */
  arc_st32(ARC_X_R(c, 13), ARC_W_R(c, 15));
  /* c8344: str w16, [x23] */
  arc_st32(ARC_X_R(c, 23), ARC_W_R(c, 16));
  /* c8348: b #0xc8314 */
  goto L_c8314;
L_c834c:;
  /* c834c: add x23, x12, #4 */
  ARC_X_W(c, 23, (ARC_X_R(c, 12) + UINT64_C(4)));
L_c8350:;
  /* c8350: sub x24, x23, #4 */
  ARC_X_W(c, 24, (ARC_X_R(c, 23) - UINT64_C(4)));
  /* c8354: cmp x19, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 24));
  /* c8358: b.eq #0xc8364 */
  if (ARC_COND(c, 0)) goto L_c8364;
  /* c835c: ldr w11, [x24] */
  ARC_W_W(c, 11, arc_ld32(ARC_X_R(c, 24)));
  /* c8360: str w11, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 11));
L_c8364:;
  /* c8364: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* c8368: str w8, [x24] */
  arc_st32(ARC_X_R(c, 24), ARC_W_R(c, 8));
  /* c836c: b.lo #0xc83d0 */
  if (ARC_COND(c, 3)) goto L_c83d0;
  /* c8370: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* c8374: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* c8378: mov x22, x26 */
  ARC_X_W(c, 22, ARC_X_R(c, 26));
  /* c837c: mov x27, x7 */
  ARC_X_W(c, 27, ARC_X_R(c, 7));
  /* c8380: mov x26, x6 */
  ARC_X_W(c, 26, ARC_X_R(c, 6));
  /* c8384: bl #0xd0e74 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(820104));
  fn1_d0e74(c);
  /* c8388: mov w25, w0 */
  ARC_W_W(c, 25, ARC_W_R(c, 0));
  /* c838c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* c8390: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* c8394: bl #0xd0e74 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(820120));
  fn1_d0e74(c);
  /* c8398: tbnz w0, #0, #0xc84e8 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_c84e8;
  /* c839c: ldp q31, q30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_q_w(c, 31, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 30, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c83a0: mov x6, x26 */
  ARC_X_W(c, 6, ARC_X_R(c, 26));
  /* c83a4: ldp q9, q8, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_q_w(c, 9, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 8, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c83a8: mov w4, #1 */
  ARC_W_W(c, 4, UINT64_C(1));
  /* c83ac: ldp q11, q10, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_q_w(c, 11, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 10, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c83b0: mov x7, x27 */
  ARC_X_W(c, 7, ARC_X_R(c, 27));
  /* c83b4: ldp q13, q12, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_q_w(c, 13, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 12, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c83b8: mov w5, #8 */
  ARC_W_W(c, 5, UINT64_C(8));
  /* c83bc: ldp q15, q14, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_q_w(c, 15, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 14, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c83c0: mov x26, x22 */
  ARC_X_W(c, 26, ARC_X_R(c, 22));
  /* c83c4: mov x22, #-0x100 */
  ARC_X_W(c, 22, UINT64_C(18446744073709551360));
  /* c83c8: mov w27, #4 */
  ARC_W_W(c, 27, UINT64_C(4));
  /* c83cc: tbnz w25, #0, #0xc77c8 */
  if (((ARC_W_R(c, 25)) >> 0 & 1) != 0) goto L_c77c8;
L_c83d0:;
  /* c83d0: ldr w8, [sp, #0xac] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(172))));
  /* c83d4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* c83d8: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* c83dc: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* c83e0: mov x19, x21 */
  ARC_X_W(c, 19, ARC_X_R(c, 21));
  /* c83e4: mov x21, x6 */
  ARC_X_W(c, 21, ARC_X_R(c, 6));
  /* c83e8: and w3, w8, #1 */
  ARC_W_W(c, 3, (ARC_W_R(c, 8) & UINT64_C(1)));
  /* c83ec: mov x24, x7 */
  ARC_X_W(c, 24, ARC_X_R(c, 7));
  /* c83f0: bl #0xc7618 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(820212));
  fn1_c7618(c);
  /* c83f4: ldp q15, q14, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_q_w(c, 15, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 14, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c83f8: mov w27, #4 */
  ARC_W_W(c, 27, UINT64_C(4));
  /* c83fc: ldp q13, q12, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_q_w(c, 13, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 12, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c8400: mov x22, #-0x100 */
  ARC_X_W(c, 22, UINT64_C(18446744073709551360));
  /* c8404: ldp q11, q10, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_q_w(c, 11, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 10, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c8408: mov w5, #8 */
  ARC_W_W(c, 5, UINT64_C(8));
  /* c840c: ldp q9, q8, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_q_w(c, 9, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 8, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c8410: mov x7, x24 */
  ARC_X_W(c, 7, ARC_X_R(c, 24));
  /* c8414: ldp q31, q30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_q_w(c, 31, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 30, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c8418: mov w4, #1 */
  ARC_W_W(c, 4, UINT64_C(1));
  /* c841c: mov x6, x21 */
  ARC_X_W(c, 6, ARC_X_R(c, 21));
  /* c8420: mov x21, x19 */
  ARC_X_W(c, 21, ARC_X_R(c, 19));
  /* c8424: str wzr, [sp, #0xac] */
  arc_st32(((c)->sp + INT64_C(172)), ARC_W_R(c, 31));
  /* c8428: b #0xc77c8 */
  goto L_c77c8;
L_c842c:;
  /* c842c: add x23, x11, x14, lsl #2 */
  ARC_X_W(c, 23, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 14)) << 2)));
  /* c8430: b #0xc8350 */
  goto L_c8350;
L_c8434:;
  /* c8434: ldur w9, [x20, #-4] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c8438: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c843c: b.ge #0xc8454 */
  if (ARC_COND(c, 10)) goto L_c8454;
  /* c8440: mov x23, x19 */
  ARC_X_W(c, 23, ARC_X_R(c, 19));
L_c8444:;
  /* c8444: ldr w9, [x23, #4]! */
  { const uint64_t _a = (ARC_X_R(c, 23) + INT64_C(4));
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(4));
    ARC_W_W(c, 9, arc_ld32(_a));
  }
  /* c8448: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c844c: b.ge #0xc8444 */
  if (ARC_COND(c, 10)) goto L_c8444;
  /* c8450: b #0xc8474 */
  goto L_c8474;
L_c8454:;
  /* c8454: add x9, x19, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(4)));
L_c8458:;
  /* c8458: mov x23, x9 */
  ARC_X_W(c, 23, ARC_X_R(c, 9));
  /* c845c: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c8460: b.hs #0xc8474 */
  if (ARC_COND(c, 2)) goto L_c8474;
  /* c8464: mov x9, x23 */
  ARC_X_W(c, 9, ARC_X_R(c, 23));
  /* c8468: ldr w10, [x9], #4 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    ARC_W_W(c, 10, arc_ld32(_a));
  }
  /* c846c: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c8470: b.ge #0xc8458 */
  if (ARC_COND(c, 10)) goto L_c8458;
L_c8474:;
  /* c8474: cmp x23, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 20));
  /* c8478: mov x9, x20 */
  ARC_X_W(c, 9, ARC_X_R(c, 20));
  /* c847c: b.hs #0xc8490 */
  if (ARC_COND(c, 2)) goto L_c8490;
  /* c8480: mov x9, x20 */
  ARC_X_W(c, 9, ARC_X_R(c, 20));
L_c8484:;
  /* c8484: ldr w10, [x9, #-4]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(-4));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(-4));
    ARC_W_W(c, 10, arc_ld32(_a));
  }
  /* c8488: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c848c: b.lt #0xc8484 */
  if (ARC_COND(c, 11)) goto L_c8484;
L_c8490:;
  /* c8490: cmp x23, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 9));
  /* c8494: b.hs #0xc84c8 */
  if (ARC_COND(c, 2)) goto L_c84c8;
  /* c8498: ldr w10, [x23] */
  ARC_W_W(c, 10, arc_ld32(ARC_X_R(c, 23)));
  /* c849c: ldr w11, [x9] */
  ARC_W_W(c, 11, arc_ld32(ARC_X_R(c, 9)));
L_c84a0:;
  /* c84a0: str w11, [x23] */
  arc_st32(ARC_X_R(c, 23), ARC_W_R(c, 11));
  /* c84a4: str w10, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 10));
L_c84a8:;
  /* c84a8: ldr w10, [x23, #4]! */
  { const uint64_t _a = (ARC_X_R(c, 23) + INT64_C(4));
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(4));
    ARC_W_W(c, 10, arc_ld32(_a));
  }
  /* c84ac: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c84b0: b.ge #0xc84a8 */
  if (ARC_COND(c, 10)) goto L_c84a8;
L_c84b4:;
  /* c84b4: ldr w11, [x9, #-4]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(-4));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(-4));
    ARC_W_W(c, 11, arc_ld32(_a));
  }
  /* c84b8: cmp w8, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 11));
  /* c84bc: b.lt #0xc84b4 */
  if (ARC_COND(c, 11)) goto L_c84b4;
  /* c84c0: cmp x23, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 9));
  /* c84c4: b.lo #0xc84a0 */
  if (ARC_COND(c, 3)) goto L_c84a0;
L_c84c8:;
  /* c84c8: sub x9, x23, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) - UINT64_C(4)));
  /* c84cc: cmp x19, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* c84d0: b.eq #0xc84dc */
  if (ARC_COND(c, 0)) goto L_c84dc;
  /* c84d4: ldr w10, [x9] */
  ARC_W_W(c, 10, arc_ld32(ARC_X_R(c, 9)));
  /* c84d8: str w10, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 10));
L_c84dc:;
  /* c84dc: str wzr, [sp, #0xac] */
  arc_st32(((c)->sp + INT64_C(172)), ARC_W_R(c, 31));
  /* c84e0: str w8, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 8));
  /* c84e4: b #0xc77c8 */
  goto L_c77c8;
L_c84e8:;
  /* c84e8: ldp q31, q30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_q_w(c, 31, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 30, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c84ec: mov x20, x24 */
  ARC_X_W(c, 20, ARC_X_R(c, 24));
  /* c84f0: ldp q9, q8, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_q_w(c, 9, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 8, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c84f4: mov x6, x26 */
  ARC_X_W(c, 6, ARC_X_R(c, 26));
  /* c84f8: ldp q11, q10, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_q_w(c, 11, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 10, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c84fc: mov w4, #1 */
  ARC_W_W(c, 4, UINT64_C(1));
  /* c8500: ldp q13, q12, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_q_w(c, 13, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 12, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c8504: mov x7, x27 */
  ARC_X_W(c, 7, ARC_X_R(c, 27));
  /* c8508: ldp q15, q14, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_q_w(c, 15, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 14, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c850c: mov w5, #8 */
  ARC_W_W(c, 5, UINT64_C(8));
  /* c8510: mov x26, x22 */
  ARC_X_W(c, 26, ARC_X_R(c, 22));
  /* c8514: mov x22, #-0x100 */
  ARC_X_W(c, 22, UINT64_C(18446744073709551360));
  /* c8518: mov w27, #4 */
  ARC_W_W(c, 27, UINT64_C(4));
  /* c851c: tbz w25, #0, #0xc77c4 */
  if (((ARC_W_R(c, 25)) >> 0 & 1) == 0) goto L_c77c4;
  /* c8520: b #0xc86b8 */
  goto L_c86b8;
L_c8524:;
  /* c8524: ldp w8, w9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_W_W(c, 8, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* c8528: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c852c: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c8530: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c8534: stp w8, w10, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st32(_pa, ARC_W_R(c, 8));
    arc_st32(_pa + 4, ARC_W_R(c, 10));
  }
  /* c8538: ldr w8, [x19, #0xc] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(12))));
  /* c853c: ldur w9, [x20, #-4] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c8540: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c8544: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c8548: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c854c: stur w10, [x20, #-4] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 10));
  /* c8550: str w8, [x19, #0xc] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(12)), ARC_W_R(c, 8));
  /* c8554: ldr w9, [x19, #8] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 19) + INT64_C(8))));
  /* c8558: ldur w8, [x20, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c855c: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c8560: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c8564: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c8568: stur w10, [x20, #-4] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 10));
  /* c856c: ldp w9, w10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* c8570: ldr w11, [x19, #4] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(4))));
  /* c8574: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c8578: csel w9, w9, w10, lt */
  ARC_W_W(c, 9, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c857c: csel w8, w8, w10, gt */
  ARC_W_W(c, 8, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c8580: stp w9, w8, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    arc_st32(_pa, ARC_W_R(c, 9));
    arc_st32(_pa + 4, ARC_W_R(c, 8));
  }
  /* c8584: ldur w8, [x20, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c8588: cmp w11, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 8));
  /* c858c: csel w9, w11, w8, gt */
  ARC_W_W(c, 9, (ARC_COND(c, 12) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 8)));
  /* c8590: csel w8, w11, w8, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 8)));
  /* c8594: stur w9, [x20, #-4] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 9));
  /* c8598: ldp w11, w10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* c859c: ldr w9, [x19] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 19)));
  /* c85a0: cmp w10, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 9));
  /* c85a4: csel w12, w10, w9, lt */
  ARC_W_W(c, 12, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* c85a8: csel w10, w10, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* c85ac: cmp w12, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 11));
  /* c85b0: csel w9, w9, w11, lt */
  ARC_W_W(c, 9, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 11)));
  /* c85b4: csel w11, w12, w11, gt */
  ARC_W_W(c, 11, (ARC_COND(c, 12) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 11)));
  /* c85b8: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* c85bc: csel w12, w10, w8, lt */
  ARC_W_W(c, 12, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c85c0: csel w10, w10, w8, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c85c4: cmp w12, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 11));
  /* c85c8: csel w8, w8, w11, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 11)));
  /* c85cc: stp w9, w8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st32(_pa, ARC_W_R(c, 9));
    arc_st32(_pa + 4, ARC_W_R(c, 8));
  }
  /* c85d0: csel w8, w12, w11, gt */
  ARC_W_W(c, 8, (ARC_COND(c, 12) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 11)));
  /* c85d4: stp w8, w10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    arc_st32(_pa, ARC_W_R(c, 8));
    arc_st32(_pa + 4, ARC_W_R(c, 10));
  }
  /* c85d8: b #0xc86b8 */
  goto L_c86b8;
L_c85dc:;
  /* c85dc: ldur w8, [x20, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c85e0: ldr w9, [x19] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 19)));
  /* c85e4: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c85e8: b.ge #0xc86b8 */
  if (ARC_COND(c, 10)) goto L_c86b8;
  /* c85ec: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* c85f0: stur w9, [x20, #-4] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 9));
  /* c85f4: b #0xc86b8 */
  goto L_c86b8;
L_c85f8:;
  /* c85f8: ldr w8, [x19, #4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(4))));
  /* c85fc: ldur w9, [x20, #-4] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c8600: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c8604: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c8608: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c860c: stur w10, [x20, #-4] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 10));
  /* c8610: str w8, [x19, #4] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(4)), ARC_W_R(c, 8));
  /* c8614: ldr w9, [x19] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 19)));
  /* c8618: ldur w8, [x20, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c861c: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c8620: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c8624: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c8628: stur w10, [x20, #-4] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 10));
  /* c862c: ldp w9, w10, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* c8630: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c8634: csel w9, w9, w10, lt */
  ARC_W_W(c, 9, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c8638: csel w8, w8, w10, gt */
  ARC_W_W(c, 8, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c863c: str w9, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* c8640: b #0xc86b4 */
  goto L_c86b4;
L_c8644:;
  /* c8644: ldp w10, w8, [x19, #4] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(4));
    ARC_W_W(c, 10, arc_ld32(_pa));
    ARC_W_W(c, 8, arc_ld32(_pa + 4));
  }
  /* c8648: ldr w9, [x19] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 19)));
  /* c864c: cmp w9, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 8));
  /* c8650: csel w11, w9, w8, gt */
  ARC_W_W(c, 11, (ARC_COND(c, 12) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* c8654: csel w8, w9, w8, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* c8658: str w11, [x19, #8] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(8)), ARC_W_R(c, 11));
  /* c865c: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* c8660: ldur w8, [x20, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c8664: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* c8668: csel w9, w10, w8, gt */
  ARC_W_W(c, 9, (ARC_COND(c, 12) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c866c: csel w8, w10, w8, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c8670: stur w9, [x20, #-4] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 9));
  /* c8674: ldr w9, [x19] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 19)));
  /* c8678: cmp w9, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 8));
  /* c867c: csel w10, w9, w8, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* c8680: csel w8, w9, w8, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* c8684: stp w8, w10, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st32(_pa, ARC_W_R(c, 8));
    arc_st32(_pa + 4, ARC_W_R(c, 10));
  }
  /* c8688: ldr w8, [x19, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(8))));
  /* c868c: ldur w9, [x20, #-4] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c8690: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c8694: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c8698: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c869c: stur w10, [x20, #-4] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 10));
  /* c86a0: ldr w10, [x19, #4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 19) + INT64_C(4))));
  /* c86a4: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* c86a8: csel w9, w10, w8, gt */
  ARC_W_W(c, 9, (ARC_COND(c, 12) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c86ac: csel w8, w10, w8, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c86b0: str w9, [x19, #8] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(8)), ARC_W_R(c, 9));
L_c86b4:;
  /* c86b4: str w8, [x19, #4] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(4)), ARC_W_R(c, 8));
L_c86b8:;
  /* c86b8: add sp, sp, #0x1f0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(496)));
  /* c86bc: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* c86c0: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* c86c4: ldp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* c86c8: ldp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* c86cc: ldp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* c86d0: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* c86d4: ldp d9, d8, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_du_w(c, 9, arc_ld64(_pa));
    arc_du_w(c, 8, arc_ld64((_pa + 8)));
  }
  /* c86d8: ldp d11, d10, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_du_w(c, 11, arc_ld64(_pa));
    arc_du_w(c, 10, arc_ld64((_pa + 8)));
  }
  /* c86dc: ldp d13, d12, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_du_w(c, 13, arc_ld64(_pa));
    arc_du_w(c, 12, arc_ld64((_pa + 8)));
  }
  /* c86e0: ldp d15, d14, [sp], #0xa0 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(160);
    arc_du_w(c, 15, arc_ld64(_pa));
    arc_du_w(c, 14, arc_ld64((_pa + 8)));
  }
  /* c86e4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* c86e8: ret  */
  return;
L_c86ec:;
  /* c86ec: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* c86f0: add x9, x19, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* c86f4: ldr w10, [sp, #0xac] */
  ARC_W_W(c, 10, arc_ld32(((c)->sp + INT64_C(172))));
  /* c86f8: ccmp x9, x20, #4, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20)); }
  else { (c)->nf = 0; (c)->zf = 1;
          (c)->cf = 0; (c)->vf = 0; }
  /* c86fc: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* c8700: tbz w10, #0, #0xc893c */
  if (((ARC_W_R(c, 10)) >> 0 & 1) == 0) goto L_c893c;
  /* c8704: tbnz w8, #0, #0xc86b8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_c86b8;
  /* c8708: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* c870c: mov x10, x19 */
  ARC_X_W(c, 10, ARC_X_R(c, 19));
  /* c8710: b #0xc872c */
  goto L_c872c;
L_c8714:;
  /* c8714: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
L_c8718:;
  /* c8718: str w11, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 11));
L_c871c:;
  /* c871c: add x9, x10, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* c8720: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* c8724: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c8728: b.eq #0xc86b8 */
  if (ARC_COND(c, 0)) goto L_c86b8;
L_c872c:;
  /* c872c: ldp w12, w11, [x10] */
  { const uint64_t _pa = ARC_X_R(c, 10);
    ARC_W_W(c, 12, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* c8730: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* c8734: cmp w11, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 12));
  /* c8738: b.ge #0xc871c */
  if (ARC_COND(c, 10)) goto L_c871c;
  /* c873c: mov x13, x8 */
  ARC_X_W(c, 13, ARC_X_R(c, 8));
L_c8740:;
  /* c8740: subs x9, x13, #4 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 13), UINT64_C(4)));
  /* c8744: str w12, [x19, x13] */
  arc_st32((ARC_X_R(c, 19) + ARC_X_R(c, 13)), ARC_W_R(c, 12));
  /* c8748: b.eq #0xc8714 */
  if (ARC_COND(c, 0)) goto L_c8714;
  /* c874c: add x12, x19, x13 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + ARC_X_R(c, 13)));
  /* c8750: mov x13, x9 */
  ARC_X_W(c, 13, ARC_X_R(c, 9));
  /* c8754: ldur w12, [x12, #-8] */
  ARC_W_W(c, 12, arc_ld32((ARC_X_R(c, 12) + INT64_C(-8))));
  /* c8758: cmp w11, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 12));
  /* c875c: b.lt #0xc8740 */
  if (ARC_COND(c, 11)) goto L_c8740;
  /* c8760: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* c8764: b #0xc8718 */
  goto L_c8718;
L_c8768:;
  /* c8768: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* c876c: b.eq #0xc86b8 */
  if (ARC_COND(c, 0)) goto L_c86b8;
  /* c8770: lsr x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* c8774: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* c8778: b #0xc878c */
  goto L_c878c;
L_c877c:;
  /* c877c: str w13, [x14] */
  arc_st32(ARC_X_R(c, 14), ARC_W_R(c, 13));
L_c8780:;
  /* c8780: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* c8784: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* c8788: b.le #0xc885c */
  if (ARC_COND(c, 13)) goto L_c885c;
L_c878c:;
  /* c878c: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* c8790: b.lo #0xc8780 */
  if (ARC_COND(c, 3)) goto L_c8780;
  /* c8794: mov w12, #1 */
  ARC_W_W(c, 12, UINT64_C(1));
  /* c8798: lsl x11, x10, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* c879c: bfi x12, x10, #1, #0x3e */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 12)) & UINT64_C(9223372036854775809)) | ((((uint64_t)(ARC_X_R(c, 10))) & UINT64_C(4611686018427387903)) << 1)));
  /* c87a0: add x13, x11, #2 */
  ARC_X_W(c, 13, (ARC_X_R(c, 11) + UINT64_C(2)));
  /* c87a4: add x11, x19, x12, lsl #2 */
  ARC_X_W(c, 11, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 12)) << 2)));
  /* c87a8: cmp x13, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 8));
  /* c87ac: b.ge #0xc87d0 */
  if (ARC_COND(c, 10)) goto L_c87d0;
  /* c87b0: mov x14, x11 */
  ARC_X_W(c, 14, ARC_X_R(c, 11));
  /* c87b4: ldr w15, [x11] */
  ARC_W_W(c, 15, arc_ld32(ARC_X_R(c, 11)));
  /* c87b8: ldr w16, [x14, #4]! */
  { const uint64_t _a = (ARC_X_R(c, 14) + INT64_C(4));
    ARC_X_W(c, 14, ARC_X_R(c, 14) + INT64_C(4));
    ARC_W_W(c, 16, arc_ld32(_a));
  }
  /* c87bc: cmp w15, w16 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 16));
  /* c87c0: csel w15, w15, w16, gt */
  ARC_W_W(c, 15, (ARC_COND(c, 12) ? (ARC_W_R(c, 15)) : ARC_W_R(c, 16)));
  /* c87c4: csel x11, x14, x11, lt */
  ARC_X_W(c, 11, (ARC_COND(c, 11) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* c87c8: csel x12, x13, x12, lt */
  ARC_X_W(c, 12, (ARC_COND(c, 11) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 12)));
  /* c87cc: b #0xc87d4 */
  goto L_c87d4;
L_c87d0:;
  /* c87d0: ldr w15, [x11] */
  ARC_W_W(c, 15, arc_ld32(ARC_X_R(c, 11)));
L_c87d4:;
  /* c87d4: add x14, x19, x10, lsl #2 */
  ARC_X_W(c, 14, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 10)) << 2)));
  /* c87d8: ldr w13, [x14] */
  ARC_W_W(c, 13, arc_ld32(ARC_X_R(c, 14)));
  /* c87dc: cmp w15, w13 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 13));
  /* c87e0: b.ge #0xc880c */
  if (ARC_COND(c, 10)) goto L_c880c;
  /* c87e4: b #0xc8780 */
  goto L_c8780;
L_c87e8:;
  /* c87e8: mov x17, x11 */
  ARC_X_W(c, 17, ARC_X_R(c, 11));
  /* c87ec: ldr w15, [x11] */
  ARC_W_W(c, 15, arc_ld32(ARC_X_R(c, 11)));
  /* c87f0: ldr w0, [x17, #4]! */
  { const uint64_t _a = (ARC_X_R(c, 17) + INT64_C(4));
    ARC_X_W(c, 17, ARC_X_R(c, 17) + INT64_C(4));
    ARC_W_W(c, 0, arc_ld32(_a));
  }
  /* c87f4: cmp w15, w0 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 0));
  /* c87f8: csel w15, w15, w0, gt */
  ARC_W_W(c, 15, (ARC_COND(c, 12) ? (ARC_W_R(c, 15)) : ARC_W_R(c, 0)));
  /* c87fc: csel x11, x17, x11, lt */
  ARC_X_W(c, 11, (ARC_COND(c, 11) ? (ARC_X_R(c, 17)) : ARC_X_R(c, 11)));
  /* c8800: csel x12, x12, x16, lt */
  ARC_X_W(c, 12, (ARC_COND(c, 11) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 16)));
  /* c8804: cmp w15, w13 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 13));
  /* c8808: b.lt #0xc877c */
  if (ARC_COND(c, 11)) goto L_c877c;
L_c880c:;
  /* c880c: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* c8810: str w15, [x14] */
  arc_st32(ARC_X_R(c, 14), ARC_W_R(c, 15));
  /* c8814: mov x14, x11 */
  ARC_X_W(c, 14, ARC_X_R(c, 11));
  /* c8818: b.lt #0xc877c */
  if (ARC_COND(c, 11)) goto L_c877c;
  /* c881c: mov w16, #1 */
  ARC_W_W(c, 16, UINT64_C(1));
  /* c8820: lsl x11, x12, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 12)) << ((UINT64_C(1)) & 63)));
  /* c8824: bfi x16, x12, #1, #0x3e */
  ARC_X_W(c, 16, (((uint64_t)(ARC_X_R(c, 16)) & UINT64_C(9223372036854775809)) | ((((uint64_t)(ARC_X_R(c, 12))) & UINT64_C(4611686018427387903)) << 1)));
  /* c8828: add x12, x11, #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 11) + UINT64_C(2)));
  /* c882c: add x11, x19, x16, lsl #2 */
  ARC_X_W(c, 11, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 16)) << 2)));
  /* c8830: cmp x12, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 8));
  /* c8834: b.lt #0xc87e8 */
  if (ARC_COND(c, 11)) goto L_c87e8;
  /* c8838: ldr w15, [x11] */
  ARC_W_W(c, 15, arc_ld32(ARC_X_R(c, 11)));
  /* c883c: mov x12, x16 */
  ARC_X_W(c, 12, ARC_X_R(c, 16));
  /* c8840: cmp w15, w13 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 13));
  /* c8844: b.ge #0xc880c */
  if (ARC_COND(c, 10)) goto L_c880c;
  /* c8848: b #0xc877c */
  goto L_c877c;
L_c884c:;
  /* c884c: str w10, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 10));
L_c8850:;
  /* c8850: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* c8854: sub x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* c8858: b.le #0xc86b8 */
  if (ARC_COND(c, 13)) goto L_c86b8;
L_c885c:;
  /* c885c: sub x9, x8, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(2)));
  /* c8860: ldr w10, [x19] */
  ARC_W_W(c, 10, arc_ld32(ARC_X_R(c, 19)));
  /* c8864: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* c8868: lsr x11, x9, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* c886c: mov x12, x19 */
  ARC_X_W(c, 12, ARC_X_R(c, 19));
  /* c8870: b #0xc889c */
  goto L_c889c;
L_c8874:;
  /* c8874: ldr w13, [x16, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 16) + INT64_C(8));
    ARC_X_W(c, 16, ARC_X_R(c, 16) + INT64_C(8));
    ARC_W_W(c, 13, arc_ld32(_a));
  }
  /* c8878: ldur w15, [x16, #-4] */
  ARC_W_W(c, 15, arc_ld32((ARC_X_R(c, 16) + INT64_C(-4))));
  /* c887c: cmp w15, w13 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 13));
  /* c8880: csel w15, w15, w13, gt */
  ARC_W_W(c, 15, (ARC_COND(c, 12) ? (ARC_W_R(c, 15)) : ARC_W_R(c, 13)));
  /* c8884: csel x9, x16, x9, lt */
  ARC_X_W(c, 9, (ARC_COND(c, 11) ? (ARC_X_R(c, 16)) : ARC_X_R(c, 9)));
  /* c8888: csel x13, x17, x14, lt */
  ARC_X_W(c, 13, (ARC_COND(c, 11) ? (ARC_X_R(c, 17)) : ARC_X_R(c, 14)));
L_c888c:;
  /* c888c: cmp x13, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 11));
  /* c8890: str w15, [x12] */
  arc_st32(ARC_X_R(c, 12), ARC_W_R(c, 15));
  /* c8894: mov x12, x9 */
  ARC_X_W(c, 12, ARC_X_R(c, 9));
  /* c8898: b.gt #0xc88c8 */
  if (ARC_COND(c, 12)) goto L_c88c8;
L_c889c:;
  /* c889c: lsl x9, x13, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 13)) << ((UINT64_C(1)) & 63)));
  /* c88a0: add x16, x12, x13, lsl #2 */
  ARC_X_W(c, 16, (ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 13)) << 2)));
  /* c88a4: mov w14, #1 */
  ARC_W_W(c, 14, UINT64_C(1));
  /* c88a8: bfi x14, x13, #1, #0x3f */
  ARC_X_W(c, 14, (((uint64_t)(ARC_X_R(c, 14)) & UINT64_C(1)) | ((((uint64_t)(ARC_X_R(c, 13))) & UINT64_C(9223372036854775807)) << 1)));
  /* c88ac: add x17, x9, #2 */
  ARC_X_W(c, 17, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* c88b0: add x9, x16, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 16) + UINT64_C(4)));
  /* c88b4: cmp x17, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 17), ARC_X_R(c, 8));
  /* c88b8: b.lt #0xc8874 */
  if (ARC_COND(c, 11)) goto L_c8874;
  /* c88bc: ldr w15, [x9] */
  ARC_W_W(c, 15, arc_ld32(ARC_X_R(c, 9)));
  /* c88c0: mov x13, x14 */
  ARC_X_W(c, 13, ARC_X_R(c, 14));
  /* c88c4: b #0xc888c */
  goto L_c888c;
L_c88c8:;
  /* c88c8: sub x20, x20, #4 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) - UINT64_C(4)));
  /* c88cc: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c88d0: b.eq #0xc884c */
  if (ARC_COND(c, 0)) goto L_c884c;
  /* c88d4: sub x11, x9, x19 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) - ARC_X_R(c, 19)));
  /* c88d8: ldr w12, [x20] */
  ARC_W_W(c, 12, arc_ld32(ARC_X_R(c, 20)));
  /* c88dc: add x11, x11, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(4)));
  /* c88e0: asr x11, x11, #2 */
  ARC_X_W(c, 11, ((uint64_t)((int64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(2)) & 63))));
  /* c88e4: str w12, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 12));
  /* c88e8: str w10, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 10));
  /* c88ec: subs x11, x11, #2 */
  ARC_X_W(c, 11, arc_sub64(c, ARC_X_R(c, 11), UINT64_C(2)));
  /* c88f0: b.lt #0xc8850 */
  if (ARC_COND(c, 11)) goto L_c8850;
  /* c88f4: lsr x10, x11, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(1)) & 63)));
  /* c88f8: ldr w11, [x9] */
  ARC_W_W(c, 11, arc_ld32(ARC_X_R(c, 9)));
  /* c88fc: add x12, x19, x10, lsl #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 10)) << 2)));
  /* c8900: ldr w13, [x12] */
  ARC_W_W(c, 13, arc_ld32(ARC_X_R(c, 12)));
  /* c8904: cmp w13, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 11));
  /* c8908: b.ge #0xc8850 */
  if (ARC_COND(c, 10)) goto L_c8850;
L_c890c:;
  /* c890c: mov x14, x9 */
  ARC_X_W(c, 14, ARC_X_R(c, 9));
  /* c8910: mov x9, x12 */
  ARC_X_W(c, 9, ARC_X_R(c, 12));
  /* c8914: str w13, [x14] */
  arc_st32(ARC_X_R(c, 14), ARC_W_R(c, 13));
  /* c8918: cbz x10, #0xc8934 */
  if ((ARC_X_R(c, 10)) == 0) goto L_c8934;
  /* c891c: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* c8920: lsr x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* c8924: add x12, x19, x10, lsl #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 10)) << 2)));
  /* c8928: ldr w13, [x12] */
  ARC_W_W(c, 13, arc_ld32(ARC_X_R(c, 12)));
  /* c892c: cmp w13, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 11));
  /* c8930: b.lt #0xc890c */
  if (ARC_COND(c, 11)) goto L_c890c;
L_c8934:;
  /* c8934: str w11, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 11));
  /* c8938: b #0xc8850 */
  goto L_c8850;
L_c893c:;
  /* c893c: tbz w8, #0, #0xc8950 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_c8950;
  /* c8940: b #0xc86b8 */
  goto L_c86b8;
L_c8944:;
  /* c8944: add x9, x19, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* c8948: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c894c: b.eq #0xc86b8 */
  if (ARC_COND(c, 0)) goto L_c86b8;
L_c8950:;
  /* c8950: ldp w10, w8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_W_W(c, 10, arc_ld32(_pa));
    ARC_W_W(c, 8, arc_ld32(_pa + 4));
  }
  /* c8954: mov x19, x9 */
  ARC_X_W(c, 19, ARC_X_R(c, 9));
  /* c8958: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c895c: b.ge #0xc8944 */
  if (ARC_COND(c, 10)) goto L_c8944;
  /* c8960: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
L_c8964:;
  /* c8964: str w10, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 10));
  /* c8968: ldur w10, [x9, #-8] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(-8))));
  /* c896c: sub x9, x9, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(4)));
  /* c8970: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c8974: b.lt #0xc8964 */
  if (ARC_COND(c, 11)) goto L_c8964;
  /* c8978: str w8, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 8));
  /* c897c: b #0xc8944 */
  goto L_c8944;
}

void fn1_d72fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038809340));
  /* d72fc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d7300: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* d7304: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d7308: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* d730c: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* d7310: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d7314: bl #0x142a28 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(881432));
  fn1_142a28(c);
  /* d7318: cbnz w0, #0xd733c */
  if ((ARC_W_R(c, 0)) != 0) goto L_d733c;
  /* d731c: ldp x8, x10, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* d7320: mov w9, #0xca00 */
  ARC_W_W(c, 9, UINT64_C(51712));
  /* d7324: movk w9, #0x3b9a, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(999948288)));
  /* d7328: madd x0, x8, x9, x10 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 10)) + ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9)))));
  /* d732c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d7330: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* d7334: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d7338: ret  */
  return;
L_d733c:;
  /* d733c: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(881472));
  fn1_142a58(c);
  /* d7340: ldr w0, [x0] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 0)));
  /* d7344: adrp x1, #0x4f000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(323584)));
  /* d7348: add x1, x1, #0xef2 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3826)));
  /* d734c: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(881488));
  fn1_142a40(c);
  /* d7350: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(881492));
  fn1_a1454(c);
}

void fn1_db190(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038825360));
  /* db190: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* db194: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* db198: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* db19c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* db1a0: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* db1a4: str xzr, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 31));
  /* db1a8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* db1ac: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* db1b0: mov w2, #0x90 */
  ARC_W_W(c, 2, UINT64_C(144));
  /* db1b4: bl #0x142818 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(897464));
  fn1_142818(c);
  /* db1b8: ldr x19, [sp, #8] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(8))));
  /* db1bc: cbnz x19, #0xdb1d4 */
  if ((ARC_X_R(c, 19)) != 0) goto L_db1d4;
  /* db1c0: mov w0, #0x90 */
  ARC_W_W(c, 0, UINT64_C(144));
  /* db1c4: bl #0xa24dc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(897480));
  fn1_a24dc(c);
  /* db1c8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* db1cc: cbnz x0, #0xdb1d4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_db1d4;
  /* db1d0: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(897492));
  fn1_142488(c);
L_db1d4:;
  /* db1d4: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* db1d8: mov x20, x19 */
  ARC_X_W(c, 20, ARC_X_R(c, 19));
  /* db1dc: stp q0, q0, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* db1e0: stp q0, q0, [x19, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* db1e4: stp q0, q0, [x19, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(64));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* db1e8: stp q0, q0, [x19, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(96));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* db1ec: str q0, [x20, #0x80]! */
  arc_st64((ARC_X_R(c, 20) + INT64_C(128)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(128)) + 8, (c)->q[0].u64[1]);
  ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(128));
  /* db1f0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* db1f4: bl #0xdb25c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(897528));
  fn1_db25c(c);
  /* db1f8: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* db1fc: adrp x2, #0x151000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1380352)));
  /* db200: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* db204: ldr x1, [x1, #0x958] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2392))));
  /* db208: ldr x2, [x2, #0x980] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 2) + INT64_C(2432))));
  /* db20c: bl #0x142440 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(897552));
  fn1_142440(c);
  /* db210: nop  */
  /* nop: no architectural effect here */
  /* db214: adr x8, #0x1576e0 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1406688)));
  /* db218: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* db21c: cmp x19, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* db220: b.lo #0xdb244 */
  if (ARC_COND(c, 3)) goto L_db244;
  /* db224: adrp x8, #0x157000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404928)));
  /* db228: add x8, x8, #0x8e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2272)));
  /* db22c: cmp x19, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* db230: b.hs #0xdb244 */
  if (ARC_COND(c, 2)) goto L_db244;
  /* db234: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* db238: bl #0xa2664 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(897596));
  fn1_a2664(c);
  /* db23c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* db240: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(897604));
  fn1_9cc20(c);
L_db244:;
  /* db244: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* db248: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(897612));
  fn1_142800(c);
  /* db24c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* db250: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(897620));
  fn1_9cc20(c);
  /* db254: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(897624));
  fn1_a1454(c);
  /* db258: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(897628));
  fn1_a1454(c);
}

void fn1_dc400(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038830080));
  /* dc400: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* dc404: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* dc408: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* dc40c: bl #0x142c68 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(902160));
  fn1_142c68(c);
  /* dc410: bl #0x142c50 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(902164));
  fn1_142c50(c);
  /* dc414: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* dc418: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* dc41c: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* dc420: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* dc424: ret  */
  return;
}

void fn1_e16b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038851256));
  /* e16b8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e16bc: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e16c0: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e16c4: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e16c8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e16cc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e16d0: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e16d4: ldp x9, x11, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* e16d8: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e16dc: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e16e0: csinc x23, x11, x0, ne */
  ARC_X_W(c, 23, (ARC_COND(c, 1) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 0)) + 1)));
  /* e16e4: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e16e8: subs x8, x9, x2 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 2)));
  /* e16ec: b.hs #0xe16f8 */
  if (ARC_COND(c, 2)) goto L_e16f8;
  /* e16f0: mov x2, #-1 */
  ARC_X_W(c, 2, UINT64_C(18446744073709551615));
  /* e16f4: b #0xe171c */
  goto L_e171c;
L_e16f8:;
  /* e16f8: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* e16fc: cbz x3, #0xe171c */
  if ((ARC_X_R(c, 3)) == 0) goto L_e171c;
  /* e1700: cmp x8, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 19));
  /* e1704: add x24, x23, x9 */
  ARC_X_W(c, 24, (ARC_X_R(c, 23) + ARC_X_R(c, 9)));
  /* e1708: b.ge #0xe1738 */
  if (ARC_COND(c, 10)) goto L_e1738;
L_e170c:;
  /* e170c: mov x22, x24 */
  ARC_X_W(c, 22, ARC_X_R(c, 24));
L_e1710:;
  /* e1710: sub x8, x22, x23 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) - ARC_X_R(c, 23)));
  /* e1714: cmp x22, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 24));
  /* e1718: csinv x2, x8, xzr, ne */
  ARC_X_W(c, 2, (ARC_COND(c, 1) ? (ARC_X_R(c, 8)) : (~(uint64_t)(ARC_X_R(c, 31)))));
L_e171c:;
  /* e171c: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* e1720: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e1724: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e1728: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e172c: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e1730: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e1734: ret  */
  return;
L_e1738:;
  /* e1738: ldrb w21, [x1] */
  ARC_W_W(c, 21, arc_ld8(ARC_X_R(c, 1)));
  /* e173c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* e1740: add x0, x23, x2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + ARC_X_R(c, 2)));
L_e1744:;
  /* e1744: sub x8, x8, x19 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 19)));
  /* e1748: adds x2, x8, #1 */
  ARC_X_W(c, 2, arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0));
  /* e174c: b.hs #0xe170c */
  if (ARC_COND(c, 2)) goto L_e170c;
  /* e1750: mov w1, w21 */
  ARC_W_W(c, 1, ARC_W_R(c, 21));
  /* e1754: bl #0x1428d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(923480));
  fn1_1428d8(c);
  /* e1758: cbz x0, #0xe170c */
  if ((ARC_X_R(c, 0)) == 0) goto L_e170c;
  /* e175c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* e1760: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* e1764: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* e1768: bl #0x142890 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(923500));
  fn1_142890(c);
  /* e176c: cbz w0, #0xe1710 */
  if ((ARC_W_R(c, 0)) == 0) goto L_e1710;
  /* e1770: add x0, x22, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* e1774: sub x8, x24, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) - ARC_X_R(c, 0)));
  /* e1778: cmp x8, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 19));
  /* e177c: b.ge #0xe1744 */
  if (ARC_COND(c, 10)) goto L_e1744;
  /* e1780: b #0xe170c */
  goto L_e170c;
}

void fn1_e4170(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038862192));
  /* e4170: bti c */
  /* bti: no architectural effect here */
  /* e4174: ldrb w8, [x2] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 2)));
  /* e4178: ldr x9, [x2, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 2) + INT64_C(8))));
  /* e417c: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e4180: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e4184: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e4188: subs x9, x9, x3 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 3)));
  /* e418c: b.lo #0xe41b0 */
  if (ARC_COND(c, 3)) goto L_e41b0;
  /* e4190: ldr x10, [x2, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 2) + INT64_C(16))));
  /* e4194: add x11, x2, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 2) + UINT64_C(4)));
  /* e4198: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e419c: csel x8, x11, x10, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* e41a0: cmp x9, x4 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 4));
  /* e41a4: add x2, x8, x3, lsl #2 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 3)) << 2)));
  /* e41a8: csel x3, x9, x4, lo */
  ARC_X_W(c, 3, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 4)));
  /* e41ac: b #0x142d88 */
  fn1_142d88(c); return;
L_e41b0:;
  /* e41b0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e41b4: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e41b8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e41bc: bl #0xe1f80 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(934336));
  fn1_e1f80(c);
}

void fn1_e894c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038880588));
  /* e894c: bti c */
  /* bti: no architectural effect here */
  /* e8950: mov w1, #8 */
  ARC_W_W(c, 1, UINT64_C(8));
  /* e8954: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_eacd0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038889680));
  /* eacd0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eacd4: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* eacd8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eacdc: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* eace0: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* eace4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* eace8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* eacec: bl #0x143250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961776));
  fn1_143250(c);
  /* eacf0: cbnz w0, #0xead38 */
  if ((ARC_W_R(c, 0)) != 0) goto L_ead38;
  /* eacf4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* eacf8: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* eacfc: bl #0x143268 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961792));
  fn1_143268(c);
  /* ead00: cbnz w0, #0xead40 */
  if ((ARC_W_R(c, 0)) != 0) goto L_ead40;
  /* ead04: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* ead08: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ead0c: bl #0x143298 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961808));
  fn1_143298(c);
  /* ead10: mov w20, w0 */
  ARC_W_W(c, 20, ARC_W_R(c, 0));
  /* ead14: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* ead18: bl #0x143280 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961820));
  fn1_143280(c);
  /* ead1c: cbnz w20, #0xead50 */
  if ((ARC_W_R(c, 20)) != 0) goto L_ead50;
  /* ead20: cbnz w0, #0xead58 */
  if ((ARC_W_R(c, 0)) != 0) goto L_ead58;
  /* ead24: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ead28: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ead2c: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* ead30: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ead34: ret  */
  return;
L_ead38:;
  /* ead38: str w0, [sp, #4] */
  arc_st32(((c)->sp + INT64_C(4)), ARC_W_R(c, 0));
  /* ead3c: b #0xead64 */
  goto L_ead64;
L_ead40:;
  /* ead40: str w0, [sp, #4] */
  arc_st32(((c)->sp + INT64_C(4)), ARC_W_R(c, 0));
  /* ead44: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* ead48: bl #0x143280 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961868));
  fn1_143280(c);
  /* ead4c: b #0xead64 */
  goto L_ead64;
L_ead50:;
  /* ead50: str w20, [sp, #4] */
  arc_st32(((c)->sp + INT64_C(4)), ARC_W_R(c, 20));
  /* ead54: b #0xead64 */
  goto L_ead64;
L_ead58:;
  /* ead58: str w0, [sp, #4] */
  arc_st32(((c)->sp + INT64_C(4)), ARC_W_R(c, 0));
  /* ead5c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ead60: bl #0x143220 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961892));
  fn1_143220(c);
L_ead64:;
  /* ead64: ldr w0, [sp, #4] */
  ARC_W_W(c, 0, arc_ld32(((c)->sp + INT64_C(4))));
  /* ead68: adrp x1, #0x50000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(327680)));
  /* ead6c: add x1, x1, #0x386 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(902)));
  /* ead70: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961908));
  fn1_142a40(c);
}

void fn1_ec6e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038896352));
  /* ec6e0: bti c */
  /* bti: no architectural effect here */
  /* ec6e4: ldr x8, [x0, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(40))));
  /* ec6e8: ldr w9, [x0, #0x24] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 0) + INT64_C(36))));
  /* ec6ec: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* ec6f0: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* ec6f4: orr w8, w1, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 1) | ARC_W_R(c, 8)));
  /* ec6f8: tst w8, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 9)));
  /* ec6fc: str w8, [x0, #0x20] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(32)), ARC_W_R(c, 8));
  /* ec700: b.ne #0xec708 */
  if (ARC_COND(c, 1)) goto L_ec708;
  /* ec704: ret  */
  return;
L_ec708:;
  /* ec708: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ec70c: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ec710: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ec714: nop  */
  /* nop: no architectural effect here */
  /* ec718: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* ec71c: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(968480));
  fn1_ec720(c);
}

void fn1_ee16c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038903148));
  /* ee16c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ee170: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* ee174: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ee178: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ee17c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ee180: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* ee184: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ee188: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* ee18c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* ee190: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* ee194: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* ee198: stur wzr, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 31));
  /* ee19c: bl #0x1435f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(975264));
  fn1_1435f8(c);
  /* ee1a0: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* ee1a4: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* ee1a8: b.ne #0xee270 */
  if (ARC_COND(c, 1)) goto L_ee270;
  /* ee1ac: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ee1b0: nop  */
  /* nop: no architectural effect here */
  /* ee1b4: adr x22, #0x15dc40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432640)));
  /* ee1b8: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ee1bc: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ee1c0: ldr x20, [x8, #0x30] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* ee1c4: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* ee1c8: str x20, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 20));
  /* ee1cc: b.eq #0xee1dc */
  if (ARC_COND(c, 0)) goto L_ee1dc;
  /* ee1d0: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* ee1d4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ee1d8: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(975324));
  fn1_db2e0(c);
L_ee1dc:;
  /* ee1dc: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* ee1e0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* ee1e4: ldr x1, [x1, #0xb48] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2888))));
  /* ee1e8: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(975340));
  fn1_143748(c);
  /* ee1ec: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ee1f0: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* ee1f4: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ee1f8: add x3, x19, x8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ee1fc: ldr x8, [x9, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(24))));
  /* ee200: ldr x1, [x3, #0x28] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 3) + INT64_C(40))));
  /* ee204: sub x4, x29, #4 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* ee208: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* ee20c: mov x5, x21 */
  ARC_X_W(c, 5, ARC_X_R(c, 21));
  /* ee210: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(975380));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ee214: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* ee218: b.eq #0xee23c */
  if (ARC_COND(c, 0)) goto L_ee23c;
  /* ee21c: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* ee220: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ee224: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(975400));
  fn1_bd950(c);
  /* ee228: cbnz x0, #0xee23c */
  if ((ARC_X_R(c, 0)) != 0) goto L_ee23c;
  /* ee22c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* ee230: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ee234: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ee238: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(975420));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ee23c:;
  /* ee23c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ee240: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* ee244: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ee248: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ee24c: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* ee250: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* ee254: ldp w11, w9, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* ee258: orr w10, w11, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* ee25c: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* ee260: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* ee264: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* ee268: str w10, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 10));
  /* ee26c: b.ne #0xee28c */
  if (ARC_COND(c, 1)) goto L_ee28c;
L_ee270:;
  /* ee270: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ee274: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ee278: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ee27c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ee280: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* ee284: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ee288: ret  */
  return;
L_ee28c:;
  /* ee28c: nop  */
  /* nop: no architectural effect here */
  /* ee290: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* ee294: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(975512));
  fn1_ec720(c);
  /* ee298: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* ee29c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ee2a0: b.eq #0xee2c4 */
  if (ARC_COND(c, 0)) goto L_ee2c4;
  /* ee2a4: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* ee2a8: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ee2ac: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(975536));
  fn1_bd950(c);
  /* ee2b0: cbnz x0, #0xee2c4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_ee2c4;
  /* ee2b4: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* ee2b8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ee2bc: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ee2c0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(975556));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ee2c4:;
  /* ee2c4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ee2c8: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(975564));
  fn1_142548(c);
  /* ee2cc: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ee2d0: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* ee2d4: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ee2d8: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* ee2dc: stur w10, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 10));
  /* ee2e0: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* ee2e4: ldr w11, [x9, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* ee2e8: orr w11, w11, w10 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* ee2ec: str w11, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 11));
  /* ee2f0: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ee2f4: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ee2f8: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* ee2fc: tbnz w8, #0, #0xee308 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_ee308;
  /* ee300: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(975620));
  fn1_142980(c);
  /* ee304: b #0xee23c */
  goto L_ee23c;
L_ee308:;
  /* ee308: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(975628));
  fn1_1429b0(c);
  /* ee30c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ee310: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(975636));
  fn1_142980(c);
  /* ee314: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ee318: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(975644));
  fn1_9cc20(c);
  /* ee31c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(975648));
  fn1_a1454(c);
}

void fn1_f3708(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038925064));
  /* f3708: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f370c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f3710: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* f3714: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f3718: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f371c: ldr x8, [x1, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* f3720: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* f3724: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f3728: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* f372c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f3730: ldr x9, [x1, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* f3734: str xzr, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 31));
  /* f3738: mov x1, x2 */
  ARC_X_W(c, 1, ARC_X_R(c, 2));
  /* f373c: str x9, [x0, x8] */
  arc_st64((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_X_R(c, 9));
  /* f3740: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f3744: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f3748: add x21, x0, x8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* f374c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f3750: bl #0x1433d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(997204));
  fn1_1433d0(c);
  /* f3754: mov w8, #-1 */
  ARC_W_W(c, 8, UINT64_C(18446744073709551615));
  /* f3758: str xzr, [x21, #0x88] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(136)), ARC_X_R(c, 31));
  /* f375c: mov x9, x20 */
  ARC_X_W(c, 9, ARC_X_R(c, 20));
  /* f3760: str w8, [x21, #0x90] */
  arc_st32((ARC_X_R(c, 21) + INT64_C(144)), ARC_W_R(c, 8));
  /* f3764: ldr x8, [x19, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* f3768: str x8, [x9, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(16));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* f376c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f3770: ldr x10, [x19, #0x20] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* f3774: str x10, [x9, x8] */
  arc_st64((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_X_R(c, 10));
  /* f3778: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f377c: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* f3780: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f3784: ldr x10, [x19, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(40))));
  /* f3788: str x10, [x20, x8] */
  arc_st64((ARC_X_R(c, 20) + ARC_X_R(c, 8)), ARC_X_R(c, 10));
  /* f378c: ldr x8, [x19, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(48))));
  /* f3790: str x8, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* f3794: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f3798: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* f379c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f37a0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f37a4: ret  */
  return;
}

void fn1_f4ba0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038930336));
  /* f4ba0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f4ba4: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* f4ba8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f4bac: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f4bb0: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f4bb4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f4bb8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f4bbc: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* f4bc0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f4bc4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f4bc8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* f4bcc: stur wzr, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 31));
  /* f4bd0: bl #0x143670 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1002452));
  fn1_143670(c);
  /* f4bd4: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* f4bd8: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f4bdc: b.ne #0xf4ca4 */
  if (ARC_COND(c, 1)) goto L_f4ca4;
  /* f4be0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f4be4: nop  */
  /* nop: no architectural effect here */
  /* f4be8: adr x22, #0x15dc40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f4bec: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f4bf0: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f4bf4: ldr x20, [x8, #0x30] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f4bf8: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* f4bfc: str x20, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 20));
  /* f4c00: b.eq #0xf4c10 */
  if (ARC_COND(c, 0)) goto L_f4c10;
  /* f4c04: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* f4c08: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f4c0c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1002512));
  fn1_db2e0(c);
L_f4c10:;
  /* f4c10: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f4c14: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f4c18: ldr x1, [x1, #0xb60] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2912))));
  /* f4c1c: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1002528));
  fn1_143748(c);
  /* f4c20: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f4c24: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* f4c28: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f4c2c: add x3, x19, x8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f4c30: ldr x8, [x9, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(24))));
  /* f4c34: ldr x1, [x3, #0x28] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 3) + INT64_C(40))));
  /* f4c38: sub x4, x29, #4 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* f4c3c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* f4c40: mov x5, x21 */
  ARC_X_W(c, 5, ARC_X_R(c, 21));
  /* f4c44: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1002568));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f4c48: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* f4c4c: b.eq #0xf4c70 */
  if (ARC_COND(c, 0)) goto L_f4c70;
  /* f4c50: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* f4c54: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f4c58: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1002588));
  fn1_bd950(c);
  /* f4c5c: cbnz x0, #0xf4c70 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f4c70;
  /* f4c60: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* f4c64: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f4c68: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f4c6c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1002608));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f4c70:;
  /* f4c70: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f4c74: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* f4c78: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f4c7c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f4c80: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f4c84: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* f4c88: ldp w11, w9, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* f4c8c: orr w10, w11, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* f4c90: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* f4c94: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* f4c98: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* f4c9c: str w10, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 10));
  /* f4ca0: b.ne #0xf4cc0 */
  if (ARC_COND(c, 1)) goto L_f4cc0;
L_f4ca4:;
  /* f4ca4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f4ca8: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f4cac: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f4cb0: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f4cb4: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* f4cb8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f4cbc: ret  */
  return;
L_f4cc0:;
  /* f4cc0: nop  */
  /* nop: no architectural effect here */
  /* f4cc4: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f4cc8: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1002700));
  fn1_ec720(c);
  /* f4ccc: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* f4cd0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* f4cd4: b.eq #0xf4cf8 */
  if (ARC_COND(c, 0)) goto L_f4cf8;
  /* f4cd8: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* f4cdc: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f4ce0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1002724));
  fn1_bd950(c);
  /* f4ce4: cbnz x0, #0xf4cf8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f4cf8;
  /* f4ce8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* f4cec: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f4cf0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f4cf4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1002744));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f4cf8:;
  /* f4cf8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f4cfc: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1002752));
  fn1_142548(c);
  /* f4d00: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f4d04: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* f4d08: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f4d0c: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* f4d10: stur w10, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 10));
  /* f4d14: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f4d18: ldr w11, [x9, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f4d1c: orr w11, w11, w10 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* f4d20: str w11, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 11));
  /* f4d24: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f4d28: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f4d2c: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f4d30: tbnz w8, #0, #0xf4d3c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_f4d3c;
  /* f4d34: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1002808));
  fn1_142980(c);
  /* f4d38: b #0xf4c70 */
  goto L_f4c70;
L_f4d3c:;
  /* f4d3c: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1002816));
  fn1_1429b0(c);
  /* f4d40: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f4d44: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1002824));
  fn1_142980(c);
  /* f4d48: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f4d4c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1002832));
  fn1_9cc20(c);
  /* f4d50: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1002836));
  fn1_a1454(c);
}

void fn1_fa184(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038952324));
  /* fa184: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fa188: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* fa18c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fa190: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* fa194: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* fa198: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fa19c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* fa1a0: adrp x23, #0x151000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fa1a4: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* fa1a8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fa1ac: ldr x23, [x23, #0xaa8] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 23) + INT64_C(2728))));
  /* fa1b0: adrp x21, #0x15d000 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1429504)));
  /* fa1b4: nop  */
  /* nop: no architectural effect here */
  /* fa1b8: adr x22, #0x15dc40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432640)));
  /* fa1bc: add x8, x23, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) + UINT64_C(16)));
  /* fa1c0: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* fa1c4: nop  */
  /* nop: no architectural effect here */
  /* fa1c8: adr x8, #0x15dd90 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432976)));
  /* fa1cc: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* fa1d0: tbz w8, #0, #0xfa430 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_fa430;
L_fa1d4:;
  /* fa1d4: ldr x8, [x21, #0xd88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(3464))));
  /* fa1d8: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* fa1dc: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* fa1e0: b.eq #0xfa1f0 */
  if (ARC_COND(c, 0)) goto L_fa1f0;
  /* fa1e4: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* fa1e8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* fa1ec: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1024496));
  fn1_db2e0(c);
L_fa1f0:;
  /* fa1f0: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* fa1f4: mov x24, x19 */
  ARC_X_W(c, 24, ARC_X_R(c, 19));
  /* fa1f8: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fa1fc: str xzr, [x24, #0x40]! */
  { const uint64_t _a = (ARC_X_R(c, 24) + INT64_C(64));
    ARC_X_W(c, 24, ARC_X_R(c, 24) + INT64_C(64));
    arc_st64(_a, ARC_X_R(c, 31));
  }
  /* fa200: stp q0, q0, [x19, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* fa204: str q0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* fa208: ldr x8, [x8, #0xae0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2784))));
  /* fa20c: stp xzr, xzr, [x19, #0x48] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(72));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* fa210: ldr w9, [x20, #0x60] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 20) + INT64_C(96))));
  /* fa214: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* fa218: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* fa21c: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* fa220: str w9, [x19, #0x60] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(96)), ARC_W_R(c, 9));
  /* fa224: ldrb w10, [x8, #0x40]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(64));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(64));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* fa228: ldr x11, [x8, #0x10] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fa22c: ldur x9, [x8, #-0x30] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-48))));
  /* fa230: tst w10, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1)));
  /* fa234: csinc x10, x11, x8, ne */
  ARC_X_W(c, 10, (ARC_COND(c, 1) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 8)) + 1)));
  /* fa238: cbz x9, #0xfa268 */
  if ((ARC_X_R(c, 9)) == 0) goto L_fa268;
  /* fa23c: ldp x11, x13, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 13, arc_ld64(_pa + 8));
  }
  /* fa240: sub x12, x9, x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 9) - ARC_X_R(c, 10)));
  /* fa244: sub x11, x11, x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - ARC_X_R(c, 10)));
  /* fa248: sub x9, x13, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 13) - ARC_X_R(c, 10)));
  /* fa24c: ldr x13, [x20, #0x28] */
  ARC_X_W(c, 13, arc_ld64((ARC_X_R(c, 20) + INT64_C(40))));
  /* fa250: cbz x13, #0xfa27c */
  if ((ARC_X_R(c, 13)) == 0) goto L_fa27c;
L_fa254:;
  /* fa254: ldp x14, x15, [x20, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(48));
    ARC_X_W(c, 14, arc_ld64(_pa));
    ARC_X_W(c, 15, arc_ld64(_pa + 8));
  }
  /* fa258: sub x13, x13, x10 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - ARC_X_R(c, 10)));
  /* fa25c: sub x14, x14, x10 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - ARC_X_R(c, 10)));
  /* fa260: sub x15, x15, x10 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) - ARC_X_R(c, 10)));
  /* fa264: b #0xfa288 */
  goto L_fa288;
L_fa268:;
  /* fa268: mov x9, #-1 */
  ARC_X_W(c, 9, UINT64_C(18446744073709551615));
  /* fa26c: mov x11, #-1 */
  ARC_X_W(c, 11, UINT64_C(18446744073709551615));
  /* fa270: mov x12, #-1 */
  ARC_X_W(c, 12, UINT64_C(18446744073709551615));
  /* fa274: ldr x13, [x20, #0x28] */
  ARC_X_W(c, 13, arc_ld64((ARC_X_R(c, 20) + INT64_C(40))));
  /* fa278: cbnz x13, #0xfa254 */
  if ((ARC_X_R(c, 13)) != 0) goto L_fa254;
L_fa27c:;
  /* fa27c: mov x13, #-1 */
  ARC_X_W(c, 13, UINT64_C(18446744073709551615));
  /* fa280: mov x14, #-1 */
  ARC_X_W(c, 14, UINT64_C(18446744073709551615));
  /* fa284: mov x15, #-1 */
  ARC_X_W(c, 15, UINT64_C(18446744073709551615));
L_fa288:;
  /* fa288: ldr x16, [x8, #0x10] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fa28c: ldr q0, [x8] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 8)), arc_ld64(ARC_X_R(c, 8) + 8));
  /* fa290: add x0, x19, #0x41 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(65)));
  /* fa294: ldr x17, [x20, #0x58] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 20) + INT64_C(88))));
  /* fa298: str x16, [x24, #0x10] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(16)), ARC_X_R(c, 16));
  /* fa29c: str q0, [x24] */
  arc_st64(ARC_X_R(c, 24), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 24) + 8, (c)->q[0].u64[1]);
  /* fa2a0: sub x10, x17, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 17) - ARC_X_R(c, 10)));
  /* fa2a4: cmp x17, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 17), UINT64_C(0));
  /* fa2a8: strh wzr, [x20, #0x40] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(64)), ARC_W_R(c, 31));
  /* fa2ac: csinv x10, x10, xzr, ne */
  ARC_X_W(c, 10, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : (~(uint64_t)(ARC_X_R(c, 31)))));
  /* fa2b0: ldrb w16, [x19, #0x40] */
  ARC_W_W(c, 16, arc_ld8((ARC_X_R(c, 19) + INT64_C(64))));
  /* fa2b4: ldr x17, [x19, #0x50] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 19) + INT64_C(80))));
  /* fa2b8: tst w16, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 16) & UINT64_C(1)));
  /* fa2bc: csel x16, x0, x17, eq */
  ARC_X_W(c, 16, (ARC_COND(c, 0) ? (ARC_X_R(c, 0)) : ARC_X_R(c, 17)));
  /* fa2c0: cmn x12, #1 */
  (void)arc_add64(c, ARC_X_R(c, 12), UINT64_C(1), 0);
  /* fa2c4: b.eq #0xfa2dc */
  if (ARC_COND(c, 0)) goto L_fa2dc;
  /* fa2c8: add x12, x16, x12 */
  ARC_X_W(c, 12, (ARC_X_R(c, 16) + ARC_X_R(c, 12)));
  /* fa2cc: add x11, x16, x11 */
  ARC_X_W(c, 11, (ARC_X_R(c, 16) + ARC_X_R(c, 11)));
  /* fa2d0: add x9, x16, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 16) + ARC_X_R(c, 9)));
  /* fa2d4: stp x12, x11, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 12));
    arc_st64(_pa + 8, ARC_X_R(c, 11));
  }
  /* fa2d8: str x9, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 9));
L_fa2dc:;
  /* fa2dc: cmn x13, #1 */
  (void)arc_add64(c, ARC_X_R(c, 13), UINT64_C(1), 0);
  /* fa2e0: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* fa2e4: b.eq #0xfa2fc */
  if (ARC_COND(c, 0)) goto L_fa2fc;
  /* fa2e8: add x9, x16, x15 */
  ARC_X_W(c, 9, (ARC_X_R(c, 16) + ARC_X_R(c, 15)));
  /* fa2ec: add x11, x16, x13 */
  ARC_X_W(c, 11, (ARC_X_R(c, 16) + ARC_X_R(c, 13)));
  /* fa2f0: str x9, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), ARC_X_R(c, 9));
  /* fa2f4: add x9, x11, x14 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) + ARC_X_R(c, 14)));
  /* fa2f8: stp x11, x9, [x19, #0x28] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
L_fa2fc:;
  /* fa2fc: add x9, x16, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 16) + ARC_X_R(c, 10)));
  /* fa300: cmn x10, #1 */
  (void)arc_add64(c, ARC_X_R(c, 10), UINT64_C(1), 0);
  /* fa304: csel x9, xzr, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 9)));
  /* fa308: str x9, [x19, #0x58] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(88)), ARC_X_R(c, 9));
  /* fa30c: ldrb w9, [x20, #0x40] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 20) + INT64_C(64))));
  /* fa310: ldr x10, [x20, #0x50] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 20) + INT64_C(80))));
  /* fa314: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* fa318: csel x9, x8, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* fa31c: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* fa320: stp x9, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* fa324: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* fa328: stp x9, x9, [x20, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* fa32c: stp x9, x9, [x20, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* fa330: str x9, [x20, #0x58] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(88)), ARC_X_R(c, 9));
  /* fa334: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* fa338: b.eq #0xfa348 */
  if (ARC_COND(c, 0)) goto L_fa348;
  /* fa33c: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* fa340: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* fa344: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1024840));
  fn1_db2e0(c);
L_fa348:;
  /* fa348: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* fa34c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fa350: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* fa354: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fa358: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1024860));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* fa35c: ldr x20, [x19, #8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* fa360: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* fa364: b.eq #0xfa374 */
  if (ARC_COND(c, 0)) goto L_fa374;
  /* fa368: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* fa36c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* fa370: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1024884));
  fn1_db2e0(c);
L_fa374:;
  /* fa374: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* fa378: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* fa37c: b.eq #0xfa38c */
  if (ARC_COND(c, 0)) goto L_fa38c;
  /* fa380: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* fa384: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* fa388: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1024908));
  fn1_db2e0(c);
L_fa38c:;
  /* fa38c: ldr x21, [x19, #8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* fa390: cmp x21, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 22));
  /* fa394: b.eq #0xfa3b8 */
  if (ARC_COND(c, 0)) goto L_fa3b8;
  /* fa398: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* fa39c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fa3a0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1024932));
  fn1_bd950(c);
  /* fa3a4: cbnz x0, #0xfa3b8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_fa3b8;
  /* fa3a8: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* fa3ac: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* fa3b0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fa3b4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1024952));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fa3b8:;
  /* fa3b8: ldr x21, [sp, #8] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(8))));
  /* fa3bc: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* fa3c0: str x21, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 21));
  /* fa3c4: b.eq #0xfa3ec */
  if (ARC_COND(c, 0)) goto L_fa3ec;
  /* fa3c8: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* fa3cc: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fa3d0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1024980));
  fn1_bd950(c);
  /* fa3d4: cbnz x0, #0xfa3e8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_fa3e8;
  /* fa3d8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* fa3dc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fa3e0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fa3e4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1025000));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fa3e8:;
  /* fa3e8: ldr x21, [sp, #8] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(8))));
L_fa3ec:;
  /* fa3ec: cmp x21, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 22));
  /* fa3f0: b.eq #0xfa414 */
  if (ARC_COND(c, 0)) goto L_fa414;
  /* fa3f4: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* fa3f8: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fa3fc: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1025024));
  fn1_bd950(c);
  /* fa400: cbnz x0, #0xfa414 */
  if ((ARC_X_R(c, 0)) != 0) goto L_fa414;
  /* fa404: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* fa408: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* fa40c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fa410: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1025044));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fa414:;
  /* fa414: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fa418: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* fa41c: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* fa420: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fa424: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* fa428: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fa42c: ret  */
  return;
L_fa430:;
  /* fa430: nop  */
  /* nop: no architectural effect here */
  /* fa434: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* fa438: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1025084));
  fn1_1424b8(c);
  /* fa43c: cbz w0, #0xfa1d4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_fa1d4;
  /* fa440: bl #0x143ac0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1025092));
  fn1_143ac0(c);
  /* fa444: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* fa448: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* fa44c: str x8, [x21, #0xd88] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(3464)), ARC_X_R(c, 8));
  /* fa450: b.eq #0xfa460 */
  if (ARC_COND(c, 0)) goto L_fa460;
  /* fa454: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* fa458: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* fa45c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1025120));
  fn1_db2e0(c);
L_fa460:;
  /* fa460: nop  */
  /* nop: no architectural effect here */
  /* fa464: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* fa468: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1025132));
  fn1_1424d0(c);
  /* fa46c: b #0xfa1d4 */
  goto L_fa1d4;
  /* fa470: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fa474: nop  */
  /* nop: no architectural effect here */
  /* fa478: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* fa47c: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1025152));
  fn1_1424e8(c);
  /* fa480: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fa484: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1025160));
  fn1_a1454(c);
  /* fa488: ldr x21, [sp, #8] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(8))));
  /* fa48c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* fa490: cmp x21, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 22));
  /* fa494: b.eq #0xfa4b8 */
  if (ARC_COND(c, 0)) goto L_fa4b8;
  /* fa498: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* fa49c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fa4a0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1025188));
  fn1_bd950(c);
  /* fa4a4: cbnz x0, #0xfa4b8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_fa4b8;
  /* fa4a8: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* fa4ac: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* fa4b0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fa4b4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1025208));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fa4b8:;
  /* fa4b8: ldrb w8, [x24] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 24)));
  /* fa4bc: tbz w8, #0, #0xfa4d0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_fa4d0;
  /* fa4c0: ldr x8, [x19, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* fa4c4: ldr x0, [x19, #0x50] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(80))));
  /* fa4c8: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* fa4cc: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1025232));
  fn1_142608(c);
L_fa4d0:;
  /* fa4d0: ldr x21, [x19, #8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* fa4d4: add x8, x23, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) + UINT64_C(16)));
  /* fa4d8: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* fa4dc: cmp x21, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 22));
  /* fa4e0: b.eq #0xfa504 */
  if (ARC_COND(c, 0)) goto L_fa504;
  /* fa4e4: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* fa4e8: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fa4ec: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1025264));
  fn1_bd950(c);
  /* fa4f0: cbnz x0, #0xfa504 */
  if ((ARC_X_R(c, 0)) != 0) goto L_fa504;
  /* fa4f4: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* fa4f8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* fa4fc: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fa500: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1025284));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fa504:;
  /* fa504: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fa508: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1025292));
  fn1_9cc20(c);
}

void fn1_fe178(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038968696));
  /* fe178: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fe17c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fe180: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* fe184: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fe188: mov x8, x1 */
  ARC_X_W(c, 8, ARC_X_R(c, 1));
  /* fe18c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fe190: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fe194: ldr x1, [x1, #0xb70] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2928))));
  /* fe198: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* fe19c: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1040800));
  fn1_143748(c);
  /* fe1a0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* fe1a4: str x0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), ARC_X_R(c, 0));
  /* fe1a8: ldr x8, [x8, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* fe1ac: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1040816));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* fe1b0: ldr x8, [x19, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(72))));
  /* fe1b4: str w0, [x19, #0x58] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(88)), ARC_W_R(c, 0));
  /* fe1b8: ldr x9, [x8] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 8)));
  /* fe1bc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* fe1c0: ldr x9, [x9, #0x38] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(56))));
  /* fe1c4: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1040840));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* fe1c8: ldr w8, [x19, #0x58] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(88))));
  /* fe1cc: and w9, w0, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 0) & UINT64_C(1)));
  /* fe1d0: strb w9, [x19, #0x61] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(97)), ARC_W_R(c, 9));
  /* fe1d4: cmp w8, #9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(9));
  /* fe1d8: b.ge #0xfe1ec */
  if (ARC_COND(c, 10)) goto L_fe1ec;
  /* fe1dc: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* fe1e0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fe1e4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fe1e8: ret  */
  return;
L_fe1ec:;
  /* fe1ec: nop  */
  /* nop: no architectural effect here */
  /* fe1f0: adr x0, #0x51538 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(333112)));
  /* fe1f4: bl #0x142c98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1040888));
  fn1_142c98(c);
}

void fn1_109710(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039015184));
  /* 109710: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 109714: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 109718: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 10971c: stp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 109720: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 109724: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 109728: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 10972c: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 109730: mov x9, x0 */
  ARC_X_W(c, 9, ARC_X_R(c, 0));
  /* 109734: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* 109738: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 10973c: add x1, x9, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) + UINT64_C(48)));
  /* 109740: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* 109744: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 109748: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 10974c: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087312));
  fn1_143460(c);
  /* 109750: adrp x26, #0x151000 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 109754: ldr x26, [x26, #0xb58] */
  ARC_X_W(c, 26, arc_ld64((ARC_X_R(c, 26) + INT64_C(2904))));
  /* 109758: ldr x25, [sp, #8] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(8))));
  /* 10975c: ldar x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 109760: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 109764: b.eq #0x109820 */
  if (ARC_COND(c, 0)) goto L_109820;
  /* 109768: nop  */
  /* nop: no architectural effect here */
  /* 10976c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 109770: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087348));
  fn1_142518(c);
  /* 109774: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 109778: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 10977c: b.ne #0x1097a8 */
  if (ARC_COND(c, 1)) goto L_1097a8;
  /* 109780: nop  */
  /* nop: no architectural effect here */
  /* 109784: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 109788: nop  */
  /* nop: no architectural effect here */
  /* 10978c: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_109790:;
  /* 109790: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 109794: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 109798: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087388));
  fn1_142530(c);
  /* 10979c: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 1097a0: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1097a4: b.eq #0x109790 */
  if (ARC_COND(c, 0)) goto L_109790;
L_1097a8:;
  /* 1097a8: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 1097ac: cbz x8, #0x1097c0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1097c0;
  /* 1097b0: nop  */
  /* nop: no architectural effect here */
  /* 1097b4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1097b8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087420));
  fn1_142560(c);
  /* 1097bc: b #0x109820 */
  goto L_109820;
L_1097c0:;
  /* 1097c0: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 1097c4: str x26, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 26));
  /* 1097c8: strb wzr, [sp, #0x18] */
  arc_st8(((c)->sp + INT64_C(24)), ARC_W_R(c, 31));
  /* 1097cc: str x8, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 8));
  /* 1097d0: nop  */
  /* nop: no architectural effect here */
  /* 1097d4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1097d8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087452));
  fn1_142560(c);
  /* 1097dc: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1097e0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1097e4: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 1097e8: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087468));
  fn1_a2030(c);
  /* 1097ec: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 1097f0: str w8, [x26, #8] */
  arc_st32((ARC_X_R(c, 26) + INT64_C(8)), ARC_W_R(c, 8));
  /* 1097f4: nop  */
  /* nop: no architectural effect here */
  /* 1097f8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1097fc: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087488));
  fn1_142518(c);
  /* 109800: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 109804: stlr x8, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 8));
  /* 109808: nop  */
  /* nop: no architectural effect here */
  /* 10980c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 109810: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087508));
  fn1_142560(c);
  /* 109814: nop  */
  /* nop: no architectural effect here */
  /* 109818: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 10981c: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087520));
  fn1_142578(c);
L_109820:;
  /* 109820: ldp x8, x10, [x25, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 109824: ldrsw x9, [x26, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 26) + INT64_C(8)))));
  /* 109828: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 10982c: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 109830: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 109834: b.hs #0x1099b0 */
  if (ARC_COND(c, 2)) goto L_1099b0;
  /* 109838: ldr x0, [x8, x9, lsl #3] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 10983c: cbz x0, #0x1099b0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1099b0;
  /* 109840: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 109844: ldr x8, [x8, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(96))));
  /* 109848: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 10984c: mov x3, x22 */
  ARC_X_W(c, 3, ARC_X_R(c, 22));
  /* 109850: ldr x1, [x1, #0xbe0] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3040))));
  /* 109854: add x2, x1, #0x1c */
  ARC_X_W(c, 2, (ARC_X_R(c, 1) + UINT64_C(28)));
  /* 109858: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087580));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10985c: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 109860: ldr x25, [x25, #0xcb8] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(3256))));
  /* 109864: ldr x24, [sp, #8] */
  ARC_X_W(c, 24, arc_ld64(((c)->sp + INT64_C(8))));
  /* 109868: ldar x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 10986c: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 109870: b.eq #0x10992c */
  if (ARC_COND(c, 0)) goto L_10992c;
  /* 109874: nop  */
  /* nop: no architectural effect here */
  /* 109878: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10987c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087616));
  fn1_142518(c);
  /* 109880: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 109884: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 109888: b.ne #0x1098b4 */
  if (ARC_COND(c, 1)) goto L_1098b4;
  /* 10988c: nop  */
  /* nop: no architectural effect here */
  /* 109890: adr x22, #0x15791c */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 109894: nop  */
  /* nop: no architectural effect here */
  /* 109898: adr x23, #0x1578f4 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407220)));
L_10989c:;
  /* 10989c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1098a0: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 1098a4: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087656));
  fn1_142530(c);
  /* 1098a8: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 1098ac: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1098b0: b.eq #0x10989c */
  if (ARC_COND(c, 0)) goto L_10989c;
L_1098b4:;
  /* 1098b4: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 1098b8: cbz x8, #0x1098cc */
  if ((ARC_X_R(c, 8)) == 0) goto L_1098cc;
  /* 1098bc: nop  */
  /* nop: no architectural effect here */
  /* 1098c0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1098c4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087688));
  fn1_142560(c);
  /* 1098c8: b #0x10992c */
  goto L_10992c;
L_1098cc:;
  /* 1098cc: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 1098d0: str x25, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 25));
  /* 1098d4: strb wzr, [sp, #0x18] */
  arc_st8(((c)->sp + INT64_C(24)), ARC_W_R(c, 31));
  /* 1098d8: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 1098dc: nop  */
  /* nop: no architectural effect here */
  /* 1098e0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1098e4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087720));
  fn1_142560(c);
  /* 1098e8: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1098ec: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1098f0: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 1098f4: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087736));
  fn1_a2030(c);
  /* 1098f8: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 1098fc: str w8, [x25, #8] */
  arc_st32((ARC_X_R(c, 25) + INT64_C(8)), ARC_W_R(c, 8));
  /* 109900: nop  */
  /* nop: no architectural effect here */
  /* 109904: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 109908: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087756));
  fn1_142518(c);
  /* 10990c: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 109910: stlr x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 109914: nop  */
  /* nop: no architectural effect here */
  /* 109918: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10991c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087776));
  fn1_142560(c);
  /* 109920: nop  */
  /* nop: no architectural effect here */
  /* 109924: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 109928: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087788));
  fn1_142578(c);
L_10992c:;
  /* 10992c: ldp x8, x10, [x24, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 24) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 109930: ldrsw x9, [x25, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 25) + INT64_C(8)))));
  /* 109934: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 109938: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 10993c: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 109940: b.hs #0x1099b4 */
  if (ARC_COND(c, 2)) goto L_1099b4;
  /* 109944: ldr x22, [x8, x9, lsl #3] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 109948: cbz x22, #0x1099b4 */
  if ((ARC_X_R(c, 22)) == 0) goto L_1099b4;
  /* 10994c: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 109950: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 109954: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 109958: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087836));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10995c: str w0, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 0));
  /* 109960: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 109964: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 109968: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 10996c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087856));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 109970: str w0, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 0));
  /* 109974: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 109978: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* 10997c: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* 109980: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 109984: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087880));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 109988: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 10998c: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087888));
  fn1_143478(c);
  /* 109990: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 109994: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 109998: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 10999c: ldp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 1099a0: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1099a4: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 1099a8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1099ac: ret  */
  return;
L_1099b0:;
  /* 1099b0: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087924));
  fn1_fc3b8(c);
L_1099b4:;
  /* 1099b4: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087928));
  fn1_fc3b8(c);
  /* 1099b8: b #0x1099bc */
  goto L_1099bc;
L_1099bc:;
  /* 1099bc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1099c0: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1099c4: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087944));
  fn1_d2a78(c);
  /* 1099c8: b #0x1099dc */
  goto L_1099dc;
  /* 1099cc: b #0x1099d8 */
  goto L_1099d8;
  /* 1099d0: b #0x1099d8 */
  goto L_1099d8;
  /* 1099d4: b #0x1099d8 */
  goto L_1099d8;
L_1099d8:;
  /* 1099d8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_1099dc:;
  /* 1099dc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1099e0: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087972));
  fn1_143478(c);
  /* 1099e4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1099e8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087980));
  fn1_9cc20(c);
}

void fn1_1127b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039052216));
  /* 1127b8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1127bc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1127c0: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1127c4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1127c8: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* 1127cc: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 1127d0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1127d4: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 1127d8: mov x2, x4 */
  ARC_X_W(c, 2, ARC_X_R(c, 4));
  /* 1127dc: mov x3, x5 */
  ARC_X_W(c, 3, ARC_X_R(c, 5));
  /* 1127e0: mov w4, #3 */
  ARC_W_W(c, 4, UINT64_C(3));
  /* 1127e4: bl #0x112ec0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1124328));
  fn1_112ec0(c);
  /* 1127e8: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* 1127ec: cmp w0, #0x16d */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(365));
  /* 1127f0: b.gt #0x112800 */
  if (ARC_COND(c, 12)) goto L_112800;
  /* 1127f4: tbnz w8, #2, #0x112800 */
  if (((ARC_W_R(c, 8)) >> 2 & 1) != 0) goto L_112800;
  /* 1127f8: str w0, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 0));
  /* 1127fc: b #0x112808 */
  goto L_112808;
L_112800:;
  /* 112800: orr w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* 112804: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_112808:;
  /* 112808: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 11280c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 112810: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 112814: ret  */
  return;
}

void fn1_113f1c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039058204));
  /* 113f1c: bti c */
  /* bti: no architectural effect here */
  /* 113f20: mov x9, x0 */
  ARC_X_W(c, 9, ARC_X_R(c, 0));
  /* 113f24: ldrb w10, [x9, #0x30]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(48));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(48));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* 113f28: tbnz w10, #0, #0x113f40 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_113f40;
  /* 113f2c: ldr q0, [x9] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 9)), arc_ld64(ARC_X_R(c, 9) + 8));
  /* 113f30: ldr x9, [x9, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(16))));
  /* 113f34: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* 113f38: str x9, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 9));
  /* 113f3c: ret  */
  return;
L_113f40:;
  /* 113f40: ldp x2, x1, [x0, #0x38] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(56));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 113f44: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 113f48: b #0xda588 */
  fn1_da588(c); return;
}

void fn1_11e530(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039100720));
  /* 11e530: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 11e534: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 11e538: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 11e53c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 11e540: nop  */
  /* nop: no architectural effect here */
  /* 11e544: adr x8, #0x15dd80 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432960)));
  /* 11e548: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 11e54c: tbz w8, #0, #0x11e568 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_11e568;
L_11e550:;
  /* 11e550: nop  */
  /* nop: no architectural effect here */
  /* 11e554: adr x0, #0x15dd78 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432952)));
  /* 11e558: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 11e55c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 11e560: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 11e564: ret  */
  return;
L_11e568:;
  /* 11e568: nop  */
  /* nop: no architectural effect here */
  /* 11e56c: adr x0, #0x15dd80 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432960)));
  /* 11e570: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1172852));
  fn1_1424b8(c);
  /* 11e574: cbz w0, #0x11e550 */
  if ((ARC_W_R(c, 0)) == 0) goto L_11e550;
  /* 11e578: nop  */
  /* nop: no architectural effect here */
  /* 11e57c: adr x19, #0x15dc40 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1432640)));
  /* 11e580: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 11e584: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11e588: bl #0x11ae94 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1172876));
  fn1_11ae94(c);
  /* 11e58c: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 11e590: nop  */
  /* nop: no architectural effect here */
  /* 11e594: adr x0, #0x15dd80 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432960)));
  /* 11e598: str x19, [x8, #0xd78] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(3448)), ARC_X_R(c, 19));
  /* 11e59c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1172896));
  fn1_1424d0(c);
  /* 11e5a0: b #0x11e550 */
  goto L_11e550;
  /* 11e5a4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 11e5a8: nop  */
  /* nop: no architectural effect here */
  /* 11e5ac: adr x0, #0x15dd80 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432960)));
  /* 11e5b0: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1172916));
  fn1_1424e8(c);
  /* 11e5b4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11e5b8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1172924));
  fn1_9cc20(c);
}

void fn1_1263f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039133176));
  /* 1263f8: bti c */
  /* bti: no architectural effect here */
  /* 1263fc: cmp w2, #0x7f */
  (void)arc_sub32(c, ARC_W_R(c, 2), UINT64_C(127));
  /* 126400: b.hi #0x12641c */
  if (ARC_COND(c, 8)) goto L_12641c;
  /* 126404: nop  */
  /* nop: no architectural effect here */
  /* 126408: adr x8, #0x75c10 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(482320)));
  /* 12640c: ldr x8, [x8, w2, uxtw #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 2)))) << 3))));
  /* 126410: tst x8, x1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 8) & ARC_X_R(c, 1)));
  /* 126414: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 126418: ret  */
  return;
L_12641c:;
  /* 12641c: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 126420: ret  */
  return;
}

void fn1_1288bc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039142588));
  /* 1288bc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1288c0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1288c4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1288c8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1288cc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1288d0: bl #0x144000 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1214676));
  fn1_144000(c);
  /* 1288d4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1288d8: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* 1288dc: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1288e0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1288e4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1288e8: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_12a4a4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039149732));
  /* 12a4a4: bti c */
  /* bti: no architectural effect here */
  /* 12a4a8: sub x8, x3, x2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) - ARC_X_R(c, 2)));
  /* 12a4ac: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* 12a4b0: mov x8, x2 */
  ARC_X_W(c, 8, ARC_X_R(c, 2));
  /* 12a4b4: b.lt #0x12a4e4 */
  if (ARC_COND(c, 11)) goto L_12a4e4;
  /* 12a4b8: ldr w9, [x0, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 0) + INT64_C(32))));
  /* 12a4bc: mov x8, x2 */
  ARC_X_W(c, 8, ARC_X_R(c, 2));
  /* 12a4c0: tbz w9, #2, #0x12a4e4 */
  if (((ARC_W_R(c, 9)) >> 2 & 1) == 0) goto L_12a4e4;
  /* 12a4c4: ldrb w8, [x2] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 2)));
  /* 12a4c8: cmp w8, #0xfe */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(254));
  /* 12a4cc: mov x8, x2 */
  ARC_X_W(c, 8, ARC_X_R(c, 2));
  /* 12a4d0: b.ne #0x12a4e4 */
  if (ARC_COND(c, 1)) goto L_12a4e4;
  /* 12a4d4: ldrb w8, [x2, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 2) + INT64_C(1))));
  /* 12a4d8: cmp w8, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(255));
  /* 12a4dc: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 12a4e0: add x8, x2, w8, uxtw #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 2) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 1)));
L_12a4e4:;
  /* 12a4e4: cbz x4, #0x12a590 */
  if ((ARC_X_R(c, 4)) == 0) goto L_12a590;
  /* 12a4e8: sub x9, x3, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 3) - UINT64_C(1)));
  /* 12a4ec: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 12a4f0: b.hs #0x12a590 */
  if (ARC_COND(c, 2)) goto L_12a590;
  /* 12a4f4: ldr x10, [x0, #0x18] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12a4f8: mov w11, #1 */
  ARC_W_W(c, 11, UINT64_C(1));
  /* 12a4fc: mov w12, #0xd800 */
  ARC_W_W(c, 12, UINT64_C(55296));
  /* 12a500: mov w13, #0xdc00 */
  ARC_W_W(c, 13, UINT64_C(56320));
L_12a504:;
  /* 12a504: ldrb w16, [x8] */
  ARC_W_W(c, 16, arc_ld8(ARC_X_R(c, 8)));
  /* 12a508: ldrb w14, [x8, #1] */
  ARC_W_W(c, 14, arc_ld8((ARC_X_R(c, 8) + INT64_C(1))));
  /* 12a50c: lsl w15, w16, #8 */
  ARC_W_W(c, 15, ((uint32_t)(ARC_W_R(c, 16)) << ((UINT64_C(8)) & 31)));
  /* 12a510: bfi w14, w16, #8, #8 */
  ARC_W_W(c, 14, (((uint32_t)(ARC_W_R(c, 14)) & UINT64_C(4294902015)) | ((((uint32_t)(ARC_W_R(c, 16))) & UINT64_C(255)) << 8)));
  /* 12a514: and w15, w15, #0xfc00 */
  ARC_W_W(c, 15, (ARC_W_R(c, 15) & UINT64_C(64512)));
  /* 12a518: cmp w15, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 12));
  /* 12a51c: b.eq #0x12a544 */
  if (ARC_COND(c, 0)) goto L_12a544;
  /* 12a520: cmp w15, w13 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 13));
  /* 12a524: b.eq #0x12a590 */
  if (ARC_COND(c, 0)) goto L_12a590;
  /* 12a528: cmp x10, w14, uxtw */
  (void)arc_sub64(c, ARC_X_R(c, 10), ((uint64_t)(uint32_t)(ARC_W_R(c, 14))));
  /* 12a52c: cset w14, hs */
  ARC_W_W(c, 14, (ARC_COND(c, 2) ? 1 : 0));
  /* 12a530: add x8, x8, w14, uxtw #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 14)))) << 1)));
  /* 12a534: b.lo #0x12a590 */
  if (ARC_COND(c, 3)) goto L_12a590;
  /* 12a538: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 12a53c: b.lo #0x12a584 */
  if (ARC_COND(c, 3)) goto L_12a584;
  /* 12a540: b #0x12a590 */
  goto L_12a590;
L_12a544:;
  /* 12a544: sub x15, x3, x8 */
  ARC_X_W(c, 15, (ARC_X_R(c, 3) - ARC_X_R(c, 8)));
  /* 12a548: cmp x15, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(4));
  /* 12a54c: b.lt #0x12a590 */
  if (ARC_COND(c, 11)) goto L_12a590;
  /* 12a550: ldrb w15, [x8, #2] */
  ARC_W_W(c, 15, arc_ld8((ARC_X_R(c, 8) + INT64_C(2))));
  /* 12a554: and w16, w15, #0xfc */
  ARC_W_W(c, 16, (ARC_W_R(c, 15) & UINT64_C(252)));
  /* 12a558: cmp w16, #0xdc */
  (void)arc_sub32(c, ARC_W_R(c, 16), UINT64_C(220));
  /* 12a55c: b.ne #0x12a590 */
  if (ARC_COND(c, 1)) goto L_12a590;
  /* 12a560: ldrb w16, [x8, #3] */
  ARC_W_W(c, 16, arc_ld8((ARC_X_R(c, 8) + INT64_C(3))));
  /* 12a564: bfi w16, w15, #8, #2 */
  ARC_W_W(c, 16, (((uint32_t)(ARC_W_R(c, 16)) & UINT64_C(4294966527)) | ((((uint32_t)(ARC_W_R(c, 15))) & UINT64_C(3)) << 8)));
  /* 12a568: bfi w16, w14, #0xa, #0xa */
  ARC_W_W(c, 16, (((uint32_t)(ARC_W_R(c, 16)) & UINT64_C(4293919743)) | ((((uint32_t)(ARC_W_R(c, 14))) & UINT64_C(1023)) << 10)));
  /* 12a56c: add w14, w16, #0x10, lsl #12 */
  ARC_W_W(c, 14, (ARC_W_R(c, 16) + UINT64_C(65536)));
  /* 12a570: cmp x10, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 14));
  /* 12a574: b.lo #0x12a590 */
  if (ARC_COND(c, 3)) goto L_12a590;
  /* 12a578: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 12a57c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 12a580: b.hs #0x12a590 */
  if (ARC_COND(c, 2)) goto L_12a590;
L_12a584:;
  /* 12a584: cmp x11, x4 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 4));
  /* 12a588: add x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(1)));
  /* 12a58c: b.lo #0x12a504 */
  if (ARC_COND(c, 3)) goto L_12a504;
L_12a590:;
  /* 12a590: sub w0, w8, w2 */
  ARC_W_W(c, 0, (ARC_W_R(c, 8) - ARC_W_R(c, 2)));
  /* 12a594: ret  */
  return;
}

void fn1_12bbcc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039155660));
  /* 12bbcc: bti c */
  /* bti: no architectural effect here */
  /* 12bbd0: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 12bbd4: mov w8, #0x2c2e */
  ARC_W_W(c, 8, UINT64_C(11310));
  /* 12bbd8: ldr x9, [x9, #0xcc0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(3264))));
  /* 12bbdc: strh w8, [x0, #0x10] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(16)), ARC_W_R(c, 8));
  /* 12bbe0: sub x8, x1, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) - UINT64_C(1)));
  /* 12bbe4: stp xzr, xzr, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 12bbe8: add x9, x9, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* 12bbec: str xzr, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 31));
  /* 12bbf0: stp x9, x8, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 12bbf4: ret  */
  return;
}

void fn1_131d18(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039180568));
  /* 131d18: bti c */
  /* bti: no architectural effect here */
  /* 131d1c: ldrb w9, [x0, #0x3f8] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(1016))));
  /* 131d20: ldr x8, [x0, #0x400] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(1024))));
  /* 131d24: ldr x11, [x0, #0x408] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 0) + INT64_C(1032))));
  /* 131d28: lsr x10, x9, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 131d2c: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 131d30: csel x8, x10, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* 131d34: cbz x8, #0x131d6c */
  if ((ARC_X_R(c, 8)) == 0) goto L_131d6c;
  /* 131d38: add x12, x0, #0x3f9 */
  ARC_X_W(c, 12, (ARC_X_R(c, 0) + UINT64_C(1017)));
  /* 131d3c: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 131d40: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
  /* 131d44: mov w13, wzr */
  ARC_W_W(c, 13, ARC_W_R(c, 31));
  /* 131d48: csel x12, x12, x11, eq */
  ARC_X_W(c, 12, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
L_131d4c:;
  /* 131d4c: ldrb w10, [x12, x10] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 12) + ARC_X_R(c, 10))));
  /* 131d50: cmp w10, #0x25 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(37));
  /* 131d54: b.eq #0x131d74 */
  if (ARC_COND(c, 0)) goto L_131d74;
  /* 131d58: add w10, w13, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 13) + UINT64_C(1)));
  /* 131d5c: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 131d60: mov w13, w10 */
  ARC_W_W(c, 13, ARC_W_R(c, 10));
  /* 131d64: b.hi #0x131d4c */
  if (ARC_COND(c, 8)) goto L_131d4c;
  /* 131d68: b #0x131d78 */
  goto L_131d78;
L_131d6c:;
  /* 131d6c: mov w10, wzr */
  ARC_W_W(c, 10, ARC_W_R(c, 31));
  /* 131d70: b #0x131d78 */
  goto L_131d78;
L_131d74:;
  /* 131d74: mov w10, w13 */
  ARC_W_W(c, 10, ARC_W_R(c, 13));
L_131d78:;
  /* 131d78: add x12, x0, #0x3f9 */
  ARC_X_W(c, 12, (ARC_X_R(c, 0) + UINT64_C(1017)));
  /* 131d7c: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 131d80: add w13, w10, #1 */
  ARC_W_W(c, 13, (ARC_W_R(c, 10) + UINT64_C(1)));
  /* 131d84: csel x9, x12, x11, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* 131d88: ldrb w11, [x9, w13, uxtw] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 9) + ((uint64_t)(uint32_t)(ARC_W_R(c, 13))))));
  /* 131d8c: cmp w11, #0x6c */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(108));
  /* 131d90: b.gt #0x131e24 */
  if (ARC_COND(c, 12)) goto L_131e24;
  /* 131d94: cmp w11, #0x59 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(89));
  /* 131d98: b.eq #0x131e34 */
  if (ARC_COND(c, 0)) goto L_131e34;
  /* 131d9c: cmp w11, #0x64 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(100));
  /* 131da0: b.ne #0x131fa8 */
  if (ARC_COND(c, 1)) goto L_131fa8;
  /* 131da4: add w10, w10, #2 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(2)));
  /* 131da8: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 131dac: b.ls #0x131dc8 */
  if (ARC_COND(c, 9)) goto L_131dc8;
L_131db0:;
  /* 131db0: ldrb w11, [x9, x10] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 9) + ARC_X_R(c, 10))));
  /* 131db4: cmp w11, #0x25 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(37));
  /* 131db8: b.eq #0x131dc8 */
  if (ARC_COND(c, 0)) goto L_131dc8;
  /* 131dbc: add w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(1)));
  /* 131dc0: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 131dc4: b.hi #0x131db0 */
  if (ARC_COND(c, 8)) goto L_131db0;
L_131dc8:;
  /* 131dc8: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 131dcc: b.eq #0x131fa8 */
  if (ARC_COND(c, 0)) goto L_131fa8;
  /* 131dd0: add w11, w10, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 10) + UINT64_C(1)));
  /* 131dd4: ldrb w11, [x9, w11, uxtw] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 9) + ((uint64_t)(uint32_t)(ARC_W_R(c, 11))))));
  /* 131dd8: cmp w11, #0x6d */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(109));
  /* 131ddc: b.ne #0x131fa8 */
  if (ARC_COND(c, 1)) goto L_131fa8;
  /* 131de0: add w10, w10, #2 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(2)));
  /* 131de4: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 131de8: b.ls #0x131e04 */
  if (ARC_COND(c, 9)) goto L_131e04;
L_131dec:;
  /* 131dec: ldrb w11, [x9, x10] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 9) + ARC_X_R(c, 10))));
  /* 131df0: cmp w11, #0x25 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(37));
  /* 131df4: b.eq #0x131e04 */
  if (ARC_COND(c, 0)) goto L_131e04;
  /* 131df8: add w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(1)));
  /* 131dfc: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 131e00: b.hi #0x131dec */
  if (ARC_COND(c, 8)) goto L_131dec;
L_131e04:;
  /* 131e04: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 131e08: b.eq #0x131fa8 */
  if (ARC_COND(c, 0)) goto L_131fa8;
  /* 131e0c: add w8, w10, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 10) + UINT64_C(1)));
  /* 131e10: ldrb w10, [x9, w8, uxtw] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 9) + ((uint64_t)(uint32_t)(ARC_W_R(c, 8))))));
  /* 131e14: cmp w10, #0x79 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(121));
  /* 131e18: b.ne #0x131f80 */
  if (ARC_COND(c, 1)) goto L_131f80;
  /* 131e1c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 131e20: ret  */
  return;
L_131e24:;
  /* 131e24: cmp w11, #0x6d */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(109));
  /* 131e28: b.eq #0x131ebc */
  if (ARC_COND(c, 0)) goto L_131ebc;
  /* 131e2c: cmp w11, #0x79 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(121));
  /* 131e30: b.ne #0x131fa8 */
  if (ARC_COND(c, 1)) goto L_131fa8;
L_131e34:;
  /* 131e34: add w10, w10, #2 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(2)));
  /* 131e38: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 131e3c: b.ls #0x131e58 */
  if (ARC_COND(c, 9)) goto L_131e58;
L_131e40:;
  /* 131e40: ldrb w11, [x9, x10] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 9) + ARC_X_R(c, 10))));
  /* 131e44: cmp w11, #0x25 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(37));
  /* 131e48: b.eq #0x131e58 */
  if (ARC_COND(c, 0)) goto L_131e58;
  /* 131e4c: add w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(1)));
  /* 131e50: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 131e54: b.hi #0x131e40 */
  if (ARC_COND(c, 8)) goto L_131e40;
L_131e58:;
  /* 131e58: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 131e5c: b.eq #0x131fa8 */
  if (ARC_COND(c, 0)) goto L_131fa8;
  /* 131e60: add w11, w10, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 10) + UINT64_C(1)));
  /* 131e64: ldrb w11, [x9, w11, uxtw] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 9) + ((uint64_t)(uint32_t)(ARC_W_R(c, 11))))));
  /* 131e68: cmp w11, #0x64 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(100));
  /* 131e6c: b.eq #0x131f3c */
  if (ARC_COND(c, 0)) goto L_131f3c;
  /* 131e70: cmp w11, #0x6d */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(109));
  /* 131e74: b.ne #0x131fa8 */
  if (ARC_COND(c, 1)) goto L_131fa8;
  /* 131e78: add w10, w10, #2 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(2)));
  /* 131e7c: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 131e80: b.ls #0x131e9c */
  if (ARC_COND(c, 9)) goto L_131e9c;
L_131e84:;
  /* 131e84: ldrb w11, [x9, x10] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 9) + ARC_X_R(c, 10))));
  /* 131e88: cmp w11, #0x25 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(37));
  /* 131e8c: b.eq #0x131e9c */
  if (ARC_COND(c, 0)) goto L_131e9c;
  /* 131e90: add w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(1)));
  /* 131e94: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 131e98: b.hi #0x131e84 */
  if (ARC_COND(c, 8)) goto L_131e84;
L_131e9c:;
  /* 131e9c: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 131ea0: b.eq #0x131fa8 */
  if (ARC_COND(c, 0)) goto L_131fa8;
  /* 131ea4: add w8, w10, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 10) + UINT64_C(1)));
  /* 131ea8: ldrb w8, [x9, w8, uxtw] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + ((uint64_t)(uint32_t)(ARC_W_R(c, 8))))));
  /* 131eac: cmp w8, #0x64 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(100));
  /* 131eb0: b.ne #0x131fa8 */
  if (ARC_COND(c, 1)) goto L_131fa8;
  /* 131eb4: mov w0, #3 */
  ARC_W_W(c, 0, UINT64_C(3));
  /* 131eb8: ret  */
  return;
L_131ebc:;
  /* 131ebc: add w10, w10, #2 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(2)));
  /* 131ec0: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 131ec4: b.ls #0x131ee0 */
  if (ARC_COND(c, 9)) goto L_131ee0;
L_131ec8:;
  /* 131ec8: ldrb w11, [x9, x10] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 9) + ARC_X_R(c, 10))));
  /* 131ecc: cmp w11, #0x25 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(37));
  /* 131ed0: b.eq #0x131ee0 */
  if (ARC_COND(c, 0)) goto L_131ee0;
  /* 131ed4: add w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(1)));
  /* 131ed8: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 131edc: b.hi #0x131ec8 */
  if (ARC_COND(c, 8)) goto L_131ec8;
L_131ee0:;
  /* 131ee0: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 131ee4: b.eq #0x131fa8 */
  if (ARC_COND(c, 0)) goto L_131fa8;
  /* 131ee8: add w11, w10, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 10) + UINT64_C(1)));
  /* 131eec: ldrb w11, [x9, w11, uxtw] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 9) + ((uint64_t)(uint32_t)(ARC_W_R(c, 11))))));
  /* 131ef0: cmp w11, #0x64 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(100));
  /* 131ef4: b.ne #0x131fa8 */
  if (ARC_COND(c, 1)) goto L_131fa8;
  /* 131ef8: add w10, w10, #2 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(2)));
  /* 131efc: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 131f00: b.ls #0x131f1c */
  if (ARC_COND(c, 9)) goto L_131f1c;
L_131f04:;
  /* 131f04: ldrb w11, [x9, x10] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 9) + ARC_X_R(c, 10))));
  /* 131f08: cmp w11, #0x25 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(37));
  /* 131f0c: b.eq #0x131f1c */
  if (ARC_COND(c, 0)) goto L_131f1c;
  /* 131f10: add w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(1)));
  /* 131f14: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 131f18: b.hi #0x131f04 */
  if (ARC_COND(c, 8)) goto L_131f04;
L_131f1c:;
  /* 131f1c: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 131f20: b.eq #0x131fa8 */
  if (ARC_COND(c, 0)) goto L_131fa8;
  /* 131f24: add w8, w10, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 10) + UINT64_C(1)));
  /* 131f28: ldrb w10, [x9, w8, uxtw] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 9) + ((uint64_t)(uint32_t)(ARC_W_R(c, 8))))));
  /* 131f2c: cmp w10, #0x79 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(121));
  /* 131f30: b.ne #0x131f94 */
  if (ARC_COND(c, 1)) goto L_131f94;
  /* 131f34: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
  /* 131f38: ret  */
  return;
L_131f3c:;
  /* 131f3c: add w10, w10, #2 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(2)));
  /* 131f40: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 131f44: b.ls #0x131f60 */
  if (ARC_COND(c, 9)) goto L_131f60;
L_131f48:;
  /* 131f48: ldrb w11, [x9, x10] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 9) + ARC_X_R(c, 10))));
  /* 131f4c: cmp w11, #0x25 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(37));
  /* 131f50: b.eq #0x131f60 */
  if (ARC_COND(c, 0)) goto L_131f60;
  /* 131f54: add w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(1)));
  /* 131f58: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 131f5c: b.hi #0x131f48 */
  if (ARC_COND(c, 8)) goto L_131f48;
L_131f60:;
  /* 131f60: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 131f64: b.eq #0x131fa8 */
  if (ARC_COND(c, 0)) goto L_131fa8;
  /* 131f68: add w8, w10, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 10) + UINT64_C(1)));
  /* 131f6c: ldrb w8, [x9, w8, uxtw] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + ((uint64_t)(uint32_t)(ARC_W_R(c, 8))))));
  /* 131f70: cmp w8, #0x6d */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(109));
  /* 131f74: b.ne #0x131fa8 */
  if (ARC_COND(c, 1)) goto L_131fa8;
  /* 131f78: mov w0, #4 */
  ARC_W_W(c, 0, UINT64_C(4));
  /* 131f7c: ret  */
  return;
L_131f80:;
  /* 131f80: ldrb w8, [x9, w8, uxtw] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + ((uint64_t)(uint32_t)(ARC_W_R(c, 8))))));
  /* 131f84: cmp w8, #0x59 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(89));
  /* 131f88: b.ne #0x131fa8 */
  if (ARC_COND(c, 1)) goto L_131fa8;
  /* 131f8c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 131f90: ret  */
  return;
L_131f94:;
  /* 131f94: ldrb w8, [x9, w8, uxtw] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + ((uint64_t)(uint32_t)(ARC_W_R(c, 8))))));
  /* 131f98: cmp w8, #0x59 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(89));
  /* 131f9c: b.ne #0x131fa8 */
  if (ARC_COND(c, 1)) goto L_131fa8;
  /* 131fa0: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
  /* 131fa4: ret  */
  return;
L_131fa8:;
  /* 131fa8: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 131fac: ret  */
  return;
}

void fn1_134bb4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192500));
  /* 134bb4: bti c */
  /* bti: no architectural effect here */
  /* 134bb8: add x0, x0, #0x400 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1024)));
  /* 134bbc: ret  */
  return;
}

void fn1_136e34(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039201332));
  /* 136e34: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 136e38: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 136e3c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 136e40: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 136e44: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 136e48: bl #0x144540 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1273420));
  fn1_144540(c);
  /* 136e4c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 136e50: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* 136e54: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 136e58: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 136e5c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 136e60: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_13a048(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039214152));
  /* 13a048: bti c */
  /* bti: no architectural effect here */
  /* 13a04c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 13a050: add x0, x8, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* 13a054: ret  */
  return;
}

void fn1_1408c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039240896));
L_1408c0:;
  /* 1408c0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1408c4: sub sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(160)));
  /* 1408c8: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1408cc: stp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 1408d0: stp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 1408d4: stp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1408d8: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1408dc: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1408e0: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* 1408e4: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 1408e8: ldr x9, [x1, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* 1408ec: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 1408f0: mov w2, #0xc000 */
  ARC_W_W(c, 2, UINT64_C(49152));
  /* 1408f4: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 1408f8: add x26, x1, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 1) + UINT64_C(1)));
  /* 1408fc: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 140900: movk w2, #8, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(524288)));
  /* 140904: mov w20, w0 */
  ARC_W_W(c, 20, ARC_W_R(c, 0));
  /* 140908: csinc x1, x9, x1, ne */
  ARC_X_W(c, 1, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 1)) + 1)));
  /* 14090c: bl #0x144948 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1313040));
  fn1_144948(c);
  /* 140910: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 140914: b.eq #0x140a00 */
  if (ARC_COND(c, 0)) goto L_140a00;
  /* 140918: mov w25, w0 */
  ARC_W_W(c, 25, ARC_W_R(c, 0));
  /* 14091c: bl #0x144960 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1313056));
  fn1_144960(c);
  /* 140920: cbz x0, #0x140ae4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_140ae4;
  /* 140924: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 140928: str x26, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 26));
  /* 14092c: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1313072));
  fn1_142a58(c);
  /* 140930: nop  */
  /* nop: no architectural effect here */
  /* 140934: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 140938: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 14093c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 140940: tbz w8, #0, #0x140c8c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_140c8c;
L_140944:;
  /* 140944: mov x23, xzr */
  ARC_X_W(c, 23, ARC_X_R(c, 31));
  /* 140948: nop  */
  /* nop: no architectural effect here */
  /* 14094c: adr x28, #0x156d40 */
  ARC_X_W(c, 28, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 140950: mov w27, #0x2e2e */
  ARC_W_W(c, 27, UINT64_C(11822));
  /* 140954: b #0x140964 */
  goto L_140964;
L_140958:;
  /* 140958: ldrh w8, [x26] */
  ARC_W_W(c, 8, arc_ld16(ARC_X_R(c, 26)));
  /* 14095c: cmp w8, w27 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 27));
  /* 140960: b.ne #0x1409a4 */
  if (ARC_COND(c, 1)) goto L_1409a4;
L_140964:;
  /* 140964: str wzr, [x24] */
  arc_st32(ARC_X_R(c, 24), ARC_W_R(c, 31));
  /* 140968: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* 14096c: str x28, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 28));
  /* 140970: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 140974: bl #0x144600 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1313144));
  fn1_144600(c);
  /* 140978: cbz x0, #0x140a90 */
  if ((ARC_X_R(c, 0)) == 0) goto L_140a90;
  /* 14097c: add x26, x0, #0x13 */
  ARC_X_W(c, 26, (ARC_X_R(c, 0) + UINT64_C(19)));
  /* 140980: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 140984: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1313160));
  fn1_142860(c);
  /* 140988: cmp x0, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(2));
  /* 14098c: b.eq #0x140958 */
  if (ARC_COND(c, 0)) goto L_140958;
  /* 140990: cmp x0, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(1));
  /* 140994: b.ne #0x1409a4 */
  if (ARC_COND(c, 1)) goto L_1409a4;
  /* 140998: ldrb w8, [x26] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 26)));
  /* 14099c: cmp w8, #0x2e */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(46));
  /* 1409a0: b.eq #0x140964 */
  if (ARC_COND(c, 0)) goto L_140964;
L_1409a4:;
  /* 1409a4: cbz x0, #0x140ab4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_140ab4;
  /* 1409a8: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* 1409ac: cbnz w8, #0x140ab4 */
  if ((ARC_W_R(c, 8)) != 0) goto L_140ab4;
  /* 1409b0: stp xzr, xzr, [x29, #-0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-24));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1409b4: stur xzr, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 31));
  /* 1409b8: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* 1409bc: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1409c0: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 1409c4: add x2, x26, x8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 26) + ARC_X_R(c, 8)));
  /* 1409c8: bl #0xda784 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1313228));
  fn1_da784(c);
  /* 1409cc: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1409d0: mov w0, w25 */
  ARC_W_W(c, 0, ARC_W_R(c, 25));
  /* 1409d4: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 1409d8: bl #0x1408c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1313244));
  fn1_1408c0(c);
  /* 1409dc: ldurb w8, [x29, #-0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 1409e0: mov x26, x0 */
  ARC_X_W(c, 26, ARC_X_R(c, 0));
  /* 1409e4: tbz w8, #0, #0x1409f8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1409f8;
  /* 1409e8: ldur x8, [x29, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 1409ec: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 1409f0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1409f4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1313272));
  fn1_142608(c);
L_1409f8:;
  /* 1409f8: add x23, x26, x23 */
  ARC_X_W(c, 23, (ARC_X_R(c, 26) + ARC_X_R(c, 23)));
  /* 1409fc: b #0x140964 */
  goto L_140964;
L_140a00:;
  /* 140a00: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1313284));
  fn1_142a58(c);
  /* 140a04: nop  */
  /* nop: no architectural effect here */
  /* 140a08: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 140a0c: ldr w23, [x0] */
  ARC_W_W(c, 23, arc_ld32(ARC_X_R(c, 0)));
  /* 140a10: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 140a14: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 140a18: tbz w8, #0, #0x140cac */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_140cac;
L_140a1c:;
  /* 140a1c: nop  */
  /* nop: no architectural effect here */
  /* 140a20: adr x24, #0x156d38 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 140a24: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* 140a28: stp x23, x24, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 24));
  }
  /* 140a2c: sub x2, x29, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 140a30: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 140a34: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 140a38: mov w1, w23 */
  ARC_W_W(c, 1, ARC_W_R(c, 23));
  /* 140a3c: stp x9, x24, [x29, #-0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-24));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 24));
  }
  /* 140a40: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 140a44: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1313352));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 140a48: tbnz w0, #0, #0x140a68 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_140a68;
  /* 140a4c: ldur x0, [x29, #-0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 140a50: ldur w2, [x29, #-0x18] */
  ARC_W_W(c, 2, arc_ld32((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 140a54: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 140a58: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 140a5c: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* 140a60: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1313380));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 140a64: tbz w0, #0, #0x140b68 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_140b68;
L_140a68:;
  /* 140a68: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* 140a6c: nop  */
  /* nop: no architectural effect here */
  /* 140a70: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 140a74: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 140a78: tbz w8, #0, #0x140ccc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_140ccc;
L_140a7c:;
  /* 140a7c: nop  */
  /* nop: no architectural effect here */
  /* 140a80: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 140a84: mov x23, xzr */
  ARC_X_W(c, 23, ARC_X_R(c, 31));
  /* 140a88: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* 140a8c: b #0x140b40 */
  goto L_140b40;
L_140a90:;
  /* 140a90: ldr w25, [x24] */
  ARC_W_W(c, 25, arc_ld32(ARC_X_R(c, 24)));
  /* 140a94: cbz w25, #0x140ab4 */
  if ((ARC_W_R(c, 25)) == 0) goto L_140ab4;
  /* 140a98: nop  */
  /* nop: no architectural effect here */
  /* 140a9c: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 140aa0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 140aa4: tbz w8, #0, #0x140d0c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_140d0c;
L_140aa8:;
  /* 140aa8: nop  */
  /* nop: no architectural effect here */
  /* 140aac: adr x8, #0x156d38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 140ab0: stp x25, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 25));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
L_140ab4:;
  /* 140ab4: ldrb w8, [x21] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 21)));
  /* 140ab8: ldr x9, [x21, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 140abc: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 140ac0: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 140ac4: csel x1, x8, x9, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* 140ac8: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 140acc: mov w2, #0x200 */
  ARC_W_W(c, 2, UINT64_C(512));
  /* 140ad0: bl #0x144978 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1313492));
  fn1_144978(c);
  /* 140ad4: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 140ad8: b.eq #0x140b18 */
  if (ARC_COND(c, 0)) goto L_140b18;
  /* 140adc: add x23, x23, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* 140ae0: b #0x140b38 */
  goto L_140b38;
L_140ae4:;
  /* 140ae4: mov w0, w25 */
  ARC_W_W(c, 0, ARC_W_R(c, 25));
  /* 140ae8: bl #0x143370 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1313516));
  fn1_143370(c);
  /* 140aec: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1313520));
  fn1_142a58(c);
  /* 140af0: nop  */
  /* nop: no architectural effect here */
  /* 140af4: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 140af8: ldr w20, [x0] */
  ARC_W_W(c, 20, arc_ld32(ARC_X_R(c, 0)));
  /* 140afc: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 140b00: tbz w8, #0, #0x140cec */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_140cec;
L_140b04:;
  /* 140b04: nop  */
  /* nop: no architectural effect here */
  /* 140b08: adr x8, #0x156d38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 140b0c: mov x23, xzr */
  ARC_X_W(c, 23, ARC_X_R(c, 31));
  /* 140b10: stp x20, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 140b14: b #0x140b40 */
  goto L_140b40;
L_140b18:;
  /* 140b18: nop  */
  /* nop: no architectural effect here */
  /* 140b1c: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 140b20: ldr w20, [x24] */
  ARC_W_W(c, 20, arc_ld32(ARC_X_R(c, 24)));
  /* 140b24: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 140b28: tbz w8, #0, #0x140d2c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_140d2c;
L_140b2c:;
  /* 140b2c: nop  */
  /* nop: no architectural effect here */
  /* 140b30: adr x8, #0x156d38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 140b34: stp x20, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
L_140b38:;
  /* 140b38: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 140b3c: bl #0x144618 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1313600));
  fn1_144618(c);
L_140b40:;
  /* 140b40: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 140b44: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 140b48: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 140b4c: ldp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 140b50: ldp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 140b54: ldp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 140b58: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 140b5c: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* 140b60: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 140b64: ret  */
  return;
L_140b68:;
  /* 140b68: mov w8, #0x14 */
  ARC_W_W(c, 8, UINT64_C(20));
  /* 140b6c: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 140b70: ldr w1, [x19] */
  ARC_W_W(c, 1, arc_ld32(ARC_X_R(c, 19)));
  /* 140b74: stp x8, x24, [x29, #-0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-24));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 24));
  }
  /* 140b78: sub x2, x29, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 140b7c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 140b80: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 140b84: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1313672));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 140b88: tbnz w0, #0, #0x140c28 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_140c28;
  /* 140b8c: ldur x0, [x29, #-0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 140b90: ldur w2, [x29, #-0x18] */
  ARC_W_W(c, 2, arc_ld32((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 140b94: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 140b98: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 140b9c: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* 140ba0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1313700));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 140ba4: tbnz w0, #0, #0x140c28 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_140c28;
  /* 140ba8: mov w8, #0x28 */
  ARC_W_W(c, 8, UINT64_C(40));
  /* 140bac: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 140bb0: ldr w1, [x19] */
  ARC_W_W(c, 1, arc_ld32(ARC_X_R(c, 19)));
  /* 140bb4: stp x8, x24, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 24));
  }
  /* 140bb8: add x2, sp, #0x18 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(24)));
  /* 140bbc: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 140bc0: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 140bc4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1313736));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 140bc8: tbnz w0, #0, #0x140c28 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_140c28;
  /* 140bcc: ldr x0, [sp, #0x20] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(32))));
  /* 140bd0: ldr w2, [sp, #0x18] */
  ARC_W_W(c, 2, arc_ld32(((c)->sp + INT64_C(24))));
  /* 140bd4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 140bd8: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 140bdc: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* 140be0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1313764));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 140be4: tbnz w0, #0, #0x140c28 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_140c28;
  /* 140be8: mov w8, #0x1f */
  ARC_W_W(c, 8, UINT64_C(31));
  /* 140bec: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 140bf0: ldr w1, [x19] */
  ARC_W_W(c, 1, arc_ld32(ARC_X_R(c, 19)));
  /* 140bf4: stp x8, x24, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 24));
  }
  /* 140bf8: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 140bfc: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 140c00: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 140c04: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1313800));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 140c08: tbnz w0, #0, #0x140c28 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_140c28;
  /* 140c0c: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* 140c10: ldr w2, [sp, #8] */
  ARC_W_W(c, 2, arc_ld32(((c)->sp + INT64_C(8))));
  /* 140c14: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 140c18: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 140c1c: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* 140c20: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1313828));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 140c24: tbz w0, #0, #0x140c84 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_140c84;
L_140c28:;
  /* 140c28: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* 140c2c: nop  */
  /* nop: no architectural effect here */
  /* 140c30: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 140c34: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 140c38: tbz w8, #0, #0x140d4c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_140d4c;
L_140c3c:;
  /* 140c3c: nop  */
  /* nop: no architectural effect here */
  /* 140c40: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 140c44: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 140c48: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* 140c4c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 140c50: ldrb w8, [x21] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 21)));
  /* 140c54: ldr x9, [x21, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 140c58: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 140c5c: csel x1, x26, x9, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 26)) : ARC_X_R(c, 9)));
  /* 140c60: bl #0x144978 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1313892));
  fn1_144978(c);
  /* 140c64: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 140c68: b.eq #0x140c74 */
  if (ARC_COND(c, 0)) goto L_140c74;
  /* 140c6c: mov w23, #1 */
  ARC_W_W(c, 23, UINT64_C(1));
  /* 140c70: b #0x140b40 */
  goto L_140b40;
L_140c74:;
  /* 140c74: ldr w8, [x22] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 22)));
  /* 140c78: mov x23, xzr */
  ARC_X_W(c, 23, ARC_X_R(c, 31));
  /* 140c7c: stp x8, x24, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 24));
  }
  /* 140c80: b #0x140b40 */
  goto L_140b40;
L_140c84:;
  /* 140c84: mov x23, xzr */
  ARC_X_W(c, 23, ARC_X_R(c, 31));
  /* 140c88: b #0x140b40 */
  goto L_140b40;
L_140c8c:;
  /* 140c8c: nop  */
  /* nop: no architectural effect here */
  /* 140c90: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 140c94: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1313944));
  fn1_1424b8(c);
  /* 140c98: cbz w0, #0x140944 */
  if ((ARC_W_R(c, 0)) == 0) goto L_140944;
  /* 140c9c: nop  */
  /* nop: no architectural effect here */
  /* 140ca0: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 140ca4: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1313960));
  fn1_1424d0(c);
  /* 140ca8: b #0x140944 */
  goto L_140944;
L_140cac:;
  /* 140cac: nop  */
  /* nop: no architectural effect here */
  /* 140cb0: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 140cb4: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1313976));
  fn1_1424b8(c);
  /* 140cb8: cbz w0, #0x140a1c */
  if ((ARC_W_R(c, 0)) == 0) goto L_140a1c;
  /* 140cbc: nop  */
  /* nop: no architectural effect here */
  /* 140cc0: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 140cc4: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1313992));
  fn1_1424d0(c);
  /* 140cc8: b #0x140a1c */
  goto L_140a1c;
L_140ccc:;
  /* 140ccc: nop  */
  /* nop: no architectural effect here */
  /* 140cd0: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 140cd4: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1314008));
  fn1_1424b8(c);
  /* 140cd8: cbz w0, #0x140a7c */
  if ((ARC_W_R(c, 0)) == 0) goto L_140a7c;
  /* 140cdc: nop  */
  /* nop: no architectural effect here */
  /* 140ce0: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 140ce4: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1314024));
  fn1_1424d0(c);
  /* 140ce8: b #0x140a7c */
  goto L_140a7c;
L_140cec:;
  /* 140cec: nop  */
  /* nop: no architectural effect here */
  /* 140cf0: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 140cf4: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1314040));
  fn1_1424b8(c);
  /* 140cf8: cbz w0, #0x140b04 */
  if ((ARC_W_R(c, 0)) == 0) goto L_140b04;
  /* 140cfc: nop  */
  /* nop: no architectural effect here */
  /* 140d00: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 140d04: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1314056));
  fn1_1424d0(c);
  /* 140d08: b #0x140b04 */
  goto L_140b04;
L_140d0c:;
  /* 140d0c: nop  */
  /* nop: no architectural effect here */
  /* 140d10: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 140d14: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1314072));
  fn1_1424b8(c);
  /* 140d18: cbz w0, #0x140aa8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_140aa8;
  /* 140d1c: nop  */
  /* nop: no architectural effect here */
  /* 140d20: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 140d24: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1314088));
  fn1_1424d0(c);
  /* 140d28: b #0x140aa8 */
  goto L_140aa8;
L_140d2c:;
  /* 140d2c: nop  */
  /* nop: no architectural effect here */
  /* 140d30: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 140d34: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1314104));
  fn1_1424b8(c);
  /* 140d38: cbz w0, #0x140b2c */
  if ((ARC_W_R(c, 0)) == 0) goto L_140b2c;
  /* 140d3c: nop  */
  /* nop: no architectural effect here */
  /* 140d40: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 140d44: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1314120));
  fn1_1424d0(c);
  /* 140d48: b #0x140b2c */
  goto L_140b2c;
L_140d4c:;
  /* 140d4c: nop  */
  /* nop: no architectural effect here */
  /* 140d50: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 140d54: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1314136));
  fn1_1424b8(c);
  /* 140d58: cbz w0, #0x140c3c */
  if ((ARC_W_R(c, 0)) == 0) goto L_140c3c;
  /* 140d5c: nop  */
  /* nop: no architectural effect here */
  /* 140d60: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 140d64: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1314152));
  fn1_1424d0(c);
  /* 140d68: b #0x140c3c */
  goto L_140c3c;
  /* 140d6c: b #0x140d94 */
  goto L_140d94;
  /* 140d70: b #0x140d74 */
  goto L_140d74;
L_140d74:;
  /* 140d74: ldurb w8, [x29, #-0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 140d78: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 140d7c: tbz w8, #0, #0x140d98 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_140d98;
  /* 140d80: ldur x8, [x29, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 140d84: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 140d88: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 140d8c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1314192));
  fn1_142608(c);
  /* 140d90: b #0x140d98 */
  goto L_140d98;
L_140d94:;
  /* 140d94: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_140d98:;
  /* 140d98: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 140d9c: bl #0x144618 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1314208));
  fn1_144618(c);
  /* 140da0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 140da4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1314216));
  fn1_9cc20(c);
}

void fn1_142830(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248944));
  /* 142830: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 142834: ldr x17, [x16, #0xff0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(4080))));
  /* 142838: add x16, x16, #0xff0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(4080)));
  /* 14283c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142840: nop  */
  /* nop: no architectural effect here */
  /* 142844: nop  */
  /* nop: no architectural effect here */
}

void fn1_142e30(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250480));
  /* 142e30: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142e34: ldr x17, [x16, #0x1f0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(496))));
  /* 142e38: add x16, x16, #0x1f0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(496)));
  /* 142e3c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142e40: nop  */
  /* nop: no architectural effect here */
  /* 142e44: nop  */
  /* nop: no architectural effect here */
}

void fn1_143430(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252016));
  /* 143430: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143434: ldr x17, [x16, #0x3f0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1008))));
  /* 143438: add x16, x16, #0x3f0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1008)));
  /* 14343c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143440: nop  */
  /* nop: no architectural effect here */
  /* 143444: nop  */
  /* nop: no architectural effect here */
}

void fn1_143a30(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253552));
  /* 143a30: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143a34: ldr x17, [x16, #0x5f0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1520))));
  /* 143a38: add x16, x16, #0x5f0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1520)));
  /* 143a3c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143a40: nop  */
  /* nop: no architectural effect here */
  /* 143a44: nop  */
  /* nop: no architectural effect here */
}

void fn1_144030(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255088));
  /* 144030: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144034: ldr x17, [x16, #0x7f0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2032))));
  /* 144038: add x16, x16, #0x7f0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2032)));
  /* 14403c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144040: nop  */
  /* nop: no architectural effect here */
  /* 144044: nop  */
  /* nop: no architectural effect here */
}

void fn1_144630(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256624));
  /* 144630: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144634: ldr x17, [x16, #0x9f0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2544))));
  /* 144638: add x16, x16, #0x9f0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2544)));
  /* 14463c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144640: nop  */
  /* nop: no architectural effect here */
  /* 144644: nop  */
  /* nop: no architectural effect here */
}

