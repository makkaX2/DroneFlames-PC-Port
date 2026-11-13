#include "lifted.h"

void fn1_9c8d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038569168));
  /* 9c8d0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 9c8d4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 9c8d8: stp x28, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 9c8dc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 9c8e0: sub sp, sp, #0x4d0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(1232)));
  /* 9c8e4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 9c8e8: add x0, sp, #0x270 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(624)));
  /* 9c8ec: bl #0xa0810 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(641264));
  fn1_a0810(c);
  /* 9c8f0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 9c8f4: add x1, sp, #0x270 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(624)));
  /* 9c8f8: stp xzr, xzr, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 9c8fc: bl #0x9cee4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(641280));
  fn1_9cee4(c);
  /* 9c900: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 9c904: bl #0x9d0f4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(641288));
  fn1_9d0f4(c);
  /* 9c908: cbnz w0, #0x9c930 */
  if ((ARC_W_R(c, 0)) != 0) goto L_9c930;
L_9c90c:;
  /* 9c90c: mov w0, #5 */
  ARC_W_W(c, 0, UINT64_C(5));
  /* 9c910: add sp, sp, #0x4d0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(1232)));
  /* 9c914: ldp x28, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 9c918: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9c91c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 9c920: ret  */
  return;
L_9c924:;
  /* 9c924: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 9c928: bl #0x9d0f4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(641324));
  fn1_9d0f4(c);
  /* 9c92c: cbz w0, #0x9c90c */
  if ((ARC_W_R(c, 0)) == 0) goto L_9c90c;
L_9c930:;
  /* 9c930: tbnz w0, #0x1f, #0x9c9b0 */
  if (((ARC_W_R(c, 0)) >> 31 & 1) != 0) goto L_9c9b0;
  /* 9c934: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 9c938: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 9c93c: bl #0x9d11c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(641344));
  fn1_9d11c(c);
  /* 9c940: cbnz w0, #0x9c9b0 */
  if ((ARC_W_R(c, 0)) != 0) goto L_9c9b0;
  /* 9c944: ldur x8, [x29, #-0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-48))));
  /* 9c948: cbz x8, #0x9c924 */
  if ((ARC_X_R(c, 8)) == 0) goto L_9c924;
  /* 9c94c: ldr x2, [x19] */
  ARC_X_W(c, 2, arc_ld64(ARC_X_R(c, 19)));
  /* 9c950: mov x4, sp */
  ARC_X_W(c, 4, (c)->sp);
  /* 9c954: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 9c958: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 9c95c: mov x3, x19 */
  ARC_X_W(c, 3, ARC_X_R(c, 19));
  /* 9c960: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(641380));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 9c964: cmp w0, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(8));
  /* 9c968: b.eq #0x9c924 */
  if (ARC_COND(c, 0)) goto L_9c924;
  /* 9c96c: cmp w0, #6 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(6));
  /* 9c970: b.ne #0x9c9b0 */
  if (ARC_COND(c, 1)) goto L_9c9b0;
  /* 9c974: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 9c978: sub x2, x29, #0x50 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 9c97c: mov w1, #-2 */
  ARC_W_W(c, 1, UINT64_C(18446744073709551614));
  /* 9c980: bl #0x9cf8c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(641412));
  fn1_9cf8c(c);
  /* 9c984: ldur x8, [x29, #-0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-80))));
  /* 9c988: add x0, sp, #0x270 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(624)));
  /* 9c98c: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 9c990: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 9c994: str x8, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 8));
  /* 9c998: bl #0x9c9c8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(641436));
  fn1_9c9c8(c);
  /* 9c99c: add sp, sp, #0x4d0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(1232)));
  /* 9c9a0: ldp x28, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 9c9a4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9c9a8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 9c9ac: ret  */
  return;
L_9c9b0:;
  /* 9c9b0: mov w0, #3 */
  ARC_W_W(c, 0, UINT64_C(3));
  /* 9c9b4: add sp, sp, #0x4d0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(1232)));
  /* 9c9b8: ldp x28, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 9c9bc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9c9c0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 9c9c4: ret  */
  return;
}

void fn1_a1184(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038587780));
  /* a1184: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a1188: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* a118c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a1190: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* a1194: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a1198: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a119c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* a11a0: ldarb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* a11a4: cbz w8, #0xa11b0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_a11b0;
  /* a11a8: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* a11ac: b #0xa125c */
  goto L_a125c;
L_a11b0:;
  /* a11b0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a11b4: nop  */
  /* nop: no architectural effect here */
  /* a11b8: adr x8, #0x517a5 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(333733)));
  /* a11bc: nop  */
  /* nop: no architectural effect here */
  /* a11c0: adr x0, #0x157658 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1406552)));
  /* a11c4: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* a11c8: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(659916));
  fn1_142518(c);
  /* a11cc: cbnz w0, #0xa1278 */
  if ((ARC_W_R(c, 0)) != 0) goto L_a1278;
  /* a11d0: ldrb w23, [x19, #1] */
  ARC_W_W(c, 23, arc_ld8((ARC_X_R(c, 19) + INT64_C(1))));
  /* a11d4: tbz w23, #1, #0xa11f0 */
  if (((ARC_W_R(c, 23)) >> 1 & 1) == 0) goto L_a11f0;
  /* a11d8: ldr w21, [x19, #4] */
  ARC_W_W(c, 21, arc_ld32((ARC_X_R(c, 19) + INT64_C(4))));
  /* a11dc: mov w0, #0xb2 */
  ARC_W_W(c, 0, UINT64_C(178));
  /* a11e0: bl #0x142500 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(659940));
  fn1_142500(c);
  /* a11e4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a11e8: cmp w21, w20 */
  (void)arc_sub32(c, ARC_W_R(c, 21), ARC_W_R(c, 20));
  /* a11ec: b.eq #0xa12a0 */
  if (ARC_COND(c, 0)) goto L_a12a0;
L_a11f0:;
  /* a11f0: nop  */
  /* nop: no architectural effect here */
  /* a11f4: adr x21, #0x157680 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1406592)));
  /* a11f8: nop  */
  /* nop: no architectural effect here */
  /* a11fc: adr x22, #0x157658 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1406552)));
L_a1200:;
  /* a1200: ldrb w24, [x19, #1] */
  ARC_W_W(c, 24, arc_ld8((ARC_X_R(c, 19) + INT64_C(1))));
  /* a1204: tbz w24, #1, #0xa1220 */
  if (((ARC_W_R(c, 24)) >> 1 & 1) == 0) goto L_a1220;
  /* a1208: orr w8, w24, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 24) | UINT64_C(4)));
  /* a120c: strb w8, [x19, #1] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(1)), ARC_W_R(c, 8));
  /* a1210: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* a1214: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* a1218: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(659996));
  fn1_142530(c);
  /* a121c: b #0xa1200 */
  goto L_a1200;
L_a1220:;
  /* a1220: cmp w24, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 24), UINT64_C(1));
  /* a1224: b.eq #0xa1244 */
  if (ARC_COND(c, 0)) goto L_a1244;
  /* a1228: tbnz w23, #1, #0xa1238 */
  if (((ARC_W_R(c, 23)) >> 1 & 1) != 0) goto L_a1238;
  /* a122c: mov w0, #0xb2 */
  ARC_W_W(c, 0, UINT64_C(178));
  /* a1230: bl #0x142500 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(660020));
  fn1_142500(c);
  /* a1234: mov w20, w0 */
  ARC_W_W(c, 20, ARC_W_R(c, 0));
L_a1238:;
  /* a1238: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
  /* a123c: str w20, [x19, #4] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(4)), ARC_W_R(c, 20));
  /* a1240: strb w8, [x19, #1] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(1)), ARC_W_R(c, 8));
L_a1244:;
  /* a1244: nop  */
  /* nop: no architectural effect here */
  /* a1248: adr x0, #0x157658 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1406552)));
  /* a124c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(660048));
  fn1_142560(c);
  /* a1250: cbnz w0, #0xa128c */
  if ((ARC_W_R(c, 0)) != 0) goto L_a128c;
  /* a1254: cmp w24, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 24), UINT64_C(1));
  /* a1258: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
L_a125c:;
  /* a125c: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a1260: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a1264: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* a1268: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a126c: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* a1270: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a1274: ret  */
  return;
L_a1278:;
  /* a1278: nop  */
  /* nop: no architectural effect here */
  /* a127c: adr x0, #0x4ff9b */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(327579)));
  /* a1280: nop  */
  /* nop: no architectural effect here */
  /* a1284: adr x1, #0x517a5 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(333733)));
  /* a1288: bl #0xa23d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(660108));
  fn1_a23d8(c);
L_a128c:;
  /* a128c: nop  */
  /* nop: no architectural effect here */
  /* a1290: adr x0, #0x4f88b */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(325771)));
  /* a1294: nop  */
  /* nop: no architectural effect here */
  /* a1298: adr x1, #0x517a5 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(333733)));
  /* a129c: bl #0xa23d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(660128));
  fn1_a23d8(c);
L_a12a0:;
  /* a12a0: nop  */
  /* nop: no architectural effect here */
  /* a12a4: adr x0, #0x51db6 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(335286)));
  /* a12a8: bl #0xa23d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(660140));
  fn1_a23d8(c);
  /* a12ac: b #0xa12b4 */
  goto L_a12b4;
  /* a12b0: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(660148));
  fn1_a1454(c);
L_a12b4:;
  /* a12b4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a12b8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* a12bc: bl #0xa140c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(660160));
  fn1_a140c(c);
  /* a12c0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a12c4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(660168));
  fn1_9cc20(c);
}

void fn1_a2770(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038593392));
  /* a2770: bti c */
  /* bti: no architectural effect here */
  /* a2774: brk #1 */
  arc_trap(c, "brk");
}

void fn1_a869c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038617756));
  /* a869c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a86a0: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a86a4: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a86a8: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a86ac: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a86b0: ldr x21, [x0, #0x18] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* a86b4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a86b8: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* a86bc: cbz x21, #0xa8718 */
  if ((ARC_X_R(c, 21)) == 0) goto L_a8718;
  /* a86c0: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* a86c4: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* a86c8: ldr x22, [x20, #0x10] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* a86cc: add x10, x8, x21 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* a86d0: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* a86d4: b.ls #0xa86fc */
  if (ARC_COND(c, 9)) goto L_a86fc;
  /* a86d8: lsl x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* a86dc: add x9, x10, #0x3e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(992)));
  /* a86e0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a86e4: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* a86e8: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* a86ec: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(689904));
  fn1_142878(c);
  /* a86f0: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* a86f4: cbz x0, #0xa8778 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a8778;
  /* a86f8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_a86fc:;
  /* a86fc: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* a8700: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* a8704: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* a8708: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(689932));
  fn1_1449d8(c);
  /* a870c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* a8710: add x8, x8, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* a8714: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_a8718:;
  /* a8718: ldr x20, [x20, #0x20] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* a871c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* a8720: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* a8724: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a8728: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* a872c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(689968));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* a8730: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* a8734: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* a8738: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* a873c: b.ne #0xa8754 */
  if (ARC_COND(c, 1)) goto L_a8754;
  /* a8740: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a8744: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a8748: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a874c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a8750: ret  */
  return;
L_a8754:;
  /* a8754: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* a8758: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a875c: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* a8760: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* a8764: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a8768: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a876c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a8770: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a8774: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_a8778:;
  /* a8778: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(690044));
  fn1_1427b8(c);
}

void fn1_af034(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038644788));
  /* af034: bti c */
  /* bti: no architectural effect here */
  /* af038: mov w1, #0x28 */
  ARC_W_W(c, 1, UINT64_C(40));
  /* af03c: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b3b14(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038663956));
  /* b3b14: bti c */
  /* bti: no architectural effect here */
  /* b3b18: mov w1, #0x50 */
  ARC_W_W(c, 1, UINT64_C(80));
  /* b3b1c: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b77e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038679524));
  /* b77e4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b77e8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b77ec: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b77f0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b77f4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b77f8: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* b77fc: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b7800: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* b7804: sub x9, x8, #0xfe0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4064)));
  /* b7808: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b780c: b.hi #0xb7830 */
  if (ARC_COND(c, 8)) goto L_b7830;
  /* b7810: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b7814: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b7818: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(751644));
  fn1_1428a8(c);
  /* b781c: cbz x0, #0xb7884 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b7884;
  /* b7820: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b7824: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b7828: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b782c: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_b7830:;
  /* b7830: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* b7834: ldr x10, [x19] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 19)));
  /* b7838: mov w11, #0x540 */
  ARC_W_W(c, 11, UINT64_C(1344));
  /* b783c: str x8, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 8));
  /* b7840: add x0, x8, x21 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* b7844: mov w8, #0x2f */
  ARC_W_W(c, 8, UINT64_C(47));
  /* b7848: ldurh w9, [x0, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* b784c: strb w8, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 8));
  /* b7850: adrp x8, #0x14b000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1355776)));
  /* b7854: add x8, x8, #0x878 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2168)));
  /* b7858: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* b785c: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* b7860: ldr w8, [x10, #0xc] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 10) + INT64_C(12))));
  /* b7864: orr w9, w9, w11 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 11)));
  /* b7868: sturh w9, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 9));
  /* b786c: str w8, [x0, #0xc] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(12)), ARC_W_R(c, 8));
  /* b7870: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b7874: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b7878: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b787c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b7880: ret  */
  return;
L_b7884:;
  /* b7884: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(751752));
  fn1_142488(c);
}

void fn1_ba58c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038691212));
  /* ba58c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ba590: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ba594: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* ba598: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ba59c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ba5a0: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* ba5a4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* ba5a8: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* ba5ac: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* ba5b0: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* ba5b4: b.hi #0xba5d8 */
  if (ARC_COND(c, 8)) goto L_ba5d8;
  /* ba5b8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ba5bc: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* ba5c0: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(763332));
  fn1_1428a8(c);
  /* ba5c4: cbz x0, #0xba634 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ba634;
  /* ba5c8: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ba5cc: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ba5d0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ba5d4: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_ba5d8:;
  /* ba5d8: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* ba5dc: ldr x10, [x19] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 19)));
  /* ba5e0: add x0, x21, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* ba5e4: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* ba5e8: adrp x8, #0x14c000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1359872)));
  /* ba5ec: add x8, x8, #0x760 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1888)));
  /* ba5f0: ldurh w9, [x10, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 10) + INT64_C(9))));
  /* ba5f4: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* ba5f8: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* ba5fc: mov w11, #0x500 */
  ARC_W_W(c, 11, UINT64_C(1280));
  /* ba600: and w9, w9, #0xc0 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(192)));
  /* ba604: orr w9, w9, w11 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 11)));
  /* ba608: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* ba60c: mov w11, #0xc */
  ARC_W_W(c, 11, UINT64_C(12));
  /* ba610: orr w8, w9, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) | ARC_W_R(c, 8)));
  /* ba614: strb w11, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 11));
  /* ba618: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* ba61c: str x10, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 10));
  /* ba620: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ba624: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* ba628: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ba62c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ba630: ret  */
  return;
L_ba634:;
  /* ba634: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(763448));
  fn1_142488(c);
}

void fn1_bd890(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038704272));
  /* bd890: bti c */
  /* bti: no architectural effect here */
  /* bd894: b #0x1426f8 */
  fn1_1426f8(c); return;
}

void fn1_cb690(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038761104));
  /* cb690: bti c */
  /* bti: no architectural effect here */
  /* cb694: sub x9, x1, x0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* cb698: mov w8, #0x7e */
  ARC_W_W(c, 8, UINT64_C(126));
  /* cb69c: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* cb6a0: asr x9, x9, #3 */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* cb6a4: clz x9, x9 */
  ARC_X_W(c, 9, arc_clz64(ARC_X_R(c, 9)));
  /* cb6a8: sub x2, x8, x9, lsl #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) - ((uint64_t)(ARC_X_R(c, 9)) << 1)));
  /* cb6ac: b #0xcb6b0 */
  fn1_cb6b0(c); return;
}

void fn1_d73f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038809584));
  /* d73f0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d73f4: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d73f8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* d73fc: nop  */
  /* nop: no architectural effect here */
  /* d7400: adr x0, #0x156bb8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1403832)));
  /* d7404: bl #0x144ac8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(881672));
  fn1_144ac8(c);
  /* d7408: ldr w8, [x0, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(8))));
  /* d740c: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* d7410: cset w0, gt */
  ARC_W_W(c, 0, (ARC_COND(c, 12) ? 1 : 0));
  /* d7414: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d7418: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d741c: ret  */
  return;
}

void fn1_db39c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038825884));
  /* db39c: bti c */
  /* bti: no architectural effect here */
  /* db3a0: brk #1 */
  arc_trap(c, "brk");
}

void fn1_dcf48(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038832968));
  /* dcf48: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* dcf4c: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* dcf50: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* dcf54: stp x28, x27, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* dcf58: stp x26, x25, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* dcf5c: stp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* dcf60: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* dcf64: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* dcf68: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* dcf6c: fmov x8, d0 */
  ARC_X_W(c, 8, ARC_DU_R(c, 0));
  /* dcf70: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* dcf74: stur x0, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 0));
  /* dcf78: cbz x8, #0xdd384 */
  if ((ARC_X_R(c, 8)) == 0) goto L_dd384;
  /* dcf7c: lsr x9, x8, #0x34 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(52)) & 63)));
  /* dcf80: mov x10, #0x10000000000000 */
  ARC_X_W(c, 10, UINT64_C(4503599627370496));
  /* dcf84: mov x12, #0xa597 */
  ARC_X_W(c, 12, UINT64_C(42391));
  /* dcf88: bfxil x10, x8, #0, #0x34 */
  ARC_X_W(c, 10, (((uint64_t)(ARC_X_R(c, 10)) & UINT64_C(18442240474082181120)) | ((((uint64_t)(ARC_X_R(c, 8))) >> 0) & UINT64_C(4503599627370495))));
  /* dcf8c: mov x13, #0x3031 */
  ARC_X_W(c, 13, UINT64_C(12337));
  /* dcf90: movk x12, #0x36b4, lsl #16 */
  ARC_X_W(c, 12, ((ARC_X_R(c, 12) & UINT64_C(18446744069414649855)) | UINT64_C(917766144)));
  /* dcf94: sub w11, w9, #0x433 */
  ARC_W_W(c, 11, (ARC_W_R(c, 9) - UINT64_C(1075)));
  /* dcf98: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* dcf9c: mov w9, #-0x432 */
  ARC_W_W(c, 9, UINT64_C(18446744073709550542));
  /* dcfa0: and x8, x8, #0xfffffffffffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(4503599627370495)));
  /* dcfa4: movk x13, #0xf895, lsl #16 */
  ARC_X_W(c, 13, ((ARC_X_R(c, 13) & UINT64_C(18446744069414649855)) | UINT64_C(4170514432)));
  /* dcfa8: movk x12, #0x5f41, lsl #32 */
  ARC_X_W(c, 12, ((ARC_X_R(c, 12) & UINT64_C(18446462603027808255)) | UINT64_C(104732777512960)));
  /* dcfac: csel w4, w9, w11, eq */
  ARC_W_W(c, 4, (ARC_COND(c, 0) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 11)));
  /* dcfb0: movk x13, #0xa88, lsl #32 */
  ARC_X_W(c, 13, ((ARC_X_R(c, 13) & UINT64_C(18446462603027808255)) | UINT64_C(11579231830016)));
  /* dcfb4: csel x9, x8, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* dcfb8: mov w22, #0x3600 */
  ARC_W_W(c, 22, UINT64_C(13824));
  /* dcfbc: mov w8, #0xe0ff */
  ARC_W_W(c, 8, UINT64_C(57599));
  /* dcfc0: movk x12, #0x8970, lsl #48 */
  ARC_X_W(c, 12, ((ARC_X_R(c, 12) & UINT64_C(281474976710655)) | UINT64_C(9903415580587720704)));
  /* dcfc4: movk x13, #0x3168, lsl #48 */
  ARC_X_W(c, 13, ((ARC_X_R(c, 13) & UINT64_C(281474976710655)) | UINT64_C(3560095505436377088)));
  /* dcfc8: cmn w4, #0x35 */
  (void)arc_add32(c, ARC_W_R(c, 4), UINT64_C(53), 0);
  /* dcfcc: movk w22, #0xc465, lsl #16 */
  ARC_W_W(c, 22, ((ARC_W_R(c, 22) & UINT64_C(18446744069414649855)) | UINT64_C(3294953472)));
  /* dcfd0: movk w8, #0x5f5, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(99942400)));
  /* dcfd4: add w10, w2, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 2) + UINT64_C(1)));
  /* dcfd8: str x9, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 9));
  /* dcfdc: str w4, [sp, #0xc] */
  arc_st32(((c)->sp + INT64_C(12)), ARC_W_R(c, 4));
  /* dcfe0: b.le #0xdd3f4 */
  if (ARC_COND(c, 13)) goto L_dd3f4;
  /* dcfe4: add w11, w4, #0xf */
  ARC_W_W(c, 11, (ARC_W_R(c, 4) + UINT64_C(15)));
  /* dcfe8: cmp w4, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 4), UINT64_C(0));
  /* dcfec: mov w14, #0x4410 */
  ARC_W_W(c, 14, UINT64_C(17424));
  /* dcff0: lsr w11, w11, #4 */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 11)) >> ((UINT64_C(4)) & 31)));
  /* dcff4: movk w14, #0x13, lsl #16 */
  ARC_W_W(c, 14, ((ARC_W_R(c, 14) & UINT64_C(18446744069414649855)) | UINT64_C(1245184)));
  /* dcff8: mov w0, #0x1c72 */
  ARC_W_W(c, 0, UINT64_C(7282));
  /* dcffc: nop  */
  /* nop: no architectural effect here */
  /* dd000: adr x17, #0x5fce8 */
  ARC_X_W(c, 17, (arc_image_bases[1] + UINT64_C(392424)));
  /* dd004: lsl x15, x9, #8 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(8)) & 63)));
  /* dd008: csel w11, wzr, w11, lt */
  ARC_W_W(c, 11, (ARC_COND(c, 11) ? (ARC_W_R(c, 31)) : ARC_W_R(c, 11)));
  /* dd00c: mov w5, #0x1759 */
  ARC_W_W(c, 5, UINT64_C(5977));
  /* dd010: mov w7, #0x851f */
  ARC_W_W(c, 7, UINT64_C(34079));
  /* dd014: mul w14, w11, w14 */
  ARC_W_W(c, 14, ((uint32_t)(ARC_W_R(c, 11)) * (uint32_t)(ARC_W_R(c, 14))));
  /* dd018: lsl w1, w11, #4 */
  ARC_W_W(c, 1, ((uint32_t)(ARC_W_R(c, 11)) << ((UINT64_C(4)) & 31)));
  /* dd01c: ldrh w26, [x17, w11, uxtw #1] */
  ARC_W_W(c, 26, arc_ld16((ARC_X_R(c, 17) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 11)))) << 1))));
  /* dd020: ldur x20, [x29, #-8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* dd024: mov w16, wzr */
  ARC_W_W(c, 16, ARC_W_R(c, 31));
  /* dd028: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* dd02c: sub w24, w1, w4 */
  ARC_W_W(c, 24, (ARC_W_R(c, 1) - ARC_W_R(c, 4)));
  /* dd030: movk w5, #0xd1b7, lsl #16 */
  ARC_W_W(c, 5, ((ARC_W_R(c, 5) & UINT64_C(18446744069414649855)) | UINT64_C(3518431232)));
  /* dd034: mov w6, #-0x2710 */
  ARC_W_W(c, 6, UINT64_C(18446744073709541616));
  /* dd038: lsr w14, w14, #0x12 */
  ARC_W_W(c, 14, ((uint32_t)(ARC_W_R(c, 14)) >> ((UINT64_C(18)) & 31)));
  /* dd03c: and w28, w24, #0x3f */
  ARC_W_W(c, 28, (ARC_W_R(c, 24) & UINT64_C(63)));
  /* dd040: movk w7, #0x51eb, lsl #16 */
  ARC_W_W(c, 7, ((ARC_W_R(c, 7) & UINT64_C(18446744069414649855)) | UINT64_C(1374355456)));
  /* dd044: mov w21, #0x64 */
  ARC_W_W(c, 21, UINT64_C(100));
  /* dd048: nop  */
  /* nop: no architectural effect here */
  /* dd04c: adr x23, #0x58470 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(361584)));
  /* dd050: add w14, w14, #0x19 */
  ARC_W_W(c, 14, (ARC_W_R(c, 14) + UINT64_C(25)));
  /* dd054: eor x27, x28, #0x3f */
  ARC_X_W(c, 27, (ARC_X_R(c, 28) ^ UINT64_C(63)));
  /* dd058: mul w14, w14, w0 */
  ARC_W_W(c, 14, ((uint32_t)(ARC_W_R(c, 14)) * (uint32_t)(ARC_W_R(c, 0))));
  /* dd05c: lsr w30, w14, #0x10 */
  ARC_W_W(c, 30, ((uint32_t)(ARC_W_R(c, 14)) >> ((UINT64_C(16)) & 31)));
  /* dd060: b #0xdd080 */
  goto L_dd080;
L_dd064:;
  /* dd064: mov x9, #0x3030303030303030 */
  ARC_X_W(c, 9, UINT64_C(3472328296227680304));
  /* dd068: str x9, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 9));
  /* dd06c: strb w9, [x20, #8] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(8)), ARC_W_R(c, 9));
L_dd070:;
  /* dd070: add x20, x20, #9 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(9)));
  /* dd074: mov w16, w11 */
  ARC_W_W(c, 16, ARC_W_R(c, 11));
L_dd078:;
  /* dd078: cmp x25, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 25), UINT64_C(1));
  /* dd07c: b.le #0xdd794 */
  if (ARC_COND(c, 13)) goto L_dd794;
L_dd080:;
  /* dd080: mov x25, x30 */
  ARC_X_W(c, 25, ARC_X_R(c, 30));
  /* dd084: sub x30, x30, #1 */
  ARC_X_W(c, 30, (ARC_X_R(c, 30) - UINT64_C(1)));
  /* dd088: mov w14, #0x18 */
  ARC_W_W(c, 14, UINT64_C(24));
  /* dd08c: add x11, x30, x26 */
  ARC_X_W(c, 11, (ARC_X_R(c, 30) + ARC_X_R(c, 26)));
  /* dd090: nop  */
  /* nop: no architectural effect here */
  /* dd094: adr x9, #0x58a28 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(363048)));
  /* dd098: madd x11, x11, x14, x9 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 9)) + ((uint64_t)(ARC_X_R(c, 11)) * (uint64_t)(ARC_X_R(c, 14)))));
  /* dd09c: ldp x14, x17, [x11] */
  { const uint64_t _pa = ARC_X_R(c, 11);
    ARC_X_W(c, 14, arc_ld64(_pa));
    ARC_X_W(c, 17, arc_ld64(_pa + 8));
  }
  /* dd0a0: ldr x11, [x11, #0x10] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 11) + INT64_C(16))));
  /* dd0a4: mul x1, x11, x15 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 11)) * (uint64_t)(ARC_X_R(c, 15))));
  /* dd0a8: umulh x14, x14, x15 */
  ARC_X_W(c, 14, arc_umulh(ARC_X_R(c, 14), ARC_X_R(c, 15)));
  /* dd0ac: umulh x0, x17, x15 */
  ARC_X_W(c, 0, arc_umulh(ARC_X_R(c, 17), ARC_X_R(c, 15)));
  /* dd0b0: mul x17, x17, x15 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 17)) * (uint64_t)(ARC_X_R(c, 15))));
  /* dd0b4: umulh x11, x11, x15 */
  ARC_X_W(c, 11, arc_umulh(ARC_X_R(c, 11), ARC_X_R(c, 15)));
  /* dd0b8: cmn x17, x14 */
  (void)arc_add64(c, ARC_X_R(c, 17), ARC_X_R(c, 14), 0);
  /* dd0bc: adc x14, x1, x0 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 1)) + (uint64_t)(ARC_X_R(c, 0)) + (c)->cf));
  /* dd0c0: cmp x14, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 1));
  /* dd0c4: lsr x14, x14, x28 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 14)) >> ((ARC_X_R(c, 28)) & 63)));
  /* dd0c8: cinc x11, x11, lo */
  ARC_X_W(c, 11, (ARC_COND(c, 3) ? (ARC_X_R(c, 11)) + 1 : (ARC_X_R(c, 11))));
  /* dd0cc: lsr x17, x11, x24 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 11)) >> ((ARC_X_R(c, 24)) & 63)));
  /* dd0d0: lsl x11, x11, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 11)) << ((UINT64_C(1)) & 63)));
  /* dd0d4: lsl x11, x11, x27 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 11)) << ((ARC_X_R(c, 27)) & 63)));
  /* dd0d8: umulh x1, x17, x13 */
  ARC_X_W(c, 1, arc_umulh(ARC_X_R(c, 17), ARC_X_R(c, 13)));
  /* dd0dc: orr x11, x11, x14 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) | ARC_X_R(c, 14)));
  /* dd0e0: mul x0, x17, x13 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 17)) * (uint64_t)(ARC_X_R(c, 13))));
  /* dd0e4: umulh x14, x11, x13 */
  ARC_X_W(c, 14, arc_umulh(ARC_X_R(c, 11), ARC_X_R(c, 13)));
  /* dd0e8: mul x4, x11, x12 */
  ARC_X_W(c, 4, ((uint64_t)(ARC_X_R(c, 11)) * (uint64_t)(ARC_X_R(c, 12))));
  /* dd0ec: umulh x9, x11, x12 */
  ARC_X_W(c, 9, arc_umulh(ARC_X_R(c, 11), ARC_X_R(c, 12)));
  /* dd0f0: madd x17, x17, x12, x1 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 1)) + ((uint64_t)(ARC_X_R(c, 17)) * (uint64_t)(ARC_X_R(c, 12)))));
  /* dd0f4: adds x1, x14, x0 */
  ARC_X_W(c, 1, arc_add64(c, ARC_X_R(c, 14), ARC_X_R(c, 0), 0));
  /* dd0f8: cmn x4, x1 */
  (void)arc_add64(c, ARC_X_R(c, 4), ARC_X_R(c, 1), 0);
  /* dd0fc: cset w1, hs */
  ARC_W_W(c, 1, (ARC_COND(c, 2) ? 1 : 0));
  /* dd100: cmn x14, x0 */
  (void)arc_add64(c, ARC_X_R(c, 14), ARC_X_R(c, 0), 0);
  /* dd104: add x9, x17, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 17) + ARC_X_R(c, 9)));
  /* dd108: adc x9, x9, x1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) + (uint64_t)(ARC_X_R(c, 1)) + (c)->cf));
  /* dd10c: lsr x9, x9, #0x1d */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(29)) & 63)));
  /* dd110: madd w17, w9, w22, w11 */
  ARC_W_W(c, 17, ((uint32_t)(ARC_W_R(c, 11)) + ((uint32_t)(ARC_W_R(c, 9)) * (uint32_t)(ARC_W_R(c, 22)))));
  /* dd114: cbz w16, #0xdd198 */
  if ((ARC_W_R(c, 16)) == 0) goto L_dd198;
  /* dd118: add w11, w16, #9 */
  ARC_W_W(c, 11, (ARC_W_R(c, 16) + UINT64_C(9)));
  /* dd11c: cmp w11, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 10));
  /* dd120: b.hi #0xdd7d0 */
  if (ARC_COND(c, 8)) goto L_dd7d0;
  /* dd124: sub x9, x19, x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) - ARC_X_R(c, 20)));
  /* dd128: cmp x9, #9 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(9));
  /* dd12c: b.lt #0xddaec */
  if (ARC_COND(c, 11)) goto L_ddaec;
  /* dd130: cbz w17, #0xdd064 */
  if ((ARC_W_R(c, 17)) == 0) goto L_dd064;
  /* dd134: umull x9, w17, w5 */
  ARC_X_W(c, 9, (((uint64_t)(uint32_t)(ARC_W_R(c, 17))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 5)))));
  /* dd138: mov w16, #0x3b89 */
  ARC_W_W(c, 16, UINT64_C(15241));
  /* dd13c: movk w16, #0x55e6, lsl #16 */
  ARC_W_W(c, 16, ((ARC_W_R(c, 16) & UINT64_C(18446744069414649855)) | UINT64_C(1441136640)));
  /* dd140: umull x16, w17, w16 */
  ARC_X_W(c, 16, (((uint64_t)(uint32_t)(ARC_W_R(c, 17))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 16)))));
  /* dd144: lsr x9, x9, #0x2d */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(45)) & 63)));
  /* dd148: madd w14, w9, w6, w17 */
  ARC_W_W(c, 14, ((uint32_t)(ARC_W_R(c, 17)) + ((uint32_t)(ARC_W_R(c, 9)) * (uint32_t)(ARC_W_R(c, 6)))));
  /* dd14c: lsr x16, x16, #0x39 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 16)) >> ((UINT64_C(57)) & 63)));
  /* dd150: madd w9, w16, w6, w9 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) + ((uint32_t)(ARC_W_R(c, 16)) * (uint32_t)(ARC_W_R(c, 6)))));
  /* dd154: umull x17, w14, w7 */
  ARC_X_W(c, 17, (((uint64_t)(uint32_t)(ARC_W_R(c, 14))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 7)))));
  /* dd158: umull x0, w9, w7 */
  ARC_X_W(c, 0, (((uint64_t)(uint32_t)(ARC_W_R(c, 9))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 7)))));
  /* dd15c: lsr x17, x17, #0x25 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 17)) >> ((UINT64_C(37)) & 63)));
  /* dd160: msub w14, w17, w21, w14 */
  ARC_W_W(c, 14, ((uint32_t)(ARC_W_R(c, 14)) - ((uint32_t)(ARC_W_R(c, 17)) * (uint32_t)(ARC_W_R(c, 21)))));
  /* dd164: lsr x0, x0, #0x25 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(37)) & 63)));
  /* dd168: msub w9, w0, w21, w9 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) - ((uint32_t)(ARC_W_R(c, 0)) * (uint32_t)(ARC_W_R(c, 21)))));
  /* dd16c: ldrh w14, [x23, w14, uxtw #1] */
  ARC_W_W(c, 14, arc_ld16((ARC_X_R(c, 23) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 14)))) << 1))));
  /* dd170: sturh w14, [x20, #7] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(7)), ARC_W_R(c, 14));
  /* dd174: ldrh w14, [x23, x17, lsl #1] */
  ARC_W_W(c, 14, arc_ld16((ARC_X_R(c, 23) + ((uint64_t)(ARC_X_R(c, 17)) << 1))));
  /* dd178: sturh w14, [x20, #5] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(5)), ARC_W_R(c, 14));
  /* dd17c: add w14, w16, #0x30 */
  ARC_W_W(c, 14, (ARC_W_R(c, 16) + UINT64_C(48)));
  /* dd180: ldrh w9, [x23, w9, uxtw #1] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 23) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 9)))) << 1))));
  /* dd184: sturh w9, [x20, #3] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(3)), ARC_W_R(c, 9));
  /* dd188: ldrh w9, [x23, x0, lsl #1] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 23) + ((uint64_t)(ARC_X_R(c, 0)) << 1))));
  /* dd18c: strb w14, [x20] */
  arc_st8(ARC_X_R(c, 20), ARC_W_R(c, 14));
  /* dd190: sturh w9, [x20, #1] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(1)), ARC_W_R(c, 9));
  /* dd194: b #0xdd070 */
  goto L_dd070;
L_dd198:;
  /* dd198: cbz w17, #0xdd1ac */
  if ((ARC_W_R(c, 17)) == 0) goto L_dd1ac;
  /* dd19c: cmp w17, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 17), ARC_W_R(c, 8));
  /* dd1a0: b.ls #0xdd1b4 */
  if (ARC_COND(c, 9)) goto L_dd1b4;
  /* dd1a4: mov w16, #9 */
  ARC_W_W(c, 16, UINT64_C(9));
  /* dd1a8: b #0xdd238 */
  goto L_dd238;
L_dd1ac:;
  /* dd1ac: mov w16, wzr */
  ARC_W_W(c, 16, ARC_W_R(c, 31));
  /* dd1b0: b #0xdd078 */
  goto L_dd078;
L_dd1b4:;
  /* dd1b4: mov w9, #0x967f */
  ARC_W_W(c, 9, UINT64_C(38527));
  /* dd1b8: movk w9, #0x98, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(9961472)));
  /* dd1bc: cmp w17, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 17), ARC_W_R(c, 9));
  /* dd1c0: b.ls #0xdd1cc */
  if (ARC_COND(c, 9)) goto L_dd1cc;
  /* dd1c4: mov w16, #8 */
  ARC_W_W(c, 16, UINT64_C(8));
  /* dd1c8: b #0xdd238 */
  goto L_dd238;
L_dd1cc:;
  /* dd1cc: mov w9, #0x423f */
  ARC_W_W(c, 9, UINT64_C(16959));
  /* dd1d0: movk w9, #0xf, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(983040)));
  /* dd1d4: cmp w17, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 17), ARC_W_R(c, 9));
  /* dd1d8: b.ls #0xdd1e4 */
  if (ARC_COND(c, 9)) goto L_dd1e4;
  /* dd1dc: mov w16, #7 */
  ARC_W_W(c, 16, UINT64_C(7));
  /* dd1e0: b #0xdd238 */
  goto L_dd238;
L_dd1e4:;
  /* dd1e4: lsr w9, w17, #5 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 17)) >> ((UINT64_C(5)) & 31)));
  /* dd1e8: cmp w9, #0xc34 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(3124));
  /* dd1ec: b.ls #0xdd1f8 */
  if (ARC_COND(c, 9)) goto L_dd1f8;
  /* dd1f0: mov w16, #6 */
  ARC_W_W(c, 16, UINT64_C(6));
  /* dd1f4: b #0xdd238 */
  goto L_dd238;
L_dd1f8:;
  /* dd1f8: lsr w9, w17, #4 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 17)) >> ((UINT64_C(4)) & 31)));
  /* dd1fc: cmp w9, #0x270 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(624));
  /* dd200: b.ls #0xdd20c */
  if (ARC_COND(c, 9)) goto L_dd20c;
  /* dd204: mov w16, #5 */
  ARC_W_W(c, 16, UINT64_C(5));
  /* dd208: b #0xdd238 */
  goto L_dd238;
L_dd20c:;
  /* dd20c: cmp w17, #0x3e7 */
  (void)arc_sub32(c, ARC_W_R(c, 17), UINT64_C(999));
  /* dd210: b.ls #0xdd21c */
  if (ARC_COND(c, 9)) goto L_dd21c;
  /* dd214: mov w16, #4 */
  ARC_W_W(c, 16, UINT64_C(4));
  /* dd218: b #0xdd238 */
  goto L_dd238;
L_dd21c:;
  /* dd21c: cmp w17, #0x63 */
  (void)arc_sub32(c, ARC_W_R(c, 17), UINT64_C(99));
  /* dd220: b.ls #0xdd22c */
  if (ARC_COND(c, 9)) goto L_dd22c;
  /* dd224: mov w16, #3 */
  ARC_W_W(c, 16, UINT64_C(3));
  /* dd228: b #0xdd238 */
  goto L_dd238;
L_dd22c:;
  /* dd22c: cmp w17, #9 */
  (void)arc_sub32(c, ARC_W_R(c, 17), UINT64_C(9));
  /* dd230: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* dd234: cinc w16, w9, hi */
  ARC_W_W(c, 16, (ARC_COND(c, 8) ? (ARC_W_R(c, 9)) + 1 : (ARC_W_R(c, 9))));
L_dd238:;
  /* dd238: add w9, w30, w30, lsl #3 */
  ARC_W_W(c, 9, (ARC_W_R(c, 30) + ((uint32_t)(ARC_W_R(c, 30)) << 3)));
  /* dd23c: cmp w16, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 16), ARC_W_R(c, 10));
  /* dd240: add w9, w9, w16 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + ARC_W_R(c, 16)));
  /* dd244: sub w3, w9, #1 */
  ARC_W_W(c, 3, (ARC_W_R(c, 9) - UINT64_C(1)));
  /* dd248: b.hi #0xdd7e4 */
  if (ARC_COND(c, 8)) goto L_dd7e4;
  /* dd24c: cbz w2, #0xdd2f8 */
  if ((ARC_W_R(c, 2)) == 0) goto L_dd2f8;
  /* dd250: sub x9, x19, x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) - ARC_X_R(c, 20)));
  /* dd254: add w11, w16, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 16) + UINT64_C(1)));
  /* dd258: cmp x9, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 11));
  /* dd25c: b.lt #0xddaec */
  if (ARC_COND(c, 11)) goto L_ddaec;
  /* dd260: lsr w9, w17, #4 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 17)) >> ((UINT64_C(4)) & 31)));
  /* dd264: add x1, x20, w16, uxtw */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + ((uint64_t)(uint32_t)(ARC_W_R(c, 16)))));
  /* dd268: cmp w9, #0x271 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(625));
  /* dd26c: b.lo #0xdd30c */
  if (ARC_COND(c, 3)) goto L_dd30c;
  /* dd270: stur w10, [x29, #-0xc] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-12)), ARC_W_R(c, 10));
  /* dd274: mov w10, #0xe0ff */
  ARC_W_W(c, 10, UINT64_C(57599));
  /* dd278: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* dd27c: movk w10, #0x5f5, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(99942400)));
  /* dd280: mov w19, w2 */
  ARC_W_W(c, 19, ARC_W_R(c, 2));
  /* dd284: mov w4, w3 */
  ARC_W_W(c, 4, ARC_W_R(c, 3));
  /* dd288: mov w14, wzr */
  ARC_W_W(c, 14, ARC_W_R(c, 31));
  /* dd28c: add x0, x1, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 1) + UINT64_C(1)));
L_dd290:;
  /* dd290: mov w9, w17 */
  ARC_W_W(c, 9, ARC_W_R(c, 17));
  /* dd294: umull x17, w17, w5 */
  ARC_X_W(c, 17, (((uint64_t)(uint32_t)(ARC_W_R(c, 17))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 5)))));
  /* dd298: sub x3, x0, w14, uxtw */
  ARC_X_W(c, 3, (ARC_X_R(c, 0) - ((uint64_t)(uint32_t)(ARC_W_R(c, 14)))));
  /* dd29c: cmp w9, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 10));
  /* dd2a0: add w14, w14, #4 */
  ARC_W_W(c, 14, (ARC_W_R(c, 14) + UINT64_C(4)));
  /* dd2a4: lsr x17, x17, #0x2d */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 17)) >> ((UINT64_C(45)) & 63)));
  /* dd2a8: madd w2, w17, w6, w9 */
  ARC_W_W(c, 2, ((uint32_t)(ARC_W_R(c, 9)) + ((uint32_t)(ARC_W_R(c, 17)) * (uint32_t)(ARC_W_R(c, 6)))));
  /* dd2ac: umull x22, w2, w7 */
  ARC_X_W(c, 22, (((uint64_t)(uint32_t)(ARC_W_R(c, 2))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 7)))));
  /* dd2b0: lsr x22, x22, #0x25 */
  ARC_X_W(c, 22, ((uint64_t)(ARC_X_R(c, 22)) >> ((UINT64_C(37)) & 63)));
  /* dd2b4: msub w2, w22, w21, w2 */
  ARC_W_W(c, 2, ((uint32_t)(ARC_W_R(c, 2)) - ((uint32_t)(ARC_W_R(c, 22)) * (uint32_t)(ARC_W_R(c, 21)))));
  /* dd2b8: ldrh w2, [x23, w2, uxtw #1] */
  ARC_W_W(c, 2, arc_ld16((ARC_X_R(c, 23) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 2)))) << 1))));
  /* dd2bc: sturh w2, [x3, #-2] */
  arc_st16((ARC_X_R(c, 3) + INT64_C(-2)), ARC_W_R(c, 2));
  /* dd2c0: ldrh w2, [x23, x22, lsl #1] */
  ARC_W_W(c, 2, arc_ld16((ARC_X_R(c, 23) + ((uint64_t)(ARC_X_R(c, 22)) << 1))));
  /* dd2c4: sturh w2, [x3, #-4] */
  arc_st16((ARC_X_R(c, 3) + INT64_C(-4)), ARC_W_R(c, 2));
  /* dd2c8: b.hi #0xdd290 */
  if (ARC_COND(c, 8)) goto L_dd290;
  /* dd2cc: mov w2, w19 */
  ARC_W_W(c, 2, ARC_W_R(c, 19));
  /* dd2d0: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* dd2d4: mov w8, #0xe0ff */
  ARC_W_W(c, 8, UINT64_C(57599));
  /* dd2d8: ldur w10, [x29, #-0xc] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-12))));
  /* dd2dc: mov w22, #0x3600 */
  ARC_W_W(c, 22, UINT64_C(13824));
  /* dd2e0: mov w3, w4 */
  ARC_W_W(c, 3, ARC_W_R(c, 4));
  /* dd2e4: movk w8, #0x5f5, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(99942400)));
  /* dd2e8: movk w22, #0xc465, lsl #16 */
  ARC_W_W(c, 22, ((ARC_W_R(c, 22) & UINT64_C(18446744069414649855)) | UINT64_C(3294953472)));
  /* dd2ec: cmp w17, #0x64 */
  (void)arc_sub32(c, ARC_W_R(c, 17), UINT64_C(100));
  /* dd2f0: b.hs #0xdd318 */
  if (ARC_COND(c, 2)) goto L_dd318;
  /* dd2f4: b #0xdd340 */
  goto L_dd340;
L_dd2f8:;
  /* dd2f8: cmp x20, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 19));
  /* dd2fc: b.eq #0xddaec */
  if (ARC_COND(c, 0)) goto L_ddaec;
  /* dd300: add w9, w11, #0x30 */
  ARC_W_W(c, 9, (ARC_W_R(c, 11) + UINT64_C(48)));
  /* dd304: strb w9, [x20], #1 */
  { const uint64_t _a = ARC_X_R(c, 20);
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* dd308: b #0xdd078 */
  goto L_dd078;
L_dd30c:;
  /* dd30c: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* dd310: cmp w17, #0x64 */
  (void)arc_sub32(c, ARC_W_R(c, 17), UINT64_C(100));
  /* dd314: b.lo #0xdd340 */
  if (ARC_COND(c, 3)) goto L_dd340;
L_dd318:;
  /* dd318: ubfx w9, w17, #2, #0xe */
  ARC_W_W(c, 9, (((uint32_t)(ARC_W_R(c, 17)) >> 2) & UINT64_C(16383)));
  /* dd31c: mov w0, #0x147b */
  ARC_W_W(c, 0, UINT64_C(5243));
  /* dd320: mvn x14, x14 */
  ARC_X_W(c, 14, (~(uint64_t)(ARC_X_R(c, 14))));
  /* dd324: mul w9, w9, w0 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) * (uint32_t)(ARC_W_R(c, 0))));
  /* dd328: lsr w9, w9, #0x11 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(17)) & 31)));
  /* dd32c: msub w17, w9, w21, w17 */
  ARC_W_W(c, 17, ((uint32_t)(ARC_W_R(c, 17)) - ((uint32_t)(ARC_W_R(c, 9)) * (uint32_t)(ARC_W_R(c, 21)))));
  /* dd330: and x17, x17, #0xffff */
  ARC_X_W(c, 17, (ARC_X_R(c, 17) & UINT64_C(65535)));
  /* dd334: ldrh w17, [x23, x17, lsl #1] */
  ARC_W_W(c, 17, arc_ld16((ARC_X_R(c, 23) + ((uint64_t)(ARC_X_R(c, 17)) << 1))));
  /* dd338: strh w17, [x14, x1] */
  arc_st16((ARC_X_R(c, 14) + ARC_X_R(c, 1)), ARC_W_R(c, 17));
  /* dd33c: mov w17, w9 */
  ARC_W_W(c, 17, ARC_W_R(c, 9));
L_dd340:;
  /* dd340: cmp w17, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 17), UINT64_C(10));
  /* dd344: b.lo #0xdd36c */
  if (ARC_COND(c, 3)) goto L_dd36c;
  /* dd348: ubfiz x9, x17, #1, #0x20 */
  ARC_X_W(c, 9, ((uint64_t)((((uint64_t)(ARC_X_R(c, 17))) & UINT64_C(4294967295))) << 1));
  /* dd34c: mov w17, #0x2e */
  ARC_W_W(c, 17, UINT64_C(46));
  /* dd350: mov w14, w9 */
  ARC_W_W(c, 14, ARC_W_R(c, 9));
  /* dd354: add x14, x23, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 23) + ARC_X_R(c, 14)));
  /* dd358: ldrb w14, [x14, #1] */
  ARC_W_W(c, 14, arc_ld8((ARC_X_R(c, 14) + INT64_C(1))));
  /* dd35c: strb w17, [x20, #1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(1)), ARC_W_R(c, 17));
  /* dd360: strb w14, [x20, #2] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(2)), ARC_W_R(c, 14));
  /* dd364: ldrb w14, [x23, x9] */
  ARC_W_W(c, 14, arc_ld8((ARC_X_R(c, 23) + ARC_X_R(c, 9))));
  /* dd368: b #0xdd378 */
  goto L_dd378;
L_dd36c:;
  /* dd36c: mov w9, #0x2e */
  ARC_W_W(c, 9, UINT64_C(46));
  /* dd370: orr w14, w17, #0x30 */
  ARC_W_W(c, 14, (ARC_W_R(c, 17) | UINT64_C(48)));
  /* dd374: strb w9, [x20, #1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(1)), ARC_W_R(c, 9));
L_dd378:;
  /* dd378: strb w14, [x20] */
  arc_st8(ARC_X_R(c, 20), ARC_W_R(c, 14));
  /* dd37c: add x20, x20, x11 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + ARC_X_R(c, 11)));
  /* dd380: b #0xdd078 */
  goto L_dd078;
L_dd384:;
  /* dd384: cmp w2, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 2), UINT64_C(0));
  /* dd388: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* dd38c: cinc w8, w8, ne */
  ARC_W_W(c, 8, (ARC_COND(c, 1) ? (ARC_W_R(c, 8)) + 1 : (ARC_W_R(c, 8))));
  /* dd390: add w8, w2, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 2) + ARC_W_R(c, 8)));
  /* dd394: add w9, w8, #4 */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) + UINT64_C(4)));
  /* dd398: ldur x8, [x29, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* dd39c: sub x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) - ARC_X_R(c, 8)));
  /* dd3a0: cmp x8, w9, sxtw */
  (void)arc_sub64(c, ARC_X_R(c, 8), ((uint64_t)(int64_t)(int32_t)(ARC_W_R(c, 9))));
  /* dd3a4: b.lt #0xddaec */
  if (ARC_COND(c, 11)) goto L_ddaec;
  /* dd3a8: ldur x19, [x29, #-8] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* dd3ac: mov w8, #0x30 */
  ARC_W_W(c, 8, UINT64_C(48));
  /* dd3b0: strb w8, [x19], #1 */
  { const uint64_t _a = ARC_X_R(c, 19);
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* dd3b4: cbz w2, #0xdd3e0 */
  if ((ARC_W_R(c, 2)) == 0) goto L_dd3e0;
  /* dd3b8: ldur x9, [x29, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* dd3bc: mov w20, w2 */
  ARC_W_W(c, 20, ARC_W_R(c, 2));
  /* dd3c0: mov w8, #0x2e */
  ARC_W_W(c, 8, UINT64_C(46));
  /* dd3c4: mov w1, #0x30 */
  ARC_W_W(c, 1, UINT64_C(48));
  /* dd3c8: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* dd3cc: add x19, x9, #2 */
  ARC_X_W(c, 19, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* dd3d0: strb w8, [x9, #1] */
  arc_st8((ARC_X_R(c, 9) + INT64_C(1)), ARC_W_R(c, 8));
  /* dd3d4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* dd3d8: bl #0x144a20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(906204));
  fn1_144a20(c);
  /* dd3dc: add x19, x19, x20 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + ARC_X_R(c, 20)));
L_dd3e0:;
  /* dd3e0: mov w8, #0x2b65 */
  ARC_W_W(c, 8, UINT64_C(11109));
  /* dd3e4: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* dd3e8: movk w8, #0x3030, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(808452096)));
  /* dd3ec: str w8, [x19], #4 */
  { const uint64_t _a = ARC_X_R(c, 19);
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 8));
  }
  /* dd3f0: b #0xddaf0 */
  goto L_ddaf0;
L_dd3f4:;
  /* dd3f4: ldur x20, [x29, #-8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* dd3f8: str w2, [sp, #0x10] */
  arc_st32(((c)->sp + INT64_C(16)), ARC_W_R(c, 2));
  /* dd3fc: mov x11, xzr */
  ARC_X_W(c, 11, ARC_X_R(c, 31));
  /* dd400: mov w16, wzr */
  ARC_W_W(c, 16, ARC_W_R(c, 31));
  /* dd404: stur wzr, [x29, #-0xc] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-12)), ARC_W_R(c, 31));
  /* dd408: lsl x15, x9, #8 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(8)) & 63)));
L_dd40c:;
  /* dd40c: neg w9, w4 */
  ARC_W_W(c, 9, ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 4))));
  /* dd410: nop  */
  /* nop: no architectural effect here */
  /* dd414: adr x14, #0x5fd68 */
  ARC_X_W(c, 14, (arc_image_bases[1] + UINT64_C(392552)));
  /* dd418: lsr x0, x9, #4 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(4)) & 63)));
  /* dd41c: nop  */
  /* nop: no architectural effect here */
  /* dd420: adr x17, #0x5fdae */
  ARC_X_W(c, 17, (arc_image_bases[1] + UINT64_C(392622)));
  /* dd424: mov w1, #0xc7 */
  ARC_W_W(c, 1, UINT64_C(199));
  /* dd428: and w24, w9, #0xf */
  ARC_W_W(c, 24, (ARC_W_R(c, 9) & UINT64_C(15)));
  /* dd42c: mov w6, #0x1759 */
  ARC_W_W(c, 6, UINT64_C(5977));
  /* dd430: ldrb w5, [x14, x0] */
  ARC_W_W(c, 5, arc_ld8((ARC_X_R(c, 14) + ARC_X_R(c, 0))));
  /* dd434: ldrh w14, [x17, x0, lsl #1] */
  ARC_W_W(c, 14, arc_ld16((ARC_X_R(c, 17) + ((uint64_t)(ARC_X_R(c, 0)) << 1))));
  /* dd438: add w9, w0, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* dd43c: mov w21, #0x851f */
  ARC_W_W(c, 21, UINT64_C(34079));
  /* dd440: ldrh w25, [x17, w9, uxtw #1] */
  ARC_W_W(c, 25, arc_ld16((ARC_X_R(c, 17) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 9)))) << 1))));
  /* dd444: nop  */
  /* nop: no architectural effect here */
  /* dd448: adr x3, #0x5fe38 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(392760)));
  /* dd44c: cmp w5, #0xc7 */
  (void)arc_sub32(c, ARC_W_R(c, 5), UINT64_C(199));
  /* dd450: mov w4, #0x18 */
  ARC_W_W(c, 4, UINT64_C(24));
  /* dd454: csel w0, w5, w1, hi */
  ARC_W_W(c, 0, (ARC_COND(c, 8) ? (ARC_W_R(c, 5)) : ARC_W_R(c, 1)));
  /* dd458: movk w6, #0xd1b7, lsl #16 */
  ARC_W_W(c, 6, ((ARC_W_R(c, 6) & UINT64_C(18446744069414649855)) | UINT64_C(3518431232)));
  /* dd45c: mov w7, #-0x2710 */
  ARC_W_W(c, 7, UINT64_C(18446744073709541616));
  /* dd460: movk w21, #0x51eb, lsl #16 */
  ARC_W_W(c, 21, ((ARC_W_R(c, 21) & UINT64_C(18446744069414649855)) | UINT64_C(1374355456)));
  /* dd464: mov w23, #0x64 */
  ARC_W_W(c, 23, UINT64_C(100));
  /* dd468: sub w26, w14, w5 */
  ARC_W_W(c, 26, (ARC_W_R(c, 14) - ARC_W_R(c, 5)));
  /* dd46c: add w27, w0, #1 */
  ARC_W_W(c, 27, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* dd470: nop  */
  /* nop: no architectural effect here */
  /* dd474: adr x28, #0x58470 */
  ARC_X_W(c, 28, (arc_image_bases[1] + UINT64_C(361584)));
  /* dd478: b #0xdd49c */
  goto L_dd49c;
L_dd47c:;
  /* dd47c: mov x9, #0x3030303030303030 */
  ARC_X_W(c, 9, UINT64_C(3472328296227680304));
  /* dd480: str x9, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 9));
  /* dd484: strb w9, [x20, #8] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(8)), ARC_W_R(c, 9));
L_dd488:;
  /* dd488: add x20, x20, #9 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(9)));
  /* dd48c: mov w16, w30 */
  ARC_W_W(c, 16, ARC_W_R(c, 30));
L_dd490:;
  /* dd490: add x5, x5, #1 */
  ARC_X_W(c, 5, (ARC_X_R(c, 5) + UINT64_C(1)));
  /* dd494: cmp x5, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 5), ARC_X_R(c, 27));
  /* dd498: b.eq #0xdd7a4 */
  if (ARC_COND(c, 0)) goto L_dd7a4;
L_dd49c:;
  /* dd49c: add w14, w26, w5 */
  ARC_W_W(c, 14, (ARC_W_R(c, 26) + ARC_W_R(c, 5)));
  /* dd4a0: cmp w14, w25 */
  (void)arc_sub32(c, ARC_W_R(c, 14), ARC_W_R(c, 25));
  /* dd4a4: b.hs #0xdd554 */
  if (ARC_COND(c, 2)) goto L_dd554;
  /* dd4a8: umaddl x9, w14, w4, x3 */
  ARC_X_W(c, 9, (((uint64_t)(ARC_X_R(c, 3))) + (((uint64_t)(uint32_t)(ARC_W_R(c, 14))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 4))))));
  /* dd4ac: ldp x14, x17, [x9] */
  { const uint64_t _pa = ARC_X_R(c, 9);
    ARC_X_W(c, 14, arc_ld64(_pa));
    ARC_X_W(c, 17, arc_ld64(_pa + 8));
  }
  /* dd4b0: ldr x9, [x9, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(16))));
  /* dd4b4: mul x2, x15, x9 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 15)) * (uint64_t)(ARC_X_R(c, 9))));
  /* dd4b8: umulh x0, x15, x14 */
  ARC_X_W(c, 0, arc_umulh(ARC_X_R(c, 15), ARC_X_R(c, 14)));
  /* dd4bc: umulh x1, x15, x17 */
  ARC_X_W(c, 1, arc_umulh(ARC_X_R(c, 15), ARC_X_R(c, 17)));
  /* dd4c0: madd x14, x11, x14, x0 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 0)) + ((uint64_t)(ARC_X_R(c, 11)) * (uint64_t)(ARC_X_R(c, 14)))));
  /* dd4c4: madd x0, x11, x17, x1 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 1)) + ((uint64_t)(ARC_X_R(c, 11)) * (uint64_t)(ARC_X_R(c, 17)))));
  /* dd4c8: mul x17, x15, x17 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 15)) * (uint64_t)(ARC_X_R(c, 17))));
  /* dd4cc: umulh x1, x15, x9 */
  ARC_X_W(c, 1, arc_umulh(ARC_X_R(c, 15), ARC_X_R(c, 9)));
  /* dd4d0: madd x9, x11, x9, x1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 1)) + ((uint64_t)(ARC_X_R(c, 11)) * (uint64_t)(ARC_X_R(c, 9)))));
  /* dd4d4: cmn x17, x14 */
  (void)arc_add64(c, ARC_X_R(c, 17), ARC_X_R(c, 14), 0);
  /* dd4d8: adc x14, x2, x0 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 2)) + (uint64_t)(ARC_X_R(c, 0)) + (c)->cf));
  /* dd4dc: mvn w0, w24 */
  ARC_W_W(c, 0, (~(uint32_t)(ARC_W_R(c, 24))));
  /* dd4e0: cmp x14, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 2));
  /* dd4e4: lsr x14, x14, x24 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 14)) >> ((ARC_X_R(c, 24)) & 63)));
  /* dd4e8: cinc x9, x9, lo */
  ARC_X_W(c, 9, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) + 1 : (ARC_X_R(c, 9))));
  /* dd4ec: lsl x17, x9, #1 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* dd4f0: lsr x9, x9, x24 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((ARC_X_R(c, 24)) & 63)));
  /* dd4f4: lsl x17, x17, x0 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 17)) << ((ARC_X_R(c, 0)) & 63)));
  /* dd4f8: umulh x2, x9, x13 */
  ARC_X_W(c, 2, arc_umulh(ARC_X_R(c, 9), ARC_X_R(c, 13)));
  /* dd4fc: orr x30, x17, x14 */
  ARC_X_W(c, 30, (ARC_X_R(c, 17) | ARC_X_R(c, 14)));
  /* dd500: mul x0, x9, x13 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 13))));
  /* dd504: umulh x17, x30, x13 */
  ARC_X_W(c, 17, arc_umulh(ARC_X_R(c, 30), ARC_X_R(c, 13)));
  /* dd508: mul x1, x30, x12 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 30)) * (uint64_t)(ARC_X_R(c, 12))));
  /* dd50c: umulh x22, x30, x12 */
  ARC_X_W(c, 22, arc_umulh(ARC_X_R(c, 30), ARC_X_R(c, 12)));
  /* dd510: madd x9, x9, x12, x2 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 2)) + ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 12)))));
  /* dd514: adds x2, x17, x0 */
  ARC_X_W(c, 2, arc_add64(c, ARC_X_R(c, 17), ARC_X_R(c, 0), 0));
  /* dd518: cmn x1, x2 */
  (void)arc_add64(c, ARC_X_R(c, 1), ARC_X_R(c, 2), 0);
  /* dd51c: cset w1, hs */
  ARC_W_W(c, 1, (ARC_COND(c, 2) ? 1 : 0));
  /* dd520: cmn x17, x0 */
  (void)arc_add64(c, ARC_X_R(c, 17), ARC_X_R(c, 0), 0);
  /* dd524: mov w17, #0x3600 */
  ARC_W_W(c, 17, UINT64_C(13824));
  /* dd528: movk w17, #0xc465, lsl #16 */
  ARC_W_W(c, 17, ((ARC_W_R(c, 17) & UINT64_C(18446744069414649855)) | UINT64_C(3294953472)));
  /* dd52c: add x9, x9, x22 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 22)));
  /* dd530: adc x9, x9, x1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) + (uint64_t)(ARC_X_R(c, 1)) + (c)->cf));
  /* dd534: lsr x9, x9, #0x1d */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(29)) & 63)));
  /* dd538: madd w17, w9, w17, w14 */
  ARC_W_W(c, 17, ((uint32_t)(ARC_W_R(c, 14)) + ((uint32_t)(ARC_W_R(c, 9)) * (uint32_t)(ARC_W_R(c, 17)))));
  /* dd53c: cbnz w16, #0xdd55c */
  if ((ARC_W_R(c, 16)) != 0) goto L_dd55c;
  /* dd540: cbz w17, #0xdd5e4 */
  if ((ARC_W_R(c, 17)) == 0) goto L_dd5e4;
  /* dd544: cmp w17, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 17), ARC_W_R(c, 8));
  /* dd548: b.ls #0xdd5ec */
  if (ARC_COND(c, 9)) goto L_dd5ec;
  /* dd54c: mov w16, #9 */
  ARC_W_W(c, 16, UINT64_C(9));
  /* dd550: b #0xdd670 */
  goto L_dd670;
L_dd554:;
  /* dd554: mov w17, wzr */
  ARC_W_W(c, 17, ARC_W_R(c, 31));
  /* dd558: cbz w16, #0xdd5dc */
  if ((ARC_W_R(c, 16)) == 0) goto L_dd5dc;
L_dd55c:;
  /* dd55c: add w30, w16, #9 */
  ARC_W_W(c, 30, (ARC_W_R(c, 16) + UINT64_C(9)));
  /* dd560: cmp w30, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 30), ARC_W_R(c, 10));
  /* dd564: b.hi #0xdd7bc */
  if (ARC_COND(c, 8)) goto L_dd7bc;
  /* dd568: sub x9, x19, x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) - ARC_X_R(c, 20)));
  /* dd56c: cmp x9, #9 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(9));
  /* dd570: b.lt #0xddaec */
  if (ARC_COND(c, 11)) goto L_ddaec;
  /* dd574: cbz w17, #0xdd47c */
  if ((ARC_W_R(c, 17)) == 0) goto L_dd47c;
  /* dd578: umull x9, w17, w6 */
  ARC_X_W(c, 9, (((uint64_t)(uint32_t)(ARC_W_R(c, 17))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 6)))));
  /* dd57c: mov w16, #0x3b89 */
  ARC_W_W(c, 16, UINT64_C(15241));
  /* dd580: movk w16, #0x55e6, lsl #16 */
  ARC_W_W(c, 16, ((ARC_W_R(c, 16) & UINT64_C(18446744069414649855)) | UINT64_C(1441136640)));
  /* dd584: umull x16, w17, w16 */
  ARC_X_W(c, 16, (((uint64_t)(uint32_t)(ARC_W_R(c, 17))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 16)))));
  /* dd588: lsr x9, x9, #0x2d */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(45)) & 63)));
  /* dd58c: madd w14, w9, w7, w17 */
  ARC_W_W(c, 14, ((uint32_t)(ARC_W_R(c, 17)) + ((uint32_t)(ARC_W_R(c, 9)) * (uint32_t)(ARC_W_R(c, 7)))));
  /* dd590: lsr x16, x16, #0x39 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 16)) >> ((UINT64_C(57)) & 63)));
  /* dd594: madd w9, w16, w7, w9 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) + ((uint32_t)(ARC_W_R(c, 16)) * (uint32_t)(ARC_W_R(c, 7)))));
  /* dd598: umull x17, w14, w21 */
  ARC_X_W(c, 17, (((uint64_t)(uint32_t)(ARC_W_R(c, 14))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 21)))));
  /* dd59c: umull x0, w9, w21 */
  ARC_X_W(c, 0, (((uint64_t)(uint32_t)(ARC_W_R(c, 9))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 21)))));
  /* dd5a0: lsr x17, x17, #0x25 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 17)) >> ((UINT64_C(37)) & 63)));
  /* dd5a4: msub w14, w17, w23, w14 */
  ARC_W_W(c, 14, ((uint32_t)(ARC_W_R(c, 14)) - ((uint32_t)(ARC_W_R(c, 17)) * (uint32_t)(ARC_W_R(c, 23)))));
  /* dd5a8: lsr x0, x0, #0x25 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(37)) & 63)));
  /* dd5ac: msub w9, w0, w23, w9 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) - ((uint32_t)(ARC_W_R(c, 0)) * (uint32_t)(ARC_W_R(c, 23)))));
  /* dd5b0: ldrh w14, [x28, w14, uxtw #1] */
  ARC_W_W(c, 14, arc_ld16((ARC_X_R(c, 28) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 14)))) << 1))));
  /* dd5b4: sturh w14, [x20, #7] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(7)), ARC_W_R(c, 14));
  /* dd5b8: ldrh w14, [x28, x17, lsl #1] */
  ARC_W_W(c, 14, arc_ld16((ARC_X_R(c, 28) + ((uint64_t)(ARC_X_R(c, 17)) << 1))));
  /* dd5bc: sturh w14, [x20, #5] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(5)), ARC_W_R(c, 14));
  /* dd5c0: add w14, w16, #0x30 */
  ARC_W_W(c, 14, (ARC_W_R(c, 16) + UINT64_C(48)));
  /* dd5c4: ldrh w9, [x28, w9, uxtw #1] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 28) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 9)))) << 1))));
  /* dd5c8: sturh w9, [x20, #3] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(3)), ARC_W_R(c, 9));
  /* dd5cc: ldrh w9, [x28, x0, lsl #1] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 28) + ((uint64_t)(ARC_X_R(c, 0)) << 1))));
  /* dd5d0: strb w14, [x20] */
  arc_st8(ARC_X_R(c, 20), ARC_W_R(c, 14));
  /* dd5d4: sturh w9, [x20, #1] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(1)), ARC_W_R(c, 9));
  /* dd5d8: b #0xdd488 */
  goto L_dd488;
L_dd5dc:;
  /* dd5dc: mov w16, w17 */
  ARC_W_W(c, 16, ARC_W_R(c, 17));
  /* dd5e0: b #0xdd490 */
  goto L_dd490;
L_dd5e4:;
  /* dd5e4: mov w16, wzr */
  ARC_W_W(c, 16, ARC_W_R(c, 31));
  /* dd5e8: b #0xdd490 */
  goto L_dd490;
L_dd5ec:;
  /* dd5ec: mov w9, #0x967f */
  ARC_W_W(c, 9, UINT64_C(38527));
  /* dd5f0: movk w9, #0x98, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(9961472)));
  /* dd5f4: cmp w17, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 17), ARC_W_R(c, 9));
  /* dd5f8: b.ls #0xdd604 */
  if (ARC_COND(c, 9)) goto L_dd604;
  /* dd5fc: mov w16, #8 */
  ARC_W_W(c, 16, UINT64_C(8));
  /* dd600: b #0xdd670 */
  goto L_dd670;
L_dd604:;
  /* dd604: mov w9, #0x423f */
  ARC_W_W(c, 9, UINT64_C(16959));
  /* dd608: movk w9, #0xf, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(983040)));
  /* dd60c: cmp w17, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 17), ARC_W_R(c, 9));
  /* dd610: b.ls #0xdd61c */
  if (ARC_COND(c, 9)) goto L_dd61c;
  /* dd614: mov w16, #7 */
  ARC_W_W(c, 16, UINT64_C(7));
  /* dd618: b #0xdd670 */
  goto L_dd670;
L_dd61c:;
  /* dd61c: lsr w9, w17, #5 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 17)) >> ((UINT64_C(5)) & 31)));
  /* dd620: cmp w9, #0xc34 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(3124));
  /* dd624: b.ls #0xdd630 */
  if (ARC_COND(c, 9)) goto L_dd630;
  /* dd628: mov w16, #6 */
  ARC_W_W(c, 16, UINT64_C(6));
  /* dd62c: b #0xdd670 */
  goto L_dd670;
L_dd630:;
  /* dd630: lsr w9, w17, #4 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 17)) >> ((UINT64_C(4)) & 31)));
  /* dd634: cmp w9, #0x270 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(624));
  /* dd638: b.ls #0xdd644 */
  if (ARC_COND(c, 9)) goto L_dd644;
  /* dd63c: mov w16, #5 */
  ARC_W_W(c, 16, UINT64_C(5));
  /* dd640: b #0xdd670 */
  goto L_dd670;
L_dd644:;
  /* dd644: cmp w17, #0x3e7 */
  (void)arc_sub32(c, ARC_W_R(c, 17), UINT64_C(999));
  /* dd648: b.ls #0xdd654 */
  if (ARC_COND(c, 9)) goto L_dd654;
  /* dd64c: mov w16, #4 */
  ARC_W_W(c, 16, UINT64_C(4));
  /* dd650: b #0xdd670 */
  goto L_dd670;
L_dd654:;
  /* dd654: cmp w17, #0x63 */
  (void)arc_sub32(c, ARC_W_R(c, 17), UINT64_C(99));
  /* dd658: b.ls #0xdd664 */
  if (ARC_COND(c, 9)) goto L_dd664;
  /* dd65c: mov w16, #3 */
  ARC_W_W(c, 16, UINT64_C(3));
  /* dd660: b #0xdd670 */
  goto L_dd670;
L_dd664:;
  /* dd664: cmp w17, #9 */
  (void)arc_sub32(c, ARC_W_R(c, 17), UINT64_C(9));
  /* dd668: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* dd66c: cinc w16, w9, hi */
  ARC_W_W(c, 16, (ARC_COND(c, 8) ? (ARC_W_R(c, 9)) + 1 : (ARC_W_R(c, 9))));
L_dd670:;
  /* dd670: mvn w9, w5 */
  ARC_W_W(c, 9, (~(uint32_t)(ARC_W_R(c, 5))));
  /* dd674: cmp w16, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 16), ARC_W_R(c, 10));
  /* dd678: add w9, w9, w9, lsl #3 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + ((uint32_t)(ARC_W_R(c, 9)) << 3)));
  /* dd67c: add w9, w9, w16 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + ARC_W_R(c, 16)));
  /* dd680: sub w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) - UINT64_C(1)));
  /* dd684: stur w9, [x29, #-0xc] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-12)), ARC_W_R(c, 9));
  /* dd688: b.hi #0xddc0c */
  if (ARC_COND(c, 8)) goto L_ddc0c;
  /* dd68c: ldr w9, [sp, #0x10] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(16))));
  /* dd690: cbz w9, #0xdd758 */
  if ((ARC_W_R(c, 9)) == 0) goto L_dd758;
  /* dd694: sub x9, x19, x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) - ARC_X_R(c, 20)));
  /* dd698: add w30, w16, #1 */
  ARC_W_W(c, 30, (ARC_W_R(c, 16) + UINT64_C(1)));
  /* dd69c: cmp x9, x30 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 30));
  /* dd6a0: b.lt #0xddaec */
  if (ARC_COND(c, 11)) goto L_ddaec;
  /* dd6a4: lsr w9, w17, #4 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 17)) >> ((UINT64_C(4)) & 31)));
  /* dd6a8: cmp w9, #0x271 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(625));
  /* dd6ac: b.lo #0xdd76c */
  if (ARC_COND(c, 3)) goto L_dd76c;
  /* dd6b0: add x9, x20, w16, uxtw */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) + ((uint64_t)(uint32_t)(ARC_W_R(c, 16)))));
  /* dd6b4: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* dd6b8: add x14, x9, #1 */
  ARC_X_W(c, 14, (ARC_X_R(c, 9) + UINT64_C(1)));
L_dd6bc:;
  /* dd6bc: mov w9, w17 */
  ARC_W_W(c, 9, ARC_W_R(c, 17));
  /* dd6c0: umull x17, w17, w6 */
  ARC_X_W(c, 17, (((uint64_t)(uint32_t)(ARC_W_R(c, 17))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 6)))));
  /* dd6c4: sub x22, x14, w1, uxtw */
  ARC_X_W(c, 22, (ARC_X_R(c, 14) - ((uint64_t)(uint32_t)(ARC_W_R(c, 1)))));
  /* dd6c8: cmp w9, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 8));
  /* dd6cc: add w1, w1, #4 */
  ARC_W_W(c, 1, (ARC_W_R(c, 1) + UINT64_C(4)));
  /* dd6d0: lsr x17, x17, #0x2d */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 17)) >> ((UINT64_C(45)) & 63)));
  /* dd6d4: madd w0, w17, w7, w9 */
  ARC_W_W(c, 0, ((uint32_t)(ARC_W_R(c, 9)) + ((uint32_t)(ARC_W_R(c, 17)) * (uint32_t)(ARC_W_R(c, 7)))));
  /* dd6d8: umull x2, w0, w21 */
  ARC_X_W(c, 2, (((uint64_t)(uint32_t)(ARC_W_R(c, 0))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 21)))));
  /* dd6dc: lsr x2, x2, #0x25 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 2)) >> ((UINT64_C(37)) & 63)));
  /* dd6e0: msub w0, w2, w23, w0 */
  ARC_W_W(c, 0, ((uint32_t)(ARC_W_R(c, 0)) - ((uint32_t)(ARC_W_R(c, 2)) * (uint32_t)(ARC_W_R(c, 23)))));
  /* dd6e4: ldrh w0, [x28, w0, uxtw #1] */
  ARC_W_W(c, 0, arc_ld16((ARC_X_R(c, 28) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 0)))) << 1))));
  /* dd6e8: sturh w0, [x22, #-2] */
  arc_st16((ARC_X_R(c, 22) + INT64_C(-2)), ARC_W_R(c, 0));
  /* dd6ec: ldrh w0, [x28, x2, lsl #1] */
  ARC_W_W(c, 0, arc_ld16((ARC_X_R(c, 28) + ((uint64_t)(ARC_X_R(c, 2)) << 1))));
  /* dd6f0: sturh w0, [x22, #-4] */
  arc_st16((ARC_X_R(c, 22) + INT64_C(-4)), ARC_W_R(c, 0));
  /* dd6f4: b.hi #0xdd6bc */
  if (ARC_COND(c, 8)) goto L_dd6bc;
  /* dd6f8: cmp w17, #0x64 */
  (void)arc_sub32(c, ARC_W_R(c, 17), UINT64_C(100));
  /* dd6fc: b.lo #0xdd72c */
  if (ARC_COND(c, 3)) goto L_dd72c;
L_dd700:;
  /* dd700: ubfx w9, w17, #2, #0xe */
  ARC_W_W(c, 9, (((uint32_t)(ARC_W_R(c, 17)) >> 2) & UINT64_C(16383)));
  /* dd704: mov w14, #0x147b */
  ARC_W_W(c, 14, UINT64_C(5243));
  /* dd708: mvn x0, x1 */
  ARC_X_W(c, 0, (~(uint64_t)(ARC_X_R(c, 1))));
  /* dd70c: mul w9, w9, w14 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) * (uint32_t)(ARC_W_R(c, 14))));
  /* dd710: lsr w9, w9, #0x11 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(17)) & 31)));
  /* dd714: msub w14, w9, w23, w17 */
  ARC_W_W(c, 14, ((uint32_t)(ARC_W_R(c, 17)) - ((uint32_t)(ARC_W_R(c, 9)) * (uint32_t)(ARC_W_R(c, 23)))));
  /* dd718: add x17, x20, w16, uxtw */
  ARC_X_W(c, 17, (ARC_X_R(c, 20) + ((uint64_t)(uint32_t)(ARC_W_R(c, 16)))));
  /* dd71c: and x14, x14, #0xffff */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) & UINT64_C(65535)));
  /* dd720: ldrh w14, [x28, x14, lsl #1] */
  ARC_W_W(c, 14, arc_ld16((ARC_X_R(c, 28) + ((uint64_t)(ARC_X_R(c, 14)) << 1))));
  /* dd724: strh w14, [x0, x17] */
  arc_st16((ARC_X_R(c, 0) + ARC_X_R(c, 17)), ARC_W_R(c, 14));
  /* dd728: mov w17, w9 */
  ARC_W_W(c, 17, ARC_W_R(c, 9));
L_dd72c:;
  /* dd72c: cmp w17, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 17), UINT64_C(10));
  /* dd730: b.lo #0xdd77c */
  if (ARC_COND(c, 3)) goto L_dd77c;
  /* dd734: ubfiz x9, x17, #1, #0x20 */
  ARC_X_W(c, 9, ((uint64_t)((((uint64_t)(ARC_X_R(c, 17))) & UINT64_C(4294967295))) << 1));
  /* dd738: mov w17, #0x2e */
  ARC_W_W(c, 17, UINT64_C(46));
  /* dd73c: mov w14, w9 */
  ARC_W_W(c, 14, ARC_W_R(c, 9));
  /* dd740: add x14, x28, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 28) + ARC_X_R(c, 14)));
  /* dd744: ldrb w14, [x14, #1] */
  ARC_W_W(c, 14, arc_ld8((ARC_X_R(c, 14) + INT64_C(1))));
  /* dd748: strb w17, [x20, #1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(1)), ARC_W_R(c, 17));
  /* dd74c: strb w14, [x20, #2] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(2)), ARC_W_R(c, 14));
  /* dd750: ldrb w14, [x28, x9] */
  ARC_W_W(c, 14, arc_ld8((ARC_X_R(c, 28) + ARC_X_R(c, 9))));
  /* dd754: b #0xdd788 */
  goto L_dd788;
L_dd758:;
  /* dd758: cmp x20, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 19));
  /* dd75c: b.eq #0xddaec */
  if (ARC_COND(c, 0)) goto L_ddaec;
  /* dd760: add w9, w30, #0x30 */
  ARC_W_W(c, 9, (ARC_W_R(c, 30) + UINT64_C(48)));
  /* dd764: strb w9, [x20], #1 */
  { const uint64_t _a = ARC_X_R(c, 20);
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* dd768: b #0xdd490 */
  goto L_dd490;
L_dd76c:;
  /* dd76c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* dd770: cmp w17, #0x64 */
  (void)arc_sub32(c, ARC_W_R(c, 17), UINT64_C(100));
  /* dd774: b.hs #0xdd700 */
  if (ARC_COND(c, 2)) goto L_dd700;
  /* dd778: b #0xdd72c */
  goto L_dd72c;
L_dd77c:;
  /* dd77c: mov w9, #0x2e */
  ARC_W_W(c, 9, UINT64_C(46));
  /* dd780: orr w14, w17, #0x30 */
  ARC_W_W(c, 14, (ARC_W_R(c, 17) | UINT64_C(48)));
  /* dd784: strb w9, [x20, #1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(1)), ARC_W_R(c, 9));
L_dd788:;
  /* dd788: strb w14, [x20] */
  arc_st8(ARC_X_R(c, 20), ARC_W_R(c, 14));
  /* dd78c: add x20, x20, x30 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + ARC_X_R(c, 30)));
  /* dd790: b #0xdd490 */
  goto L_dd490;
L_dd794:;
  /* dd794: ldr w4, [sp, #0xc] */
  ARC_W_W(c, 4, arc_ld32(((c)->sp + INT64_C(12))));
  /* dd798: stur w3, [x29, #-0xc] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-12)), ARC_W_R(c, 3));
  /* dd79c: str w2, [sp, #0x10] */
  arc_st32(((c)->sp + INT64_C(16)), ARC_W_R(c, 2));
  /* dd7a0: tbnz w4, #0x1f, #0xdd7dc */
  if (((ARC_W_R(c, 4)) >> 31 & 1) != 0) goto L_dd7dc;
L_dd7a4:;
  /* dd7a4: ldr w2, [sp, #0x10] */
  ARC_W_W(c, 2, arc_ld32(((c)->sp + INT64_C(16))));
  /* dd7a8: mov w11, wzr */
  ARC_W_W(c, 11, ARC_W_R(c, 31));
  /* dd7ac: mov w17, wzr */
  ARC_W_W(c, 17, ARC_W_R(c, 31));
  /* dd7b0: sub w12, w10, w16 */
  ARC_W_W(c, 12, (ARC_W_R(c, 10) - ARC_W_R(c, 16)));
  /* dd7b4: mov w13, w16 */
  ARC_W_W(c, 13, ARC_W_R(c, 16));
  /* dd7b8: b #0xdd864 */
  goto L_dd864;
L_dd7bc:;
  /* dd7bc: mov w13, w16 */
  ARC_W_W(c, 13, ARC_W_R(c, 16));
  /* dd7c0: mov w16, #9 */
  ARC_W_W(c, 16, UINT64_C(9));
L_dd7c4:;
  /* dd7c4: ldur w3, [x29, #-0xc] */
  ARC_W_W(c, 3, arc_ld32((ARC_X_R(c, 29) + INT64_C(-12))));
  /* dd7c8: ldr w2, [sp, #0x10] */
  ARC_W_W(c, 2, arc_ld32(((c)->sp + INT64_C(16))));
  /* dd7cc: b #0xdd7e8 */
  goto L_dd7e8;
L_dd7d0:;
  /* dd7d0: mov w13, w16 */
  ARC_W_W(c, 13, ARC_W_R(c, 16));
  /* dd7d4: mov w16, #9 */
  ARC_W_W(c, 16, UINT64_C(9));
  /* dd7d8: b #0xdd7e8 */
  goto L_dd7e8;
L_dd7dc:;
  /* dd7dc: mov x11, xzr */
  ARC_X_W(c, 11, ARC_X_R(c, 31));
  /* dd7e0: b #0xdd40c */
  goto L_dd40c;
L_dd7e4:;
  /* dd7e4: mov w13, wzr */
  ARC_W_W(c, 13, ARC_W_R(c, 31));
L_dd7e8:;
  /* dd7e8: sub w12, w10, w13 */
  ARC_W_W(c, 12, (ARC_W_R(c, 10) - ARC_W_R(c, 13)));
  /* dd7ec: ldr w0, [sp, #0xc] */
  ARC_W_W(c, 0, arc_ld32(((c)->sp + INT64_C(12))));
  /* dd7f0: stur w3, [x29, #-0xc] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-12)), ARC_W_R(c, 3));
  /* dd7f4: subs w11, w16, w12 */
  ARC_W_W(c, 11, arc_sub32(c, ARC_W_R(c, 16), ARC_W_R(c, 12)));
  /* dd7f8: ldr x16, [sp] */
  ARC_X_W(c, 16, arc_ld64((c)->sp));
  /* dd7fc: b.ls #0xdd85c */
  if (ARC_COND(c, 9)) goto L_dd85c;
  /* dd800: mov w14, #0xcccd */
  ARC_W_W(c, 14, UINT64_C(52429));
  /* dd804: movk w14, #0xcccc, lsl #16 */
  ARC_W_W(c, 14, ((ARC_W_R(c, 14) & UINT64_C(18446744069414649855)) | UINT64_C(3435921408)));
L_dd808:;
  /* dd808: umull x9, w17, w14 */
  ARC_X_W(c, 9, (((uint64_t)(uint32_t)(ARC_W_R(c, 17))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 14)))));
  /* dd80c: mov w15, w17 */
  ARC_W_W(c, 15, ARC_W_R(c, 17));
  /* dd810: subs w11, w11, #1 */
  ARC_W_W(c, 11, arc_sub32(c, ARC_W_R(c, 11), UINT64_C(1)));
  /* dd814: lsr x17, x9, #0x23 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(35)) & 63)));
  /* dd818: b.ne #0xdd808 */
  if (ARC_COND(c, 1)) goto L_dd808;
  /* dd81c: mov w9, #0xa */
  ARC_W_W(c, 9, UINT64_C(10));
  /* dd820: msub w11, w17, w9, w15 */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 15)) - ((uint32_t)(ARC_W_R(c, 17)) * (uint32_t)(ARC_W_R(c, 9)))));
  /* dd824: cmp w11, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(5));
  /* dd828: b.ne #0xdd864 */
  if (ARC_COND(c, 1)) goto L_dd864;
  /* dd82c: sub w10, w10, w3 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) - ARC_W_R(c, 3)));
  /* dd830: neg w9, w0 */
  ARC_W_W(c, 9, ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 0))));
  /* dd834: sub w11, w9, w10 */
  ARC_W_W(c, 11, (ARC_W_R(c, 9) - ARC_W_R(c, 10)));
  /* dd838: cmp w11, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(1));
  /* dd83c: b.lt #0xddba8 */
  if (ARC_COND(c, 11)) goto L_ddba8;
  /* dd840: cmp w11, #0x3b */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(59));
  /* dd844: b.hi #0xddbec */
  if (ARC_COND(c, 8)) goto L_ddbec;
  /* dd848: mov x9, #-1 */
  ARC_X_W(c, 9, UINT64_C(18446744073709551615));
  /* dd84c: lsl x9, x9, x11 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((ARC_X_R(c, 11)) & 63)));
  /* dd850: bics xzr, x16, x9 */
  { uint64_t _r = (uint64_t)(ARC_X_R(c, 16) & (~ARC_X_R(c, 9)));
    arc_flags_logical64(c, _r);
    ARC_X_W(c, 31, _r); }
  /* dd854: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* dd858: b #0xddbac */
  goto L_ddbac;
L_dd85c:;
  /* dd85c: mov w11, wzr */
  ARC_W_W(c, 11, ARC_W_R(c, 31));
  /* dd860: b #0xdd864 */
  goto L_dd864;
L_dd864:;
  /* dd864: cmp w11, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(5));
  /* dd868: cset w23, hi */
  ARC_W_W(c, 23, (ARC_COND(c, 8) ? 1 : 0));
L_dd86c:;
  /* dd86c: cbz w13, #0xdd90c */
  if ((ARC_W_R(c, 13)) == 0) goto L_dd90c;
  /* dd870: sub x8, x19, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) - ARC_X_R(c, 20)));
  /* dd874: mov w21, w12 */
  ARC_W_W(c, 21, ARC_W_R(c, 12));
  /* dd878: ldur w0, [x29, #-0xc] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(-12))));
  /* dd87c: cmp x8, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 21));
  /* dd880: b.lt #0xddaec */
  if (ARC_COND(c, 11)) goto L_ddaec;
  /* dd884: cbz w17, #0xdd9b4 */
  if ((ARC_W_R(c, 17)) == 0) goto L_dd9b4;
  /* dd888: subs w9, w12, #1 */
  ARC_W_W(c, 9, arc_sub32(c, ARC_W_R(c, 12), UINT64_C(1)));
  /* dd88c: b.eq #0xdd9d0 */
  if (ARC_COND(c, 0)) goto L_dd9d0;
  /* dd890: add x13, x20, x21 */
  ARC_X_W(c, 13, (ARC_X_R(c, 20) + ARC_X_R(c, 21)));
  /* dd894: mov w10, #0x851f */
  ARC_W_W(c, 10, UINT64_C(34079));
  /* dd898: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* dd89c: movk w10, #0x51eb, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1374355456)));
  /* dd8a0: mov w11, #0x64 */
  ARC_W_W(c, 11, UINT64_C(100));
  /* dd8a4: sub x13, x13, #2 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(2)));
  /* dd8a8: nop  */
  /* nop: no architectural effect here */
  /* dd8ac: adr x14, #0x58470 */
  ARC_X_W(c, 14, (arc_image_bases[1] + UINT64_C(361584)));
L_dd8b0:;
  /* dd8b0: umull x16, w17, w10 */
  ARC_X_W(c, 16, (((uint64_t)(uint32_t)(ARC_W_R(c, 17))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 10)))));
  /* dd8b4: mov w15, w17 */
  ARC_W_W(c, 15, ARC_W_R(c, 17));
  /* dd8b8: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* dd8bc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* dd8c0: lsr x17, x16, #0x25 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 16)) >> ((UINT64_C(37)) & 63)));
  /* dd8c4: msub w15, w17, w11, w15 */
  ARC_W_W(c, 15, ((uint32_t)(ARC_W_R(c, 15)) - ((uint32_t)(ARC_W_R(c, 17)) * (uint32_t)(ARC_W_R(c, 11)))));
  /* dd8c8: ldrh w15, [x14, w15, uxtw #1] */
  ARC_W_W(c, 15, arc_ld16((ARC_X_R(c, 14) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 15)))) << 1))));
  /* dd8cc: strh w15, [x13], #0xfffffffffffffffe */
  { const uint64_t _a = ARC_X_R(c, 13);
    ARC_X_W(c, 13, ARC_X_R(c, 13) + INT64_C(-2));
    arc_st16(_a, ARC_W_R(c, 15));
  }
  /* dd8d0: b.lo #0xdd8b0 */
  if (ARC_COND(c, 3)) goto L_dd8b0;
  /* dd8d4: cmp w8, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 12));
  /* dd8d8: b.hs #0xdd904 */
  if (ARC_COND(c, 2)) goto L_dd904;
L_dd8dc:;
  /* dd8dc: mov w9, #0xcccd */
  ARC_W_W(c, 9, UINT64_C(52429));
  /* dd8e0: mov w10, #0xa */
  ARC_W_W(c, 10, UINT64_C(10));
  /* dd8e4: mvn w8, w8 */
  ARC_W_W(c, 8, (~(uint32_t)(ARC_W_R(c, 8))));
  /* dd8e8: movk w9, #0xcccc, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(3435921408)));
  /* dd8ec: add w8, w12, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 12) + ARC_W_R(c, 8)));
  /* dd8f0: umull x9, w17, w9 */
  ARC_X_W(c, 9, (((uint64_t)(uint32_t)(ARC_W_R(c, 17))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 9)))));
  /* dd8f4: lsr x9, x9, #0x23 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(35)) & 63)));
  /* dd8f8: msub w9, w9, w10, w17 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 17)) - ((uint32_t)(ARC_W_R(c, 9)) * (uint32_t)(ARC_W_R(c, 10)))));
  /* dd8fc: orr w9, w9, #0x30 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(48)));
  /* dd900: strb w9, [x20, w8, uxtw] */
  arc_st8((ARC_X_R(c, 20) + ((uint64_t)(uint32_t)(ARC_W_R(c, 8)))), ARC_W_R(c, 9));
L_dd904:;
  /* dd904: add x20, x20, x21 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + ARC_X_R(c, 21)));
  /* dd908: b #0xdda6c */
  goto L_dda6c;
L_dd90c:;
  /* dd90c: ldur w0, [x29, #-0xc] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(-12))));
  /* dd910: cbz w2, #0xdd9a0 */
  if ((ARC_W_R(c, 2)) == 0) goto L_dd9a0;
  /* dd914: sub x10, x19, x20 */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) - ARC_X_R(c, 20)));
  /* dd918: add w9, w12, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 12) + UINT64_C(1)));
  /* dd91c: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* dd920: b.lt #0xddaec */
  if (ARC_COND(c, 11)) goto L_ddaec;
  /* dd924: lsr w10, w17, #4 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 17)) >> ((UINT64_C(4)) & 31)));
  /* dd928: cmp w10, #0x271 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(625));
  /* dd92c: b.lo #0xdd9e0 */
  if (ARC_COND(c, 3)) goto L_dd9e0;
  /* dd930: add x16, x20, w12, uxtw */
  ARC_X_W(c, 16, (ARC_X_R(c, 20) + ((uint64_t)(uint32_t)(ARC_W_R(c, 12)))));
  /* dd934: mov w11, #0x1759 */
  ARC_W_W(c, 11, UINT64_C(5977));
  /* dd938: mov w14, #0x851f */
  ARC_W_W(c, 14, UINT64_C(34079));
  /* dd93c: mov w10, wzr */
  ARC_W_W(c, 10, ARC_W_R(c, 31));
  /* dd940: movk w11, #0xd1b7, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(3518431232)));
  /* dd944: mov w13, #-0x2710 */
  ARC_W_W(c, 13, UINT64_C(18446744073709541616));
  /* dd948: movk w14, #0x51eb, lsl #16 */
  ARC_W_W(c, 14, ((ARC_W_R(c, 14) & UINT64_C(18446744069414649855)) | UINT64_C(1374355456)));
  /* dd94c: mov w15, #0x64 */
  ARC_W_W(c, 15, UINT64_C(100));
  /* dd950: add x16, x16, #1 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1)));
  /* dd954: nop  */
  /* nop: no architectural effect here */
  /* dd958: adr x0, #0x58470 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(361584)));
L_dd95c:;
  /* dd95c: mov w1, w17 */
  ARC_W_W(c, 1, ARC_W_R(c, 17));
  /* dd960: umull x17, w17, w11 */
  ARC_X_W(c, 17, (((uint64_t)(uint32_t)(ARC_W_R(c, 17))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 11)))));
  /* dd964: sub x4, x16, w10, uxtw */
  ARC_X_W(c, 4, (ARC_X_R(c, 16) - ((uint64_t)(uint32_t)(ARC_W_R(c, 10)))));
  /* dd968: cmp w1, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 1), ARC_W_R(c, 8));
  /* dd96c: add w10, w10, #4 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(4)));
  /* dd970: lsr x17, x17, #0x2d */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 17)) >> ((UINT64_C(45)) & 63)));
  /* dd974: madd w2, w17, w13, w1 */
  ARC_W_W(c, 2, ((uint32_t)(ARC_W_R(c, 1)) + ((uint32_t)(ARC_W_R(c, 17)) * (uint32_t)(ARC_W_R(c, 13)))));
  /* dd978: umull x3, w2, w14 */
  ARC_X_W(c, 3, (((uint64_t)(uint32_t)(ARC_W_R(c, 2))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 14)))));
  /* dd97c: lsr x3, x3, #0x25 */
  ARC_X_W(c, 3, ((uint64_t)(ARC_X_R(c, 3)) >> ((UINT64_C(37)) & 63)));
  /* dd980: msub w2, w3, w15, w2 */
  ARC_W_W(c, 2, ((uint32_t)(ARC_W_R(c, 2)) - ((uint32_t)(ARC_W_R(c, 3)) * (uint32_t)(ARC_W_R(c, 15)))));
  /* dd984: ldrh w2, [x0, w2, uxtw #1] */
  ARC_W_W(c, 2, arc_ld16((ARC_X_R(c, 0) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 2)))) << 1))));
  /* dd988: sturh w2, [x4, #-2] */
  arc_st16((ARC_X_R(c, 4) + INT64_C(-2)), ARC_W_R(c, 2));
  /* dd98c: ldrh w2, [x0, x3, lsl #1] */
  ARC_W_W(c, 2, arc_ld16((ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 3)) << 1))));
  /* dd990: sturh w2, [x4, #-4] */
  arc_st16((ARC_X_R(c, 4) + INT64_C(-4)), ARC_W_R(c, 2));
  /* dd994: b.hi #0xdd95c */
  if (ARC_COND(c, 8)) goto L_dd95c;
  /* dd998: ldur w0, [x29, #-0xc] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(-12))));
  /* dd99c: b #0xdd9e4 */
  goto L_dd9e4;
L_dd9a0:;
  /* dd9a0: cmp x20, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 19));
  /* dd9a4: b.eq #0xddaec */
  if (ARC_COND(c, 0)) goto L_ddaec;
  /* dd9a8: add w8, w17, #0x30 */
  ARC_W_W(c, 8, (ARC_W_R(c, 17) + UINT64_C(48)));
  /* dd9ac: strb w8, [x20], #1 */
  { const uint64_t _a = ARC_X_R(c, 20);
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* dd9b0: b #0xdda6c */
  goto L_dda6c;
L_dd9b4:;
  /* dd9b4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* dd9b8: mov w1, #0x30 */
  ARC_W_W(c, 1, UINT64_C(48));
  /* dd9bc: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* dd9c0: bl #0x144a20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(907716));
  fn1_144a20(c);
  /* dd9c4: ldur w0, [x29, #-0xc] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(-12))));
  /* dd9c8: add x20, x20, x21 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + ARC_X_R(c, 21)));
  /* dd9cc: b #0xdda6c */
  goto L_dda6c;
L_dd9d0:;
  /* dd9d0: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
  /* dd9d4: cmp w8, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 12));
  /* dd9d8: b.lo #0xdd8dc */
  if (ARC_COND(c, 3)) goto L_dd8dc;
  /* dd9dc: b #0xdd904 */
  goto L_dd904;
L_dd9e0:;
  /* dd9e0: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
L_dd9e4:;
  /* dd9e4: cmp w17, #0x64 */
  (void)arc_sub32(c, ARC_W_R(c, 17), UINT64_C(100));
  /* dd9e8: b.lo #0xdda24 */
  if (ARC_COND(c, 3)) goto L_dda24;
  /* dd9ec: ubfx w8, w17, #2, #0xe */
  ARC_W_W(c, 8, (((uint32_t)(ARC_W_R(c, 17)) >> 2) & UINT64_C(16383)));
  /* dd9f0: mov w11, #0x147b */
  ARC_W_W(c, 11, UINT64_C(5243));
  /* dd9f4: add x12, x20, w12, uxtw */
  ARC_X_W(c, 12, (ARC_X_R(c, 20) + ((uint64_t)(uint32_t)(ARC_W_R(c, 12)))));
  /* dd9f8: nop  */
  /* nop: no architectural effect here */
  /* dd9fc: adr x13, #0x58470 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(361584)));
  /* dda00: mvn x10, x10 */
  ARC_X_W(c, 10, (~(uint64_t)(ARC_X_R(c, 10))));
  /* dda04: mul w8, w8, w11 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 11))));
  /* dda08: mov w11, #0x64 */
  ARC_W_W(c, 11, UINT64_C(100));
  /* dda0c: lsr w8, w8, #0x11 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(17)) & 31)));
  /* dda10: msub w11, w8, w11, w17 */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 17)) - ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 11)))));
  /* dda14: mov w17, w8 */
  ARC_W_W(c, 17, ARC_W_R(c, 8));
  /* dda18: and x11, x11, #0xffff */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) & UINT64_C(65535)));
  /* dda1c: ldrh w11, [x13, x11, lsl #1] */
  ARC_W_W(c, 11, arc_ld16((ARC_X_R(c, 13) + ((uint64_t)(ARC_X_R(c, 11)) << 1))));
  /* dda20: strh w11, [x10, x12] */
  arc_st16((ARC_X_R(c, 10) + ARC_X_R(c, 12)), ARC_W_R(c, 11));
L_dda24:;
  /* dda24: cmp w17, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 17), UINT64_C(10));
  /* dda28: b.lo #0xdda58 */
  if (ARC_COND(c, 3)) goto L_dda58;
  /* dda2c: ubfiz x8, x17, #1, #0x20 */
  ARC_X_W(c, 8, ((uint64_t)((((uint64_t)(ARC_X_R(c, 17))) & UINT64_C(4294967295))) << 1));
  /* dda30: nop  */
  /* nop: no architectural effect here */
  /* dda34: adr x11, #0x58470 */
  ARC_X_W(c, 11, (arc_image_bases[1] + UINT64_C(361584)));
  /* dda38: mov w12, #0x2e */
  ARC_W_W(c, 12, UINT64_C(46));
  /* dda3c: mov w10, w8 */
  ARC_W_W(c, 10, ARC_W_R(c, 8));
  /* dda40: add x10, x11, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 11) + ARC_X_R(c, 10)));
  /* dda44: ldrb w10, [x10, #1] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 10) + INT64_C(1))));
  /* dda48: strb w12, [x20, #1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(1)), ARC_W_R(c, 12));
  /* dda4c: strb w10, [x20, #2] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(2)), ARC_W_R(c, 10));
  /* dda50: ldrb w8, [x11, x8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 11) + ARC_X_R(c, 8))));
  /* dda54: b #0xdda64 */
  goto L_dda64;
L_dda58:;
  /* dda58: mov w8, #0x2e */
  ARC_W_W(c, 8, UINT64_C(46));
  /* dda5c: strb w8, [x20, #1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(1)), ARC_W_R(c, 8));
  /* dda60: orr w8, w17, #0x30 */
  ARC_W_W(c, 8, (ARC_W_R(c, 17) | UINT64_C(48)));
L_dda64:;
  /* dda64: strb w8, [x20] */
  arc_st8(ARC_X_R(c, 20), ARC_W_R(c, 8));
  /* dda68: add x20, x20, x9 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + ARC_X_R(c, 9)));
L_dda6c:;
  /* dda6c: cbz w23, #0xddacc */
  if ((ARC_W_R(c, 23)) == 0) goto L_ddacc;
  /* dda70: ldur x8, [x29, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* dda74: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* dda78: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* dda7c: b.eq #0xddac0 */
  if (ARC_COND(c, 0)) goto L_ddac0;
  /* dda80: mov x10, x20 */
  ARC_X_W(c, 10, ARC_X_R(c, 20));
  /* dda84: mov w9, #0x30 */
  ARC_W_W(c, 9, UINT64_C(48));
  /* dda88: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* dda8c: b #0xddaa0 */
  goto L_ddaa0;
L_dda90:;
  /* dda90: ldur x10, [x29, #-8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* dda94: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* dda98: mov x10, x8 */
  ARC_X_W(c, 10, ARC_X_R(c, 8));
  /* dda9c: b.eq #0xddac0 */
  if (ARC_COND(c, 0)) goto L_ddac0;
L_ddaa0:;
  /* ddaa0: ldrb w11, [x8, #-1]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(-1));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-1));
    ARC_W_W(c, 11, arc_ld8(_a));
  }
  /* ddaa4: cmp w11, #0x2e */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(46));
  /* ddaa8: b.eq #0xdda90 */
  if (ARC_COND(c, 0)) goto L_dda90;
  /* ddaac: cmp w11, #0x39 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(57));
  /* ddab0: b.ne #0xddb90 */
  if (ARC_COND(c, 1)) goto L_ddb90;
  /* ddab4: mov w23, #1 */
  ARC_W_W(c, 23, UINT64_C(1));
  /* ddab8: strb w9, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* ddabc: b #0xdda90 */
  goto L_dda90;
L_ddac0:;
  /* ddac0: mov w9, #0x31 */
  ARC_W_W(c, 9, UINT64_C(49));
  /* ddac4: add w0, w0, #1 */
  ARC_W_W(c, 0, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* ddac8: strb w9, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 9));
L_ddacc:;
  /* ddacc: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* ddad0: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* ddad4: sub x10, x19, x20 */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) - ARC_X_R(c, 20)));
  /* ddad8: cneg w8, w0, mi */
  ARC_W_W(c, 8, (ARC_COND(c, 4) ? ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 0))) : (ARC_W_R(c, 0))));
  /* ddadc: cmp w8, #0x63 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(99));
  /* ddae0: cinc x9, x9, hi */
  ARC_X_W(c, 9, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) + 1 : (ARC_X_R(c, 9))));
  /* ddae4: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* ddae8: b.ge #0xddb18 */
  if (ARC_COND(c, 10)) goto L_ddb18;
L_ddaec:;
  /* ddaec: mov w1, #0x4b */
  ARC_W_W(c, 1, UINT64_C(75));
L_ddaf0:;
  /* ddaf0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ddaf4: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ddaf8: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ddafc: ldp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* ddb00: ldp x26, x25, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* ddb04: ldp x28, x27, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* ddb08: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ddb0c: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* ddb10: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ddb14: ret  */
  return;
L_ddb18:;
  /* ddb18: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* ddb1c: mov w9, #0x2b */
  ARC_W_W(c, 9, UINT64_C(43));
  /* ddb20: mov w10, #0x2d */
  ARC_W_W(c, 10, UINT64_C(45));
  /* ddb24: mov w11, #0x65 */
  ARC_W_W(c, 11, UINT64_C(101));
  /* ddb28: csel w9, w10, w9, lt */
  ARC_W_W(c, 9, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* ddb2c: cmp w8, #0x64 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(100));
  /* ddb30: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* ddb34: strb w11, [x20] */
  arc_st8(ARC_X_R(c, 20), ARC_W_R(c, 11));
  /* ddb38: strb w9, [x20, #1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(1)), ARC_W_R(c, 9));
  /* ddb3c: b.lo #0xddb78 */
  if (ARC_COND(c, 3)) goto L_ddb78;
  /* ddb40: mov w9, #0xcccd */
  ARC_W_W(c, 9, UINT64_C(52429));
  /* ddb44: mov w10, #0xa */
  ARC_W_W(c, 10, UINT64_C(10));
  /* ddb48: add x19, x20, #5 */
  ARC_X_W(c, 19, (ARC_X_R(c, 20) + UINT64_C(5)));
  /* ddb4c: movk w9, #0xcccc, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(3435921408)));
  /* ddb50: umull x9, w8, w9 */
  ARC_X_W(c, 9, (((uint64_t)(uint32_t)(ARC_W_R(c, 8))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 9)))));
  /* ddb54: lsr x9, x9, #0x23 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(35)) & 63)));
  /* ddb58: msub w8, w9, w10, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) - ((uint32_t)(ARC_W_R(c, 9)) * (uint32_t)(ARC_W_R(c, 10)))));
  /* ddb5c: nop  */
  /* nop: no architectural effect here */
  /* ddb60: adr x10, #0x58470 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(361584)));
  /* ddb64: ldrh w9, [x10, x9, lsl #1] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 9)) << 1))));
  /* ddb68: orr w8, w8, #0x30 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(48)));
  /* ddb6c: strh w9, [x20, #2] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(2)), ARC_W_R(c, 9));
  /* ddb70: strb w8, [x20, #4] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(4)), ARC_W_R(c, 8));
  /* ddb74: b #0xddaf0 */
  goto L_ddaf0;
L_ddb78:;
  /* ddb78: nop  */
  /* nop: no architectural effect here */
  /* ddb7c: adr x9, #0x58470 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(361584)));
  /* ddb80: add x19, x20, #4 */
  ARC_X_W(c, 19, (ARC_X_R(c, 20) + UINT64_C(4)));
  /* ddb84: ldrh w8, [x9, w8, uxtw #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 9) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 1))));
  /* ddb88: strh w8, [x20, #2] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(2)), ARC_W_R(c, 8));
  /* ddb8c: b #0xddaf0 */
  goto L_ddaf0;
L_ddb90:;
  /* ddb90: cmp w23, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(1));
  /* ddb94: b.eq #0xddb9c */
  if (ARC_COND(c, 0)) goto L_ddb9c;
  /* ddb98: tbz w11, #0, #0xddacc */
  if (((ARC_W_R(c, 11)) >> 0 & 1) == 0) goto L_ddacc;
L_ddb9c:;
  /* ddb9c: add w8, w11, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* ddba0: sturb w8, [x10, #-1] */
  arc_st8((ARC_X_R(c, 10) + INT64_C(-1)), ARC_W_R(c, 8));
  /* ddba4: b #0xddacc */
  goto L_ddacc;
L_ddba8:;
  /* ddba8: mov w11, #1 */
  ARC_W_W(c, 11, UINT64_C(1));
L_ddbac:;
  /* ddbac: tbz w10, #0x1f, #0xddbf4 */
  if (((ARC_W_R(c, 10)) >> 31 & 1) == 0) goto L_ddbf4;
  /* ddbb0: cbz w11, #0xddbf4 */
  if ((ARC_W_R(c, 11)) == 0) goto L_ddbf4;
  /* ddbb4: mov x14, #-0x3333333333333334 */
  ARC_X_W(c, 14, UINT64_C(14757395258967641292));
  /* ddbb8: mov w11, #-1 */
  ARC_W_W(c, 11, UINT64_C(18446744073709551615));
  /* ddbbc: movk x14, #0xcccd */
  ARC_X_W(c, 14, ((ARC_X_R(c, 14) & UINT64_C(18446744073709486080)) | UINT64_C(52429)));
L_ddbc0:;
  /* ddbc0: umulh x9, x16, x14 */
  ARC_X_W(c, 9, arc_umulh(ARC_X_R(c, 16), ARC_X_R(c, 14)));
  /* ddbc4: add w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* ddbc8: lsr x9, x9, #2 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(2)) & 63)));
  /* ddbcc: add w15, w9, w9, lsl #2 */
  ARC_W_W(c, 15, (ARC_W_R(c, 9) + ((uint32_t)(ARC_W_R(c, 9)) << 2)));
  /* ddbd0: neg w15, w15 */
  ARC_W_W(c, 15, ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 15))));
  /* ddbd4: cmn w15, w16 */
  (void)arc_add32(c, ARC_W_R(c, 15), ARC_W_R(c, 16), 0);
  /* ddbd8: mov x16, x9 */
  ARC_X_W(c, 16, ARC_X_R(c, 9));
  /* ddbdc: b.eq #0xddbc0 */
  if (ARC_COND(c, 0)) goto L_ddbc0;
  /* ddbe0: neg w9, w10 */
  ARC_W_W(c, 9, ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 10))));
  /* ddbe4: cmp w11, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 9));
  /* ddbe8: b.hs #0xddc04 */
  if (ARC_COND(c, 2)) goto L_ddc04;
L_ddbec:;
  /* ddbec: mov w23, #1 */
  ARC_W_W(c, 23, UINT64_C(1));
  /* ddbf0: b #0xdd86c */
  goto L_dd86c;
L_ddbf4:;
  /* ddbf4: cmp w10, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(0));
  /* ddbf8: csel w9, wzr, w11, lt */
  ARC_W_W(c, 9, (ARC_COND(c, 11) ? (ARC_W_R(c, 31)) : ARC_W_R(c, 11)));
  /* ddbfc: cmp w9, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(1));
  /* ddc00: b.ne #0xddbec */
  if (ARC_COND(c, 1)) goto L_ddbec;
L_ddc04:;
  /* ddc04: mov w23, #2 */
  ARC_W_W(c, 23, UINT64_C(2));
  /* ddc08: b #0xdd86c */
  goto L_dd86c;
L_ddc0c:;
  /* ddc0c: mov w13, wzr */
  ARC_W_W(c, 13, ARC_W_R(c, 31));
  /* ddc10: b #0xdd7c4 */
  goto L_dd7c4;
}

void fn1_e1b84(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038852484));
  /* e1b84: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e1b88: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e1b8c: str x27, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 27));
  /* e1b90: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* e1b94: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e1b98: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e1b9c: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e1ba0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e1ba4: ldp x10, x11, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* e1ba8: mov w20, w2 */
  ARC_W_W(c, 20, ARC_W_R(c, 2));
  /* e1bac: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* e1bb0: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e1bb4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e1bb8: add x26, x0, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 0) + UINT64_C(1)));
  /* e1bbc: and x12, x10, #0xfffffffffffffffe */
  ARC_X_W(c, 12, (ARC_X_R(c, 10) & UINT64_C(18446744073709551614)));
  /* e1bc0: lsr x13, x9, #1 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* e1bc4: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e1bc8: sub x12, x12, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(1)));
  /* e1bcc: mov w9, #0x16 */
  ARC_W_W(c, 9, UINT64_C(22));
  /* e1bd0: csinc x25, x8, x0, ne */
  ARC_X_W(c, 25, (ARC_COND(c, 1) ? (ARC_X_R(c, 8)) : ((ARC_X_R(c, 0)) + 1)));
  /* e1bd4: csel x27, x13, x11, eq */
  ARC_X_W(c, 27, (ARC_COND(c, 0) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 11)));
  /* e1bd8: csel x9, x9, x12, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 12)));
  /* e1bdc: sub x21, x1, x25 */
  ARC_X_W(c, 21, (ARC_X_R(c, 1) - ARC_X_R(c, 25)));
  /* e1be0: cmp x9, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 27));
  /* e1be4: and w9, w10, #0xff */
  ARC_W_W(c, 9, (ARC_W_R(c, 10) & UINT64_C(255)));
  /* e1be8: b.ne #0xe1c34 */
  if (ARC_COND(c, 1)) goto L_e1c34;
  /* e1bec: cmn x27, #9 */
  (void)arc_add64(c, ARC_X_R(c, 27), UINT64_C(9), 0);
  /* e1bf0: b.eq #0xe1d0c */
  if (ARC_COND(c, 0)) goto L_e1d0c;
  /* e1bf4: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e1bf8: mov x9, #-0xe */
  ARC_X_W(c, 9, UINT64_C(18446744073709551602));
  /* e1bfc: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* e1c00: movk x9, #0x7fff, lsl #48 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(281474976710655)) | UINT64_C(9223090561878065152)));
  /* e1c04: csel x23, x26, x8, eq */
  ARC_X_W(c, 23, (ARC_COND(c, 0) ? (ARC_X_R(c, 26)) : ARC_X_R(c, 8)));
  /* e1c08: cmp x27, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 27), ARC_X_R(c, 9));
  /* e1c0c: b.hi #0xe1c54 */
  if (ARC_COND(c, 8)) goto L_e1c54;
  /* e1c10: lsl x8, x27, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 27)) << ((UINT64_C(1)) & 63)));
  /* e1c14: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* e1c18: orr x8, x8, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(7)));
  /* e1c1c: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* e1c20: csinc x8, x9, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* e1c24: cmp x27, #0xc */
  (void)arc_sub64(c, ARC_X_R(c, 27), UINT64_C(12));
  /* e1c28: mov w9, #0x17 */
  ARC_W_W(c, 9, UINT64_C(23));
  /* e1c2c: csel x24, x9, x8, lo */
  ARC_X_W(c, 24, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* e1c30: b #0xe1c58 */
  goto L_e1c58;
L_e1c34:;
  /* e1c34: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e1c38: csel x22, x26, x8, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 26)) : ARC_X_R(c, 8)));
  /* e1c3c: subs x2, x27, x21 */
  ARC_X_W(c, 2, arc_sub64(c, ARC_X_R(c, 27), ARC_X_R(c, 21)));
  /* e1c40: b.eq #0xe1cb8 */
  if (ARC_COND(c, 0)) goto L_e1cb8;
  /* e1c44: add x1, x22, x21 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + ARC_X_R(c, 21)));
  /* e1c48: add x0, x1, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 1) + UINT64_C(1)));
  /* e1c4c: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(924752));
  fn1_1449f0(c);
  /* e1c50: b #0xe1cb8 */
  goto L_e1cb8;
L_e1c54:;
  /* e1c54: mov x24, #-9 */
  ARC_X_W(c, 24, UINT64_C(18446744073709551607));
L_e1c58:;
  /* e1c58: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* e1c5c: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(924768));
  fn1_1428f0(c);
  /* e1c60: cmp x22, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 25));
  /* e1c64: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* e1c68: b.eq #0xe1c7c */
  if (ARC_COND(c, 0)) goto L_e1c7c;
  /* e1c6c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* e1c70: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* e1c74: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* e1c78: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(924796));
  fn1_1449f0(c);
L_e1c7c:;
  /* e1c7c: subs x2, x27, x21 */
  ARC_X_W(c, 2, arc_sub64(c, ARC_X_R(c, 27), ARC_X_R(c, 21)));
  /* e1c80: b.eq #0xe1c94 */
  if (ARC_COND(c, 0)) goto L_e1c94;
  /* e1c84: add x8, x22, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) + ARC_X_R(c, 21)));
  /* e1c88: add x1, x23, x21 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + ARC_X_R(c, 21)));
  /* e1c8c: add x0, x8, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* e1c90: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(924820));
  fn1_1449f0(c);
L_e1c94:;
  /* e1c94: add x25, x27, #1 */
  ARC_X_W(c, 25, (ARC_X_R(c, 27) + UINT64_C(1)));
  /* e1c98: cmp x25, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 25), UINT64_C(23));
  /* e1c9c: b.eq #0xe1cac */
  if (ARC_COND(c, 0)) goto L_e1cac;
  /* e1ca0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* e1ca4: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* e1ca8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(924844));
  fn1_142608(c);
L_e1cac:;
  /* e1cac: orr x8, x24, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) | UINT64_C(1)));
  /* e1cb0: stp x25, x22, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 25));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* e1cb4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_e1cb8:;
  /* e1cb8: add x9, x27, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 27) + UINT64_C(1)));
  /* e1cbc: strb w20, [x22, x21] */
  arc_st8((ARC_X_R(c, 22) + ARC_X_R(c, 21)), ARC_W_R(c, 20));
  /* e1cc0: strb wzr, [x22, x9] */
  arc_st8((ARC_X_R(c, 22) + ARC_X_R(c, 9)), ARC_W_R(c, 31));
  /* e1cc4: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* e1cc8: tbnz w8, #0, #0xe1cd8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_e1cd8;
  /* e1ccc: lsl w9, w9, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) << ((UINT64_C(1)) & 31)));
  /* e1cd0: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* e1cd4: b #0xe1cdc */
  goto L_e1cdc;
L_e1cd8:;
  /* e1cd8: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
L_e1cdc:;
  /* e1cdc: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* e1ce0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e1ce4: csel x8, x26, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 26)) : ARC_X_R(c, 9)));
  /* e1ce8: add x0, x21, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* e1cec: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e1cf0: ldr x27, [sp, #0x10] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(16))));
  /* e1cf4: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e1cf8: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e1cfc: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* e1d00: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e1d04: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e1d08: ret  */
  return;
L_e1d0c:;
  /* e1d0c: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(924944));
  fn1_d7d54(c);
}

void fn1_e46c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038863552));
  /* e46c0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e46c4: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* e46c8: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e46cc: str x25, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 25));
  /* e46d0: stp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e46d4: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e46d8: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e46dc: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* e46e0: mov w8, #0xa */
  ARC_W_W(c, 8, UINT64_C(10));
  /* e46e4: mov w23, #0x7473 */
  ARC_W_W(c, 23, UINT64_C(29811));
  /* e46e8: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e46ec: strb w8, [sp] */
  arc_st8((c)->sp, ARC_W_R(c, 8));
  /* e46f0: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e46f4: movk w23, #0x6c6f, lsl #16 */
  ARC_W_W(c, 23, ((ARC_W_R(c, 23) & UINT64_C(18446744069414649855)) | UINT64_C(1819213824)));
  /* e46f8: mov w24, #0x6c */
  ARC_W_W(c, 24, UINT64_C(108));
  /* e46fc: mov w21, w2 */
  ARC_W_W(c, 21, ARC_W_R(c, 2));
  /* e4700: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* e4704: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e4708: stur w23, [sp, #1] */
  arc_st32(((c)->sp + INT64_C(1)), ARC_W_R(c, 23));
  /* e470c: sturh w24, [sp, #5] */
  arc_st16(((c)->sp + INT64_C(5)), ARC_W_R(c, 24));
  /* e4710: csinc x20, x9, x0, ne */
  ARC_X_W(c, 20, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 0)) + 1)));
  /* e4714: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* e4718: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(935708));
  fn1_142a58(c);
  /* e471c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* e4720: ldr w25, [x0] */
  ARC_W_W(c, 25, arc_ld32(ARC_X_R(c, 0)));
  /* e4724: str wzr, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 31));
  /* e4728: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* e472c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e4730: mov w2, w21 */
  ARC_W_W(c, 2, ARC_W_R(c, 21));
  /* e4734: bl #0x142ea8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(935736));
  fn1_142ea8(c);
  /* e4738: ldr w8, [x22] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 22)));
  /* e473c: str w25, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 25));
  /* e4740: cmp w8, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(34));
  /* e4744: b.eq #0xe478c */
  if (ARC_COND(c, 0)) goto L_e478c;
  /* e4748: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* e474c: subs x8, x8, x20 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20)));
  /* e4750: b.eq #0xe47c4 */
  if (ARC_COND(c, 0)) goto L_e47c4;
  /* e4754: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e4758: cbz x19, #0xe4760 */
  if ((ARC_X_R(c, 19)) == 0) goto L_e4760;
  /* e475c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_e4760:;
  /* e4760: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e4764: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(935784));
  fn1_142e00(c);
  /* e4768: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e476c: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e4770: ldr x25, [sp, #0x40] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(64))));
  /* e4774: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e4778: ldp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e477c: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e4780: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* e4784: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e4788: ret  */
  return;
L_e478c:;
  /* e478c: mov w8, #0x26 */
  ARC_W_W(c, 8, UINT64_C(38));
  /* e4790: str xzr, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 31));
  /* e4794: strb w8, [sp, #0x18] */
  arc_st8(((c)->sp + INT64_C(24)), ARC_W_R(c, 8));
  /* e4798: adrp x8, #0x51000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(331776)));
  /* e479c: add x8, x8, #0xa7d */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2685)));
  /* e47a0: ldr x9, [x8] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 8)));
  /* e47a4: ldur x8, [x8, #6] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(6))));
  /* e47a8: stur w23, [sp, #0x19] */
  arc_st32(((c)->sp + INT64_C(25)), ARC_W_R(c, 23));
  /* e47ac: strb w24, [sp, #0x1d] */
  arc_st8(((c)->sp + INT64_C(29)), ARC_W_R(c, 24));
  /* e47b0: stur x9, [sp, #0x1e] */
  arc_st64(((c)->sp + INT64_C(30)), ARC_X_R(c, 9));
  /* e47b4: add x9, sp, #0x18 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(24)));
  /* e47b8: stur x8, [sp, #0x24] */
  arc_st64(((c)->sp + INT64_C(36)), ARC_X_R(c, 8));
  /* e47bc: orr x0, x9, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* e47c0: bl #0xda038 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(935876));
  fn1_da038(c);
L_e47c4:;
  /* e47c4: mov w9, #0x7473 */
  ARC_W_W(c, 9, UINT64_C(29811));
  /* e47c8: mov w8, #0x28 */
  ARC_W_W(c, 8, UINT64_C(40));
  /* e47cc: str xzr, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 31));
  /* e47d0: movk w9, #0x6c6f, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1819213824)));
  /* e47d4: strb w8, [sp, #0x18] */
  arc_st8(((c)->sp + INT64_C(24)), ARC_W_R(c, 8));
  /* e47d8: mov w8, #0x6c */
  ARC_W_W(c, 8, UINT64_C(108));
  /* e47dc: stur w9, [sp, #0x19] */
  arc_st32(((c)->sp + INT64_C(25)), ARC_W_R(c, 9));
  /* e47e0: adrp x9, #0x50000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(327680)));
  /* e47e4: add x9, x9, #0x1dd */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(477)));
  /* e47e8: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* e47ec: strb w8, [sp, #0x1d] */
  arc_st8(((c)->sp + INT64_C(29)), ARC_W_R(c, 8));
  /* e47f0: ldur x8, [x9, #7] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(7))));
  /* e47f4: add x9, sp, #0x18 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(24)));
  /* e47f8: stur x10, [sp, #0x1e] */
  arc_st64(((c)->sp + INT64_C(30)), ARC_X_R(c, 10));
  /* e47fc: stur x8, [sp, #0x25] */
  arc_st64(((c)->sp + INT64_C(37)), ARC_X_R(c, 8));
  /* e4800: orr x0, x9, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* e4804: bl #0xe78a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(935944));
  fn1_e78a0(c);
  /* e4808: b #0xe480c */
  goto L_e480c;
L_e480c:;
  /* e480c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e4810: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e4814: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(935960));
  fn1_142e00(c);
  /* e4818: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e481c: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(935968));
  fn1_142e00(c);
  /* e4820: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e4824: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(935976));
  fn1_9cc20(c);
}

void fn1_e8d3c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038881596));
  /* e8d3c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e8d40: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e8d44: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e8d48: nop  */
  /* nop: no architectural effect here */
  /* e8d4c: adr x0, #0x518c9 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(334025)));
  /* e8d50: bl #0xd7d6c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(953684));
  fn1_d7d6c(c);
}

void fn1_eae84(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038890116));
  /* eae84: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eae88: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eae8c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* eae90: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eae94: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* eae98: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962204));
  fn1_142518(c);
  /* eae9c: cbnz w0, #0xeaef0 */
  if ((ARC_W_R(c, 0)) != 0) goto L_eaef0;
  /* eaea0: ldrb w8, [x19, #0x58] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(88))));
  /* eaea4: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* eaea8: b.ne #0xeaec4 */
  if (ARC_COND(c, 1)) goto L_eaec4;
L_eaeac:;
  /* eaeac: add x0, x19, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* eaeb0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* eaeb4: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962232));
  fn1_142530(c);
  /* eaeb8: cbnz w0, #0xeaee4 */
  if ((ARC_W_R(c, 0)) != 0) goto L_eaee4;
  /* eaebc: ldrb w8, [x19, #0x58] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(88))));
  /* eaec0: tbnz w8, #0, #0xeaeac */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_eaeac;
L_eaec4:;
  /* eaec4: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* eaec8: strb w8, [x19, #0x58] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(88)), ARC_W_R(c, 8));
  /* eaecc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eaed0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962260));
  fn1_142560(c);
  /* eaed4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* eaed8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eaedc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eaee0: ret  */
  return;
L_eaee4:;
  /* eaee4: nop  */
  /* nop: no architectural effect here */
  /* eaee8: adr x1, #0x50514 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(328980)));
  /* eaeec: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962288));
  fn1_142a40(c);
L_eaef0:;
  /* eaef0: nop  */
  /* nop: no architectural effect here */
  /* eaef4: adr x1, #0x50f67 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331623)));
  /* eaef8: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962300));
  fn1_142a40(c);
  /* eaefc: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962304));
  fn1_a1454(c);
  /* eaf00: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962308));
  fn1_a1454(c);
  /* eaf04: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962312));
  fn1_a1454(c);
}

void fn1_ecef0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038898416));
  /* ecef0: bti c */
  /* bti: no architectural effect here */
  /* ecef4: ldr w8, [x0, #0x20] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(32))));
  /* ecef8: ldrb w9, [x0, #0x24] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(36))));
  /* ecefc: orr w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* ecf00: str w8, [x0, #0x20] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(32)), ARC_W_R(c, 8));
  /* ecf04: tbnz w9, #2, #0xecf0c */
  if (((ARC_W_R(c, 9)) >> 2 & 1) != 0) goto L_ecf0c;
  /* ecf08: ret  */
  return;
L_ecf0c:;
  /* ecf0c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ecf10: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ecf14: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ecf18: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(970524));
  fn1_1429b0(c);
}

void fn1_eeddc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038906332));
  /* eeddc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eede0: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* eede4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eede8: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* eedec: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* eedf0: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* eedf4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* eedf8: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* eedfc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* eee00: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* eee04: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* eee08: stur wzr, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 31));
  /* eee0c: bl #0x1435f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(978448));
  fn1_1435f8(c);
  /* eee10: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* eee14: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* eee18: b.ne #0xeeee0 */
  if (ARC_COND(c, 1)) goto L_eeee0;
  /* eee1c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* eee20: nop  */
  /* nop: no architectural effect here */
  /* eee24: adr x22, #0x15dc40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432640)));
  /* eee28: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* eee2c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* eee30: ldr x20, [x8, #0x30] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* eee34: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* eee38: str x20, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 20));
  /* eee3c: b.eq #0xeee4c */
  if (ARC_COND(c, 0)) goto L_eee4c;
  /* eee40: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* eee44: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* eee48: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(978508));
  fn1_db2e0(c);
L_eee4c:;
  /* eee4c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* eee50: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* eee54: ldr x1, [x1, #0xb48] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2888))));
  /* eee58: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(978524));
  fn1_143748(c);
  /* eee5c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* eee60: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* eee64: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* eee68: add x3, x19, x8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* eee6c: ldr x8, [x9, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(40))));
  /* eee70: ldr x1, [x3, #0x28] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 3) + INT64_C(40))));
  /* eee74: sub x4, x29, #4 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* eee78: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* eee7c: mov x5, x21 */
  ARC_X_W(c, 5, ARC_X_R(c, 21));
  /* eee80: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(978564));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* eee84: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* eee88: b.eq #0xeeeac */
  if (ARC_COND(c, 0)) goto L_eeeac;
  /* eee8c: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* eee90: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* eee94: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(978584));
  fn1_bd950(c);
  /* eee98: cbnz x0, #0xeeeac */
  if ((ARC_X_R(c, 0)) != 0) goto L_eeeac;
  /* eee9c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* eeea0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* eeea4: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* eeea8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(978604));
  arc_dispatch(c, ARC_X_R(c, 8));
L_eeeac:;
  /* eeeac: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* eeeb0: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* eeeb4: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* eeeb8: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* eeebc: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* eeec0: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* eeec4: ldp w11, w9, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* eeec8: orr w10, w11, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* eeecc: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* eeed0: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* eeed4: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* eeed8: str w10, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 10));
  /* eeedc: b.ne #0xeeefc */
  if (ARC_COND(c, 1)) goto L_eeefc;
L_eeee0:;
  /* eeee0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eeee4: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* eeee8: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* eeeec: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eeef0: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* eeef4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eeef8: ret  */
  return;
L_eeefc:;
  /* eeefc: nop  */
  /* nop: no architectural effect here */
  /* eef00: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* eef04: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(978696));
  fn1_ec720(c);
  /* eef08: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* eef0c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* eef10: b.eq #0xeef34 */
  if (ARC_COND(c, 0)) goto L_eef34;
  /* eef14: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* eef18: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* eef1c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(978720));
  fn1_bd950(c);
  /* eef20: cbnz x0, #0xeef34 */
  if ((ARC_X_R(c, 0)) != 0) goto L_eef34;
  /* eef24: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* eef28: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* eef2c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* eef30: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(978740));
  arc_dispatch(c, ARC_X_R(c, 8));
L_eef34:;
  /* eef34: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* eef38: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(978748));
  fn1_142548(c);
  /* eef3c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* eef40: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* eef44: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* eef48: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* eef4c: stur w10, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 10));
  /* eef50: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* eef54: ldr w11, [x9, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* eef58: orr w11, w11, w10 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* eef5c: str w11, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 11));
  /* eef60: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* eef64: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* eef68: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* eef6c: tbnz w8, #0, #0xeef78 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_eef78;
  /* eef70: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(978804));
  fn1_142980(c);
  /* eef74: b #0xeeeac */
  goto L_eeeac;
L_eef78:;
  /* eef78: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(978812));
  fn1_1429b0(c);
  /* eef7c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* eef80: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(978820));
  fn1_142980(c);
  /* eef84: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eef88: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(978828));
  fn1_9cc20(c);
  /* eef8c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(978832));
  fn1_a1454(c);
}

void fn1_f388c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038925452));
  /* f388c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f3890: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f3894: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* f3898: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f389c: sub x19, x0, #0x10 */
  ARC_X_W(c, 19, (ARC_X_R(c, 0) - UINT64_C(16)));
  /* f38a0: add x0, x0, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(8)));
  /* f38a4: bl #0x1433b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(997544));
  fn1_1433b8(c);
  /* f38a8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f38ac: mov w1, #0xb0 */
  ARC_W_W(c, 1, UINT64_C(176));
  /* f38b0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f38b4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f38b8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f38bc: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_f5810(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038933520));
  /* f5810: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f5814: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* f5818: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f581c: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f5820: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f5824: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f5828: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f582c: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* f5830: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f5834: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f5838: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* f583c: stur wzr, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 31));
  /* f5840: bl #0x143670 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1005636));
  fn1_143670(c);
  /* f5844: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* f5848: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f584c: b.ne #0xf5914 */
  if (ARC_COND(c, 1)) goto L_f5914;
  /* f5850: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f5854: nop  */
  /* nop: no architectural effect here */
  /* f5858: adr x22, #0x15dc40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f585c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f5860: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f5864: ldr x20, [x8, #0x30] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f5868: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* f586c: str x20, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 20));
  /* f5870: b.eq #0xf5880 */
  if (ARC_COND(c, 0)) goto L_f5880;
  /* f5874: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* f5878: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f587c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1005696));
  fn1_db2e0(c);
L_f5880:;
  /* f5880: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f5884: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f5888: ldr x1, [x1, #0xb60] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2912))));
  /* f588c: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1005712));
  fn1_143748(c);
  /* f5890: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f5894: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* f5898: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f589c: add x3, x19, x8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f58a0: ldr x8, [x9, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(40))));
  /* f58a4: ldr x1, [x3, #0x28] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 3) + INT64_C(40))));
  /* f58a8: sub x4, x29, #4 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* f58ac: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* f58b0: mov x5, x21 */
  ARC_X_W(c, 5, ARC_X_R(c, 21));
  /* f58b4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1005752));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f58b8: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* f58bc: b.eq #0xf58e0 */
  if (ARC_COND(c, 0)) goto L_f58e0;
  /* f58c0: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* f58c4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f58c8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1005772));
  fn1_bd950(c);
  /* f58cc: cbnz x0, #0xf58e0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f58e0;
  /* f58d0: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* f58d4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f58d8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f58dc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1005792));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f58e0:;
  /* f58e0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f58e4: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* f58e8: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f58ec: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f58f0: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f58f4: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* f58f8: ldp w11, w9, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* f58fc: orr w10, w11, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* f5900: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* f5904: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* f5908: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* f590c: str w10, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 10));
  /* f5910: b.ne #0xf5930 */
  if (ARC_COND(c, 1)) goto L_f5930;
L_f5914:;
  /* f5914: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f5918: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f591c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f5920: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f5924: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* f5928: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f592c: ret  */
  return;
L_f5930:;
  /* f5930: nop  */
  /* nop: no architectural effect here */
  /* f5934: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f5938: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1005884));
  fn1_ec720(c);
  /* f593c: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* f5940: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* f5944: b.eq #0xf5968 */
  if (ARC_COND(c, 0)) goto L_f5968;
  /* f5948: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* f594c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f5950: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1005908));
  fn1_bd950(c);
  /* f5954: cbnz x0, #0xf5968 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f5968;
  /* f5958: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* f595c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f5960: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f5964: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1005928));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f5968:;
  /* f5968: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f596c: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1005936));
  fn1_142548(c);
  /* f5970: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f5974: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* f5978: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f597c: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* f5980: stur w10, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 10));
  /* f5984: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f5988: ldr w11, [x9, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f598c: orr w11, w11, w10 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* f5990: str w11, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 11));
  /* f5994: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f5998: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f599c: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f59a0: tbnz w8, #0, #0xf59ac */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_f59ac;
  /* f59a4: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1005992));
  fn1_142980(c);
  /* f59a8: b #0xf58e0 */
  goto L_f58e0;
L_f59ac:;
  /* f59ac: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1006000));
  fn1_1429b0(c);
  /* f59b0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f59b4: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1006008));
  fn1_142980(c);
  /* f59b8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f59bc: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1006016));
  fn1_9cc20(c);
  /* f59c0: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1006020));
  fn1_a1454(c);
}

void fn1_faf30(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038955824));
  /* faf30: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* faf34: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* faf38: str x25, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 25));
  /* faf3c: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* faf40: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* faf44: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* faf48: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* faf4c: cmn w1, #1 */
  (void)arc_add32(c, ARC_W_R(c, 1), UINT64_C(1), 0);
  /* faf50: b.eq #0xfaf6c */
  if (ARC_COND(c, 0)) goto L_faf6c;
  /* faf54: ldp x19, x8, [x0, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(48));
    ARC_X_W(c, 19, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* faf58: ldp x21, x20, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 21, arc_ld64(_pa));
    ARC_X_W(c, 20, arc_ld64(_pa + 8));
  }
  /* faf5c: cmp x19, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* faf60: b.eq #0xfaf74 */
  if (ARC_COND(c, 0)) goto L_faf74;
  /* faf64: ldr x10, [x0, #0x58] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(88))));
  /* faf68: b #0xfb044 */
  goto L_fb044;
L_faf6c:;
  /* faf6c: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* faf70: b #0xfb094 */
  goto L_fb094;
L_faf74:;
  /* faf74: ldrb w8, [x0, #0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(96))));
  /* faf78: tbnz w8, #4, #0xfaf84 */
  if (((ARC_W_R(c, 8)) >> 4 & 1) != 0) goto L_faf84;
  /* faf7c: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* faf80: b #0xfb094 */
  goto L_fb094;
L_faf84:;
  /* faf84: ldr x23, [x0, #0x28] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 0) + INT64_C(40))));
  /* faf88: ldr x24, [x0, #0x58] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 0) + INT64_C(88))));
  /* faf8c: mov w22, w1 */
  ARC_W_W(c, 22, ARC_W_R(c, 1));
  /* faf90: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* faf94: add x0, x0, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(64)));
  /* faf98: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* faf9c: bl #0x142ba8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1028000));
  fn1_142ba8(c);
  /* fafa0: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* fafa4: ldp x9, x10, [x0, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(64));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* fafa8: ldrb w8, [x0, #0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(64))));
  /* fafac: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* fafb0: mov w8, #0x16 */
  ARC_W_W(c, 8, UINT64_C(22));
  /* fafb4: and x11, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* fafb8: ubfx x12, x9, #1, #7 */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 9)) >> 1) & UINT64_C(127)));
  /* fafbc: sub x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* fafc0: csel x8, x8, x11, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 11)));
  /* fafc4: tst x9, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(1)));
  /* fafc8: csel x10, x12, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* fafcc: subs x1, x8, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10)));
  /* fafd0: b.ls #0xfafe8 */
  if (ARC_COND(c, 9)) goto L_fafe8;
  /* fafd4: add x0, x25, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 25) + UINT64_C(64)));
  /* fafd8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* fafdc: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1028064));
  fn1_142d10(c);
  /* fafe0: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* fafe4: b #0xfb008 */
  goto L_fb008;
L_fafe8:;
  /* fafe8: tbnz w9, #0, #0xfaffc */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_faffc;
  /* fafec: lsl w10, w8, #1 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* faff0: add x9, x0, #0x41 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + UINT64_C(65)));
  /* faff4: strb w10, [x0, #0x40] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(64)), ARC_W_R(c, 10));
  /* faff8: b #0xfb004 */
  goto L_fb004;
L_faffc:;
  /* faffc: ldr x9, [x0, #0x50] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(80))));
  /* fb000: str x8, [x0, #0x48] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(72)), ARC_X_R(c, 8));
L_fb004:;
  /* fb004: strb wzr, [x9, x8] */
  arc_st8((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_W_R(c, 31));
L_fb008:;
  /* fb008: ldrb w8, [x0, #0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(64))));
  /* fb00c: ldp x10, x9, [x0, #0x48] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(72));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* fb010: mov w1, w22 */
  ARC_W_W(c, 1, ARC_W_R(c, 22));
  /* fb014: lsr x11, x8, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* fb018: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* fb01c: add x8, x0, #0x41 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(65)));
  /* fb020: csel x9, x8, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* fb024: csel x8, x11, x10, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* fb028: sub x10, x19, x23 */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) - ARC_X_R(c, 23)));
  /* fb02c: sub x11, x24, x23 */
  ARC_X_W(c, 11, (ARC_X_R(c, 24) - ARC_X_R(c, 23)));
  /* fb030: add x8, x9, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ARC_X_R(c, 8)));
  /* fb034: add x19, x9, x10 */
  ARC_X_W(c, 19, (ARC_X_R(c, 9) + ARC_X_R(c, 10)));
  /* fb038: add x10, x9, x11 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + ARC_X_R(c, 11)));
  /* fb03c: str x9, [x0, #0x28] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(40)), ARC_X_R(c, 9));
  /* fb040: stp x19, x8, [x0, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
L_fb044:;
  /* fb044: add x9, x19, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* fb048: ldrb w11, [x0, #0x60] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 0) + INT64_C(96))));
  /* fb04c: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* fb050: csinc x10, x10, x19, lo */
  ARC_X_W(c, 10, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 19)) + 1)));
  /* fb054: str x10, [x0, #0x58] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(88)), ARC_X_R(c, 10));
  /* fb058: tbz w11, #3, #0xfb080 */
  if (((ARC_W_R(c, 11)) >> 3 & 1) == 0) goto L_fb080;
  /* fb05c: ldrb w11, [x0, #0x40] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 0) + INT64_C(64))));
  /* fb060: ldr x12, [x0, #0x50] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 0) + INT64_C(80))));
  /* fb064: add x13, x0, #0x41 */
  ARC_X_W(c, 13, (ARC_X_R(c, 0) + UINT64_C(65)));
  /* fb068: str x10, [x0, #0x20] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(32)), ARC_X_R(c, 10));
  /* fb06c: tst w11, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & UINT64_C(1)));
  /* fb070: sub x11, x20, x21 */
  ARC_X_W(c, 11, (ARC_X_R(c, 20) - ARC_X_R(c, 21)));
  /* fb074: csel x12, x13, x12, eq */
  ARC_X_W(c, 12, (ARC_COND(c, 0) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 12)));
  /* fb078: add x11, x12, x11 */
  ARC_X_W(c, 11, (ARC_X_R(c, 12) + ARC_X_R(c, 11)));
  /* fb07c: stp x12, x11, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 12));
    arc_st64(_pa + 8, ARC_X_R(c, 11));
  }
L_fb080:;
  /* fb080: cmp x19, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* fb084: b.eq #0xfb0b0 */
  if (ARC_COND(c, 0)) goto L_fb0b0;
  /* fb088: str x9, [x0, #0x30] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(48)), ARC_X_R(c, 9));
  /* fb08c: and w0, w1, #0xff */
  ARC_W_W(c, 0, (ARC_W_R(c, 1) & UINT64_C(255)));
  /* fb090: strb w1, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 1));
L_fb094:;
  /* fb094: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fb098: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* fb09c: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* fb0a0: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* fb0a4: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fb0a8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fb0ac: ret  */
  return;
L_fb0b0:;
  /* fb0b0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* fb0b4: ldr x16, [x8, #0x68] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* fb0b8: and w1, w1, #0xff */
  ARC_W_W(c, 1, (ARC_W_R(c, 1) & UINT64_C(255)));
  /* fb0bc: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fb0c0: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* fb0c4: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* fb0c8: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* fb0cc: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fb0d0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fb0d4: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
  /* fb0d8: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1028316));
  fn1_142548(c);
  /* fb0dc: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1028320));
  fn1_142980(c);
  /* fb0e0: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* fb0e4: b #0xfb094 */
  goto L_fb094;
}

void fn1_fe768(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038970216));
  /* fe768: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fe76c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fe770: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fe774: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fe778: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* fe77c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fe780: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* fe784: ldr x8, [x8, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* fe788: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1042316));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* fe78c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fe790: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fe794: ldr x1, [x1, #0xb70] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2928))));
  /* fe798: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1042332));
  fn1_143748(c);
  /* fe79c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* fe7a0: str x0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), ARC_X_R(c, 0));
  /* fe7a4: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* fe7a8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1042348));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* fe7ac: and w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) & UINT64_C(1)));
  /* fe7b0: strb w8, [x19, #0x58] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(88)), ARC_W_R(c, 8));
  /* fe7b4: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fe7b8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fe7bc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fe7c0: ret  */
  return;
}

void fn1_10a810(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039019536));
  /* 10a810: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 10a814: sub sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(160)));
  /* 10a818: stp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 10a81c: str x23, [sp, #0x70] */
  arc_st64(((c)->sp + INT64_C(112)), ARC_X_R(c, 23));
  /* 10a820: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 10a824: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 10a828: add x29, sp, #0x60 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(96)));
  /* 10a82c: ldr w9, [x2, #8] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 2) + INT64_C(8))));
  /* 10a830: mov w8, #0x25 */
  ARC_W_W(c, 8, UINT64_C(37));
  /* 10a834: mov x22, x4 */
  ARC_X_W(c, 22, ARC_X_R(c, 4));
  /* 10a838: mov w19, w3 */
  ARC_W_W(c, 19, ARC_W_R(c, 3));
  /* 10a83c: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 10a840: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 10a844: str x8, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 8));
  /* 10a848: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 10a84c: tbnz w9, #9, #0x10a858 */
  if (((ARC_W_R(c, 9)) >> 9 & 1) != 0) goto L_10a858;
  /* 10a850: orr x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(1)));
  /* 10a854: b #0x10a864 */
  goto L_10a864;
L_10a858:;
  /* 10a858: mov w10, #0x23 */
  ARC_W_W(c, 10, UINT64_C(35));
  /* 10a85c: orr x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(2)));
  /* 10a860: strb w10, [x29, #0x19] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(25)), ARC_W_R(c, 10));
L_10a864:;
  /* 10a864: mov w10, #0x4a */
  ARC_W_W(c, 10, UINT64_C(74));
  /* 10a868: mov w11, #0x6c6c */
  ARC_W_W(c, 11, UINT64_C(27756));
  /* 10a86c: and w10, w9, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) & ARC_W_R(c, 10)));
  /* 10a870: strh w11, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 11));
  /* 10a874: cmp w10, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(64));
  /* 10a878: b.eq #0x10a898 */
  if (ARC_COND(c, 0)) goto L_10a898;
  /* 10a87c: cmp w10, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(8));
  /* 10a880: b.ne #0x10a8a0 */
  if (ARC_COND(c, 1)) goto L_10a8a0;
  /* 10a884: tst w9, #0x4000 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(16384)));
  /* 10a888: mov w9, #0x58 */
  ARC_W_W(c, 9, UINT64_C(88));
  /* 10a88c: mov w10, #0x78 */
  ARC_W_W(c, 10, UINT64_C(120));
  /* 10a890: csel w9, w10, w9, eq */
  ARC_W_W(c, 9, (ARC_COND(c, 0) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* 10a894: b #0x10a8a4 */
  goto L_10a8a4;
L_10a898:;
  /* 10a898: mov w9, #0x6f */
  ARC_W_W(c, 9, UINT64_C(111));
  /* 10a89c: b #0x10a8a4 */
  goto L_10a8a4;
L_10a8a0:;
  /* 10a8a0: mov w9, #0x75 */
  ARC_W_W(c, 9, UINT64_C(117));
L_10a8a4:;
  /* 10a8a4: strb w9, [x8, #2] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(2)), ARC_W_R(c, 9));
  /* 10a8a8: nop  */
  /* nop: no architectural effect here */
  /* 10a8ac: adr x8, #0x15dc38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10a8b0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 10a8b4: adrp x23, #0x15d000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 10a8b8: tbz w8, #0, #0x10a9b4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10a9b4;
L_10a8bc:;
  /* 10a8bc: ldr x2, [x23, #0xc30] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 23) + INT64_C(3120))));
  /* 10a8c0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 10a8c4: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 10a8c8: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* 10a8cc: mov x4, x22 */
  ARC_X_W(c, 4, ARC_X_R(c, 22));
  /* 10a8d0: sub x22, x29, #0x18 */
  ARC_X_W(c, 22, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 10a8d4: bl #0x136860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1091800));
  fn1_136860(c);
  /* 10a8d8: ldr w8, [x20, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(8))));
  /* 10a8dc: mov w9, #0xb0 */
  ARC_W_W(c, 9, UINT64_C(176));
  /* 10a8e0: add x22, x22, w0, sxtw */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + ((uint64_t)(int64_t)(int32_t)(ARC_W_R(c, 0)))));
  /* 10a8e4: and w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & ARC_W_R(c, 9)));
  /* 10a8e8: mov x23, x22 */
  ARC_X_W(c, 23, ARC_X_R(c, 22));
  /* 10a8ec: cmp w8, #0x20 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(32));
  /* 10a8f0: b.eq #0x10a94c */
  if (ARC_COND(c, 0)) goto L_10a94c;
  /* 10a8f4: cmp w8, #0x10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(16));
  /* 10a8f8: b.ne #0x10a948 */
  if (ARC_COND(c, 1)) goto L_10a948;
  /* 10a8fc: ldurb w8, [x29, #-0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 10a900: cmp w8, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(45));
  /* 10a904: b.eq #0x10a910 */
  if (ARC_COND(c, 0)) goto L_10a910;
  /* 10a908: cmp w8, #0x2b */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(43));
  /* 10a90c: b.ne #0x10a91c */
  if (ARC_COND(c, 1)) goto L_10a91c;
L_10a910:;
  /* 10a910: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 10a914: orr x23, x8, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 8) | UINT64_C(1)));
  /* 10a918: b #0x10a94c */
  goto L_10a94c;
L_10a91c:;
  /* 10a91c: cmp w0, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(2));
  /* 10a920: b.lt #0x10a948 */
  if (ARC_COND(c, 11)) goto L_10a948;
  /* 10a924: cmp w8, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(48));
  /* 10a928: b.ne #0x10a948 */
  if (ARC_COND(c, 1)) goto L_10a948;
  /* 10a92c: ldurb w8, [x29, #-0x17] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-23))));
  /* 10a930: orr w8, w8, #0x20 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(32)));
  /* 10a934: cmp w8, #0x78 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(120));
  /* 10a938: b.ne #0x10a948 */
  if (ARC_COND(c, 1)) goto L_10a948;
  /* 10a93c: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 10a940: orr x23, x8, #2 */
  ARC_X_W(c, 23, (ARC_X_R(c, 8) | UINT64_C(2)));
  /* 10a944: b #0x10a94c */
  goto L_10a94c;
L_10a948:;
  /* 10a948: sub x23, x29, #0x18 */
  ARC_X_W(c, 23, (ARC_X_R(c, 29) - UINT64_C(24)));
L_10a94c:;
  /* 10a94c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 10a950: add x1, x20, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(48)));
  /* 10a954: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1091928));
  fn1_143460(c);
  /* 10a958: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 10a95c: add x3, sp, #0x1b */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(27)));
  /* 10a960: add x4, sp, #0x10 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(16)));
  /* 10a964: add x5, sp, #8 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(8)));
  /* 10a968: mov x6, sp */
  ARC_X_W(c, 6, (c)->sp);
  /* 10a96c: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 10a970: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 10a974: bl #0x1438f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1091960));
  fn1_1438f8(c);
  /* 10a978: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 10a97c: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1091968));
  fn1_143478(c);
  /* 10a980: ldp x3, x2, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 3, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 10a984: add x1, sp, #0x1b */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(27)));
  /* 10a988: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 10a98c: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* 10a990: mov w5, w19 */
  ARC_W_W(c, 5, ARC_W_R(c, 19));
  /* 10a994: bl #0x10b5d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1091992));
  fn1_10b5d8(c);
  /* 10a998: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 10a99c: ldr x23, [sp, #0x70] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(112))));
  /* 10a9a0: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 10a9a4: ldp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 10a9a8: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* 10a9ac: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 10a9b0: ret  */
  return;
L_10a9b4:;
  /* 10a9b4: nop  */
  /* nop: no architectural effect here */
  /* 10a9b8: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10a9bc: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1092032));
  fn1_1424b8(c);
  /* 10a9c0: cbz w0, #0x10a8bc */
  if ((ARC_W_R(c, 0)) == 0) goto L_10a8bc;
  /* 10a9c4: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 10a9c8: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 10a9cc: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 10a9d0: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 10a9d4: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1092056));
  fn1_1441e0(c);
  /* 10a9d8: str x0, [x23, #0xc30] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 10a9dc: nop  */
  /* nop: no architectural effect here */
  /* 10a9e0: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10a9e4: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1092072));
  fn1_1424d0(c);
  /* 10a9e8: b #0x10a8bc */
  goto L_10a8bc;
  /* 10a9ec: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10a9f0: nop  */
  /* nop: no architectural effect here */
  /* 10a9f4: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10a9f8: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1092092));
  fn1_1424e8(c);
  /* 10a9fc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10aa00: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1092100));
  fn1_9cc20(c);
  /* 10aa04: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10aa08: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 10aa0c: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1092112));
  fn1_143478(c);
  /* 10aa10: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10aa14: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1092120));
  fn1_9cc20(c);
}

void fn1_112c74(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039053428));
  /* 112c74: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 112c78: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 112c7c: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 112c80: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 112c84: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 112c88: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 112c8c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 112c90: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 112c94: mov x2, x4 */
  ARC_X_W(c, 2, ARC_X_R(c, 4));
  /* 112c98: mov x3, x5 */
  ARC_X_W(c, 3, ARC_X_R(c, 5));
  /* 112c9c: mov w4, #4 */
  ARC_W_W(c, 4, UINT64_C(4));
  /* 112ca0: bl #0x112ec0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1125540));
  fn1_112ec0(c);
  /* 112ca4: ldrb w8, [x20] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 20)));
  /* 112ca8: tbnz w8, #2, #0x112cb4 */
  if (((ARC_W_R(c, 8)) >> 2 & 1) != 0) goto L_112cb4;
  /* 112cac: sub w8, w0, #0x76c */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) - UINT64_C(1900)));
  /* 112cb0: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_112cb4:;
  /* 112cb4: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 112cb8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 112cbc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 112cc0: ret  */
  return;
}

void fn1_113fdc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039058396));
  /* 113fdc: bti c */
  /* bti: no architectural effect here */
  /* 113fe0: ldr w0, [x0, #0x14] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(20))));
  /* 113fe4: ret  */
  return;
}

void fn1_11f09c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039103644));
  /* 11f09c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 11f0a0: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 11f0a4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 11f0a8: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 11f0ac: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 11f0b0: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 11f0b4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 11f0b8: adrp x23, #0x151000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11f0bc: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 11f0c0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11f0c4: ldr x23, [x23, #0xc90] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 23) + INT64_C(3216))));
  /* 11f0c8: ldar x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11f0cc: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11f0d0: b.eq #0x11f18c */
  if (ARC_COND(c, 0)) goto L_11f18c;
  /* 11f0d4: nop  */
  /* nop: no architectural effect here */
  /* 11f0d8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11f0dc: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1175776));
  fn1_142518(c);
  /* 11f0e0: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11f0e4: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11f0e8: b.ne #0x11f114 */
  if (ARC_COND(c, 1)) goto L_11f114;
  /* 11f0ec: nop  */
  /* nop: no architectural effect here */
  /* 11f0f0: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11f0f4: nop  */
  /* nop: no architectural effect here */
  /* 11f0f8: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_11f0fc:;
  /* 11f0fc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11f100: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 11f104: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1175816));
  fn1_142530(c);
  /* 11f108: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11f10c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11f110: b.eq #0x11f0fc */
  if (ARC_COND(c, 0)) goto L_11f0fc;
L_11f114:;
  /* 11f114: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11f118: cbz x8, #0x11f12c */
  if ((ARC_X_R(c, 8)) == 0) goto L_11f12c;
  /* 11f11c: nop  */
  /* nop: no architectural effect here */
  /* 11f120: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11f124: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1175848));
  fn1_142560(c);
  /* 11f128: b #0x11f18c */
  goto L_11f18c;
L_11f12c:;
  /* 11f12c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11f130: str x23, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 23));
  /* 11f134: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11f138: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 11f13c: nop  */
  /* nop: no architectural effect here */
  /* 11f140: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11f144: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1175880));
  fn1_142560(c);
  /* 11f148: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11f14c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11f150: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11f154: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1175896));
  fn1_a2030(c);
  /* 11f158: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11f15c: str w8, [x23, #8] */
  arc_st32((ARC_X_R(c, 23) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11f160: nop  */
  /* nop: no architectural effect here */
  /* 11f164: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11f168: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1175916));
  fn1_142518(c);
  /* 11f16c: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11f170: stlr x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 11f174: nop  */
  /* nop: no architectural effect here */
  /* 11f178: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11f17c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1175936));
  fn1_142560(c);
  /* 11f180: nop  */
  /* nop: no architectural effect here */
  /* 11f184: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11f188: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1175948));
  fn1_142578(c);
L_11f18c:;
  /* 11f18c: ldrsw x8, [x23, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 23) + INT64_C(8)))));
  /* 11f190: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 11f194: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11f198: sub x22, x8, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11f19c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1175968));
  fn1_db2e0(c);
  /* 11f1a0: mov x21, x20 */
  ARC_X_W(c, 21, ARC_X_R(c, 20));
  /* 11f1a4: ldp x8, x9, [x21, #0x10]! */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11f1a8: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11f1ac: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11f1b0: cmp x10, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 22));
  /* 11f1b4: b.hi #0x11f1e0 */
  if (ARC_COND(c, 8)) goto L_11f1e0;
  /* 11f1b8: add x9, x22, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* 11f1bc: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11f1c0: b.ls #0x11f1d4 */
  if (ARC_COND(c, 9)) goto L_11f1d4;
  /* 11f1c4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11f1c8: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1176012));
  fn1_1352bc(c);
  /* 11f1cc: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11f1d0: b #0x11f1e0 */
  goto L_11f1e0;
L_11f1d4:;
  /* 11f1d4: b.hs #0x11f1e0 */
  if (ARC_COND(c, 2)) goto L_11f1e0;
  /* 11f1d8: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11f1dc: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11f1e0:;
  /* 11f1e0: ldr x20, [x8, x22, lsl #3] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3))));
  /* 11f1e4: cbz x20, #0x11f208 */
  if ((ARC_X_R(c, 20)) == 0) goto L_11f208;
  /* 11f1e8: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 11f1ec: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11f1f0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1176052));
  fn1_bd950(c);
  /* 11f1f4: cbnz x0, #0x11f208 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11f208;
  /* 11f1f8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 11f1fc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11f200: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11f204: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1176072));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11f208:;
  /* 11f208: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11f20c: str x19, [x8, x22, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3)), ARC_X_R(c, 19));
  /* 11f210: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 11f214: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 11f218: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 11f21c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 11f220: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 11f224: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 11f228: ret  */
  return;
  /* 11f22c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11f230: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 11f234: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11f238: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1176124));
  fn1_bd950(c);
  /* 11f23c: cbnz x0, #0x11f264 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11f264;
  /* 11f240: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11f244: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11f248: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11f24c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1176144));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11f250: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11f254: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1176152));
  fn1_9cc20(c);
  /* 11f258: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11f25c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 11f260: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1176164));
  fn1_d2a78(c);
L_11f264:;
  /* 11f264: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11f268: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1176172));
  fn1_9cc20(c);
}

void fn1_12667c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039133820));
  /* 12667c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 126680: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 126684: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 126688: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12668c: mov w19, w1 */
  ARC_W_W(c, 19, ARC_W_R(c, 1));
  /* 126690: cmp w1, #0x7f */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(127));
  /* 126694: b.hi #0x1266b8 */
  if (ARC_COND(c, 8)) goto L_1266b8;
  /* 126698: nop  */
  /* nop: no architectural effect here */
  /* 12669c: adr x8, #0x15dc38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 1266a0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1266a4: tbz w8, #0, #0x1266cc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1266cc;
L_1266a8:;
  /* 1266a8: sub w8, w19, #0x5b */
  ARC_W_W(c, 8, (ARC_W_R(c, 19) - UINT64_C(91)));
  /* 1266ac: add w9, w19, #0x20 */
  ARC_W_W(c, 9, (ARC_W_R(c, 19) + UINT64_C(32)));
  /* 1266b0: cmn w8, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(26), 0);
  /* 1266b4: csel w19, w19, w9, lo */
  ARC_W_W(c, 19, (ARC_COND(c, 3) ? (ARC_W_R(c, 19)) : ARC_W_R(c, 9)));
L_1266b8:;
  /* 1266b8: mov w0, w19 */
  ARC_W_W(c, 0, ARC_W_R(c, 19));
  /* 1266bc: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1266c0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1266c4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1266c8: ret  */
  return;
L_1266cc:;
  /* 1266cc: nop  */
  /* nop: no architectural effect here */
  /* 1266d0: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 1266d4: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1205976));
  fn1_1424b8(c);
  /* 1266d8: cbz w0, #0x1266a8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_1266a8;
  /* 1266dc: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 1266e0: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 1266e4: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 1266e8: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1266ec: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1206000));
  fn1_1441e0(c);
  /* 1266f0: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 1266f4: str x0, [x8, #0xc30] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 1266f8: nop  */
  /* nop: no architectural effect here */
  /* 1266fc: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 126700: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1206020));
  fn1_1424d0(c);
  /* 126704: b #0x1266a8 */
  goto L_1266a8;
  /* 126708: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12670c: nop  */
  /* nop: no architectural effect here */
  /* 126710: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 126714: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1206040));
  fn1_1424e8(c);
  /* 126718: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12671c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1206048));
  fn1_9cc20(c);
}

void fn1_128e90(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039144080));
  /* 128e90: bti c */
  /* bti: no architectural effect here */
  /* 128e94: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 128e98: ret  */
  return;
}

void fn1_12a7b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039150512));
  /* 12a7b0: bti c */
  /* bti: no architectural effect here */
  /* 12a7b4: sub x8, x3, x2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) - ARC_X_R(c, 2)));
  /* 12a7b8: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* 12a7bc: mov x8, x2 */
  ARC_X_W(c, 8, ARC_X_R(c, 2));
  /* 12a7c0: b.lt #0x12a7f0 */
  if (ARC_COND(c, 11)) goto L_12a7f0;
  /* 12a7c4: ldr w9, [x0, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 0) + INT64_C(32))));
  /* 12a7c8: mov x8, x2 */
  ARC_X_W(c, 8, ARC_X_R(c, 2));
  /* 12a7cc: tbz w9, #2, #0x12a7f0 */
  if (((ARC_W_R(c, 9)) >> 2 & 1) == 0) goto L_12a7f0;
  /* 12a7d0: ldrb w8, [x2] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 2)));
  /* 12a7d4: cmp w8, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(255));
  /* 12a7d8: mov x8, x2 */
  ARC_X_W(c, 8, ARC_X_R(c, 2));
  /* 12a7dc: b.ne #0x12a7f0 */
  if (ARC_COND(c, 1)) goto L_12a7f0;
  /* 12a7e0: ldrb w8, [x2, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 2) + INT64_C(1))));
  /* 12a7e4: cmp w8, #0xfe */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(254));
  /* 12a7e8: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 12a7ec: add x8, x2, w8, uxtw #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 2) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 1)));
L_12a7f0:;
  /* 12a7f0: cbz x4, #0x12a89c */
  if ((ARC_X_R(c, 4)) == 0) goto L_12a89c;
  /* 12a7f4: sub x9, x3, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 3) - UINT64_C(1)));
  /* 12a7f8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 12a7fc: b.hs #0x12a89c */
  if (ARC_COND(c, 2)) goto L_12a89c;
  /* 12a800: ldr x10, [x0, #0x18] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12a804: mov w11, #1 */
  ARC_W_W(c, 11, UINT64_C(1));
  /* 12a808: mov w12, #0xd800 */
  ARC_W_W(c, 12, UINT64_C(55296));
  /* 12a80c: mov w13, #0xdc00 */
  ARC_W_W(c, 13, UINT64_C(56320));
L_12a810:;
  /* 12a810: ldrb w16, [x8, #1] */
  ARC_W_W(c, 16, arc_ld8((ARC_X_R(c, 8) + INT64_C(1))));
  /* 12a814: ldrb w14, [x8] */
  ARC_W_W(c, 14, arc_ld8(ARC_X_R(c, 8)));
  /* 12a818: lsl w15, w16, #8 */
  ARC_W_W(c, 15, ((uint32_t)(ARC_W_R(c, 16)) << ((UINT64_C(8)) & 31)));
  /* 12a81c: bfi w14, w16, #8, #8 */
  ARC_W_W(c, 14, (((uint32_t)(ARC_W_R(c, 14)) & UINT64_C(4294902015)) | ((((uint32_t)(ARC_W_R(c, 16))) & UINT64_C(255)) << 8)));
  /* 12a820: and w15, w15, #0xfc00 */
  ARC_W_W(c, 15, (ARC_W_R(c, 15) & UINT64_C(64512)));
  /* 12a824: cmp w15, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 12));
  /* 12a828: b.eq #0x12a850 */
  if (ARC_COND(c, 0)) goto L_12a850;
  /* 12a82c: cmp w15, w13 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 13));
  /* 12a830: b.eq #0x12a89c */
  if (ARC_COND(c, 0)) goto L_12a89c;
  /* 12a834: cmp x10, w14, uxtw */
  (void)arc_sub64(c, ARC_X_R(c, 10), ((uint64_t)(uint32_t)(ARC_W_R(c, 14))));
  /* 12a838: cset w14, hs */
  ARC_W_W(c, 14, (ARC_COND(c, 2) ? 1 : 0));
  /* 12a83c: add x8, x8, w14, uxtw #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 14)))) << 1)));
  /* 12a840: b.lo #0x12a89c */
  if (ARC_COND(c, 3)) goto L_12a89c;
  /* 12a844: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 12a848: b.lo #0x12a890 */
  if (ARC_COND(c, 3)) goto L_12a890;
  /* 12a84c: b #0x12a89c */
  goto L_12a89c;
L_12a850:;
  /* 12a850: sub x15, x3, x8 */
  ARC_X_W(c, 15, (ARC_X_R(c, 3) - ARC_X_R(c, 8)));
  /* 12a854: cmp x15, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(4));
  /* 12a858: b.lt #0x12a89c */
  if (ARC_COND(c, 11)) goto L_12a89c;
  /* 12a85c: ldrb w15, [x8, #3] */
  ARC_W_W(c, 15, arc_ld8((ARC_X_R(c, 8) + INT64_C(3))));
  /* 12a860: and w16, w15, #0xfc */
  ARC_W_W(c, 16, (ARC_W_R(c, 15) & UINT64_C(252)));
  /* 12a864: cmp w16, #0xdc */
  (void)arc_sub32(c, ARC_W_R(c, 16), UINT64_C(220));
  /* 12a868: b.ne #0x12a89c */
  if (ARC_COND(c, 1)) goto L_12a89c;
  /* 12a86c: ldrb w16, [x8, #2] */
  ARC_W_W(c, 16, arc_ld8((ARC_X_R(c, 8) + INT64_C(2))));
  /* 12a870: bfi w16, w15, #8, #2 */
  ARC_W_W(c, 16, (((uint32_t)(ARC_W_R(c, 16)) & UINT64_C(4294966527)) | ((((uint32_t)(ARC_W_R(c, 15))) & UINT64_C(3)) << 8)));
  /* 12a874: bfi w16, w14, #0xa, #0xa */
  ARC_W_W(c, 16, (((uint32_t)(ARC_W_R(c, 16)) & UINT64_C(4293919743)) | ((((uint32_t)(ARC_W_R(c, 14))) & UINT64_C(1023)) << 10)));
  /* 12a878: add w14, w16, #0x10, lsl #12 */
  ARC_W_W(c, 14, (ARC_W_R(c, 16) + UINT64_C(65536)));
  /* 12a87c: cmp x10, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 14));
  /* 12a880: b.lo #0x12a89c */
  if (ARC_COND(c, 3)) goto L_12a89c;
  /* 12a884: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 12a888: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 12a88c: b.hs #0x12a89c */
  if (ARC_COND(c, 2)) goto L_12a89c;
L_12a890:;
  /* 12a890: cmp x11, x4 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 4));
  /* 12a894: add x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(1)));
  /* 12a898: b.lo #0x12a810 */
  if (ARC_COND(c, 3)) goto L_12a810;
L_12a89c:;
  /* 12a89c: sub w0, w8, w2 */
  ARC_W_W(c, 0, (ARC_W_R(c, 8) - ARC_W_R(c, 2)));
  /* 12a8a0: ret  */
  return;
}

void fn1_12bcfc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039155964));
  /* 12bcfc: bti c */
  /* bti: no architectural effect here */
  /* 12bd00: ldr w0, [x0, #0x10] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 12bd04: ret  */
  return;
}

void fn1_132d98(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039184792));
  /* 132d98: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 132d9c: sub sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(144)));
  /* 132da0: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 132da4: stp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 132da8: stp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 132dac: stp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 132db0: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* 132db4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 132db8: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 132dbc: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 132dc0: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 132dc4: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1256904));
  fn1_1441e0(c);
  /* 132dc8: stur x0, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 0));
  /* 132dcc: cbz x0, #0x1330b8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1330b8;
  /* 132dd0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 132dd4: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1256920));
  fn1_1443c0(c);
  /* 132dd8: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 132ddc: str x0, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 0));
  /* 132de0: bl #0x144498 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1256932));
  fn1_144498(c);
  /* 132de4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 132de8: cbz x22, #0x132df4 */
  if ((ARC_X_R(c, 22)) == 0) goto L_132df4;
  /* 132dec: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 132df0: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1256948));
  fn1_1443c0(c);
L_132df4:;
  /* 132df4: ldr x23, [x21, #0x28] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 21) + INT64_C(40))));
  /* 132df8: ldrb w22, [x23] */
  ARC_W_W(c, 22, arc_ld8(ARC_X_R(c, 23)));
  /* 132dfc: cbz w22, #0x132ea0 */
  if ((ARC_W_R(c, 22)) == 0) goto L_132ea0;
  /* 132e00: ldrb w8, [x23, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 23) + INT64_C(1))));
  /* 132e04: cbz w8, #0x132ea4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_132ea4;
  /* 132e08: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 132e0c: str xzr, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 31));
  /* 132e10: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1256980));
  fn1_142860(c);
  /* 132e14: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 132e18: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 132e1c: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1256992));
  fn1_1443c0(c);
  /* 132e20: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 132e24: str x0, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 0));
  /* 132e28: sub x0, x29, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 132e2c: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 132e30: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 132e34: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 132e38: bl #0x144438 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1257020));
  fn1_144438(c);
  /* 132e3c: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 132e40: cbz x22, #0x132e4c */
  if ((ARC_X_R(c, 22)) == 0) goto L_132e4c;
  /* 132e44: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 132e48: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1257036));
  fn1_1443c0(c);
L_132e4c:;
  /* 132e4c: cmn x23, #2 */
  (void)arc_add64(c, ARC_X_R(c, 23), UINT64_C(2), 0);
  /* 132e50: b.hs #0x132ea0 */
  if (ARC_COND(c, 2)) goto L_132ea0;
  /* 132e54: ldur w23, [x29, #-4] */
  ARC_W_W(c, 23, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 132e58: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 132e5c: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1257056));
  fn1_1443c0(c);
  /* 132e60: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 132e64: str x0, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 0));
  /* 132e68: mov w0, w23 */
  ARC_W_W(c, 0, ARC_W_R(c, 23));
  /* 132e6c: bl #0x1443d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1257072));
  fn1_1443d8(c);
  /* 132e70: mov w22, w0 */
  ARC_W_W(c, 22, ARC_W_R(c, 0));
  /* 132e74: cbz x24, #0x132e80 */
  if ((ARC_X_R(c, 24)) == 0) goto L_132e80;
  /* 132e78: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 132e7c: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1257088));
  fn1_1443c0(c);
L_132e80:;
  /* 132e80: cmn w22, #1 */
  (void)arc_add32(c, ARC_W_R(c, 22), UINT64_C(1), 0);
  /* 132e84: b.ne #0x132ea4 */
  if (ARC_COND(c, 1)) goto L_132ea4;
  /* 132e88: cmp w23, #0xa0 */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(160));
  /* 132e8c: mov w8, #0x202f */
  ARC_W_W(c, 8, UINT64_C(8239));
  /* 132e90: ccmp w23, w8, #4, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub32(c, ARC_W_R(c, 23), ARC_W_R(c, 8)); }
  else { (c)->nf = 0; (c)->zf = 1;
          (c)->cf = 0; (c)->vf = 0; }
  /* 132e94: mov w8, #0x20 */
  ARC_W_W(c, 8, UINT64_C(32));
  /* 132e98: csinv w22, w8, wzr, eq */
  ARC_W_W(c, 22, (ARC_COND(c, 0) ? (ARC_W_R(c, 8)) : (~(uint32_t)(ARC_W_R(c, 31)))));
  /* 132e9c: b #0x132ea4 */
  goto L_132ea4;
L_132ea0:;
  /* 132ea0: mov w22, #0xff */
  ARC_W_W(c, 22, UINT64_C(255));
L_132ea4:;
  /* 132ea4: strb w22, [x20, #0x10] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(16)), ARC_W_R(c, 22));
  /* 132ea8: ldr x23, [x21, #0x30] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 21) + INT64_C(48))));
  /* 132eac: ldrb w22, [x23] */
  ARC_W_W(c, 22, arc_ld8(ARC_X_R(c, 23)));
  /* 132eb0: cbz w22, #0x132f54 */
  if ((ARC_W_R(c, 22)) == 0) goto L_132f54;
  /* 132eb4: ldrb w8, [x23, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 23) + INT64_C(1))));
  /* 132eb8: cbz w8, #0x132f58 */
  if ((ARC_W_R(c, 8)) == 0) goto L_132f58;
  /* 132ebc: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 132ec0: str xzr, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 31));
  /* 132ec4: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1257160));
  fn1_142860(c);
  /* 132ec8: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 132ecc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 132ed0: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1257172));
  fn1_1443c0(c);
  /* 132ed4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 132ed8: str x0, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 0));
  /* 132edc: sub x0, x29, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 132ee0: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 132ee4: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 132ee8: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 132eec: bl #0x144438 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1257200));
  fn1_144438(c);
  /* 132ef0: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 132ef4: cbz x22, #0x132f00 */
  if ((ARC_X_R(c, 22)) == 0) goto L_132f00;
  /* 132ef8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 132efc: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1257216));
  fn1_1443c0(c);
L_132f00:;
  /* 132f00: cmn x23, #2 */
  (void)arc_add64(c, ARC_X_R(c, 23), UINT64_C(2), 0);
  /* 132f04: b.hs #0x132f54 */
  if (ARC_COND(c, 2)) goto L_132f54;
  /* 132f08: ldur w23, [x29, #-4] */
  ARC_W_W(c, 23, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 132f0c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 132f10: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1257236));
  fn1_1443c0(c);
  /* 132f14: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 132f18: str x0, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 0));
  /* 132f1c: mov w0, w23 */
  ARC_W_W(c, 0, ARC_W_R(c, 23));
  /* 132f20: bl #0x1443d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1257252));
  fn1_1443d8(c);
  /* 132f24: mov w22, w0 */
  ARC_W_W(c, 22, ARC_W_R(c, 0));
  /* 132f28: cbz x24, #0x132f34 */
  if ((ARC_X_R(c, 24)) == 0) goto L_132f34;
  /* 132f2c: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 132f30: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1257268));
  fn1_1443c0(c);
L_132f34:;
  /* 132f34: cmn w22, #1 */
  (void)arc_add32(c, ARC_W_R(c, 22), UINT64_C(1), 0);
  /* 132f38: b.ne #0x132f58 */
  if (ARC_COND(c, 1)) goto L_132f58;
  /* 132f3c: cmp w23, #0xa0 */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(160));
  /* 132f40: mov w8, #0x202f */
  ARC_W_W(c, 8, UINT64_C(8239));
  /* 132f44: ccmp w23, w8, #4, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub32(c, ARC_W_R(c, 23), ARC_W_R(c, 8)); }
  else { (c)->nf = 0; (c)->zf = 1;
          (c)->cf = 0; (c)->vf = 0; }
  /* 132f48: mov w8, #0x20 */
  ARC_W_W(c, 8, UINT64_C(32));
  /* 132f4c: csinv w22, w8, wzr, eq */
  ARC_W_W(c, 22, (ARC_COND(c, 0) ? (ARC_W_R(c, 8)) : (~(uint32_t)(ARC_W_R(c, 31)))));
  /* 132f50: b #0x132f58 */
  goto L_132f58;
L_132f54:;
  /* 132f54: mov w22, #0xff */
  ARC_W_W(c, 22, UINT64_C(255));
L_132f58:;
  /* 132f58: strb w22, [x20, #0x11] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(17)), ARC_W_R(c, 22));
  /* 132f5c: ldr x1, [x21, #0x38] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(56))));
  /* 132f60: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 132f64: bl #0xe167c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1257320));
  fn1_e167c(c);
  /* 132f68: ldr x1, [x21, #0x18] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(24))));
  /* 132f6c: add x0, x20, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(48)));
  /* 132f70: bl #0xe167c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1257332));
  fn1_e167c(c);
  /* 132f74: ldrb w8, [x21, #0x50] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 21) + INT64_C(80))));
  /* 132f78: cmp w8, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(255));
  /* 132f7c: csel w8, wzr, w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? (ARC_W_R(c, 31)) : ARC_W_R(c, 8)));
  /* 132f80: str w8, [x20, #0x78] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(120)), ARC_W_R(c, 8));
  /* 132f84: ldrb w8, [x21, #0x5c] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 21) + INT64_C(92))));
  /* 132f88: cbz w8, #0x132fc8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_132fc8;
  /* 132f8c: ldr x1, [x21, #0x40] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(64))));
  /* 132f90: add x0, x20, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(72)));
  /* 132f94: bl #0xe167c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1257368));
  fn1_e167c(c);
  /* 132f98: ldrb w8, [x21, #0x5d] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 21) + INT64_C(93))));
  /* 132f9c: cbz w8, #0x133000 */
  if ((ARC_W_R(c, 8)) == 0) goto L_133000;
L_132fa0:;
  /* 132fa0: ldr x1, [x21, #0x48] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(72))));
  /* 132fa4: add x0, x20, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(96)));
  /* 132fa8: bl #0xe167c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1257388));
  fn1_e167c(c);
  /* 132fac: ldurb w8, [x20, #0x30] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(48))));
  /* 132fb0: tbnz w8, #0, #0x133038 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_133038;
L_132fb4:;
  /* 132fb4: ldur q0, [x20, #0x30] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(48))), arc_ld64((ARC_X_R(c, 20) + INT64_C(48)) + 8));
  /* 132fb8: ldur x8, [x20, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(64))));
  /* 132fbc: str q0, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(32)) + 8, (c)->q[0].u64[1]);
  /* 132fc0: str x8, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 8));
  /* 132fc4: b #0x133044 */
  goto L_133044;
L_132fc8:;
  /* 132fc8: ldurb w8, [x20, #0x48] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(72))));
  /* 132fcc: tbnz w8, #0, #0x132fe0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_132fe0;
  /* 132fd0: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 132fd4: strb w8, [x20, #0x48] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(72)), ARC_W_R(c, 8));
  /* 132fd8: add x8, x20, #0x49 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + UINT64_C(73)));
  /* 132fdc: b #0x132fec */
  goto L_132fec;
L_132fe0:;
  /* 132fe0: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* 132fe4: ldr x8, [x20, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(88))));
  /* 132fe8: str x9, [x20, #0x50] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(80)), ARC_X_R(c, 9));
L_132fec:;
  /* 132fec: mov w9, #0x2928 */
  ARC_W_W(c, 9, UINT64_C(10536));
  /* 132ff0: strb wzr, [x8, #2] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(2)), ARC_W_R(c, 31));
  /* 132ff4: strh w9, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 132ff8: ldrb w8, [x21, #0x5d] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 21) + INT64_C(93))));
  /* 132ffc: cbnz w8, #0x132fa0 */
  if ((ARC_W_R(c, 8)) != 0) goto L_132fa0;
L_133000:;
  /* 133000: ldurb w8, [x20, #0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(96))));
  /* 133004: tbnz w8, #0, #0x133018 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_133018;
  /* 133008: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 13300c: strb w8, [x20, #0x60] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(96)), ARC_W_R(c, 8));
  /* 133010: add x8, x20, #0x61 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + UINT64_C(97)));
  /* 133014: b #0x133024 */
  goto L_133024;
L_133018:;
  /* 133018: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* 13301c: ldr x8, [x20, #0x70] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(112))));
  /* 133020: str x9, [x20, #0x68] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(104)), ARC_X_R(c, 9));
L_133024:;
  /* 133024: mov w9, #0x2928 */
  ARC_W_W(c, 9, UINT64_C(10536));
  /* 133028: strb wzr, [x8, #2] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(2)), ARC_W_R(c, 31));
  /* 13302c: strh w9, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 133030: ldurb w8, [x20, #0x30] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(48))));
  /* 133034: tbz w8, #0, #0x132fb4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_132fb4;
L_133038:;
  /* 133038: ldp x2, x1, [x20, #0x38] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(56));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 13303c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 133040: bl #0xda588 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1257540));
  fn1_da588(c);
L_133044:;
  /* 133044: ldrb w5, [x21, #0x5c] */
  ARC_W_W(c, 5, arc_ld8((ARC_X_R(c, 21) + INT64_C(92))));
  /* 133048: ldrb w4, [x21, #0x59] */
  ARC_W_W(c, 4, arc_ld8((ARC_X_R(c, 21) + INT64_C(89))));
  /* 13304c: ldrb w3, [x21, #0x58] */
  ARC_W_W(c, 3, arc_ld8((ARC_X_R(c, 21) + INT64_C(88))));
  /* 133050: add x0, x20, #0x7c */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(124)));
  /* 133054: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 133058: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 13305c: bl #0x132874 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1257568));
  fn1_132874(c);
  /* 133060: ldrb w5, [x21, #0x5d] */
  ARC_W_W(c, 5, arc_ld8((ARC_X_R(c, 21) + INT64_C(93))));
  /* 133064: ldrb w4, [x21, #0x5b] */
  ARC_W_W(c, 4, arc_ld8((ARC_X_R(c, 21) + INT64_C(91))));
  /* 133068: ldrb w3, [x21, #0x5a] */
  ARC_W_W(c, 3, arc_ld8((ARC_X_R(c, 21) + INT64_C(90))));
  /* 13306c: add x0, x20, #0x80 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(128)));
  /* 133070: add x1, x20, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(48)));
  /* 133074: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 133078: bl #0x132874 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1257596));
  fn1_132874(c);
  /* 13307c: ldrb w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(32))));
  /* 133080: tbz w8, #0, #0x133094 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_133094;
  /* 133084: ldr x8, [sp, #0x20] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
  /* 133088: ldr x0, [sp, #0x30] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(48))));
  /* 13308c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 133090: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1257620));
  fn1_142608(c);
L_133094:;
  /* 133094: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 133098: bl #0x144210 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1257628));
  fn1_144210(c);
  /* 13309c: ldp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1330a0: ldp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1330a4: ldp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1330a8: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1330ac: add sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(144)));
  /* 1330b0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1330b4: ret  */
  return;
L_1330b8:;
  /* 1330b8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1330bc: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1330c0: bl #0x11dda8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1257668));
  fn1_11dda8(c);
  /* 1330c4: adrp x0, #0x50000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(327680)));
  /* 1330c8: add x0, x0, #0xfc2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(4034)));
  /* 1330cc: add x8, sp, #0x20 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(32)));
  /* 1330d0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1330d4: add x19, sp, #0x20 */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(32)));
  /* 1330d8: bl #0x125878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1257692));
  fn1_125878(c);
  /* 1330dc: ldrb w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(32))));
  /* 1330e0: ldr x9, [sp, #0x30] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(48))));
  /* 1330e4: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1330e8: csinc x0, x9, x19, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* 1330ec: bl #0x142c98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1257712));
  fn1_142c98(c);
  /* 1330f0: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1257716));
  fn1_a1454(c);
  /* 1330f4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1257720));
  fn1_a1454(c);
  /* 1330f8: b #0x133158 */
  goto L_133158;
  /* 1330fc: b #0x133158 */
  goto L_133158;
  /* 133100: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1257732));
  fn1_a1454(c);
  /* 133104: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1257736));
  fn1_a1454(c);
  /* 133108: ldrb w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(32))));
  /* 13310c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 133110: tbz w8, #0, #0x13312c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13312c;
  /* 133114: ldr x8, [sp, #0x20] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
  /* 133118: ldr x0, [sp, #0x30] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(48))));
  /* 13311c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 133120: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1257764));
  fn1_142608(c);
  /* 133124: b #0x13312c */
  goto L_13312c;
  /* 133128: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_13312c:;
  /* 13312c: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 133130: tbz w8, #0, #0x13318c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13318c;
  /* 133134: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 133138: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 13313c: b #0x13317c */
  goto L_13317c;
  /* 133140: b #0x133158 */
  goto L_133158;
  /* 133144: b #0x133158 */
  goto L_133158;
  /* 133148: b #0x133188 */
  goto L_133188;
  /* 13314c: b #0x133188 */
  goto L_133188;
  /* 133150: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1257812));
  fn1_a1454(c);
  /* 133154: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1257816));
  fn1_a1454(c);
L_133158:;
  /* 133158: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13315c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 133160: bl #0x135428 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1257828));
  fn1_135428(c);
  /* 133164: b #0x13318c */
  goto L_13318c;
  /* 133168: ldrb w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(32))));
  /* 13316c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 133170: tbz w8, #0, #0x13318c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13318c;
  /* 133174: ldr x0, [sp, #0x30] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(48))));
  /* 133178: ldr x8, [sp, #0x20] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
L_13317c:;
  /* 13317c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 133180: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1257860));
  fn1_142608(c);
  /* 133184: b #0x13318c */
  goto L_13318c;
L_133188:;
  /* 133188: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_13318c:;
  /* 13318c: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 133190: bl #0x12c2c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1257876));
  fn1_12c2c0(c);
  /* 133194: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 133198: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1257884));
  fn1_9cc20(c);
}

void fn1_134c80(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192704));
  /* 134c80: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 134c84: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 134c88: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 134c8c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 134c90: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 134c94: add x0, x0, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* 134c98: bl #0x143d00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1264796));
  fn1_143d00(c);
  /* 134c9c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 134ca0: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* 134ca4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 134ca8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 134cac: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 134cb0: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_13727c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039202428));
  /* 13727c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 137280: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 137284: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 137288: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13728c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 137290: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* 137294: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 137298: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 13729c: cbz x2, #0x1372c0 */
  if ((ARC_X_R(c, 2)) == 0) goto L_1372c0;
  /* 1372a0: cmp x2, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 2), UINT64_C(0));
  /* 1372a4: mov w8, #0x7fffffff */
  ARC_W_W(c, 8, UINT64_C(2147483647));
  /* 1372a8: csel x0, x8, x2, lt */
  ARC_X_W(c, 0, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 2)));
  /* 1372ac: cbz x19, #0x1372cc */
  if ((ARC_X_R(c, 19)) == 0) goto L_1372cc;
L_1372b0:;
  /* 1372b0: add x8, x19, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 0)));
  /* 1372b4: stp x19, x19, [x20, #0x28] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1372b8: str x8, [x20, #0x38] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(56)), ARC_X_R(c, 8));
  /* 1372bc: b #0x1372d0 */
  goto L_1372d0;
L_1372c0:;
  /* 1372c0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1372c4: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1274568));
  fn1_142860(c);
  /* 1372c8: cbnz x19, #0x1372b0 */
  if ((ARC_X_R(c, 19)) != 0) goto L_1372b0;
L_1372cc:;
  /* 1372cc: add x19, x21, x0 */
  ARC_X_W(c, 19, (ARC_X_R(c, 21) + ARC_X_R(c, 0)));
L_1372d0:;
  /* 1372d0: stp x21, x21, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1372d4: str x19, [x20, #0x20] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(32)), ARC_X_R(c, 19));
  /* 1372d8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1372dc: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1372e0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1372e4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1372e8: ret  */
  return;
}

void fn1_13a9f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039216632));
  /* 13a9f8: bti c */
  /* bti: no architectural effect here */
  /* 13a9fc: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 13aa00: ldr w8, [x8, #0x28] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 8) + INT64_C(40))));
  /* 13aa04: sub w0, w8, #1 */
  ARC_W_W(c, 0, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* 13aa08: ret  */
  return;
}

void fn1_141620(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039244320));
  /* 141620: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 141624: sub sp, sp, #0x130 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(304)));
  /* 141628: stp x29, x30, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 14162c: stp x28, x19, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 141630: add x29, sp, #0x110 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(272)));
  /* 141634: mov x9, #-0x28 */
  ARC_X_W(c, 9, UINT64_C(18446744073709551576));
  /* 141638: add x10, sp, #0x10 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(16)));
  /* 14163c: sub x11, x29, #0x78 */
  ARC_X_W(c, 11, (ARC_X_R(c, 29) - UINT64_C(120)));
  /* 141640: movk x9, #0xff80, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(280925220896768)));
  /* 141644: add x10, x10, #0x80 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(128)));
  /* 141648: stp x3, x4, [x29, #-0x78] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-120));
    arc_st64(_pa, ARC_X_R(c, 3));
    arc_st64(_pa + 8, ARC_X_R(c, 4));
  }
  /* 14164c: stp x10, x9, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 141650: add x9, x11, #0x28 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) + UINT64_C(40)));
  /* 141654: add x10, x29, #0x20 */
  ARC_X_W(c, 10, (ARC_X_R(c, 29) + UINT64_C(32)));
  /* 141658: stp x5, x6, [x29, #-0x68] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-104));
    arc_st64(_pa, ARC_X_R(c, 5));
    arc_st64(_pa + 8, ARC_X_R(c, 6));
  }
  /* 14165c: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 141660: stur x7, [x29, #-0x58] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-88)), ARC_X_R(c, 7));
  /* 141664: stp q0, q1, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 141668: stp q2, q3, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, (c)->q[2].u64[0]);
    arc_st64(_pa + 8, (c)->q[2].u64[1]);
    arc_st64((_pa + 16), (c)->q[3].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[3].u64[1]);
  }
  /* 14166c: stp q4, q5, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, (c)->q[4].u64[0]);
    arc_st64(_pa + 8, (c)->q[4].u64[1]);
    arc_st64((_pa + 16), (c)->q[5].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[5].u64[1]);
  }
  /* 141670: stp q6, q7, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, (c)->q[6].u64[0]);
    arc_st64(_pa + 8, (c)->q[6].u64[1]);
    arc_st64((_pa + 16), (c)->q[7].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[7].u64[1]);
  }
  /* 141674: stp x10, x9, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 141678: nop  */
  /* nop: no architectural effect here */
  /* 14167c: adr x10, #0x159208 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 141680: ldr w9, [x1] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 1)));
  /* 141684: ldarb w10, [x10] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 10)));
  /* 141688: tbz w10, #0, #0x1416d0 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) == 0) goto L_1416d0;
L_14168c:;
  /* 14168c: ldp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 141690: nop  */
  /* nop: no architectural effect here */
  /* 141694: adr x8, #0x156d38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 141698: stp x9, x8, [x29, #-0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-48));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 14169c: stp q0, q1, [x29, #-0x50] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-80));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 1416a0: adrp x2, #0x50000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(327680)));
  /* 1416a4: add x2, x2, #0x246 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(582)));
  /* 1416a8: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1416ac: sub x3, x29, #0x50 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 1416b0: bl #0x141ec8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1316532));
  fn1_141ec8(c);
  /* 1416b4: stp xzr, xzr, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1416b8: str xzr, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 31));
  /* 1416bc: ldp x28, x19, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1416c0: ldp x29, x30, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1416c4: add sp, sp, #0x130 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(304)));
  /* 1416c8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1416cc: ret  */
  return;
L_1416d0:;
  /* 1416d0: nop  */
  /* nop: no architectural effect here */
  /* 1416d4: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 1416d8: stp x9, x0, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 1416dc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1416e0: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1316580));
  fn1_1424b8(c);
  /* 1416e4: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1416e8: ldp x9, x0, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 0, arc_ld64(_pa + 8));
  }
  /* 1416ec: cbz w8, #0x14168c */
  if ((ARC_W_R(c, 8)) == 0) goto L_14168c;
  /* 1416f0: nop  */
  /* nop: no architectural effect here */
  /* 1416f4: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 1416f8: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1316604));
  fn1_1424d0(c);
  /* 1416fc: ldp x9, x0, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 0, arc_ld64(_pa + 8));
  }
  /* 141700: b #0x14168c */
  goto L_14168c;
  /* 141704: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1316616));
  fn1_142548(c);
  /* 141708: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1316620));
  fn1_1429b0(c);
  /* 14170c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 141710: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1316628));
  fn1_142980(c);
  /* 141714: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 141718: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1316636));
  fn1_9cc20(c);
  /* 14171c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1316640));
  fn1_a1454(c);
}

void fn1_1428d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249112));
  /* 1428d8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1428dc: ldr x17, [x16, #0x28] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(40))));
  /* 1428e0: add x16, x16, #0x28 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(40)));
  /* 1428e4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1428e8: nop  */
  /* nop: no architectural effect here */
  /* 1428ec: nop  */
  /* nop: no architectural effect here */
}

void fn1_142ed8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250648));
  /* 142ed8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142edc: ldr x17, [x16, #0x228] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(552))));
  /* 142ee0: add x16, x16, #0x228 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(552)));
  /* 142ee4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142ee8: nop  */
  /* nop: no architectural effect here */
  /* 142eec: nop  */
  /* nop: no architectural effect here */
}

void fn1_1434d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252184));
  /* 1434d8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1434dc: ldr x17, [x16, #0x428] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1064))));
  /* 1434e0: add x16, x16, #0x428 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1064)));
  /* 1434e4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1434e8: nop  */
  /* nop: no architectural effect here */
  /* 1434ec: nop  */
  /* nop: no architectural effect here */
}

void fn1_143ad8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253720));
  /* 143ad8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143adc: ldr x17, [x16, #0x628] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1576))));
  /* 143ae0: add x16, x16, #0x628 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1576)));
  /* 143ae4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143ae8: nop  */
  /* nop: no architectural effect here */
  /* 143aec: nop  */
  /* nop: no architectural effect here */
}

void fn1_1440d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255256));
  /* 1440d8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1440dc: ldr x17, [x16, #0x828] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2088))));
  /* 1440e0: add x16, x16, #0x828 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2088)));
  /* 1440e4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1440e8: nop  */
  /* nop: no architectural effect here */
  /* 1440ec: nop  */
  /* nop: no architectural effect here */
}

void fn1_1446d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256792));
  /* 1446d8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1446dc: ldr x17, [x16, #0xa28] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2600))));
  /* 1446e0: add x16, x16, #0xa28 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2600)));
  /* 1446e4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1446e8: nop  */
  /* nop: no architectural effect here */
  /* 1446ec: nop  */
  /* nop: no architectural effect here */
}

