#include "lifted.h"

void fn1_9e0b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038575280));
  /* 9e0b0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 9e0b4: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 9e0b8: stp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 9e0bc: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 9e0c0: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 9e0c4: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 9e0c8: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 9e0cc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 9e0d0: sub sp, sp, #0x6a0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(1696)));
  /* 9e0d4: ldp x10, x8, [x2, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 2) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 9e0d8: mov x19, sp */
  ARC_X_W(c, 19, (c)->sp);
  /* 9e0dc: ldr x9, [x2] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 2)));
  /* 9e0e0: ldp x11, x12, [x1, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(16));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 12, arc_ld64(_pa + 8));
  }
  /* 9e0e4: mov x20, x5 */
  ARC_X_W(c, 20, ARC_X_R(c, 5));
  /* 9e0e8: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 9e0ec: mov x28, xzr */
  ARC_X_W(c, 28, ARC_X_R(c, 31));
  /* 9e0f0: add x9, x10, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + ARC_X_R(c, 9)));
  /* 9e0f4: add x24, x5, #0x18 */
  ARC_X_W(c, 24, (ARC_X_R(c, 5) + UINT64_C(24)));
  /* 9e0f8: nop  */
  /* nop: no architectural effect here */
  /* 9e0fc: adr x23, #0x525f4 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(337396)));
  /* 9e100: stp x8, x9, [x29, #-0x38] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-56));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 9e104: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 9e108: ldp x9, x10, [x1] */
  { const uint64_t _pa = ARC_X_R(c, 1);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 9e10c: stp x8, x11, [x29, #-0x28] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-40));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 11));
  }
  /* 9e110: str w4, [x19, #0x2c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(44)), ARC_W_R(c, 4));
  /* 9e114: stp x0, x1, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 9e118: add x8, x10, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + ARC_X_R(c, 9)));
  /* 9e11c: sub x9, x3, x12 */
  ARC_X_W(c, 9, (ARC_X_R(c, 3) - ARC_X_R(c, 12)));
  /* 9e120: add x10, x5, #0x238 */
  ARC_X_W(c, 10, (ARC_X_R(c, 5) + UINT64_C(568)));
  /* 9e124: stp x8, x9, [x29, #-0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-24));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 9e128: add x8, x19, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + UINT64_C(64)));
  /* 9e12c: add x9, x8, #0x238 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(568)));
  /* 9e130: add x8, x8, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* 9e134: stp xzr, x8, [x19, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 9e138: stp x9, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 9e13c: b #0x9e14c */
  goto L_9e14c;
L_9e140:;
  /* 9e140: add x28, x28, #0x18 */
  ARC_X_W(c, 28, (ARC_X_R(c, 28) + UINT64_C(24)));
  /* 9e144: cmp x28, #0x30 */
  (void)arc_sub64(c, ARC_X_R(c, 28), UINT64_C(48));
  /* 9e148: b.eq #0x9e8fc */
  if (ARC_COND(c, 0)) goto L_9e8fc;
L_9e14c:;
  /* 9e14c: sub x8, x29, #0x38 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 9e150: add x8, x8, x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 28)));
  /* 9e154: ldp x9, x25, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 9e158: ldr x21, [x8, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 9e15c: cmp x9, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 25));
  /* 9e160: stur x9, [x29, #-0x40] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-64)), ARC_X_R(c, 9));
  /* 9e164: ccmp x21, #0, #4, lo */
  if (ARC_COND(c, 3)) { (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(0)); }
  else { (c)->nf = 0; (c)->zf = 1;
          (c)->cf = 0; (c)->vf = 0; }
  /* 9e168: b.eq #0x9e140 */
  if (ARC_COND(c, 0)) goto L_9e140;
  /* 9e16c: mov x26, xzr */
  ARC_X_W(c, 26, ARC_X_R(c, 31));
L_9e170:;
  /* 9e170: mov x8, x9 */
  ARC_X_W(c, 8, ARC_X_R(c, 9));
  /* 9e174: ldrb w10, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* 9e178: stur x8, [x29, #-0x40] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-64)), ARC_X_R(c, 8));
  /* 9e17c: cmp w10, #0x2f */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(47));
  /* 9e180: b.hi #0x9e850 */
  if (ARC_COND(c, 8)) goto L_9e850;
  /* 9e184: adr x11, #0x9e194 */
  ARC_X_W(c, 11, (arc_image_bases[1] + UINT64_C(647572)));
  /* 9e188: ldrh w12, [x23, x10, lsl #1] */
  ARC_W_W(c, 12, arc_ld16((ARC_X_R(c, 23) + ((uint64_t)(ARC_X_R(c, 10)) << 1))));
  /* 9e18c: add x11, x11, x12, lsl #2 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 12)) << 2)));
  /* 9e190: br x11 */
  switch (ARC_X_R(c, 11) - arc_image_bases[1]) {
    case UINT64_C(649440): goto L_9e8e0;
    case UINT64_C(647572): goto L_9e194;
    case UINT64_C(648280): goto L_9e458;
    case UINT64_C(648644): goto L_9e5c4;
    case UINT64_C(648664): goto L_9e5d8;
    case UINT64_C(648300): goto L_9e46c;
    case UINT64_C(648484): goto L_9e524;
    case UINT64_C(648536): goto L_9e558;
    case UINT64_C(648792): goto L_9e658;
    case UINT64_C(648696): goto L_9e5f8;
    case UINT64_C(648016): goto L_9e350;
    case UINT64_C(648380): goto L_9e4bc;
    case UINT64_C(648128): goto L_9e3c0;
    case UINT64_C(647892): goto L_9e2d4;
    case UINT64_C(648604): goto L_9e59c;
    case UINT64_C(648628): goto L_9e5b4;
    case UINT64_C(649024): goto L_9e740;
    case UINT64_C(648856): goto L_9e698;
    case UINT64_C(647608): goto L_9e1b8;
    case UINT64_C(648176): goto L_9e3f0;
    case UINT64_C(649124): goto L_9e7a4;
    case UINT64_C(647736): goto L_9e238;
    case UINT64_C(648060): goto L_9e37c;
    case UINT64_C(649296): goto L_9e850;
    case UINT64_C(647948): goto L_9e30c;
    case UINT64_C(648424): goto L_9e4e8;
    case UINT64_C(647924): goto L_9e2f4;
    case UINT64_C(649212): goto L_9e7fc;
    case UINT64_C(647860): goto L_9e2b4;
    case UINT64_C(649564): goto L_9e95c;
    case UINT64_C(648524): goto L_9e54c;
    case UINT64_C(648480): goto L_9e520;
    case UINT64_C(648416): goto L_9e4e0;
    case UINT64_C(648508): goto L_9e53c;
    case UINT64_C(648132): goto L_9e3c4;
    case UINT64_C(648464): goto L_9e510;
    case UINT64_C(648360): goto L_9e4a8;
    case UINT64_C(648440): goto L_9e4f8;
    case UINT64_C(648212): goto L_9e414;
    case UINT64_C(648428): goto L_9e4ec;
    case UINT64_C(648496): goto L_9e530;
    case UINT64_C(648592): goto L_9e590;
    case UINT64_C(648624): goto L_9e5b0;
    case UINT64_C(648544): goto L_9e560;
    case UINT64_C(648400): goto L_9e4d0;
    case UINT64_C(648308): goto L_9e474;
    case UINT64_C(648568): goto L_9e578;
    case UINT64_C(648900): goto L_9e6c4;
    case UINT64_C(648076): goto L_9e38c;
    case UINT64_C(648876): goto L_9e6ac;
    case UINT64_C(648948): goto L_9e6f4;
    case UINT64_C(648652): goto L_9e5cc;
    case UINT64_C(648924): goto L_9e6dc;
    case UINT64_C(648720): goto L_9e610;
    case UINT64_C(648800): goto L_9e660;
    case UINT64_C(648672): goto L_9e5e0;
    case UINT64_C(648832): goto L_9e680;
    case UINT64_C(648376): goto L_9e4b8;
    case UINT64_C(648148): goto L_9e3d4;
    case UINT64_C(648104): goto L_9e3a8;
    case UINT64_C(648184): goto L_9e3f8;
    case UINT64_C(648332): goto L_9e48c;
    case UINT64_C(648048): goto L_9e370;
    case UINT64_C(648020): goto L_9e354;
    case UINT64_C(648968): goto L_9e708;
    case UINT64_C(649004): goto L_9e72c;
    case UINT64_C(647716): goto L_9e224;
    case UINT64_C(647584): goto L_9e1a0;
    case UINT64_C(649028): goto L_9e744;
    case UINT64_C(649676): goto L_9e9cc;
    case UINT64_C(647876): goto L_9e2c4;
    case UINT64_C(649620): goto L_9e994;
    case UINT64_C(648744): goto L_9e628;
    default: break;
  }
  arc_dispatch(c, ARC_X_R(c, 11)); return;
L_9e194:;
  /* 9e194: bti j */
  /* bti: no architectural effect here */
  /* 9e198: ldrb w3, [x22, #0x18] */
  ARC_W_W(c, 3, arc_ld8((ARC_X_R(c, 22) + INT64_C(24))));
  /* 9e19c: ldr x0, [x19, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
L_9e1a0:;
  /* 9e1a0: sub x1, x29, #0x40 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 9e1a4: mov x2, x25 */
  ARC_X_W(c, 2, ARC_X_R(c, 25));
  /* 9e1a8: mov x4, xzr */
  ARC_X_W(c, 4, ARC_X_R(c, 31));
  /* 9e1ac: bl #0x9eecc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(647600));
  fn1_9eecc(c);
  /* 9e1b0: mov x26, x0 */
  ARC_X_W(c, 26, ARC_X_R(c, 0));
  /* 9e1b4: b #0x9e8e0 */
  goto L_9e8e0;
L_9e1b8:;
  /* 9e1b8: bti j */
  /* bti: no architectural effect here */
  /* 9e1bc: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 9e1c0: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 9e1c4: bl #0x9f258 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(647624));
  fn1_9f258(c);
  /* 9e1c8: ldur x10, [x29, #-0x40] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 9e1cc: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* 9e1d0: mov x9, #-7 */
  ARC_X_W(c, 9, UINT64_C(18446744073709551609));
  /* 9e1d4: mov x12, x10 */
  ARC_X_W(c, 12, ARC_X_R(c, 10));
L_9e1d8:;
  /* 9e1d8: cmp x12, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 25));
  /* 9e1dc: b.eq #0x9eab8 */
  if (ARC_COND(c, 0)) goto L_9eab8;
  /* 9e1e0: ldrb w11, [x12], #1 */
  { const uint64_t _a = ARC_X_R(c, 12);
    ARC_X_W(c, 12, ARC_X_R(c, 12) + INT64_C(1));
    ARC_W_W(c, 11, arc_ld8(_a));
  }
  /* 9e1e4: add x9, x9, #7 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(7)));
  /* 9e1e8: add x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* 9e1ec: and x13, x11, #0x7f */
  ARC_X_W(c, 13, (ARC_X_R(c, 11) & UINT64_C(127)));
  /* 9e1f0: lsl x13, x13, x9 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 13)) << ((ARC_X_R(c, 9)) & 63)));
  /* 9e1f4: orr x8, x13, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 13) | ARC_X_R(c, 8)));
  /* 9e1f8: tbnz w11, #7, #0x9e1d8 */
  if (((ARC_W_R(c, 11)) >> 7 & 1) != 0) goto L_9e1d8;
  /* 9e1fc: cmp x0, #0x60 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(96));
  /* 9e200: stur x10, [x29, #-0x40] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-64)), ARC_X_R(c, 10));
  /* 9e204: b.hs #0x9ea44 */
  if (ARC_COND(c, 2)) goto L_9ea44;
  /* 9e208: add x10, x9, #7 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(7)));
  /* 9e20c: mov x12, #-1 */
  ARC_X_W(c, 12, UINT64_C(18446744073709551615));
  /* 9e210: cmp x9, #0x39 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(57));
  /* 9e214: mov w9, #0x3f */
  ARC_W_W(c, 9, UINT64_C(63));
  /* 9e218: lsl x10, x12, x10 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 12)) << ((ARC_X_R(c, 10)) & 63)));
  /* 9e21c: ccmp w11, w9, #0, lo */
  if (ARC_COND(c, 3)) { (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 9)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* 9e220: csel w9, w10, wzr, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 31)));
L_9e224:;
  /* 9e224: ldr w10, [x22, #0x2c] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 22) + INT64_C(44))));
  /* 9e228: orr w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 9)));
  /* 9e22c: mul w8, w10, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 10)) * (uint32_t)(ARC_W_R(c, 8))));
  /* 9e230: stp w0, w8, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    arc_st32(_pa, ARC_W_R(c, 0));
    arc_st32(_pa + 4, ARC_W_R(c, 8));
  }
  /* 9e234: b #0x9e8e0 */
  goto L_9e8e0;
L_9e238:;
  /* 9e238: bti j */
  /* bti: no architectural effect here */
  /* 9e23c: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 9e240: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 9e244: bl #0x9f258 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(647752));
  fn1_9f258(c);
  /* 9e248: cmp x0, #0x60 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(96));
  /* 9e24c: b.hs #0x9e968 */
  if (ARC_COND(c, 2)) goto L_9e968;
  /* 9e250: ldur x9, [x29, #-0x40] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 9e254: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* 9e258: mov x10, #-7 */
  ARC_X_W(c, 10, UINT64_C(18446744073709551609));
  /* 9e25c: mov x12, x9 */
  ARC_X_W(c, 12, ARC_X_R(c, 9));
L_9e260:;
  /* 9e260: cmp x12, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 25));
  /* 9e264: b.eq #0x9eb54 */
  if (ARC_COND(c, 0)) goto L_9eb54;
  /* 9e268: ldrb w11, [x12], #1 */
  { const uint64_t _a = ARC_X_R(c, 12);
    ARC_X_W(c, 12, ARC_X_R(c, 12) + INT64_C(1));
    ARC_W_W(c, 11, arc_ld8(_a));
  }
  /* 9e26c: add x10, x10, #7 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(7)));
  /* 9e270: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 9e274: and x13, x11, #0x7f */
  ARC_X_W(c, 13, (ARC_X_R(c, 11) & UINT64_C(127)));
  /* 9e278: lsl x13, x13, x10 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 13)) << ((ARC_X_R(c, 10)) & 63)));
  /* 9e27c: orr x8, x13, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 13) | ARC_X_R(c, 8)));
  /* 9e280: tbnz w11, #7, #0x9e260 */
  if (((ARC_W_R(c, 11)) >> 7 & 1) != 0) goto L_9e260;
  /* 9e284: add x12, x24, x0, lsl #4 */
  ARC_X_W(c, 12, (ARC_X_R(c, 24) + ((uint64_t)(ARC_X_R(c, 0)) << 4)));
  /* 9e288: cmp x10, #0x39 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(57));
  /* 9e28c: add w10, w10, #7 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(7)));
  /* 9e290: mov x13, #-1 */
  ARC_X_W(c, 13, UINT64_C(18446744073709551615));
  /* 9e294: mov w14, #0x3f */
  ARC_W_W(c, 14, UINT64_C(63));
  /* 9e298: stur x9, [x29, #-0x40] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-64)), ARC_X_R(c, 9));
  /* 9e29c: lsl x13, x13, x10 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 13)) << ((ARC_X_R(c, 10)) & 63)));
  /* 9e2a0: ldrb w15, [x12, #4] */
  ARC_W_W(c, 15, arc_ld8((ARC_X_R(c, 12) + INT64_C(4))));
  /* 9e2a4: ccmp w11, w14, #0, lo */
  if (ARC_COND(c, 3)) { (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 14)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* 9e2a8: ldrsw x10, [x22, #0x2c] */
  ARC_X_W(c, 10, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 22) + INT64_C(44)))));
  /* 9e2ac: csel x11, x13, xzr, hi */
  ARC_X_W(c, 11, (ARC_COND(c, 8) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 31)));
  /* 9e2b0: tbnz w15, #0, #0x9e2c8 */
  if (((ARC_W_R(c, 15)) >> 0 & 1) != 0) goto L_9e2c8;
L_9e2b4:;
  /* 9e2b4: ldr x13, [x19, #0x38] */
  ARC_X_W(c, 13, arc_ld64((ARC_X_R(c, 19) + INT64_C(56))));
  /* 9e2b8: ldr q0, [x12] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 12)), arc_ld64(ARC_X_R(c, 12) + 8));
  /* 9e2bc: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* 9e2c0: strb w9, [x12, #4] */
  arc_st8((ARC_X_R(c, 12) + INT64_C(4)), ARC_W_R(c, 9));
L_9e2c4:;
  /* 9e2c4: str q0, [x13, x0, lsl #4] */
  arc_st64((ARC_X_R(c, 13) + ((uint64_t)(ARC_X_R(c, 0)) << 4)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 13) + ((uint64_t)(ARC_X_R(c, 0)) << 4)) + 8, (c)->q[0].u64[1]);
L_9e2c8:;
  /* 9e2c8: orr x8, x8, x11 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ARC_X_R(c, 11)));
  /* 9e2cc: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 9e2d0: b #0x9e730 */
  goto L_9e730;
L_9e2d4:;
  /* 9e2d4: bti j */
  /* bti: no architectural effect here */
  /* 9e2d8: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 9e2dc: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 9e2e0: bl #0x9f258 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(647908));
  fn1_9f258(c);
  /* 9e2e4: cmp x0, #0x60 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(96));
  /* 9e2e8: b.hs #0x9e920 */
  if (ARC_COND(c, 2)) goto L_9e920;
  /* 9e2ec: str w0, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 0));
  /* 9e2f0: b #0x9e8e0 */
  goto L_9e8e0;
L_9e2f4:;
  /* 9e2f4: bti j */
  /* bti: no architectural effect here */
  /* 9e2f8: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 9e2fc: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 9e300: bl #0x9f258 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(647940));
  fn1_9f258(c);
  /* 9e304: str w0, [x20, #0x10] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(16)), ARC_W_R(c, 0));
  /* 9e308: b #0x9e8e0 */
  goto L_9e8e0;
L_9e30c:;
  /* 9e30c: bti j */
  /* bti: no architectural effect here */
  /* 9e310: ldrb w8, [x20, #0x23c] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(572))));
  /* 9e314: tbnz w8, #0, #0x9e32c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_9e32c;
  /* 9e318: ldp x9, x8, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 9e31c: ldr q0, [x8] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 8)), arc_ld64(ARC_X_R(c, 8) + 8));
  /* 9e320: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 9e324: strb w8, [x20, #0x23c] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(572)), ARC_W_R(c, 8));
  /* 9e328: str q0, [x9] */
  arc_st64(ARC_X_R(c, 9), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 9) + 8, (c)->q[0].u64[1]);
L_9e32c:;
  /* 9e32c: ldr x9, [x19, #0x20] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* 9e330: ldr x8, [x20, #0x240] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(576))));
  /* 9e334: ldr x9, [x9, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(24))));
  /* 9e338: eor x8, x8, #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) ^ UINT64_C(3)));
  /* 9e33c: str x8, [x20, #0x240] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(576)), ARC_X_R(c, 8));
  /* 9e340: add x9, x26, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 26) + ARC_X_R(c, 9)));
  /* 9e344: sub x8, x9, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) - UINT64_C(4)));
  /* 9e348: str x8, [x20, #0x618] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(1560)), ARC_X_R(c, 8));
  /* 9e34c: b #0x9e8e0 */
  goto L_9e8e0;
L_9e350:;
  /* 9e350: bti j */
  /* bti: no architectural effect here */
L_9e354:;
  /* 9e354: sub x27, sp, #0x630 */
  ARC_X_W(c, 27, ((c)->sp - UINT64_C(1584)));
  /* 9e358: mov sp, x27 */
  (c)->sp = (uint64_t)(ARC_X_R(c, 27));
  /* 9e35c: ldr x8, [x19, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(48))));
  /* 9e360: mov x0, x27 */
  ARC_X_W(c, 0, ARC_X_R(c, 27));
  /* 9e364: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 9e368: mov w2, #0x620 */
  ARC_W_W(c, 2, UINT64_C(1568));
  /* 9e36c: str x8, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 8));
  }
L_9e370:;
  /* 9e370: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(648052));
  fn1_1449d8(c);
  /* 9e374: str x27, [x19, #0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)), ARC_X_R(c, 27));
  /* 9e378: b #0x9e8e0 */
  goto L_9e8e0;
L_9e37c:;
  /* 9e37c: bti j */
  /* bti: no architectural effect here */
  /* 9e380: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 9e384: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 9e388: bl #0x9f258 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(648076));
  fn1_9f258(c);
L_9e38c:;
  /* 9e38c: cmp x0, #0x60 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(96));
  /* 9e390: b.hs #0x9e904 */
  if (ARC_COND(c, 2)) goto L_9e904;
  /* 9e394: add x8, x24, x0, lsl #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + ((uint64_t)(ARC_X_R(c, 0)) << 4)));
  /* 9e398: ldrb w9, [x8, #4] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(4))));
  /* 9e39c: tbnz w9, #0, #0x9e3b4 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_9e3b4;
  /* 9e3a0: ldr x10, [x19, #0x38] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(56))));
  /* 9e3a4: ldr q0, [x8] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 8)), arc_ld64(ARC_X_R(c, 8) + 8));
L_9e3a8:;
  /* 9e3a8: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* 9e3ac: strb w9, [x8, #4] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(4)), ARC_W_R(c, 9));
  /* 9e3b0: str q0, [x10, x0, lsl #4] */
  arc_st64((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 0)) << 4)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 0)) << 4)) + 8, (c)->q[0].u64[1]);
L_9e3b4:;
  /* 9e3b4: ldur x9, [x29, #-0x40] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 9e3b8: mov w10, #7 */
  ARC_W_W(c, 10, UINT64_C(7));
  /* 9e3bc: b #0x9e780 */
  goto L_9e780;
L_9e3c0:;
  /* 9e3c0: bti j */
  /* bti: no architectural effect here */
L_9e3c4:;
  /* 9e3c4: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 9e3c8: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 9e3cc: bl #0x9f258 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(648144));
  fn1_9f258(c);
  /* 9e3d0: mov x27, x0 */
  ARC_X_W(c, 27, ARC_X_R(c, 0));
L_9e3d4:;
  /* 9e3d4: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 9e3d8: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 9e3dc: bl #0x9f258 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(648160));
  fn1_9f258(c);
  /* 9e3e0: cmp x27, #0x60 */
  (void)arc_sub64(c, ARC_X_R(c, 27), UINT64_C(96));
  /* 9e3e4: b.hs #0x9e94c */
  if (ARC_COND(c, 2)) goto L_9e94c;
  /* 9e3e8: stp w27, w0, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    arc_st32(_pa, ARC_W_R(c, 27));
    arc_st32(_pa + 4, ARC_W_R(c, 0));
  }
  /* 9e3ec: b #0x9e8e0 */
  goto L_9e8e0;
L_9e3f0:;
  /* 9e3f0: bti j */
  /* bti: no architectural effect here */
  /* 9e3f4: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
L_9e3f8:;
  /* 9e3f8: mov x10, #-7 */
  ARC_X_W(c, 10, UINT64_C(18446744073709551609));
  /* 9e3fc: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
L_9e400:;
  /* 9e400: cmp x11, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 25));
  /* 9e404: b.eq #0x9eaec */
  if (ARC_COND(c, 0)) goto L_9eaec;
  /* 9e408: ldrb w12, [x11], #1 */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(1));
    ARC_W_W(c, 12, arc_ld8(_a));
  }
  /* 9e40c: add x10, x10, #7 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(7)));
  /* 9e410: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
L_9e414:;
  /* 9e414: and x13, x12, #0x7f */
  ARC_X_W(c, 13, (ARC_X_R(c, 12) & UINT64_C(127)));
  /* 9e418: lsl x13, x13, x10 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 13)) << ((ARC_X_R(c, 10)) & 63)));
  /* 9e41c: orr x9, x13, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 13) | ARC_X_R(c, 9)));
  /* 9e420: tbnz w12, #7, #0x9e400 */
  if (((ARC_W_R(c, 12)) >> 7 & 1) != 0) goto L_9e400;
  /* 9e424: add w11, w10, #7 */
  ARC_W_W(c, 11, (ARC_W_R(c, 10) + UINT64_C(7)));
  /* 9e428: mov x13, #-1 */
  ARC_X_W(c, 13, UINT64_C(18446744073709551615));
  /* 9e42c: cmp x10, #0x39 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(57));
  /* 9e430: mov w10, #0x3f */
  ARC_W_W(c, 10, UINT64_C(63));
  /* 9e434: lsl x11, x13, x11 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 13)) << ((ARC_X_R(c, 11)) & 63)));
  /* 9e438: stur x8, [x29, #-0x40] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-64)), ARC_X_R(c, 8));
  /* 9e43c: ccmp w12, w10, #0, lo */
  if (ARC_COND(c, 3)) { (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 10)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* 9e440: csel w10, w11, wzr, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 31)));
  /* 9e444: ldr w11, [x22, #0x2c] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 22) + INT64_C(44))));
  /* 9e448: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* 9e44c: mul w9, w11, w9 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 11)) * (uint32_t)(ARC_W_R(c, 9))));
  /* 9e450: str w9, [x20, #4] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(4)), ARC_W_R(c, 9));
  /* 9e454: b #0x9e8e0 */
  goto L_9e8e0;
L_9e458:;
  /* 9e458: bti j */
  /* bti: no architectural effect here */
  /* 9e45c: ldrb w8, [x9, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + INT64_C(1))));
  /* 9e460: ldr w10, [x22, #0x28] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 22) + INT64_C(40))));
  /* 9e464: add x9, x9, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* 9e468: b #0x9e5e8 */
  goto L_9e5e8;
L_9e46c:;
  /* 9e46c: bti j */
  /* bti: no architectural effect here */
  /* 9e470: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
L_9e474:;
  /* 9e474: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 9e478: bl #0x9f258 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(648316));
  fn1_9f258(c);
  /* 9e47c: mov x27, x0 */
  ARC_X_W(c, 27, ARC_X_R(c, 0));
  /* 9e480: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 9e484: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 9e488: bl #0x9f258 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(648332));
  fn1_9f258(c);
L_9e48c:;
  /* 9e48c: cmp x27, #0x60 */
  (void)arc_sub64(c, ARC_X_R(c, 27), UINT64_C(96));
  /* 9e490: b.hs #0x9e930 */
  if (ARC_COND(c, 2)) goto L_9e930;
  /* 9e494: add x8, x24, x27, lsl #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + ((uint64_t)(ARC_X_R(c, 27)) << 4)));
  /* 9e498: ldrsw x9, [x22, #0x2c] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 22) + INT64_C(44)))));
  /* 9e49c: ldrb w10, [x8, #4] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(4))));
  /* 9e4a0: tbnz w10, #0, #0x9e8d0 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_9e8d0;
  /* 9e4a4: ldr x11, [x19, #0x38] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 19) + INT64_C(56))));
L_9e4a8:;
  /* 9e4a8: ldr q0, [x8] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 8)), arc_ld64(ARC_X_R(c, 8) + 8));
  /* 9e4ac: mov w10, #1 */
  ARC_W_W(c, 10, UINT64_C(1));
  /* 9e4b0: strb w10, [x8, #4] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(4)), ARC_W_R(c, 10));
  /* 9e4b4: str q0, [x11, x27, lsl #4] */
  arc_st64((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 27)) << 4)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 27)) << 4)) + 8, (c)->q[0].u64[1]);
L_9e4b8:;
  /* 9e4b8: b #0x9e8d0 */
  goto L_9e8d0;
L_9e4bc:;
  /* 9e4bc: bti j */
  /* bti: no architectural effect here */
  /* 9e4c0: ldr x8, [x19, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(48))));
  /* 9e4c4: cbz x8, #0x9ea90 */
  if ((ARC_X_R(c, 8)) == 0) goto L_9ea90;
  /* 9e4c8: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* 9e4cc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
L_9e4d0:;
  /* 9e4d0: mov w2, #0x620 */
  ARC_W_W(c, 2, UINT64_C(1568));
  /* 9e4d4: mov x27, x8 */
  ARC_X_W(c, 27, ARC_X_R(c, 8));
  /* 9e4d8: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(648412));
  fn1_1449d8(c);
  /* 9e4dc: ldr x27, [x27] */
  ARC_X_W(c, 27, arc_ld64(ARC_X_R(c, 27)));
L_9e4e0:;
  /* 9e4e0: str x27, [x19, #0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)), ARC_X_R(c, 27));
  /* 9e4e4: b #0x9e8e0 */
  goto L_9e8e0;
L_9e4e8:;
  /* 9e4e8: bti j */
  /* bti: no architectural effect here */
L_9e4ec:;
  /* 9e4ec: ldr w8, [x19, #0x2c] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(44))));
  /* 9e4f0: cmp w8, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(4));
  /* 9e4f4: b.ne #0x9e8e0 */
  if (ARC_COND(c, 1)) goto L_9e8e0;
L_9e4f8:;
  /* 9e4f8: ldrb w8, [x20, #0x23c] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(572))));
  /* 9e4fc: tbnz w8, #0, #0x9e514 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_9e514;
  /* 9e500: ldp x9, x8, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 9e504: ldr q0, [x8] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 8)), arc_ld64(ARC_X_R(c, 8) + 8));
  /* 9e508: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 9e50c: strb w8, [x20, #0x23c] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(572)), ARC_W_R(c, 8));
L_9e510:;
  /* 9e510: str q0, [x9] */
  arc_st64(ARC_X_R(c, 9), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 9) + 8, (c)->q[0].u64[1]);
L_9e514:;
  /* 9e514: ldr x8, [x20, #0x240] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(576))));
  /* 9e518: eor x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) ^ UINT64_C(1)));
  /* 9e51c: str x8, [x20, #0x240] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(576)), ARC_X_R(c, 8));
L_9e520:;
  /* 9e520: b #0x9e8e0 */
  goto L_9e8e0;
L_9e524:;
  /* 9e524: bti j */
  /* bti: no architectural effect here */
  /* 9e528: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 9e52c: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
L_9e530:;
  /* 9e530: bl #0x9f258 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(648500));
  fn1_9f258(c);
  /* 9e534: cmp x0, #0x60 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(96));
  /* 9e538: b.hs #0x9e9d8 */
  if (ARC_COND(c, 2)) goto L_9e9d8;
L_9e53c:;
  /* 9e53c: add x8, x24, x0, lsl #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + ((uint64_t)(ARC_X_R(c, 0)) << 4)));
  /* 9e540: ldrb w9, [x8, #4] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(4))));
  /* 9e544: cmp w9, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(1));
  /* 9e548: b.ne #0x9e8e0 */
  if (ARC_COND(c, 1)) goto L_9e8e0;
L_9e54c:;
  /* 9e54c: ldr x9, [x19, #0x38] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(56))));
  /* 9e550: ldr q0, [x9, x0, lsl #4] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 0)) << 4))), arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 0)) << 4)) + 8));
  /* 9e554: b #0x9e884 */
  goto L_9e884;
L_9e558:;
  /* 9e558: bti j */
  /* bti: no architectural effect here */
  /* 9e55c: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
L_9e560:;
  /* 9e560: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 9e564: bl #0x9f258 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(648552));
  fn1_9f258(c);
  /* 9e568: cmp x0, #0x60 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(96));
  /* 9e56c: b.hs #0x9e9f4 */
  if (ARC_COND(c, 2)) goto L_9e9f4;
  /* 9e570: add x8, x24, x0, lsl #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + ((uint64_t)(ARC_X_R(c, 0)) << 4)));
  /* 9e574: ldrb w9, [x8, #4] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(4))));
L_9e578:;
  /* 9e578: tbnz w9, #0, #0x9e590 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_9e590;
  /* 9e57c: ldr x10, [x19, #0x38] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(56))));
  /* 9e580: ldr q0, [x8] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 8)), arc_ld64(ARC_X_R(c, 8) + 8));
  /* 9e584: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* 9e588: strb w9, [x8, #4] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(4)), ARC_W_R(c, 9));
  /* 9e58c: str q0, [x10, x0, lsl #4] */
  arc_st64((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 0)) << 4)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 0)) << 4)) + 8, (c)->q[0].u64[1]);
L_9e590:;
  /* 9e590: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* 9e594: str w9, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 9e598: b #0x9e8e0 */
  goto L_9e8e0;
L_9e59c:;
  /* 9e59c: bti j */
  /* bti: no architectural effect here */
  /* 9e5a0: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 9e5a4: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 9e5a8: bl #0x9f258 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(648620));
  fn1_9f258(c);
  /* 9e5ac: str w0, [x20, #4] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(4)), ARC_W_R(c, 0));
L_9e5b0:;
  /* 9e5b0: b #0x9e8e0 */
  goto L_9e8e0;
L_9e5b4:;
  /* 9e5b4: bti j */
  /* bti: no architectural effect here */
  /* 9e5b8: str wzr, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 31));
  /* 9e5bc: str x8, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 8));
  /* 9e5c0: b #0x9e788 */
  goto L_9e788;
L_9e5c4:;
  /* 9e5c4: bti j */
  /* bti: no architectural effect here */
  /* 9e5c8: ldurh w8, [x9, #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 9) + INT64_C(1))));
L_9e5cc:;
  /* 9e5cc: ldr w10, [x22, #0x28] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 22) + INT64_C(40))));
  /* 9e5d0: add x9, x9, #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3)));
  /* 9e5d4: b #0x9e5e8 */
  goto L_9e5e8;
L_9e5d8:;
  /* 9e5d8: bti j */
  /* bti: no architectural effect here */
  /* 9e5dc: ldur w8, [x9, #1] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 9) + INT64_C(1))));
L_9e5e0:;
  /* 9e5e0: ldr w10, [x22, #0x28] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 22) + INT64_C(40))));
  /* 9e5e4: add x9, x9, #5 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(5)));
L_9e5e8:;
  /* 9e5e8: mul w8, w10, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 10)) * (uint32_t)(ARC_W_R(c, 8))));
  /* 9e5ec: add x26, x26, x8 */
  ARC_X_W(c, 26, (ARC_X_R(c, 26) + ARC_X_R(c, 8)));
  /* 9e5f0: stur x9, [x29, #-0x40] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-64)), ARC_X_R(c, 9));
  /* 9e5f4: b #0x9e8e0 */
  goto L_9e8e0;
L_9e5f8:;
  /* 9e5f8: bti j */
  /* bti: no architectural effect here */
  /* 9e5fc: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 9e600: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 9e604: bl #0x9f258 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(648712));
  fn1_9f258(c);
  /* 9e608: mov x27, x0 */
  ARC_X_W(c, 27, ARC_X_R(c, 0));
  /* 9e60c: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
L_9e610:;
  /* 9e610: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 9e614: bl #0x9f258 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(648728));
  fn1_9f258(c);
  /* 9e618: cmp x27, #0x60 */
  (void)arc_sub64(c, ARC_X_R(c, 27), UINT64_C(96));
  /* 9e61c: b.hs #0x9e9a0 */
  if (ARC_COND(c, 2)) goto L_9e9a0;
  /* 9e620: cmp x0, #0x60 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(96));
  /* 9e624: b.hs #0x9ea60 */
  if (ARC_COND(c, 2)) goto L_9ea60;
L_9e628:;
  /* 9e628: add x8, x24, x27, lsl #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + ((uint64_t)(ARC_X_R(c, 27)) << 4)));
  /* 9e62c: ldrb w9, [x8, #4] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(4))));
  /* 9e630: tbnz w9, #0, #0x9e648 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_9e648;
  /* 9e634: ldr x10, [x19, #0x38] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(56))));
  /* 9e638: ldr q0, [x8] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 8)), arc_ld64(ARC_X_R(c, 8) + 8));
  /* 9e63c: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* 9e640: strb w9, [x8, #4] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(4)), ARC_W_R(c, 9));
  /* 9e644: str q0, [x10, x27, lsl #4] */
  arc_st64((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 27)) << 4)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 27)) << 4)) + 8, (c)->q[0].u64[1]);
L_9e648:;
  /* 9e648: mov w9, #5 */
  ARC_W_W(c, 9, UINT64_C(5));
  /* 9e64c: str x0, [x8, #8] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(8)), ARC_X_R(c, 0));
  /* 9e650: str w9, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 9e654: b #0x9e8e0 */
  goto L_9e8e0;
L_9e658:;
  /* 9e658: bti j */
  /* bti: no architectural effect here */
  /* 9e65c: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
L_9e660:;
  /* 9e660: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 9e664: bl #0x9f258 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(648808));
  fn1_9f258(c);
  /* 9e668: cmp x0, #0x60 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(96));
  /* 9e66c: b.hs #0x9ea34 */
  if (ARC_COND(c, 2)) goto L_9ea34;
  /* 9e670: add x8, x24, x0, lsl #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + ((uint64_t)(ARC_X_R(c, 0)) << 4)));
  /* 9e674: ldrb w9, [x8, #4] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(4))));
  /* 9e678: tbnz w9, #0, #0x9e690 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_9e690;
  /* 9e67c: ldr x10, [x19, #0x38] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(56))));
L_9e680:;
  /* 9e680: ldr q0, [x8] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 8)), arc_ld64(ARC_X_R(c, 8) + 8));
  /* 9e684: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* 9e688: strb w9, [x8, #4] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(4)), ARC_W_R(c, 9));
  /* 9e68c: str q0, [x10, x0, lsl #4] */
  arc_st64((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 0)) << 4)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 0)) << 4)) + 8, (c)->q[0].u64[1]);
L_9e690:;
  /* 9e690: str wzr, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 31));
  /* 9e694: b #0x9e8e0 */
  goto L_9e8e0;
L_9e698:;
  /* 9e698: bti j */
  /* bti: no architectural effect here */
  /* 9e69c: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 9e6a0: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 9e6a4: bl #0x9f258 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(648872));
  fn1_9f258(c);
  /* 9e6a8: cmp x0, #0x60 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(96));
L_9e6ac:;
  /* 9e6ac: b.hs #0x9e9bc */
  if (ARC_COND(c, 2)) goto L_9e9bc;
  /* 9e6b0: ldur x9, [x29, #-0x40] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 9e6b4: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* 9e6b8: mov x10, #-7 */
  ARC_X_W(c, 10, UINT64_C(18446744073709551609));
  /* 9e6bc: mov x12, x9 */
  ARC_X_W(c, 12, ARC_X_R(c, 9));
L_9e6c0:;
  /* 9e6c0: cmp x12, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 25));
L_9e6c4:;
  /* 9e6c4: b.eq #0x9eb20 */
  if (ARC_COND(c, 0)) goto L_9eb20;
  /* 9e6c8: ldrb w11, [x12], #1 */
  { const uint64_t _a = ARC_X_R(c, 12);
    ARC_X_W(c, 12, ARC_X_R(c, 12) + INT64_C(1));
    ARC_W_W(c, 11, arc_ld8(_a));
  }
  /* 9e6cc: add x10, x10, #7 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(7)));
  /* 9e6d0: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 9e6d4: and x13, x11, #0x7f */
  ARC_X_W(c, 13, (ARC_X_R(c, 11) & UINT64_C(127)));
  /* 9e6d8: lsl x13, x13, x10 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 13)) << ((ARC_X_R(c, 10)) & 63)));
L_9e6dc:;
  /* 9e6dc: orr x8, x13, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 13) | ARC_X_R(c, 8)));
  /* 9e6e0: tbnz w11, #7, #0x9e6c0 */
  if (((ARC_W_R(c, 11)) >> 7 & 1) != 0) goto L_9e6c0;
  /* 9e6e4: add x12, x24, x0, lsl #4 */
  ARC_X_W(c, 12, (ARC_X_R(c, 24) + ((uint64_t)(ARC_X_R(c, 0)) << 4)));
  /* 9e6e8: cmp x10, #0x39 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(57));
  /* 9e6ec: add w10, w10, #7 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(7)));
  /* 9e6f0: mov x13, #-1 */
  ARC_X_W(c, 13, UINT64_C(18446744073709551615));
L_9e6f4:;
  /* 9e6f4: mov w14, #0x3f */
  ARC_W_W(c, 14, UINT64_C(63));
  /* 9e6f8: stur x9, [x29, #-0x40] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-64)), ARC_X_R(c, 9));
  /* 9e6fc: lsl x13, x13, x10 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 13)) << ((ARC_X_R(c, 10)) & 63)));
  /* 9e700: ldrb w15, [x12, #4] */
  ARC_W_W(c, 15, arc_ld8((ARC_X_R(c, 12) + INT64_C(4))));
  /* 9e704: ccmp w11, w14, #0, lo */
  if (ARC_COND(c, 3)) { (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 14)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
L_9e708:;
  /* 9e708: ldrsw x10, [x22, #0x2c] */
  ARC_X_W(c, 10, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 22) + INT64_C(44)))));
  /* 9e70c: csel x11, x13, xzr, hi */
  ARC_X_W(c, 11, (ARC_COND(c, 8) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 31)));
  /* 9e710: tbnz w15, #0, #0x9e728 */
  if (((ARC_W_R(c, 15)) >> 0 & 1) != 0) goto L_9e728;
  /* 9e714: ldr x13, [x19, #0x38] */
  ARC_X_W(c, 13, arc_ld64((ARC_X_R(c, 19) + INT64_C(56))));
  /* 9e718: ldr q0, [x12] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 12)), arc_ld64(ARC_X_R(c, 12) + 8));
  /* 9e71c: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* 9e720: strb w9, [x12, #4] */
  arc_st8((ARC_X_R(c, 12) + INT64_C(4)), ARC_W_R(c, 9));
  /* 9e724: str q0, [x13, x0, lsl #4] */
  arc_st64((ARC_X_R(c, 13) + ((uint64_t)(ARC_X_R(c, 0)) << 4)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 13) + ((uint64_t)(ARC_X_R(c, 0)) << 4)) + 8, (c)->q[0].u64[1]);
L_9e728:;
  /* 9e728: orr x8, x8, x11 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ARC_X_R(c, 11)));
L_9e72c:;
  /* 9e72c: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
L_9e730:;
  /* 9e730: mul x8, x8, x10 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 10))));
  /* 9e734: str w9, [x12] */
  arc_st32(ARC_X_R(c, 12), ARC_W_R(c, 9));
  /* 9e738: str x8, [x12, #8] */
  arc_st64((ARC_X_R(c, 12) + INT64_C(8)), ARC_X_R(c, 8));
  /* 9e73c: b #0x9e8e0 */
  goto L_9e8e0;
L_9e740:;
  /* 9e740: bti j */
  /* bti: no architectural effect here */
L_9e744:;
  /* 9e744: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 9e748: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 9e74c: bl #0x9f258 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(649040));
  fn1_9f258(c);
  /* 9e750: cmp x0, #0x60 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(96));
  /* 9e754: b.hs #0x9ea04 */
  if (ARC_COND(c, 2)) goto L_9ea04;
  /* 9e758: add x8, x24, x0, lsl #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + ((uint64_t)(ARC_X_R(c, 0)) << 4)));
  /* 9e75c: ldrb w9, [x8, #4] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(4))));
  /* 9e760: tbnz w9, #0, #0x9e778 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_9e778;
  /* 9e764: ldr x10, [x19, #0x38] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(56))));
  /* 9e768: ldr q0, [x8] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 8)), arc_ld64(ARC_X_R(c, 8) + 8));
  /* 9e76c: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* 9e770: strb w9, [x8, #4] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(4)), ARC_W_R(c, 9));
  /* 9e774: str q0, [x10, x0, lsl #4] */
  arc_st64((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 0)) << 4)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 0)) << 4)) + 8, (c)->q[0].u64[1]);
L_9e778:;
  /* 9e778: ldur x9, [x29, #-0x40] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 9e77c: mov w10, #6 */
  ARC_W_W(c, 10, UINT64_C(6));
L_9e780:;
  /* 9e780: str w10, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* 9e784: str x9, [x8, #8] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(8)), ARC_X_R(c, 9));
L_9e788:;
  /* 9e788: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 9e78c: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 9e790: bl #0x9f258 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(649108));
  fn1_9f258(c);
  /* 9e794: ldur x8, [x29, #-0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 9e798: add x8, x8, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 0)));
  /* 9e79c: stur x8, [x29, #-0x40] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-64)), ARC_X_R(c, 8));
  /* 9e7a0: b #0x9e8e0 */
  goto L_9e8e0;
L_9e7a4:;
  /* 9e7a4: bti j */
  /* bti: no architectural effect here */
  /* 9e7a8: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 9e7ac: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 9e7b0: bl #0x9f258 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(649140));
  fn1_9f258(c);
  /* 9e7b4: mov x27, x0 */
  ARC_X_W(c, 27, ARC_X_R(c, 0));
  /* 9e7b8: cmp x0, #0x60 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(96));
  /* 9e7bc: b.hs #0x9ea14 */
  if (ARC_COND(c, 2)) goto L_9ea14;
  /* 9e7c0: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 9e7c4: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 9e7c8: bl #0x9f258 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(649164));
  fn1_9f258(c);
  /* 9e7cc: add x8, x24, x27, lsl #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + ((uint64_t)(ARC_X_R(c, 27)) << 4)));
  /* 9e7d0: ldrsw x9, [x22, #0x2c] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 22) + INT64_C(44)))));
  /* 9e7d4: ldrb w10, [x8, #4] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(4))));
  /* 9e7d8: tbnz w10, #0, #0x9e7f0 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_9e7f0;
  /* 9e7dc: ldr x11, [x19, #0x38] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 19) + INT64_C(56))));
  /* 9e7e0: ldr q0, [x8] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 8)), arc_ld64(ARC_X_R(c, 8) + 8));
  /* 9e7e4: mov w10, #1 */
  ARC_W_W(c, 10, UINT64_C(1));
  /* 9e7e8: strb w10, [x8, #4] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(4)), ARC_W_R(c, 10));
  /* 9e7ec: str q0, [x11, x27, lsl #4] */
  arc_st64((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 27)) << 4)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 27)) << 4)) + 8, (c)->q[0].u64[1]);
L_9e7f0:;
  /* 9e7f0: mul x9, x0, x9 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 0)) * (uint64_t)(ARC_X_R(c, 9))));
  /* 9e7f4: mov w10, #4 */
  ARC_W_W(c, 10, UINT64_C(4));
  /* 9e7f8: b #0x9e8d8 */
  goto L_9e8d8;
L_9e7fc:;
  /* 9e7fc: bti j */
  /* bti: no architectural effect here */
  /* 9e800: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 9e804: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 9e808: bl #0x9f258 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(649228));
  fn1_9f258(c);
  /* 9e80c: cmp x0, #0x60 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(96));
  /* 9e810: b.hs #0x9e984 */
  if (ARC_COND(c, 2)) goto L_9e984;
  /* 9e814: mov x27, x0 */
  ARC_X_W(c, 27, ARC_X_R(c, 0));
  /* 9e818: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 9e81c: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 9e820: bl #0x9f258 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(649252));
  fn1_9f258(c);
  /* 9e824: add x8, x24, x27, lsl #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + ((uint64_t)(ARC_X_R(c, 27)) << 4)));
  /* 9e828: ldrsw x9, [x22, #0x2c] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 22) + INT64_C(44)))));
  /* 9e82c: ldrb w10, [x8, #4] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(4))));
  /* 9e830: tbnz w10, #0, #0x9e848 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_9e848;
  /* 9e834: ldr x11, [x19, #0x38] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 19) + INT64_C(56))));
  /* 9e838: ldr q0, [x8] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 8)), arc_ld64(ARC_X_R(c, 8) + 8));
  /* 9e83c: mov w10, #1 */
  ARC_W_W(c, 10, UINT64_C(1));
  /* 9e840: strb w10, [x8, #4] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(4)), ARC_W_R(c, 10));
  /* 9e844: str q0, [x11, x27, lsl #4] */
  arc_st64((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 27)) << 4)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 27)) << 4)) + 8, (c)->q[0].u64[1]);
L_9e848:;
  /* 9e848: mneg x9, x0, x9 */
  ARC_X_W(c, 9, ((uint64_t)0 - ((uint64_t)(ARC_X_R(c, 0)) * (uint64_t)(ARC_X_R(c, 9)))));
  /* 9e84c: b #0x9e8d4 */
  goto L_9e8d4;
L_9e850:;
  /* 9e850: bti j */
  /* bti: no architectural effect here */
  /* 9e854: lsr w8, w10, #6 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 10)) >> ((UINT64_C(6)) & 31)));
  /* 9e858: and x27, x10, #0x3f */
  ARC_X_W(c, 27, (ARC_X_R(c, 10) & UINT64_C(63)));
  /* 9e85c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 9e860: b.le #0x9e88c */
  if (ARC_COND(c, 13)) goto L_9e88c;
  /* 9e864: cmp w8, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(3));
  /* 9e868: b.ne #0x9e8a0 */
  if (ARC_COND(c, 1)) goto L_9e8a0;
  /* 9e86c: add x8, x24, x27, lsl #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + ((uint64_t)(ARC_X_R(c, 27)) << 4)));
  /* 9e870: ldrb w9, [x8, #4] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(4))));
  /* 9e874: cmp w9, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(1));
  /* 9e878: b.ne #0x9e8e0 */
  if (ARC_COND(c, 1)) goto L_9e8e0;
  /* 9e87c: ldr x9, [x19, #0x38] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(56))));
  /* 9e880: ldr q0, [x9, x27, lsl #4] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 27)) << 4))), arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 27)) << 4)) + 8));
L_9e884:;
  /* 9e884: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* 9e888: b #0x9e8e0 */
  goto L_9e8e0;
L_9e88c:;
  /* 9e88c: b.ne #0x9ea90 */
  if (ARC_COND(c, 1)) goto L_9ea90;
  /* 9e890: ldr w8, [x22, #0x28] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 22) + INT64_C(40))));
  /* 9e894: mul w8, w8, w27 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 27))));
  /* 9e898: add x26, x26, x8 */
  ARC_X_W(c, 26, (ARC_X_R(c, 26) + ARC_X_R(c, 8)));
  /* 9e89c: b #0x9e8e0 */
  goto L_9e8e0;
L_9e8a0:;
  /* 9e8a0: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 9e8a4: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 9e8a8: bl #0x9f258 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(649388));
  fn1_9f258(c);
  /* 9e8ac: add x8, x24, w27, uxtw #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 27)))) << 4)));
  /* 9e8b0: ldrsw x9, [x22, #0x2c] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 22) + INT64_C(44)))));
  /* 9e8b4: ldrb w10, [x8, #4] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(4))));
  /* 9e8b8: tbnz w10, #0, #0x9e8d0 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_9e8d0;
  /* 9e8bc: mov w10, #1 */
  ARC_W_W(c, 10, UINT64_C(1));
  /* 9e8c0: ldr q0, [x8] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 8)), arc_ld64(ARC_X_R(c, 8) + 8));
  /* 9e8c4: strb w10, [x8, #4] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(4)), ARC_W_R(c, 10));
  /* 9e8c8: ldr x10, [x19, #0x38] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(56))));
  /* 9e8cc: str q0, [x10, w27, uxtw #4] */
  arc_st64((ARC_X_R(c, 10) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 27)))) << 4)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 10) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 27)))) << 4)) + 8, (c)->q[0].u64[1]);
L_9e8d0:;
  /* 9e8d0: mul x9, x0, x9 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 0)) * (uint64_t)(ARC_X_R(c, 9))));
L_9e8d4:;
  /* 9e8d4: mov w10, #2 */
  ARC_W_W(c, 10, UINT64_C(2));
L_9e8d8:;
  /* 9e8d8: str w10, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* 9e8dc: str x9, [x8, #8] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(8)), ARC_X_R(c, 9));
L_9e8e0:;
  /* 9e8e0: bti j */
  /* bti: no architectural effect here */
  /* 9e8e4: ldur x9, [x29, #-0x40] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 9e8e8: cmp x9, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 25));
  /* 9e8ec: b.hs #0x9e140 */
  if (ARC_COND(c, 2)) goto L_9e140;
  /* 9e8f0: cmp x26, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 21));
  /* 9e8f4: b.lo #0x9e170 */
  if (ARC_COND(c, 3)) goto L_9e170;
  /* 9e8f8: b #0x9e140 */
  goto L_9e140;
L_9e8fc:;
  /* 9e8fc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 9e900: b #0x9ea94 */
  goto L_9ea94;
L_9e904:;
  /* 9e904: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9e908: adrp x0, #0x51000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(331776)));
  /* 9e90c: add x0, x0, #0x746 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1862)));
  /* 9e910: ldr x8, [x8, #0x998] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2456))));
  /* 9e914: mov w1, #0x45 */
  ARC_W_W(c, 1, UINT64_C(69));
  /* 9e918: add x3, x8, #0x130 */
  ARC_X_W(c, 3, (ARC_X_R(c, 8) + UINT64_C(304)));
  /* 9e91c: b #0x9ea78 */
  goto L_9ea78;
L_9e920:;
  /* 9e920: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9e924: adrp x0, #0x51000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(331776)));
  /* 9e928: add x0, x0, #0xc70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3184)));
  /* 9e92c: b #0x9e9e4 */
  goto L_9e9e4;
L_9e930:;
  /* 9e930: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9e934: adrp x0, #0x50000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(327680)));
  /* 9e938: add x0, x0, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(304)));
  /* 9e93c: ldr x8, [x8, #0x998] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2456))));
  /* 9e940: mov w1, #0x46 */
  ARC_W_W(c, 1, UINT64_C(70));
  /* 9e944: add x3, x8, #0x130 */
  ARC_X_W(c, 3, (ARC_X_R(c, 8) + UINT64_C(304)));
  /* 9e948: b #0x9ea78 */
  goto L_9ea78;
L_9e94c:;
  /* 9e94c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9e950: adrp x0, #0x4f000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(323584)));
  /* 9e954: add x0, x0, #0x9d0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2512)));
  /* 9e958: ldr x8, [x8, #0x998] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2456))));
L_9e95c:;
  /* 9e95c: mov w1, #0x3e */
  ARC_W_W(c, 1, UINT64_C(62));
  /* 9e960: add x3, x8, #0x130 */
  ARC_X_W(c, 3, (ARC_X_R(c, 8) + UINT64_C(304)));
  /* 9e964: b #0x9ea78 */
  goto L_9ea78;
L_9e968:;
  /* 9e968: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9e96c: adrp x0, #0x52000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(335872)));
  /* 9e970: add x0, x0, #0x248 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(584)));
  /* 9e974: ldr x8, [x8, #0x998] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2456))));
  /* 9e978: mov w1, #0x44 */
  ARC_W_W(c, 1, UINT64_C(68));
  /* 9e97c: add x3, x8, #0x130 */
  ARC_X_W(c, 3, (ARC_X_R(c, 8) + UINT64_C(304)));
  /* 9e980: b #0x9ea78 */
  goto L_9ea78;
L_9e984:;
  /* 9e984: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9e988: adrp x0, #0x51000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(331776)));
  /* 9e98c: add x0, x0, #0xae6 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2790)));
  /* 9e990: ldr x8, [x8, #0x998] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2456))));
L_9e994:;
  /* 9e994: mov w1, #0x53 */
  ARC_W_W(c, 1, UINT64_C(83));
  /* 9e998: add x3, x8, #0x130 */
  ARC_X_W(c, 3, (ARC_X_R(c, 8) + UINT64_C(304)));
  /* 9e99c: b #0x9ea78 */
  goto L_9ea78;
L_9e9a0:;
  /* 9e9a0: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9e9a4: adrp x0, #0x51000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(331776)));
  /* 9e9a8: add x0, x0, #0xc30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3120)));
  /* 9e9ac: ldr x8, [x8, #0x998] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2456))));
  /* 9e9b0: mov w1, #0x3f */
  ARC_W_W(c, 1, UINT64_C(63));
  /* 9e9b4: add x3, x8, #0x130 */
  ARC_X_W(c, 3, (ARC_X_R(c, 8) + UINT64_C(304)));
  /* 9e9b8: b #0x9ea78 */
  goto L_9ea78;
L_9e9bc:;
  /* 9e9bc: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9e9c0: adrp x0, #0x51000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(331776)));
  /* 9e9c4: add x0, x0, #0xac */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(172)));
  /* 9e9c8: ldr x8, [x8, #0x998] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2456))));
L_9e9cc:;
  /* 9e9cc: mov w1, #0x49 */
  ARC_W_W(c, 1, UINT64_C(73));
  /* 9e9d0: add x3, x8, #0x130 */
  ARC_X_W(c, 3, (ARC_X_R(c, 8) + UINT64_C(304)));
  /* 9e9d4: b #0x9ea78 */
  goto L_9ea78;
L_9e9d8:;
  /* 9e9d8: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9e9dc: adrp x0, #0x51000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(331776)));
  /* 9e9e0: add x0, x0, #0x5c3 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1475)));
L_9e9e4:;
  /* 9e9e4: ldr x8, [x8, #0x998] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2456))));
  /* 9e9e8: add x3, x8, #0x130 */
  ARC_X_W(c, 3, (ARC_X_R(c, 8) + UINT64_C(304)));
  /* 9e9ec: mov w1, #0x47 */
  ARC_W_W(c, 1, UINT64_C(71));
  /* 9e9f0: b #0x9ea78 */
  goto L_9ea78;
L_9e9f4:;
  /* 9e9f4: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9e9f8: adrp x0, #0x51000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(331776)));
  /* 9e9fc: add x0, x0, #0xd5f */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3423)));
  /* 9ea00: b #0x9ea6c */
  goto L_9ea6c;
L_9ea04:;
  /* 9ea04: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9ea08: adrp x0, #0x50000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(327680)));
  /* 9ea0c: add x0, x0, #0xe24 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3620)));
  /* 9ea10: b #0x9ea50 */
  goto L_9ea50;
L_9ea14:;
  /* 9ea14: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9ea18: adrp x1, #0x4f000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(323584)));
  /* 9ea1c: add x1, x1, #0xb7b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2939)));
  /* 9ea20: ldr x8, [x8, #0x998] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2456))));
  /* 9ea24: mov x2, x27 */
  ARC_X_W(c, 2, ARC_X_R(c, 27));
  /* 9ea28: add x0, x8, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(304)));
  /* 9ea2c: bl #0x144a38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(649776));
  fn1_144a38(c);
  /* 9ea30: b #0x9ea80 */
  goto L_9ea80;
L_9ea34:;
  /* 9ea34: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9ea38: adrp x0, #0x52000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(335872)));
  /* 9ea3c: add x0, x0, #0x42e */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1070)));
  /* 9ea40: b #0x9ea50 */
  goto L_9ea50;
L_9ea44:;
  /* 9ea44: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9ea48: adrp x0, #0x4f000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(323584)));
  /* 9ea4c: add x0, x0, #0xda3 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3491)));
L_9ea50:;
  /* 9ea50: ldr x8, [x8, #0x998] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2456))));
  /* 9ea54: add x3, x8, #0x130 */
  ARC_X_W(c, 3, (ARC_X_R(c, 8) + UINT64_C(304)));
  /* 9ea58: mov w1, #0x41 */
  ARC_W_W(c, 1, UINT64_C(65));
  /* 9ea5c: b #0x9ea78 */
  goto L_9ea78;
L_9ea60:;
  /* 9ea60: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9ea64: adrp x0, #0x50000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(327680)));
  /* 9ea68: add x0, x0, #0xa65 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2661)));
L_9ea6c:;
  /* 9ea6c: ldr x8, [x8, #0x998] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2456))));
  /* 9ea70: add x3, x8, #0x130 */
  ARC_X_W(c, 3, (ARC_X_R(c, 8) + UINT64_C(304)));
  /* 9ea74: mov w1, #0x40 */
  ARC_W_W(c, 1, UINT64_C(64));
L_9ea78:;
  /* 9ea78: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 9ea7c: bl #0x1427d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(649856));
  fn1_1427d0(c);
L_9ea80:;
  /* 9ea80: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9ea84: ldr x8, [x8, #0x998] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2456))));
  /* 9ea88: add x0, x8, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(304)));
  /* 9ea8c: bl #0x143730 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(649872));
  fn1_143730(c);
L_9ea90:;
  /* 9ea90: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
L_9ea94:;
  /* 9ea94: mov sp, x29 */
  (c)->sp = (uint64_t)(ARC_X_R(c, 29));
  /* 9ea98: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 9ea9c: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 9eaa0: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 9eaa4: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 9eaa8: ldp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 9eaac: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9eab0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 9eab4: ret  */
  return;
L_9eab8:;
  /* 9eab8: adrp x20, #0x151000 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9eabc: nop  */
  /* nop: no architectural effect here */
  /* 9eac0: adr x1, #0x4f83f */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(325695)));
  /* 9eac4: ldr x20, [x20, #0x998] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(2456))));
  /* 9eac8: adrp x2, #0x51000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(331776)));
  /* 9eacc: add x2, x2, #0x223 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(547)));
  /* 9ead0: adrp x3, #0x50000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(327680)));
  /* 9ead4: add x3, x3, #0x5e0 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(1504)));
  /* 9ead8: add x0, x20, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(304)));
  /* 9eadc: bl #0x144a38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(649952));
  fn1_144a38(c);
  /* 9eae0: add x0, x20, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(304)));
  /* 9eae4: bl #0x143730 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(649960));
  fn1_143730(c);
  /* 9eae8: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(649964));
  fn1_1427b8(c);
L_9eaec:;
  /* 9eaec: adrp x20, #0x151000 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9eaf0: nop  */
  /* nop: no architectural effect here */
  /* 9eaf4: adr x1, #0x4f83f */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(325695)));
  /* 9eaf8: ldr x20, [x20, #0x998] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(2456))));
  /* 9eafc: adrp x2, #0x51000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(331776)));
  /* 9eb00: add x2, x2, #0x223 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(547)));
  /* 9eb04: adrp x3, #0x50000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(327680)));
  /* 9eb08: add x3, x3, #0x5e0 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(1504)));
  /* 9eb0c: add x0, x20, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(304)));
  /* 9eb10: bl #0x144a38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(650004));
  fn1_144a38(c);
  /* 9eb14: add x0, x20, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(304)));
  /* 9eb18: bl #0x143730 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(650012));
  fn1_143730(c);
  /* 9eb1c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(650016));
  fn1_1427b8(c);
L_9eb20:;
  /* 9eb20: adrp x20, #0x151000 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9eb24: nop  */
  /* nop: no architectural effect here */
  /* 9eb28: adr x1, #0x4f83f */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(325695)));
  /* 9eb2c: ldr x20, [x20, #0x998] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(2456))));
  /* 9eb30: adrp x2, #0x51000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(331776)));
  /* 9eb34: add x2, x2, #0x223 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(547)));
  /* 9eb38: adrp x3, #0x50000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(327680)));
  /* 9eb3c: add x3, x3, #0x5e0 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(1504)));
  /* 9eb40: add x0, x20, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(304)));
  /* 9eb44: bl #0x144a38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(650056));
  fn1_144a38(c);
  /* 9eb48: add x0, x20, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(304)));
  /* 9eb4c: bl #0x143730 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(650064));
  fn1_143730(c);
  /* 9eb50: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(650068));
  fn1_1427b8(c);
L_9eb54:;
  /* 9eb54: adrp x20, #0x151000 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9eb58: nop  */
  /* nop: no architectural effect here */
  /* 9eb5c: adr x1, #0x4f83f */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(325695)));
  /* 9eb60: ldr x20, [x20, #0x998] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(2456))));
  /* 9eb64: adrp x2, #0x51000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(331776)));
  /* 9eb68: add x2, x2, #0x223 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(547)));
  /* 9eb6c: adrp x3, #0x50000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(327680)));
  /* 9eb70: add x3, x3, #0x5e0 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(1504)));
  /* 9eb74: add x0, x20, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(304)));
  /* 9eb78: bl #0x144a38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(650108));
  fn1_144a38(c);
  /* 9eb7c: add x0, x20, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(304)));
  /* 9eb80: bl #0x143730 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(650116));
  fn1_143730(c);
  /* 9eb84: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(650120));
  fn1_1427b8(c);
}

void fn1_a1fcc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038591436));
  /* a1fcc: bti c */
  /* bti: no architectural effect here */
  /* a1fd0: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a1fd4: ldr x8, [x8, #0x8d8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2264))));
  /* a1fd8: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* a1fdc: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* a1fe0: ret  */
  return;
}

void fn1_a45bc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038601148));
  /* a45bc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a45c0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a45c4: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a45c8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a45cc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a45d0: ldr x0, [x0, #0x1330] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* a45d4: add x20, x19, #0x330 */
  ARC_X_W(c, 20, (ARC_X_R(c, 19) + UINT64_C(816)));
  /* a45d8: cbnz x0, #0xa45ec */
  if ((ARC_X_R(c, 0)) != 0) goto L_a45ec;
  /* a45dc: b #0xa4604 */
  goto L_a4604;
L_a45e0:;
  /* a45e0: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(673252));
  fn1_142800(c);
  /* a45e4: ldr x0, [x19, #0x1330] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* a45e8: cbz x0, #0xa4604 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a4604;
L_a45ec:;
  /* a45ec: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* a45f0: cmp x0, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 20));
  /* a45f4: str x8, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 8));
  /* a45f8: b.ne #0xa45e0 */
  if (ARC_COND(c, 1)) goto L_a45e0;
  /* a45fc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* a4600: cbnz x0, #0xa45ec */
  if ((ARC_X_R(c, 0)) != 0) goto L_a45ec;
L_a4604:;
  /* a4604: ldr x0, [x19, #0x2d0] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(720))));
  /* a4608: add x8, x19, #0x2e8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + UINT64_C(744)));
  /* a460c: stp xzr, xzr, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a4610: str x20, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 20));
  /* a4614: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* a4618: b.eq #0xa4620 */
  if (ARC_COND(c, 0)) goto L_a4620;
  /* a461c: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(673312));
  fn1_142800(c);
L_a4620:;
  /* a4620: ldr x0, [x19, #0x298] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(664))));
  /* a4624: add x8, x19, #0x2b0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + UINT64_C(688)));
  /* a4628: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* a462c: b.eq #0xa4634 */
  if (ARC_COND(c, 0)) goto L_a4634;
  /* a4630: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(673332));
  fn1_142800(c);
L_a4634:;
  /* a4634: ldr x0, [x19, #0x240] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(576))));
  /* a4638: add x8, x19, #0x258 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + UINT64_C(600)));
  /* a463c: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* a4640: b.eq #0xa4648 */
  if (ARC_COND(c, 0)) goto L_a4648;
  /* a4644: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(673352));
  fn1_142800(c);
L_a4648:;
  /* a4648: ldr x0, [x19, #0x128] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(296))));
  /* a464c: add x8, x19, #0x140 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + UINT64_C(320)));
  /* a4650: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* a4654: b.eq #0xa465c */
  if (ARC_COND(c, 0)) goto L_a465c;
  /* a4658: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(673372));
  fn1_142800(c);
L_a465c:;
  /* a465c: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* a4660: add x8, x19, #0x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* a4664: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* a4668: b.eq #0xa467c */
  if (ARC_COND(c, 0)) goto L_a467c;
  /* a466c: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a4670: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a4674: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a4678: b #0x142800 */
  fn1_142800(c); return;
L_a467c:;
  /* a467c: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a4680: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a4684: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a4688: ret  */
  return;
}

void fn1_abafc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038631164));
  /* abafc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* abb00: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* abb04: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* abb08: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* abb0c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* abb10: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* abb14: ldr x23, [x0, #0x1330] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* abb18: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* abb1c: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* abb20: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* abb24: ldr x8, [x23, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* abb28: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* abb2c: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* abb30: b.hi #0xabb54 */
  if (ARC_COND(c, 8)) goto L_abb54;
  /* abb34: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* abb38: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* abb3c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(703296));
  fn1_1428a8(c);
  /* abb40: cbz x0, #0xabbb4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_abbb4;
  /* abb44: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* abb48: stp x23, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* abb4c: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* abb50: str x0, [x22, #0x1330] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(4912)), ARC_X_R(c, 0));
L_abb54:;
  /* abb54: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* abb58: add x0, x23, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + ARC_X_R(c, 8)));
  /* abb5c: adrp x8, #0x14a000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1351680)));
  /* abb60: add x8, x8, #0x2d0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(720)));
  /* abb64: str x9, [x23, #8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(8)), ARC_X_R(c, 9));
  /* abb68: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* abb6c: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* abb70: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* abb74: ldrh w9, [x20] */
  ARC_W_W(c, 9, arc_ld16(ARC_X_R(c, 20)));
  /* abb78: ldr x11, [x21] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 21)));
  /* abb7c: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* abb80: bfxil w8, w9, #0, #6 */
  ARC_W_W(c, 8, (((uint32_t)(ARC_W_R(c, 8)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 9))) >> 0) & UINT64_C(63))));
  /* abb84: mov w9, #0x37 */
  ARC_W_W(c, 9, UINT64_C(55));
  /* abb88: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* abb8c: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* abb90: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* abb94: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* abb98: stp x11, x9, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* abb9c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* abba0: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* abba4: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* abba8: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* abbac: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* abbb0: ret  */
  return;
L_abbb4:;
  /* abbb4: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(703416));
  fn1_142488(c);
}

void fn1_b20b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038657208));
  /* b20b8: bti c */
  /* bti: no architectural effect here */
  /* b20bc: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* b20c0: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b620c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038673932));
  /* b620c: bti c */
  /* bti: no architectural effect here */
  /* b6210: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* b6214: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b857c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038683004));
  /* b857c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b8580: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b8584: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b8588: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b858c: ldp x9, x10, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b8590: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b8594: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* b8598: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b859c: add x11, x9, #0xc */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(12)));
  /* b85a0: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* b85a4: b.ls #0xb85d4 */
  if (ARC_COND(c, 9)) goto L_b85d4;
  /* b85a8: lsl x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b85ac: add x9, x9, #0x3ec */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1004)));
  /* b85b0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* b85b4: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b85b8: csel x1, x10, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* b85bc: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b85c0: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(755140));
  fn1_142878(c);
  /* b85c4: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b85c8: cbz x0, #0xb8664 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b8664;
  /* b85cc: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b85d0: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
L_b85d4:;
  /* b85d4: adrp x10, #0x4f000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(323584)));
  /* b85d8: add x10, x10, #0xc2b */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(3115)));
  /* b85dc: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* b85e0: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* b85e4: mov w9, #0x695f */
  ARC_W_W(c, 9, UINT64_C(26975));
  /* b85e8: add x0, x20, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(16)));
  /* b85ec: movk w9, #0x3a66, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(979763200)));
  /* b85f0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b85f4: str x10, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* b85f8: str w9, [x8, #8] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 9));
  /* b85fc: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b8600: add x8, x8, #0xc */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(12)));
  /* b8604: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b8608: bl #0xafa48 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(755212));
  fn1_afa48(c);
  /* b860c: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b8610: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b8614: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b8618: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b861c: b.ls #0xb8648 */
  if (ARC_COND(c, 9)) goto L_b8648;
  /* b8620: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b8624: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b8628: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b862c: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b8630: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b8634: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(755256));
  fn1_142878(c);
  /* b8638: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b863c: cbz x0, #0xb8668 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b8668;
  /* b8640: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b8644: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b8648:;
  /* b8648: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b864c: mov w9, #0x5d */
  ARC_W_W(c, 9, UINT64_C(93));
  /* b8650: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b8654: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b8658: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b865c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b8660: ret  */
  return;
L_b8664:;
  /* b8664: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(755304));
  fn1_1427b8(c);
L_b8668:;
  /* b8668: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(755308));
  fn1_1427b8(c);
}

void fn1_bbdd8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038697432));
  /* bbdd8: bti c */
  /* bti: no architectural effect here */
  /* bbddc: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* bbde0: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_be348(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038707016));
  /* be348: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* be34c: sub sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(176)));
  /* be350: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* be354: stp x28, x27, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* be358: stp x26, x25, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* be35c: stp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* be360: stp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* be364: stp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* be368: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* be36c: cmp w0, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(1));
  /* be370: mov w0, #3 */
  ARC_W_W(c, 0, UINT64_C(3));
  /* be374: b.ne #0xbe80c */
  if (ARC_COND(c, 1)) goto L_be80c;
  /* be378: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* be37c: cbz x3, #0xbe80c */
  if ((ARC_X_R(c, 3)) == 0) goto L_be80c;
  /* be380: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* be384: cbz x4, #0xbe80c */
  if ((ARC_X_R(c, 4)) == 0) goto L_be80c;
  /* be388: mov x8, #0x2b01 */
  ARC_X_W(c, 8, UINT64_C(11009));
  /* be38c: mov w21, w1 */
  ARC_W_W(c, 21, ARC_W_R(c, 1));
  /* be390: cmp w1, #6 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(6));
  /* be394: movk x8, #0x432b, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(1126891520)));
  /* be398: and x23, x2, #0xffffffffffffff00 */
  ARC_X_W(c, 23, (ARC_X_R(c, 2) & UINT64_C(18446744073709551360)));
  /* be39c: movk x8, #0x4e47, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(86066849644544)));
  /* be3a0: movk x8, #0x434c, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(4849250898771181568)));
  /* be3a4: sub x22, x8, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* be3a8: b.ne #0xbe3f8 */
  if (ARC_COND(c, 1)) goto L_be3f8;
  /* be3ac: cmp x23, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 22));
  /* be3b0: b.ne #0xbe3f8 */
  if (ARC_COND(c, 1)) goto L_be3f8;
  /* be3b4: ldursw x21, [x19, #-0x24] */
  ARC_X_W(c, 21, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 19) + INT64_C(-36)))));
  /* be3b8: ldur x22, [x19, #-0x10] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(-16))));
  /* be3bc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* be3c0: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* be3c4: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* be3c8: bl #0x9ce7c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(779212));
  fn1_9ce7c(c);
  /* be3cc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* be3d0: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* be3d4: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* be3d8: bl #0x9ce7c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(779228));
  fn1_9ce7c(c);
  /* be3dc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* be3e0: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* be3e4: bl #0x9ceb4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(779240));
  fn1_9ceb4(c);
  /* be3e8: tbz w21, #0x1f, #0xbe3f0 */
  if (((ARC_W_R(c, 21)) >> 31 & 1) == 0) goto L_be3f0;
L_be3ec:;
  /* be3ec: stur xzr, [x19, #-0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(-16)), ARC_X_R(c, 31));
L_be3f0:;
  /* be3f0: mov w0, #7 */
  ARC_W_W(c, 0, UINT64_C(7));
  /* be3f4: b #0xbe80c */
  goto L_be80c;
L_be3f8:;
  /* be3f8: tbnz w21, #0, #0xbe448 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) != 0) goto L_be448;
  /* be3fc: tbz w21, #1, #0xbe80c */
  if (((ARC_W_R(c, 21)) >> 1 & 1) == 0) goto L_be80c;
  /* be400: mov w8, #0xc */
  ARC_W_W(c, 8, UINT64_C(12));
  /* be404: bics wzr, w8, w21 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 8) & (~ARC_W_R(c, 21)));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 31, _r); }
  /* be408: b.ne #0xbe450 */
  if (ARC_COND(c, 1)) goto L_be450;
  /* be40c: mov x24, xzr */
  ARC_X_W(c, 24, ARC_X_R(c, 31));
L_be410:;
  /* be410: mov x26, xzr */
  ARC_X_W(c, 26, ARC_X_R(c, 31));
L_be414:;
  /* be414: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* be418: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* be41c: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* be420: bl #0x9ce7c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(779300));
  fn1_9ce7c(c);
  /* be424: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* be428: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* be42c: mov x2, x26 */
  ARC_X_W(c, 2, ARC_X_R(c, 26));
  /* be430: bl #0x9ce7c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(779316));
  fn1_9ce7c(c);
  /* be434: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* be438: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* be43c: bl #0x9ceb4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(779328));
  fn1_9ceb4(c);
  /* be440: tbz x26, #0x3f, #0xbe3f0 */
  if (((ARC_X_R(c, 26)) >> 63 & 1) == 0) goto L_be3f0;
  /* be444: b #0xbe3ec */
  goto L_be3ec;
L_be448:;
  /* be448: tst w21, #0xe */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 21) & UINT64_C(14)));
  /* be44c: b.ne #0xbe80c */
  if (ARC_COND(c, 1)) goto L_be80c;
L_be450:;
  /* be450: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* be454: bl #0x9cdf8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(779352));
  fn1_9cdf8(c);
  /* be458: cbz x0, #0xbe808 */
  if ((ARC_X_R(c, 0)) == 0) goto L_be808;
  /* be45c: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* be460: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* be464: bl #0x9ce84 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(779368));
  fn1_9ce84(c);
  /* be468: mov x27, x0 */
  ARC_X_W(c, 27, ARC_X_R(c, 0));
  /* be46c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* be470: bl #0x9ce2c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(779380));
  fn1_9ce2c(c);
  /* be474: mov x8, x25 */
  ARC_X_W(c, 8, ARC_X_R(c, 25));
  /* be478: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* be47c: ldrb w1, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    ARC_W_W(c, 1, arc_ld8(_a));
  }
  /* be480: stur x8, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 8));
  /* be484: cmp w1, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(255));
  /* be488: b.eq #0xbe4a4 */
  if (ARC_COND(c, 0)) goto L_be4a4;
  /* be48c: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* be490: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* be494: bl #0xbed70 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(779416));
  fn1_bed70(c);
  /* be498: ldur x8, [x29, #-0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* be49c: str x0, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 0));
  /* be4a0: b #0xbe4a8 */
  goto L_be4a8;
L_be4a4:;
  /* be4a4: str x24, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 24));
L_be4a8:;
  /* be4a8: ldrb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    ARC_W_W(c, 9, arc_ld8(_a));
  }
  /* be4ac: stur x8, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 8));
  /* be4b0: str x9, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 9));
  /* be4b4: cmp x9, #0xff */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(255));
  /* be4b8: mvn x9, x24 */
  ARC_X_W(c, 9, (~(uint64_t)(ARC_X_R(c, 24))));
  /* be4bc: b.eq #0xbe4ec */
  if (ARC_COND(c, 0)) goto L_be4ec;
  /* be4c0: mov x11, xzr */
  ARC_X_W(c, 11, ARC_X_R(c, 31));
  /* be4c4: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
L_be4c8:;
  /* be4c8: ldrb w12, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    ARC_W_W(c, 12, arc_ld8(_a));
  }
  /* be4cc: and x13, x12, #0x7f */
  ARC_X_W(c, 13, (ARC_X_R(c, 12) & UINT64_C(127)));
  /* be4d0: lsl x13, x13, x11 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 13)) << ((ARC_X_R(c, 11)) & 63)));
  /* be4d4: add x11, x11, #7 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(7)));
  /* be4d8: orr x10, x13, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 13) | ARC_X_R(c, 10)));
  /* be4dc: tbnz w12, #7, #0xbe4c8 */
  if (((ARC_W_R(c, 12)) >> 7 & 1) != 0) goto L_be4c8;
  /* be4e0: add x10, x8, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + ARC_X_R(c, 10)));
  /* be4e4: stur x10, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), ARC_X_R(c, 10));
  /* be4e8: b #0xbe4f0 */
  goto L_be4f0;
L_be4ec:;
  /* be4ec: stur xzr, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), ARC_X_R(c, 31));
L_be4f0:;
  /* be4f0: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* be4f4: add x23, x8, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* be4f8: mov x11, xzr */
  ARC_X_W(c, 11, ARC_X_R(c, 31));
  /* be4fc: stur x23, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 23));
  /* be500: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
  /* be504: add x24, x27, x9 */
  ARC_X_W(c, 24, (ARC_X_R(c, 27) + ARC_X_R(c, 9)));
  /* be508: ldrb w26, [x8] */
  ARC_W_W(c, 26, arc_ld8(ARC_X_R(c, 8)));
  /* be50c: str x25, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 25));
L_be510:;
  /* be510: ldrb w8, [x23], #1 */
  { const uint64_t _a = ARC_X_R(c, 23);
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(1));
    ARC_W_W(c, 8, arc_ld8(_a));
  }
  /* be514: and x9, x8, #0x7f */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) & UINT64_C(127)));
  /* be518: lsl x9, x9, x11 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((ARC_X_R(c, 11)) & 63)));
  /* be51c: add x11, x11, #7 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(7)));
  /* be520: orr x10, x9, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) | ARC_X_R(c, 10)));
  /* be524: tbnz w8, #7, #0xbe510 */
  if (((ARC_W_R(c, 8)) >> 7 & 1) != 0) goto L_be510;
  /* be528: mov w8, w10 */
  ARC_W_W(c, 8, ARC_W_R(c, 10));
  /* be52c: mov x9, x23 */
  ARC_X_W(c, 9, ARC_X_R(c, 23));
  /* be530: stp x23, x23, [x29, #-0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-24));
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* be534: add x25, x23, x8 */
  ARC_X_W(c, 25, (ARC_X_R(c, 23) + ARC_X_R(c, 8)));
  /* be538: str x8, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 8));
  /* be53c: b #0xbe548 */
  goto L_be548;
L_be540:;
  /* be540: cmp x24, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 27));
  /* be544: b.lo #0xbe884 */
  if (ARC_COND(c, 3)) goto L_be884;
L_be548:;
  /* be548: cmp x9, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 25));
  /* be54c: b.hs #0xbe884 */
  if (ARC_COND(c, 2)) goto L_be884;
  /* be550: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* be554: mov w1, w26 */
  ARC_W_W(c, 1, ARC_W_R(c, 26));
  /* be558: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* be55c: bl #0xbed70 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(779616));
  fn1_bed70(c);
  /* be560: mov x27, x0 */
  ARC_X_W(c, 27, ARC_X_R(c, 0));
  /* be564: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* be568: mov w1, w26 */
  ARC_W_W(c, 1, ARC_W_R(c, 26));
  /* be56c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* be570: bl #0xbed70 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(779636));
  fn1_bed70(c);
  /* be574: mov x28, x0 */
  ARC_X_W(c, 28, ARC_X_R(c, 0));
  /* be578: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* be57c: mov w1, w26 */
  ARC_W_W(c, 1, ARC_W_R(c, 26));
  /* be580: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* be584: bl #0xbed70 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(779656));
  fn1_bed70(c);
  /* be588: ldur x9, [x29, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 29) + INT64_C(-24))));
  /* be58c: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
  /* be590: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
L_be594:;
  /* be594: ldrb w11, [x9], #1 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(1));
    ARC_W_W(c, 11, arc_ld8(_a));
  }
  /* be598: and x12, x11, #0x7f */
  ARC_X_W(c, 12, (ARC_X_R(c, 11) & UINT64_C(127)));
  /* be59c: lsl x12, x12, x10 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 12)) << ((ARC_X_R(c, 10)) & 63)));
  /* be5a0: add x10, x10, #7 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(7)));
  /* be5a4: orr x8, x12, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 12) | ARC_X_R(c, 8)));
  /* be5a8: tbnz w11, #7, #0xbe594 */
  if (((ARC_W_R(c, 11)) >> 7 & 1) != 0) goto L_be594;
  /* be5ac: cmp x27, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 27), ARC_X_R(c, 24));
  /* be5b0: stur x9, [x29, #-0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-24)), ARC_X_R(c, 9));
  /* be5b4: b.hi #0xbe540 */
  if (ARC_COND(c, 8)) goto L_be540;
  /* be5b8: add x10, x28, x27 */
  ARC_X_W(c, 10, (ARC_X_R(c, 28) + ARC_X_R(c, 27)));
  /* be5bc: cmp x24, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 10));
  /* be5c0: b.hs #0xbe540 */
  if (ARC_COND(c, 2)) goto L_be540;
  /* be5c4: cbz x0, #0xbe808 */
  if ((ARC_X_R(c, 0)) == 0) goto L_be808;
  /* be5c8: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
  /* be5cc: add x24, x0, x9 */
  ARC_X_W(c, 24, (ARC_X_R(c, 0) + ARC_X_R(c, 9)));
  /* be5d0: cbz x8, #0xbe7c0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_be7c0;
  /* be5d4: add x10, x19, #0x20 */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) + UINT64_C(32)));
  /* be5d8: ldr x9, [sp, #0x10] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(16))));
  /* be5dc: str x24, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 24));
  /* be5e0: str x10, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 10));
  /* be5e4: ldr x10, [sp, #0x28] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(40))));
  /* be5e8: mov w28, wzr */
  ARC_W_W(c, 28, ARC_W_R(c, 31));
  /* be5ec: add x9, x23, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) + ARC_X_R(c, 9)));
  /* be5f0: mov w14, #0x3f */
  ARC_W_W(c, 14, UINT64_C(63));
  /* be5f4: mov x15, #-1 */
  ARC_X_W(c, 15, UINT64_C(18446744073709551615));
  /* be5f8: and x11, x10, #0xf */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) & UINT64_C(15)));
  /* be5fc: mov w10, #0x1c1d */
  ARC_W_W(c, 10, UINT64_C(7197));
  /* be600: add x8, x9, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ARC_X_R(c, 8)));
  /* be604: lsr w9, w10, w11 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 10)) >> ((ARC_W_R(c, 11)) & 31)));
  /* be608: mov x25, x11 */
  ARC_X_W(c, 25, ARC_X_R(c, 11));
  /* be60c: sub x24, x8, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* be610: str w9, [sp, #0x18] */
  arc_st32(((c)->sp + INT64_C(24)), ARC_W_R(c, 9));
L_be614:;
  /* be614: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* be618: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* be61c: mov x23, x24 */
  ARC_X_W(c, 23, ARC_X_R(c, 24));
L_be620:;
  /* be620: ldrb w10, [x23], #1 */
  { const uint64_t _a = ARC_X_R(c, 23);
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(1));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* be624: and x11, x10, #0x7f */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) & UINT64_C(127)));
  /* be628: lsl x11, x11, x9 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 11)) << ((ARC_X_R(c, 9)) & 63)));
  /* be62c: add x9, x9, #7 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(7)));
  /* be630: orr x8, x11, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 11) | ARC_X_R(c, 8)));
  /* be634: tbnz w10, #7, #0xbe620 */
  if (((ARC_W_R(c, 10)) >> 7 & 1) != 0) goto L_be620;
  /* be638: cmp x9, #0x40 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(64));
  /* be63c: lsl x9, x15, x9 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 15)) << ((ARC_X_R(c, 9)) & 63)));
  /* be640: ccmp w10, w14, #0, lo */
  if (ARC_COND(c, 3)) { (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 14)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* be644: csel x9, x9, xzr, hi */
  ARC_X_W(c, 9, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 31)));
  /* be648: orr x26, x8, x9 */
  ARC_X_W(c, 26, (ARC_X_R(c, 8) | ARC_X_R(c, 9)));
  /* be64c: cmp x26, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 26), UINT64_C(1));
  /* be650: b.lt #0xbe6fc */
  if (ARC_COND(c, 11)) goto L_be6fc;
  /* be654: ldur x8, [x29, #-0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))));
  /* be658: cbz x8, #0xbe8a4 */
  if ((ARC_X_R(c, 8)) == 0) goto L_be8a4;
  /* be65c: cmp w25, #0xc */
  (void)arc_sub32(c, ARC_W_R(c, 25), UINT64_C(12));
  /* be660: b.hi #0xbe8a4 */
  if (ARC_COND(c, 8)) goto L_be8a4;
  /* be664: ldr w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(24))));
  /* be668: tbz w8, #0, #0xbe8a4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_be8a4;
  /* be66c: nop  */
  /* nop: no architectural effect here */
  /* be670: adr x8, #0x54550 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(345424)));
  /* be674: ldur x9, [x29, #-0x20] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))));
  /* be678: ldr x8, [x8, x25, lsl #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 25)) << 3))));
  /* be67c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* be680: ldr x1, [sp, #0x28] */
  ARC_X_W(c, 1, arc_ld64(((c)->sp + INT64_C(40))));
  /* be684: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* be688: madd x8, x8, x26, x9 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) + ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 26)))));
  /* be68c: stur x8, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 8));
  /* be690: bl #0xbed70 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(779924));
  fn1_bed70(c);
  /* be694: cbz x0, #0xbe830 */
  if ((ARC_X_R(c, 0)) == 0) goto L_be830;
  /* be698: ldr x8, [sp, #0x20] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
  /* be69c: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* be6a0: b.ne #0xbe6ec */
  if (ARC_COND(c, 1)) goto L_be6ec;
  /* be6a4: mov x9, #0x2b01 */
  ARC_X_W(c, 9, UINT64_C(11009));
  /* be6a8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* be6ac: movk x9, #0x432b, lsl #16 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1126891520)));
  /* be6b0: movk x9, #0x4e47, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(86066849644544)));
  /* be6b4: movk x9, #0x434c, lsl #48 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(281474976710655)) | UINT64_C(4849250898771181568)));
  /* be6b8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* be6bc: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* be6c0: b.ne #0xbe6c8 */
  if (ARC_COND(c, 1)) goto L_be6c8;
  /* be6c4: ldur x8, [x19, #-0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(-88))));
L_be6c8:;
  /* be6c8: stur x8, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 8));
  /* be6cc: cbz x8, #0xbe8b8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_be8b8;
  /* be6d0: ldur x1, [x19, #-0x50] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(-80))));
  /* be6d4: cbz x1, #0xbe8b8 */
  if ((ARC_X_R(c, 1)) == 0) goto L_be8b8;
  /* be6d8: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* be6dc: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* be6e0: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* be6e4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(780008));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* be6e8: tbnz w0, #0, #0xbe844 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_be844;
L_be6ec:;
  /* be6ec: mov w8, w28 */
  ARC_W_W(c, 8, ARC_W_R(c, 28));
  /* be6f0: mov w14, #0x3f */
  ARC_W_W(c, 14, UINT64_C(63));
  /* be6f4: mov x15, #-1 */
  ARC_X_W(c, 15, UINT64_C(18446744073709551615));
  /* be6f8: b #0xbe778 */
  goto L_be778;
L_be6fc:;
  /* be6fc: cmp x26, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 26), UINT64_C(0));
  /* be700: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* be704: orr w8, w8, w28 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 28)));
  /* be708: tbnz w21, #3, #0xbe778 */
  if (((ARC_W_R(c, 21)) >> 3 & 1) != 0) goto L_be778;
  /* be70c: cbz x26, #0xbe778 */
  if ((ARC_X_R(c, 26)) == 0) goto L_be778;
  /* be710: ldr x9, [sp, #0x20] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(32))));
  /* be714: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* be718: cmp x9, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 22));
  /* be71c: b.ne #0xbe850 */
  if (ARC_COND(c, 1)) goto L_be850;
  /* be720: mov x9, #0x2b01 */
  ARC_X_W(c, 9, UINT64_C(11009));
  /* be724: ldr x27, [sp, #0x10] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(16))));
  /* be728: movk x9, #0x432b, lsl #16 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1126891520)));
  /* be72c: movk x9, #0x4e47, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(86066849644544)));
  /* be730: movk x9, #0x434c, lsl #48 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(281474976710655)) | UINT64_C(4849250898771181568)));
  /* be734: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* be738: b.ne #0xbe740 */
  if (ARC_COND(c, 1)) goto L_be740;
  /* be73c: ldur x27, [x19, #-0x58] */
  ARC_X_W(c, 27, arc_ld64((ARC_X_R(c, 19) + INT64_C(-88))));
L_be740:;
  /* be740: cbz x27, #0xbe8b8 */
  if ((ARC_X_R(c, 27)) == 0) goto L_be8b8;
  /* be744: ldur x3, [x19, #-0x50] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 19) + INT64_C(-80))));
  /* be748: cbz x3, #0xbe8b8 */
  if ((ARC_X_R(c, 3)) == 0) goto L_be8b8;
  /* be74c: ldur x1, [x29, #-0x20] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))));
  /* be750: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* be754: ldr x2, [sp, #0x28] */
  ARC_X_W(c, 2, arc_ld64(((c)->sp + INT64_C(40))));
  /* be758: mov x4, x27 */
  ARC_X_W(c, 4, ARC_X_R(c, 27));
  /* be75c: mov x5, x19 */
  ARC_X_W(c, 5, ARC_X_R(c, 19));
  /* be760: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* be764: bl #0xbef18 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(780136));
  fn1_bef18(c);
  /* be768: mov w8, w28 */
  ARC_W_W(c, 8, ARC_W_R(c, 28));
  /* be76c: mov w14, #0x3f */
  ARC_W_W(c, 14, UINT64_C(63));
  /* be770: mov x15, #-1 */
  ARC_X_W(c, 15, UINT64_C(18446744073709551615));
  /* be774: tbnz w0, #0, #0xbe86c */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_be86c;
L_be778:;
  /* be778: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
  /* be77c: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* be780: mov x11, x23 */
  ARC_X_W(c, 11, ARC_X_R(c, 23));
L_be784:;
  /* be784: ldrb w12, [x11], #1 */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(1));
    ARC_W_W(c, 12, arc_ld8(_a));
  }
  /* be788: and x13, x12, #0x7f */
  ARC_X_W(c, 13, (ARC_X_R(c, 12) & UINT64_C(127)));
  /* be78c: lsl x13, x13, x10 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 13)) << ((ARC_X_R(c, 10)) & 63)));
  /* be790: add x10, x10, #7 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(7)));
  /* be794: orr x9, x13, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 13) | ARC_X_R(c, 9)));
  /* be798: tbnz w12, #7, #0xbe784 */
  if (((ARC_W_R(c, 12)) >> 7 & 1) != 0) goto L_be784;
  /* be79c: cmp x10, #0x40 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(64));
  /* be7a0: lsl x10, x15, x10 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 15)) << ((ARC_X_R(c, 10)) & 63)));
  /* be7a4: ccmp w12, w14, #0, lo */
  if (ARC_COND(c, 3)) { (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 14)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* be7a8: csel x10, x10, xzr, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 31)));
  /* be7ac: orr x9, x9, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) | ARC_X_R(c, 10)));
  /* be7b0: cbz x9, #0xbe7c8 */
  if ((ARC_X_R(c, 9)) == 0) goto L_be7c8;
  /* be7b4: add x24, x23, x9 */
  ARC_X_W(c, 24, (ARC_X_R(c, 23) + ARC_X_R(c, 9)));
  /* be7b8: mov w28, w8 */
  ARC_W_W(c, 28, ARC_W_R(c, 8));
  /* be7bc: b #0xbe614 */
  goto L_be614;
L_be7c0:;
  /* be7c0: tbz w21, #0, #0xbe410 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) == 0) goto L_be410;
  /* be7c4: b #0xbe808 */
  goto L_be808;
L_be7c8:;
  /* be7c8: and w9, w21, #2 */
  ARC_W_W(c, 9, (ARC_W_R(c, 21) & UINT64_C(2)));
  /* be7cc: and w8, w8, w9, lsr #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & ((uint32_t)(ARC_W_R(c, 9)) >> 1)));
  /* be7d0: tbz w8, #0, #0xbe808 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_be808;
  /* be7d4: mov x24, xzr */
  ARC_X_W(c, 24, ARC_X_R(c, 31));
  /* be7d8: mov x26, xzr */
  ARC_X_W(c, 26, ARC_X_R(c, 31));
  /* be7dc: mov x27, xzr */
  ARC_X_W(c, 27, ARC_X_R(c, 31));
  /* be7e0: tbz w21, #0, #0xbe870 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) == 0) goto L_be870;
L_be7e4:;
  /* be7e4: ldr x8, [sp, #0x20] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
  /* be7e8: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* be7ec: b.ne #0xbe83c */
  if (ARC_COND(c, 1)) goto L_be83c;
  /* be7f0: ldp x8, x9, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* be7f4: mov w0, #6 */
  ARC_W_W(c, 0, UINT64_C(6));
  /* be7f8: stur w26, [x19, #-0x24] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(-36)), ARC_W_R(c, 26));
  /* be7fc: stp x24, x9, [x19, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(-32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* be800: stp x8, x27, [x19, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* be804: b #0xbe80c */
  goto L_be80c;
L_be808:;
  /* be808: mov w0, #8 */
  ARC_W_W(c, 0, UINT64_C(8));
L_be80c:;
  /* be80c: ldp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* be810: ldp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* be814: ldp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* be818: ldp x26, x25, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* be81c: ldp x28, x27, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* be820: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* be824: add sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(176)));
  /* be828: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* be82c: ret  */
  return;
L_be830:;
  /* be830: mov x9, #0x2b01 */
  ARC_X_W(c, 9, UINT64_C(11009));
  /* be834: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* be838: b #0xbe854 */
  goto L_be854;
L_be83c:;
  /* be83c: mov w0, #6 */
  ARC_W_W(c, 0, UINT64_C(6));
  /* be840: b #0xbe80c */
  goto L_be80c;
L_be844:;
  /* be844: ldur x27, [x29, #-8] */
  ARC_X_W(c, 27, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* be848: tbz w21, #0, #0xbe870 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) == 0) goto L_be870;
  /* be84c: b #0xbe7e4 */
  goto L_be7e4;
L_be850:;
  /* be850: mov x9, #0x2b01 */
  ARC_X_W(c, 9, UINT64_C(11009));
L_be854:;
  /* be854: movk x9, #0x432b, lsl #16 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1126891520)));
  /* be858: movk x9, #0x4e47, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(86066849644544)));
  /* be85c: movk x9, #0x434c, lsl #48 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(281474976710655)) | UINT64_C(4849250898771181568)));
  /* be860: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* be864: b.ne #0xbe878 */
  if (ARC_COND(c, 1)) goto L_be878;
  /* be868: ldur x27, [x19, #-0x58] */
  ARC_X_W(c, 27, arc_ld64((ARC_X_R(c, 19) + INT64_C(-88))));
L_be86c:;
  /* be86c: tbnz w21, #0, #0xbe7e4 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) != 0) goto L_be7e4;
L_be870:;
  /* be870: ldr x24, [sp] */
  ARC_X_W(c, 24, arc_ld64((c)->sp));
  /* be874: b #0xbe414 */
  goto L_be414;
L_be878:;
  /* be878: ldr x27, [sp, #0x10] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(16))));
  /* be87c: tbz w21, #0, #0xbe870 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) == 0) goto L_be870;
  /* be880: b #0xbe7e4 */
  goto L_be7e4;
L_be884:;
  /* be884: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* be888: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(780428));
  fn1_142548(c);
  /* be88c: ldr x8, [sp, #0x20] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
  /* be890: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* be894: b.ne #0xbe8a0 */
  if (ARC_COND(c, 1)) goto L_be8a0;
  /* be898: ldur x0, [x19, #-0x38] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(-56))));
  /* be89c: bl #0xa1518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(780448));
  fn1_a1518(c);
L_be8a0:;
  /* be8a0: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(780452));
  fn1_142488(c);
L_be8a4:;
  /* be8a4: ldr x8, [sp, #0x20] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
  /* be8a8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* be8ac: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* be8b0: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* be8b4: bl #0xbecd4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(780472));
  fn1_becd4(c);
L_be8b8:;
  /* be8b8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* be8bc: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(780480));
  fn1_142548(c);
  /* be8c0: ldur x0, [x19, #-0x38] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(-56))));
  /* be8c4: bl #0xa1518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(780488));
  fn1_a1518(c);
}

void fn1_d3f60(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038796128));
  /* d3f60: bti c */
  /* bti: no architectural effect here */
  /* d3f64: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* d3f68: b.eq #0xd4884 */
  if (ARC_COND(c, 0)) goto L_d4884;
  /* d3f6c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d3f70: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d3f74: stp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* d3f78: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* d3f7c: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* d3f80: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* d3f84: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d3f88: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* d3f8c: sub sp, sp, #0x330 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(816)));
  /* d3f90: ldrb w22, [x0] */
  ARC_W_W(c, 22, arc_ld8(ARC_X_R(c, 0)));
  /* d3f94: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* d3f98: cmp w22, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(45));
  /* d3f9c: mov w9, w22 */
  ARC_W_W(c, 9, ARC_W_R(c, 22));
  /* d3fa0: b.ne #0xd3fb4 */
  if (ARC_COND(c, 1)) goto L_d3fb4;
  /* d3fa4: add x20, x0, #1 */
  ARC_X_W(c, 20, (ARC_X_R(c, 0) + UINT64_C(1)));
  /* d3fa8: cmp x20, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 1));
  /* d3fac: b.eq #0xd43b4 */
  if (ARC_COND(c, 0)) goto L_d43b4;
  /* d3fb0: ldrb w9, [x20] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 20)));
L_d3fb4:;
  /* d3fb4: sub w10, w9, #0x5b */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) - UINT64_C(91)));
  /* d3fb8: orr w11, w9, #0x20 */
  ARC_W_W(c, 11, (ARC_W_R(c, 9) | UINT64_C(32)));
  /* d3fbc: cmn w10, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 10), UINT64_C(26), 0);
  /* d3fc0: csel w9, w9, w11, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 11)));
  /* d3fc4: cmp w9, #0x6e */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(110));
  /* d3fc8: b.eq #0xd40d0 */
  if (ARC_COND(c, 0)) goto L_d40d0;
  /* d3fcc: cmp w9, #0x69 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(105));
  /* d3fd0: b.ne #0xd4184 */
  if (ARC_COND(c, 1)) goto L_d4184;
  /* d3fd4: add x9, x20, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) + UINT64_C(1)));
  /* d3fd8: sub x10, x1, x9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 1) - ARC_X_R(c, 9)));
  /* d3fdc: cmp x10, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(1));
  /* d3fe0: b.le #0xd43b4 */
  if (ARC_COND(c, 13)) goto L_d43b4;
  /* d3fe4: ldrb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* d3fe8: sub w10, w9, #0x5b */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) - UINT64_C(91)));
  /* d3fec: orr w11, w9, #0x20 */
  ARC_W_W(c, 11, (ARC_W_R(c, 9) | UINT64_C(32)));
  /* d3ff0: cmn w10, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 10), UINT64_C(26), 0);
  /* d3ff4: csel w9, w9, w11, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 11)));
  /* d3ff8: cmp w9, #0x6e */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(110));
  /* d3ffc: b.ne #0xd43b4 */
  if (ARC_COND(c, 1)) goto L_d43b4;
  /* d4000: ldrb w9, [x20, #2] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 20) + INT64_C(2))));
  /* d4004: sub w10, w9, #0x5b */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) - UINT64_C(91)));
  /* d4008: orr w11, w9, #0x20 */
  ARC_W_W(c, 11, (ARC_W_R(c, 9) | UINT64_C(32)));
  /* d400c: cmn w10, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 10), UINT64_C(26), 0);
  /* d4010: csel w9, w9, w11, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 11)));
  /* d4014: cmp w9, #0x66 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(102));
  /* d4018: b.ne #0xd43b4 */
  if (ARC_COND(c, 1)) goto L_d43b4;
  /* d401c: add x9, x20, #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) + UINT64_C(3)));
  /* d4020: sub x10, x1, x9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 1) - ARC_X_R(c, 9)));
  /* d4024: cmp x10, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(5));
  /* d4028: b.lt #0xd40bc */
  if (ARC_COND(c, 11)) goto L_d40bc;
  /* d402c: ldrb w10, [x9] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 9)));
  /* d4030: sub w11, w10, #0x5b */
  ARC_W_W(c, 11, (ARC_W_R(c, 10) - UINT64_C(91)));
  /* d4034: orr w12, w10, #0x20 */
  ARC_W_W(c, 12, (ARC_W_R(c, 10) | UINT64_C(32)));
  /* d4038: cmn w11, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 11), UINT64_C(26), 0);
  /* d403c: csel w10, w10, w12, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 12)));
  /* d4040: cmp w10, #0x69 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(105));
  /* d4044: b.ne #0xd40bc */
  if (ARC_COND(c, 1)) goto L_d40bc;
  /* d4048: ldrb w10, [x20, #4] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 20) + INT64_C(4))));
  /* d404c: sub w11, w10, #0x5b */
  ARC_W_W(c, 11, (ARC_W_R(c, 10) - UINT64_C(91)));
  /* d4050: orr w12, w10, #0x20 */
  ARC_W_W(c, 12, (ARC_W_R(c, 10) | UINT64_C(32)));
  /* d4054: cmn w11, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 11), UINT64_C(26), 0);
  /* d4058: csel w10, w10, w12, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 12)));
  /* d405c: cmp w10, #0x6e */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(110));
  /* d4060: b.ne #0xd40bc */
  if (ARC_COND(c, 1)) goto L_d40bc;
  /* d4064: ldrb w10, [x20, #5] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 20) + INT64_C(5))));
  /* d4068: sub w11, w10, #0x5b */
  ARC_W_W(c, 11, (ARC_W_R(c, 10) - UINT64_C(91)));
  /* d406c: orr w12, w10, #0x20 */
  ARC_W_W(c, 12, (ARC_W_R(c, 10) | UINT64_C(32)));
  /* d4070: cmn w11, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 11), UINT64_C(26), 0);
  /* d4074: csel w10, w10, w12, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 12)));
  /* d4078: cmp w10, #0x69 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(105));
  /* d407c: b.ne #0xd40bc */
  if (ARC_COND(c, 1)) goto L_d40bc;
  /* d4080: ldrb w10, [x20, #6] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 20) + INT64_C(6))));
  /* d4084: sub w11, w10, #0x5b */
  ARC_W_W(c, 11, (ARC_W_R(c, 10) - UINT64_C(91)));
  /* d4088: orr w12, w10, #0x20 */
  ARC_W_W(c, 12, (ARC_W_R(c, 10) | UINT64_C(32)));
  /* d408c: cmn w11, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 11), UINT64_C(26), 0);
  /* d4090: csel w10, w10, w12, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 12)));
  /* d4094: cmp w10, #0x74 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(116));
  /* d4098: b.ne #0xd40bc */
  if (ARC_COND(c, 1)) goto L_d40bc;
  /* d409c: ldrb w10, [x20, #7] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 20) + INT64_C(7))));
  /* d40a0: sub w11, w10, #0x5b */
  ARC_W_W(c, 11, (ARC_W_R(c, 10) - UINT64_C(91)));
  /* d40a4: orr w12, w10, #0x20 */
  ARC_W_W(c, 12, (ARC_W_R(c, 10) | UINT64_C(32)));
  /* d40a8: cmn w11, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 11), UINT64_C(26), 0);
  /* d40ac: add x11, x20, #8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* d40b0: csel w10, w10, w12, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 12)));
  /* d40b4: cmp w10, #0x79 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(121));
  /* d40b8: csel x9, x11, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 9)));
L_d40bc:;
  /* d40bc: cmp w22, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(45));
  /* d40c0: sub x9, x9, x0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 0)));
  /* d40c4: b.ne #0xd42f4 */
  if (ARC_COND(c, 1)) goto L_d42f4;
  /* d40c8: mov x10, #-0x10000000000000 */
  ARC_X_W(c, 10, UINT64_C(18442240474082181120));
  /* d40cc: b #0xd43a4 */
  goto L_d43a4;
L_d40d0:;
  /* d40d0: add x9, x20, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) + UINT64_C(1)));
  /* d40d4: sub x10, x1, x9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 1) - ARC_X_R(c, 9)));
  /* d40d8: cmp x10, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(1));
  /* d40dc: b.le #0xd43b4 */
  if (ARC_COND(c, 13)) goto L_d43b4;
  /* d40e0: ldrb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* d40e4: sub w10, w9, #0x5b */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) - UINT64_C(91)));
  /* d40e8: orr w11, w9, #0x20 */
  ARC_W_W(c, 11, (ARC_W_R(c, 9) | UINT64_C(32)));
  /* d40ec: cmn w10, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 10), UINT64_C(26), 0);
  /* d40f0: csel w9, w9, w11, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 11)));
  /* d40f4: cmp w9, #0x61 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(97));
  /* d40f8: b.ne #0xd43b4 */
  if (ARC_COND(c, 1)) goto L_d43b4;
  /* d40fc: ldrb w9, [x20, #2] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 20) + INT64_C(2))));
  /* d4100: sub w10, w9, #0x5b */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) - UINT64_C(91)));
  /* d4104: orr w11, w9, #0x20 */
  ARC_W_W(c, 11, (ARC_W_R(c, 9) | UINT64_C(32)));
  /* d4108: cmn w10, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 10), UINT64_C(26), 0);
  /* d410c: csel w9, w9, w11, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 11)));
  /* d4110: cmp w9, #0x6e */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(110));
  /* d4114: b.ne #0xd43b4 */
  if (ARC_COND(c, 1)) goto L_d43b4;
  /* d4118: add x9, x20, #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) + UINT64_C(3)));
  /* d411c: sub x10, x1, x9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 1) - ARC_X_R(c, 9)));
  /* d4120: cmp x10, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(2));
  /* d4124: b.lt #0xd438c */
  if (ARC_COND(c, 11)) goto L_d438c;
  /* d4128: ldrb w10, [x9] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 9)));
  /* d412c: cmp w10, #0x28 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(40));
  /* d4130: b.ne #0xd438c */
  if (ARC_COND(c, 1)) goto L_d438c;
  /* d4134: add x10, x20, #5 */
  ARC_X_W(c, 10, (ARC_X_R(c, 20) + UINT64_C(5)));
  /* d4138: mov w11, #1 */
  ARC_W_W(c, 11, UINT64_C(1));
  /* d413c: mov x12, x10 */
  ARC_X_W(c, 12, ARC_X_R(c, 10));
L_d4140:;
  /* d4140: ldurb w13, [x10, #-1] */
  ARC_W_W(c, 13, arc_ld8((ARC_X_R(c, 10) + INT64_C(-1))));
  /* d4144: cmp w13, #0x5f */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(95));
  /* d4148: b.eq #0xd416c */
  if (ARC_COND(c, 0)) goto L_d416c;
  /* d414c: cmp w13, #0x29 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(41));
  /* d4150: b.eq #0xd4388 */
  if (ARC_COND(c, 0)) goto L_d4388;
  /* d4154: orr w14, w13, #0x20 */
  ARC_W_W(c, 14, (ARC_W_R(c, 13) | UINT64_C(32)));
  /* d4158: sub w13, w13, #0x3a */
  ARC_W_W(c, 13, (ARC_W_R(c, 13) - UINT64_C(58)));
  /* d415c: sub w14, w14, #0x7b */
  ARC_W_W(c, 14, (ARC_W_R(c, 14) - UINT64_C(123)));
  /* d4160: cmn w14, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 14), UINT64_C(26), 0);
  /* d4164: ccmn w13, #0xa, #2, lo */
  if (ARC_COND(c, 3)) { (void)arc_add32(c, ARC_W_R(c, 13), UINT64_C(10), 0); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 1; (c)->vf = 0; }
  /* d4168: b.lo #0xd438c */
  if (ARC_COND(c, 3)) goto L_d438c;
L_d416c:;
  /* d416c: cmp x10, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 1));
  /* d4170: b.eq #0xd438c */
  if (ARC_COND(c, 0)) goto L_d438c;
  /* d4174: add x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(1)));
  /* d4178: add x12, x12, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(1)));
  /* d417c: add x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* d4180: b #0xd4140 */
  goto L_d4140;
L_d4184:;
  /* d4184: cmp w2, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 2), UINT64_C(4));
  /* d4188: mov x11, x1 */
  ARC_X_W(c, 11, ARC_X_R(c, 1));
  /* d418c: sub x1, x1, x0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* d4190: sub x19, x20, x0 */
  ARC_X_W(c, 19, (ARC_X_R(c, 20) - ARC_X_R(c, 0)));
  /* d4194: b.ne #0xd4258 */
  if (ARC_COND(c, 1)) goto L_d4258;
  /* d4198: cmp x19, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 1));
  /* d419c: b.hs #0xd43b4 */
  if (ARC_COND(c, 2)) goto L_d43b4;
  /* d41a0: mov w24, wzr */
  ARC_W_W(c, 24, ARC_W_R(c, 31));
  /* d41a4: mov w21, wzr */
  ARC_W_W(c, 21, ARC_W_R(c, 31));
  /* d41a8: mov w12, wzr */
  ARC_W_W(c, 12, ARC_W_R(c, 31));
  /* d41ac: mov w10, wzr */
  ARC_W_W(c, 10, ARC_W_R(c, 31));
  /* d41b0: mov x23, xzr */
  ARC_X_W(c, 23, ARC_X_R(c, 31));
  /* d41b4: sub x9, x11, x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) - ARC_X_R(c, 20)));
  /* d41b8: mov x11, #0xffffffffffffffe */
  ARC_X_W(c, 11, UINT64_C(1152921504606846974));
  /* d41bc: b #0xd41e4 */
  goto L_d41e4;
L_d41c0:;
  /* d41c0: cmp w12, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(0));
  /* d41c4: add w12, w24, #4 */
  ARC_W_W(c, 12, (ARC_W_R(c, 24) + UINT64_C(4)));
  /* d41c8: csinc w21, w21, wzr, eq */
  ARC_W_W(c, 21, (ARC_COND(c, 0) ? (ARC_W_R(c, 21)) : ((ARC_W_R(c, 31)) + 1)));
  /* d41cc: tst w10, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1)));
  /* d41d0: csel w24, w24, w12, ne */
  ARC_W_W(c, 24, (ARC_COND(c, 1) ? (ARC_W_R(c, 24)) : ARC_W_R(c, 12)));
L_d41d4:;
  /* d41d4: mov w12, #1 */
  ARC_W_W(c, 12, UINT64_C(1));
L_d41d8:;
  /* d41d8: subs x9, x9, #1 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 9), UINT64_C(1)));
  /* d41dc: add x19, x19, #1 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* d41e0: b.eq #0xd42fc */
  if (ARC_COND(c, 0)) goto L_d42fc;
L_d41e4:;
  /* d41e4: ldrb w14, [x0, x19] */
  ARC_W_W(c, 14, arc_ld8((ARC_X_R(c, 0) + ARC_X_R(c, 19))));
  /* d41e8: sub w13, w14, #0x30 */
  ARC_W_W(c, 13, (ARC_W_R(c, 14) - UINT64_C(48)));
  /* d41ec: orr w15, w14, #0x20 */
  ARC_W_W(c, 15, (ARC_W_R(c, 14) | UINT64_C(32)));
  /* d41f0: sub w16, w15, #0x67 */
  ARC_W_W(c, 16, (ARC_W_R(c, 15) - UINT64_C(103)));
  /* d41f4: cmp w13, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(10));
  /* d41f8: ccmn w16, #6, #2, hs */
  if (ARC_COND(c, 2)) { (void)arc_add32(c, ARC_W_R(c, 16), UINT64_C(6), 0); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 1; (c)->vf = 0; }
  /* d41fc: b.lo #0xd4240 */
  if (ARC_COND(c, 3)) goto L_d4240;
  /* d4200: sub w12, w14, #0x5b */
  ARC_W_W(c, 12, (ARC_W_R(c, 14) - UINT64_C(91)));
  /* d4204: cmn w12, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 12), UINT64_C(26), 0);
  /* d4208: csel w12, w14, w15, lo */
  ARC_W_W(c, 12, (ARC_COND(c, 3) ? (ARC_W_R(c, 14)) : ARC_W_R(c, 15)));
  /* d420c: sub w12, w12, #0x61 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) - UINT64_C(97)));
  /* d4210: and w12, w12, #0xff */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) & UINT64_C(255)));
  /* d4214: add w14, w12, #0xa */
  ARC_W_W(c, 14, (ARC_W_R(c, 12) + UINT64_C(10)));
  /* d4218: cmp w12, #6 */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(6));
  /* d421c: csel w12, w14, w13, lo */
  ARC_W_W(c, 12, (ARC_COND(c, 3) ? (ARC_W_R(c, 14)) : ARC_W_R(c, 13)));
  /* d4220: cmp x23, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 11));
  /* d4224: b.hi #0xd41c0 */
  if (ARC_COND(c, 8)) goto L_d41c0;
  /* d4228: lsl x13, x23, #4 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 23)) << ((UINT64_C(4)) & 63)));
  /* d422c: tst w10, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1)));
  /* d4230: add x23, x13, w12, uxtw */
  ARC_X_W(c, 23, (ARC_X_R(c, 13) + ((uint64_t)(uint32_t)(ARC_W_R(c, 12)))));
  /* d4234: sub w12, w24, #4 */
  ARC_W_W(c, 12, (ARC_W_R(c, 24) - UINT64_C(4)));
  /* d4238: csel w24, w12, w24, ne */
  ARC_W_W(c, 24, (ARC_COND(c, 1) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 24)));
  /* d423c: b #0xd41d4 */
  goto L_d41d4;
L_d4240:;
  /* d4240: cmp w14, #0x2e */
  (void)arc_sub32(c, ARC_W_R(c, 14), UINT64_C(46));
  /* d4244: cset w13, ne */
  ARC_W_W(c, 13, (ARC_COND(c, 1) ? 1 : 0));
  /* d4248: orr w10, w10, w13 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 13)));
  /* d424c: tbnz w10, #0, #0xd4300 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_d4300;
  /* d4250: mov w10, #1 */
  ARC_W_W(c, 10, UINT64_C(1));
  /* d4254: b #0xd41d8 */
  goto L_d41d8;
L_d4258:;
  /* d4258: cmp x19, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 1));
  /* d425c: b.ge #0xd43b4 */
  if (ARC_COND(c, 10)) goto L_d43b4;
  /* d4260: sub x21, x11, x20 */
  ARC_X_W(c, 21, (ARC_X_R(c, 11) - ARC_X_R(c, 20)));
  /* d4264: mov x11, #-0x6666666666666667 */
  ARC_X_W(c, 11, UINT64_C(11068046444225730969));
  /* d4268: mov w24, wzr */
  ARC_W_W(c, 24, ARC_W_R(c, 31));
  /* d426c: mov w23, wzr */
  ARC_W_W(c, 23, ARC_W_R(c, 31));
  /* d4270: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* d4274: mov w10, wzr */
  ARC_W_W(c, 10, ARC_W_R(c, 31));
  /* d4278: mov x25, xzr */
  ARC_X_W(c, 25, ARC_X_R(c, 31));
  /* d427c: and x11, x11, #0x7ffffffffffffff8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) & UINT64_C(9223372036854775800)));
  /* d4280: mov w12, #0xa */
  ARC_W_W(c, 12, UINT64_C(10));
  /* d4284: mov x13, x21 */
  ARC_X_W(c, 13, ARC_X_R(c, 21));
  /* d4288: b #0xd42ac */
  goto L_d42ac;
L_d428c:;
  /* d428c: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* d4290: cmp w14, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 14), UINT64_C(0));
  /* d4294: bic w14, w9, w10 */
  ARC_W_W(c, 14, (ARC_W_R(c, 9) & (~ARC_W_R(c, 10))));
  /* d4298: csinc w23, w23, wzr, eq */
  ARC_W_W(c, 23, (ARC_COND(c, 0) ? (ARC_W_R(c, 23)) : ((ARC_W_R(c, 31)) + 1)));
  /* d429c: add w24, w24, w14 */
  ARC_W_W(c, 24, (ARC_W_R(c, 24) + ARC_W_R(c, 14)));
L_d42a0:;
  /* d42a0: subs x13, x13, #1 */
  ARC_X_W(c, 13, arc_sub64(c, ARC_X_R(c, 13), UINT64_C(1)));
  /* d42a4: add x19, x19, #1 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* d42a8: b.eq #0xd435c */
  if (ARC_COND(c, 0)) goto L_d435c;
L_d42ac:;
  /* d42ac: ldrb w15, [x0, x19] */
  ARC_W_W(c, 15, arc_ld8((ARC_X_R(c, 0) + ARC_X_R(c, 19))));
  /* d42b0: sub w14, w15, #0x30 */
  ARC_W_W(c, 14, (ARC_W_R(c, 15) - UINT64_C(48)));
  /* d42b4: cmp w14, #9 */
  (void)arc_sub32(c, ARC_W_R(c, 14), UINT64_C(9));
  /* d42b8: b.ls #0xd42d4 */
  if (ARC_COND(c, 9)) goto L_d42d4;
  /* d42bc: cmp w15, #0x2e */
  (void)arc_sub32(c, ARC_W_R(c, 15), UINT64_C(46));
  /* d42c0: cset w14, ne */
  ARC_W_W(c, 14, (ARC_COND(c, 1) ? 1 : 0));
  /* d42c4: orr w10, w10, w14 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 14)));
  /* d42c8: tbnz w10, #0, #0xd43b0 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_d43b0;
  /* d42cc: mov w10, #1 */
  ARC_W_W(c, 10, UINT64_C(1));
  /* d42d0: b #0xd42a0 */
  goto L_d42a0;
L_d42d4:;
  /* d42d4: cmp x25, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 11));
  /* d42d8: b.hi #0xd428c */
  if (ARC_COND(c, 8)) goto L_d428c;
  /* d42dc: mul x9, x25, x12 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 25)) * (uint64_t)(ARC_X_R(c, 12))));
  /* d42e0: add x25, x9, w14, uxtw */
  ARC_X_W(c, 25, (ARC_X_R(c, 9) + ((uint64_t)(uint32_t)(ARC_W_R(c, 14)))));
  /* d42e4: and w9, w10, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 10) & UINT64_C(1)));
  /* d42e8: sub w24, w24, w9 */
  ARC_W_W(c, 24, (ARC_W_R(c, 24) - ARC_W_R(c, 9)));
  /* d42ec: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* d42f0: b #0xd42a0 */
  goto L_d42a0;
L_d42f4:;
  /* d42f4: mov x10, #0x7ff0000000000000 */
  ARC_X_W(c, 10, UINT64_C(9218868437227405312));
  /* d42f8: b #0xd43a4 */
  goto L_d43a4;
L_d42fc:;
  /* d42fc: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
L_d4300:;
  /* d4300: tbz w12, #0, #0xd43b4 */
  if (((ARC_W_R(c, 12)) >> 0 & 1) == 0) goto L_d43b4;
  /* d4304: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* d4308: mov w3, #0x70 */
  ARC_W_W(c, 3, UINT64_C(112));
  /* d430c: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* d4310: bl #0xd2cb4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(869140));
  fn1_d2cb4(c);
  /* d4314: cbz x23, #0xd43f4 */
  if ((ARC_X_R(c, 23)) == 0) goto L_d43f4;
  /* d4318: sxtw x8, w1 */
  ARC_X_W(c, 8, ((int64_t)(int32_t)(ARC_W_R(c, 1))));
  /* d431c: mov x9, #-0x7ff */
  ARC_X_W(c, 9, UINT64_C(18446744073709549569));
  /* d4320: clz x10, x23 */
  ARC_X_W(c, 10, arc_clz64(ARC_X_R(c, 23)));
  /* d4324: add x8, x8, w24, sxtw */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)(int64_t)(int32_t)(ARC_W_R(c, 24)))));
  /* d4328: cmn x8, #0x7ff */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(2047), 0);
  /* d432c: csel x8, x8, x9, gt */
  ARC_X_W(c, 8, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d4330: mov w9, #0x7ff */
  ARC_W_W(c, 9, UINT64_C(2047));
  /* d4334: cmp x8, #0x7ff */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2047));
  /* d4338: csel x8, x8, x9, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d433c: sub w11, w8, w10 */
  ARC_W_W(c, 11, (ARC_W_R(c, 8) - ARC_W_R(c, 10)));
  /* d4340: cmp w11, #0x3c0 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(960));
  /* d4344: b.le #0xd440c */
  if (ARC_COND(c, 13)) goto L_d440c;
  /* d4348: mov x12, xzr */
  ARC_X_W(c, 12, ARC_X_R(c, 31));
  /* d434c: mov w11, wzr */
  ARC_W_W(c, 11, ARC_W_R(c, 31));
  /* d4350: mov w10, #0x22 */
  ARC_W_W(c, 10, UINT64_C(34));
  /* d4354: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* d4358: b #0xd4738 */
  goto L_d4738;
L_d435c:;
  /* d435c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* d4360: tbz w9, #0, #0xd43b4 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_d43b4;
L_d4364:;
  /* d4364: cmp w2, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 2), UINT64_C(2));
  /* d4368: b.ne #0xd43c0 */
  if (ARC_COND(c, 1)) goto L_d43c0;
  /* d436c: cmn w24, #0x7ff */
  (void)arc_add32(c, ARC_W_R(c, 24), UINT64_C(2047), 0);
  /* d4370: mov w9, #-0x7ff */
  ARC_W_W(c, 9, UINT64_C(18446744073709549569));
  /* d4374: mov w10, #0x7ff */
  ARC_W_W(c, 10, UINT64_C(2047));
  /* d4378: csel w9, w24, w9, gt */
  ARC_W_W(c, 9, (ARC_COND(c, 12) ? (ARC_W_R(c, 24)) : ARC_W_R(c, 9)));
  /* d437c: cmp w9, #0x7ff */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(2047));
  /* d4380: csel w9, w9, w10, lt */
  ARC_W_W(c, 9, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* d4384: b #0xd4454 */
  goto L_d4454;
L_d4388:;
  /* d4388: mov x9, x12 */
  ARC_X_W(c, 9, ARC_X_R(c, 12));
L_d438c:;
  /* d438c: cmp w22, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(45));
  /* d4390: sub x9, x9, x0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 0)));
  /* d4394: b.ne #0xd43a0 */
  if (ARC_COND(c, 1)) goto L_d43a0;
  /* d4398: mov x10, #-0x8000000000000 */
  ARC_X_W(c, 10, UINT64_C(18444492273895866368));
  /* d439c: b #0xd43a4 */
  goto L_d43a4;
L_d43a0:;
  /* d43a0: mov x10, #0x7ff8000000000000 */
  ARC_X_W(c, 10, UINT64_C(9221120237041090560));
L_d43a4:;
  /* d43a4: stp x10, x9, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* d43a8: str wzr, [x8, #0x10] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(16)), ARC_W_R(c, 31));
  /* d43ac: b #0xd4770 */
  goto L_d4770;
L_d43b0:;
  /* d43b0: tbnz w9, #0, #0xd4364 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_d4364;
L_d43b4:;
  /* d43b4: mov w9, #0x16 */
  ARC_W_W(c, 9, UINT64_C(22));
  /* d43b8: stp xzr, xzr, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* d43bc: b #0xd476c */
  goto L_d476c;
L_d43c0:;
  /* d43c0: mov w27, w2 */
  ARC_W_W(c, 27, ARC_W_R(c, 2));
  /* d43c4: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* d43c8: mov w3, #0x65 */
  ARC_W_W(c, 3, UINT64_C(101));
  /* d43cc: mov x26, x8 */
  ARC_X_W(c, 26, ARC_X_R(c, 8));
  /* d43d0: bl #0xd2cb4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(869332));
  fn1_d2cb4(c);
  /* d43d4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d43d8: cmp w27, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 27), UINT64_C(1));
  /* d43dc: b.ne #0xd4430 */
  if (ARC_COND(c, 1)) goto L_d4430;
  /* d43e0: tbnz x1, #0x20, #0xd4430 */
  if (((ARC_X_R(c, 1)) >> 32 & 1) != 0) goto L_d4430;
  /* d43e4: mov w8, #0x16 */
  ARC_W_W(c, 8, UINT64_C(22));
  /* d43e8: stp xzr, xzr, [x26] */
  { const uint64_t _pa = ARC_X_R(c, 26);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* d43ec: str w8, [x26, #0x10] */
  arc_st32((ARC_X_R(c, 26) + INT64_C(16)), ARC_W_R(c, 8));
  /* d43f0: b #0xd4770 */
  goto L_d4770;
L_d43f4:;
  /* d43f4: mov x12, xzr */
  ARC_X_W(c, 12, ARC_X_R(c, 31));
  /* d43f8: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* d43fc: mov w10, wzr */
  ARC_W_W(c, 10, ARC_W_R(c, 31));
  /* d4400: mov w11, #1 */
  ARC_W_W(c, 11, UINT64_C(1));
  /* d4404: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* d4408: b #0xd4738 */
  goto L_d4738;
L_d440c:;
  /* d440c: cmn w11, #0x43e */
  (void)arc_add32(c, ARC_W_R(c, 11), UINT64_C(1086), 0);
  /* d4410: b.gt #0xd44bc */
  if (ARC_COND(c, 12)) goto L_d44bc;
  /* d4414: cmn w11, #0x472 */
  (void)arc_add32(c, ARC_W_R(c, 11), UINT64_C(1138), 0);
  /* d4418: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* d441c: b.hs #0xd4668 */
  if (ARC_COND(c, 2)) goto L_d4668;
  /* d4420: mov x12, xzr */
  ARC_X_W(c, 12, ARC_X_R(c, 31));
  /* d4424: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* d4428: mov w11, wzr */
  ARC_W_W(c, 11, ARC_W_R(c, 31));
  /* d442c: b #0xd4734 */
  goto L_d4734;
L_d4430:;
  /* d4430: sxtw x8, w1 */
  ARC_X_W(c, 8, ((int64_t)(int32_t)(ARC_W_R(c, 1))));
  /* d4434: mov x9, #-0x7ff */
  ARC_X_W(c, 9, UINT64_C(18446744073709549569));
  /* d4438: add x8, x8, w24, sxtw */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)(int64_t)(int32_t)(ARC_W_R(c, 24)))));
  /* d443c: cmn x8, #0x7ff */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(2047), 0);
  /* d4440: csel x8, x8, x9, gt */
  ARC_X_W(c, 8, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d4444: mov w9, #0x7ff */
  ARC_W_W(c, 9, UINT64_C(2047));
  /* d4448: cmp x8, #0x7ff */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2047));
  /* d444c: csel x9, x8, x9, lt */
  ARC_X_W(c, 9, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d4450: mov x8, x26 */
  ARC_X_W(c, 8, ARC_X_R(c, 26));
L_d4454:;
  /* d4454: cbz x25, #0xd4470 */
  if ((ARC_X_R(c, 25)) == 0) goto L_d4470;
  /* d4458: cmp w9, #0x135 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(309));
  /* d445c: b.le #0xd4480 */
  if (ARC_COND(c, 13)) goto L_d4480;
  /* d4460: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* d4464: mov w10, #0x22 */
  ARC_W_W(c, 10, UINT64_C(34));
  /* d4468: mov w24, #0x7ff */
  ARC_W_W(c, 24, UINT64_C(2047));
  /* d446c: b #0xd4494 */
  goto L_d4494;
L_d4470:;
  /* d4470: mov w10, wzr */
  ARC_W_W(c, 10, ARC_W_R(c, 31));
  /* d4474: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* d4478: mov x11, xzr */
  ARC_X_W(c, 11, ARC_X_R(c, 31));
  /* d447c: b #0xd449c */
  goto L_d449c;
L_d4480:;
  /* d4480: cmn w9, #0x158 */
  (void)arc_add32(c, ARC_W_R(c, 9), UINT64_C(344), 0);
  /* d4484: b.ge #0xd44cc */
  if (ARC_COND(c, 10)) goto L_d44cc;
  /* d4488: mov w24, wzr */
  ARC_W_W(c, 24, ARC_W_R(c, 31));
L_d448c:;
  /* d448c: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
L_d4490:;
  /* d4490: mov w10, #0x22 */
  ARC_W_W(c, 10, UINT64_C(34));
L_d4494:;
  /* d4494: ubfiz x11, x24, #0x34, #0xb */
  ARC_X_W(c, 11, ((uint64_t)((((uint64_t)(ARC_X_R(c, 24))) & UINT64_C(2047))) << 52));
  /* d4498: and x9, x9, #0xfffffffffffff */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(4503599627370495)));
L_d449c:;
  /* d449c: orr x9, x11, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) | ARC_X_R(c, 9)));
  /* d44a0: str x19, [x8, #8] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(8)), ARC_X_R(c, 19));
  /* d44a4: fmov d0, x9 */
  arc_du_w(c, 0, (uint64_t)(ARC_X_R(c, 9)));
  /* d44a8: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* d44ac: mov w9, #0x22 */
  ARC_W_W(c, 9, UINT64_C(34));
  /* d44b0: ccmp x11, #0, #0, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(0)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* d44b4: ccmp w10, w9, #0, eq */
  if (ARC_COND(c, 0)) { (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 9)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* d44b8: b #0xd4758 */
  goto L_d4758;
L_d44bc:;
  /* d44bc: add w9, w11, #0x43e */
  ARC_W_W(c, 9, (ARC_W_R(c, 11) + UINT64_C(1086)));
  /* d44c0: mov w11, #0xb */
  ARC_W_W(c, 11, UINT64_C(11));
  /* d44c4: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* d44c8: b #0xd4674 */
  goto L_d4674;
L_d44cc:;
  /* d44cc: lsr x10, x25, #0x34 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 25)) >> ((UINT64_C(52)) & 63)));
  /* d44d0: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* d44d4: cset w10, ne */
  ARC_W_W(c, 10, (ARC_COND(c, 1) ? 1 : 0));
  /* d44d8: orr w11, w23, w10 */
  ARC_W_W(c, 11, (ARC_W_R(c, 23) | ARC_W_R(c, 10)));
  /* d44dc: mov w10, w9 */
  ARC_W_W(c, 10, ARC_W_R(c, 9));
  /* d44e0: tbz w11, #0, #0xd46d8 */
  if (((ARC_W_R(c, 11)) >> 0 & 1) == 0) goto L_d46d8;
L_d44e4:;
  /* d44e4: add w10, w10, #0x15c */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(348)));
  /* d44e8: nop  */
  /* nop: no architectural effect here */
  /* d44ec: adr x11, #0x55820 */
  ARC_X_W(c, 11, (arc_image_bases[1] + UINT64_C(350240)));
  /* d44f0: add x10, x11, w10, uxtw #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 11) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 10)))) << 4)));
  /* d44f4: clz x13, x25 */
  ARC_X_W(c, 13, arc_clz64(ARC_X_R(c, 25)));
  /* d44f8: lsl x15, x25, x13 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 25)) << ((ARC_X_R(c, 13)) & 63)));
  /* d44fc: ldr x11, [x10, #8] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 10) + INT64_C(8))));
  /* d4500: umulh x12, x11, x15 */
  ARC_X_W(c, 12, arc_umulh(ARC_X_R(c, 11), ARC_X_R(c, 15)));
  /* d4504: mul x14, x11, x15 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 11)) * (uint64_t)(ARC_X_R(c, 15))));
  /* d4508: mvn w16, w12 */
  ARC_W_W(c, 16, (~(uint32_t)(ARC_W_R(c, 12))));
  /* d450c: tst x16, #0x1ff */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 16) & UINT64_C(511)));
  /* d4510: b.ne #0xd454c */
  if (ARC_COND(c, 1)) goto L_d454c;
  /* d4514: mvn x16, x15 */
  ARC_X_W(c, 16, (~(uint64_t)(ARC_X_R(c, 15))));
  /* d4518: cmp x14, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 16));
  /* d451c: b.ls #0xd454c */
  if (ARC_COND(c, 9)) goto L_d454c;
  /* d4520: ldr x17, [x10] */
  ARC_X_W(c, 17, arc_ld64(ARC_X_R(c, 10)));
  /* d4524: umulh x0, x17, x15 */
  ARC_X_W(c, 0, arc_umulh(ARC_X_R(c, 17), ARC_X_R(c, 15)));
  /* d4528: mul x15, x17, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 17)) * (uint64_t)(ARC_X_R(c, 15))));
  /* d452c: adds x14, x0, x14 */
  ARC_X_W(c, 14, arc_add64(c, ARC_X_R(c, 0), ARC_X_R(c, 14), 0));
  /* d4530: cinc x12, x12, hs */
  ARC_X_W(c, 12, (ARC_COND(c, 2) ? (ARC_X_R(c, 12)) + 1 : (ARC_X_R(c, 12))));
  /* d4534: cmp x15, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 16));
  /* d4538: b.ls #0xd454c */
  if (ARC_COND(c, 9)) goto L_d454c;
  /* d453c: and x15, x12, #0x1ff */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) & UINT64_C(511)));
  /* d4540: cmp x15, #0x1ff */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(511));
  /* d4544: ccmn x14, #1, #0, eq */
  if (ARC_COND(c, 0)) { (void)arc_add64(c, ARC_X_R(c, 14), UINT64_C(1), 0); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* d4548: b.eq #0xd47a8 */
  if (ARC_COND(c, 0)) goto L_d47a8;
L_d454c:;
  /* d454c: lsr x15, x12, #0x3f */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 12)) >> ((UINT64_C(63)) & 63)));
  /* d4550: add x16, x15, #9 */
  ARC_X_W(c, 16, (ARC_X_R(c, 15) + UINT64_C(9)));
  /* d4554: lsr x16, x12, x16 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 12)) >> ((ARC_X_R(c, 16)) & 63)));
  /* d4558: cbz x14, #0xd4794 */
  if ((ARC_X_R(c, 14)) == 0) goto L_d4794;
L_d455c:;
  /* d455c: mov w12, #0x526a */
  ARC_W_W(c, 12, UINT64_C(21098));
  /* d4560: and x14, x16, #1 */
  ARC_X_W(c, 14, (ARC_X_R(c, 16) & UINT64_C(1)));
  /* d4564: movk w12, #3, lsl #16 */
  ARC_W_W(c, 12, ((ARC_W_R(c, 12) & UINT64_C(18446744069414649855)) | UINT64_C(196608)));
  /* d4568: mul w9, w9, w12 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) * (uint32_t)(ARC_W_R(c, 12))));
  /* d456c: asr w12, w9, #0x10 */
  ARC_W_W(c, 12, ((uint32_t)((int32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(16)) & 31))));
  /* d4570: add x9, x14, x16 */
  ARC_X_W(c, 9, (ARC_X_R(c, 14) + ARC_X_R(c, 16)));
  /* d4574: lsr x14, x9, #0x36 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(54)) & 63)));
  /* d4578: sub w13, w12, w13 */
  ARC_W_W(c, 13, (ARC_W_R(c, 12) - ARC_W_R(c, 13)));
  /* d457c: cmp x14, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(0));
  /* d4580: add w13, w13, w15 */
  ARC_W_W(c, 13, (ARC_W_R(c, 13) + ARC_W_R(c, 15)));
  /* d4584: cinc w13, w13, ne */
  ARC_W_W(c, 13, (ARC_COND(c, 1) ? (ARC_W_R(c, 13)) + 1 : (ARC_W_R(c, 13))));
  /* d4588: sub w15, w13, #0x3c1 */
  ARC_W_W(c, 15, (ARC_W_R(c, 13) - UINT64_C(961)));
  /* d458c: cmn w15, #0x7fe */
  (void)arc_add32(c, ARC_W_R(c, 15), UINT64_C(2046), 0);
  /* d4590: b.lo #0xd47a8 */
  if (ARC_COND(c, 3)) goto L_d47a8;
  /* d4594: cmp x14, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(0));
  /* d4598: mov w14, #1 */
  ARC_W_W(c, 14, UINT64_C(1));
  /* d459c: add w24, w13, #0x43e */
  ARC_W_W(c, 24, (ARC_W_R(c, 13) + UINT64_C(1086)));
  /* d45a0: cinc x14, x14, ne */
  ARC_X_W(c, 14, (ARC_COND(c, 1) ? (ARC_X_R(c, 14)) + 1 : (ARC_X_R(c, 14))));
  /* d45a4: lsr x9, x9, x14 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((ARC_X_R(c, 14)) & 63)));
  /* d45a8: tbz w23, #0, #0xd4660 */
  if (((ARC_W_R(c, 23)) >> 0 & 1) == 0) goto L_d4660;
  /* d45ac: add x14, x25, #1 */
  ARC_X_W(c, 14, (ARC_X_R(c, 25) + UINT64_C(1)));
  /* d45b0: clz x13, x14 */
  ARC_X_W(c, 13, arc_clz64(ARC_X_R(c, 14)));
  /* d45b4: lsl x15, x14, x13 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 14)) << ((ARC_X_R(c, 13)) & 63)));
  /* d45b8: umulh x14, x11, x15 */
  ARC_X_W(c, 14, arc_umulh(ARC_X_R(c, 11), ARC_X_R(c, 15)));
  /* d45bc: mul x11, x11, x15 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 11)) * (uint64_t)(ARC_X_R(c, 15))));
  /* d45c0: mvn w16, w14 */
  ARC_W_W(c, 16, (~(uint32_t)(ARC_W_R(c, 14))));
  /* d45c4: tst x16, #0x1ff */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 16) & UINT64_C(511)));
  /* d45c8: b.ne #0xd4604 */
  if (ARC_COND(c, 1)) goto L_d4604;
  /* d45cc: mvn x16, x15 */
  ARC_X_W(c, 16, (~(uint64_t)(ARC_X_R(c, 15))));
  /* d45d0: cmp x11, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 16));
  /* d45d4: b.ls #0xd4604 */
  if (ARC_COND(c, 9)) goto L_d4604;
  /* d45d8: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* d45dc: umulh x17, x10, x15 */
  ARC_X_W(c, 17, arc_umulh(ARC_X_R(c, 10), ARC_X_R(c, 15)));
  /* d45e0: mul x10, x10, x15 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 15))));
  /* d45e4: adds x11, x17, x11 */
  ARC_X_W(c, 11, arc_add64(c, ARC_X_R(c, 17), ARC_X_R(c, 11), 0));
  /* d45e8: cinc x14, x14, hs */
  ARC_X_W(c, 14, (ARC_COND(c, 2) ? (ARC_X_R(c, 14)) + 1 : (ARC_X_R(c, 14))));
  /* d45ec: cmp x10, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 16));
  /* d45f0: b.ls #0xd4604 */
  if (ARC_COND(c, 9)) goto L_d4604;
  /* d45f4: and x10, x14, #0x1ff */
  ARC_X_W(c, 10, (ARC_X_R(c, 14) & UINT64_C(511)));
  /* d45f8: cmp x10, #0x1ff */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(511));
  /* d45fc: ccmn x11, #1, #0, eq */
  if (ARC_COND(c, 0)) { (void)arc_add64(c, ARC_X_R(c, 11), UINT64_C(1), 0); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* d4600: b.eq #0xd47a8 */
  if (ARC_COND(c, 0)) goto L_d47a8;
L_d4604:;
  /* d4604: lsr x10, x14, #0x3f */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 14)) >> ((UINT64_C(63)) & 63)));
  /* d4608: add x15, x10, #9 */
  ARC_X_W(c, 15, (ARC_X_R(c, 10) + UINT64_C(9)));
  /* d460c: lsr x15, x14, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 14)) >> ((ARC_X_R(c, 15)) & 63)));
  /* d4610: cbz x11, #0xd4ae8 */
  if ((ARC_X_R(c, 11)) == 0) goto L_d4ae8;
L_d4614:;
  /* d4614: and x11, x15, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 15) & UINT64_C(1)));
  /* d4618: sub w12, w12, w13 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) - ARC_W_R(c, 13)));
  /* d461c: add x11, x11, x15 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ARC_X_R(c, 15)));
  /* d4620: add w10, w12, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 12) + ARC_W_R(c, 10)));
  /* d4624: lsr x14, x11, #0x36 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(54)) & 63)));
  /* d4628: cmp x14, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(0));
  /* d462c: cinc w10, w10, ne */
  ARC_W_W(c, 10, (ARC_COND(c, 1) ? (ARC_W_R(c, 10)) + 1 : (ARC_W_R(c, 10))));
  /* d4630: sub w12, w10, #0x3c1 */
  ARC_W_W(c, 12, (ARC_W_R(c, 10) - UINT64_C(961)));
  /* d4634: cmn w12, #0x7fe */
  (void)arc_add32(c, ARC_W_R(c, 12), UINT64_C(2046), 0);
  /* d4638: b.lo #0xd47a8 */
  if (ARC_COND(c, 3)) goto L_d47a8;
  /* d463c: cmp x14, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(0));
  /* d4640: mov w12, #1 */
  ARC_W_W(c, 12, UINT64_C(1));
  /* d4644: cinc x12, x12, ne */
  ARC_X_W(c, 12, (ARC_COND(c, 1) ? (ARC_X_R(c, 12)) + 1 : (ARC_X_R(c, 12))));
  /* d4648: lsr x11, x11, x12 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 11)) >> ((ARC_X_R(c, 12)) & 63)));
  /* d464c: cmp x9, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 11));
  /* d4650: b.ne #0xd47a8 */
  if (ARC_COND(c, 1)) goto L_d47a8;
  /* d4654: add w10, w10, #0x43e */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(1086)));
  /* d4658: cmp w24, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 24), ARC_W_R(c, 10));
  /* d465c: b.ne #0xd47a8 */
  if (ARC_COND(c, 1)) goto L_d47a8;
L_d4660:;
  /* d4660: mov w10, wzr */
  ARC_W_W(c, 10, ARC_W_R(c, 31));
  /* d4664: b #0xd4494 */
  goto L_d4494;
L_d4668:;
  /* d4668: mov w12, #-0x432 */
  ARC_W_W(c, 12, UINT64_C(18446744073709550542));
  /* d466c: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* d4670: sub w11, w12, w11 */
  ARC_W_W(c, 11, (ARC_W_R(c, 12) - ARC_W_R(c, 11)));
L_d4674:;
  /* d4674: sub w12, w11, #1 */
  ARC_W_W(c, 12, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* d4678: mov w13, #1 */
  ARC_W_W(c, 13, UINT64_C(1));
  /* d467c: lsl x10, x23, x10 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 23)) << ((ARC_X_R(c, 10)) & 63)));
  /* d4680: lsl x12, x13, x12 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 13)) << ((ARC_X_R(c, 12)) & 63)));
  /* d4684: lsr x14, x10, x11 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 10)) >> ((ARC_X_R(c, 11)) & 63)));
  /* d4688: sub x13, x12, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 12) - UINT64_C(1)));
  /* d468c: and x15, x12, x10 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) & ARC_X_R(c, 10)));
  /* d4690: tst x13, x10 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 13) & ARC_X_R(c, 10)));
  /* d4694: and x12, x14, #0xfffffffffffff */
  ARC_X_W(c, 12, (ARC_X_R(c, 14) & UINT64_C(4503599627370495)));
  /* d4698: cset w10, ne */
  ARC_W_W(c, 10, (ARC_COND(c, 1) ? 1 : 0));
  /* d469c: cmp w11, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(64));
  /* d46a0: csel x12, x12, xzr, lo */
  ARC_X_W(c, 12, (ARC_COND(c, 3) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 31)));
  /* d46a4: cbz x15, #0xd4718 */
  if ((ARC_X_R(c, 15)) == 0) goto L_d4718;
  /* d46a8: orr w10, w21, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 21) | ARC_W_R(c, 10)));
  /* d46ac: orr w10, w12, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 12) | ARC_W_R(c, 10)));
  /* d46b0: tbz w10, #0, #0xd4718 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) == 0) goto L_d4718;
  /* d46b4: mov x10, #0xfffffffffffff */
  ARC_X_W(c, 10, UINT64_C(4503599627370495));
  /* d46b8: cmp x12, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 10));
  /* d46bc: b.ne #0xd4714 */
  if (ARC_COND(c, 1)) goto L_d4714;
  /* d46c0: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* d46c4: mov x12, #0x10000000000000 */
  ARC_X_W(c, 12, UINT64_C(4503599627370496));
  /* d46c8: cmp w9, #0x7ff */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(2047));
  /* d46cc: b.ne #0xd471c */
  if (ARC_COND(c, 1)) goto L_d471c;
  /* d46d0: mov w9, #0x7ff */
  ARC_W_W(c, 9, UINT64_C(2047));
  /* d46d4: b #0xd472c */
  goto L_d472c;
L_d46d8:;
  /* d46d8: ucvtf d0, x25 */
  arc_d_w(c, 0, (double)(((uint64_t)(ARC_X_R(c, 25)))));
  /* d46dc: cbz w9, #0xd4ad8 */
  if ((ARC_W_R(c, 9)) == 0) goto L_d4ad8;
  /* d46e0: cmp w9, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(1));
  /* d46e4: b.lt #0xd4820 */
  if (ARC_COND(c, 11)) goto L_d4820;
  /* d46e8: cmp w9, #0x25 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(37));
  /* d46ec: b.hi #0xd44e4 */
  if (ARC_COND(c, 8)) goto L_d44e4;
  /* d46f0: cmp w9, #0x17 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(23));
  /* d46f4: b.lo #0xd4ab0 */
  if (ARC_COND(c, 3)) goto L_d4ab0;
  /* d46f8: sub w11, w10, #0x16 */
  ARC_W_W(c, 11, (ARC_W_R(c, 10) - UINT64_C(22)));
  /* d46fc: nop  */
  /* nop: no architectural effect here */
  /* d4700: adr x12, #0x583b8 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(361400)));
  /* d4704: ldr d1, [x12, w11, uxtw #3] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 12) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 11)))) << 3))));
  /* d4708: mov w11, #0x16 */
  ARC_W_W(c, 11, UINT64_C(22));
  /* d470c: fmul d0, d1, d0 */
  arc_d_w(c, 0, (double)(arc_fmul64(ARC_D_R(c, 1), ARC_D_R(c, 0))));
  /* d4710: b #0xd4ab4 */
  goto L_d4ab4;
L_d4714:;
  /* d4714: add x12, x12, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(1)));
L_d4718:;
  /* d4718: cbz w9, #0xd472c */
  if ((ARC_W_R(c, 9)) == 0) goto L_d472c;
L_d471c:;
  /* d471c: mov w10, wzr */
  ARC_W_W(c, 10, ARC_W_R(c, 31));
  /* d4720: and x12, x12, #0xfffffffffffff */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) & UINT64_C(4503599627370495)));
  /* d4724: mov w11, #1 */
  ARC_W_W(c, 11, UINT64_C(1));
  /* d4728: b #0xd4738 */
  goto L_d4738;
L_d472c:;
  /* d472c: mov w11, wzr */
  ARC_W_W(c, 11, ARC_W_R(c, 31));
  /* d4730: and x12, x12, #0xfffffffffffff */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) & UINT64_C(4503599627370495)));
L_d4734:;
  /* d4734: mov w10, #0x22 */
  ARC_W_W(c, 10, UINT64_C(34));
L_d4738:;
  /* d4738: orr x12, x12, x9, lsl #52 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) | ((uint64_t)(ARC_X_R(c, 9)) << 52)));
  /* d473c: cmp w9, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(0));
  /* d4740: str x0, [x8, #8] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(8)), ARC_X_R(c, 0));
  /* d4744: csinc w9, w11, wzr, eq */
  ARC_W_W(c, 9, (ARC_COND(c, 0) ? (ARC_W_R(c, 11)) : ((ARC_W_R(c, 31)) + 1)));
  /* d4748: fmov d0, x12 */
  arc_du_w(c, 0, (uint64_t)(ARC_X_R(c, 12)));
  /* d474c: cmp x12, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(0));
  /* d4750: csinc w9, w9, wzr, ne */
  ARC_W_W(c, 9, (ARC_COND(c, 1) ? (ARC_W_R(c, 9)) : ((ARC_W_R(c, 31)) + 1)));
  /* d4754: cmp w9, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(0));
L_d4758:;
  /* d4758: fneg d1, d0 */
  arc_d_w(c, 1, (double)((-(ARC_D_R(c, 0)))));
  /* d475c: csel w9, w10, wzr, ne */
  ARC_W_W(c, 9, (ARC_COND(c, 1) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 31)));
  /* d4760: cmp w22, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(45));
  /* d4764: fcsel d0, d1, d0, eq */
  arc_d_w(c, 0, (double)((ARC_COND(c, 0) ? ARC_D_R(c, 1) : ARC_D_R(c, 0))));
  /* d4768: str d0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
L_d476c:;
  /* d476c: str w9, [x8, #0x10] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(16)), ARC_W_R(c, 9));
L_d4770:;
  /* d4770: add sp, sp, #0x330 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(816)));
  /* d4774: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d4778: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* d477c: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* d4780: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* d4784: ldp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* d4788: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d478c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d4790: ret  */
  return;
L_d4794:;
  /* d4794: tst x12, #0x1ff */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 12) & UINT64_C(511)));
  /* d4798: b.ne #0xd455c */
  if (ARC_COND(c, 1)) goto L_d455c;
  /* d479c: and x12, x16, #3 */
  ARC_X_W(c, 12, (ARC_X_R(c, 16) & UINT64_C(3)));
  /* d47a0: cmp x12, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(1));
  /* d47a4: b.ne #0xd455c */
  if (ARC_COND(c, 1)) goto L_d455c;
L_d47a8:;
  /* d47a8: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* d47ac: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* d47b0: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* d47b4: mov x23, x8 */
  ARC_X_W(c, 23, ARC_X_R(c, 8));
  /* d47b8: bl #0xd69e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(870332));
  fn1_d69e8(c);
  /* d47bc: ldr w8, [sp, #4] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(4))));
  /* d47c0: cbz w8, #0xd47f8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_d47f8;
  /* d47c4: ldr w9, [sp, #8] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(8))));
  /* d47c8: subs w8, w9, #1 */
  ARC_W_W(c, 8, arc_sub32(c, ARC_W_R(c, 9), UINT64_C(1)));
  /* d47cc: b.lt #0xd4810 */
  if (ARC_COND(c, 11)) goto L_d4810;
  /* d47d0: mov w10, #0x526a */
  ARC_W_W(c, 10, UINT64_C(21098));
  /* d47d4: movk w10, #3, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(196608)));
  /* d47d8: umull x8, w8, w10 */
  ARC_X_W(c, 8, (((uint64_t)(uint32_t)(ARC_W_R(c, 8))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 10)))));
  /* d47dc: lsr x8, x8, #0x10 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(16)) & 63)));
  /* d47e0: cmp w8, #0x3ff */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1023));
  /* d47e4: b.le #0xd4844 */
  if (ARC_COND(c, 13)) goto L_d4844;
  /* d47e8: mov x8, x23 */
  ARC_X_W(c, 8, ARC_X_R(c, 23));
  /* d47ec: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* d47f0: mov w24, #0x7ff */
  ARC_W_W(c, 24, UINT64_C(2047));
  /* d47f4: b #0xd4490 */
  goto L_d4490;
L_d47f8:;
  /* d47f8: mov w11, wzr */
  ARC_W_W(c, 11, ARC_W_R(c, 31));
  /* d47fc: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* d4800: mov x8, x23 */
  ARC_X_W(c, 8, ARC_X_R(c, 23));
L_d4804:;
  /* d4804: mov w10, wzr */
  ARC_W_W(c, 10, ARC_W_R(c, 31));
  /* d4808: mov w24, w11 */
  ARC_W_W(c, 24, ARC_W_R(c, 11));
  /* d480c: b #0xd4494 */
  goto L_d4494;
L_d4810:;
  /* d4810: tbnz w9, #0x1f, #0xd4894 */
  if (((ARC_W_R(c, 9)) >> 31 & 1) != 0) goto L_d4894;
  /* d4814: mov w24, wzr */
  ARC_W_W(c, 24, ARC_W_R(c, 31));
  /* d4818: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* d481c: b #0xd48bc */
  goto L_d48bc;
L_d4820:;
  /* d4820: cmn w9, #0x16 */
  (void)arc_add32(c, ARC_W_R(c, 9), UINT64_C(22), 0);
  /* d4824: b.lo #0xd44e4 */
  if (ARC_COND(c, 3)) goto L_d44e4;
  /* d4828: neg w9, w10 */
  ARC_W_W(c, 9, ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 10))));
  /* d482c: nop  */
  /* nop: no architectural effect here */
  /* d4830: adr x10, #0x583b8 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(361400)));
  /* d4834: and x9, x9, #0x3f */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(63)));
  /* d4838: ldr d1, [x10, x9, lsl #3] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* d483c: fdiv d0, d0, d1 */
  arc_d_w(c, 0, (double)(arc_fdiv64(ARC_D_R(c, 0), ARC_D_R(c, 1))));
  /* d4840: b #0xd4ad8 */
  goto L_d4ad8;
L_d4844:;
  /* d4844: mov w24, wzr */
  ARC_W_W(c, 24, ARC_W_R(c, 31));
  /* d4848: nop  */
  /* nop: no architectural effect here */
  /* d484c: adr x20, #0x583a0 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(361376)));
  /* d4850: b #0xd4874 */
  goto L_d4874;
L_d4854:;
  /* d4854: ldrb w8, [x20, w9, uxtw] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + ((uint64_t)(uint32_t)(ARC_W_R(c, 9))))));
L_d4858:;
  /* d4858: neg w1, w8 */
  ARC_W_W(c, 1, ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 8))));
  /* d485c: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* d4860: add w24, w8, w24 */
  ARC_W_W(c, 24, (ARC_W_R(c, 8) + ARC_W_R(c, 24)));
  /* d4864: bl #0xd6de8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(870504));
  fn1_d6de8(c);
  /* d4868: ldr w9, [sp, #8] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(8))));
  /* d486c: cmp w9, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(0));
  /* d4870: b.le #0xd48bc */
  if (ARC_COND(c, 13)) goto L_d48bc;
L_d4874:;
  /* d4874: cmp w9, #0x12 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(18));
  /* d4878: b.ls #0xd4854 */
  if (ARC_COND(c, 9)) goto L_d4854;
  /* d487c: mov w8, #0x3c */
  ARC_W_W(c, 8, UINT64_C(60));
  /* d4880: b #0xd4858 */
  goto L_d4858;
L_d4884:;
  /* d4884: mov w9, #0x16 */
  ARC_W_W(c, 9, UINT64_C(22));
  /* d4888: stp xzr, xzr, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* d488c: str w9, [x8, #0x10] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(16)), ARC_W_R(c, 9));
  /* d4890: ret  */
  return;
L_d4894:;
  /* d4894: mov w11, #0x526a */
  ARC_W_W(c, 11, UINT64_C(21098));
  /* d4898: neg w10, w9 */
  ARC_W_W(c, 10, ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 9))));
  /* d489c: mov w24, wzr */
  ARC_W_W(c, 24, ARC_W_R(c, 31));
  /* d48a0: movk w11, #3, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(196608)));
  /* d48a4: umull x10, w10, w11 */
  ARC_X_W(c, 10, (((uint64_t)(uint32_t)(ARC_W_R(c, 10))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 11)))));
  /* d48a8: lsr x10, x10, #0x10 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(16)) & 63)));
  /* d48ac: cmp w10, #0x433 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(1075));
  /* d48b0: b.le #0xd48bc */
  if (ARC_COND(c, 13)) goto L_d48bc;
  /* d48b4: mov x8, x23 */
  ARC_X_W(c, 8, ARC_X_R(c, 23));
  /* d48b8: b #0xd448c */
  goto L_d448c;
L_d48bc:;
  /* d48bc: add x8, sp, #4 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(4)));
  /* d48c0: nop  */
  /* nop: no architectural effect here */
  /* d48c4: adr x21, #0x583a0 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(361376)));
  /* d48c8: add x20, x8, #9 */
  ARC_X_W(c, 20, (ARC_X_R(c, 8) + UINT64_C(9)));
  /* d48cc: b #0xd48e8 */
  goto L_d48e8;
L_d48d0:;
  /* d48d0: neg w8, w9 */
  ARC_W_W(c, 8, ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 9))));
  /* d48d4: ldrb w1, [x21, w8, uxtw] */
  ARC_W_W(c, 1, arc_ld8((ARC_X_R(c, 21) + ((uint64_t)(uint32_t)(ARC_W_R(c, 8))))));
L_d48d8:;
  /* d48d8: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* d48dc: sub w24, w24, w1 */
  ARC_W_W(c, 24, (ARC_W_R(c, 24) - ARC_W_R(c, 1)));
  /* d48e0: bl #0xd6de8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(870628));
  fn1_d6de8(c);
  /* d48e4: ldr w9, [sp, #8] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(8))));
L_d48e8:;
  /* d48e8: tbnz w9, #0x1f, #0xd4904 */
  if (((ARC_W_R(c, 9)) >> 31 & 1) != 0) goto L_d4904;
  /* d48ec: cbnz w9, #0xd4914 */
  if ((ARC_W_R(c, 9)) != 0) goto L_d4914;
  /* d48f0: ldrb w8, [sp, #0xd] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(13))));
  /* d48f4: cmp w8, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(5));
  /* d48f8: b.hs #0xd4914 */
  if (ARC_COND(c, 2)) goto L_d4914;
  /* d48fc: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* d4900: b #0xd48d8 */
  goto L_d48d8;
L_d4904:;
  /* d4904: cmn w9, #0x12 */
  (void)arc_add32(c, ARC_W_R(c, 9), UINT64_C(18), 0);
  /* d4908: b.hs #0xd48d0 */
  if (ARC_COND(c, 2)) goto L_d48d0;
  /* d490c: mov w1, #0x3c */
  ARC_W_W(c, 1, UINT64_C(60));
  /* d4910: b #0xd48d8 */
  goto L_d48d8;
L_d4914:;
  /* d4914: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* d4918: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* d491c: bl #0xd7094 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(870688));
  fn1_d7094(c);
  /* d4920: cmp w24, #0x400 */
  (void)arc_sub32(c, ARC_W_R(c, 24), UINT64_C(1024));
  /* d4924: b.le #0xd4938 */
  if (ARC_COND(c, 13)) goto L_d4938;
  /* d4928: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* d492c: mov w24, #0x7ff */
  ARC_W_W(c, 24, UINT64_C(2047));
  /* d4930: mov x8, x23 */
  ARC_X_W(c, 8, ARC_X_R(c, 23));
  /* d4934: b #0xd4490 */
  goto L_d4490;
L_d4938:;
  /* d4938: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* d493c: mov w1, #4 */
  ARC_W_W(c, 1, UINT64_C(4));
  /* d4940: bl #0xd7094 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(870724));
  fn1_d7094(c);
  /* d4944: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* d4948: mov w1, #4 */
  ARC_W_W(c, 1, UINT64_C(4));
  /* d494c: bl #0xd7094 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(870736));
  fn1_d7094(c);
  /* d4950: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* d4954: mov w1, #4 */
  ARC_W_W(c, 1, UINT64_C(4));
  /* d4958: bl #0xd7094 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(870748));
  fn1_d7094(c);
  /* d495c: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* d4960: mov w1, #4 */
  ARC_W_W(c, 1, UINT64_C(4));
  /* d4964: bl #0xd7094 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(870760));
  fn1_d7094(c);
  /* d4968: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* d496c: mov w1, #4 */
  ARC_W_W(c, 1, UINT64_C(4));
  /* d4970: bl #0xd7094 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(870772));
  fn1_d7094(c);
  /* d4974: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* d4978: mov w1, #4 */
  ARC_W_W(c, 1, UINT64_C(4));
  /* d497c: bl #0xd7094 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(870784));
  fn1_d7094(c);
  /* d4980: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* d4984: mov w1, #4 */
  ARC_W_W(c, 1, UINT64_C(4));
  /* d4988: bl #0xd7094 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(870796));
  fn1_d7094(c);
  /* d498c: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* d4990: mov w1, #4 */
  ARC_W_W(c, 1, UINT64_C(4));
  /* d4994: bl #0xd7094 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(870808));
  fn1_d7094(c);
  /* d4998: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* d499c: mov w1, #4 */
  ARC_W_W(c, 1, UINT64_C(4));
  /* d49a0: bl #0xd7094 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(870820));
  fn1_d7094(c);
  /* d49a4: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* d49a8: mov w1, #4 */
  ARC_W_W(c, 1, UINT64_C(4));
  /* d49ac: bl #0xd7094 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(870832));
  fn1_d7094(c);
  /* d49b0: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* d49b4: mov w1, #4 */
  ARC_W_W(c, 1, UINT64_C(4));
  /* d49b8: bl #0xd7094 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(870844));
  fn1_d7094(c);
  /* d49bc: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* d49c0: mov w1, #4 */
  ARC_W_W(c, 1, UINT64_C(4));
  /* d49c4: bl #0xd7094 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(870856));
  fn1_d7094(c);
  /* d49c8: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* d49cc: mov w1, #4 */
  ARC_W_W(c, 1, UINT64_C(4));
  /* d49d0: bl #0xd7094 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(870868));
  fn1_d7094(c);
  /* d49d4: ldp w10, w9, [sp, #4] */
  { const uint64_t _pa = ((c)->sp + INT64_C(4));
    ARC_W_W(c, 10, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* d49d8: mov w11, wzr */
  ARC_W_W(c, 11, ARC_W_R(c, 31));
  /* d49dc: mov x12, xzr */
  ARC_X_W(c, 12, ARC_X_R(c, 31));
  /* d49e0: mov x8, x23 */
  ARC_X_W(c, 8, ARC_X_R(c, 23));
  /* d49e4: subs w13, w9, #1 */
  ARC_W_W(c, 13, arc_sub32(c, ARC_W_R(c, 9), UINT64_C(1)));
  /* d49e8: b.lt #0xd4a1c */
  if (ARC_COND(c, 11)) goto L_d4a1c;
  /* d49ec: cbz w10, #0xd4a1c */
  if ((ARC_W_R(c, 10)) == 0) goto L_d4a1c;
  /* d49f0: cmp w9, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 10));
  /* d49f4: mov x12, xzr */
  ARC_X_W(c, 12, ARC_X_R(c, 31));
  /* d49f8: mov w14, #0xa */
  ARC_W_W(c, 14, UINT64_C(10));
  /* d49fc: csel w11, w9, w10, lo */
  ARC_W_W(c, 11, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* d4a00: mov x15, x20 */
  ARC_X_W(c, 15, ARC_X_R(c, 20));
  /* d4a04: mov x16, x11 */
  ARC_X_W(c, 16, ARC_X_R(c, 11));
L_d4a08:;
  /* d4a08: ldrb w17, [x15], #1 */
  { const uint64_t _a = ARC_X_R(c, 15);
    ARC_X_W(c, 15, ARC_X_R(c, 15) + INT64_C(1));
    ARC_W_W(c, 17, arc_ld8(_a));
  }
  /* d4a0c: nop  */
  /* nop: no architectural effect here */
  /* d4a10: madd x12, x12, x14, x17 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 17)) + ((uint64_t)(ARC_X_R(c, 12)) * (uint64_t)(ARC_X_R(c, 14)))));
  /* d4a14: subs x16, x16, #1 */
  ARC_X_W(c, 16, arc_sub64(c, ARC_X_R(c, 16), UINT64_C(1)));
  /* d4a18: b.ne #0xd4a08 */
  if (ARC_COND(c, 1)) goto L_d4a08;
L_d4a1c:;
  /* d4a1c: subs w14, w9, w11 */
  ARC_W_W(c, 14, arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 11)));
  /* d4a20: b.le #0xd4a74 */
  if (ARC_COND(c, 13)) goto L_d4a74;
  /* d4a24: cmp w14, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 14), UINT64_C(2));
  /* d4a28: b.lo #0xd4a60 */
  if (ARC_COND(c, 3)) goto L_d4a60;
  /* d4a2c: and w15, w14, #0xfffffffe */
  ARC_W_W(c, 15, (ARC_W_R(c, 14) & UINT64_C(4294967294)));
  /* d4a30: mov w16, #1 */
  ARC_W_W(c, 16, UINT64_C(1));
  /* d4a34: add w11, w11, w15 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + ARC_W_R(c, 15)));
  /* d4a38: mov w17, w15 */
  ARC_W_W(c, 17, ARC_W_R(c, 15));
L_d4a3c:;
  /* d4a3c: add x12, x12, x12, lsl #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 12)) << 2)));
  /* d4a40: add x16, x16, x16, lsl #2 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + ((uint64_t)(ARC_X_R(c, 16)) << 2)));
  /* d4a44: subs w17, w17, #2 */
  ARC_W_W(c, 17, arc_sub32(c, ARC_W_R(c, 17), UINT64_C(2)));
  /* d4a48: lsl x12, x12, #1 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 12)) << ((UINT64_C(1)) & 63)));
  /* d4a4c: lsl x16, x16, #1 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 16)) << ((UINT64_C(1)) & 63)));
  /* d4a50: b.ne #0xd4a3c */
  if (ARC_COND(c, 1)) goto L_d4a3c;
  /* d4a54: mul x12, x16, x12 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 12))));
  /* d4a58: cmp w14, w15 */
  (void)arc_sub32(c, ARC_W_R(c, 14), ARC_W_R(c, 15));
  /* d4a5c: b.eq #0xd4a74 */
  if (ARC_COND(c, 0)) goto L_d4a74;
L_d4a60:;
  /* d4a60: sub w11, w9, w11 */
  ARC_W_W(c, 11, (ARC_W_R(c, 9) - ARC_W_R(c, 11)));
L_d4a64:;
  /* d4a64: add x12, x12, x12, lsl #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 12)) << 2)));
  /* d4a68: subs w11, w11, #1 */
  ARC_W_W(c, 11, arc_sub32(c, ARC_W_R(c, 11), UINT64_C(1)));
  /* d4a6c: lsl x12, x12, #1 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 12)) << ((UINT64_C(1)) & 63)));
  /* d4a70: b.ne #0xd4a64 */
  if (ARC_COND(c, 1)) goto L_d4a64;
L_d4a74:;
  /* d4a74: mov w14, wzr */
  ARC_W_W(c, 14, ARC_W_R(c, 31));
  /* d4a78: add w11, w24, #0x3fe */
  ARC_W_W(c, 11, (ARC_W_R(c, 24) + UINT64_C(1022)));
  /* d4a7c: tbnz w9, #0x1f, #0xd4b20 */
  if (((ARC_W_R(c, 9)) >> 31 & 1) != 0) goto L_d4b20;
  /* d4a80: cmp w9, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 10));
  /* d4a84: b.hs #0xd4b20 */
  if (ARC_COND(c, 2)) goto L_d4b20;
  /* d4a88: ldrb w14, [x20, w9, uxtw] */
  ARC_W_W(c, 14, arc_ld8((ARC_X_R(c, 20) + ((uint64_t)(uint32_t)(ARC_W_R(c, 9))))));
  /* d4a8c: cmp w14, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 14), UINT64_C(5));
  /* d4a90: b.ne #0xd4b00 */
  if (ARC_COND(c, 1)) goto L_d4b00;
  /* d4a94: add w15, w9, #1 */
  ARC_W_W(c, 15, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* d4a98: cmp w15, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 10));
  /* d4a9c: b.ne #0xd4b00 */
  if (ARC_COND(c, 1)) goto L_d4b00;
  /* d4aa0: ldrb w14, [sp, #0xc] */
  ARC_W_W(c, 14, arc_ld8(((c)->sp + INT64_C(12))));
  /* d4aa4: tbz w14, #0, #0xd4b0c */
  if (((ARC_W_R(c, 14)) >> 0 & 1) == 0) goto L_d4b0c;
  /* d4aa8: mov w14, #1 */
  ARC_W_W(c, 14, UINT64_C(1));
  /* d4aac: b #0xd4b20 */
  goto L_d4b20;
L_d4ab0:;
  /* d4ab0: mov x11, x10 */
  ARC_X_W(c, 11, ARC_X_R(c, 10));
L_d4ab4:;
  /* d4ab4: mov x12, #0x433fffffffffffff */
  ARC_X_W(c, 12, UINT64_C(4845873199050653695));
  /* d4ab8: fmov d1, x12 */
  arc_du_w(c, 1, (uint64_t)(ARC_X_R(c, 12)));
  /* d4abc: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* d4ac0: b.gt #0xd44e4 */
  if (ARC_COND(c, 12)) goto L_d44e4;
  /* d4ac4: and x9, x11, #0x3f */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) & UINT64_C(63)));
  /* d4ac8: nop  */
  /* nop: no architectural effect here */
  /* d4acc: adr x10, #0x583b8 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(361400)));
  /* d4ad0: ldr d1, [x10, x9, lsl #3] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* d4ad4: fmul d0, d0, d1 */
  arc_d_w(c, 0, (double)(arc_fmul64(ARC_D_R(c, 0), ARC_D_R(c, 1))));
L_d4ad8:;
  /* d4ad8: fmov x9, d0 */
  ARC_X_W(c, 9, ARC_DU_R(c, 0));
  /* d4adc: mov w10, wzr */
  ARC_W_W(c, 10, ARC_W_R(c, 31));
  /* d4ae0: lsr x24, x9, #0x34 */
  ARC_X_W(c, 24, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(52)) & 63)));
  /* d4ae4: b #0xd4494 */
  goto L_d4494;
L_d4ae8:;
  /* d4ae8: tst x14, #0x1ff */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 14) & UINT64_C(511)));
  /* d4aec: b.ne #0xd4614 */
  if (ARC_COND(c, 1)) goto L_d4614;
  /* d4af0: and x11, x15, #3 */
  ARC_X_W(c, 11, (ARC_X_R(c, 15) & UINT64_C(3)));
  /* d4af4: cmp x11, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(1));
  /* d4af8: b.eq #0xd47a8 */
  if (ARC_COND(c, 0)) goto L_d47a8;
  /* d4afc: b #0xd4614 */
  goto L_d4614;
L_d4b00:;
  /* d4b00: cmp w14, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 14), UINT64_C(4));
  /* d4b04: cset w14, hi */
  ARC_W_W(c, 14, (ARC_COND(c, 8) ? 1 : 0));
  /* d4b08: b #0xd4b20 */
  goto L_d4b20;
L_d4b0c:;
  /* d4b0c: cbz w9, #0xd4b1c */
  if ((ARC_W_R(c, 9)) == 0) goto L_d4b1c;
  /* d4b10: ldrb w13, [x20, w13, uxtw] */
  ARC_W_W(c, 13, arc_ld8((ARC_X_R(c, 20) + ((uint64_t)(uint32_t)(ARC_W_R(c, 13))))));
  /* d4b14: and w14, w13, #1 */
  ARC_W_W(c, 14, (ARC_W_R(c, 13) & UINT64_C(1)));
  /* d4b18: b #0xd4b20 */
  goto L_d4b20;
L_d4b1c:;
  /* d4b1c: mov w14, wzr */
  ARC_W_W(c, 14, ARC_W_R(c, 31));
L_d4b20:;
  /* d4b20: cmn w24, #0x3fe */
  (void)arc_add32(c, ARC_W_R(c, 24), UINT64_C(1022), 0);
  /* d4b24: b.gt #0xd4c40 */
  if (ARC_COND(c, 12)) goto L_d4c40;
  /* d4b28: b.eq #0xd4c4c */
  if (ARC_COND(c, 0)) goto L_d4c4c;
  /* d4b2c: ldrb w12, [sp, #0xc] */
  ARC_W_W(c, 12, arc_ld8(((c)->sp + INT64_C(12))));
  /* d4b30: mov w13, #0xa */
  ARC_W_W(c, 13, UINT64_C(10));
  /* d4b34: b #0xd4b7c */
  goto L_d4b7c;
L_d4b38:;
  /* d4b38: mov w10, w14 */
  ARC_W_W(c, 10, ARC_W_R(c, 14));
  /* d4b3c: sub w9, w9, w15 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) - ARC_W_R(c, 15)));
  /* d4b40: add x16, x10, x20 */
  ARC_X_W(c, 16, (ARC_X_R(c, 10) + ARC_X_R(c, 20)));
  /* d4b44: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* d4b48: ldurb w16, [x16, #-1] */
  ARC_W_W(c, 16, arc_ld8((ARC_X_R(c, 16) + INT64_C(-1))));
  /* d4b4c: cbz w16, #0xd4b60 */
  if ((ARC_W_R(c, 16)) == 0) goto L_d4b60;
L_d4b50:;
  /* d4b50: mov w10, w14 */
  ARC_W_W(c, 10, ARC_W_R(c, 14));
  /* d4b54: adds w11, w11, #1 */
  ARC_W_W(c, 11, arc_add32(c, ARC_W_R(c, 11), UINT64_C(1), 0));
  /* d4b58: b.lo #0xd4b7c */
  if (ARC_COND(c, 3)) goto L_d4b7c;
  /* d4b5c: b #0xd4c48 */
  goto L_d4c48;
L_d4b60:;
  /* d4b60: sub x10, x10, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(2)));
L_d4b64:;
  /* d4b64: subs w14, w14, #1 */
  ARC_W_W(c, 14, arc_sub32(c, ARC_W_R(c, 14), UINT64_C(1)));
  /* d4b68: b.eq #0xd4bf4 */
  if (ARC_COND(c, 0)) goto L_d4bf4;
  /* d4b6c: ldrb w15, [x20, w10, uxtw] */
  ARC_W_W(c, 15, arc_ld8((ARC_X_R(c, 20) + ((uint64_t)(uint32_t)(ARC_W_R(c, 10))))));
  /* d4b70: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* d4b74: cbz w15, #0xd4b64 */
  if ((ARC_W_R(c, 15)) == 0) goto L_d4b64;
  /* d4b78: b #0xd4b50 */
  goto L_d4b50;
L_d4b7c:;
  /* d4b7c: mov w15, wzr */
  ARC_W_W(c, 15, ARC_W_R(c, 31));
  /* d4b80: mov x16, xzr */
  ARC_X_W(c, 16, ARC_X_R(c, 31));
  /* d4b84: b #0xd4ba0 */
  goto L_d4ba0;
L_d4b88:;
  /* d4b88: ldrb w14, [x20, w17, uxtw] */
  ARC_W_W(c, 14, arc_ld8((ARC_X_R(c, 20) + ((uint64_t)(uint32_t)(ARC_W_R(c, 17))))));
L_d4b8c:;
  /* d4b8c: nop  */
  /* nop: no architectural effect here */
  /* d4b90: madd x16, x16, x13, x14 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 14)) + ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 13)))));
  /* d4b94: add w15, w17, #1 */
  ARC_W_W(c, 15, (ARC_W_R(c, 17) + UINT64_C(1)));
  /* d4b98: cmp x16, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 16), UINT64_C(2));
  /* d4b9c: b.hs #0xd4bb4 */
  if (ARC_COND(c, 2)) goto L_d4bb4;
L_d4ba0:;
  /* d4ba0: mov w17, w15 */
  ARC_W_W(c, 17, ARC_W_R(c, 15));
  /* d4ba4: cmp w15, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 10));
  /* d4ba8: b.lo #0xd4b88 */
  if (ARC_COND(c, 3)) goto L_d4b88;
  /* d4bac: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* d4bb0: b #0xd4b8c */
  goto L_d4b8c;
L_d4bb4:;
  /* d4bb4: subs w14, w10, w15 */
  ARC_W_W(c, 14, arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 15)));
  /* d4bb8: b.ls #0xd4c08 */
  if (ARC_COND(c, 9)) goto L_d4c08;
  /* d4bbc: mvn w17, w17 */
  ARC_W_W(c, 17, (~(uint32_t)(ARC_W_R(c, 17))));
  /* d4bc0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* d4bc4: add w17, w17, w10 */
  ARC_W_W(c, 17, (ARC_W_R(c, 17) + ARC_W_R(c, 10)));
L_d4bc8:;
  /* d4bc8: ldrb w1, [x0, w15, uxtw] */
  ARC_W_W(c, 1, arc_ld8((ARC_X_R(c, 0) + ((uint64_t)(uint32_t)(ARC_W_R(c, 15))))));
  /* d4bcc: tst w16, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 16) & UINT64_C(1)));
  /* d4bd0: lsr x2, x16, #1 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 16)) >> ((UINT64_C(1)) & 63)));
  /* d4bd4: csel x16, x13, xzr, ne */
  ARC_X_W(c, 16, (ARC_COND(c, 1) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 31)));
  /* d4bd8: subs w17, w17, #1 */
  ARC_W_W(c, 17, arc_sub32(c, ARC_W_R(c, 17), UINT64_C(1)));
  /* d4bdc: add x16, x16, x1 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + ARC_X_R(c, 1)));
  /* d4be0: strb w2, [x0], #1 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 2));
  }
  /* d4be4: b.ne #0xd4bc8 */
  if (ARC_COND(c, 1)) goto L_d4bc8;
  /* d4be8: cbnz x16, #0xd4c28 */
  if ((ARC_X_R(c, 16)) != 0) goto L_d4c28;
  /* d4bec: cmp w10, w15 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 15));
  /* d4bf0: b.ne #0xd4b38 */
  if (ARC_COND(c, 1)) goto L_d4b38;
L_d4bf4:;
  /* d4bf4: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* d4bf8: mov w10, wzr */
  ARC_W_W(c, 10, ARC_W_R(c, 31));
  /* d4bfc: adds w11, w11, #1 */
  ARC_W_W(c, 11, arc_add32(c, ARC_W_R(c, 11), UINT64_C(1), 0));
  /* d4c00: b.lo #0xd4b7c */
  if (ARC_COND(c, 3)) goto L_d4b7c;
  /* d4c04: b #0xd4c48 */
  goto L_d4c48;
L_d4c08:;
  /* d4c08: mov w14, wzr */
  ARC_W_W(c, 14, ARC_W_R(c, 31));
  /* d4c0c: b #0xd4c28 */
  goto L_d4c28;
L_d4c10:;
  /* d4c10: cmp x16, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 16), UINT64_C(2));
  /* d4c14: csinc w12, w12, wzr, lo */
  ARC_W_W(c, 12, (ARC_COND(c, 3) ? (ARC_W_R(c, 12)) : ((ARC_W_R(c, 31)) + 1)));
L_d4c18:;
  /* d4c18: and x10, x16, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 16) & UINT64_C(1)));
  /* d4c1c: lsl x16, x10, #1 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* d4c20: orr x16, x16, x10, lsl #3 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) | ((uint64_t)(ARC_X_R(c, 10)) << 3)));
  /* d4c24: cbz x10, #0xd4b38 */
  if ((ARC_X_R(c, 10)) == 0) goto L_d4b38;
L_d4c28:;
  /* d4c28: cmp w14, #0x31f */
  (void)arc_sub32(c, ARC_W_R(c, 14), UINT64_C(799));
  /* d4c2c: b.hi #0xd4c10 */
  if (ARC_COND(c, 8)) goto L_d4c10;
  /* d4c30: lsr x10, x16, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 16)) >> ((UINT64_C(1)) & 63)));
  /* d4c34: strb w10, [x20, w14, uxtw] */
  arc_st8((ARC_X_R(c, 20) + ((uint64_t)(uint32_t)(ARC_W_R(c, 14)))), ARC_W_R(c, 10));
  /* d4c38: add w14, w14, #1 */
  ARC_W_W(c, 14, (ARC_W_R(c, 14) + UINT64_C(1)));
  /* d4c3c: b #0xd4c18 */
  goto L_d4c18;
L_d4c40:;
  /* d4c40: add x9, x12, w14, uxtw */
  ARC_X_W(c, 9, (ARC_X_R(c, 12) + ((uint64_t)(uint32_t)(ARC_W_R(c, 14)))));
  /* d4c44: b #0xd4e50 */
  goto L_d4e50;
L_d4c48:;
  /* d4c48: strb w12, [sp, #0xc] */
  arc_st8(((c)->sp + INT64_C(12)), ARC_W_R(c, 12));
L_d4c4c:;
  /* d4c4c: mov w11, wzr */
  ARC_W_W(c, 11, ARC_W_R(c, 31));
  /* d4c50: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* d4c54: mov w12, #0xa */
  ARC_W_W(c, 12, UINT64_C(10));
  /* d4c58: b #0xd4c74 */
  goto L_d4c74;
L_d4c5c:;
  /* d4c5c: ldrb w14, [x20, w11, uxtw] */
  ARC_W_W(c, 14, arc_ld8((ARC_X_R(c, 20) + ((uint64_t)(uint32_t)(ARC_W_R(c, 11))))));
L_d4c60:;
  /* d4c60: nop  */
  /* nop: no architectural effect here */
  /* d4c64: madd x13, x13, x12, x14 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 14)) + ((uint64_t)(ARC_X_R(c, 13)) * (uint64_t)(ARC_X_R(c, 12)))));
  /* d4c68: add w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* d4c6c: cmp x13, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(2));
  /* d4c70: b.hs #0xd4c84 */
  if (ARC_COND(c, 2)) goto L_d4c84;
L_d4c74:;
  /* d4c74: cmp w11, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 10));
  /* d4c78: b.lo #0xd4c5c */
  if (ARC_COND(c, 3)) goto L_d4c5c;
  /* d4c7c: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* d4c80: b #0xd4c60 */
  goto L_d4c60;
L_d4c84:;
  /* d4c84: subs w12, w10, w11 */
  ARC_W_W(c, 12, arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 11)));
  /* d4c88: b.ls #0xd4cd0 */
  if (ARC_COND(c, 9)) goto L_d4cd0;
  /* d4c8c: mov w14, #0xa */
  ARC_W_W(c, 14, UINT64_C(10));
  /* d4c90: mov x15, x20 */
  ARC_X_W(c, 15, ARC_X_R(c, 20));
  /* d4c94: mov w16, w12 */
  ARC_W_W(c, 16, ARC_W_R(c, 12));
L_d4c98:;
  /* d4c98: ldrb w17, [x15, w11, uxtw] */
  ARC_W_W(c, 17, arc_ld8((ARC_X_R(c, 15) + ((uint64_t)(uint32_t)(ARC_W_R(c, 11))))));
  /* d4c9c: tst w13, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 13) & UINT64_C(1)));
  /* d4ca0: lsr x0, x13, #1 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 13)) >> ((UINT64_C(1)) & 63)));
  /* d4ca4: csel x13, x14, xzr, ne */
  ARC_X_W(c, 13, (ARC_COND(c, 1) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 31)));
  /* d4ca8: subs w16, w16, #1 */
  ARC_W_W(c, 16, arc_sub32(c, ARC_W_R(c, 16), UINT64_C(1)));
  /* d4cac: add x13, x13, x17 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + ARC_X_R(c, 17)));
  /* d4cb0: strb w0, [x15], #1 */
  { const uint64_t _a = ARC_X_R(c, 15);
    ARC_X_W(c, 15, ARC_X_R(c, 15) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 0));
  }
  /* d4cb4: b.ne #0xd4c98 */
  if (ARC_COND(c, 1)) goto L_d4c98;
  /* d4cb8: cbnz x13, #0xd4cd4 */
  if ((ARC_X_R(c, 13)) != 0) goto L_d4cd4;
  /* d4cbc: cmp w10, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 11));
  /* d4cc0: b.ne #0xd4d10 */
  if (ARC_COND(c, 1)) goto L_d4d10;
L_d4cc4:;
  /* d4cc4: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
  /* d4cc8: mov w14, wzr */
  ARC_W_W(c, 14, ARC_W_R(c, 31));
  /* d4ccc: b #0xd4e40 */
  goto L_d4e40;
L_d4cd0:;
  /* d4cd0: mov w12, wzr */
  ARC_W_W(c, 12, ARC_W_R(c, 31));
L_d4cd4:;
  /* d4cd4: ldrb w10, [sp, #0xc] */
  ARC_W_W(c, 10, arc_ld8(((c)->sp + INT64_C(12))));
  /* d4cd8: b #0xd4cf4 */
  goto L_d4cf4;
L_d4cdc:;
  /* d4cdc: cmp x13, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(2));
  /* d4ce0: csinc w10, w10, wzr, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ((ARC_W_R(c, 31)) + 1)));
L_d4ce4:;
  /* d4ce4: and x14, x13, #1 */
  ARC_X_W(c, 14, (ARC_X_R(c, 13) & UINT64_C(1)));
  /* d4ce8: lsl x13, x14, #1 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(1)) & 63)));
  /* d4cec: orr x13, x13, x14, lsl #3 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) | ((uint64_t)(ARC_X_R(c, 14)) << 3)));
  /* d4cf0: cbz x14, #0xd4d0c */
  if ((ARC_X_R(c, 14)) == 0) goto L_d4d0c;
L_d4cf4:;
  /* d4cf4: cmp w12, #0x31f */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(799));
  /* d4cf8: b.hi #0xd4cdc */
  if (ARC_COND(c, 8)) goto L_d4cdc;
  /* d4cfc: lsr x14, x13, #1 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 13)) >> ((UINT64_C(1)) & 63)));
  /* d4d00: strb w14, [x20, w12, uxtw] */
  arc_st8((ARC_X_R(c, 20) + ((uint64_t)(uint32_t)(ARC_W_R(c, 12)))), ARC_W_R(c, 14));
  /* d4d04: add w12, w12, #1 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) + UINT64_C(1)));
  /* d4d08: b #0xd4ce4 */
  goto L_d4ce4;
L_d4d0c:;
  /* d4d0c: strb w10, [sp, #0xc] */
  arc_st8(((c)->sp + INT64_C(12)), ARC_W_R(c, 10));
L_d4d10:;
  /* d4d10: mov w10, w12 */
  ARC_W_W(c, 10, ARC_W_R(c, 12));
  /* d4d14: add x13, x10, x20 */
  ARC_X_W(c, 13, (ARC_X_R(c, 10) + ARC_X_R(c, 20)));
  /* d4d18: ldurb w13, [x13, #-1] */
  ARC_W_W(c, 13, arc_ld8((ARC_X_R(c, 13) + INT64_C(-1))));
  /* d4d1c: cbnz w13, #0xd4d38 */
  if ((ARC_W_R(c, 13)) != 0) goto L_d4d38;
  /* d4d20: sub x10, x10, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(2)));
L_d4d24:;
  /* d4d24: subs w12, w12, #1 */
  ARC_W_W(c, 12, arc_sub32(c, ARC_W_R(c, 12), UINT64_C(1)));
  /* d4d28: b.eq #0xd4cc4 */
  if (ARC_COND(c, 0)) goto L_d4cc4;
  /* d4d2c: ldrb w13, [x20, w10, uxtw] */
  ARC_W_W(c, 13, arc_ld8((ARC_X_R(c, 20) + ((uint64_t)(uint32_t)(ARC_W_R(c, 10))))));
  /* d4d30: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* d4d34: cbz w13, #0xd4d24 */
  if ((ARC_W_R(c, 13)) == 0) goto L_d4d24;
L_d4d38:;
  /* d4d38: sub w8, w9, w11 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) - ARC_W_R(c, 11)));
  /* d4d3c: mov w14, wzr */
  ARC_W_W(c, 14, ARC_W_R(c, 31));
  /* d4d40: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
  /* d4d44: add w13, w8, #1 */
  ARC_W_W(c, 13, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* d4d48: cmp w13, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(1));
  /* d4d4c: b.lt #0xd4d8c */
  if (ARC_COND(c, 11)) goto L_d4d8c;
  /* d4d50: cbz w12, #0xd4d8c */
  if ((ARC_W_R(c, 12)) == 0) goto L_d4d8c;
  /* d4d54: cmp w13, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 12));
  /* d4d58: mov w15, w12 */
  ARC_W_W(c, 15, ARC_W_R(c, 12));
  /* d4d5c: add w16, w8, #1 */
  ARC_W_W(c, 16, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* d4d60: csel w14, w13, w12, lo */
  ARC_W_W(c, 14, (ARC_COND(c, 3) ? (ARC_W_R(c, 13)) : ARC_W_R(c, 12)));
  /* d4d64: cmp x15, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 16));
  /* d4d68: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
  /* d4d6c: csel x15, x15, x16, lo */
  ARC_X_W(c, 15, (ARC_COND(c, 3) ? (ARC_X_R(c, 15)) : ARC_X_R(c, 16)));
  /* d4d70: mov w16, #0xa */
  ARC_W_W(c, 16, UINT64_C(10));
  /* d4d74: mov x17, x20 */
  ARC_X_W(c, 17, ARC_X_R(c, 20));
L_d4d78:;
  /* d4d78: ldrb w0, [x17], #1 */
  { const uint64_t _a = ARC_X_R(c, 17);
    ARC_X_W(c, 17, ARC_X_R(c, 17) + INT64_C(1));
    ARC_W_W(c, 0, arc_ld8(_a));
  }
  /* d4d7c: nop  */
  /* nop: no architectural effect here */
  /* d4d80: madd x10, x10, x16, x0 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 0)) + ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 16)))));
  /* d4d84: subs x15, x15, #1 */
  ARC_X_W(c, 15, arc_sub64(c, ARC_X_R(c, 15), UINT64_C(1)));
  /* d4d88: b.ne #0xd4d78 */
  if (ARC_COND(c, 1)) goto L_d4d78;
L_d4d8c:;
  /* d4d8c: cmp w14, w13 */
  (void)arc_sub32(c, ARC_W_R(c, 14), ARC_W_R(c, 13));
  /* d4d90: b.ge #0xd4df8 */
  if (ARC_COND(c, 10)) goto L_d4df8;
  /* d4d94: sub w15, w9, w14 */
  ARC_W_W(c, 15, (ARC_W_R(c, 9) - ARC_W_R(c, 14)));
  /* d4d98: sub w15, w15, w11 */
  ARC_W_W(c, 15, (ARC_W_R(c, 15) - ARC_W_R(c, 11)));
  /* d4d9c: add w15, w15, #1 */
  ARC_W_W(c, 15, (ARC_W_R(c, 15) + UINT64_C(1)));
  /* d4da0: cmp w15, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 15), UINT64_C(2));
  /* d4da4: b.lo #0xd4ddc */
  if (ARC_COND(c, 3)) goto L_d4ddc;
  /* d4da8: and w16, w15, #0xfffffffe */
  ARC_W_W(c, 16, (ARC_W_R(c, 15) & UINT64_C(4294967294)));
  /* d4dac: mov w17, #1 */
  ARC_W_W(c, 17, UINT64_C(1));
  /* d4db0: add w14, w14, w16 */
  ARC_W_W(c, 14, (ARC_W_R(c, 14) + ARC_W_R(c, 16)));
  /* d4db4: mov w0, w16 */
  ARC_W_W(c, 0, ARC_W_R(c, 16));
L_d4db8:;
  /* d4db8: add x10, x10, x10, lsl #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 10)) << 2)));
  /* d4dbc: add x17, x17, x17, lsl #2 */
  ARC_X_W(c, 17, (ARC_X_R(c, 17) + ((uint64_t)(ARC_X_R(c, 17)) << 2)));
  /* d4dc0: subs w0, w0, #2 */
  ARC_W_W(c, 0, arc_sub32(c, ARC_W_R(c, 0), UINT64_C(2)));
  /* d4dc4: lsl x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* d4dc8: lsl x17, x17, #1 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 17)) << ((UINT64_C(1)) & 63)));
  /* d4dcc: b.ne #0xd4db8 */
  if (ARC_COND(c, 1)) goto L_d4db8;
  /* d4dd0: mul x10, x17, x10 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 17)) * (uint64_t)(ARC_X_R(c, 10))));
  /* d4dd4: cmp w15, w16 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 16));
  /* d4dd8: b.eq #0xd4df8 */
  if (ARC_COND(c, 0)) goto L_d4df8;
L_d4ddc:;
  /* d4ddc: sub w14, w9, w14 */
  ARC_W_W(c, 14, (ARC_W_R(c, 9) - ARC_W_R(c, 14)));
  /* d4de0: sub w14, w14, w11 */
  ARC_W_W(c, 14, (ARC_W_R(c, 14) - ARC_W_R(c, 11)));
  /* d4de4: add w14, w14, #1 */
  ARC_W_W(c, 14, (ARC_W_R(c, 14) + UINT64_C(1)));
L_d4de8:;
  /* d4de8: add x10, x10, x10, lsl #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 10)) << 2)));
  /* d4dec: subs w14, w14, #1 */
  ARC_W_W(c, 14, arc_sub32(c, ARC_W_R(c, 14), UINT64_C(1)));
  /* d4df0: lsl x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* d4df4: b.ne #0xd4de8 */
  if (ARC_COND(c, 1)) goto L_d4de8;
L_d4df8:;
  /* d4df8: mov w14, wzr */
  ARC_W_W(c, 14, ARC_W_R(c, 31));
  /* d4dfc: tbnz w13, #0x1f, #0xd4e3c */
  if (((ARC_W_R(c, 13)) >> 31 & 1) != 0) goto L_d4e3c;
  /* d4e00: cmp w13, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 12));
  /* d4e04: b.hs #0xd4e3c */
  if (ARC_COND(c, 2)) goto L_d4e3c;
  /* d4e08: ldrb w13, [x20, w13, uxtw] */
  ARC_W_W(c, 13, arc_ld8((ARC_X_R(c, 20) + ((uint64_t)(uint32_t)(ARC_W_R(c, 13))))));
  /* d4e0c: cmp w13, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(5));
  /* d4e10: b.ne #0xd4e34 */
  if (ARC_COND(c, 1)) goto L_d4e34;
  /* d4e14: sub w12, w12, w9 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) - ARC_W_R(c, 9)));
  /* d4e18: add w12, w12, w11 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) + ARC_W_R(c, 11)));
  /* d4e1c: cmp w12, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(2));
  /* d4e20: b.ne #0xd4e34 */
  if (ARC_COND(c, 1)) goto L_d4e34;
  /* d4e24: ldrb w12, [sp, #0xc] */
  ARC_W_W(c, 12, arc_ld8(((c)->sp + INT64_C(12))));
  /* d4e28: tbz w12, #0, #0xd4e84 */
  if (((ARC_W_R(c, 12)) >> 0 & 1) == 0) goto L_d4e84;
  /* d4e2c: mov w14, #1 */
  ARC_W_W(c, 14, UINT64_C(1));
  /* d4e30: b #0xd4e3c */
  goto L_d4e3c;
L_d4e34:;
  /* d4e34: cmp w13, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(4));
  /* d4e38: cset w14, hi */
  ARC_W_W(c, 14, (ARC_COND(c, 8) ? 1 : 0));
L_d4e3c:;
  /* d4e3c: mov x8, x23 */
  ARC_X_W(c, 8, ARC_X_R(c, 23));
L_d4e40:;
  /* d4e40: add x9, x10, w14, uxtw */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + ((uint64_t)(uint32_t)(ARC_W_R(c, 14)))));
  /* d4e44: lsr x10, x9, #0x34 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(52)) & 63)));
  /* d4e48: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* d4e4c: cset w11, ne */
  ARC_W_W(c, 11, (ARC_COND(c, 1) ? 1 : 0));
L_d4e50:;
  /* d4e50: mov x10, #0x20000000000000 */
  ARC_X_W(c, 10, UINT64_C(9007199254740992));
  /* d4e54: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* d4e58: b.ne #0xd4e70 */
  if (ARC_COND(c, 1)) goto L_d4e70;
  /* d4e5c: cmp w11, #0x7fd */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(2045));
  /* d4e60: mov x9, #0x10000000000000 */
  ARC_X_W(c, 9, UINT64_C(4503599627370496));
  /* d4e64: b.le #0xd4e7c */
  if (ARC_COND(c, 13)) goto L_d4e7c;
  /* d4e68: mov w24, #0x7ff */
  ARC_W_W(c, 24, UINT64_C(2047));
  /* d4e6c: b #0xd4490 */
  goto L_d4490;
L_d4e70:;
  /* d4e70: cbnz w11, #0xd4804 */
  if ((ARC_W_R(c, 11)) != 0) goto L_d4804;
  /* d4e74: mov w24, wzr */
  ARC_W_W(c, 24, ARC_W_R(c, 31));
  /* d4e78: b #0xd4490 */
  goto L_d4490;
L_d4e7c:;
  /* d4e7c: add w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* d4e80: b #0xd4804 */
  goto L_d4804;
L_d4e84:;
  /* d4e84: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* d4e88: cmp w9, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 11));
  /* d4e8c: b.ne #0xd4e98 */
  if (ARC_COND(c, 1)) goto L_d4e98;
  /* d4e90: mov w14, wzr */
  ARC_W_W(c, 14, ARC_W_R(c, 31));
  /* d4e94: b #0xd4e3c */
  goto L_d4e3c;
L_d4e98:;
  /* d4e98: ldrb w8, [x20, w8, uxtw] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + ((uint64_t)(uint32_t)(ARC_W_R(c, 8))))));
  /* d4e9c: and w14, w8, #1 */
  ARC_W_W(c, 14, (ARC_W_R(c, 8) & UINT64_C(1)));
  /* d4ea0: b #0xd4e3c */
  goto L_d4e3c;
}

void fn1_d8838(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038814776));
  /* d8838: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d883c: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d8840: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* d8844: bl #0x142b30 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(886856));
  fn1_142b30(c);
  /* d8848: cmp x1, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(2));
  /* d884c: b.eq #0xd8874 */
  if (ARC_COND(c, 0)) goto L_d8874;
  /* d8850: cmp x1, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(1));
  /* d8854: b.eq #0xd8860 */
  if (ARC_COND(c, 0)) goto L_d8860;
  /* d8858: cbnz x1, #0xd8884 */
  if ((ARC_X_R(c, 1)) != 0) goto L_d8884;
  /* d885c: b #0xd88c8 */
  goto L_d88c8;
L_d8860:;
  /* d8860: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* d8864: cmp w8, #0x2e */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(46));
  /* d8868: b.ne #0xd8884 */
  if (ARC_COND(c, 1)) goto L_d8884;
  /* d886c: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* d8870: b #0xd88c8 */
  goto L_d88c8;
L_d8874:;
  /* d8874: ldrh w8, [x0] */
  ARC_W_W(c, 8, arc_ld16(ARC_X_R(c, 0)));
  /* d8878: mov w9, #0x2e2e */
  ARC_W_W(c, 9, UINT64_C(11822));
  /* d887c: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d8880: b.eq #0xd88c4 */
  if (ARC_COND(c, 0)) goto L_d88c4;
L_d8884:;
  /* d8884: sub x8, x0, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) - UINT64_C(1)));
  /* d8888: mov x9, x1 */
  ARC_X_W(c, 9, ARC_X_R(c, 1));
L_d888c:;
  /* d888c: cbz x9, #0xd88c8 */
  if ((ARC_X_R(c, 9)) == 0) goto L_d88c8;
  /* d8890: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* d8894: ldrb w9, [x8, x9] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + ARC_X_R(c, 9))));
  /* d8898: cmp w9, #0x2e */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(46));
  /* d889c: sub x9, x10, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* d88a0: b.ne #0xd888c */
  if (ARC_COND(c, 1)) goto L_d888c;
  /* d88a4: cmp x10, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(2));
  /* d88a8: b.lo #0xd88c8 */
  if (ARC_COND(c, 3)) goto L_d88c8;
  /* d88ac: cmp x9, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 1));
  /* d88b0: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* d88b4: b.ls #0xd88c8 */
  if (ARC_COND(c, 9)) goto L_d88c8;
  /* d88b8: adrp x0, #0x50000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(327680)));
  /* d88bc: add x0, x0, #0xc97 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3223)));
  /* d88c0: bl #0xda038 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(886980));
  fn1_da038(c);
L_d88c4:;
  /* d88c4: mov w1, #2 */
  ARC_W_W(c, 1, UINT64_C(2));
L_d88c8:;
  /* d88c8: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d88cc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d88d0: ret  */
  return;
}

void fn1_dbff4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038829044));
  /* dbff4: bti c */
  /* bti: no architectural effect here */
  /* dbff8: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* dbffc: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* dc000: ret  */
  return;
}

void fn1_e086c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038847596));
  /* e086c: bti c */
  /* bti: no architectural effect here */
  /* e0870: cmn x1, #8 */
  (void)arc_add64(c, ARC_X_R(c, 1), UINT64_C(8), 0);
  /* e0874: b.hs #0xe08c0 */
  if (ARC_COND(c, 2)) goto L_e08c0;
  /* e0878: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* e087c: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* e0880: and x8, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* e0884: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e0888: mov w9, #0x16 */
  ARC_W_W(c, 9, UINT64_C(22));
  /* e088c: sub x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* e0890: csel x8, x9, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* e0894: cmp x1, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 8));
  /* e0898: b.ls #0xe08bc */
  if (ARC_COND(c, 9)) goto L_e08bc;
  /* e089c: orr x8, x1, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) | UINT64_C(7)));
  /* e08a0: mov w9, #0x19 */
  ARC_W_W(c, 9, UINT64_C(25));
  /* e08a4: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* e08a8: csel x8, x9, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* e08ac: cmp x1, #0x16 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(22));
  /* e08b0: mov w9, #0x16 */
  ARC_W_W(c, 9, UINT64_C(22));
  /* e08b4: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* e08b8: b #0xda620 */
  fn1_da620(c); return;
L_e08bc:;
  /* e08bc: ret  */
  return;
L_e08c0:;
  /* e08c0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e08c4: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e08c8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e08cc: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(919760));
  fn1_d7d54(c);
}

void fn1_e3190(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038858128));
  /* e3190: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e3194: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e3198: stp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* e319c: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* e31a0: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e31a4: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e31a8: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e31ac: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e31b0: mov x28, #-9 */
  ARC_X_W(c, 28, UINT64_C(18446744073709551607));
  /* e31b4: movk x28, #0x3fff, lsl #48 */
  ARC_X_W(c, 28, ((ARC_X_R(c, 28) & UINT64_C(281474976710655)) | UINT64_C(4611404543450677248)));
  /* e31b8: sub x8, x28, x1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 28) - ARC_X_R(c, 1)));
  /* e31bc: cmp x2, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 8));
  /* e31c0: b.hi #0xe32c0 */
  if (ARC_COND(c, 8)) goto L_e32c0;
  /* e31c4: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e31c8: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e31cc: add x10, x0, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 0) + UINT64_C(4)));
  /* e31d0: mov x21, x6 */
  ARC_X_W(c, 21, ARC_X_R(c, 6));
  /* e31d4: mov x22, x5 */
  ARC_X_W(c, 22, ARC_X_R(c, 5));
  /* e31d8: mov x24, x4 */
  ARC_X_W(c, 24, ARC_X_R(c, 4));
  /* e31dc: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e31e0: mov x8, #-0xe */
  ARC_X_W(c, 8, UINT64_C(18446744073709551602));
  /* e31e4: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* e31e8: movk x8, #0x1fff, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(2305561534236983296)));
  /* e31ec: mov x25, x3 */
  ARC_X_W(c, 25, ARC_X_R(c, 3));
  /* e31f0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e31f4: csel x23, x10, x9, eq */
  ARC_X_W(c, 23, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e31f8: cmp x1, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 8));
  /* e31fc: b.hi #0xe3234 */
  if (ARC_COND(c, 8)) goto L_e3234;
  /* e3200: lsl x8, x20, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 20)) << ((UINT64_C(1)) & 63)));
  /* e3204: add x9, x2, x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 2) + ARC_X_R(c, 20)));
  /* e3208: mov w10, #8 */
  ARC_W_W(c, 10, UINT64_C(8));
  /* e320c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* e3210: csel x8, x9, x8, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* e3214: orr x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) | UINT64_C(1)));
  /* e3218: cmp x9, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(5));
  /* e321c: csinc x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 9)) + 1)));
  /* e3220: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* e3224: mov w8, #5 */
  ARC_W_W(c, 8, UINT64_C(5));
  /* e3228: csel x28, x8, x9, lo */
  ARC_X_W(c, 28, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* e322c: lsr x8, x28, #0x3e */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 28)) >> ((UINT64_C(62)) & 63)));
  /* e3230: cbnz x8, #0xe32c4 */
  if ((ARC_X_R(c, 8)) != 0) goto L_e32c4;
L_e3234:;
  /* e3234: lsl x0, x28, #2 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 28)) << ((UINT64_C(2)) & 63)));
  /* e3238: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(930364));
  fn1_1428f0(c);
  /* e323c: lsl x27, x24, #2 */
  ARC_X_W(c, 27, ((uint64_t)(ARC_X_R(c, 24)) << ((UINT64_C(2)) & 63)));
  /* e3240: mov x26, x0 */
  ARC_X_W(c, 26, ARC_X_R(c, 0));
  /* e3244: cbz x24, #0xe3258 */
  if ((ARC_X_R(c, 24)) == 0) goto L_e3258;
  /* e3248: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* e324c: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* e3250: mov x2, x27 */
  ARC_X_W(c, 2, ARC_X_R(c, 27));
  /* e3254: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(930392));
  fn1_1449f0(c);
L_e3258:;
  /* e3258: add x8, x22, x24 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) + ARC_X_R(c, 24)));
  /* e325c: subs x8, x25, x8 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 8)));
  /* e3260: b.eq #0xe327c */
  if (ARC_COND(c, 0)) goto L_e327c;
  /* e3264: add x9, x23, x27 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) + ARC_X_R(c, 27)));
  /* e3268: add x10, x26, x27 */
  ARC_X_W(c, 10, (ARC_X_R(c, 26) + ARC_X_R(c, 27)));
  /* e326c: lsl x2, x8, #2 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* e3270: add x1, x9, x22, lsl #2 */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 22)) << 2)));
  /* e3274: add x0, x10, x21, lsl #2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 21)) << 2)));
  /* e3278: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(930428));
  fn1_1449f0(c);
L_e327c:;
  /* e327c: add x8, x20, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + UINT64_C(1)));
  /* e3280: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* e3284: b.eq #0xe3294 */
  if (ARC_COND(c, 0)) goto L_e3294;
  /* e3288: lsl x1, x8, #2 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* e328c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* e3290: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(930452));
  fn1_142608(c);
L_e3294:;
  /* e3294: orr x8, x28, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 28) | UINT64_C(1)));
  /* e3298: str x26, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 26));
  /* e329c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* e32a0: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e32a4: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e32a8: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e32ac: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* e32b0: ldp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* e32b4: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e32b8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e32bc: ret  */
  return;
L_e32c0:;
  /* e32c0: bl #0xe2274 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(930500));
  fn1_e2274(c);
L_e32c4:;
  /* e32c4: bl #0xd9fe8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(930504));
  fn1_d9fe8(c);
}

void fn1_e7a70(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038876784));
  /* e7a70: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e7a74: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e7a78: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e7a7c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e7a80: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e7a84: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* e7a88: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e7a8c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* e7a90: ldr x8, [x8, #0x908] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2312))));
  /* e7a94: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* e7a98: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* e7a9c: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* e7aa0: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(948900));
  fn1_142860(c);
  /* e7aa4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e7aa8: add x0, x0, #0x19 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(25)));
  /* e7aac: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(948912));
  fn1_1428f0(c);
  /* e7ab0: add x22, x0, #0x18 */
  ARC_X_W(c, 22, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* e7ab4: stp x21, x21, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e7ab8: add x2, x21, #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* e7abc: str wzr, [x0, #0x10] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(16)), ARC_W_R(c, 31));
  /* e7ac0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* e7ac4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* e7ac8: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(948940));
  fn1_1449d8(c);
  /* e7acc: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* e7ad0: ldr x8, [x8, #0x918] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2328))));
  /* e7ad4: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* e7ad8: stp x8, x22, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* e7adc: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e7ae0: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e7ae4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e7ae8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e7aec: ret  */
  return;
}

void fn1_ea240(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038886976));
  /* ea240: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ea244: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ea248: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ea24c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ea250: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ea254: ldr w8, [x0, #0x70] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(112))));
  /* ea258: tbnz w8, #2, #0xea29c */
  if (((ARC_W_R(c, 8)) >> 2 & 1) != 0) goto L_ea29c;
  /* ea25c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ea260: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* ea264: tbnz w8, #3, #0xea2b0 */
  if (((ARC_W_R(c, 8)) >> 3 & 1) != 0) goto L_ea2b0;
  /* ea268: nop  */
  /* nop: no architectural effect here */
  /* ea26c: adr x21, #0x52033 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(335923)));
  /* ea270: nop  */
  /* nop: no architectural effect here */
  /* ea274: adr x22, #0x50514 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(328980)));
L_ea278:;
  /* ea278: ldrb w8, [x20, #8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(8))));
  /* ea27c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* ea280: b.ne #0xea2f4 */
  if (ARC_COND(c, 1)) goto L_ea2f4;
  /* ea284: ldr x1, [x20] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 20)));
  /* ea288: add x0, x19, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(64)));
  /* ea28c: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959120));
  fn1_142530(c);
  /* ea290: cbnz w0, #0xea2ec */
  if ((ARC_W_R(c, 0)) != 0) goto L_ea2ec;
  /* ea294: ldrb w8, [x19, #0x70] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(112))));
  /* ea298: tbz w8, #2, #0xea278 */
  if (((ARC_W_R(c, 8)) >> 2 & 1) == 0) goto L_ea278;
L_ea29c:;
  /* ea29c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ea2a0: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ea2a4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ea2a8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ea2ac: ret  */
  return;
L_ea2b0:;
  /* ea2b0: ldrb w9, [x20, #8] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 20) + INT64_C(8))));
  /* ea2b4: and w8, w8, #0xfffffff3 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(4294967283)));
  /* ea2b8: str w8, [x19, #0x70] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(112)), ARC_W_R(c, 8));
  /* ea2bc: tbz w9, #0, #0xea300 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_ea300;
  /* ea2c0: ldr x0, [x20] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 20)));
  /* ea2c4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959176));
  fn1_142560(c);
  /* ea2c8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ea2cc: strb wzr, [x20, #8] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(8)), ARC_W_R(c, 31));
  /* ea2d0: ldr x16, [x8, #0x18] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* ea2d4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ea2d8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ea2dc: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ea2e0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ea2e4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ea2e8: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_ea2ec:;
  /* ea2ec: mov x21, x22 */
  ARC_X_W(c, 21, ARC_X_R(c, 22));
  /* ea2f0: b #0xea2f8 */
  goto L_ea2f8;
L_ea2f4:;
  /* ea2f4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
L_ea2f8:;
  /* ea2f8: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* ea2fc: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959232));
  fn1_142a40(c);
L_ea300:;
  /* ea300: adrp x1, #0x52000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(335872)));
  /* ea304: add x1, x1, #0x5e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(94)));
  /* ea308: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ea30c: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959248));
  fn1_142a40(c);
  /* ea310: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959252));
  fn1_a1454(c);
  /* ea314: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959256));
  fn1_a1454(c);
  /* ea318: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959260));
  fn1_a1454(c);
}

void fn1_ebcf0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038893808));
  /* ebcf0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ebcf4: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ebcf8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ebcfc: nop  */
  /* nop: no architectural effect here */
  /* ebd00: adr x0, #0x518c9 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(334025)));
  /* ebd04: bl #0xd7d6c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(965896));
  fn1_d7d6c(c);
}

void fn1_ed7b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038900656));
  /* ed7b0: bti c */
  /* bti: no architectural effect here */
  /* ed7b4: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* ed7b8: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* ed7bc: ret  */
  return;
}

void fn1_f1270(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038915696));
  /* f1270: bti c */
  /* bti: no architectural effect here */
  /* f1274: mov x16, x1 */
  ARC_X_W(c, 16, ARC_X_R(c, 1));
  /* f1278: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_f41e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038927840));
  /* f41e0: bti c */
  /* bti: no architectural effect here */
  /* f41e4: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* f41e8: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* f41ec: ret  */
  return;
}

void fn1_f7ca8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038942888));
  /* f7ca8: bti c */
  /* bti: no architectural effect here */
  /* f7cac: mov x16, x1 */
  ARC_X_W(c, 16, ARC_X_R(c, 1));
  /* f7cb0: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_fd064(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038964324));
  /* fd064: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fd068: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fd06c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* fd070: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fd074: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fd078: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fd07c: adrp x10, #0x151000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fd080: ldr x8, [x8, #0xb00] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2816))));
  /* fd084: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* fd088: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* fd08c: ldr x10, [x10, #0xae0] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2784))));
  /* fd090: add x11, x8, #0x18 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* fd094: add x21, x0, x9 */
  ARC_X_W(c, 21, (ARC_X_R(c, 0) + ARC_X_R(c, 9)));
  /* fd098: add x9, x8, #0x68 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(104)));
  /* fd09c: add x8, x8, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* fd0a0: mov x19, x21 */
  ARC_X_W(c, 19, ARC_X_R(c, 21));
  /* fd0a4: add x10, x10, #0x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(16)));
  /* fd0a8: str x11, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 11));
  /* fd0ac: str x9, [x19, #0x80]! */
  { const uint64_t _a = (ARC_X_R(c, 19) + INT64_C(128));
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(128));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* fd0b0: ldrb w9, [x21, #0x58] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 21) + INT64_C(88))));
  /* fd0b4: stp x8, x10, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* fd0b8: tbz w9, #0, #0xfd0cc */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_fd0cc;
  /* fd0bc: ldr x8, [x21, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(88))));
  /* fd0c0: ldr x0, [x21, #0x68] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + INT64_C(104))));
  /* fd0c4: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* fd0c8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1036492));
  fn1_142608(c);
L_fd0cc:;
  /* fd0cc: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fd0d0: nop  */
  /* nop: no architectural effect here */
  /* fd0d4: adr x9, #0x15dc40 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1432640)));
  /* fd0d8: ldr x8, [x8, #0xaa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2728))));
  /* fd0dc: ldr x20, [x21, #0x20] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 21) + INT64_C(32))));
  /* fd0e0: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* fd0e4: cmp x20, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 9));
  /* fd0e8: str x8, [x21, #0x18] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(24)), ARC_X_R(c, 8));
  /* fd0ec: b.eq #0xfd110 */
  if (ARC_COND(c, 0)) goto L_fd110;
  /* fd0f0: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* fd0f4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fd0f8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1036540));
  fn1_bd950(c);
  /* fd0fc: cbnz x0, #0xfd110 */
  if ((ARC_X_R(c, 0)) != 0) goto L_fd110;
  /* fd100: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* fd104: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fd108: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fd10c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1036560));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fd110:;
  /* fd110: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fd114: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fd118: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* fd11c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fd120: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fd124: b #0x1433b8 */
  fn1_1433b8(c); return;
}

void fn1_102028(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038984744));
  /* 102028: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 10202c: sub sp, sp, #0x180 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(384)));
  /* 102030: stp x29, x30, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 102034: stp x28, x27, [sp, #0x130] */
  { const uint64_t _pa = ((c)->sp + INT64_C(304));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 102038: stp x26, x25, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 10203c: stp x24, x23, [sp, #0x150] */
  { const uint64_t _pa = ((c)->sp + INT64_C(336));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 102040: stp x22, x21, [sp, #0x160] */
  { const uint64_t _pa = ((c)->sp + INT64_C(352));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 102044: stp x20, x19, [sp, #0x170] */
  { const uint64_t _pa = ((c)->sp + INT64_C(368));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 102048: add x29, sp, #0x120 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(288)));
  /* 10204c: ldr w8, [x3, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 3) + INT64_C(8))));
  /* 102050: mov w9, #0x4a */
  ARC_W_W(c, 9, UINT64_C(74));
  /* 102054: mov x0, x3 */
  ARC_X_W(c, 0, ARC_X_R(c, 3));
  /* 102058: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 10205c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 102060: sub x26, x29, #0x48 */
  ARC_X_W(c, 26, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 102064: ands w8, w8, w9 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 9));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 8, _r); }
  /* 102068: str x5, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 5));
  /* 10206c: b.eq #0x102090 */
  if (ARC_COND(c, 0)) goto L_102090;
  /* 102070: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* 102074: b.eq #0x102088 */
  if (ARC_COND(c, 0)) goto L_102088;
  /* 102078: cmp w8, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(8));
  /* 10207c: b.ne #0x102098 */
  if (ARC_COND(c, 1)) goto L_102098;
  /* 102080: mov w23, #0x10 */
  ARC_W_W(c, 23, UINT64_C(16));
  /* 102084: b #0x10209c */
  goto L_10209c;
L_102088:;
  /* 102088: mov w23, #8 */
  ARC_W_W(c, 23, UINT64_C(8));
  /* 10208c: b #0x10209c */
  goto L_10209c;
L_102090:;
  /* 102090: mov w23, wzr */
  ARC_W_W(c, 23, ARC_W_R(c, 31));
  /* 102094: b #0x10209c */
  goto L_10209c;
L_102098:;
  /* 102098: mov w23, #0xa */
  ARC_W_W(c, 23, UINT64_C(10));
L_10209c:;
  /* 10209c: sub x8, x29, #0x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 1020a0: sub x1, x29, #0xc */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(12)));
  /* 1020a4: str x4, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 4));
  /* 1020a8: bl #0x135800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1056940));
  fn1_135800(c);
  /* 1020ac: stp xzr, xzr, [x26, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 26) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1020b0: str xzr, [x26, #0x18] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(24)), ARC_X_R(c, 31));
  /* 1020b4: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 1020b8: mov w1, #0x16 */
  ARC_W_W(c, 1, UINT64_C(22));
  /* 1020bc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1020c0: sub x19, x29, #0x40 */
  ARC_X_W(c, 19, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 1020c4: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1056968));
  fn1_142d10(c);
  /* 1020c8: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 1020cc: add x10, sp, #0x38 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(56)));
  /* 1020d0: ldr x9, [x26, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 1020d4: str x10, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 10));
  /* 1020d8: adrp x28, #0x151000 */
  ARC_X_W(c, 28, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1020dc: orr x27, x19, #1 */
  ARC_X_W(c, 27, (ARC_X_R(c, 19) | UINT64_C(1)));
  /* 1020e0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1020e4: ldr x28, [x28, #0xbe0] */
  ARC_X_W(c, 28, arc_ld64((ARC_X_R(c, 28) + INT64_C(3040))));
  /* 1020e8: add x22, sp, #0x30 */
  ARC_X_W(c, 22, ((c)->sp + UINT64_C(48)));
  /* 1020ec: csinc x24, x9, x19, ne */
  ARC_X_W(c, 24, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* 1020f0: mov w19, #0x16 */
  ARC_W_W(c, 19, UINT64_C(22));
  /* 1020f4: str wzr, [sp, #0x2c] */
  arc_st32(((c)->sp + INT64_C(44)), ARC_W_R(c, 31));
  /* 1020f8: str x24, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 24));
  /* 1020fc: b #0x102108 */
  goto L_102108;
L_102100:;
  /* 102100: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 102104: str x8, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 8));
L_102108:;
  /* 102108: cbz x20, #0x102130 */
  if ((ARC_X_R(c, 20)) == 0) goto L_102130;
  /* 10210c: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 102110: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 102114: b.eq #0x10214c */
  if (ARC_COND(c, 0)) goto L_10214c;
  /* 102118: cbz x21, #0x1021bc */
  if ((ARC_X_R(c, 21)) == 0) goto L_1021bc;
  /* 10211c: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 102120: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 102124: b.ne #0x102304 */
  if (ARC_COND(c, 1)) goto L_102304;
  /* 102128: mov w25, wzr */
  ARC_W_W(c, 25, ARC_W_R(c, 31));
  /* 10212c: b #0x102198 */
  goto L_102198;
L_102130:;
  /* 102130: cbz x21, #0x102300 */
  if ((ARC_X_R(c, 21)) == 0) goto L_102300;
  /* 102134: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 102138: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 10213c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 102140: b.ne #0x1021bc */
  if (ARC_COND(c, 1)) goto L_1021bc;
  /* 102144: mov w25, #1 */
  ARC_W_W(c, 25, UINT64_C(1));
  /* 102148: b #0x102198 */
  goto L_102198;
L_10214c:;
  /* 10214c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 102150: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 102154: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 102158: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1057116));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10215c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 102160: cset w25, eq */
  ARC_W_W(c, 25, (ARC_COND(c, 0) ? 1 : 0));
  /* 102164: cbz x21, #0x102188 */
  if ((ARC_X_R(c, 21)) == 0) goto L_102188;
  /* 102168: ldp x9, x10, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 10216c: csel x8, xzr, x20, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 20)));
  /* 102170: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 102174: b.eq #0x102194 */
  if (ARC_COND(c, 0)) goto L_102194;
  /* 102178: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 10217c: b.ne #0x102304 */
  if (ARC_COND(c, 1)) goto L_102304;
  /* 102180: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 102184: b #0x1021bc */
  goto L_1021bc;
L_102188:;
  /* 102188: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 10218c: b.ne #0x1021bc */
  if (ARC_COND(c, 1)) goto L_1021bc;
  /* 102190: b #0x102668 */
  goto L_102668;
L_102194:;
  /* 102194: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
L_102198:;
  /* 102198: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 10219c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1021a0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1021a4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1057192));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1021a8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1021ac: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 1021b0: csel x21, xzr, x21, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 21)));
  /* 1021b4: cmp w25, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 25), ARC_W_R(c, 8));
  /* 1021b8: b.eq #0x102304 */
  if (ARC_COND(c, 0)) goto L_102304;
L_1021bc:;
  /* 1021bc: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 1021c0: ldr x9, [x26, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(16))));
  /* 1021c4: ldr x11, [x26] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 26)));
  /* 1021c8: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 1021cc: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1021d0: csel x25, x10, x9, eq */
  ARC_X_W(c, 25, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 1021d4: add x9, x24, x25 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + ARC_X_R(c, 25)));
  /* 1021d8: cmp x11, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 9));
  /* 1021dc: b.ne #0x102294 */
  if (ARC_COND(c, 1)) goto L_102294;
  /* 1021e0: cmp x25, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 25), UINT64_C(1));
  /* 1021e4: b.lt #0x1021fc */
  if (ARC_COND(c, 11)) goto L_1021fc;
  /* 1021e8: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 1021ec: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 1021f0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1021f4: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1057272));
  fn1_142d10(c);
  /* 1021f8: b #0x102220 */
  goto L_102220;
L_1021fc:;
  /* 1021fc: lsl x9, x25, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 25)) << ((UINT64_C(1)) & 63)));
  /* 102200: tbnz w8, #0, #0x102214 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_102214;
  /* 102204: lsl w8, w9, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 9)) << ((UINT64_C(1)) & 31)));
  /* 102208: sturb w8, [x29, #-0x40] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-64)), ARC_W_R(c, 8));
  /* 10220c: mov x8, x27 */
  ARC_X_W(c, 8, ARC_X_R(c, 27));
  /* 102210: b #0x10221c */
  goto L_10221c;
L_102214:;
  /* 102214: ldr x8, [x26, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 102218: str x9, [x26, #0x10] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(16)), ARC_X_R(c, 9));
L_10221c:;
  /* 10221c: strb wzr, [x8, x9] */
  arc_st8((ARC_X_R(c, 8) + ARC_X_R(c, 9)), ARC_W_R(c, 31));
L_102220:;
  /* 102220: ldp x9, x10, [x26, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 26) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 102224: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 102228: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 10222c: and x11, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 102230: ubfx x12, x9, #1, #7 */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 9)) >> 1) & UINT64_C(127)));
  /* 102234: sub x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* 102238: csel x8, x19, x11, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 19)) : ARC_X_R(c, 11)));
  /* 10223c: tst x9, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(1)));
  /* 102240: csel x10, x12, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* 102244: subs x1, x8, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10)));
  /* 102248: b.ls #0x10225c */
  if (ARC_COND(c, 9)) goto L_10225c;
  /* 10224c: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 102250: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 102254: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1057368));
  fn1_142d10(c);
  /* 102258: b #0x10227c */
  goto L_10227c;
L_10225c:;
  /* 10225c: tbnz w9, #0, #0x102270 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_102270;
  /* 102260: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* 102264: sturb w9, [x29, #-0x40] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-64)), ARC_W_R(c, 9));
  /* 102268: mov x9, x27 */
  ARC_X_W(c, 9, ARC_X_R(c, 27));
  /* 10226c: b #0x102278 */
  goto L_102278;
L_102270:;
  /* 102270: ldr x9, [x26, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 102274: str x8, [x26, #0x10] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(16)), ARC_X_R(c, 8));
L_102278:;
  /* 102278: strb wzr, [x9, x8] */
  arc_st8((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_W_R(c, 31));
L_10227c:;
  /* 10227c: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 102280: ldr x9, [x26, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 102284: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 102288: csel x24, x27, x9, eq */
  ARC_X_W(c, 24, (ARC_COND(c, 0) ? (ARC_X_R(c, 27)) : ARC_X_R(c, 9)));
  /* 10228c: add x8, x24, x25 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + ARC_X_R(c, 25)));
  /* 102290: str x8, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 8));
L_102294:;
  /* 102294: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 102298: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 10229c: b.eq #0x1022a8 */
  if (ARC_COND(c, 0)) goto L_1022a8;
  /* 1022a0: ldrb w0, [x8] */
  ARC_W_W(c, 0, arc_ld8(ARC_X_R(c, 8)));
  /* 1022a4: b #0x1022b8 */
  goto L_1022b8;
L_1022a8:;
  /* 1022a8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1022ac: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1022b0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1022b4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1057464));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1022b8:;
  /* 1022b8: ldurb w5, [x29, #-0xc] */
  ARC_W_W(c, 5, arc_ld8((ARC_X_R(c, 29) + INT64_C(-12))));
  /* 1022bc: sub x3, x29, #0x48 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1022c0: add x4, sp, #0x2c */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(44)));
  /* 1022c4: sub x6, x29, #0x28 */
  ARC_X_W(c, 6, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 1022c8: add x7, sp, #0x38 */
  ARC_X_W(c, 7, ((c)->sp + UINT64_C(56)));
  /* 1022cc: mov w1, w23 */
  ARC_W_W(c, 1, ARC_W_R(c, 23));
  /* 1022d0: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 1022d4: stp x22, x28, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 28));
  }
  /* 1022d8: bl #0x143868 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1057500));
  fn1_143868(c);
  /* 1022dc: cbnz w0, #0x102304 */
  if ((ARC_W_R(c, 0)) != 0) goto L_102304;
  /* 1022e0: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1022e4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1022e8: b.ne #0x102100 */
  if (ARC_COND(c, 1)) goto L_102100;
  /* 1022ec: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1022f0: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 1022f4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1022f8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1057532));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1022fc: b #0x102108 */
  goto L_102108;
L_102300:;
  /* 102300: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
L_102304:;
  /* 102304: ldurb w8, [x29, #-0x28] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 102308: ldr x9, [x26, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(40))));
  /* 10230c: ldr x22, [sp, #0x20] */
  ARC_X_W(c, 22, arc_ld64(((c)->sp + INT64_C(32))));
  /* 102310: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 102314: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 102318: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 10231c: cbz x8, #0x102340 */
  if ((ARC_X_R(c, 8)) == 0) goto L_102340;
  /* 102320: ldr x8, [sp, #0x30] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(48))));
  /* 102324: add x9, sp, #0x38 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(56)));
  /* 102328: sub x9, x8, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* 10232c: cmp x9, #0x9f */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(159));
  /* 102330: b.gt #0x102340 */
  if (ARC_COND(c, 12)) goto L_102340;
  /* 102334: ldr w9, [sp, #0x2c] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(44))));
  /* 102338: str w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 9));
  }
  /* 10233c: str x8, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 8));
L_102340:;
  /* 102340: ldr x1, [x26] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 26)));
  /* 102344: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 102348: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 10234c: mov w3, w23 */
  ARC_W_W(c, 3, ARC_W_R(c, 23));
  /* 102350: bl #0x135fe4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1057620));
  fn1_135fe4(c);
  /* 102354: ldurb w10, [x29, #-0x28] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 102358: ldr x12, [sp, #0x30] */
  ARC_X_W(c, 12, arc_ld64(((c)->sp + INT64_C(48))));
  /* 10235c: add x11, sp, #0x38 */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(56)));
  /* 102360: ldr x8, [x26, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(40))));
  /* 102364: lsr x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* 102368: ands w13, w10, #1 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 13, _r); }
  /* 10236c: sub x11, x12, x11 */
  ARC_X_W(c, 11, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* 102370: csel x8, x9, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 102374: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
  /* 102378: cmp x11, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(5));
  /* 10237c: str x0, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 0));
  /* 102380: b.lt #0x1024e0 */
  if (ARC_COND(c, 11)) goto L_1024e0;
  /* 102384: cbz x8, #0x1024e0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1024e0;
  /* 102388: sub x8, x12, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 12) - UINT64_C(4)));
  /* 10238c: add x9, sp, #0x38 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(56)));
  /* 102390: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 102394: cset w11, lo */
  ARC_W_W(c, 11, (ARC_COND(c, 3) ? 1 : 0));
  /* 102398: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* 10239c: b.eq #0x10244c */
  if (ARC_COND(c, 0)) goto L_10244c;
  /* 1023a0: cbz w11, #0x10244c */
  if ((ARC_W_R(c, 11)) == 0) goto L_10244c;
  /* 1023a4: add x10, sp, #0x38 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(56)));
  /* 1023a8: sub x14, x12, #8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) - UINT64_C(8)));
  /* 1023ac: add x11, x10, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 1023b0: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 1023b4: csel x13, x14, x11, hi */
  ARC_X_W(c, 13, (ARC_COND(c, 8) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* 1023b8: sub x13, x13, #4 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(4)));
  /* 1023bc: cmp x13, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 10));
  /* 1023c0: cinc x15, x10, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
  /* 1023c4: cmp x13, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 10));
  /* 1023c8: sub x15, x13, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) - ARC_X_R(c, 15)));
  /* 1023cc: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* 1023d0: cinc x13, x15, ne */
  ARC_X_W(c, 13, (ARC_COND(c, 1) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* 1023d4: cmp x13, #0x13 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(19));
  /* 1023d8: b.lo #0x102420 */
  if (ARC_COND(c, 3)) goto L_102420;
  /* 1023dc: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 1023e0: csel x14, x14, x11, hi */
  ARC_X_W(c, 14, (ARC_COND(c, 8) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* 1023e4: sub x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(4)));
  /* 1023e8: cmp x14, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 10));
  /* 1023ec: cinc x15, x10, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
  /* 1023f0: cmp x14, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 10));
  /* 1023f4: sub x15, x14, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 14) - ARC_X_R(c, 15)));
  /* 1023f8: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* 1023fc: cinc x14, x15, ne */
  ARC_X_W(c, 14, (ARC_COND(c, 1) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* 102400: cmp x10, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 12));
  /* 102404: b.hs #0x102570 */
  if (ARC_COND(c, 2)) goto L_102570;
  /* 102408: lsl x14, x14, #2 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(2)) & 63)));
  /* 10240c: sub x15, x12, x14 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ARC_X_R(c, 14)));
  /* 102410: add x11, x11, x14 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ARC_X_R(c, 14)));
  /* 102414: sub x14, x15, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) - UINT64_C(4)));
  /* 102418: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 10241c: b.hs #0x102570 */
  if (ARC_COND(c, 2)) goto L_102570;
L_102420:;
  /* 102420: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
L_102424:;
  /* 102424: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
L_102428:;
  /* 102428: ldr w12, [x11] */
  ARC_W_W(c, 12, arc_ld32(ARC_X_R(c, 11)));
  /* 10242c: ldur w13, [x10, #-4] */
  ARC_W_W(c, 13, arc_ld32((ARC_X_R(c, 10) + INT64_C(-4))));
  /* 102430: stur w12, [x10, #-4] */
  arc_st32((ARC_X_R(c, 10) + INT64_C(-4)), ARC_W_R(c, 12));
  /* 102434: str w13, [x11], #0xfffffffffffffffc */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(-4));
    arc_st32(_a, ARC_W_R(c, 13));
  }
  /* 102438: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 10243c: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 102440: b.lo #0x102428 */
  if (ARC_COND(c, 3)) goto L_102428;
L_102444:;
  /* 102444: ldurb w10, [x29, #-0x28] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 102448: and w13, w10, #1 */
  ARC_W_W(c, 13, (ARC_W_R(c, 10) & UINT64_C(1)));
L_10244c:;
  /* 10244c: ldr x11, [x26, #0x30] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 26) + INT64_C(48))));
  /* 102450: cmp w13, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(0));
  /* 102454: sub x12, x29, #0x28 */
  ARC_X_W(c, 12, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 102458: csinc x11, x11, x12, ne */
  ARC_X_W(c, 11, (ARC_COND(c, 1) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 12)) + 1)));
  /* 10245c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 102460: b.hs #0x1024b8 */
  if (ARC_COND(c, 2)) goto L_1024b8;
  /* 102464: lsr w9, w10, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 10)) >> ((UINT64_C(1)) & 31)));
  /* 102468: ldr x10, [x26, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 26) + INT64_C(40))));
  /* 10246c: cmp w13, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(0));
  /* 102470: csel x9, x9, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* 102474: add x10, sp, #0x38 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(56)));
  /* 102478: add x9, x11, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) + ARC_X_R(c, 9)));
  /* 10247c: b #0x102498 */
  goto L_102498;
L_102480:;
  /* 102480: sub x12, x9, x11 */
  ARC_X_W(c, 12, (ARC_X_R(c, 9) - ARC_X_R(c, 11)));
  /* 102484: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 102488: cmp x12, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(1));
  /* 10248c: cinc x11, x11, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 11)) + 1 : (ARC_X_R(c, 11))));
  /* 102490: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* 102494: b.hs #0x1024b8 */
  if (ARC_COND(c, 2)) goto L_1024b8;
L_102498:;
  /* 102498: ldrb w12, [x11] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 11)));
  /* 10249c: cbz w12, #0x102480 */
  if ((ARC_W_R(c, 12)) == 0) goto L_102480;
  /* 1024a0: cmp w12, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(255));
  /* 1024a4: b.eq #0x102480 */
  if (ARC_COND(c, 0)) goto L_102480;
  /* 1024a8: ldr w13, [x10] */
  ARC_W_W(c, 13, arc_ld32(ARC_X_R(c, 10)));
  /* 1024ac: cmp w13, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 12));
  /* 1024b0: b.eq #0x102480 */
  if (ARC_COND(c, 0)) goto L_102480;
  /* 1024b4: b #0x1024d8 */
  goto L_1024d8;
L_1024b8:;
  /* 1024b8: ldrb w9, [x11] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 11)));
  /* 1024bc: cbz w9, #0x1024e0 */
  if ((ARC_W_R(c, 9)) == 0) goto L_1024e0;
  /* 1024c0: cmp w9, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(255));
  /* 1024c4: b.eq #0x1024e0 */
  if (ARC_COND(c, 0)) goto L_1024e0;
  /* 1024c8: ldr w8, [x8] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 8)));
  /* 1024cc: sub w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* 1024d0: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* 1024d4: b.lo #0x1024e0 */
  if (ARC_COND(c, 3)) goto L_1024e0;
L_1024d8:;
  /* 1024d8: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 1024dc: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_1024e0:;
  /* 1024e0: cbz x20, #0x102508 */
  if ((ARC_X_R(c, 20)) == 0) goto L_102508;
  /* 1024e4: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1024e8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1024ec: b.eq #0x102524 */
  if (ARC_COND(c, 0)) goto L_102524;
  /* 1024f0: cbz x21, #0x102610 */
  if ((ARC_X_R(c, 21)) == 0) goto L_102610;
  /* 1024f4: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1024f8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1024fc: b.ne #0x102604 */
  if (ARC_COND(c, 1)) goto L_102604;
  /* 102500: mov w19, wzr */
  ARC_W_W(c, 19, ARC_W_R(c, 31));
  /* 102504: b #0x1025e4 */
  goto L_1025e4;
L_102508:;
  /* 102508: cbz x21, #0x102568 */
  if ((ARC_X_R(c, 21)) == 0) goto L_102568;
  /* 10250c: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 102510: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 102514: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 102518: b.ne #0x102610 */
  if (ARC_COND(c, 1)) goto L_102610;
  /* 10251c: mov w19, #1 */
  ARC_W_W(c, 19, UINT64_C(1));
  /* 102520: b #0x1025e4 */
  goto L_1025e4;
L_102524:;
  /* 102524: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 102528: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 10252c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 102530: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1058100));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 102534: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 102538: cset w19, eq */
  ARC_W_W(c, 19, (ARC_COND(c, 0) ? 1 : 0));
  /* 10253c: cbz x21, #0x102560 */
  if ((ARC_X_R(c, 21)) == 0) goto L_102560;
  /* 102540: ldp x9, x10, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 102544: csel x8, xzr, x20, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 20)));
  /* 102548: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 10254c: b.eq #0x1025e0 */
  if (ARC_COND(c, 0)) goto L_1025e0;
  /* 102550: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 102554: b.ne #0x102604 */
  if (ARC_COND(c, 1)) goto L_102604;
  /* 102558: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 10255c: b #0x102610 */
  goto L_102610;
L_102560:;
  /* 102560: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 102564: b.ne #0x102610 */
  if (ARC_COND(c, 1)) goto L_102610;
L_102568:;
  /* 102568: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 10256c: b #0x102604 */
  goto L_102604;
L_102570:;
  /* 102570: add x13, x13, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(1)));
  /* 102574: add x15, sp, #0x38 */
  ARC_X_W(c, 15, ((c)->sp + UINT64_C(56)));
  /* 102578: sub x12, x12, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(16)));
  /* 10257c: and x14, x13, #0x7ffffffffffffff8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 13) & UINT64_C(9223372036854775800)));
  /* 102580: lsl x10, x14, #2 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(2)) & 63)));
  /* 102584: mov x16, x14 */
  ARC_X_W(c, 16, ARC_X_R(c, 14));
  /* 102588: sub x11, x8, x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) - ARC_X_R(c, 10)));
  /* 10258c: add x10, x15, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 15) + ARC_X_R(c, 10)));
  /* 102590: add x15, x15, #0x10 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(16)));
L_102594:;
  /* 102594: ldp q1, q0, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 102598: sub x16, x16, #8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) - UINT64_C(8)));
  /* 10259c: ldp q2, q3, [x15, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 15) + INT64_C(-16));
    arc_q_w(c, 2, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 3, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 1025a0: rev64 v0.4s, v0.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[0].u32[1];
    _t.u32[1] = (c)->q[0].u32[0];
    _t.u32[2] = (c)->q[0].u32[3];
    _t.u32[3] = (c)->q[0].u32[2];
    (c)->q[0] = _t; }
  /* 1025a4: rev64 v1.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[1].u32[1];
    _t.u32[1] = (c)->q[1].u32[0];
    _t.u32[2] = (c)->q[1].u32[3];
    _t.u32[3] = (c)->q[1].u32[2];
    (c)->q[1] = _t; }
  /* 1025a8: rev64 v2.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[2].u32[1];
    _t.u32[1] = (c)->q[2].u32[0];
    _t.u32[2] = (c)->q[2].u32[3];
    _t.u32[3] = (c)->q[2].u32[2];
    (c)->q[2] = _t; }
  /* 1025ac: rev64 v3.4s, v3.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[3].u32[1];
    _t.u32[1] = (c)->q[3].u32[0];
    _t.u32[2] = (c)->q[3].u32[3];
    _t.u32[3] = (c)->q[3].u32[2];
    (c)->q[3] = _t; }
  /* 1025b0: ext v0.16b, v0.16b, v0.16b, #8 */
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
  /* 1025b4: ext v1.16b, v1.16b, v1.16b, #8 */
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
  /* 1025b8: ext v2.16b, v2.16b, v2.16b, #8 */
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
  /* 1025bc: ext v3.16b, v3.16b, v3.16b, #8 */
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
  /* 1025c0: stp q0, q1, [x15, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 15) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 1025c4: add x15, x15, #0x20 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(32)));
  /* 1025c8: stp q3, q2, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_st64(_pa, (c)->q[3].u64[0]);
    arc_st64(_pa + 8, (c)->q[3].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* 1025cc: sub x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(32)));
  /* 1025d0: cbnz x16, #0x102594 */
  if ((ARC_X_R(c, 16)) != 0) goto L_102594;
  /* 1025d4: cmp x13, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 14));
  /* 1025d8: b.eq #0x102444 */
  if (ARC_COND(c, 0)) goto L_102444;
  /* 1025dc: b #0x102424 */
  goto L_102424;
L_1025e0:;
  /* 1025e0: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
L_1025e4:;
  /* 1025e4: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 1025e8: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1025ec: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1025f0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1058292));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1025f4: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1025f8: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 1025fc: eor w8, w19, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 19) ^ ARC_W_R(c, 8)));
  /* 102600: tbnz w8, #0, #0x102610 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_102610;
L_102604:;
  /* 102604: ldr w8, [x22] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 22)));
  /* 102608: orr w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(2)));
  /* 10260c: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_102610:;
  /* 102610: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 102614: tbz w8, #0, #0x102628 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_102628;
  /* 102618: ldr x8, [x26, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(8))));
  /* 10261c: ldr x0, [x26, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 102620: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 102624: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1058344));
  fn1_142608(c);
L_102628:;
  /* 102628: ldurb w8, [x29, #-0x28] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 10262c: tbz w8, #0, #0x102640 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_102640;
  /* 102630: ldr x8, [x26, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(32))));
  /* 102634: ldr x0, [x26, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(48))));
  /* 102638: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 10263c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1058368));
  fn1_142608(c);
L_102640:;
  /* 102640: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 102644: ldp x20, x19, [sp, #0x170] */
  { const uint64_t _pa = ((c)->sp + INT64_C(368));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 102648: ldp x22, x21, [sp, #0x160] */
  { const uint64_t _pa = ((c)->sp + INT64_C(352));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 10264c: ldp x24, x23, [sp, #0x150] */
  { const uint64_t _pa = ((c)->sp + INT64_C(336));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 102650: ldp x26, x25, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 102654: ldp x28, x27, [sp, #0x130] */
  { const uint64_t _pa = ((c)->sp + INT64_C(304));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 102658: ldp x29, x30, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 10265c: add sp, sp, #0x180 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(384)));
  /* 102660: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 102664: ret  */
  return;
L_102668:;
  /* 102668: mov x20, x21 */
  ARC_X_W(c, 20, ARC_X_R(c, 21));
  /* 10266c: b #0x102304 */
  goto L_102304;
  /* 102670: b #0x10267c */
  goto L_10267c;
  /* 102674: b #0x10267c */
  goto L_10267c;
  /* 102678: b #0x10267c */
  goto L_10267c;
L_10267c:;
  /* 10267c: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 102680: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 102684: tbnz w8, #0, #0x102698 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_102698;
  /* 102688: ldurb w8, [x29, #-0x28] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 10268c: tbnz w8, #0, #0x1026b0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1026b0;
L_102690:;
  /* 102690: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 102694: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1058456));
  fn1_9cc20(c);
L_102698:;
  /* 102698: ldr x8, [x26, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(8))));
  /* 10269c: ldr x0, [x26, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 1026a0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1026a4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1058472));
  fn1_142608(c);
  /* 1026a8: ldurb w8, [x29, #-0x28] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 1026ac: tbz w8, #0, #0x102690 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_102690;
L_1026b0:;
  /* 1026b0: ldr x8, [x26, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(32))));
  /* 1026b4: ldr x0, [x26, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(48))));
  /* 1026b8: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1026bc: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1058496));
  fn1_142608(c);
  /* 1026c0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1026c4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1058504));
  fn1_9cc20(c);
}

void fn1_1106e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039043808));
  /* 1106e0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1106e4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1106e8: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1106ec: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1106f0: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* 1106f4: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 1106f8: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1106fc: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 110700: mov x2, x4 */
  ARC_X_W(c, 2, ARC_X_R(c, 4));
  /* 110704: mov x3, x5 */
  ARC_X_W(c, 3, ARC_X_R(c, 5));
  /* 110708: mov w4, #2 */
  ARC_W_W(c, 4, UINT64_C(2));
  /* 11070c: bl #0x110db0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1115920));
  fn1_110db0(c);
  /* 110710: ldr w9, [x19] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 19)));
  /* 110714: sub w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) - UINT64_C(1)));
  /* 110718: cmp w8, #0xb */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(11));
  /* 11071c: b.hi #0x11072c */
  if (ARC_COND(c, 8)) goto L_11072c;
  /* 110720: tbnz w9, #2, #0x11072c */
  if (((ARC_W_R(c, 9)) >> 2 & 1) != 0) goto L_11072c;
  /* 110724: str w8, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 8));
  /* 110728: b #0x110734 */
  goto L_110734;
L_11072c:;
  /* 11072c: orr w8, w9, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) | UINT64_C(4)));
  /* 110730: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_110734:;
  /* 110734: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 110738: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 11073c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 110740: ret  */
  return;
}

void fn1_113d28(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057704));
  /* 113d28: bti c */
  /* bti: no architectural effect here */
  /* 113d2c: mov w0, #0x302 */
  ARC_W_W(c, 0, UINT64_C(770));
  /* 113d30: movk w0, #0x400, lsl #16 */
  ARC_W_W(c, 0, ((ARC_W_R(c, 0) & UINT64_C(18446744069414649855)) | UINT64_C(67108864)));
  /* 113d34: ret  */
  return;
}

void fn1_11a854(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039085140));
  /* 11a854: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 11a858: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 11a85c: stp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 11a860: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 11a864: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 11a868: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 11a86c: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 11a870: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 11a874: sub sp, sp, #0x250 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(592)));
  /* 11a878: mov x28, x1 */
  ARC_X_W(c, 28, ARC_X_R(c, 1));
  /* 11a87c: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 11a880: add x1, x3, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 3) + UINT64_C(48)));
  /* 11a884: mov x22, x5 */
  ARC_X_W(c, 22, ARC_X_R(c, 5));
  /* 11a888: mov w21, w4 */
  ARC_W_W(c, 21, ARC_W_R(c, 4));
  /* 11a88c: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* 11a890: mov w24, w2 */
  ARC_W_W(c, 24, ARC_W_R(c, 2));
  /* 11a894: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1157272));
  fn1_143460(c);
  /* 11a898: adrp x27, #0x151000 */
  ARC_X_W(c, 27, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11a89c: ldr x27, [x27, #0xb58] */
  ARC_X_W(c, 27, arc_ld64((ARC_X_R(c, 27) + INT64_C(2904))));
  /* 11a8a0: ldur x26, [x29, #-0x10] */
  ARC_X_W(c, 26, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 11a8a4: ldar x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 11a8a8: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11a8ac: b.eq #0x11a968 */
  if (ARC_COND(c, 0)) goto L_11a968;
  /* 11a8b0: nop  */
  /* nop: no architectural effect here */
  /* 11a8b4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11a8b8: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1157308));
  fn1_142518(c);
  /* 11a8bc: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 11a8c0: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11a8c4: b.ne #0x11a8f0 */
  if (ARC_COND(c, 1)) goto L_11a8f0;
  /* 11a8c8: nop  */
  /* nop: no architectural effect here */
  /* 11a8cc: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11a8d0: nop  */
  /* nop: no architectural effect here */
  /* 11a8d4: adr x25, #0x1578f4 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1407220)));
L_11a8d8:;
  /* 11a8d8: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 11a8dc: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 11a8e0: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1157348));
  fn1_142530(c);
  /* 11a8e4: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 11a8e8: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11a8ec: b.eq #0x11a8d8 */
  if (ARC_COND(c, 0)) goto L_11a8d8;
L_11a8f0:;
  /* 11a8f0: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 11a8f4: cbz x8, #0x11a908 */
  if ((ARC_X_R(c, 8)) == 0) goto L_11a908;
  /* 11a8f8: nop  */
  /* nop: no architectural effect here */
  /* 11a8fc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11a900: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1157380));
  fn1_142560(c);
  /* 11a904: b #0x11a968 */
  goto L_11a968;
L_11a908:;
  /* 11a908: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11a90c: str x27, [sp, #0x50] */
  arc_st64(((c)->sp + INT64_C(80)), ARC_X_R(c, 27));
  /* 11a910: strb wzr, [sp, #0x58] */
  arc_st8(((c)->sp + INT64_C(88)), ARC_W_R(c, 31));
  /* 11a914: str x8, [x27] */
  arc_st64(ARC_X_R(c, 27), ARC_X_R(c, 8));
  /* 11a918: nop  */
  /* nop: no architectural effect here */
  /* 11a91c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11a920: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1157412));
  fn1_142560(c);
  /* 11a924: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11a928: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11a92c: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11a930: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1157428));
  fn1_a2030(c);
  /* 11a934: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11a938: str w8, [x27, #8] */
  arc_st32((ARC_X_R(c, 27) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11a93c: nop  */
  /* nop: no architectural effect here */
  /* 11a940: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11a944: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1157448));
  fn1_142518(c);
  /* 11a948: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11a94c: stlr x8, [x27] */
  arc_st64(ARC_X_R(c, 27), ARC_X_R(c, 8));
  /* 11a950: nop  */
  /* nop: no architectural effect here */
  /* 11a954: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11a958: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1157468));
  fn1_142560(c);
  /* 11a95c: nop  */
  /* nop: no architectural effect here */
  /* 11a960: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11a964: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1157480));
  fn1_142578(c);
L_11a968:;
  /* 11a968: ldp x8, x10, [x26, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 26) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 11a96c: ldrsw x9, [x27, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 27) + INT64_C(8)))));
  /* 11a970: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 11a974: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 11a978: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 11a97c: b.hs #0x11abfc */
  if (ARC_COND(c, 2)) goto L_11abfc;
  /* 11a980: ldr x23, [x8, x9, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 11a984: cbz x23, #0x11abfc */
  if ((ARC_X_R(c, 23)) == 0) goto L_11abfc;
  /* 11a988: ldrb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 11a98c: ldr x9, [x22, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* 11a990: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 11a994: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 11a998: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 11a99c: cbz x9, #0x11a9d4 */
  if ((ARC_X_R(c, 9)) == 0) goto L_11a9d4;
  /* 11a9a0: ldr x9, [x22, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 11a9a4: add x10, x22, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 22) + UINT64_C(4)));
  /* 11a9a8: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 11a9ac: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11a9b0: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 11a9b4: ldr w19, [x9] */
  ARC_W_W(c, 19, arc_ld32(ARC_X_R(c, 9)));
  /* 11a9b8: ldr x8, [x8, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* 11a9bc: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 11a9c0: mov w1, #0x2d */
  ARC_W_W(c, 1, UINT64_C(45));
  /* 11a9c4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1157576));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11a9c8: cmp w19, w0 */
  (void)arc_sub32(c, ARC_W_R(c, 19), ARC_W_R(c, 0));
  /* 11a9cc: cset w25, eq */
  ARC_W_W(c, 25, (ARC_COND(c, 0) ? 1 : 0));
  /* 11a9d0: b #0x11a9d8 */
  goto L_11a9d8;
L_11a9d4:;
  /* 11a9d4: mov w25, wzr */
  ARC_W_W(c, 25, ARC_W_R(c, 31));
L_11a9d8:;
  /* 11a9d8: str x28, [sp, #0x38] */
  arc_st64(((c)->sp + INT64_C(56)), ARC_X_R(c, 28));
  /* 11a9dc: stp xzr, xzr, [x29, #-0x38] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-56));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 11a9e0: stur xzr, [x29, #-0x28] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-40)), ARC_X_R(c, 31));
  /* 11a9e4: stp xzr, xzr, [x29, #-0x50] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-80));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 11a9e8: stur xzr, [x29, #-0x40] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-64)), ARC_X_R(c, 31));
  /* 11a9ec: stp xzr, xzr, [x29, #-0x68] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-104));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 11a9f0: stur xzr, [x29, #-0x58] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-88)), ARC_X_R(c, 31));
  /* 11a9f4: sub x8, x29, #0x6c */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(108)));
  /* 11a9f8: sub x9, x29, #0x68 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) - UINT64_C(104)));
  /* 11a9fc: and w0, w24, #1 */
  ARC_W_W(c, 0, (ARC_W_R(c, 24) & UINT64_C(1)));
  /* 11aa00: sub x2, x29, #0x10 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 11aa04: sub x3, x29, #0x14 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(20)));
  /* 11aa08: sub x4, x29, #0x18 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 11aa0c: sub x5, x29, #0x1c */
  ARC_X_W(c, 5, (ARC_X_R(c, 29) - UINT64_C(28)));
  /* 11aa10: sub x6, x29, #0x38 */
  ARC_X_W(c, 6, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 11aa14: sub x7, x29, #0x50 */
  ARC_X_W(c, 7, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 11aa18: mov w1, w25 */
  ARC_W_W(c, 1, ARC_W_R(c, 25));
  /* 11aa1c: stp x9, x8, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 11aa20: bl #0x143a90 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1157668));
  fn1_143a90(c);
  /* 11aa24: ldrb w28, [x22] */
  ARC_W_W(c, 28, arc_ld8(ARC_X_R(c, 22)));
  /* 11aa28: ldr x8, [x22, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* 11aa2c: ldursw x27, [x29, #-0x6c] */
  ARC_X_W(c, 27, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 29) + INT64_C(-108)))));
  /* 11aa30: lsr x9, x28, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 28)) >> ((UINT64_C(1)) & 63)));
  /* 11aa34: tst w28, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 28) & UINT64_C(1)));
  /* 11aa38: csel x19, x9, x8, eq */
  ARC_X_W(c, 19, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 11aa3c: cmp w27, w19 */
  (void)arc_sub32(c, ARC_W_R(c, 27), ARC_W_R(c, 19));
  /* 11aa40: b.ge #0x11aa94 */
  if (ARC_COND(c, 10)) goto L_11aa94;
  /* 11aa44: ldurb w8, [x29, #-0x68] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-104))));
  /* 11aa48: ldurb w9, [x29, #-0x50] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 29) + INT64_C(-80))));
  /* 11aa4c: ldur x10, [x29, #-0x60] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 11aa50: lsr x11, x8, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 11aa54: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 11aa58: ldur x8, [x29, #-0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-72))));
  /* 11aa5c: lsr x12, x9, #1 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 11aa60: csel x10, x11, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 11aa64: sub x11, x19, x27 */
  ARC_X_W(c, 11, (ARC_X_R(c, 19) - ARC_X_R(c, 27)));
  /* 11aa68: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 11aa6c: csel x8, x12, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 8)));
  /* 11aa70: add x9, x27, x11, lsl #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 27) + ((uint64_t)(ARC_X_R(c, 11)) << 1)));
  /* 11aa74: add x8, x10, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + ARC_X_R(c, 8)));
  /* 11aa78: add x8, x9, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ARC_X_R(c, 8)));
  /* 11aa7c: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 11aa80: cmp x8, #0x65 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(101));
  /* 11aa84: b.hs #0x11aad0 */
  if (ARC_COND(c, 2)) goto L_11aad0;
L_11aa88:;
  /* 11aa88: mov x24, xzr */
  ARC_X_W(c, 24, ARC_X_R(c, 31));
  /* 11aa8c: add x26, sp, #0x50 */
  ARC_X_W(c, 26, ((c)->sp + UINT64_C(80)));
  /* 11aa90: b #0x11aae4 */
  goto L_11aae4;
L_11aa94:;
  /* 11aa94: ldurb w8, [x29, #-0x68] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-104))));
  /* 11aa98: ldurb w9, [x29, #-0x50] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 29) + INT64_C(-80))));
  /* 11aa9c: ldur x10, [x29, #-0x60] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 11aaa0: lsr x11, x8, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 11aaa4: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 11aaa8: ldur x8, [x29, #-0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-72))));
  /* 11aaac: lsr x12, x9, #1 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 11aab0: csel x10, x11, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 11aab4: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 11aab8: csel x8, x12, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 8)));
  /* 11aabc: add x9, x27, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 27) + ARC_X_R(c, 10)));
  /* 11aac0: add x8, x9, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ARC_X_R(c, 8)));
  /* 11aac4: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* 11aac8: cmp x8, #0x65 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(101));
  /* 11aacc: b.lo #0x11aa88 */
  if (ARC_COND(c, 3)) goto L_11aa88;
L_11aad0:;
  /* 11aad0: lsl x0, x8, #2 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 11aad4: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1157848));
  fn1_1428a8(c);
  /* 11aad8: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 11aadc: mov x26, x0 */
  ARC_X_W(c, 26, ARC_X_R(c, 0));
  /* 11aae0: cbz x0, #0x11ac00 */
  if ((ARC_X_R(c, 0)) == 0) goto L_11ac00;
L_11aae4:;
  /* 11aae4: ldr x8, [x22, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 11aae8: add x9, x22, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 22) + UINT64_C(4)));
  /* 11aaec: tst w28, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 28) & UINT64_C(1)));
  /* 11aaf0: ldr w3, [x20, #8] */
  ARC_W_W(c, 3, arc_ld32((ARC_X_R(c, 20) + INT64_C(8))));
  /* 11aaf4: csel x4, x9, x8, eq */
  ARC_X_W(c, 4, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 11aaf8: ldp w9, w8, [x29, #-0x1c] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-28));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 8, arc_ld32(_pa + 4));
  }
  /* 11aafc: add x5, x4, x19, lsl #2 */
  ARC_X_W(c, 5, (ARC_X_R(c, 4) + ((uint64_t)(ARC_X_R(c, 19)) << 2)));
  /* 11ab00: sub x10, x29, #0x68 */
  ARC_X_W(c, 10, (ARC_X_R(c, 29) - UINT64_C(104)));
  /* 11ab04: sub x11, x29, #0x50 */
  ARC_X_W(c, 11, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 11ab08: add x1, sp, #0x48 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(72)));
  /* 11ab0c: stp x11, x10, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 11ab10: sub x10, x29, #0x38 */
  ARC_X_W(c, 10, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 11ab14: add x2, sp, #0x40 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(64)));
  /* 11ab18: str x10, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 10));
  /* 11ab1c: sub x10, x29, #0x14 */
  ARC_X_W(c, 10, (ARC_X_R(c, 29) - UINT64_C(20)));
  /* 11ab20: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 11ab24: mov x6, x23 */
  ARC_X_W(c, 6, ARC_X_R(c, 23));
  /* 11ab28: mov w7, w25 */
  ARC_W_W(c, 7, ARC_W_R(c, 25));
  /* 11ab2c: str w27, [sp, #0x30] */
  arc_st32(((c)->sp + INT64_C(48)), ARC_W_R(c, 27));
  /* 11ab30: str w9, [sp, #0x10] */
  arc_st32(((c)->sp + INT64_C(16)), ARC_W_R(c, 9));
  /* 11ab34: str w8, [sp, #8] */
  arc_st32(((c)->sp + INT64_C(8)), ARC_W_R(c, 8));
  /* 11ab38: str x10, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 10));
  /* 11ab3c: bl #0x143aa8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1157952));
  fn1_143aa8(c);
  /* 11ab40: ldp x3, x2, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 3, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 11ab44: ldr x0, [sp, #0x38] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(56))));
  /* 11ab48: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 11ab4c: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* 11ab50: mov w5, w21 */
  ARC_W_W(c, 5, ARC_W_R(c, 21));
  /* 11ab54: bl #0x10cdc0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1157976));
  fn1_10cdc0(c);
  /* 11ab58: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 11ab5c: cbz x24, #0x11ab68 */
  if ((ARC_X_R(c, 24)) == 0) goto L_11ab68;
  /* 11ab60: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 11ab64: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1157992));
  fn1_142800(c);
L_11ab68:;
  /* 11ab68: ldurb w8, [x29, #-0x68] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-104))));
  /* 11ab6c: tbnz w8, #0, #0x11abc0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_11abc0;
  /* 11ab70: ldurb w8, [x29, #-0x50] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-80))));
  /* 11ab74: tbnz w8, #0, #0x11abdc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_11abdc;
L_11ab78:;
  /* 11ab78: ldurb w8, [x29, #-0x38] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-56))));
  /* 11ab7c: tbz w8, #0, #0x11ab90 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_11ab90;
L_11ab80:;
  /* 11ab80: ldur x8, [x29, #-0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-56))));
  /* 11ab84: ldur x0, [x29, #-0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 11ab88: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 11ab8c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1158032));
  fn1_142608(c);
L_11ab90:;
  /* 11ab90: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 11ab94: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1158040));
  fn1_143478(c);
  /* 11ab98: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11ab9c: add sp, sp, #0x250 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(592)));
  /* 11aba0: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 11aba4: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 11aba8: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 11abac: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 11abb0: ldp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 11abb4: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 11abb8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 11abbc: ret  */
  return;
L_11abc0:;
  /* 11abc0: ldur x8, [x29, #-0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-104))));
  /* 11abc4: ldur x0, [x29, #-0x58] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-88))));
  /* 11abc8: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 11abcc: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 11abd0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1158100));
  fn1_142608(c);
  /* 11abd4: ldurb w8, [x29, #-0x50] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-80))));
  /* 11abd8: tbz w8, #0, #0x11ab78 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_11ab78;
L_11abdc:;
  /* 11abdc: ldur x8, [x29, #-0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-80))));
  /* 11abe0: ldur x0, [x29, #-0x40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 11abe4: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 11abe8: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 11abec: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1158128));
  fn1_142608(c);
  /* 11abf0: ldurb w8, [x29, #-0x38] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-56))));
  /* 11abf4: tbnz w8, #0, #0x11ab80 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_11ab80;
  /* 11abf8: b #0x11ab90 */
  goto L_11ab90;
L_11abfc:;
  /* 11abfc: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1158144));
  fn1_fc3b8(c);
L_11ac00:;
  /* 11ac00: bl #0x142c08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1158148));
  fn1_142c08(c);
  /* 11ac04: b #0x11ac1c */
  goto L_11ac1c;
  /* 11ac08: b #0x11acb0 */
  goto L_11acb0;
  /* 11ac0c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 11ac10: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* 11ac14: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1158168));
  fn1_d2a78(c);
  /* 11ac18: b #0x11acb4 */
  goto L_11acb4;
L_11ac1c:;
  /* 11ac1c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 11ac20: ldurb w8, [x29, #-0x68] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-104))));
  /* 11ac24: tbz w8, #0, #0x11ac74 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_11ac74;
L_11ac28:;
  /* 11ac28: ldur x8, [x29, #-0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-104))));
  /* 11ac2c: ldur x0, [x29, #-0x58] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-88))));
  /* 11ac30: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 11ac34: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 11ac38: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1158204));
  fn1_142608(c);
  /* 11ac3c: ldurb w8, [x29, #-0x50] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-80))));
  /* 11ac40: tbz w8, #0, #0x11ac7c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_11ac7c;
L_11ac44:;
  /* 11ac44: ldur x8, [x29, #-0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-80))));
  /* 11ac48: ldur x0, [x29, #-0x40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 11ac4c: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 11ac50: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 11ac54: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1158232));
  fn1_142608(c);
  /* 11ac58: ldurb w8, [x29, #-0x38] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-56))));
  /* 11ac5c: tbz w8, #0, #0x11acb4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_11acb4;
  /* 11ac60: b #0x11ac84 */
  goto L_11ac84;
  /* 11ac64: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 11ac68: cbnz x24, #0x11ac98 */
  if ((ARC_X_R(c, 24)) != 0) goto L_11ac98;
  /* 11ac6c: ldurb w8, [x29, #-0x68] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-104))));
  /* 11ac70: tbnz w8, #0, #0x11ac28 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_11ac28;
L_11ac74:;
  /* 11ac74: ldurb w8, [x29, #-0x50] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-80))));
  /* 11ac78: tbnz w8, #0, #0x11ac44 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_11ac44;
L_11ac7c:;
  /* 11ac7c: ldurb w8, [x29, #-0x38] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-56))));
  /* 11ac80: tbz w8, #0, #0x11acb4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_11acb4;
L_11ac84:;
  /* 11ac84: ldur x8, [x29, #-0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-56))));
  /* 11ac88: ldur x0, [x29, #-0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 11ac8c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 11ac90: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1158292));
  fn1_142608(c);
  /* 11ac94: b #0x11acb4 */
  goto L_11acb4;
L_11ac98:;
  /* 11ac98: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 11ac9c: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1158304));
  fn1_142800(c);
  /* 11aca0: ldurb w8, [x29, #-0x68] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-104))));
  /* 11aca4: tbz w8, #0, #0x11ac74 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_11ac74;
  /* 11aca8: b #0x11ac28 */
  goto L_11ac28;
  /* 11acac: b #0x11acb0 */
  goto L_11acb0;
L_11acb0:;
  /* 11acb0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_11acb4:;
  /* 11acb4: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 11acb8: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1158332));
  fn1_143478(c);
  /* 11acbc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11acc0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1158340));
  fn1_9cc20(c);
}

void fn1_124dd8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039127512));
  /* 124dd8: bti c */
  /* bti: no architectural effect here */
  /* 124ddc: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* 124de0: ldrb w10, [x9, #0x120] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 9) + INT64_C(288))));
  /* 124de4: tbnz w10, #0, #0x124dfc */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_124dfc;
  /* 124de8: ldr x10, [x9, #0x130] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 9) + INT64_C(304))));
  /* 124dec: ldr q0, [x9, #0x120] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(288))), arc_ld64((ARC_X_R(c, 9) + INT64_C(288)) + 8));
  /* 124df0: str x10, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 10));
  /* 124df4: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* 124df8: ret  */
  return;
L_124dfc:;
  /* 124dfc: ldp x2, x1, [x9, #0x128] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(296));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 124e00: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 124e04: b #0xda588 */
  fn1_da588(c); return;
}

void fn1_127b2c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039139116));
  /* 127b2c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 127b30: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 127b34: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 127b38: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 127b3c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 127b40: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 127b44: cmp x1, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 2));
  /* 127b48: b.eq #0x127b6c */
  if (ARC_COND(c, 0)) goto L_127b6c;
  /* 127b4c: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 127b50: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
L_127b54:;
  /* 127b54: ldr w0, [x19] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 19)));
  /* 127b58: ldr x1, [x21, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 127b5c: bl #0x144390 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1211232));
  fn1_144390(c);
  /* 127b60: str w0, [x19], #4 */
  { const uint64_t _a = ARC_X_R(c, 19);
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 0));
  }
  /* 127b64: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* 127b68: b.ne #0x127b54 */
  if (ARC_COND(c, 1)) goto L_127b54;
L_127b6c:;
  /* 127b6c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 127b70: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 127b74: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 127b78: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 127b7c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 127b80: ret  */
  return;
}

void fn1_129cbc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039147708));
  /* 129cbc: bti c */
  /* bti: no architectural effect here */
  /* 129cc0: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 129cc4: ret  */
  return;
}

void fn1_12b840(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039154752));
  /* 12b840: bti c */
  /* bti: no architectural effect here */
  /* 12b844: mov w0, #3 */
  ARC_W_W(c, 0, UINT64_C(3));
  /* 12b848: str x2, [x4] */
  arc_st64(ARC_X_R(c, 4), ARC_X_R(c, 2));
  /* 12b84c: ret  */
  return;
}

void fn1_12df28(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039164712));
  /* 12df28: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12df2c: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12df30: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12df34: nop  */
  /* nop: no architectural effect here */
  /* 12df38: adr x8, #0x15dea0 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433248)));
  /* 12df3c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 12df40: tbz w8, #0, #0x12df58 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12df58;
L_12df44:;
  /* 12df44: nop  */
  /* nop: no architectural effect here */
  /* 12df48: adr x0, #0x156d60 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1404256)));
  /* 12df4c: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12df50: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12df54: ret  */
  return;
L_12df58:;
  /* 12df58: nop  */
  /* nop: no architectural effect here */
  /* 12df5c: adr x0, #0x15dea0 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433248)));
  /* 12df60: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1236836));
  fn1_1424b8(c);
  /* 12df64: cbz w0, #0x12df44 */
  if ((ARC_W_R(c, 0)) == 0) goto L_12df44;
  /* 12df68: adrp x0, #0x151000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 12df6c: nop  */
  /* nop: no architectural effect here */
  /* 12df70: adr x1, #0x156d60 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1404256)));
  /* 12df74: ldr x0, [x0, #0xa40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(2624))));
  /* 12df78: nop  */
  /* nop: no architectural effect here */
  /* 12df7c: adr x2, #0x148af8 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1346296)));
  /* 12df80: bl #0x1423f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1236868));
  fn1_1423f8(c);
  /* 12df84: nop  */
  /* nop: no architectural effect here */
  /* 12df88: adr x0, #0x15dea0 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433248)));
  /* 12df8c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1236880));
  fn1_1424d0(c);
  /* 12df90: b #0x12df44 */
  goto L_12df44;
}

void fn1_134a78(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192184));
  /* 134a78: bti c */
  /* bti: no architectural effect here */
  /* 134a7c: add x0, x0, #0x428 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1064)));
  /* 134a80: ret  */
  return;
}

void fn1_1356f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039195384));
  /* 1356f8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1356fc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 135700: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 135704: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 135708: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 13570c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 135710: ldr x8, [x8, #0xc80] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3200))));
  /* 135714: ldr x0, [x0, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 135718: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 13571c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 135720: bl #0x144210 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1267492));
  fn1_144210(c);
  /* 135724: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 135728: bl #0x143ec8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1267500));
  fn1_143ec8(c);
  /* 13572c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 135730: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* 135734: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 135738: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13573c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 135740: b #0x142608 */
  fn1_142608(c); return;
  /* 135744: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1267528));
  fn1_a1454(c);
}

void fn1_138598(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039207320));
  /* 138598: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13859c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1385a0: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1385a4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1385a8: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1385ac: ldr x8, [x8, #0xe58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3672))));
  /* 1385b0: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* 1385b4: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* 1385b8: add x10, x8, #0x18 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* 1385bc: add x19, x0, x9 */
  ARC_X_W(c, 19, (ARC_X_R(c, 0) + ARC_X_R(c, 9)));
  /* 1385c0: add x9, x8, #0x68 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(104)));
  /* 1385c4: add x8, x8, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* 1385c8: mov x20, x19 */
  ARC_X_W(c, 20, ARC_X_R(c, 19));
  /* 1385cc: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 1385d0: str x10, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 10));
  /* 1385d4: str x9, [x20, #0x78]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(120));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(120));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* 1385d8: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* 1385dc: bl #0x144558 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1279456));
  fn1_144558(c);
  /* 1385e0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1385e4: bl #0x1433b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1279464));
  fn1_1433b8(c);
  /* 1385e8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1385ec: mov w1, #0x110 */
  ARC_W_W(c, 1, UINT64_C(272));
  /* 1385f0: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1385f4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1385f8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1385fc: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_13d9cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039228876));
  /* 13d9cc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13d9d0: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 13d9d4: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13d9d8: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 13d9dc: nop  */
  /* nop: no architectural effect here */
  /* 13d9e0: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13d9e4: ldr w9, [x1] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 1)));
  /* 13d9e8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13d9ec: tbz w8, #0, #0x13da14 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13da14;
L_13d9f0:;
  /* 13d9f0: nop  */
  /* nop: no architectural effect here */
  /* 13d9f4: adr x8, #0x156d38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13d9f8: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 13d9fc: stp x9, x8, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 13da00: bl #0x13d8bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1300996));
  fn1_13d8bc(c);
  /* 13da04: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13da08: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 13da0c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13da10: ret  */
  return;
L_13da14:;
  /* 13da14: nop  */
  /* nop: no architectural effect here */
  /* 13da18: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13da1c: stp x9, x0, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 13da20: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 13da24: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1301032));
  fn1_1424b8(c);
  /* 13da28: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 13da2c: ldp x9, x0, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 0, arc_ld64(_pa + 8));
  }
  /* 13da30: cbz w8, #0x13d9f0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_13d9f0;
  /* 13da34: nop  */
  /* nop: no architectural effect here */
  /* 13da38: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13da3c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1301056));
  fn1_1424d0(c);
  /* 13da40: ldp x9, x0, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 0, arc_ld64(_pa + 8));
  }
  /* 13da44: b #0x13d9f0 */
  goto L_13d9f0;
}

void fn1_142608(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248392));
  /* 142608: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 14260c: ldr x17, [x16, #0xf38] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3896))));
  /* 142610: add x16, x16, #0xf38 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3896)));
  /* 142614: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142618: nop  */
  /* nop: no architectural effect here */
  /* 14261c: nop  */
  /* nop: no architectural effect here */
}

void fn1_142c08(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249928));
  /* 142c08: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142c0c: ldr x17, [x16, #0x138] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(312))));
  /* 142c10: add x16, x16, #0x138 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(312)));
  /* 142c14: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142c18: nop  */
  /* nop: no architectural effect here */
  /* 142c1c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143208(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251464));
  /* 143208: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14320c: ldr x17, [x16, #0x338] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(824))));
  /* 143210: add x16, x16, #0x338 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(824)));
  /* 143214: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143218: nop  */
  /* nop: no architectural effect here */
  /* 14321c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143808(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253000));
  /* 143808: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14380c: ldr x17, [x16, #0x538] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1336))));
  /* 143810: add x16, x16, #0x538 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1336)));
  /* 143814: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143818: nop  */
  /* nop: no architectural effect here */
  /* 14381c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143e08(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254536));
  /* 143e08: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143e0c: ldr x17, [x16, #0x738] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1848))));
  /* 143e10: add x16, x16, #0x738 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1848)));
  /* 143e14: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143e18: nop  */
  /* nop: no architectural effect here */
  /* 143e1c: nop  */
  /* nop: no architectural effect here */
}

void fn1_144408(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256072));
  /* 144408: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14440c: ldr x17, [x16, #0x938] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2360))));
  /* 144410: add x16, x16, #0x938 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2360)));
  /* 144414: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144418: nop  */
  /* nop: no architectural effect here */
  /* 14441c: nop  */
  /* nop: no architectural effect here */
}

void fn1_144a08(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039257608));
  /* 144a08: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144a0c: ldr x17, [x16, #0xb38] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2872))));
  /* 144a10: add x16, x16, #0xb38 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2872)));
  /* 144a14: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144a18: nop  */
  /* nop: no architectural effect here */
  /* 144a1c: nop  */
  /* nop: no architectural effect here */
}

