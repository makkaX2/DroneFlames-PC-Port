#include "lifted.h"

void fn1_9ce84(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038570628));
  /* 9ce84: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 9ce88: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 9ce8c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 9ce90: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 9ce94: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 9ce98: mov w1, #-1 */
  ARC_W_W(c, 1, UINT64_C(18446744073709551615));
  /* 9ce9c: bl #0x9cf8c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(642720));
  fn1_9cf8c(c);
  /* 9cea0: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 9cea4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9cea8: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 9ceac: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 9ceb0: ret  */
  return;
}

void fn1_a147c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038588540));
  /* a147c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a1480: str x30, [sp, #-0x10]! */
  { const uint64_t _a = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_a, ARC_X_R(c, 30));
  }
  /* a1484: nop  */
  /* nop: no architectural effect here */
  /* a1488: adr x0, #0x156bb8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1403832)));
  /* a148c: bl #0x144ac8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(660624));
  fn1_144ac8(c);
  /* a1490: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* a1494: cbz x8, #0xa14bc */
  if ((ARC_X_R(c, 8)) == 0) goto L_a14bc;
  /* a1498: mov x10, #0x2b2b */
  ARC_X_W(c, 10, UINT64_C(11051));
  /* a149c: ldr x9, [x8, #0x60] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(96))));
  /* a14a0: movk x10, #0x4743, lsl #16 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1195573248)));
  /* a14a4: movk x10, #0x4c4e, lsl #32 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446462603027808255)) | UINT64_C(83897891160064)));
  /* a14a8: movk x10, #0x43, lsl #48 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(281474976710655)) | UINT64_C(18858823439613952)));
  /* a14ac: cmp x10, x9, lsr #8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ((uint64_t)(ARC_X_R(c, 9)) >> 8));
  /* a14b0: b.ne #0xa14bc */
  if (ARC_COND(c, 1)) goto L_a14bc;
  /* a14b4: ldr x0, [x8, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* a14b8: bl #0xa1518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(660668));
  fn1_a1518(c);
L_a14bc:;
  /* a14bc: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a14c0: ldr x8, [x8, #0x8b0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2224))));
  /* a14c4: ldar x0, [x8] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 8)));
  /* a14c8: bl #0xa1518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(660684));
  fn1_a1518(c);
}

void fn1_a27ac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038593452));
  /* a27ac: bti c */
  /* bti: no architectural effect here */
  /* a27b0: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* a27b4: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_a8924(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038618404));
  /* a8924: bti c */
  /* bti: no architectural effect here */
  /* a8928: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* a892c: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_afa3c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038647356));
  /* afa3c: bti c */
  /* bti: no architectural effect here */
  /* afa40: mov w1, #0x40 */
  ARC_W_W(c, 1, UINT64_C(64));
  /* afa44: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b41c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038665672));
  /* b41c8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b41cc: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b41d0: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b41d4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b41d8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b41dc: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* b41e0: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b41e4: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* b41e8: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* b41ec: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b41f0: b.hi #0xb4214 */
  if (ARC_COND(c, 8)) goto L_b4214;
  /* b41f4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b41f8: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b41fc: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(737792));
  fn1_1428a8(c);
  /* b4200: cbz x0, #0xb4264 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b4264;
  /* b4204: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b4208: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b420c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b4210: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_b4214:;
  /* b4214: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* b4218: add x0, x21, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* b421c: adrp x8, #0x14a000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1351680)));
  /* b4220: add x8, x8, #0xe88 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3720)));
  /* b4224: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* b4228: mov w9, #0x43 */
  ARC_W_W(c, 9, UINT64_C(67));
  /* b422c: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* b4230: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* b4234: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* b4238: mov w9, #0x540 */
  ARC_W_W(c, 9, UINT64_C(1344));
  /* b423c: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* b4240: ldr q0, [x19] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 19)), arc_ld64(ARC_X_R(c, 19) + 8));
  /* b4244: orr w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 9)));
  /* b4248: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* b424c: str q0, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* b4250: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b4254: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b4258: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b425c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b4260: ret  */
  return;
L_b4264:;
  /* b4264: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(737896));
  fn1_142488(c);
}

void fn1_b7b70(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038680432));
  /* b7b70: bti c */
  /* bti: no architectural effect here */
  /* b7b74: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* b7b78: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_baad0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038692560));
  /* baad0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* baad4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* baad8: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* baadc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* baae0: ldp x9, x10, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* baae4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* baae8: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* baaec: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* baaf0: add x11, x9, #5 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(5)));
  /* baaf4: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* baaf8: b.ls #0xbab28 */
  if (ARC_COND(c, 9)) goto L_bab28;
  /* baafc: lsl x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* bab00: add x9, x9, #0x3e5 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(997)));
  /* bab04: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* bab08: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* bab0c: csel x1, x10, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* bab10: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bab14: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(764696));
  fn1_142878(c);
  /* bab18: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bab1c: cbz x0, #0xbac0c */
  if ((ARC_X_R(c, 0)) == 0) goto L_bac0c;
  /* bab20: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bab24: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
L_bab28:;
  /* bab28: mov w10, #0x6874 */
  ARC_W_W(c, 10, UINT64_C(26740));
  /* bab2c: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* bab30: mov w9, #0x77 */
  ARC_W_W(c, 9, UINT64_C(119));
  /* bab34: movk w10, #0x6f72, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1869742080)));
  /* bab38: strb w9, [x8, #4] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(4)), ARC_W_R(c, 9));
  /* bab3c: str w10, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* bab40: ldp x10, x11, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* bab44: ldr w8, [x19, #0x20] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* bab48: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* bab4c: add w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* bab50: add x9, x10, #6 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(6)));
  /* bab54: str w8, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 8));
  /* bab58: add x8, x10, #5 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + UINT64_C(5)));
  /* bab5c: cmp x9, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 11));
  /* bab60: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* bab64: b.ls #0xbab90 */
  if (ARC_COND(c, 9)) goto L_bab90;
  /* bab68: lsl x8, x11, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 11)) << ((UINT64_C(1)) & 63)));
  /* bab6c: add x9, x10, #0x3e6 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(998)));
  /* bab70: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* bab74: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* bab78: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bab7c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(764800));
  fn1_142878(c);
  /* bab80: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bab84: cbz x0, #0xbac10 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bac10;
  /* bab88: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bab8c: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_bab90:;
  /* bab90: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* bab94: mov w9, #0x28 */
  ARC_W_W(c, 9, UINT64_C(40));
  /* bab98: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bab9c: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* baba0: add x0, x20, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(16)));
  /* baba4: bl #0xafa48 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(764840));
  fn1_afa48(c);
  /* baba8: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* babac: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* babb0: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* babb4: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* babb8: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* babbc: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* babc0: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* babc4: b.ls #0xbabf0 */
  if (ARC_COND(c, 9)) goto L_babf0;
  /* babc8: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* babcc: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* babd0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* babd4: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* babd8: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* babdc: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(764896));
  fn1_142878(c);
  /* babe0: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* babe4: cbz x0, #0xbac14 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bac14;
  /* babe8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* babec: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_babf0:;
  /* babf0: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* babf4: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* babf8: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* babfc: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bac00: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bac04: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bac08: ret  */
  return;
L_bac0c:;
  /* bac0c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(764944));
  fn1_1427b8(c);
L_bac10:;
  /* bac10: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(764948));
  fn1_1427b8(c);
L_bac14:;
  /* bac14: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(764952));
  fn1_1427b8(c);
}

void fn1_bd8e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038704360));
  /* bd8e8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bd8ec: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bd8f0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bd8f4: bl #0x142920 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(776440));
  fn1_142920(c);
L_bd8f8:;
  /* bd8f8: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bd8fc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bd900: ret  */
  return;
  /* bd904: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(776456));
  fn1_142548(c);
  /* bd908: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(776460));
  fn1_142980(c);
  /* bd90c: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* bd910: b #0xbd8f8 */
  goto L_bd8f8;
  /* bd914: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(776472));
  fn1_a1454(c);
}

void fn1_ce398(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038772632));
  /* ce398: bti c */
  /* bti: no architectural effect here */
  /* ce39c: sub x9, x1, x0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* ce3a0: mov w8, #0x7e */
  ARC_W_W(c, 8, UINT64_C(126));
  /* ce3a4: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* ce3a8: asr x9, x9, #3 */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* ce3ac: clz x9, x9 */
  ARC_X_W(c, 9, arc_clz64(ARC_X_R(c, 9)));
  /* ce3b0: sub x2, x8, x9, lsl #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) - ((uint64_t)(ARC_X_R(c, 9)) << 1)));
  /* ce3b4: b #0xce3b8 */
  fn1_ce3b8(c); return;
}

void fn1_d75f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038810104));
  /* d75f8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d75fc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d7600: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d7604: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* d7608: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* d760c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d7610: ldr x8, [x8, #0x9f8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2552))));
  /* d7614: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* d7618: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* d761c: nop  */
  /* nop: no architectural effect here */
  /* d7620: adr x0, #0x156bb8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1403832)));
  /* d7624: bl #0x144ac8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(882216));
  fn1_144ac8(c);
  /* d7628: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* d762c: cbz x8, #0xd7674 */
  if ((ARC_X_R(c, 8)) == 0) goto L_d7674;
  /* d7630: mov x10, #0x2b2b */
  ARC_X_W(c, 10, UINT64_C(11051));
  /* d7634: ldr x9, [x8, #0x60] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(96))));
  /* d7638: movk x10, #0x4743, lsl #16 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1195573248)));
  /* d763c: movk x10, #0x4c4e, lsl #32 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446462603027808255)) | UINT64_C(83897891160064)));
  /* d7640: movk x10, #0x43, lsl #48 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(281474976710655)) | UINT64_C(18858823439613952)));
  /* d7644: cmp x10, x9, lsr #8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ((uint64_t)(ARC_X_R(c, 9)) >> 8));
  /* d7648: b.ne #0xd7674 */
  if (ARC_COND(c, 1)) goto L_d7674;
  /* d764c: and x9, x9, #0xff */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(255)));
  /* d7650: cmp x9, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(1));
  /* d7654: b.ne #0xd7660 */
  if (ARC_COND(c, 1)) goto L_d7660;
  /* d7658: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* d765c: sub x8, x8, #0x80 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(128)));
L_d7660:;
  /* d7660: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* d7664: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d7668: add x20, x8, #0x80 */
  ARC_X_W(c, 20, (ARC_X_R(c, 8) + UINT64_C(128)));
  /* d766c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(882288));
  fn1_bd950(c);
  /* d7670: b #0xd7678 */
  goto L_d7678;
L_d7674:;
  /* d7674: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
L_d7678:;
  /* d7678: str x20, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 20));
  /* d767c: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d7680: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d7684: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d7688: ret  */
  return;
}

void fn1_db4dc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038826204));
  /* db4dc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* db4e0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* db4e4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* db4e8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* db4ec: add x1, x0, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* db4f0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* db4f4: ldar x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* db4f8: cbz x8, #0xdb518 */
  if ((ARC_X_R(c, 8)) == 0) goto L_db518;
  /* db4fc: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* db500: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(898308));
  fn1_bd950(c);
  /* db504: cbz x0, #0xdb518 */
  if ((ARC_X_R(c, 0)) == 0) goto L_db518;
  /* db508: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* db50c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* db510: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* db514: ret  */
  return;
L_db518:;
  /* db518: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* db51c: ldr x16, [x8, #0x20] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* db520: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* db524: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* db528: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* db52c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* db530: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_df358(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038842200));
  /* df358: bti c */
  /* bti: no architectural effect here */
  /* df35c: mov w11, #0xe0ff */
  ARC_W_W(c, 11, UINT64_C(57599));
  /* df360: lsr x8, x2, #0x20 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 2)) >> ((UINT64_C(32)) & 63)));
  /* df364: mov x9, x1 */
  ARC_X_W(c, 9, ARC_X_R(c, 1));
  /* df368: movk w11, #0x5f5, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(99942400)));
  /* df36c: cmp w2, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 2), ARC_W_R(c, 11));
  /* df370: b.ls #0xdf37c */
  if (ARC_COND(c, 9)) goto L_df37c;
  /* df374: mov w10, #9 */
  ARC_W_W(c, 10, UINT64_C(9));
  /* df378: b #0xdf400 */
  goto L_df400;
L_df37c:;
  /* df37c: mov w10, #0x967f */
  ARC_W_W(c, 10, UINT64_C(38527));
  /* df380: movk w10, #0x98, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(9961472)));
  /* df384: cmp w2, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 2), ARC_W_R(c, 10));
  /* df388: b.ls #0xdf394 */
  if (ARC_COND(c, 9)) goto L_df394;
  /* df38c: mov w10, #8 */
  ARC_W_W(c, 10, UINT64_C(8));
  /* df390: b #0xdf400 */
  goto L_df400;
L_df394:;
  /* df394: mov w10, #0x423f */
  ARC_W_W(c, 10, UINT64_C(16959));
  /* df398: movk w10, #0xf, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(983040)));
  /* df39c: cmp w2, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 2), ARC_W_R(c, 10));
  /* df3a0: b.ls #0xdf3ac */
  if (ARC_COND(c, 9)) goto L_df3ac;
  /* df3a4: mov w10, #7 */
  ARC_W_W(c, 10, UINT64_C(7));
  /* df3a8: b #0xdf400 */
  goto L_df400;
L_df3ac:;
  /* df3ac: lsr w10, w2, #5 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 2)) >> ((UINT64_C(5)) & 31)));
  /* df3b0: cmp w10, #0xc34 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(3124));
  /* df3b4: b.ls #0xdf3c0 */
  if (ARC_COND(c, 9)) goto L_df3c0;
  /* df3b8: mov w10, #6 */
  ARC_W_W(c, 10, UINT64_C(6));
  /* df3bc: b #0xdf400 */
  goto L_df400;
L_df3c0:;
  /* df3c0: lsr w10, w2, #4 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 2)) >> ((UINT64_C(4)) & 31)));
  /* df3c4: cmp w10, #0x270 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(624));
  /* df3c8: b.ls #0xdf3d4 */
  if (ARC_COND(c, 9)) goto L_df3d4;
  /* df3cc: mov w10, #5 */
  ARC_W_W(c, 10, UINT64_C(5));
  /* df3d0: b #0xdf400 */
  goto L_df400;
L_df3d4:;
  /* df3d4: cmp w2, #0x3e7 */
  (void)arc_sub32(c, ARC_W_R(c, 2), UINT64_C(999));
  /* df3d8: b.ls #0xdf3e4 */
  if (ARC_COND(c, 9)) goto L_df3e4;
  /* df3dc: mov w10, #4 */
  ARC_W_W(c, 10, UINT64_C(4));
  /* df3e0: b #0xdf400 */
  goto L_df400;
L_df3e4:;
  /* df3e4: cmp w2, #0x63 */
  (void)arc_sub32(c, ARC_W_R(c, 2), UINT64_C(99));
  /* df3e8: b.ls #0xdf3f4 */
  if (ARC_COND(c, 9)) goto L_df3f4;
  /* df3ec: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* df3f0: b #0xdf400 */
  goto L_df400;
L_df3f4:;
  /* df3f4: cmp w2, #9 */
  (void)arc_sub32(c, ARC_W_R(c, 2), UINT64_C(9));
  /* df3f8: mov w10, #1 */
  ARC_W_W(c, 10, UINT64_C(1));
  /* df3fc: cinc w10, w10, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) + 1 : (ARC_W_R(c, 10))));
L_df400:;
  /* df400: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* df404: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* df408: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* df40c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* df410: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* df414: cmp w3, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 3), UINT64_C(3));
  /* df418: add w19, w10, w8 */
  ARC_W_W(c, 19, (ARC_W_R(c, 10) + ARC_W_R(c, 8)));
  /* df41c: b.eq #0xdf478 */
  if (ARC_COND(c, 0)) goto L_df478;
  /* df420: cmp w3, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 3), UINT64_C(2));
  /* df424: b.eq #0xdf454 */
  if (ARC_COND(c, 0)) goto L_df454;
  /* df428: cbnz w3, #0xdf484 */
  if ((ARC_W_R(c, 3)) != 0) goto L_df484;
  /* df42c: mov w12, #-3 */
  ARC_W_W(c, 12, UINT64_C(18446744073709551613));
  /* df430: cmp w10, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(1));
  /* df434: mov w14, #4 */
  ARC_W_W(c, 14, UINT64_C(4));
  /* df438: sub w13, w12, w10 */
  ARC_W_W(c, 13, (ARC_W_R(c, 12) - ARC_W_R(c, 10)));
  /* df43c: csel w13, w12, w13, eq */
  ARC_W_W(c, 13, (ARC_COND(c, 0) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 13)));
  /* df440: cinc w12, w14, ne */
  ARC_W_W(c, 12, (ARC_COND(c, 1) ? (ARC_W_R(c, 14)) + 1 : (ARC_W_R(c, 14))));
  /* df444: cmp w13, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 8));
  /* df448: b.gt #0xdf484 */
  if (ARC_COND(c, 12)) goto L_df484;
  /* df44c: cmp w12, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 8));
  /* df450: b.lt #0xdf484 */
  if (ARC_COND(c, 11)) goto L_df484;
L_df454:;
  /* df454: tbnz x2, #0x3f, #0xdf518 */
  if (((ARC_X_R(c, 2)) >> 63 & 1) != 0) goto L_df518;
  /* df458: cmp w2, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 2), UINT64_C(1));
  /* df45c: mov w12, w19 */
  ARC_W_W(c, 12, ARC_W_R(c, 19));
  /* df460: b.ne #0xdf5f8 */
  if (ARC_COND(c, 1)) goto L_df5f8;
  /* df464: nop  */
  /* nop: no architectural effect here */
  /* df468: adr x12, #0x74ef0 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(478960)));
  /* df46c: ldrb w12, [x12, x8] */
  ARC_W_W(c, 12, arc_ld8((ARC_X_R(c, 12) + ARC_X_R(c, 8))));
  /* df470: sub w12, w19, w12 */
  ARC_W_W(c, 12, (ARC_W_R(c, 19) - ARC_W_R(c, 12)));
  /* df474: b #0xdf5f8 */
  goto L_df5f8;
L_df478:;
  /* df478: add w12, w19, #3 */
  ARC_W_W(c, 12, (ARC_W_R(c, 19) + UINT64_C(3)));
  /* df47c: cmp w12, #9 */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(9));
  /* df480: b.ls #0xdf454 */
  if (ARC_COND(c, 9)) goto L_df454;
L_df484:;
  /* df484: cmp w10, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(1));
  /* df488: sub x12, x9, x0 */
  ARC_X_W(c, 12, (ARC_X_R(c, 9) - ARC_X_R(c, 0)));
  /* df48c: cinc w8, w10, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) + 1 : (ARC_W_R(c, 10))));
  /* df490: add w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(4)));
  /* df494: cmp x12, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 8));
  /* df498: b.lt #0xdf608 */
  if (ARC_COND(c, 11)) goto L_df608;
  /* df49c: lsr w9, w2, #4 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 2)) >> ((UINT64_C(4)) & 31)));
  /* df4a0: add x12, x0, w10, uxtw */
  ARC_X_W(c, 12, (ARC_X_R(c, 0) + ((uint64_t)(uint32_t)(ARC_W_R(c, 10)))));
  /* df4a4: cmp w9, #0x271 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(625));
  /* df4a8: nop  */
  /* nop: no architectural effect here */
  /* df4ac: adr x9, #0x58470 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(361584)));
  /* df4b0: b.lo #0xdf528 */
  if (ARC_COND(c, 3)) goto L_df528;
  /* df4b4: mov w14, #0x1759 */
  ARC_W_W(c, 14, UINT64_C(5977));
  /* df4b8: mov w16, #0x851f */
  ARC_W_W(c, 16, UINT64_C(34079));
  /* df4bc: mov w13, wzr */
  ARC_W_W(c, 13, ARC_W_R(c, 31));
  /* df4c0: movk w14, #0xd1b7, lsl #16 */
  ARC_W_W(c, 14, ((ARC_W_R(c, 14) & UINT64_C(18446744069414649855)) | UINT64_C(3518431232)));
  /* df4c4: mov w15, #-0x2710 */
  ARC_W_W(c, 15, UINT64_C(18446744073709541616));
  /* df4c8: movk w16, #0x51eb, lsl #16 */
  ARC_W_W(c, 16, ((ARC_W_R(c, 16) & UINT64_C(18446744069414649855)) | UINT64_C(1374355456)));
  /* df4cc: mov w17, #0x64 */
  ARC_W_W(c, 17, UINT64_C(100));
L_df4d0:;
  /* df4d0: mov w1, w2 */
  ARC_W_W(c, 1, ARC_W_R(c, 2));
  /* df4d4: umull x2, w2, w14 */
  ARC_X_W(c, 2, (((uint64_t)(uint32_t)(ARC_W_R(c, 2))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 14)))));
  /* df4d8: sub x5, x12, w13, uxtw */
  ARC_X_W(c, 5, (ARC_X_R(c, 12) - ((uint64_t)(uint32_t)(ARC_W_R(c, 13)))));
  /* df4dc: cmp w1, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 1), ARC_W_R(c, 11));
  /* df4e0: add w13, w13, #4 */
  ARC_W_W(c, 13, (ARC_W_R(c, 13) + UINT64_C(4)));
  /* df4e4: lsr x2, x2, #0x2d */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 2)) >> ((UINT64_C(45)) & 63)));
  /* df4e8: madd w3, w2, w15, w1 */
  ARC_W_W(c, 3, ((uint32_t)(ARC_W_R(c, 1)) + ((uint32_t)(ARC_W_R(c, 2)) * (uint32_t)(ARC_W_R(c, 15)))));
  /* df4ec: umull x4, w3, w16 */
  ARC_X_W(c, 4, (((uint64_t)(uint32_t)(ARC_W_R(c, 3))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 16)))));
  /* df4f0: lsr x4, x4, #0x25 */
  ARC_X_W(c, 4, ((uint64_t)(ARC_X_R(c, 4)) >> ((UINT64_C(37)) & 63)));
  /* df4f4: msub w3, w4, w17, w3 */
  ARC_W_W(c, 3, ((uint32_t)(ARC_W_R(c, 3)) - ((uint32_t)(ARC_W_R(c, 4)) * (uint32_t)(ARC_W_R(c, 17)))));
  /* df4f8: ldrh w3, [x9, w3, uxtw #1] */
  ARC_W_W(c, 3, arc_ld16((ARC_X_R(c, 9) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 3)))) << 1))));
  /* df4fc: sturh w3, [x5, #-1] */
  arc_st16((ARC_X_R(c, 5) + INT64_C(-1)), ARC_W_R(c, 3));
  /* df500: ldrh w3, [x9, x4, lsl #1] */
  ARC_W_W(c, 3, arc_ld16((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 4)) << 1))));
  /* df504: sturh w3, [x5, #-3] */
  arc_st16((ARC_X_R(c, 5) + INT64_C(-3)), ARC_W_R(c, 3));
  /* df508: b.hi #0xdf4d0 */
  if (ARC_COND(c, 8)) goto L_df4d0;
  /* df50c: cmp w2, #0x64 */
  (void)arc_sub32(c, ARC_W_R(c, 2), UINT64_C(100));
  /* df510: b.hs #0xdf534 */
  if (ARC_COND(c, 2)) goto L_df534;
  /* df514: b #0xdf560 */
  goto L_df560;
L_df518:;
  /* df518: cmp w19, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 19), UINT64_C(1));
  /* df51c: b.lt #0xdf5f0 */
  if (ARC_COND(c, 11)) goto L_df5f0;
  /* df520: add w12, w10, #1 */
  ARC_W_W(c, 12, (ARC_W_R(c, 10) + UINT64_C(1)));
  /* df524: b #0xdf5f8 */
  goto L_df5f8;
L_df528:;
  /* df528: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* df52c: cmp w2, #0x64 */
  (void)arc_sub32(c, ARC_W_R(c, 2), UINT64_C(100));
  /* df530: b.lo #0xdf560 */
  if (ARC_COND(c, 3)) goto L_df560;
L_df534:;
  /* df534: ubfx w11, w2, #2, #0xe */
  ARC_W_W(c, 11, (((uint32_t)(ARC_W_R(c, 2)) >> 2) & UINT64_C(16383)));
  /* df538: mov w14, #0x147b */
  ARC_W_W(c, 14, UINT64_C(5243));
  /* df53c: mvn x13, x13 */
  ARC_X_W(c, 13, (~(uint64_t)(ARC_X_R(c, 13))));
  /* df540: mul w11, w11, w14 */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 11)) * (uint32_t)(ARC_W_R(c, 14))));
  /* df544: mov w14, #0x64 */
  ARC_W_W(c, 14, UINT64_C(100));
  /* df548: lsr w11, w11, #0x11 */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 11)) >> ((UINT64_C(17)) & 31)));
  /* df54c: msub w14, w11, w14, w2 */
  ARC_W_W(c, 14, ((uint32_t)(ARC_W_R(c, 2)) - ((uint32_t)(ARC_W_R(c, 11)) * (uint32_t)(ARC_W_R(c, 14)))));
  /* df550: mov w2, w11 */
  ARC_W_W(c, 2, ARC_W_R(c, 11));
  /* df554: and x14, x14, #0xffff */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) & UINT64_C(65535)));
  /* df558: ldrh w14, [x9, x14, lsl #1] */
  ARC_W_W(c, 14, arc_ld16((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 14)) << 1))));
  /* df55c: strh w14, [x13, x12] */
  arc_st16((ARC_X_R(c, 13) + ARC_X_R(c, 12)), ARC_W_R(c, 14));
L_df560:;
  /* df560: cmp w2, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 2), UINT64_C(10));
  /* df564: b.lo #0xdf584 */
  if (ARC_COND(c, 3)) goto L_df584;
  /* df568: ubfiz x11, x2, #1, #0x20 */
  ARC_X_W(c, 11, ((uint64_t)((((uint64_t)(ARC_X_R(c, 2))) & UINT64_C(4294967295))) << 1));
  /* df56c: mov w12, w11 */
  ARC_W_W(c, 12, ARC_W_R(c, 11));
  /* df570: add x12, x9, x12 */
  ARC_X_W(c, 12, (ARC_X_R(c, 9) + ARC_X_R(c, 12)));
  /* df574: ldrb w12, [x12, #1] */
  ARC_W_W(c, 12, arc_ld8((ARC_X_R(c, 12) + INT64_C(1))));
  /* df578: strb w12, [x0, #2] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 12));
  /* df57c: ldrb w11, [x9, x11] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 9) + ARC_X_R(c, 11))));
  /* df580: b #0xdf588 */
  goto L_df588;
L_df584:;
  /* df584: orr w11, w2, #0x30 */
  ARC_W_W(c, 11, (ARC_W_R(c, 2) | UINT64_C(48)));
L_df588:;
  /* df588: cmp w10, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(2));
  /* df58c: sub w12, w19, #1 */
  ARC_W_W(c, 12, (ARC_W_R(c, 19) - UINT64_C(1)));
  /* df590: mov w13, #1 */
  ARC_W_W(c, 13, UINT64_C(1));
  /* df594: strb w11, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 11));
  /* df598: b.lo #0xdf5ac */
  if (ARC_COND(c, 3)) goto L_df5ac;
  /* df59c: mov w11, #0x2e */
  ARC_W_W(c, 11, UINT64_C(46));
  /* df5a0: add w14, w10, #1 */
  ARC_W_W(c, 14, (ARC_W_R(c, 10) + UINT64_C(1)));
  /* df5a4: strb w11, [x0, #1] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 11));
  /* df5a8: b #0xdf5b0 */
  goto L_df5b0;
L_df5ac:;
  /* df5ac: mov w14, #1 */
  ARC_W_W(c, 14, UINT64_C(1));
L_df5b0:;
  /* df5b0: add x14, x0, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 0) + ARC_X_R(c, 14)));
  /* df5b4: mov w15, #0x65 */
  ARC_W_W(c, 15, UINT64_C(101));
  /* df5b8: cmp w19, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 19), UINT64_C(1));
  /* df5bc: mov w16, #0x2b */
  ARC_W_W(c, 16, UINT64_C(43));
  /* df5c0: mov w17, #0x2d */
  ARC_W_W(c, 17, UINT64_C(45));
  /* df5c4: strb w15, [x14] */
  arc_st8(ARC_X_R(c, 14), ARC_W_R(c, 15));
  /* df5c8: sub w13, w13, w19 */
  ARC_W_W(c, 13, (ARC_W_R(c, 13) - ARC_W_R(c, 19)));
  /* df5cc: csel w15, w17, w16, lt */
  ARC_W_W(c, 15, (ARC_COND(c, 11) ? (ARC_W_R(c, 17)) : ARC_W_R(c, 16)));
  /* df5d0: mov x11, xzr */
  ARC_X_W(c, 11, ARC_X_R(c, 31));
  /* df5d4: csel w12, w13, w12, lt */
  ARC_W_W(c, 12, (ARC_COND(c, 11) ? (ARC_W_R(c, 13)) : ARC_W_R(c, 12)));
  /* df5d8: strb w15, [x14, #1] */
  arc_st8((ARC_X_R(c, 14) + INT64_C(1)), ARC_W_R(c, 15));
  /* df5dc: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
  /* df5e0: ldrh w9, [x9, w12, uxtw #1] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 9) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 12)))) << 1))));
  /* df5e4: strh w9, [x14, #2] */
  arc_st16((ARC_X_R(c, 14) + INT64_C(2)), ARC_W_R(c, 9));
  /* df5e8: add x9, x0, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* df5ec: b #0xdf79c */
  goto L_df79c;
L_df5f0:;
  /* df5f0: mov w12, #2 */
  ARC_W_W(c, 12, UINT64_C(2));
  /* df5f4: sub w12, w12, w8 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) - ARC_W_R(c, 8)));
L_df5f8:;
  /* df5f8: sub x13, x9, x0 */
  ARC_X_W(c, 13, (ARC_X_R(c, 9) - ARC_X_R(c, 0)));
  /* df5fc: mov w21, w12 */
  ARC_W_W(c, 21, ARC_W_R(c, 12));
  /* df600: cmp x13, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 21));
  /* df604: b.ge #0xdf614 */
  if (ARC_COND(c, 10)) goto L_df614;
L_df608:;
  /* df608: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
  /* df60c: mov w11, #0x4b */
  ARC_W_W(c, 11, UINT64_C(75));
  /* df610: b #0xdf79c */
  goto L_df79c;
L_df614:;
  /* df614: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* df618: mov x12, x21 */
  ARC_X_W(c, 12, ARC_X_R(c, 21));
  /* df61c: b.lt #0xdf66c */
  if (ARC_COND(c, 11)) goto L_df66c;
  /* df620: cmp x8, #0xa */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(10));
  /* df624: b.hi #0xdf648 */
  if (ARC_COND(c, 8)) goto L_df648;
  /* df628: rbit w12, w2 */
  ARC_W_W(c, 12, arc_rbit32(ARC_W_R(c, 2)));
  /* df62c: nop  */
  /* nop: no architectural effect here */
  /* df630: adr x13, #0x74f18 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(479000)));
  /* df634: ldr w13, [x13, x8, lsl #2] */
  ARC_W_W(c, 13, arc_ld32((ARC_X_R(c, 13) + ((uint64_t)(ARC_X_R(c, 8)) << 2))));
  /* df638: clz w12, w12 */
  ARC_W_W(c, 12, arc_clz32(ARC_W_R(c, 12)));
  /* df63c: lsr w12, w2, w12 */
  ARC_W_W(c, 12, ((uint32_t)(ARC_W_R(c, 2)) >> ((ARC_W_R(c, 12)) & 31)));
  /* df640: cmp w12, w13 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 13));
  /* df644: b.ls #0xdf668 */
  if (ARC_COND(c, 9)) goto L_df668;
L_df648:;
  /* df648: sub w3, w5, #0x96 */
  ARC_W_W(c, 3, (ARC_W_R(c, 5) - UINT64_C(150)));
  /* df64c: orr w2, w4, #0x800000 */
  ARC_W_W(c, 2, (ARC_W_R(c, 4) | UINT64_C(8388608)));
  /* df650: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* df654: bl #0xde9ec */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(915032));
  fn1_de9ec(c);
  /* df658: mov x9, x0 */
  ARC_X_W(c, 9, ARC_X_R(c, 0));
  /* df65c: and x10, x1, #0xffffffff00000000 */
  ARC_X_W(c, 10, (ARC_X_R(c, 1) & UINT64_C(18446744069414584320)));
  /* df660: mov w11, w1 */
  ARC_W_W(c, 11, ARC_W_R(c, 1));
  /* df664: b #0xdf79c */
  goto L_df79c;
L_df668:;
  /* df668: mov w12, w10 */
  ARC_W_W(c, 12, ARC_W_R(c, 10));
L_df66c:;
  /* df66c: lsr w9, w2, #4 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 2)) >> ((UINT64_C(4)) & 31)));
  /* df670: cmp w9, #0x271 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(625));
  /* df674: add x9, x0, x12 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + ARC_X_R(c, 12)));
  /* df678: b.lo #0xdf754 */
  if (ARC_COND(c, 3)) goto L_df754;
  /* df67c: mov w13, #0x1759 */
  ARC_W_W(c, 13, UINT64_C(5977));
  /* df680: mov w15, #0x851f */
  ARC_W_W(c, 15, UINT64_C(34079));
  /* df684: mov w14, #-0x2710 */
  ARC_W_W(c, 14, UINT64_C(18446744073709541616));
  /* df688: movk w13, #0xd1b7, lsl #16 */
  ARC_W_W(c, 13, ((ARC_W_R(c, 13) & UINT64_C(18446744069414649855)) | UINT64_C(3518431232)));
  /* df68c: movk w15, #0x51eb, lsl #16 */
  ARC_W_W(c, 15, ((ARC_W_R(c, 15) & UINT64_C(18446744069414649855)) | UINT64_C(1374355456)));
  /* df690: mov w16, #0x64 */
  ARC_W_W(c, 16, UINT64_C(100));
  /* df694: nop  */
  /* nop: no architectural effect here */
  /* df698: adr x17, #0x58470 */
  ARC_X_W(c, 17, (arc_image_bases[1] + UINT64_C(361584)));
L_df69c:;
  /* df69c: umull x12, w2, w13 */
  ARC_X_W(c, 12, (((uint64_t)(uint32_t)(ARC_W_R(c, 2))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 13)))));
  /* df6a0: cmp w2, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 2), ARC_W_R(c, 11));
  /* df6a4: lsr x12, x12, #0x2d */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 12)) >> ((UINT64_C(45)) & 63)));
  /* df6a8: madd w1, w12, w14, w2 */
  ARC_W_W(c, 1, ((uint32_t)(ARC_W_R(c, 2)) + ((uint32_t)(ARC_W_R(c, 12)) * (uint32_t)(ARC_W_R(c, 14)))));
  /* df6ac: mov w2, w12 */
  ARC_W_W(c, 2, ARC_W_R(c, 12));
  /* df6b0: umull x3, w1, w15 */
  ARC_X_W(c, 3, (((uint64_t)(uint32_t)(ARC_W_R(c, 1))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 15)))));
  /* df6b4: lsr x3, x3, #0x25 */
  ARC_X_W(c, 3, ((uint64_t)(ARC_X_R(c, 3)) >> ((UINT64_C(37)) & 63)));
  /* df6b8: msub w1, w3, w16, w1 */
  ARC_W_W(c, 1, ((uint32_t)(ARC_W_R(c, 1)) - ((uint32_t)(ARC_W_R(c, 3)) * (uint32_t)(ARC_W_R(c, 16)))));
  /* df6bc: ldrh w3, [x17, x3, lsl #1] */
  ARC_W_W(c, 3, arc_ld16((ARC_X_R(c, 17) + ((uint64_t)(ARC_X_R(c, 3)) << 1))));
  /* df6c0: ldrh w1, [x17, w1, uxtw #1] */
  ARC_W_W(c, 1, arc_ld16((ARC_X_R(c, 17) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 1)))) << 1))));
  /* df6c4: strh w3, [x9, #-4]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(-4));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(-4));
    arc_st16(_a, ARC_W_R(c, 3));
  }
  /* df6c8: strh w1, [x9, #2] */
  arc_st16((ARC_X_R(c, 9) + INT64_C(2)), ARC_W_R(c, 1));
  /* df6cc: b.hi #0xdf69c */
  if (ARC_COND(c, 8)) goto L_df69c;
  /* df6d0: cmp w12, #0x64 */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(100));
  /* df6d4: b.lo #0xdf708 */
  if (ARC_COND(c, 3)) goto L_df708;
L_df6d8:;
  /* df6d8: ubfx w11, w12, #2, #0xe */
  ARC_W_W(c, 11, (((uint32_t)(ARC_W_R(c, 12)) >> 2) & UINT64_C(16383)));
  /* df6dc: mov w13, #0x147b */
  ARC_W_W(c, 13, UINT64_C(5243));
  /* df6e0: mul w11, w11, w13 */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 11)) * (uint32_t)(ARC_W_R(c, 13))));
  /* df6e4: mov w13, #0x64 */
  ARC_W_W(c, 13, UINT64_C(100));
  /* df6e8: lsr w11, w11, #0x11 */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 11)) >> ((UINT64_C(17)) & 31)));
  /* df6ec: msub w12, w11, w13, w12 */
  ARC_W_W(c, 12, ((uint32_t)(ARC_W_R(c, 12)) - ((uint32_t)(ARC_W_R(c, 11)) * (uint32_t)(ARC_W_R(c, 13)))));
  /* df6f0: nop  */
  /* nop: no architectural effect here */
  /* df6f4: adr x13, #0x58470 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(361584)));
  /* df6f8: and x12, x12, #0xffff */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) & UINT64_C(65535)));
  /* df6fc: ldrh w12, [x13, x12, lsl #1] */
  ARC_W_W(c, 12, arc_ld16((ARC_X_R(c, 13) + ((uint64_t)(ARC_X_R(c, 12)) << 1))));
  /* df700: strh w12, [x9, #-2]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(-2));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(-2));
    arc_st16(_a, ARC_W_R(c, 12));
  }
  /* df704: mov w12, w11 */
  ARC_W_W(c, 12, ARC_W_R(c, 11));
L_df708:;
  /* df708: cmp w12, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(10));
  /* df70c: b.lo #0xdf764 */
  if (ARC_COND(c, 3)) goto L_df764;
  /* df710: nop  */
  /* nop: no architectural effect here */
  /* df714: adr x11, #0x58470 */
  ARC_X_W(c, 11, (arc_image_bases[1] + UINT64_C(361584)));
  /* df718: ldrh w11, [x11, w12, uxtw #1] */
  ARC_W_W(c, 11, arc_ld16((ARC_X_R(c, 11) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 12)))) << 1))));
  /* df71c: sturh w11, [x9, #-2] */
  arc_st16((ARC_X_R(c, 9) + INT64_C(-2)), ARC_W_R(c, 11));
  /* df720: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* df724: b.ge #0xdf774 */
  if (ARC_COND(c, 10)) goto L_df774;
L_df728:;
  /* df728: cbz x8, #0xdf790 */
  if ((ARC_X_R(c, 8)) == 0) goto L_df790;
  /* df72c: cmp w19, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 19), UINT64_C(1));
  /* df730: b.lt #0xdf7b8 */
  if (ARC_COND(c, 11)) goto L_df7b8;
  /* df734: add x1, x0, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 0) + UINT64_C(1)));
  /* df738: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* df73c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* df740: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(915268));
  fn1_1449f0(c);
  /* df744: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* df748: mov w8, #0x2e */
  ARC_W_W(c, 8, UINT64_C(46));
  /* df74c: strb w8, [x20, x19] */
  arc_st8((ARC_X_R(c, 20) + ARC_X_R(c, 19)), ARC_W_R(c, 8));
  /* df750: b #0xdf790 */
  goto L_df790;
L_df754:;
  /* df754: mov w12, w2 */
  ARC_W_W(c, 12, ARC_W_R(c, 2));
  /* df758: cmp w12, #0x64 */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(100));
  /* df75c: b.hs #0xdf6d8 */
  if (ARC_COND(c, 2)) goto L_df6d8;
  /* df760: b #0xdf708 */
  goto L_df708;
L_df764:;
  /* df764: orr w11, w12, #0x30 */
  ARC_W_W(c, 11, (ARC_W_R(c, 12) | UINT64_C(48)));
  /* df768: sturb w11, [x9, #-1] */
  arc_st8((ARC_X_R(c, 9) + INT64_C(-1)), ARC_W_R(c, 11));
  /* df76c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* df770: b.lt #0xdf728 */
  if (ARC_COND(c, 11)) goto L_df728;
L_df774:;
  /* df774: add x9, x0, w10, uxtw */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + ((uint64_t)(uint32_t)(ARC_W_R(c, 10)))));
  /* df778: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* df77c: mov w1, #0x30 */
  ARC_W_W(c, 1, UINT64_C(48));
  /* df780: mov x2, x8 */
  ARC_X_W(c, 2, ARC_X_R(c, 8));
  /* df784: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
L_df788:;
  /* df788: bl #0x144a20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(915340));
  fn1_144a20(c);
  /* df78c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
L_df790:;
  /* df790: mov x11, xzr */
  ARC_X_W(c, 11, ARC_X_R(c, 31));
  /* df794: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
  /* df798: add x9, x0, x21 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + ARC_X_R(c, 21)));
L_df79c:;
  /* df79c: orr x1, x10, x11 */
  ARC_X_W(c, 1, (ARC_X_R(c, 10) | ARC_X_R(c, 11)));
  /* df7a0: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
  /* df7a4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* df7a8: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* df7ac: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* df7b0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* df7b4: ret  */
  return;
L_df7b8:;
  /* df7b8: mov w9, #0x2e30 */
  ARC_W_W(c, 9, UINT64_C(11824));
  /* df7bc: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* df7c0: neg w2, w19 */
  ARC_W_W(c, 2, ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 19))));
  /* df7c4: strh w9, [x8], #2 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(2));
    arc_st16(_a, ARC_W_R(c, 9));
  }
  /* df7c8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* df7cc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* df7d0: mov w1, #0x30 */
  ARC_W_W(c, 1, UINT64_C(48));
  /* df7d4: b #0xdf788 */
  goto L_df788;
}

void fn1_e2100(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038853888));
  /* e2100: bti c */
  /* bti: no architectural effect here */
  /* e2104: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e2108: ldp x9, x11, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* e210c: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e2110: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e2114: add x8, x0, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(4)));
  /* e2118: csel x8, x8, x11, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 11)));
  /* e211c: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e2120: cmp x9, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 2));
  /* e2124: csel x10, x9, x2, lo */
  ARC_X_W(c, 10, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 2)));
  /* e2128: sub x11, x9, x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) - ARC_X_R(c, 10)));
  /* e212c: add x10, x10, x3 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + ARC_X_R(c, 3)));
  /* e2130: cmp x3, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 3), ARC_X_R(c, 11));
  /* e2134: csel x10, x10, x9, lo */
  ARC_X_W(c, 10, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e2138: add x9, x8, x10, lsl #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 10)) << 2)));
  /* e213c: cbz x3, #0xe21bc */
  if ((ARC_X_R(c, 3)) == 0) goto L_e21bc;
  /* e2140: cbz x10, #0xe21bc */
  if ((ARC_X_R(c, 10)) == 0) goto L_e21bc;
  /* e2144: lsl x10, x3, #2 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 3)) << ((UINT64_C(2)) & 63)));
  /* e2148: ldr w11, [x1], #4 */
  { const uint64_t _a = ARC_X_R(c, 1);
    ARC_X_W(c, 1, ARC_X_R(c, 1) + INT64_C(4));
    ARC_W_W(c, 11, arc_ld32(_a));
  }
  /* e214c: mov x13, x8 */
  ARC_X_W(c, 13, ARC_X_R(c, 8));
  /* e2150: sub x12, x10, #4 */
  ARC_X_W(c, 12, (ARC_X_R(c, 10) - UINT64_C(4)));
  /* e2154: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
L_e2158:;
  /* e2158: add x14, x13, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 13) + UINT64_C(4)));
L_e215c:;
  /* e215c: ldr w15, [x13] */
  ARC_W_W(c, 15, arc_ld32(ARC_X_R(c, 13)));
  /* e2160: cmp w15, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 11));
  /* e2164: b.eq #0xe217c */
  if (ARC_COND(c, 0)) goto L_e217c;
  /* e2168: add x13, x13, #4 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(4)));
  /* e216c: add x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(4)));
  /* e2170: cmp x13, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 9));
  /* e2174: b.ne #0xe215c */
  if (ARC_COND(c, 1)) goto L_e215c;
  /* e2178: b #0xe21c0 */
  goto L_e21c0;
L_e217c:;
  /* e217c: mov x15, x12 */
  ARC_X_W(c, 15, ARC_X_R(c, 12));
  /* e2180: mov x16, x1 */
  ARC_X_W(c, 16, ARC_X_R(c, 1));
L_e2184:;
  /* e2184: cbz x15, #0xe21a8 */
  if ((ARC_X_R(c, 15)) == 0) goto L_e21a8;
  /* e2188: cmp x14, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 9));
  /* e218c: b.eq #0xe21c0 */
  if (ARC_COND(c, 0)) goto L_e21c0;
  /* e2190: ldr w17, [x14], #4 */
  { const uint64_t _a = ARC_X_R(c, 14);
    ARC_X_W(c, 14, ARC_X_R(c, 14) + INT64_C(4));
    ARC_W_W(c, 17, arc_ld32(_a));
  }
  /* e2194: sub x15, x15, #4 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) - UINT64_C(4)));
  /* e2198: ldr w0, [x16], #4 */
  { const uint64_t _a = ARC_X_R(c, 16);
    ARC_X_W(c, 16, ARC_X_R(c, 16) + INT64_C(4));
    ARC_W_W(c, 0, arc_ld32(_a));
  }
  /* e219c: cmp w17, w0 */
  (void)arc_sub32(c, ARC_W_R(c, 17), ARC_W_R(c, 0));
  /* e21a0: b.eq #0xe2184 */
  if (ARC_COND(c, 0)) goto L_e2184;
  /* e21a4: b #0xe21ac */
  goto L_e21ac;
L_e21a8:;
  /* e21a8: mov x10, x13 */
  ARC_X_W(c, 10, ARC_X_R(c, 13));
L_e21ac:;
  /* e21ac: add x13, x13, #4 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(4)));
  /* e21b0: cmp x13, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 9));
  /* e21b4: b.ne #0xe2158 */
  if (ARC_COND(c, 1)) goto L_e2158;
  /* e21b8: b #0xe21c0 */
  goto L_e21c0;
L_e21bc:;
  /* e21bc: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
L_e21c0:;
  /* e21c0: sub x8, x10, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* e21c4: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* e21c8: asr x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* e21cc: ccmp x3, #0, #4, eq */
  if (ARC_COND(c, 0)) { (void)arc_sub64(c, ARC_X_R(c, 3), UINT64_C(0)); }
  else { (c)->nf = 0; (c)->zf = 1;
          (c)->cf = 0; (c)->vf = 0; }
  /* e21d0: csinv x0, x8, xzr, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : (~(uint64_t)(ARC_X_R(c, 31)))));
  /* e21d4: ret  */
  return;
}

void fn1_e4edc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038865628));
  /* e4edc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e4ee0: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* e4ee4: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e4ee8: str x23, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 23));
  /* e4eec: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e4ef0: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e4ef4: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* e4ef8: mov w8, #8 */
  ARC_W_W(c, 8, UINT64_C(8));
  /* e4efc: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* e4f00: add x10, x0, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 0) + UINT64_C(4)));
  /* e4f04: strb w8, [sp] */
  arc_st8((c)->sp, ARC_W_R(c, 8));
  /* e4f08: mov w8, #0x7473 */
  ARC_W_W(c, 8, UINT64_C(29811));
  /* e4f0c: mov w21, w2 */
  ARC_W_W(c, 21, ARC_W_R(c, 2));
  /* e4f10: movk w8, #0x6c6f, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(1819213824)));
  /* e4f14: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e4f18: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* e4f1c: stur w8, [sp, #1] */
  arc_st32(((c)->sp + INT64_C(1)), ARC_W_R(c, 8));
  /* e4f20: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e4f24: strb wzr, [sp, #5] */
  arc_st8(((c)->sp + INT64_C(5)), ARC_W_R(c, 31));
  /* e4f28: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* e4f2c: csel x20, x10, x8, eq */
  ARC_X_W(c, 20, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* e4f30: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(937780));
  fn1_142a58(c);
  /* e4f34: ldr w23, [x0] */
  ARC_W_W(c, 23, arc_ld32(ARC_X_R(c, 0)));
  /* e4f38: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* e4f3c: str wzr, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 31));
  /* e4f40: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* e4f44: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e4f48: mov w2, w21 */
  ARC_W_W(c, 2, ARC_W_R(c, 21));
  /* e4f4c: bl #0x142f20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(937808));
  fn1_142f20(c);
  /* e4f50: ldr w8, [x22] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 22)));
  /* e4f54: str w23, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 23));
  /* e4f58: cmp w8, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(34));
  /* e4f5c: b.eq #0xe4fa4 */
  if (ARC_COND(c, 0)) goto L_e4fa4;
  /* e4f60: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* e4f64: subs x8, x8, x20 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20)));
  /* e4f68: b.eq #0xe4fd0 */
  if (ARC_COND(c, 0)) goto L_e4fd0;
  /* e4f6c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e4f70: cbz x19, #0xe4f7c */
  if ((ARC_X_R(c, 19)) == 0) goto L_e4f7c;
  /* e4f74: asr x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* e4f78: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_e4f7c:;
  /* e4f7c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e4f80: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(937860));
  fn1_142e00(c);
  /* e4f84: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e4f88: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e4f8c: ldr x23, [sp, #0x40] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(64))));
  /* e4f90: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e4f94: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e4f98: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* e4f9c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e4fa0: ret  */
  return;
L_e4fa4:;
  /* e4fa4: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* e4fa8: add x1, x1, #0xa7d */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2685)));
  /* e4fac: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* e4fb0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e4fb4: add x19, sp, #0x18 */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(24)));
  /* e4fb8: bl #0xe7974 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(937916));
  fn1_e7974(c);
  /* e4fbc: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* e4fc0: ldr x9, [sp, #0x28] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(40))));
  /* e4fc4: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e4fc8: csinc x0, x9, x19, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* e4fcc: bl #0xda038 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(937936));
  fn1_da038(c);
L_e4fd0:;
  /* e4fd0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e4fd4: bl #0xe779c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(937944));
  fn1_e779c(c);
  /* e4fd8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e4fdc: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e4fe0: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(937956));
  fn1_142e00(c);
  /* e4fe4: b #0xe4fec */
  goto L_e4fec;
  /* e4fe8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_e4fec:;
  /* e4fec: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e4ff0: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(937972));
  fn1_142e00(c);
  /* e4ff4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e4ff8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(937980));
  fn1_9cc20(c);
}

void fn1_e9030(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038882352));
  /* e9030: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e9034: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e9038: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e903c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e9040: mov x8, #0x2d69 */
  ARC_X_W(c, 8, UINT64_C(11625));
  /* e9044: lsl w9, w0, #3 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 0)) << ((UINT64_C(3)) & 31)));
  /* e9048: lsr x10, x0, #0x20 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(32)) & 63)));
  /* e904c: movk x8, #0xeb38, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(3946315776)));
  /* e9050: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* e9054: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* e9058: movk x8, #0xea08, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(257320080637952)));
  /* e905c: add x9, x9, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(8)));
  /* e9060: movk x8, #0x9ddf, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(11375811183761162240)));
  /* e9064: eor x9, x9, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) ^ ARC_X_R(c, 10)));
  /* e9068: mul x9, x9, x8 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 8))));
  /* e906c: eor x10, x10, x9, lsr #47 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) ^ ((uint64_t)(ARC_X_R(c, 9)) >> 47)));
  /* e9070: eor x9, x10, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) ^ ARC_X_R(c, 9)));
  /* e9074: mul x8, x9, x8 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 8))));
  /* e9078: lsr x9, x8, #0x2f */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(47)) & 63)));
  /* e907c: eor w8, w9, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) ^ ARC_W_R(c, 8)));
  /* e9080: mov w9, #0x69 */
  ARC_W_W(c, 9, UINT64_C(105));
  /* e9084: mul w8, w8, w9 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 9))));
  /* e9088: nop  */
  /* nop: no architectural effect here */
  /* e908c: adr x9, #0x159240 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1413696)));
  /* e9090: and x8, x8, #0xff */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(255)));
  /* e9094: add x19, x9, x8, lsl #6 */
  ARC_X_W(c, 19, (ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 6)));
  /* e9098: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* e909c: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(954528));
  fn1_a2030(c);
  /* e90a0: nop  */
  /* nop: no architectural effect here */
  /* e90a4: adr x4, #0x753d0 */
  ARC_X_W(c, 4, (arc_image_bases[1] + UINT64_C(480208)));
  /* e90a8: add x1, x19, #4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* e90ac: mov w0, #0x62 */
  ARC_W_W(c, 0, UINT64_C(98));
  /* e90b0: mov w2, #0x80 */
  ARC_W_W(c, 2, UINT64_C(128));
  /* e90b4: mov w3, w20 */
  ARC_W_W(c, 3, ARC_W_R(c, 20));
  /* e90b8: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* e90bc: mov w6, wzr */
  ARC_W_W(c, 6, ARC_W_R(c, 31));
  /* e90c0: bl #0x142500 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(954564));
  fn1_142500(c);
  /* e90c4: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* e90c8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* e90cc: bl #0xe8e50 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(954576));
  fn1_e8e50(c);
  /* e90d0: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e90d4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e90d8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e90dc: ret  */
  return;
  /* e90e0: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(954596));
  fn1_a1454(c);
}

void fn1_eb064(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038890596));
  /* eb064: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eb068: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* eb06c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eb070: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* eb074: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* eb078: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* eb07c: bl #0x1430b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962688));
  fn1_1430b8(c);
  /* eb080: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* eb084: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* eb088: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eb08c: str x19, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 19));
  /* eb090: strb w8, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 8));
  /* eb094: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962712));
  fn1_142518(c);
  /* eb098: cbnz w0, #0xeb108 */
  if ((ARC_W_R(c, 0)) != 0) goto L_eb108;
  /* eb09c: ldp x8, x9, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* eb0a0: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* eb0a4: b.ne #0xeb0bc */
  if (ARC_COND(c, 1)) goto L_eb0bc;
  /* eb0a8: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* eb0ac: b.eq #0xeb114 */
  if (ARC_COND(c, 0)) goto L_eb114;
  /* eb0b0: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* eb0b4: str x8, [x19, #0x58] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(88)), ARC_X_R(c, 8));
  /* eb0b8: b #0xeb0e0 */
  goto L_eb0e0;
L_eb0bc:;
  /* eb0bc: cbz x8, #0xeb0d8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_eb0d8;
L_eb0c0:;
  /* eb0c0: add x0, x19, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* eb0c4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* eb0c8: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962764));
  fn1_142530(c);
  /* eb0cc: cbnz w0, #0xeb0fc */
  if ((ARC_W_R(c, 0)) != 0) goto L_eb0fc;
  /* eb0d0: ldr x8, [x19, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(88))));
  /* eb0d4: cbnz x8, #0xeb0c0 */
  if ((ARC_X_R(c, 8)) != 0) goto L_eb0c0;
L_eb0d8:;
  /* eb0d8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* eb0dc: stp x8, x20, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
L_eb0e0:;
  /* eb0e0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eb0e4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962792));
  fn1_142560(c);
  /* eb0e8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* eb0ec: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eb0f0: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* eb0f4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eb0f8: ret  */
  return;
L_eb0fc:;
  /* eb0fc: nop  */
  /* nop: no architectural effect here */
  /* eb100: adr x1, #0x50514 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(328980)));
  /* eb104: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962824));
  fn1_142a40(c);
L_eb108:;
  /* eb108: nop  */
  /* nop: no architectural effect here */
  /* eb10c: adr x1, #0x50f67 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331623)));
  /* eb110: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962836));
  fn1_142a40(c);
L_eb114:;
  /* eb114: adrp x1, #0x4f000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(323584)));
  /* eb118: add x1, x1, #0xcf1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3313)));
  /* eb11c: mov w0, #0xb */
  ARC_W_W(c, 0, UINT64_C(11));
  /* eb120: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962852));
  fn1_142a40(c);
  /* eb124: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* eb128: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* eb12c: bl #0xeaf08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962864));
  fn1_eaf08(c);
  /* eb130: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eb134: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962872));
  fn1_9cc20(c);
  /* eb138: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962876));
  fn1_a1454(c);
  /* eb13c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962880));
  fn1_a1454(c);
  /* eb140: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962884));
  fn1_a1454(c);
}

void fn1_ed064(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038898788));
  /* ed064: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ed068: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ed06c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* ed070: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ed074: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* ed078: nop  */
  /* nop: no architectural effect here */
  /* ed07c: adr x9, #0x15dc40 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1432640)));
  /* ed080: ldr x8, [x8, #0xaa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2728))));
  /* ed084: ldr x19, [x0, #8] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* ed088: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* ed08c: cmp x19, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* ed090: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* ed094: b.eq #0xed0a8 */
  if (ARC_COND(c, 0)) goto L_ed0a8;
  /* ed098: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* ed09c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ed0a0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(970916));
  fn1_bd950(c);
  /* ed0a4: cbz x0, #0xed0b8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ed0b8;
L_ed0a8:;
  /* ed0a8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* ed0ac: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ed0b0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ed0b4: ret  */
  return;
L_ed0b8:;
  /* ed0b8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ed0bc: ldr x16, [x8, #0x10] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ed0c0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ed0c4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* ed0c8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ed0cc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ed0d0: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_ef814(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038908948));
  /* ef814: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ef818: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ef81c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* ef820: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ef824: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ef828: str xzr, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 31));
  /* ef82c: add x0, x29, #0x1c */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(28)));
  /* ef830: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* ef834: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* ef838: bl #0x1435f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(981052));
  fn1_1435f8(c);
  /* ef83c: ldrb w8, [x29, #0x1c] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(28))));
  /* ef840: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* ef844: b.ne #0xef874 */
  if (ARC_COND(c, 1)) goto L_ef874;
  /* ef848: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ef84c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ef850: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ef854: ldr x0, [x8, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* ef858: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ef85c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ef860: b.eq #0xef87c */
  if (ARC_COND(c, 0)) goto L_ef87c;
  /* ef864: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* ef868: str x9, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 9));
  /* ef86c: ldrb w0, [x8] */
  ARC_W_W(c, 0, arc_ld8(ARC_X_R(c, 8)));
  /* ef870: b #0xef890 */
  goto L_ef890;
L_ef874:;
  /* ef874: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* ef878: b #0xef8cc */
  goto L_ef8cc;
L_ef87c:;
  /* ef87c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* ef880: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* ef884: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(981128));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ef888: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* ef88c: b.eq #0xef8dc */
  if (ARC_COND(c, 0)) goto L_ef8dc;
L_ef890:;
  /* ef890: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* ef894: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
  /* ef898: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
L_ef89c:;
  /* ef89c: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* ef8a0: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* ef8a4: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* ef8a8: ldr x10, [x9, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 9) + INT64_C(40))));
  /* ef8ac: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* ef8b0: ldp w11, w10, [x9, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(32));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* ef8b4: orr w8, w11, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 11) | ARC_W_R(c, 8)));
  /* ef8b8: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* ef8bc: orr w8, w8, w11 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 11)));
  /* ef8c0: tst w8, w10 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 10)));
  /* ef8c4: str w8, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 8));
  /* ef8c8: b.ne #0xef8e4 */
  if (ARC_COND(c, 1)) goto L_ef8e4;
L_ef8cc:;
  /* ef8cc: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* ef8d0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ef8d4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ef8d8: ret  */
  return;
L_ef8dc:;
  /* ef8dc: mov w8, #6 */
  ARC_W_W(c, 8, UINT64_C(6));
  /* ef8e0: b #0xef89c */
  goto L_ef89c;
L_ef8e4:;
  /* ef8e4: nop  */
  /* nop: no architectural effect here */
  /* ef8e8: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* ef8ec: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(981232));
  fn1_ec720(c);
  /* ef8f0: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(981236));
  fn1_142548(c);
  /* ef8f4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ef8f8: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ef8fc: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* ef900: ldr w10, [x9, #0x20] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* ef904: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* ef908: str w10, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 10));
  /* ef90c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ef910: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ef914: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* ef918: tbnz w8, #0, #0xef92c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_ef92c;
  /* ef91c: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(981280));
  fn1_142980(c);
  /* ef920: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
  /* ef924: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* ef928: b #0xef89c */
  goto L_ef89c;
L_ef92c:;
  /* ef92c: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(981296));
  fn1_1429b0(c);
  /* ef930: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ef934: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(981304));
  fn1_142980(c);
  /* ef938: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ef93c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(981312));
  fn1_9cc20(c);
  /* ef940: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(981316));
  fn1_a1454(c);
}

void fn1_f3a88(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038925960));
  /* f3a88: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f3a8c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f3a90: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* f3a94: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f3a98: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f3a9c: nop  */
  /* nop: no architectural effect here */
  /* f3aa0: adr x9, #0x15dc40 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f3aa4: ldr x8, [x8, #0xac8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2760))));
  /* f3aa8: ldr x19, [x0, #8] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* f3aac: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* f3ab0: cmp x19, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* f3ab4: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* f3ab8: b.eq #0xf3acc */
  if (ARC_COND(c, 0)) goto L_f3acc;
  /* f3abc: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* f3ac0: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f3ac4: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(998088));
  fn1_bd950(c);
  /* f3ac8: cbz x0, #0xf3adc */
  if ((ARC_X_R(c, 0)) == 0) goto L_f3adc;
L_f3acc:;
  /* f3acc: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f3ad0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f3ad4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f3ad8: ret  */
  return;
L_f3adc:;
  /* f3adc: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f3ae0: ldr x16, [x8, #0x10] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f3ae4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f3ae8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f3aec: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f3af0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f3af4: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_f6248(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038936136));
  /* f6248: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f624c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f6250: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* f6254: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f6258: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f625c: str xzr, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 31));
  /* f6260: add x0, x29, #0x1c */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(28)));
  /* f6264: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f6268: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* f626c: bl #0x143670 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1008240));
  fn1_143670(c);
  /* f6270: ldrb w8, [x29, #0x1c] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(28))));
  /* f6274: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f6278: b.ne #0xf62a4 */
  if (ARC_COND(c, 1)) goto L_f62a4;
  /* f627c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f6280: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f6284: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f6288: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f628c: ldp x9, x10, [x8, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* f6290: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* f6294: b.eq #0xf62ac */
  if (ARC_COND(c, 0)) goto L_f62ac;
  /* f6298: ldr w0, [x9], #4 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    ARC_W_W(c, 0, arc_ld32(_a));
  }
  /* f629c: str x9, [x8, #0x18] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(24)), ARC_X_R(c, 9));
  /* f62a0: b #0xf62bc */
  goto L_f62bc;
L_f62a4:;
  /* f62a4: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* f62a8: b #0xf6308 */
  goto L_f6308;
L_f62ac:;
  /* f62ac: ldr x9, [x8] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 8)));
  /* f62b0: ldr x9, [x9, #0x50] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(80))));
  /* f62b4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* f62b8: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1008316));
  arc_dispatch(c, ARC_X_R(c, 9));
L_f62bc:;
  /* f62bc: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* f62c0: b.eq #0xf62d4 */
  if (ARC_COND(c, 0)) goto L_f62d4;
  /* f62c4: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* f62c8: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
  /* f62cc: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* f62d0: b #0xf62d8 */
  goto L_f62d8;
L_f62d4:;
  /* f62d4: mov w8, #6 */
  ARC_W_W(c, 8, UINT64_C(6));
L_f62d8:;
  /* f62d8: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* f62dc: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* f62e0: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f62e4: ldr x10, [x9, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 9) + INT64_C(40))));
  /* f62e8: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* f62ec: ldp w11, w10, [x9, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(32));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* f62f0: orr w8, w11, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 11) | ARC_W_R(c, 8)));
  /* f62f4: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* f62f8: orr w8, w8, w11 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 11)));
  /* f62fc: tst w8, w10 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 10)));
  /* f6300: str w8, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 8));
  /* f6304: b.ne #0xf6318 */
  if (ARC_COND(c, 1)) goto L_f6318;
L_f6308:;
  /* f6308: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f630c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f6310: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f6314: ret  */
  return;
L_f6318:;
  /* f6318: nop  */
  /* nop: no architectural effect here */
  /* f631c: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f6320: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1008420));
  fn1_ec720(c);
  /* f6324: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1008424));
  fn1_142548(c);
  /* f6328: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f632c: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f6330: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f6334: ldr w10, [x9, #0x20] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f6338: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* f633c: str w10, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 10));
  /* f6340: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f6344: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f6348: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f634c: tbnz w8, #0, #0xf6360 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_f6360;
  /* f6350: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1008468));
  fn1_142980(c);
  /* f6354: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
  /* f6358: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* f635c: b #0xf62d8 */
  goto L_f62d8;
L_f6360:;
  /* f6360: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1008484));
  fn1_1429b0(c);
  /* f6364: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f6368: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1008492));
  fn1_142980(c);
  /* f636c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f6370: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1008500));
  fn1_9cc20(c);
  /* f6374: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1008504));
  fn1_a1454(c);
}

void fn1_fb404(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038957060));
  /* fb404: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fb408: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fb40c: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fb410: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fb414: ldr x8, [x0, #0x78] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(120))));
  /* fb418: cbz x8, #0xfb434 */
  if ((ARC_X_R(c, 8)) == 0) goto L_fb434;
  /* fb41c: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
L_fb420:;
  /* fb420: bti j */
  /* bti: no architectural effect here */
  /* fb424: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fb428: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fb42c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fb430: ret  */
  return;
L_fb434:;
  /* fb434: and w8, w2, #0xfffffffd */
  ARC_W_W(c, 8, (ARC_W_R(c, 2) & UINT64_C(4294967293)));
  /* fb438: mov w20, w2 */
  ARC_W_W(c, 20, ARC_W_R(c, 2));
  /* fb43c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fb440: sub w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* fb444: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* fb448: cmp w8, #0x7b */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(123));
  /* fb44c: b.hi #0xfb420 */
  if (ARC_COND(c, 8)) goto L_fb420;
  /* fb450: nop  */
  /* nop: no architectural effect here */
  /* fb454: adr x9, #0x75503 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(480515)));
  /* fb458: adr x10, #0xfb420 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(1029152)));
  /* fb45c: ldrb w11, [x9, x8] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 9) + ARC_X_R(c, 8))));
  /* fb460: add x10, x10, x11, lsl #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 11)) << 2)));
  /* fb464: nop  */
  /* nop: no architectural effect here */
  /* fb468: adr x8, #0x50220 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(328224)));
  /* fb46c: br x10 */
  switch (ARC_X_R(c, 10) - arc_image_bases[1]) {
    case UINT64_C(1029232): goto L_fb470;
    case UINT64_C(1029152): goto L_fb420;
    case UINT64_C(1029312): goto L_fb4c0;
    case UINT64_C(1029376): goto L_fb500;
    case UINT64_C(1029264): goto L_fb490;
    case UINT64_C(1029408): goto L_fb520;
    case UINT64_C(1029248): goto L_fb480;
    case UINT64_C(1029468): goto L_fb55c;
    case UINT64_C(1029296): goto L_fb4b0;
    case UINT64_C(1029392): goto L_fb510;
    case UINT64_C(1029424): goto L_fb530;
    case UINT64_C(1029456): goto L_fb550;
    case UINT64_C(1029440): goto L_fb540;
    case UINT64_C(1029280): goto L_fb4a0;
    case UINT64_C(1029328): goto L_fb4d0;
    case UINT64_C(1029360): goto L_fb4f0;
    case UINT64_C(1029344): goto L_fb4e0;
    case UINT64_C(1029464): goto L_fb558;
    case UINT64_C(1029484): goto L_fb56c;
    default: break;
  }
  arc_dispatch(c, ARC_X_R(c, 10)); return;
L_fb470:;
  /* fb470: bti j */
  /* bti: no architectural effect here */
  /* fb474: adrp x8, #0x4f000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(323584)));
  /* fb478: add x8, x8, #0xb3a */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2874)));
  /* fb47c: b #0xfb55c */
  goto L_fb55c;
L_fb480:;
  /* fb480: bti j */
  /* bti: no architectural effect here */
  /* fb484: adrp x8, #0x50000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(327680)));
  /* fb488: add x8, x8, #0x58c */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1420)));
  /* fb48c: b #0xfb55c */
  goto L_fb55c;
L_fb490:;
  /* fb490: bti j */
  /* bti: no architectural effect here */
  /* fb494: adrp x8, #0x50000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(327680)));
  /* fb498: add x8, x8, #0xba2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2978)));
  /* fb49c: b #0xfb55c */
  goto L_fb55c;
L_fb4a0:;
  /* fb4a0: bti j */
  /* bti: no architectural effect here */
  /* fb4a4: adrp x8, #0x50000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(327680)));
  /* fb4a8: add x8, x8, #0x3a9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(937)));
  /* fb4ac: b #0xfb55c */
  goto L_fb55c;
L_fb4b0:;
  /* fb4b0: bti j */
  /* bti: no architectural effect here */
  /* fb4b4: adrp x8, #0x4f000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(323584)));
  /* fb4b8: add x8, x8, #0x744 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1860)));
  /* fb4bc: b #0xfb55c */
  goto L_fb55c;
L_fb4c0:;
  /* fb4c0: bti j */
  /* bti: no architectural effect here */
  /* fb4c4: adrp x8, #0x51000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(331776)));
  /* fb4c8: add x8, x8, #0xecf */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3791)));
  /* fb4cc: b #0xfb55c */
  goto L_fb55c;
L_fb4d0:;
  /* fb4d0: bti j */
  /* bti: no architectural effect here */
  /* fb4d4: adrp x8, #0x50000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(327680)));
  /* fb4d8: add x8, x8, #0x854 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2132)));
  /* fb4dc: b #0xfb55c */
  goto L_fb55c;
L_fb4e0:;
  /* fb4e0: bti j */
  /* bti: no architectural effect here */
  /* fb4e4: adrp x8, #0x51000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(331776)));
  /* fb4e8: add x8, x8, #0x90e */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2318)));
  /* fb4ec: b #0xfb55c */
  goto L_fb55c;
L_fb4f0:;
  /* fb4f0: bti j */
  /* bti: no architectural effect here */
  /* fb4f4: adrp x8, #0x50000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(327680)));
  /* fb4f8: add x8, x8, #0x6dc */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1756)));
  /* fb4fc: b #0xfb55c */
  goto L_fb55c;
L_fb500:;
  /* fb500: bti j */
  /* bti: no architectural effect here */
  /* fb504: adrp x8, #0x4f000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(323584)));
  /* fb508: add x8, x8, #0x741 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1857)));
  /* fb50c: b #0xfb55c */
  goto L_fb55c;
L_fb510:;
  /* fb510: bti j */
  /* bti: no architectural effect here */
  /* fb514: adrp x8, #0x51000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(331776)));
  /* fb518: add x8, x8, #0x90a */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2314)));
  /* fb51c: b #0xfb55c */
  goto L_fb55c;
L_fb520:;
  /* fb520: bti j */
  /* bti: no architectural effect here */
  /* fb524: adrp x8, #0x50000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(327680)));
  /* fb528: add x8, x8, #0x223 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(547)));
  /* fb52c: b #0xfb55c */
  goto L_fb55c;
L_fb530:;
  /* fb530: bti j */
  /* bti: no architectural effect here */
  /* fb534: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* fb538: add x8, x8, #0x3a9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(937)));
  /* fb53c: b #0xfb55c */
  goto L_fb55c;
L_fb540:;
  /* fb540: bti j */
  /* bti: no architectural effect here */
  /* fb544: adrp x8, #0x51000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(331776)));
  /* fb548: add x8, x8, #0xc01 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3073)));
  /* fb54c: b #0xfb55c */
  goto L_fb55c;
L_fb550:;
  /* fb550: bti j */
  /* bti: no architectural effect here */
  /* fb554: adrp x8, #0x51000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(331776)));
L_fb558:;
  /* fb558: add x8, x8, #0x830 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2096)));
L_fb55c:;
  /* fb55c: bti j */
  /* bti: no architectural effect here */
  /* fb560: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* fb564: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* fb568: bl #0x1436e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1029484));
  fn1_1436e8(c);
L_fb56c:;
  /* fb56c: str x0, [x19, #0x78] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(120)), ARC_X_R(c, 0));
  /* fb570: cbz x0, #0xfb420 */
  if ((ARC_X_R(c, 0)) == 0) goto L_fb420;
  /* fb574: ldr w8, [x19, #0x9c] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(156))));
  /* fb578: str w20, [x19, #0x98] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(152)), ARC_W_R(c, 20));
  /* fb57c: cmp w8, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(34));
  /* fb580: b.ne #0xfb590 */
  if (ARC_COND(c, 1)) goto L_fb590;
  /* fb584: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* fb588: bl #0x143778 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1029516));
  fn1_143778(c);
  /* fb58c: str wzr, [x19, #0x9c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(156)), ARC_W_R(c, 31));
L_fb590:;
  /* fb590: tbz w20, #1, #0xfb5c0 */
  if (((ARC_W_R(c, 20)) >> 1 & 1) == 0) goto L_fb5c0;
  /* fb594: ldr x0, [x19, #0x78] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(120))));
  /* fb598: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* fb59c: mov w2, #2 */
  ARC_W_W(c, 2, UINT64_C(2));
  /* fb5a0: str wzr, [x19, #0x9c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(156)), ARC_W_R(c, 31));
  /* fb5a4: bl #0x143790 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1029544));
  fn1_143790(c);
  /* fb5a8: cbz w0, #0xfb5c0 */
  if ((ARC_W_R(c, 0)) == 0) goto L_fb5c0;
  /* fb5ac: ldr x0, [x19, #0x78] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(120))));
  /* fb5b0: bl #0x143700 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1029556));
  fn1_143700(c);
  /* fb5b4: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* fb5b8: str xzr, [x19, #0x78] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(120)), ARC_X_R(c, 31));
  /* fb5bc: b #0xfb420 */
  goto L_fb420;
L_fb5c0:;
  /* fb5c0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fb5c4: b #0xfb420 */
  goto L_fb420;
}

void fn1_feb30(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038971184));
  /* feb30: bti c */
  /* bti: no architectural effect here */
  /* feb34: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* feb38: b #0xfec70 */
  fn1_fec70(c); return;
}

void fn1_10b774(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039023476));
  /* 10b774: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 10b778: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 10b77c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 10b780: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 10b784: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 10b788: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 10b78c: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 10b790: ldrb w8, [x2, #8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 2) + INT64_C(8))));
  /* 10b794: mov w20, w4 */
  ARC_W_W(c, 20, ARC_W_R(c, 4));
  /* 10b798: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 10b79c: tbnz w8, #0, #0x10b7cc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_10b7cc;
  /* 10b7a0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 10b7a4: and x4, x20, #1 */
  ARC_X_W(c, 4, (ARC_X_R(c, 20) & UINT64_C(1)));
  /* 10b7a8: ldr x16, [x8, #0x30] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* 10b7ac: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 10b7b0: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 10b7b4: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 10b7b8: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 10b7bc: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 10b7c0: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 10b7c4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 10b7c8: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_10b7cc:;
  /* 10b7cc: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 10b7d0: add x1, x2, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 2) + UINT64_C(48)));
  /* 10b7d4: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1095640));
  fn1_143460(c);
  /* 10b7d8: adrp x24, #0x151000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 10b7dc: ldr x24, [x24, #0xcb8] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(3256))));
  /* 10b7e0: ldur x23, [x29, #-8] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 10b7e4: ldar x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 10b7e8: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 10b7ec: b.eq #0x10b8a8 */
  if (ARC_COND(c, 0)) goto L_10b8a8;
  /* 10b7f0: nop  */
  /* nop: no architectural effect here */
  /* 10b7f4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10b7f8: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1095676));
  fn1_142518(c);
  /* 10b7fc: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 10b800: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 10b804: b.ne #0x10b830 */
  if (ARC_COND(c, 1)) goto L_10b830;
  /* 10b808: nop  */
  /* nop: no architectural effect here */
  /* 10b80c: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 10b810: nop  */
  /* nop: no architectural effect here */
  /* 10b814: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_10b818:;
  /* 10b818: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 10b81c: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 10b820: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1095716));
  fn1_142530(c);
  /* 10b824: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 10b828: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 10b82c: b.eq #0x10b818 */
  if (ARC_COND(c, 0)) goto L_10b818;
L_10b830:;
  /* 10b830: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 10b834: cbz x8, #0x10b848 */
  if ((ARC_X_R(c, 8)) == 0) goto L_10b848;
  /* 10b838: nop  */
  /* nop: no architectural effect here */
  /* 10b83c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10b840: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1095748));
  fn1_142560(c);
  /* 10b844: b #0x10b8a8 */
  goto L_10b8a8;
L_10b848:;
  /* 10b848: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 10b84c: str x24, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 24));
  /* 10b850: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 10b854: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 10b858: nop  */
  /* nop: no architectural effect here */
  /* 10b85c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10b860: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1095780));
  fn1_142560(c);
  /* 10b864: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 10b868: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 10b86c: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 10b870: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1095796));
  fn1_a2030(c);
  /* 10b874: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 10b878: str w8, [x24, #8] */
  arc_st32((ARC_X_R(c, 24) + INT64_C(8)), ARC_W_R(c, 8));
  /* 10b87c: nop  */
  /* nop: no architectural effect here */
  /* 10b880: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10b884: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1095816));
  fn1_142518(c);
  /* 10b888: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 10b88c: stlr x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 10b890: nop  */
  /* nop: no architectural effect here */
  /* 10b894: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10b898: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1095836));
  fn1_142560(c);
  /* 10b89c: nop  */
  /* nop: no architectural effect here */
  /* 10b8a0: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 10b8a4: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1095848));
  fn1_142578(c);
L_10b8a8:;
  /* 10b8a8: ldp x8, x10, [x23, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 10b8ac: ldrsw x9, [x24, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 24) + INT64_C(8)))));
  /* 10b8b0: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 10b8b4: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 10b8b8: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 10b8bc: b.hs #0x10b9b4 */
  if (ARC_COND(c, 2)) goto L_10b9b4;
  /* 10b8c0: ldr x21, [x8, x9, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 10b8c4: cbz x21, #0x10b9b4 */
  if ((ARC_X_R(c, 21)) == 0) goto L_10b9b4;
  /* 10b8c8: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 10b8cc: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1095888));
  fn1_143478(c);
  /* 10b8d0: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 10b8d4: tst w20, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 20) & UINT64_C(1)));
  /* 10b8d8: mov w9, #0x38 */
  ARC_W_W(c, 9, UINT64_C(56));
  /* 10b8dc: mov w10, #0x30 */
  ARC_W_W(c, 10, UINT64_C(48));
  /* 10b8e0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 10b8e4: mov x20, sp */
  ARC_X_W(c, 20, (c)->sp);
  /* 10b8e8: csel x9, x10, x9, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 10b8ec: ldr x9, [x8, x9] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 9))));
  /* 10b8f0: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* 10b8f4: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1095928));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 10b8f8: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 10b8fc: ldp x9, x0, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 0, arc_ld64(_pa + 8));
  }
  /* 10b900: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 10b904: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 10b908: csel x10, x10, x9, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 10b90c: cbz x10, #0x10b980 */
  if ((ARC_X_R(c, 10)) == 0) goto L_10b980;
  /* 10b910: orr x20, x20, #4 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) | UINT64_C(4)));
  /* 10b914: csel x21, x20, x0, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 20)) : ARC_X_R(c, 0)));
  /* 10b918: b #0x10b954 */
  goto L_10b954;
L_10b91c:;
  /* 10b91c: str w1, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 1));
  }
  /* 10b920: str x8, [x19, #0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)), ARC_X_R(c, 8));
L_10b924:;
  /* 10b924: ldp x9, x0, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 0, arc_ld64(_pa + 8));
  }
  /* 10b928: cmn w1, #1 */
  (void)arc_add32(c, ARC_W_R(c, 1), UINT64_C(1), 0);
  /* 10b92c: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 10b930: csel x19, xzr, x19, eq */
  ARC_X_W(c, 19, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 19)));
L_10b934:;
  /* 10b934: lsr w10, w8, #1 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(1)) & 31)));
  /* 10b938: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 10b93c: add x21, x21, #4 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(4)));
  /* 10b940: csel x11, x20, x0, eq */
  ARC_X_W(c, 11, (ARC_COND(c, 0) ? (ARC_X_R(c, 20)) : ARC_X_R(c, 0)));
  /* 10b944: csel x10, x10, x9, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 10b948: add x10, x11, x10, lsl #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 10)) << 2)));
  /* 10b94c: cmp x21, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 10));
  /* 10b950: b.eq #0x10b980 */
  if (ARC_COND(c, 0)) goto L_10b980;
L_10b954:;
  /* 10b954: cbz x19, #0x10b934 */
  if ((ARC_X_R(c, 19)) == 0) goto L_10b934;
  /* 10b958: ldp x8, x9, [x19, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(48));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 10b95c: ldr w1, [x21] */
  ARC_W_W(c, 1, arc_ld32(ARC_X_R(c, 21)));
  /* 10b960: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 10b964: b.ne #0x10b91c */
  if (ARC_COND(c, 1)) goto L_10b91c;
  /* 10b968: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 10b96c: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* 10b970: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10b974: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1096056));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10b978: mov w1, w0 */
  ARC_W_W(c, 1, ARC_W_R(c, 0));
  /* 10b97c: b #0x10b924 */
  goto L_10b924;
L_10b980:;
  /* 10b980: tbz w8, #0, #0x10b994 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10b994;
  /* 10b984: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 10b988: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 10b98c: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 10b990: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1096084));
  fn1_142608(c);
L_10b994:;
  /* 10b994: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10b998: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 10b99c: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 10b9a0: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 10b9a4: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 10b9a8: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 10b9ac: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 10b9b0: ret  */
  return;
L_10b9b4:;
  /* 10b9b4: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1096120));
  fn1_fc3b8(c);
  /* 10b9b8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10b9bc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 10b9c0: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1096132));
  fn1_d2a78(c);
  /* 10b9c4: b #0x10b9f8 */
  goto L_10b9f8;
  /* 10b9c8: b #0x10b9f4 */
  goto L_10b9f4;
  /* 10b9cc: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 10b9d0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10b9d4: tbz w8, #0, #0x10b9ec */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10b9ec;
  /* 10b9d8: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 10b9dc: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* 10b9e0: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 10b9e4: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 10b9e8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1096172));
  fn1_142608(c);
L_10b9ec:;
  /* 10b9ec: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10b9f0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1096180));
  fn1_9cc20(c);
L_10b9f4:;
  /* 10b9f4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_10b9f8:;
  /* 10b9f8: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 10b9fc: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1096192));
  fn1_143478(c);
  /* 10ba00: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10ba04: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1096200));
  fn1_9cc20(c);
}

void fn1_1136a4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039056036));
  /* 1136a4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1136a8: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* 1136ac: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1136b0: stp x28, x27, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 1136b4: stp x26, x25, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 1136b8: stp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1136bc: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1136c0: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1136c4: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1136c8: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1136cc: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 1136d0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1136d4: add x1, x2, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 2) + UINT64_C(48)));
  /* 1136d8: mov x20, x6 */
  ARC_X_W(c, 20, ARC_X_R(c, 6));
  /* 1136dc: mov x25, x5 */
  ARC_X_W(c, 25, ARC_X_R(c, 5));
  /* 1136e0: str x4, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 4));
  /* 1136e4: mov w22, w3 */
  ARC_W_W(c, 22, ARC_W_R(c, 3));
  /* 1136e8: mov x23, x2 */
  ARC_X_W(c, 23, ARC_X_R(c, 2));
  /* 1136ec: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1128176));
  fn1_143460(c);
  /* 1136f0: adrp x21, #0x151000 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1136f4: ldr x21, [x21, #0xb58] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 21) + INT64_C(2904))));
  /* 1136f8: ldr x28, [sp, #8] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1136fc: ldar x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 113700: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 113704: b.eq #0x1137c0 */
  if (ARC_COND(c, 0)) goto L_1137c0;
  /* 113708: nop  */
  /* nop: no architectural effect here */
  /* 11370c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 113710: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1128212));
  fn1_142518(c);
  /* 113714: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 113718: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11371c: b.ne #0x113748 */
  if (ARC_COND(c, 1)) goto L_113748;
  /* 113720: nop  */
  /* nop: no architectural effect here */
  /* 113724: adr x26, #0x15791c */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 113728: nop  */
  /* nop: no architectural effect here */
  /* 11372c: adr x27, #0x1578f4 */
  ARC_X_W(c, 27, (arc_image_bases[1] + UINT64_C(1407220)));
L_113730:;
  /* 113730: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 113734: mov x1, x27 */
  ARC_X_W(c, 1, ARC_X_R(c, 27));
  /* 113738: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1128252));
  fn1_142530(c);
  /* 11373c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 113740: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 113744: b.eq #0x113730 */
  if (ARC_COND(c, 0)) goto L_113730;
L_113748:;
  /* 113748: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11374c: cbz x8, #0x113760 */
  if ((ARC_X_R(c, 8)) == 0) goto L_113760;
  /* 113750: nop  */
  /* nop: no architectural effect here */
  /* 113754: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 113758: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1128284));
  fn1_142560(c);
  /* 11375c: b #0x1137c0 */
  goto L_1137c0;
L_113760:;
  /* 113760: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 113764: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 113768: strb wzr, [sp, #0x18] */
  arc_st8(((c)->sp + INT64_C(24)), ARC_W_R(c, 31));
  /* 11376c: str x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* 113770: nop  */
  /* nop: no architectural effect here */
  /* 113774: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 113778: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1128316));
  fn1_142560(c);
  /* 11377c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 113780: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 113784: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 113788: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1128332));
  fn1_a2030(c);
  /* 11378c: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 113790: str w8, [x21, #8] */
  arc_st32((ARC_X_R(c, 21) + INT64_C(8)), ARC_W_R(c, 8));
  /* 113794: nop  */
  /* nop: no architectural effect here */
  /* 113798: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11379c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1128352));
  fn1_142518(c);
  /* 1137a0: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 1137a4: stlr x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* 1137a8: nop  */
  /* nop: no architectural effect here */
  /* 1137ac: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1137b0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1128372));
  fn1_142560(c);
  /* 1137b4: nop  */
  /* nop: no architectural effect here */
  /* 1137b8: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 1137bc: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1128384));
  fn1_142578(c);
L_1137c0:;
  /* 1137c0: ldp x8, x10, [x28, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 28) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 1137c4: ldrsw x9, [x21, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 21) + INT64_C(8)))));
  /* 1137c8: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 1137cc: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 1137d0: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 1137d4: b.hs #0x1139c8 */
  if (ARC_COND(c, 2)) goto L_1139c8;
  /* 1137d8: ldr x26, [x8, x9, lsl #3] */
  ARC_X_W(c, 26, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 1137dc: cbz x26, #0x1139c8 */
  if ((ARC_X_R(c, 26)) == 0) goto L_1139c8;
  /* 1137e0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1137e4: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1128424));
  fn1_143478(c);
  /* 1137e8: cmp x25, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 20));
  /* 1137ec: b.ne #0x11381c */
  if (ARC_COND(c, 1)) goto L_11381c;
  /* 1137f0: b #0x11397c */
  goto L_11397c;
L_1137f4:;
  /* 1137f4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1137f8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1137fc: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* 113800: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1128452));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 113804: mov w1, w0 */
  ARC_W_W(c, 1, ARC_W_R(c, 0));
L_113808:;
  /* 113808: cmn w1, #1 */
  (void)arc_add32(c, ARC_W_R(c, 1), UINT64_C(1), 0);
  /* 11380c: csel x19, xzr, x19, eq */
  ARC_X_W(c, 19, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 19)));
L_113810:;
  /* 113810: add x25, x25, #4 */
  ARC_X_W(c, 25, (ARC_X_R(c, 25) + UINT64_C(4)));
  /* 113814: cmp x25, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 20));
  /* 113818: b.eq #0x11397c */
  if (ARC_COND(c, 0)) goto L_11397c;
L_11381c:;
  /* 11381c: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 113820: ldr w1, [x25] */
  ARC_W_W(c, 1, arc_ld32(ARC_X_R(c, 25)));
  /* 113824: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 113828: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 11382c: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* 113830: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1128500));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 113834: and w8, w0, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) & UINT64_C(255)));
  /* 113838: cmp w8, #0x25 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(37));
  /* 11383c: b.ne #0x1138ac */
  if (ARC_COND(c, 1)) goto L_1138ac;
  /* 113840: add x21, x25, #4 */
  ARC_X_W(c, 21, (ARC_X_R(c, 25) + UINT64_C(4)));
  /* 113844: cmp x21, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 20));
  /* 113848: b.eq #0x11390c */
  if (ARC_COND(c, 0)) goto L_11390c;
  /* 11384c: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 113850: ldr w1, [x21] */
  ARC_W_W(c, 1, arc_ld32(ARC_X_R(c, 21)));
  /* 113854: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 113858: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 11385c: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* 113860: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1128548));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 113864: and w8, w0, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) & UINT64_C(255)));
  /* 113868: mov w27, w0 */
  ARC_W_W(c, 27, ARC_W_R(c, 0));
  /* 11386c: cmp w8, #0x4f */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(79));
  /* 113870: b.eq #0x11387c */
  if (ARC_COND(c, 0)) goto L_11387c;
  /* 113874: cmp w8, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(69));
  /* 113878: b.ne #0x1138cc */
  if (ARC_COND(c, 1)) goto L_1138cc;
L_11387c:;
  /* 11387c: add x28, x25, #8 */
  ARC_X_W(c, 28, (ARC_X_R(c, 25) + UINT64_C(8)));
  /* 113880: cmp x28, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 28), ARC_X_R(c, 20));
  /* 113884: b.eq #0x11392c */
  if (ARC_COND(c, 0)) goto L_11392c;
  /* 113888: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 11388c: ldr w1, [x28] */
  ARC_W_W(c, 1, arc_ld32(ARC_X_R(c, 28)));
  /* 113890: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 113894: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 113898: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* 11389c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1128608));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1138a0: mov w5, w0 */
  ARC_W_W(c, 5, ARC_W_R(c, 0));
  /* 1138a4: mov x21, x28 */
  ARC_X_W(c, 21, ARC_X_R(c, 28));
  /* 1138a8: b #0x1138d4 */
  goto L_1138d4;
L_1138ac:;
  /* 1138ac: cbz x19, #0x113810 */
  if ((ARC_X_R(c, 19)) == 0) goto L_113810;
  /* 1138b0: ldp x8, x9, [x19, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(48));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1138b4: ldr w1, [x25] */
  ARC_W_W(c, 1, arc_ld32(ARC_X_R(c, 25)));
  /* 1138b8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1138bc: b.eq #0x1137f4 */
  if (ARC_COND(c, 0)) goto L_1137f4;
  /* 1138c0: str w1, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 1));
  }
  /* 1138c4: str x8, [x19, #0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)), ARC_X_R(c, 8));
  /* 1138c8: b #0x113808 */
  goto L_113808;
L_1138cc:;
  /* 1138cc: mov w5, w27 */
  ARC_W_W(c, 5, ARC_W_R(c, 27));
  /* 1138d0: mov w27, wzr */
  ARC_W_W(c, 27, ARC_W_R(c, 31));
L_1138d4:;
  /* 1138d4: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 1138d8: ldr x4, [sp] */
  ARC_X_W(c, 4, arc_ld64((c)->sp));
  /* 1138dc: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 1138e0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1138e4: mov x2, x23 */
  ARC_X_W(c, 2, ARC_X_R(c, 23));
  /* 1138e8: mov w3, w22 */
  ARC_W_W(c, 3, ARC_W_R(c, 22));
  /* 1138ec: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 1138f0: mov w6, w27 */
  ARC_W_W(c, 6, ARC_W_R(c, 27));
  /* 1138f4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1128696));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1138f8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1138fc: add x25, x21, #4 */
  ARC_X_W(c, 25, (ARC_X_R(c, 21) + UINT64_C(4)));
  /* 113900: cmp x25, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 20));
  /* 113904: b.ne #0x11381c */
  if (ARC_COND(c, 1)) goto L_11381c;
  /* 113908: b #0x11397c */
  goto L_11397c;
L_11390c:;
  /* 11390c: cbz x19, #0x11397c */
  if ((ARC_X_R(c, 19)) == 0) goto L_11397c;
  /* 113910: ldp x8, x9, [x19, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(48));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 113914: ldr w1, [x25] */
  ARC_W_W(c, 1, arc_ld32(ARC_X_R(c, 25)));
  /* 113918: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 11391c: b.eq #0x113960 */
  if (ARC_COND(c, 0)) goto L_113960;
L_113920:;
  /* 113920: str w1, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 1));
  }
  /* 113924: str x8, [x19, #0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)), ARC_X_R(c, 8));
  /* 113928: b #0x113974 */
  goto L_113974;
L_11392c:;
  /* 11392c: cbz x19, #0x11397c */
  if ((ARC_X_R(c, 19)) == 0) goto L_11397c;
  /* 113930: ldp x8, x9, [x19, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(48));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 113934: ldr w1, [x25] */
  ARC_W_W(c, 1, arc_ld32(ARC_X_R(c, 25)));
  /* 113938: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 11393c: b.eq #0x1139a4 */
  if (ARC_COND(c, 0)) goto L_1139a4;
  /* 113940: str w1, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 1));
  }
  /* 113944: str x8, [x19, #0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)), ARC_X_R(c, 8));
  /* 113948: cmn w1, #1 */
  (void)arc_add32(c, ARC_W_R(c, 1), UINT64_C(1), 0);
  /* 11394c: b.eq #0x1139c0 */
  if (ARC_COND(c, 0)) goto L_1139c0;
L_113950:;
  /* 113950: ldp x8, x9, [x19, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(48));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 113954: ldr w1, [x21] */
  ARC_W_W(c, 1, arc_ld32(ARC_X_R(c, 21)));
  /* 113958: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 11395c: b.ne #0x113920 */
  if (ARC_COND(c, 1)) goto L_113920;
L_113960:;
  /* 113960: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 113964: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 113968: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* 11396c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1128816));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 113970: mov w1, w0 */
  ARC_W_W(c, 1, ARC_W_R(c, 0));
L_113974:;
  /* 113974: cmn w1, #1 */
  (void)arc_add32(c, ARC_W_R(c, 1), UINT64_C(1), 0);
  /* 113978: csel x19, xzr, x19, eq */
  ARC_X_W(c, 19, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 19)));
L_11397c:;
  /* 11397c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 113980: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 113984: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 113988: ldp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 11398c: ldp x26, x25, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 113990: ldp x28, x27, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 113994: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 113998: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* 11399c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1139a0: ret  */
  return;
L_1139a4:;
  /* 1139a4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1139a8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1139ac: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* 1139b0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1128884));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1139b4: mov w1, w0 */
  ARC_W_W(c, 1, ARC_W_R(c, 0));
  /* 1139b8: cmn w1, #1 */
  (void)arc_add32(c, ARC_W_R(c, 1), UINT64_C(1), 0);
  /* 1139bc: b.ne #0x113950 */
  if (ARC_COND(c, 1)) goto L_113950;
L_1139c0:;
  /* 1139c0: mov x19, xzr */
  ARC_X_W(c, 19, ARC_X_R(c, 31));
  /* 1139c4: b #0x11397c */
  goto L_11397c;
L_1139c8:;
  /* 1139c8: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1128908));
  fn1_fc3b8(c);
  /* 1139cc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1139d0: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1139d4: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1128920));
  fn1_d2a78(c);
  /* 1139d8: b #0x1139e4 */
  goto L_1139e4;
  /* 1139dc: b #0x1139e0 */
  goto L_1139e0;
L_1139e0:;
  /* 1139e0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_1139e4:;
  /* 1139e4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1139e8: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1128940));
  fn1_143478(c);
  /* 1139ec: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1139f0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1128948));
  fn1_9cc20(c);
}

void fn1_1140b4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039058612));
  /* 1140b4: bti c */
  /* bti: no architectural effect here */
  /* 1140b8: ldr w0, [x0, #0x7c] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(124))));
  /* 1140bc: ret  */
  return;
}

void fn1_11fb7c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039106428));
  /* 11fb7c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 11fb80: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 11fb84: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 11fb88: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 11fb8c: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 11fb90: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 11fb94: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 11fb98: adrp x23, #0x151000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11fb9c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 11fba0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11fba4: ldr x23, [x23, #0xc08] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 23) + INT64_C(3080))));
  /* 11fba8: ldar x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11fbac: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11fbb0: b.eq #0x11fc6c */
  if (ARC_COND(c, 0)) goto L_11fc6c;
  /* 11fbb4: nop  */
  /* nop: no architectural effect here */
  /* 11fbb8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11fbbc: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1178560));
  fn1_142518(c);
  /* 11fbc0: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11fbc4: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11fbc8: b.ne #0x11fbf4 */
  if (ARC_COND(c, 1)) goto L_11fbf4;
  /* 11fbcc: nop  */
  /* nop: no architectural effect here */
  /* 11fbd0: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11fbd4: nop  */
  /* nop: no architectural effect here */
  /* 11fbd8: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_11fbdc:;
  /* 11fbdc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11fbe0: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 11fbe4: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1178600));
  fn1_142530(c);
  /* 11fbe8: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11fbec: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11fbf0: b.eq #0x11fbdc */
  if (ARC_COND(c, 0)) goto L_11fbdc;
L_11fbf4:;
  /* 11fbf4: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11fbf8: cbz x8, #0x11fc0c */
  if ((ARC_X_R(c, 8)) == 0) goto L_11fc0c;
  /* 11fbfc: nop  */
  /* nop: no architectural effect here */
  /* 11fc00: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11fc04: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1178632));
  fn1_142560(c);
  /* 11fc08: b #0x11fc6c */
  goto L_11fc6c;
L_11fc0c:;
  /* 11fc0c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11fc10: str x23, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 23));
  /* 11fc14: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11fc18: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 11fc1c: nop  */
  /* nop: no architectural effect here */
  /* 11fc20: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11fc24: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1178664));
  fn1_142560(c);
  /* 11fc28: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11fc2c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11fc30: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11fc34: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1178680));
  fn1_a2030(c);
  /* 11fc38: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11fc3c: str w8, [x23, #8] */
  arc_st32((ARC_X_R(c, 23) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11fc40: nop  */
  /* nop: no architectural effect here */
  /* 11fc44: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11fc48: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1178700));
  fn1_142518(c);
  /* 11fc4c: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11fc50: stlr x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 11fc54: nop  */
  /* nop: no architectural effect here */
  /* 11fc58: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11fc5c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1178720));
  fn1_142560(c);
  /* 11fc60: nop  */
  /* nop: no architectural effect here */
  /* 11fc64: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11fc68: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1178732));
  fn1_142578(c);
L_11fc6c:;
  /* 11fc6c: ldrsw x8, [x23, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 23) + INT64_C(8)))));
  /* 11fc70: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 11fc74: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11fc78: sub x22, x8, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11fc7c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1178752));
  fn1_db2e0(c);
  /* 11fc80: mov x21, x20 */
  ARC_X_W(c, 21, ARC_X_R(c, 20));
  /* 11fc84: ldp x8, x9, [x21, #0x10]! */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11fc88: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11fc8c: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11fc90: cmp x10, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 22));
  /* 11fc94: b.hi #0x11fcc0 */
  if (ARC_COND(c, 8)) goto L_11fcc0;
  /* 11fc98: add x9, x22, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* 11fc9c: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11fca0: b.ls #0x11fcb4 */
  if (ARC_COND(c, 9)) goto L_11fcb4;
  /* 11fca4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11fca8: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1178796));
  fn1_1352bc(c);
  /* 11fcac: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11fcb0: b #0x11fcc0 */
  goto L_11fcc0;
L_11fcb4:;
  /* 11fcb4: b.hs #0x11fcc0 */
  if (ARC_COND(c, 2)) goto L_11fcc0;
  /* 11fcb8: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11fcbc: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11fcc0:;
  /* 11fcc0: ldr x20, [x8, x22, lsl #3] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3))));
  /* 11fcc4: cbz x20, #0x11fce8 */
  if ((ARC_X_R(c, 20)) == 0) goto L_11fce8;
  /* 11fcc8: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 11fccc: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11fcd0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1178836));
  fn1_bd950(c);
  /* 11fcd4: cbnz x0, #0x11fce8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11fce8;
  /* 11fcd8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 11fcdc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11fce0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11fce4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1178856));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11fce8:;
  /* 11fce8: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11fcec: str x19, [x8, x22, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3)), ARC_X_R(c, 19));
  /* 11fcf0: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 11fcf4: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 11fcf8: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 11fcfc: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 11fd00: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 11fd04: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 11fd08: ret  */
  return;
  /* 11fd0c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11fd10: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 11fd14: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11fd18: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1178908));
  fn1_bd950(c);
  /* 11fd1c: cbnz x0, #0x11fd44 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11fd44;
  /* 11fd20: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11fd24: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11fd28: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11fd2c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1178928));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11fd30: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11fd34: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1178936));
  fn1_9cc20(c);
  /* 11fd38: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11fd3c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 11fd40: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1178948));
  fn1_d2a78(c);
L_11fd44:;
  /* 11fd44: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11fd48: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1178956));
  fn1_9cc20(c);
}

void fn1_1269f4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039134708));
  /* 1269f4: bti c */
  /* bti: no architectural effect here */
  /* 1269f8: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1269fc: sub x9, x3, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 3) - UINT64_C(1)));
  /* 126a00: ldr x8, [x8, #0xc70] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3184))));
  /* 126a04: stp x9, x1, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 126a08: strb w2, [x0, #0x18] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(24)), ARC_W_R(c, 2));
  /* 126a0c: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 126a10: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 126a14: cbz x1, #0x126a1c */
  if ((ARC_X_R(c, 1)) == 0) goto L_126a1c;
  /* 126a18: ret  */
  return;
L_126a1c:;
  /* 126a1c: nop  */
  /* nop: no architectural effect here */
  /* 126a20: adr x8, #0x75c10 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(482320)));
  /* 126a24: str x8, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 8));
  /* 126a28: ret  */
  return;
}

void fn1_129164(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039144804));
  /* 129164: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 129168: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 12916c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 129170: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 129174: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 129178: mov x8, x5 */
  ARC_X_W(c, 8, ARC_X_R(c, 5));
  /* 12917c: mov x19, x7 */
  ARC_X_W(c, 19, ARC_X_R(c, 7));
  /* 129180: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 129184: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 129188: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 12918c: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 129190: mov x5, sp */
  ARC_X_W(c, 5, (c)->sp);
  /* 129194: mov x3, x8 */
  ARC_X_W(c, 3, ARC_X_R(c, 8));
  /* 129198: mov x4, x6 */
  ARC_X_W(c, 4, ARC_X_R(c, 6));
  /* 12919c: mov w6, #0x10ffff */
  ARC_W_W(c, 6, UINT64_C(1114111));
  /* 1291a0: mov w7, wzr */
  ARC_W_W(c, 7, ARC_W_R(c, 31));
  /* 1291a4: bl #0x128c08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1216936));
  fn1_128c08(c);
  /* 1291a8: ldp x9, x8, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 1291ac: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 1291b0: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* 1291b4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1291b8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1291bc: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1291c0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1291c4: ret  */
  return;
}

void fn1_12aa0c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039151116));
  /* 12aa0c: bti c */
  /* bti: no architectural effect here */
  /* 12aa10: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 12aa14: ret  */
  return;
}

void fn1_12bda0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039156128));
  /* 12bda0: bti c */
  /* bti: no architectural effect here */
  /* 12bda4: nop  */
  /* nop: no architectural effect here */
  /* 12bda8: adr x10, #0x751d8 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(479704)));
  /* 12bdac: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* 12bdb0: ldr q0, [x10] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 10)), arc_ld64(ARC_X_R(c, 10) + 8));
  /* 12bdb4: strb w9, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 12bdb8: str wzr, [x8, #0x14] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(20)), ARC_W_R(c, 31));
  /* 12bdbc: stur q0, [x8, #4] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(4)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 8) + INT64_C(4)) + 8, (c)->q[0].u64[1]);
  /* 12bdc0: ret  */
  return;
}

void fn1_1346f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039191280));
  /* 1346f0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1346f4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1346f8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1346fc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 134700: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 134704: bl #0x144048 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1263368));
  fn1_144048(c);
  /* 134708: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13470c: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* 134710: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 134714: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 134718: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13471c: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_134d9c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192988));
  /* 134d9c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 134da0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 134da4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 134da8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 134dac: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 134db0: bl #0x134ce4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1265076));
  fn1_134ce4(c);
  /* 134db4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 134db8: mov w1, #0x88 */
  ARC_W_W(c, 1, UINT64_C(136));
  /* 134dbc: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 134dc0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 134dc4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 134dc8: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_13792c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039204140));
  /* 13792c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 137930: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 137934: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* 137938: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13793c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 137940: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 137944: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 137948: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 13794c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 137950: ldr x8, [x8, #0xaa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2728))));
  /* 137954: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 137958: adrp x23, #0x15d000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 13795c: nop  */
  /* nop: no architectural effect here */
  /* 137960: adr x22, #0x15dc40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432640)));
  /* 137964: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 137968: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 13796c: nop  */
  /* nop: no architectural effect here */
  /* 137970: adr x8, #0x15dd90 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 137974: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 137978: tbz w8, #0, #0x137a08 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_137a08;
L_13797c:;
  /* 13797c: ldr x8, [x23, #0xd88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 23) + INT64_C(3464))));
  /* 137980: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* 137984: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* 137988: b.eq #0x137998 */
  if (ARC_COND(c, 0)) goto L_137998;
  /* 13798c: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* 137990: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 137994: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1276312));
  fn1_db2e0(c);
L_137998:;
  /* 137998: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 13799c: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 1379a0: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* 1379a4: ldr x8, [x8, #0xe40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3648))));
  /* 1379a8: str w9, [x19, #0x40] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(64)), ARC_W_R(c, 9));
  /* 1379ac: stp xzr, xzr, [x19, #0x50] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1379b0: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 1379b4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 1379b8: mov w8, #0x1000 */
  ARC_W_W(c, 8, UINT64_C(4096));
  /* 1379bc: stp q0, q0, [x19, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 1379c0: str q0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* 1379c4: str x8, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), ARC_X_R(c, 8));
  /* 1379c8: cbz x21, #0x1379dc */
  if ((ARC_X_R(c, 21)) == 0) goto L_1379dc;
  /* 1379cc: cmp x21, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(0));
  /* 1379d0: mov w8, #0x7fffffff */
  ARC_W_W(c, 8, UINT64_C(2147483647));
  /* 1379d4: csel x0, x8, x21, lt */
  ARC_X_W(c, 0, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 21)));
  /* 1379d8: b #0x1379e4 */
  goto L_1379e4;
L_1379dc:;
  /* 1379dc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1379e0: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1276388));
  fn1_142860(c);
L_1379e4:;
  /* 1379e4: add x8, x20, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + ARC_X_R(c, 0)));
  /* 1379e8: stp x20, x20, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* 1379ec: str x8, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 8));
  /* 1379f0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1379f4: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1379f8: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1379fc: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 137a00: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 137a04: ret  */
  return;
L_137a08:;
  /* 137a08: nop  */
  /* nop: no architectural effect here */
  /* 137a0c: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 137a10: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1276436));
  fn1_1424b8(c);
  /* 137a14: cbz w0, #0x13797c */
  if ((ARC_W_R(c, 0)) == 0) goto L_13797c;
  /* 137a18: bl #0x143ac0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1276444));
  fn1_143ac0(c);
  /* 137a1c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 137a20: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* 137a24: str x8, [x23, #0xd88] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(3464)), ARC_X_R(c, 8));
  /* 137a28: b.eq #0x137a38 */
  if (ARC_COND(c, 0)) goto L_137a38;
  /* 137a2c: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* 137a30: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 137a34: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1276472));
  fn1_db2e0(c);
L_137a38:;
  /* 137a38: nop  */
  /* nop: no architectural effect here */
  /* 137a3c: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 137a40: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1276484));
  fn1_1424d0(c);
  /* 137a44: b #0x13797c */
  goto L_13797c;
  /* 137a48: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 137a4c: nop  */
  /* nop: no architectural effect here */
  /* 137a50: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 137a54: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1276504));
  fn1_1424e8(c);
  /* 137a58: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 137a5c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1276512));
  fn1_a1454(c);
}

void fn1_13b200(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039218688));
  /* 13b200: bti c */
  /* bti: no architectural effect here */
  /* 13b204: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 13b208: add x8, x8, #0x5f8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1528)));
  /* 13b20c: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 13b210: ret  */
  return;
}

void fn1_14227c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039247484));
  /* 14227c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 142280: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 142284: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 142288: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 14228c: cmp x0, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(1));
  /* 142290: csinc x19, x0, xzr, hi */
  ARC_X_W(c, 19, (ARC_COND(c, 8) ? (ARC_X_R(c, 0)) : ((ARC_X_R(c, 31)) + 1)));
  /* 142294: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 142298: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1319580));
  fn1_1428a8(c);
  /* 14229c: cbnz x0, #0x1422c0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_1422c0;
  /* 1422a0: adrp x20, #0x151000 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1422a4: ldr x20, [x20, #0x8c0] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(2240))));
L_1422a8:;
  /* 1422a8: ldar x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1422ac: cbz x8, #0x1422d0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1422d0;
  /* 1422b0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1319604));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1422b4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1422b8: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1319612));
  fn1_1428a8(c);
  /* 1422bc: cbz x0, #0x1422a8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1422a8;
L_1422c0:;
  /* 1422c0: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1422c4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1422c8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1422cc: ret  */
  return;
L_1422d0:;
  /* 1422d0: mov w0, #8 */
  ARC_W_W(c, 0, UINT64_C(8));
  /* 1422d4: bl #0x142410 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1319640));
  fn1_142410(c);
  /* 1422d8: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1422dc: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1422e0: adrp x2, #0x151000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1422e4: ldr x8, [x8, #0x8d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2256))));
  /* 1422e8: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 1422ec: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 1422f0: ldr x1, [x1, #0x8f0] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2288))));
  /* 1422f4: ldr x2, [x2, #0x900] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 2) + INT64_C(2304))));
  /* 1422f8: bl #0x142440 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1319676));
  fn1_142440(c);
}

void fn1_142968(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249256));
  /* 142968: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14296c: ldr x17, [x16, #0x58] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(88))));
  /* 142970: add x16, x16, #0x58 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(88)));
  /* 142974: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142978: nop  */
  /* nop: no architectural effect here */
  /* 14297c: nop  */
  /* nop: no architectural effect here */
}

void fn1_142f68(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250792));
  /* 142f68: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142f6c: ldr x17, [x16, #0x258] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(600))));
  /* 142f70: add x16, x16, #0x258 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(600)));
  /* 142f74: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142f78: nop  */
  /* nop: no architectural effect here */
  /* 142f7c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143568(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252328));
  /* 143568: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14356c: ldr x17, [x16, #0x458] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1112))));
  /* 143570: add x16, x16, #0x458 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1112)));
  /* 143574: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143578: nop  */
  /* nop: no architectural effect here */
  /* 14357c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143b68(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253864));
  /* 143b68: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143b6c: ldr x17, [x16, #0x658] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1624))));
  /* 143b70: add x16, x16, #0x658 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1624)));
  /* 143b74: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143b78: nop  */
  /* nop: no architectural effect here */
  /* 143b7c: nop  */
  /* nop: no architectural effect here */
}

void fn1_144168(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255400));
  /* 144168: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14416c: ldr x17, [x16, #0x858] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2136))));
  /* 144170: add x16, x16, #0x858 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2136)));
  /* 144174: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144178: nop  */
  /* nop: no architectural effect here */
  /* 14417c: nop  */
  /* nop: no architectural effect here */
}

void fn1_144768(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256936));
  /* 144768: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14476c: ldr x17, [x16, #0xa58] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2648))));
  /* 144770: add x16, x16, #0xa58 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2648)));
  /* 144774: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144778: nop  */
  /* nop: no architectural effect here */
  /* 14477c: nop  */
  /* nop: no architectural effect here */
}

