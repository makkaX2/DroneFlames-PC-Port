#include "lifted.h"

void fn1_a0b7c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038586236));
  /* a0b7c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a0b80: str x30, [sp, #-0x10]! */
  { const uint64_t _a = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_a, ARC_X_R(c, 30));
  }
  /* a0b84: adrp x0, #0x157000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1404928)));
  /* a0b88: add x0, x0, #0x604 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1540)));
  /* a0b8c: nop  */
  /* nop: no architectural effect here */
  /* a0b90: adr x1, #0xa0bb8 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(658360)));
  /* a0b94: bl #0x1429f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(658328));
  fn1_1429f8(c);
  /* a0b98: cbnz w0, #0xa0bb4 */
  if ((ARC_W_R(c, 0)) != 0) goto L_a0bb4;
  /* a0b9c: adrp x8, #0x157000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404928)));
  /* a0ba0: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* a0ba4: strb w9, [x8, #0x600] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(1536)), ARC_W_R(c, 9));
  /* a0ba8: ldr x30, [sp], #0x10 */
  { const uint64_t _a = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 30, arc_ld64(_a));
  }
  /* a0bac: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a0bb0: ret  */
  return;
L_a0bb4:;
  /* a0bb4: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(658360));
  fn1_1427b8(c);
}

void fn1_a2318(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038592280));
  /* a2318: bti c */
  /* bti: no architectural effect here */
  /* a231c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a2320: ldr x8, [x8, #0x988] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2440))));
  /* a2324: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* a2328: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* a232c: ret  */
  return;
}

void fn1_a7e98(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038615704));
  /* a7e98: bti c */
  /* bti: no architectural effect here */
  /* a7e9c: ldp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* a7ea0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a7ea4: b.eq #0xa804c */
  if (ARC_COND(c, 0)) goto L_a804c;
  /* a7ea8: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* a7eac: cmp w10, #0x76 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(118));
  /* a7eb0: b.eq #0xa7ef0 */
  if (ARC_COND(c, 0)) goto L_a7ef0;
  /* a7eb4: cmp w10, #0x68 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(104));
  /* a7eb8: b.ne #0xa804c */
  if (ARC_COND(c, 1)) goto L_a804c;
  /* a7ebc: add x11, x8, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a7ec0: cmp x11, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 9));
  /* a7ec4: str x11, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 11));
  /* a7ec8: b.eq #0xa7f24 */
  if (ARC_COND(c, 0)) goto L_a7f24;
  /* a7ecc: ldrb w10, [x11] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 11)));
  /* a7ed0: cmp w10, #0x6e */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(110));
  /* a7ed4: mov x10, x11 */
  ARC_X_W(c, 10, ARC_X_R(c, 11));
  /* a7ed8: b.ne #0xa7ee4 */
  if (ARC_COND(c, 1)) goto L_a7ee4;
  /* a7edc: add x10, x8, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* a7ee0: str x10, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 10));
L_a7ee4:;
  /* a7ee4: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* a7ee8: b.ne #0xa7f30 */
  if (ARC_COND(c, 1)) goto L_a7f30;
  /* a7eec: b #0xa804c */
  goto L_a804c;
L_a7ef0:;
  /* a7ef0: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a7ef4: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* a7ef8: str x10, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 10));
  /* a7efc: b.eq #0xa7f68 */
  if (ARC_COND(c, 0)) goto L_a7f68;
  /* a7f00: ldrb w11, [x10] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 10)));
  /* a7f04: cmp w11, #0x6e */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(110));
  /* a7f08: mov x11, x10 */
  ARC_X_W(c, 11, ARC_X_R(c, 10));
  /* a7f0c: b.ne #0xa7f18 */
  if (ARC_COND(c, 1)) goto L_a7f18;
  /* a7f10: add x11, x8, #2 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* a7f14: str x11, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 11));
L_a7f18:;
  /* a7f18: cmp x9, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 11));
  /* a7f1c: b.ne #0xa7f74 */
  if (ARC_COND(c, 1)) goto L_a7f74;
  /* a7f20: b #0xa804c */
  goto L_a804c;
L_a7f24:;
  /* a7f24: mov x10, x11 */
  ARC_X_W(c, 10, ARC_X_R(c, 11));
  /* a7f28: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* a7f2c: b.eq #0xa804c */
  if (ARC_COND(c, 0)) goto L_a804c;
L_a7f30:;
  /* a7f30: ldrb w8, [x10] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 10)));
  /* a7f34: sub w8, w8, #0x3a */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(58)));
  /* a7f38: cmn w8, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(10), 0);
  /* a7f3c: b.lo #0xa804c */
  if (ARC_COND(c, 3)) goto L_a804c;
L_a7f40:;
  /* a7f40: ldrb w8, [x10] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 10)));
  /* a7f44: sub w8, w8, #0x3a */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(58)));
  /* a7f48: cmn w8, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(10), 0);
  /* a7f4c: b.lo #0xa7fac */
  if (ARC_COND(c, 3)) goto L_a7fac;
  /* a7f50: add x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* a7f54: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* a7f58: str x10, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 10));
  /* a7f5c: b.ne #0xa7f40 */
  if (ARC_COND(c, 1)) goto L_a7f40;
  /* a7f60: mov x12, x9 */
  ARC_X_W(c, 12, ARC_X_R(c, 9));
  /* a7f64: b #0xa7fb0 */
  goto L_a7fb0;
L_a7f68:;
  /* a7f68: mov x11, x10 */
  ARC_X_W(c, 11, ARC_X_R(c, 10));
  /* a7f6c: cmp x9, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 11));
  /* a7f70: b.eq #0xa804c */
  if (ARC_COND(c, 0)) goto L_a804c;
L_a7f74:;
  /* a7f74: ldrb w8, [x11] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 11)));
  /* a7f78: sub w8, w8, #0x3a */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(58)));
  /* a7f7c: cmn w8, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(10), 0);
  /* a7f80: b.lo #0xa804c */
  if (ARC_COND(c, 3)) goto L_a804c;
L_a7f84:;
  /* a7f84: ldrb w8, [x11] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 11)));
  /* a7f88: sub w8, w8, #0x3a */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(58)));
  /* a7f8c: cmn w8, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(10), 0);
  /* a7f90: b.lo #0xa7fe0 */
  if (ARC_COND(c, 3)) goto L_a7fe0;
  /* a7f94: add x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(1)));
  /* a7f98: cmp x11, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 9));
  /* a7f9c: str x11, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 11));
  /* a7fa0: b.ne #0xa7f84 */
  if (ARC_COND(c, 1)) goto L_a7f84;
  /* a7fa4: mov x12, x9 */
  ARC_X_W(c, 12, ARC_X_R(c, 9));
  /* a7fa8: b #0xa7fe4 */
  goto L_a7fe4;
L_a7fac:;
  /* a7fac: mov x12, x10 */
  ARC_X_W(c, 12, ARC_X_R(c, 10));
L_a7fb0:;
  /* a7fb0: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* a7fb4: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* a7fb8: b.eq #0xa8050 */
  if (ARC_COND(c, 0)) goto L_a8050;
  /* a7fbc: cmp x12, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 11));
  /* a7fc0: b.eq #0xa8050 */
  if (ARC_COND(c, 0)) goto L_a8050;
L_a7fc4:;
  /* a7fc4: ldrb w8, [x10] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 10)));
  /* a7fc8: cmp w8, #0x5f */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(95));
  /* a7fcc: b.ne #0xa804c */
  if (ARC_COND(c, 1)) goto L_a804c;
  /* a7fd0: add x9, x10, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* a7fd4: str x9, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 9));
  /* a7fd8: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* a7fdc: ret  */
  return;
L_a7fe0:;
  /* a7fe0: mov x12, x11 */
  ARC_X_W(c, 12, ARC_X_R(c, 11));
L_a7fe4:;
  /* a7fe4: cmp x11, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 9));
  /* a7fe8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* a7fec: b.eq #0xa8050 */
  if (ARC_COND(c, 0)) goto L_a8050;
  /* a7ff0: cmp x12, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 10));
  /* a7ff4: b.eq #0xa8050 */
  if (ARC_COND(c, 0)) goto L_a8050;
  /* a7ff8: ldrb w8, [x11] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 11)));
  /* a7ffc: cmp w8, #0x5f */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(95));
  /* a8000: b.ne #0xa804c */
  if (ARC_COND(c, 1)) goto L_a804c;
  /* a8004: add x12, x11, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 11) + UINT64_C(1)));
  /* a8008: cmp x12, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 9));
  /* a800c: str x12, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 12));
  /* a8010: b.eq #0xa8030 */
  if (ARC_COND(c, 0)) goto L_a8030;
  /* a8014: ldrb w8, [x12] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 12)));
  /* a8018: mov x10, x12 */
  ARC_X_W(c, 10, ARC_X_R(c, 12));
  /* a801c: cmp w8, #0x6e */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(110));
  /* a8020: b.ne #0xa8034 */
  if (ARC_COND(c, 1)) goto L_a8034;
  /* a8024: add x10, x11, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 11) + UINT64_C(2)));
  /* a8028: str x10, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 10));
  /* a802c: b #0xa8034 */
  goto L_a8034;
L_a8030:;
  /* a8030: mov x10, x12 */
  ARC_X_W(c, 10, ARC_X_R(c, 12));
L_a8034:;
  /* a8034: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* a8038: b.eq #0xa804c */
  if (ARC_COND(c, 0)) goto L_a804c;
  /* a803c: ldrb w8, [x10] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 10)));
  /* a8040: sub w8, w8, #0x3a */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(58)));
  /* a8044: cmn w8, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(10), 0);
  /* a8048: b.hs #0xa8058 */
  if (ARC_COND(c, 2)) goto L_a8058;
L_a804c:;
  /* a804c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
L_a8050:;
  /* a8050: mov w0, w8 */
  ARC_W_W(c, 0, ARC_W_R(c, 8));
  /* a8054: ret  */
  return;
L_a8058:;
  /* a8058: ldrb w8, [x10] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 10)));
  /* a805c: sub w8, w8, #0x3a */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(58)));
  /* a8060: cmn w8, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(10), 0);
  /* a8064: b.lo #0xa8080 */
  if (ARC_COND(c, 3)) goto L_a8080;
  /* a8068: add x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* a806c: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* a8070: str x10, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 10));
  /* a8074: b.ne #0xa8058 */
  if (ARC_COND(c, 1)) goto L_a8058;
  /* a8078: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
  /* a807c: b #0xa8084 */
  goto L_a8084;
L_a8080:;
  /* a8080: mov x11, x10 */
  ARC_X_W(c, 11, ARC_X_R(c, 10));
L_a8084:;
  /* a8084: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* a8088: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* a808c: b.eq #0xa8050 */
  if (ARC_COND(c, 0)) goto L_a8050;
  /* a8090: cmp x11, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 12));
  /* a8094: b.ne #0xa7fc4 */
  if (ARC_COND(c, 1)) goto L_a7fc4;
  /* a8098: b #0xa8050 */
  goto L_a8050;
}

void fn1_add1c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038639900));
  /* add1c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* add20: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* add24: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* add28: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* add2c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* add30: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* add34: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* add38: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* add3c: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* add40: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* add44: b.hi #0xadd68 */
  if (ARC_COND(c, 8)) goto L_add68;
  /* add48: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* add4c: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* add50: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(712020));
  fn1_1428a8(c);
  /* add54: cbz x0, #0xaddb4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_addb4;
  /* add58: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* add5c: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* add60: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* add64: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_add68:;
  /* add68: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* add6c: add x0, x21, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* add70: adrp x8, #0x14b000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1355776)));
  /* add74: add x8, x8, #0x4a0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1184)));
  /* add78: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* add7c: mov w9, #0x540 */
  ARC_W_W(c, 9, UINT64_C(1344));
  /* add80: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* add84: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* add88: strb wzr, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 31));
  /* add8c: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* add90: ldr q0, [x19] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 19)), arc_ld64(ARC_X_R(c, 19) + 8));
  /* add94: orr w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 9)));
  /* add98: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* add9c: str q0, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* adda0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* adda4: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* adda8: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* addac: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* addb0: ret  */
  return;
L_addb4:;
  /* addb4: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(712120));
  fn1_142488(c);
}

void fn1_b350c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038662412));
  /* b350c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b3510: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b3514: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b3518: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b351c: ldr x19, [x0, #0x18] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* b3520: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* b3524: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* b3528: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b352c: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b3530: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(734516));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b3534: ldurh w8, [x19, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 19) + INT64_C(9))));
  /* b3538: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b353c: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b3540: b.ne #0xb3554 */
  if (ARC_COND(c, 1)) goto L_b3554;
  /* b3544: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b3548: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b354c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b3550: ret  */
  return;
L_b3554:;
  /* b3554: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* b3558: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b355c: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b3560: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* b3564: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b3568: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b356c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b3570: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_b6ef4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038677236));
  /* b6ef4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b6ef8: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b6efc: stp x26, x25, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* b6f00: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* b6f04: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b6f08: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b6f0c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b6f10: ldp x9, x8, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* b6f14: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* b6f18: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b6f1c: b.eq #0xb704c */
  if (ARC_COND(c, 0)) goto L_b704c;
  /* b6f20: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* b6f24: mov w21, #0xa */
  ARC_W_W(c, 21, UINT64_C(10));
  /* b6f28: adrp x22, #0x14b000 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1355776)));
  /* b6f2c: add x22, x22, #0x8d8 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(2264)));
  /* b6f30: mov w23, #9 */
  ARC_W_W(c, 23, UINT64_C(9));
  /* b6f34: b #0xb6f80 */
  goto L_b6f80;
L_b6f38:;
  /* b6f38: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* b6f3c: add x0, x26, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 26) + ARC_X_R(c, 8)));
  /* b6f40: str x9, [x26, #8] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(8)), ARC_X_R(c, 9));
  /* b6f44: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b6f48: str x22, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* b6f4c: ldurh w9, [x0, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* b6f50: str x25, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 25));
  /* b6f54: and w8, w8, #0xfc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(4032)));
  /* b6f58: str x20, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 20));
  /* b6f5c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b6f60: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* b6f64: strb w23, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 23));
  /* b6f68: orr w8, w9, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) | ARC_W_R(c, 8)));
  /* b6f6c: str x24, [x0, #0x20] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(32)), ARC_X_R(c, 24));
  /* b6f70: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* b6f74: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* b6f78: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b6f7c: b.eq #0xb7058 */
  if (ARC_COND(c, 0)) goto L_b7058;
L_b6f80:;
  /* b6f80: ldrb w10, [x9] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 9)));
  /* b6f84: cmp w10, #0x42 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(66));
  /* b6f88: b.ne #0xb704c */
  if (ARC_COND(c, 1)) goto L_b704c;
  /* b6f8c: add x10, x9, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* b6f90: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* b6f94: str x10, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 10));
  /* b6f98: b.eq #0xb7054 */
  if (ARC_COND(c, 0)) goto L_b7054;
  /* b6f9c: ldrb w10, [x10] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 10)));
  /* b6fa0: sub w10, w10, #0x3a */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) - UINT64_C(58)));
  /* b6fa4: cmn w10, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 10), UINT64_C(10), 0);
  /* b6fa8: b.lo #0xb7054 */
  if (ARC_COND(c, 3)) goto L_b7054;
  /* b6fac: add x12, x9, #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* b6fb0: mov x24, xzr */
  ARC_X_W(c, 24, ARC_X_R(c, 31));
  /* b6fb4: mov x13, x12 */
  ARC_X_W(c, 13, ARC_X_R(c, 12));
L_b6fb8:;
  /* b6fb8: str x13, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 13));
  /* b6fbc: mov x9, x13 */
  ARC_X_W(c, 9, ARC_X_R(c, 13));
  /* b6fc0: mov x10, x24 */
  ARC_X_W(c, 10, ARC_X_R(c, 24));
  /* b6fc4: ldurb w11, [x13, #-1] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 13) + INT64_C(-1))));
  /* b6fc8: nop  */
  /* nop: no architectural effect here */
  /* b6fcc: madd x13, x24, x21, x11 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 11)) + ((uint64_t)(ARC_X_R(c, 24)) * (uint64_t)(ARC_X_R(c, 21)))));
  /* b6fd0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b6fd4: mov x25, x12 */
  ARC_X_W(c, 25, ARC_X_R(c, 12));
  /* b6fd8: sub x24, x13, #0x30 */
  ARC_X_W(c, 24, (ARC_X_R(c, 13) - UINT64_C(48)));
  /* b6fdc: b.eq #0xb6ff8 */
  if (ARC_COND(c, 0)) goto L_b6ff8;
  /* b6fe0: mov x13, x9 */
  ARC_X_W(c, 13, ARC_X_R(c, 9));
  /* b6fe4: ldrb w12, [x13], #1 */
  { const uint64_t _a = ARC_X_R(c, 13);
    ARC_X_W(c, 13, ARC_X_R(c, 13) + INT64_C(1));
    ARC_W_W(c, 12, arc_ld8(_a));
  }
  /* b6fe8: sub w12, w12, #0x30 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) - UINT64_C(48)));
  /* b6fec: cmp w12, #9 */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(9));
  /* b6ff0: add x12, x25, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 25) + UINT64_C(1)));
  /* b6ff4: b.ls #0xb6fb8 */
  if (ARC_COND(c, 9)) goto L_b6fb8;
L_b6ff8:;
  /* b6ff8: sub x8, x8, x25 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 25)));
  /* b6ffc: cmp x8, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 24));
  /* b7000: b.lo #0xb7054 */
  if (ARC_COND(c, 3)) goto L_b7054;
  /* b7004: madd x8, x10, x21, x11 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 11)) + ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 21)))));
  /* b7008: add x8, x9, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ARC_X_R(c, 8)));
  /* b700c: sub x8, x8, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(48)));
  /* b7010: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* b7014: cbz x24, #0xb7054 */
  if ((ARC_X_R(c, 24)) == 0) goto L_b7054;
  /* b7018: ldr x26, [x19, #0x1330] */
  ARC_X_W(c, 26, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* b701c: ldr x8, [x26, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(8))));
  /* b7020: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* b7024: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b7028: b.hi #0xb6f38 */
  if (ARC_COND(c, 8)) goto L_b6f38;
  /* b702c: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b7030: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(749620));
  fn1_1428a8(c);
  /* b7034: cbz x0, #0xb7074 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b7074;
  /* b7038: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b703c: stp x26, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b7040: mov x26, x0 */
  ARC_X_W(c, 26, ARC_X_R(c, 0));
  /* b7044: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
  /* b7048: b #0xb6f38 */
  goto L_b6f38;
L_b704c:;
  /* b704c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b7050: b #0xb7058 */
  goto L_b7058;
L_b7054:;
  /* b7054: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
L_b7058:;
  /* b7058: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b705c: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* b7060: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* b7064: ldp x26, x25, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* b7068: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b706c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b7070: ret  */
  return;
L_b7074:;
  /* b7074: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(749688));
  fn1_142488(c);
}

void fn1_b9af0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038688496));
  /* b9af0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b9af4: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b9af8: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b9afc: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b9b00: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b9b04: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* b9b08: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b9b0c: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* b9b10: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* b9b14: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b9b18: b.hi #0xb9b3c */
  if (ARC_COND(c, 8)) goto L_b9b3c;
  /* b9b1c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b9b20: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b9b24: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(760616));
  fn1_1428a8(c);
  /* b9b28: cbz x0, #0xb9b98 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b9b98;
  /* b9b2c: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b9b30: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b9b34: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b9b38: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_b9b3c:;
  /* b9b3c: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* b9b40: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b9b44: add x20, x21, x8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* b9b48: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* b9b4c: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(760656));
  fn1_142860(c);
  /* b9b50: adrp x9, #0x149000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1347584)));
  /* b9b54: add x9, x9, #0xc10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3088)));
  /* b9b58: mov w11, #0x540 */
  ARC_W_W(c, 11, UINT64_C(1344));
  /* b9b5c: str x9, [x20, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* b9b60: ldurh w9, [x20, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b9b64: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* b9b68: mov w10, #8 */
  ARC_W_W(c, 10, UINT64_C(8));
  /* b9b6c: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* b9b70: strb w10, [x20, #8] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(8)), ARC_W_R(c, 10));
  /* b9b74: orr w9, w9, w11 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 11)));
  /* b9b78: stp x19, x8, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* b9b7c: sturh w9, [x20, #9] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(9)), ARC_W_R(c, 9));
  /* b9b80: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b9b84: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b9b88: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b9b8c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b9b90: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b9b94: ret  */
  return;
L_b9b98:;
  /* b9b98: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(760732));
  fn1_142488(c);
}

void fn1_bce7c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038701692));
  /* bce7c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bce80: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bce84: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* bce88: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bce8c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bce90: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* bce94: ldr x0, [x0, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* bce98: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* bce9c: ldrb w8, [x0, #8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(8))));
  /* bcea0: cmp w8, #0xb */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(11));
  /* bcea4: b.ne #0xbcefc */
  if (ARC_COND(c, 1)) goto L_bcefc;
  /* bcea8: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* bceac: ldrb w9, [x8, #8] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(8))));
  /* bceb0: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* bceb4: b.ne #0xbcefc */
  if (ARC_COND(c, 1)) goto L_bcefc;
  /* bceb8: ldr x9, [x8, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* bcebc: cmp x9, #0xb */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(11));
  /* bcec0: b.ne #0xbcefc */
  if (ARC_COND(c, 1)) goto L_bcefc;
  /* bcec4: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* bcec8: mov x10, #0x626f */
  ARC_X_W(c, 10, UINT64_C(25199));
  /* bcecc: movk x10, #0x636a, lsl #16 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1667891200)));
  /* bced0: ldr x9, [x8] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 8)));
  /* bced4: movk x10, #0x6f5f, lsl #32 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446462603027808255)) | UINT64_C(122453812576256)));
  /* bced8: ldur x8, [x8, #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3))));
  /* bcedc: movk x10, #0x6a62, lsl #48 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(281474976710655)) | UINT64_C(7665689515738005504)));
  /* bcee0: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* bcee4: mov x9, #0x5f63 */
  ARC_X_W(c, 9, UINT64_C(24419));
  /* bcee8: movk x9, #0x626f, lsl #16 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1651441664)));
  /* bceec: movk x9, #0x656a, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(111505940938752)));
  /* bcef0: movk x9, #0x7463, lsl #48 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(281474976710655)) | UINT64_C(8386546931093995520)));
  /* bcef4: ccmp x8, x9, #0, eq */
  if (ARC_COND(c, 0)) { (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* bcef8: b.eq #0xbd08c */
  if (ARC_COND(c, 0)) goto L_bd08c;
L_bcefc:;
  /* bcefc: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* bcf00: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bcf04: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* bcf08: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(773900));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bcf0c: ldr x0, [x20, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* bcf10: ldrb w8, [x0, #0xa] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(10))));
  /* bcf14: ands w8, w8, #3 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 8) & UINT64_C(3));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 8, _r); }
  /* bcf18: b.eq #0xbcf38 */
  if (ARC_COND(c, 0)) goto L_bcf38;
  /* bcf1c: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* bcf20: b.ne #0xbcf84 */
  if (ARC_COND(c, 1)) goto L_bcf84;
  /* bcf24: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* bcf28: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bcf2c: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* bcf30: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(773940));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bcf34: tbz w0, #0, #0xbcf84 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_bcf84;
L_bcf38:;
  /* bcf38: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* bcf3c: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* bcf40: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bcf44: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* bcf48: b.ls #0xbcf70 */
  if (ARC_COND(c, 9)) goto L_bcf70;
  /* bcf4c: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* bcf50: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* bcf54: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bcf58: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bcf5c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bcf60: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(773988));
  fn1_142878(c);
  /* bcf64: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bcf68: cbz x0, #0xbd19c */
  if ((ARC_X_R(c, 0)) == 0) goto L_bd19c;
  /* bcf6c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_bcf70:;
  /* bcf70: mov w9, #0x20 */
  ARC_W_W(c, 9, UINT64_C(32));
  /* bcf74: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* bcf78: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bcf7c: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bcf80: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_bcf84:;
  /* bcf84: ldr x0, [x20, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* bcf88: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* bcf8c: ubfx w9, w8, #8, #2 */
  ARC_W_W(c, 9, (((uint32_t)(ARC_W_R(c, 8)) >> 8) & UINT64_C(3)));
  /* bcf90: cbz w9, #0xbcfe0 */
  if ((ARC_W_R(c, 9)) == 0) goto L_bcfe0;
  /* bcf94: cmp w9, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(2));
  /* bcf98: b.ne #0xbcfb8 */
  if (ARC_COND(c, 1)) goto L_bcfb8;
  /* bcf9c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* bcfa0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bcfa4: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* bcfa8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(774060));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bcfac: tbnz w0, #0, #0xbcfe0 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_bcfe0;
  /* bcfb0: ldr x0, [x20, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* bcfb4: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
L_bcfb8:;
  /* bcfb8: lsr w8, w8, #0xa */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(10)) & 31)));
  /* bcfbc: ands w8, w8, #3 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 8) & UINT64_C(3));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 8, _r); }
  /* bcfc0: b.eq #0xbcfe0 */
  if (ARC_COND(c, 0)) goto L_bcfe0;
  /* bcfc4: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* bcfc8: b.ne #0xbd02c */
  if (ARC_COND(c, 1)) goto L_bd02c;
  /* bcfcc: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* bcfd0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bcfd4: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* bcfd8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(774108));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bcfdc: tbz w0, #0, #0xbd02c */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_bd02c;
L_bcfe0:;
  /* bcfe0: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* bcfe4: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* bcfe8: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bcfec: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* bcff0: b.ls #0xbd018 */
  if (ARC_COND(c, 9)) goto L_bd018;
  /* bcff4: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* bcff8: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* bcffc: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bd000: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bd004: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bd008: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(774156));
  fn1_142878(c);
  /* bd00c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bd010: cbz x0, #0xbd198 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bd198;
  /* bd014: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_bd018:;
  /* bd018: mov w9, #0x28 */
  ARC_W_W(c, 9, UINT64_C(40));
  /* bd01c: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* bd020: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bd024: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bd028: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_bd02c:;
  /* bd02c: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* bd030: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* bd034: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bd038: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* bd03c: b.ls #0xbd064 */
  if (ARC_COND(c, 9)) goto L_bd064;
  /* bd040: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* bd044: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* bd048: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bd04c: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bd050: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bd054: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(774232));
  fn1_142878(c);
  /* bd058: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bd05c: cbz x0, #0xbd194 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bd194;
  /* bd060: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_bd064:;
  /* bd064: mov w9, #0x2a */
  ARC_W_W(c, 9, UINT64_C(42));
L_bd068:;
  /* bd068: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* bd06c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bd070: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bd074: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* bd078: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bd07c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* bd080: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bd084: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bd088: ret  */
  return;
L_bd08c:;
  /* bd08c: ldp x9, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* bd090: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* bd094: add x11, x9, #3 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(3)));
  /* bd098: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* bd09c: b.ls #0xbd0d4 */
  if (ARC_COND(c, 9)) goto L_bd0d4;
  /* bd0a0: lsl x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* bd0a4: add x9, x9, #0x3e3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(995)));
  /* bd0a8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* bd0ac: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* bd0b0: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* bd0b4: csel x1, x10, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* bd0b8: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bd0bc: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(774336));
  fn1_142878(c);
  /* bd0c0: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bd0c4: cbz x0, #0xbd1a0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bd1a0;
  /* bd0c8: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bd0cc: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* bd0d0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
L_bd0d4:;
  /* bd0d4: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* bd0d8: mov w9, #0x3c */
  ARC_W_W(c, 9, UINT64_C(60));
  /* bd0dc: mov w10, #0x6469 */
  ARC_W_W(c, 10, UINT64_C(25705));
  /* bd0e0: strb w9, [x8, #2] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(2)), ARC_W_R(c, 9));
  /* bd0e4: strh w10, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* bd0e8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bd0ec: add x8, x8, #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3)));
  /* bd0f0: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* bd0f4: ldr x20, [x0, #0x20] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 0) + INT64_C(32))));
  /* bd0f8: cbz x20, #0xbd154 */
  if ((ARC_X_R(c, 20)) == 0) goto L_bd154;
  /* bd0fc: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* bd100: add x9, x20, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* bd104: ldr x21, [x0, #0x18] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* bd108: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* bd10c: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* bd110: b.ls #0xbd138 */
  if (ARC_COND(c, 9)) goto L_bd138;
  /* bd114: lsl x8, x10, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* bd118: add x9, x9, #0x3e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(992)));
  /* bd11c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* bd120: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* bd124: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bd128: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(774444));
  fn1_142878(c);
  /* bd12c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bd130: cbz x0, #0xbd1a8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bd1a8;
  /* bd134: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_bd138:;
  /* bd138: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* bd13c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* bd140: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* bd144: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(774472));
  fn1_1449d8(c);
  /* bd148: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bd14c: add x8, x8, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 20)));
  /* bd150: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_bd154:;
  /* bd154: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* bd158: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bd15c: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* bd160: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* bd164: b.ls #0xbd18c */
  if (ARC_COND(c, 9)) goto L_bd18c;
  /* bd168: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* bd16c: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* bd170: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bd174: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bd178: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bd17c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(774528));
  fn1_142878(c);
  /* bd180: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bd184: cbz x0, #0xbd1a4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bd1a4;
  /* bd188: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_bd18c:;
  /* bd18c: mov w9, #0x3e */
  ARC_W_W(c, 9, UINT64_C(62));
  /* bd190: b #0xbd068 */
  goto L_bd068;
L_bd194:;
  /* bd194: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(774552));
  fn1_1427b8(c);
L_bd198:;
  /* bd198: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(774556));
  fn1_1427b8(c);
L_bd19c:;
  /* bd19c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(774560));
  fn1_1427b8(c);
L_bd1a0:;
  /* bd1a0: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(774564));
  fn1_1427b8(c);
L_bd1a4:;
  /* bd1a4: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(774568));
  fn1_1427b8(c);
L_bd1a8:;
  /* bd1a8: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(774572));
  fn1_1427b8(c);
}

void fn1_c494c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038733132));
  /* c494c: bti c */
  /* bti: no architectural effect here */
  /* c4950: sub x9, x1, x0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* c4954: mov w8, #0x7e */
  ARC_W_W(c, 8, UINT64_C(126));
  /* c4958: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* c495c: asr x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63))));
  /* c4960: clz x9, x9 */
  ARC_X_W(c, 9, arc_clz64(ARC_X_R(c, 9)));
  /* c4964: sub x2, x8, x9, lsl #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) - ((uint64_t)(ARC_X_R(c, 9)) << 1)));
  /* c4968: b #0xc496c */
  fn1_c496c(c); return;
}

void fn1_d6de8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038808040));
  /* d6de8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d6dec: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d6df0: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d6df4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* d6df8: cbz w1, #0xd7084 */
  if ((ARC_W_R(c, 1)) == 0) goto L_d7084;
  /* d6dfc: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* d6e00: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d6e04: cmp w1, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(0));
  /* d6e08: b.le #0xd6e44 */
  if (ARC_COND(c, 13)) goto L_d6e44;
  /* d6e0c: cmp w20, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 20), UINT64_C(5));
  /* d6e10: b.lo #0xd6e2c */
  if (ARC_COND(c, 3)) goto L_d6e2c;
L_d6e14:;
  /* d6e14: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d6e18: mov w1, #4 */
  ARC_W_W(c, 1, UINT64_C(4));
  /* d6e1c: bl #0xd7094 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(880160));
  fn1_d7094(c);
  /* d6e20: sub w20, w20, #4 */
  ARC_W_W(c, 20, (ARC_W_R(c, 20) - UINT64_C(4)));
  /* d6e24: cmp w20, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 20), UINT64_C(4));
  /* d6e28: b.hi #0xd6e14 */
  if (ARC_COND(c, 8)) goto L_d6e14;
L_d6e2c:;
  /* d6e2c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d6e30: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* d6e34: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d6e38: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d6e3c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d6e40: b #0xd7094 */
  fn1_d7094(c); return;
L_d6e44:;
  /* d6e44: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* d6e48: cmn w20, #5 */
  (void)arc_add32(c, ARC_W_R(c, 20), UINT64_C(5), 0);
  /* d6e4c: b.hi #0xd6f74 */
  if (ARC_COND(c, 8)) goto L_d6f74;
  /* d6e50: ldr w12, [x19, #4] */
  ARC_W_W(c, 12, arc_ld32((ARC_X_R(c, 19) + INT64_C(4))));
  /* d6e54: add x9, x19, #9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(9)));
  /* d6e58: mov w10, #0xa */
  ARC_W_W(c, 10, UINT64_C(10));
  /* d6e5c: mov w11, #1 */
  ARC_W_W(c, 11, UINT64_C(1));
  /* d6e60: b #0xd6e88 */
  goto L_d6e88;
L_d6e64:;
  /* d6e64: mov w14, w8 */
  ARC_W_W(c, 14, ARC_W_R(c, 8));
  /* d6e68: sub w12, w12, w13 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) - ARC_W_R(c, 13)));
  /* d6e6c: add x15, x14, x9 */
  ARC_X_W(c, 15, (ARC_X_R(c, 14) + ARC_X_R(c, 9)));
  /* d6e70: add w12, w12, #1 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) + UINT64_C(1)));
  /* d6e74: ldurb w15, [x15, #-1] */
  ARC_W_W(c, 15, arc_ld8((ARC_X_R(c, 15) + INT64_C(-1))));
  /* d6e78: cbz w15, #0xd6f4c */
  if ((ARC_W_R(c, 15)) == 0) goto L_d6f4c;
L_d6e7c:;
  /* d6e7c: cmn w20, #8 */
  (void)arc_add32(c, ARC_W_R(c, 20), UINT64_C(8), 0);
  /* d6e80: add w20, w20, #4 */
  ARC_W_W(c, 20, (ARC_W_R(c, 20) + UINT64_C(4)));
  /* d6e84: b.hs #0xd6f70 */
  if (ARC_COND(c, 2)) goto L_d6f70;
L_d6e88:;
  /* d6e88: mov w13, wzr */
  ARC_W_W(c, 13, ARC_W_R(c, 31));
  /* d6e8c: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* d6e90: b #0xd6eac */
  goto L_d6eac;
L_d6e94:;
  /* d6e94: ldrb w13, [x9, w16, uxtw] */
  ARC_W_W(c, 13, arc_ld8((ARC_X_R(c, 9) + ((uint64_t)(uint32_t)(ARC_W_R(c, 16))))));
L_d6e98:;
  /* d6e98: nop  */
  /* nop: no architectural effect here */
  /* d6e9c: madd x14, x14, x10, x13 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 13)) + ((uint64_t)(ARC_X_R(c, 14)) * (uint64_t)(ARC_X_R(c, 10)))));
  /* d6ea0: add w13, w16, #1 */
  ARC_W_W(c, 13, (ARC_W_R(c, 16) + UINT64_C(1)));
  /* d6ea4: cmp x14, #0x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(16));
  /* d6ea8: b.hs #0xd6ec0 */
  if (ARC_COND(c, 2)) goto L_d6ec0;
L_d6eac:;
  /* d6eac: mov w16, w13 */
  ARC_W_W(c, 16, ARC_W_R(c, 13));
  /* d6eb0: cmp w13, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 8));
  /* d6eb4: b.lo #0xd6e94 */
  if (ARC_COND(c, 3)) goto L_d6e94;
  /* d6eb8: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* d6ebc: b #0xd6e98 */
  goto L_d6e98;
L_d6ec0:;
  /* d6ec0: subs w15, w8, w13 */
  ARC_W_W(c, 15, arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 13)));
  /* d6ec4: b.ls #0xd6f0c */
  if (ARC_COND(c, 9)) goto L_d6f0c;
  /* d6ec8: mvn w16, w16 */
  ARC_W_W(c, 16, (~(uint32_t)(ARC_W_R(c, 16))));
  /* d6ecc: mov x17, x9 */
  ARC_X_W(c, 17, ARC_X_R(c, 9));
  /* d6ed0: add w16, w16, w8 */
  ARC_W_W(c, 16, (ARC_W_R(c, 16) + ARC_W_R(c, 8)));
L_d6ed4:;
  /* d6ed4: and x0, x14, #0xf */
  ARC_X_W(c, 0, (ARC_X_R(c, 14) & UINT64_C(15)));
  /* d6ed8: ldrb w1, [x17, w13, uxtw] */
  ARC_W_W(c, 1, arc_ld8((ARC_X_R(c, 17) + ((uint64_t)(uint32_t)(ARC_W_R(c, 13))))));
  /* d6edc: lsr x2, x14, #4 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 14)) >> ((UINT64_C(4)) & 63)));
  /* d6ee0: umaddl x14, w0, w10, x1 */
  ARC_X_W(c, 14, (((uint64_t)(ARC_X_R(c, 1))) + (((uint64_t)(uint32_t)(ARC_W_R(c, 0))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 10))))));
  /* d6ee4: subs w16, w16, #1 */
  ARC_W_W(c, 16, arc_sub32(c, ARC_W_R(c, 16), UINT64_C(1)));
  /* d6ee8: strb w2, [x17], #1 */
  { const uint64_t _a = ARC_X_R(c, 17);
    ARC_X_W(c, 17, ARC_X_R(c, 17) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 2));
  }
  /* d6eec: b.ne #0xd6ed4 */
  if (ARC_COND(c, 1)) goto L_d6ed4;
  /* d6ef0: cbnz x14, #0xd6f10 */
  if ((ARC_X_R(c, 14)) != 0) goto L_d6f10;
  /* d6ef4: cmp w8, w13 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 13));
  /* d6ef8: mov w8, w15 */
  ARC_W_W(c, 8, ARC_W_R(c, 15));
  /* d6efc: b.ne #0xd6e64 */
  if (ARC_COND(c, 1)) goto L_d6e64;
  /* d6f00: mov w12, wzr */
  ARC_W_W(c, 12, ARC_W_R(c, 31));
  /* d6f04: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
  /* d6f08: b #0xd6e7c */
  goto L_d6e7c;
L_d6f0c:;
  /* d6f0c: mov w15, wzr */
  ARC_W_W(c, 15, ARC_W_R(c, 31));
L_d6f10:;
  /* d6f10: mov w8, w15 */
  ARC_W_W(c, 8, ARC_W_R(c, 15));
  /* d6f14: b #0xd6f34 */
  goto L_d6f34;
L_d6f18:;
  /* d6f18: lsr x15, x14, #4 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 14)) >> ((UINT64_C(4)) & 63)));
  /* d6f1c: strb w15, [x9, w8, uxtw] */
  arc_st8((ARC_X_R(c, 9) + ((uint64_t)(uint32_t)(ARC_W_R(c, 8)))), ARC_W_R(c, 15));
  /* d6f20: add w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(1)));
L_d6f24:;
  /* d6f24: and x15, x14, #0xf */
  ARC_X_W(c, 15, (ARC_X_R(c, 14) & UINT64_C(15)));
  /* d6f28: add x14, x15, x15, lsl #2 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) + ((uint64_t)(ARC_X_R(c, 15)) << 2)));
  /* d6f2c: lsl x14, x14, #1 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(1)) & 63)));
  /* d6f30: cbz x15, #0xd6e64 */
  if ((ARC_X_R(c, 15)) == 0) goto L_d6e64;
L_d6f34:;
  /* d6f34: cmp w8, #0x31f */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(799));
  /* d6f38: b.ls #0xd6f18 */
  if (ARC_COND(c, 9)) goto L_d6f18;
  /* d6f3c: cmp x14, #0x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(16));
  /* d6f40: b.lo #0xd6f24 */
  if (ARC_COND(c, 3)) goto L_d6f24;
  /* d6f44: strb w11, [x19, #8] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(8)), ARC_W_R(c, 11));
  /* d6f48: b #0xd6f24 */
  goto L_d6f24;
L_d6f4c:;
  /* d6f4c: sub x13, x14, #2 */
  ARC_X_W(c, 13, (ARC_X_R(c, 14) - UINT64_C(2)));
L_d6f50:;
  /* d6f50: subs w8, w8, #1 */
  ARC_W_W(c, 8, arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1)));
  /* d6f54: b.eq #0xd6f68 */
  if (ARC_COND(c, 0)) goto L_d6f68;
  /* d6f58: ldrb w14, [x9, w13, uxtw] */
  ARC_W_W(c, 14, arc_ld8((ARC_X_R(c, 9) + ((uint64_t)(uint32_t)(ARC_W_R(c, 13))))));
  /* d6f5c: sub x13, x13, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(1)));
  /* d6f60: cbz w14, #0xd6f50 */
  if ((ARC_W_R(c, 14)) == 0) goto L_d6f50;
  /* d6f64: b #0xd6e7c */
  goto L_d6e7c;
L_d6f68:;
  /* d6f68: mov w12, wzr */
  ARC_W_W(c, 12, ARC_W_R(c, 31));
  /* d6f6c: b #0xd6e7c */
  goto L_d6e7c;
L_d6f70:;
  /* d6f70: str w12, [x19, #4] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(4)), ARC_W_R(c, 12));
L_d6f74:;
  /* d6f74: mov w13, wzr */
  ARC_W_W(c, 13, ARC_W_R(c, 31));
  /* d6f78: mov x11, xzr */
  ARC_X_W(c, 11, ARC_X_R(c, 31));
  /* d6f7c: neg w10, w20 */
  ARC_W_W(c, 10, ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 20))));
  /* d6f80: add x9, x19, #9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(9)));
  /* d6f84: mov w12, #0xa */
  ARC_W_W(c, 12, UINT64_C(10));
  /* d6f88: b #0xd6fa4 */
  goto L_d6fa4;
L_d6f8c:;
  /* d6f8c: ldrb w14, [x9, w13, uxtw] */
  ARC_W_W(c, 14, arc_ld8((ARC_X_R(c, 9) + ((uint64_t)(uint32_t)(ARC_W_R(c, 13))))));
L_d6f90:;
  /* d6f90: nop  */
  /* nop: no architectural effect here */
  /* d6f94: madd x11, x11, x12, x14 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 14)) + ((uint64_t)(ARC_X_R(c, 11)) * (uint64_t)(ARC_X_R(c, 12)))));
  /* d6f98: add w13, w13, #1 */
  ARC_W_W(c, 13, (ARC_W_R(c, 13) + UINT64_C(1)));
  /* d6f9c: lsr x14, x11, x10 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 11)) >> ((ARC_X_R(c, 10)) & 63)));
  /* d6fa0: cbnz x14, #0xd6fb4 */
  if ((ARC_X_R(c, 14)) != 0) goto L_d6fb4;
L_d6fa4:;
  /* d6fa4: cmp w13, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 8));
  /* d6fa8: b.lo #0xd6f8c */
  if (ARC_COND(c, 3)) goto L_d6f8c;
  /* d6fac: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* d6fb0: b #0xd6f90 */
  goto L_d6f90;
L_d6fb4:;
  /* d6fb4: ldr w12, [x19, #4] */
  ARC_W_W(c, 12, arc_ld32((ARC_X_R(c, 19) + INT64_C(4))));
  /* d6fb8: mov x14, #-1 */
  ARC_X_W(c, 14, UINT64_C(18446744073709551615));
  /* d6fbc: lsl x14, x14, x10 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 14)) << ((ARC_X_R(c, 10)) & 63)));
  /* d6fc0: sub w12, w12, w13 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) - ARC_W_R(c, 13)));
  /* d6fc4: add w15, w12, #1 */
  ARC_W_W(c, 15, (ARC_W_R(c, 12) + UINT64_C(1)));
  /* d6fc8: subs w12, w8, w13 */
  ARC_W_W(c, 12, arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 13)));
  /* d6fcc: mvn x14, x14 */
  ARC_X_W(c, 14, (~(uint64_t)(ARC_X_R(c, 14))));
  /* d6fd0: str w15, [x19, #4] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(4)), ARC_W_R(c, 15));
  /* d6fd4: b.ls #0xd7014 */
  if (ARC_COND(c, 9)) goto L_d7014;
  /* d6fd8: mov w15, #0xa */
  ARC_W_W(c, 15, UINT64_C(10));
  /* d6fdc: mov x16, x9 */
  ARC_X_W(c, 16, ARC_X_R(c, 9));
  /* d6fe0: mov w17, w12 */
  ARC_W_W(c, 17, ARC_W_R(c, 12));
L_d6fe4:;
  /* d6fe4: and x0, x11, x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 11) & ARC_X_R(c, 14)));
  /* d6fe8: ldrb w1, [x16, w13, uxtw] */
  ARC_W_W(c, 1, arc_ld8((ARC_X_R(c, 16) + ((uint64_t)(uint32_t)(ARC_W_R(c, 13))))));
  /* d6fec: lsr x2, x11, x10 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 11)) >> ((ARC_X_R(c, 10)) & 63)));
  /* d6ff0: madd x11, x0, x15, x1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 1)) + ((uint64_t)(ARC_X_R(c, 0)) * (uint64_t)(ARC_X_R(c, 15)))));
  /* d6ff4: subs w17, w17, #1 */
  ARC_W_W(c, 17, arc_sub32(c, ARC_W_R(c, 17), UINT64_C(1)));
  /* d6ff8: strb w2, [x16], #1 */
  { const uint64_t _a = ARC_X_R(c, 16);
    ARC_X_W(c, 16, ARC_X_R(c, 16) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 2));
  }
  /* d6ffc: b.ne #0xd6fe4 */
  if (ARC_COND(c, 1)) goto L_d6fe4;
  /* d7000: cbnz x11, #0xd701c */
  if ((ARC_X_R(c, 11)) != 0) goto L_d701c;
  /* d7004: cmp w8, w13 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 13));
  /* d7008: str w12, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 12));
  /* d700c: b.ne #0xd7058 */
  if (ARC_COND(c, 1)) goto L_d7058;
  /* d7010: b #0xd7080 */
  goto L_d7080;
L_d7014:;
  /* d7014: cbz x11, #0xd707c */
  if ((ARC_X_R(c, 11)) == 0) goto L_d707c;
  /* d7018: mov w12, wzr */
  ARC_W_W(c, 12, ARC_W_R(c, 31));
L_d701c:;
  /* d701c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* d7020: b #0xd703c */
  goto L_d703c;
L_d7024:;
  /* d7024: strb w13, [x9, w12, uxtw] */
  arc_st8((ARC_X_R(c, 9) + ((uint64_t)(uint32_t)(ARC_W_R(c, 12)))), ARC_W_R(c, 13));
  /* d7028: add w12, w12, #1 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) + UINT64_C(1)));
L_d702c:;
  /* d702c: and x13, x11, x14 */
  ARC_X_W(c, 13, (ARC_X_R(c, 11) & ARC_X_R(c, 14)));
  /* d7030: add x11, x13, x13, lsl #2 */
  ARC_X_W(c, 11, (ARC_X_R(c, 13) + ((uint64_t)(ARC_X_R(c, 13)) << 2)));
  /* d7034: lsl x11, x11, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 11)) << ((UINT64_C(1)) & 63)));
  /* d7038: cbz x13, #0xd7054 */
  if ((ARC_X_R(c, 13)) == 0) goto L_d7054;
L_d703c:;
  /* d703c: lsr x13, x11, x10 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 11)) >> ((ARC_X_R(c, 10)) & 63)));
  /* d7040: cmp w12, #0x31f */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(799));
  /* d7044: b.ls #0xd7024 */
  if (ARC_COND(c, 9)) goto L_d7024;
  /* d7048: cbz x13, #0xd702c */
  if ((ARC_X_R(c, 13)) == 0) goto L_d702c;
  /* d704c: strb w8, [x19, #8] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(8)), ARC_W_R(c, 8));
  /* d7050: b #0xd702c */
  goto L_d702c;
L_d7054:;
  /* d7054: str w12, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 12));
L_d7058:;
  /* d7058: mov w8, w12 */
  ARC_W_W(c, 8, ARC_W_R(c, 12));
  /* d705c: sub x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(1)));
L_d7060:;
  /* d7060: ldrb w10, [x9, w8, uxtw] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 9) + ((uint64_t)(uint32_t)(ARC_W_R(c, 8))))));
  /* d7064: cbnz w10, #0xd7084 */
  if ((ARC_W_R(c, 10)) != 0) goto L_d7084;
  /* d7068: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* d706c: sub x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* d7070: cmn w8, #1 */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(1), 0);
  /* d7074: b.ne #0xd7060 */
  if (ARC_COND(c, 1)) goto L_d7060;
  /* d7078: b #0xd7080 */
  goto L_d7080;
L_d707c:;
  /* d707c: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
L_d7080:;
  /* d7080: str wzr, [x19, #4] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(4)), ARC_W_R(c, 31));
L_d7084:;
  /* d7084: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d7088: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d708c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d7090: ret  */
  return;
}

void fn1_da620(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038822432));
  /* da620: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* da624: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* da628: str x25, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 25));
  /* da62c: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* da630: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* da634: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* da638: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* da63c: ldp x8, x11, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* da640: mov w9, #0x16 */
  ARC_W_W(c, 9, UINT64_C(22));
  /* da644: ldrb w10, [x0] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 0)));
  /* da648: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* da64c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* da650: and x12, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 12, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* da654: tst w10, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1)));
  /* da658: ubfx x10, x8, #1, #7 */
  ARC_X_W(c, 10, (((uint64_t)(ARC_X_R(c, 8)) >> 1) & UINT64_C(127)));
  /* da65c: sub x25, x12, #1 */
  ARC_X_W(c, 25, (ARC_X_R(c, 12) - UINT64_C(1)));
  /* da660: csel x24, x9, x25, eq */
  ARC_X_W(c, 24, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 25)));
  /* da664: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* da668: csel x23, x10, x11, eq */
  ARC_X_W(c, 23, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 11)));
  /* da66c: cmp x1, #0x16 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(22));
  /* da670: b.ls #0xda690 */
  if (ARC_COND(c, 9)) goto L_da690;
  /* da674: cmp x20, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 24));
  /* da678: and w22, w8, #0xff */
  ARC_W_W(c, 22, (ARC_W_R(c, 8) & UINT64_C(255)));
  /* da67c: b.ls #0xda708 */
  if (ARC_COND(c, 9)) goto L_da708;
  /* da680: add x0, x20, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(1)));
  /* da684: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(894600));
  fn1_1428f0(c);
  /* da688: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* da68c: b #0xda74c */
  goto L_da74c;
L_da690:;
  /* da690: ldr x22, [x19, #0x10] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* da694: add x21, x19, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* da698: mov w25, #1 */
  ARC_W_W(c, 25, UINT64_C(1));
  /* da69c: adds x2, x23, #1 */
  ARC_X_W(c, 2, arc_add64(c, ARC_X_R(c, 23), UINT64_C(1), 0));
  /* da6a0: b.hs #0xda6b0 */
  if (ARC_COND(c, 2)) goto L_da6b0;
L_da6a4:;
  /* da6a4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* da6a8: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* da6ac: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(894640));
  fn1_1449f0(c);
L_da6b0:;
  /* da6b0: tbnz w25, #0, #0xda6d0 */
  if (((ARC_W_R(c, 25)) >> 0 & 1) != 0) goto L_da6d0;
  /* da6b4: cmp x20, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(23));
  /* da6b8: b.lo #0xda6e4 */
  if (ARC_COND(c, 3)) goto L_da6e4;
L_da6bc:;
  /* da6bc: add x8, x20, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + UINT64_C(1)));
  /* da6c0: str x21, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 21));
  /* da6c4: orr x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(1)));
  /* da6c8: stp x8, x23, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* da6cc: b #0xda6ec */
  goto L_da6ec;
L_da6d0:;
  /* da6d0: add x1, x24, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(1)));
  /* da6d4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* da6d8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(894684));
  fn1_142608(c);
  /* da6dc: cmp x20, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(23));
  /* da6e0: b.hs #0xda6bc */
  if (ARC_COND(c, 2)) goto L_da6bc;
L_da6e4:;
  /* da6e4: lsl w8, w23, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 23)) << ((UINT64_C(1)) & 31)));
  /* da6e8: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_da6ec:;
  /* da6ec: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* da6f0: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* da6f4: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* da6f8: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* da6fc: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* da700: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* da704: ret  */
  return;
L_da708:;
  /* da708: add x0, x20, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(1)));
  /* da70c: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(894736));
  fn1_1428f0(c);
  /* da710: tst w22, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 22) & UINT64_C(1)));
  /* da714: mov w8, #0x16 */
  ARC_W_W(c, 8, UINT64_C(22));
  /* da718: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* da71c: csel x8, x8, x25, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 25)));
  /* da720: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* da724: b.ls #0xda74c */
  if (ARC_COND(c, 9)) goto L_da74c;
  /* da728: add x1, x20, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(1)));
  /* da72c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* da730: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* da734: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* da738: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* da73c: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* da740: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* da744: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* da748: b #0x142608 */
  fn1_142608(c); return;
L_da74c:;
  /* da74c: ldr x8, [x19, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* da750: ands w25, w22, #1 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 22) & UINT64_C(1));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 25, _r); }
  /* da754: csinc x22, x8, x19, ne */
  ARC_X_W(c, 22, (ARC_COND(c, 1) ? (ARC_X_R(c, 8)) : ((ARC_X_R(c, 19)) + 1)));
  /* da758: adds x2, x23, #1 */
  ARC_X_W(c, 2, arc_add64(c, ARC_X_R(c, 23), UINT64_C(1), 0));
  /* da75c: b.lo #0xda6a4 */
  if (ARC_COND(c, 3)) goto L_da6a4;
  /* da760: b #0xda6b0 */
  goto L_da6b0;
  /* da764: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(894824));
  fn1_142548(c);
  /* da768: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* da76c: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* da770: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* da774: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* da778: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* da77c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* da780: b #0x142980 */
  fn1_142980(c); return;
}

void fn1_dc32c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038829868));
  /* dc32c: bti c */
  /* bti: no architectural effect here */
  /* dc330: ret  */
  return;
}

void fn1_e14f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038850808));
  /* e14f8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e14fc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e1500: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e1504: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e1508: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e150c: ldr x9, [x0, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* e1510: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e1514: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e1518: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e151c: cmn x4, #1 */
  (void)arc_add64(c, ARC_X_R(c, 4), UINT64_C(1), 0);
  /* e1520: b.eq #0xe157c */
  if (ARC_COND(c, 0)) goto L_e157c;
  /* e1524: subs x9, x9, x1 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 1)));
  /* e1528: b.lo #0xe157c */
  if (ARC_COND(c, 3)) goto L_e157c;
  /* e152c: cmp x9, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 2));
  /* e1530: ldr x10, [x0, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e1534: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* e1538: csel x20, x9, x2, lo */
  ARC_X_W(c, 20, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 2)));
  /* e153c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e1540: csinc x8, x10, x0, ne */
  ARC_X_W(c, 8, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 0)) + 1)));
  /* e1544: cmp x4, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 4), ARC_X_R(c, 20));
  /* e1548: csel x2, x4, x20, lo */
  ARC_X_W(c, 2, (ARC_COND(c, 3) ? (ARC_X_R(c, 4)) : ARC_X_R(c, 20)));
  /* e154c: add x0, x8, x1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + ARC_X_R(c, 1)));
  /* e1550: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* e1554: bl #0x142890 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(922968));
  fn1_142890(c);
  /* e1558: cmp x20, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 19));
  /* e155c: cset w8, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? 1 : 0));
  /* e1560: csinv w8, w8, wzr, hs */
  ARC_W_W(c, 8, (ARC_COND(c, 2) ? (ARC_W_R(c, 8)) : (~(uint32_t)(ARC_W_R(c, 31)))));
  /* e1564: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* e1568: csel w0, w8, w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 0)));
  /* e156c: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e1570: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e1574: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e1578: ret  */
  return;
L_e157c:;
  /* e157c: bl #0xda020 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(923008));
  fn1_da020(c);
}

void fn1_e3d60(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038861152));
  /* e3d60: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e3d64: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e3d68: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* e3d6c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e3d70: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e3d74: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* e3d78: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* e3d7c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e3d80: mov x7, x1 */
  ARC_X_W(c, 7, ARC_X_R(c, 1));
  /* e3d84: and x9, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* e3d88: subs x8, x2, x9 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 9)));
  /* e3d8c: b.hs #0xe3db4 */
  if (ARC_COND(c, 2)) goto L_e3db4;
  /* e3d90: ldr x21, [x19, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* e3d94: str x20, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 20));
  /* e3d98: cbz x20, #0xe3dac */
  if ((ARC_X_R(c, 20)) == 0) goto L_e3dac;
  /* e3d9c: lsl x2, x20, #2 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 20)) << ((UINT64_C(2)) & 63)));
  /* e3da0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e3da4: mov x1, x7 */
  ARC_X_W(c, 1, ARC_X_R(c, 7));
  /* e3da8: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(933292));
  fn1_1449f0(c);
L_e3dac:;
  /* e3dac: str wzr, [x21, x20, lsl #2] */
  arc_st32((ARC_X_R(c, 21) + ((uint64_t)(ARC_X_R(c, 20)) << 2)), ARC_W_R(c, 31));
  /* e3db0: b #0xe3dd4 */
  goto L_e3dd4;
L_e3db4:;
  /* e3db4: ldr x3, [x19, #8] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* e3db8: sub x1, x9, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* e3dbc: add x2, x8, #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* e3dc0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e3dc4: mov x4, xzr */
  ARC_X_W(c, 4, ARC_X_R(c, 31));
  /* e3dc8: mov x6, x20 */
  ARC_X_W(c, 6, ARC_X_R(c, 20));
  /* e3dcc: mov x5, x3 */
  ARC_X_W(c, 5, ARC_X_R(c, 3));
  /* e3dd0: bl #0x142d40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(933332));
  fn1_142d40(c);
L_e3dd4:;
  /* e3dd4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e3dd8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e3ddc: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* e3de0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e3de4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e3de8: ret  */
  return;
}

void fn1_e87a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038880168));
  /* e87a8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e87ac: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e87b0: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* e87b4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e87b8: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* e87bc: ldr x8, [x8, #0x910] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2320))));
  /* e87c0: ldr x19, [x0, #8] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* e87c4: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* e87c8: sub x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) - UINT64_C(8)));
  /* e87cc: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* e87d0: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* e87d4: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(952280));
  fn1_a2030(c);
  /* e87d8: cmp w0, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(1));
  /* e87dc: b.mi #0xe87f0 */
  if (ARC_COND(c, 4)) goto L_e87f0;
  /* e87e0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* e87e4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e87e8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e87ec: ret  */
  return;
L_e87f0:;
  /* e87f0: sub x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) - UINT64_C(24)));
  /* e87f4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* e87f8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e87fc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e8800: b #0x1426f8 */
  fn1_1426f8(c); return;
}

void fn1_eac2c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038889516));
  /* eac2c: bti c */
  /* bti: no architectural effect here */
  /* eac30: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* eac34: ldr x16, [x8] */
  ARC_X_W(c, 16, arc_ld64(ARC_X_R(c, 8)));
  /* eac38: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_ec2d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038895320));
  /* ec2d8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ec2dc: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ec2e0: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* ec2e4: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ec2e8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ec2ec: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ec2f0: sxtw x21, w1 */
  ARC_X_W(c, 21, ((int64_t)(int32_t)(ARC_W_R(c, 1))));
  /* ec2f4: ldr x8, [x0, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(104))));
  /* ec2f8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ec2fc: add x22, x21, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* ec300: cmp x22, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* ec304: b.ls #0xec390 */
  if (ARC_COND(c, 9)) goto L_ec390;
  /* ec308: lsl x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(1)) & 63)));
  /* ec30c: mov x9, #0xfffffffffffffff */
  ARC_X_W(c, 9, UINT64_C(1152921504606846975));
  /* ec310: ldr x0, [x19, #0x58] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(88))));
  /* ec314: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* ec318: csel x8, x8, x22, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 22)));
  /* ec31c: cmp x22, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 9));
  /* ec320: mov x9, #0x1fffffffffffffff */
  ARC_X_W(c, 9, UINT64_C(2305843009213693951));
  /* ec324: csel x23, x8, x9, lo */
  ARC_X_W(c, 23, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* ec328: lsl x20, x23, #3 */
  ARC_X_W(c, 20, ((uint64_t)(ARC_X_R(c, 23)) << ((UINT64_C(3)) & 63)));
  /* ec32c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* ec330: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(967476));
  fn1_142878(c);
  /* ec334: cbz x0, #0xec3bc */
  if ((ARC_X_R(c, 0)) == 0) goto L_ec3bc;
  /* ec338: ldr x24, [x19, #0x60] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 19) + INT64_C(96))));
  /* ec33c: str x0, [x19, #0x58] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(88)), ARC_X_R(c, 0));
  /* ec340: cmp x24, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 23));
  /* ec344: b.hs #0xec388 */
  if (ARC_COND(c, 2)) goto L_ec388;
  /* ec348: lsl x9, x24, #3 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 24)) << ((UINT64_C(3)) & 63)));
  /* ec34c: add x11, x20, x0 */
  ARC_X_W(c, 11, (ARC_X_R(c, 20) + ARC_X_R(c, 0)));
  /* ec350: mvn x12, x0 */
  ARC_X_W(c, 12, (~(uint64_t)(ARC_X_R(c, 0))));
  /* ec354: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ec358: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* ec35c: add x8, x0, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 9)));
  /* ec360: sub x9, x12, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 12) - ARC_X_R(c, 9)));
  /* ec364: add x10, x8, #8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* ec368: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* ec36c: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* ec370: csel x10, x10, x11, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 11)));
  /* ec374: add x9, x9, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 10)));
  /* ec378: and x9, x9, #0xfffffffffffffff8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551608)));
  /* ec37c: add x2, x9, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 9) + UINT64_C(8)));
  /* ec380: bl #0x144a20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(967556));
  fn1_144a20(c);
  /* ec384: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
L_ec388:;
  /* ec388: str x23, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 23));
  /* ec38c: b #0xec394 */
  goto L_ec394;
L_ec390:;
  /* ec390: ldp x0, x24, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    ARC_X_W(c, 0, arc_ld64(_pa));
    ARC_X_W(c, 24, arc_ld64(_pa + 8));
  }
L_ec394:;
  /* ec394: cmp x24, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 22));
  /* ec398: add x0, x0, x21, lsl #3 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 21)) << 3)));
  /* ec39c: csel x8, x24, x22, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 24)) : ARC_X_R(c, 22)));
  /* ec3a0: str x8, [x19, #0x60] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(96)), ARC_X_R(c, 8));
L_ec3a4:;
  /* ec3a4: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ec3a8: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ec3ac: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* ec3b0: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ec3b4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ec3b8: ret  */
  return;
L_ec3bc:;
  /* ec3bc: ldp w8, w9, [x19, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(32));
    ARC_W_W(c, 8, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* ec3c0: orr w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(1)));
  /* ec3c4: tst w9, w8 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & ARC_W_R(c, 8)));
  /* ec3c8: str w8, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 8));
  /* ec3cc: b.ne #0xec3e0 */
  if (ARC_COND(c, 1)) goto L_ec3e0;
  /* ec3d0: nop  */
  /* nop: no architectural effect here */
  /* ec3d4: adr x0, #0x15d270 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1430128)));
  /* ec3d8: str xzr, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 31));
  /* ec3dc: b #0xec3a4 */
  goto L_ec3a4;
L_ec3e0:;
  /* ec3e0: nop  */
  /* nop: no architectural effect here */
  /* ec3e4: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* ec3e8: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(967660));
  fn1_ec720(c);
}

void fn1_ede04(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038902276));
  /* ede04: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ede08: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* ede0c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ede10: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ede14: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* ede18: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* ede1c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ede20: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ede24: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* ede28: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* ede2c: cbz x8, #0xede94 */
  if ((ARC_X_R(c, 8)) == 0) goto L_ede94;
  /* ede30: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* ede34: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* ede38: bl #0x143610 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(974396));
  fn1_143610(c);
  /* ede3c: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* ede40: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* ede44: b.ne #0xede8c */
  if (ARC_COND(c, 1)) goto L_ede8c;
  /* ede48: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ede4c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ede50: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ede54: ldr x0, [x8, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* ede58: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* ede5c: ldr x8, [x8, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* ede60: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(974436));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ede64: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* ede68: b.ne #0xede8c */
  if (ARC_COND(c, 1)) goto L_ede8c;
  /* ede6c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ede70: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ede74: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ede78: ldp w9, w10, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* ede7c: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* ede80: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* ede84: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* ede88: b.ne #0xedeac */
  if (ARC_COND(c, 1)) goto L_edeac;
L_ede8c:;
  /* ede8c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* ede90: bl #0x143628 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(974484));
  fn1_143628(c);
L_ede94:;
  /* ede94: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ede98: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ede9c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* edea0: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* edea4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* edea8: ret  */
  return;
L_edeac:;
  /* edeac: nop  */
  /* nop: no architectural effect here */
  /* edeb0: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* edeb4: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(974520));
  fn1_ec720(c);
  /* edeb8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* edebc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* edec0: bl #0x143628 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(974532));
  fn1_143628(c);
  /* edec4: b #0xedecc */
  goto L_edecc;
  /* edec8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_edecc:;
  /* edecc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* eded0: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(974548));
  fn1_142548(c);
  /* eded4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* eded8: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ededc: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* edee0: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* edee4: ldrb w10, [x8, #0x24] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* edee8: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* edeec: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* edef0: tbnz w10, #0, #0xedefc */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_edefc;
  /* edef4: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(974584));
  fn1_142980(c);
  /* edef8: b #0xede94 */
  goto L_ede94;
L_edefc:;
  /* edefc: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(974592));
  fn1_1429b0(c);
  /* edf00: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* edf04: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(974600));
  fn1_142980(c);
  /* edf08: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* edf0c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(974608));
  fn1_9cc20(c);
  /* edf10: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(974612));
  fn1_a1454(c);
}

void fn1_f32a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038923936));
  /* f32a0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f32a4: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* f32a8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f32ac: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f32b0: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f32b4: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* f32b8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f32bc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f32c0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f32c4: bl #0x143610 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(996040));
  fn1_143610(c);
  /* f32c8: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* f32cc: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f32d0: b.ne #0xf333c */
  if (ARC_COND(c, 1)) goto L_f333c;
  /* f32d4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f32d8: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f32dc: add x9, x19, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f32e0: ldr x0, [x9, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(40))));
  /* f32e4: cbz x0, #0xf3324 */
  if ((ARC_X_R(c, 0)) == 0) goto L_f3324;
  /* f32e8: ldp x8, x9, [x0, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(48));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f32ec: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* f32f0: b.eq #0xf3304 */
  if (ARC_COND(c, 0)) goto L_f3304;
  /* f32f4: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* f32f8: str x9, [x0, #0x30] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(48)), ARC_X_R(c, 9));
  /* f32fc: strb w20, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 20));
  /* f3300: b #0xf333c */
  goto L_f333c;
L_f3304:;
  /* f3304: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f3308: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* f330c: and w1, w20, #0xff */
  ARC_W_W(c, 1, (ARC_W_R(c, 20) & UINT64_C(255)));
  /* f3310: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(996116));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f3314: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* f3318: b.ne #0xf333c */
  if (ARC_COND(c, 1)) goto L_f333c;
  /* f331c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f3320: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
L_f3324:;
  /* f3324: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f3328: ldp w9, w10, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* f332c: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f3330: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* f3334: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f3338: b.ne #0xf335c */
  if (ARC_COND(c, 1)) goto L_f335c;
L_f333c:;
  /* f333c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f3340: bl #0x143628 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(996164));
  fn1_143628(c);
L_f3344:;
  /* f3344: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f3348: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f334c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f3350: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* f3354: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f3358: ret  */
  return;
L_f335c:;
  /* f335c: nop  */
  /* nop: no architectural effect here */
  /* f3360: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f3364: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(996200));
  fn1_ec720(c);
  /* f3368: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f336c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f3370: bl #0x143628 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(996212));
  fn1_143628(c);
  /* f3374: b #0xf337c */
  goto L_f337c;
  /* f3378: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_f337c:;
  /* f337c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f3380: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(996228));
  fn1_142548(c);
  /* f3384: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f3388: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f338c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f3390: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* f3394: ldrb w10, [x8, #0x24] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f3398: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f339c: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f33a0: tbnz w10, #0, #0xf33ac */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_f33ac;
  /* f33a4: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(996264));
  fn1_142980(c);
  /* f33a8: b #0xf3344 */
  goto L_f3344;
L_f33ac:;
  /* f33ac: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(996272));
  fn1_1429b0(c);
  /* f33b0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f33b4: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(996280));
  fn1_142980(c);
  /* f33b8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f33bc: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(996288));
  fn1_9cc20(c);
  /* f33c0: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(996292));
  fn1_a1454(c);
}

void fn1_f483c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038929468));
  /* f483c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f4840: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* f4844: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f4848: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f484c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f4850: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f4854: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f4858: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f485c: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* f4860: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f4864: cbz x8, #0xf48cc */
  if ((ARC_X_R(c, 8)) == 0) goto L_f48cc;
  /* f4868: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f486c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f4870: bl #0x143688 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1001588));
  fn1_143688(c);
  /* f4874: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* f4878: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f487c: b.ne #0xf48c4 */
  if (ARC_COND(c, 1)) goto L_f48c4;
  /* f4880: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f4884: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f4888: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f488c: ldr x0, [x8, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f4890: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f4894: ldr x8, [x8, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f4898: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1001628));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f489c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* f48a0: b.ne #0xf48c4 */
  if (ARC_COND(c, 1)) goto L_f48c4;
  /* f48a4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f48a8: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f48ac: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f48b0: ldp w9, w10, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* f48b4: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f48b8: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* f48bc: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f48c0: b.ne #0xf48e4 */
  if (ARC_COND(c, 1)) goto L_f48e4;
L_f48c4:;
  /* f48c4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f48c8: bl #0x1436a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1001676));
  fn1_1436a0(c);
L_f48cc:;
  /* f48cc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f48d0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f48d4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f48d8: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* f48dc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f48e0: ret  */
  return;
L_f48e4:;
  /* f48e4: nop  */
  /* nop: no architectural effect here */
  /* f48e8: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f48ec: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1001712));
  fn1_ec720(c);
  /* f48f0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f48f4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f48f8: bl #0x1436a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1001724));
  fn1_1436a0(c);
  /* f48fc: b #0xf4904 */
  goto L_f4904;
  /* f4900: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_f4904:;
  /* f4904: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f4908: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1001740));
  fn1_142548(c);
  /* f490c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f4910: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f4914: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f4918: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* f491c: ldrb w10, [x8, #0x24] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f4920: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f4924: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f4928: tbnz w10, #0, #0xf4934 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_f4934;
  /* f492c: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1001776));
  fn1_142980(c);
  /* f4930: b #0xf48cc */
  goto L_f48cc;
L_f4934:;
  /* f4934: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1001784));
  fn1_1429b0(c);
  /* f4938: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f493c: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1001792));
  fn1_142980(c);
  /* f4940: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f4944: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1001800));
  fn1_9cc20(c);
  /* f4948: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1001804));
  fn1_a1454(c);
}

void fn1_f9d14(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038951188));
  /* f9d14: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f9d18: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* f9d1c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f9d20: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f9d24: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f9d28: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* f9d2c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f9d30: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f9d34: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f9d38: bl #0x143688 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1023292));
  fn1_143688(c);
  /* f9d3c: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* f9d40: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f9d44: b.ne #0xf9db8 */
  if (ARC_COND(c, 1)) goto L_f9db8;
  /* f9d48: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f9d4c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f9d50: add x9, x19, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f9d54: ldr x0, [x9, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(40))));
  /* f9d58: cbz x0, #0xf9da0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_f9da0;
  /* f9d5c: ldp x8, x9, [x0, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(48));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f9d60: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* f9d64: b.eq #0xf9d7c */
  if (ARC_COND(c, 0)) goto L_f9d7c;
  /* f9d68: str w20, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 20));
  }
  /* f9d6c: str x8, [x0, #0x30] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(48)), ARC_X_R(c, 8));
  /* f9d70: cmn w20, #1 */
  (void)arc_add32(c, ARC_W_R(c, 20), UINT64_C(1), 0);
  /* f9d74: b.ne #0xf9db8 */
  if (ARC_COND(c, 1)) goto L_f9db8;
  /* f9d78: b #0xf9d98 */
  goto L_f9d98;
L_f9d7c:;
  /* f9d7c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f9d80: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* f9d84: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* f9d88: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1023372));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f9d8c: mov w20, w0 */
  ARC_W_W(c, 20, ARC_W_R(c, 0));
  /* f9d90: cmn w20, #1 */
  (void)arc_add32(c, ARC_W_R(c, 20), UINT64_C(1), 0);
  /* f9d94: b.ne #0xf9db8 */
  if (ARC_COND(c, 1)) goto L_f9db8;
L_f9d98:;
  /* f9d98: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f9d9c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
L_f9da0:;
  /* f9da0: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f9da4: ldp w9, w10, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* f9da8: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f9dac: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* f9db0: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f9db4: b.ne #0xf9dd8 */
  if (ARC_COND(c, 1)) goto L_f9dd8;
L_f9db8:;
  /* f9db8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f9dbc: bl #0x1436a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1023424));
  fn1_1436a0(c);
L_f9dc0:;
  /* f9dc0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f9dc4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f9dc8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f9dcc: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* f9dd0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f9dd4: ret  */
  return;
L_f9dd8:;
  /* f9dd8: nop  */
  /* nop: no architectural effect here */
  /* f9ddc: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f9de0: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1023460));
  fn1_ec720(c);
  /* f9de4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f9de8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f9dec: bl #0x1436a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1023472));
  fn1_1436a0(c);
  /* f9df0: b #0xf9df8 */
  goto L_f9df8;
  /* f9df4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_f9df8:;
  /* f9df8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f9dfc: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1023488));
  fn1_142548(c);
  /* f9e00: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f9e04: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f9e08: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f9e0c: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* f9e10: ldrb w10, [x8, #0x24] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f9e14: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f9e18: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f9e1c: tbnz w10, #0, #0xf9e28 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_f9e28;
  /* f9e20: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1023524));
  fn1_142980(c);
  /* f9e24: b #0xf9dc0 */
  goto L_f9dc0;
L_f9e28:;
  /* f9e28: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1023532));
  fn1_1429b0(c);
  /* f9e2c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f9e30: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1023540));
  fn1_142980(c);
  /* f9e34: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f9e38: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1023548));
  fn1_9cc20(c);
  /* f9e3c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1023552));
  fn1_a1454(c);
}

void fn1_fda88(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038966920));
  /* fda88: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fda8c: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* fda90: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fda94: stp x28, x27, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* fda98: stp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* fda9c: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* fdaa0: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* fdaa4: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fdaa8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* fdaac: adrp x23, #0x151000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fdab0: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fdab4: nop  */
  /* nop: no architectural effect here */
  /* fdab8: adr x20, #0x15dd90 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(1432976)));
  /* fdabc: ldr x23, [x23, #0xb78] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 23) + INT64_C(2936))));
  /* fdac0: ldr x25, [x25, #0xaa8] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(2728))));
  /* fdac4: adrp x24, #0x15d000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1429504)));
  /* fdac8: nop  */
  /* nop: no architectural effect here */
  /* fdacc: adr x21, #0x15dc40 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1432640)));
  /* fdad0: add x8, x25, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 25) + UINT64_C(16)));
  /* fdad4: str xzr, [x23, #0x110] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(272)), ARC_X_R(c, 31));
  /* fdad8: str x8, [x23, #0xa8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(168)), ARC_X_R(c, 8));
  /* fdadc: ldarb w8, [x20] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 20)));
  /* fdae0: tbz w8, #0, #0xfdf08 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_fdf08;
L_fdae4:;
  /* fdae4: ldr x8, [x24, #0xd88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 24) + INT64_C(3464))));
  /* fdae8: cmp x8, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 21));
  /* fdaec: str x8, [x23, #0xb0] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(176)), ARC_X_R(c, 8));
  /* fdaf0: b.eq #0xfdb08 */
  if (ARC_COND(c, 0)) goto L_fdb08;
  /* fdaf4: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* fdaf8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* fdafc: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1039104));
  fn1_db2e0(c);
  /* fdb00: ldr x8, [x23, #0xb0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 23) + INT64_C(176))));
  /* fdb04: b #0xfdb0c */
  goto L_fdb0c;
L_fdb08:;
  /* fdb08: mov x8, x21 */
  ARC_X_W(c, 8, ARC_X_R(c, 21));
L_fdb0c:;
  /* fdb0c: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* fdb10: adrp x22, #0x151000 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fdb14: add x10, x23, #0x110 */
  ARC_X_W(c, 10, (ARC_X_R(c, 23) + UINT64_C(272)));
  /* fdb18: ldr x22, [x22, #0x998] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 22) + INT64_C(2456))));
  /* fdb1c: adrp x9, #0x14d000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1363968)));
  /* fdb20: add x9, x9, #0xfe8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(4072)));
  /* fdb24: str x10, [x23, #0xf8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(248)), ARC_X_R(c, 10));
  /* fdb28: mov w10, #-1 */
  ARC_W_W(c, 10, UINT64_C(18446744073709551615));
  /* fdb2c: cmp x8, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 21));
  /* fdb30: str x9, [x23, #0xa8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(168)), ARC_X_R(c, 9));
  /* fdb34: str x22, [x23, #0xe8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(232)), ARC_X_R(c, 22));
  /* fdb38: stur q0, [x23, #0xd8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(216)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 23) + INT64_C(216)) + 8, (c)->q[0].u64[1]);
  /* fdb3c: stur q0, [x23, #0xc8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(200)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 23) + INT64_C(200)) + 8, (c)->q[0].u64[1]);
  /* fdb40: stur q0, [x23, #0xb8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(184)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 23) + INT64_C(184)) + 8, (c)->q[0].u64[1]);
  /* fdb44: str w10, [x23, #0x104] */
  arc_st32((ARC_X_R(c, 23) + INT64_C(260)), ARC_W_R(c, 10));
  /* fdb48: strb wzr, [x23, #0x108] */
  arc_st8((ARC_X_R(c, 23) + INT64_C(264)), ARC_W_R(c, 31));
  /* fdb4c: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* fdb50: b.eq #0xfdb64 */
  if (ARC_COND(c, 0)) goto L_fdb64;
  /* fdb54: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* fdb58: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* fdb5c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1039200));
  fn1_db2e0(c);
  /* fdb60: ldr x9, [x23, #0xa8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 23) + INT64_C(168))));
L_fdb64:;
  /* fdb64: ldr x8, [x9, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(16))));
  /* fdb68: add x0, x23, #0xa8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + UINT64_C(168)));
  /* fdb6c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* fdb70: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1039220));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* fdb74: ldr x19, [sp, #8] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(8))));
  /* fdb78: mov x24, x21 */
  ARC_X_W(c, 24, ARC_X_R(c, 21));
  /* fdb7c: cmp x19, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 21));
  /* fdb80: b.eq #0xfdba4 */
  if (ARC_COND(c, 0)) goto L_fdba4;
  /* fdb84: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* fdb88: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fdb8c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1039248));
  fn1_bd950(c);
  /* fdb90: cbnz x0, #0xfdba4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_fdba4;
  /* fdb94: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* fdb98: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fdb9c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fdba0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1039268));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fdba4:;
  /* fdba4: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fdba8: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* fdbac: add x1, x23, #0xa8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(168)));
  /* fdbb0: ldr x8, [x8, #0xab0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2736))));
  /* fdbb4: str xzr, [x23, #0x40] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(64)), ARC_X_R(c, 31));
  /* fdbb8: add x9, x8, #0x40 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* fdbbc: add x8, x8, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* fdbc0: str x9, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* fdbc4: stp x8, xzr, [x23] */
  { const uint64_t _pa = ARC_X_R(c, 23);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* fdbc8: bl #0x1433d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1039308));
  fn1_1433d0(c);
  /* fdbcc: str xzr, [x23, #0x98] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(152)), ARC_X_R(c, 31));
  /* fdbd0: adrp x19, #0x151000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fdbd4: mov w25, #-1 */
  ARC_W_W(c, 25, UINT64_C(18446744073709551615));
  /* fdbd8: ldr x19, [x19, #0xb80] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(2944))));
  /* fdbdc: add x1, x22, #0x98 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(152)));
  /* fdbe0: str w25, [x23, #0xa0] */
  arc_st32((ARC_X_R(c, 23) + INT64_C(160)), ARC_W_R(c, 25));
  /* fdbe4: add x0, x19, #0xa0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(160)));
  /* fdbe8: add x2, x19, #0x100 */
  ARC_X_W(c, 2, (ARC_X_R(c, 19) + UINT64_C(256)));
  /* fdbec: str xzr, [x19, #0x100] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(256)), ARC_X_R(c, 31));
  /* fdbf0: bl #0xfe4e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1039348));
  fn1_fe4e0(c);
  /* fdbf4: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fdbf8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fdbfc: add x1, x19, #0xa0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(160)));
  /* fdc00: ldr x8, [x8, #0xab8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2744))));
  /* fdc04: str xzr, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), ARC_X_R(c, 31));
  /* fdc08: mov x21, x22 */
  ARC_X_W(c, 21, ARC_X_R(c, 22));
  /* fdc0c: add x27, x8, #0x18 */
  ARC_X_W(c, 27, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* fdc10: add x28, x8, #0x40 */
  ARC_X_W(c, 28, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* fdc14: str x27, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 27));
  /* fdc18: str x28, [x0, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 28));
  }
  /* fdc1c: bl #0x1433d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1039392));
  fn1_1433d0(c);
  /* fdc20: str xzr, [x19, #0x90] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(144)), ARC_X_R(c, 31));
  /* fdc24: adrp x26, #0x151000 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fdc28: add x1, x22, #0x130 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(304)));
  /* fdc2c: ldr x26, [x26, #0xb88] */
  ARC_X_W(c, 26, arc_ld64((ARC_X_R(c, 26) + INT64_C(2952))));
  /* fdc30: str w25, [x19, #0x98] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(152)), ARC_W_R(c, 25));
  /* fdc34: add x0, x26, #0xa0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 26) + UINT64_C(160)));
  /* fdc38: add x2, x26, #0x100 */
  ARC_X_W(c, 2, (ARC_X_R(c, 26) + UINT64_C(256)));
  /* fdc3c: str xzr, [x26, #0x100] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(256)), ARC_X_R(c, 31));
  /* fdc40: bl #0xfe4e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1039428));
  fn1_fe4e0(c);
  /* fdc44: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* fdc48: add x1, x26, #0xa0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 26) + UINT64_C(160)));
  /* fdc4c: str xzr, [x26, #0x38] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(56)), ARC_X_R(c, 31));
  /* fdc50: str x27, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 27));
  /* fdc54: str x28, [x0, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 28));
  }
  /* fdc58: bl #0x1433d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1039452));
  fn1_1433d0(c);
  /* fdc5c: str xzr, [x26, #0x90] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(144)), ARC_X_R(c, 31));
  /* fdc60: adrp x22, #0x151000 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fdc64: add x1, x21, #0x130 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(304)));
  /* fdc68: ldr x22, [x22, #0xb90] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 22) + INT64_C(2960))));
  /* fdc6c: str w25, [x26, #0x98] */
  arc_st32((ARC_X_R(c, 26) + INT64_C(152)), ARC_W_R(c, 25));
  /* fdc70: add x0, x22, #0xa0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + UINT64_C(160)));
  /* fdc74: add x2, x22, #0x100 */
  ARC_X_W(c, 2, (ARC_X_R(c, 22) + UINT64_C(256)));
  /* fdc78: str xzr, [x22, #0x100] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(256)), ARC_X_R(c, 31));
  /* fdc7c: bl #0xfe4e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1039488));
  fn1_fe4e0(c);
  /* fdc80: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* fdc84: add x1, x22, #0xa0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(160)));
  /* fdc88: str xzr, [x22, #0x38] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(56)), ARC_X_R(c, 31));
  /* fdc8c: str x27, [x22] */
  arc_st64(ARC_X_R(c, 22), ARC_X_R(c, 27));
  /* fdc90: str x28, [x0, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 28));
  }
  /* fdc94: bl #0x1433d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1039512));
  fn1_1433d0(c);
  /* fdc98: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* fdc9c: str w25, [x22, #0x98] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(152)), ARC_W_R(c, 25));
  /* fdca0: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fdca4: str xzr, [x22, #0x90] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(144)), ARC_X_R(c, 31));
  /* fdca8: ldr x9, [x26] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 26)));
  /* fdcac: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* fdcb0: add x8, x23, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) + ARC_X_R(c, 8)));
  /* fdcb4: adrp x23, #0x151000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fdcb8: str x19, [x8, #0x88] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(136)), ARC_X_R(c, 19));
  /* fdcbc: ldur x8, [x9, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* fdcc0: add x8, x26, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 26) + ARC_X_R(c, 8)));
  /* fdcc4: ldr w10, [x8, #8] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 8) + INT64_C(8))));
  /* fdcc8: orr w10, w10, #0x2000 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(8192)));
  /* fdccc: str w10, [x8, #8] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 10));
  /* fdcd0: ldr x23, [x23, #0xb98] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 23) + INT64_C(2968))));
  /* fdcd4: ldur x8, [x9, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* fdcd8: ldr x25, [x25, #0xac8] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(2760))));
  /* fdcdc: add x8, x26, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 26) + ARC_X_R(c, 8)));
  /* fdce0: add x9, x25, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 25) + UINT64_C(16)));
  /* fdce4: str xzr, [x23, #0x110] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(272)), ARC_X_R(c, 31));
  /* fdce8: str x19, [x8, #0x88] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(136)), ARC_X_R(c, 19));
  /* fdcec: str x9, [x23, #0xa8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(168)), ARC_X_R(c, 9));
  /* fdcf0: ldarb w8, [x20] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 20)));
  /* fdcf4: tbz w8, #0, #0xfdf48 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_fdf48;
L_fdcf8:;
  /* fdcf8: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* fdcfc: ldr x8, [x8, #0xd88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3464))));
  /* fdd00: cmp x8, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 24));
  /* fdd04: str x8, [x23, #0xb0] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(176)), ARC_X_R(c, 8));
  /* fdd08: b.eq #0xfdd20 */
  if (ARC_COND(c, 0)) goto L_fdd20;
  /* fdd0c: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* fdd10: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* fdd14: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1039640));
  fn1_db2e0(c);
  /* fdd18: ldr x8, [x23, #0xb0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 23) + INT64_C(176))));
  /* fdd1c: b #0xfdd24 */
  goto L_fdd24;
L_fdd20:;
  /* fdd20: mov x8, x24 */
  ARC_X_W(c, 8, ARC_X_R(c, 24));
L_fdd24:;
  /* fdd24: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* fdd28: adrp x20, #0x151000 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fdd2c: add x10, x23, #0x110 */
  ARC_X_W(c, 10, (ARC_X_R(c, 23) + UINT64_C(272)));
  /* fdd30: ldr x20, [x20, #0x998] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(2456))));
  /* fdd34: adrp x9, #0x14e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1368064)));
  /* fdd38: add x9, x9, #0x118 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(280)));
  /* fdd3c: str x10, [x23, #0xf8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(248)), ARC_X_R(c, 10));
  /* fdd40: mov w10, #-1 */
  ARC_W_W(c, 10, UINT64_C(18446744073709551615));
  /* fdd44: cmp x8, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 24));
  /* fdd48: str x9, [x23, #0xa8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(168)), ARC_X_R(c, 9));
  /* fdd4c: str x20, [x23, #0xe8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(232)), ARC_X_R(c, 20));
  /* fdd50: stur q0, [x23, #0xd8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(216)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 23) + INT64_C(216)) + 8, (c)->q[0].u64[1]);
  /* fdd54: stur q0, [x23, #0xc8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(200)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 23) + INT64_C(200)) + 8, (c)->q[0].u64[1]);
  /* fdd58: stur q0, [x23, #0xb8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(184)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 23) + INT64_C(184)) + 8, (c)->q[0].u64[1]);
  /* fdd5c: str w10, [x23, #0x104] */
  arc_st32((ARC_X_R(c, 23) + INT64_C(260)), ARC_W_R(c, 10));
  /* fdd60: strb wzr, [x23, #0x108] */
  arc_st8((ARC_X_R(c, 23) + INT64_C(264)), ARC_W_R(c, 31));
  /* fdd64: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* fdd68: b.eq #0xfdd7c */
  if (ARC_COND(c, 0)) goto L_fdd7c;
  /* fdd6c: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* fdd70: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* fdd74: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1039736));
  fn1_db2e0(c);
  /* fdd78: ldr x9, [x23, #0xa8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 23) + INT64_C(168))));
L_fdd7c:;
  /* fdd7c: ldr x8, [x9, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(16))));
  /* fdd80: add x0, x23, #0xa8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + UINT64_C(168)));
  /* fdd84: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* fdd88: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1039756));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* fdd8c: ldr x19, [sp, #8] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(8))));
  /* fdd90: cmp x19, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 24));
  /* fdd94: b.eq #0xfddb8 */
  if (ARC_COND(c, 0)) goto L_fddb8;
  /* fdd98: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* fdd9c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fdda0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1039780));
  fn1_bd950(c);
  /* fdda4: cbnz x0, #0xfddb8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_fddb8;
  /* fdda8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* fddac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fddb0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fddb4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1039800));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fddb8:;
  /* fddb8: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fddbc: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* fddc0: add x1, x23, #0xa8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(168)));
  /* fddc4: ldr x8, [x8, #0xad0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2768))));
  /* fddc8: str xzr, [x23, #0x40] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(64)), ARC_X_R(c, 31));
  /* fddcc: add x9, x8, #0x40 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* fddd0: add x8, x8, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* fddd4: str x9, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* fddd8: stp x8, xzr, [x23] */
  { const uint64_t _pa = ARC_X_R(c, 23);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* fdddc: bl #0x1433d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1039840));
  fn1_1433d0(c);
  /* fdde0: str xzr, [x23, #0x98] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(152)), ARC_X_R(c, 31));
  /* fdde4: adrp x19, #0x151000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fdde8: mov w21, #-1 */
  ARC_W_W(c, 21, UINT64_C(18446744073709551615));
  /* fddec: ldr x19, [x19, #0xba0] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(2976))));
  /* fddf0: add x1, x20, #0x98 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(152)));
  /* fddf4: str w21, [x23, #0xa0] */
  arc_st32((ARC_X_R(c, 23) + INT64_C(160)), ARC_W_R(c, 21));
  /* fddf8: add x0, x19, #0xa0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(160)));
  /* fddfc: add x2, x19, #0x100 */
  ARC_X_W(c, 2, (ARC_X_R(c, 19) + UINT64_C(256)));
  /* fde00: str xzr, [x19, #0x100] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(256)), ARC_X_R(c, 31));
  /* fde04: bl #0xfee18 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1039880));
  fn1_fee18(c);
  /* fde08: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fde0c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fde10: add x1, x19, #0xa0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(160)));
  /* fde14: ldr x8, [x8, #0xad8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2776))));
  /* fde18: str xzr, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), ARC_X_R(c, 31));
  /* fde1c: add x22, x8, #0x18 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* fde20: add x24, x8, #0x40 */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* fde24: str x22, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 22));
  /* fde28: str x24, [x0, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 24));
  }
  /* fde2c: bl #0x1433d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1039920));
  fn1_1433d0(c);
  /* fde30: str xzr, [x19, #0x90] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(144)), ARC_X_R(c, 31));
  /* fde34: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fde38: add x1, x20, #0x130 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(304)));
  /* fde3c: ldr x25, [x25, #0xba8] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(2984))));
  /* fde40: str w21, [x19, #0x98] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(152)), ARC_W_R(c, 21));
  /* fde44: add x0, x25, #0xa0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 25) + UINT64_C(160)));
  /* fde48: add x2, x25, #0x100 */
  ARC_X_W(c, 2, (ARC_X_R(c, 25) + UINT64_C(256)));
  /* fde4c: str xzr, [x25, #0x100] */
  arc_st64((ARC_X_R(c, 25) + INT64_C(256)), ARC_X_R(c, 31));
  /* fde50: bl #0xfee18 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1039956));
  fn1_fee18(c);
  /* fde54: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* fde58: add x1, x25, #0xa0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 25) + UINT64_C(160)));
  /* fde5c: str xzr, [x25, #0x38] */
  arc_st64((ARC_X_R(c, 25) + INT64_C(56)), ARC_X_R(c, 31));
  /* fde60: str x22, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 22));
  /* fde64: str x24, [x0, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 24));
  }
  /* fde68: bl #0x1433d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1039980));
  fn1_1433d0(c);
  /* fde6c: str xzr, [x25, #0x90] */
  arc_st64((ARC_X_R(c, 25) + INT64_C(144)), ARC_X_R(c, 31));
  /* fde70: adrp x26, #0x151000 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fde74: add x1, x20, #0x130 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(304)));
  /* fde78: ldr x26, [x26, #0xbb0] */
  ARC_X_W(c, 26, arc_ld64((ARC_X_R(c, 26) + INT64_C(2992))));
  /* fde7c: str w21, [x25, #0x98] */
  arc_st32((ARC_X_R(c, 25) + INT64_C(152)), ARC_W_R(c, 21));
  /* fde80: add x0, x26, #0xa0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 26) + UINT64_C(160)));
  /* fde84: add x2, x26, #0x100 */
  ARC_X_W(c, 2, (ARC_X_R(c, 26) + UINT64_C(256)));
  /* fde88: str xzr, [x26, #0x100] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(256)), ARC_X_R(c, 31));
  /* fde8c: bl #0xfee18 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1040016));
  fn1_fee18(c);
  /* fde90: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* fde94: add x1, x26, #0xa0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 26) + UINT64_C(160)));
  /* fde98: str xzr, [x26, #0x38] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(56)), ARC_X_R(c, 31));
  /* fde9c: str x22, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 22));
  /* fdea0: str x24, [x0, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 24));
  }
  /* fdea4: bl #0x1433d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1040040));
  fn1_1433d0(c);
  /* fdea8: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* fdeac: str w21, [x26, #0x98] */
  arc_st32((ARC_X_R(c, 26) + INT64_C(152)), ARC_W_R(c, 21));
  /* fdeb0: ldr x9, [x25] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 25)));
  /* fdeb4: str xzr, [x26, #0x90] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(144)), ARC_X_R(c, 31));
  /* fdeb8: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* fdebc: add x8, x23, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) + ARC_X_R(c, 8)));
  /* fdec0: str x19, [x8, #0x88] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(136)), ARC_X_R(c, 19));
  /* fdec4: ldur x8, [x9, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* fdec8: add x8, x25, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 25) + ARC_X_R(c, 8)));
  /* fdecc: ldr w10, [x8, #8] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 8) + INT64_C(8))));
  /* fded0: orr w10, w10, #0x2000 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(8192)));
  /* fded4: str w10, [x8, #8] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 10));
  /* fded8: ldur x8, [x9, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* fdedc: add x8, x25, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 25) + ARC_X_R(c, 8)));
  /* fdee0: str x19, [x8, #0x88] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(136)), ARC_X_R(c, 19));
  /* fdee4: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fdee8: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* fdeec: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* fdef0: ldp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* fdef4: ldp x28, x27, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* fdef8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fdefc: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* fdf00: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fdf04: ret  */
  return;
L_fdf08:;
  /* fdf08: nop  */
  /* nop: no architectural effect here */
  /* fdf0c: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* fdf10: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1040148));
  fn1_1424b8(c);
  /* fdf14: cbz w0, #0xfdae4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_fdae4;
  /* fdf18: bl #0x143ac0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1040156));
  fn1_143ac0(c);
  /* fdf1c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* fdf20: cmp x8, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 21));
  /* fdf24: str x8, [x24, #0xd88] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(3464)), ARC_X_R(c, 8));
  /* fdf28: b.eq #0xfdf38 */
  if (ARC_COND(c, 0)) goto L_fdf38;
  /* fdf2c: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* fdf30: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* fdf34: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1040184));
  fn1_db2e0(c);
L_fdf38:;
  /* fdf38: nop  */
  /* nop: no architectural effect here */
  /* fdf3c: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* fdf40: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1040196));
  fn1_1424d0(c);
  /* fdf44: b #0xfdae4 */
  goto L_fdae4;
L_fdf48:;
  /* fdf48: nop  */
  /* nop: no architectural effect here */
  /* fdf4c: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* fdf50: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1040212));
  fn1_1424b8(c);
  /* fdf54: cbz w0, #0xfdcf8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_fdcf8;
  /* fdf58: bl #0x143ac0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1040220));
  fn1_143ac0(c);
  /* fdf5c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* fdf60: adrp x9, #0x15d000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1429504)));
  /* fdf64: cmp x8, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 24));
  /* fdf68: str x8, [x9, #0xd88] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(3464)), ARC_X_R(c, 8));
  /* fdf6c: b.eq #0xfdf7c */
  if (ARC_COND(c, 0)) goto L_fdf7c;
  /* fdf70: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* fdf74: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* fdf78: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1040252));
  fn1_db2e0(c);
L_fdf7c:;
  /* fdf7c: nop  */
  /* nop: no architectural effect here */
  /* fdf80: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* fdf84: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1040264));
  fn1_1424d0(c);
  /* fdf88: b #0xfdcf8 */
  goto L_fdcf8;
  /* fdf8c: b #0xfdf90 */
  goto L_fdf90;
L_fdf90:;
  /* fdf90: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fdf94: nop  */
  /* nop: no architectural effect here */
  /* fdf98: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* fdf9c: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1040288));
  fn1_1424e8(c);
  /* fdfa0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fdfa4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1040296));
  fn1_a1454(c);
  /* fdfa8: ldr x20, [sp, #8] */
  ARC_X_W(c, 20, arc_ld64(((c)->sp + INT64_C(8))));
  /* fdfac: mov x21, x24 */
  ARC_X_W(c, 21, ARC_X_R(c, 24));
  /* fdfb0: cmp x20, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 24));
  /* fdfb4: b #0xfdfc0 */
  goto L_fdfc0;
  /* fdfb8: ldr x20, [sp, #8] */
  ARC_X_W(c, 20, arc_ld64(((c)->sp + INT64_C(8))));
  /* fdfbc: cmp x20, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 21));
L_fdfc0:;
  /* fdfc0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fdfc4: b.eq #0xfdfe8 */
  if (ARC_COND(c, 0)) goto L_fdfe8;
  /* fdfc8: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* fdfcc: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fdfd0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1040340));
  fn1_bd950(c);
  /* fdfd4: cbnz x0, #0xfdfe8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_fdfe8;
  /* fdfd8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* fdfdc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fdfe0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fdfe4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1040360));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fdfe8:;
  /* fdfe8: ldr x20, [x23, #0xb0] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 23) + INT64_C(176))));
  /* fdfec: add x8, x25, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 25) + UINT64_C(16)));
  /* fdff0: str x8, [x23, #0xa8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(168)), ARC_X_R(c, 8));
  /* fdff4: cmp x20, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 21));
  /* fdff8: b.eq #0xfe01c */
  if (ARC_COND(c, 0)) goto L_fe01c;
  /* fdffc: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* fe000: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fe004: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1040392));
  fn1_bd950(c);
  /* fe008: cbnz x0, #0xfe01c */
  if ((ARC_X_R(c, 0)) != 0) goto L_fe01c;
  /* fe00c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* fe010: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fe014: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fe018: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1040412));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fe01c:;
  /* fe01c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fe020: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1040420));
  fn1_9cc20(c);
}

void fn1_108734(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039011124));
  /* 108734: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 108738: sub sp, sp, #0x100 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(256)));
  /* 10873c: stp x29, x30, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 108740: stp x28, x27, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 108744: stp x26, x25, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 108748: stp x24, x23, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 10874c: stp x22, x21, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 108750: stp x20, x19, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 108754: add x29, sp, #0xa0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(160)));
  /* 108758: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 10875c: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 108760: add x1, x3, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 3) + UINT64_C(48)));
  /* 108764: mov x26, x5 */
  ARC_X_W(c, 26, ARC_X_R(c, 5));
  /* 108768: mov x25, x4 */
  ARC_X_W(c, 25, ARC_X_R(c, 4));
  /* 10876c: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 108770: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1083252));
  fn1_143460(c);
  /* 108774: adrp x22, #0x151000 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 108778: ldr x22, [x22, #0xb58] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 22) + INT64_C(2904))));
  /* 10877c: ldr x19, [sp, #0x30] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(48))));
  /* 108780: ldar x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 108784: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 108788: b.eq #0x108844 */
  if (ARC_COND(c, 0)) goto L_108844;
  /* 10878c: nop  */
  /* nop: no architectural effect here */
  /* 108790: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 108794: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1083288));
  fn1_142518(c);
  /* 108798: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 10879c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1087a0: b.ne #0x1087cc */
  if (ARC_COND(c, 1)) goto L_1087cc;
  /* 1087a4: nop  */
  /* nop: no architectural effect here */
  /* 1087a8: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 1087ac: nop  */
  /* nop: no architectural effect here */
  /* 1087b0: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_1087b4:;
  /* 1087b4: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1087b8: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 1087bc: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1083328));
  fn1_142530(c);
  /* 1087c0: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 1087c4: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1087c8: b.eq #0x1087b4 */
  if (ARC_COND(c, 0)) goto L_1087b4;
L_1087cc:;
  /* 1087cc: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 1087d0: cbz x8, #0x1087e4 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1087e4;
  /* 1087d4: nop  */
  /* nop: no architectural effect here */
  /* 1087d8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1087dc: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1083360));
  fn1_142560(c);
  /* 1087e0: b #0x108844 */
  goto L_108844;
L_1087e4:;
  /* 1087e4: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 1087e8: str x22, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 22));
  /* 1087ec: strb wzr, [sp, #0x20] */
  arc_st8(((c)->sp + INT64_C(32)), ARC_W_R(c, 31));
  /* 1087f0: str x8, [x22] */
  arc_st64(ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* 1087f4: nop  */
  /* nop: no architectural effect here */
  /* 1087f8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1087fc: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1083392));
  fn1_142560(c);
  /* 108800: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 108804: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 108808: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 10880c: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1083408));
  fn1_a2030(c);
  /* 108810: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 108814: str w8, [x22, #8] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(8)), ARC_W_R(c, 8));
  /* 108818: nop  */
  /* nop: no architectural effect here */
  /* 10881c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 108820: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1083428));
  fn1_142518(c);
  /* 108824: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 108828: stlr x8, [x22] */
  arc_st64(ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* 10882c: nop  */
  /* nop: no architectural effect here */
  /* 108830: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 108834: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1083448));
  fn1_142560(c);
  /* 108838: nop  */
  /* nop: no architectural effect here */
  /* 10883c: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 108840: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1083460));
  fn1_142578(c);
L_108844:;
  /* 108844: ldp x8, x10, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 108848: ldrsw x9, [x22, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 22) + INT64_C(8)))));
  /* 10884c: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 108850: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 108854: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 108858: b.hs #0x108c7c */
  if (ARC_COND(c, 2)) goto L_108c7c;
  /* 10885c: ldr x0, [x8, x9, lsl #3] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 108860: cbz x0, #0x108c7c */
  if ((ARC_X_R(c, 0)) == 0) goto L_108c7c;
  /* 108864: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 108868: ldr x8, [x8, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(96))));
  /* 10886c: adrp x23, #0x151000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 108870: add x3, sp, #0x38 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(56)));
  /* 108874: ldr x23, [x23, #0xbe0] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 23) + INT64_C(3040))));
  /* 108878: add x2, x23, #0x1a */
  ARC_X_W(c, 2, (ARC_X_R(c, 23) + UINT64_C(26)));
  /* 10887c: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 108880: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1083524));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 108884: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 108888: stp x26, x25, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 10888c: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1083536));
  fn1_143478(c);
  /* 108890: stp xzr, xzr, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 108894: str xzr, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 31));
  /* 108898: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 10889c: mov w1, #0x16 */
  ARC_W_W(c, 1, UINT64_C(22));
  /* 1088a0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1088a4: add x19, sp, #0x18 */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(24)));
  /* 1088a8: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1083564));
  fn1_142d10(c);
  /* 1088ac: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* 1088b0: ldr x9, [sp, #0x28] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(40))));
  /* 1088b4: add x26, sp, #0x38 */
  ARC_X_W(c, 26, ((c)->sp + UINT64_C(56)));
  /* 1088b8: orr x25, x19, #1 */
  ARC_X_W(c, 25, (ARC_X_R(c, 19) | UINT64_C(1)));
  /* 1088bc: add x27, x26, #0x68 */
  ARC_X_W(c, 27, (ARC_X_R(c, 26) + UINT64_C(104)));
  /* 1088c0: mov w28, #0x16 */
  ARC_W_W(c, 28, UINT64_C(22));
  /* 1088c4: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1088c8: csinc x22, x9, x19, ne */
  ARC_X_W(c, 22, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* 1088cc: mov x19, x22 */
  ARC_X_W(c, 19, ARC_X_R(c, 22));
  /* 1088d0: b #0x1088dc */
  goto L_1088dc;
L_1088d4:;
  /* 1088d4: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 1088d8: str x8, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 8));
L_1088dc:;
  /* 1088dc: cbz x20, #0x1088f4 */
  if ((ARC_X_R(c, 20)) == 0) goto L_1088f4;
  /* 1088e0: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1088e4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1088e8: b.eq #0x108900 */
  if (ARC_COND(c, 0)) goto L_108900;
  /* 1088ec: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 1088f0: b #0x108910 */
  goto L_108910;
L_1088f4:;
  /* 1088f4: cbz x21, #0x108b00 */
  if ((ARC_X_R(c, 21)) == 0) goto L_108b00;
  /* 1088f8: mov w24, #1 */
  ARC_W_W(c, 24, UINT64_C(1));
  /* 1088fc: b #0x108924 */
  goto L_108924;
L_108900:;
  /* 108900: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 108904: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 108908: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 10890c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1083664));
  arc_dispatch(c, ARC_X_R(c, 8));
L_108910:;
  /* 108910: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 108914: cset w24, eq */
  ARC_W_W(c, 24, (ARC_COND(c, 0) ? 1 : 0));
  /* 108918: csel x8, xzr, x20, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 20)));
  /* 10891c: cbz x21, #0x108960 */
  if ((ARC_X_R(c, 21)) == 0) goto L_108960;
  /* 108920: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
L_108924:;
  /* 108924: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 108928: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 10892c: b.eq #0x108938 */
  if (ARC_COND(c, 0)) goto L_108938;
  /* 108930: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 108934: b #0x108948 */
  goto L_108948;
L_108938:;
  /* 108938: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 10893c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 108940: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 108944: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1083720));
  arc_dispatch(c, ARC_X_R(c, 8));
L_108948:;
  /* 108948: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 10894c: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 108950: csel x21, xzr, x21, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 21)));
  /* 108954: cmp w24, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 24), ARC_W_R(c, 8));
  /* 108958: b.ne #0x108968 */
  if (ARC_COND(c, 1)) goto L_108968;
  /* 10895c: b #0x108b0c */
  goto L_108b0c;
L_108960:;
  /* 108960: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 108964: b.eq #0x108b08 */
  if (ARC_COND(c, 0)) goto L_108b08;
L_108968:;
  /* 108968: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* 10896c: ldr x9, [sp, #0x20] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(32))));
  /* 108970: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 108974: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 108978: csel x24, x10, x9, eq */
  ARC_X_W(c, 24, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 10897c: add x9, x19, x24 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 24)));
  /* 108980: cmp x22, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 9));
  /* 108984: b.ne #0x108a38 */
  if (ARC_COND(c, 1)) goto L_108a38;
  /* 108988: cmp x24, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 24), UINT64_C(1));
  /* 10898c: b.lt #0x1089a4 */
  if (ARC_COND(c, 11)) goto L_1089a4;
  /* 108990: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 108994: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 108998: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 10899c: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1083808));
  fn1_142d10(c);
  /* 1089a0: b #0x1089c8 */
  goto L_1089c8;
L_1089a4:;
  /* 1089a4: lsl x9, x24, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 24)) << ((UINT64_C(1)) & 63)));
  /* 1089a8: tbnz w8, #0, #0x1089bc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1089bc;
  /* 1089ac: lsl w8, w9, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 9)) << ((UINT64_C(1)) & 31)));
  /* 1089b0: strb w8, [sp, #0x18] */
  arc_st8(((c)->sp + INT64_C(24)), ARC_W_R(c, 8));
  /* 1089b4: mov x8, x25 */
  ARC_X_W(c, 8, ARC_X_R(c, 25));
  /* 1089b8: b #0x1089c4 */
  goto L_1089c4;
L_1089bc:;
  /* 1089bc: ldr x8, [sp, #0x28] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(40))));
  /* 1089c0: str x9, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 9));
L_1089c4:;
  /* 1089c4: strb wzr, [x8, x9] */
  arc_st8((ARC_X_R(c, 8) + ARC_X_R(c, 9)), ARC_W_R(c, 31));
L_1089c8:;
  /* 1089c8: ldp x9, x10, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 1089cc: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* 1089d0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1089d4: and x11, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 1089d8: ubfx x12, x9, #1, #7 */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 9)) >> 1) & UINT64_C(127)));
  /* 1089dc: sub x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* 1089e0: csel x8, x28, x11, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 28)) : ARC_X_R(c, 11)));
  /* 1089e4: tst x9, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(1)));
  /* 1089e8: csel x10, x12, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* 1089ec: subs x1, x8, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10)));
  /* 1089f0: b.ls #0x108a04 */
  if (ARC_COND(c, 9)) goto L_108a04;
  /* 1089f4: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1089f8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1089fc: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1083904));
  fn1_142d10(c);
  /* 108a00: b #0x108a24 */
  goto L_108a24;
L_108a04:;
  /* 108a04: tbnz w9, #0, #0x108a18 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_108a18;
  /* 108a08: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* 108a0c: strb w9, [sp, #0x18] */
  arc_st8(((c)->sp + INT64_C(24)), ARC_W_R(c, 9));
  /* 108a10: mov x9, x25 */
  ARC_X_W(c, 9, ARC_X_R(c, 25));
  /* 108a14: b #0x108a20 */
  goto L_108a20;
L_108a18:;
  /* 108a18: ldr x9, [sp, #0x28] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(40))));
  /* 108a1c: str x8, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 8));
L_108a20:;
  /* 108a20: strb wzr, [x9, x8] */
  arc_st8((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_W_R(c, 31));
L_108a24:;
  /* 108a24: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* 108a28: ldr x9, [sp, #0x28] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(40))));
  /* 108a2c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 108a30: csel x19, x25, x9, eq */
  ARC_X_W(c, 19, (ARC_COND(c, 0) ? (ARC_X_R(c, 25)) : ARC_X_R(c, 9)));
  /* 108a34: add x22, x19, x24 */
  ARC_X_W(c, 22, (ARC_X_R(c, 19) + ARC_X_R(c, 24)));
L_108a38:;
  /* 108a38: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 108a3c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 108a40: b.eq #0x108a4c */
  if (ARC_COND(c, 0)) goto L_108a4c;
  /* 108a44: ldr w1, [x8] */
  ARC_W_W(c, 1, arc_ld32(ARC_X_R(c, 8)));
  /* 108a48: b #0x108a60 */
  goto L_108a60;
L_108a4c:;
  /* 108a4c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 108a50: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 108a54: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 108a58: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1083996));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 108a5c: mov w1, w0 */
  ARC_W_W(c, 1, ARC_W_R(c, 0));
L_108a60:;
  /* 108a60: cmp x22, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 19));
  /* 108a64: b.eq #0x108ab8 */
  if (ARC_COND(c, 0)) goto L_108ab8;
L_108a68:;
  /* 108a68: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 108a6c: mov w2, #0x1a */
  ARC_W_W(c, 2, UINT64_C(26));
  /* 108a70: bl #0x142e48 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1084020));
  fn1_142e48(c);
  /* 108a74: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* 108a78: csel x8, x27, x0, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 27)) : ARC_X_R(c, 0)));
  /* 108a7c: sub x8, x8, x26 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 26)));
  /* 108a80: asr x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* 108a84: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* 108a88: b.gt #0x108b0c */
  if (ARC_COND(c, 12)) goto L_108b0c;
  /* 108a8c: cmp x8, #0x16 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(22));
  /* 108a90: b.lt #0x108ab0 */
  if (ARC_COND(c, 11)) goto L_108ab0;
  /* 108a94: subs x9, x22, x19 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 19)));
  /* 108a98: b.eq #0x108b0c */
  if (ARC_COND(c, 0)) goto L_108b0c;
  /* 108a9c: cmp x9, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(2));
  /* 108aa0: b.gt #0x108b0c */
  if (ARC_COND(c, 12)) goto L_108b0c;
  /* 108aa4: ldurb w9, [x22, #-1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 22) + INT64_C(-1))));
  /* 108aa8: cmp w9, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(48));
  /* 108aac: b.ne #0x108b0c */
  if (ARC_COND(c, 1)) goto L_108b0c;
L_108ab0:;
  /* 108ab0: ldrb w8, [x23, x8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 23) + ARC_X_R(c, 8))));
  /* 108ab4: b #0x108adc */
  goto L_108adc;
L_108ab8:;
  /* 108ab8: ldr w8, [sp, #0x98] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(152))));
  /* 108abc: cmp w1, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 1), ARC_W_R(c, 8));
  /* 108ac0: b.ne #0x108acc */
  if (ARC_COND(c, 1)) goto L_108acc;
  /* 108ac4: mov w8, #0x2b */
  ARC_W_W(c, 8, UINT64_C(43));
  /* 108ac8: b #0x108adc */
  goto L_108adc;
L_108acc:;
  /* 108acc: ldr w8, [sp, #0x9c] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(156))));
  /* 108ad0: cmp w1, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 1), ARC_W_R(c, 8));
  /* 108ad4: b.ne #0x108a68 */
  if (ARC_COND(c, 1)) goto L_108a68;
  /* 108ad8: mov w8, #0x2d */
  ARC_W_W(c, 8, UINT64_C(45));
L_108adc:;
  /* 108adc: strb w8, [x22], #1 */
  { const uint64_t _a = ARC_X_R(c, 22);
    ARC_X_W(c, 22, ARC_X_R(c, 22) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* 108ae0: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 108ae4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 108ae8: b.ne #0x1088d4 */
  if (ARC_COND(c, 1)) goto L_1088d4;
  /* 108aec: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 108af0: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 108af4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 108af8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1084156));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 108afc: b #0x1088dc */
  goto L_1088dc;
L_108b00:;
  /* 108b00: mov x21, x20 */
  ARC_X_W(c, 21, ARC_X_R(c, 20));
  /* 108b04: b #0x108b0c */
  goto L_108b0c;
L_108b08:;
  /* 108b08: mov x20, x21 */
  ARC_X_W(c, 20, ARC_X_R(c, 21));
L_108b0c:;
  /* 108b0c: ldrb w9, [sp, #0x18] */
  ARC_W_W(c, 9, arc_ld8(((c)->sp + INT64_C(24))));
  /* 108b10: ldr x10, [sp, #0x20] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(32))));
  /* 108b14: sub x8, x22, x19 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) - ARC_X_R(c, 19)));
  /* 108b18: ldp x24, x22, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 22, arc_ld64(_pa + 8));
  }
  /* 108b1c: lsr x11, x9, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 108b20: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 108b24: csel x10, x11, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 108b28: subs x1, x8, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10)));
  /* 108b2c: b.ls #0x108b40 */
  if (ARC_COND(c, 9)) goto L_108b40;
  /* 108b30: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 108b34: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 108b38: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1084220));
  fn1_142d10(c);
  /* 108b3c: b #0x108b60 */
  goto L_108b60;
L_108b40:;
  /* 108b40: tbnz w9, #0, #0x108b54 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_108b54;
  /* 108b44: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* 108b48: strb w9, [sp, #0x18] */
  arc_st8(((c)->sp + INT64_C(24)), ARC_W_R(c, 9));
  /* 108b4c: mov x9, x25 */
  ARC_X_W(c, 9, ARC_X_R(c, 25));
  /* 108b50: b #0x108b5c */
  goto L_108b5c;
L_108b54:;
  /* 108b54: ldr x9, [sp, #0x28] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(40))));
  /* 108b58: str x8, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 8));
L_108b5c:;
  /* 108b5c: strb wzr, [x9, x8] */
  arc_st8((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_W_R(c, 31));
L_108b60:;
  /* 108b60: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* 108b64: ldr x9, [sp, #0x28] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(40))));
  /* 108b68: nop  */
  /* nop: no architectural effect here */
  /* 108b6c: adr x10, #0x15dc38 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 108b70: adrp x19, #0x15d000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 108b74: ldarb w10, [x10] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 10)));
  /* 108b78: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 108b7c: csel x23, x25, x9, eq */
  ARC_X_W(c, 23, (ARC_COND(c, 0) ? (ARC_X_R(c, 25)) : ARC_X_R(c, 9)));
  /* 108b80: tbz w10, #0, #0x108c80 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) == 0) goto L_108c80;
L_108b84:;
  /* 108b84: ldr x1, [x19, #0xc30] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(3120))));
  /* 108b88: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 108b8c: mov x3, x24 */
  ARC_X_W(c, 3, ARC_X_R(c, 24));
  /* 108b90: bl #0x136480 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1084308));
  fn1_136480(c);
  /* 108b94: cmp w0, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(1));
  /* 108b98: b.eq #0x108ba4 */
  if (ARC_COND(c, 0)) goto L_108ba4;
  /* 108b9c: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 108ba0: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_108ba4:;
  /* 108ba4: cbz x20, #0x108bbc */
  if ((ARC_X_R(c, 20)) == 0) goto L_108bbc;
  /* 108ba8: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 108bac: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 108bb0: b.eq #0x108bc8 */
  if (ARC_COND(c, 0)) goto L_108bc8;
  /* 108bb4: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 108bb8: b #0x108bd8 */
  goto L_108bd8;
L_108bbc:;
  /* 108bbc: cbz x21, #0x108c30 */
  if ((ARC_X_R(c, 21)) == 0) goto L_108c30;
  /* 108bc0: mov w19, #1 */
  ARC_W_W(c, 19, UINT64_C(1));
  /* 108bc4: b #0x108bec */
  goto L_108bec;
L_108bc8:;
  /* 108bc8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 108bcc: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 108bd0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 108bd4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1084376));
  arc_dispatch(c, ARC_X_R(c, 8));
L_108bd8:;
  /* 108bd8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 108bdc: cset w19, eq */
  ARC_W_W(c, 19, (ARC_COND(c, 0) ? 1 : 0));
  /* 108be0: csel x8, xzr, x20, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 20)));
  /* 108be4: cbz x21, #0x108c24 */
  if ((ARC_X_R(c, 21)) == 0) goto L_108c24;
  /* 108be8: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
L_108bec:;
  /* 108bec: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 108bf0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 108bf4: b.eq #0x108c00 */
  if (ARC_COND(c, 0)) goto L_108c00;
  /* 108bf8: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 108bfc: b #0x108c10 */
  goto L_108c10;
L_108c00:;
  /* 108c00: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 108c04: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 108c08: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 108c0c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1084432));
  arc_dispatch(c, ARC_X_R(c, 8));
L_108c10:;
  /* 108c10: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 108c14: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 108c18: eor w8, w19, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 19) ^ ARC_W_R(c, 8)));
  /* 108c1c: tbz w8, #0, #0x108c30 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_108c30;
  /* 108c20: b #0x108c3c */
  goto L_108c3c;
L_108c24:;
  /* 108c24: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 108c28: b.ne #0x108c3c */
  if (ARC_COND(c, 1)) goto L_108c3c;
  /* 108c2c: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
L_108c30:;
  /* 108c30: ldr w8, [x22] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 22)));
  /* 108c34: orr w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(2)));
  /* 108c38: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_108c3c:;
  /* 108c3c: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* 108c40: tbz w8, #0, #0x108c54 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_108c54;
  /* 108c44: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 108c48: ldr x0, [sp, #0x28] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(40))));
  /* 108c4c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 108c50: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1084500));
  fn1_142608(c);
L_108c54:;
  /* 108c54: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 108c58: ldp x20, x19, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 108c5c: ldp x22, x21, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 108c60: ldp x24, x23, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 108c64: ldp x26, x25, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 108c68: ldp x28, x27, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 108c6c: ldp x29, x30, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 108c70: add sp, sp, #0x100 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(256)));
  /* 108c74: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 108c78: ret  */
  return;
L_108c7c:;
  /* 108c7c: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1084544));
  fn1_fc3b8(c);
L_108c80:;
  /* 108c80: nop  */
  /* nop: no architectural effect here */
  /* 108c84: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 108c88: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1084556));
  fn1_1424b8(c);
  /* 108c8c: cbz w0, #0x108b84 */
  if ((ARC_W_R(c, 0)) == 0) goto L_108b84;
  /* 108c90: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 108c94: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 108c98: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 108c9c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 108ca0: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1084580));
  fn1_1441e0(c);
  /* 108ca4: str x0, [x19, #0xc30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 108ca8: nop  */
  /* nop: no architectural effect here */
  /* 108cac: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 108cb0: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1084596));
  fn1_1424d0(c);
  /* 108cb4: ldp x24, x22, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 22, arc_ld64(_pa + 8));
  }
  /* 108cb8: b #0x108b84 */
  goto L_108b84;
  /* 108cbc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 108cc0: nop  */
  /* nop: no architectural effect here */
  /* 108cc4: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 108cc8: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1084620));
  fn1_1424e8(c);
  /* 108ccc: b #0x108d0c */
  goto L_108d0c;
  /* 108cd0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 108cd4: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 108cd8: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1084636));
  fn1_d2a78(c);
  /* 108cdc: b #0x108cf8 */
  goto L_108cf8;
  /* 108ce0: b #0x108d08 */
  goto L_108d08;
  /* 108ce4: b #0x108d08 */
  goto L_108d08;
  /* 108ce8: b #0x108d08 */
  goto L_108d08;
  /* 108cec: b #0x108cf4 */
  goto L_108cf4;
  /* 108cf0: b #0x108d08 */
  goto L_108d08;
L_108cf4:;
  /* 108cf4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_108cf8:;
  /* 108cf8: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 108cfc: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1084672));
  fn1_143478(c);
  /* 108d00: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 108d04: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1084680));
  fn1_9cc20(c);
L_108d08:;
  /* 108d08: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_108d0c:;
  /* 108d0c: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* 108d10: tbz w8, #0, #0x108d24 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_108d24;
  /* 108d14: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 108d18: ldr x0, [sp, #0x28] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(40))));
  /* 108d1c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 108d20: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1084708));
  fn1_142608(c);
L_108d24:;
  /* 108d24: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 108d28: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1084716));
  fn1_9cc20(c);
}

void fn1_111f14(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039050004));
  /* 111f14: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 111f18: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 111f1c: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 111f20: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 111f24: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 111f28: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 111f2c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 111f30: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 111f34: mov x2, x4 */
  ARC_X_W(c, 2, ARC_X_R(c, 4));
  /* 111f38: mov x3, x5 */
  ARC_X_W(c, 3, ARC_X_R(c, 5));
  /* 111f3c: mov w4, #4 */
  ARC_W_W(c, 4, UINT64_C(4));
  /* 111f40: bl #0x112ec0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1122116));
  fn1_112ec0(c);
  /* 111f44: ldrb w8, [x20] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 20)));
  /* 111f48: tbnz w8, #2, #0x111f6c */
  if (((ARC_W_R(c, 8)) >> 2 & 1) != 0) goto L_111f6c;
  /* 111f4c: add w8, w0, #0x76c */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1900)));
  /* 111f50: cmp w0, #0x64 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(100));
  /* 111f54: add w9, w0, #0x7d0 */
  ARC_W_W(c, 9, (ARC_W_R(c, 0) + UINT64_C(2000)));
  /* 111f58: csel w8, w8, w0, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 0)));
  /* 111f5c: cmp w0, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(69));
  /* 111f60: csel w8, w9, w8, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* 111f64: sub w8, w8, #0x76c */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1900)));
  /* 111f68: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_111f6c:;
  /* 111f6c: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 111f70: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 111f74: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 111f78: ret  */
  return;
}

void fn1_113ebc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039058108));
  /* 113ebc: bti c */
  /* bti: no architectural effect here */
  /* 113ec0: ldr w0, [x0, #0x7c] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(124))));
  /* 113ec4: ret  */
  return;
}

void fn1_11ae64(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039086692));
  /* 11ae64: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 11ae68: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 11ae6c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 11ae70: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 11ae74: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 11ae78: bl #0x143e38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1158780));
  fn1_143e38(c);
  /* 11ae7c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11ae80: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* 11ae84: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 11ae88: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 11ae8c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 11ae90: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_125f68(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039132008));
  /* 125f68: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 125f6c: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 125f70: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 125f74: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 125f78: ldr x9, [x9, #0xc68] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(3176))));
  /* 125f7c: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 125f80: add x9, x9, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* 125f84: str x9, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 9));
  /* 125f88: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 125f8c: bl #0x144210 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1204112));
  fn1_144210(c);
  /* 125f90: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 125f94: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 125f98: ret  */
  return;
  /* 125f9c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1204128));
  fn1_a1454(c);
}

void fn1_12859c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039141788));
  /* 12859c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1285a0: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1285a4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1285a8: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1285ac: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1285b0: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1285b4: ldr x0, [x0, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1285b8: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* 1285bc: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* 1285c0: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 1285c4: str x2, [x4] */
  arc_st64(ARC_X_R(c, 4), ARC_X_R(c, 2));
  /* 1285c8: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1213900));
  fn1_1443c0(c);
  /* 1285cc: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1285d0: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* 1285d4: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* 1285d8: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1285dc: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1285e0: bl #0x144408 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1213924));
  fn1_144408(c);
  /* 1285e4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1285e8: cbz x22, #0x1285f4 */
  if ((ARC_X_R(c, 22)) == 0) goto L_1285f4;
  /* 1285ec: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1285f0: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1213940));
  fn1_1443c0(c);
L_1285f4:;
  /* 1285f4: add x8, x21, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* 1285f8: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* 1285fc: b.hs #0x128608 */
  if (ARC_COND(c, 2)) goto L_128608;
  /* 128600: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
  /* 128604: b #0x12864c */
  goto L_12864c;
L_128608:;
  /* 128608: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* 12860c: sub x8, x21, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) - UINT64_C(1)));
  /* 128610: sub x9, x20, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) - ARC_X_R(c, 9)));
  /* 128614: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 128618: b.ls #0x128624 */
  if (ARC_COND(c, 9)) goto L_128624;
  /* 12861c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 128620: b #0x12864c */
  goto L_12864c;
L_128624:;
  /* 128624: cbz x8, #0x128648 */
  if ((ARC_X_R(c, 8)) == 0) goto L_128648;
  /* 128628: add x9, sp, #4 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(4)));
L_12862c:;
  /* 12862c: ldr x10, [x19] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 19)));
  /* 128630: ldrb w11, [x9], #1 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(1));
    ARC_W_W(c, 11, arc_ld8(_a));
  }
  /* 128634: subs x8, x8, #1 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1)));
  /* 128638: add x12, x10, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* 12863c: str x12, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 12));
  /* 128640: strb w11, [x10] */
  arc_st8(ARC_X_R(c, 10), ARC_W_R(c, 11));
  /* 128644: b.ne #0x12862c */
  if (ARC_COND(c, 1)) goto L_12862c;
L_128648:;
  /* 128648: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
L_12864c:;
  /* 12864c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 128650: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 128654: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 128658: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 12865c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 128660: ret  */
  return;
  /* 128664: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1214056));
  fn1_a1454(c);
  /* 128668: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12866c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 128670: bl #0x135428 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1214068));
  fn1_135428(c);
  /* 128674: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 128678: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1214076));
  fn1_9cc20(c);
}

void fn1_12a2a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039149224));
  /* 12a2a8: bti c */
  /* bti: no architectural effect here */
  /* 12a2ac: ldrb w9, [x0, #0x20] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(32))));
  /* 12a2b0: ldr x8, [x0, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12a2b4: tbz w9, #1, #0x12a2d4 */
  if (((ARC_W_R(c, 9)) >> 1 & 1) == 0) goto L_12a2d4;
  /* 12a2b8: sub x9, x6, x5 */
  ARC_X_W(c, 9, (ARC_X_R(c, 6) - ARC_X_R(c, 5)));
  /* 12a2bc: cmp x9, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(2));
  /* 12a2c0: b.ge #0x12a2cc */
  if (ARC_COND(c, 10)) goto L_12a2cc;
L_12a2c4:;
  /* 12a2c4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 12a2c8: b #0x12a374 */
  goto L_12a374;
L_12a2cc:;
  /* 12a2cc: mov w9, #0xfffe */
  ARC_W_W(c, 9, UINT64_C(65534));
  /* 12a2d0: strh w9, [x5], #2 */
  { const uint64_t _a = ARC_X_R(c, 5);
    ARC_X_W(c, 5, ARC_X_R(c, 5) + INT64_C(2));
    arc_st16(_a, ARC_W_R(c, 9));
  }
L_12a2d4:;
  /* 12a2d4: cmp x2, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 3));
  /* 12a2d8: b.hs #0x12a368 */
  if (ARC_COND(c, 2)) goto L_12a368;
  /* 12a2dc: mov w9, #0x3fc0 */
  ARC_W_W(c, 9, UINT64_C(16320));
  /* 12a2e0: mov w10, #0xd8 */
  ARC_W_W(c, 10, UINT64_C(216));
  /* 12a2e4: b #0x12a2f8 */
  goto L_12a2f8;
L_12a2e8:;
  /* 12a2e8: add x2, x2, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(4)));
  /* 12a2ec: strb w11, [x5], #1 */
  { const uint64_t _a = ARC_X_R(c, 5);
    ARC_X_W(c, 5, ARC_X_R(c, 5) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 11));
  }
  /* 12a2f0: cmp x2, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 3));
  /* 12a2f4: b.hs #0x12a368 */
  if (ARC_COND(c, 2)) goto L_12a368;
L_12a2f8:;
  /* 12a2f8: ldr w11, [x2] */
  ARC_W_W(c, 11, arc_ld32(ARC_X_R(c, 2)));
  /* 12a2fc: lsr w12, w11, #0xb */
  ARC_W_W(c, 12, ((uint32_t)(ARC_W_R(c, 11)) >> ((UINT64_C(11)) & 31)));
  /* 12a300: cmp w12, #0x1b */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(27));
  /* 12a304: ccmp x8, x11, #0, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* 12a308: b.lo #0x12a370 */
  if (ARC_COND(c, 3)) goto L_12a370;
  /* 12a30c: lsr w13, w11, #0x10 */
  ARC_W_W(c, 13, ((uint32_t)(ARC_W_R(c, 11)) >> ((UINT64_C(16)) & 31)));
  /* 12a310: sub x12, x6, x5 */
  ARC_X_W(c, 12, (ARC_X_R(c, 6) - ARC_X_R(c, 5)));
  /* 12a314: cbnz w13, #0x12a32c */
  if ((ARC_W_R(c, 13)) != 0) goto L_12a32c;
  /* 12a318: cmp x12, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(2));
  /* 12a31c: b.lt #0x12a2c4 */
  if (ARC_COND(c, 11)) goto L_12a2c4;
  /* 12a320: lsr w12, w11, #8 */
  ARC_W_W(c, 12, ((uint32_t)(ARC_W_R(c, 11)) >> ((UINT64_C(8)) & 31)));
  /* 12a324: strb w12, [x5], #1 */
  { const uint64_t _a = ARC_X_R(c, 5);
    ARC_X_W(c, 5, ARC_X_R(c, 5) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 12));
  }
  /* 12a328: b #0x12a2e8 */
  goto L_12a2e8;
L_12a32c:;
  /* 12a32c: cmp x12, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(4));
  /* 12a330: b.lt #0x12a2c4 */
  if (ARC_COND(c, 11)) goto L_12a2c4;
  /* 12a334: lsr w12, w11, #0xa */
  ARC_W_W(c, 12, ((uint32_t)(ARC_W_R(c, 11)) >> ((UINT64_C(10)) & 31)));
  /* 12a338: mov w14, #0xdc */
  ARC_W_W(c, 14, UINT64_C(220));
  /* 12a33c: bfxil w14, w11, #8, #2 */
  ARC_W_W(c, 14, (((uint32_t)(ARC_W_R(c, 14)) & UINT64_C(4294967292)) | ((((uint32_t)(ARC_W_R(c, 11))) >> 8) & UINT64_C(3))));
  /* 12a340: and w12, w12, #0x7c0 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) & UINT64_C(1984)));
  /* 12a344: add w12, w12, w9 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) + ARC_W_R(c, 9)));
  /* 12a348: strb w14, [x5, #2] */
  arc_st8((ARC_X_R(c, 5) + INT64_C(2)), ARC_W_R(c, 14));
  /* 12a34c: orr w13, w10, w12, lsr #8 */
  ARC_W_W(c, 13, (ARC_W_R(c, 10) | ((uint32_t)(ARC_W_R(c, 12)) >> 8)));
  /* 12a350: bfxil w12, w11, #0xa, #6 */
  ARC_W_W(c, 12, (((uint32_t)(ARC_W_R(c, 12)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 11))) >> 10) & UINT64_C(63))));
  /* 12a354: strb w12, [x5, #1] */
  arc_st8((ARC_X_R(c, 5) + INT64_C(1)), ARC_W_R(c, 12));
  /* 12a358: add x12, x5, #3 */
  ARC_X_W(c, 12, (ARC_X_R(c, 5) + UINT64_C(3)));
  /* 12a35c: strb w13, [x5] */
  arc_st8(ARC_X_R(c, 5), ARC_W_R(c, 13));
  /* 12a360: mov x5, x12 */
  ARC_X_W(c, 5, ARC_X_R(c, 12));
  /* 12a364: b #0x12a2e8 */
  goto L_12a2e8;
L_12a368:;
  /* 12a368: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 12a36c: b #0x12a374 */
  goto L_12a374;
L_12a370:;
  /* 12a370: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
L_12a374:;
  /* 12a374: str x2, [x4] */
  arc_st64(ARC_X_R(c, 4), ARC_X_R(c, 2));
  /* 12a378: str x5, [x7] */
  arc_st64(ARC_X_R(c, 7), ARC_X_R(c, 5));
  /* 12a37c: ret  */
  return;
}

void fn1_12baf0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039155440));
  /* 12baf0: bti c */
  /* bti: no architectural effect here */
  /* 12baf4: ldrb w9, [x0, #0x18] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12baf8: mov w8, #7 */
  ARC_W_W(c, 8, UINT64_C(7));
  /* 12bafc: tst w9, #4 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(4)));
  /* 12bb00: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 12bb04: csel w0, w9, w8, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* 12bb08: ret  */
  return;
}

void fn1_131644(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039178820));
  /* 131644: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 131648: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13164c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 131650: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 131654: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 131658: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13165c: ldr x8, [x8, #0xc78] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3192))));
  /* 131660: ldr x0, [x0, #0x20] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(32))));
  /* 131664: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 131668: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 13166c: bl #0x144210 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1250928));
  fn1_144210(c);
  /* 131670: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 131674: ldr x8, [x8, #0xc70] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3184))));
  /* 131678: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 13167c: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 131680: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 131684: cbz x0, #0x1316a4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1316a4;
  /* 131688: ldrb w8, [x19, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(24))));
  /* 13168c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 131690: b.ne #0x1316a4 */
  if (ARC_COND(c, 1)) goto L_1316a4;
  /* 131694: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 131698: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13169c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1316a0: b #0x1425a8 */
  fn1_1425a8(c); return;
L_1316a4:;
  /* 1316a4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1316a8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1316ac: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1316b0: ret  */
  return;
  /* 1316b4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251000));
  fn1_a1454(c);
}

void fn1_134b78(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192440));
  /* 134b78: bti c */
  /* bti: no architectural effect here */
  /* 134b7c: add x0, x0, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* 134b80: ret  */
  return;
}

void fn1_1369ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039200236));
  /* 1369ec: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1369f0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1369f4: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1369f8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1369fc: ldrb w8, [x0, #0x410] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(1040))));
  /* 136a00: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 136a04: tbnz w8, #0, #0x136ab4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_136ab4;
  /* 136a08: ldrb w8, [x19, #0x3f8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(1016))));
  /* 136a0c: tbnz w8, #0, #0x136acc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_136acc;
L_136a10:;
  /* 136a10: ldrb w8, [x19, #0x3e0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(992))));
  /* 136a14: tbnz w8, #0, #0x136ae4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_136ae4;
L_136a18:;
  /* 136a18: ldrb w8, [x19, #0x3c8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(968))));
  /* 136a1c: tbnz w8, #0, #0x136afc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_136afc;
L_136a20:;
  /* 136a20: ldrb w8, [x19, #0x3b0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(944))));
  /* 136a24: tbnz w8, #0, #0x136b14 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_136b14;
L_136a28:;
  /* 136a28: ldrb w8, [x19, #0x398] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(920))));
  /* 136a2c: tbz w8, #0, #0x136a40 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_136a40;
L_136a30:;
  /* 136a30: ldr x8, [x19, #0x398] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(920))));
  /* 136a34: ldr x0, [x19, #0x3a8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(936))));
  /* 136a38: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 136a3c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1272384));
  fn1_142608(c);
L_136a40:;
  /* 136a40: mov w20, #0x240 */
  ARC_W_W(c, 20, UINT64_C(576));
  /* 136a44: b #0x136a50 */
  goto L_136a50;
L_136a48:;
  /* 136a48: subs x20, x20, #0x18 */
  ARC_X_W(c, 20, arc_sub64(c, ARC_X_R(c, 20), UINT64_C(24)));
  /* 136a4c: b.eq #0x136a7c */
  if (ARC_COND(c, 0)) goto L_136a7c;
L_136a50:;
  /* 136a50: add x8, x19, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 20)));
  /* 136a54: ldrb w9, [x8, #0x140] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(320))));
  /* 136a58: tbz w9, #0, #0x136a48 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_136a48;
  /* 136a5c: ldr x0, [x8, #0x150] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(336))));
  /* 136a60: ldr x8, [x8, #0x140] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(320))));
  /* 136a64: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 136a68: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1272428));
  fn1_142608(c);
  /* 136a6c: b #0x136a48 */
  goto L_136a48;
L_136a70:;
  /* 136a70: sub x20, x20, #0x18 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) - UINT64_C(24)));
  /* 136a74: cmn x20, #0x150 */
  (void)arc_add64(c, ARC_X_R(c, 20), UINT64_C(336), 0);
  /* 136a78: b.eq #0x136a9c */
  if (ARC_COND(c, 0)) goto L_136a9c;
L_136a7c:;
  /* 136a7c: add x8, x19, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 20)));
  /* 136a80: ldrb w9, [x8, #0x140] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(320))));
  /* 136a84: tbz w9, #0, #0x136a70 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_136a70;
  /* 136a88: ldr x0, [x8, #0x150] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(336))));
  /* 136a8c: ldr x8, [x8, #0x140] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(320))));
  /* 136a90: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 136a94: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1272472));
  fn1_142608(c);
  /* 136a98: b #0x136a70 */
  goto L_136a70;
L_136a9c:;
  /* 136a9c: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* 136aa0: bl #0x144210 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1272484));
  fn1_144210(c);
  /* 136aa4: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 136aa8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 136aac: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 136ab0: ret  */
  return;
L_136ab4:;
  /* 136ab4: ldr x8, [x19, #0x410] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(1040))));
  /* 136ab8: ldr x0, [x19, #0x420] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(1056))));
  /* 136abc: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 136ac0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1272516));
  fn1_142608(c);
  /* 136ac4: ldrb w8, [x19, #0x3f8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(1016))));
  /* 136ac8: tbz w8, #0, #0x136a10 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_136a10;
L_136acc:;
  /* 136acc: ldr x8, [x19, #0x3f8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(1016))));
  /* 136ad0: ldr x0, [x19, #0x408] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(1032))));
  /* 136ad4: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 136ad8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1272540));
  fn1_142608(c);
  /* 136adc: ldrb w8, [x19, #0x3e0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(992))));
  /* 136ae0: tbz w8, #0, #0x136a18 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_136a18;
L_136ae4:;
  /* 136ae4: ldr x8, [x19, #0x3e0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(992))));
  /* 136ae8: ldr x0, [x19, #0x3f0] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(1008))));
  /* 136aec: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 136af0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1272564));
  fn1_142608(c);
  /* 136af4: ldrb w8, [x19, #0x3c8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(968))));
  /* 136af8: tbz w8, #0, #0x136a20 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_136a20;
L_136afc:;
  /* 136afc: ldr x8, [x19, #0x3c8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(968))));
  /* 136b00: ldr x0, [x19, #0x3d8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(984))));
  /* 136b04: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 136b08: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1272588));
  fn1_142608(c);
  /* 136b0c: ldrb w8, [x19, #0x3b0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(944))));
  /* 136b10: tbz w8, #0, #0x136a28 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_136a28;
L_136b14:;
  /* 136b14: ldr x8, [x19, #0x3b0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(944))));
  /* 136b18: ldr x0, [x19, #0x3c0] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(960))));
  /* 136b1c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 136b20: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1272612));
  fn1_142608(c);
  /* 136b24: ldrb w8, [x19, #0x398] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(920))));
  /* 136b28: tbnz w8, #0, #0x136a30 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_136a30;
  /* 136b2c: b #0x136a40 */
  goto L_136a40;
  /* 136b30: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1272628));
  fn1_a1454(c);
}

void fn1_13977c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039211900));
  /* 13977c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 139780: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 139784: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* 139788: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13978c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 139790: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 139794: mov w0, #0x60 */
  ARC_W_W(c, 0, UINT64_C(96));
  /* 139798: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 13979c: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* 1397a0: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1397a4: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1284008));
  fn1_1428f0(c);
  /* 1397a8: ldrb w8, [x23] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 23)));
  /* 1397ac: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1397b0: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1397b4: add x9, x9, #0x5a8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1448)));
  /* 1397b8: add x21, x0, #0x18 */
  ARC_X_W(c, 21, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* 1397bc: stp xzr, xzr, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1397c0: str x9, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 9));
  /* 1397c4: tbnz w8, #0, #0x1397dc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1397dc;
  /* 1397c8: ldr q0, [x23] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 23)), arc_ld64(ARC_X_R(c, 23) + 8));
  /* 1397cc: ldr x8, [x23, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 23) + INT64_C(16))));
  /* 1397d0: str q0, [x21] */
  arc_st64(ARC_X_R(c, 21), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 21) + 8, (c)->q[0].u64[1]);
  /* 1397d4: str x8, [x21, #0x10] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(16)), ARC_X_R(c, 8));
  /* 1397d8: b #0x1397e8 */
  goto L_1397e8;
L_1397dc:;
  /* 1397dc: ldp x2, x1, [x23, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(8));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 1397e0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1397e4: bl #0xda588 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1284072));
  fn1_da588(c);
L_1397e8:;
  /* 1397e8: ldrb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 1397ec: tbnz w8, #0, #0x139804 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_139804;
  /* 1397f0: ldr q0, [x22] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 22)), arc_ld64(ARC_X_R(c, 22) + 8));
  /* 1397f4: ldr x8, [x22, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 1397f8: stur q0, [x19, #0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)) + 8, (c)->q[0].u64[1]);
  /* 1397fc: stur x8, [x19, #0x40] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(64)), ARC_X_R(c, 8));
  /* 139800: b #0x139810 */
  goto L_139810;
L_139804:;
  /* 139804: ldp x2, x1, [x22, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 22) + INT64_C(8));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 139808: add x0, x19, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(48)));
  /* 13980c: bl #0xda588 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1284112));
  fn1_da588(c);
L_139810:;
  /* 139810: stp xzr, xzr, [x19, #0x48] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(72));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 139814: str xzr, [x19, #0x58] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(88)), ARC_X_R(c, 31));
  /* 139818: stp x21, x19, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13981c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 139820: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 139824: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 139828: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13982c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 139830: ret  */
  return;
  /* 139834: ldrb w8, [x21] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 21)));
  /* 139838: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 13983c: tbz w8, #0, #0x139858 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_139858;
  /* 139840: ldr x8, [x19, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* 139844: ldr x0, [x19, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(40))));
  /* 139848: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13984c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1284176));
  fn1_142608(c);
  /* 139850: b #0x139858 */
  goto L_139858;
  /* 139854: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_139858:;
  /* 139858: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13985c: mov w1, #0x60 */
  ARC_W_W(c, 1, UINT64_C(96));
  /* 139860: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1284196));
  fn1_142608(c);
  /* 139864: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 139868: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1284204));
  fn1_9cc20(c);
}

void fn1_13ff18(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039238424));
  /* 13ff18: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13ff1c: sub sp, sp, #0x110 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(272)));
  /* 13ff20: stp x29, x30, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13ff24: stp x28, x21, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13ff28: stp x20, x19, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13ff2c: add x29, sp, #0xe0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(224)));
  /* 13ff30: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 13ff34: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13ff38: nop  */
  /* nop: no architectural effect here */
  /* 13ff3c: adr x21, #0x156d40 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13ff40: cbz x1, #0x13ff60 */
  if ((ARC_X_R(c, 1)) == 0) goto L_13ff60;
  /* 13ff44: str wzr, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 31));
  /* 13ff48: nop  */
  /* nop: no architectural effect here */
  /* 13ff4c: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13ff50: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13ff54: tbz w8, #0, #0x140080 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_140080;
L_13ff58:;
  /* 13ff58: str x21, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 21));
  /* 13ff5c: b #0x13ff70 */
  goto L_13ff70;
L_13ff60:;
  /* 13ff60: nop  */
  /* nop: no architectural effect here */
  /* 13ff64: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13ff68: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13ff6c: tbz w8, #0, #0x140100 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_140100;
L_13ff70:;
  /* 13ff70: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 13ff74: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 13ff78: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 13ff7c: stur wzr, [x29, #-0x48] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-72)), ARC_W_R(c, 31));
  /* 13ff80: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 13ff84: stur x21, [x29, #-0x40] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-64)), ARC_X_R(c, 21));
  /* 13ff88: csinc x0, x9, x19, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* 13ff8c: stur wzr, [x29, #-0x20] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-32)), ARC_W_R(c, 31));
  /* 13ff90: stur x21, [x29, #-0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-24)), ARC_X_R(c, 21));
  /* 13ff94: bl #0x144588 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1310616));
  fn1_144588(c);
  /* 13ff98: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 13ff9c: b.ne #0x13ffc4 */
  if (ARC_COND(c, 1)) goto L_13ffc4;
  /* 13ffa0: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1310628));
  fn1_142a58(c);
  /* 13ffa4: nop  */
  /* nop: no architectural effect here */
  /* 13ffa8: adr x9, #0x159208 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13ffac: ldr w8, [x0] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 0)));
  /* 13ffb0: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 13ffb4: tbz w9, #0, #0x140120 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_140120;
L_13ffb8:;
  /* 13ffb8: nop  */
  /* nop: no architectural effect here */
  /* 13ffbc: adr x9, #0x156d38 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13ffc0: stp x8, x9, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
L_13ffc4:;
  /* 13ffc4: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* 13ffc8: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 13ffcc: add x2, sp, #0x18 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(24)));
  /* 13ffd0: sub x3, x29, #0x48 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 13ffd4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 13ffd8: bl #0x1388e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1310684));
  fn1_1388e8(c);
  /* 13ffdc: ldur w8, [x29, #-0x48] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 29) + INT64_C(-72))));
  /* 13ffe0: cbz w8, #0x13fffc */
  if ((ARC_W_R(c, 8)) == 0) goto L_13fffc;
  /* 13ffe4: cbz x20, #0x1400a0 */
  if ((ARC_X_R(c, 20)) == 0) goto L_1400a0;
  /* 13ffe8: ldur q0, [x29, #-0x48] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-72))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-72)) + 8));
  /* 13ffec: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 13fff0: mov x1, #-0x8000000000000000 */
  ARC_X_W(c, 1, UINT64_C(9223372036854775808));
  /* 13fff4: str q0, [x20] */
  arc_st64(ARC_X_R(c, 20), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 20) + 8, (c)->q[0].u64[1]);
  /* 13fff8: b #0x140068 */
  goto L_140068;
L_13fffc:;
  /* 13fffc: cbz x20, #0x140008 */
  if ((ARC_X_R(c, 20)) == 0) goto L_140008;
  /* 140000: str wzr, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 31));
  /* 140004: str x21, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 21));
L_140008:;
  /* 140008: ldp x9, x8, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 14000c: tbz x9, #0x3f, #0x14004c */
  if (((ARC_X_R(c, 9)) >> 63 & 1) == 0) goto L_14004c;
  /* 140010: cbz x8, #0x14004c */
  if ((ARC_X_R(c, 8)) == 0) goto L_14004c;
  /* 140014: mov w10, #0xca00 */
  ARC_W_W(c, 10, UINT64_C(51712));
  /* 140018: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 14001c: movk w10, #0x3b9a, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(999948288)));
  /* 140020: mul x11, x9, x10 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 10))));
  /* 140024: smulh x9, x9, x10 */
  ARC_X_W(c, 9, arc_smulh(ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 140028: asr x10, x8, #0x3f */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(63)) & 63))));
  /* 14002c: adds x8, x8, x11 */
  ARC_X_W(c, 8, arc_add64(c, ARC_X_R(c, 8), ARC_X_R(c, 11), 0));
  /* 140030: mov x11, #-0xca00 */
  ARC_X_W(c, 11, UINT64_C(18446744073709499904));
  /* 140034: movk x11, #0xc465, lsl #16 */
  ARC_X_W(c, 11, ((ARC_X_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(3294953472)));
  /* 140038: adc x9, x10, x9 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) + (uint64_t)(ARC_X_R(c, 9)) + (c)->cf));
  /* 14003c: adds x0, x8, x11 */
  ARC_X_W(c, 0, arc_add64(c, ARC_X_R(c, 8), ARC_X_R(c, 11), 0));
  /* 140040: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 140044: adc x1, x9, x8 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 9)) + (uint64_t)(ARC_X_R(c, 8)) + (c)->cf));
  /* 140048: b #0x140068 */
  goto L_140068;
L_14004c:;
  /* 14004c: mov w10, #0xca00 */
  ARC_W_W(c, 10, UINT64_C(51712));
  /* 140050: movk w10, #0x3b9a, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(999948288)));
  /* 140054: mul x11, x9, x10 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 10))));
  /* 140058: smulh x9, x9, x10 */
  ARC_X_W(c, 9, arc_smulh(ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 14005c: asr x10, x8, #0x3f */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(63)) & 63))));
  /* 140060: adds x0, x11, x8 */
  ARC_X_W(c, 0, arc_add64(c, ARC_X_R(c, 11), ARC_X_R(c, 8), 0));
  /* 140064: adc x1, x9, x10 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 9)) + (uint64_t)(ARC_X_R(c, 10)) + (c)->cf));
L_140068:;
  /* 140068: ldp x20, x19, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 14006c: ldp x28, x21, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 140070: ldp x29, x30, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 140074: add sp, sp, #0x110 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(272)));
  /* 140078: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 14007c: ret  */
  return;
L_140080:;
  /* 140080: nop  */
  /* nop: no architectural effect here */
  /* 140084: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 140088: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1310860));
  fn1_1424b8(c);
  /* 14008c: cbz w0, #0x13ff58 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13ff58;
  /* 140090: nop  */
  /* nop: no architectural effect here */
  /* 140094: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 140098: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1310876));
  fn1_1424d0(c);
  /* 14009c: b #0x13ff58 */
  goto L_13ff58;
L_1400a0:;
  /* 1400a0: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 1400a4: add x1, x1, #0x597 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1431)));
  /* 1400a8: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 1400ac: bl #0x11dda8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1310896));
  fn1_11dda8(c);
  /* 1400b0: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 1400b4: add x1, x1, #0xad6 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2774)));
  /* 1400b8: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 1400bc: bl #0x142b78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1310912));
  fn1_142b78(c);
  /* 1400c0: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1400c4: ldr q0, [x0] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 0)), arc_ld64(ARC_X_R(c, 0) + 8));
  /* 1400c8: stur x8, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 8));
  /* 1400cc: stur q0, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)) + 8, (c)->q[0].u64[1]);
  /* 1400d0: stp xzr, xzr, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1400d4: str xzr, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 31));
  /* 1400d8: ldurb w8, [x29, #-0x38] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-56))));
  /* 1400dc: tbz w8, #0, #0x1400f0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1400f0;
  /* 1400e0: ldur x8, [x29, #-0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-56))));
  /* 1400e4: ldur x0, [x29, #-0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 1400e8: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1400ec: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1310960));
  fn1_142608(c);
L_1400f0:;
  /* 1400f0: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 1400f4: sub x2, x29, #0x48 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1400f8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1400fc: bl #0x138e98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1310976));
  fn1_138e98(c);
L_140100:;
  /* 140100: nop  */
  /* nop: no architectural effect here */
  /* 140104: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 140108: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1310988));
  fn1_1424b8(c);
  /* 14010c: cbz w0, #0x13ff70 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13ff70;
  /* 140110: nop  */
  /* nop: no architectural effect here */
  /* 140114: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 140118: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1311004));
  fn1_1424d0(c);
  /* 14011c: b #0x13ff70 */
  goto L_13ff70;
L_140120:;
  /* 140120: nop  */
  /* nop: no architectural effect here */
  /* 140124: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 140128: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* 14012c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1311024));
  fn1_1424b8(c);
  /* 140130: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 140134: cbz w0, #0x13ffb8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13ffb8;
  /* 140138: nop  */
  /* nop: no architectural effect here */
  /* 14013c: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 140140: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1311044));
  fn1_1424d0(c);
  /* 140144: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 140148: b #0x13ffb8 */
  goto L_13ffb8;
  /* 14014c: ldurb w8, [x29, #-0x20] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 140150: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 140154: tbz w8, #0, #0x140180 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_140180;
  /* 140158: ldur x0, [x29, #-0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 14015c: ldur x8, [x29, #-0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 140160: b #0x140178 */
  goto L_140178;
  /* 140164: ldurb w8, [x29, #-0x38] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-56))));
  /* 140168: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 14016c: tbz w8, #0, #0x140180 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_140180;
  /* 140170: ldur x0, [x29, #-0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 140174: ldur x8, [x29, #-0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-56))));
L_140178:;
  /* 140178: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 14017c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1311104));
  fn1_142608(c);
L_140180:;
  /* 140180: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 140184: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1311112));
  fn1_9cc20(c);
}

void fn1_1427b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248824));
  /* 1427b8: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1427bc: ldr x17, [x16, #0xfc8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(4040))));
  /* 1427c0: add x16, x16, #0xfc8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(4040)));
  /* 1427c4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1427c8: nop  */
  /* nop: no architectural effect here */
  /* 1427cc: nop  */
  /* nop: no architectural effect here */
}

void fn1_142db8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250360));
  /* 142db8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142dbc: ldr x17, [x16, #0x1c8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(456))));
  /* 142dc0: add x16, x16, #0x1c8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(456)));
  /* 142dc4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142dc8: nop  */
  /* nop: no architectural effect here */
  /* 142dcc: nop  */
  /* nop: no architectural effect here */
}

void fn1_1433b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251896));
  /* 1433b8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1433bc: ldr x17, [x16, #0x3c8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(968))));
  /* 1433c0: add x16, x16, #0x3c8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(968)));
  /* 1433c4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1433c8: nop  */
  /* nop: no architectural effect here */
  /* 1433cc: nop  */
  /* nop: no architectural effect here */
}

void fn1_1439b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253432));
  /* 1439b8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1439bc: ldr x17, [x16, #0x5c8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1480))));
  /* 1439c0: add x16, x16, #0x5c8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1480)));
  /* 1439c4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1439c8: nop  */
  /* nop: no architectural effect here */
  /* 1439cc: nop  */
  /* nop: no architectural effect here */
}

void fn1_143fb8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254968));
  /* 143fb8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143fbc: ldr x17, [x16, #0x7c8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1992))));
  /* 143fc0: add x16, x16, #0x7c8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1992)));
  /* 143fc4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143fc8: nop  */
  /* nop: no architectural effect here */
  /* 143fcc: nop  */
  /* nop: no architectural effect here */
}

void fn1_1445b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256504));
  /* 1445b8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1445bc: ldr x17, [x16, #0x9c8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2504))));
  /* 1445c0: add x16, x16, #0x9c8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2504)));
  /* 1445c4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1445c8: nop  */
  /* nop: no architectural effect here */
  /* 1445cc: nop  */
  /* nop: no architectural effect here */
}

