#include "lifted.h"

void fn1_9d15c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038571356));
  /* 9d15c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 9d160: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 9d164: str x27, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 27));
  /* 9d168: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 9d16c: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 9d170: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 9d174: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 9d178: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 9d17c: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* 9d180: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* 9d184: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 9d188: ldr w21, [x22], #4 */
  { const uint64_t _a = ARC_X_R(c, 22);
    ARC_X_W(c, 22, ARC_X_R(c, 22) + INT64_C(4));
    ARC_W_W(c, 21, arc_ld32(_a));
  }
  /* 9d18c: cmn w21, #1 */
  (void)arc_add32(c, ARC_W_R(c, 21), UINT64_C(1), 0);
  /* 9d190: b.eq #0x9d1c8 */
  if (ARC_COND(c, 0)) goto L_9d1c8;
  /* 9d194: cbz x21, #0x9d1d4 */
  if ((ARC_X_R(c, 21)) == 0) goto L_9d1d4;
L_9d198:;
  /* 9d198: ldr w8, [x22] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 22)));
  /* 9d19c: cbz w8, #0x9d1e0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_9d1e0;
  /* 9d1a0: mov x24, x1 */
  ARC_X_W(c, 24, ARC_X_R(c, 1));
  /* 9d1a4: mov x25, x2 */
  ARC_X_W(c, 25, ARC_X_R(c, 2));
  /* 9d1a8: sub x1, x22, x8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) - ARC_X_R(c, 8)));
  /* 9d1ac: tbz w4, #0, #0x9d1ec */
  if (((ARC_W_R(c, 4)) >> 0 & 1) == 0) goto L_9d1ec;
  /* 9d1b0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 9d1b4: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* 9d1b8: b.eq #0x9d1fc */
  if (ARC_COND(c, 0)) goto L_9d1fc;
  /* 9d1bc: adrp x0, #0x51000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(331776)));
  /* 9d1c0: add x0, x0, #0xf39 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3897)));
  /* 9d1c4: b #0x9d2d4 */
  goto L_9d2d4;
L_9d1c8:;
  /* 9d1c8: ldur x21, [x1, #4] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 1) + INT64_C(4))));
  /* 9d1cc: add x22, x1, #0xc */
  ARC_X_W(c, 22, (ARC_X_R(c, 1) + UINT64_C(12)));
  /* 9d1d0: cbnz x21, #0x9d198 */
  if ((ARC_X_R(c, 21)) != 0) goto L_9d198;
L_9d1d4:;
  /* 9d1d4: adrp x0, #0x50000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(327680)));
  /* 9d1d8: add x0, x0, #0x17a */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(378)));
  /* 9d1dc: b #0x9d2d4 */
  goto L_9d2d4;
L_9d1e0:;
  /* 9d1e0: adrp x0, #0x50000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(327680)));
  /* 9d1e4: add x0, x0, #0xc02 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3074)));
  /* 9d1e8: b #0x9d2d4 */
  goto L_9d2d4;
L_9d1ec:;
  /* 9d1ec: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 9d1f0: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 9d1f4: bl #0x9d2f4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(643576));
  fn1_9d2f4(c);
  /* 9d1f8: cbnz x0, #0x9d2d4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_9d2d4;
L_9d1fc:;
  /* 9d1fc: ldrb w3, [x19, #0x18] */
  ARC_W_W(c, 3, arc_ld8((ARC_X_R(c, 19) + INT64_C(24))));
  /* 9d200: add x21, x22, x21 */
  ARC_X_W(c, 21, (ARC_X_R(c, 22) + ARC_X_R(c, 21)));
  /* 9d204: add x8, x22, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) + UINT64_C(4)));
  /* 9d208: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 9d20c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 9d210: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 9d214: mov x4, xzr */
  ARC_X_W(c, 4, ARC_X_R(c, 31));
  /* 9d218: str x8, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 8));
  /* 9d21c: bl #0x9eecc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(643616));
  fn1_9eecc(c);
  /* 9d220: ldrb w8, [x19, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(24))));
  /* 9d224: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 9d228: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 9d22c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 9d230: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 9d234: mov x4, xzr */
  ARC_X_W(c, 4, ARC_X_R(c, 31));
  /* 9d238: and w3, w8, #0xf */
  ARC_W_W(c, 3, (ARC_W_R(c, 8) & UINT64_C(15)));
  /* 9d23c: bl #0x9eecc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(643648));
  fn1_9eecc(c);
  /* 9d240: ldrb w9, [x19, #0x31] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 19) + INT64_C(49))));
  /* 9d244: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 9d248: str xzr, [x25, #0x28] */
  arc_st64((ARC_X_R(c, 25) + INT64_C(40)), ARC_X_R(c, 31));
  /* 9d24c: tbz w9, #0, #0x9d2b4 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_9d2b4;
  /* 9d250: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 9d254: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 9d258: bl #0x9f258 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(643676));
  fn1_9f258(c);
  /* 9d25c: ldrb w8, [x19, #0x19] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(25))));
  /* 9d260: ldr x27, [x29, #0x18] */
  ARC_X_W(c, 27, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 9d264: cmp w8, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(255));
  /* 9d268: add x26, x27, x0 */
  ARC_X_W(c, 26, (ARC_X_R(c, 27) + ARC_X_R(c, 0)));
  /* 9d26c: b.eq #0x9d2b8 */
  if (ARC_COND(c, 0)) goto L_9d2b8;
  /* 9d270: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 9d274: and w3, w8, #0xf */
  ARC_W_W(c, 3, (ARC_W_R(c, 8) & UINT64_C(15)));
  /* 9d278: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 9d27c: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 9d280: mov x4, xzr */
  ARC_X_W(c, 4, ARC_X_R(c, 31));
  /* 9d284: bl #0x9eecc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(643720));
  fn1_9eecc(c);
  /* 9d288: cbz x0, #0x9d2b8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_9d2b8;
  /* 9d28c: ldrb w3, [x19, #0x19] */
  ARC_W_W(c, 3, arc_ld8((ARC_X_R(c, 19) + INT64_C(25))));
  /* 9d290: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 9d294: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 9d298: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 9d29c: mov x4, xzr */
  ARC_X_W(c, 4, ARC_X_R(c, 31));
  /* 9d2a0: str x27, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 27));
  /* 9d2a4: bl #0x9eecc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(643752));
  fn1_9eecc(c);
  /* 9d2a8: mov x8, x25 */
  ARC_X_W(c, 8, ARC_X_R(c, 25));
  /* 9d2ac: str x0, [x25, #0x28] */
  arc_st64((ARC_X_R(c, 25) + INT64_C(40)), ARC_X_R(c, 0));
  /* 9d2b0: b #0x9d2bc */
  goto L_9d2bc;
L_9d2b4:;
  /* 9d2b4: ldr x26, [x29, #0x18] */
  ARC_X_W(c, 26, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
L_9d2b8:;
  /* 9d2b8: mov x8, x25 */
  ARC_X_W(c, 8, ARC_X_R(c, 25));
L_9d2bc:;
  /* 9d2bc: sub x9, x21, x24 */
  ARC_X_W(c, 9, (ARC_X_R(c, 21) - ARC_X_R(c, 24)));
  /* 9d2c0: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 9d2c4: stp x26, x22, [x8, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* 9d2c8: stp x24, x9, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 9d2cc: add x9, x23, x22 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) + ARC_X_R(c, 22)));
  /* 9d2d0: str x9, [x8, #0x20] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(32)), ARC_X_R(c, 9));
L_9d2d4:;
  /* 9d2d4: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 9d2d8: ldr x27, [sp, #0x10] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(16))));
  /* 9d2dc: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 9d2e0: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 9d2e4: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 9d2e8: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9d2ec: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 9d2f0: ret  */
  return;
}

void fn1_a1964(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038589796));
  /* a1964: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a1968: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* a196c: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a1970: str x23, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 23));
  /* a1974: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a1978: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a197c: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* a1980: cbz x4, #0xa19dc */
  if ((ARC_X_R(c, 4)) == 0) goto L_a19dc;
  /* a1984: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* a1988: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* a198c: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* a1990: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* a1994: stp x0, x8, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* a1998: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* a199c: stp x3, x5, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 3));
    arc_st64(_pa + 8, ARC_X_R(c, 5));
  }
  /* a19a0: strb w8, [sp, #0x28] */
  arc_st8(((c)->sp + INT64_C(40)), ARC_W_R(c, 8));
  /* a19a4: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* a19a8: cbz x2, #0xa19dc */
  if ((ARC_X_R(c, 2)) == 0) goto L_a19dc;
  /* a19ac: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* a19b0: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
L_a19b4:;
  /* a19b4: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* a19b8: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* a19bc: blr x19 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(661952));
  arc_dispatch(c, ARC_X_R(c, 19));
  /* a19c0: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* a19c4: add x22, x22, x20 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + ARC_X_R(c, 20)));
  /* a19c8: add x23, x23, x20 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + ARC_X_R(c, 20)));
  /* a19cc: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a19d0: cmp x8, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 21));
  /* a19d4: str x8, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 8));
  /* a19d8: b.lo #0xa19b4 */
  if (ARC_COND(c, 3)) goto L_a19b4;
L_a19dc:;
  /* a19dc: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a19e0: ldr x23, [sp, #0x40] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(64))));
  /* a19e4: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a19e8: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a19ec: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* a19f0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a19f4: ret  */
  return;
  /* a19f8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a19fc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* a1a00: bl #0xa1a0c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(662020));
  fn1_a1a0c(c);
  /* a1a04: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a1a08: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(662028));
  fn1_9cc20(c);
}

void fn1_a2830(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038593584));
  /* a2830: bti c */
  /* bti: no architectural effect here */
  /* a2834: ldr x8, [x0, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* a2838: ldr x9, [x1, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* a283c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a2840: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* a2844: ret  */
  return;
}

void fn1_a8f88(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038620040));
  /* a8f88: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a8f8c: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* a8f90: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a8f94: stp x28, x27, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* a8f98: stp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* a8f9c: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* a8fa0: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a8fa4: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a8fa8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* a8fac: ldp x8, x23, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* a8fb0: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* a8fb4: b.eq #0xa9370 */
  if (ARC_COND(c, 0)) goto L_a9370;
  /* a8fb8: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* a8fbc: cmp w9, #0x49 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(73));
  /* a8fc0: b.ne #0xa9370 */
  if (ARC_COND(c, 1)) goto L_a9370;
  /* a8fc4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a8fc8: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* a8fcc: add x22, x8, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a8fd0: str x22, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 22));
  /* a8fd4: tbz w1, #0, #0xa9038 */
  if (((ARC_W_R(c, 1)) >> 0 & 1) == 0) goto L_a9038;
  /* a8fd8: ldr x0, [x19, #0x298] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(664))));
  /* a8fdc: ldr x8, [x19, #0x2a8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(680))));
  /* a8fe0: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* a8fe4: str x0, [x19, #0x2a0] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(672)), ARC_X_R(c, 0));
  /* a8fe8: b.ne #0xa9024 */
  if (ARC_COND(c, 1)) goto L_a9024;
  /* a8fec: add x8, x19, #0x2b0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + UINT64_C(688)));
  /* a8ff0: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* a8ff4: b.eq #0xa9010 */
  if (ARC_COND(c, 0)) goto L_a9010;
  /* a8ff8: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* a8ffc: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(692224));
  fn1_142878(c);
  /* a9000: str x0, [x19, #0x298] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(664)), ARC_X_R(c, 0));
  /* a9004: cbz x0, #0xa9444 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a9444;
  /* a9008: ldp x22, x23, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* a900c: b #0xa9020 */
  goto L_a9020;
L_a9010:;
  /* a9010: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* a9014: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(692248));
  fn1_1428a8(c);
  /* a9018: cbz x0, #0xa9448 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a9448;
  /* a901c: str x0, [x19, #0x298] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(664)), ARC_X_R(c, 0));
L_a9020:;
  /* a9020: str x0, [x19, #0x2a8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(680)), ARC_X_R(c, 0));
L_a9024:;
  /* a9024: ldr x9, [x19, #0x240] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(576))));
  /* a9028: add x8, x19, #0x240 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + UINT64_C(576)));
  /* a902c: str x8, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a9030: str x0, [x19, #0x2a0] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(672)), ARC_X_R(c, 0));
  /* a9034: str x9, [x19, #0x248] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(584)), ARC_X_R(c, 9));
L_a9038:;
  /* a9038: ldp x9, x8, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* a903c: add x26, x19, #0x28 */
  ARC_X_W(c, 26, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* a9040: add x27, x19, #0x258 */
  ARC_X_W(c, 27, (ARC_X_R(c, 19) + UINT64_C(600)));
  /* a9044: mov w21, #0x28 */
  ARC_W_W(c, 21, UINT64_C(40));
  /* a9048: mov w28, #0xa80 */
  ARC_W_W(c, 28, UINT64_C(2688));
  /* a904c: sub x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* a9050: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* a9054: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
L_a9058:;
  /* a9058: cmp x22, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 23));
  /* a905c: b.eq #0xa906c */
  if (ARC_COND(c, 0)) goto L_a906c;
  /* a9060: ldrb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* a9064: cmp w8, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(69));
  /* a9068: b.eq #0xa9398 */
  if (ARC_COND(c, 0)) goto L_a9398;
L_a906c:;
  /* a906c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a9070: bl #0xa7338 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(692340));
  fn1_a7338(c);
  /* a9074: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* a9078: tbz w20, #0, #0xa90b4 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) == 0) goto L_a90b4;
  /* a907c: cbz x22, #0xa9370 */
  if ((ARC_X_R(c, 22)) == 0) goto L_a9370;
  /* a9080: ldp x25, x8, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 25, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* a9084: cmp x25, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* a9088: b.ne #0xa9128 */
  if (ARC_COND(c, 1)) goto L_a9128;
  /* a908c: ldr x24, [x19, #0x10] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* a9090: sub x23, x25, x24 */
  ARC_X_W(c, 23, (ARC_X_R(c, 25) - ARC_X_R(c, 24)));
  /* a9094: cmp x24, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 26));
  /* a9098: lsl x1, x23, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 23)) << ((UINT64_C(1)) & 63)));
  /* a909c: b.eq #0xa90ec */
  if (ARC_COND(c, 0)) goto L_a90ec;
  /* a90a0: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* a90a4: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(692392));
  fn1_142878(c);
  /* a90a8: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* a90ac: cbnz x0, #0xa9118 */
  if ((ARC_X_R(c, 0)) != 0) goto L_a9118;
  /* a90b0: b #0xa942c */
  goto L_a942c;
L_a90b4:;
  /* a90b4: cbz x22, #0xa9370 */
  if ((ARC_X_R(c, 22)) == 0) goto L_a9370;
  /* a90b8: ldp x25, x8, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 25, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* a90bc: cmp x25, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* a90c0: b.ne #0xa92c8 */
  if (ARC_COND(c, 1)) goto L_a92c8;
  /* a90c4: ldr x24, [x19, #0x10] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* a90c8: sub x23, x25, x24 */
  ARC_X_W(c, 23, (ARC_X_R(c, 25) - ARC_X_R(c, 24)));
  /* a90cc: cmp x24, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 26));
  /* a90d0: lsl x1, x23, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 23)) << ((UINT64_C(1)) & 63)));
  /* a90d4: b.eq #0xa928c */
  if (ARC_COND(c, 0)) goto L_a928c;
  /* a90d8: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* a90dc: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(692448));
  fn1_142878(c);
  /* a90e0: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* a90e4: cbnz x0, #0xa92b8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_a92b8;
  /* a90e8: b #0xa9428 */
  goto L_a9428;
L_a90ec:;
  /* a90ec: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* a90f0: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(692468));
  fn1_1428a8(c);
  /* a90f4: cbz x0, #0xa9440 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a9440;
  /* a90f8: cmp x25, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 26));
  /* a90fc: b.eq #0xa9114 */
  if (ARC_COND(c, 0)) goto L_a9114;
  /* a9100: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* a9104: mov x2, x23 */
  ARC_X_W(c, 2, ARC_X_R(c, 23));
  /* a9108: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* a910c: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(692496));
  fn1_1449f0(c);
  /* a9110: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
L_a9114:;
  /* a9114: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
L_a9118:;
  /* a9118: asr x8, x23, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 23)) >> ((UINT64_C(2)) & 63))));
  /* a911c: add x25, x0, x23 */
  ARC_X_W(c, 25, (ARC_X_R(c, 0) + ARC_X_R(c, 23)));
  /* a9120: add x8, x0, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* a9124: str x8, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 8));
L_a9128:;
  /* a9128: ldrb w8, [x22, #8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 22) + INT64_C(8))));
  /* a912c: str x22, [x25], #8 */
  { const uint64_t _a = ARC_X_R(c, 25);
    ARC_X_W(c, 25, ARC_X_R(c, 25) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* a9130: str x25, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 25));
  /* a9134: cmp w8, #0x29 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(41));
  /* a9138: b.eq #0xa914c */
  if (ARC_COND(c, 0)) goto L_a914c;
  /* a913c: cmp w8, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(34));
  /* a9140: b.ne #0xa9254 */
  if (ARC_COND(c, 1)) goto L_a9254;
  /* a9144: ldr x22, [x22, #0x18] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 22) + INT64_C(24))));
  /* a9148: b #0xa9254 */
  goto L_a9254;
L_a914c:;
  /* a914c: ldr x25, [x19, #0x1330] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* a9150: ldp x23, x24, [x22, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 22) + INT64_C(16));
    ARC_X_W(c, 23, arc_ld64(_pa));
    ARC_X_W(c, 24, arc_ld64(_pa + 8));
  }
  /* a9154: ldr x8, [x25, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(8))));
  /* a9158: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* a915c: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a9160: b.hi #0xa9180 */
  if (ARC_COND(c, 8)) goto L_a9180;
  /* a9164: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a9168: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(692588));
  fn1_1428a8(c);
  /* a916c: cbz x0, #0xa9434 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a9434;
  /* a9170: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a9174: stp x25, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 25));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a9178: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* a917c: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_a9180:;
  /* a9180: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* a9184: add x22, x25, x8 */
  ARC_X_W(c, 22, (ARC_X_R(c, 25) + ARC_X_R(c, 8)));
  /* a9188: adrp x8, #0x14b000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1355776)));
  /* a918c: add x8, x8, #0xc20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3104)));
  /* a9190: str x9, [x25, #8] */
  arc_st64((ARC_X_R(c, 25) + INT64_C(8)), ARC_X_R(c, 9));
  /* a9194: lsl x9, x24, #3 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 24)) << ((UINT64_C(3)) & 63)));
  /* a9198: str x8, [x22, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 22) + INT64_C(16));
    ARC_X_W(c, 22, ARC_X_R(c, 22) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a919c: ldurh w8, [x22, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 22) + INT64_C(9))));
  /* a91a0: strb w21, [x22, #8] */
  arc_st8((ARC_X_R(c, 22) + INT64_C(8)), ARC_W_R(c, 21));
  /* a91a4: and w10, w8, #0xfffff000 */
  ARC_W_W(c, 10, (ARC_W_R(c, 8) & UINT64_C(4294963200)));
  /* a91a8: stp x23, x24, [x22, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 22) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 24));
  }
  /* a91ac: orr w8, w10, w28 */
  ARC_W_W(c, 8, (ARC_W_R(c, 10) | ARC_W_R(c, 28)));
  /* a91b0: sturh w8, [x22, #9] */
  arc_st16((ARC_X_R(c, 22) + INT64_C(9)), ARC_W_R(c, 8));
  /* a91b4: cbz x24, #0xa91e0 */
  if ((ARC_X_R(c, 24)) == 0) goto L_a91e0;
  /* a91b8: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
  /* a91bc: mov x12, x23 */
  ARC_X_W(c, 12, ARC_X_R(c, 23));
L_a91c0:;
  /* a91c0: ldr x13, [x12] */
  ARC_X_W(c, 13, arc_ld64(ARC_X_R(c, 12)));
  /* a91c4: ldurh w13, [x13, #9] */
  ARC_W_W(c, 13, arc_ld16((ARC_X_R(c, 13) + INT64_C(9))));
  /* a91c8: and w13, w13, #0x300 */
  ARC_W_W(c, 13, (ARC_W_R(c, 13) & UINT64_C(768)));
  /* a91cc: cmp w13, #0x100 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(256));
  /* a91d0: b.ne #0xa91ec */
  if (ARC_COND(c, 1)) goto L_a91ec;
  /* a91d4: subs x11, x11, #8 */
  ARC_X_W(c, 11, arc_sub64(c, ARC_X_R(c, 11), UINT64_C(8)));
  /* a91d8: add x12, x12, #8 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(8)));
  /* a91dc: b.ne #0xa91c0 */
  if (ARC_COND(c, 1)) goto L_a91c0;
L_a91e0:;
  /* a91e0: mov w8, #0x980 */
  ARC_W_W(c, 8, UINT64_C(2432));
  /* a91e4: orr w8, w10, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 10) | ARC_W_R(c, 8)));
  /* a91e8: sturh w8, [x22, #9] */
  arc_st16((ARC_X_R(c, 22) + INT64_C(9)), ARC_W_R(c, 8));
L_a91ec:;
  /* a91ec: cbz x24, #0xa9218 */
  if ((ARC_X_R(c, 24)) == 0) goto L_a9218;
  /* a91f0: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* a91f4: mov x11, x23 */
  ARC_X_W(c, 11, ARC_X_R(c, 23));
L_a91f8:;
  /* a91f8: ldr x12, [x11] */
  ARC_X_W(c, 12, arc_ld64(ARC_X_R(c, 11)));
  /* a91fc: ldurh w12, [x12, #9] */
  ARC_W_W(c, 12, arc_ld16((ARC_X_R(c, 12) + INT64_C(9))));
  /* a9200: and w12, w12, #0xc00 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) & UINT64_C(3072)));
  /* a9204: cmp w12, #0x400 */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(1024));
  /* a9208: b.ne #0xa9224 */
  if (ARC_COND(c, 1)) goto L_a9224;
  /* a920c: subs x10, x10, #8 */
  ARC_X_W(c, 10, arc_sub64(c, ARC_X_R(c, 10), UINT64_C(8)));
  /* a9210: add x11, x11, #8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(8)));
  /* a9214: b.ne #0xa91f8 */
  if (ARC_COND(c, 1)) goto L_a91f8;
L_a9218:;
  /* a9218: and w8, w8, #0xfffff3ff */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(4294964223)));
  /* a921c: orr w8, w8, #0x400 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(1024)));
  /* a9220: sturh w8, [x22, #9] */
  arc_st16((ARC_X_R(c, 22) + INT64_C(9)), ARC_W_R(c, 8));
L_a9224:;
  /* a9224: cbz x24, #0xa9248 */
  if ((ARC_X_R(c, 24)) == 0) goto L_a9248;
L_a9228:;
  /* a9228: ldr x10, [x23] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 23)));
  /* a922c: ldurh w10, [x10, #9] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 10) + INT64_C(9))));
  /* a9230: and w10, w10, #0xc0 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) & UINT64_C(192)));
  /* a9234: cmp w10, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(64));
  /* a9238: b.ne #0xa9254 */
  if (ARC_COND(c, 1)) goto L_a9254;
  /* a923c: subs x9, x9, #8 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 9), UINT64_C(8)));
  /* a9240: add x23, x23, #8 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* a9244: b.ne #0xa9228 */
  if (ARC_COND(c, 1)) goto L_a9228;
L_a9248:;
  /* a9248: and w8, w8, #0xffffff7f */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(4294967167)));
  /* a924c: orr w8, w8, #0x40 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(64)));
  /* a9250: sturh w8, [x22, #9] */
  arc_st16((ARC_X_R(c, 22) + INT64_C(9)), ARC_W_R(c, 8));
L_a9254:;
  /* a9254: ldr x25, [x19, #0x248] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 19) + INT64_C(584))));
  /* a9258: ldr x8, [x19, #0x250] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(592))));
  /* a925c: cmp x25, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* a9260: b.ne #0xa9310 */
  if (ARC_COND(c, 1)) goto L_a9310;
  /* a9264: ldr x24, [x19, #0x240] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 19) + INT64_C(576))));
  /* a9268: sub x23, x25, x24 */
  ARC_X_W(c, 23, (ARC_X_R(c, 25) - ARC_X_R(c, 24)));
  /* a926c: cmp x24, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 27));
  /* a9270: lsl x1, x23, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 23)) << ((UINT64_C(1)) & 63)));
  /* a9274: b.eq #0xa92d4 */
  if (ARC_COND(c, 0)) goto L_a92d4;
  /* a9278: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* a927c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(692864));
  fn1_142878(c);
  /* a9280: str x0, [x19, #0x240] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(576)), ARC_X_R(c, 0));
  /* a9284: cbnz x0, #0xa9300 */
  if ((ARC_X_R(c, 0)) != 0) goto L_a9300;
  /* a9288: b #0xa9430 */
  goto L_a9430;
L_a928c:;
  /* a928c: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* a9290: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(692884));
  fn1_1428a8(c);
  /* a9294: cbz x0, #0xa9438 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a9438;
  /* a9298: cmp x25, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 26));
  /* a929c: b.eq #0xa92b4 */
  if (ARC_COND(c, 0)) goto L_a92b4;
  /* a92a0: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* a92a4: mov x2, x23 */
  ARC_X_W(c, 2, ARC_X_R(c, 23));
  /* a92a8: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* a92ac: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(692912));
  fn1_1449f0(c);
  /* a92b0: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
L_a92b4:;
  /* a92b4: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
L_a92b8:;
  /* a92b8: asr x8, x23, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 23)) >> ((UINT64_C(2)) & 63))));
  /* a92bc: add x25, x0, x23 */
  ARC_X_W(c, 25, (ARC_X_R(c, 0) + ARC_X_R(c, 23)));
  /* a92c0: add x8, x0, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* a92c4: str x8, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 8));
L_a92c8:;
  /* a92c8: str x22, [x25], #8 */
  { const uint64_t _a = ARC_X_R(c, 25);
    ARC_X_W(c, 25, ARC_X_R(c, 25) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* a92cc: str x25, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 25));
  /* a92d0: b #0xa9318 */
  goto L_a9318;
L_a92d4:;
  /* a92d4: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* a92d8: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(692956));
  fn1_1428a8(c);
  /* a92dc: cbz x0, #0xa943c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a943c;
  /* a92e0: cmp x25, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 27));
  /* a92e4: b.eq #0xa92fc */
  if (ARC_COND(c, 0)) goto L_a92fc;
  /* a92e8: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* a92ec: mov x2, x23 */
  ARC_X_W(c, 2, ARC_X_R(c, 23));
  /* a92f0: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* a92f4: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(692984));
  fn1_1449f0(c);
  /* a92f8: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
L_a92fc:;
  /* a92fc: str x0, [x19, #0x240] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(576)), ARC_X_R(c, 0));
L_a9300:;
  /* a9300: asr x8, x23, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 23)) >> ((UINT64_C(2)) & 63))));
  /* a9304: add x25, x0, x23 */
  ARC_X_W(c, 25, (ARC_X_R(c, 0) + ARC_X_R(c, 23)));
  /* a9308: add x8, x0, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* a930c: str x8, [x19, #0x250] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(592)), ARC_X_R(c, 8));
L_a9310:;
  /* a9310: str x22, [x25], #8 */
  { const uint64_t _a = ARC_X_R(c, 25);
    ARC_X_W(c, 25, ARC_X_R(c, 25) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* a9314: str x25, [x19, #0x248] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(584)), ARC_X_R(c, 25));
L_a9318:;
  /* a9318: ldp x22, x23, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* a931c: cmp x22, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 23));
  /* a9320: b.eq #0xa9058 */
  if (ARC_COND(c, 0)) goto L_a9058;
  /* a9324: ldrb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* a9328: cmp w8, #0x51 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(81));
  /* a932c: b.ne #0xa9058 */
  if (ARC_COND(c, 1)) goto L_a9058;
  /* a9330: ldrb w21, [x19, #0x30a] */
  ARC_W_W(c, 21, arc_ld8((ARC_X_R(c, 19) + INT64_C(778))));
  /* a9334: add x8, x22, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* a9338: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* a933c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a9340: strb w9, [x19, #0x30a] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(778)), ARC_W_R(c, 9));
  /* a9344: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a9348: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(693068));
  fn1_aa69c(c);
  /* a934c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a9350: strb w21, [x19, #0x30a] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(778)), ARC_W_R(c, 21));
  /* a9354: cbz x0, #0xa9370 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a9370;
  /* a9358: ldp x22, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* a935c: cmp x22, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* a9360: b.eq #0xa9370 */
  if (ARC_COND(c, 0)) goto L_a9370;
  /* a9364: ldrb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* a9368: cmp w8, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(69));
  /* a936c: b.eq #0xa939c */
  if (ARC_COND(c, 0)) goto L_a939c;
L_a9370:;
  /* a9370: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
L_a9374:;
  /* a9374: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a9378: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a937c: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* a9380: ldp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* a9384: ldp x28, x27, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* a9388: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a938c: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* a9390: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a9394: ret  */
  return;
L_a9398:;
  /* a9398: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
L_a939c:;
  /* a939c: ldr x1, [sp, #8] */
  ARC_X_W(c, 1, arc_ld64(((c)->sp + INT64_C(8))));
  /* a93a0: add x8, x22, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* a93a4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a93a8: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a93ac: bl #0xa77e4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(693168));
  fn1_a77e4(c);
  /* a93b0: ldr x23, [x19, #0x1330] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* a93b4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a93b8: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* a93bc: ldr x8, [x23, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* a93c0: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* a93c4: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a93c8: b.hi #0xa93e8 */
  if (ARC_COND(c, 8)) goto L_a93e8;
  /* a93cc: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a93d0: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(693204));
  fn1_1428a8(c);
  /* a93d4: cbz x0, #0xa9434 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a9434;
  /* a93d8: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a93dc: stp x23, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a93e0: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* a93e4: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_a93e8:;
  /* a93e8: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* a93ec: add x0, x23, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + ARC_X_R(c, 8)));
  /* a93f0: adrp x8, #0x14b000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1355776)));
  /* a93f4: add x8, x8, #0xc98 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3224)));
  /* a93f8: str x9, [x23, #8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(8)), ARC_X_R(c, 9));
  /* a93fc: mov w9, #0x2b */
  ARC_W_W(c, 9, UINT64_C(43));
  /* a9400: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a9404: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* a9408: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* a940c: mov w9, #0x540 */
  ARC_W_W(c, 9, UINT64_C(1344));
  /* a9410: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* a9414: stp x21, x22, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* a9418: orr w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 9)));
  /* a941c: str x20, [x0, #0x20] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(32)), ARC_X_R(c, 20));
  /* a9420: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* a9424: b #0xa9374 */
  goto L_a9374;
L_a9428:;
  /* a9428: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(693292));
  fn1_1427b8(c);
L_a942c:;
  /* a942c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(693296));
  fn1_1427b8(c);
L_a9430:;
  /* a9430: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(693300));
  fn1_1427b8(c);
L_a9434:;
  /* a9434: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(693304));
  fn1_142488(c);
L_a9438:;
  /* a9438: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(693308));
  fn1_1427b8(c);
L_a943c:;
  /* a943c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(693312));
  fn1_1427b8(c);
L_a9440:;
  /* a9440: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(693316));
  fn1_1427b8(c);
L_a9444:;
  /* a9444: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(693320));
  fn1_1427b8(c);
L_a9448:;
  /* a9448: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(693324));
  fn1_1427b8(c);
  /* a944c: strb w21, [x19, #0x30a] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(778)), ARC_W_R(c, 21));
  /* a9450: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(693332));
  fn1_9cc20(c);
}

void fn1_b06ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038650604));
  /* b06ec: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b06f0: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b06f4: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b06f8: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b06fc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b0700: ldr x21, [x0, #0x18] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* b0704: ldr x8, [x1, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* b0708: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b070c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b0710: cbz x21, #0xb076c */
  if ((ARC_X_R(c, 21)) == 0) goto L_b076c;
  /* b0714: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b0718: add x9, x8, x21 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* b071c: ldr x22, [x20, #0x10] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* b0720: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b0724: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b0728: b.ls #0xb0750 */
  if (ARC_COND(c, 9)) goto L_b0750;
  /* b072c: lsl x8, x10, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b0730: add x9, x9, #0x3e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(992)));
  /* b0734: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b0738: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* b073c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b0740: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(722756));
  fn1_142878(c);
  /* b0744: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b0748: cbz x0, #0xb0a14 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b0a14;
  /* b074c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b0750:;
  /* b0750: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b0754: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* b0758: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* b075c: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(722784));
  fn1_1449d8(c);
  /* b0760: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b0764: add x8, x8, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* b0768: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_b076c:;
  /* b076c: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b0770: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b0774: ldr w21, [x19, #0x20] */
  ARC_W_W(c, 21, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b0778: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b077c: str wzr, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 31));
  /* b0780: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b0784: b.ls #0xb07ac */
  if (ARC_COND(c, 9)) goto L_b07ac;
  /* b0788: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b078c: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b0790: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b0794: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b0798: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b079c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(722848));
  fn1_142878(c);
  /* b07a0: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b07a4: cbz x0, #0xb0a04 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b0a04;
  /* b07a8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b07ac:;
  /* b07ac: mov w9, #0x3c */
  ARC_W_W(c, 9, UINT64_C(60));
  /* b07b0: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b07b4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b07b8: ldr x0, [x20, #0x20] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* b07bc: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b07c0: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* b07c4: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b07c8: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* b07cc: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b07d0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(722900));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b07d4: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b07d8: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b07dc: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b07e0: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b07e4: b.ls #0xb080c */
  if (ARC_COND(c, 9)) goto L_b080c;
  /* b07e8: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b07ec: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b07f0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b07f4: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b07f8: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b07fc: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(722944));
  fn1_142878(c);
  /* b0800: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b0804: cbz x0, #0xb0a08 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b0a08;
  /* b0808: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b080c:;
  /* b080c: mov w9, #0x3e */
  ARC_W_W(c, 9, UINT64_C(62));
  /* b0810: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b0814: add w12, w21, #1 */
  ARC_W_W(c, 12, (ARC_W_R(c, 21) + UINT64_C(1)));
  /* b0818: ldp x10, x11, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* b081c: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b0820: str w12, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 12));
  /* b0824: add x9, x10, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(2)));
  /* b0828: add x8, x10, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* b082c: cmp x9, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 11));
  /* b0830: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b0834: b.ls #0xb0860 */
  if (ARC_COND(c, 9)) goto L_b0860;
  /* b0838: lsl x8, x11, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 11)) << ((UINT64_C(1)) & 63)));
  /* b083c: add x9, x10, #0x3e2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(994)));
  /* b0840: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b0844: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* b0848: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b084c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(723024));
  fn1_142878(c);
  /* b0850: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b0854: cbz x0, #0xb0a0c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b0a0c;
  /* b0858: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b085c: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b0860:;
  /* b0860: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b0864: mov w9, #0x28 */
  ARC_W_W(c, 9, UINT64_C(40));
  /* b0868: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b086c: ldr x20, [x20, #0x28] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(40))));
  /* b0870: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b0874: and w8, w8, #0x3f */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(63)));
  /* b0878: cmp w8, #0x13 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(19));
  /* b087c: b.hs #0xb08bc */
  if (ARC_COND(c, 2)) goto L_b08bc;
  /* b0880: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b0884: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b0888: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b088c: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b0890: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(723092));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b0894: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b0898: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b089c: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b08a0: b.eq #0xb099c */
  if (ARC_COND(c, 0)) goto L_b099c;
  /* b08a4: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b08a8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b08ac: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b08b0: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b08b4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(723128));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b08b8: b #0xb099c */
  goto L_b099c;
L_b08bc:;
  /* b08bc: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b08c0: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b08c4: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b08c8: add w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* b08cc: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b08d0: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* b08d4: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b08d8: b.ls #0xb0904 */
  if (ARC_COND(c, 9)) goto L_b0904;
  /* b08dc: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b08e0: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b08e4: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b08e8: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b08ec: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b08f0: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(723188));
  fn1_142878(c);
  /* b08f4: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b08f8: cbz x0, #0xb0a18 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b0a18;
  /* b08fc: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b0900: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b0904:;
  /* b0904: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b0908: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* b090c: mov w10, #0x28 */
  ARC_W_W(c, 10, UINT64_C(40));
  /* b0910: strb w10, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 10));
  /* b0914: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b0918: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b091c: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* b0920: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(723236));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b0924: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b0928: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b092c: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b0930: b.eq #0xb0948 */
  if (ARC_COND(c, 0)) goto L_b0948;
  /* b0934: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b0938: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b093c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b0940: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b0944: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(723272));
  arc_dispatch(c, ARC_X_R(c, 8));
L_b0948:;
  /* b0948: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b094c: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b0950: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b0954: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* b0958: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b095c: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* b0960: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b0964: b.ls #0xb0990 */
  if (ARC_COND(c, 9)) goto L_b0990;
  /* b0968: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b096c: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b0970: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b0974: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b0978: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b097c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(723328));
  fn1_142878(c);
  /* b0980: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b0984: cbz x0, #0xb0a1c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b0a1c;
  /* b0988: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b098c: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b0990:;
  /* b0990: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b0994: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* b0998: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
L_b099c:;
  /* b099c: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b09a0: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b09a4: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b09a8: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* b09ac: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b09b0: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* b09b4: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b09b8: b.ls #0xb09e4 */
  if (ARC_COND(c, 9)) goto L_b09e4;
  /* b09bc: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b09c0: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b09c4: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b09c8: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b09cc: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b09d0: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(723412));
  fn1_142878(c);
  /* b09d4: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b09d8: cbz x0, #0xb0a10 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b0a10;
  /* b09dc: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b09e0: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b09e4:;
  /* b09e4: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b09e8: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* b09ec: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b09f0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b09f4: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* b09f8: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b09fc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b0a00: ret  */
  return;
L_b0a04:;
  /* b0a04: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(723464));
  fn1_1427b8(c);
L_b0a08:;
  /* b0a08: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(723468));
  fn1_1427b8(c);
L_b0a0c:;
  /* b0a0c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(723472));
  fn1_1427b8(c);
L_b0a10:;
  /* b0a10: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(723476));
  fn1_1427b8(c);
L_b0a14:;
  /* b0a14: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(723480));
  fn1_1427b8(c);
L_b0a18:;
  /* b0a18: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(723484));
  fn1_1427b8(c);
L_b0a1c:;
  /* b0a1c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(723488));
  fn1_1427b8(c);
  /* b0a20: str w21, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 21));
  /* b0a24: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(723496));
  fn1_9cc20(c);
}

void fn1_b5170(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038669680));
  /* b5170: bti c */
  /* bti: no architectural effect here */
  /* b5174: mov w1, #0x28 */
  ARC_W_W(c, 1, UINT64_C(40));
  /* b5178: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b7fdc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038681564));
  /* b7fdc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b7fe0: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b7fe4: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b7fe8: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b7fec: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b7ff0: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* b7ff4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b7ff8: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b7ffc: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b8000: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b8004: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b8008: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(753676));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b800c: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* b8010: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b8014: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b8018: b.eq #0xb8030 */
  if (ARC_COND(c, 0)) goto L_b8030;
  /* b801c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b8020: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b8024: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b8028: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b802c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(753712));
  arc_dispatch(c, ARC_X_R(c, 8));
L_b8030:;
  /* b8030: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b8034: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b8038: add x10, x8, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* b803c: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b8040: b.ls #0xb8068 */
  if (ARC_COND(c, 9)) goto L_b8068;
  /* b8044: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b8048: add x8, x8, #0x3e2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(994)));
  /* b804c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b8050: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b8054: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b8058: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(753756));
  fn1_142878(c);
  /* b805c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b8060: cbz x0, #0xb80dc */
  if ((ARC_X_R(c, 0)) == 0) goto L_b80dc;
  /* b8064: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b8068:;
  /* b8068: mov w9, #0x3a3a */
  ARC_W_W(c, 9, UINT64_C(14906));
  /* b806c: strh w9, [x0, x8] */
  arc_st16((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b8070: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b8074: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b8078: ldr x20, [x20, #0x18] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* b807c: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* b8080: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* b8084: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b8088: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b808c: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* b8090: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(753812));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b8094: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b8098: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b809c: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b80a0: b.ne #0xb80b8 */
  if (ARC_COND(c, 1)) goto L_b80b8;
  /* b80a4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b80a8: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b80ac: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b80b0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b80b4: ret  */
  return;
L_b80b8:;
  /* b80b8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b80bc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b80c0: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b80c4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b80c8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b80cc: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b80d0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b80d4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b80d8: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_b80dc:;
  /* b80dc: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(753888));
  fn1_1427b8(c);
}

void fn1_bb344(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038694724));
  /* bb344: bti c */
  /* bti: no architectural effect here */
  /* bb348: mov w1, #0x30 */
  ARC_W_W(c, 1, UINT64_C(48));
  /* bb34c: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_bdae4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038704868));
  /* bdae4: bti c */
  /* bti: no architectural effect here */
  /* bdae8: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* bdaec: adrp x10, #0x151000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(1380352)));
  /* bdaf0: mov x11, #0x2b00 */
  ARC_X_W(c, 11, UINT64_C(11008));
  /* bdaf4: ldr x9, [x9, #0x8b8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2232))));
  /* bdaf8: stur xzr, [x0, #-0x78] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(-120)), ARC_X_R(c, 31));
  /* bdafc: movk x11, #0x432b, lsl #16 */
  ARC_X_W(c, 11, ((ARC_X_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(1126891520)));
  /* bdb00: movk x11, #0x4e47, lsl #32 */
  ARC_X_W(c, 11, ((ARC_X_R(c, 11) & UINT64_C(18446462603027808255)) | UINT64_C(86066849644544)));
  /* bdb04: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* bdb08: ldar x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* bdb0c: ldr x10, [x10, #0x8b0] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2224))));
  /* bdb10: movk x11, #0x434c, lsl #48 */
  ARC_X_W(c, 11, ((ARC_X_R(c, 11) & UINT64_C(281474976710655)) | UINT64_C(4849250898771181568)));
  /* bdb14: stur x9, [x0, #-0x60] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(-96)), ARC_X_R(c, 9));
  /* bdb18: ldar x9, [x10] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 10)));
  /* bdb1c: stp x1, x2, [x0, #-0x70] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(-112));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* bdb20: nop  */
  /* nop: no architectural effect here */
  /* bdb24: adr x10, #0xbdb38 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(777016)));
  /* bdb28: sub x0, x0, #0x80 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) - UINT64_C(128)));
  /* bdb2c: stur x9, [x8, #-0x58] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(-88)), ARC_X_R(c, 9));
  /* bdb30: stp x11, x10, [x8, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(-32));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* bdb34: ret  */
  return;
}

void fn1_d0e74(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038783604));
  /* d0e74: bti c */
  /* bti: no architectural effect here */
  /* d0e78: sub x8, x1, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* d0e7c: asr x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* d0e80: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* d0e84: b.gt #0xd0e94 */
  if (ARC_COND(c, 12)) goto L_d0e94;
  /* d0e88: b.hs #0xd0f68 */
  if (ARC_COND(c, 2)) goto L_d0f68;
L_d0e8c:;
  /* d0e8c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d0e90: ret  */
  return;
L_d0e94:;
  /* d0e94: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* d0e98: b.eq #0xd0f90 */
  if (ARC_COND(c, 0)) goto L_d0f90;
  /* d0e9c: cmp x8, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(4));
  /* d0ea0: b.eq #0xd1094 */
  if (ARC_COND(c, 0)) goto L_d1094;
  /* d0ea4: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* d0ea8: b.ne #0xd0fdc */
  if (ARC_COND(c, 1)) goto L_d0fdc;
  /* d0eac: ldp w8, w9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_W_W(c, 8, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* d0eb0: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d0eb4: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0eb8: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0ebc: stp w8, w10, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st32(_pa, ARC_W_R(c, 8));
    arc_st32(_pa + 4, ARC_W_R(c, 10));
  }
  /* d0ec0: ldr w8, [x0, #0xc] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(12))));
  /* d0ec4: ldur w9, [x1, #-4] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 1) + INT64_C(-4))));
  /* d0ec8: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d0ecc: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0ed0: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0ed4: stur w10, [x1, #-4] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(-4)), ARC_W_R(c, 10));
  /* d0ed8: str w8, [x0, #0xc] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(12)), ARC_W_R(c, 8));
  /* d0edc: ldr w9, [x0, #8] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 0) + INT64_C(8))));
  /* d0ee0: ldur w8, [x1, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + INT64_C(-4))));
  /* d0ee4: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d0ee8: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0eec: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0ef0: stur w10, [x1, #-4] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(-4)), ARC_W_R(c, 10));
  /* d0ef4: ldp w9, w10, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* d0ef8: ldr w11, [x0, #4] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 0) + INT64_C(4))));
  /* d0efc: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* d0f00: csel w9, w9, w10, lt */
  ARC_W_W(c, 9, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* d0f04: csel w8, w8, w10, gt */
  ARC_W_W(c, 8, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* d0f08: stp w9, w8, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_st32(_pa, ARC_W_R(c, 9));
    arc_st32(_pa + 4, ARC_W_R(c, 8));
  }
  /* d0f0c: ldur w8, [x1, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + INT64_C(-4))));
  /* d0f10: cmp w11, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 8));
  /* d0f14: csel w9, w11, w8, gt */
  ARC_W_W(c, 9, (ARC_COND(c, 12) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 8)));
  /* d0f18: csel w8, w11, w8, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 8)));
  /* d0f1c: stur w9, [x1, #-4] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(-4)), ARC_W_R(c, 9));
  /* d0f20: ldp w11, w10, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* d0f24: ldr w9, [x0] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 0)));
  /* d0f28: cmp w10, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 9));
  /* d0f2c: csel w12, w10, w9, lt */
  ARC_W_W(c, 12, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* d0f30: csel w10, w10, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* d0f34: cmp w12, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 11));
  /* d0f38: csel w9, w9, w11, lt */
  ARC_W_W(c, 9, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 11)));
  /* d0f3c: csel w11, w12, w11, gt */
  ARC_W_W(c, 11, (ARC_COND(c, 12) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 11)));
  /* d0f40: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* d0f44: csel w12, w10, w8, lt */
  ARC_W_W(c, 12, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d0f48: csel w10, w10, w8, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d0f4c: cmp w12, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 11));
  /* d0f50: csel w8, w8, w11, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 11)));
  /* d0f54: stp w9, w8, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st32(_pa, ARC_W_R(c, 9));
    arc_st32(_pa + 4, ARC_W_R(c, 8));
  }
  /* d0f58: csel w8, w12, w11, gt */
  ARC_W_W(c, 8, (ARC_COND(c, 12) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 11)));
  /* d0f5c: stp w8, w10, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_st32(_pa, ARC_W_R(c, 8));
    arc_st32(_pa + 4, ARC_W_R(c, 10));
  }
  /* d0f60: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d0f64: ret  */
  return;
L_d0f68:;
  /* d0f68: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* d0f6c: b.ne #0xd0fdc */
  if (ARC_COND(c, 1)) goto L_d0fdc;
  /* d0f70: ldur w9, [x1, #-4] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 1) + INT64_C(-4))));
  /* d0f74: ldr w8, [x0] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 0)));
  /* d0f78: cmp w9, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 8));
  /* d0f7c: b.ge #0xd0e8c */
  if (ARC_COND(c, 10)) goto L_d0e8c;
  /* d0f80: str w9, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* d0f84: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d0f88: stur w8, [x1, #-4] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(-4)), ARC_W_R(c, 8));
  /* d0f8c: ret  */
  return;
L_d0f90:;
  /* d0f90: ldr w8, [x0, #4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(4))));
  /* d0f94: ldur w9, [x1, #-4] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 1) + INT64_C(-4))));
  /* d0f98: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d0f9c: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0fa0: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0fa4: stur w10, [x1, #-4] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(-4)), ARC_W_R(c, 10));
  /* d0fa8: str w8, [x0, #4] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(4)), ARC_W_R(c, 8));
  /* d0fac: ldr w9, [x0] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 0)));
  /* d0fb0: ldur w8, [x1, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + INT64_C(-4))));
  /* d0fb4: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d0fb8: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0fbc: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0fc0: stur w10, [x1, #-4] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(-4)), ARC_W_R(c, 10));
  /* d0fc4: ldp w9, w10, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* d0fc8: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* d0fcc: csel w9, w9, w10, lt */
  ARC_W_W(c, 9, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* d0fd0: csel w8, w8, w10, gt */
  ARC_W_W(c, 8, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* d0fd4: str w9, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* d0fd8: b #0xd1104 */
  goto L_d1104;
L_d0fdc:;
  /* d0fdc: mov x11, x0 */
  ARC_X_W(c, 11, ARC_X_R(c, 0));
  /* d0fe0: ldp w10, w9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_W_W(c, 10, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* d0fe4: ldr w8, [x11, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 11) + INT64_C(8));
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(8));
    ARC_W_W(c, 8, arc_ld32(_a));
  }
  /* d0fe8: cmp w9, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 8));
  /* d0fec: csel w12, w9, w8, gt */
  ARC_W_W(c, 12, (ARC_COND(c, 12) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* d0ff0: csel w9, w9, w8, lt */
  ARC_W_W(c, 9, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* d0ff4: cmp w12, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 10));
  /* d0ff8: csel w8, w12, w10, gt */
  ARC_W_W(c, 8, (ARC_COND(c, 12) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 10)));
  /* d0ffc: csel w13, w12, w10, lt */
  ARC_W_W(c, 13, (ARC_COND(c, 11) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 10)));
  /* d1000: cmp w10, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 9));
  /* d1004: str w8, [x11] */
  arc_st32(ARC_X_R(c, 11), ARC_W_R(c, 8));
  /* d1008: add x8, x0, #0xc */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(12)));
  /* d100c: csel w10, w10, w9, lt */
  ARC_W_W(c, 10, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* d1010: csel w9, w9, w13, lt */
  ARC_W_W(c, 9, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 13)));
  /* d1014: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* d1018: stp w10, w9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st32(_pa, ARC_W_R(c, 10));
    arc_st32(_pa + 4, ARC_W_R(c, 9));
  }
  /* d101c: b.eq #0xd0e8c */
  if (ARC_COND(c, 0)) goto L_d0e8c;
  /* d1020: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* d1024: mov w10, #0xc */
  ARC_W_W(c, 10, UINT64_C(12));
  /* d1028: b #0xd1058 */
  goto L_d1058;
L_d102c:;
  /* d102c: mov x11, x0 */
  ARC_X_W(c, 11, ARC_X_R(c, 0));
L_d1030:;
  /* d1030: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* d1034: str w12, [x11] */
  arc_st32(ARC_X_R(c, 11), ARC_W_R(c, 12));
  /* d1038: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* d103c: b.eq #0xd1110 */
  if (ARC_COND(c, 0)) goto L_d1110;
L_d1040:;
  /* d1040: add x12, x8, #4 */
  ARC_X_W(c, 12, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* d1044: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
  /* d1048: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* d104c: cmp x12, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 1));
  /* d1050: mov x8, x12 */
  ARC_X_W(c, 8, ARC_X_R(c, 12));
  /* d1054: b.eq #0xd0e8c */
  if (ARC_COND(c, 0)) goto L_d0e8c;
L_d1058:;
  /* d1058: ldr w12, [x8] */
  ARC_W_W(c, 12, arc_ld32(ARC_X_R(c, 8)));
  /* d105c: ldr w11, [x11] */
  ARC_W_W(c, 11, arc_ld32(ARC_X_R(c, 11)));
  /* d1060: cmp w12, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 11));
  /* d1064: b.ge #0xd1040 */
  if (ARC_COND(c, 10)) goto L_d1040;
  /* d1068: mov x14, x10 */
  ARC_X_W(c, 14, ARC_X_R(c, 10));
L_d106c:;
  /* d106c: subs x13, x14, #4 */
  ARC_X_W(c, 13, arc_sub64(c, ARC_X_R(c, 14), UINT64_C(4)));
  /* d1070: str w11, [x0, x14] */
  arc_st32((ARC_X_R(c, 0) + ARC_X_R(c, 14)), ARC_W_R(c, 11));
  /* d1074: b.eq #0xd102c */
  if (ARC_COND(c, 0)) goto L_d102c;
  /* d1078: add x11, x0, x14 */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + ARC_X_R(c, 14)));
  /* d107c: mov x14, x13 */
  ARC_X_W(c, 14, ARC_X_R(c, 13));
  /* d1080: ldur w11, [x11, #-8] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 11) + INT64_C(-8))));
  /* d1084: cmp w12, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 11));
  /* d1088: b.lt #0xd106c */
  if (ARC_COND(c, 11)) goto L_d106c;
  /* d108c: add x11, x0, x13 */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + ARC_X_R(c, 13)));
  /* d1090: b #0xd1030 */
  goto L_d1030;
L_d1094:;
  /* d1094: ldp w10, w8, [x0, #4] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(4));
    ARC_W_W(c, 10, arc_ld32(_pa));
    ARC_W_W(c, 8, arc_ld32(_pa + 4));
  }
  /* d1098: ldr w9, [x0] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 0)));
  /* d109c: cmp w9, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 8));
  /* d10a0: csel w11, w9, w8, gt */
  ARC_W_W(c, 11, (ARC_COND(c, 12) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* d10a4: csel w8, w9, w8, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* d10a8: str w11, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 11));
  /* d10ac: str w8, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* d10b0: ldur w8, [x1, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + INT64_C(-4))));
  /* d10b4: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* d10b8: csel w9, w10, w8, gt */
  ARC_W_W(c, 9, (ARC_COND(c, 12) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d10bc: csel w8, w10, w8, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d10c0: stur w9, [x1, #-4] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(-4)), ARC_W_R(c, 9));
  /* d10c4: ldr w9, [x0] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 0)));
  /* d10c8: cmp w9, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 8));
  /* d10cc: csel w10, w9, w8, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* d10d0: csel w8, w9, w8, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* d10d4: stp w8, w10, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st32(_pa, ARC_W_R(c, 8));
    arc_st32(_pa + 4, ARC_W_R(c, 10));
  }
  /* d10d8: ldr w8, [x0, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(8))));
  /* d10dc: ldur w9, [x1, #-4] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 1) + INT64_C(-4))));
  /* d10e0: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d10e4: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d10e8: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d10ec: stur w10, [x1, #-4] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(-4)), ARC_W_R(c, 10));
  /* d10f0: ldr w10, [x0, #4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 0) + INT64_C(4))));
  /* d10f4: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* d10f8: csel w9, w10, w8, gt */
  ARC_W_W(c, 9, (ARC_COND(c, 12) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d10fc: csel w8, w10, w8, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d1100: str w9, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
L_d1104:;
  /* d1104: str w8, [x0, #4] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(4)), ARC_W_R(c, 8));
  /* d1108: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d110c: ret  */
  return;
L_d1110:;
  /* d1110: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* d1114: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* d1118: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* d111c: ret  */
  return;
}

void fn1_d791c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038810908));
  /* d791c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d7920: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d7924: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* d7928: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* d792c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d7930: bl #0x142ae8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(882996));
  fn1_142ae8(c);
  /* d7934: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d7938: mov w1, #0x30 */
  ARC_W_W(c, 1, UINT64_C(48));
  /* d793c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* d7940: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d7944: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d7948: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_db6b4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038826676));
  /* db6b4: bti c */
  /* bti: no architectural effect here */
  /* db6b8: nop  */
  /* nop: no architectural effect here */
  /* db6bc: adr x8, #0x156d30 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404208)));
  /* db6c0: ldar x0, [x8] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 8)));
  /* db6c4: ret  */
  return;
}

void fn1_dfbbc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038844348));
  /* dfbbc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* dfbc0: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* dfbc4: stp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* dfbc8: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* dfbcc: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* dfbd0: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* dfbd4: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* dfbd8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* dfbdc: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* dfbe0: ldr x8, [x0, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* dfbe4: lsr x10, x9, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* dfbe8: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* dfbec: csel x20, x10, x8, eq */
  ARC_X_W(c, 20, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* dfbf0: subs x8, x20, x1 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 1)));
  /* dfbf4: b.lo #0xdfd88 */
  if (ARC_COND(c, 3)) goto L_dfd88;
  /* dfbf8: ldr x10, [x0] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 0)));
  /* dfbfc: cmp x8, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 2));
  /* dfc00: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* dfc04: csel x24, x8, x2, lo */
  ARC_X_W(c, 24, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 2)));
  /* dfc08: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* dfc0c: mov w9, #0x16 */
  ARC_W_W(c, 9, UINT64_C(22));
  /* dfc10: and x11, x10, #0xfffffffffffffffe */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) & UINT64_C(18446744073709551614)));
  /* dfc14: mov x21, x4 */
  ARC_X_W(c, 21, ARC_X_R(c, 4));
  /* dfc18: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* dfc1c: sub x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* dfc20: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* dfc24: csel x1, x9, x11, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 11)));
  /* dfc28: sub x9, x24, x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) - ARC_X_R(c, 20)));
  /* dfc2c: add x9, x9, x1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 1)));
  /* dfc30: cmp x9, x4 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 4));
  /* dfc34: b.hs #0xdfc64 */
  if (ARC_COND(c, 2)) goto L_dfc64;
  /* dfc38: add x8, x20, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + ARC_X_R(c, 21)));
  /* dfc3c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* dfc40: mov x3, x20 */
  ARC_X_W(c, 3, ARC_X_R(c, 20));
  /* dfc44: sub x8, x8, x1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 1)));
  /* dfc48: mov x4, x23 */
  ARC_X_W(c, 4, ARC_X_R(c, 23));
  /* dfc4c: mov x5, x24 */
  ARC_X_W(c, 5, ARC_X_R(c, 24));
  /* dfc50: sub x2, x8, x24 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) - ARC_X_R(c, 24)));
  /* dfc54: mov x6, x21 */
  ARC_X_W(c, 6, ARC_X_R(c, 21));
  /* dfc58: mov x7, x22 */
  ARC_X_W(c, 7, ARC_X_R(c, 22));
  /* dfc5c: bl #0x142b90 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(916576));
  fn1_142b90(c);
  /* dfc60: b #0xdfd64 */
  goto L_dfd64;
L_dfc64:;
  /* dfc64: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* dfc68: tst x10, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 10) & UINT64_C(1)));
  /* dfc6c: csinc x27, x9, x19, ne */
  ARC_X_W(c, 27, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* dfc70: cmp x21, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 24));
  /* dfc74: b.ne #0xdfc80 */
  if (ARC_COND(c, 1)) goto L_dfc80;
  /* dfc78: mov x24, x21 */
  ARC_X_W(c, 24, ARC_X_R(c, 21));
  /* dfc7c: b #0xdfd34 */
  goto L_dfd34;
L_dfc80:;
  /* dfc80: cmp x8, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 2));
  /* dfc84: b.ls #0xdfd34 */
  if (ARC_COND(c, 9)) goto L_dfd34;
  /* dfc88: subs x28, x21, x24 */
  ARC_X_W(c, 28, arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 24)));
  /* dfc8c: sub x25, x8, x24 */
  ARC_X_W(c, 25, (ARC_X_R(c, 8) - ARC_X_R(c, 24)));
  /* dfc90: add x26, x27, x23 */
  ARC_X_W(c, 26, (ARC_X_R(c, 27) + ARC_X_R(c, 23)));
  /* dfc94: b.hs #0xdfcd0 */
  if (ARC_COND(c, 2)) goto L_dfcd0;
  /* dfc98: cbz x21, #0xdfcac */
  if ((ARC_X_R(c, 21)) == 0) goto L_dfcac;
  /* dfc9c: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* dfca0: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* dfca4: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* dfca8: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(916652));
  fn1_1449f0(c);
L_dfcac:;
  /* dfcac: add x0, x26, x21 */
  ARC_X_W(c, 0, (ARC_X_R(c, 26) + ARC_X_R(c, 21)));
  /* dfcb0: add x1, x26, x24 */
  ARC_X_W(c, 1, (ARC_X_R(c, 26) + ARC_X_R(c, 24)));
  /* dfcb4: mov x2, x25 */
  ARC_X_W(c, 2, ARC_X_R(c, 25));
  /* dfcb8: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(916668));
  fn1_1449f0(c);
  /* dfcbc: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* dfcc0: add x8, x28, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 28) + ARC_X_R(c, 20)));
  /* dfcc4: tbz w9, #0, #0xdfd58 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_dfd58;
L_dfcc8:;
  /* dfcc8: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* dfccc: b #0xdfd60 */
  goto L_dfd60;
L_dfcd0:;
  /* dfcd0: add x8, x27, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 27) + ARC_X_R(c, 20)));
  /* dfcd4: cmp x22, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* dfcd8: b.hs #0xdfd20 */
  if (ARC_COND(c, 2)) goto L_dfd20;
  /* dfcdc: add x8, x26, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 26) + UINT64_C(1)));
  /* dfce0: cmp x22, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* dfce4: b.lo #0xdfd20 */
  if (ARC_COND(c, 3)) goto L_dfd20;
  /* dfce8: add x8, x26, x24 */
  ARC_X_W(c, 8, (ARC_X_R(c, 26) + ARC_X_R(c, 24)));
  /* dfcec: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* dfcf0: b.ls #0xdfd1c */
  if (ARC_COND(c, 9)) goto L_dfd1c;
  /* dfcf4: cbz x2, #0xdfd08 */
  if ((ARC_X_R(c, 2)) == 0) goto L_dfd08;
  /* dfcf8: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* dfcfc: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* dfd00: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* dfd04: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(916744));
  fn1_1449f0(c);
L_dfd08:;
  /* dfd08: add x23, x24, x23 */
  ARC_X_W(c, 23, (ARC_X_R(c, 24) + ARC_X_R(c, 23)));
  /* dfd0c: add x22, x22, x21 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + ARC_X_R(c, 21)));
  /* dfd10: mov x21, x28 */
  ARC_X_W(c, 21, ARC_X_R(c, 28));
  /* dfd14: mov x24, xzr */
  ARC_X_W(c, 24, ARC_X_R(c, 31));
  /* dfd18: b #0xdfd20 */
  goto L_dfd20;
L_dfd1c:;
  /* dfd1c: add x22, x22, x28 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + ARC_X_R(c, 28)));
L_dfd20:;
  /* dfd20: add x8, x27, x23 */
  ARC_X_W(c, 8, (ARC_X_R(c, 27) + ARC_X_R(c, 23)));
  /* dfd24: mov x2, x25 */
  ARC_X_W(c, 2, ARC_X_R(c, 25));
  /* dfd28: add x0, x8, x21 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* dfd2c: add x1, x8, x24 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + ARC_X_R(c, 24)));
  /* dfd30: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(916788));
  fn1_1449f0(c);
L_dfd34:;
  /* dfd34: cbz x21, #0xdfd48 */
  if ((ARC_X_R(c, 21)) == 0) goto L_dfd48;
  /* dfd38: add x0, x27, x23 */
  ARC_X_W(c, 0, (ARC_X_R(c, 27) + ARC_X_R(c, 23)));
  /* dfd3c: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* dfd40: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* dfd44: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(916808));
  fn1_1449f0(c);
L_dfd48:;
  /* dfd48: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* dfd4c: sub x8, x21, x24 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) - ARC_X_R(c, 24)));
  /* dfd50: add x8, x8, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 20)));
  /* dfd54: tbnz w9, #0, #0xdfcc8 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_dfcc8;
L_dfd58:;
  /* dfd58: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* dfd5c: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
L_dfd60:;
  /* dfd60: strb wzr, [x27, x8] */
  arc_st8((ARC_X_R(c, 27) + ARC_X_R(c, 8)), ARC_W_R(c, 31));
L_dfd64:;
  /* dfd64: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* dfd68: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* dfd6c: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* dfd70: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* dfd74: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* dfd78: ldp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* dfd7c: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* dfd80: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* dfd84: ret  */
  return;
L_dfd88:;
  /* dfd88: bl #0xda020 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(916876));
  fn1_da020(c);
}

void fn1_e2510(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038854928));
  /* e2510: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e2514: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e2518: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e251c: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e2520: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e2524: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e2528: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e252c: ldr x9, [x0, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* e2530: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e2534: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e2538: csel x20, x10, x9, eq */
  ARC_X_W(c, 20, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e253c: cmp x20, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 1));
  /* e2540: b.lo #0xe2664 */
  if (ARC_COND(c, 3)) goto L_e2664;
  /* e2544: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* e2548: cbz x2, #0xe264c */
  if ((ARC_X_R(c, 2)) == 0) goto L_e264c;
  /* e254c: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* e2550: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e2554: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* e2558: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* e255c: mov w19, w3 */
  ARC_W_W(c, 19, ARC_W_R(c, 3));
  /* e2560: and x10, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* e2564: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* e2568: csel x1, x8, x10, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* e256c: sub x8, x1, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) - ARC_X_R(c, 20)));
  /* e2570: cmp x8, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 21));
  /* e2574: b.hs #0xe25a8 */
  if (ARC_COND(c, 2)) goto L_e25a8;
  /* e2578: add x24, x20, x21 */
  ARC_X_W(c, 24, (ARC_X_R(c, 20) + ARC_X_R(c, 21)));
  /* e257c: mov x3, x20 */
  ARC_X_W(c, 3, ARC_X_R(c, 20));
  /* e2580: mov x4, x22 */
  ARC_X_W(c, 4, ARC_X_R(c, 22));
  /* e2584: sub x2, x24, x1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 24) - ARC_X_R(c, 1)));
  /* e2588: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* e258c: mov x6, x21 */
  ARC_X_W(c, 6, ARC_X_R(c, 21));
  /* e2590: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* e2594: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(927128));
  fn1_142da0(c);
  /* e2598: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* e259c: ldr x23, [x23, #0x10] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 23) + INT64_C(16))));
  /* e25a0: str x24, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 24));
  /* e25a4: b #0xe25dc */
  goto L_e25dc;
L_e25a8:;
  /* e25a8: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e25ac: add x10, x0, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 0) + UINT64_C(4)));
  /* e25b0: tst x9, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(1)));
  /* e25b4: csel x23, x10, x8, eq */
  ARC_X_W(c, 23, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* e25b8: subs x9, x20, x22 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22)));
  /* e25bc: b.eq #0xe25dc */
  if (ARC_COND(c, 0)) goto L_e25dc;
  /* e25c0: add x1, x23, x22, lsl #2 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + ((uint64_t)(ARC_X_R(c, 22)) << 2)));
  /* e25c4: lsl x2, x9, #2 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(2)) & 63)));
  /* e25c8: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* e25cc: add x8, x1, x21, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) + ((uint64_t)(ARC_X_R(c, 21)) << 2)));
  /* e25d0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* e25d4: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(927192));
  fn1_1449f0(c);
  /* e25d8: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
L_e25dc:;
  /* e25dc: add x11, x23, x22, lsl #2 */
  ARC_X_W(c, 11, (ARC_X_R(c, 23) + ((uint64_t)(ARC_X_R(c, 22)) << 2)));
  /* e25e0: cmp x21, #8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(8));
  /* e25e4: mov x9, x21 */
  ARC_X_W(c, 9, ARC_X_R(c, 21));
  /* e25e8: mov x8, x11 */
  ARC_X_W(c, 8, ARC_X_R(c, 11));
  /* e25ec: b.lo #0xe2620 */
  if (ARC_COND(c, 3)) goto L_e2620;
  /* e25f0: and x10, x21, #0xfffffffffffffff8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 21) & UINT64_C(18446744073709551608)));
  /* e25f4: dup v0.4s, w19 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (ARC_W_R(c, 19));
    _t.u32[1] = (ARC_W_R(c, 19));
    _t.u32[2] = (ARC_W_R(c, 19));
    _t.u32[3] = (ARC_W_R(c, 19));
    (c)->q[0] = _t; }
  /* e25f8: and x9, x21, #7 */
  ARC_X_W(c, 9, (ARC_X_R(c, 21) & UINT64_C(7)));
  /* e25fc: add x8, x11, x10, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 10)) << 2)));
  /* e2600: add x11, x11, #0x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(16)));
  /* e2604: mov x12, x10 */
  ARC_X_W(c, 12, ARC_X_R(c, 10));
L_e2608:;
  /* e2608: subs x12, x12, #8 */
  ARC_X_W(c, 12, arc_sub64(c, ARC_X_R(c, 12), UINT64_C(8)));
  /* e260c: stp q0, q0, [x11, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* e2610: add x11, x11, #0x20 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(32)));
  /* e2614: b.ne #0xe2608 */
  if (ARC_COND(c, 1)) goto L_e2608;
  /* e2618: cmp x21, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 10));
  /* e261c: b.eq #0xe262c */
  if (ARC_COND(c, 0)) goto L_e262c;
L_e2620:;
  /* e2620: subs x9, x9, #1 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 9), UINT64_C(1)));
  /* e2624: str w19, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 19));
  }
  /* e2628: b.ne #0xe2620 */
  if (ARC_COND(c, 1)) goto L_e2620;
L_e262c:;
  /* e262c: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* e2630: add x8, x20, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + ARC_X_R(c, 21)));
  /* e2634: tbnz w9, #0, #0xe2644 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_e2644;
  /* e2638: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* e263c: strb w9, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* e2640: b #0xe2648 */
  goto L_e2648;
L_e2644:;
  /* e2644: str x8, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 8));
L_e2648:;
  /* e2648: str wzr, [x23, x8, lsl #2] */
  arc_st32((ARC_X_R(c, 23) + ((uint64_t)(ARC_X_R(c, 8)) << 2)), ARC_W_R(c, 31));
L_e264c:;
  /* e264c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e2650: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e2654: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e2658: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e265c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e2660: ret  */
  return;
L_e2664:;
  /* e2664: bl #0xe1f80 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(927336));
  fn1_e1f80(c);
}

void fn1_e5dc0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038869440));
  /* e5dc0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e5dc4: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* e5dc8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e5dcc: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e5dd0: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e5dd4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* e5dd8: mov w1, w0 */
  ARC_W_W(c, 1, ARC_W_R(c, 0));
  /* e5ddc: add x0, sp, #5 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(5)));
  /* e5de0: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* e5de4: add x20, sp, #5 */
  ARC_X_W(c, 20, ((c)->sp + UINT64_C(5)));
  /* e5de8: bl #0xd4eb8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(941548));
  fn1_d4eb8(c);
  /* e5dec: sub x20, x0, x20 */
  ARC_X_W(c, 20, (ARC_X_R(c, 0) - ARC_X_R(c, 20)));
  /* e5df0: cmn x20, #8 */
  (void)arc_add64(c, ARC_X_R(c, 20), UINT64_C(8), 0);
  /* e5df4: b.hs #0xe5e70 */
  if (ARC_COND(c, 2)) goto L_e5e70;
  /* e5df8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e5dfc: cmp x20, #0x16 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(22));
  /* e5e00: b.hi #0xe5e10 */
  if (ARC_COND(c, 8)) goto L_e5e10;
  /* e5e04: lsl w8, w20, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 20)) << ((UINT64_C(1)) & 31)));
  /* e5e08: strb w8, [x19], #1 */
  { const uint64_t _a = ARC_X_R(c, 19);
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* e5e0c: b #0xe5e38 */
  goto L_e5e38;
L_e5e10:;
  /* e5e10: orr x8, x20, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) | UINT64_C(7)));
  /* e5e14: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* e5e18: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* e5e1c: csinc x22, x9, x8, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* e5e20: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* e5e24: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(941608));
  fn1_1428f0(c);
  /* e5e28: orr x8, x22, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) | UINT64_C(1)));
  /* e5e2c: stp x20, x0, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* e5e30: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* e5e34: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_e5e38:;
  /* e5e38: add x8, sp, #5 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(5)));
  /* e5e3c: cmp x21, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* e5e40: b.eq #0xe5e54 */
  if (ARC_COND(c, 0)) goto L_e5e54;
  /* e5e44: add x1, sp, #5 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(5)));
  /* e5e48: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e5e4c: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* e5e50: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(941652));
  fn1_1449d8(c);
L_e5e54:;
  /* e5e54: strb wzr, [x19, x20] */
  arc_st8((ARC_X_R(c, 19) + ARC_X_R(c, 20)), ARC_W_R(c, 31));
  /* e5e58: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e5e5c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e5e60: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e5e64: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* e5e68: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e5e6c: ret  */
  return;
L_e5e70:;
  /* e5e70: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(941684));
  fn1_d7d54(c);
}

void fn1_e956c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038883692));
  /* e956c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e9570: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e9574: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e9578: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(955772));
  fn1_142578(c);
  /* e957c: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e9580: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e9584: ret  */
  return;
  /* e9588: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(955788));
  fn1_a1454(c);
}

void fn1_eb560(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038891872));
  /* eb560: bti c */
  /* bti: no architectural effect here */
  /* eb564: b #0x1432c8 */
  fn1_1432c8(c); return;
}

void fn1_ed2dc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038899420));
  /* ed2dc: bti c */
  /* bti: no architectural effect here */
  /* ed2e0: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ed2e4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ed2e8: b.eq #0xed2fc */
  if (ARC_COND(c, 0)) goto L_ed2fc;
  /* ed2ec: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* ed2f0: str x9, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 9));
  /* ed2f4: ldrb w0, [x8] */
  ARC_W_W(c, 0, arc_ld8(ARC_X_R(c, 8)));
  /* ed2f8: ret  */
  return;
L_ed2fc:;
  /* ed2fc: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* ed300: ldr x16, [x8, #0x50] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* ed304: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_f0584(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038912388));
  /* f0584: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f0588: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f058c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* f0590: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f0594: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f0598: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f059c: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* f05a0: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* f05a4: str xzr, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 31));
  /* f05a8: add x0, x29, #0x1c */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(28)));
  /* f05ac: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f05b0: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* f05b4: bl #0x1435f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(984504));
  fn1_1435f8(c);
  /* f05b8: ldrb w8, [x29, #0x1c] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(28))));
  /* f05bc: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f05c0: b.ne #0xf05fc */
  if (ARC_COND(c, 1)) goto L_f05fc;
  /* f05c4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f05c8: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f05cc: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f05d0: ldr x0, [x8, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f05d4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f05d8: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* f05dc: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* f05e0: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* f05e4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(984552));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f05e8: cmp x0, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 20));
  /* f05ec: mov w8, #6 */
  ARC_W_W(c, 8, UINT64_C(6));
  /* f05f0: str x0, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 0));
  /* f05f4: csel w8, wzr, w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? (ARC_W_R(c, 31)) : ARC_W_R(c, 8)));
  /* f05f8: b #0xf0600 */
  goto L_f0600;
L_f05fc:;
  /* f05fc: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
L_f0600:;
  /* f0600: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* f0604: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* f0608: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f060c: ldr x10, [x9, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 9) + INT64_C(40))));
  /* f0610: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* f0614: ldp w11, w10, [x9, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(32));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* f0618: orr w8, w11, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 11) | ARC_W_R(c, 8)));
  /* f061c: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* f0620: orr w8, w8, w11 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 11)));
  /* f0624: tst w8, w10 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 10)));
  /* f0628: str w8, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 8));
  /* f062c: b.ne #0xf0648 */
  if (ARC_COND(c, 1)) goto L_f0648;
  /* f0630: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f0634: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f0638: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* f063c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f0640: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f0644: ret  */
  return;
L_f0648:;
  /* f0648: nop  */
  /* nop: no architectural effect here */
  /* f064c: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f0650: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(984660));
  fn1_ec720(c);
  /* f0654: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(984664));
  fn1_142548(c);
  /* f0658: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f065c: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f0660: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f0664: ldr w10, [x9, #0x20] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f0668: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* f066c: str w10, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 10));
  /* f0670: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f0674: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f0678: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f067c: tbnz w8, #0, #0xf068c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_f068c;
  /* f0680: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(984708));
  fn1_142980(c);
  /* f0684: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* f0688: b #0xf0600 */
  goto L_f0600;
L_f068c:;
  /* f068c: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(984720));
  fn1_1429b0(c);
  /* f0690: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f0694: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(984728));
  fn1_142980(c);
  /* f0698: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f069c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(984736));
  fn1_9cc20(c);
  /* f06a0: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(984740));
  fn1_a1454(c);
}

void fn1_f3d0c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038926604));
  /* f3d0c: bti c */
  /* bti: no architectural effect here */
  /* f3d10: ldp x9, x10, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* f3d14: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* f3d18: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* f3d1c: b.eq #0xf3d2c */
  if (ARC_COND(c, 0)) goto L_f3d2c;
  /* f3d20: ldr w0, [x9], #4 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    ARC_W_W(c, 0, arc_ld32(_a));
  }
  /* f3d24: str x9, [x8, #0x18] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(24)), ARC_X_R(c, 9));
  /* f3d28: ret  */
  return;
L_f3d2c:;
  /* f3d2c: ldr x9, [x8] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 8)));
  /* f3d30: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* f3d34: ldr x16, [x9, #0x50] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 9) + INT64_C(80))));
  /* f3d38: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_f6fa0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038939552));
  /* f6fa0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f6fa4: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f6fa8: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* f6fac: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f6fb0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f6fb4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f6fb8: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* f6fbc: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* f6fc0: str xzr, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 31));
  /* f6fc4: add x0, x29, #0x1c */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(28)));
  /* f6fc8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f6fcc: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* f6fd0: bl #0x143670 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1011668));
  fn1_143670(c);
  /* f6fd4: ldrb w8, [x29, #0x1c] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(28))));
  /* f6fd8: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f6fdc: b.ne #0xf7018 */
  if (ARC_COND(c, 1)) goto L_f7018;
  /* f6fe0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f6fe4: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f6fe8: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f6fec: ldr x0, [x8, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f6ff0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f6ff4: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* f6ff8: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* f6ffc: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* f7000: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1011716));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f7004: cmp x0, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 20));
  /* f7008: mov w8, #6 */
  ARC_W_W(c, 8, UINT64_C(6));
  /* f700c: str x0, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 0));
  /* f7010: csel w8, wzr, w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? (ARC_W_R(c, 31)) : ARC_W_R(c, 8)));
  /* f7014: b #0xf701c */
  goto L_f701c;
L_f7018:;
  /* f7018: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
L_f701c:;
  /* f701c: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* f7020: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* f7024: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f7028: ldr x10, [x9, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 9) + INT64_C(40))));
  /* f702c: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* f7030: ldp w11, w10, [x9, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(32));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* f7034: orr w8, w11, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 11) | ARC_W_R(c, 8)));
  /* f7038: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* f703c: orr w8, w8, w11 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 11)));
  /* f7040: tst w8, w10 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 10)));
  /* f7044: str w8, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 8));
  /* f7048: b.ne #0xf7064 */
  if (ARC_COND(c, 1)) goto L_f7064;
  /* f704c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f7050: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f7054: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* f7058: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f705c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f7060: ret  */
  return;
L_f7064:;
  /* f7064: nop  */
  /* nop: no architectural effect here */
  /* f7068: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f706c: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1011824));
  fn1_ec720(c);
  /* f7070: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1011828));
  fn1_142548(c);
  /* f7074: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f7078: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f707c: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f7080: ldr w10, [x9, #0x20] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f7084: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* f7088: str w10, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 10));
  /* f708c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f7090: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f7094: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f7098: tbnz w8, #0, #0xf70a8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_f70a8;
  /* f709c: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1011872));
  fn1_142980(c);
  /* f70a0: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* f70a4: b #0xf701c */
  goto L_f701c;
L_f70a8:;
  /* f70a8: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1011884));
  fn1_1429b0(c);
  /* f70ac: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f70b0: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1011892));
  fn1_142980(c);
  /* f70b4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f70b8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1011900));
  fn1_9cc20(c);
  /* f70bc: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1011904));
  fn1_a1454(c);
}

void fn1_fc10c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038960396));
  /* fc10c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fc110: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* fc114: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fc118: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* fc11c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fc120: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* fc124: ldr x8, [x0, #0x78] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(120))));
  /* fc128: cbz x8, #0xfc194 */
  if ((ARC_X_R(c, 8)) == 0) goto L_fc194;
  /* fc12c: ldr w8, [x0, #0x9c] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(156))));
  /* fc130: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fc134: tbnz w8, #3, #0xfc19c */
  if (((ARC_W_R(c, 8)) >> 3 & 1) != 0) goto L_fc19c;
  /* fc138: ldrb w9, [x19, #0xa2] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 19) + INT64_C(162))));
  /* fc13c: mov w10, #0x68 */
  ARC_W_W(c, 10, UINT64_C(104));
  /* fc140: mov w11, #0x40 */
  ARC_W_W(c, 11, UINT64_C(64));
  /* fc144: mov w12, #0x70 */
  ARC_W_W(c, 12, UINT64_C(112));
  /* fc148: stp xzr, xzr, [x19, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* fc14c: cmp w9, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(0));
  /* fc150: mov w9, #0x60 */
  ARC_W_W(c, 9, UINT64_C(96));
  /* fc154: csel x10, x11, x10, ne */
  ARC_X_W(c, 10, (ARC_COND(c, 1) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* fc158: csel x9, x9, x12, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 12)));
  /* fc15c: ldr x10, [x19, x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + ARC_X_R(c, 10))));
  /* fc160: ldr x9, [x19, x9] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + ARC_X_R(c, 9))));
  /* fc164: add x9, x10, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + ARC_X_R(c, 9)));
  /* fc168: stp x10, x9, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* fc16c: mov w10, #8 */
  ARC_W_W(c, 10, UINT64_C(8));
  /* fc170: stp x9, xzr, [x19, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* fc174: str w10, [x19, #0x9c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(156)), ARC_W_R(c, 10));
  /* fc178: cbz x9, #0xfc1a4 */
  if ((ARC_X_R(c, 9)) == 0) goto L_fc1a4;
L_fc17c:;
  /* fc17c: ldr x10, [x19, #0x20] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* fc180: tbnz w8, #3, #0xfc1bc */
  if (((ARC_W_R(c, 8)) >> 3 & 1) != 0) goto L_fc1bc;
L_fc184:;
  /* fc184: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* fc188: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* fc18c: b.ne #0xfc1e0 */
  if (ARC_COND(c, 1)) goto L_fc1e0;
  /* fc190: b #0xfc1e8 */
  goto L_fc1e8;
L_fc194:;
  /* fc194: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* fc198: b #0xfc344 */
  goto L_fc344;
L_fc19c:;
  /* fc19c: ldr x9, [x19, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* fc1a0: cbnz x9, #0xfc17c */
  if ((ARC_X_R(c, 9)) != 0) goto L_fc17c;
L_fc1a4:;
  /* fc1a4: sub x9, x29, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) - UINT64_C(1)));
  /* fc1a8: add x10, x9, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* fc1ac: stp x9, x10, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* fc1b0: mov x9, x10 */
  ARC_X_W(c, 9, ARC_X_R(c, 10));
  /* fc1b4: str x10, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 10));
  /* fc1b8: tbz w8, #3, #0xfc184 */
  if (((ARC_W_R(c, 8)) >> 3 & 1) == 0) goto L_fc184;
L_fc1bc:;
  /* fc1bc: ldr x8, [x19, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* fc1c0: mov w11, #4 */
  ARC_W_W(c, 11, UINT64_C(4));
  /* fc1c4: sub x8, x10, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* fc1c8: add x8, x8, x8, lsr #63 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 8)) >> 63)));
  /* fc1cc: asr x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63))));
  /* fc1d0: cmp x8, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(4));
  /* fc1d4: csel x20, x8, x11, lo */
  ARC_X_W(c, 20, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 11)));
  /* fc1d8: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* fc1dc: b.eq #0xfc1e8 */
  if (ARC_COND(c, 0)) goto L_fc1e8;
L_fc1e0:;
  /* fc1e0: ldrb w0, [x9] */
  ARC_W_W(c, 0, arc_ld8(ARC_X_R(c, 9)));
  /* fc1e4: b #0xfc32c */
  goto L_fc32c;
L_fc1e8:;
  /* fc1e8: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* fc1ec: sub x1, x10, x20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 10) - ARC_X_R(c, 20)));
  /* fc1f0: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* fc1f4: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1032696));
  fn1_1449f0(c);
  /* fc1f8: ldrb w8, [x19, #0xa2] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(162))));
  /* fc1fc: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* fc200: b.ne #0xfc234 */
  if (ARC_COND(c, 1)) goto L_fc234;
  /* fc204: ldr x8, [x19, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* fc208: ldr x9, [x19, #0x20] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* fc20c: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* fc210: ldr x3, [x19, #0x78] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 19) + INT64_C(120))));
  /* fc214: add x0, x20, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* fc218: sub x2, x9, x0 */
  ARC_X_W(c, 2, (ARC_X_R(c, 9) - ARC_X_R(c, 0)));
  /* fc21c: bl #0x143718 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1032736));
  fn1_143718(c);
  /* fc220: cbz x0, #0xfc328 */
  if ((ARC_X_R(c, 0)) == 0) goto L_fc328;
  /* fc224: ldr x8, [x19, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* fc228: add x8, x8, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 20)));
  /* fc22c: add x9, x8, x0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ARC_X_R(c, 0)));
  /* fc230: b #0xfc300 */
  goto L_fc300;
L_fc234:;
  /* fc234: mov x21, x19 */
  ARC_X_W(c, 21, ARC_X_R(c, 19));
  /* fc238: ldp x1, x8, [x21, #0x48]! */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(72));
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(72));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* fc23c: subs x2, x8, x1 */
  ARC_X_W(c, 2, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1)));
  /* fc240: b.eq #0xfc254 */
  if (ARC_COND(c, 0)) goto L_fc254;
  /* fc244: ldr x0, [x19, #0x40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* fc248: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1032780));
  fn1_1449f0(c);
  /* fc24c: ldp x8, x9, [x19, #0x48] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(72));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* fc250: b #0xfc258 */
  goto L_fc258;
L_fc254:;
  /* fc254: mov x9, x8 */
  ARC_X_W(c, 9, ARC_X_R(c, 8));
L_fc258:;
  /* fc258: mov x22, x19 */
  ARC_X_W(c, 22, ARC_X_R(c, 19));
  /* fc25c: sub x8, x9, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* fc260: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* fc264: ldr x10, [x22, #0x88]! */
  { const uint64_t _a = (ARC_X_R(c, 22) + INT64_C(136));
    ARC_X_W(c, 22, ARC_X_R(c, 22) + INT64_C(136));
    ARC_X_W(c, 10, arc_ld64(_a));
  }
  /* fc268: ldur x11, [x22, #-0x48] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 22) + INT64_C(-72))));
  /* fc26c: sub x12, x22, #0x30 */
  ARC_X_W(c, 12, (ARC_X_R(c, 22) - UINT64_C(48)));
  /* fc270: ldur x13, [x22, #-0x28] */
  ARC_X_W(c, 13, arc_ld64((ARC_X_R(c, 22) + INT64_C(-40))));
  /* fc274: cmp x11, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 12));
  /* fc278: mov w12, #8 */
  ARC_W_W(c, 12, UINT64_C(8));
  /* fc27c: add x0, x11, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 11) + ARC_X_R(c, 8)));
  /* fc280: csel x9, x12, x13, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 13)));
  /* fc284: ldp x12, x3, [x22, #-0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 22) + INT64_C(-24));
    ARC_X_W(c, 12, arc_ld64(_pa));
    ARC_X_W(c, 3, arc_ld64(_pa + 8));
  }
  /* fc288: add x11, x11, x9 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ARC_X_R(c, 9)));
  /* fc28c: sub x8, x9, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* fc290: str x10, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 10));
  /* fc294: stp x0, x11, [x22, #-0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 22) + INT64_C(-64));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 11));
  }
  /* fc298: sub x9, x12, x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 12) - ARC_X_R(c, 20)));
  /* fc29c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* fc2a0: csel x2, x8, x9, lo */
  ARC_X_W(c, 2, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* fc2a4: bl #0x143718 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1032872));
  fn1_143718(c);
  /* fc2a8: cbz x0, #0xfc328 */
  if ((ARC_X_R(c, 0)) == 0) goto L_fc328;
  /* fc2ac: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* fc2b0: ldr x0, [x19, #0x80] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(128))));
  /* fc2b4: cbz x0, #0xfc35c */
  if ((ARC_X_R(c, 0)) == 0) goto L_fc35c;
  /* fc2b8: ldp x2, x9, [x19, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(64));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* fc2bc: mov x7, sp */
  ARC_X_W(c, 7, (c)->sp);
  /* fc2c0: ldr x10, [x19, #0x70] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(112))));
  /* fc2c4: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* fc2c8: mov x4, x21 */
  ARC_X_W(c, 4, ARC_X_R(c, 21));
  /* fc2cc: add x3, x9, x8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 9) + ARC_X_R(c, 8)));
  /* fc2d0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* fc2d4: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* fc2d8: str x3, [x19, #0x50] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(80)), ARC_X_R(c, 3));
  /* fc2dc: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* fc2e0: add x5, x9, x20 */
  ARC_X_W(c, 5, (ARC_X_R(c, 9) + ARC_X_R(c, 20)));
  /* fc2e4: add x6, x9, x10 */
  ARC_X_W(c, 6, (ARC_X_R(c, 9) + ARC_X_R(c, 10)));
  /* fc2e8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1032940));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* fc2ec: cmp w0, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(3));
  /* fc2f0: b.ne #0xfc30c */
  if (ARC_COND(c, 1)) goto L_fc30c;
  /* fc2f4: ldr x8, [x19, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* fc2f8: ldr x9, [x19, #0x50] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(80))));
  /* fc2fc: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
L_fc300:;
  /* fc300: stp x8, x9, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* fc304: ldrb w0, [x8] */
  ARC_W_W(c, 0, arc_ld8(ARC_X_R(c, 8)));
  /* fc308: b #0xfc32c */
  goto L_fc32c;
L_fc30c:;
  /* fc30c: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* fc310: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* fc314: add x9, x9, x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 20)));
  /* fc318: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* fc31c: b.eq #0xfc328 */
  if (ARC_COND(c, 0)) goto L_fc328;
  /* fc320: stp x9, x8, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* fc324: b #0xfc1e0 */
  goto L_fc1e0;
L_fc328:;
  /* fc328: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
L_fc32c:;
  /* fc32c: ldr x8, [x19, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* fc330: sub x9, x29, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) - UINT64_C(1)));
  /* fc334: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* fc338: b.ne #0xfc344 */
  if (ARC_COND(c, 1)) goto L_fc344;
  /* fc33c: stp xzr, xzr, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* fc340: str xzr, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 31));
L_fc344:;
  /* fc344: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fc348: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* fc34c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fc350: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* fc354: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fc358: ret  */
  return;
L_fc35c:;
  /* fc35c: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1033056));
  fn1_fc3b8(c);
}

void fn1_ff36c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038973292));
  /* ff36c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ff370: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ff374: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* ff378: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ff37c: nop  */
  /* nop: no architectural effect here */
  /* ff380: adr x19, #0x15dae0 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1432288)));
  /* ff384: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ff388: bl #0x1437d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1045388));
  fn1_1437d8(c);
  /* ff38c: adrp x0, #0x151000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1380352)));
  /* ff390: nop  */
  /* nop: no architectural effect here */
  /* ff394: adr x2, #0x148af8 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1346296)));
  /* ff398: ldr x0, [x0, #0xbb8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3000))));
  /* ff39c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* ff3a0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* ff3a4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ff3a8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ff3ac: b #0x1423f8 */
  fn1_1423f8(c); return;
}

void fn1_10d798(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039031704));
  /* 10d798: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 10d79c: sub sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(160)));
  /* 10d7a0: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 10d7a4: stp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 10d7a8: stp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 10d7ac: stp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 10d7b0: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 10d7b4: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 10d7b8: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* 10d7bc: adrp x27, #0x151000 */
  ARC_X_W(c, 27, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 10d7c0: mov x26, x6 */
  ARC_X_W(c, 26, ARC_X_R(c, 6));
  /* 10d7c4: mov x20, x5 */
  ARC_X_W(c, 20, ARC_X_R(c, 5));
  /* 10d7c8: ldr x27, [x27, #0xb40] */
  ARC_X_W(c, 27, arc_ld64((ARC_X_R(c, 27) + INT64_C(2880))));
  /* 10d7cc: ldr x23, [x6] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 6)));
  /* 10d7d0: mov x22, x4 */
  ARC_X_W(c, 22, ARC_X_R(c, 4));
  /* 10d7d4: mov x24, x3 */
  ARC_X_W(c, 24, ARC_X_R(c, 3));
  /* 10d7d8: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 10d7dc: mov x28, x1 */
  ARC_X_W(c, 28, ARC_X_R(c, 1));
  /* 10d7e0: ldar x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 10d7e4: str x0, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 0));
  /* 10d7e8: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 10d7ec: b.eq #0x10d8a8 */
  if (ARC_COND(c, 0)) goto L_10d8a8;
  /* 10d7f0: nop  */
  /* nop: no architectural effect here */
  /* 10d7f4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10d7f8: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1103868));
  fn1_142518(c);
  /* 10d7fc: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 10d800: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 10d804: b.ne #0x10d830 */
  if (ARC_COND(c, 1)) goto L_10d830;
  /* 10d808: nop  */
  /* nop: no architectural effect here */
  /* 10d80c: adr x19, #0x15791c */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 10d810: nop  */
  /* nop: no architectural effect here */
  /* 10d814: adr x25, #0x1578f4 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1407220)));
L_10d818:;
  /* 10d818: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10d81c: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 10d820: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1103908));
  fn1_142530(c);
  /* 10d824: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 10d828: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 10d82c: b.eq #0x10d818 */
  if (ARC_COND(c, 0)) goto L_10d818;
L_10d830:;
  /* 10d830: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 10d834: cbz x8, #0x10d848 */
  if ((ARC_X_R(c, 8)) == 0) goto L_10d848;
  /* 10d838: nop  */
  /* nop: no architectural effect here */
  /* 10d83c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10d840: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1103940));
  fn1_142560(c);
  /* 10d844: b #0x10d8a8 */
  goto L_10d8a8;
L_10d848:;
  /* 10d848: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 10d84c: stur x27, [x29, #-0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-24)), ARC_X_R(c, 27));
  /* 10d850: sturb wzr, [x29, #-0x10] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-16)), ARC_W_R(c, 31));
  /* 10d854: str x8, [x27] */
  arc_st64(ARC_X_R(c, 27), ARC_X_R(c, 8));
  /* 10d858: nop  */
  /* nop: no architectural effect here */
  /* 10d85c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10d860: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1103972));
  fn1_142560(c);
  /* 10d864: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 10d868: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 10d86c: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 10d870: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1103988));
  fn1_a2030(c);
  /* 10d874: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 10d878: str w8, [x27, #8] */
  arc_st32((ARC_X_R(c, 27) + INT64_C(8)), ARC_W_R(c, 8));
  /* 10d87c: nop  */
  /* nop: no architectural effect here */
  /* 10d880: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10d884: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1104008));
  fn1_142518(c);
  /* 10d888: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 10d88c: stlr x8, [x27] */
  arc_st64(ARC_X_R(c, 27), ARC_X_R(c, 8));
  /* 10d890: nop  */
  /* nop: no architectural effect here */
  /* 10d894: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10d898: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1104028));
  fn1_142560(c);
  /* 10d89c: nop  */
  /* nop: no architectural effect here */
  /* 10d8a0: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 10d8a4: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1104040));
  fn1_142578(c);
L_10d8a8:;
  /* 10d8a8: ldp x8, x10, [x23, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 10d8ac: ldrsw x9, [x27, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 27) + INT64_C(8)))));
  /* 10d8b0: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 10d8b4: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 10d8b8: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 10d8bc: b.hs #0x10dfa4 */
  if (ARC_COND(c, 2)) goto L_10dfa4;
  /* 10d8c0: ldr x25, [x8, x9, lsl #3] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 10d8c4: cbz x25, #0x10dfa4 */
  if ((ARC_X_R(c, 25)) == 0) goto L_10dfa4;
  /* 10d8c8: adrp x27, #0x151000 */
  ARC_X_W(c, 27, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 10d8cc: ldr x27, [x27, #0xcb0] */
  ARC_X_W(c, 27, arc_ld64((ARC_X_R(c, 27) + INT64_C(3248))));
  /* 10d8d0: ldr x23, [x26] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 26)));
  /* 10d8d4: ldar x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 10d8d8: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 10d8dc: b.eq #0x10d998 */
  if (ARC_COND(c, 0)) goto L_10d998;
  /* 10d8e0: nop  */
  /* nop: no architectural effect here */
  /* 10d8e4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10d8e8: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1104108));
  fn1_142518(c);
  /* 10d8ec: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 10d8f0: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 10d8f4: b.ne #0x10d920 */
  if (ARC_COND(c, 1)) goto L_10d920;
  /* 10d8f8: nop  */
  /* nop: no architectural effect here */
  /* 10d8fc: adr x19, #0x15791c */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 10d900: nop  */
  /* nop: no architectural effect here */
  /* 10d904: adr x26, #0x1578f4 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1407220)));
L_10d908:;
  /* 10d908: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10d90c: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 10d910: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1104148));
  fn1_142530(c);
  /* 10d914: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 10d918: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 10d91c: b.eq #0x10d908 */
  if (ARC_COND(c, 0)) goto L_10d908;
L_10d920:;
  /* 10d920: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 10d924: cbz x8, #0x10d938 */
  if ((ARC_X_R(c, 8)) == 0) goto L_10d938;
  /* 10d928: nop  */
  /* nop: no architectural effect here */
  /* 10d92c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10d930: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1104180));
  fn1_142560(c);
  /* 10d934: b #0x10d998 */
  goto L_10d998;
L_10d938:;
  /* 10d938: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 10d93c: stur x27, [x29, #-0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-24)), ARC_X_R(c, 27));
  /* 10d940: sturb wzr, [x29, #-0x10] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-16)), ARC_W_R(c, 31));
  /* 10d944: str x8, [x27] */
  arc_st64(ARC_X_R(c, 27), ARC_X_R(c, 8));
  /* 10d948: nop  */
  /* nop: no architectural effect here */
  /* 10d94c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10d950: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1104212));
  fn1_142560(c);
  /* 10d954: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 10d958: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 10d95c: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 10d960: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1104228));
  fn1_a2030(c);
  /* 10d964: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 10d968: str w8, [x27, #8] */
  arc_st32((ARC_X_R(c, 27) + INT64_C(8)), ARC_W_R(c, 8));
  /* 10d96c: nop  */
  /* nop: no architectural effect here */
  /* 10d970: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10d974: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1104248));
  fn1_142518(c);
  /* 10d978: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 10d97c: stlr x8, [x27] */
  arc_st64(ARC_X_R(c, 27), ARC_X_R(c, 8));
  /* 10d980: nop  */
  /* nop: no architectural effect here */
  /* 10d984: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10d988: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1104268));
  fn1_142560(c);
  /* 10d98c: nop  */
  /* nop: no architectural effect here */
  /* 10d990: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 10d994: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1104280));
  fn1_142578(c);
L_10d998:;
  /* 10d998: ldp x8, x10, [x23, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 10d99c: ldrsw x9, [x27, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 27) + INT64_C(8)))));
  /* 10d9a0: str x28, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 28));
  /* 10d9a4: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 10d9a8: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 10d9ac: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 10d9b0: b.hs #0x10dfa4 */
  if (ARC_COND(c, 2)) goto L_10dfa4;
  /* 10d9b4: ldr x23, [x8, x9, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 10d9b8: cbz x23, #0x10dfa4 */
  if ((ARC_X_R(c, 23)) == 0) goto L_10dfa4;
  /* 10d9bc: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 10d9c0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 10d9c4: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* 10d9c8: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 10d9cc: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1104336));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 10d9d0: ldr x19, [sp, #0x20] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(32))));
  /* 10d9d4: str x24, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 24));
  /* 10d9d8: ldrb w1, [x19] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 19)));
  /* 10d9dc: cmp w1, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(45));
  /* 10d9e0: b.eq #0x10d9f0 */
  if (ARC_COND(c, 0)) goto L_10d9f0;
  /* 10d9e4: cmp w1, #0x2b */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(43));
  /* 10d9e8: mov x28, x19 */
  ARC_X_W(c, 28, ARC_X_R(c, 19));
  /* 10d9ec: b.ne #0x10da14 */
  if (ARC_COND(c, 1)) goto L_10da14;
L_10d9f0:;
  /* 10d9f0: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 10d9f4: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* 10d9f8: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 10d9fc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1104384));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10da00: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 10da04: add x28, x19, #1 */
  ARC_X_W(c, 28, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* 10da08: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 10da0c: str x9, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 9));
  /* 10da10: strb w0, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 0));
L_10da14:;
  /* 10da14: stp x23, x22, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* 10da18: sub x22, x21, x28 */
  ARC_X_W(c, 22, (ARC_X_R(c, 21) - ARC_X_R(c, 28)));
  /* 10da1c: cmp x22, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 22), UINT64_C(2));
  /* 10da20: b.lt #0x10db18 */
  if (ARC_COND(c, 11)) goto L_10db18;
  /* 10da24: ldrb w8, [x28] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 28)));
  /* 10da28: cmp w8, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(48));
  /* 10da2c: b.ne #0x10db18 */
  if (ARC_COND(c, 1)) goto L_10db18;
  /* 10da30: ldrb w8, [x28, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 28) + INT64_C(1))));
  /* 10da34: orr w8, w8, #0x20 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(32)));
  /* 10da38: cmp w8, #0x78 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(120));
  /* 10da3c: b.ne #0x10db18 */
  if (ARC_COND(c, 1)) goto L_10db18;
  /* 10da40: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 10da44: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* 10da48: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 10da4c: mov w1, #0x30 */
  ARC_W_W(c, 1, UINT64_C(48));
  /* 10da50: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1104468));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10da54: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 10da58: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 10da5c: str x9, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 9));
  /* 10da60: strb w0, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 0));
  /* 10da64: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 10da68: ldrb w1, [x28, #1] */
  ARC_W_W(c, 1, arc_ld8((ARC_X_R(c, 28) + INT64_C(1))));
  /* 10da6c: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* 10da70: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 10da74: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1104504));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10da78: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 10da7c: add x26, x28, #2 */
  ARC_X_W(c, 26, (ARC_X_R(c, 28) + UINT64_C(2)));
  /* 10da80: cmp x26, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 21));
  /* 10da84: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 10da88: str x9, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 9));
  /* 10da8c: strb w0, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 0));
  /* 10da90: b.hs #0x10ddbc */
  if (ARC_COND(c, 2)) goto L_10ddbc;
  /* 10da94: mov x23, x24 */
  ARC_X_W(c, 23, ARC_X_R(c, 24));
  /* 10da98: nop  */
  /* nop: no architectural effect here */
  /* 10da9c: adr x19, #0x15dc38 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10daa0: add x22, x28, x22 */
  ARC_X_W(c, 22, (ARC_X_R(c, 28) + ARC_X_R(c, 22)));
  /* 10daa4: adrp x28, #0x15d000 */
  ARC_X_W(c, 28, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 10daa8: mov x27, x26 */
  ARC_X_W(c, 27, ARC_X_R(c, 26));
  /* 10daac: b #0x10dabc */
  goto L_10dabc;
L_10dab0:;
  /* 10dab0: add x27, x27, #1 */
  ARC_X_W(c, 27, (ARC_X_R(c, 27) + UINT64_C(1)));
  /* 10dab4: cmp x27, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 27), ARC_X_R(c, 21));
  /* 10dab8: b.eq #0x10ddc4 */
  if (ARC_COND(c, 0)) goto L_10ddc4;
L_10dabc:;
  /* 10dabc: ldrb w24, [x27] */
  ARC_W_W(c, 24, arc_ld8(ARC_X_R(c, 27)));
  /* 10dac0: ldarb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 10dac4: tbz w8, #0, #0x10dae8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10dae8;
L_10dac8:;
  /* 10dac8: sub w8, w24, #0x3a */
  ARC_W_W(c, 8, (ARC_W_R(c, 24) - UINT64_C(58)));
  /* 10dacc: cmn w8, #0xb */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(11), 0);
  /* 10dad0: b.hi #0x10dab0 */
  if (ARC_COND(c, 8)) goto L_10dab0;
  /* 10dad4: orr w8, w24, #0x20 */
  ARC_W_W(c, 8, (ARC_W_R(c, 24) | UINT64_C(32)));
  /* 10dad8: sub w8, w8, #0x67 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(103)));
  /* 10dadc: cmn w8, #6 */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(6), 0);
  /* 10dae0: b.hs #0x10dab0 */
  if (ARC_COND(c, 2)) goto L_10dab0;
  /* 10dae4: b #0x10ddc8 */
  goto L_10ddc8;
L_10dae8:;
  /* 10dae8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10daec: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1104624));
  fn1_1424b8(c);
  /* 10daf0: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 10daf4: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 10daf8: cbz w0, #0x10dac8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_10dac8;
  /* 10dafc: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 10db00: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 10db04: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1104648));
  fn1_1441e0(c);
  /* 10db08: str x0, [x28, #0xc30] */
  arc_st64((ARC_X_R(c, 28) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 10db0c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10db10: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1104660));
  fn1_1424d0(c);
  /* 10db14: b #0x10dac8 */
  goto L_10dac8;
L_10db18:;
  /* 10db18: cmp x28, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 28), ARC_X_R(c, 21));
  /* 10db1c: b.hs #0x10db8c */
  if (ARC_COND(c, 2)) goto L_10db8c;
  /* 10db20: nop  */
  /* nop: no architectural effect here */
  /* 10db24: adr x19, #0x15dc38 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10db28: add x22, x28, x22 */
  ARC_X_W(c, 22, (ARC_X_R(c, 28) + ARC_X_R(c, 22)));
  /* 10db2c: mov x27, x28 */
  ARC_X_W(c, 27, ARC_X_R(c, 28));
L_10db30:;
  /* 10db30: ldrb w26, [x27] */
  ARC_W_W(c, 26, arc_ld8(ARC_X_R(c, 27)));
  /* 10db34: ldarb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 10db38: tbz w8, #0, #0x10db58 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10db58;
L_10db3c:;
  /* 10db3c: sub w8, w26, #0x3a */
  ARC_W_W(c, 8, (ARC_W_R(c, 26) - UINT64_C(58)));
  /* 10db40: cmn w8, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(10), 0);
  /* 10db44: b.lo #0x10db98 */
  if (ARC_COND(c, 3)) goto L_10db98;
  /* 10db48: add x27, x27, #1 */
  ARC_X_W(c, 27, (ARC_X_R(c, 27) + UINT64_C(1)));
  /* 10db4c: cmp x27, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 27), ARC_X_R(c, 21));
  /* 10db50: b.ne #0x10db30 */
  if (ARC_COND(c, 1)) goto L_10db30;
  /* 10db54: b #0x10db94 */
  goto L_10db94;
L_10db58:;
  /* 10db58: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10db5c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1104736));
  fn1_1424b8(c);
  /* 10db60: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 10db64: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 10db68: cbz w0, #0x10db3c */
  if ((ARC_W_R(c, 0)) == 0) goto L_10db3c;
  /* 10db6c: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 10db70: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 10db74: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1104760));
  fn1_1441e0(c);
  /* 10db78: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 10db7c: str x0, [x8, #0xc30] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 10db80: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10db84: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1104776));
  fn1_1424d0(c);
  /* 10db88: b #0x10db3c */
  goto L_10db3c;
L_10db8c:;
  /* 10db8c: mov x27, x28 */
  ARC_X_W(c, 27, ARC_X_R(c, 28));
  /* 10db90: b #0x10db9c */
  goto L_10db9c;
L_10db94:;
  /* 10db94: mov x27, x22 */
  ARC_X_W(c, 27, ARC_X_R(c, 22));
L_10db98:;
  /* 10db98: ldr x19, [sp, #0x20] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(32))));
L_10db9c:;
  /* 10db9c: mov x26, x28 */
  ARC_X_W(c, 26, ARC_X_R(c, 28));
L_10dba0:;
  /* 10dba0: ldurb w8, [x29, #-0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 10dba4: ldur x9, [x29, #-0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 10dba8: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 10dbac: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 10dbb0: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 10dbb4: cbz x8, #0x10dd8c */
  if ((ARC_X_R(c, 8)) == 0) goto L_10dd8c;
  /* 10dbb8: cmp x26, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 27));
  /* 10dbbc: str x24, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 24));
  /* 10dbc0: b.eq #0x10dbf0 */
  if (ARC_COND(c, 0)) goto L_10dbf0;
  /* 10dbc4: sub x8, x27, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 27) - UINT64_C(1)));
  /* 10dbc8: cmp x26, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 8));
  /* 10dbcc: b.hs #0x10dbf0 */
  if (ARC_COND(c, 2)) goto L_10dbf0;
  /* 10dbd0: add x9, x26, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 26) + UINT64_C(1)));
L_10dbd4:;
  /* 10dbd4: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* 10dbd8: ldurb w11, [x9, #-1] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 9) + INT64_C(-1))));
  /* 10dbdc: sturb w10, [x9, #-1] */
  arc_st8((ARC_X_R(c, 9) + INT64_C(-1)), ARC_W_R(c, 10));
  /* 10dbe0: strb w11, [x8], #0xffffffffffffffff */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-1));
    arc_st8(_a, ARC_W_R(c, 11));
  }
  /* 10dbe4: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 10dbe8: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 10dbec: b.lo #0x10dbd4 */
  if (ARC_COND(c, 3)) goto L_10dbd4;
L_10dbf0:;
  /* 10dbf0: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 10dbf4: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 10dbf8: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 10dbfc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1104896));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10dc00: cmp x26, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 27));
  /* 10dc04: b.hs #0x10dcbc */
  if (ARC_COND(c, 2)) goto L_10dcbc;
  /* 10dc08: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 10dc0c: mov w19, w0 */
  ARC_W_W(c, 19, ARC_W_R(c, 0));
  /* 10dc10: mov w28, wzr */
  ARC_W_W(c, 28, ARC_W_R(c, 31));
  /* 10dc14: mov w22, wzr */
  ARC_W_W(c, 22, ARC_W_R(c, 31));
  /* 10dc18: orr x24, x8, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) | UINT64_C(1)));
  /* 10dc1c: mov x23, x26 */
  ARC_X_W(c, 23, ARC_X_R(c, 26));
L_10dc20:;
  /* 10dc20: ldurb w8, [x29, #-0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 10dc24: ldur x9, [x29, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 10dc28: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 10dc2c: mov w8, w28 */
  ARC_W_W(c, 8, ARC_W_R(c, 28));
  /* 10dc30: csel x10, x24, x9, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 24)) : ARC_X_R(c, 9)));
  /* 10dc34: ldrb w10, [x10, x8] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 10) + ARC_X_R(c, 8))));
  /* 10dc38: cbz w10, #0x10dc88 */
  if ((ARC_W_R(c, 10)) == 0) goto L_10dc88;
  /* 10dc3c: ldurb w10, [x29, #-0x18] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 10dc40: tst w10, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1)));
  /* 10dc44: csel x9, x24, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 24)) : ARC_X_R(c, 9)));
  /* 10dc48: ldrb w9, [x9, x8] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 9) + ARC_X_R(c, 8))));
  /* 10dc4c: cmp w22, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 22), ARC_W_R(c, 9));
  /* 10dc50: b.ne #0x10dc88 */
  if (ARC_COND(c, 1)) goto L_10dc88;
  /* 10dc54: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* 10dc58: mov w22, wzr */
  ARC_W_W(c, 22, ARC_W_R(c, 31));
  /* 10dc5c: add x10, x9, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 10dc60: str x10, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 10));
  /* 10dc64: strb w19, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 19));
  /* 10dc68: ldurb w9, [x29, #-0x18] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 10dc6c: ldur x10, [x29, #-0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 10dc70: lsr x11, x9, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 10dc74: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 10dc78: csel x9, x11, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 10dc7c: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 10dc80: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 10dc84: cinc w28, w28, hi */
  ARC_W_W(c, 28, (ARC_COND(c, 8) ? (ARC_W_R(c, 28)) + 1 : (ARC_W_R(c, 28))));
L_10dc88:;
  /* 10dc88: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 10dc8c: ldrb w1, [x23] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 23)));
  /* 10dc90: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* 10dc94: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 10dc98: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1105052));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10dc9c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 10dca0: add x23, x23, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* 10dca4: add w22, w22, #1 */
  ARC_W_W(c, 22, (ARC_W_R(c, 22) + UINT64_C(1)));
  /* 10dca8: cmp x23, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 27));
  /* 10dcac: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 10dcb0: str x9, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 9));
  /* 10dcb4: strb w0, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 0));
  /* 10dcb8: b.ne #0x10dc20 */
  if (ARC_COND(c, 1)) goto L_10dc20;
L_10dcbc:;
  /* 10dcbc: ldr x19, [sp, #0x20] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(32))));
  /* 10dcc0: ldr x24, [sp] */
  ARC_X_W(c, 24, arc_ld64((c)->sp));
  /* 10dcc4: ldr x11, [x20] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 20)));
  /* 10dcc8: sub x13, x26, x19 */
  ARC_X_W(c, 13, (ARC_X_R(c, 26) - ARC_X_R(c, 19)));
  /* 10dccc: add x9, x24, x13 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + ARC_X_R(c, 13)));
  /* 10dcd0: cmp x9, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 11));
  /* 10dcd4: b.eq #0x10deb4 */
  if (ARC_COND(c, 0)) goto L_10deb4;
  /* 10dcd8: sub x8, x11, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* 10dcdc: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 10dce0: b.hs #0x10deb4 */
  if (ARC_COND(c, 2)) goto L_10deb4;
  /* 10dce4: add x10, x26, x24 */
  ARC_X_W(c, 10, (ARC_X_R(c, 26) + ARC_X_R(c, 24)));
  /* 10dce8: sub x15, x11, #2 */
  ARC_X_W(c, 15, (ARC_X_R(c, 11) - UINT64_C(2)));
  /* 10dcec: sub x12, x10, x19 */
  ARC_X_W(c, 12, (ARC_X_R(c, 10) - ARC_X_R(c, 19)));
  /* 10dcf0: mvn x10, x26 */
  ARC_X_W(c, 10, (~(uint64_t)(ARC_X_R(c, 26))));
  /* 10dcf4: add x14, x12, #1 */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) + UINT64_C(1)));
  /* 10dcf8: add x16, x19, x10 */
  ARC_X_W(c, 16, (ARC_X_R(c, 19) + ARC_X_R(c, 10)));
  /* 10dcfc: cmp x14, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 15));
  /* 10dd00: csinc x17, x15, x12, ls */
  ARC_X_W(c, 17, (ARC_COND(c, 9) ? (ARC_X_R(c, 15)) : ((ARC_X_R(c, 12)) + 1)));
  /* 10dd04: add x10, x17, x16 */
  ARC_X_W(c, 10, (ARC_X_R(c, 17) + ARC_X_R(c, 16)));
  /* 10dd08: cmp x10, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 24));
  /* 10dd0c: cinc x17, x24, ne */
  ARC_X_W(c, 17, (ARC_COND(c, 1) ? (ARC_X_R(c, 24)) + 1 : (ARC_X_R(c, 24))));
  /* 10dd10: cmp x10, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 24));
  /* 10dd14: sub x17, x10, x17 */
  ARC_X_W(c, 17, (ARC_X_R(c, 10) - ARC_X_R(c, 17)));
  /* 10dd18: lsr x17, x17, #1 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 17)) >> ((UINT64_C(1)) & 63)));
  /* 10dd1c: cinc x10, x17, ne */
  ARC_X_W(c, 10, (ARC_COND(c, 1) ? (ARC_X_R(c, 17)) + 1 : (ARC_X_R(c, 17))));
  /* 10dd20: add x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* 10dd24: cmp x10, #8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(8));
  /* 10dd28: b.lo #0x10de94 */
  if (ARC_COND(c, 3)) goto L_10de94;
  /* 10dd2c: cmp x14, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 15));
  /* 10dd30: csinc x12, x15, x12, ls */
  ARC_X_W(c, 12, (ARC_COND(c, 9) ? (ARC_X_R(c, 15)) : ((ARC_X_R(c, 12)) + 1)));
  /* 10dd34: add x12, x12, x16 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + ARC_X_R(c, 16)));
  /* 10dd38: cmp x12, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 24));
  /* 10dd3c: cinc x14, x24, ne */
  ARC_X_W(c, 14, (ARC_COND(c, 1) ? (ARC_X_R(c, 24)) + 1 : (ARC_X_R(c, 24))));
  /* 10dd40: cmp x12, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 24));
  /* 10dd44: sub x12, x12, x14 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - ARC_X_R(c, 14)));
  /* 10dd48: cinc x15, x26, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 26)) + 1 : (ARC_X_R(c, 26))));
  /* 10dd4c: lsr x14, x12, #1 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 12)) >> ((UINT64_C(1)) & 63)));
  /* 10dd50: cinc x12, x14, ne */
  ARC_X_W(c, 12, (ARC_COND(c, 1) ? (ARC_X_R(c, 14)) + 1 : (ARC_X_R(c, 14))));
  /* 10dd54: cmp x9, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 11));
  /* 10dd58: b.hs #0x10dd7c */
  if (ARC_COND(c, 2)) goto L_10dd7c;
  /* 10dd5c: add x14, x15, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) + ARC_X_R(c, 14)));
  /* 10dd60: mvn x12, x12 */
  ARC_X_W(c, 12, (~(uint64_t)(ARC_X_R(c, 12))));
  /* 10dd64: sub x14, x14, x19 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - ARC_X_R(c, 19)));
  /* 10dd68: add x12, x11, x12 */
  ARC_X_W(c, 12, (ARC_X_R(c, 11) + ARC_X_R(c, 12)));
  /* 10dd6c: add x14, x14, x24 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + ARC_X_R(c, 24)));
  /* 10dd70: add x14, x14, #1 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(1)));
  /* 10dd74: cmp x12, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 14));
  /* 10dd78: b.lo #0x10de94 */
  if (ARC_COND(c, 3)) goto L_10de94;
L_10dd7c:;
  /* 10dd7c: cmp x10, #0x20 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(32));
  /* 10dd80: b.hs #0x10ddd8 */
  if (ARC_COND(c, 2)) goto L_10ddd8;
  /* 10dd84: mov x12, xzr */
  ARC_X_W(c, 12, ARC_X_R(c, 31));
  /* 10dd88: b #0x10de3c */
  goto L_10de3c;
L_10dd8c:;
  /* 10dd8c: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 10dd90: ldr x3, [x20] */
  ARC_X_W(c, 3, arc_ld64(ARC_X_R(c, 20)));
  /* 10dd94: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 10dd98: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 10dd9c: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 10dda0: mov x2, x27 */
  ARC_X_W(c, 2, ARC_X_R(c, 27));
  /* 10dda4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1105320));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10dda8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 10ddac: sub x9, x27, x26 */
  ARC_X_W(c, 9, (ARC_X_R(c, 27) - ARC_X_R(c, 26)));
  /* 10ddb0: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* 10ddb4: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 10ddb8: b #0x10deb4 */
  goto L_10deb4;
L_10ddbc:;
  /* 10ddbc: mov x27, x26 */
  ARC_X_W(c, 27, ARC_X_R(c, 26));
  /* 10ddc0: b #0x10dba0 */
  goto L_10dba0;
L_10ddc4:;
  /* 10ddc4: mov x27, x22 */
  ARC_X_W(c, 27, ARC_X_R(c, 22));
L_10ddc8:;
  /* 10ddc8: mov x24, x23 */
  ARC_X_W(c, 24, ARC_X_R(c, 23));
  /* 10ddcc: ldr x19, [sp, #0x20] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(32))));
  /* 10ddd0: ldr x23, [sp, #8] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(8))));
  /* 10ddd4: b #0x10dba0 */
  goto L_10dba0;
L_10ddd8:;
  /* 10ddd8: and x12, x10, #0xffffffffffffffe0 */
  ARC_X_W(c, 12, (ARC_X_R(c, 10) & UINT64_C(18446744073709551584)));
  /* 10dddc: add x14, x13, x24 */
  ARC_X_W(c, 14, (ARC_X_R(c, 13) + ARC_X_R(c, 24)));
  /* 10dde0: sub x13, x11, #0x10 */
  ARC_X_W(c, 13, (ARC_X_R(c, 11) - UINT64_C(16)));
  /* 10dde4: add x14, x14, #0x10 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(16)));
  /* 10dde8: mov x15, x12 */
  ARC_X_W(c, 15, ARC_X_R(c, 12));
L_10ddec:;
  /* 10ddec: ldp q1, q0, [x13, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 13) + INT64_C(-16));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 10ddf0: subs x15, x15, #0x20 */
  ARC_X_W(c, 15, arc_sub64(c, ARC_X_R(c, 15), UINT64_C(32)));
  /* 10ddf4: ldp q2, q3, [x14, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 14) + INT64_C(-16));
    arc_q_w(c, 2, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 3, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 10ddf8: rev64 v0.16b, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[7];
    _t.u8[1] = (c)->q[0].u8[6];
    _t.u8[2] = (c)->q[0].u8[5];
    _t.u8[3] = (c)->q[0].u8[4];
    _t.u8[4] = (c)->q[0].u8[3];
    _t.u8[5] = (c)->q[0].u8[2];
    _t.u8[6] = (c)->q[0].u8[1];
    _t.u8[7] = (c)->q[0].u8[0];
    _t.u8[8] = (c)->q[0].u8[15];
    _t.u8[9] = (c)->q[0].u8[14];
    _t.u8[10] = (c)->q[0].u8[13];
    _t.u8[11] = (c)->q[0].u8[12];
    _t.u8[12] = (c)->q[0].u8[11];
    _t.u8[13] = (c)->q[0].u8[10];
    _t.u8[14] = (c)->q[0].u8[9];
    _t.u8[15] = (c)->q[0].u8[8];
    (c)->q[0] = _t; }
  /* 10ddfc: rev64 v1.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[7];
    _t.u8[1] = (c)->q[1].u8[6];
    _t.u8[2] = (c)->q[1].u8[5];
    _t.u8[3] = (c)->q[1].u8[4];
    _t.u8[4] = (c)->q[1].u8[3];
    _t.u8[5] = (c)->q[1].u8[2];
    _t.u8[6] = (c)->q[1].u8[1];
    _t.u8[7] = (c)->q[1].u8[0];
    _t.u8[8] = (c)->q[1].u8[15];
    _t.u8[9] = (c)->q[1].u8[14];
    _t.u8[10] = (c)->q[1].u8[13];
    _t.u8[11] = (c)->q[1].u8[12];
    _t.u8[12] = (c)->q[1].u8[11];
    _t.u8[13] = (c)->q[1].u8[10];
    _t.u8[14] = (c)->q[1].u8[9];
    _t.u8[15] = (c)->q[1].u8[8];
    (c)->q[1] = _t; }
  /* 10de00: rev64 v2.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[7];
    _t.u8[1] = (c)->q[2].u8[6];
    _t.u8[2] = (c)->q[2].u8[5];
    _t.u8[3] = (c)->q[2].u8[4];
    _t.u8[4] = (c)->q[2].u8[3];
    _t.u8[5] = (c)->q[2].u8[2];
    _t.u8[6] = (c)->q[2].u8[1];
    _t.u8[7] = (c)->q[2].u8[0];
    _t.u8[8] = (c)->q[2].u8[15];
    _t.u8[9] = (c)->q[2].u8[14];
    _t.u8[10] = (c)->q[2].u8[13];
    _t.u8[11] = (c)->q[2].u8[12];
    _t.u8[12] = (c)->q[2].u8[11];
    _t.u8[13] = (c)->q[2].u8[10];
    _t.u8[14] = (c)->q[2].u8[9];
    _t.u8[15] = (c)->q[2].u8[8];
    (c)->q[2] = _t; }
  /* 10de04: rev64 v3.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[3].u8[7];
    _t.u8[1] = (c)->q[3].u8[6];
    _t.u8[2] = (c)->q[3].u8[5];
    _t.u8[3] = (c)->q[3].u8[4];
    _t.u8[4] = (c)->q[3].u8[3];
    _t.u8[5] = (c)->q[3].u8[2];
    _t.u8[6] = (c)->q[3].u8[1];
    _t.u8[7] = (c)->q[3].u8[0];
    _t.u8[8] = (c)->q[3].u8[15];
    _t.u8[9] = (c)->q[3].u8[14];
    _t.u8[10] = (c)->q[3].u8[13];
    _t.u8[11] = (c)->q[3].u8[12];
    _t.u8[12] = (c)->q[3].u8[11];
    _t.u8[13] = (c)->q[3].u8[10];
    _t.u8[14] = (c)->q[3].u8[9];
    _t.u8[15] = (c)->q[3].u8[8];
    (c)->q[3] = _t; }
  /* 10de08: ext v0.16b, v0.16b, v0.16b, #8 */
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
  /* 10de0c: ext v1.16b, v1.16b, v1.16b, #8 */
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
  /* 10de10: ext v2.16b, v2.16b, v2.16b, #8 */
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
  /* 10de14: ext v3.16b, v3.16b, v3.16b, #8 */
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
  /* 10de18: stp q0, q1, [x14, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 14) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 10de1c: add x14, x14, #0x20 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(32)));
  /* 10de20: stp q3, q2, [x13, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 13) + INT64_C(-16));
    arc_st64(_pa, (c)->q[3].u64[0]);
    arc_st64(_pa + 8, (c)->q[3].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* 10de24: sub x13, x13, #0x20 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(32)));
  /* 10de28: b.ne #0x10ddec */
  if (ARC_COND(c, 1)) goto L_10ddec;
  /* 10de2c: cmp x10, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 12));
  /* 10de30: b.eq #0x10deb4 */
  if (ARC_COND(c, 0)) goto L_10deb4;
  /* 10de34: tst x10, #0x18 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 10) & UINT64_C(24)));
  /* 10de38: b.eq #0x10de8c */
  if (ARC_COND(c, 0)) goto L_10de8c;
L_10de3c:;
  /* 10de3c: add x14, x12, x26 */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) + ARC_X_R(c, 26)));
  /* 10de40: and x13, x10, #0xfffffffffffffff8 */
  ARC_X_W(c, 13, (ARC_X_R(c, 10) & UINT64_C(18446744073709551608)));
  /* 10de44: sub x15, x11, x12 */
  ARC_X_W(c, 15, (ARC_X_R(c, 11) - ARC_X_R(c, 12)));
  /* 10de48: sub x14, x14, x19 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - ARC_X_R(c, 19)));
  /* 10de4c: sub x8, x8, x13 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 13)));
  /* 10de50: add x9, x9, x13 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 13)));
  /* 10de54: add x11, x24, x14 */
  ARC_X_W(c, 11, (ARC_X_R(c, 24) + ARC_X_R(c, 14)));
  /* 10de58: sub x12, x12, x13 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - ARC_X_R(c, 13)));
  /* 10de5c: sub x14, x15, #8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) - UINT64_C(8)));
L_10de60:;
  /* 10de60: ldr d0, [x14] */
  arc_du_w(c, 0, arc_ld64(ARC_X_R(c, 14)));
  /* 10de64: ldr d1, [x11] */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 11)));
  /* 10de68: adds x12, x12, #8 */
  ARC_X_W(c, 12, arc_add64(c, ARC_X_R(c, 12), UINT64_C(8), 0));
  /* 10de6c: rev64 v0.8b, v0.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[7];
    _t.u8[1] = (c)->q[0].u8[6];
    _t.u8[2] = (c)->q[0].u8[5];
    _t.u8[3] = (c)->q[0].u8[4];
    _t.u8[4] = (c)->q[0].u8[3];
    _t.u8[5] = (c)->q[0].u8[2];
    _t.u8[6] = (c)->q[0].u8[1];
    _t.u8[7] = (c)->q[0].u8[0];
    (c)->q[0] = _t; }
  /* 10de70: rev64 v1.8b, v1.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[7];
    _t.u8[1] = (c)->q[1].u8[6];
    _t.u8[2] = (c)->q[1].u8[5];
    _t.u8[3] = (c)->q[1].u8[4];
    _t.u8[4] = (c)->q[1].u8[3];
    _t.u8[5] = (c)->q[1].u8[2];
    _t.u8[6] = (c)->q[1].u8[1];
    _t.u8[7] = (c)->q[1].u8[0];
    (c)->q[1] = _t; }
  /* 10de74: str d0, [x11], #8 */
  arc_st64(ARC_X_R(c, 11), (c)->q[0].u64[0]);
  ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(8));
  /* 10de78: str d1, [x14], #0xfffffffffffffff8 */
  arc_st64(ARC_X_R(c, 14), (c)->q[1].u64[0]);
  ARC_X_W(c, 14, ARC_X_R(c, 14) + INT64_C(-8));
  /* 10de7c: b.ne #0x10de60 */
  if (ARC_COND(c, 1)) goto L_10de60;
  /* 10de80: cmp x10, x13 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 13));
  /* 10de84: b.ne #0x10de94 */
  if (ARC_COND(c, 1)) goto L_10de94;
  /* 10de88: b #0x10deb4 */
  goto L_10deb4;
L_10de8c:;
  /* 10de8c: sub x8, x8, x12 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 12)));
  /* 10de90: add x9, x9, x12 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 12)));
L_10de94:;
  /* 10de94: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
L_10de98:;
  /* 10de98: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* 10de9c: ldurb w11, [x9, #-1] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 9) + INT64_C(-1))));
  /* 10dea0: sturb w10, [x9, #-1] */
  arc_st8((ARC_X_R(c, 9) + INT64_C(-1)), ARC_W_R(c, 10));
  /* 10dea4: strb w11, [x8], #0xffffffffffffffff */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-1));
    arc_st8(_a, ARC_W_R(c, 11));
  }
  /* 10dea8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 10deac: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 10deb0: b.lo #0x10de98 */
  if (ARC_COND(c, 3)) goto L_10de98;
L_10deb4:;
  /* 10deb4: cmp x27, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 27), ARC_X_R(c, 21));
  /* 10deb8: b.hs #0x10df20 */
  if (ARC_COND(c, 2)) goto L_10df20;
  /* 10debc: ldr x22, [sp, #8] */
  ARC_X_W(c, 22, arc_ld64(((c)->sp + INT64_C(8))));
L_10dec0:;
  /* 10dec0: ldrb w1, [x27] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 27)));
  /* 10dec4: cmp w1, #0x2e */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(46));
  /* 10dec8: b.eq #0x10defc */
  if (ARC_COND(c, 0)) goto L_10defc;
  /* 10decc: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 10ded0: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* 10ded4: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 10ded8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1105628));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10dedc: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 10dee0: add x27, x27, #1 */
  ARC_X_W(c, 27, (ARC_X_R(c, 27) + UINT64_C(1)));
  /* 10dee4: cmp x27, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 27), ARC_X_R(c, 21));
  /* 10dee8: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 10deec: str x9, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 9));
  /* 10def0: strb w0, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 0));
  /* 10def4: b.ne #0x10dec0 */
  if (ARC_COND(c, 1)) goto L_10dec0;
  /* 10def8: b #0x10df20 */
  goto L_10df20;
L_10defc:;
  /* 10defc: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 10df00: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 10df04: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 10df08: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1105676));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10df0c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 10df10: add x27, x27, #1 */
  ARC_X_W(c, 27, (ARC_X_R(c, 27) + UINT64_C(1)));
  /* 10df14: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 10df18: str x9, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 9));
  /* 10df1c: strb w0, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 0));
L_10df20:;
  /* 10df20: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 10df24: ldr x3, [x20] */
  ARC_X_W(c, 3, arc_ld64(ARC_X_R(c, 20)));
  /* 10df28: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 10df2c: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 10df30: mov x1, x27 */
  ARC_X_W(c, 1, ARC_X_R(c, 27));
  /* 10df34: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 10df38: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1105724));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10df3c: ldr x11, [sp, #0x18] */
  ARC_X_W(c, 11, arc_ld64(((c)->sp + INT64_C(24))));
  /* 10df40: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 10df44: sub x9, x21, x27 */
  ARC_X_W(c, 9, (ARC_X_R(c, 21) - ARC_X_R(c, 27)));
  /* 10df48: sub x10, x11, x19 */
  ARC_X_W(c, 10, (ARC_X_R(c, 11) - ARC_X_R(c, 19)));
  /* 10df4c: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* 10df50: cmp x11, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 21));
  /* 10df54: add x9, x24, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + ARC_X_R(c, 10)));
  /* 10df58: ldurb w10, [x29, #-0x18] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 10df5c: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 10df60: csel x8, x8, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* 10df64: ldr x9, [sp, #0x10] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(16))));
  /* 10df68: str x8, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 10df6c: tbz w10, #0, #0x10df80 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) == 0) goto L_10df80;
  /* 10df70: ldur x8, [x29, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 10df74: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 10df78: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 10df7c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1105792));
  fn1_142608(c);
L_10df80:;
  /* 10df80: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 10df84: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 10df88: ldp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 10df8c: ldp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 10df90: ldp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 10df94: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 10df98: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* 10df9c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 10dfa0: ret  */
  return;
L_10dfa4:;
  /* 10dfa4: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1105832));
  fn1_fc3b8(c);
  /* 10dfa8: b #0x10dfac */
  goto L_10dfac;
L_10dfac:;
  /* 10dfac: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10dfb0: nop  */
  /* nop: no architectural effect here */
  /* 10dfb4: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10dfb8: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1105852));
  fn1_1424e8(c);
  /* 10dfbc: b #0x10dfec */
  goto L_10dfec;
  /* 10dfc0: b #0x10dfe8 */
  goto L_10dfe8;
  /* 10dfc4: b #0x10dfe8 */
  goto L_10dfe8;
  /* 10dfc8: b #0x10dfcc */
  goto L_10dfcc;
L_10dfcc:;
  /* 10dfcc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10dfd0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 10dfd4: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1105880));
  fn1_d2a78(c);
  /* 10dfd8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10dfdc: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1105888));
  fn1_9cc20(c);
  /* 10dfe0: b #0x10dfe8 */
  goto L_10dfe8;
  /* 10dfe4: b #0x10dfe8 */
  goto L_10dfe8;
L_10dfe8:;
  /* 10dfe8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_10dfec:;
  /* 10dfec: ldurb w8, [x29, #-0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 10dff0: tbz w8, #0, #0x10e004 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10e004;
  /* 10dff4: ldur x8, [x29, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 10dff8: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 10dffc: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 10e000: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1105924));
  fn1_142608(c);
L_10e004:;
  /* 10e004: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10e008: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1105932));
  fn1_9cc20(c);
}

void fn1_113c10(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057424));
  /* 113c10: bti c */
  /* bti: no architectural effect here */
  /* 113c14: mov w0, #0x302 */
  ARC_W_W(c, 0, UINT64_C(770));
  /* 113c18: movk w0, #0x400, lsl #16 */
  ARC_W_W(c, 0, ((ARC_W_R(c, 0) & UINT64_C(18446744069414649855)) | UINT64_C(67108864)));
  /* 113c1c: ret  */
  return;
}

void fn1_1141bc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039058876));
  /* 1141bc: bti c */
  /* bti: no architectural effect here */
  /* 1141c0: ldr w0, [x0, #0x80] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(128))));
  /* 1141c4: ret  */
  return;
}

void fn1_1209a4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039110052));
  /* 1209a4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1209a8: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1209ac: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1209b0: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 1209b4: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1209b8: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1209bc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1209c0: adrp x23, #0x151000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1209c4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1209c8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1209cc: ldr x23, [x23, #0xbf8] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 23) + INT64_C(3064))));
  /* 1209d0: ldar x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 1209d4: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 1209d8: b.eq #0x120a94 */
  if (ARC_COND(c, 0)) goto L_120a94;
  /* 1209dc: nop  */
  /* nop: no architectural effect here */
  /* 1209e0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1209e4: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1182184));
  fn1_142518(c);
  /* 1209e8: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 1209ec: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1209f0: b.ne #0x120a1c */
  if (ARC_COND(c, 1)) goto L_120a1c;
  /* 1209f4: nop  */
  /* nop: no architectural effect here */
  /* 1209f8: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 1209fc: nop  */
  /* nop: no architectural effect here */
  /* 120a00: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_120a04:;
  /* 120a04: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 120a08: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 120a0c: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1182224));
  fn1_142530(c);
  /* 120a10: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 120a14: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 120a18: b.eq #0x120a04 */
  if (ARC_COND(c, 0)) goto L_120a04;
L_120a1c:;
  /* 120a1c: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 120a20: cbz x8, #0x120a34 */
  if ((ARC_X_R(c, 8)) == 0) goto L_120a34;
  /* 120a24: nop  */
  /* nop: no architectural effect here */
  /* 120a28: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 120a2c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1182256));
  fn1_142560(c);
  /* 120a30: b #0x120a94 */
  goto L_120a94;
L_120a34:;
  /* 120a34: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 120a38: str x23, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 23));
  /* 120a3c: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 120a40: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 120a44: nop  */
  /* nop: no architectural effect here */
  /* 120a48: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 120a4c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1182288));
  fn1_142560(c);
  /* 120a50: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 120a54: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 120a58: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 120a5c: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1182304));
  fn1_a2030(c);
  /* 120a60: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 120a64: str w8, [x23, #8] */
  arc_st32((ARC_X_R(c, 23) + INT64_C(8)), ARC_W_R(c, 8));
  /* 120a68: nop  */
  /* nop: no architectural effect here */
  /* 120a6c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 120a70: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1182324));
  fn1_142518(c);
  /* 120a74: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 120a78: stlr x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 120a7c: nop  */
  /* nop: no architectural effect here */
  /* 120a80: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 120a84: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1182344));
  fn1_142560(c);
  /* 120a88: nop  */
  /* nop: no architectural effect here */
  /* 120a8c: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 120a90: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1182356));
  fn1_142578(c);
L_120a94:;
  /* 120a94: ldrsw x8, [x23, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 23) + INT64_C(8)))));
  /* 120a98: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 120a9c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 120aa0: sub x22, x8, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 120aa4: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1182376));
  fn1_db2e0(c);
  /* 120aa8: mov x21, x20 */
  ARC_X_W(c, 21, ARC_X_R(c, 20));
  /* 120aac: ldp x8, x9, [x21, #0x10]! */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 120ab0: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 120ab4: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 120ab8: cmp x10, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 22));
  /* 120abc: b.hi #0x120ae8 */
  if (ARC_COND(c, 8)) goto L_120ae8;
  /* 120ac0: add x9, x22, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* 120ac4: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 120ac8: b.ls #0x120adc */
  if (ARC_COND(c, 9)) goto L_120adc;
  /* 120acc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 120ad0: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1182420));
  fn1_1352bc(c);
  /* 120ad4: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 120ad8: b #0x120ae8 */
  goto L_120ae8;
L_120adc:;
  /* 120adc: b.hs #0x120ae8 */
  if (ARC_COND(c, 2)) goto L_120ae8;
  /* 120ae0: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 120ae4: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_120ae8:;
  /* 120ae8: ldr x20, [x8, x22, lsl #3] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3))));
  /* 120aec: cbz x20, #0x120b10 */
  if ((ARC_X_R(c, 20)) == 0) goto L_120b10;
  /* 120af0: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 120af4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 120af8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1182460));
  fn1_bd950(c);
  /* 120afc: cbnz x0, #0x120b10 */
  if ((ARC_X_R(c, 0)) != 0) goto L_120b10;
  /* 120b00: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 120b04: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 120b08: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 120b0c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1182480));
  arc_dispatch(c, ARC_X_R(c, 8));
L_120b10:;
  /* 120b10: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 120b14: str x19, [x8, x22, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3)), ARC_X_R(c, 19));
  /* 120b18: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 120b1c: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 120b20: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 120b24: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 120b28: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 120b2c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 120b30: ret  */
  return;
  /* 120b34: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 120b38: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 120b3c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 120b40: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1182532));
  fn1_bd950(c);
  /* 120b44: cbnz x0, #0x120b6c */
  if ((ARC_X_R(c, 0)) != 0) goto L_120b6c;
  /* 120b48: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 120b4c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 120b50: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 120b54: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1182552));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 120b58: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 120b5c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1182560));
  fn1_9cc20(c);
  /* 120b60: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 120b64: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 120b68: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1182572));
  fn1_d2a78(c);
L_120b6c:;
  /* 120b6c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 120b70: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1182580));
  fn1_9cc20(c);
}

void fn1_126e18(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039135768));
  /* 126e18: bti c */
  /* bti: no architectural effect here */
  /* 126e1c: cmp x1, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 2));
  /* 126e20: b.eq #0x126e8c */
  if (ARC_COND(c, 0)) goto L_126e8c;
  /* 126e24: sub x9, x2, x1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 2) - ARC_X_R(c, 1)));
  /* 126e28: cmp x9, #0x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(32));
  /* 126e2c: b.lo #0x126e94 */
  if (ARC_COND(c, 3)) goto L_126e94;
  /* 126e30: sub x8, x4, x1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 4) - ARC_X_R(c, 1)));
  /* 126e34: cmp x8, #0x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(32));
  /* 126e38: b.lo #0x126e94 */
  if (ARC_COND(c, 3)) goto L_126e94;
  /* 126e3c: dup v0.16b, w3 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (ARC_W_R(c, 3));
    _t.u8[1] = (ARC_W_R(c, 3));
    _t.u8[2] = (ARC_W_R(c, 3));
    _t.u8[3] = (ARC_W_R(c, 3));
    _t.u8[4] = (ARC_W_R(c, 3));
    _t.u8[5] = (ARC_W_R(c, 3));
    _t.u8[6] = (ARC_W_R(c, 3));
    _t.u8[7] = (ARC_W_R(c, 3));
    _t.u8[8] = (ARC_W_R(c, 3));
    _t.u8[9] = (ARC_W_R(c, 3));
    _t.u8[10] = (ARC_W_R(c, 3));
    _t.u8[11] = (ARC_W_R(c, 3));
    _t.u8[12] = (ARC_W_R(c, 3));
    _t.u8[13] = (ARC_W_R(c, 3));
    _t.u8[14] = (ARC_W_R(c, 3));
    _t.u8[15] = (ARC_W_R(c, 3));
    (c)->q[0] = _t; }
  /* 126e40: and x10, x9, #0xffffffffffffffe0 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) & UINT64_C(18446744073709551584)));
  /* 126e44: add x11, x1, #0x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 1) + UINT64_C(16)));
  /* 126e48: add x8, x4, x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 4) + ARC_X_R(c, 10)));
  /* 126e4c: add x0, x1, x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 1) + ARC_X_R(c, 10)));
  /* 126e50: add x12, x4, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 4) + UINT64_C(16)));
  /* 126e54: mov x13, x10 */
  ARC_X_W(c, 13, ARC_X_R(c, 10));
L_126e58:;
  /* 126e58: ldp q1, q2, [x11, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(-16));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 2, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 126e5c: subs x13, x13, #0x20 */
  ARC_X_W(c, 13, arc_sub64(c, ARC_X_R(c, 13), UINT64_C(32)));
  /* 126e60: add x11, x11, #0x20 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(32)));
  /* 126e64: cmlt v3.16b, v1.16b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[1].i8[0] < 0) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[1] = ((c)->q[1].i8[1] < 0) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[2] = ((c)->q[1].i8[2] < 0) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[3] = ((c)->q[1].i8[3] < 0) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[4] = ((c)->q[1].i8[4] < 0) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[5] = ((c)->q[1].i8[5] < 0) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[6] = ((c)->q[1].i8[6] < 0) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[7] = ((c)->q[1].i8[7] < 0) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[8] = ((c)->q[1].i8[8] < 0) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[9] = ((c)->q[1].i8[9] < 0) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[10] = ((c)->q[1].i8[10] < 0) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[11] = ((c)->q[1].i8[11] < 0) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[12] = ((c)->q[1].i8[12] < 0) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[13] = ((c)->q[1].i8[13] < 0) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[14] = ((c)->q[1].i8[14] < 0) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[15] = ((c)->q[1].i8[15] < 0) ? (uint8_t)~(uint8_t)0 : 0;
    (c)->q[3] = _t; }
  /* 126e68: cmlt v4.16b, v2.16b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[2].i8[0] < 0) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[1] = ((c)->q[2].i8[1] < 0) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[2] = ((c)->q[2].i8[2] < 0) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[3] = ((c)->q[2].i8[3] < 0) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[4] = ((c)->q[2].i8[4] < 0) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[5] = ((c)->q[2].i8[5] < 0) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[6] = ((c)->q[2].i8[6] < 0) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[7] = ((c)->q[2].i8[7] < 0) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[8] = ((c)->q[2].i8[8] < 0) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[9] = ((c)->q[2].i8[9] < 0) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[10] = ((c)->q[2].i8[10] < 0) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[11] = ((c)->q[2].i8[11] < 0) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[12] = ((c)->q[2].i8[12] < 0) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[13] = ((c)->q[2].i8[13] < 0) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[14] = ((c)->q[2].i8[14] < 0) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[15] = ((c)->q[2].i8[15] < 0) ? (uint8_t)~(uint8_t)0 : 0;
    (c)->q[4] = _t; }
  /* 126e6c: bit v1.16b, v0.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[1].u8[0] ^ (((c)->q[0].u8[0] ^ (c)->q[1].u8[0]) & (c)->q[3].u8[0]));
    _t.u8[1] = ((c)->q[1].u8[1] ^ (((c)->q[0].u8[1] ^ (c)->q[1].u8[1]) & (c)->q[3].u8[1]));
    _t.u8[2] = ((c)->q[1].u8[2] ^ (((c)->q[0].u8[2] ^ (c)->q[1].u8[2]) & (c)->q[3].u8[2]));
    _t.u8[3] = ((c)->q[1].u8[3] ^ (((c)->q[0].u8[3] ^ (c)->q[1].u8[3]) & (c)->q[3].u8[3]));
    _t.u8[4] = ((c)->q[1].u8[4] ^ (((c)->q[0].u8[4] ^ (c)->q[1].u8[4]) & (c)->q[3].u8[4]));
    _t.u8[5] = ((c)->q[1].u8[5] ^ (((c)->q[0].u8[5] ^ (c)->q[1].u8[5]) & (c)->q[3].u8[5]));
    _t.u8[6] = ((c)->q[1].u8[6] ^ (((c)->q[0].u8[6] ^ (c)->q[1].u8[6]) & (c)->q[3].u8[6]));
    _t.u8[7] = ((c)->q[1].u8[7] ^ (((c)->q[0].u8[7] ^ (c)->q[1].u8[7]) & (c)->q[3].u8[7]));
    _t.u8[8] = ((c)->q[1].u8[8] ^ (((c)->q[0].u8[8] ^ (c)->q[1].u8[8]) & (c)->q[3].u8[8]));
    _t.u8[9] = ((c)->q[1].u8[9] ^ (((c)->q[0].u8[9] ^ (c)->q[1].u8[9]) & (c)->q[3].u8[9]));
    _t.u8[10] = ((c)->q[1].u8[10] ^ (((c)->q[0].u8[10] ^ (c)->q[1].u8[10]) & (c)->q[3].u8[10]));
    _t.u8[11] = ((c)->q[1].u8[11] ^ (((c)->q[0].u8[11] ^ (c)->q[1].u8[11]) & (c)->q[3].u8[11]));
    _t.u8[12] = ((c)->q[1].u8[12] ^ (((c)->q[0].u8[12] ^ (c)->q[1].u8[12]) & (c)->q[3].u8[12]));
    _t.u8[13] = ((c)->q[1].u8[13] ^ (((c)->q[0].u8[13] ^ (c)->q[1].u8[13]) & (c)->q[3].u8[13]));
    _t.u8[14] = ((c)->q[1].u8[14] ^ (((c)->q[0].u8[14] ^ (c)->q[1].u8[14]) & (c)->q[3].u8[14]));
    _t.u8[15] = ((c)->q[1].u8[15] ^ (((c)->q[0].u8[15] ^ (c)->q[1].u8[15]) & (c)->q[3].u8[15]));
    (c)->q[1] = _t; }
  /* 126e70: bit v2.16b, v0.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[2].u8[0] ^ (((c)->q[0].u8[0] ^ (c)->q[2].u8[0]) & (c)->q[4].u8[0]));
    _t.u8[1] = ((c)->q[2].u8[1] ^ (((c)->q[0].u8[1] ^ (c)->q[2].u8[1]) & (c)->q[4].u8[1]));
    _t.u8[2] = ((c)->q[2].u8[2] ^ (((c)->q[0].u8[2] ^ (c)->q[2].u8[2]) & (c)->q[4].u8[2]));
    _t.u8[3] = ((c)->q[2].u8[3] ^ (((c)->q[0].u8[3] ^ (c)->q[2].u8[3]) & (c)->q[4].u8[3]));
    _t.u8[4] = ((c)->q[2].u8[4] ^ (((c)->q[0].u8[4] ^ (c)->q[2].u8[4]) & (c)->q[4].u8[4]));
    _t.u8[5] = ((c)->q[2].u8[5] ^ (((c)->q[0].u8[5] ^ (c)->q[2].u8[5]) & (c)->q[4].u8[5]));
    _t.u8[6] = ((c)->q[2].u8[6] ^ (((c)->q[0].u8[6] ^ (c)->q[2].u8[6]) & (c)->q[4].u8[6]));
    _t.u8[7] = ((c)->q[2].u8[7] ^ (((c)->q[0].u8[7] ^ (c)->q[2].u8[7]) & (c)->q[4].u8[7]));
    _t.u8[8] = ((c)->q[2].u8[8] ^ (((c)->q[0].u8[8] ^ (c)->q[2].u8[8]) & (c)->q[4].u8[8]));
    _t.u8[9] = ((c)->q[2].u8[9] ^ (((c)->q[0].u8[9] ^ (c)->q[2].u8[9]) & (c)->q[4].u8[9]));
    _t.u8[10] = ((c)->q[2].u8[10] ^ (((c)->q[0].u8[10] ^ (c)->q[2].u8[10]) & (c)->q[4].u8[10]));
    _t.u8[11] = ((c)->q[2].u8[11] ^ (((c)->q[0].u8[11] ^ (c)->q[2].u8[11]) & (c)->q[4].u8[11]));
    _t.u8[12] = ((c)->q[2].u8[12] ^ (((c)->q[0].u8[12] ^ (c)->q[2].u8[12]) & (c)->q[4].u8[12]));
    _t.u8[13] = ((c)->q[2].u8[13] ^ (((c)->q[0].u8[13] ^ (c)->q[2].u8[13]) & (c)->q[4].u8[13]));
    _t.u8[14] = ((c)->q[2].u8[14] ^ (((c)->q[0].u8[14] ^ (c)->q[2].u8[14]) & (c)->q[4].u8[14]));
    _t.u8[15] = ((c)->q[2].u8[15] ^ (((c)->q[0].u8[15] ^ (c)->q[2].u8[15]) & (c)->q[4].u8[15]));
    (c)->q[2] = _t; }
  /* 126e74: stp q1, q2, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* 126e78: add x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(32)));
  /* 126e7c: b.ne #0x126e58 */
  if (ARC_COND(c, 1)) goto L_126e58;
  /* 126e80: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 126e84: b.ne #0x126e9c */
  if (ARC_COND(c, 1)) goto L_126e9c;
L_126e88:;
  /* 126e88: ret  */
  return;
L_126e8c:;
  /* 126e8c: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 126e90: ret  */
  return;
L_126e94:;
  /* 126e94: mov x8, x4 */
  ARC_X_W(c, 8, ARC_X_R(c, 4));
  /* 126e98: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
L_126e9c:;
  /* 126e9c: ldrsb w9, [x0], #1 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(1));
    ARC_W_W(c, 9, ((int32_t)(int8_t)arc_ld8(_a)));
  }
  /* 126ea0: cmp w9, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(0));
  /* 126ea4: csel w9, w3, w9, lt */
  ARC_W_W(c, 9, (ARC_COND(c, 11) ? (ARC_W_R(c, 3)) : ARC_W_R(c, 9)));
  /* 126ea8: cmp x0, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 2));
  /* 126eac: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 126eb0: b.ne #0x126e9c */
  if (ARC_COND(c, 1)) goto L_126e9c;
  /* 126eb4: b #0x126e88 */
  goto L_126e88;
}

void fn1_12955c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039145820));
  /* 12955c: bti c */
  /* bti: no architectural effect here */
  /* 129560: sub x8, x1, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* 129564: str x0, [x2] */
  arc_st64(ARC_X_R(c, 2), ARC_X_R(c, 0));
  /* 129568: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* 12956c: str x3, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 3));
  /* 129570: b.lt #0x1295a4 */
  if (ARC_COND(c, 11)) goto L_1295a4;
  /* 129574: tbz w7, #2, #0x1295a4 */
  if (((ARC_W_R(c, 7)) >> 2 & 1) == 0) goto L_1295a4;
  /* 129578: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* 12957c: cmp w8, #0xef */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(239));
  /* 129580: b.ne #0x1295a4 */
  if (ARC_COND(c, 1)) goto L_1295a4;
  /* 129584: ldrb w8, [x0, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(1))));
  /* 129588: cmp w8, #0xbb */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(187));
  /* 12958c: b.ne #0x1295a4 */
  if (ARC_COND(c, 1)) goto L_1295a4;
  /* 129590: ldrb w8, [x0, #2] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(2))));
  /* 129594: cmp w8, #0xbf */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(191));
  /* 129598: b.ne #0x1295a4 */
  if (ARC_COND(c, 1)) goto L_1295a4;
  /* 12959c: add x0, x0, #3 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3)));
  /* 1295a0: str x0, [x2] */
  arc_st64(ARC_X_R(c, 2), ARC_X_R(c, 0));
L_1295a4:;
  /* 1295a4: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* 1295a8: b.hs #0x129768 */
  if (ARC_COND(c, 2)) goto L_129768;
  /* 1295ac: ldr x9, [x5] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 5)));
  /* 1295b0: b #0x1295cc */
  goto L_1295cc;
L_1295b4:;
  /* 1295b4: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* 1295b8: str w10, [x9], #4 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 10));
  }
  /* 1295bc: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* 1295c0: str x0, [x2] */
  arc_st64(ARC_X_R(c, 2), ARC_X_R(c, 0));
  /* 1295c4: str x9, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 9));
  /* 1295c8: b.hs #0x129768 */
  if (ARC_COND(c, 2)) goto L_129768;
L_1295cc:;
  /* 1295cc: cmp x9, x4 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 4));
  /* 1295d0: b.hs #0x129780 */
  if (ARC_COND(c, 2)) goto L_129780;
  /* 1295d4: ldrsb w8, [x0] */
  ARC_W_W(c, 8, ((int32_t)(int8_t)arc_ld8(ARC_X_R(c, 0))));
  /* 1295d8: and w10, w8, #0xff */
  ARC_W_W(c, 10, (ARC_W_R(c, 8) & UINT64_C(255)));
  /* 1295dc: tbnz w8, #0x1f, #0x1295f4 */
  if (((ARC_W_R(c, 8)) >> 31 & 1) != 0) goto L_1295f4;
  /* 1295e0: and x8, x8, #0xff */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(255)));
  /* 1295e4: cmp x6, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 6), ARC_X_R(c, 8));
  /* 1295e8: b.lo #0x129774 */
  if (ARC_COND(c, 3)) goto L_129774;
  /* 1295ec: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 1295f0: b #0x1295b4 */
  goto L_1295b4;
L_1295f4:;
  /* 1295f4: cmp w10, #0xc2 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(194));
  /* 1295f8: b.lo #0x129774 */
  if (ARC_COND(c, 3)) goto L_129774;
  /* 1295fc: cmp w10, #0xdf */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(223));
  /* 129600: b.hi #0x12963c */
  if (ARC_COND(c, 8)) goto L_12963c;
  /* 129604: sub x8, x1, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* 129608: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* 12960c: b.lt #0x129780 */
  if (ARC_COND(c, 11)) goto L_129780;
  /* 129610: ldrb w8, [x0, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(1))));
  /* 129614: and w11, w8, #0xc0 */
  ARC_W_W(c, 11, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* 129618: cmp w11, #0x80 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(128));
  /* 12961c: b.ne #0x129774 */
  if (ARC_COND(c, 1)) goto L_129774;
  /* 129620: and w11, w8, #0x3f */
  ARC_W_W(c, 11, (ARC_W_R(c, 8) & UINT64_C(63)));
  /* 129624: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
  /* 129628: bfi w11, w10, #6, #5 */
  ARC_W_W(c, 11, (((uint32_t)(ARC_W_R(c, 11)) & UINT64_C(4294965311)) | ((((uint32_t)(ARC_W_R(c, 10))) & UINT64_C(31)) << 6)));
  /* 12962c: cmp x6, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 6), ARC_X_R(c, 11));
  /* 129630: b.lo #0x12976c */
  if (ARC_COND(c, 3)) goto L_12976c;
  /* 129634: mov w10, w11 */
  ARC_W_W(c, 10, ARC_W_R(c, 11));
  /* 129638: b #0x1295b4 */
  goto L_1295b4;
L_12963c:;
  /* 12963c: cmp w10, #0xef */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(239));
  /* 129640: b.hi #0x129674 */
  if (ARC_COND(c, 8)) goto L_129674;
  /* 129644: sub x11, x1, x0 */
  ARC_X_W(c, 11, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* 129648: cmp x11, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(2));
  /* 12964c: b.lt #0x129780 */
  if (ARC_COND(c, 11)) goto L_129780;
  /* 129650: ldrb w8, [x0, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(1))));
  /* 129654: cmp w10, #0xed */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(237));
  /* 129658: b.eq #0x1296ac */
  if (ARC_COND(c, 0)) goto L_1296ac;
  /* 12965c: cmp w10, #0xe0 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(224));
  /* 129660: b.ne #0x1296bc */
  if (ARC_COND(c, 1)) goto L_1296bc;
  /* 129664: and w12, w8, #0xe0 */
  ARC_W_W(c, 12, (ARC_W_R(c, 8) & UINT64_C(224)));
  /* 129668: cmp w12, #0xa0 */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(160));
  /* 12966c: b.eq #0x1296c8 */
  if (ARC_COND(c, 0)) goto L_1296c8;
  /* 129670: b #0x129774 */
  goto L_129774;
L_129674:;
  /* 129674: cmp w10, #0xf4 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(244));
  /* 129678: b.hi #0x129774 */
  if (ARC_COND(c, 8)) goto L_129774;
  /* 12967c: sub x11, x1, x0 */
  ARC_X_W(c, 11, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* 129680: cmp x11, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(2));
  /* 129684: b.lt #0x129780 */
  if (ARC_COND(c, 11)) goto L_129780;
  /* 129688: ldrb w8, [x0, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(1))));
  /* 12968c: cmp w10, #0xf4 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(244));
  /* 129690: b.eq #0x1296fc */
  if (ARC_COND(c, 0)) goto L_1296fc;
  /* 129694: cmp w10, #0xf0 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(240));
  /* 129698: b.ne #0x12970c */
  if (ARC_COND(c, 1)) goto L_12970c;
  /* 12969c: sub w12, w8, #0x90 */
  ARC_W_W(c, 12, (ARC_W_R(c, 8) - UINT64_C(144)));
  /* 1296a0: cmp w12, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(48));
  /* 1296a4: b.lo #0x129718 */
  if (ARC_COND(c, 3)) goto L_129718;
  /* 1296a8: b #0x129774 */
  goto L_129774;
L_1296ac:;
  /* 1296ac: sxtb w12, w8 */
  ARC_W_W(c, 12, ((int32_t)(int8_t)(ARC_W_R(c, 8))));
  /* 1296b0: cmn w12, #0x60 */
  (void)arc_add32(c, ARC_W_R(c, 12), UINT64_C(96), 0);
  /* 1296b4: b.lt #0x1296c8 */
  if (ARC_COND(c, 11)) goto L_1296c8;
  /* 1296b8: b #0x129774 */
  goto L_129774;
L_1296bc:;
  /* 1296bc: sxtb w12, w8 */
  ARC_W_W(c, 12, ((int32_t)(int8_t)(ARC_W_R(c, 8))));
  /* 1296c0: cmn w12, #0x41 */
  (void)arc_add32(c, ARC_W_R(c, 12), UINT64_C(65), 0);
  /* 1296c4: b.gt #0x129774 */
  if (ARC_COND(c, 12)) goto L_129774;
L_1296c8:;
  /* 1296c8: cmp x11, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(2));
  /* 1296cc: b.eq #0x129780 */
  if (ARC_COND(c, 0)) goto L_129780;
  /* 1296d0: ldrb w11, [x0, #2] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 0) + INT64_C(2))));
  /* 1296d4: and w12, w11, #0xc0 */
  ARC_W_W(c, 12, (ARC_W_R(c, 11) & UINT64_C(192)));
  /* 1296d8: cmp w12, #0x80 */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(128));
  /* 1296dc: b.ne #0x129774 */
  if (ARC_COND(c, 1)) goto L_129774;
  /* 1296e0: ubfiz w10, w10, #0xc, #4 */
  ARC_W_W(c, 10, ((uint32_t)((((uint32_t)(ARC_W_R(c, 10))) & UINT64_C(15))) << 12));
  /* 1296e4: bfi w10, w8, #6, #6 */
  ARC_W_W(c, 10, (((uint32_t)(ARC_W_R(c, 10)) & UINT64_C(4294963263)) | ((((uint32_t)(ARC_W_R(c, 8))) & UINT64_C(63)) << 6)));
  /* 1296e8: bfxil w10, w11, #0, #6 */
  ARC_W_W(c, 10, (((uint32_t)(ARC_W_R(c, 10)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 11))) >> 0) & UINT64_C(63))));
  /* 1296ec: cmp x6, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 6), ARC_X_R(c, 10));
  /* 1296f0: b.lo #0x129774 */
  if (ARC_COND(c, 3)) goto L_129774;
  /* 1296f4: mov w8, #3 */
  ARC_W_W(c, 8, UINT64_C(3));
  /* 1296f8: b #0x1295b4 */
  goto L_1295b4;
L_1296fc:;
  /* 1296fc: sxtb w12, w8 */
  ARC_W_W(c, 12, ((int32_t)(int8_t)(ARC_W_R(c, 8))));
  /* 129700: cmn w12, #0x70 */
  (void)arc_add32(c, ARC_W_R(c, 12), UINT64_C(112), 0);
  /* 129704: b.lt #0x129718 */
  if (ARC_COND(c, 11)) goto L_129718;
  /* 129708: b #0x129774 */
  goto L_129774;
L_12970c:;
  /* 12970c: sxtb w12, w8 */
  ARC_W_W(c, 12, ((int32_t)(int8_t)(ARC_W_R(c, 8))));
  /* 129710: cmn w12, #0x41 */
  (void)arc_add32(c, ARC_W_R(c, 12), UINT64_C(65), 0);
  /* 129714: b.gt #0x129774 */
  if (ARC_COND(c, 12)) goto L_129774;
L_129718:;
  /* 129718: cmp x11, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(2));
  /* 12971c: b.eq #0x129780 */
  if (ARC_COND(c, 0)) goto L_129780;
  /* 129720: ldrb w12, [x0, #2] */
  ARC_W_W(c, 12, arc_ld8((ARC_X_R(c, 0) + INT64_C(2))));
  /* 129724: and w13, w12, #0xc0 */
  ARC_W_W(c, 13, (ARC_W_R(c, 12) & UINT64_C(192)));
  /* 129728: cmp w13, #0x80 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(128));
  /* 12972c: b.ne #0x129774 */
  if (ARC_COND(c, 1)) goto L_129774;
  /* 129730: cmp x11, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(3));
  /* 129734: b.eq #0x129780 */
  if (ARC_COND(c, 0)) goto L_129780;
  /* 129738: ldrb w11, [x0, #3] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 0) + INT64_C(3))));
  /* 12973c: and w13, w11, #0xc0 */
  ARC_W_W(c, 13, (ARC_W_R(c, 11) & UINT64_C(192)));
  /* 129740: cmp w13, #0x80 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(128));
  /* 129744: b.ne #0x129774 */
  if (ARC_COND(c, 1)) goto L_129774;
  /* 129748: ubfiz w10, w10, #0x12, #3 */
  ARC_W_W(c, 10, ((uint32_t)((((uint32_t)(ARC_W_R(c, 10))) & UINT64_C(7))) << 18));
  /* 12974c: bfi w10, w8, #0xc, #6 */
  ARC_W_W(c, 10, (((uint32_t)(ARC_W_R(c, 10)) & UINT64_C(4294709247)) | ((((uint32_t)(ARC_W_R(c, 8))) & UINT64_C(63)) << 12)));
  /* 129750: bfi w10, w12, #6, #6 */
  ARC_W_W(c, 10, (((uint32_t)(ARC_W_R(c, 10)) & UINT64_C(4294963263)) | ((((uint32_t)(ARC_W_R(c, 12))) & UINT64_C(63)) << 6)));
  /* 129754: bfxil w10, w11, #0, #6 */
  ARC_W_W(c, 10, (((uint32_t)(ARC_W_R(c, 10)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 11))) >> 0) & UINT64_C(63))));
  /* 129758: cmp x6, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 6), ARC_X_R(c, 10));
  /* 12975c: b.lo #0x129774 */
  if (ARC_COND(c, 3)) goto L_129774;
  /* 129760: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 129764: b #0x1295b4 */
  goto L_1295b4;
L_129768:;
  /* 129768: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
L_12976c:;
  /* 12976c: mov w0, w8 */
  ARC_W_W(c, 0, ARC_W_R(c, 8));
  /* 129770: ret  */
  return;
L_129774:;
  /* 129774: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
  /* 129778: mov w0, w8 */
  ARC_W_W(c, 0, ARC_W_R(c, 8));
  /* 12977c: ret  */
  return;
L_129780:;
  /* 129780: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 129784: mov w0, w8 */
  ARC_W_W(c, 0, ARC_W_R(c, 8));
  /* 129788: ret  */
  return;
}

void fn1_12acd0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039151824));
  /* 12acd0: bti c */
  /* bti: no architectural effect here */
  /* 12acd4: ldrb w9, [x0, #0x18] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12acd8: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 12acdc: tbz w9, #1, #0x12acfc */
  if (((ARC_W_R(c, 9)) >> 1 & 1) == 0) goto L_12acfc;
  /* 12ace0: sub x9, x6, x5 */
  ARC_X_W(c, 9, (ARC_X_R(c, 6) - ARC_X_R(c, 5)));
  /* 12ace4: cmp x9, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(2));
  /* 12ace8: b.ge #0x12acf4 */
  if (ARC_COND(c, 10)) goto L_12acf4;
L_12acec:;
  /* 12acec: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 12acf0: b #0x12ad9c */
  goto L_12ad9c;
L_12acf4:;
  /* 12acf4: mov w9, #0xfffe */
  ARC_W_W(c, 9, UINT64_C(65534));
  /* 12acf8: strh w9, [x5], #2 */
  { const uint64_t _a = ARC_X_R(c, 5);
    ARC_X_W(c, 5, ARC_X_R(c, 5) + INT64_C(2));
    arc_st16(_a, ARC_W_R(c, 9));
  }
L_12acfc:;
  /* 12acfc: cmp x2, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 3));
  /* 12ad00: b.hs #0x12ad90 */
  if (ARC_COND(c, 2)) goto L_12ad90;
  /* 12ad04: mov w9, #0x3fc0 */
  ARC_W_W(c, 9, UINT64_C(16320));
  /* 12ad08: mov w10, #0xd8 */
  ARC_W_W(c, 10, UINT64_C(216));
  /* 12ad0c: b #0x12ad20 */
  goto L_12ad20;
L_12ad10:;
  /* 12ad10: add x2, x2, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(4)));
  /* 12ad14: strb w11, [x5], #1 */
  { const uint64_t _a = ARC_X_R(c, 5);
    ARC_X_W(c, 5, ARC_X_R(c, 5) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 11));
  }
  /* 12ad18: cmp x2, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 3));
  /* 12ad1c: b.hs #0x12ad90 */
  if (ARC_COND(c, 2)) goto L_12ad90;
L_12ad20:;
  /* 12ad20: ldr w11, [x2] */
  ARC_W_W(c, 11, arc_ld32(ARC_X_R(c, 2)));
  /* 12ad24: lsr w12, w11, #0xb */
  ARC_W_W(c, 12, ((uint32_t)(ARC_W_R(c, 11)) >> ((UINT64_C(11)) & 31)));
  /* 12ad28: cmp w12, #0x1b */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(27));
  /* 12ad2c: ccmp x8, x11, #0, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* 12ad30: b.lo #0x12ad98 */
  if (ARC_COND(c, 3)) goto L_12ad98;
  /* 12ad34: lsr w13, w11, #0x10 */
  ARC_W_W(c, 13, ((uint32_t)(ARC_W_R(c, 11)) >> ((UINT64_C(16)) & 31)));
  /* 12ad38: sub x12, x6, x5 */
  ARC_X_W(c, 12, (ARC_X_R(c, 6) - ARC_X_R(c, 5)));
  /* 12ad3c: cbnz w13, #0x12ad54 */
  if ((ARC_W_R(c, 13)) != 0) goto L_12ad54;
  /* 12ad40: cmp x12, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(2));
  /* 12ad44: b.lt #0x12acec */
  if (ARC_COND(c, 11)) goto L_12acec;
  /* 12ad48: lsr w12, w11, #8 */
  ARC_W_W(c, 12, ((uint32_t)(ARC_W_R(c, 11)) >> ((UINT64_C(8)) & 31)));
  /* 12ad4c: strb w12, [x5], #1 */
  { const uint64_t _a = ARC_X_R(c, 5);
    ARC_X_W(c, 5, ARC_X_R(c, 5) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 12));
  }
  /* 12ad50: b #0x12ad10 */
  goto L_12ad10;
L_12ad54:;
  /* 12ad54: cmp x12, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(4));
  /* 12ad58: b.lt #0x12acec */
  if (ARC_COND(c, 11)) goto L_12acec;
  /* 12ad5c: lsr w12, w11, #0xa */
  ARC_W_W(c, 12, ((uint32_t)(ARC_W_R(c, 11)) >> ((UINT64_C(10)) & 31)));
  /* 12ad60: mov w14, #0xdc */
  ARC_W_W(c, 14, UINT64_C(220));
  /* 12ad64: bfxil w14, w11, #8, #2 */
  ARC_W_W(c, 14, (((uint32_t)(ARC_W_R(c, 14)) & UINT64_C(4294967292)) | ((((uint32_t)(ARC_W_R(c, 11))) >> 8) & UINT64_C(3))));
  /* 12ad68: and w12, w12, #0x7c0 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) & UINT64_C(1984)));
  /* 12ad6c: add w12, w12, w9 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) + ARC_W_R(c, 9)));
  /* 12ad70: strb w14, [x5, #2] */
  arc_st8((ARC_X_R(c, 5) + INT64_C(2)), ARC_W_R(c, 14));
  /* 12ad74: orr w13, w10, w12, lsr #8 */
  ARC_W_W(c, 13, (ARC_W_R(c, 10) | ((uint32_t)(ARC_W_R(c, 12)) >> 8)));
  /* 12ad78: bfxil w12, w11, #0xa, #6 */
  ARC_W_W(c, 12, (((uint32_t)(ARC_W_R(c, 12)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 11))) >> 10) & UINT64_C(63))));
  /* 12ad7c: strb w12, [x5, #1] */
  arc_st8((ARC_X_R(c, 5) + INT64_C(1)), ARC_W_R(c, 12));
  /* 12ad80: add x12, x5, #3 */
  ARC_X_W(c, 12, (ARC_X_R(c, 5) + UINT64_C(3)));
  /* 12ad84: strb w13, [x5] */
  arc_st8(ARC_X_R(c, 5), ARC_W_R(c, 13));
  /* 12ad88: mov x5, x12 */
  ARC_X_W(c, 5, ARC_X_R(c, 12));
  /* 12ad8c: b #0x12ad10 */
  goto L_12ad10;
L_12ad90:;
  /* 12ad90: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 12ad94: b #0x12ad9c */
  goto L_12ad9c;
L_12ad98:;
  /* 12ad98: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
L_12ad9c:;
  /* 12ad9c: str x2, [x4] */
  arc_st64(ARC_X_R(c, 4), ARC_X_R(c, 2));
  /* 12ada0: str x5, [x7] */
  arc_st64(ARC_X_R(c, 7), ARC_X_R(c, 5));
  /* 12ada4: ret  */
  return;
}

void fn1_12c34c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039157580));
  /* 12c34c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12c350: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* 12c354: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12c358: stp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 12c35c: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 12c360: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12c364: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* 12c368: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 12c36c: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 12c370: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12c374: cmp w8, #0x43 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(67));
  /* 12c378: b.ne #0x12c384 */
  if (ARC_COND(c, 1)) goto L_12c384;
  /* 12c37c: ldrb w8, [x21, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 21) + INT64_C(1))));
  /* 12c380: cbz w8, #0x12c494 */
  if ((ARC_W_R(c, 8)) == 0) goto L_12c494;
L_12c384:;
  /* 12c384: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 12c388: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 12c38c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 12c390: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229716));
  fn1_1441e0(c);
  /* 12c394: stur x0, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 0));
  /* 12c398: cbz x0, #0x12c4b0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_12c4b0;
  /* 12c39c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 12c3a0: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229732));
  fn1_1443c0(c);
  /* 12c3a4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 12c3a8: str x0, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 0));
  /* 12c3ac: bl #0x144498 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229744));
  fn1_144498(c);
  /* 12c3b0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 12c3b4: cbz x22, #0x12c3c0 */
  if ((ARC_X_R(c, 22)) == 0) goto L_12c3c0;
  /* 12c3b8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 12c3bc: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229760));
  fn1_1443c0(c);
L_12c3c0:;
  /* 12c3c0: ldr x22, [x21] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 21)));
  /* 12c3c4: ldrb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 12c3c8: cbz w8, #0x12c420 */
  if ((ARC_W_R(c, 8)) == 0) goto L_12c420;
  /* 12c3cc: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 12c3d0: str xzr, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 31));
  /* 12c3d4: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229784));
  fn1_142860(c);
  /* 12c3d8: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 12c3dc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12c3e0: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229796));
  fn1_1443c0(c);
  /* 12c3e4: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 12c3e8: str x0, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 0));
  /* 12c3ec: sub x0, x29, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 12c3f0: mov x3, sp */
  ARC_X_W(c, 3, (c)->sp);
  /* 12c3f4: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 12c3f8: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 12c3fc: bl #0x144438 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229824));
  fn1_144438(c);
  /* 12c400: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 12c404: cbz x23, #0x12c410 */
  if ((ARC_X_R(c, 23)) == 0) goto L_12c410;
  /* 12c408: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 12c40c: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229840));
  fn1_1443c0(c);
L_12c410:;
  /* 12c410: cmn x22, #3 */
  (void)arc_add64(c, ARC_X_R(c, 22), UINT64_C(3), 0);
  /* 12c414: b.hi #0x12c420 */
  if (ARC_COND(c, 8)) goto L_12c420;
  /* 12c418: ldur w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 12c41c: str w8, [x19, #0x10] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(16)), ARC_W_R(c, 8));
L_12c420:;
  /* 12c420: ldr x22, [x21, #8] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* 12c424: ldrb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 12c428: cbz w8, #0x12c480 */
  if ((ARC_W_R(c, 8)) == 0) goto L_12c480;
  /* 12c42c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 12c430: str xzr, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 31));
  /* 12c434: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229880));
  fn1_142860(c);
  /* 12c438: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 12c43c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12c440: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229892));
  fn1_1443c0(c);
  /* 12c444: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 12c448: str x0, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 0));
  /* 12c44c: sub x0, x29, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 12c450: mov x3, sp */
  ARC_X_W(c, 3, (c)->sp);
  /* 12c454: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 12c458: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 12c45c: bl #0x144438 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229920));
  fn1_144438(c);
  /* 12c460: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 12c464: cbz x23, #0x12c470 */
  if ((ARC_X_R(c, 23)) == 0) goto L_12c470;
  /* 12c468: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 12c46c: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229936));
  fn1_1443c0(c);
L_12c470:;
  /* 12c470: cmn x22, #3 */
  (void)arc_add64(c, ARC_X_R(c, 22), UINT64_C(3), 0);
  /* 12c474: b.hi #0x12c480 */
  if (ARC_COND(c, 8)) goto L_12c480;
  /* 12c478: ldur w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 12c47c: str w8, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 8));
L_12c480:;
  /* 12c480: ldr x1, [x21, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 12c484: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 12c488: bl #0xe167c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229964));
  fn1_e167c(c);
  /* 12c48c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12c490: bl #0x144210 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229972));
  fn1_144210(c);
L_12c494:;
  /* 12c494: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12c498: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 12c49c: ldp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 12c4a0: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12c4a4: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* 12c4a8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12c4ac: ret  */
  return;
L_12c4b0:;
  /* 12c4b0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 12c4b4: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 12c4b8: bl #0x11dda8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1230012));
  fn1_11dda8(c);
  /* 12c4bc: adrp x0, #0x50000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(327680)));
  /* 12c4c0: add x0, x0, #0xf7f */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3967)));
  /* 12c4c4: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* 12c4c8: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 12c4cc: add x19, sp, #0x18 */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(24)));
  /* 12c4d0: bl #0x125878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1230036));
  fn1_125878(c);
  /* 12c4d4: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* 12c4d8: ldr x9, [sp, #0x28] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(40))));
  /* 12c4dc: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 12c4e0: csinc x0, x9, x19, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* 12c4e4: bl #0x142c98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1230056));
  fn1_142c98(c);
  /* 12c4e8: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* 12c4ec: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12c4f0: tbz w8, #0, #0x12c50c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12c50c;
  /* 12c4f4: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 12c4f8: ldr x0, [sp, #0x28] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(40))));
  /* 12c4fc: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 12c500: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1230084));
  fn1_142608(c);
  /* 12c504: b #0x12c50c */
  goto L_12c50c;
  /* 12c508: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_12c50c:;
  /* 12c50c: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 12c510: tbz w8, #0, #0x12c558 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12c558;
  /* 12c514: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 12c518: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12c51c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 12c520: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1230116));
  fn1_142608(c);
  /* 12c524: b #0x12c558 */
  goto L_12c558;
  /* 12c528: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1230124));
  fn1_a1454(c);
  /* 12c52c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1230128));
  fn1_a1454(c);
  /* 12c530: b #0x12c554 */
  goto L_12c554;
  /* 12c534: b #0x12c544 */
  goto L_12c544;
  /* 12c538: b #0x12c544 */
  goto L_12c544;
  /* 12c53c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1230144));
  fn1_a1454(c);
  /* 12c540: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1230148));
  fn1_a1454(c);
L_12c544:;
  /* 12c544: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12c548: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 12c54c: bl #0x135428 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1230160));
  fn1_135428(c);
  /* 12c550: b #0x12c558 */
  goto L_12c558;
L_12c554:;
  /* 12c554: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_12c558:;
  /* 12c558: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 12c55c: bl #0x12c2c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1230176));
  fn1_12c2c0(c);
  /* 12c560: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12c564: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1230184));
  fn1_9cc20(c);
}

void fn1_13495c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039191900));
  /* 13495c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 134960: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 134964: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 134968: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 13496c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 134970: bl #0x143fe8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1263988));
  fn1_143fe8(c);
  /* 134974: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 134978: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* 13497c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 134980: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 134984: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 134988: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_1350c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039193792));
  /* 1350c0: bti c */
  /* bti: no architectural effect here */
  /* 1350c4: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* 1350c8: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_137f54(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039205716));
  /* 137f54: bti c */
  /* bti: no architectural effect here */
  /* 137f58: cmp w2, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 2), UINT64_C(2));
  /* 137f5c: and w9, w3, #8 */
  ARC_W_W(c, 9, (ARC_W_R(c, 3) & UINT64_C(8)));
  /* 137f60: and w8, w3, #0x10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 3) & UINT64_C(16)));
  /* 137f64: b.eq #0x137f74 */
  if (ARC_COND(c, 0)) goto L_137f74;
  /* 137f68: cmp w2, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 2), UINT64_C(1));
  /* 137f6c: b.eq #0x137f80 */
  if (ARC_COND(c, 0)) goto L_137f80;
  /* 137f70: cbnz w2, #0x137f8c */
  if ((ARC_W_R(c, 2)) != 0) goto L_137f8c;
L_137f74:;
  /* 137f74: tst w3, #0x18 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 3) & UINT64_C(24)));
  /* 137f78: b.ne #0x137f8c */
  if (ARC_COND(c, 1)) goto L_137f8c;
  /* 137f7c: b #0x13800c */
  goto L_13800c;
L_137f80:;
  /* 137f80: lsr w10, w9, #3 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(3)) & 31)));
  /* 137f84: cmp w10, w8, lsr #4 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ((uint32_t)(ARC_W_R(c, 8)) >> 4));
  /* 137f88: b.eq #0x13800c */
  if (ARC_COND(c, 0)) goto L_13800c;
L_137f8c:;
  /* 137f8c: ldr x12, [x0, #0x18] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* 137f90: cbz w9, #0x137f98 */
  if ((ARC_W_R(c, 9)) == 0) goto L_137f98;
  /* 137f94: cbz x12, #0x13800c */
  if ((ARC_X_R(c, 12)) == 0) goto L_13800c;
L_137f98:;
  /* 137f98: ldr x13, [x0, #0x30] */
  ARC_X_W(c, 13, arc_ld64((ARC_X_R(c, 0) + INT64_C(48))));
  /* 137f9c: cbz w8, #0x137fa4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_137fa4;
  /* 137fa0: cbz x13, #0x13800c */
  if ((ARC_X_R(c, 13)) == 0) goto L_13800c;
L_137fa4:;
  /* 137fa4: ldr x11, [x0, #0x38] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 0) + INT64_C(56))));
  /* 137fa8: ldr x10, [x0, #0x20] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(32))));
  /* 137fac: cmp x11, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(0));
  /* 137fb0: csel x11, x10, x11, eq */
  ARC_X_W(c, 11, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 11)));
  /* 137fb4: cbz w2, #0x137fd4 */
  if ((ARC_W_R(c, 2)) == 0) goto L_137fd4;
  /* 137fb8: cmp w2, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 2), UINT64_C(2));
  /* 137fbc: b.ne #0x137fe4 */
  if (ARC_COND(c, 1)) goto L_137fe4;
  /* 137fc0: ldr x12, [x0, #0x10] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 137fc4: sub x12, x11, x12 */
  ARC_X_W(c, 12, (ARC_X_R(c, 11) - ARC_X_R(c, 12)));
  /* 137fc8: adds x1, x12, x1 */
  ARC_X_W(c, 1, arc_add64(c, ARC_X_R(c, 12), ARC_X_R(c, 1), 0));
  /* 137fcc: b.pl #0x137ffc */
  if (ARC_COND(c, 5)) goto L_137ffc;
  /* 137fd0: b #0x13800c */
  goto L_13800c;
L_137fd4:;
  /* 137fd4: mov w12, w2 */
  ARC_W_W(c, 12, ARC_W_R(c, 2));
  /* 137fd8: adds x1, x12, x1 */
  ARC_X_W(c, 1, arc_add64(c, ARC_X_R(c, 12), ARC_X_R(c, 1), 0));
  /* 137fdc: b.pl #0x137ffc */
  if (ARC_COND(c, 5)) goto L_137ffc;
  /* 137fe0: b #0x13800c */
  goto L_13800c;
L_137fe4:;
  /* 137fe4: cmp w9, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(0));
  /* 137fe8: ldr x14, [x0, #0x10] */
  ARC_X_W(c, 14, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 137fec: csel x12, x12, x13, ne */
  ARC_X_W(c, 12, (ARC_COND(c, 1) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 13)));
  /* 137ff0: sub x12, x12, x14 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - ARC_X_R(c, 14)));
  /* 137ff4: adds x1, x12, x1 */
  ARC_X_W(c, 1, arc_add64(c, ARC_X_R(c, 12), ARC_X_R(c, 1), 0));
  /* 137ff8: b.mi #0x13800c */
  if (ARC_COND(c, 4)) goto L_13800c;
L_137ffc:;
  /* 137ffc: ldr x12, [x0, #0x10] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 138000: sub x11, x11, x12 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - ARC_X_R(c, 12)));
  /* 138004: cmp x1, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 11));
  /* 138008: b.le #0x138018 */
  if (ARC_COND(c, 13)) goto L_138018;
L_13800c:;
  /* 13800c: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* 138010: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 138014: ret  */
  return;
L_138018:;
  /* 138018: add x11, x12, x1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 12) + ARC_X_R(c, 1)));
  /* 13801c: cbz w9, #0x138038 */
  if ((ARC_W_R(c, 9)) == 0) goto L_138038;
  /* 138020: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* 138024: csel x9, x10, x11, lo */
  ARC_X_W(c, 9, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 11)));
  /* 138028: stp x11, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 13802c: cbnz w8, #0x13803c */
  if ((ARC_W_R(c, 8)) != 0) goto L_13803c;
L_138030:;
  /* 138030: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 138034: ret  */
  return;
L_138038:;
  /* 138038: cbz w8, #0x138030 */
  if ((ARC_W_R(c, 8)) == 0) goto L_138030;
L_13803c:;
  /* 13803c: ldr x8, [x0, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(40))));
  /* 138040: cmp x11, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 8));
  /* 138044: csel x8, x11, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 8)));
  /* 138048: stp x8, x11, [x0, #0x28] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 11));
  }
  /* 13804c: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 138050: ret  */
  return;
}

void fn1_13ba50(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039220816));
  /* 13ba50: bti c */
  /* bti: no architectural effect here */
  /* 13ba54: ldp x9, x8, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 13ba58: subs x9, x9, x8 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8)));
  /* 13ba5c: b.eq #0x13ba70 */
  if (ARC_COND(c, 0)) goto L_13ba70;
  /* 13ba60: add x9, x9, #7 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(7)));
  /* 13ba64: and x9, x9, #0xfffffffffffffff8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551608)));
  /* 13ba68: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* 13ba6c: str x8, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 8));
L_13ba70:;
  /* 13ba70: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 13ba74: cbz x8, #0x13ba88 */
  if ((ARC_X_R(c, 8)) == 0) goto L_13ba88;
  /* 13ba78: ldr x9, [x0, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* 13ba7c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 13ba80: sub x1, x9, x8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 13ba84: b #0x142608 */
  fn1_142608(c); return;
L_13ba88:;
  /* 13ba88: ret  */
  return;
}

void fn1_142458(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039247960));
  /* 142458: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 14245c: ldr x17, [x16, #0xea8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3752))));
  /* 142460: add x16, x16, #0xea8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3752)));
  /* 142464: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142468: nop  */
  /* nop: no architectural effect here */
  /* 14246c: nop  */
  /* nop: no architectural effect here */
}

void fn1_142a58(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249496));
  /* 142a58: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142a5c: ldr x17, [x16, #0xa8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(168))));
  /* 142a60: add x16, x16, #0xa8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(168)));
  /* 142a64: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142a68: nop  */
  /* nop: no architectural effect here */
  /* 142a6c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143058(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251032));
  /* 143058: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14305c: ldr x17, [x16, #0x2a8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(680))));
  /* 143060: add x16, x16, #0x2a8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(680)));
  /* 143064: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143068: nop  */
  /* nop: no architectural effect here */
  /* 14306c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143658(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252568));
  /* 143658: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14365c: ldr x17, [x16, #0x4a8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1192))));
  /* 143660: add x16, x16, #0x4a8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1192)));
  /* 143664: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143668: nop  */
  /* nop: no architectural effect here */
  /* 14366c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143c58(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254104));
  /* 143c58: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143c5c: ldr x17, [x16, #0x6a8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1704))));
  /* 143c60: add x16, x16, #0x6a8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1704)));
  /* 143c64: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143c68: nop  */
  /* nop: no architectural effect here */
  /* 143c6c: nop  */
  /* nop: no architectural effect here */
}

void fn1_144258(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255640));
  /* 144258: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14425c: ldr x17, [x16, #0x8a8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2216))));
  /* 144260: add x16, x16, #0x8a8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2216)));
  /* 144264: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144268: nop  */
  /* nop: no architectural effect here */
  /* 14426c: nop  */
  /* nop: no architectural effect here */
}

void fn1_144858(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039257176));
  /* 144858: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14485c: ldr x17, [x16, #0xaa8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2728))));
  /* 144860: add x16, x16, #0xaa8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2728)));
  /* 144864: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144868: nop  */
  /* nop: no architectural effect here */
  /* 14486c: nop  */
  /* nop: no architectural effect here */
}

